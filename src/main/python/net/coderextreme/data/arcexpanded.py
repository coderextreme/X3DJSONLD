from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
meta2 = metaObject().setName("title").setContent("arc.x3d")
head1.addMeta(meta2)
meta3 = metaObject().setName("creator").setContent("John Carlson")
head1.addMeta(meta3)
meta4 = metaObject().setName("generator").setContent("manual")
head1.addMeta(meta4)
meta5 = metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/arc.x3d")
head1.addMeta(meta5)
meta6 = metaObject().setName("description").setContent("an attempt to implement an arc in a graph")
head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()
Viewpoint8 = ViewpointObject().setPosition([0,0,5]).setDescription("a moving graph")
Scene7.addChild(Viewpoint8)
Background9 = BackgroundObject().setSkyColor([0.4,0.4,0.4])
Scene7.addChild(Background9)
Transform10 = TransformObject().setDEF("cylinder1")
Shape11 = ShapeObject()
Appearance12 = AppearanceObject()
Material13 = MaterialObject().setDiffuseColor([0.2,0.7,0.7])
Appearance12.setMaterial(Material13)
Shape11.setAppearance(Appearance12)
Cylinder14 = CylinderObject().setRadius(0.1)
Shape11.setGeometry(Cylinder14)
Transform10.addChild(Shape11)
Scene7.addChild(Transform10)

Scene7.addComments(CommentsBlock("from doug sanden"))
Transform15 = TransformObject().setDEF("DECLpoint_start_node").setTranslation([0,0,0])
Shape16 = ShapeObject()
Sphere17 = SphereObject().setRadius(0.1)
Shape16.setGeometry(Sphere17)
Appearance18 = AppearanceObject()
Material19 = MaterialObject().setDiffuseColor([1,0,0])
Appearance18.setMaterial(Material19)
Shape16.setAppearance(Appearance18)
Transform15.addChild(Shape16)
PositionInterpolator20 = PositionInterpolatorObject().setDEF("DECLpoint_start_PI1").setKey([0,1]).setKeyValue([0,0,0,0,5,0])
Transform15.addChild(PositionInterpolator20)
Script21 = ScriptObject().setDEF("DECLpoint_start_MB1")
field22 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script21.addField(field22)
field23 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script21.addField(field23)
field24 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_location").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script21.addField(field24)
field25 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script21.addField(field25)

Script21.setSourceCode("\n"+
"\n"+
"ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}\n"+
"")
Transform15.addChild(Script21)
TimeSensor26 = TimeSensorObject().setDEF("DECLpoint_start_CL1").setCycleInterval(3).setLoop(True)
Transform15.addChild(TimeSensor26)
ROUTE27 = ROUTEObject().setFromNode("DECLpoint_start_CL1").setFromField("cycleTime").setToNode("DECLpoint_start_MB1").setToField("set_location")
Transform15.addChild(ROUTE27)
ROUTE28 = ROUTEObject().setFromNode("DECLpoint_start_CL1").setFromField("fraction_changed").setToNode("DECLpoint_start_PI1").setToField("set_fraction")
Transform15.addChild(ROUTE28)
ROUTE29 = ROUTEObject().setFromNode("DECLpoint_start_MB1").setFromField("keyValue").setToNode("DECLpoint_start_PI1").setToField("keyValue")
Transform15.addChild(ROUTE29)
ROUTE30 = ROUTEObject().setFromNode("DECLpoint_start_PI1").setFromField("value_changed").setToNode("DECLpoint_start_node").setToField("set_translation")
Transform15.addChild(ROUTE30)
Scene7.addChild(Transform15)
Transform31 = TransformObject().setDEF("DECLpoint_end_node").setTranslation([0,0,0])
Shape32 = ShapeObject()
Sphere33 = SphereObject().setRadius(0.1)
Shape32.setGeometry(Sphere33)
Appearance34 = AppearanceObject()
Material35 = MaterialObject().setDiffuseColor([1,0,0])
Appearance34.setMaterial(Material35)
Shape32.setAppearance(Appearance34)
Transform31.addChild(Shape32)
PositionInterpolator36 = PositionInterpolatorObject().setDEF("DECLpoint_end_PI1").setKey([0,1]).setKeyValue([0,0,0,0,5,0])
Transform31.addChild(PositionInterpolator36)
Script37 = ScriptObject().setDEF("DECLpoint_end_MB1")
field38 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script37.addField(field38)
field39 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script37.addField(field39)
field40 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_location").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script37.addField(field40)
field41 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script37.addField(field41)

Script37.setSourceCode("\n"+
"\n"+
"ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}\n"+
"")
Transform31.addChild(Script37)
TimeSensor42 = TimeSensorObject().setDEF("DECLpoint_end_CL1").setCycleInterval(3).setLoop(True)
Transform31.addChild(TimeSensor42)
ROUTE43 = ROUTEObject().setFromNode("DECLpoint_end_CL1").setFromField("cycleTime").setToNode("DECLpoint_end_MB1").setToField("set_location")
Transform31.addChild(ROUTE43)
ROUTE44 = ROUTEObject().setFromNode("DECLpoint_end_CL1").setFromField("fraction_changed").setToNode("DECLpoint_end_PI1").setToField("set_fraction")
Transform31.addChild(ROUTE44)
ROUTE45 = ROUTEObject().setFromNode("DECLpoint_end_MB1").setFromField("keyValue").setToNode("DECLpoint_end_PI1").setToField("keyValue")
Transform31.addChild(ROUTE45)
ROUTE46 = ROUTEObject().setFromNode("DECLpoint_end_PI1").setFromField("value_changed").setToNode("DECLpoint_end_node").setToField("set_translation")
Transform31.addChild(ROUTE46)
Scene7.addChild(Transform31)
Script47 = ScriptObject().setDEF("DECLx3dconnector_connector1_S1")
field48 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Transform49 = TransformObject().setDEF("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_node").setUSE("DECLpoint_start")
Shape50 = ShapeObject()
Sphere51 = SphereObject().setRadius(0.1)
Shape50.setGeometry(Sphere51)
Appearance52 = AppearanceObject()
Material53 = MaterialObject().setDiffuseColor([1,0,0])
Appearance52.setMaterial(Material53)
Shape50.setAppearance(Appearance52)
Transform49.addChild(Shape50)
PositionInterpolator54 = PositionInterpolatorObject().setDEF("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_PI1").setKey([0,1]).setKeyValue([0,0,0,0,5,0])
Transform49.addChild(PositionInterpolator54)
Script55 = ScriptObject().setDEF("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_MB1")
field56 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0")
Script55.addField(field56)
field57 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script55.addField(field57)
field58 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_location").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script55.addField(field58)
field59 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script55.addField(field59)

Script55.setSourceCode("\n"+
"\n"+
"ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}\n"+
"")
Transform49.addChild(Script55)
TimeSensor60 = TimeSensorObject().setDEF("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_CL1").setCycleInterval(3).setLoop(True)
Transform49.addChild(TimeSensor60)
ROUTE61 = ROUTEObject().setFromNode("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_CL1").setFromField("cycleTime").setToNode("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_MB1").setToField("set_location")
Transform49.addChild(ROUTE61)
ROUTE62 = ROUTEObject().setFromNode("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_CL1").setFromField("fraction_changed").setToNode("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_PI1").setToField("set_fraction")
Transform49.addChild(ROUTE62)
ROUTE63 = ROUTEObject().setFromNode("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_MB1").setFromField("keyValue").setToNode("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_PI1").setToField("keyValue")
Transform49.addChild(ROUTE63)
ROUTE64 = ROUTEObject().setFromNode("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_PI1").setFromField("value_changed").setToNode("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_node").setToField("set_translation")
Transform49.addChild(ROUTE64)
field48.addChild(Transform49)
Script47.addField(field48)
field65 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Transform66 = TransformObject().setDEF("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_node").setUSE("DECLpoint_end")
Shape67 = ShapeObject()
Sphere68 = SphereObject().setRadius(0.1)
Shape67.setGeometry(Sphere68)
Appearance69 = AppearanceObject()
Material70 = MaterialObject().setDiffuseColor([1,0,0])
Appearance69.setMaterial(Material70)
Shape67.setAppearance(Appearance69)
Transform66.addChild(Shape67)
PositionInterpolator71 = PositionInterpolatorObject().setDEF("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_PI1").setKey([0,1]).setKeyValue([0,0,0,0,5,0])
Transform66.addChild(PositionInterpolator71)
Script72 = ScriptObject().setDEF("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_MB1")
field73 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0")
Script72.addField(field73)
field74 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script72.addField(field74)
field75 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_location").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script72.addField(field75)
field76 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script72.addField(field76)

Script72.setSourceCode("\n"+
"\n"+
"ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}\n"+
"")
Transform66.addChild(Script72)
TimeSensor77 = TimeSensorObject().setDEF("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_CL1").setCycleInterval(3).setLoop(True)
Transform66.addChild(TimeSensor77)
ROUTE78 = ROUTEObject().setFromNode("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_CL1").setFromField("cycleTime").setToNode("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_MB1").setToField("set_location")
Transform66.addChild(ROUTE78)
ROUTE79 = ROUTEObject().setFromNode("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_CL1").setFromField("fraction_changed").setToNode("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_PI1").setToField("set_fraction")
Transform66.addChild(ROUTE79)
ROUTE80 = ROUTEObject().setFromNode("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_MB1").setFromField("keyValue").setToNode("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_PI1").setToField("keyValue")
Transform66.addChild(ROUTE80)
ROUTE81 = ROUTEObject().setFromNode("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_PI1").setFromField("value_changed").setToNode("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_node").setToField("set_translation")
Transform66.addChild(ROUTE81)
field65.addChild(Transform66)
Script47.addField(field65)
field82 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("connectornode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Transform83 = TransformObject().setUSE("cylinder1")
field82.addChild(Transform83)
Script47.addField(field82)
field84 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script47.addField(field84)
field85 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script47.addField(field85)

Script47.setSourceCode("\n"+
"            ecmascript:\n"+
"            \n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\n"+
"		return;\n"+
"	    }\n"+
"            var dif = endpoint.subtract(startpoint);\n"+
"            var dist = dif.length()*0.5;\n"+
"            var dif2 = dif.multiply(0.5);\n"+
"            var norm = dif.normalize();\n"+
"            var transl = startpoint.add(dif2);\n"+
"	    return {\n"+
"		    scale : new SFVec3f(1.0,dist,1.0),\n"+
"		    translation : transl,\n"+
"		    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"	    	    // rotation : new x3dom.fields.Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n"+
"	    };\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      connectornode.translation = trafo.translation;\n"+
"	      connectornode.rotation = trafo.rotation;\n"+
"	      connectornode.scale = trafo.scale;\n"+
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
Scene7.addChild(Script47)
ROUTE86 = ROUTEObject().setFromNode("DECLpoint_start_DECLpoint_start_MB1").setFromField("translation").setToNode("DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1").setToField("set_startpoint")
Scene7.addChild(ROUTE86)
ROUTE87 = ROUTEObject().setFromNode("DECLpoint_end_DECLpoint_end_MB1").setFromField("translation").setToNode("DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1").setToField("set_endpoint")
Scene7.addChild(ROUTE87)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/arcexpanded.new.x3d")
