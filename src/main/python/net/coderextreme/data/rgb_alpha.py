print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interchange"
X3D0.version = "4.0"
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
meta14.content = "16 January 2011"

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
meta17.content = "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "generator"
meta18.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "license"
meta19.content = "../../license.html"

head1.children.append(meta19)

X3D0.head = head1
Scene20 = x3d.Scene()
NavigationInfo21 = x3d.NavigationInfo()
NavigationInfo21.type = ["EXAMINE","WALK","FLY","ANY"]

Scene20.children.append(NavigationInfo21)
Group22 = x3d.Group()
Transform23 = x3d.Transform()
Transform23.translation = [6.14221,0.0694613,-0.000999451]
Shape24 = x3d.Shape()
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()

Appearance25.material = Material26
PixelTexture27 = x3d.PixelTexture()
PixelTexture27.DEF = "RgbOpacityCheckerboard"
PixelTexture27.image = [2,2,4,-16776961,-65536,-65536,-16776961]

Appearance25.texture = PixelTexture27

Shape24.appearance = Appearance25
Box28 = x3d.Box()

Shape24.geometry = Box28

Transform23.children.append(Shape24)

Group22.children.append(Transform23)
Transform29 = x3d.Transform()
Transform29.translation = [-4.85443,0.0694381,-0.00149918]
Shape30 = x3d.Shape()
Appearance31 = x3d.Appearance()
Material32 = x3d.Material()

Appearance31.material = Material32
PixelTexture33 = x3d.PixelTexture()
PixelTexture33.USE = "RgbOpacityCheckerboard"

Appearance31.texture = PixelTexture33

Shape30.appearance = Appearance31
Sphere34 = x3d.Sphere()

Shape30.geometry = Sphere34

Transform29.children.append(Shape30)

Group22.children.append(Transform29)
Transform35 = x3d.Transform()
Transform35.translation = [-1.47341,0.036672,-0.00175095]
Shape36 = x3d.Shape()
Appearance37 = x3d.Appearance()
Material38 = x3d.Material()

Appearance37.material = Material38
PixelTexture39 = x3d.PixelTexture()
PixelTexture39.USE = "RgbOpacityCheckerboard"

Appearance37.texture = PixelTexture39

Shape36.appearance = Appearance37
Cone40 = x3d.Cone()

Shape36.geometry = Cone40

Transform35.children.append(Shape36)

Group22.children.append(Transform35)
Transform41 = x3d.Transform()
Transform41.translation = [2.31094,0.0694206,-0.00187683]
Shape42 = x3d.Shape()
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()

Appearance43.material = Material44
PixelTexture45 = x3d.PixelTexture()
PixelTexture45.USE = "RgbOpacityCheckerboard"

Appearance43.texture = PixelTexture45

Shape42.appearance = Appearance43
Cylinder46 = x3d.Cylinder()

Shape42.geometry = Cylinder46

Transform41.children.append(Shape42)

Group22.children.append(Transform41)

Scene20.children.append(Group22)

X3D0.Scene = Scene20
f = open("../data/rgb_alpha.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/rgb_alpha.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
