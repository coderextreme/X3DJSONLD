import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("HAnim")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("JohnBoy.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("identifier")
meta4.setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("description")
meta5.setContent("An attempt at a standard LOA-4 skeleton")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("generator")
meta6.setContent("h2.pl")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("creator")
meta7.setContent("John Carlson")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("created")
meta8.setContent("9 November 2020")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("license")
meta9.setContent("../license.html")

head1.addMeta(meta9)

X3D0.setHead(head1)
Scene10 = x3d.Scene()
Transform11 = x3d.Transform()
#DEF for markerfor XYZ axes
Shape12 = x3d.Shape()
Shape12.setDEF("AxisLinesShape")
#RGB lines showing XYZ axes
IndexedLineSet13 = x3d.IndexedLineSet()
IndexedLineSet13.setColorIndex([0,1,2])
IndexedLineSet13.setColorPerVertex(False)
IndexedLineSet13.setCoordIndex([0,1,-1,0,2,-1,0,3,-1])
Coordinate14 = x3d.Coordinate()
Coordinate14.setPoint([0,0,0,0.1,0,0,0,0.1,0,0,0,0.1])

IndexedLineSet13.setCoord(Coordinate14)
Color15 = x3d.Color()
Color15.setColor([1,0,0,0,0.6,0,0,0,1])

IndexedLineSet13.setColor(Color15)

Shape12.setGeometry(IndexedLineSet13)

Transform11.addChildren(Shape12)

Scene10.addChildren(Transform11)
Group16 = x3d.Group()
#DEFS for markers of skeleton joints, segments, and sites
Transform17 = x3d.Transform()
Transform18 = x3d.Transform()
Transform18.setTranslation([0,2,0])
Shape19 = x3d.Shape()
Shape19.setDEF("HAnimRootShape")
Sphere20 = x3d.Sphere()
Sphere20.setRadius(0.02)

Shape19.setGeometry(Sphere20)
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.setDEF("HAnimRootMaterial")
Material22.setDiffuseColor([0.8,0,0])
Material22.setTransparency(0.3)

Appearance21.setMaterial(Material22)

Shape19.setAppearance(Appearance21)

Transform18.addChildren(Shape19)

Transform17.addChildren(Transform18)
Transform23 = x3d.Transform()
Transform23.setTranslation([0,2.1,0])
Shape24 = x3d.Shape()
Shape24.setDEF("HAnimJointShape")
Sphere25 = x3d.Sphere()
Sphere25.setRadius(0.02)

Shape24.setGeometry(Sphere25)
Appearance26 = x3d.Appearance()
Material27 = x3d.Material()
Material27.setDEF("HAnimJointMaterial")
Material27.setDiffuseColor([0,0,0.8])
Material27.setTransparency(0.3)

Appearance26.setMaterial(Material27)

Shape24.setAppearance(Appearance26)

Transform23.addChildren(Shape24)

Transform17.addChildren(Transform23)
Transform28 = x3d.Transform()
Transform28.setTranslation([0,2.05,0])
Shape29 = x3d.Shape()
Shape29.setDEF("HAnimSegmentLine")
LineSet30 = x3d.LineSet()
LineSet30.setVertexCount([2])
ColorRGBA31 = x3d.ColorRGBA()
ColorRGBA31.setDEF("HAnimSegmentLineColorRGBA")
ColorRGBA31.setColor([1,1,0,1,1,1,0,0.1])

LineSet30.setColor(ColorRGBA31)
Coordinate32 = x3d.Coordinate()
Coordinate32.setPoint([-0.05,0,0,0.05,0,0])

LineSet30.setCoord(Coordinate32)

Shape29.setGeometry(LineSet30)

Transform28.addChildren(Shape29)

Transform17.addChildren(Transform28)
Transform33 = x3d.Transform()
Transform33.setTranslation([0,2.1,0])
Shape34 = x3d.Shape()
Shape34.setDEF("HAnimSiteShape")
IndexedFaceSet35 = x3d.IndexedFaceSet()
IndexedFaceSet35.setDEF("DiamondIFS")
IndexedFaceSet35.setCreaseAngle(0.5)
IndexedFaceSet35.setSolid(False)
IndexedFaceSet35.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
ColorRGBA36 = x3d.ColorRGBA()
ColorRGBA36.setDEF("HAnimSiteColorRGBA")
ColorRGBA36.setColor([1,1,0,1,1,1,0,0.1])

IndexedFaceSet35.setColor(ColorRGBA36)
Coordinate37 = x3d.Coordinate()
Coordinate37.setPoint([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])

IndexedFaceSet35.setCoord(Coordinate37)

Shape34.setGeometry(IndexedFaceSet35)
Appearance38 = x3d.Appearance()
Material39 = x3d.Material()
Material39.setDiffuseColor([1,1,0])
Material39.setTransparency(0.3)

Appearance38.setMaterial(Material39)

Shape34.setAppearance(Appearance38)

Transform33.addChildren(Shape34)

Transform17.addChildren(Transform33)

Group16.addChildren(Transform17)

Scene10.addChildren(Group16)
NavigationInfo40 = x3d.NavigationInfo()
NavigationInfo40.setSpeed(1.5)

Scene10.addChildren(NavigationInfo40)
Viewpoint41 = x3d.Viewpoint()
Viewpoint41.setDescription("default")

Scene10.addChildren(Viewpoint41)

X3D0.setScene(Scene10)
X3D0.toFileX3D("../data/skeleton7_RoundTrip.x3d")
