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
Transform24.setDEF("G3")
Transform24.setTranslation([1,1,0.01])

Shape25 = ShapeObject()

Appearance26 = AppearanceObject()

Material27 = MaterialObject()
Material27.setDiffuseColor([0.2,0.7,0.2])

Appearance26.setMaterial(Material27)
Shape25.setAppearance(Appearance26)
Sphere28 = SphereObject()
Sphere28.setRadius(0.1)

Shape25.setGeometry(Sphere28)
Transform24.addChild(Shape25)
PlaneSensor29 = PlaneSensorObject()
PlaneSensor29.setDescription("Grab to move")
PlaneSensor29.setOffset([1,1,0.01])
PlaneSensor29.setDEF("PS3")

Transform24.addChild(PlaneSensor29)
ROUTE30 = ROUTEObject()
ROUTE30.setFromNode("PS3")
ROUTE30.setFromField("translation_changed")
ROUTE30.setToNode("G3")
ROUTE30.setToField("set_translation")

Transform24.addChild(ROUTE30)
Scene7.addChild(Transform24)
Transform31 = TransformObject()
Transform31.setDEF("G4")
Transform31.setTranslation([-1,1,0.01])

Shape32 = ShapeObject()

Appearance33 = AppearanceObject()

Material34 = MaterialObject()
Material34.setDiffuseColor([0.2,0.7,0.2])

Appearance33.setMaterial(Material34)
Shape32.setAppearance(Appearance33)
Sphere35 = SphereObject()
Sphere35.setRadius(0.1)

Shape32.setGeometry(Sphere35)
Transform31.addChild(Shape32)
PlaneSensor36 = PlaneSensorObject()
PlaneSensor36.setDescription("Grab to move")
PlaneSensor36.setOffset([-1,1,0.01])
PlaneSensor36.setDEF("PS4")

Transform31.addChild(PlaneSensor36)
ROUTE37 = ROUTEObject()
ROUTE37.setFromNode("PS4")
ROUTE37.setFromField("translation_changed")
ROUTE37.setToNode("G4")
ROUTE37.setToField("set_translation")

Transform31.addChild(ROUTE37)
Scene7.addChild(Transform31)
Transform38 = TransformObject()
Transform38.setDEF("transC1")

Transform39 = TransformObject()
Transform39.setDEF("rotscaleC1")

Shape40 = ShapeObject()

Appearance41 = AppearanceObject()

Material42 = MaterialObject()
Material42.setDiffuseColor([0.2,0.7,0.7])
Material42.setTransparency(0.5)

Appearance41.setMaterial(Material42)
Shape40.setAppearance(Appearance41)
Cylinder43 = CylinderObject()
Cylinder43.setRadius(0.05)

Shape40.setGeometry(Cylinder43)
Transform39.addChild(Shape40)
Transform38.addChild(Transform39)
Scene7.addChild(Transform38)
Transform44 = TransformObject()
Transform44.setDEF("transC2")

Transform45 = TransformObject()
Transform45.setDEF("rotscaleC2")

Shape46 = ShapeObject()

Appearance47 = AppearanceObject()

Material48 = MaterialObject()
Material48.setDiffuseColor([0.2,0.7,0.7])
Material48.setTransparency(0.5)

Appearance47.setMaterial(Material48)
Shape46.setAppearance(Appearance47)
Cylinder49 = CylinderObject()
Cylinder49.setRadius(0.05)

Shape46.setGeometry(Cylinder49)
Transform45.addChild(Shape46)
Transform44.addChild(Transform45)
Scene7.addChild(Transform44)
Transform50 = TransformObject()
Transform50.setDEF("transC3")

Transform51 = TransformObject()
Transform51.setDEF("rotscaleC3")

Shape52 = ShapeObject()

Appearance53 = AppearanceObject()

Material54 = MaterialObject()
Material54.setDiffuseColor([0.2,0.7,0.7])
Material54.setTransparency(0.5)

Appearance53.setMaterial(Material54)
Shape52.setAppearance(Appearance53)
Cylinder55 = CylinderObject()
Cylinder55.setRadius(0.05)

Shape52.setGeometry(Cylinder55)
Transform51.addChild(Shape52)
Transform50.addChild(Transform51)
Scene7.addChild(Transform50)
ProtoDeclare56 = ProtoDeclareObject()
ProtoDeclare56.setName("x3dconnector")

ProtoInterface57 = ProtoInterfaceObject()

field58 = fieldObject()
field58.setType(fieldObject.TYPE_SFNODE)
field58.setName("startnode")
field58.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

ProtoInterface57.addField(field58)
field59 = fieldObject()
field59.setType(fieldObject.TYPE_SFNODE)
field59.setName("endnode")
field59.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

ProtoInterface57.addField(field59)
field60 = fieldObject()
field60.setType(fieldObject.TYPE_SFNODE)
field60.setName("transnode")
field60.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

ProtoInterface57.addField(field60)
field61 = fieldObject()
field61.setType(fieldObject.TYPE_SFNODE)
field61.setName("rotscalenode")
field61.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

ProtoInterface57.addField(field61)
field62 = fieldObject()
field62.setType(fieldObject.TYPE_SFVEC3F)
field62.setName("set_startpoint")
field62.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

ProtoInterface57.addField(field62)
field63 = fieldObject()
field63.setType(fieldObject.TYPE_SFVEC3F)
field63.setName("set_endpoint")
field63.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

ProtoInterface57.addField(field63)
ProtoDeclare56.setProtoInterface(ProtoInterface57)
ProtoBody64 = ProtoBodyObject()

Script65 = ScriptObject()
Script65.setDEF("S1")

field66 = fieldObject()
field66.setType(fieldObject.TYPE_SFNODE)
field66.setName("startnode")
field66.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Script65.addField(field66)
field67 = fieldObject()
field67.setType(fieldObject.TYPE_SFNODE)
field67.setName("endnode")
field67.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Script65.addField(field67)
field68 = fieldObject()
field68.setType(fieldObject.TYPE_SFNODE)
field68.setName("transnode")
field68.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Script65.addField(field68)
field69 = fieldObject()
field69.setType(fieldObject.TYPE_SFNODE)
field69.setName("rotscalenode")
field69.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Script65.addField(field69)
field70 = fieldObject()
field70.setType(fieldObject.TYPE_SFVEC3F)
field70.setName("set_startpoint")
field70.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script65.addField(field70)
field71 = fieldObject()
field71.setType(fieldObject.TYPE_SFVEC3F)
field71.setName("set_endpoint")
field71.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script65.addField(field71)
IS72 = ISObject()

connect73 = connectObject()
connect73.setNodeField("startnode")
connect73.setProtoField("startnode")

IS72.addConnect(connect73)
connect74 = connectObject()
connect74.setNodeField("endnode")
connect74.setProtoField("endnode")

IS72.addConnect(connect74)
connect75 = connectObject()
connect75.setNodeField("transnode")
connect75.setProtoField("transnode")

IS72.addConnect(connect75)
connect76 = connectObject()
connect76.setNodeField("rotscalenode")
connect76.setProtoField("rotscalenode")

IS72.addConnect(connect76)
connect77 = connectObject()
connect77.setNodeField("set_startpoint")
connect77.setProtoField("set_startpoint")

IS72.addConnect(connect77)
connect78 = connectObject()
connect78.setNodeField("set_endpoint")
connect78.setProtoField("set_endpoint")

IS72.addConnect(connect78)
Script65.setIS(IS72)

Script65.setSourceCode("ecmascript:\n"+
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
ProtoBody64.addChild(Script65)
ProtoDeclare56.setProtoBody(ProtoBody64)
Scene7.addChild(ProtoDeclare56)
ProtoInstance79 = ProtoInstanceObject()
ProtoInstance79.setName("x3dconnector")
ProtoInstance79.setDEF("connector1")

fieldValue80 = fieldValueObject()
fieldValue80.setName("startnode")

Transform81 = TransformObject()
Transform81.setUSE("G1")

fieldValue80.addChild(Transform81)
ProtoInstance79.addFieldValue(fieldValue80)
fieldValue82 = fieldValueObject()
fieldValue82.setName("endnode")

Transform83 = TransformObject()
Transform83.setUSE("G2")

fieldValue82.addChild(Transform83)
ProtoInstance79.addFieldValue(fieldValue82)
fieldValue84 = fieldValueObject()
fieldValue84.setName("transnode")

Transform85 = TransformObject()
Transform85.setUSE("transC1")

fieldValue84.addChild(Transform85)
ProtoInstance79.addFieldValue(fieldValue84)
fieldValue86 = fieldValueObject()
fieldValue86.setName("rotscalenode")

Transform87 = TransformObject()
Transform87.setUSE("rotscaleC1")

fieldValue86.addChild(Transform87)
ProtoInstance79.addFieldValue(fieldValue86)
fieldValue88 = fieldValueObject()
fieldValue88.setName("set_startpoint")

ProtoInstance79.addFieldValue(fieldValue88)
fieldValue89 = fieldValueObject()
fieldValue89.setName("set_endpoint")

ProtoInstance79.addFieldValue(fieldValue89)
Scene7.addChild(ProtoInstance79)
ProtoInstance90 = ProtoInstanceObject()
ProtoInstance90.setName("x3dconnector")
ProtoInstance90.setDEF("connector2")

fieldValue91 = fieldValueObject()
fieldValue91.setName("startnode")

Transform92 = TransformObject()
Transform92.setUSE("G1")

fieldValue91.addChild(Transform92)
ProtoInstance90.addFieldValue(fieldValue91)
fieldValue93 = fieldValueObject()
fieldValue93.setName("endnode")

Transform94 = TransformObject()
Transform94.setUSE("G3")

fieldValue93.addChild(Transform94)
ProtoInstance90.addFieldValue(fieldValue93)
fieldValue95 = fieldValueObject()
fieldValue95.setName("transnode")

Transform96 = TransformObject()
Transform96.setUSE("transC2")

fieldValue95.addChild(Transform96)
ProtoInstance90.addFieldValue(fieldValue95)
fieldValue97 = fieldValueObject()
fieldValue97.setName("rotscalenode")

Transform98 = TransformObject()
Transform98.setUSE("rotscaleC2")

fieldValue97.addChild(Transform98)
ProtoInstance90.addFieldValue(fieldValue97)
fieldValue99 = fieldValueObject()
fieldValue99.setName("set_startpoint")

ProtoInstance90.addFieldValue(fieldValue99)
fieldValue100 = fieldValueObject()
fieldValue100.setName("set_endpoint")

ProtoInstance90.addFieldValue(fieldValue100)
Scene7.addChild(ProtoInstance90)
ProtoInstance101 = ProtoInstanceObject()
ProtoInstance101.setName("x3dconnector")
ProtoInstance101.setDEF("connector3")

fieldValue102 = fieldValueObject()
fieldValue102.setName("startnode")

Transform103 = TransformObject()
Transform103.setUSE("G1")

fieldValue102.addChild(Transform103)
ProtoInstance101.addFieldValue(fieldValue102)
fieldValue104 = fieldValueObject()
fieldValue104.setName("endnode")

Transform105 = TransformObject()
Transform105.setUSE("G4")

fieldValue104.addChild(Transform105)
ProtoInstance101.addFieldValue(fieldValue104)
fieldValue106 = fieldValueObject()
fieldValue106.setName("transnode")

Transform107 = TransformObject()
Transform107.setUSE("transC3")

fieldValue106.addChild(Transform107)
ProtoInstance101.addFieldValue(fieldValue106)
fieldValue108 = fieldValueObject()
fieldValue108.setName("rotscalenode")

Transform109 = TransformObject()
Transform109.setUSE("rotscaleC3")

fieldValue108.addChild(Transform109)
ProtoInstance101.addFieldValue(fieldValue108)
fieldValue110 = fieldValueObject()
fieldValue110.setName("set_startpoint")

ProtoInstance101.addFieldValue(fieldValue110)
fieldValue111 = fieldValueObject()
fieldValue111.setName("set_endpoint")

ProtoInstance101.addFieldValue(fieldValue111)
Scene7.addChild(ProtoInstance101)
ROUTE112 = ROUTEObject()
ROUTE112.setFromNode("G1")
ROUTE112.setFromField("translation_changed")
ROUTE112.setToNode("connector1")
ROUTE112.setToField("set_startpoint")

Scene7.addChild(ROUTE112)
ROUTE113 = ROUTEObject()
ROUTE113.setFromNode("G2")
ROUTE113.setFromField("translation_changed")
ROUTE113.setToNode("connector1")
ROUTE113.setToField("set_endpoint")

Scene7.addChild(ROUTE113)
ROUTE114 = ROUTEObject()
ROUTE114.setFromNode("G1")
ROUTE114.setFromField("translation_changed")
ROUTE114.setToNode("connector2")
ROUTE114.setToField("set_startpoint")

Scene7.addChild(ROUTE114)
ROUTE115 = ROUTEObject()
ROUTE115.setFromNode("G3")
ROUTE115.setFromField("translation_changed")
ROUTE115.setToNode("connector2")
ROUTE115.setToField("set_endpoint")

Scene7.addChild(ROUTE115)
ROUTE116 = ROUTEObject()
ROUTE116.setFromNode("G1")
ROUTE116.setFromField("translation_changed")
ROUTE116.setToNode("connector3")
ROUTE116.setToField("set_startpoint")

Scene7.addChild(ROUTE116)
ROUTE117 = ROUTEObject()
ROUTE117.setFromNode("G4")
ROUTE117.setFromField("translation_changed")
ROUTE117.setToNode("connector3")
ROUTE117.setToField("set_endpoint")

Scene7.addChild(ROUTE117)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/x3dconnectorProto.new.x3d")
