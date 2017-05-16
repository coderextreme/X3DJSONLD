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
X3D0.setHead(head1)
Scene7 = SceneObject()
Viewpoint8 = ViewpointObject().setPosition([0,0,5]).setDescription("Only Viewpoint")
Scene7.addChild(Viewpoint8)
Background9 = BackgroundObject().setSkyColor([0.4,0.4,0.4])
Scene7.addChild(Background9)
Transform10 = TransformObject().setDEF("G1")
Shape11 = ShapeObject()
Appearance12 = AppearanceObject()
Material13 = MaterialObject().setDiffuseColor([0.7,0.2,0.2])
Appearance12.setMaterial(Material13)
Shape11.setAppearance(Appearance12)
Sphere14 = SphereObject().setRadius(0.1)
Shape11.setGeometry(Sphere14)
Transform10.addChild(Shape11)
PlaneSensor15 = PlaneSensorObject().setDescription("Grab to move").setDEF("PS1")
Transform10.addChild(PlaneSensor15)
ROUTE16 = ROUTEObject().setFromNode("PS1").setFromField("translation_changed").setToNode("G1").setToField("translation")
Transform10.addChild(ROUTE16)
Scene7.addChild(Transform10)
Transform17 = TransformObject().setDEF("G2").setTranslation([1,-1,0.01])
Shape18 = ShapeObject()
Appearance19 = AppearanceObject()
Material20 = MaterialObject().setDiffuseColor([0.2,0.7,0.2])
Appearance19.setMaterial(Material20)
Shape18.setAppearance(Appearance19)
Sphere21 = SphereObject().setRadius(0.1)
Shape18.setGeometry(Sphere21)
Transform17.addChild(Shape18)
PlaneSensor22 = PlaneSensorObject().setDescription("Grab to move").setDEF("PS2")
Transform17.addChild(PlaneSensor22)
ROUTE23 = ROUTEObject().setFromNode("PS2").setFromField("translation_changed").setToNode("G2").setToField("translation")
Transform17.addChild(ROUTE23)
Scene7.addChild(Transform17)
Transform24 = TransformObject().setDEF("C0")
Transform25 = TransformObject().setDEF("C1")
Transform26 = TransformObject().setDEF("C2")
Shape27 = ShapeObject()
Appearance28 = AppearanceObject()
Material29 = MaterialObject().setDiffuseColor([0.2,0.7,0.7]).setTransparency(0.5)
Appearance28.setMaterial(Material29)
Shape27.setAppearance(Appearance28)
Cylinder30 = CylinderObject().setRadius(0.05)
Shape27.setGeometry(Cylinder30)
Transform26.addChild(Shape27)
Transform25.addChild(Transform26)
Transform24.addChild(Transform25)
Scene7.addChild(Transform24)
Script31 = ScriptObject().setDEF("S1")
field32 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Transform33 = TransformObject().setUSE("G1")
field32.addChild(Transform33)
Script31.addField(field32)
field34 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Transform35 = TransformObject().setUSE("G2")
field34.addChild(Transform35)
Script31.addField(field34)
field36 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script31.addField(field36)
field37 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script31.addField(field37)
field38 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script31.addField(field38)
field39 = fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("rotation").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script31.addField(field39)
field40 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("scale").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script31.addField(field40)

Script31.setSourceCode("ecmascript:\n"+
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
Scene7.addChild(Script31)
ROUTE41 = ROUTEObject().setFromNode("G1").setFromField("translation").setToNode("S1").setToField("set_startpoint")
Scene7.addChild(ROUTE41)
ROUTE42 = ROUTEObject().setFromNode("G2").setFromField("translation").setToNode("S1").setToField("set_endpoint")
Scene7.addChild(ROUTE42)
ROUTE43 = ROUTEObject().setFromNode("S1").setFromField("translation").setToNode("C0").setToField("translation")
Scene7.addChild(ROUTE43)
ROUTE44 = ROUTEObject().setFromNode("S1").setFromField("rotation").setToNode("C2").setToField("rotation")
Scene7.addChild(ROUTE44)
ROUTE45 = ROUTEObject().setFromNode("S1").setFromField("scale").setToNode("C2").setToField("scale")
Scene7.addChild(ROUTE45)
X3D0.setScene(Scene7)

X3D0.toFileX3D("x3dconnector.new.x3d")
