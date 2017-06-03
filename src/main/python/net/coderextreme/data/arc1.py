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
ProtoDeclare15 = ProtoDeclareObject().setName("point")
ProtoInterface16 = ProtoInterfaceObject()
field17 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
ProtoInterface16.addField(field17)
ProtoDeclare15.setProtoInterface(ProtoInterface16)
ProtoBody18 = ProtoBodyObject()
Transform19 = TransformObject().setDEF("node")
IS20 = ISObject()
connect21 = connectObject().setNodeField("translation").setProtoField("translation")
IS20.addConnect(connect21)
Transform19.setIS(IS20)
Shape22 = ShapeObject()
Sphere23 = SphereObject().setRadius(0.1)
Shape22.setGeometry(Sphere23)
Appearance24 = AppearanceObject()
Material25 = MaterialObject().setDiffuseColor([1,0,0])
Appearance24.setMaterial(Material25)
Shape22.setAppearance(Appearance24)
Transform19.addChild(Shape22)
PositionInterpolator26 = PositionInterpolatorObject().setDEF("PI1").setKey([0,1]).setKeyValue([0,0,0,0,5,0])
Transform19.addChild(PositionInterpolator26)
Script27 = ScriptObject().setDEF("MB1")
field28 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0")
Script27.addField(field28)
field29 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")
Script27.addField(field29)
field30 = fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_location").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script27.addField(field30)
field31 = fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
Script27.addField(field31)

Script27.setSourceCode("\n"+
"\n"+
"ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}\n"+
"")
Transform19.addChild(Script27)
TimeSensor32 = TimeSensorObject().setDEF("CL1").setCycleInterval(3).setLoop(True)
Transform19.addChild(TimeSensor32)
ROUTE33 = ROUTEObject().setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location")
Transform19.addChild(ROUTE33)
ROUTE34 = ROUTEObject().setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction")
Transform19.addChild(ROUTE34)
ROUTE35 = ROUTEObject().setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue")
Transform19.addChild(ROUTE35)
ROUTE36 = ROUTEObject().setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation")
Transform19.addChild(ROUTE36)
ProtoBody18.addChild(Transform19)
ProtoDeclare15.setProtoBody(ProtoBody18)
Scene7.addChild(ProtoDeclare15)

Scene7.addComments(CommentsBlock("from doug sanden"))
ProtoDeclare37 = ProtoDeclareObject().setName("x3dconnector")
ProtoInterface38 = ProtoInterfaceObject()
field39 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
ProtoInterface38.addField(field39)
field40 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
ProtoInterface38.addField(field40)
field41 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("connectornode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
ProtoInterface38.addField(field41)
field42 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface38.addField(field42)
field43 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
ProtoInterface38.addField(field43)
ProtoDeclare37.setProtoInterface(ProtoInterface38)
ProtoBody44 = ProtoBodyObject()
Script45 = ScriptObject().setDEF("S1")
field46 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Script45.addField(field46)
field47 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Script45.addField(field47)
field48 = fieldObject().setType(fieldObject.TYPE_SFNODE).setName("connectornode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
Script45.addField(field48)
field49 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script45.addField(field49)
field50 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
Script45.addField(field50)
IS51 = ISObject()
connect52 = connectObject().setNodeField("startnode").setProtoField("startnode")
IS51.addConnect(connect52)
connect53 = connectObject().setNodeField("endnode").setProtoField("endnode")
IS51.addConnect(connect53)
connect54 = connectObject().setNodeField("connectornode").setProtoField("connectornode")
IS51.addConnect(connect54)
connect55 = connectObject().setNodeField("set_startpoint").setProtoField("set_startpoint")
IS51.addConnect(connect55)
connect56 = connectObject().setNodeField("set_endpoint").setProtoField("set_endpoint")
IS51.addConnect(connect56)
Script45.setIS(IS51)

Script45.setSourceCode("\n"+
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
ProtoBody44.addChild(Script45)
ProtoDeclare37.setProtoBody(ProtoBody44)
Scene7.addChild(ProtoDeclare37)
ProtoInstance57 = ProtoInstanceObject().setName("point").setDEF("start")
Scene7.addChild(ProtoInstance57)
ProtoInstance58 = ProtoInstanceObject().setName("point").setDEF("end")
Scene7.addChild(ProtoInstance58)
ProtoInstance59 = ProtoInstanceObject().setName("x3dconnector").setDEF("connector1")
fieldValue60 = fieldValueObject().setName("startnode")
ProtoInstance61 = ProtoInstanceObject().setName("point").setUSE("start")
fieldValue60.addChild(ProtoInstance61)
ProtoInstance59.addFieldValue(fieldValue60)
fieldValue62 = fieldValueObject().setName("endnode")
ProtoInstance63 = ProtoInstanceObject().setName("point").setUSE("end")
fieldValue62.addChild(ProtoInstance63)
ProtoInstance59.addFieldValue(fieldValue62)
fieldValue64 = fieldValueObject().setName("connectornode")
Transform65 = TransformObject().setUSE("cylinder1")
fieldValue64.addChild(Transform65)
ProtoInstance59.addFieldValue(fieldValue64)
Scene7.addChild(ProtoInstance59)
ROUTE66 = ROUTEObject().setFromNode("start").setFromField("translation").setToNode("connector1").setToField("set_startpoint")
Scene7.addChild(ROUTE66)
ROUTE67 = ROUTEObject().setFromNode("end").setFromField("translation").setToNode("connector1").setToField("set_endpoint")
Scene7.addChild(ROUTE67)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/arc1.new.x3d")
