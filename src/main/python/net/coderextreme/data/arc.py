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
ProtoDeclare10 = ProtoDeclareObject()
ProtoDeclare10.setName("point")

ProtoInterface11 = ProtoInterfaceObject()

field12 = fieldObject()
field12.setType(fieldObject.TYPE_SFVEC3F)
field12.setName("translation")
field12.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field12.setValue("0 0 0")

ProtoInterface11.addField(field12)
ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody13 = ProtoBodyObject()

Transform14 = TransformObject()
Transform14.setDEF("node")

IS15 = ISObject()

connect16 = connectObject()
connect16.setNodeField("translation")
connect16.setProtoField("translation")

IS15.addConnect(connect16)
Transform14.setIS(IS15)
Shape17 = ShapeObject()

Sphere18 = SphereObject()
Sphere18.setRadius(0.1)

Shape17.setGeometry(Sphere18)
Appearance19 = AppearanceObject()

Material20 = MaterialObject()
Material20.setDiffuseColor([1,0,0])

Appearance19.setMaterial(Material20)
Shape17.setAppearance(Appearance19)
Transform14.addChild(Shape17)
PositionInterpolator21 = PositionInterpolatorObject()
PositionInterpolator21.setDEF("PI1")
PositionInterpolator21.setKey([0,1])
PositionInterpolator21.setKeyValue([0,0,0,0,5,0])

Transform14.addChild(PositionInterpolator21)
Script22 = ScriptObject()
Script22.setDEF("MB1")

field23 = fieldObject()
field23.setType(fieldObject.TYPE_SFVEC3F)
field23.setName("translation")
field23.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field23.setValue("50 50 0")

Script22.addField(field23)
field24 = fieldObject()
field24.setType(fieldObject.TYPE_SFVEC3F)
field24.setName("old")
field24.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field24.setValue("0 0 0")

Script22.addField(field24)
field25 = fieldObject()
field25.setType(fieldObject.TYPE_SFTIME)
field25.setName("set_location")
field25.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script22.addField(field25)
field26 = fieldObject()
field26.setType(fieldObject.TYPE_MFVEC3F)
field26.setName("keyValue")
field26.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field26.setValue("0 0 0 0 5 0")

Script22.addField(field26)

Script22.setSourceCode("ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}\n"+
"")
Transform14.addChild(Script22)
TimeSensor27 = TimeSensorObject()
TimeSensor27.setDEF("CL1")
TimeSensor27.setCycleInterval(3)
TimeSensor27.setLoop(True)

Transform14.addChild(TimeSensor27)
ROUTE28 = ROUTEObject()
ROUTE28.setFromNode("CL1")
ROUTE28.setFromField("cycleTime")
ROUTE28.setToNode("MB1")
ROUTE28.setToField("set_location")

Transform14.addChild(ROUTE28)
ROUTE29 = ROUTEObject()
ROUTE29.setFromNode("CL1")
ROUTE29.setFromField("fraction_changed")
ROUTE29.setToNode("PI1")
ROUTE29.setToField("set_fraction")

Transform14.addChild(ROUTE29)
ROUTE30 = ROUTEObject()
ROUTE30.setFromNode("MB1")
ROUTE30.setFromField("keyValue")
ROUTE30.setToNode("PI1")
ROUTE30.setToField("keyValue")

Transform14.addChild(ROUTE30)
ROUTE31 = ROUTEObject()
ROUTE31.setFromNode("PI1")
ROUTE31.setFromField("value_changed")
ROUTE31.setToNode("node")
ROUTE31.setToField("set_translation")

Transform14.addChild(ROUTE31)
ProtoBody13.addChild(Transform14)
ProtoDeclare10.setProtoBody(ProtoBody13)
Scene7.addChild(ProtoDeclare10)
ProtoDeclare32 = ProtoDeclareObject()
ProtoDeclare32.setName("x3dconnector")

ProtoInterface33 = ProtoInterfaceObject()

field34 = fieldObject()
field34.setType(fieldObject.TYPE_SFNODE)
field34.setName("startnode")
field34.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

ProtoInterface33.addField(field34)
field35 = fieldObject()
field35.setType(fieldObject.TYPE_SFNODE)
field35.setName("endnode")
field35.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

ProtoInterface33.addField(field35)
field36 = fieldObject()
field36.setType(fieldObject.TYPE_SFVEC3F)
field36.setName("set_startpoint")
field36.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

ProtoInterface33.addField(field36)
field37 = fieldObject()
field37.setType(fieldObject.TYPE_SFVEC3F)
field37.setName("set_endpoint")
field37.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

ProtoInterface33.addField(field37)
ProtoDeclare32.setProtoInterface(ProtoInterface33)
ProtoBody38 = ProtoBodyObject()

Group39 = GroupObject()

Transform40 = TransformObject()
Transform40.setDEF("trans")

Transform41 = TransformObject()
Transform41.setDEF("rotscale")

Shape42 = ShapeObject()

Appearance43 = AppearanceObject()

Material44 = MaterialObject()
Material44.setDiffuseColor([0.2,0.7,0.7])
Material44.setTransparency(0.5)

Appearance43.setMaterial(Material44)
Shape42.setAppearance(Appearance43)
Cylinder45 = CylinderObject()
Cylinder45.setRadius(0.05)

Shape42.setGeometry(Cylinder45)
Transform41.addChild(Shape42)
Transform40.addChild(Transform41)
Group39.addChild(Transform40)
Script46 = ScriptObject()
Script46.setDEF("S1")

field47 = fieldObject()
field47.setType(fieldObject.TYPE_SFNODE)
field47.setName("startnode")
field47.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Script46.addField(field47)
field48 = fieldObject()
field48.setType(fieldObject.TYPE_SFNODE)
field48.setName("endnode")
field48.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

Script46.addField(field48)
field49 = fieldObject()
field49.setType(fieldObject.TYPE_SFNODE)
field49.setName("position")
field49.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Transform50 = TransformObject()
Transform50.setUSE("trans")

field49.addChild(Transform50)
Script46.addField(field49)
field51 = fieldObject()
field51.setType(fieldObject.TYPE_SFNODE)
field51.setName("rotscale")
field51.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Transform52 = TransformObject()
Transform52.setUSE("rotscale")

field51.addChild(Transform52)
Script46.addField(field51)
field53 = fieldObject()
field53.setType(fieldObject.TYPE_SFVEC3F)
field53.setName("set_startpoint")
field53.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script46.addField(field53)
field54 = fieldObject()
field54.setType(fieldObject.TYPE_SFVEC3F)
field54.setName("set_endpoint")
field54.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script46.addField(field54)
IS55 = ISObject()

connect56 = connectObject()
connect56.setNodeField("startnode")
connect56.setProtoField("startnode")

IS55.addConnect(connect56)
connect57 = connectObject()
connect57.setNodeField("endnode")
connect57.setProtoField("endnode")

IS55.addConnect(connect57)
connect58 = connectObject()
connect58.setNodeField("set_startpoint")
connect58.setProtoField("set_startpoint")

IS55.addConnect(connect58)
connect59 = connectObject()
connect59.setNodeField("set_endpoint")
connect59.setProtoField("set_endpoint")

IS55.addConnect(connect59)
Script46.setIS(IS55)

Script46.setSourceCode("ecmascript:\n"+
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
Group39.addChild(Script46)
ProtoBody38.addChild(Group39)
ProtoDeclare32.setProtoBody(ProtoBody38)
Scene7.addChild(ProtoDeclare32)
ProtoInstance60 = ProtoInstanceObject()
ProtoInstance60.setName("point")
ProtoInstance60.setDEF("G1")

Scene7.addChild(ProtoInstance60)
ProtoInstance61 = ProtoInstanceObject()
ProtoInstance61.setName("point")
ProtoInstance61.setDEF("G2")

Scene7.addChild(ProtoInstance61)
ProtoInstance62 = ProtoInstanceObject()
ProtoInstance62.setName("point")
ProtoInstance62.setDEF("G3")

Scene7.addChild(ProtoInstance62)
ProtoInstance63 = ProtoInstanceObject()
ProtoInstance63.setName("point")
ProtoInstance63.setDEF("G4")

Scene7.addChild(ProtoInstance63)
ProtoInstance64 = ProtoInstanceObject()
ProtoInstance64.setName("x3dconnector")
ProtoInstance64.setDEF("connector1")

fieldValue65 = fieldValueObject()
fieldValue65.setName("startnode")

ProtoInstance66 = ProtoInstanceObject()
ProtoInstance66.setUSE("G1")

fieldValue65.addChild(ProtoInstance66)
ProtoInstance64.addFieldValue(fieldValue65)
fieldValue67 = fieldValueObject()
fieldValue67.setName("endnode")

ProtoInstance68 = ProtoInstanceObject()
ProtoInstance68.setUSE("G2")

fieldValue67.addChild(ProtoInstance68)
ProtoInstance64.addFieldValue(fieldValue67)
fieldValue69 = fieldValueObject()
fieldValue69.setName("set_startpoint")

ProtoInstance64.addFieldValue(fieldValue69)
fieldValue70 = fieldValueObject()
fieldValue70.setName("set_endpoint")

ProtoInstance64.addFieldValue(fieldValue70)
Scene7.addChild(ProtoInstance64)
ProtoInstance71 = ProtoInstanceObject()
ProtoInstance71.setName("x3dconnector")
ProtoInstance71.setDEF("connector2")

fieldValue72 = fieldValueObject()
fieldValue72.setName("startnode")

ProtoInstance73 = ProtoInstanceObject()
ProtoInstance73.setUSE("G1")

fieldValue72.addChild(ProtoInstance73)
ProtoInstance71.addFieldValue(fieldValue72)
fieldValue74 = fieldValueObject()
fieldValue74.setName("endnode")

ProtoInstance75 = ProtoInstanceObject()
ProtoInstance75.setUSE("G3")

fieldValue74.addChild(ProtoInstance75)
ProtoInstance71.addFieldValue(fieldValue74)
fieldValue76 = fieldValueObject()
fieldValue76.setName("set_startpoint")

ProtoInstance71.addFieldValue(fieldValue76)
fieldValue77 = fieldValueObject()
fieldValue77.setName("set_endpoint")

ProtoInstance71.addFieldValue(fieldValue77)
Scene7.addChild(ProtoInstance71)
ProtoInstance78 = ProtoInstanceObject()
ProtoInstance78.setName("x3dconnector")
ProtoInstance78.setDEF("connector3")

fieldValue79 = fieldValueObject()
fieldValue79.setName("startnode")

ProtoInstance80 = ProtoInstanceObject()
ProtoInstance80.setUSE("G1")

fieldValue79.addChild(ProtoInstance80)
ProtoInstance78.addFieldValue(fieldValue79)
fieldValue81 = fieldValueObject()
fieldValue81.setName("endnode")

ProtoInstance82 = ProtoInstanceObject()
ProtoInstance82.setUSE("G4")

fieldValue81.addChild(ProtoInstance82)
ProtoInstance78.addFieldValue(fieldValue81)
fieldValue83 = fieldValueObject()
fieldValue83.setName("set_startpoint")

ProtoInstance78.addFieldValue(fieldValue83)
fieldValue84 = fieldValueObject()
fieldValue84.setName("set_endpoint")

ProtoInstance78.addFieldValue(fieldValue84)
Scene7.addChild(ProtoInstance78)
ROUTE85 = ROUTEObject()
ROUTE85.setFromNode("G1")
ROUTE85.setFromField("translation")
ROUTE85.setToNode("connector1")
ROUTE85.setToField("set_startpoint")

Scene7.addChild(ROUTE85)
ROUTE86 = ROUTEObject()
ROUTE86.setFromNode("G2")
ROUTE86.setFromField("translation")
ROUTE86.setToNode("connector1")
ROUTE86.setToField("set_endpoint")

Scene7.addChild(ROUTE86)
ROUTE87 = ROUTEObject()
ROUTE87.setFromNode("G1")
ROUTE87.setFromField("translation")
ROUTE87.setToNode("connector2")
ROUTE87.setToField("set_startpoint")

Scene7.addChild(ROUTE87)
ROUTE88 = ROUTEObject()
ROUTE88.setFromNode("G3")
ROUTE88.setFromField("translation")
ROUTE88.setToNode("connector2")
ROUTE88.setToField("set_endpoint")

Scene7.addChild(ROUTE88)
ROUTE89 = ROUTEObject()
ROUTE89.setFromNode("G1")
ROUTE89.setFromField("translation")
ROUTE89.setToNode("connector3")
ROUTE89.setToField("set_startpoint")

Scene7.addChild(ROUTE89)
ROUTE90 = ROUTEObject()
ROUTE90.setFromNode("G4")
ROUTE90.setFromField("translation")
ROUTE90.setToNode("connector3")
ROUTE90.setToField("set_endpoint")

Scene7.addChild(ROUTE90)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/arc.new.x3d")
