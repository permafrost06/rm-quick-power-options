[LidTitle]
Meter=String
MeterStyle=TitleStyle
StringAlign=Center
X=100
Y=2
Text=LID CLOSE ACTION

[LidACTitle]
Meter=String
MeterStyle=TitleStyle
FontWeight=400
StringAlign=Center
X=50
Y=21
Text=AC

[LidACSeperator]
Meter=Shape
Shape=Line 0,0,100,1 | Stroke Color 0,255,0
Y=R

[ACSleepButton]
Meter=String
MeterStyle=ACButtonStyle
Y=R
Text=SLEEP
LeftMouseUpAction=[!CommandMeasure SetACToSleepMeasure "Run"][!CommandMeasure CurrentACLidActionMeasure "Run"]

[ACDoNothingButton]
Meter=String
MeterStyle=ACButtonStyle
Y=R
Text=DO NOTHING
LeftMouseUpAction=[!CommandMeasure SetACToDoNothingMeasure "Run"][!CommandMeasure CurrentACLidActionMeasure "Run"]

[ACShutDownButton]
Meter=String
MeterStyle=ACButtonStyle
Y=R
Text=SHUT DOWN
LeftMouseUpAction=[!CommandMeasure SetACToShutDownMeasure "Run"][!CommandMeasure CurrentACLidActionMeasure "Run"]

[LidDCTitle]
Meter=String
MeterStyle=TitleStyle
FontWeight=400
StringAlign=Center
X=150
Y=21
Text=DC

[LidDCSeperator]
Meter=Shape
Shape=Line 0,0,100,1 | Stroke Color 0,255,0
X=100
Y=R

[DCSleepButton]
Meter=String
MeterStyle=DCButtonStyle
Y=R
Text=SLEEP
LeftMouseUpAction=[!CommandMeasure SetDCToSleepMeasure "Run"][!CommandMeasure CurrentDCLidActionMeasure "Run"]

[DCDoNothingButton]
Meter=String
MeterStyle=DCButtonStyle
Y=R
Text=DO NOTHING
LeftMouseUpAction=[!CommandMeasure SetDCToDoNothingMeasure "Run"][!CommandMeasure CurrentDCLidActionMeasure "Run"]

[DCShutDownButton]
Meter=String
MeterStyle=DCButtonStyle
Y=R
Text=SHUT DOWN
LeftMouseUpAction=[!CommandMeasure SetDCToShutDownMeasure "Run"][!CommandMeasure CurrentDCLidActionMeasure "Run"]