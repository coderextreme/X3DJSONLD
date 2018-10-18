var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addComponentSync(new autoclass.component().setNameSync("Geospatial").setLevelSync(1))
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("geobubbles.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("manual"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/X3DJSONLD/geobubbles.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("geo bubbles")))
      .setSceneSync(new autoclass.Scene()
        .addCommentsSync(new autoclass.CommentsBlock("Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/"))
        .addCommentsSync(new autoclass.CommentsBlock("PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/"))
        .addChildSync(new autoclass.GeoViewpoint().setDEFSync("Tour").setPositionSync(java.newArray("double", [0,0,4])).setOrientationSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setDescriptionSync("Tour Views"))
        .addChildSync(new autoclass.Background().setBackUrlSync(java.newArray("java.lang.String", ["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"])).setBottomUrlSync(java.newArray("java.lang.String", ["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"])).setFrontUrlSync(java.newArray("java.lang.String", ["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"])).setLeftUrlSync(java.newArray("java.lang.String", ["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"])).setRightUrlSync(java.newArray("java.lang.String", ["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"])).setTopUrlSync(java.newArray("java.lang.String", ["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"])))
        .addChildSync(new autoclass.Transform()
          .addChildSync(new autoclass.Shape()
            .setGeometrySync(new autoclass.Sphere())
            .setAppearanceSync(new autoclass.Appearance()
              .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.7)])).setSpecularColorSync(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))))))
        .addChildSync(new autoclass.TimeSensor().setDEFSync("TourTime").setCycleIntervalSync(5).setLoopSync(true))
        .addChildSync(new autoclass.GeoPositionInterpolator().setDEFSync("TourPosition").setKeySync(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValueSync(java.newArray("double", [0.0015708,0,4,0,0.0015708,4])))
        .addChildSync(new autoclass.Script().setDEFSync("RandomTourTime")
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("set_cycle").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("val").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFVEC3D).setNameSync("positions").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.0015708 0 4 0 0.0015708 4"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFVEC3D).setNameSync("position").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0.0015708 0 4 0 0.0015708 4"))
          .setSourceCodeSync("ecmascript:\n"+
"\n"+
"               function set_cycle(value) {\n"+
"                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo\n"+
"                        var ov = val;\n"+
"			// Browser.print('old '+ov);\n"+
"                        do {\n"+
"                                val = Math.floor(Math.random()*2);\n"+
"                                var vc = val;\n"+
"                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);\n"+
"                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);\n"+
"			// Browser.println(positions[ov]);\n"+
"			// Browser.println(positions[vc]);\n"+
"                        position = new MFVec3d();\n"+
"                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);\n"+
"                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);\n"+
"               }"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("TourTime").setFromFieldSync("cycleTime").setToNodeSync("RandomTourTime").setToFieldSync("set_cycle"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("RandomTourTime").setFromFieldSync("position").setToNodeSync("TourPosition").setToFieldSync("keyValue"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("TourTime").setFromFieldSync("fraction_changed").setToNodeSync("TourPosition").setToFieldSync("set_fraction"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("TourPosition").setFromFieldSync("geovalue_changed").setToNodeSync("Tour").setToFieldSync("set_position")))      ;
    X3D0.toFileX3D("../data/geobubbles.new.x3d");
