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
meta6.content = "mirror2.x3d"

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
Background12 = x3d.Background(DEF="cube")
Background12.frontUrl = ["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]
Background12.backUrl = ["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]
Background12.leftUrl = ["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]
Background12.rightUrl = ["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]
Background12.topUrl = ["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]
Background12.bottomUrl = ["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]

Scene10.children.append(Background12)
Transform13 = x3d.Transform()
Shape14 = x3d.Shape()
Appearance15 = x3d.Appearance()
Material16 = x3d.Material()
Material16.diffuseColor = [0.7,0.7,0.7]
Material16.specularColor = [0.5,0.5,0.5]

Appearance15.material = Material16
ComposedCubeMapTexture17 = x3d.ComposedCubeMapTexture()
ImageTexture18 = x3d.ImageTexture(DEF="frontShader")
ImageTexture18.url = ["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]

ComposedCubeMapTexture17.frontTexture = ImageTexture18
ImageTexture19 = x3d.ImageTexture(DEF="backShader")
ImageTexture19.url = ["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]

ComposedCubeMapTexture17.backTexture = ImageTexture19
ImageTexture20 = x3d.ImageTexture(DEF="leftShader")
ImageTexture20.url = ["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]

ComposedCubeMapTexture17.leftTexture = ImageTexture20
ImageTexture21 = x3d.ImageTexture(DEF="rightShader")
ImageTexture21.url = ["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]

ComposedCubeMapTexture17.rightTexture = ImageTexture21
ImageTexture22 = x3d.ImageTexture(DEF="topShader")
ImageTexture22.url = ["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]

ComposedCubeMapTexture17.topTexture = ImageTexture22
ImageTexture23 = x3d.ImageTexture(DEF="bottomShader")
ImageTexture23.url = ["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]

ComposedCubeMapTexture17.bottomTexture = ImageTexture23

Appearance15.texture = ComposedCubeMapTexture17
ComposedShader24 = x3d.ComposedShader(DEF="x_ite")
ComposedShader24.language = "GLSL"
ShaderPart25 = x3d.ShaderPart()
ShaderPart25.url = ["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]

ComposedShader24.parts.append(ShaderPart25)
ShaderPart26 = x3d.ShaderPart()
ShaderPart26.type = "FRAGMENT"
ShaderPart26.url = ["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"]

ComposedShader24.parts.append(ShaderPart26)
field27 = x3d.field()
field27.accessType = "inputOutput"
field27.type = "SFVec3f"
field27.name = "chromaticDispertion"
field27.value = [0.98,1,1.033]

ComposedShader24.field.append(field27)
field28 = x3d.field()
field28.accessType = "inputOutput"
field28.type = "SFInt32"
field28.name = "cube"

ComposedShader24.field.append(field28)
field29 = x3d.field()
field29.accessType = "inputOutput"
field29.type = "SFFloat"
field29.name = "bias"
field29.value = 0.5

ComposedShader24.field.append(field29)
field30 = x3d.field()
field30.accessType = "inputOutput"
field30.type = "SFFloat"
field30.name = "scale"
field30.value = 0.5

ComposedShader24.field.append(field30)
field31 = x3d.field()
field31.accessType = "inputOutput"
field31.type = "SFFloat"
field31.name = "power"
field31.value = 2

ComposedShader24.field.append(field31)

Appearance15.shaders.append(ComposedShader24)
ComposedShader32 = x3d.ComposedShader(DEF="x3dom")
ComposedShader32.language = "GLSL"
ShaderPart33 = x3d.ShaderPart()
ShaderPart33.url = ["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]

ComposedShader32.parts.append(ShaderPart33)
ShaderPart34 = x3d.ShaderPart()
ShaderPart34.type = "FRAGMENT"
ShaderPart34.url = ["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]

ComposedShader32.parts.append(ShaderPart34)
field35 = x3d.field()
field35.accessType = "inputOutput"
field35.type = "SFVec3f"
field35.name = "chromaticDispertion"
field35.value = [0.98,1,1.033]

ComposedShader32.field.append(field35)
field36 = x3d.field()
field36.accessType = "inputOutput"
field36.type = "SFInt32"
field36.name = "cube"

ComposedShader32.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOutput"
field37.type = "SFFloat"
field37.name = "bias"
field37.value = 0.5

ComposedShader32.field.append(field37)
field38 = x3d.field()
field38.accessType = "inputOutput"
field38.type = "SFFloat"
field38.name = "scale"
field38.value = 0.5

ComposedShader32.field.append(field38)
field39 = x3d.field()
field39.accessType = "inputOutput"
field39.type = "SFFloat"
field39.name = "power"
field39.value = 2

ComposedShader32.field.append(field39)

Appearance15.shaders.append(ComposedShader32)

Shape14.appearance = Appearance15
Sphere40 = x3d.Sphere()
Sphere40.radius = 30

Shape14.geometry = Sphere40

Transform13.children.append(Shape14)
Script41 = x3d.Script(DEF="UrlSelector")
Script41.directOutput = True
field42 = x3d.field()
field42.accessType = "initializeOnly"
field42.type = "MFString"
field42.name = "frontUrls"
field42.value = ["../resources/images/all_probes/beach_cross/beach_front.png","../resources/images/all_probes/building_cross/building_front.png","../resources/images/all_probes/campus_cross/campus_front.png","../resources/images/all_probes/galileo_cross/galileo_front.png","../resources/images/all_probes/grace_cross/grace_front.png","../resources/images/all_probes/kitchen_cross/kitchen_front.png","../resources/images/all_probes/rnl_cross/rnl_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/uffizi_cross/uffizi_front.png"]

Script41.field.append(field42)
field43 = x3d.field()
field43.accessType = "initializeOnly"
field43.type = "MFString"
field43.name = "backUrls"
field43.value = ["../resources/images/all_probes/beach_cross/beach_back.png","../resources/images/all_probes/building_cross/building_back.png","../resources/images/all_probes/campus_cross/campus_back.png","../resources/images/all_probes/galileo_cross/galileo_back.png","../resources/images/all_probes/grace_cross/grace_back.png","../resources/images/all_probes/kitchen_cross/kitchen_back.png","../resources/images/all_probes/rnl_cross/rnl_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/uffizi_cross/uffizi_back.png"]

Script41.field.append(field43)
field44 = x3d.field()
field44.accessType = "initializeOnly"
field44.type = "MFString"
field44.name = "leftUrls"
field44.value = ["../resources/images/all_probes/beach_cross/beach_left.png","../resources/images/all_probes/building_cross/building_left.png","../resources/images/all_probes/campus_cross/campus_left.png","../resources/images/all_probes/galileo_cross/galileo_left.png","../resources/images/all_probes/grace_cross/grace_left.png","../resources/images/all_probes/kitchen_cross/kitchen_left.png","../resources/images/all_probes/rnl_cross/rnl_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/uffizi_cross/uffizi_left.png"]

Script41.field.append(field44)
field45 = x3d.field()
field45.accessType = "initializeOnly"
field45.type = "MFString"
field45.name = "rightUrls"
field45.value = ["../resources/images/all_probes/beach_cross/beach_right.png","../resources/images/all_probes/building_cross/building_right.png","../resources/images/all_probes/campus_cross/campus_right.png","../resources/images/all_probes/galileo_cross/galileo_right.png","../resources/images/all_probes/grace_cross/grace_right.png","../resources/images/all_probes/kitchen_cross/kitchen_right.png","../resources/images/all_probes/rnl_cross/rnl_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/uffizi_cross/uffizi_right.png"]

Script41.field.append(field45)
field46 = x3d.field()
field46.accessType = "initializeOnly"
field46.type = "MFString"
field46.name = "topUrls"
field46.value = ["../resources/images/all_probes/beach_cross/beach_top.png","../resources/images/all_probes/building_cross/building_top.png","../resources/images/all_probes/campus_cross/campus_top.png","../resources/images/all_probes/galileo_cross/galileo_top.png","../resources/images/all_probes/grace_cross/grace_top.png","../resources/images/all_probes/kitchen_cross/kitchen_top.png","../resources/images/all_probes/rnl_cross/rnl_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/uffizi_cross/uffizi_top.png"]

Script41.field.append(field46)
field47 = x3d.field()
field47.accessType = "initializeOnly"
field47.type = "MFString"
field47.name = "bottomUrls"
field47.value = ["../resources/images/all_probes/beach_cross/beach_bottom.png","../resources/images/all_probes/building_cross/building_bottom.png","../resources/images/all_probes/campus_cross/campus_bottom.png","../resources/images/all_probes/galileo_cross/galileo_bottom.png","../resources/images/all_probes/grace_cross/grace_bottom.png","../resources/images/all_probes/kitchen_cross/kitchen_bottom.png","../resources/images/all_probes/rnl_cross/rnl_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/uffizi_cross/uffizi_bottom.png"]

Script41.field.append(field47)
field48 = x3d.field()
field48.accessType = "outputOnly"
field48.type = "MFString"
field48.name = "front_changed"

Script41.field.append(field48)
field49 = x3d.field()
field49.accessType = "outputOnly"
field49.type = "MFString"
field49.name = "back_changed"

Script41.field.append(field49)
field50 = x3d.field()
field50.accessType = "outputOnly"
field50.type = "MFString"
field50.name = "left_changed"

Script41.field.append(field50)
field51 = x3d.field()
field51.accessType = "outputOnly"
field51.type = "MFString"
field51.name = "right_changed"

Script41.field.append(field51)
field52 = x3d.field()
field52.accessType = "outputOnly"
field52.type = "MFString"
field52.name = "top_changed"

Script41.field.append(field52)
field53 = x3d.field()
field53.accessType = "outputOnly"
field53.type = "MFString"
field53.name = "bottom_changed"

Script41.field.append(field53)
field54 = x3d.field()
field54.accessType = "inputOnly"
field54.type = "SFFloat"
field54.name = "set_fraction"

Script41.field.append(field54)
field55 = x3d.field()
field55.accessType = "inputOutput"
field55.type = "SFInt32"
field55.name = "old"
field55.value = -1

Script41.field.append(field55)

Script41.sourceCode = '''ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"	    var side = Math.floor(f*frontUrls.length);\n"+
"	    if (side > frontUrls.length-1) {\n"+
"	    	side = 0;\n"+
"	    }\n"+
"	    if (side != old) {\n"+
"	    	    // Browser.print(f+\" \"+side);\n"+
"	    	    old = side;\n"+
"		    front_changed[0] = frontUrls[side];\n"+
"		    back_changed[0] = backUrls[side];\n"+
"		    left_changed[0] = leftUrls[side];\n"+
"		    right_changed[0] = rightUrls[side];\n"+
"		    top_changed[0] = topUrls[side];\n"+
"		    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }'''

Transform13.children.append(Script41)
TimeSensor56 = x3d.TimeSensor(DEF="Clock")
TimeSensor56.cycleInterval = 45
TimeSensor56.loop = True

Transform13.children.append(TimeSensor56)

Scene10.children.append(Transform13)
ROUTE57 = x3d.ROUTE()
ROUTE57.fromNode = "Clock"
ROUTE57.fromField = "fraction_changed"
ROUTE57.toNode = "UrlSelector"
ROUTE57.toField = "set_fraction"

Scene10.children.append(ROUTE57)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromNode = "UrlSelector"
ROUTE58.fromField = "front_changed"
ROUTE58.toNode = "cube"
ROUTE58.toField = "set_frontUrl"

Scene10.children.append(ROUTE58)
ROUTE59 = x3d.ROUTE()
ROUTE59.fromNode = "UrlSelector"
ROUTE59.fromField = "back_changed"
ROUTE59.toNode = "cube"
ROUTE59.toField = "set_backUrl"

Scene10.children.append(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.fromNode = "UrlSelector"
ROUTE60.fromField = "left_changed"
ROUTE60.toNode = "cube"
ROUTE60.toField = "set_leftUrl"

Scene10.children.append(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.fromNode = "UrlSelector"
ROUTE61.fromField = "right_changed"
ROUTE61.toNode = "cube"
ROUTE61.toField = "set_rightUrl"

Scene10.children.append(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.fromNode = "UrlSelector"
ROUTE62.fromField = "top_changed"
ROUTE62.toNode = "cube"
ROUTE62.toField = "set_topUrl"

Scene10.children.append(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.fromNode = "UrlSelector"
ROUTE63.fromField = "bottom_changed"
ROUTE63.toNode = "cube"
ROUTE63.toField = "set_bottomUrl"

Scene10.children.append(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.fromNode = "UrlSelector"
ROUTE64.fromField = "front_changed"
ROUTE64.toNode = "frontShader"
ROUTE64.toField = "set_url"

Scene10.children.append(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.fromNode = "UrlSelector"
ROUTE65.fromField = "back_changed"
ROUTE65.toNode = "backShader"
ROUTE65.toField = "set_url"

Scene10.children.append(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.fromNode = "UrlSelector"
ROUTE66.fromField = "left_changed"
ROUTE66.toNode = "leftShader"
ROUTE66.toField = "set_url"

Scene10.children.append(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.fromNode = "UrlSelector"
ROUTE67.fromField = "right_changed"
ROUTE67.toNode = "rightShader"
ROUTE67.toField = "set_url"

Scene10.children.append(ROUTE67)
ROUTE68 = x3d.ROUTE()
ROUTE68.fromNode = "UrlSelector"
ROUTE68.fromField = "top_changed"
ROUTE68.toNode = "topShader"
ROUTE68.toField = "set_url"

Scene10.children.append(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.fromNode = "UrlSelector"
ROUTE69.fromField = "bottom_changed"
ROUTE69.toNode = "bottomShader"
ROUTE69.toField = "set_url"

Scene10.children.append(ROUTE69)

X3D0.Scene = Scene10
f = open("../data/mirror2.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/mirror2.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/mirror2.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
