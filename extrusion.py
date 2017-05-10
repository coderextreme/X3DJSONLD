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
meta8 = metaObject().setName("translated").setContent("10 May 2017")
head1.addMeta(meta8)
meta9 = metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html")
head1.addMeta(meta9)
meta10 = metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
head1.addMeta(meta10)
meta11 = metaObject().setName("translated").setContent("10 May 2017")
head1.addMeta(meta11)
meta12 = metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")
head1.addMeta(meta12)
X3D0.setHead(head1)
Scene13 = SceneObject()
Group14 = GroupObject()
Shape15 = ShapeObject()
Extrusion16 = ExtrusionObject().setDEF("extrusion").setSpine([-50,-50,0,50,50,0]).setCreaseAngle(0.785).setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])
Shape15.setGeometry(Extrusion16)
Appearance17 = AppearanceObject()
Material18 = MaterialObject().setDiffuseColor([0,1,0])
Appearance17.setMaterial(Material18)
Shape15.setAppearance(Appearance17)
Group14.addChild(Shape15)
TimeSensor19 = TimeSensorObject().setDEF("TourTime").setLoop(True)
Group14.addChild(TimeSensor19)
Script20 = ScriptObject().setDEF("MoveCylinder")
field21 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_cycle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script20.addField(field21)
field22 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("spine").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("-50 -50 0 50 50 0")
Script20.addField(field22)

Script20.setSourceCode("ecmascript:\n"+
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
Group14.addChild(Script20)
ROUTE23 = ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("MoveCylinder").setToField("set_cycle")
Group14.addChild(ROUTE23)
ROUTE24 = ROUTEObject().setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine")
Group14.addChild(ROUTE24)
Scene13.addChild(Group14)
X3D0.setScene(Scene13)

X3D0.toFileX3D("extrusion.new.x3d")
