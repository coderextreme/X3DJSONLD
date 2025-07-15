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
meta11 = x3d.meta()
meta11.setName("modified")
meta11.setContent("Sat, 9 Nov 2024 19:29:39 GMT")

head1.addMeta(meta11)

X3D0.setHead(head1)
Scene12 = x3d.Scene()
ProtoDeclare13 = x3d.ProtoDeclare()
ProtoDeclare13.setName("node")
ProtoInterface14 = x3d.ProtoInterface()
field15 = x3d.field()
field15.setName("position")
field15.setAccessType("inputOutput")
field15.setType("SFVec3f")

ProtoInterface14.addField(field15)

ProtoDeclare13.setProtoInterface(ProtoInterface14)
ProtoBody16 = x3d.ProtoBody()
Group17 = x3d.Group()
Transform18 = x3d.Transform()
Transform18.setDEF("transform")
IS19 = x3d.IS()
connect20 = x3d.connect()
connect20.setNodeField("translation")
connect20.setProtoField("position")

IS19.addConnect(connect20)

Transform18.setIS(IS19)
Shape21 = x3d.Shape()
Sphere22 = x3d.Sphere()

Shape21.setGeometry(Sphere22)
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()
Material24.setDiffuseColor(x3d.doubleToFloat([1,0,0]))

Appearance23.setMaterial(Material24)

Shape21.setAppearance(Appearance23)

Transform18.addChild(Shape21)
Transform25 = x3d.Transform()
Transform25.setTranslation(x3d.doubleToFloat([1,0,0]))
Shape26 = x3d.Shape()
Appearance27 = x3d.Appearance()
Material28 = x3d.Material()
Material28.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance27.setMaterial(Material28)

Shape26.setAppearance(Appearance27)
Text29 = x3d.Text()
Text29.setString(["Node"])
FontStyle30 = x3d.FontStyle()
FontStyle30.setSize(5)
FontStyle30.setJustify(["MIDDLE","MIDDLE"])

Text29.setFontStyle(FontStyle30)

Shape26.setGeometry(Text29)

Transform25.addChild(Shape26)

Transform18.addChild(Transform25)

Group17.addChild(Transform18)
PositionInterpolator31 = x3d.PositionInterpolator()
PositionInterpolator31.setDEF("NodePosition")
PositionInterpolator31.setKey(x3d.doubleToFloat([0,1]))
PositionInterpolator31.setKeyValue(x3d.doubleToFloat([0,0,0,0,5,0]))

Group17.addChild(PositionInterpolator31)
Script32 = x3d.Script()
Script32.setDEF("MoveBall")
field33 = x3d.field()
field33.setName("translation")
field33.setAccessType("inputOutput")
field33.setType("SFVec3f")
field33.setValue("50 50 0")

Script32.addField(field33)
field34 = x3d.field()
field34.setName("old")
field34.setAccessType("inputOutput")
field34.setType("SFVec3f")

Script32.addField(field34)
field35 = x3d.field()
field35.setName("set_cycle")
field35.setAccessType("inputOnly")
field35.setType("SFTime")

Script32.addField(field35)
field36 = x3d.field()
field36.setName("keyValue")
field36.setAccessType("outputOnly")
field36.setType("MFVec3f")

Script32.addField(field36)

Script32.setSourceCode('''ecmascript:
		function set_cycle(value) {
			old = translation;
			translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
			keyValue = new MFVec3f(old, translation);
		}''')

Group17.addChild(Script32)
TimeSensor37 = x3d.TimeSensor()
TimeSensor37.setDEF("nodeClock")
TimeSensor37.setCycleInterval(3)
TimeSensor37.setLoop(True)

Group17.addChild(TimeSensor37)
ROUTE38 = x3d.ROUTE()
ROUTE38.setFromNode("nodeClock")
ROUTE38.setFromField("cycleTime")
ROUTE38.setToNode("MoveBall")
ROUTE38.setToField("set_cycle")

Group17.addChild(ROUTE38)
ROUTE39 = x3d.ROUTE()
ROUTE39.setFromNode("nodeClock")
ROUTE39.setFromField("fraction_changed")
ROUTE39.setToNode("NodePosition")
ROUTE39.setToField("set_fraction")

Group17.addChild(ROUTE39)
ROUTE40 = x3d.ROUTE()
ROUTE40.setFromNode("MoveBall")
ROUTE40.setFromField("keyValue")
ROUTE40.setToNode("NodePosition")
ROUTE40.setToField("set_keyValue")

Group17.addChild(ROUTE40)
ROUTE41 = x3d.ROUTE()
ROUTE41.setFromNode("NodePosition")
ROUTE41.setFromField("value_changed")
ROUTE41.setToNode("transform")
ROUTE41.setToField("set_translation")

Group17.addChild(ROUTE41)

ProtoBody16.addChild(Group17)

ProtoDeclare13.setProtoBody(ProtoBody16)

Scene12.addChild(ProtoDeclare13)
ProtoDeclare42 = x3d.ProtoDeclare()
ProtoDeclare42.setName("cyl")
ProtoInterface43 = x3d.ProtoInterface()
field44 = x3d.field()
field44.setName("set_positionA")
field44.setAccessType("inputOutput")
field44.setType("SFVec3f")

ProtoInterface43.addField(field44)
field45 = x3d.field()
field45.setName("set_positionB")
field45.setAccessType("inputOutput")
field45.setType("SFVec3f")

ProtoInterface43.addField(field45)

ProtoDeclare42.setProtoInterface(ProtoInterface43)
ProtoBody46 = x3d.ProtoBody()
Group47 = x3d.Group()
Shape48 = x3d.Shape()
Appearance49 = x3d.Appearance()
Material50 = x3d.Material()
Material50.setDiffuseColor(x3d.doubleToFloat([0,1,0]))

Appearance49.setMaterial(Material50)

Shape48.setAppearance(Appearance49)
Extrusion51 = x3d.Extrusion()
Extrusion51.setDEF("extrusion")
Extrusion51.setCreaseAngle(0.785)
Extrusion51.setCrossSection(x3d.doubleToFloat([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]))
Extrusion51.setSpine(x3d.doubleToFloat([0,-50,0,0,0,0,0,50,0]))

Shape48.setGeometry(Extrusion51)

Group47.addChild(Shape48)
Script52 = x3d.Script()
Script52.setDEF("MoveCylinder")
field53 = x3d.field()
field53.setName("spine")
field53.setAccessType("inputOutput")
field53.setType("MFVec3f")
field53.setValue("0 -50 0 0 0 0 0 50 0")

Script52.addField(field53)
field54 = x3d.field()
field54.setName("endA")
field54.setAccessType("inputOutput")
field54.setType("SFVec3f")

Script52.addField(field54)
field55 = x3d.field()
field55.setName("endB")
field55.setAccessType("inputOutput")
field55.setType("SFVec3f")

Script52.addField(field55)
IS56 = x3d.IS()
connect57 = x3d.connect()
connect57.setNodeField("endA")
connect57.setProtoField("set_positionA")

IS56.addConnect(connect57)
connect58 = x3d.connect()
connect58.setNodeField("endB")
connect58.setProtoField("set_positionB")

IS56.addConnect(connect58)

Script52.setIS(IS56)

Script52.setSourceCode('''ecmascript:

                function set_endA(value) {
		    spine = new MFVec3f(value, spine[1]);
                }

                function set_endB(value) {
		    spine = new MFVec3f(spine[0], value);
                }''')

Group47.addChild(Script52)
ROUTE59 = x3d.ROUTE()
ROUTE59.setFromNode("MoveCylinder")
ROUTE59.setFromField("spine_changed")
ROUTE59.setToNode("extrusion")
ROUTE59.setToField("set_spine")

Group47.addChild(ROUTE59)

ProtoBody46.addChild(Group47)

ProtoDeclare42.setProtoBody(ProtoBody46)

Scene12.addChild(ProtoDeclare42)
Transform60 = x3d.Transform()
Transform60.setDEF("HoldsContent")
Transform60.setScale(x3d.doubleToFloat([0.1,0.1,0.1]))
PlaneSensor61 = x3d.PlaneSensor()
PlaneSensor61.setDEF("clickGenerator")
PlaneSensor61.setDescription("click on background to add nodes, click on nodes to add links")
PlaneSensor61.setMinPosition(x3d.doubleToFloat([-50,-50]))
PlaneSensor61.setMaxPosition(x3d.doubleToFloat([50,50]))

Transform60.addChild(PlaneSensor61)
ProtoInstance62 = x3d.ProtoInstance()
ProtoInstance62.setName("node")
ProtoInstance62.setDEF("nodeA")
fieldValue63 = x3d.fieldValue()
fieldValue63.setName("position")
fieldValue63.setValue("0 1.388333 0")

ProtoInstance62.addFieldValue(fieldValue63)

Transform60.addChild(ProtoInstance62)
ProtoInstance64 = x3d.ProtoInstance()
ProtoInstance64.setName("node")
ProtoInstance64.setDEF("nodeB")
fieldValue65 = x3d.fieldValue()
fieldValue65.setName("position")
fieldValue65.setValue("0 1.388333 0")

ProtoInstance64.addFieldValue(fieldValue65)

Transform60.addChild(ProtoInstance64)
ProtoInstance66 = x3d.ProtoInstance()
ProtoInstance66.setName("node")
ProtoInstance66.setDEF("nodeC")
fieldValue67 = x3d.fieldValue()
fieldValue67.setName("position")
fieldValue67.setValue("0 1.388333 0")

ProtoInstance66.addFieldValue(fieldValue67)

Transform60.addChild(ProtoInstance66)
ProtoInstance68 = x3d.ProtoInstance()
ProtoInstance68.setName("node")
ProtoInstance68.setDEF("nodeD")
fieldValue69 = x3d.fieldValue()
fieldValue69.setName("position")
fieldValue69.setValue("0 1.388333 0")

ProtoInstance68.addFieldValue(fieldValue69)

Transform60.addChild(ProtoInstance68)
ProtoInstance70 = x3d.ProtoInstance()
ProtoInstance70.setName("cyl")
ProtoInstance70.setDEF("linkA")

Transform60.addChild(ProtoInstance70)
ProtoInstance71 = x3d.ProtoInstance()
ProtoInstance71.setName("cyl")
ProtoInstance71.setDEF("linkB")

Transform60.addChild(ProtoInstance71)
ProtoInstance72 = x3d.ProtoInstance()
ProtoInstance72.setName("cyl")
ProtoInstance72.setDEF("linkC")

Transform60.addChild(ProtoInstance72)

Scene12.addChild(Transform60)
Script73 = x3d.Script()
Script73.setDEF("clickHandler")
field74 = x3d.field()
field74.setName("counter")
field74.setAccessType("inputOutput")
field74.setType("SFInt32")

Script73.addField(field74)
field75 = x3d.field()
field75.setName("node_changed")
field75.setAccessType("outputOnly")
field75.setType("SFNode")

Script73.addField(field75)
field76 = x3d.field()
field76.setName("add_node")
field76.setAccessType("inputOnly")
field76.setType("SFBool")

Script73.addField(field76)

Script73.setSourceCode('''ecmascript:
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

Scene12.addChild(Script73)
ROUTE77 = x3d.ROUTE()
ROUTE77.setFromNode("clickGenerator")
ROUTE77.setFromField("isActive")
ROUTE77.setToNode("clickHandler")
ROUTE77.setToField("add_node")

Scene12.addChild(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.setFromNode("nodeA")
ROUTE78.setFromField("position_changed")
ROUTE78.setToNode("linkA")
ROUTE78.setToField("set_positionA")

Scene12.addChild(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.setFromNode("nodeB")
ROUTE79.setFromField("position_changed")
ROUTE79.setToNode("linkA")
ROUTE79.setToField("set_positionB")

Scene12.addChild(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.setFromNode("nodeA")
ROUTE80.setFromField("position_changed")
ROUTE80.setToNode("linkB")
ROUTE80.setToField("set_positionA")

Scene12.addChild(ROUTE80)
ROUTE81 = x3d.ROUTE()
ROUTE81.setFromNode("nodeC")
ROUTE81.setFromField("position_changed")
ROUTE81.setToNode("linkB")
ROUTE81.setToField("set_positionB")

Scene12.addChild(ROUTE81)
ROUTE82 = x3d.ROUTE()
ROUTE82.setFromNode("nodeA")
ROUTE82.setFromField("position_changed")
ROUTE82.setToNode("linkC")
ROUTE82.setToField("set_positionA")

Scene12.addChild(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.setFromNode("nodeD")
ROUTE83.setFromField("position_changed")
ROUTE83.setToNode("linkC")
ROUTE83.setToField("set_positionB")

Scene12.addChild(ROUTE83)

X3D0.setScene(Scene12)
X3D0.toFileX3D("../data/force_tidy.new.graalpy.x3d")
X3D0.toFileJSON("../data/force_tidy.new.graalpy.json")
