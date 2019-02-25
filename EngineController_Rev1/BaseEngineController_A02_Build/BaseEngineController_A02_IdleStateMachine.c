/*
 * File: BaseEngineController_A02_IdleStateMachine.c
 *
 * Code generated for Simulink model 'BaseEngineController_A02'.
 *
 * Model version                  : 1.1640
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Fri Sep 07 11:01:26 2018
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

/* Named constants for Stateflow: '<S202>/IdleStateMachine' */
#define BaseEngineController_A02_IN_Flaring (1U)
#define BaseEngineController_A02_IN_OffIdle (2U)
#define BaseEngineController_A02_IN_OnIdle (3U)

/* Initial conditions for atomic system: '<S202>/IdleStateMachine' */
void BaseEngineController_A02_IdleStateMachine_Init(void)
{
  BaseEngineController_A02_DWork.s217_is_active_c12_BaseEngineController_A02 =
    0U;
  BaseEngineController_A02_DWork.s217_is_c12_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_B.s217_IdleState = 0U;
}

/* Output and update for atomic system: '<S202>/IdleStateMachine' */
void BaseEngineController_A02_IdleStateMachine(void)
{
  /* Gateway: Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine */
  /* During: Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine */
  if (BaseEngineController_A02_DWork.s217_is_active_c12_BaseEngineController_A02
      == 0) {
    /* Entry: Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine */
    BaseEngineController_A02_DWork.s217_is_active_c12_BaseEngineController_A02 =
      1U;

    /* Transition: '<S217>:4' */
    BaseEngineController_A02_DWork.s217_is_c12_BaseEngineController_A02 =
      BaseEngineController_A02_IN_Flaring;

    /* Entry 'Flaring': '<S217>:2' */
    BaseEngineController_A02_B.s217_IdleState = 1U;
  } else {
    switch (BaseEngineController_A02_DWork.s217_is_c12_BaseEngineController_A02)
    {
     case BaseEngineController_A02_IN_Flaring:
      /* During 'Flaring': '<S217>:2' */
      if (BaseEngineController_A02_B.s202_LogicalOperator ||
          (!(EnableRPMFalling_DataStore()))) {
        /* Transition: '<S217>:5' */
        BaseEngineController_A02_DWork.s217_is_c12_BaseEngineController_A02 =
          BaseEngineController_A02_IN_OffIdle;

        /* Entry 'OffIdle': '<S217>:1' */
        BaseEngineController_A02_B.s217_IdleState = 3U;
      } else {
        if (BaseEngineController_A02_B.s216_RelationalOperator &&
            BaseEngineController_A02_B.s202_RelationalOperator1) {
          /* Transition: '<S217>:7' */
          BaseEngineController_A02_DWork.s217_is_c12_BaseEngineController_A02 =
            BaseEngineController_A02_IN_OnIdle;

          /* Entry 'OnIdle': '<S217>:3' */
          BaseEngineController_A02_B.s217_IdleState = 2U;
        }
      }
      break;

     case BaseEngineController_A02_IN_OffIdle:
      /* During 'OffIdle': '<S217>:1' */
      if (((EnableRPMFalling_DataStore()) &&
           (BaseEngineController_A02_B.s202_RelationalOperator3 ||
            (BaseEngineController_A02_B.s202_RelationalOperator &&
             BaseEngineController_A02_B.s202_RelationalOperator1))) ||
          BaseEngineController_A02_B.s202_RelationalOperator5) {
        /* Transition: '<S217>:6' */
        BaseEngineController_A02_DWork.s217_is_c12_BaseEngineController_A02 =
          BaseEngineController_A02_IN_OnIdle;

        /* Entry 'OnIdle': '<S217>:3' */
        BaseEngineController_A02_B.s217_IdleState = 2U;
      }
      break;

     case BaseEngineController_A02_IN_OnIdle:
      /* During 'OnIdle': '<S217>:3' */
      if ((!BaseEngineController_A02_B.s202_RelationalOperator3) &&
          (BaseEngineController_A02_B.s202_LogicalOperator ||
           (!(EnableRPMFalling_DataStore())))) {
        /* Transition: '<S217>:8' */
        BaseEngineController_A02_DWork.s217_is_c12_BaseEngineController_A02 =
          BaseEngineController_A02_IN_OffIdle;

        /* Entry 'OffIdle': '<S217>:1' */
        BaseEngineController_A02_B.s217_IdleState = 3U;
      }
      break;

     default:
      /* Transition: '<S217>:4' */
      BaseEngineController_A02_DWork.s217_is_c12_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Flaring;

      /* Entry 'Flaring': '<S217>:2' */
      BaseEngineController_A02_B.s217_IdleState = 1U;
      break;
    }
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
