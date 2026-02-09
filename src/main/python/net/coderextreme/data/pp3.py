print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta6.content = "Mon, 09 Feb 2026 07:12:59 GMT"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "description"
meta7.content = "A process pipeline between three spheres (try typing on spheres and blue"

head1.children.append(meta7)

X3D0.head = head1
Scene8 = x3d.Scene()
ProtoDeclare9 = x3d.ProtoDeclare()
ProtoDeclare9.name = "Process"
ProtoInterface10 = x3d.ProtoInterface()

ProtoDeclare9.ProtoInterface = ProtoInterface10
ProtoBody11 = x3d.ProtoBody()
Group12 = x3d.Group()
Transform13 = x3d.Transform()
Transform13.scale = [0.5,0.5,0.5]
Shape14 = x3d.Shape()
Appearance15 = x3d.Appearance()
Material16 = x3d.Material()
Material16.diffuseColor = [0.7,1,0]
Material16.transparency = 0.5

Appearance15.material = Material16

Shape14.appearance = Appearance15
Extrusion17 = x3d.Extrusion()
Extrusion17.creaseAngle = 0.785
Extrusion17.crossSection = [(1, 0),(0.92, -0.38),(0.71, -0.71),(0.38, -0.92),(0, -1),(-0.38, -0.92),(-0.71, -0.71),(-0.92, -0.38),(-1, 0),(-0.92, 0.38),(-0.71, 0.71),(-0.38, 0.92),(0, 1),(0.38, 0.92),(0.71, 0.71),(0.92, 0.38),(1, 0)]
Extrusion17.spine = [(-2.5, 0, 0),(-2, 0, 0),(-1.5, 0, 0)]

Shape14.geometry = Extrusion17

Transform13.children.append(Shape14)

Group12.children.append(Transform13)
Transform18 = x3d.Transform()
Transform18.scale = [0.5,0.5,0.5]
Shape19 = x3d.Shape()
Appearance20 = x3d.Appearance()
Material21 = x3d.Material()
Material21.diffuseColor = [0,0.7,1]
Material21.transparency = 0.5

Appearance20.material = Material21

Shape19.appearance = Appearance20
Extrusion22 = x3d.Extrusion()
Extrusion22.creaseAngle = 0.785
Extrusion22.crossSection = [(1, 0),(0.92, -0.38),(0.71, -0.71),(0.38, -0.92),(0, -1),(-0.38, -0.92),(-0.71, -0.71),(-0.92, -0.38),(-1, 0),(-0.92, 0.38),(-0.71, 0.71),(-0.38, 0.92),(0, 1),(0.38, 0.92),(0.71, 0.71),(0.92, 0.38),(1, 0)]
Extrusion22.spine = [(1.5, 0, 0),(2, 0, 0),(2.5, 0, 0)]

Shape19.geometry = Extrusion22

Transform18.children.append(Shape19)
Transform23 = x3d.Transform()
Transform23.translation = [2,0,0]
Shape24 = x3d.Shape()
Appearance25 = x3d.Appearance()
Material26 = x3d.Material(DEF="MaterialLightBlue")
Material26.diffuseColor = [1,1,1]

Appearance25.material = Material26

Shape24.appearance = Appearance25
Text27 = x3d.Text(DEF="RightString")
Text27.string = ["r"]

Shape24.geometry = Text27

Transform23.children.append(Shape24)

Transform18.children.append(Transform23)
StringSensor28 = x3d.StringSensor(DEF="RightSensor")
StringSensor28.enabled = False

Transform18.children.append(StringSensor28)
TouchSensor29 = x3d.TouchSensor(DEF="RightTouch")
TouchSensor29.description = "touch to activate"

Transform18.children.append(TouchSensor29)

Group12.children.append(Transform18)
Transform30 = x3d.Transform()
Transform30.scale = [0.5,0.5,0.5]
Shape31 = x3d.Shape()
Appearance32 = x3d.Appearance()
Material33 = x3d.Material()
Material33.diffuseColor = [0,0.7,1]
Material33.transparency = 0.5

Appearance32.material = Material33

Shape31.appearance = Appearance32
Extrusion34 = x3d.Extrusion()
Extrusion34.creaseAngle = 0.785
Extrusion34.crossSection = [(1, 0),(0.92, -0.38),(0.71, -0.71),(0.38, -0.92),(0, -1),(-0.38, -0.92),(-0.71, -0.71),(-0.92, -0.38),(-1, 0),(-0.92, 0.38),(-0.71, 0.71),(-0.38, 0.92),(0, 1),(0.38, 0.92),(0.71, 0.71),(0.92, 0.38),(1, 0)]
Extrusion34.spine = [(0, 1.5, 0),(0, 2, 0),(0, 2.5, 0)]

Shape31.geometry = Extrusion34

Transform30.children.append(Shape31)
Transform35 = x3d.Transform()
Transform35.translation = [-0.5,2,0]
Shape36 = x3d.Shape()
Appearance37 = x3d.Appearance()
Material38 = x3d.Material(USE="MaterialLightBlue")

Appearance37.material = Material38

Shape36.appearance = Appearance37
Text39 = x3d.Text(DEF="UpString")
Text39.string = ["u"]

Shape36.geometry = Text39

Transform35.children.append(Shape36)

Transform30.children.append(Transform35)
StringSensor40 = x3d.StringSensor(DEF="UpSensor")
StringSensor40.enabled = False

Transform30.children.append(StringSensor40)
TouchSensor41 = x3d.TouchSensor(DEF="UpTouch")
TouchSensor41.description = "touch to activate"

Transform30.children.append(TouchSensor41)

Group12.children.append(Transform30)
Transform42 = x3d.Transform()
Transform42.scale = [0.5,0.5,0.5]
Shape43 = x3d.Shape()
Appearance44 = x3d.Appearance()
Material45 = x3d.Material()
Material45.diffuseColor = [0.7,1,0]
Material45.transparency = 0.5

Appearance44.material = Material45

Shape43.appearance = Appearance44
Extrusion46 = x3d.Extrusion()
Extrusion46.creaseAngle = 0.785
Extrusion46.crossSection = [(1, 0),(0.92, -0.38),(0.71, -0.71),(0.38, -0.92),(0, -1),(-0.38, -0.92),(-0.71, -0.71),(-0.92, -0.38),(-1, 0),(-0.92, 0.38),(-0.71, 0.71),(-0.38, 0.92),(0, 1),(0.38, 0.92),(0.71, 0.71),(0.92, 0.38),(1, 0)]
Extrusion46.spine = [(0, -2.5, 0),(0, -2, 0),(0, -1.5, 0)]

Shape43.geometry = Extrusion46

Transform42.children.append(Shape43)

Group12.children.append(Transform42)
Transform47 = x3d.Transform()
Shape48 = x3d.Shape()
Appearance49 = x3d.Appearance()
Material50 = x3d.Material()
Material50.diffuseColor = [1,0,0.7]

Appearance49.material = Material50

Shape48.appearance = Appearance49
Sphere51 = x3d.Sphere()

Shape48.geometry = Sphere51

Transform47.children.append(Shape48)
Transform52 = x3d.Transform()
Transform52.translation = [-0.5,0,1]
Transform52.scale = [0.5,0.5,0.5]
Shape53 = x3d.Shape()
Appearance54 = x3d.Appearance()
Material55 = x3d.Material(USE="MaterialLightBlue")

Appearance54.material = Material55

Shape53.appearance = Appearance54
Text56 = x3d.Text(DEF="CenterString")

Shape53.geometry = Text56

Transform52.children.append(Shape53)

Transform47.children.append(Transform52)
StringSensor57 = x3d.StringSensor(DEF="CenterSensor")
StringSensor57.enabled = False

Transform47.children.append(StringSensor57)
TouchSensor58 = x3d.TouchSensor(DEF="CenterTouch")
TouchSensor58.description = "touch to activate"

Transform47.children.append(TouchSensor58)

Group12.children.append(Transform47)

ProtoBody11.children.append(Group12)
Script59 = x3d.Script(DEF="RightSingleToMultiString")
field60 = x3d.field()
field60.accessType = "inputOnly"
field60.type = "SFString"
field60.name = "set_rightstring"

Script59.field.append(field60)
field61 = x3d.field()
field61.accessType = "outputOnly"
field61.type = "MFString"
field61.name = "rightlines"

Script59.field.append(field61)

Script59.sourceCode = '''ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	rightlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_rightstring(rightstr) {\n"+
"	rightlines = new MFString(rightstr);\n"+
"}'''

ProtoBody11.children.append(Script59)
Script62 = x3d.Script(DEF="UpSingleToMultiString")
field63 = x3d.field()
field63.accessType = "inputOnly"
field63.type = "SFString"
field63.name = "set_upstring"

Script62.field.append(field63)
field64 = x3d.field()
field64.accessType = "outputOnly"
field64.type = "MFString"
field64.name = "uplines"

Script62.field.append(field64)

Script62.sourceCode = '''ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	uplines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_upstring(upstr) {\n"+
"	uplines = new MFString(upstr);\n"+
"}'''

ProtoBody11.children.append(Script62)
Script65 = x3d.Script(DEF="CenterSingleToMultiString")
field66 = x3d.field()
field66.accessType = "inputOnly"
field66.type = "SFString"
field66.name = "set_centerstring"

Script65.field.append(field66)
field67 = x3d.field()
field67.accessType = "outputOnly"
field67.type = "MFString"
field67.name = "centerlines"

Script65.field.append(field67)

Script65.sourceCode = '''ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	centerlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_centerstring(centerstr) {\n"+
"	centerlines = new MFString(centerstr);\n"+
"}'''

ProtoBody11.children.append(Script65)
ROUTE68 = x3d.ROUTE()
ROUTE68.fromNode = "CenterSensor"
ROUTE68.fromField = "enteredText"
ROUTE68.toNode = "CenterSingleToMultiString"
ROUTE68.toField = "set_centerstring"

ProtoBody11.children.append(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.fromNode = "CenterSingleToMultiString"
ROUTE69.fromField = "centerlines"
ROUTE69.toNode = "CenterString"
ROUTE69.toField = "set_string"

ProtoBody11.children.append(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.fromNode = "CenterTouch"
ROUTE70.fromField = "isOver"
ROUTE70.toNode = "CenterSensor"
ROUTE70.toField = "set_enabled"

ProtoBody11.children.append(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.fromNode = "RightSensor"
ROUTE71.fromField = "enteredText"
ROUTE71.toNode = "RightSingleToMultiString"
ROUTE71.toField = "set_rightstring"

ProtoBody11.children.append(ROUTE71)
ROUTE72 = x3d.ROUTE()
ROUTE72.fromNode = "RightSingleToMultiString"
ROUTE72.fromField = "rightlines"
ROUTE72.toNode = "RightString"
ROUTE72.toField = "set_string"

ProtoBody11.children.append(ROUTE72)
ROUTE73 = x3d.ROUTE()
ROUTE73.fromNode = "RightTouch"
ROUTE73.fromField = "isOver"
ROUTE73.toNode = "RightSensor"
ROUTE73.toField = "set_enabled"

ProtoBody11.children.append(ROUTE73)
ROUTE74 = x3d.ROUTE()
ROUTE74.fromNode = "UpSensor"
ROUTE74.fromField = "enteredText"
ROUTE74.toNode = "UpSingleToMultiString"
ROUTE74.toField = "set_upstring"

ProtoBody11.children.append(ROUTE74)
ROUTE75 = x3d.ROUTE()
ROUTE75.fromNode = "UpSingleToMultiString"
ROUTE75.fromField = "uplines"
ROUTE75.toNode = "UpString"
ROUTE75.toField = "set_string"

ProtoBody11.children.append(ROUTE75)
ROUTE76 = x3d.ROUTE()
ROUTE76.fromNode = "UpTouch"
ROUTE76.fromField = "isOver"
ROUTE76.toNode = "UpSensor"
ROUTE76.toField = "set_enabled"

ProtoBody11.children.append(ROUTE76)

ProtoDeclare9.ProtoBody = ProtoBody11

Scene8.children.append(ProtoDeclare9)
NavigationInfo77 = x3d.NavigationInfo()

Scene8.children.append(NavigationInfo77)
Viewpoint78 = x3d.Viewpoint()
Viewpoint78.description = "Process pipes"
Viewpoint78.position = [0,5,12]
Viewpoint78.orientation = [1,0,0,-0.4]

Scene8.children.append(Viewpoint78)
Transform79 = x3d.Transform()
Transform79.translation = [0,-2.5,0]
ProtoInstance80 = x3d.ProtoInstance()
ProtoInstance80.name = "Process"

Transform79.children.append(ProtoInstance80)

Scene8.children.append(Transform79)
Transform81 = x3d.Transform()
ProtoInstance82 = x3d.ProtoInstance()
ProtoInstance82.name = "Process"

Transform81.children.append(ProtoInstance82)

Scene8.children.append(Transform81)
Transform83 = x3d.Transform()
Transform83.translation = [0,2.5,0]
ProtoInstance84 = x3d.ProtoInstance()
ProtoInstance84.name = "Process"

Transform83.children.append(ProtoInstance84)

Scene8.children.append(Transform83)

X3D0.Scene = Scene8
f = open("../data/pp3.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/pp3.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/pp3.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
