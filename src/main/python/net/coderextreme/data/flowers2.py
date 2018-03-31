# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.0")

head1 = headObject()

meta2 = metaObject()
meta2.setName("flowers2.x3d")
meta2.setContent("title")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("transcriber")
meta4.setContent("John Carlson")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("created")
meta5.setContent("23 January 2005")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("modified")
meta6.setContent("21 March 2018")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("description")
meta7.setContent("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("identifier")
meta8.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("generator")
meta9.setContent("manually written")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("license")
meta10.setContent("http://www.web3d.org/x3d/content/examples/license.html")

head1.addMeta(meta10)
X3D0.setHead(head1)
Scene11 = SceneObject()

NavigationInfo12 = NavigationInfoObject()

Scene11.addChild(NavigationInfo12)
Viewpoint13 = ViewpointObject()
Viewpoint13.setDescription("Two mathematical orbitals")
Viewpoint13.setPosition([0,0,50])

Scene11.addChild(Viewpoint13)
Group14 = GroupObject()

DirectionalLight15 = DirectionalLightObject()
DirectionalLight15.setDirection([1,1,1])

Group14.addChild(DirectionalLight15)
TimeSensor16 = TimeSensorObject()
TimeSensor16.setDEF("Clock")
TimeSensor16.setCycleInterval(16)
TimeSensor16.setLoop(True)

Group14.addChild(TimeSensor16)
OrientationInterpolator17 = OrientationInterpolatorObject()
OrientationInterpolator17.setDEF("OrbitPath")
OrientationInterpolator17.setKey([0,0.5,1])
OrientationInterpolator17.setKeyValue([1,0,0,0,1,0,0,3.14,1,0,0,6.28])

Group14.addChild(OrientationInterpolator17)
ProtoDeclare18 = ProtoDeclareObject()
ProtoDeclare18.setName("orbit")

ProtoInterface19 = ProtoInterfaceObject()

field20 = fieldObject()
field20.setType(fieldObject.TYPE_SFVEC3F)
field20.setName("translation")
field20.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field20.setValue("-8 0 0")

ProtoInterface19.addField(field20)
field21 = fieldObject()
field21.setType(fieldObject.TYPE_SFVEC3F)
field21.setName("diffuseColor")
field21.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field21.setValue("1 0.5 0")

ProtoInterface19.addField(field21)
field22 = fieldObject()
field22.setType(fieldObject.TYPE_SFVEC3F)
field22.setName("specularColor")
field22.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field22.setValue("1 0.5 0")

ProtoInterface19.addField(field22)
field23 = fieldObject()
field23.setType(fieldObject.TYPE_SFFLOAT)
field23.setName("transparency")
field23.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field23.setValue("0.75")

ProtoInterface19.addField(field23)
ProtoDeclare18.setProtoInterface(ProtoInterface19)
ProtoBody24 = ProtoBodyObject()

Group25 = GroupObject()

Transform26 = TransformObject()
Transform26.setDEF("OrbitTransform")

IS27 = ISObject()

connect28 = connectObject()
connect28.setNodeField("translation")
connect28.setProtoField("translation")

IS27.addConnect(connect28)
Transform26.setIS(IS27)
Shape29 = ShapeObject()

Appearance30 = AppearanceObject()

Material31 = MaterialObject()

IS32 = ISObject()

connect33 = connectObject()
connect33.setNodeField("diffuseColor")
connect33.setProtoField("diffuseColor")

IS32.addConnect(connect33)
connect34 = connectObject()
connect34.setNodeField("specularColor")
connect34.setProtoField("specularColor")

IS32.addConnect(connect34)
connect35 = connectObject()
connect35.setNodeField("transparency")
connect35.setProtoField("transparency")

IS32.addConnect(connect35)
Material31.setIS(IS32)
Appearance30.setMaterial(Material31)
Shape29.setAppearance(Appearance30)
IndexedFaceSet36 = IndexedFaceSetObject()
IndexedFaceSet36.setDEF("Orbit")

Coordinate37 = CoordinateObject()
Coordinate37.setDEF("OrbitCoordinates")

IndexedFaceSet36.setCoord(Coordinate37)
Shape29.setGeometry(IndexedFaceSet36)
Transform26.addChild(Shape29)
Group25.addChild(Transform26)
Script38 = ScriptObject()
Script38.setDEF("OrbitScript")

field39 = fieldObject()
field39.setType(fieldObject.TYPE_SFFLOAT)
field39.setName("set_fraction")
field39.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script38.addField(field39)
field40 = fieldObject()
field40.setType(fieldObject.TYPE_MFVEC3F)
field40.setName("coordinates")
field40.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script38.addField(field40)
field41 = fieldObject()
field41.setType(fieldObject.TYPE_MFINT32)
field41.setName("coordIndexes")
field41.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script38.addField(field41)
field42 = fieldObject()
field42.setType(fieldObject.TYPE_SFFLOAT)
field42.setName("e")
field42.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field42.setValue("5")

Script38.addField(field42)
field43 = fieldObject()
field43.setType(fieldObject.TYPE_SFFLOAT)
field43.setName("f")
field43.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field43.setValue("5")

Script38.addField(field43)
field44 = fieldObject()
field44.setType(fieldObject.TYPE_SFFLOAT)
field44.setName("g")
field44.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field44.setValue("5")

Script38.addField(field44)
field45 = fieldObject()
field45.setType(fieldObject.TYPE_SFFLOAT)
field45.setName("h")
field45.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field45.setValue("5")

Script38.addField(field45)
field46 = fieldObject()
field46.setType(fieldObject.TYPE_SFINT32)
field46.setName("resolution")
field46.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field46.setValue("50")

Script38.addField(field46)

Script38.setSourceCode("\n"+
"			\n"+
"			ecmascript:\n"+
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
"			     for ( i = 0; i < resolution-1; i++) {\n"+
"				for ( j = 0; j < resolution-1; j++) {\n"+
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
"			     theta = 0.0;\n"+
"			     phi = 0.0;\n"+
"			     delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     var localc = [];\n"+
"			     for ( i = 0; i < resolution; i++) {\n"+
"				for ( j = 0; j < resolution; j++) {\n"+
"					rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
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
"				choice = Math.floor(Math.random() * 4);\n"+
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
"			}\n"+
"			      \n"+
"")
Group25.addChild(Script38)
ROUTE47 = ROUTEObject()
ROUTE47.setFromNode("OrbitScript")
ROUTE47.setFromField("coordIndexes")
ROUTE47.setToNode("Orbit")
ROUTE47.setToField("coordIndex")

Group25.addChild(ROUTE47)
ROUTE48 = ROUTEObject()
ROUTE48.setFromNode("OrbitScript")
ROUTE48.setFromField("coordinates")
ROUTE48.setToNode("OrbitCoordinates")
ROUTE48.setToField("point")

Group25.addChild(ROUTE48)
ROUTE49 = ROUTEObject()
ROUTE49.setFromNode("Clock")
ROUTE49.setFromField("fraction_changed")
ROUTE49.setToNode("OrbitScript")
ROUTE49.setToField("set_fraction")

Group25.addChild(ROUTE49)
ROUTE50 = ROUTEObject()
ROUTE50.setFromNode("OrbitPath")
ROUTE50.setFromField("value_changed")
ROUTE50.setToNode("OrbitTransform")
ROUTE50.setToField("rotation")

Group25.addChild(ROUTE50)
ProtoBody24.addChild(Group25)
ProtoDeclare18.setProtoBody(ProtoBody24)
Group14.addChild(ProtoDeclare18)
ProtoInstance51 = ProtoInstanceObject()
ProtoInstance51.setName("orbit")

fieldValue52 = fieldValueObject()
fieldValue52.setName("translation")
fieldValue52.setValue("-8 0 0")

ProtoInstance51.addFieldValue(fieldValue52)
fieldValue53 = fieldValueObject()
fieldValue53.setName("diffuseColor")
fieldValue53.setValue("1 0.5 0")

ProtoInstance51.addFieldValue(fieldValue53)
fieldValue54 = fieldValueObject()
fieldValue54.setName("specularColor")
fieldValue54.setValue("1 0.5 0")

ProtoInstance51.addFieldValue(fieldValue54)
fieldValue55 = fieldValueObject()
fieldValue55.setName("transparency")
fieldValue55.setValue("0.75")

ProtoInstance51.addFieldValue(fieldValue55)
Group14.addChild(ProtoInstance51)
ProtoInstance56 = ProtoInstanceObject()
ProtoInstance56.setName("orbit")

fieldValue57 = fieldValueObject()
fieldValue57.setName("translation")
fieldValue57.setValue("8 0 0")

ProtoInstance56.addFieldValue(fieldValue57)
fieldValue58 = fieldValueObject()
fieldValue58.setName("diffuseColor")
fieldValue58.setValue("0 0.5 1")

ProtoInstance56.addFieldValue(fieldValue58)
fieldValue59 = fieldValueObject()
fieldValue59.setName("specularColor")
fieldValue59.setValue("0 0.5 1")

ProtoInstance56.addFieldValue(fieldValue59)
fieldValue60 = fieldValueObject()
fieldValue60.setName("transparency")
fieldValue60.setValue("0.5")

ProtoInstance56.addFieldValue(fieldValue60)
Group14.addChild(ProtoInstance56)
ROUTE61 = ROUTEObject()
ROUTE61.setFromNode("Clock")
ROUTE61.setFromField("fraction_changed")
ROUTE61.setToNode("OrbitPath")
ROUTE61.setToField("set_fraction")

Group14.addChild(ROUTE61)
Scene11.addChild(Group14)
X3D0.setScene(Scene11)

X3D0.toFileX3D("../data/flowers2.new.x3d")
