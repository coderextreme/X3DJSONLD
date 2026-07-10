import java from 'node-java';
import util from 'util';
import autoclass from '../../../X3Dautoclass.js';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("Menu.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("X3D scene with a Switch of Inlines controlled by a menu")))
      .setScene(new autoclass.Scene()
        .addComments((new autoclass.CommentsBlock("Viewpoint and any other scene setup")))
        .addChild(new autoclass.Viewpoint().setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(20), java.newFloat(110)])))
        .addChild(new autoclass.Group()
          .addChild(new autoclass.Switch().setDEF("SceneSwitcher").setWhichChoice(0)
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice0")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 0;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 0;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinBlink").setUrl(java.newArray("java.lang.String", ["../resources/JinBlink.x3d","JinBlink.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice1")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 1;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 1;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinBrowLowerer").setUrl(java.newArray("java.lang.String", ["../resources/JinBrowLowerer.x3d","JinBrowLowerer.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice2")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 2;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 2;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinCheekPuffer").setUrl(java.newArray("java.lang.String", ["../resources/JinCheekPuffer.x3d","JinCheekPuffer.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice3")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 3;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 3;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinCheekRaiser").setUrl(java.newArray("java.lang.String", ["../resources/JinCheekRaiser.x3d","JinCheekRaiser.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice4")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 4;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 4;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinChinRaiser").setUrl(java.newArray("java.lang.String", ["../resources/JinChinRaiser.x3d","JinChinRaiser.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice5")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 5;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 5;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinDimpler").setUrl(java.newArray("java.lang.String", ["../resources/JinDimpler.x3d","JinDimpler.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice6")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 6;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 6;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinEyesClosed").setUrl(java.newArray("java.lang.String", ["../resources/JinEyesClosed.x3d","JinEyesClosed.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice7")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 7;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 7;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinInnerBrowRaiser").setUrl(java.newArray("java.lang.String", ["../resources/JinInnerBrowRaiser.x3d","JinInnerBrowRaiser.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice8")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 8;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 8;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinJawDrop").setUrl(java.newArray("java.lang.String", ["../resources/JinJawDrop.x3d","JinJawDrop.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice9")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 9;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 9;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinLidDroop").setUrl(java.newArray("java.lang.String", ["../resources/JinLidDroop.x3d","JinLidDroop.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice10")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 10;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 10;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinLidTightener").setUrl(java.newArray("java.lang.String", ["../resources/JinLidTightener.x3d","JinLidTightener.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice11")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 11;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 11;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinLipCornerDepressor").setUrl(java.newArray("java.lang.String", ["../resources/JinLipCornerDepressor.x3d","JinLipCornerDepressor.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice12")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 12;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 12;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinLipCornerPuller").setUrl(java.newArray("java.lang.String", ["../resources/JinLipCornerPuller.x3d","JinLipCornerPuller.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice13")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 13;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 13;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinLipFunneler").setUrl(java.newArray("java.lang.String", ["../resources/JinLipFunneler.x3d","JinLipFunneler.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice14")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 14;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 14;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinLipPressor").setUrl(java.newArray("java.lang.String", ["../resources/JinLipPressor.x3d","JinLipPressor.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice15")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 15;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 15;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinLipPuckerer").setUrl(java.newArray("java.lang.String", ["../resources/JinLipPuckerer.x3d","JinLipPuckerer.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice16")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 16;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 16;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinLipsPart").setUrl(java.newArray("java.lang.String", ["../resources/JinLipsPart.x3d","JinLipsPart.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice17")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 17;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 17;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinLipStretcher").setUrl(java.newArray("java.lang.String", ["../resources/JinLipStretcher.x3d","JinLipStretcher.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice18")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 18;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 18;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinLipSuck").setUrl(java.newArray("java.lang.String", ["../resources/JinLipSuck.x3d","JinLipSuck.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice19")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 19;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 19;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinLipTightener").setUrl(java.newArray("java.lang.String", ["../resources/JinLipTightener.x3d","JinLipTightener.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice20")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 20;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 20;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinLowerLipDepressor").setUrl(java.newArray("java.lang.String", ["../resources/JinLowerLipDepressor.x3d","JinLowerLipDepressor.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice21")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 21;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 21;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinMouthStretch").setUrl(java.newArray("java.lang.String", ["../resources/JinMouthStretch.x3d","JinMouthStretch.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice22")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 22;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 22;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinNasolabialDeepener").setUrl(java.newArray("java.lang.String", ["../resources/JinNasolabialDeepener.x3d","JinNasolabialDeepener.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice23")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 23;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 23;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinNoseWrinkler").setUrl(java.newArray("java.lang.String", ["../resources/JinNoseWrinkler.x3d","JinNoseWrinkler.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice24")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 24;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 24;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinOuterBrowRaiser").setUrl(java.newArray("java.lang.String", ["../resources/JinOuterBrowRaiser.x3d","JinOuterBrowRaiser.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice25")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 25;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 25;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinSlit").setUrl(java.newArray("java.lang.String", ["../resources/JinSlit.x3d","JinSlit.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice26")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 26;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 26;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinSquint").setUrl(java.newArray("java.lang.String", ["../resources/JinSquint.x3d","JinSquint.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice27")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 27;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 27;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinUpperLidRaiser").setUrl(java.newArray("java.lang.String", ["../resources/JinUpperLidRaiser.x3d","JinUpperLidRaiser.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice28")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 28;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 28;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinUpperLipRaiser").setUrl(java.newArray("java.lang.String", ["../resources/JinUpperLipRaiser.x3d","JinUpperLipRaiser.x3d"]))))
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Script().setDEF("Choice29")
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("touchTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("choice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 29;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 29;\n"+
"      }"))
              .addChild(new autoclass.Inline().setDEF("JinWink").setUrl(java.newArray("java.lang.String", ["../resources/JinWink.x3d","JinWink.x3d"])))))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(63.4), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinBlink").setDEF("JinBlink_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinBlink"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinBlink_Sensor").setFromField("touchTime").setToNode("Choice0").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice0").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(60.4), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinBrowLowerer").setDEF("JinBrowLowerer_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinBrowLowerer"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinBrowLowerer_Sensor").setFromField("touchTime").setToNode("Choice1").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice1").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(57.39999999999999), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinCheekPuffer").setDEF("JinCheekPuffer_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinCheekPuffer"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinCheekPuffer_Sensor").setFromField("touchTime").setToNode("Choice2").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice2").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(54.39999999999999), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinCheekRaiser").setDEF("JinCheekRaiser_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinCheekRaiser"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinCheekRaiser_Sensor").setFromField("touchTime").setToNode("Choice3").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice3").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(51.39999999999999), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinChinRaiser").setDEF("JinChinRaiser_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinChinRaiser"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinChinRaiser_Sensor").setFromField("touchTime").setToNode("Choice4").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice4").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(48.39999999999999), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinDimpler").setDEF("JinDimpler_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinDimpler"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinDimpler_Sensor").setFromField("touchTime").setToNode("Choice5").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice5").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(45.39999999999999), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinEyesClosed").setDEF("JinEyesClosed_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinEyesClosed"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinEyesClosed_Sensor").setFromField("touchTime").setToNode("Choice6").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice6").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(42.39999999999999), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinInnerBrowRaiser").setDEF("JinInnerBrowRaiser_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinInnerBrowRaiser"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinInnerBrowRaiser_Sensor").setFromField("touchTime").setToNode("Choice7").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice7").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(39.39999999999999), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinJawDrop").setDEF("JinJawDrop_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinJawDrop"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinJawDrop_Sensor").setFromField("touchTime").setToNode("Choice8").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice8").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(36.39999999999999), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinLidDroop").setDEF("JinLidDroop_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinLidDroop"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinLidDroop_Sensor").setFromField("touchTime").setToNode("Choice9").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice9").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(33.39999999999999), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinLidTightener").setDEF("JinLidTightener_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinLidTightener"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinLidTightener_Sensor").setFromField("touchTime").setToNode("Choice10").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice10").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(30.399999999999995), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinLipCornerDepressor").setDEF("JinLipCornerDepressor_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinLipCornerDepressor"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinLipCornerDepressor_Sensor").setFromField("touchTime").setToNode("Choice11").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice11").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(27.399999999999995), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinLipCornerPuller").setDEF("JinLipCornerPuller_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinLipCornerPuller"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinLipCornerPuller_Sensor").setFromField("touchTime").setToNode("Choice12").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice12").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(24.399999999999995), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinLipFunneler").setDEF("JinLipFunneler_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinLipFunneler"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinLipFunneler_Sensor").setFromField("touchTime").setToNode("Choice13").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice13").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(21.399999999999995), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinLipPressor").setDEF("JinLipPressor_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinLipPressor"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinLipPressor_Sensor").setFromField("touchTime").setToNode("Choice14").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice14").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(18.4), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinLipPuckerer").setDEF("JinLipPuckerer_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinLipPuckerer"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinLipPuckerer_Sensor").setFromField("touchTime").setToNode("Choice15").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice15").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(15.399999999999997), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinLipsPart").setDEF("JinLipsPart_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinLipsPart"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinLipsPart_Sensor").setFromField("touchTime").setToNode("Choice16").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice16").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(12.399999999999999), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinLipStretcher").setDEF("JinLipStretcher_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinLipStretcher"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinLipStretcher_Sensor").setFromField("touchTime").setToNode("Choice17").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice17").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(9.399999999999999), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinLipSuck").setDEF("JinLipSuck_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinLipSuck"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinLipSuck_Sensor").setFromField("touchTime").setToNode("Choice18").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice18").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(6.399999999999999), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinLipTightener").setDEF("JinLipTightener_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinLipTightener"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinLipTightener_Sensor").setFromField("touchTime").setToNode("Choice19").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice19").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(3.399999999999995), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinLowerLipDepressor").setDEF("JinLowerLipDepressor_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinLowerLipDepressor"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinLowerLipDepressor_Sensor").setFromField("touchTime").setToNode("Choice20").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice20").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(0.399999999999995), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinMouthStretch").setDEF("JinMouthStretch_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinMouthStretch"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinMouthStretch_Sensor").setFromField("touchTime").setToNode("Choice21").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice21").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(-2.6000000000000085), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinNasolabialDeepener").setDEF("JinNasolabialDeepener_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinNasolabialDeepener"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinNasolabialDeepener_Sensor").setFromField("touchTime").setToNode("Choice22").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice22").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(-5.6000000000000085), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinNoseWrinkler").setDEF("JinNoseWrinkler_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinNoseWrinkler"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinNoseWrinkler_Sensor").setFromField("touchTime").setToNode("Choice23").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice23").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(-8.600000000000009), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinOuterBrowRaiser").setDEF("JinOuterBrowRaiser_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinOuterBrowRaiser"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinOuterBrowRaiser_Sensor").setFromField("touchTime").setToNode("Choice24").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice24").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(-11.600000000000009), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinSlit").setDEF("JinSlit_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinSlit"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinSlit_Sensor").setFromField("touchTime").setToNode("Choice25").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice25").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(-14.600000000000001), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinSquint").setDEF("JinSquint_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinSquint"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinSquint_Sensor").setFromField("touchTime").setToNode("Choice26").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice26").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(-17.6), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinUpperLidRaiser").setDEF("JinUpperLidRaiser_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinUpperLidRaiser"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinUpperLidRaiser_Sensor").setFromField("touchTime").setToNode("Choice27").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice27").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(-20.6), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinUpperLipRaiser").setDEF("JinUpperLipRaiser_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinUpperLipRaiser"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinUpperLipRaiser_Sensor").setFromField("touchTime").setToNode("Choice28").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice28").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(48), java.newFloat(-23.599999999999994), java.newFloat(0)]))
            .addChild(new autoclass.TouchSensor().setDescription("TSJinWink").setDEF("JinWink_Sensor"))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["JinWink"]))
                .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(2.4)).setSpacing(java.newFloat(1.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
              .setGeometry(new autoclass.IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(1.3833333333333333), java.newFloat(-0.1), java.newFloat(-20), java.newFloat(-1.616666666666667), java.newFloat(-0.1), java.newFloat(20), java.newFloat(-1.616666666666667), java.newFloat(-0.1)]))))))
          .addChild(new autoclass.ROUTE().setFromNode("JinWink_Sensor").setFromField("touchTime").setToNode("Choice29").setToField("touchTime"))
          .addChild(new autoclass.ROUTE().setFromNode("Choice29").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))))      ;
    X3D0.toFileX3D("../data/MenuJin.new.node.x3d");
    X3D0.toFileJSON("../data/MenuJin.new.node.x3dj");
    process.exit(0);
