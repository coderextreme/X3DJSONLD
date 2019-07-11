var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Interchange").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("ifscube.json"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("http://coderextreme.net/X3DJSONLD/template.json"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("Template for an Indexed Face Set"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("4 April 2017")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.Group()
          .addChildSync(new autoclass.Shape()
            .setGeometrySync(new autoclass.IndexedFaceSet().setCreaseAngleSync(java.newFloat(1.57)).setDEFSync("IndexedFaceSet").setCoordIndexSync(java.newArray("int", [0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1])).setNormalIndexSync(java.newArray("int", [0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1])).setNormalPerVertexSync(false).setColorIndexSync(java.newArray("int", [0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]))
              .setCoordSync(new autoclass.Coordinate().setPointSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1), java.newFloat(1), java.newFloat(1), java.newFloat(1), java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(1)])))
              .setNormalSync(new autoclass.Normal().setVectorSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(-1), java.newFloat(0), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1)])))
              .setColorSync(new autoclass.Color().setColorSync(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)])))))))      ;
    X3D0.toFileX3D("../data/ifscube.new.x3d");
