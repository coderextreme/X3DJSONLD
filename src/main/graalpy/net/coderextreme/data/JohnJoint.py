import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
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
meta3.setContent("JohnJoint.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("identifier")
meta4.setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("description")
meta5.setContent("An attempt at a standard LOA-4 skeleton")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("generator")
meta6.setContent("h6.pl")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("creator")
meta7.setContent("John Carlson")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("created")
meta8.setContent("12 January 2023")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("license")
meta9.setContent("../license.html")

head1.addMeta(meta9)

X3D0.setHead(head1)
Scene10 = x3d.Scene()
Transform11 = x3d.Transform()

Transform11.addComments(x3d.CommentsBlock('''DEF for markerfor XYZ axes'''))
Shape12 = x3d.Shape()
Shape12.setDEF("AxisLinesShape")

Shape12.addComments(x3d.CommentsBlock('''RGB lines showing XYZ axes'''))
IndexedLineSet13 = x3d.IndexedLineSet()
IndexedLineSet13.setColorIndex([0,1,2])
IndexedLineSet13.setColorPerVertex(False)
IndexedLineSet13.setCoordIndex([0,1,-1,0,2,-1,0,3,-1])
Coordinate14 = x3d.Coordinate()
Coordinate14.setPoint(x3d.doubleToFloat([0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]))

IndexedLineSet13.setCoord(Coordinate14)
Color15 = x3d.Color()
Color15.setColor(x3d.doubleToFloat([1,0,0,0,0.6,0,0,0,1]))

IndexedLineSet13.setColor(Color15)

Shape12.setGeometry(IndexedLineSet13)

Transform11.addChild(Shape12)

Scene10.addChild(Transform11)
Group16 = x3d.Group()

Group16.addComments(x3d.CommentsBlock('''DEFS for markers of skeleton joints, segments, and sites'''))
Transform17 = x3d.Transform()

Transform17.addComments(x3d.CommentsBlock('''<Transform translation='0 2 0'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>'''))
Transform18 = x3d.Transform()
Transform18.setTranslation(x3d.doubleToFloat([0,2.1,0]))
Shape19 = x3d.Shape()
Shape19.setDEF("HAnimJointShape")
Sphere20 = x3d.Sphere()
Sphere20.setRadius(0.02)

Shape19.setGeometry(Sphere20)
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.setDEF("HAnimJointMaterial")
Material22.setDiffuseColor(x3d.doubleToFloat([0,0,0.8]))
Material22.setTransparency(0.3)

Appearance21.setMaterial(Material22)

Shape19.setAppearance(Appearance21)

Transform18.addChild(Shape19)

Transform17.addChild(Transform18)
Transform23 = x3d.Transform()
Transform23.setTranslation(x3d.doubleToFloat([0,2.05,0]))
Shape24 = x3d.Shape()
Shape24.setDEF("HAnimSegmentLine")
LineSet25 = x3d.LineSet()
LineSet25.setVertexCount([2])
ColorRGBA26 = x3d.ColorRGBA()
ColorRGBA26.setDEF("HAnimSegmentLineColorRGBA")
ColorRGBA26.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1]))

LineSet25.setColor(ColorRGBA26)
Coordinate27 = x3d.Coordinate()
Coordinate27.setPoint(x3d.doubleToFloat([-0.05,0,0,0.05,0,0]))

LineSet25.setCoord(Coordinate27)

Shape24.setGeometry(LineSet25)

Transform23.addChild(Shape24)

Transform17.addChild(Transform23)

Transform17.addComments(x3d.CommentsBlock('''<Transform translation='0 2.1 0'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>'''))

Group16.addChild(Transform17)

Scene10.addChild(Group16)
NavigationInfo28 = x3d.NavigationInfo()
NavigationInfo28.setSpeed(1.5)

Scene10.addChild(NavigationInfo28)
Viewpoint29 = x3d.Viewpoint()
Viewpoint29.setDescription("default")

Scene10.addChild(Viewpoint29)

X3D0.setScene(Scene10)
X3D0.toFileX3D("../data/JohnJoint.new.graalpy.x3d")
X3D0.toFileJSON("../data/JohnJoint.new.graalpy.json")
