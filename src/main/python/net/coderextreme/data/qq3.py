# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("qq3.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("translator")
meta4.setContent("John Carlson")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("created")
meta5.setContent("11 Jan 2015")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("modified")
meta6.setContent("05 May 2017")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("description")
meta7.setContent("12 extrusions to test prototype expander")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("identifier")
meta8.setContent("https://coderextreme.net/x3d/qq3.x3d")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("generator")
meta9.setContent("manual")

head1.addMeta(meta9)
X3D0.setHead(head1)
Scene10 = SceneObject()

ProtoDeclare11 = ProtoDeclareObject()
ProtoDeclare11.setName("Process")

ProtoBody12 = ProtoBodyObject()

Group13 = GroupObject()


Group13.addComments(CommentsBlock("""left"""))
Transform14 = TransformObject()
Transform14.setScale([0.5,0.5,0.5])

Shape15 = ShapeObject()
Shape15.setDEF("ShapeLeftDown")

Appearance16 = AppearanceObject()

Material17 = MaterialObject()
Material17.setDiffuseColor([0.7,1,0])

Appearance16.setMaterial(Material17)
Shape15.setAppearance(Appearance16)
Extrusion18 = ExtrusionObject()
Extrusion18.setSpine([-2.5,0,0,-1.5,0,0])
Extrusion18.setCreaseAngle(0.785)
Extrusion18.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])

Shape15.setGeometry(Extrusion18)
Transform14.addChild(Shape15)
Group13.addChild(Transform14)

Group13.addComments(CommentsBlock("""right"""))
Transform19 = TransformObject()
Transform19.setScale([0.5,0.5,0.5])

Shape20 = ShapeObject()
Shape20.setDEF("ShapeUpRight")

Appearance21 = AppearanceObject()

Material22 = MaterialObject()
Material22.setDiffuseColor([0,0.7,1])

Appearance21.setMaterial(Material22)
Shape20.setAppearance(Appearance21)
Extrusion23 = ExtrusionObject()
Extrusion23.setSpine([1.5,0,0,2.5,0,0])
Extrusion23.setCreaseAngle(0.785)
Extrusion23.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])

Shape20.setGeometry(Extrusion23)
Transform19.addChild(Shape20)
Group13.addChild(Transform19)

Group13.addComments(CommentsBlock("""up"""))
Transform24 = TransformObject()
Transform24.setScale([0.5,0.5,0.5])

Shape25 = ShapeObject()
Shape25.setUSE("ShapeUpRight")

Transform24.addChild(Shape25)
Group13.addChild(Transform24)

Group13.addComments(CommentsBlock("""down"""))
Transform26 = TransformObject()
Transform26.setScale([0.5,0.5,0.5])

Shape27 = ShapeObject()
Shape27.setUSE("ShapeLeftDown")

Transform26.addChild(Shape27)
Group13.addChild(Transform26)
ProtoBody12.addChild(Group13)
ProtoDeclare11.setProtoBody(ProtoBody12)
Scene10.addChild(ProtoDeclare11)
Viewpoint28 = ViewpointObject()
Viewpoint28.setDescription("Process pipes")
Viewpoint28.setOrientation([1,0,0,-0.4])
Viewpoint28.setPosition([0,5,12])

Scene10.addChild(Viewpoint28)
Transform29 = TransformObject()
Transform29.setTranslation([0,-2.5,0])

ProtoInstance30 = ProtoInstanceObject()
ProtoInstance30.setName("Process")

Transform29.addChild(ProtoInstance30)
Scene10.addChild(Transform29)
Transform31 = TransformObject()

ProtoInstance32 = ProtoInstanceObject()
ProtoInstance32.setName("Process")

Transform31.addChild(ProtoInstance32)
Scene10.addChild(Transform31)
Transform33 = TransformObject()
Transform33.setTranslation([0,2.5,0])

ProtoInstance34 = ProtoInstanceObject()
ProtoInstance34.setName("Process")

Transform33.addChild(ProtoInstance34)
Scene10.addChild(Transform33)
X3D0.setScene(Scene10)

X3D0.toFileX3D("../data/qq3.new.x3d")
