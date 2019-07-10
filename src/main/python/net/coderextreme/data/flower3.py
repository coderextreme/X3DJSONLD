# -*- coding: UTF-8 -*-
from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
Scene1 = Scene()
NavigationInfo2 = NavigationInfo()

Scene1.addChildren(NavigationInfo2)
DirectionalLight3 = DirectionalLight()
DirectionalLight3.setDirection([0,-0.8,-0.2])
DirectionalLight3.setIntensity(0.5)

Scene1.addChildren(DirectionalLight3)
Background4 = Background()
Background4.setSkyColor([1,1,1])

Scene1.addChildren(Background4)
Viewpoint5 = Viewpoint()
Viewpoint5.setDescription("One mathematical orbital")
Viewpoint5.setPosition([0,0,50])

Scene1.addChildren(Viewpoint5)
Transform6 = Transform()
Transform6.setDEF("OrbitTransform")
Transform6.setTranslation([8,0,0])
Shape7 = Shape()
Appearance8 = Appearance()
Material9 = Material()
Material9.setDiffuseColor([0,0.5,1])
Material9.setSpecularColor([0,0.5,1])

Appearance8.setMaterial(Material9)

Shape7.setAppearance(Appearance8)
IndexedFaceSet10 = IndexedFaceSet()
IndexedFaceSet10.setConvex(False)
IndexedFaceSet10.setDEF("Orbit")
Coordinate11 = Coordinate()
Coordinate11.setDEF("OrbitCoordinates")

IndexedFaceSet10.setCoord(Coordinate11)

Shape7.setGeometry(IndexedFaceSet10)

Transform6.addChildren(Shape7)

Scene1.addChildren(Transform6)
Script12 = Script()
Script12.setDEF("OrbitScript")
field13 = field()
field13.setName("set_fraction")
field13.setAccessType("inputOnly")
field13.setType("SFFloat")

Script12.addField(field13)
field14 = field()
field14.setName("coordinates")
field14.setAccessType("outputOnly")
field14.setType("MFVec3f")

Script12.addField(field14)
field15 = field()
field15.setName("coordIndexes")
field15.setAccessType("outputOnly")
field15.setType("MFInt32")

Script12.addField(field15)
#<field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"initializeOnly\" name=\"resolution\" type=\"SFInt32\" value=\"100\"/>

Script12.setSourceCode('''ecmascript:\n"+
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

Scene1.addChildren(Script12)
TimeSensor16 = TimeSensor()
TimeSensor16.setDEF("Clock")
TimeSensor16.setCycleInterval(16)
TimeSensor16.setLoop(True)

Scene1.addChildren(TimeSensor16)
ROUTE17 = ROUTE()
ROUTE17.setFromNode("OrbitScript")
ROUTE17.setFromField("coordIndexes")
ROUTE17.setToNode("Orbit")
ROUTE17.setToField("coordIndex")

Scene1.addChildren(ROUTE17)
ROUTE18 = ROUTE()
ROUTE18.setFromNode("OrbitScript")
ROUTE18.setFromField("coordinates")
ROUTE18.setToNode("OrbitCoordinates")
ROUTE18.setToField("point")

Scene1.addChildren(ROUTE18)
ROUTE19 = ROUTE()
ROUTE19.setFromNode("Clock")
ROUTE19.setFromField("fraction_changed")
ROUTE19.setToNode("OrbitScript")
ROUTE19.setToField("set_fraction")

Scene1.addChildren(ROUTE19)

X3D0.setScene(Scene1)
X3D0.toFileX3D("../data/flower3.new.x3d")
