import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("GridXZ_20x20Fixed.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("MV4204 class")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("created")
meta4.setContent("3 September 2000")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("modified")
meta5.setContent("30 March 2016")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("reference")
meta6.setContent("GridXY_20x20Fixed.x3d")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("reference")
meta7.setContent("GridYZ_20x20Fixed.x3d")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("description")
meta8.setContent("Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m.")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("identifier")
meta9.setContent("https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("generator")
meta10.setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("license")
meta11.setContent("../../license.html")

head1.addMeta(meta11)

X3D0.setHead(head1)
Scene12 = x3d.Scene()
Viewpoint13 = x3d.Viewpoint()
Viewpoint13.setDescription("XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)")
Viewpoint13.setOrientation([1,0,0,-0.4])
Viewpoint13.setPosition([0,10,25])

Scene12.addChildren(Viewpoint13)
Transform14 = x3d.Transform()
Transform14.setDEF("GridLocation")
Group15 = x3d.Group()
Shape16 = x3d.Shape()
Shape16.setDEF("LinesAlignedAlongZ")
IndexedLineSet17 = x3d.IndexedLineSet()
IndexedLineSet17.setColorIndex([1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1])
IndexedLineSet17.setColorPerVertex(False)
IndexedLineSet17.setCoordIndex([1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1])
Coordinate18 = x3d.Coordinate()
Coordinate18.setDEF("EndPoints")
Coordinate18.setPoint([0,0,0,-10,0,10,-9,0,10,-8,0,10,-7,0,10,-6,0,10,-5,0,10,-4,0,10,-3,0,10,-2,0,10,-1,0,10,0,0,10,1,0,10,2,0,10,3,0,10,4,0,10,5,0,10,6,0,10,7,0,10,8,0,10,9,0,10,10,0,10,-10,0,-10,-9,0,-10,-8,0,-10,-7,0,-10,-6,0,-10,-5,0,-10,-4,0,-10,-3,0,-10,-2,0,-10,-1,0,-10,0,0,-10,1,0,-10,2,0,-10,3,0,-10,4,0,-10,5,0,-10,6,0,-10,7,0,-10,8,0,-10,9,0,-10,10,0,-10])

IndexedLineSet17.setCoord(Coordinate18)
Color19 = x3d.Color()
Color19.setColor([0.4,0.4,0.4,0.8,0.2,0,0.4,0.1,0.05])

IndexedLineSet17.setColor(Color19)

Shape16.setGeometry(IndexedLineSet17)

Group15.addChildren(Shape16)
Transform20 = x3d.Transform()
Transform20.setDEF("LinesAlignedAlongX")
Transform20.setRotation([0,1,0,1.57079])
Shape21 = x3d.Shape()
Shape21.setUSE("LinesAlignedAlongZ")

Transform20.addChildren(Shape21)

Group15.addChildren(Transform20)
Transform22 = x3d.Transform()
Transform22.setTranslation([0,-0.5,0])
Billboard23 = x3d.Billboard()
Shape24 = x3d.Shape()
Text25 = x3d.Text()
Text25.setDEF("CenterTextNode")
Text25.setString(["origin"])
FontStyle26 = x3d.FontStyle()
FontStyle26.setDEF("FS4")
FontStyle26.setJustify(["MIDDLE","MIDDLE"])
FontStyle26.setSize(0.4)

Text25.setFontStyle(FontStyle26)

Shape24.setGeometry(Text25)
Appearance27 = x3d.Appearance()
Appearance27.setDEF("DefaultAppearance")
Material28 = x3d.Material()

Appearance27.setMaterial(Material28)

Shape24.setAppearance(Appearance27)

Billboard23.addChildren(Shape24)

Transform22.addChildren(Billboard23)

Group15.addChildren(Transform22)
Transform29 = x3d.Transform()
Transform29.setTranslation([10,-0.5,10])
Billboard30 = x3d.Billboard()
Shape31 = x3d.Shape()
Text32 = x3d.Text()
Text32.setString(["10 0 10"])
FontStyle33 = x3d.FontStyle()
FontStyle33.setUSE("FS4")

Text32.setFontStyle(FontStyle33)

Shape31.setGeometry(Text32)
Appearance34 = x3d.Appearance()
Appearance34.setUSE("DefaultAppearance")

Shape31.setAppearance(Appearance34)

Billboard30.addChildren(Shape31)

Transform29.addChildren(Billboard30)

Group15.addChildren(Transform29)
Transform35 = x3d.Transform()
Transform35.setTranslation([10,-0.5,-10])
Billboard36 = x3d.Billboard()
Shape37 = x3d.Shape()
Text38 = x3d.Text()
Text38.setString(["10 0 -10"])
FontStyle39 = x3d.FontStyle()
FontStyle39.setUSE("FS4")

Text38.setFontStyle(FontStyle39)

Shape37.setGeometry(Text38)
Appearance40 = x3d.Appearance()
Appearance40.setUSE("DefaultAppearance")

Shape37.setAppearance(Appearance40)

Billboard36.addChildren(Shape37)

Transform35.addChildren(Billboard36)

Group15.addChildren(Transform35)
Transform41 = x3d.Transform()
Transform41.setTranslation([-10,-0.5,10])
Billboard42 = x3d.Billboard()
Shape43 = x3d.Shape()
Text44 = x3d.Text()
Text44.setString(["-10 0 10"])
FontStyle45 = x3d.FontStyle()
FontStyle45.setUSE("FS4")

Text44.setFontStyle(FontStyle45)

Shape43.setGeometry(Text44)
Appearance46 = x3d.Appearance()
Appearance46.setUSE("DefaultAppearance")

Shape43.setAppearance(Appearance46)

Billboard42.addChildren(Shape43)

Transform41.addChildren(Billboard42)

Group15.addChildren(Transform41)
Transform47 = x3d.Transform()
Transform47.setTranslation([-10,-0.5,-10])
Billboard48 = x3d.Billboard()
Shape49 = x3d.Shape()
Text50 = x3d.Text()
Text50.setString(["-10 0 -10"])
FontStyle51 = x3d.FontStyle()
FontStyle51.setUSE("FS4")

Text50.setFontStyle(FontStyle51)

Shape49.setGeometry(Text50)
Appearance52 = x3d.Appearance()
Appearance52.setUSE("DefaultAppearance")

Shape49.setAppearance(Appearance52)

Billboard48.addChildren(Shape49)

Transform47.addChildren(Billboard48)

Group15.addChildren(Transform47)

Transform14.addChildren(Group15)

Scene12.addChildren(Transform14)

X3D0.setScene(Scene12)
X3D0.toFileX3D("../data/GridXZ_20x20Fixed_RoundTrip.x3d")
