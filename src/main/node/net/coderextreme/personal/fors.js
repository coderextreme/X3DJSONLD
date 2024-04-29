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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("creator").setContent("John W Carlson"))
        .addMeta(new autoclass.meta().setName("created").setContent("December 13 2015"))
        .addMeta(new autoclass.meta().setName("title").setContent("fors.x3d"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/force.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("beginnings of a force directed graph in 3D"))
        .addMeta(new autoclass.meta().setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.ProtoDeclare().setName("node")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("position").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
          .setProtoBody(new autoclass.ProtoBody()
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
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}"))
            .addChild(new autoclass.TimeSensor().setDEF("nodeClock").setCycleInterval(3).setLoop(true))
            .addChild(new autoclass.ROUTE().setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle"))
            .addChild(new autoclass.ROUTE().setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction"))
            .addChild(new autoclass.ROUTE().setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("keyValue"))
            .addChild(new autoclass.ROUTE().setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation"))))
        .addChild(new autoclass.ProtoDeclare().setName("cyl")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("set_positionA").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("set_positionB").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new autoclass.ProtoBody()
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
            .addChild(new autoclass.ROUTE().setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine"))))
        .addChild(new autoclass.Transform().setDEF("HoldsContent").setScale(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.1)]))
          .addChild(new autoclass.PlaneSensor().setDEF("clickGenerator").setMinPosition(java.newArray("float", [java.newFloat(-50), java.newFloat(-50)])).setMaxPosition(java.newArray("float", [java.newFloat(50), java.newFloat(50)])).setDescription("click on background to add nodes, click on nodes to add links"))
          .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("node").setDEF("nodeA"))
          .addChild(ProtoInstance1 = new autoclass.ProtoInstance().setName("node").setDEF("nodeB"))
          .addChild(ProtoInstance2 = new autoclass.ProtoInstance().setName("cyl").setDEF("linkA")))
        .addChild(new autoclass.ROUTE().setFromNode("nodeA").setFromField("position").setToNode("linkA").setToField("set_positionA"))
        .addChild(new autoclass.ROUTE().setFromNode("nodeB").setFromField("position").setToNode("linkA").setToField("set_positionB")))      ;
ProtoInstance0
            .addFieldValue(new autoclass.fieldValue().setName("position").setValue("0 0 0"));
ProtoInstance1
            .addFieldValue(new autoclass.fieldValue().setName("position").setValue("50 50 50"));
ProtoInstance2
            .addFieldValue(new autoclass.fieldValue().setName("set_positionA").setValue("0 0 0"));
ProtoInstance2
            .addFieldValue(new autoclass.fieldValue().setName("set_positionB").setValue("50 50 50"));
    X3D0.toFileX3D("../personal/fors.new.node.x3d");
    X3D0.toFileJSON("../personal/fors.new.node.json");
    process.exit(0);
