from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
meta2 = metaObject().setName("title").setContent("x3dconnectorProto")
head1.addMeta(meta2)
meta3 = metaObject().setName("creator").setContent("Lost, Doug Sanden I think")
head1.addMeta(meta3)
meta4 = metaObject().setName("generator").setContent("manual")
head1.addMeta(meta4)
meta5 = metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d")
head1.addMeta(meta5)
meta6 = metaObject().setName("description").setContent("a generic proto to connect two objects")
head1.addMeta(meta6)
meta7 = metaObject().setName("translated").setContent("10 May 2017")
head1.addMeta(meta7)
meta8 = metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html")
head1.addMeta(meta8)
meta9 = metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
head1.addMeta(meta9)
meta10 = metaObject().setName("translated").setContent("10 May 2017")
head1.addMeta(meta10)
meta11 = metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")
head1.addMeta(meta11)
X3D0.setHead(head1)
Scene12 = SceneObject()
Viewpoint13 = ViewpointObject().setPosition([0,0,5]).setDescription("Only Viewpoint")
Scene12.addChild(Viewpoint13)
Background14 = BackgroundObject().setSkyColor([0.4,0.4,0.4])
Scene12.addChild(Background14)
Transform15 = TransformObject().setDEF("G1")
Shape16 = ShapeObject()
Appearance17 = AppearanceObject()
Material18 = MaterialObject().setDiffuseColor([0.7,0.2,0.2])
Appearance17.setMaterial(Material18)
Shape16.setAppearance(Appearance17)
Sphere19 = SphereObject().setRadius(0.1)
Shape16.setGeometry(Sphere19)
Transform15.addChild(Shape16)
PlaneSensor20 = PlaneSensorObject().setDescription("Grab to move").setDEF("PS1")
Transform15.addChild(PlaneSensor20)
ROUTE21 = ROUTEObject().setFromNode("PS1").setFromField("translation_changed").setToNode("G1").setToField("translation")
Transform15.addChild(ROUTE21)
Scene12.addChild(Transform15)
Transform22 = TransformObject().setDEF("G2").setTranslation([1,-1,0.01])
Shape23 = ShapeObject()
Appearance24 = AppearanceObject()
Material25 = MaterialObject().setDiffuseColor([0.2,0.7,0.2])
Appearance24.setMaterial(Material25)
Shape23.setAppearance(Appearance24)
Sphere26 = SphereObject().setRadius(0.1)
Shape23.setGeometry(Sphere26)
Transform22.addChild(Shape23)
PlaneSensor27 = PlaneSensorObject().setDescription("Grab to move").setDEF("PS2")
Transform22.addChild(PlaneSensor27)
ROUTE28 = ROUTEObject().setFromNode("PS2").setFromField("translation_changed").setToNode("G2").setToField("translation")
Transform22.addChild(ROUTE28)
Scene12.addChild(Transform22)
Transform29 = TransformObject().setDEF("C0")
Transform30 = TransformObject().setDEF("C1")
Transform31 = TransformObject().setDEF("C2")
Shape32 = ShapeObject()
Appearance33 = AppearanceObject()
Material34 = MaterialObject().setDiffuseColor([0.2,0.7,0.7]).setTransparency(0.5)
Appearance33.setMaterial(Material34)
Shape32.setAppearance(Appearance33)
Cylinder35 = CylinderObject().setRadius(0.05)
Shape32.setGeometry(Cylinder35)
Transform31.addChild(Shape32)
Transform30.addChild(Transform31)
Transform29.addChild(Transform30)
Scene12.addChild(Transform29)
Script36 = ScriptObject().setDEF("S1")
field37 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Transform38 = TransformObject().setUSE("G1")
field37.addChild(Transform38)
Script36.addField(field37)
field39 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Transform40 = TransformObject().setUSE("G2")
field39.addChild(Transform40)
Script36.addField(field39)
field41 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script36.addField(field41)
field42 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script36.addField(field42)
field43 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script36.addField(field43)
field44 = fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("rotation").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script36.addField(field44)
field45 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("scale").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script36.addField(field45)

Script36.setSourceCode("ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"            var dif = endpoint.subtract(startpoint);\n"+
"            var dist = dif.length()*.5;\n"+
"            var dif2 = dif.multiply(.5);\n"+
"            var norm = dif.normalize();\n"+
"            var trans = startpoint.add(dif2);\n"+
"            scale = new SFVec3f(1.0,dist,1.0);\n"+
"            translation = trans;\n"+
"            rotation = new SFRotation(new SFVec3f(0.0,1.0,0.0),norm);\n"+
"            //Browser.print('norm='+norm.toString());\n"+
"            //Browser.print('rotation='+rotation.toString());\n"+
"        }\n"+
"        function initialize(){\n"+
"            recompute(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute(val,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute(startnode.translation,val);\n"+
"        }\n"+
"")
Scene12.addChild(Script36)
ROUTE46 = ROUTEObject().setFromNode("G1").setFromField("translation").setToNode("S1").setToField("set_startpoint")
Scene12.addChild(ROUTE46)
ROUTE47 = ROUTEObject().setFromNode("G2").setFromField("translation").setToNode("S1").setToField("set_endpoint")
Scene12.addChild(ROUTE47)
ROUTE48 = ROUTEObject().setFromNode("S1").setFromField("translation").setToNode("C0").setToField("translation")
Scene12.addChild(ROUTE48)
ROUTE49 = ROUTEObject().setFromNode("S1").setFromField("rotation").setToNode("C2").setToField("rotation")
Scene12.addChild(ROUTE49)
ROUTE50 = ROUTEObject().setFromNode("S1").setFromField("scale").setToNode("C2").setToField("scale")
Scene12.addChild(ROUTE50)
X3D0.setScene(Scene12)

X3D0.toFileX3D("x3dconnector.new.x3d")
