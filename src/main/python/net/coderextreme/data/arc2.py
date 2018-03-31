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

Script16.setSourceCode("\n"+
"\n"+
"\n"+
"ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}\n"+
"\n"+
"\n"+
"\n"+
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

Script32.setSourceCode("\n"+
"\n"+
"\n"+
"ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}\n"+
"\n"+
"\n"+
"\n"+
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
Transform42 = TransformObject()
Transform42.setDEF("DECLpoint_G3_node")

Shape43 = ShapeObject()

Sphere44 = SphereObject()
Sphere44.setRadius(0.1)

Shape43.setGeometry(Sphere44)
Appearance45 = AppearanceObject()

Material46 = MaterialObject()
Material46.setDiffuseColor([1,0,0])

Appearance45.setMaterial(Material46)
Shape43.setAppearance(Appearance45)
Transform42.addChild(Shape43)
PositionInterpolator47 = PositionInterpolatorObject()
PositionInterpolator47.setDEF("DECLpoint_G3_PI1")
PositionInterpolator47.setKey([0,1])
PositionInterpolator47.setKeyValue([0,0,0,0,5,0])

Transform42.addChild(PositionInterpolator47)
Script48 = ScriptObject()
Script48.setDEF("DECLpoint_G3_MB1")

field49 = fieldObject()
field49.setType(fieldObject.TYPE_SFVEC3F)
field49.setName("translation")
field49.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field49.setValue("0 0 0")

Script48.addField(field49)
field50 = fieldObject()
field50.setType(fieldObject.TYPE_SFVEC3F)
field50.setName("old")
field50.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field50.setValue("0 0 0")

Script48.addField(field50)
field51 = fieldObject()
field51.setType(fieldObject.TYPE_SFTIME)
field51.setName("set_location")
field51.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script48.addField(field51)
field52 = fieldObject()
field52.setType(fieldObject.TYPE_MFVEC3F)
field52.setName("keyValue")
field52.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field52.setValue("0 0 0 0 5 0")

Script48.addField(field52)

Script48.setSourceCode("\n"+
"\n"+
"\n"+
"ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}\n"+
"\n"+
"\n"+
"\n"+
"")
Transform42.addChild(Script48)
TimeSensor53 = TimeSensorObject()
TimeSensor53.setDEF("DECLpoint_G3_CL1")
TimeSensor53.setCycleInterval(3)
TimeSensor53.setLoop(True)

Transform42.addChild(TimeSensor53)
ROUTE54 = ROUTEObject()
ROUTE54.setFromNode("DECLpoint_G3_CL1")
ROUTE54.setFromField("cycleTime")
ROUTE54.setToNode("DECLpoint_G3_MB1")
ROUTE54.setToField("set_location")

Transform42.addChild(ROUTE54)
ROUTE55 = ROUTEObject()
ROUTE55.setFromNode("DECLpoint_G3_CL1")
ROUTE55.setFromField("fraction_changed")
ROUTE55.setToNode("DECLpoint_G3_PI1")
ROUTE55.setToField("set_fraction")

Transform42.addChild(ROUTE55)
ROUTE56 = ROUTEObject()
ROUTE56.setFromNode("DECLpoint_G3_MB1")
ROUTE56.setFromField("keyValue")
ROUTE56.setToNode("DECLpoint_G3_PI1")
ROUTE56.setToField("keyValue")

Transform42.addChild(ROUTE56)
ROUTE57 = ROUTEObject()
ROUTE57.setFromNode("DECLpoint_G3_PI1")
ROUTE57.setFromField("value_changed")
ROUTE57.setToNode("DECLpoint_G3_node")
ROUTE57.setToField("set_translation")

Transform42.addChild(ROUTE57)
Scene7.addChild(Transform42)
Transform58 = TransformObject()
Transform58.setDEF("DECLpoint_G4_node")

Shape59 = ShapeObject()

Sphere60 = SphereObject()
Sphere60.setRadius(0.1)

Shape59.setGeometry(Sphere60)
Appearance61 = AppearanceObject()

Material62 = MaterialObject()
Material62.setDiffuseColor([1,0,0])

Appearance61.setMaterial(Material62)
Shape59.setAppearance(Appearance61)
Transform58.addChild(Shape59)
PositionInterpolator63 = PositionInterpolatorObject()
PositionInterpolator63.setDEF("DECLpoint_G4_PI1")
PositionInterpolator63.setKey([0,1])
PositionInterpolator63.setKeyValue([0,0,0,0,5,0])

Transform58.addChild(PositionInterpolator63)
Script64 = ScriptObject()
Script64.setDEF("DECLpoint_G4_MB1")

field65 = fieldObject()
field65.setType(fieldObject.TYPE_SFVEC3F)
field65.setName("translation")
field65.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field65.setValue("0 0 0")

Script64.addField(field65)
field66 = fieldObject()
field66.setType(fieldObject.TYPE_SFVEC3F)
field66.setName("old")
field66.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field66.setValue("0 0 0")

Script64.addField(field66)
field67 = fieldObject()
field67.setType(fieldObject.TYPE_SFTIME)
field67.setName("set_location")
field67.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script64.addField(field67)
field68 = fieldObject()
field68.setType(fieldObject.TYPE_MFVEC3F)
field68.setName("keyValue")
field68.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field68.setValue("0 0 0 0 5 0")

Script64.addField(field68)

Script64.setSourceCode("\n"+
"\n"+
"\n"+
"ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}\n"+
"\n"+
"\n"+
"\n"+
"")
Transform58.addChild(Script64)
TimeSensor69 = TimeSensorObject()
TimeSensor69.setDEF("DECLpoint_G4_CL1")
TimeSensor69.setCycleInterval(3)
TimeSensor69.setLoop(True)

Transform58.addChild(TimeSensor69)
ROUTE70 = ROUTEObject()
ROUTE70.setFromNode("DECLpoint_G4_CL1")
ROUTE70.setFromField("cycleTime")
ROUTE70.setToNode("DECLpoint_G4_MB1")
ROUTE70.setToField("set_location")

Transform58.addChild(ROUTE70)
ROUTE71 = ROUTEObject()
ROUTE71.setFromNode("DECLpoint_G4_CL1")
ROUTE71.setFromField("fraction_changed")
ROUTE71.setToNode("DECLpoint_G4_PI1")
ROUTE71.setToField("set_fraction")

Transform58.addChild(ROUTE71)
ROUTE72 = ROUTEObject()
ROUTE72.setFromNode("DECLpoint_G4_MB1")
ROUTE72.setFromField("keyValue")
ROUTE72.setToNode("DECLpoint_G4_PI1")
ROUTE72.setToField("keyValue")

Transform58.addChild(ROUTE72)
ROUTE73 = ROUTEObject()
ROUTE73.setFromNode("DECLpoint_G4_PI1")
ROUTE73.setFromField("value_changed")
ROUTE73.setToNode("DECLpoint_G4_node")
ROUTE73.setToField("set_translation")

Transform58.addChild(ROUTE73)
Scene7.addChild(Transform58)
Group74 = GroupObject()

Transform75 = TransformObject()
Transform75.setDEF("DECLx3dconnector_connector1_trans")

Transform76 = TransformObject()
Transform76.setDEF("DECLx3dconnector_connector1_rotscale")

Shape77 = ShapeObject()

Appearance78 = AppearanceObject()

Material79 = MaterialObject()
Material79.setDiffuseColor([0.2,0.7,0.7])
Material79.setTransparency(0.5)

Appearance78.setMaterial(Material79)
Shape77.setAppearance(Appearance78)
Cylinder80 = CylinderObject()
Cylinder80.setRadius(0.05)

Shape77.setGeometry(Cylinder80)
Transform76.addChild(Shape77)
Transform75.addChild(Transform76)
Group74.addChild(Transform75)
Script81 = ScriptObject()
Script81.setDEF("DECLx3dconnector_connector1_S1")

field82 = fieldObject()
field82.setType(fieldObject.TYPE_SFNODE)
field82.setName("startnode")
field82.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Script81.addField(field82)
field83 = fieldObject()
field83.setType(fieldObject.TYPE_SFNODE)
field83.setName("endnode")
field83.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Script81.addField(field83)
field84 = fieldObject()
field84.setType(fieldObject.TYPE_SFNODE)
field84.setName("position")
field84.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Transform85 = TransformObject()
Transform85.setUSE("DECLx3dconnector_connector1_trans")

field84.addChild(Transform85)
Script81.addField(field84)
field86 = fieldObject()
field86.setType(fieldObject.TYPE_SFNODE)
field86.setName("rotscale")
field86.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Transform87 = TransformObject()
Transform87.setUSE("DECLx3dconnector_connector1_rotscale")

field86.addChild(Transform87)
Script81.addField(field86)
field88 = fieldObject()
field88.setType(fieldObject.TYPE_SFVEC3F)
field88.setName("set_startpoint")
field88.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script81.addField(field88)
field89 = fieldObject()
field89.setType(fieldObject.TYPE_SFVEC3F)
field89.setName("set_endpoint")
field89.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script81.addField(field89)

Script81.setSourceCode("\n"+
"\n"+
"            ecmascript:\n"+
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
"\n"+
"\n"+
"\n"+
"")
Group74.addChild(Script81)
Scene7.addChild(Group74)
Group90 = GroupObject()

Transform91 = TransformObject()
Transform91.setDEF("DECLx3dconnector_connector2_trans")

Transform92 = TransformObject()
Transform92.setDEF("DECLx3dconnector_connector2_rotscale")

Shape93 = ShapeObject()

Appearance94 = AppearanceObject()

Material95 = MaterialObject()
Material95.setDiffuseColor([0.2,0.7,0.7])
Material95.setTransparency(0.5)

Appearance94.setMaterial(Material95)
Shape93.setAppearance(Appearance94)
Cylinder96 = CylinderObject()
Cylinder96.setRadius(0.05)

Shape93.setGeometry(Cylinder96)
Transform92.addChild(Shape93)
Transform91.addChild(Transform92)
Group90.addChild(Transform91)
Script97 = ScriptObject()
Script97.setDEF("DECLx3dconnector_connector2_S1")

field98 = fieldObject()
field98.setType(fieldObject.TYPE_SFNODE)
field98.setName("startnode")
field98.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Script97.addField(field98)
field99 = fieldObject()
field99.setType(fieldObject.TYPE_SFNODE)
field99.setName("endnode")
field99.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Script97.addField(field99)
field100 = fieldObject()
field100.setType(fieldObject.TYPE_SFNODE)
field100.setName("position")
field100.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Transform101 = TransformObject()
Transform101.setUSE("DECLx3dconnector_connector2_trans")

field100.addChild(Transform101)
Script97.addField(field100)
field102 = fieldObject()
field102.setType(fieldObject.TYPE_SFNODE)
field102.setName("rotscale")
field102.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Transform103 = TransformObject()
Transform103.setUSE("DECLx3dconnector_connector2_rotscale")

field102.addChild(Transform103)
Script97.addField(field102)
field104 = fieldObject()
field104.setType(fieldObject.TYPE_SFVEC3F)
field104.setName("set_startpoint")
field104.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script97.addField(field104)
field105 = fieldObject()
field105.setType(fieldObject.TYPE_SFVEC3F)
field105.setName("set_endpoint")
field105.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script97.addField(field105)

Script97.setSourceCode("\n"+
"\n"+
"            ecmascript:\n"+
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
"\n"+
"\n"+
"\n"+
"")
Group90.addChild(Script97)
Scene7.addChild(Group90)
Group106 = GroupObject()

Transform107 = TransformObject()
Transform107.setDEF("DECLx3dconnector_connector3_trans")

Transform108 = TransformObject()
Transform108.setDEF("DECLx3dconnector_connector3_rotscale")

Shape109 = ShapeObject()

Appearance110 = AppearanceObject()

Material111 = MaterialObject()
Material111.setDiffuseColor([0.2,0.7,0.7])
Material111.setTransparency(0.5)

Appearance110.setMaterial(Material111)
Shape109.setAppearance(Appearance110)
Cylinder112 = CylinderObject()
Cylinder112.setRadius(0.05)

Shape109.setGeometry(Cylinder112)
Transform108.addChild(Shape109)
Transform107.addChild(Transform108)
Group106.addChild(Transform107)
Script113 = ScriptObject()
Script113.setDEF("DECLx3dconnector_connector3_S1")

field114 = fieldObject()
field114.setType(fieldObject.TYPE_SFNODE)
field114.setName("startnode")
field114.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Script113.addField(field114)
field115 = fieldObject()
field115.setType(fieldObject.TYPE_SFNODE)
field115.setName("endnode")
field115.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Script113.addField(field115)
field116 = fieldObject()
field116.setType(fieldObject.TYPE_SFNODE)
field116.setName("position")
field116.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Transform117 = TransformObject()
Transform117.setUSE("DECLx3dconnector_connector3_trans")

field116.addChild(Transform117)
Script113.addField(field116)
field118 = fieldObject()
field118.setType(fieldObject.TYPE_SFNODE)
field118.setName("rotscale")
field118.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Transform119 = TransformObject()
Transform119.setUSE("DECLx3dconnector_connector3_rotscale")

field118.addChild(Transform119)
Script113.addField(field118)
field120 = fieldObject()
field120.setType(fieldObject.TYPE_SFVEC3F)
field120.setName("set_startpoint")
field120.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script113.addField(field120)
field121 = fieldObject()
field121.setType(fieldObject.TYPE_SFVEC3F)
field121.setName("set_endpoint")
field121.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script113.addField(field121)

Script113.setSourceCode("\n"+
"\n"+
"            ecmascript:\n"+
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
"\n"+
"\n"+
"\n"+
"")
Group106.addChild(Script113)
Scene7.addChild(Group106)
ROUTE122 = ROUTEObject()
ROUTE122.setFromNode("DECLpoint_G1_node")
ROUTE122.setFromField("translation")
ROUTE122.setToNode("DECLx3dconnector_connector1_S1")
ROUTE122.setToField("set_startpoint")

Scene7.addChild(ROUTE122)
ROUTE123 = ROUTEObject()
ROUTE123.setFromNode("DECLpoint_G2_node")
ROUTE123.setFromField("translation")
ROUTE123.setToNode("DECLx3dconnector_connector1_S1")
ROUTE123.setToField("set_endpoint")

Scene7.addChild(ROUTE123)
ROUTE124 = ROUTEObject()
ROUTE124.setFromNode("DECLpoint_G1_node")
ROUTE124.setFromField("translation")
ROUTE124.setToNode("DECLx3dconnector_connector2_S1")
ROUTE124.setToField("set_startpoint")

Scene7.addChild(ROUTE124)
ROUTE125 = ROUTEObject()
ROUTE125.setFromNode("DECLpoint_G3_node")
ROUTE125.setFromField("translation")
ROUTE125.setToNode("DECLx3dconnector_connector2_S1")
ROUTE125.setToField("set_endpoint")

Scene7.addChild(ROUTE125)
ROUTE126 = ROUTEObject()
ROUTE126.setFromNode("DECLpoint_G1_node")
ROUTE126.setFromField("translation")
ROUTE126.setToNode("DECLx3dconnector_connector3_S1")
ROUTE126.setToField("set_startpoint")

Scene7.addChild(ROUTE126)
ROUTE127 = ROUTEObject()
ROUTE127.setFromNode("DECLpoint_G4_node")
ROUTE127.setFromField("translation")
ROUTE127.setToNode("DECLx3dconnector_connector3_S1")
ROUTE127.setToField("set_endpoint")

Scene7.addChild(ROUTE127)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/arc2.new.x3d")
