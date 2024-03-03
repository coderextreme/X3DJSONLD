import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("3.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("rgb_alpha.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("Image")
meta3.setContent("rgb_alpha-front.jpg")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("Image")
meta4.setContent("rgb_alpha-rear.jpg")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("Image")
meta5.setContent("rgb_alpha-top.jpg")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("Image")
meta6.setContent("rgb_alpha-bottom.jpg")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("reference")
meta7.setContent("http://www.nist.gov/vrml.html")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("creator")
meta9.setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("disclaimer")
meta10.setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("info")
meta11.setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("translator")
meta12.setContent("Michael Kass NIST, Don Brutzman NPS")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("translated")
meta13.setContent("21 January 2001")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("modified")
meta14.setContent("16 January 2011")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("description")
meta15.setContent("Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box.")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("identifier")
meta16.setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("generator")
meta17.setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("generator")
meta18.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("license")
meta19.setContent("../../license.html")

head1.addMeta(meta19)

X3D0.setHead(head1)
Scene20 = x3d.Scene()
NavigationInfo21 = x3d.NavigationInfo()
NavigationInfo21.setType(["EXAMINE","WALK","FLY","ANY"])

Scene20.addChildren(NavigationInfo21)
Group22 = x3d.Group()
Transform23 = x3d.Transform()
Transform23.setTranslation([6.14221,0.0694613,-0.000999451])
Shape24 = x3d.Shape()
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()

Appearance25.setMaterial(Material26)
PixelTexture27 = x3d.PixelTexture()
PixelTexture27.setDEF("RgbOpacityCheckerboard")
PixelTexture27.setImage([2,2,4,-16776961,-65536,-65536,-16776961])

Appearance25.setTexture(PixelTexture27)

Shape24.setAppearance(Appearance25)
Box28 = x3d.Box()

Shape24.setGeometry(Box28)

Transform23.addChild(Shape24)

Group22.addChildren(Transform23)
Transform29 = x3d.Transform()
Transform29.setTranslation([-4.85443,0.0694381,-0.00149918])
Shape30 = x3d.Shape()
Appearance31 = x3d.Appearance()
Material32 = x3d.Material()

Appearance31.setMaterial(Material32)
PixelTexture33 = x3d.PixelTexture()
PixelTexture33.setUSE("RgbOpacityCheckerboard")

Appearance31.setTexture(PixelTexture33)

Shape30.setAppearance(Appearance31)
Sphere34 = x3d.Sphere()

Shape30.setGeometry(Sphere34)

Transform29.addChild(Shape30)

Group22.addChildren(Transform29)
Transform35 = x3d.Transform()
Transform35.setTranslation([-1.47341,0.036672,-0.00175095])
Shape36 = x3d.Shape()
Appearance37 = x3d.Appearance()
Material38 = x3d.Material()

Appearance37.setMaterial(Material38)
PixelTexture39 = x3d.PixelTexture()
PixelTexture39.setUSE("RgbOpacityCheckerboard")

Appearance37.setTexture(PixelTexture39)

Shape36.setAppearance(Appearance37)
Cone40 = x3d.Cone()

Shape36.setGeometry(Cone40)

Transform35.addChild(Shape36)

Group22.addChildren(Transform35)
Transform41 = x3d.Transform()
Transform41.setTranslation([2.31094,0.0694206,-0.00187683])
Shape42 = x3d.Shape()
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()

Appearance43.setMaterial(Material44)
PixelTexture45 = x3d.PixelTexture()
PixelTexture45.setUSE("RgbOpacityCheckerboard")

Appearance43.setTexture(PixelTexture45)

Shape42.setAppearance(Appearance43)
Cylinder46 = x3d.Cylinder()

Shape42.setGeometry(Cylinder46)

Transform41.addChild(Shape42)

Group22.addChildren(Transform41)

Scene20.addChildren(Group22)

X3D0.setScene(Scene20)
X3D0.toFileX3D("../data/rgb_alpha.new.python.x3d")
