import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
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

head1.addComments(x3d.CommentsBlock('''<component name='Shape' level='4'></component>'''))
meta10 = x3d.meta()
meta10.setName("title")
meta10.setContent("bumpyfreewrl.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("creator")
meta11.setContent("John Carlson")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("description")
meta12.setContent("A flower")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("generator")
meta13.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("identifier")
meta14.setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/bumpyfreewrl.x3d")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = x3d.Scene()
WorldInfo16 = x3d.WorldInfo()
WorldInfo16.setTitle("bumpyfreewrl.x3d")

Scene15.addChild(WorldInfo16)
NavigationInfo17 = x3d.NavigationInfo()

Scene15.addChild(NavigationInfo17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.setPosition(x3d.doubleToFloat([0,0,40]))
Viewpoint18.setDescription("Transparent rose")

Scene15.addChild(Viewpoint18)

Scene15.addComments(x3d.CommentsBlock('''Images courtesy of Paul Debevec's Light Probe Image Gallery'''))
Background19 = x3d.Background()
Background19.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background19.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background19.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background19.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background19.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background19.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene15.addChild(Background19)
Transform20 = x3d.Transform()
Shape21 = x3d.Shape()
Sphere22 = x3d.Sphere()
Sphere22.setRadius(5)

Shape21.setGeometry(Sphere22)
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()
Material24.setDiffuseColor(x3d.doubleToFloat([0.7,0.7,0.7]))
Material24.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance23.setMaterial(Material24)
ComposedCubeMapTexture25 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture25.setDEF("texture")
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture25.setBackTexture(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture25.setBottomTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture25.setFrontTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture25.setLeftTexture(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture25.setRightTexture(ImageTexture30)
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture25.setTopTexture(ImageTexture31)

Appearance23.setTexture(ComposedCubeMapTexture25)
ComposedShader32 = x3d.ComposedShader()
ComposedShader32.setDEF("freewrlShader")
ComposedShader32.setLanguage("GLSL")
field33 = x3d.field()
field33.setName("chromaticDispertion")
field33.setAccessType("inputOnly")
field33.setType("SFVec3f")
field33.setValue("0.98 1 1.033")

ComposedShader32.addField(field33)
field34 = x3d.field()
field34.setName("fw_textureCoordGenType")
field34.setAccessType("inputOnly")
field34.setType("SFInt32")
field34.setValue("0")

ComposedShader32.addField(field34)
field35 = x3d.field()
field35.setName("bias")
field35.setType("SFFloat")
field35.setAccessType("inputOnly")
field35.setValue("0.5")

ComposedShader32.addField(field35)
field36 = x3d.field()
field36.setName("scale")
field36.setType("SFFloat")
field36.setAccessType("inputOnly")
field36.setValue("0.5")

ComposedShader32.addField(field36)
field37 = x3d.field()
field37.setName("power")
field37.setType("SFFloat")
field37.setAccessType("inputOnly")
field37.setValue("2")

ComposedShader32.addField(field37)
field38 = x3d.field()
field38.setName("a")
field38.setType("SFFloat")
field38.setAccessType("inputOutput")
field38.setValue("10")

ComposedShader32.addField(field38)
field39 = x3d.field()
field39.setName("b")
field39.setType("SFFloat")
field39.setAccessType("inputOutput")
field39.setValue("1")

ComposedShader32.addField(field39)
field40 = x3d.field()
field40.setName("c")
field40.setType("SFFloat")
field40.setAccessType("inputOutput")
field40.setValue("5")

ComposedShader32.addField(field40)
field41 = x3d.field()
field41.setName("d")
field41.setType("SFFloat")
field41.setAccessType("inputOutput")
field41.setValue("5")

ComposedShader32.addField(field41)
field42 = x3d.field()
field42.setName("tdelta")
field42.setType("SFFloat")
field42.setAccessType("inputOutput")
field42.setValue("0")

ComposedShader32.addField(field42)
field43 = x3d.field()
field43.setName("pdelta")
field43.setType("SFFloat")
field43.setAccessType("inputOutput")
field43.setValue("0")

ComposedShader32.addField(field43)
ShaderPart44 = x3d.ShaderPart()
ShaderPart44.setUrl(["../shaders/freewrl_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"])
ShaderPart44.setType("VERTEX")

ComposedShader32.addParts(ShaderPart44)
ShaderPart45 = x3d.ShaderPart()
ShaderPart45.setUrl(["../shaders/freewrl_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"])
ShaderPart45.setType("FRAGMENT")

ComposedShader32.addParts(ShaderPart45)

Appearance23.addShaders(ComposedShader32)

Shape21.setAppearance(Appearance23)

Transform20.addChild(Shape21)

Scene15.addChild(Transform20)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../personal/bumpyfreewrl.new.graalpy.x3d")
X3D0.toFileJSON("../personal/bumpyfreewrl.new.graalpy.json")
