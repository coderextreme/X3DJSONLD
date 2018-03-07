# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Interchange")
X3D0.setVersion("3.0")

head1 = headObject()

meta2 = metaObject()
meta2.setContent("indexedfaceset_pixeltexture_plus.x3d")
meta2.setName("title")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setContent("indexedfaceset_pixeltexture_plus-front.jpg")
meta3.setName("Image")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setContent("indexedfaceset_pixeltexture_plus-rear.jpg")
meta4.setName("Image")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setContent("indexedfaceset_pixeltexture_plus-top.jpg")
meta5.setName("Image")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setContent("indexedfaceset_pixeltexture_plus-bottom.jpg")
meta6.setName("Image")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setContent("indexedfaceset_pixeltexture_plus-left.jpg")
meta7.setName("Image")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setContent("indexedfaceset_pixeltexture_plus-right.jpg")
meta8.setName("Image")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setContent("http://www.nist.gov/vrml.html")
meta9.setName("reference")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html")
meta10.setName("reference")

head1.addMeta(meta10)
meta11 = metaObject()
meta11.setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html")
meta11.setName("creator")

head1.addMeta(meta11)
meta12 = metaObject()
meta12.setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.")
meta12.setName("disclaimer")

head1.addMeta(meta12)
meta13 = metaObject()
meta13.setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, http://www.web3d.org/working-groups/x3d")
meta13.setName("info")

head1.addMeta(meta13)
meta14 = metaObject()
meta14.setContent("Michael Kass NIST, Don Brutzman NPS")
meta14.setName("translator")

head1.addMeta(meta14)
meta15 = metaObject()
meta15.setContent("21 January 2001")
meta15.setName("translated")

head1.addMeta(meta15)
meta16 = metaObject()
meta16.setContent("13 January 2014")
meta16.setName("modified")

head1.addMeta(meta16)
meta17 = metaObject()
meta17.setContent("Test of browser ability to map a 3 times multiple of an PixelTexture onto an IndexedFaceSet geometry. A 3 by 3 matrix of four equal sized red, green, white and yellow squares in the pixel texture map all the faces of the cube.")
meta17.setName("description")

head1.addMeta(meta17)
meta18 = metaObject()
meta18.setContent("http://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plus.x3d")
meta18.setName("identifier")

head1.addMeta(meta18)
meta19 = metaObject()
meta19.setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html")
meta19.setName("generator")

head1.addMeta(meta19)
meta20 = metaObject()
meta20.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")
meta20.setName("generator")

head1.addMeta(meta20)
meta21 = metaObject()
meta21.setContent("../../license.html")
meta21.setName("license")

head1.addMeta(meta21)
X3D0.setHead(head1)
Scene22 = SceneObject()

Viewpoint23 = ViewpointObject()
Viewpoint23.setDescription("Front View")

Scene22.addChild(Viewpoint23)
Viewpoint24 = ViewpointObject()
Viewpoint24.setDescription("Rear View")
Viewpoint24.setOrientation([0,1,0,3.14])
Viewpoint24.setPosition([0,0,-10])

Scene22.addChild(Viewpoint24)
Viewpoint25 = ViewpointObject()
Viewpoint25.setDescription("Top View")
Viewpoint25.setOrientation([1,0,0,-1.57])
Viewpoint25.setPosition([0,10,0])

Scene22.addChild(Viewpoint25)
Viewpoint26 = ViewpointObject()
Viewpoint26.setDescription("Bottom View")
Viewpoint26.setOrientation([1,0,0,1.57])
Viewpoint26.setPosition([0,-10,0])

Scene22.addChild(Viewpoint26)
Viewpoint27 = ViewpointObject()
Viewpoint27.setDescription("Right View")
Viewpoint27.setOrientation([0,1,0,1.57])
Viewpoint27.setPosition([10,0,0])

Scene22.addChild(Viewpoint27)
Viewpoint28 = ViewpointObject()
Viewpoint28.setDescription("Left View")
Viewpoint28.setOrientation([0,1,0,-1.57])
Viewpoint28.setPosition([-10,0,0])

Scene22.addChild(Viewpoint28)
NavigationInfo29 = NavigationInfoObject()
NavigationInfo29.setType(["EXAMINE","WALK","FLY","ANY"])

Scene22.addChild(NavigationInfo29)
Shape30 = ShapeObject()

Appearance31 = AppearanceObject()

Material32 = MaterialObject()

Appearance31.setMaterial(Material32)
PixelTexture33 = PixelTextureObject()
PixelTexture33.setImage([2,2,4,-16776961,16711935,-1,-65281])

Appearance31.setTexture(PixelTexture33)
Shape30.setAppearance(Appearance31)
IndexedFaceSet34 = IndexedFaceSetObject()
IndexedFaceSet34.setColorPerVertex(False)
IndexedFaceSet34.setCoordIndex([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1])
IndexedFaceSet34.setCreaseAngle(0.5)
IndexedFaceSet34.setTexCoordIndex([0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1])

Color35 = ColorObject()
Color35.setColor([0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0])

IndexedFaceSet34.setColor(Color35)
Coordinate36 = CoordinateObject()
Coordinate36.setPoint([-2,1,1,-2,-1,1,2,1,1,2,-1,1,2,1,-1,2,-1,-1,-2,1,-1,-2,-1,-1])

IndexedFaceSet34.setCoord(Coordinate36)
TextureCoordinate37 = TextureCoordinateObject()
TextureCoordinate37.setPoint([-1,2,-1,-1,2,2,2,-1])

IndexedFaceSet34.setTexCoord(TextureCoordinate37)
Shape30.setGeometry(IndexedFaceSet34)
Scene22.addChild(Shape30)
X3D0.setScene(Scene22)

X3D0.toFileX3D("../data/indexedfaceset_pixeltexture_plus.new.x3d")
