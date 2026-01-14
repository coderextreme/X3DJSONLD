import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
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
component8.setName("Shape")
component8.setLevel(4)

head1.addComponent(component8)
component9 = x3d.component()
component9.setName("Grouping")
component9.setLevel(3)

head1.addComponent(component9)
component10 = x3d.component()
component10.setName("Core")
component10.setLevel(1)

head1.addComponent(component10)
component11 = x3d.component()
component11.setName("DIS")
component11.setLevel(2)

head1.addComponent(component11)
meta12 = x3d.meta()
meta12.setName("title")
meta12.setContent("bumpyfreewrlsliders.x3d")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("description")
meta13.setContent("Bumpy Orbitals with Sliders for FreeWRL")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("creator")
meta14.setContent("Doug Sanden, Christoph Valentin, John Carlson")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("identifier")
meta15.setContent("https:/coderextreme.net/X3DJSONLD/src/main/data/bumpyfreewrlsliders.x3d")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("license")
meta16.setContent("license.html")

head1.addMeta(meta16)

X3D0.setHead(head1)
Scene17 = x3d.Scene()

Scene17.addComments(x3d.CommentsBlock("""LayerSet with two layers, navigation happens in layer 1"""))
LayerSet18 = x3d.LayerSet()
LayerSet18.setActiveLayer(1)
LayerSet18.setOrder([1,2])

LayerSet18.addComments(x3d.CommentsBlock("""the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\""""))

LayerSet18.addComments(x3d.CommentsBlock("""the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)"""))
Layer19 = x3d.Layer()
Layer19.setPickable(True)
Layer19.setObjectType(["ALL"])

Layer19.addComments(x3d.CommentsBlock("""basic nodes, which might be present in any scene"""))
NavigationInfo20 = x3d.NavigationInfo()
NavigationInfo20.setType(["EXAMINE","FLY","LOOKAT","ANY"])
NavigationInfo20.setAvatarSize(x3d.doubleToFloat([0.25,1.75,0.75]))

Layer19.addChild(NavigationInfo20)
DirectionalLight21 = x3d.DirectionalLight()
DirectionalLight21.setAmbientIntensity(0.2)
DirectionalLight21.setDirection(x3d.doubleToFloat([0,-1,0]))

Layer19.addChild(DirectionalLight21)
DirectionalLight22 = x3d.DirectionalLight()
DirectionalLight22.setAmbientIntensity(0.2)
DirectionalLight22.setDirection(x3d.doubleToFloat([-1,-0.1,-1]))

Layer19.addChild(DirectionalLight22)
Viewpoint23 = x3d.Viewpoint()
Viewpoint23.setDescription("My Overview")
Viewpoint23.setFieldOfView(1.570796)
Viewpoint23.setPosition(x3d.doubleToFloat([0,1.75,60]))

Layer19.addChild(Viewpoint23)

Layer19.addComments(x3d.CommentsBlock("""this group contains the red/green/blue 3D crosshair"""))
Group24 = x3d.Group()

Group24.addComments(x3d.CommentsBlock("""Arrow X"""))
Transform25 = x3d.Transform()
Transform25.setTranslation(x3d.doubleToFloat([25,0,0]))
Transform25.setRotation(x3d.doubleToFloat([0,0,-1,1.57]))
Shape26 = x3d.Shape()
Cylinder27 = x3d.Cylinder()
Cylinder27.setDEF("Shaft")
Cylinder27.setRadius(0.35)
Cylinder27.setHeight(50)

Shape26.setGeometry(Cylinder27)
Appearance28 = x3d.Appearance()
Material29 = x3d.Material()
Material29.setDEF("RED")
Material29.setDiffuseColor(x3d.doubleToFloat([1,0,0]))
Material29.setEmissiveColor(x3d.doubleToFloat([1,0,0]))

Appearance28.setMaterial(Material29)

Shape26.setAppearance(Appearance28)

Transform25.addChild(Shape26)

Group24.addChild(Transform25)
Transform30 = x3d.Transform()
Transform30.setTranslation(x3d.doubleToFloat([50,0,0]))
Transform30.setRotation(x3d.doubleToFloat([0,0,-1,1.57]))
Shape31 = x3d.Shape()
Cone32 = x3d.Cone()
Cone32.setDEF("Tip")
Cone32.setBottomRadius(0.8)
Cone32.setHeight(3)

Shape31.setGeometry(Cone32)
Appearance33 = x3d.Appearance()
Material34 = x3d.Material()
Material34.setUSE("RED")

Appearance33.setMaterial(Material34)

Shape31.setAppearance(Appearance33)

Transform30.addChild(Shape31)

Group24.addChild(Transform30)

Group24.addComments(x3d.CommentsBlock("""Arrow Y"""))
Transform35 = x3d.Transform()
Transform35.setTranslation(x3d.doubleToFloat([0,25,0]))
Shape36 = x3d.Shape()
Cylinder37 = x3d.Cylinder()
Cylinder37.setUSE("Shaft")

Shape36.setGeometry(Cylinder37)
Appearance38 = x3d.Appearance()
Material39 = x3d.Material()
Material39.setDEF("GREEN")
Material39.setDiffuseColor(x3d.doubleToFloat([0,1,0]))
Material39.setEmissiveColor(x3d.doubleToFloat([0,1,0]))

Appearance38.setMaterial(Material39)

Shape36.setAppearance(Appearance38)

Transform35.addChild(Shape36)

Group24.addChild(Transform35)
Transform40 = x3d.Transform()
Transform40.setTranslation(x3d.doubleToFloat([0,50,0]))
Shape41 = x3d.Shape()
Cone42 = x3d.Cone()
Cone42.setUSE("Tip")

Shape41.setGeometry(Cone42)
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()
Material44.setUSE("GREEN")

Appearance43.setMaterial(Material44)

Shape41.setAppearance(Appearance43)

Transform40.addChild(Shape41)

Group24.addChild(Transform40)

Group24.addComments(x3d.CommentsBlock("""Arrow Z"""))
Transform45 = x3d.Transform()
Transform45.setTranslation(x3d.doubleToFloat([0,0,25]))
Transform45.setRotation(x3d.doubleToFloat([1,0,0,1.57]))
Shape46 = x3d.Shape()
Cylinder47 = x3d.Cylinder()
Cylinder47.setUSE("Shaft")

Shape46.setGeometry(Cylinder47)
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.setDEF("BLUE")
Material49.setDiffuseColor(x3d.doubleToFloat([0,0,1]))
Material49.setEmissiveColor(x3d.doubleToFloat([0,0,1]))

Appearance48.setMaterial(Material49)

Shape46.setAppearance(Appearance48)

Transform45.addChild(Shape46)

Group24.addChild(Transform45)
Transform50 = x3d.Transform()
Transform50.setTranslation(x3d.doubleToFloat([0,0,50]))
Transform50.setRotation(x3d.doubleToFloat([1,0,0,1.57]))
Shape51 = x3d.Shape()
Cone52 = x3d.Cone()
Cone52.setUSE("Tip")

Shape51.setGeometry(Cone52)
Appearance53 = x3d.Appearance()
Material54 = x3d.Material()
Material54.setUSE("BLUE")

Appearance53.setMaterial(Material54)

Shape51.setAppearance(Appearance53)

Transform50.addChild(Shape51)

Group24.addChild(Transform50)

Layer19.addChild(Group24)

Layer19.addComments(x3d.CommentsBlock("""the model that is being reviewed by the users of this scene"""))
Transform55 = x3d.Transform()
Transform55.setDEF("FlowerTransform")

Transform55.addComments(x3d.CommentsBlock("""<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />"""))

Transform55.addComments(x3d.CommentsBlock("""Images courtesy of Paul Debevec's Light Probe Image Gallery"""))
Background56 = x3d.Background()
Background56.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background56.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background56.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background56.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background56.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background56.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Transform55.addChild(Background56)
Transform57 = x3d.Transform()
Shape58 = x3d.Shape()
Sphere59 = x3d.Sphere()
Sphere59.setRadius(5)

Shape58.setGeometry(Sphere59)

Shape58.addComments(x3d.CommentsBlock("""<IndexedFaceSet convex=\"false\" DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>"""))
Appearance60 = x3d.Appearance()
Material61 = x3d.Material()
Material61.setDiffuseColor(x3d.doubleToFloat([0.7,0.7,0.7]))
Material61.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance60.setMaterial(Material61)
ComposedCubeMapTexture62 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture62.setDEF("texture")
ImageTexture63 = x3d.ImageTexture()
ImageTexture63.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture62.setBackTexture(ImageTexture63)
ImageTexture64 = x3d.ImageTexture()
ImageTexture64.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture62.setBottomTexture(ImageTexture64)
ImageTexture65 = x3d.ImageTexture()
ImageTexture65.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture62.setFrontTexture(ImageTexture65)
ImageTexture66 = x3d.ImageTexture()
ImageTexture66.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture62.setLeftTexture(ImageTexture66)
ImageTexture67 = x3d.ImageTexture()
ImageTexture67.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture62.setRightTexture(ImageTexture67)
ImageTexture68 = x3d.ImageTexture()
ImageTexture68.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture62.setTopTexture(ImageTexture68)

Appearance60.setTexture(ComposedCubeMapTexture62)
ComposedShader69 = x3d.ComposedShader()
ComposedShader69.setDEF("freewrlShader")
ComposedShader69.setLanguage("GLSL")
field70 = x3d.field()
field70.setName("fw_textureCoordGenType")
field70.setAccessType("inputOutput")
field70.setType("SFInt32")
field70.setValue("0")

ComposedShader69.addField(field70)
field71 = x3d.field()
field71.setName("chromaticDispertion")
field71.setAccessType("initializeOnly")
field71.setType("SFVec3f")
field71.setValue("0.98 1 1.033")

ComposedShader69.addField(field71)
field72 = x3d.field()
field72.setName("bias")
field72.setType("SFFloat")
field72.setAccessType("inputOutput")
field72.setValue("0.5")

ComposedShader69.addField(field72)
field73 = x3d.field()
field73.setName("scale")
field73.setType("SFFloat")
field73.setAccessType("inputOutput")
field73.setValue("0.5")

ComposedShader69.addField(field73)
field74 = x3d.field()
field74.setName("power")
field74.setType("SFFloat")
field74.setAccessType("inputOutput")
field74.setValue("2")

ComposedShader69.addField(field74)
field75 = x3d.field()
field75.setName("a")
field75.setType("SFFloat")
field75.setAccessType("inputOutput")
field75.setValue("15")

ComposedShader69.addField(field75)
field76 = x3d.field()
field76.setName("b")
field76.setType("SFFloat")
field76.setAccessType("inputOutput")
field76.setValue("5")

ComposedShader69.addField(field76)
field77 = x3d.field()
field77.setName("c")
field77.setType("SFFloat")
field77.setAccessType("inputOutput")
field77.setValue("20")

ComposedShader69.addField(field77)
field78 = x3d.field()
field78.setName("d")
field78.setType("SFFloat")
field78.setAccessType("inputOutput")
field78.setValue("20")

ComposedShader69.addField(field78)
field79 = x3d.field()
field79.setName("tdelta")
field79.setType("SFFloat")
field79.setAccessType("inputOutput")
field79.setValue("0")

ComposedShader69.addField(field79)
field80 = x3d.field()
field80.setName("pdelta")
field80.setType("SFFloat")
field80.setAccessType("inputOutput")
field80.setValue("0")

ComposedShader69.addField(field80)

ComposedShader69.addComments(x3d.CommentsBlock("""<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>"""))
ShaderPart81 = x3d.ShaderPart()
ShaderPart81.setType("VERTEX")
IS82 = x3d.IS()
connect83 = x3d.connect()
connect83.setNodeField("url")
connect83.setProtoField("vertex")

IS82.addConnect(connect83)

ShaderPart81.setIS(IS82)

ComposedShader69.addParts(ShaderPart81)
ShaderPart84 = x3d.ShaderPart()
ShaderPart84.setType("FRAGMENT")
IS85 = x3d.IS()
connect86 = x3d.connect()
connect86.setNodeField("url")
connect86.setProtoField("fragment")

IS85.addConnect(connect86)

ShaderPart84.setIS(IS85)

ComposedShader69.addParts(ShaderPart84)

Appearance60.addShaders(ComposedShader69)

Appearance60.addComments(x3d.CommentsBlock("""<ComposedShader DEF=\"freewrlShader\" language=\"GLSL\"> <field name='fw_textureCoordGenType' accessType='inputOutput' type='SFInt32' value='0'></field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='a' type='SFFloat' accessType='inputOutput' value='15'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='5'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <ShaderPart type='VERTEX'> <IS> <connect nodeField=\"url\" protoField=\"vertex\"/> </IS> </ShaderPart> <ShaderPart type='FRAGMENT'> <IS> <connect nodeField=\"url\" protoField=\"fragment\"/> </IS> </ShaderPart> </ComposedShader>"""))

Shape58.setAppearance(Appearance60)

Transform57.addChild(Shape58)

Transform55.addChild(Transform57)

Layer19.addChild(Transform55)

Layer19.addComments(x3d.CommentsBlock("""<Script DEF=\"OrbitScript\"> <field accessType=\"inputOutput\" name=\"coordinates\" type=\"MFVec3f\"/> <field accessType=\"outputOnly\" name=\"coordIndexes\" type=\"MFInt32\"/> <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <![CDATA[ecmascript: function initialize() { var resolution = 300; var theta = 0.0; var phi = 0.0; var delta = (2 * 3.141592653) / (resolution-1); var crds = new MFVec3f(); for ( i = 0; i < resolution; i++) { for ( j = 0; j < resolution; j++) { var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta); crds.push(new SFVec3f( rho * Math.cos(phi) * Math.cos(theta), rho * Math.cos(phi) * Math.sin(theta), rho * Math.sin(phi) )); theta += delta; } phi += delta; } coordinates = crds; var cis = new MFInt32(); for ( i = 0; i < resolution-1; i++) { for ( j = 0; j < resolution-1; j++) { cis.push(i*resolution+j); cis.push(i*resolution+j+1); cis.push((i+1)*resolution+j+1); cis.push((i+1)*resolution+j); cis.push(-1); } } coordIndexes = cis; } ]]></Script> <ROUTE fromField=\"coordIndexes\" fromNode=\"OrbitScript\" toField=\"set_coordIndex\" toNode=\"Orbit\"/> <ROUTE fromField=\"coordinates\" fromNode=\"OrbitScript\" toField=\"set_point\" toNode=\"OrbitCoordinates\"/>"""))

Layer19.addComments(x3d.CommentsBlock("""DIS multiuser facilities"""))
DISEntityManager87 = x3d.DISEntityManager()
DISEntityManager87.setDEF("EntityManager")
DISEntityTypeMapping88 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping88.setCategory(77)
DISEntityTypeMapping88.setSpecific(1)
DISEntityTypeMapping88.setUrl(["../data/Leif8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"])

DISEntityManager87.addChild(DISEntityTypeMapping88)
DISEntityTypeMapping89 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping89.setCategory(77)
DISEntityTypeMapping89.setSpecific(2)
DISEntityTypeMapping89.setUrl(["../data/Lily8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"])

DISEntityManager87.addChild(DISEntityTypeMapping89)
DISEntityTypeMapping90 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping90.setCategory(77)
DISEntityTypeMapping90.setSpecific(3)
DISEntityTypeMapping90.setUrl(["../data/Tufani8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"])

DISEntityManager87.addChild(DISEntityTypeMapping90)
DISEntityTypeMapping91 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping91.setCategory(77)
DISEntityTypeMapping91.setSpecific(4)
DISEntityTypeMapping91.setUrl(["../data/Gramps8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"])

DISEntityManager87.addChild(DISEntityTypeMapping91)

Layer19.addChild(DISEntityManager87)
Collision92 = x3d.Collision()
Group93 = x3d.Group()
Group93.setDEF("AvatarHolder")

Collision92.setProxy(Group93)

Layer19.addChild(Collision92)
ROUTE94 = x3d.ROUTE()
ROUTE94.setFromField("addedEntities")
ROUTE94.setFromNode("EntityManager")
ROUTE94.setToField("addChildren")
ROUTE94.setToNode("AvatarHolder")

Layer19.addChild(ROUTE94)
ROUTE95 = x3d.ROUTE()
ROUTE95.setFromField("removedEntities")
ROUTE95.setFromNode("EntityManager")
ROUTE95.setToField("removeChildren")
ROUTE95.setToNode("AvatarHolder")

Layer19.addChild(ROUTE95)

LayerSet18.addLayers(Layer19)
LayoutLayer96 = x3d.LayoutLayer()
LayoutLayer96.setPickable(True)
LayoutLayer96.setObjectType(["ALL"])

LayoutLayer96.addComments(x3d.CommentsBlock("""positioning the LayoutLayer"""))

LayoutLayer96.addComments(x3d.CommentsBlock("""clipping the LayoutLayer"""))

LayoutLayer96.addComments(x3d.CommentsBlock("""the content (children) of the LayoutLayer"""))

LayoutLayer96.addComments(x3d.CommentsBlock("""first, the slider for scaling the model"""))
Transform97 = x3d.Transform()
Transform97.setTranslation(x3d.doubleToFloat([0,0,-3]))
Shape98 = x3d.Shape()
Appearance99 = x3d.Appearance()
Material100 = x3d.Material()
Material100.setDiffuseColor(x3d.doubleToFloat([0.1,0.1,0.1]))
Material100.setTransparency(1)

Appearance99.setMaterial(Material100)

Shape98.setAppearance(Appearance99)
Box101 = x3d.Box()
Box101.setSize(x3d.doubleToFloat([100,100,0.02]))

Shape98.setGeometry(Box101)

Transform97.addChild(Shape98)

LayoutLayer96.addChild(Transform97)
Transform102 = x3d.Transform()
Transform102.setDEF("equationTransform")
Transform103 = x3d.Transform()
Transform103.setTranslation(x3d.doubleToFloat([0,0,-20]))
Shape104 = x3d.Shape()
Text105 = x3d.Text()
Text105.setDEF("equation")
Text105.setString(["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"])
FontStyle106 = x3d.FontStyle()
FontStyle106.setSize(0.09)

Text105.setFontStyle(FontStyle106)

Shape104.setGeometry(Text105)
Appearance107 = x3d.Appearance()
Material108 = x3d.Material()
Material108.setDiffuseColor(x3d.doubleToFloat([0,1,1]))

Appearance107.setMaterial(Material108)

Shape104.setAppearance(Appearance107)

Transform103.addChild(Shape104)

Transform102.addChild(Transform103)

LayoutLayer96.addChild(Transform102)
ProtoDeclare109 = x3d.ProtoDeclare()
ProtoDeclare109.setName("SliderProto")
ProtoInterface110 = x3d.ProtoInterface()
field111 = x3d.field()
field111.setName("sliderTranslation")
field111.setAccessType("inputOutput")
field111.setType("SFVec3f")
field111.setValue("0 0.7 0")

ProtoInterface110.addField(field111)
field112 = x3d.field()
field112.setName("transformTranslation")
field112.setAccessType("inputOutput")
field112.setType("SFVec3f")
field112.setValue("0 0 0.1")

ProtoInterface110.addField(field112)
field113 = x3d.field()
field113.setName("sensorTranslation")
field113.setAccessType("inputOutput")
field113.setType("SFVec3f")
field113.setValue("0 0 0")

ProtoInterface110.addField(field113)
field114 = x3d.field()
field114.setName("numberTranslation")
field114.setAccessType("inputOutput")
field114.setType("SFVec3f")
field114.setValue("0.2 0 0")

ProtoInterface110.addField(field114)
field115 = x3d.field()
field115.setName("textString")
field115.setAccessType("inputOutput")
field115.setType("MFString")
field115.setValue("\"a=\"")

ProtoInterface110.addField(field115)
field116 = x3d.field()
field116.setName("parameterName")
field116.setAccessType("inputOutput")
field116.setType("SFString")
field116.setValue("a")

ProtoInterface110.addField(field116)
field117 = x3d.field()
field117.setName("parameterScale")
field117.setAccessType("inputOutput")
field117.setType("SFFloat")
field117.setValue("30")

ProtoInterface110.addField(field117)
field118 = x3d.field()
field118.setName("shaderNode")
field118.setAccessType("inputOutput")
field118.setType("SFNode")

ProtoInterface110.addField(field118)

ProtoDeclare109.setProtoInterface(ProtoInterface110)
ProtoBody119 = x3d.ProtoBody()
Group120 = x3d.Group()
Transform121 = x3d.Transform()
Transform121.setDEF("protoSlider")
Transform121.setTranslation(x3d.doubleToFloat([0,0.7,0]))
IS122 = x3d.IS()
connect123 = x3d.connect()
connect123.setNodeField("translation")
connect123.setProtoField("sliderTranslation")

IS122.addConnect(connect123)

Transform121.setIS(IS122)
Transform124 = x3d.Transform()
Transform124.setDEF("protoTransform")
Transform124.setTranslation(x3d.doubleToFloat([0,0,0.1]))
IS125 = x3d.IS()
connect126 = x3d.connect()
connect126.setNodeField("translation")
connect126.setProtoField("sensorTranslation")

IS125.addConnect(connect126)

Transform124.setIS(IS125)
PlaneSensor127 = x3d.PlaneSensor()
PlaneSensor127.setDEF("protoSensor")
PlaneSensor127.setMaxPosition(x3d.doubleToFloat([2,0]))

Transform124.addChild(PlaneSensor127)
Transform128 = x3d.Transform()
Transform128.setTranslation(x3d.doubleToFloat([0,0,0]))
TouchSensor129 = x3d.TouchSensor()
TouchSensor129.setDEF("protoTS")

Transform128.addChild(TouchSensor129)

Transform124.addChild(Transform128)
Transform130 = x3d.Transform()
Shape131 = x3d.Shape()
Text132 = x3d.Text()
Text132.setDEF("protoText")
Text132.setString(["a="])
IS133 = x3d.IS()
connect134 = x3d.connect()
connect134.setNodeField("string")
connect134.setProtoField("textString")

IS133.addConnect(connect134)

Text132.setIS(IS133)
FontStyle135 = x3d.FontStyle()
FontStyle135.setSize(0.2)

Text132.setFontStyle(FontStyle135)

Shape131.setGeometry(Text132)
Appearance136 = x3d.Appearance()
Material137 = x3d.Material()
Material137.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance136.setMaterial(Material137)

Shape131.setAppearance(Appearance136)

Transform130.addChild(Shape131)
Transform138 = x3d.Transform()
IS139 = x3d.IS()
connect140 = x3d.connect()
connect140.setNodeField("translation")
connect140.setProtoField("numberTranslation")

IS139.addConnect(connect140)

Transform138.setIS(IS139)
Shape141 = x3d.Shape()
Text142 = x3d.Text()
Text142.setDEF("protoNumber")
Text142.setString(["0"])
FontStyle143 = x3d.FontStyle()
FontStyle143.setSize(0.2)

Text142.setFontStyle(FontStyle143)

Shape141.setGeometry(Text142)
Appearance144 = x3d.Appearance()
Material145 = x3d.Material()
Material145.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance144.setMaterial(Material145)

Shape141.setAppearance(Appearance144)

Transform138.addChild(Shape141)

Transform130.addChild(Transform138)

Transform124.addChild(Transform130)

Transform121.addChild(Transform124)

Group120.addChild(Transform121)
Script146 = x3d.Script()
Script146.setDEF("protoValueTransformerScript")
Script146.setDirectOutput(True)
Script146.setMustEvaluate(True)
field147 = x3d.field()
field147.setName("protoScale")
field147.setAccessType("inputOutput")
field147.setType("SFFloat")
field147.setValue("30")

Script146.addField(field147)
field148 = x3d.field()
field148.setName("shader")
field148.setAccessType("inputOutput")
field148.setType("SFNode")

Script146.addField(field148)
field149 = x3d.field()
field149.setName("newTranslation")
field149.setAccessType("inputOutput")
field149.setType("SFVec3f")
field149.setValue("1 1 1")

Script146.addField(field149)
field150 = x3d.field()
field150.setName("protoValue_changed")
field150.setAccessType("inputOutput")
field150.setType("SFFloat")
field150.setValue("1")

Script146.addField(field150)
field151 = x3d.field()
field151.setName("protoNumber_changed")
field151.setAccessType("inputOutput")
field151.setType("MFString")
field151.setValue("\"0.0\"")

Script146.addField(field151)
field152 = x3d.field()
field152.setName("protoParameterName")
field152.setAccessType("inputOutput")
field152.setType("SFString")
field152.setValue("a")

Script146.addField(field152)
IS153 = x3d.IS()
connect154 = x3d.connect()
connect154.setNodeField("protoScale")
connect154.setProtoField("parameterScale")

IS153.addConnect(connect154)
connect155 = x3d.connect()
connect155.setNodeField("protoParameterName")
connect155.setProtoField("parameterName")

IS153.addConnect(connect155)
connect156 = x3d.connect()
connect156.setNodeField("shader")
connect156.setProtoField("shaderNode")

IS153.addConnect(connect156)

Script146.setIS(IS153)

Script146.setSourceCode('''ecmascript:
	const newTranslation = function(Value) {
	    protoValue_changed = Value[0] * protoScale;
	    protoNumber_changed = new MFString(protoValue_changed.toFixed(2).toString());
	    Browser.println(\"In newTranslation:\");
	    Browser.println(shader);
	    Browser.println(Value[0]);
	    Browser.println(Value.x);
	    Browser.println(protoScale);
	    Browser.println(Value[0] * protoScale);
	    Browser.println(protoParameterName);
					// shader[protoParameterName] = Value[0] * protoScale;
	};''')

Group120.addChild(Script146)
ROUTE157 = x3d.ROUTE()
ROUTE157.setFromField("translation_changed")
ROUTE157.setFromNode("protoSensor")
ROUTE157.setToField("set_translation")
ROUTE157.setToNode("protoTransform")

Group120.addChild(ROUTE157)
ROUTE158 = x3d.ROUTE()
ROUTE158.setFromField("translation_changed")
ROUTE158.setFromNode("protoSensor")
ROUTE158.setToField("newTranslation")
ROUTE158.setToNode("protoValueTransformerScript")

Group120.addChild(ROUTE158)
ROUTE159 = x3d.ROUTE()
ROUTE159.setFromField("protoNumber_changed")
ROUTE159.setFromNode("protoValueTransformerScript")
ROUTE159.setToField("string")
ROUTE159.setToNode("protoNumber")

Group120.addChild(ROUTE159)

ProtoBody119.addChild(Group120)

ProtoDeclare109.setProtoBody(ProtoBody119)

LayoutLayer96.addChild(ProtoDeclare109)
ProtoInstance160 = x3d.ProtoInstance()
ProtoInstance160.setName("SliderProto")
ProtoInstance160.setDEF("aPI")
fieldValue161 = x3d.fieldValue()
fieldValue161.setName("sliderTranslation")
fieldValue161.setValue("0 0.7 0")

ProtoInstance160.addFieldValue(fieldValue161)
fieldValue162 = x3d.fieldValue()
fieldValue162.setName("transformTranslation")
fieldValue162.setValue("0 0 0.1")

ProtoInstance160.addFieldValue(fieldValue162)
fieldValue163 = x3d.fieldValue()
fieldValue163.setName("sensorTranslation")
fieldValue163.setValue("0 0 0")

ProtoInstance160.addFieldValue(fieldValue163)
fieldValue164 = x3d.fieldValue()
fieldValue164.setName("numberTranslation")
fieldValue164.setValue("0.3 0 0")

ProtoInstance160.addFieldValue(fieldValue164)
fieldValue165 = x3d.fieldValue()
fieldValue165.setName("textString")
fieldValue165.setValue("\"a=\"")

ProtoInstance160.addFieldValue(fieldValue165)
fieldValue166 = x3d.fieldValue()
fieldValue166.setName("parameterName")
fieldValue166.setValue("a")

ProtoInstance160.addFieldValue(fieldValue166)
fieldValue167 = x3d.fieldValue()
fieldValue167.setName("parameterScale")
fieldValue167.setValue("30")

ProtoInstance160.addFieldValue(fieldValue167)
fieldValue168 = x3d.fieldValue()
fieldValue168.setName("shaderNode")
ComposedShader169 = x3d.ComposedShader()
ComposedShader169.setUSE("freewrlShader")

fieldValue168.addChild(ComposedShader169)

ProtoInstance160.addFieldValue(fieldValue168)

LayoutLayer96.addChild(ProtoInstance160)
ProtoInstance170 = x3d.ProtoInstance()
ProtoInstance170.setName("SliderProto")
ProtoInstance170.setDEF("bPI")
fieldValue171 = x3d.fieldValue()
fieldValue171.setName("sliderTranslation")
fieldValue171.setValue("0 0.4 0")

ProtoInstance170.addFieldValue(fieldValue171)
fieldValue172 = x3d.fieldValue()
fieldValue172.setName("transformTranslation")
fieldValue172.setValue("0 0 0.1")

ProtoInstance170.addFieldValue(fieldValue172)
fieldValue173 = x3d.fieldValue()
fieldValue173.setName("sensorTranslation")
fieldValue173.setValue("0 0 0")

ProtoInstance170.addFieldValue(fieldValue173)
fieldValue174 = x3d.fieldValue()
fieldValue174.setName("numberTranslation")
fieldValue174.setValue("0.3 0 0")

ProtoInstance170.addFieldValue(fieldValue174)
fieldValue175 = x3d.fieldValue()
fieldValue175.setName("textString")
fieldValue175.setValue("\"b=\"")

ProtoInstance170.addFieldValue(fieldValue175)
fieldValue176 = x3d.fieldValue()
fieldValue176.setName("parameterName")
fieldValue176.setValue("b")

ProtoInstance170.addFieldValue(fieldValue176)
fieldValue177 = x3d.fieldValue()
fieldValue177.setName("parameterScale")
fieldValue177.setValue("30")

ProtoInstance170.addFieldValue(fieldValue177)
fieldValue178 = x3d.fieldValue()
fieldValue178.setName("shaderNode")
ComposedShader179 = x3d.ComposedShader()
ComposedShader179.setUSE("freewrlShader")

fieldValue178.addChild(ComposedShader179)

ProtoInstance170.addFieldValue(fieldValue178)

LayoutLayer96.addChild(ProtoInstance170)
ProtoInstance180 = x3d.ProtoInstance()
ProtoInstance180.setName("SliderProto")
ProtoInstance180.setDEF("cPI")
fieldValue181 = x3d.fieldValue()
fieldValue181.setName("sliderTranslation")
fieldValue181.setValue("0 0.1 0")

ProtoInstance180.addFieldValue(fieldValue181)
fieldValue182 = x3d.fieldValue()
fieldValue182.setName("transformTranslation")
fieldValue182.setValue("0 0 0.1")

ProtoInstance180.addFieldValue(fieldValue182)
fieldValue183 = x3d.fieldValue()
fieldValue183.setName("sensorTranslation")
fieldValue183.setValue("0 0 0")

ProtoInstance180.addFieldValue(fieldValue183)
fieldValue184 = x3d.fieldValue()
fieldValue184.setName("numberTranslation")
fieldValue184.setValue("0.3 0 0")

ProtoInstance180.addFieldValue(fieldValue184)
fieldValue185 = x3d.fieldValue()
fieldValue185.setName("textString")
fieldValue185.setValue("\"c=\"")

ProtoInstance180.addFieldValue(fieldValue185)
fieldValue186 = x3d.fieldValue()
fieldValue186.setName("parameterName")
fieldValue186.setValue("c")

ProtoInstance180.addFieldValue(fieldValue186)
fieldValue187 = x3d.fieldValue()
fieldValue187.setName("parameterScale")
fieldValue187.setValue("20")

ProtoInstance180.addFieldValue(fieldValue187)
fieldValue188 = x3d.fieldValue()
fieldValue188.setName("shaderNode")
ComposedShader189 = x3d.ComposedShader()
ComposedShader189.setUSE("freewrlShader")

fieldValue188.addChild(ComposedShader189)

ProtoInstance180.addFieldValue(fieldValue188)

LayoutLayer96.addChild(ProtoInstance180)
ProtoInstance190 = x3d.ProtoInstance()
ProtoInstance190.setName("SliderProto")
ProtoInstance190.setDEF("dPI")
fieldValue191 = x3d.fieldValue()
fieldValue191.setName("sliderTranslation")
fieldValue191.setValue("0 -0.2 0")

ProtoInstance190.addFieldValue(fieldValue191)
fieldValue192 = x3d.fieldValue()
fieldValue192.setName("transformTranslation")
fieldValue192.setValue("0 0 0.1")

ProtoInstance190.addFieldValue(fieldValue192)
fieldValue193 = x3d.fieldValue()
fieldValue193.setName("sensorTranslation")
fieldValue193.setValue("0 0 0")

ProtoInstance190.addFieldValue(fieldValue193)
fieldValue194 = x3d.fieldValue()
fieldValue194.setName("numberTranslation")
fieldValue194.setValue("0.3 0 0")

ProtoInstance190.addFieldValue(fieldValue194)
fieldValue195 = x3d.fieldValue()
fieldValue195.setName("textString")
fieldValue195.setValue("\"d=\"")

ProtoInstance190.addFieldValue(fieldValue195)
fieldValue196 = x3d.fieldValue()
fieldValue196.setName("parameterName")
fieldValue196.setValue("d")

ProtoInstance190.addFieldValue(fieldValue196)
fieldValue197 = x3d.fieldValue()
fieldValue197.setName("parameterScale")
fieldValue197.setValue("20")

ProtoInstance190.addFieldValue(fieldValue197)
fieldValue198 = x3d.fieldValue()
fieldValue198.setName("shaderNode")
ComposedShader199 = x3d.ComposedShader()
ComposedShader199.setUSE("freewrlShader")

fieldValue198.addChild(ComposedShader199)

ProtoInstance190.addFieldValue(fieldValue198)

LayoutLayer96.addChild(ProtoInstance190)
ProtoInstance200 = x3d.ProtoInstance()
ProtoInstance200.setName("SliderProto")
ProtoInstance200.setDEF("tdeltaPI")
fieldValue201 = x3d.fieldValue()
fieldValue201.setName("sliderTranslation")
fieldValue201.setValue("0 -0.5 0")

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
fieldValue204.setName("numberTranslation")
fieldValue204.setValue("0.8 0 0")

ProtoInstance200.addFieldValue(fieldValue204)
fieldValue205 = x3d.fieldValue()
fieldValue205.setName("textString")
fieldValue205.setValue("\"tdelta=\"")

ProtoInstance200.addFieldValue(fieldValue205)
fieldValue206 = x3d.fieldValue()
fieldValue206.setName("parameterName")
fieldValue206.setValue("tdelta")

ProtoInstance200.addFieldValue(fieldValue206)
fieldValue207 = x3d.fieldValue()
fieldValue207.setName("parameterScale")
fieldValue207.setValue("6.28")

ProtoInstance200.addFieldValue(fieldValue207)
fieldValue208 = x3d.fieldValue()
fieldValue208.setName("shaderNode")
ComposedShader209 = x3d.ComposedShader()
ComposedShader209.setUSE("freewrlShader")

fieldValue208.addChild(ComposedShader209)

ProtoInstance200.addFieldValue(fieldValue208)

LayoutLayer96.addChild(ProtoInstance200)
ProtoInstance210 = x3d.ProtoInstance()
ProtoInstance210.setName("SliderProto")
ProtoInstance210.setDEF("pdeltaPI")
fieldValue211 = x3d.fieldValue()
fieldValue211.setName("sliderTranslation")
fieldValue211.setValue("0 -0.8 0")

ProtoInstance210.addFieldValue(fieldValue211)
fieldValue212 = x3d.fieldValue()
fieldValue212.setName("transformTranslation")
fieldValue212.setValue("0 0 0.1")

ProtoInstance210.addFieldValue(fieldValue212)
fieldValue213 = x3d.fieldValue()
fieldValue213.setName("sensorTranslation")
fieldValue213.setValue("0 0 0")

ProtoInstance210.addFieldValue(fieldValue213)
fieldValue214 = x3d.fieldValue()
fieldValue214.setName("numberTranslation")
fieldValue214.setValue("0.8 0 0")

ProtoInstance210.addFieldValue(fieldValue214)
fieldValue215 = x3d.fieldValue()
fieldValue215.setName("textString")
fieldValue215.setValue("\"pdelta=\"")

ProtoInstance210.addFieldValue(fieldValue215)
fieldValue216 = x3d.fieldValue()
fieldValue216.setName("parameterName")
fieldValue216.setValue("pdelta")

ProtoInstance210.addFieldValue(fieldValue216)
fieldValue217 = x3d.fieldValue()
fieldValue217.setName("parameterScale")
fieldValue217.setValue("6.28")

ProtoInstance210.addFieldValue(fieldValue217)
fieldValue218 = x3d.fieldValue()
fieldValue218.setName("shaderNode")
ComposedShader219 = x3d.ComposedShader()
ComposedShader219.setUSE("freewrlShader")

fieldValue218.addChild(ComposedShader219)

ProtoInstance210.addFieldValue(fieldValue218)

LayoutLayer96.addChild(ProtoInstance210)
Layout220 = x3d.Layout()
Layout220.setAlign(["LEFT","BOTTOM"])
Layout220.setOffset(x3d.doubleToFloat([-0.5,0]))

LayoutLayer96.setLayout(Layout220)
Viewport221 = x3d.Viewport()

LayoutLayer96.setViewport(Viewport221)

LayerSet18.addLayers(LayoutLayer96)

Scene17.addLayerSet(LayerSet18)

X3D0.setScene(Scene17)
X3D0.toFileX3D("../data/bumpyfreewrlsliders.new.graalpy.x3d")
X3D0.toFileJSON("../data/bumpyfreewrlsliders.new.graalpy.x3dj")
