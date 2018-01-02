load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Interchange").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("indexedfaceset_pixeltexture_entire.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.nist.gov/vrml.html"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
        .addMeta(new metaObject().setName("creator").setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
        .addMeta(new metaObject().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
        .addMeta(new metaObject().setName("info").setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, http://www.web3d.org/working-groups/x3d"))
        .addMeta(new metaObject().setName("translator").setContent("Michael Kass NIST, Don Brutzman NPS"))
        .addMeta(new metaObject().setName("translated").setContent("21 January 2001"))
        .addMeta(new metaObject().setName("modified").setContent("13 January 2014"))
        .addMeta(new metaObject().setName("description").setContent("Test browser ability to completely map one PixelTexture onto the surface of an IndexedFaceSet geometry. Four colored squares should map onto each face of the IndexedFaceSet. The PixelTexture consists of red quarter (lower left), green quarter (lower right), white quarter (upper left) and yellow quarter (upper right). PixelTexture should map once onto the surface of the IndexedFaceSet, with the S (horizontal) axis of the texture corresponding to the X axis of the geometry."))
        .addMeta(new metaObject().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../../license.html")))
      .setScene(new SceneObject()
        .addChild(new ViewpointObject().setDescription("Front View"))
        .addChild(new ViewpointObject().setDescription("Rear View").setOrientation(Java.to([0,1,0,3.14], Java.type("float[]"))).setPosition(Java.to([0,0,-10], Java.type("float[]"))))
        .addChild(new ViewpointObject().setDescription("Top View").setOrientation(Java.to([1,0,0,-1.57], Java.type("float[]"))).setPosition(Java.to([0,10,0], Java.type("float[]"))))
        .addChild(new ViewpointObject().setDescription("Bottom View").setOrientation(Java.to([1,0,0,1.57], Java.type("float[]"))).setPosition(Java.to([0,-10,0], Java.type("float[]"))))
        .addChild(new ViewpointObject().setDescription("Right View").setOrientation(Java.to([0,1,0,1.57], Java.type("float[]"))).setPosition(Java.to([10,0,0], Java.type("float[]"))))
        .addChild(new ViewpointObject().setDescription("Left View").setOrientation(Java.to([0,1,0,-1.57], Java.type("float[]"))).setPosition(Java.to([-10,0,0], Java.type("float[]"))))
        .addChild(new NavigationInfoObject().setType(Java.to(["EXAMINE","WALK","FLY","ANY"], Java.type("java.lang.String[]"))))
        .addChild(new ShapeObject()
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject())
            .setTexture(new PixelTextureObject().setImage(Java.to([2,2,4,4278190335,16711935,4294967295,4294902015], Java.type("int[]"))).setRepeatS(false).setRepeatT(false)))
          .setGeometry(new IndexedFaceSetObject().setCoordIndex(Java.to([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1], Java.type("int[]")))
            .setCoord(new CoordinateObject().setPoint(Java.to([-2,1.5,1,-2,-1.5,1,2,1.5,1,2,-1.5,1,2,1.5,-1,2,-1.5,-1,-2,1.5,-1,-2,-1.5,-1], Java.type("float[]")))))))      ;
    X3D0.toFileX3D("../data/indexedfaceset_pixeltexture_entire.new.x3d");
