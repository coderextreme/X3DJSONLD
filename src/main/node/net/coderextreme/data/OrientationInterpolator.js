import java from 'node-java';
import util from 'util';
import autoclass from '../../../X3Dautoclass.js';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Interactive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addComponent(new autoclass.component().setName("HAnim").setLevel(1))
        .addMeta(new autoclass.meta().setName("title").setContent("OrientationInterpolator.x3d"))
        .addMeta(new autoclass.meta().setName("creator").setContent("John Carlson"))
        .addMeta(new autoclass.meta().setName("created").setContent("29 December 2025"))
        .addMeta(new autoclass.meta().setName("license").setContent("license.html")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.WorldInfo().setTitle("OrientationInterpolator.x3d"))
        .addComments((new autoclass.CommentsBlock("<OrientationInterpolator DEF='Stop_l_midtarsal_RotationInterpolator' key='0 0.5 1' keyValue='0 0 1 0 0 0 1 0 0 0 1 0'/>"))))      ;
    X3D0.toFileX3D("../data/OrientationInterpolator.new.node.x3d");
    X3D0.toFileJSON("../data/OrientationInterpolator.new.node.x3dj");
    process.exit(0);
