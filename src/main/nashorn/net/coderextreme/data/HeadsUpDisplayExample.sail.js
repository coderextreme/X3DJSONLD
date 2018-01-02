load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("HeadsUpDisplayExample.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen."))
        .addMeta(new metaObject().setName("creator").setContent("Leonard Daly and Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("15 July 2006"))
        .addMeta(new metaObject().setName("modified").setContent("24 October 2016"))
        .addMeta(new metaObject().setName("reference").setContent("HeadsUpDisplayPrototype.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("http://X3dGraphics.com"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMeta(new metaObject().setName("rights").setContent("Copyright 2006, Daly Realism and Don Brutzman"))
        .addMeta(new metaObject().setName("subject").setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
        .addMeta(new metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("Simple Heads-Up Display (HUD) Prototype\n"+
" \n"+
" Manages the display of a HUD and maintains its position on the screen.\n"+
" Changes to fieldOfView (in Viewpoint node) will change screen position\n"+
" \n"+
" Fields:\n"+
" hudSize Size of HUD (initializeOnly - SFVec3f) default=\"1 1 .01\"\n"+
" hudColor Color of HUD (inputOutput - SFColor) default=\"1 1 1\"\n"+
" screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default=\"0 0 0\"\n"+
" hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = []\n"+
" position_changed Current viewer location (outputOnly - SFVec3f)\n"+
" orientation_changed Current viewer orientation (outputOnly - SFRotation)\n"+
" \n"+
" \n"+
""))
        .addChild(new ExternProtoDeclareObject().setName("HeadsUpDisplay").setAppinfo("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location").setUrl(Java.to(["HeadsUpDisplayPrototype.x3d#HeadsUpDisplay".replace(/\"/g, "\\\""),"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay".replace(/\"/g, "\\\""),"HeadsUpDisplayPrototype.wrl#HeadsUpDisplay".replace(/\"/g, "\\\""),"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]")))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("screenOffset").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("offset position for HUD relative to current view location, default 0 0 -5"))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setName("children").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("X3D content positioned at HUD offset"))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("position_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("HUD position update (in world coordinates) relative to original location"))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("orientation_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("HUD orientation update relative to original location")))
        .addChild(new BackgroundObject().setDEF("SandyShallowBottom").setGroundAngle(Java.to([0.05,1.52,1.56,1.5707], Java.type("float[]"))).setGroundColor(Java.to([0.2,0.2,0,0.3,0.3,0,0.5,0.5,0.3,0.1,0.3,0.4,0,0.2,0.4], Java.type("float[]"))).setSkyAngle(Java.to([0.04,0.05,0.1,1.309,1.57], Java.type("float[]"))).setSkyColor(Java.to([0.8,0.8,0.2,0.8,0.8,0.2,0.1,0.1,0.6,0.1,0.1,0.6,0.1,0.25,0.8,0.6,0.6,0.9], Java.type("float[]"))))
        .addChild(new ViewpointObject().setDescription("Heads-up display (HUD)"))
        .addComments(new CommentsBlock("ProtoDeclare is the \"cookie cutter\" template, ProtoInstance creates an actual occurrence"))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("HeadsUpDisplay").setDEF("HeadsUpDisplayInstance")
          .addComments(new CommentsBlock("example: upper left-hand corner of screen (x=-2, y=1) and set back z=-5 from user view")))
        .addChild(new InlineObject().setUrl(Java.to(["../HelloWorld.x3d".replace(/\"/g, "\\\""),"http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.x3d".replace(/\"/g, "\\\""),"../HelloWorld.wrl".replace(/\"/g, "\\\""),"http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.wrl".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]")))))      ;
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("screenOffset").setValue("-0.75 1 -5"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("children")
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(Java.to(["HUD text stays fixed".replace(/\"/g, "\\\""),"while user navigates".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyleObject().setJustify(Java.to(["MIDDLE".replace(/\"/g, "\\\""),"MIDDLE".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))).setSize(0.3)))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.894118,0.819608,1], Java.type("float[]")))))));
    X3D0.toFileX3D("../data/HeadsUpDisplayExample.new.x3d");
