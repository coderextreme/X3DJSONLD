import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Scripting")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("flowers2.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("John Carlson")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("created")
meta5.setContent("23 January 2005")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("modified")
meta6.setContent("9 November 2024")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("description")
meta7.setContent("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("identifier")
meta8.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("generator")
meta9.setContent("manually written")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("license")
meta10.setContent("https://www.web3d.org/x3d/content/examples/license.html")

head1.addMeta(meta10)

X3D0.setHead(head1)
Scene11 = x3d.Scene()
NavigationInfo12 = x3d.NavigationInfo()

Scene11.addChildren(NavigationInfo12)
Viewpoint13 = x3d.Viewpoint()
Viewpoint13.setDescription("Two mathematical orbitals")
Viewpoint13.setPosition([0,0,50])

Scene11.addChildren(Viewpoint13)
Group14 = x3d.Group()
DirectionalLight15 = x3d.DirectionalLight()
DirectionalLight15.setDirection([1,1,1])

Group14.addChildren(DirectionalLight15)
ProtoDeclare16 = x3d.ProtoDeclare()
ProtoDeclare16.setName("orbit")
ProtoInterface17 = x3d.ProtoInterface()
field18 = x3d.field()
field18.setName("translation")
field18.setAccessType("inputOutput")
field18.setType("SFVec3f")
field18.setValue("-8 0 0")

ProtoInterface17.addField(field18)
field19 = x3d.field()
field19.setName("diffuseColor")
field19.setAccessType("inputOutput")
field19.setType("SFColor")
field19.setValue("1 0.5 0")

ProtoInterface17.addField(field19)
field20 = x3d.field()
field20.setName("specularColor")
field20.setAccessType("inputOutput")
field20.setType("SFColor")
field20.setValue("1 0.5 0")

ProtoInterface17.addField(field20)
field21 = x3d.field()
field21.setName("transparency")
field21.setAccessType("inputOutput")
field21.setType("SFFloat")
field21.setValue("0.75")

ProtoInterface17.addField(field21)

ProtoDeclare16.setProtoInterface(ProtoInterface17)
ProtoBody22 = x3d.ProtoBody()
Group23 = x3d.Group()
TimeSensor24 = x3d.TimeSensor()
TimeSensor24.setDEF("Clock")
TimeSensor24.setCycleInterval(16)
TimeSensor24.setLoop(True)

Group23.addChildren(TimeSensor24)
OrientationInterpolator25 = x3d.OrientationInterpolator()
OrientationInterpolator25.setDEF("OrbitPath")
OrientationInterpolator25.setKey([0,0.5,1])
OrientationInterpolator25.setKeyValue([1,0,0,0,1,0,0,3.14,1,0,0,6.28])

Group23.addChildren(OrientationInterpolator25)
Transform26 = x3d.Transform()
Transform26.setDEF("OrbitTransform")
IS27 = x3d.IS()
connect28 = x3d.connect()
connect28.setNodeField("translation")
connect28.setProtoField("translation")

IS27.addConnect(connect28)

Transform26.setIS(IS27)
Shape29 = x3d.Shape()
Appearance30 = x3d.Appearance()
Material31 = x3d.Material()
IS32 = x3d.IS()
connect33 = x3d.connect()
connect33.setNodeField("diffuseColor")
connect33.setProtoField("diffuseColor")

IS32.addConnect(connect33)
connect34 = x3d.connect()
connect34.setNodeField("specularColor")
connect34.setProtoField("specularColor")

IS32.addConnect(connect34)
connect35 = x3d.connect()
connect35.setNodeField("transparency")
connect35.setProtoField("transparency")

IS32.addConnect(connect35)

Material31.setIS(IS32)

Appearance30.setMaterial(Material31)

Shape29.setAppearance(Appearance30)
#<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>
IndexedFaceSet36 = x3d.IndexedFaceSet()
IndexedFaceSet36.setCcw(False)
IndexedFaceSet36.setConvex(False)
IndexedFaceSet36.setCoordIndex([0,1,2,-1])
IndexedFaceSet36.setDEF("Orbit")
Coordinate37 = x3d.Coordinate()
Coordinate37.setDEF("OrbitCoordinates")
Coordinate37.setPoint([0,0,1,0,1,0,1,0,0])

IndexedFaceSet36.setCoord(Coordinate37)

Shape29.setGeometry(IndexedFaceSet36)

Transform26.addChild(Shape29)

Group23.addChildren(Transform26)
Script38 = x3d.Script()
Script38.setDEF("OrbitScript")
field39 = x3d.field()
field39.setName("set_fraction")
field39.setAccessType("inputOnly")
field39.setType("SFFloat")

Script38.addField(field39)
field40 = x3d.field()
field40.setName("coordinates")
field40.setAccessType("inputOutput")
field40.setType("MFVec3f")

Script38.addField(field40)
field41 = x3d.field()
field41.setName("coordIndexes")
field41.setAccessType("inputOutput")
field41.setType("MFInt32")

Script38.addField(field41)
field42 = x3d.field()
field42.setName("e")
field42.setAccessType("inputOutput")
field42.setType("SFFloat")
field42.setValue("5")

Script38.addField(field42)
field43 = x3d.field()
field43.setName("f")
field43.setAccessType("inputOutput")
field43.setType("SFFloat")
field43.setValue("5")

Script38.addField(field43)
field44 = x3d.field()
field44.setName("g")
field44.setAccessType("inputOutput")
field44.setType("SFFloat")
field44.setValue("5")

Script38.addField(field44)
field45 = x3d.field()
field45.setName("h")
field45.setAccessType("inputOutput")
field45.setType("SFFloat")
field45.setValue("5")

Script38.addField(field45)
field46 = x3d.field()
field46.setName("resolution")
field46.setAccessType("inputOutput")
field46.setType("SFInt32")
field46.setValue("50")

Script38.addField(field46)

Script38.setSourceCode('''ecmascript:\n"+
"\n"+
"			function initialize() {\n"+
"			     generateCoordinates();\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution-1; i++) {\n"+
"				for (var j = 0; j < resolution-1; j++) {\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = -1;\n"+
"				}\n"+
"			    }\n"+
"			}\n"+
"\n"+
"			function generateCoordinates() {\n"+
"			     var theta = 0.0;\n"+
"			     var phi = 0.0;\n"+
"			     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution; i++) {\n"+
"				for (var j = 0; j < resolution; j++) {\n"+
"					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"					coordinates[arrIndex++] = new SFVec3f(\n"+
"						rho * Math.cos(phi) * Math.cos(theta),\n"+
"						rho * Math.cos(phi) * Math.sin(theta),\n"+
"						rho * Math.sin(phi)\n"+
"					);\n"+
"					theta += delta;\n"+
"				}\n"+
"				phi += delta;\n"+
"			     }\n"+
"			}\n"+
"\n"+
"			function set_fraction(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 1:\n"+
"					f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 2:\n"+
"					g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				if (e < 1) {\n"+
"					f = 10;\n"+
"				}\n"+
"				if (f < 1) {\n"+
"					f = 10;\n"+
"				}\n"+
"				if (g < 1) {\n"+
"					g = 4;\n"+
"				}\n"+
"				if (h < 1) {\n"+
"					h = 4;\n"+
"				}\n"+
"				generateCoordinates();\n"+
"			}''')

Group23.addChildren(Script38)
ROUTE47 = x3d.ROUTE()
ROUTE47.setFromNode("OrbitScript")
ROUTE47.setFromField("coordIndexes")
ROUTE47.setToNode("Orbit")
ROUTE47.setToField("set_coordIndex")

Group23.addChildren(ROUTE47)
ROUTE48 = x3d.ROUTE()
ROUTE48.setFromNode("OrbitScript")
ROUTE48.setFromField("coordinates")
ROUTE48.setToNode("OrbitCoordinates")
ROUTE48.setToField("point")

Group23.addChildren(ROUTE48)
ROUTE49 = x3d.ROUTE()
ROUTE49.setFromNode("Clock")
ROUTE49.setFromField("fraction_changed")
ROUTE49.setToNode("OrbitScript")
ROUTE49.setToField("set_fraction")

Group23.addChildren(ROUTE49)
ROUTE50 = x3d.ROUTE()
ROUTE50.setFromNode("OrbitPath")
ROUTE50.setFromField("value_changed")
ROUTE50.setToNode("OrbitTransform")
ROUTE50.setToField("rotation")

Group23.addChildren(ROUTE50)
ROUTE51 = x3d.ROUTE()
ROUTE51.setFromNode("Clock")
ROUTE51.setFromField("fraction_changed")
ROUTE51.setToNode("OrbitPath")
ROUTE51.setToField("set_fraction")

Group23.addChildren(ROUTE51)

ProtoBody22.addChildren(Group23)

ProtoDeclare16.setProtoBody(ProtoBody22)

Group14.addChildren(ProtoDeclare16)
ProtoInstance52 = x3d.ProtoInstance()
ProtoInstance52.setName("orbit")
fieldValue53 = x3d.fieldValue()
fieldValue53.setName("translation")
fieldValue53.setValue("-8 0 0")

ProtoInstance52.addFieldValue(fieldValue53)
fieldValue54 = x3d.fieldValue()
fieldValue54.setName("diffuseColor")
fieldValue54.setValue("1 0.5 0")

ProtoInstance52.addFieldValue(fieldValue54)
fieldValue55 = x3d.fieldValue()
fieldValue55.setName("specularColor")
fieldValue55.setValue("1 0.5 0")

ProtoInstance52.addFieldValue(fieldValue55)
fieldValue56 = x3d.fieldValue()
fieldValue56.setName("transparency")
fieldValue56.setValue("0.75")

ProtoInstance52.addFieldValue(fieldValue56)

Group14.addChildren(ProtoInstance52)
ProtoInstance57 = x3d.ProtoInstance()
ProtoInstance57.setName("orbit")
fieldValue58 = x3d.fieldValue()
fieldValue58.setName("translation")
fieldValue58.setValue("8 0 0")

ProtoInstance57.addFieldValue(fieldValue58)
fieldValue59 = x3d.fieldValue()
fieldValue59.setName("diffuseColor")
fieldValue59.setValue("0 0.5 1")

ProtoInstance57.addFieldValue(fieldValue59)
fieldValue60 = x3d.fieldValue()
fieldValue60.setName("specularColor")
fieldValue60.setValue("0 0.5 1")

ProtoInstance57.addFieldValue(fieldValue60)
fieldValue61 = x3d.fieldValue()
fieldValue61.setName("transparency")
fieldValue61.setValue("0.5")

ProtoInstance57.addFieldValue(fieldValue61)

Group14.addChildren(ProtoInstance57)

Scene11.addChildren(Group14)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/flowers2.new.python.x3d")
X3D0.toFileJSON("../data/flowers2.new.python.json")
