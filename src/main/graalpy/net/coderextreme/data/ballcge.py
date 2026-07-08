import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Shaders")
component2.setLevel(1)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("EnvironmentalEffects")
component3.setLevel(3)

head1.addComponent(component3)
component4 = x3d.component()
component4.setName("Rendering")
component4.setLevel(1)

head1.addComponent(component4)
component5 = x3d.component()
component5.setName("Texturing")
component5.setLevel(1)

head1.addComponent(component5)
component6 = x3d.component()
component6.setName("Grouping")
component6.setLevel(3)

head1.addComponent(component6)
component7 = x3d.component()
component7.setName("CubeMapTexturing")
component7.setLevel(1)

head1.addComponent(component7)
component8 = x3d.component()
component8.setName("Core")
component8.setLevel(1)

head1.addComponent(component8)
meta9 = x3d.meta()
meta9.setName("identifier")
meta9.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("title")
meta10.setContent("ball.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("creator")
meta11.setContent("John Carlson")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("generator")
meta12.setContent("manual")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("description")
meta13.setContent("a prismatic sphere")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = x3d.Scene()
WorldInfo15 = x3d.WorldInfo()
WorldInfo15.setTitle("ball.x3d")

Scene14.addChild(WorldInfo15)
NavigationInfo16 = x3d.NavigationInfo()
NavigationInfo16.setAvatarSize(x3d.doubleToFloat([0.25,1.60000002384186,0.75]))
NavigationInfo16.setType(["ANY","EXAMINE","FLY","LOOKAT"])

Scene14.addChild(NavigationInfo16)
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.setPosition(x3d.doubleToFloat([0,0,12]))
Viewpoint17.setDescription("Tour Views")

Scene14.addChild(Viewpoint17)
Background18 = x3d.Background()
Background18.setTopUrl(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])
Background18.setBackUrl(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background18.setLeftUrl(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background18.setFrontUrl(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background18.setRightUrl(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background18.setBottomUrl(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

Scene14.addChild(Background18)
Transform19 = x3d.Transform()
Shape20 = x3d.Shape()
Sphere21 = x3d.Sphere()

Shape20.setGeometry(Sphere21)
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.setDiffuseColor(x3d.doubleToFloat([0.699999988079071,0.699999988079071,0.699999988079071]))
Material23.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance22.setMaterial(Material23)
ComposedShader24 = x3d.ComposedShader()
ComposedShader24.setLanguage("GLSL")
field25 = x3d.field()
field25.setName("chromaticDispertion")
field25.setAccessType("initializeOnly")
field25.setType("SFVec3f")
field25.setValue("0.980000019073486 1 1.03299999237061")

ComposedShader24.addField(field25)
field26 = x3d.field()
field26.setName("cube")
field26.setAccessType("initializeOnly")
field26.setType("SFNode")
ComposedCubeMapTexture27 = x3d.ComposedCubeMapTexture()
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture27.setBackTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture27.setBottomTexture(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture27.setFrontTexture(ImageTexture30)
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.setUrl(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture27.setLeftTexture(ImageTexture31)
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.setUrl(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture27.setRightTexture(ImageTexture32)
ImageTexture33 = x3d.ImageTexture()
ImageTexture33.setUrl(["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture27.setTopTexture(ImageTexture33)

field26.addChild(ComposedCubeMapTexture27)

ComposedShader24.addField(field26)
field34 = x3d.field()
field34.setName("bias")
field34.setAccessType("initializeOnly")
field34.setType("SFFloat")
field34.setValue("0.5")

ComposedShader24.addField(field34)
field35 = x3d.field()
field35.setName("scale")
field35.setAccessType("initializeOnly")
field35.setType("SFFloat")
field35.setValue("0.5")

ComposedShader24.addField(field35)
field36 = x3d.field()
field36.setName("power")
field36.setAccessType("initializeOnly")
field36.setType("SFFloat")
field36.setValue("2")

ComposedShader24.addField(field36)
ShaderPart37 = x3d.ShaderPart()
ShaderPart37.setUrl(["file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.vs"])
ShaderPart37.setType("VERTEX")

ComposedShader24.addParts(ShaderPart37)
ShaderPart38 = x3d.ShaderPart()
ShaderPart38.setDEF("commonfs")
ShaderPart38.setUrl(["file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.fs"])
ShaderPart38.setType("FRAGMENT")

ComposedShader24.addParts(ShaderPart38)

Appearance22.addShaders(ComposedShader24)

Shape20.setAppearance(Appearance22)

Transform19.addChild(Shape20)

Scene14.addChild(Transform19)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/ballcge.new.graalpy.x3d")
X3D0.toFileJSON("../data/ballcge.new.graalpy.x3dj")
