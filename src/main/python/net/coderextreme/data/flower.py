# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

Scene1 = SceneObject()

NavigationInfo2 = NavigationInfoObject()

Scene1.addChild(NavigationInfo2)
DirectionalLight3 = DirectionalLightObject()
DirectionalLight3.setDirection([0,-0.8,-0.2])
DirectionalLight3.setIntensity(0.5)

Scene1.addChild(DirectionalLight3)
Background4 = BackgroundObject()
Background4.setSkyColor([1,1,1])

Scene1.addChild(Background4)
Viewpoint5 = ViewpointObject()
Viewpoint5.setDescription("One mathematical orbital")
Viewpoint5.setPosition([0,0,50])

Scene1.addChild(Viewpoint5)
Transform6 = TransformObject()
Transform6.setTranslation([0,-1,1])
Transform6.setRotation([0,1,0,3.1415926])
Transform6.setScale([1.5,1.5,1.5])

Shape7 = ShapeObject()

Appearance8 = AppearanceObject()

Material9 = MaterialObject()
Material9.setTransparency(0.1)
Material9.setDiffuseColor([0.9,0.3,0.3])
Material9.setSpecularColor([0.8,0.8,0.8])
Material9.setShininess(0.145)

Appearance8.setMaterial(Material9)
Shape7.setAppearance(Appearance8)
IndexedFaceSet10 = IndexedFaceSetObject()
IndexedFaceSet10.setCcw(False)
IndexedFaceSet10.setConvex(False)
IndexedFaceSet10.setCoordIndex([0,1,2,-1])
IndexedFaceSet10.setDEF("ifs")

Coordinate11 = CoordinateObject()
Coordinate11.setDEF("crd")
Coordinate11.setPoint([0,0,1,0,1,0,1,0,0])

IndexedFaceSet10.setCoord(Coordinate11)
Shape7.setGeometry(IndexedFaceSet10)
Transform6.addChild(Shape7)
Scene1.addChild(Transform6)
Script12 = ScriptObject()
Script12.setDEF("FlowerScript")

field13 = fieldObject()
field13.setType(fieldObject.TYPE_SFFLOAT)
field13.setName("set_fraction")
field13.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script12.addField(field13)
field14 = fieldObject()
field14.setType(fieldObject.TYPE_MFVEC3F)
field14.setName("coordinates")
field14.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script12.addField(field14)
field15 = fieldObject()
field15.setType(fieldObject.TYPE_MFINT32)
field15.setName("coordIndexes")
field15.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script12.addField(field15)

Script12.setSourceCode("ecmascript:\n"+
"    \n"+
"var e = 5;\n"+
"var f = 5;\n"+
"var g = 5;\n"+
"var h = 5;\n"+
"var resolution = 150;\n"+
"var t = 0;\n"+
"var p = 0;\n"+
"\n"+
"function initialize() {\n"+
"     var localci = new Array();\n"+
"     var ci = 0;\n"+
"     var buf = [];\n"+
"     for (var i = 0; i < resolution-1; i++) {\n"+
"     	for (var j = 0; j < resolution-1; j++) {\n"+
"	     localci[ci] = i*resolution+j;\n"+
"	     localci[ci+1] = i*resolution+j+1;\n"+
"	     localci[ci+2] = (i+1)*resolution+j+1;\n"+
"	     localci[ci+3] = (i+1)*resolution+j;\n"+
"	     localci[ci+4] = -1;\n"+
"	     buf.push(localci[ci]);\n"+
"	     buf.push(localci[ci+1]);\n"+
"	     buf.push(localci[ci+3]);\n"+
"	     buf.push(localci[ci+4]);\n"+
"\n"+
"	     buf.push(localci[ci+1]);\n"+
"	     buf.push(localci[ci+2]);\n"+
"	     buf.push(localci[ci+3]);\n"+
"	     buf.push(localci[ci+4]);\n"+
"	     ci += 5;\n"+
"	}\n"+
"    }\n"+
"    updateCoordinates(resolution);\n"+
"    coordIndexes = new x3dom.fields.MFInt32(buf);\n"+
"}\n"+
"\n"+
"function updateCoordinates(resolution) {\n"+
"     theta = 0.0;\n"+
"     phi = 0.0;\n"+
"     delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var buf = [];\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		rho = e + f * Math.cos(g * theta + t) * Math.cos(h * phi + p);\n"+
"		var coord = new x3dom.fields.SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		);\n"+
"	     	buf.push(coord);\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = new x3dom.fields.MFVec3f(buf);\n"+
"}\n"+
"\n"+
"function set_fraction() {\n"+
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
"	t += 0.5;\n"+
"	p += 0.5;\n"+
"	if (f < 1) {\n"+
"		f = 10;\n"+
"	}\n"+
"	if (g < 1) {\n"+
"		g = 4;\n"+
"	}\n"+
"	if (h < 1) {\n"+
"		h = 4;\n"+
"	}\n"+
"	updateCoordinates(resolution);\n"+
"}\n"+
"")
Scene1.addChild(Script12)
TimeSensor16 = TimeSensorObject()
TimeSensor16.setDEF("Clock")
TimeSensor16.setCycleInterval(16)
TimeSensor16.setLoop(True)

Scene1.addChild(TimeSensor16)
ROUTE17 = ROUTEObject()
ROUTE17.setFromNode("FlowerScript")
ROUTE17.setFromField("coordIndexes")
ROUTE17.setToNode("ifs")
ROUTE17.setToField("coordIndex")

Scene1.addChild(ROUTE17)
ROUTE18 = ROUTEObject()
ROUTE18.setFromNode("FlowerScript")
ROUTE18.setFromField("coordinates")
ROUTE18.setToNode("crd")
ROUTE18.setToField("point")

Scene1.addChild(ROUTE18)
ROUTE19 = ROUTEObject()
ROUTE19.setFromNode("Clock")
ROUTE19.setFromField("fraction_changed")
ROUTE19.setToNode("FlowerScript")
ROUTE19.setToField("set_fraction")

Scene1.addChild(ROUTE19)
X3D0.setScene(Scene1)

X3D0.toFileX3D("../data/flower.new.x3d")
