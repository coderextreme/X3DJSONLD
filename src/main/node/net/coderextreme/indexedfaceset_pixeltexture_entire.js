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
ConfigurationProperties.setStripDefaultAttributes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Interchange").setVersion("3.0")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("indexedfaceset_pixeltexture_entire.x3d"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://www.nist.gov/vrml.html"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
        .addMeta(new autoclass.meta().setName("creator").setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
        .addMeta(new autoclass.meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
        .addMeta(new autoclass.meta().setName("info").setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
        .addMeta(new autoclass.meta().setName("translator").setContent("Michael Kass NIST, Don Brutzman NPS"))
        .addMeta(new autoclass.meta().setName("translated").setContent("21 January 2001"))
        .addMeta(new autoclass.meta().setName("modified").setContent("13 January 2014"))
        .addMeta(new autoclass.meta().setName("description").setContent("Test browser ability to completely map one PixelTexture onto the surface of an IndexedFaceSet geometry. Four colored squares should map onto each face of the IndexedFaceSet. The PixelTexture consists of red quarter (lower left), green quarter (lower right), white quarter (upper left) and yellow quarter (upper right). PixelTexture should map once onto the surface of the IndexedFaceSet, with the S (horizontal) axis of the texture corresponding to the X axis of the geometry."))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d"))
        .addMeta(new autoclass.meta().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new autoclass.meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new autoclass.meta().setName("license").setContent("../../license.html")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.Viewpoint().setDescription("Front View"))
        .addChild(new autoclass.Viewpoint().setDescription("Rear View").setOrientation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(3.14)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-10)])))
        .addChild(new autoclass.Viewpoint().setDescription("Top View").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(10), java.newFloat(0)])))
        .addChild(new autoclass.Viewpoint().setDescription("Bottom View").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(-10), java.newFloat(0)])))
        .addChild(new autoclass.Viewpoint().setDescription("Right View").setOrientation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1.57)])).setPosition(java.newArray("float", [java.newFloat(10), java.newFloat(0), java.newFloat(0)])))
        .addChild(new autoclass.Viewpoint().setDescription("Left View").setOrientation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("float", [java.newFloat(-10), java.newFloat(0), java.newFloat(0)])))
        .addChild(new autoclass.NavigationInfo().setType(java.newArray("java.lang.String", ["EXAMINE","WALK","FLY","ANY"])))
        .addChild(new autoclass.Shape()
          .setAppearance(new autoclass.Appearance()
            .setMaterial(new autoclass.Material())
            .setTexture(new autoclass.PixelTexture().setImage(java.newArray("int", [2,2,4,4278190335,16711935,4294967295,4294902015])).setRepeatS(false).setRepeatT(false)))
          .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]))
            .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(-2), java.newFloat(1.5), java.newFloat(1), java.newFloat(-2), java.newFloat(-1.5), java.newFloat(1), java.newFloat(2), java.newFloat(1.5), java.newFloat(1), java.newFloat(2), java.newFloat(-1.5), java.newFloat(1), java.newFloat(2), java.newFloat(1.5), java.newFloat(-1), java.newFloat(2), java.newFloat(-1.5), java.newFloat(-1), java.newFloat(-2), java.newFloat(1.5), java.newFloat(-1), java.newFloat(-2), java.newFloat(-1.5), java.newFloat(-1)]))))))      ;
    X3D0.toFileX3D(".././indexedfaceset_pixeltexture_entire.new.node.x3d");
    X3D0.toFileJSON(".././indexedfaceset_pixeltexture_entire.new.node.json");
    process.exit(0);
