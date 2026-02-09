print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "EnvironmentalEffects"
component2.level = 3

head1.children.append(component2)
component3 = x3d.component()
component3.name = "Shaders"
component3.level = 1

head1.children.append(component3)
component4 = x3d.component()
component4.name = "CubeMapTexturing"
component4.level = 1

head1.children.append(component4)
component5 = x3d.component()
component5.name = "Shape"
component5.level = 4

head1.children.append(component5)
component6 = x3d.component()
component6.name = "Grouping"
component6.level = 3

head1.children.append(component6)
meta7 = x3d.meta()
meta7.name = "title"
meta7.content = "flowers4.x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "creator"
meta8.content = "John Carlson"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "generator"
meta9.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "generator"
meta10.content = "manual"

head1.children.append(meta10)

X3D0.head = head1
Scene11 = x3d.Scene()
NavigationInfo12 = x3d.NavigationInfo()

Scene11.children.append(NavigationInfo12)
Background13 = x3d.Background()
Background13.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background13.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background13.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background13.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background13.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]
Background13.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

Scene11.children.append(Background13)
Transform14 = x3d.Transform(DEF="transform")
Shape15 = x3d.Shape()
Appearance16 = x3d.Appearance()
Material17 = x3d.Material()
Material17.diffuseColor = [0.7,0.7,0.7]
Material17.specularColor = [0.5,0.5,0.5]

Appearance16.material = Material17
ComposedCubeMapTexture18 = x3d.ComposedCubeMapTexture()
ImageTexture19 = x3d.ImageTexture()
ImageTexture19.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture18.frontTexture = ImageTexture19
ImageTexture20 = x3d.ImageTexture()
ImageTexture20.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture18.backTexture = ImageTexture20
ImageTexture21 = x3d.ImageTexture()
ImageTexture21.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture18.leftTexture = ImageTexture21
ImageTexture22 = x3d.ImageTexture()
ImageTexture22.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture18.rightTexture = ImageTexture22
ImageTexture23 = x3d.ImageTexture()
ImageTexture23.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture18.topTexture = ImageTexture23
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture18.bottomTexture = ImageTexture24

Appearance16.texture = ComposedCubeMapTexture18
ComposedShader25 = x3d.ComposedShader(DEF="shader")
ComposedShader25.language = "GLSL"
ShaderPart26 = x3d.ShaderPart()
ShaderPart26.url = ["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]

ComposedShader25.parts.append(ShaderPart26)
ShaderPart27 = x3d.ShaderPart()
ShaderPart27.type = "FRAGMENT"
ShaderPart27.url = ["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]

ComposedShader25.parts.append(ShaderPart27)
field28 = x3d.field()
field28.accessType = "inputOutput"
field28.type = "SFInt32"
field28.name = "cube"

ComposedShader25.field.append(field28)
field29 = x3d.field()
field29.accessType = "inputOutput"
field29.type = "SFVec3f"
field29.name = "chromaticDispertion"
field29.value = [0.98,1,1.033]

ComposedShader25.field.append(field29)
field30 = x3d.field()
field30.accessType = "inputOutput"
field30.type = "SFFloat"
field30.name = "bias"
field30.value = 0.5

ComposedShader25.field.append(field30)
field31 = x3d.field()
field31.accessType = "inputOutput"
field31.type = "SFFloat"
field31.name = "scale"
field31.value = 0.5

ComposedShader25.field.append(field31)
field32 = x3d.field()
field32.accessType = "inputOutput"
field32.type = "SFFloat"
field32.name = "power"
field32.value = 2

ComposedShader25.field.append(field32)

Appearance16.shaders.append(ComposedShader25)

Shape15.appearance = Appearance16
IndexedFaceSet33 = x3d.IndexedFaceSet(DEF="Orbit")
IndexedFaceSet33.convex = False
Coordinate34 = x3d.Coordinate(DEF="OrbitCoordinates")

IndexedFaceSet33.coord = Coordinate34

Shape15.geometry = IndexedFaceSet33

Transform14.children.append(Shape15)

Scene11.children.append(Transform14)
Script35 = x3d.Script(DEF="OrbitScript")
field36 = x3d.field()
field36.accessType = "inputOnly"
field36.type = "SFFloat"
field36.name = "set_fraction"

Script35.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOutput"
field37.type = "MFVec3f"
field37.name = "coordinates"

Script35.field.append(field37)
field38 = x3d.field()
field38.accessType = "outputOnly"
field38.type = "MFInt32"
field38.name = "coordIndexes"

Script35.field.append(field38)
field39 = x3d.field()
field39.accessType = "inputOutput"
field39.type = "SFFloat"
field39.name = "e"
field39.value = 5

Script35.field.append(field39)
field40 = x3d.field()
field40.accessType = "inputOutput"
field40.type = "SFFloat"
field40.name = "f"
field40.value = 5

Script35.field.append(field40)
field41 = x3d.field()
field41.accessType = "inputOutput"
field41.type = "SFFloat"
field41.name = "g"
field41.value = 5

Script35.field.append(field41)
field42 = x3d.field()
field42.accessType = "inputOutput"
field42.type = "SFFloat"
field42.name = "h"
field42.value = 5

Script35.field.append(field42)

Script35.sourceCode = '''ecmascript:\n"+
"function initialize() {\n"+
"     var resolution = 100;\n"+
"     updateCoordinates(resolution);\n"+
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
"function updateCoordinates(resolution) {\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var localc = new MFVec3f();\n"+
"     var arrIndex = 0;\n"+
"     for (var i = 0; i < resolution; i++) {\n"+
"     	for (var j = 0; j < resolution; j++) {\n"+
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
"	if (e < 1) {\n"+
"		e = 10;\n"+
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
"}'''

Scene11.children.append(Script35)
TimeSensor43 = x3d.TimeSensor(DEF="Clock")
TimeSensor43.cycleInterval = 16
TimeSensor43.loop = True

Scene11.children.append(TimeSensor43)
ROUTE44 = x3d.ROUTE()
ROUTE44.fromNode = "OrbitScript"
ROUTE44.fromField = "coordIndexes"
ROUTE44.toNode = "Orbit"
ROUTE44.toField = "set_coordIndex"

Scene11.children.append(ROUTE44)
ROUTE45 = x3d.ROUTE()
ROUTE45.fromNode = "OrbitScript"
ROUTE45.fromField = "coordinates_changed"
ROUTE45.toNode = "OrbitCoordinates"
ROUTE45.toField = "set_point"

Scene11.children.append(ROUTE45)
ROUTE46 = x3d.ROUTE()
ROUTE46.fromNode = "Clock"
ROUTE46.fromField = "fraction_changed"
ROUTE46.toNode = "OrbitScript"
ROUTE46.toField = "set_fraction"

Scene11.children.append(ROUTE46)

X3D0.Scene = Scene11
f = open("../data/flowers4.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/flowers4.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/flowers4.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
