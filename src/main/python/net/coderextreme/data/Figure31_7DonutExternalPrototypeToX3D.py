import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setVersion("3.1")
X3D0.setProfile("Full")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("test\\Figure31.7DonutExternalPrototypeToX3D.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("*enter description here, short-sentence summaries preferred*")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("*enter name of original author here*")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("translator")
meta5.setContent("*if manually translating VRML-to-X3D, enter name of person translating here*")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("created")
meta6.setContent("*enter date of initial version here*")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("translated")
meta7.setContent("03 December 2011")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("modified")
meta8.setContent("03 December 2011")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("version")
meta9.setContent("*enter version here*")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("*enter reference citation or relative/online url here*")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("*enter additional url/bibliographic reference information here*")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("requires")
meta12.setContent("*enter reference resource here if required to support function, delivery, or coherence of content*")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("rights")
meta13.setContent("*enter copyright information here* Example:  Copyright (c) Web3D Consortium Inc. 2006")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("drawing")
meta14.setContent("*enter drawing filename/url here*")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("image")
meta15.setContent("*enter image filename/url here*")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("MovingImage")
meta16.setContent("*enter movie filename/url here*")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("photo")
meta17.setContent("*enter photo filename/url here*")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("subject")
meta18.setContent("*enter subject keywords here*")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("accessRights")
meta19.setContent("*enter permission statements or url here*")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("warning")
meta20.setContent("*insert any known warnings, bugs or errors here*")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("identifier")
meta21.setContent("http://*enter online url address for this file here*/test\\Figure31.7DonutExternalPrototypeToX3D.x3d")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("generator")
meta22.setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("license")
meta23.setContent("../../license.html")

head1.addMeta(meta23)

X3D0.setHead(head1)
Scene24 = x3d.Scene()
NavigationInfo25 = x3d.NavigationInfo()
NavigationInfo25.setType(["EXAMINE","ANY"])

Scene24.addChildren(NavigationInfo25)
ExternProtoDeclare26 = x3d.ExternProtoDeclare()
ExternProtoDeclare26.setName("Donut")
ExternProtoDeclare26.setUrl(["Figure31.6DonutPrototype.wrl#Donut","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.6DonutPrototype.wrl#Donut","Figure31.6DonutPrototype.x3d#Donut","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.6DonutPrototype.x3d#Donut"])
field27 = x3d.field()
field27.setName("crossSectionRadius")
field27.setType("SFFloat")
field27.setAccessType("initializeOnly")

ExternProtoDeclare26.addField(field27)
field28 = x3d.field()
field28.setName("set_spineRadius")
field28.setType("SFFloat")
field28.setAccessType("inputOnly")

ExternProtoDeclare26.addField(field28)
field29 = x3d.field()
field29.setName("set_crossSectionRadius")
field29.setType("SFFloat")
field29.setAccessType("inputOnly")

ExternProtoDeclare26.addField(field29)
field30 = x3d.field()
field30.setName("spineResolution")
field30.setType("SFInt32")
field30.setAccessType("initializeOnly")

ExternProtoDeclare26.addField(field30)
field31 = x3d.field()
field31.setName("crossSectionResolution")
field31.setType("SFInt32")
field31.setAccessType("initializeOnly")

ExternProtoDeclare26.addField(field31)
field32 = x3d.field()
field32.setName("spineRadius")
field32.setType("SFFloat")
field32.setAccessType("initializeOnly")

ExternProtoDeclare26.addField(field32)

Scene24.addChildren(ExternProtoDeclare26)
ExternProtoDeclare33 = x3d.ExternProtoDeclare()
ExternProtoDeclare33.setName("LightOak")
ExternProtoDeclare33.setUrl(["Figure31.4WoodAppearancePrototypesLibrary.wrl#LightOak","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.4WoodAppearancePrototypesLibrary.wrl#LightOak","Figure31.4WoodAppearancePrototypesLibrary.x3d#LightOak","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.4WoodAppearancePrototypesLibrary.x3d#LightOak"])
field34 = x3d.field()
field34.setName("textureTransform")
field34.setType("SFNode")
field34.setAccessType("inputOutput")

ExternProtoDeclare33.addField(field34)

Scene24.addChildren(ExternProtoDeclare33)
Viewpoint35 = x3d.Viewpoint()
Viewpoint35.setPosition([0,7,12])
Viewpoint35.setOrientation([1,0,0,-0.52])
Viewpoint35.setDescription("Click to pick a size")

Scene24.addChildren(Viewpoint35)
Transform36 = x3d.Transform()
Transform36.setTranslation([0,2,0])
Shape37 = x3d.Shape()
ProtoInstance38 = x3d.ProtoInstance()
ProtoInstance38.setName("LightOak")
fieldValue39 = x3d.fieldValue()
fieldValue39.setName("textureTransform")
TextureTransform40 = x3d.TextureTransform()
TextureTransform40.setCenter([0,5])
TextureTransform40.setRotation(0.758)
TextureTransform40.setScale([2,0.5])
TextureTransform40.setTranslation([0.5,0])

fieldValue39.addChildren(TextureTransform40)

ProtoInstance38.addFieldValue(fieldValue39)

Shape37.setGeometry(ProtoInstance38)
ProtoInstance41 = x3d.ProtoInstance()
ProtoInstance41.setName("Donut")
fieldValue42 = x3d.fieldValue()
fieldValue42.setName("crossSectionRadius")
fieldValue42.setValue("1")

ProtoInstance41.addFieldValue(fieldValue42)
fieldValue43 = x3d.fieldValue()
fieldValue43.setName("spineRadius")
fieldValue43.setValue("2")

ProtoInstance41.addFieldValue(fieldValue43)

Shape37.setGeometry(ProtoInstance41)

Transform36.addChildren(Shape37)

Scene24.addChildren(Transform36)
TimeSensor44 = x3d.TimeSensor()
TimeSensor44.setDEF("Clock")
TimeSensor44.setLoop(True)
TimeSensor44.setCycleInterval(10)

Scene24.addChildren(TimeSensor44)
ScalarInterpolator45 = x3d.ScalarInterpolator()
ScalarInterpolator45.setDEF("DonutThickness")
ScalarInterpolator45.setKey([0,0.4,0.5,0.9,1])
ScalarInterpolator45.setKeyValue([0.75,1.25,1.25,0.75,0.75])

Scene24.addChildren(ScalarInterpolator45)
Transform46 = x3d.Transform()
Transform46.setTranslation([0,-2,0])
Shape47 = x3d.Shape()
Appearance48 = x3d.Appearance()
ImageTexture49 = x3d.ImageTexture()
ImageTexture49.setUrl(["../Chapter17-Textures/icing.jpg","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter17-Textures/icing.jpg"])

Appearance48.setTexture(ImageTexture49)

Shape47.setAppearance(Appearance48)
ProtoInstance50 = x3d.ProtoInstance()
ProtoInstance50.setName("Donut")
ProtoInstance50.setDEF("SpecialtyOfTheHouse")
fieldValue51 = x3d.fieldValue()
fieldValue51.setName("crossSectionRadius")
fieldValue51.setValue("0.5")

ProtoInstance50.addFieldValue(fieldValue51)
fieldValue52 = x3d.fieldValue()
fieldValue52.setName("spineRadius")
fieldValue52.setValue("2")

ProtoInstance50.addFieldValue(fieldValue52)

Shape47.setGeometry(ProtoInstance50)

Transform46.addChildren(Shape47)
TouchSensor53 = x3d.TouchSensor()
TouchSensor53.setDEF("StopSizeChanges")

Transform46.addChildren(TouchSensor53)

Scene24.addChildren(Transform46)
ROUTE54 = x3d.ROUTE()
ROUTE54.setFromNode("Clock")
ROUTE54.setFromField("fraction_changed")
ROUTE54.setToNode("DonutThickness")
ROUTE54.setToField("set_fraction")

Scene24.addChildren(ROUTE54)
ROUTE55 = x3d.ROUTE()
ROUTE55.setFromNode("DonutThickness")
ROUTE55.setFromField("value_changed")
ROUTE55.setToNode("SpecialtyOfTheHouse")
ROUTE55.setToField("set_crossSectionRadius")

Scene24.addChildren(ROUTE55)
ROUTE56 = x3d.ROUTE()
ROUTE56.setFromNode("StopSizeChanges")
ROUTE56.setFromField("touchTime")
ROUTE56.setToNode("Clock")
ROUTE56.setToField("stopTime")

Scene24.addChildren(ROUTE56)

X3D0.setScene(Scene24)
X3D0.toFileX3D("../data/Figure31_7DonutExternalPrototypeToX3D_RoundTrip.x3d")
