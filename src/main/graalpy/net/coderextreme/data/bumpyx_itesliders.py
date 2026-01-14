import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Full")
X3D0.setVersion("4.0")
head1 = x3d.head()

head1.addComments(x3d.CommentsBlock("""<component name='Shape' level='4'></component>"""))

head1.addComments(x3d.CommentsBlock("""<component name='DIS' level='2'></component>"""))
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
meta10 = x3d.meta()
meta10.setName("title")
meta10.setContent("bumpyx_itesliders.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("description")
meta11.setContent("*Bumpy flower with prototype sliders*")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("creator")
meta12.setContent("Doug Sanden, Christoph Valentin, John Carlson")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("identifier")
meta13.setContent("https://github.com/coderextreme/JSONverse/public/x3d/bumpyx_itesliders.x3d")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("generator")
meta14.setContent("PSPad, http://www.pspad.com/")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("license")
meta15.setContent("license.html")

head1.addMeta(meta15)

X3D0.setHead(head1)

X3D0.addComments(x3d.CommentsBlock("""\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution, It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) open for their \"discussion about the teapot\""""))
Scene16 = x3d.Scene()

Scene16.addComments(x3d.CommentsBlock("""LayerSet with two layers, navigation happens in layer 1"""))
LayerSet17 = x3d.LayerSet()
LayerSet17.setActiveLayer(1)
LayerSet17.setOrder([1,2,3])

LayerSet17.addComments(x3d.CommentsBlock("""the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\""""))
Layer18 = x3d.Layer()
Layer18.setPickable(True)
Layer18.setObjectType(["ALL"])

Layer18.addComments(x3d.CommentsBlock("""basic nodes, which might be present in any scene"""))
NavigationInfo19 = x3d.NavigationInfo()
NavigationInfo19.setType(["EXAMINE"])
NavigationInfo19.setAvatarSize(x3d.doubleToFloat([0.25,1.75,0.75]))

Layer18.addChild(NavigationInfo19)
DirectionalLight20 = x3d.DirectionalLight()
DirectionalLight20.setAmbientIntensity(0.2)
DirectionalLight20.setDirection(x3d.doubleToFloat([0,-1,0]))

Layer18.addChild(DirectionalLight20)
DirectionalLight21 = x3d.DirectionalLight()
DirectionalLight21.setAmbientIntensity(0.2)
DirectionalLight21.setDirection(x3d.doubleToFloat([-1,-0.1,-1]))

Layer18.addChild(DirectionalLight21)
Viewpoint22 = x3d.Viewpoint()
Viewpoint22.setDescription("My Overview")
Viewpoint22.setFieldOfView(1.570796)
Viewpoint22.setPosition(x3d.doubleToFloat([0,1.75,60]))

Layer18.addChild(Viewpoint22)

Layer18.addComments(x3d.CommentsBlock("""this group contains the red/green/blue 3D crosshair"""))
Group23 = x3d.Group()

Group23.addComments(x3d.CommentsBlock("""Arrow X"""))
Transform24 = x3d.Transform()
Transform24.setTranslation(x3d.doubleToFloat([25,0,0]))
Transform24.setRotation(x3d.doubleToFloat([0,0,-1,1.57]))
Shape25 = x3d.Shape()
Cylinder26 = x3d.Cylinder()
Cylinder26.setDEF("Shaft")
Cylinder26.setRadius(0.35)
Cylinder26.setHeight(50)

Shape25.setGeometry(Cylinder26)
Appearance27 = x3d.Appearance()
Material28 = x3d.Material()
Material28.setDEF("RED")
Material28.setDiffuseColor(x3d.doubleToFloat([1,0,0]))
Material28.setEmissiveColor(x3d.doubleToFloat([1,0,0]))

Appearance27.setMaterial(Material28)

Shape25.setAppearance(Appearance27)

Transform24.addChild(Shape25)

Group23.addChild(Transform24)
Transform29 = x3d.Transform()
Transform29.setTranslation(x3d.doubleToFloat([50,0,0]))
Transform29.setRotation(x3d.doubleToFloat([0,0,-1,1.57]))
Shape30 = x3d.Shape()
Cone31 = x3d.Cone()
Cone31.setDEF("Tip")
Cone31.setBottomRadius(0.8)
Cone31.setHeight(3)

Shape30.setGeometry(Cone31)
Appearance32 = x3d.Appearance()
Material33 = x3d.Material()
Material33.setUSE("RED")

Appearance32.setMaterial(Material33)

Shape30.setAppearance(Appearance32)

Transform29.addChild(Shape30)

Group23.addChild(Transform29)

Group23.addComments(x3d.CommentsBlock("""Arrow Y"""))
Transform34 = x3d.Transform()
Transform34.setTranslation(x3d.doubleToFloat([0,25,0]))
Shape35 = x3d.Shape()
Cylinder36 = x3d.Cylinder()
Cylinder36.setUSE("Shaft")

Shape35.setGeometry(Cylinder36)
Appearance37 = x3d.Appearance()
Material38 = x3d.Material()
Material38.setDEF("GREEN")
Material38.setDiffuseColor(x3d.doubleToFloat([0,1,0]))
Material38.setEmissiveColor(x3d.doubleToFloat([0,1,0]))

Appearance37.setMaterial(Material38)

Shape35.setAppearance(Appearance37)

Transform34.addChild(Shape35)

Group23.addChild(Transform34)
Transform39 = x3d.Transform()
Transform39.setTranslation(x3d.doubleToFloat([0,50,0]))
Shape40 = x3d.Shape()
Cone41 = x3d.Cone()
Cone41.setUSE("Tip")

Shape40.setGeometry(Cone41)
Appearance42 = x3d.Appearance()
Material43 = x3d.Material()
Material43.setUSE("GREEN")

Appearance42.setMaterial(Material43)

Shape40.setAppearance(Appearance42)

Transform39.addChild(Shape40)

Group23.addChild(Transform39)

Group23.addComments(x3d.CommentsBlock("""Arrow Z"""))
Transform44 = x3d.Transform()
Transform44.setTranslation(x3d.doubleToFloat([0,0,25]))
Transform44.setRotation(x3d.doubleToFloat([1,0,0,1.57]))
Shape45 = x3d.Shape()
Cylinder46 = x3d.Cylinder()
Cylinder46.setUSE("Shaft")

Shape45.setGeometry(Cylinder46)
Appearance47 = x3d.Appearance()
Material48 = x3d.Material()
Material48.setDEF("BLUE")
Material48.setDiffuseColor(x3d.doubleToFloat([0,0,1]))
Material48.setEmissiveColor(x3d.doubleToFloat([0,0,1]))

Appearance47.setMaterial(Material48)

Shape45.setAppearance(Appearance47)

Transform44.addChild(Shape45)

Group23.addChild(Transform44)
Transform49 = x3d.Transform()
Transform49.setTranslation(x3d.doubleToFloat([0,0,50]))
Transform49.setRotation(x3d.doubleToFloat([1,0,0,1.57]))
Shape50 = x3d.Shape()
Cone51 = x3d.Cone()
Cone51.setUSE("Tip")

Shape50.setGeometry(Cone51)
Appearance52 = x3d.Appearance()
Material53 = x3d.Material()
Material53.setUSE("BLUE")

Appearance52.setMaterial(Material53)

Shape50.setAppearance(Appearance52)

Transform49.addChild(Shape50)

Group23.addChild(Transform49)

Layer18.addChild(Group23)

Layer18.addComments(x3d.CommentsBlock("""the model that is being reviewed by the users of this scene"""))
Transform54 = x3d.Transform()
Transform54.setDEF("FlowerTransform")

Transform54.addComments(x3d.CommentsBlock("""<Inline DEF=\"Flower\" url='\"bumpyx_ite.x3d\"' />"""))

Transform54.addComments(x3d.CommentsBlock("""Images courtesy of Paul Debevec's Light Probe Image Gallery"""))
Background55 = x3d.Background()
Background55.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background55.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background55.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background55.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background55.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background55.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Transform54.addChild(Background55)
Transform56 = x3d.Transform()
Shape57 = x3d.Shape()

Shape57.addComments(x3d.CommentsBlock("""<Sphere radius='40'></Sphere>"""))
IndexedFaceSet58 = x3d.IndexedFaceSet()
IndexedFaceSet58.setConvex(False)
IndexedFaceSet58.setDEF("Orbit")
Coordinate59 = x3d.Coordinate()
Coordinate59.setDEF("OrbitCoordinates")

IndexedFaceSet58.setCoord(Coordinate59)

Shape57.setGeometry(IndexedFaceSet58)
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
ComposedShader69.setDEF("x_iteShader")
ComposedShader69.setLanguage("GLSL")
field70 = x3d.field()
field70.setName("chromaticDispertion")
field70.setAccessType("inputOnly")
field70.setType("SFVec3f")
field70.setValue("0.98 1 1.033")

ComposedShader69.addField(field70)
field71 = x3d.field()
field71.setName("cube")
field71.setType("SFNode")
field71.setAccessType("inputOnly")
ComposedCubeMapTexture72 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture72.setUSE("texture")

field71.addChild(ComposedCubeMapTexture72)

ComposedShader69.addField(field71)
field73 = x3d.field()
field73.setName("bias")
field73.setType("SFFloat")
field73.setAccessType("inputOnly")
field73.setValue("0.5")

ComposedShader69.addField(field73)
field74 = x3d.field()
field74.setName("scale")
field74.setType("SFFloat")
field74.setAccessType("inputOnly")
field74.setValue("0.5")

ComposedShader69.addField(field74)
field75 = x3d.field()
field75.setName("power")
field75.setType("SFFloat")
field75.setAccessType("inputOnly")
field75.setValue("2")

ComposedShader69.addField(field75)
field76 = x3d.field()
field76.setName("a")
field76.setType("SFFloat")
field76.setAccessType("inputOutput")
field76.setValue("15")

ComposedShader69.addField(field76)
field77 = x3d.field()
field77.setName("b")
field77.setType("SFFloat")
field77.setAccessType("inputOutput")
field77.setValue("5")

ComposedShader69.addField(field77)
field78 = x3d.field()
field78.setName("c")
field78.setType("SFFloat")
field78.setAccessType("inputOutput")
field78.setValue("5")

ComposedShader69.addField(field78)
field79 = x3d.field()
field79.setName("d")
field79.setType("SFFloat")
field79.setAccessType("inputOutput")
field79.setValue("5")

ComposedShader69.addField(field79)
field80 = x3d.field()
field80.setName("tdelta")
field80.setType("SFFloat")
field80.setAccessType("inputOutput")
field80.setValue("0")

ComposedShader69.addField(field80)
field81 = x3d.field()
field81.setName("pdelta")
field81.setType("SFFloat")
field81.setAccessType("inputOutput")
field81.setValue("0")

ComposedShader69.addField(field81)
ShaderPart82 = x3d.ShaderPart()
ShaderPart82.setUrl(["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"])
ShaderPart82.setType("VERTEX")

ComposedShader69.addParts(ShaderPart82)
ShaderPart83 = x3d.ShaderPart()
ShaderPart83.setUrl(["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"])
ShaderPart83.setType("FRAGMENT")

ComposedShader69.addParts(ShaderPart83)

ComposedShader69.addComments(x3d.CommentsBlock("""TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/xite_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>"""))

Appearance60.addShaders(ComposedShader69)

Shape57.setAppearance(Appearance60)

Transform56.addChild(Shape57)

Transform54.addChild(Transform56)

Layer18.addChild(Transform54)
Script84 = x3d.Script()
Script84.setDEF("OrbitScript")
field85 = x3d.field()
field85.setName("coordinates")
field85.setAccessType("inputOutput")
field85.setType("MFVec3f")

Script84.addField(field85)
field86 = x3d.field()
field86.setName("coordIndexes")
field86.setAccessType("outputOnly")
field86.setType("MFInt32")

Script84.addField(field86)
field87 = x3d.field()
field87.setName("a")
field87.setType("SFFloat")
field87.setAccessType("inputOutput")
field87.setValue("10")

Script84.addField(field87)
field88 = x3d.field()
field88.setName("b")
field88.setType("SFFloat")
field88.setAccessType("inputOutput")
field88.setValue("10")

Script84.addField(field88)
field89 = x3d.field()
field89.setName("c")
field89.setType("SFFloat")
field89.setAccessType("inputOutput")
field89.setValue("2")

Script84.addField(field89)
field90 = x3d.field()
field90.setName("d")
field90.setType("SFFloat")
field90.setAccessType("inputOutput")
field90.setValue("2")

Script84.addField(field90)
field91 = x3d.field()
field91.setName("pdelta")
field91.setType("SFFloat")
field91.setAccessType("inputOutput")
field91.setValue("0")

Script84.addField(field91)
field92 = x3d.field()
field92.setName("tdelta")
field92.setType("SFFloat")
field92.setAccessType("inputOutput")
field92.setValue("0")

Script84.addField(field92)

Script84.setSourceCode('''ecmascript:
function initialize() {
     var resolution = 300;
     var theta = 0.0;
     var phi = 0.0;
     var delta = (2 * 3.141592653) / (resolution-1);
     var crds = new MFVec3f();
     for ( i = 0; i < resolution; i++) {
     	for ( j = 0; j < resolution; j++) {
		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);
		crds.push(new SFVec3f(
			rho * Math.cos(phi) * Math.cos(theta),
			rho * Math.cos(phi) * Math.sin(theta),
			rho * Math.sin(phi)
		));
		theta += delta;
	}
	phi += delta;
     }
     coordinates = crds;


     var cis = new MFInt32();
     for ( i = 0; i < resolution-1; i++) {
     	for ( j = 0; j < resolution-1; j++) {
	     cis.push(i*resolution+j);
	     cis.push(i*resolution+j+1);
	     cis.push((i+1)*resolution+j+1);
	     cis.push((i+1)*resolution+j);
	     cis.push(-1);
	}
    }
    coordIndexes = cis;
}''')

Layer18.addChild(Script84)
ROUTE93 = x3d.ROUTE()
ROUTE93.setFromField("coordIndexes")
ROUTE93.setFromNode("OrbitScript")
ROUTE93.setToField("set_coordIndex")
ROUTE93.setToNode("Orbit")

Layer18.addChild(ROUTE93)
ROUTE94 = x3d.ROUTE()
ROUTE94.setFromField("coordinates")
ROUTE94.setFromNode("OrbitScript")
ROUTE94.setToField("set_point")
ROUTE94.setToNode("OrbitCoordinates")

Layer18.addChild(ROUTE94)

LayerSet17.addLayers(Layer18)
LayoutLayer95 = x3d.LayoutLayer()
LayoutLayer95.setPickable(True)
LayoutLayer95.setObjectType(["ALL"])
Layout96 = x3d.Layout()
Layout96.setAlign(["LEFT","BOTTOM"])
Layout96.setOffset(x3d.doubleToFloat([-0.2,0.19]))
Layout96.setSize(x3d.doubleToFloat([0.4,0.6]))

LayoutLayer95.setLayout(Layout96)
Viewport97 = x3d.Viewport()
Viewport97.setClipBoundary(x3d.doubleToFloat([0,1,0,1]))

LayoutLayer95.setViewport(Viewport97)
Transform98 = x3d.Transform()
Transform98.setTranslation(x3d.doubleToFloat([0,0,-3]))
Shape99 = x3d.Shape()
Appearance100 = x3d.Appearance()
Material101 = x3d.Material()
Material101.setDiffuseColor(x3d.doubleToFloat([0,0,0]))
Material101.setTransparency(0.7)

Appearance100.setMaterial(Material101)

Shape99.setAppearance(Appearance100)
Box102 = x3d.Box()
Box102.setSize(x3d.doubleToFloat([100,100,0.02]))

Shape99.setGeometry(Box102)

Transform98.addChild(Shape99)

LayoutLayer95.addChild(Transform98)
Transform103 = x3d.Transform()
Transform103.setDEF("equationTransform")
Transform104 = x3d.Transform()
Transform104.setTranslation(x3d.doubleToFloat([0,0,-20]))
Shape105 = x3d.Shape()
Text106 = x3d.Text()
Text106.setDEF("equation")
Text106.setString(["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"])
FontStyle107 = x3d.FontStyle()
FontStyle107.setSize(0.09)

Text106.setFontStyle(FontStyle107)

Shape105.setGeometry(Text106)
Appearance108 = x3d.Appearance()
Material109 = x3d.Material()
Material109.setDiffuseColor(x3d.doubleToFloat([1,1,0]))

Appearance108.setMaterial(Material109)

Shape105.setAppearance(Appearance108)

Transform104.addChild(Shape105)

Transform103.addChild(Transform104)

LayoutLayer95.addChild(Transform103)
ProtoDeclare110 = x3d.ProtoDeclare()
ProtoDeclare110.setName("SliderProto")
ProtoInterface111 = x3d.ProtoInterface()
field112 = x3d.field()
field112.setName("sliderTranslation")
field112.setAccessType("inputOutput")
field112.setType("SFVec3f")
field112.setValue("0 0.7 0")

ProtoInterface111.addField(field112)
field113 = x3d.field()
field113.setName("transformTranslation")
field113.setAccessType("inputOutput")
field113.setType("SFVec3f")
field113.setValue("0 0 0.1")

ProtoInterface111.addField(field113)
field114 = x3d.field()
field114.setName("sensorTranslation")
field114.setAccessType("inputOutput")
field114.setType("SFVec3f")
field114.setValue("0 0 0")

ProtoInterface111.addField(field114)
field115 = x3d.field()
field115.setName("textString")
field115.setAccessType("inputOutput")
field115.setType("MFString")
field115.setValue("\"a=\"")

ProtoInterface111.addField(field115)
field116 = x3d.field()
field116.setName("parameterScale")
field116.setAccessType("inputOutput")
field116.setType("SFFloat")
field116.setValue("30")

ProtoInterface111.addField(field116)
field117 = x3d.field()
field117.setName("parameterName")
field117.setAccessType("inputOutput")
field117.setType("SFString")
field117.setValue("a")

ProtoInterface111.addField(field117)
field118 = x3d.field()
field118.setName("petNames")
field118.setAccessType("inputOutput")
field118.setType("MFString")

ProtoInterface111.addField(field118)
field119 = x3d.field()
field119.setName("shaderNode")
field119.setAccessType("inputOutput")
field119.setType("SFNode")

ProtoInterface111.addField(field119)

ProtoDeclare110.setProtoInterface(ProtoInterface111)
ProtoBody120 = x3d.ProtoBody()
Group121 = x3d.Group()
Transform122 = x3d.Transform()
Transform122.setDEF("protoSlider")
Transform122.setTranslation(x3d.doubleToFloat([0,0.7,0]))
IS123 = x3d.IS()
connect124 = x3d.connect()
connect124.setNodeField("translation")
connect124.setProtoField("sliderTranslation")

IS123.addConnect(connect124)

Transform122.setIS(IS123)
Transform125 = x3d.Transform()
Transform125.setDEF("protoTransform")
Transform125.setTranslation(x3d.doubleToFloat([0,0,0.1]))
IS126 = x3d.IS()
connect127 = x3d.connect()
connect127.setNodeField("translation")
connect127.setProtoField("sensorTranslation")

IS126.addConnect(connect127)

Transform125.setIS(IS126)
PlaneSensor128 = x3d.PlaneSensor()
PlaneSensor128.setDEF("protoSensor")
PlaneSensor128.setDescription("Grab with mouse to adjust slider")
PlaneSensor128.setMaxPosition(x3d.doubleToFloat([1,0]))

Transform125.addChild(PlaneSensor128)
Transform129 = x3d.Transform()
Transform129.setTranslation(x3d.doubleToFloat([0,0,0]))
TouchSensor130 = x3d.TouchSensor()
TouchSensor130.setDEF("protoTS")

Transform129.addChild(TouchSensor130)

Transform125.addChild(Transform129)
Transform131 = x3d.Transform()
Shape132 = x3d.Shape()
Text133 = x3d.Text()
Text133.setDEF("protoText")
Text133.setString(["a="])
IS134 = x3d.IS()
connect135 = x3d.connect()
connect135.setNodeField("string")
connect135.setProtoField("textString")

IS134.addConnect(connect135)

Text133.setIS(IS134)
FontStyle136 = x3d.FontStyle()
FontStyle136.setSize(0.23)

Text133.setFontStyle(FontStyle136)

Shape132.setGeometry(Text133)
Appearance137 = x3d.Appearance()
Material138 = x3d.Material()

Appearance137.setMaterial(Material138)

Shape132.setAppearance(Appearance137)

Transform131.addChild(Shape132)

Transform125.addChild(Transform131)

Transform122.addChild(Transform125)

Group121.addChild(Transform122)
Script139 = x3d.Script()
Script139.setUrl(["../javascripts/X3DUser.js","https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DUser.js"])
Script139.setDEF("protoValueTransformerScript")
Script139.setDirectOutput(True)
Script139.setMustEvaluate(True)
field140 = x3d.field()
field140.setName("protoScale")
field140.setAccessType("inputOutput")
field140.setType("SFFloat")

Script139.addField(field140)
field141 = x3d.field()
field141.setName("petNames")
field141.setAccessType("inputOutput")
field141.setType("MFString")

Script139.addField(field141)
field142 = x3d.field()
field142.setName("protoParameterName")
field142.setAccessType("inputOutput")
field142.setType("SFString")

Script139.addField(field142)
field143 = x3d.field()
field143.setName("shader")
field143.setAccessType("inputOutput")
field143.setType("SFNode")

Script139.addField(field143)
field144 = x3d.field()
field144.setName("newTranslation")
field144.setAccessType("inputOnly")
field144.setType("SFVec3f")
field144.setValue("1 1 1")

Script139.addField(field144)
field145 = x3d.field()
field145.setName("protoValue_changed")
field145.setAccessType("outputOnly")
field145.setType("SFFloat")
field145.setValue("1")

Script139.addField(field145)
field146 = x3d.field()
field146.setName("protoText_changed")
field146.setAccessType("outputOnly")
field146.setType("MFString")
field146.setValue("\"1.0\"")

Script139.addField(field146)
IS147 = x3d.IS()
connect148 = x3d.connect()
connect148.setNodeField("protoScale")
connect148.setProtoField("parameterScale")

IS147.addConnect(connect148)
connect149 = x3d.connect()
connect149.setNodeField("petNames")
connect149.setProtoField("petNames")

IS147.addConnect(connect149)
connect150 = x3d.connect()
connect150.setNodeField("protoParameterName")
connect150.setProtoField("parameterName")

IS147.addConnect(connect150)
connect151 = x3d.connect()
connect151.setNodeField("shader")
connect151.setProtoField("shaderNode")

IS147.addConnect(connect151)

Script139.setIS(IS147)

Group121.addChild(Script139)
ROUTE152 = x3d.ROUTE()
ROUTE152.setFromField("translation_changed")
ROUTE152.setFromNode("protoSensor")
ROUTE152.setToField("set_translation")
ROUTE152.setToNode("protoTransform")

Group121.addChild(ROUTE152)
ROUTE153 = x3d.ROUTE()
ROUTE153.setFromField("translation_changed")
ROUTE153.setFromNode("protoSensor")
ROUTE153.setToField("newTranslation")
ROUTE153.setToNode("protoValueTransformerScript")

Group121.addChild(ROUTE153)
ROUTE154 = x3d.ROUTE()
ROUTE154.setFromField("protoText_changed")
ROUTE154.setFromNode("protoValueTransformerScript")
ROUTE154.setToField("string")
ROUTE154.setToNode("protoText")

Group121.addChild(ROUTE154)

ProtoBody120.addChild(Group121)

ProtoDeclare110.setProtoBody(ProtoBody120)

LayoutLayer95.addChild(ProtoDeclare110)
ProtoInstance155 = x3d.ProtoInstance()
ProtoInstance155.setName("SliderProto")
ProtoInstance155.setDEF("aPI")
fieldValue156 = x3d.fieldValue()
fieldValue156.setName("sliderTranslation")
fieldValue156.setValue("0 0.7 0")

ProtoInstance155.addFieldValue(fieldValue156)
fieldValue157 = x3d.fieldValue()
fieldValue157.setName("transformTranslation")
fieldValue157.setValue("0 0 0.1")

ProtoInstance155.addFieldValue(fieldValue157)
fieldValue158 = x3d.fieldValue()
fieldValue158.setName("sensorTranslation")
fieldValue158.setValue("0 0 0")

ProtoInstance155.addFieldValue(fieldValue158)
fieldValue159 = x3d.fieldValue()
fieldValue159.setName("textString")
fieldValue159.setValue("\"a=\"")

ProtoInstance155.addFieldValue(fieldValue159)
fieldValue160 = x3d.fieldValue()
fieldValue160.setName("parameterScale")
fieldValue160.setValue("30")

ProtoInstance155.addFieldValue(fieldValue160)
fieldValue161 = x3d.fieldValue()
fieldValue161.setName("parameterName")
fieldValue161.setValue("a")

ProtoInstance155.addFieldValue(fieldValue161)
fieldValue162 = x3d.fieldValue()
fieldValue162.setName("petNames")
fieldValue162.setValue("\"yottzumm\" \"group1-petname\"")

ProtoInstance155.addFieldValue(fieldValue162)
fieldValue163 = x3d.fieldValue()
fieldValue163.setName("shaderNode")
ComposedShader164 = x3d.ComposedShader()
ComposedShader164.setUSE("x_iteShader")

fieldValue163.addChild(ComposedShader164)

ProtoInstance155.addFieldValue(fieldValue163)

LayoutLayer95.addChild(ProtoInstance155)
ProtoInstance165 = x3d.ProtoInstance()
ProtoInstance165.setName("SliderProto")
ProtoInstance165.setDEF("bPI")
fieldValue166 = x3d.fieldValue()
fieldValue166.setName("sliderTranslation")
fieldValue166.setValue("0 0.4 0")

ProtoInstance165.addFieldValue(fieldValue166)
fieldValue167 = x3d.fieldValue()
fieldValue167.setName("transformTranslation")
fieldValue167.setValue("0 0 0.1")

ProtoInstance165.addFieldValue(fieldValue167)
fieldValue168 = x3d.fieldValue()
fieldValue168.setName("sensorTranslation")
fieldValue168.setValue("0 0 0")

ProtoInstance165.addFieldValue(fieldValue168)
fieldValue169 = x3d.fieldValue()
fieldValue169.setName("textString")
fieldValue169.setValue("\"b=\"")

ProtoInstance165.addFieldValue(fieldValue169)
fieldValue170 = x3d.fieldValue()
fieldValue170.setName("parameterScale")
fieldValue170.setValue("30")

ProtoInstance165.addFieldValue(fieldValue170)
fieldValue171 = x3d.fieldValue()
fieldValue171.setName("parameterName")
fieldValue171.setValue("b")

ProtoInstance165.addFieldValue(fieldValue171)
fieldValue172 = x3d.fieldValue()
fieldValue172.setName("petNames")
fieldValue172.setValue("\"yottzumm\" \"group1-petname\"")

ProtoInstance165.addFieldValue(fieldValue172)
fieldValue173 = x3d.fieldValue()
fieldValue173.setName("shaderNode")
ComposedShader174 = x3d.ComposedShader()
ComposedShader174.setUSE("x_iteShader")

fieldValue173.addChild(ComposedShader174)

ProtoInstance165.addFieldValue(fieldValue173)

LayoutLayer95.addChild(ProtoInstance165)
ProtoInstance175 = x3d.ProtoInstance()
ProtoInstance175.setName("SliderProto")
ProtoInstance175.setDEF("cPI")
fieldValue176 = x3d.fieldValue()
fieldValue176.setName("sliderTranslation")
fieldValue176.setValue("0 0.1 0")

ProtoInstance175.addFieldValue(fieldValue176)
fieldValue177 = x3d.fieldValue()
fieldValue177.setName("transformTranslation")
fieldValue177.setValue("0 0 0.1")

ProtoInstance175.addFieldValue(fieldValue177)
fieldValue178 = x3d.fieldValue()
fieldValue178.setName("sensorTranslation")
fieldValue178.setValue("0 0 0")

ProtoInstance175.addFieldValue(fieldValue178)
fieldValue179 = x3d.fieldValue()
fieldValue179.setName("textString")
fieldValue179.setValue("\"c=\"")

ProtoInstance175.addFieldValue(fieldValue179)
fieldValue180 = x3d.fieldValue()
fieldValue180.setName("parameterScale")
fieldValue180.setValue("20")

ProtoInstance175.addFieldValue(fieldValue180)
fieldValue181 = x3d.fieldValue()
fieldValue181.setName("parameterName")
fieldValue181.setValue("c")

ProtoInstance175.addFieldValue(fieldValue181)
fieldValue182 = x3d.fieldValue()
fieldValue182.setName("petNames")
fieldValue182.setValue("\"yottzumm\" \"yottzumm2\" \"group1-petname\"")

ProtoInstance175.addFieldValue(fieldValue182)
fieldValue183 = x3d.fieldValue()
fieldValue183.setName("shaderNode")
ComposedShader184 = x3d.ComposedShader()
ComposedShader184.setUSE("x_iteShader")

fieldValue183.addChild(ComposedShader184)

ProtoInstance175.addFieldValue(fieldValue183)

LayoutLayer95.addChild(ProtoInstance175)
ProtoInstance185 = x3d.ProtoInstance()
ProtoInstance185.setName("SliderProto")
ProtoInstance185.setDEF("dPI")
fieldValue186 = x3d.fieldValue()
fieldValue186.setName("sliderTranslation")
fieldValue186.setValue("0 -0.2 0")

ProtoInstance185.addFieldValue(fieldValue186)
fieldValue187 = x3d.fieldValue()
fieldValue187.setName("transformTranslation")
fieldValue187.setValue("0 0 0.1")

ProtoInstance185.addFieldValue(fieldValue187)
fieldValue188 = x3d.fieldValue()
fieldValue188.setName("sensorTranslation")
fieldValue188.setValue("0 0 0")

ProtoInstance185.addFieldValue(fieldValue188)
fieldValue189 = x3d.fieldValue()
fieldValue189.setName("textString")
fieldValue189.setValue("\"d=\"")

ProtoInstance185.addFieldValue(fieldValue189)
fieldValue190 = x3d.fieldValue()
fieldValue190.setName("parameterScale")
fieldValue190.setValue("20")

ProtoInstance185.addFieldValue(fieldValue190)
fieldValue191 = x3d.fieldValue()
fieldValue191.setName("parameterName")
fieldValue191.setValue("d")

ProtoInstance185.addFieldValue(fieldValue191)
fieldValue192 = x3d.fieldValue()
fieldValue192.setName("petNames")
fieldValue192.setValue("\"yottzumm\" \"yottzumm2\" \"group1-petname\"")

ProtoInstance185.addFieldValue(fieldValue192)
fieldValue193 = x3d.fieldValue()
fieldValue193.setName("shaderNode")
ComposedShader194 = x3d.ComposedShader()
ComposedShader194.setUSE("x_iteShader")

fieldValue193.addChild(ComposedShader194)

ProtoInstance185.addFieldValue(fieldValue193)

LayoutLayer95.addChild(ProtoInstance185)
ProtoInstance195 = x3d.ProtoInstance()
ProtoInstance195.setName("SliderProto")
ProtoInstance195.setDEF("tdeltaPI")
fieldValue196 = x3d.fieldValue()
fieldValue196.setName("sliderTranslation")
fieldValue196.setValue("0 -0.5 0")

ProtoInstance195.addFieldValue(fieldValue196)
fieldValue197 = x3d.fieldValue()
fieldValue197.setName("transformTranslation")
fieldValue197.setValue("0 0 0.1")

ProtoInstance195.addFieldValue(fieldValue197)
fieldValue198 = x3d.fieldValue()
fieldValue198.setName("sensorTranslation")
fieldValue198.setValue("0 0 0")

ProtoInstance195.addFieldValue(fieldValue198)
fieldValue199 = x3d.fieldValue()
fieldValue199.setName("textString")
fieldValue199.setValue("\"tdelta=\"")

ProtoInstance195.addFieldValue(fieldValue199)
fieldValue200 = x3d.fieldValue()
fieldValue200.setName("parameterScale")
fieldValue200.setValue("6.28")

ProtoInstance195.addFieldValue(fieldValue200)
fieldValue201 = x3d.fieldValue()
fieldValue201.setName("parameterName")
fieldValue201.setValue("tdelta")

ProtoInstance195.addFieldValue(fieldValue201)
fieldValue202 = x3d.fieldValue()
fieldValue202.setName("petNames")
fieldValue202.setValue("\"yottzumm2\" \"group1-petname\"")

ProtoInstance195.addFieldValue(fieldValue202)
fieldValue203 = x3d.fieldValue()
fieldValue203.setName("shaderNode")
ComposedShader204 = x3d.ComposedShader()
ComposedShader204.setUSE("x_iteShader")

fieldValue203.addChild(ComposedShader204)

ProtoInstance195.addFieldValue(fieldValue203)

LayoutLayer95.addChild(ProtoInstance195)
ProtoInstance205 = x3d.ProtoInstance()
ProtoInstance205.setName("SliderProto")
ProtoInstance205.setDEF("pdeltaPI")
fieldValue206 = x3d.fieldValue()
fieldValue206.setName("sliderTranslation")
fieldValue206.setValue("0 -0.8 0")

ProtoInstance205.addFieldValue(fieldValue206)
fieldValue207 = x3d.fieldValue()
fieldValue207.setName("transformTranslation")
fieldValue207.setValue("0 0 0.1")

ProtoInstance205.addFieldValue(fieldValue207)
fieldValue208 = x3d.fieldValue()
fieldValue208.setName("sensorTranslation")
fieldValue208.setValue("0 0 0")

ProtoInstance205.addFieldValue(fieldValue208)
fieldValue209 = x3d.fieldValue()
fieldValue209.setName("textString")
fieldValue209.setValue("\"pdelta=\"")

ProtoInstance205.addFieldValue(fieldValue209)
fieldValue210 = x3d.fieldValue()
fieldValue210.setName("parameterScale")
fieldValue210.setValue("6.28")

ProtoInstance205.addFieldValue(fieldValue210)
fieldValue211 = x3d.fieldValue()
fieldValue211.setName("parameterName")
fieldValue211.setValue("pdelta")

ProtoInstance205.addFieldValue(fieldValue211)
fieldValue212 = x3d.fieldValue()
fieldValue212.setName("petNames")
fieldValue212.setValue("\"yottzumm2\" \"group1-petname\"")

ProtoInstance205.addFieldValue(fieldValue212)
fieldValue213 = x3d.fieldValue()
fieldValue213.setName("shaderNode")
ComposedShader214 = x3d.ComposedShader()
ComposedShader214.setUSE("x_iteShader")

fieldValue213.addChild(ComposedShader214)

ProtoInstance205.addFieldValue(fieldValue213)

LayoutLayer95.addChild(ProtoInstance205)

LayerSet17.addLayers(LayoutLayer95)
Layer215 = x3d.Layer()
Layer215.setPickable(True)
Layer215.setObjectType(["ALL"])
Viewpoint216 = x3d.Viewpoint()
Viewpoint216.setDescription("My Humanoids")
Viewpoint216.setFieldOfView(1.570796)
Viewpoint216.setPosition(x3d.doubleToFloat([0,1.75,80]))

Layer215.addChild(Viewpoint216)
Script217 = x3d.Script()
Script217.setUrl(["../javascripts/X3DAvatar.js","https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DAvatar.js"])
Script217.setDEF("HumanoidScript")
Script217.setDirectOutput(True)
Script217.setMustEvaluate(True)

Layer215.addChild(Script217)
Group218 = x3d.Group()
Group218.setDEF("humanoidGroup")
Group219 = x3d.Group()

Group218.addChild(Group219)

Layer215.addChild(Group218)

LayerSet17.addLayers(Layer215)

Scene16.addLayerSet(LayerSet17)

X3D0.setScene(Scene16)
X3D0.toFileX3D("../data/bumpyx_itesliders.new.graalpy.x3d")
X3D0.toFileJSON("../data/bumpyx_itesliders.new.graalpy.x3dj")
