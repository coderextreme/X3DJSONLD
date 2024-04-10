import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("x3dconnectorProto.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("Lost, Doug Sanden I think")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("created")
meta4.setContent("Unknown")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("modified")
meta5.setContent("July 30 2023")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("generator")
meta6.setContent("manual")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("identifier")
meta7.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("description")
meta8.setContent("a generic proto to connect two objects")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("license")
meta9.setContent("https://www.web3d.org/x3d/content/examples/license.html")

head1.addMeta(meta9)

X3D0.setHead(head1)
Scene10 = x3d.Scene()
WorldInfo11 = x3d.WorldInfo()
WorldInfo11.setTitle("Connector Proto")

Scene10.addChildren(WorldInfo11)
Viewpoint12 = x3d.Viewpoint()
Viewpoint12.setPosition([0,0,5])
Viewpoint12.setDescription("Only Viewpoint")

Scene10.addChildren(Viewpoint12)
Background13 = x3d.Background()
Background13.setSkyColor([0.4,0.4,0.4])

Scene10.addChildren(Background13)
Transform14 = x3d.Transform()
Transform14.setDEF("G1")
Shape15 = x3d.Shape()
Appearance16 = x3d.Appearance()
Material17 = x3d.Material()
Material17.setDiffuseColor([0.7,0.2,0.2])

Appearance16.setMaterial(Material17)

Shape15.setAppearance(Appearance16)
Sphere18 = x3d.Sphere()
Sphere18.setRadius(0.1)

Shape15.setGeometry(Sphere18)

Transform14.addChild(Shape15)
PlaneSensor19 = x3d.PlaneSensor()
PlaneSensor19.setDescription("Grab to move")
PlaneSensor19.setDEF("PS1")

Transform14.addChildren(PlaneSensor19)
ROUTE20 = x3d.ROUTE()
ROUTE20.setFromNode("PS1")
ROUTE20.setFromField("translation_changed")
ROUTE20.setToNode("G1")
ROUTE20.setToField("set_translation")

Transform14.addChildren(ROUTE20)

Scene10.addChildren(Transform14)
Transform21 = x3d.Transform()
Transform21.setDEF("G2")
Transform21.setTranslation([1,-1,0.01])
Shape22 = x3d.Shape()
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()
Material24.setDiffuseColor([0.2,0.7,0.2])

Appearance23.setMaterial(Material24)

Shape22.setAppearance(Appearance23)
Sphere25 = x3d.Sphere()
Sphere25.setRadius(0.1)

Shape22.setGeometry(Sphere25)

Transform21.addChild(Shape22)
PlaneSensor26 = x3d.PlaneSensor()
PlaneSensor26.setDescription("Grab to move")
PlaneSensor26.setOffset([1,-1,0.01])
PlaneSensor26.setDEF("PS2")

Transform21.addChildren(PlaneSensor26)
ROUTE27 = x3d.ROUTE()
ROUTE27.setFromNode("PS2")
ROUTE27.setFromField("translation_changed")
ROUTE27.setToNode("G2")
ROUTE27.setToField("set_translation")

Transform21.addChildren(ROUTE27)

Scene10.addChildren(Transform21)
Transform28 = x3d.Transform()
Transform28.setDEF("G3")
Transform28.setTranslation([1,1,0.01])
Shape29 = x3d.Shape()
Appearance30 = x3d.Appearance()
Material31 = x3d.Material()
Material31.setDiffuseColor([0.2,0.7,0.2])

Appearance30.setMaterial(Material31)

Shape29.setAppearance(Appearance30)
Sphere32 = x3d.Sphere()
Sphere32.setRadius(0.1)

Shape29.setGeometry(Sphere32)

Transform28.addChild(Shape29)
PlaneSensor33 = x3d.PlaneSensor()
PlaneSensor33.setDescription("Grab to move")
PlaneSensor33.setOffset([1,1,0.01])
PlaneSensor33.setDEF("PS3")

Transform28.addChildren(PlaneSensor33)
ROUTE34 = x3d.ROUTE()
ROUTE34.setFromNode("PS3")
ROUTE34.setFromField("translation_changed")
ROUTE34.setToNode("G3")
ROUTE34.setToField("set_translation")

Transform28.addChildren(ROUTE34)

Scene10.addChildren(Transform28)
Transform35 = x3d.Transform()
Transform35.setDEF("G4")
Transform35.setTranslation([-1,1,0.01])
Shape36 = x3d.Shape()
Appearance37 = x3d.Appearance()
Material38 = x3d.Material()
Material38.setDiffuseColor([0.2,0.7,0.2])

Appearance37.setMaterial(Material38)

Shape36.setAppearance(Appearance37)
Sphere39 = x3d.Sphere()
Sphere39.setRadius(0.1)

Shape36.setGeometry(Sphere39)

Transform35.addChild(Shape36)
PlaneSensor40 = x3d.PlaneSensor()
PlaneSensor40.setDescription("Grab to move")
PlaneSensor40.setOffset([-1,1,0.01])
PlaneSensor40.setDEF("PS4")

Transform35.addChildren(PlaneSensor40)
ROUTE41 = x3d.ROUTE()
ROUTE41.setFromNode("PS4")
ROUTE41.setFromField("translation_changed")
ROUTE41.setToNode("G4")
ROUTE41.setToField("set_translation")

Transform35.addChildren(ROUTE41)

Scene10.addChildren(Transform35)
Transform42 = x3d.Transform()
Transform42.setDEF("transC1")
Transform43 = x3d.Transform()
Transform43.setDEF("rotscaleC1")
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Material46 = x3d.Material()
Material46.setDiffuseColor([0.2,0.7,0.7])
Material46.setTransparency(0.5)

Appearance45.setMaterial(Material46)

Shape44.setAppearance(Appearance45)
Cylinder47 = x3d.Cylinder()
Cylinder47.setRadius(0.05)

Shape44.setGeometry(Cylinder47)

Transform43.addChild(Shape44)

Transform42.addChildren(Transform43)

Scene10.addChildren(Transform42)
Transform48 = x3d.Transform()
Transform48.setDEF("transC2")
Transform49 = x3d.Transform()
Transform49.setDEF("rotscaleC2")
Shape50 = x3d.Shape()
Appearance51 = x3d.Appearance()
Material52 = x3d.Material()
Material52.setDiffuseColor([0.2,0.7,0.7])
Material52.setTransparency(0.5)

Appearance51.setMaterial(Material52)

Shape50.setAppearance(Appearance51)
Cylinder53 = x3d.Cylinder()
Cylinder53.setRadius(0.05)

Shape50.setGeometry(Cylinder53)

Transform49.addChild(Shape50)

Transform48.addChildren(Transform49)

Scene10.addChildren(Transform48)
Transform54 = x3d.Transform()
Transform54.setDEF("transC3")
Transform55 = x3d.Transform()
Transform55.setDEF("rotscaleC3")
Shape56 = x3d.Shape()
Appearance57 = x3d.Appearance()
Material58 = x3d.Material()
Material58.setDiffuseColor([0.2,0.7,0.7])
Material58.setTransparency(0.5)

Appearance57.setMaterial(Material58)

Shape56.setAppearance(Appearance57)
Cylinder59 = x3d.Cylinder()
Cylinder59.setRadius(0.05)

Shape56.setGeometry(Cylinder59)

Transform55.addChild(Shape56)

Transform54.addChildren(Transform55)

Scene10.addChildren(Transform54)
ProtoDeclare60 = x3d.ProtoDeclare()
ProtoDeclare60.setName("x3dconnector")
ProtoInterface61 = x3d.ProtoInterface()
field62 = x3d.field()
field62.setName("startnode")
field62.setAccessType("initializeOnly")
field62.setType("SFNode")

ProtoInterface61.addField(field62)
field63 = x3d.field()
field63.setName("endnode")
field63.setAccessType("initializeOnly")
field63.setType("SFNode")

ProtoInterface61.addField(field63)
field64 = x3d.field()
field64.setName("transnode")
field64.setAccessType("initializeOnly")
field64.setType("SFNode")

ProtoInterface61.addField(field64)
field65 = x3d.field()
field65.setName("rotscalenode")
field65.setAccessType("initializeOnly")
field65.setType("SFNode")

ProtoInterface61.addField(field65)
field66 = x3d.field()
field66.setName("set_startpoint")
field66.setAccessType("inputOnly")
field66.setType("SFVec3f")

ProtoInterface61.addField(field66)
field67 = x3d.field()
field67.setName("set_endpoint")
field67.setAccessType("inputOnly")
field67.setType("SFVec3f")

ProtoInterface61.addField(field67)

ProtoDeclare60.setProtoInterface(ProtoInterface61)
ProtoBody68 = x3d.ProtoBody()
Script69 = x3d.Script()
Script69.setDEF("S1")
Script69.setDirectOutput(True)
field70 = x3d.field()
field70.setName("startnode")
field70.setAccessType("initializeOnly")
field70.setType("SFNode")

Script69.addField(field70)
field71 = x3d.field()
field71.setName("endnode")
field71.setAccessType("initializeOnly")
field71.setType("SFNode")

Script69.addField(field71)
field72 = x3d.field()
field72.setName("transnode")
field72.setAccessType("initializeOnly")
field72.setType("SFNode")

Script69.addField(field72)
field73 = x3d.field()
field73.setName("rotscalenode")
field73.setAccessType("initializeOnly")
field73.setType("SFNode")

Script69.addField(field73)
field74 = x3d.field()
field74.setName("set_startpoint")
field74.setAccessType("inputOnly")
field74.setType("SFVec3f")

Script69.addField(field74)
field75 = x3d.field()
field75.setName("set_endpoint")
field75.setAccessType("inputOnly")
field75.setType("SFVec3f")

Script69.addField(field75)
IS76 = x3d.IS()
connect77 = x3d.connect()
connect77.setNodeField("startnode")
connect77.setProtoField("startnode")

IS76.addConnect(connect77)
connect78 = x3d.connect()
connect78.setNodeField("endnode")
connect78.setProtoField("endnode")

IS76.addConnect(connect78)
connect79 = x3d.connect()
connect79.setNodeField("transnode")
connect79.setProtoField("transnode")

IS76.addConnect(connect79)
connect80 = x3d.connect()
connect80.setNodeField("rotscalenode")
connect80.setProtoField("rotscalenode")

IS76.addConnect(connect80)
connect81 = x3d.connect()
connect81.setNodeField("set_startpoint")
connect81.setProtoField("set_startpoint")

IS76.addConnect(connect81)
connect82 = x3d.connect()
connect82.setNodeField("set_endpoint")
connect82.setProtoField("set_endpoint")

IS76.addConnect(connect82)

Script69.setIS(IS76)

Script69.setSourceCode('''ecmascript:\n"+
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
"	      if (trafo) {\n"+
"		      transnode.translation = trafo.translation;\n"+
"		      rotscalenode.rotation = trafo.rotation;\n"+
"		      rotscalenode.scale = trafo.scale;\n"+
"	      }\n"+
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

ProtoBody68.addChildren(Script69)

ProtoDeclare60.setProtoBody(ProtoBody68)

Scene10.addChildren(ProtoDeclare60)
ProtoInstance83 = x3d.ProtoInstance()
ProtoInstance83.setName("x3dconnector")
ProtoInstance83.setDEF("connector1")
fieldValue84 = x3d.fieldValue()
fieldValue84.setName("startnode")
Transform85 = x3d.Transform()
Transform85.setUSE("G1")

fieldValue84.addChildren(Transform85)

ProtoInstance83.addFieldValue(fieldValue84)
fieldValue86 = x3d.fieldValue()
fieldValue86.setName("endnode")
Transform87 = x3d.Transform()
Transform87.setUSE("G2")

fieldValue86.addChildren(Transform87)

ProtoInstance83.addFieldValue(fieldValue86)
fieldValue88 = x3d.fieldValue()
fieldValue88.setName("transnode")
Transform89 = x3d.Transform()
Transform89.setUSE("transC1")

fieldValue88.addChildren(Transform89)

ProtoInstance83.addFieldValue(fieldValue88)
fieldValue90 = x3d.fieldValue()
fieldValue90.setName("rotscalenode")
Transform91 = x3d.Transform()
Transform91.setUSE("rotscaleC1")

fieldValue90.addChildren(Transform91)

ProtoInstance83.addFieldValue(fieldValue90)
fieldValue92 = x3d.fieldValue()
fieldValue92.setName("set_startpoint")
fieldValue92.setValue("0 0 0")

ProtoInstance83.addFieldValue(fieldValue92)
fieldValue93 = x3d.fieldValue()
fieldValue93.setName("set_endpoint")
fieldValue93.setValue("0 0 0")

ProtoInstance83.addFieldValue(fieldValue93)

Scene10.addChildren(ProtoInstance83)
ProtoInstance94 = x3d.ProtoInstance()
ProtoInstance94.setName("x3dconnector")
ProtoInstance94.setDEF("connector2")
fieldValue95 = x3d.fieldValue()
fieldValue95.setName("startnode")
Transform96 = x3d.Transform()
Transform96.setUSE("G1")

fieldValue95.addChildren(Transform96)

ProtoInstance94.addFieldValue(fieldValue95)
fieldValue97 = x3d.fieldValue()
fieldValue97.setName("endnode")
Transform98 = x3d.Transform()
Transform98.setUSE("G3")

fieldValue97.addChildren(Transform98)

ProtoInstance94.addFieldValue(fieldValue97)
fieldValue99 = x3d.fieldValue()
fieldValue99.setName("transnode")
Transform100 = x3d.Transform()
Transform100.setUSE("transC2")

fieldValue99.addChildren(Transform100)

ProtoInstance94.addFieldValue(fieldValue99)
fieldValue101 = x3d.fieldValue()
fieldValue101.setName("rotscalenode")
Transform102 = x3d.Transform()
Transform102.setUSE("rotscaleC2")

fieldValue101.addChildren(Transform102)

ProtoInstance94.addFieldValue(fieldValue101)
fieldValue103 = x3d.fieldValue()
fieldValue103.setName("set_startpoint")
fieldValue103.setValue("0 0 0")

ProtoInstance94.addFieldValue(fieldValue103)
fieldValue104 = x3d.fieldValue()
fieldValue104.setName("set_endpoint")
fieldValue104.setValue("0 0 0")

ProtoInstance94.addFieldValue(fieldValue104)

Scene10.addChildren(ProtoInstance94)
ProtoInstance105 = x3d.ProtoInstance()
ProtoInstance105.setName("x3dconnector")
ProtoInstance105.setDEF("connector3")
fieldValue106 = x3d.fieldValue()
fieldValue106.setName("startnode")
Transform107 = x3d.Transform()
Transform107.setUSE("G1")

fieldValue106.addChildren(Transform107)

ProtoInstance105.addFieldValue(fieldValue106)
fieldValue108 = x3d.fieldValue()
fieldValue108.setName("endnode")
Transform109 = x3d.Transform()
Transform109.setUSE("G4")

fieldValue108.addChildren(Transform109)

ProtoInstance105.addFieldValue(fieldValue108)
fieldValue110 = x3d.fieldValue()
fieldValue110.setName("transnode")
Transform111 = x3d.Transform()
Transform111.setUSE("transC3")

fieldValue110.addChildren(Transform111)

ProtoInstance105.addFieldValue(fieldValue110)
fieldValue112 = x3d.fieldValue()
fieldValue112.setName("rotscalenode")
Transform113 = x3d.Transform()
Transform113.setUSE("rotscaleC3")

fieldValue112.addChildren(Transform113)

ProtoInstance105.addFieldValue(fieldValue112)
fieldValue114 = x3d.fieldValue()
fieldValue114.setName("set_startpoint")
fieldValue114.setValue("0 0 0")

ProtoInstance105.addFieldValue(fieldValue114)
fieldValue115 = x3d.fieldValue()
fieldValue115.setName("set_endpoint")
fieldValue115.setValue("0 0 0")

ProtoInstance105.addFieldValue(fieldValue115)

Scene10.addChildren(ProtoInstance105)
ROUTE116 = x3d.ROUTE()
ROUTE116.setFromNode("G1")
ROUTE116.setFromField("translation_changed")
ROUTE116.setToNode("connector1")
ROUTE116.setToField("set_startpoint")

Scene10.addChildren(ROUTE116)
ROUTE117 = x3d.ROUTE()
ROUTE117.setFromNode("G2")
ROUTE117.setFromField("translation_changed")
ROUTE117.setToNode("connector1")
ROUTE117.setToField("set_endpoint")

Scene10.addChildren(ROUTE117)
ROUTE118 = x3d.ROUTE()
ROUTE118.setFromNode("G1")
ROUTE118.setFromField("translation_changed")
ROUTE118.setToNode("connector2")
ROUTE118.setToField("set_startpoint")

Scene10.addChildren(ROUTE118)
ROUTE119 = x3d.ROUTE()
ROUTE119.setFromNode("G3")
ROUTE119.setFromField("translation_changed")
ROUTE119.setToNode("connector2")
ROUTE119.setToField("set_endpoint")

Scene10.addChildren(ROUTE119)
ROUTE120 = x3d.ROUTE()
ROUTE120.setFromNode("G1")
ROUTE120.setFromField("translation_changed")
ROUTE120.setToNode("connector3")
ROUTE120.setToField("set_startpoint")

Scene10.addChildren(ROUTE120)
ROUTE121 = x3d.ROUTE()
ROUTE121.setFromNode("G4")
ROUTE121.setFromField("translation_changed")
ROUTE121.setToNode("connector3")
ROUTE121.setToField("set_endpoint")

Scene10.addChildren(ROUTE121)

X3D0.setScene(Scene10)
X3D0.toFileX3D("../data/x3dconnectorProto.new.python.x3d")
X3D0.toFileJSON("../data/x3dconnectorProto.new.python.json")
