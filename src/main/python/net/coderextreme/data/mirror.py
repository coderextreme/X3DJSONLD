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
component5.name = "Grouping"
component5.level = 3

head1.children.append(component5)
meta6 = x3d.meta()
meta6.name = "title"
meta6.content = "mirror.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "creator"
meta7.content = "John Carlson"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "generator"
meta8.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "generator"
meta9.content = "manual"

head1.children.append(meta9)

X3D0.head = head1
Scene10 = x3d.Scene()
Viewpoint11 = x3d.Viewpoint()
Viewpoint11.description = "Switch background and images texture"
Viewpoint11.position = [0,5,100]

Scene10.children.append(Viewpoint11)
TextureBackground12 = x3d.TextureBackground()
ImageTexture13 = x3d.ImageTexture(DEF="frontBackgroundTexture")
ImageTexture13.url = ["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]

TextureBackground12.frontTexture = ImageTexture13
ImageTexture14 = x3d.ImageTexture(DEF="backBackgroundTexture")
ImageTexture14.url = ["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]

TextureBackground12.backTexture = ImageTexture14
ImageTexture15 = x3d.ImageTexture(DEF="leftBackgroundTexture")
ImageTexture15.url = ["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]

TextureBackground12.leftTexture = ImageTexture15
ImageTexture16 = x3d.ImageTexture(DEF="rightBackgroundTexture")
ImageTexture16.url = ["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]

TextureBackground12.rightTexture = ImageTexture16
ImageTexture17 = x3d.ImageTexture(DEF="topBackgroundTexture")
ImageTexture17.url = ["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]

TextureBackground12.topTexture = ImageTexture17
ImageTexture18 = x3d.ImageTexture(DEF="bottomBackgroundTexture")
ImageTexture18.url = ["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]

TextureBackground12.bottomTexture = ImageTexture18

Scene10.children.append(TextureBackground12)
Transform19 = x3d.Transform()
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.diffuseColor = [0.7,0.7,0.7]
Material22.specularColor = [0.5,0.5,0.5]

Appearance21.material = Material22
ComposedCubeMapTexture23 = x3d.ComposedCubeMapTexture()
ImageTexture24 = x3d.ImageTexture(DEF="frontShader")
ImageTexture24.url = ["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]

ComposedCubeMapTexture23.frontTexture = ImageTexture24
ImageTexture25 = x3d.ImageTexture(DEF="backShader")
ImageTexture25.url = ["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]

ComposedCubeMapTexture23.backTexture = ImageTexture25
ImageTexture26 = x3d.ImageTexture(DEF="leftShader")
ImageTexture26.url = ["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]

ComposedCubeMapTexture23.leftTexture = ImageTexture26
ImageTexture27 = x3d.ImageTexture(DEF="rightShader")
ImageTexture27.url = ["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]

ComposedCubeMapTexture23.rightTexture = ImageTexture27
ImageTexture28 = x3d.ImageTexture(DEF="topShader")
ImageTexture28.url = ["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]

ComposedCubeMapTexture23.topTexture = ImageTexture28
ImageTexture29 = x3d.ImageTexture(DEF="bottomShader")
ImageTexture29.url = ["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]

ComposedCubeMapTexture23.bottomTexture = ImageTexture29

Appearance21.texture = ComposedCubeMapTexture23
ComposedShader30 = x3d.ComposedShader(DEF="x3dom")
ComposedShader30.language = "GLSL"
ShaderPart31 = x3d.ShaderPart()
ShaderPart31.url = ["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]

ComposedShader30.parts.append(ShaderPart31)
ShaderPart32 = x3d.ShaderPart()
ShaderPart32.type = "FRAGMENT"
ShaderPart32.url = ["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]

ComposedShader30.parts.append(ShaderPart32)
field33 = x3d.field()
field33.accessType = "inputOutput"
field33.type = "SFVec3f"
field33.name = "chromaticDispertion"
field33.value = [0.98,1,1.033]

ComposedShader30.field.append(field33)
field34 = x3d.field()
field34.accessType = "inputOutput"
field34.type = "SFInt32"
field34.name = "cube"

ComposedShader30.field.append(field34)
field35 = x3d.field()
field35.accessType = "inputOutput"
field35.type = "SFFloat"
field35.name = "bias"
field35.value = 0.5

ComposedShader30.field.append(field35)
field36 = x3d.field()
field36.accessType = "inputOutput"
field36.type = "SFFloat"
field36.name = "scale"
field36.value = 0.5

ComposedShader30.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOutput"
field37.type = "SFFloat"
field37.name = "power"
field37.value = 2

ComposedShader30.field.append(field37)

Appearance21.shaders.append(ComposedShader30)
ComposedShader38 = x3d.ComposedShader(DEF="x_ite")
ComposedShader38.language = "GLSL"
ShaderPart39 = x3d.ShaderPart()
ShaderPart39.url = ["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]

ComposedShader38.parts.append(ShaderPart39)
ShaderPart40 = x3d.ShaderPart()
ShaderPart40.type = "FRAGMENT"
ShaderPart40.url = ["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"]

ComposedShader38.parts.append(ShaderPart40)
field41 = x3d.field()
field41.accessType = "inputOutput"
field41.type = "SFVec3f"
field41.name = "chromaticDispertion"
field41.value = [0.98,1,1.033]

ComposedShader38.field.append(field41)
field42 = x3d.field()
field42.accessType = "inputOutput"
field42.type = "SFInt32"
field42.name = "cube"

ComposedShader38.field.append(field42)
field43 = x3d.field()
field43.accessType = "inputOutput"
field43.type = "SFFloat"
field43.name = "bias"
field43.value = 0.5

ComposedShader38.field.append(field43)
field44 = x3d.field()
field44.accessType = "inputOutput"
field44.type = "SFFloat"
field44.name = "scale"
field44.value = 0.5

ComposedShader38.field.append(field44)
field45 = x3d.field()
field45.accessType = "inputOutput"
field45.type = "SFFloat"
field45.name = "power"
field45.value = 2

ComposedShader38.field.append(field45)

Appearance21.shaders.append(ComposedShader38)

Shape20.appearance = Appearance21
Sphere46 = x3d.Sphere()
Sphere46.radius = 30

Shape20.geometry = Sphere46

Transform19.children.append(Shape20)
Script47 = x3d.Script(DEF="UrlSelector")
Script47.directOutput = True
field48 = x3d.field()
field48.accessType = "initializeOnly"
field48.type = "MFString"
field48.name = "frontUrls"
field48.value = ["../resources/images/all_probes/beach_cross/beach_front.png","../resources/images/all_probes/building_cross/building_front.png","../resources/images/all_probes/campus_cross/campus_front.png","../resources/images/all_probes/galileo_cross/galileo_front.png","../resources/images/all_probes/grace_cross/grace_front.png","../resources/images/all_probes/kitchen_cross/kitchen_front.png","../resources/images/all_probes/rnl_cross/rnl_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/uffizi_cross/uffizi_front.png"]

Script47.field.append(field48)
field49 = x3d.field()
field49.accessType = "initializeOnly"
field49.type = "MFString"
field49.name = "backUrls"
field49.value = ["../resources/images/all_probes/beach_cross/beach_back.png","../resources/images/all_probes/building_cross/building_back.png","../resources/images/all_probes/campus_cross/campus_back.png","../resources/images/all_probes/galileo_cross/galileo_back.png","../resources/images/all_probes/grace_cross/grace_back.png","../resources/images/all_probes/kitchen_cross/kitchen_back.png","../resources/images/all_probes/rnl_cross/rnl_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/uffizi_cross/uffizi_back.png"]

Script47.field.append(field49)
field50 = x3d.field()
field50.accessType = "initializeOnly"
field50.type = "MFString"
field50.name = "leftUrls"
field50.value = ["../resources/images/all_probes/beach_cross/beach_left.png","../resources/images/all_probes/building_cross/building_left.png","../resources/images/all_probes/campus_cross/campus_left.png","../resources/images/all_probes/galileo_cross/galileo_left.png","../resources/images/all_probes/grace_cross/grace_left.png","../resources/images/all_probes/kitchen_cross/kitchen_left.png","../resources/images/all_probes/rnl_cross/rnl_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/uffizi_cross/uffizi_left.png"]

Script47.field.append(field50)
field51 = x3d.field()
field51.accessType = "initializeOnly"
field51.type = "MFString"
field51.name = "rightUrls"
field51.value = ["../resources/images/all_probes/beach_cross/beach_right.png","../resources/images/all_probes/building_cross/building_right.png","../resources/images/all_probes/campus_cross/campus_right.png","../resources/images/all_probes/galileo_cross/galileo_right.png","../resources/images/all_probes/grace_cross/grace_right.png","../resources/images/all_probes/kitchen_cross/kitchen_right.png","../resources/images/all_probes/rnl_cross/rnl_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/uffizi_cross/uffizi_right.png"]

Script47.field.append(field51)
field52 = x3d.field()
field52.accessType = "initializeOnly"
field52.type = "MFString"
field52.name = "topUrls"
field52.value = ["../resources/images/all_probes/beach_cross/beach_top.png","../resources/images/all_probes/building_cross/building_top.png","../resources/images/all_probes/campus_cross/campus_top.png","../resources/images/all_probes/galileo_cross/galileo_top.png","../resources/images/all_probes/grace_cross/grace_top.png","../resources/images/all_probes/kitchen_cross/kitchen_top.png","../resources/images/all_probes/rnl_cross/rnl_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/uffizi_cross/uffizi_top.png"]

Script47.field.append(field52)
field53 = x3d.field()
field53.accessType = "initializeOnly"
field53.type = "MFString"
field53.name = "bottomUrls"
field53.value = ["../resources/images/all_probes/beach_cross/beach_bottom.png","../resources/images/all_probes/building_cross/building_bottom.png","../resources/images/all_probes/campus_cross/campus_bottom.png","../resources/images/all_probes/galileo_cross/galileo_bottom.png","../resources/images/all_probes/grace_cross/grace_bottom.png","../resources/images/all_probes/kitchen_cross/kitchen_bottom.png","../resources/images/all_probes/rnl_cross/rnl_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/uffizi_cross/uffizi_bottom.png"]

Script47.field.append(field53)
field54 = x3d.field()
field54.accessType = "outputOnly"
field54.type = "MFString"
field54.name = "front_changed"

Script47.field.append(field54)
field55 = x3d.field()
field55.accessType = "outputOnly"
field55.type = "MFString"
field55.name = "back_changed"

Script47.field.append(field55)
field56 = x3d.field()
field56.accessType = "outputOnly"
field56.type = "MFString"
field56.name = "left_changed"

Script47.field.append(field56)
field57 = x3d.field()
field57.accessType = "outputOnly"
field57.type = "MFString"
field57.name = "right_changed"

Script47.field.append(field57)
field58 = x3d.field()
field58.accessType = "outputOnly"
field58.type = "MFString"
field58.name = "top_changed"

Script47.field.append(field58)
field59 = x3d.field()
field59.accessType = "outputOnly"
field59.type = "MFString"
field59.name = "bottom_changed"

Script47.field.append(field59)
field60 = x3d.field()
field60.accessType = "inputOnly"
field60.type = "SFFloat"
field60.name = "set_fraction"

Script47.field.append(field60)
field61 = x3d.field()
field61.accessType = "inputOutput"
field61.type = "SFInt32"
field61.name = "old"
field61.value = -1

Script47.field.append(field61)

Script47.sourceCode = '''ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"	    var side = Math.floor(f*frontUrls.length);\n"+
"	    if (side > frontUrls.length-1) {\n"+
"	    	side = 0;\n"+
"	    }\n"+
"	    if (side != old) {\n"+
"	    	    Browser.print(f+\" \"+side);\n"+
"	    	    old = side;\n"+
"		    front_changed[0] = frontUrls[side];\n"+
"		    back_changed[0] = backUrls[side];\n"+
"		    left_changed[0] = leftUrls[side];\n"+
"		    right_changed[0] = rightUrls[side];\n"+
"		    top_changed[0] = topUrls[side];\n"+
"		    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }'''

Transform19.children.append(Script47)
TimeSensor62 = x3d.TimeSensor(DEF="Clock")
TimeSensor62.cycleInterval = 45
TimeSensor62.loop = True

Transform19.children.append(TimeSensor62)

Scene10.children.append(Transform19)
ROUTE63 = x3d.ROUTE()
ROUTE63.fromNode = "Clock"
ROUTE63.fromField = "fraction_changed"
ROUTE63.toNode = "UrlSelector"
ROUTE63.toField = "set_fraction"

Scene10.children.append(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.fromNode = "UrlSelector"
ROUTE64.fromField = "front_changed"
ROUTE64.toNode = "frontBackgroundTexture"
ROUTE64.toField = "set_url"

Scene10.children.append(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.fromNode = "UrlSelector"
ROUTE65.fromField = "back_changed"
ROUTE65.toNode = "backBackgroundTexture"
ROUTE65.toField = "set_url"

Scene10.children.append(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.fromNode = "UrlSelector"
ROUTE66.fromField = "left_changed"
ROUTE66.toNode = "leftBackgroundTexture"
ROUTE66.toField = "set_url"

Scene10.children.append(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.fromNode = "UrlSelector"
ROUTE67.fromField = "right_changed"
ROUTE67.toNode = "rightBackgroundTexture"
ROUTE67.toField = "set_url"

Scene10.children.append(ROUTE67)
ROUTE68 = x3d.ROUTE()
ROUTE68.fromNode = "UrlSelector"
ROUTE68.fromField = "top_changed"
ROUTE68.toNode = "topBackgroundTexture"
ROUTE68.toField = "set_url"

Scene10.children.append(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.fromNode = "UrlSelector"
ROUTE69.fromField = "bottom_changed"
ROUTE69.toNode = "bottomBackgroundTexture"
ROUTE69.toField = "set_url"

Scene10.children.append(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.fromNode = "UrlSelector"
ROUTE70.fromField = "front_changed"
ROUTE70.toNode = "frontShader"
ROUTE70.toField = "set_url"

Scene10.children.append(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.fromNode = "UrlSelector"
ROUTE71.fromField = "back_changed"
ROUTE71.toNode = "backShader"
ROUTE71.toField = "set_url"

Scene10.children.append(ROUTE71)
ROUTE72 = x3d.ROUTE()
ROUTE72.fromNode = "UrlSelector"
ROUTE72.fromField = "left_changed"
ROUTE72.toNode = "leftShader"
ROUTE72.toField = "set_url"

Scene10.children.append(ROUTE72)
ROUTE73 = x3d.ROUTE()
ROUTE73.fromNode = "UrlSelector"
ROUTE73.fromField = "right_changed"
ROUTE73.toNode = "rightShader"
ROUTE73.toField = "set_url"

Scene10.children.append(ROUTE73)
ROUTE74 = x3d.ROUTE()
ROUTE74.fromNode = "UrlSelector"
ROUTE74.fromField = "top_changed"
ROUTE74.toNode = "topShader"
ROUTE74.toField = "set_url"

Scene10.children.append(ROUTE74)
ROUTE75 = x3d.ROUTE()
ROUTE75.fromNode = "UrlSelector"
ROUTE75.fromField = "bottom_changed"
ROUTE75.toNode = "bottomShader"
ROUTE75.toField = "set_url"

Scene10.children.append(ROUTE75)

X3D0.Scene = Scene10
f = open("../data/mirror.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/mirror.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/mirror.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
