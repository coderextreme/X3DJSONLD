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
meta10.setContent("geo.x3d")

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
meta13.setName("identifier")
meta13.setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/geo.x3d")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("description")
meta14.setContent("a sphere")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = x3d.Scene()
NavigationInfo16 = x3d.NavigationInfo()
NavigationInfo16.setType(["ANY","EXAMINE","FLY","LOOKAT"])

Scene15.addChild(NavigationInfo16)
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.setDEF("Tour")
Viewpoint17.setDescription("Tour Views")

Scene15.addChild(Viewpoint17)

Scene15.addComments(x3d.CommentsBlock('''Viewpoint position='0 0 4' description='sphere in road'/'''))
Background18 = x3d.Background()
Background18.setBackUrl(["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"])
Background18.setBottomUrl(["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"])
Background18.setFrontUrl(["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"])
Background18.setLeftUrl(["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"])
Background18.setRightUrl(["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"])
Background18.setTopUrl(["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"])

Scene15.addChild(Background18)
Transform19 = x3d.Transform()
Shape20 = x3d.Shape()
Sphere21 = x3d.Sphere()

Shape20.setGeometry(Sphere21)
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.setDiffuseColor(x3d.doubleToFloat([0.7,0.7,0.7]))
Material23.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance22.setMaterial(Material23)
ComposedCubeMapTexture24 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture24.setDEF("texture")
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.setUrl(["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"])

ComposedCubeMapTexture24.setBackTexture(ImageTexture25)
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setUrl(["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"])

ComposedCubeMapTexture24.setBottomTexture(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"])

ComposedCubeMapTexture24.setFrontTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"])

ComposedCubeMapTexture24.setLeftTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"])

ComposedCubeMapTexture24.setRightTexture(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"])

ComposedCubeMapTexture24.setTopTexture(ImageTexture30)

Appearance22.setTexture(ComposedCubeMapTexture24)
ComposedShader31 = x3d.ComposedShader()
ComposedShader31.setLanguage("GLSL")
field32 = x3d.field()
field32.setName("chromaticDispertion")
field32.setAccessType("inputOutput")
field32.setType("SFVec3f")
field32.setValue("0.98 1 1.033")

ComposedShader31.addField(field32)
field33 = x3d.field()
field33.setName("cube")
field33.setType("SFNode")
field33.setAccessType("inputOutput")
ComposedCubeMapTexture34 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture34.setUSE("texture")

field33.addChild(ComposedCubeMapTexture34)

ComposedShader31.addField(field33)
field35 = x3d.field()
field35.setName("bias")
field35.setAccessType("inputOutput")
field35.setType("SFFloat")
field35.setValue("0.5")

ComposedShader31.addField(field35)
field36 = x3d.field()
field36.setName("scale")
field36.setAccessType("inputOutput")
field36.setType("SFFloat")
field36.setValue("0.5")

ComposedShader31.addField(field36)
field37 = x3d.field()
field37.setName("power")
field37.setAccessType("inputOutput")
field37.setType("SFFloat")
field37.setValue("2")

ComposedShader31.addField(field37)
ShaderPart38 = x3d.ShaderPart()
ShaderPart38.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart38.setType("VERTEX")

ComposedShader31.addParts(ShaderPart38)
ShaderPart39 = x3d.ShaderPart()
ShaderPart39.setDEF("common")
ShaderPart39.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])
ShaderPart39.setType("FRAGMENT")

ComposedShader31.addParts(ShaderPart39)

Appearance22.addShaders(ComposedShader31)
ComposedShader40 = x3d.ComposedShader()
ComposedShader40.setLanguage("GLSL")
field41 = x3d.field()
field41.setName("chromaticDispertion")
field41.setAccessType("initializeOnly")
field41.setType("SFVec3f")
field41.setValue("0.98 1 1.033")

ComposedShader40.addField(field41)
field42 = x3d.field()
field42.setName("cube")
field42.setType("SFNode")
field42.setAccessType("initializeOnly")
ComposedCubeMapTexture43 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture43.setUSE("texture")

field42.addChild(ComposedCubeMapTexture43)

ComposedShader40.addField(field42)
field44 = x3d.field()
field44.setName("bias")
field44.setAccessType("initializeOnly")
field44.setType("SFFloat")
field44.setValue("0.5")

ComposedShader40.addField(field44)
field45 = x3d.field()
field45.setName("scale")
field45.setAccessType("initializeOnly")
field45.setType("SFFloat")
field45.setValue("0.5")

ComposedShader40.addField(field45)
field46 = x3d.field()
field46.setName("power")
field46.setAccessType("initializeOnly")
field46.setType("SFFloat")
field46.setValue("2")

ComposedShader40.addField(field46)
ShaderPart47 = x3d.ShaderPart()
ShaderPart47.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart47.setType("VERTEX")

ComposedShader40.addParts(ShaderPart47)
ShaderPart48 = x3d.ShaderPart()
ShaderPart48.setUrl(["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"])
ShaderPart48.setType("FRAGMENT")

ComposedShader40.addParts(ShaderPart48)

Appearance22.addShaders(ComposedShader40)

Shape20.setAppearance(Appearance22)

Transform19.addChild(Shape20)

Scene15.addChild(Transform19)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../personal/geo.new.graalpy.x3d")
X3D0.toFileJSON("../personal/geo.new.graalpy.json")
