# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("pp3.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("translator")
meta4.setContent("John Carlson")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("created")
meta5.setContent("5 May 2015")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("modified")
meta6.setContent("05 May 2017")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("description")
meta7.setContent("A process pipeline between three spheres (try typing on spheres and blue")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("identifier")
meta8.setContent("https://coderextreme.net/x3d/pp3.x3d")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("generator")
meta9.setContent("manual")

head1.addMeta(meta9)
X3D0.setHead(head1)
Scene10 = SceneObject()

ProtoDeclare11 = ProtoDeclareObject()
ProtoDeclare11.setName("Process")

ProtoBody12 = ProtoBodyObject()

Group13 = GroupObject()


Group13.addComments(CommentsBlock("""left"""))
Transform14 = TransformObject()
Transform14.setScale([0.5,0.5,0.5])

Shape15 = ShapeObject()

Appearance16 = AppearanceObject()

Material17 = MaterialObject()
Material17.setDiffuseColor([0.7,1,0])
Material17.setTransparency(0.5)

Appearance16.setMaterial(Material17)
Shape15.setAppearance(Appearance16)
Extrusion18 = ExtrusionObject()
Extrusion18.setCreaseAngle(0.785)
Extrusion18.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])
Extrusion18.setSpine([-2.5,0,0,-1.5,0,0])

Shape15.setGeometry(Extrusion18)
Transform14.addChild(Shape15)

Transform14.addComments(CommentsBlock("""<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>"""))
Group13.addChild(Transform14)

Group13.addComments(CommentsBlock("""right"""))
Transform19 = TransformObject()
Transform19.setScale([0.5,0.5,0.5])

Shape20 = ShapeObject()

Appearance21 = AppearanceObject()

Material22 = MaterialObject()
Material22.setDiffuseColor([0,0.7,1])
Material22.setTransparency(0.5)

Appearance21.setMaterial(Material22)
Shape20.setAppearance(Appearance21)
Extrusion23 = ExtrusionObject()
Extrusion23.setCreaseAngle(0.785)
Extrusion23.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])
Extrusion23.setSpine([1.5,0,0,2.5,0,0])

Shape20.setGeometry(Extrusion23)
Transform19.addChild(Shape20)
Transform24 = TransformObject()
Transform24.setTranslation([2,0,0])

Shape25 = ShapeObject()

Appearance26 = AppearanceObject()

Material27 = MaterialObject()
Material27.setDEF("MaterialLightBlue")
Material27.setDiffuseColor([1,1,1])

Appearance26.setMaterial(Material27)
Shape25.setAppearance(Appearance26)
Text28 = TextObject()
Text28.setDEF("RightString")
Text28.setString(["r"])

Shape25.setGeometry(Text28)
Transform24.addChild(Shape25)
Transform19.addChild(Transform24)
StringSensor29 = StringSensorObject()
StringSensor29.setDEF("RightSensor")
StringSensor29.setEnabled(False)

Transform19.addChild(StringSensor29)
TouchSensor30 = TouchSensorObject()
TouchSensor30.setDescription("touch to activate")
TouchSensor30.setDEF("RightTouch")

Transform19.addChild(TouchSensor30)
Group13.addChild(Transform19)

Group13.addComments(CommentsBlock("""up"""))
Transform31 = TransformObject()
Transform31.setScale([0.5,0.5,0.5])

Shape32 = ShapeObject()

Appearance33 = AppearanceObject()

Material34 = MaterialObject()
Material34.setDiffuseColor([0,0.7,1])
Material34.setTransparency(0.5)

Appearance33.setMaterial(Material34)
Shape32.setAppearance(Appearance33)
Extrusion35 = ExtrusionObject()
Extrusion35.setCreaseAngle(0.785)
Extrusion35.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])
Extrusion35.setSpine([0,1.5,0,0,2.5,0])

Shape32.setGeometry(Extrusion35)
Transform31.addChild(Shape32)
Transform36 = TransformObject()
Transform36.setTranslation([-0.5,2,0])

Shape37 = ShapeObject()

Appearance38 = AppearanceObject()

Material39 = MaterialObject()
Material39.setUSE("MaterialLightBlue")

Appearance38.setMaterial(Material39)
Shape37.setAppearance(Appearance38)
Text40 = TextObject()
Text40.setDEF("UpString")
Text40.setString(["u"])

Shape37.setGeometry(Text40)
Transform36.addChild(Shape37)
Transform31.addChild(Transform36)
StringSensor41 = StringSensorObject()
StringSensor41.setDEF("UpSensor")
StringSensor41.setEnabled(False)

Transform31.addChild(StringSensor41)
TouchSensor42 = TouchSensorObject()
TouchSensor42.setDescription("touch to activate")
TouchSensor42.setDEF("UpTouch")

Transform31.addChild(TouchSensor42)
Group13.addChild(Transform31)

Group13.addComments(CommentsBlock("""down"""))
Transform43 = TransformObject()
Transform43.setScale([0.5,0.5,0.5])

Shape44 = ShapeObject()

Appearance45 = AppearanceObject()

Material46 = MaterialObject()
Material46.setDiffuseColor([0.7,1,0])
Material46.setTransparency(0.5)

Appearance45.setMaterial(Material46)
Shape44.setAppearance(Appearance45)
Extrusion47 = ExtrusionObject()
Extrusion47.setCreaseAngle(0.785)
Extrusion47.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])
Extrusion47.setSpine([0,-2.5,0,0,-1.5,0])

Shape44.setGeometry(Extrusion47)
Transform43.addChild(Shape44)

Transform43.addComments(CommentsBlock("""<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>"""))
Group13.addChild(Transform43)

Group13.addComments(CommentsBlock("""center"""))
Transform48 = TransformObject()

Shape49 = ShapeObject()

Appearance50 = AppearanceObject()

Material51 = MaterialObject()
Material51.setDiffuseColor([1,0,0.7])

Appearance50.setMaterial(Material51)
Shape49.setAppearance(Appearance50)
Sphere52 = SphereObject()

Shape49.setGeometry(Sphere52)
Transform48.addChild(Shape49)
Transform53 = TransformObject()
Transform53.setScale([0.5,0.5,0.5])
Transform53.setTranslation([-0.5,0,1])

Shape54 = ShapeObject()

Appearance55 = AppearanceObject()

Material56 = MaterialObject()
Material56.setUSE("MaterialLightBlue")

Appearance55.setMaterial(Material56)
Shape54.setAppearance(Appearance55)
Text57 = TextObject()
Text57.setDEF("CenterString")

Shape54.setGeometry(Text57)
Transform53.addChild(Shape54)
Transform48.addChild(Transform53)
StringSensor58 = StringSensorObject()
StringSensor58.setDEF("CenterSensor")
StringSensor58.setEnabled(False)

Transform48.addChild(StringSensor58)
TouchSensor59 = TouchSensorObject()
TouchSensor59.setDescription("touch to activate")
TouchSensor59.setDEF("CenterTouch")

Transform48.addChild(TouchSensor59)
Group13.addChild(Transform48)
ProtoBody12.addChild(Group13)
Script60 = ScriptObject()
Script60.setDEF("RightSingleToMultiString")

field61 = fieldObject()
field61.setType(fieldObject.TYPE_SFSTRING)
field61.setName("set_rightstring")
field61.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script60.addField(field61)
field62 = fieldObject()
field62.setType(fieldObject.TYPE_MFSTRING)
field62.setName("rightlines")
field62.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script60.addField(field62)

Script60.setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	rightlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_rightstring(rightstr) {\n"+
"	rightlines = new MFString(rightstr);\n"+
"}\n"+
"")
ProtoBody12.addChild(Script60)
Script63 = ScriptObject()
Script63.setDEF("UpSingleToMultiString")

field64 = fieldObject()
field64.setType(fieldObject.TYPE_SFSTRING)
field64.setName("set_upstring")
field64.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script63.addField(field64)
field65 = fieldObject()
field65.setType(fieldObject.TYPE_MFSTRING)
field65.setName("uplines")
field65.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script63.addField(field65)

Script63.setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	uplines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_upstring(upstr) {\n"+
"	uplines = new MFString(upstr);\n"+
"}\n"+
"")
ProtoBody12.addChild(Script63)
Script66 = ScriptObject()
Script66.setDEF("CenterSingleToMultiString")

field67 = fieldObject()
field67.setType(fieldObject.TYPE_SFSTRING)
field67.setName("set_centerstring")
field67.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script66.addField(field67)
field68 = fieldObject()
field68.setType(fieldObject.TYPE_MFSTRING)
field68.setName("centerlines")
field68.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script66.addField(field68)

Script66.setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	centerlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_centerstring(centerstr) {\n"+
"	centerlines = new MFString(centerstr);\n"+
"}\n"+
"")
ProtoBody12.addChild(Script66)
ROUTE69 = ROUTEObject()
ROUTE69.setFromField("enteredText")
ROUTE69.setFromNode("CenterSensor")
ROUTE69.setToField("set_centerstring")
ROUTE69.setToNode("CenterSingleToMultiString")

ProtoBody12.addChild(ROUTE69)
ROUTE70 = ROUTEObject()
ROUTE70.setFromField("centerlines")
ROUTE70.setFromNode("CenterSingleToMultiString")
ROUTE70.setToField("set_string")
ROUTE70.setToNode("CenterString")

ProtoBody12.addChild(ROUTE70)
ROUTE71 = ROUTEObject()
ROUTE71.setFromField("isOver")
ROUTE71.setFromNode("CenterTouch")
ROUTE71.setToField("set_enabled")
ROUTE71.setToNode("CenterSensor")

ProtoBody12.addChild(ROUTE71)
ROUTE72 = ROUTEObject()
ROUTE72.setFromField("enteredText")
ROUTE72.setFromNode("RightSensor")
ROUTE72.setToField("set_rightstring")
ROUTE72.setToNode("RightSingleToMultiString")

ProtoBody12.addChild(ROUTE72)
ROUTE73 = ROUTEObject()
ROUTE73.setFromField("rightlines")
ROUTE73.setFromNode("RightSingleToMultiString")
ROUTE73.setToField("set_string")
ROUTE73.setToNode("RightString")

ProtoBody12.addChild(ROUTE73)
ROUTE74 = ROUTEObject()
ROUTE74.setFromField("isOver")
ROUTE74.setFromNode("RightTouch")
ROUTE74.setToField("set_enabled")
ROUTE74.setToNode("RightSensor")

ProtoBody12.addChild(ROUTE74)
ROUTE75 = ROUTEObject()
ROUTE75.setFromField("enteredText")
ROUTE75.setFromNode("UpSensor")
ROUTE75.setToField("set_upstring")
ROUTE75.setToNode("UpSingleToMultiString")

ProtoBody12.addChild(ROUTE75)
ROUTE76 = ROUTEObject()
ROUTE76.setFromField("uplines")
ROUTE76.setFromNode("UpSingleToMultiString")
ROUTE76.setToField("set_string")
ROUTE76.setToNode("UpString")

ProtoBody12.addChild(ROUTE76)
ROUTE77 = ROUTEObject()
ROUTE77.setFromField("isOver")
ROUTE77.setFromNode("UpTouch")
ROUTE77.setToField("set_enabled")
ROUTE77.setToNode("UpSensor")

ProtoBody12.addChild(ROUTE77)
ProtoDeclare11.setProtoBody(ProtoBody12)
Scene10.addChild(ProtoDeclare11)
NavigationInfo78 = NavigationInfoObject()

Scene10.addChild(NavigationInfo78)
Viewpoint79 = ViewpointObject()
Viewpoint79.setDescription("Process pipes")
Viewpoint79.setOrientation([1,0,0,-0.4])
Viewpoint79.setPosition([0,5,12])

Scene10.addChild(Viewpoint79)
Transform80 = TransformObject()
Transform80.setTranslation([0,-2.5,0])

ProtoInstance81 = ProtoInstanceObject()
ProtoInstance81.setName("Process")

Transform80.addChild(ProtoInstance81)
Scene10.addChild(Transform80)
Transform82 = TransformObject()

ProtoInstance83 = ProtoInstanceObject()
ProtoInstance83.setName("Process")

Transform82.addChild(ProtoInstance83)
Scene10.addChild(Transform82)
Transform84 = TransformObject()
Transform84.setTranslation([0,2.5,0])

ProtoInstance85 = ProtoInstanceObject()
ProtoInstance85.setName("Process")

Transform84.addChild(ProtoInstance85)
Scene10.addChild(Transform84)
X3D0.setScene(Scene10)

X3D0.toFileX3D("../data/pp3.new.x3d")
