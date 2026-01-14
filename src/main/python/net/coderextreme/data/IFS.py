print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "HAnim"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "IFS.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "identifier"
meta4.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/IFS.x3d"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "description"
meta5.content = "An attempt at a standard LOA-4 skeleton"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "generator"
meta6.content = "h2.pl"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "18 Jan 2023"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "creator"
meta8.content = "John Carlson"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "created"
meta9.content = "9 November 2020"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "license"
meta10.content = "../license.html"

head1.children.append(meta10)

X3D0.head = head1
Scene11 = x3d.Scene()
Group12 = x3d.Group()
"""DEFS for markers of skeleton joints, segments, and sites"""
Transform13 = x3d.Transform()
Transform13.translation = [0,2.1,0]
Shape14 = x3d.Shape()
Shape14.DEF = "HAnimSiteShape"
IndexedFaceSet15 = x3d.IndexedFaceSet()
IndexedFaceSet15.DEF = "DiamondIFS"
IndexedFaceSet15.creaseAngle = 0.5
IndexedFaceSet15.solid = False
IndexedFaceSet15.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA16 = x3d.ColorRGBA()
ColorRGBA16.DEF = "HAnimSiteColorRGBA"
ColorRGBA16.color = [(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet15.color = ColorRGBA16
Coordinate17 = x3d.Coordinate()
Coordinate17.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet15.coord = Coordinate17

Shape14.geometry = IndexedFaceSet15
Appearance18 = x3d.Appearance()
Material19 = x3d.Material()
Material19.diffuseColor = [1,1,0]
Material19.transparency = 0.3

Appearance18.material = Material19

Shape14.appearance = Appearance18

Transform13.children.append(Shape14)

Group12.children.append(Transform13)

Scene11.children.append(Group12)
NavigationInfo20 = x3d.NavigationInfo()
NavigationInfo20.speed = 1.5

Scene11.children.append(NavigationInfo20)
Viewpoint21 = x3d.Viewpoint()
Viewpoint21.description = "default"

Scene11.children.append(Viewpoint21)

X3D0.Scene = Scene11
f = open("../data/IFS.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/IFS.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/IFS.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
