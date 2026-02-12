print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "bumpyfreewrljsonverse.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "*enter description here, short-sentence summaries preferred*"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Doug Sanden, Christoph Valentin, John Carlson"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "translator"
meta5.content = "*if manually translating VRML-to-X3D, enter name of person translating here*"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "*enter date of initial version here*"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "translated"
meta7.content = "*enter date of translation here*"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "modified"
meta8.content = "Mon, 09 Feb 2026 12:22:59 GMT"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "version"
meta9.content = "*enter version here, if any*"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "*enter reference citation or relative/online url here*"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "*enter additional url/bibliographic reference information here*"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "requires"
meta12.content = "*enter reference resource here if required to support function, delivery, or coherence of content*"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "rights"
meta13.content = "*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "drawing"
meta14.content = "*enter drawing filename/url here*"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "MovingImage"
meta15.content = "*enter movie filename/url here*"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "photo"
meta16.content = "*enter photo filename/url here*"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "subject"
meta17.content = "*enter subject keywords here*"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "accessRights"
meta18.content = "*enter permission statements or url here*"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "identifier"
meta19.content = "*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*"

head1.children.append(meta19)

X3D0.head = head1
Scene20 = x3d.Scene()
ProtoDeclare21 = x3d.ProtoDeclare()
ProtoDeclare21.name = "SliderProto"
ProtoInterface22 = x3d.ProtoInterface()
field23 = x3d.field()
field23.accessType = "inputOutput"
field23.type = "SFVec3f"
field23.name = "sliderTranslation"
field23.value = [0,0.7,0]

ProtoInterface22.field.append(field23)
field24 = x3d.field()
field24.accessType = "inputOutput"
field24.type = "SFVec3f"
field24.name = "transformTranslation"

ProtoInterface22.field.append(field24)
field25 = x3d.field()
field25.accessType = "inputOutput"
field25.type = "SFVec3f"
field25.name = "sensorTranslation"

ProtoInterface22.field.append(field25)
field26 = x3d.field()
field26.accessType = "inputOutput"
field26.type = "MFString"
field26.name = "textString"
field26.value = ["a="]

ProtoInterface22.field.append(field26)
field27 = x3d.field()
field27.accessType = "inputOutput"
field27.type = "SFFloat"
field27.name = "parameterScale"
field27.value = 30

ProtoInterface22.field.append(field27)
field28 = x3d.field()
field28.accessType = "inputOutput"
field28.type = "SFString"
field28.name = "parameterName"
field28.value = "a"

ProtoInterface22.field.append(field28)
field29 = x3d.field()
field29.accessType = "inputOutput"
field29.type = "SFNode"
field29.name = "shaderNode"

ProtoInterface22.field.append(field29)

ProtoDeclare21.ProtoInterface = ProtoInterface22
ProtoBody30 = x3d.ProtoBody()
Group31 = x3d.Group()
Transform32 = x3d.Transform(DEF="protoSlider")
Transform33 = x3d.Transform(DEF="protoTransform")
PlaneSensor34 = x3d.PlaneSensor(DEF="protoSensor")
PlaneSensor34.maxPosition = [1,0]

Transform33.children.append(PlaneSensor34)
Transform35 = x3d.Transform()
TouchSensor36 = x3d.TouchSensor(DEF="protoTS")

Transform35.children.append(TouchSensor36)

Transform33.children.append(Transform35)
Transform37 = x3d.Transform()
Shape38 = x3d.Shape()
Appearance39 = x3d.Appearance()
Material40 = x3d.Material()

Appearance39.material = Material40

Shape38.appearance = Appearance39
Text41 = x3d.Text(DEF="protoText")
FontStyle42 = x3d.FontStyle()
FontStyle42.size = 0.23

Text41.fontStyle = FontStyle42
IS43 = x3d.IS()
connect44 = x3d.connect()
connect44.nodeField = "string"
connect44.protoField = "textString"

IS43.connect.append(connect44)

Text41.IS = IS43

Shape38.geometry = Text41

Transform37.children.append(Shape38)

Transform33.children.append(Transform37)
IS45 = x3d.IS()
connect46 = x3d.connect()
connect46.nodeField = "translation"
connect46.protoField = "transformTranslation"

IS45.connect.append(connect46)
connect47 = x3d.connect()
connect47.nodeField = "translation"
connect47.protoField = "sensorTranslation"

IS45.connect.append(connect47)

Transform33.IS = IS45

Transform32.children.append(Transform33)
IS48 = x3d.IS()
connect49 = x3d.connect()
connect49.nodeField = "translation"
connect49.protoField = "sliderTranslation"

IS48.connect.append(connect49)

Transform32.IS = IS48

Group31.children.append(Transform32)
Script50 = x3d.Script(DEF="protoValueTransformerScript")
Script50.directOutput = True
Script50.mustEvaluate = True
field51 = x3d.field()
field51.accessType = "inputOutput"
field51.type = "SFFloat"
field51.name = "protoScale"

Script50.field.append(field51)
field52 = x3d.field()
field52.accessType = "inputOutput"
field52.type = "SFString"
field52.name = "protoParameterName"

Script50.field.append(field52)
field53 = x3d.field()
field53.accessType = "inputOutput"
field53.type = "SFNode"
field53.name = "shader"

Script50.field.append(field53)
field54 = x3d.field()
field54.accessType = "inputOnly"
field54.type = "SFVec3f"
field54.name = "newTranslation"

Script50.field.append(field54)
field55 = x3d.field()
field55.accessType = "outputOnly"
field55.type = "SFFloat"
field55.name = "protoValue_changed"

Script50.field.append(field55)
field56 = x3d.field()
field56.accessType = "outputOnly"
field56.type = "MFString"
field56.name = "protoText_changed"

Script50.field.append(field56)

Script50.sourceCode = '''ecmascript:\n"+
"const newTranslation = function(Value) {\n"+
"	'use strict';\n"+
"	protoValue_changed = Value.x * protoScale;\n"+
"	protoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));\n"+
"\n"+
"        var orientation = Value.x;\n"+
"\n"+
"        var ps = Browser.currentScene.getNamedNode(\"protoSensor\");\n"+
"        var t = Browser.currentScene.getNamedNode(\"protoTransform\");\n"+
"        var txt = Browser.currentScene.getNamedNode(\"protoText\");\n"+
"        if (shader) {\n"+
"            shader.getField(protoParameterName).setValue(orientation * protoScale);\n"+
"        }\n"+
"        if (txt) {\n"+
"            var stringField = txt.getField(\"string\");\n"+
"            var label = protoParameterName;\n"+
"            stringField.setValue(new MFString(label+\"=\"+(orientation * protoScale).toFixed(2)));\n"+
"        }\n"+
"        if (ps) {\n"+
"            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);\n"+
"        }\n"+
"        if (t) {\n"+
"            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);\n"+
"        }\n"+
"}'''
IS57 = x3d.IS()
connect58 = x3d.connect()
connect58.nodeField = "protoScale"
connect58.protoField = "parameterScale"

IS57.connect.append(connect58)
connect59 = x3d.connect()
connect59.nodeField = "protoParameterName"
connect59.protoField = "parameterName"

IS57.connect.append(connect59)
connect60 = x3d.connect()
connect60.nodeField = "shader"
connect60.protoField = "shaderNode"

IS57.connect.append(connect60)

Script50.IS = IS57

Group31.children.append(Script50)

ProtoBody30.children.append(Group31)
ROUTE61 = x3d.ROUTE()
ROUTE61.fromNode = "protoSensor"
ROUTE61.fromField = "translation_changed"
ROUTE61.toNode = "protoTransform"
ROUTE61.toField = "set_translation"

ProtoBody30.children.append(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.fromNode = "protoSensor"
ROUTE62.fromField = "translation_changed"
ROUTE62.toNode = "protoValueTransformerScript"
ROUTE62.toField = "newTranslation"

ProtoBody30.children.append(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.fromNode = "protoValueTransformerScript"
ROUTE63.fromField = "protoText_changed"
ROUTE63.toNode = "protoText"
ROUTE63.toField = "set_string"

ProtoBody30.children.append(ROUTE63)

ProtoDeclare21.ProtoBody = ProtoBody30

Scene20.children.append(ProtoDeclare21)
NavigationInfo64 = x3d.NavigationInfo()
NavigationInfo64.type = ["EXAMINE"]
NavigationInfo64.avatarSize = [0.25,1.75,0.75]

Scene20.children.append(NavigationInfo64)
DirectionalLight65 = x3d.DirectionalLight()
DirectionalLight65.ambientIntensity = 0.2
DirectionalLight65.direction = [0,-1,0]

Scene20.children.append(DirectionalLight65)
DirectionalLight66 = x3d.DirectionalLight()
DirectionalLight66.ambientIntensity = 0.2
DirectionalLight66.direction = [-1,-0.1,-1]

Scene20.children.append(DirectionalLight66)
Viewpoint67 = x3d.Viewpoint()
Viewpoint67.description = "My Overview"
Viewpoint67.position = [0,1.75,60]
Viewpoint67.fieldOfView = 1.570796

Scene20.children.append(Viewpoint67)
LayerSet68 = x3d.LayerSet()
LayerSet68.activeLayer = 1
LayerSet68.order = [1,2]
Layer69 = x3d.Layer()
Group70 = x3d.Group()
Transform71 = x3d.Transform()
Transform71.translation = [25,0,0]
Transform71.rotation = [0,0,-1,1.57]
Shape72 = x3d.Shape()
Appearance73 = x3d.Appearance()
Material74 = x3d.Material(DEF="RED")
Material74.diffuseColor = [1,0,0]
Material74.emissiveColor = [1,0,0]

Appearance73.material = Material74

Shape72.appearance = Appearance73
Cylinder75 = x3d.Cylinder(DEF="Shaft")
Cylinder75.height = 50
Cylinder75.radius = 0.35

Shape72.geometry = Cylinder75

Transform71.children.append(Shape72)

Group70.children.append(Transform71)
Transform76 = x3d.Transform()
Transform76.translation = [50,0,0]
Transform76.rotation = [0,0,-1,1.57]
Shape77 = x3d.Shape()
Appearance78 = x3d.Appearance()
Material79 = x3d.Material(USE="RED")

Appearance78.material = Material79

Shape77.appearance = Appearance78
Cone80 = x3d.Cone(DEF="Tip")
Cone80.height = 3
Cone80.bottomRadius = 0.8

Shape77.geometry = Cone80

Transform76.children.append(Shape77)

Group70.children.append(Transform76)
Transform81 = x3d.Transform()
Transform81.translation = [0,25,0]
Shape82 = x3d.Shape()
Appearance83 = x3d.Appearance()
Material84 = x3d.Material(DEF="GREEN")
Material84.diffuseColor = [0,1,0]
Material84.emissiveColor = [0,1,0]

Appearance83.material = Material84

Shape82.appearance = Appearance83
Cylinder85 = x3d.Cylinder(USE="Shaft")

Shape82.geometry = Cylinder85

Transform81.children.append(Shape82)

Group70.children.append(Transform81)
Transform86 = x3d.Transform()
Transform86.translation = [0,50,0]
Shape87 = x3d.Shape()
Appearance88 = x3d.Appearance()
Material89 = x3d.Material(USE="GREEN")

Appearance88.material = Material89

Shape87.appearance = Appearance88
Cone90 = x3d.Cone(USE="Tip")

Shape87.geometry = Cone90

Transform86.children.append(Shape87)

Group70.children.append(Transform86)
Transform91 = x3d.Transform()
Transform91.translation = [0,0,25]
Transform91.rotation = [1,0,0,1.57]
Shape92 = x3d.Shape()
Appearance93 = x3d.Appearance()
Material94 = x3d.Material(DEF="BLUE")
Material94.diffuseColor = [0,0,1]
Material94.emissiveColor = [0,0,1]

Appearance93.material = Material94

Shape92.appearance = Appearance93
Cylinder95 = x3d.Cylinder(USE="Shaft")

Shape92.geometry = Cylinder95

Transform91.children.append(Shape92)

Group70.children.append(Transform91)
Transform96 = x3d.Transform()
Transform96.translation = [0,0,50]
Transform96.rotation = [1,0,0,1.57]
Shape97 = x3d.Shape()
Appearance98 = x3d.Appearance()
Material99 = x3d.Material(USE="BLUE")

Appearance98.material = Material99

Shape97.appearance = Appearance98
Cone100 = x3d.Cone(USE="Tip")

Shape97.geometry = Cone100

Transform96.children.append(Shape97)

Group70.children.append(Transform96)

Layer69.children.append(Group70)
Transform101 = x3d.Transform(DEF="FlowerTransform")
Background102 = x3d.Background()
Background102.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background102.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background102.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background102.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background102.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]
Background102.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

Transform101.children.append(Background102)
Transform103 = x3d.Transform()
Shape104 = x3d.Shape()
Appearance105 = x3d.Appearance()
Material106 = x3d.Material()
Material106.diffuseColor = [0.7,0.7,0.7]
Material106.specularColor = [0.5,0.5,0.5]

Appearance105.material = Material106
ComposedCubeMapTexture107 = x3d.ComposedCubeMapTexture(DEF="texture")
ImageTexture108 = x3d.ImageTexture()
ImageTexture108.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture107.frontTexture = ImageTexture108
ImageTexture109 = x3d.ImageTexture()
ImageTexture109.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture107.backTexture = ImageTexture109
ImageTexture110 = x3d.ImageTexture()
ImageTexture110.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture107.leftTexture = ImageTexture110
ImageTexture111 = x3d.ImageTexture()
ImageTexture111.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture107.rightTexture = ImageTexture111
ImageTexture112 = x3d.ImageTexture()
ImageTexture112.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture107.topTexture = ImageTexture112
ImageTexture113 = x3d.ImageTexture()
ImageTexture113.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture107.bottomTexture = ImageTexture113

Appearance105.texture = ComposedCubeMapTexture107
ComposedShader114 = x3d.ComposedShader(DEF="freewrlShader")
ComposedShader114.language = "GLSL"
ShaderPart115 = x3d.ShaderPart()
ShaderPart115.url = ["../shaders/freewrl_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"]

ComposedShader114.parts.append(ShaderPart115)
ShaderPart116 = x3d.ShaderPart()
ShaderPart116.type = "FRAGMENT"
ShaderPart116.url = ["../shaders/freewrl.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"]

ComposedShader114.parts.append(ShaderPart116)
field117 = x3d.field()
field117.accessType = "inputOnly"
field117.type = "SFVec3f"
field117.name = "chromaticDispertion"

ComposedShader114.field.append(field117)
field118 = x3d.field()
field118.accessType = "inputOnly"
field118.type = "SFInt32"
field118.name = "fw_textureCoordGenType"

ComposedShader114.field.append(field118)
field119 = x3d.field()
field119.accessType = "inputOnly"
field119.type = "SFFloat"
field119.name = "bias"

ComposedShader114.field.append(field119)
field120 = x3d.field()
field120.accessType = "inputOnly"
field120.type = "SFFloat"
field120.name = "scale"

ComposedShader114.field.append(field120)
field121 = x3d.field()
field121.accessType = "inputOnly"
field121.type = "SFFloat"
field121.name = "power"

ComposedShader114.field.append(field121)
field122 = x3d.field()
field122.accessType = "inputOutput"
field122.type = "SFFloat"
field122.name = "a"
field122.value = 15

ComposedShader114.field.append(field122)
field123 = x3d.field()
field123.accessType = "inputOutput"
field123.type = "SFFloat"
field123.name = "b"
field123.value = 5

ComposedShader114.field.append(field123)
field124 = x3d.field()
field124.accessType = "inputOutput"
field124.type = "SFFloat"
field124.name = "c"
field124.value = 5

ComposedShader114.field.append(field124)
field125 = x3d.field()
field125.accessType = "inputOutput"
field125.type = "SFFloat"
field125.name = "d"
field125.value = 5

ComposedShader114.field.append(field125)
field126 = x3d.field()
field126.accessType = "inputOutput"
field126.type = "SFFloat"
field126.name = "tdelta"

ComposedShader114.field.append(field126)
field127 = x3d.field()
field127.accessType = "inputOutput"
field127.type = "SFFloat"
field127.name = "pdelta"

ComposedShader114.field.append(field127)

Appearance105.shaders.append(ComposedShader114)

Shape104.appearance = Appearance105
IndexedFaceSet128 = x3d.IndexedFaceSet(DEF="Orbit")
IndexedFaceSet128.convex = False
Coordinate129 = x3d.Coordinate(DEF="OrbitCoordinates")

IndexedFaceSet128.coord = Coordinate129

Shape104.geometry = IndexedFaceSet128

Transform103.children.append(Shape104)

Transform101.children.append(Transform103)

Layer69.children.append(Transform101)
Script130 = x3d.Script(DEF="OrbitScript")
field131 = x3d.field()
field131.accessType = "inputOutput"
field131.type = "MFVec3f"
field131.name = "coordinates"

Script130.field.append(field131)
field132 = x3d.field()
field132.accessType = "outputOnly"
field132.type = "MFInt32"
field132.name = "coordIndexes"

Script130.field.append(field132)
field133 = x3d.field()
field133.accessType = "inputOutput"
field133.type = "SFFloat"
field133.name = "a"
field133.value = 10

Script130.field.append(field133)
field134 = x3d.field()
field134.accessType = "inputOutput"
field134.type = "SFFloat"
field134.name = "b"
field134.value = 10

Script130.field.append(field134)
field135 = x3d.field()
field135.accessType = "inputOutput"
field135.type = "SFFloat"
field135.name = "c"
field135.value = 2

Script130.field.append(field135)
field136 = x3d.field()
field136.accessType = "inputOutput"
field136.type = "SFFloat"
field136.name = "d"
field136.value = 2

Script130.field.append(field136)
field137 = x3d.field()
field137.accessType = "inputOutput"
field137.type = "SFFloat"
field137.name = "pdelta"

Script130.field.append(field137)
field138 = x3d.field()
field138.accessType = "inputOutput"
field138.type = "SFFloat"
field138.name = "tdelta"

Script130.field.append(field138)

Script130.sourceCode = '''ecmascript:\n"+
"function initialize() {\n"+
"     var resolution = 100;\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = new MFVec3f();\n"+
"     var vecCount = 0;\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"		crds[vecCount] = new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		);\n"+
"		vecCount++;\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = crds;\n"+
"     // coordinates = new MFVec3f(...crds);\n"+
"\n"+
"\n"+
"     var cis = new MFInt32();\n"+
"     var intCount = 0;\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis[intCount++] = i*resolution+j;\n"+
"	     cis[intCount++] = i*resolution+j+1;\n"+
"	     cis[intCount++] = (i+1)*resolution+j+1;\n"+
"	     cis[intCount++] = (i+1)*resolution+j;\n"+
"	     cis[intCount++] = -1;\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = cis;\n"+
"    // coordIndexes = new MFInt32(...cis);\n"+
"}'''

Layer69.children.append(Script130)
DISEntityManager139 = x3d.DISEntityManager(DEF="EntityManager")
DISEntityTypeMapping140 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping140.url = ["../data/Gramps8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"]
DISEntityTypeMapping140.category = 77
DISEntityTypeMapping140.specific = 1

DISEntityManager139.children.append(DISEntityTypeMapping140)
DISEntityTypeMapping141 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping141.url = ["../data/Leif8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"]
DISEntityTypeMapping141.category = 77
DISEntityTypeMapping141.specific = 2

DISEntityManager139.children.append(DISEntityTypeMapping141)
DISEntityTypeMapping142 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping142.url = ["../data/Lily8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"]
DISEntityTypeMapping142.category = 77
DISEntityTypeMapping142.specific = 3

DISEntityManager139.children.append(DISEntityTypeMapping142)
DISEntityTypeMapping143 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping143.url = ["../data/Tufani8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"]
DISEntityTypeMapping143.category = 77
DISEntityTypeMapping143.specific = 4

DISEntityManager139.children.append(DISEntityTypeMapping143)

Layer69.children.append(DISEntityManager139)
Collision144 = x3d.Collision()
Collision144.enabled = False
Group145 = x3d.Group(DEF="AvatarHolder")

Collision144.proxy = Group145

Layer69.children.append(Collision144)

LayerSet68.layers.append(Layer69)
LayoutLayer146 = x3d.LayoutLayer()
Layout147 = x3d.Layout()
Layout147.align = ["LEFT","BOTTOM"]
Layout147.offset = [-0.2,0.19]
Layout147.size = [0.4,0.6]

LayoutLayer146.layout = Layout147
Viewport148 = x3d.Viewport()

LayoutLayer146.viewport = Viewport148
Transform149 = x3d.Transform()
Transform149.translation = [0,0,-3]
Shape150 = x3d.Shape()
Appearance151 = x3d.Appearance()
Material152 = x3d.Material()
Material152.diffuseColor = [0,0,0]
Material152.transparency = 0.7

Appearance151.material = Material152

Shape150.appearance = Appearance151
Box153 = x3d.Box()
Box153.size = [100,100,0.02]

Shape150.geometry = Box153

Transform149.children.append(Shape150)

LayoutLayer146.children.append(Transform149)
Transform154 = x3d.Transform(DEF="equationTransform")
Transform155 = x3d.Transform()
Transform155.translation = [0,0,-20]
Shape156 = x3d.Shape()
Appearance157 = x3d.Appearance()
Material158 = x3d.Material()
Material158.diffuseColor = [1,1,0]

Appearance157.material = Material158

Shape156.appearance = Appearance157
Text159 = x3d.Text(DEF="equation")
Text159.string = ["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"]
FontStyle160 = x3d.FontStyle()
FontStyle160.size = 0.09

Text159.fontStyle = FontStyle160

Shape156.geometry = Text159

Transform155.children.append(Shape156)

Transform154.children.append(Transform155)

LayoutLayer146.children.append(Transform154)
ProtoInstance161 = x3d.ProtoInstance(DEF="aPI")
ProtoInstance161.name = "SliderProto"
fieldValue162 = x3d.fieldValue()
fieldValue162.name = "shaderNode"
ComposedShader163 = x3d.ComposedShader(USE="freewrlShader")

fieldValue162.children.append(ComposedShader163)

ProtoInstance161.fieldValue.append(fieldValue162)

LayoutLayer146.children.append(ProtoInstance161)
ProtoInstance164 = x3d.ProtoInstance(DEF="bPI")
ProtoInstance164.name = "SliderProto"
fieldValue165 = x3d.fieldValue()
fieldValue165.name = "sliderTranslation"
fieldValue165.value = "0 0.4 0"

ProtoInstance164.fieldValue.append(fieldValue165)
fieldValue166 = x3d.fieldValue()
fieldValue166.name = "textString"
fieldValue166.value = "\"b=\""

ProtoInstance164.fieldValue.append(fieldValue166)
fieldValue167 = x3d.fieldValue()
fieldValue167.name = "parameterName"
fieldValue167.value = "b"

ProtoInstance164.fieldValue.append(fieldValue167)
fieldValue168 = x3d.fieldValue()
fieldValue168.name = "shaderNode"
ComposedShader169 = x3d.ComposedShader(USE="freewrlShader")

fieldValue168.children.append(ComposedShader169)

ProtoInstance164.fieldValue.append(fieldValue168)

LayoutLayer146.children.append(ProtoInstance164)
ProtoInstance170 = x3d.ProtoInstance(DEF="cPI")
ProtoInstance170.name = "SliderProto"
fieldValue171 = x3d.fieldValue()
fieldValue171.name = "sliderTranslation"
fieldValue171.value = "0 0.1 0"

ProtoInstance170.fieldValue.append(fieldValue171)
fieldValue172 = x3d.fieldValue()
fieldValue172.name = "textString"
fieldValue172.value = "\"c=\""

ProtoInstance170.fieldValue.append(fieldValue172)
fieldValue173 = x3d.fieldValue()
fieldValue173.name = "parameterScale"
fieldValue173.value = "20"

ProtoInstance170.fieldValue.append(fieldValue173)
fieldValue174 = x3d.fieldValue()
fieldValue174.name = "parameterName"
fieldValue174.value = "c"

ProtoInstance170.fieldValue.append(fieldValue174)
fieldValue175 = x3d.fieldValue()
fieldValue175.name = "shaderNode"
ComposedShader176 = x3d.ComposedShader(USE="freewrlShader")

fieldValue175.children.append(ComposedShader176)

ProtoInstance170.fieldValue.append(fieldValue175)

LayoutLayer146.children.append(ProtoInstance170)
ProtoInstance177 = x3d.ProtoInstance(DEF="dPI")
ProtoInstance177.name = "SliderProto"
fieldValue178 = x3d.fieldValue()
fieldValue178.name = "sliderTranslation"
fieldValue178.value = "0 -0.2 0"

ProtoInstance177.fieldValue.append(fieldValue178)
fieldValue179 = x3d.fieldValue()
fieldValue179.name = "textString"
fieldValue179.value = "\"d=\""

ProtoInstance177.fieldValue.append(fieldValue179)
fieldValue180 = x3d.fieldValue()
fieldValue180.name = "parameterScale"
fieldValue180.value = "20"

ProtoInstance177.fieldValue.append(fieldValue180)
fieldValue181 = x3d.fieldValue()
fieldValue181.name = "parameterName"
fieldValue181.value = "d"

ProtoInstance177.fieldValue.append(fieldValue181)
fieldValue182 = x3d.fieldValue()
fieldValue182.name = "shaderNode"
ComposedShader183 = x3d.ComposedShader(USE="freewrlShader")

fieldValue182.children.append(ComposedShader183)

ProtoInstance177.fieldValue.append(fieldValue182)

LayoutLayer146.children.append(ProtoInstance177)
ProtoInstance184 = x3d.ProtoInstance(DEF="tdeltaPI")
ProtoInstance184.name = "SliderProto"
fieldValue185 = x3d.fieldValue()
fieldValue185.name = "sliderTranslation"
fieldValue185.value = "0 -0.5 0"

ProtoInstance184.fieldValue.append(fieldValue185)
fieldValue186 = x3d.fieldValue()
fieldValue186.name = "textString"
fieldValue186.value = "\"tdelta=\""

ProtoInstance184.fieldValue.append(fieldValue186)
fieldValue187 = x3d.fieldValue()
fieldValue187.name = "parameterScale"
fieldValue187.value = "6.28"

ProtoInstance184.fieldValue.append(fieldValue187)
fieldValue188 = x3d.fieldValue()
fieldValue188.name = "parameterName"
fieldValue188.value = "tdelta"

ProtoInstance184.fieldValue.append(fieldValue188)
fieldValue189 = x3d.fieldValue()
fieldValue189.name = "shaderNode"
ComposedShader190 = x3d.ComposedShader(USE="freewrlShader")

fieldValue189.children.append(ComposedShader190)

ProtoInstance184.fieldValue.append(fieldValue189)

LayoutLayer146.children.append(ProtoInstance184)
ProtoInstance191 = x3d.ProtoInstance(DEF="pdeltaPI")
ProtoInstance191.name = "SliderProto"
fieldValue192 = x3d.fieldValue()
fieldValue192.name = "sliderTranslation"
fieldValue192.value = "0 -0.8 0"

ProtoInstance191.fieldValue.append(fieldValue192)
fieldValue193 = x3d.fieldValue()
fieldValue193.name = "textString"
fieldValue193.value = "\"pdelta=\""

ProtoInstance191.fieldValue.append(fieldValue193)
fieldValue194 = x3d.fieldValue()
fieldValue194.name = "parameterScale"
fieldValue194.value = "6.28"

ProtoInstance191.fieldValue.append(fieldValue194)
fieldValue195 = x3d.fieldValue()
fieldValue195.name = "parameterName"
fieldValue195.value = "pdelta"

ProtoInstance191.fieldValue.append(fieldValue195)
fieldValue196 = x3d.fieldValue()
fieldValue196.name = "shaderNode"
ComposedShader197 = x3d.ComposedShader(USE="freewrlShader")

fieldValue196.children.append(ComposedShader197)

ProtoInstance191.fieldValue.append(fieldValue196)

LayoutLayer146.children.append(ProtoInstance191)

LayerSet68.layers.append(LayoutLayer146)

Scene20.layerSet = LayerSet68
ROUTE198 = x3d.ROUTE()
ROUTE198.fromNode = "OrbitScript"
ROUTE198.fromField = "coordIndexes"
ROUTE198.toNode = "Orbit"
ROUTE198.toField = "set_coordIndex"

Scene20.children.append(ROUTE198)
ROUTE199 = x3d.ROUTE()
ROUTE199.fromNode = "OrbitScript"
ROUTE199.fromField = "coordinates_changed"
ROUTE199.toNode = "OrbitCoordinates"
ROUTE199.toField = "set_point"

Scene20.children.append(ROUTE199)
ROUTE200 = x3d.ROUTE()
ROUTE200.fromNode = "EntityManager"
ROUTE200.fromField = "addedEntities"
ROUTE200.toNode = "AvatarHolder"
ROUTE200.toField = "addChildren"

Scene20.children.append(ROUTE200)
ROUTE201 = x3d.ROUTE()
ROUTE201.fromNode = "EntityManager"
ROUTE201.fromField = "removedEntities"
ROUTE201.toNode = "AvatarHolder"
ROUTE201.toField = "removeChildren"

Scene20.children.append(ROUTE201)

X3D0.Scene = Scene20
f = open("../data/bumpyfreewrljsonverse.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/bumpyfreewrljsonverse.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/bumpyfreewrljsonverse.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
