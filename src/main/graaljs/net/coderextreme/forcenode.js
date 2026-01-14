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
var ProtoInstance3 = null;
var ProtoInstance4 = null;
var ProtoInstance5 = null;
var ProtoInstance6 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("creator").setContent("John W Carlson"))
        .addMeta(new meta().setName("created").setContent("December 13 2015"))
        .addMeta(new meta().setName("title").setContent("forcenode.x3d"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"))
        .addMeta(new meta().setName("description").setContent("beginnings of a force directed graph in 3D"))
        .addMeta(new meta().setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("node")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF("transform")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("position")))
                .addChild(new Shape()
                  .setGeometry(new Sphere())
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,0,0]), Java.type("float[]"))))))
                .addChild(new Transform().setTranslation(Java.to(doubleToFloat([1,0,1]), Java.type("float[]")))
                  .addChild(new Shape()
                    .setGeometry(new Text().setString(Java.to(["Node"], Java.type("java.lang.String[]")))
                      .setFontStyle(new FontStyle().setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))).setSize(5)))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]"))))))))
              .addChild(new PositionInterpolator().setDEF("NodePosition").setKey(Java.to(doubleToFloat([0,1]), Java.type("float[]"))).setKeyValue(Java.to(doubleToFloat([0,0,0,0,5,0]), Java.type("float[]"))))
              .addChild(new Script().setDEF("MoveBall")
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0"))
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("old").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new field().setType(field.TYPE_SFTIME).setName("set_cycle").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_MFVEC3F).setName("keyValue").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
					function set_cycle(value) {
                                                old = translation;
						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
                                                keyValue = new MFVec3f(...[old, translation]);
						// Browser.println(translation);
					}`))
              .addChild(new TimeSensor().setDEF("nodeClock").setCycleInterval(3).setLoop(true))
              .addChild(new ROUTE().setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle"))
              .addChild(new ROUTE().setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction"))
              .addChild(new ROUTE().setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("keyValue"))
              .addChild(new ROUTE().setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation")))))
        .addChild(new ProtoDeclare().setName("cylinder")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_positionA").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_positionB").setAccessType(field.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Shape()
                .setGeometry(new Extrusion().setDEF("extrusion").setCreaseAngle(0.785).setCrossSection(Java.to(doubleToFloat([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]), Java.type("float[]"))).setSpine(Java.to(doubleToFloat([0,-50,0,0,50,0]), Java.type("float[]"))))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,1,0]), Java.type("float[]"))))))
              .addChild(new Script().setDEF("MoveCylinder")
                .addField(new field().setType(field.TYPE_MFVEC3F).setName("spine").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 -50 0 0 50 0"))
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_endA").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_endB").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("set_endA").setProtoField("set_positionA"))
                  .addConnect(new connect().setNodeField("set_endB").setProtoField("set_positionB")))
                .setSourceCode(`ecmascript:

                function set_endA(value) {
		    if (typeof spine === 'undefined') {
		        spine = new MFVec3f(...[value, value]);
		    } else {
		        spine = new MFVec3f(...[value, spine[1]]);
		    }
                }

                function set_endB(value) {
		    if (typeof spine === 'undefined') {
		        spine = new MFVec3f(...[value, value]);
		    } else {
		        spine = new MFVec3f(...[spine[0], value]);
		    }
                }

                function set_spine(value) {
                    spine = value;
                }`))
              .addChild(new ROUTE().setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine")))))
        .addChild(new Transform().setDEF("HoldsContent").setScale(Java.to(doubleToFloat([0.1,0.1,0.1]), Java.type("float[]")))
          .addChild(new PlaneSensor().setDEF("clickGenerator").setMinPosition(Java.to(doubleToFloat([-50,-50]), Java.type("float[]"))).setMaxPosition(Java.to(doubleToFloat([50,50]), Java.type("float[]"))).setDescription("click on background to add nodes, click on nodes to add links"))
          .addChild(ProtoInstance0 = new ProtoInstance().setName("node").setDEF("nodeA"))
          .addChild(ProtoInstance1 = new ProtoInstance().setName("node").setDEF("nodeB"))
          .addChild(ProtoInstance2 = new ProtoInstance().setName("node").setDEF("nodeC"))
          .addChild(ProtoInstance3 = new ProtoInstance().setName("node").setDEF("nodeD"))
          .addChild(ProtoInstance4 = new ProtoInstance().setName("cylinder").setDEF("linkA"))
          .addChild(ProtoInstance5 = new ProtoInstance().setName("cylinder").setDEF("linkB"))
          .addChild(ProtoInstance6 = new ProtoInstance().setName("cylinder").setDEF("linkC")))
        .addChild(new Script().setDEF("clickHandler")
          .addField(new field().setType(field.TYPE_SFINT32).setName("counter").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
          .addField(new field().setType(field.TYPE_SFNODE).setName("node_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("add_node").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("false"))
          .addComments(new CommentsBlock("<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>"))
          .setSourceCode(`ecmascript:
	function add_node(value) {
                // Browser.print('hey ', counter);
                counter = counter++;
		Browser.appendTo(Browser.getDocument().querySelector(\"field [name=ModifiableNode]\"),
			{ \"ProtoInstance\":
				{ \"@name\":\"node\",
				  \"@DEF\":\"node'+counter+'\",
				  \"fieldValue\": [
					{
						 \"@name\":\"position\",
						 \"@value\":[0.0,0.0,0.0]
					}
				  ]
				}
			});

        }`))
        .addChild(new ROUTE().setFromNode("clickGenerator").setFromField("isActive").setToNode("clickHandler").setToField("add_node"))
        .addChild(new ROUTE().setFromNode("nodeA").setFromField("position").setToNode("linkA").setToField("set_positionA"))
        .addChild(new ROUTE().setFromNode("nodeB").setFromField("position").setToNode("linkA").setToField("set_positionB"))
        .addChild(new ROUTE().setFromNode("nodeA").setFromField("position").setToNode("linkB").setToField("set_positionA"))
        .addChild(new ROUTE().setFromNode("nodeC").setFromField("position").setToNode("linkB").setToField("set_positionB"))
        .addChild(new ROUTE().setFromNode("nodeA").setFromField("position").setToNode("linkC").setToField("set_positionA"))
        .addChild(new ROUTE().setFromNode("nodeD").setFromField("position").setToNode("linkC").setToField("set_positionB")))      ;
ProtoInstance0
            .addFieldValue(new fieldValue().setName("position").setValue("0 0 0"));
ProtoInstance1
            .addFieldValue(new fieldValue().setName("position").setValue("50 50 50"));
ProtoInstance2
            .addFieldValue(new fieldValue().setName("position").setValue("-50 -50 -50"));
ProtoInstance3
            .addFieldValue(new fieldValue().setName("position").setValue("50 50 -50"));
ProtoInstance4
            .addFieldValue(new fieldValue().setName("set_positionA").setValue("0 0 0"));
ProtoInstance4
            .addFieldValue(new fieldValue().setName("set_positionB").setValue("50 50 50"));
ProtoInstance5
            .addFieldValue(new fieldValue().setName("set_positionA").setValue("0 0 0"));
ProtoInstance5
            .addFieldValue(new fieldValue().setName("set_positionB").setValue("-50 -50 -50"));
ProtoInstance6
            .addFieldValue(new fieldValue().setName("set_positionA").setValue("50 50 50"));
ProtoInstance6
            .addFieldValue(new fieldValue().setName("set_positionB").setValue("50 50 -50"));
    X3D0.toFileX3D(".././forcenode.new.graal.x3d");
    X3D0.toFileJSON(".././forcenode.new.graal.json");
