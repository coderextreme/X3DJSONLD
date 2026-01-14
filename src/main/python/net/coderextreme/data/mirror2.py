print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
"""<component name='Shape' level='4'></component>"""
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
meta10.content = "mirror2.x3d"

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
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "description"
meta14.content = "a mirrored sphere"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
Viewpoint16 = x3d.Viewpoint()
Viewpoint16.position = [0,5,100]
Viewpoint16.description = "Switch background and images texture"

Scene15.children.append(Viewpoint16)
Background17 = x3d.Background()
Background17.DEF = "cube"
Background17.leftUrl = ["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]
Background17.rightUrl = ["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]
Background17.frontUrl = ["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]
Background17.backUrl = ["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]
Background17.topUrl = ["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]
Background17.bottomUrl = ["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]

Scene15.children.append(Background17)
Transform18 = x3d.Transform()
Shape19 = x3d.Shape()
Appearance20 = x3d.Appearance()
Material21 = x3d.Material()
Material21.diffuseColor = [0.7,0.7,0.7]
Material21.specularColor = [0.5,0.5,0.5]

Appearance20.material = Material21
ComposedCubeMapTexture22 = x3d.ComposedCubeMapTexture()
ImageTexture23 = x3d.ImageTexture()
ImageTexture23.DEF = "backShader"
ImageTexture23.url = ["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]

ComposedCubeMapTexture22.backTexture = ImageTexture23
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.DEF = "bottomShader"
ImageTexture24.url = ["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]

ComposedCubeMapTexture22.bottomTexture = ImageTexture24
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.DEF = "frontShader"
ImageTexture25.url = ["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]

ComposedCubeMapTexture22.frontTexture = ImageTexture25
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.DEF = "leftShader"
ImageTexture26.url = ["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]

ComposedCubeMapTexture22.leftTexture = ImageTexture26
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.DEF = "rightShader"
ImageTexture27.url = ["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]

ComposedCubeMapTexture22.rightTexture = ImageTexture27
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.DEF = "topShader"
ImageTexture28.url = ["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]

ComposedCubeMapTexture22.topTexture = ImageTexture28

Appearance20.texture = ComposedCubeMapTexture22
ComposedShader29 = x3d.ComposedShader()
ComposedShader29.DEF = "x_ite"
ComposedShader29.language = "GLSL"
"""http://hypertextbook.com/facts/2005/JustinChe.shtml"""
field30 = x3d.field()
field30.name = "chromaticDispertion"
field30.accessType = "inputOutput"
field30.type = "SFVec3f"
field30.value = [0.98,1,1.033]

ComposedShader29.field.append(field30)
field31 = x3d.field()
field31.name = "cube"
field31.accessType = "inputOutput"
field31.type = "SFInt32"
field31.value = 0

ComposedShader29.field.append(field31)
field32 = x3d.field()
field32.name = "bias"
field32.accessType = "inputOutput"
field32.type = "SFFloat"
field32.value = 0.5

ComposedShader29.field.append(field32)
field33 = x3d.field()
field33.name = "scale"
field33.accessType = "inputOutput"
field33.type = "SFFloat"
field33.value = 0.5

ComposedShader29.field.append(field33)
field34 = x3d.field()
field34.name = "power"
field34.accessType = "inputOutput"
field34.type = "SFFloat"
field34.value = 2

ComposedShader29.field.append(field34)
ShaderPart35 = x3d.ShaderPart()
ShaderPart35.url = ["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]
ShaderPart35.type = "VERTEX"

ComposedShader29.parts.append(ShaderPart35)
ShaderPart36 = x3d.ShaderPart()
ShaderPart36.url = ["../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"]
ShaderPart36.type = "FRAGMENT"

ComposedShader29.parts.append(ShaderPart36)

Appearance20.shaders.append(ComposedShader29)
ComposedShader37 = x3d.ComposedShader()
ComposedShader37.DEF = "x3dom"
ComposedShader37.language = "GLSL"
field38 = x3d.field()
field38.name = "chromaticDispertion"
field38.accessType = "inputOutput"
field38.type = "SFVec3f"
field38.value = [0.98,1,1.033]

ComposedShader37.field.append(field38)
field39 = x3d.field()
field39.name = "cube"
field39.accessType = "inputOutput"
field39.type = "SFInt32"
field39.value = 0

ComposedShader37.field.append(field39)
field40 = x3d.field()
field40.name = "bias"
field40.accessType = "inputOutput"
field40.type = "SFFloat"
field40.value = 0.5

ComposedShader37.field.append(field40)
field41 = x3d.field()
field41.name = "scale"
field41.accessType = "inputOutput"
field41.type = "SFFloat"
field41.value = 0.5

ComposedShader37.field.append(field41)
field42 = x3d.field()
field42.name = "power"
field42.accessType = "inputOutput"
field42.type = "SFFloat"
field42.value = 2

ComposedShader37.field.append(field42)
ShaderPart43 = x3d.ShaderPart()
ShaderPart43.url = ["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]
ShaderPart43.type = "VERTEX"

ComposedShader37.parts.append(ShaderPart43)
ShaderPart44 = x3d.ShaderPart()
ShaderPart44.url = ["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]
ShaderPart44.type = "FRAGMENT"

ComposedShader37.parts.append(ShaderPart44)

Appearance20.shaders.append(ComposedShader37)

Shape19.appearance = Appearance20
Sphere45 = x3d.Sphere()
Sphere45.radius = 30

Shape19.geometry = Sphere45

Transform18.children.append(Shape19)
Script46 = x3d.Script()
Script46.DEF = "UrlSelector"
Script46.directOutput = True
field47 = x3d.field()
field47.name = "frontUrls"
field47.type = "MFString"
field47.accessType = "initializeOnly"
field47.value = ["../resources/images/all_probes/beach_cross/beach_front.png","../resources/images/all_probes/building_cross/building_front.png","../resources/images/all_probes/campus_cross/campus_front.png","../resources/images/all_probes/galileo_cross/galileo_front.png","../resources/images/all_probes/grace_cross/grace_front.png","../resources/images/all_probes/kitchen_cross/kitchen_front.png","../resources/images/all_probes/rnl_cross/rnl_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/uffizi_cross/uffizi_front.png"]

Script46.field.append(field47)
field48 = x3d.field()
field48.name = "backUrls"
field48.type = "MFString"
field48.accessType = "initializeOnly"
field48.value = ["../resources/images/all_probes/beach_cross/beach_back.png","../resources/images/all_probes/building_cross/building_back.png","../resources/images/all_probes/campus_cross/campus_back.png","../resources/images/all_probes/galileo_cross/galileo_back.png","../resources/images/all_probes/grace_cross/grace_back.png","../resources/images/all_probes/kitchen_cross/kitchen_back.png","../resources/images/all_probes/rnl_cross/rnl_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/uffizi_cross/uffizi_back.png"]

Script46.field.append(field48)
field49 = x3d.field()
field49.name = "leftUrls"
field49.type = "MFString"
field49.accessType = "initializeOnly"
field49.value = ["../resources/images/all_probes/beach_cross/beach_left.png","../resources/images/all_probes/building_cross/building_left.png","../resources/images/all_probes/campus_cross/campus_left.png","../resources/images/all_probes/galileo_cross/galileo_left.png","../resources/images/all_probes/grace_cross/grace_left.png","../resources/images/all_probes/kitchen_cross/kitchen_left.png","../resources/images/all_probes/rnl_cross/rnl_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/uffizi_cross/uffizi_left.png"]

Script46.field.append(field49)
field50 = x3d.field()
field50.name = "rightUrls"
field50.type = "MFString"
field50.accessType = "initializeOnly"
field50.value = ["../resources/images/all_probes/beach_cross/beach_right.png","../resources/images/all_probes/building_cross/building_right.png","../resources/images/all_probes/campus_cross/campus_right.png","../resources/images/all_probes/galileo_cross/galileo_right.png","../resources/images/all_probes/grace_cross/grace_right.png","../resources/images/all_probes/kitchen_cross/kitchen_right.png","../resources/images/all_probes/rnl_cross/rnl_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/uffizi_cross/uffizi_right.png"]

Script46.field.append(field50)
field51 = x3d.field()
field51.name = "topUrls"
field51.type = "MFString"
field51.accessType = "initializeOnly"
field51.value = ["../resources/images/all_probes/beach_cross/beach_top.png","../resources/images/all_probes/building_cross/building_top.png","../resources/images/all_probes/campus_cross/campus_top.png","../resources/images/all_probes/galileo_cross/galileo_top.png","../resources/images/all_probes/grace_cross/grace_top.png","../resources/images/all_probes/kitchen_cross/kitchen_top.png","../resources/images/all_probes/rnl_cross/rnl_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/uffizi_cross/uffizi_top.png"]

Script46.field.append(field51)
field52 = x3d.field()
field52.name = "bottomUrls"
field52.type = "MFString"
field52.accessType = "initializeOnly"
field52.value = ["../resources/images/all_probes/beach_cross/beach_bottom.png","../resources/images/all_probes/building_cross/building_bottom.png","../resources/images/all_probes/campus_cross/campus_bottom.png","../resources/images/all_probes/galileo_cross/galileo_bottom.png","../resources/images/all_probes/grace_cross/grace_bottom.png","../resources/images/all_probes/kitchen_cross/kitchen_bottom.png","../resources/images/all_probes/rnl_cross/rnl_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/uffizi_cross/uffizi_bottom.png"]

Script46.field.append(field52)
field53 = x3d.field()
field53.name = "front_changed"
field53.type = "MFString"
field53.accessType = "outputOnly"

Script46.field.append(field53)
field54 = x3d.field()
field54.name = "back_changed"
field54.type = "MFString"
field54.accessType = "outputOnly"

Script46.field.append(field54)
field55 = x3d.field()
field55.name = "left_changed"
field55.type = "MFString"
field55.accessType = "outputOnly"

Script46.field.append(field55)
field56 = x3d.field()
field56.name = "right_changed"
field56.type = "MFString"
field56.accessType = "outputOnly"

Script46.field.append(field56)
field57 = x3d.field()
field57.name = "top_changed"
field57.type = "MFString"
field57.accessType = "outputOnly"

Script46.field.append(field57)
field58 = x3d.field()
field58.name = "bottom_changed"
field58.type = "MFString"
field58.accessType = "outputOnly"

Script46.field.append(field58)
field59 = x3d.field()
field59.name = "set_fraction"
field59.type = "SFFloat"
field59.accessType = "inputOnly"

Script46.field.append(field59)
field60 = x3d.field()
field60.name = "old"
field60.type = "SFInt32"
field60.accessType = "inputOutput"
field60.value = -1

Script46.field.append(field60)

Script46.sourceCode = '''ecmascript:\n"+
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

Transform18.children.append(Script46)
TimeSensor61 = x3d.TimeSensor()
TimeSensor61.DEF = "Clock"
TimeSensor61.cycleInterval = 45
TimeSensor61.loop = True

Transform18.children.append(TimeSensor61)
ROUTE62 = x3d.ROUTE()
ROUTE62.fromNode = "Clock"
ROUTE62.fromField = "fraction_changed"
ROUTE62.toNode = "UrlSelector"
ROUTE62.toField = "set_fraction"

Transform18.children.append(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.fromNode = "UrlSelector"
ROUTE63.fromField = "front_changed"
ROUTE63.toNode = "cube"
ROUTE63.toField = "frontUrl"

Transform18.children.append(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.fromNode = "UrlSelector"
ROUTE64.fromField = "back_changed"
ROUTE64.toNode = "cube"
ROUTE64.toField = "backUrl"

Transform18.children.append(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.fromNode = "UrlSelector"
ROUTE65.fromField = "left_changed"
ROUTE65.toNode = "cube"
ROUTE65.toField = "leftUrl"

Transform18.children.append(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.fromNode = "UrlSelector"
ROUTE66.fromField = "right_changed"
ROUTE66.toNode = "cube"
ROUTE66.toField = "rightUrl"

Transform18.children.append(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.fromNode = "UrlSelector"
ROUTE67.fromField = "top_changed"
ROUTE67.toNode = "cube"
ROUTE67.toField = "topUrl"

Transform18.children.append(ROUTE67)
ROUTE68 = x3d.ROUTE()
ROUTE68.fromNode = "UrlSelector"
ROUTE68.fromField = "bottom_changed"
ROUTE68.toNode = "cube"
ROUTE68.toField = "bottomUrl"

Transform18.children.append(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.fromNode = "UrlSelector"
ROUTE69.fromField = "front_changed"
ROUTE69.toNode = "frontShader"
ROUTE69.toField = "url"

Transform18.children.append(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.fromNode = "UrlSelector"
ROUTE70.fromField = "back_changed"
ROUTE70.toNode = "backShader"
ROUTE70.toField = "url"

Transform18.children.append(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.fromNode = "UrlSelector"
ROUTE71.fromField = "left_changed"
ROUTE71.toNode = "leftShader"
ROUTE71.toField = "url"

Transform18.children.append(ROUTE71)
ROUTE72 = x3d.ROUTE()
ROUTE72.fromNode = "UrlSelector"
ROUTE72.fromField = "right_changed"
ROUTE72.toNode = "rightShader"
ROUTE72.toField = "url"

Transform18.children.append(ROUTE72)
ROUTE73 = x3d.ROUTE()
ROUTE73.fromNode = "UrlSelector"
ROUTE73.fromField = "top_changed"
ROUTE73.toNode = "topShader"
ROUTE73.toField = "url"

Transform18.children.append(ROUTE73)
ROUTE74 = x3d.ROUTE()
ROUTE74.fromNode = "UrlSelector"
ROUTE74.fromField = "bottom_changed"
ROUTE74.toNode = "bottomShader"
ROUTE74.toField = "url"

Transform18.children.append(ROUTE74)

Scene15.children.append(Transform18)

X3D0.Scene = Scene15
f = open("../data/mirror2.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/mirror2.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/mirror2.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
