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
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("TextExamples.x3d"))
        .addMeta(new meta().setName("description").setContent("Show different escape-character text examples for embedded quotation marks."))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("7 April 2001"))
        .addMeta(new meta().setName("modified").setContent("26 April 2016"))
        .addMeta(new meta().setName("warning").setContent("Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control."))
        .addMeta(new meta().setName("warning").setContent("Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations."))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,2,0]), Java.type("float[]")))
          .addChild(new Shape()
            .setGeometry(new Text().setString(Java.to(["Compare special character escaping"], Java.type("java.lang.String[]")))
              .setFontStyle(new FontStyle().setDEF("testFontStyle").setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))).setSize(0.8)))
            .setAppearance(new Appearance().setDEF("LightBlueAppearance")
              .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.1,0.7,0.7]), Java.type("float[]")))))))
        .addChild(new Transform().setTranslation(Java.to(doubleToFloat([-3,0,0]), Java.type("float[]")))
          .addChild(new Shape()
            .setGeometry(new Text().setString(Java.to(["I don't think so","","he said \"Hi\""], Java.type("java.lang.String[]")))
              .setFontStyle(new FontStyle().setUSE("testFontStyle")))
            .setAppearance(new Appearance().setUSE("LightBlueAppearance"))))
        .addChild(new Transform().setTranslation(Java.to(doubleToFloat([3,0,0]), Java.type("float[]")))
          .addChild(new Shape()
            .setGeometry(new Text().setString(Java.to(["I don't think so","","he said \"Hi\""], Java.type("java.lang.String[]")))
              .setFontStyle(new FontStyle().setUSE("testFontStyle")))
            .setAppearance(new Appearance().setUSE("LightBlueAppearance")))))      ;
    X3D0.toFileX3D("../data/TextExamples.new.graal.x3d");
    X3D0.toFileJSON("../data/TextExamples.new.graal.x3dj");
