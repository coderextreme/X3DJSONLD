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
        .addComponent((new autoclass.component()).setName("HAnim").setLevel(1))
        .addMeta((new autoclass.meta()).setName("title").setContent("skeleton8.x3d"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/skeleton8.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("An attempt at a standard LOA-4 skeleton"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("h2.pl"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
        .addMeta((new autoclass.meta()).setName("created").setContent("9 November 2020"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.Transform())
          .addComments((new autoclass.CommentsBlock("DEF for markerfor XYZ axes")))
          .addChild((new autoclass.Shape()).setDEF("AxisLinesShape")
            .addComments((new autoclass.CommentsBlock("RGB lines showing XYZ axes")))
            .setGeometry((new autoclass.IndexedLineSet()).setColorIndex(java.newArray("int", [0,1,2])).setColorPerVertex(false).setCoordIndex(java.newArray("int", [0,1,-1,0,2,-1,0,3,-1]))
              .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.1)])))
              .setColor((new autoclass.Color()).setColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.6), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))))
        .addChild((new autoclass.Group())
          .addComments((new autoclass.CommentsBlock("DEFS for markers of skeleton joints, segments, and sites")))
          .addChild((new autoclass.Transform())
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(2), java.newFloat(0)]))
              .addChild((new autoclass.Shape()).setDEF("HAnimRootShape")
                .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.02)))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDEF("HAnimRootMaterial").setDiffuseColor(java.newArray("float", [java.newFloat(0.8), java.newFloat(0), java.newFloat(0)])).setTransparency(java.newFloat(0.3))))))
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(2.1), java.newFloat(0)]))
              .addChild((new autoclass.Shape()).setDEF("HAnimJointShape")
                .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.02)))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDEF("HAnimJointMaterial").setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0.8)])).setTransparency(java.newFloat(0.3))))))
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(2.05), java.newFloat(0)]))
              .addChild((new autoclass.Shape()).setDEF("HAnimSegmentLine")
                .setGeometry((new autoclass.LineSet()).setVertexCount(java.newArray("int", [2]))
                  .setColor((new autoclass.ColorRGBA()).setDEF("HAnimSegmentLineColorRGBA").setColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(1), java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(0.1)])))
                  .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(-0.05), java.newFloat(0), java.newFloat(0), java.newFloat(0.05), java.newFloat(0), java.newFloat(0)]))))))
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(2.1), java.newFloat(0)]))
              .addChild((new autoclass.Shape()).setDEF("HAnimSiteShape")
                .setGeometry((new autoclass.IndexedFaceSet()).setDEF("DiamondIFS").setCreaseAngle(java.newFloat(0.5)).setSolid(false).setCoordIndex(java.newArray("int", [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]))
                  .setColor((new autoclass.ColorRGBA()).setDEF("HAnimSiteColorRGBA").setColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(1), java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(0.1)])))
                  .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0.01), java.newFloat(0), java.newFloat(-0.01), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(-0.01), java.newFloat(0), java.newFloat(-0.01), java.newFloat(0)]))))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0)])).setTransparency(java.newFloat(0.3))))))))
        .addChild((new autoclass.NavigationInfo()).setSpeed(java.newFloat(1.5)))
        .addChild((new autoclass.Viewpoint()).setDescription("default")))      ;
    X3D0.toFileX3D("../data/skeleton8.new.x3d");
    process.exit(0);
