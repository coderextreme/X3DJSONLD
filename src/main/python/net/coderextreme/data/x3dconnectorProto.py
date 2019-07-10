# -*- coding: UTF-8 -*-
from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("x3dconnectorProto")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("creator")
meta3.setContent("Lost, Doug Sanden I think")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("description")
meta6.setContent("a generic proto to connect two objects")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = Scene()
Viewpoint8 = Viewpoint()
Viewpoint8.setPosition([0,0,5])
Viewpoint8.setDescription("Only Viewpoint")

Scene7.addChildren(Viewpoint8)
Background9 = Background()
Background9.setSkyColor([0.4,0.4,0.4])

Scene7.addChildren(Background9)
Transform10 = Transform()
Transform10.setDEF("G1")
Shape11 = Shape()
Appearance12 = Appearance()
Material13 = Material()
Material13.setDiffuseColor([0.7,0.2,0.2])

Appearance12.setMaterial(Material13)

Shape11.setAppearance(Appearance12)
Sphere14 = Sphere()
Sphere14.setRadius(0.1)

Shape11.setGeometry(Sphere14)

Transform10.addChildren(Shape11)
PlaneSensor15 = PlaneSensor()
PlaneSensor15.setDescription("Grab to move")
PlaneSensor15.setDEF("PS1")

Transform10.addChildren(PlaneSensor15)
ROUTE16 = ROUTE()
ROUTE16.setFromNode("PS1")
ROUTE16.setFromField("translation_changed")
ROUTE16.setToNode("G1")
ROUTE16.setToField("set_translation")

Transform10.addChildren(ROUTE16)

Scene7.addChildren(Transform10)
Transform17 = Transform()
Transform17.setDEF("G2")
Transform17.setTranslation([1,-1,0.01])
Shape18 = Shape()
Appearance19 = Appearance()
Material20 = Material()
Material20.setDiffuseColor([0.2,0.7,0.2])

Appearance19.setMaterial(Material20)

Shape18.setAppearance(Appearance19)
Sphere21 = Sphere()
Sphere21.setRadius(0.1)

Shape18.setGeometry(Sphere21)

Transform17.addChildren(Shape18)
PlaneSensor22 = PlaneSensor()
PlaneSensor22.setDescription("Grab to move")
PlaneSensor22.setOffset([1,-1,0.01])
PlaneSensor22.setDEF("PS2")

Transform17.addChildren(PlaneSensor22)
ROUTE23 = ROUTE()
ROUTE23.setFromNode("PS2")
ROUTE23.setFromField("translation_changed")
ROUTE23.setToNode("G2")
ROUTE23.setToField("set_translation")

Transform17.addChildren(ROUTE23)

Scene7.addChildren(Transform17)
Transform24 = Transform()
Transform24.setDEF("G3")
Transform24.setTranslation([1,1,0.01])
Shape25 = Shape()
Appearance26 = Appearance()
Material27 = Material()
Material27.setDiffuseColor([0.2,0.7,0.2])

Appearance26.setMaterial(Material27)

Shape25.setAppearance(Appearance26)
Sphere28 = Sphere()
Sphere28.setRadius(0.1)

Shape25.setGeometry(Sphere28)

Transform24.addChildren(Shape25)
PlaneSensor29 = PlaneSensor()
PlaneSensor29.setDescription("Grab to move")
PlaneSensor29.setOffset([1,1,0.01])
PlaneSensor29.setDEF("PS3")

Transform24.addChildren(PlaneSensor29)
ROUTE30 = ROUTE()
ROUTE30.setFromNode("PS3")
ROUTE30.setFromField("translation_changed")
ROUTE30.setToNode("G3")
ROUTE30.setToField("set_translation")

Transform24.addChildren(ROUTE30)

Scene7.addChildren(Transform24)
Transform31 = Transform()
Transform31.setDEF("G4")
Transform31.setTranslation([-1,1,0.01])
Shape32 = Shape()
Appearance33 = Appearance()
Material34 = Material()
Material34.setDiffuseColor([0.2,0.7,0.2])

Appearance33.setMaterial(Material34)

Shape32.setAppearance(Appearance33)
Sphere35 = Sphere()
Sphere35.setRadius(0.1)

Shape32.setGeometry(Sphere35)

Transform31.addChildren(Shape32)
PlaneSensor36 = PlaneSensor()
PlaneSensor36.setDescription("Grab to move")
PlaneSensor36.setOffset([-1,1,0.01])
PlaneSensor36.setDEF("PS4")

Transform31.addChildren(PlaneSensor36)
ROUTE37 = ROUTE()
ROUTE37.setFromNode("PS4")
ROUTE37.setFromField("translation_changed")
ROUTE37.setToNode("G4")
ROUTE37.setToField("set_translation")

Transform31.addChildren(ROUTE37)

Scene7.addChildren(Transform31)
Transform38 = Transform()
Transform38.setDEF("transC1")
Transform39 = Transform()
Transform39.setDEF("rotscaleC1")
Shape40 = Shape()
Appearance41 = Appearance()
Material42 = Material()
Material42.setDiffuseColor([0.2,0.7,0.7])
Material42.setTransparency(0.5)

Appearance41.setMaterial(Material42)

Shape40.setAppearance(Appearance41)
Cylinder43 = Cylinder()
Cylinder43.setRadius(0.05)

Shape40.setGeometry(Cylinder43)

Transform39.addChildren(Shape40)

Transform38.addChildren(Transform39)

Scene7.addChildren(Transform38)
Transform44 = Transform()
Transform44.setDEF("transC2")
Transform45 = Transform()
Transform45.setDEF("rotscaleC2")
Shape46 = Shape()
Appearance47 = Appearance()
Material48 = Material()
Material48.setDiffuseColor([0.2,0.7,0.7])
Material48.setTransparency(0.5)

Appearance47.setMaterial(Material48)

Shape46.setAppearance(Appearance47)
Cylinder49 = Cylinder()
Cylinder49.setRadius(0.05)

Shape46.setGeometry(Cylinder49)

Transform45.addChildren(Shape46)

Transform44.addChildren(Transform45)

Scene7.addChildren(Transform44)
Transform50 = Transform()
Transform50.setDEF("transC3")
Transform51 = Transform()
Transform51.setDEF("rotscaleC3")
Shape52 = Shape()
Appearance53 = Appearance()
Material54 = Material()
Material54.setDiffuseColor([0.2,0.7,0.7])
Material54.setTransparency(0.5)

Appearance53.setMaterial(Material54)

Shape52.setAppearance(Appearance53)
Cylinder55 = Cylinder()
Cylinder55.setRadius(0.05)

Shape52.setGeometry(Cylinder55)

Transform51.addChildren(Shape52)

Transform50.addChildren(Transform51)

Scene7.addChildren(Transform50)
ProtoDeclare56 = ProtoDeclare()
ProtoDeclare56.setName("x3dconnector")
ProtoInterface57 = ProtoInterface()
field58 = field()
field58.setName("startnode")
field58.setAccessType("initializeOnly")
field58.setType("SFNode")

ProtoInterface57.addField(field58)
field59 = field()
field59.setName("endnode")
field59.setAccessType("initializeOnly")
field59.setType("SFNode")

ProtoInterface57.addField(field59)
field60 = field()
field60.setName("transnode")
field60.setAccessType("initializeOnly")
field60.setType("SFNode")

ProtoInterface57.addField(field60)
field61 = field()
field61.setName("rotscalenode")
field61.setAccessType("initializeOnly")
field61.setType("SFNode")

ProtoInterface57.addField(field61)
field62 = field()
field62.setName("set_startpoint")
field62.setAccessType("inputOnly")
field62.setType("SFVec3f")

ProtoInterface57.addField(field62)
field63 = field()
field63.setName("set_endpoint")
field63.setAccessType("inputOnly")
field63.setType("SFVec3f")

ProtoInterface57.addField(field63)

ProtoDeclare56.setProtoInterface(ProtoInterface57)
ProtoBody64 = ProtoBody()
Script65 = Script()
Script65.setDEF("S1")
field66 = field()
field66.setName("startnode")
field66.setAccessType("initializeOnly")
field66.setType("SFNode")

Script65.addField(field66)
field67 = field()
field67.setName("endnode")
field67.setAccessType("initializeOnly")
field67.setType("SFNode")

Script65.addField(field67)
field68 = field()
field68.setName("transnode")
field68.setAccessType("initializeOnly")
field68.setType("SFNode")

Script65.addField(field68)
field69 = field()
field69.setName("rotscalenode")
field69.setAccessType("initializeOnly")
field69.setType("SFNode")

Script65.addField(field69)
field70 = field()
field70.setName("set_startpoint")
field70.setAccessType("inputOnly")
field70.setType("SFVec3f")

Script65.addField(field70)
field71 = field()
field71.setName("set_endpoint")
field71.setAccessType("inputOnly")
field71.setType("SFVec3f")

Script65.addField(field71)
IS72 = IS()
connect73 = connect()
connect73.setNodeField("startnode")
connect73.setProtoField("startnode")

IS72.addConnect(connect73)
connect74 = connect()
connect74.setNodeField("endnode")
connect74.setProtoField("endnode")

IS72.addConnect(connect74)
connect75 = connect()
connect75.setNodeField("transnode")
connect75.setProtoField("transnode")

IS72.addConnect(connect75)
connect76 = connect()
connect76.setNodeField("rotscalenode")
connect76.setProtoField("rotscalenode")

IS72.addConnect(connect76)
connect77 = connect()
connect77.setNodeField("set_startpoint")
connect77.setProtoField("set_startpoint")

IS72.addConnect(connect77)
connect78 = connect()
connect78.setNodeField("set_endpoint")
connect78.setProtoField("set_endpoint")

IS72.addConnect(connect78)

Script65.setIS(IS72)

Script65.setSourceCode('''ecmascript:\n"+
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
"        }''')

ProtoBody64.addChildren(Script65)

ProtoDeclare56.setProtoBody(ProtoBody64)

Scene7.addChildren(ProtoDeclare56)
ProtoInstance79 = ProtoInstance()
ProtoInstance79.setName("x3dconnector")
ProtoInstance79.setDEF("connector1")
fieldValue80 = fieldValue()
fieldValue80.setName("startnode")
Transform81 = Transform()
Transform81.setUSE("G1")

fieldValue80.addChildren(Transform81)

ProtoInstance79.addFieldValue(fieldValue80)
fieldValue82 = fieldValue()
fieldValue82.setName("endnode")
Transform83 = Transform()
Transform83.setUSE("G2")

fieldValue82.addChildren(Transform83)

ProtoInstance79.addFieldValue(fieldValue82)
fieldValue84 = fieldValue()
fieldValue84.setName("transnode")
Transform85 = Transform()
Transform85.setUSE("transC1")

fieldValue84.addChildren(Transform85)

ProtoInstance79.addFieldValue(fieldValue84)
fieldValue86 = fieldValue()
fieldValue86.setName("rotscalenode")
Transform87 = Transform()
Transform87.setUSE("rotscaleC1")

fieldValue86.addChildren(Transform87)

ProtoInstance79.addFieldValue(fieldValue86)
fieldValue88 = fieldValue()
fieldValue88.setName("set_startpoint")

ProtoInstance79.addFieldValue(fieldValue88)
fieldValue89 = fieldValue()
fieldValue89.setName("set_endpoint")

ProtoInstance79.addFieldValue(fieldValue89)

Scene7.addChildren(ProtoInstance79)
ProtoInstance90 = ProtoInstance()
ProtoInstance90.setName("x3dconnector")
ProtoInstance90.setDEF("connector2")
fieldValue91 = fieldValue()
fieldValue91.setName("startnode")
Transform92 = Transform()
Transform92.setUSE("G1")

fieldValue91.addChildren(Transform92)

ProtoInstance90.addFieldValue(fieldValue91)
fieldValue93 = fieldValue()
fieldValue93.setName("endnode")
Transform94 = Transform()
Transform94.setUSE("G3")

fieldValue93.addChildren(Transform94)

ProtoInstance90.addFieldValue(fieldValue93)
fieldValue95 = fieldValue()
fieldValue95.setName("transnode")
Transform96 = Transform()
Transform96.setUSE("transC2")

fieldValue95.addChildren(Transform96)

ProtoInstance90.addFieldValue(fieldValue95)
fieldValue97 = fieldValue()
fieldValue97.setName("rotscalenode")
Transform98 = Transform()
Transform98.setUSE("rotscaleC2")

fieldValue97.addChildren(Transform98)

ProtoInstance90.addFieldValue(fieldValue97)
fieldValue99 = fieldValue()
fieldValue99.setName("set_startpoint")

ProtoInstance90.addFieldValue(fieldValue99)
fieldValue100 = fieldValue()
fieldValue100.setName("set_endpoint")

ProtoInstance90.addFieldValue(fieldValue100)

Scene7.addChildren(ProtoInstance90)
ProtoInstance101 = ProtoInstance()
ProtoInstance101.setName("x3dconnector")
ProtoInstance101.setDEF("connector3")
fieldValue102 = fieldValue()
fieldValue102.setName("startnode")
Transform103 = Transform()
Transform103.setUSE("G1")

fieldValue102.addChildren(Transform103)

ProtoInstance101.addFieldValue(fieldValue102)
fieldValue104 = fieldValue()
fieldValue104.setName("endnode")
Transform105 = Transform()
Transform105.setUSE("G4")

fieldValue104.addChildren(Transform105)

ProtoInstance101.addFieldValue(fieldValue104)
fieldValue106 = fieldValue()
fieldValue106.setName("transnode")
Transform107 = Transform()
Transform107.setUSE("transC3")

fieldValue106.addChildren(Transform107)

ProtoInstance101.addFieldValue(fieldValue106)
fieldValue108 = fieldValue()
fieldValue108.setName("rotscalenode")
Transform109 = Transform()
Transform109.setUSE("rotscaleC3")

fieldValue108.addChildren(Transform109)

ProtoInstance101.addFieldValue(fieldValue108)
fieldValue110 = fieldValue()
fieldValue110.setName("set_startpoint")

ProtoInstance101.addFieldValue(fieldValue110)
fieldValue111 = fieldValue()
fieldValue111.setName("set_endpoint")

ProtoInstance101.addFieldValue(fieldValue111)

Scene7.addChildren(ProtoInstance101)
ROUTE112 = ROUTE()
ROUTE112.setFromNode("G1")
ROUTE112.setFromField("translation_changed")
ROUTE112.setToNode("connector1")
ROUTE112.setToField("set_startpoint")

Scene7.addChildren(ROUTE112)
ROUTE113 = ROUTE()
ROUTE113.setFromNode("G2")
ROUTE113.setFromField("translation_changed")
ROUTE113.setToNode("connector1")
ROUTE113.setToField("set_endpoint")

Scene7.addChildren(ROUTE113)
ROUTE114 = ROUTE()
ROUTE114.setFromNode("G1")
ROUTE114.setFromField("translation_changed")
ROUTE114.setToNode("connector2")
ROUTE114.setToField("set_startpoint")

Scene7.addChildren(ROUTE114)
ROUTE115 = ROUTE()
ROUTE115.setFromNode("G3")
ROUTE115.setFromField("translation_changed")
ROUTE115.setToNode("connector2")
ROUTE115.setToField("set_endpoint")

Scene7.addChildren(ROUTE115)
ROUTE116 = ROUTE()
ROUTE116.setFromNode("G1")
ROUTE116.setFromField("translation_changed")
ROUTE116.setToNode("connector3")
ROUTE116.setToField("set_startpoint")

Scene7.addChildren(ROUTE116)
ROUTE117 = ROUTE()
ROUTE117.setFromNode("G4")
ROUTE117.setFromField("translation_changed")
ROUTE117.setToNode("connector3")
ROUTE117.setToField("set_endpoint")

Scene7.addChildren(ROUTE117)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/x3dconnectorProto.new.x3d")
