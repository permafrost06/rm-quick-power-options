[CurrentACLidActionMeasure]
Measure=Plugin
Plugin=RunCommand
OutputType=ANSI
Parameter=powercfg /query SCHEME_BALANCED SUB_BUTTONS LIDACTION | findstr "0x0"
State=Hide
RegExpSubstitute=1
Substitute="[\s\S]*Current AC Power Setting Index: 0x0000000(\w)[\s\S]*":"\1"
IfMatch=1
IfMatchAction=[!SetOption ACActiveIndicator Y "41"]
IfMatch2=0
IfMatchAction2=[!SetOption ACActiveIndicator Y "54"]
IfMatch3=3
IfMatchAction3=[!SetOption ACActiveIndicator Y "67"]
IfMatchMode=1

[SetACToSleepMeasure]
Measure=Plugin
Plugin=RunCommand
OutputType=ANSI
Parameter=powercfg /setacvalueindex SCHEME_BALANCED SUB_BUTTONS LIDACTION 1 & powercfg /setactive SCHEME_BALANCED
State=Hide

[SetACToDoNothingMeasure]
Measure=Plugin
Plugin=RunCommand
OutputType=ANSI
Parameter=powercfg /setacvalueindex SCHEME_BALANCED SUB_BUTTONS LIDACTION 0 & powercfg /setactive SCHEME_BALANCED
State=Hide

[SetACToShutDownMeasure]
Measure=Plugin
Plugin=RunCommand
OutputType=ANSI
Parameter=powercfg /setacvalueindex SCHEME_BALANCED SUB_BUTTONS LIDACTION 3 & powercfg /setactive SCHEME_BALANCED
State=Hide

[CurrentDCLidActionMeasure]
Measure=Plugin
Plugin=RunCommand
OutputType=ANSI
Parameter=powercfg /query SCHEME_BALANCED SUB_BUTTONS LIDACTION | findstr "0x0"
State=Hide
RegExpSubstitute=1
Substitute="[\s\S]*Current DC Power Setting Index: 0x0000000(\w)[\s\S]*":"\1"
IfMatch=1
IfMatchAction=[!SetOption DCActiveIndicator Y "41"]
IfMatch2=0
IfMatchAction2=[!SetOption DCActiveIndicator Y "54"]
IfMatch3=3
IfMatchAction3=[!SetOption DCActiveIndicator Y "67"]
IfMatchMode=1

[SetDCToSleepMeasure]
Measure=Plugin
Plugin=RunCommand
OutputType=ANSI
Parameter=powercfg /setdcvalueindex SCHEME_BALANCED SUB_BUTTONS LIDACTION 1 & powercfg /setactive SCHEME_BALANCED
State=Hide

[SetDCToDoNothingMeasure]
Measure=Plugin
Plugin=RunCommand
OutputType=ANSI
Parameter=powercfg /setdcvalueindex SCHEME_BALANCED SUB_BUTTONS LIDACTION 0 & powercfg /setactive SCHEME_BALANCED
State=Hide

[SetDCToShutDownMeasure]
Measure=Plugin
Plugin=RunCommand
OutputType=ANSI
Parameter=powercfg /setdcvalueindex SCHEME_BALANCED SUB_BUTTONS LIDACTION 3 & powercfg /setactive SCHEME_BALANCED
State=Hide