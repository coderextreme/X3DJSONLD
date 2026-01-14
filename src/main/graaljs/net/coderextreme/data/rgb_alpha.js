load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
ConfigurationProperties.setDeleteIntermediateFiles(false);
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array(d);
}
      var X3D0 =  new X3D().setProfile("Interchange").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("rgb_alpha.x3d"))
        .addMeta(new meta().setName("Image").setContent("rgb_alpha-front.jpg"))
        .addMeta(new meta().setName("Image").setContent("rgb_alpha-rear.jpg"))
        .addMeta(new meta().setName("Image").setContent("rgb_alpha-top.jpg"))
        .addMeta(new meta().setName("Image").setContent("rgb_alpha-bottom.jpg"))
        .addMeta(new meta().setName("reference").setContent("http://www.nist.gov/vrml.html"))
        .addMeta(new meta().setName("reference").setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
        .addMeta(new meta().setName("creator").setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
        .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
        .addMeta(new meta().setName("info").setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
        .addMeta(new meta().setName("translator").setContent("Michael Kass NIST, Don Brutzman NPS"))
        .addMeta(new meta().setName("translated").setContent("21 January 2001"))
        .addMeta(new meta().setName("modified").setContent("16 January 2011"))
        .addMeta(new meta().setName("description").setContent("Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box."))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d"))
        .addMeta(new meta().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../../license.html")))
      .setScene(new Scene()
        .addChild(new NavigationInfo().setType(Java.to(["EXAMINE","WALK","FLY","ANY"], Java.type("java.lang.String[]"))))
        .addChild(new Group()
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([6.14221,0.0694613,-0.000999451]), Java.type("float[]")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material())
                .setTexture(new PixelTexture().setDEF("RgbOpacityCheckerboard").setImage(Java.to([2,2,4,0xFF0000FF| 0,0xFFFF0000| 0,0xFFFF0000| 0,0xFF0000FF| 0], Java.type("int[]")))))
              .setGeometry(new Box())))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([-4.85443,0.0694381,-0.00149918]), Java.type("float[]")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material())
                .setTexture(new PixelTexture().setUSE("RgbOpacityCheckerboard")))
              .setGeometry(new Sphere())))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([-1.47341,0.036672,-0.00175095]), Java.type("float[]")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material())
                .setTexture(new PixelTexture().setUSE("RgbOpacityCheckerboard")))
              .setGeometry(new Cone())))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([2.31094,0.0694206,-0.00187683]), Java.type("float[]")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material())
                .setTexture(new PixelTexture().setUSE("RgbOpacityCheckerboard")))
              .setGeometry(new Cylinder())))))      ;
    X3D0.toFileX3D("../data/rgb_alpha.new.graal.x3d");
    X3D0.toFileJSON("../data/rgb_alpha.new.graal.x3dj");
