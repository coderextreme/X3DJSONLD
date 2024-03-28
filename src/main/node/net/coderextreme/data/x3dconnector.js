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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("x3dconnector.x3d"))
        .addMeta(new autoclass.meta().setName("creator").setContent("Lost, Doug Sanden I think"))
        .addMeta(new autoclass.meta().setName("generator").setContent("manual"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("a generic proto to connect two objects")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.Viewpoint().setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(5)])).setDescription("Only Viewpoint"))
        .addChild(new autoclass.Background().setSkyColor(java.newArray("float", [java.newFloat(0.4), java.newFloat(0.4), java.newFloat(0.4)])))
        .addChild(new autoclass.Transform().setDEF("G1")
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.2), java.newFloat(0.2)]))))
            .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.1))))
          .addChild(new autoclass.PlaneSensor().setDescription("Grab to move").setDEF("PS1"))
          .addChild(new autoclass.ROUTE().setFromNode("PS1").setFromField("translation_changed").setToNode("G1").setToField("set_translation")))
        .addChild(new autoclass.Transform().setDEF("G2").setTranslation(java.newArray("float", [java.newFloat(1), java.newFloat(-1), java.newFloat(0.01)]))
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.2)]))))
            .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.1))))
          .addChild(new autoclass.PlaneSensor().setDescription("Grab to move").setOffset(java.newArray("float", [java.newFloat(1), java.newFloat(-1), java.newFloat(0.01)])).setDEF("PS2"))
          .addChild(new autoclass.ROUTE().setFromNode("PS2").setFromField("translation_changed").setToNode("G2").setToField("set_translation")))
        .addChild(new autoclass.Transform().setDEF("transC1")
          .addChild(new autoclass.Transform().setDEF("rotscaleC1")
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.7)])).setTransparency(java.newFloat(0.5))))
              .setGeometry(new autoclass.Cylinder().setRadius(java.newFloat(0.05))))))
        .addChild(new autoclass.ProtoDeclare().setName("x3dconnector")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("startnode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("endnode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("transnode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("rotscalenode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Script().setDEF("S1")
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("startnode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("endnode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("transnode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("rotscalenode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
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
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      if (trafo) {\n"+
"		      transnode.translation = trafo.translation;\n"+
"		      rotscalenode.rotation = trafo.rotation;\n"+
"		      rotscalenode.scale = trafo.scale;\n"+
"	      }\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val);\n"+
"        }"))))
        .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("x3dconnector").setDEF("connector1"))
        .addChild(new autoclass.ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint"))
        .addChild(new autoclass.ROUTE().setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint")))      ;
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("startnode")
            .addChild(new autoclass.Transform().setUSE("G1")));
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("endnode")
            .addChild(new autoclass.Transform().setUSE("G2")));
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("transnode")
            .addChild(new autoclass.Transform().setUSE("transC1")));
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("rotscalenode")
            .addChild(new autoclass.Transform().setUSE("rotscaleC1")));
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("set_startpoint"));
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("set_endpoint"));
    X3D0.toFileX3D("../data/x3dconnector.new.node.x3d");
    X3D0.toFileJSON("../data/x3dconnector.new.node.json");
    process.exit(0);
