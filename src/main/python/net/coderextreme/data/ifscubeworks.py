# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Interchange")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("template.json")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("identifier")
meta3.setContent("http://coderextreme.net/X3DJSONLD/template.json")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("description")
meta4.setContent("Template for an Indexed Face Set")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("creator")
meta5.setContent("John Carlson")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("created")
meta6.setContent("4 April 2017")

head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()

Group8 = GroupObject()

Shape9 = ShapeObject()

IndexedFaceSet10 = IndexedFaceSetObject()
IndexedFaceSet10.setDEF("IndexedFaceSet")
IndexedFaceSet10.setCoordIndex([0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1])
IndexedFaceSet10.setNormalIndex([0,0,1,2,3,4,5])
IndexedFaceSet10.setNormalPerVertex(False)
IndexedFaceSet10.setColorIndex([0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1])

Coordinate11 = CoordinateObject()
Coordinate11.setPoint([0,0,1,0,1,1,1,1,1,1,0,1])

IndexedFaceSet10.setCoord(Coordinate11)
Normal12 = NormalObject()
Normal12.setVector([1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1])

IndexedFaceSet10.setNormal(Normal12)
Color13 = ColorObject()
Color13.setColor([0,1,0])

IndexedFaceSet10.setColor(Color13)
Shape9.setGeometry(IndexedFaceSet10)
Group8.addChild(Shape9)
Scene7.addChild(Group8)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/ifscubeworks.new.x3d")
