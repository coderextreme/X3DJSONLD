# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

Scene1 = SceneObject()

NavigationInfo2 = NavigationInfoObject()
NavigationInfo2.setType(["EXAMINE","ANY"])

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
IndexedFaceSet10.setCreaseAngle(0)
IndexedFaceSet10.setDEF("ifs")
IndexedFaceSet10.setSolid(True)

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
field13.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field13.setName("set_fraction")

Script12.addField(field13)
field14 = fieldObject()
field14.setType(fieldObject.TYPE_MFVEC3F)
field14.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field14.setName("coordinates")

Script12.addField(field14)
field15 = fieldObject()
field15.setType(fieldObject.TYPE_MFINT32)
field15.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field15.setName("coordIndexes")

Script12.addField(field15)

Script12.setSourceCode("ecmascript:
    
var e = 5;
var f = 5;
var g = 5;
var h = 5;
var resolution = 150;
var t = 0;
var p = 0;

function initialize() {
     var localci = new Array();
     var ci = 0;
     var buf = [];
     for (var i = 0; i < resolution-1; i++) {
     	for (var j = 0; j < resolution-1; j++) {
	     localci[ci] = i*resolution+j;
	     localci[ci+1] = i*resolution+j+1;
	     localci[ci+2] = (i+1)*resolution+j+1;
	     localci[ci+3] = (i+1)*resolution+j;
	     localci[ci+4] = -1;
	     buf.push(localci[ci]);
	     buf.push(localci[ci+1]);
	     buf.push(localci[ci+3]);
	     buf.push(localci[ci+4]);

	     buf.push(localci[ci+1]);
	     buf.push(localci[ci+2]);
	     buf.push(localci[ci+3]);
	     buf.push(localci[ci+4]);
	     ci += 5;
	}
    }
    updateCoordinates(resolution);
    coordIndexes = new x3dom.fields.MFInt32(buf);
}

function updateCoordinates(resolution) {
     theta = 0.0;
     phi = 0.0;
     delta = (2 * 3.141592653) / (resolution-1);
     var buf = [];
     for ( i = 0; i < resolution; i++) {
     	for ( j = 0; j < resolution; j++) {
		rho = e + f * Math.cos(g * theta + t) * Math.cos(h * phi + p);
		var coord = new x3dom.fields.SFVec3f(
			rho * Math.cos(phi) * Math.cos(theta),
			rho * Math.cos(phi) * Math.sin(theta),
			rho * Math.sin(phi)
		);
	     	buf.push(coord);
		theta += delta;
	}
	phi += delta;
     }
     coordinates = new x3dom.fields.MFVec3f(buf);
}

function set_fraction() {
	choice = Math.floor(Math.random() * 4);
	switch (choice) {
	case 0:
		e += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 1:
		f += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 2:
		g += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 3:
		h += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	}
	t += 0.5;
	p += 0.5;
	if (f < 1) {
		f = 10;
	}
	if (g < 1) {
		g = 4;
	}
	if (h < 1) {
		h = 4;
	}
	updateCoordinates(resolution);
}
\n"+
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
