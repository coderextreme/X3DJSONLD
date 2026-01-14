print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "pp3.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "John Carlson"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "translator"
meta4.content = "John Carlson"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "created"
meta5.content = "5 May 2015"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "modified"
meta6.content = "23 Dec 2022"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "description"
meta7.content = "A process pipeline between three spheres (try typing on spheres and blue"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "identifier"
meta8.content = "https://coderextreme.net/x3d/pp3.x3d"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "generator"
meta9.content = "manual"

head1.children.append(meta9)

X3D0.head = head1
Scene10 = x3d.Scene()
ProtoDeclare11 = x3d.ProtoDeclare()
ProtoDeclare11.name = "Process"
ProtoBody12 = x3d.ProtoBody()
Group13 = x3d.Group()
"""left"""
Transform14 = x3d.Transform()
Transform14.scale = [0.5,0.5,0.5]
Shape15 = x3d.Shape()
Appearance16 = x3d.Appearance()
Material17 = x3d.Material()
Material17.diffuseColor = [0.7,1,0]
Material17.transparency = 0.5

Appearance16.material = Material17

Shape15.appearance = Appearance16
Extrusion18 = x3d.Extrusion()
Extrusion18.creaseAngle = 0.785

Shape15.geometry = Extrusion18

Transform14.children.append(Shape15)
"""<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>"""

Group13.children.append(Transform14)
"""right"""
Transform19 = x3d.Transform()
Transform19.scale = [0.5,0.5,0.5]
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.diffuseColor = [0,0.7,1]
Material22.transparency = 0.5

Appearance21.material = Material22

Shape20.appearance = Appearance21
Extrusion23 = x3d.Extrusion()
Extrusion23.creaseAngle = 0.785

Shape20.geometry = Extrusion23

Transform19.children.append(Shape20)
Transform24 = x3d.Transform()
Transform24.translation = [2,0,0]
Shape25 = x3d.Shape()
Appearance26 = x3d.Appearance()
Material27 = x3d.Material()
Material27.DEF = "MaterialLightBlue"
Material27.diffuseColor = [1,1,1]

Appearance26.material = Material27

Shape25.appearance = Appearance26
Text28 = x3d.Text()
Text28.DEF = "RightString"
Text28.string = ["r"]

Shape25.geometry = Text28

Transform24.children.append(Shape25)

Transform19.children.append(Transform24)
StringSensor29 = x3d.StringSensor()
StringSensor29.DEF = "RightSensor"
StringSensor29.enabled = False

Transform19.children.append(StringSensor29)
TouchSensor30 = x3d.TouchSensor()
TouchSensor30.description = "touch to activate"
TouchSensor30.DEF = "RightTouch"

Transform19.children.append(TouchSensor30)

Group13.children.append(Transform19)
"""up"""
Transform31 = x3d.Transform()
Transform31.scale = [0.5,0.5,0.5]
Shape32 = x3d.Shape()
Appearance33 = x3d.Appearance()
Material34 = x3d.Material()
Material34.diffuseColor = [0,0.7,1]
Material34.transparency = 0.5

Appearance33.material = Material34

Shape32.appearance = Appearance33
Extrusion35 = x3d.Extrusion()
Extrusion35.creaseAngle = 0.785

Shape32.geometry = Extrusion35

Transform31.children.append(Shape32)
Transform36 = x3d.Transform()
Transform36.translation = [-0.5,2,0]
Shape37 = x3d.Shape()
Appearance38 = x3d.Appearance()
Material39 = x3d.Material()
Material39.USE = "MaterialLightBlue"

Appearance38.material = Material39

Shape37.appearance = Appearance38
Text40 = x3d.Text()
Text40.DEF = "UpString"
Text40.string = ["u"]

Shape37.geometry = Text40

Transform36.children.append(Shape37)

Transform31.children.append(Transform36)
StringSensor41 = x3d.StringSensor()
StringSensor41.DEF = "UpSensor"
StringSensor41.enabled = False

Transform31.children.append(StringSensor41)
TouchSensor42 = x3d.TouchSensor()
TouchSensor42.description = "touch to activate"
TouchSensor42.DEF = "UpTouch"

Transform31.children.append(TouchSensor42)

Group13.children.append(Transform31)
"""down"""
Transform43 = x3d.Transform()
Transform43.scale = [0.5,0.5,0.5]
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Material46 = x3d.Material()
Material46.diffuseColor = [0.7,1,0]
Material46.transparency = 0.5

Appearance45.material = Material46

Shape44.appearance = Appearance45
Extrusion47 = x3d.Extrusion()
Extrusion47.creaseAngle = 0.785

Shape44.geometry = Extrusion47

Transform43.children.append(Shape44)
"""<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>"""

Group13.children.append(Transform43)
"""center"""
Transform48 = x3d.Transform()
Shape49 = x3d.Shape()
Appearance50 = x3d.Appearance()
Material51 = x3d.Material()
Material51.diffuseColor = [1,0,0.7]

Appearance50.material = Material51

Shape49.appearance = Appearance50
Sphere52 = x3d.Sphere()

Shape49.geometry = Sphere52

Transform48.children.append(Shape49)
Transform53 = x3d.Transform()
Transform53.scale = [0.5,0.5,0.5]
Transform53.translation = [-0.5,0,1]
Shape54 = x3d.Shape()
Appearance55 = x3d.Appearance()
Material56 = x3d.Material()
Material56.USE = "MaterialLightBlue"

Appearance55.material = Material56

Shape54.appearance = Appearance55
Text57 = x3d.Text()
Text57.DEF = "CenterString"

Shape54.geometry = Text57

Transform53.children.append(Shape54)

Transform48.children.append(Transform53)
StringSensor58 = x3d.StringSensor()
StringSensor58.DEF = "CenterSensor"
StringSensor58.enabled = False

Transform48.children.append(StringSensor58)
TouchSensor59 = x3d.TouchSensor()
TouchSensor59.description = "touch to activate"
TouchSensor59.DEF = "CenterTouch"

Transform48.children.append(TouchSensor59)

Group13.children.append(Transform48)

ProtoBody12.children.append(Group13)
Script60 = x3d.Script()
Script60.DEF = "RightSingleToMultiString"
field61 = x3d.field()
field61.name = "set_rightstring"
field61.accessType = "inputOnly"
field61.type = "SFString"

Script60.field.append(field61)
field62 = x3d.field()
field62.name = "rightlines"
field62.accessType = "outputOnly"
field62.type = "MFString"

Script60.field.append(field62)

Script60.sourceCode = '''ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	rightlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_rightstring(rightstr) {\n"+
"	rightlines = new MFString(rightstr);\n"+
"}'''

ProtoBody12.children.append(Script60)
Script63 = x3d.Script()
Script63.DEF = "UpSingleToMultiString"
field64 = x3d.field()
field64.name = "set_upstring"
field64.accessType = "inputOnly"
field64.type = "SFString"

Script63.field.append(field64)
field65 = x3d.field()
field65.name = "uplines"
field65.accessType = "outputOnly"
field65.type = "MFString"

Script63.field.append(field65)

Script63.sourceCode = '''ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	uplines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_upstring(upstr) {\n"+
"	uplines = new MFString(upstr);\n"+
"}'''

ProtoBody12.children.append(Script63)
Script66 = x3d.Script()
Script66.DEF = "CenterSingleToMultiString"
field67 = x3d.field()
field67.name = "set_centerstring"
field67.accessType = "inputOnly"
field67.type = "SFString"

Script66.field.append(field67)
field68 = x3d.field()
field68.name = "centerlines"
field68.accessType = "outputOnly"
field68.type = "MFString"

Script66.field.append(field68)

Script66.sourceCode = '''ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	centerlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_centerstring(centerstr) {\n"+
"	centerlines = new MFString(centerstr);\n"+
"}'''

ProtoBody12.children.append(Script66)
ROUTE69 = x3d.ROUTE()
ROUTE69.fromField = "enteredText"
ROUTE69.fromNode = "CenterSensor"
ROUTE69.toField = "set_centerstring"
ROUTE69.toNode = "CenterSingleToMultiString"

ProtoBody12.children.append(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.fromField = "centerlines"
ROUTE70.fromNode = "CenterSingleToMultiString"
ROUTE70.toField = "set_string"
ROUTE70.toNode = "CenterString"

ProtoBody12.children.append(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.fromField = "isOver"
ROUTE71.fromNode = "CenterTouch"
ROUTE71.toField = "set_enabled"
ROUTE71.toNode = "CenterSensor"

ProtoBody12.children.append(ROUTE71)
ROUTE72 = x3d.ROUTE()
ROUTE72.fromField = "enteredText"
ROUTE72.fromNode = "RightSensor"
ROUTE72.toField = "set_rightstring"
ROUTE72.toNode = "RightSingleToMultiString"

ProtoBody12.children.append(ROUTE72)
ROUTE73 = x3d.ROUTE()
ROUTE73.fromField = "rightlines"
ROUTE73.fromNode = "RightSingleToMultiString"
ROUTE73.toField = "set_string"
ROUTE73.toNode = "RightString"

ProtoBody12.children.append(ROUTE73)
ROUTE74 = x3d.ROUTE()
ROUTE74.fromField = "isOver"
ROUTE74.fromNode = "RightTouch"
ROUTE74.toField = "set_enabled"
ROUTE74.toNode = "RightSensor"

ProtoBody12.children.append(ROUTE74)
ROUTE75 = x3d.ROUTE()
ROUTE75.fromField = "enteredText"
ROUTE75.fromNode = "UpSensor"
ROUTE75.toField = "set_upstring"
ROUTE75.toNode = "UpSingleToMultiString"

ProtoBody12.children.append(ROUTE75)
ROUTE76 = x3d.ROUTE()
ROUTE76.fromField = "uplines"
ROUTE76.fromNode = "UpSingleToMultiString"
ROUTE76.toField = "set_string"
ROUTE76.toNode = "UpString"

ProtoBody12.children.append(ROUTE76)
ROUTE77 = x3d.ROUTE()
ROUTE77.fromField = "isOver"
ROUTE77.fromNode = "UpTouch"
ROUTE77.toField = "set_enabled"
ROUTE77.toNode = "UpSensor"

ProtoBody12.children.append(ROUTE77)

ProtoDeclare11.ProtoBody = ProtoBody12

Scene10.children.append(ProtoDeclare11)
NavigationInfo78 = x3d.NavigationInfo()

Scene10.children.append(NavigationInfo78)
Viewpoint79 = x3d.Viewpoint()
Viewpoint79.description = "Process pipes"
Viewpoint79.orientation = [1,0,0,-0.4]
Viewpoint79.position = [0,5,12]

Scene10.children.append(Viewpoint79)
Transform80 = x3d.Transform()
Transform80.translation = [0,-2.5,0]
ProtoInstance81 = x3d.ProtoInstance()
ProtoInstance81.name = "Process"

Transform80.children.append(ProtoInstance81)

Scene10.children.append(Transform80)
Transform82 = x3d.Transform()
ProtoInstance83 = x3d.ProtoInstance()
ProtoInstance83.name = "Process"

Transform82.children.append(ProtoInstance83)

Scene10.children.append(Transform82)
Transform84 = x3d.Transform()
Transform84.translation = [0,2.5,0]
ProtoInstance85 = x3d.ProtoInstance()
ProtoInstance85.name = "Process"

Transform84.children.append(ProtoInstance85)

Scene10.children.append(Transform84)

X3D0.Scene = Scene10
f = open("../personal/pp3.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/pp3.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
