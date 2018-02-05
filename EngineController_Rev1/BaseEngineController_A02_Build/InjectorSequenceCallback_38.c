/* InjectorSequenceCallback_38.c */

#include "Application.h"

S_SeqOutInjDiagReport InjectorSeqDiagInfo_38[8];
int32_T InjectorSeqDiagLastPin_38;
void InjectorSeqDiagCallback_38(S_SeqOutDiagReportPtr report,
  NativePtrSizedInt_U userData)
{
  uint32_T pin_number = (uint32_T) userData;
  InjectorSeqDiagInfo_38[pin_number].u1TXCnt = report->DiagReportObj.Inj.u1TXCnt;
  InjectorSeqDiagInfo_38[pin_number].u4TXTimeInMicroSecs =
    report->DiagReportObj.Inj.u4TXTimeInMicroSecs;
  InjectorSeqDiagLastPin_38 = pin_number;
}

extern int16_T GetEncoderEngAngle(void);
TransientInjectorSeqInfo_T TransientInjectorSeqInfo_38[8];
void TransientInjectorSeqReportCallback_38(
  S_SeqOutInjEndEventReportPtr report,
  NativePtrSizedInt_U userData)
{
  uint32_T pin_number = (uint32_T) userData;
  TransientInjectorSeqInfo_T *transientInjector =
    &TransientInjectorSeqInfo_38[pin_number];
  if (report->u1OwningPulseNum == 0) {
    transientInjector->primaryComplete = 1;
    transientInjector->primaryDuration = report->u4PulseDurationInMicroSecs;
    transientInjector->primaryEOI = GetEncoderEngAngle();
  } else {
    transientInjector->primaryComplete = 0;
  }
}
