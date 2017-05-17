from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
meta2 = metaObject().setName("creator").setContent("John W Carlson")
head1.addMeta(meta2)
meta3 = metaObject().setName("created").setContent("December 13 2015")
head1.addMeta(meta3)
meta4 = metaObject().setName("title").setContent("force.x3d")
head1.addMeta(meta4)
meta5 = metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/force.x3d")
head1.addMeta(meta5)
meta6 = metaObject().setName("description").setContent("beginnings of a force directed graph in 3D")
head1.addMeta(meta6)
meta7 = metaObject().setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")
head1.addMeta(meta7)
X3D0.setHead(head1)
Scene8 = SceneObject()
Group9 = GroupObject()
Shape10 = ShapeObject()
Extrusion11 = ExtrusionObject().setDEF("extrusion").setSpine([-50,-50,0,50,50,0]).setCreaseAngle(0.785).setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])
Shape10.setGeometry(Extrusion11)
Appearance12 = AppearanceObject()
Material13 = MaterialObject().setDiffuseColor([0,1,0])
Appearance12.setMaterial(Material13)
Shape10.setAppearance(Appearance12)
Group9.addChild(Shape10)
TimeSensor14 = TimeSensorObject().setDEF("TourTime").setLoop(True)
Group9.addChild(TimeSensor14)
Script15 = ScriptObject().setDEF("MoveCylinder")
field16 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_cycle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script15.addField(field16)
field17 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("spine").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("-50 -50 0 50 50 0")
Script15.addField(field17)

Script15.setSourceCode("ecmascript:\n"+
"\n"+
"                function set_cycle(value) {\n"+
"                        Browser.print(value);\n"+
"                        var endA = new SFVec3f(spine[0][0]*Math.random()*2, spine[0][1]*Math.random()*2, spine[0][2]*Math.random()*2);\n"+
"                        var endB = new SFVec3f(spine[1][0]*Math.random()*2, spine[1][1]*Math.random()*2, spine[1][2]*Math.random()*2);\n"+
"		        spine = new MFVec3f(endA, endB);\n"+
"                }\n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }\n"+
"")
Group9.addChild(Script15)
ROUTE18 = ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("MoveCylinder").setToField("set_cycle")
Group9.addChild(ROUTE18)
ROUTE19 = ROUTEObject().setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine")
Group9.addChild(ROUTE19)
Scene8.addChild(Group9)
X3D0.setScene(Scene8)

X3D0.toFileX3D("../out/orig/extrusion.new.x3d")
