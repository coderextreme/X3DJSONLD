print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interchange"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "rgb_alpha.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "Image"
meta3.content = "rgb_alpha-front.jpg"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "Image"
meta4.content = "rgb_alpha-rear.jpg"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "Image"
meta5.content = "rgb_alpha-top.jpg"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "Image"
meta6.content = "rgb_alpha-bottom.jpg"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "reference"
meta7.content = "http://www.nist.gov/vrml.html"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "creator"
meta9.content = "http://www.itl.nist.gov/div897/ctg/vrml/members.html"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "disclaimer"
meta10.content = "This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "info"
meta11.content = "Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "translator"
meta12.content = "Michael Kass NIST, Don Brutzman NPS"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "translated"
meta13.content = "21 January 2001"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "modified"
meta14.content = "Mon, 09 Feb 2026 07:12:59 GMT"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "description"
meta15.content = "Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box."

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "identifier"
meta16.content = "https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "generator"
meta17.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta17)

X3D0.head = head1
Scene18 = x3d.Scene()
NavigationInfo19 = x3d.NavigationInfo()
NavigationInfo19.type = ["EXAMINE","WALK","FLY","ANY"]

Scene18.children.append(NavigationInfo19)
Group20 = x3d.Group()
Transform21 = x3d.Transform()
Transform21.translation = [6.14221,0.0694613,-0.000999451]
Shape22 = x3d.Shape()
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()

Appearance23.material = Material24
PixelTexture25 = x3d.PixelTexture(DEF="RgbOpacityCheckerboard")
PixelTexture25.image = [2,2,4,-16776961,-65536,-65536,-16776961]

Appearance23.texture = PixelTexture25

Shape22.appearance = Appearance23
Box26 = x3d.Box()

Shape22.geometry = Box26

Transform21.children.append(Shape22)

Group20.children.append(Transform21)
Transform27 = x3d.Transform()
Transform27.translation = [-4.85443,0.0694381,-0.00149918]
Shape28 = x3d.Shape()
Appearance29 = x3d.Appearance()
Material30 = x3d.Material()

Appearance29.material = Material30
PixelTexture31 = x3d.PixelTexture(USE="RgbOpacityCheckerboard")

Appearance29.texture = PixelTexture31

Shape28.appearance = Appearance29
Sphere32 = x3d.Sphere()

Shape28.geometry = Sphere32

Transform27.children.append(Shape28)

Group20.children.append(Transform27)
Transform33 = x3d.Transform()
Transform33.translation = [-1.47341,0.036672,-0.00175095]
Shape34 = x3d.Shape()
Appearance35 = x3d.Appearance()
Material36 = x3d.Material()

Appearance35.material = Material36
PixelTexture37 = x3d.PixelTexture(USE="RgbOpacityCheckerboard")

Appearance35.texture = PixelTexture37

Shape34.appearance = Appearance35
Cone38 = x3d.Cone()

Shape34.geometry = Cone38

Transform33.children.append(Shape34)

Group20.children.append(Transform33)
Transform39 = x3d.Transform()
Transform39.translation = [2.31094,0.0694206,-0.00187683]
Shape40 = x3d.Shape()
Appearance41 = x3d.Appearance()
Material42 = x3d.Material()

Appearance41.material = Material42
PixelTexture43 = x3d.PixelTexture(USE="RgbOpacityCheckerboard")

Appearance41.texture = PixelTexture43

Shape40.appearance = Appearance41
Cylinder44 = x3d.Cylinder()

Shape40.geometry = Cylinder44

Transform39.children.append(Shape40)

Group20.children.append(Transform39)

Scene18.children.append(Group20)

X3D0.Scene = Scene18
f = open("../data/rgb_alpha.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/rgb_alpha.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/rgb_alpha.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
