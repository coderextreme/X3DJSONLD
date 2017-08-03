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
Transform10 = TransformObject().setDEF("trans1")
Transform11 = TransformObject().setDEF("rotscale1")
Shape12 = ShapeObject()
Appearance13 = AppearanceObject()
Material14 = MaterialObject().setDiffuseColor([0.2,0.7,0.7])
Appearance13.setMaterial(Material14)
Shape12.setAppearance(Appearance13)
Cylinder15 = CylinderObject().setRadius(0.1)
Shape12.setGeometry(Cylinder15)
Transform11.addChild(Shape12)
Transform10.addChild(Transform11)
Scene7.addChild(Transform10)
Transform16 = TransformObject().setDEF("trans2")
Transform17 = TransformObject().setDEF("rotscale2")
Shape18 = ShapeObject()
Appearance19 = AppearanceObject()
Material20 = MaterialObject().setDiffuseColor([0.2,0.7,0.7])
Appearance19.setMaterial(Material20)
Shape18.setAppearance(Appearance19)
Cylinder21 = CylinderObject().setRadius(0.1)
Shape18.setGeometry(Cylinder21)
Transform17.addChild(Shape18)
Transform16.addChild(Transform17)
Scene7.addChild(Transform16)
Transform22 = TransformObject().setDEF("trans3")
Transform23 = TransformObject().setDEF("rotscale3")
Shape24 = ShapeObject()
Appearance25 = AppearanceObject()
Material26 = MaterialObject().setDiffuseColor([0.2,0.7,0.7])
Appearance25.setMaterial(Material26)
Shape24.setAppearance(Appearance25)
Cylinder27 = CylinderObject().setRadius(0.1)
Shape24.setGeometry(Cylinder27)
Transform23.addChild(Shape24)
Transform22.addChild(Transform23)
Scene7.addChild(Transform22)
ProtoDeclare28 = ProtoDeclareObject().setName("point")
ProtoInterface29 = ProtoInterfaceObject()
field30 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
ProtoInterface29.addField(field30)
ProtoDeclare28.setProtoInterface(ProtoInterface29)
ProtoBody31 = ProtoBodyObject()
Transform32 = TransformObject().setDEF("node")
IS33 = ISObject()
connect34 = connectObject().setNodeField("translation").setProtoField("translation")
IS33.addConnect(connect34)
Transform32.setIS(IS33)
Shape35 = ShapeObject()
Sphere36 = SphereObject().setRadius(0.1)
Shape35.setGeometry(Sphere36)
Appearance37 = AppearanceObject()
Material38 = MaterialObject().setDiffuseColor([1,0,0])
Appearance37.setMaterial(Material38)
Shape35.setAppearance(Appearance37)
Transform32.addChild(Shape35)
PositionInterpolator39 = PositionInterpolatorObject().setDEF("PI1").setKey([0,1]).setKeyValue([0,0,0,0,5,0])
Transform32.addChild(PositionInterpolator39)
Script40 = ScriptObject().setDEF("MB1")
field41 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0")
Script40.addField(field41)
field42 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script40.addField(field42)
field43 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_location").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script40.addField(field43)
field44 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script40.addField(field44)

Script40.setSourceCode("ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}\n"+
"")
Transform32.addChild(Script40)
TimeSensor45 = TimeSensorObject().setDEF("CL1").setCycleInterval(3).setLoop(True)
Transform32.addChild(TimeSensor45)
ROUTE46 = ROUTEObject().setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location")
Transform32.addChild(ROUTE46)
ROUTE47 = ROUTEObject().setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction")
Transform32.addChild(ROUTE47)
ROUTE48 = ROUTEObject().setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue")
Transform32.addChild(ROUTE48)
ROUTE49 = ROUTEObject().setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation")
Transform32.addChild(ROUTE49)
ProtoBody31.addChild(Transform32)
ProtoDeclare28.setProtoBody(ProtoBody31)
Scene7.addChild(ProtoDeclare28)

Scene7.addComments(CommentsBlock("from doug sanden"))
ProtoDeclare50 = ProtoDeclareObject().setName("x3dconnector")
ProtoInterface51 = ProtoInterfaceObject()
field52 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
ProtoInterface51.addField(field52)
field53 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
ProtoInterface51.addField(field53)
field54 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("transnode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
ProtoInterface51.addField(field54)
field55 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("rotscalenode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
ProtoInterface51.addField(field55)
field56 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface51.addField(field56)
field57 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface51.addField(field57)
ProtoDeclare50.setProtoInterface(ProtoInterface51)
ProtoBody58 = ProtoBodyObject()
Script59 = ScriptObject().setDEF("S1")
field60 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Script59.addField(field60)
field61 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Script59.addField(field61)
field62 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("transnode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Script59.addField(field62)
field63 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("rotscalenode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Script59.addField(field63)
field64 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script59.addField(field64)
field65 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script59.addField(field65)
IS66 = ISObject()
connect67 = connectObject().setNodeField("startnode").setProtoField("startnode")
IS66.addConnect(connect67)
connect68 = connectObject().setNodeField("endnode").setProtoField("endnode")
IS66.addConnect(connect68)
connect69 = connectObject().setNodeField("transnode").setProtoField("transnode")
IS66.addConnect(connect69)
connect70 = connectObject().setNodeField("rotscalenode").setProtoField("rotscalenode")
IS66.addConnect(connect70)
connect71 = connectObject().setNodeField("set_startpoint").setProtoField("set_startpoint")
IS66.addConnect(connect71)
connect72 = connectObject().setNodeField("set_endpoint").setProtoField("set_endpoint")
IS66.addConnect(connect72)
Script59.setIS(IS66)

Script59.setSourceCode("ecmascript:\n"+
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
"		var trafo = recompute(startpoint, endpoint);\n"+
"		if (typeof trafo !== 'undefined') {\n"+
"			transnode.translation = trafo.translation;\n"+
"			rotscalenode.rotation = trafo.rotation;\n"+
"			rotscalenode.scale = trafo.scale;\n"+
"		} else {\n"+
"			Browser.print(\"recompute returned undefined\");\n"+
"		}\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val || startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val || endnode.translation);\n"+
"        }\n"+
"")
ProtoBody58.addChild(Script59)
ProtoDeclare50.setProtoBody(ProtoBody58)
Scene7.addChild(ProtoDeclare50)
ProtoInstance73 = ProtoInstanceObject().setName("point").setDEF("G1")
Scene7.addChild(ProtoInstance73)
ProtoInstance74 = ProtoInstanceObject().setName("point").setDEF("G2")
Scene7.addChild(ProtoInstance74)
ProtoInstance75 = ProtoInstanceObject().setName("point").setDEF("G3")
Scene7.addChild(ProtoInstance75)
ProtoInstance76 = ProtoInstanceObject().setName("point").setDEF("G4")
Scene7.addChild(ProtoInstance76)
ProtoInstance77 = ProtoInstanceObject().setName("x3dconnector").setDEF("connector1")
fieldValue78 = fieldValueObject().setName("startnode")
ProtoInstance79 = ProtoInstanceObject().setUSE("G1")
fieldValue78.addChild(ProtoInstance79)
ProtoInstance77.addFieldValue(fieldValue78)
fieldValue80 = fieldValueObject().setName("endnode")
ProtoInstance81 = ProtoInstanceObject().setUSE("G2")
fieldValue80.addChild(ProtoInstance81)
ProtoInstance77.addFieldValue(fieldValue80)
fieldValue82 = fieldValueObject().setName("transnode")
Transform83 = TransformObject().setUSE("trans1")
fieldValue82.addChild(Transform83)
ProtoInstance77.addFieldValue(fieldValue82)
fieldValue84 = fieldValueObject().setName("rotscalenode")
Transform85 = TransformObject().setUSE("rotscale1")
fieldValue84.addChild(Transform85)
ProtoInstance77.addFieldValue(fieldValue84)
Scene7.addChild(ProtoInstance77)
ProtoInstance86 = ProtoInstanceObject().setName("x3dconnector").setDEF("connector2")
fieldValue87 = fieldValueObject().setName("startnode")
ProtoInstance88 = ProtoInstanceObject().setUSE("G1")
fieldValue87.addChild(ProtoInstance88)
ProtoInstance86.addFieldValue(fieldValue87)
fieldValue89 = fieldValueObject().setName("endnode")
ProtoInstance90 = ProtoInstanceObject().setUSE("G3")
fieldValue89.addChild(ProtoInstance90)
ProtoInstance86.addFieldValue(fieldValue89)
fieldValue91 = fieldValueObject().setName("transnode")
Transform92 = TransformObject().setUSE("trans2")
fieldValue91.addChild(Transform92)
ProtoInstance86.addFieldValue(fieldValue91)
fieldValue93 = fieldValueObject().setName("rotscalenode")
Transform94 = TransformObject().setUSE("rotscale2")
fieldValue93.addChild(Transform94)
ProtoInstance86.addFieldValue(fieldValue93)
Scene7.addChild(ProtoInstance86)
ProtoInstance95 = ProtoInstanceObject().setName("x3dconnector").setDEF("connector3")
fieldValue96 = fieldValueObject().setName("startnode")
ProtoInstance97 = ProtoInstanceObject().setUSE("G1")
fieldValue96.addChild(ProtoInstance97)
ProtoInstance95.addFieldValue(fieldValue96)
fieldValue98 = fieldValueObject().setName("endnode")
ProtoInstance99 = ProtoInstanceObject().setUSE("G4")
fieldValue98.addChild(ProtoInstance99)
ProtoInstance95.addFieldValue(fieldValue98)
fieldValue100 = fieldValueObject().setName("transnode")
Transform101 = TransformObject().setUSE("trans3")
fieldValue100.addChild(Transform101)
ProtoInstance95.addFieldValue(fieldValue100)
fieldValue102 = fieldValueObject().setName("rotscalenode")
Transform103 = TransformObject().setUSE("rotscale3")
fieldValue102.addChild(Transform103)
ProtoInstance95.addFieldValue(fieldValue102)
Scene7.addChild(ProtoInstance95)
ROUTE104 = ROUTEObject().setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint")
Scene7.addChild(ROUTE104)
ROUTE105 = ROUTEObject().setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint")
Scene7.addChild(ROUTE105)
ROUTE106 = ROUTEObject().setFromNode("G1").setFromField("translation_changed").setToNode("connector2").setToField("set_startpoint")
Scene7.addChild(ROUTE106)
ROUTE107 = ROUTEObject().setFromNode("G3").setFromField("translation_changed").setToNode("connector2").setToField("set_endpoint")
Scene7.addChild(ROUTE107)
ROUTE108 = ROUTEObject().setFromNode("G1").setFromField("translation_changed").setToNode("connector3").setToField("set_startpoint")
Scene7.addChild(ROUTE108)
ROUTE109 = ROUTEObject().setFromNode("G4").setFromField("translation_changed").setToNode("connector3").setToField("set_endpoint")
Scene7.addChild(ROUTE109)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/arcold.new.x3d")
