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
      .addComments(new CommentsBlock("All head/meta tags are optional, WorldInfo is also optional"))
      .addComments(new CommentsBlock("Text node not supported by X3D Interchange profile, use Immersive profile or Text component level 1"))
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("HelloWorldMinimal.x3d"))
        .addMeta(new meta().setName("description").setContent("Hello World minimal example scene."))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("19 January 2020"))
        .addMeta(new meta().setName("modified").setContent("24 January 2020"))
        .addMeta(new meta().setName("reference").setContent("https://helloworldcollection.de"))
        .addMeta(new meta().setName("reference").setContent("https://en.wiktionary.org/wiki/Hello_World"))
        .addMeta(new meta().setName("reference").setContent("https://en.wikipedia.org/wiki/%22Hello,%20World!%22_program"))
        .addMeta(new meta().setName("reference").setContent("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world"))
        .addMeta(new meta().setName("reference").setContent("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world#X3D_(Extensible_3D)"))
        .addMeta(new meta().setName("reference").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes"))
        .addMeta(new meta().setName("reference").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimalIndex.html"))
        .addMeta(new meta().setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimal.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("HelloWorldMinimal.x3d"))
        .addChild(new Shape()
          .setGeometry(new Text().setString(Java.to(["hello, world"], Java.type("java.lang.String[]"))))))      ;
    X3D0.toFileX3D("../data/HelloWorldMinimal.new.graal.x3d");
    X3D0.toFileJSON("../data/HelloWorldMinimal.new.graal.x3dj");
