print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "flower3.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "John Carlson"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "generator"
meta4.content = "manual"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "identifier"
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/flower3.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "description"
meta6.content = "a flower"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()

Scene7.children.append(NavigationInfo8)
DirectionalLight9 = x3d.DirectionalLight()
DirectionalLight9.direction = [0,-0.8,-0.2]
DirectionalLight9.intensity = 0.5

Scene7.children.append(DirectionalLight9)
Background10 = x3d.Background()

Scene7.children.append(Background10)
Viewpoint11 = x3d.Viewpoint()
Viewpoint11.description = "One mathematical orbital"
Viewpoint11.position = [0,0,50]

Scene7.children.append(Viewpoint11)
Transform12 = x3d.Transform()
Transform12.DEF = "OrbitTransform"
Transform12.translation = [8,0,0]
Shape13 = x3d.Shape()
Appearance14 = x3d.Appearance()
Material15 = x3d.Material()
Material15.diffuseColor = [0,0.5,1]
Material15.specularColor = [0,0.5,1]

Appearance14.material = Material15

Shape13.appearance = Appearance14
IndexedFaceSet16 = x3d.IndexedFaceSet()
IndexedFaceSet16.convex = False
IndexedFaceSet16.DEF = "Orbit"
Coordinate17 = x3d.Coordinate()
Coordinate17.DEF = "OrbitCoordinates"

IndexedFaceSet16.coord = Coordinate17

Shape13.geometry = IndexedFaceSet16

Transform12.children.append(Shape13)

Scene7.children.append(Transform12)
Script18 = x3d.Script()
Script18.DEF = "OrbitScript"
field19 = x3d.field()
field19.name = "set_fraction"
field19.accessType = "inputOnly"
field19.type = "SFFloat"

Script18.field.append(field19)
field20 = x3d.field()
field20.name = "coordinates"
field20.accessType = "outputOnly"
field20.type = "MFVec3f"

Script18.field.append(field20)
field21 = x3d.field()
field21.name = "coordIndexes"
field21.accessType = "outputOnly"
field21.type = "MFInt32"

Script18.field.append(field21)
"""<field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"initializeOnly\" name=\"resolution\" type=\"SFInt32\" value=\"100\"/>"""

Script18.sourceCode = '''ecmascript:\n"+
"\n"+
"var e = 5;\n"+
"var f = 5;\n"+
"var g = 5;\n"+
"var h = 5;\n"+
"var resolution = 100;\n"+
"var t = 0;\n"+
"var p = 0;\n"+
"\n"+
"function initialize() {\n"+
"     generateCoordinates(resolution);\n"+
"     var localci = [];\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     localci.push(i*resolution+j);\n"+
"	     localci.push(i*resolution+j+1);\n"+
"	     localci.push((i+1)*resolution+j+1);\n"+
"	     localci.push((i+1)*resolution+j);\n"+
"	     localci.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = new MFInt32(...localci);\n"+
"}\n"+
"\n"+
"function generateCoordinates(resolution) {\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var localc = [];\n"+
"     for (var  i = 0; i < resolution; i++) {\n"+
"     	for (var  j = 0; j < resolution; j++) {\n"+
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		localc.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = new MFVec3f(...localc);\n"+
"}\n"+
"\n"+
"function set_fraction(fraction, eventTime) {\n"+
"	t += 0.5;\n"+
"	p += 0.5;\n"+
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
"	generateCoordinates(resolution);\n"+
"}'''

Scene7.children.append(Script18)
TimeSensor22 = x3d.TimeSensor()
TimeSensor22.DEF = "Clock"
TimeSensor22.cycleInterval = 16
TimeSensor22.loop = True

Scene7.children.append(TimeSensor22)
ROUTE23 = x3d.ROUTE()
ROUTE23.fromNode = "OrbitScript"
ROUTE23.fromField = "coordIndexes"
ROUTE23.toNode = "Orbit"
ROUTE23.toField = "set_coordIndex"

Scene7.children.append(ROUTE23)
ROUTE24 = x3d.ROUTE()
ROUTE24.fromNode = "OrbitScript"
ROUTE24.fromField = "coordinates"
ROUTE24.toNode = "OrbitCoordinates"
ROUTE24.toField = "point"

Scene7.children.append(ROUTE24)
ROUTE25 = x3d.ROUTE()
ROUTE25.fromNode = "Clock"
ROUTE25.fromField = "fraction_changed"
ROUTE25.toNode = "OrbitScript"
ROUTE25.toField = "set_fraction"

Scene7.children.append(ROUTE25)

X3D0.Scene = Scene7
f = open("../personal/flower3.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/flower3.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
