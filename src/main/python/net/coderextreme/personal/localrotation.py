print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "localrotation.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "John Carlson"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "generator"
meta4.content = "manual"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "identifier"
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/localrotation.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "description"
meta6.content = "chained boxes"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
WorldInfo8 = x3d.WorldInfo()
WorldInfo8.title = "localrotation.x3d"

Scene7.children.append(WorldInfo8)
NavigationInfo9 = x3d.NavigationInfo()
NavigationInfo9.type = ["ANY","EXAMINE","FLY","LOOKAT"]

Scene7.children.append(NavigationInfo9)
Viewpoint10 = x3d.Viewpoint()
Viewpoint10.description = "Tour Views"
Viewpoint10.position = [0,0,20]

Scene7.children.append(Viewpoint10)
Transform11 = x3d.Transform()
Transform11.translation = [-4,0,0]
Shape12 = x3d.Shape()
Box13 = x3d.Box()

Shape12.geometry = Box13

Transform11.children.append(Shape12)
Transform14 = x3d.Transform()
Transform14.DEF = "TransformTargetParent"
Transform14.translation = [4,0,0]
Shape15 = x3d.Shape()
Box16 = x3d.Box()

Shape15.geometry = Box16

Transform14.children.append(Shape15)
Transform17 = x3d.Transform()
Transform17.DEF = "TransformTargetChild"
Transform17.translation = [4,0,0]
Shape18 = x3d.Shape()
Box19 = x3d.Box()

Shape18.geometry = Box19

Transform17.children.append(Shape18)

Transform14.children.append(Transform17)

Transform11.children.append(Transform14)

Scene7.children.append(Transform11)
ProximitySensor20 = x3d.ProximitySensor()
ProximitySensor20.DEF = "ActivateSensor"
ProximitySensor20.size = [1000000,1000000,1000000]

Scene7.children.append(ProximitySensor20)
TimeSensor21 = x3d.TimeSensor()
TimeSensor21.DEF = "Clock"

Scene7.children.append(TimeSensor21)
ROUTE22 = x3d.ROUTE()
ROUTE22.fromNode = "ActivateSensor"
ROUTE22.fromField = "enterTime"
ROUTE22.toNode = "Clock"
ROUTE22.toField = "set_startTime"

Scene7.children.append(ROUTE22)
OrientationInterpolator23 = x3d.OrientationInterpolator()
OrientationInterpolator23.DEF = "Rotater"
OrientationInterpolator23.key = [0,1]

Scene7.children.append(OrientationInterpolator23)
ROUTE24 = x3d.ROUTE()
ROUTE24.fromNode = "Clock"
ROUTE24.fromField = "fraction_changed"
ROUTE24.toNode = "Rotater"
ROUTE24.toField = "set_fraction"

Scene7.children.append(ROUTE24)
ROUTE25 = x3d.ROUTE()
ROUTE25.fromNode = "Rotater"
ROUTE25.fromField = "value_changed"
ROUTE25.toNode = "TransformTargetParent"
ROUTE25.toField = "set_rotation"

Scene7.children.append(ROUTE25)
ROUTE26 = x3d.ROUTE()
ROUTE26.fromNode = "Rotater"
ROUTE26.fromField = "value_changed"
ROUTE26.toNode = "TransformTargetChild"
ROUTE26.toField = "set_rotation"

Scene7.children.append(ROUTE26)

X3D0.Scene = Scene7
f = open("../personal/localrotation.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/localrotation.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
