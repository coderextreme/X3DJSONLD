var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("bubs.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("Tour around a prismatic sphere"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/X3DJSONLD/bubs.x3d")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.NavigationInfo().setTypeSync(java.newArray("java.lang.String", ["EXAMINE"])))
        .addChildSync(new autoclass.Viewpoint().setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(4)])).setOrientationSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setDescriptionSync("Bubbles in action"))
        .addChildSync(new autoclass.Background().setBackUrlSync(java.newArray("java.lang.String", ["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"])).setBottomUrlSync(java.newArray("java.lang.String", ["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"])).setFrontUrlSync(java.newArray("java.lang.String", ["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"])).setLeftUrlSync(java.newArray("java.lang.String", ["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"])).setRightUrlSync(java.newArray("java.lang.String", ["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"])).setTopUrlSync(java.newArray("java.lang.String", ["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"])))
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("Bubble")
          .setProtoBodySync(new autoclass.ProtoBody()
            .addChildSync(new autoclass.Transform().setDEFSync("transform")
              .addChildSync(new autoclass.Shape()
                .setGeometrySync(new autoclass.Sphere().setRadiusSync(java.newFloat(0.25)))
                .setAppearanceSync(new autoclass.Appearance()
                  .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])).setTransparencySync(java.newFloat(0.2)))))
              .addChildSync(new autoclass.Script().setDEFSync("bounce")
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("scale").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("1 1 1"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("translation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 0"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("velocity").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 0"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("scalvel").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 0"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("set_fraction").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
                .setSourceCodeSync("ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\n"+
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\n"+
"    // if you get to far away or too big, explode\n"+
"    if ( Math.abs(translation.x) > 256) {\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.y) > 256) {\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.z) > 256) {\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.x) > 20) {\n"+
"	scale.x = scale.x/20;\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.y) > 20) {\n"+
"	scale.y = scale.y/20;\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.z) > 20) {\n"+
"	scale.z = scale.z/20;\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"}"))
              .addChildSync(new autoclass.TimeSensor().setDEFSync("bubbleClock").setCycleIntervalSync(10).setLoopSync(true))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("bounce").setFromFieldSync("translation_changed").setToNodeSync("transform").setToFieldSync("set_translation"))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("bounce").setFromFieldSync("scale_changed").setToNodeSync("transform").setToFieldSync("set_scale"))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("bubbleClock").setFromFieldSync("fraction_changed").setToNodeSync("bounce").setToFieldSync("set_fraction")))))
        .addChildSync(ProtoInstance0 = new autoclass.ProtoInstance().setNameSync("Bubble").setDEFSync("bubbleA"))
        .addChildSync(ProtoInstance1 = new autoclass.ProtoInstance().setNameSync("Bubble").setDEFSync("bubbleB"))
        .addChildSync(ProtoInstance2 = new autoclass.ProtoInstance().setNameSync("Bubble").setDEFSync("bubbleC"))
        .addChildSync(ProtoInstance3 = new autoclass.ProtoInstance().setNameSync("Bubble").setDEFSync("bubbleD")))      ;
    X3D0.toFileX3D("../data/bubs.new.x3d");
