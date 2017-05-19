from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
meta2 = metaObject().setName("title").setContent("HeadsUpDisplayExample.x3d")
head1.addMeta(meta2)
meta3 = metaObject().setName("description").setContent("Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen.")
head1.addMeta(meta3)
meta4 = metaObject().setName("creator").setContent("Leonard Daly and Don Brutzman")
head1.addMeta(meta4)
meta5 = metaObject().setName("created").setContent("15 July 2006")
head1.addMeta(meta5)
meta6 = metaObject().setName("modified").setContent("24 October 2016")
head1.addMeta(meta6)
meta7 = metaObject().setName("reference").setContent("HeadsUpDisplayPrototype.x3d")
head1.addMeta(meta7)
meta8 = metaObject().setName("reference").setContent("http://X3dGraphics.com")
head1.addMeta(meta8)
meta9 = metaObject().setName("reference").setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html")
head1.addMeta(meta9)
meta10 = metaObject().setName("rights").setContent("Copyright 2006, Daly Realism and Don Brutzman")
head1.addMeta(meta10)
meta11 = metaObject().setName("subject").setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com")
head1.addMeta(meta11)
meta12 = metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d")
head1.addMeta(meta12)
meta13 = metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")
head1.addMeta(meta13)
meta14 = metaObject().setName("license").setContent("../license.html")
head1.addMeta(meta14)
X3D0.setHead(head1)
Scene15 = SceneObject()

Scene15.addComments(CommentsBlock("Simple Heads-Up Display (HUD) Prototype
 
 Manages the display of a HUD and maintains its position on the screen.
 Changes to fieldOfView (in Viewpoint node) will change screen position
 
 Fields:
 hudSize Size of HUD (initializeOnly - SFVec3f) default=\"1 1 .01\"
 hudColor Color of HUD (inputOutput - SFColor) default=\"1 1 1\"
 screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default=\"0 0 0\"
 hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = []
 position_changed Current viewer location (outputOnly - SFVec3f)
 orientation_changed Current viewer orientation (outputOnly - SFRotation)
 
 
"))
ExternProtoDeclare16 = ExternProtoDeclareObject().setName("HeadsUpDisplay").setAppinfo("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location").setUrl(["HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"])
field17 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("screenOffset").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("offset position for HUD relative to current view location, default 0 0 -5")
ExternProtoDeclare16.addField(field17)
field18 = fieldObject().setType(fieldObject.TYPE_MFNODE).setName("children").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("X3D content positioned at HUD offset")
ExternProtoDeclare16.addField(field18)
field19 = fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("position_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("HUD position update (in world coordinates) relative to original location")
ExternProtoDeclare16.addField(field19)
field20 = fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("orientation_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("HUD orientation update relative to original location")
ExternProtoDeclare16.addField(field20)
Scene15.addChild(ExternProtoDeclare16)
Background21 = BackgroundObject().setDEF("SandyShallowBottom").setGroundAngle([0.05,1.52,1.56,1.5707]).setGroundColor([0.2,0.2,0,0.3,0.3,0,0.5,0.5,0.3,0.1,0.3,0.4,0,0.2,0.4]).setSkyAngle([0.04,0.05,0.1,1.309,1.57]).setSkyColor([0.8,0.8,0.2,0.8,0.8,0.2,0.1,0.1,0.6,0.1,0.1,0.6,0.1,0.25,0.8,0.6,0.6,0.9])
Scene15.addChild(Background21)
Viewpoint22 = ViewpointObject().setDescription("Heads-up display (HUD)")
Scene15.addChild(Viewpoint22)

Scene15.addComments(CommentsBlock("ProtoDeclare is the \"cookie cutter\" template, ProtoInstance creates an actual occurrence"))
ProtoInstance23 = ProtoInstanceObject().setName("HeadsUpDisplay").setDEF("HeadsUpDisplayInstance")

ProtoInstance23.addComments(CommentsBlock("example: upper left-hand corner of screen (x=-2, y=1) and set back z=-5 from user view"))
fieldValue24 = fieldValueObject().setName("screenOffset").setValue("-0.75 1 -5")
ProtoInstance23.addFieldValue(fieldValue24)
fieldValue25 = fieldValueObject().setName("children")
Shape26 = ShapeObject()
Text27 = TextObject().setString(["HUD text stays fixed","while user navigates"])
FontStyle28 = FontStyleObject().setJustify(["MIDDLE","MIDDLE"]).setSize(0.3)
Text27.setFontStyle(FontStyle28)
Shape26.setGeometry(Text27)
Appearance29 = AppearanceObject()
Material30 = MaterialObject().setDiffuseColor([0.894118,0.819608,1])
Appearance29.setMaterial(Material30)
Shape26.setAppearance(Appearance29)
fieldValue25.addChild(Shape26)
ProtoInstance23.addFieldValue(fieldValue25)
Scene15.addChild(ProtoInstance23)
Inline31 = InlineObject().setUrl(["../HelloWorld.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.x3d","../HelloWorld.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.wrl"])
Scene15.addChild(Inline31)
X3D0.setScene(Scene15)

X3D0.toFileX3D("../data/HeadsUpDisplayExample.new.x3d")
