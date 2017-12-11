# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("arc.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/arc.x3d")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("description")
meta6.setContent("an attempt to implement an arc in a graph")

head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()

Viewpoint8 = ViewpointObject()
Viewpoint8.setPosition([0,0,5])
Viewpoint8.setDescription("a moving graph")

Scene7.addChild(Viewpoint8)
Background9 = BackgroundObject()
Background9.setSkyColor([0.4,0.4,0.4])

Scene7.addChild(Background9)
Transform10 = TransformObject()
Transform10.setDEF("trans1")

Transform11 = TransformObject()
Transform11.setDEF("rotscale1")

Shape12 = ShapeObject()

Appearance13 = AppearanceObject()

Material14 = MaterialObject()
Material14.setDiffuseColor([0.2,0.7,0.7])

Appearance13.setMaterial(Material14)
Shape12.setAppearance(Appearance13)
Cylinder15 = CylinderObject()
Cylinder15.setRadius(0.1)

Shape12.setGeometry(Cylinder15)
Transform11.addChild(Shape12)
Transform10.addChild(Transform11)
Scene7.addChild(Transform10)
Transform16 = TransformObject()
Transform16.setDEF("trans2")

Transform17 = TransformObject()
Transform17.setDEF("rotscale2")

Shape18 = ShapeObject()

Appearance19 = AppearanceObject()

Material20 = MaterialObject()
Material20.setDiffuseColor([0.2,0.7,0.7])

Appearance19.setMaterial(Material20)
Shape18.setAppearance(Appearance19)
Cylinder21 = CylinderObject()
Cylinder21.setRadius(0.1)

Shape18.setGeometry(Cylinder21)
Transform17.addChild(Shape18)
Transform16.addChild(Transform17)
Scene7.addChild(Transform16)
Transform22 = TransformObject()
Transform22.setDEF("trans3")

Transform23 = TransformObject()
Transform23.setDEF("rotscale3")

Shape24 = ShapeObject()

Appearance25 = AppearanceObject()

Material26 = MaterialObject()
Material26.setDiffuseColor([0.2,0.7,0.7])

Appearance25.setMaterial(Material26)
Shape24.setAppearance(Appearance25)
Cylinder27 = CylinderObject()
Cylinder27.setRadius(0.1)

Shape24.setGeometry(Cylinder27)
Transform23.addChild(Shape24)
Transform22.addChild(Transform23)
Scene7.addChild(Transform22)
ProtoDeclare28 = ProtoDeclareObject()
ProtoDeclare28.setName("point")

ProtoInterface29 = ProtoInterfaceObject()

field30 = fieldObject()
field30.setType(fieldObject.TYPE_SFVEC3F)
field30.setName("translation")
field30.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field30.setValue("0 0 0")

ProtoInterface29.addField(field30)
ProtoDeclare28.setProtoInterface(ProtoInterface29)
ProtoBody31 = ProtoBodyObject()

Transform32 = TransformObject()
Transform32.setDEF("node")

IS33 = ISObject()

connect34 = connectObject()
connect34.setNodeField("translation")
connect34.setProtoField("translation")

IS33.addConnect(connect34)
Transform32.setIS(IS33)
Shape35 = ShapeObject()

Sphere36 = SphereObject()
Sphere36.setRadius(0.1)

Shape35.setGeometry(Sphere36)
Appearance37 = AppearanceObject()

Material38 = MaterialObject()
Material38.setDiffuseColor([1,0,0])

Appearance37.setMaterial(Material38)
Shape35.setAppearance(Appearance37)
Transform32.addChild(Shape35)
PositionInterpolator39 = PositionInterpolatorObject()
PositionInterpolator39.setDEF("PI1")
PositionInterpolator39.setKey([0,1])
PositionInterpolator39.setKeyValue([0,0,0,0,5,0])

Transform32.addChild(PositionInterpolator39)
Script40 = ScriptObject()
Script40.setDEF("MB1")

field41 = fieldObject()
field41.setType(fieldObject.TYPE_SFVEC3F)
field41.setName("translation")
field41.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field41.setValue("50 50 0")

Script40.addField(field41)
field42 = fieldObject()
field42.setType(fieldObject.TYPE_SFVEC3F)
field42.setName("old")
field42.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field42.setValue("0 0 0")

Script40.addField(field42)
field43 = fieldObject()
field43.setType(fieldObject.TYPE_SFTIME)
field43.setName("set_location")
field43.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script40.addField(field43)
field44 = fieldObject()
field44.setType(fieldObject.TYPE_MFVEC3F)
field44.setName("keyValue")
field44.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

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
TimeSensor45 = TimeSensorObject()
TimeSensor45.setDEF("CL1")
TimeSensor45.setCycleInterval(3)
TimeSensor45.setLoop(True)

Transform32.addChild(TimeSensor45)
ROUTE46 = ROUTEObject()
ROUTE46.setFromNode("CL1")
ROUTE46.setFromField("cycleTime")
ROUTE46.setToNode("MB1")
ROUTE46.setToField("set_location")

Transform32.addChild(ROUTE46)
ROUTE47 = ROUTEObject()
ROUTE47.setFromNode("CL1")
ROUTE47.setFromField("fraction_changed")
ROUTE47.setToNode("PI1")
ROUTE47.setToField("set_fraction")

Transform32.addChild(ROUTE47)
ROUTE48 = ROUTEObject()
ROUTE48.setFromNode("MB1")
ROUTE48.setFromField("keyValue")
ROUTE48.setToNode("PI1")
ROUTE48.setToField("keyValue")

Transform32.addChild(ROUTE48)
ROUTE49 = ROUTEObject()
ROUTE49.setFromNode("PI1")
ROUTE49.setFromField("value_changed")
ROUTE49.setToNode("node")
ROUTE49.setToField("set_translation")

Transform32.addChild(ROUTE49)
ProtoBody31.addChild(Transform32)
ProtoDeclare28.setProtoBody(ProtoBody31)
Scene7.addChild(ProtoDeclare28)

Scene7.addComments(CommentsBlock("""from doug sanden"""))
ProtoDeclare50 = ProtoDeclareObject()
ProtoDeclare50.setName("x3dconnector")

ProtoInterface51 = ProtoInterfaceObject()

field52 = fieldObject()
field52.setType(fieldObject.TYPE_SFNODE)
field52.setName("startnode")
field52.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

ProtoInterface51.addField(field52)
field53 = fieldObject()
field53.setType(fieldObject.TYPE_SFNODE)
field53.setName("endnode")
field53.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

ProtoInterface51.addField(field53)
field54 = fieldObject()
field54.setType(fieldObject.TYPE_SFNODE)
field54.setName("transnode")
field54.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

ProtoInterface51.addField(field54)
field55 = fieldObject()
field55.setType(fieldObject.TYPE_SFNODE)
field55.setName("rotscalenode")
field55.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

ProtoInterface51.addField(field55)
field56 = fieldObject()
field56.setType(fieldObject.TYPE_SFVEC3F)
field56.setName("set_startpoint")
field56.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

ProtoInterface51.addField(field56)
field57 = fieldObject()
field57.setType(fieldObject.TYPE_SFVEC3F)
field57.setName("set_endpoint")
field57.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

ProtoInterface51.addField(field57)
ProtoDeclare50.setProtoInterface(ProtoInterface51)
ProtoBody58 = ProtoBodyObject()

Script59 = ScriptObject()
Script59.setDEF("S1")

field60 = fieldObject()
field60.setType(fieldObject.TYPE_SFNODE)
field60.setName("startnode")
field60.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script59.addField(field60)
field61 = fieldObject()
field61.setType(fieldObject.TYPE_SFNODE)
field61.setName("endnode")
field61.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script59.addField(field61)
field62 = fieldObject()
field62.setType(fieldObject.TYPE_SFNODE)
field62.setName("transnode")
field62.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script59.addField(field62)
field63 = fieldObject()
field63.setType(fieldObject.TYPE_SFNODE)
field63.setName("rotscalenode")
field63.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script59.addField(field63)
field64 = fieldObject()
field64.setType(fieldObject.TYPE_SFVEC3F)
field64.setName("set_startpoint")
field64.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script59.addField(field64)
field65 = fieldObject()
field65.setType(fieldObject.TYPE_SFVEC3F)
field65.setName("set_endpoint")
field65.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script59.addField(field65)
IS66 = ISObject()

connect67 = connectObject()
connect67.setNodeField("startnode")
connect67.setProtoField("startnode")

IS66.addConnect(connect67)
connect68 = connectObject()
connect68.setNodeField("endnode")
connect68.setProtoField("endnode")

IS66.addConnect(connect68)
connect69 = connectObject()
connect69.setNodeField("transnode")
connect69.setProtoField("transnode")

IS66.addConnect(connect69)
connect70 = connectObject()
connect70.setNodeField("rotscalenode")
connect70.setProtoField("rotscalenode")

IS66.addConnect(connect70)
connect71 = connectObject()
connect71.setNodeField("set_startpoint")
connect71.setProtoField("set_startpoint")

IS66.addConnect(connect71)
connect72 = connectObject()
connect72.setNodeField("set_endpoint")
connect72.setProtoField("set_endpoint")

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
ProtoInstance73 = ProtoInstanceObject()
ProtoInstance73.setName("point")
ProtoInstance73.setDEF("G1")

Scene7.addChild(ProtoInstance73)
ProtoInstance74 = ProtoInstanceObject()
ProtoInstance74.setName("point")
ProtoInstance74.setDEF("G2")

Scene7.addChild(ProtoInstance74)
ProtoInstance75 = ProtoInstanceObject()
ProtoInstance75.setName("point")
ProtoInstance75.setDEF("G3")

Scene7.addChild(ProtoInstance75)
ProtoInstance76 = ProtoInstanceObject()
ProtoInstance76.setName("point")
ProtoInstance76.setDEF("G4")

Scene7.addChild(ProtoInstance76)
ProtoInstance77 = ProtoInstanceObject()
ProtoInstance77.setName("x3dconnector")
ProtoInstance77.setDEF("connector1")

fieldValue78 = fieldValueObject()
fieldValue78.setName("startnode")

ProtoInstance79 = ProtoInstanceObject()
ProtoInstance79.setUSE("G1")

fieldValue78.addChild(ProtoInstance79)
ProtoInstance77.addFieldValue(fieldValue78)
fieldValue80 = fieldValueObject()
fieldValue80.setName("endnode")

ProtoInstance81 = ProtoInstanceObject()
ProtoInstance81.setUSE("G2")

fieldValue80.addChild(ProtoInstance81)
ProtoInstance77.addFieldValue(fieldValue80)
fieldValue82 = fieldValueObject()
fieldValue82.setName("transnode")

Transform83 = TransformObject()
Transform83.setUSE("trans1")

fieldValue82.addChild(Transform83)
ProtoInstance77.addFieldValue(fieldValue82)
fieldValue84 = fieldValueObject()
fieldValue84.setName("rotscalenode")

Transform85 = TransformObject()
Transform85.setUSE("rotscale1")

fieldValue84.addChild(Transform85)
ProtoInstance77.addFieldValue(fieldValue84)
Scene7.addChild(ProtoInstance77)
ProtoInstance86 = ProtoInstanceObject()
ProtoInstance86.setName("x3dconnector")
ProtoInstance86.setDEF("connector2")

fieldValue87 = fieldValueObject()
fieldValue87.setName("startnode")

ProtoInstance88 = ProtoInstanceObject()
ProtoInstance88.setUSE("G1")

fieldValue87.addChild(ProtoInstance88)
ProtoInstance86.addFieldValue(fieldValue87)
fieldValue89 = fieldValueObject()
fieldValue89.setName("endnode")

ProtoInstance90 = ProtoInstanceObject()
ProtoInstance90.setUSE("G3")

fieldValue89.addChild(ProtoInstance90)
ProtoInstance86.addFieldValue(fieldValue89)
fieldValue91 = fieldValueObject()
fieldValue91.setName("transnode")

Transform92 = TransformObject()
Transform92.setUSE("trans2")

fieldValue91.addChild(Transform92)
ProtoInstance86.addFieldValue(fieldValue91)
fieldValue93 = fieldValueObject()
fieldValue93.setName("rotscalenode")

Transform94 = TransformObject()
Transform94.setUSE("rotscale2")

fieldValue93.addChild(Transform94)
ProtoInstance86.addFieldValue(fieldValue93)
Scene7.addChild(ProtoInstance86)
ProtoInstance95 = ProtoInstanceObject()
ProtoInstance95.setName("x3dconnector")
ProtoInstance95.setDEF("connector3")

fieldValue96 = fieldValueObject()
fieldValue96.setName("startnode")

ProtoInstance97 = ProtoInstanceObject()
ProtoInstance97.setUSE("G1")

fieldValue96.addChild(ProtoInstance97)
ProtoInstance95.addFieldValue(fieldValue96)
fieldValue98 = fieldValueObject()
fieldValue98.setName("endnode")

ProtoInstance99 = ProtoInstanceObject()
ProtoInstance99.setUSE("G4")

fieldValue98.addChild(ProtoInstance99)
ProtoInstance95.addFieldValue(fieldValue98)
fieldValue100 = fieldValueObject()
fieldValue100.setName("transnode")

Transform101 = TransformObject()
Transform101.setUSE("trans3")

fieldValue100.addChild(Transform101)
ProtoInstance95.addFieldValue(fieldValue100)
fieldValue102 = fieldValueObject()
fieldValue102.setName("rotscalenode")

Transform103 = TransformObject()
Transform103.setUSE("rotscale3")

fieldValue102.addChild(Transform103)
ProtoInstance95.addFieldValue(fieldValue102)
Scene7.addChild(ProtoInstance95)
ROUTE104 = ROUTEObject()
ROUTE104.setFromNode("G1")
ROUTE104.setFromField("translation_changed")
ROUTE104.setToNode("connector1")
ROUTE104.setToField("set_startpoint")

Scene7.addChild(ROUTE104)
ROUTE105 = ROUTEObject()
ROUTE105.setFromNode("G2")
ROUTE105.setFromField("translation_changed")
ROUTE105.setToNode("connector1")
ROUTE105.setToField("set_endpoint")

Scene7.addChild(ROUTE105)
ROUTE106 = ROUTEObject()
ROUTE106.setFromNode("G1")
ROUTE106.setFromField("translation_changed")
ROUTE106.setToNode("connector2")
ROUTE106.setToField("set_startpoint")

Scene7.addChild(ROUTE106)
ROUTE107 = ROUTEObject()
ROUTE107.setFromNode("G3")
ROUTE107.setFromField("translation_changed")
ROUTE107.setToNode("connector2")
ROUTE107.setToField("set_endpoint")

Scene7.addChild(ROUTE107)
ROUTE108 = ROUTEObject()
ROUTE108.setFromNode("G1")
ROUTE108.setFromField("translation_changed")
ROUTE108.setToNode("connector3")
ROUTE108.setToField("set_startpoint")

Scene7.addChild(ROUTE108)
ROUTE109 = ROUTEObject()
ROUTE109.setFromNode("G4")
ROUTE109.setFromField("translation_changed")
ROUTE109.setToNode("connector3")
ROUTE109.setToField("set_endpoint")

Scene7.addChild(ROUTE109)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/arcold.new.x3d")
