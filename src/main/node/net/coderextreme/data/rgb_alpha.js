var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Interchange").setVersion("3.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setContent("rgb_alpha.x3d").setName("title"))
        .addMeta((new autoclass.meta()).setContent("rgb_alpha-front.jpg").setName("Image"))
        .addMeta((new autoclass.meta()).setContent("rgb_alpha-rear.jpg").setName("Image"))
        .addMeta((new autoclass.meta()).setContent("rgb_alpha-top.jpg").setName("Image"))
        .addMeta((new autoclass.meta()).setContent("rgb_alpha-bottom.jpg").setName("Image"))
        .addMeta((new autoclass.meta()).setContent("http://www.nist.gov/vrml.html").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html").setName("creator"))
        .addMeta((new autoclass.meta()).setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.").setName("disclaimer"))
        .addMeta((new autoclass.meta()).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, http://www.web3d.org/working-groups/x3d").setName("info"))
        .addMeta((new autoclass.meta()).setContent("Michael Kass NIST, Don Brutzman NPS").setName("translator"))
        .addMeta((new autoclass.meta()).setContent("21 January 2001").setName("translated"))
        .addMeta((new autoclass.meta()).setContent("16 January 2011").setName("modified"))
        .addMeta((new autoclass.meta()).setContent("Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box.").setName("description"))
        .addMeta((new autoclass.meta()).setContent("http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d").setName("identifier"))
        .addMeta((new autoclass.meta()).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html").setName("generator"))
        .addMeta((new autoclass.meta()).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit").setName("generator"))
        .addMeta((new autoclass.meta()).setContent("../../license.html").setName("license")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.NavigationInfo()).setType(java.newArray("java.lang.String", ["EXAMINE","WALK","FLY","ANY"])))
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(6.14221), java.newFloat(0.0694613), java.newFloat(-0.000999451)]))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()))
                .setTexture((new autoclass.PixelTexture()).setDEF("RgbOpacityCheckerboard").setImage(java.newArray("int", [2,2,4,4278190335,4294901760,4294901760,4278190335]))))
              .setGeometry((new autoclass.Box()))))
          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-4.85443), java.newFloat(0.0694381), java.newFloat(-0.00149918)]))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()))
                .setTexture((new autoclass.PixelTexture()).setUSE("RgbOpacityCheckerboard")))
              .setGeometry((new autoclass.Sphere()))))
          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-1.47341), java.newFloat(0.036672), java.newFloat(-0.00175095)]))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()))
                .setTexture((new autoclass.PixelTexture()).setUSE("RgbOpacityCheckerboard")))
              .setGeometry((new autoclass.Cone()))))
          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(2.31094), java.newFloat(0.0694206), java.newFloat(-0.00187683)]))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()))
                .setTexture((new autoclass.PixelTexture()).setUSE("RgbOpacityCheckerboard")))
              .setGeometry((new autoclass.Cylinder()))))))      ;
    X3D0.toFileX3D("../data/rgb_alpha.new.x3d");
