import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("3.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("generator")
meta2.setContent("view3dscene, https://castle-engine.io/view3dscene.php")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("source")
meta3.setContent("LOA0ExampleSourceWithDiamonds.wrl")

head1.addMeta(meta3)

X3D0.setHead(head1)
Scene4 = x3d.Scene()
ProtoDeclare5 = x3d.ProtoDeclare()
ProtoDeclare5.setName("Humanoid")
ProtoInterface6 = x3d.ProtoInterface()
field7 = x3d.field()
field7.setName("center")
field7.setAccessType("inputOutput")
field7.setType("SFVec3f")
field7.setValue("0 0 0")

ProtoInterface6.addField(field7)
field8 = x3d.field()
field8.setName("humanoidBody")
field8.setAccessType("inputOutput")
field8.setType("MFNode")

ProtoInterface6.addField(field8)
field9 = x3d.field()
field9.setName("info")
field9.setAccessType("inputOutput")
field9.setType("MFString")

ProtoInterface6.addField(field9)
field10 = x3d.field()
field10.setName("joints")
field10.setAccessType("inputOutput")
field10.setType("MFNode")

ProtoInterface6.addField(field10)
field11 = x3d.field()
field11.setName("name")
field11.setAccessType("inputOutput")
field11.setType("SFString")

ProtoInterface6.addField(field11)
field12 = x3d.field()
field12.setName("rotation")
field12.setAccessType("inputOutput")
field12.setType("SFRotation")
field12.setValue("0 0 1 0")

ProtoInterface6.addField(field12)
field13 = x3d.field()
field13.setName("scale")
field13.setAccessType("inputOutput")
field13.setType("SFVec3f")
field13.setValue("1 1 1")

ProtoInterface6.addField(field13)
field14 = x3d.field()
field14.setName("scaleOrientation")
field14.setAccessType("inputOutput")
field14.setType("SFRotation")
field14.setValue("0 0 1 0")

ProtoInterface6.addField(field14)
field15 = x3d.field()
field15.setName("segments")
field15.setAccessType("inputOutput")
field15.setType("MFNode")

ProtoInterface6.addField(field15)
field16 = x3d.field()
field16.setName("sites")
field16.setAccessType("inputOutput")
field16.setType("MFNode")

ProtoInterface6.addField(field16)
field17 = x3d.field()
field17.setName("translation")
field17.setAccessType("inputOutput")
field17.setType("SFVec3f")
field17.setValue("0 0 0")

ProtoInterface6.addField(field17)
field18 = x3d.field()
field18.setName("version")
field18.setAccessType("inputOutput")
field18.setType("SFString")
field18.setValue("200x")

ProtoInterface6.addField(field18)
field19 = x3d.field()
field19.setName("viewpoints")
field19.setAccessType("inputOutput")
field19.setType("MFNode")

ProtoInterface6.addField(field19)
field20 = x3d.field()
field20.setName("bboxCenter")
field20.setAccessType("initializeOnly")
field20.setType("SFVec3f")
field20.setValue("0 0 0")

ProtoInterface6.addField(field20)
field21 = x3d.field()
field21.setName("bboxSize")
field21.setAccessType("initializeOnly")
field21.setType("SFVec3f")
field21.setValue("-1 -1 -1")

ProtoInterface6.addField(field21)

ProtoDeclare5.setProtoInterface(ProtoInterface6)
ProtoBody22 = x3d.ProtoBody()
Transform23 = x3d.Transform()
Group24 = x3d.Group()
IS25 = x3d.IS()
connect26 = x3d.connect()
connect26.setNodeField("children")
connect26.setProtoField("humanoidBody")

IS25.addConnect(connect26)

Group24.setIS(IS25)

Transform23.addChildren(Group24)
Group27 = x3d.Group()
IS28 = x3d.IS()
connect29 = x3d.connect()
connect29.setNodeField("children")
connect29.setProtoField("viewpoints")

IS28.addConnect(connect29)

Group27.setIS(IS28)

Transform23.addChildren(Group27)
IS30 = x3d.IS()
connect31 = x3d.connect()
connect31.setNodeField("center")
connect31.setProtoField("center")

IS30.addConnect(connect31)
connect32 = x3d.connect()
connect32.setNodeField("rotation")
connect32.setProtoField("rotation")

IS30.addConnect(connect32)
connect33 = x3d.connect()
connect33.setNodeField("scale")
connect33.setProtoField("scale")

IS30.addConnect(connect33)
connect34 = x3d.connect()
connect34.setNodeField("scaleOrientation")
connect34.setProtoField("scaleOrientation")

IS30.addConnect(connect34)
connect35 = x3d.connect()
connect35.setNodeField("translation")
connect35.setProtoField("translation")

IS30.addConnect(connect35)

Transform23.setIS(IS30)

ProtoBody22.addChildren(Transform23)

ProtoDeclare5.setProtoBody(ProtoBody22)

Scene4.addChildren(ProtoDeclare5)
ProtoDeclare36 = x3d.ProtoDeclare()
ProtoDeclare36.setName("Joint")
ProtoInterface37 = x3d.ProtoInterface()
field38 = x3d.field()
field38.setName("center")
field38.setAccessType("inputOutput")
field38.setType("SFVec3f")
field38.setValue("0 0 0")

ProtoInterface37.addField(field38)
field39 = x3d.field()
field39.setName("children")
field39.setAccessType("inputOutput")
field39.setType("MFNode")

ProtoInterface37.addField(field39)
field40 = x3d.field()
field40.setName("limitOrientation")
field40.setAccessType("inputOutput")
field40.setType("SFRotation")
field40.setValue("0 0 1 0")

ProtoInterface37.addField(field40)
field41 = x3d.field()
field41.setName("llimit")
field41.setAccessType("inputOutput")
field41.setType("MFFloat")

ProtoInterface37.addField(field41)
field42 = x3d.field()
field42.setName("name")
field42.setAccessType("inputOutput")
field42.setType("SFString")

ProtoInterface37.addField(field42)
field43 = x3d.field()
field43.setName("rotation")
field43.setAccessType("inputOutput")
field43.setType("SFRotation")
field43.setValue("0 0 1 0")

ProtoInterface37.addField(field43)
field44 = x3d.field()
field44.setName("scale")
field44.setAccessType("inputOutput")
field44.setType("SFVec3f")
field44.setValue("1 1 1")

ProtoInterface37.addField(field44)
field45 = x3d.field()
field45.setName("scaleOrientation")
field45.setAccessType("inputOutput")
field45.setType("SFRotation")
field45.setValue("0 0 1 0")

ProtoInterface37.addField(field45)
field46 = x3d.field()
field46.setName("stiffness")
field46.setAccessType("inputOutput")
field46.setType("MFFloat")
field46.setValue("1 1 1")

ProtoInterface37.addField(field46)
field47 = x3d.field()
field47.setName("translation")
field47.setAccessType("inputOutput")
field47.setType("SFVec3f")
field47.setValue("0 0 0")

ProtoInterface37.addField(field47)
field48 = x3d.field()
field48.setName("ulimit")
field48.setAccessType("inputOutput")
field48.setType("MFFloat")

ProtoInterface37.addField(field48)

ProtoDeclare36.setProtoInterface(ProtoInterface37)
ProtoBody49 = x3d.ProtoBody()
Group50 = x3d.Group()
Transform51 = x3d.Transform()
IS52 = x3d.IS()
connect53 = x3d.connect()
connect53.setNodeField("children")
connect53.setProtoField("children")

IS52.addConnect(connect53)
connect54 = x3d.connect()
connect54.setNodeField("center")
connect54.setProtoField("center")

IS52.addConnect(connect54)
connect55 = x3d.connect()
connect55.setNodeField("rotation")
connect55.setProtoField("rotation")

IS52.addConnect(connect55)
connect56 = x3d.connect()
connect56.setNodeField("scale")
connect56.setProtoField("scale")

IS52.addConnect(connect56)
connect57 = x3d.connect()
connect57.setNodeField("scaleOrientation")
connect57.setProtoField("scaleOrientation")

IS52.addConnect(connect57)
connect58 = x3d.connect()
connect58.setNodeField("translation")
connect58.setProtoField("translation")

IS52.addConnect(connect58)

Transform51.setIS(IS52)

Group50.addChildren(Transform51)
Transform59 = x3d.Transform()
Shape60 = x3d.Shape()
IndexedFaceSet61 = x3d.IndexedFaceSet()
IndexedFaceSet61.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet61.setCreaseAngle(0.5)
Coordinate62 = x3d.Coordinate()
Coordinate62.setPoint([0,0.00999999977648258,0,-0.00999999977648258,0,0,0,0,0.00999999977648258,0.00999999977648258,0,0,0,0,-0.00999999977648258,0,-0.00999999977648258,0])

IndexedFaceSet61.setCoord(Coordinate62)

Shape60.setGeometry(IndexedFaceSet61)
Appearance63 = x3d.Appearance()
Material64 = x3d.Material()
Material64.setDiffuseColor([1,1,0])

Appearance63.setMaterial(Material64)

Shape60.setAppearance(Appearance63)

Transform59.addChildren(Shape60)
IS65 = x3d.IS()
connect66 = x3d.connect()
connect66.setNodeField("translation")
connect66.setProtoField("center")

IS65.addConnect(connect66)

Transform59.setIS(IS65)

Group50.addChildren(Transform59)

ProtoBody49.addChildren(Group50)

ProtoDeclare36.setProtoBody(ProtoBody49)

Scene4.addChildren(ProtoDeclare36)
ProtoDeclare67 = x3d.ProtoDeclare()
ProtoDeclare67.setName("Segment")
ProtoInterface68 = x3d.ProtoInterface()
field69 = x3d.field()
field69.setName("addChildren")
field69.setAccessType("inputOnly")
field69.setType("MFNode")

ProtoInterface68.addField(field69)
field70 = x3d.field()
field70.setName("removeChildren")
field70.setAccessType("inputOnly")
field70.setType("MFNode")

ProtoInterface68.addField(field70)
field71 = x3d.field()
field71.setName("centerOfMass")
field71.setAccessType("inputOutput")
field71.setType("SFVec3f")
field71.setValue("0 0 0")

ProtoInterface68.addField(field71)
field72 = x3d.field()
field72.setName("children")
field72.setAccessType("inputOutput")
field72.setType("MFNode")

ProtoInterface68.addField(field72)
field73 = x3d.field()
field73.setName("coord")
field73.setAccessType("inputOutput")
field73.setType("SFNode")
field73.setValue()

ProtoInterface68.addField(field73)
field74 = x3d.field()
field74.setName("displacers")
field74.setAccessType("inputOutput")
field74.setType("MFNode")

ProtoInterface68.addField(field74)
field75 = x3d.field()
field75.setName("name")
field75.setAccessType("inputOutput")
field75.setType("SFString")

ProtoInterface68.addField(field75)
field76 = x3d.field()
field76.setName("mass")
field76.setAccessType("inputOutput")
field76.setType("SFFloat")
field76.setValue("0")

ProtoInterface68.addField(field76)
field77 = x3d.field()
field77.setName("momentsOfInertia")
field77.setAccessType("inputOutput")
field77.setType("SFVec3f")
field77.setValue("1 1 1")

ProtoInterface68.addField(field77)
field78 = x3d.field()
field78.setName("bboxCenter")
field78.setAccessType("initializeOnly")
field78.setType("SFVec3f")
field78.setValue("0 0 0")

ProtoInterface68.addField(field78)
field79 = x3d.field()
field79.setName("bboxSize")
field79.setAccessType("initializeOnly")
field79.setType("SFVec3f")
field79.setValue("-1 -1 -1")

ProtoInterface68.addField(field79)

ProtoDeclare67.setProtoInterface(ProtoInterface68)
ProtoBody80 = x3d.ProtoBody()
Group81 = x3d.Group()
IS82 = x3d.IS()
connect83 = x3d.connect()
connect83.setNodeField("children")
connect83.setProtoField("children")

IS82.addConnect(connect83)
connect84 = x3d.connect()
connect84.setNodeField("bboxCenter")
connect84.setProtoField("bboxCenter")

IS82.addConnect(connect84)
connect85 = x3d.connect()
connect85.setNodeField("bboxSize")
connect85.setProtoField("bboxSize")

IS82.addConnect(connect85)
connect86 = x3d.connect()
connect86.setNodeField("addChildren")
connect86.setProtoField("addChildren")

IS82.addConnect(connect86)
connect87 = x3d.connect()
connect87.setNodeField("removeChildren")
connect87.setProtoField("removeChildren")

IS82.addConnect(connect87)

Group81.setIS(IS82)

ProtoBody80.addChildren(Group81)

ProtoDeclare67.setProtoBody(ProtoBody80)

Scene4.addChildren(ProtoDeclare67)
ProtoDeclare88 = x3d.ProtoDeclare()
ProtoDeclare88.setName("Site")
ProtoInterface89 = x3d.ProtoInterface()
field90 = x3d.field()
field90.setName("addChildren")
field90.setAccessType("inputOnly")
field90.setType("MFNode")

ProtoInterface89.addField(field90)
field91 = x3d.field()
field91.setName("removeChildren")
field91.setAccessType("inputOnly")
field91.setType("MFNode")

ProtoInterface89.addField(field91)
field92 = x3d.field()
field92.setName("center")
field92.setAccessType("inputOutput")
field92.setType("SFVec3f")
field92.setValue("0 0 0")

ProtoInterface89.addField(field92)
field93 = x3d.field()
field93.setName("children")
field93.setAccessType("inputOutput")
field93.setType("MFNode")

ProtoInterface89.addField(field93)
field94 = x3d.field()
field94.setName("name")
field94.setAccessType("inputOutput")
field94.setType("SFString")

ProtoInterface89.addField(field94)
field95 = x3d.field()
field95.setName("rotation")
field95.setAccessType("inputOutput")
field95.setType("SFRotation")
field95.setValue("0 0 1 0")

ProtoInterface89.addField(field95)
field96 = x3d.field()
field96.setName("scale")
field96.setAccessType("inputOutput")
field96.setType("SFVec3f")
field96.setValue("1 1 1")

ProtoInterface89.addField(field96)
field97 = x3d.field()
field97.setName("scaleOrientation")
field97.setAccessType("inputOutput")
field97.setType("SFRotation")
field97.setValue("0 0 1 0")

ProtoInterface89.addField(field97)
field98 = x3d.field()
field98.setName("translation")
field98.setAccessType("inputOutput")
field98.setType("SFVec3f")
field98.setValue("0 0 0")

ProtoInterface89.addField(field98)

ProtoDeclare88.setProtoInterface(ProtoInterface89)
ProtoBody99 = x3d.ProtoBody()
Transform100 = x3d.Transform()
IS101 = x3d.IS()
connect102 = x3d.connect()
connect102.setNodeField("children")
connect102.setProtoField("children")

IS101.addConnect(connect102)
connect103 = x3d.connect()
connect103.setNodeField("center")
connect103.setProtoField("center")

IS101.addConnect(connect103)
connect104 = x3d.connect()
connect104.setNodeField("rotation")
connect104.setProtoField("rotation")

IS101.addConnect(connect104)
connect105 = x3d.connect()
connect105.setNodeField("scale")
connect105.setProtoField("scale")

IS101.addConnect(connect105)
connect106 = x3d.connect()
connect106.setNodeField("scaleOrientation")
connect106.setProtoField("scaleOrientation")

IS101.addConnect(connect106)
connect107 = x3d.connect()
connect107.setNodeField("translation")
connect107.setProtoField("translation")

IS101.addConnect(connect107)
connect108 = x3d.connect()
connect108.setNodeField("addChildren")
connect108.setProtoField("addChildren")

IS101.addConnect(connect108)
connect109 = x3d.connect()
connect109.setNodeField("removeChildren")
connect109.setProtoField("removeChildren")

IS101.addConnect(connect109)

Transform100.setIS(IS101)

ProtoBody99.addChildren(Transform100)

ProtoDeclare88.setProtoBody(ProtoBody99)

Scene4.addChildren(ProtoDeclare88)
ProtoInstance110 = x3d.ProtoInstance()
ProtoInstance110.setName("Humanoid")
ProtoInstance110.setDEF("humanoid_2")
fieldValue111 = x3d.fieldValue()
fieldValue111.setName("humanoidBody")
ProtoInstance112 = x3d.ProtoInstance()
ProtoInstance112.setName("Joint")
ProtoInstance112.setDEF("hanim_humanoid_root_2")
fieldValue113 = x3d.fieldValue()
fieldValue113.setName("stiffness")
fieldValue113.setValue("1 1 1")

ProtoInstance112.addFieldValue(fieldValue113)
fieldValue114 = x3d.fieldValue()
fieldValue114.setName("name")
fieldValue114.setValue("humanoid_root")

ProtoInstance112.addFieldValue(fieldValue114)
fieldValue115 = x3d.fieldValue()
fieldValue115.setName("center")
fieldValue115.setValue("0 0.824000000953674 0.0276999995112419")

ProtoInstance112.addFieldValue(fieldValue115)
fieldValue116 = x3d.fieldValue()
fieldValue116.setName("children")
ProtoInstance117 = x3d.ProtoInstance()
ProtoInstance117.setName("Segment")
ProtoInstance117.setDEF("hanim_sacrum_2")
fieldValue118 = x3d.fieldValue()
fieldValue118.setName("name")
fieldValue118.setValue("sacrum")

ProtoInstance117.addFieldValue(fieldValue118)
fieldValue119 = x3d.fieldValue()
fieldValue119.setName("children")
ProtoInstance120 = x3d.ProtoInstance()
ProtoInstance120.setName("Site")
ProtoInstance120.setDEF("hanim_skull_tip_2")
fieldValue121 = x3d.fieldValue()
fieldValue121.setName("name")
fieldValue121.setValue("skull_tip")

ProtoInstance120.addFieldValue(fieldValue121)
fieldValue122 = x3d.fieldValue()
fieldValue122.setName("translation")
fieldValue122.setValue("0.00499999988824129 1.75039994716644 0.00549999997019768")

ProtoInstance120.addFieldValue(fieldValue122)

fieldValue119.addChildren(ProtoInstance120)
ProtoInstance123 = x3d.ProtoInstance()
ProtoInstance123.setName("Site")
ProtoInstance123.setDEF("hanim_sellion_2")
fieldValue124 = x3d.fieldValue()
fieldValue124.setName("name")
fieldValue124.setValue("sellion")

ProtoInstance123.addFieldValue(fieldValue124)
fieldValue125 = x3d.fieldValue()
fieldValue125.setName("translation")
fieldValue125.setValue("0.00579999992623925 1.63160002231598 0.0851999968290329")

ProtoInstance123.addFieldValue(fieldValue125)

fieldValue119.addChildren(ProtoInstance123)
ProtoInstance126 = x3d.ProtoInstance()
ProtoInstance126.setName("Site")
ProtoInstance126.setDEF("hanim_r_infraorbitale_2")
fieldValue127 = x3d.fieldValue()
fieldValue127.setName("name")
fieldValue127.setValue("r_infraorbitale")

ProtoInstance126.addFieldValue(fieldValue127)
fieldValue128 = x3d.fieldValue()
fieldValue128.setName("translation")
fieldValue128.setValue("-0.023700000718236 1.61710000038147 0.0751999989151955")

ProtoInstance126.addFieldValue(fieldValue128)

fieldValue119.addChildren(ProtoInstance126)
ProtoInstance129 = x3d.ProtoInstance()
ProtoInstance129.setName("Site")
ProtoInstance129.setDEF("hanim_l_infraorbitale_2")
fieldValue130 = x3d.fieldValue()
fieldValue130.setName("name")
fieldValue130.setValue("l_infraorbitale")

ProtoInstance129.addFieldValue(fieldValue130)
fieldValue131 = x3d.fieldValue()
fieldValue131.setName("translation")
fieldValue131.setValue("0.0340999998152256 1.61710000038147 0.0751999989151955")

ProtoInstance129.addFieldValue(fieldValue131)

fieldValue119.addChildren(ProtoInstance129)
ProtoInstance132 = x3d.ProtoInstance()
ProtoInstance132.setName("Site")
ProtoInstance132.setDEF("hanim_supramenton_2")
fieldValue133 = x3d.fieldValue()
fieldValue133.setName("name")
fieldValue133.setValue("supramenton")

ProtoInstance132.addFieldValue(fieldValue133)
fieldValue134 = x3d.fieldValue()
fieldValue134.setName("translation")
fieldValue134.setValue("0.00609999988228083 1.54100000858307 0.0804999992251396")

ProtoInstance132.addFieldValue(fieldValue134)

fieldValue119.addChildren(ProtoInstance132)
ProtoInstance135 = x3d.ProtoInstance()
ProtoInstance135.setName("Site")
ProtoInstance135.setDEF("hanim_r_tragion_2")
fieldValue136 = x3d.fieldValue()
fieldValue136.setName("name")
fieldValue136.setValue("r_tragion")

ProtoInstance135.addFieldValue(fieldValue136)
fieldValue137 = x3d.fieldValue()
fieldValue137.setName("translation")
fieldValue137.setValue("-0.0645999982953072 1.63469994068146 0.0302000008523464")

ProtoInstance135.addFieldValue(fieldValue137)

fieldValue119.addChildren(ProtoInstance135)
ProtoInstance138 = x3d.ProtoInstance()
ProtoInstance138.setName("Site")
ProtoInstance138.setDEF("hanim_r_gonion_2")
fieldValue139 = x3d.fieldValue()
fieldValue139.setName("name")
fieldValue139.setValue("r_gonion")

ProtoInstance138.addFieldValue(fieldValue139)
fieldValue140 = x3d.fieldValue()
fieldValue140.setName("translation")
fieldValue140.setValue("-0.0520000010728836 1.55289995670319 0.0346999987959862")

ProtoInstance138.addFieldValue(fieldValue140)

fieldValue119.addChildren(ProtoInstance138)
ProtoInstance141 = x3d.ProtoInstance()
ProtoInstance141.setName("Site")
ProtoInstance141.setDEF("hanim_l_tragion_2")
fieldValue142 = x3d.fieldValue()
fieldValue142.setName("name")
fieldValue142.setValue("l_tragion")

ProtoInstance141.addFieldValue(fieldValue142)
fieldValue143 = x3d.fieldValue()
fieldValue143.setName("translation")
fieldValue143.setValue("0.0738999992609024 1.63479995727539 0.0282000005245209")

ProtoInstance141.addFieldValue(fieldValue143)

fieldValue119.addChildren(ProtoInstance141)
ProtoInstance144 = x3d.ProtoInstance()
ProtoInstance144.setName("Site")
ProtoInstance144.setDEF("hanim_l_gonion_2")
fieldValue145 = x3d.fieldValue()
fieldValue145.setName("name")
fieldValue145.setValue("l_gonion")

ProtoInstance144.addFieldValue(fieldValue145)
fieldValue146 = x3d.fieldValue()
fieldValue146.setName("translation")
fieldValue146.setValue("0.0631000027060509 1.55299997329712 0.0329999998211861")

ProtoInstance144.addFieldValue(fieldValue146)

fieldValue119.addChildren(ProtoInstance144)
ProtoInstance147 = x3d.ProtoInstance()
ProtoInstance147.setName("Site")
ProtoInstance147.setDEF("hanim_nuchale_2")
fieldValue148 = x3d.fieldValue()
fieldValue148.setName("name")
fieldValue148.setValue("nuchale")

ProtoInstance147.addFieldValue(fieldValue148)
fieldValue149 = x3d.fieldValue()
fieldValue149.setName("translation")
fieldValue149.setValue("0.00389999989420176 1.59720003604889 -0.0795999988913536")

ProtoInstance147.addFieldValue(fieldValue149)

fieldValue119.addChildren(ProtoInstance147)
ProtoInstance150 = x3d.ProtoInstance()
ProtoInstance150.setName("Site")
ProtoInstance150.setDEF("hanim_r_clavicale_2")
fieldValue151 = x3d.fieldValue()
fieldValue151.setName("name")
fieldValue151.setValue("r_clavicale")

ProtoInstance150.addFieldValue(fieldValue151)
fieldValue152 = x3d.fieldValue()
fieldValue152.setName("translation")
fieldValue152.setValue("-0.0115000000223517 1.49430000782013 0.0399999991059303")

ProtoInstance150.addFieldValue(fieldValue152)

fieldValue119.addChildren(ProtoInstance150)
ProtoInstance153 = x3d.ProtoInstance()
ProtoInstance153.setName("Site")
ProtoInstance153.setDEF("hanim_suprasternale_2")
fieldValue154 = x3d.fieldValue()
fieldValue154.setName("name")
fieldValue154.setValue("suprasternale")

ProtoInstance153.addFieldValue(fieldValue154)
fieldValue155 = x3d.fieldValue()
fieldValue155.setName("translation")
fieldValue155.setValue("0.00839999970048666 1.47140002250671 0.0551000013947487")

ProtoInstance153.addFieldValue(fieldValue155)

fieldValue119.addChildren(ProtoInstance153)
ProtoInstance156 = x3d.ProtoInstance()
ProtoInstance156.setName("Site")
ProtoInstance156.setDEF("hanim_l_clavicale_2")
fieldValue157 = x3d.fieldValue()
fieldValue157.setName("name")
fieldValue157.setValue("l_clavicale")

ProtoInstance156.addFieldValue(fieldValue157)
fieldValue158 = x3d.fieldValue()
fieldValue158.setName("translation")
fieldValue158.setValue("0.0271000005304813 1.49430000782013 0.0394000001251698")

ProtoInstance156.addFieldValue(fieldValue158)

fieldValue119.addChildren(ProtoInstance156)
ProtoInstance159 = x3d.ProtoInstance()
ProtoInstance159.setName("Site")
ProtoInstance159.setDEF("hanim_r_thelion_2")
fieldValue160 = x3d.fieldValue()
fieldValue160.setName("name")
fieldValue160.setValue("r_thelion")

ProtoInstance159.addFieldValue(fieldValue160)
fieldValue161 = x3d.fieldValue()
fieldValue161.setName("translation")
fieldValue161.setValue("-0.0736000016331673 1.33850002288818 0.121699996292591")

ProtoInstance159.addFieldValue(fieldValue161)

fieldValue119.addChildren(ProtoInstance159)
ProtoInstance162 = x3d.ProtoInstance()
ProtoInstance162.setName("Site")
ProtoInstance162.setDEF("hanim_l_thelion_2")
fieldValue163 = x3d.fieldValue()
fieldValue163.setName("name")
fieldValue163.setValue("l_thelion")

ProtoInstance162.addFieldValue(fieldValue163)
fieldValue164 = x3d.fieldValue()
fieldValue164.setName("translation")
fieldValue164.setValue("0.0917999967932701 1.33819997310638 0.119199998676777")

ProtoInstance162.addFieldValue(fieldValue164)

fieldValue119.addChildren(ProtoInstance162)
ProtoInstance165 = x3d.ProtoInstance()
ProtoInstance165.setName("Site")
ProtoInstance165.setDEF("hanim_substernale_2")
fieldValue166 = x3d.fieldValue()
fieldValue166.setName("name")
fieldValue166.setValue("substernale")

ProtoInstance165.addFieldValue(fieldValue166)
fieldValue167 = x3d.fieldValue()
fieldValue167.setName("translation")
fieldValue167.setValue("0.008500000461936 1.29949998855591 0.114699997007847")

ProtoInstance165.addFieldValue(fieldValue167)

fieldValue119.addChildren(ProtoInstance165)
ProtoInstance168 = x3d.ProtoInstance()
ProtoInstance168.setName("Site")
ProtoInstance168.setDEF("hanim_r_rib10_2")
fieldValue169 = x3d.fieldValue()
fieldValue169.setName("name")
fieldValue169.setValue("r_rib10")

ProtoInstance168.addFieldValue(fieldValue169)
fieldValue170 = x3d.fieldValue()
fieldValue170.setName("translation")
fieldValue170.setValue("-0.0710999965667725 1.19410002231598 0.101599998772144")

ProtoInstance168.addFieldValue(fieldValue170)

fieldValue119.addChildren(ProtoInstance168)
ProtoInstance171 = x3d.ProtoInstance()
ProtoInstance171.setName("Site")
ProtoInstance171.setDEF("hanim_r_asis_2")
fieldValue172 = x3d.fieldValue()
fieldValue172.setName("name")
fieldValue172.setValue("r_asis")

ProtoInstance171.addFieldValue(fieldValue172)
fieldValue173 = x3d.fieldValue()
fieldValue173.setName("translation")
fieldValue173.setValue("-0.088699996471405 1.00209999084473 0.111199997365475")

ProtoInstance171.addFieldValue(fieldValue173)

fieldValue119.addChildren(ProtoInstance171)
ProtoInstance174 = x3d.ProtoInstance()
ProtoInstance174.setName("Site")
ProtoInstance174.setDEF("hanim_l_rib10_2")
fieldValue175 = x3d.fieldValue()
fieldValue175.setName("name")
fieldValue175.setValue("l_rib10")

ProtoInstance174.addFieldValue(fieldValue175)
fieldValue176 = x3d.fieldValue()
fieldValue176.setName("translation")
fieldValue176.setValue("0.0870999991893768 1.19249999523163 0.099200002849102")

ProtoInstance174.addFieldValue(fieldValue176)

fieldValue119.addChildren(ProtoInstance174)
ProtoInstance177 = x3d.ProtoInstance()
ProtoInstance177.setName("Site")
ProtoInstance177.setDEF("hanim_l_asis_2")
fieldValue178 = x3d.fieldValue()
fieldValue178.setName("name")
fieldValue178.setValue("l_asis")

ProtoInstance177.addFieldValue(fieldValue178)
fieldValue179 = x3d.fieldValue()
fieldValue179.setName("translation")
fieldValue179.setValue("0.0925000011920929 0.998300015926361 0.105200000107288")

ProtoInstance177.addFieldValue(fieldValue179)

fieldValue119.addChildren(ProtoInstance177)
ProtoInstance180 = x3d.ProtoInstance()
ProtoInstance180.setName("Site")
ProtoInstance180.setDEF("hanim_r_iliocristale_2")
fieldValue181 = x3d.fieldValue()
fieldValue181.setName("name")
fieldValue181.setValue("r_iliocristale")

ProtoInstance180.addFieldValue(fieldValue181)
fieldValue182 = x3d.fieldValue()
fieldValue182.setName("translation")
fieldValue182.setValue("-0.152500003576279 1.0628000497818 0.00350000010803342")

ProtoInstance180.addFieldValue(fieldValue182)

fieldValue119.addChildren(ProtoInstance180)
ProtoInstance183 = x3d.ProtoInstance()
ProtoInstance183.setName("Site")
ProtoInstance183.setDEF("hanim_r_trochanterion_2")
fieldValue184 = x3d.fieldValue()
fieldValue184.setName("name")
fieldValue184.setValue("r_trochanterion")

ProtoInstance183.addFieldValue(fieldValue184)
fieldValue185 = x3d.fieldValue()
fieldValue185.setName("translation")
fieldValue185.setValue("-0.16889999806881 0.841899991035461 0.0351999998092651")

ProtoInstance183.addFieldValue(fieldValue185)

fieldValue119.addChildren(ProtoInstance183)
ProtoInstance186 = x3d.ProtoInstance()
ProtoInstance186.setName("Site")
ProtoInstance186.setDEF("hanim_l_iliocristale_2")
fieldValue187 = x3d.fieldValue()
fieldValue187.setName("name")
fieldValue187.setValue("l_iliocristale")

ProtoInstance186.addFieldValue(fieldValue187)
fieldValue188 = x3d.fieldValue()
fieldValue188.setName("translation")
fieldValue188.setValue("0.161200001835823 1.05369997024536 0.0007999999797903")

ProtoInstance186.addFieldValue(fieldValue188)

fieldValue119.addChildren(ProtoInstance186)
ProtoInstance189 = x3d.ProtoInstance()
ProtoInstance189.setName("Site")
ProtoInstance189.setDEF("hanim_l_trochanterion_2")
fieldValue190 = x3d.fieldValue()
fieldValue190.setName("name")
fieldValue190.setValue("l_trochanterion")

ProtoInstance189.addFieldValue(fieldValue190)
fieldValue191 = x3d.fieldValue()
fieldValue191.setName("translation")
fieldValue191.setValue("0.167699992656708 0.833599984645844 0.0303000006824732")

ProtoInstance189.addFieldValue(fieldValue191)

fieldValue119.addChildren(ProtoInstance189)
ProtoInstance192 = x3d.ProtoInstance()
ProtoInstance192.setName("Site")
ProtoInstance192.setDEF("hanim_cervicale_2")
fieldValue193 = x3d.fieldValue()
fieldValue193.setName("name")
fieldValue193.setValue("cervicale")

ProtoInstance192.addFieldValue(fieldValue193)
fieldValue194 = x3d.fieldValue()
fieldValue194.setName("translation")
fieldValue194.setValue("0.0063999998383224 1.51999998092651 -0.0815000012516975")

ProtoInstance192.addFieldValue(fieldValue194)

fieldValue119.addChildren(ProtoInstance192)
ProtoInstance195 = x3d.ProtoInstance()
ProtoInstance195.setName("Site")
ProtoInstance195.setDEF("hanim_spine_2_lower_back_2")
fieldValue196 = x3d.fieldValue()
fieldValue196.setName("name")
fieldValue196.setValue("spine_2_lower_back")

ProtoInstance195.addFieldValue(fieldValue196)
fieldValue197 = x3d.fieldValue()
fieldValue197.setName("translation")
fieldValue197.setValue("0.00490000005811453 1.19079995155334 -0.111299999058247")

ProtoInstance195.addFieldValue(fieldValue197)

fieldValue119.addChildren(ProtoInstance195)
ProtoInstance198 = x3d.ProtoInstance()
ProtoInstance198.setName("Site")
ProtoInstance198.setDEF("hanim_r_psis_2")
fieldValue199 = x3d.fieldValue()
fieldValue199.setName("name")
fieldValue199.setValue("r_psis")

ProtoInstance198.addFieldValue(fieldValue199)
fieldValue200 = x3d.fieldValue()
fieldValue200.setName("translation")
fieldValue200.setValue("-0.0715999975800514 1.01900005340576 -0.113799996674061")

ProtoInstance198.addFieldValue(fieldValue200)

fieldValue119.addChildren(ProtoInstance198)
ProtoInstance201 = x3d.ProtoInstance()
ProtoInstance201.setName("Site")
ProtoInstance201.setDEF("hanim_l_psis_2")
fieldValue202 = x3d.fieldValue()
fieldValue202.setName("name")
fieldValue202.setValue("l_psis")

ProtoInstance201.addFieldValue(fieldValue202)
fieldValue203 = x3d.fieldValue()
fieldValue203.setName("translation")
fieldValue203.setValue("0.0773999989032745 1.01900005340576 -0.115099996328354")

ProtoInstance201.addFieldValue(fieldValue203)

fieldValue119.addChildren(ProtoInstance201)
ProtoInstance204 = x3d.ProtoInstance()
ProtoInstance204.setName("Site")
ProtoInstance204.setDEF("hanim_waist_preferred_posterior_2")
fieldValue205 = x3d.fieldValue()
fieldValue205.setName("name")
fieldValue205.setValue("waist_preferred_posterior")

ProtoInstance204.addFieldValue(fieldValue205)
fieldValue206 = x3d.fieldValue()
fieldValue206.setName("translation")
fieldValue206.setValue("0.28999999165535 1.09150004386902 -0.109099999070168")

ProtoInstance204.addFieldValue(fieldValue206)

fieldValue119.addChildren(ProtoInstance204)
ProtoInstance207 = x3d.ProtoInstance()
ProtoInstance207.setName("Site")
ProtoInstance207.setDEF("hanim_r_acromion_2")
fieldValue208 = x3d.fieldValue()
fieldValue208.setName("name")
fieldValue208.setValue("r_acromion")

ProtoInstance207.addFieldValue(fieldValue208)
fieldValue209 = x3d.fieldValue()
fieldValue209.setName("translation")
fieldValue209.setValue("-0.190500006079674 1.47909998893738 -0.0430999994277954")

ProtoInstance207.addFieldValue(fieldValue209)

fieldValue119.addChildren(ProtoInstance207)
ProtoInstance210 = x3d.ProtoInstance()
ProtoInstance210.setName("Site")
ProtoInstance210.setDEF("hanim_r_axilla_proximal_2")
fieldValue211 = x3d.fieldValue()
fieldValue211.setName("name")
fieldValue211.setValue("r_axilla_proximal")

ProtoInstance210.addFieldValue(fieldValue211)
fieldValue212 = x3d.fieldValue()
fieldValue212.setName("translation")
fieldValue212.setValue("-0.162599995732307 1.40719997882843 -0.00310000008903444")

ProtoInstance210.addFieldValue(fieldValue212)

fieldValue119.addChildren(ProtoInstance210)
ProtoInstance213 = x3d.ProtoInstance()
ProtoInstance213.setName("Site")
ProtoInstance213.setDEF("hanim_r_radial_styloid_2")
fieldValue214 = x3d.fieldValue()
fieldValue214.setName("name")
fieldValue214.setValue("r_radial_styloid")

ProtoInstance213.addFieldValue(fieldValue214)
fieldValue215 = x3d.fieldValue()
fieldValue215.setName("translation")
fieldValue215.setValue("-0.188400000333786 0.86760002374649 -0.0359999984502792")

ProtoInstance213.addFieldValue(fieldValue215)

fieldValue119.addChildren(ProtoInstance213)
ProtoInstance216 = x3d.ProtoInstance()
ProtoInstance216.setName("Site")
ProtoInstance216.setDEF("hanim_r_axilla_distal_2")
fieldValue217 = x3d.fieldValue()
fieldValue217.setName("name")
fieldValue217.setValue("r_axilla_distal")

ProtoInstance216.addFieldValue(fieldValue217)
fieldValue218 = x3d.fieldValue()
fieldValue218.setName("translation")
fieldValue218.setValue("-0.160300001502037 1.40980005264282 -0.0825999975204468")

ProtoInstance216.addFieldValue(fieldValue218)

fieldValue119.addChildren(ProtoInstance216)
ProtoInstance219 = x3d.ProtoInstance()
ProtoInstance219.setName("Site")
ProtoInstance219.setDEF("hanim_r_olecranon_2")
fieldValue220 = x3d.fieldValue()
fieldValue220.setName("name")
fieldValue220.setValue("r_olecranon")

ProtoInstance219.addFieldValue(fieldValue220)
fieldValue221 = x3d.fieldValue()
fieldValue221.setName("translation")
fieldValue221.setValue("-0.190699994564056 1.14049994945526 -0.106499999761581")

ProtoInstance219.addFieldValue(fieldValue221)

fieldValue119.addChildren(ProtoInstance219)
ProtoInstance222 = x3d.ProtoInstance()
ProtoInstance222.setName("Site")
ProtoInstance222.setDEF("hanim_r_humeral_lateral_epicondyles_2")
fieldValue223 = x3d.fieldValue()
fieldValue223.setName("name")
fieldValue223.setValue("r_humeral_lateral_epicondyles")

ProtoInstance222.addFieldValue(fieldValue223)
fieldValue224 = x3d.fieldValue()
fieldValue224.setName("translation")
fieldValue224.setValue("-0.222399994730949 1.15170001983643 -0.103299997746944")

ProtoInstance222.addFieldValue(fieldValue224)

fieldValue119.addChildren(ProtoInstance222)
ProtoInstance225 = x3d.ProtoInstance()
ProtoInstance225.setName("Site")
ProtoInstance225.setDEF("hanim_r_humeral_medial_epicondyles_2")
fieldValue226 = x3d.fieldValue()
fieldValue226.setName("name")
fieldValue226.setValue("r_humeral_medial_epicondyles")

ProtoInstance225.addFieldValue(fieldValue226)
fieldValue227 = x3d.fieldValue()
fieldValue227.setName("translation")
fieldValue227.setValue("-0.167999997735024 1.12979996204376 -0.106200002133846")

ProtoInstance225.addFieldValue(fieldValue227)

fieldValue119.addChildren(ProtoInstance225)
ProtoInstance228 = x3d.ProtoInstance()
ProtoInstance228.setName("Site")
ProtoInstance228.setDEF("hanim_r_radiale_2")
fieldValue229 = x3d.fieldValue()
fieldValue229.setName("name")
fieldValue229.setValue("r_radiale")

ProtoInstance228.addFieldValue(fieldValue229)
fieldValue230 = x3d.fieldValue()
fieldValue230.setName("translation")
fieldValue230.setValue("-0.212999999523163 1.130499958992 -0.109099999070168")

ProtoInstance228.addFieldValue(fieldValue230)

fieldValue119.addChildren(ProtoInstance228)
ProtoInstance231 = x3d.ProtoInstance()
ProtoInstance231.setName("Site")
ProtoInstance231.setDEF("hanim_r_metacarpal_phalanx3")
fieldValue232 = x3d.fieldValue()
fieldValue232.setName("name")
fieldValue232.setValue("r_metacarpal_phalanx_2")

ProtoInstance231.addFieldValue(fieldValue232)
fieldValue233 = x3d.fieldValue()
fieldValue233.setName("translation")
fieldValue233.setValue("-0.197699993848801 0.816900014877319 -0.0176999997347593")

ProtoInstance231.addFieldValue(fieldValue233)

fieldValue119.addChildren(ProtoInstance231)
ProtoInstance234 = x3d.ProtoInstance()
ProtoInstance234.setName("Site")
ProtoInstance234.setDEF("hanim_r_dactylion_2")
fieldValue235 = x3d.fieldValue()
fieldValue235.setName("name")
fieldValue235.setValue("r_dactylion")

ProtoInstance234.addFieldValue(fieldValue235)
fieldValue236 = x3d.fieldValue()
fieldValue236.setName("translation")
fieldValue236.setValue("-0.194100007414818 0.677200019359589 -0.0423000007867813")

ProtoInstance234.addFieldValue(fieldValue236)

fieldValue119.addChildren(ProtoInstance234)
ProtoInstance237 = x3d.ProtoInstance()
ProtoInstance237.setName("Site")
ProtoInstance237.setDEF("hanim_r_ulnar_styloid_2")
fieldValue238 = x3d.fieldValue()
fieldValue238.setName("name")
fieldValue238.setValue("r_ulnar_styloid")

ProtoInstance237.addFieldValue(fieldValue238)
fieldValue239 = x3d.fieldValue()
fieldValue239.setName("translation")
fieldValue239.setValue("-0.21170000731945 0.856199979782104 -0.0584000013768673")

ProtoInstance237.addFieldValue(fieldValue239)

fieldValue119.addChildren(ProtoInstance237)
ProtoInstance240 = x3d.ProtoInstance()
ProtoInstance240.setName("Site")
ProtoInstance240.setDEF("hanim_r_metacarpal_phalanx6")
fieldValue241 = x3d.fieldValue()
fieldValue241.setName("name")
fieldValue241.setValue("r_metacarpal_phalanx_5")

ProtoInstance240.addFieldValue(fieldValue241)
fieldValue242 = x3d.fieldValue()
fieldValue242.setName("translation")
fieldValue242.setValue("-0.192900002002716 0.788999974727631 -0.10639999806881")

ProtoInstance240.addFieldValue(fieldValue242)

fieldValue119.addChildren(ProtoInstance240)
ProtoInstance243 = x3d.ProtoInstance()
ProtoInstance243.setName("Site")
ProtoInstance243.setDEF("hanim_l_acromion_2")
fieldValue244 = x3d.fieldValue()
fieldValue244.setName("name")
fieldValue244.setValue("l_acromion")

ProtoInstance243.addFieldValue(fieldValue244)
fieldValue245 = x3d.fieldValue()
fieldValue245.setName("translation")
fieldValue245.setValue("0.203199997544289 1.47599995136261 -0.0489999987185001")

ProtoInstance243.addFieldValue(fieldValue245)

fieldValue119.addChildren(ProtoInstance243)
ProtoInstance246 = x3d.ProtoInstance()
ProtoInstance246.setName("Site")
ProtoInstance246.setDEF("hanim_l_axilla_proximal_2")
fieldValue247 = x3d.fieldValue()
fieldValue247.setName("name")
fieldValue247.setValue("l_axilla_proximal")

ProtoInstance246.addFieldValue(fieldValue247)
fieldValue248 = x3d.fieldValue()
fieldValue248.setName("translation")
fieldValue248.setValue("0.177699998021126 1.40649998188019 -0.00749999983236194")

ProtoInstance246.addFieldValue(fieldValue248)

fieldValue119.addChildren(ProtoInstance246)
ProtoInstance249 = x3d.ProtoInstance()
ProtoInstance249.setName("Site")
ProtoInstance249.setDEF("hanim_l_radial_styloid_2")
fieldValue250 = x3d.fieldValue()
fieldValue250.setName("name")
fieldValue250.setValue("l_radial_styloid")

ProtoInstance249.addFieldValue(fieldValue250)
fieldValue251 = x3d.fieldValue()
fieldValue251.setName("translation")
fieldValue251.setValue("0.190099999308586 0.864499986171722 -0.0414999984204769")

ProtoInstance249.addFieldValue(fieldValue251)

fieldValue119.addChildren(ProtoInstance249)
ProtoInstance252 = x3d.ProtoInstance()
ProtoInstance252.setName("Site")
ProtoInstance252.setDEF("hanim_l_axilla_distal_2")
fieldValue253 = x3d.fieldValue()
fieldValue253.setName("name")
fieldValue253.setValue("l_axilla_distal")

ProtoInstance252.addFieldValue(fieldValue253)
fieldValue254 = x3d.fieldValue()
fieldValue254.setName("translation")
fieldValue254.setValue("0.17059999704361 1.40719997882843 -0.0874999985098839")

ProtoInstance252.addFieldValue(fieldValue254)

fieldValue119.addChildren(ProtoInstance252)
ProtoInstance255 = x3d.ProtoInstance()
ProtoInstance255.setName("Site")
ProtoInstance255.setDEF("hanim_l_olecranon_2")
fieldValue256 = x3d.fieldValue()
fieldValue256.setName("name")
fieldValue256.setValue("l_olecranon")

ProtoInstance255.addFieldValue(fieldValue256)
fieldValue257 = x3d.fieldValue()
fieldValue257.setName("translation")
fieldValue257.setValue("-0.196199998259544 1.13750004768372 -0.112300001084805")

ProtoInstance255.addFieldValue(fieldValue257)

fieldValue119.addChildren(ProtoInstance255)
ProtoInstance258 = x3d.ProtoInstance()
ProtoInstance258.setName("Site")
ProtoInstance258.setDEF("hanim_l_humeral_lateral_epicondyles_2")
fieldValue259 = x3d.fieldValue()
fieldValue259.setName("name")
fieldValue259.setValue("l_humeral_lateral_epicondyles")

ProtoInstance258.addFieldValue(fieldValue259)
fieldValue260 = x3d.fieldValue()
fieldValue260.setName("translation")
fieldValue260.setValue("0.228000000119209 1.14820003509521 -0.109999999403954")

ProtoInstance258.addFieldValue(fieldValue260)

fieldValue119.addChildren(ProtoInstance258)
ProtoInstance261 = x3d.ProtoInstance()
ProtoInstance261.setName("Site")
ProtoInstance261.setDEF("hanim_l_humeral_medial_epicondyles_2")
fieldValue262 = x3d.fieldValue()
fieldValue262.setName("name")
fieldValue262.setValue("l_humeral_medial_epicondyles")

ProtoInstance261.addFieldValue(fieldValue262)
fieldValue263 = x3d.fieldValue()
fieldValue263.setName("translation")
fieldValue263.setValue("0.173500001430511 1.12720000743866 -0.111299999058247")

ProtoInstance261.addFieldValue(fieldValue263)

fieldValue119.addChildren(ProtoInstance261)
ProtoInstance264 = x3d.ProtoInstance()
ProtoInstance264.setName("Site")
ProtoInstance264.setDEF("hanim_l_radiale_2")
fieldValue265 = x3d.fieldValue()
fieldValue265.setName("name")
fieldValue265.setValue("l_radiale")

ProtoInstance264.addFieldValue(fieldValue265)
fieldValue266 = x3d.fieldValue()
fieldValue266.setName("translation")
fieldValue266.setValue("0.218199998140335 1.12119996547699 -0.116700001060963")

ProtoInstance264.addFieldValue(fieldValue266)

fieldValue119.addChildren(ProtoInstance264)
ProtoInstance267 = x3d.ProtoInstance()
ProtoInstance267.setName("Site")
ProtoInstance267.setDEF("hanim_l_metacarpal_phalanx3")
fieldValue268 = x3d.fieldValue()
fieldValue268.setName("name")
fieldValue268.setValue("l_metacarpal_phalanx_2")

ProtoInstance267.addFieldValue(fieldValue268)
fieldValue269 = x3d.fieldValue()
fieldValue269.setName("translation")
fieldValue269.setValue("0.200900003314018 0.813899993896484 -0.023700000718236")

ProtoInstance267.addFieldValue(fieldValue269)

fieldValue119.addChildren(ProtoInstance267)
ProtoInstance270 = x3d.ProtoInstance()
ProtoInstance270.setName("Site")
ProtoInstance270.setDEF("hanim_l_dactylion_2")
fieldValue271 = x3d.fieldValue()
fieldValue271.setName("name")
fieldValue271.setValue("l_dactylion")

ProtoInstance270.addFieldValue(fieldValue271)
fieldValue272 = x3d.fieldValue()
fieldValue272.setName("translation")
fieldValue272.setValue("0.205599993467331 0.674300014972687 -0.048200000077486")

ProtoInstance270.addFieldValue(fieldValue272)

fieldValue119.addChildren(ProtoInstance270)
ProtoInstance273 = x3d.ProtoInstance()
ProtoInstance273.setName("Site")
ProtoInstance273.setDEF("hanim_l_ulnar_styloid_2")
fieldValue274 = x3d.fieldValue()
fieldValue274.setName("name")
fieldValue274.setValue("l_ulnar_styloid")

ProtoInstance273.addFieldValue(fieldValue274)
fieldValue275 = x3d.fieldValue()
fieldValue275.setName("translation")
fieldValue275.setValue("-0.214200004935265 0.85290002822876 -0.064800001680851")

ProtoInstance273.addFieldValue(fieldValue275)

fieldValue119.addChildren(ProtoInstance273)
ProtoInstance276 = x3d.ProtoInstance()
ProtoInstance276.setName("Site")
ProtoInstance276.setDEF("hanim_l_metacarpal_phalanx6")
fieldValue277 = x3d.fieldValue()
fieldValue277.setName("name")
fieldValue277.setValue("l_metacarpal_phalanx_5")

ProtoInstance276.addFieldValue(fieldValue277)
fieldValue278 = x3d.fieldValue()
fieldValue278.setName("translation")
fieldValue278.setValue("0.192900002002716 0.78600001335144 -0.112199999392033")

ProtoInstance276.addFieldValue(fieldValue278)

fieldValue119.addChildren(ProtoInstance276)
ProtoInstance279 = x3d.ProtoInstance()
ProtoInstance279.setName("Site")
ProtoInstance279.setDEF("hanim_r_knee_crease_2")
fieldValue280 = x3d.fieldValue()
fieldValue280.setName("name")
fieldValue280.setValue("r_knee_crease")

ProtoInstance279.addFieldValue(fieldValue280)
fieldValue281 = x3d.fieldValue()
fieldValue281.setName("translation")
fieldValue281.setValue("-0.0825000032782555 0.4932000041008 -0.032600000500679")

ProtoInstance279.addFieldValue(fieldValue281)

fieldValue119.addChildren(ProtoInstance279)
ProtoInstance282 = x3d.ProtoInstance()
ProtoInstance282.setName("Site")
ProtoInstance282.setDEF("hanim_r_femoral_lateral_epicondyles_2")
fieldValue283 = x3d.fieldValue()
fieldValue283.setName("name")
fieldValue283.setValue("r_femoral_lateral_epicondyles")

ProtoInstance282.addFieldValue(fieldValue283)
fieldValue284 = x3d.fieldValue()
fieldValue284.setName("translation")
fieldValue284.setValue("-0.142100006341934 0.499199986457825 0.0309999994933605")

ProtoInstance282.addFieldValue(fieldValue284)

fieldValue119.addChildren(ProtoInstance282)
ProtoInstance285 = x3d.ProtoInstance()
ProtoInstance285.setName("Site")
ProtoInstance285.setDEF("hanim_r_femoral_medial_epicondyles_2")
fieldValue286 = x3d.fieldValue()
fieldValue286.setName("name")
fieldValue286.setValue("r_femoral_lateral_epicondyles")

ProtoInstance285.addFieldValue(fieldValue286)
fieldValue287 = x3d.fieldValue()
fieldValue287.setName("translation")
fieldValue287.setValue("-0.0220999997109175 0.501399993896484 0.0288999993354082")

ProtoInstance285.addFieldValue(fieldValue287)

fieldValue119.addChildren(ProtoInstance285)
ProtoInstance288 = x3d.ProtoInstance()
ProtoInstance288.setName("Site")
ProtoInstance288.setDEF("hanim_r_tarsal_interphalangeal_phalanx6")
fieldValue289 = x3d.fieldValue()
fieldValue289.setName("name")
fieldValue289.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance288.addFieldValue(fieldValue289)
fieldValue290 = x3d.fieldValue()
fieldValue290.setName("translation")
fieldValue290.setValue("-0.152300000190735 0.0165999997407198 0.0895000025629997")

ProtoInstance288.addFieldValue(fieldValue290)

fieldValue119.addChildren(ProtoInstance288)
ProtoInstance291 = x3d.ProtoInstance()
ProtoInstance291.setName("Site")
ProtoInstance291.setDEF("hanim_r_lateral_malleolus_2")
fieldValue292 = x3d.fieldValue()
fieldValue292.setName("name")
fieldValue292.setValue("r_lateral_malleolus")

ProtoInstance291.addFieldValue(fieldValue292)
fieldValue293 = x3d.fieldValue()
fieldValue293.setName("translation")
fieldValue293.setValue("-0.100599996745586 0.0658000037074089 -0.107500001788139")

ProtoInstance291.addFieldValue(fieldValue293)

fieldValue119.addChildren(ProtoInstance291)
ProtoInstance294 = x3d.ProtoInstance()
ProtoInstance294.setName("Site")
ProtoInstance294.setDEF("hanim_r_medial_malleolus_2")
fieldValue295 = x3d.fieldValue()
fieldValue295.setName("name")
fieldValue295.setValue("r_medial_malleolus")

ProtoInstance294.addFieldValue(fieldValue295)
fieldValue296 = x3d.fieldValue()
fieldValue296.setName("translation")
fieldValue296.setValue("-0.0590999983251095 0.0759999975562096 -0.092799998819828")

ProtoInstance294.addFieldValue(fieldValue296)

fieldValue119.addChildren(ProtoInstance294)
ProtoInstance297 = x3d.ProtoInstance()
ProtoInstance297.setName("Site")
ProtoInstance297.setDEF("hanim_r_sphyrion_2")
fieldValue298 = x3d.fieldValue()
fieldValue298.setName("name")
fieldValue298.setValue("r_sphyrion")

ProtoInstance297.addFieldValue(fieldValue298)
fieldValue299 = x3d.fieldValue()
fieldValue299.setName("translation")
fieldValue299.setValue("-0.0603000000119209 0.0610000006854534 -0.100199997425079")

ProtoInstance297.addFieldValue(fieldValue299)

fieldValue119.addChildren(ProtoInstance297)
ProtoInstance300 = x3d.ProtoInstance()
ProtoInstance300.setName("Site")
ProtoInstance300.setDEF("hanim_r_tarsal_interphalangeal_phalanx2")
fieldValue301 = x3d.fieldValue()
fieldValue301.setName("name")
fieldValue301.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance300.addFieldValue(fieldValue301)
fieldValue302 = x3d.fieldValue()
fieldValue302.setName("translation")
fieldValue302.setValue("-0.0520999990403652 0.0260000005364418 0.012699999846518")

ProtoInstance300.addFieldValue(fieldValue302)

fieldValue119.addChildren(ProtoInstance300)
ProtoInstance303 = x3d.ProtoInstance()
ProtoInstance303.setName("Site")
ProtoInstance303.setDEF("hanim_r_calcaneus_posterior_2")
fieldValue304 = x3d.fieldValue()
fieldValue304.setName("name")
fieldValue304.setValue("r_calcaneus_posterior")

ProtoInstance303.addFieldValue(fieldValue304)
fieldValue305 = x3d.fieldValue()
fieldValue305.setName("translation")
fieldValue305.setValue("-0.0692000016570091 0.0296999998390675 -0.122100003063679")

ProtoInstance303.addFieldValue(fieldValue305)

fieldValue119.addChildren(ProtoInstance303)
ProtoInstance306 = x3d.ProtoInstance()
ProtoInstance306.setName("Site")
ProtoInstance306.setDEF("hanim_r_tarsal_distal_phalanx3")
fieldValue307 = x3d.fieldValue()
fieldValue307.setName("name")
fieldValue307.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance306.addFieldValue(fieldValue307)
fieldValue308 = x3d.fieldValue()
fieldValue308.setName("translation")
fieldValue308.setValue("-0.088299997150898 0.013399999588728 0.138300001621246")

ProtoInstance306.addFieldValue(fieldValue308)

fieldValue119.addChildren(ProtoInstance306)
ProtoInstance309 = x3d.ProtoInstance()
ProtoInstance309.setName("Site")
ProtoInstance309.setDEF("hanim_l_knee_crease_2")
fieldValue310 = x3d.fieldValue()
fieldValue310.setName("name")
fieldValue310.setValue("l_knee_crease")

ProtoInstance309.addFieldValue(fieldValue310)
fieldValue311 = x3d.fieldValue()
fieldValue311.setName("translation")
fieldValue311.setValue("0.0992999970912933 0.488099992275238 -0.0308999996632338")

ProtoInstance309.addFieldValue(fieldValue311)

fieldValue119.addChildren(ProtoInstance309)
ProtoInstance312 = x3d.ProtoInstance()
ProtoInstance312.setName("Site")
ProtoInstance312.setDEF("hanim_l_femoral_lateral_epicondyles_2")
fieldValue313 = x3d.fieldValue()
fieldValue313.setName("name")
fieldValue313.setValue("l_femoral_lateral_epicondyles")

ProtoInstance312.addFieldValue(fieldValue313)
fieldValue314 = x3d.fieldValue()
fieldValue314.setName("translation")
fieldValue314.setValue("0.159799993038177 0.496699988842011 0.0296999998390675")

ProtoInstance312.addFieldValue(fieldValue314)

fieldValue119.addChildren(ProtoInstance312)
ProtoInstance315 = x3d.ProtoInstance()
ProtoInstance315.setName("Site")
ProtoInstance315.setDEF("hanim_l_femoral_medial_epicondyles_2")
fieldValue316 = x3d.fieldValue()
fieldValue316.setName("name")
fieldValue316.setValue("l_femoral_lateral_epicondyles")

ProtoInstance315.addFieldValue(fieldValue316)
fieldValue317 = x3d.fieldValue()
fieldValue317.setName("translation")
fieldValue317.setValue("0.0397999994456768 0.494599997997284 0.0303000006824732")

ProtoInstance315.addFieldValue(fieldValue317)

fieldValue119.addChildren(ProtoInstance315)
ProtoInstance318 = x3d.ProtoInstance()
ProtoInstance318.setName("Site")
ProtoInstance318.setDEF("hanim_l_tarsal_interphalangeal_phalanx6")
fieldValue319 = x3d.fieldValue()
fieldValue319.setName("name")
fieldValue319.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance318.addFieldValue(fieldValue319)
fieldValue320 = x3d.fieldValue()
fieldValue320.setName("translation")
fieldValue320.setValue("0.182500004768372 0.00700000021606684 0.092799998819828")

ProtoInstance318.addFieldValue(fieldValue320)

fieldValue119.addChildren(ProtoInstance318)
ProtoInstance321 = x3d.ProtoInstance()
ProtoInstance321.setName("Site")
ProtoInstance321.setDEF("hanim_l_lateral_malleolus_2")
fieldValue322 = x3d.fieldValue()
fieldValue322.setName("name")
fieldValue322.setValue("l_lateral_malleolus")

ProtoInstance321.addFieldValue(fieldValue322)
fieldValue323 = x3d.fieldValue()
fieldValue323.setName("translation")
fieldValue323.setValue("0.130799993872643 0.0597000010311604 -0.103200003504753")

ProtoInstance321.addFieldValue(fieldValue323)

fieldValue119.addChildren(ProtoInstance321)
ProtoInstance324 = x3d.ProtoInstance()
ProtoInstance324.setName("Site")
ProtoInstance324.setDEF("hanim_l_medial_malleolus_2")
fieldValue325 = x3d.fieldValue()
fieldValue325.setName("name")
fieldValue325.setValue("l_medial_malleolus")

ProtoInstance324.addFieldValue(fieldValue325)
fieldValue326 = x3d.fieldValue()
fieldValue326.setName("translation")
fieldValue326.setValue("0.0890000015497208 0.0715999975800514 -0.0881000012159348")

ProtoInstance324.addFieldValue(fieldValue326)

fieldValue119.addChildren(ProtoInstance324)
ProtoInstance327 = x3d.ProtoInstance()
ProtoInstance327.setName("Site")
ProtoInstance327.setDEF("hanim_l_sphyrion_2")
fieldValue328 = x3d.fieldValue()
fieldValue328.setName("name")
fieldValue328.setValue("l_sphyrion")

ProtoInstance327.addFieldValue(fieldValue328)
fieldValue329 = x3d.fieldValue()
fieldValue329.setName("translation")
fieldValue329.setValue("0.0890000015497208 0.0575000010430813 -0.0943000018596649")

ProtoInstance327.addFieldValue(fieldValue329)

fieldValue119.addChildren(ProtoInstance327)
ProtoInstance330 = x3d.ProtoInstance()
ProtoInstance330.setName("Site")
ProtoInstance330.setDEF("hanim_l_tarsal_interphalangeal_phalanx2")
fieldValue331 = x3d.fieldValue()
fieldValue331.setName("name")
fieldValue331.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance330.addFieldValue(fieldValue331)
fieldValue332 = x3d.fieldValue()
fieldValue332.setName("translation")
fieldValue332.setValue("0.0816000029444695 0.023199999704957 0.0105999996885657")

ProtoInstance330.addFieldValue(fieldValue332)

fieldValue119.addChildren(ProtoInstance330)
ProtoInstance333 = x3d.ProtoInstance()
ProtoInstance333.setName("Site")
ProtoInstance333.setDEF("hanim_l_calcaneus_posterior_2")
fieldValue334 = x3d.fieldValue()
fieldValue334.setName("name")
fieldValue334.setValue("l_calcaneus_posterior")

ProtoInstance333.addFieldValue(fieldValue334)
fieldValue335 = x3d.fieldValue()
fieldValue335.setName("translation")
fieldValue335.setValue("0.09740000218153 0.025900000706315 -0.11710000038147")

ProtoInstance333.addFieldValue(fieldValue335)

fieldValue119.addChildren(ProtoInstance333)
ProtoInstance336 = x3d.ProtoInstance()
ProtoInstance336.setName("Site")
ProtoInstance336.setDEF("hanim_l_tarsal_distal_phalanx3")
fieldValue337 = x3d.fieldValue()
fieldValue337.setName("name")
fieldValue337.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance336.addFieldValue(fieldValue337)
fieldValue338 = x3d.fieldValue()
fieldValue338.setName("translation")
fieldValue338.setValue("0.119499996304512 0.00789999961853027 0.143299996852875")

ProtoInstance336.addFieldValue(fieldValue338)

fieldValue119.addChildren(ProtoInstance336)
ProtoInstance339 = x3d.ProtoInstance()
ProtoInstance339.setName("Site")
ProtoInstance339.setDEF("hanim_crotch_2")
fieldValue340 = x3d.fieldValue()
fieldValue340.setName("name")
fieldValue340.setValue("crotch")

ProtoInstance339.addFieldValue(fieldValue340)
fieldValue341 = x3d.fieldValue()
fieldValue341.setName("translation")
fieldValue341.setValue("0.00340000004507601 0.826600015163422 0.0256999991834164")

ProtoInstance339.addFieldValue(fieldValue341)

fieldValue119.addChildren(ProtoInstance339)
ProtoInstance342 = x3d.ProtoInstance()
ProtoInstance342.setName("Site")
ProtoInstance342.setDEF("hanim_r_neck_base_2")
fieldValue343 = x3d.fieldValue()
fieldValue343.setName("name")
fieldValue343.setValue("r_neck_base")

ProtoInstance342.addFieldValue(fieldValue343)
fieldValue344 = x3d.fieldValue()
fieldValue344.setName("translation")
fieldValue344.setValue("-0.0419000014662743 1.51489996910095 -0.0219999998807907")

ProtoInstance342.addFieldValue(fieldValue344)

fieldValue119.addChildren(ProtoInstance342)
ProtoInstance345 = x3d.ProtoInstance()
ProtoInstance345.setName("Site")
ProtoInstance345.setDEF("hanim_l_neck_base_2")
fieldValue346 = x3d.fieldValue()
fieldValue346.setName("name")
fieldValue346.setValue("l_neck_base")

ProtoInstance345.addFieldValue(fieldValue346)
fieldValue347 = x3d.fieldValue()
fieldValue347.setName("translation")
fieldValue347.setValue("0.0645999982953072 1.51409995555878 -0.0379999987781048")

ProtoInstance345.addFieldValue(fieldValue347)

fieldValue119.addChildren(ProtoInstance345)
ProtoInstance348 = x3d.ProtoInstance()
ProtoInstance348.setName("Site")
ProtoInstance348.setDEF("hanim_navel_2")
fieldValue349 = x3d.fieldValue()
fieldValue349.setName("name")
fieldValue349.setValue("navel")

ProtoInstance348.addFieldValue(fieldValue349)
fieldValue350 = x3d.fieldValue()
fieldValue350.setName("translation")
fieldValue350.setValue("0.00689999992027879 1.09660005569458 0.101700000464916")

ProtoInstance348.addFieldValue(fieldValue350)

fieldValue119.addChildren(ProtoInstance348)

ProtoInstance117.addFieldValue(fieldValue119)

fieldValue116.addChildren(ProtoInstance117)

ProtoInstance112.addFieldValue(fieldValue116)

fieldValue111.addChildren(ProtoInstance112)

ProtoInstance110.addFieldValue(fieldValue111)
fieldValue351 = x3d.fieldValue()
fieldValue351.setName("joints")
ProtoInstance352 = x3d.ProtoInstance()
ProtoInstance352.setUSE("hanim_humanoid_root_2")

fieldValue351.addChildren(ProtoInstance352)

ProtoInstance110.addFieldValue(fieldValue351)
fieldValue353 = x3d.fieldValue()
fieldValue353.setName("segments")
ProtoInstance354 = x3d.ProtoInstance()
ProtoInstance354.setUSE("hanim_sacrum_2")

fieldValue353.addChildren(ProtoInstance354)

ProtoInstance110.addFieldValue(fieldValue353)
fieldValue355 = x3d.fieldValue()
fieldValue355.setName("sites")
ProtoInstance356 = x3d.ProtoInstance()
ProtoInstance356.setUSE("hanim_skull_tip_2")

fieldValue355.addChildren(ProtoInstance356)
ProtoInstance357 = x3d.ProtoInstance()
ProtoInstance357.setUSE("hanim_sellion_2")

fieldValue355.addChildren(ProtoInstance357)
ProtoInstance358 = x3d.ProtoInstance()
ProtoInstance358.setUSE("hanim_r_infraorbitale_2")

fieldValue355.addChildren(ProtoInstance358)
ProtoInstance359 = x3d.ProtoInstance()
ProtoInstance359.setUSE("hanim_l_infraorbitale_2")

fieldValue355.addChildren(ProtoInstance359)
ProtoInstance360 = x3d.ProtoInstance()
ProtoInstance360.setUSE("hanim_supramenton_2")

fieldValue355.addChildren(ProtoInstance360)
ProtoInstance361 = x3d.ProtoInstance()
ProtoInstance361.setUSE("hanim_r_tragion_2")

fieldValue355.addChildren(ProtoInstance361)
ProtoInstance362 = x3d.ProtoInstance()
ProtoInstance362.setUSE("hanim_r_gonion_2")

fieldValue355.addChildren(ProtoInstance362)
ProtoInstance363 = x3d.ProtoInstance()
ProtoInstance363.setUSE("hanim_l_tragion_2")

fieldValue355.addChildren(ProtoInstance363)
ProtoInstance364 = x3d.ProtoInstance()
ProtoInstance364.setUSE("hanim_l_gonion_2")

fieldValue355.addChildren(ProtoInstance364)
ProtoInstance365 = x3d.ProtoInstance()
ProtoInstance365.setUSE("hanim_nuchale_2")

fieldValue355.addChildren(ProtoInstance365)
ProtoInstance366 = x3d.ProtoInstance()
ProtoInstance366.setUSE("hanim_r_clavicale_2")

fieldValue355.addChildren(ProtoInstance366)
ProtoInstance367 = x3d.ProtoInstance()
ProtoInstance367.setUSE("hanim_suprasternale_2")

fieldValue355.addChildren(ProtoInstance367)
ProtoInstance368 = x3d.ProtoInstance()
ProtoInstance368.setUSE("hanim_l_clavicale_2")

fieldValue355.addChildren(ProtoInstance368)
ProtoInstance369 = x3d.ProtoInstance()
ProtoInstance369.setUSE("hanim_r_thelion_2")

fieldValue355.addChildren(ProtoInstance369)
ProtoInstance370 = x3d.ProtoInstance()
ProtoInstance370.setUSE("hanim_l_thelion_2")

fieldValue355.addChildren(ProtoInstance370)
ProtoInstance371 = x3d.ProtoInstance()
ProtoInstance371.setUSE("hanim_substernale_2")

fieldValue355.addChildren(ProtoInstance371)
ProtoInstance372 = x3d.ProtoInstance()
ProtoInstance372.setUSE("hanim_r_rib10_2")

fieldValue355.addChildren(ProtoInstance372)
ProtoInstance373 = x3d.ProtoInstance()
ProtoInstance373.setUSE("hanim_r_asis_2")

fieldValue355.addChildren(ProtoInstance373)
ProtoInstance374 = x3d.ProtoInstance()
ProtoInstance374.setUSE("hanim_l_rib10_2")

fieldValue355.addChildren(ProtoInstance374)
ProtoInstance375 = x3d.ProtoInstance()
ProtoInstance375.setUSE("hanim_l_asis_2")

fieldValue355.addChildren(ProtoInstance375)
ProtoInstance376 = x3d.ProtoInstance()
ProtoInstance376.setUSE("hanim_r_iliocristale_2")

fieldValue355.addChildren(ProtoInstance376)
ProtoInstance377 = x3d.ProtoInstance()
ProtoInstance377.setUSE("hanim_r_trochanterion_2")

fieldValue355.addChildren(ProtoInstance377)
ProtoInstance378 = x3d.ProtoInstance()
ProtoInstance378.setUSE("hanim_l_iliocristale_2")

fieldValue355.addChildren(ProtoInstance378)
ProtoInstance379 = x3d.ProtoInstance()
ProtoInstance379.setUSE("hanim_l_trochanterion_2")

fieldValue355.addChildren(ProtoInstance379)
ProtoInstance380 = x3d.ProtoInstance()
ProtoInstance380.setUSE("hanim_cervicale_2")

fieldValue355.addChildren(ProtoInstance380)
ProtoInstance381 = x3d.ProtoInstance()
ProtoInstance381.setUSE("hanim_spine_2_lower_back_2")

fieldValue355.addChildren(ProtoInstance381)
ProtoInstance382 = x3d.ProtoInstance()
ProtoInstance382.setUSE("hanim_r_psis_2")

fieldValue355.addChildren(ProtoInstance382)
ProtoInstance383 = x3d.ProtoInstance()
ProtoInstance383.setUSE("hanim_l_psis_2")

fieldValue355.addChildren(ProtoInstance383)
ProtoInstance384 = x3d.ProtoInstance()
ProtoInstance384.setUSE("hanim_waist_preferred_posterior_2")

fieldValue355.addChildren(ProtoInstance384)
ProtoInstance385 = x3d.ProtoInstance()
ProtoInstance385.setUSE("hanim_r_acromion_2")

fieldValue355.addChildren(ProtoInstance385)
ProtoInstance386 = x3d.ProtoInstance()
ProtoInstance386.setUSE("hanim_r_axilla_proximal_2")

fieldValue355.addChildren(ProtoInstance386)
ProtoInstance387 = x3d.ProtoInstance()
ProtoInstance387.setUSE("hanim_r_radial_styloid_2")

fieldValue355.addChildren(ProtoInstance387)
ProtoInstance388 = x3d.ProtoInstance()
ProtoInstance388.setUSE("hanim_r_axilla_distal_2")

fieldValue355.addChildren(ProtoInstance388)
ProtoInstance389 = x3d.ProtoInstance()
ProtoInstance389.setUSE("hanim_r_olecranon_2")

fieldValue355.addChildren(ProtoInstance389)
ProtoInstance390 = x3d.ProtoInstance()
ProtoInstance390.setUSE("hanim_r_humeral_lateral_epicondyles_2")

fieldValue355.addChildren(ProtoInstance390)
ProtoInstance391 = x3d.ProtoInstance()
ProtoInstance391.setUSE("hanim_r_humeral_medial_epicondyles_2")

fieldValue355.addChildren(ProtoInstance391)
ProtoInstance392 = x3d.ProtoInstance()
ProtoInstance392.setUSE("hanim_r_radiale_2")

fieldValue355.addChildren(ProtoInstance392)
ProtoInstance393 = x3d.ProtoInstance()
ProtoInstance393.setUSE("hanim_r_metacarpal_phalanx3")

fieldValue355.addChildren(ProtoInstance393)
ProtoInstance394 = x3d.ProtoInstance()
ProtoInstance394.setUSE("hanim_r_dactylion_2")

fieldValue355.addChildren(ProtoInstance394)
ProtoInstance395 = x3d.ProtoInstance()
ProtoInstance395.setUSE("hanim_r_ulnar_styloid_2")

fieldValue355.addChildren(ProtoInstance395)
ProtoInstance396 = x3d.ProtoInstance()
ProtoInstance396.setUSE("hanim_r_metacarpal_phalanx6")

fieldValue355.addChildren(ProtoInstance396)
ProtoInstance397 = x3d.ProtoInstance()
ProtoInstance397.setUSE("hanim_l_acromion_2")

fieldValue355.addChildren(ProtoInstance397)
ProtoInstance398 = x3d.ProtoInstance()
ProtoInstance398.setUSE("hanim_l_axilla_proximal_2")

fieldValue355.addChildren(ProtoInstance398)
ProtoInstance399 = x3d.ProtoInstance()
ProtoInstance399.setUSE("hanim_l_radial_styloid_2")

fieldValue355.addChildren(ProtoInstance399)
ProtoInstance400 = x3d.ProtoInstance()
ProtoInstance400.setUSE("hanim_l_axilla_distal_2")

fieldValue355.addChildren(ProtoInstance400)
ProtoInstance401 = x3d.ProtoInstance()
ProtoInstance401.setUSE("hanim_l_olecranon_2")

fieldValue355.addChildren(ProtoInstance401)
ProtoInstance402 = x3d.ProtoInstance()
ProtoInstance402.setUSE("hanim_l_humeral_lateral_epicondyles_2")

fieldValue355.addChildren(ProtoInstance402)
ProtoInstance403 = x3d.ProtoInstance()
ProtoInstance403.setUSE("hanim_l_humeral_medial_epicondyles_2")

fieldValue355.addChildren(ProtoInstance403)
ProtoInstance404 = x3d.ProtoInstance()
ProtoInstance404.setUSE("hanim_l_radiale_2")

fieldValue355.addChildren(ProtoInstance404)
ProtoInstance405 = x3d.ProtoInstance()
ProtoInstance405.setUSE("hanim_l_metacarpal_phalanx3")

fieldValue355.addChildren(ProtoInstance405)
ProtoInstance406 = x3d.ProtoInstance()
ProtoInstance406.setUSE("hanim_l_dactylion_2")

fieldValue355.addChildren(ProtoInstance406)
ProtoInstance407 = x3d.ProtoInstance()
ProtoInstance407.setUSE("hanim_l_ulnar_styloid_2")

fieldValue355.addChildren(ProtoInstance407)
ProtoInstance408 = x3d.ProtoInstance()
ProtoInstance408.setUSE("hanim_l_metacarpal_phalanx6")

fieldValue355.addChildren(ProtoInstance408)
ProtoInstance409 = x3d.ProtoInstance()
ProtoInstance409.setUSE("hanim_r_knee_crease_2")

fieldValue355.addChildren(ProtoInstance409)
ProtoInstance410 = x3d.ProtoInstance()
ProtoInstance410.setUSE("hanim_r_femoral_lateral_epicondyles_2")

fieldValue355.addChildren(ProtoInstance410)
ProtoInstance411 = x3d.ProtoInstance()
ProtoInstance411.setUSE("hanim_r_femoral_medial_epicondyles_2")

fieldValue355.addChildren(ProtoInstance411)
ProtoInstance412 = x3d.ProtoInstance()
ProtoInstance412.setUSE("hanim_r_tarsal_interphalangeal_phalanx6")

fieldValue355.addChildren(ProtoInstance412)
ProtoInstance413 = x3d.ProtoInstance()
ProtoInstance413.setUSE("hanim_r_lateral_malleolus_2")

fieldValue355.addChildren(ProtoInstance413)
ProtoInstance414 = x3d.ProtoInstance()
ProtoInstance414.setUSE("hanim_r_medial_malleolus_2")

fieldValue355.addChildren(ProtoInstance414)
ProtoInstance415 = x3d.ProtoInstance()
ProtoInstance415.setUSE("hanim_r_sphyrion_2")

fieldValue355.addChildren(ProtoInstance415)
ProtoInstance416 = x3d.ProtoInstance()
ProtoInstance416.setUSE("hanim_r_tarsal_interphalangeal_phalanx2")

fieldValue355.addChildren(ProtoInstance416)
ProtoInstance417 = x3d.ProtoInstance()
ProtoInstance417.setUSE("hanim_r_calcaneus_posterior_2")

fieldValue355.addChildren(ProtoInstance417)
ProtoInstance418 = x3d.ProtoInstance()
ProtoInstance418.setUSE("hanim_r_tarsal_distal_phalanx3")

fieldValue355.addChildren(ProtoInstance418)
ProtoInstance419 = x3d.ProtoInstance()
ProtoInstance419.setUSE("hanim_l_knee_crease_2")

fieldValue355.addChildren(ProtoInstance419)
ProtoInstance420 = x3d.ProtoInstance()
ProtoInstance420.setUSE("hanim_l_femoral_lateral_epicondyles_2")

fieldValue355.addChildren(ProtoInstance420)
ProtoInstance421 = x3d.ProtoInstance()
ProtoInstance421.setUSE("hanim_l_femoral_medial_epicondyles_2")

fieldValue355.addChildren(ProtoInstance421)
ProtoInstance422 = x3d.ProtoInstance()
ProtoInstance422.setUSE("hanim_l_tarsal_interphalangeal_phalanx6")

fieldValue355.addChildren(ProtoInstance422)
ProtoInstance423 = x3d.ProtoInstance()
ProtoInstance423.setUSE("hanim_l_lateral_malleolus_2")

fieldValue355.addChildren(ProtoInstance423)
ProtoInstance424 = x3d.ProtoInstance()
ProtoInstance424.setUSE("hanim_l_medial_malleolus_2")

fieldValue355.addChildren(ProtoInstance424)
ProtoInstance425 = x3d.ProtoInstance()
ProtoInstance425.setUSE("hanim_l_sphyrion_2")

fieldValue355.addChildren(ProtoInstance425)
ProtoInstance426 = x3d.ProtoInstance()
ProtoInstance426.setUSE("hanim_l_tarsal_interphalangeal_phalanx2")

fieldValue355.addChildren(ProtoInstance426)
ProtoInstance427 = x3d.ProtoInstance()
ProtoInstance427.setUSE("hanim_l_calcaneus_posterior_2")

fieldValue355.addChildren(ProtoInstance427)
ProtoInstance428 = x3d.ProtoInstance()
ProtoInstance428.setUSE("hanim_l_tarsal_distal_phalanx3")

fieldValue355.addChildren(ProtoInstance428)
ProtoInstance429 = x3d.ProtoInstance()
ProtoInstance429.setUSE("hanim_crotch_2")

fieldValue355.addChildren(ProtoInstance429)
ProtoInstance430 = x3d.ProtoInstance()
ProtoInstance430.setUSE("hanim_r_neck_base_2")

fieldValue355.addChildren(ProtoInstance430)
ProtoInstance431 = x3d.ProtoInstance()
ProtoInstance431.setUSE("hanim_l_neck_base_2")

fieldValue355.addChildren(ProtoInstance431)
ProtoInstance432 = x3d.ProtoInstance()
ProtoInstance432.setUSE("hanim_navel_2")

fieldValue355.addChildren(ProtoInstance432)

ProtoInstance110.addFieldValue(fieldValue355)
fieldValue433 = x3d.fieldValue()
fieldValue433.setName("name")
fieldValue433.setValue("humanoid")

ProtoInstance110.addFieldValue(fieldValue433)
fieldValue434 = x3d.fieldValue()
fieldValue434.setName("info")
fieldValue434.setValue("\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;0\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"")

ProtoInstance110.addFieldValue(fieldValue434)

Scene4.addChildren(ProtoInstance110)
Group435 = x3d.Group()
Group435.setDEF("JointCenters_WorldInfo")
WorldInfo436 = x3d.WorldInfo()
WorldInfo436.setTitle("HANIM 200x Default Joint Centers, LOA&#8209;0")
WorldInfo436.setInfo([" HANIM 200x Default Joint Centers, Level-Of-Articulation 0 --------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "])

Group435.addChildren(WorldInfo436)

Scene4.addChildren(Group435)
NavigationInfo437 = x3d.NavigationInfo()
NavigationInfo437.setAvatarSize([0.25,1.60000002384186,0.75])
NavigationInfo437.setSpeed(1.5)

Scene4.addChildren(NavigationInfo437)

X3D0.setScene(Scene4)
X3D0.toFileX3D("../data/LOA0ExampleSourceWithDiamonds_RoundTrip.x3d")
