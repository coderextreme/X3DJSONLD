from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("flower3.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/flower3.x3d")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("description")
meta6.setContent("a flower")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = Scene()
NavigationInfo8 = NavigationInfo()

Scene7.addChildren(NavigationInfo8)
DirectionalLight9 = DirectionalLight()
DirectionalLight9.setDirection([0,-0.8,-0.2])
DirectionalLight9.setIntensity(0.5)

Scene7.addChildren(DirectionalLight9)
Background10 = Background()
Background10.setSkyColor([1,1,1])

Scene7.addChildren(Background10)
Viewpoint11 = Viewpoint()
Viewpoint11.setDescription("One mathematical orbital")
Viewpoint11.setPosition([0,0,50])

Scene7.addChildren(Viewpoint11)
Transform12 = Transform()
Transform12.setDEF("OrbitTransform")
Transform12.setTranslation([8,0,0])
Shape13 = Shape()
Appearance14 = Appearance()
Material15 = Material()
Material15.setDiffuseColor([0,0.5,1])
Material15.setSpecularColor([0,0.5,1])

Appearance14.setMaterial(Material15)

Shape13.setAppearance(Appearance14)
IndexedFaceSet16 = IndexedFaceSet()
IndexedFaceSet16.setConvex(False)
IndexedFaceSet16.setDEF("Orbit")
Coordinate17 = Coordinate()
Coordinate17.setDEF("OrbitCoordinates")

IndexedFaceSet16.setCoord(Coordinate17)

Shape13.setGeometry(IndexedFaceSet16)

Transform12.addChildren(Shape13)

Scene7.addChildren(Transform12)
Script18 = Script()
Script18.setDEF("OrbitScript")
field19 = field()
field19.setName("set_fraction")
field19.setAccessType("inputOnly")
field19.setType("SFFloat")

Script18.addField(field19)
field20 = field()
field20.setName("coordinates")
field20.setAccessType("outputOnly")
field20.setType("MFVec3f")

Script18.addField(field20)
field21 = field()
field21.setName("coordIndexes")
field21.setAccessType("outputOnly")
field21.setType("MFInt32")

Script18.addField(field21)
#<field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"initializeOnly\" name=\"resolution\" type=\"SFInt32\" value=\"100\"/>

Script18.setSourceCode('''ecmascript:\n"+
"\n"+
"var e = 5;\n"+
"var f = 5;\n"+
"var g = 5;\n"+
"var h = 5;\n"+
"var resolution = 100;\n"+
"var t = 0;\n"+
"var p = 0;\n"+
"\n"+
"function initialize() {\n"+
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
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var localc = [];\n"+
"     for (var  i = 0; i < resolution; i++) {\n"+
"     	for (var  j = 0; j < resolution; j++) {\n"+
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
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
"	t += 0.5;\n"+
"	p += 0.5;\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
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
"	generateCoordinates(resolution);\n"+
"}''')

Scene7.addChildren(Script18)
TimeSensor22 = TimeSensor()
TimeSensor22.setDEF("Clock")
TimeSensor22.setCycleInterval(16)
TimeSensor22.setLoop(True)

Scene7.addChildren(TimeSensor22)
ROUTE23 = ROUTE()
ROUTE23.setFromNode("OrbitScript")
ROUTE23.setFromField("coordIndexes")
ROUTE23.setToNode("Orbit")
ROUTE23.setToField("set_coordIndex")

Scene7.addChildren(ROUTE23)
ROUTE24 = ROUTE()
ROUTE24.setFromNode("OrbitScript")
ROUTE24.setFromField("coordinates")
ROUTE24.setToNode("OrbitCoordinates")
ROUTE24.setToField("point")

Scene7.addChildren(ROUTE24)
ROUTE25 = ROUTE()
ROUTE25.setFromNode("Clock")
ROUTE25.setFromField("fraction_changed")
ROUTE25.setToNode("OrbitScript")
ROUTE25.setToField("set_fraction")

Scene7.addChildren(ROUTE25)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../personal/flower3_RoundTrip.x3d")