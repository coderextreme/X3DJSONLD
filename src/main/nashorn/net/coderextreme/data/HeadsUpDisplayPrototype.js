load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("HeadsUpDisplayPrototype.x3d"))
        .addMeta(new meta().setName("description").setContent("Generic Heads Up Display (HUD) prototype to keep children on screen."))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("9 November 2003"))
        .addMeta(new meta().setName("modified").setContent("14 January 2014"))
        .addMeta(new meta().setName("subject").setContent("HUD Heads Up Display"))
        .addMeta(new meta().setName("identifier").setContent("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../../license.html")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("HeadsUpDisplay").setAppinfo("HeadsUpDisplay positions child geometry in screen space, movable by the user")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_MFNODE).setName("children").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Displayed subscene positioned as a HUD.")
              .addComments(new CommentsBlock("default is null array of nodes")))
            .addField(new field().setType(field.TYPE_MFNODE).setName("dragChildren").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.")
              .addComments(new CommentsBlock("default is null array of nodes")))
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("locationOffset").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Modified screen location and distance (for size).").setValue("-2 -2 0"))
            .addField(new field().setType(field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Enable/disable console output for troubleshooting.").setValue("false")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new ProximitySensor().setDEF("WhereSensor").setSize(Java.to([1000000000,1000000000,1000000000], Java.type("double[]")))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("center").setProtoField("locationOffset"))))
              .addChild(new Transform().setDEF("FixedLocation")
                .addChild(new Transform().setDEF("MovableLocation")
                  .addChild(new Transform().setDEF("LocationOffset")
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("translation").setProtoField("locationOffset")))
                    .addChild(new Transform().setTranslation(Java.to([0,0,-10], Java.type("double[]")))
                      .addChild(new Group()
                        .setIS(new IS()
                          .addConnect(new connect().setNodeField("children").setProtoField("children"))))
                      .addChild(new Group().setDEF("PlaneMovementSensorGroup")
                        .addChild(new Group().setDEF("DragGeometry")
                          .setIS(new IS()
                            .addConnect(new connect().setNodeField("children").setProtoField("dragChildren"))))
                        .addChild(new PlaneSensor().setDEF("PlaneMovementSensor").setDescription("click and drag to move interface")
                          .setIS(new IS()
                            .addConnect(new connect().setNodeField("offset").setProtoField("locationOffset"))))
                        .addChild(new VisibilitySensor().setDEF("MovementVisibilitySensor"))
                        .addChild(new Script().setDEF("VisibilityControlScript")
                          .addField(new field().setType(field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
                          .addField(new field().setType(field.TYPE_SFBOOL).setName("isVisible").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("true"))
                          .addField(new field().setType(field.TYPE_SFVEC3F).setName("planeSensorTranslation").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
                          .addField(new field().setType(field.TYPE_SFBOOL).setName("setIsVisible").setAccessType(field.ACCESSTYPE_INPUTONLY))
                          .addField(new field().setType(field.TYPE_SFBOOL).setName("setPlaneSensorIsActive").setAccessType(field.ACCESSTYPE_INPUTONLY))
                          .addField(new field().setType(field.TYPE_SFVEC3F).setName("setPlaneSensorTranslation").setAccessType(field.ACCESSTYPE_INPUTONLY))
                          .addField(new field().setType(field.TYPE_SFVEC3F).setName("translationChanged").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                          .addField(new field().setType(field.TYPE_SFVEC3F).setName("translationOffsetChanged").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                          .setIS(new IS()
                            .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled")))
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
                        .addChild(new ROUTE().setFromField("isActive").setFromNode("PlaneMovementSensor").setToField("setPlaneSensorIsActive").setToNode("VisibilityControlScript"))
                        .addChild(new ROUTE().setFromField("translation_changed").setFromNode("PlaneMovementSensor").setToField("setPlaneSensorTranslation").setToNode("VisibilityControlScript"))
                        .addChild(new ROUTE().setFromField("isActive").setFromNode("MovementVisibilitySensor").setToField("setIsVisible").setToNode("VisibilityControlScript")))))
                  .addChild(new ROUTE().setFromField("translation_changed").setFromNode("PlaneMovementSensor").setToField("set_translation").setToNode("MovableLocation"))
                  .addChild(new ROUTE().setFromField("translationChanged").setFromNode("VisibilityControlScript").setToField("set_translation").setToNode("MovableLocation"))
                  .addChild(new ROUTE().setFromField("translationOffsetChanged").setFromNode("VisibilityControlScript").setToField("set_offset").setToNode("PlaneMovementSensor"))))
              .addChild(new ROUTE().setFromField("position_changed").setFromNode("WhereSensor").setToField("set_translation").setToNode("FixedLocation"))
              .addChild(new ROUTE().setFromField("orientation_changed").setFromNode("WhereSensor").setToField("set_rotation").setToNode("FixedLocation")))))
        .addComments(new CommentsBlock("===================="))
        .addChild(new Background().setGroundColor(Java.to([0.1,0.1,0.3], Java.type("double[]"))).setSkyColor(Java.to([0.5,0.5,0.1], Java.type("double[]"))))
        .addChild(new Anchor().setDescription("HeadsUpDisplayExample").setParameter(Java.to(["target=_blank"], Java.type("java.lang.String[]"))).setUrl(Java.to(["HeadsUpDisplayExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d","HeadsUpDisplayExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl"], Java.type("java.lang.String[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([0,1,1], Java.type("double[]"))).setEmissiveColor(Java.to([0,1,1], Java.type("double[]")))))
            .setGeometry(new Text().setString(Java.to(["HeadsUpDisplayPrototype.x3d","is a Prototype definition file.","","To see an example scene using this node","click this text to view","HeadsUpDisplayExample.x3d"], Java.type("java.lang.String[]")))
              .setFontStyle(new FontStyle().setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))).setSize(0.8))))))      ;
    X3D0.toFileX3D("../data/HeadsUpDisplayPrototype.new.graal.x3d");
