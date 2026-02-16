print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
head1 = x3d.head()
head1.children.append(x3d.Comment("""<component name='Shape' level='4'></component>"""))
head1.children.append(x3d.Comment("""<component name='DIS' level='2'></component>"""))
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
meta10.content = "bumpyx_itesliders.x3d"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "description"
meta11.content = "*Bumpy flower with prototype sliders*"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "creator"
meta12.content = "Doug Sanden, Christoph Valentin, John Carlson"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "identifier"
meta13.content = "https://github.com/coderextreme/JSONverse/public/x3d/bumpyx_itesliders.x3d"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "generator"
meta14.content = "PSPad, http://www.pspad.com/"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "license"
meta15.content = "license.html"

head1.children.append(meta15)

X3D0.head = head1
X3D0.children.append(x3d.Comment("""\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution,"""))
X3D0.children.append(x3d.Comment("""It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak)"""))
X3D0.children.append(x3d.Comment("""open for their \"discussion about the teapot\""""))
Scene16 = x3d.Scene()
Scene16.children.append(x3d.Comment("""LayerSet with two layers, navigation happens in layer 1"""))
LayerSet17 = x3d.LayerSet()
LayerSet17.activeLayer = 1
LayerSet17.order = [1,2,3]
LayerSet17.children.append(x3d.Comment("""the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\""""))
Layer18 = x3d.Layer()
Layer18.pickable = True
Layer18.objectType = ["ALL"]
Layer18.children.append(x3d.Comment("""basic nodes, which might be present in any scene"""))
NavigationInfo19 = x3d.NavigationInfo()
NavigationInfo19.type = ["EXAMINE"]
NavigationInfo19.avatarSize = [0.25,1.75,0.75]

Layer18.children.append(NavigationInfo19)
DirectionalLight20 = x3d.DirectionalLight()
DirectionalLight20.ambientIntensity = 0.2
DirectionalLight20.direction = [0,-1,0]

Layer18.children.append(DirectionalLight20)
DirectionalLight21 = x3d.DirectionalLight()
DirectionalLight21.ambientIntensity = 0.2
DirectionalLight21.direction = [-1,-0.1,-1]

Layer18.children.append(DirectionalLight21)
Viewpoint22 = x3d.Viewpoint()
Viewpoint22.description = "My Overview"
Viewpoint22.fieldOfView = 1.570796
Viewpoint22.position = [0,1.75,60]

Layer18.children.append(Viewpoint22)
Layer18.children.append(x3d.Comment("""this group contains the red/green/blue 3D crosshair"""))
Group23 = x3d.Group()
Group23.children.append(x3d.Comment("""Arrow X"""))
Transform24 = x3d.Transform()
Transform24.translation = [25,0,0]
Transform24.rotation = [0,0,-1,1.57]
Shape25 = x3d.Shape()
Cylinder26 = x3d.Cylinder(DEF="Shaft")
Cylinder26.radius = 0.35
Cylinder26.height = 50

Shape25.geometry = Cylinder26
Appearance27 = x3d.Appearance()
Material28 = x3d.Material(DEF="RED")
Material28.diffuseColor = [1,0,0]
Material28.emissiveColor = [1,0,0]

Appearance27.material = Material28

Shape25.appearance = Appearance27

Transform24.children.append(Shape25)

Group23.children.append(Transform24)
Transform29 = x3d.Transform()
Transform29.translation = [50,0,0]
Transform29.rotation = [0,0,-1,1.57]
Shape30 = x3d.Shape()
Cone31 = x3d.Cone(DEF="Tip")
Cone31.bottomRadius = 0.8
Cone31.height = 3

Shape30.geometry = Cone31
Appearance32 = x3d.Appearance()
Material33 = x3d.Material(USE="RED")

Appearance32.material = Material33

Shape30.appearance = Appearance32

Transform29.children.append(Shape30)

Group23.children.append(Transform29)
Group23.children.append(x3d.Comment("""Arrow Y"""))
Transform34 = x3d.Transform()
Transform34.translation = [0,25,0]
Shape35 = x3d.Shape()
Cylinder36 = x3d.Cylinder(USE="Shaft")

Shape35.geometry = Cylinder36
Appearance37 = x3d.Appearance()
Material38 = x3d.Material(DEF="GREEN")
Material38.diffuseColor = [0,1,0]
Material38.emissiveColor = [0,1,0]

Appearance37.material = Material38

Shape35.appearance = Appearance37

Transform34.children.append(Shape35)

Group23.children.append(Transform34)
Transform39 = x3d.Transform()
Transform39.translation = [0,50,0]
Shape40 = x3d.Shape()
Cone41 = x3d.Cone(USE="Tip")

Shape40.geometry = Cone41
Appearance42 = x3d.Appearance()
Material43 = x3d.Material(USE="GREEN")

Appearance42.material = Material43

Shape40.appearance = Appearance42

Transform39.children.append(Shape40)

Group23.children.append(Transform39)
Group23.children.append(x3d.Comment("""Arrow Z"""))
Transform44 = x3d.Transform()
Transform44.translation = [0,0,25]
Transform44.rotation = [1,0,0,1.57]
Shape45 = x3d.Shape()
Cylinder46 = x3d.Cylinder(USE="Shaft")

Shape45.geometry = Cylinder46
Appearance47 = x3d.Appearance()
Material48 = x3d.Material(DEF="BLUE")
Material48.diffuseColor = [0,0,1]
Material48.emissiveColor = [0,0,1]

Appearance47.material = Material48

Shape45.appearance = Appearance47

Transform44.children.append(Shape45)

Group23.children.append(Transform44)
Transform49 = x3d.Transform()
Transform49.translation = [0,0,50]
Transform49.rotation = [1,0,0,1.57]
Shape50 = x3d.Shape()
Cone51 = x3d.Cone(USE="Tip")

Shape50.geometry = Cone51
Appearance52 = x3d.Appearance()
Material53 = x3d.Material(USE="BLUE")

Appearance52.material = Material53

Shape50.appearance = Appearance52

Transform49.children.append(Shape50)

Group23.children.append(Transform49)

Layer18.children.append(Group23)
Layer18.children.append(x3d.Comment("""the model that is being reviewed by the users of this scene"""))
Transform54 = x3d.Transform(DEF="FlowerTransform")
Transform54.children.append(x3d.Comment("""<Inline DEF=\"Flower\" url='\"bumpyx_ite.x3d\"' />"""))
Transform54.children.append(x3d.Comment("""Images courtesy of Paul Debevec's Light Probe Image Gallery"""))
Background55 = x3d.Background()
Background55.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background55.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]
Background55.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background55.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background55.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background55.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

Transform54.children.append(Background55)
Transform56 = x3d.Transform()
Shape57 = x3d.Shape()
Shape57.children.append(x3d.Comment("""<Sphere radius='40'></Sphere>"""))
IndexedFaceSet58 = x3d.IndexedFaceSet(DEF="Orbit")
IndexedFaceSet58.convex = False
Coordinate59 = x3d.Coordinate(DEF="OrbitCoordinates")

IndexedFaceSet58.coord = Coordinate59

Shape57.geometry = IndexedFaceSet58
Appearance60 = x3d.Appearance()
Material61 = x3d.Material()
Material61.diffuseColor = [0.7,0.7,0.7]
Material61.specularColor = [0.5,0.5,0.5]

Appearance60.material = Material61
ComposedCubeMapTexture62 = x3d.ComposedCubeMapTexture(DEF="texture")
ImageTexture63 = x3d.ImageTexture()
ImageTexture63.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture62.backTexture = ImageTexture63
ImageTexture64 = x3d.ImageTexture()
ImageTexture64.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture62.bottomTexture = ImageTexture64
ImageTexture65 = x3d.ImageTexture()
ImageTexture65.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture62.frontTexture = ImageTexture65
ImageTexture66 = x3d.ImageTexture()
ImageTexture66.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture62.leftTexture = ImageTexture66
ImageTexture67 = x3d.ImageTexture()
ImageTexture67.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture62.rightTexture = ImageTexture67
ImageTexture68 = x3d.ImageTexture()
ImageTexture68.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture62.topTexture = ImageTexture68

Appearance60.texture = ComposedCubeMapTexture62
ComposedShader69 = x3d.ComposedShader(DEF="x_iteShader")
ComposedShader69.language = "GLSL"
field70 = x3d.field()
field70.name = "chromaticDispertion"
field70.accessType = "inputOnly"
field70.type = "SFVec3f"
field70.value = [0.98,1,1.033]

ComposedShader69.field.append(field70)
field71 = x3d.field()
field71.name = "cube"
field71.type = "SFNode"
field71.accessType = "inputOnly"
ComposedCubeMapTexture72 = x3d.ComposedCubeMapTexture(USE="texture")

field71.children.append(ComposedCubeMapTexture72)

ComposedShader69.field.append(field71)
field73 = x3d.field()
field73.name = "bias"
field73.type = "SFFloat"
field73.accessType = "inputOnly"
field73.value = 0.5

ComposedShader69.field.append(field73)
field74 = x3d.field()
field74.name = "scale"
field74.type = "SFFloat"
field74.accessType = "inputOnly"
field74.value = 0.5

ComposedShader69.field.append(field74)
field75 = x3d.field()
field75.name = "power"
field75.type = "SFFloat"
field75.accessType = "inputOnly"
field75.value = 2

ComposedShader69.field.append(field75)
field76 = x3d.field()
field76.name = "a"
field76.type = "SFFloat"
field76.accessType = "inputOutput"
field76.value = 15

ComposedShader69.field.append(field76)
field77 = x3d.field()
field77.name = "b"
field77.type = "SFFloat"
field77.accessType = "inputOutput"
field77.value = 5

ComposedShader69.field.append(field77)
field78 = x3d.field()
field78.name = "c"
field78.type = "SFFloat"
field78.accessType = "inputOutput"
field78.value = 5

ComposedShader69.field.append(field78)
field79 = x3d.field()
field79.name = "d"
field79.type = "SFFloat"
field79.accessType = "inputOutput"
field79.value = 5

ComposedShader69.field.append(field79)
field80 = x3d.field()
field80.name = "tdelta"
field80.type = "SFFloat"
field80.accessType = "inputOutput"
field80.value = 0

ComposedShader69.field.append(field80)
field81 = x3d.field()
field81.name = "pdelta"
field81.type = "SFFloat"
field81.accessType = "inputOutput"
field81.value = 0

ComposedShader69.field.append(field81)
ShaderPart82 = x3d.ShaderPart()
ShaderPart82.url = ["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]
ShaderPart82.type = "VERTEX"

ComposedShader69.parts.append(ShaderPart82)
ShaderPart83 = x3d.ShaderPart()
ShaderPart83.url = ["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]
ShaderPart83.type = "FRAGMENT"

ComposedShader69.parts.append(ShaderPart83)
ComposedShader69.children.append(x3d.Comment("""TO CONVERT TO A SPHERE"""))
ComposedShader69.children.append(x3d.Comment("""<ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart>"""))
ComposedShader69.children.append(x3d.Comment("""<ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/xite_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>"""))

Appearance60.shaders.append(ComposedShader69)

Shape57.appearance = Appearance60

Transform56.children.append(Shape57)

Transform54.children.append(Transform56)

Layer18.children.append(Transform54)
Script84 = x3d.Script(DEF="OrbitScript")
field85 = x3d.field()
field85.name = "coordinates"
field85.accessType = "inputOutput"
field85.type = "MFVec3f"

Script84.field.append(field85)
field86 = x3d.field()
field86.name = "coordIndexes"
field86.accessType = "outputOnly"
field86.type = "MFInt32"

Script84.field.append(field86)
field87 = x3d.field()
field87.name = "a"
field87.type = "SFFloat"
field87.accessType = "inputOutput"
field87.value = 10

Script84.field.append(field87)
field88 = x3d.field()
field88.name = "b"
field88.type = "SFFloat"
field88.accessType = "inputOutput"
field88.value = 10

Script84.field.append(field88)
field89 = x3d.field()
field89.name = "c"
field89.type = "SFFloat"
field89.accessType = "inputOutput"
field89.value = 2

Script84.field.append(field89)
field90 = x3d.field()
field90.name = "d"
field90.type = "SFFloat"
field90.accessType = "inputOutput"
field90.value = 2

Script84.field.append(field90)
field91 = x3d.field()
field91.name = "pdelta"
field91.type = "SFFloat"
field91.accessType = "inputOutput"
field91.value = 0

Script84.field.append(field91)
field92 = x3d.field()
field92.name = "tdelta"
field92.type = "SFFloat"
field92.accessType = "inputOutput"
field92.value = 0

Script84.field.append(field92)

Script84.sourceCode = '''ecmascript:\n"+
"function initialize() {\n"+
"     var resolution = 300;\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = new MFVec3f();\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"		crds.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = crds;\n"+
"\n"+
"\n"+
"     var cis = new MFInt32();\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis.push(i*resolution+j);\n"+
"	     cis.push(i*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j);\n"+
"	     cis.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = cis;\n"+
"}'''

Layer18.children.append(Script84)
ROUTE93 = x3d.ROUTE()
ROUTE93.fromField = "coordIndexes"
ROUTE93.fromNode = "OrbitScript"
ROUTE93.toField = "set_coordIndex"
ROUTE93.toNode = "Orbit"

Layer18.children.append(ROUTE93)
ROUTE94 = x3d.ROUTE()
ROUTE94.fromField = "coordinates"
ROUTE94.fromNode = "OrbitScript"
ROUTE94.toField = "set_point"
ROUTE94.toNode = "OrbitCoordinates"

Layer18.children.append(ROUTE94)

LayerSet17.layers.append(Layer18)
LayoutLayer95 = x3d.LayoutLayer()
LayoutLayer95.pickable = True
LayoutLayer95.objectType = ["ALL"]
Layout96 = x3d.Layout()
Layout96.align = ["LEFT","BOTTOM"]
Layout96.offset = [-0.2,0.19]
Layout96.size = [0.4,0.6]

LayoutLayer95.layout = Layout96
Viewport97 = x3d.Viewport()
Viewport97.clipBoundary = [0,1,0,1]

LayoutLayer95.viewport = Viewport97
Transform98 = x3d.Transform()
Transform98.translation = [0,0,-3]
Shape99 = x3d.Shape()
Appearance100 = x3d.Appearance()
Material101 = x3d.Material()
Material101.diffuseColor = [0,0,0]
Material101.transparency = 0.7

Appearance100.material = Material101

Shape99.appearance = Appearance100
Box102 = x3d.Box()
Box102.size = [100,100,0.02]

Shape99.geometry = Box102

Transform98.children.append(Shape99)

LayoutLayer95.children.append(Transform98)
Transform103 = x3d.Transform(DEF="equationTransform")
Transform104 = x3d.Transform()
Transform104.translation = [0,0,-20]
Shape105 = x3d.Shape()
Text106 = x3d.Text(DEF="equation")
Text106.string = ["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"]
FontStyle107 = x3d.FontStyle()
FontStyle107.size = 0.09

Text106.fontStyle = FontStyle107

Shape105.geometry = Text106
Appearance108 = x3d.Appearance()
Material109 = x3d.Material()
Material109.diffuseColor = [1,1,0]

Appearance108.material = Material109

Shape105.appearance = Appearance108

Transform104.children.append(Shape105)

Transform103.children.append(Transform104)

LayoutLayer95.children.append(Transform103)
ProtoDeclare110 = x3d.ProtoDeclare()
ProtoDeclare110.name = "SliderProto"
ProtoInterface111 = x3d.ProtoInterface()
field112 = x3d.field()
field112.name = "sliderTranslation"
field112.accessType = "inputOutput"
field112.type = "SFVec3f"
field112.value = [0,0.7,0]

ProtoInterface111.field.append(field112)
field113 = x3d.field()
field113.name = "transformTranslation"
field113.accessType = "inputOutput"
field113.type = "SFVec3f"
field113.value = [0,0,0.1]

ProtoInterface111.field.append(field113)
field114 = x3d.field()
field114.name = "sensorTranslation"
field114.accessType = "inputOutput"
field114.type = "SFVec3f"
field114.value = [0,0,0]

ProtoInterface111.field.append(field114)
field115 = x3d.field()
field115.name = "textString"
field115.accessType = "inputOutput"
field115.type = "MFString"
field115.value = ["a="]

ProtoInterface111.field.append(field115)
field116 = x3d.field()
field116.name = "parameterScale"
field116.accessType = "inputOutput"
field116.type = "SFFloat"
field116.value = 30

ProtoInterface111.field.append(field116)
field117 = x3d.field()
field117.name = "parameterName"
field117.accessType = "inputOutput"
field117.type = "SFString"
field117.value = "a"

ProtoInterface111.field.append(field117)
field118 = x3d.field()
field118.name = "petNames"
field118.accessType = "inputOutput"
field118.type = "MFString"

ProtoInterface111.field.append(field118)
field119 = x3d.field()
field119.name = "shaderNode"
field119.accessType = "inputOutput"
field119.type = "SFNode"

ProtoInterface111.field.append(field119)

ProtoDeclare110.ProtoInterface = ProtoInterface111
ProtoBody120 = x3d.ProtoBody()
Group121 = x3d.Group()
Transform122 = x3d.Transform(DEF="protoSlider")
Transform122.translation = [0,0.7,0]
IS123 = x3d.IS()
connect124 = x3d.connect()
connect124.nodeField = "translation"
connect124.protoField = "sliderTranslation"

IS123.connect.append(connect124)

Transform122.IS = IS123
Transform125 = x3d.Transform(DEF="protoTransform")
Transform125.translation = [0,0,0.1]
IS126 = x3d.IS()
connect127 = x3d.connect()
connect127.nodeField = "translation"
connect127.protoField = "sensorTranslation"

IS126.connect.append(connect127)

Transform125.IS = IS126
PlaneSensor128 = x3d.PlaneSensor(DEF="protoSensor")
PlaneSensor128.description = "Grab with mouse to adjust slider"
PlaneSensor128.maxPosition = [1,0]

Transform125.children.append(PlaneSensor128)
Transform129 = x3d.Transform()
Transform129.translation = [0,0,0]
TouchSensor130 = x3d.TouchSensor(DEF="protoTS")

Transform129.children.append(TouchSensor130)

Transform125.children.append(Transform129)
Transform131 = x3d.Transform()
Shape132 = x3d.Shape()
Text133 = x3d.Text(DEF="protoText")
Text133.string = ["a="]
IS134 = x3d.IS()
connect135 = x3d.connect()
connect135.nodeField = "string"
connect135.protoField = "textString"

IS134.connect.append(connect135)

Text133.IS = IS134
FontStyle136 = x3d.FontStyle()
FontStyle136.size = 0.23

Text133.fontStyle = FontStyle136

Shape132.geometry = Text133
Appearance137 = x3d.Appearance()
Material138 = x3d.Material()

Appearance137.material = Material138

Shape132.appearance = Appearance137

Transform131.children.append(Shape132)

Transform125.children.append(Transform131)

Transform122.children.append(Transform125)

Group121.children.append(Transform122)
Script139 = x3d.Script(DEF="protoValueTransformerScript")
Script139.url = ["../javascripts/X3DUser.js","https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DUser.js"]
Script139.directOutput = True
Script139.mustEvaluate = True
field140 = x3d.field()
field140.name = "protoScale"
field140.accessType = "inputOutput"
field140.type = "SFFloat"

Script139.field.append(field140)
field141 = x3d.field()
field141.name = "petNames"
field141.accessType = "inputOutput"
field141.type = "MFString"

Script139.field.append(field141)
field142 = x3d.field()
field142.name = "protoParameterName"
field142.accessType = "inputOutput"
field142.type = "SFString"

Script139.field.append(field142)
field143 = x3d.field()
field143.name = "shader"
field143.accessType = "inputOutput"
field143.type = "SFNode"

Script139.field.append(field143)
field144 = x3d.field()
field144.name = "newTranslation"
field144.accessType = "inputOnly"
field144.type = "SFVec3f"
field144.value = [1,1,1]

Script139.field.append(field144)
field145 = x3d.field()
field145.name = "protoValue_changed"
field145.accessType = "outputOnly"
field145.type = "SFFloat"
field145.value = 1

Script139.field.append(field145)
field146 = x3d.field()
field146.name = "protoText_changed"
field146.accessType = "outputOnly"
field146.type = "MFString"
field146.value = ["1.0"]

Script139.field.append(field146)
IS147 = x3d.IS()
connect148 = x3d.connect()
connect148.nodeField = "protoScale"
connect148.protoField = "parameterScale"

IS147.connect.append(connect148)
connect149 = x3d.connect()
connect149.nodeField = "petNames"
connect149.protoField = "petNames"

IS147.connect.append(connect149)
connect150 = x3d.connect()
connect150.nodeField = "protoParameterName"
connect150.protoField = "parameterName"

IS147.connect.append(connect150)
connect151 = x3d.connect()
connect151.nodeField = "shader"
connect151.protoField = "shaderNode"

IS147.connect.append(connect151)

Script139.IS = IS147

Group121.children.append(Script139)
ROUTE152 = x3d.ROUTE()
ROUTE152.fromField = "translation_changed"
ROUTE152.fromNode = "protoSensor"
ROUTE152.toField = "set_translation"
ROUTE152.toNode = "protoTransform"

Group121.children.append(ROUTE152)
ROUTE153 = x3d.ROUTE()
ROUTE153.fromField = "translation_changed"
ROUTE153.fromNode = "protoSensor"
ROUTE153.toField = "newTranslation"
ROUTE153.toNode = "protoValueTransformerScript"

Group121.children.append(ROUTE153)
ROUTE154 = x3d.ROUTE()
ROUTE154.fromField = "protoText_changed"
ROUTE154.fromNode = "protoValueTransformerScript"
ROUTE154.toField = "string"
ROUTE154.toNode = "protoText"

Group121.children.append(ROUTE154)

ProtoBody120.children.append(Group121)

ProtoDeclare110.ProtoBody = ProtoBody120

LayoutLayer95.children.append(ProtoDeclare110)
ProtoInstance155 = x3d.ProtoInstance(DEF="aPI")
ProtoInstance155.name = "SliderProto"
fieldValue156 = x3d.fieldValue()
fieldValue156.name = "sliderTranslation"
fieldValue156.value = "0 0.7 0"

ProtoInstance155.fieldValue.append(fieldValue156)
fieldValue157 = x3d.fieldValue()
fieldValue157.name = "transformTranslation"
fieldValue157.value = "0 0 0.1"

ProtoInstance155.fieldValue.append(fieldValue157)
fieldValue158 = x3d.fieldValue()
fieldValue158.name = "sensorTranslation"
fieldValue158.value = "0 0 0"

ProtoInstance155.fieldValue.append(fieldValue158)
fieldValue159 = x3d.fieldValue()
fieldValue159.name = "textString"
fieldValue159.value = "\"a=\""

ProtoInstance155.fieldValue.append(fieldValue159)
fieldValue160 = x3d.fieldValue()
fieldValue160.name = "parameterScale"
fieldValue160.value = "30"

ProtoInstance155.fieldValue.append(fieldValue160)
fieldValue161 = x3d.fieldValue()
fieldValue161.name = "parameterName"
fieldValue161.value = "a"

ProtoInstance155.fieldValue.append(fieldValue161)
fieldValue162 = x3d.fieldValue()
fieldValue162.name = "petNames"
fieldValue162.value = "\"yottzumm\" \"group1-petname\""

ProtoInstance155.fieldValue.append(fieldValue162)
fieldValue163 = x3d.fieldValue()
fieldValue163.name = "shaderNode"
ComposedShader164 = x3d.ComposedShader(USE="x_iteShader")

fieldValue163.children.append(ComposedShader164)

ProtoInstance155.fieldValue.append(fieldValue163)

LayoutLayer95.children.append(ProtoInstance155)
ProtoInstance165 = x3d.ProtoInstance(DEF="bPI")
ProtoInstance165.name = "SliderProto"
fieldValue166 = x3d.fieldValue()
fieldValue166.name = "sliderTranslation"
fieldValue166.value = "0 0.4 0"

ProtoInstance165.fieldValue.append(fieldValue166)
fieldValue167 = x3d.fieldValue()
fieldValue167.name = "transformTranslation"
fieldValue167.value = "0 0 0.1"

ProtoInstance165.fieldValue.append(fieldValue167)
fieldValue168 = x3d.fieldValue()
fieldValue168.name = "sensorTranslation"
fieldValue168.value = "0 0 0"

ProtoInstance165.fieldValue.append(fieldValue168)
fieldValue169 = x3d.fieldValue()
fieldValue169.name = "textString"
fieldValue169.value = "\"b=\""

ProtoInstance165.fieldValue.append(fieldValue169)
fieldValue170 = x3d.fieldValue()
fieldValue170.name = "parameterScale"
fieldValue170.value = "30"

ProtoInstance165.fieldValue.append(fieldValue170)
fieldValue171 = x3d.fieldValue()
fieldValue171.name = "parameterName"
fieldValue171.value = "b"

ProtoInstance165.fieldValue.append(fieldValue171)
fieldValue172 = x3d.fieldValue()
fieldValue172.name = "petNames"
fieldValue172.value = "\"yottzumm\" \"group1-petname\""

ProtoInstance165.fieldValue.append(fieldValue172)
fieldValue173 = x3d.fieldValue()
fieldValue173.name = "shaderNode"
ComposedShader174 = x3d.ComposedShader(USE="x_iteShader")

fieldValue173.children.append(ComposedShader174)

ProtoInstance165.fieldValue.append(fieldValue173)

LayoutLayer95.children.append(ProtoInstance165)
ProtoInstance175 = x3d.ProtoInstance(DEF="cPI")
ProtoInstance175.name = "SliderProto"
fieldValue176 = x3d.fieldValue()
fieldValue176.name = "sliderTranslation"
fieldValue176.value = "0 0.1 0"

ProtoInstance175.fieldValue.append(fieldValue176)
fieldValue177 = x3d.fieldValue()
fieldValue177.name = "transformTranslation"
fieldValue177.value = "0 0 0.1"

ProtoInstance175.fieldValue.append(fieldValue177)
fieldValue178 = x3d.fieldValue()
fieldValue178.name = "sensorTranslation"
fieldValue178.value = "0 0 0"

ProtoInstance175.fieldValue.append(fieldValue178)
fieldValue179 = x3d.fieldValue()
fieldValue179.name = "textString"
fieldValue179.value = "\"c=\""

ProtoInstance175.fieldValue.append(fieldValue179)
fieldValue180 = x3d.fieldValue()
fieldValue180.name = "parameterScale"
fieldValue180.value = "20"

ProtoInstance175.fieldValue.append(fieldValue180)
fieldValue181 = x3d.fieldValue()
fieldValue181.name = "parameterName"
fieldValue181.value = "c"

ProtoInstance175.fieldValue.append(fieldValue181)
fieldValue182 = x3d.fieldValue()
fieldValue182.name = "petNames"
fieldValue182.value = "\"yottzumm\" \"yottzumm2\" \"group1-petname\""

ProtoInstance175.fieldValue.append(fieldValue182)
fieldValue183 = x3d.fieldValue()
fieldValue183.name = "shaderNode"
ComposedShader184 = x3d.ComposedShader(USE="x_iteShader")

fieldValue183.children.append(ComposedShader184)

ProtoInstance175.fieldValue.append(fieldValue183)

LayoutLayer95.children.append(ProtoInstance175)
ProtoInstance185 = x3d.ProtoInstance(DEF="dPI")
ProtoInstance185.name = "SliderProto"
fieldValue186 = x3d.fieldValue()
fieldValue186.name = "sliderTranslation"
fieldValue186.value = "0 -0.2 0"

ProtoInstance185.fieldValue.append(fieldValue186)
fieldValue187 = x3d.fieldValue()
fieldValue187.name = "transformTranslation"
fieldValue187.value = "0 0 0.1"

ProtoInstance185.fieldValue.append(fieldValue187)
fieldValue188 = x3d.fieldValue()
fieldValue188.name = "sensorTranslation"
fieldValue188.value = "0 0 0"

ProtoInstance185.fieldValue.append(fieldValue188)
fieldValue189 = x3d.fieldValue()
fieldValue189.name = "textString"
fieldValue189.value = "\"d=\""

ProtoInstance185.fieldValue.append(fieldValue189)
fieldValue190 = x3d.fieldValue()
fieldValue190.name = "parameterScale"
fieldValue190.value = "20"

ProtoInstance185.fieldValue.append(fieldValue190)
fieldValue191 = x3d.fieldValue()
fieldValue191.name = "parameterName"
fieldValue191.value = "d"

ProtoInstance185.fieldValue.append(fieldValue191)
fieldValue192 = x3d.fieldValue()
fieldValue192.name = "petNames"
fieldValue192.value = "\"yottzumm\" \"yottzumm2\" \"group1-petname\""

ProtoInstance185.fieldValue.append(fieldValue192)
fieldValue193 = x3d.fieldValue()
fieldValue193.name = "shaderNode"
ComposedShader194 = x3d.ComposedShader(USE="x_iteShader")

fieldValue193.children.append(ComposedShader194)

ProtoInstance185.fieldValue.append(fieldValue193)

LayoutLayer95.children.append(ProtoInstance185)
ProtoInstance195 = x3d.ProtoInstance(DEF="tdeltaPI")
ProtoInstance195.name = "SliderProto"
fieldValue196 = x3d.fieldValue()
fieldValue196.name = "sliderTranslation"
fieldValue196.value = "0 -0.5 0"

ProtoInstance195.fieldValue.append(fieldValue196)
fieldValue197 = x3d.fieldValue()
fieldValue197.name = "transformTranslation"
fieldValue197.value = "0 0 0.1"

ProtoInstance195.fieldValue.append(fieldValue197)
fieldValue198 = x3d.fieldValue()
fieldValue198.name = "sensorTranslation"
fieldValue198.value = "0 0 0"

ProtoInstance195.fieldValue.append(fieldValue198)
fieldValue199 = x3d.fieldValue()
fieldValue199.name = "textString"
fieldValue199.value = "\"tdelta=\""

ProtoInstance195.fieldValue.append(fieldValue199)
fieldValue200 = x3d.fieldValue()
fieldValue200.name = "parameterScale"
fieldValue200.value = "6.28"

ProtoInstance195.fieldValue.append(fieldValue200)
fieldValue201 = x3d.fieldValue()
fieldValue201.name = "parameterName"
fieldValue201.value = "tdelta"

ProtoInstance195.fieldValue.append(fieldValue201)
fieldValue202 = x3d.fieldValue()
fieldValue202.name = "petNames"
fieldValue202.value = "\"yottzumm2\" \"group1-petname\""

ProtoInstance195.fieldValue.append(fieldValue202)
fieldValue203 = x3d.fieldValue()
fieldValue203.name = "shaderNode"
ComposedShader204 = x3d.ComposedShader(USE="x_iteShader")

fieldValue203.children.append(ComposedShader204)

ProtoInstance195.fieldValue.append(fieldValue203)

LayoutLayer95.children.append(ProtoInstance195)
ProtoInstance205 = x3d.ProtoInstance(DEF="pdeltaPI")
ProtoInstance205.name = "SliderProto"
fieldValue206 = x3d.fieldValue()
fieldValue206.name = "sliderTranslation"
fieldValue206.value = "0 -0.8 0"

ProtoInstance205.fieldValue.append(fieldValue206)
fieldValue207 = x3d.fieldValue()
fieldValue207.name = "transformTranslation"
fieldValue207.value = "0 0 0.1"

ProtoInstance205.fieldValue.append(fieldValue207)
fieldValue208 = x3d.fieldValue()
fieldValue208.name = "sensorTranslation"
fieldValue208.value = "0 0 0"

ProtoInstance205.fieldValue.append(fieldValue208)
fieldValue209 = x3d.fieldValue()
fieldValue209.name = "textString"
fieldValue209.value = "\"pdelta=\""

ProtoInstance205.fieldValue.append(fieldValue209)
fieldValue210 = x3d.fieldValue()
fieldValue210.name = "parameterScale"
fieldValue210.value = "6.28"

ProtoInstance205.fieldValue.append(fieldValue210)
fieldValue211 = x3d.fieldValue()
fieldValue211.name = "parameterName"
fieldValue211.value = "pdelta"

ProtoInstance205.fieldValue.append(fieldValue211)
fieldValue212 = x3d.fieldValue()
fieldValue212.name = "petNames"
fieldValue212.value = "\"yottzumm2\" \"group1-petname\""

ProtoInstance205.fieldValue.append(fieldValue212)
fieldValue213 = x3d.fieldValue()
fieldValue213.name = "shaderNode"
ComposedShader214 = x3d.ComposedShader(USE="x_iteShader")

fieldValue213.children.append(ComposedShader214)

ProtoInstance205.fieldValue.append(fieldValue213)

LayoutLayer95.children.append(ProtoInstance205)

LayerSet17.layers.append(LayoutLayer95)
Layer215 = x3d.Layer()
Layer215.pickable = True
Layer215.objectType = ["ALL"]
Viewpoint216 = x3d.Viewpoint()
Viewpoint216.description = "My Humanoids"
Viewpoint216.fieldOfView = 1.570796
Viewpoint216.position = [0,1.75,80]

Layer215.children.append(Viewpoint216)
Script217 = x3d.Script(DEF="HumanoidScript")
Script217.url = ["../javascripts/X3DAvatar.js","https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DAvatar.js"]
Script217.directOutput = True
Script217.mustEvaluate = True

Layer215.children.append(Script217)
Group218 = x3d.Group(DEF="humanoidGroup")
Group219 = x3d.Group()

Group218.children.append(Group219)

Layer215.children.append(Group218)

LayerSet17.layers.append(Layer215)

Scene16.layerSet = LayerSet17

X3D0.Scene = Scene16
f = open("../data/bumpyx_itesliders.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/bumpyx_itesliders.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/bumpyx_itesliders.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
