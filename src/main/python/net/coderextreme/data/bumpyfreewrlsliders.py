print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
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
component11 = x3d.component()
component11.name = "DIS"
component11.level = 2

head1.children.append(component11)
meta12 = x3d.meta()
meta12.name = "title"
meta12.content = "bumpyfreewrlsliders.x3d"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "description"
meta13.content = "Bumpy Orbitals with Sliders for FreeWRL"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "creator"
meta14.content = "Doug Sanden, Christoph Valentin, John Carlson"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "identifier"
meta15.content = "https:/coderextreme.net/X3DJSONLD/src/main/data/bumpyfreewrlsliders.x3d"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "license"
meta16.content = "license.html"

head1.children.append(meta16)

X3D0.head = head1
Scene17 = x3d.Scene()
"""LayerSet with two layers, navigation happens in layer 1"""
LayerSet18 = x3d.LayerSet()
LayerSet18.activeLayer = 1
LayerSet18.order = [1,2]
"""the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\""""
"""the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)"""
Layer19 = x3d.Layer()
Layer19.pickable = True
Layer19.objectType = ["ALL"]
"""basic nodes, which might be present in any scene"""
NavigationInfo20 = x3d.NavigationInfo()
NavigationInfo20.type = ["EXAMINE","FLY","LOOKAT","ANY"]
NavigationInfo20.avatarSize = [0.25,1.75,0.75]

Layer19.children.append(NavigationInfo20)
DirectionalLight21 = x3d.DirectionalLight()
DirectionalLight21.ambientIntensity = 0.2
DirectionalLight21.direction = [0,-1,0]

Layer19.children.append(DirectionalLight21)
DirectionalLight22 = x3d.DirectionalLight()
DirectionalLight22.ambientIntensity = 0.2
DirectionalLight22.direction = [-1,-0.1,-1]

Layer19.children.append(DirectionalLight22)
Viewpoint23 = x3d.Viewpoint()
Viewpoint23.description = "My Overview"
Viewpoint23.fieldOfView = 1.570796
Viewpoint23.position = [0,1.75,60]

Layer19.children.append(Viewpoint23)
"""this group contains the red/green/blue 3D crosshair"""
Group24 = x3d.Group()
"""Arrow X"""
Transform25 = x3d.Transform()
Transform25.translation = [25,0,0]
Transform25.rotation = [0,0,-1,1.57]
Shape26 = x3d.Shape()
Cylinder27 = x3d.Cylinder()
Cylinder27.DEF = "Shaft"
Cylinder27.radius = 0.35
Cylinder27.height = 50

Shape26.geometry = Cylinder27
Appearance28 = x3d.Appearance()
Material29 = x3d.Material()
Material29.DEF = "RED"
Material29.diffuseColor = [1,0,0]
Material29.emissiveColor = [1,0,0]

Appearance28.material = Material29

Shape26.appearance = Appearance28

Transform25.children.append(Shape26)

Group24.children.append(Transform25)
Transform30 = x3d.Transform()
Transform30.translation = [50,0,0]
Transform30.rotation = [0,0,-1,1.57]
Shape31 = x3d.Shape()
Cone32 = x3d.Cone()
Cone32.DEF = "Tip"
Cone32.bottomRadius = 0.8
Cone32.height = 3

Shape31.geometry = Cone32
Appearance33 = x3d.Appearance()
Material34 = x3d.Material()
Material34.USE = "RED"

Appearance33.material = Material34

Shape31.appearance = Appearance33

Transform30.children.append(Shape31)

Group24.children.append(Transform30)
"""Arrow Y"""
Transform35 = x3d.Transform()
Transform35.translation = [0,25,0]
Shape36 = x3d.Shape()
Cylinder37 = x3d.Cylinder()
Cylinder37.USE = "Shaft"

Shape36.geometry = Cylinder37
Appearance38 = x3d.Appearance()
Material39 = x3d.Material()
Material39.DEF = "GREEN"
Material39.diffuseColor = [0,1,0]
Material39.emissiveColor = [0,1,0]

Appearance38.material = Material39

Shape36.appearance = Appearance38

Transform35.children.append(Shape36)

Group24.children.append(Transform35)
Transform40 = x3d.Transform()
Transform40.translation = [0,50,0]
Shape41 = x3d.Shape()
Cone42 = x3d.Cone()
Cone42.USE = "Tip"

Shape41.geometry = Cone42
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()
Material44.USE = "GREEN"

Appearance43.material = Material44

Shape41.appearance = Appearance43

Transform40.children.append(Shape41)

Group24.children.append(Transform40)
"""Arrow Z"""
Transform45 = x3d.Transform()
Transform45.translation = [0,0,25]
Transform45.rotation = [1,0,0,1.57]
Shape46 = x3d.Shape()
Cylinder47 = x3d.Cylinder()
Cylinder47.USE = "Shaft"

Shape46.geometry = Cylinder47
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.DEF = "BLUE"
Material49.diffuseColor = [0,0,1]
Material49.emissiveColor = [0,0,1]

Appearance48.material = Material49

Shape46.appearance = Appearance48

Transform45.children.append(Shape46)

Group24.children.append(Transform45)
Transform50 = x3d.Transform()
Transform50.translation = [0,0,50]
Transform50.rotation = [1,0,0,1.57]
Shape51 = x3d.Shape()
Cone52 = x3d.Cone()
Cone52.USE = "Tip"

Shape51.geometry = Cone52
Appearance53 = x3d.Appearance()
Material54 = x3d.Material()
Material54.USE = "BLUE"

Appearance53.material = Material54

Shape51.appearance = Appearance53

Transform50.children.append(Shape51)

Group24.children.append(Transform50)

Layer19.children.append(Group24)
"""the model that is being reviewed by the users of this scene"""
Transform55 = x3d.Transform()
Transform55.DEF = "FlowerTransform"
"""<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />"""
"""Images courtesy of Paul Debevec's Light Probe Image Gallery"""
Background56 = x3d.Background()
Background56.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background56.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]
Background56.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background56.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background56.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background56.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

Transform55.children.append(Background56)
Transform57 = x3d.Transform()
Shape58 = x3d.Shape()
Sphere59 = x3d.Sphere()
Sphere59.radius = 5

Shape58.geometry = Sphere59
"""<IndexedFaceSet convex=\"false\" DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>"""
Appearance60 = x3d.Appearance()
Material61 = x3d.Material()
Material61.diffuseColor = [0.7,0.7,0.7]
Material61.specularColor = [0.5,0.5,0.5]

Appearance60.material = Material61
ComposedCubeMapTexture62 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture62.DEF = "texture"
ImageTexture63 = x3d.ImageTexture()
ImageTexture63.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture62.back = ImageTexture63
ImageTexture64 = x3d.ImageTexture()
ImageTexture64.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture62.bottom.append(ImageTexture64)
ImageTexture65 = x3d.ImageTexture()
ImageTexture65.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture62.front.append(ImageTexture65)
ImageTexture66 = x3d.ImageTexture()
ImageTexture66.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture62.left.append(ImageTexture66)
ImageTexture67 = x3d.ImageTexture()
ImageTexture67.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture62.right.append(ImageTexture67)
ImageTexture68 = x3d.ImageTexture()
ImageTexture68.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture62.top.append(ImageTexture68)

Appearance60.texture = ComposedCubeMapTexture62
ComposedShader69 = x3d.ComposedShader()
ComposedShader69.DEF = "freewrlShader"
ComposedShader69.language = "GLSL"
field70 = x3d.field()
field70.name = "fw_textureCoordGenType"
field70.accessType = "inputOutput"
field70.type = "SFInt32"
field70.value = 0

ComposedShader69.field.append(field70)
field71 = x3d.field()
field71.name = "chromaticDispertion"
field71.accessType = "initializeOnly"
field71.type = "SFVec3f"
field71.value = [0.98,1,1.033]

ComposedShader69.field.append(field71)
field72 = x3d.field()
field72.name = "bias"
field72.type = "SFFloat"
field72.accessType = "inputOutput"
field72.value = 0.5

ComposedShader69.field.append(field72)
field73 = x3d.field()
field73.name = "scale"
field73.type = "SFFloat"
field73.accessType = "inputOutput"
field73.value = 0.5

ComposedShader69.field.append(field73)
field74 = x3d.field()
field74.name = "power"
field74.type = "SFFloat"
field74.accessType = "inputOutput"
field74.value = 2

ComposedShader69.field.append(field74)
field75 = x3d.field()
field75.name = "a"
field75.type = "SFFloat"
field75.accessType = "inputOutput"
field75.value = 15

ComposedShader69.field.append(field75)
field76 = x3d.field()
field76.name = "b"
field76.type = "SFFloat"
field76.accessType = "inputOutput"
field76.value = 5

ComposedShader69.field.append(field76)
field77 = x3d.field()
field77.name = "c"
field77.type = "SFFloat"
field77.accessType = "inputOutput"
field77.value = 20

ComposedShader69.field.append(field77)
field78 = x3d.field()
field78.name = "d"
field78.type = "SFFloat"
field78.accessType = "inputOutput"
field78.value = 20

ComposedShader69.field.append(field78)
field79 = x3d.field()
field79.name = "tdelta"
field79.type = "SFFloat"
field79.accessType = "inputOutput"
field79.value = 0

ComposedShader69.field.append(field79)
field80 = x3d.field()
field80.name = "pdelta"
field80.type = "SFFloat"
field80.accessType = "inputOutput"
field80.value = 0

ComposedShader69.field.append(field80)
"""<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>"""
ShaderPart81 = x3d.ShaderPart()
ShaderPart81.type = "VERTEX"
IS82 = x3d.IS()
connect83 = x3d.connect()
connect83.nodeField = "url"
connect83.protoField = "vertex"

IS82.connect.append(connect83)

ShaderPart81.IS = IS82

ComposedShader69.parts.append(ShaderPart81)
ShaderPart84 = x3d.ShaderPart()
ShaderPart84.type = "FRAGMENT"
IS85 = x3d.IS()
connect86 = x3d.connect()
connect86.nodeField = "url"
connect86.protoField = "fragment"

IS85.connect.append(connect86)

ShaderPart84.IS = IS85

ComposedShader69.parts.append(ShaderPart84)

Appearance60.shaders.append(ComposedShader69)
"""<ComposedShader DEF=\"freewrlShader\" language=\"GLSL\"> <field name='fw_textureCoordGenType' accessType='inputOutput' type='SFInt32' value='0'></field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='a' type='SFFloat' accessType='inputOutput' value='15'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='5'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <ShaderPart type='VERTEX'> <IS> <connect nodeField=\"url\" protoField=\"vertex\"/> </IS> </ShaderPart> <ShaderPart type='FRAGMENT'> <IS> <connect nodeField=\"url\" protoField=\"fragment\"/> </IS> </ShaderPart> </ComposedShader>"""

Shape58.appearance = Appearance60

Transform57.children.append(Shape58)

Transform55.children.append(Transform57)

Layer19.children.append(Transform55)
"""<Script DEF=\"OrbitScript\"> <field accessType=\"inputOutput\" name=\"coordinates\" type=\"MFVec3f\"/> <field accessType=\"outputOnly\" name=\"coordIndexes\" type=\"MFInt32\"/> <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <![CDATA[ecmascript: function initialize() { var resolution = 300; var theta = 0.0; var phi = 0.0; var delta = (2 * 3.141592653) / (resolution-1); var crds = new MFVec3f(); for ( i = 0; i < resolution; i++) { for ( j = 0; j < resolution; j++) { var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta); crds.push(new SFVec3f( rho * Math.cos(phi) * Math.cos(theta), rho * Math.cos(phi) * Math.sin(theta), rho * Math.sin(phi) )); theta += delta; } phi += delta; } coordinates = crds; var cis = new MFInt32(); for ( i = 0; i < resolution-1; i++) { for ( j = 0; j < resolution-1; j++) { cis.push(i*resolution+j); cis.push(i*resolution+j+1); cis.push((i+1)*resolution+j+1); cis.push((i+1)*resolution+j); cis.push(-1); } } coordIndexes = cis; } ]]></Script> <ROUTE fromField=\"coordIndexes\" fromNode=\"OrbitScript\" toField=\"set_coordIndex\" toNode=\"Orbit\"/> <ROUTE fromField=\"coordinates\" fromNode=\"OrbitScript\" toField=\"set_point\" toNode=\"OrbitCoordinates\"/>"""
"""DIS multiuser facilities"""
DISEntityManager87 = x3d.DISEntityManager()
DISEntityManager87.DEF = "EntityManager"
DISEntityTypeMapping88 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping88.category = 77
DISEntityTypeMapping88.specific = 1
DISEntityTypeMapping88.url = ["../data/Leif8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"]

DISEntityManager87.children.append(DISEntityTypeMapping88)
DISEntityTypeMapping89 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping89.category = 77
DISEntityTypeMapping89.specific = 2
DISEntityTypeMapping89.url = ["../data/Lily8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"]

DISEntityManager87.children.append(DISEntityTypeMapping89)
DISEntityTypeMapping90 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping90.category = 77
DISEntityTypeMapping90.specific = 3
DISEntityTypeMapping90.url = ["../data/Tufani8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"]

DISEntityManager87.children.append(DISEntityTypeMapping90)
DISEntityTypeMapping91 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping91.category = 77
DISEntityTypeMapping91.specific = 4
DISEntityTypeMapping91.url = ["../data/Gramps8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"]

DISEntityManager87.children.append(DISEntityTypeMapping91)

Layer19.children.append(DISEntityManager87)
Collision92 = x3d.Collision()
Group93 = x3d.Group()
Group93.DEF = "AvatarHolder"

Collision92.proxy = Group93

Layer19.children.append(Collision92)
ROUTE94 = x3d.ROUTE()
ROUTE94.fromField = "addedEntities"
ROUTE94.fromNode = "EntityManager"
ROUTE94.toField = "addChildren"
ROUTE94.toNode = "AvatarHolder"

Layer19.children.append(ROUTE94)
ROUTE95 = x3d.ROUTE()
ROUTE95.fromField = "removedEntities"
ROUTE95.fromNode = "EntityManager"
ROUTE95.toField = "removeChildren"
ROUTE95.toNode = "AvatarHolder"

Layer19.children.append(ROUTE95)

LayerSet18.layers.append(Layer19)
LayoutLayer96 = x3d.LayoutLayer()
LayoutLayer96.pickable = True
LayoutLayer96.objectType = ["ALL"]
"""positioning the LayoutLayer"""
"""clipping the LayoutLayer"""
"""the content (children) of the LayoutLayer"""
"""first, the slider for scaling the model"""
Transform97 = x3d.Transform()
Transform97.translation = [0,0,-3]
Shape98 = x3d.Shape()
Appearance99 = x3d.Appearance()
Material100 = x3d.Material()
Material100.diffuseColor = [0.1,0.1,0.1]
Material100.transparency = 1

Appearance99.material = Material100

Shape98.appearance = Appearance99
Box101 = x3d.Box()
Box101.size = [100,100,0.02]

Shape98.geometry = Box101

Transform97.children.append(Shape98)

LayoutLayer96.children.append(Transform97)
Transform102 = x3d.Transform()
Transform102.DEF = "equationTransform"
Transform103 = x3d.Transform()
Transform103.translation = [0,0,-20]
Shape104 = x3d.Shape()
Text105 = x3d.Text()
Text105.DEF = "equation"
Text105.string = ["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"]
FontStyle106 = x3d.FontStyle()
FontStyle106.size = 0.09

Text105.fontStyle = FontStyle106

Shape104.geometry = Text105
Appearance107 = x3d.Appearance()
Material108 = x3d.Material()
Material108.diffuseColor = [0,1,1]

Appearance107.material = Material108

Shape104.appearance = Appearance107

Transform103.children.append(Shape104)

Transform102.children.append(Transform103)

LayoutLayer96.children.append(Transform102)
ProtoDeclare109 = x3d.ProtoDeclare()
ProtoDeclare109.name = "SliderProto"
ProtoInterface110 = x3d.ProtoInterface()
field111 = x3d.field()
field111.name = "sliderTranslation"
field111.accessType = "inputOutput"
field111.type = "SFVec3f"
field111.value = [0,0.7,0]

ProtoInterface110.field.append(field111)
field112 = x3d.field()
field112.name = "transformTranslation"
field112.accessType = "inputOutput"
field112.type = "SFVec3f"
field112.value = [0,0,0.1]

ProtoInterface110.field.append(field112)
field113 = x3d.field()
field113.name = "sensorTranslation"
field113.accessType = "inputOutput"
field113.type = "SFVec3f"
field113.value = [0,0,0]

ProtoInterface110.field.append(field113)
field114 = x3d.field()
field114.name = "numberTranslation"
field114.accessType = "inputOutput"
field114.type = "SFVec3f"
field114.value = [0.2,0,0]

ProtoInterface110.field.append(field114)
field115 = x3d.field()
field115.name = "textString"
field115.accessType = "inputOutput"
field115.type = "MFString"
field115.value = ["a="]

ProtoInterface110.field.append(field115)
field116 = x3d.field()
field116.name = "parameterName"
field116.accessType = "inputOutput"
field116.type = "SFString"
field116.value = "a"

ProtoInterface110.field.append(field116)
field117 = x3d.field()
field117.name = "parameterScale"
field117.accessType = "inputOutput"
field117.type = "SFFloat"
field117.value = 30

ProtoInterface110.field.append(field117)
field118 = x3d.field()
field118.name = "shaderNode"
field118.accessType = "inputOutput"
field118.type = "SFNode"

ProtoInterface110.field.append(field118)

ProtoDeclare109.ProtoInterface = ProtoInterface110
ProtoBody119 = x3d.ProtoBody()
Group120 = x3d.Group()
Transform121 = x3d.Transform()
Transform121.DEF = "protoSlider"
Transform121.translation = [0,0.7,0]
IS122 = x3d.IS()
connect123 = x3d.connect()
connect123.nodeField = "translation"
connect123.protoField = "sliderTranslation"

IS122.connect.append(connect123)

Transform121.IS = IS122
Transform124 = x3d.Transform()
Transform124.DEF = "protoTransform"
Transform124.translation = [0,0,0.1]
IS125 = x3d.IS()
connect126 = x3d.connect()
connect126.nodeField = "translation"
connect126.protoField = "sensorTranslation"

IS125.connect.append(connect126)

Transform124.IS = IS125
PlaneSensor127 = x3d.PlaneSensor()
PlaneSensor127.DEF = "protoSensor"
PlaneSensor127.maxPosition = [2,0]

Transform124.children.append(PlaneSensor127)
Transform128 = x3d.Transform()
Transform128.translation = [0,0,0]
TouchSensor129 = x3d.TouchSensor()
TouchSensor129.DEF = "protoTS"

Transform128.children.append(TouchSensor129)

Transform124.children.append(Transform128)
Transform130 = x3d.Transform()
Shape131 = x3d.Shape()
Text132 = x3d.Text()
Text132.DEF = "protoText"
Text132.string = ["a="]
IS133 = x3d.IS()
connect134 = x3d.connect()
connect134.nodeField = "string"
connect134.protoField = "textString"

IS133.connect.append(connect134)

Text132.IS = IS133
FontStyle135 = x3d.FontStyle()
FontStyle135.size = 0.2

Text132.fontStyle = FontStyle135

Shape131.geometry = Text132
Appearance136 = x3d.Appearance()
Material137 = x3d.Material()
Material137.diffuseColor = [1,1,1]

Appearance136.material = Material137

Shape131.appearance = Appearance136

Transform130.children.append(Shape131)
Transform138 = x3d.Transform()
IS139 = x3d.IS()
connect140 = x3d.connect()
connect140.nodeField = "translation"
connect140.protoField = "numberTranslation"

IS139.connect.append(connect140)

Transform138.IS = IS139
Shape141 = x3d.Shape()
Text142 = x3d.Text()
Text142.DEF = "protoNumber"
Text142.string = ["0"]
FontStyle143 = x3d.FontStyle()
FontStyle143.size = 0.2

Text142.fontStyle = FontStyle143

Shape141.geometry = Text142
Appearance144 = x3d.Appearance()
Material145 = x3d.Material()
Material145.diffuseColor = [1,1,1]

Appearance144.material = Material145

Shape141.appearance = Appearance144

Transform138.children.append(Shape141)

Transform130.children.append(Transform138)

Transform124.children.append(Transform130)

Transform121.children.append(Transform124)

Group120.children.append(Transform121)
Script146 = x3d.Script()
Script146.DEF = "protoValueTransformerScript"
Script146.directOutput = True
Script146.mustEvaluate = True
field147 = x3d.field()
field147.name = "protoScale"
field147.accessType = "inputOutput"
field147.type = "SFFloat"
field147.value = 30

Script146.field.append(field147)
field148 = x3d.field()
field148.name = "shader"
field148.accessType = "inputOutput"
field148.type = "SFNode"

Script146.field.append(field148)
field149 = x3d.field()
field149.name = "newTranslation"
field149.accessType = "inputOutput"
field149.type = "SFVec3f"
field149.value = [1,1,1]

Script146.field.append(field149)
field150 = x3d.field()
field150.name = "protoValue_changed"
field150.accessType = "inputOutput"
field150.type = "SFFloat"
field150.value = 1

Script146.field.append(field150)
field151 = x3d.field()
field151.name = "protoNumber_changed"
field151.accessType = "inputOutput"
field151.type = "MFString"
field151.value = ["0.0"]

Script146.field.append(field151)
field152 = x3d.field()
field152.name = "protoParameterName"
field152.accessType = "inputOutput"
field152.type = "SFString"
field152.value = "a"

Script146.field.append(field152)
IS153 = x3d.IS()
connect154 = x3d.connect()
connect154.nodeField = "protoScale"
connect154.protoField = "parameterScale"

IS153.connect.append(connect154)
connect155 = x3d.connect()
connect155.nodeField = "protoParameterName"
connect155.protoField = "parameterName"

IS153.connect.append(connect155)
connect156 = x3d.connect()
connect156.nodeField = "shader"
connect156.protoField = "shaderNode"

IS153.connect.append(connect156)

Script146.IS = IS153

Script146.sourceCode = '''ecmascript:\n"+
"	const newTranslation = function(Value) {\n"+
"	    protoValue_changed = Value[0] * protoScale;\n"+
"	    protoNumber_changed = new MFString(protoValue_changed.toFixed(2).toString());\n"+
"	    Browser.println(\"In newTranslation:\");\n"+
"	    Browser.println(shader);\n"+
"	    Browser.println(Value[0]);\n"+
"	    Browser.println(Value.x);\n"+
"	    Browser.println(protoScale);\n"+
"	    Browser.println(Value[0] * protoScale);\n"+
"	    Browser.println(protoParameterName);\n"+
"					// shader[protoParameterName] = Value[0] * protoScale;\n"+
"	};'''

Group120.children.append(Script146)
ROUTE157 = x3d.ROUTE()
ROUTE157.fromField = "translation_changed"
ROUTE157.fromNode = "protoSensor"
ROUTE157.toField = "set_translation"
ROUTE157.toNode = "protoTransform"

Group120.children.append(ROUTE157)
ROUTE158 = x3d.ROUTE()
ROUTE158.fromField = "translation_changed"
ROUTE158.fromNode = "protoSensor"
ROUTE158.toField = "newTranslation"
ROUTE158.toNode = "protoValueTransformerScript"

Group120.children.append(ROUTE158)
ROUTE159 = x3d.ROUTE()
ROUTE159.fromField = "protoNumber_changed"
ROUTE159.fromNode = "protoValueTransformerScript"
ROUTE159.toField = "string"
ROUTE159.toNode = "protoNumber"

Group120.children.append(ROUTE159)

ProtoBody119.children.append(Group120)

ProtoDeclare109.ProtoBody = ProtoBody119

LayoutLayer96.children.append(ProtoDeclare109)
ProtoInstance160 = x3d.ProtoInstance()
ProtoInstance160.name = "SliderProto"
ProtoInstance160.DEF = "aPI"
fieldValue161 = x3d.fieldValue()
fieldValue161.name = "sliderTranslation"
fieldValue161.value = "0 0.7 0"

ProtoInstance160.fieldValue.append(fieldValue161)
fieldValue162 = x3d.fieldValue()
fieldValue162.name = "transformTranslation"
fieldValue162.value = "0 0 0.1"

ProtoInstance160.fieldValue.append(fieldValue162)
fieldValue163 = x3d.fieldValue()
fieldValue163.name = "sensorTranslation"
fieldValue163.value = "0 0 0"

ProtoInstance160.fieldValue.append(fieldValue163)
fieldValue164 = x3d.fieldValue()
fieldValue164.name = "numberTranslation"
fieldValue164.value = "0.3 0 0"

ProtoInstance160.fieldValue.append(fieldValue164)
fieldValue165 = x3d.fieldValue()
fieldValue165.name = "textString"
fieldValue165.value = "\"a=\""

ProtoInstance160.fieldValue.append(fieldValue165)
fieldValue166 = x3d.fieldValue()
fieldValue166.name = "parameterName"
fieldValue166.value = "a"

ProtoInstance160.fieldValue.append(fieldValue166)
fieldValue167 = x3d.fieldValue()
fieldValue167.name = "parameterScale"
fieldValue167.value = "30"

ProtoInstance160.fieldValue.append(fieldValue167)
fieldValue168 = x3d.fieldValue()
fieldValue168.name = "shaderNode"
ComposedShader169 = x3d.ComposedShader()
ComposedShader169.USE = "freewrlShader"

fieldValue168.children.append(ComposedShader169)

ProtoInstance160.fieldValue.append(fieldValue168)

LayoutLayer96.children.append(ProtoInstance160)
ProtoInstance170 = x3d.ProtoInstance()
ProtoInstance170.name = "SliderProto"
ProtoInstance170.DEF = "bPI"
fieldValue171 = x3d.fieldValue()
fieldValue171.name = "sliderTranslation"
fieldValue171.value = "0 0.4 0"

ProtoInstance170.fieldValue.append(fieldValue171)
fieldValue172 = x3d.fieldValue()
fieldValue172.name = "transformTranslation"
fieldValue172.value = "0 0 0.1"

ProtoInstance170.fieldValue.append(fieldValue172)
fieldValue173 = x3d.fieldValue()
fieldValue173.name = "sensorTranslation"
fieldValue173.value = "0 0 0"

ProtoInstance170.fieldValue.append(fieldValue173)
fieldValue174 = x3d.fieldValue()
fieldValue174.name = "numberTranslation"
fieldValue174.value = "0.3 0 0"

ProtoInstance170.fieldValue.append(fieldValue174)
fieldValue175 = x3d.fieldValue()
fieldValue175.name = "textString"
fieldValue175.value = "\"b=\""

ProtoInstance170.fieldValue.append(fieldValue175)
fieldValue176 = x3d.fieldValue()
fieldValue176.name = "parameterName"
fieldValue176.value = "b"

ProtoInstance170.fieldValue.append(fieldValue176)
fieldValue177 = x3d.fieldValue()
fieldValue177.name = "parameterScale"
fieldValue177.value = "30"

ProtoInstance170.fieldValue.append(fieldValue177)
fieldValue178 = x3d.fieldValue()
fieldValue178.name = "shaderNode"
ComposedShader179 = x3d.ComposedShader()
ComposedShader179.USE = "freewrlShader"

fieldValue178.children.append(ComposedShader179)

ProtoInstance170.fieldValue.append(fieldValue178)

LayoutLayer96.children.append(ProtoInstance170)
ProtoInstance180 = x3d.ProtoInstance()
ProtoInstance180.name = "SliderProto"
ProtoInstance180.DEF = "cPI"
fieldValue181 = x3d.fieldValue()
fieldValue181.name = "sliderTranslation"
fieldValue181.value = "0 0.1 0"

ProtoInstance180.fieldValue.append(fieldValue181)
fieldValue182 = x3d.fieldValue()
fieldValue182.name = "transformTranslation"
fieldValue182.value = "0 0 0.1"

ProtoInstance180.fieldValue.append(fieldValue182)
fieldValue183 = x3d.fieldValue()
fieldValue183.name = "sensorTranslation"
fieldValue183.value = "0 0 0"

ProtoInstance180.fieldValue.append(fieldValue183)
fieldValue184 = x3d.fieldValue()
fieldValue184.name = "numberTranslation"
fieldValue184.value = "0.3 0 0"

ProtoInstance180.fieldValue.append(fieldValue184)
fieldValue185 = x3d.fieldValue()
fieldValue185.name = "textString"
fieldValue185.value = "\"c=\""

ProtoInstance180.fieldValue.append(fieldValue185)
fieldValue186 = x3d.fieldValue()
fieldValue186.name = "parameterName"
fieldValue186.value = "c"

ProtoInstance180.fieldValue.append(fieldValue186)
fieldValue187 = x3d.fieldValue()
fieldValue187.name = "parameterScale"
fieldValue187.value = "20"

ProtoInstance180.fieldValue.append(fieldValue187)
fieldValue188 = x3d.fieldValue()
fieldValue188.name = "shaderNode"
ComposedShader189 = x3d.ComposedShader()
ComposedShader189.USE = "freewrlShader"

fieldValue188.children.append(ComposedShader189)

ProtoInstance180.fieldValue.append(fieldValue188)

LayoutLayer96.children.append(ProtoInstance180)
ProtoInstance190 = x3d.ProtoInstance()
ProtoInstance190.name = "SliderProto"
ProtoInstance190.DEF = "dPI"
fieldValue191 = x3d.fieldValue()
fieldValue191.name = "sliderTranslation"
fieldValue191.value = "0 -0.2 0"

ProtoInstance190.fieldValue.append(fieldValue191)
fieldValue192 = x3d.fieldValue()
fieldValue192.name = "transformTranslation"
fieldValue192.value = "0 0 0.1"

ProtoInstance190.fieldValue.append(fieldValue192)
fieldValue193 = x3d.fieldValue()
fieldValue193.name = "sensorTranslation"
fieldValue193.value = "0 0 0"

ProtoInstance190.fieldValue.append(fieldValue193)
fieldValue194 = x3d.fieldValue()
fieldValue194.name = "numberTranslation"
fieldValue194.value = "0.3 0 0"

ProtoInstance190.fieldValue.append(fieldValue194)
fieldValue195 = x3d.fieldValue()
fieldValue195.name = "textString"
fieldValue195.value = "\"d=\""

ProtoInstance190.fieldValue.append(fieldValue195)
fieldValue196 = x3d.fieldValue()
fieldValue196.name = "parameterName"
fieldValue196.value = "d"

ProtoInstance190.fieldValue.append(fieldValue196)
fieldValue197 = x3d.fieldValue()
fieldValue197.name = "parameterScale"
fieldValue197.value = "20"

ProtoInstance190.fieldValue.append(fieldValue197)
fieldValue198 = x3d.fieldValue()
fieldValue198.name = "shaderNode"
ComposedShader199 = x3d.ComposedShader()
ComposedShader199.USE = "freewrlShader"

fieldValue198.children.append(ComposedShader199)

ProtoInstance190.fieldValue.append(fieldValue198)

LayoutLayer96.children.append(ProtoInstance190)
ProtoInstance200 = x3d.ProtoInstance()
ProtoInstance200.name = "SliderProto"
ProtoInstance200.DEF = "tdeltaPI"
fieldValue201 = x3d.fieldValue()
fieldValue201.name = "sliderTranslation"
fieldValue201.value = "0 -0.5 0"

ProtoInstance200.fieldValue.append(fieldValue201)
fieldValue202 = x3d.fieldValue()
fieldValue202.name = "transformTranslation"
fieldValue202.value = "0 0 0.1"

ProtoInstance200.fieldValue.append(fieldValue202)
fieldValue203 = x3d.fieldValue()
fieldValue203.name = "sensorTranslation"
fieldValue203.value = "0 0 0"

ProtoInstance200.fieldValue.append(fieldValue203)
fieldValue204 = x3d.fieldValue()
fieldValue204.name = "numberTranslation"
fieldValue204.value = "0.8 0 0"

ProtoInstance200.fieldValue.append(fieldValue204)
fieldValue205 = x3d.fieldValue()
fieldValue205.name = "textString"
fieldValue205.value = "\"tdelta=\""

ProtoInstance200.fieldValue.append(fieldValue205)
fieldValue206 = x3d.fieldValue()
fieldValue206.name = "parameterName"
fieldValue206.value = "tdelta"

ProtoInstance200.fieldValue.append(fieldValue206)
fieldValue207 = x3d.fieldValue()
fieldValue207.name = "parameterScale"
fieldValue207.value = "6.28"

ProtoInstance200.fieldValue.append(fieldValue207)
fieldValue208 = x3d.fieldValue()
fieldValue208.name = "shaderNode"
ComposedShader209 = x3d.ComposedShader()
ComposedShader209.USE = "freewrlShader"

fieldValue208.children.append(ComposedShader209)

ProtoInstance200.fieldValue.append(fieldValue208)

LayoutLayer96.children.append(ProtoInstance200)
ProtoInstance210 = x3d.ProtoInstance()
ProtoInstance210.name = "SliderProto"
ProtoInstance210.DEF = "pdeltaPI"
fieldValue211 = x3d.fieldValue()
fieldValue211.name = "sliderTranslation"
fieldValue211.value = "0 -0.8 0"

ProtoInstance210.fieldValue.append(fieldValue211)
fieldValue212 = x3d.fieldValue()
fieldValue212.name = "transformTranslation"
fieldValue212.value = "0 0 0.1"

ProtoInstance210.fieldValue.append(fieldValue212)
fieldValue213 = x3d.fieldValue()
fieldValue213.name = "sensorTranslation"
fieldValue213.value = "0 0 0"

ProtoInstance210.fieldValue.append(fieldValue213)
fieldValue214 = x3d.fieldValue()
fieldValue214.name = "numberTranslation"
fieldValue214.value = "0.8 0 0"

ProtoInstance210.fieldValue.append(fieldValue214)
fieldValue215 = x3d.fieldValue()
fieldValue215.name = "textString"
fieldValue215.value = "\"pdelta=\""

ProtoInstance210.fieldValue.append(fieldValue215)
fieldValue216 = x3d.fieldValue()
fieldValue216.name = "parameterName"
fieldValue216.value = "pdelta"

ProtoInstance210.fieldValue.append(fieldValue216)
fieldValue217 = x3d.fieldValue()
fieldValue217.name = "parameterScale"
fieldValue217.value = "6.28"

ProtoInstance210.fieldValue.append(fieldValue217)
fieldValue218 = x3d.fieldValue()
fieldValue218.name = "shaderNode"
ComposedShader219 = x3d.ComposedShader()
ComposedShader219.USE = "freewrlShader"

fieldValue218.children.append(ComposedShader219)

ProtoInstance210.fieldValue.append(fieldValue218)

LayoutLayer96.children.append(ProtoInstance210)
Layout220 = x3d.Layout()
Layout220.align = ["LEFT","BOTTOM"]
Layout220.offset = [-0.5,0]

LayoutLayer96.layout = Layout220
Viewport221 = x3d.Viewport()

LayoutLayer96.viewport = Viewport221

LayerSet18.layers.append(LayoutLayer96)

Scene17.layerSet = LayerSet18

X3D0.Scene = Scene17
f = open("../data/bumpyfreewrlsliders.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/bumpyfreewrlsliders.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/bumpyfreewrlsliders.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
