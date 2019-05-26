      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("creator").setContent("John W Carlson"))
        .addMeta(new meta().setName("created").setContent("December 13 2015"))
        .addMeta(new meta().setName("title").setContent("force.x3d"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/force.x3d"))
        .addMeta(new meta().setName("description").setContent("beginnings of a force directed graph in 3D"))
        .addMeta(new meta().setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new Group()
          .addChild(new Shape()
            .setGeometry(new Extrusion().setDEF("extrusion").setSpine(java.newArray("float", [-50,-50,0,50,50,0])).setCreaseAngle(0.785).setCrossSection(java.newArray("float", [1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0,1,0])))))
          .addChild(new TimeSensor().setDEF("TourTime").setLoop(true))
          .addChild(new Script().setDEF("MoveCylinder")
            .addField(new field().setType(field.TYPE_SFTIME).setName("set_cycle").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType(field.TYPE_MFVEC3F).setName("spine").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("-50 -50 0 50 50 0"))
            .setSourceCode("ecmascript:\n"+
"\n"+
"                function set_cycle(value) {\n"+
"                        Browser.print(value);\n"+
"                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);\n"+
"                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);\n"+
"		        spine = new MFVec3f([endA, endB]);\n"+
"                }"))
          .addChild(new ROUTE().setFromNode("TourTime").setFromField("cycleTime").setToNode("MoveCylinder").setToField("set_cycle"))
          .addChild(new ROUTE().setFromNode("MoveCylinder").setFromField("spine_changed").setToNode("extrusion").setToField("spine"))))      ;
    X3D0.toFileX3D("../data/extrusion.new.x3d");
