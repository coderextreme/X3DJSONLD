import java from 'java';
import util from 'util';
import promisify from 'util';
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
import autoclass from '../../../X3Dautoclass.mjs';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("GridXZ_20x20Fixed.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("MV4204 class"))
        .addMeta((new autoclass.meta()).setName("created").setContent("3 September 2000"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("30 March 2016"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("GridXY_20x20Fixed.x3d"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("GridYZ_20x20Fixed.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m."))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.Viewpoint()).setDescription("XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.4)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(10), java.newFloat(25)])))
        .addChild((new autoclass.Transform()).setDEF("GridLocation")
          .addChild((new autoclass.Group())
            .addChild((new autoclass.Shape()).setDEF("LinesAlignedAlongZ")
              .setGeometry((new autoclass.IndexedLineSet()).setColorIndex(java.newArray("int", [1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1])).setColorPerVertex(false).setCoordIndex(java.newArray("int", [1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1]))
                .setCoord((new autoclass.Coordinate()).setDEF("EndPoints").setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(-10), java.newFloat(0), java.newFloat(10), java.newFloat(-9), java.newFloat(0), java.newFloat(10), java.newFloat(-8), java.newFloat(0), java.newFloat(10), java.newFloat(-7), java.newFloat(0), java.newFloat(10), java.newFloat(-6), java.newFloat(0), java.newFloat(10), java.newFloat(-5), java.newFloat(0), java.newFloat(10), java.newFloat(-4), java.newFloat(0), java.newFloat(10), java.newFloat(-3), java.newFloat(0), java.newFloat(10), java.newFloat(-2), java.newFloat(0), java.newFloat(10), java.newFloat(-1), java.newFloat(0), java.newFloat(10), java.newFloat(0), java.newFloat(0), java.newFloat(10), java.newFloat(1), java.newFloat(0), java.newFloat(10), java.newFloat(2), java.newFloat(0), java.newFloat(10), java.newFloat(3), java.newFloat(0), java.newFloat(10), java.newFloat(4), java.newFloat(0), java.newFloat(10), java.newFloat(5), java.newFloat(0), java.newFloat(10), java.newFloat(6), java.newFloat(0), java.newFloat(10), java.newFloat(7), java.newFloat(0), java.newFloat(10), java.newFloat(8), java.newFloat(0), java.newFloat(10), java.newFloat(9), java.newFloat(0), java.newFloat(10), java.newFloat(10), java.newFloat(0), java.newFloat(10), java.newFloat(-10), java.newFloat(0), java.newFloat(-10), java.newFloat(-9), java.newFloat(0), java.newFloat(-10), java.newFloat(-8), java.newFloat(0), java.newFloat(-10), java.newFloat(-7), java.newFloat(0), java.newFloat(-10), java.newFloat(-6), java.newFloat(0), java.newFloat(-10), java.newFloat(-5), java.newFloat(0), java.newFloat(-10), java.newFloat(-4), java.newFloat(0), java.newFloat(-10), java.newFloat(-3), java.newFloat(0), java.newFloat(-10), java.newFloat(-2), java.newFloat(0), java.newFloat(-10), java.newFloat(-1), java.newFloat(0), java.newFloat(-10), java.newFloat(0), java.newFloat(0), java.newFloat(-10), java.newFloat(1), java.newFloat(0), java.newFloat(-10), java.newFloat(2), java.newFloat(0), java.newFloat(-10), java.newFloat(3), java.newFloat(0), java.newFloat(-10), java.newFloat(4), java.newFloat(0), java.newFloat(-10), java.newFloat(5), java.newFloat(0), java.newFloat(-10), java.newFloat(6), java.newFloat(0), java.newFloat(-10), java.newFloat(7), java.newFloat(0), java.newFloat(-10), java.newFloat(8), java.newFloat(0), java.newFloat(-10), java.newFloat(9), java.newFloat(0), java.newFloat(-10), java.newFloat(10), java.newFloat(0), java.newFloat(-10)])))
                .setColor((new autoclass.Color()).setColor(java.newArray("float", [java.newFloat(0.4), java.newFloat(0.4), java.newFloat(0.4), java.newFloat(0.8), java.newFloat(0.2), java.newFloat(0), java.newFloat(0.4), java.newFloat(0.1), java.newFloat(0.05)])))))
            .addChild((new autoclass.Transform()).setDEF("LinesAlignedAlongX").setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1.57079)]))
              .addChild((new autoclass.Shape()).setUSE("LinesAlignedAlongZ")))
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-0.5), java.newFloat(0)]))
              .addChild((new autoclass.Billboard())
                .addChild((new autoclass.Shape())
                  .setGeometry((new autoclass.Text()).setDEF("CenterTextNode").setString(java.newArray("java.lang.String", ["origin"]))
                    .setFontStyle((new autoclass.FontStyle()).setDEF("FS4").setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setSize(java.newFloat(0.4))))
                  .setAppearance((new autoclass.Appearance()).setDEF("DefaultAppearance")
                    .setMaterial((new autoclass.Material()))))))
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(10), java.newFloat(-0.5), java.newFloat(10)]))
              .addChild((new autoclass.Billboard())
                .addChild((new autoclass.Shape())
                  .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["10 0 10"]))
                    .setFontStyle((new autoclass.FontStyle()).setUSE("FS4")))
                  .setAppearance((new autoclass.Appearance()).setUSE("DefaultAppearance")))))
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(10), java.newFloat(-0.5), java.newFloat(-10)]))
              .addChild((new autoclass.Billboard())
                .addChild((new autoclass.Shape())
                  .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["10 0 -10"]))
                    .setFontStyle((new autoclass.FontStyle()).setUSE("FS4")))
                  .setAppearance((new autoclass.Appearance()).setUSE("DefaultAppearance")))))
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-10), java.newFloat(-0.5), java.newFloat(10)]))
              .addChild((new autoclass.Billboard())
                .addChild((new autoclass.Shape())
                  .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["-10 0 10"]))
                    .setFontStyle((new autoclass.FontStyle()).setUSE("FS4")))
                  .setAppearance((new autoclass.Appearance()).setUSE("DefaultAppearance")))))
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-10), java.newFloat(-0.5), java.newFloat(-10)]))
              .addChild((new autoclass.Billboard())
                .addChild((new autoclass.Shape())
                  .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["-10 0 -10"]))
                    .setFontStyle((new autoclass.FontStyle()).setUSE("FS4")))
                  .setAppearance((new autoclass.Appearance()).setUSE("DefaultAppearance"))))))))      ;
    X3D0.toFileX3D("../data/GridXZ_20x20Fixed.new.x3d");
    process.exit(0);
