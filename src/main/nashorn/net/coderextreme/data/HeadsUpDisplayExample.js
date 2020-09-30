load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("HeadsUpDisplayExample.x3d"))
        .addMeta(new meta().setName("description").setContent("Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen."))
        .addMeta(new meta().setName("creator").setContent("Leonard Daly and Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("15 July 2006"))
        .addMeta(new meta().setName("modified").setContent("24 October 2016"))
        .addMeta(new meta().setName("reference").setContent("HeadsUpDisplayPrototype.x3d"))
        .addMeta(new meta().setName("reference").setContent("http://X3dGraphics.com"))
        .addMeta(new meta().setName("reference").setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMeta(new meta().setName("rights").setContent("Copyright 2006, Daly Realism and Don Brutzman"))
        .addMeta(new meta().setName("subject").setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
        .addMeta(new meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addComments(new CommentsBlock("Simple Heads-Up Display (HUD) Prototype\\n \\n Manages the display of a HUD and maintains its position on the screen.\\n Changes to fieldOfView (in Viewpoint node) will change screen position\\n \\n Fields:\\n hudSize Size of HUD (initializeOnly - SFVec3f) default=\"1 1 .01\"\\n hudColor Color of HUD (inputOutput - SFColor) default=\"1 1 1\"\\n screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default=\"0 0 0\"\\n hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = []\\n position_changed Current viewer location (outputOnly - SFVec3f)\\n orientation_changed Current viewer orientation (outputOnly - SFRotation)\\n \\n \\n"))
        .addChild(new ExternProtoDeclare().setName("HeadsUpDisplay").setAppinfo("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location").setUrl(Java.to(["HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"], Java.type("java.lang.String[]")))
          .addField(new field().setType(field.TYPE_SFVEC3F).setName("screenOffset").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("offset position for HUD relative to current view location, default 0 0 -5"))
          .addField(new field().setType(field.TYPE_MFNODE).setName("children").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("X3D content positioned at HUD offset"))
          .addField(new field().setType(field.TYPE_SFVEC3F).setName("position_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("HUD position update (in world coordinates) relative to original location"))
          .addField(new field().setType(field.TYPE_SFROTATION).setName("orientation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("HUD orientation update relative to original location")))
        .addChild(new Background().setDEF("SandyShallowBottom").setGroundAngle(Java.to([0.05,1.52,1.56,1.5707], Java.type("float[]"))).setGroundColor(Java.to([0.2,0.2,0,0.3,0.3,0,0.5,0.5,0.3,0.1,0.3,0.4,0,0.2,0.4], Java.type("float[]"))).setSkyAngle(Java.to([0.04,0.05,0.1,1.309,1.57], Java.type("float[]"))).setSkyColor(Java.to([0.8,0.8,0.2,0.8,0.8,0.2,0.1,0.1,0.6,0.1,0.1,0.6,0.1,0.25,0.8,0.6,0.6,0.9], Java.type("float[]"))).setTransparency(0))
        .addChild(new Viewpoint().setDescription("Heads-up display (HUD)"))
        .addComments(new CommentsBlock("ProtoDeclare is the \"cookie cutter\" template, ProtoInstance creates an actual occurrence"))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("HeadsUpDisplay").setDEF("HeadsUpDisplayInstance")
          .addComments(new CommentsBlock("example: upper left-hand corner of screen (x=-2, y=1) and set back z=-5 from user view")))
        .addChild(new Inline().setUrl(Java.to(["../HelloWorld.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.x3d","../HelloWorld.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.wrl"], Java.type("java.lang.String[]"))).setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("screenOffset").setValue("-0.75 1 -5"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("children")
            .addChild(new Shape().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
              .setGeometry(new Text().setString(Java.to(["HUD text stays fixed","while user navigates"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))).setSize(0.3)))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to([0.894118,0.819608,1], Java.type("float[]")))))));
    X3D0.toFileX3D("../data/HeadsUpDisplayExample.new.x3d");
