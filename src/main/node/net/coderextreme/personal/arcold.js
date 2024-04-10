var java = require('java');
var util = require('util');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: util.promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
var ProtoInstance4 = null;
var ProtoInstance5 = null;
var ProtoInstance6 = null;
var ProtoInstance7 = null;
var ProtoInstance8 = null;
var ProtoInstance9 = null;
var ProtoInstance10 = null;
var ProtoInstance11 = null;
var ProtoInstance12 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("arcold.x3d"))
        .addMeta(new autoclass.meta().setName("creator").setContent("John Carlson"))
        .addMeta(new autoclass.meta().setName("generator").setContent("manual"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("an attempt to implement an arc in a graph")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.Viewpoint().setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(5)])).setDescription("a moving graph"))
        .addChild(new autoclass.Background().setSkyColor(java.newArray("float", [java.newFloat(0.4), java.newFloat(0.4), java.newFloat(0.4)])))
        .addChild(new autoclass.Transform().setDEF("trans1")
          .addChild(new autoclass.Transform().setDEF("rotscale1")
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.7)]))))
              .setGeometry(new autoclass.Cylinder().setRadius(java.newFloat(0.1))))))
        .addChild(new autoclass.Transform().setDEF("trans2")
          .addChild(new autoclass.Transform().setDEF("rotscale2")
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.7)]))))
              .setGeometry(new autoclass.Cylinder().setRadius(java.newFloat(0.1))))))
        .addChild(new autoclass.Transform().setDEF("trans3")
          .addChild(new autoclass.Transform().setDEF("rotscale3")
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.7)]))))
              .setGeometry(new autoclass.Cylinder().setRadius(java.newFloat(0.1))))))
        .addChild(new autoclass.ProtoDeclare().setName("point")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Transform().setDEF("node")
              .setIS(new autoclass.IS()
                .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("translation")))
              .addChild(new autoclass.Shape()
                .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.1)))
                .setAppearance(new autoclass.Appearance()
                  .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])))))
              .addChild(new autoclass.PositionInterpolator().setDEF("PI1").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(5), java.newFloat(0)])))
              .addChild(new autoclass.Script().setDEF("MB1")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("old").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("set_location").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_MFVEC3F).setName("keyValue").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}"))
              .addChild(new autoclass.TimeSensor().setDEF("CL1").setCycleInterval(3).setLoop(true))
              .addChild(new autoclass.ROUTE().setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location"))
              .addChild(new autoclass.ROUTE().setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction"))
              .addChild(new autoclass.ROUTE().setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue"))
              .addChild(new autoclass.ROUTE().setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation")))))
        .addComments((new autoclass.CommentsBlock("from doug sanden")))
        .addChild(new autoclass.ProtoDeclare().setName("x3dconnector")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("startnode").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("endnode").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("transnode").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("rotscalenode").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Script().setDEF("S1")
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("startnode").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("endnode").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("transnode").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("rotscalenode").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .setIS(new autoclass.IS()
                .addConnect(new autoclass.connect().setNodeField("startnode").setProtoField("startnode"))
                .addConnect(new autoclass.connect().setNodeField("endnode").setProtoField("endnode"))
                .addConnect(new autoclass.connect().setNodeField("transnode").setProtoField("transnode"))
                .addConnect(new autoclass.connect().setNodeField("rotscalenode").setProtoField("rotscalenode"))
                .addConnect(new autoclass.connect().setNodeField("set_startpoint").setProtoField("set_startpoint"))
                .addConnect(new autoclass.connect().setNodeField("set_endpoint").setProtoField("set_endpoint")))
              .setSourceCode("ecmascript:\n"+
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
"        }"))))
        .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("point").setDEF("G1"))
        .addChild(ProtoInstance1 = new autoclass.ProtoInstance().setName("point").setDEF("G2"))
        .addChild(ProtoInstance2 = new autoclass.ProtoInstance().setName("point").setDEF("G3"))
        .addChild(ProtoInstance3 = new autoclass.ProtoInstance().setName("point").setDEF("G4"))
        .addChild(ProtoInstance4 = new autoclass.ProtoInstance().setName("x3dconnector").setDEF("connector1"))
        .addChild(ProtoInstance7 = new autoclass.ProtoInstance().setName("x3dconnector").setDEF("connector2"))
        .addChild(ProtoInstance10 = new autoclass.ProtoInstance().setName("x3dconnector").setDEF("connector3"))
        .addChild(new autoclass.ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint"))
        .addChild(new autoclass.ROUTE().setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint"))
        .addChild(new autoclass.ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("connector2").setToField("set_startpoint"))
        .addChild(new autoclass.ROUTE().setFromNode("G3").setFromField("translation_changed").setToNode("connector2").setToField("set_endpoint"))
        .addChild(new autoclass.ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("connector3").setToField("set_startpoint"))
        .addChild(new autoclass.ROUTE().setFromNode("G4").setFromField("translation_changed").setToNode("connector3").setToField("set_endpoint")))      ;
ProtoInstance4
          .addFieldValue(new autoclass.fieldValue().setName("startnode")
            .addChild(ProtoInstance5 = new autoclass.ProtoInstance().setUSE("G1")));
ProtoInstance4
          .addFieldValue(new autoclass.fieldValue().setName("endnode")
            .addChild(ProtoInstance6 = new autoclass.ProtoInstance().setUSE("G2")));
ProtoInstance4
          .addFieldValue(new autoclass.fieldValue().setName("transnode")
            .addChild(new autoclass.Transform().setUSE("trans1")));
ProtoInstance4
          .addFieldValue(new autoclass.fieldValue().setName("rotscalenode")
            .addChild(new autoclass.Transform().setUSE("rotscale1")));
ProtoInstance7
          .addFieldValue(new autoclass.fieldValue().setName("startnode")
            .addChild(ProtoInstance8 = new autoclass.ProtoInstance().setUSE("G1")));
ProtoInstance7
          .addFieldValue(new autoclass.fieldValue().setName("endnode")
            .addChild(ProtoInstance9 = new autoclass.ProtoInstance().setUSE("G3")));
ProtoInstance7
          .addFieldValue(new autoclass.fieldValue().setName("transnode")
            .addChild(new autoclass.Transform().setUSE("trans2")));
ProtoInstance7
          .addFieldValue(new autoclass.fieldValue().setName("rotscalenode")
            .addChild(new autoclass.Transform().setUSE("rotscale2")));
ProtoInstance10
          .addFieldValue(new autoclass.fieldValue().setName("startnode")
            .addChild(ProtoInstance11 = new autoclass.ProtoInstance().setUSE("G1")));
ProtoInstance10
          .addFieldValue(new autoclass.fieldValue().setName("endnode")
            .addChild(ProtoInstance12 = new autoclass.ProtoInstance().setUSE("G4")));
ProtoInstance10
          .addFieldValue(new autoclass.fieldValue().setName("transnode")
            .addChild(new autoclass.Transform().setUSE("trans3")));
ProtoInstance10
          .addFieldValue(new autoclass.fieldValue().setName("rotscalenode")
            .addChild(new autoclass.Transform().setUSE("rotscale3")));
    X3D0.toFileX3D("../personal/arcold.new.node.x3d");
    X3D0.toFileJSON("../personal/arcold.new.node.json");
    process.exit(0);
