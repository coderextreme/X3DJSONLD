# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("SFVec3f.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("description")
meta4.setContent("3 prismatic spheres")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/SFVec3f.x3d")

head1.addMeta(meta5)
X3D0.setHead(head1)
Scene6 = SceneObject()

NavigationInfo7 = NavigationInfoObject()

Scene6.addChild(NavigationInfo7)
Transform8 = TransformObject()
Transform8.setDEF("transform")

Shape9 = ShapeObject()

Appearance10 = AppearanceObject()

Material11 = MaterialObject()
Material11.setDiffuseColor([0.7,0.7,0.7])
Material11.setSpecularColor([0.5,0.5,0.5])

Appearance10.setMaterial(Material11)
Shape9.setAppearance(Appearance10)
Sphere12 = SphereObject()

Shape9.setGeometry(Sphere12)
Transform8.addChild(Shape9)
Scene6.addChild(Transform8)
Script13 = ScriptObject()
Script13.setDEF("Bounce")

field14 = fieldObject()
field14.setType(fieldObject.TYPE_SFVEC3F)
field14.setName("set_translation")
field14.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
field14.setValue("0 0 0")

Script13.addField(field14)
field15 = fieldObject()
field15.setType(fieldObject.TYPE_SFVEC3F)
field15.setName("translation_changed")
field15.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field15.setValue("0 0 0")

Script13.addField(field15)
field16 = fieldObject()
field16.setType(fieldObject.TYPE_SFVEC3F)
field16.setName("translation")
field16.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field16.setValue("0 0 0")

Script13.addField(field16)
field17 = fieldObject()
field17.setType(fieldObject.TYPE_SFVEC3F)
field17.setName("velocity")
field17.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field17.setValue("0 0 0")

Script13.addField(field17)
field18 = fieldObject()
field18.setType(fieldObject.TYPE_SFTIME)
field18.setName("set_fraction")
field18.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script13.addField(field18)

Script13.setSourceCode("ecmascript:\n"+
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
"			}\n"+
"")
Scene6.addChild(Script13)
TimeSensor19 = TimeSensorObject()
TimeSensor19.setDEF("TourTime")
TimeSensor19.setCycleInterval(0.15)
TimeSensor19.setLoop(True)

Scene6.addChild(TimeSensor19)
ROUTE20 = ROUTEObject()
ROUTE20.setFromNode("TourTime")
ROUTE20.setFromField("cycleTime")
ROUTE20.setToNode("Bounce")
ROUTE20.setToField("set_fraction")

Scene6.addChild(ROUTE20)
ROUTE21 = ROUTEObject()
ROUTE21.setFromNode("Bounce")
ROUTE21.setFromField("translation_changed")
ROUTE21.setToNode("transform")
ROUTE21.setToField("set_translation")

Scene6.addChild(ROUTE21)
X3D0.setScene(Scene6)

X3D0.toFileX3D("../data/SFVec3f.new.x3d")
