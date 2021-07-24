from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("3.0")
head1 = head()
component2 = component()
component2.setName("Networking")
component2.setLevel(2)

head1.addComponent(component2)
meta3 = meta()
meta3.setName("generator")
meta3.setContent("view3dscene, https://castle-engine.io/view3dscene.php")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("source")
meta4.setContent("t1.wrl")

head1.addMeta(meta4)

X3D0.setHead(head1)
Scene5 = Scene()
NavigationInfo6 = NavigationInfo()
NavigationInfo6.setType(["EXAMINE","FLY","WALK"])
NavigationInfo6.setSpeed(3)
NavigationInfo6.setAvatarSize([200,200,120])

Scene5.addChildren(NavigationInfo6)
WorldInfo7 = WorldInfo()
WorldInfo7.setTitle("Arts Mapper")

Scene5.addChildren(WorldInfo7)
Viewpoint8 = Viewpoint()
Viewpoint8.setDescription("looking North")
Viewpoint8.setPosition([0,60,110])
Viewpoint8.setOrientation([1,0,0,-0.699999988079071])
Viewpoint8.setFieldOfView(0.785398125648499)

Scene5.addChildren(Viewpoint8)
Viewpoint9 = Viewpoint()
Viewpoint9.setDescription("looking East")
Viewpoint9.setPosition([-140,30,0])
Viewpoint9.setOrientation([0,0.400000005960464,0,-1.39999997615814])
Viewpoint9.setFieldOfView(0.785398125648499)

Scene5.addChildren(Viewpoint9)
Viewpoint10 = Viewpoint()
Viewpoint10.setDescription("Overhead")
Viewpoint10.setPosition([0,150,0])
Viewpoint10.setOrientation([1,0,0,-1.57000005245209])
Viewpoint10.setFieldOfView(0.785398125648499)

Scene5.addChildren(Viewpoint10)
ProtoDeclare11 = ProtoDeclare()
ProtoDeclare11.setName("org")
ProtoInterface12 = ProtoInterface()
field13 = field()
field13.setName("posi")
field13.setAccessType("initializeOnly")
field13.setType("SFVec3f")
field13.setValue("0 0 0")

ProtoInterface12.addField(field13)
field14 = field()
field14.setName("col")
field14.setAccessType("initializeOnly")
field14.setType("SFColor")
field14.setValue("0 0 0")

ProtoInterface12.addField(field14)

ProtoDeclare11.setProtoInterface(ProtoInterface12)
ProtoBody15 = ProtoBody()
Transform16 = Transform()
Shape17 = Shape()
Appearance18 = Appearance()
Material19 = Material()
Material19.setTransparency(0.400000005960464)
IS20 = IS()
connect21 = connect()
connect21.setNodeField("emissiveColor")
connect21.setProtoField("col")

IS20.addConnect(connect21)

Material19.setIS(IS20)

Appearance18.setMaterial(Material19)

Shape17.setAppearance(Appearance18)
Sphere22 = Sphere()
Sphere22.setRadius(1.10000002384186)

Shape17.setGeometry(Sphere22)

Transform16.addChildren(Shape17)
IS23 = IS()
connect24 = connect()
connect24.setNodeField("translation")
connect24.setProtoField("posi")

IS23.addConnect(connect24)

Transform16.setIS(IS23)

ProtoBody15.addChildren(Transform16)

ProtoDeclare11.setProtoBody(ProtoBody15)

Scene5.addChildren(ProtoDeclare11)
ProtoDeclare25 = ProtoDeclare()
ProtoDeclare25.setName("r")
ProtoInterface26 = ProtoInterface()
field27 = field()
field27.setName("pos")
field27.setAccessType("initializeOnly")
field27.setType("SFVec3f")
field27.setValue("0 0 0")

ProtoInterface26.addField(field27)

ProtoDeclare25.setProtoInterface(ProtoInterface26)
ProtoBody28 = ProtoBody()
ProtoInstance29 = ProtoInstance()
ProtoInstance29.setName("org")
fieldValue30 = fieldValue()
fieldValue30.setName("col")
fieldValue30.setValue("0 0.300000011920929 1")

ProtoInstance29.addFieldValue(fieldValue30)
fieldValue31 = fieldValue()
fieldValue31.setName("posi")

ProtoInstance29.addFieldValue(fieldValue31)
IS32 = IS()
connect33 = connect()
connect33.setNodeField("posi")
connect33.setProtoField("pos")

IS32.addConnect(connect33)

ProtoInstance29.setIS(IS32)

ProtoBody28.addChildren(ProtoInstance29)

ProtoDeclare25.setProtoBody(ProtoBody28)

Scene5.addChildren(ProtoDeclare25)
Anchor34 = Anchor()
Anchor34.setUrl(["javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor34.setDescription("High Peak Community Arts")
ProtoInstance35 = ProtoInstance()
ProtoInstance35.setName("r")
fieldValue36 = fieldValue()
fieldValue36.setName("pos")
fieldValue36.setValue("400 0.100000001490116 -385")

ProtoInstance35.addFieldValue(fieldValue36)

Anchor34.addChildren(ProtoInstance35)

Scene5.addChildren(Anchor34)

X3D0.setScene(Scene5)
X3D0.toFileX3D("../data/t2_RoundTrip.x3d")
