#include "Application.h"
#include "BaseEngineController_A02.h"

/*---- DEFINES --------------------------------------------------------------------------------------------*/
#define rtInf                          (100000000000000000.000000)
#define rtMinusInf                     (-100000000000000000.000000)

/*---- CALIBRATION ----------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_cals_rodata.h>
#include <Pragma_Section_End_rodata.h>

/*---- RAM VARIABLES --------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_sbss_zerovars.h>

/* Name: ForcedShutDownTimer ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s856_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"System | Main Power Relay" Help:""   */

/* Name: ECUP_Enabled ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s840_RelationalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"System | Main Power Relay" Help:""  EnumDec:VarDecEnum_3 */

/* Name: ETC_ShutdownSetpointMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s25_SetpointMode Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"Actuators | ETC" Help:"Shutdown mode for ETC setpoint. 0=Passthrough, 1=LoAdapt, 2=SpringTest."   */

/* Name: ETCStallStateShutdown ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s26_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | ETC" Help:""  EnumDec:VarDecEnum_3 */

/* Name: ETCOut ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s50_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | ETC" Help:"PID Final Output" Unit:%  */

/* Name: ETCPTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s37_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | ETC" Help:"PID Proportional Term" Unit:%  */

/* Name: ETCITerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s47_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | ETC" Help:"PID Integrator Term" Unit:%  */

/* Name: ETCDTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s46_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | ETC" Help:"PID Derivative Term" Unit:%  */

/* Name: ETCError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s37_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | ETC" Help:"PID Error Term" Unit:%  */

/* Name: ETCDampTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s45_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | ETC" Help:"PID Damper Term" Unit:%  */

/* Name: ETC_Setpoint ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s29_MultiportSwitch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | ETC" Help:"Commanded electronic throttle position" Unit:%  */

/* Name: ETCDamperSwtichState ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s34_RelationalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | ETC" Help:""   */

/* Name: ETCDamperTPSThresh ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s40_Switch2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | ETC" Help:""   */

/* Name: ETCDamperTPS ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s41_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | ETC" Help:""   */

/* Name: ETC_ShutDownTimer ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s62_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | ETC" Help:""   */

/* Name: ETC_ECUPState ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s30_LogicalOperator3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | ETC" Help:""   */

/* Name: SparkDwell ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s114_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators|Coils" Help:"Total electrical spark dwell time" Unit:ms  */

/* Name: SparkEnergyMonitor ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s120_SparkEnergy Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators|Coils" Help:"Commanded spark energy, before conversion to dwell time" Unit:mJ  */

/* Name: SparkEnabled ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s17_OnlyEnableSparkwhenEnergyisAboveZero Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators|Coils" Help:"Enabled when spark energy is greater than zero" Unit:boolean  */

/* Name: BaseEquivRatio ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s132_DesEquivRatio Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Base Equiv Ratio" Help:"Base equivalence ratio for selected fuel system."   */

/* Name: DeltaTPS ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s161_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Fuel System Manager|Injector Manager|Delta TPS Transient Fueling" Help:""   */

/* Name: TransFuel_TPSFilt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s167_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Fuel System Manager|Injector Manager|Delta TPS Transient Fueling" Help:""   */

/* Name: TransientFuelPuddleMass ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s175_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Fuel System Manager|Injector Manager|Tau-X Transient Fueling|Enabled Tau-X Algorithm" Help:"Current modeled fuel puddle mass for Tau-X transient fuel" Unit:mg  */

/* Name: FuelVapFactor ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s170_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Fuel System Manager|Injector Manager|Tau-X Transient Fueling|Enabled Tau-X Algorithm" Help:"Fuel vaporization factor - Fuel evaporation is linear with respect to this term" Unit:degC/log(kPa)  */

/* Name: TransientFuel_X_Mult ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s176_uX Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Fuel System Manager|Injector Manager|Tau-X Transient Fueling|Enabled Tau-X Algorithm" Help:"Multiplier on desired fuel flow due to X contribution (1/(1-X))."   */

/* Name: TransientFuel_Tau_Ofst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s176_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Fuel System Manager|Injector Manager|Tau-X Transient Fueling|Enabled Tau-X Algorithm" Help:"Offset applied to desired fuel flow based on Tau contribution (-M_pud/Tau)." Unit:g/s  */

/* Name: TransientFuel_Total_Mult ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s173_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Fuel System Manager|Injector Manager|Tau-X Transient Fueling|Enabled Tau-X Algorithm" Help:"Total transient fuel multiplier applied to desired fuel flow resulting from Tau-X model."   */

/* Name: TransientFuel_FuelRate ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s173_Cantinjectnegativefuel Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Fuel System Manager|Injector Manager|Tau-X Transient Fueling|Enabled Tau-X Algorithm" Help:"Actual fuel rate applied to engine" Unit:g/s  */

/* Name: WarmUpO2AdaptEnabled ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s182_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Fuel System Manager|O2 Fuel Adapt|WarmUp Disable" Help:"Indicates whether FuelFlowComp map adapting is enabled due to WarmUp"  EnumDec:VarDecEnum_9 */

/* Name: FuelAdaptEnabled ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s157_LogicalOperator2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Fuel System Manager|O2 Fuel Adapt" Help:"Indicates whether FuelFlowComp map adapting is enabled"  EnumDec:VarDecEnum_9 */

/* Name: FuelAdapt_Error ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s184_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Fuel System Manager|O2 Fuel Adapt" Help:"Error in fuel flow at the current operating point, as compared to O2 sensor"   */

/* Name: GlobalBaseFuelRate ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s158_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Fuel System Manager|Fuel Calculation" Help:"Liquid fuel rate based on airflow and target equivalence ratio" Unit:g/s  */

/* Name: PerCylBaseFuelRate ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s155_PerCylinderMassFlowRate Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Fuel System Manager|Fuel Calculation" Help:"Liquid fuel mass flow rate based on airflow and target equivalence ratio per cylinder." Unit:g/s  */

/* Name: AdjustedPerCylFuelRate ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s155_ApplyMultipliersforO2KnockControlandEnrichment1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Fuel System Manager|Fuel Calculation" Help:"Desired fuel per cylinder after application of individual cylinder offsets and multipliers." Unit:g/s  */

/* Name: Desired_AF_Ratio ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s160_Add Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:5.2 UpdateID:BACKGND Group:"Engine Control | Run | Fuel" Help:"Desired Air to Fuel Ratio based on Ethanol Percentage" Unit:ratio  */

/* Name: O2TargetEquivRatio ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s242_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|O2 Control|O2 PID Controller" Help:"Current target equivalence ratio for closed-loop O2 control." Unit:ratio  */

/* Name: LiquidO2Control_PTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s249_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Engine Control | Run | Fuel | O2 Control" Help:"Closed-loop O2 control P-Term" Unit:mult  */

/* Name: LiquidO2Control_ITerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s251_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Engine Control | Run | Fuel | O2 Control" Help:"Closed-loop O2 control I-Term" Unit:mult  */

/* Name: LiquidO2Control_DTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s250_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Engine Control | Run | Fuel | O2 Control" Help:"Closed-loop O2 control D-Term, for bank" Unit:mult  */

/* Name: LiquidO2Control_ErrorTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s249_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Engine Control | Run | Fuel | O2 Control" Help:"Closed-loop O2 control error-term, for bank" Unit:mult  */

/* Name: O2RichTime ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s247_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Diagnostics & Protection | Fault Thresholds" Help:""   */

/* Name: O2LeanTime ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s247_Switch3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Diagnostics & Protection | Fault Thresholds" Help:""   */

/* Name: O2NotActiveTime ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s247_Switch4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Diagnostics & Protection | Fault Thresholds" Help:""   */

/* Name: O2FuelMult ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s242_Multiplyby10ifnotyetenabled Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|O2 Control" Help:"Closed-loop O2 control fuel multiplier." Unit:mult  */

/* Name: O2CtrlMode ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s240_LogicalOperator2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|O2 Control|O2 Control State Determination" Help:""  EnumDec:VarDecEnum_10 */

/* Name: O2TimeDelay ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s240_RelationalOperator5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|O2 Control|O2 Control State Determination" Help:""  EnumDec:VarDecEnum_3 */

/* Name: EnginSteadyState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s336_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|O2 Control|O2 Control State Determination" Help:""  EnumDec:VarDecEnum_3 */

/* Name: DesEquivInRange ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s240_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|O2 Control|O2 Control State Determination" Help:""  EnumDec:VarDecEnum_3 */

/* Name: O2SensorFaults ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s240_LogicalOperator3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|O2 Control|O2 Control State Determination" Help:""  EnumDec:VarDecEnum_3 */

/* Name: BaseAirOffset ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s212_DontallowsetpointtoeverdropbelowtheTargetRPM Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:5.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MinGovernor|AiflowOffset" Help:"Base air request position, includes ramp into idle manager." Unit:%  */

/* Name: BaseAirflowAdaptEnabled ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s203_LogicalOperator1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Engine Control | Run | RPM Control | Min Gov" Help:""  EnumDec:VarDecEnum_9 */

/* Name: IdleHandOffMult ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s219_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MinGovernor" Help:""   */

/* Name: MinGovReset ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s136_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MinGovernor" Help:""   */

/* Name: AirMinGovOutput ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s136_MinGovAirPID Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MinGovernor" Help:"Total output from min. gov. air PID controller." Unit:%  */

/* Name: SpkMinGovOutput ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s136_IdleSpk Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MinGovernor" Help:""   */

/* Name: RPMCtrlMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s222_RelOp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Engine Control | Run | RPM Control | Min Gov" Help:""   */

/* Name: IdleState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s221_IdleState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"Engine Control | Run | RPM Control | Min Gov" Help:"The idle governor may be one of: Flaring, OnIdle, OffIdle"  EnumDec:VarDecEnum_11 */

/* Name: RPMFalling ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s220_RelationalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MinGovernor|Idle State Determination|Determine if RPM is Falling" Help:"Indicates whether the RPM is falling"  EnumDec:VarDecEnum_12 */

/* Name: MotoringDetectionTime ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s227_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MinGovernor|MotoringDetection" Help:""   */

/* Name: MotoringDetectionFlag ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s207_RelationalOperator1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MinGovernor|MotoringDetection" Help:""   */

/* Name: MinGovRPMSetPt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s209_DontallowsetpointtoeverdropbelowtheTargetRPM Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MinGovernor|Ramp RPM" Help:""   */

/* Name: SpkMinGovPTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s230_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MinGovernor" Help:"PID Proportional Term" Unit:degCA  */

/* Name: SpkMinGovDTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s231_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MinGovernor" Help:"PID Derivative Term" Unit:degCA  */

/* Name: SpkMinGovError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s230_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MinGovernor" Help:"PID Error Term" Unit:degCA  */

/* Name: AirMinGovPTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s235_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MinGovernor" Help:"Air min governor P term"   */

/* Name: AirMinGovITerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s237_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MinGovernor" Help:"Air min governor I term"   */

/* Name: AirMinGovDTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s236_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MinGovernor" Help:"Air min governor D term"   */

/* Name: AirMinGovError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s235_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MinGovernor" Help:"Air min governor P term"   */

/* Name: MaxGovIC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s185_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MaxGovernor|I-Term Preload" Help:""   */

/* Name: TPSRequestLookupAirOfst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s135_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MaxGovernor" Help:""   */

/* Name: MaxGovOutput ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s189_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MaxGovernor" Help:""   */

/* Name: MaxGovETCMode ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s186_MultiportSwitch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MaxGovernor|MaxGovState" Help:""  EnumDec:VarDecEnum_14 */

/* Name: MaxGovHold ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s186_DataTypeConversion1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MaxGovernor|MaxGovState" Help:""  EnumDec:VarDecEnum_15 */

/* Name: MaxGovReset ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s186_DataTypeConversion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MaxGovernor|MaxGovState" Help:""  EnumDec:VarDecEnum_16 */

/* Name: MaxGovState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s186_MultiportSwitch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MaxGovernor|MaxGovState" Help:""  EnumDec:VarDecEnum_3 */

/* Name: MaxGovRPMSetpoint ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s187_DontallowsetpointtoevergoabovetheTargetRPM Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MaxGovernor|Ramp RPM" Help:"RPMSetpoint of Max Gov controller." Unit:RPM  */

/* Name: MaxGovPTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s197_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MaxGovernor" Help:""   */

/* Name: MaxGovITerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s199_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MaxGovernor" Help:""   */

/* Name: MaxGovDTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s198_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MaxGovernor" Help:""   */

/* Name: MaxGovError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s197_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|MaxGovernor" Help:""   */

/* Name: Spark_Adv_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s267_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Spark Manager" Help:""   */

/* Name: Tot_EqRatio_SpkOfst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s259_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Spark Manager|Desired Eq Ratio Offset" Help:"Total Spark Offset based on Desired Equivalence Ratio, engine speed and load" Unit:degCA  */

/* Name: EGR_Spk_Ofst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s260_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Spark Manager|EGR Spark Offset" Help:"Total Spark Offset based on ECT, IAT2, engine speed and load" Unit:degCA  */

/* Name: Ethanol_Spk_Ofst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s261_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Spark Manager|Ethanol Spark Offset" Help:"Total Spark Offset based on ECT, IAT2, engine speed and load" Unit:degCA  */

/* Name: TotalSparkAdv ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s139_ApplyOffsetstoBaseSparkAdvance1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Spark Manager|SparkAdvanceLimiter" Help:""   */

/* Name: Tot_Temp_SpkOfst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s264_Add Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|Spark Manager|Temp Comp Offset" Help:"Total Spark Offset based on ECT, IAT2, engine speed and load" Unit:degCA  */

/* Name: ETCRequestFinal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s131_MultiportSwitch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:5.2 UpdateID:BACKGND Group:"Actuators | ETC" Help:"Final ETC request sent to ETC controller from Run state." Unit:%  */

/* Name: PowerLimitETCSetpoint ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s140_Add Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Diagnostics & Protection | Power Limit" Help:""   */

/* Name: PowerLimitSetpoint ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s144_Setpoint Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Diagnostics & Protection | Power Limit" Help:""   */

/* Name: PowerLimitState ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s144_State Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Diagnostics & Protection | Power Limit" Help:""   */

/* Name: PowerLimitActual ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s348_TorquetoPower Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Diagnostics & Protection | Power Limit" Help:""   */

/* Name: PowerLimt_PTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s147_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|AirFlow Manager|Power Limit Controller|Universal PID (Tunable & Scheduled)" Help:""   */

/* Name: PowerLimt_ITerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s149_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|AirFlow Manager|Power Limit Controller|Universal PID (Tunable & Scheduled)" Help:""   */

/* Name: PowerLimt_DTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s148_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|AirFlow Manager|Power Limit Controller|Universal PID (Tunable & Scheduled)" Help:""   */

/* Name: PowerLimt_PIDOut ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s145_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|AirFlow Manager|Power Limit Controller|Universal PID (Tunable & Scheduled)" Help:"PID output term"   */

/* Name: PowerLimt_Error ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s147_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|AirFlow Manager|Power Limit Controller|Universal PID (Tunable & Scheduled)" Help:""   */

/* Name: EGR_Percentage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s133_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Engine Control | Run | Spark | Temp Comp" Help:"Total Spark Offset based on ECT, IAT2, engine speed and load" Unit:degCA  */

/* Name: Oxygen_Heater_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s258_HEATER Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Run|O2 Heater" Help:""   */

/* Name: FuelPumpTSE ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s270_UnitDelay Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Stall|Fuel Pump at Startup" Help:""   */

/* Name: OilPumpTSE ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s271_UnitDelay Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Stall|Oil Pump at Startup" Help:""   */

/* Name: ETCReqFilterConst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s365_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|RawProcessed|Base TPS Request" Help:""   */

/* Name: FilteredETCRequest ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s382_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|RawProcessed|Base TPS Request" Help:""   */

/* Name: ETCRequestDirection ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s365_RelationalOperator3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|RawProcessed|Base TPS Request" Help:""  EnumDec:VarDecEnum_18 */

/* Name: ECT_KeyUp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s384_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | ECT" Help:"" Unit:C  */

/* Name: IAT_KeyUp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s385_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|RawProcessed|Capture IAT At Startup" Help:"" Unit:C  */

/* Name: CrankTDCs ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s391_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|RawProcessed|EngineState|TDC_Counter" Help:""   */

/* Name: EngineHourInc ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s313_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"System | Hour Meter" Help:""   */

/* Name: EngineHourMeter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s313_Gain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:6.2 UpdateID:BACKGND Group:"System | Hour Meter" Help:""   */

/* Name: EncoderFaultCount ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s555_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|EngineSpeed|Encoder Diagnostics" Help:""   */

/* Name: ECT ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s649_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|NonLinearSensors|Temp Sensors | ECT" Help:"Final value after Linear Sensor Characterization" Unit:C  */

/* Name: ECTADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s633_motohawk_ain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|NonLinearSensors|Temp Sensors | ECT" Help:"Signal measured directly from sensor" Unit:ADC  */

/* Name: ECTRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s650_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|NonLinearSensors|Temp Sensors | ECT" Help:"After conversion to engineering units, before range checking" Unit:C  */

/* Name: IAT ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s658_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|NonLinearSensors|Temp Sensors | IAT" Help:"Final value after Linear Sensor Characterization" Unit:C  */

/* Name: IATADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s633_motohawk_ain1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|NonLinearSensors|Temp Sensors | IAT" Help:"Signal measured directly from sensor" Unit:ADC  */

/* Name: IATRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s659_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|NonLinearSensors|Temp Sensors | IAT" Help:"After conversion to engineering units, before range checking" Unit:C  */

/* Name: EST_TDCEnabled ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s783_DataTypeConversion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|Coil Control|Coil Enable Manager|EST Enable TDC Counter" Help:""  EnumDec:VarDecEnum_3 */

/* Name: TDCCountThreshEnabled ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s783_RelationalOperator1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|Coil Control|Coil Enable Manager|EST Enable TDC Counter" Help:""  EnumDec:VarDecEnum_3 */

/* Name: TDCCount ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s785_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|Coil Control|Coil Enable Manager|EST Enable TDC Counter" Help:"Number of TDC events counted after stall.  This will reset once in Crank and Run."   */

/* Name: ESTOpenADC ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s706_SparkSequence_o3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000 Max:65535.000000
   XLen:8 YLen:1   Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|Coil Control|EST Fault Management" Help:"ADC counts of measured voltage feedback for diagnosing the ESTs during stall state."   */

/* Name: EST_DiagDwell ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s706_SparkSequence_o4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000 Max:65535.000000
   XLen:8 YLen:1   Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|Coil Control|EST Fault Management" Help:"Dwell time used to diagnose ESTs during run-state." Unit:us  */

/* Name: CoilStartAngle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s780_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|Coil Control" Help:"StartAngle for coils to establish dwell." Unit:degBTDC  */

/* Name: CoilStopAngle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s781_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|Coil Control" Help:"Stop angle for coils to establish dwell." Unit:degBTDC  */

/* Name: CoilEnabled ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s706_LogicalOperator1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000 Max:1.000000
   XLen:8 YLen:1   Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|Coil Control" Help:"Enable sate for coils." Unit:bool  */

/* Name: Oil_Pressure_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s612_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|CAN Out|112" Help:""   */

/* Name: RPM_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s556_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|CAN Out|112" Help:""   */

/* Name: Temp_Guage_Ovr ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s649_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|CAN Out|112" Help:""   */

/* Name: Engine_Crank_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s715_Compare Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|CAN Out|112" Help:""   */

/* Name: Engine_On_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s716_Compare Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|CAN Out|112" Help:""   */

/* Name: Load_On_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s717_Compare Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|CAN Out|112" Help:""   */

/* Name: Run_Request_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s127_remyEn Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|CAN Out|Phoenix" Help:""   */

/* Name: Speed_Voltage_Torque_CMD_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s127_maxRPM Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|CAN Out|Phoenix" Help:""   */

/* Name: Motoring_Torque_Lim_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s127_motorTQ Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|CAN Out|Phoenix" Help:""   */

/* Name: Generating_Torque_Lim_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s119_generatingTQ Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|CAN Out|Phoenix" Help:""   */

/* Name: Trigger_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s19_Enable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|EGR Out" Help:""   */

/* Name: Duration_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s707_DataTypeConversion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-2147483647.000000
   Max:2147483647.000000 Format:8.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|EGR Out" Help:""   */

/* Name: FuelPumpFaultState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s708_motohawk_dout Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|FuelPump" Help:""  EnumDec:VarDecEnum_26 */

/* Name: FUELP ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s801_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|FuelPump | FUELP" Help:"Display output in engineering units" Unit:bool  */

/* Name: ETC_Current ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT2 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s709_motohawk_pwm1_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-32768.000000
   Max:32767.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|HBridge" Help:"Current output of ETC duty cycle." Unit:mA  */

/* Name: ETC_DutyCycle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s709_ETC Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|HBridge" Help:"Actual duty cycle of actuator" Unit:%  */

/* Name: HBridgeFaultState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s709_motohawk_pwm1_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|HBridge" Help:""  EnumDec:VarDecEnum_26 */

/* Name: InjTransitionCount ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s710_InjectorSequence_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000 Max:255.000000
   XLen:8 YLen:1   Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|Injector Control" Help:""   */

/* Name: InjectorsEnabled ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s816_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000 Max:1.000000
   XLen:8 YLen:1   Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|Injector Control" Help:"Enable state for injectors." Unit:bool  */

/* Name: OilPumpFaultState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s711_motohawk_dout Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|OilPump" Help:""  EnumDec:VarDecEnum_26 */

/* Name: OILP ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s831_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|OilPump | OILP" Help:"Display output in engineering units" Unit:bool  */

/* Name: O2HeaterFaultState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s712_motohawk_dout Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|Oxygen Heater" Help:""  EnumDec:VarDecEnum_26 */

/* Name: Oxygen_Heater ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s836_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Outputs|Oxygen Heater | O2_Heater" Help:"Display output in engineering units" Unit:bool  */

/* Name: InjEPW ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s14_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | Injectors" Help:""   */

/* Name: InjMPW ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s14_MinMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000 Max:100000000000000000.000000
   XLen:8 YLen:1   Format:4.2 UpdateID:BACKGND Group:"Actuators | Injectors" Help:""   */

/* Name: MaxAllowableMPW ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s14_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | Injectors" Help:""   */

/* Name: FuelDeltaPress ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s63_constreftoatm Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | Injectors" Help:"Fuel Delta Pressure - across the fuel injector" Unit:kPa  */

/* Name: TotalFPC ClassID:ARRAY StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s71_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000 Max:100000000000000000.000000
   XLen:8 YLen:1   Format:4.2 UpdateID:BACKGND Group:"Engine Control | Run | Fuel | Liquid" Help:"Total fuel per cylinder after application of transient algorithm" Unit:mg  */

/* Name: RevLimiterState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s15_DataTypeConversion5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"Diagnostics & Protection | RevLimit" Help:""  EnumDec:VarDecEnum_27 */

/* Name: cranking_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s127_cranking Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Hybrid" Help:""   */

/* Name: idle_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s127_idle Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Hybrid" Help:""   */

/* Name: APPandTQ_Ramp_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s127_APPRamp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Hybrid" Help:""   */

/* Name: remyEn_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s127_remyEn Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Hybrid" Help:""   */

/* Name: maxRPM_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s127_maxRPM Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Hybrid" Help:""   */

/* Name: motorTQ_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s127_motorTQ Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Hybrid" Help:""   */

/* Name: generatingTQ_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s119_generatingTQ Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|Controller|Hybrid" Help:""   */

/* Name: BARO ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s327_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|AirCalcs" Help:"" Unit:kPa  */

/* Name: BaroDelayTime ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s324_Timer Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|AirCalcs" Help:"" Unit:s  */

/* Name: PressureRatio ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s326_PressureRatio Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|AirCalcs|SpeedDensityMAPReferenced" Help:""   */

/* Name: MAFPort ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s326_Saturation1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|AirCalcs|SpeedDensityMAPReferenced" Help:"" Unit:g/s  */

/* Name: MAFPortModel ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s326_NominalAirFlowRate2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|AirCalcs|SpeedDensityMAPReferenced" Help:"" Unit:g/s  */

/* Name: SSEngOpr ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s336_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|LoadBasedCalcs|Engine Steady-State Flag" Help:"Steady-State Engine Operation"  EnumDec:VarDecEnum_28 */

/* Name: SSRPMFilterConst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s339_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""   */

/* Name: SSRPMFiltered ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s342_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""   */

/* Name: SSRPMDirection ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s339_RelationalOperator4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""  EnumDec:VarDecEnum_18 */

/* Name: SSLoadFilterConst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s340_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""   */

/* Name: SSLoadFiltered ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s345_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""   */

/* Name: SSLoadDirection ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s340_RelationalOperator4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|LoadBasedCalcs" Help:""  EnumDec:VarDecEnum_18 */

/* Name: APCPort ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s347_MultiplyandDivideavoidingdivdebyzero1.s168_chargemass Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|LoadBasedCalcs|Load, Torque, Power, Work - Using APC" Help:"Air per cylinder per cycle." Unit:mg  */

/* Name: IndPower ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s348_TorquetoPower Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|LoadBasedCalcs|Load, Torque, Power, Work - Using APC|Calculate Power and Work" Help:"" Unit:kW  */

/* Name: IndWork ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s351_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|LoadBasedCalcs|Load, Torque, Power, Work - Using APC|Calculate Power and Work" Help:"" Unit:kJ  */

/* Name: NECCT ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s356_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|LoadBasedCalcs|Normalized Effective Combustion Chamber Temperature" Help:"Normalized effective combustion chamber temperature" Unit:degC  */

/* Name: APPPcnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s368_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|RawProcessed" Help:"APP used in controller (after power curve and CutThrottle limiting" Unit:%  */

/* Name: APP_combined ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s378_APP_Out Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|RawProcessed|APP Sensor Management" Help:"Combined APP from both sensors"   */

/* Name: APP_Mode ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s378_APP_Mode Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|RawProcessed|APP Sensor Management" Help:"Indicates state of APP command - disabled if > 3% during Crank to Run transition."  EnumDec:VarDecEnum_29 */

/* Name: EngineAccel ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s389_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|RawProcessed|Engine Accel" Help:"Acceleration rate of engine" Unit:RPM/s  */

/* Name: EngineStateRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s390_State Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|RawProcessed|EngineState" Help:""   */

/* Name: CrankTrans ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s370_Crank Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|RawProcessed|EngineState" Help:""   */

/* Name: FuelDeltaPressure ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s371_Sum3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|RawProcessed|Fuel Delta Pressure Calculation" Help:"Fuel pressure across injector (rail - manifold)" Unit:kPa  */

/* Name: PreO2Delag ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s372_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|RawProcessed|O2 De-lag" Help:""   */

/* Name: PostO2Delag ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s372_Sum3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|RawProcessed|O2 De-lag" Help:""   */

/* Name: TimeSinceKeyOn ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s393_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|RawProcessed|Time Since Key On" Help:""   */

/* Name: TimeSinceRun ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s395_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|RawProcessed|Time Since Run" Help:""   */

/* Name: TimeSinceStall ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s397_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Control|VirtualSensors|RawProcessed|Time Since Stall" Help:"Indicates time since entering Stall State - saturates and disables at 2000 seconds" Unit:s  */

/* Name: Genset_Enable_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s411_GensetEnable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|112" Help:""   */

/* Name: Genset_Load_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s411_GensetEnable_g Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|112" Help:""   */

/* Name: Vehicle_Speed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s411_GensetEnable_a Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|112" Help:""   */

/* Name: ONTSE ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s417_UnitDelay Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | FUELP" Help:""   */

/* Name: Status1_Age_Count_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: Est_Absolute_Torque_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: Control_Mode_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage1_o7 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: MotoringTq_Curve_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage1_o8 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: GeneratingTq_Curve_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage1_o9 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: Est_Relative_Torque_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage1_o10 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: Estimating_VBATT_Lv_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage1_o11 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: Motor_Temp_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage1_o12 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: Drive_Temp_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage1_o13 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: Status3_Age_Count_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage2_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: AD_Input1_En_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage2_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: XDRP_State_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage2_o3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: Motor_Speed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage_o3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: PWMOutput_State_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage2_o4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: AD_Input2_En_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage2_o5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: Bus_HVIL_Status_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage2_o6 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: ThreePhase_HVIL_Status_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage2_o7 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: DPos_Sens1_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage2_o8 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: DigPos_Sens2_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage2_o9 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: DigPos_Sens3_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage2_o10 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: DigPos_Sens4_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage2_o11 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: DigPos_Sens5_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage2_o12 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: CtrlBoard_Temp_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage2_o13 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: HVBus_Voltage_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage_o4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: Keyed_Voltage_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage2_o14 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: AD_Input1_Vin_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage2_o15 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: AD_Input2_Vin_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage2_o16 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: Status4_Age_Count_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage3_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: An_PosSense1_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage3_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: An_PosSense2_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage3_o3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: XDRP_Internal_Meas_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage3_o4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: Status2_Age_Count_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage1_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: Run_Enable_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage1_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: NegativeTq_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage1_o3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: Generating_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage1_o4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: Phoenix_Fault_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage1_o5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: TqLimiting_Reason_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s412_ReadCANMessage1_o6 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|CAN Inputs|Phoenix" Help:""   */

/* Name: ESTOP_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s406_EStop Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|Digital" Help:""   */

/* Name: MAF ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s541_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|Digital | MAF" Help:"Final value after Linear Sensor Characterization" Unit:g/s  */

/* Name: MAFADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s406_Gain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|Digital | MAF" Help:"Signal measured directly from sensor" Unit:Hz  */

/* Name: MAFRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s542_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|Digital | MAF" Help:"After conversion to engineering units, before range checking" Unit:g/s  */

/* Name: RPMInst ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s407_RPMInst Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|EngineSpeed" Help:""   */

/* Name: RPM ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s556_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|EngineSpeed" Help:""   */

/* Name: EncoderFault ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s407_motohawk_encoder_fault Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|EngineSpeed|Encoder Diagnostics" Help:""  EnumDec:VarDecEnum_32 */

/* Name: EncoderState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s407_motohawk_encoder_state Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|EngineSpeed" Help:""  EnumDec:VarDecEnum_33 */

/* Name: encoder_create ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:encoder_create Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | Encoder" Help:"Debug Variable" */
uint8_T encoder_create = 7;

/* Name: EGRSense ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s570_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | EGRSense" Help:"Final value after Linear Sensor Characterization" Unit:%  */

/* Name: EGRSenseADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s408_motohawk_ain4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | EGRSense" Help:"Singal measured directly from sensor" Unit:V  */

/* Name: EGRSenseRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s557_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | EGRSense" Help:"After conversion to engineering units, before range checking" Unit:%  */

/* Name: FuelSens ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s578_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | FuelSens" Help:"Final value after Linear Sensor Characterization" Unit:%  */

/* Name: FuelSensADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s408_Gain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | FuelSens" Help:"Singal measured directly from sensor" Unit:Hz  */

/* Name: FuelSensRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s558_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | FuelSens" Help:"After conversion to engineering units, before range checking" Unit:%  */

/* Name: FuelPres ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s586_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | FuelPres" Help:"Final value after Linear Sensor Characterization" Unit:kPaGauge  */

/* Name: FuelPresADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s408_motohawk_ain2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | FuelPres" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: FuelPresRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s559_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | FuelPres" Help:"After conversion to engineering units, before range checking" Unit:kPaGauge  */

/* Name: MAP ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s594_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | MAP" Help:"Final value after Linear Sensor Characterization" Unit:kPa  */

/* Name: MAPADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s562_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | MAP" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: MAPRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s560_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | MAP" Help:"After conversion to engineering units, before range checking" Unit:kPa  */

/* Name: MAPTime ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s602_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | MAPTime" Help:"Final value after Linear Sensor Characterization" Unit:kPa  */

/* Name: MAPTimeADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s408_motohawk_ain_read1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | MAPTime" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: MAPTimeRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s561_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | MAPTime" Help:"After conversion to engineering units, before range checking" Unit:kPa  */

/* Name: OilPres ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s612_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | OilPres" Help:"Final value after Linear Sensor Characterization" Unit:psi  */

/* Name: OilPresADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s408_motohawk_ain1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | OilPres" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: OilPresRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s563_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | OilPres" Help:"After conversion to engineering units, before range checking" Unit:psi  */

/* Name: SensVolt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s620_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | SensVolt" Help:"Final value after Linear Sensor Characterization" Unit:Volts  */

/* Name: SensVoltADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s408_motohawk_ain3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | SensVolt" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: SensVoltRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s564_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | SensVolt" Help:"After conversion to engineering units, before range checking" Unit:Volts  */

/* Name: SysVolt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s628_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | SysVolt" Help:"Final value after Linear Sensor Characterization" Unit:Volts  */

/* Name: SysVoltADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s408_motohawk_ain14 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | SysVolt" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: SysVoltRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s565_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|LinearSensors | SysVolt" Help:"After conversion to engineering units, before range checking" Unit:Volts  */

/* Name: O2_PostCat ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s638_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|NonLinearSensors | O2_PostCat" Help:"Final value after Linear Sensor Characterization" Unit:EquivRatio  */

/* Name: O2_PostCatADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s409_motohawk_ain3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|NonLinearSensors | O2_PostCat" Help:"Signal measured directly from sensor" Unit:ADC  */

/* Name: O2_PostCatRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s639_motohawk_interpolation_1d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|NonLinearSensors | O2_PostCat" Help:"After conversion to engineering units, before range checking" Unit:EquivRatio  */

/* Name: APP2_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s410_motohawk_data_read1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|PotentiometerSensors" Help:""   */

/* Name: APP1_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s410_motohawk_data_read1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|PotentiometerSensors" Help:""   */

/* Name: TPS1Adapt_Low ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s667_MinMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|PotentiometerSensors | TPS1" Help:""   */

/* Name: TPS1Adapt_Hi ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s667_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|PotentiometerSensors | TPS1" Help:""   */

/* Name: TPS1Percent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s681_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|PotentiometerSensors | TPS1" Help:""   */

/* Name: TPS1ADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s663_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|PotentiometerSensors | TPS1" Help:""   */

/* Name: TPS1PercentRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s671_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|PotentiometerSensors | TPS1" Help:""   */

/* Name: TPS2Adapt_Low ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s684_MinMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|PotentiometerSensors | TPS2" Help:""   */

/* Name: TPS2Adapt_Hi ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s684_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|PotentiometerSensors | TPS2" Help:""   */

/* Name: TPS2Percent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s698_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|PotentiometerSensors | TPS2" Help:""   */

/* Name: TPS2ADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s664_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|PotentiometerSensors | TPS2" Help:""   */

/* Name: TPS2PercentRaw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BaseEngineController_A02 Struct:BaseEngineController_A02_B.s688_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BaseEngineController_A02|Foreground|Inputs|PotentiometerSensors | TPS2" Help:""   */

/* Name: dout_create_MPRD ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_MPRD Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_MPRD = 7;

/* Name: EST_SparkCreate ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:EST_SparkCreate Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | SequenceOut" Help:"Debug Variable" */
uint8_T EST_SparkCreate = 7;

/* Name: NextSparkAngle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4
   CType:real_T Struct:NextSparkAngle Mask:FFFFFFFF Gain:1 Offset:0 Exp:1 Format:4.2
   UpdateID:BACKGND Group:"System | Debug | General | Spark Sequence" Help:"Debug Variable" */
real_T NextSparkAngle = 0.0;

/* Name: NextCylinderToSpark ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:uint8_T Struct:NextCylinderToSpark Mask:FFFFFFFF Gain:1 Offset:0 Exp:1 Format:3.0
   UpdateID:BACKGND Group:"System | Debug | General | Spark Sequence" Help:"Debug Variable" */
uint8_T NextCylinderToSpark = 0;

/* Name: EST_Spark ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:EST_Spark Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | SequenceOut" Help:"Debug Variable" */
uint8_T EST_Spark = 0;

/* Name: INJ_InjectorCreate ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:INJ_InjectorCreate Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | SequenceOut" Help:"Debug Variable" */
uint8_T INJ_InjectorCreate = 7;

/* Name: NextInjectorAngle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4
   CType:real_T Struct:NextInjectorAngle Mask:FFFFFFFF Gain:1 Offset:0 Exp:1 Format:4.2
   UpdateID:BACKGND Group:"System | Debug | General | Injector Sequence" Help:"Debug Variable" */
real_T NextInjectorAngle = 0.0;

/* Name: NextCylinderToInject ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:uint8_T Struct:NextCylinderToInject Mask:FFFFFFFF Gain:1 Offset:0 Exp:1 Format:3.0
   UpdateID:BACKGND Group:"System | Debug | General | Injector Sequence" Help:"Debug Variable" */
uint8_T NextCylinderToInject = 0;

/* Name: dout_create_FuelPumpPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_FuelPumpPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_FuelPumpPin = 7;

/* Name: dout_create_OilPumpPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_OilPumpPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_OilPumpPin = 7;

/* Name: dout_create_O2_Heater ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_O2_Heater Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_O2_Heater = 7;

/* Name: ain_create_ECUP ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_ECUP Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_ECUP = RESOURCE_NOT_CREATED;

/* Name: ain_read_ECUP ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_ECUP Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_ECUP = RESOURCE_NOT_CREATED;

/* Name: ain_create_MAPSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_MAPSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_MAPSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_MAPSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_MAPSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_MAPSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_create_ECTSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_ECTSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_ECTSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_ECTSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_ECTSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_ECTSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_create_IATSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_IATSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_IATSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_IATSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_IATSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_IATSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_create_OilPresPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_OilPresPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_OilPresPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_OilPresPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_OilPresPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_OilPresPin = RESOURCE_NOT_CREATED;

/* Name: ain_create_TPS2AnalogInput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_TPS2AnalogInput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_TPS2AnalogInput = RESOURCE_NOT_CREATED;

/* Name: ain_read_TPS2AnalogInput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_TPS2AnalogInput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_TPS2AnalogInput = RESOURCE_NOT_CREATED;

/* Name: ain_create_TPS1AnalogInput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_TPS1AnalogInput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_TPS1AnalogInput = RESOURCE_NOT_CREATED;

/* Name: ain_read_TPS1AnalogInput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_TPS1AnalogInput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_TPS1AnalogInput = RESOURCE_NOT_CREATED;

/* Name: freq_in_create_FuelSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:freq_in_create_FuelSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | FrequencyIn" Help:"Debug Variable" */
uint8_T freq_in_create_FuelSensorPin = 7;

/* Name: freq_in_read_FuelSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:freq_in_read_FuelSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | FrequencyIn" Help:"Debug Variable" */
uint8_T freq_in_read_FuelSensorPin = 7;

/* Name: ain_create_EGRPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_EGRPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_EGRPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_EGRPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_EGRPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_EGRPin = RESOURCE_NOT_CREATED;

/* Name: ain_create_PostO2Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_PostO2Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_PostO2Pin = RESOURCE_NOT_CREATED;

/* Name: ain_read_PostO2Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_PostO2Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_PostO2Pin = RESOURCE_NOT_CREATED;

/* Name: freq_in_create_MAF_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:freq_in_create_MAF_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | FrequencyIn" Help:"Debug Variable" */
uint8_T freq_in_create_MAF_Pin = 7;

/* Name: freq_in_read_MAF_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:freq_in_read_MAF_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | FrequencyIn" Help:"Debug Variable" */
uint8_T freq_in_read_MAF_Pin = 7;

/* Name: ain_create_O2SensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_O2SensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_O2SensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_O2SensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_O2SensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_O2SensorPin = RESOURCE_NOT_CREATED;

/* Name: pwm_create_ETCPin_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_create_ETCPin_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_create_ETCPin_PWMOutput = 7;

/* Name: pwm_set_ETCPin_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_set_ETCPin_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_set_ETCPin_PWMOutput = 0;

/* Name: ain_create_SensVoltSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_SensVoltSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_SensVoltSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_SensVoltSensorPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_SensVoltSensorPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_SensVoltSensorPin = RESOURCE_NOT_CREATED;

/* Name: ain_create_FuelPresPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_FuelPresPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_FuelPresPin = RESOURCE_NOT_CREATED;

/* Name: ain_read_FuelPresPin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_FuelPresPin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_FuelPresPin = RESOURCE_NOT_CREATED;

/* Name: oneshot_create_ONESHOT ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:oneshot_create_ONESHOT Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | OneShot" Help:"Debug Variable" */
uint8_T oneshot_create_ONESHOT = 7;

/* Name: resource_allocation ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:resource_allocation Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | Other" Help:"Debug Variable" */
uint8_T resource_allocation = 7;

/* Name: can_tx_err_CAN_1_0 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_1_0 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_1_0 = 0;

/* Name: can_tx_err_CAN_2_0 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_2_0 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_2_0 = 0;

/* Name: can_tx_err_CAN_1_0_52 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_1_0_52 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_1_0_52 = 0;

/* Name: can_tx_err_CAN_2_0_53 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_2_0_53 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_2_0_53 = 0;

/* Name: can_create_CAN_1 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_create_CAN_1 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_create_CAN_1 = 7;

/* Name: protocol_register_CAN_1 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:protocol_register_CAN_1 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T protocol_register_CAN_1 = 7;

/* Name: can_create_CAN_2 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_create_CAN_2 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_create_CAN_2 = 7;

/* Name: protocol_register_CAN_2 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:protocol_register_CAN_2 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T protocol_register_CAN_2 = 7;

#include <Pragma_Section_End_sbss.h>

/*---- END OF FILE ----------------------------------------------------------------------------------------*/
