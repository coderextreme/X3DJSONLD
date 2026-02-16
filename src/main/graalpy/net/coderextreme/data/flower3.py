import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("flower3.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("a flower")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()

Scene7.addChild(NavigationInfo8)
DirectionalLight9 = x3d.DirectionalLight()
DirectionalLight9.setDirection(x3d.doubleToFloat([0,-0.8,-0.2]))
DirectionalLight9.setIntensity(0.5)

Scene7.addChild(DirectionalLight9)
Background10 = x3d.Background()
Background10.setSkyColor(x3d.doubleToFloat([1,1,1]))

Scene7.addChild(Background10)
Viewpoint11 = x3d.Viewpoint()
Viewpoint11.setDescription("One mathematical orbital")
Viewpoint11.setPosition(x3d.doubleToFloat([0,0,50]))

Scene7.addChild(Viewpoint11)
Transform12 = x3d.Transform()
Transform12.setDEF("OrbitTransform")
Transform12.setTranslation(x3d.doubleToFloat([8,0,0]))
Shape13 = x3d.Shape()
Appearance14 = x3d.Appearance()
Material15 = x3d.Material()
Material15.setDiffuseColor(x3d.doubleToFloat([0,0.5,1]))
Material15.setSpecularColor(x3d.doubleToFloat([0,0.5,1]))

Appearance14.setMaterial(Material15)

Shape13.setAppearance(Appearance14)
IndexedFaceSet16 = x3d.IndexedFaceSet()
IndexedFaceSet16.setConvex(False)
IndexedFaceSet16.setDEF("Orbit")
Coordinate17 = x3d.Coordinate()
Coordinate17.setDEF("OrbitCoordinates")

IndexedFaceSet16.setCoord(Coordinate17)

Shape13.setGeometry(IndexedFaceSet16)

Transform12.addChild(Shape13)

Scene7.addChild(Transform12)
Script18 = x3d.Script()
Script18.setDEF("OrbitScript")
field19 = x3d.field()
field19.setName("set_fraction")
field19.setAccessType("inputOnly")
field19.setType("SFFloat")

Script18.addField(field19)
field20 = x3d.field()
field20.setName("coordinates")
field20.setAccessType("outputOnly")
field20.setType("MFVec3f")

Script18.addField(field20)
field21 = x3d.field()
field21.setName("coordIndexes")
field21.setAccessType("outputOnly")
field21.setType("MFInt32")

Script18.addField(field21)

Script18.addComments(x3d.CommentsBlock("""<field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/>"""))

Script18.addComments(x3d.CommentsBlock("""<field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/>"""))

Script18.addComments(x3d.CommentsBlock("""<field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/>"""))

Script18.addComments(x3d.CommentsBlock("""<field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/>"""))

Script18.addComments(x3d.CommentsBlock("""<field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/>"""))

Script18.addComments(x3d.CommentsBlock("""<field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/>"""))

Script18.addComments(x3d.CommentsBlock("""<field accessType=\"initializeOnly\" name=\"resolution\" type=\"SFInt32\" value=\"100\"/>"""))

Script18.setSourceCode('''ecmascript:

var e = 5;
var f = 5;
var g = 5;
var h = 5;
var resolution = 100;
var t = 0;
var p = 0;

function initialize() {
     generateCoordinates(resolution);
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

function generateCoordinates(resolution) {
     var theta = 0.0;
     var phi = 0.0;
     var delta = (2 * 3.141592653) / (resolution-1);
     var localc = new MFVec3f();
     var arrIndex = 0;
     for (var  i = 0; i < resolution; i++) {
     	for (var  j = 0; j < resolution; j++) {
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
	t += 0.5;
	p += 0.5;
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
	if (f < 1) {
		f = 10;
	}
	if (g < 1) {
		g = 4;
	}
	if (h < 1) {
		h = 4;
	}
	generateCoordinates(resolution);
}''')

Scene7.addChild(Script18)
TimeSensor22 = x3d.TimeSensor()
TimeSensor22.setDEF("Clock")
TimeSensor22.setCycleInterval(16)
TimeSensor22.setLoop(True)

Scene7.addChild(TimeSensor22)
ROUTE23 = x3d.ROUTE()
ROUTE23.setFromNode("OrbitScript")
ROUTE23.setFromField("coordIndexes")
ROUTE23.setToNode("Orbit")
ROUTE23.setToField("set_coordIndex")

Scene7.addChild(ROUTE23)
ROUTE24 = x3d.ROUTE()
ROUTE24.setFromNode("OrbitScript")
ROUTE24.setFromField("coordinates")
ROUTE24.setToNode("OrbitCoordinates")
ROUTE24.setToField("point")

Scene7.addChild(ROUTE24)
ROUTE25 = x3d.ROUTE()
ROUTE25.setFromNode("Clock")
ROUTE25.setFromField("fraction_changed")
ROUTE25.setToNode("OrbitScript")
ROUTE25.setToField("set_fraction")

Scene7.addChild(ROUTE25)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/flower3.new.graalpy.x3d")
X3D0.toFileJSON("../data/flower3.new.graalpy.x3dj")
