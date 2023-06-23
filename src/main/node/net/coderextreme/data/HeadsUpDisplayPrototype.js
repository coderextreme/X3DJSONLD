var java = require('java');
var util = require('util');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: util.promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("HeadsUpDisplayPrototype.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Generic Heads Up Display (HUD) prototype to keep children on screen."))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("created").setContent("9 November 2003"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("14 January 2014"))
        .addMeta((new autoclass.meta()).setName("subject").setContent("HUD Heads Up Display"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.ProtoDeclare()).setName("HeadsUpDisplay").setAppinfo("HeadsUpDisplay positions child geometry in screen space, movable by the user")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("children").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Displayed subscene positioned as a HUD.")
              .addComments((new autoclass.CommentsBlock("default is null array of nodes"))))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("dragChildren").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.")
              .addComments((new autoclass.CommentsBlock("default is null array of nodes"))))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("locationOffset").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Modified screen location and distance (for size).").setValue("-2 -2 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Enable/disable console output for troubleshooting.").setValue("false")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Group())
              .addChild((new autoclass.ProximitySensor()).setDEF("WhereSensor").setSize(java.newArray("float", [java.newFloat(1000000000), java.newFloat(1000000000), java.newFloat(1000000000)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("center").setProtoField("locationOffset"))))
              .addChild((new autoclass.Transform()).setDEF("FixedLocation")
                .addChild((new autoclass.Transform()).setDEF("MovableLocation")
                  .addChild((new autoclass.Transform()).setDEF("LocationOffset")
                    .setIS((new autoclass.IS())
                      .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("locationOffset")))
                    .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-10)]))
                      .addChild((new autoclass.Group())
                        .setIS((new autoclass.IS())
                          .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("children"))))
                      .addChild((new autoclass.Group()).setDEF("PlaneMovementSensorGroup")
                        .addChild((new autoclass.Group()).setDEF("DragGeometry")
                          .setIS((new autoclass.IS())
                            .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("dragChildren"))))
                        .addChild((new autoclass.PlaneSensor()).setDEF("PlaneMovementSensor").setDescription("click and drag to move interface")
                          .setIS((new autoclass.IS())
                            .addConnect((new autoclass.connect()).setNodeField("offset").setProtoField("locationOffset"))))
                        .addChild((new autoclass.VisibilitySensor()).setDEF("MovementVisibilitySensor"))
                        .addChild((new autoclass.Script()).setDEF("VisibilityControlScript")
                          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
                          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("isVisible").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("true"))
                          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("planeSensorTranslation").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
                          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("setIsVisible").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("setPlaneSensorIsActive").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("setPlaneSensorTranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("translationChanged").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("translationOffsetChanged").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                          .setIS((new autoclass.IS())
                            .addConnect((new autoclass.connect()).setNodeField("traceEnabled").setProtoField("traceEnabled")))
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
                        .addChild((new autoclass.ROUTE()).setFromField("isActive").setFromNode("PlaneMovementSensor").setToField("setPlaneSensorIsActive").setToNode("VisibilityControlScript"))
                        .addChild((new autoclass.ROUTE()).setFromField("translation_changed").setFromNode("PlaneMovementSensor").setToField("setPlaneSensorTranslation").setToNode("VisibilityControlScript"))
                        .addChild((new autoclass.ROUTE()).setFromField("isActive").setFromNode("MovementVisibilitySensor").setToField("setIsVisible").setToNode("VisibilityControlScript")))))
                  .addChild((new autoclass.ROUTE()).setFromField("translation_changed").setFromNode("PlaneMovementSensor").setToField("set_translation").setToNode("MovableLocation"))
                  .addChild((new autoclass.ROUTE()).setFromField("translationChanged").setFromNode("VisibilityControlScript").setToField("set_translation").setToNode("MovableLocation"))
                  .addChild((new autoclass.ROUTE()).setFromField("translationOffsetChanged").setFromNode("VisibilityControlScript").setToField("set_offset").setToNode("PlaneMovementSensor"))))
              .addChild((new autoclass.ROUTE()).setFromField("position_changed").setFromNode("WhereSensor").setToField("set_translation").setToNode("FixedLocation"))
              .addChild((new autoclass.ROUTE()).setFromField("orientation_changed").setFromNode("WhereSensor").setToField("set_rotation").setToNode("FixedLocation")))))
        .addComments((new autoclass.CommentsBlock("====================")))
        .addChild((new autoclass.Background()).setGroundColor(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.3)])).setSkyColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.1)])))
        .addChild((new autoclass.Anchor()).setDescription("HeadsUpDisplayExample").setParameter(java.newArray("java.lang.String", ["target=_blank"])).setUrl(java.newArray("java.lang.String", ["HeadsUpDisplayExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d","HeadsUpDisplayExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl"]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(1)])).setEmissiveColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(1)]))))
            .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["HeadsUpDisplayPrototype.x3d","is a Prototype definition file.","","To see an example scene using this node","click this text to view","HeadsUpDisplayExample.x3d"]))
              .setFontStyle((new autoclass.FontStyle()).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setSize(java.newFloat(0.8)))))))      ;
    X3D0.toFileX3D("../data/HeadsUpDisplayPrototype.new.x3d");
    process.exit(0);
