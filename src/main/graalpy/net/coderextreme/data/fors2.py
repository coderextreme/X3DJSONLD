import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Scripting")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("John W Carlson")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("created")
meta4.setContent("December 13 2015")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("modified")
meta5.setContent("July 14 2025")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("title")
meta6.setContent("fors2.x3d")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("identifier")
meta7.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("description")
meta8.setContent("beginnings of a force directed graph in 3D")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("generator")
meta9.setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta9)

X3D0.setHead(head1)
Scene10 = x3d.Scene()
ProtoDeclare11 = x3d.ProtoDeclare()
ProtoDeclare11.setName("node")
ProtoInterface12 = x3d.ProtoInterface()
field13 = x3d.field()
field13.setName("position")
field13.setAccessType("inputOutput")
field13.setType("SFVec3f")
field13.setValue("0 0 0")

ProtoInterface12.addField(field13)

ProtoDeclare11.setProtoInterface(ProtoInterface12)
ProtoBody14 = x3d.ProtoBody()
Group15 = x3d.Group()
Transform16 = x3d.Transform()
Transform16.setDEF("transform")
IS17 = x3d.IS()
connect18 = x3d.connect()
connect18.setNodeField("translation")
connect18.setProtoField("position")

IS17.addConnect(connect18)

Transform16.setIS(IS17)
Shape19 = x3d.Shape()

Shape19.addComments(x3d.CommentsBlock('''comment before Sphere'''))

Shape19.addComments(x3d.CommentsBlock('''comment after Sphere'''))

Shape19.addComments(x3d.CommentsBlock('''comment after Appearance'''))
Sphere20 = x3d.Sphere()

Shape19.setGeometry(Sphere20)
Appearance21 = x3d.Appearance()

Appearance21.addComments(x3d.CommentsBlock('''comment before Material'''))

Appearance21.addComments(x3d.CommentsBlock('''comment after Material'''))
Material22 = x3d.Material()
Material22.setDiffuseColor(x3d.doubleToFloat([1,0,0]))

Appearance21.setMaterial(Material22)

Shape19.setAppearance(Appearance21)

Transform16.addChild(Shape19)

Group15.addChild(Transform16)
PositionInterpolator23 = x3d.PositionInterpolator()
PositionInterpolator23.setDEF("NodePosition")
PositionInterpolator23.setKey(x3d.doubleToFloat([0,1]))
PositionInterpolator23.setKeyValue(x3d.doubleToFloat([0,0,0,0,5,0]))

Group15.addChild(PositionInterpolator23)
Script24 = x3d.Script()
Script24.setDEF("MoveBall")
field25 = x3d.field()
field25.setName("translation")
field25.setAccessType("inputOutput")
field25.setType("SFVec3f")
field25.setValue("50 50 0")

Script24.addField(field25)
field26 = x3d.field()
field26.setName("old")
field26.setAccessType("inputOutput")
field26.setType("SFVec3f")
field26.setValue("0 0 0")

Script24.addField(field26)
field27 = x3d.field()
field27.setName("set_cycle")
field27.setAccessType("inputOnly")
field27.setType("SFTime")

Script24.addField(field27)
field28 = x3d.field()
field28.setName("keyValue")
field28.setAccessType("outputOnly")
field28.setType("MFVec3f")

Script24.addField(field28)

Script24.setSourceCode('''ecmascript:
			function set_cycle(value) {
				old = translation;
				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
				keyValue = new MFVec3f(old, translation);
			}''')

Group15.addChild(Script24)
TimeSensor29 = x3d.TimeSensor()
TimeSensor29.setDEF("nodeClock")
TimeSensor29.setCycleInterval(3)
TimeSensor29.setLoop(True)

Group15.addChild(TimeSensor29)
ROUTE30 = x3d.ROUTE()
ROUTE30.setFromNode("nodeClock")
ROUTE30.setFromField("cycleTime")
ROUTE30.setToNode("MoveBall")
ROUTE30.setToField("set_cycle")

Group15.addChild(ROUTE30)
ROUTE31 = x3d.ROUTE()
ROUTE31.setFromNode("nodeClock")
ROUTE31.setFromField("fraction_changed")
ROUTE31.setToNode("NodePosition")
ROUTE31.setToField("set_fraction")

Group15.addChild(ROUTE31)
ROUTE32 = x3d.ROUTE()
ROUTE32.setFromNode("MoveBall")
ROUTE32.setFromField("keyValue")
ROUTE32.setToNode("NodePosition")
ROUTE32.setToField("keyValue")

Group15.addChild(ROUTE32)
ROUTE33 = x3d.ROUTE()
ROUTE33.setFromNode("NodePosition")
ROUTE33.setFromField("value_changed")
ROUTE33.setToNode("transform")
ROUTE33.setToField("set_translation")

Group15.addChild(ROUTE33)

ProtoBody14.addChild(Group15)

ProtoDeclare11.setProtoBody(ProtoBody14)

Scene10.addChild(ProtoDeclare11)
ProtoDeclare34 = x3d.ProtoDeclare()
ProtoDeclare34.setName("cyl")
ProtoInterface35 = x3d.ProtoInterface()
field36 = x3d.field()
field36.setName("positionA")
field36.setAccessType("inputOutput")
field36.setType("SFVec3f")

ProtoInterface35.addField(field36)
field37 = x3d.field()
field37.setName("positionB")
field37.setAccessType("inputOutput")
field37.setType("SFVec3f")

ProtoInterface35.addField(field37)

ProtoDeclare34.setProtoInterface(ProtoInterface35)
ProtoBody38 = x3d.ProtoBody()
Group39 = x3d.Group()
Shape40 = x3d.Shape()
Extrusion41 = x3d.Extrusion()
Extrusion41.setDEF("extrusion")
Extrusion41.setCreaseAngle(0.785)
Extrusion41.setCrossSection(x3d.doubleToFloat([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]))
Extrusion41.setSpine(x3d.doubleToFloat([0,-50,0,0,0,0,0,50,0]))

Shape40.setGeometry(Extrusion41)
Appearance42 = x3d.Appearance()
Material43 = x3d.Material()
Material43.setDiffuseColor(x3d.doubleToFloat([0,1,0]))

Appearance42.setMaterial(Material43)

Shape40.setAppearance(Appearance42)

Group39.addChild(Shape40)
Script44 = x3d.Script()
Script44.setDEF("MoveCylinder")
field45 = x3d.field()
field45.setName("spine")
field45.setAccessType("inputOutput")
field45.setType("MFVec3f")
field45.setValue("0 -50 0 0 0 0 0 50 0")

Script44.addField(field45)
field46 = x3d.field()
field46.setName("endA")
field46.setAccessType("inputOutput")
field46.setType("SFVec3f")
field46.setValue("0 0 0")

Script44.addField(field46)
field47 = x3d.field()
field47.setName("endB")
field47.setAccessType("inputOutput")
field47.setType("SFVec3f")
field47.setValue("50 50 50")

Script44.addField(field47)
IS48 = x3d.IS()
connect49 = x3d.connect()
connect49.setNodeField("endA")
connect49.setProtoField("positionA")

IS48.addConnect(connect49)
connect50 = x3d.connect()
connect50.setNodeField("endB")
connect50.setProtoField("positionB")

IS48.addConnect(connect50)

Script44.setIS(IS48)

Script44.setSourceCode('''ecmascript:
			function set_endA(value) {
				spine = new MFVec3f(value, spine[1]);
			}

			function set_endB(value) {
				spine = new MFVec3f(spine[0], value);
			}''')

Group39.addChild(Script44)
ROUTE51 = x3d.ROUTE()
ROUTE51.setFromNode("MoveCylinder")
ROUTE51.setFromField("spine")
ROUTE51.setToNode("extrusion")
ROUTE51.setToField("set_spine")

Group39.addChild(ROUTE51)

ProtoBody38.addChild(Group39)

ProtoDeclare34.setProtoBody(ProtoBody38)

Scene10.addChild(ProtoDeclare34)
Transform52 = x3d.Transform()
Transform52.setScale(x3d.doubleToFloat([0.1,0.1,0.1]))
ProtoInstance53 = x3d.ProtoInstance()
ProtoInstance53.setName("node")
ProtoInstance53.setDEF("nodeA")
fieldValue54 = x3d.fieldValue()
fieldValue54.setName("position")
fieldValue54.setValue("-50 -50 -50")

ProtoInstance53.addFieldValue(fieldValue54)

Transform52.addChild(ProtoInstance53)
ProtoInstance55 = x3d.ProtoInstance()
ProtoInstance55.setName("node")
ProtoInstance55.setDEF("nodeB")
fieldValue56 = x3d.fieldValue()
fieldValue56.setName("position")
fieldValue56.setValue("50 50 50")

ProtoInstance55.addFieldValue(fieldValue56)

Transform52.addChild(ProtoInstance55)
ProtoInstance57 = x3d.ProtoInstance()
ProtoInstance57.setName("cyl")
ProtoInstance57.setDEF("linkA")

Transform52.addChild(ProtoInstance57)

Scene10.addChild(Transform52)
ROUTE58 = x3d.ROUTE()
ROUTE58.setFromNode("nodeA")
ROUTE58.setFromField("position")
ROUTE58.setToNode("linkA")
ROUTE58.setToField("positionA")

Scene10.addChild(ROUTE58)
ROUTE59 = x3d.ROUTE()
ROUTE59.setFromNode("nodeB")
ROUTE59.setFromField("position")
ROUTE59.setToNode("linkA")
ROUTE59.setToField("positionB")

Scene10.addChild(ROUTE59)

X3D0.setScene(Scene10)
X3D0.toFileX3D("../data/fors2.new.graalpy.x3d")
X3D0.toFileJSON("../data/fors2.new.graalpy.json")
