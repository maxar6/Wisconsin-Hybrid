/* InjectorSequenceCallback_39.c */

#include "Application.h"

S_SeqOutInjDiagReport InjectorSeqDiagInfo_39[8];
int32_T InjectorSeqDiagLastPin_39;
void InjectorSeqDiagCallback_39(S_SeqOutDiagReportPtr report,
  NativePtrSizedInt_U userData)
{
  uint32_T pin_number = (uint32_T) userData;
  InjectorSeqDiagInfo_39[pin_number].u1TXCnt = report->DiagReportObj.Inj.u1TXCnt;
  InjectorSeqDiagInfo_39[pin_number].u4TXTimeInMicroSecs =
    report->DiagReportObj.Inj.u4TXTimeInMicroSecs;
  InjectorSeqDiagLastPin_39 = pin_number;
}

extern int16_T GetEncoderEngAngle(void);
TransientInjectorSeqInfo_T TransientInjectorSeqInfo_39[8];
void TransientInjectorSeqReportCallback_39(
  S_SeqOutInjEndEventReportPtr report,
  NativePtrSizedInt_U userData)
{
  uint32_T pin_number = (uint32_T) userData;
  TransientInjectorSeqInfo_T *transientInjector =
    &TransientInjectorSeqInfo_39[pin_number];
  if (report->u1OwningPulseNum == 0) {
    transientInjector->primaryComplete = 1;
    transientInjector->primaryDuration = report->u4PulseDurationInMicroSecs;
    transientInjector->primaryEOI = GetEncoderEngAngle();
  } else {
    transientInjector->primaryComplete = 0;
  }
}
