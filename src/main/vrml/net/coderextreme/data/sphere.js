      var X3D0 =  new X3D().setProfile("Interchange").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("sphere.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/sphere.x3d"))
        .addMeta(new meta().setName("description").setContent("a sphere")))
      .setScene(new Scene()
        .addChild(new Group()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(java.newArray("float", [1,1,1]))))
            .setGeometry(new Sphere()))))      ;
    X3D0.toFileX3D("../data/sphere.new.x3d");
