import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Full")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Scripting")
component2.setLevel(1)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("EnvironmentalEffects")
component3.setLevel(3)

head1.addComponent(component3)
component4 = x3d.component()
component4.setName("Shaders")
component4.setLevel(1)

head1.addComponent(component4)
component5 = x3d.component()
component5.setName("CubeMapTexturing")
component5.setLevel(1)

head1.addComponent(component5)
component6 = x3d.component()
component6.setName("Texturing")
component6.setLevel(1)

head1.addComponent(component6)
component7 = x3d.component()
component7.setName("Rendering")
component7.setLevel(1)

head1.addComponent(component7)
component8 = x3d.component()
component8.setName("Grouping")
component8.setLevel(3)

head1.addComponent(component8)
component9 = x3d.component()
component9.setName("Core")
component9.setLevel(1)

head1.addComponent(component9)
component10 = x3d.component()
component10.setName("DIS")
component10.setLevel(2)

head1.addComponent(component10)
#<component name='Shape' level='4'></component>
#Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L
meta11 = x3d.meta()
meta11.setName("title")
meta11.setContent("bumpfreewrlsliders.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("description")
meta12.setContent("*enter description here, short-sentence summaries preferred*")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("creator")
meta13.setContent("Doug Sanden, Christoph Valentin, John Carlson")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("translator")
meta14.setContent("*if manually translating VRML-to-X3D, enter name of person translating here*")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("created")
meta15.setContent("*enter date of initial version here*")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("translated")
meta16.setContent("*enter date of translation here*")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("modified")
meta17.setContent("*enter date of latest revision here*")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("version")
meta18.setContent("*enter version here, if any*")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("reference")
meta19.setContent("*enter reference citation or relative/online url here*")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("reference")
meta20.setContent("*enter additional url/bibliographic reference information here*")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("requires")
meta21.setContent("*enter reference resource here if required to support function, delivery, or coherence of content*")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("rights")
meta22.setContent("*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("drawing")
meta23.setContent("*enter drawing filename/url here*")

head1.addMeta(meta23)
meta24 = x3d.meta()
meta24.setName("MovingImage")
meta24.setContent("*enter movie filename/url here*")

head1.addMeta(meta24)
meta25 = x3d.meta()
meta25.setName("photo")
meta25.setContent("*enter photo filename/url here*")

head1.addMeta(meta25)
meta26 = x3d.meta()
meta26.setName("subject")
meta26.setContent("*enter subject keywords here*")

head1.addMeta(meta26)
meta27 = x3d.meta()
meta27.setName("accessRights")
meta27.setContent("*enter permission statements or url here*")

head1.addMeta(meta27)
meta28 = x3d.meta()
meta28.setName("identifier")
meta28.setContent("*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*")

head1.addMeta(meta28)
meta29 = x3d.meta()
meta29.setName("generator")
meta29.setContent("PSPad, http://www.pspad.com/")

head1.addMeta(meta29)
meta30 = x3d.meta()
meta30.setName("license")
meta30.setContent("license.html")

head1.addMeta(meta30)

X3D0.setHead(head1)
#\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution, It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) open for their \"discussion about the teapot\"
Scene31 = x3d.Scene()
#LayerSet with two layers, navigation happens in layer 1
LayerSet32 = x3d.LayerSet()
LayerSet32.setActiveLayer(1)
LayerSet32.setOrder([1,2])
#the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
#the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)
Layer33 = x3d.Layer()
#basic nodes, which might be present in any scene
NavigationInfo34 = x3d.NavigationInfo()
NavigationInfo34.setType(["EXAMINE"])
NavigationInfo34.setAvatarSize([0.25,1.75,0.75])

Layer33.addChildren(NavigationInfo34)
DirectionalLight35 = x3d.DirectionalLight()
DirectionalLight35.setAmbientIntensity(0.2)
DirectionalLight35.setDirection([0,-1,0])

Layer33.addChildren(DirectionalLight35)
DirectionalLight36 = x3d.DirectionalLight()
DirectionalLight36.setAmbientIntensity(0.2)
DirectionalLight36.setDirection([-1,-0.1,-1])

Layer33.addChildren(DirectionalLight36)
Viewpoint37 = x3d.Viewpoint()
Viewpoint37.setDescription("My Overview")
Viewpoint37.setFieldOfView(1.570796)
Viewpoint37.setPosition([0,1.75,60])

Layer33.addChildren(Viewpoint37)
#this group contains the red/green/blue 3D crosshair
Group38 = x3d.Group()
#Arrow X
Transform39 = x3d.Transform()
Transform39.setTranslation([25,0,0])
Transform39.setRotation([0,0,-1,1.57])
Shape40 = x3d.Shape()
Cylinder41 = x3d.Cylinder()
Cylinder41.setDEF("Shaft")
Cylinder41.setRadius(0.35)
Cylinder41.setHeight(50)

Shape40.setGeometry(Cylinder41)
Appearance42 = x3d.Appearance()
Material43 = x3d.Material()
Material43.setDEF("RED")
Material43.setDiffuseColor([1,0,0])
Material43.setEmissiveColor([1,0,0])

Appearance42.setMaterial(Material43)

Shape40.setAppearance(Appearance42)

Transform39.addChild(Shape40)

Group38.addChildren(Transform39)
Transform44 = x3d.Transform()
Transform44.setTranslation([50,0,0])
Transform44.setRotation([0,0,-1,1.57])
Shape45 = x3d.Shape()
Cone46 = x3d.Cone()
Cone46.setDEF("Tip")
Cone46.setBottomRadius(0.8)
Cone46.setHeight(3)

Shape45.setGeometry(Cone46)
Appearance47 = x3d.Appearance()
Material48 = x3d.Material()
Material48.setUSE("RED")

Appearance47.setMaterial(Material48)

Shape45.setAppearance(Appearance47)

Transform44.addChild(Shape45)

Group38.addChildren(Transform44)
#Arrow Y
Transform49 = x3d.Transform()
Transform49.setTranslation([0,25,0])
Shape50 = x3d.Shape()
Cylinder51 = x3d.Cylinder()
Cylinder51.setUSE("Shaft")

Shape50.setGeometry(Cylinder51)
Appearance52 = x3d.Appearance()
Material53 = x3d.Material()
Material53.setDEF("GREEN")
Material53.setDiffuseColor([0,1,0])
Material53.setEmissiveColor([0,1,0])

Appearance52.setMaterial(Material53)

Shape50.setAppearance(Appearance52)

Transform49.addChild(Shape50)

Group38.addChildren(Transform49)
Transform54 = x3d.Transform()
Transform54.setTranslation([0,50,0])
Shape55 = x3d.Shape()
Cone56 = x3d.Cone()
Cone56.setUSE("Tip")

Shape55.setGeometry(Cone56)
Appearance57 = x3d.Appearance()
Material58 = x3d.Material()
Material58.setUSE("GREEN")

Appearance57.setMaterial(Material58)

Shape55.setAppearance(Appearance57)

Transform54.addChild(Shape55)

Group38.addChildren(Transform54)
#Arrow Z
Transform59 = x3d.Transform()
Transform59.setTranslation([0,0,25])
Transform59.setRotation([1,0,0,1.57])
Shape60 = x3d.Shape()
Cylinder61 = x3d.Cylinder()
Cylinder61.setUSE("Shaft")

Shape60.setGeometry(Cylinder61)
Appearance62 = x3d.Appearance()
Material63 = x3d.Material()
Material63.setDEF("BLUE")
Material63.setDiffuseColor([0,0,1])
Material63.setEmissiveColor([0,0,1])

Appearance62.setMaterial(Material63)

Shape60.setAppearance(Appearance62)

Transform59.addChild(Shape60)

Group38.addChildren(Transform59)
Transform64 = x3d.Transform()
Transform64.setTranslation([0,0,50])
Transform64.setRotation([1,0,0,1.57])
Shape65 = x3d.Shape()
Cone66 = x3d.Cone()
Cone66.setUSE("Tip")

Shape65.setGeometry(Cone66)
Appearance67 = x3d.Appearance()
Material68 = x3d.Material()
Material68.setUSE("BLUE")

Appearance67.setMaterial(Material68)

Shape65.setAppearance(Appearance67)

Transform64.addChild(Shape65)

Group38.addChildren(Transform64)

Layer33.addChildren(Group38)
#the model that is being reviewed by the users of this scene
Transform69 = x3d.Transform()
Transform69.setDEF("FlowerTransform")
#<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />
#Images courtesy of Paul Debevec's Light Probe Image Gallery
Background70 = x3d.Background()
Background70.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background70.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background70.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background70.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background70.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background70.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Transform69.addChildren(Background70)
Shape71 = x3d.Shape()
Sphere72 = x3d.Sphere()
Sphere72.setRadius(40)

Shape71.setGeometry(Sphere72)
Appearance73 = x3d.Appearance()
Material74 = x3d.Material()
Material74.setDiffuseColor([0.7,0.7,0.7])
Material74.setSpecularColor([0.5,0.5,0.5])

Appearance73.setMaterial(Material74)
ComposedCubeMapTexture75 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture75.setDEF("texture")
ImageTexture76 = x3d.ImageTexture()
ImageTexture76.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture75.setBack(ImageTexture76)
ImageTexture77 = x3d.ImageTexture()
ImageTexture77.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture75.setBottom(ImageTexture77)
ImageTexture78 = x3d.ImageTexture()
ImageTexture78.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture75.setFront(ImageTexture78)
ImageTexture79 = x3d.ImageTexture()
ImageTexture79.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture75.setLeft(ImageTexture79)
ImageTexture80 = x3d.ImageTexture()
ImageTexture80.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture75.setRight(ImageTexture80)
ImageTexture81 = x3d.ImageTexture()
ImageTexture81.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture75.setTop(ImageTexture81)

Appearance73.setTexture(ComposedCubeMapTexture75)
ComposedShader82 = x3d.ComposedShader()
ComposedShader82.setDEF("freewrlShader")
ComposedShader82.setLanguage("GLSL")
field83 = x3d.field()
field83.setName("chromaticDispertion")
field83.setAccessType("inputOnly")
field83.setType("SFVec3f")
field83.setValue("0.98 1 1.033")

ComposedShader82.addField(field83)
field84 = x3d.field()
field84.setName("fw_textureCoordGenType")
field84.setAccessType("inputOnly")
field84.setType("SFInt32")
field84.setValue("0")

ComposedShader82.addField(field84)
field85 = x3d.field()
field85.setName("bias")
field85.setType("SFFloat")
field85.setAccessType("inputOnly")
field85.setValue("0.5")

ComposedShader82.addField(field85)
field86 = x3d.field()
field86.setName("scale")
field86.setType("SFFloat")
field86.setAccessType("inputOnly")
field86.setValue("0.5")

ComposedShader82.addField(field86)
field87 = x3d.field()
field87.setName("power")
field87.setType("SFFloat")
field87.setAccessType("inputOnly")
field87.setValue("2")

ComposedShader82.addField(field87)
field88 = x3d.field()
field88.setName("a")
field88.setType("SFFloat")
field88.setAccessType("inputOutput")
field88.setValue("15")

ComposedShader82.addField(field88)
field89 = x3d.field()
field89.setName("b")
field89.setType("SFFloat")
field89.setAccessType("inputOutput")
field89.setValue("5")

ComposedShader82.addField(field89)
field90 = x3d.field()
field90.setName("c")
field90.setType("SFFloat")
field90.setAccessType("inputOutput")
field90.setValue("5")

ComposedShader82.addField(field90)
field91 = x3d.field()
field91.setName("d")
field91.setType("SFFloat")
field91.setAccessType("inputOutput")
field91.setValue("5")

ComposedShader82.addField(field91)
field92 = x3d.field()
field92.setName("tdelta")
field92.setType("SFFloat")
field92.setAccessType("inputOutput")
field92.setValue("0")

ComposedShader82.addField(field92)
field93 = x3d.field()
field93.setName("pdelta")
field93.setType("SFFloat")
field93.setAccessType("inputOutput")
field93.setValue("0")

ComposedShader82.addField(field93)
ShaderPart94 = x3d.ShaderPart()
ShaderPart94.setUrl(["../shaders/freewrl_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"])
ShaderPart94.setType("VERTEX")

ComposedShader82.addParts(ShaderPart94)
ShaderPart95 = x3d.ShaderPart()
ShaderPart95.setUrl(["../shaders/freewrl_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"])
ShaderPart95.setType("FRAGMENT")

ComposedShader82.addParts(ShaderPart95)

Appearance73.addShaders(ComposedShader82)

Shape71.setAppearance(Appearance73)

Transform69.addChild(Shape71)

Layer33.addChildren(Transform69)
#DIS multiuser facilities
DISEntityManager96 = x3d.DISEntityManager()
DISEntityManager96.setDEF("EntityManager")
DISEntityManager96.setNetworkMode("networkReader")
DISEntityTypeMapping97 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping97.setCategory(77)
DISEntityTypeMapping97.setSpecific(1)
DISEntityTypeMapping97.setUrl(["../data/Leif8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"])

DISEntityManager96.addChildren(DISEntityTypeMapping97)
DISEntityTypeMapping98 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping98.setCategory(77)
DISEntityTypeMapping98.setSpecific(2)
DISEntityTypeMapping98.setUrl(["../data/Lily8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"])

DISEntityManager96.addChildren(DISEntityTypeMapping98)

Layer33.addChildren(DISEntityManager96)
Collision99 = x3d.Collision()
Collision99.setEnabled(False)
Group100 = x3d.Group()
Group100.setDEF("AvatarHolder")

Collision99.setProxy(Group100)

Layer33.addChildren(Collision99)
ROUTE101 = x3d.ROUTE()
ROUTE101.setFromField("addedEntities")
ROUTE101.setFromNode("EntityManager")
ROUTE101.setToField("addChildren")
ROUTE101.setToNode("AvatarHolder")

Layer33.addChildren(ROUTE101)
ROUTE102 = x3d.ROUTE()
ROUTE102.setFromField("removedEntities")
ROUTE102.setFromNode("EntityManager")
ROUTE102.setToField("removeChildren")
ROUTE102.setToNode("AvatarHolder")

Layer33.addChildren(ROUTE102)

LayerSet32.addLayers(Layer33)
LayoutLayer103 = x3d.LayoutLayer()
#positioning the LayoutLayer
#clipping the LayoutLayer
#the content (children) of the LayoutLayer
#first, the slider for scaling the model
Transform104 = x3d.Transform()
Transform104.setTranslation([0,0,-3])
Shape105 = x3d.Shape()
Appearance106 = x3d.Appearance()
Material107 = x3d.Material()
Material107.setDiffuseColor([0,0,0])
Material107.setTransparency(0.7)

Appearance106.setMaterial(Material107)

Shape105.setAppearance(Appearance106)
Box108 = x3d.Box()
Box108.setSize([100,100,0.02])

Shape105.setGeometry(Box108)

Transform104.addChild(Shape105)

LayoutLayer103.addChildren(Transform104)
#the plane sensors
Transform109 = x3d.Transform()
Transform109.setDEF("aSlider")
Transform109.setTranslation([0,0.7,0])
Transform110 = x3d.Transform()
Transform110.setRotation([0,0,1,1.57])
Shape111 = x3d.Shape()
Appearance112 = x3d.Appearance()
Material113 = x3d.Material()

Appearance112.setMaterial(Material113)

Shape111.setAppearance(Appearance112)
Cylinder114 = x3d.Cylinder()
Cylinder114.setRadius(0.05)
Cylinder114.setHeight(2.5)

Shape111.setGeometry(Cylinder114)

Transform110.addChild(Shape111)

Transform109.addChildren(Transform110)
Transform115 = x3d.Transform()
Transform115.setDEF("aTransform")
Transform115.setTranslation([0,0,0.1])
PlaneSensor116 = x3d.PlaneSensor()
PlaneSensor116.setDEF("aSensor")
PlaneSensor116.setMinPosition([-20,0])
PlaneSensor116.setMaxPosition([20,0])

Transform115.addChildren(PlaneSensor116)
Transform117 = x3d.Transform()
Transform117.setTranslation([0,0,0])
TouchSensor118 = x3d.TouchSensor()
TouchSensor118.setDEF("aTS")

Transform117.addChildren(TouchSensor118)
Shape119 = x3d.Shape()
Sphere120 = x3d.Sphere()
Sphere120.setRadius(0.08)

Shape119.setGeometry(Sphere120)
Appearance121 = x3d.Appearance()
Material122 = x3d.Material()
Material122.setDiffuseColor([1,0,0])

Appearance121.setMaterial(Material122)

Shape119.setAppearance(Appearance121)

Transform117.addChild(Shape119)

Transform115.addChildren(Transform117)
Shape123 = x3d.Shape()
Cylinder124 = x3d.Cylinder()
Cylinder124.setRadius(0.05)
Cylinder124.setHeight(0.3)

Shape123.setGeometry(Cylinder124)
Appearance125 = x3d.Appearance()
Material126 = x3d.Material()

Appearance125.setMaterial(Material126)

Shape123.setAppearance(Appearance125)

Transform115.addChild(Shape123)

Transform109.addChildren(Transform115)
Transform127 = x3d.Transform()
Transform127.setRotation([0,0,1,1.57])
Shape128 = x3d.Shape()
Appearance129 = x3d.Appearance()
Material130 = x3d.Material()

Appearance129.setMaterial(Material130)

Shape128.setAppearance(Appearance129)
Cylinder131 = x3d.Cylinder()
Cylinder131.setRadius(0.05)
Cylinder131.setHeight(2.5)

Shape128.setGeometry(Cylinder131)

Transform127.addChild(Shape128)

Transform109.addChildren(Transform127)

LayoutLayer103.addChildren(Transform109)
Transform132 = x3d.Transform()
Transform132.setDEF("bSlider")
Transform132.setTranslation([0,0.4,0])
Transform133 = x3d.Transform()
Transform133.setRotation([0,0,1,1.57])
Shape134 = x3d.Shape()
Appearance135 = x3d.Appearance()
Material136 = x3d.Material()

Appearance135.setMaterial(Material136)

Shape134.setAppearance(Appearance135)
Cylinder137 = x3d.Cylinder()
Cylinder137.setRadius(0.05)
Cylinder137.setHeight(2.5)

Shape134.setGeometry(Cylinder137)

Transform133.addChild(Shape134)

Transform132.addChildren(Transform133)
Transform138 = x3d.Transform()
Transform138.setDEF("bTransform")
Transform138.setTranslation([0,0,0.1])
PlaneSensor139 = x3d.PlaneSensor()
PlaneSensor139.setDEF("bSensor")
PlaneSensor139.setMinPosition([-20,0])
PlaneSensor139.setMaxPosition([20,0])

Transform138.addChildren(PlaneSensor139)
Transform140 = x3d.Transform()
Transform140.setTranslation([0,0,0])
TouchSensor141 = x3d.TouchSensor()
TouchSensor141.setDEF("bTS")

Transform140.addChildren(TouchSensor141)
Shape142 = x3d.Shape()
Sphere143 = x3d.Sphere()
Sphere143.setRadius(0.08)

Shape142.setGeometry(Sphere143)
Appearance144 = x3d.Appearance()
Material145 = x3d.Material()
Material145.setDiffuseColor([1,0,0])

Appearance144.setMaterial(Material145)

Shape142.setAppearance(Appearance144)

Transform140.addChild(Shape142)

Transform138.addChildren(Transform140)
Shape146 = x3d.Shape()
Cylinder147 = x3d.Cylinder()
Cylinder147.setRadius(0.05)
Cylinder147.setHeight(0.3)

Shape146.setGeometry(Cylinder147)
Appearance148 = x3d.Appearance()
Material149 = x3d.Material()

Appearance148.setMaterial(Material149)

Shape146.setAppearance(Appearance148)

Transform138.addChild(Shape146)

Transform132.addChildren(Transform138)

LayoutLayer103.addChildren(Transform132)
Transform150 = x3d.Transform()
Transform150.setDEF("cSlider")
Transform150.setTranslation([0,0.1,0])
Transform151 = x3d.Transform()
Transform151.setRotation([0,0,1,1.57])
Shape152 = x3d.Shape()
Appearance153 = x3d.Appearance()
Material154 = x3d.Material()

Appearance153.setMaterial(Material154)

Shape152.setAppearance(Appearance153)
Cylinder155 = x3d.Cylinder()
Cylinder155.setRadius(0.05)
Cylinder155.setHeight(2.5)

Shape152.setGeometry(Cylinder155)

Transform151.addChild(Shape152)

Transform150.addChildren(Transform151)
Transform156 = x3d.Transform()
Transform156.setDEF("cTransform")
Transform156.setTranslation([0,0,0.1])
PlaneSensor157 = x3d.PlaneSensor()
PlaneSensor157.setDEF("cSensor")
PlaneSensor157.setMinPosition([-20,0])
PlaneSensor157.setMaxPosition([20,0])

Transform156.addChildren(PlaneSensor157)
Transform158 = x3d.Transform()
Transform158.setTranslation([0,0,0])
TouchSensor159 = x3d.TouchSensor()
TouchSensor159.setDEF("cTS")

Transform158.addChildren(TouchSensor159)
Shape160 = x3d.Shape()
Sphere161 = x3d.Sphere()
Sphere161.setRadius(0.08)

Shape160.setGeometry(Sphere161)
Appearance162 = x3d.Appearance()
Material163 = x3d.Material()
Material163.setDiffuseColor([1,0,0])

Appearance162.setMaterial(Material163)

Shape160.setAppearance(Appearance162)

Transform158.addChild(Shape160)

Transform156.addChildren(Transform158)
Shape164 = x3d.Shape()
Cylinder165 = x3d.Cylinder()
Cylinder165.setRadius(0.05)
Cylinder165.setHeight(0.3)

Shape164.setGeometry(Cylinder165)
Appearance166 = x3d.Appearance()
Material167 = x3d.Material()

Appearance166.setMaterial(Material167)

Shape164.setAppearance(Appearance166)

Transform156.addChild(Shape164)

Transform150.addChildren(Transform156)

LayoutLayer103.addChildren(Transform150)
Transform168 = x3d.Transform()
Transform168.setDEF("dSlider")
Transform168.setTranslation([0,-0.2,0])
Transform169 = x3d.Transform()
Transform169.setRotation([0,0,1,1.57])
Shape170 = x3d.Shape()
Appearance171 = x3d.Appearance()
Material172 = x3d.Material()

Appearance171.setMaterial(Material172)

Shape170.setAppearance(Appearance171)
Cylinder173 = x3d.Cylinder()
Cylinder173.setRadius(0.05)
Cylinder173.setHeight(2.5)

Shape170.setGeometry(Cylinder173)

Transform169.addChild(Shape170)

Transform168.addChildren(Transform169)
Transform174 = x3d.Transform()
Transform174.setDEF("dTransform")
Transform174.setTranslation([0,0,0.1])
PlaneSensor175 = x3d.PlaneSensor()
PlaneSensor175.setDEF("dSensor")
PlaneSensor175.setMinPosition([-20,0])
PlaneSensor175.setMaxPosition([20,0])

Transform174.addChildren(PlaneSensor175)
Transform176 = x3d.Transform()
Transform176.setTranslation([0,0,0])
TouchSensor177 = x3d.TouchSensor()
TouchSensor177.setDEF("dTS")

Transform176.addChildren(TouchSensor177)
Shape178 = x3d.Shape()
Sphere179 = x3d.Sphere()
Sphere179.setRadius(0.08)

Shape178.setGeometry(Sphere179)
Appearance180 = x3d.Appearance()
Material181 = x3d.Material()
Material181.setDiffuseColor([1,0,0])

Appearance180.setMaterial(Material181)

Shape178.setAppearance(Appearance180)

Transform176.addChild(Shape178)

Transform174.addChildren(Transform176)
Shape182 = x3d.Shape()
Cylinder183 = x3d.Cylinder()
Cylinder183.setRadius(0.05)
Cylinder183.setHeight(0.3)

Shape182.setGeometry(Cylinder183)
Appearance184 = x3d.Appearance()
Material185 = x3d.Material()

Appearance184.setMaterial(Material185)

Shape182.setAppearance(Appearance184)

Transform174.addChild(Shape182)

Transform168.addChildren(Transform174)

LayoutLayer103.addChildren(Transform168)
Transform186 = x3d.Transform()
Transform186.setDEF("pdeltaSlider")
Transform186.setTranslation([0,-0.5,0])
Transform187 = x3d.Transform()
Transform187.setRotation([0,0,1,1.57])
Shape188 = x3d.Shape()
Appearance189 = x3d.Appearance()
Material190 = x3d.Material()

Appearance189.setMaterial(Material190)

Shape188.setAppearance(Appearance189)
Cylinder191 = x3d.Cylinder()
Cylinder191.setRadius(0.05)
Cylinder191.setHeight(2.5)

Shape188.setGeometry(Cylinder191)

Transform187.addChild(Shape188)

Transform186.addChildren(Transform187)
Transform192 = x3d.Transform()
Transform192.setDEF("pdeltaTransform")
Transform192.setTranslation([0,0,0.1])
PlaneSensor193 = x3d.PlaneSensor()
PlaneSensor193.setDEF("pdeltaSensor")
PlaneSensor193.setMinPosition([-20,0])
PlaneSensor193.setMaxPosition([20,0])

Transform192.addChildren(PlaneSensor193)
Transform194 = x3d.Transform()
Transform194.setTranslation([0,0,0])
TouchSensor195 = x3d.TouchSensor()
TouchSensor195.setDEF("pdeltaTS")

Transform194.addChildren(TouchSensor195)
Shape196 = x3d.Shape()
Sphere197 = x3d.Sphere()
Sphere197.setRadius(0.08)

Shape196.setGeometry(Sphere197)
Appearance198 = x3d.Appearance()
Material199 = x3d.Material()
Material199.setDiffuseColor([1,0,0])

Appearance198.setMaterial(Material199)

Shape196.setAppearance(Appearance198)

Transform194.addChild(Shape196)

Transform192.addChildren(Transform194)
Shape200 = x3d.Shape()
Cylinder201 = x3d.Cylinder()
Cylinder201.setRadius(0.05)
Cylinder201.setHeight(0.3)

Shape200.setGeometry(Cylinder201)
Appearance202 = x3d.Appearance()
Material203 = x3d.Material()

Appearance202.setMaterial(Material203)

Shape200.setAppearance(Appearance202)

Transform192.addChild(Shape200)

Transform186.addChildren(Transform192)

LayoutLayer103.addChildren(Transform186)
Transform204 = x3d.Transform()
Transform204.setDEF("tdeltaSlider")
Transform204.setTranslation([0,-0.8,0])
Transform205 = x3d.Transform()
Transform205.setRotation([0,0,1,1.57])
Shape206 = x3d.Shape()
Appearance207 = x3d.Appearance()
Material208 = x3d.Material()

Appearance207.setMaterial(Material208)

Shape206.setAppearance(Appearance207)
Cylinder209 = x3d.Cylinder()
Cylinder209.setRadius(0.05)
Cylinder209.setHeight(2.5)

Shape206.setGeometry(Cylinder209)

Transform205.addChild(Shape206)

Transform204.addChildren(Transform205)
Transform210 = x3d.Transform()
Transform210.setDEF("tdeltaTransform")
Transform210.setTranslation([0,0,0.1])
PlaneSensor211 = x3d.PlaneSensor()
PlaneSensor211.setDEF("tdeltaSensor")
PlaneSensor211.setMinPosition([-20,0])
PlaneSensor211.setMaxPosition([20,0])

Transform210.addChildren(PlaneSensor211)
Transform212 = x3d.Transform()
Transform212.setTranslation([0,0,0])
TouchSensor213 = x3d.TouchSensor()
TouchSensor213.setDEF("tdeltaTS")

Transform212.addChildren(TouchSensor213)
Shape214 = x3d.Shape()
Sphere215 = x3d.Sphere()
Sphere215.setRadius(0.08)

Shape214.setGeometry(Sphere215)
Appearance216 = x3d.Appearance()
Material217 = x3d.Material()
Material217.setDiffuseColor([1,0,0])

Appearance216.setMaterial(Material217)

Shape214.setAppearance(Appearance216)

Transform212.addChild(Shape214)

Transform210.addChildren(Transform212)
Shape218 = x3d.Shape()
Cylinder219 = x3d.Cylinder()
Cylinder219.setRadius(0.05)
Cylinder219.setHeight(0.3)

Shape218.setGeometry(Cylinder219)
Appearance220 = x3d.Appearance()
Material221 = x3d.Material()

Appearance220.setMaterial(Material221)

Shape218.setAppearance(Appearance220)

Transform210.addChild(Shape218)

Transform204.addChildren(Transform210)

LayoutLayer103.addChildren(Transform204)
Script222 = x3d.Script()
Script222.setDEF("aValueTransformerScript")
Script222.setDirectOutput(True)
Script222.setMustEvaluate(True)
field223 = x3d.field()
field223.setName("newTranslation")
field223.setAccessType("inputOnly")
field223.setType("SFVec3f")
field223.setValue("1 1 1")

Script222.addField(field223)
field224 = x3d.field()
field224.setName("aValue")
field224.setAccessType("outputOnly")
field224.setType("SFFloat")
field224.setValue("1")

Script222.addField(field224)

Script222.setSourceCode('''ecmascript: function newTranslation(Value) { aValue = Value.x * 30; }''')

LayoutLayer103.addChildren(Script222)
Script225 = x3d.Script()
Script225.setDEF("bValueTransformerScript")
Script225.setDirectOutput(True)
Script225.setMustEvaluate(True)
field226 = x3d.field()
field226.setName("newTranslation")
field226.setAccessType("inputOnly")
field226.setType("SFVec3f")
field226.setValue("1 1 1")

Script225.addField(field226)
field227 = x3d.field()
field227.setName("bValue")
field227.setAccessType("outputOnly")
field227.setType("SFFloat")
field227.setValue("1")

Script225.addField(field227)

Script225.setSourceCode('''ecmascript: function newTranslation(Value) { bValue = Value.x * 30; }''')

LayoutLayer103.addChildren(Script225)
Script228 = x3d.Script()
Script228.setDEF("cValueTransformerScript")
Script228.setDirectOutput(True)
Script228.setMustEvaluate(True)
field229 = x3d.field()
field229.setName("newTranslation")
field229.setAccessType("inputOnly")
field229.setType("SFVec3f")
field229.setValue("1 1 1")

Script228.addField(field229)
field230 = x3d.field()
field230.setName("cValue")
field230.setAccessType("outputOnly")
field230.setType("SFFloat")
field230.setValue("1")

Script228.addField(field230)

Script228.setSourceCode('''ecmascript: function newTranslation(Value) { cValue = Value.x * 5; }''')

LayoutLayer103.addChildren(Script228)
Script231 = x3d.Script()
Script231.setDEF("dValueTransformerScript")
Script231.setDirectOutput(True)
Script231.setMustEvaluate(True)
field232 = x3d.field()
field232.setName("newTranslation")
field232.setAccessType("inputOnly")
field232.setType("SFVec3f")
field232.setValue("1 1 1")

Script231.addField(field232)
field233 = x3d.field()
field233.setName("dValue")
field233.setAccessType("outputOnly")
field233.setType("SFFloat")
field233.setValue("1")

Script231.addField(field233)

Script231.setSourceCode('''ecmascript: function newTranslation(Value) { dValue = Value.x * 5; }''')

LayoutLayer103.addChildren(Script231)
Script234 = x3d.Script()
Script234.setDEF("pdeltaValueTransformerScript")
Script234.setDirectOutput(True)
Script234.setMustEvaluate(True)
field235 = x3d.field()
field235.setName("newTranslation")
field235.setAccessType("inputOnly")
field235.setType("SFVec3f")
field235.setValue("1 1 1")

Script234.addField(field235)
field236 = x3d.field()
field236.setName("pdeltaValue")
field236.setAccessType("outputOnly")
field236.setType("SFFloat")
field236.setValue("1")

Script234.addField(field236)

Script234.setSourceCode('''ecmascript: function newTranslation(Value) { pdeltaValue = Value.x; }''')

LayoutLayer103.addChildren(Script234)
Script237 = x3d.Script()
Script237.setDEF("tdeltaValueTransformerScript")
Script237.setDirectOutput(True)
Script237.setMustEvaluate(True)
field238 = x3d.field()
field238.setName("newTranslation")
field238.setAccessType("inputOnly")
field238.setType("SFVec3f")
field238.setValue("1 1 1")

Script237.addField(field238)
field239 = x3d.field()
field239.setName("tdeltaValue")
field239.setAccessType("outputOnly")
field239.setType("SFFloat")
field239.setValue("1")

Script237.addField(field239)

Script237.setSourceCode('''ecmascript: function newTranslation(Value) { tdeltaValue = Value.x; }''')

LayoutLayer103.addChildren(Script237)
ROUTE240 = x3d.ROUTE()
ROUTE240.setFromField("translation_changed")
ROUTE240.setFromNode("aSensor")
ROUTE240.setToField("set_translation")
ROUTE240.setToNode("aTransform")

LayoutLayer103.addChildren(ROUTE240)
ROUTE241 = x3d.ROUTE()
ROUTE241.setFromField("translation_changed")
ROUTE241.setFromNode("bSensor")
ROUTE241.setToField("set_translation")
ROUTE241.setToNode("bTransform")

LayoutLayer103.addChildren(ROUTE241)
ROUTE242 = x3d.ROUTE()
ROUTE242.setFromField("translation_changed")
ROUTE242.setFromNode("cSensor")
ROUTE242.setToField("set_translation")
ROUTE242.setToNode("cTransform")

LayoutLayer103.addChildren(ROUTE242)
ROUTE243 = x3d.ROUTE()
ROUTE243.setFromField("translation_changed")
ROUTE243.setFromNode("dSensor")
ROUTE243.setToField("set_translation")
ROUTE243.setToNode("dTransform")

LayoutLayer103.addChildren(ROUTE243)
ROUTE244 = x3d.ROUTE()
ROUTE244.setFromField("translation_changed")
ROUTE244.setFromNode("pdeltaSensor")
ROUTE244.setToField("set_translation")
ROUTE244.setToNode("pdeltaTransform")

LayoutLayer103.addChildren(ROUTE244)
ROUTE245 = x3d.ROUTE()
ROUTE245.setFromField("translation_changed")
ROUTE245.setFromNode("tdeltaSensor")
ROUTE245.setToField("set_translation")
ROUTE245.setToNode("tdeltaTransform")

LayoutLayer103.addChildren(ROUTE245)
ROUTE246 = x3d.ROUTE()
ROUTE246.setFromField("translation_changed")
ROUTE246.setFromNode("aSensor")
ROUTE246.setToField("newTranslation")
ROUTE246.setToNode("aValueTransformerScript")

LayoutLayer103.addChildren(ROUTE246)
ROUTE247 = x3d.ROUTE()
ROUTE247.setFromField("translation_changed")
ROUTE247.setFromNode("bSensor")
ROUTE247.setToField("newTranslation")
ROUTE247.setToNode("bValueTransformerScript")

LayoutLayer103.addChildren(ROUTE247)
ROUTE248 = x3d.ROUTE()
ROUTE248.setFromField("translation_changed")
ROUTE248.setFromNode("cSensor")
ROUTE248.setToField("newTranslation")
ROUTE248.setToNode("cValueTransformerScript")

LayoutLayer103.addChildren(ROUTE248)
ROUTE249 = x3d.ROUTE()
ROUTE249.setFromField("translation_changed")
ROUTE249.setFromNode("dSensor")
ROUTE249.setToField("newTranslation")
ROUTE249.setToNode("dValueTransformerScript")

LayoutLayer103.addChildren(ROUTE249)
ROUTE250 = x3d.ROUTE()
ROUTE250.setFromField("translation_changed")
ROUTE250.setFromNode("pdeltaSensor")
ROUTE250.setToField("newTranslation")
ROUTE250.setToNode("pdeltaValueTransformerScript")

LayoutLayer103.addChildren(ROUTE250)
ROUTE251 = x3d.ROUTE()
ROUTE251.setFromField("translation_changed")
ROUTE251.setFromNode("tdeltaSensor")
ROUTE251.setToField("newTranslation")
ROUTE251.setToNode("tdeltaValueTransformerScript")

LayoutLayer103.addChildren(ROUTE251)
ROUTE252 = x3d.ROUTE()
ROUTE252.setFromField("aValue")
ROUTE252.setFromNode("aValueTransformerScript")
ROUTE252.setToField("a")
ROUTE252.setToNode("freewrlShader")

LayoutLayer103.addChildren(ROUTE252)
ROUTE253 = x3d.ROUTE()
ROUTE253.setFromField("bValue")
ROUTE253.setFromNode("bValueTransformerScript")
ROUTE253.setToField("b")
ROUTE253.setToNode("freewrlShader")

LayoutLayer103.addChildren(ROUTE253)
ROUTE254 = x3d.ROUTE()
ROUTE254.setFromField("cValue")
ROUTE254.setFromNode("cValueTransformerScript")
ROUTE254.setToField("c")
ROUTE254.setToNode("freewrlShader")

LayoutLayer103.addChildren(ROUTE254)
ROUTE255 = x3d.ROUTE()
ROUTE255.setFromField("dValue")
ROUTE255.setFromNode("dValueTransformerScript")
ROUTE255.setToField("d")
ROUTE255.setToNode("freewrlShader")

LayoutLayer103.addChildren(ROUTE255)
ROUTE256 = x3d.ROUTE()
ROUTE256.setFromField("pdeltaValue")
ROUTE256.setFromNode("pdeltaValueTransformerScript")
ROUTE256.setToField("pdelta")
ROUTE256.setToNode("freewrlShader")

LayoutLayer103.addChildren(ROUTE256)
ROUTE257 = x3d.ROUTE()
ROUTE257.setFromField("tdeltaValue")
ROUTE257.setFromNode("tdeltaValueTransformerScript")
ROUTE257.setToField("tdelta")
ROUTE257.setToNode("freewrlShader")

LayoutLayer103.addChildren(ROUTE257)
Layout258 = x3d.Layout()
Layout258.setAlign(["RIGHT","BOTTOM"])
Layout258.setOffset([0,0])
Layout258.setOffsetUnits(["WORLD","WORLD"])
Layout258.setScaleMode(["NONE","NONE"])
Layout258.setSize([0.4,1])
Layout258.setSizeUnits(["WORLD","WORLD"])

LayoutLayer103.setLayout(Layout258)
Viewport259 = x3d.Viewport()
Viewport259.setClipBoundary([0,1,0,1])

LayoutLayer103.setViewport(Viewport259)

LayerSet32.addLayers(LayoutLayer103)

Scene31.addLayerSet(LayerSet32)

X3D0.setScene(Scene31)
X3D0.toFileX3D("../data/bumpyfreewrlsliders.new.python.x3d")
X3D0.toFileJSON("../data/bumpyfreewrlsliders.new.python.json")
