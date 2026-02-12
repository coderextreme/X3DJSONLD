print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta6.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "generator"
meta7.content = "h2.pl"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "modified"
meta8.content = "Mon, 09 Feb 2026 12:24:18 GMT"

head1.children.append(meta8)

X3D0.head = head1
Scene9 = x3d.Scene()
Group10 = x3d.Group()
Transform11 = x3d.Transform()
Transform11.translation = [0,2.1,0]
Shape12 = x3d.Shape(DEF="HAnimSiteShape")
Appearance13 = x3d.Appearance()
Material14 = x3d.Material()
Material14.diffuseColor = [1,1,0]
Material14.transparency = 0.3

Appearance13.material = Material14

Shape12.appearance = Appearance13
IndexedFaceSet15 = x3d.IndexedFaceSet(DEF="DiamondIFS")
IndexedFaceSet15.solid = False
IndexedFaceSet15.creaseAngle = 0.5
IndexedFaceSet15.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA16 = x3d.ColorRGBA(DEF="HAnimSiteColorRGBA")
ColorRGBA16.color = [(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet15.color = ColorRGBA16
Coordinate17 = x3d.Coordinate()
Coordinate17.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet15.coord = Coordinate17

Shape12.geometry = IndexedFaceSet15

Transform11.children.append(Shape12)

Group10.children.append(Transform11)

Scene9.children.append(Group10)
NavigationInfo18 = x3d.NavigationInfo()
NavigationInfo18.speed = 1.5

Scene9.children.append(NavigationInfo18)
Viewpoint19 = x3d.Viewpoint()
Viewpoint19.description = "default"

Scene9.children.append(Viewpoint19)

X3D0.Scene = Scene9
f = open("../data/IFS.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/IFS.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/IFS.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
