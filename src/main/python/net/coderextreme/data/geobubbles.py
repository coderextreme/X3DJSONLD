import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Geospatial")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("geobubbles.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("John Carlson")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("generator")
meta5.setContent("manual")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/geobubbles.x3d")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("description")
meta7.setContent("geo bubbles")

head1.addMeta(meta7)

X3D0.setHead(head1)
Scene8 = x3d.Scene()
#Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/
#PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/
GeoViewpoint9 = x3d.GeoViewpoint()
GeoViewpoint9.setDEF("Tour")
GeoViewpoint9.setPosition([0,0,4])
GeoViewpoint9.setOrientation([1,0,0,0])
GeoViewpoint9.setDescription("Tour Views")

Scene8.addChildren(GeoViewpoint9)
Background10 = x3d.Background()
Background10.setBackUrl(["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"])
Background10.setBottomUrl(["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"])
Background10.setFrontUrl(["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"])
Background10.setLeftUrl(["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"])
Background10.setRightUrl(["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"])
Background10.setTopUrl(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"])
Background10.setSkyColor([0,0,0])
Background10.setTransparency(0)

Scene8.addChildren(Background10)
Transform11 = x3d.Transform()
Transform11.setBboxCenter([0,0,0])
Transform11.setBboxSize([-1,-1,-1])
Shape12 = x3d.Shape()
Shape12.setBboxCenter([0,0,0])
Shape12.setBboxSize([-1,-1,-1])
Sphere13 = x3d.Sphere()

Shape12.setGeometry(Sphere13)
Appearance14 = x3d.Appearance()
Material15 = x3d.Material()
Material15.setDiffuseColor([0.7,0.7,0.7])
Material15.setSpecularColor([0.5,0.5,0.5])

Appearance14.setMaterial(Material15)

Shape12.setAppearance(Appearance14)

Transform11.addChildren(Shape12)

Scene8.addChildren(Transform11)
TimeSensor16 = x3d.TimeSensor()
TimeSensor16.setDEF("TourTime")
TimeSensor16.setCycleInterval(5)
TimeSensor16.setLoop(True)

Scene8.addChildren(TimeSensor16)
GeoPositionInterpolator17 = x3d.GeoPositionInterpolator()
GeoPositionInterpolator17.setDEF("TourPosition")
GeoPositionInterpolator17.setKey([0,1])
GeoPositionInterpolator17.setKeyValue([0.0015708,0,4,0,0.0015708,4])

Scene8.addChildren(GeoPositionInterpolator17)
ROUTE18 = x3d.ROUTE()
ROUTE18.setFromNode("TourTime")
ROUTE18.setFromField("cycleTime")
ROUTE18.setToNode("RandomTourTime")
ROUTE18.setToField("set_cycle")

Scene8.addChildren(ROUTE18)
ROUTE19 = x3d.ROUTE()
ROUTE19.setFromNode("RandomTourTime")
ROUTE19.setFromField("position")
ROUTE19.setToNode("TourPosition")
ROUTE19.setToField("keyValue")

Scene8.addChildren(ROUTE19)
ROUTE20 = x3d.ROUTE()
ROUTE20.setFromNode("TourTime")
ROUTE20.setFromField("fraction_changed")
ROUTE20.setToNode("TourPosition")
ROUTE20.setToField("set_fraction")

Scene8.addChildren(ROUTE20)
ROUTE21 = x3d.ROUTE()
ROUTE21.setFromNode("TourPosition")
ROUTE21.setFromField("geovalue_changed")
ROUTE21.setToNode("Tour")
ROUTE21.setToField("set_position")

Scene8.addChildren(ROUTE21)

X3D0.setScene(Scene8)
X3D0.toFileX3D("../data/geobubbles_RoundTrip.x3d")
