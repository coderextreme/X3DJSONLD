# -*- coding: UTF-8 -*-
from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.0")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("flowers2.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("transcriber")
meta4.setContent("John Carlson")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("created")
meta5.setContent("23 January 2005")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("modified")
meta6.setContent("21 March 2018")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("description")
meta7.setContent("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("identifier")
meta8.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("generator")
meta9.setContent("manually written")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("license")
meta10.setContent("http://www.web3d.org/x3d/content/examples/license.html")

head1.addMeta(meta10)

X3D0.setHead(head1)
Scene11 = Scene()
NavigationInfo12 = NavigationInfo()

Scene11.addChildren(NavigationInfo12)
Viewpoint13 = Viewpoint()
Viewpoint13.setDescription("Two mathematical orbitals")
Viewpoint13.setPosition([0,0,50])

Scene11.addChildren(Viewpoint13)
Group14 = Group()
DirectionalLight15 = DirectionalLight()
DirectionalLight15.setDirection([1,1,1])

Group14.addChildren(DirectionalLight15)
ProtoDeclare16 = ProtoDeclare()
ProtoDeclare16.setName("orbit")
ProtoInterface17 = ProtoInterface()
field18 = field()
field18.setName("translation")
field18.setAccessType("inputOutput")
field18.setType("SFVec3f")
field18.setValue("-8 0 0")

ProtoInterface17.addField(field18)
field19 = field()
field19.setName("diffuseColor")
field19.setAccessType("inputOutput")
field19.setType("SFColor")
field19.setValue("1 0.5 0")

ProtoInterface17.addField(field19)
field20 = field()
field20.setName("specularColor")
field20.setAccessType("inputOutput")
field20.setType("SFColor")
field20.setValue("1 0.5 0")

ProtoInterface17.addField(field20)
field21 = field()
field21.setName("transparency")
field21.setAccessType("inputOutput")
field21.setType("SFFloat")
field21.setValue("0.75")

ProtoInterface17.addField(field21)

ProtoDeclare16.setProtoInterface(ProtoInterface17)
ProtoBody22 = ProtoBody()
Group23 = Group()
TimeSensor24 = TimeSensor()
TimeSensor24.setDEF("Clock")
TimeSensor24.setCycleInterval(16)
TimeSensor24.setLoop(True)

Group23.addChildren(TimeSensor24)
OrientationInterpolator25 = OrientationInterpolator()
OrientationInterpolator25.setDEF("OrbitPath")
OrientationInterpolator25.setKey([0,0.5,1])
OrientationInterpolator25.setKeyValue([1,0,0,0,1,0,0,3.14,1,0,0,6.28])

Group23.addChildren(OrientationInterpolator25)
Transform26 = Transform()
Transform26.setDEF("OrbitTransform")
IS27 = IS()
connect28 = connect()
connect28.setNodeField("translation")
connect28.setProtoField("translation")

IS27.addConnect(connect28)

Transform26.setIS(IS27)
Shape29 = Shape()
Appearance30 = Appearance()
Material31 = Material()
IS32 = IS()
connect33 = connect()
connect33.setNodeField("diffuseColor")
connect33.setProtoField("diffuseColor")

IS32.addConnect(connect33)
connect34 = connect()
connect34.setNodeField("specularColor")
connect34.setProtoField("specularColor")

IS32.addConnect(connect34)
connect35 = connect()
connect35.setNodeField("transparency")
connect35.setProtoField("transparency")

IS32.addConnect(connect35)

Material31.setIS(IS32)

Appearance30.setMaterial(Material31)

Shape29.setAppearance(Appearance30)
#<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>
IndexedFaceSet36 = IndexedFaceSet()
IndexedFaceSet36.setCcw(False)
IndexedFaceSet36.setConvex(False)
IndexedFaceSet36.setCoordIndex([0,1,2,-1])
IndexedFaceSet36.setDEF("Orbit")
Coordinate37 = Coordinate()
Coordinate37.setDEF("OrbitCoordinates")
Coordinate37.setPoint([0,0,1,0,1,0,1,0,0])

IndexedFaceSet36.setCoord(Coordinate37)

Shape29.setGeometry(IndexedFaceSet36)

Transform26.addChildren(Shape29)

Group23.addChildren(Transform26)
Script38 = Script()
Script38.setDEF("OrbitScript")
field39 = field()
field39.setName("set_fraction")
field39.setAccessType("inputOnly")
field39.setType("SFFloat")

Script38.addField(field39)
field40 = field()
field40.setName("coordinates")
field40.setAccessType("outputOnly")
field40.setType("MFVec3f")

Script38.addField(field40)
field41 = field()
field41.setName("coordIndexes")
field41.setAccessType("outputOnly")
field41.setType("MFInt32")

Script38.addField(field41)
field42 = field()
field42.setName("e")
field42.setAccessType("outputOnly")
field42.setType("SFFloat")
field42.setValue("5")

Script38.addField(field42)
field43 = field()
field43.setName("f")
field43.setAccessType("outputOnly")
field43.setType("SFFloat")
field43.setValue("5")

Script38.addField(field43)
field44 = field()
field44.setName("g")
field44.setAccessType("outputOnly")
field44.setType("SFFloat")
field44.setValue("5")

Script38.addField(field44)
field45 = field()
field45.setName("h")
field45.setAccessType("outputOnly")
field45.setType("SFFloat")
field45.setValue("5")

Script38.addField(field45)
field46 = field()
field46.setName("resolution")
field46.setAccessType("inputOutput")
field46.setType("SFInt32")
field46.setValue("50")

Script38.addField(field46)

Script38.setSourceCode('''ecmascript:\n"+
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

Group23.addChildren(Script38)
ROUTE47 = ROUTE()
ROUTE47.setFromNode("OrbitScript")
ROUTE47.setFromField("coordIndexes")
ROUTE47.setToNode("Orbit")
ROUTE47.setToField("coordIndex")

Group23.addChildren(ROUTE47)
ROUTE48 = ROUTE()
ROUTE48.setFromNode("OrbitScript")
ROUTE48.setFromField("coordinates")
ROUTE48.setToNode("OrbitCoordinates")
ROUTE48.setToField("point")

Group23.addChildren(ROUTE48)
ROUTE49 = ROUTE()
ROUTE49.setFromNode("Clock")
ROUTE49.setFromField("fraction_changed")
ROUTE49.setToNode("OrbitScript")
ROUTE49.setToField("set_fraction")

Group23.addChildren(ROUTE49)
ROUTE50 = ROUTE()
ROUTE50.setFromNode("OrbitPath")
ROUTE50.setFromField("value_changed")
ROUTE50.setToNode("OrbitTransform")
ROUTE50.setToField("rotation")

Group23.addChildren(ROUTE50)
ROUTE51 = ROUTE()
ROUTE51.setFromNode("Clock")
ROUTE51.setFromField("fraction_changed")
ROUTE51.setToNode("OrbitPath")
ROUTE51.setToField("set_fraction")

Group23.addChildren(ROUTE51)

ProtoBody22.addChildren(Group23)

ProtoDeclare16.setProtoBody(ProtoBody22)

Group14.addChildren(ProtoDeclare16)
ProtoInstance52 = ProtoInstance()
ProtoInstance52.setName("orbit")
fieldValue53 = fieldValue()
fieldValue53.setName("translation")
fieldValue53.setValue("-8 0 0")

ProtoInstance52.addFieldValue(fieldValue53)
fieldValue54 = fieldValue()
fieldValue54.setName("diffuseColor")
fieldValue54.setValue("1 0.5 0")

ProtoInstance52.addFieldValue(fieldValue54)
fieldValue55 = fieldValue()
fieldValue55.setName("specularColor")
fieldValue55.setValue("1 0.5 0")

ProtoInstance52.addFieldValue(fieldValue55)
fieldValue56 = fieldValue()
fieldValue56.setName("transparency")
fieldValue56.setValue("0.75")

ProtoInstance52.addFieldValue(fieldValue56)

Group14.addChildren(ProtoInstance52)
ProtoInstance57 = ProtoInstance()
ProtoInstance57.setName("orbit")
fieldValue58 = fieldValue()
fieldValue58.setName("translation")
fieldValue58.setValue("8 0 0")

ProtoInstance57.addFieldValue(fieldValue58)
fieldValue59 = fieldValue()
fieldValue59.setName("diffuseColor")
fieldValue59.setValue("0 0.5 1")

ProtoInstance57.addFieldValue(fieldValue59)
fieldValue60 = fieldValue()
fieldValue60.setName("specularColor")
fieldValue60.setValue("0 0.5 1")

ProtoInstance57.addFieldValue(fieldValue60)
fieldValue61 = fieldValue()
fieldValue61.setName("transparency")
fieldValue61.setValue("0.5")

ProtoInstance57.addFieldValue(fieldValue61)

Group14.addChildren(ProtoInstance57)

Scene11.addChildren(Group14)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/flowers2.new.x3d")
