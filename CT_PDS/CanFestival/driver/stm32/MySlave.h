
/* File generated by gen_cfile.py. Should not be modified. */

#ifndef MYSLAVE_H
#define MYSLAVE_H

#include "data.h"

/* Prototypes of function provided by object dictionnary */
UNS32 MySlave_valueRangeTest (UNS8 typeValue, void * value);
const indextable * MySlave_scanIndexOD (CO_Data *d, UNS16 wIndex, UNS32 * errorCode);

/* Master node data struct */
extern CO_Data MySlave_Data;
extern INTEGER32 Reservice;
typedef struct
{
	INTEGER32 Voltage;
    INTEGER32 Current;
    INTEGER32 Power;
    INTEGER32 Frequency;
    INTEGER32 Temperature;
    INTEGER32 Time;
}Index6000TypeDef;

typedef struct
{
	INTEGER32 ControlMode;
    INTEGER32 QuitFailure;
    INTEGER32 Look;
    INTEGER32 SelfStart;
}Index6010TypeDef;

typedef struct
{
	INTEGER32 Condition;
    INTEGER32 Logic;
    INTEGER32 Event;
    INTEGER32 FailureStatus;
    INTEGER32 FailureIndication;
}Index6011TypeDef;

typedef struct
{
	INTEGER32 Condition;
    INTEGER32 Logic;
    INTEGER32 Event;
    INTEGER32 FailureStatus;
    INTEGER32 FailureIndication;
}Index6012TypeDef;

typedef struct
{
	INTEGER32 InputDelayTime;
    INTEGER32 Output1DelayTime;
    INTEGER32 Output2DelayTime;
    INTEGER32 Output3DelayTime;
    INTEGER32 Output4DelayTime;
    INTEGER32 Output5DelayTime;
    INTEGER32 Output6DelayTime;
    INTEGER32 Output7DelayTime;
    INTEGER32 Output8DelayTime;
    INTEGER32 MainSwitchDelayTime;
    INTEGER32 InterlockDelayTime;
    INTEGER32 KeyLockDelayTime;
    INTEGER32 DeveiceSpecificSignal1DelayTime;
    INTEGER32 DeveiceSpecificSignal2DelayTime;
}Index6013TypeDef;

typedef struct
{
	INTEGER32 InputDelayTime;
    INTEGER32 Output1DelayTime;
    INTEGER32 Output2DelayTime;
    INTEGER32 Output3DelayTime;
    INTEGER32 Output4DelayTime;
    INTEGER32 Output5DelayTime;
    INTEGER32 Output6DelayTime;
    INTEGER32 Output7DelayTime;
    INTEGER32 Output8DelayTime;
    INTEGER32 MainSwitchDelayTime;
    INTEGER32 InterlockDelayTime;
    INTEGER32 KeyLockDelayTime;
    INTEGER32 DeveiceSpecificSignal1DelayTime;
    INTEGER32 DeveiceSpecificSignal2DelayTime;
}Index6014TypeDef;

typedef struct
{
	INTEGER32 Value;
}Index6020TypeDef;

typedef struct
{
	INTEGER32 Value;
}Index6021TypeDef;

typedef struct
{
	INTEGER32 Value;
}Index6022TypeDef;

typedef struct
{
	INTEGER32 TemperatureThreshold1ReturenValue;
}Index6025TypeDef;

typedef struct
{
	INTEGER32 TemperatureThreshold2ReturenValue;
}Index6026TypeDef;

typedef struct
{
	INTEGER32 Value;
}Index6030TypeDef;

typedef struct
{
	INTEGER32 DigitalInput1Condiguration;
    INTEGER32 DigitalInput2Condiguration;
    INTEGER32 DigitalInput3Condiguration;
}Index6031TypeDef;

typedef struct
{
	INTEGER32 DigitalOutput1Condiguration;
    INTEGER32 DigitalOutput1Condiguration_Threshold;
    INTEGER32 DigitalOutput2Condiguration;
    INTEGER32 DigitalOutput2Condiguration_Threshold;
    INTEGER32 DigitalOutput3Condiguration;
    INTEGER32 DigitalOutput3Condiguration_Threshold;
}Index6032TypeDef;

typedef struct
{
	UNS8 OnOff;
    UNS8 QuitFailure;
}Index6100TypeDef;

typedef struct
{
	INTEGER32 Condition;
    INTEGER32 Logic;
    INTEGER32 Event;
    INTEGER32 FaultStatus;
    INTEGER32 FaultIndication;
}Index6111TypeDef;

typedef struct
{
	INTEGER32 Condition;
    INTEGER32 Logic;
    INTEGER32 Event;
    INTEGER32 FaultStatus;
    INTEGER32 FaultIndication;
}Index6112TypeDef;

typedef struct
{
	INTEGER32 Voltage;
    INTEGER32 Current;
    INTEGER32 Power;
    INTEGER32 LinkVoltage;
    INTEGER32 Temperature;
}Index6113TypeDef;

typedef struct
{
	INTEGER32 Voltage;
    INTEGER32 Current;
    INTEGER32 Power;
    INTEGER32 LinkVoltage;
    INTEGER32 Temperature;
}Index6114TypeDef;

typedef struct
{
	INTEGER32 Voltage;
    INTEGER32 Current;
    INTEGER32 Power;
    INTEGER32 LinkVoltage;
    INTEGER32 Temperature;
}Index6115TypeDef;

typedef struct
{
	INTEGER32 InputDelayTime;
    INTEGER32 VControlDelayTime;
    INTEGER32 CControlDelayTime;
    INTEGER32 PControlDelayTime;
    INTEGER32 DeviceSpecificSignal1DelayTime;
    INTEGER32 DeviceSpecificSignal2DelayTime;
    INTEGER32 DeviceSpecificSignal3DelayTime;
    INTEGER32 DeviceSpecificSignal4DelayTime;
}Index6118TypeDef;

typedef struct
{
	INTEGER32 VThreshold1DelayTime;
    INTEGER32 VThreshold2DelayTime;
    INTEGER32 CThreshold1DelayTime;
    INTEGER32 CThreshold2DelayTime;
	INTEGER32 PThreshold1DelayTime;
    INTEGER32 PThreshold2DelayTime;
    INTEGER32 LvThreshold1DelayTime;
    INTEGER32 LvThreshold2DelayTime;
    INTEGER32 TThreshold1DelayTime;
    INTEGER32 TThreshold2DelayTime;
    INTEGER32 OverVoltageDelayTime;
    INTEGER32 CoolingFaultDelayTime;
    INTEGER32 PowerFailDelayTime;
    INTEGER32 DeviceSpecificSignal1DelayTime;
    INTEGER32 DeviceSpecificSignal2DelayTime;
}Index6119TypeDef;

typedef struct
{
	INTEGER32 Voltage;
    INTEGER32 Current;
    INTEGER32 Power;
    INTEGER32 LinkVoltage;
    INTEGER32 Temperature;
}Index611ATypeDef;

typedef struct
{
	INTEGER32 Voltage;
    INTEGER32 Current;
    INTEGER32 Power;
    INTEGER32 LinkVoltage;
    INTEGER32 Temperature;
}Index611BTypeDef;

typedef struct
{
	INTEGER32 OpetationMode;
    INTEGER32 OnOff;
    INTEGER32 QuitFailure;
    INTEGER32 Bank;
    INTEGER32 SelfStarting;
}Index6200TypeDef;

typedef struct
{
	INTEGER32 Condtion;
    INTEGER32 Logic;
    INTEGER32 Event;
    INTEGER32 FaultStatus;
    INTEGER32 FaultIndicaion;
}Index6201TypeDef;

typedef struct
{
	INTEGER32 Condtion;
    INTEGER32 Logic;
    INTEGER32 Event;
    INTEGER32 FaultStatus;
    INTEGER32 FaultIndicaion;
}Index6202TypeDef;

typedef struct
{
	INTEGER32 VoltageMax;
    INTEGER32 VoltageMin;
    INTEGER32 CurrentMax;
    INTEGER32 CurrentMin;
    INTEGER32 PowerMax;
    INTEGER32 PowerMin;
    INTEGER32 FrequencyMax;
    INTEGER32 FrequencyMin;
}Index6203TypeDef;

typedef struct
{
	INTEGER32 Voltage;
    INTEGER32 Current;
    INTEGER32 Power;
    INTEGER32 LinkVoltage;
    INTEGER32 Temperature;
}Index6204TypeDef;

typedef struct
{
INTEGER32 SetVoltage;
    INTEGER32 MaxVoltage;
    INTEGER32 MinVoltage;
    INTEGER32 VoltageThreshold1;
    INTEGER32 VoltageThreshold2;
    INTEGER32 VoltageThreshold2DelayTime;
    INTEGER32 VoltageThreshold1DelayTime;
    INTEGER32 SetCurrent;
    INTEGER32 MaxCurrent;
    INTEGER32 MinCurrent;
    INTEGER32 CurrentThreshold1;
    INTEGER32 CurrentThreshold2;
    INTEGER32 CurrentThreshold1DelayTime;
    INTEGER32 CurrentThreshold2DelayTime;
    INTEGER32 SetPower;
    INTEGER32 MaxPower;
    INTEGER32 MinPower;
    INTEGER32 PowerThreshold1;
    INTEGER32 PowerThreshold2;
    INTEGER32 PowerThreshold1DelayTime;
    INTEGER32 PowerThreshold2DelayTime;
    INTEGER32 SetFrequency;
    INTEGER32 MaxFrequency;
    INTEGER32 MinFrequency;
    INTEGER32 FrequencyThreshold1;
    INTEGER32 FrequencyThreshold2;
    INTEGER32 FrequencyThreshold1DelayTime;
    INTEGER32 FrequencyThreshold2DelayTime;
    INTEGER32 V_ControlFlagDelayTime;
    INTEGER32 C_ControlFlagDelayTime;
    INTEGER32 P_ControlFlagDelayTime;
    INTEGER32 F_ControlFlagDelayTimF;
    INTEGER32 DeviceSpecificStatusFlag1DelayTime;
    INTEGER32 DeviceSpecificStatusFlag2DelayTime;
    INTEGER32 DeviceSpecificStatusFlag3DelayTime;
    INTEGER32 DeviceSpecificStatusFlag4DelayTime;
    INTEGER32 DeviceSpecificFailureStatusFlag1DelayTime;
    INTEGER32 DeviceSpecificFailureStatusFlag2DelayTime;
    INTEGER32 VoltageThresholdReturn1;
    INTEGER32 VoltageThresholdReturn2;
    INTEGER32 CurrentThresholdReturn1;
    INTEGER32 CurrentThresholdReturn2;
    INTEGER32 PowerThresholdReturn1;
    INTEGER32 PowerThresholdReturn2;
    INTEGER32 FrequencyThresholdReturn1;
    INTEGER32 FrequencyThresholdReturn2;
}Index6205TypeDef;

typedef struct
{
	INTEGER32 Mode;
    INTEGER32 Restart;
    INTEGER32 ActualLoopNo;
    INTEGER32 ActualStepNo;
    INTEGER32 ActualStepTme;
    INTEGER32 SetLoopNo;
    INTEGER32 SetStepNo;
    INTEGER32 SetSteptype;
    INTEGER32 SetStepTime;
    INTEGER32 SetStepBank;
}Index6206TypeDef;

typedef struct
{
	INTEGER32 Threshold1;
    INTEGER32 Threshold2;
    INTEGER32 Threshold1DelayTime;
    INTEGER32 Threshold2DelayTime;
    INTEGER32 ThresholdReturen1;
    INTEGER32 ThresholdReturen2;
}Index6207TypeDef;

extern Index6000TypeDef MySlaveIndex6000_Unit;
extern Index6010TypeDef MySlaveIndex6010_DeviceCommand;
extern Index6011TypeDef MySlaveIndex6011_DeviceStatus;
extern Index6012TypeDef MySlaveIndex6012_DeviceFailureStatus;
extern Index6013TypeDef MySlaveIndex6013_DeviceStatusDelayTime;
extern Index6014TypeDef MySlaveIndex6014_DeviceFailureStatusDelayTime;
extern Index6020TypeDef MySlaveIndex6020_TemperatureActualValue;
extern Index6021TypeDef MySlaveIndex6021_TemperatureThreshold1;
extern Index6022TypeDef MySlaveIndex6022_TemperatureThreshold1;
extern Index6025TypeDef MySlaveIndex6025_TemperatureThreshold1ReturnValue;
extern Index6026TypeDef MySlaveIndex6026_TemperatureThreshold2ReturnValue;
extern Index6030TypeDef MySlaveIndex6030_OperatingHours;
extern Index6031TypeDef MySlaveIndex6031_DigitalInputConfiguration;
extern Index6032TypeDef MySlaveIndex6032_DigitalOutputConfiguration;
extern Index6100TypeDef MySlaveIndex6100_InputCommands;
extern Index6111TypeDef MySlaveIndex6111_InputStatus;
extern Index6112TypeDef MySlaveIndex6112_InputFailureStatus;
extern Index6113TypeDef MySlaveIndex6113_InputActualValues;
extern Index6114TypeDef MySlaveIndex6114_InputThreshold1Parameter;
extern Index6115TypeDef MySlaveIndex6115_InputThreshold2Parameter;
extern Index6118TypeDef MySlaveIndex6118_InputStatusDelayTime;
extern Index6119TypeDef MySlaveIndex6119_InputFailureStatusDelayTime;
extern Index611ATypeDef MySlaveIndex611A_InputThresholdReturn1Parameter;
extern Index611BTypeDef MySlaveIndex611B_InputThresholdReturn2Parameter;
extern Index6200TypeDef MySlaveIndex6200_Output1Commands;
extern Index6201TypeDef MySlaveIndex6201_Output1Status;
extern Index6202TypeDef MySlaveIndex6202_Output1FailureStatus;
extern Index6203TypeDef MySlaveIndex6203_Output1Range;
extern Index6204TypeDef MySlaveIndex6204_Output1ActualValues;
extern Index6205TypeDef MySlaveIndex6205_Output1SetValues;
extern Index6206TypeDef MySlaveIndex6206_Output1Sequence;
extern Index6207TypeDef MySlaveIndex6207_Output1TemperatureThresholds;
extern Index6200TypeDef MySlaveIndex6210_Output2Commands;

#endif // MYSLAVE_H