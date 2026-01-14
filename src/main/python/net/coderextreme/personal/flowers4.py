print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "Scripting"
component2.level = 1

head1.children.append(component2)
component3 = x3d.component()
component3.name = "EnvironmentalEffects"
component3.level = 3

head1.children.append(component3)
component4 = x3d.component()
component4.name = "Shaders"
component4.level = 1

head1.children.append(component4)
component5 = x3d.component()
component5.name = "CubeMapTexturing"
component5.level = 1

head1.children.append(component5)
component6 = x3d.component()
component6.name = "Texturing"
component6.level = 1

head1.children.append(component6)
component7 = x3d.component()
component7.name = "Rendering"
component7.level = 1

head1.children.append(component7)
component8 = x3d.component()
component8.name = "Shape"
component8.level = 4

head1.children.append(component8)
component9 = x3d.component()
component9.name = "Grouping"
component9.level = 3

head1.children.append(component9)
component10 = x3d.component()
component10.name = "Core"
component10.level = 1

head1.children.append(component10)
meta11 = x3d.meta()
meta11.name = "title"
meta11.content = "flowers4.x3d"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "creator"
meta12.content = "John Carlson"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "generator"
meta13.content = "manual"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "identifier"
meta14.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/flowers4.x3d"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "description"
meta15.content = "an animated flower"

head1.children.append(meta15)

X3D0.head = head1
Scene16 = x3d.Scene()
NavigationInfo17 = x3d.NavigationInfo()

Scene16.children.append(NavigationInfo17)
Background18 = x3d.Background()
Background18.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background18.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]
Background18.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background18.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background18.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background18.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

Scene16.children.append(Background18)
Transform19 = x3d.Transform()
Transform19.DEF = "transform"
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.diffuseColor = [0.7,0.7,0.7]
Material22.specularColor = [0.5,0.5,0.5]

Appearance21.material = Material22
ComposedCubeMapTexture23 = x3d.ComposedCubeMapTexture()
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture23.backTexture = ImageTexture24
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture23.bottomTexture = ImageTexture25
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture23.frontTexture = ImageTexture26
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture23.leftTexture = ImageTexture27
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture23.rightTexture = ImageTexture28
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture23.topTexture = ImageTexture29

Appearance21.texture = ComposedCubeMapTexture23
ComposedShader30 = x3d.ComposedShader()
ComposedShader30.DEF = "shader"
ComposedShader30.language = "GLSL"
field31 = x3d.field()
field31.name = "cube"
field31.type = "SFInt32"
field31.accessType = "inputOutput"
field31.value = 0

ComposedShader30.field.append(field31)
field32 = x3d.field()
field32.name = "chromaticDispertion"
field32.accessType = "inputOutput"
field32.type = "SFVec3f"
field32.value = [0.98,1,1.033]

ComposedShader30.field.append(field32)
field33 = x3d.field()
field33.name = "bias"
field33.type = "SFFloat"
field33.accessType = "inputOutput"
field33.value = 0.5

ComposedShader30.field.append(field33)
field34 = x3d.field()
field34.name = "scale"
field34.type = "SFFloat"
field34.accessType = "inputOutput"
field34.value = 0.5

ComposedShader30.field.append(field34)
field35 = x3d.field()
field35.name = "power"
field35.type = "SFFloat"
field35.accessType = "inputOutput"
field35.value = 2

ComposedShader30.field.append(field35)
ShaderPart36 = x3d.ShaderPart()
ShaderPart36.url = ["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]
ShaderPart36.type = "VERTEX"

ComposedShader30.parts.append(ShaderPart36)
ShaderPart37 = x3d.ShaderPart()
ShaderPart37.url = ["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]
ShaderPart37.type = "FRAGMENT"

ComposedShader30.parts.append(ShaderPart37)

Appearance21.shaders.append(ComposedShader30)

Shape20.appearance = Appearance21
"""<Sphere>"""
IndexedFaceSet38 = x3d.IndexedFaceSet()
IndexedFaceSet38.convex = False
IndexedFaceSet38.DEF = "Orbit"
Coordinate39 = x3d.Coordinate()
Coordinate39.DEF = "OrbitCoordinates"

IndexedFaceSet38.coord = Coordinate39

Shape20.geometry = IndexedFaceSet38

Transform19.children.append(Shape20)

Scene16.children.append(Transform19)
Script40 = x3d.Script()
Script40.DEF = "OrbitScript"
field41 = x3d.field()
field41.name = "set_fraction"
field41.accessType = "inputOnly"
field41.type = "SFFloat"

Script40.field.append(field41)
field42 = x3d.field()
field42.name = "coordinates"
field42.accessType = "inputOutput"
field42.type = "MFVec3f"

Script40.field.append(field42)
field43 = x3d.field()
field43.name = "coordIndexes"
field43.accessType = "outputOnly"
field43.type = "MFInt32"

Script40.field.append(field43)
field44 = x3d.field()
field44.name = "e"
field44.type = "SFFloat"
field44.accessType = "inputOutput"
field44.value = 5

Script40.field.append(field44)
field45 = x3d.field()
field45.name = "f"
field45.type = "SFFloat"
field45.accessType = "inputOutput"
field45.value = 5

Script40.field.append(field45)
field46 = x3d.field()
field46.name = "g"
field46.type = "SFFloat"
field46.accessType = "inputOutput"
field46.value = 5

Script40.field.append(field46)
field47 = x3d.field()
field47.name = "h"
field47.type = "SFFloat"
field47.accessType = "inputOutput"
field47.value = 5

Script40.field.append(field47)

Script40.sourceCode = '''ecmascript:\n"+
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
"    coordIndexes = new MFInt32(...cis);\n"+
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
"     coordinates = new MFVec3f(...crds);\n"+
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

Scene16.children.append(Script40)
TimeSensor48 = x3d.TimeSensor()
TimeSensor48.DEF = "Clock"
TimeSensor48.cycleInterval = 16
TimeSensor48.loop = True

Scene16.children.append(TimeSensor48)
ROUTE49 = x3d.ROUTE()
ROUTE49.fromField = "coordIndexes"
ROUTE49.fromNode = "OrbitScript"
ROUTE49.toField = "set_coordIndex"
ROUTE49.toNode = "Orbit"

Scene16.children.append(ROUTE49)
ROUTE50 = x3d.ROUTE()
ROUTE50.fromField = "coordinates"
ROUTE50.fromNode = "OrbitScript"
ROUTE50.toField = "set_point"
ROUTE50.toNode = "OrbitCoordinates"

Scene16.children.append(ROUTE50)
ROUTE51 = x3d.ROUTE()
ROUTE51.fromField = "fraction_changed"
ROUTE51.fromNode = "Clock"
ROUTE51.toField = "set_fraction"
ROUTE51.toNode = "OrbitScript"

Scene16.children.append(ROUTE51)

X3D0.Scene = Scene16
f = open("../personal/flowers4.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/flowers4.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
