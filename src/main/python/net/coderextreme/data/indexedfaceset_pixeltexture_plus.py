import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("3.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("indexedfaceset_pixeltexture_plus.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("Image")
meta3.setContent("indexedfaceset_pixeltexture_plus-front.jpg")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("Image")
meta4.setContent("indexedfaceset_pixeltexture_plus-rear.jpg")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("Image")
meta5.setContent("indexedfaceset_pixeltexture_plus-top.jpg")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("Image")
meta6.setContent("indexedfaceset_pixeltexture_plus-bottom.jpg")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("Image")
meta7.setContent("indexedfaceset_pixeltexture_plus-left.jpg")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("Image")
meta8.setContent("indexedfaceset_pixeltexture_plus-right.jpg")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("http://www.nist.gov/vrml.html")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("creator")
meta11.setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("disclaimer")
meta12.setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("info")
meta13.setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("translator")
meta14.setContent("Michael Kass NIST, Don Brutzman NPS")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("translated")
meta15.setContent("21 January 2001")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("modified")
meta16.setContent("13 January 2014")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("description")
meta17.setContent("Test of browser ability to map a 3 times multiple of an PixelTexture onto an IndexedFaceSet geometry. A 3 by 3 matrix of four equal sized red, green, white and yellow squares in the pixel texture map all the faces of the cube.")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("identifier")
meta18.setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plus.x3d")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("generator")
meta19.setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("generator")
meta20.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("license")
meta21.setContent("../../license.html")

head1.addMeta(meta21)

X3D0.setHead(head1)
Scene22 = x3d.Scene()
Viewpoint23 = x3d.Viewpoint()
Viewpoint23.setDescription("Front View")

Scene22.addChildren(Viewpoint23)
Viewpoint24 = x3d.Viewpoint()
Viewpoint24.setDescription("Rear View")
Viewpoint24.setOrientation([0,1,0,3.14])
Viewpoint24.setPosition([0,0,-10])

Scene22.addChildren(Viewpoint24)
Viewpoint25 = x3d.Viewpoint()
Viewpoint25.setDescription("Top View")
Viewpoint25.setOrientation([1,0,0,-1.57])
Viewpoint25.setPosition([0,10,0])

Scene22.addChildren(Viewpoint25)
Viewpoint26 = x3d.Viewpoint()
Viewpoint26.setDescription("Bottom View")
Viewpoint26.setOrientation([1,0,0,1.57])
Viewpoint26.setPosition([0,-10,0])

Scene22.addChildren(Viewpoint26)
Viewpoint27 = x3d.Viewpoint()
Viewpoint27.setDescription("Right View")
Viewpoint27.setOrientation([0,1,0,1.57])
Viewpoint27.setPosition([10,0,0])

Scene22.addChildren(Viewpoint27)
Viewpoint28 = x3d.Viewpoint()
Viewpoint28.setDescription("Left View")
Viewpoint28.setOrientation([0,1,0,-1.57])
Viewpoint28.setPosition([-10,0,0])

Scene22.addChildren(Viewpoint28)
NavigationInfo29 = x3d.NavigationInfo()
NavigationInfo29.setType(["EXAMINE","WALK","FLY","ANY"])

Scene22.addChildren(NavigationInfo29)
Shape30 = x3d.Shape()
Appearance31 = x3d.Appearance()
Material32 = x3d.Material()

Appearance31.setMaterial(Material32)
PixelTexture33 = x3d.PixelTexture()
PixelTexture33.setImage([2,2,4,-16776961,16711935,-1,-65281])

Appearance31.setTexture(PixelTexture33)

Shape30.setAppearance(Appearance31)
IndexedFaceSet34 = x3d.IndexedFaceSet()
IndexedFaceSet34.setColorPerVertex(False)
IndexedFaceSet34.setCoordIndex([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1])
IndexedFaceSet34.setCreaseAngle(0.5)
IndexedFaceSet34.setTexCoordIndex([0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1])
Color35 = x3d.Color()
Color35.setColor([0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0])

IndexedFaceSet34.setColor(Color35)
Coordinate36 = x3d.Coordinate()
Coordinate36.setPoint([-2,1,1,-2,-1,1,2,1,1,2,-1,1,2,1,-1,2,-1,-1,-2,1,-1,-2,-1,-1])

IndexedFaceSet34.setCoord(Coordinate36)
TextureCoordinate37 = x3d.TextureCoordinate()
TextureCoordinate37.setPoint([-1,2,-1,-1,2,2,2,-1])

IndexedFaceSet34.setTexCoord(TextureCoordinate37)

Shape30.setGeometry(IndexedFaceSet34)

Scene22.addChildren(Shape30)

X3D0.setScene(Scene22)
X3D0.toFileX3D("../data/indexedfaceset_pixeltexture_plus.new.python.x3d")
