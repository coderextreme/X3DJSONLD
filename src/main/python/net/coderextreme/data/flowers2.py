import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.0")
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
meta5.setName("transcriber")
meta5.setContent("John Carlson")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("created")
meta6.setContent("23 January 2005")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("21 March 2018")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("description")
meta8.setContent("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("identifier")
meta9.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("generator")
meta10.setContent("manually written")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("license")
meta11.setContent("https://www.web3d.org/x3d/content/examples/license.html")

head1.addMeta(meta11)

X3D0.setHead(head1)
Scene12 = x3d.Scene()
NavigationInfo13 = x3d.NavigationInfo()

Scene12.addChildren(NavigationInfo13)
Viewpoint14 = x3d.Viewpoint()
Viewpoint14.setDescription("Two mathematical orbitals")
Viewpoint14.setPosition([0,0,50])

Scene12.addChildren(Viewpoint14)
Group15 = x3d.Group()
DirectionalLight16 = x3d.DirectionalLight()
DirectionalLight16.setDirection([1,1,1])

Group15.addChildren(DirectionalLight16)
ProtoDeclare17 = x3d.ProtoDeclare()
ProtoDeclare17.setName("orbit")
ProtoInterface18 = x3d.ProtoInterface()
field19 = x3d.field()
field19.setName("translation")
field19.setAccessType("inputOutput")
field19.setType("SFVec3f")
field19.setValue("-8 0 0")

ProtoInterface18.addField(field19)
field20 = x3d.field()
field20.setName("diffuseColor")
field20.setAccessType("inputOutput")
field20.setType("SFColor")
field20.setValue("1 0.5 0")

ProtoInterface18.addField(field20)
field21 = x3d.field()
field21.setName("specularColor")
field21.setAccessType("inputOutput")
field21.setType("SFColor")
field21.setValue("1 0.5 0")

ProtoInterface18.addField(field21)
field22 = x3d.field()
field22.setName("transparency")
field22.setAccessType("inputOutput")
field22.setType("SFFloat")
field22.setValue("0.75")

ProtoInterface18.addField(field22)

ProtoDeclare17.setProtoInterface(ProtoInterface18)
ProtoBody23 = x3d.ProtoBody()
Group24 = x3d.Group()
TimeSensor25 = x3d.TimeSensor()
TimeSensor25.setDEF("Clock")
TimeSensor25.setCycleInterval(16)
TimeSensor25.setLoop(True)

Group24.addChildren(TimeSensor25)
OrientationInterpolator26 = x3d.OrientationInterpolator()
OrientationInterpolator26.setDEF("OrbitPath")
OrientationInterpolator26.setKey([0,0.5,1])
OrientationInterpolator26.setKeyValue([1,0,0,0,1,0,0,3.14,1,0,0,6.28])

Group24.addChildren(OrientationInterpolator26)
Transform27 = x3d.Transform()
Transform27.setDEF("OrbitTransform")
IS28 = x3d.IS()
connect29 = x3d.connect()
connect29.setNodeField("translation")
connect29.setProtoField("translation")

IS28.addConnect(connect29)

Transform27.setIS(IS28)
Shape30 = x3d.Shape()
Appearance31 = x3d.Appearance()
Material32 = x3d.Material()
IS33 = x3d.IS()
connect34 = x3d.connect()
connect34.setNodeField("diffuseColor")
connect34.setProtoField("diffuseColor")

IS33.addConnect(connect34)
connect35 = x3d.connect()
connect35.setNodeField("specularColor")
connect35.setProtoField("specularColor")

IS33.addConnect(connect35)
connect36 = x3d.connect()
connect36.setNodeField("transparency")
connect36.setProtoField("transparency")

IS33.addConnect(connect36)

Material32.setIS(IS33)

Appearance31.setMaterial(Material32)

Shape30.setAppearance(Appearance31)
#<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>
IndexedFaceSet37 = x3d.IndexedFaceSet()
IndexedFaceSet37.setCcw(False)
IndexedFaceSet37.setConvex(False)
IndexedFaceSet37.setCoordIndex([0,1,2,-1])
IndexedFaceSet37.setDEF("Orbit")
Coordinate38 = x3d.Coordinate()
Coordinate38.setDEF("OrbitCoordinates")
Coordinate38.setPoint([0,0,1,0,1,0,1,0,0])

IndexedFaceSet37.setCoord(Coordinate38)

Shape30.setGeometry(IndexedFaceSet37)

Transform27.addChildren(Shape30)

Group24.addChildren(Transform27)
Script39 = x3d.Script()
Script39.setDEF("OrbitScript")
field40 = x3d.field()
field40.setName("set_fraction")
field40.setAccessType("inputOnly")
field40.setType("SFFloat")

Script39.addField(field40)
field41 = x3d.field()
field41.setName("coordinates")
field41.setAccessType("outputOnly")
field41.setType("MFVec3f")

Script39.addField(field41)
field42 = x3d.field()
field42.setName("coordIndexes")
field42.setAccessType("outputOnly")
field42.setType("MFInt32")

Script39.addField(field42)
field43 = x3d.field()
field43.setName("e")
field43.setAccessType("inputOutput")
field43.setType("SFFloat")
field43.setValue("5")

Script39.addField(field43)
field44 = x3d.field()
field44.setName("f")
field44.setAccessType("inputOutput")
field44.setType("SFFloat")
field44.setValue("5")

Script39.addField(field44)
field45 = x3d.field()
field45.setName("g")
field45.setAccessType("inputOutput")
field45.setType("SFFloat")
field45.setValue("5")

Script39.addField(field45)
field46 = x3d.field()
field46.setName("h")
field46.setAccessType("inputOutput")
field46.setType("SFFloat")
field46.setValue("5")

Script39.addField(field46)
field47 = x3d.field()
field47.setName("resolution")
field47.setAccessType("inputOutput")
field47.setType("SFInt32")
field47.setValue("50")

Script39.addField(field47)

Script39.setSourceCode('''ecmascript:\n"+
"\n"+
"			var e = 5;\n"+
"			var f = 5;\n"+
"			var g = 5;\n"+
"			var h = 5;\n"+
"			var resolution = 100;\n"+
"\n"+
"			function initialize() {\n"+
"			     generateCoordinates();\n"+
"			     var localci = [];\n"+
"			     for (var i = 0; i < resolution-1; i++) {\n"+
"				for (var j = 0; j < resolution-1; j++) {\n"+
"				     localci.push(i*resolution+j);\n"+
"				     localci.push(i*resolution+j+1);\n"+
"				     localci.push((i+1)*resolution+j+1);\n"+
"				     localci.push((i+1)*resolution+j);\n"+
"				     localci.push(-1);\n"+
"				}\n"+
"			    }\n"+
"			    coordIndexes = new MFInt32(localci);\n"+
"			}\n"+
"\n"+
"			function generateCoordinates() {\n"+
"			     var theta = 0.0;\n"+
"			     var phi = 0.0;\n"+
"			     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     var localc = [];\n"+
"			     for (var i = 0; i < resolution; i++) {\n"+
"				for (var j = 0; j < resolution; j++) {\n"+
"					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"					localc.push(new SFVec3f(\n"+
"						rho * Math.cos(phi) * Math.cos(theta),\n"+
"						rho * Math.cos(phi) * Math.sin(theta),\n"+
"						rho * Math.sin(phi)\n"+
"					));\n"+
"					theta += delta;\n"+
"				}\n"+
"				phi += delta;\n"+
"			     }\n"+
"			     \n"+
"			     coordinates = new MFVec3f(localc);\n"+
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

Group24.addChildren(Script39)
ROUTE48 = x3d.ROUTE()
ROUTE48.setFromNode("OrbitScript")
ROUTE48.setFromField("coordIndexes")
ROUTE48.setToNode("Orbit")
ROUTE48.setToField("set_coordIndex")

Group24.addChildren(ROUTE48)
ROUTE49 = x3d.ROUTE()
ROUTE49.setFromNode("OrbitScript")
ROUTE49.setFromField("coordinates")
ROUTE49.setToNode("OrbitCoordinates")
ROUTE49.setToField("point")

Group24.addChildren(ROUTE49)
ROUTE50 = x3d.ROUTE()
ROUTE50.setFromNode("Clock")
ROUTE50.setFromField("fraction_changed")
ROUTE50.setToNode("OrbitScript")
ROUTE50.setToField("set_fraction")

Group24.addChildren(ROUTE50)
ROUTE51 = x3d.ROUTE()
ROUTE51.setFromNode("OrbitPath")
ROUTE51.setFromField("value_changed")
ROUTE51.setToNode("OrbitTransform")
ROUTE51.setToField("rotation")

Group24.addChildren(ROUTE51)
ROUTE52 = x3d.ROUTE()
ROUTE52.setFromNode("Clock")
ROUTE52.setFromField("fraction_changed")
ROUTE52.setToNode("OrbitPath")
ROUTE52.setToField("set_fraction")

Group24.addChildren(ROUTE52)

ProtoBody23.addChildren(Group24)

ProtoDeclare17.setProtoBody(ProtoBody23)

Group15.addChildren(ProtoDeclare17)
ProtoInstance53 = x3d.ProtoInstance()
ProtoInstance53.setName("orbit")
fieldValue54 = x3d.fieldValue()
fieldValue54.setName("translation")
fieldValue54.setValue("-8 0 0")

ProtoInstance53.addFieldValue(fieldValue54)
fieldValue55 = x3d.fieldValue()
fieldValue55.setName("diffuseColor")
fieldValue55.setValue("1 0.5 0")

ProtoInstance53.addFieldValue(fieldValue55)
fieldValue56 = x3d.fieldValue()
fieldValue56.setName("specularColor")
fieldValue56.setValue("1 0.5 0")

ProtoInstance53.addFieldValue(fieldValue56)
fieldValue57 = x3d.fieldValue()
fieldValue57.setName("transparency")
fieldValue57.setValue("0.75")

ProtoInstance53.addFieldValue(fieldValue57)

Group15.addChildren(ProtoInstance53)
ProtoInstance58 = x3d.ProtoInstance()
ProtoInstance58.setName("orbit")
fieldValue59 = x3d.fieldValue()
fieldValue59.setName("translation")
fieldValue59.setValue("8 0 0")

ProtoInstance58.addFieldValue(fieldValue59)
fieldValue60 = x3d.fieldValue()
fieldValue60.setName("diffuseColor")
fieldValue60.setValue("0 0.5 1")

ProtoInstance58.addFieldValue(fieldValue60)
fieldValue61 = x3d.fieldValue()
fieldValue61.setName("specularColor")
fieldValue61.setValue("0 0.5 1")

ProtoInstance58.addFieldValue(fieldValue61)
fieldValue62 = x3d.fieldValue()
fieldValue62.setName("transparency")
fieldValue62.setValue("0.5")

ProtoInstance58.addFieldValue(fieldValue62)

Group15.addChildren(ProtoInstance58)

Scene12.addChildren(Group15)

X3D0.setScene(Scene12)
X3D0.toFileX3D("../data/flowers2_RoundTrip.x3d")
