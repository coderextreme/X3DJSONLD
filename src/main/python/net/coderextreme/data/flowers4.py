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
meta8.setContent("flowers4.x3d")

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
meta11.setContent("https://coderextreme.net/X3DJSONLD/flowers4.x3d")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("description")
meta12.setContent("an animated flower")

head1.addMeta(meta12)

X3D0.setHead(head1)
Scene13 = Scene()
NavigationInfo14 = NavigationInfo()

Scene13.addChildren(NavigationInfo14)
Background15 = Background()
Background15.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
Background15.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background15.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
Background15.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
Background15.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
Background15.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene13.addChildren(Background15)
Transform16 = Transform()
Transform16.setDEF("transform")
Shape17 = Shape()
Appearance18 = Appearance()
Material19 = Material()
Material19.setDiffuseColor([0.7,0.7,0.7])
Material19.setSpecularColor([0.5,0.5,0.5])

Appearance18.setMaterial(Material19)
ComposedCubeMapTexture20 = ComposedCubeMapTexture()
ImageTexture21 = ImageTexture()
ImageTexture21.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture20.setBackTexture(ImageTexture21)
ImageTexture22 = ImageTexture()
ImageTexture22.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture20.setBottomTexture(ImageTexture22)
ImageTexture23 = ImageTexture()
ImageTexture23.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture20.setFrontTexture(ImageTexture23)
ImageTexture24 = ImageTexture()
ImageTexture24.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture20.setLeftTexture(ImageTexture24)
ImageTexture25 = ImageTexture()
ImageTexture25.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture20.setRightTexture(ImageTexture25)
ImageTexture26 = ImageTexture()
ImageTexture26.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture20.setTopTexture(ImageTexture26)

Appearance18.setTexture(ComposedCubeMapTexture20)
ComposedShader27 = ComposedShader()
ComposedShader27.setDEF("shader")
ComposedShader27.setLanguage("GLSL")
field28 = field()
field28.setName("cube")
field28.setType("SFInt32")
field28.setAccessType("inputOutput")
field28.setValue("0")

ComposedShader27.addField(field28)
field29 = field()
field29.setName("chromaticDispertion")
field29.setAccessType("inputOutput")
field29.setType("SFVec3f")
field29.setValue("0.98 1 1.033")

ComposedShader27.addField(field29)
field30 = field()
field30.setName("bias")
field30.setType("SFFloat")
field30.setAccessType("inputOutput")
field30.setValue("0.5")

ComposedShader27.addField(field30)
field31 = field()
field31.setName("scale")
field31.setType("SFFloat")
field31.setAccessType("inputOutput")
field31.setValue("0.5")

ComposedShader27.addField(field31)
field32 = field()
field32.setName("power")
field32.setType("SFFloat")
field32.setAccessType("inputOutput")
field32.setValue("2")

ComposedShader27.addField(field32)
ShaderPart33 = ShaderPart()
ShaderPart33.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart33.setType("VERTEX")

ComposedShader27.addParts(ShaderPart33)
ShaderPart34 = ShaderPart()
ShaderPart34.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"])
ShaderPart34.setType("FRAGMENT")

ComposedShader27.addParts(ShaderPart34)

Appearance18.addShaders(ComposedShader27)

Shape17.setAppearance(Appearance18)
#<Sphere>
IndexedFaceSet35 = IndexedFaceSet()
IndexedFaceSet35.setConvex(False)
IndexedFaceSet35.setDEF("Orbit")
Coordinate36 = Coordinate()
Coordinate36.setDEF("OrbitCoordinates")

IndexedFaceSet35.setCoord(Coordinate36)

Shape17.setGeometry(IndexedFaceSet35)

Transform16.addChildren(Shape17)

Scene13.addChildren(Transform16)
Script37 = Script()
Script37.setDEF("OrbitScript")
field38 = field()
field38.setName("set_fraction")
field38.setAccessType("inputOnly")
field38.setType("SFFloat")

Script37.addField(field38)
field39 = field()
field39.setName("coordinates")
field39.setAccessType("inputOutput")
field39.setType("MFVec3f")

Script37.addField(field39)
field40 = field()
field40.setName("coordIndexes")
field40.setAccessType("outputOnly")
field40.setType("MFInt32")

Script37.addField(field40)

Script37.setSourceCode('''ecmascript:\n"+
"\n"+
"var e = 5;\n"+
"var f = 5;\n"+
"var g = 5;\n"+
"var h = 5;\n"+
"\n"+
"function initialize() {\n"+
"     var resolution = 100;\n"+
"     updateCoordinates(resolution);\n"+
"     var cis = [];\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis.push(i*resolution+j);\n"+
"	     cis.push(i*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j);\n"+
"	     cis.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = new MFInt32(cis);\n"+
"}\n"+
"\n"+
"function updateCoordinates(resolution) {\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = [];\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		crds.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = new MFVec3f(crds);\n"+
"}\n"+
"\n"+
"function set_fraction(fraction, eventTime) {\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	if (f < 1) {\n"+
"		f = 10;\n"+
"	}\n"+
"	if (g < 1) {\n"+
"		g = 4;\n"+
"	}\n"+
"	if (h < 1) {\n"+
"		h = 4;\n"+
"	}\n"+
"	var resolution = 100;\n"+
"	updateCoordinates(resolution);\n"+
"}''')

Scene13.addChildren(Script37)
TimeSensor41 = TimeSensor()
TimeSensor41.setDEF("Clock")
TimeSensor41.setCycleInterval(16)
TimeSensor41.setLoop(True)

Scene13.addChildren(TimeSensor41)
ROUTE42 = ROUTE()
ROUTE42.setFromField("coordIndexes")
ROUTE42.setFromNode("OrbitScript")
ROUTE42.setToField("set_coordIndex")
ROUTE42.setToNode("Orbit")

Scene13.addChildren(ROUTE42)
ROUTE43 = ROUTE()
ROUTE43.setFromField("coordinates")
ROUTE43.setFromNode("OrbitScript")
ROUTE43.setToField("set_point")
ROUTE43.setToNode("OrbitCoordinates")

Scene13.addChildren(ROUTE43)
ROUTE44 = ROUTE()
ROUTE44.setFromField("fraction_changed")
ROUTE44.setFromNode("Clock")
ROUTE44.setToField("set_fraction")
ROUTE44.setToNode("OrbitScript")

Scene13.addChildren(ROUTE44)

X3D0.setScene(Scene13)
X3D0.toFileX3D("../data/flowers4_RoundTrip.x3d")
