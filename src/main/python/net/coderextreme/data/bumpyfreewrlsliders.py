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
DISEntityTypeMapping97.setUrl(["../data/Leif8Final.x3dv","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3dv"])

DISEntityManager96.addChildren(DISEntityTypeMapping97)
DISEntityTypeMapping98 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping98.setCategory(77)
DISEntityTypeMapping98.setSpecific(2)
DISEntityTypeMapping98.setUrl(["../data/Lily8Final.x3dv","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3dv"])

DISEntityManager96.addChildren(DISEntityTypeMapping98)
DISEntityTypeMapping99 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping99.setCategory(77)
DISEntityTypeMapping99.setSpecific(3)
DISEntityTypeMapping99.setUrl(["../data/Tufani8Final.x3dv","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3dv"])

DISEntityManager96.addChildren(DISEntityTypeMapping99)
DISEntityTypeMapping100 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping100.setCategory(77)
DISEntityTypeMapping100.setSpecific(4)
DISEntityTypeMapping100.setUrl(["../data/Gramps8Final.x3dv","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3dv"])

DISEntityManager96.addChildren(DISEntityTypeMapping100)

Layer33.addChildren(DISEntityManager96)
Collision101 = x3d.Collision()
Collision101.setEnabled(False)
Group102 = x3d.Group()
Group102.setDEF("AvatarHolder")

Collision101.setProxy(Group102)

Layer33.addChildren(Collision101)
ROUTE103 = x3d.ROUTE()
ROUTE103.setFromField("addedEntities")
ROUTE103.setFromNode("EntityManager")
ROUTE103.setToField("addChildren")
ROUTE103.setToNode("AvatarHolder")

Layer33.addChildren(ROUTE103)
ROUTE104 = x3d.ROUTE()
ROUTE104.setFromField("removedEntities")
ROUTE104.setFromNode("EntityManager")
ROUTE104.setToField("removeChildren")
ROUTE104.setToNode("AvatarHolder")

Layer33.addChildren(ROUTE104)

LayerSet32.addLayers(Layer33)
LayoutLayer105 = x3d.LayoutLayer()
#positioning the LayoutLayer
#clipping the LayoutLayer
#the content (children) of the LayoutLayer
#first, the slider for scaling the model
Transform106 = x3d.Transform()
Transform106.setTranslation([0,0,-3])
Shape107 = x3d.Shape()
Appearance108 = x3d.Appearance()
Material109 = x3d.Material()
Material109.setDiffuseColor([0,0,0])
Material109.setTransparency(0.7)

Appearance108.setMaterial(Material109)

Shape107.setAppearance(Appearance108)
Box110 = x3d.Box()
Box110.setSize([100,100,0.02])

Shape107.setGeometry(Box110)

Transform106.addChild(Shape107)

LayoutLayer105.addChildren(Transform106)
#the plane sensors
Transform111 = x3d.Transform()
Transform111.setDEF("aSlider")
Transform111.setTranslation([0,0.7,0])
Transform112 = x3d.Transform()
Transform112.setRotation([0,0,1,1.57])
Shape113 = x3d.Shape()
Appearance114 = x3d.Appearance()
Material115 = x3d.Material()

Appearance114.setMaterial(Material115)

Shape113.setAppearance(Appearance114)
Cylinder116 = x3d.Cylinder()
Cylinder116.setRadius(0.05)
Cylinder116.setHeight(2.5)

Shape113.setGeometry(Cylinder116)

Transform112.addChild(Shape113)

Transform111.addChildren(Transform112)
Transform117 = x3d.Transform()
Transform117.setDEF("aTransform")
Transform117.setTranslation([0,0,0.1])
PlaneSensor118 = x3d.PlaneSensor()
PlaneSensor118.setDEF("aSensor")
PlaneSensor118.setMinPosition([-20,0])
PlaneSensor118.setMaxPosition([20,0])

Transform117.addChildren(PlaneSensor118)
Transform119 = x3d.Transform()
Transform119.setTranslation([0,0,0])
TouchSensor120 = x3d.TouchSensor()
TouchSensor120.setDEF("aTS")

Transform119.addChildren(TouchSensor120)
Shape121 = x3d.Shape()
Sphere122 = x3d.Sphere()
Sphere122.setRadius(0.08)

Shape121.setGeometry(Sphere122)
Appearance123 = x3d.Appearance()
Material124 = x3d.Material()
Material124.setDiffuseColor([1,0,0])

Appearance123.setMaterial(Material124)

Shape121.setAppearance(Appearance123)

Transform119.addChild(Shape121)

Transform117.addChildren(Transform119)
Shape125 = x3d.Shape()
Cylinder126 = x3d.Cylinder()
Cylinder126.setRadius(0.05)
Cylinder126.setHeight(0.3)

Shape125.setGeometry(Cylinder126)
Appearance127 = x3d.Appearance()
Material128 = x3d.Material()

Appearance127.setMaterial(Material128)

Shape125.setAppearance(Appearance127)

Transform117.addChild(Shape125)

Transform111.addChildren(Transform117)
Transform129 = x3d.Transform()
Transform129.setRotation([0,0,1,1.57])
Shape130 = x3d.Shape()
Appearance131 = x3d.Appearance()
Material132 = x3d.Material()

Appearance131.setMaterial(Material132)

Shape130.setAppearance(Appearance131)
Cylinder133 = x3d.Cylinder()
Cylinder133.setRadius(0.05)
Cylinder133.setHeight(2.5)

Shape130.setGeometry(Cylinder133)

Transform129.addChild(Shape130)

Transform111.addChildren(Transform129)

LayoutLayer105.addChildren(Transform111)
Transform134 = x3d.Transform()
Transform134.setDEF("bSlider")
Transform134.setTranslation([0,0.4,0])
Transform135 = x3d.Transform()
Transform135.setRotation([0,0,1,1.57])
Shape136 = x3d.Shape()
Appearance137 = x3d.Appearance()
Material138 = x3d.Material()

Appearance137.setMaterial(Material138)

Shape136.setAppearance(Appearance137)
Cylinder139 = x3d.Cylinder()
Cylinder139.setRadius(0.05)
Cylinder139.setHeight(2.5)

Shape136.setGeometry(Cylinder139)

Transform135.addChild(Shape136)

Transform134.addChildren(Transform135)
Transform140 = x3d.Transform()
Transform140.setDEF("bTransform")
Transform140.setTranslation([0,0,0.1])
PlaneSensor141 = x3d.PlaneSensor()
PlaneSensor141.setDEF("bSensor")
PlaneSensor141.setMinPosition([-20,0])
PlaneSensor141.setMaxPosition([20,0])

Transform140.addChildren(PlaneSensor141)
Transform142 = x3d.Transform()
Transform142.setTranslation([0,0,0])
TouchSensor143 = x3d.TouchSensor()
TouchSensor143.setDEF("bTS")

Transform142.addChildren(TouchSensor143)
Shape144 = x3d.Shape()
Sphere145 = x3d.Sphere()
Sphere145.setRadius(0.08)

Shape144.setGeometry(Sphere145)
Appearance146 = x3d.Appearance()
Material147 = x3d.Material()
Material147.setDiffuseColor([1,0,0])

Appearance146.setMaterial(Material147)

Shape144.setAppearance(Appearance146)

Transform142.addChild(Shape144)

Transform140.addChildren(Transform142)
Shape148 = x3d.Shape()
Cylinder149 = x3d.Cylinder()
Cylinder149.setRadius(0.05)
Cylinder149.setHeight(0.3)

Shape148.setGeometry(Cylinder149)
Appearance150 = x3d.Appearance()
Material151 = x3d.Material()

Appearance150.setMaterial(Material151)

Shape148.setAppearance(Appearance150)

Transform140.addChild(Shape148)

Transform134.addChildren(Transform140)

LayoutLayer105.addChildren(Transform134)
Transform152 = x3d.Transform()
Transform152.setDEF("cSlider")
Transform152.setTranslation([0,0.1,0])
Transform153 = x3d.Transform()
Transform153.setRotation([0,0,1,1.57])
Shape154 = x3d.Shape()
Appearance155 = x3d.Appearance()
Material156 = x3d.Material()

Appearance155.setMaterial(Material156)

Shape154.setAppearance(Appearance155)
Cylinder157 = x3d.Cylinder()
Cylinder157.setRadius(0.05)
Cylinder157.setHeight(2.5)

Shape154.setGeometry(Cylinder157)

Transform153.addChild(Shape154)

Transform152.addChildren(Transform153)
Transform158 = x3d.Transform()
Transform158.setDEF("cTransform")
Transform158.setTranslation([0,0,0.1])
PlaneSensor159 = x3d.PlaneSensor()
PlaneSensor159.setDEF("cSensor")
PlaneSensor159.setMinPosition([-20,0])
PlaneSensor159.setMaxPosition([20,0])

Transform158.addChildren(PlaneSensor159)
Transform160 = x3d.Transform()
Transform160.setTranslation([0,0,0])
TouchSensor161 = x3d.TouchSensor()
TouchSensor161.setDEF("cTS")

Transform160.addChildren(TouchSensor161)
Shape162 = x3d.Shape()
Sphere163 = x3d.Sphere()
Sphere163.setRadius(0.08)

Shape162.setGeometry(Sphere163)
Appearance164 = x3d.Appearance()
Material165 = x3d.Material()
Material165.setDiffuseColor([1,0,0])

Appearance164.setMaterial(Material165)

Shape162.setAppearance(Appearance164)

Transform160.addChild(Shape162)

Transform158.addChildren(Transform160)
Shape166 = x3d.Shape()
Cylinder167 = x3d.Cylinder()
Cylinder167.setRadius(0.05)
Cylinder167.setHeight(0.3)

Shape166.setGeometry(Cylinder167)
Appearance168 = x3d.Appearance()
Material169 = x3d.Material()

Appearance168.setMaterial(Material169)

Shape166.setAppearance(Appearance168)

Transform158.addChild(Shape166)

Transform152.addChildren(Transform158)

LayoutLayer105.addChildren(Transform152)
Transform170 = x3d.Transform()
Transform170.setDEF("dSlider")
Transform170.setTranslation([0,-0.2,0])
Transform171 = x3d.Transform()
Transform171.setRotation([0,0,1,1.57])
Shape172 = x3d.Shape()
Appearance173 = x3d.Appearance()
Material174 = x3d.Material()

Appearance173.setMaterial(Material174)

Shape172.setAppearance(Appearance173)
Cylinder175 = x3d.Cylinder()
Cylinder175.setRadius(0.05)
Cylinder175.setHeight(2.5)

Shape172.setGeometry(Cylinder175)

Transform171.addChild(Shape172)

Transform170.addChildren(Transform171)
Transform176 = x3d.Transform()
Transform176.setDEF("dTransform")
Transform176.setTranslation([0,0,0.1])
PlaneSensor177 = x3d.PlaneSensor()
PlaneSensor177.setDEF("dSensor")
PlaneSensor177.setMinPosition([-20,0])
PlaneSensor177.setMaxPosition([20,0])

Transform176.addChildren(PlaneSensor177)
Transform178 = x3d.Transform()
Transform178.setTranslation([0,0,0])
TouchSensor179 = x3d.TouchSensor()
TouchSensor179.setDEF("dTS")

Transform178.addChildren(TouchSensor179)
Shape180 = x3d.Shape()
Sphere181 = x3d.Sphere()
Sphere181.setRadius(0.08)

Shape180.setGeometry(Sphere181)
Appearance182 = x3d.Appearance()
Material183 = x3d.Material()
Material183.setDiffuseColor([1,0,0])

Appearance182.setMaterial(Material183)

Shape180.setAppearance(Appearance182)

Transform178.addChild(Shape180)

Transform176.addChildren(Transform178)
Shape184 = x3d.Shape()
Cylinder185 = x3d.Cylinder()
Cylinder185.setRadius(0.05)
Cylinder185.setHeight(0.3)

Shape184.setGeometry(Cylinder185)
Appearance186 = x3d.Appearance()
Material187 = x3d.Material()

Appearance186.setMaterial(Material187)

Shape184.setAppearance(Appearance186)

Transform176.addChild(Shape184)

Transform170.addChildren(Transform176)

LayoutLayer105.addChildren(Transform170)
Transform188 = x3d.Transform()
Transform188.setDEF("pdeltaSlider")
Transform188.setTranslation([0,-0.5,0])
Transform189 = x3d.Transform()
Transform189.setRotation([0,0,1,1.57])
Shape190 = x3d.Shape()
Appearance191 = x3d.Appearance()
Material192 = x3d.Material()

Appearance191.setMaterial(Material192)

Shape190.setAppearance(Appearance191)
Cylinder193 = x3d.Cylinder()
Cylinder193.setRadius(0.05)
Cylinder193.setHeight(2.5)

Shape190.setGeometry(Cylinder193)

Transform189.addChild(Shape190)

Transform188.addChildren(Transform189)
Transform194 = x3d.Transform()
Transform194.setDEF("pdeltaTransform")
Transform194.setTranslation([0,0,0.1])
PlaneSensor195 = x3d.PlaneSensor()
PlaneSensor195.setDEF("pdeltaSensor")
PlaneSensor195.setMinPosition([-20,0])
PlaneSensor195.setMaxPosition([20,0])

Transform194.addChildren(PlaneSensor195)
Transform196 = x3d.Transform()
Transform196.setTranslation([0,0,0])
TouchSensor197 = x3d.TouchSensor()
TouchSensor197.setDEF("pdeltaTS")

Transform196.addChildren(TouchSensor197)
Shape198 = x3d.Shape()
Sphere199 = x3d.Sphere()
Sphere199.setRadius(0.08)

Shape198.setGeometry(Sphere199)
Appearance200 = x3d.Appearance()
Material201 = x3d.Material()
Material201.setDiffuseColor([1,0,0])

Appearance200.setMaterial(Material201)

Shape198.setAppearance(Appearance200)

Transform196.addChild(Shape198)

Transform194.addChildren(Transform196)
Shape202 = x3d.Shape()
Cylinder203 = x3d.Cylinder()
Cylinder203.setRadius(0.05)
Cylinder203.setHeight(0.3)

Shape202.setGeometry(Cylinder203)
Appearance204 = x3d.Appearance()
Material205 = x3d.Material()

Appearance204.setMaterial(Material205)

Shape202.setAppearance(Appearance204)

Transform194.addChild(Shape202)

Transform188.addChildren(Transform194)

LayoutLayer105.addChildren(Transform188)
Transform206 = x3d.Transform()
Transform206.setDEF("tdeltaSlider")
Transform206.setTranslation([0,-0.8,0])
Transform207 = x3d.Transform()
Transform207.setRotation([0,0,1,1.57])
Shape208 = x3d.Shape()
Appearance209 = x3d.Appearance()
Material210 = x3d.Material()

Appearance209.setMaterial(Material210)

Shape208.setAppearance(Appearance209)
Cylinder211 = x3d.Cylinder()
Cylinder211.setRadius(0.05)
Cylinder211.setHeight(2.5)

Shape208.setGeometry(Cylinder211)

Transform207.addChild(Shape208)

Transform206.addChildren(Transform207)
Transform212 = x3d.Transform()
Transform212.setDEF("tdeltaTransform")
Transform212.setTranslation([0,0,0.1])
PlaneSensor213 = x3d.PlaneSensor()
PlaneSensor213.setDEF("tdeltaSensor")
PlaneSensor213.setMinPosition([-20,0])
PlaneSensor213.setMaxPosition([20,0])

Transform212.addChildren(PlaneSensor213)
Transform214 = x3d.Transform()
Transform214.setTranslation([0,0,0])
TouchSensor215 = x3d.TouchSensor()
TouchSensor215.setDEF("tdeltaTS")

Transform214.addChildren(TouchSensor215)
Shape216 = x3d.Shape()
Sphere217 = x3d.Sphere()
Sphere217.setRadius(0.08)

Shape216.setGeometry(Sphere217)
Appearance218 = x3d.Appearance()
Material219 = x3d.Material()
Material219.setDiffuseColor([1,0,0])

Appearance218.setMaterial(Material219)

Shape216.setAppearance(Appearance218)

Transform214.addChild(Shape216)

Transform212.addChildren(Transform214)
Shape220 = x3d.Shape()
Cylinder221 = x3d.Cylinder()
Cylinder221.setRadius(0.05)
Cylinder221.setHeight(0.3)

Shape220.setGeometry(Cylinder221)
Appearance222 = x3d.Appearance()
Material223 = x3d.Material()

Appearance222.setMaterial(Material223)

Shape220.setAppearance(Appearance222)

Transform212.addChild(Shape220)

Transform206.addChildren(Transform212)

LayoutLayer105.addChildren(Transform206)
Script224 = x3d.Script()
Script224.setDEF("aValueTransformerScript")
Script224.setDirectOutput(True)
Script224.setMustEvaluate(True)
field225 = x3d.field()
field225.setName("newTranslation")
field225.setAccessType("inputOnly")
field225.setType("SFVec3f")
field225.setValue("1 1 1")

Script224.addField(field225)
field226 = x3d.field()
field226.setName("aValue")
field226.setAccessType("outputOnly")
field226.setType("SFFloat")
field226.setValue("1")

Script224.addField(field226)

Script224.setSourceCode('''ecmascript: function newTranslation(Value) { aValue = Value.x * 30; }''')

LayoutLayer105.addChildren(Script224)
Script227 = x3d.Script()
Script227.setDEF("bValueTransformerScript")
Script227.setDirectOutput(True)
Script227.setMustEvaluate(True)
field228 = x3d.field()
field228.setName("newTranslation")
field228.setAccessType("inputOnly")
field228.setType("SFVec3f")
field228.setValue("1 1 1")

Script227.addField(field228)
field229 = x3d.field()
field229.setName("bValue")
field229.setAccessType("outputOnly")
field229.setType("SFFloat")
field229.setValue("1")

Script227.addField(field229)

Script227.setSourceCode('''ecmascript: function newTranslation(Value) { bValue = Value.x * 30; }''')

LayoutLayer105.addChildren(Script227)
Script230 = x3d.Script()
Script230.setDEF("cValueTransformerScript")
Script230.setDirectOutput(True)
Script230.setMustEvaluate(True)
field231 = x3d.field()
field231.setName("newTranslation")
field231.setAccessType("inputOnly")
field231.setType("SFVec3f")
field231.setValue("1 1 1")

Script230.addField(field231)
field232 = x3d.field()
field232.setName("cValue")
field232.setAccessType("outputOnly")
field232.setType("SFFloat")
field232.setValue("1")

Script230.addField(field232)

Script230.setSourceCode('''ecmascript: function newTranslation(Value) { cValue = Value.x * 5; }''')

LayoutLayer105.addChildren(Script230)
Script233 = x3d.Script()
Script233.setDEF("dValueTransformerScript")
Script233.setDirectOutput(True)
Script233.setMustEvaluate(True)
field234 = x3d.field()
field234.setName("newTranslation")
field234.setAccessType("inputOnly")
field234.setType("SFVec3f")
field234.setValue("1 1 1")

Script233.addField(field234)
field235 = x3d.field()
field235.setName("dValue")
field235.setAccessType("outputOnly")
field235.setType("SFFloat")
field235.setValue("1")

Script233.addField(field235)

Script233.setSourceCode('''ecmascript: function newTranslation(Value) { dValue = Value.x * 5; }''')

LayoutLayer105.addChildren(Script233)
Script236 = x3d.Script()
Script236.setDEF("pdeltaValueTransformerScript")
Script236.setDirectOutput(True)
Script236.setMustEvaluate(True)
field237 = x3d.field()
field237.setName("newTranslation")
field237.setAccessType("inputOnly")
field237.setType("SFVec3f")
field237.setValue("1 1 1")

Script236.addField(field237)
field238 = x3d.field()
field238.setName("pdeltaValue")
field238.setAccessType("outputOnly")
field238.setType("SFFloat")
field238.setValue("1")

Script236.addField(field238)

Script236.setSourceCode('''ecmascript: function newTranslation(Value) { pdeltaValue = Value.x; }''')

LayoutLayer105.addChildren(Script236)
Script239 = x3d.Script()
Script239.setDEF("tdeltaValueTransformerScript")
Script239.setDirectOutput(True)
Script239.setMustEvaluate(True)
field240 = x3d.field()
field240.setName("newTranslation")
field240.setAccessType("inputOnly")
field240.setType("SFVec3f")
field240.setValue("1 1 1")

Script239.addField(field240)
field241 = x3d.field()
field241.setName("tdeltaValue")
field241.setAccessType("outputOnly")
field241.setType("SFFloat")
field241.setValue("1")

Script239.addField(field241)

Script239.setSourceCode('''ecmascript: function newTranslation(Value) { tdeltaValue = Value.x; }''')

LayoutLayer105.addChildren(Script239)
ROUTE242 = x3d.ROUTE()
ROUTE242.setFromField("translation_changed")
ROUTE242.setFromNode("aSensor")
ROUTE242.setToField("set_translation")
ROUTE242.setToNode("aTransform")

LayoutLayer105.addChildren(ROUTE242)
ROUTE243 = x3d.ROUTE()
ROUTE243.setFromField("translation_changed")
ROUTE243.setFromNode("bSensor")
ROUTE243.setToField("set_translation")
ROUTE243.setToNode("bTransform")

LayoutLayer105.addChildren(ROUTE243)
ROUTE244 = x3d.ROUTE()
ROUTE244.setFromField("translation_changed")
ROUTE244.setFromNode("cSensor")
ROUTE244.setToField("set_translation")
ROUTE244.setToNode("cTransform")

LayoutLayer105.addChildren(ROUTE244)
ROUTE245 = x3d.ROUTE()
ROUTE245.setFromField("translation_changed")
ROUTE245.setFromNode("dSensor")
ROUTE245.setToField("set_translation")
ROUTE245.setToNode("dTransform")

LayoutLayer105.addChildren(ROUTE245)
ROUTE246 = x3d.ROUTE()
ROUTE246.setFromField("translation_changed")
ROUTE246.setFromNode("pdeltaSensor")
ROUTE246.setToField("set_translation")
ROUTE246.setToNode("pdeltaTransform")

LayoutLayer105.addChildren(ROUTE246)
ROUTE247 = x3d.ROUTE()
ROUTE247.setFromField("translation_changed")
ROUTE247.setFromNode("tdeltaSensor")
ROUTE247.setToField("set_translation")
ROUTE247.setToNode("tdeltaTransform")

LayoutLayer105.addChildren(ROUTE247)
ROUTE248 = x3d.ROUTE()
ROUTE248.setFromField("translation_changed")
ROUTE248.setFromNode("aSensor")
ROUTE248.setToField("newTranslation")
ROUTE248.setToNode("aValueTransformerScript")

LayoutLayer105.addChildren(ROUTE248)
ROUTE249 = x3d.ROUTE()
ROUTE249.setFromField("translation_changed")
ROUTE249.setFromNode("bSensor")
ROUTE249.setToField("newTranslation")
ROUTE249.setToNode("bValueTransformerScript")

LayoutLayer105.addChildren(ROUTE249)
ROUTE250 = x3d.ROUTE()
ROUTE250.setFromField("translation_changed")
ROUTE250.setFromNode("cSensor")
ROUTE250.setToField("newTranslation")
ROUTE250.setToNode("cValueTransformerScript")

LayoutLayer105.addChildren(ROUTE250)
ROUTE251 = x3d.ROUTE()
ROUTE251.setFromField("translation_changed")
ROUTE251.setFromNode("dSensor")
ROUTE251.setToField("newTranslation")
ROUTE251.setToNode("dValueTransformerScript")

LayoutLayer105.addChildren(ROUTE251)
ROUTE252 = x3d.ROUTE()
ROUTE252.setFromField("translation_changed")
ROUTE252.setFromNode("pdeltaSensor")
ROUTE252.setToField("newTranslation")
ROUTE252.setToNode("pdeltaValueTransformerScript")

LayoutLayer105.addChildren(ROUTE252)
ROUTE253 = x3d.ROUTE()
ROUTE253.setFromField("translation_changed")
ROUTE253.setFromNode("tdeltaSensor")
ROUTE253.setToField("newTranslation")
ROUTE253.setToNode("tdeltaValueTransformerScript")

LayoutLayer105.addChildren(ROUTE253)
ROUTE254 = x3d.ROUTE()
ROUTE254.setFromField("aValue")
ROUTE254.setFromNode("aValueTransformerScript")
ROUTE254.setToField("a")
ROUTE254.setToNode("freewrlShader")

LayoutLayer105.addChildren(ROUTE254)
ROUTE255 = x3d.ROUTE()
ROUTE255.setFromField("bValue")
ROUTE255.setFromNode("bValueTransformerScript")
ROUTE255.setToField("b")
ROUTE255.setToNode("freewrlShader")

LayoutLayer105.addChildren(ROUTE255)
ROUTE256 = x3d.ROUTE()
ROUTE256.setFromField("cValue")
ROUTE256.setFromNode("cValueTransformerScript")
ROUTE256.setToField("c")
ROUTE256.setToNode("freewrlShader")

LayoutLayer105.addChildren(ROUTE256)
ROUTE257 = x3d.ROUTE()
ROUTE257.setFromField("dValue")
ROUTE257.setFromNode("dValueTransformerScript")
ROUTE257.setToField("d")
ROUTE257.setToNode("freewrlShader")

LayoutLayer105.addChildren(ROUTE257)
ROUTE258 = x3d.ROUTE()
ROUTE258.setFromField("pdeltaValue")
ROUTE258.setFromNode("pdeltaValueTransformerScript")
ROUTE258.setToField("pdelta")
ROUTE258.setToNode("freewrlShader")

LayoutLayer105.addChildren(ROUTE258)
ROUTE259 = x3d.ROUTE()
ROUTE259.setFromField("tdeltaValue")
ROUTE259.setFromNode("tdeltaValueTransformerScript")
ROUTE259.setToField("tdelta")
ROUTE259.setToNode("freewrlShader")

LayoutLayer105.addChildren(ROUTE259)
Layout260 = x3d.Layout()
Layout260.setAlign(["RIGHT","BOTTOM"])
Layout260.setOffset([0,0])
Layout260.setOffsetUnits(["WORLD","WORLD"])
Layout260.setScaleMode(["NONE","NONE"])
Layout260.setSize([0.4,1])
Layout260.setSizeUnits(["WORLD","WORLD"])

LayoutLayer105.setLayout(Layout260)
Viewport261 = x3d.Viewport()
Viewport261.setClipBoundary([0,1,0,1])

LayoutLayer105.setViewport(Viewport261)

LayerSet32.addLayers(LayoutLayer105)

Scene31.addLayerSet(LayerSet32)

X3D0.setScene(Scene31)
X3D0.toFileX3D("../data/bumpyfreewrlsliders.new.python.x3d")
X3D0.toFileJSON("../data/bumpyfreewrlsliders.new.python.json")
