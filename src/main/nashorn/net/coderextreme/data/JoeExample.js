load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setVersion("3.0").setProfile("Immersive")
      .setHead(new head()
        .addMeta(new meta().setName("filename").setContent("Scripting.x3d")))
      .setScene(new Scene()
        .addChild(new Script().setDEF("OpenVault")
          .addField(new field().setType(field.TYPE_SFTIME).setName("openVault").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("combinationEntered").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType(field.TYPE_SFTIME).setName("vaultUnlocked").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("unlocked").setValue("false").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .setSourceCode("ecmascript:\n"+
"\n"+
"      function combinationEntered (value) {\n"+
"\n"+
"        unlocked = value;\n"+
"\n"+
"      }\n"+
"\n"+
"      function openVault(value) {\n"+
"\n"+
"      if (unlocked) vaultUnlocked = value;\n"+
"\n"+
"      }"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(Java.to([1,0,0], Java.type("double[]")))))
          .setGeometry(new Sphere()))
        .addChild(new Sound().setMaxBack(1000).setMaxFront(1000).setMinBack(1000).setMinFront(1000)
          .setSource(new AudioClip().setDEF("Click").setStopTime(1).setDescription("clicking sound").setUrl(Java.to(["../resources/chandubabamusic1.wav"], Java.type("java.lang.String[]")))))
        .addChild(new TouchSensor().setDEF("TS"))
        .addChild(new ROUTE().setFromNode("TS").setFromField("isOver").setToNode("OpenVault").setToField("combinationEntered"))
        .addChild(new ROUTE().setFromNode("TS").setFromField("touchTime").setToNode("OpenVault").setToField("openVault"))
        .addChild(new ROUTE().setFromNode("OpenVault").setFromField("vaultUnlocked").setToNode("Click").setToField("startTime")))      ;
    X3D0.toFileX3D("../data/JoeExample.new.graal.x3d");