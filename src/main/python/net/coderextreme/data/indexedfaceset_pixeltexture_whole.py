print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Interchange"
X3D0.version = "4.0"
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
meta17.content = "13 January 2014"

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
meta20.content = "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "generator"
meta21.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "license"
meta22.content = "../../license.html"

head1.children.append(meta22)

X3D0.head = head1
Scene23 = x3d.Scene()
Viewpoint24 = x3d.Viewpoint()
Viewpoint24.description = "Front View"

Scene23.children.append(Viewpoint24)
Viewpoint25 = x3d.Viewpoint()
Viewpoint25.description = "Rear View"
Viewpoint25.orientation = [0,1,0,3.14]
Viewpoint25.position = [0,0,-10]

Scene23.children.append(Viewpoint25)
Viewpoint26 = x3d.Viewpoint()
Viewpoint26.description = "Top View"
Viewpoint26.orientation = [1,0,0,-1.57]
Viewpoint26.position = [0,10,0]

Scene23.children.append(Viewpoint26)
Viewpoint27 = x3d.Viewpoint()
Viewpoint27.description = "Bottom View"
Viewpoint27.orientation = [1,0,0,1.57]
Viewpoint27.position = [0,-10,0]

Scene23.children.append(Viewpoint27)
Viewpoint28 = x3d.Viewpoint()
Viewpoint28.description = "Right View"
Viewpoint28.orientation = [0,1,0,1.57]
Viewpoint28.position = [10,0,0]

Scene23.children.append(Viewpoint28)
Viewpoint29 = x3d.Viewpoint()
Viewpoint29.description = "Left View"
Viewpoint29.orientation = [0,1,0,-1.57]
Viewpoint29.position = [-10,0,0]

Scene23.children.append(Viewpoint29)
NavigationInfo30 = x3d.NavigationInfo()
NavigationInfo30.type = ["EXAMINE"]

Scene23.children.append(NavigationInfo30)
Shape31 = x3d.Shape()
Appearance32 = x3d.Appearance()
Material33 = x3d.Material()

Appearance32.material = Material33
PixelTexture34 = x3d.PixelTexture()
PixelTexture34.image = [2,2,4,-16776961,16711935,-1,-65281]

Appearance32.texture = PixelTexture34

Shape31.appearance = Appearance32
IndexedFaceSet35 = x3d.IndexedFaceSet()
IndexedFaceSet35.colorPerVertex = False
IndexedFaceSet35.coordIndex = [0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]
IndexedFaceSet35.creaseAngle = 0.5
IndexedFaceSet35.texCoordIndex = [0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]
Color36 = x3d.Color()

IndexedFaceSet35.color = Color36
Coordinate37 = x3d.Coordinate()

IndexedFaceSet35.coord = Coordinate37
TextureCoordinate38 = x3d.TextureCoordinate()

IndexedFaceSet35.texCoord = TextureCoordinate38

Shape31.geometry = IndexedFaceSet35

Scene23.children.append(Shape31)

X3D0.Scene = Scene23
f = open("../data/indexedfaceset_pixeltexture_whole.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/indexedfaceset_pixeltexture_whole.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
