load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("creator").setContent("John W Carlson"))
        .addMeta(new metaObject().setName("created").setContent("December 13 2015"))
        .addMeta(new metaObject().setName("title").setContent("force.x3d"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/force.x3d"))
        .addMeta(new metaObject().setName("description").setContent("beginnings of a force directed graph in 3D"))
        .addMeta(new metaObject().setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setScene(new SceneObject()
        .addChild(new GroupObject()
          .addChild(new ShapeObject()
            .setGeometry(new ExtrusionObject().setDEF("extrusion").setSpine(Java.to([-50,-50,0,50,50,0], Java.type("float[]"))).setCreaseAngle(0.785).setCrossSection(Java.to([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0], Java.type("float[]"))))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0,1,0], Java.type("float[]"))))))
          .addChild(new TimeSensorObject().setDEF("TourTime").setLoop(true))
          .addChild(new ScriptObject().setDEF("MoveCylinder")
            .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_cycle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("spine").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("-50 -50 0 50 50 0"))
            .setSourceCode("ecmascript:\n"+
"\n"+
"                function set_cycle(value) {\n"+
"                        Browser.print(value);\n"+
"                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);\n"+
"                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);\n"+
"		        spine = new MFVec3f([endA, endB]);\n"+
"                }\n"+
""))
          .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("MoveCylinder").setToField("set_cycle"))
          .addChild(new ROUTEObject().setFromNode("MoveCylinder").setFromField("spine_changed").setToNode("extrusion").setToField("spine"))))      ;
    X3D0.toFileX3D("../data/extrusion.new.x3d");
