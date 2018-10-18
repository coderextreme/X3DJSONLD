var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.0")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("HeadsUpDisplayPrototype.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("Generic Heads Up Display (HUD) prototype to keep children on screen."))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("Don Brutzman"))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("9 November 2003"))
        .addMetaSync(new autoclass.meta().setNameSync("modified").setContentSync("14 January 2014"))
        .addMetaSync(new autoclass.meta().setNameSync("subject").setContentSync("HUD Heads Up Display"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"))
        .addMetaSync(new autoclass.meta().setNameSync("license").setContentSync("../../license.html")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("HeadsUpDisplay").setAppinfoSync("HeadsUpDisplay positions child geometry in screen space, movable by the user")
          .setProtoInterfaceSync(new autoclass.ProtoInterface()
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFNODE).setNameSync("children").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Displayed subscene positioned as a HUD.")
              .addCommentsSync(new autoclass.CommentsBlock("default is null array of nodes")))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFNODE).setNameSync("dragChildren").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.")
              .addCommentsSync(new autoclass.CommentsBlock("default is null array of nodes")))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("locationOffset").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("Modified screen location and distance (for size).").setValueSync("-2 -2 0"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("traceEnabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("Enable/disable console output for troubleshooting.").setValueSync("false")))
          .setProtoBodySync(new autoclass.ProtoBody()
            .addChildSync(new autoclass.Group()
              .addChildSync(new autoclass.ProximitySensor().setDEFSync("WhereSensor").setSizeSync(java.newArray("float", [java.newFloat(1000000000), java.newFloat(1000000000), java.newFloat(1000000000)]))
                .setISSync(new autoclass.IS()
                  .addConnectSync(new autoclass.connect().setNodeFieldSync("center").setProtoFieldSync("locationOffset"))))
              .addChildSync(new autoclass.Transform().setDEFSync("FixedLocation")
                .addChildSync(new autoclass.Transform().setDEFSync("MovableLocation")
                  .addChildSync(new autoclass.Transform().setDEFSync("LocationOffset")
                    .setISSync(new autoclass.IS()
                      .addConnectSync(new autoclass.connect().setNodeFieldSync("translation").setProtoFieldSync("locationOffset")))
                    .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-10)]))
                      .addChildSync(new autoclass.Group()
                        .setISSync(new autoclass.IS()
                          .addConnectSync(new autoclass.connect().setNodeFieldSync("children").setProtoFieldSync("children"))))
                      .addChildSync(new autoclass.Group().setDEFSync("PlaneMovementSensorGroup")
                        .addChildSync(new autoclass.Group().setDEFSync("DragGeometry")
                          .setISSync(new autoclass.IS()
                            .addConnectSync(new autoclass.connect().setNodeFieldSync("children").setProtoFieldSync("dragChildren"))))
                        .addChildSync(new autoclass.PlaneSensor().setDEFSync("PlaneMovementSensor").setDescriptionSync("click and drag to move interface")
                          .setISSync(new autoclass.IS()
                            .addConnectSync(new autoclass.connect().setNodeFieldSync("offset").setProtoFieldSync("locationOffset"))))
                        .addChildSync(new autoclass.VisibilitySensor().setDEFSync("MovementVisibilitySensor"))
                        .addChildSync(new autoclass.Script().setDEFSync("VisibilityControlScript")
                          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("traceEnabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
                          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("isVisible").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValueSync("true"))
                          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("planeSensorTranslation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValueSync("0 0 0"))
                          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("setIsVisible").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
                          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("setPlaneSensorIsActive").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
                          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("setPlaneSensorTranslation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
                          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("translationChanged").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("translationOffsetChanged").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                          .setISSync(new autoclass.IS()
                            .addConnectSync(new autoclass.connect().setNodeFieldSync("traceEnabled").setProtoFieldSync("traceEnabled")))
                          .setSourceCodeSync("ecmascript:\n"+
"\n"+
"function tracePrint (text)\n"+
"{\n"+
"	if (traceEnabled) Browser.print ('[HeadsUpDisplayPrototype VisibilityControlScript] ' + text);\n"+
"}\n"+
"function setIsVisible (value, timeStamp)\n"+
"{\n"+
"	isVisible = value;\n"+
"	tracePrint('isVisible=' + value);\n"+
"}\n"+
"function setPlaneSensorIsActive (value, timeStamp)\n"+
"{\n"+
"	tracePrint('PlaneSensor isActive=' + value);\n"+
"\n"+
"	if (value == false)\n"+
"	{\n"+
"		tracePrint('planeSensorTranslation=' + planeSensorTranslation);\n"+
"		if (isVisible)\n"+
"		{\n"+
"			translationChanged = planeSensorTranslation;\n"+
"		}\n"+
"		else\n"+
"		{\n"+
"			// fell off screen, reset to center\n"+
"			translationChanged = new SFVec3f(0, 0, 0);\n"+
"			translationOffsetChanged  = new SFVec3f(0, 0, 0);\n"+
"		}\n"+
"	}\n"+
"}\n"+
"function setPlaneSensorTranslation (value, timeStamp)\n"+
"{\n"+
"	planeSensorTranslation = value;\n"+
"	tracePrint('planeSensorTranslation=' + value);\n"+
"}"))
                        .addChildSync(new autoclass.ROUTE().setFromFieldSync("isActive").setFromNodeSync("PlaneMovementSensor").setToFieldSync("setPlaneSensorIsActive").setToNodeSync("VisibilityControlScript"))
                        .addChildSync(new autoclass.ROUTE().setFromFieldSync("translation_changed").setFromNodeSync("PlaneMovementSensor").setToFieldSync("setPlaneSensorTranslation").setToNodeSync("VisibilityControlScript"))
                        .addChildSync(new autoclass.ROUTE().setFromFieldSync("isActive").setFromNodeSync("MovementVisibilitySensor").setToFieldSync("setIsVisible").setToNodeSync("VisibilityControlScript")))))
                  .addChildSync(new autoclass.ROUTE().setFromFieldSync("translation_changed").setFromNodeSync("PlaneMovementSensor").setToFieldSync("set_translation").setToNodeSync("MovableLocation"))
                  .addChildSync(new autoclass.ROUTE().setFromFieldSync("translationChanged").setFromNodeSync("VisibilityControlScript").setToFieldSync("set_translation").setToNodeSync("MovableLocation"))
                  .addChildSync(new autoclass.ROUTE().setFromFieldSync("translationOffsetChanged").setFromNodeSync("VisibilityControlScript").setToFieldSync("set_offset").setToNodeSync("PlaneMovementSensor"))))
              .addChildSync(new autoclass.ROUTE().setFromFieldSync("position_changed").setFromNodeSync("WhereSensor").setToFieldSync("set_translation").setToNodeSync("FixedLocation"))
              .addChildSync(new autoclass.ROUTE().setFromFieldSync("orientation_changed").setFromNodeSync("WhereSensor").setToFieldSync("set_rotation").setToNodeSync("FixedLocation")))))
        .addCommentsSync(new autoclass.CommentsBlock("===================="))
        .addChildSync(new autoclass.Background().setGroundColorSync(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.3)])).setSkyColorSync(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.1)])))
        .addChildSync(new autoclass.Anchor().setDescriptionSync("HeadsUpDisplayExample").setParameterSync(java.newArray("java.lang.String", ["target=_blank"])).setUrlSync(java.newArray("java.lang.String", ["HeadsUpDisplayExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d","HeadsUpDisplayExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl"]))
          .addChildSync(new autoclass.Shape()
            .setAppearanceSync(new autoclass.Appearance()
              .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(1)])).setEmissiveColorSync(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(1)]))))
            .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["HeadsUpDisplayPrototype.x3d","is a Prototype definition file.","","To see an example scene using this node","click this text to view","HeadsUpDisplayExample.x3d"]))
              .setFontStyleSync(new autoclass.FontStyle().setJustifySync(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setSizeSync(java.newFloat(0.8)))))))      ;
    X3D0.toFileX3D("../data/HeadsUpDisplayPrototype.new.x3d");
