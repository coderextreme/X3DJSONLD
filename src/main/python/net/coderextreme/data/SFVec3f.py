from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
meta2 = metaObject().setName("title").setContent("SFVec3f.x3d")
head1.addMeta(meta2)
meta3 = metaObject().setName("creator").setContent("John Carlson")
head1.addMeta(meta3)
meta4 = metaObject().setName("description").setContent("3 prismatic spheres")
head1.addMeta(meta4)
meta5 = metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/SFVec3f.x3d")
head1.addMeta(meta5)
X3D0.setHead(head1)
Scene6 = SceneObject()
NavigationInfo7 = NavigationInfoObject()
Scene6.addChild(NavigationInfo7)
Transform8 = TransformObject().setDEF("transform")
Shape9 = ShapeObject()
Appearance10 = AppearanceObject()
Material11 = MaterialObject().setDiffuseColor([0.7,0.7,0.7]).setSpecularColor([0.5,0.5,0.5])
Appearance10.setMaterial(Material11)
Shape9.setAppearance(Appearance10)
Sphere12 = SphereObject()
Shape9.setGeometry(Sphere12)
Transform8.addChild(Shape9)
Scene6.addChild(Transform8)
Script13 = ScriptObject().setDEF("Bounce")
field14 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_translation").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0 0 0")
Script13.addField(field14)
field15 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("0 0 0")
Script13.addField(field15)
field16 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script13.addField(field16)
field17 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("velocity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script13.addField(field17)
field18 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script13.addField(field18)

Script13.setSourceCode("\n"+
"ecmascript:\n"+
"			function set_translation(value) {\n"+
"				translation = value;\n"+
"			}\n"+
"			function translation_changed() {\n"+
"				return translation;\n"+
"			}\n"+
"			function newBubble() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation[0] + velocity[0],\n"+
"				translation[1] + velocity[1],\n"+
"				translation[2] + velocity[2]);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation[j]) > 10) {\n"+
"					newBubble();\n"+
"				    } else {\n"+
"					velocity = new SFVec3f(\n"+
"						velocity[0] + Math.random() * 0.2 - 0.1,\n"+
"						velocity[1] + Math.random() * 0.2 - 0.1,\n"+
"						velocity[2] + Math.random() * 0.2 - 0.1\n"+
"					);\n"+
"				    }\n"+
"			    }\n"+
"			}\n"+
"\n"+
"			function initialize() {\n"+
"			     newBubble();\n"+
"			}\n"+
"")
Scene6.addChild(Script13)
TimeSensor19 = TimeSensorObject().setDEF("TourTime").setCycleInterval(0.15).setLoop(True)
Scene6.addChild(TimeSensor19)
ROUTE20 = ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("Bounce").setToField("set_fraction")
Scene6.addChild(ROUTE20)
ROUTE21 = ROUTEObject().setFromNode("Bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation")
Scene6.addChild(ROUTE21)
X3D0.setScene(Scene6)

X3D0.toFileX3D("../data/SFVec3f.new.x3d")
