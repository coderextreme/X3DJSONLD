from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = head()
component2 = component()
component2.setName("Shaders")
component2.setLevel(1)

head1.addComponent(component2)
component3 = component()
component3.setName("CubeMapTexturing")
component3.setLevel(1)

head1.addComponent(component3)
component4 = component()
component4.setName("Texturing")
component4.setLevel(1)

head1.addComponent(component4)
component5 = component()
component5.setName("Rendering")
component5.setLevel(1)

head1.addComponent(component5)
component6 = component()
component6.setName("Shape")
component6.setLevel(4)

head1.addComponent(component6)
component7 = component()
component7.setName("Grouping")
component7.setLevel(3)

head1.addComponent(component7)
meta8 = meta()
meta8.setName("title")
meta8.setContent("geo.x3d")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("creator")
meta9.setContent("John Carlson")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("generator")
meta10.setContent("manual")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("identifier")
meta11.setContent("https://coderextreme.net/X3DJSONLD/geo.x3d")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("description")
meta12.setContent("a sphere")

head1.addMeta(meta12)

X3D0.setHead(head1)
Scene13 = Scene()
NavigationInfo14 = NavigationInfo()
NavigationInfo14.setType(["ANY","EXAMINE","FLY","LOOKAT"])

Scene13.addChildren(NavigationInfo14)
Viewpoint15 = Viewpoint()
Viewpoint15.setDEF("Tour")
Viewpoint15.setDescription("Tour Views")

Scene13.addChildren(Viewpoint15)
#Viewpoint position='0 0 4' description='sphere in road'/
Background16 = Background()
Background16.setBackUrl(["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"])
Background16.setBottomUrl(["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"])
Background16.setFrontUrl(["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"])
Background16.setLeftUrl(["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"])
Background16.setRightUrl(["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"])
Background16.setTopUrl(["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"])

Scene13.addChildren(Background16)
Transform17 = Transform()
Shape18 = Shape()
Sphere19 = Sphere()

Shape18.setGeometry(Sphere19)
Appearance20 = Appearance()
Material21 = Material()
Material21.setDiffuseColor([0.7,0.7,0.7])
Material21.setSpecularColor([0.5,0.5,0.5])

Appearance20.setMaterial(Material21)
ComposedCubeMapTexture22 = ComposedCubeMapTexture()
ComposedCubeMapTexture22.setDEF("texture")
ImageTexture23 = ImageTexture()
ImageTexture23.setUrl(["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"])

ComposedCubeMapTexture22.setBack(ImageTexture23)
ImageTexture24 = ImageTexture()
ImageTexture24.setUrl(["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"])

ComposedCubeMapTexture22.setBottom(ImageTexture24)
ImageTexture25 = ImageTexture()
ImageTexture25.setUrl(["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"])

ComposedCubeMapTexture22.setFront(ImageTexture25)
ImageTexture26 = ImageTexture()
ImageTexture26.setUrl(["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"])

ComposedCubeMapTexture22.setLeft(ImageTexture26)
ImageTexture27 = ImageTexture()
ImageTexture27.setUrl(["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"])

ComposedCubeMapTexture22.setRight(ImageTexture27)
ImageTexture28 = ImageTexture()
ImageTexture28.setUrl(["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"])

ComposedCubeMapTexture22.setTop(ImageTexture28)

Appearance20.setTexture(ComposedCubeMapTexture22)
ComposedShader29 = ComposedShader()
ComposedShader29.setLanguage("GLSL")
field30 = field()
field30.setName("chromaticDispertion")
field30.setAccessType("inputOutput")
field30.setType("SFVec3f")
field30.setValue("0.98 1 1.033")

ComposedShader29.addField(field30)
field31 = field()
field31.setName("cube")
field31.setType("SFNode")
field31.setAccessType("inputOutput")
ComposedCubeMapTexture32 = ComposedCubeMapTexture()
ComposedCubeMapTexture32.setUSE("texture")

field31.addChildren(ComposedCubeMapTexture32)

ComposedShader29.addField(field31)
field33 = field()
field33.setName("bias")
field33.setAccessType("inputOutput")
field33.setType("SFFloat")
field33.setValue("0.5")

ComposedShader29.addField(field33)
field34 = field()
field34.setName("scale")
field34.setAccessType("inputOutput")
field34.setType("SFFloat")
field34.setValue("0.5")

ComposedShader29.addField(field34)
field35 = field()
field35.setName("power")
field35.setAccessType("inputOutput")
field35.setType("SFFloat")
field35.setValue("2")

ComposedShader29.addField(field35)
ShaderPart36 = ShaderPart()
ShaderPart36.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart36.setType("VERTEX")

ComposedShader29.addParts(ShaderPart36)
ShaderPart37 = ShaderPart()
ShaderPart37.setDEF("common")
ShaderPart37.setUrl(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"])
ShaderPart37.setType("FRAGMENT")

ComposedShader29.addParts(ShaderPart37)

Appearance20.addShaders(ComposedShader29)
ComposedShader38 = ComposedShader()
ComposedShader38.setLanguage("GLSL")
field39 = field()
field39.setName("chromaticDispertion")
field39.setAccessType("initializeOnly")
field39.setType("SFVec3f")
field39.setValue("0.98 1 1.033")

ComposedShader38.addField(field39)
field40 = field()
field40.setName("cube")
field40.setType("SFNode")
field40.setAccessType("initializeOnly")
ComposedCubeMapTexture41 = ComposedCubeMapTexture()
ComposedCubeMapTexture41.setUSE("texture")

field40.addChildren(ComposedCubeMapTexture41)

ComposedShader38.addField(field40)
field42 = field()
field42.setName("bias")
field42.setAccessType("initializeOnly")
field42.setType("SFFloat")
field42.setValue("0.5")

ComposedShader38.addField(field42)
field43 = field()
field43.setName("scale")
field43.setAccessType("initializeOnly")
field43.setType("SFFloat")
field43.setValue("0.5")

ComposedShader38.addField(field43)
field44 = field()
field44.setName("power")
field44.setAccessType("initializeOnly")
field44.setType("SFFloat")
field44.setValue("2")

ComposedShader38.addField(field44)
ShaderPart45 = ShaderPart()
ShaderPart45.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart45.setType("VERTEX")

ComposedShader38.addParts(ShaderPart45)
ShaderPart46 = ShaderPart()
ShaderPart46.setUrl(["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"])
ShaderPart46.setType("FRAGMENT")

ComposedShader38.addParts(ShaderPart46)

Appearance20.addShaders(ComposedShader38)

Shape18.setAppearance(Appearance20)

Transform17.addChildren(Shape18)

Scene13.addChildren(Transform17)

X3D0.setScene(Scene13)
X3D0.toFileX3D("../data/geo_RoundTrip.x3d")
