print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
head1.children.append(x3d.Comment("""<component name='Shape' level='4'></component>"""))
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
component8.name = "Grouping"
component8.level = 3

head1.children.append(component8)
component9 = x3d.component()
component9.name = "Core"
component9.level = 1

head1.children.append(component9)
meta10 = x3d.meta()
meta10.name = "title"
meta10.content = "mirror.x3d"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "creator"
meta11.content = "John Carlson"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "generator"
meta12.content = "manual"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "identifier"
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "description"
meta14.content = "sphere with alternating backgrounds"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
Viewpoint16 = x3d.Viewpoint()
Viewpoint16.position = [0,5,100]
Viewpoint16.description = "Switch background and images texture"

Scene15.children.append(Viewpoint16)
TextureBackground17 = x3d.TextureBackground()
ImageTexture18 = x3d.ImageTexture(DEF="leftBackgroundTexture")
ImageTexture18.url = ["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]

TextureBackground17.leftTexture = ImageTexture18
ImageTexture19 = x3d.ImageTexture(DEF="rightBackgroundTexture")
ImageTexture19.url = ["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]

TextureBackground17.rightTexture = ImageTexture19
ImageTexture20 = x3d.ImageTexture(DEF="frontBackgroundTexture")
ImageTexture20.url = ["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]

TextureBackground17.frontTexture = ImageTexture20
ImageTexture21 = x3d.ImageTexture(DEF="backBackgroundTexture")
ImageTexture21.url = ["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]

TextureBackground17.backTexture = ImageTexture21
ImageTexture22 = x3d.ImageTexture(DEF="topBackgroundTexture")
ImageTexture22.url = ["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]

TextureBackground17.topTexture = ImageTexture22
ImageTexture23 = x3d.ImageTexture(DEF="bottomBackgroundTexture")
ImageTexture23.url = ["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]

TextureBackground17.bottomTexture = ImageTexture23

Scene15.children.append(TextureBackground17)
Transform24 = x3d.Transform()
Shape25 = x3d.Shape()
Appearance26 = x3d.Appearance()
Material27 = x3d.Material()
Material27.diffuseColor = [0.7,0.7,0.7]
Material27.specularColor = [0.5,0.5,0.5]

Appearance26.material = Material27
ComposedCubeMapTexture28 = x3d.ComposedCubeMapTexture()
ImageTexture29 = x3d.ImageTexture(DEF="backShader")
ImageTexture29.url = ["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]

ComposedCubeMapTexture28.backTexture = ImageTexture29
ImageTexture30 = x3d.ImageTexture(DEF="bottomShader")
ImageTexture30.url = ["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]

ComposedCubeMapTexture28.bottomTexture = ImageTexture30
ImageTexture31 = x3d.ImageTexture(DEF="frontShader")
ImageTexture31.url = ["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]

ComposedCubeMapTexture28.frontTexture = ImageTexture31
ImageTexture32 = x3d.ImageTexture(DEF="leftShader")
ImageTexture32.url = ["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]

ComposedCubeMapTexture28.leftTexture = ImageTexture32
ImageTexture33 = x3d.ImageTexture(DEF="rightShader")
ImageTexture33.url = ["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]

ComposedCubeMapTexture28.rightTexture = ImageTexture33
ImageTexture34 = x3d.ImageTexture(DEF="topShader")
ImageTexture34.url = ["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]

ComposedCubeMapTexture28.topTexture = ImageTexture34

Appearance26.texture = ComposedCubeMapTexture28
ComposedShader35 = x3d.ComposedShader(DEF="x3dom")
ComposedShader35.language = "GLSL"
field36 = x3d.field()
field36.name = "chromaticDispertion"
field36.accessType = "inputOutput"
field36.type = "SFVec3f"
field36.value = [0.98,1,1.033]

ComposedShader35.field.append(field36)
field37 = x3d.field()
field37.name = "cube"
field37.accessType = "inputOutput"
field37.type = "SFInt32"
field37.value = 0

ComposedShader35.field.append(field37)
field38 = x3d.field()
field38.name = "bias"
field38.accessType = "inputOutput"
field38.type = "SFFloat"
field38.value = 0.5

ComposedShader35.field.append(field38)
field39 = x3d.field()
field39.name = "scale"
field39.accessType = "inputOutput"
field39.type = "SFFloat"
field39.value = 0.5

ComposedShader35.field.append(field39)
field40 = x3d.field()
field40.name = "power"
field40.accessType = "inputOutput"
field40.type = "SFFloat"
field40.value = 2

ComposedShader35.field.append(field40)
ShaderPart41 = x3d.ShaderPart()
ShaderPart41.url = ["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]
ShaderPart41.type = "VERTEX"

ComposedShader35.parts.append(ShaderPart41)
ShaderPart42 = x3d.ShaderPart()
ShaderPart42.url = ["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]
ShaderPart42.type = "FRAGMENT"

ComposedShader35.parts.append(ShaderPart42)

Appearance26.shaders.append(ComposedShader35)
ComposedShader43 = x3d.ComposedShader(DEF="x_ite")
ComposedShader43.language = "GLSL"
ComposedShader43.children.append(x3d.Comment("""http://hypertextbook.com/facts/2005/JustinChe.shtml"""))
field44 = x3d.field()
field44.name = "chromaticDispertion"
field44.accessType = "inputOutput"
field44.type = "SFVec3f"
field44.value = [0.98,1,1.033]

ComposedShader43.field.append(field44)
field45 = x3d.field()
field45.name = "cube"
field45.accessType = "inputOutput"
field45.type = "SFInt32"
field45.value = 0

ComposedShader43.field.append(field45)
field46 = x3d.field()
field46.name = "bias"
field46.accessType = "inputOutput"
field46.type = "SFFloat"
field46.value = 0.5

ComposedShader43.field.append(field46)
field47 = x3d.field()
field47.name = "scale"
field47.accessType = "inputOutput"
field47.type = "SFFloat"
field47.value = 0.5

ComposedShader43.field.append(field47)
field48 = x3d.field()
field48.name = "power"
field48.accessType = "inputOutput"
field48.type = "SFFloat"
field48.value = 2

ComposedShader43.field.append(field48)
ShaderPart49 = x3d.ShaderPart()
ShaderPart49.url = ["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]
ShaderPart49.type = "VERTEX"

ComposedShader43.parts.append(ShaderPart49)
ShaderPart50 = x3d.ShaderPart()
ShaderPart50.url = ["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"]
ShaderPart50.type = "FRAGMENT"

ComposedShader43.parts.append(ShaderPart50)

Appearance26.shaders.append(ComposedShader43)

Shape25.appearance = Appearance26
Sphere51 = x3d.Sphere()
Sphere51.radius = 30

Shape25.geometry = Sphere51

Transform24.children.append(Shape25)
Script52 = x3d.Script(DEF="UrlSelector")
Script52.directOutput = True
field53 = x3d.field()
field53.name = "frontUrls"
field53.type = "MFString"
field53.accessType = "initializeOnly"
field53.value = ["../resources/images/all_probes/beach_cross/beach_front.png","../resources/images/all_probes/building_cross/building_front.png","../resources/images/all_probes/campus_cross/campus_front.png","../resources/images/all_probes/galileo_cross/galileo_front.png","../resources/images/all_probes/grace_cross/grace_front.png","../resources/images/all_probes/kitchen_cross/kitchen_front.png","../resources/images/all_probes/rnl_cross/rnl_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/uffizi_cross/uffizi_front.png"]

Script52.field.append(field53)
field54 = x3d.field()
field54.name = "backUrls"
field54.type = "MFString"
field54.accessType = "initializeOnly"
field54.value = ["../resources/images/all_probes/beach_cross/beach_back.png","../resources/images/all_probes/building_cross/building_back.png","../resources/images/all_probes/campus_cross/campus_back.png","../resources/images/all_probes/galileo_cross/galileo_back.png","../resources/images/all_probes/grace_cross/grace_back.png","../resources/images/all_probes/kitchen_cross/kitchen_back.png","../resources/images/all_probes/rnl_cross/rnl_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/uffizi_cross/uffizi_back.png"]

Script52.field.append(field54)
field55 = x3d.field()
field55.name = "leftUrls"
field55.type = "MFString"
field55.accessType = "initializeOnly"
field55.value = ["../resources/images/all_probes/beach_cross/beach_left.png","../resources/images/all_probes/building_cross/building_left.png","../resources/images/all_probes/campus_cross/campus_left.png","../resources/images/all_probes/galileo_cross/galileo_left.png","../resources/images/all_probes/grace_cross/grace_left.png","../resources/images/all_probes/kitchen_cross/kitchen_left.png","../resources/images/all_probes/rnl_cross/rnl_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/uffizi_cross/uffizi_left.png"]

Script52.field.append(field55)
field56 = x3d.field()
field56.name = "rightUrls"
field56.type = "MFString"
field56.accessType = "initializeOnly"
field56.value = ["../resources/images/all_probes/beach_cross/beach_right.png","../resources/images/all_probes/building_cross/building_right.png","../resources/images/all_probes/campus_cross/campus_right.png","../resources/images/all_probes/galileo_cross/galileo_right.png","../resources/images/all_probes/grace_cross/grace_right.png","../resources/images/all_probes/kitchen_cross/kitchen_right.png","../resources/images/all_probes/rnl_cross/rnl_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/uffizi_cross/uffizi_right.png"]

Script52.field.append(field56)
field57 = x3d.field()
field57.name = "topUrls"
field57.type = "MFString"
field57.accessType = "initializeOnly"
field57.value = ["../resources/images/all_probes/beach_cross/beach_top.png","../resources/images/all_probes/building_cross/building_top.png","../resources/images/all_probes/campus_cross/campus_top.png","../resources/images/all_probes/galileo_cross/galileo_top.png","../resources/images/all_probes/grace_cross/grace_top.png","../resources/images/all_probes/kitchen_cross/kitchen_top.png","../resources/images/all_probes/rnl_cross/rnl_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/uffizi_cross/uffizi_top.png"]

Script52.field.append(field57)
field58 = x3d.field()
field58.name = "bottomUrls"
field58.type = "MFString"
field58.accessType = "initializeOnly"
field58.value = ["../resources/images/all_probes/beach_cross/beach_bottom.png","../resources/images/all_probes/building_cross/building_bottom.png","../resources/images/all_probes/campus_cross/campus_bottom.png","../resources/images/all_probes/galileo_cross/galileo_bottom.png","../resources/images/all_probes/grace_cross/grace_bottom.png","../resources/images/all_probes/kitchen_cross/kitchen_bottom.png","../resources/images/all_probes/rnl_cross/rnl_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/uffizi_cross/uffizi_bottom.png"]

Script52.field.append(field58)
field59 = x3d.field()
field59.name = "front_changed"
field59.type = "MFString"
field59.accessType = "outputOnly"

Script52.field.append(field59)
field60 = x3d.field()
field60.name = "back_changed"
field60.type = "MFString"
field60.accessType = "outputOnly"

Script52.field.append(field60)
field61 = x3d.field()
field61.name = "left_changed"
field61.type = "MFString"
field61.accessType = "outputOnly"

Script52.field.append(field61)
field62 = x3d.field()
field62.name = "right_changed"
field62.type = "MFString"
field62.accessType = "outputOnly"

Script52.field.append(field62)
field63 = x3d.field()
field63.name = "top_changed"
field63.type = "MFString"
field63.accessType = "outputOnly"

Script52.field.append(field63)
field64 = x3d.field()
field64.name = "bottom_changed"
field64.type = "MFString"
field64.accessType = "outputOnly"

Script52.field.append(field64)
field65 = x3d.field()
field65.name = "set_fraction"
field65.type = "SFFloat"
field65.accessType = "inputOnly"

Script52.field.append(field65)
field66 = x3d.field()
field66.name = "old"
field66.type = "SFInt32"
field66.accessType = "inputOutput"
field66.value = -1

Script52.field.append(field66)

Script52.sourceCode = '''ecmascript:\n"+
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

Transform24.children.append(Script52)
TimeSensor67 = x3d.TimeSensor(DEF="Clock")
TimeSensor67.cycleInterval = 45
TimeSensor67.loop = True

Transform24.children.append(TimeSensor67)
ROUTE68 = x3d.ROUTE()
ROUTE68.fromNode = "Clock"
ROUTE68.fromField = "fraction_changed"
ROUTE68.toNode = "UrlSelector"
ROUTE68.toField = "set_fraction"

Transform24.children.append(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.fromNode = "UrlSelector"
ROUTE69.fromField = "front_changed"
ROUTE69.toNode = "frontBackgroundTexture"
ROUTE69.toField = "url"

Transform24.children.append(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.fromNode = "UrlSelector"
ROUTE70.fromField = "back_changed"
ROUTE70.toNode = "backBackgroundTexture"
ROUTE70.toField = "url"

Transform24.children.append(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.fromNode = "UrlSelector"
ROUTE71.fromField = "left_changed"
ROUTE71.toNode = "leftBackgroundTexture"
ROUTE71.toField = "url"

Transform24.children.append(ROUTE71)
ROUTE72 = x3d.ROUTE()
ROUTE72.fromNode = "UrlSelector"
ROUTE72.fromField = "right_changed"
ROUTE72.toNode = "rightBackgroundTexture"
ROUTE72.toField = "url"

Transform24.children.append(ROUTE72)
ROUTE73 = x3d.ROUTE()
ROUTE73.fromNode = "UrlSelector"
ROUTE73.fromField = "top_changed"
ROUTE73.toNode = "topBackgroundTexture"
ROUTE73.toField = "url"

Transform24.children.append(ROUTE73)
ROUTE74 = x3d.ROUTE()
ROUTE74.fromNode = "UrlSelector"
ROUTE74.fromField = "bottom_changed"
ROUTE74.toNode = "bottomBackgroundTexture"
ROUTE74.toField = "url"

Transform24.children.append(ROUTE74)
ROUTE75 = x3d.ROUTE()
ROUTE75.fromNode = "UrlSelector"
ROUTE75.fromField = "front_changed"
ROUTE75.toNode = "frontShader"
ROUTE75.toField = "url"

Transform24.children.append(ROUTE75)
ROUTE76 = x3d.ROUTE()
ROUTE76.fromNode = "UrlSelector"
ROUTE76.fromField = "back_changed"
ROUTE76.toNode = "backShader"
ROUTE76.toField = "url"

Transform24.children.append(ROUTE76)
ROUTE77 = x3d.ROUTE()
ROUTE77.fromNode = "UrlSelector"
ROUTE77.fromField = "left_changed"
ROUTE77.toNode = "leftShader"
ROUTE77.toField = "url"

Transform24.children.append(ROUTE77)
ROUTE78 = x3d.ROUTE()
ROUTE78.fromNode = "UrlSelector"
ROUTE78.fromField = "right_changed"
ROUTE78.toNode = "rightShader"
ROUTE78.toField = "url"

Transform24.children.append(ROUTE78)
ROUTE79 = x3d.ROUTE()
ROUTE79.fromNode = "UrlSelector"
ROUTE79.fromField = "top_changed"
ROUTE79.toNode = "topShader"
ROUTE79.toField = "url"

Transform24.children.append(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.fromNode = "UrlSelector"
ROUTE80.fromField = "bottom_changed"
ROUTE80.toNode = "bottomShader"
ROUTE80.toField = "url"

Transform24.children.append(ROUTE80)

Scene15.children.append(Transform24)

X3D0.Scene = Scene15
f = open("../data/mirror.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/mirror.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/mirror.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
