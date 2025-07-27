import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("qq3.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("translator")
meta4.setContent("John Carlson")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("created")
meta5.setContent("11 Jan 2015")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("modified")
meta6.setContent("05 May 2017")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("description")
meta7.setContent("12 extrusions")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("identifier")
meta8.setContent("https://coderextreme.net/x3d/qq3.x3d")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("generator")
meta9.setContent("manual")

head1.addMeta(meta9)

X3D0.setHead(head1)
Scene10 = x3d.Scene()
ProtoDeclare11 = x3d.ProtoDeclare()
ProtoDeclare11.setName("Process")
ProtoBody12 = x3d.ProtoBody()
Group13 = x3d.Group()

Group13.addComments(x3d.CommentsBlock('''left'''))
Transform14 = x3d.Transform()
Transform14.setScale(x3d.doubleToFloat([0.5,0.5,0.5]))
Shape15 = x3d.Shape()
Shape15.setDEF("ShapeLeftDown")
Appearance16 = x3d.Appearance()
Material17 = x3d.Material()
Material17.setDiffuseColor(x3d.doubleToFloat([0.7,1,0]))

Appearance16.setMaterial(Material17)

Shape15.setAppearance(Appearance16)
Extrusion18 = x3d.Extrusion()
Extrusion18.setSpine(x3d.doubleToFloat([-2.5,0,0,-2,0,0,-1.5,0,0]))
Extrusion18.setCreaseAngle(0.785)
Extrusion18.setCrossSection(x3d.doubleToFloat([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]))

Shape15.setGeometry(Extrusion18)

Transform14.addChild(Shape15)

Group13.addChild(Transform14)

Group13.addComments(x3d.CommentsBlock('''right'''))
Transform19 = x3d.Transform()
Transform19.setScale(x3d.doubleToFloat([0.5,0.5,0.5]))
Shape20 = x3d.Shape()
Shape20.setDEF("ShapeUpRight")
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.setDiffuseColor(x3d.doubleToFloat([0,0.7,1]))

Appearance21.setMaterial(Material22)

Shape20.setAppearance(Appearance21)
Extrusion23 = x3d.Extrusion()
Extrusion23.setSpine(x3d.doubleToFloat([1.5,0,0,2,0,0,2.5,0,0]))
Extrusion23.setCreaseAngle(0.785)
Extrusion23.setCrossSection(x3d.doubleToFloat([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]))

Shape20.setGeometry(Extrusion23)

Transform19.addChild(Shape20)

Group13.addChild(Transform19)

Group13.addComments(x3d.CommentsBlock('''up'''))
Transform24 = x3d.Transform()
Transform24.setScale(x3d.doubleToFloat([0.5,0.5,0.5]))
Shape25 = x3d.Shape()
Shape25.setUSE("ShapeUpRight")

Transform24.addChild(Shape25)

Group13.addChild(Transform24)

Group13.addComments(x3d.CommentsBlock('''down'''))
Transform26 = x3d.Transform()
Transform26.setScale(x3d.doubleToFloat([0.5,0.5,0.5]))
Shape27 = x3d.Shape()
Shape27.setUSE("ShapeLeftDown")

Transform26.addChild(Shape27)

Group13.addChild(Transform26)

ProtoBody12.addChild(Group13)

ProtoDeclare11.setProtoBody(ProtoBody12)

Scene10.addChild(ProtoDeclare11)
Viewpoint28 = x3d.Viewpoint()
Viewpoint28.setDescription("Process pipes")
Viewpoint28.setOrientation(x3d.doubleToFloat([1,0,0,-0.4]))
Viewpoint28.setPosition(x3d.doubleToFloat([0,5,12]))

Scene10.addChild(Viewpoint28)
Transform29 = x3d.Transform()
Transform29.setTranslation(x3d.doubleToFloat([0,-2.5,0]))
ProtoInstance30 = x3d.ProtoInstance()
ProtoInstance30.setName("Process")

Transform29.addChild(ProtoInstance30)

Scene10.addChild(Transform29)
Transform31 = x3d.Transform()
ProtoInstance32 = x3d.ProtoInstance()
ProtoInstance32.setName("Process")

Transform31.addChild(ProtoInstance32)

Scene10.addChild(Transform31)
Transform33 = x3d.Transform()
Transform33.setTranslation(x3d.doubleToFloat([0,2.5,0]))
ProtoInstance34 = x3d.ProtoInstance()
ProtoInstance34.setName("Process")

Transform33.addChild(ProtoInstance34)

Scene10.addChild(Transform33)

X3D0.setScene(Scene10)
X3D0.toFileX3D("../personal/qq3.new.graalpy.x3d")
X3D0.toFileJSON("../personal/qq3.new.graalpy.json")
