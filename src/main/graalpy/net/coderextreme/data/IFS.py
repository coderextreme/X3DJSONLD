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
meta3.setContent("IFS.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("identifier")
meta4.setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/IFS.x3d")

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
meta7.setName("modified")
meta7.setContent("18 Jan 2023")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("creator")
meta8.setContent("John Carlson")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("created")
meta9.setContent("9 November 2020")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("license")
meta10.setContent("../license.html")

head1.addMeta(meta10)

X3D0.setHead(head1)
Scene11 = x3d.Scene()
Group12 = x3d.Group()

Group12.addComments(x3d.CommentsBlock('''DEFS for markers of skeleton joints, segments, and sites'''))
Transform13 = x3d.Transform()
Transform13.setTranslation(x3d.doubleToFloat([0,2.1,0]))
Shape14 = x3d.Shape()
Shape14.setDEF("HAnimSiteShape")
IndexedFaceSet15 = x3d.IndexedFaceSet()
IndexedFaceSet15.setDEF("DiamondIFS")
IndexedFaceSet15.setCreaseAngle(0.5)
IndexedFaceSet15.setSolid(False)
IndexedFaceSet15.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
ColorRGBA16 = x3d.ColorRGBA()
ColorRGBA16.setDEF("HAnimSiteColorRGBA")
ColorRGBA16.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1]))

IndexedFaceSet15.setColor(ColorRGBA16)
Coordinate17 = x3d.Coordinate()
Coordinate17.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet15.setCoord(Coordinate17)

Shape14.setGeometry(IndexedFaceSet15)
Appearance18 = x3d.Appearance()
Material19 = x3d.Material()
Material19.setDiffuseColor(x3d.doubleToFloat([1,1,0]))
Material19.setTransparency(0.3)

Appearance18.setMaterial(Material19)

Shape14.setAppearance(Appearance18)

Transform13.addChild(Shape14)

Group12.addChild(Transform13)

Scene11.addChild(Group12)
NavigationInfo20 = x3d.NavigationInfo()
NavigationInfo20.setSpeed(1.5)

Scene11.addChild(NavigationInfo20)
Viewpoint21 = x3d.Viewpoint()
Viewpoint21.setDescription("default")

Scene11.addChild(Viewpoint21)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/IFS.new.graalpy.x3d")
X3D0.toFileJSON("../data/IFS.new.graalpy.json")
