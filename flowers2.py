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
meta10 = metaObject().setName("translated").setContent("15 May 2017")
head1.addMeta(meta10)
meta11 = metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html")
head1.addMeta(meta11)
meta12 = metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
head1.addMeta(meta12)
meta13 = metaObject().setName("translated").setContent("15 May 2017")
head1.addMeta(meta13)
meta14 = metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")
head1.addMeta(meta14)
X3D0.setHead(head1)
Scene15 = SceneObject()
NavigationInfo16 = NavigationInfoObject()
Scene15.addChild(NavigationInfo16)
Viewpoint17 = ViewpointObject().setDescription("Two mathematical orbitals").setPosition([0,0,50])
Scene15.addChild(Viewpoint17)
Group18 = GroupObject()
DirectionalLight19 = DirectionalLightObject().setDirection([1,1,1])
Group18.addChild(DirectionalLight19)
Transform20 = TransformObject().setDEF("OrbitTransform").setTranslation([8,0,0])
Shape21 = ShapeObject()
Appearance22 = AppearanceObject()
Material23 = MaterialObject().setDiffuseColor([0,0.5,1]).setSpecularColor([0,0.5,1])
Appearance22.setMaterial(Material23)
Shape21.setAppearance(Appearance22)
IndexedFaceSet24 = IndexedFaceSetObject().setDEF("Orbit").setCreaseAngle(1.57)
Coordinate25 = CoordinateObject().setDEF("OrbitCoordinates")
IndexedFaceSet24.setCoord(Coordinate25)
Shape21.setGeometry(IndexedFaceSet24)
Transform20.addChild(Shape21)
Group18.addChild(Transform20)
Transform26 = TransformObject().setDEF("OrbitTransform2").setTranslation([-8,0,0])
Shape27 = ShapeObject()
Appearance28 = AppearanceObject()
Material29 = MaterialObject().setDiffuseColor([1,0.5,0]).setSpecularColor([1,0.5,0]).setTransparency(0.75)
Appearance28.setMaterial(Material29)
Shape27.setAppearance(Appearance28)
IndexedFaceSet30 = IndexedFaceSetObject().setDEF("Orbit2").setCreaseAngle(1.57)
Coordinate31 = CoordinateObject().setDEF("OrbitCoordinates2")
IndexedFaceSet30.setCoord(Coordinate31)
Shape27.setGeometry(IndexedFaceSet30)
Transform26.addChild(Shape27)
Group18.addChild(Transform26)
TimeSensor32 = TimeSensorObject().setDEF("Clock").setCycleInterval(16).setLoop(True)
Group18.addChild(TimeSensor32)
OrientationInterpolator33 = OrientationInterpolatorObject().setDEF("OrbitPath").setKey([0,0.5,1]).setKeyValue([1,0,0,0,1,0,0,3.14,1,0,0,6.28])
Group18.addChild(OrientationInterpolator33)
Script34 = ScriptObject().setDEF("OrbitScript")
field35 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script34.addField(field35)
field36 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("coordinates").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script34.addField(field36)
field37 = fieldObject().setType(fieldObject.TYPE_MFINT32).setName("coordIndexes").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script34.addField(field37)

Script34.setSourceCode("ecmascript:\n"+
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
Group18.addChild(Script34)
Script38 = ScriptObject().setDEF("OrbitScript2")
field39 = fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script38.addField(field39)
field40 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("coordinates").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script38.addField(field40)
field41 = fieldObject().setType(fieldObject.TYPE_MFINT32).setName("coordIndexes").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script38.addField(field41)

Script38.setSourceCode("ecmascript:\n"+
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
Group18.addChild(Script38)
Scene15.addChild(Group18)
ROUTE42 = ROUTEObject().setFromField("coordIndexes").setFromNode("OrbitScript").setToField("set_coordIndex").setToNode("Orbit")
Scene15.addChild(ROUTE42)
ROUTE43 = ROUTEObject().setFromField("coordinates").setFromNode("OrbitScript").setToField("set_point").setToNode("OrbitCoordinates")
Scene15.addChild(ROUTE43)
ROUTE44 = ROUTEObject().setFromField("coordIndexes").setFromNode("OrbitScript2").setToField("set_coordIndex").setToNode("Orbit2")
Scene15.addChild(ROUTE44)
ROUTE45 = ROUTEObject().setFromField("coordinates").setFromNode("OrbitScript2").setToField("set_point").setToNode("OrbitCoordinates2")
Scene15.addChild(ROUTE45)
ROUTE46 = ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("OrbitScript")
Scene15.addChild(ROUTE46)
ROUTE47 = ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("OrbitScript2")
Scene15.addChild(ROUTE47)
ROUTE48 = ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("OrbitPath")
Scene15.addChild(ROUTE48)
ROUTE49 = ROUTEObject().setFromField("value_changed").setFromNode("OrbitPath").setToField("set_rotation").setToNode("OrbitTransform")
Scene15.addChild(ROUTE49)
ROUTE50 = ROUTEObject().setFromField("value_changed").setFromNode("OrbitPath").setToField("set_rotation").setToNode("OrbitTransform2")
Scene15.addChild(ROUTE50)
X3D0.setScene(Scene15)

X3D0.toFileX3D("flowers2.new.x3d")
