# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("arc1.x3d")

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
meta5.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d")

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
Transform10.setDEF("G1")

Transform11 = TransformObject()
Transform11.setDEF("DECLpoint_INSTANCE_node")

Shape12 = ShapeObject()

Sphere13 = SphereObject()
Sphere13.setRadius(0.1)

Shape12.setGeometry(Sphere13)
Appearance14 = AppearanceObject()

Material15 = MaterialObject()
Material15.setDiffuseColor([1,0,0])

Appearance14.setMaterial(Material15)
Shape12.setAppearance(Appearance14)
Transform11.addChild(Shape12)
PositionInterpolator16 = PositionInterpolatorObject()
PositionInterpolator16.setDEF("DECLpoint_INSTANCE_PI1")
PositionInterpolator16.setKey([0,1])
PositionInterpolator16.setKeyValue([0,0,0,0,5,0])

Transform11.addChild(PositionInterpolator16)
Script17 = ScriptObject()
Script17.setDEF("DECLpoint_INSTANCE_MB1")

field18 = fieldObject()
field18.setType(fieldObject.TYPE_SFVEC3F)
field18.setName("translation")
field18.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field18.setValue("0 0 0")

Script17.addField(field18)
field19 = fieldObject()
field19.setType(fieldObject.TYPE_SFVEC3F)
field19.setName("old")
field19.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field19.setValue("0 0 0")

Script17.addField(field19)
field20 = fieldObject()
field20.setType(fieldObject.TYPE_SFTIME)
field20.setName("set_location")
field20.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script17.addField(field20)
field21 = fieldObject()
field21.setType(fieldObject.TYPE_MFVEC3F)
field21.setName("keyValue")
field21.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field21.setValue("0 0 0 0 5 0")

Script17.addField(field21)

Script17.setSourceCode("ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }")
Transform11.addChild(Script17)
TimeSensor22 = TimeSensorObject()
TimeSensor22.setDEF("DECLpoint_INSTANCE_CL1")
TimeSensor22.setCycleInterval(3)
TimeSensor22.setLoop(True)

Transform11.addChild(TimeSensor22)
ROUTE23 = ROUTEObject()
ROUTE23.setFromNode("DECLpoint_INSTANCE_CL1")
ROUTE23.setFromField("cycleTime")
ROUTE23.setToNode("DECLpoint_INSTANCE_MB1")
ROUTE23.setToField("set_location")

Transform11.addChild(ROUTE23)
ROUTE24 = ROUTEObject()
ROUTE24.setFromNode("DECLpoint_INSTANCE_CL1")
ROUTE24.setFromField("fraction_changed")
ROUTE24.setToNode("DECLpoint_INSTANCE_PI1")
ROUTE24.setToField("set_fraction")

Transform11.addChild(ROUTE24)
ROUTE25 = ROUTEObject()
ROUTE25.setFromNode("DECLpoint_INSTANCE_MB1")
ROUTE25.setFromField("keyValue")
ROUTE25.setToNode("DECLpoint_INSTANCE_PI1")
ROUTE25.setToField("keyValue")

Transform11.addChild(ROUTE25)
ROUTE26 = ROUTEObject()
ROUTE26.setFromNode("DECLpoint_INSTANCE_PI1")
ROUTE26.setFromField("value_changed")
ROUTE26.setToNode("DECLpoint_INSTANCE_node")
ROUTE26.setToField("set_translation")

Transform11.addChild(ROUTE26)
ROUTE27 = ROUTEObject()
ROUTE27.setFromNode("DECLpoint_INSTANCE_MB1")
ROUTE27.setFromField("translation_changed")
ROUTE27.setToNode("DECLpoint_INSTANCE_node")
ROUTE27.setToField("set_translation")

Transform11.addChild(ROUTE27)
Transform10.addChild(Transform11)
Scene7.addChild(Transform10)
Transform28 = TransformObject()
Transform28.setDEF("G2")

Transform29 = TransformObject()
Transform29.setDEF("DECLpoint_INSTANCE1000_node")

Shape30 = ShapeObject()

Sphere31 = SphereObject()
Sphere31.setRadius(0.1)

Shape30.setGeometry(Sphere31)
Appearance32 = AppearanceObject()

Material33 = MaterialObject()
Material33.setDiffuseColor([1,0,0])

Appearance32.setMaterial(Material33)
Shape30.setAppearance(Appearance32)
Transform29.addChild(Shape30)
PositionInterpolator34 = PositionInterpolatorObject()
PositionInterpolator34.setDEF("DECLpoint_INSTANCE1000_PI1")
PositionInterpolator34.setKey([0,1])
PositionInterpolator34.setKeyValue([0,0,0,0,5,0])

Transform29.addChild(PositionInterpolator34)
Script35 = ScriptObject()
Script35.setDEF("DECLpoint_INSTANCE1000_MB1")

field36 = fieldObject()
field36.setType(fieldObject.TYPE_SFVEC3F)
field36.setName("translation")
field36.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field36.setValue("0 0 0")

Script35.addField(field36)
field37 = fieldObject()
field37.setType(fieldObject.TYPE_SFVEC3F)
field37.setName("old")
field37.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field37.setValue("0 0 0")

Script35.addField(field37)
field38 = fieldObject()
field38.setType(fieldObject.TYPE_SFTIME)
field38.setName("set_location")
field38.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script35.addField(field38)
field39 = fieldObject()
field39.setType(fieldObject.TYPE_MFVEC3F)
field39.setName("keyValue")
field39.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field39.setValue("0 0 0 0 5 0")

Script35.addField(field39)

Script35.setSourceCode("ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }")
Transform29.addChild(Script35)
TimeSensor40 = TimeSensorObject()
TimeSensor40.setDEF("DECLpoint_INSTANCE1000_CL1")
TimeSensor40.setCycleInterval(3)
TimeSensor40.setLoop(True)

Transform29.addChild(TimeSensor40)
ROUTE41 = ROUTEObject()
ROUTE41.setFromNode("DECLpoint_INSTANCE1000_CL1")
ROUTE41.setFromField("cycleTime")
ROUTE41.setToNode("DECLpoint_INSTANCE1000_MB1")
ROUTE41.setToField("set_location")

Transform29.addChild(ROUTE41)
ROUTE42 = ROUTEObject()
ROUTE42.setFromNode("DECLpoint_INSTANCE1000_CL1")
ROUTE42.setFromField("fraction_changed")
ROUTE42.setToNode("DECLpoint_INSTANCE1000_PI1")
ROUTE42.setToField("set_fraction")

Transform29.addChild(ROUTE42)
ROUTE43 = ROUTEObject()
ROUTE43.setFromNode("DECLpoint_INSTANCE1000_MB1")
ROUTE43.setFromField("keyValue")
ROUTE43.setToNode("DECLpoint_INSTANCE1000_PI1")
ROUTE43.setToField("keyValue")

Transform29.addChild(ROUTE43)
ROUTE44 = ROUTEObject()
ROUTE44.setFromNode("DECLpoint_INSTANCE1000_PI1")
ROUTE44.setFromField("value_changed")
ROUTE44.setToNode("DECLpoint_INSTANCE1000_node")
ROUTE44.setToField("set_translation")

Transform29.addChild(ROUTE44)
ROUTE45 = ROUTEObject()
ROUTE45.setFromNode("DECLpoint_INSTANCE1000_MB1")
ROUTE45.setFromField("translation_changed")
ROUTE45.setToNode("DECLpoint_INSTANCE1000_node")
ROUTE45.setToField("set_translation")

Transform29.addChild(ROUTE45)
Transform28.addChild(Transform29)
Scene7.addChild(Transform28)
Transform46 = TransformObject()
Transform46.setDEF("transC1")

Transform47 = TransformObject()
Transform47.setDEF("rotscaleC1")

Shape48 = ShapeObject()

Appearance49 = AppearanceObject()

Material50 = MaterialObject()
Material50.setDiffuseColor([0.2,0.7,0.7])
Material50.setTransparency(0.5)

Appearance49.setMaterial(Material50)
Shape48.setAppearance(Appearance49)
Cylinder51 = CylinderObject()
Cylinder51.setRadius(0.05)

Shape48.setGeometry(Cylinder51)
Transform47.addChild(Shape48)
Transform46.addChild(Transform47)
Scene7.addChild(Transform46)
Script52 = ScriptObject()
Script52.setDEF("DECLx3dconnector_connector1_S1")

field53 = fieldObject()
field53.setType(fieldObject.TYPE_SFNODE)
field53.setName("startnode")
field53.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Transform54 = TransformObject()
Transform54.setUSE("G1")

field53.addChild(Transform54)
Script52.addField(field53)
field55 = fieldObject()
field55.setType(fieldObject.TYPE_SFNODE)
field55.setName("endnode")
field55.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Transform56 = TransformObject()
Transform56.setUSE("G2")

field55.addChild(Transform56)
Script52.addField(field55)
field57 = fieldObject()
field57.setType(fieldObject.TYPE_SFNODE)
field57.setName("transC1")
field57.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Transform58 = TransformObject()
Transform58.setUSE("transC1")

field57.addChild(Transform58)
Script52.addField(field57)
field59 = fieldObject()
field59.setType(fieldObject.TYPE_SFNODE)
field59.setName("rotscaleC1")
field59.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Transform60 = TransformObject()
Transform60.setUSE("rotscaleC1")

field59.addChild(Transform60)
Script52.addField(field59)
field61 = fieldObject()
field61.setType(fieldObject.TYPE_SFVEC3F)
field61.setName("set_startpoint")
field61.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script52.addField(field61)
field62 = fieldObject()
field62.setType(fieldObject.TYPE_SFVEC3F)
field62.setName("set_endpoint")
field62.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script52.addField(field62)

Script52.setSourceCode("ecmascript:\n"+
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
"        }")
Scene7.addChild(Script52)
ROUTE63 = ROUTEObject()
ROUTE63.setFromNode("G1")
ROUTE63.setFromField("translation_changed")
ROUTE63.setToNode("DECLx3dconnector_connector1_S1")
ROUTE63.setToField("set_startpoint")

Scene7.addChild(ROUTE63)
ROUTE64 = ROUTEObject()
ROUTE64.setFromNode("G2")
ROUTE64.setFromField("translation_changed")
ROUTE64.setToNode("DECLx3dconnector_connector1_S1")
ROUTE64.setToField("set_endpoint")

Scene7.addChild(ROUTE64)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/arc2.new.x3d")
