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
        .addMeta((new autoclass.meta()).setContent("indexedfaceset_pixeltexture_whole.x3d").setName("title"))
        .addMeta((new autoclass.meta()).setContent("file did not transform to vrml97").setName("warning"))
        .addMeta((new autoclass.meta()).setContent("indexedfaceset_pixeltexture_whole-front.jpg").setName("Image"))
        .addMeta((new autoclass.meta()).setContent("indexedfaceset_pixeltexture_whole-rear.jpg").setName("Image"))
        .addMeta((new autoclass.meta()).setContent("indexedfaceset_pixeltexture_whole-top.jpg").setName("Image"))
        .addMeta((new autoclass.meta()).setContent("indexedfaceset_pixeltexture_whole-bottom.jpg").setName("Image"))
        .addMeta((new autoclass.meta()).setContent("indexedfaceset_pixeltexture_whole-left.jpg").setName("Image"))
        .addMeta((new autoclass.meta()).setContent("indexedfaceset_pixeltexture_whole-right.jpg").setName("Image"))
        .addMeta((new autoclass.meta()).setContent("http://www.nist.gov/vrml.html").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html").setName("creator"))
        .addMeta((new autoclass.meta()).setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.").setName("disclaimer"))
        .addMeta((new autoclass.meta()).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, http://www.web3d.org/working-groups/x3d").setName("info"))
        .addMeta((new autoclass.meta()).setContent("Michael Kass NIST, Don Brutzman NPS").setName("translator"))
        .addMeta((new autoclass.meta()).setContent("21 January 2001").setName("translated"))
        .addMeta((new autoclass.meta()).setContent("13 January 2014").setName("modified"))
        .addMeta((new autoclass.meta()).setContent("Test of browser ability to map the entire portion of an PixelTexture onto an IndexedFaceSet geometry. Four equal sized red (bottom left), green (bottom right) yellow (top left) and white (top right) squares in the pixel texture map all the faces of the cube.").setName("description"))
        .addMeta((new autoclass.meta()).setContent("http://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_whole.x3d").setName("identifier"))
        .addMeta((new autoclass.meta()).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html").setName("generator"))
        .addMeta((new autoclass.meta()).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit").setName("generator"))
        .addMeta((new autoclass.meta()).setContent("../../license.html").setName("license")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.Viewpoint()).setDescription("Front View"))
        .addChild((new autoclass.Viewpoint()).setDescription("Rear View").setOrientation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(3.14)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-10)])))
        .addChild((new autoclass.Viewpoint()).setDescription("Top View").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(10), java.newFloat(0)])))
        .addChild((new autoclass.Viewpoint()).setDescription("Bottom View").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(-10), java.newFloat(0)])))
        .addChild((new autoclass.Viewpoint()).setDescription("Right View").setOrientation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1.57)])).setPosition(java.newArray("float", [java.newFloat(10), java.newFloat(0), java.newFloat(0)])))
        .addChild((new autoclass.Viewpoint()).setDescription("Left View").setOrientation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("float", [java.newFloat(-10), java.newFloat(0), java.newFloat(0)])))
        .addChild((new autoclass.NavigationInfo()).setType(java.newArray("java.lang.String", ["EXAMINE"])))
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()))
            .setTexture((new autoclass.PixelTexture()).setImage(java.newArray("int", [2,2,4,4278190335,16711935,4294967295,4294902015]))))
          .setGeometry((new autoclass.IndexedFaceSet()).setColorPerVertex(false).setCoordIndex(java.newArray("int", [0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1])).setCreaseAngle(java.newFloat(0.5)).setTexCoordIndex(java.newArray("int", [0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]))
            .setColor((new autoclass.Color()).setColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)])))
            .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(-2), java.newFloat(1), java.newFloat(1), java.newFloat(-2), java.newFloat(-1), java.newFloat(1), java.newFloat(2), java.newFloat(1), java.newFloat(1), java.newFloat(2), java.newFloat(-1), java.newFloat(1), java.newFloat(2), java.newFloat(1), java.newFloat(-1), java.newFloat(2), java.newFloat(-1), java.newFloat(-1), java.newFloat(-2), java.newFloat(1), java.newFloat(-1), java.newFloat(-2), java.newFloat(-1), java.newFloat(-1)])))
            .setTexCoord((new autoclass.TextureCoordinate()).setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1), java.newFloat(1), java.newFloat(0)]))))))      ;
    X3D0.toFileX3D("../data/indexedfaceset_pixeltexture_whole.new.x3d");
