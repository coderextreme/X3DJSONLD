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
meta11.setContent("bumpyfreewrljsonverse.x3d")

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
#basic nodes, which might be present in any scene
NavigationInfo32 = x3d.NavigationInfo()
NavigationInfo32.setType(["EXAMINE"])
NavigationInfo32.setAvatarSize(x3d.doubleToFloat([0.25,1.75,0.75]))

Scene31.addChildren(NavigationInfo32)
DirectionalLight33 = x3d.DirectionalLight()
DirectionalLight33.setAmbientIntensity(0.2)
DirectionalLight33.setDirection(x3d.doubleToFloat([0,-1,0]))

Scene31.addChildren(DirectionalLight33)
DirectionalLight34 = x3d.DirectionalLight()
DirectionalLight34.setAmbientIntensity(0.2)
DirectionalLight34.setDirection(x3d.doubleToFloat([-1,-0.1,-1]))

Scene31.addChildren(DirectionalLight34)
Viewpoint35 = x3d.Viewpoint()
Viewpoint35.setDescription("My Overview")
Viewpoint35.setFieldOfView(1.570796)
Viewpoint35.setPosition(x3d.doubleToFloat([0,1.75,60]))

Scene31.addChildren(Viewpoint35)
#LayerSet with two layers, navigation happens in layer 1
LayerSet36 = x3d.LayerSet()
LayerSet36.setActiveLayer(1)
LayerSet36.setOrder([1,2])
#the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
#the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)
Layer37 = x3d.Layer()
Layer37.setPickable(True)
Layer37.setObjectType(["ALL"])
#this group contains the red/green/blue 3D crosshair
Group38 = x3d.Group()
#Arrow X
Transform39 = x3d.Transform()
Transform39.setTranslation(x3d.doubleToFloat([25,0,0]))
Transform39.setRotation(x3d.doubleToFloat([0,0,-1,1.57]))
Shape40 = x3d.Shape()
Cylinder41 = x3d.Cylinder()
Cylinder41.setDEF("Shaft")
Cylinder41.setRadius(0.35)
Cylinder41.setHeight(50)

Shape40.setGeometry(Cylinder41)
Appearance42 = x3d.Appearance()
Material43 = x3d.Material()
Material43.setDEF("RED")
Material43.setDiffuseColor(x3d.doubleToFloat([1,0,0]))
Material43.setEmissiveColor(x3d.doubleToFloat([1,0,0]))

Appearance42.setMaterial(Material43)

Shape40.setAppearance(Appearance42)

Transform39.addChild(Shape40)

Group38.addChildren(Transform39)
Transform44 = x3d.Transform()
Transform44.setTranslation(x3d.doubleToFloat([50,0,0]))
Transform44.setRotation(x3d.doubleToFloat([0,0,-1,1.57]))
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
Transform49.setTranslation(x3d.doubleToFloat([0,25,0]))
Shape50 = x3d.Shape()
Cylinder51 = x3d.Cylinder()
Cylinder51.setUSE("Shaft")

Shape50.setGeometry(Cylinder51)
Appearance52 = x3d.Appearance()
Material53 = x3d.Material()
Material53.setDEF("GREEN")
Material53.setDiffuseColor(x3d.doubleToFloat([0,1,0]))
Material53.setEmissiveColor(x3d.doubleToFloat([0,1,0]))

Appearance52.setMaterial(Material53)

Shape50.setAppearance(Appearance52)

Transform49.addChild(Shape50)

Group38.addChildren(Transform49)
Transform54 = x3d.Transform()
Transform54.setTranslation(x3d.doubleToFloat([0,50,0]))
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
Transform59.setTranslation(x3d.doubleToFloat([0,0,25]))
Transform59.setRotation(x3d.doubleToFloat([1,0,0,1.57]))
Shape60 = x3d.Shape()
Cylinder61 = x3d.Cylinder()
Cylinder61.setUSE("Shaft")

Shape60.setGeometry(Cylinder61)
Appearance62 = x3d.Appearance()
Material63 = x3d.Material()
Material63.setDEF("BLUE")
Material63.setDiffuseColor(x3d.doubleToFloat([0,0,1]))
Material63.setEmissiveColor(x3d.doubleToFloat([0,0,1]))

Appearance62.setMaterial(Material63)

Shape60.setAppearance(Appearance62)

Transform59.addChild(Shape60)

Group38.addChildren(Transform59)
Transform64 = x3d.Transform()
Transform64.setTranslation(x3d.doubleToFloat([0,0,50]))
Transform64.setRotation(x3d.doubleToFloat([1,0,0,1.57]))
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

Layer37.addChildren(Group38)
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
Transform71 = x3d.Transform()
Shape72 = x3d.Shape()
#<Sphere radius='40'></Sphere>
IndexedFaceSet73 = x3d.IndexedFaceSet()
IndexedFaceSet73.setConvex(False)
IndexedFaceSet73.setDEF("Orbit")
Coordinate74 = x3d.Coordinate()
Coordinate74.setDEF("OrbitCoordinates")

IndexedFaceSet73.setCoord(Coordinate74)

Shape72.setGeometry(IndexedFaceSet73)
Appearance75 = x3d.Appearance()
Material76 = x3d.Material()
Material76.setDiffuseColor(x3d.doubleToFloat([0.7,0.7,0.7]))
Material76.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance75.setMaterial(Material76)
ComposedCubeMapTexture77 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture77.setDEF("texture")
ImageTexture78 = x3d.ImageTexture()
ImageTexture78.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture77.setBackTexture(ImageTexture78)
ImageTexture79 = x3d.ImageTexture()
ImageTexture79.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture77.setBottomTexture(ImageTexture79)
ImageTexture80 = x3d.ImageTexture()
ImageTexture80.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture77.setFrontTexture(ImageTexture80)
ImageTexture81 = x3d.ImageTexture()
ImageTexture81.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture77.setLeftTexture(ImageTexture81)
ImageTexture82 = x3d.ImageTexture()
ImageTexture82.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture77.setRightTexture(ImageTexture82)
ImageTexture83 = x3d.ImageTexture()
ImageTexture83.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture77.setTopTexture(ImageTexture83)

Appearance75.setTexture(ComposedCubeMapTexture77)
ComposedShader84 = x3d.ComposedShader()
ComposedShader84.setDEF("freewrlShader")
ComposedShader84.setLanguage("GLSL")
field85 = x3d.field()
field85.setName("chromaticDispertion")
field85.setAccessType("inputOnly")
field85.setType("SFVec3f")
field85.setValue("0.98 1 1.033")

ComposedShader84.addField(field85)
field86 = x3d.field()
field86.setName("fw_textureCoordGenType")
field86.setAccessType("inputOnly")
field86.setType("SFInt32")
field86.setValue("0")

ComposedShader84.addField(field86)
field87 = x3d.field()
field87.setName("bias")
field87.setType("SFFloat")
field87.setAccessType("inputOnly")
field87.setValue("0.5")

ComposedShader84.addField(field87)
field88 = x3d.field()
field88.setName("scale")
field88.setType("SFFloat")
field88.setAccessType("inputOnly")
field88.setValue("0.5")

ComposedShader84.addField(field88)
field89 = x3d.field()
field89.setName("power")
field89.setType("SFFloat")
field89.setAccessType("inputOnly")
field89.setValue("2")

ComposedShader84.addField(field89)
field90 = x3d.field()
field90.setName("a")
field90.setType("SFFloat")
field90.setAccessType("inputOutput")
field90.setValue("15")

ComposedShader84.addField(field90)
field91 = x3d.field()
field91.setName("b")
field91.setType("SFFloat")
field91.setAccessType("inputOutput")
field91.setValue("5")

ComposedShader84.addField(field91)
field92 = x3d.field()
field92.setName("c")
field92.setType("SFFloat")
field92.setAccessType("inputOutput")
field92.setValue("5")

ComposedShader84.addField(field92)
field93 = x3d.field()
field93.setName("d")
field93.setType("SFFloat")
field93.setAccessType("inputOutput")
field93.setValue("5")

ComposedShader84.addField(field93)
field94 = x3d.field()
field94.setName("tdelta")
field94.setType("SFFloat")
field94.setAccessType("inputOutput")
field94.setValue("0")

ComposedShader84.addField(field94)
field95 = x3d.field()
field95.setName("pdelta")
field95.setType("SFFloat")
field95.setAccessType("inputOutput")
field95.setValue("0")

ComposedShader84.addField(field95)
ShaderPart96 = x3d.ShaderPart()
ShaderPart96.setUrl(["../shaders/freewrl_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"])
ShaderPart96.setType("VERTEX")

ComposedShader84.addParts(ShaderPart96)
ShaderPart97 = x3d.ShaderPart()
ShaderPart97.setUrl(["../shaders/freewrl.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"])
ShaderPart97.setType("FRAGMENT")

ComposedShader84.addParts(ShaderPart97)
#TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/freewrl.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/freewrl_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>

Appearance75.addShaders(ComposedShader84)

Shape72.setAppearance(Appearance75)

Transform71.addChild(Shape72)

Transform69.addChildren(Transform71)

Layer37.addChildren(Transform69)
Script98 = x3d.Script()
Script98.setDEF("OrbitScript")
field99 = x3d.field()
field99.setName("coordinates")
field99.setAccessType("inputOutput")
field99.setType("MFVec3f")

Script98.addField(field99)
field100 = x3d.field()
field100.setName("coordIndexes")
field100.setAccessType("outputOnly")
field100.setType("MFInt32")

Script98.addField(field100)
field101 = x3d.field()
field101.setName("a")
field101.setType("SFFloat")
field101.setAccessType("inputOutput")
field101.setValue("10")

Script98.addField(field101)
field102 = x3d.field()
field102.setName("b")
field102.setType("SFFloat")
field102.setAccessType("inputOutput")
field102.setValue("10")

Script98.addField(field102)
field103 = x3d.field()
field103.setName("c")
field103.setType("SFFloat")
field103.setAccessType("inputOutput")
field103.setValue("2")

Script98.addField(field103)
field104 = x3d.field()
field104.setName("d")
field104.setType("SFFloat")
field104.setAccessType("inputOutput")
field104.setValue("2")

Script98.addField(field104)
field105 = x3d.field()
field105.setName("pdelta")
field105.setType("SFFloat")
field105.setAccessType("inputOutput")
field105.setValue("0")

Script98.addField(field105)
field106 = x3d.field()
field106.setName("tdelta")
field106.setType("SFFloat")
field106.setAccessType("inputOutput")
field106.setValue("0")

Script98.addField(field106)

Script98.setSourceCode('''ecmascript:\n"+
"function initialize() {\n"+
"     var resolution = 100;\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = new MFVec3f();\n"+
"     var vecCount = 0;\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"		crds[vecCount] = new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		);\n"+
"		vecCount++;\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = crds;\n"+
"     // coordinates = new MFVec3f(...crds);\n"+
"\n"+
"\n"+
"     var cis = new MFInt32();\n"+
"     var intCount = 0;\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis[intCount++] = i*resolution+j;\n"+
"	     cis[intCount++] = i*resolution+j+1;\n"+
"	     cis[intCount++] = (i+1)*resolution+j+1;\n"+
"	     cis[intCount++] = (i+1)*resolution+j;\n"+
"	     cis[intCount++] = -1;\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = cis;\n"+
"    // coordIndexes = new MFInt32(...cis);\n"+
"}''')

Layer37.addChildren(Script98)
ROUTE107 = x3d.ROUTE()
ROUTE107.setFromField("coordIndexes")
ROUTE107.setFromNode("OrbitScript")
ROUTE107.setToField("set_coordIndex")
ROUTE107.setToNode("Orbit")

Layer37.addChildren(ROUTE107)
ROUTE108 = x3d.ROUTE()
ROUTE108.setFromField("coordinates")
ROUTE108.setFromNode("OrbitScript")
ROUTE108.setToField("set_point")
ROUTE108.setToNode("OrbitCoordinates")

Layer37.addChildren(ROUTE108)
#DIS multiuser facilities
DISEntityManager109 = x3d.DISEntityManager()
DISEntityManager109.setDEF("EntityManager")
DISEntityTypeMapping110 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping110.setCategory(77)
DISEntityTypeMapping110.setSpecific(1)
DISEntityTypeMapping110.setUrl(["../data/Gramps8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"])

DISEntityManager109.addChildren(DISEntityTypeMapping110)
DISEntityTypeMapping111 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping111.setCategory(77)
DISEntityTypeMapping111.setSpecific(2)
DISEntityTypeMapping111.setUrl(["../data/Leif8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"])

DISEntityManager109.addChildren(DISEntityTypeMapping111)
DISEntityTypeMapping112 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping112.setCategory(77)
DISEntityTypeMapping112.setSpecific(3)
DISEntityTypeMapping112.setUrl(["../data/Lily8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"])

DISEntityManager109.addChildren(DISEntityTypeMapping112)
DISEntityTypeMapping113 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping113.setCategory(77)
DISEntityTypeMapping113.setSpecific(4)
DISEntityTypeMapping113.setUrl(["../data/Tufani8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"])

DISEntityManager109.addChildren(DISEntityTypeMapping113)

Layer37.addChildren(DISEntityManager109)
Collision114 = x3d.Collision()
Collision114.setEnabled(False)
Group115 = x3d.Group()
Group115.setDEF("AvatarHolder")

Collision114.setProxy(Group115)

Layer37.addChildren(Collision114)
ROUTE116 = x3d.ROUTE()
ROUTE116.setFromField("addedEntities")
ROUTE116.setFromNode("EntityManager")
ROUTE116.setToField("addChildren")
ROUTE116.setToNode("AvatarHolder")

Layer37.addChildren(ROUTE116)
ROUTE117 = x3d.ROUTE()
ROUTE117.setFromField("removedEntities")
ROUTE117.setFromNode("EntityManager")
ROUTE117.setToField("removeChildren")
ROUTE117.setToNode("AvatarHolder")

Layer37.addChildren(ROUTE117)

LayerSet36.addLayers(Layer37)
LayoutLayer118 = x3d.LayoutLayer()
LayoutLayer118.setPickable(True)
LayoutLayer118.setObjectType(["ALL"])
#positioning the LayoutLayer
#clipping the LayoutLayer
#the content (children) of the LayoutLayer
#first, the slider for scaling the model
Transform119 = x3d.Transform()
Transform119.setTranslation(x3d.doubleToFloat([0,0,-3]))
Shape120 = x3d.Shape()
Appearance121 = x3d.Appearance()
Material122 = x3d.Material()
Material122.setDiffuseColor(x3d.doubleToFloat([0,0,0]))
Material122.setTransparency(0.7)

Appearance121.setMaterial(Material122)

Shape120.setAppearance(Appearance121)
Box123 = x3d.Box()
Box123.setSize(x3d.doubleToFloat([100,100,0.02]))

Shape120.setGeometry(Box123)

Transform119.addChild(Shape120)

LayoutLayer118.addChildren(Transform119)
Transform124 = x3d.Transform()
Transform124.setDEF("equationTransform")
Transform125 = x3d.Transform()
Transform125.setTranslation(x3d.doubleToFloat([0,0,-20]))
Shape126 = x3d.Shape()
Text127 = x3d.Text()
Text127.setDEF("equation")
Text127.setString(["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"])
FontStyle128 = x3d.FontStyle()
FontStyle128.setSize(0.09)

Text127.setFontStyle(FontStyle128)

Shape126.setGeometry(Text127)
Appearance129 = x3d.Appearance()
Material130 = x3d.Material()
Material130.setDiffuseColor(x3d.doubleToFloat([1,1,0]))

Appearance129.setMaterial(Material130)

Shape126.setAppearance(Appearance129)

Transform125.addChild(Shape126)

Transform124.addChildren(Transform125)

LayoutLayer118.addChildren(Transform124)
ProtoDeclare131 = x3d.ProtoDeclare()
ProtoDeclare131.setName("SliderProto")
ProtoInterface132 = x3d.ProtoInterface()
field133 = x3d.field()
field133.setName("sliderTranslation")
field133.setAccessType("inputOutput")
field133.setType("SFVec3f")
field133.setValue("0 0.7 0")

ProtoInterface132.addField(field133)
field134 = x3d.field()
field134.setName("transformTranslation")
field134.setAccessType("inputOutput")
field134.setType("SFVec3f")
field134.setValue("0 0 0.1")

ProtoInterface132.addField(field134)
field135 = x3d.field()
field135.setName("sensorTranslation")
field135.setAccessType("inputOutput")
field135.setType("SFVec3f")
field135.setValue("0 0 0")

ProtoInterface132.addField(field135)
field136 = x3d.field()
field136.setName("textString")
field136.setAccessType("inputOutput")
field136.setType("MFString")
field136.setValue("\"a=\"")

ProtoInterface132.addField(field136)
field137 = x3d.field()
field137.setName("parameterScale")
field137.setAccessType("inputOutput")
field137.setType("SFFloat")
field137.setValue("30")

ProtoInterface132.addField(field137)
field138 = x3d.field()
field138.setName("parameterName")
field138.setAccessType("inputOutput")
field138.setType("SFString")
field138.setValue("a")

ProtoInterface132.addField(field138)
field139 = x3d.field()
field139.setName("shaderNode")
field139.setAccessType("inputOutput")
field139.setType("SFNode")

ProtoInterface132.addField(field139)

ProtoDeclare131.setProtoInterface(ProtoInterface132)
ProtoBody140 = x3d.ProtoBody()
Group141 = x3d.Group()
Transform142 = x3d.Transform()
Transform142.setDEF("protoSlider")
Transform142.setTranslation(x3d.doubleToFloat([0,0.7,0]))
IS143 = x3d.IS()
connect144 = x3d.connect()
connect144.setNodeField("translation")
connect144.setProtoField("sliderTranslation")

IS143.addConnect(connect144)

Transform142.setIS(IS143)
Transform145 = x3d.Transform()
Transform145.setDEF("protoTransform")
Transform145.setTranslation(x3d.doubleToFloat([0,0,0.1]))
IS146 = x3d.IS()
connect147 = x3d.connect()
connect147.setNodeField("translation")
connect147.setProtoField("sensorTranslation")

IS146.addConnect(connect147)

Transform145.setIS(IS146)
PlaneSensor148 = x3d.PlaneSensor()
PlaneSensor148.setDEF("protoSensor")
PlaneSensor148.setMaxPosition(x3d.doubleToFloat([1,0]))

Transform145.addChildren(PlaneSensor148)
Transform149 = x3d.Transform()
Transform149.setTranslation(x3d.doubleToFloat([0,0,0]))
TouchSensor150 = x3d.TouchSensor()
TouchSensor150.setDEF("protoTS")

Transform149.addChildren(TouchSensor150)

Transform145.addChildren(Transform149)
Transform151 = x3d.Transform()
Shape152 = x3d.Shape()
Text153 = x3d.Text()
Text153.setDEF("protoText")
Text153.setString(["a="])
IS154 = x3d.IS()
connect155 = x3d.connect()
connect155.setNodeField("string")
connect155.setProtoField("textString")

IS154.addConnect(connect155)

Text153.setIS(IS154)
FontStyle156 = x3d.FontStyle()
FontStyle156.setSize(0.23)

Text153.setFontStyle(FontStyle156)

Shape152.setGeometry(Text153)
Appearance157 = x3d.Appearance()
Material158 = x3d.Material()

Appearance157.setMaterial(Material158)

Shape152.setAppearance(Appearance157)

Transform151.addChild(Shape152)

Transform145.addChildren(Transform151)

Transform142.addChildren(Transform145)

Group141.addChildren(Transform142)
Script159 = x3d.Script()
Script159.setDEF("protoValueTransformerScript")
Script159.setDirectOutput(True)
Script159.setMustEvaluate(True)
field160 = x3d.field()
field160.setName("protoScale")
field160.setAccessType("inputOutput")
field160.setType("SFFloat")
field160.setValue("30")

Script159.addField(field160)
field161 = x3d.field()
field161.setName("protoParameterName")
field161.setAccessType("inputOutput")
field161.setType("SFString")
field161.setValue("a")

Script159.addField(field161)
field162 = x3d.field()
field162.setName("shader")
field162.setAccessType("inputOutput")
field162.setType("SFNode")

Script159.addField(field162)
field163 = x3d.field()
field163.setName("newTranslation")
field163.setAccessType("inputOnly")
field163.setType("SFVec3f")
field163.setValue("1 1 1")

Script159.addField(field163)
field164 = x3d.field()
field164.setName("protoValue_changed")
field164.setAccessType("outputOnly")
field164.setType("SFFloat")
field164.setValue("1")

Script159.addField(field164)
field165 = x3d.field()
field165.setName("protoText_changed")
field165.setAccessType("outputOnly")
field165.setType("MFString")
field165.setValue("\"1.0\"")

Script159.addField(field165)
IS166 = x3d.IS()
connect167 = x3d.connect()
connect167.setNodeField("protoScale")
connect167.setProtoField("parameterScale")

IS166.addConnect(connect167)
connect168 = x3d.connect()
connect168.setNodeField("protoParameterName")
connect168.setProtoField("parameterName")

IS166.addConnect(connect168)
connect169 = x3d.connect()
connect169.setNodeField("shader")
connect169.setProtoField("shaderNode")

IS166.addConnect(connect169)

Script159.setIS(IS166)

Script159.setSourceCode('''ecmascript:\n"+
"const newTranslation = function(Value) {\n"+
"	'use strict';\n"+
"	protoValue_changed = Value.x * protoScale;\n"+
"	protoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));\n"+
"\n"+
"        var orientation = Value.x;\n"+
"\n"+
"        var ps = Browser.currentScene.getNamedNode(\"protoSensor\");\n"+
"        var t = Browser.currentScene.getNamedNode(\"protoTransform\");\n"+
"        var txt = Browser.currentScene.getNamedNode(\"protoText\");\n"+
"        if (shader) {\n"+
"            shader.getField(protoParameterName).setValue(orientation * protoScale);\n"+
"        }\n"+
"        if (txt) {\n"+
"            var stringField = txt.getField(\"string\");\n"+
"            var label = protoParameterName;\n"+
"            stringField.setValue(new MFString(label+\"=\"+(orientation * protoScale).toFixed(2)));\n"+
"        }\n"+
"        if (ps) {\n"+
"            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);\n"+
"        }\n"+
"        if (t) {\n"+
"            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);\n"+
"        }\n"+
"}''')

Group141.addChildren(Script159)
ROUTE170 = x3d.ROUTE()
ROUTE170.setFromField("translation_changed")
ROUTE170.setFromNode("protoSensor")
ROUTE170.setToField("set_translation")
ROUTE170.setToNode("protoTransform")

Group141.addChildren(ROUTE170)
ROUTE171 = x3d.ROUTE()
ROUTE171.setFromField("translation_changed")
ROUTE171.setFromNode("protoSensor")
ROUTE171.setToField("newTranslation")
ROUTE171.setToNode("protoValueTransformerScript")

Group141.addChildren(ROUTE171)
ROUTE172 = x3d.ROUTE()
ROUTE172.setFromField("protoText_changed")
ROUTE172.setFromNode("protoValueTransformerScript")
ROUTE172.setToField("string")
ROUTE172.setToNode("protoText")

Group141.addChildren(ROUTE172)

ProtoBody140.addChildren(Group141)

ProtoDeclare131.setProtoBody(ProtoBody140)

LayoutLayer118.addChildren(ProtoDeclare131)
ProtoInstance173 = x3d.ProtoInstance()
ProtoInstance173.setName("SliderProto")
ProtoInstance173.setDEF("aPI")
fieldValue174 = x3d.fieldValue()
fieldValue174.setName("sliderTranslation")
fieldValue174.setValue("0 0.7 0")

ProtoInstance173.addFieldValue(fieldValue174)
fieldValue175 = x3d.fieldValue()
fieldValue175.setName("transformTranslation")
fieldValue175.setValue("0 0 0.1")

ProtoInstance173.addFieldValue(fieldValue175)
fieldValue176 = x3d.fieldValue()
fieldValue176.setName("sensorTranslation")
fieldValue176.setValue("0 0 0")

ProtoInstance173.addFieldValue(fieldValue176)
fieldValue177 = x3d.fieldValue()
fieldValue177.setName("textString")
fieldValue177.setValue("\"a=\"")

ProtoInstance173.addFieldValue(fieldValue177)
fieldValue178 = x3d.fieldValue()
fieldValue178.setName("parameterScale")
fieldValue178.setValue("30")

ProtoInstance173.addFieldValue(fieldValue178)
fieldValue179 = x3d.fieldValue()
fieldValue179.setName("parameterName")
fieldValue179.setValue("a")

ProtoInstance173.addFieldValue(fieldValue179)
fieldValue180 = x3d.fieldValue()
fieldValue180.setName("shaderNode")
ComposedShader181 = x3d.ComposedShader()
ComposedShader181.setUSE("freewrlShader")

fieldValue180.addChildren(ComposedShader181)

ProtoInstance173.addFieldValue(fieldValue180)

LayoutLayer118.addChildren(ProtoInstance173)
ProtoInstance182 = x3d.ProtoInstance()
ProtoInstance182.setName("SliderProto")
ProtoInstance182.setDEF("bPI")
fieldValue183 = x3d.fieldValue()
fieldValue183.setName("sliderTranslation")
fieldValue183.setValue("0 0.4 0")

ProtoInstance182.addFieldValue(fieldValue183)
fieldValue184 = x3d.fieldValue()
fieldValue184.setName("transformTranslation")
fieldValue184.setValue("0 0 0.1")

ProtoInstance182.addFieldValue(fieldValue184)
fieldValue185 = x3d.fieldValue()
fieldValue185.setName("sensorTranslation")
fieldValue185.setValue("0 0 0")

ProtoInstance182.addFieldValue(fieldValue185)
fieldValue186 = x3d.fieldValue()
fieldValue186.setName("textString")
fieldValue186.setValue("\"b=\"")

ProtoInstance182.addFieldValue(fieldValue186)
fieldValue187 = x3d.fieldValue()
fieldValue187.setName("parameterScale")
fieldValue187.setValue("30")

ProtoInstance182.addFieldValue(fieldValue187)
fieldValue188 = x3d.fieldValue()
fieldValue188.setName("parameterName")
fieldValue188.setValue("b")

ProtoInstance182.addFieldValue(fieldValue188)
fieldValue189 = x3d.fieldValue()
fieldValue189.setName("shaderNode")
ComposedShader190 = x3d.ComposedShader()
ComposedShader190.setUSE("freewrlShader")

fieldValue189.addChildren(ComposedShader190)

ProtoInstance182.addFieldValue(fieldValue189)

LayoutLayer118.addChildren(ProtoInstance182)
ProtoInstance191 = x3d.ProtoInstance()
ProtoInstance191.setName("SliderProto")
ProtoInstance191.setDEF("cPI")
fieldValue192 = x3d.fieldValue()
fieldValue192.setName("sliderTranslation")
fieldValue192.setValue("0 0.1 0")

ProtoInstance191.addFieldValue(fieldValue192)
fieldValue193 = x3d.fieldValue()
fieldValue193.setName("transformTranslation")
fieldValue193.setValue("0 0 0.1")

ProtoInstance191.addFieldValue(fieldValue193)
fieldValue194 = x3d.fieldValue()
fieldValue194.setName("sensorTranslation")
fieldValue194.setValue("0 0 0")

ProtoInstance191.addFieldValue(fieldValue194)
fieldValue195 = x3d.fieldValue()
fieldValue195.setName("textString")
fieldValue195.setValue("\"c=\"")

ProtoInstance191.addFieldValue(fieldValue195)
fieldValue196 = x3d.fieldValue()
fieldValue196.setName("parameterScale")
fieldValue196.setValue("20")

ProtoInstance191.addFieldValue(fieldValue196)
fieldValue197 = x3d.fieldValue()
fieldValue197.setName("parameterName")
fieldValue197.setValue("c")

ProtoInstance191.addFieldValue(fieldValue197)
fieldValue198 = x3d.fieldValue()
fieldValue198.setName("shaderNode")
ComposedShader199 = x3d.ComposedShader()
ComposedShader199.setUSE("freewrlShader")

fieldValue198.addChildren(ComposedShader199)

ProtoInstance191.addFieldValue(fieldValue198)

LayoutLayer118.addChildren(ProtoInstance191)
ProtoInstance200 = x3d.ProtoInstance()
ProtoInstance200.setName("SliderProto")
ProtoInstance200.setDEF("dPI")
fieldValue201 = x3d.fieldValue()
fieldValue201.setName("sliderTranslation")
fieldValue201.setValue("0 -0.2 0")

ProtoInstance200.addFieldValue(fieldValue201)
fieldValue202 = x3d.fieldValue()
fieldValue202.setName("transformTranslation")
fieldValue202.setValue("0 0 0.1")

ProtoInstance200.addFieldValue(fieldValue202)
fieldValue203 = x3d.fieldValue()
fieldValue203.setName("sensorTranslation")
fieldValue203.setValue("0 0 0")

ProtoInstance200.addFieldValue(fieldValue203)
fieldValue204 = x3d.fieldValue()
fieldValue204.setName("textString")
fieldValue204.setValue("\"d=\"")

ProtoInstance200.addFieldValue(fieldValue204)
fieldValue205 = x3d.fieldValue()
fieldValue205.setName("parameterScale")
fieldValue205.setValue("20")

ProtoInstance200.addFieldValue(fieldValue205)
fieldValue206 = x3d.fieldValue()
fieldValue206.setName("parameterName")
fieldValue206.setValue("d")

ProtoInstance200.addFieldValue(fieldValue206)
fieldValue207 = x3d.fieldValue()
fieldValue207.setName("shaderNode")
ComposedShader208 = x3d.ComposedShader()
ComposedShader208.setUSE("freewrlShader")

fieldValue207.addChildren(ComposedShader208)

ProtoInstance200.addFieldValue(fieldValue207)

LayoutLayer118.addChildren(ProtoInstance200)
ProtoInstance209 = x3d.ProtoInstance()
ProtoInstance209.setName("SliderProto")
ProtoInstance209.setDEF("tdeltaPI")
fieldValue210 = x3d.fieldValue()
fieldValue210.setName("sliderTranslation")
fieldValue210.setValue("0 -0.5 0")

ProtoInstance209.addFieldValue(fieldValue210)
fieldValue211 = x3d.fieldValue()
fieldValue211.setName("transformTranslation")
fieldValue211.setValue("0 0 0.1")

ProtoInstance209.addFieldValue(fieldValue211)
fieldValue212 = x3d.fieldValue()
fieldValue212.setName("sensorTranslation")
fieldValue212.setValue("0 0 0")

ProtoInstance209.addFieldValue(fieldValue212)
fieldValue213 = x3d.fieldValue()
fieldValue213.setName("textString")
fieldValue213.setValue("\"tdelta=\"")

ProtoInstance209.addFieldValue(fieldValue213)
fieldValue214 = x3d.fieldValue()
fieldValue214.setName("parameterScale")
fieldValue214.setValue("6.28")

ProtoInstance209.addFieldValue(fieldValue214)
fieldValue215 = x3d.fieldValue()
fieldValue215.setName("parameterName")
fieldValue215.setValue("tdelta")

ProtoInstance209.addFieldValue(fieldValue215)
fieldValue216 = x3d.fieldValue()
fieldValue216.setName("shaderNode")
ComposedShader217 = x3d.ComposedShader()
ComposedShader217.setUSE("freewrlShader")

fieldValue216.addChildren(ComposedShader217)

ProtoInstance209.addFieldValue(fieldValue216)

LayoutLayer118.addChildren(ProtoInstance209)
ProtoInstance218 = x3d.ProtoInstance()
ProtoInstance218.setName("SliderProto")
ProtoInstance218.setDEF("pdeltaPI")
fieldValue219 = x3d.fieldValue()
fieldValue219.setName("sliderTranslation")
fieldValue219.setValue("0 -0.8 0")

ProtoInstance218.addFieldValue(fieldValue219)
fieldValue220 = x3d.fieldValue()
fieldValue220.setName("transformTranslation")
fieldValue220.setValue("0 0 0.1")

ProtoInstance218.addFieldValue(fieldValue220)
fieldValue221 = x3d.fieldValue()
fieldValue221.setName("sensorTranslation")
fieldValue221.setValue("0 0 0")

ProtoInstance218.addFieldValue(fieldValue221)
fieldValue222 = x3d.fieldValue()
fieldValue222.setName("textString")
fieldValue222.setValue("\"pdelta=\"")

ProtoInstance218.addFieldValue(fieldValue222)
fieldValue223 = x3d.fieldValue()
fieldValue223.setName("parameterScale")
fieldValue223.setValue("6.28")

ProtoInstance218.addFieldValue(fieldValue223)
fieldValue224 = x3d.fieldValue()
fieldValue224.setName("parameterName")
fieldValue224.setValue("pdelta")

ProtoInstance218.addFieldValue(fieldValue224)
fieldValue225 = x3d.fieldValue()
fieldValue225.setName("shaderNode")
ComposedShader226 = x3d.ComposedShader()
ComposedShader226.setUSE("freewrlShader")

fieldValue225.addChildren(ComposedShader226)

ProtoInstance218.addFieldValue(fieldValue225)

LayoutLayer118.addChildren(ProtoInstance218)
Layout227 = x3d.Layout()
Layout227.setAlign(["LEFT","BOTTOM"])
Layout227.setOffset(x3d.doubleToFloat([-0.2,0.19]))
Layout227.setSize(x3d.doubleToFloat([0.4,0.6]))

LayoutLayer118.setLayout(Layout227)
Viewport228 = x3d.Viewport()
Viewport228.setClipBoundary(x3d.doubleToFloat([0,1,0,1]))

LayoutLayer118.setViewport(Viewport228)

LayerSet36.addLayers(LayoutLayer118)

Scene31.addLayerSet(LayerSet36)

X3D0.setScene(Scene31)
X3D0.toFileX3D("../data/bumpyfreewrljsonverse.new.python.x3d")
X3D0.toFileJSON("../data/bumpyfreewrljsonverse.new.python.json")
