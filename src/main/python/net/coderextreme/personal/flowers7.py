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
meta11.content = "flowers7.x3d"

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
meta14.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/flowers7.x3d"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "description"
meta15.content = "a flower"

head1.children.append(meta15)

X3D0.head = head1
Scene16 = x3d.Scene()
NavigationInfo17 = x3d.NavigationInfo()

Scene16.children.append(NavigationInfo17)
"""Images courtesy of Paul Debevec's Light Probe Image Gallery"""
Background18 = x3d.Background()
Background18.DEF = "background"
Background18.backUrl = ["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]
Background18.bottomUrl = ["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]
Background18.frontUrl = ["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]
Background18.leftUrl = ["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]
Background18.rightUrl = ["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]
Background18.topUrl = ["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]

Scene16.children.append(Background18)
Viewpoint19 = x3d.Viewpoint()
Viewpoint19.position = [0,0,40]
Viewpoint19.description = "Transparent rose"

Scene16.children.append(Viewpoint19)
Transform20 = x3d.Transform()
Shape21 = x3d.Shape()
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.diffuseColor = [0.7,0.7,0.7]
Material23.specularColor = [0.5,0.5,0.5]

Appearance22.material = Material23
ComposedCubeMapTexture24 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture24.DEF = "texture"
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.DEF = "backShader"
ImageTexture25.url = ["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]

ComposedCubeMapTexture24.backTexture = ImageTexture25
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.DEF = "bottomShader"
ImageTexture26.url = ["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]

ComposedCubeMapTexture24.bottomTexture = ImageTexture26
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.DEF = "frontShader"
ImageTexture27.url = ["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]

ComposedCubeMapTexture24.frontTexture = ImageTexture27
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.DEF = "leftShader"
ImageTexture28.url = ["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]

ComposedCubeMapTexture24.leftTexture = ImageTexture28
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.DEF = "rightShader"
ImageTexture29.url = ["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]

ComposedCubeMapTexture24.rightTexture = ImageTexture29
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.DEF = "topShader"
ImageTexture30.url = ["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]

ComposedCubeMapTexture24.topTexture = ImageTexture30

Appearance22.texture = ComposedCubeMapTexture24
ComposedShader31 = x3d.ComposedShader()
ComposedShader31.DEF = "x3dom"
ComposedShader31.language = "GLSL"
"""TODO VERIFY <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field>"""
field32 = x3d.field()
field32.name = "cube"
field32.type = "SFNode"
field32.accessType = "inputOutput"
ComposedCubeMapTexture33 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture33.USE = "texture"

field32.children.append(ComposedCubeMapTexture33)

ComposedShader31.field.append(field32)
field34 = x3d.field()
field34.name = "chromaticDispertion"
field34.accessType = "initializeOnly"
field34.type = "SFVec3f"
field34.value = [0.98,1,1.033]

ComposedShader31.field.append(field34)
field35 = x3d.field()
field35.name = "bias"
field35.type = "SFFloat"
field35.accessType = "inputOutput"
field35.value = 0.5

ComposedShader31.field.append(field35)
field36 = x3d.field()
field36.name = "scale"
field36.type = "SFFloat"
field36.accessType = "inputOutput"
field36.value = 0.5

ComposedShader31.field.append(field36)
field37 = x3d.field()
field37.name = "power"
field37.type = "SFFloat"
field37.accessType = "inputOutput"
field37.value = 2

ComposedShader31.field.append(field37)
field38 = x3d.field()
field38.name = "a"
field38.type = "SFFloat"
field38.accessType = "inputOutput"
field38.value = 10

ComposedShader31.field.append(field38)
field39 = x3d.field()
field39.name = "b"
field39.type = "SFFloat"
field39.accessType = "inputOutput"
field39.value = 1

ComposedShader31.field.append(field39)
field40 = x3d.field()
field40.name = "c"
field40.type = "SFFloat"
field40.accessType = "inputOutput"
field40.value = 20

ComposedShader31.field.append(field40)
field41 = x3d.field()
field41.name = "d"
field41.type = "SFFloat"
field41.accessType = "inputOutput"
field41.value = 20

ComposedShader31.field.append(field41)
field42 = x3d.field()
field42.name = "tdelta"
field42.type = "SFFloat"
field42.accessType = "inputOutput"
field42.value = 0

ComposedShader31.field.append(field42)
field43 = x3d.field()
field43.name = "pdelta"
field43.type = "SFFloat"
field43.accessType = "inputOutput"
field43.value = 0

ComposedShader31.field.append(field43)
ShaderPart44 = x3d.ShaderPart()
ShaderPart44.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"]
ShaderPart44.type = "VERTEX"

ComposedShader31.parts.append(ShaderPart44)
ShaderPart45 = x3d.ShaderPart()
ShaderPart45.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]
ShaderPart45.type = "FRAGMENT"

ComposedShader31.parts.append(ShaderPart45)

Appearance22.shaders.append(ComposedShader31)
ComposedShader46 = x3d.ComposedShader()
ComposedShader46.DEF = "x_ite"
ComposedShader46.language = "GLSL"
field47 = x3d.field()
field47.name = "cube"
field47.type = "SFNode"
field47.accessType = "inputOutput"
ComposedCubeMapTexture48 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture48.USE = "texture"

field47.children.append(ComposedCubeMapTexture48)

ComposedShader46.field.append(field47)
field49 = x3d.field()
field49.name = "chromaticDispertion"
field49.accessType = "initializeOnly"
field49.type = "SFVec3f"
field49.value = [0.98,1,1.033]

ComposedShader46.field.append(field49)
field50 = x3d.field()
field50.name = "bias"
field50.type = "SFFloat"
field50.accessType = "inputOnly"
field50.value = 0.5

ComposedShader46.field.append(field50)
field51 = x3d.field()
field51.name = "scale"
field51.type = "SFFloat"
field51.accessType = "inputOnly"
field51.value = 0.5

ComposedShader46.field.append(field51)
field52 = x3d.field()
field52.name = "power"
field52.type = "SFFloat"
field52.accessType = "inputOnly"
field52.value = 2

ComposedShader46.field.append(field52)
field53 = x3d.field()
field53.name = "a"
field53.type = "SFFloat"
field53.accessType = "inputOnly"
field53.value = 10

ComposedShader46.field.append(field53)
field54 = x3d.field()
field54.name = "b"
field54.type = "SFFloat"
field54.accessType = "inputOnly"
field54.value = 1

ComposedShader46.field.append(field54)
field55 = x3d.field()
field55.name = "c"
field55.type = "SFFloat"
field55.accessType = "inputOnly"
field55.value = 20

ComposedShader46.field.append(field55)
field56 = x3d.field()
field56.name = "d"
field56.type = "SFFloat"
field56.accessType = "inputOnly"
field56.value = 20

ComposedShader46.field.append(field56)
field57 = x3d.field()
field57.name = "tdelta"
field57.type = "SFFloat"
field57.accessType = "inputOnly"
field57.value = 0

ComposedShader46.field.append(field57)
field58 = x3d.field()
field58.name = "pdelta"
field58.type = "SFFloat"
field58.accessType = "inputOnly"
field58.value = 0

ComposedShader46.field.append(field58)
ShaderPart59 = x3d.ShaderPart()
ShaderPart59.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]
ShaderPart59.type = "VERTEX"

ComposedShader46.parts.append(ShaderPart59)
ShaderPart60 = x3d.ShaderPart()
ShaderPart60.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]
ShaderPart60.type = "FRAGMENT"

ComposedShader46.parts.append(ShaderPart60)

Appearance22.shaders.append(ComposedShader46)

Shape21.appearance = Appearance22
Sphere61 = x3d.Sphere()

Shape21.geometry = Sphere61

Transform20.children.append(Shape21)

Scene16.children.append(Transform20)
Script62 = x3d.Script()
Script62.DEF = "UrlSelector"
Script62.directOutput = True
field63 = x3d.field()
field63.name = "frontUrls"
field63.type = "MFString"
field63.accessType = "initializeOnly"
field63.value = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"]

Script62.field.append(field63)
field64 = x3d.field()
field64.name = "backUrls"
field64.type = "MFString"
field64.accessType = "initializeOnly"
field64.value = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"]

Script62.field.append(field64)
field65 = x3d.field()
field65.name = "leftUrls"
field65.type = "MFString"
field65.accessType = "initializeOnly"
field65.value = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"]

Script62.field.append(field65)
field66 = x3d.field()
field66.name = "rightUrls"
field66.type = "MFString"
field66.accessType = "initializeOnly"
field66.value = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"]

Script62.field.append(field66)
field67 = x3d.field()
field67.name = "topUrls"
field67.type = "MFString"
field67.accessType = "initializeOnly"
field67.value = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"]

Script62.field.append(field67)
field68 = x3d.field()
field68.name = "bottomUrls"
field68.type = "MFString"
field68.accessType = "initializeOnly"
field68.value = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"]

Script62.field.append(field68)
field69 = x3d.field()
field69.name = "front"
field69.type = "MFString"
field69.accessType = "inputOutput"

Script62.field.append(field69)
field70 = x3d.field()
field70.name = "back"
field70.type = "MFString"
field70.accessType = "inputOutput"

Script62.field.append(field70)
field71 = x3d.field()
field71.name = "left"
field71.type = "MFString"
field71.accessType = "inputOutput"

Script62.field.append(field71)
field72 = x3d.field()
field72.name = "right"
field72.type = "MFString"
field72.accessType = "inputOutput"

Script62.field.append(field72)
field73 = x3d.field()
field73.name = "top"
field73.type = "MFString"
field73.accessType = "inputOutput"

Script62.field.append(field73)
field74 = x3d.field()
field74.name = "bottom"
field74.type = "MFString"
field74.accessType = "inputOutput"

Script62.field.append(field74)
field75 = x3d.field()
field75.name = "set_fraction"
field75.type = "SFFloat"
field75.accessType = "inputOnly"

Script62.field.append(field75)
field76 = x3d.field()
field76.name = "old"
field76.type = "SFInt32"
field76.accessType = "inputOutput"
field76.value = -1

Script62.field.append(field76)

Script62.sourceCode = '''ecmascript:\n"+
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

Scene16.children.append(Script62)
"""<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>"""
Script77 = x3d.Script()
Script77.DEF = "Animate"
Script77.directOutput = True
field78 = x3d.field()
field78.name = "set_fraction"
field78.type = "SFFloat"
field78.accessType = "inputOnly"

Script77.field.append(field78)
field79 = x3d.field()
field79.name = "a"
field79.type = "SFFloat"
field79.accessType = "inputOutput"
field79.value = 10

Script77.field.append(field79)
field80 = x3d.field()
field80.name = "b"
field80.type = "SFFloat"
field80.accessType = "inputOutput"
field80.value = 1

Script77.field.append(field80)
field81 = x3d.field()
field81.name = "c"
field81.type = "SFFloat"
field81.accessType = "inputOutput"
field81.value = 20

Script77.field.append(field81)
field82 = x3d.field()
field82.name = "d"
field82.type = "SFFloat"
field82.accessType = "inputOutput"
field82.value = 20

Script77.field.append(field82)
field83 = x3d.field()
field83.name = "tdelta"
field83.type = "SFFloat"
field83.accessType = "inputOutput"
field83.value = 0

Script77.field.append(field83)
field84 = x3d.field()
field84.name = "pdelta"
field84.type = "SFFloat"
field84.accessType = "inputOutput"
field84.value = 0

Script77.field.append(field84)

Script77.sourceCode = '''ecmascript:\n"+
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

Scene16.children.append(Script77)
TimeSensor85 = x3d.TimeSensor()
TimeSensor85.DEF = "TourTime"
TimeSensor85.cycleInterval = 5
TimeSensor85.loop = True

Scene16.children.append(TimeSensor85)
ROUTE86 = x3d.ROUTE()
ROUTE86.fromNode = "TourTime"
ROUTE86.fromField = "fraction_changed"
ROUTE86.toNode = "Animate"
ROUTE86.toField = "set_fraction"

Scene16.children.append(ROUTE86)
ROUTE87 = x3d.ROUTE()
ROUTE87.fromNode = "Animate"
ROUTE87.fromField = "a"
ROUTE87.toNode = "x_ite"
ROUTE87.toField = "a"

Scene16.children.append(ROUTE87)
ROUTE88 = x3d.ROUTE()
ROUTE88.fromNode = "Animate"
ROUTE88.fromField = "b"
ROUTE88.toNode = "x_ite"
ROUTE88.toField = "b"

Scene16.children.append(ROUTE88)
ROUTE89 = x3d.ROUTE()
ROUTE89.fromNode = "Animate"
ROUTE89.fromField = "c"
ROUTE89.toNode = "x_ite"
ROUTE89.toField = "c"

Scene16.children.append(ROUTE89)
ROUTE90 = x3d.ROUTE()
ROUTE90.fromNode = "Animate"
ROUTE90.fromField = "d"
ROUTE90.toNode = "x_ite"
ROUTE90.toField = "d"

Scene16.children.append(ROUTE90)
ROUTE91 = x3d.ROUTE()
ROUTE91.fromNode = "Animate"
ROUTE91.fromField = "pdelta"
ROUTE91.toNode = "x_ite"
ROUTE91.toField = "pdelta"

Scene16.children.append(ROUTE91)
ROUTE92 = x3d.ROUTE()
ROUTE92.fromNode = "Animate"
ROUTE92.fromField = "tdelta"
ROUTE92.toNode = "x_ite"
ROUTE92.toField = "tdelta"

Scene16.children.append(ROUTE92)
ROUTE93 = x3d.ROUTE()
ROUTE93.fromNode = "Animate"
ROUTE93.fromField = "a"
ROUTE93.toNode = "x3dom"
ROUTE93.toField = "a"

Scene16.children.append(ROUTE93)
ROUTE94 = x3d.ROUTE()
ROUTE94.fromNode = "Animate"
ROUTE94.fromField = "b"
ROUTE94.toNode = "x3dom"
ROUTE94.toField = "b"

Scene16.children.append(ROUTE94)
ROUTE95 = x3d.ROUTE()
ROUTE95.fromNode = "Animate"
ROUTE95.fromField = "c"
ROUTE95.toNode = "x3dom"
ROUTE95.toField = "c"

Scene16.children.append(ROUTE95)
ROUTE96 = x3d.ROUTE()
ROUTE96.fromNode = "Animate"
ROUTE96.fromField = "d"
ROUTE96.toNode = "x3dom"
ROUTE96.toField = "d"

Scene16.children.append(ROUTE96)
ROUTE97 = x3d.ROUTE()
ROUTE97.fromNode = "Animate"
ROUTE97.fromField = "pdelta"
ROUTE97.toNode = "x3dom"
ROUTE97.toField = "pdelta"

Scene16.children.append(ROUTE97)
ROUTE98 = x3d.ROUTE()
ROUTE98.fromNode = "Animate"
ROUTE98.fromField = "tdelta"
ROUTE98.toNode = "x3dom"
ROUTE98.toField = "tdelta"

Scene16.children.append(ROUTE98)

X3D0.Scene = Scene16
f = open("../personal/flowers7.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/flowers7.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
