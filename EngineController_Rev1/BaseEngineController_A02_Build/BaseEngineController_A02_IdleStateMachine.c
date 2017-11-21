/*
 * File: BaseEngineController_A02_IdleStateMachine.c
 *
 * Real-Time Workshop code generated for Simulink model BaseEngineController_A02.
 *
 * Model version                        : 1.1510
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Sun Nov 19 15:20:16 2017
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Sun Nov 19 15:20:17 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02_IdleStateMachine.h"

/* Include model header file for global data */
#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

/* Named constants for Stateflow: '<S206>/IdleStateMachine' */
#define BaseEngineController_A02_IN_Flaring (1U)
#define BaseEngineController_A02_IN_OffIdle (2U)
#define BaseEngineController_A02_IN_OnIdle (3U)

/* Initial conditions for atomic system: '<S206>/IdleStateMachine' */
void BaseEngineController_A02_IdleStateMachine_Init(void)
{
  /* InitializeConditions for Stateflow: '<S206>/IdleStateMachine' */
  BaseEngineController_A02_DWork.s221_is_active_c12_BaseEngineController_A02 =
    0U;
  BaseEngineController_A02_DWork.s221_is_c12_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_B.s221_IdleState = 0U;
}

/* Output and update for atomic system: '<S206>/IdleStateMachine' */
void BaseEngineController_A02_IdleStateMachine(void)
{
  /* Stateflow: '<S206>/IdleStateMachine' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S206>/motohawk_calibration1'
   */
  /* Gateway: Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine */
  /* During: Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine */
  if (BaseEngineController_A02_DWork.s221_is_active_c12_BaseEngineController_A02
      == 0) {
    /* Entry: Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine */
    BaseEngineController_A02_DWork.s221_is_active_c12_BaseEngineController_A02 =
      1U;

    /* Transition: '<S221>:4' */
    /* Entry 'Flaring': '<S221>:2' */
    BaseEngineController_A02_DWork.s221_is_c12_BaseEngineController_A02 =
      BaseEngineController_A02_IN_Flaring;
    BaseEngineController_A02_B.s221_IdleState = 1U;
  } else {
    switch (BaseEngineController_A02_DWork.s221_is_c12_BaseEngineController_A02)
    {
     case BaseEngineController_A02_IN_Flaring:
      /* During 'Flaring': '<S221>:2' */
      if (BaseEngineController_A02_B.s206_LogicalOperator ||
          (!(EnableRPMFalling_DataStore()))) {
        /* Transition: '<S221>:5' */
        /* Exit 'Flaring': '<S221>:2' */
        /* Entry 'OffIdle': '<S221>:1' */
        BaseEngineController_A02_DWork.s221_is_c12_BaseEngineController_A02 =
          BaseEngineController_A02_IN_OffIdle;
        BaseEngineController_A02_B.s221_IdleState = 3U;
      } else {
        if (BaseEngineController_A02_B.s220_RelationalOperator &&
            BaseEngineController_A02_B.s206_RelationalOperator1) {
          /* Transition: '<S221>:7' */
          /* Exit 'Flaring': '<S221>:2' */
          /* Entry 'OnIdle': '<S221>:3' */
          BaseEngineController_A02_DWork.s221_is_c12_BaseEngineController_A02 =
            BaseEngineController_A02_IN_OnIdle;
          BaseEngineController_A02_B.s221_IdleState = 2U;
        }
      }
      break;

     case BaseEngineController_A02_IN_OffIdle:
      /* During 'OffIdle': '<S221>:1' */
      if (((EnableRPMFalling_DataStore()) &&
           (BaseEngineController_A02_B.s206_RelationalOperator3 ||
            (BaseEngineController_A02_B.s206_RelationalOperator &&
             BaseEngineController_A02_B.s206_RelationalOperator1))) ||
          BaseEngineController_A02_B.s206_RelationalOperator5) {
        /* Transition: '<S221>:6' */
        /* Exit 'OffIdle': '<S221>:1' */
        /* Entry 'OnIdle': '<S221>:3' */
        BaseEngineController_A02_DWork.s221_is_c12_BaseEngineController_A02 =
          BaseEngineController_A02_IN_OnIdle;
        BaseEngineController_A02_B.s221_IdleState = 2U;
      }
      break;

     case BaseEngineController_A02_IN_OnIdle:
      /* During 'OnIdle': '<S221>:3' */
      if ((!BaseEngineController_A02_B.s206_RelationalOperator3) &&
          (BaseEngineController_A02_B.s206_LogicalOperator ||
           (!(EnableRPMFalling_DataStore())))) {
        /* Transition: '<S221>:8' */
        /* Exit 'OnIdle': '<S221>:3' */
        /* Entry 'OffIdle': '<S221>:1' */
        BaseEngineController_A02_DWork.s221_is_c12_BaseEngineController_A02 =
          BaseEngineController_A02_IN_OffIdle;
        BaseEngineController_A02_B.s221_IdleState = 3U;
      }
      break;

     default:
      /* Transition: '<S221>:4' */
      /* Entry 'Flaring': '<S221>:2' */
      BaseEngineController_A02_DWork.s221_is_c12_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Flaring;
      BaseEngineController_A02_B.s221_IdleState = 1U;
      break;
    }
  }
}

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
