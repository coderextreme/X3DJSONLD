load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Interchange").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("indexedfaceset_pixeltexture_whole.x3d"))
        .addMeta(new meta().setName("warning").setContent("file did not transform to vrml97"))
        .addMeta(new meta().setName("Image").setContent("indexedfaceset_pixeltexture_whole-front.jpg"))
        .addMeta(new meta().setName("Image").setContent("indexedfaceset_pixeltexture_whole-rear.jpg"))
        .addMeta(new meta().setName("Image").setContent("indexedfaceset_pixeltexture_whole-top.jpg"))
        .addMeta(new meta().setName("Image").setContent("indexedfaceset_pixeltexture_whole-bottom.jpg"))
        .addMeta(new meta().setName("Image").setContent("indexedfaceset_pixeltexture_whole-left.jpg"))
        .addMeta(new meta().setName("Image").setContent("indexedfaceset_pixeltexture_whole-right.jpg"))
        .addMeta(new meta().setName("reference").setContent("http://www.nist.gov/vrml.html"))
        .addMeta(new meta().setName("reference").setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
        .addMeta(new meta().setName("creator").setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
        .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
        .addMeta(new meta().setName("info").setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
        .addMeta(new meta().setName("translator").setContent("Michael Kass NIST, Don Brutzman NPS"))
        .addMeta(new meta().setName("translated").setContent("21 January 2001"))
        .addMeta(new meta().setName("modified").setContent("Sat, 30 Dec 2023 07:46:47 GMT"))
        .addMeta(new meta().setName("description").setContent("Test of browser ability to map the entire portion of an PixelTexture onto an IndexedFaceSet geometry. Four equal sized red (bottom left), green (bottom right) yellow (top left) and white (top right) squares in the pixel texture map all the faces of the cube."))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_whole.x3d"))
        .addMeta(new meta().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setDescription("Front View"))
        .addChild(new Viewpoint().setDescription("Rear View").setPosition(Java.to([0f,0f,-10f], Java.type("float[]"))).setOrientation(Java.to([0f,1f,0f,3.14f], Java.type("float[]"))))
        .addChild(new Viewpoint().setDescription("Top View").setPosition(Java.to([0f,10f,0f], Java.type("float[]"))).setOrientation(Java.to([1f,0f,0f,-1.57f], Java.type("float[]"))))
        .addChild(new Viewpoint().setDescription("Bottom View").setPosition(Java.to([0f,-10f,0f], Java.type("float[]"))).setOrientation(Java.to([1f,0f,0f,1.57f], Java.type("float[]"))))
        .addChild(new Viewpoint().setDescription("Right View").setPosition(Java.to([10f,0f,0f], Java.type("float[]"))).setOrientation(Java.to([0f,1f,0f,1.57f], Java.type("float[]"))))
        .addChild(new Viewpoint().setDescription("Left View").setPosition(Java.to([-10f,0f,0f], Java.type("float[]"))).setOrientation(Java.to([0f,1f,0f,-1.57f], Java.type("float[]"))))
        .addChild(new NavigationInfo().setType(Java.to(["EXAMINE"], Java.type("java.lang.String[]"))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material())
            .setTexture(new PixelTexture().setImage(Java.to([2,2,4,4278190335,16711935,4294967295,4294902015], Java.type("int[]")))))
          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f).setColorPerVertex(false).setTexCoordIndex(Java.to([0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1], Java.type("int[]"))).setCoordIndex(Java.to([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1], Java.type("int[]")))
            .setColor(new Color().setColor(Java.to([0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f], Java.type("float[]"))))
            .setTexCoord(new TextureCoordinate().setPoint(Java.to([0f,1f,0f,0f,1f,1f,1f,0f], Java.type("float[]"))))
            .setCoord(new Coordinate().setPoint(Java.to([-2f,1f,1f,-2f,-1f,1f,2f,1f,1f,2f,-1f,1f,2f,1f,-1f,2f,-1f,-1f,-2f,1f,-1f,-2f,-1f,-1f], Java.type("float[]")))))))      ;
    X3D0.toFileX3D("../data/indexedfaceset_pixeltexture_whole.new.graal.x3d");
    X3D0.toFileJSON("../data/indexedfaceset_pixeltexture_whole.new.graal.json");
