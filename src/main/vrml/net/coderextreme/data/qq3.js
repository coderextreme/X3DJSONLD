var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("qq3.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("translator").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("11 Jan 2015"))
        .addMeta(new meta().setName("modified").setContent("05 May 2017"))
        .addMeta(new meta().setName("description").setContent("12 extrusions to test prototype expander"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/x3d/qq3.x3d"))
        .addMeta(new meta().setName("generator").setContent("manual")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("Process")
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addComments(new CommentsBlock("left"))
              .addChild(new Transform().setScale(java.newArray("float", [0.5,0.5,0.5]))
                .addChild(new Shape().setDEF("ShapeLeftDown")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0.7,1,0]))))
                  .setGeometry(new Extrusion().setSpine(java.newArray("float", [-2.5,0,0,-1.5,0,0])).setCreaseAngle(0.785).setCrossSection(java.newArray("float", [1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])))))
              .addComments(new CommentsBlock("right"))
              .addChild(new Transform().setScale(java.newArray("float", [0.5,0.5,0.5]))
                .addChild(new Shape().setDEF("ShapeUpRight")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0,0.7,1]))))
                  .setGeometry(new Extrusion().setSpine(java.newArray("float", [1.5,0,0,2.5,0,0])).setCreaseAngle(0.785).setCrossSection(java.newArray("float", [1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])))))
              .addComments(new CommentsBlock("up"))
              .addChild(new Transform().setScale(java.newArray("float", [0.5,0.5,0.5]))
                .addChild(new Shape().setUSE("ShapeUpRight")))
              .addComments(new CommentsBlock("down"))
              .addChild(new Transform().setScale(java.newArray("float", [0.5,0.5,0.5]))
                .addChild(new Shape().setUSE("ShapeLeftDown"))))))
        .addChild(new Viewpoint().setDescription("Process pipes").setOrientation(java.newArray("float", [1,0,0,-0.4])).setPosition(java.newArray("float", [0,5,12])))
        .addChild(new Transform().setTranslation(java.newArray("float", [0,-2.5,0]))
          .addChild(ProtoInstance0 = new ProtoInstance().setName("Process")))
        .addChild(new Transform()
          .addChild(ProtoInstance1 = new ProtoInstance().setName("Process")))
        .addChild(new Transform().setTranslation(java.newArray("float", [0,2.5,0]))
          .addChild(ProtoInstance2 = new ProtoInstance().setName("Process"))))      ;
    X3D0.toFileX3D("../data/qq3.new.x3d");