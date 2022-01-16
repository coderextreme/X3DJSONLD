from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("rubikcoord.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/rubik.x3d")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("description")
meta6.setContent("a kind of 2x2x2 rubik cube")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = Scene()
NavigationInfo8 = NavigationInfo()
NavigationInfo8.setType(["EXAMINE"])

Scene7.addChildren(NavigationInfo8)
Viewpoint9 = Viewpoint()
Viewpoint9.setDescription("Rubiks Cube")
Viewpoint9.setPosition([0,0,12])

Scene7.addChildren(Viewpoint9)
Background10 = Background()
Background10.setSkyColor([1,1,1])

Scene7.addChildren(Background10)
ProtoDeclare11 = ProtoDeclare()
ProtoDeclare11.setName("boxproto")
ProtoInterface12 = ProtoInterface()
field13 = field()
field13.setName("xtranslation")
field13.setAccessType("inputOutput")
field13.setType("SFVec3f")
field13.setValue("0 0 0")

ProtoInterface12.addField(field13)
field14 = field()
field14.setName("diffuseColor")
field14.setAccessType("inputOutput")
field14.setType("SFColor")
field14.setValue("1 1 1")

ProtoInterface12.addField(field14)

ProtoDeclare11.setProtoInterface(ProtoInterface12)
ProtoBody15 = ProtoBody()
Transform16 = Transform()
IS17 = IS()
connect18 = connect()
connect18.setNodeField("translation")
connect18.setProtoField("xtranslation")

IS17.addConnect(connect18)

Transform16.setIS(IS17)
Shape19 = Shape()
Box20 = Box()

Shape19.setGeometry(Box20)
Appearance21 = Appearance()
Material22 = Material()
Material22.setDiffuseColor([1,1,1])
IS23 = IS()
connect24 = connect()
connect24.setNodeField("diffuseColor")
connect24.setProtoField("diffuseColor")

IS23.addConnect(connect24)

Material22.setIS(IS23)

Appearance21.setMaterial(Material22)

Shape19.setAppearance(Appearance21)

Transform16.addChildren(Shape19)

ProtoBody15.addChildren(Transform16)

ProtoDeclare11.setProtoBody(ProtoBody15)

Scene7.addChildren(ProtoDeclare11)
ProtoDeclare25 = ProtoDeclare()
ProtoDeclare25.setName("two")
ProtoInterface26 = ProtoInterface()
field27 = field()
field27.setName("ytranslation")
field27.setAccessType("inputOutput")
field27.setType("SFVec3f")
field27.setValue("0 0 0")

ProtoInterface26.addField(field27)
field28 = field()
field28.setName("diffuseColor")
field28.setAccessType("inputOutput")
field28.setType("SFColor")
field28.setValue("1 0 0")

ProtoInterface26.addField(field28)

ProtoDeclare25.setProtoInterface(ProtoInterface26)
ProtoBody29 = ProtoBody()
Transform30 = Transform()
IS31 = IS()
connect32 = connect()
connect32.setNodeField("translation")
connect32.setProtoField("ytranslation")

IS31.addConnect(connect32)

Transform30.setIS(IS31)
ProtoInstance33 = ProtoInstance()
ProtoInstance33.setName("boxproto")
fieldValue34 = fieldValue()
fieldValue34.setName("xtranslation")
fieldValue34.setValue("0 0 0")

ProtoInstance33.addFieldValue(fieldValue34)
fieldValue35 = fieldValue()
fieldValue35.setName("diffuseColor")
fieldValue35.setValue("1 0 0")
IS36 = IS()
connect37 = connect()
connect37.setNodeField("diffuseColor")
connect37.setProtoField("diffuseColor")

IS36.addConnect(connect37)

fieldValue35.setIS(IS36)

ProtoInstance33.addFieldValue(fieldValue35)

Transform30.addChildren(ProtoInstance33)
ProtoInstance38 = ProtoInstance()
ProtoInstance38.setName("boxproto")
fieldValue39 = fieldValue()
fieldValue39.setName("xtranslation")
fieldValue39.setValue("2 0 0")

ProtoInstance38.addFieldValue(fieldValue39)
fieldValue40 = fieldValue()
fieldValue40.setName("diffuseColor")
fieldValue40.setValue("1 0 0")
IS41 = IS()
connect42 = connect()
connect42.setNodeField("diffuseColor")
connect42.setProtoField("diffuseColor")

IS41.addConnect(connect42)

fieldValue40.setIS(IS41)

ProtoInstance38.addFieldValue(fieldValue40)

Transform30.addChildren(ProtoInstance38)

ProtoBody29.addChildren(Transform30)

ProtoDeclare25.setProtoBody(ProtoBody29)

Scene7.addChildren(ProtoDeclare25)
ProtoDeclare43 = ProtoDeclare()
ProtoDeclare43.setName("four")
ProtoInterface44 = ProtoInterface()
field45 = field()
field45.setName("ztranslation")
field45.setAccessType("inputOutput")
field45.setType("SFVec3f")
field45.setValue("0 0 0")

ProtoInterface44.addField(field45)
field46 = field()
field46.setName("x1diffuseColor")
field46.setAccessType("inputOutput")
field46.setType("SFColor")
field46.setValue("1 0 0")

ProtoInterface44.addField(field46)
field47 = field()
field47.setName("x2diffuseColor")
field47.setAccessType("inputOutput")
field47.setType("SFColor")
field47.setValue("0 1 0")

ProtoInterface44.addField(field47)

ProtoDeclare43.setProtoInterface(ProtoInterface44)
ProtoBody48 = ProtoBody()
Transform49 = Transform()
IS50 = IS()
connect51 = connect()
connect51.setNodeField("translation")
connect51.setProtoField("ztranslation")

IS50.addConnect(connect51)

Transform49.setIS(IS50)
ProtoInstance52 = ProtoInstance()
ProtoInstance52.setName("two")
fieldValue53 = fieldValue()
fieldValue53.setName("ytranslation")
fieldValue53.setValue("0 0 0")

ProtoInstance52.addFieldValue(fieldValue53)
fieldValue54 = fieldValue()
fieldValue54.setName("diffuseColor")
fieldValue54.setValue("1 0 0")
IS55 = IS()
connect56 = connect()
connect56.setNodeField("diffuseColor")
connect56.setProtoField("x1diffuseColor")

IS55.addConnect(connect56)

fieldValue54.setIS(IS55)

ProtoInstance52.addFieldValue(fieldValue54)

Transform49.addChildren(ProtoInstance52)
ProtoInstance57 = ProtoInstance()
ProtoInstance57.setName("two")
fieldValue58 = fieldValue()
fieldValue58.setName("ytranslation")
fieldValue58.setValue("0 2 0")

ProtoInstance57.addFieldValue(fieldValue58)
fieldValue59 = fieldValue()
fieldValue59.setName("diffuseColor")
fieldValue59.setValue("0 1 0")
IS60 = IS()
connect61 = connect()
connect61.setNodeField("diffuseColor")
connect61.setProtoField("x2diffuseColor")

IS60.addConnect(connect61)

fieldValue59.setIS(IS60)

ProtoInstance57.addFieldValue(fieldValue59)

Transform49.addChildren(ProtoInstance57)

ProtoBody48.addChildren(Transform49)

ProtoDeclare43.setProtoBody(ProtoBody48)

Scene7.addChildren(ProtoDeclare43)
ProtoDeclare62 = ProtoDeclare()
ProtoDeclare62.setName("eight")
ProtoInterface63 = ProtoInterface()
field64 = field()
field64.setName("ttranslation")
field64.setAccessType("inputOutput")
field64.setType("SFVec3f")
field64.setValue("0 0 0")

ProtoInterface63.addField(field64)

ProtoDeclare62.setProtoInterface(ProtoInterface63)
ProtoBody65 = ProtoBody()
Transform66 = Transform()
IS67 = IS()
connect68 = connect()
connect68.setNodeField("translation")
connect68.setProtoField("ttranslation")

IS67.addConnect(connect68)

Transform66.setIS(IS67)
ProtoInstance69 = ProtoInstance()
ProtoInstance69.setName("four")
fieldValue70 = fieldValue()
fieldValue70.setName("ztranslation")
fieldValue70.setValue("0 0 0")

ProtoInstance69.addFieldValue(fieldValue70)
fieldValue71 = fieldValue()
fieldValue71.setName("x1diffuseColor")
fieldValue71.setValue("1 0 0")

ProtoInstance69.addFieldValue(fieldValue71)
fieldValue72 = fieldValue()
fieldValue72.setName("x2diffuseColor")
fieldValue72.setValue("0 1 0")

ProtoInstance69.addFieldValue(fieldValue72)

Transform66.addChildren(ProtoInstance69)
ProtoInstance73 = ProtoInstance()
ProtoInstance73.setName("four")
fieldValue74 = fieldValue()
fieldValue74.setName("ztranslation")
fieldValue74.setValue("0 0 2")

ProtoInstance73.addFieldValue(fieldValue74)
fieldValue75 = fieldValue()
fieldValue75.setName("x1diffuseColor")
fieldValue75.setValue("0 0 1")

ProtoInstance73.addFieldValue(fieldValue75)
fieldValue76 = fieldValue()
fieldValue76.setName("x2diffuseColor")
fieldValue76.setValue("1 1 0")

ProtoInstance73.addFieldValue(fieldValue76)

Transform66.addChildren(ProtoInstance73)

ProtoBody65.addChildren(Transform66)

ProtoDeclare62.setProtoBody(ProtoBody65)

Scene7.addChildren(ProtoDeclare62)
ProtoInstance77 = ProtoInstance()
ProtoInstance77.setName("eight")
fieldValue78 = fieldValue()
fieldValue78.setName("ttranslation")
fieldValue78.setValue("0 0 0")

ProtoInstance77.addFieldValue(fieldValue78)

Scene7.addChildren(ProtoInstance77)
#Axes below <Group> <Group DEF='ArrowGreen'> <Shape> <Cylinder DEF='ArrowCylinder' radius='.025' top='false'/> <Appearance DEF='Green'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone DEF='ArrowCone' bottomRadius='.05' height='.1'/> <Appearance USE='Green'/> </Shape> </Transform> </Group> <Transform translation='0 1.08 0'> <Billboard> <Shape> <Appearance DEF='LABEL_APPEARANCE'> <Material diffuseColor='0 0 0'/> </Appearance> <Text string='\"Y\"'> <FontStyle DEF='LABEL_FONT' family='\"SANS\"' justify='\"MIDDLE\" \"MIDDLE\"' size='.2'/> </Text> </Shape> </Billboard> </Transform> </Group> <Transform rotation='0 0 1 -1.57079'> <Group> <Group DEF='ArrowRed'> <Shape> <Cylinder USE='ArrowCylinder'/> <Appearance DEF='Red'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone USE='ArrowCone'/> <Appearance USE='Red'/> </Shape> </Transform> </Group> <Transform rotation='0 0 1 1.57079' translation='.072 1.1 0'> <Billboard> <Shape> <Appearance USE='LABEL_APPEARANCE'/> <Text string='\"X\"'> <FontStyle USE='LABEL_FONT'/> </Text> </Shape> </Billboard> </Transform> </Group> </Transform> <Transform rotation='1 0 0 1.57079'> <Group> <Group DEF='ArrowBlue'> <Shape> <Cylinder USE='ArrowCylinder'/> <Appearance DEF='Blue'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone USE='ArrowCone'/> <Appearance USE='Blue'/> </Shape> </Transform> </Group> <Transform rotation='1 0 0 -1.57079' translation='0 1.1 .072'> <Billboard> <Shape> <Appearance USE='LABEL_APPEARANCE'/> <Text string='\"Z\"'> <FontStyle USE='LABEL_FONT'/> </Text> </Shape> </Billboard> </Transform> </Group> </Transform>

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/rubikcoord_RoundTrip.x3d")
