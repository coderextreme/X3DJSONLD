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
meta7 = meta()
meta7.setName("license")
meta7.setContent("https://www.web3d.org/x3d/content/examples/license.html")

head1.addMeta(meta7)

X3D0.setHead(head1)
Scene8 = Scene()
WorldInfo9 = WorldInfo()
WorldInfo9.setTitle("Connector Proto")

Scene8.addChildren(WorldInfo9)
Viewpoint10 = Viewpoint()
Viewpoint10.setPosition([0,0,5])
Viewpoint10.setDescription("Only Viewpoint")

Scene8.addChildren(Viewpoint10)
Background11 = Background()
Background11.setSkyColor([0.4,0.4,0.4])

Scene8.addChildren(Background11)
Transform12 = Transform()
Transform12.setDEF("G1")
Shape13 = Shape()
Appearance14 = Appearance()
Material15 = Material()
Material15.setDiffuseColor([0.7,0.2,0.2])

Appearance14.setMaterial(Material15)

Shape13.setAppearance(Appearance14)
Sphere16 = Sphere()
Sphere16.setRadius(0.1)

Shape13.setGeometry(Sphere16)

Transform12.addChildren(Shape13)
PlaneSensor17 = PlaneSensor()
PlaneSensor17.setDescription("Grab to move")
PlaneSensor17.setDEF("PS1")

Transform12.addChildren(PlaneSensor17)
ROUTE18 = ROUTE()
ROUTE18.setFromNode("PS1")
ROUTE18.setFromField("translation_changed")
ROUTE18.setToNode("G1")
ROUTE18.setToField("set_translation")

Transform12.addChildren(ROUTE18)

Scene8.addChildren(Transform12)
Transform19 = Transform()
Transform19.setDEF("G2")
Transform19.setTranslation([1,-1,0.01])
Shape20 = Shape()
Appearance21 = Appearance()
Material22 = Material()
Material22.setDiffuseColor([0.2,0.7,0.2])

Appearance21.setMaterial(Material22)

Shape20.setAppearance(Appearance21)
Sphere23 = Sphere()
Sphere23.setRadius(0.1)

Shape20.setGeometry(Sphere23)

Transform19.addChildren(Shape20)
PlaneSensor24 = PlaneSensor()
PlaneSensor24.setDescription("Grab to move")
PlaneSensor24.setOffset([1,-1,0.01])
PlaneSensor24.setDEF("PS2")

Transform19.addChildren(PlaneSensor24)
ROUTE25 = ROUTE()
ROUTE25.setFromNode("PS2")
ROUTE25.setFromField("translation_changed")
ROUTE25.setToNode("G2")
ROUTE25.setToField("set_translation")

Transform19.addChildren(ROUTE25)

Scene8.addChildren(Transform19)
Transform26 = Transform()
Transform26.setDEF("G3")
Transform26.setTranslation([1,1,0.01])
Shape27 = Shape()
Appearance28 = Appearance()
Material29 = Material()
Material29.setDiffuseColor([0.2,0.7,0.2])

Appearance28.setMaterial(Material29)

Shape27.setAppearance(Appearance28)
Sphere30 = Sphere()
Sphere30.setRadius(0.1)

Shape27.setGeometry(Sphere30)

Transform26.addChildren(Shape27)
PlaneSensor31 = PlaneSensor()
PlaneSensor31.setDescription("Grab to move")
PlaneSensor31.setOffset([1,1,0.01])
PlaneSensor31.setDEF("PS3")

Transform26.addChildren(PlaneSensor31)
ROUTE32 = ROUTE()
ROUTE32.setFromNode("PS3")
ROUTE32.setFromField("translation_changed")
ROUTE32.setToNode("G3")
ROUTE32.setToField("set_translation")

Transform26.addChildren(ROUTE32)

Scene8.addChildren(Transform26)
Transform33 = Transform()
Transform33.setDEF("G4")
Transform33.setTranslation([-1,1,0.01])
Shape34 = Shape()
Appearance35 = Appearance()
Material36 = Material()
Material36.setDiffuseColor([0.2,0.7,0.2])

Appearance35.setMaterial(Material36)

Shape34.setAppearance(Appearance35)
Sphere37 = Sphere()
Sphere37.setRadius(0.1)

Shape34.setGeometry(Sphere37)

Transform33.addChildren(Shape34)
PlaneSensor38 = PlaneSensor()
PlaneSensor38.setDescription("Grab to move")
PlaneSensor38.setOffset([-1,1,0.01])
PlaneSensor38.setDEF("PS4")

Transform33.addChildren(PlaneSensor38)
ROUTE39 = ROUTE()
ROUTE39.setFromNode("PS4")
ROUTE39.setFromField("translation_changed")
ROUTE39.setToNode("G4")
ROUTE39.setToField("set_translation")

Transform33.addChildren(ROUTE39)

Scene8.addChildren(Transform33)
Transform40 = Transform()
Transform40.setDEF("transC1")
Transform41 = Transform()
Transform41.setDEF("rotscaleC1")
Shape42 = Shape()
Appearance43 = Appearance()
Material44 = Material()
Material44.setDiffuseColor([0.2,0.7,0.7])
Material44.setTransparency(0.5)

Appearance43.setMaterial(Material44)

Shape42.setAppearance(Appearance43)
Cylinder45 = Cylinder()
Cylinder45.setRadius(0.05)

Shape42.setGeometry(Cylinder45)

Transform41.addChildren(Shape42)

Transform40.addChildren(Transform41)

Scene8.addChildren(Transform40)
Transform46 = Transform()
Transform46.setDEF("transC2")
Transform47 = Transform()
Transform47.setDEF("rotscaleC2")
Shape48 = Shape()
Appearance49 = Appearance()
Material50 = Material()
Material50.setDiffuseColor([0.2,0.7,0.7])
Material50.setTransparency(0.5)

Appearance49.setMaterial(Material50)

Shape48.setAppearance(Appearance49)
Cylinder51 = Cylinder()
Cylinder51.setRadius(0.05)

Shape48.setGeometry(Cylinder51)

Transform47.addChildren(Shape48)

Transform46.addChildren(Transform47)

Scene8.addChildren(Transform46)
Transform52 = Transform()
Transform52.setDEF("transC3")
Transform53 = Transform()
Transform53.setDEF("rotscaleC3")
Shape54 = Shape()
Appearance55 = Appearance()
Material56 = Material()
Material56.setDiffuseColor([0.2,0.7,0.7])
Material56.setTransparency(0.5)

Appearance55.setMaterial(Material56)

Shape54.setAppearance(Appearance55)
Cylinder57 = Cylinder()
Cylinder57.setRadius(0.05)

Shape54.setGeometry(Cylinder57)

Transform53.addChildren(Shape54)

Transform52.addChildren(Transform53)

Scene8.addChildren(Transform52)
ProtoDeclare58 = ProtoDeclare()
ProtoDeclare58.setName("x3dconnector")
ProtoInterface59 = ProtoInterface()
field60 = field()
field60.setName("startnode")
field60.setAccessType("initializeOnly")
field60.setType("SFNode")

ProtoInterface59.addField(field60)
field61 = field()
field61.setName("endnode")
field61.setAccessType("initializeOnly")
field61.setType("SFNode")

ProtoInterface59.addField(field61)
field62 = field()
field62.setName("transnode")
field62.setAccessType("initializeOnly")
field62.setType("SFNode")

ProtoInterface59.addField(field62)
field63 = field()
field63.setName("rotscalenode")
field63.setAccessType("initializeOnly")
field63.setType("SFNode")

ProtoInterface59.addField(field63)
field64 = field()
field64.setName("set_startpoint")
field64.setAccessType("inputOnly")
field64.setType("SFVec3f")

ProtoInterface59.addField(field64)
field65 = field()
field65.setName("set_endpoint")
field65.setAccessType("inputOnly")
field65.setType("SFVec3f")

ProtoInterface59.addField(field65)

ProtoDeclare58.setProtoInterface(ProtoInterface59)
ProtoBody66 = ProtoBody()
Script67 = Script()
Script67.setDEF("S1")
field68 = field()
field68.setName("startnode")
field68.setAccessType("initializeOnly")
field68.setType("SFNode")

Script67.addField(field68)
field69 = field()
field69.setName("endnode")
field69.setAccessType("initializeOnly")
field69.setType("SFNode")

Script67.addField(field69)
field70 = field()
field70.setName("transnode")
field70.setAccessType("initializeOnly")
field70.setType("SFNode")

Script67.addField(field70)
field71 = field()
field71.setName("rotscalenode")
field71.setAccessType("initializeOnly")
field71.setType("SFNode")

Script67.addField(field71)
field72 = field()
field72.setName("set_startpoint")
field72.setAccessType("inputOnly")
field72.setType("SFVec3f")

Script67.addField(field72)
field73 = field()
field73.setName("set_endpoint")
field73.setAccessType("inputOnly")
field73.setType("SFVec3f")

Script67.addField(field73)
IS74 = IS()
connect75 = connect()
connect75.setNodeField("startnode")
connect75.setProtoField("startnode")

IS74.addConnect(connect75)
connect76 = connect()
connect76.setNodeField("endnode")
connect76.setProtoField("endnode")

IS74.addConnect(connect76)
connect77 = connect()
connect77.setNodeField("transnode")
connect77.setProtoField("transnode")

IS74.addConnect(connect77)
connect78 = connect()
connect78.setNodeField("rotscalenode")
connect78.setProtoField("rotscalenode")

IS74.addConnect(connect78)
connect79 = connect()
connect79.setNodeField("set_startpoint")
connect79.setProtoField("set_startpoint")

IS74.addConnect(connect79)
connect80 = connect()
connect80.setNodeField("set_endpoint")
connect80.setProtoField("set_endpoint")

IS74.addConnect(connect80)

Script67.setIS(IS74)

Script67.setSourceCode('''ecmascript:\n"+
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

ProtoBody66.addChildren(Script67)

ProtoDeclare58.setProtoBody(ProtoBody66)

Scene8.addChildren(ProtoDeclare58)
ProtoInstance81 = ProtoInstance()
ProtoInstance81.setName("x3dconnector")
ProtoInstance81.setDEF("connector1")
fieldValue82 = fieldValue()
fieldValue82.setName("startnode")
Transform83 = Transform()
Transform83.setUSE("G1")

fieldValue82.addChildren(Transform83)

ProtoInstance81.addFieldValue(fieldValue82)
fieldValue84 = fieldValue()
fieldValue84.setName("endnode")
Transform85 = Transform()
Transform85.setUSE("G2")

fieldValue84.addChildren(Transform85)

ProtoInstance81.addFieldValue(fieldValue84)
fieldValue86 = fieldValue()
fieldValue86.setName("transnode")
Transform87 = Transform()
Transform87.setUSE("transC1")

fieldValue86.addChildren(Transform87)

ProtoInstance81.addFieldValue(fieldValue86)
fieldValue88 = fieldValue()
fieldValue88.setName("rotscalenode")
Transform89 = Transform()
Transform89.setUSE("rotscaleC1")

fieldValue88.addChildren(Transform89)

ProtoInstance81.addFieldValue(fieldValue88)
fieldValue90 = fieldValue()
fieldValue90.setName("set_startpoint")
fieldValue90.setValue("0 0 0")

ProtoInstance81.addFieldValue(fieldValue90)
fieldValue91 = fieldValue()
fieldValue91.setName("set_endpoint")
fieldValue91.setValue("0 0 0")

ProtoInstance81.addFieldValue(fieldValue91)

Scene8.addChildren(ProtoInstance81)
ProtoInstance92 = ProtoInstance()
ProtoInstance92.setName("x3dconnector")
ProtoInstance92.setDEF("connector2")
fieldValue93 = fieldValue()
fieldValue93.setName("startnode")
Transform94 = Transform()
Transform94.setUSE("G1")

fieldValue93.addChildren(Transform94)

ProtoInstance92.addFieldValue(fieldValue93)
fieldValue95 = fieldValue()
fieldValue95.setName("endnode")
Transform96 = Transform()
Transform96.setUSE("G3")

fieldValue95.addChildren(Transform96)

ProtoInstance92.addFieldValue(fieldValue95)
fieldValue97 = fieldValue()
fieldValue97.setName("transnode")
Transform98 = Transform()
Transform98.setUSE("transC2")

fieldValue97.addChildren(Transform98)

ProtoInstance92.addFieldValue(fieldValue97)
fieldValue99 = fieldValue()
fieldValue99.setName("rotscalenode")
Transform100 = Transform()
Transform100.setUSE("rotscaleC2")

fieldValue99.addChildren(Transform100)

ProtoInstance92.addFieldValue(fieldValue99)
fieldValue101 = fieldValue()
fieldValue101.setName("set_startpoint")
fieldValue101.setValue("0 0 0")

ProtoInstance92.addFieldValue(fieldValue101)
fieldValue102 = fieldValue()
fieldValue102.setName("set_endpoint")
fieldValue102.setValue("0 0 0")

ProtoInstance92.addFieldValue(fieldValue102)

Scene8.addChildren(ProtoInstance92)
ProtoInstance103 = ProtoInstance()
ProtoInstance103.setName("x3dconnector")
ProtoInstance103.setDEF("connector3")
fieldValue104 = fieldValue()
fieldValue104.setName("startnode")
Transform105 = Transform()
Transform105.setUSE("G1")

fieldValue104.addChildren(Transform105)

ProtoInstance103.addFieldValue(fieldValue104)
fieldValue106 = fieldValue()
fieldValue106.setName("endnode")
Transform107 = Transform()
Transform107.setUSE("G4")

fieldValue106.addChildren(Transform107)

ProtoInstance103.addFieldValue(fieldValue106)
fieldValue108 = fieldValue()
fieldValue108.setName("transnode")
Transform109 = Transform()
Transform109.setUSE("transC3")

fieldValue108.addChildren(Transform109)

ProtoInstance103.addFieldValue(fieldValue108)
fieldValue110 = fieldValue()
fieldValue110.setName("rotscalenode")
Transform111 = Transform()
Transform111.setUSE("rotscaleC3")

fieldValue110.addChildren(Transform111)

ProtoInstance103.addFieldValue(fieldValue110)
fieldValue112 = fieldValue()
fieldValue112.setName("set_startpoint")
fieldValue112.setValue("0 0 0")

ProtoInstance103.addFieldValue(fieldValue112)
fieldValue113 = fieldValue()
fieldValue113.setName("set_endpoint")
fieldValue113.setValue("0 0 0")

ProtoInstance103.addFieldValue(fieldValue113)

Scene8.addChildren(ProtoInstance103)
ROUTE114 = ROUTE()
ROUTE114.setFromNode("G1")
ROUTE114.setFromField("translation_changed")
ROUTE114.setToNode("connector1")
ROUTE114.setToField("set_startpoint")

Scene8.addChildren(ROUTE114)
ROUTE115 = ROUTE()
ROUTE115.setFromNode("G2")
ROUTE115.setFromField("translation_changed")
ROUTE115.setToNode("connector1")
ROUTE115.setToField("set_endpoint")

Scene8.addChildren(ROUTE115)
ROUTE116 = ROUTE()
ROUTE116.setFromNode("G1")
ROUTE116.setFromField("translation_changed")
ROUTE116.setToNode("connector2")
ROUTE116.setToField("set_startpoint")

Scene8.addChildren(ROUTE116)
ROUTE117 = ROUTE()
ROUTE117.setFromNode("G3")
ROUTE117.setFromField("translation_changed")
ROUTE117.setToNode("connector2")
ROUTE117.setToField("set_endpoint")

Scene8.addChildren(ROUTE117)
ROUTE118 = ROUTE()
ROUTE118.setFromNode("G1")
ROUTE118.setFromField("translation_changed")
ROUTE118.setToNode("connector3")
ROUTE118.setToField("set_startpoint")

Scene8.addChildren(ROUTE118)
ROUTE119 = ROUTE()
ROUTE119.setFromNode("G4")
ROUTE119.setFromField("translation_changed")
ROUTE119.setToNode("connector3")
ROUTE119.setToField("set_endpoint")

Scene8.addChildren(ROUTE119)

X3D0.setScene(Scene8)
X3D0.toFileX3D("../data/x3dconnectorProto_RoundTrip.x3d")
