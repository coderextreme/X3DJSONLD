var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John W Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("December 13 2015"))
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("force.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/X3DJSONLD/force.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("beginnings of a force directed graph in 3D"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.Group()
          .addChildSync(new autoclass.Shape()
            .setGeometrySync(new autoclass.Extrusion().setDEFSync("extrusion").setSpineSync(java.newArray("float", [java.newFloat(-50), java.newFloat(-50), java.newFloat(0), java.newFloat(50), java.newFloat(50), java.newFloat(0)])).setCreaseAngleSync(java.newFloat(0.785)).setCrossSectionSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0.92), java.newFloat(-0.38), java.newFloat(0.71), java.newFloat(-0.71), java.newFloat(0.38), java.newFloat(-0.92), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.38), java.newFloat(-0.92), java.newFloat(-0.71), java.newFloat(-0.71), java.newFloat(-0.92), java.newFloat(-0.38), java.newFloat(-1), java.newFloat(0), java.newFloat(-0.92), java.newFloat(0.38), java.newFloat(-0.71), java.newFloat(0.71), java.newFloat(-0.38), java.newFloat(0.92), java.newFloat(0), java.newFloat(1), java.newFloat(0.38), java.newFloat(0.92), java.newFloat(0.71), java.newFloat(0.71), java.newFloat(0.92), java.newFloat(0.38), java.newFloat(1), java.newFloat(0)])))
            .setAppearanceSync(new autoclass.Appearance()
              .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)])))))
          .addChildSync(new autoclass.TimeSensor().setDEFSync("TourTime").setLoopSync(true))
          .addChildSync(new autoclass.Script().setDEFSync("MoveCylinder")
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("set_cycle").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFVEC3F).setNameSync("spine").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("-50 -50 0 50 50 0"))
            .setSourceCodeSync("ecmascript:\n"+
"\n"+
"                function set_cycle(value) {\n"+
"                        Browser.print(value);\n"+
"                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);\n"+
"                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);\n"+
"		        spine = new MFVec3f([endA, endB]);\n"+
"                }"))
          .addChildSync(new autoclass.ROUTE().setFromNodeSync("TourTime").setFromFieldSync("cycleTime").setToNodeSync("MoveCylinder").setToFieldSync("set_cycle"))
          .addChildSync(new autoclass.ROUTE().setFromNodeSync("MoveCylinder").setFromFieldSync("spine_changed").setToNodeSync("extrusion").setToFieldSync("spine"))))      ;
    X3D0.toFileX3D("../data/extrusion.new.x3d");
