print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interchange"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "indexedfaceset_pixeltexture_entire.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "reference"
meta3.content = "http://www.nist.gov/vrml.html"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "reference"
meta4.content = "http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "http://www.itl.nist.gov/div897/ctg/vrml/members.html"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "disclaimer"
meta6.content = "This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "info"
meta7.content = "Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "translator"
meta8.content = "Michael Kass NIST, Don Brutzman NPS"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "translated"
meta9.content = "21 January 2001"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "modified"
meta10.content = "13 January 2014"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "description"
meta11.content = "Test browser ability to completely map one PixelTexture onto the surface of an IndexedFaceSet geometry. Four colored squares should map onto each face of the IndexedFaceSet. The PixelTexture consists of red quarter (lower left), green quarter (lower right), white quarter (upper left) and yellow quarter (upper right). PixelTexture should map once onto the surface of the IndexedFaceSet, with the S (horizontal) axis of the texture corresponding to the X axis of the geometry."

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "identifier"
meta12.content = "https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "generator"
meta13.content = "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "generator"
meta14.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "license"
meta15.content = "../../license.html"

head1.children.append(meta15)

X3D0.head = head1
Scene16 = x3d.Scene()
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.description = "Front View"

Scene16.children.append(Viewpoint17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.description = "Rear View"
Viewpoint18.orientation = [0,1,0,3.14]
Viewpoint18.position = [0,0,-10]

Scene16.children.append(Viewpoint18)
Viewpoint19 = x3d.Viewpoint()
Viewpoint19.description = "Top View"
Viewpoint19.orientation = [1,0,0,-1.57]
Viewpoint19.position = [0,10,0]

Scene16.children.append(Viewpoint19)
Viewpoint20 = x3d.Viewpoint()
Viewpoint20.description = "Bottom View"
Viewpoint20.orientation = [1,0,0,1.57]
Viewpoint20.position = [0,-10,0]

Scene16.children.append(Viewpoint20)
Viewpoint21 = x3d.Viewpoint()
Viewpoint21.description = "Right View"
Viewpoint21.orientation = [0,1,0,1.57]
Viewpoint21.position = [10,0,0]

Scene16.children.append(Viewpoint21)
Viewpoint22 = x3d.Viewpoint()
Viewpoint22.description = "Left View"
Viewpoint22.orientation = [0,1,0,-1.57]
Viewpoint22.position = [-10,0,0]

Scene16.children.append(Viewpoint22)
NavigationInfo23 = x3d.NavigationInfo()
NavigationInfo23.type = ["EXAMINE","WALK","FLY","ANY"]

Scene16.children.append(NavigationInfo23)
"""<Environment id=\"gamma\" gammaCorrectionDefault=\"none\"></Environment>"""
Shape24 = x3d.Shape()
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()

Appearance25.material = Material26
PixelTexture27 = x3d.PixelTexture()
PixelTexture27.image = [2,2,4,-16776961,16711935,-1,-65281]
PixelTexture27.repeatS = False
PixelTexture27.repeatT = False
TextureProperties28 = x3d.TextureProperties()
TextureProperties28.magnificationFilter = "NEAREST_PIXEL"

PixelTexture27.textureProperties = TextureProperties28

Appearance25.texture = PixelTexture27

Shape24.appearance = Appearance25
IndexedFaceSet29 = x3d.IndexedFaceSet()
IndexedFaceSet29.coordIndex = [0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]
Coordinate30 = x3d.Coordinate()
Coordinate30.point = [(-2, 1.5, 1),(-2, -1.5, 1),(2, 1.5, 1),(2, -1.5, 1),(2, 1.5, -1),(2, -1.5, -1),(-2, 1.5, -1),(-2, -1.5, -1)]

IndexedFaceSet29.coord = Coordinate30

Shape24.geometry = IndexedFaceSet29

Scene16.children.append(Shape24)

X3D0.Scene = Scene16
f = open("../data/indexedfaceset_pixeltexture_entire.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/indexedfaceset_pixeltexture_entire.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/indexedfaceset_pixeltexture_entire.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
