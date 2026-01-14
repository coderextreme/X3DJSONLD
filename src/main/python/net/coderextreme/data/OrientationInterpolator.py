print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interactive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "HAnim"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "OrientationInterpolator.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "John Carlson"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "created"
meta5.content = "29 December 2025"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "license"
meta6.content = "license.html"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
WorldInfo8 = x3d.WorldInfo()
WorldInfo8.title = "OrientationInterpolator.x3d"

Scene7.children.append(WorldInfo8)
"""<OrientationInterpolator DEF='Stop_l_midtarsal_RotationInterpolator' key='0 0.5 1' keyValue='0 0 1 0 0 0 1 0 0 0 1 0'/>"""

X3D0.Scene = Scene7
f = open("../data/OrientationInterpolator.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/OrientationInterpolator.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/OrientationInterpolator.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
