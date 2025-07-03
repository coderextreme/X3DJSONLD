load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array(d);
}
      var X3D0 =  new X3D().setProfile("Interchange").setVersion("3.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("indexedfaceset_pixeltexture_entire.x3d"))
        .addMeta(new meta().setName("reference").setContent("http://www.nist.gov/vrml.html"))
        .addMeta(new meta().setName("reference").setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
        .addMeta(new meta().setName("creator").setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
        .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
        .addMeta(new meta().setName("info").setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
        .addMeta(new meta().setName("translator").setContent("Michael Kass NIST, Don Brutzman NPS"))
        .addMeta(new meta().setName("translated").setContent("21 January 2001"))
        .addMeta(new meta().setName("modified").setContent("13 January 2014"))
        .addMeta(new meta().setName("description").setContent("Test browser ability to completely map one PixelTexture onto the surface of an IndexedFaceSet geometry. Four colored squares should map onto each face of the IndexedFaceSet. The PixelTexture consists of red quarter (lower left), green quarter (lower right), white quarter (upper left) and yellow quarter (upper right). PixelTexture should map once onto the surface of the IndexedFaceSet, with the S (horizontal) axis of the texture corresponding to the X axis of the geometry."))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d"))
        .addMeta(new meta().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../../license.html")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setDescription("Front View"))
        .addChild(new Viewpoint().setDescription("Rear View").setOrientation(Java.to(doubleToFloat([0,1,0,3.14]), Java.type("float[]"))).setPosition(Java.to(doubleToFloat([0,0,-10]), Java.type("float[]"))))
        .addChild(new Viewpoint().setDescription("Top View").setOrientation(Java.to(doubleToFloat([1,0,0,-1.57]), Java.type("float[]"))).setPosition(Java.to(doubleToFloat([0,10,0]), Java.type("float[]"))))
        .addChild(new Viewpoint().setDescription("Bottom View").setOrientation(Java.to(doubleToFloat([1,0,0,1.57]), Java.type("float[]"))).setPosition(Java.to(doubleToFloat([0,-10,0]), Java.type("float[]"))))
        .addChild(new Viewpoint().setDescription("Right View").setOrientation(Java.to(doubleToFloat([0,1,0,1.57]), Java.type("float[]"))).setPosition(Java.to(doubleToFloat([10,0,0]), Java.type("float[]"))))
        .addChild(new Viewpoint().setDescription("Left View").setOrientation(Java.to(doubleToFloat([0,1,0,-1.57]), Java.type("float[]"))).setPosition(Java.to(doubleToFloat([-10,0,0]), Java.type("float[]"))))
        .addChild(new NavigationInfo().setType(Java.to(["EXAMINE","WALK","FLY","ANY"], Java.type("java.lang.String[]"))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material())
            .setTexture(new PixelTexture().setImage(Java.to([2,2,4,0xFF0000FF| 0,16711935,0xFFFFFFFF| 0,0xFFFF00FF| 0], Java.type("int[]"))).setRepeatS(false).setRepeatT(false)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1], Java.type("int[]")))
            .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([-2,1.5,1,-2,-1.5,1,2,1.5,1,2,-1.5,1,2,1.5,-1,2,-1.5,-1,-2,1.5,-1,-2,-1.5,-1]), Java.type("float[]")))))))      ;
    X3D0.toFileX3D(".././indexedfaceset_pixeltexture_entire.new.graal.x3d");
    X3D0.toFileJSON(".././indexedfaceset_pixeltexture_entire.new.graal.json");
