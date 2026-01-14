import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
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
Sphere20 = x3d.Sphere()

Shape19.setGeometry(Sphere20)
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.setDiffuseColor(x3d.doubleToFloat([1,0,0]))

Appearance21.setMaterial(Material22)

Shape19.setAppearance(Appearance21)

Transform16.addChild(Shape19)
Transform23 = x3d.Transform()
Transform23.setTranslation(x3d.doubleToFloat([1,0,0]))
Shape24 = x3d.Shape()
Text25 = x3d.Text()
Text25.setString(["Node"])
FontStyle26 = x3d.FontStyle()
FontStyle26.setJustify(["MIDDLE","MIDDLE"])
FontStyle26.setSize(5)

Text25.setFontStyle(FontStyle26)

Shape24.setGeometry(Text25)
Appearance27 = x3d.Appearance()
Material28 = x3d.Material()
Material28.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance27.setMaterial(Material28)

Shape24.setAppearance(Appearance27)

Transform23.addChild(Shape24)

Transform16.addChild(Transform23)

Group15.addChild(Transform16)
PositionInterpolator29 = x3d.PositionInterpolator()
PositionInterpolator29.setDEF("NodePosition")
PositionInterpolator29.setKey(x3d.doubleToFloat([0,1]))
PositionInterpolator29.setKeyValue(x3d.doubleToFloat([0,0,0,0,5,0]))

Group15.addChild(PositionInterpolator29)
Script30 = x3d.Script()
Script30.setDEF("MoveBall")
field31 = x3d.field()
field31.setName("translation")
field31.setAccessType("inputOutput")
field31.setType("SFVec3f")
field31.setValue("50 50 0")

Script30.addField(field31)
field32 = x3d.field()
field32.setName("old")
field32.setAccessType("inputOutput")
field32.setType("SFVec3f")
field32.setValue("0 0 0")

Script30.addField(field32)
field33 = x3d.field()
field33.setName("set_cycle")
field33.setAccessType("inputOnly")
field33.setType("SFTime")

Script30.addField(field33)
field34 = x3d.field()
field34.setName("keyValue")
field34.setAccessType("outputOnly")
field34.setType("MFVec3f")

Script30.addField(field34)

Script30.setSourceCode('''ecmascript:
			function set_cycle(value) {
				old = translation;
				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
				keyValue = new MFVec3f(old, translation);
			}''')

Group15.addChild(Script30)
TimeSensor35 = x3d.TimeSensor()
TimeSensor35.setDEF("nodeClock")
TimeSensor35.setCycleInterval(3)
TimeSensor35.setLoop(True)

Group15.addChild(TimeSensor35)
ROUTE36 = x3d.ROUTE()
ROUTE36.setFromNode("nodeClock")
ROUTE36.setFromField("cycleTime")
ROUTE36.setToNode("MoveBall")
ROUTE36.setToField("set_cycle")

Group15.addChild(ROUTE36)
ROUTE37 = x3d.ROUTE()
ROUTE37.setFromNode("nodeClock")
ROUTE37.setFromField("fraction_changed")
ROUTE37.setToNode("NodePosition")
ROUTE37.setToField("set_fraction")

Group15.addChild(ROUTE37)
ROUTE38 = x3d.ROUTE()
ROUTE38.setFromNode("MoveBall")
ROUTE38.setFromField("keyValue")
ROUTE38.setToNode("NodePosition")
ROUTE38.setToField("keyValue")

Group15.addChild(ROUTE38)
ROUTE39 = x3d.ROUTE()
ROUTE39.setFromNode("NodePosition")
ROUTE39.setFromField("value_changed")
ROUTE39.setToNode("transform")
ROUTE39.setToField("set_translation")

Group15.addChild(ROUTE39)

ProtoBody14.addChild(Group15)

ProtoDeclare11.setProtoBody(ProtoBody14)

Scene10.addChild(ProtoDeclare11)
ProtoDeclare40 = x3d.ProtoDeclare()
ProtoDeclare40.setName("cyl")
ProtoInterface41 = x3d.ProtoInterface()
field42 = x3d.field()
field42.setName("set_positionA")
field42.setAccessType("inputOutput")
field42.setType("SFVec3f")
field42.setValue("0 0 0")

ProtoInterface41.addField(field42)
field43 = x3d.field()
field43.setName("set_positionB")
field43.setAccessType("inputOutput")
field43.setType("SFVec3f")
field43.setValue("50 50 50")

ProtoInterface41.addField(field43)

ProtoDeclare40.setProtoInterface(ProtoInterface41)
ProtoBody44 = x3d.ProtoBody()
Group45 = x3d.Group()
Shape46 = x3d.Shape()
Extrusion47 = x3d.Extrusion()
Extrusion47.setDEF("extrusion")
Extrusion47.setCreaseAngle(0.785)
Extrusion47.setCrossSection(x3d.doubleToFloat([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]))
Extrusion47.setSpine(x3d.doubleToFloat([0,-50,0,0,0,0,0,50,0]))

Shape46.setGeometry(Extrusion47)
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.setDiffuseColor(x3d.doubleToFloat([0,1,0]))

Appearance48.setMaterial(Material49)

Shape46.setAppearance(Appearance48)

Group45.addChild(Shape46)
Script50 = x3d.Script()
Script50.setDEF("MoveCylinder")
field51 = x3d.field()
field51.setName("spine")
field51.setAccessType("inputOutput")
field51.setType("MFVec3f")
field51.setValue("0 -50 0 0 0 0 0 50 0")

Script50.addField(field51)
field52 = x3d.field()
field52.setName("endA")
field52.setAccessType("inputOutput")
field52.setType("SFVec3f")
field52.setValue("0 0 0")

Script50.addField(field52)
field53 = x3d.field()
field53.setName("endB")
field53.setAccessType("inputOutput")
field53.setType("SFVec3f")
field53.setValue("50 50 50")

Script50.addField(field53)
IS54 = x3d.IS()
connect55 = x3d.connect()
connect55.setNodeField("endA")
connect55.setProtoField("set_positionA")

IS54.addConnect(connect55)
connect56 = x3d.connect()
connect56.setNodeField("endB")
connect56.setProtoField("set_positionB")

IS54.addConnect(connect56)

Script50.setIS(IS54)

Script50.setSourceCode('''ecmascript:
			function set_endA(value) {
				spine = new MFVec3f(value, spine[1]);
			}

			function set_endB(value) {
				spine = new MFVec3f(spine[0], value);
			}''')

Group45.addChild(Script50)
ROUTE57 = x3d.ROUTE()
ROUTE57.setFromNode("MoveCylinder")
ROUTE57.setFromField("spine")
ROUTE57.setToNode("extrusion")
ROUTE57.setToField("set_spine")

Group45.addChild(ROUTE57)

ProtoBody44.addChild(Group45)

ProtoDeclare40.setProtoBody(ProtoBody44)

Scene10.addChild(ProtoDeclare40)
Transform58 = x3d.Transform()
Transform58.setDEF("HoldsContent")
Transform58.setScale(x3d.doubleToFloat([0.1,0.1,0.1]))
PlaneSensor59 = x3d.PlaneSensor()
PlaneSensor59.setDEF("clickGenerator")
PlaneSensor59.setMinPosition(x3d.doubleToFloat([-50,-50]))
PlaneSensor59.setMaxPosition(x3d.doubleToFloat([50,50]))
PlaneSensor59.setDescription("click on background to add nodes, click on nodes to add links")

Transform58.addChild(PlaneSensor59)
ProtoInstance60 = x3d.ProtoInstance()
ProtoInstance60.setName("node")
ProtoInstance60.setDEF("nodeA")
fieldValue61 = x3d.fieldValue()
fieldValue61.setName("position")
fieldValue61.setValue("0 0 0")

ProtoInstance60.addFieldValue(fieldValue61)

Transform58.addChild(ProtoInstance60)
ProtoInstance62 = x3d.ProtoInstance()
ProtoInstance62.setName("node")
ProtoInstance62.setDEF("nodeB")
fieldValue63 = x3d.fieldValue()
fieldValue63.setName("position")
fieldValue63.setValue("50 50 50")

ProtoInstance62.addFieldValue(fieldValue63)

Transform58.addChild(ProtoInstance62)
ProtoInstance64 = x3d.ProtoInstance()
ProtoInstance64.setName("node")
ProtoInstance64.setDEF("nodeC")
fieldValue65 = x3d.fieldValue()
fieldValue65.setName("position")
fieldValue65.setValue("-50 -50 -50")

ProtoInstance64.addFieldValue(fieldValue65)

Transform58.addChild(ProtoInstance64)
ProtoInstance66 = x3d.ProtoInstance()
ProtoInstance66.setName("node")
ProtoInstance66.setDEF("nodeD")
fieldValue67 = x3d.fieldValue()
fieldValue67.setName("position")
fieldValue67.setValue("50 50 -50")

ProtoInstance66.addFieldValue(fieldValue67)

Transform58.addChild(ProtoInstance66)
ProtoInstance68 = x3d.ProtoInstance()
ProtoInstance68.setName("cyl")
ProtoInstance68.setDEF("linkA")

Transform58.addChild(ProtoInstance68)
ProtoInstance69 = x3d.ProtoInstance()
ProtoInstance69.setName("cyl")
ProtoInstance69.setDEF("linkB")

Transform58.addChild(ProtoInstance69)
ProtoInstance70 = x3d.ProtoInstance()
ProtoInstance70.setName("cyl")
ProtoInstance70.setDEF("linkC")

Transform58.addChild(ProtoInstance70)

Scene10.addChild(Transform58)
Script71 = x3d.Script()
Script71.setDEF("clickHandler")
field72 = x3d.field()
field72.setName("counter")
field72.setAccessType("inputOutput")
field72.setValue("0")
field72.setType("SFInt32")

Script71.addField(field72)
field73 = x3d.field()
field73.setName("add_node")
field73.setAccessType("inputOnly")
field73.setValue("false")
field73.setType("SFBool")

Script71.addField(field73)

Script71.addComments(x3d.CommentsBlock("""<field accessType=\"outputOnly\" name=\"node_changed\" type=\"SFNode\"/> <field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>"""))

Script71.setSourceCode('''ecmascript:
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

Scene10.addChild(Script71)
ROUTE74 = x3d.ROUTE()
ROUTE74.setFromNode("clickGenerator")
ROUTE74.setFromField("isActive")
ROUTE74.setToNode("clickHandler")
ROUTE74.setToField("add_node")

Scene10.addChild(ROUTE74)
ROUTE75 = x3d.ROUTE()
ROUTE75.setFromNode("nodeA")
ROUTE75.setFromField("position")
ROUTE75.setToNode("linkA")
ROUTE75.setToField("set_positionA")

Scene10.addChild(ROUTE75)
ROUTE76 = x3d.ROUTE()
ROUTE76.setFromNode("nodeB")
ROUTE76.setFromField("position")
ROUTE76.setToNode("linkA")
ROUTE76.setToField("set_positionB")

Scene10.addChild(ROUTE76)
ROUTE77 = x3d.ROUTE()
ROUTE77.setFromNode("nodeA")
ROUTE77.setFromField("position")
ROUTE77.setToNode("linkB")
ROUTE77.setToField("set_positionA")

Scene10.addChild(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.setFromNode("nodeC")
ROUTE78.setFromField("position")
ROUTE78.setToNode("linkB")
ROUTE78.setToField("set_positionB")

Scene10.addChild(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.setFromNode("nodeA")
ROUTE79.setFromField("position")
ROUTE79.setToNode("linkC")
ROUTE79.setToField("set_positionA")

Scene10.addChild(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.setFromNode("nodeD")
ROUTE80.setFromField("position")
ROUTE80.setToNode("linkC")
ROUTE80.setToField("set_positionB")

Scene10.addChild(ROUTE80)

X3D0.setScene(Scene10)
X3D0.toFileX3D("../data/force.new.graalpy.x3d")
X3D0.toFileJSON("../data/force.new.graalpy.x3dj")
