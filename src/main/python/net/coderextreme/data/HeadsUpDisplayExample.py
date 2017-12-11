# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("HeadsUpDisplayExample.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("description")
meta3.setContent("Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen.")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("creator")
meta4.setContent("Leonard Daly and Don Brutzman")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("created")
meta5.setContent("15 July 2006")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("modified")
meta6.setContent("24 October 2016")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("reference")
meta7.setContent("HeadsUpDisplayPrototype.x3d")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("reference")
meta8.setContent("http://X3dGraphics.com")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("reference")
meta9.setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("rights")
meta10.setContent("Copyright 2006, Daly Realism and Don Brutzman")

head1.addMeta(meta10)
meta11 = metaObject()
meta11.setName("subject")
meta11.setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com")

head1.addMeta(meta11)
meta12 = metaObject()
meta12.setName("identifier")
meta12.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d")

head1.addMeta(meta12)
meta13 = metaObject()
meta13.setName("generator")
meta13.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta13)
meta14 = metaObject()
meta14.setName("license")
meta14.setContent("../license.html")

head1.addMeta(meta14)
X3D0.setHead(head1)
Scene15 = SceneObject()


Scene15.addComments(CommentsBlock("""Simple Heads-Up Display (HUD) Prototype
 
 Manages the display of a HUD and maintains its position on the screen.
 Changes to fieldOfView (in Viewpoint node) will change screen position
 
 Fields:
 hudSize Size of HUD (initializeOnly - SFVec3f) default=\"1 1 .01\"
 hudColor Color of HUD (inputOutput - SFColor) default=\"1 1 1\"
 screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default=\"0 0 0\"
 hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = []
 position_changed Current viewer location (outputOnly - SFVec3f)
 orientation_changed Current viewer orientation (outputOnly - SFRotation)
 
 
"""))
ExternProtoDeclare16 = ExternProtoDeclareObject()
ExternProtoDeclare16.setName("HeadsUpDisplay")
ExternProtoDeclare16.setAppinfo("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location")
ExternProtoDeclare16.setUrl(["HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"])

field17 = fieldObject()
field17.setType(fieldObject.TYPE_SFVEC3F)
field17.setName("screenOffset")
field17.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field17.setAppinfo("offset position for HUD relative to current view location, default 0 0 -5")

ExternProtoDeclare16.addField(field17)
field18 = fieldObject()
field18.setType(fieldObject.TYPE_MFNODE)
field18.setName("children")
field18.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field18.setAppinfo("X3D content positioned at HUD offset")

ExternProtoDeclare16.addField(field18)
field19 = fieldObject()
field19.setType(fieldObject.TYPE_SFVEC3F)
field19.setName("position_changed")
field19.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field19.setAppinfo("HUD position update (in world coordinates) relative to original location")

ExternProtoDeclare16.addField(field19)
field20 = fieldObject()
field20.setType(fieldObject.TYPE_SFROTATION)
field20.setName("orientation_changed")
field20.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)
field20.setAppinfo("HUD orientation update relative to original location")

ExternProtoDeclare16.addField(field20)
Scene15.addChild(ExternProtoDeclare16)
Background21 = BackgroundObject()
Background21.setDEF("SandyShallowBottom")
Background21.setGroundAngle([0.05,1.52,1.56,1.5707])
Background21.setGroundColor([0.2,0.2,0,0.3,0.3,0,0.5,0.5,0.3,0.1,0.3,0.4,0,0.2,0.4])
Background21.setSkyAngle([0.04,0.05,0.1,1.309,1.57])
Background21.setSkyColor([0.8,0.8,0.2,0.8,0.8,0.2,0.1,0.1,0.6,0.1,0.1,0.6,0.1,0.25,0.8,0.6,0.6,0.9])

Scene15.addChild(Background21)
Viewpoint22 = ViewpointObject()
Viewpoint22.setDescription("Heads-up display (HUD)")

Scene15.addChild(Viewpoint22)

Scene15.addComments(CommentsBlock("""ProtoDeclare is the \"cookie cutter\" template, ProtoInstance creates an actual occurrence"""))
ProtoInstance23 = ProtoInstanceObject()
ProtoInstance23.setName("HeadsUpDisplay")
ProtoInstance23.setDEF("HeadsUpDisplayInstance")


ProtoInstance23.addComments(CommentsBlock("""example: upper left-hand corner of screen (x=-2, y=1) and set back z=-5 from user view"""))
fieldValue24 = fieldValueObject()
fieldValue24.setName("screenOffset")
fieldValue24.setValue("-0.75 1 -5")

ProtoInstance23.addFieldValue(fieldValue24)
fieldValue25 = fieldValueObject()
fieldValue25.setName("children")

Shape26 = ShapeObject()

Text27 = TextObject()
Text27.setString(["HUD text stays fixed","while user navigates"])

FontStyle28 = FontStyleObject()
FontStyle28.setJustify(["MIDDLE","MIDDLE"])
FontStyle28.setSize(0.3)

Text27.setFontStyle(FontStyle28)
Shape26.setGeometry(Text27)
Appearance29 = AppearanceObject()

Material30 = MaterialObject()
Material30.setDiffuseColor([0.894118,0.819608,1])

Appearance29.setMaterial(Material30)
Shape26.setAppearance(Appearance29)
fieldValue25.addChild(Shape26)
ProtoInstance23.addFieldValue(fieldValue25)
Scene15.addChild(ProtoInstance23)
Inline31 = InlineObject()
Inline31.setUrl(["../HelloWorld.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.x3d","../HelloWorld.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.wrl"])

Scene15.addChild(Inline31)
X3D0.setScene(Scene15)

X3D0.toFileX3D("../data/HeadsUpDisplayExample.new.x3d")
