import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
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
meta5.setContent("28 November 2019")

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
meta9.setContent("https://www.web3d.org/x3d/content/examples/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d")

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
WorldInfo13 = x3d.WorldInfo()
WorldInfo13.setTitle("GridXZ_20x20Fixed.x3d")

Scene12.addChild(WorldInfo13)
Viewpoint14 = x3d.Viewpoint()
Viewpoint14.setDescription("XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)")
Viewpoint14.setOrientation(x3d.doubleToFloat([1,0,0,-0.4]))
Viewpoint14.setPosition(x3d.doubleToFloat([0,10,25]))

Scene12.addChild(Viewpoint14)
Transform15 = x3d.Transform()
Transform15.setDEF("GridLocation")
Group16 = x3d.Group()
Shape17 = x3d.Shape()
Shape17.setDEF("LinesAlignedAlongZ")
IndexedLineSet18 = x3d.IndexedLineSet()
IndexedLineSet18.setColorIndex([1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1])
IndexedLineSet18.setColorPerVertex(False)
IndexedLineSet18.setCoordIndex([1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1])
Coordinate19 = x3d.Coordinate()
Coordinate19.setDEF("EndPoints")
Coordinate19.setPoint(x3d.doubleToFloat([0,0,0,-10,0,10,-9,0,10,-8,0,10,-7,0,10,-6,0,10,-5,0,10,-4,0,10,-3,0,10,-2,0,10,-1,0,10,0,0,10,1,0,10,2,0,10,3,0,10,4,0,10,5,0,10,6,0,10,7,0,10,8,0,10,9,0,10,10,0,10,-10,0,-10,-9,0,-10,-8,0,-10,-7,0,-10,-6,0,-10,-5,0,-10,-4,0,-10,-3,0,-10,-2,0,-10,-1,0,-10,0,0,-10,1,0,-10,2,0,-10,3,0,-10,4,0,-10,5,0,-10,6,0,-10,7,0,-10,8,0,-10,9,0,-10,10,0,-10]))

IndexedLineSet18.setCoord(Coordinate19)
Color20 = x3d.Color()
Color20.setColor(x3d.doubleToFloat([0.4,0.4,0.4,0.8,0.2,0,0.4,0.1,0.05]))

IndexedLineSet18.setColor(Color20)

Shape17.setGeometry(IndexedLineSet18)

Group16.addChild(Shape17)
Transform21 = x3d.Transform()
Transform21.setDEF("LinesAlignedAlongX")
Transform21.setRotation(x3d.doubleToFloat([0,1,0,1.57079]))
Shape22 = x3d.Shape()
Shape22.setUSE("LinesAlignedAlongZ")

Transform21.addChild(Shape22)

Group16.addChild(Transform21)
Transform23 = x3d.Transform()
Transform23.setTranslation(x3d.doubleToFloat([0,-0.5,0]))
Billboard24 = x3d.Billboard()
Shape25 = x3d.Shape()
Text26 = x3d.Text()
Text26.setDEF("CenterTextNode")
Text26.setString(["origin"])
FontStyle27 = x3d.FontStyle()
FontStyle27.setDEF("FS4")
FontStyle27.setJustify(["MIDDLE","MIDDLE"])
FontStyle27.setSize(0.4)

Text26.setFontStyle(FontStyle27)

Shape25.setGeometry(Text26)
Appearance28 = x3d.Appearance()
Appearance28.setDEF("DefaultAppearance")
Material29 = x3d.Material()

Appearance28.setMaterial(Material29)

Shape25.setAppearance(Appearance28)

Billboard24.addChild(Shape25)

Transform23.addChild(Billboard24)

Group16.addChild(Transform23)
Transform30 = x3d.Transform()
Transform30.setTranslation(x3d.doubleToFloat([10,-0.5,10]))
Billboard31 = x3d.Billboard()
Shape32 = x3d.Shape()
Text33 = x3d.Text()
Text33.setString(["10 0 10"])
FontStyle34 = x3d.FontStyle()
FontStyle34.setUSE("FS4")

Text33.setFontStyle(FontStyle34)

Shape32.setGeometry(Text33)
Appearance35 = x3d.Appearance()
Appearance35.setUSE("DefaultAppearance")

Shape32.setAppearance(Appearance35)

Billboard31.addChild(Shape32)

Transform30.addChild(Billboard31)

Group16.addChild(Transform30)
Transform36 = x3d.Transform()
Transform36.setTranslation(x3d.doubleToFloat([10,-0.5,-10]))
Billboard37 = x3d.Billboard()
Shape38 = x3d.Shape()
Text39 = x3d.Text()
Text39.setString(["10 0 -10"])
FontStyle40 = x3d.FontStyle()
FontStyle40.setUSE("FS4")

Text39.setFontStyle(FontStyle40)

Shape38.setGeometry(Text39)
Appearance41 = x3d.Appearance()
Appearance41.setUSE("DefaultAppearance")

Shape38.setAppearance(Appearance41)

Billboard37.addChild(Shape38)

Transform36.addChild(Billboard37)

Group16.addChild(Transform36)
Transform42 = x3d.Transform()
Transform42.setTranslation(x3d.doubleToFloat([-10,-0.5,10]))
Billboard43 = x3d.Billboard()
Shape44 = x3d.Shape()
Text45 = x3d.Text()
Text45.setString(["-10 0 10"])
FontStyle46 = x3d.FontStyle()
FontStyle46.setUSE("FS4")

Text45.setFontStyle(FontStyle46)

Shape44.setGeometry(Text45)
Appearance47 = x3d.Appearance()
Appearance47.setUSE("DefaultAppearance")

Shape44.setAppearance(Appearance47)

Billboard43.addChild(Shape44)

Transform42.addChild(Billboard43)

Group16.addChild(Transform42)
Transform48 = x3d.Transform()
Transform48.setTranslation(x3d.doubleToFloat([-10,-0.5,-10]))
Billboard49 = x3d.Billboard()
Shape50 = x3d.Shape()
Text51 = x3d.Text()
Text51.setString(["-10 0 -10"])
FontStyle52 = x3d.FontStyle()
FontStyle52.setUSE("FS4")

Text51.setFontStyle(FontStyle52)

Shape50.setGeometry(Text51)
Appearance53 = x3d.Appearance()
Appearance53.setUSE("DefaultAppearance")

Shape50.setAppearance(Appearance53)

Billboard49.addChild(Shape50)

Transform48.addChild(Billboard49)

Group16.addChild(Transform48)

Transform15.addChild(Group16)

Scene12.addChild(Transform15)

X3D0.setScene(Scene12)
X3D0.toFileX3D("../data/GridXZ_20x20Fixed.new.graalpy.x3d")
X3D0.toFileJSON("../data/GridXZ_20x20Fixed.new.graalpy.x3dj")
