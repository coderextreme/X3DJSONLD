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
meta5 = metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d")
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
ROUTE16 = ROUTEObject().setFromNode("PS1").setFromField("translation_changed").setToNode("G1").setToField("set_translation")
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
PlaneSensor22 = PlaneSensorObject().setDescription("Grab to move").setOffset([1,-1,0.01]).setDEF("PS2")
Transform17.addChild(PlaneSensor22)
ROUTE23 = ROUTEObject().setFromNode("PS2").setFromField("translation_changed").setToNode("G2").setToField("set_translation")
Transform17.addChild(ROUTE23)
Scene7.addChild(Transform17)
Transform24 = TransformObject().setDEF("transC1")
Transform25 = TransformObject().setDEF("rotscaleC1")
Shape26 = ShapeObject()
Appearance27 = AppearanceObject()
Material28 = MaterialObject().setDiffuseColor([0.2,0.7,0.7]).setTransparency(0.5)
Appearance27.setMaterial(Material28)
Shape26.setAppearance(Appearance27)
Cylinder29 = CylinderObject().setRadius(0.05)
Shape26.setGeometry(Cylinder29)
Transform25.addChild(Shape26)
Transform24.addChild(Transform25)
Scene7.addChild(Transform24)
ProtoDeclare30 = ProtoDeclareObject().setName("x3dconnector")
ProtoInterface31 = ProtoInterfaceObject()
field32 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
ProtoInterface31.addField(field32)
field33 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
ProtoInterface31.addField(field33)
field34 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("transnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
ProtoInterface31.addField(field34)
field35 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("rotscalenode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
ProtoInterface31.addField(field35)
field36 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface31.addField(field36)
field37 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface31.addField(field37)
ProtoDeclare30.setProtoInterface(ProtoInterface31)
ProtoBody38 = ProtoBodyObject()
Script39 = ScriptObject().setDEF("S1")
field40 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Script39.addField(field40)
field41 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Script39.addField(field41)
field42 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("transnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Script39.addField(field42)
field43 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("rotscalenode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Script39.addField(field43)
field44 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script39.addField(field44)
field45 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script39.addField(field45)
IS46 = ISObject()
connect47 = connectObject().setNodeField("startnode").setProtoField("startnode")
IS46.addConnect(connect47)
connect48 = connectObject().setNodeField("endnode").setProtoField("endnode")
IS46.addConnect(connect48)
connect49 = connectObject().setNodeField("transnode").setProtoField("transnode")
IS46.addConnect(connect49)
connect50 = connectObject().setNodeField("rotscalenode").setProtoField("rotscalenode")
IS46.addConnect(connect50)
connect51 = connectObject().setNodeField("set_startpoint").setProtoField("set_startpoint")
IS46.addConnect(connect51)
connect52 = connectObject().setNodeField("set_endpoint").setProtoField("set_endpoint")
IS46.addConnect(connect52)
Script39.setIS(IS46)

Script39.setSourceCode("ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\n"+
"		return;\n"+
"	    }\n"+
"            var dif = endpoint.subtract(startpoint);\n"+
"            var dist = dif.length()*0.5;\n"+
"            var dif2 = dif.multiply(0.5);\n"+
"            var norm = dif.normalize();\n"+
"            var transl = startpoint.add(dif2);\n"+
"	    if (typeof Quaternion !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      transnode.translation = trafo.translation;\n"+
"	      rotscalenode.rotation = trafo.rotation;\n"+
"	      rotscalenode.scale = trafo.scale;\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val);\n"+
"        }\n"+
"")
ProtoBody38.addChild(Script39)
ProtoDeclare30.setProtoBody(ProtoBody38)
Scene7.addChild(ProtoDeclare30)
ProtoInstance53 = ProtoInstanceObject().setName("x3dconnector").setDEF("connector1")
fieldValue54 = fieldValueObject().setName("startnode")
Transform55 = TransformObject().setUSE("G1")
fieldValue54.addChild(Transform55)
ProtoInstance53.addFieldValue(fieldValue54)
fieldValue56 = fieldValueObject().setName("endnode")
Transform57 = TransformObject().setUSE("G2")
fieldValue56.addChild(Transform57)
ProtoInstance53.addFieldValue(fieldValue56)
fieldValue58 = fieldValueObject().setName("transnode")
Transform59 = TransformObject().setUSE("transC1")
fieldValue58.addChild(Transform59)
ProtoInstance53.addFieldValue(fieldValue58)
fieldValue60 = fieldValueObject().setName("rotscalenode")
Transform61 = TransformObject().setUSE("rotscaleC1")
fieldValue60.addChild(Transform61)
ProtoInstance53.addFieldValue(fieldValue60)
fieldValue62 = fieldValueObject().setName("set_startpoint")
ProtoInstance53.addFieldValue(fieldValue62)
fieldValue63 = fieldValueObject().setName("set_endpoint")
ProtoInstance53.addFieldValue(fieldValue63)
Scene7.addChild(ProtoInstance53)
ROUTE64 = ROUTEObject().setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint")
Scene7.addChild(ROUTE64)
ROUTE65 = ROUTEObject().setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint")
Scene7.addChild(ROUTE65)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/x3dconnector.new.x3d")
