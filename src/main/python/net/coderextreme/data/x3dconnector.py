# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("x3dconnectorProto")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("creator")
meta3.setContent("Lost, Doug Sanden I think")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("description")
meta6.setContent("a generic proto to connect two objects")

head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()

Viewpoint8 = ViewpointObject()
Viewpoint8.setPosition([0,0,5])
Viewpoint8.setDescription("Only Viewpoint")

Scene7.addChild(Viewpoint8)
Background9 = BackgroundObject()
Background9.setSkyColor([0.4,0.4,0.4])

Scene7.addChild(Background9)
Transform10 = TransformObject()
Transform10.setDEF("G1")

Shape11 = ShapeObject()

Appearance12 = AppearanceObject()

Material13 = MaterialObject()
Material13.setDiffuseColor([0.7,0.2,0.2])

Appearance12.setMaterial(Material13)
Shape11.setAppearance(Appearance12)
Sphere14 = SphereObject()
Sphere14.setRadius(0.1)

Shape11.setGeometry(Sphere14)
Transform10.addChild(Shape11)
PlaneSensor15 = PlaneSensorObject()
PlaneSensor15.setDescription("Grab to move")
PlaneSensor15.setDEF("PS1")

Transform10.addChild(PlaneSensor15)
ROUTE16 = ROUTEObject()
ROUTE16.setFromNode("PS1")
ROUTE16.setFromField("translation_changed")
ROUTE16.setToNode("G1")
ROUTE16.setToField("set_translation")

Transform10.addChild(ROUTE16)
Scene7.addChild(Transform10)
Transform17 = TransformObject()
Transform17.setDEF("G2")
Transform17.setTranslation([1,-1,0.01])

Shape18 = ShapeObject()

Appearance19 = AppearanceObject()

Material20 = MaterialObject()
Material20.setDiffuseColor([0.2,0.7,0.2])

Appearance19.setMaterial(Material20)
Shape18.setAppearance(Appearance19)
Sphere21 = SphereObject()
Sphere21.setRadius(0.1)

Shape18.setGeometry(Sphere21)
Transform17.addChild(Shape18)
PlaneSensor22 = PlaneSensorObject()
PlaneSensor22.setDescription("Grab to move")
PlaneSensor22.setOffset([1,-1,0.01])
PlaneSensor22.setDEF("PS2")

Transform17.addChild(PlaneSensor22)
ROUTE23 = ROUTEObject()
ROUTE23.setFromNode("PS2")
ROUTE23.setFromField("translation_changed")
ROUTE23.setToNode("G2")
ROUTE23.setToField("set_translation")

Transform17.addChild(ROUTE23)
Scene7.addChild(Transform17)
Transform24 = TransformObject()
Transform24.setDEF("transC1")

Transform25 = TransformObject()
Transform25.setDEF("rotscaleC1")

Shape26 = ShapeObject()

Appearance27 = AppearanceObject()

Material28 = MaterialObject()
Material28.setDiffuseColor([0.2,0.7,0.7])
Material28.setTransparency(0.5)

Appearance27.setMaterial(Material28)
Shape26.setAppearance(Appearance27)
Cylinder29 = CylinderObject()
Cylinder29.setRadius(0.05)

Shape26.setGeometry(Cylinder29)
Transform25.addChild(Shape26)
Transform24.addChild(Transform25)
Scene7.addChild(Transform24)
ProtoDeclare30 = ProtoDeclareObject()
ProtoDeclare30.setName("x3dconnector")

ProtoInterface31 = ProtoInterfaceObject()

field32 = fieldObject()
field32.setType(fieldObject.TYPE_SFNODE)
field32.setName("startnode")
field32.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

ProtoInterface31.addField(field32)
field33 = fieldObject()
field33.setType(fieldObject.TYPE_SFNODE)
field33.setName("endnode")
field33.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

ProtoInterface31.addField(field33)
field34 = fieldObject()
field34.setType(fieldObject.TYPE_SFNODE)
field34.setName("transnode")
field34.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

ProtoInterface31.addField(field34)
field35 = fieldObject()
field35.setType(fieldObject.TYPE_SFNODE)
field35.setName("rotscalenode")
field35.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

ProtoInterface31.addField(field35)
field36 = fieldObject()
field36.setType(fieldObject.TYPE_SFVEC3F)
field36.setName("set_startpoint")
field36.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

ProtoInterface31.addField(field36)
field37 = fieldObject()
field37.setType(fieldObject.TYPE_SFVEC3F)
field37.setName("set_endpoint")
field37.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

ProtoInterface31.addField(field37)
ProtoDeclare30.setProtoInterface(ProtoInterface31)
ProtoBody38 = ProtoBodyObject()

Script39 = ScriptObject()
Script39.setDEF("S1")

field40 = fieldObject()
field40.setType(fieldObject.TYPE_SFNODE)
field40.setName("startnode")
field40.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Script39.addField(field40)
field41 = fieldObject()
field41.setType(fieldObject.TYPE_SFNODE)
field41.setName("endnode")
field41.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Script39.addField(field41)
field42 = fieldObject()
field42.setType(fieldObject.TYPE_SFNODE)
field42.setName("transnode")
field42.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Script39.addField(field42)
field43 = fieldObject()
field43.setType(fieldObject.TYPE_SFNODE)
field43.setName("rotscalenode")
field43.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Script39.addField(field43)
field44 = fieldObject()
field44.setType(fieldObject.TYPE_SFVEC3F)
field44.setName("set_startpoint")
field44.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script39.addField(field44)
field45 = fieldObject()
field45.setType(fieldObject.TYPE_SFVEC3F)
field45.setName("set_endpoint")
field45.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script39.addField(field45)
IS46 = ISObject()

connect47 = connectObject()
connect47.setNodeField("startnode")
connect47.setProtoField("startnode")

IS46.addConnect(connect47)
connect48 = connectObject()
connect48.setNodeField("endnode")
connect48.setProtoField("endnode")

IS46.addConnect(connect48)
connect49 = connectObject()
connect49.setNodeField("transnode")
connect49.setProtoField("transnode")

IS46.addConnect(connect49)
connect50 = connectObject()
connect50.setNodeField("rotscalenode")
connect50.setProtoField("rotscalenode")

IS46.addConnect(connect50)
connect51 = connectObject()
connect51.setNodeField("set_startpoint")
connect51.setProtoField("set_startpoint")

IS46.addConnect(connect51)
connect52 = connectObject()
connect52.setNodeField("set_endpoint")
connect52.setProtoField("set_endpoint")

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
ProtoInstance53 = ProtoInstanceObject()
ProtoInstance53.setName("x3dconnector")
ProtoInstance53.setDEF("connector1")

fieldValue54 = fieldValueObject()
fieldValue54.setName("startnode")

Transform55 = TransformObject()
Transform55.setUSE("G1")

fieldValue54.addChild(Transform55)
ProtoInstance53.addFieldValue(fieldValue54)
fieldValue56 = fieldValueObject()
fieldValue56.setName("endnode")

Transform57 = TransformObject()
Transform57.setUSE("G2")

fieldValue56.addChild(Transform57)
ProtoInstance53.addFieldValue(fieldValue56)
fieldValue58 = fieldValueObject()
fieldValue58.setName("transnode")

Transform59 = TransformObject()
Transform59.setUSE("transC1")

fieldValue58.addChild(Transform59)
ProtoInstance53.addFieldValue(fieldValue58)
fieldValue60 = fieldValueObject()
fieldValue60.setName("rotscalenode")

Transform61 = TransformObject()
Transform61.setUSE("rotscaleC1")

fieldValue60.addChild(Transform61)
ProtoInstance53.addFieldValue(fieldValue60)
fieldValue62 = fieldValueObject()
fieldValue62.setName("set_startpoint")

ProtoInstance53.addFieldValue(fieldValue62)
fieldValue63 = fieldValueObject()
fieldValue63.setName("set_endpoint")

ProtoInstance53.addFieldValue(fieldValue63)
Scene7.addChild(ProtoInstance53)
ROUTE64 = ROUTEObject()
ROUTE64.setFromNode("G1")
ROUTE64.setFromField("translation_changed")
ROUTE64.setToNode("connector1")
ROUTE64.setToField("set_startpoint")

Scene7.addChild(ROUTE64)
ROUTE65 = ROUTEObject()
ROUTE65.setFromNode("G2")
ROUTE65.setFromField("translation_changed")
ROUTE65.setToNode("connector1")
ROUTE65.setToField("set_endpoint")

Scene7.addChild(ROUTE65)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/x3dconnector.new.x3d")
