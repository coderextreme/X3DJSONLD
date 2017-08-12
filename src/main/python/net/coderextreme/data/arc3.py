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
Transform10.setDEF("DECLpoint_G1_node")

Shape11 = ShapeObject()

Sphere12 = SphereObject()
Sphere12.setRadius(0.1)

Shape11.setGeometry(Sphere12)
Appearance13 = AppearanceObject()

Material14 = MaterialObject()
Material14.setDiffuseColor([1,0,0])

Appearance13.setMaterial(Material14)
Shape11.setAppearance(Appearance13)
Transform10.addChild(Shape11)
PositionInterpolator15 = PositionInterpolatorObject()
PositionInterpolator15.setDEF("DECLpoint_G1_PI1")
PositionInterpolator15.setKey([0,1])
PositionInterpolator15.setKeyValue([0,0,0,0,5,0])

Transform10.addChild(PositionInterpolator15)
Script16 = ScriptObject()
Script16.setDEF("DECLpoint_G1_MB1")

field17 = fieldObject()
field17.setType(fieldObject.TYPE_SFVEC3F)
field17.setName("translation")
field17.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field17.setValue("0 0 0")

Script16.addField(field17)
field18 = fieldObject()
field18.setType(fieldObject.TYPE_SFVEC3F)
field18.setName("old")
field18.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field18.setValue("0 0 0")

Script16.addField(field18)
field19 = fieldObject()
field19.setType(fieldObject.TYPE_SFTIME)
field19.setName("set_location")
field19.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script16.addField(field19)
field20 = fieldObject()
field20.setType(fieldObject.TYPE_MFVEC3F)
field20.setName("keyValue")
field20.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field20.setValue("0 0 0 0 5 0")

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
TimeSensor21 = TimeSensorObject()
TimeSensor21.setDEF("DECLpoint_G1_CL1")
TimeSensor21.setCycleInterval(3)
TimeSensor21.setLoop(True)

Transform10.addChild(TimeSensor21)
ROUTE22 = ROUTEObject()
ROUTE22.setFromNode("DECLpoint_G1_CL1")
ROUTE22.setFromField("cycleTime")
ROUTE22.setToNode("DECLpoint_G1_MB1")
ROUTE22.setToField("set_location")

Transform10.addChild(ROUTE22)
ROUTE23 = ROUTEObject()
ROUTE23.setFromNode("DECLpoint_G1_CL1")
ROUTE23.setFromField("fraction_changed")
ROUTE23.setToNode("DECLpoint_G1_PI1")
ROUTE23.setToField("set_fraction")

Transform10.addChild(ROUTE23)
ROUTE24 = ROUTEObject()
ROUTE24.setFromNode("DECLpoint_G1_MB1")
ROUTE24.setFromField("keyValue")
ROUTE24.setToNode("DECLpoint_G1_PI1")
ROUTE24.setToField("keyValue")

Transform10.addChild(ROUTE24)
ROUTE25 = ROUTEObject()
ROUTE25.setFromNode("DECLpoint_G1_PI1")
ROUTE25.setFromField("value_changed")
ROUTE25.setToNode("DECLpoint_G1_node")
ROUTE25.setToField("set_translation")

Transform10.addChild(ROUTE25)
Scene7.addChild(Transform10)
Transform26 = TransformObject()
Transform26.setDEF("DECLpoint_G2_node")

Shape27 = ShapeObject()

Sphere28 = SphereObject()
Sphere28.setRadius(0.1)

Shape27.setGeometry(Sphere28)
Appearance29 = AppearanceObject()

Material30 = MaterialObject()
Material30.setDiffuseColor([1,0,0])

Appearance29.setMaterial(Material30)
Shape27.setAppearance(Appearance29)
Transform26.addChild(Shape27)
PositionInterpolator31 = PositionInterpolatorObject()
PositionInterpolator31.setDEF("DECLpoint_G2_PI1")
PositionInterpolator31.setKey([0,1])
PositionInterpolator31.setKeyValue([0,0,0,0,5,0])

Transform26.addChild(PositionInterpolator31)
Script32 = ScriptObject()
Script32.setDEF("DECLpoint_G2_MB1")

field33 = fieldObject()
field33.setType(fieldObject.TYPE_SFVEC3F)
field33.setName("translation")
field33.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field33.setValue("0 0 0")

Script32.addField(field33)
field34 = fieldObject()
field34.setType(fieldObject.TYPE_SFVEC3F)
field34.setName("old")
field34.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field34.setValue("0 0 0")

Script32.addField(field34)
field35 = fieldObject()
field35.setType(fieldObject.TYPE_SFTIME)
field35.setName("set_location")
field35.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script32.addField(field35)
field36 = fieldObject()
field36.setType(fieldObject.TYPE_MFVEC3F)
field36.setName("keyValue")
field36.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field36.setValue("0 0 0 0 5 0")

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
TimeSensor37 = TimeSensorObject()
TimeSensor37.setDEF("DECLpoint_G2_CL1")
TimeSensor37.setCycleInterval(3)
TimeSensor37.setLoop(True)

Transform26.addChild(TimeSensor37)
ROUTE38 = ROUTEObject()
ROUTE38.setFromNode("DECLpoint_G2_CL1")
ROUTE38.setFromField("cycleTime")
ROUTE38.setToNode("DECLpoint_G2_MB1")
ROUTE38.setToField("set_location")

Transform26.addChild(ROUTE38)
ROUTE39 = ROUTEObject()
ROUTE39.setFromNode("DECLpoint_G2_CL1")
ROUTE39.setFromField("fraction_changed")
ROUTE39.setToNode("DECLpoint_G2_PI1")
ROUTE39.setToField("set_fraction")

Transform26.addChild(ROUTE39)
ROUTE40 = ROUTEObject()
ROUTE40.setFromNode("DECLpoint_G2_MB1")
ROUTE40.setFromField("keyValue")
ROUTE40.setToNode("DECLpoint_G2_PI1")
ROUTE40.setToField("keyValue")

Transform26.addChild(ROUTE40)
ROUTE41 = ROUTEObject()
ROUTE41.setFromNode("DECLpoint_G2_PI1")
ROUTE41.setFromField("value_changed")
ROUTE41.setToNode("DECLpoint_G2_node")
ROUTE41.setToField("set_translation")

Transform26.addChild(ROUTE41)
Scene7.addChild(Transform26)
Group42 = GroupObject()

Transform43 = TransformObject()
Transform43.setDEF("DECLx3dconnector_connector1_trans")

Transform44 = TransformObject()
Transform44.setDEF("DECLx3dconnector_connector1_rotscale")

Shape45 = ShapeObject()

Appearance46 = AppearanceObject()

Material47 = MaterialObject()
Material47.setDiffuseColor([0.2,0.7,0.7])
Material47.setTransparency(0.5)

Appearance46.setMaterial(Material47)
Shape45.setAppearance(Appearance46)
Cylinder48 = CylinderObject()
Cylinder48.setRadius(0.05)

Shape45.setGeometry(Cylinder48)
Transform44.addChild(Shape45)
Transform43.addChild(Transform44)
Group42.addChild(Transform43)
Script49 = ScriptObject()
Script49.setDEF("DECLx3dconnector_connector1_S1")

field50 = fieldObject()
field50.setType(fieldObject.TYPE_SFNODE)
field50.setName("startnode")
field50.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Group51 = GroupObject()
Group51.setUSE("DECLpoint_G1_node")

field50.addChild(Group51)
Script49.addField(field50)
field52 = fieldObject()
field52.setType(fieldObject.TYPE_SFNODE)
field52.setName("endnode")
field52.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Group53 = GroupObject()
Group53.setUSE("DECLpoint_G2_node")

field52.addChild(Group53)
Script49.addField(field52)
field54 = fieldObject()
field54.setType(fieldObject.TYPE_SFNODE)
field54.setName("position")
field54.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Transform55 = TransformObject()
Transform55.setUSE("DECLx3dconnector_connector1_trans")

field54.addChild(Transform55)
Script49.addField(field54)
field56 = fieldObject()
field56.setType(fieldObject.TYPE_SFNODE)
field56.setName("rotscale")
field56.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Transform57 = TransformObject()
Transform57.setUSE("DECLx3dconnector_connector1_rotscale")

field56.addChild(Transform57)
Script49.addField(field56)
field58 = fieldObject()
field58.setType(fieldObject.TYPE_SFVEC3F)
field58.setName("set_startpoint")
field58.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script49.addField(field58)
field59 = fieldObject()
field59.setType(fieldObject.TYPE_SFVEC3F)
field59.setName("set_endpoint")
field59.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

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
ROUTE60 = ROUTEObject()
ROUTE60.setFromNode("DECLpoint_G1_node")
ROUTE60.setFromField("translation")
ROUTE60.setToNode("DECLx3dconnector_connector1_S1")
ROUTE60.setToField("set_startpoint")

Scene7.addChild(ROUTE60)
ROUTE61 = ROUTEObject()
ROUTE61.setFromNode("DECLpoint_G2_node")
ROUTE61.setFromField("translation")
ROUTE61.setToNode("DECLx3dconnector_connector1_S1")
ROUTE61.setToField("set_endpoint")

Scene7.addChild(ROUTE61)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/arc3.new.x3d")
