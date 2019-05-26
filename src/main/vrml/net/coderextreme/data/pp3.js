var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("pp3.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("translator").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("5 May 2015"))
        .addMeta(new meta().setName("modified").setContent("05 May 2017"))
        .addMeta(new meta().setName("description").setContent("A process pipeline between three spheres (try typing on spheres and blue"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/x3d/pp3.x3d"))
        .addMeta(new meta().setName("generator").setContent("manual")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("Process")
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addComments(new CommentsBlock("left"))
              .addChild(new Transform().setScale(java.newArray("float", [0.5,0.5,0.5]))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0.7,1,0])).setTransparency(0.5)))
                  .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(java.newArray("float", [1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])).setSpine(java.newArray("float", [-2.5,0,0,-1.5,0,0]))))
                .addComments(new CommentsBlock("<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>")))
              .addComments(new CommentsBlock("right"))
              .addChild(new Transform().setScale(java.newArray("float", [0.5,0.5,0.5]))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0,0.7,1])).setTransparency(0.5)))
                  .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(java.newArray("float", [1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])).setSpine(java.newArray("float", [1.5,0,0,2.5,0,0]))))
                .addChild(new Transform().setTranslation(java.newArray("float", [2,0,0]))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDEF("MaterialLightBlue").setDiffuseColor(java.newArray("float", [1,1,1]))))
                    .setGeometry(new Text().setDEF("RightString").setString(java.newArray("java.lang.String", ["r"])))))
                .addChild(new StringSensor().setDEF("RightSensor").setEnabled(false))
                .addChild(new TouchSensor().setDescription("touch to activate").setDEF("RightTouch")))
              .addComments(new CommentsBlock("up"))
              .addChild(new Transform().setScale(java.newArray("float", [0.5,0.5,0.5]))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0,0.7,1])).setTransparency(0.5)))
                  .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(java.newArray("float", [1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])).setSpine(java.newArray("float", [0,1.5,0,0,2.5,0]))))
                .addChild(new Transform().setTranslation(java.newArray("float", [-0.5,2,0]))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("MaterialLightBlue")))
                    .setGeometry(new Text().setDEF("UpString").setString(java.newArray("java.lang.String", ["u"])))))
                .addChild(new StringSensor().setDEF("UpSensor").setEnabled(false))
                .addChild(new TouchSensor().setDescription("touch to activate").setDEF("UpTouch")))
              .addComments(new CommentsBlock("down"))
              .addChild(new Transform().setScale(java.newArray("float", [0.5,0.5,0.5]))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0.7,1,0])).setTransparency(0.5)))
                  .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(java.newArray("float", [1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])).setSpine(java.newArray("float", [0,-2.5,0,0,-1.5,0]))))
                .addComments(new CommentsBlock("<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>")))
              .addComments(new CommentsBlock("center"))
              .addChild(new Transform()
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(java.newArray("float", [1,0,0.7]))))
                  .setGeometry(new Sphere()))
                .addChild(new Transform().setScale(java.newArray("float", [0.5,0.5,0.5])).setTranslation(java.newArray("float", [-0.5,0,1]))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("MaterialLightBlue")))
                    .setGeometry(new Text().setDEF("CenterString"))))
                .addChild(new StringSensor().setDEF("CenterSensor").setEnabled(false))
                .addChild(new TouchSensor().setDescription("touch to activate").setDEF("CenterTouch"))))
            .addChild(new Script().setDEF("RightSingleToMultiString")
              .addField(new field().setType(field.TYPE_SFSTRING).setName("set_rightstring").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType(field.TYPE_MFSTRING).setName("rightlines").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	rightlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_rightstring(rightstr) {\n"+
"	rightlines = new MFString(rightstr);\n"+
"}"))
            .addChild(new Script().setDEF("UpSingleToMultiString")
              .addField(new field().setType(field.TYPE_SFSTRING).setName("set_upstring").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType(field.TYPE_MFSTRING).setName("uplines").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	uplines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_upstring(upstr) {\n"+
"	uplines = new MFString(upstr);\n"+
"}"))
            .addChild(new Script().setDEF("CenterSingleToMultiString")
              .addField(new field().setType(field.TYPE_SFSTRING).setName("set_centerstring").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType(field.TYPE_MFSTRING).setName("centerlines").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	centerlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_centerstring(centerstr) {\n"+
"	centerlines = new MFString(centerstr);\n"+
"}"))
            .addChild(new ROUTE().setFromField("enteredText").setFromNode("CenterSensor").setToField("set_centerstring").setToNode("CenterSingleToMultiString"))
            .addChild(new ROUTE().setFromField("centerlines").setFromNode("CenterSingleToMultiString").setToField("set_string").setToNode("CenterString"))
            .addChild(new ROUTE().setFromField("isOver").setFromNode("CenterTouch").setToField("set_enabled").setToNode("CenterSensor"))
            .addChild(new ROUTE().setFromField("enteredText").setFromNode("RightSensor").setToField("set_rightstring").setToNode("RightSingleToMultiString"))
            .addChild(new ROUTE().setFromField("rightlines").setFromNode("RightSingleToMultiString").setToField("set_string").setToNode("RightString"))
            .addChild(new ROUTE().setFromField("isOver").setFromNode("RightTouch").setToField("set_enabled").setToNode("RightSensor"))
            .addChild(new ROUTE().setFromField("enteredText").setFromNode("UpSensor").setToField("set_upstring").setToNode("UpSingleToMultiString"))
            .addChild(new ROUTE().setFromField("uplines").setFromNode("UpSingleToMultiString").setToField("set_string").setToNode("UpString"))
            .addChild(new ROUTE().setFromField("isOver").setFromNode("UpTouch").setToField("set_enabled").setToNode("UpSensor"))))
        .addChild(new NavigationInfo())
        .addChild(new Viewpoint().setDescription("Process pipes").setOrientation(java.newArray("float", [1,0,0,-0.4])).setPosition(java.newArray("float", [0,5,12])))
        .addChild(new Transform().setTranslation(java.newArray("float", [0,-2.5,0]))
          .addChild(ProtoInstance0 = new ProtoInstance().setName("Process")))
        .addChild(new Transform()
          .addChild(ProtoInstance1 = new ProtoInstance().setName("Process")))
        .addChild(new Transform().setTranslation(java.newArray("float", [0,2.5,0]))
          .addChild(ProtoInstance2 = new ProtoInstance().setName("Process"))))      ;
    X3D0.toFileX3D("../data/pp3.new.x3d");
