[TimeoutTitle]
Meter=String
MeterStyle=TitleStyle
StringAlign=Center
X=100
Y=81
Text=TIMEOUT

[ACTimeoutTitle]
Meter=String
MeterStyle=TitleStyle
FontWeight=400
StringAlign=Center
X=50
Y=100
Text=AC

[TimeoutACSeperator]
Meter=Shape
Shape=Line 0,0,100,1 | Stroke Color 0,255,0
Y=R

[TimeoutACSleepLabel]
Meter=String
MeterStyle=ACButtonStyle
Y=R
Text=SLEEP

[TimeoutACSleep]
Meter=String
MeterStyle=ACButtonStyle
SolidColor=0,0,0,1
Y=r
X=15R
Text=[&CurrentACSleepTimeoutInMinutes]
DynamicVariables=1
LeftMouseUpAction=!CommandMeasure "TimeoutACSleepInput" "ExecuteBatch 1-5"

[TimeoutACDisplayLabel]
Meter=String
MeterStyle=ACButtonStyle
Y=R
Text=DISPLAY

[TimeoutACDisplay]
Meter=String
MeterStyle=ACButtonStyle
SolidColor=0,0,0,1
Y=r
X=5R
Text=[&CurrentACDisplayTimeoutInMinutes]
DynamicVariables=1
LeftMouseUpAction=!CommandMeasure "TimeoutACDisplayInput" "ExecuteBatch 1-5"

[TimeoutDCTitle]
Meter=String
MeterStyle=TitleStyle
FontWeight=400
StringAlign=Center
X=150
Y=100
Text=DC

[TimeoutDCSeperator]
Meter=Shape
Shape=Line 0,0,100,1 | Stroke Color 0,255,0
X=100
Y=R

[TimeoutDCSleepLabel]
Meter=String
MeterStyle=DCButtonStyle
Y=R
Text=SLEEP

[TimeoutDCSleep]
Meter=String
MeterStyle=DCButtonStyle
SolidColor=0,0,0,1
Y=r
X=15R
Text=[&CurrentDCSleepTimeoutInMinutes]
DynamicVariables=1
LeftMouseUpAction=!CommandMeasure "TimeoutDCSleepInput" "ExecuteBatch 1-5"

[TimeoutDCDisplayLabel]
Meter=String
MeterStyle=DCButtonStyle
Y=R
Text=DISPLAY

[TimeoutDCDisplay]
Meter=String
MeterStyle=DCButtonStyle
SolidColor=0,0,0,1
Y=r
X=5R
Text=[&CurrentDCDisplayTimeoutInMinutes]
DynamicVariables=1
LeftMouseUpAction=!CommandMeasure "TimeoutDCDisplayInput" "ExecuteBatch 1-5"