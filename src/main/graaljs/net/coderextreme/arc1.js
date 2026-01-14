load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array(d);
}
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("arc1.x3d"))
        .addMeta(new meta().setName("creator").setContent("Lost, Doug Sanden I think"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d"))
        .addMeta(new meta().setName("description").setContent("a generic proto to connect two objects")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setPosition(Java.to(doubleToFloat([0,0,5]), Java.type("float[]"))).setDescription("Only Viewpoint"))
        .addChild(new Background().setSkyColor(Java.to(doubleToFloat([0.4,0.4,0.4]), Java.type("float[]"))))
        .addChild(new ProtoDeclare().setName("point")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF("node")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("translation")))
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.1))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,0,0]), Java.type("float[]"))))))
              .addChild(new PositionInterpolator().setDEF("PI1").setKey(Java.to(doubleToFloat([0,1]), Java.type("float[]"))).setKeyValue(Java.to(doubleToFloat([0,0,0,0,5,0]), Java.type("float[]"))))
              .addChild(new Script().setDEF("MB1")
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0"))
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("old").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new field().setType(field.TYPE_SFTIME).setName("set_location").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_MFVEC3F).setName("keyValue").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0 0 5 0"))
                .setSourceCode(`ecmascript:
               function set_location(value) {
                    old = translation;
                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
                    keyValue = new MFVec3f([old, translation]);
               }`))
              .addChild(new TimeSensor().setDEF("CL1").setCycleInterval(3).setLoop(true))
              .addChild(new ROUTE().setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location"))
              .addChild(new ROUTE().setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction"))
              .addChild(new ROUTE().setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue"))
              .addChild(new ROUTE().setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation"))
              .addChild(new ROUTE().setFromNode("MB1").setFromField("translation_changed").setToNode("node").setToField("set_translation")))))
        .addChild(new Transform().setDEF("G1")
          .addChild(ProtoInstance0 = new ProtoInstance().setName("point")))
        .addChild(new Transform().setDEF("G2")
          .addChild(ProtoInstance1 = new ProtoInstance().setName("point")))
        .addChild(new Transform().setDEF("transC1")
          .addChild(new Transform().setDEF("rotscaleC1")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.2,0.7,0.7]), Java.type("float[]"))).setTransparency(0.5)))
              .setGeometry(new Cylinder().setRadius(0.05)))))
        .addChild(new ProtoDeclare().setName("x3dconnector")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFNODE).setName("startnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setType(field.TYPE_SFNODE).setName("endnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setType(field.TYPE_SFNODE).setName("transnode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType(field.TYPE_SFNODE).setName("rotscalenode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(field.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new ProtoBody()
            .addChild(new Script().setDEF("S1")
              .addField(new field().setType(field.TYPE_SFNODE).setName("startnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType(field.TYPE_SFNODE).setName("endnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType(field.TYPE_SFNODE).setName("transnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType(field.TYPE_SFNODE).setName("rotscalenode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("startnode").setProtoField("startnode"))
                .addConnect(new connect().setNodeField("endnode").setProtoField("endnode"))
                .addConnect(new connect().setNodeField("transnode").setProtoField("transnode"))
                .addConnect(new connect().setNodeField("rotscalenode").setProtoField("rotscalenode"))
                .addConnect(new connect().setNodeField("set_startpoint").setProtoField("set_startpoint"))
                .addConnect(new connect().setNodeField("set_endpoint").setProtoField("set_endpoint")))
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
        }`))))
        .addChild(ProtoInstance2 = new ProtoInstance().setName("x3dconnector").setDEF("connector1"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint")))      ;
ProtoInstance2
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(new Transform().setUSE("G1")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(new Transform().setUSE("G2")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("transnode")
            .addChild(new Transform().setUSE("transC1")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("rotscalenode")
            .addChild(new Transform().setUSE("rotscaleC1")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("set_startpoint"));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("set_endpoint"));
    X3D0.toFileX3D(".././arc1.new.graal.x3d");
    X3D0.toFileJSON(".././arc1.new.graal.json");
