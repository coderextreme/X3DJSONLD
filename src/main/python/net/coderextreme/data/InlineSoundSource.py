print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
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
meta7.content = "Mon, 09 Feb 2026 07:11:33 GMT"

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

X3D0.head = head1
Scene12 = x3d.Scene()
WorldInfo13 = x3d.WorldInfo()
WorldInfo13.title = "InlineSoundSource.x3d"

Scene12.children.append(WorldInfo13)
NavigationInfo14 = x3d.NavigationInfo(DEF="NAV")

Scene12.children.append(NavigationInfo14)
Background15 = x3d.Background()
Background15.frontUrl = ["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"]
Background15.backUrl = ["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"]
Background15.leftUrl = ["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"]
Background15.rightUrl = ["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"]
Background15.topUrl = ["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"]
Background15.bottomUrl = ["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"]

Scene12.children.append(Background15)
Viewpoint16 = x3d.Viewpoint(DEF="Camera001")
Viewpoint16.description = "Camera001"
Viewpoint16.position = [0,2000,3500]
Viewpoint16.orientation = [1,0,0,-0.523599]
Viewpoint16.nearDistance = 1
Viewpoint16.farDistance = 0

Scene12.children.append(Viewpoint16)
Transform17 = x3d.Transform(DEF="Floor")
Transform17.translation = [1.241,0,0.358]
Shape18 = x3d.Shape()
Appearance19 = x3d.Appearance(DEF="WireColor")
Material20 = x3d.Material()
Material20.diffuseColor = [0.122,0.114,0.125]

Appearance19.material = Material20

Shape18.appearance = Appearance19
IndexedFaceSet21 = x3d.IndexedFaceSet(DEF="Box001-GEOMETRY")
IndexedFaceSet21.solid = False
IndexedFaceSet21.coordIndex = [0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,15,16,17,-1,18,19,20,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,34,35,-1]
Normal22 = x3d.Normal()
Normal22.vector = [(0, -1, 0),(0, -1, 0),(0, -1, 0),(0, -1, 0),(0, -1, 0),(0, -1, 0),(0, 1, 0),(0, 1, 0),(0, 1, 0),(0, 1, 0),(0, 1, 0),(0, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(0, 0, 1),(0, 0, 1),(0, 0, 1),(1, 0, 0),(1, 0, 0),(1, 0, 0),(1, 0, 0),(1, 0, 0),(1, 0, 0),(0, 0, -1),(0, 0, -1),(0, 0, -1),(0, 0, -1),(0, 0, -1),(0, 0, -1),(-1, 0, 0),(-1, 0, 0),(-1, 0, 0),(-1, 0, 0),(-1, 0, 0),(-1, 0, 0)]

IndexedFaceSet21.normal = Normal22
Coordinate23 = x3d.Coordinate()
Coordinate23.point = [(-1000, 0, 1000),(-1000, 0, -1000),(1000, 0, -1000),(1000, 0, -1000),(1000, 0, 1000),(-1000, 0, 1000),(-1000, 8.031588, 1000),(1000, 8.031588, 1000),(1000, 8.031588, -1000),(1000, 8.031588, -1000),(-1000, 8.031588, -1000),(-1000, 8.031588, 1000),(-1000, 0, 1000),(1000, 0, 1000),(1000, 8.031588, 1000),(1000, 8.031588, 1000),(-1000, 8.031588, 1000),(-1000, 0, 1000),(1000, 0, 1000),(1000, 0, -1000),(1000, 8.031588, -1000),(1000, 8.031588, -1000),(1000, 8.031588, 1000),(1000, 0, 1000),(1000, 0, -1000),(-1000, 0, -1000),(-1000, 8.031588, -1000),(-1000, 8.031588, -1000),(1000, 8.031588, -1000),(1000, 0, -1000),(-1000, 0, -1000),(-1000, 0, 1000),(-1000, 8.031588, 1000),(-1000, 8.031588, 1000),(-1000, 8.031588, -1000),(-1000, 0, -1000)]

IndexedFaceSet21.coord = Coordinate23

Shape18.geometry = IndexedFaceSet21

Transform17.children.append(Shape18)

Scene12.children.append(Transform17)
Transform24 = x3d.Transform(DEF="InlineScene")
Inline25 = x3d.Inline(DEF="inline")
Inline25.url = ["x3d/example1.x3d","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d","x3d/example1.wrl","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl"]

Transform24.children.append(Inline25)

Scene12.children.append(Transform24)

X3D0.Scene = Scene12
f = open("../data/InlineSoundSource.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/InlineSoundSource.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/InlineSoundSource.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
