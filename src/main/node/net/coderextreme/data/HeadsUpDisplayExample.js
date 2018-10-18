var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
var ProtoInstance0 = null;
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("HeadsUpDisplayExample.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen."))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("Leonard Daly and Don Brutzman"))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("15 July 2006"))
        .addMetaSync(new autoclass.meta().setNameSync("modified").setContentSync("24 October 2016"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("HeadsUpDisplayPrototype.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://X3dGraphics.com"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMetaSync(new autoclass.meta().setNameSync("rights").setContentSync("Copyright 2006, Daly Realism and Don Brutzman"))
        .addMetaSync(new autoclass.meta().setNameSync("subject").setContentSync("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMetaSync(new autoclass.meta().setNameSync("license").setContentSync("../license.html")))
      .setSceneSync(new autoclass.Scene()
        .addCommentsSync(new autoclass.CommentsBlock("Simple Heads-Up Display (HUD) Prototype\\n \\n Manages the display of a HUD and maintains its position on the screen.\\n Changes to fieldOfView (in Viewpoint node) will change screen position\\n \\n Fields:\\n hudSize Size of HUD (initializeOnly - SFVec3f) default=\"1 1 .01\"\\n hudColor Color of HUD (inputOutput - SFColor) default=\"1 1 1\"\\n screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default=\"0 0 0\"\\n hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = []\\n position_changed Current viewer location (outputOnly - SFVec3f)\\n orientation_changed Current viewer orientation (outputOnly - SFRotation)\\n \\n \\n"))
        .addChildSync(new autoclass.ExternProtoDeclare().setNameSync("HeadsUpDisplay").setAppinfoSync("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location").setUrlSync(java.newArray("java.lang.String", ["HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"]))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("screenOffset").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("offset position for HUD relative to current view location, default 0 0 -5"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFNODE).setNameSync("children").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("X3D content positioned at HUD offset"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("position_changed").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("HUD position update (in world coordinates) relative to original location"))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFROTATION).setNameSync("orientation_changed").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("HUD orientation update relative to original location")))
        .addChildSync(new autoclass.Background().setDEFSync("SandyShallowBottom").setGroundAngleSync(java.newArray("float", [java.newFloat(0.05), java.newFloat(1.52), java.newFloat(1.56), java.newFloat(1.5707)])).setGroundColorSync(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.2), java.newFloat(0), java.newFloat(0.3), java.newFloat(0.3), java.newFloat(0), java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.3), java.newFloat(0.1), java.newFloat(0.3), java.newFloat(0.4), java.newFloat(0), java.newFloat(0.2), java.newFloat(0.4)])).setSkyAngleSync(java.newArray("float", [java.newFloat(0.04), java.newFloat(0.05), java.newFloat(0.1), java.newFloat(1.309), java.newFloat(1.57)])).setSkyColorSync(java.newArray("float", [java.newFloat(0.8), java.newFloat(0.8), java.newFloat(0.2), java.newFloat(0.8), java.newFloat(0.8), java.newFloat(0.2), java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.6), java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.6), java.newFloat(0.1), java.newFloat(0.25), java.newFloat(0.8), java.newFloat(0.6), java.newFloat(0.6), java.newFloat(0.9)])))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Heads-up display (HUD)"))
        .addCommentsSync(new autoclass.CommentsBlock("ProtoDeclare is the \"cookie cutter\" template, ProtoInstance creates an actual occurrence"))
        .addChildSync(ProtoInstance0 = new autoclass.ProtoInstance().setNameSync("HeadsUpDisplay").setDEFSync("HeadsUpDisplayInstance")
          .addCommentsSync(new autoclass.CommentsBlock("example: upper left-hand corner of screen (x=-2, y=1) and set back z=-5 from user view")))
        .addChildSync(new autoclass.Inline().setUrlSync(java.newArray("java.lang.String", ["../HelloWorld.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.x3d","../HelloWorld.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.wrl"]))))      ;
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("screenOffset").setValueSync("-0.75 1 -5"));
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("children")
            .addChildSync(new autoclass.Shape()
              .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["HUD text stays fixed","while user navigates"]))
                .setFontStyleSync(new autoclass.FontStyle().setJustifySync(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setSizeSync(java.newFloat(0.3))))
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.894118), java.newFloat(0.819608), java.newFloat(1)]))))));
    X3D0.toFileX3D("../data/HeadsUpDisplayExample.new.x3d");
