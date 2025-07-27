import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("EnvironmentalEffects")
component2.setLevel(3)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("Shaders")
component3.setLevel(1)

head1.addComponent(component3)
component4 = x3d.component()
component4.setName("CubeMapTexturing")
component4.setLevel(1)

head1.addComponent(component4)
component5 = x3d.component()
component5.setName("Texturing")
component5.setLevel(1)

head1.addComponent(component5)
component6 = x3d.component()
component6.setName("Rendering")
component6.setLevel(1)

head1.addComponent(component6)
component7 = x3d.component()
component7.setName("Grouping")
component7.setLevel(3)

head1.addComponent(component7)
component8 = x3d.component()
component8.setName("Core")
component8.setLevel(1)

head1.addComponent(component8)
meta9 = x3d.meta()
meta9.setName("title")
meta9.setContent("fwball.x3d")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("creator")
meta10.setContent("John Carlson")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("identifier")
meta11.setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/fwball.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("description")
meta12.setContent("a prismatic sphere")

head1.addMeta(meta12)

X3D0.setHead(head1)
Scene13 = x3d.Scene()
WorldInfo14 = x3d.WorldInfo()
WorldInfo14.setTitle("fwball.x3d")

Scene13.addChild(WorldInfo14)
NavigationInfo15 = x3d.NavigationInfo()
NavigationInfo15.setType(["ANY","EXAMINE","FLY","LOOKAT"])

Scene13.addChild(NavigationInfo15)
Viewpoint16 = x3d.Viewpoint()
Viewpoint16.setDescription("Tour Views")
Viewpoint16.setPosition(x3d.doubleToFloat([0,0,12]))

Scene13.addChild(Viewpoint16)
Background17 = x3d.Background()
Background17.setBackUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background17.setBottomUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background17.setFrontUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background17.setLeftUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background17.setRightUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background17.setTopUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene13.addChild(Background17)
Transform18 = x3d.Transform()
Shape19 = x3d.Shape()
Sphere20 = x3d.Sphere()

Shape19.setGeometry(Sphere20)
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.setDiffuseColor(x3d.doubleToFloat([0.7,0.7,0.7]))
Material22.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance21.setMaterial(Material22)
ComposedCubeMapTexture23 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture23.setDEF("texture")
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture23.setBackTexture(ImageTexture24)
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture23.setBottomTexture(ImageTexture25)
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture23.setFrontTexture(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture23.setLeftTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture23.setRightTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture23.setTopTexture(ImageTexture29)

Appearance21.setTexture(ComposedCubeMapTexture23)
ComposedShader30 = x3d.ComposedShader()
ComposedShader30.setLanguage("GLSL")
field31 = x3d.field()
field31.setName("chromaticDispertion")
field31.setAccessType("inputOutput")
field31.setType("SFVec3f")
field31.setValue("0.98 1 1.033")

ComposedShader30.addField(field31)
field32 = x3d.field()
field32.setName("cube")
field32.setType("SFNode")
field32.setAccessType("inputOutput")
ComposedCubeMapTexture33 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture33.setUSE("texture")

field32.addChild(ComposedCubeMapTexture33)

ComposedShader30.addField(field32)
field34 = x3d.field()
field34.setName("bias")
field34.setAccessType("inputOutput")
field34.setType("SFFloat")
field34.setValue("0.5")

ComposedShader30.addField(field34)
field35 = x3d.field()
field35.setName("scale")
field35.setAccessType("inputOutput")
field35.setType("SFFloat")
field35.setValue("0.5")

ComposedShader30.addField(field35)
field36 = x3d.field()
field36.setName("power")
field36.setAccessType("inputOutput")
field36.setType("SFFloat")
field36.setValue("2")

ComposedShader30.addField(field36)
ShaderPart37 = x3d.ShaderPart()
ShaderPart37.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"])
ShaderPart37.setType("VERTEX")

ComposedShader30.addParts(ShaderPart37)
ShaderPart38 = x3d.ShaderPart()
ShaderPart38.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs"])
ShaderPart38.setType("FRAGMENT")

ComposedShader30.addParts(ShaderPart38)

Appearance21.addShaders(ComposedShader30)

Shape19.setAppearance(Appearance21)

Transform18.addChild(Shape19)

Scene13.addChild(Transform18)

X3D0.setScene(Scene13)
X3D0.toFileX3D("../personal/fwball.new.graalpy.x3d")
X3D0.toFileJSON("../personal/fwball.new.graalpy.json")
