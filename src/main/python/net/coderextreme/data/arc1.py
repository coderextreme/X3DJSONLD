import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("arc1.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("Lost, Doug Sanden I think")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("a generic proto to connect two objects")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
Viewpoint8 = x3d.Viewpoint()
Viewpoint8.setPosition([0,0,5])
Viewpoint8.setDescription("Only Viewpoint")

Scene7.addChildren(Viewpoint8)
Background9 = x3d.Background()
Background9.setSkyColor([0.4,0.4,0.4])

Scene7.addChildren(Background9)
ProtoDeclare10 = x3d.ProtoDeclare()
ProtoDeclare10.setName("point")
ProtoInterface11 = x3d.ProtoInterface()
field12 = x3d.field()
field12.setName("translation")
field12.setAccessType("inputOutput")
field12.setType("SFVec3f")
field12.setValue("0 0 0")

ProtoInterface11.addField(field12)

ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody13 = x3d.ProtoBody()
Transform14 = x3d.Transform()
Transform14.setDEF("node")
IS15 = x3d.IS()
connect16 = x3d.connect()
connect16.setNodeField("translation")
connect16.setProtoField("translation")

IS15.addConnect(connect16)

Transform14.setIS(IS15)
Shape17 = x3d.Shape()
Sphere18 = x3d.Sphere()
Sphere18.setRadius(0.1)

Shape17.setGeometry(Sphere18)
Appearance19 = x3d.Appearance()
Material20 = x3d.Material()
Material20.setDiffuseColor([1,0,0])

Appearance19.setMaterial(Material20)

Shape17.setAppearance(Appearance19)

Transform14.addChild(Shape17)
PositionInterpolator21 = x3d.PositionInterpolator()
PositionInterpolator21.setDEF("PI1")
PositionInterpolator21.setKey([0,1])
PositionInterpolator21.setKeyValue([0,0,0,0,5,0])

Transform14.addChildren(PositionInterpolator21)
Script22 = x3d.Script()
Script22.setDEF("MB1")
field23 = x3d.field()
field23.setName("translation")
field23.setAccessType("inputOutput")
field23.setType("SFVec3f")
field23.setValue("50 50 0")

Script22.addField(field23)
field24 = x3d.field()
field24.setName("old")
field24.setAccessType("inputOutput")
field24.setType("SFVec3f")
field24.setValue("0 0 0")

Script22.addField(field24)
field25 = x3d.field()
field25.setName("set_location")
field25.setAccessType("inputOnly")
field25.setType("SFTime")

Script22.addField(field25)
field26 = x3d.field()
field26.setName("keyValue")
field26.setAccessType("inputOutput")
field26.setType("MFVec3f")
field26.setValue("0 0 0 0 5 0")

Script22.addField(field26)

Script22.setSourceCode('''ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }''')

Transform14.addChildren(Script22)
TimeSensor27 = x3d.TimeSensor()
TimeSensor27.setDEF("CL1")
TimeSensor27.setCycleInterval(3)
TimeSensor27.setLoop(True)

Transform14.addChildren(TimeSensor27)
ROUTE28 = x3d.ROUTE()
ROUTE28.setFromNode("CL1")
ROUTE28.setFromField("cycleTime")
ROUTE28.setToNode("MB1")
ROUTE28.setToField("set_location")

Transform14.addChildren(ROUTE28)
ROUTE29 = x3d.ROUTE()
ROUTE29.setFromNode("CL1")
ROUTE29.setFromField("fraction_changed")
ROUTE29.setToNode("PI1")
ROUTE29.setToField("set_fraction")

Transform14.addChildren(ROUTE29)
ROUTE30 = x3d.ROUTE()
ROUTE30.setFromNode("MB1")
ROUTE30.setFromField("keyValue")
ROUTE30.setToNode("PI1")
ROUTE30.setToField("keyValue")

Transform14.addChildren(ROUTE30)
ROUTE31 = x3d.ROUTE()
ROUTE31.setFromNode("PI1")
ROUTE31.setFromField("value_changed")
ROUTE31.setToNode("node")
ROUTE31.setToField("set_translation")

Transform14.addChildren(ROUTE31)
ROUTE32 = x3d.ROUTE()
ROUTE32.setFromNode("MB1")
ROUTE32.setFromField("translation_changed")
ROUTE32.setToNode("node")
ROUTE32.setToField("set_translation")

Transform14.addChildren(ROUTE32)

ProtoBody13.addChildren(Transform14)

ProtoDeclare10.setProtoBody(ProtoBody13)

Scene7.addChildren(ProtoDeclare10)
Transform33 = x3d.Transform()
Transform33.setDEF("G1")
ProtoInstance34 = x3d.ProtoInstance()
ProtoInstance34.setName("point")

Transform33.addChildren(ProtoInstance34)

Scene7.addChildren(Transform33)
Transform35 = x3d.Transform()
Transform35.setDEF("G2")
ProtoInstance36 = x3d.ProtoInstance()
ProtoInstance36.setName("point")

Transform35.addChildren(ProtoInstance36)

Scene7.addChildren(Transform35)
Transform37 = x3d.Transform()
Transform37.setDEF("transC1")
Transform38 = x3d.Transform()
Transform38.setDEF("rotscaleC1")
Shape39 = x3d.Shape()
Appearance40 = x3d.Appearance()
Material41 = x3d.Material()
Material41.setDiffuseColor([0.2,0.7,0.7])
Material41.setTransparency(0.5)

Appearance40.setMaterial(Material41)

Shape39.setAppearance(Appearance40)
Cylinder42 = x3d.Cylinder()
Cylinder42.setRadius(0.05)

Shape39.setGeometry(Cylinder42)

Transform38.addChild(Shape39)

Transform37.addChildren(Transform38)

Scene7.addChildren(Transform37)
ProtoDeclare43 = x3d.ProtoDeclare()
ProtoDeclare43.setName("x3dconnector")
ProtoInterface44 = x3d.ProtoInterface()
field45 = x3d.field()
field45.setName("startnode")
field45.setAccessType("initializeOnly")
field45.setType("SFNode")

ProtoInterface44.addField(field45)
field46 = x3d.field()
field46.setName("endnode")
field46.setAccessType("initializeOnly")
field46.setType("SFNode")

ProtoInterface44.addField(field46)
field47 = x3d.field()
field47.setName("transnode")
field47.setAccessType("inputOutput")
field47.setType("SFNode")

ProtoInterface44.addField(field47)
field48 = x3d.field()
field48.setName("rotscalenode")
field48.setAccessType("inputOutput")
field48.setType("SFNode")

ProtoInterface44.addField(field48)
field49 = x3d.field()
field49.setName("set_startpoint")
field49.setAccessType("inputOnly")
field49.setType("SFVec3f")

ProtoInterface44.addField(field49)
field50 = x3d.field()
field50.setName("set_endpoint")
field50.setAccessType("inputOnly")
field50.setType("SFVec3f")

ProtoInterface44.addField(field50)

ProtoDeclare43.setProtoInterface(ProtoInterface44)
ProtoBody51 = x3d.ProtoBody()
Script52 = x3d.Script()
Script52.setDEF("S1")
field53 = x3d.field()
field53.setName("startnode")
field53.setAccessType("initializeOnly")
field53.setType("SFNode")

Script52.addField(field53)
field54 = x3d.field()
field54.setName("endnode")
field54.setAccessType("initializeOnly")
field54.setType("SFNode")

Script52.addField(field54)
field55 = x3d.field()
field55.setName("transnode")
field55.setAccessType("initializeOnly")
field55.setType("SFNode")

Script52.addField(field55)
field56 = x3d.field()
field56.setName("rotscalenode")
field56.setAccessType("initializeOnly")
field56.setType("SFNode")

Script52.addField(field56)
field57 = x3d.field()
field57.setName("set_startpoint")
field57.setAccessType("inputOnly")
field57.setType("SFVec3f")

Script52.addField(field57)
field58 = x3d.field()
field58.setName("set_endpoint")
field58.setAccessType("inputOnly")
field58.setType("SFVec3f")

Script52.addField(field58)
IS59 = x3d.IS()
connect60 = x3d.connect()
connect60.setNodeField("startnode")
connect60.setProtoField("startnode")

IS59.addConnect(connect60)
connect61 = x3d.connect()
connect61.setNodeField("endnode")
connect61.setProtoField("endnode")

IS59.addConnect(connect61)
connect62 = x3d.connect()
connect62.setNodeField("transnode")
connect62.setProtoField("transnode")

IS59.addConnect(connect62)
connect63 = x3d.connect()
connect63.setNodeField("rotscalenode")
connect63.setProtoField("rotscalenode")

IS59.addConnect(connect63)
connect64 = x3d.connect()
connect64.setNodeField("set_startpoint")
connect64.setProtoField("set_startpoint")

IS59.addConnect(connect64)
connect65 = x3d.connect()
connect65.setNodeField("set_endpoint")
connect65.setProtoField("set_endpoint")

IS59.addConnect(connect65)

Script52.setIS(IS59)

Script52.setSourceCode('''ecmascript:\n"+
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

ProtoBody51.addChildren(Script52)

ProtoDeclare43.setProtoBody(ProtoBody51)

Scene7.addChildren(ProtoDeclare43)
ProtoInstance66 = x3d.ProtoInstance()
ProtoInstance66.setName("x3dconnector")
ProtoInstance66.setDEF("connector1")
fieldValue67 = x3d.fieldValue()
fieldValue67.setName("startnode")
Transform68 = x3d.Transform()
Transform68.setUSE("G1")

fieldValue67.addChildren(Transform68)

ProtoInstance66.addFieldValue(fieldValue67)
fieldValue69 = x3d.fieldValue()
fieldValue69.setName("endnode")
Transform70 = x3d.Transform()
Transform70.setUSE("G2")

fieldValue69.addChildren(Transform70)

ProtoInstance66.addFieldValue(fieldValue69)
fieldValue71 = x3d.fieldValue()
fieldValue71.setName("transnode")
Transform72 = x3d.Transform()
Transform72.setUSE("transC1")

fieldValue71.addChildren(Transform72)

ProtoInstance66.addFieldValue(fieldValue71)
fieldValue73 = x3d.fieldValue()
fieldValue73.setName("rotscalenode")
Transform74 = x3d.Transform()
Transform74.setUSE("rotscaleC1")

fieldValue73.addChildren(Transform74)

ProtoInstance66.addFieldValue(fieldValue73)
fieldValue75 = x3d.fieldValue()
fieldValue75.setName("set_startpoint")

ProtoInstance66.addFieldValue(fieldValue75)
fieldValue76 = x3d.fieldValue()
fieldValue76.setName("set_endpoint")

ProtoInstance66.addFieldValue(fieldValue76)

Scene7.addChildren(ProtoInstance66)
ROUTE77 = x3d.ROUTE()
ROUTE77.setFromNode("G1")
ROUTE77.setFromField("translation_changed")
ROUTE77.setToNode("connector1")
ROUTE77.setToField("set_startpoint")

Scene7.addChildren(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.setFromNode("G2")
ROUTE78.setFromField("translation_changed")
ROUTE78.setToNode("connector1")
ROUTE78.setToField("set_endpoint")

Scene7.addChildren(ROUTE78)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/arc1.new.python.x3d")
