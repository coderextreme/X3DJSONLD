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
meta7.content = "flowers7.x3d"

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
Background13 = x3d.Background(DEF="background")
Background13.frontUrl = ["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]
Background13.backUrl = ["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]
Background13.leftUrl = ["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]
Background13.rightUrl = ["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]
Background13.topUrl = ["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]
Background13.bottomUrl = ["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]

Scene11.children.append(Background13)
Viewpoint14 = x3d.Viewpoint()
Viewpoint14.description = "Transparent rose"
Viewpoint14.position = [0,0,40]

Scene11.children.append(Viewpoint14)
Transform15 = x3d.Transform()
Shape16 = x3d.Shape()
Appearance17 = x3d.Appearance()
Material18 = x3d.Material()
Material18.diffuseColor = [0.7,0.7,0.7]
Material18.specularColor = [0.5,0.5,0.5]

Appearance17.material = Material18
ComposedCubeMapTexture19 = x3d.ComposedCubeMapTexture(DEF="texture")
ImageTexture20 = x3d.ImageTexture(DEF="frontShader")
ImageTexture20.url = ["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]

ComposedCubeMapTexture19.frontTexture = ImageTexture20
ImageTexture21 = x3d.ImageTexture(DEF="backShader")
ImageTexture21.url = ["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]

ComposedCubeMapTexture19.backTexture = ImageTexture21
ImageTexture22 = x3d.ImageTexture(DEF="leftShader")
ImageTexture22.url = ["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]

ComposedCubeMapTexture19.leftTexture = ImageTexture22
ImageTexture23 = x3d.ImageTexture(DEF="rightShader")
ImageTexture23.url = ["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]

ComposedCubeMapTexture19.rightTexture = ImageTexture23
ImageTexture24 = x3d.ImageTexture(DEF="topShader")
ImageTexture24.url = ["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]

ComposedCubeMapTexture19.topTexture = ImageTexture24
ImageTexture25 = x3d.ImageTexture(DEF="bottomShader")
ImageTexture25.url = ["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]

ComposedCubeMapTexture19.bottomTexture = ImageTexture25

Appearance17.texture = ComposedCubeMapTexture19
ComposedShader26 = x3d.ComposedShader(DEF="x3dom")
ComposedShader26.language = "GLSL"
ShaderPart27 = x3d.ShaderPart()
ShaderPart27.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"]

ComposedShader26.parts.append(ShaderPart27)
ShaderPart28 = x3d.ShaderPart()
ShaderPart28.type = "FRAGMENT"
ShaderPart28.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]

ComposedShader26.parts.append(ShaderPart28)
field29 = x3d.field()
field29.accessType = "inputOutput"
field29.type = "SFNode"
field29.name = "cube"
ComposedCubeMapTexture30 = x3d.ComposedCubeMapTexture(USE="texture")

field29.children.append(ComposedCubeMapTexture30)

ComposedShader26.field.append(field29)
field31 = x3d.field()
field31.accessType = "initializeOnly"
field31.type = "SFVec3f"
field31.name = "chromaticDispertion"
field31.value = [0.98,1,1.033]

ComposedShader26.field.append(field31)
field32 = x3d.field()
field32.accessType = "inputOutput"
field32.type = "SFFloat"
field32.name = "bias"
field32.value = 0.5

ComposedShader26.field.append(field32)
field33 = x3d.field()
field33.accessType = "inputOutput"
field33.type = "SFFloat"
field33.name = "scale"
field33.value = 0.5

ComposedShader26.field.append(field33)
field34 = x3d.field()
field34.accessType = "inputOutput"
field34.type = "SFFloat"
field34.name = "power"
field34.value = 2

ComposedShader26.field.append(field34)
field35 = x3d.field()
field35.accessType = "inputOutput"
field35.type = "SFFloat"
field35.name = "a"
field35.value = 10

ComposedShader26.field.append(field35)
field36 = x3d.field()
field36.accessType = "inputOutput"
field36.type = "SFFloat"
field36.name = "b"
field36.value = 1

ComposedShader26.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOutput"
field37.type = "SFFloat"
field37.name = "c"
field37.value = 20

ComposedShader26.field.append(field37)
field38 = x3d.field()
field38.accessType = "inputOutput"
field38.type = "SFFloat"
field38.name = "d"
field38.value = 20

ComposedShader26.field.append(field38)
field39 = x3d.field()
field39.accessType = "inputOutput"
field39.type = "SFFloat"
field39.name = "tdelta"

ComposedShader26.field.append(field39)
field40 = x3d.field()
field40.accessType = "inputOutput"
field40.type = "SFFloat"
field40.name = "pdelta"

ComposedShader26.field.append(field40)

Appearance17.shaders.append(ComposedShader26)
ComposedShader41 = x3d.ComposedShader(DEF="x_ite")
ComposedShader41.language = "GLSL"
ShaderPart42 = x3d.ShaderPart()
ShaderPart42.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]

ComposedShader41.parts.append(ShaderPart42)
ShaderPart43 = x3d.ShaderPart()
ShaderPart43.type = "FRAGMENT"
ShaderPart43.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]

ComposedShader41.parts.append(ShaderPart43)
field44 = x3d.field()
field44.accessType = "inputOutput"
field44.type = "SFNode"
field44.name = "cube"
ComposedCubeMapTexture45 = x3d.ComposedCubeMapTexture(USE="texture")

field44.children.append(ComposedCubeMapTexture45)

ComposedShader41.field.append(field44)
field46 = x3d.field()
field46.accessType = "initializeOnly"
field46.type = "SFVec3f"
field46.name = "chromaticDispertion"
field46.value = [0.98,1,1.033]

ComposedShader41.field.append(field46)
field47 = x3d.field()
field47.accessType = "inputOnly"
field47.type = "SFFloat"
field47.name = "bias"

ComposedShader41.field.append(field47)
field48 = x3d.field()
field48.accessType = "inputOnly"
field48.type = "SFFloat"
field48.name = "scale"

ComposedShader41.field.append(field48)
field49 = x3d.field()
field49.accessType = "inputOnly"
field49.type = "SFFloat"
field49.name = "power"

ComposedShader41.field.append(field49)
field50 = x3d.field()
field50.accessType = "inputOnly"
field50.type = "SFFloat"
field50.name = "a"

ComposedShader41.field.append(field50)
field51 = x3d.field()
field51.accessType = "inputOnly"
field51.type = "SFFloat"
field51.name = "b"

ComposedShader41.field.append(field51)
field52 = x3d.field()
field52.accessType = "inputOnly"
field52.type = "SFFloat"
field52.name = "c"

ComposedShader41.field.append(field52)
field53 = x3d.field()
field53.accessType = "inputOnly"
field53.type = "SFFloat"
field53.name = "d"

ComposedShader41.field.append(field53)
field54 = x3d.field()
field54.accessType = "inputOnly"
field54.type = "SFFloat"
field54.name = "tdelta"

ComposedShader41.field.append(field54)
field55 = x3d.field()
field55.accessType = "inputOnly"
field55.type = "SFFloat"
field55.name = "pdelta"

ComposedShader41.field.append(field55)

Appearance17.shaders.append(ComposedShader41)

Shape16.appearance = Appearance17
Sphere56 = x3d.Sphere()

Shape16.geometry = Sphere56

Transform15.children.append(Shape16)

Scene11.children.append(Transform15)
Script57 = x3d.Script(DEF="UrlSelector")
Script57.directOutput = True
field58 = x3d.field()
field58.accessType = "initializeOnly"
field58.type = "MFString"
field58.name = "frontUrls"
field58.value = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"]

Script57.field.append(field58)
field59 = x3d.field()
field59.accessType = "initializeOnly"
field59.type = "MFString"
field59.name = "backUrls"
field59.value = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"]

Script57.field.append(field59)
field60 = x3d.field()
field60.accessType = "initializeOnly"
field60.type = "MFString"
field60.name = "leftUrls"
field60.value = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"]

Script57.field.append(field60)
field61 = x3d.field()
field61.accessType = "initializeOnly"
field61.type = "MFString"
field61.name = "rightUrls"
field61.value = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"]

Script57.field.append(field61)
field62 = x3d.field()
field62.accessType = "initializeOnly"
field62.type = "MFString"
field62.name = "topUrls"
field62.value = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"]

Script57.field.append(field62)
field63 = x3d.field()
field63.accessType = "initializeOnly"
field63.type = "MFString"
field63.name = "bottomUrls"
field63.value = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"]

Script57.field.append(field63)
field64 = x3d.field()
field64.accessType = "inputOutput"
field64.type = "MFString"
field64.name = "front"

Script57.field.append(field64)
field65 = x3d.field()
field65.accessType = "inputOutput"
field65.type = "MFString"
field65.name = "back"

Script57.field.append(field65)
field66 = x3d.field()
field66.accessType = "inputOutput"
field66.type = "MFString"
field66.name = "left"

Script57.field.append(field66)
field67 = x3d.field()
field67.accessType = "inputOutput"
field67.type = "MFString"
field67.name = "right"

Script57.field.append(field67)
field68 = x3d.field()
field68.accessType = "inputOutput"
field68.type = "MFString"
field68.name = "top"

Script57.field.append(field68)
field69 = x3d.field()
field69.accessType = "inputOutput"
field69.type = "MFString"
field69.name = "bottom"

Script57.field.append(field69)
field70 = x3d.field()
field70.accessType = "inputOnly"
field70.type = "SFFloat"
field70.name = "set_fraction"

Script57.field.append(field70)
field71 = x3d.field()
field71.accessType = "inputOutput"
field71.type = "SFInt32"
field71.name = "old"
field71.value = -1

Script57.field.append(field71)

Script57.sourceCode = '''ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"            var side = Math.floor(f*frontUrls.length);\n"+
"            if (side > frontUrls.length-1) {\n"+
"                side = 0;\n"+
"            }\n"+
"            if (side != old) {\n"+
"                    old = side;\n"+
"                    front[0] = frontUrls[side];\n"+
"                    back[0] = backUrls[side];\n"+
"                    left[0] = leftUrls[side];\n"+
"                    right[0] = rightUrls[side];\n"+
"                    top[0] = topUrls[side];\n"+
"                    bottom[0] = bottomUrls[side];\n"+
"            }\n"+
"        }'''

Scene11.children.append(Script57)
Script72 = x3d.Script(DEF="Animate")
Script72.directOutput = True
field73 = x3d.field()
field73.accessType = "inputOnly"
field73.type = "SFFloat"
field73.name = "set_fraction"

Script72.field.append(field73)
field74 = x3d.field()
field74.accessType = "inputOutput"
field74.type = "SFFloat"
field74.name = "a"
field74.value = 10

Script72.field.append(field74)
field75 = x3d.field()
field75.accessType = "inputOutput"
field75.type = "SFFloat"
field75.name = "b"
field75.value = 1

Script72.field.append(field75)
field76 = x3d.field()
field76.accessType = "inputOutput"
field76.type = "SFFloat"
field76.name = "c"
field76.value = 20

Script72.field.append(field76)
field77 = x3d.field()
field77.accessType = "inputOutput"
field77.type = "SFFloat"
field77.name = "d"
field77.value = 20

Script72.field.append(field77)
field78 = x3d.field()
field78.accessType = "inputOutput"
field78.type = "SFFloat"
field78.name = "tdelta"

Script72.field.append(field78)
field79 = x3d.field()
field79.accessType = "inputOutput"
field79.type = "SFFloat"
field79.name = "pdelta"

Script72.field.append(field79)

Script72.sourceCode = '''ecmascript:\n"+
"\n"+
"function set_fraction() {\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		a = a + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		b = b + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		c = c + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		d = d + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	tdelta = tdelta + 0.5;\n"+
"	pdelta = pdelta + 0.5;\n"+
"	if (a < 1) {\n"+
"		a = 10;\n"+
"	}\n"+
"	if (b < 1) {\n"+
"		b = 10;\n"+
"	}\n"+
"	if (c < 1) {\n"+
"		c = 4;\n"+
"	}\n"+
"	if (c > 20) {\n"+
"		c = 4;\n"+
"	}\n"+
"	if (d < 1) {\n"+
"		d = 4;\n"+
"	}\n"+
"	if (d > 20) {\n"+
"		d = 4;\n"+
"	}\n"+
"}'''

Scene11.children.append(Script72)
TimeSensor80 = x3d.TimeSensor(DEF="TourTime")
TimeSensor80.cycleInterval = 5
TimeSensor80.loop = True

Scene11.children.append(TimeSensor80)
ROUTE81 = x3d.ROUTE()
ROUTE81.fromNode = "TourTime"
ROUTE81.fromField = "fraction_changed"
ROUTE81.toNode = "Animate"
ROUTE81.toField = "set_fraction"

Scene11.children.append(ROUTE81)
ROUTE82 = x3d.ROUTE()
ROUTE82.fromNode = "Animate"
ROUTE82.fromField = "a_changed"
ROUTE82.toNode = "x_ite"
ROUTE82.toField = "a"

Scene11.children.append(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.fromNode = "Animate"
ROUTE83.fromField = "b_changed"
ROUTE83.toNode = "x_ite"
ROUTE83.toField = "b"

Scene11.children.append(ROUTE83)
ROUTE84 = x3d.ROUTE()
ROUTE84.fromNode = "Animate"
ROUTE84.fromField = "c_changed"
ROUTE84.toNode = "x_ite"
ROUTE84.toField = "c"

Scene11.children.append(ROUTE84)
ROUTE85 = x3d.ROUTE()
ROUTE85.fromNode = "Animate"
ROUTE85.fromField = "d_changed"
ROUTE85.toNode = "x_ite"
ROUTE85.toField = "d"

Scene11.children.append(ROUTE85)
ROUTE86 = x3d.ROUTE()
ROUTE86.fromNode = "Animate"
ROUTE86.fromField = "pdelta_changed"
ROUTE86.toNode = "x_ite"
ROUTE86.toField = "pdelta"

Scene11.children.append(ROUTE86)
ROUTE87 = x3d.ROUTE()
ROUTE87.fromNode = "Animate"
ROUTE87.fromField = "tdelta_changed"
ROUTE87.toNode = "x_ite"
ROUTE87.toField = "tdelta"

Scene11.children.append(ROUTE87)
ROUTE88 = x3d.ROUTE()
ROUTE88.fromNode = "Animate"
ROUTE88.fromField = "a_changed"
ROUTE88.toNode = "x3dom"
ROUTE88.toField = "set_a"

Scene11.children.append(ROUTE88)
ROUTE89 = x3d.ROUTE()
ROUTE89.fromNode = "Animate"
ROUTE89.fromField = "b_changed"
ROUTE89.toNode = "x3dom"
ROUTE89.toField = "set_b"

Scene11.children.append(ROUTE89)
ROUTE90 = x3d.ROUTE()
ROUTE90.fromNode = "Animate"
ROUTE90.fromField = "c_changed"
ROUTE90.toNode = "x3dom"
ROUTE90.toField = "set_c"

Scene11.children.append(ROUTE90)
ROUTE91 = x3d.ROUTE()
ROUTE91.fromNode = "Animate"
ROUTE91.fromField = "d_changed"
ROUTE91.toNode = "x3dom"
ROUTE91.toField = "set_d"

Scene11.children.append(ROUTE91)
ROUTE92 = x3d.ROUTE()
ROUTE92.fromNode = "Animate"
ROUTE92.fromField = "pdelta_changed"
ROUTE92.toNode = "x3dom"
ROUTE92.toField = "set_pdelta"

Scene11.children.append(ROUTE92)
ROUTE93 = x3d.ROUTE()
ROUTE93.fromNode = "Animate"
ROUTE93.fromField = "tdelta_changed"
ROUTE93.toNode = "x3dom"
ROUTE93.toField = "set_tdelta"

Scene11.children.append(ROUTE93)

X3D0.Scene = Scene11
f = open("../data/flowers7.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/flowers7.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/flowers7.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
