print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "ExtrusionHeart.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Simple extrusion of a Valentine heart."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Class participants in course Introduction to VRML/X3D."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "created"
meta5.content = "14 February 2001"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "modified"
meta6.content = "Mon, 09 Feb 2026 12:23:01 GMT"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "identifier"
meta7.content = "https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d"

head1.children.append(meta7)

X3D0.head = head1
Scene8 = x3d.Scene()
Viewpoint9 = x3d.Viewpoint()
Viewpoint9.description = "Extrusion Heart"
Viewpoint9.position = [0,-4,0]
Viewpoint9.orientation = [1,0,0,1.57]

Scene8.children.append(Viewpoint9)
Transform10 = x3d.Transform()
Transform10.translation = [0,-0.5,0]
Shape11 = x3d.Shape()
Appearance12 = x3d.Appearance()
Material13 = x3d.Material()
Material13.diffuseColor = [0.8,0.3,0.3]

Appearance12.material = Material13

Shape11.appearance = Appearance12
Extrusion14 = x3d.Extrusion()
Extrusion14.solid = False
Extrusion14.creaseAngle = 3.14159
Extrusion14.crossSection = [(0, 0.8),(0.2, 1),(0.7, 0.95),(1, 0.5),(0.8, 0),(0.5, -0.3),(0, -0.7),(-0.5, -0.3),(-0.8, 0),(-1, 0.5),(-0.7, 0.95),(-0.2, 1),(0, 0.8)]
Extrusion14.scale = [(0.01, 0.01),(0.8, 0.8),(1, 1),(0.8, 0.8),(0.01, 0.01)]
Extrusion14.spine = [(0, 0, 0),(0, 0.1, 0),(0, 0.5, 0),(0, 0.9, 0),(0, 1, 0)]

Shape11.geometry = Extrusion14

Transform10.children.append(Shape11)

Scene8.children.append(Transform10)

X3D0.Scene = Scene8
f = open("../data/ExtrusionHeart.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ExtrusionHeart.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ExtrusionHeart.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
