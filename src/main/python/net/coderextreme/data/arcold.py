from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("arcold.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/arc.x3d")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("description")
meta6.setContent("an attempt to implement an arc in a graph")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = Scene()
Viewpoint8 = Viewpoint()
Viewpoint8.setPosition([0,0,5])
Viewpoint8.setDescription("a moving graph")

Scene7.addChildren(Viewpoint8)
Background9 = Background()
Background9.setSkyColor([0.4,0.4,0.4])

Scene7.addChildren(Background9)
Transform10 = Transform()
Transform10.setDEF("trans1")
Transform11 = Transform()
Transform11.setDEF("rotscale1")
Shape12 = Shape()
Appearance13 = Appearance()
Material14 = Material()
Material14.setDiffuseColor([0.2,0.7,0.7])

Appearance13.setMaterial(Material14)

Shape12.setAppearance(Appearance13)
Cylinder15 = Cylinder()
Cylinder15.setRadius(0.1)

Shape12.setGeometry(Cylinder15)

Transform11.addChildren(Shape12)

Transform10.addChildren(Transform11)

Scene7.addChildren(Transform10)
Transform16 = Transform()
Transform16.setDEF("trans2")
Transform17 = Transform()
Transform17.setDEF("rotscale2")
Shape18 = Shape()
Appearance19 = Appearance()
Material20 = Material()
Material20.setDiffuseColor([0.2,0.7,0.7])

Appearance19.setMaterial(Material20)

Shape18.setAppearance(Appearance19)
Cylinder21 = Cylinder()
Cylinder21.setRadius(0.1)

Shape18.setGeometry(Cylinder21)

Transform17.addChildren(Shape18)

Transform16.addChildren(Transform17)

Scene7.addChildren(Transform16)
Transform22 = Transform()
Transform22.setDEF("trans3")
Transform23 = Transform()
Transform23.setDEF("rotscale3")
Shape24 = Shape()
Appearance25 = Appearance()
Material26 = Material()
Material26.setDiffuseColor([0.2,0.7,0.7])

Appearance25.setMaterial(Material26)

Shape24.setAppearance(Appearance25)
Cylinder27 = Cylinder()
Cylinder27.setRadius(0.1)

Shape24.setGeometry(Cylinder27)

Transform23.addChildren(Shape24)

Transform22.addChildren(Transform23)

Scene7.addChildren(Transform22)
ProtoDeclare28 = ProtoDeclare()
ProtoDeclare28.setName("point")
ProtoInterface29 = ProtoInterface()
field30 = field()
field30.setName("translation")
field30.setAccessType("inputOutput")
field30.setType("SFVec3f")
field30.setValue("0 0 0")

ProtoInterface29.addField(field30)

ProtoDeclare28.setProtoInterface(ProtoInterface29)
ProtoBody31 = ProtoBody()
Transform32 = Transform()
Transform32.setDEF("node")
IS33 = IS()
connect34 = connect()
connect34.setNodeField("translation")
connect34.setProtoField("translation")

IS33.addConnect(connect34)

Transform32.setIS(IS33)
Shape35 = Shape()
Sphere36 = Sphere()
Sphere36.setRadius(0.1)

Shape35.setGeometry(Sphere36)
Appearance37 = Appearance()
Material38 = Material()
Material38.setDiffuseColor([1,0,0])

Appearance37.setMaterial(Material38)

Shape35.setAppearance(Appearance37)

Transform32.addChildren(Shape35)
PositionInterpolator39 = PositionInterpolator()
PositionInterpolator39.setDEF("PI1")
PositionInterpolator39.setKey([0,1])
PositionInterpolator39.setKeyValue([0,0,0,0,5,0])

Transform32.addChildren(PositionInterpolator39)
Script40 = Script()
Script40.setDEF("MB1")
field41 = field()
field41.setName("translation")
field41.setAccessType("inputOutput")
field41.setType("SFVec3f")
field41.setValue("50 50 0")

Script40.addField(field41)
field42 = field()
field42.setName("old")
field42.setAccessType("inputOutput")
field42.setType("SFVec3f")
field42.setValue("0 0 0")

Script40.addField(field42)
field43 = field()
field43.setName("set_location")
field43.setAccessType("inputOnly")
field43.setType("SFTime")

Script40.addField(field43)
field44 = field()
field44.setName("keyValue")
field44.setAccessType("outputOnly")
field44.setType("MFVec3f")

Script40.addField(field44)

Script40.setSourceCode('''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}''')

Transform32.addChildren(Script40)
TimeSensor45 = TimeSensor()
TimeSensor45.setDEF("CL1")
TimeSensor45.setCycleInterval(3)
TimeSensor45.setLoop(True)

Transform32.addChildren(TimeSensor45)
ROUTE46 = ROUTE()
ROUTE46.setFromNode("CL1")
ROUTE46.setFromField("cycleTime")
ROUTE46.setToNode("MB1")
ROUTE46.setToField("set_location")

Transform32.addChildren(ROUTE46)
ROUTE47 = ROUTE()
ROUTE47.setFromNode("CL1")
ROUTE47.setFromField("fraction_changed")
ROUTE47.setToNode("PI1")
ROUTE47.setToField("set_fraction")

Transform32.addChildren(ROUTE47)
ROUTE48 = ROUTE()
ROUTE48.setFromNode("MB1")
ROUTE48.setFromField("keyValue")
ROUTE48.setToNode("PI1")
ROUTE48.setToField("keyValue")

Transform32.addChildren(ROUTE48)
ROUTE49 = ROUTE()
ROUTE49.setFromNode("PI1")
ROUTE49.setFromField("value_changed")
ROUTE49.setToNode("node")
ROUTE49.setToField("set_translation")

Transform32.addChildren(ROUTE49)

ProtoBody31.addChildren(Transform32)

ProtoDeclare28.setProtoBody(ProtoBody31)

Scene7.addChildren(ProtoDeclare28)
#from doug sanden
ProtoDeclare50 = ProtoDeclare()
ProtoDeclare50.setName("x3dconnector")
ProtoInterface51 = ProtoInterface()
field52 = field()
field52.setName("startnode")
field52.setAccessType("inputOutput")
field52.setType("SFNode")

ProtoInterface51.addField(field52)
field53 = field()
field53.setName("endnode")
field53.setAccessType("inputOutput")
field53.setType("SFNode")

ProtoInterface51.addField(field53)
field54 = field()
field54.setName("transnode")
field54.setAccessType("inputOutput")
field54.setType("SFNode")

ProtoInterface51.addField(field54)
field55 = field()
field55.setName("rotscalenode")
field55.setAccessType("inputOutput")
field55.setType("SFNode")

ProtoInterface51.addField(field55)
field56 = field()
field56.setName("set_startpoint")
field56.setAccessType("inputOnly")
field56.setType("SFVec3f")

ProtoInterface51.addField(field56)
field57 = field()
field57.setName("set_endpoint")
field57.setAccessType("inputOnly")
field57.setType("SFVec3f")

ProtoInterface51.addField(field57)

ProtoDeclare50.setProtoInterface(ProtoInterface51)
ProtoBody58 = ProtoBody()
Script59 = Script()
Script59.setDEF("S1")
field60 = field()
field60.setName("startnode")
field60.setAccessType("inputOutput")
field60.setType("SFNode")

Script59.addField(field60)
field61 = field()
field61.setName("endnode")
field61.setAccessType("inputOutput")
field61.setType("SFNode")

Script59.addField(field61)
field62 = field()
field62.setName("transnode")
field62.setAccessType("inputOutput")
field62.setType("SFNode")

Script59.addField(field62)
field63 = field()
field63.setName("rotscalenode")
field63.setAccessType("inputOutput")
field63.setType("SFNode")

Script59.addField(field63)
field64 = field()
field64.setName("set_startpoint")
field64.setAccessType("inputOnly")
field64.setType("SFVec3f")

Script59.addField(field64)
field65 = field()
field65.setName("set_endpoint")
field65.setAccessType("inputOnly")
field65.setType("SFVec3f")

Script59.addField(field65)
IS66 = IS()
connect67 = connect()
connect67.setNodeField("startnode")
connect67.setProtoField("startnode")

IS66.addConnect(connect67)
connect68 = connect()
connect68.setNodeField("endnode")
connect68.setProtoField("endnode")

IS66.addConnect(connect68)
connect69 = connect()
connect69.setNodeField("transnode")
connect69.setProtoField("transnode")

IS66.addConnect(connect69)
connect70 = connect()
connect70.setNodeField("rotscalenode")
connect70.setProtoField("rotscalenode")

IS66.addConnect(connect70)
connect71 = connect()
connect71.setNodeField("set_startpoint")
connect71.setProtoField("set_startpoint")

IS66.addConnect(connect71)
connect72 = connect()
connect72.setNodeField("set_endpoint")
connect72.setProtoField("set_endpoint")

IS66.addConnect(connect72)

Script59.setIS(IS66)

Script59.setSourceCode('''ecmascript:\n"+
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
"		var trafo = recompute(startpoint, endpoint);\n"+
"		if (typeof trafo !== 'undefined') {\n"+
"			transnode.translation = trafo.translation;\n"+
"			rotscalenode.rotation = trafo.rotation;\n"+
"			rotscalenode.scale = trafo.scale;\n"+
"		} else {\n"+
"			Browser.print(\"recompute returned undefined\");\n"+
"		}\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val || startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val || endnode.translation);\n"+
"        }''')

ProtoBody58.addChildren(Script59)

ProtoDeclare50.setProtoBody(ProtoBody58)

Scene7.addChildren(ProtoDeclare50)
ProtoInstance73 = ProtoInstance()
ProtoInstance73.setName("point")
ProtoInstance73.setDEF("G1")

Scene7.addChildren(ProtoInstance73)
ProtoInstance74 = ProtoInstance()
ProtoInstance74.setName("point")
ProtoInstance74.setDEF("G2")

Scene7.addChildren(ProtoInstance74)
ProtoInstance75 = ProtoInstance()
ProtoInstance75.setName("point")
ProtoInstance75.setDEF("G3")

Scene7.addChildren(ProtoInstance75)
ProtoInstance76 = ProtoInstance()
ProtoInstance76.setName("point")
ProtoInstance76.setDEF("G4")

Scene7.addChildren(ProtoInstance76)
ProtoInstance77 = ProtoInstance()
ProtoInstance77.setName("x3dconnector")
ProtoInstance77.setDEF("connector1")
fieldValue78 = fieldValue()
fieldValue78.setName("startnode")
ProtoInstance79 = ProtoInstance()
ProtoInstance79.setUSE("G1")

fieldValue78.addChildren(ProtoInstance79)

ProtoInstance77.addFieldValue(fieldValue78)
fieldValue80 = fieldValue()
fieldValue80.setName("endnode")
ProtoInstance81 = ProtoInstance()
ProtoInstance81.setUSE("G2")

fieldValue80.addChildren(ProtoInstance81)

ProtoInstance77.addFieldValue(fieldValue80)
fieldValue82 = fieldValue()
fieldValue82.setName("transnode")
Transform83 = Transform()
Transform83.setUSE("trans1")

fieldValue82.addChildren(Transform83)

ProtoInstance77.addFieldValue(fieldValue82)
fieldValue84 = fieldValue()
fieldValue84.setName("rotscalenode")
Transform85 = Transform()
Transform85.setUSE("rotscale1")

fieldValue84.addChildren(Transform85)

ProtoInstance77.addFieldValue(fieldValue84)

Scene7.addChildren(ProtoInstance77)
ProtoInstance86 = ProtoInstance()
ProtoInstance86.setName("x3dconnector")
ProtoInstance86.setDEF("connector2")
fieldValue87 = fieldValue()
fieldValue87.setName("startnode")
ProtoInstance88 = ProtoInstance()
ProtoInstance88.setUSE("G1")

fieldValue87.addChildren(ProtoInstance88)

ProtoInstance86.addFieldValue(fieldValue87)
fieldValue89 = fieldValue()
fieldValue89.setName("endnode")
ProtoInstance90 = ProtoInstance()
ProtoInstance90.setUSE("G3")

fieldValue89.addChildren(ProtoInstance90)

ProtoInstance86.addFieldValue(fieldValue89)
fieldValue91 = fieldValue()
fieldValue91.setName("transnode")
Transform92 = Transform()
Transform92.setUSE("trans2")

fieldValue91.addChildren(Transform92)

ProtoInstance86.addFieldValue(fieldValue91)
fieldValue93 = fieldValue()
fieldValue93.setName("rotscalenode")
Transform94 = Transform()
Transform94.setUSE("rotscale2")

fieldValue93.addChildren(Transform94)

ProtoInstance86.addFieldValue(fieldValue93)

Scene7.addChildren(ProtoInstance86)
ProtoInstance95 = ProtoInstance()
ProtoInstance95.setName("x3dconnector")
ProtoInstance95.setDEF("connector3")
fieldValue96 = fieldValue()
fieldValue96.setName("startnode")
ProtoInstance97 = ProtoInstance()
ProtoInstance97.setUSE("G1")

fieldValue96.addChildren(ProtoInstance97)

ProtoInstance95.addFieldValue(fieldValue96)
fieldValue98 = fieldValue()
fieldValue98.setName("endnode")
ProtoInstance99 = ProtoInstance()
ProtoInstance99.setUSE("G4")

fieldValue98.addChildren(ProtoInstance99)

ProtoInstance95.addFieldValue(fieldValue98)
fieldValue100 = fieldValue()
fieldValue100.setName("transnode")
Transform101 = Transform()
Transform101.setUSE("trans3")

fieldValue100.addChildren(Transform101)

ProtoInstance95.addFieldValue(fieldValue100)
fieldValue102 = fieldValue()
fieldValue102.setName("rotscalenode")
Transform103 = Transform()
Transform103.setUSE("rotscale3")

fieldValue102.addChildren(Transform103)

ProtoInstance95.addFieldValue(fieldValue102)

Scene7.addChildren(ProtoInstance95)
ROUTE104 = ROUTE()
ROUTE104.setFromNode("G1")
ROUTE104.setFromField("translation_changed")
ROUTE104.setToNode("connector1")
ROUTE104.setToField("set_startpoint")

Scene7.addChildren(ROUTE104)
ROUTE105 = ROUTE()
ROUTE105.setFromNode("G2")
ROUTE105.setFromField("translation_changed")
ROUTE105.setToNode("connector1")
ROUTE105.setToField("set_endpoint")

Scene7.addChildren(ROUTE105)
ROUTE106 = ROUTE()
ROUTE106.setFromNode("G1")
ROUTE106.setFromField("translation_changed")
ROUTE106.setToNode("connector2")
ROUTE106.setToField("set_startpoint")

Scene7.addChildren(ROUTE106)
ROUTE107 = ROUTE()
ROUTE107.setFromNode("G3")
ROUTE107.setFromField("translation_changed")
ROUTE107.setToNode("connector2")
ROUTE107.setToField("set_endpoint")

Scene7.addChildren(ROUTE107)
ROUTE108 = ROUTE()
ROUTE108.setFromNode("G1")
ROUTE108.setFromField("translation_changed")
ROUTE108.setToNode("connector3")
ROUTE108.setToField("set_startpoint")

Scene7.addChildren(ROUTE108)
ROUTE109 = ROUTE()
ROUTE109.setFromNode("G4")
ROUTE109.setFromField("translation_changed")
ROUTE109.setToNode("connector3")
ROUTE109.setToField("set_endpoint")

Scene7.addChildren(ROUTE109)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/arcold_RoundTrip.x3d")
