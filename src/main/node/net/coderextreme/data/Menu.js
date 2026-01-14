import java from 'node-java';
import util from 'util';
import autoclass from '../../../X3Dautoclass.js';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
var ProtoInstance0 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("Menu.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("X3D scene with a Switch of Inlines controlled by a menu")))
      .setScene(new autoclass.Scene()
        .addComments((new autoclass.CommentsBlock("Viewpoint and any other scene setup")))
        .addChild(new autoclass.Viewpoint().setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(20), java.newFloat(110)])))
        .addComments((new autoclass.CommentsBlock("Menu prototype declaration")))
        .addChild(new autoclass.ProtoDeclare().setName("Menu")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("menuItems").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY)))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Transform().setDEF("TextMenuTransform").setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(27), java.newFloat(0)]))
                .addChild(new autoclass.TouchSensor().setDEF("MenuTouchSensor"))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                  .setGeometry(new autoclass.Text().setDEF("MenuText")
                    .setIS(new autoclass.IS()
                      .addConnect(new autoclass.connect().setNodeField("string").setProtoField("menuItems")))
                    .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
                  .setGeometry(new autoclass.IndexedFaceSet().setDEF("Backing").setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                    .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(25), java.newFloat(36), java.newFloat(-0.01), java.newFloat(-25), java.newFloat(36), java.newFloat(-0.01), java.newFloat(-25), java.newFloat(-51), java.newFloat(-0.01), java.newFloat(25), java.newFloat(-51), java.newFloat(-0.01)]))))))
              .addChild(new autoclass.Switch().setDEF("SceneSwitcher").setWhichChoice(0)
                .addChild(new autoclass.Inline().setDEF("OPTION1").setUrl(java.newArray("java.lang.String", ["../resources/JinInnerBrowRaiser.x3d","JinInnerBrowRaiser.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION2").setUrl(java.newArray("java.lang.String", ["../resources/JinOuterBrowRaiser.x3d","JinOuterBrowRaiser.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION3").setUrl(java.newArray("java.lang.String", ["../resources/JinBrowLowerer.x3d","JinBrowLowerer.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION4").setUrl(java.newArray("java.lang.String", ["../resources/JinUpperLidRaiser.x3d","JinUpperLidRaiser.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION5").setUrl(java.newArray("java.lang.String", ["../resources/JinCheekRaiser.x3d","JinCheekRaiser.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION6").setUrl(java.newArray("java.lang.String", ["../resources/JinLidTightener.x3d","JinLidTightener.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION7").setUrl(java.newArray("java.lang.String", ["../resources/JinNoseWrinkler.x3d","JinNoseWrinkler.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION8").setUrl(java.newArray("java.lang.String", ["../resources/JinUpperLipRaiser.x3d","JinUpperLipRaiser.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION9").setUrl(java.newArray("java.lang.String", ["../resources/JinNasolabialDeepener.x3d","JinNasolabialDeepener.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION10").setUrl(java.newArray("java.lang.String", ["../resources/JinLipCornerPuller.x3d","JinLipCornerPuller.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION11").setUrl(java.newArray("java.lang.String", ["../resources/JinCheekPuffer.x3d","JinCheekPuffer.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION12").setUrl(java.newArray("java.lang.String", ["../resources/JinDimpler.x3d","JinDimpler.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION13").setUrl(java.newArray("java.lang.String", ["../resources/JinLipCornerDepressor.x3d","JinLipCornerDepressor.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION14").setUrl(java.newArray("java.lang.String", ["../resources/JinLowerLipDepressor.x3d","JinLowerLipDepressor.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION15").setUrl(java.newArray("java.lang.String", ["../resources/JinChinRaiser.x3d","JinChinRaiser.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION16").setUrl(java.newArray("java.lang.String", ["../resources/JinLipPuckerer.x3d","JinLipPuckerer.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION17").setUrl(java.newArray("java.lang.String", ["../resources/JinLipStretcher.x3d","JinLipStretcher.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION18").setUrl(java.newArray("java.lang.String", ["../resources/JinLipFunneler.x3d","JinLipFunneler.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION19").setUrl(java.newArray("java.lang.String", ["../resources/JinLipTightener.x3d","JinLipTightener.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION20").setUrl(java.newArray("java.lang.String", ["../resources/JinLipPressor.x3d","JinLipPressor.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION21").setUrl(java.newArray("java.lang.String", ["../resources/JinLipsPart.x3d","JinLipsPart.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION22").setUrl(java.newArray("java.lang.String", ["../resources/JinJawDrop.x3d","JinJawDrop.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION23").setUrl(java.newArray("java.lang.String", ["../resources/JinMouthStretch.x3d","JinMouthStretch.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION24").setUrl(java.newArray("java.lang.String", ["../resources/JinLipSuck.x3d","JinLipSuck.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION25").setUrl(java.newArray("java.lang.String", ["../resources/JinLidDroop.x3d","JinLidDroop.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION26").setUrl(java.newArray("java.lang.String", ["../resources/JinSlit.x3d","JinSlit.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION27").setUrl(java.newArray("java.lang.String", ["../resources/JinEyesClosed.x3d","JinEyesClosed.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION28").setUrl(java.newArray("java.lang.String", ["../resources/JinSquint.x3d","JinSquint.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION29").setUrl(java.newArray("java.lang.String", ["../resources/JinBlink.x3d","JinBlink.x3d"])))
                .addChild(new autoclass.Inline().setDEF("OPTION30").setUrl(java.newArray("java.lang.String", ["../resources/JinWink.x3d","JinWink.x3d"]))))
              .addComments((new autoclass.CommentsBlock("Script to handle selection logic")))
              .addChild(new autoclass.Script().setDEF("MenuScript")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("menuItems").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("selection").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("touchPoint").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("spacing").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("1.2"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("size").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("2.4"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("menuCenterY").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("itemHeight").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("menuItems").setProtoField("menuItems")))
                .setSourceCode("ecmascript:\n"+
"        function initialize() {\n"+
"          selection = 0;\n"+
"          var spacingBetweenGlyphs = size * spacing - size; // Spacing calculation\n"+
"          var menuHeight = (size + spacingBetweenGlyphs) * menuItems.length;\n"+
"          menuCenterY = menuHeight / 2;\n"+
"          itemHeight = menuHeight / menuItems.length;\n"+
"        }\n"+
"\n"+
"        function touchPoint(value) {\n"+
"          Browser.print(\"Hit \"+value+\" \"+selection+\"
\");\n"+
"          var index = Math.floor((menuCenterY - value.y) / itemHeight - 0.5);\n"+
"\n"+
"          selection = index - 2;\n"+
"          if (selection >= 0 && selection < menuItems.length) {\n"+
"            Browser.print(\"Selected \"+value+\" \"+selection+\" \"+menuItems[selection]+\"
\");\n"+
"          }\n"+
"        }"))
              .addComments((new autoclass.CommentsBlock("ROUTEs to connect everything")))
              .addChild(new autoclass.ROUTE().setFromNode("MenuTouchSensor").setFromField("hitPoint_changed").setToNode("MenuScript").setToField("touchPoint"))
              .addChild(new autoclass.ROUTE().setFromNode("MenuScript").setFromField("selection").setToNode("SceneSwitcher").setToField("whichChoice")))))
        .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("Menu").setDEF("MainMenu")))      ;
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("menuItems").setValue("\"JinInnerBrowRaiser.x3d\" \"JinOuterBrowRaiser.x3d\" \"JinBrowLowerer.x3d\" \"JinUpperLidRaiser.x3d\" \"JinCheekRaiser.x3d\" \"JinLidTightener.x3d\" \"JinNoseWrinkler.x3d\" \"JinUpperLipRaiser.x3d\" \"JinNasolabialDeepener.x3d\" \"JinLipCornerPuller.x3d\" \"JinCheekPuffer.x3d\" \"JinDimpler.x3d\" \"JinLipCornerDepressor.x3d\" \"JinLowerLipDepressor.x3d\" \"JinChinRaiser.x3d\" \"JinLipPuckerer.x3d\" \"JinLipStretcher.x3d\" \"JinLipFunneler.x3d\" \"JinLipTightener.x3d\" \"JinLipPressor.x3d\" \"JinLipsPart.x3d\" \"JinJawDrop.x3d\" \"JinMouthStretch.x3d\" \"JinLipSuck.x3d\" \"JinLidDroop.x3d\" \"JinSlit.x3d\" \"JinEyesClosed.x3d\" \"JinSquint.x3d\" \"JinBlink.x3d\" \"JinWink.x3d\""));
    X3D0.toFileX3D("../data/Menu.new.node.x3d");
    X3D0.toFileJSON("../data/Menu.new.node.x3dj");
    process.exit(0);
