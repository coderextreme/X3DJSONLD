import x3dpsail as x3d
ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("arc2.x3d")

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
Transform10 = x3d.Transform()
Transform10.setDEF("G1")
Transform11 = x3d.Transform()
Transform11.setDEF("DECLpoint_INSTANCE_node")
Shape12 = x3d.Shape()
Sphere13 = x3d.Sphere()
Sphere13.setRadius(0.1)

Shape12.setGeometry(Sphere13)
Appearance14 = x3d.Appearance()
Material15 = x3d.Material()
Material15.setDiffuseColor([1,0,0])

Appearance14.setMaterial(Material15)

Shape12.setAppearance(Appearance14)

Transform11.addChild(Shape12)
PositionInterpolator16 = x3d.PositionInterpolator()
PositionInterpolator16.setDEF("DECLpoint_INSTANCE_PI1")
PositionInterpolator16.setKey([0,1])
PositionInterpolator16.setKeyValue([0,0,0,0,5,0])

Transform11.addChildren(PositionInterpolator16)
Script17 = x3d.Script()
Script17.setDEF("DECLpoint_INSTANCE_MB1")
field18 = x3d.field()
field18.setName("translation")
field18.setAccessType("inputOutput")
field18.setType("SFVec3f")
field18.setValue("0 0 0")

Script17.addField(field18)
field19 = x3d.field()
field19.setName("old")
field19.setAccessType("inputOutput")
field19.setType("SFVec3f")
field19.setValue("0 0 0")

Script17.addField(field19)
field20 = x3d.field()
field20.setName("set_location")
field20.setAccessType("inputOnly")
field20.setType("SFTime")

Script17.addField(field20)
field21 = x3d.field()
field21.setName("keyValue")
field21.setAccessType("inputOutput")
field21.setType("MFVec3f")
field21.setValue("0 0 0 0 5 0")

Script17.addField(field21)

Script17.setSourceCode('''ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }''')

Transform11.addChildren(Script17)
TimeSensor22 = x3d.TimeSensor()
TimeSensor22.setDEF("DECLpoint_INSTANCE_CL1")
TimeSensor22.setCycleInterval(3)
TimeSensor22.setLoop(True)

Transform11.addChildren(TimeSensor22)
ROUTE23 = x3d.ROUTE()
ROUTE23.setFromNode("DECLpoint_INSTANCE_CL1")
ROUTE23.setFromField("cycleTime")
ROUTE23.setToNode("DECLpoint_INSTANCE_MB1")
ROUTE23.setToField("set_location")

Transform11.addChildren(ROUTE23)
ROUTE24 = x3d.ROUTE()
ROUTE24.setFromNode("DECLpoint_INSTANCE_CL1")
ROUTE24.setFromField("fraction_changed")
ROUTE24.setToNode("DECLpoint_INSTANCE_PI1")
ROUTE24.setToField("set_fraction")

Transform11.addChildren(ROUTE24)
ROUTE25 = x3d.ROUTE()
ROUTE25.setFromNode("DECLpoint_INSTANCE_MB1")
ROUTE25.setFromField("keyValue")
ROUTE25.setToNode("DECLpoint_INSTANCE_PI1")
ROUTE25.setToField("keyValue")

Transform11.addChildren(ROUTE25)
ROUTE26 = x3d.ROUTE()
ROUTE26.setFromNode("DECLpoint_INSTANCE_PI1")
ROUTE26.setFromField("value_changed")
ROUTE26.setToNode("DECLpoint_INSTANCE_node")
ROUTE26.setToField("set_translation")

Transform11.addChildren(ROUTE26)
ROUTE27 = x3d.ROUTE()
ROUTE27.setFromNode("DECLpoint_INSTANCE_MB1")
ROUTE27.setFromField("translation_changed")
ROUTE27.setToNode("DECLpoint_INSTANCE_node")
ROUTE27.setToField("set_translation")

Transform11.addChildren(ROUTE27)

Transform10.addChildren(Transform11)

Scene7.addChildren(Transform10)
Transform28 = x3d.Transform()
Transform28.setDEF("G2")
Transform29 = x3d.Transform()
Transform29.setDEF("DECLpoint_INSTANCE1000_node")
Shape30 = x3d.Shape()
Sphere31 = x3d.Sphere()
Sphere31.setRadius(0.1)

Shape30.setGeometry(Sphere31)
Appearance32 = x3d.Appearance()
Material33 = x3d.Material()
Material33.setDiffuseColor([1,0,0])

Appearance32.setMaterial(Material33)

Shape30.setAppearance(Appearance32)

Transform29.addChild(Shape30)
PositionInterpolator34 = x3d.PositionInterpolator()
PositionInterpolator34.setDEF("DECLpoint_INSTANCE1000_PI1")
PositionInterpolator34.setKey([0,1])
PositionInterpolator34.setKeyValue([0,0,0,0,5,0])

Transform29.addChildren(PositionInterpolator34)
Script35 = x3d.Script()
Script35.setDEF("DECLpoint_INSTANCE1000_MB1")
field36 = x3d.field()
field36.setName("translation")
field36.setAccessType("inputOutput")
field36.setType("SFVec3f")
field36.setValue("0 0 0")

Script35.addField(field36)
field37 = x3d.field()
field37.setName("old")
field37.setAccessType("inputOutput")
field37.setType("SFVec3f")
field37.setValue("0 0 0")

Script35.addField(field37)
field38 = x3d.field()
field38.setName("set_location")
field38.setAccessType("inputOnly")
field38.setType("SFTime")

Script35.addField(field38)
field39 = x3d.field()
field39.setName("keyValue")
field39.setAccessType("inputOutput")
field39.setType("MFVec3f")
field39.setValue("0 0 0 0 5 0")

Script35.addField(field39)

Script35.setSourceCode('''ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }''')

Transform29.addChildren(Script35)
TimeSensor40 = x3d.TimeSensor()
TimeSensor40.setDEF("DECLpoint_INSTANCE1000_CL1")
TimeSensor40.setCycleInterval(3)
TimeSensor40.setLoop(True)

Transform29.addChildren(TimeSensor40)
ROUTE41 = x3d.ROUTE()
ROUTE41.setFromNode("DECLpoint_INSTANCE1000_CL1")
ROUTE41.setFromField("cycleTime")
ROUTE41.setToNode("DECLpoint_INSTANCE1000_MB1")
ROUTE41.setToField("set_location")

Transform29.addChildren(ROUTE41)
ROUTE42 = x3d.ROUTE()
ROUTE42.setFromNode("DECLpoint_INSTANCE1000_CL1")
ROUTE42.setFromField("fraction_changed")
ROUTE42.setToNode("DECLpoint_INSTANCE1000_PI1")
ROUTE42.setToField("set_fraction")

Transform29.addChildren(ROUTE42)
ROUTE43 = x3d.ROUTE()
ROUTE43.setFromNode("DECLpoint_INSTANCE1000_MB1")
ROUTE43.setFromField("keyValue")
ROUTE43.setToNode("DECLpoint_INSTANCE1000_PI1")
ROUTE43.setToField("keyValue")

Transform29.addChildren(ROUTE43)
ROUTE44 = x3d.ROUTE()
ROUTE44.setFromNode("DECLpoint_INSTANCE1000_PI1")
ROUTE44.setFromField("value_changed")
ROUTE44.setToNode("DECLpoint_INSTANCE1000_node")
ROUTE44.setToField("set_translation")

Transform29.addChildren(ROUTE44)
ROUTE45 = x3d.ROUTE()
ROUTE45.setFromNode("DECLpoint_INSTANCE1000_MB1")
ROUTE45.setFromField("translation_changed")
ROUTE45.setToNode("DECLpoint_INSTANCE1000_node")
ROUTE45.setToField("set_translation")

Transform29.addChildren(ROUTE45)

Transform28.addChildren(Transform29)

Scene7.addChildren(Transform28)
Transform46 = x3d.Transform()
Transform46.setDEF("transC1")
Transform47 = x3d.Transform()
Transform47.setDEF("rotscaleC1")
Shape48 = x3d.Shape()
Appearance49 = x3d.Appearance()
Material50 = x3d.Material()
Material50.setDiffuseColor([0.2,0.7,0.7])
Material50.setTransparency(0.5)

Appearance49.setMaterial(Material50)

Shape48.setAppearance(Appearance49)
Cylinder51 = x3d.Cylinder()
Cylinder51.setRadius(0.05)

Shape48.setGeometry(Cylinder51)

Transform47.addChild(Shape48)

Transform46.addChildren(Transform47)

Scene7.addChildren(Transform46)
Script52 = x3d.Script()
Script52.setDEF("DECLx3dconnector_connector1_S1")
field53 = x3d.field()
field53.setName("startnode")
field53.setAccessType("initializeOnly")
field53.setType("SFNode")
Transform54 = x3d.Transform()
Transform54.setUSE("G1")

field53.addChildren(Transform54)

Script52.addField(field53)
field55 = x3d.field()
field55.setName("endnode")
field55.setAccessType("initializeOnly")
field55.setType("SFNode")
Transform56 = x3d.Transform()
Transform56.setUSE("G2")

field55.addChildren(Transform56)

Script52.addField(field55)
field57 = x3d.field()
field57.setName("transC1")
field57.setAccessType("initializeOnly")
field57.setType("SFNode")
Transform58 = x3d.Transform()
Transform58.setUSE("transC1")

field57.addChildren(Transform58)

Script52.addField(field57)
field59 = x3d.field()
field59.setName("rotscaleC1")
field59.setAccessType("initializeOnly")
field59.setType("SFNode")
Transform60 = x3d.Transform()
Transform60.setUSE("rotscaleC1")

field59.addChildren(Transform60)

Script52.addField(field59)
field61 = x3d.field()
field61.setName("set_startpoint")
field61.setAccessType("inputOnly")
field61.setType("SFVec3f")

Script52.addField(field61)
field62 = x3d.field()
field62.setName("set_endpoint")
field62.setAccessType("inputOnly")
field62.setType("SFVec3f")

Script52.addField(field62)

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
"	      transC1.translation = trafo.translation;\n"+
"	      rotscaleC1.rotation = trafo.rotation;\n"+
"	      rotscaleC1.scale = trafo.scale;\n"+
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

Scene7.addChildren(Script52)
ROUTE63 = x3d.ROUTE()
ROUTE63.setFromNode("G1")
ROUTE63.setFromField("translation_changed")
ROUTE63.setToNode("DECLx3dconnector_connector1_S1")
ROUTE63.setToField("set_startpoint")

Scene7.addChildren(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromNode("G2")
ROUTE64.setFromField("translation_changed")
ROUTE64.setToNode("DECLx3dconnector_connector1_S1")
ROUTE64.setToField("set_endpoint")

Scene7.addChildren(ROUTE64)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/arc2.new.python.x3d")
X3D0.toFileJSON("../data/arc2.new.python.json")
