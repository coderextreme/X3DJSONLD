var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Interchange").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("sphere.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("manual"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/X3DJSONLD/sphere.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("a sphere")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.Group()
          .addChildSync(new autoclass.Shape()
            .setAppearanceSync(new autoclass.Appearance()
              .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
            .setGeometrySync(new autoclass.Sphere()))))      ;
    X3D0.toFileX3D("../data/sphere.new.x3d");
