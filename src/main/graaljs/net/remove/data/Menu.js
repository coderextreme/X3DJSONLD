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
var ProtoInstance0 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("Menu.x3d"))
        .addMeta(new meta().setName("description").setContent("X3D scene with a Switch of Inlines controlled by a menu")))
      .setScene(new Scene()
        .addComments(new CommentsBlock("Viewpoint and any other scene setup"))
        .addChild(new Viewpoint().setPosition(Java.to(doubleToFloat([0,20,110]), Java.type("float[]"))))
        .addComments(new CommentsBlock("Menu prototype declaration"))
        .addChild(new ProtoDeclare().setName("Menu")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_MFSTRING).setName("menuItems").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF("TextMenuTransform").setTranslation(Java.to(doubleToFloat([48,27,0]), Java.type("float[]")))
                .addChild(new TouchSensor().setDEF("MenuTouchSensor"))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
                  .setGeometry(new Text().setDEF("MenuText")
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("string").setProtoField("menuItems")))
                    .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
                  .setGeometry(new IndexedFaceSet().setDEF("Backing").setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                    .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([25,36,-0.01,-25,36,-0.01,-25,-51,-0.01,25,-51,-0.01]), Java.type("float[]")))))))
              .addChild(new Switch().setDEF("SceneSwitcher").setWhichChoice(0)
                .addChild(new Inline().setDEF("OPTION1").setUrl(Java.to(["../resources/JinInnerBrowRaiser.x3d","JinInnerBrowRaiser.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION2").setUrl(Java.to(["../resources/JinOuterBrowRaiser.x3d","JinOuterBrowRaiser.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION3").setUrl(Java.to(["../resources/JinBrowLowerer.x3d","JinBrowLowerer.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION4").setUrl(Java.to(["../resources/JinUpperLidRaiser.x3d","JinUpperLidRaiser.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION5").setUrl(Java.to(["../resources/JinCheekRaiser.x3d","JinCheekRaiser.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION6").setUrl(Java.to(["../resources/JinLidTightener.x3d","JinLidTightener.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION7").setUrl(Java.to(["../resources/JinNoseWrinkler.x3d","JinNoseWrinkler.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION8").setUrl(Java.to(["../resources/JinUpperLipRaiser.x3d","JinUpperLipRaiser.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION9").setUrl(Java.to(["../resources/JinNasolabialDeepener.x3d","JinNasolabialDeepener.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION10").setUrl(Java.to(["../resources/JinLipCornerPuller.x3d","JinLipCornerPuller.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION11").setUrl(Java.to(["../resources/JinCheekPuffer.x3d","JinCheekPuffer.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION12").setUrl(Java.to(["../resources/JinDimpler.x3d","JinDimpler.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION13").setUrl(Java.to(["../resources/JinLipCornerDepressor.x3d","JinLipCornerDepressor.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION14").setUrl(Java.to(["../resources/JinLowerLipDepressor.x3d","JinLowerLipDepressor.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION15").setUrl(Java.to(["../resources/JinChinRaiser.x3d","JinChinRaiser.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION16").setUrl(Java.to(["../resources/JinLipPuckerer.x3d","JinLipPuckerer.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION17").setUrl(Java.to(["../resources/JinLipStretcher.x3d","JinLipStretcher.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION18").setUrl(Java.to(["../resources/JinLipFunneler.x3d","JinLipFunneler.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION19").setUrl(Java.to(["../resources/JinLipTightener.x3d","JinLipTightener.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION20").setUrl(Java.to(["../resources/JinLipPressor.x3d","JinLipPressor.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION21").setUrl(Java.to(["../resources/JinLipsPart.x3d","JinLipsPart.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION22").setUrl(Java.to(["../resources/JinJawDrop.x3d","JinJawDrop.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION23").setUrl(Java.to(["../resources/JinMouthStretch.x3d","JinMouthStretch.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION24").setUrl(Java.to(["../resources/JinLipSuck.x3d","JinLipSuck.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION25").setUrl(Java.to(["../resources/JinLidDroop.x3d","JinLidDroop.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION26").setUrl(Java.to(["../resources/JinSlit.x3d","JinSlit.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION27").setUrl(Java.to(["../resources/JinEyesClosed.x3d","JinEyesClosed.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION28").setUrl(Java.to(["../resources/JinSquint.x3d","JinSquint.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION29").setUrl(Java.to(["../resources/JinBlink.x3d","JinBlink.x3d"], Java.type("java.lang.String[]"))))
                .addChild(new Inline().setDEF("OPTION30").setUrl(Java.to(["../resources/JinWink.x3d","JinWink.x3d"], Java.type("java.lang.String[]")))))
              .addComments(new CommentsBlock("Script to handle selection logic"))
              .addChild(new Script().setDEF("MenuScript")
                .addField(new field().setType(field.TYPE_MFSTRING).setName("menuItems").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("selection").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("touchPoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("spacing").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("1.2"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("size").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("2.4"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("menuCenterY").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("itemHeight").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("menuItems").setProtoField("menuItems")))
                .setSourceCode(`ecmascript:
        function initialize() {
          selection = 0;
          var spacingBetweenGlyphs = size * spacing - size; // Spacing calculation
          var menuHeight = (size + spacingBetweenGlyphs) * menuItems.length;
          menuCenterY = menuHeight / 2;
          itemHeight = menuHeight / menuItems.length;
        }

        function touchPoint(value) {
          Browser.print(\"Hit \"+value+\" \"+selection+\"
\");
          var index = Math.floor((menuCenterY - value.y) / itemHeight - 0.5);

          selection = index - 2;
          if (selection >= 0 && selection < menuItems.length) {
            Browser.print(\"Selected \"+value+\" \"+selection+\" \"+menuItems[selection]+\"
\");
          }
        }`))
              .addComments(new CommentsBlock("ROUTEs to connect everything"))
              .addChild(new ROUTE().setFromNode("MenuTouchSensor").setFromField("hitPoint_changed").setToNode("MenuScript").setToField("touchPoint"))
              .addChild(new ROUTE().setFromNode("MenuScript").setFromField("selection").setToNode("SceneSwitcher").setToField("whichChoice")))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("Menu").setDEF("MainMenu")))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("menuItems").setValue("\"JinInnerBrowRaiser.x3d\" \"JinOuterBrowRaiser.x3d\" \"JinBrowLowerer.x3d\" \"JinUpperLidRaiser.x3d\" \"JinCheekRaiser.x3d\" \"JinLidTightener.x3d\" \"JinNoseWrinkler.x3d\" \"JinUpperLipRaiser.x3d\" \"JinNasolabialDeepener.x3d\" \"JinLipCornerPuller.x3d\" \"JinCheekPuffer.x3d\" \"JinDimpler.x3d\" \"JinLipCornerDepressor.x3d\" \"JinLowerLipDepressor.x3d\" \"JinChinRaiser.x3d\" \"JinLipPuckerer.x3d\" \"JinLipStretcher.x3d\" \"JinLipFunneler.x3d\" \"JinLipTightener.x3d\" \"JinLipPressor.x3d\" \"JinLipsPart.x3d\" \"JinJawDrop.x3d\" \"JinMouthStretch.x3d\" \"JinLipSuck.x3d\" \"JinLidDroop.x3d\" \"JinSlit.x3d\" \"JinEyesClosed.x3d\" \"JinSquint.x3d\" \"JinBlink.x3d\" \"JinWink.x3d\""));
    X3D0.toFileX3D("../data/Menu.new.graal.x3d");
    X3D0.toFileJSON("../data/Menu.new.graal.x3dj");
