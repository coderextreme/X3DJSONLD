import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("3.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Networking")
component2.setLevel(2)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("generator")
meta3.setContent("view3dscene, https://castle-engine.io/view3dscene.php")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("source")
meta4.setContent("t1.wrl")

head1.addMeta(meta4)

X3D0.setHead(head1)
Scene5 = x3d.Scene()
NavigationInfo6 = x3d.NavigationInfo()
NavigationInfo6.setType(["EXAMINE","FLY","WALK"])
NavigationInfo6.setSpeed(3)
NavigationInfo6.setAvatarSize([200,200,120])

Scene5.addChildren(NavigationInfo6)
WorldInfo7 = x3d.WorldInfo()
WorldInfo7.setTitle("Arts Mapper")

Scene5.addChildren(WorldInfo7)
Viewpoint8 = x3d.Viewpoint()
Viewpoint8.setDescription("looking North")
Viewpoint8.setPosition([0,60,110])
Viewpoint8.setOrientation([1,0,0,-0.699999988079071])
Viewpoint8.setFieldOfView(0.785398125648499)

Scene5.addChildren(Viewpoint8)
Viewpoint9 = x3d.Viewpoint()
Viewpoint9.setDescription("looking East")
Viewpoint9.setPosition([-140,30,0])
Viewpoint9.setOrientation([0,0.400000005960464,0,-1.39999997615814])
Viewpoint9.setFieldOfView(0.785398125648499)

Scene5.addChildren(Viewpoint9)
Viewpoint10 = x3d.Viewpoint()
Viewpoint10.setDescription("Overhead")
Viewpoint10.setPosition([0,150,0])
Viewpoint10.setOrientation([1,0,0,-1.57000005245209])
Viewpoint10.setFieldOfView(0.785398125648499)

Scene5.addChildren(Viewpoint10)
ProtoDeclare11 = x3d.ProtoDeclare()
ProtoDeclare11.setName("org")
ProtoInterface12 = x3d.ProtoInterface()
field13 = x3d.field()
field13.setName("posi")
field13.setAccessType("initializeOnly")
field13.setType("SFVec3f")
field13.setValue("0 0 0")

ProtoInterface12.addField(field13)
field14 = x3d.field()
field14.setName("col")
field14.setAccessType("initializeOnly")
field14.setType("SFColor")
field14.setValue("0 0 0")

ProtoInterface12.addField(field14)

ProtoDeclare11.setProtoInterface(ProtoInterface12)
ProtoBody15 = x3d.ProtoBody()
Transform16 = x3d.Transform()
Transform16.setBboxCenter([0,0,0])
Transform16.setBboxSize([-1,-1,-1])
Shape17 = x3d.Shape()
Shape17.setBboxCenter([0,0,0])
Shape17.setBboxSize([-1,-1,-1])
Appearance18 = x3d.Appearance()
Material19 = x3d.Material()
Material19.setTransparency(0.400000005960464)
IS20 = x3d.IS()
connect21 = x3d.connect()
connect21.setNodeField("emissiveColor")
connect21.setProtoField("col")

IS20.addConnect(connect21)

Material19.setIS(IS20)

Appearance18.setMaterial(Material19)

Shape17.setAppearance(Appearance18)
Sphere22 = x3d.Sphere()
Sphere22.setRadius(1.10000002384186)

Shape17.setGeometry(Sphere22)

Transform16.addChildren(Shape17)
IS23 = x3d.IS()
connect24 = x3d.connect()
connect24.setNodeField("translation")
connect24.setProtoField("posi")

IS23.addConnect(connect24)

Transform16.setIS(IS23)

ProtoBody15.addChildren(Transform16)

ProtoDeclare11.setProtoBody(ProtoBody15)

Scene5.addChildren(ProtoDeclare11)
ProtoDeclare25 = x3d.ProtoDeclare()
ProtoDeclare25.setName("r")
ProtoInterface26 = x3d.ProtoInterface()
field27 = x3d.field()
field27.setName("pos")
field27.setAccessType("initializeOnly")
field27.setType("SFVec3f")
field27.setValue("0 0 0")

ProtoInterface26.addField(field27)

ProtoDeclare25.setProtoInterface(ProtoInterface26)
ProtoBody28 = x3d.ProtoBody()
ProtoInstance29 = x3d.ProtoInstance()
ProtoInstance29.setName("org")
fieldValue30 = x3d.fieldValue()
fieldValue30.setName("col")
fieldValue30.setValue("0 0.300000011920929 1")

ProtoInstance29.addFieldValue(fieldValue30)
fieldValue31 = x3d.fieldValue()
fieldValue31.setName("posi")

ProtoInstance29.addFieldValue(fieldValue31)
IS32 = x3d.IS()
connect33 = x3d.connect()
connect33.setNodeField("posi")
connect33.setProtoField("pos")

IS32.addConnect(connect33)

ProtoInstance29.setIS(IS32)

ProtoBody28.addChildren(ProtoInstance29)

ProtoDeclare25.setProtoBody(ProtoBody28)

Scene5.addChildren(ProtoDeclare25)
Anchor34 = x3d.Anchor()
Anchor34.setUrl(["javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor34.setDescription("High Peak Community Arts")
Anchor34.setBboxCenter([0,0,0])
Anchor34.setBboxSize([-1,-1,-1])
ProtoInstance35 = x3d.ProtoInstance()
ProtoInstance35.setName("r")
fieldValue36 = x3d.fieldValue()
fieldValue36.setName("pos")
fieldValue36.setValue("400 0.100000001490116 -385")

ProtoInstance35.addFieldValue(fieldValue36)

Anchor34.addChildren(ProtoInstance35)

Scene5.addChildren(Anchor34)

X3D0.setScene(Scene5)
X3D0.toFileX3D("../data/t2_RoundTrip.x3d")
