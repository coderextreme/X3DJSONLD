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
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("arc.x3d"))
        .addMeta(new meta().setName("creator").setContent("Lost, Doug Sanden I think"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d"))
        .addMeta(new meta().setName("description").setContent("a generic proto to connect two objects")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setPosition(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(5)], Java.type("float[]"))).setDescription("Only Viewpoint"))
        .addChild(new Background().setSkyColor(Java.to([doubleToFloat(0.4),doubleToFloat(0.4),doubleToFloat(0.4)], Java.type("float[]"))))
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
                  .setMaterial(new Material().setDiffuseColor(Java.to([doubleToFloat(1),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]"))))))
              .addChild(new PositionInterpolator().setDEF("PI1").setKey(Java.to([doubleToFloat(0),doubleToFloat(1)], Java.type("float[]"))).setKeyValue(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0),doubleToFloat(5),doubleToFloat(0)], Java.type("float[]"))))
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
		    // Browser.println(keyValue);
		}`))
              .addChild(new TimeSensor().setDEF("CL1").setCycleInterval(3).setLoop(true))
              .addChild(new ROUTE().setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location"))
              .addChild(new ROUTE().setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction"))
              .addChild(new ROUTE().setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue"))
              .addChild(new ROUTE().setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation")))))
        .addChild(new ProtoDeclare().setName("x3dconnector")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFNODE).setName("startnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setType(field.TYPE_SFNODE).setName("endnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(field.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF("trans")
                .addChild(new Transform().setDEF("rotscale")
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(Java.to([doubleToFloat(0.2),doubleToFloat(0.7),doubleToFloat(0.7)], Java.type("float[]"))).setTransparency(0.5)))
                    .setGeometry(new Cylinder().setRadius(0.05)))))
              .addChild(new Script().setDEF("S1")
                .addField(new field().setType(field.TYPE_SFNODE).setName("startnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
                .addField(new field().setType(field.TYPE_SFNODE).setName("endnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
                .addField(new field().setType(field.TYPE_SFNODE).setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
                  .addChild(new Transform().setUSE("trans")))
                .addField(new field().setType(field.TYPE_SFNODE).setName("rotscale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
                  .addChild(new Transform().setUSE("rotscale")))
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("startnode").setProtoField("startnode"))
                  .addConnect(new connect().setNodeField("endnode").setProtoField("endnode"))
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
	    } else if (typeof SFRotation !== 'undefined') {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)
		    };
	    } else {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl
		    };
	    }
	}
	function recompute_and_route(startpoint, endpoint) {
	      var trafo = recompute(startpoint, endpoint);
	      if (trafo) {
		      position.translation = trafo.translation;
		      rotscale.rotation = trafo.rotation;
		      rotscale.scale = trafo.scale;
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
        }`)))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("point").setDEF("G1"))
        .addChild(ProtoInstance1 = new ProtoInstance().setName("point").setDEF("G2"))
        .addChild(ProtoInstance2 = new ProtoInstance().setName("point").setDEF("G3"))
        .addChild(ProtoInstance3 = new ProtoInstance().setName("point").setDEF("G4"))
        .addChild(ProtoInstance4 = new ProtoInstance().setName("x3dconnector").setDEF("connector1"))
        .addChild(ProtoInstance7 = new ProtoInstance().setName("x3dconnector").setDEF("connector2"))
        .addChild(ProtoInstance10 = new ProtoInstance().setName("x3dconnector").setDEF("connector3"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation").setToNode("connector1").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G2").setFromField("translation").setToNode("connector1").setToField("set_endpoint"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation").setToNode("connector2").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G3").setFromField("translation").setToNode("connector2").setToField("set_endpoint"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation").setToNode("connector3").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G4").setFromField("translation").setToNode("connector3").setToField("set_endpoint")))      ;
ProtoInstance4
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(ProtoInstance5 = new ProtoInstance().setUSE("G1")));
ProtoInstance4
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(ProtoInstance6 = new ProtoInstance().setUSE("G2")));
ProtoInstance4
          .addFieldValue(new fieldValue().setName("set_startpoint"));
ProtoInstance4
          .addFieldValue(new fieldValue().setName("set_endpoint"));
ProtoInstance7
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(ProtoInstance8 = new ProtoInstance().setUSE("G1")));
ProtoInstance7
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(ProtoInstance9 = new ProtoInstance().setUSE("G3")));
ProtoInstance7
          .addFieldValue(new fieldValue().setName("set_startpoint"));
ProtoInstance7
          .addFieldValue(new fieldValue().setName("set_endpoint"));
ProtoInstance10
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(ProtoInstance11 = new ProtoInstance().setUSE("G1")));
ProtoInstance10
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(ProtoInstance12 = new ProtoInstance().setUSE("G4")));
ProtoInstance10
          .addFieldValue(new fieldValue().setName("set_startpoint"));
ProtoInstance10
          .addFieldValue(new fieldValue().setName("set_endpoint"));
    X3D0.toFileX3D("../data/arc.new.graal.x3d");
    X3D0.toFileJSON("../data/arc.new.graal.json");
