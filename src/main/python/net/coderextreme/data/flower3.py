print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta4.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "generator"
meta5.content = "manual"

head1.children.append(meta5)

X3D0.head = head1
Scene6 = x3d.Scene()
NavigationInfo7 = x3d.NavigationInfo()

Scene6.children.append(NavigationInfo7)
DirectionalLight8 = x3d.DirectionalLight()
DirectionalLight8.intensity = 0.5
DirectionalLight8.direction = [0,-0.8,-0.2]

Scene6.children.append(DirectionalLight8)
Background9 = x3d.Background()
Background9.skyColor = [(1, 1, 1)]

Scene6.children.append(Background9)
Viewpoint10 = x3d.Viewpoint()
Viewpoint10.description = "One mathematical orbital"
Viewpoint10.position = [0,0,50]

Scene6.children.append(Viewpoint10)
Transform11 = x3d.Transform(DEF="OrbitTransform")
Transform11.translation = [8,0,0]
Shape12 = x3d.Shape()
Appearance13 = x3d.Appearance()
Material14 = x3d.Material()
Material14.diffuseColor = [0,0.5,1]
Material14.specularColor = [0,0.5,1]

Appearance13.material = Material14

Shape12.appearance = Appearance13
IndexedFaceSet15 = x3d.IndexedFaceSet(DEF="Orbit")
IndexedFaceSet15.convex = False
Coordinate16 = x3d.Coordinate(DEF="OrbitCoordinates")

IndexedFaceSet15.coord = Coordinate16

Shape12.geometry = IndexedFaceSet15

Transform11.children.append(Shape12)

Scene6.children.append(Transform11)
Script17 = x3d.Script(DEF="OrbitScript")
field18 = x3d.field()
field18.accessType = "inputOnly"
field18.type = "SFFloat"
field18.name = "set_fraction"

Script17.field.append(field18)
field19 = x3d.field()
field19.accessType = "outputOnly"
field19.type = "MFVec3f"
field19.name = "coordinates"

Script17.field.append(field19)
field20 = x3d.field()
field20.accessType = "outputOnly"
field20.type = "MFInt32"
field20.name = "coordIndexes"

Script17.field.append(field20)

Script17.sourceCode = '''ecmascript:\n"+
"    \n"+
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
"     var localci = new MFInt32();\n"+
"     var arrIndex = 0;\n"+
"     for (var i = 0; i < resolution-1; i++) {\n"+
"     	for (var j = 0; j < resolution-1; j++) {\n"+
"	     localci[arrIndex++] = i*resolution+j;\n"+
"	     localci[arrIndex++] = i*resolution+j+1;\n"+
"	     localci[arrIndex++] = (i+1)*resolution+j+1;\n"+
"	     localci[arrIndex++] = (i+1)*resolution+j;\n"+
"	     localci[arrIndex++] = -1;\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = localci;\n"+
"}\n"+
"\n"+
"function generateCoordinates(resolution) {\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var localc = new MFVec3f();\n"+
"     var arrIndex = 0;\n"+
"     for (var  i = 0; i < resolution; i++) {\n"+
"     	for (var  j = 0; j < resolution; j++) {\n"+
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		localc[arrIndex++] = new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		);\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = localc;\n"+
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

Scene6.children.append(Script17)
TimeSensor21 = x3d.TimeSensor(DEF="Clock")
TimeSensor21.cycleInterval = 16
TimeSensor21.loop = True

Scene6.children.append(TimeSensor21)
ROUTE22 = x3d.ROUTE()
ROUTE22.fromNode = "OrbitScript"
ROUTE22.fromField = "coordIndexes"
ROUTE22.toNode = "Orbit"
ROUTE22.toField = "set_coordIndex"

Scene6.children.append(ROUTE22)
ROUTE23 = x3d.ROUTE()
ROUTE23.fromNode = "OrbitScript"
ROUTE23.fromField = "coordinates"
ROUTE23.toNode = "OrbitCoordinates"
ROUTE23.toField = "set_point"

Scene6.children.append(ROUTE23)
ROUTE24 = x3d.ROUTE()
ROUTE24.fromNode = "Clock"
ROUTE24.fromField = "fraction_changed"
ROUTE24.toNode = "OrbitScript"
ROUTE24.toField = "set_fraction"

Scene6.children.append(ROUTE24)

X3D0.Scene = Scene6
f = open("../data/flower3.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/flower3.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/flower3.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
