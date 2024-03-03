import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("flower.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/flower.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("a flower")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()

Scene7.addChildren(NavigationInfo8)
DirectionalLight9 = x3d.DirectionalLight()
DirectionalLight9.setDirection([0,-0.8,-0.2])
DirectionalLight9.setIntensity(0.5)

Scene7.addChildren(DirectionalLight9)
Background10 = x3d.Background()
Background10.setSkyColor([1,1,1])

Scene7.addChildren(Background10)
Viewpoint11 = x3d.Viewpoint()
Viewpoint11.setDescription("One mathematical orbital")
Viewpoint11.setPosition([0,0,50])

Scene7.addChildren(Viewpoint11)
Transform12 = x3d.Transform()
Transform12.setTranslation([0,-1,1])
Transform12.setRotation([0,1,0,3.1415926])
Transform12.setScale([1.5,1.5,1.5])
Shape13 = x3d.Shape()
Appearance14 = x3d.Appearance()
Material15 = x3d.Material()
Material15.setTransparency(0.1)
Material15.setDiffuseColor([0.9,0.3,0.3])
Material15.setSpecularColor([0.8,0.8,0.8])
Material15.setShininess(0.145)

Appearance14.setMaterial(Material15)

Shape13.setAppearance(Appearance14)
IndexedFaceSet16 = x3d.IndexedFaceSet()
IndexedFaceSet16.setCcw(False)
IndexedFaceSet16.setConvex(False)
IndexedFaceSet16.setCoordIndex([0,1,2,-1])
IndexedFaceSet16.setDEF("Orbit")
Coordinate17 = x3d.Coordinate()
Coordinate17.setDEF("OrbitCoordinates")
Coordinate17.setPoint([0,0,1,0,1,0,1,0,0])

IndexedFaceSet16.setCoord(Coordinate17)

Shape13.setGeometry(IndexedFaceSet16)

Transform12.addChild(Shape13)

Scene7.addChildren(Transform12)
Script18 = x3d.Script()
Script18.setDEF("OrbitScript")
field19 = x3d.field()
field19.setName("set_fraction")
field19.setAccessType("inputOnly")
field19.setType("SFFloat")

Script18.addField(field19)
field20 = x3d.field()
field20.setName("coordinates")
field20.setAccessType("outputOnly")
field20.setType("MFVec3f")

Script18.addField(field20)
field21 = x3d.field()
field21.setName("coordIndexes")
field21.setAccessType("outputOnly")
field21.setType("MFInt32")

Script18.addField(field21)
#<field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"resolution\" type=\"SFInt32\" value=\"150\"/>

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
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
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
TimeSensor22 = x3d.TimeSensor()
TimeSensor22.setDEF("Clock")
TimeSensor22.setCycleInterval(16)
TimeSensor22.setLoop(True)

Scene7.addChildren(TimeSensor22)
ROUTE23 = x3d.ROUTE()
ROUTE23.setFromNode("OrbitScript")
ROUTE23.setFromField("coordIndexes")
ROUTE23.setToNode("Orbit")
ROUTE23.setToField("set_coordIndex")

Scene7.addChildren(ROUTE23)
ROUTE24 = x3d.ROUTE()
ROUTE24.setFromNode("OrbitScript")
ROUTE24.setFromField("coordinates")
ROUTE24.setToNode("OrbitCoordinates")
ROUTE24.setToField("point")

Scene7.addChildren(ROUTE24)
ROUTE25 = x3d.ROUTE()
ROUTE25.setFromNode("Clock")
ROUTE25.setFromField("fraction_changed")
ROUTE25.setToNode("OrbitScript")
ROUTE25.setToField("set_fraction")

Scene7.addChildren(ROUTE25)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/flower.new.python.x3d")
