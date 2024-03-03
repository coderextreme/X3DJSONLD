import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("arc.x3d")

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
meta5.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d")

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
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}''')

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

ProtoBody13.addChildren(Transform14)

ProtoDeclare10.setProtoBody(ProtoBody13)

Scene7.addChildren(ProtoDeclare10)
ProtoDeclare32 = x3d.ProtoDeclare()
ProtoDeclare32.setName("x3dconnector")
ProtoInterface33 = x3d.ProtoInterface()
field34 = x3d.field()
field34.setName("startnode")
field34.setAccessType("initializeOnly")
field34.setType("SFNode")

ProtoInterface33.addField(field34)
field35 = x3d.field()
field35.setName("endnode")
field35.setAccessType("initializeOnly")
field35.setType("SFNode")

ProtoInterface33.addField(field35)
field36 = x3d.field()
field36.setName("set_startpoint")
field36.setAccessType("inputOnly")
field36.setType("SFVec3f")

ProtoInterface33.addField(field36)
field37 = x3d.field()
field37.setName("set_endpoint")
field37.setAccessType("inputOnly")
field37.setType("SFVec3f")

ProtoInterface33.addField(field37)

ProtoDeclare32.setProtoInterface(ProtoInterface33)
ProtoBody38 = x3d.ProtoBody()
Group39 = x3d.Group()
Transform40 = x3d.Transform()
Transform40.setDEF("trans")
Transform41 = x3d.Transform()
Transform41.setDEF("rotscale")
Shape42 = x3d.Shape()
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()
Material44.setDiffuseColor([0.2,0.7,0.7])
Material44.setTransparency(0.5)

Appearance43.setMaterial(Material44)

Shape42.setAppearance(Appearance43)
Cylinder45 = x3d.Cylinder()
Cylinder45.setRadius(0.05)

Shape42.setGeometry(Cylinder45)

Transform41.addChild(Shape42)

Transform40.addChildren(Transform41)

Group39.addChildren(Transform40)
Script46 = x3d.Script()
Script46.setDEF("S1")
field47 = x3d.field()
field47.setName("startnode")
field47.setAccessType("initializeOnly")
field47.setType("SFNode")

Script46.addField(field47)
field48 = x3d.field()
field48.setName("endnode")
field48.setAccessType("initializeOnly")
field48.setType("SFNode")

Script46.addField(field48)
field49 = x3d.field()
field49.setName("position")
field49.setAccessType("inputOutput")
field49.setType("SFNode")
Transform50 = x3d.Transform()
Transform50.setUSE("trans")

field49.addChildren(Transform50)

Script46.addField(field49)
field51 = x3d.field()
field51.setName("rotscale")
field51.setAccessType("inputOutput")
field51.setType("SFNode")
Transform52 = x3d.Transform()
Transform52.setUSE("rotscale")

field51.addChildren(Transform52)

Script46.addField(field51)
field53 = x3d.field()
field53.setName("set_startpoint")
field53.setAccessType("inputOnly")
field53.setType("SFVec3f")

Script46.addField(field53)
field54 = x3d.field()
field54.setName("set_endpoint")
field54.setAccessType("inputOnly")
field54.setType("SFVec3f")

Script46.addField(field54)
IS55 = x3d.IS()
connect56 = x3d.connect()
connect56.setNodeField("startnode")
connect56.setProtoField("startnode")

IS55.addConnect(connect56)
connect57 = x3d.connect()
connect57.setNodeField("endnode")
connect57.setProtoField("endnode")

IS55.addConnect(connect57)
connect58 = x3d.connect()
connect58.setNodeField("set_startpoint")
connect58.setProtoField("set_startpoint")

IS55.addConnect(connect58)
connect59 = x3d.connect()
connect59.setNodeField("set_endpoint")
connect59.setProtoField("set_endpoint")

IS55.addConnect(connect59)

Script46.setIS(IS55)

Script46.setSourceCode('''ecmascript:\n"+
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
"	    } else if (typeof SFRotation !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      if (trafo) {\n"+
"		      position.translation = trafo.translation;\n"+
"		      rotscale.rotation = trafo.rotation;\n"+
"		      rotscale.scale = trafo.scale;\n"+
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

Group39.addChildren(Script46)

ProtoBody38.addChildren(Group39)

ProtoDeclare32.setProtoBody(ProtoBody38)

Scene7.addChildren(ProtoDeclare32)
ProtoInstance60 = x3d.ProtoInstance()
ProtoInstance60.setName("point")
ProtoInstance60.setDEF("G1")

Scene7.addChildren(ProtoInstance60)
ProtoInstance61 = x3d.ProtoInstance()
ProtoInstance61.setName("point")
ProtoInstance61.setDEF("G2")

Scene7.addChildren(ProtoInstance61)
ProtoInstance62 = x3d.ProtoInstance()
ProtoInstance62.setName("point")
ProtoInstance62.setDEF("G3")

Scene7.addChildren(ProtoInstance62)
ProtoInstance63 = x3d.ProtoInstance()
ProtoInstance63.setName("point")
ProtoInstance63.setDEF("G4")

Scene7.addChildren(ProtoInstance63)
ProtoInstance64 = x3d.ProtoInstance()
ProtoInstance64.setName("x3dconnector")
ProtoInstance64.setDEF("connector1")
fieldValue65 = x3d.fieldValue()
fieldValue65.setName("startnode")
ProtoInstance66 = x3d.ProtoInstance()
ProtoInstance66.setUSE("G1")

fieldValue65.addChildren(ProtoInstance66)

ProtoInstance64.addFieldValue(fieldValue65)
fieldValue67 = x3d.fieldValue()
fieldValue67.setName("endnode")
ProtoInstance68 = x3d.ProtoInstance()
ProtoInstance68.setUSE("G2")

fieldValue67.addChildren(ProtoInstance68)

ProtoInstance64.addFieldValue(fieldValue67)
fieldValue69 = x3d.fieldValue()
fieldValue69.setName("set_startpoint")

ProtoInstance64.addFieldValue(fieldValue69)
fieldValue70 = x3d.fieldValue()
fieldValue70.setName("set_endpoint")

ProtoInstance64.addFieldValue(fieldValue70)

Scene7.addChildren(ProtoInstance64)
ProtoInstance71 = x3d.ProtoInstance()
ProtoInstance71.setName("x3dconnector")
ProtoInstance71.setDEF("connector2")
fieldValue72 = x3d.fieldValue()
fieldValue72.setName("startnode")
ProtoInstance73 = x3d.ProtoInstance()
ProtoInstance73.setUSE("G1")

fieldValue72.addChildren(ProtoInstance73)

ProtoInstance71.addFieldValue(fieldValue72)
fieldValue74 = x3d.fieldValue()
fieldValue74.setName("endnode")
ProtoInstance75 = x3d.ProtoInstance()
ProtoInstance75.setUSE("G3")

fieldValue74.addChildren(ProtoInstance75)

ProtoInstance71.addFieldValue(fieldValue74)
fieldValue76 = x3d.fieldValue()
fieldValue76.setName("set_startpoint")

ProtoInstance71.addFieldValue(fieldValue76)
fieldValue77 = x3d.fieldValue()
fieldValue77.setName("set_endpoint")

ProtoInstance71.addFieldValue(fieldValue77)

Scene7.addChildren(ProtoInstance71)
ProtoInstance78 = x3d.ProtoInstance()
ProtoInstance78.setName("x3dconnector")
ProtoInstance78.setDEF("connector3")
fieldValue79 = x3d.fieldValue()
fieldValue79.setName("startnode")
ProtoInstance80 = x3d.ProtoInstance()
ProtoInstance80.setUSE("G1")

fieldValue79.addChildren(ProtoInstance80)

ProtoInstance78.addFieldValue(fieldValue79)
fieldValue81 = x3d.fieldValue()
fieldValue81.setName("endnode")
ProtoInstance82 = x3d.ProtoInstance()
ProtoInstance82.setUSE("G4")

fieldValue81.addChildren(ProtoInstance82)

ProtoInstance78.addFieldValue(fieldValue81)
fieldValue83 = x3d.fieldValue()
fieldValue83.setName("set_startpoint")

ProtoInstance78.addFieldValue(fieldValue83)
fieldValue84 = x3d.fieldValue()
fieldValue84.setName("set_endpoint")

ProtoInstance78.addFieldValue(fieldValue84)

Scene7.addChildren(ProtoInstance78)
ROUTE85 = x3d.ROUTE()
ROUTE85.setFromNode("G1")
ROUTE85.setFromField("translation")
ROUTE85.setToNode("connector1")
ROUTE85.setToField("set_startpoint")

Scene7.addChildren(ROUTE85)
ROUTE86 = x3d.ROUTE()
ROUTE86.setFromNode("G2")
ROUTE86.setFromField("translation")
ROUTE86.setToNode("connector1")
ROUTE86.setToField("set_endpoint")

Scene7.addChildren(ROUTE86)
ROUTE87 = x3d.ROUTE()
ROUTE87.setFromNode("G1")
ROUTE87.setFromField("translation")
ROUTE87.setToNode("connector2")
ROUTE87.setToField("set_startpoint")

Scene7.addChildren(ROUTE87)
ROUTE88 = x3d.ROUTE()
ROUTE88.setFromNode("G3")
ROUTE88.setFromField("translation")
ROUTE88.setToNode("connector2")
ROUTE88.setToField("set_endpoint")

Scene7.addChildren(ROUTE88)
ROUTE89 = x3d.ROUTE()
ROUTE89.setFromNode("G1")
ROUTE89.setFromField("translation")
ROUTE89.setToNode("connector3")
ROUTE89.setToField("set_startpoint")

Scene7.addChildren(ROUTE89)
ROUTE90 = x3d.ROUTE()
ROUTE90.setFromNode("G4")
ROUTE90.setFromField("translation")
ROUTE90.setToNode("connector3")
ROUTE90.setToField("set_endpoint")

Scene7.addChildren(ROUTE90)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/arc.new.python.x3d")
X3D0.toFileJSON("../data/arc.new.python.json")
