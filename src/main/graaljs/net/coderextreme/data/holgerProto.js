load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array([d])[0];
}
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("x3dconnectorProto.x3d"))
        .addMeta(new meta().setName("creator").setContent("Lost, Doug Sanden I think"))
        .addMeta(new meta().setName("created").setContent("Unknown"))
        .addMeta(new meta().setName("modified").setContent("Sat, 30 Dec 2023 10:14:10 GMT"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("generator").setContent("x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("x3dconnector")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("startnode"))
            .addField(new field().setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("endnode"))
            .addField(new field().setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("transnode"))
            .addField(new field().setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("rotscalenode"))
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_startpoint"))
            .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_endpoint")))
          .setProtoBody(new ProtoBody()
            .addChild(new Script().setDEF("S1").setDirectOutput(true)
              .addField(new field().setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("startnode"))
              .addField(new field().setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("endnode"))
              .addField(new field().setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("transnode"))
              .addField(new field().setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("rotscalenode"))
              .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_startpoint"))
              .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_endpoint"))
              .setSourceCode(`ecmascript:
        function recompute(startpoint,endpoint){
	    if (typeof endpoint === 'undefined') {
		return;
	    }
            var dif = endpoint.subtract(startpoint);
            var dist = dif.length()*0.5;
            var dif2 = dif.multiply(0.5);
            var norm = dif.normalize();
            var transl = startpoint.add(dif2);
	    if (typeof Quaternion !== 'undefined') {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)
		    };
	    } else {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)
		    };
	    }
	}
	function recompute_and_route(startpoint, endpoint) {
	      var trafo = recompute(startpoint, endpoint);
	      if (trafo) {
		      transnode.translation = trafo.translation;
		      rotscalenode.rotation = trafo.rotation;
		      rotscalenode.scale = trafo.scale;
	      }
	}
        function initialize(){
            recompute_and_route(startnode.translation,endnode.translation);
        }
        function set_startpoint(val,t){
            recompute_and_route(val,endnode.translation);
        }
        function set_endpoint(val,t){
            recompute_and_route(startnode.translation,val);
        }`)
              .setIS(new IS()
                .addConnect(new connect().setNodeField("startnode").setProtoField("startnode"))
                .addConnect(new connect().setNodeField("endnode").setProtoField("endnode"))
                .addConnect(new connect().setNodeField("transnode").setProtoField("transnode"))
                .addConnect(new connect().setNodeField("rotscalenode").setProtoField("rotscalenode"))
                .addConnect(new connect().setNodeField("set_startpoint").setProtoField("set_startpoint"))
                .addConnect(new connect().setNodeField("set_endpoint").setProtoField("set_endpoint"))))))
        .addChild(new WorldInfo().setTitle("Connector Proto"))
        .addChild(new Viewpoint().setDescription("Only Viewpoint").setPosition(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(5)], Java.type("float[]"))))
        .addChild(new Background().setSkyColor(Java.to([doubleToFloat(0.4),doubleToFloat(0.4),doubleToFloat(0.4)], Java.type("float[]"))))
        .addChild(new Transform().setDEF("G1")
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([doubleToFloat(0.7),doubleToFloat(0.2),doubleToFloat(0.2)], Java.type("float[]")))))
            .setGeometry(new Sphere().setRadius(0.1)))
          .addChild(new PlaneSensor().setDEF("PS1").setDescription("Grab to move")))
        .addChild(new Transform().setDEF("G2").setTranslation(Java.to([doubleToFloat(1),doubleToFloat(-1),doubleToFloat(0.01)], Java.type("float[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([doubleToFloat(0.2),doubleToFloat(0.7),doubleToFloat(0.2)], Java.type("float[]")))))
            .setGeometry(new Sphere().setRadius(0.1)))
          .addChild(new PlaneSensor().setDEF("PS2").setDescription("Grab to move").setOffset(Java.to([doubleToFloat(1),doubleToFloat(-1),doubleToFloat(0.01)], Java.type("float[]")))))
        .addChild(new Transform().setDEF("G3").setTranslation(Java.to([doubleToFloat(1),doubleToFloat(1),doubleToFloat(0.01)], Java.type("float[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([doubleToFloat(0.2),doubleToFloat(0.7),doubleToFloat(0.2)], Java.type("float[]")))))
            .setGeometry(new Sphere().setRadius(0.1)))
          .addChild(new PlaneSensor().setDEF("PS3").setDescription("Grab to move").setOffset(Java.to([doubleToFloat(1),doubleToFloat(1),doubleToFloat(0.01)], Java.type("float[]")))))
        .addChild(new Transform().setDEF("G4").setTranslation(Java.to([doubleToFloat(-1),doubleToFloat(1),doubleToFloat(0.01)], Java.type("float[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([doubleToFloat(0.2),doubleToFloat(0.7),doubleToFloat(0.2)], Java.type("float[]")))))
            .setGeometry(new Sphere().setRadius(0.1)))
          .addChild(new PlaneSensor().setDEF("PS4").setDescription("Grab to move").setOffset(Java.to([doubleToFloat(-1),doubleToFloat(1),doubleToFloat(0.01)], Java.type("float[]")))))
        .addChild(new Transform().setDEF("transC1")
          .addChild(new Transform().setDEF("rotscaleC1")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to([doubleToFloat(0.2),doubleToFloat(0.7),doubleToFloat(0.7)], Java.type("float[]"))).setTransparency(0.5)))
              .setGeometry(new Cylinder().setRadius(0.05)))))
        .addChild(new Transform().setDEF("transC2")
          .addChild(new Transform().setDEF("rotscaleC2")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to([doubleToFloat(0.2),doubleToFloat(0.7),doubleToFloat(0.7)], Java.type("float[]"))).setTransparency(0.5)))
              .setGeometry(new Cylinder().setRadius(0.05)))))
        .addChild(new Transform().setDEF("transC3")
          .addChild(new Transform().setDEF("rotscaleC3")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to([doubleToFloat(0.2),doubleToFloat(0.7),doubleToFloat(0.7)], Java.type("float[]"))).setTransparency(0.5)))
              .setGeometry(new Cylinder().setRadius(0.05)))))
        .addChild(ProtoInstance0 = new ProtoInstance().setDEF("connector1").setName("x3dconnector"))
        .addChild(ProtoInstance1 = new ProtoInstance().setDEF("connector2").setName("x3dconnector"))
        .addChild(ProtoInstance2 = new ProtoInstance().setDEF("connector3").setName("x3dconnector"))
        .addChild(new ROUTE().setFromNode("PS1").setFromField("translation_changed").setToNode("G1").setToField("translation"))
        .addChild(new ROUTE().setFromNode("PS2").setFromField("translation_changed").setToNode("G2").setToField("translation"))
        .addChild(new ROUTE().setFromNode("PS3").setFromField("translation_changed").setToNode("G3").setToField("translation"))
        .addChild(new ROUTE().setFromNode("PS4").setFromField("translation_changed").setToNode("G4").setToField("translation"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation").setToNode("connector1").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G2").setFromField("translation").setToNode("connector1").setToField("set_endpoint"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation").setToNode("connector2").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G3").setFromField("translation").setToNode("connector2").setToField("set_endpoint"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation").setToNode("connector3").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G4").setFromField("translation").setToNode("connector3").setToField("set_endpoint")))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(new Transform().setUSE("G1")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(new Transform().setUSE("G2")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("transnode")
            .addChild(new Transform().setUSE("transC1")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("rotscalenode")
            .addChild(new Transform().setUSE("rotscaleC1")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(new Transform().setUSE("G1")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(new Transform().setUSE("G3")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("transnode")
            .addChild(new Transform().setUSE("transC2")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("rotscalenode")
            .addChild(new Transform().setUSE("rotscaleC2")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(new Transform().setUSE("G1")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(new Transform().setUSE("G4")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("transnode")
            .addChild(new Transform().setUSE("transC3")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("rotscalenode")
            .addChild(new Transform().setUSE("rotscaleC3")));
    X3D0.toFileX3D("../data/holgerProto.new.graal.x3d");
    X3D0.toFileJSON("../data/holgerProto.new.graal.json");
