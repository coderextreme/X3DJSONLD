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
var ProtoInstance0 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("HeadsUpDisplayExample.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen."))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Leonard Daly and Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("created").setContent("15 July 2006"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("24 October 2016"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("HeadsUpDisplayPrototype.x3d"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://X3dGraphics.com"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMeta((new autoclass.meta()).setName("rights").setContent("Copyright 2006, Daly Realism and Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("subject").setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
      .setScene((new autoclass.Scene())
        .addComments((new autoclass.CommentsBlock("Simple Heads-Up Display (HUD) Prototype\\n \\n Manages the display of a HUD and maintains its position on the screen.\\n Changes to fieldOfView (in Viewpoint node) will change screen position\\n \\n Fields:\\n hudSize Size of HUD (initializeOnly - SFVec3f) default=\"1 1 .01\"\\n hudColor Color of HUD (inputOutput - SFColor) default=\"1 1 1\"\\n screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default=\"0 0 0\"\\n hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = []\\n position_changed Current viewer location (outputOnly - SFVec3f)\\n orientation_changed Current viewer orientation (outputOnly - SFRotation)\\n \\n \\n")))
        .addChild((new autoclass.ExternProtoDeclare()).setName("HeadsUpDisplay").setAppinfo("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location").setUrl(java.newArray("java.lang.String", ["HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"]))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("screenOffset").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("offset position for HUD relative to current view location, default 0 0 -5"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("children").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("X3D content positioned at HUD offset"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("position_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("HUD position update (in world coordinates) relative to original location"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("orientation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("HUD orientation update relative to original location")))
        .addChild((new autoclass.Background()).setDEF("SandyShallowBottom").setGroundAngle(java.newArray("float", [java.newFloat(0.05), java.newFloat(1.52), java.newFloat(1.56), java.newFloat(1.5707)])).setGroundColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.2), java.newFloat(0), java.newFloat(0.3), java.newFloat(0.3), java.newFloat(0), java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.3), java.newFloat(0.1), java.newFloat(0.3), java.newFloat(0.4), java.newFloat(0), java.newFloat(0.2), java.newFloat(0.4)])).setSkyAngle(java.newArray("float", [java.newFloat(0.04), java.newFloat(0.05), java.newFloat(0.1), java.newFloat(1.309), java.newFloat(1.57)])).setSkyColor(java.newArray("float", [java.newFloat(0.8), java.newFloat(0.8), java.newFloat(0.2), java.newFloat(0.8), java.newFloat(0.8), java.newFloat(0.2), java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.6), java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.6), java.newFloat(0.1), java.newFloat(0.25), java.newFloat(0.8), java.newFloat(0.6), java.newFloat(0.6), java.newFloat(0.9)])))
        .addChild((new autoclass.Viewpoint()).setDescription("Heads-up display (HUD)"))
        .addComments((new autoclass.CommentsBlock("ProtoDeclare is the \"cookie cutter\" template, ProtoInstance creates an actual occurrence")))
        .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("HeadsUpDisplay").setDEF("HeadsUpDisplayInstance")
          .addComments((new autoclass.CommentsBlock("example: upper left-hand corner of screen (x=-2, y=1) and set back z=-5 from user view"))))
        .addChild((new autoclass.Inline()).setUrl(java.newArray("java.lang.String", ["../HelloWorld.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.x3d","../HelloWorld.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.wrl"]))))      ;
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("screenOffset").setValue("-0.75 1 -5"));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("children")
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["HUD text stays fixed","while user navigates"]))
                .setFontStyle((new autoclass.FontStyle()).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setSize(java.newFloat(0.3))))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.894118), java.newFloat(0.819608), java.newFloat(1)]))))));
    X3D0.toFileX3D("../data/HeadsUpDisplayExample.new.x3d");
    process.exit(0);
