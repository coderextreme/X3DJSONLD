import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setContent("Figure31_7DonutExternalPrototype.x3d")
meta2.setName("title")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setContent("Figure 31.7, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland")
meta3.setName("creator")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setContent("http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig07.htm")
meta4.setName("reference")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setContent("Don Brutzman")
meta5.setName("translator")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setContent("22 November 2000")
meta6.setName("created")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setContent("20 October 2019")
meta7.setName("modified")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setContent("A donut shape built using prototypes: the Donut geometry node and the LightOak appearance node. Also see Figures 30.5 and 31.6 for comparison.")
meta8.setName("description")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setContent("https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_7DonutExternalPrototype.x3d")
meta9.setName("identifier")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")
meta10.setName("generator")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setContent("../../license.html")
meta11.setName("license")

head1.addMeta(meta11)

X3D0.setHead(head1)
Scene12 = x3d.Scene()
WorldInfo13 = x3d.WorldInfo()
WorldInfo13.setTitle("Figure31_7DonutExternalPrototype.x3d")

Scene12.addChildren(WorldInfo13)
ExternProtoDeclare14 = x3d.ExternProtoDeclare()
ExternProtoDeclare14.setName("Donut")
ExternProtoDeclare14.setUrl(["Figure31_6DonutPrototype.wrl#Donut","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_6DonutPrototype.wrl#Donut","Figure31_6DonutPrototype.x3d#Donut","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_6DonutPrototype.x3d#Donut"])
field15 = x3d.field()
field15.setAccessType("initializeOnly")
field15.setName("crossSectionRadius")
field15.setType("SFFloat")

ExternProtoDeclare14.addField(field15)
field16 = x3d.field()
field16.setAccessType("initializeOnly")
field16.setName("spineRadius")
field16.setType("SFFloat")

ExternProtoDeclare14.addField(field16)
field17 = x3d.field()
field17.setAccessType("initializeOnly")
field17.setName("crossSectionResolution")
field17.setType("SFInt32")

ExternProtoDeclare14.addField(field17)
field18 = x3d.field()
field18.setAccessType("initializeOnly")
field18.setName("spineResolution")
field18.setType("SFInt32")

ExternProtoDeclare14.addField(field18)
field19 = x3d.field()
field19.setAccessType("inputOnly")
field19.setName("set_crossSectionRadius")
field19.setType("SFFloat")

ExternProtoDeclare14.addField(field19)
field20 = x3d.field()
field20.setAccessType("inputOnly")
field20.setName("set_spineRadius")
field20.setType("SFFloat")

ExternProtoDeclare14.addField(field20)

Scene12.addChildren(ExternProtoDeclare14)
ExternProtoDeclare21 = x3d.ExternProtoDeclare()
ExternProtoDeclare21.setName("LightOak")
ExternProtoDeclare21.setUrl(["Figure31_4WoodAppearancePrototypesLibrary.wrl#LightOak","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_4WoodAppearancePrototypesLibrary.wrl#LightOak","Figure31_4WoodAppearancePrototypesLibrary.x3d#LightOak","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_4WoodAppearancePrototypesLibrary.x3d#LightOak"])
field22 = x3d.field()
field22.setAccessType("inputOutput")
field22.setName("textureTransform")
field22.setType("SFNode")

ExternProtoDeclare21.addField(field22)

Scene12.addChildren(ExternProtoDeclare21)
Viewpoint23 = x3d.Viewpoint()
Viewpoint23.setDescription("Click to pick a size")
Viewpoint23.setOrientation([1,0,0,-0.52])
Viewpoint23.setPosition([0,7,12])

Scene12.addChildren(Viewpoint23)
# Donut instances from prototypes 
Transform24 = x3d.Transform()
Transform24.setTranslation([0,2,0])
Shape25 = x3d.Shape()
ProtoInstance26 = x3d.ProtoInstance()
ProtoInstance26.setName("Donut")
fieldValue27 = x3d.fieldValue()
fieldValue27.setName("crossSectionRadius")
fieldValue27.setValue("1")

ProtoInstance26.addFieldValue(fieldValue27)
fieldValue28 = x3d.fieldValue()
fieldValue28.setName("spineRadius")
fieldValue28.setValue("2")

ProtoInstance26.addFieldValue(fieldValue28)

Shape25.setGeometry(ProtoInstance26)
ProtoInstance29 = x3d.ProtoInstance()
ProtoInstance29.setName("LightOak")
fieldValue30 = x3d.fieldValue()
fieldValue30.setName("textureTransform")
TextureTransform31 = x3d.TextureTransform()
TextureTransform31.setCenter([0,5])
TextureTransform31.setRotation(0.758)
TextureTransform31.setScale([2,0.5])
TextureTransform31.setTranslation([0.5,0])

fieldValue30.addChildren(TextureTransform31)

ProtoInstance29.addFieldValue(fieldValue30)

Shape25.setAppearance(ProtoInstance29)

Transform24.addChildren(Shape25)

Scene12.addChildren(Transform24)
# Hmmm, what size donut do you really want? 
TimeSensor32 = x3d.TimeSensor()
TimeSensor32.setDEF("Clock")
TimeSensor32.setCycleInterval(10)
TimeSensor32.setLoop(True)

Scene12.addChildren(TimeSensor32)
ScalarInterpolator33 = x3d.ScalarInterpolator()
ScalarInterpolator33.setDEF("DonutThickness")
ScalarInterpolator33.setKey([0,0.4,0.5,0.9,1])
ScalarInterpolator33.setKeyValue([0.75,1.25,1.25,0.75,0.75])

Scene12.addChildren(ScalarInterpolator33)
Transform34 = x3d.Transform()
Transform34.setTranslation([0,-2,0])
Shape35 = x3d.Shape()
ProtoInstance36 = x3d.ProtoInstance()
ProtoInstance36.setDEF("SpecialtyOfTheHouse")
ProtoInstance36.setName("Donut")
fieldValue37 = x3d.fieldValue()
fieldValue37.setName("crossSectionRadius")
fieldValue37.setValue("0.5")

ProtoInstance36.addFieldValue(fieldValue37)
fieldValue38 = x3d.fieldValue()
fieldValue38.setName("spineRadius")
fieldValue38.setValue("2")

ProtoInstance36.addFieldValue(fieldValue38)

Shape35.setGeometry(ProtoInstance36)
Appearance39 = x3d.Appearance()
ImageTexture40 = x3d.ImageTexture()
ImageTexture40.setUrl(["../Chapter17Textures/icing.jpg","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter17Textures/icing.jpg"])

Appearance39.setTexture(ImageTexture40)

Shape35.setAppearance(Appearance39)

Transform34.addChildren(Shape35)
TouchSensor41 = x3d.TouchSensor()
TouchSensor41.setDEF("StopSizeChanges")
TouchSensor41.setDescription("touch to stop size changes")

Transform34.addChildren(TouchSensor41)

Scene12.addChildren(Transform34)
ROUTE42 = x3d.ROUTE()
ROUTE42.setFromField("fraction_changed")
ROUTE42.setFromNode("Clock")
ROUTE42.setToField("set_fraction")
ROUTE42.setToNode("DonutThickness")

Scene12.addChildren(ROUTE42)
ROUTE43 = x3d.ROUTE()
ROUTE43.setFromField("value_changed")
ROUTE43.setFromNode("DonutThickness")
ROUTE43.setToField("set_crossSectionRadius")
ROUTE43.setToNode("SpecialtyOfTheHouse")

Scene12.addChildren(ROUTE43)
ROUTE44 = x3d.ROUTE()
ROUTE44.setFromField("touchTime")
ROUTE44.setFromNode("StopSizeChanges")
ROUTE44.setToField("stopTime")
ROUTE44.setToNode("Clock")

Scene12.addChildren(ROUTE44)

X3D0.setScene(Scene12)
X3D0.toFileX3D("../data/Figure31_7DonutExternalPrototype_RoundTrip.x3d")
