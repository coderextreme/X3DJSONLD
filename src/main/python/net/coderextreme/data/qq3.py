from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("qq3.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("translator")
meta4.setContent("John Carlson")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("created")
meta5.setContent("11 Jan 2015")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("modified")
meta6.setContent("05 May 2017")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("description")
meta7.setContent("12 extrusions to test prototype expander")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("identifier")
meta8.setContent("https://coderextreme.net/x3d/qq3.x3d")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("generator")
meta9.setContent("manual")

head1.addMeta(meta9)

X3D0.setHead(head1)
Scene10 = Scene()
ProtoDeclare11 = ProtoDeclare()
ProtoDeclare11.setName("Process")
ProtoBody12 = ProtoBody()
Group13 = Group()
#left
Transform14 = Transform()
Transform14.setScale([0.5,0.5,0.5])
Shape15 = Shape()
Shape15.setDEF("ShapeLeftDown")
Appearance16 = Appearance()
Material17 = Material()
Material17.setDiffuseColor([0.7,1,0])

Appearance16.setMaterial(Material17)

Shape15.setAppearance(Appearance16)
Extrusion18 = Extrusion()
Extrusion18.setSpine([-2.5,0,0,-1.5,0,0])
Extrusion18.setCreaseAngle(0.785)
Extrusion18.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])

Shape15.setGeometry(Extrusion18)

Transform14.addChildren(Shape15)

Group13.addChildren(Transform14)
#right
Transform19 = Transform()
Transform19.setScale([0.5,0.5,0.5])
Shape20 = Shape()
Shape20.setDEF("ShapeUpRight")
Appearance21 = Appearance()
Material22 = Material()
Material22.setDiffuseColor([0,0.7,1])

Appearance21.setMaterial(Material22)

Shape20.setAppearance(Appearance21)
Extrusion23 = Extrusion()
Extrusion23.setSpine([1.5,0,0,2.5,0,0])
Extrusion23.setCreaseAngle(0.785)
Extrusion23.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])

Shape20.setGeometry(Extrusion23)

Transform19.addChildren(Shape20)

Group13.addChildren(Transform19)
#up
Transform24 = Transform()
Transform24.setScale([0.5,0.5,0.5])
Shape25 = Shape()
Shape25.setUSE("ShapeUpRight")

Transform24.addChildren(Shape25)

Group13.addChildren(Transform24)
#down
Transform26 = Transform()
Transform26.setScale([0.5,0.5,0.5])
Shape27 = Shape()
Shape27.setUSE("ShapeLeftDown")

Transform26.addChildren(Shape27)

Group13.addChildren(Transform26)

ProtoBody12.addChildren(Group13)

ProtoDeclare11.setProtoBody(ProtoBody12)

Scene10.addChildren(ProtoDeclare11)
Viewpoint28 = Viewpoint()
Viewpoint28.setDescription("Process pipes")
Viewpoint28.setOrientation([1,0,0,-0.4])
Viewpoint28.setPosition([0,5,12])

Scene10.addChildren(Viewpoint28)
Transform29 = Transform()
Transform29.setTranslation([0,-2.5,0])
ProtoInstance30 = ProtoInstance()
ProtoInstance30.setName("Process")

Transform29.addChildren(ProtoInstance30)

Scene10.addChildren(Transform29)
Transform31 = Transform()
ProtoInstance32 = ProtoInstance()
ProtoInstance32.setName("Process")

Transform31.addChildren(ProtoInstance32)

Scene10.addChildren(Transform31)
Transform33 = Transform()
Transform33.setTranslation([0,2.5,0])
ProtoInstance34 = ProtoInstance()
ProtoInstance34.setName("Process")

Transform33.addChildren(ProtoInstance34)

Scene10.addChildren(Transform33)

X3D0.setScene(Scene10)
X3D0.toFileX3D("../data/qq3_RoundTrip.x3d")
