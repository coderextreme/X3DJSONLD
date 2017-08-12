# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("creator")
meta2.setContent("John W Carlson")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("created")
meta3.setContent("December 13 2015")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("title")
meta4.setContent("force.x3d")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/force.x3d")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("description")
meta6.setContent("beginnings of a force directed graph in 3D")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("generator")
meta7.setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta7)
X3D0.setHead(head1)
Scene8 = SceneObject()

Group9 = GroupObject()

Shape10 = ShapeObject()

Extrusion11 = ExtrusionObject()
Extrusion11.setDEF("extrusion")
Extrusion11.setSpine([-50,-50,0,50,50,0])
Extrusion11.setCreaseAngle(0.785)
Extrusion11.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])

Shape10.setGeometry(Extrusion11)
Appearance12 = AppearanceObject()

Material13 = MaterialObject()
Material13.setDiffuseColor([0,1,0])

Appearance12.setMaterial(Material13)
Shape10.setAppearance(Appearance12)
Group9.addChild(Shape10)
TimeSensor14 = TimeSensorObject()
TimeSensor14.setDEF("TourTime")
TimeSensor14.setLoop(True)

Group9.addChild(TimeSensor14)
Script15 = ScriptObject()
Script15.setDEF("MoveCylinder")

field16 = fieldObject()
field16.setType(fieldObject.TYPE_SFTIME)
field16.setName("set_cycle")
field16.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script15.addField(field16)
field17 = fieldObject()
field17.setType(fieldObject.TYPE_MFVEC3F)
field17.setName("spine")
field17.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field17.setValue("-50 -50 0 50 50 0")

Script15.addField(field17)

Script15.setSourceCode("ecmascript:\n"+
"\n"+
"                function set_cycle(value) {\n"+
"                        Browser.print(value);\n"+
"                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);\n"+
"                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);\n"+
"		        spine = new MFVec3f([endA, endB]);\n"+
"                }\n"+
"")
Group9.addChild(Script15)
ROUTE18 = ROUTEObject()
ROUTE18.setFromNode("TourTime")
ROUTE18.setFromField("cycleTime")
ROUTE18.setToNode("MoveCylinder")
ROUTE18.setToField("set_cycle")

Group9.addChild(ROUTE18)
ROUTE19 = ROUTEObject()
ROUTE19.setFromNode("MoveCylinder")
ROUTE19.setFromField("spine_changed")
ROUTE19.setToNode("extrusion")
ROUTE19.setToField("spine")

Group9.addChild(ROUTE19)
Scene8.addChild(Group9)
X3D0.setScene(Scene8)

X3D0.toFileX3D("../data/extrusion.new.x3d")
