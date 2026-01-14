print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interactive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "TestCycleTimeStart.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "Andreas"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Joe D. Williams"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "description"
meta5.content = "Test design patterns for animation control."

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "10 September 2023"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "Mon, 15 Sep 2025 05:20:59 GMT"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/TimeSensor/cycletimeIndex.html"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/cycleTimeStart.x3d"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "identifier"
meta10.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/TestCycleTimeStart.x3d"

head1.children.append(meta10)

X3D0.head = head1
Scene11 = x3d.Scene()
WorldInfo12 = x3d.WorldInfo()
WorldInfo12.title = "TestCycleTimeStart.x3d"

Scene11.children.append(WorldInfo12)
Viewpoint13 = x3d.Viewpoint()
Viewpoint13.description = "hello in there"

Scene11.children.append(Viewpoint13)
TimeSensor14 = x3d.TimeSensor()
TimeSensor14.DEF = "REDTIME1"
TimeSensor14.loop = True
TimeSensor14.stopTime = 1757913659.298

Scene11.children.append(TimeSensor14)
TimeSensor15 = x3d.TimeSensor()
TimeSensor15.DEF = "GREENTIME2"
TimeSensor15.cycleInterval = 5
TimeSensor15.startTime = 1757913659.298

Scene11.children.append(TimeSensor15)
TimeSensor16 = x3d.TimeSensor()
TimeSensor16.DEF = "BLUETIME3"
TimeSensor16.cycleInterval = 10

Scene11.children.append(TimeSensor16)
BooleanFilter17 = x3d.BooleanFilter()
BooleanFilter17.DEF = "GREENFILTER"

Scene11.children.append(BooleanFilter17)
TimeTrigger18 = x3d.TimeTrigger()
TimeTrigger18.DEF = "BLUETRIGGER"

Scene11.children.append(TimeTrigger18)
Transform19 = x3d.Transform()
Transform19.DEF = "REDBALL"
Transform19.translation = [1.615999,0,0]
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.diffuseColor = [1,0,0]

Appearance21.material = Material22

Shape20.appearance = Appearance21
Sphere23 = x3d.Sphere()

Shape20.geometry = Sphere23

Transform19.children.append(Shape20)

Scene11.children.append(Transform19)
Transform24 = x3d.Transform()
Transform24.DEF = "GREENBALL"
Shape25 = x3d.Shape()
Appearance26 = x3d.Appearance()
Material27 = x3d.Material()
Material27.diffuseColor = [0,1,0]

Appearance26.material = Material27

Shape25.appearance = Appearance26
Sphere28 = x3d.Sphere()

Shape25.geometry = Sphere28

Transform24.children.append(Shape25)

Scene11.children.append(Transform24)
Transform29 = x3d.Transform()
Transform29.DEF = "BLUEBALL"
Shape30 = x3d.Shape()
Appearance31 = x3d.Appearance()
Material32 = x3d.Material()
Material32.diffuseColor = [0,0,1]

Appearance31.material = Material32

Shape30.appearance = Appearance31
Sphere33 = x3d.Sphere()

Shape30.geometry = Sphere33

Transform29.children.append(Shape30)

Scene11.children.append(Transform29)
PositionInterpolator34 = x3d.PositionInterpolator()
PositionInterpolator34.DEF = "REDINTERP1"
PositionInterpolator34.key = [0,0.25,0.5,0.75,1]
PositionInterpolator34.keyValue = [(0, 0, 0),(2, 0, 0),(0, 0, 0),(-2, 0, 0),(0, 0, 0)]

Scene11.children.append(PositionInterpolator34)
PositionInterpolator35 = x3d.PositionInterpolator()
PositionInterpolator35.DEF = "GREENINTERP2"
PositionInterpolator35.key = [0,0.25,0.5,0.75,1]
PositionInterpolator35.keyValue = [(0, 0, 0),(0, 2, 0),(0, 0, 0),(0, -2, 0),(0, 0, 0)]

Scene11.children.append(PositionInterpolator35)
PositionInterpolator36 = x3d.PositionInterpolator()
PositionInterpolator36.DEF = "BLUEINTERP3"
PositionInterpolator36.key = [0,0.25,0.5,0.75,1]
PositionInterpolator36.keyValue = [(0, 0, 0),(0, -2, 0),(0, 0, 0),(0, 2, 0),(0, 0, 0)]

Scene11.children.append(PositionInterpolator36)
ROUTE37 = x3d.ROUTE()
ROUTE37.fromNode = "REDTIME1"
ROUTE37.fromField = "cycleTime"
ROUTE37.toNode = "REDTIME1"
ROUTE37.toField = "set_stopTime"

Scene11.children.append(ROUTE37)
ROUTE38 = x3d.ROUTE()
ROUTE38.fromNode = "REDTIME1"
ROUTE38.fromField = "stopTime_changed"
ROUTE38.toNode = "GREENTIME2"
ROUTE38.toField = "set_startTime"

Scene11.children.append(ROUTE38)
ROUTE39 = x3d.ROUTE()
ROUTE39.fromNode = "GREENTIME2"
ROUTE39.fromField = "isActive"
ROUTE39.toNode = "GREENFILTER"
ROUTE39.toField = "set_boolean"

Scene11.children.append(ROUTE39)
ROUTE40 = x3d.ROUTE()
ROUTE40.fromNode = "GREENFILTER"
ROUTE40.fromField = "inputFalse"
ROUTE40.toNode = "BLUETRIGGER"
ROUTE40.toField = "set_boolean"

Scene11.children.append(ROUTE40)
ROUTE41 = x3d.ROUTE()
ROUTE41.fromNode = "BLUETRIGGER"
ROUTE41.fromField = "triggerTime"
ROUTE41.toNode = "BLUETIME3"
ROUTE41.toField = "set_startTime"

Scene11.children.append(ROUTE41)
ROUTE42 = x3d.ROUTE()
ROUTE42.fromNode = "REDTIME1"
ROUTE42.fromField = "fraction_changed"
ROUTE42.toNode = "REDINTERP1"
ROUTE42.toField = "set_fraction"

Scene11.children.append(ROUTE42)
ROUTE43 = x3d.ROUTE()
ROUTE43.fromNode = "REDINTERP1"
ROUTE43.fromField = "value_changed"
ROUTE43.toNode = "REDBALL"
ROUTE43.toField = "set_translation"

Scene11.children.append(ROUTE43)
ROUTE44 = x3d.ROUTE()
ROUTE44.fromNode = "GREENTIME2"
ROUTE44.fromField = "fraction_changed"
ROUTE44.toNode = "GREENINTERP2"
ROUTE44.toField = "set_fraction"

Scene11.children.append(ROUTE44)
ROUTE45 = x3d.ROUTE()
ROUTE45.fromNode = "GREENINTERP2"
ROUTE45.fromField = "value_changed"
ROUTE45.toNode = "GREENBALL"
ROUTE45.toField = "set_translation"

Scene11.children.append(ROUTE45)
ROUTE46 = x3d.ROUTE()
ROUTE46.fromNode = "BLUETIME3"
ROUTE46.fromField = "fraction_changed"
ROUTE46.toNode = "BLUEINTERP3"
ROUTE46.toField = "set_fraction"

Scene11.children.append(ROUTE46)
ROUTE47 = x3d.ROUTE()
ROUTE47.fromNode = "BLUEINTERP3"
ROUTE47.fromField = "value_changed"
ROUTE47.toNode = "BLUEBALL"
ROUTE47.toField = "set_translation"

Scene11.children.append(ROUTE47)

X3D0.Scene = Scene11
f = open("../data/TestCycleTimeStart.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/TestCycleTimeStart.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/TestCycleTimeStart.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
