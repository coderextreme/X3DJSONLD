var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addComponentSync(new autoclass.component().setNameSync("EnvironmentalEffects").setLevelSync(1))
        .addComponentSync(new autoclass.component().setNameSync("EnvironmentalEffects").setLevelSync(3))
        .addComponentSync(new autoclass.component().setNameSync("Shaders").setLevelSync(1))
        .addComponentSync(new autoclass.component().setNameSync("CubeMapTexturing").setLevelSync(1))
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("bubbles.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("manual"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/X3DJSONLD/bubbles.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("not sure what this is")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.NavigationInfo().setTypeSync(java.newArray("java.lang.String", ["EXAMINE"])))
        .addChildSync(new autoclass.Viewpoint().setDEFSync("Tour").setDescriptionSync("Tour Views"))
        .addChildSync(new autoclass.Viewpoint().setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(4)])).setDescriptionSync("sphere in road"))
        .addChildSync(new autoclass.Background().setBackUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_back.png"])).setBottomUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_bottom.png"])).setFrontUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_front.png"])).setLeftUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_left.png"])).setRightUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_right.png"])).setTopUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_top.png"])))
        .addChildSync(new autoclass.Transform().setDEFSync("Rose01")
          .addChildSync(new autoclass.Shape()
            .setGeometrySync(new autoclass.Sphere())
            .setAppearanceSync(new autoclass.Appearance().setDEFSync("_01_-_Default")
              .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.7)])).setSpecularColorSync(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)])))
              .setTextureSync(new autoclass.ComposedCubeMapTexture()
                .setBackSync(new autoclass.ImageTexture().setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_back.png"])))
                .setBottomSync(new autoclass.ImageTexture().setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_bottom.png"])))
                .setFrontSync(new autoclass.ImageTexture().setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_front.png"])))
                .setLeftSync(new autoclass.ImageTexture().setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_left.png"])))
                .setRightSync(new autoclass.ImageTexture().setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_right.png"])))
                .setTopSync(new autoclass.ImageTexture().setUrlSync(java.newArray("java.lang.String", ["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_top.png"]))))
              .addShadersSync(new autoclass.ComposedShader().setDEFSync("x_ite").setLanguageSync("GLSL")
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFINT32).setNameSync("cube").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("chromaticDispertion").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.98 1 1.033"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("bias").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.5"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("scale").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.5"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("power").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("2"))
                .addPartsSync(new autoclass.ShaderPart().setTypeSync("VERTEX").setUrlSync(java.newArray("java.lang.String", ["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])))
                .addPartsSync(new autoclass.ShaderPart().setTypeSync("FRAGMENT").setUrlSync(java.newArray("java.lang.String", ["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]))))
              .addShadersSync(new autoclass.ComposedShader().setDEFSync("x3dom").setLanguageSync("GLSL")
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFINT32).setNameSync("cube").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("chromaticDispertion").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.98 1 1.033"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("bias").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.5"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("scale").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.5"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("power").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("2"))
                .addPartsSync(new autoclass.ShaderPart().setTypeSync("VERTEX").setUrlSync(java.newArray("java.lang.String", ["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])))
                .addPartsSync(new autoclass.ShaderPart().setTypeSync("FRAGMENT").setUrlSync(java.newArray("java.lang.String", ["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"])))))))
        .addChildSync(new autoclass.TimeSensor().setDEFSync("TourTime").setCycleIntervalSync(5).setLoopSync(true))
        .addChildSync(new autoclass.PositionInterpolator().setDEFSync("TourPosition").setKeySync(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValueSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(10), java.newFloat(0), java.newFloat(0), java.newFloat(-10)])))
        .addChildSync(new autoclass.OrientationInterpolator().setDEFSync("TourOrientation").setKeySync(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValueSync(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(3.1416)])))
        .addChildSync(new autoclass.Script().setDEFSync("RandomTourTime")
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("set_cycle").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("lastKey").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFROTATION).setNameSync("orientations").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFVEC3F).setNameSync("positions").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFVEC3F).setNameSync("position_changed").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFROTATION).setNameSync("set_orientation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFROTATION).setNameSync("orientation_changed").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
          .setSourceCodeSync("ecmascript:\n"+
"               function set_cycle(value) {\n"+
"	       	   try {\n"+
"                        var ov = lastKey;\n"+
"                        do {\n"+
"                            lastKey = Math.round(Math.random()*(positions.length-1));\n"+
"                        } while (lastKey === ov);\n"+
"                        var vc = lastKey;\n"+
"\n"+
"                        position_changed = new MFVec3f();\n"+
"                        position_changed[0] = new SFVec3f(positions[ov].x,positions[ov].y,positions[ov].z);\n"+
"                        position_changed[1] = new SFVec3f(positions[vc].x,positions[vc].y,positions[vc].z);\n"+
"\n"+
"                        orientation_changed = new MFRotation();\n"+
"                        orientation_changed[0] = new SFRotation(orientations[ov].x, orientations[ov].y, orientations[ov].z, orientations[ov].w);\n"+
"                        orientation_changed[1] = new SFRotation(orientations[vc].x, orientations[vc].y, orientations[vc].z, orientations[vc].w);\n"+
"		   } catch (e) {\n"+
"		   	if (typeof alert === 'function') {\n"+
"				alert(e);\n"+
"			}\n"+
"		   }\n"+
"               }"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("TourTime").setFromFieldSync("cycleTime_changed").setToNodeSync("RandomTourTime").setToFieldSync("set_cycle"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("RandomTourTime").setFromFieldSync("orientation_changed").setToNodeSync("TourOrientation").setToFieldSync("set_keyValue"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("RandomTourTime").setFromFieldSync("position_changed").setToNodeSync("TourPosition").setToFieldSync("set_keyValue"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("TourTime").setFromFieldSync("fraction_changed").setToNodeSync("TourOrientation").setToFieldSync("set_fraction"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("TourOrientation").setFromFieldSync("value_changed").setToNodeSync("Tour").setToFieldSync("set_orientation"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("TourTime").setFromFieldSync("fraction_changed").setToNodeSync("TourPosition").setToFieldSync("set_fraction"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("TourPosition").setFromFieldSync("value_changed").setToNodeSync("Tour").setToFieldSync("set_position")))      ;
    X3D0.toFileX3D("../data/bubbles.new.x3d");
