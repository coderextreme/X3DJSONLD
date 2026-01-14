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
        .addMeta(new meta().setName("creator").setContent("John W Carlson"))
        .addMeta(new meta().setName("created").setContent("December 13 2015"))
        .addMeta(new meta().setName("modified").setContent("November 9 2024"))
        .addMeta(new meta().setName("title").setContent("myextrusion.x3d"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d"))
        .addMeta(new meta().setName("description").setContent("beginnings of a force directed graph in 3D"))
        .addMeta(new meta().setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new Group()
          .addChild(new Shape()
            .setGeometry(new Extrusion().setDEF("myextrusion").setSpine(Java.to(doubleToFloat([-50,-50,0,50,50,0]), Java.type("float[]"))).setCreaseAngle(0.785).setCrossSection(Java.to(doubleToFloat([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]), Java.type("float[]"))))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,1,0]), Java.type("float[]"))))))
          .addChild(new TimeSensor().setDEF("TourTime").setLoop(true))
          .addChild(new Script().setDEF("MoveCylinder")
            .addField(new field().setType(field.TYPE_SFTIME).setName("set_cycle").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType(field.TYPE_MFVEC3F).setName("spine").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("-50 -50 0 50 50 0"))
            .setSourceCode(`ecmascript:

                function set_cycle(value) {
                        Browser.print(value);
                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);
                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);
                        var tmpspine = new MFVec3f();
			tmpspine[0] = endA;
			tmpspine[1] = endB;
                        spine = tmpspine;
                }`))
          .addChild(new ROUTE().setFromNode("TourTime").setFromField("cycleTime").setToNode("MoveCylinder").setToField("set_cycle"))
          .addChild(new ROUTE().setFromNode("MoveCylinder").setFromField("spine_changed").setToNode("myextrusion").setToField("set_spine"))))      ;
    X3D0.toFileX3D("../data/myextrusion.new.graal.x3d");
    X3D0.toFileJSON("../data/myextrusion.new.graal.x3dj");
