var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
var ProtoInstance4 = null;
var ProtoInstance5 = null;
var ProtoInstance6 = null;
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John W Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("December 13 2015"))
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("force.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/X3DJSONLD/force.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("beginnings of a force directed graph in 3D"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("node")
          .setProtoInterfaceSync(new autoclass.ProtoInterface()
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("position").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 0")))
          .setProtoBodySync(new autoclass.ProtoBody()
            .addChildSync(new autoclass.Group()
              .addChildSync(new autoclass.Transform().setDEFSync("transform")
                .setISSync(new autoclass.IS()
                  .addConnectSync(new autoclass.connect().setNodeFieldSync("translation").setProtoFieldSync("position")))
                .addChildSync(new autoclass.Shape()
                  .setGeometrySync(new autoclass.Sphere())
                  .setAppearanceSync(new autoclass.Appearance()
                    .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])))))
                .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(1)]))
                  .addChildSync(new autoclass.Shape()
                    .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["Node"]))
                      .setFontStyleSync(new autoclass.FontStyle().setJustifySync(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setSizeSync(java.newFloat(5))))
                    .setAppearanceSync(new autoclass.Appearance()
                      .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)])))))))
              .addChildSync(new autoclass.PositionInterpolator().setDEFSync("NodePosition").setKeySync(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValueSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(5), java.newFloat(0)])))
              .addChildSync(new autoclass.Script().setDEFSync("MoveBall")
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("translation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("50 50 0"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("old").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 0"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("set_cycle").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFVEC3F).setNameSync("keyValue").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCodeSync("ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}"))
              .addChildSync(new autoclass.TimeSensor().setDEFSync("nodeClock").setCycleIntervalSync(3).setLoopSync(true))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("nodeClock").setFromFieldSync("cycleTime").setToNodeSync("MoveBall").setToFieldSync("set_cycle"))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("nodeClock").setFromFieldSync("fraction_changed").setToNodeSync("NodePosition").setToFieldSync("set_fraction"))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("MoveBall").setFromFieldSync("keyValue").setToNodeSync("NodePosition").setToFieldSync("keyValue"))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("NodePosition").setFromFieldSync("value_changed").setToNodeSync("transform").setToFieldSync("set_translation")))))
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("cylinder")
          .setProtoInterfaceSync(new autoclass.ProtoInterface()
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("set_positionA").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("set_positionB").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY)))
          .setProtoBodySync(new autoclass.ProtoBody()
            .addChildSync(new autoclass.Group()
              .addChildSync(new autoclass.Shape()
                .setGeometrySync(new autoclass.Extrusion().setDEFSync("extrusion").setCreaseAngleSync(java.newFloat(0.785)).setCrossSectionSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0.92), java.newFloat(-0.38), java.newFloat(0.71), java.newFloat(-0.71), java.newFloat(0.38), java.newFloat(-0.92), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.38), java.newFloat(-0.92), java.newFloat(-0.71), java.newFloat(-0.71), java.newFloat(-0.92), java.newFloat(-0.38), java.newFloat(-1), java.newFloat(0), java.newFloat(-0.92), java.newFloat(0.38), java.newFloat(-0.71), java.newFloat(0.71), java.newFloat(-0.38), java.newFloat(0.92), java.newFloat(0), java.newFloat(1), java.newFloat(0.38), java.newFloat(0.92), java.newFloat(0.71), java.newFloat(0.71), java.newFloat(0.92), java.newFloat(0.38), java.newFloat(1), java.newFloat(0)])).setSpineSync(java.newArray("float", [java.newFloat(0), java.newFloat(-50), java.newFloat(0), java.newFloat(0), java.newFloat(50), java.newFloat(0)])))
                .setAppearanceSync(new autoclass.Appearance()
                  .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)])))))
              .addChildSync(new autoclass.Script().setDEFSync("MoveCylinder")
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFVEC3F).setNameSync("spine").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 -50 0 0 50 0"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("set_endA").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("set_endB").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
                .setISSync(new autoclass.IS()
                  .addConnectSync(new autoclass.connect().setNodeFieldSync("set_endA").setProtoFieldSync("set_positionA"))
                  .addConnectSync(new autoclass.connect().setNodeFieldSync("set_endB").setProtoFieldSync("set_positionB")))
                .setSourceCodeSync("ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }"))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("MoveCylinder").setFromFieldSync("spine").setToNodeSync("extrusion").setToFieldSync("set_spine")))))
        .addChildSync(new autoclass.Transform().setDEFSync("HoldsContent").setScaleSync(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.1)]))
          .addChildSync(new autoclass.PlaneSensor().setDEFSync("clickGenerator").setMinPositionSync(java.newArray("float", [java.newFloat(-50), java.newFloat(-50)])).setMaxPositionSync(java.newArray("float", [java.newFloat(50), java.newFloat(50)])).setDescriptionSync("click on background to add nodes, click on nodes to add links"))
          .addChildSync(ProtoInstance0 = new autoclass.ProtoInstance().setNameSync("node").setDEFSync("nodeA"))
          .addChildSync(ProtoInstance1 = new autoclass.ProtoInstance().setNameSync("node").setDEFSync("nodeB"))
          .addChildSync(ProtoInstance2 = new autoclass.ProtoInstance().setNameSync("node").setDEFSync("nodeC"))
          .addChildSync(ProtoInstance3 = new autoclass.ProtoInstance().setNameSync("node").setDEFSync("nodeD"))
          .addChildSync(ProtoInstance4 = new autoclass.ProtoInstance().setNameSync("cylinder").setDEFSync("linkA"))
          .addChildSync(ProtoInstance5 = new autoclass.ProtoInstance().setNameSync("cylinder").setDEFSync("linkB"))
          .addChildSync(ProtoInstance6 = new autoclass.ProtoInstance().setNameSync("cylinder").setDEFSync("linkC")))
        .addChildSync(new autoclass.Script().setDEFSync("clickHandler")
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFINT32).setNameSync("counter").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("node_changed").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("add_node").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY).setValueSync("false"))
          .addCommentsSync(new autoclass.CommentsBlock("<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>"))
          .setSourceCodeSync("ecmascript:\n"+
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
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("clickGenerator").setFromFieldSync("isActive").setToNodeSync("clickHandler").setToFieldSync("add_node"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("nodeA").setFromFieldSync("position").setToNodeSync("linkA").setToFieldSync("set_positionA"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("nodeB").setFromFieldSync("position").setToNodeSync("linkA").setToFieldSync("set_positionB"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("nodeA").setFromFieldSync("position").setToNodeSync("linkB").setToFieldSync("set_positionA"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("nodeC").setFromFieldSync("position").setToNodeSync("linkB").setToFieldSync("set_positionB"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("nodeA").setFromFieldSync("position").setToNodeSync("linkC").setToFieldSync("set_positionA"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("nodeD").setFromFieldSync("position").setToNodeSync("linkC").setToFieldSync("set_positionB")))      ;
ProtoInstance0
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("position").setValueSync("0 0 0"));
ProtoInstance1
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("position").setValueSync("50 50 50"));
ProtoInstance2
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("position").setValueSync("-50 -50 -50"));
ProtoInstance3
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("position").setValueSync("50 50 -50"));
ProtoInstance4
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("set_positionA").setValueSync("0 0 0"));
ProtoInstance4
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("set_positionB").setValueSync("50 50 50"));
ProtoInstance5
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("set_positionA").setValueSync("0 0 0"));
ProtoInstance5
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("set_positionB").setValueSync("-50 -50 -50"));
ProtoInstance6
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("set_positionA").setValueSync("50 50 50"));
ProtoInstance6
            .addFieldValueSync(new autoclass.fieldValue().setNameSync("set_positionB").setValueSync("50 50 -50"));
    X3D0.toFileX3D("../data/forcenode.new.x3d");
