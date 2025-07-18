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
meta6.setContent("force.x3d")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("identifier")
meta7.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("description")
meta8.setContent("beginnings of a force directed graph in 3D")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("generator")
meta9.setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("generator")
meta10.setContent("x3d-tidy V1.0.175, https://www.npmjs.com/package/x3d-tidy")

head1.addMeta(meta10)

X3D0.setHead(head1)
Scene11 = x3d.Scene()
ProtoDeclare12 = x3d.ProtoDeclare()
ProtoDeclare12.setName("node")
ProtoInterface13 = x3d.ProtoInterface()
field14 = x3d.field()
field14.setName("position")
field14.setAccessType("inputOutput")
field14.setType("SFVec3f")

ProtoInterface13.addField(field14)

ProtoDeclare12.setProtoInterface(ProtoInterface13)
ProtoBody15 = x3d.ProtoBody()
Group16 = x3d.Group()
Transform17 = x3d.Transform()
Transform17.setDEF("transform")
IS18 = x3d.IS()
connect19 = x3d.connect()
connect19.setNodeField("translation")
connect19.setProtoField("position")

IS18.addConnect(connect19)

Transform17.setIS(IS18)
Shape20 = x3d.Shape()
Sphere21 = x3d.Sphere()

Shape20.setGeometry(Sphere21)
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.setDiffuseColor(x3d.doubleToFloat([1,0,0]))

Appearance22.setMaterial(Material23)

Shape20.setAppearance(Appearance22)

Transform17.addChild(Shape20)
Transform24 = x3d.Transform()
Transform24.setTranslation(x3d.doubleToFloat([1,0,0]))
Shape25 = x3d.Shape()
Appearance26 = x3d.Appearance()
Material27 = x3d.Material()
Material27.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance26.setMaterial(Material27)

Shape25.setAppearance(Appearance26)
Text28 = x3d.Text()
Text28.setString(["Node"])
FontStyle29 = x3d.FontStyle()
FontStyle29.setSize(5)
FontStyle29.setJustify(["MIDDLE","MIDDLE"])

Text28.setFontStyle(FontStyle29)

Shape25.setGeometry(Text28)

Transform24.addChild(Shape25)

Transform17.addChild(Transform24)

Group16.addChild(Transform17)
PositionInterpolator30 = x3d.PositionInterpolator()
PositionInterpolator30.setDEF("NodePosition")
PositionInterpolator30.setKey(x3d.doubleToFloat([0,1]))
PositionInterpolator30.setKeyValue(x3d.doubleToFloat([0,0,0,0,5,0]))

Group16.addChild(PositionInterpolator30)
Script31 = x3d.Script()
Script31.setDEF("MoveBall")
field32 = x3d.field()
field32.setName("translation")
field32.setAccessType("inputOutput")
field32.setType("SFVec3f")
field32.setValue("50 50 0")

Script31.addField(field32)
field33 = x3d.field()
field33.setName("old")
field33.setAccessType("inputOutput")
field33.setType("SFVec3f")

Script31.addField(field33)
field34 = x3d.field()
field34.setName("set_cycle")
field34.setAccessType("inputOnly")
field34.setType("SFTime")

Script31.addField(field34)
field35 = x3d.field()
field35.setName("keyValue")
field35.setAccessType("outputOnly")
field35.setType("MFVec3f")

Script31.addField(field35)

Script31.setSourceCode('''ecmascript:
		function set_cycle(value) {
			old = translation;
			translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
			keyValue = new MFVec3f(old, translation);
		}''')

Group16.addChild(Script31)
TimeSensor36 = x3d.TimeSensor()
TimeSensor36.setDEF("nodeClock")
TimeSensor36.setCycleInterval(3)
TimeSensor36.setLoop(True)

Group16.addChild(TimeSensor36)
ROUTE37 = x3d.ROUTE()
ROUTE37.setFromNode("nodeClock")
ROUTE37.setFromField("cycleTime")
ROUTE37.setToNode("MoveBall")
ROUTE37.setToField("set_cycle")

Group16.addChild(ROUTE37)
ROUTE38 = x3d.ROUTE()
ROUTE38.setFromNode("nodeClock")
ROUTE38.setFromField("fraction_changed")
ROUTE38.setToNode("NodePosition")
ROUTE38.setToField("set_fraction")

Group16.addChild(ROUTE38)
ROUTE39 = x3d.ROUTE()
ROUTE39.setFromNode("MoveBall")
ROUTE39.setFromField("keyValue")
ROUTE39.setToNode("NodePosition")
ROUTE39.setToField("set_keyValue")

Group16.addChild(ROUTE39)
ROUTE40 = x3d.ROUTE()
ROUTE40.setFromNode("NodePosition")
ROUTE40.setFromField("value_changed")
ROUTE40.setToNode("transform")
ROUTE40.setToField("set_translation")

Group16.addChild(ROUTE40)

ProtoBody15.addChild(Group16)

ProtoDeclare12.setProtoBody(ProtoBody15)

Scene11.addChild(ProtoDeclare12)
ProtoDeclare41 = x3d.ProtoDeclare()
ProtoDeclare41.setName("cyl")
ProtoInterface42 = x3d.ProtoInterface()
field43 = x3d.field()
field43.setName("set_positionA")
field43.setAccessType("inputOutput")
field43.setType("SFVec3f")

ProtoInterface42.addField(field43)
field44 = x3d.field()
field44.setName("set_positionB")
field44.setAccessType("inputOutput")
field44.setType("SFVec3f")

ProtoInterface42.addField(field44)

ProtoDeclare41.setProtoInterface(ProtoInterface42)
ProtoBody45 = x3d.ProtoBody()
Group46 = x3d.Group()
Shape47 = x3d.Shape()
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.setDiffuseColor(x3d.doubleToFloat([0,1,0]))

Appearance48.setMaterial(Material49)

Shape47.setAppearance(Appearance48)
Extrusion50 = x3d.Extrusion()
Extrusion50.setDEF("extrusion")
Extrusion50.setCreaseAngle(0.785)
Extrusion50.setCrossSection(x3d.doubleToFloat([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]))
Extrusion50.setSpine(x3d.doubleToFloat([0,-50,0,0,0,0,0,50,0]))

Shape47.setGeometry(Extrusion50)

Group46.addChild(Shape47)
Script51 = x3d.Script()
Script51.setDEF("MoveCylinder")
field52 = x3d.field()
field52.setName("spine")
field52.setAccessType("inputOutput")
field52.setType("MFVec3f")
field52.setValue("0 -50 0 0 0 0 0 50 0")

Script51.addField(field52)
field53 = x3d.field()
field53.setName("endA")
field53.setAccessType("inputOutput")
field53.setType("SFVec3f")

Script51.addField(field53)
field54 = x3d.field()
field54.setName("endB")
field54.setAccessType("inputOutput")
field54.setType("SFVec3f")

Script51.addField(field54)
IS55 = x3d.IS()
connect56 = x3d.connect()
connect56.setNodeField("endA")
connect56.setProtoField("set_positionA")

IS55.addConnect(connect56)
connect57 = x3d.connect()
connect57.setNodeField("endB")
connect57.setProtoField("set_positionB")

IS55.addConnect(connect57)

Script51.setIS(IS55)

Script51.setSourceCode('''ecmascript:

                function set_endA(value) {
		    spine = new MFVec3f(value, spine[1]);
                }

                function set_endB(value) {
		    spine = new MFVec3f(spine[0], value);
                }''')

Group46.addChild(Script51)
ROUTE58 = x3d.ROUTE()
ROUTE58.setFromNode("MoveCylinder")
ROUTE58.setFromField("spine_changed")
ROUTE58.setToNode("extrusion")
ROUTE58.setToField("set_spine")

Group46.addChild(ROUTE58)

ProtoBody45.addChild(Group46)

ProtoDeclare41.setProtoBody(ProtoBody45)

Scene11.addChild(ProtoDeclare41)
Transform59 = x3d.Transform()
Transform59.setDEF("HoldsContent")
Transform59.setScale(x3d.doubleToFloat([0.1,0.1,0.1]))
PlaneSensor60 = x3d.PlaneSensor()
PlaneSensor60.setDEF("clickGenerator")
PlaneSensor60.setDescription("click on background to add nodes, click on nodes to add links")
PlaneSensor60.setMinPosition(x3d.doubleToFloat([-50,-50]))
PlaneSensor60.setMaxPosition(x3d.doubleToFloat([50,50]))

Transform59.addChild(PlaneSensor60)
ProtoInstance61 = x3d.ProtoInstance()
ProtoInstance61.setName("node")
ProtoInstance61.setDEF("nodeA")
fieldValue62 = x3d.fieldValue()
fieldValue62.setName("position")
fieldValue62.setValue("0 1.388333 0")

ProtoInstance61.addFieldValue(fieldValue62)

Transform59.addChild(ProtoInstance61)
ProtoInstance63 = x3d.ProtoInstance()
ProtoInstance63.setName("node")
ProtoInstance63.setDEF("nodeB")
fieldValue64 = x3d.fieldValue()
fieldValue64.setName("position")
fieldValue64.setValue("0 1.388333 0")

ProtoInstance63.addFieldValue(fieldValue64)

Transform59.addChild(ProtoInstance63)
ProtoInstance65 = x3d.ProtoInstance()
ProtoInstance65.setName("node")
ProtoInstance65.setDEF("nodeC")
fieldValue66 = x3d.fieldValue()
fieldValue66.setName("position")
fieldValue66.setValue("0 1.388333 0")

ProtoInstance65.addFieldValue(fieldValue66)

Transform59.addChild(ProtoInstance65)
ProtoInstance67 = x3d.ProtoInstance()
ProtoInstance67.setName("node")
ProtoInstance67.setDEF("nodeD")
fieldValue68 = x3d.fieldValue()
fieldValue68.setName("position")
fieldValue68.setValue("0 1.388333 0")

ProtoInstance67.addFieldValue(fieldValue68)

Transform59.addChild(ProtoInstance67)
ProtoInstance69 = x3d.ProtoInstance()
ProtoInstance69.setName("cyl")
ProtoInstance69.setDEF("linkA")

Transform59.addChild(ProtoInstance69)
ProtoInstance70 = x3d.ProtoInstance()
ProtoInstance70.setName("cyl")
ProtoInstance70.setDEF("linkB")

Transform59.addChild(ProtoInstance70)
ProtoInstance71 = x3d.ProtoInstance()
ProtoInstance71.setName("cyl")
ProtoInstance71.setDEF("linkC")

Transform59.addChild(ProtoInstance71)

Scene11.addChild(Transform59)
Script72 = x3d.Script()
Script72.setDEF("clickHandler")
field73 = x3d.field()
field73.setName("counter")
field73.setAccessType("inputOutput")
field73.setType("SFInt32")

Script72.addField(field73)
field74 = x3d.field()
field74.setName("node_changed")
field74.setAccessType("outputOnly")
field74.setType("SFNode")

Script72.addField(field74)
field75 = x3d.field()
field75.setName("add_node")
field75.setAccessType("inputOnly")
field75.setType("SFBool")

Script72.addField(field75)

Script72.setSourceCode('''ecmascript:
	function add_node(value) {
                // Browser.print('hey ', counter);
                counter = counter++;
		Browser.appendTo(Browser.getDocument().querySelector(\"field [name=ModifiableNode]\"),
			{ \"ProtoInstance\":
				{ \"@name\":\"node\",
				  \"@DEF\":\"node'+counter+'\",
				  \"fieldValue\": [
					{
						 \"@name\":\"position\",
						 \"@value\":[0.0,0.0,0.0]
					}
				  ]
				}
			});

        }''')

Scene11.addChild(Script72)
ROUTE76 = x3d.ROUTE()
ROUTE76.setFromNode("clickGenerator")
ROUTE76.setFromField("isActive")
ROUTE76.setToNode("clickHandler")
ROUTE76.setToField("add_node")

Scene11.addChild(ROUTE76)
ROUTE77 = x3d.ROUTE()
ROUTE77.setFromNode("nodeA")
ROUTE77.setFromField("position_changed")
ROUTE77.setToNode("linkA")
ROUTE77.setToField("set_positionA")

Scene11.addChild(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.setFromNode("nodeB")
ROUTE78.setFromField("position_changed")
ROUTE78.setToNode("linkA")
ROUTE78.setToField("set_positionB")

Scene11.addChild(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.setFromNode("nodeA")
ROUTE79.setFromField("position_changed")
ROUTE79.setToNode("linkB")
ROUTE79.setToField("set_positionA")

Scene11.addChild(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.setFromNode("nodeC")
ROUTE80.setFromField("position_changed")
ROUTE80.setToNode("linkB")
ROUTE80.setToField("set_positionB")

Scene11.addChild(ROUTE80)
ROUTE81 = x3d.ROUTE()
ROUTE81.setFromNode("nodeA")
ROUTE81.setFromField("position_changed")
ROUTE81.setToNode("linkC")
ROUTE81.setToField("set_positionA")

Scene11.addChild(ROUTE81)
ROUTE82 = x3d.ROUTE()
ROUTE82.setFromNode("nodeD")
ROUTE82.setFromField("position_changed")
ROUTE82.setToNode("linkC")
ROUTE82.setToField("set_positionB")

Scene11.addChild(ROUTE82)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/force_tidy.new.graalpy.x3d")
X3D0.toFileJSON("../data/force_tidy.new.graalpy.json")
