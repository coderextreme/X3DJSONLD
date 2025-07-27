import java from 'node-java';
import util from 'util';
import autoclass from '../../../X3Dautoclass.js';
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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addComponent(new autoclass.component().setName("Scripting").setLevel(1))
        .addMeta(new autoclass.meta().setName("creator").setContent("John W Carlson"))
        .addMeta(new autoclass.meta().setName("created").setContent("December 13 2015"))
        .addMeta(new autoclass.meta().setName("title").setContent("force.x3d"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/force.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("beginnings of a force directed graph in 3D"))
        .addMeta(new autoclass.meta().setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.ProtoDeclare().setName("node")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("position").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Transform().setDEF("transform")
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("position")))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Sphere())
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])))))
                .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)]))
                  .addChild(new autoclass.Shape()
                    .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["Node"]))
                      .setFontStyle(new autoclass.FontStyle().setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setSize(java.newFloat(5))))
                    .setAppearance(new autoclass.Appearance()
                      .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)])))))))
              .addChild(new autoclass.PositionInterpolator().setDEF("NodePosition").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(5), java.newFloat(0)])))
              .addChild(new autoclass.Script().setDEF("MoveBall")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("old").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("set_cycle").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_MFVEC3F).setName("keyValue").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                var tmpkeyValue = new MFVec3f();\n"+
"			    			tmpkeyValue[0] = old;\n"+
"			    			tmpkeyValue[1] = translation;\n"+
"                                                keyValue = tmpkeyValue;\n"+
"			    		\n"+
"						// Browser.println(translation);\n"+
"					}"))
              .addChild(new autoclass.TimeSensor().setDEF("nodeClock").setCycleInterval(3).setLoop(true))
              .addChild(new autoclass.ROUTE().setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle"))
              .addChild(new autoclass.ROUTE().setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction"))
              .addChild(new autoclass.ROUTE().setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("keyValue"))
              .addChild(new autoclass.ROUTE().setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation")))))
        .addChild(new autoclass.ProtoDeclare().setName("cyl")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("set_positionA").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("set_positionB").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Shape()
                .setGeometry(new autoclass.Extrusion().setDEF("extrusion").setCreaseAngle(java.newFloat(0.785)).setCrossSection(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0.92), java.newFloat(-0.38), java.newFloat(0.71), java.newFloat(-0.71), java.newFloat(0.38), java.newFloat(-0.92), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.38), java.newFloat(-0.92), java.newFloat(-0.71), java.newFloat(-0.71), java.newFloat(-0.92), java.newFloat(-0.38), java.newFloat(-1), java.newFloat(0), java.newFloat(-0.92), java.newFloat(0.38), java.newFloat(-0.71), java.newFloat(0.71), java.newFloat(-0.38), java.newFloat(0.92), java.newFloat(0), java.newFloat(1), java.newFloat(0.38), java.newFloat(0.92), java.newFloat(0.71), java.newFloat(0.71), java.newFloat(0.92), java.newFloat(0.38), java.newFloat(1), java.newFloat(0)])).setSpine(java.newArray("float", [java.newFloat(0), java.newFloat(-50), java.newFloat(0), java.newFloat(0), java.newFloat(50), java.newFloat(0)])))
                .setAppearance(new autoclass.Appearance()
                  .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)])))))
              .addChild(new autoclass.Script().setDEF("MoveCylinder")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_MFVEC3F).setName("spine").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 -50 0 0 50 0"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("set_endA").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("set_endB").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("set_endA").setProtoField("set_positionA"))
                  .addConnect(new autoclass.connect().setNodeField("set_endB").setProtoField("set_positionB")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		    } else {\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = spine[1];\n"+
"			spine = tmpspine;\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		    } else {\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = spine[0];\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }"))
              .addChild(new autoclass.ROUTE().setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine")))))
        .addChild(new autoclass.Transform().setDEF("HoldsContent").setScale(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.1)]))
          .addChild(new autoclass.PlaneSensor().setDEF("clickGenerator").setMinPosition(java.newArray("float", [java.newFloat(-50), java.newFloat(-50)])).setMaxPosition(java.newArray("float", [java.newFloat(50), java.newFloat(50)])).setDescription("click on background to add nodes, click on nodes to add links"))
          .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("node").setDEF("nodeA"))
          .addChild(ProtoInstance1 = new autoclass.ProtoInstance().setName("node").setDEF("nodeB"))
          .addChild(ProtoInstance2 = new autoclass.ProtoInstance().setName("node").setDEF("nodeC"))
          .addChild(ProtoInstance3 = new autoclass.ProtoInstance().setName("node").setDEF("nodeD"))
          .addChild(ProtoInstance4 = new autoclass.ProtoInstance().setName("cyl").setDEF("linkA"))
          .addChild(ProtoInstance5 = new autoclass.ProtoInstance().setName("cyl").setDEF("linkB"))
          .addChild(ProtoInstance6 = new autoclass.ProtoInstance().setName("cyl").setDEF("linkC")))
        .addChild(new autoclass.Script().setDEF("clickHandler")
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("counter").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("node_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("add_node").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setValue("false"))
          .addComments((new autoclass.CommentsBlock("<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>")))
          .setSourceCode("ecmascript:\n"+
"	function add_node(value) {\n"+
"                // Browser.print('hey ', counter);\n"+
"                counter = counter++;\n"+
"		Browser.appendTo(Browser.getDocument().querySelector(\"field [name=ModifiableNode]\"),\n"+
"			{ \"ProtoInstance\":\n"+
"				{ \"@name\":\"node\",\n"+
"				  \"@DEF\":\"node'+counter+'\",\n"+
"				  \"fieldValue\": [\n"+
"					{\n"+
"						 \"@name\":\"position\",\n"+
"						 \"@value\":[0.0,0.0,0.0]\n"+
"					}\n"+
"				  ]\n"+
"				}\n"+
"			});\n"+
"\n"+
"        }"))
        .addChild(new autoclass.ROUTE().setFromNode("clickGenerator").setFromField("isActive").setToNode("clickHandler").setToField("add_node"))
        .addChild(new autoclass.ROUTE().setFromNode("nodeA").setFromField("position").setToNode("linkA").setToField("set_positionA"))
        .addChild(new autoclass.ROUTE().setFromNode("nodeB").setFromField("position").setToNode("linkA").setToField("set_positionB"))
        .addChild(new autoclass.ROUTE().setFromNode("nodeA").setFromField("position").setToNode("linkB").setToField("set_positionA"))
        .addChild(new autoclass.ROUTE().setFromNode("nodeC").setFromField("position").setToNode("linkB").setToField("set_positionB"))
        .addChild(new autoclass.ROUTE().setFromNode("nodeA").setFromField("position").setToNode("linkC").setToField("set_positionA"))
        .addChild(new autoclass.ROUTE().setFromNode("nodeD").setFromField("position").setToNode("linkC").setToField("set_positionB")))      ;
ProtoInstance0
            .addFieldValue(new autoclass.fieldValue().setName("position").setValue("0 0 0"));
ProtoInstance1
            .addFieldValue(new autoclass.fieldValue().setName("position").setValue("50 50 50"));
ProtoInstance2
            .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-50 -50 -50"));
ProtoInstance3
            .addFieldValue(new autoclass.fieldValue().setName("position").setValue("50 50 -50"));
ProtoInstance4
            .addFieldValue(new autoclass.fieldValue().setName("set_positionA").setValue("0 0 0"));
ProtoInstance4
            .addFieldValue(new autoclass.fieldValue().setName("set_positionB").setValue("50 50 50"));
ProtoInstance5
            .addFieldValue(new autoclass.fieldValue().setName("set_positionA").setValue("0 0 0"));
ProtoInstance5
            .addFieldValue(new autoclass.fieldValue().setName("set_positionB").setValue("-50 -50 -50"));
ProtoInstance6
            .addFieldValue(new autoclass.fieldValue().setName("set_positionA").setValue("50 50 50"));
ProtoInstance6
            .addFieldValue(new autoclass.fieldValue().setName("set_positionB").setValue("50 50 -50"));
    X3D0.toFileX3D("../personal/force.new.node.x3d");
    X3D0.toFileJSON("../personal/force.new.node.json");
    process.exit(0);
