/*
 * File: BaseEngineController_A02_IdleStateMachine.c
 *
 * Code generated for Simulink model 'BaseEngineController_A02'.
 *
 * Model version                  : 1.1626
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sun Apr 22 15:55:33 2018
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

/* Named constants for Stateflow: '<S186>/IdleStateMachine' */
#define BaseEngineController_A02_IN_Flaring (1U)
#define BaseEngineController_A02_IN_OffIdle (2U)
#define BaseEngineController_A02_IN_OnIdle (3U)

/* Initial conditions for atomic system: '<S186>/IdleStateMachine' */
void BaseEngineController_A02_IdleStateMachine_Init(void)
{
  BaseEngineController_A02_DWork.s201_is_active_c12_BaseEngineController_A02 =
    0U;
  BaseEngineController_A02_DWork.s201_is_c12_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_B.s201_IdleState = 0U;
}

/* Output and update for atomic system: '<S186>/IdleStateMachine' */
void BaseEngineController_A02_IdleStateMachine(void)
{
  /* Gateway: Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine */
  /* During: Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine */
  if (BaseEngineController_A02_DWork.s201_is_active_c12_BaseEngineController_A02
      == 0) {
    /* Entry: Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine */
    BaseEngineController_A02_DWork.s201_is_active_c12_BaseEngineController_A02 =
      1U;

    /* Transition: '<S201>:4' */
    BaseEngineController_A02_DWork.s201_is_c12_BaseEngineController_A02 =
      BaseEngineController_A02_IN_Flaring;

    /* Entry 'Flaring': '<S201>:2' */
    BaseEngineController_A02_B.s201_IdleState = 1U;
  } else {
    switch (BaseEngineController_A02_DWork.s201_is_c12_BaseEngineController_A02)
    {
     case BaseEngineController_A02_IN_Flaring:
      /* During 'Flaring': '<S201>:2' */
      if (BaseEngineController_A02_B.s186_LogicalOperator ||
          (!(EnableRPMFalling_DataStore()))) {
        /* Transition: '<S201>:5' */
        BaseEngineController_A02_DWork.s201_is_c12_BaseEngineController_A02 =
          BaseEngineController_A02_IN_OffIdle;

        /* Entry 'OffIdle': '<S201>:1' */
        BaseEngineController_A02_B.s201_IdleState = 3U;
      } else {
        if (BaseEngineController_A02_B.s200_RelationalOperator &&
            BaseEngineController_A02_B.s186_RelationalOperator1) {
          /* Transition: '<S201>:7' */
          BaseEngineController_A02_DWork.s201_is_c12_BaseEngineController_A02 =
            BaseEngineController_A02_IN_OnIdle;

          /* Entry 'OnIdle': '<S201>:3' */
          BaseEngineController_A02_B.s201_IdleState = 2U;
        }
      }
      break;

     case BaseEngineController_A02_IN_OffIdle:
      /* During 'OffIdle': '<S201>:1' */
      if (((EnableRPMFalling_DataStore()) &&
           (BaseEngineController_A02_B.s186_RelationalOperator3 ||
            (BaseEngineController_A02_B.s186_RelationalOperator &&
             BaseEngineController_A02_B.s186_RelationalOperator1))) ||
          BaseEngineController_A02_B.s186_RelationalOperator5) {
        /* Transition: '<S201>:6' */
        BaseEngineController_A02_DWork.s201_is_c12_BaseEngineController_A02 =
          BaseEngineController_A02_IN_OnIdle;

        /* Entry 'OnIdle': '<S201>:3' */
        BaseEngineController_A02_B.s201_IdleState = 2U;
      }
      break;

     case BaseEngineController_A02_IN_OnIdle:
      /* During 'OnIdle': '<S201>:3' */
      if ((!BaseEngineController_A02_B.s186_RelationalOperator3) &&
          (BaseEngineController_A02_B.s186_LogicalOperator ||
           (!(EnableRPMFalling_DataStore())))) {
        /* Transition: '<S201>:8' */
        BaseEngineController_A02_DWork.s201_is_c12_BaseEngineController_A02 =
          BaseEngineController_A02_IN_OffIdle;

        /* Entry 'OffIdle': '<S201>:1' */
        BaseEngineController_A02_B.s201_IdleState = 3U;
      }
      break;

     default:
      /* Transition: '<S201>:4' */
      BaseEngineController_A02_DWork.s201_is_c12_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Flaring;

      /* Entry 'Flaring': '<S201>:2' */
      BaseEngineController_A02_B.s201_IdleState = 1U;
      break;
    }
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
