# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Interchange")
X3D0.setVersion("3.0")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("rgb_alpha.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("Image")
meta3.setContent("rgb_alpha-front.jpg")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("Image")
meta4.setContent("rgb_alpha-rear.jpg")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("Image")
meta5.setContent("rgb_alpha-top.jpg")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("Image")
meta6.setContent("rgb_alpha-bottom.jpg")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("reference")
meta7.setContent("http://www.nist.gov/vrml.html")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("reference")
meta8.setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("creator")
meta9.setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("disclaimer")
meta10.setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.")

head1.addMeta(meta10)
meta11 = metaObject()
meta11.setName("info")
meta11.setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, http://www.web3d.org/working-groups/x3d")

head1.addMeta(meta11)
meta12 = metaObject()
meta12.setName("translator")
meta12.setContent("Michael Kass NIST, Don Brutzman NPS")

head1.addMeta(meta12)
meta13 = metaObject()
meta13.setName("translated")
meta13.setContent("21 January 2001")

head1.addMeta(meta13)
meta14 = metaObject()
meta14.setName("modified")
meta14.setContent("16 January 2011")

head1.addMeta(meta14)
meta15 = metaObject()
meta15.setName("description")
meta15.setContent("Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box.")

head1.addMeta(meta15)
meta16 = metaObject()
meta16.setName("identifier")
meta16.setContent("http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d")

head1.addMeta(meta16)
meta17 = metaObject()
meta17.setName("generator")
meta17.setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html")

head1.addMeta(meta17)
meta18 = metaObject()
meta18.setName("generator")
meta18.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta18)
meta19 = metaObject()
meta19.setName("license")
meta19.setContent("../../license.html")

head1.addMeta(meta19)
X3D0.setHead(head1)
Scene20 = SceneObject()

NavigationInfo21 = NavigationInfoObject()
NavigationInfo21.setType(["EXAMINE","WALK","FLY","ANY"])

Scene20.addChild(NavigationInfo21)
Group22 = GroupObject()

Transform23 = TransformObject()
Transform23.setTranslation([6.14221,0.0694613,-0.000999451])

Shape24 = ShapeObject()

Appearance25 = AppearanceObject()

Material26 = MaterialObject()

Appearance25.setMaterial(Material26)
PixelTexture27 = PixelTextureObject()
PixelTexture27.setDEF("RgbOpacityCheckerboard")
PixelTexture27.setImage([2,2,4,-16776961,-65536,-65536,-16776961])

Appearance25.setTexture(PixelTexture27)
Shape24.setAppearance(Appearance25)
Box28 = BoxObject()

Shape24.setGeometry(Box28)
Transform23.addChild(Shape24)
Group22.addChild(Transform23)
Transform29 = TransformObject()
Transform29.setTranslation([-4.85443,0.0694381,-0.00149918])

Shape30 = ShapeObject()

Appearance31 = AppearanceObject()

Material32 = MaterialObject()

Appearance31.setMaterial(Material32)
PixelTexture33 = PixelTextureObject()
PixelTexture33.setUSE("RgbOpacityCheckerboard")

Appearance31.setTexture(PixelTexture33)
Shape30.setAppearance(Appearance31)
Sphere34 = SphereObject()

Shape30.setGeometry(Sphere34)
Transform29.addChild(Shape30)
Group22.addChild(Transform29)
Transform35 = TransformObject()
Transform35.setTranslation([-1.47341,0.036672,-0.00175095])

Shape36 = ShapeObject()

Appearance37 = AppearanceObject()

Material38 = MaterialObject()

Appearance37.setMaterial(Material38)
PixelTexture39 = PixelTextureObject()
PixelTexture39.setUSE("RgbOpacityCheckerboard")

Appearance37.setTexture(PixelTexture39)
Shape36.setAppearance(Appearance37)
Cone40 = ConeObject()

Shape36.setGeometry(Cone40)
Transform35.addChild(Shape36)
Group22.addChild(Transform35)
Transform41 = TransformObject()
Transform41.setTranslation([2.31094,0.0694206,-0.00187683])

Shape42 = ShapeObject()

Appearance43 = AppearanceObject()

Material44 = MaterialObject()

Appearance43.setMaterial(Material44)
PixelTexture45 = PixelTextureObject()
PixelTexture45.setUSE("RgbOpacityCheckerboard")

Appearance43.setTexture(PixelTexture45)
Shape42.setAppearance(Appearance43)
Cylinder46 = CylinderObject()

Shape42.setGeometry(Cylinder46)
Transform41.addChild(Shape42)
Group22.addChild(Transform41)
Scene20.addChild(Group22)
X3D0.setScene(Scene20)

X3D0.toFileX3D("../data/rgb_alpha.new.x3d")
