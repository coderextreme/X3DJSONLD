import java from 'node-java';
import util from 'util';
import autoclass from '../../../X3Dautoclass.js';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Interchange").setVersion("3.3")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("ifscubeworks.x3d"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/src/main/personal/ifscubeworks.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("Template for an Indexed Face Set"))
        .addMeta(new autoclass.meta().setName("creator").setContent("John Carlson"))
        .addMeta(new autoclass.meta().setName("created").setContent("4 April 2017"))
        .addMeta(new autoclass.meta().setName("license").setContent("https://coderextreme.net/X3DJSONLD/LICENSE"))
        .addMeta(new autoclass.meta().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.WorldInfo().setTitle("ifscubeworks.x3d"))
        .addChild(new autoclass.Group()
          .addChild(new autoclass.Shape()
            .setGeometry(new autoclass.IndexedFaceSet().setDEF("IndexedFaceSet").setCoordIndex(java.newArray("int", [0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1])).setNormalIndex(java.newArray("int", [0,0,1,2,3,4,5])).setNormalPerVertex(false).setColorIndex(java.newArray("int", [0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]))
              .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1), java.newFloat(1), java.newFloat(1), java.newFloat(1), java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(1)])))
              .setNormal(new autoclass.Normal().setVector(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(-1), java.newFloat(0), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1)])))
              .setColor(new autoclass.Color().setColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)])))))))      ;
    X3D0.toFileX3D("../personal/ifscubeworks.new.node.x3d");
    X3D0.toFileJSON("../personal/ifscubeworks.new.node.json");
    process.exit(0);
