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
ProtoDeclare10 = ProtoDeclareObject().setName("point")
ProtoInterface11 = ProtoInterfaceObject()
field12 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
ProtoInterface11.addField(field12)
ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody13 = ProtoBodyObject()
Transform14 = TransformObject().setDEF("node")
IS15 = ISObject()
connect16 = connectObject().setNodeField("translation").setProtoField("translation")
IS15.addConnect(connect16)
Transform14.setIS(IS15)
Shape17 = ShapeObject()
Sphere18 = SphereObject().setRadius(0.1)
Shape17.setGeometry(Sphere18)
Appearance19 = AppearanceObject()
Material20 = MaterialObject().setDiffuseColor([1,0,0])
Appearance19.setMaterial(Material20)
Shape17.setAppearance(Appearance19)
Transform14.addChild(Shape17)
PositionInterpolator21 = PositionInterpolatorObject().setDEF("PI1").setKey([0,1]).setKeyValue([0,0,0,0,5,0])
Transform14.addChild(PositionInterpolator21)
Script22 = ScriptObject().setDEF("MB1")
field23 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0")
Script22.addField(field23)
field24 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script22.addField(field24)
field25 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_location").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script22.addField(field25)
field26 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0 0 5 0")
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
TimeSensor27 = TimeSensorObject().setDEF("CL1").setCycleInterval(3).setLoop(True)
Transform14.addChild(TimeSensor27)
ROUTE28 = ROUTEObject().setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location")
Transform14.addChild(ROUTE28)
ROUTE29 = ROUTEObject().setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction")
Transform14.addChild(ROUTE29)
ROUTE30 = ROUTEObject().setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue")
Transform14.addChild(ROUTE30)
ROUTE31 = ROUTEObject().setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation")
Transform14.addChild(ROUTE31)
ProtoBody13.addChild(Transform14)
ProtoDeclare10.setProtoBody(ProtoBody13)
Scene7.addChild(ProtoDeclare10)
ProtoDeclare32 = ProtoDeclareObject().setName("x3dconnector")
ProtoInterface33 = ProtoInterfaceObject()
field34 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
ProtoInterface33.addField(field34)
field35 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
ProtoInterface33.addField(field35)
field36 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface33.addField(field36)
field37 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface33.addField(field37)
ProtoDeclare32.setProtoInterface(ProtoInterface33)
ProtoBody38 = ProtoBodyObject()
Group39 = GroupObject()
Transform40 = TransformObject().setDEF("trans")
Transform41 = TransformObject().setDEF("rotscale")
Shape42 = ShapeObject()
Appearance43 = AppearanceObject()
Material44 = MaterialObject().setDiffuseColor([0.2,0.7,0.7]).setTransparency(0.5)
Appearance43.setMaterial(Material44)
Shape42.setAppearance(Appearance43)
Cylinder45 = CylinderObject().setRadius(0.05)
Shape42.setGeometry(Cylinder45)
Transform41.addChild(Shape42)
Transform40.addChild(Transform41)
Group39.addChild(Transform40)
Script46 = ScriptObject().setDEF("S1")
field47 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Script46.addField(field47)
field48 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Script46.addField(field48)
field49 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Transform50 = TransformObject().setUSE("trans")
field49.addChild(Transform50)
Script46.addField(field49)
field51 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("rotscale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
Transform52 = TransformObject().setUSE("rotscale")
field51.addChild(Transform52)
Script46.addField(field51)
field53 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script46.addField(field53)
field54 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script46.addField(field54)
IS55 = ISObject()
connect56 = connectObject().setNodeField("startnode").setProtoField("startnode")
IS55.addConnect(connect56)
connect57 = connectObject().setNodeField("endnode").setProtoField("endnode")
IS55.addConnect(connect57)
connect58 = connectObject().setNodeField("set_startpoint").setProtoField("set_startpoint")
IS55.addConnect(connect58)
connect59 = connectObject().setNodeField("set_endpoint").setProtoField("set_endpoint")
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
ProtoInstance60 = ProtoInstanceObject().setName("point").setDEF("G1")
Scene7.addChild(ProtoInstance60)
ProtoInstance61 = ProtoInstanceObject().setName("point").setDEF("G2")
Scene7.addChild(ProtoInstance61)
ProtoInstance62 = ProtoInstanceObject().setName("x3dconnector").setDEF("connector1")
fieldValue63 = fieldValueObject().setName("startnode")
ProtoInstance64 = ProtoInstanceObject().setUSE("G1")
fieldValue63.addChild(ProtoInstance64)
ProtoInstance62.addFieldValue(fieldValue63)
fieldValue65 = fieldValueObject().setName("endnode")
ProtoInstance66 = ProtoInstanceObject().setUSE("G2")
fieldValue65.addChild(ProtoInstance66)
ProtoInstance62.addFieldValue(fieldValue65)
fieldValue67 = fieldValueObject().setName("set_startpoint")
ProtoInstance62.addFieldValue(fieldValue67)
fieldValue68 = fieldValueObject().setName("set_endpoint")
ProtoInstance62.addFieldValue(fieldValue68)
Scene7.addChild(ProtoInstance62)
ROUTE69 = ROUTEObject().setFromNode("G1").setFromField("translation").setToNode("connector1").setToField("set_startpoint")
Scene7.addChild(ROUTE69)
ROUTE70 = ROUTEObject().setFromNode("G2").setFromField("translation").setToNode("connector1").setToField("set_endpoint")
Scene7.addChild(ROUTE70)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/arc1.new.x3d")
