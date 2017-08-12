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
meta3.setName("author")
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
meta6.setContent("05 May 2017")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("description")
meta7.setContent("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("url")
meta8.setContent("https://coderextreme.net/x3d/flowers2.x3d")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("generator")
meta9.setContent("manually written")

head1.addMeta(meta9)
X3D0.setHead(head1)
Scene10 = SceneObject()

NavigationInfo11 = NavigationInfoObject()

Scene10.addChild(NavigationInfo11)
Viewpoint12 = ViewpointObject()
Viewpoint12.setDescription("Two mathematical orbitals")
Viewpoint12.setPosition([0,0,50])

Scene10.addChild(Viewpoint12)
Group13 = GroupObject()

DirectionalLight14 = DirectionalLightObject()
DirectionalLight14.setDirection([1,1,1])

Group13.addChild(DirectionalLight14)
Transform15 = TransformObject()
Transform15.setDEF("OrbitTransform")
Transform15.setTranslation([8,0,0])

Shape16 = ShapeObject()

Appearance17 = AppearanceObject()

Material18 = MaterialObject()
Material18.setDiffuseColor([0,0.5,1])
Material18.setSpecularColor([0,0.5,1])

Appearance17.setMaterial(Material18)
Shape16.setAppearance(Appearance17)
IndexedFaceSet19 = IndexedFaceSetObject()
IndexedFaceSet19.setConvex(False)
IndexedFaceSet19.setDEF("Orbit")

Coordinate20 = CoordinateObject()
Coordinate20.setDEF("OrbitCoordinates")

IndexedFaceSet19.setCoord(Coordinate20)
Shape16.setGeometry(IndexedFaceSet19)
Transform15.addChild(Shape16)
Group13.addChild(Transform15)
Transform21 = TransformObject()
Transform21.setDEF("OrbitTransform2")
Transform21.setTranslation([-8,0,0])

Shape22 = ShapeObject()

Appearance23 = AppearanceObject()

Material24 = MaterialObject()
Material24.setDiffuseColor([1,0.5,0])
Material24.setSpecularColor([1,0.5,0])
Material24.setTransparency(0.75)

Appearance23.setMaterial(Material24)
Shape22.setAppearance(Appearance23)
IndexedFaceSet25 = IndexedFaceSetObject()
IndexedFaceSet25.setDEF("Orbit2")

Coordinate26 = CoordinateObject()
Coordinate26.setDEF("OrbitCoordinates2")

IndexedFaceSet25.setCoord(Coordinate26)
Shape22.setGeometry(IndexedFaceSet25)
Transform21.addChild(Shape22)
Group13.addChild(Transform21)
TimeSensor27 = TimeSensorObject()
TimeSensor27.setDEF("Clock")
TimeSensor27.setCycleInterval(16)
TimeSensor27.setLoop(True)

Group13.addChild(TimeSensor27)
OrientationInterpolator28 = OrientationInterpolatorObject()
OrientationInterpolator28.setDEF("OrbitPath")
OrientationInterpolator28.setKey([0,0.5,1])
OrientationInterpolator28.setKeyValue([1,0,0,0,1,0,0,3.14,1,0,0,6.28])

Group13.addChild(OrientationInterpolator28)
Script29 = ScriptObject()
Script29.setDEF("OrbitScript")

field30 = fieldObject()
field30.setType(fieldObject.TYPE_SFFLOAT)
field30.setName("set_fraction")
field30.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script29.addField(field30)
field31 = fieldObject()
field31.setType(fieldObject.TYPE_MFVEC3F)
field31.setName("coordinates")
field31.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script29.addField(field31)
field32 = fieldObject()
field32.setType(fieldObject.TYPE_MFINT32)
field32.setName("coordIndexes")
field32.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script29.addField(field32)

Script29.setSourceCode("ecmascript:\n"+
"\n"+
"var e = 5;\n"+
"var f = 5;\n"+
"var g = 5;\n"+
"var h = 5;\n"+
"\n"+
"function initialize() {\n"+
"     resolution = 100;\n"+
"     generateCoordinates(resolution);\n"+
"     var localci = [];\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     localci.push(i*resolution+j);\n"+
"	     localci.push(i*resolution+j+1);\n"+
"	     localci.push((i+1)*resolution+j+1);\n"+
"	     localci.push((i+1)*resolution+j);\n"+
"	     localci.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = new MFInt32(localci);\n"+
"}\n"+
"\n"+
"function generateCoordinates(resolution) {\n"+
"     theta = 0.0;\n"+
"     phi = 0.0;\n"+
"     delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var localc = [];\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		localc.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = new MFVec3f(localc);\n"+
"}\n"+
"\n"+
"function set_fraction(fraction, eventTime) {\n"+
"	choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	if (f < 1) {\n"+
"		f = 10;\n"+
"	}\n"+
"	if (g < 1) {\n"+
"		g = 4;\n"+
"	}\n"+
"	if (h < 1) {\n"+
"		h = 4;\n"+
"	}\n"+
"	resolution = 100;\n"+
"	generateCoordinates(resolution);\n"+
"}\n"+
"")
Group13.addChild(Script29)
Script33 = ScriptObject()
Script33.setDEF("OrbitScript2")

field34 = fieldObject()
field34.setType(fieldObject.TYPE_SFFLOAT)
field34.setName("set_fraction")
field34.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script33.addField(field34)
field35 = fieldObject()
field35.setType(fieldObject.TYPE_MFVEC3F)
field35.setName("coordinates")
field35.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script33.addField(field35)
field36 = fieldObject()
field36.setType(fieldObject.TYPE_MFINT32)
field36.setName("coordIndexes")
field36.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script33.addField(field36)

Script33.setSourceCode("ecmascript:\n"+
"\n"+
"var e = 5;\n"+
"var f = 5;\n"+
"var g = 5;\n"+
"var h = 5;\n"+
"\n"+
"function initialize() {\n"+
"     resolution = 100;\n"+
"     generateCoordinates(resolution);\n"+
"     var localci = [];\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     localci.push(i*resolution+j);\n"+
"	     localci.push(i*resolution+j+1);\n"+
"	     localci.push((i+1)*resolution+j+1);\n"+
"	     localci.push((i+1)*resolution+j);\n"+
"	     localci.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = new MFInt32(localci);\n"+
"}\n"+
"\n"+
"function generateCoordinates(resolution) {\n"+
"     theta = 0.0;\n"+
"     phi = 0.0;\n"+
"     delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var localc = [];\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		localc.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     \n"+
"     coordinates = new MFVec3f(localc);\n"+
"}\n"+
"\n"+
"function set_fraction(fraction, eventTime) {\n"+
"	choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	if (f < 1) {\n"+
"		f = 10;\n"+
"	}\n"+
"	if (g < 1) {\n"+
"		g = 4;\n"+
"	}\n"+
"	if (h < 1) {\n"+
"		h = 4;\n"+
"	}\n"+
"	resolution = 100;\n"+
"	generateCoordinates(resolution);\n"+
"}\n"+
"")
Group13.addChild(Script33)
Scene10.addChild(Group13)
ROUTE37 = ROUTEObject()
ROUTE37.setFromField("coordIndexes")
ROUTE37.setFromNode("OrbitScript")
ROUTE37.setToField("coordIndex")
ROUTE37.setToNode("Orbit")

Scene10.addChild(ROUTE37)
ROUTE38 = ROUTEObject()
ROUTE38.setFromField("coordinates")
ROUTE38.setFromNode("OrbitScript")
ROUTE38.setToField("point")
ROUTE38.setToNode("OrbitCoordinates")

Scene10.addChild(ROUTE38)
ROUTE39 = ROUTEObject()
ROUTE39.setFromField("fraction_changed")
ROUTE39.setFromNode("Clock")
ROUTE39.setToField("set_fraction")
ROUTE39.setToNode("OrbitScript")

Scene10.addChild(ROUTE39)
ROUTE40 = ROUTEObject()
ROUTE40.setFromField("coordIndexes")
ROUTE40.setFromNode("OrbitScript2")
ROUTE40.setToField("coordIndex")
ROUTE40.setToNode("Orbit2")

Scene10.addChild(ROUTE40)
ROUTE41 = ROUTEObject()
ROUTE41.setFromField("coordinates")
ROUTE41.setFromNode("OrbitScript2")
ROUTE41.setToField("point")
ROUTE41.setToNode("OrbitCoordinates2")

Scene10.addChild(ROUTE41)
ROUTE42 = ROUTEObject()
ROUTE42.setFromField("fraction_changed")
ROUTE42.setFromNode("Clock")
ROUTE42.setToField("set_fraction")
ROUTE42.setToNode("OrbitScript2")

Scene10.addChild(ROUTE42)
ROUTE43 = ROUTEObject()
ROUTE43.setFromField("fraction_changed")
ROUTE43.setFromNode("Clock")
ROUTE43.setToField("set_fraction")
ROUTE43.setToNode("OrbitPath")

Scene10.addChild(ROUTE43)
ROUTE44 = ROUTEObject()
ROUTE44.setFromField("value_changed")
ROUTE44.setFromNode("OrbitPath")
ROUTE44.setToField("rotation")
ROUTE44.setToNode("OrbitTransform")

Scene10.addChild(ROUTE44)
ROUTE45 = ROUTEObject()
ROUTE45.setFromField("value_changed")
ROUTE45.setFromNode("OrbitPath")
ROUTE45.setToField("rotation")
ROUTE45.setToNode("OrbitTransform2")

Scene10.addChild(ROUTE45)
X3D0.setScene(Scene10)

X3D0.toFileX3D("../data/flowers2.new.x3d")
