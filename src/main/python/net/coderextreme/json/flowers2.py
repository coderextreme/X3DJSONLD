from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.0")
head1 = headObject()
meta2 = metaObject().setName("flowers2.x3d").setContent("title")
head1.addMeta(meta2)
meta3 = metaObject().setName("author").setContent("John Carlson")
head1.addMeta(meta3)
meta4 = metaObject().setName("transcriber").setContent("John Carlson")
head1.addMeta(meta4)
meta5 = metaObject().setName("created").setContent("23 January 2005")
head1.addMeta(meta5)
meta6 = metaObject().setName("modified").setContent("05 May 2017")
head1.addMeta(meta6)
meta7 = metaObject().setName("description").setContent("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)")
head1.addMeta(meta7)
meta8 = metaObject().setName("url").setContent("http://coderextreme.net/x3d/flowers2.x3d")
head1.addMeta(meta8)
meta9 = metaObject().setName("generator").setContent("manually written")
head1.addMeta(meta9)
X3D0.setHead(head1)
Scene10 = SceneObject()
NavigationInfo11 = NavigationInfoObject()
Scene10.addChild(NavigationInfo11)
Viewpoint12 = ViewpointObject().setDescription("Two mathematical orbitals").setPosition([0,0,50])
Scene10.addChild(Viewpoint12)
Group13 = GroupObject()
DirectionalLight14 = DirectionalLightObject().setDirection([1,1,1])
Group13.addChild(DirectionalLight14)
Transform15 = TransformObject().setDEF("OrbitTransform").setTranslation([8,0,0])
Shape16 = ShapeObject()
Appearance17 = AppearanceObject()
Material18 = MaterialObject().setDiffuseColor([0,0.5,1]).setSpecularColor([0,0.5,1])
Appearance17.setMaterial(Material18)
Shape16.setAppearance(Appearance17)
IndexedFaceSet19 = IndexedFaceSetObject().setDEF("Orbit").setCreaseAngle(1.57)
Coordinate20 = CoordinateObject().setDEF("OrbitCoordinates")
IndexedFaceSet19.setCoord(Coordinate20)
Shape16.setGeometry(IndexedFaceSet19)
Transform15.addChild(Shape16)
Group13.addChild(Transform15)
Transform21 = TransformObject().setDEF("OrbitTransform2").setTranslation([-8,0,0])
Shape22 = ShapeObject()
Appearance23 = AppearanceObject()
Material24 = MaterialObject().setDiffuseColor([1,0.5,0]).setSpecularColor([1,0.5,0]).setTransparency(0.75)
Appearance23.setMaterial(Material24)
Shape22.setAppearance(Appearance23)
IndexedFaceSet25 = IndexedFaceSetObject().setDEF("Orbit2").setCreaseAngle(1.57)
Coordinate26 = CoordinateObject().setDEF("OrbitCoordinates2")
IndexedFaceSet25.setCoord(Coordinate26)
Shape22.setGeometry(IndexedFaceSet25)
Transform21.addChild(Shape22)
Group13.addChild(Transform21)
TimeSensor27 = TimeSensorObject().setDEF("Clock").setCycleInterval(16).setLoop(True)
Group13.addChild(TimeSensor27)
OrientationInterpolator28 = OrientationInterpolatorObject().setDEF("OrbitPath").setKey([0,0.5,1]).setKeyValue([1,0,0,0,1,0,0,3.14,1,0,0,6.28])
Group13.addChild(OrientationInterpolator28)
Script29 = ScriptObject().setDEF("OrbitScript")
field30 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script29.addField(field30)
field31 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("coordinates").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script29.addField(field31)
field32 = fieldObject().setType(fieldObject.TYPE_MFINT32).setName("coordIndexes").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
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
"     var localci = new MFInt32();\n"+
"     generateCoordinates(resolution);\n"+
"     ci = 0;\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     localci[ci] = i*resolution+j;\n"+
"	     localci[ci+1] = i*resolution+j+1;\n"+
"	     localci[ci+2] = (i+1)*resolution+j+1;\n"+
"	     localci[ci+3] = (i+1)*resolution+j;\n"+
"	     localci[ci+4] = -1;\n"+
"	     ci += 5;\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = localci;\n"+
"}\n"+
"\n"+
"function generateCoordinates(resolution) {\n"+
"     theta = 0.0;\n"+
"     phi = 0.0;\n"+
"     delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var localc = new MFVec3f();\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		localc[i*resolution+j] = [];\n"+
"		localc[i*resolution+j][0] = rho * Math.cos(phi) * Math.cos(theta);\n"+
"		localc[i*resolution+j][1] = rho * Math.cos(phi) * Math.sin(theta);\n"+
"		localc[i*resolution+j][2] = rho * Math.sin(phi);\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = localc;\n"+
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
Script33 = ScriptObject().setDEF("OrbitScript2")
field34 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script33.addField(field34)
field35 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("coordinates").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script33.addField(field35)
field36 = fieldObject().setType(fieldObject.TYPE_MFINT32).setName("coordIndexes").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
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
"     var localci = new MFInt32();\n"+
"     generateCoordinates(resolution);\n"+
"     ci = 0;\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     localci[ci] = i*resolution+j;\n"+
"	     localci[ci+1] = i*resolution+j+1;\n"+
"	     localci[ci+2] = (i+1)*resolution+j+1;\n"+
"	     localci[ci+3] = (i+1)*resolution+j;\n"+
"	     localci[ci+4] = -1;\n"+
"	     ci += 5;\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = localci;\n"+
"}\n"+
"\n"+
"function generateCoordinates(resolution) {\n"+
"     theta = 0.0;\n"+
"     phi = 0.0;\n"+
"     delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var localc = new MFVec3f();\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		localc[i*resolution+j] = new SFVec3f();\n"+
"		localc[i*resolution+j][0] = rho * Math.cos(phi) * Math.cos(theta);\n"+
"		localc[i*resolution+j][1] = rho * Math.cos(phi) * Math.sin(theta);\n"+
"		localc[i*resolution+j][2] = rho * Math.sin(phi);\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = localc;\n"+
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
ROUTE37 = ROUTEObject().setFromField("coordIndexes").setFromNode("OrbitScript").setToField("set_coordIndex").setToNode("Orbit")
Scene10.addChild(ROUTE37)
ROUTE38 = ROUTEObject().setFromField("coordinates").setFromNode("OrbitScript").setToField("set_point").setToNode("OrbitCoordinates")
Scene10.addChild(ROUTE38)
ROUTE39 = ROUTEObject().setFromField("coordIndexes").setFromNode("OrbitScript2").setToField("set_coordIndex").setToNode("Orbit2")
Scene10.addChild(ROUTE39)
ROUTE40 = ROUTEObject().setFromField("coordinates").setFromNode("OrbitScript2").setToField("set_point").setToNode("OrbitCoordinates2")
Scene10.addChild(ROUTE40)
ROUTE41 = ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("OrbitScript")
Scene10.addChild(ROUTE41)
ROUTE42 = ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("OrbitScript2")
Scene10.addChild(ROUTE42)
ROUTE43 = ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("OrbitPath")
Scene10.addChild(ROUTE43)
ROUTE44 = ROUTEObject().setFromField("value_changed").setFromNode("OrbitPath").setToField("set_rotation").setToNode("OrbitTransform")
Scene10.addChild(ROUTE44)
ROUTE45 = ROUTEObject().setFromField("value_changed").setFromNode("OrbitPath").setToField("set_rotation").setToNode("OrbitTransform2")
Scene10.addChild(ROUTE45)
X3D0.setScene(Scene10)

X3D0.toFileX3D("../new/json/flowers2.new.x3d")
