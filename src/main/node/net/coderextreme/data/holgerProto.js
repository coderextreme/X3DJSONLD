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
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("x3dconnectorProto.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Lost, Doug Sanden I think"))
        .addMeta((new autoclass.meta()).setName("created").setContent("Unknown"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("Sat, 30 Dec 2023 10:14:10 GMT"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.ProtoDeclare()).setName("x3dconnector")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("startnode"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("endnode"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("transnode"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("rotscalenode"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("set_startpoint"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("set_endpoint")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Script()).setDEF("S1").setDirectOutput(true)
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("startnode"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("endnode"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("transnode"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("rotscalenode"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("set_startpoint"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("set_endpoint"))
              .setSourceCode("ecmascript:
"        function recompute(startpoint,endpoint){
"	    if (typeof endpoint === 'undefined') {
"		return;
"	    }
"            var dif = endpoint.subtract(startpoint);
"            var dist = dif.length()*0.5;
"            var dif2 = dif.multiply(0.5);
"            var norm = dif.normalize();
"            var transl = startpoint.add(dif2);
"	    if (typeof Quaternion !== 'undefined') {
"		    return {
"			    scale : new SFVec3f(1.0,dist,1.0),
"			    translation : transl,
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)
"		    };
"	    } else {
"		    return {
"			    scale : new SFVec3f(1.0,dist,1.0),
"			    translation : transl,
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)
"		    };
"	    }
"	}
"	function recompute_and_route(startpoint, endpoint) {
"	      var trafo = recompute(startpoint, endpoint);
"	      if (trafo) {
"		      transnode.translation = trafo.translation;
"		      rotscalenode.rotation = trafo.rotation;
"		      rotscalenode.scale = trafo.scale;
"	      }
"	}
"        function initialize(){
"            recompute_and_route(startnode.translation,endnode.translation);
"        }
"        function set_startpoint(val,t){
"            recompute_and_route(val,endnode.translation);
"        }
"        function set_endpoint(val,t){
"            recompute_and_route(startnode.translation,val);
"        }")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("startnode").setProtoField("startnode"))
                .addConnect((new autoclass.connect()).setNodeField("endnode").setProtoField("endnode"))
                .addConnect((new autoclass.connect()).setNodeField("transnode").setProtoField("transnode"))
                .addConnect((new autoclass.connect()).setNodeField("rotscalenode").setProtoField("rotscalenode"))
                .addConnect((new autoclass.connect()).setNodeField("set_startpoint").setProtoField("set_startpoint"))
                .addConnect((new autoclass.connect()).setNodeField("set_endpoint").setProtoField("set_endpoint"))))))
        .addChild((new autoclass.WorldInfo()).setTitle("Connector Proto"))
        .addChild((new autoclass.Viewpoint()).setDescription("Only Viewpoint").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(5)])))
        .addChild((new autoclass.Background()).setSkyColor(java.newArray("float", [java.newFloat(0.4), java.newFloat(0.4), java.newFloat(0.4)])))
        .addChild((new autoclass.Transform()).setDEF("G1")
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.2), java.newFloat(0.2)]))))
            .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.1))))
          .addChild((new autoclass.PlaneSensor()).setDEF("PS1").setDescription("Grab to move")))
        .addChild((new autoclass.Transform()).setDEF("G2").setTranslation(java.newArray("float", [java.newFloat(1), java.newFloat(-1), java.newFloat(0.01)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.2)]))))
            .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.1))))
          .addChild((new autoclass.PlaneSensor()).setDEF("PS2").setDescription("Grab to move").setOffset(java.newArray("float", [java.newFloat(1), java.newFloat(-1), java.newFloat(0.01)]))))
        .addChild((new autoclass.Transform()).setDEF("G3").setTranslation(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0.01)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.2)]))))
            .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.1))))
          .addChild((new autoclass.PlaneSensor()).setDEF("PS3").setDescription("Grab to move").setOffset(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0.01)]))))
        .addChild((new autoclass.Transform()).setDEF("G4").setTranslation(java.newArray("float", [java.newFloat(-1), java.newFloat(1), java.newFloat(0.01)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.2)]))))
            .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.1))))
          .addChild((new autoclass.PlaneSensor()).setDEF("PS4").setDescription("Grab to move").setOffset(java.newArray("float", [java.newFloat(-1), java.newFloat(1), java.newFloat(0.01)]))))
        .addChild((new autoclass.Transform()).setDEF("transC1")
          .addChild((new autoclass.Transform()).setDEF("rotscaleC1")
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.7)])).setTransparency(java.newFloat(0.5))))
              .setGeometry((new autoclass.Cylinder()).setRadius(java.newFloat(0.05))))))
        .addChild((new autoclass.Transform()).setDEF("transC2")
          .addChild((new autoclass.Transform()).setDEF("rotscaleC2")
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.7)])).setTransparency(java.newFloat(0.5))))
              .setGeometry((new autoclass.Cylinder()).setRadius(java.newFloat(0.05))))))
        .addChild((new autoclass.Transform()).setDEF("transC3")
          .addChild((new autoclass.Transform()).setDEF("rotscaleC3")
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.7)])).setTransparency(java.newFloat(0.5))))
              .setGeometry((new autoclass.Cylinder()).setRadius(java.newFloat(0.05))))))
        .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setDEF("connector1").setName("x3dconnector"))
        .addChild(ProtoInstance1 = (new autoclass.ProtoInstance()).setDEF("connector2").setName("x3dconnector"))
        .addChild(ProtoInstance2 = (new autoclass.ProtoInstance()).setDEF("connector3").setName("x3dconnector"))
        .addChild((new autoclass.ROUTE()).setFromNode("PS1").setFromField("translation_changed").setToNode("G1").setToField("translation"))
        .addChild((new autoclass.ROUTE()).setFromNode("PS2").setFromField("translation_changed").setToNode("G2").setToField("translation"))
        .addChild((new autoclass.ROUTE()).setFromNode("PS3").setFromField("translation_changed").setToNode("G3").setToField("translation"))
        .addChild((new autoclass.ROUTE()).setFromNode("PS4").setFromField("translation_changed").setToNode("G4").setToField("translation"))
        .addChild((new autoclass.ROUTE()).setFromNode("G1").setFromField("translation").setToNode("connector1").setToField("set_startpoint"))
        .addChild((new autoclass.ROUTE()).setFromNode("G2").setFromField("translation").setToNode("connector1").setToField("set_endpoint"))
        .addChild((new autoclass.ROUTE()).setFromNode("G1").setFromField("translation").setToNode("connector2").setToField("set_startpoint"))
        .addChild((new autoclass.ROUTE()).setFromNode("G3").setFromField("translation").setToNode("connector2").setToField("set_endpoint"))
        .addChild((new autoclass.ROUTE()).setFromNode("G1").setFromField("translation").setToNode("connector3").setToField("set_startpoint"))
        .addChild((new autoclass.ROUTE()).setFromNode("G4").setFromField("translation").setToNode("connector3").setToField("set_endpoint")))      ;
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("startnode")
            .addChild((new autoclass.Transform()).setUSE("G1")));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("endnode")
            .addChild((new autoclass.Transform()).setUSE("G2")));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("transnode")
            .addChild((new autoclass.Transform()).setUSE("transC1")));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("rotscalenode")
            .addChild((new autoclass.Transform()).setUSE("rotscaleC1")));
ProtoInstance1
          .addFieldValue((new autoclass.fieldValue()).setName("startnode")
            .addChild((new autoclass.Transform()).setUSE("G1")));
ProtoInstance1
          .addFieldValue((new autoclass.fieldValue()).setName("endnode")
            .addChild((new autoclass.Transform()).setUSE("G3")));
ProtoInstance1
          .addFieldValue((new autoclass.fieldValue()).setName("transnode")
            .addChild((new autoclass.Transform()).setUSE("transC2")));
ProtoInstance1
          .addFieldValue((new autoclass.fieldValue()).setName("rotscalenode")
            .addChild((new autoclass.Transform()).setUSE("rotscaleC2")));
ProtoInstance2
          .addFieldValue((new autoclass.fieldValue()).setName("startnode")
            .addChild((new autoclass.Transform()).setUSE("G1")));
ProtoInstance2
          .addFieldValue((new autoclass.fieldValue()).setName("endnode")
            .addChild((new autoclass.Transform()).setUSE("G4")));
ProtoInstance2
          .addFieldValue((new autoclass.fieldValue()).setName("transnode")
            .addChild((new autoclass.Transform()).setUSE("transC3")));
ProtoInstance2
          .addFieldValue((new autoclass.fieldValue()).setName("rotscalenode")
            .addChild((new autoclass.Transform()).setUSE("rotscaleC3")));
    X3D0.toFileX3D("../data/holgerProto.new.node.x3d");
    X3D0.toFileJSON("../data/holgerProto.new.node.json");
    process.exit(0);