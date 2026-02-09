print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interchange"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "indexedfaceset_pixeltexture_whole.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "warning"
meta3.content = "file did not transform to vrml97"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "Image"
meta4.content = "indexedfaceset_pixeltexture_whole-front.jpg"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "Image"
meta5.content = "indexedfaceset_pixeltexture_whole-rear.jpg"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "Image"
meta6.content = "indexedfaceset_pixeltexture_whole-top.jpg"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "Image"
meta7.content = "indexedfaceset_pixeltexture_whole-bottom.jpg"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "Image"
meta8.content = "indexedfaceset_pixeltexture_whole-left.jpg"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "Image"
meta9.content = "indexedfaceset_pixeltexture_whole-right.jpg"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "http://www.nist.gov/vrml.html"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "creator"
meta12.content = "http://www.itl.nist.gov/div897/ctg/vrml/members.html"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "disclaimer"
meta13.content = "This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "info"
meta14.content = "Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "translator"
meta15.content = "Michael Kass NIST, Don Brutzman NPS"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "translated"
meta16.content = "21 January 2001"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "modified"
meta17.content = "Mon, 09 Feb 2026 07:11:37 GMT"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "description"
meta18.content = "Test of browser ability to map the entire portion of an PixelTexture onto an IndexedFaceSet geometry. Four equal sized red (bottom left), green (bottom right) yellow (top left) and white (top right) squares in the pixel texture map all the faces of the cube."

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "identifier"
meta19.content = "https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_whole.x3d"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "generator"
meta20.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta20)

X3D0.head = head1
Scene21 = x3d.Scene()
Viewpoint22 = x3d.Viewpoint()
Viewpoint22.description = "Front View"

Scene21.children.append(Viewpoint22)
Viewpoint23 = x3d.Viewpoint()
Viewpoint23.description = "Rear View"
Viewpoint23.position = [0,0,-10]
Viewpoint23.orientation = [0,1,0,3.14]

Scene21.children.append(Viewpoint23)
Viewpoint24 = x3d.Viewpoint()
Viewpoint24.description = "Top View"
Viewpoint24.position = [0,10,0]
Viewpoint24.orientation = [1,0,0,-1.57]

Scene21.children.append(Viewpoint24)
Viewpoint25 = x3d.Viewpoint()
Viewpoint25.description = "Bottom View"
Viewpoint25.position = [0,-10,0]
Viewpoint25.orientation = [1,0,0,1.57]

Scene21.children.append(Viewpoint25)
Viewpoint26 = x3d.Viewpoint()
Viewpoint26.description = "Right View"
Viewpoint26.position = [10,0,0]
Viewpoint26.orientation = [0,1,0,1.57]

Scene21.children.append(Viewpoint26)
Viewpoint27 = x3d.Viewpoint()
Viewpoint27.description = "Left View"
Viewpoint27.position = [-10,0,0]
Viewpoint27.orientation = [0,1,0,-1.57]

Scene21.children.append(Viewpoint27)
NavigationInfo28 = x3d.NavigationInfo()
NavigationInfo28.type = ["EXAMINE"]

Scene21.children.append(NavigationInfo28)
Shape29 = x3d.Shape()
Appearance30 = x3d.Appearance()
Material31 = x3d.Material()

Appearance30.material = Material31
PixelTexture32 = x3d.PixelTexture()
PixelTexture32.image = [2,2,4,-16776961,16711935,-1,-65281]
TextureProperties33 = x3d.TextureProperties()
TextureProperties33.magnificationFilter = "NEAREST_PIXEL"

PixelTexture32.textureProperties = TextureProperties33

Appearance30.texture = PixelTexture32

Shape29.appearance = Appearance30
IndexedFaceSet34 = x3d.IndexedFaceSet()
IndexedFaceSet34.creaseAngle = 0.5
IndexedFaceSet34.colorPerVertex = False
IndexedFaceSet34.texCoordIndex = [0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]
IndexedFaceSet34.coordIndex = [0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]
Color35 = x3d.Color()
Color35.color = [(0, 1, 0),(0, 1, 0),(0, 1, 0),(0, 1, 0),(0, 1, 0),(0, 1, 0)]

IndexedFaceSet34.color = Color35
TextureCoordinate36 = x3d.TextureCoordinate()
TextureCoordinate36.point = [(0, 1),(0, 0),(1, 1),(1, 0)]

IndexedFaceSet34.texCoord = TextureCoordinate36
Coordinate37 = x3d.Coordinate()
Coordinate37.point = [(-2, 1, 1),(-2, -1, 1),(2, 1, 1),(2, -1, 1),(2, 1, -1),(2, -1, -1),(-2, 1, -1),(-2, -1, -1)]

IndexedFaceSet34.coord = Coordinate37

Shape29.geometry = IndexedFaceSet34

Scene21.children.append(Shape29)

X3D0.Scene = Scene21
f = open("../data/indexedfaceset_pixeltexture_whole.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/indexedfaceset_pixeltexture_whole.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/indexedfaceset_pixeltexture_whole.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
