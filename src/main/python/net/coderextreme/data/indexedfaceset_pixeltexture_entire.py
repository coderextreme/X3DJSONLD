from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("3.0")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("indexedfaceset_pixeltexture_entire.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("reference")
meta3.setContent("http://www.nist.gov/vrml.html")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("reference")
meta4.setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("creator")
meta5.setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("disclaimer")
meta6.setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("info")
meta7.setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("translator")
meta8.setContent("Michael Kass NIST, Don Brutzman NPS")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("translated")
meta9.setContent("21 January 2001")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("modified")
meta10.setContent("13 January 2014")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("description")
meta11.setContent("Test browser ability to completely map one PixelTexture onto the surface of an IndexedFaceSet geometry. Four colored squares should map onto each face of the IndexedFaceSet. The PixelTexture consists of red quarter (lower left), green quarter (lower right), white quarter (upper left) and yellow quarter (upper right). PixelTexture should map once onto the surface of the IndexedFaceSet, with the S (horizontal) axis of the texture corresponding to the X axis of the geometry.")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("identifier")
meta12.setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("generator")
meta13.setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html")

head1.addMeta(meta13)
meta14 = meta()
meta14.setName("generator")
meta14.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta14)
meta15 = meta()
meta15.setName("license")
meta15.setContent("../../license.html")

head1.addMeta(meta15)

X3D0.setHead(head1)
Scene16 = Scene()
Viewpoint17 = Viewpoint()
Viewpoint17.setDescription("Front View")

Scene16.addChildren(Viewpoint17)
Viewpoint18 = Viewpoint()
Viewpoint18.setDescription("Rear View")
Viewpoint18.setOrientation([0,1,0,3.14])
Viewpoint18.setPosition([0,0,-10])

Scene16.addChildren(Viewpoint18)
Viewpoint19 = Viewpoint()
Viewpoint19.setDescription("Top View")
Viewpoint19.setOrientation([1,0,0,-1.57])
Viewpoint19.setPosition([0,10,0])

Scene16.addChildren(Viewpoint19)
Viewpoint20 = Viewpoint()
Viewpoint20.setDescription("Bottom View")
Viewpoint20.setOrientation([1,0,0,1.57])
Viewpoint20.setPosition([0,-10,0])

Scene16.addChildren(Viewpoint20)
Viewpoint21 = Viewpoint()
Viewpoint21.setDescription("Right View")
Viewpoint21.setOrientation([0,1,0,1.57])
Viewpoint21.setPosition([10,0,0])

Scene16.addChildren(Viewpoint21)
Viewpoint22 = Viewpoint()
Viewpoint22.setDescription("Left View")
Viewpoint22.setOrientation([0,1,0,-1.57])
Viewpoint22.setPosition([-10,0,0])

Scene16.addChildren(Viewpoint22)
NavigationInfo23 = NavigationInfo()
NavigationInfo23.setType(["EXAMINE","WALK","FLY","ANY"])

Scene16.addChildren(NavigationInfo23)
Shape24 = Shape()
Appearance25 = Appearance()
Material26 = Material()

Appearance25.setMaterial(Material26)
PixelTexture27 = PixelTexture()
PixelTexture27.setImage([2,2,4,-16776961,16711935,-1,-65281])
PixelTexture27.setRepeatS(False)
PixelTexture27.setRepeatT(False)

Appearance25.setTexture(PixelTexture27)

Shape24.setAppearance(Appearance25)
IndexedFaceSet28 = IndexedFaceSet()
IndexedFaceSet28.setCoordIndex([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1])
Coordinate29 = Coordinate()
Coordinate29.setPoint([-2,1.5,1,-2,-1.5,1,2,1.5,1,2,-1.5,1,2,1.5,-1,2,-1.5,-1,-2,1.5,-1,-2,-1.5,-1])

IndexedFaceSet28.setCoord(Coordinate29)

Shape24.setGeometry(IndexedFaceSet28)

Scene16.addChildren(Shape24)

X3D0.setScene(Scene16)
X3D0.toFileX3D("../data/indexedfaceset_pixeltexture_entire_RoundTrip.x3d")
