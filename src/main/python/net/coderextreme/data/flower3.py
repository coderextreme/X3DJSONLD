import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("flower3.x3d")

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
meta5.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("a flower")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()

Scene7.addChildren(NavigationInfo8)
DirectionalLight9 = x3d.DirectionalLight()
DirectionalLight9.setDirection([0,-0.8,-0.2])
DirectionalLight9.setIntensity(0.5)

Scene7.addChildren(DirectionalLight9)
Background10 = x3d.Background()
Background10.setSkyColor([1,1,1])
Background10.setTransparency(0)

Scene7.addChildren(Background10)
Viewpoint11 = x3d.Viewpoint()
Viewpoint11.setDescription("One mathematical orbital")
Viewpoint11.setPosition([0,0,50])

Scene7.addChildren(Viewpoint11)
Transform12 = x3d.Transform()
Transform12.setDEF("OrbitTransform")
Transform12.setTranslation([8,0,0])
Transform12.setBboxCenter([0,0,0])
Transform12.setBboxSize([-1,-1,-1])
Shape13 = x3d.Shape()
Shape13.setBboxCenter([0,0,0])
Shape13.setBboxSize([-1,-1,-1])
Appearance14 = x3d.Appearance()
Material15 = x3d.Material()
Material15.setDiffuseColor([0,0.5,1])
Material15.setSpecularColor([0,0.5,1])

Appearance14.setMaterial(Material15)

Shape13.setAppearance(Appearance14)
IndexedFaceSet16 = x3d.IndexedFaceSet()
IndexedFaceSet16.setConvex(False)
IndexedFaceSet16.setDEF("Orbit")
Coordinate17 = x3d.Coordinate()
Coordinate17.setDEF("OrbitCoordinates")

IndexedFaceSet16.setCoord(Coordinate17)

Shape13.setGeometry(IndexedFaceSet16)

Transform12.addChildren(Shape13)

Scene7.addChildren(Transform12)
TimeSensor18 = x3d.TimeSensor()
TimeSensor18.setDEF("Clock")
TimeSensor18.setCycleInterval(16)
TimeSensor18.setLoop(True)

Scene7.addChildren(TimeSensor18)
ROUTE19 = x3d.ROUTE()
ROUTE19.setFromNode("OrbitScript")
ROUTE19.setFromField("coordIndexes")
ROUTE19.setToNode("Orbit")
ROUTE19.setToField("coordIndex")

Scene7.addChildren(ROUTE19)
ROUTE20 = x3d.ROUTE()
ROUTE20.setFromNode("OrbitScript")
ROUTE20.setFromField("coordinates")
ROUTE20.setToNode("OrbitCoordinates")
ROUTE20.setToField("point")

Scene7.addChildren(ROUTE20)
ROUTE21 = x3d.ROUTE()
ROUTE21.setFromNode("Clock")
ROUTE21.setFromField("fraction_changed")
ROUTE21.setToNode("OrbitScript")
ROUTE21.setToField("set_fraction")

Scene7.addChildren(ROUTE21)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/flower3_RoundTrip.x3d")
