# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("abox.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/abox.x3d")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("description")
meta6.setContent("a box")

head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()

ProtoDeclare8 = ProtoDeclareObject()
ProtoDeclare8.setName("anyShape")

ProtoInterface9 = ProtoInterfaceObject()

field10 = fieldObject()
field10.setType(fieldObject.TYPE_MFNODE)
field10.setName("myShape")
field10.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Shape11 = ShapeObject()

Sphere12 = SphereObject()

Shape11.setGeometry(Sphere12)
field10.addChild(Shape11)
ProtoInterface9.addField(field10)
ProtoDeclare8.setProtoInterface(ProtoInterface9)
ProtoBody13 = ProtoBodyObject()

Transform14 = TransformObject()

IS15 = ISObject()

connect16 = connectObject()
connect16.setNodeField("children")
connect16.setProtoField("myShape")

IS15.addConnect(connect16)
Transform14.setIS(IS15)
ProtoBody13.addChild(Transform14)
ProtoDeclare8.setProtoBody(ProtoBody13)
Scene7.addChild(ProtoDeclare8)
ProtoDeclare17 = ProtoDeclareObject()
ProtoDeclare17.setName("one")

ProtoInterface18 = ProtoInterfaceObject()

field19 = fieldObject()
field19.setType(fieldObject.TYPE_MFNODE)
field19.setName("myShape")
field19.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Shape20 = ShapeObject()

Cylinder21 = CylinderObject()

Shape20.setGeometry(Cylinder21)
field19.addChild(Shape20)
ProtoInterface18.addField(field19)
ProtoDeclare17.setProtoInterface(ProtoInterface18)
ProtoBody22 = ProtoBodyObject()

Transform23 = TransformObject()

ProtoInstance24 = ProtoInstanceObject()
ProtoInstance24.setName("anyShape")

IS25 = ISObject()

connect26 = connectObject()
connect26.setNodeField("myShape")
connect26.setProtoField("myShape")

IS25.addConnect(connect26)
ProtoInstance24.setIS(IS25)
Transform23.addChild(ProtoInstance24)
ProtoBody22.addChild(Transform23)
ProtoDeclare17.setProtoBody(ProtoBody22)
Scene7.addChild(ProtoDeclare17)
ProtoInstance27 = ProtoInstanceObject()
ProtoInstance27.setName("one")

fieldValue28 = fieldValueObject()
fieldValue28.setName("myShape")

Shape29 = ShapeObject()

Box30 = BoxObject()
Box30.setSize([140,140,140])

Shape29.setGeometry(Box30)
fieldValue28.addChild(Shape29)
ProtoInstance27.addFieldValue(fieldValue28)
Scene7.addChild(ProtoInstance27)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/abox.new.x3d")
