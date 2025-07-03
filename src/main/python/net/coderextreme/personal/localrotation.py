import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("localrotation.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/localrotation.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("chained boxes")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
WorldInfo8 = x3d.WorldInfo()
WorldInfo8.setTitle("localrotation.x3d")

Scene7.addChildren(WorldInfo8)
NavigationInfo9 = x3d.NavigationInfo()
NavigationInfo9.setType(["ANY","EXAMINE","FLY","LOOKAT"])

Scene7.addChildren(NavigationInfo9)
Viewpoint10 = x3d.Viewpoint()
Viewpoint10.setDescription("Tour Views")
Viewpoint10.setPosition(x3d.doubleToFloat([0,0,20]))

Scene7.addChildren(Viewpoint10)
Transform11 = x3d.Transform()
Transform11.setTranslation(x3d.doubleToFloat([-4,0,0]))
Shape12 = x3d.Shape()
Box13 = x3d.Box()

Shape12.setGeometry(Box13)

Transform11.addChild(Shape12)
Transform14 = x3d.Transform()
Transform14.setDEF("TransformTargetParent")
Transform14.setTranslation(x3d.doubleToFloat([4,0,0]))
Shape15 = x3d.Shape()
Box16 = x3d.Box()

Shape15.setGeometry(Box16)

Transform14.addChild(Shape15)
Transform17 = x3d.Transform()
Transform17.setDEF("TransformTargetChild")
Transform17.setTranslation(x3d.doubleToFloat([4,0,0]))
Shape18 = x3d.Shape()
Box19 = x3d.Box()

Shape18.setGeometry(Box19)

Transform17.addChild(Shape18)

Transform14.addChildren(Transform17)

Transform11.addChildren(Transform14)

Scene7.addChildren(Transform11)
ProximitySensor20 = x3d.ProximitySensor()
ProximitySensor20.setDEF("ActivateSensor")
ProximitySensor20.setSize(x3d.doubleToFloat([1000000,1000000,1000000]))

Scene7.addChildren(ProximitySensor20)
TimeSensor21 = x3d.TimeSensor()
TimeSensor21.setDEF("Clock")

Scene7.addChildren(TimeSensor21)
ROUTE22 = x3d.ROUTE()
ROUTE22.setFromNode("ActivateSensor")
ROUTE22.setFromField("enterTime")
ROUTE22.setToNode("Clock")
ROUTE22.setToField("set_startTime")

Scene7.addChildren(ROUTE22)
OrientationInterpolator23 = x3d.OrientationInterpolator()
OrientationInterpolator23.setDEF("Rotater")
OrientationInterpolator23.setKey(x3d.doubleToFloat([0,1]))
OrientationInterpolator23.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,1.57]))

Scene7.addChildren(OrientationInterpolator23)
ROUTE24 = x3d.ROUTE()
ROUTE24.setFromNode("Clock")
ROUTE24.setFromField("fraction_changed")
ROUTE24.setToNode("Rotater")
ROUTE24.setToField("set_fraction")

Scene7.addChildren(ROUTE24)
ROUTE25 = x3d.ROUTE()
ROUTE25.setFromNode("Rotater")
ROUTE25.setFromField("value_changed")
ROUTE25.setToNode("TransformTargetParent")
ROUTE25.setToField("set_rotation")

Scene7.addChildren(ROUTE25)
ROUTE26 = x3d.ROUTE()
ROUTE26.setFromNode("Rotater")
ROUTE26.setFromField("value_changed")
ROUTE26.setToNode("TransformTargetChild")
ROUTE26.setToField("set_rotation")

Scene7.addChildren(ROUTE26)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../personal/localrotation.new.python.x3d")
X3D0.toFileJSON("../personal/localrotation.new.python.json")
