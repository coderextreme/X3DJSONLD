from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("arc3.x3d")

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
Transform10.setDEF("DECLpoint_G1_node")
Shape11 = Shape()
Sphere12 = Sphere()
Sphere12.setRadius(0.1)

Shape11.setGeometry(Sphere12)
Appearance13 = Appearance()
Material14 = Material()
Material14.setDiffuseColor([1,0,0])

Appearance13.setMaterial(Material14)

Shape11.setAppearance(Appearance13)

Transform10.addChildren(Shape11)
PositionInterpolator15 = PositionInterpolator()
PositionInterpolator15.setDEF("DECLpoint_G1_PI1")
PositionInterpolator15.setKey([0,1])
PositionInterpolator15.setKeyValue([0,0,0,0,5,0])

Transform10.addChildren(PositionInterpolator15)
Script16 = Script()
Script16.setDEF("DECLpoint_G1_MB1")
field17 = field()
field17.setName("translation")
field17.setAccessType("inputOutput")
field17.setType("SFVec3f")
field17.setValue("0 0 0")

Script16.addField(field17)
field18 = field()
field18.setName("old")
field18.setAccessType("inputOutput")
field18.setType("SFVec3f")
field18.setValue("0 0 0")

Script16.addField(field18)
field19 = field()
field19.setName("set_location")
field19.setAccessType("inputOnly")
field19.setType("SFTime")

Script16.addField(field19)
field20 = field()
field20.setName("keyValue")
field20.setAccessType("inputOutput")
field20.setType("MFVec3f")
field20.setValue("0 0 0 0 5 0")

Script16.addField(field20)

Script16.setSourceCode('''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}''')

Transform10.addChildren(Script16)
TimeSensor21 = TimeSensor()
TimeSensor21.setDEF("DECLpoint_G1_CL1")
TimeSensor21.setCycleInterval(3)
TimeSensor21.setLoop(True)

Transform10.addChildren(TimeSensor21)
ROUTE22 = ROUTE()
ROUTE22.setFromNode("DECLpoint_G1_CL1")
ROUTE22.setFromField("cycleTime")
ROUTE22.setToNode("DECLpoint_G1_MB1")
ROUTE22.setToField("set_location")

Transform10.addChildren(ROUTE22)
ROUTE23 = ROUTE()
ROUTE23.setFromNode("DECLpoint_G1_CL1")
ROUTE23.setFromField("fraction_changed")
ROUTE23.setToNode("DECLpoint_G1_PI1")
ROUTE23.setToField("set_fraction")

Transform10.addChildren(ROUTE23)
ROUTE24 = ROUTE()
ROUTE24.setFromNode("DECLpoint_G1_MB1")
ROUTE24.setFromField("keyValue")
ROUTE24.setToNode("DECLpoint_G1_PI1")
ROUTE24.setToField("keyValue")

Transform10.addChildren(ROUTE24)
ROUTE25 = ROUTE()
ROUTE25.setFromNode("DECLpoint_G1_PI1")
ROUTE25.setFromField("value_changed")
ROUTE25.setToNode("DECLpoint_G1_node")
ROUTE25.setToField("set_translation")

Transform10.addChildren(ROUTE25)

Scene7.addChildren(Transform10)
Transform26 = Transform()
Transform26.setDEF("DECLpoint_G2_node")
Shape27 = Shape()
Sphere28 = Sphere()
Sphere28.setRadius(0.1)

Shape27.setGeometry(Sphere28)
Appearance29 = Appearance()
Material30 = Material()
Material30.setDiffuseColor([1,0,0])

Appearance29.setMaterial(Material30)

Shape27.setAppearance(Appearance29)

Transform26.addChildren(Shape27)
PositionInterpolator31 = PositionInterpolator()
PositionInterpolator31.setDEF("DECLpoint_G2_PI1")
PositionInterpolator31.setKey([0,1])
PositionInterpolator31.setKeyValue([0,0,0,0,5,0])

Transform26.addChildren(PositionInterpolator31)
Script32 = Script()
Script32.setDEF("DECLpoint_G2_MB1")
field33 = field()
field33.setName("translation")
field33.setAccessType("inputOutput")
field33.setType("SFVec3f")
field33.setValue("0 0 0")

Script32.addField(field33)
field34 = field()
field34.setName("old")
field34.setAccessType("inputOutput")
field34.setType("SFVec3f")
field34.setValue("0 0 0")

Script32.addField(field34)
field35 = field()
field35.setName("set_location")
field35.setAccessType("inputOnly")
field35.setType("SFTime")

Script32.addField(field35)
field36 = field()
field36.setName("keyValue")
field36.setAccessType("inputOutput")
field36.setType("MFVec3f")
field36.setValue("0 0 0 0 5 0")

Script32.addField(field36)

Script32.setSourceCode('''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}''')

Transform26.addChildren(Script32)
TimeSensor37 = TimeSensor()
TimeSensor37.setDEF("DECLpoint_G2_CL1")
TimeSensor37.setCycleInterval(3)
TimeSensor37.setLoop(True)

Transform26.addChildren(TimeSensor37)
ROUTE38 = ROUTE()
ROUTE38.setFromNode("DECLpoint_G2_CL1")
ROUTE38.setFromField("cycleTime")
ROUTE38.setToNode("DECLpoint_G2_MB1")
ROUTE38.setToField("set_location")

Transform26.addChildren(ROUTE38)
ROUTE39 = ROUTE()
ROUTE39.setFromNode("DECLpoint_G2_CL1")
ROUTE39.setFromField("fraction_changed")
ROUTE39.setToNode("DECLpoint_G2_PI1")
ROUTE39.setToField("set_fraction")

Transform26.addChildren(ROUTE39)
ROUTE40 = ROUTE()
ROUTE40.setFromNode("DECLpoint_G2_MB1")
ROUTE40.setFromField("keyValue")
ROUTE40.setToNode("DECLpoint_G2_PI1")
ROUTE40.setToField("keyValue")

Transform26.addChildren(ROUTE40)
ROUTE41 = ROUTE()
ROUTE41.setFromNode("DECLpoint_G2_PI1")
ROUTE41.setFromField("value_changed")
ROUTE41.setToNode("DECLpoint_G2_node")
ROUTE41.setToField("set_translation")

Transform26.addChildren(ROUTE41)

Scene7.addChildren(Transform26)
Group42 = Group()
Transform43 = Transform()
Transform43.setDEF("DECLx3dconnector_connector1_trans")
Transform44 = Transform()
Transform44.setDEF("DECLx3dconnector_connector1_rotscale")
Shape45 = Shape()
Appearance46 = Appearance()
Material47 = Material()
Material47.setDiffuseColor([0.2,0.7,0.7])
Material47.setTransparency(0.5)

Appearance46.setMaterial(Material47)

Shape45.setAppearance(Appearance46)
Cylinder48 = Cylinder()
Cylinder48.setRadius(0.05)

Shape45.setGeometry(Cylinder48)

Transform44.addChildren(Shape45)

Transform43.addChildren(Transform44)

Group42.addChildren(Transform43)
Script49 = Script()
Script49.setDEF("DECLx3dconnector_connector1_S1")
field50 = field()
field50.setName("startnode")
field50.setAccessType("initializeOnly")
field50.setType("SFNode")
Group51 = Group()
Group51.setUSE("DECLpoint_G1_node")

field50.addChildren(Group51)

Script49.addField(field50)
field52 = field()
field52.setName("endnode")
field52.setAccessType("initializeOnly")
field52.setType("SFNode")
Group53 = Group()
Group53.setUSE("DECLpoint_G2_node")

field52.addChildren(Group53)

Script49.addField(field52)
field54 = field()
field54.setName("position")
field54.setAccessType("inputOutput")
field54.setType("SFNode")
Transform55 = Transform()
Transform55.setUSE("DECLx3dconnector_connector1_trans")

field54.addChildren(Transform55)

Script49.addField(field54)
field56 = field()
field56.setName("rotscale")
field56.setAccessType("inputOutput")
field56.setType("SFNode")
Transform57 = Transform()
Transform57.setUSE("DECLx3dconnector_connector1_rotscale")

field56.addChildren(Transform57)

Script49.addField(field56)
field58 = field()
field58.setName("set_startpoint")
field58.setAccessType("inputOnly")
field58.setType("SFVec3f")

Script49.addField(field58)
field59 = field()
field59.setName("set_endpoint")
field59.setAccessType("inputOnly")
field59.setType("SFVec3f")

Script49.addField(field59)

Script49.setSourceCode('''ecmascript:\n"+
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

Group42.addChildren(Script49)

Scene7.addChildren(Group42)
ROUTE60 = ROUTE()
ROUTE60.setFromNode("DECLpoint_G1_node")
ROUTE60.setFromField("translation")
ROUTE60.setToNode("DECLx3dconnector_connector1_S1")
ROUTE60.setToField("set_startpoint")

Scene7.addChildren(ROUTE60)
ROUTE61 = ROUTE()
ROUTE61.setFromNode("DECLpoint_G2_node")
ROUTE61.setFromField("translation")
ROUTE61.setToNode("DECLx3dconnector_connector1_S1")
ROUTE61.setToField("set_endpoint")

Scene7.addChildren(ROUTE61)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/arc3_RoundTrip.x3d")
