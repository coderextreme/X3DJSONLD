from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("pp3.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("translator")
meta4.setContent("John Carlson")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("created")
meta5.setContent("5 May 2015")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("modified")
meta6.setContent("05 May 2017")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("description")
meta7.setContent("A process pipeline between three spheres (try typing on spheres and blue")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("identifier")
meta8.setContent("https://coderextreme.net/x3d/pp3.x3d")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("generator")
meta9.setContent("manual")

head1.addMeta(meta9)

X3D0.setHead(head1)
Scene10 = Scene()
ProtoDeclare11 = ProtoDeclare()
ProtoDeclare11.setName("Process")
ProtoBody12 = ProtoBody()
Group13 = Group()
#left
Transform14 = Transform()
Transform14.setScale([0.5,0.5,0.5])
Shape15 = Shape()
Appearance16 = Appearance()
Material17 = Material()
Material17.setDiffuseColor([0.7,1,0])
Material17.setTransparency(0.5)

Appearance16.setMaterial(Material17)

Shape15.setAppearance(Appearance16)
Extrusion18 = Extrusion()
Extrusion18.setCreaseAngle(0.785)
Extrusion18.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])
Extrusion18.setSpine([-2.5,0,0,-1.5,0,0])

Shape15.setGeometry(Extrusion18)

Transform14.addChildren(Shape15)
#<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>

Group13.addChildren(Transform14)
#right
Transform19 = Transform()
Transform19.setScale([0.5,0.5,0.5])
Shape20 = Shape()
Appearance21 = Appearance()
Material22 = Material()
Material22.setDiffuseColor([0,0.7,1])
Material22.setTransparency(0.5)

Appearance21.setMaterial(Material22)

Shape20.setAppearance(Appearance21)
Extrusion23 = Extrusion()
Extrusion23.setCreaseAngle(0.785)
Extrusion23.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])
Extrusion23.setSpine([1.5,0,0,2.5,0,0])

Shape20.setGeometry(Extrusion23)

Transform19.addChildren(Shape20)
Transform24 = Transform()
Transform24.setTranslation([2,0,0])
Shape25 = Shape()
Appearance26 = Appearance()
Material27 = Material()
Material27.setDEF("MaterialLightBlue")
Material27.setDiffuseColor([1,1,1])

Appearance26.setMaterial(Material27)

Shape25.setAppearance(Appearance26)
Text28 = Text()
Text28.setDEF("RightString")
Text28.setString(["r"])

Shape25.setGeometry(Text28)

Transform24.addChildren(Shape25)

Transform19.addChildren(Transform24)
StringSensor29 = StringSensor()
StringSensor29.setDEF("RightSensor")
StringSensor29.setEnabled(False)

Transform19.addChildren(StringSensor29)
TouchSensor30 = TouchSensor()
TouchSensor30.setDescription("touch to activate")
TouchSensor30.setDEF("RightTouch")

Transform19.addChildren(TouchSensor30)

Group13.addChildren(Transform19)
#up
Transform31 = Transform()
Transform31.setScale([0.5,0.5,0.5])
Shape32 = Shape()
Appearance33 = Appearance()
Material34 = Material()
Material34.setDiffuseColor([0,0.7,1])
Material34.setTransparency(0.5)

Appearance33.setMaterial(Material34)

Shape32.setAppearance(Appearance33)
Extrusion35 = Extrusion()
Extrusion35.setCreaseAngle(0.785)
Extrusion35.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])
Extrusion35.setSpine([0,1.5,0,0,2.5,0])

Shape32.setGeometry(Extrusion35)

Transform31.addChildren(Shape32)
Transform36 = Transform()
Transform36.setTranslation([-0.5,2,0])
Shape37 = Shape()
Appearance38 = Appearance()
Material39 = Material()
Material39.setUSE("MaterialLightBlue")

Appearance38.setMaterial(Material39)

Shape37.setAppearance(Appearance38)
Text40 = Text()
Text40.setDEF("UpString")
Text40.setString(["u"])

Shape37.setGeometry(Text40)

Transform36.addChildren(Shape37)

Transform31.addChildren(Transform36)
StringSensor41 = StringSensor()
StringSensor41.setDEF("UpSensor")
StringSensor41.setEnabled(False)

Transform31.addChildren(StringSensor41)
TouchSensor42 = TouchSensor()
TouchSensor42.setDescription("touch to activate")
TouchSensor42.setDEF("UpTouch")

Transform31.addChildren(TouchSensor42)

Group13.addChildren(Transform31)
#down
Transform43 = Transform()
Transform43.setScale([0.5,0.5,0.5])
Shape44 = Shape()
Appearance45 = Appearance()
Material46 = Material()
Material46.setDiffuseColor([0.7,1,0])
Material46.setTransparency(0.5)

Appearance45.setMaterial(Material46)

Shape44.setAppearance(Appearance45)
Extrusion47 = Extrusion()
Extrusion47.setCreaseAngle(0.785)
Extrusion47.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])
Extrusion47.setSpine([0,-2.5,0,0,-1.5,0])

Shape44.setGeometry(Extrusion47)

Transform43.addChildren(Shape44)
#<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>

Group13.addChildren(Transform43)
#center
Transform48 = Transform()
Shape49 = Shape()
Appearance50 = Appearance()
Material51 = Material()
Material51.setDiffuseColor([1,0,0.7])

Appearance50.setMaterial(Material51)

Shape49.setAppearance(Appearance50)
Sphere52 = Sphere()

Shape49.setGeometry(Sphere52)

Transform48.addChildren(Shape49)
Transform53 = Transform()
Transform53.setScale([0.5,0.5,0.5])
Transform53.setTranslation([-0.5,0,1])
Shape54 = Shape()
Appearance55 = Appearance()
Material56 = Material()
Material56.setUSE("MaterialLightBlue")

Appearance55.setMaterial(Material56)

Shape54.setAppearance(Appearance55)
Text57 = Text()
Text57.setDEF("CenterString")

Shape54.setGeometry(Text57)

Transform53.addChildren(Shape54)

Transform48.addChildren(Transform53)
StringSensor58 = StringSensor()
StringSensor58.setDEF("CenterSensor")
StringSensor58.setEnabled(False)

Transform48.addChildren(StringSensor58)
TouchSensor59 = TouchSensor()
TouchSensor59.setDescription("touch to activate")
TouchSensor59.setDEF("CenterTouch")

Transform48.addChildren(TouchSensor59)

Group13.addChildren(Transform48)

ProtoBody12.addChildren(Group13)
Script60 = Script()
Script60.setDEF("RightSingleToMultiString")
field61 = field()
field61.setName("set_rightstring")
field61.setAccessType("inputOnly")
field61.setType("SFString")

Script60.addField(field61)
field62 = field()
field62.setName("rightlines")
field62.setAccessType("outputOnly")
field62.setType("MFString")

Script60.addField(field62)

Script60.setSourceCode('''ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	rightlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_rightstring(rightstr) {\n"+
"	rightlines = new MFString(rightstr);\n"+
"}''')

ProtoBody12.addChildren(Script60)
Script63 = Script()
Script63.setDEF("UpSingleToMultiString")
field64 = field()
field64.setName("set_upstring")
field64.setAccessType("inputOnly")
field64.setType("SFString")

Script63.addField(field64)
field65 = field()
field65.setName("uplines")
field65.setAccessType("outputOnly")
field65.setType("MFString")

Script63.addField(field65)

Script63.setSourceCode('''ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	uplines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_upstring(upstr) {\n"+
"	uplines = new MFString(upstr);\n"+
"}''')

ProtoBody12.addChildren(Script63)
Script66 = Script()
Script66.setDEF("CenterSingleToMultiString")
field67 = field()
field67.setName("set_centerstring")
field67.setAccessType("inputOnly")
field67.setType("SFString")

Script66.addField(field67)
field68 = field()
field68.setName("centerlines")
field68.setAccessType("outputOnly")
field68.setType("MFString")

Script66.addField(field68)

Script66.setSourceCode('''ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	centerlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_centerstring(centerstr) {\n"+
"	centerlines = new MFString(centerstr);\n"+
"}''')

ProtoBody12.addChildren(Script66)
ROUTE69 = ROUTE()
ROUTE69.setFromField("enteredText")
ROUTE69.setFromNode("CenterSensor")
ROUTE69.setToField("set_centerstring")
ROUTE69.setToNode("CenterSingleToMultiString")

ProtoBody12.addChildren(ROUTE69)
ROUTE70 = ROUTE()
ROUTE70.setFromField("centerlines")
ROUTE70.setFromNode("CenterSingleToMultiString")
ROUTE70.setToField("set_string")
ROUTE70.setToNode("CenterString")

ProtoBody12.addChildren(ROUTE70)
ROUTE71 = ROUTE()
ROUTE71.setFromField("isOver")
ROUTE71.setFromNode("CenterTouch")
ROUTE71.setToField("set_enabled")
ROUTE71.setToNode("CenterSensor")

ProtoBody12.addChildren(ROUTE71)
ROUTE72 = ROUTE()
ROUTE72.setFromField("enteredText")
ROUTE72.setFromNode("RightSensor")
ROUTE72.setToField("set_rightstring")
ROUTE72.setToNode("RightSingleToMultiString")

ProtoBody12.addChildren(ROUTE72)
ROUTE73 = ROUTE()
ROUTE73.setFromField("rightlines")
ROUTE73.setFromNode("RightSingleToMultiString")
ROUTE73.setToField("set_string")
ROUTE73.setToNode("RightString")

ProtoBody12.addChildren(ROUTE73)
ROUTE74 = ROUTE()
ROUTE74.setFromField("isOver")
ROUTE74.setFromNode("RightTouch")
ROUTE74.setToField("set_enabled")
ROUTE74.setToNode("RightSensor")

ProtoBody12.addChildren(ROUTE74)
ROUTE75 = ROUTE()
ROUTE75.setFromField("enteredText")
ROUTE75.setFromNode("UpSensor")
ROUTE75.setToField("set_upstring")
ROUTE75.setToNode("UpSingleToMultiString")

ProtoBody12.addChildren(ROUTE75)
ROUTE76 = ROUTE()
ROUTE76.setFromField("uplines")
ROUTE76.setFromNode("UpSingleToMultiString")
ROUTE76.setToField("set_string")
ROUTE76.setToNode("UpString")

ProtoBody12.addChildren(ROUTE76)
ROUTE77 = ROUTE()
ROUTE77.setFromField("isOver")
ROUTE77.setFromNode("UpTouch")
ROUTE77.setToField("set_enabled")
ROUTE77.setToNode("UpSensor")

ProtoBody12.addChildren(ROUTE77)

ProtoDeclare11.setProtoBody(ProtoBody12)

Scene10.addChildren(ProtoDeclare11)
NavigationInfo78 = NavigationInfo()

Scene10.addChildren(NavigationInfo78)
Viewpoint79 = Viewpoint()
Viewpoint79.setDescription("Process pipes")
Viewpoint79.setOrientation([1,0,0,-0.4])
Viewpoint79.setPosition([0,5,12])

Scene10.addChildren(Viewpoint79)
Transform80 = Transform()
Transform80.setTranslation([0,-2.5,0])
ProtoInstance81 = ProtoInstance()
ProtoInstance81.setName("Process")

Transform80.addChildren(ProtoInstance81)

Scene10.addChildren(Transform80)
Transform82 = Transform()
ProtoInstance83 = ProtoInstance()
ProtoInstance83.setName("Process")

Transform82.addChildren(ProtoInstance83)

Scene10.addChildren(Transform82)
Transform84 = Transform()
Transform84.setTranslation([0,2.5,0])
ProtoInstance85 = ProtoInstance()
ProtoInstance85.setName("Process")

Transform84.addChildren(ProtoInstance85)

Scene10.addChildren(Transform84)

X3D0.setScene(Scene10)
X3D0.toFileX3D("../personal/pp3_RoundTrip.x3d")
