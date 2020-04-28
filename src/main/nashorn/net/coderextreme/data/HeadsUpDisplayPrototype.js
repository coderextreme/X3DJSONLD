load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setContent("HeadsUpDisplayPrototype.x3d").setName("title"))
        .addMeta(new metaObject().setContent("Generic Heads Up Display (HUD) prototype to keep children on screen.").setName("description"))
        .addMeta(new metaObject().setContent("Don Brutzman").setName("creator"))
        .addMeta(new metaObject().setContent("9 November 2003").setName("created"))
        .addMeta(new metaObject().setContent("14 January 2014").setName("modified"))
        .addMeta(new metaObject().setContent("HUD Heads Up Display").setName("subject"))
        .addMeta(new metaObject().setContent("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d").setName("identifier"))
        .addMeta(new metaObject().setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit").setName("generator"))
        .addMeta(new metaObject().setContent("../../license.html").setName("license")))
      .setScene(new SceneObject()
        .addChild(new ProtoDeclareObject().setAppinfo("HeadsUpDisplay positions child geometry in screen space, movable by the user").setName("HeadsUpDisplay")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Displayed subscene positioned as a HUD.").setName("children")
              .addComments(new CommentsBlock(" default is null array of nodes ")))
            .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.").setName("dragChildren")
              .addComments(new CommentsBlock(" default is null array of nodes ")))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Modified screen location and distance (for size).").setName("locationOffset").setValue("-2 -2 0"))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Enable/disable console output for troubleshooting.").setName("traceEnabled").setValue("false")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new ProximitySensorObject().setDEF("WhereSensor").setSize(Java.to([1000000000,1000000000,1000000000], Java.type("float[]")))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("center").setProtoField("locationOffset"))))
              .addChild(new TransformObject().setDEF("FixedLocation")
                .addChild(new TransformObject().setDEF("MovableLocation")
                  .addChild(new TransformObject().setDEF("LocationOffset")
                    .setIS(new ISObject()
                      .addConnect(new connectObject().setNodeField("translation").setProtoField("locationOffset")))
                    .addChild(new TransformObject().setTranslation(Java.to([0,0,-10], Java.type("float[]")))
                      .addChild(new GroupObject()
                        .setIS(new ISObject()
                          .addConnect(new connectObject().setNodeField("children").setProtoField("children"))))
                      .addChild(new GroupObject().setDEF("PlaneMovementSensorGroup")
                        .addChild(new GroupObject().setDEF("DragGeometry")
                          .setIS(new ISObject()
                            .addConnect(new connectObject().setNodeField("children").setProtoField("dragChildren"))))
                        .addChild(new PlaneSensorObject().setDEF("PlaneMovementSensor").setDescription("click and drag to move interface")
                          .setIS(new ISObject()
                            .addConnect(new connectObject().setNodeField("offset").setProtoField("locationOffset"))))
                        .addChild(new VisibilitySensorObject().setDEF("MovementVisibilitySensor"))
                        .addChild(new ScriptObject().setDEF("VisibilityControlScript")
                          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("traceEnabled"))
                          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("isVisible").setValue("true"))
                          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("planeSensorTranslation").setValue("0 0 0"))
                          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setName("setIsVisible"))
                          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setName("setPlaneSensorIsActive"))
                          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setName("setPlaneSensorTranslation"))
                          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setName("translationChanged"))
                          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setName("translationOffsetChanged"))
                          .setIS(new ISObject()
                            .addConnect(new connectObject().setNodeField("traceEnabled").setProtoField("traceEnabled")))
                          .setSourceCode("ecmascript:\n"+
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
                        .addChild(new ROUTEObject().setFromField("isActive").setFromNode("PlaneMovementSensor").setToField("setPlaneSensorIsActive").setToNode("VisibilityControlScript"))
                        .addChild(new ROUTEObject().setFromField("translation_changed").setFromNode("PlaneMovementSensor").setToField("setPlaneSensorTranslation").setToNode("VisibilityControlScript"))
                        .addChild(new ROUTEObject().setFromField("isActive").setFromNode("MovementVisibilitySensor").setToField("setIsVisible").setToNode("VisibilityControlScript")))))
                  .addChild(new ROUTEObject().setFromField("translation_changed").setFromNode("PlaneMovementSensor").setToField("set_translation").setToNode("MovableLocation"))
                  .addChild(new ROUTEObject().setFromField("translationChanged").setFromNode("VisibilityControlScript").setToField("set_translation").setToNode("MovableLocation"))
                  .addChild(new ROUTEObject().setFromField("translationOffsetChanged").setFromNode("VisibilityControlScript").setToField("set_offset").setToNode("PlaneMovementSensor"))))
              .addChild(new ROUTEObject().setFromField("position_changed").setFromNode("WhereSensor").setToField("set_translation").setToNode("FixedLocation"))
              .addChild(new ROUTEObject().setFromField("orientation_changed").setFromNode("WhereSensor").setToField("set_rotation").setToNode("FixedLocation")))))
        .addComments(new CommentsBlock(" ==================== "))
        .addChild(new BackgroundObject().setGroundColor(Java.to([0.1,0.1,0.3], Java.type("float[]"))).setSkyColor(Java.to([0.5,0.5,0.1], Java.type("float[]"))))
        .addChild(new AnchorObject().setDescription("HeadsUpDisplayExample").setParameter(Java.to(["target=_blank"], Java.type("java.lang.String[]"))).setUrl(Java.to(["HeadsUpDisplayExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d","HeadsUpDisplayExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl"], Java.type("java.lang.String[]")))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0,1,1], Java.type("float[]"))).setEmissiveColor(Java.to([0,1,1], Java.type("float[]")))))
            .setGeometry(new TextObject().setString(Java.to(["HeadsUpDisplayPrototype.x3d","is a Prototype definition file.","","To see an example scene using this node","click this text to view","HeadsUpDisplayExample.x3d"], Java.type("java.lang.String[]")))
              .setFontStyle(new FontStyleObject().setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))).setSize(0.8))))))      ;
    X3D0.toFileX3D("../data/HeadsUpDisplayPrototype.new.x3d");
