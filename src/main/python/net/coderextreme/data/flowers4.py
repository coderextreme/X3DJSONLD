import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Shaders")
component2.setLevel(1)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("CubeMapTexturing")
component3.setLevel(1)

head1.addComponent(component3)
component4 = x3d.component()
component4.setName("Texturing")
component4.setLevel(1)

head1.addComponent(component4)
component5 = x3d.component()
component5.setName("Rendering")
component5.setLevel(1)

head1.addComponent(component5)
component6 = x3d.component()
component6.setName("Shape")
component6.setLevel(4)

head1.addComponent(component6)
component7 = x3d.component()
component7.setName("Grouping")
component7.setLevel(3)

head1.addComponent(component7)
meta8 = x3d.meta()
meta8.setName("title")
meta8.setContent("flowers4.x3d")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("creator")
meta9.setContent("John Carlson")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("generator")
meta10.setContent("manual")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("identifier")
meta11.setContent("https://coderextreme.net/X3DJSONLD/flowers4.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("description")
meta12.setContent("an animated flower")

head1.addMeta(meta12)

X3D0.setHead(head1)
Scene13 = x3d.Scene()
NavigationInfo14 = x3d.NavigationInfo()

Scene13.addChildren(NavigationInfo14)
Background15 = x3d.Background()
Background15.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
Background15.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background15.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
Background15.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
Background15.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
Background15.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])
Background15.setSkyColor([0,0,0])
Background15.setTransparency(0)

Scene13.addChildren(Background15)
Transform16 = x3d.Transform()
Transform16.setDEF("transform")
Transform16.setBboxCenter([0,0,0])
Transform16.setBboxSize([-1,-1,-1])
Shape17 = x3d.Shape()
Shape17.setBboxCenter([0,0,0])
Shape17.setBboxSize([-1,-1,-1])
Appearance18 = x3d.Appearance()
Material19 = x3d.Material()
Material19.setDiffuseColor([0.7,0.7,0.7])
Material19.setSpecularColor([0.5,0.5,0.5])

Appearance18.setMaterial(Material19)
ComposedCubeMapTexture20 = x3d.ComposedCubeMapTexture()
ImageTexture21 = x3d.ImageTexture()
ImageTexture21.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture20.setBack(ImageTexture21)
ImageTexture22 = x3d.ImageTexture()
ImageTexture22.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture20.setBottom(ImageTexture22)
ImageTexture23 = x3d.ImageTexture()
ImageTexture23.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture20.setFront(ImageTexture23)
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture20.setLeft(ImageTexture24)
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture20.setRight(ImageTexture25)
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture20.setTop(ImageTexture26)

Appearance18.setTexture(ComposedCubeMapTexture20)
ComposedShader27 = x3d.ComposedShader()
ComposedShader27.setDEF("shader")
ComposedShader27.setLanguage("GLSL")
field28 = x3d.field()
field28.setName("cube")
field28.setType("SFInt32")
field28.setAccessType("inputOutput")
field28.setValue("0")

ComposedShader27.addField(field28)
field29 = x3d.field()
field29.setName("chromaticDispertion")
field29.setAccessType("inputOutput")
field29.setType("SFVec3f")
field29.setValue("0.98 1 1.033")

ComposedShader27.addField(field29)
field30 = x3d.field()
field30.setName("bias")
field30.setType("SFFloat")
field30.setAccessType("inputOutput")
field30.setValue("0.5")

ComposedShader27.addField(field30)
field31 = x3d.field()
field31.setName("scale")
field31.setType("SFFloat")
field31.setAccessType("inputOutput")
field31.setValue("0.5")

ComposedShader27.addField(field31)
field32 = x3d.field()
field32.setName("power")
field32.setType("SFFloat")
field32.setAccessType("inputOutput")
field32.setValue("2")

ComposedShader27.addField(field32)
ShaderPart33 = x3d.ShaderPart()
ShaderPart33.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart33.setType("VERTEX")

ComposedShader27.addParts(ShaderPart33)
ShaderPart34 = x3d.ShaderPart()
ShaderPart34.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"])
ShaderPart34.setType("FRAGMENT")

ComposedShader27.addParts(ShaderPart34)

Appearance18.addShaders(ComposedShader27)

Shape17.setAppearance(Appearance18)
#<Sphere>
IndexedFaceSet35 = x3d.IndexedFaceSet()
IndexedFaceSet35.setConvex(False)
IndexedFaceSet35.setDEF("Orbit")
Coordinate36 = x3d.Coordinate()
Coordinate36.setDEF("OrbitCoordinates")

IndexedFaceSet35.setCoord(Coordinate36)

Shape17.setGeometry(IndexedFaceSet35)

Transform16.addChildren(Shape17)

Scene13.addChildren(Transform16)
TimeSensor37 = x3d.TimeSensor()
TimeSensor37.setDEF("Clock")
TimeSensor37.setCycleInterval(16)
TimeSensor37.setLoop(True)

Scene13.addChildren(TimeSensor37)
ROUTE38 = x3d.ROUTE()
ROUTE38.setFromField("coordIndexes")
ROUTE38.setFromNode("OrbitScript")
ROUTE38.setToField("set_coordIndex")
ROUTE38.setToNode("Orbit")

Scene13.addChildren(ROUTE38)
ROUTE39 = x3d.ROUTE()
ROUTE39.setFromField("coordinates")
ROUTE39.setFromNode("OrbitScript")
ROUTE39.setToField("set_point")
ROUTE39.setToNode("OrbitCoordinates")

Scene13.addChildren(ROUTE39)
ROUTE40 = x3d.ROUTE()
ROUTE40.setFromField("fraction_changed")
ROUTE40.setFromNode("Clock")
ROUTE40.setToField("set_fraction")
ROUTE40.setToNode("OrbitScript")

Scene13.addChildren(ROUTE40)

X3D0.setScene(Scene13)
X3D0.toFileX3D("../data/flowers4_RoundTrip.x3d")
