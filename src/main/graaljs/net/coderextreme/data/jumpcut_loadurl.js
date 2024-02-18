load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array([d])[0];
}
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("jumpcut_loadurl.x3d"))
        .addMeta(new meta().setName("reference").setContent("http://www.nist.gov/vrml.html"))
        .addMeta(new meta().setName("reference").setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
        .addMeta(new meta().setName("creator").setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
        .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
        .addMeta(new meta().setName("info").setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
        .addMeta(new meta().setName("translator").setContent("Michael Kass NIST, Don Brutzman NPS"))
        .addMeta(new meta().setName("translated").setContent("21 January 2001"))
        .addMeta(new meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new meta().setName("description").setContent("Test jumpcut Viewpoint transition using Script loadUrl method. A NavigationInfo type of ANY is NOT included in the NavigationInfo node field in this world. Consequently, a Script node with a call to the \"loadURL\" method, with a url corresponding to the MFString \"Top_View\" (the name of a Viewpoint in this world) should create a \"jump cut\" transition of views when the Box geometry in this world is indicated by the pointing device. As a result, indicating the Box geometry should result in a Viewpoint transition to the top view of the Box geometry."))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d"))
        .addMeta(new meta().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("jumpcut_loadurl.x3d"))
        .addChild(new Background().setGroundAngle(Java.to([doubleToFloat(1.57)], Java.type("float[]"))).setGroundColor(Java.to([doubleToFloat(0),doubleToFloat(0.5),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0.5),doubleToFloat(0)], Java.type("float[]"))).setSkyColor(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(1)], Java.type("float[]"))))
        .addChild(new NavigationInfo().setType(Java.to(["EXAMINE","WALK","FLY","ANY"], Java.type("java.lang.String[]"))))
        .addChild(new Viewpoint().setDEF("Front_View").setDescription("Front View"))
        .addChild(new Viewpoint().setDEF("Top_View").setDescription("Top View").setOrientation(Java.to([doubleToFloat(1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(-1.57)], Java.type("float[]"))).setPosition(Java.to([doubleToFloat(0),doubleToFloat(10),doubleToFloat(0)], Java.type("float[]"))))
        .addChild(new TouchSensor().setDEF("STARTER").setDescription("touch to activate"))
        .addChild(new Transform().setDEF("ROOT")
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material()))
            .setGeometry(new Box())))
        .addChild(new Script().setDEF("MYSCRIPT").setUrl(Java.to(["jumpcut_loadurl.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.js"], Java.type("java.lang.String[]")))
          .addField(new field().setType(field.TYPE_MFSTRING).setName("myParameter").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("\"Top_View\""))
          .addField(new field().setType(field.TYPE_MFSTRING).setName("myUrl").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("\"jumpcut_loadurl.x3d#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d#Top_View\" \"jumpcut_loadurl.wrl#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.wrl#Top_View\""))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("trigger_event").setAccessType(field.ACCESSTYPE_INPUTONLY)))
        .addChild(new ROUTE().setFromField("isActive").setFromNode("STARTER").setToField("trigger_event").setToNode("MYSCRIPT")))      ;
    X3D0.toFileX3D("../data/jumpcut_loadurl.new.graal.x3d");
    X3D0.toFileJSON("../data/jumpcut_loadurl.new.graal.json");
