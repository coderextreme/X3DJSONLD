import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("CADInterchange")
X3D0.setVersion("3.1")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("CADGeometry")
component2.setLevel(2)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("EnvironmentalEffects")
component3.setLevel(1)

head1.addComponent(component3)
meta4 = x3d.meta()
meta4.setName("title")
meta4.setContent("CADPartChildNoTransformation.x3d")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("description")
meta5.setContent("Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children.")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("creator")
meta6.setContent("Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("translator")
meta7.setContent("Vince Marchetti bushing generation using python scripts")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("https://www.web3d.org/member-only/mantis/view.php?id=528")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("warning")
meta9.setContent("This scene is intended for specification development only.")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("created")
meta10.setContent("29 June 2012")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("modified")
meta11.setContent("20 October 2019")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("identifier")
meta12.setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("generator")
meta13.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("license")
meta14.setContent("../license.html")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = x3d.Scene()
WorldInfo16 = x3d.WorldInfo()
WorldInfo16.setTitle("CADPartChildNoTransformation.x3d")

Scene15.addChildren(WorldInfo16)
Background17 = x3d.Background()
Background17.setSkyColor([0.9607843,1,0.9607843])

Scene15.addChildren(Background17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.setDescription("Hello CAD bushing")
Viewpoint18.setOrientation([1,0,0,-0.321751])
Viewpoint18.setPosition([0,5,15])

Scene15.addChildren(Viewpoint18)
CADAssembly19 = x3d.CADAssembly()
CADAssembly19.setName("DesignPatternAssembly")
CADPart20 = x3d.CADPart()
CADPart20.setName("CADPartExample")
#the rotation and translation attributes serve to position the bushing within the assembly
CADFace21 = x3d.CADFace()
CADFace21.setName("outerSurface")
Shape22 = x3d.Shape()
#note solid='true' and so one-sided external rendering only
Cylinder23 = x3d.Cylinder()
Cylinder23.setBottom(False)
Cylinder23.setHeight(3)
Cylinder23.setRadius(2)
Cylinder23.setTop(False)

Shape22.setGeometry(Cylinder23)
Appearance24 = x3d.Appearance()
Appearance24.setDEF("AppearanceGrey")
Material25 = x3d.Material()

Appearance24.setMaterial(Material25)

Shape22.setAppearance(Appearance24)

CADFace21.setShape(Shape22)

CADPart20.addChildren(CADFace21)
CADFace26 = x3d.CADFace()
CADFace26.setName("innerSurface")
Shape27 = x3d.Shape()
#note solid='false' and so two-sided internal + external rendering
Cylinder28 = x3d.Cylinder()
Cylinder28.setBottom(False)
Cylinder28.setHeight(3)
Cylinder28.setSolid(False)
Cylinder28.setTop(False)

Shape27.setGeometry(Cylinder28)
Appearance29 = x3d.Appearance()
Appearance29.setUSE("AppearanceGrey")

Shape27.setAppearance(Appearance29)

CADFace26.setShape(Shape27)

CADPart20.addChildren(CADFace26)
CADFace30 = x3d.CADFace()
CADFace30.setName("topCap")
Shape31 = x3d.Shape()
IndexedTriangleSet32 = x3d.IndexedTriangleSet()
IndexedTriangleSet32.setIndex([0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65])
Coordinate33 = x3d.Coordinate()
Coordinate33.setPoint([2,1.5,0,1,1.5,0,1.9616,1.5,0.3902,0.9808,1.5,0.1951,1.8478,1.5,0.7654,0.9239,1.5,0.3827,1.6629,1.5,1.1111,0.8315,1.5,0.5556,1.4142,1.5,1.4142,0.7071,1.5,0.7071,1.1111,1.5,1.6629,0.5556,1.5,0.8315,0.7654,1.5,1.8478,0.3827,1.5,0.9239,0.3902,1.5,1.9616,0.1951,1.5,0.9808,0,1.5,2,0,1.5,1,-0.3902,1.5,1.9616,-0.1951,1.5,0.9808,-0.7654,1.5,1.8478,-0.3827,1.5,0.9239,-1.1111,1.5,1.6629,-0.5556,1.5,0.8315,-1.4142,1.5,1.4142,-0.7071,1.5,0.7071,-1.6629,1.5,1.1111,-0.8315,1.5,0.5556,-1.8478,1.5,0.7654,-0.9239,1.5,0.3827,-1.9616,1.5,0.3902,-0.9808,1.5,0.1951,-2,1.5,0,-1,1.5,0,-1.9616,1.5,-0.3902,-0.9808,1.5,-0.1951,-1.8478,1.5,-0.7654,-0.9239,1.5,-0.3827,-1.6629,1.5,-1.1111,-0.8315,1.5,-0.5556,-1.4142,1.5,-1.4142,-0.7071,1.5,-0.7071,-1.1111,1.5,-1.6629,-0.5556,1.5,-0.8315,-0.7654,1.5,-1.8478,-0.3827,1.5,-0.9239,-0.3902,1.5,-1.9616,-0.1951,1.5,-0.9808,0,1.5,-2,0,1.5,-1,0.3902,1.5,-1.9616,0.1951,1.5,-0.9808,0.7654,1.5,-1.8478,0.3827,1.5,-0.9239,1.1111,1.5,-1.6629,0.5556,1.5,-0.8315,1.4142,1.5,-1.4142,0.7071,1.5,-0.7071,1.6629,1.5,-1.1111,0.8315,1.5,-0.5556,1.8478,1.5,-0.7654,0.9239,1.5,-0.3827,1.9616,1.5,-0.3902,0.9808,1.5,-0.1951,2,1.5,0,1,1.5,0])

IndexedTriangleSet32.setCoord(Coordinate33)

Shape31.setGeometry(IndexedTriangleSet32)
Appearance34 = x3d.Appearance()
Appearance34.setUSE("AppearanceGrey")

Shape31.setAppearance(Appearance34)

CADFace30.setShape(Shape31)

CADPart20.addChildren(CADFace30)
CADFace35 = x3d.CADFace()
CADFace35.setName("bottomCap")
Shape36 = x3d.Shape()
IndexedTriangleSet37 = x3d.IndexedTriangleSet()
IndexedTriangleSet37.setIndex([0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65])
Coordinate38 = x3d.Coordinate()
Coordinate38.setPoint([2,-1.5,0,1,-1.5,0,1.9616,-1.5,-0.3902,0.9808,-1.5,-0.1951,1.8478,-1.5,-0.7654,0.9239,-1.5,-0.3827,1.6629,-1.5,-1.1111,0.8315,-1.5,-0.5556,1.4142,-1.5,-1.4142,0.7071,-1.5,-0.7071,1.1111,-1.5,-1.6629,0.5556,-1.5,-0.8315,0.7654,-1.5,-1.8478,0.3827,-1.5,-0.9239,0.3902,-1.5,-1.9616,0.1951,-1.5,-0.9808,0,-1.5,-2,0,-1.5,-1,-0.3902,-1.5,-1.9616,-0.1951,-1.5,-0.9808,-0.7654,-1.5,-1.8478,-0.3827,-1.5,-0.9239,-1.1111,-1.5,-1.6629,-0.5556,-1.5,-0.8315,-1.4142,-1.5,-1.4142,-0.7071,-1.5,-0.7071,-1.6629,-1.5,-1.1111,-0.8315,-1.5,-0.5556,-1.8478,-1.5,-0.7654,-0.9239,-1.5,-0.3827,-1.9616,-1.5,-0.3902,-0.9808,-1.5,-0.1951,-2,-1.5,0,-1,-1.5,0,-1.9616,-1.5,0.3902,-0.9808,-1.5,0.1951,-1.8478,-1.5,0.7654,-0.9239,-1.5,0.3827,-1.6629,-1.5,1.1111,-0.8315,-1.5,0.5556,-1.4142,-1.5,1.4142,-0.7071,-1.5,0.7071,-1.1111,-1.5,1.6629,-0.5556,-1.5,0.8315,-0.7654,-1.5,1.8478,-0.3827,-1.5,0.9239,-0.3902,-1.5,1.9616,-0.1951,-1.5,0.9808,0,-1.5,2,0,-1.5,1,0.3902,-1.5,1.9616,0.1951,-1.5,0.9808,0.7654,-1.5,1.8478,0.3827,-1.5,0.9239,1.1111,-1.5,1.6629,0.5556,-1.5,0.8315,1.4142,-1.5,1.4142,0.7071,-1.5,0.7071,1.6629,-1.5,1.1111,0.8315,-1.5,0.5556,1.8478,-1.5,0.7654,0.9239,-1.5,0.3827,1.9616,-1.5,0.3902,0.9808,-1.5,0.1951,2,-1.5,0,1,-1.5,0])

IndexedTriangleSet37.setCoord(Coordinate38)

Shape36.setGeometry(IndexedTriangleSet37)
Appearance39 = x3d.Appearance()
Appearance39.setUSE("AppearanceGrey")

Shape36.setAppearance(Appearance39)

CADFace35.setShape(Shape36)

CADPart20.addChildren(CADFace35)

CADAssembly19.addChildren(CADPart20)

Scene15.addChildren(CADAssembly19)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../data/CADPartChildNoTransformation.new.python.x3d")
