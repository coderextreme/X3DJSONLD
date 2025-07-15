import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("creator")
meta2.setContent("John W Carlson")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("created")
meta3.setContent("December 13 2015")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("modified")
meta4.setContent("July 14 2025")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("title")
meta5.setContent("forcenode.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("description")
meta7.setContent("beginnings of a force directed graph in 3D")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("generator")
meta8.setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta8)

X3D0.setHead(head1)
Scene9 = x3d.Scene()
ProtoDeclare10 = x3d.ProtoDeclare()
ProtoDeclare10.setName("node")
ProtoInterface11 = x3d.ProtoInterface()
field12 = x3d.field()
field12.setName("position")
field12.setAccessType("inputOutput")
field12.setType("SFVec3f")
field12.setValue("0 0 0")

ProtoInterface11.addField(field12)

ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody13 = x3d.ProtoBody()
Group14 = x3d.Group()
Transform15 = x3d.Transform()
Transform15.setDEF("transform")
IS16 = x3d.IS()
connect17 = x3d.connect()
connect17.setNodeField("translation")
connect17.setProtoField("position")

IS16.addConnect(connect17)

Transform15.setIS(IS16)
Shape18 = x3d.Shape()
Sphere19 = x3d.Sphere()

Shape18.setGeometry(Sphere19)
Appearance20 = x3d.Appearance()
Material21 = x3d.Material()
Material21.setDiffuseColor(x3d.doubleToFloat([1,0,0]))

Appearance20.setMaterial(Material21)

Shape18.setAppearance(Appearance20)

Transform15.addChild(Shape18)
Transform22 = x3d.Transform()
Transform22.setTranslation(x3d.doubleToFloat([1,0,1]))
Shape23 = x3d.Shape()
Text24 = x3d.Text()
Text24.setString(["Node"])
FontStyle25 = x3d.FontStyle()
FontStyle25.setJustify(["MIDDLE","MIDDLE"])
FontStyle25.setSize(5)

Text24.setFontStyle(FontStyle25)

Shape23.setGeometry(Text24)
Appearance26 = x3d.Appearance()
Material27 = x3d.Material()
Material27.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance26.setMaterial(Material27)

Shape23.setAppearance(Appearance26)

Transform22.addChild(Shape23)

Transform15.addChild(Transform22)

Group14.addChild(Transform15)
PositionInterpolator28 = x3d.PositionInterpolator()
PositionInterpolator28.setDEF("NodePosition")
PositionInterpolator28.setKey(x3d.doubleToFloat([0,1]))
PositionInterpolator28.setKeyValue(x3d.doubleToFloat([0,0,0,0,5,0]))

Group14.addChild(PositionInterpolator28)
Script29 = x3d.Script()
Script29.setDEF("MoveBall")
field30 = x3d.field()
field30.setName("translation")
field30.setAccessType("inputOutput")
field30.setType("SFVec3f")
field30.setValue("50 50 0")

Script29.addField(field30)
field31 = x3d.field()
field31.setName("old")
field31.setAccessType("inputOutput")
field31.setType("SFVec3f")
field31.setValue("0 0 0")

Script29.addField(field31)
field32 = x3d.field()
field32.setName("set_cycle")
field32.setAccessType("inputOnly")
field32.setType("SFTime")

Script29.addField(field32)
field33 = x3d.field()
field33.setName("keyValue")
field33.setAccessType("outputOnly")
field33.setType("MFVec3f")

Script29.addField(field33)

Script29.setSourceCode('''ecmascript:
					function set_cycle(value) {
                                                old = translation;
						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
			    			keyValue = new MFVec3f(old, translation);
						// Browser.println(translation);
					}''')

Group14.addChild(Script29)
TimeSensor34 = x3d.TimeSensor()
TimeSensor34.setDEF("nodeClock")
TimeSensor34.setCycleInterval(3)
TimeSensor34.setLoop(True)

Group14.addChild(TimeSensor34)
ROUTE35 = x3d.ROUTE()
ROUTE35.setFromNode("nodeClock")
ROUTE35.setFromField("cycleTime")
ROUTE35.setToNode("MoveBall")
ROUTE35.setToField("set_cycle")

Group14.addChild(ROUTE35)
ROUTE36 = x3d.ROUTE()
ROUTE36.setFromNode("nodeClock")
ROUTE36.setFromField("fraction_changed")
ROUTE36.setToNode("NodePosition")
ROUTE36.setToField("set_fraction")

Group14.addChild(ROUTE36)
ROUTE37 = x3d.ROUTE()
ROUTE37.setFromNode("MoveBall")
ROUTE37.setFromField("keyValue")
ROUTE37.setToNode("NodePosition")
ROUTE37.setToField("keyValue")

Group14.addChild(ROUTE37)
ROUTE38 = x3d.ROUTE()
ROUTE38.setFromNode("NodePosition")
ROUTE38.setFromField("value_changed")
ROUTE38.setToNode("transform")
ROUTE38.setToField("set_translation")

Group14.addChild(ROUTE38)

ProtoBody13.addChild(Group14)

ProtoDeclare10.setProtoBody(ProtoBody13)

Scene9.addChild(ProtoDeclare10)
ProtoDeclare39 = x3d.ProtoDeclare()
ProtoDeclare39.setName("cyl")
ProtoInterface40 = x3d.ProtoInterface()
field41 = x3d.field()
field41.setName("set_positionA")
field41.setAccessType("inputOutput")
field41.setType("SFVec3f")

ProtoInterface40.addField(field41)
field42 = x3d.field()
field42.setName("set_positionB")
field42.setAccessType("inputOutput")
field42.setType("SFVec3f")

ProtoInterface40.addField(field42)

ProtoDeclare39.setProtoInterface(ProtoInterface40)
ProtoBody43 = x3d.ProtoBody()
Group44 = x3d.Group()
Shape45 = x3d.Shape()
Extrusion46 = x3d.Extrusion()
Extrusion46.setDEF("extrusion")
Extrusion46.setCreaseAngle(0.785)
Extrusion46.setCrossSection(x3d.doubleToFloat([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]))
Extrusion46.setSpine(x3d.doubleToFloat([0,-50,0,0,0,0,0,50,0]))

Shape45.setGeometry(Extrusion46)
Appearance47 = x3d.Appearance()
Material48 = x3d.Material()
Material48.setDiffuseColor(x3d.doubleToFloat([0,1,0]))

Appearance47.setMaterial(Material48)

Shape45.setAppearance(Appearance47)

Group44.addChild(Shape45)
Script49 = x3d.Script()
Script49.setDEF("MoveCylinder")
field50 = x3d.field()
field50.setName("spine")
field50.setAccessType("inputOutput")
field50.setType("MFVec3f")
field50.setValue("0 -50 0 0 0 0 0 50 0")

Script49.addField(field50)
field51 = x3d.field()
field51.setName("endA")
field51.setAccessType("inputOutput")
field51.setType("SFVec3f")

Script49.addField(field51)
field52 = x3d.field()
field52.setName("endB")
field52.setAccessType("inputOutput")
field52.setType("SFVec3f")

Script49.addField(field52)
IS53 = x3d.IS()
connect54 = x3d.connect()
connect54.setNodeField("endA")
connect54.setProtoField("set_positionA")

IS53.addConnect(connect54)
connect55 = x3d.connect()
connect55.setNodeField("endB")
connect55.setProtoField("set_positionB")

IS53.addConnect(connect55)

Script49.setIS(IS53)

Script49.setSourceCode('''ecmascript:

                function set_endA(value) {
		    spine = new MFVec3f(value, spine[1]);
                }

                function set_endB(value) {
		    spine = new MFVec3f(spine[0], value);
                }''')

Group44.addChild(Script49)
ROUTE56 = x3d.ROUTE()
ROUTE56.setFromNode("MoveCylinder")
ROUTE56.setFromField("spine")
ROUTE56.setToNode("extrusion")
ROUTE56.setToField("set_spine")

Group44.addChild(ROUTE56)

ProtoBody43.addChild(Group44)

ProtoDeclare39.setProtoBody(ProtoBody43)

Scene9.addChild(ProtoDeclare39)
Transform57 = x3d.Transform()
Transform57.setDEF("HoldsContent")
Transform57.setScale(x3d.doubleToFloat([0.1,0.1,0.1]))
PlaneSensor58 = x3d.PlaneSensor()
PlaneSensor58.setDEF("clickGenerator")
PlaneSensor58.setMinPosition(x3d.doubleToFloat([-50,-50]))
PlaneSensor58.setMaxPosition(x3d.doubleToFloat([50,50]))
PlaneSensor58.setDescription("click on background to add nodes, click on nodes to add links")

Transform57.addChild(PlaneSensor58)
ProtoInstance59 = x3d.ProtoInstance()
ProtoInstance59.setName("node")
ProtoInstance59.setDEF("nodeA")
fieldValue60 = x3d.fieldValue()
fieldValue60.setName("position")
fieldValue60.setValue("0 0 0")

ProtoInstance59.addFieldValue(fieldValue60)

Transform57.addChild(ProtoInstance59)
ProtoInstance61 = x3d.ProtoInstance()
ProtoInstance61.setName("node")
ProtoInstance61.setDEF("nodeB")
fieldValue62 = x3d.fieldValue()
fieldValue62.setName("position")
fieldValue62.setValue("50 50 50")

ProtoInstance61.addFieldValue(fieldValue62)

Transform57.addChild(ProtoInstance61)
ProtoInstance63 = x3d.ProtoInstance()
ProtoInstance63.setName("node")
ProtoInstance63.setDEF("nodeC")
fieldValue64 = x3d.fieldValue()
fieldValue64.setName("position")
fieldValue64.setValue("-50 -50 -50")

ProtoInstance63.addFieldValue(fieldValue64)

Transform57.addChild(ProtoInstance63)
ProtoInstance65 = x3d.ProtoInstance()
ProtoInstance65.setName("node")
ProtoInstance65.setDEF("nodeD")
fieldValue66 = x3d.fieldValue()
fieldValue66.setName("position")
fieldValue66.setValue("50 50 -50")

ProtoInstance65.addFieldValue(fieldValue66)

Transform57.addChild(ProtoInstance65)
ProtoInstance67 = x3d.ProtoInstance()
ProtoInstance67.setName("cyl")
ProtoInstance67.setDEF("linkA")

Transform57.addChild(ProtoInstance67)
ProtoInstance68 = x3d.ProtoInstance()
ProtoInstance68.setName("cyl")
ProtoInstance68.setDEF("linkB")

Transform57.addChild(ProtoInstance68)
ProtoInstance69 = x3d.ProtoInstance()
ProtoInstance69.setName("cyl")
ProtoInstance69.setDEF("linkC")

Transform57.addChild(ProtoInstance69)

Scene9.addChild(Transform57)
Script70 = x3d.Script()
Script70.setDEF("clickHandler")
field71 = x3d.field()
field71.setName("counter")
field71.setAccessType("inputOutput")
field71.setValue("0")
field71.setType("SFInt32")

Script70.addField(field71)
field72 = x3d.field()
field72.setName("node_changed")
field72.setAccessType("outputOnly")
field72.setType("SFNode")

Script70.addField(field72)
field73 = x3d.field()
field73.setName("add_node")
field73.setAccessType("inputOnly")
field73.setValue("false")
field73.setType("SFBool")

Script70.addField(field73)

Script70.addComments(x3d.CommentsBlock('''<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>'''))

Script70.setSourceCode('''ecmascript:
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

Scene9.addChild(Script70)
ROUTE74 = x3d.ROUTE()
ROUTE74.setFromNode("clickGenerator")
ROUTE74.setFromField("isActive")
ROUTE74.setToNode("clickHandler")
ROUTE74.setToField("add_node")

Scene9.addChild(ROUTE74)
ROUTE75 = x3d.ROUTE()
ROUTE75.setFromNode("nodeA")
ROUTE75.setFromField("position")
ROUTE75.setToNode("linkA")
ROUTE75.setToField("set_positionA")

Scene9.addChild(ROUTE75)
ROUTE76 = x3d.ROUTE()
ROUTE76.setFromNode("nodeB")
ROUTE76.setFromField("position")
ROUTE76.setToNode("linkA")
ROUTE76.setToField("set_positionB")

Scene9.addChild(ROUTE76)
ROUTE77 = x3d.ROUTE()
ROUTE77.setFromNode("nodeA")
ROUTE77.setFromField("position")
ROUTE77.setToNode("linkB")
ROUTE77.setToField("set_positionA")

Scene9.addChild(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.setFromNode("nodeC")
ROUTE78.setFromField("position")
ROUTE78.setToNode("linkB")
ROUTE78.setToField("set_positionB")

Scene9.addChild(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.setFromNode("nodeA")
ROUTE79.setFromField("position")
ROUTE79.setToNode("linkC")
ROUTE79.setToField("set_positionA")

Scene9.addChild(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.setFromNode("nodeD")
ROUTE80.setFromField("position")
ROUTE80.setToNode("linkC")
ROUTE80.setToField("set_positionB")

Scene9.addChild(ROUTE80)

X3D0.setScene(Scene9)
X3D0.toFileX3D("../data/forcenode.new.graalpy.x3d")
X3D0.toFileJSON("../data/forcenode.new.graalpy.json")
