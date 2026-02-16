print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
head1 = x3d.head()
head1.children.append(x3d.Comment("""<component name='Shape' level='4'></component>"""))
head1.children.append(x3d.Comment("""Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces https://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L"""))
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
meta11 = x3d.meta()
meta11.name = "title"
meta11.content = "bumpyfreewrljsonverse.x3d"

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
X3D0.children.append(x3d.Comment("""\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution,"""))
X3D0.children.append(x3d.Comment("""It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak)"""))
X3D0.children.append(x3d.Comment("""open for their \"discussion about the teapot\""""))
Scene31 = x3d.Scene()
Scene31.children.append(x3d.Comment("""basic nodes, which might be present in any scene"""))
NavigationInfo32 = x3d.NavigationInfo()
NavigationInfo32.type = ["EXAMINE"]
NavigationInfo32.avatarSize = [0.25,1.75,0.75]

Scene31.children.append(NavigationInfo32)
DirectionalLight33 = x3d.DirectionalLight()
DirectionalLight33.ambientIntensity = 0.2
DirectionalLight33.direction = [0,-1,0]

Scene31.children.append(DirectionalLight33)
DirectionalLight34 = x3d.DirectionalLight()
DirectionalLight34.ambientIntensity = 0.2
DirectionalLight34.direction = [-1,-0.1,-1]

Scene31.children.append(DirectionalLight34)
Viewpoint35 = x3d.Viewpoint()
Viewpoint35.description = "My Overview"
Viewpoint35.fieldOfView = 1.570796
Viewpoint35.position = [0,1.75,60]

Scene31.children.append(Viewpoint35)
Scene31.children.append(x3d.Comment("""LayerSet with two layers, navigation happens in layer 1"""))
LayerSet36 = x3d.LayerSet()
LayerSet36.activeLayer = 1
LayerSet36.order = [1,2]
LayerSet36.children.append(x3d.Comment("""the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\""""))
LayerSet36.children.append(x3d.Comment("""the second layer contains the sliders that are moved with the user's display"""))
LayerSet36.children.append(x3d.Comment("""like a HUD (heads up display)"""))
Layer37 = x3d.Layer()
Layer37.pickable = True
Layer37.objectType = ["ALL"]
Layer37.children.append(x3d.Comment("""this group contains the red/green/blue 3D crosshair"""))
Group38 = x3d.Group()
Group38.children.append(x3d.Comment("""Arrow X"""))
Transform39 = x3d.Transform()
Transform39.translation = [25,0,0]
Transform39.rotation = [0,0,-1,1.57]
Shape40 = x3d.Shape()
Cylinder41 = x3d.Cylinder(DEF="Shaft")
Cylinder41.radius = 0.35
Cylinder41.height = 50

Shape40.geometry = Cylinder41
Appearance42 = x3d.Appearance()
Material43 = x3d.Material(DEF="RED")
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
Cone46 = x3d.Cone(DEF="Tip")
Cone46.bottomRadius = 0.8
Cone46.height = 3

Shape45.geometry = Cone46
Appearance47 = x3d.Appearance()
Material48 = x3d.Material(USE="RED")

Appearance47.material = Material48

Shape45.appearance = Appearance47

Transform44.children.append(Shape45)

Group38.children.append(Transform44)
Group38.children.append(x3d.Comment("""Arrow Y"""))
Transform49 = x3d.Transform()
Transform49.translation = [0,25,0]
Shape50 = x3d.Shape()
Cylinder51 = x3d.Cylinder(USE="Shaft")

Shape50.geometry = Cylinder51
Appearance52 = x3d.Appearance()
Material53 = x3d.Material(DEF="GREEN")
Material53.diffuseColor = [0,1,0]
Material53.emissiveColor = [0,1,0]

Appearance52.material = Material53

Shape50.appearance = Appearance52

Transform49.children.append(Shape50)

Group38.children.append(Transform49)
Transform54 = x3d.Transform()
Transform54.translation = [0,50,0]
Shape55 = x3d.Shape()
Cone56 = x3d.Cone(USE="Tip")

Shape55.geometry = Cone56
Appearance57 = x3d.Appearance()
Material58 = x3d.Material(USE="GREEN")

Appearance57.material = Material58

Shape55.appearance = Appearance57

Transform54.children.append(Shape55)

Group38.children.append(Transform54)
Group38.children.append(x3d.Comment("""Arrow Z"""))
Transform59 = x3d.Transform()
Transform59.translation = [0,0,25]
Transform59.rotation = [1,0,0,1.57]
Shape60 = x3d.Shape()
Cylinder61 = x3d.Cylinder(USE="Shaft")

Shape60.geometry = Cylinder61
Appearance62 = x3d.Appearance()
Material63 = x3d.Material(DEF="BLUE")
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
Cone66 = x3d.Cone(USE="Tip")

Shape65.geometry = Cone66
Appearance67 = x3d.Appearance()
Material68 = x3d.Material(USE="BLUE")

Appearance67.material = Material68

Shape65.appearance = Appearance67

Transform64.children.append(Shape65)

Group38.children.append(Transform64)

Layer37.children.append(Group38)
Layer37.children.append(x3d.Comment("""the model that is being reviewed by the users of this scene"""))
Transform69 = x3d.Transform(DEF="FlowerTransform")
Transform69.children.append(x3d.Comment("""<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />"""))
Transform69.children.append(x3d.Comment("""Images courtesy of Paul Debevec's Light Probe Image Gallery"""))
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
Shape72.children.append(x3d.Comment("""<Sphere radius='40'></Sphere>"""))
IndexedFaceSet73 = x3d.IndexedFaceSet(DEF="Orbit")
IndexedFaceSet73.convex = False
Coordinate74 = x3d.Coordinate(DEF="OrbitCoordinates")

IndexedFaceSet73.coord = Coordinate74

Shape72.geometry = IndexedFaceSet73
Appearance75 = x3d.Appearance()
Material76 = x3d.Material()
Material76.diffuseColor = [0.7,0.7,0.7]
Material76.specularColor = [0.5,0.5,0.5]

Appearance75.material = Material76
ComposedCubeMapTexture77 = x3d.ComposedCubeMapTexture(DEF="texture")
ImageTexture78 = x3d.ImageTexture()
ImageTexture78.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture77.backTexture = ImageTexture78
ImageTexture79 = x3d.ImageTexture()
ImageTexture79.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture77.bottomTexture = ImageTexture79
ImageTexture80 = x3d.ImageTexture()
ImageTexture80.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture77.frontTexture = ImageTexture80
ImageTexture81 = x3d.ImageTexture()
ImageTexture81.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture77.leftTexture = ImageTexture81
ImageTexture82 = x3d.ImageTexture()
ImageTexture82.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture77.rightTexture = ImageTexture82
ImageTexture83 = x3d.ImageTexture()
ImageTexture83.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture77.topTexture = ImageTexture83

Appearance75.texture = ComposedCubeMapTexture77
ComposedShader84 = x3d.ComposedShader(DEF="freewrlShader")
ComposedShader84.language = "GLSL"
field85 = x3d.field()
field85.name = "chromaticDispertion"
field85.accessType = "inputOnly"
field85.type = "SFVec3f"
field85.value = [0.98,1,1.033]

ComposedShader84.field.append(field85)
field86 = x3d.field()
field86.name = "fw_textureCoordGenType"
field86.accessType = "inputOnly"
field86.type = "SFInt32"
field86.value = 0

ComposedShader84.field.append(field86)
field87 = x3d.field()
field87.name = "bias"
field87.type = "SFFloat"
field87.accessType = "inputOnly"
field87.value = 0.5

ComposedShader84.field.append(field87)
field88 = x3d.field()
field88.name = "scale"
field88.type = "SFFloat"
field88.accessType = "inputOnly"
field88.value = 0.5

ComposedShader84.field.append(field88)
field89 = x3d.field()
field89.name = "power"
field89.type = "SFFloat"
field89.accessType = "inputOnly"
field89.value = 2

ComposedShader84.field.append(field89)
field90 = x3d.field()
field90.name = "a"
field90.type = "SFFloat"
field90.accessType = "inputOutput"
field90.value = 15

ComposedShader84.field.append(field90)
field91 = x3d.field()
field91.name = "b"
field91.type = "SFFloat"
field91.accessType = "inputOutput"
field91.value = 5

ComposedShader84.field.append(field91)
field92 = x3d.field()
field92.name = "c"
field92.type = "SFFloat"
field92.accessType = "inputOutput"
field92.value = 5

ComposedShader84.field.append(field92)
field93 = x3d.field()
field93.name = "d"
field93.type = "SFFloat"
field93.accessType = "inputOutput"
field93.value = 5

ComposedShader84.field.append(field93)
field94 = x3d.field()
field94.name = "tdelta"
field94.type = "SFFloat"
field94.accessType = "inputOutput"
field94.value = 0

ComposedShader84.field.append(field94)
field95 = x3d.field()
field95.name = "pdelta"
field95.type = "SFFloat"
field95.accessType = "inputOutput"
field95.value = 0

ComposedShader84.field.append(field95)
ShaderPart96 = x3d.ShaderPart()
ShaderPart96.url = ["../shaders/freewrl_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"]
ShaderPart96.type = "VERTEX"

ComposedShader84.parts.append(ShaderPart96)
ShaderPart97 = x3d.ShaderPart()
ShaderPart97.url = ["../shaders/freewrl.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"]
ShaderPart97.type = "FRAGMENT"

ComposedShader84.parts.append(ShaderPart97)
ComposedShader84.children.append(x3d.Comment("""TO CONVERT TO A SPHERE"""))
ComposedShader84.children.append(x3d.Comment("""<ShaderPart url='\"../shaders/freewrl.vs\"'></ShaderPart>"""))
ComposedShader84.children.append(x3d.Comment("""<ShaderPart url='\"../shaders/freewrl_bubbles.fs\"' type='FRAGMENT'></ShaderPart>"""))

Appearance75.shaders.append(ComposedShader84)

Shape72.appearance = Appearance75

Transform71.children.append(Shape72)

Transform69.children.append(Transform71)

Layer37.children.append(Transform69)
Script98 = x3d.Script(DEF="OrbitScript")
field99 = x3d.field()
field99.name = "coordinates"
field99.accessType = "inputOutput"
field99.type = "MFVec3f"

Script98.field.append(field99)
field100 = x3d.field()
field100.name = "coordIndexes"
field100.accessType = "outputOnly"
field100.type = "MFInt32"

Script98.field.append(field100)
field101 = x3d.field()
field101.name = "a"
field101.type = "SFFloat"
field101.accessType = "inputOutput"
field101.value = 10

Script98.field.append(field101)
field102 = x3d.field()
field102.name = "b"
field102.type = "SFFloat"
field102.accessType = "inputOutput"
field102.value = 10

Script98.field.append(field102)
field103 = x3d.field()
field103.name = "c"
field103.type = "SFFloat"
field103.accessType = "inputOutput"
field103.value = 2

Script98.field.append(field103)
field104 = x3d.field()
field104.name = "d"
field104.type = "SFFloat"
field104.accessType = "inputOutput"
field104.value = 2

Script98.field.append(field104)
field105 = x3d.field()
field105.name = "pdelta"
field105.type = "SFFloat"
field105.accessType = "inputOutput"
field105.value = 0

Script98.field.append(field105)
field106 = x3d.field()
field106.name = "tdelta"
field106.type = "SFFloat"
field106.accessType = "inputOutput"
field106.value = 0

Script98.field.append(field106)

Script98.sourceCode = '''ecmascript:\n"+
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

Layer37.children.append(Script98)
ROUTE107 = x3d.ROUTE()
ROUTE107.fromField = "coordIndexes"
ROUTE107.fromNode = "OrbitScript"
ROUTE107.toField = "set_coordIndex"
ROUTE107.toNode = "Orbit"

Layer37.children.append(ROUTE107)
ROUTE108 = x3d.ROUTE()
ROUTE108.fromField = "coordinates"
ROUTE108.fromNode = "OrbitScript"
ROUTE108.toField = "set_point"
ROUTE108.toNode = "OrbitCoordinates"

Layer37.children.append(ROUTE108)
Layer37.children.append(x3d.Comment("""DIS multiuser facilities"""))
DISEntityManager109 = x3d.DISEntityManager(DEF="EntityManager")
DISEntityTypeMapping110 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping110.category = 77
DISEntityTypeMapping110.specific = 1
DISEntityTypeMapping110.url = ["../data/Gramps8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"]

DISEntityManager109.children.append(DISEntityTypeMapping110)
DISEntityTypeMapping111 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping111.category = 77
DISEntityTypeMapping111.specific = 2
DISEntityTypeMapping111.url = ["../data/Leif8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"]

DISEntityManager109.children.append(DISEntityTypeMapping111)
DISEntityTypeMapping112 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping112.category = 77
DISEntityTypeMapping112.specific = 3
DISEntityTypeMapping112.url = ["../data/Lily8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"]

DISEntityManager109.children.append(DISEntityTypeMapping112)
DISEntityTypeMapping113 = x3d.DISEntityTypeMapping()
DISEntityTypeMapping113.category = 77
DISEntityTypeMapping113.specific = 4
DISEntityTypeMapping113.url = ["../data/Tufani8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"]

DISEntityManager109.children.append(DISEntityTypeMapping113)

Layer37.children.append(DISEntityManager109)
Collision114 = x3d.Collision()
Collision114.enabled = False
Group115 = x3d.Group(DEF="AvatarHolder")

Collision114.proxy = Group115

Layer37.children.append(Collision114)
ROUTE116 = x3d.ROUTE()
ROUTE116.fromField = "addedEntities"
ROUTE116.fromNode = "EntityManager"
ROUTE116.toField = "addChildren"
ROUTE116.toNode = "AvatarHolder"

Layer37.children.append(ROUTE116)
ROUTE117 = x3d.ROUTE()
ROUTE117.fromField = "removedEntities"
ROUTE117.fromNode = "EntityManager"
ROUTE117.toField = "removeChildren"
ROUTE117.toNode = "AvatarHolder"

Layer37.children.append(ROUTE117)

LayerSet36.layers.append(Layer37)
LayoutLayer118 = x3d.LayoutLayer()
LayoutLayer118.pickable = True
LayoutLayer118.objectType = ["ALL"]
LayoutLayer118.children.append(x3d.Comment("""positioning the LayoutLayer"""))
LayoutLayer118.children.append(x3d.Comment("""clipping the LayoutLayer"""))
LayoutLayer118.children.append(x3d.Comment("""the content (children) of the LayoutLayer"""))
LayoutLayer118.children.append(x3d.Comment("""first, the slider for scaling the model"""))
Transform119 = x3d.Transform()
Transform119.translation = [0,0,-3]
Shape120 = x3d.Shape()
Appearance121 = x3d.Appearance()
Material122 = x3d.Material()
Material122.diffuseColor = [0,0,0]
Material122.transparency = 0.7

Appearance121.material = Material122

Shape120.appearance = Appearance121
Box123 = x3d.Box()
Box123.size = [100,100,0.02]

Shape120.geometry = Box123

Transform119.children.append(Shape120)

LayoutLayer118.children.append(Transform119)
Transform124 = x3d.Transform(DEF="equationTransform")
Transform125 = x3d.Transform()
Transform125.translation = [0,0,-20]
Shape126 = x3d.Shape()
Text127 = x3d.Text(DEF="equation")
Text127.string = ["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"]
FontStyle128 = x3d.FontStyle()
FontStyle128.size = 0.09

Text127.fontStyle = FontStyle128

Shape126.geometry = Text127
Appearance129 = x3d.Appearance()
Material130 = x3d.Material()
Material130.diffuseColor = [1,1,0]

Appearance129.material = Material130

Shape126.appearance = Appearance129

Transform125.children.append(Shape126)

Transform124.children.append(Transform125)

LayoutLayer118.children.append(Transform124)
ProtoDeclare131 = x3d.ProtoDeclare()
ProtoDeclare131.name = "SliderProto"
ProtoInterface132 = x3d.ProtoInterface()
field133 = x3d.field()
field133.name = "sliderTranslation"
field133.accessType = "inputOutput"
field133.type = "SFVec3f"
field133.value = [0,0.7,0]

ProtoInterface132.field.append(field133)
field134 = x3d.field()
field134.name = "transformTranslation"
field134.accessType = "inputOutput"
field134.type = "SFVec3f"
field134.value = [0,0,0.1]

ProtoInterface132.field.append(field134)
field135 = x3d.field()
field135.name = "sensorTranslation"
field135.accessType = "inputOutput"
field135.type = "SFVec3f"
field135.value = [0,0,0]

ProtoInterface132.field.append(field135)
field136 = x3d.field()
field136.name = "textString"
field136.accessType = "inputOutput"
field136.type = "MFString"
field136.value = ["a="]

ProtoInterface132.field.append(field136)
field137 = x3d.field()
field137.name = "parameterScale"
field137.accessType = "inputOutput"
field137.type = "SFFloat"
field137.value = 30

ProtoInterface132.field.append(field137)
field138 = x3d.field()
field138.name = "parameterName"
field138.accessType = "inputOutput"
field138.type = "SFString"
field138.value = "a"

ProtoInterface132.field.append(field138)
field139 = x3d.field()
field139.name = "shaderNode"
field139.accessType = "inputOutput"
field139.type = "SFNode"

ProtoInterface132.field.append(field139)

ProtoDeclare131.ProtoInterface = ProtoInterface132
ProtoBody140 = x3d.ProtoBody()
Group141 = x3d.Group()
Transform142 = x3d.Transform(DEF="protoSlider")
Transform142.translation = [0,0.7,0]
IS143 = x3d.IS()
connect144 = x3d.connect()
connect144.nodeField = "translation"
connect144.protoField = "sliderTranslation"

IS143.connect.append(connect144)

Transform142.IS = IS143
Transform145 = x3d.Transform(DEF="protoTransform")
Transform145.translation = [0,0,0.1]
IS146 = x3d.IS()
connect147 = x3d.connect()
connect147.nodeField = "translation"
connect147.protoField = "sensorTranslation"

IS146.connect.append(connect147)

Transform145.IS = IS146
PlaneSensor148 = x3d.PlaneSensor(DEF="protoSensor")
PlaneSensor148.maxPosition = [1,0]

Transform145.children.append(PlaneSensor148)
Transform149 = x3d.Transform()
Transform149.translation = [0,0,0]
TouchSensor150 = x3d.TouchSensor(DEF="protoTS")

Transform149.children.append(TouchSensor150)

Transform145.children.append(Transform149)
Transform151 = x3d.Transform()
Shape152 = x3d.Shape()
Text153 = x3d.Text(DEF="protoText")
Text153.string = ["a="]
IS154 = x3d.IS()
connect155 = x3d.connect()
connect155.nodeField = "string"
connect155.protoField = "textString"

IS154.connect.append(connect155)

Text153.IS = IS154
FontStyle156 = x3d.FontStyle()
FontStyle156.size = 0.23

Text153.fontStyle = FontStyle156

Shape152.geometry = Text153
Appearance157 = x3d.Appearance()
Material158 = x3d.Material()

Appearance157.material = Material158

Shape152.appearance = Appearance157

Transform151.children.append(Shape152)

Transform145.children.append(Transform151)

Transform142.children.append(Transform145)

Group141.children.append(Transform142)
Script159 = x3d.Script(DEF="protoValueTransformerScript")
Script159.directOutput = True
Script159.mustEvaluate = True
field160 = x3d.field()
field160.name = "protoScale"
field160.accessType = "inputOutput"
field160.type = "SFFloat"
field160.value = 30

Script159.field.append(field160)
field161 = x3d.field()
field161.name = "protoParameterName"
field161.accessType = "inputOutput"
field161.type = "SFString"
field161.value = "a"

Script159.field.append(field161)
field162 = x3d.field()
field162.name = "shader"
field162.accessType = "inputOutput"
field162.type = "SFNode"

Script159.field.append(field162)
field163 = x3d.field()
field163.name = "newTranslation"
field163.accessType = "inputOnly"
field163.type = "SFVec3f"
field163.value = [1,1,1]

Script159.field.append(field163)
field164 = x3d.field()
field164.name = "protoValue_changed"
field164.accessType = "outputOnly"
field164.type = "SFFloat"
field164.value = 1

Script159.field.append(field164)
field165 = x3d.field()
field165.name = "protoText_changed"
field165.accessType = "outputOnly"
field165.type = "MFString"
field165.value = ["1.0"]

Script159.field.append(field165)
IS166 = x3d.IS()
connect167 = x3d.connect()
connect167.nodeField = "protoScale"
connect167.protoField = "parameterScale"

IS166.connect.append(connect167)
connect168 = x3d.connect()
connect168.nodeField = "protoParameterName"
connect168.protoField = "parameterName"

IS166.connect.append(connect168)
connect169 = x3d.connect()
connect169.nodeField = "shader"
connect169.protoField = "shaderNode"

IS166.connect.append(connect169)

Script159.IS = IS166

Script159.sourceCode = '''ecmascript:\n"+
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

Group141.children.append(Script159)
ROUTE170 = x3d.ROUTE()
ROUTE170.fromField = "translation_changed"
ROUTE170.fromNode = "protoSensor"
ROUTE170.toField = "set_translation"
ROUTE170.toNode = "protoTransform"

Group141.children.append(ROUTE170)
ROUTE171 = x3d.ROUTE()
ROUTE171.fromField = "translation_changed"
ROUTE171.fromNode = "protoSensor"
ROUTE171.toField = "newTranslation"
ROUTE171.toNode = "protoValueTransformerScript"

Group141.children.append(ROUTE171)
ROUTE172 = x3d.ROUTE()
ROUTE172.fromField = "protoText_changed"
ROUTE172.fromNode = "protoValueTransformerScript"
ROUTE172.toField = "string"
ROUTE172.toNode = "protoText"

Group141.children.append(ROUTE172)

ProtoBody140.children.append(Group141)

ProtoDeclare131.ProtoBody = ProtoBody140

LayoutLayer118.children.append(ProtoDeclare131)
ProtoInstance173 = x3d.ProtoInstance(DEF="aPI")
ProtoInstance173.name = "SliderProto"
fieldValue174 = x3d.fieldValue()
fieldValue174.name = "sliderTranslation"
fieldValue174.value = "0 0.7 0"

ProtoInstance173.fieldValue.append(fieldValue174)
fieldValue175 = x3d.fieldValue()
fieldValue175.name = "transformTranslation"
fieldValue175.value = "0 0 0.1"

ProtoInstance173.fieldValue.append(fieldValue175)
fieldValue176 = x3d.fieldValue()
fieldValue176.name = "sensorTranslation"
fieldValue176.value = "0 0 0"

ProtoInstance173.fieldValue.append(fieldValue176)
fieldValue177 = x3d.fieldValue()
fieldValue177.name = "textString"
fieldValue177.value = "\"a=\""

ProtoInstance173.fieldValue.append(fieldValue177)
fieldValue178 = x3d.fieldValue()
fieldValue178.name = "parameterScale"
fieldValue178.value = "30"

ProtoInstance173.fieldValue.append(fieldValue178)
fieldValue179 = x3d.fieldValue()
fieldValue179.name = "parameterName"
fieldValue179.value = "a"

ProtoInstance173.fieldValue.append(fieldValue179)
fieldValue180 = x3d.fieldValue()
fieldValue180.name = "shaderNode"
ComposedShader181 = x3d.ComposedShader(USE="freewrlShader")

fieldValue180.children.append(ComposedShader181)

ProtoInstance173.fieldValue.append(fieldValue180)

LayoutLayer118.children.append(ProtoInstance173)
ProtoInstance182 = x3d.ProtoInstance(DEF="bPI")
ProtoInstance182.name = "SliderProto"
fieldValue183 = x3d.fieldValue()
fieldValue183.name = "sliderTranslation"
fieldValue183.value = "0 0.4 0"

ProtoInstance182.fieldValue.append(fieldValue183)
fieldValue184 = x3d.fieldValue()
fieldValue184.name = "transformTranslation"
fieldValue184.value = "0 0 0.1"

ProtoInstance182.fieldValue.append(fieldValue184)
fieldValue185 = x3d.fieldValue()
fieldValue185.name = "sensorTranslation"
fieldValue185.value = "0 0 0"

ProtoInstance182.fieldValue.append(fieldValue185)
fieldValue186 = x3d.fieldValue()
fieldValue186.name = "textString"
fieldValue186.value = "\"b=\""

ProtoInstance182.fieldValue.append(fieldValue186)
fieldValue187 = x3d.fieldValue()
fieldValue187.name = "parameterScale"
fieldValue187.value = "30"

ProtoInstance182.fieldValue.append(fieldValue187)
fieldValue188 = x3d.fieldValue()
fieldValue188.name = "parameterName"
fieldValue188.value = "b"

ProtoInstance182.fieldValue.append(fieldValue188)
fieldValue189 = x3d.fieldValue()
fieldValue189.name = "shaderNode"
ComposedShader190 = x3d.ComposedShader(USE="freewrlShader")

fieldValue189.children.append(ComposedShader190)

ProtoInstance182.fieldValue.append(fieldValue189)

LayoutLayer118.children.append(ProtoInstance182)
ProtoInstance191 = x3d.ProtoInstance(DEF="cPI")
ProtoInstance191.name = "SliderProto"
fieldValue192 = x3d.fieldValue()
fieldValue192.name = "sliderTranslation"
fieldValue192.value = "0 0.1 0"

ProtoInstance191.fieldValue.append(fieldValue192)
fieldValue193 = x3d.fieldValue()
fieldValue193.name = "transformTranslation"
fieldValue193.value = "0 0 0.1"

ProtoInstance191.fieldValue.append(fieldValue193)
fieldValue194 = x3d.fieldValue()
fieldValue194.name = "sensorTranslation"
fieldValue194.value = "0 0 0"

ProtoInstance191.fieldValue.append(fieldValue194)
fieldValue195 = x3d.fieldValue()
fieldValue195.name = "textString"
fieldValue195.value = "\"c=\""

ProtoInstance191.fieldValue.append(fieldValue195)
fieldValue196 = x3d.fieldValue()
fieldValue196.name = "parameterScale"
fieldValue196.value = "20"

ProtoInstance191.fieldValue.append(fieldValue196)
fieldValue197 = x3d.fieldValue()
fieldValue197.name = "parameterName"
fieldValue197.value = "c"

ProtoInstance191.fieldValue.append(fieldValue197)
fieldValue198 = x3d.fieldValue()
fieldValue198.name = "shaderNode"
ComposedShader199 = x3d.ComposedShader(USE="freewrlShader")

fieldValue198.children.append(ComposedShader199)

ProtoInstance191.fieldValue.append(fieldValue198)

LayoutLayer118.children.append(ProtoInstance191)
ProtoInstance200 = x3d.ProtoInstance(DEF="dPI")
ProtoInstance200.name = "SliderProto"
fieldValue201 = x3d.fieldValue()
fieldValue201.name = "sliderTranslation"
fieldValue201.value = "0 -0.2 0"

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
fieldValue204.name = "textString"
fieldValue204.value = "\"d=\""

ProtoInstance200.fieldValue.append(fieldValue204)
fieldValue205 = x3d.fieldValue()
fieldValue205.name = "parameterScale"
fieldValue205.value = "20"

ProtoInstance200.fieldValue.append(fieldValue205)
fieldValue206 = x3d.fieldValue()
fieldValue206.name = "parameterName"
fieldValue206.value = "d"

ProtoInstance200.fieldValue.append(fieldValue206)
fieldValue207 = x3d.fieldValue()
fieldValue207.name = "shaderNode"
ComposedShader208 = x3d.ComposedShader(USE="freewrlShader")

fieldValue207.children.append(ComposedShader208)

ProtoInstance200.fieldValue.append(fieldValue207)

LayoutLayer118.children.append(ProtoInstance200)
ProtoInstance209 = x3d.ProtoInstance(DEF="tdeltaPI")
ProtoInstance209.name = "SliderProto"
fieldValue210 = x3d.fieldValue()
fieldValue210.name = "sliderTranslation"
fieldValue210.value = "0 -0.5 0"

ProtoInstance209.fieldValue.append(fieldValue210)
fieldValue211 = x3d.fieldValue()
fieldValue211.name = "transformTranslation"
fieldValue211.value = "0 0 0.1"

ProtoInstance209.fieldValue.append(fieldValue211)
fieldValue212 = x3d.fieldValue()
fieldValue212.name = "sensorTranslation"
fieldValue212.value = "0 0 0"

ProtoInstance209.fieldValue.append(fieldValue212)
fieldValue213 = x3d.fieldValue()
fieldValue213.name = "textString"
fieldValue213.value = "\"tdelta=\""

ProtoInstance209.fieldValue.append(fieldValue213)
fieldValue214 = x3d.fieldValue()
fieldValue214.name = "parameterScale"
fieldValue214.value = "6.28"

ProtoInstance209.fieldValue.append(fieldValue214)
fieldValue215 = x3d.fieldValue()
fieldValue215.name = "parameterName"
fieldValue215.value = "tdelta"

ProtoInstance209.fieldValue.append(fieldValue215)
fieldValue216 = x3d.fieldValue()
fieldValue216.name = "shaderNode"
ComposedShader217 = x3d.ComposedShader(USE="freewrlShader")

fieldValue216.children.append(ComposedShader217)

ProtoInstance209.fieldValue.append(fieldValue216)

LayoutLayer118.children.append(ProtoInstance209)
ProtoInstance218 = x3d.ProtoInstance(DEF="pdeltaPI")
ProtoInstance218.name = "SliderProto"
fieldValue219 = x3d.fieldValue()
fieldValue219.name = "sliderTranslation"
fieldValue219.value = "0 -0.8 0"

ProtoInstance218.fieldValue.append(fieldValue219)
fieldValue220 = x3d.fieldValue()
fieldValue220.name = "transformTranslation"
fieldValue220.value = "0 0 0.1"

ProtoInstance218.fieldValue.append(fieldValue220)
fieldValue221 = x3d.fieldValue()
fieldValue221.name = "sensorTranslation"
fieldValue221.value = "0 0 0"

ProtoInstance218.fieldValue.append(fieldValue221)
fieldValue222 = x3d.fieldValue()
fieldValue222.name = "textString"
fieldValue222.value = "\"pdelta=\""

ProtoInstance218.fieldValue.append(fieldValue222)
fieldValue223 = x3d.fieldValue()
fieldValue223.name = "parameterScale"
fieldValue223.value = "6.28"

ProtoInstance218.fieldValue.append(fieldValue223)
fieldValue224 = x3d.fieldValue()
fieldValue224.name = "parameterName"
fieldValue224.value = "pdelta"

ProtoInstance218.fieldValue.append(fieldValue224)
fieldValue225 = x3d.fieldValue()
fieldValue225.name = "shaderNode"
ComposedShader226 = x3d.ComposedShader(USE="freewrlShader")

fieldValue225.children.append(ComposedShader226)

ProtoInstance218.fieldValue.append(fieldValue225)

LayoutLayer118.children.append(ProtoInstance218)
Layout227 = x3d.Layout()
Layout227.align = ["LEFT","BOTTOM"]
Layout227.offset = [-0.2,0.19]
Layout227.offsetUnits = ["WORLD","WORLD"]
Layout227.scaleMode = ["NONE","NONE"]
Layout227.size = [0.4,0.6]
Layout227.sizeUnits = ["WORLD","WORLD"]

LayoutLayer118.layout = Layout227
Viewport228 = x3d.Viewport()
Viewport228.clipBoundary = [0,1,0,1]

LayoutLayer118.viewport = Viewport228

LayerSet36.layers.append(LayoutLayer118)

Scene31.layerSet = LayerSet36

X3D0.Scene = Scene31
f = open("../data/bumpyfreewrljsonverse.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/bumpyfreewrljsonverse.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/bumpyfreewrljsonverse.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
