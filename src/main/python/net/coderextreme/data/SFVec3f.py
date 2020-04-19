# -*- coding: UTF-8 -*-
from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
component2 = component()
component2.setName("Scripting")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = meta()
meta3.setName("title")
meta3.setContent("SFVec3f.x3d")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("creator")
meta4.setContent("John Carlson")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("description")
meta5.setContent("3 prismatic spheres")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/SFVec3f.x3d")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = Scene()
NavigationInfo8 = NavigationInfo()

Scene7.addChildren(NavigationInfo8)
Transform9 = Transform()
Transform9.setDEF("transform")
Shape10 = Shape()
Appearance11 = Appearance()
Material12 = Material()
Material12.setDiffuseColor([0.7,0.7,0.7])
Material12.setSpecularColor([0.5,0.5,0.5])

Appearance11.setMaterial(Material12)

Shape10.setAppearance(Appearance11)
Sphere13 = Sphere()

Shape10.setGeometry(Sphere13)

Transform9.addChildren(Shape10)

Scene7.addChildren(Transform9)
Script14 = Script()
Script14.setDEF("Bounce")
field15 = field()
field15.setName("set_translation")
field15.setAccessType("inputOnly")
field15.setType("SFVec3f")
field15.setValue("0 0 0")

Script14.addField(field15)
field16 = field()
field16.setName("translation_changed")
field16.setAccessType("outputOnly")
field16.setType("SFVec3f")
field16.setValue("0 0 0")

Script14.addField(field16)
field17 = field()
field17.setName("translation")
field17.setAccessType("inputOutput")
field17.setType("SFVec3f")
field17.setValue("0 0 0")

Script14.addField(field17)
field18 = field()
field18.setName("velocity")
field18.setAccessType("inputOutput")
field18.setType("SFVec3f")
field18.setValue("0 0 0")

Script14.addField(field18)
field19 = field()
field19.setName("set_fraction")
field19.setAccessType("inputOnly")
field19.setType("SFTime")

Script14.addField(field19)

Script14.setSourceCode('''ecmascript:\n"+
"			function newBubble() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"				if (Math.abs(translation.x) > 10) {\n"+
"					newBubble();\n"+
"				} else if (Math.abs(translation.y) > 10) {\n"+
"					newBubble();\n"+
"				} else if (Math.abs(translation.z) > 10) {\n"+
"					newBubble();\n"+
"				} else {\n"+
"					velocity = new SFVec3f(\n"+
"						velocity.x + Math.random() * 0.2 - 0.1,\n"+
"						velocity.y + Math.random() * 0.2 - 0.1,\n"+
"						velocity.z + Math.random() * 0.2 - 0.1\n"+
"					);\n"+
"				}\n"+
"			}\n"+
"\n"+
"			function initialize() {\n"+
"			     newBubble();\n"+
"			}''')

Scene7.addChildren(Script14)
TimeSensor20 = TimeSensor()
TimeSensor20.setDEF("TourTime")
TimeSensor20.setCycleInterval(0.15)
TimeSensor20.setLoop(True)

Scene7.addChildren(TimeSensor20)
ROUTE21 = ROUTE()
ROUTE21.setFromNode("TourTime")
ROUTE21.setFromField("cycleTime")
ROUTE21.setToNode("Bounce")
ROUTE21.setToField("set_fraction")

Scene7.addChildren(ROUTE21)
ROUTE22 = ROUTE()
ROUTE22.setFromNode("Bounce")
ROUTE22.setFromField("translation_changed")
ROUTE22.setToNode("transform")
ROUTE22.setToField("set_translation")

Scene7.addChildren(ROUTE22)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/SFVec3f.new.x3d")
