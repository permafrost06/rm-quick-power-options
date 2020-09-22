;powercfg /Q scheme_balanced sub_video videoidle
;powercfg /Q scheme_balanced sub_sleep standbyidle
;[\s\S]*Current AC Power Setting Index: (0x\d*)[\s\S]*
;[\s\S]*Current DC Power Setting Index: (0x\d*)[\s\S]*

[DecHexConvert]
Measure=Script
ScriptFile=dechex.lua

[CurrentVarInSeconds]
Measure=Calc
Formula=#CurrentVar#*60
DynamicVariables=1

[CurrentACSleepTimeout]
Measure=Plugin
Plugin=RunCommand
OutputType=ANSI
Parameter=powercfg /Q scheme_balanced sub_sleep standbyidle
State=Hide
RegExpSubstitute=1
Substitute="[\s\S]*Current AC Power Setting Index: (0x[\dabcdef]{8})[\s\S]*":"\1"

[CurrentACDisplayTimeout]
Measure=Plugin
Plugin=RunCommand
OutputType=ANSI
Parameter=powercfg /Q scheme_balanced sub_video videoidle
State=Hide
RegExpSubstitute=1
Substitute="[\s\S]*Current AC Power Setting Index: (0x[\dabcdef]{8})[\s\S]*":"\1"

[CurrentACSleepTimeoutInMinutes]
Measure=Calc
Formula=[&DecHexConvert:ConvertToDec([&CurrentACSleepTimeout])]/60
DynamicVariables=1

[CurrentACDisplayTimeoutInMinutes]
Measure=Calc
Formula=[&DecHexConvert:ConvertToDec([&CurrentACDisplayTimeout])]/60
DynamicVariables=1

[SetACSleepTimeout]
Measure=Plugin
Plugin=RunCommand
OutputType=ANSI
Parameter=powercfg /setacvalueindex scheme_balanced sub_sleep standbyidle [&CurrentVarInSeconds] & powercfg /setactive SCHEME_BALANCED
State=Hide
DynamicVariables=1

[SetACDisplayTimeout]
Measure=Plugin
Plugin=RunCommand
OutputType=ANSI
Parameter=powercfg /setacvalueindex scheme_balanced sub_video videoidle [&CurrentVarInSeconds] & powercfg /setactive SCHEME_BALANCED
State=Hide
DynamicVariables=1

[TimeoutACSleepInput]
Measure=Plugin
Plugin=InputText
SolidColor=000000
FontColor=#SkinColor#
FontSize=8
X=65
Y=118
H=15
W=15
DefaultValue=[&CurrentACSleepTimeoutInMinutes]
Command1=!SetVariable CurrentVar "$UserInput$"
Command2=!UpdateMeasure CurrentVarInSeconds
Command3=!UpdateMeasure SetACSleepTimeout
Command4=!CommandMeasure SetACSleepTimeout "Run"
Command5=!CommandMeasure CurrentACSleepTimeout "Run"

[TimeoutACDisplayInput]
Measure=Plugin
Plugin=InputText
SolidColor=000000
FontColor=#SkinColor#
FontSize=8
X=65
Y=130
H=15
W=15
DefaultValue=[&CurrentACDisplayTimeoutInMinutes]
Command1=!SetVariable CurrentVar "$UserInput$"
Command2=!UpdateMeasure CurrentVarInSeconds
Command3=!UpdateMeasure SetACDisplayTimeout
Command4=!CommandMeasure SetACDisplayTimeout "Run"
Command5=!CommandMeasure CurrentACDisplayTimeout "Run"

[CurrentDCSleepTimeout]
Measure=Plugin
Plugin=RunCommand
OutputType=ANSI
Parameter=powercfg /Q scheme_balanced sub_sleep standbyidle
State=Hide
RegExpSubstitute=1
Substitute="[\s\S]*Current DC Power Setting Index: (0x[\dabcdef]{8})[\s\S]*":"\1"

[CurrentDCDisplayTimeout]
Measure=Plugin
Plugin=RunCommand
OutputType=ANSI
Parameter=powercfg /Q scheme_balanced sub_video videoidle
State=Hide
RegExpSubstitute=1
Substitute="[\s\S]*Current DC Power Setting Index: (0x[\dabcdef]{8})[\s\S]*":"\1"

[CurrentDCSleepTimeoutInMinutes]
Measure=Calc
Formula=[&DecHexConvert:ConvertToDec([&CurrentDCSleepTimeout])]/60
DynamicVariables=1

[CurrentDCDisplayTimeoutInMinutes]
Measure=Calc
Formula=[&DecHexConvert:ConvertToDec([&CurrentDCDisplayTimeout])]/60
DynamicVariables=1

[SetDCSleepTimeout]
Measure=Plugin
Plugin=RunCommand
OutputType=ANSI
Parameter=powercfg /setacvalueindex scheme_balanced sub_sleep standbyidle [&CurrentVarInSeconds] & powercfg /setactive SCHEME_BALANCED
State=Hide
DynamicVariables=1

[SetDCDisplayTimeout]
Measure=Plugin
Plugin=RunCommand
OutputType=ANSI
Parameter=powercfg /setacvalueindex scheme_balanced sub_video videoidle [&CurrentVarInSeconds] & powercfg /setactive SCHEME_BALANCED
State=Hide
DynamicVariables=1

[TimeoutDCSleepInput]
Measure=Plugin
Plugin=InputText
SolidColor=000000
FontColor=#SkinColor#
FontSize=8
X=167
Y=118
H=15
W=15
DefaultValue=[&CurrentDCSleepTimeoutInMinutes]
Command1=!SetVariable CurrentVar "$UserInput$"
Command2=!UpdateMeasure CurrentVarInSeconds
Command3=!UpdateMeasure SetDCSleepTimeout
Command4=!CommandMeasure SetDCSleepTimeout "Run"
Command5=!CommandMeasure CurrentDCSleepTimeout "Run"

[TimeoutDCDisplayInput]
Measure=Plugin
Plugin=InputText
SolidColor=000000
FontColor=#SkinColor#
FontSize=8
X=167
Y=130
H=15
W=15
DefaultValue=[&CurrentDCDisplayTimeoutInMinutes]
Command1=!SetVariable CurrentVar "$UserInput$"
Command2=!UpdateMeasure CurrentVarInSeconds
Command3=!UpdateMeasure SetDCDisplayTimeout
Command4=!CommandMeasure SetDCDisplayTimeout "Run"
Command5=!CommandMeasure CurrentDCDisplayTimeout "Run"