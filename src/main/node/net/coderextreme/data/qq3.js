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
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("qq3.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("translator").setContentSync("John Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("11 Jan 2015"))
        .addMetaSync(new autoclass.meta().setNameSync("modified").setContentSync("05 May 2017"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("12 extrusions to test prototype expander"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/x3d/qq3.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("manual")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("Process")
          .setProtoBodySync(new autoclass.ProtoBody()
            .addChildSync(new autoclass.Group()
              .addCommentsSync(new autoclass.CommentsBlock("left"))
              .addChildSync(new autoclass.Transform().setScaleSync(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))
                .addChildSync(new autoclass.Shape().setDEFSync("ShapeLeftDown")
                  .setAppearanceSync(new autoclass.Appearance()
                    .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.7), java.newFloat(1), java.newFloat(0)]))))
                  .setGeometrySync(new autoclass.Extrusion().setSpineSync(java.newArray("float", [java.newFloat(-2.5), java.newFloat(0), java.newFloat(0), java.newFloat(-1.5), java.newFloat(0), java.newFloat(0)])).setCreaseAngleSync(java.newFloat(0.785)).setCrossSectionSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0.92), java.newFloat(-0.38), java.newFloat(0.71), java.newFloat(-0.71), java.newFloat(0.38), java.newFloat(-0.92), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.38), java.newFloat(-0.92), java.newFloat(-0.71), java.newFloat(-0.71), java.newFloat(-0.92), java.newFloat(-0.38), java.newFloat(-1), java.newFloat(0), java.newFloat(-0.92), java.newFloat(0.38), java.newFloat(-0.71), java.newFloat(0.71), java.newFloat(-0.38), java.newFloat(0.92), java.newFloat(0), java.newFloat(1), java.newFloat(0.38), java.newFloat(0.92), java.newFloat(0.71), java.newFloat(0.71), java.newFloat(0.92), java.newFloat(0.38), java.newFloat(1), java.newFloat(0)])))))
              .addCommentsSync(new autoclass.CommentsBlock("right"))
              .addChildSync(new autoclass.Transform().setScaleSync(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))
                .addChildSync(new autoclass.Shape().setDEFSync("ShapeUpRight")
                  .setAppearanceSync(new autoclass.Appearance()
                    .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0), java.newFloat(0.7), java.newFloat(1)]))))
                  .setGeometrySync(new autoclass.Extrusion().setSpineSync(java.newArray("float", [java.newFloat(1.5), java.newFloat(0), java.newFloat(0), java.newFloat(2.5), java.newFloat(0), java.newFloat(0)])).setCreaseAngleSync(java.newFloat(0.785)).setCrossSectionSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0.92), java.newFloat(-0.38), java.newFloat(0.71), java.newFloat(-0.71), java.newFloat(0.38), java.newFloat(-0.92), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.38), java.newFloat(-0.92), java.newFloat(-0.71), java.newFloat(-0.71), java.newFloat(-0.92), java.newFloat(-0.38), java.newFloat(-1), java.newFloat(0), java.newFloat(-0.92), java.newFloat(0.38), java.newFloat(-0.71), java.newFloat(0.71), java.newFloat(-0.38), java.newFloat(0.92), java.newFloat(0), java.newFloat(1), java.newFloat(0.38), java.newFloat(0.92), java.newFloat(0.71), java.newFloat(0.71), java.newFloat(0.92), java.newFloat(0.38), java.newFloat(1), java.newFloat(0)])))))
              .addCommentsSync(new autoclass.CommentsBlock("up"))
              .addChildSync(new autoclass.Transform().setScaleSync(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))
                .addChildSync(new autoclass.Shape().setUSESync("ShapeUpRight")))
              .addCommentsSync(new autoclass.CommentsBlock("down"))
              .addChildSync(new autoclass.Transform().setScaleSync(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))
                .addChildSync(new autoclass.Shape().setUSESync("ShapeLeftDown"))))))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Process pipes").setOrientationSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.4)])).setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(5), java.newFloat(12)])))
        .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(-2.5), java.newFloat(0)]))
          .addChildSync(ProtoInstance0 = new autoclass.ProtoInstance().setNameSync("Process")))
        .addChildSync(new autoclass.Transform()
          .addChildSync(ProtoInstance1 = new autoclass.ProtoInstance().setNameSync("Process")))
        .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(2.5), java.newFloat(0)]))
          .addChildSync(ProtoInstance2 = new autoclass.ProtoInstance().setNameSync("Process"))))      ;
    X3D0.toFileX3D("../data/qq3.new.x3d");
