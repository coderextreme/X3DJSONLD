import x3dpsail as x3d
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
#<component name='Shape' level='4'></component>
meta10 = x3d.meta()
meta10.setName("title")
meta10.setContent("flowers4.x3d")

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
meta13.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("description")
meta14.setContent("an animated flower")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = x3d.Scene()
NavigationInfo16 = x3d.NavigationInfo()

Scene15.addChildren(NavigationInfo16)
Background17 = x3d.Background()
Background17.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background17.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background17.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background17.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background17.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background17.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene15.addChildren(Background17)
Transform18 = x3d.Transform()
Transform18.setDEF("transform")
Shape19 = x3d.Shape()
Appearance20 = x3d.Appearance()
Material21 = x3d.Material()
Material21.setDiffuseColor([0.7,0.7,0.7])
Material21.setSpecularColor([0.5,0.5,0.5])

Appearance20.setMaterial(Material21)
ComposedCubeMapTexture22 = x3d.ComposedCubeMapTexture()
ImageTexture23 = x3d.ImageTexture()
ImageTexture23.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture22.setBackTexture(ImageTexture23)
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture22.setBottomTexture(ImageTexture24)
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture22.setFrontTexture(ImageTexture25)
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture22.setLeftTexture(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture22.setRightTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture22.setTopTexture(ImageTexture28)

Appearance20.setTexture(ComposedCubeMapTexture22)
ComposedShader29 = x3d.ComposedShader()
ComposedShader29.setDEF("shader")
ComposedShader29.setLanguage("GLSL")
field30 = x3d.field()
field30.setName("cube")
field30.setType("SFInt32")
field30.setAccessType("inputOutput")
field30.setValue("0")

ComposedShader29.addField(field30)
field31 = x3d.field()
field31.setName("chromaticDispertion")
field31.setAccessType("inputOutput")
field31.setType("SFVec3f")
field31.setValue("0.98 1 1.033")

ComposedShader29.addField(field31)
field32 = x3d.field()
field32.setName("bias")
field32.setType("SFFloat")
field32.setAccessType("inputOutput")
field32.setValue("0.5")

ComposedShader29.addField(field32)
field33 = x3d.field()
field33.setName("scale")
field33.setType("SFFloat")
field33.setAccessType("inputOutput")
field33.setValue("0.5")

ComposedShader29.addField(field33)
field34 = x3d.field()
field34.setName("power")
field34.setType("SFFloat")
field34.setAccessType("inputOutput")
field34.setValue("2")

ComposedShader29.addField(field34)
ShaderPart35 = x3d.ShaderPart()
ShaderPart35.setUrl(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])
ShaderPart35.setType("VERTEX")

ComposedShader29.addParts(ShaderPart35)
ShaderPart36 = x3d.ShaderPart()
ShaderPart36.setUrl(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"])
ShaderPart36.setType("FRAGMENT")

ComposedShader29.addParts(ShaderPart36)

Appearance20.addShaders(ComposedShader29)

Shape19.setAppearance(Appearance20)
#<Sphere>
IndexedFaceSet37 = x3d.IndexedFaceSet()
IndexedFaceSet37.setConvex(False)
IndexedFaceSet37.setDEF("Orbit")
Coordinate38 = x3d.Coordinate()
Coordinate38.setDEF("OrbitCoordinates")

IndexedFaceSet37.setCoord(Coordinate38)

Shape19.setGeometry(IndexedFaceSet37)

Transform18.addChild(Shape19)

Scene15.addChildren(Transform18)
Script39 = x3d.Script()
Script39.setDEF("OrbitScript")
field40 = x3d.field()
field40.setName("set_fraction")
field40.setAccessType("inputOnly")
field40.setType("SFFloat")

Script39.addField(field40)
field41 = x3d.field()
field41.setName("coordinates")
field41.setAccessType("inputOutput")
field41.setType("MFVec3f")

Script39.addField(field41)
field42 = x3d.field()
field42.setName("coordIndexes")
field42.setAccessType("outputOnly")
field42.setType("MFInt32")

Script39.addField(field42)

Script39.setSourceCode('''ecmascript:\n"+
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

Scene15.addChildren(Script39)
TimeSensor43 = x3d.TimeSensor()
TimeSensor43.setDEF("Clock")
TimeSensor43.setCycleInterval(16)
TimeSensor43.setLoop(True)

Scene15.addChildren(TimeSensor43)
ROUTE44 = x3d.ROUTE()
ROUTE44.setFromField("coordIndexes")
ROUTE44.setFromNode("OrbitScript")
ROUTE44.setToField("set_coordIndex")
ROUTE44.setToNode("Orbit")

Scene15.addChildren(ROUTE44)
ROUTE45 = x3d.ROUTE()
ROUTE45.setFromField("coordinates")
ROUTE45.setFromNode("OrbitScript")
ROUTE45.setToField("set_point")
ROUTE45.setToNode("OrbitCoordinates")

Scene15.addChildren(ROUTE45)
ROUTE46 = x3d.ROUTE()
ROUTE46.setFromField("fraction_changed")
ROUTE46.setFromNode("Clock")
ROUTE46.setToField("set_fraction")
ROUTE46.setToNode("OrbitScript")

Scene15.addChildren(ROUTE46)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../data/flowers4.new.python.x3d")
