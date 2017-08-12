# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Interchange")
X3D0.setVersion("3.0")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("indexedfaceset_pixeltexture_whole.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("warning")
meta3.setContent("file did not transform to vrml97")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("Image")
meta4.setContent("indexedfaceset_pixeltexture_whole-front.jpg")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("Image")
meta5.setContent("indexedfaceset_pixeltexture_whole-rear.jpg")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("Image")
meta6.setContent("indexedfaceset_pixeltexture_whole-top.jpg")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("Image")
meta7.setContent("indexedfaceset_pixeltexture_whole-bottom.jpg")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("Image")
meta8.setContent("indexedfaceset_pixeltexture_whole-left.jpg")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("Image")
meta9.setContent("indexedfaceset_pixeltexture_whole-right.jpg")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("reference")
meta10.setContent("http://www.nist.gov/vrml.html")

head1.addMeta(meta10)
meta11 = metaObject()
meta11.setName("reference")
meta11.setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html")

head1.addMeta(meta11)
meta12 = metaObject()
meta12.setName("creator")
meta12.setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html")

head1.addMeta(meta12)
meta13 = metaObject()
meta13.setName("disclaimer")
meta13.setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.")

head1.addMeta(meta13)
meta14 = metaObject()
meta14.setName("info")
meta14.setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, http://www.web3d.org/working-groups/x3d")

head1.addMeta(meta14)
meta15 = metaObject()
meta15.setName("translator")
meta15.setContent("Michael Kass NIST, Don Brutzman NPS")

head1.addMeta(meta15)
meta16 = metaObject()
meta16.setName("translated")
meta16.setContent("21 January 2001")

head1.addMeta(meta16)
meta17 = metaObject()
meta17.setName("modified")
meta17.setContent("13 January 2014")

head1.addMeta(meta17)
meta18 = metaObject()
meta18.setName("description")
meta18.setContent("Test of browser ability to map the entire portion of an PixelTexture onto an IndexedFaceSet geometry. Four equal sized red (bottom left), green (bottom right) yellow (top left) and white (top right) squares in the pixel texture map all the faces of the cube.")

head1.addMeta(meta18)
meta19 = metaObject()
meta19.setName("identifier")
meta19.setContent("http://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_whole.x3d")

head1.addMeta(meta19)
meta20 = metaObject()
meta20.setName("generator")
meta20.setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html")

head1.addMeta(meta20)
meta21 = metaObject()
meta21.setName("generator")
meta21.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta21)
meta22 = metaObject()
meta22.setName("license")
meta22.setContent("../../license.html")

head1.addMeta(meta22)
X3D0.setHead(head1)
Scene23 = SceneObject()

Viewpoint24 = ViewpointObject()
Viewpoint24.setDescription("Front View")

Scene23.addChild(Viewpoint24)
Viewpoint25 = ViewpointObject()
Viewpoint25.setDescription("Rear View")
Viewpoint25.setOrientation([0,1,0,3.14])
Viewpoint25.setPosition([0,0,-10])

Scene23.addChild(Viewpoint25)
Viewpoint26 = ViewpointObject()
Viewpoint26.setDescription("Top View")
Viewpoint26.setOrientation([1,0,0,-1.57])
Viewpoint26.setPosition([0,10,0])

Scene23.addChild(Viewpoint26)
Viewpoint27 = ViewpointObject()
Viewpoint27.setDescription("Bottom View")
Viewpoint27.setOrientation([1,0,0,1.57])
Viewpoint27.setPosition([0,-10,0])

Scene23.addChild(Viewpoint27)
Viewpoint28 = ViewpointObject()
Viewpoint28.setDescription("Right View")
Viewpoint28.setOrientation([0,1,0,1.57])
Viewpoint28.setPosition([10,0,0])

Scene23.addChild(Viewpoint28)
Viewpoint29 = ViewpointObject()
Viewpoint29.setDescription("Left View")
Viewpoint29.setOrientation([0,1,0,-1.57])
Viewpoint29.setPosition([-10,0,0])

Scene23.addChild(Viewpoint29)
NavigationInfo30 = NavigationInfoObject()
NavigationInfo30.setType(["EXAMINE"])

Scene23.addChild(NavigationInfo30)
Shape31 = ShapeObject()

Appearance32 = AppearanceObject()

Material33 = MaterialObject()

Appearance32.setMaterial(Material33)
PixelTexture34 = PixelTextureObject()
PixelTexture34.setImage([2,2,4,-16776961,16711935,-1,-65281])

Appearance32.setTexture(PixelTexture34)
Shape31.setAppearance(Appearance32)
IndexedFaceSet35 = IndexedFaceSetObject()
IndexedFaceSet35.setColorPerVertex(False)
IndexedFaceSet35.setCoordIndex([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1])
IndexedFaceSet35.setCreaseAngle(0.5)
IndexedFaceSet35.setTexCoordIndex([0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1])

Color36 = ColorObject()
Color36.setColor([0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0])

IndexedFaceSet35.setColor(Color36)
Coordinate37 = CoordinateObject()
Coordinate37.setPoint([-2,1,1,-2,-1,1,2,1,1,2,-1,1,2,1,-1,2,-1,-1,-2,1,-1,-2,-1,-1])

IndexedFaceSet35.setCoord(Coordinate37)
TextureCoordinate38 = TextureCoordinateObject()
TextureCoordinate38.setPoint([0,1,0,0,1,1,1,0])

IndexedFaceSet35.setTexCoord(TextureCoordinate38)
Shape31.setGeometry(IndexedFaceSet35)
Scene23.addChild(Shape31)
X3D0.setScene(Scene23)

X3D0.toFileX3D("../data/indexedfaceset_pixeltexture_whole.new.x3d")
