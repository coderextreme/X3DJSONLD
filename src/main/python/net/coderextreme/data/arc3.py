from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
meta2 = metaObject().setName("title").setContent("x3dconnectorProto")
head1.addMeta(meta2)
meta3 = metaObject().setName("creator").setContent("Lost, Doug Sanden I think")
head1.addMeta(meta3)
meta4 = metaObject().setName("generator").setContent("manual")
head1.addMeta(meta4)
meta5 = metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d")
head1.addMeta(meta5)
meta6 = metaObject().setName("description").setContent("a generic proto to connect two objects")
head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()
Viewpoint8 = ViewpointObject().setPosition([0,0,5]).setDescription("Only Viewpoint")
Scene7.addChild(Viewpoint8)
Background9 = BackgroundObject().setSkyColor([0.4,0.4,0.4])
Scene7.addChild(Background9)
Transform10 = TransformObject().setDEF("DECLpoint_G1_node")
Shape11 = ShapeObject()
Sphere12 = SphereObject().setRadius(0.1)
Shape11.setGeometry(Sphere12)
Appearance13 = AppearanceObject()
Material14 = MaterialObject().setDiffuseColor([1,0,0])
Appearance13.setMaterial(Material14)
Shape11.setAppearance(Appearance13)
Transform10.addChild(Shape11)
PositionInterpolator15 = PositionInterpolatorObject().setDEF("DECLpoint_G1_PI1").setKey([0,1]).setKeyValue([0,0,0,0,5,0])
Transform10.addChild(PositionInterpolator15)
Script16 = ScriptObject().setDEF("DECLpoint_G1_MB1")
field17 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script16.addField(field17)
field18 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script16.addField(field18)
field19 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_location").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script16.addField(field19)
field20 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0 0 5 0")
Script16.addField(field20)

Script16.setSourceCode("ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}\n"+
"")
Transform10.addChild(Script16)
TimeSensor21 = TimeSensorObject().setDEF("DECLpoint_G1_CL1").setCycleInterval(3).setLoop(True)
Transform10.addChild(TimeSensor21)
ROUTE22 = ROUTEObject().setFromNode("DECLpoint_G1_CL1").setFromField("cycleTime").setToNode("DECLpoint_G1_MB1").setToField("set_location")
Transform10.addChild(ROUTE22)
ROUTE23 = ROUTEObject().setFromNode("DECLpoint_G1_CL1").setFromField("fraction_changed").setToNode("DECLpoint_G1_PI1").setToField("set_fraction")
Transform10.addChild(ROUTE23)
ROUTE24 = ROUTEObject().setFromNode("DECLpoint_G1_MB1").setFromField("keyValue").setToNode("DECLpoint_G1_PI1").setToField("keyValue")
Transform10.addChild(ROUTE24)
ROUTE25 = ROUTEObject().setFromNode("DECLpoint_G1_PI1").setFromField("value_changed").setToNode("DECLpoint_G1_node").setToField("set_translation")
Transform10.addChild(ROUTE25)
Scene7.addChild(Transform10)
Transform26 = TransformObject().setDEF("DECLpoint_G2_node")
Shape27 = ShapeObject()
Sphere28 = SphereObject().setRadius(0.1)
Shape27.setGeometry(Sphere28)
Appearance29 = AppearanceObject()
Material30 = MaterialObject().setDiffuseColor([1,0,0])
Appearance29.setMaterial(Material30)
Shape27.setAppearance(Appearance29)
Transform26.addChild(Shape27)
PositionInterpolator31 = PositionInterpolatorObject().setDEF("DECLpoint_G2_PI1").setKey([0,1]).setKeyValue([0,0,0,0,5,0])
Transform26.addChild(PositionInterpolator31)
Script32 = ScriptObject().setDEF("DECLpoint_G2_MB1")
field33 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script32.addField(field33)
field34 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script32.addField(field34)
field35 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_location").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script32.addField(field35)
field36 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0 0 5 0")
Script32.addField(field36)

Script32.setSourceCode("ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}\n"+
"")
Transform26.addChild(Script32)
TimeSensor37 = TimeSensorObject().setDEF("DECLpoint_G2_CL1").setCycleInterval(3).setLoop(True)
Transform26.addChild(TimeSensor37)
ROUTE38 = ROUTEObject().setFromNode("DECLpoint_G2_CL1").setFromField("cycleTime").setToNode("DECLpoint_G2_MB1").setToField("set_location")
Transform26.addChild(ROUTE38)
ROUTE39 = ROUTEObject().setFromNode("DECLpoint_G2_CL1").setFromField("fraction_changed").setToNode("DECLpoint_G2_PI1").setToField("set_fraction")
Transform26.addChild(ROUTE39)
ROUTE40 = ROUTEObject().setFromNode("DECLpoint_G2_MB1").setFromField("keyValue").setToNode("DECLpoint_G2_PI1").setToField("keyValue")
Transform26.addChild(ROUTE40)
ROUTE41 = ROUTEObject().setFromNode("DECLpoint_G2_PI1").setFromField("value_changed").setToNode("DECLpoint_G2_node").setToField("set_translation")
Transform26.addChild(ROUTE41)
Scene7.addChild(Transform26)
Group42 = GroupObject()
Transform43 = TransformObject().setDEF("DECLx3dconnector_connector1_trans")
Transform44 = TransformObject().setDEF("DECLx3dconnector_connector1_rotscale")
Shape45 = ShapeObject()
Appearance46 = AppearanceObject()
Material47 = MaterialObject().setDiffuseColor([0.2,0.7,0.7]).setTransparency(0.5)
Appearance46.setMaterial(Material47)
Shape45.setAppearance(Appearance46)
Cylinder48 = CylinderObject().setRadius(0.05)
Shape45.setGeometry(Cylinder48)
Transform44.addChild(Shape45)
Transform43.addChild(Transform44)
Group42.addChild(Transform43)
Script49 = ScriptObject().setDEF("DECLx3dconnector_connector1_S1")
field50 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Group51 = GroupObject().setUSE("DECLpoint_G1_node")
field50.addChild(Group51)
Script49.addField(field50)
field52 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Group53 = GroupObject().setUSE("DECLpoint_G2_node")
field52.addChild(Group53)
Script49.addField(field52)
field54 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Transform55 = TransformObject().setUSE("DECLx3dconnector_connector1_trans")
field54.addChild(Transform55)
Script49.addField(field54)
field56 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("rotscale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Transform57 = TransformObject().setUSE("DECLx3dconnector_connector1_rotscale")
field56.addChild(Transform57)
Script49.addField(field56)
field58 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script49.addField(field58)
field59 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script49.addField(field59)

Script49.setSourceCode("ecmascript:\n"+
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
"	      position.translation = trafo.translation;\n"+
"	      rotscale.rotation = trafo.rotation;\n"+
"	      rotscale.scale = trafo.scale;\n"+
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
Group42.addChild(Script49)
Scene7.addChild(Group42)
ROUTE60 = ROUTEObject().setFromNode("DECLpoint_G1_node").setFromField("translation").setToNode("DECLx3dconnector_connector1_S1").setToField("set_startpoint")
Scene7.addChild(ROUTE60)
ROUTE61 = ROUTEObject().setFromNode("DECLpoint_G2_node").setFromField("translation").setToNode("DECLx3dconnector_connector1_S1").setToField("set_endpoint")
Scene7.addChild(ROUTE61)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/arc3.new.x3d")
