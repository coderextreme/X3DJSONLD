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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("creator").setContent("John W Carlson"))
        .addMeta((new autoclass.meta()).setName("created").setContent("December 13 2015"))
        .addMeta((new autoclass.meta()).setName("title").setContent("extrusion.x3d"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("beginnings of a force directed graph in 3D"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Extrusion()).setDEF("extrusion").setSpine(java.newArray("float", [java.newFloat(-50), java.newFloat(-50), java.newFloat(0), java.newFloat(50), java.newFloat(50), java.newFloat(0)])).setCreaseAngle(java.newFloat(0.785)).setCrossSection(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0.92), java.newFloat(-0.38), java.newFloat(0.71), java.newFloat(-0.71), java.newFloat(0.38), java.newFloat(-0.92), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.38), java.newFloat(-0.92), java.newFloat(-0.71), java.newFloat(-0.71), java.newFloat(-0.92), java.newFloat(-0.38), java.newFloat(-1), java.newFloat(0), java.newFloat(-0.92), java.newFloat(0.38), java.newFloat(-0.71), java.newFloat(0.71), java.newFloat(-0.38), java.newFloat(0.92), java.newFloat(0), java.newFloat(1), java.newFloat(0.38), java.newFloat(0.92), java.newFloat(0.71), java.newFloat(0.71), java.newFloat(0.92), java.newFloat(0.38), java.newFloat(1), java.newFloat(0)])))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)])))))
          .addChild((new autoclass.TimeSensor()).setDEF("TourTime").setLoop(true))
          .addChild((new autoclass.Script()).setDEF("MoveCylinder")
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFTIME).setName("set_cycle").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFVEC3F).setName("spine").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("-50 -50 0 50 50 0"))
            .setSourceCode("ecmascript:\n"+
"\n"+
"                function set_cycle(value) {\n"+
"                        Browser.print(value);\n"+
"                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);\n"+
"                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);\n"+
"		        spine = new MFVec3f([endA, endB]);\n"+
"                }"))
          .addChild((new autoclass.ROUTE()).setFromNode("TourTime").setFromField("cycleTime").setToNode("MoveCylinder").setToField("set_cycle"))
          .addChild((new autoclass.ROUTE()).setFromNode("MoveCylinder").setFromField("spine_changed").setToNode("extrusion").setToField("set_spine"))))      ;
    X3D0.toFileX3D("../data/extrusion.new.node.x3d");
    X3D0.toFileJSON("../data/extrusion.new.node.json");
    process.exit(0);
