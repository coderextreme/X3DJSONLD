import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setContent("HeadsUpDisplayExample.x3d")
meta2.setName("title")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setContent("Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen.")
meta3.setName("description")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setContent("Leonard Daly and Don Brutzman")
meta4.setName("creator")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setContent("15 July 2006")
meta5.setName("created")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setContent("24 October 2016")
meta6.setName("modified")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setContent("HeadsUpDisplayPrototype.x3d")
meta7.setName("reference")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setContent("http://X3dGraphics.com")
meta8.setName("reference")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html")
meta9.setName("reference")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setContent("Copyright 2006, Daly Realism and Don Brutzman")
meta10.setName("rights")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com")
meta11.setName("subject")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d")
meta12.setName("identifier")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")
meta13.setName("generator")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setContent("../license.html")
meta14.setName("license")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = x3d.Scene()
# Simple Heads-Up Display (HUD) Prototype\\n \\n Manages the display of a HUD and maintains its position on the screen.\\n Changes to fieldOfView (in Viewpoint node) will change screen position\\n \\n Fields:\\n hudSize Size of HUD (initializeOnly - SFVec3f) default=\"1 1 .01\"\\n hudColor Color of HUD (inputOutput - SFColor) default=\"1 1 1\"\\n screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default=\"0 0 0\"\\n hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = []\\n position_changed Current viewer location (outputOnly - SFVec3f)\\n orientation_changed Current viewer orientation (outputOnly - SFRotation)\\n \\n \\n 
ExternProtoDeclare16 = x3d.ExternProtoDeclare()
ExternProtoDeclare16.setAppinfo("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location")
ExternProtoDeclare16.setName("HeadsUpDisplay")
ExternProtoDeclare16.setUrl(["HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"])
field17 = x3d.field()
field17.setAccessType("inputOutput")
field17.setAppinfo("offset position for HUD relative to current view location, default 0 0 -5")
field17.setName("screenOffset")
field17.setType("SFVec3f")

ExternProtoDeclare16.addField(field17)
field18 = x3d.field()
field18.setAccessType("inputOutput")
field18.setAppinfo("X3D content positioned at HUD offset")
field18.setName("children")
field18.setType("MFNode")

ExternProtoDeclare16.addField(field18)
field19 = x3d.field()
field19.setAccessType("outputOnly")
field19.setAppinfo("HUD position update (in world coordinates) relative to original location")
field19.setName("position_changed")
field19.setType("SFVec3f")

ExternProtoDeclare16.addField(field19)
field20 = x3d.field()
field20.setAccessType("outputOnly")
field20.setAppinfo("HUD orientation update relative to original location")
field20.setName("orientation_changed")
field20.setType("SFRotation")

ExternProtoDeclare16.addField(field20)

Scene15.addChildren(ExternProtoDeclare16)
Background21 = x3d.Background()
Background21.setDEF("SandyShallowBottom")
Background21.setGroundAngle([0.05,1.52,1.56,1.5707])
Background21.setGroundColor([0.2,0.2,0,0.3,0.3,0,0.5,0.5,0.3,0.1,0.3,0.4,0,0.2,0.4])
Background21.setSkyAngle([0.04,0.05,0.1,1.309,1.57])
Background21.setSkyColor([0.8,0.8,0.2,0.8,0.8,0.2,0.1,0.1,0.6,0.1,0.1,0.6,0.1,0.25,0.8,0.6,0.6,0.9])

Scene15.addChildren(Background21)
Viewpoint22 = x3d.Viewpoint()
Viewpoint22.setDescription("Heads-up display (HUD)")

Scene15.addChildren(Viewpoint22)
# ProtoDeclare is the \"cookie cutter\" template, ProtoInstance creates an actual occurrence 
ProtoInstance23 = x3d.ProtoInstance()
ProtoInstance23.setDEF("HeadsUpDisplayInstance")
ProtoInstance23.setName("HeadsUpDisplay")
# example: upper left-hand corner of screen (x=-2, y=1) and set back z=-5 from user view 
fieldValue24 = x3d.fieldValue()
fieldValue24.setName("screenOffset")
fieldValue24.setValue("-0.75 1 -5")

ProtoInstance23.addFieldValue(fieldValue24)
fieldValue25 = x3d.fieldValue()
fieldValue25.setName("children")
Shape26 = x3d.Shape()
Text27 = x3d.Text()
Text27.setString(["HUD text stays fixed","while user navigates"])
FontStyle28 = x3d.FontStyle()
FontStyle28.setJustify(["MIDDLE","MIDDLE"])
FontStyle28.setSize(0.3)

Text27.setFontStyle(FontStyle28)

Shape26.setGeometry(Text27)
Appearance29 = x3d.Appearance()
Material30 = x3d.Material()
Material30.setDiffuseColor([0.894118,0.819608,1])

Appearance29.setMaterial(Material30)

Shape26.setAppearance(Appearance29)

fieldValue25.addChildren(Shape26)

ProtoInstance23.addFieldValue(fieldValue25)

Scene15.addChildren(ProtoInstance23)
Inline31 = x3d.Inline()
Inline31.setUrl(["../HelloWorld.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.x3d","../HelloWorld.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.wrl"])

Scene15.addChildren(Inline31)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../data/HeadsUpDisplayExample_RoundTrip.x3d")
