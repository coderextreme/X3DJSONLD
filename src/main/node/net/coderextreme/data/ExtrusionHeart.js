var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.0")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("ExtrusionHeart.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("Simple extrusion of a Valentine heart."))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("Class participants in course Introduction to VRML/X3D."))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("14 February 2001"))
        .addMetaSync(new autoclass.meta().setNameSync("modified").setContentSync("27 November 2015"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("http://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMetaSync(new autoclass.meta().setNameSync("license").setContentSync("../license.html")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Extrusion Heart").setOrientationSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57)])).setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(-4), java.newFloat(0)])))
        .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(-0.5), java.newFloat(0)]))
          .addChildSync(new autoclass.Shape()
            .setGeometrySync(new autoclass.Extrusion().setCreaseAngleSync(java.newFloat(3.14159)).setCrossSectionSync(java.newArray("float", [java.newFloat(0), java.newFloat(0.8), java.newFloat(0.2), java.newFloat(1), java.newFloat(0.7), java.newFloat(0.95), java.newFloat(1), java.newFloat(0.5), java.newFloat(0.8), java.newFloat(0), java.newFloat(0.5), java.newFloat(-0.3), java.newFloat(0), java.newFloat(-0.7), java.newFloat(-0.5), java.newFloat(-0.3), java.newFloat(-0.8), java.newFloat(0), java.newFloat(-1), java.newFloat(0.5), java.newFloat(-0.7), java.newFloat(0.95), java.newFloat(-0.2), java.newFloat(1), java.newFloat(0), java.newFloat(0.8)])).setScaleSync(java.newArray("float", [java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0.8), java.newFloat(0.8), java.newFloat(1), java.newFloat(1), java.newFloat(0.8), java.newFloat(0.8), java.newFloat(0.01), java.newFloat(0.01)])).setSolidSync(false).setSpineSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.1), java.newFloat(0), java.newFloat(0), java.newFloat(0.5), java.newFloat(0), java.newFloat(0), java.newFloat(0.9), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)])))
            .setAppearanceSync(new autoclass.Appearance()
              .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.8), java.newFloat(0.3), java.newFloat(0.3)])))))))      ;
    X3D0.toFileX3D("../data/ExtrusionHeart.new.x3d");
