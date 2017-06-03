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
Transform15 = TransformObject().setDEF("cylinder2")
Shape16 = ShapeObject()
Appearance17 = AppearanceObject()
Material18 = MaterialObject().setDiffuseColor([0.2,0.7,0.7])
Appearance17.setMaterial(Material18)
Shape16.setAppearance(Appearance17)
Cylinder19 = CylinderObject().setRadius(0.1)
Shape16.setGeometry(Cylinder19)
Transform15.addChild(Shape16)
Scene7.addChild(Transform15)
Transform20 = TransformObject().setDEF("cylinder3")
Shape21 = ShapeObject()
Appearance22 = AppearanceObject()
Material23 = MaterialObject().setDiffuseColor([0.2,0.7,0.7])
Appearance22.setMaterial(Material23)
Shape21.setAppearance(Appearance22)
Cylinder24 = CylinderObject().setRadius(0.1)
Shape21.setGeometry(Cylinder24)
Transform20.addChild(Shape21)
Scene7.addChild(Transform20)
ProtoDeclare25 = ProtoDeclareObject().setName("point")
ProtoInterface26 = ProtoInterfaceObject()
field27 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
ProtoInterface26.addField(field27)
ProtoDeclare25.setProtoInterface(ProtoInterface26)
ProtoBody28 = ProtoBodyObject()
Transform29 = TransformObject().setDEF("node")
IS30 = ISObject()
connect31 = connectObject().setNodeField("translation").setProtoField("translation")
IS30.addConnect(connect31)
Transform29.setIS(IS30)
Shape32 = ShapeObject()
Sphere33 = SphereObject().setRadius(0.1)
Shape32.setGeometry(Sphere33)
Appearance34 = AppearanceObject()
Material35 = MaterialObject().setDiffuseColor([1,0,0])
Appearance34.setMaterial(Material35)
Shape32.setAppearance(Appearance34)
Transform29.addChild(Shape32)
PositionInterpolator36 = PositionInterpolatorObject().setDEF("PI1").setKey([0,1]).setKeyValue([0,0,0,0,5,0])
Transform29.addChild(PositionInterpolator36)
Script37 = ScriptObject().setDEF("MB1")
field38 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0")
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
Transform29.addChild(Script37)
TimeSensor42 = TimeSensorObject().setDEF("CL1").setCycleInterval(3).setLoop(True)
Transform29.addChild(TimeSensor42)
ROUTE43 = ROUTEObject().setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location")
Transform29.addChild(ROUTE43)
ROUTE44 = ROUTEObject().setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction")
Transform29.addChild(ROUTE44)
ROUTE45 = ROUTEObject().setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue")
Transform29.addChild(ROUTE45)
ROUTE46 = ROUTEObject().setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation")
Transform29.addChild(ROUTE46)
ProtoBody28.addChild(Transform29)
ProtoDeclare25.setProtoBody(ProtoBody28)
Scene7.addChild(ProtoDeclare25)

Scene7.addComments(CommentsBlock("from doug sanden"))
ProtoDeclare47 = ProtoDeclareObject().setName("x3dconnector")
ProtoInterface48 = ProtoInterfaceObject()
field49 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
ProtoInterface48.addField(field49)
field50 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
ProtoInterface48.addField(field50)
field51 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("connectornode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
ProtoInterface48.addField(field51)
field52 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface48.addField(field52)
field53 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface48.addField(field53)
ProtoDeclare47.setProtoInterface(ProtoInterface48)
ProtoBody54 = ProtoBodyObject()
Script55 = ScriptObject().setDEF("S1")
field56 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Script55.addField(field56)
field57 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Script55.addField(field57)
field58 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("connectornode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Script55.addField(field58)
field59 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script55.addField(field59)
field60 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script55.addField(field60)
IS61 = ISObject()
connect62 = connectObject().setNodeField("startnode").setProtoField("startnode")
IS61.addConnect(connect62)
connect63 = connectObject().setNodeField("endnode").setProtoField("endnode")
IS61.addConnect(connect63)
connect64 = connectObject().setNodeField("connectornode").setProtoField("connectornode")
IS61.addConnect(connect64)
connect65 = connectObject().setNodeField("set_startpoint").setProtoField("set_startpoint")
IS61.addConnect(connect65)
connect66 = connectObject().setNodeField("set_endpoint").setProtoField("set_endpoint")
IS61.addConnect(connect66)
Script55.setIS(IS61)

Script55.setSourceCode("\n"+
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
ProtoBody54.addChild(Script55)
ProtoDeclare47.setProtoBody(ProtoBody54)
Scene7.addChild(ProtoDeclare47)
ProtoInstance67 = ProtoInstanceObject().setName("point").setDEF("start")
Scene7.addChild(ProtoInstance67)
ProtoInstance68 = ProtoInstanceObject().setName("point").setDEF("end1")
Scene7.addChild(ProtoInstance68)
ProtoInstance69 = ProtoInstanceObject().setName("point").setDEF("end2")
Scene7.addChild(ProtoInstance69)
ProtoInstance70 = ProtoInstanceObject().setName("point").setDEF("end3")
Scene7.addChild(ProtoInstance70)
ProtoInstance71 = ProtoInstanceObject().setName("x3dconnector").setDEF("connector1")
fieldValue72 = fieldValueObject().setName("startnode")
ProtoInstance73 = ProtoInstanceObject().setName("point").setUSE("start")
fieldValue72.addChild(ProtoInstance73)
ProtoInstance71.addFieldValue(fieldValue72)
fieldValue74 = fieldValueObject().setName("endnode")
ProtoInstance75 = ProtoInstanceObject().setName("point").setUSE("end1")
fieldValue74.addChild(ProtoInstance75)
ProtoInstance71.addFieldValue(fieldValue74)
fieldValue76 = fieldValueObject().setName("connectornode")
Transform77 = TransformObject().setUSE("cylinder1")
fieldValue76.addChild(Transform77)
ProtoInstance71.addFieldValue(fieldValue76)
Scene7.addChild(ProtoInstance71)
ProtoInstance78 = ProtoInstanceObject().setName("x3dconnector").setDEF("connector2")
fieldValue79 = fieldValueObject().setName("startnode")
ProtoInstance80 = ProtoInstanceObject().setName("point").setUSE("start")
fieldValue79.addChild(ProtoInstance80)
ProtoInstance78.addFieldValue(fieldValue79)
fieldValue81 = fieldValueObject().setName("endnode")
ProtoInstance82 = ProtoInstanceObject().setName("point").setUSE("end2")
fieldValue81.addChild(ProtoInstance82)
ProtoInstance78.addFieldValue(fieldValue81)
fieldValue83 = fieldValueObject().setName("connectornode")
Transform84 = TransformObject().setUSE("cylinder2")
fieldValue83.addChild(Transform84)
ProtoInstance78.addFieldValue(fieldValue83)
Scene7.addChild(ProtoInstance78)
ProtoInstance85 = ProtoInstanceObject().setName("x3dconnector").setDEF("connector3")
fieldValue86 = fieldValueObject().setName("startnode")
ProtoInstance87 = ProtoInstanceObject().setName("point").setUSE("start")
fieldValue86.addChild(ProtoInstance87)
ProtoInstance85.addFieldValue(fieldValue86)
fieldValue88 = fieldValueObject().setName("endnode")
ProtoInstance89 = ProtoInstanceObject().setName("point").setUSE("end3")
fieldValue88.addChild(ProtoInstance89)
ProtoInstance85.addFieldValue(fieldValue88)
fieldValue90 = fieldValueObject().setName("connectornode")
Transform91 = TransformObject().setUSE("cylinder3")
fieldValue90.addChild(Transform91)
ProtoInstance85.addFieldValue(fieldValue90)
Scene7.addChild(ProtoInstance85)
ROUTE92 = ROUTEObject().setFromNode("start").setFromField("translation").setToNode("connector1").setToField("set_startpoint")
Scene7.addChild(ROUTE92)
ROUTE93 = ROUTEObject().setFromNode("end1").setFromField("translation").setToNode("connector1").setToField("set_endpoint")
Scene7.addChild(ROUTE93)
ROUTE94 = ROUTEObject().setFromNode("start").setFromField("translation").setToNode("connector2").setToField("set_startpoint")
Scene7.addChild(ROUTE94)
ROUTE95 = ROUTEObject().setFromNode("end2").setFromField("translation").setToNode("connector2").setToField("set_endpoint")
Scene7.addChild(ROUTE95)
ROUTE96 = ROUTEObject().setFromNode("start").setFromField("translation").setToNode("connector3").setToField("set_startpoint")
Scene7.addChild(ROUTE96)
ROUTE97 = ROUTEObject().setFromNode("end3").setFromField("translation").setToNode("connector3").setToField("set_endpoint")
Scene7.addChild(ROUTE97)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/arc.new.x3d")
