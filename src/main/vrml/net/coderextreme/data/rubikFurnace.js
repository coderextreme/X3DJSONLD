var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
var ProtoInstance4 = null;
var ProtoInstance5 = null;
var ProtoInstance6 = null;
var ProtoInstance7 = null;
var ProtoInstance8 = null;
var ProtoInstance9 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("rubikFurnace.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/rubikFurnace.x3d"))
        .addMeta(new meta().setName("description").setContent("a green rubik cube")))
      .setScene(new Scene()
        .addChild(new NavigationInfo().setType(java.newArray("java.lang.String", ["EXAMINE"])))
        .addChild(new Viewpoint().setDescription("Rubiks Cube on Fire").setPosition(java.newArray("float", [0,0,12])))
        .addChild(new ProtoDeclare().setName("anyShape")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("xtranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_MFNODE).setName("myShape").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Shape()
                .setGeometry(new Sphere())
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(java.newArray("float", [1,1,1])))))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("xtranslation"))
                .addConnect(new connect().setNodeField("children").setProtoField("myShape"))))))
        .addChild(new ProtoDeclare().setName("three")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("ytranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_MFNODE).setName("myShape").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Shape()
                .setGeometry(new Sphere())
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(java.newArray("float", [1,1,1])))))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("ytranslation")))
              .addChild(ProtoInstance0 = new ProtoInstance().setName("anyShape")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance1 = new ProtoInstance().setName("anyShape")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance2 = new ProtoInstance().setName("anyShape")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape")))))))
        .addChild(new ProtoDeclare().setName("nine")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("ztranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_MFNODE).setName("myShape").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Shape()
                .setGeometry(new Sphere())
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(java.newArray("float", [1,1,1])))))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("ztranslation")))
              .addChild(ProtoInstance3 = new ProtoInstance().setName("three")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance4 = new ProtoInstance().setName("three")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance5 = new ProtoInstance().setName("three")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape")))))))
        .addChild(new ProtoDeclare().setName("twentyseven")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("ttranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_MFNODE).setName("myShape").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Shape()
                .setGeometry(new Sphere())
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(java.newArray("float", [1,1,1])))))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("ttranslation")))
              .addChild(ProtoInstance6 = new ProtoInstance().setName("nine")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance7 = new ProtoInstance().setName("nine")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance8 = new ProtoInstance().setName("nine")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape")))))))
        .addChild(ProtoInstance9 = new ProtoInstance().setName("twentyseven")))      ;
ProtoInstance0
                .addFieldValue(new fieldValue().setName("xtranslation").setValue("0 0 0"));
ProtoInstance1
                .addFieldValue(new fieldValue().setName("xtranslation").setValue("2 0 0"));
ProtoInstance2
                .addFieldValue(new fieldValue().setName("xtranslation").setValue("-2 0 0"));
ProtoInstance3
                .addFieldValue(new fieldValue().setName("ytranslation").setValue("0 0 0"));
ProtoInstance4
                .addFieldValue(new fieldValue().setName("ytranslation").setValue("0 2 0"));
ProtoInstance5
                .addFieldValue(new fieldValue().setName("ytranslation").setValue("0 -2 0"));
ProtoInstance6
                .addFieldValue(new fieldValue().setName("ztranslation").setValue("0 0 0"));
ProtoInstance7
                .addFieldValue(new fieldValue().setName("ztranslation").setValue("0 0 2"));
ProtoInstance8
                .addFieldValue(new fieldValue().setName("ztranslation").setValue("0 0 -2"));
ProtoInstance9
          .addFieldValue(new fieldValue().setName("ttranslation").setValue("0 0 0"));
ProtoInstance9
          .addFieldValue(new fieldValue().setName("myShape")
            .addChild(new Shape()
              .setGeometry(new Box().setSize(java.newArray("float", [1,1,1])))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0,1,0]))))));
    X3D0.toFileX3D("../data/rubikFurnace.new.x3d");