print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "InlineSoundSource.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the \"url\" of X3D file."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "info"
meta4.content = "This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "28 October 2020"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "4 August 2021"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "CHANGELOG.txt"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "TODO"
meta9.content = "credit for audio files"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "https://medialab.hmu.gr/minipages/x3domAudio"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "identifier"
meta11.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "generator"
meta12.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "license"
meta13.content = "../license.html"

head1.children.append(meta13)

X3D0.head = head1
Scene14 = x3d.Scene()
WorldInfo15 = x3d.WorldInfo()
WorldInfo15.title = "InlineSoundSource.x3d"

Scene14.children.append(WorldInfo15)
NavigationInfo16 = x3d.NavigationInfo()
NavigationInfo16.DEF = "NAV"

Scene14.children.append(NavigationInfo16)
Background17 = x3d.Background()
Background17.backUrl = ["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"]
Background17.bottomUrl = ["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"]
Background17.frontUrl = ["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"]
Background17.leftUrl = ["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"]
Background17.rightUrl = ["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"]
Background17.topUrl = ["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"]

Scene14.children.append(Background17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.DEF = "Camera001"
Viewpoint18.description = "Camera001"
Viewpoint18.farDistance = 0
Viewpoint18.nearDistance = 1
Viewpoint18.orientation = [1,0,0,-0.523599]
Viewpoint18.position = [0,2000,3500]

Scene14.children.append(Viewpoint18)
Transform19 = x3d.Transform()
Transform19.DEF = "Floor"
Transform19.translation = [1.241,0,0.358]
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance()
Appearance21.DEF = "WireColor"
Material22 = x3d.Material()
Material22.diffuseColor = [0.122,0.114,0.125]

Appearance21.material = Material22

Shape20.appearance = Appearance21
IndexedFaceSet23 = x3d.IndexedFaceSet()
IndexedFaceSet23.DEF = "Box001-GEOMETRY"
IndexedFaceSet23.coordIndex = [0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,15,16,17,-1,18,19,20,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,34,35,-1]
IndexedFaceSet23.solid = False
Coordinate24 = x3d.Coordinate()
Coordinate24.point = [(-1000, 0, 1000),(-1000, 0, -1000),(1000, 0, -1000),(1000, 0, -1000),(1000, 0, 1000),(-1000, 0, 1000),(-1000, 8.031588, 1000),(1000, 8.031588, 1000),(1000, 8.031588, -1000),(1000, 8.031588, -1000),(-1000, 8.031588, -1000),(-1000, 8.031588, 1000),(-1000, 0, 1000),(1000, 0, 1000),(1000, 8.031588, 1000),(1000, 8.031588, 1000),(-1000, 8.031588, 1000),(-1000, 0, 1000),(1000, 0, 1000),(1000, 0, -1000),(1000, 8.031588, -1000),(1000, 8.031588, -1000),(1000, 8.031588, 1000),(1000, 0, 1000),(1000, 0, -1000),(-1000, 0, -1000),(-1000, 8.031588, -1000),(-1000, 8.031588, -1000),(1000, 8.031588, -1000),(1000, 0, -1000),(-1000, 0, -1000),(-1000, 0, 1000),(-1000, 8.031588, 1000),(-1000, 8.031588, 1000),(-1000, 8.031588, -1000),(-1000, 0, -1000)]

IndexedFaceSet23.coord = Coordinate24
Normal25 = x3d.Normal()
Normal25.vector = [(0, -1, 0),(0, -1, 0),(0, -1, 0),(0, -1, 0),(0, -1, 0),(0, -1, 0),(0, 1, 0),(0, 1, 0),(0, 1, 0),(0, 1, 0),(0, 1, 0),(0, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(0, 0, 1),(0, 0, 1),(0, 0, 1),(1, 0, 0),(1, 0, 0),(1, 0, 0),(1, 0, 0),(1, 0, 0),(1, 0, 0),(0, 0, -1),(0, 0, -1),(0, 0, -1),(0, 0, -1),(0, 0, -1),(0, 0, -1),(-1, 0, 0),(-1, 0, 0),(-1, 0, 0),(-1, 0, 0),(-1, 0, 0),(-1, 0, 0)]

IndexedFaceSet23.normal = Normal25

Shape20.geometry = IndexedFaceSet23

Transform19.children.append(Shape20)

Scene14.children.append(Transform19)
Transform26 = x3d.Transform()
Transform26.DEF = "InlineScene"
Inline27 = x3d.Inline()
Inline27.DEF = "inline"
Inline27.url = ["x3d/example1.x3d","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d","x3d/example1.wrl","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl"]

Transform26.children.append(Inline27)

Scene14.children.append(Transform26)

X3D0.Scene = Scene14
f = open("../data/InlineSoundSource.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/InlineSoundSource.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/InlineSoundSource.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
