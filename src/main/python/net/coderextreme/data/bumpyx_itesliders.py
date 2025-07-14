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
component8.name = "Grouping"
component8.level = 3

head1.children.append(component8)
component9 = x3d.component()
component9.name = "Core"
component9.level = 1

head1.children.append(component9)
component10 = x3d.component()
component10.name = "DIS"
component10.level = 2

head1.children.append(component10)
"""<component name='Shape' level='4'></component>"""
"""Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L"""
meta11 = x3d.meta()
meta11.name = "title"
meta11.content = "bumpyx_itesliders.x3d"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "description"
meta12.content = "*enter description here, short-sentence summaries preferred*"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "creator"
meta13.content = "Doug Sanden, Christoph Valentin, John Carlson"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "translator"
meta14.content = "*if manually translating VRML-to-X3D, enter name of person translating here*"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "created"
meta15.content = "*enter date of initial version here*"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "translated"
meta16.content = "*enter date of translation here*"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "modified"
meta17.content = "*enter date of latest revision here*"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "version"
meta18.content = "*enter version here, if any*"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "reference"
meta19.content = "*enter reference citation or relative/online url here*"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "reference"
meta20.content = "*enter additional url/bibliographic reference information here*"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "requires"
meta21.content = "*enter reference resource here if required to support function, delivery, or coherence of content*"

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "rights"
meta22.content = "*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024"

head1.children.append(meta22)
meta23 = x3d.meta()
meta23.name = "drawing"
meta23.content = "*enter drawing filename/url here*"

head1.children.append(meta23)
meta24 = x3d.meta()
meta24.name = "MovingImage"
meta24.content = "*enter movie filename/url here*"

head1.children.append(meta24)
meta25 = x3d.meta()
meta25.name = "photo"
meta25.content = "*enter photo filename/url here*"

head1.children.append(meta25)
meta26 = x3d.meta()
meta26.name = "subject"
meta26.content = "*enter subject keywords here*"

head1.children.append(meta26)
meta27 = x3d.meta()
meta27.name = "accessRights"
meta27.content = "*enter permission statements or url here*"

head1.children.append(meta27)
meta28 = x3d.meta()
meta28.name = "identifier"
meta28.content = "*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*"

head1.children.append(meta28)
meta29 = x3d.meta()
meta29.name = "generator"
meta29.content = "PSPad, http://www.pspad.com/"

head1.children.append(meta29)
meta30 = x3d.meta()
meta30.name = "license"
meta30.content = "license.html"

head1.children.append(meta30)

X3D0.head = head1
"""\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution, It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) open for their \"discussion about the teapot\""""
Scene31 = x3d.Scene()
"""LayerSet with two layers, navigation happens in layer 1"""
LayerSet32 = x3d.LayerSet()
LayerSet32.activeLayer = 1
LayerSet32.order = [1,2]
"""the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\""""
"""the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)"""
Layer33 = x3d.Layer()
Layer33.pickable = True
Layer33.objectType = ["ALL"]
"""basic nodes, which might be present in any scene"""
NavigationInfo34 = x3d.NavigationInfo()
NavigationInfo34.type = ["EXAMINE"]
NavigationInfo34.avatarSize = [0.25,1.75,0.75]

Layer33.children.append(NavigationInfo34)
DirectionalLight35 = x3d.DirectionalLight()
DirectionalLight35.ambientIntensity = 0.2
DirectionalLight35.direction = [0,-1,0]

Layer33.children.append(DirectionalLight35)
DirectionalLight36 = x3d.DirectionalLight()
DirectionalLight36.ambientIntensity = 0.2
DirectionalLight36.direction = [-1,-0.1,-1]

Layer33.children.append(DirectionalLight36)
Viewpoint37 = x3d.Viewpoint()
Viewpoint37.description = "My Overview"
Viewpoint37.fieldOfView = 1.570796
Viewpoint37.position = [0,1.75,60]

Layer33.children.append(Viewpoint37)
"""this group contains the red/green/blue 3D crosshair"""
Group38 = x3d.Group()
"""Arrow X"""
Transform39 = x3d.Transform()
Transform39.translation = [25,0,0]
Transform39.rotation = [0,0,-1,1.57]
Shape40 = x3d.Shape()
Cylinder41 = x3d.Cylinder()
Cylinder41.DEF = "Shaft"
Cylinder41.radius = 0.35
Cylinder41.height = 50

Shape40.geometry = Cylinder41
Appearance42 = x3d.Appearance()
Material43 = x3d.Material()
Material43.DEF = "RED"
Material43.diffuseColor = [1,0,0]
Material43.emissiveColor = [1,0,0]

Appearance42.material = Material43

Shape40.appearance = Appearance42

Transform39.children.append(Shape40)

Group38.children.append(Transform39)
Transform44 = x3d.Transform()
Transform44.translation = [50,0,0]
Transform44.rotation = [0,0,-1,1.57]
Shape45 = x3d.Shape()
Cone46 = x3d.Cone()
Cone46.DEF = "Tip"
Cone46.bottomRadius = 0.8
Cone46.height = 3

Shape45.geometry = Cone46
Appearance47 = x3d.Appearance()
Material48 = x3d.Material()
Material48.USE = "RED"

Appearance47.material = Material48

Shape45.appearance = Appearance47

Transform44.children.append(Shape45)

Group38.children.append(Transform44)
"""Arrow Y"""
Transform49 = x3d.Transform()
Transform49.translation = [0,25,0]
Shape50 = x3d.Shape()
Cylinder51 = x3d.Cylinder()
Cylinder51.USE = "Shaft"

Shape50.geometry = Cylinder51
Appearance52 = x3d.Appearance()
Material53 = x3d.Material()
Material53.DEF = "GREEN"
Material53.diffuseColor = [0,1,0]
Material53.emissiveColor = [0,1,0]

Appearance52.material = Material53

Shape50.appearance = Appearance52

Transform49.children.append(Shape50)

Group38.children.append(Transform49)
Transform54 = x3d.Transform()
Transform54.translation = [0,50,0]
Shape55 = x3d.Shape()
Cone56 = x3d.Cone()
Cone56.USE = "Tip"

Shape55.geometry = Cone56
Appearance57 = x3d.Appearance()
Material58 = x3d.Material()
Material58.USE = "GREEN"

Appearance57.material = Material58

Shape55.appearance = Appearance57

Transform54.children.append(Shape55)

Group38.children.append(Transform54)
"""Arrow Z"""
Transform59 = x3d.Transform()
Transform59.translation = [0,0,25]
Transform59.rotation = [1,0,0,1.57]
Shape60 = x3d.Shape()
Cylinder61 = x3d.Cylinder()
Cylinder61.USE = "Shaft"

Shape60.geometry = Cylinder61
Appearance62 = x3d.Appearance()
Material63 = x3d.Material()
Material63.DEF = "BLUE"
Material63.diffuseColor = [0,0,1]
Material63.emissiveColor = [0,0,1]

Appearance62.material = Material63

Shape60.appearance = Appearance62

Transform59.children.append(Shape60)

Group38.children.append(Transform59)
Transform64 = x3d.Transform()
Transform64.translation = [0,0,50]
Transform64.rotation = [1,0,0,1.57]
Shape65 = x3d.Shape()
Cone66 = x3d.Cone()
Cone66.USE = "Tip"

Shape65.geometry = Cone66
Appearance67 = x3d.Appearance()
Material68 = x3d.Material()
Material68.USE = "BLUE"

Appearance67.material = Material68

Shape65.appearance = Appearance67

Transform64.children.append(Shape65)

Group38.children.append(Transform64)

Layer33.children.append(Group38)
"""the model that is being reviewed by the users of this scene"""
Transform69 = x3d.Transform()
Transform69.DEF = "FlowerTransform"
"""<Inline DEF=\"Flower\" url='\"bumpyx_ite.x3d\"' />"""
"""Images courtesy of Paul Debevec's Light Probe Image Gallery"""
Background70 = x3d.Background()
Background70.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background70.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]
Background70.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background70.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background70.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background70.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

Transform69.children.append(Background70)
Transform71 = x3d.Transform()
Shape72 = x3d.Shape()
Sphere73 = x3d.Sphere()
Sphere73.radius = 40

Shape72.geometry = Sphere73
Appearance74 = x3d.Appearance()
Material75 = x3d.Material()
Material75.diffuseColor = [0.7,0.7,0.7]
Material75.specularColor = [0.5,0.5,0.5]

Appearance74.material = Material75
ComposedCubeMapTexture76 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture76.DEF = "texture"
ImageTexture77 = x3d.ImageTexture()
ImageTexture77.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture76.backTexture = ImageTexture77
ImageTexture78 = x3d.ImageTexture()
ImageTexture78.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture76.bottomTexture = ImageTexture78
ImageTexture79 = x3d.ImageTexture()
ImageTexture79.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture76.frontTexture = ImageTexture79
ImageTexture80 = x3d.ImageTexture()
ImageTexture80.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture76.leftTexture = ImageTexture80
ImageTexture81 = x3d.ImageTexture()
ImageTexture81.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture76.rightTexture = ImageTexture81
ImageTexture82 = x3d.ImageTexture()
ImageTexture82.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture76.topTexture = ImageTexture82

Appearance74.texture = ComposedCubeMapTexture76
ComposedShader83 = x3d.ComposedShader()
ComposedShader83.DEF = "x_iteShader"
ComposedShader83.language = "GLSL"
field84 = x3d.field()
field84.name = "chromaticDispertion"
field84.accessType = "inputOnly"
field84.type = "SFVec3f"
field84.value = [0.98,1,1.033]

ComposedShader83.field.append(field84)
field85 = x3d.field()
field85.name = "cube"
field85.type = "SFNode"
field85.accessType = "inputOnly"
ComposedCubeMapTexture86 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture86.USE = "texture"

field85.children.append(ComposedCubeMapTexture86)

ComposedShader83.field.append(field85)
field87 = x3d.field()
field87.name = "bias"
field87.type = "SFFloat"
field87.accessType = "inputOnly"
field87.value = 0.5

ComposedShader83.field.append(field87)
field88 = x3d.field()
field88.name = "scale"
field88.type = "SFFloat"
field88.accessType = "inputOnly"
field88.value = 0.5

ComposedShader83.field.append(field88)
field89 = x3d.field()
field89.name = "power"
field89.type = "SFFloat"
field89.accessType = "inputOnly"
field89.value = 2

ComposedShader83.field.append(field89)
field90 = x3d.field()
field90.name = "a"
field90.type = "SFFloat"
field90.accessType = "inputOutput"
field90.value = 15

ComposedShader83.field.append(field90)
field91 = x3d.field()
field91.name = "b"
field91.type = "SFFloat"
field91.accessType = "inputOutput"
field91.value = 5

ComposedShader83.field.append(field91)
field92 = x3d.field()
field92.name = "c"
field92.type = "SFFloat"
field92.accessType = "inputOutput"
field92.value = 5

ComposedShader83.field.append(field92)
field93 = x3d.field()
field93.name = "d"
field93.type = "SFFloat"
field93.accessType = "inputOutput"
field93.value = 5

ComposedShader83.field.append(field93)
field94 = x3d.field()
field94.name = "tdelta"
field94.type = "SFFloat"
field94.accessType = "inputOutput"
field94.value = 0

ComposedShader83.field.append(field94)
field95 = x3d.field()
field95.name = "pdelta"
field95.type = "SFFloat"
field95.accessType = "inputOutput"
field95.value = 0

ComposedShader83.field.append(field95)
ShaderPart96 = x3d.ShaderPart()
ShaderPart96.url = ["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]
ShaderPart96.type = "VERTEX"

ComposedShader83.parts.append(ShaderPart96)
ShaderPart97 = x3d.ShaderPart()
ShaderPart97.url = ["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]
ShaderPart97.type = "FRAGMENT"

ComposedShader83.parts.append(ShaderPart97)
"""TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"'></ShaderPart> <ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs\"' type='FRAGMENT'></ShaderPart>"""

Appearance74.shaders.append(ComposedShader83)

Shape72.appearance = Appearance74

Transform71.children.append(Shape72)

Transform69.children.append(Transform71)

Layer33.children.append(Transform69)
"""DIS multiuser facilities"""
DISEntityManager98 = x3d.DISEntityManager()
DISEntityManager98.DEF = "EntityManager"
DISEntityManager98.networkMode = "networkReader"
DISEntityTypeMapping99 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping99.category = 77
DISEntityTypeMapping99.specific = 1
DISEntityTypeMapping99.url = ["Leif8Final.x3d"]

DISEntityManager98.children.append(DISEntityTypeMapping99)
DISEntityTypeMapping100 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping100.category = 77
DISEntityTypeMapping100.specific = 2
DISEntityTypeMapping100.url = ["Lily8Final.x3d"]

DISEntityManager98.children.append(DISEntityTypeMapping100)

Layer33.children.append(DISEntityManager98)
Collision101 = x3d.Collision()
Collision101.enabled = False
Group102 = x3d.Group()
Group102.DEF = "AvatarHolder"

Collision101.proxy = Group102

Layer33.children.append(Collision101)
ROUTE103 = x3d.ROUTE()
ROUTE103.fromField = "addedEntities"
ROUTE103.fromNode = "EntityManager"
ROUTE103.toField = "addChildren"
ROUTE103.toNode = "AvatarHolder"

Layer33.children.append(ROUTE103)
ROUTE104 = x3d.ROUTE()
ROUTE104.fromField = "removedEntities"
ROUTE104.fromNode = "EntityManager"
ROUTE104.toField = "removeChildren"
ROUTE104.toNode = "AvatarHolder"

Layer33.children.append(ROUTE104)

LayerSet32.layers.append(Layer33)
LayoutLayer105 = x3d.LayoutLayer()
LayoutLayer105.pickable = True
LayoutLayer105.objectType = ["ALL"]
"""positioning the LayoutLayer"""
"""clipping the LayoutLayer"""
"""the content (children) of the LayoutLayer"""
"""first, the slider for scaling the model"""
Transform106 = x3d.Transform()
Transform106.translation = [0,0,-3]
Shape107 = x3d.Shape()
Appearance108 = x3d.Appearance()
Material109 = x3d.Material()
Material109.diffuseColor = [0,0,0]
Material109.transparency = 0.7

Appearance108.material = Material109

Shape107.appearance = Appearance108
Box110 = x3d.Box()
Box110.size = [100,100,0.02]

Shape107.geometry = Box110

Transform106.children.append(Shape107)

LayoutLayer105.children.append(Transform106)
"""the plane sensors"""
Transform111 = x3d.Transform()
Transform111.DEF = "aSlider"
Transform111.translation = [0,0.7,0]
Transform112 = x3d.Transform()
Transform112.rotation = [0,0,1,1.57]
Shape113 = x3d.Shape()
Appearance114 = x3d.Appearance()
Material115 = x3d.Material()

Appearance114.material = Material115

Shape113.appearance = Appearance114
Cylinder116 = x3d.Cylinder()
Cylinder116.radius = 0.05
Cylinder116.height = 2.5

Shape113.geometry = Cylinder116

Transform112.children.append(Shape113)

Transform111.children.append(Transform112)
Transform117 = x3d.Transform()
Transform117.DEF = "aTransform"
Transform117.translation = [0,0,0.1]
PlaneSensor118 = x3d.PlaneSensor()
PlaneSensor118.DEF = "aSensor"
PlaneSensor118.minPosition = [-20,0]
PlaneSensor118.maxPosition = [20,0]

Transform117.children.append(PlaneSensor118)
Transform119 = x3d.Transform()
Transform119.translation = [0,0,0]
TouchSensor120 = x3d.TouchSensor()
TouchSensor120.DEF = "aTS"

Transform119.children.append(TouchSensor120)
Shape121 = x3d.Shape()
Sphere122 = x3d.Sphere()
Sphere122.radius = 0.08

Shape121.geometry = Sphere122
Appearance123 = x3d.Appearance()
Material124 = x3d.Material()
Material124.diffuseColor = [1,0,0]

Appearance123.material = Material124

Shape121.appearance = Appearance123

Transform119.children.append(Shape121)

Transform117.children.append(Transform119)
Shape125 = x3d.Shape()
Cylinder126 = x3d.Cylinder()
Cylinder126.radius = 0.05
Cylinder126.height = 0.3

Shape125.geometry = Cylinder126
Appearance127 = x3d.Appearance()
Material128 = x3d.Material()

Appearance127.material = Material128

Shape125.appearance = Appearance127

Transform117.children.append(Shape125)

Transform111.children.append(Transform117)
Transform129 = x3d.Transform()
Transform129.rotation = [0,0,1,1.57]
Shape130 = x3d.Shape()
Appearance131 = x3d.Appearance()
Material132 = x3d.Material()

Appearance131.material = Material132

Shape130.appearance = Appearance131
Cylinder133 = x3d.Cylinder()
Cylinder133.radius = 0.05
Cylinder133.height = 2.5

Shape130.geometry = Cylinder133

Transform129.children.append(Shape130)

Transform111.children.append(Transform129)

LayoutLayer105.children.append(Transform111)
Transform134 = x3d.Transform()
Transform134.DEF = "bSlider"
Transform134.translation = [0,0.4,0]
Transform135 = x3d.Transform()
Transform135.rotation = [0,0,1,1.57]
Shape136 = x3d.Shape()
Appearance137 = x3d.Appearance()
Material138 = x3d.Material()

Appearance137.material = Material138

Shape136.appearance = Appearance137
Cylinder139 = x3d.Cylinder()
Cylinder139.radius = 0.05
Cylinder139.height = 2.5

Shape136.geometry = Cylinder139

Transform135.children.append(Shape136)

Transform134.children.append(Transform135)
Transform140 = x3d.Transform()
Transform140.DEF = "bTransform"
Transform140.translation = [0,0,0.1]
PlaneSensor141 = x3d.PlaneSensor()
PlaneSensor141.DEF = "bSensor"
PlaneSensor141.minPosition = [-20,0]
PlaneSensor141.maxPosition = [20,0]

Transform140.children.append(PlaneSensor141)
Transform142 = x3d.Transform()
Transform142.translation = [0,0,0]
TouchSensor143 = x3d.TouchSensor()
TouchSensor143.DEF = "bTS"

Transform142.children.append(TouchSensor143)
Shape144 = x3d.Shape()
Sphere145 = x3d.Sphere()
Sphere145.radius = 0.08

Shape144.geometry = Sphere145
Appearance146 = x3d.Appearance()
Material147 = x3d.Material()
Material147.diffuseColor = [1,0,0]

Appearance146.material = Material147

Shape144.appearance = Appearance146

Transform142.children.append(Shape144)

Transform140.children.append(Transform142)
Shape148 = x3d.Shape()
Cylinder149 = x3d.Cylinder()
Cylinder149.radius = 0.05
Cylinder149.height = 0.3

Shape148.geometry = Cylinder149
Appearance150 = x3d.Appearance()
Material151 = x3d.Material()

Appearance150.material = Material151

Shape148.appearance = Appearance150

Transform140.children.append(Shape148)

Transform134.children.append(Transform140)

LayoutLayer105.children.append(Transform134)
Transform152 = x3d.Transform()
Transform152.DEF = "cSlider"
Transform152.translation = [0,0.1,0]
Transform153 = x3d.Transform()
Transform153.rotation = [0,0,1,1.57]
Shape154 = x3d.Shape()
Appearance155 = x3d.Appearance()
Material156 = x3d.Material()

Appearance155.material = Material156

Shape154.appearance = Appearance155
Cylinder157 = x3d.Cylinder()
Cylinder157.radius = 0.05
Cylinder157.height = 2.5

Shape154.geometry = Cylinder157

Transform153.children.append(Shape154)

Transform152.children.append(Transform153)
Transform158 = x3d.Transform()
Transform158.DEF = "cTransform"
Transform158.translation = [0,0,0.1]
PlaneSensor159 = x3d.PlaneSensor()
PlaneSensor159.DEF = "cSensor"
PlaneSensor159.minPosition = [-20,0]
PlaneSensor159.maxPosition = [20,0]

Transform158.children.append(PlaneSensor159)
Transform160 = x3d.Transform()
Transform160.translation = [0,0,0]
TouchSensor161 = x3d.TouchSensor()
TouchSensor161.DEF = "cTS"

Transform160.children.append(TouchSensor161)
Shape162 = x3d.Shape()
Sphere163 = x3d.Sphere()
Sphere163.radius = 0.08

Shape162.geometry = Sphere163
Appearance164 = x3d.Appearance()
Material165 = x3d.Material()
Material165.diffuseColor = [1,0,0]

Appearance164.material = Material165

Shape162.appearance = Appearance164

Transform160.children.append(Shape162)

Transform158.children.append(Transform160)
Shape166 = x3d.Shape()
Cylinder167 = x3d.Cylinder()
Cylinder167.radius = 0.05
Cylinder167.height = 0.3

Shape166.geometry = Cylinder167
Appearance168 = x3d.Appearance()
Material169 = x3d.Material()

Appearance168.material = Material169

Shape166.appearance = Appearance168

Transform158.children.append(Shape166)

Transform152.children.append(Transform158)

LayoutLayer105.children.append(Transform152)
Transform170 = x3d.Transform()
Transform170.DEF = "dSlider"
Transform170.translation = [0,-0.2,0]
Transform171 = x3d.Transform()
Transform171.rotation = [0,0,1,1.57]
Shape172 = x3d.Shape()
Appearance173 = x3d.Appearance()
Material174 = x3d.Material()

Appearance173.material = Material174

Shape172.appearance = Appearance173
Cylinder175 = x3d.Cylinder()
Cylinder175.radius = 0.05
Cylinder175.height = 2.5

Shape172.geometry = Cylinder175

Transform171.children.append(Shape172)

Transform170.children.append(Transform171)
Transform176 = x3d.Transform()
Transform176.DEF = "dTransform"
Transform176.translation = [0,0,0.1]
PlaneSensor177 = x3d.PlaneSensor()
PlaneSensor177.DEF = "dSensor"
PlaneSensor177.minPosition = [-20,0]
PlaneSensor177.maxPosition = [20,0]

Transform176.children.append(PlaneSensor177)
Transform178 = x3d.Transform()
Transform178.translation = [0,0,0]
TouchSensor179 = x3d.TouchSensor()
TouchSensor179.DEF = "dTS"

Transform178.children.append(TouchSensor179)
Shape180 = x3d.Shape()
Sphere181 = x3d.Sphere()
Sphere181.radius = 0.08

Shape180.geometry = Sphere181
Appearance182 = x3d.Appearance()
Material183 = x3d.Material()
Material183.diffuseColor = [1,0,0]

Appearance182.material = Material183

Shape180.appearance = Appearance182

Transform178.children.append(Shape180)

Transform176.children.append(Transform178)
Shape184 = x3d.Shape()
Cylinder185 = x3d.Cylinder()
Cylinder185.radius = 0.05
Cylinder185.height = 0.3

Shape184.geometry = Cylinder185
Appearance186 = x3d.Appearance()
Material187 = x3d.Material()

Appearance186.material = Material187

Shape184.appearance = Appearance186

Transform176.children.append(Shape184)

Transform170.children.append(Transform176)

LayoutLayer105.children.append(Transform170)
Transform188 = x3d.Transform()
Transform188.DEF = "pdeltaSlider"
Transform188.translation = [0,-0.5,0]
Transform189 = x3d.Transform()
Transform189.rotation = [0,0,1,1.57]
Shape190 = x3d.Shape()
Appearance191 = x3d.Appearance()
Material192 = x3d.Material()

Appearance191.material = Material192

Shape190.appearance = Appearance191
Cylinder193 = x3d.Cylinder()
Cylinder193.radius = 0.05
Cylinder193.height = 2.5

Shape190.geometry = Cylinder193

Transform189.children.append(Shape190)

Transform188.children.append(Transform189)
Transform194 = x3d.Transform()
Transform194.DEF = "pdeltaTransform"
Transform194.translation = [0,0,0.1]
PlaneSensor195 = x3d.PlaneSensor()
PlaneSensor195.DEF = "pdeltaSensor"
PlaneSensor195.minPosition = [-20,0]
PlaneSensor195.maxPosition = [20,0]

Transform194.children.append(PlaneSensor195)
Transform196 = x3d.Transform()
Transform196.translation = [0,0,0]
TouchSensor197 = x3d.TouchSensor()
TouchSensor197.DEF = "pdeltaTS"

Transform196.children.append(TouchSensor197)
Shape198 = x3d.Shape()
Sphere199 = x3d.Sphere()
Sphere199.radius = 0.08

Shape198.geometry = Sphere199
Appearance200 = x3d.Appearance()
Material201 = x3d.Material()
Material201.diffuseColor = [1,0,0]

Appearance200.material = Material201

Shape198.appearance = Appearance200

Transform196.children.append(Shape198)

Transform194.children.append(Transform196)
Shape202 = x3d.Shape()
Cylinder203 = x3d.Cylinder()
Cylinder203.radius = 0.05
Cylinder203.height = 0.3

Shape202.geometry = Cylinder203
Appearance204 = x3d.Appearance()
Material205 = x3d.Material()

Appearance204.material = Material205

Shape202.appearance = Appearance204

Transform194.children.append(Shape202)

Transform188.children.append(Transform194)

LayoutLayer105.children.append(Transform188)
Transform206 = x3d.Transform()
Transform206.DEF = "tdeltaSlider"
Transform206.translation = [0,-0.8,0]
Transform207 = x3d.Transform()
Transform207.rotation = [0,0,1,1.57]
Shape208 = x3d.Shape()
Appearance209 = x3d.Appearance()
Material210 = x3d.Material()

Appearance209.material = Material210

Shape208.appearance = Appearance209
Cylinder211 = x3d.Cylinder()
Cylinder211.radius = 0.05
Cylinder211.height = 2.5

Shape208.geometry = Cylinder211

Transform207.children.append(Shape208)

Transform206.children.append(Transform207)
Transform212 = x3d.Transform()
Transform212.DEF = "tdeltaTransform"
Transform212.translation = [0,0,0.1]
PlaneSensor213 = x3d.PlaneSensor()
PlaneSensor213.DEF = "tdeltaSensor"
PlaneSensor213.minPosition = [-20,0]
PlaneSensor213.maxPosition = [20,0]

Transform212.children.append(PlaneSensor213)
Transform214 = x3d.Transform()
Transform214.translation = [0,0,0]
TouchSensor215 = x3d.TouchSensor()
TouchSensor215.DEF = "tdeltaTS"

Transform214.children.append(TouchSensor215)
Shape216 = x3d.Shape()
Sphere217 = x3d.Sphere()
Sphere217.radius = 0.08

Shape216.geometry = Sphere217
Appearance218 = x3d.Appearance()
Material219 = x3d.Material()
Material219.diffuseColor = [1,0,0]

Appearance218.material = Material219

Shape216.appearance = Appearance218

Transform214.children.append(Shape216)

Transform212.children.append(Transform214)
Shape220 = x3d.Shape()
Cylinder221 = x3d.Cylinder()
Cylinder221.radius = 0.05
Cylinder221.height = 0.3

Shape220.geometry = Cylinder221
Appearance222 = x3d.Appearance()
Material223 = x3d.Material()

Appearance222.material = Material223

Shape220.appearance = Appearance222

Transform212.children.append(Shape220)

Transform206.children.append(Transform212)

LayoutLayer105.children.append(Transform206)
Script224 = x3d.Script()
Script224.DEF = "aValueTransformerScript"
Script224.directOutput = True
Script224.mustEvaluate = True
field225 = x3d.field()
field225.name = "newTranslation"
field225.accessType = "inputOnly"
field225.type = "SFVec3f"
field225.value = [1,1,1]

Script224.field.append(field225)
field226 = x3d.field()
field226.name = "aValue_changed"
field226.accessType = "outputOnly"
field226.type = "SFFloat"
field226.value = 1

Script224.field.append(field226)

Script224.sourceCode = '''ecmascript: function newTranslation(Value) { aValue_changed = Value.x * 30; }'''

LayoutLayer105.children.append(Script224)
Script227 = x3d.Script()
Script227.DEF = "bValueTransformerScript"
Script227.directOutput = True
Script227.mustEvaluate = True
field228 = x3d.field()
field228.name = "newTranslation"
field228.accessType = "inputOnly"
field228.type = "SFVec3f"
field228.value = [1,1,1]

Script227.field.append(field228)
field229 = x3d.field()
field229.name = "bValue_changed"
field229.accessType = "outputOnly"
field229.type = "SFFloat"
field229.value = 1

Script227.field.append(field229)

Script227.sourceCode = '''ecmascript: function newTranslation(Value) { bValue_changed = Value.x * 30; }'''

LayoutLayer105.children.append(Script227)
Script230 = x3d.Script()
Script230.DEF = "cValueTransformerScript"
Script230.directOutput = True
Script230.mustEvaluate = True
field231 = x3d.field()
field231.name = "newTranslation"
field231.accessType = "inputOnly"
field231.type = "SFVec3f"
field231.value = [1,1,1]

Script230.field.append(field231)
field232 = x3d.field()
field232.name = "cValue_changed"
field232.accessType = "outputOnly"
field232.type = "SFFloat"
field232.value = 1

Script230.field.append(field232)

Script230.sourceCode = '''ecmascript: function newTranslation(Value) { cValue_changed = Value.x * 5; }'''

LayoutLayer105.children.append(Script230)
Script233 = x3d.Script()
Script233.DEF = "dValueTransformerScript"
Script233.directOutput = True
Script233.mustEvaluate = True
field234 = x3d.field()
field234.name = "newTranslation"
field234.accessType = "inputOnly"
field234.type = "SFVec3f"
field234.value = [1,1,1]

Script233.field.append(field234)
field235 = x3d.field()
field235.name = "dValue_changed"
field235.accessType = "outputOnly"
field235.type = "SFFloat"
field235.value = 1

Script233.field.append(field235)

Script233.sourceCode = '''ecmascript: function newTranslation(Value) { dValue_changed = Value.x * 5; }'''

LayoutLayer105.children.append(Script233)
Script236 = x3d.Script()
Script236.DEF = "pdeltaValueTransformerScript"
Script236.directOutput = True
Script236.mustEvaluate = True
field237 = x3d.field()
field237.name = "newTranslation"
field237.accessType = "inputOnly"
field237.type = "SFVec3f"
field237.value = [1,1,1]

Script236.field.append(field237)
field238 = x3d.field()
field238.name = "pdeltaValue_changed"
field238.accessType = "outputOnly"
field238.type = "SFFloat"
field238.value = 1

Script236.field.append(field238)

Script236.sourceCode = '''ecmascript: function newTranslation(Value) { pdeltaValue_changed = Value.x; }'''

LayoutLayer105.children.append(Script236)
Script239 = x3d.Script()
Script239.DEF = "tdeltaValueTransformerScript"
Script239.directOutput = True
Script239.mustEvaluate = True
field240 = x3d.field()
field240.name = "newTranslation"
field240.accessType = "inputOnly"
field240.type = "SFVec3f"
field240.value = [1,1,1]

Script239.field.append(field240)
field241 = x3d.field()
field241.name = "tdeltaValue_changed"
field241.accessType = "outputOnly"
field241.type = "SFFloat"
field241.value = 1

Script239.field.append(field241)

Script239.sourceCode = '''ecmascript: function newTranslation(Value) { tdeltaValue_changed = Value.x; }'''

LayoutLayer105.children.append(Script239)
ROUTE242 = x3d.ROUTE()
ROUTE242.fromField = "translation_changed"
ROUTE242.fromNode = "aSensor"
ROUTE242.toField = "set_translation"
ROUTE242.toNode = "aTransform"

LayoutLayer105.children.append(ROUTE242)
ROUTE243 = x3d.ROUTE()
ROUTE243.fromField = "translation_changed"
ROUTE243.fromNode = "bSensor"
ROUTE243.toField = "set_translation"
ROUTE243.toNode = "bTransform"

LayoutLayer105.children.append(ROUTE243)
ROUTE244 = x3d.ROUTE()
ROUTE244.fromField = "translation_changed"
ROUTE244.fromNode = "cSensor"
ROUTE244.toField = "set_translation"
ROUTE244.toNode = "cTransform"

LayoutLayer105.children.append(ROUTE244)
ROUTE245 = x3d.ROUTE()
ROUTE245.fromField = "translation_changed"
ROUTE245.fromNode = "dSensor"
ROUTE245.toField = "set_translation"
ROUTE245.toNode = "dTransform"

LayoutLayer105.children.append(ROUTE245)
ROUTE246 = x3d.ROUTE()
ROUTE246.fromField = "translation_changed"
ROUTE246.fromNode = "pdeltaSensor"
ROUTE246.toField = "set_translation"
ROUTE246.toNode = "pdeltaTransform"

LayoutLayer105.children.append(ROUTE246)
ROUTE247 = x3d.ROUTE()
ROUTE247.fromField = "translation_changed"
ROUTE247.fromNode = "tdeltaSensor"
ROUTE247.toField = "set_translation"
ROUTE247.toNode = "tdeltaTransform"

LayoutLayer105.children.append(ROUTE247)
ROUTE248 = x3d.ROUTE()
ROUTE248.fromField = "translation_changed"
ROUTE248.fromNode = "aSensor"
ROUTE248.toField = "newTranslation"
ROUTE248.toNode = "aValueTransformerScript"

LayoutLayer105.children.append(ROUTE248)
ROUTE249 = x3d.ROUTE()
ROUTE249.fromField = "translation_changed"
ROUTE249.fromNode = "bSensor"
ROUTE249.toField = "newTranslation"
ROUTE249.toNode = "bValueTransformerScript"

LayoutLayer105.children.append(ROUTE249)
ROUTE250 = x3d.ROUTE()
ROUTE250.fromField = "translation_changed"
ROUTE250.fromNode = "cSensor"
ROUTE250.toField = "newTranslation"
ROUTE250.toNode = "cValueTransformerScript"

LayoutLayer105.children.append(ROUTE250)
ROUTE251 = x3d.ROUTE()
ROUTE251.fromField = "translation_changed"
ROUTE251.fromNode = "dSensor"
ROUTE251.toField = "newTranslation"
ROUTE251.toNode = "dValueTransformerScript"

LayoutLayer105.children.append(ROUTE251)
ROUTE252 = x3d.ROUTE()
ROUTE252.fromField = "translation_changed"
ROUTE252.fromNode = "pdeltaSensor"
ROUTE252.toField = "newTranslation"
ROUTE252.toNode = "pdeltaValueTransformerScript"

LayoutLayer105.children.append(ROUTE252)
ROUTE253 = x3d.ROUTE()
ROUTE253.fromField = "translation_changed"
ROUTE253.fromNode = "tdeltaSensor"
ROUTE253.toField = "newTranslation"
ROUTE253.toNode = "tdeltaValueTransformerScript"

LayoutLayer105.children.append(ROUTE253)
ROUTE254 = x3d.ROUTE()
ROUTE254.fromField = "aValue_changed"
ROUTE254.fromNode = "aValueTransformerScript"
ROUTE254.toField = "a"
ROUTE254.toNode = "x_iteShader"

LayoutLayer105.children.append(ROUTE254)
ROUTE255 = x3d.ROUTE()
ROUTE255.fromField = "bValue_changed"
ROUTE255.fromNode = "bValueTransformerScript"
ROUTE255.toField = "b"
ROUTE255.toNode = "x_iteShader"

LayoutLayer105.children.append(ROUTE255)
ROUTE256 = x3d.ROUTE()
ROUTE256.fromField = "cValue_changed"
ROUTE256.fromNode = "cValueTransformerScript"
ROUTE256.toField = "c"
ROUTE256.toNode = "x_iteShader"

LayoutLayer105.children.append(ROUTE256)
ROUTE257 = x3d.ROUTE()
ROUTE257.fromField = "dValue_changed"
ROUTE257.fromNode = "dValueTransformerScript"
ROUTE257.toField = "d"
ROUTE257.toNode = "x_iteShader"

LayoutLayer105.children.append(ROUTE257)
ROUTE258 = x3d.ROUTE()
ROUTE258.fromField = "pdeltaValue_changed"
ROUTE258.fromNode = "pdeltaValueTransformerScript"
ROUTE258.toField = "pdelta"
ROUTE258.toNode = "x_iteShader"

LayoutLayer105.children.append(ROUTE258)
ROUTE259 = x3d.ROUTE()
ROUTE259.fromField = "tdeltaValue_changed"
ROUTE259.fromNode = "tdeltaValueTransformerScript"
ROUTE259.toField = "tdelta"
ROUTE259.toNode = "x_iteShader"

LayoutLayer105.children.append(ROUTE259)
Layout260 = x3d.Layout()
Layout260.align = ["RIGHT","BOTTOM"]
Layout260.offset = [0,0.2]
Layout260.offsetUnits = ["WORLD","WORLD"]
Layout260.scaleMode = ["NONE","NONE"]
Layout260.size = [0.4,0.6]
Layout260.sizeUnits = ["WORLD","WORLD"]

LayoutLayer105.layout = Layout260
Viewport261 = x3d.Viewport()
Viewport261.clipBoundary = [0,1,0,1]

LayoutLayer105.viewport = Viewport261

LayerSet32.layers.append(LayoutLayer105)

Scene31.layerSet = LayerSet32

X3D0.Scene = Scene31
f = open("../data/bumpyx_itesliders.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/bumpyx_itesliders.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
