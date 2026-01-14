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
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("Menu.x3d"))
        .addMeta(new meta().setName("description").setContent("X3D scene with a Switch of Inlines controlled by a menu")))
      .setScene(new Scene()
        .addComments(new CommentsBlock("Viewpoint and any other scene setup"))
        .addChild(new Viewpoint().setPosition(Java.to(doubleToFloat([0,20,110]), Java.type("float[]"))))
        .addChild(new Group()
          .addChild(new Switch().setDEF("SceneSwitcher").setWhichChoice(0)
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice0")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 0;
      }
      function touchTime(value) {
          choice = 0;
      }`))
              .addChild(new Inline().setDEF("JinBlink").setUrl(Java.to(["../resources/JinBlink.x3d","JinBlink.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice1")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 1;
      }
      function touchTime(value) {
          choice = 1;
      }`))
              .addChild(new Inline().setDEF("JinBrowLowerer").setUrl(Java.to(["../resources/JinBrowLowerer.x3d","JinBrowLowerer.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice2")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 2;
      }
      function touchTime(value) {
          choice = 2;
      }`))
              .addChild(new Inline().setDEF("JinCheekPuffer").setUrl(Java.to(["../resources/JinCheekPuffer.x3d","JinCheekPuffer.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice3")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 3;
      }
      function touchTime(value) {
          choice = 3;
      }`))
              .addChild(new Inline().setDEF("JinCheekRaiser").setUrl(Java.to(["../resources/JinCheekRaiser.x3d","JinCheekRaiser.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice4")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 4;
      }
      function touchTime(value) {
          choice = 4;
      }`))
              .addChild(new Inline().setDEF("JinChinRaiser").setUrl(Java.to(["../resources/JinChinRaiser.x3d","JinChinRaiser.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice5")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 5;
      }
      function touchTime(value) {
          choice = 5;
      }`))
              .addChild(new Inline().setDEF("JinDimpler").setUrl(Java.to(["../resources/JinDimpler.x3d","JinDimpler.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice6")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 6;
      }
      function touchTime(value) {
          choice = 6;
      }`))
              .addChild(new Inline().setDEF("JinEyesClosed").setUrl(Java.to(["../resources/JinEyesClosed.x3d","JinEyesClosed.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice7")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 7;
      }
      function touchTime(value) {
          choice = 7;
      }`))
              .addChild(new Inline().setDEF("JinInnerBrowRaiser").setUrl(Java.to(["../resources/JinInnerBrowRaiser.x3d","JinInnerBrowRaiser.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice8")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 8;
      }
      function touchTime(value) {
          choice = 8;
      }`))
              .addChild(new Inline().setDEF("JinJawDrop").setUrl(Java.to(["../resources/JinJawDrop.x3d","JinJawDrop.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice9")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 9;
      }
      function touchTime(value) {
          choice = 9;
      }`))
              .addChild(new Inline().setDEF("JinLidDroop").setUrl(Java.to(["../resources/JinLidDroop.x3d","JinLidDroop.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice10")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 10;
      }
      function touchTime(value) {
          choice = 10;
      }`))
              .addChild(new Inline().setDEF("JinLidTightener").setUrl(Java.to(["../resources/JinLidTightener.x3d","JinLidTightener.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice11")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 11;
      }
      function touchTime(value) {
          choice = 11;
      }`))
              .addChild(new Inline().setDEF("JinLipCornerDepressor").setUrl(Java.to(["../resources/JinLipCornerDepressor.x3d","JinLipCornerDepressor.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice12")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 12;
      }
      function touchTime(value) {
          choice = 12;
      }`))
              .addChild(new Inline().setDEF("JinLipCornerPuller").setUrl(Java.to(["../resources/JinLipCornerPuller.x3d","JinLipCornerPuller.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice13")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 13;
      }
      function touchTime(value) {
          choice = 13;
      }`))
              .addChild(new Inline().setDEF("JinLipFunneler").setUrl(Java.to(["../resources/JinLipFunneler.x3d","JinLipFunneler.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice14")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 14;
      }
      function touchTime(value) {
          choice = 14;
      }`))
              .addChild(new Inline().setDEF("JinLipPressor").setUrl(Java.to(["../resources/JinLipPressor.x3d","JinLipPressor.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice15")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 15;
      }
      function touchTime(value) {
          choice = 15;
      }`))
              .addChild(new Inline().setDEF("JinLipPuckerer").setUrl(Java.to(["../resources/JinLipPuckerer.x3d","JinLipPuckerer.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice16")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 16;
      }
      function touchTime(value) {
          choice = 16;
      }`))
              .addChild(new Inline().setDEF("JinLipsPart").setUrl(Java.to(["../resources/JinLipsPart.x3d","JinLipsPart.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice17")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 17;
      }
      function touchTime(value) {
          choice = 17;
      }`))
              .addChild(new Inline().setDEF("JinLipStretcher").setUrl(Java.to(["../resources/JinLipStretcher.x3d","JinLipStretcher.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice18")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 18;
      }
      function touchTime(value) {
          choice = 18;
      }`))
              .addChild(new Inline().setDEF("JinLipSuck").setUrl(Java.to(["../resources/JinLipSuck.x3d","JinLipSuck.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice19")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 19;
      }
      function touchTime(value) {
          choice = 19;
      }`))
              .addChild(new Inline().setDEF("JinLipTightener").setUrl(Java.to(["../resources/JinLipTightener.x3d","JinLipTightener.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice20")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 20;
      }
      function touchTime(value) {
          choice = 20;
      }`))
              .addChild(new Inline().setDEF("JinLowerLipDepressor").setUrl(Java.to(["../resources/JinLowerLipDepressor.x3d","JinLowerLipDepressor.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice21")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 21;
      }
      function touchTime(value) {
          choice = 21;
      }`))
              .addChild(new Inline().setDEF("JinMouthStretch").setUrl(Java.to(["../resources/JinMouthStretch.x3d","JinMouthStretch.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice22")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 22;
      }
      function touchTime(value) {
          choice = 22;
      }`))
              .addChild(new Inline().setDEF("JinNasolabialDeepener").setUrl(Java.to(["../resources/JinNasolabialDeepener.x3d","JinNasolabialDeepener.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice23")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 23;
      }
      function touchTime(value) {
          choice = 23;
      }`))
              .addChild(new Inline().setDEF("JinNoseWrinkler").setUrl(Java.to(["../resources/JinNoseWrinkler.x3d","JinNoseWrinkler.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice24")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 24;
      }
      function touchTime(value) {
          choice = 24;
      }`))
              .addChild(new Inline().setDEF("JinOuterBrowRaiser").setUrl(Java.to(["../resources/JinOuterBrowRaiser.x3d","JinOuterBrowRaiser.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice25")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 25;
      }
      function touchTime(value) {
          choice = 25;
      }`))
              .addChild(new Inline().setDEF("JinSlit").setUrl(Java.to(["../resources/JinSlit.x3d","JinSlit.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice26")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 26;
      }
      function touchTime(value) {
          choice = 26;
      }`))
              .addChild(new Inline().setDEF("JinSquint").setUrl(Java.to(["../resources/JinSquint.x3d","JinSquint.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice27")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 27;
      }
      function touchTime(value) {
          choice = 27;
      }`))
              .addChild(new Inline().setDEF("JinUpperLidRaiser").setUrl(Java.to(["../resources/JinUpperLidRaiser.x3d","JinUpperLidRaiser.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice28")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 28;
      }
      function touchTime(value) {
          choice = 28;
      }`))
              .addChild(new Inline().setDEF("JinUpperLipRaiser").setUrl(Java.to(["../resources/JinUpperLipRaiser.x3d","JinUpperLipRaiser.x3d"], Java.type("java.lang.String[]")))))
            .addChild(new Group()
              .addChild(new Script().setDEF("Choice29")
                .addField(new field().setType(field.TYPE_SFTIME).setName("touchTime").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_SFINT32).setName("choice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode(`ecmascript:
      function set_touchTime(value) {
          choice = 29;
      }
      function touchTime(value) {
          choice = 29;
      }`))
              .addChild(new Inline().setDEF("JinWink").setUrl(Java.to(["../resources/JinWink.x3d","JinWink.x3d"], Java.type("java.lang.String[]"))))))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,63.4,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinBlink").setDEF("JinBlink_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinBlink"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinBlink_Sensor").setFromField("touchTime").setToNode("Choice0").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice0").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,60.4,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinBrowLowerer").setDEF("JinBrowLowerer_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinBrowLowerer"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinBrowLowerer_Sensor").setFromField("touchTime").setToNode("Choice1").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice1").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,57.39999999999999,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinCheekPuffer").setDEF("JinCheekPuffer_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinCheekPuffer"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinCheekPuffer_Sensor").setFromField("touchTime").setToNode("Choice2").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice2").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,54.39999999999999,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinCheekRaiser").setDEF("JinCheekRaiser_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinCheekRaiser"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinCheekRaiser_Sensor").setFromField("touchTime").setToNode("Choice3").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice3").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,51.39999999999999,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinChinRaiser").setDEF("JinChinRaiser_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinChinRaiser"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinChinRaiser_Sensor").setFromField("touchTime").setToNode("Choice4").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice4").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,48.39999999999999,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinDimpler").setDEF("JinDimpler_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinDimpler"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinDimpler_Sensor").setFromField("touchTime").setToNode("Choice5").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice5").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,45.39999999999999,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinEyesClosed").setDEF("JinEyesClosed_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinEyesClosed"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinEyesClosed_Sensor").setFromField("touchTime").setToNode("Choice6").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice6").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,42.39999999999999,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinInnerBrowRaiser").setDEF("JinInnerBrowRaiser_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinInnerBrowRaiser"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinInnerBrowRaiser_Sensor").setFromField("touchTime").setToNode("Choice7").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice7").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,39.39999999999999,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinJawDrop").setDEF("JinJawDrop_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinJawDrop"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinJawDrop_Sensor").setFromField("touchTime").setToNode("Choice8").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice8").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,36.39999999999999,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinLidDroop").setDEF("JinLidDroop_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinLidDroop"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinLidDroop_Sensor").setFromField("touchTime").setToNode("Choice9").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice9").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,33.39999999999999,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinLidTightener").setDEF("JinLidTightener_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinLidTightener"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinLidTightener_Sensor").setFromField("touchTime").setToNode("Choice10").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice10").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,30.399999999999995,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinLipCornerDepressor").setDEF("JinLipCornerDepressor_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinLipCornerDepressor"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinLipCornerDepressor_Sensor").setFromField("touchTime").setToNode("Choice11").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice11").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,27.399999999999995,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinLipCornerPuller").setDEF("JinLipCornerPuller_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinLipCornerPuller"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinLipCornerPuller_Sensor").setFromField("touchTime").setToNode("Choice12").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice12").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,24.399999999999995,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinLipFunneler").setDEF("JinLipFunneler_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinLipFunneler"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinLipFunneler_Sensor").setFromField("touchTime").setToNode("Choice13").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice13").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,21.399999999999995,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinLipPressor").setDEF("JinLipPressor_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinLipPressor"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinLipPressor_Sensor").setFromField("touchTime").setToNode("Choice14").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice14").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,18.4,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinLipPuckerer").setDEF("JinLipPuckerer_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinLipPuckerer"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinLipPuckerer_Sensor").setFromField("touchTime").setToNode("Choice15").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice15").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,15.399999999999997,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinLipsPart").setDEF("JinLipsPart_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinLipsPart"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinLipsPart_Sensor").setFromField("touchTime").setToNode("Choice16").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice16").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,12.399999999999999,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinLipStretcher").setDEF("JinLipStretcher_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinLipStretcher"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinLipStretcher_Sensor").setFromField("touchTime").setToNode("Choice17").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice17").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,9.399999999999999,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinLipSuck").setDEF("JinLipSuck_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinLipSuck"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinLipSuck_Sensor").setFromField("touchTime").setToNode("Choice18").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice18").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,6.399999999999999,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinLipTightener").setDEF("JinLipTightener_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinLipTightener"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinLipTightener_Sensor").setFromField("touchTime").setToNode("Choice19").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice19").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,3.399999999999995,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinLowerLipDepressor").setDEF("JinLowerLipDepressor_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinLowerLipDepressor"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinLowerLipDepressor_Sensor").setFromField("touchTime").setToNode("Choice20").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice20").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,0.399999999999995,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinMouthStretch").setDEF("JinMouthStretch_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinMouthStretch"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinMouthStretch_Sensor").setFromField("touchTime").setToNode("Choice21").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice21").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,-2.6000000000000085,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinNasolabialDeepener").setDEF("JinNasolabialDeepener_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinNasolabialDeepener"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinNasolabialDeepener_Sensor").setFromField("touchTime").setToNode("Choice22").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice22").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,-5.6000000000000085,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinNoseWrinkler").setDEF("JinNoseWrinkler_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinNoseWrinkler"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinNoseWrinkler_Sensor").setFromField("touchTime").setToNode("Choice23").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice23").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,-8.600000000000009,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinOuterBrowRaiser").setDEF("JinOuterBrowRaiser_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinOuterBrowRaiser"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinOuterBrowRaiser_Sensor").setFromField("touchTime").setToNode("Choice24").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice24").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,-11.600000000000009,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinSlit").setDEF("JinSlit_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinSlit"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinSlit_Sensor").setFromField("touchTime").setToNode("Choice25").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice25").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,-14.600000000000001,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinSquint").setDEF("JinSquint_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinSquint"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinSquint_Sensor").setFromField("touchTime").setToNode("Choice26").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice26").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,-17.6,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinUpperLidRaiser").setDEF("JinUpperLidRaiser_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinUpperLidRaiser"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinUpperLidRaiser_Sensor").setFromField("touchTime").setToNode("Choice27").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice27").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,-20.6,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinUpperLipRaiser").setDEF("JinUpperLipRaiser_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinUpperLipRaiser"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinUpperLipRaiser_Sensor").setFromField("touchTime").setToNode("Choice28").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice28").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([48,-23.599999999999994,0]), Java.type("float[]")))
            .addChild(new TouchSensor().setDescription("TSJinWink").setDEF("JinWink_Sensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
              .setGeometry(new Text().setString(Java.to(["JinWink"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setSize(2.4).setSpacing(1.2).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
              .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]), Java.type("float[]")))))))
          .addChild(new ROUTE().setFromNode("JinWink_Sensor").setFromField("touchTime").setToNode("Choice29").setToField("touchTime"))
          .addChild(new ROUTE().setFromNode("Choice29").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))))      ;
    X3D0.toFileX3D("../data/MenuJin.new.graal.x3d");
    X3D0.toFileJSON("../data/MenuJin.new.graal.x3dj");
