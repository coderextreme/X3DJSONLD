# -*- coding: UTF-8 -*-
from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
meta2 = meta()
meta2.setName("creator")
meta2.setContent("John W Carlson")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("created")
meta3.setContent("December 13 2015")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("title")
meta4.setContent("extrusion.x3d")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/force.x3d")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("description")
meta6.setContent("beginnings of a force directed graph in 3D")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("generator")
meta7.setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta7)

X3D0.setHead(head1)
Scene8 = Scene()
Group9 = Group()
Shape10 = Shape()
Extrusion11 = Extrusion()
Extrusion11.setDEF("extrusion")
Extrusion11.setSpine([-50,-50,0,50,50,0])
Extrusion11.setCreaseAngle(0.785)
Extrusion11.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])

Shape10.setGeometry(Extrusion11)
Appearance12 = Appearance()
Material13 = Material()
Material13.setDiffuseColor([0,1,0])

Appearance12.setMaterial(Material13)

Shape10.setAppearance(Appearance12)

Group9.addChildren(Shape10)
TimeSensor14 = TimeSensor()
TimeSensor14.setDEF("TourTime")
TimeSensor14.setLoop(True)

Group9.addChildren(TimeSensor14)
Script15 = Script()
Script15.setDEF("MoveCylinder")
field16 = field()
field16.setName("set_cycle")
field16.setAccessType("inputOnly")
field16.setType("SFTime")

Script15.addField(field16)
field17 = field()
field17.setName("spine")
field17.setAccessType("inputOutput")
field17.setType("MFVec3f")
field17.setValue("-50 -50 0 50 50 0")

Script15.addField(field17)

Script15.setSourceCode('''ecmascript:\n"+
"\n"+
"                function set_cycle(value) {\n"+
"                        Browser.print(value);\n"+
"                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);\n"+
"                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);\n"+
"		        spine = new MFVec3f([endA, endB]);\n"+
"                }''')

Group9.addChildren(Script15)
ROUTE18 = ROUTE()
ROUTE18.setFromNode("TourTime")
ROUTE18.setFromField("cycleTime")
ROUTE18.setToNode("MoveCylinder")
ROUTE18.setToField("set_cycle")

Group9.addChildren(ROUTE18)
ROUTE19 = ROUTE()
ROUTE19.setFromNode("MoveCylinder")
ROUTE19.setFromField("spine_changed")
ROUTE19.setToNode("extrusion")
ROUTE19.setToField("spine")

Group9.addChildren(ROUTE19)

Scene8.addChildren(Group9)

X3D0.setScene(Scene8)
X3D0.toFileX3D("../data/extrusion.new.x3d")
