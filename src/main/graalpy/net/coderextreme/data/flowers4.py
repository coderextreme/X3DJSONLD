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
meta11 = x3d.meta()
meta11.setName("title")
meta11.setContent("flowers4.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("creator")
meta12.setContent("John Carlson")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("generator")
meta13.setContent("manual")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("identifier")
meta14.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("description")
meta15.setContent("an animated flower")

head1.addMeta(meta15)

X3D0.setHead(head1)
Scene16 = x3d.Scene()
NavigationInfo17 = x3d.NavigationInfo()

Scene16.addChild(NavigationInfo17)
Background18 = x3d.Background()
Background18.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background18.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background18.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background18.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background18.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background18.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene16.addChild(Background18)
Transform19 = x3d.Transform()
Transform19.setDEF("transform")
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.setDiffuseColor(x3d.doubleToFloat([0.7,0.7,0.7]))
Material22.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance21.setMaterial(Material22)
ComposedCubeMapTexture23 = x3d.ComposedCubeMapTexture()
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture23.setBackTexture(ImageTexture24)
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture23.setBottomTexture(ImageTexture25)
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture23.setFrontTexture(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture23.setLeftTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture23.setRightTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture23.setTopTexture(ImageTexture29)

Appearance21.setTexture(ComposedCubeMapTexture23)
ComposedShader30 = x3d.ComposedShader()
ComposedShader30.setDEF("shader")
ComposedShader30.setLanguage("GLSL")
field31 = x3d.field()
field31.setName("cube")
field31.setType("SFInt32")
field31.setAccessType("inputOutput")
field31.setValue("0")

ComposedShader30.addField(field31)
field32 = x3d.field()
field32.setName("chromaticDispertion")
field32.setAccessType("inputOutput")
field32.setType("SFVec3f")
field32.setValue("0.98 1 1.033")

ComposedShader30.addField(field32)
field33 = x3d.field()
field33.setName("bias")
field33.setType("SFFloat")
field33.setAccessType("inputOutput")
field33.setValue("0.5")

ComposedShader30.addField(field33)
field34 = x3d.field()
field34.setName("scale")
field34.setType("SFFloat")
field34.setAccessType("inputOutput")
field34.setValue("0.5")

ComposedShader30.addField(field34)
field35 = x3d.field()
field35.setName("power")
field35.setType("SFFloat")
field35.setAccessType("inputOutput")
field35.setValue("2")

ComposedShader30.addField(field35)
ShaderPart36 = x3d.ShaderPart()
ShaderPart36.setUrl(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])
ShaderPart36.setType("VERTEX")

ComposedShader30.addParts(ShaderPart36)
ShaderPart37 = x3d.ShaderPart()
ShaderPart37.setUrl(["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"])
ShaderPart37.setType("FRAGMENT")

ComposedShader30.addParts(ShaderPart37)

Appearance21.addShaders(ComposedShader30)

Shape20.setAppearance(Appearance21)

Shape20.addComments(x3d.CommentsBlock('''<Sphere>'''))
IndexedFaceSet38 = x3d.IndexedFaceSet()
IndexedFaceSet38.setConvex(False)
IndexedFaceSet38.setDEF("Orbit")
Coordinate39 = x3d.Coordinate()
Coordinate39.setDEF("OrbitCoordinates")

IndexedFaceSet38.setCoord(Coordinate39)

Shape20.setGeometry(IndexedFaceSet38)

Transform19.addChild(Shape20)

Scene16.addChild(Transform19)
Script40 = x3d.Script()
Script40.setDEF("OrbitScript")
field41 = x3d.field()
field41.setName("set_fraction")
field41.setAccessType("inputOnly")
field41.setType("SFFloat")

Script40.addField(field41)
field42 = x3d.field()
field42.setName("coordinates")
field42.setAccessType("inputOutput")
field42.setType("MFVec3f")

Script40.addField(field42)
field43 = x3d.field()
field43.setName("coordIndexes")
field43.setAccessType("outputOnly")
field43.setType("MFInt32")

Script40.addField(field43)
field44 = x3d.field()
field44.setName("e")
field44.setType("SFFloat")
field44.setAccessType("inputOutput")
field44.setValue("5")

Script40.addField(field44)
field45 = x3d.field()
field45.setName("f")
field45.setType("SFFloat")
field45.setAccessType("inputOutput")
field45.setValue("5")

Script40.addField(field45)
field46 = x3d.field()
field46.setName("g")
field46.setType("SFFloat")
field46.setAccessType("inputOutput")
field46.setValue("5")

Script40.addField(field46)
field47 = x3d.field()
field47.setName("h")
field47.setType("SFFloat")
field47.setAccessType("inputOutput")
field47.setValue("5")

Script40.addField(field47)

Script40.setSourceCode('''ecmascript:
function initialize() {
     var resolution = 100;
     updateCoordinates(resolution);
     var localci = new MFInt32();
     var arrIndex = 0;
     for (var i = 0; i < resolution-1; i++) {
     	for (var j = 0; j < resolution-1; j++) {
	     localci[arrIndex++] = i*resolution+j;
	     localci[arrIndex++] = i*resolution+j+1;
	     localci[arrIndex++] = (i+1)*resolution+j+1;
	     localci[arrIndex++] = (i+1)*resolution+j;
	     localci[arrIndex++] = -1;
	}
    }
    coordIndexes = localci;
}

function updateCoordinates(resolution) {
     var theta = 0.0;
     var phi = 0.0;
     var delta = (2 * 3.141592653) / (resolution-1);
     var localc = new MFVec3f();
     var arrIndex = 0;
     for (var i = 0; i < resolution; i++) {
     	for (var j = 0; j < resolution; j++) {
		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);
		localc[arrIndex++] = new SFVec3f(
			rho * Math.cos(phi) * Math.cos(theta),
			rho * Math.cos(phi) * Math.sin(theta),
			rho * Math.sin(phi)
		);
		theta += delta;
	}
	phi += delta;
     }
     coordinates = localc;
}

function set_fraction(fraction, eventTime) {
	var choice = Math.floor(Math.random() * 4);
	switch (choice) {
	case 0:
		e += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 1:
		f += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 2:
		g += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 3:
		h += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	}
	if (e < 1) {
		e = 10;
	}
	if (f < 1) {
		f = 10;
	}
	if (g < 1) {
		g = 4;
	}
	if (h < 1) {
		h = 4;
	}
	var resolution = 100;
	updateCoordinates(resolution);
}''')

Scene16.addChild(Script40)
TimeSensor48 = x3d.TimeSensor()
TimeSensor48.setDEF("Clock")
TimeSensor48.setCycleInterval(16)
TimeSensor48.setLoop(True)

Scene16.addChild(TimeSensor48)
ROUTE49 = x3d.ROUTE()
ROUTE49.setFromField("coordIndexes")
ROUTE49.setFromNode("OrbitScript")
ROUTE49.setToField("set_coordIndex")
ROUTE49.setToNode("Orbit")

Scene16.addChild(ROUTE49)
ROUTE50 = x3d.ROUTE()
ROUTE50.setFromField("coordinates")
ROUTE50.setFromNode("OrbitScript")
ROUTE50.setToField("set_point")
ROUTE50.setToNode("OrbitCoordinates")

Scene16.addChild(ROUTE50)
ROUTE51 = x3d.ROUTE()
ROUTE51.setFromField("fraction_changed")
ROUTE51.setFromNode("Clock")
ROUTE51.setToField("set_fraction")
ROUTE51.setToNode("OrbitScript")

Scene16.addChild(ROUTE51)

X3D0.setScene(Scene16)
X3D0.toFileX3D("../data/flowers4.new.graalpy.x3d")
X3D0.toFileJSON("../data/flowers4.new.graalpy.json")
