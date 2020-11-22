import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("generator")
meta2.setContent("view3dscene, https://castle-engine.io/view3dscene.php")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("source")
meta3.setContent("LOA1ExampleSourceWithDiamonds.wrl")

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
ProtoInstance117.setName("Joint")
ProtoInstance117.setDEF("hanim_sacroiliac_2")
fieldValue118 = x3d.fieldValue()
fieldValue118.setName("stiffness")
fieldValue118.setValue("1 1 1")

ProtoInstance117.addFieldValue(fieldValue118)
fieldValue119 = x3d.fieldValue()
fieldValue119.setName("name")
fieldValue119.setValue("sacroiliac")

ProtoInstance117.addFieldValue(fieldValue119)
fieldValue120 = x3d.fieldValue()
fieldValue120.setName("center")
fieldValue120.setValue("0 0.914900004863739 0.0015999999595806")

ProtoInstance117.addFieldValue(fieldValue120)
fieldValue121 = x3d.fieldValue()
fieldValue121.setName("children")
ProtoInstance122 = x3d.ProtoInstance()
ProtoInstance122.setName("Joint")
ProtoInstance122.setDEF("hanim_l_hip_2")
fieldValue123 = x3d.fieldValue()
fieldValue123.setName("stiffness")
fieldValue123.setValue("1 1 1")

ProtoInstance122.addFieldValue(fieldValue123)
fieldValue124 = x3d.fieldValue()
fieldValue124.setName("name")
fieldValue124.setValue("l_hip")

ProtoInstance122.addFieldValue(fieldValue124)
fieldValue125 = x3d.fieldValue()
fieldValue125.setName("center")
fieldValue125.setValue("0.0961000025272369 0.912400007247925 -0.0000999999974737875")

ProtoInstance122.addFieldValue(fieldValue125)
fieldValue126 = x3d.fieldValue()
fieldValue126.setName("children")
ProtoInstance127 = x3d.ProtoInstance()
ProtoInstance127.setName("Joint")
ProtoInstance127.setDEF("hanim_l_knee_2")
fieldValue128 = x3d.fieldValue()
fieldValue128.setName("stiffness")
fieldValue128.setValue("1 1 1")

ProtoInstance127.addFieldValue(fieldValue128)
fieldValue129 = x3d.fieldValue()
fieldValue129.setName("name")
fieldValue129.setValue("l_knee")

ProtoInstance127.addFieldValue(fieldValue129)
fieldValue130 = x3d.fieldValue()
fieldValue130.setName("center")
fieldValue130.setValue("0.104000002145767 0.486699998378754 0.030799999833107")

ProtoInstance127.addFieldValue(fieldValue130)
fieldValue131 = x3d.fieldValue()
fieldValue131.setName("children")
ProtoInstance132 = x3d.ProtoInstance()
ProtoInstance132.setName("Joint")
ProtoInstance132.setDEF("hanim_l_talocrural_2")
fieldValue133 = x3d.fieldValue()
fieldValue133.setName("stiffness")
fieldValue133.setValue("1 1 1")

ProtoInstance132.addFieldValue(fieldValue133)
fieldValue134 = x3d.fieldValue()
fieldValue134.setName("name")
fieldValue134.setValue("l_talocrural")

ProtoInstance132.addFieldValue(fieldValue134)
fieldValue135 = x3d.fieldValue()
fieldValue135.setName("center")
fieldValue135.setValue("0.110100001096725 0.0656000003218651 -0.0736000016331673")

ProtoInstance132.addFieldValue(fieldValue135)
fieldValue136 = x3d.fieldValue()
fieldValue136.setName("children")
ProtoInstance137 = x3d.ProtoInstance()
ProtoInstance137.setName("Joint")
ProtoInstance137.setDEF("hanim_l_metatarsophalangeal__2")
fieldValue138 = x3d.fieldValue()
fieldValue138.setName("stiffness")
fieldValue138.setValue("1 1 1")

ProtoInstance137.addFieldValue(fieldValue138)
fieldValue139 = x3d.fieldValue()
fieldValue139.setName("name")
fieldValue139.setValue("l_metatarsophalangeal_")

ProtoInstance137.addFieldValue(fieldValue139)
fieldValue140 = x3d.fieldValue()
fieldValue140.setName("center")
fieldValue140.setValue("0.108599998056889 0.0000999999974737875 0.0368000008165836")

ProtoInstance137.addFieldValue(fieldValue140)
fieldValue141 = x3d.fieldValue()
fieldValue141.setName("children")
ProtoInstance142 = x3d.ProtoInstance()
ProtoInstance142.setName("Segment")
ProtoInstance142.setDEF("hanim_l_middistal_2")
fieldValue143 = x3d.fieldValue()
fieldValue143.setName("name")
fieldValue143.setValue("l_middistal")

ProtoInstance142.addFieldValue(fieldValue143)
fieldValue144 = x3d.fieldValue()
fieldValue144.setName("children")
ProtoInstance145 = x3d.ProtoInstance()
ProtoInstance145.setName("Site")
ProtoInstance145.setDEF("hanim_l_middistal_tip_2")
fieldValue146 = x3d.fieldValue()
fieldValue146.setName("name")
fieldValue146.setValue("l_middistal_tip")

ProtoInstance145.addFieldValue(fieldValue146)
fieldValue147 = x3d.fieldValue()
fieldValue147.setName("translation")
fieldValue147.setValue("0.135399997234344 0.0015999999595806 0.147599995136261")

ProtoInstance145.addFieldValue(fieldValue147)

fieldValue144.addChildren(ProtoInstance145)
ProtoInstance148 = x3d.ProtoInstance()
ProtoInstance148.setName("Site")
ProtoInstance148.setDEF("hanim_l_tarsal_interphalangeal_phalanx6")
fieldValue149 = x3d.fieldValue()
fieldValue149.setName("name")
fieldValue149.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance148.addFieldValue(fieldValue149)
fieldValue150 = x3d.fieldValue()
fieldValue150.setName("translation")
fieldValue150.setValue("0.182500004768372 0.00700000021606684 0.092799998819828")

ProtoInstance148.addFieldValue(fieldValue150)

fieldValue144.addChildren(ProtoInstance148)
ProtoInstance151 = x3d.ProtoInstance()
ProtoInstance151.setName("Site")
ProtoInstance151.setDEF("hanim_l_tarsal_interphalangeal_phalanx2")
fieldValue152 = x3d.fieldValue()
fieldValue152.setName("name")
fieldValue152.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance151.addFieldValue(fieldValue152)
fieldValue153 = x3d.fieldValue()
fieldValue153.setName("translation")
fieldValue153.setValue("0.0816000029444695 0.023199999704957 0.0105999996885657")

ProtoInstance151.addFieldValue(fieldValue153)

fieldValue144.addChildren(ProtoInstance151)
ProtoInstance154 = x3d.ProtoInstance()
ProtoInstance154.setName("Site")
ProtoInstance154.setDEF("hanim_l_tarsal_distal_phalanx3")
fieldValue155 = x3d.fieldValue()
fieldValue155.setName("name")
fieldValue155.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance154.addFieldValue(fieldValue155)
fieldValue156 = x3d.fieldValue()
fieldValue156.setName("translation")
fieldValue156.setValue("0.119499996304512 0.00789999961853027 0.143299996852875")

ProtoInstance154.addFieldValue(fieldValue156)

fieldValue144.addChildren(ProtoInstance154)

ProtoInstance142.addFieldValue(fieldValue144)

fieldValue141.addChildren(ProtoInstance142)

ProtoInstance137.addFieldValue(fieldValue141)

fieldValue136.addChildren(ProtoInstance137)
ProtoInstance157 = x3d.ProtoInstance()
ProtoInstance157.setName("Segment")
ProtoInstance157.setDEF("hanim_l_hindfoot_2")
fieldValue158 = x3d.fieldValue()
fieldValue158.setName("name")
fieldValue158.setValue("l_hindfoot")

ProtoInstance157.addFieldValue(fieldValue158)
fieldValue159 = x3d.fieldValue()
fieldValue159.setName("children")
ProtoInstance160 = x3d.ProtoInstance()
ProtoInstance160.setName("Site")
ProtoInstance160.setDEF("hanim_l_lateral_malleolus_2")
fieldValue161 = x3d.fieldValue()
fieldValue161.setName("name")
fieldValue161.setValue("l_lateral_malleolus")

ProtoInstance160.addFieldValue(fieldValue161)
fieldValue162 = x3d.fieldValue()
fieldValue162.setName("translation")
fieldValue162.setValue("0.130799993872643 0.0597000010311604 -0.103200003504753")

ProtoInstance160.addFieldValue(fieldValue162)

fieldValue159.addChildren(ProtoInstance160)
ProtoInstance163 = x3d.ProtoInstance()
ProtoInstance163.setName("Site")
ProtoInstance163.setDEF("hanim_l_medial_malleolus_2")
fieldValue164 = x3d.fieldValue()
fieldValue164.setName("name")
fieldValue164.setValue("l_medial_malleolus")

ProtoInstance163.addFieldValue(fieldValue164)
fieldValue165 = x3d.fieldValue()
fieldValue165.setName("translation")
fieldValue165.setValue("0.0890000015497208 0.0715999975800514 -0.0881000012159348")

ProtoInstance163.addFieldValue(fieldValue165)

fieldValue159.addChildren(ProtoInstance163)
ProtoInstance166 = x3d.ProtoInstance()
ProtoInstance166.setName("Site")
ProtoInstance166.setDEF("hanim_l_sphyrion_2")
fieldValue167 = x3d.fieldValue()
fieldValue167.setName("name")
fieldValue167.setValue("l_sphyrion")

ProtoInstance166.addFieldValue(fieldValue167)
fieldValue168 = x3d.fieldValue()
fieldValue168.setName("translation")
fieldValue168.setValue("0.0890000015497208 0.0575000010430813 -0.0943000018596649")

ProtoInstance166.addFieldValue(fieldValue168)

fieldValue159.addChildren(ProtoInstance166)
ProtoInstance169 = x3d.ProtoInstance()
ProtoInstance169.setName("Site")
ProtoInstance169.setDEF("hanim_l_calcaneus_posterior_2")
fieldValue170 = x3d.fieldValue()
fieldValue170.setName("name")
fieldValue170.setValue("l_calcaneus_posterior")

ProtoInstance169.addFieldValue(fieldValue170)
fieldValue171 = x3d.fieldValue()
fieldValue171.setName("translation")
fieldValue171.setValue("0.09740000218153 0.025900000706315 -0.11710000038147")

ProtoInstance169.addFieldValue(fieldValue171)

fieldValue159.addChildren(ProtoInstance169)

ProtoInstance157.addFieldValue(fieldValue159)

fieldValue136.addChildren(ProtoInstance157)

ProtoInstance132.addFieldValue(fieldValue136)

fieldValue131.addChildren(ProtoInstance132)
ProtoInstance172 = x3d.ProtoInstance()
ProtoInstance172.setName("Segment")
ProtoInstance172.setDEF("hanim_l_calf_2")
fieldValue173 = x3d.fieldValue()
fieldValue173.setName("name")
fieldValue173.setValue("l_calf")

ProtoInstance172.addFieldValue(fieldValue173)

fieldValue131.addChildren(ProtoInstance172)

ProtoInstance127.addFieldValue(fieldValue131)

fieldValue126.addChildren(ProtoInstance127)
ProtoInstance174 = x3d.ProtoInstance()
ProtoInstance174.setName("Segment")
ProtoInstance174.setDEF("hanim_l_thigh_2")
fieldValue175 = x3d.fieldValue()
fieldValue175.setName("name")
fieldValue175.setValue("l_thigh")

ProtoInstance174.addFieldValue(fieldValue175)
fieldValue176 = x3d.fieldValue()
fieldValue176.setName("children")
ProtoInstance177 = x3d.ProtoInstance()
ProtoInstance177.setName("Site")
ProtoInstance177.setDEF("hanim_l_knee_crease_2")
fieldValue178 = x3d.fieldValue()
fieldValue178.setName("name")
fieldValue178.setValue("l_knee_crease")

ProtoInstance177.addFieldValue(fieldValue178)
fieldValue179 = x3d.fieldValue()
fieldValue179.setName("translation")
fieldValue179.setValue("0.0992999970912933 0.488099992275238 -0.0308999996632338")

ProtoInstance177.addFieldValue(fieldValue179)

fieldValue176.addChildren(ProtoInstance177)
ProtoInstance180 = x3d.ProtoInstance()
ProtoInstance180.setName("Site")
ProtoInstance180.setDEF("hanim_l_femoral_lateral_epicondyles_2")
fieldValue181 = x3d.fieldValue()
fieldValue181.setName("name")
fieldValue181.setValue("l_femoral_lateral_epicondyles")

ProtoInstance180.addFieldValue(fieldValue181)
fieldValue182 = x3d.fieldValue()
fieldValue182.setName("translation")
fieldValue182.setValue("0.159799993038177 0.496699988842011 0.0296999998390675")

ProtoInstance180.addFieldValue(fieldValue182)

fieldValue176.addChildren(ProtoInstance180)
ProtoInstance183 = x3d.ProtoInstance()
ProtoInstance183.setName("Site")
ProtoInstance183.setDEF("hanim_l_femoral_medial_epicondyles_2")
fieldValue184 = x3d.fieldValue()
fieldValue184.setName("name")
fieldValue184.setValue("l_femoral_lateral_epicondyles")

ProtoInstance183.addFieldValue(fieldValue184)
fieldValue185 = x3d.fieldValue()
fieldValue185.setName("translation")
fieldValue185.setValue("0.0397999994456768 0.494599997997284 0.0303000006824732")

ProtoInstance183.addFieldValue(fieldValue185)

fieldValue176.addChildren(ProtoInstance183)

ProtoInstance174.addFieldValue(fieldValue176)

fieldValue126.addChildren(ProtoInstance174)

ProtoInstance122.addFieldValue(fieldValue126)

fieldValue121.addChildren(ProtoInstance122)
ProtoInstance186 = x3d.ProtoInstance()
ProtoInstance186.setName("Joint")
ProtoInstance186.setDEF("hanim_r_hip_2")
fieldValue187 = x3d.fieldValue()
fieldValue187.setName("stiffness")
fieldValue187.setValue("1 1 1")

ProtoInstance186.addFieldValue(fieldValue187)
fieldValue188 = x3d.fieldValue()
fieldValue188.setName("name")
fieldValue188.setValue("r_hip")

ProtoInstance186.addFieldValue(fieldValue188)
fieldValue189 = x3d.fieldValue()
fieldValue189.setName("center")
fieldValue189.setValue("-0.0949999988079071 0.917100012302399 0.00289999996311963")

ProtoInstance186.addFieldValue(fieldValue189)
fieldValue190 = x3d.fieldValue()
fieldValue190.setName("children")
ProtoInstance191 = x3d.ProtoInstance()
ProtoInstance191.setName("Joint")
ProtoInstance191.setDEF("hanim_r_knee_2")
fieldValue192 = x3d.fieldValue()
fieldValue192.setName("stiffness")
fieldValue192.setValue("1 1 1")

ProtoInstance191.addFieldValue(fieldValue192)
fieldValue193 = x3d.fieldValue()
fieldValue193.setName("name")
fieldValue193.setValue("r_knee")

ProtoInstance191.addFieldValue(fieldValue193)
fieldValue194 = x3d.fieldValue()
fieldValue194.setName("center")
fieldValue194.setValue("-0.0866999998688698 0.491299986839294 0.0318000018596649")

ProtoInstance191.addFieldValue(fieldValue194)
fieldValue195 = x3d.fieldValue()
fieldValue195.setName("children")
ProtoInstance196 = x3d.ProtoInstance()
ProtoInstance196.setName("Joint")
ProtoInstance196.setDEF("hanim_r_talocrural_2")
fieldValue197 = x3d.fieldValue()
fieldValue197.setName("stiffness")
fieldValue197.setValue("1 1 1")

ProtoInstance196.addFieldValue(fieldValue197)
fieldValue198 = x3d.fieldValue()
fieldValue198.setName("name")
fieldValue198.setValue("r_talocrural")

ProtoInstance196.addFieldValue(fieldValue198)
fieldValue199 = x3d.fieldValue()
fieldValue199.setName("center")
fieldValue199.setValue("-0.0800999999046326 0.0711999982595444 -0.0766000002622604")

ProtoInstance196.addFieldValue(fieldValue199)
fieldValue200 = x3d.fieldValue()
fieldValue200.setName("children")
ProtoInstance201 = x3d.ProtoInstance()
ProtoInstance201.setName("Joint")
ProtoInstance201.setDEF("hanim_r_metatarsophalangeal__2")
fieldValue202 = x3d.fieldValue()
fieldValue202.setName("stiffness")
fieldValue202.setValue("1 1 1")

ProtoInstance201.addFieldValue(fieldValue202)
fieldValue203 = x3d.fieldValue()
fieldValue203.setName("name")
fieldValue203.setValue("r_metatarsophalangeal_")

ProtoInstance201.addFieldValue(fieldValue203)
fieldValue204 = x3d.fieldValue()
fieldValue204.setName("center")
fieldValue204.setValue("-0.0800999999046326 0 0.0368000008165836")

ProtoInstance201.addFieldValue(fieldValue204)
fieldValue205 = x3d.fieldValue()
fieldValue205.setName("children")
ProtoInstance206 = x3d.ProtoInstance()
ProtoInstance206.setName("Segment")
ProtoInstance206.setDEF("hanim_r_middistal_2")
fieldValue207 = x3d.fieldValue()
fieldValue207.setName("name")
fieldValue207.setValue("r_middistal")

ProtoInstance206.addFieldValue(fieldValue207)
fieldValue208 = x3d.fieldValue()
fieldValue208.setName("children")
ProtoInstance209 = x3d.ProtoInstance()
ProtoInstance209.setName("Site")
ProtoInstance209.setDEF("hanim_r_middistal_tip_2")
fieldValue210 = x3d.fieldValue()
fieldValue210.setName("name")
fieldValue210.setValue("r_middistal_tip")

ProtoInstance209.addFieldValue(fieldValue210)
fieldValue211 = x3d.fieldValue()
fieldValue211.setName("translation")
fieldValue211.setValue("-0.104299999773502 -0.0227000005543232 0.144999995827675")

ProtoInstance209.addFieldValue(fieldValue211)

fieldValue208.addChildren(ProtoInstance209)
ProtoInstance212 = x3d.ProtoInstance()
ProtoInstance212.setName("Site")
ProtoInstance212.setDEF("hanim_r_tarsal_interphalangeal_phalanx6")
fieldValue213 = x3d.fieldValue()
fieldValue213.setName("name")
fieldValue213.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance212.addFieldValue(fieldValue213)
fieldValue214 = x3d.fieldValue()
fieldValue214.setName("translation")
fieldValue214.setValue("-0.152300000190735 0.0165999997407198 0.0895000025629997")

ProtoInstance212.addFieldValue(fieldValue214)

fieldValue208.addChildren(ProtoInstance212)
ProtoInstance215 = x3d.ProtoInstance()
ProtoInstance215.setName("Site")
ProtoInstance215.setDEF("hanim_r_tarsal_interphalangeal_phalanx2")
fieldValue216 = x3d.fieldValue()
fieldValue216.setName("name")
fieldValue216.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance215.addFieldValue(fieldValue216)
fieldValue217 = x3d.fieldValue()
fieldValue217.setName("translation")
fieldValue217.setValue("-0.0520999990403652 0.0260000005364418 0.012699999846518")

ProtoInstance215.addFieldValue(fieldValue217)

fieldValue208.addChildren(ProtoInstance215)
ProtoInstance218 = x3d.ProtoInstance()
ProtoInstance218.setName("Site")
ProtoInstance218.setDEF("hanim_r_tarsal_distal_phalanx3")
fieldValue219 = x3d.fieldValue()
fieldValue219.setName("name")
fieldValue219.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance218.addFieldValue(fieldValue219)
fieldValue220 = x3d.fieldValue()
fieldValue220.setName("translation")
fieldValue220.setValue("-0.088299997150898 0.013399999588728 0.138300001621246")

ProtoInstance218.addFieldValue(fieldValue220)

fieldValue208.addChildren(ProtoInstance218)

ProtoInstance206.addFieldValue(fieldValue208)

fieldValue205.addChildren(ProtoInstance206)

ProtoInstance201.addFieldValue(fieldValue205)

fieldValue200.addChildren(ProtoInstance201)
ProtoInstance221 = x3d.ProtoInstance()
ProtoInstance221.setName("Segment")
ProtoInstance221.setDEF("hanim_r_hindfoot_2")
fieldValue222 = x3d.fieldValue()
fieldValue222.setName("name")
fieldValue222.setValue("r_hindfoot")

ProtoInstance221.addFieldValue(fieldValue222)
fieldValue223 = x3d.fieldValue()
fieldValue223.setName("children")
ProtoInstance224 = x3d.ProtoInstance()
ProtoInstance224.setName("Site")
ProtoInstance224.setDEF("hanim_r_lateral_malleolus_2")
fieldValue225 = x3d.fieldValue()
fieldValue225.setName("name")
fieldValue225.setValue("r_lateral_malleolus")

ProtoInstance224.addFieldValue(fieldValue225)
fieldValue226 = x3d.fieldValue()
fieldValue226.setName("translation")
fieldValue226.setValue("-0.100599996745586 0.0658000037074089 -0.107500001788139")

ProtoInstance224.addFieldValue(fieldValue226)

fieldValue223.addChildren(ProtoInstance224)
ProtoInstance227 = x3d.ProtoInstance()
ProtoInstance227.setName("Site")
ProtoInstance227.setDEF("hanim_r_medial_malleolus_2")
fieldValue228 = x3d.fieldValue()
fieldValue228.setName("name")
fieldValue228.setValue("r_medial_malleolus")

ProtoInstance227.addFieldValue(fieldValue228)
fieldValue229 = x3d.fieldValue()
fieldValue229.setName("translation")
fieldValue229.setValue("-0.0590999983251095 0.0759999975562096 -0.092799998819828")

ProtoInstance227.addFieldValue(fieldValue229)

fieldValue223.addChildren(ProtoInstance227)
ProtoInstance230 = x3d.ProtoInstance()
ProtoInstance230.setName("Site")
ProtoInstance230.setDEF("hanim_r_sphyrion_2")
fieldValue231 = x3d.fieldValue()
fieldValue231.setName("name")
fieldValue231.setValue("r_sphyrion")

ProtoInstance230.addFieldValue(fieldValue231)
fieldValue232 = x3d.fieldValue()
fieldValue232.setName("translation")
fieldValue232.setValue("-0.0603000000119209 0.0610000006854534 -0.100199997425079")

ProtoInstance230.addFieldValue(fieldValue232)

fieldValue223.addChildren(ProtoInstance230)
ProtoInstance233 = x3d.ProtoInstance()
ProtoInstance233.setName("Site")
ProtoInstance233.setDEF("hanim_r_calcaneus_posterior_2")
fieldValue234 = x3d.fieldValue()
fieldValue234.setName("name")
fieldValue234.setValue("r_calcaneus_posterior")

ProtoInstance233.addFieldValue(fieldValue234)
fieldValue235 = x3d.fieldValue()
fieldValue235.setName("translation")
fieldValue235.setValue("-0.0692000016570091 0.0296999998390675 -0.122100003063679")

ProtoInstance233.addFieldValue(fieldValue235)

fieldValue223.addChildren(ProtoInstance233)

ProtoInstance221.addFieldValue(fieldValue223)

fieldValue200.addChildren(ProtoInstance221)

ProtoInstance196.addFieldValue(fieldValue200)

fieldValue195.addChildren(ProtoInstance196)
ProtoInstance236 = x3d.ProtoInstance()
ProtoInstance236.setName("Segment")
ProtoInstance236.setDEF("hanim_r_calf_2")
fieldValue237 = x3d.fieldValue()
fieldValue237.setName("name")
fieldValue237.setValue("r_calf")

ProtoInstance236.addFieldValue(fieldValue237)

fieldValue195.addChildren(ProtoInstance236)

ProtoInstance191.addFieldValue(fieldValue195)

fieldValue190.addChildren(ProtoInstance191)
ProtoInstance238 = x3d.ProtoInstance()
ProtoInstance238.setName("Segment")
ProtoInstance238.setDEF("hanim_r_thigh_2")
fieldValue239 = x3d.fieldValue()
fieldValue239.setName("name")
fieldValue239.setValue("r_thigh")

ProtoInstance238.addFieldValue(fieldValue239)
fieldValue240 = x3d.fieldValue()
fieldValue240.setName("children")
ProtoInstance241 = x3d.ProtoInstance()
ProtoInstance241.setName("Site")
ProtoInstance241.setDEF("hanim_r_knee_crease_2")
fieldValue242 = x3d.fieldValue()
fieldValue242.setName("name")
fieldValue242.setValue("r_knee_crease")

ProtoInstance241.addFieldValue(fieldValue242)
fieldValue243 = x3d.fieldValue()
fieldValue243.setName("translation")
fieldValue243.setValue("-0.0825000032782555 0.4932000041008 -0.032600000500679")

ProtoInstance241.addFieldValue(fieldValue243)

fieldValue240.addChildren(ProtoInstance241)
ProtoInstance244 = x3d.ProtoInstance()
ProtoInstance244.setName("Site")
ProtoInstance244.setDEF("hanim_r_femoral_lateral_epicondyles_2")
fieldValue245 = x3d.fieldValue()
fieldValue245.setName("name")
fieldValue245.setValue("r_femoral_lateral_epicondyles")

ProtoInstance244.addFieldValue(fieldValue245)
fieldValue246 = x3d.fieldValue()
fieldValue246.setName("translation")
fieldValue246.setValue("-0.142100006341934 0.499199986457825 0.0309999994933605")

ProtoInstance244.addFieldValue(fieldValue246)

fieldValue240.addChildren(ProtoInstance244)
ProtoInstance247 = x3d.ProtoInstance()
ProtoInstance247.setName("Site")
ProtoInstance247.setDEF("hanim_r_femoral_medial_epicondyles_2")
fieldValue248 = x3d.fieldValue()
fieldValue248.setName("name")
fieldValue248.setValue("r_femoral_lateral_epicondyles")

ProtoInstance247.addFieldValue(fieldValue248)
fieldValue249 = x3d.fieldValue()
fieldValue249.setName("translation")
fieldValue249.setValue("-0.0220999997109175 0.501399993896484 0.0288999993354082")

ProtoInstance247.addFieldValue(fieldValue249)

fieldValue240.addChildren(ProtoInstance247)

ProtoInstance238.addFieldValue(fieldValue240)

fieldValue190.addChildren(ProtoInstance238)

ProtoInstance186.addFieldValue(fieldValue190)

fieldValue121.addChildren(ProtoInstance186)
ProtoInstance250 = x3d.ProtoInstance()
ProtoInstance250.setName("Segment")
ProtoInstance250.setDEF("hanim_pelvis_2")
fieldValue251 = x3d.fieldValue()
fieldValue251.setName("name")
fieldValue251.setValue("pelvis")

ProtoInstance250.addFieldValue(fieldValue251)

fieldValue121.addChildren(ProtoInstance250)

ProtoInstance117.addFieldValue(fieldValue121)

fieldValue116.addChildren(ProtoInstance117)
ProtoInstance252 = x3d.ProtoInstance()
ProtoInstance252.setName("Joint")
ProtoInstance252.setDEF("hanim_vl5_2")
fieldValue253 = x3d.fieldValue()
fieldValue253.setName("stiffness")
fieldValue253.setValue("1 1 1")

ProtoInstance252.addFieldValue(fieldValue253)
fieldValue254 = x3d.fieldValue()
fieldValue254.setName("name")
fieldValue254.setValue("vl5")

ProtoInstance252.addFieldValue(fieldValue254)
fieldValue255 = x3d.fieldValue()
fieldValue255.setName("center")
fieldValue255.setValue("0.00279999990016222 1.05680000782013 -0.0776000022888184")

ProtoInstance252.addFieldValue(fieldValue255)
fieldValue256 = x3d.fieldValue()
fieldValue256.setName("children")
ProtoInstance257 = x3d.ProtoInstance()
ProtoInstance257.setName("Joint")
ProtoInstance257.setDEF("hanim_skullbase_2")
fieldValue258 = x3d.fieldValue()
fieldValue258.setName("stiffness")
fieldValue258.setValue("1 1 1")

ProtoInstance257.addFieldValue(fieldValue258)
fieldValue259 = x3d.fieldValue()
fieldValue259.setName("name")
fieldValue259.setValue("skullbase")

ProtoInstance257.addFieldValue(fieldValue259)
fieldValue260 = x3d.fieldValue()
fieldValue260.setName("center")
fieldValue260.setValue("0.00439999997615814 1.62090003490448 0.0236000008881092")

ProtoInstance257.addFieldValue(fieldValue260)
fieldValue261 = x3d.fieldValue()
fieldValue261.setName("children")
ProtoInstance262 = x3d.ProtoInstance()
ProtoInstance262.setName("Segment")
ProtoInstance262.setDEF("hanim_skull_2")
fieldValue263 = x3d.fieldValue()
fieldValue263.setName("name")
fieldValue263.setValue("skull")

ProtoInstance262.addFieldValue(fieldValue263)
fieldValue264 = x3d.fieldValue()
fieldValue264.setName("children")
ProtoInstance265 = x3d.ProtoInstance()
ProtoInstance265.setName("Site")
ProtoInstance265.setDEF("hanim_skull_tip_2")
fieldValue266 = x3d.fieldValue()
fieldValue266.setName("name")
fieldValue266.setValue("skull_tip")

ProtoInstance265.addFieldValue(fieldValue266)
fieldValue267 = x3d.fieldValue()
fieldValue267.setName("translation")
fieldValue267.setValue("0.00499999988824129 1.75039994716644 0.00549999997019768")

ProtoInstance265.addFieldValue(fieldValue267)

fieldValue264.addChildren(ProtoInstance265)
ProtoInstance268 = x3d.ProtoInstance()
ProtoInstance268.setName("Site")
ProtoInstance268.setDEF("hanim_sellion_2")
fieldValue269 = x3d.fieldValue()
fieldValue269.setName("name")
fieldValue269.setValue("sellion")

ProtoInstance268.addFieldValue(fieldValue269)
fieldValue270 = x3d.fieldValue()
fieldValue270.setName("translation")
fieldValue270.setValue("0.00579999992623925 1.63160002231598 0.0851999968290329")

ProtoInstance268.addFieldValue(fieldValue270)

fieldValue264.addChildren(ProtoInstance268)
ProtoInstance271 = x3d.ProtoInstance()
ProtoInstance271.setName("Site")
ProtoInstance271.setDEF("hanim_r_infraorbitale_2")
fieldValue272 = x3d.fieldValue()
fieldValue272.setName("name")
fieldValue272.setValue("r_infraorbitale")

ProtoInstance271.addFieldValue(fieldValue272)
fieldValue273 = x3d.fieldValue()
fieldValue273.setName("translation")
fieldValue273.setValue("-0.023700000718236 1.61710000038147 0.0751999989151955")

ProtoInstance271.addFieldValue(fieldValue273)

fieldValue264.addChildren(ProtoInstance271)
ProtoInstance274 = x3d.ProtoInstance()
ProtoInstance274.setName("Site")
ProtoInstance274.setDEF("hanim_l_infraorbitale_2")
fieldValue275 = x3d.fieldValue()
fieldValue275.setName("name")
fieldValue275.setValue("l_infraorbitale")

ProtoInstance274.addFieldValue(fieldValue275)
fieldValue276 = x3d.fieldValue()
fieldValue276.setName("translation")
fieldValue276.setValue("0.0340999998152256 1.61710000038147 0.0751999989151955")

ProtoInstance274.addFieldValue(fieldValue276)

fieldValue264.addChildren(ProtoInstance274)
ProtoInstance277 = x3d.ProtoInstance()
ProtoInstance277.setName("Site")
ProtoInstance277.setDEF("hanim_supramenton_2")
fieldValue278 = x3d.fieldValue()
fieldValue278.setName("name")
fieldValue278.setValue("supramenton")

ProtoInstance277.addFieldValue(fieldValue278)
fieldValue279 = x3d.fieldValue()
fieldValue279.setName("translation")
fieldValue279.setValue("0.00609999988228083 1.54100000858307 0.0804999992251396")

ProtoInstance277.addFieldValue(fieldValue279)

fieldValue264.addChildren(ProtoInstance277)
ProtoInstance280 = x3d.ProtoInstance()
ProtoInstance280.setName("Site")
ProtoInstance280.setDEF("hanim_r_tragion_2")
fieldValue281 = x3d.fieldValue()
fieldValue281.setName("name")
fieldValue281.setValue("r_tragion")

ProtoInstance280.addFieldValue(fieldValue281)
fieldValue282 = x3d.fieldValue()
fieldValue282.setName("translation")
fieldValue282.setValue("-0.0645999982953072 1.63469994068146 0.0302000008523464")

ProtoInstance280.addFieldValue(fieldValue282)

fieldValue264.addChildren(ProtoInstance280)
ProtoInstance283 = x3d.ProtoInstance()
ProtoInstance283.setName("Site")
ProtoInstance283.setDEF("hanim_r_gonion_2")
fieldValue284 = x3d.fieldValue()
fieldValue284.setName("name")
fieldValue284.setValue("r_gonion")

ProtoInstance283.addFieldValue(fieldValue284)
fieldValue285 = x3d.fieldValue()
fieldValue285.setName("translation")
fieldValue285.setValue("-0.0520000010728836 1.55289995670319 0.0346999987959862")

ProtoInstance283.addFieldValue(fieldValue285)

fieldValue264.addChildren(ProtoInstance283)
ProtoInstance286 = x3d.ProtoInstance()
ProtoInstance286.setName("Site")
ProtoInstance286.setDEF("hanim_l_tragion_2")
fieldValue287 = x3d.fieldValue()
fieldValue287.setName("name")
fieldValue287.setValue("l_tragion")

ProtoInstance286.addFieldValue(fieldValue287)
fieldValue288 = x3d.fieldValue()
fieldValue288.setName("translation")
fieldValue288.setValue("0.0738999992609024 1.63479995727539 0.0282000005245209")

ProtoInstance286.addFieldValue(fieldValue288)

fieldValue264.addChildren(ProtoInstance286)
ProtoInstance289 = x3d.ProtoInstance()
ProtoInstance289.setName("Site")
ProtoInstance289.setDEF("hanim_l_gonion_2")
fieldValue290 = x3d.fieldValue()
fieldValue290.setName("name")
fieldValue290.setValue("l_gonion")

ProtoInstance289.addFieldValue(fieldValue290)
fieldValue291 = x3d.fieldValue()
fieldValue291.setName("translation")
fieldValue291.setValue("0.0631000027060509 1.55299997329712 0.0329999998211861")

ProtoInstance289.addFieldValue(fieldValue291)

fieldValue264.addChildren(ProtoInstance289)
ProtoInstance292 = x3d.ProtoInstance()
ProtoInstance292.setName("Site")
ProtoInstance292.setDEF("hanim_nuchale_2")
fieldValue293 = x3d.fieldValue()
fieldValue293.setName("name")
fieldValue293.setValue("nuchale")

ProtoInstance292.addFieldValue(fieldValue293)
fieldValue294 = x3d.fieldValue()
fieldValue294.setName("translation")
fieldValue294.setValue("0.00389999989420176 1.59720003604889 -0.0795999988913536")

ProtoInstance292.addFieldValue(fieldValue294)

fieldValue264.addChildren(ProtoInstance292)

ProtoInstance262.addFieldValue(fieldValue264)

fieldValue261.addChildren(ProtoInstance262)

ProtoInstance257.addFieldValue(fieldValue261)

fieldValue256.addChildren(ProtoInstance257)
ProtoInstance295 = x3d.ProtoInstance()
ProtoInstance295.setName("Joint")
ProtoInstance295.setDEF("hanim_l_shoulder_2")
fieldValue296 = x3d.fieldValue()
fieldValue296.setName("stiffness")
fieldValue296.setValue("1 1 1")

ProtoInstance295.addFieldValue(fieldValue296)
fieldValue297 = x3d.fieldValue()
fieldValue297.setName("name")
fieldValue297.setValue("l_shoulder")

ProtoInstance295.addFieldValue(fieldValue297)
fieldValue298 = x3d.fieldValue()
fieldValue298.setName("center")
fieldValue298.setValue("0.202900007367134 1.43760001659393 -0.0386999994516373")

ProtoInstance295.addFieldValue(fieldValue298)
fieldValue299 = x3d.fieldValue()
fieldValue299.setName("children")
ProtoInstance300 = x3d.ProtoInstance()
ProtoInstance300.setName("Joint")
ProtoInstance300.setDEF("hanim_l_elbow_2")
fieldValue301 = x3d.fieldValue()
fieldValue301.setName("stiffness")
fieldValue301.setValue("1 1 1")

ProtoInstance300.addFieldValue(fieldValue301)
fieldValue302 = x3d.fieldValue()
fieldValue302.setName("name")
fieldValue302.setValue("l_elbow")

ProtoInstance300.addFieldValue(fieldValue302)
fieldValue303 = x3d.fieldValue()
fieldValue303.setName("center")
fieldValue303.setValue("0.201399996876717 1.1356999874115 -0.0681999996304512")

ProtoInstance300.addFieldValue(fieldValue303)
fieldValue304 = x3d.fieldValue()
fieldValue304.setName("children")
ProtoInstance305 = x3d.ProtoInstance()
ProtoInstance305.setName("Joint")
ProtoInstance305.setDEF("hanim_l_radiocarpal_2")
fieldValue306 = x3d.fieldValue()
fieldValue306.setName("stiffness")
fieldValue306.setValue("1 1 1")

ProtoInstance305.addFieldValue(fieldValue306)
fieldValue307 = x3d.fieldValue()
fieldValue307.setName("name")
fieldValue307.setValue("l_radiocarpal")

ProtoInstance305.addFieldValue(fieldValue307)
fieldValue308 = x3d.fieldValue()
fieldValue308.setName("center")
fieldValue308.setValue("0.198400005698204 0.866299986839294 -0.0582999996840954")

ProtoInstance305.addFieldValue(fieldValue308)
fieldValue309 = x3d.fieldValue()
fieldValue309.setName("children")
ProtoInstance310 = x3d.ProtoInstance()
ProtoInstance310.setName("Segment")
ProtoInstance310.setDEF("hanim_l_hand_2")
fieldValue311 = x3d.fieldValue()
fieldValue311.setName("name")
fieldValue311.setValue("l_hand")

ProtoInstance310.addFieldValue(fieldValue311)
fieldValue312 = x3d.fieldValue()
fieldValue312.setName("children")
ProtoInstance313 = x3d.ProtoInstance()
ProtoInstance313.setName("Site")
ProtoInstance313.setDEF("hanim_l_hand_tip_2")
fieldValue314 = x3d.fieldValue()
fieldValue314.setName("name")
fieldValue314.setValue("l_hand_tip")

ProtoInstance313.addFieldValue(fieldValue314)
fieldValue315 = x3d.fieldValue()
fieldValue315.setName("translation")
fieldValue315.setValue("0.208000004291534 0.673099994659424 -0.049100000411272")

ProtoInstance313.addFieldValue(fieldValue315)

fieldValue312.addChildren(ProtoInstance313)
ProtoInstance316 = x3d.ProtoInstance()
ProtoInstance316.setName("Site")
ProtoInstance316.setDEF("hanim_l_metacarpal_phalanx3")
fieldValue317 = x3d.fieldValue()
fieldValue317.setName("name")
fieldValue317.setValue("l_metacarpal_phalanx_2")

ProtoInstance316.addFieldValue(fieldValue317)
fieldValue318 = x3d.fieldValue()
fieldValue318.setName("translation")
fieldValue318.setValue("0.200900003314018 0.813899993896484 -0.023700000718236")

ProtoInstance316.addFieldValue(fieldValue318)

fieldValue312.addChildren(ProtoInstance316)
ProtoInstance319 = x3d.ProtoInstance()
ProtoInstance319.setName("Site")
ProtoInstance319.setDEF("hanim_l_dactylion_2")
fieldValue320 = x3d.fieldValue()
fieldValue320.setName("name")
fieldValue320.setValue("l_dactylion")

ProtoInstance319.addFieldValue(fieldValue320)
fieldValue321 = x3d.fieldValue()
fieldValue321.setName("translation")
fieldValue321.setValue("0.205599993467331 0.674300014972687 -0.048200000077486")

ProtoInstance319.addFieldValue(fieldValue321)

fieldValue312.addChildren(ProtoInstance319)
ProtoInstance322 = x3d.ProtoInstance()
ProtoInstance322.setName("Site")
ProtoInstance322.setDEF("hanim_l_ulnar_styloid_2")
fieldValue323 = x3d.fieldValue()
fieldValue323.setName("name")
fieldValue323.setValue("l_ulnar_styloid")

ProtoInstance322.addFieldValue(fieldValue323)
fieldValue324 = x3d.fieldValue()
fieldValue324.setName("translation")
fieldValue324.setValue("-0.214200004935265 0.85290002822876 -0.064800001680851")

ProtoInstance322.addFieldValue(fieldValue324)

fieldValue312.addChildren(ProtoInstance322)
ProtoInstance325 = x3d.ProtoInstance()
ProtoInstance325.setName("Site")
ProtoInstance325.setDEF("hanim_l_metacarpal_phalanx6")
fieldValue326 = x3d.fieldValue()
fieldValue326.setName("name")
fieldValue326.setValue("l_metacarpal_phalanx_5")

ProtoInstance325.addFieldValue(fieldValue326)
fieldValue327 = x3d.fieldValue()
fieldValue327.setName("translation")
fieldValue327.setValue("0.192900002002716 0.78600001335144 -0.112199999392033")

ProtoInstance325.addFieldValue(fieldValue327)

fieldValue312.addChildren(ProtoInstance325)

ProtoInstance310.addFieldValue(fieldValue312)

fieldValue309.addChildren(ProtoInstance310)

ProtoInstance305.addFieldValue(fieldValue309)

fieldValue304.addChildren(ProtoInstance305)
ProtoInstance328 = x3d.ProtoInstance()
ProtoInstance328.setName("Segment")
ProtoInstance328.setDEF("hanim_l_forearm_2")
fieldValue329 = x3d.fieldValue()
fieldValue329.setName("name")
fieldValue329.setValue("l_forearm")

ProtoInstance328.addFieldValue(fieldValue329)
fieldValue330 = x3d.fieldValue()
fieldValue330.setName("children")
ProtoInstance331 = x3d.ProtoInstance()
ProtoInstance331.setName("Site")
ProtoInstance331.setDEF("hanim_l_radial_styloid_2")
fieldValue332 = x3d.fieldValue()
fieldValue332.setName("name")
fieldValue332.setValue("l_radial_styloid")

ProtoInstance331.addFieldValue(fieldValue332)
fieldValue333 = x3d.fieldValue()
fieldValue333.setName("translation")
fieldValue333.setValue("0.190099999308586 0.864499986171722 -0.0414999984204769")

ProtoInstance331.addFieldValue(fieldValue333)

fieldValue330.addChildren(ProtoInstance331)
ProtoInstance334 = x3d.ProtoInstance()
ProtoInstance334.setName("Site")
ProtoInstance334.setDEF("hanim_l_olecranon_2")
fieldValue335 = x3d.fieldValue()
fieldValue335.setName("name")
fieldValue335.setValue("l_olecranon")

ProtoInstance334.addFieldValue(fieldValue335)
fieldValue336 = x3d.fieldValue()
fieldValue336.setName("translation")
fieldValue336.setValue("-0.196199998259544 1.13750004768372 -0.112300001084805")

ProtoInstance334.addFieldValue(fieldValue336)

fieldValue330.addChildren(ProtoInstance334)
ProtoInstance337 = x3d.ProtoInstance()
ProtoInstance337.setName("Site")
ProtoInstance337.setDEF("hanim_l_humeral_medial_epicondyles_2")
fieldValue338 = x3d.fieldValue()
fieldValue338.setName("name")
fieldValue338.setValue("l_humeral_medial_epicondyles")

ProtoInstance337.addFieldValue(fieldValue338)
fieldValue339 = x3d.fieldValue()
fieldValue339.setName("translation")
fieldValue339.setValue("0.173500001430511 1.12720000743866 -0.111299999058247")

ProtoInstance337.addFieldValue(fieldValue339)

fieldValue330.addChildren(ProtoInstance337)
ProtoInstance340 = x3d.ProtoInstance()
ProtoInstance340.setName("Site")
ProtoInstance340.setDEF("hanim_l_radiale_2")
fieldValue341 = x3d.fieldValue()
fieldValue341.setName("name")
fieldValue341.setValue("l_radiale")

ProtoInstance340.addFieldValue(fieldValue341)
fieldValue342 = x3d.fieldValue()
fieldValue342.setName("translation")
fieldValue342.setValue("0.218199998140335 1.12119996547699 -0.116700001060963")

ProtoInstance340.addFieldValue(fieldValue342)

fieldValue330.addChildren(ProtoInstance340)

ProtoInstance328.addFieldValue(fieldValue330)

fieldValue304.addChildren(ProtoInstance328)

ProtoInstance300.addFieldValue(fieldValue304)

fieldValue299.addChildren(ProtoInstance300)
ProtoInstance343 = x3d.ProtoInstance()
ProtoInstance343.setName("Segment")
ProtoInstance343.setDEF("hanim_l_upperarm_2")
fieldValue344 = x3d.fieldValue()
fieldValue344.setName("name")
fieldValue344.setValue("l_upperarm")

ProtoInstance343.addFieldValue(fieldValue344)
fieldValue345 = x3d.fieldValue()
fieldValue345.setName("children")
ProtoInstance346 = x3d.ProtoInstance()
ProtoInstance346.setName("Site")
ProtoInstance346.setDEF("hanim_l_humeral_lateral_epicondyles_2")
fieldValue347 = x3d.fieldValue()
fieldValue347.setName("name")
fieldValue347.setValue("l_humeral_lateral_epicondyles")

ProtoInstance346.addFieldValue(fieldValue347)
fieldValue348 = x3d.fieldValue()
fieldValue348.setName("translation")
fieldValue348.setValue("0.228000000119209 1.14820003509521 -0.109999999403954")

ProtoInstance346.addFieldValue(fieldValue348)

fieldValue345.addChildren(ProtoInstance346)

ProtoInstance343.addFieldValue(fieldValue345)

fieldValue299.addChildren(ProtoInstance343)

ProtoInstance295.addFieldValue(fieldValue299)

fieldValue256.addChildren(ProtoInstance295)
ProtoInstance349 = x3d.ProtoInstance()
ProtoInstance349.setName("Joint")
ProtoInstance349.setDEF("hanim_r_shoulder_2")
fieldValue350 = x3d.fieldValue()
fieldValue350.setName("stiffness")
fieldValue350.setValue("1 1 1")

ProtoInstance349.addFieldValue(fieldValue350)
fieldValue351 = x3d.fieldValue()
fieldValue351.setName("name")
fieldValue351.setValue("r_shoulder")

ProtoInstance349.addFieldValue(fieldValue351)
fieldValue352 = x3d.fieldValue()
fieldValue352.setName("center")
fieldValue352.setValue("-0.190699994564056 1.4407000541687 -0.0324999988079071")

ProtoInstance349.addFieldValue(fieldValue352)
fieldValue353 = x3d.fieldValue()
fieldValue353.setName("children")
ProtoInstance354 = x3d.ProtoInstance()
ProtoInstance354.setName("Joint")
ProtoInstance354.setDEF("hanim_r_elbow_2")
fieldValue355 = x3d.fieldValue()
fieldValue355.setName("stiffness")
fieldValue355.setValue("1 1 1")

ProtoInstance354.addFieldValue(fieldValue355)
fieldValue356 = x3d.fieldValue()
fieldValue356.setName("name")
fieldValue356.setValue("r_elbow")

ProtoInstance354.addFieldValue(fieldValue356)
fieldValue357 = x3d.fieldValue()
fieldValue357.setName("center")
fieldValue357.setValue("-0.194900006055832 1.13880002498627 -0.061999998986721")

ProtoInstance354.addFieldValue(fieldValue357)
fieldValue358 = x3d.fieldValue()
fieldValue358.setName("children")
ProtoInstance359 = x3d.ProtoInstance()
ProtoInstance359.setName("Joint")
ProtoInstance359.setDEF("hanim_r_radiocarpal_2")
fieldValue360 = x3d.fieldValue()
fieldValue360.setName("stiffness")
fieldValue360.setValue("1 1 1")

ProtoInstance359.addFieldValue(fieldValue360)
fieldValue361 = x3d.fieldValue()
fieldValue361.setName("name")
fieldValue361.setValue("r_radiocarpal")

ProtoInstance359.addFieldValue(fieldValue361)
fieldValue362 = x3d.fieldValue()
fieldValue362.setName("center")
fieldValue362.setValue("-0.195899993181229 0.869400024414063 -0.0520999990403652")

ProtoInstance359.addFieldValue(fieldValue362)
fieldValue363 = x3d.fieldValue()
fieldValue363.setName("children")
ProtoInstance364 = x3d.ProtoInstance()
ProtoInstance364.setName("Segment")
ProtoInstance364.setDEF("hanim_r_hand_2")
fieldValue365 = x3d.fieldValue()
fieldValue365.setName("name")
fieldValue365.setValue("r_hand")

ProtoInstance364.addFieldValue(fieldValue365)
fieldValue366 = x3d.fieldValue()
fieldValue366.setName("children")
ProtoInstance367 = x3d.ProtoInstance()
ProtoInstance367.setName("Site")
ProtoInstance367.setDEF("hanim_r_hand_tip_2")
fieldValue368 = x3d.fieldValue()
fieldValue368.setName("name")
fieldValue368.setValue("r_hand_tip")

ProtoInstance367.addFieldValue(fieldValue368)
fieldValue369 = x3d.fieldValue()
fieldValue369.setName("translation")
fieldValue369.setValue("-0.196899995207787 0.675800025463104 -0.0427000001072884")

ProtoInstance367.addFieldValue(fieldValue369)

fieldValue366.addChildren(ProtoInstance367)
ProtoInstance370 = x3d.ProtoInstance()
ProtoInstance370.setName("Site")
ProtoInstance370.setDEF("hanim_r_metacarpal_phalanx3")
fieldValue371 = x3d.fieldValue()
fieldValue371.setName("name")
fieldValue371.setValue("r_metacarpal_phalanx_2")

ProtoInstance370.addFieldValue(fieldValue371)
fieldValue372 = x3d.fieldValue()
fieldValue372.setName("translation")
fieldValue372.setValue("-0.197699993848801 0.816900014877319 -0.0176999997347593")

ProtoInstance370.addFieldValue(fieldValue372)

fieldValue366.addChildren(ProtoInstance370)
ProtoInstance373 = x3d.ProtoInstance()
ProtoInstance373.setName("Site")
ProtoInstance373.setDEF("hanim_r_dactylion_2")
fieldValue374 = x3d.fieldValue()
fieldValue374.setName("name")
fieldValue374.setValue("r_dactylion")

ProtoInstance373.addFieldValue(fieldValue374)
fieldValue375 = x3d.fieldValue()
fieldValue375.setName("translation")
fieldValue375.setValue("-0.194100007414818 0.677200019359589 -0.0423000007867813")

ProtoInstance373.addFieldValue(fieldValue375)

fieldValue366.addChildren(ProtoInstance373)
ProtoInstance376 = x3d.ProtoInstance()
ProtoInstance376.setName("Site")
ProtoInstance376.setDEF("hanim_r_ulnar_styloid_2")
fieldValue377 = x3d.fieldValue()
fieldValue377.setName("name")
fieldValue377.setValue("r_ulnar_styloid")

ProtoInstance376.addFieldValue(fieldValue377)
fieldValue378 = x3d.fieldValue()
fieldValue378.setName("translation")
fieldValue378.setValue("-0.21170000731945 0.856199979782104 -0.0584000013768673")

ProtoInstance376.addFieldValue(fieldValue378)

fieldValue366.addChildren(ProtoInstance376)
ProtoInstance379 = x3d.ProtoInstance()
ProtoInstance379.setName("Site")
ProtoInstance379.setDEF("hanim_r_metacarpal_phalanx6")
fieldValue380 = x3d.fieldValue()
fieldValue380.setName("name")
fieldValue380.setValue("r_metacarpal_phalanx_5")

ProtoInstance379.addFieldValue(fieldValue380)
fieldValue381 = x3d.fieldValue()
fieldValue381.setName("translation")
fieldValue381.setValue("-0.192900002002716 0.788999974727631 -0.10639999806881")

ProtoInstance379.addFieldValue(fieldValue381)

fieldValue366.addChildren(ProtoInstance379)

ProtoInstance364.addFieldValue(fieldValue366)

fieldValue363.addChildren(ProtoInstance364)

ProtoInstance359.addFieldValue(fieldValue363)

fieldValue358.addChildren(ProtoInstance359)
ProtoInstance382 = x3d.ProtoInstance()
ProtoInstance382.setName("Segment")
ProtoInstance382.setDEF("hanim_r_forearm_2")
fieldValue383 = x3d.fieldValue()
fieldValue383.setName("name")
fieldValue383.setValue("r_forearm")

ProtoInstance382.addFieldValue(fieldValue383)
fieldValue384 = x3d.fieldValue()
fieldValue384.setName("children")
ProtoInstance385 = x3d.ProtoInstance()
ProtoInstance385.setName("Site")
ProtoInstance385.setDEF("hanim_r_radial_styloid_2")
fieldValue386 = x3d.fieldValue()
fieldValue386.setName("name")
fieldValue386.setValue("r_radial_styloid")

ProtoInstance385.addFieldValue(fieldValue386)
fieldValue387 = x3d.fieldValue()
fieldValue387.setName("translation")
fieldValue387.setValue("-0.188400000333786 0.86760002374649 -0.0359999984502792")

ProtoInstance385.addFieldValue(fieldValue387)

fieldValue384.addChildren(ProtoInstance385)
ProtoInstance388 = x3d.ProtoInstance()
ProtoInstance388.setName("Site")
ProtoInstance388.setDEF("hanim_r_olecranon_2")
fieldValue389 = x3d.fieldValue()
fieldValue389.setName("name")
fieldValue389.setValue("r_olecranon")

ProtoInstance388.addFieldValue(fieldValue389)
fieldValue390 = x3d.fieldValue()
fieldValue390.setName("translation")
fieldValue390.setValue("-0.190699994564056 1.14049994945526 -0.106499999761581")

ProtoInstance388.addFieldValue(fieldValue390)

fieldValue384.addChildren(ProtoInstance388)
ProtoInstance391 = x3d.ProtoInstance()
ProtoInstance391.setName("Site")
ProtoInstance391.setDEF("hanim_r_humeral_medial_epicondyles_2")
fieldValue392 = x3d.fieldValue()
fieldValue392.setName("name")
fieldValue392.setValue("r_humeral_medial_epicondyles")

ProtoInstance391.addFieldValue(fieldValue392)
fieldValue393 = x3d.fieldValue()
fieldValue393.setName("translation")
fieldValue393.setValue("-0.167999997735024 1.12979996204376 -0.106200002133846")

ProtoInstance391.addFieldValue(fieldValue393)

fieldValue384.addChildren(ProtoInstance391)
ProtoInstance394 = x3d.ProtoInstance()
ProtoInstance394.setName("Site")
ProtoInstance394.setDEF("hanim_r_radiale_2")
fieldValue395 = x3d.fieldValue()
fieldValue395.setName("name")
fieldValue395.setValue("r_radiale")

ProtoInstance394.addFieldValue(fieldValue395)
fieldValue396 = x3d.fieldValue()
fieldValue396.setName("translation")
fieldValue396.setValue("-0.212999999523163 1.130499958992 -0.109099999070168")

ProtoInstance394.addFieldValue(fieldValue396)

fieldValue384.addChildren(ProtoInstance394)

ProtoInstance382.addFieldValue(fieldValue384)

fieldValue358.addChildren(ProtoInstance382)

ProtoInstance354.addFieldValue(fieldValue358)

fieldValue353.addChildren(ProtoInstance354)
ProtoInstance397 = x3d.ProtoInstance()
ProtoInstance397.setName("Segment")
ProtoInstance397.setDEF("hanim_r_upperarm_2")
fieldValue398 = x3d.fieldValue()
fieldValue398.setName("name")
fieldValue398.setValue("r_upperarm")

ProtoInstance397.addFieldValue(fieldValue398)
fieldValue399 = x3d.fieldValue()
fieldValue399.setName("children")
ProtoInstance400 = x3d.ProtoInstance()
ProtoInstance400.setName("Site")
ProtoInstance400.setDEF("hanim_r_humeral_lateral_epicondyles_2")
fieldValue401 = x3d.fieldValue()
fieldValue401.setName("name")
fieldValue401.setValue("r_humeral_lateral_epicondyles")

ProtoInstance400.addFieldValue(fieldValue401)
fieldValue402 = x3d.fieldValue()
fieldValue402.setName("translation")
fieldValue402.setValue("-0.222399994730949 1.15170001983643 -0.103299997746944")

ProtoInstance400.addFieldValue(fieldValue402)

fieldValue399.addChildren(ProtoInstance400)

ProtoInstance397.addFieldValue(fieldValue399)

fieldValue353.addChildren(ProtoInstance397)

ProtoInstance349.addFieldValue(fieldValue353)

fieldValue256.addChildren(ProtoInstance349)
ProtoInstance403 = x3d.ProtoInstance()
ProtoInstance403.setName("Segment")
ProtoInstance403.setDEF("hanim_l5_2")
fieldValue404 = x3d.fieldValue()
fieldValue404.setName("name")
fieldValue404.setValue("l5")

ProtoInstance403.addFieldValue(fieldValue404)
fieldValue405 = x3d.fieldValue()
fieldValue405.setName("children")
ProtoInstance406 = x3d.ProtoInstance()
ProtoInstance406.setName("Site")
ProtoInstance406.setDEF("hanim_r_clavicale_2")
fieldValue407 = x3d.fieldValue()
fieldValue407.setName("name")
fieldValue407.setValue("r_clavicale")

ProtoInstance406.addFieldValue(fieldValue407)
fieldValue408 = x3d.fieldValue()
fieldValue408.setName("translation")
fieldValue408.setValue("-0.0115000000223517 1.49430000782013 0.0399999991059303")

ProtoInstance406.addFieldValue(fieldValue408)

fieldValue405.addChildren(ProtoInstance406)
ProtoInstance409 = x3d.ProtoInstance()
ProtoInstance409.setName("Site")
ProtoInstance409.setDEF("hanim_suprasternale_2")
fieldValue410 = x3d.fieldValue()
fieldValue410.setName("name")
fieldValue410.setValue("suprasternale")

ProtoInstance409.addFieldValue(fieldValue410)
fieldValue411 = x3d.fieldValue()
fieldValue411.setName("translation")
fieldValue411.setValue("0.00839999970048666 1.47140002250671 0.0551000013947487")

ProtoInstance409.addFieldValue(fieldValue411)

fieldValue405.addChildren(ProtoInstance409)
ProtoInstance412 = x3d.ProtoInstance()
ProtoInstance412.setName("Site")
ProtoInstance412.setDEF("hanim_l_clavicale_2")
fieldValue413 = x3d.fieldValue()
fieldValue413.setName("name")
fieldValue413.setValue("l_clavicale")

ProtoInstance412.addFieldValue(fieldValue413)
fieldValue414 = x3d.fieldValue()
fieldValue414.setName("translation")
fieldValue414.setValue("0.0271000005304813 1.49430000782013 0.0394000001251698")

ProtoInstance412.addFieldValue(fieldValue414)

fieldValue405.addChildren(ProtoInstance412)
ProtoInstance415 = x3d.ProtoInstance()
ProtoInstance415.setName("Site")
ProtoInstance415.setDEF("hanim_r_thelion_2")
fieldValue416 = x3d.fieldValue()
fieldValue416.setName("name")
fieldValue416.setValue("r_thelion")

ProtoInstance415.addFieldValue(fieldValue416)
fieldValue417 = x3d.fieldValue()
fieldValue417.setName("translation")
fieldValue417.setValue("-0.0736000016331673 1.33850002288818 0.121699996292591")

ProtoInstance415.addFieldValue(fieldValue417)

fieldValue405.addChildren(ProtoInstance415)
ProtoInstance418 = x3d.ProtoInstance()
ProtoInstance418.setName("Site")
ProtoInstance418.setDEF("hanim_l_thelion_2")
fieldValue419 = x3d.fieldValue()
fieldValue419.setName("name")
fieldValue419.setValue("l_thelion")

ProtoInstance418.addFieldValue(fieldValue419)
fieldValue420 = x3d.fieldValue()
fieldValue420.setName("translation")
fieldValue420.setValue("0.0917999967932701 1.33819997310638 0.119199998676777")

ProtoInstance418.addFieldValue(fieldValue420)

fieldValue405.addChildren(ProtoInstance418)
ProtoInstance421 = x3d.ProtoInstance()
ProtoInstance421.setName("Site")
ProtoInstance421.setDEF("hanim_substernale_2")
fieldValue422 = x3d.fieldValue()
fieldValue422.setName("name")
fieldValue422.setValue("substernale")

ProtoInstance421.addFieldValue(fieldValue422)
fieldValue423 = x3d.fieldValue()
fieldValue423.setName("translation")
fieldValue423.setValue("0.008500000461936 1.29949998855591 0.114699997007847")

ProtoInstance421.addFieldValue(fieldValue423)

fieldValue405.addChildren(ProtoInstance421)
ProtoInstance424 = x3d.ProtoInstance()
ProtoInstance424.setName("Site")
ProtoInstance424.setDEF("hanim_r_rib10_2")
fieldValue425 = x3d.fieldValue()
fieldValue425.setName("name")
fieldValue425.setValue("r_rib10")

ProtoInstance424.addFieldValue(fieldValue425)
fieldValue426 = x3d.fieldValue()
fieldValue426.setName("translation")
fieldValue426.setValue("-0.0710999965667725 1.19410002231598 0.101599998772144")

ProtoInstance424.addFieldValue(fieldValue426)

fieldValue405.addChildren(ProtoInstance424)
ProtoInstance427 = x3d.ProtoInstance()
ProtoInstance427.setName("Site")
ProtoInstance427.setDEF("hanim_l_rib10_2")
fieldValue428 = x3d.fieldValue()
fieldValue428.setName("name")
fieldValue428.setValue("l_rib10")

ProtoInstance427.addFieldValue(fieldValue428)
fieldValue429 = x3d.fieldValue()
fieldValue429.setName("translation")
fieldValue429.setValue("0.0870999991893768 1.19249999523163 0.099200002849102")

ProtoInstance427.addFieldValue(fieldValue429)

fieldValue405.addChildren(ProtoInstance427)
ProtoInstance430 = x3d.ProtoInstance()
ProtoInstance430.setName("Site")
ProtoInstance430.setDEF("hanim_cervicale_2")
fieldValue431 = x3d.fieldValue()
fieldValue431.setName("name")
fieldValue431.setValue("cervicale")

ProtoInstance430.addFieldValue(fieldValue431)
fieldValue432 = x3d.fieldValue()
fieldValue432.setName("translation")
fieldValue432.setValue("0.0063999998383224 1.51999998092651 -0.0815000012516975")

ProtoInstance430.addFieldValue(fieldValue432)

fieldValue405.addChildren(ProtoInstance430)
ProtoInstance433 = x3d.ProtoInstance()
ProtoInstance433.setName("Site")
ProtoInstance433.setDEF("hanim_spine_2_lower_back_2")
fieldValue434 = x3d.fieldValue()
fieldValue434.setName("name")
fieldValue434.setValue("spine_2_lower_back")

ProtoInstance433.addFieldValue(fieldValue434)
fieldValue435 = x3d.fieldValue()
fieldValue435.setName("translation")
fieldValue435.setValue("0.00490000005811453 1.19079995155334 -0.111299999058247")

ProtoInstance433.addFieldValue(fieldValue435)

fieldValue405.addChildren(ProtoInstance433)
ProtoInstance436 = x3d.ProtoInstance()
ProtoInstance436.setName("Site")
ProtoInstance436.setDEF("hanim_waist_preferred_posterior_2")
fieldValue437 = x3d.fieldValue()
fieldValue437.setName("name")
fieldValue437.setValue("waist_preferred_posterior")

ProtoInstance436.addFieldValue(fieldValue437)
fieldValue438 = x3d.fieldValue()
fieldValue438.setName("translation")
fieldValue438.setValue("0.28999999165535 1.09150004386902 -0.109099999070168")

ProtoInstance436.addFieldValue(fieldValue438)

fieldValue405.addChildren(ProtoInstance436)
ProtoInstance439 = x3d.ProtoInstance()
ProtoInstance439.setName("Site")
ProtoInstance439.setDEF("hanim_r_acromion_2")
fieldValue440 = x3d.fieldValue()
fieldValue440.setName("name")
fieldValue440.setValue("r_acromion")

ProtoInstance439.addFieldValue(fieldValue440)
fieldValue441 = x3d.fieldValue()
fieldValue441.setName("translation")
fieldValue441.setValue("-0.190500006079674 1.47909998893738 -0.0430999994277954")

ProtoInstance439.addFieldValue(fieldValue441)

fieldValue405.addChildren(ProtoInstance439)
ProtoInstance442 = x3d.ProtoInstance()
ProtoInstance442.setName("Site")
ProtoInstance442.setDEF("hanim_r_axilla_proximal_2")
fieldValue443 = x3d.fieldValue()
fieldValue443.setName("name")
fieldValue443.setValue("r_axilla_proximal")

ProtoInstance442.addFieldValue(fieldValue443)
fieldValue444 = x3d.fieldValue()
fieldValue444.setName("translation")
fieldValue444.setValue("-0.162599995732307 1.40719997882843 -0.00310000008903444")

ProtoInstance442.addFieldValue(fieldValue444)

fieldValue405.addChildren(ProtoInstance442)
ProtoInstance445 = x3d.ProtoInstance()
ProtoInstance445.setName("Site")
ProtoInstance445.setDEF("hanim_r_axilla_distal_2")
fieldValue446 = x3d.fieldValue()
fieldValue446.setName("name")
fieldValue446.setValue("r_axilla_distal")

ProtoInstance445.addFieldValue(fieldValue446)
fieldValue447 = x3d.fieldValue()
fieldValue447.setName("translation")
fieldValue447.setValue("-0.160300001502037 1.40980005264282 -0.0825999975204468")

ProtoInstance445.addFieldValue(fieldValue447)

fieldValue405.addChildren(ProtoInstance445)
ProtoInstance448 = x3d.ProtoInstance()
ProtoInstance448.setName("Site")
ProtoInstance448.setDEF("hanim_l_acromion_2")
fieldValue449 = x3d.fieldValue()
fieldValue449.setName("name")
fieldValue449.setValue("l_acromion")

ProtoInstance448.addFieldValue(fieldValue449)
fieldValue450 = x3d.fieldValue()
fieldValue450.setName("translation")
fieldValue450.setValue("0.203199997544289 1.47599995136261 -0.0489999987185001")

ProtoInstance448.addFieldValue(fieldValue450)

fieldValue405.addChildren(ProtoInstance448)
ProtoInstance451 = x3d.ProtoInstance()
ProtoInstance451.setName("Site")
ProtoInstance451.setDEF("hanim_l_axilla_proximal_2")
fieldValue452 = x3d.fieldValue()
fieldValue452.setName("name")
fieldValue452.setValue("l_axilla_proximal")

ProtoInstance451.addFieldValue(fieldValue452)
fieldValue453 = x3d.fieldValue()
fieldValue453.setName("translation")
fieldValue453.setValue("0.177699998021126 1.40649998188019 -0.00749999983236194")

ProtoInstance451.addFieldValue(fieldValue453)

fieldValue405.addChildren(ProtoInstance451)
ProtoInstance454 = x3d.ProtoInstance()
ProtoInstance454.setName("Site")
ProtoInstance454.setDEF("hanim_l_axilla_distal_2")
fieldValue455 = x3d.fieldValue()
fieldValue455.setName("name")
fieldValue455.setValue("l_axilla_distal")

ProtoInstance454.addFieldValue(fieldValue455)
fieldValue456 = x3d.fieldValue()
fieldValue456.setName("translation")
fieldValue456.setValue("0.17059999704361 1.40719997882843 -0.0874999985098839")

ProtoInstance454.addFieldValue(fieldValue456)

fieldValue405.addChildren(ProtoInstance454)
ProtoInstance457 = x3d.ProtoInstance()
ProtoInstance457.setName("Site")
ProtoInstance457.setDEF("hanim_r_neck_base_2")
fieldValue458 = x3d.fieldValue()
fieldValue458.setName("name")
fieldValue458.setValue("r_neck_base")

ProtoInstance457.addFieldValue(fieldValue458)
fieldValue459 = x3d.fieldValue()
fieldValue459.setName("translation")
fieldValue459.setValue("-0.0419000014662743 1.51489996910095 -0.0219999998807907")

ProtoInstance457.addFieldValue(fieldValue459)

fieldValue405.addChildren(ProtoInstance457)
ProtoInstance460 = x3d.ProtoInstance()
ProtoInstance460.setName("Site")
ProtoInstance460.setDEF("hanim_l_neck_base_2")
fieldValue461 = x3d.fieldValue()
fieldValue461.setName("name")
fieldValue461.setValue("l_neck_base")

ProtoInstance460.addFieldValue(fieldValue461)
fieldValue462 = x3d.fieldValue()
fieldValue462.setName("translation")
fieldValue462.setValue("0.0645999982953072 1.51409995555878 -0.0379999987781048")

ProtoInstance460.addFieldValue(fieldValue462)

fieldValue405.addChildren(ProtoInstance460)
ProtoInstance463 = x3d.ProtoInstance()
ProtoInstance463.setName("Site")
ProtoInstance463.setDEF("hanim_navel_2")
fieldValue464 = x3d.fieldValue()
fieldValue464.setName("name")
fieldValue464.setValue("navel")

ProtoInstance463.addFieldValue(fieldValue464)
fieldValue465 = x3d.fieldValue()
fieldValue465.setName("translation")
fieldValue465.setValue("0.00689999992027879 1.09660005569458 0.101700000464916")

ProtoInstance463.addFieldValue(fieldValue465)

fieldValue405.addChildren(ProtoInstance463)

ProtoInstance403.addFieldValue(fieldValue405)

fieldValue256.addChildren(ProtoInstance403)

ProtoInstance252.addFieldValue(fieldValue256)

fieldValue116.addChildren(ProtoInstance252)
ProtoInstance466 = x3d.ProtoInstance()
ProtoInstance466.setName("Segment")
ProtoInstance466.setDEF("hanim_sacrum_2")
fieldValue467 = x3d.fieldValue()
fieldValue467.setName("name")
fieldValue467.setValue("sacrum")

ProtoInstance466.addFieldValue(fieldValue467)
fieldValue468 = x3d.fieldValue()
fieldValue468.setName("children")
ProtoInstance469 = x3d.ProtoInstance()
ProtoInstance469.setName("Site")
ProtoInstance469.setDEF("hanim_r_asis_2")
fieldValue470 = x3d.fieldValue()
fieldValue470.setName("name")
fieldValue470.setValue("r_asis")

ProtoInstance469.addFieldValue(fieldValue470)
fieldValue471 = x3d.fieldValue()
fieldValue471.setName("translation")
fieldValue471.setValue("-0.088699996471405 1.00209999084473 0.111199997365475")

ProtoInstance469.addFieldValue(fieldValue471)

fieldValue468.addChildren(ProtoInstance469)
ProtoInstance472 = x3d.ProtoInstance()
ProtoInstance472.setName("Site")
ProtoInstance472.setDEF("hanim_l_asis_2")
fieldValue473 = x3d.fieldValue()
fieldValue473.setName("name")
fieldValue473.setValue("l_asis")

ProtoInstance472.addFieldValue(fieldValue473)
fieldValue474 = x3d.fieldValue()
fieldValue474.setName("translation")
fieldValue474.setValue("0.0925000011920929 0.998300015926361 0.105200000107288")

ProtoInstance472.addFieldValue(fieldValue474)

fieldValue468.addChildren(ProtoInstance472)
ProtoInstance475 = x3d.ProtoInstance()
ProtoInstance475.setName("Site")
ProtoInstance475.setDEF("hanim_r_iliocristale_2")
fieldValue476 = x3d.fieldValue()
fieldValue476.setName("name")
fieldValue476.setValue("r_iliocristale")

ProtoInstance475.addFieldValue(fieldValue476)
fieldValue477 = x3d.fieldValue()
fieldValue477.setName("translation")
fieldValue477.setValue("-0.152500003576279 1.0628000497818 0.00350000010803342")

ProtoInstance475.addFieldValue(fieldValue477)

fieldValue468.addChildren(ProtoInstance475)
ProtoInstance478 = x3d.ProtoInstance()
ProtoInstance478.setName("Site")
ProtoInstance478.setDEF("hanim_r_trochanterion_2")
fieldValue479 = x3d.fieldValue()
fieldValue479.setName("name")
fieldValue479.setValue("r_trochanterion")

ProtoInstance478.addFieldValue(fieldValue479)
fieldValue480 = x3d.fieldValue()
fieldValue480.setName("translation")
fieldValue480.setValue("-0.16889999806881 0.841899991035461 0.0351999998092651")

ProtoInstance478.addFieldValue(fieldValue480)

fieldValue468.addChildren(ProtoInstance478)
ProtoInstance481 = x3d.ProtoInstance()
ProtoInstance481.setName("Site")
ProtoInstance481.setDEF("hanim_l_iliocristale_2")
fieldValue482 = x3d.fieldValue()
fieldValue482.setName("name")
fieldValue482.setValue("l_iliocristale")

ProtoInstance481.addFieldValue(fieldValue482)
fieldValue483 = x3d.fieldValue()
fieldValue483.setName("translation")
fieldValue483.setValue("0.161200001835823 1.05369997024536 0.0007999999797903")

ProtoInstance481.addFieldValue(fieldValue483)

fieldValue468.addChildren(ProtoInstance481)
ProtoInstance484 = x3d.ProtoInstance()
ProtoInstance484.setName("Site")
ProtoInstance484.setDEF("hanim_l_trochanterion_2")
fieldValue485 = x3d.fieldValue()
fieldValue485.setName("name")
fieldValue485.setValue("l_trochanterion")

ProtoInstance484.addFieldValue(fieldValue485)
fieldValue486 = x3d.fieldValue()
fieldValue486.setName("translation")
fieldValue486.setValue("0.167699992656708 0.833599984645844 0.0303000006824732")

ProtoInstance484.addFieldValue(fieldValue486)

fieldValue468.addChildren(ProtoInstance484)
ProtoInstance487 = x3d.ProtoInstance()
ProtoInstance487.setName("Site")
ProtoInstance487.setDEF("hanim_r_psis_2")
fieldValue488 = x3d.fieldValue()
fieldValue488.setName("name")
fieldValue488.setValue("r_psis")

ProtoInstance487.addFieldValue(fieldValue488)
fieldValue489 = x3d.fieldValue()
fieldValue489.setName("translation")
fieldValue489.setValue("-0.0715999975800514 1.01900005340576 -0.113799996674061")

ProtoInstance487.addFieldValue(fieldValue489)

fieldValue468.addChildren(ProtoInstance487)
ProtoInstance490 = x3d.ProtoInstance()
ProtoInstance490.setName("Site")
ProtoInstance490.setDEF("hanim_l_psis_2")
fieldValue491 = x3d.fieldValue()
fieldValue491.setName("name")
fieldValue491.setValue("l_psis")

ProtoInstance490.addFieldValue(fieldValue491)
fieldValue492 = x3d.fieldValue()
fieldValue492.setName("translation")
fieldValue492.setValue("0.0773999989032745 1.01900005340576 -0.115099996328354")

ProtoInstance490.addFieldValue(fieldValue492)

fieldValue468.addChildren(ProtoInstance490)
ProtoInstance493 = x3d.ProtoInstance()
ProtoInstance493.setName("Site")
ProtoInstance493.setDEF("hanim_crotch_2")
fieldValue494 = x3d.fieldValue()
fieldValue494.setName("name")
fieldValue494.setValue("crotch")

ProtoInstance493.addFieldValue(fieldValue494)
fieldValue495 = x3d.fieldValue()
fieldValue495.setName("translation")
fieldValue495.setValue("0.00340000004507601 0.826600015163422 0.0256999991834164")

ProtoInstance493.addFieldValue(fieldValue495)

fieldValue468.addChildren(ProtoInstance493)

ProtoInstance466.addFieldValue(fieldValue468)

fieldValue116.addChildren(ProtoInstance466)

ProtoInstance112.addFieldValue(fieldValue116)

fieldValue111.addChildren(ProtoInstance112)

ProtoInstance110.addFieldValue(fieldValue111)
fieldValue496 = x3d.fieldValue()
fieldValue496.setName("joints")
ProtoInstance497 = x3d.ProtoInstance()
ProtoInstance497.setUSE("hanim_humanoid_root_2")

fieldValue496.addChildren(ProtoInstance497)
ProtoInstance498 = x3d.ProtoInstance()
ProtoInstance498.setUSE("hanim_sacroiliac_2")

fieldValue496.addChildren(ProtoInstance498)
ProtoInstance499 = x3d.ProtoInstance()
ProtoInstance499.setUSE("hanim_l_hip_2")

fieldValue496.addChildren(ProtoInstance499)
ProtoInstance500 = x3d.ProtoInstance()
ProtoInstance500.setUSE("hanim_l_knee_2")

fieldValue496.addChildren(ProtoInstance500)
ProtoInstance501 = x3d.ProtoInstance()
ProtoInstance501.setUSE("hanim_l_talocrural_2")

fieldValue496.addChildren(ProtoInstance501)
ProtoInstance502 = x3d.ProtoInstance()
ProtoInstance502.setUSE("hanim_l_metatarsophalangeal__2")

fieldValue496.addChildren(ProtoInstance502)
ProtoInstance503 = x3d.ProtoInstance()
ProtoInstance503.setUSE("hanim_r_hip_2")

fieldValue496.addChildren(ProtoInstance503)
ProtoInstance504 = x3d.ProtoInstance()
ProtoInstance504.setUSE("hanim_r_knee_2")

fieldValue496.addChildren(ProtoInstance504)
ProtoInstance505 = x3d.ProtoInstance()
ProtoInstance505.setUSE("hanim_r_talocrural_2")

fieldValue496.addChildren(ProtoInstance505)
ProtoInstance506 = x3d.ProtoInstance()
ProtoInstance506.setUSE("hanim_r_metatarsophalangeal__2")

fieldValue496.addChildren(ProtoInstance506)
ProtoInstance507 = x3d.ProtoInstance()
ProtoInstance507.setUSE("hanim_vl5_2")

fieldValue496.addChildren(ProtoInstance507)
ProtoInstance508 = x3d.ProtoInstance()
ProtoInstance508.setUSE("hanim_skullbase_2")

fieldValue496.addChildren(ProtoInstance508)
ProtoInstance509 = x3d.ProtoInstance()
ProtoInstance509.setUSE("hanim_l_shoulder_2")

fieldValue496.addChildren(ProtoInstance509)
ProtoInstance510 = x3d.ProtoInstance()
ProtoInstance510.setUSE("hanim_l_elbow_2")

fieldValue496.addChildren(ProtoInstance510)
ProtoInstance511 = x3d.ProtoInstance()
ProtoInstance511.setUSE("hanim_l_radiocarpal_2")

fieldValue496.addChildren(ProtoInstance511)
ProtoInstance512 = x3d.ProtoInstance()
ProtoInstance512.setUSE("hanim_r_shoulder_2")

fieldValue496.addChildren(ProtoInstance512)
ProtoInstance513 = x3d.ProtoInstance()
ProtoInstance513.setUSE("hanim_r_elbow_2")

fieldValue496.addChildren(ProtoInstance513)
ProtoInstance514 = x3d.ProtoInstance()
ProtoInstance514.setUSE("hanim_r_radiocarpal_2")

fieldValue496.addChildren(ProtoInstance514)

ProtoInstance110.addFieldValue(fieldValue496)
fieldValue515 = x3d.fieldValue()
fieldValue515.setName("segments")
ProtoInstance516 = x3d.ProtoInstance()
ProtoInstance516.setUSE("hanim_l_middistal_2")

fieldValue515.addChildren(ProtoInstance516)
ProtoInstance517 = x3d.ProtoInstance()
ProtoInstance517.setUSE("hanim_l_hindfoot_2")

fieldValue515.addChildren(ProtoInstance517)
ProtoInstance518 = x3d.ProtoInstance()
ProtoInstance518.setUSE("hanim_l_calf_2")

fieldValue515.addChildren(ProtoInstance518)
ProtoInstance519 = x3d.ProtoInstance()
ProtoInstance519.setUSE("hanim_l_thigh_2")

fieldValue515.addChildren(ProtoInstance519)
ProtoInstance520 = x3d.ProtoInstance()
ProtoInstance520.setUSE("hanim_r_middistal_2")

fieldValue515.addChildren(ProtoInstance520)
ProtoInstance521 = x3d.ProtoInstance()
ProtoInstance521.setUSE("hanim_r_hindfoot_2")

fieldValue515.addChildren(ProtoInstance521)
ProtoInstance522 = x3d.ProtoInstance()
ProtoInstance522.setUSE("hanim_r_calf_2")

fieldValue515.addChildren(ProtoInstance522)
ProtoInstance523 = x3d.ProtoInstance()
ProtoInstance523.setUSE("hanim_r_thigh_2")

fieldValue515.addChildren(ProtoInstance523)
ProtoInstance524 = x3d.ProtoInstance()
ProtoInstance524.setUSE("hanim_pelvis_2")

fieldValue515.addChildren(ProtoInstance524)
ProtoInstance525 = x3d.ProtoInstance()
ProtoInstance525.setUSE("hanim_skull_2")

fieldValue515.addChildren(ProtoInstance525)
ProtoInstance526 = x3d.ProtoInstance()
ProtoInstance526.setUSE("hanim_l_hand_2")

fieldValue515.addChildren(ProtoInstance526)
ProtoInstance527 = x3d.ProtoInstance()
ProtoInstance527.setUSE("hanim_l_forearm_2")

fieldValue515.addChildren(ProtoInstance527)
ProtoInstance528 = x3d.ProtoInstance()
ProtoInstance528.setUSE("hanim_l_upperarm_2")

fieldValue515.addChildren(ProtoInstance528)
ProtoInstance529 = x3d.ProtoInstance()
ProtoInstance529.setUSE("hanim_r_hand_2")

fieldValue515.addChildren(ProtoInstance529)
ProtoInstance530 = x3d.ProtoInstance()
ProtoInstance530.setUSE("hanim_r_forearm_2")

fieldValue515.addChildren(ProtoInstance530)
ProtoInstance531 = x3d.ProtoInstance()
ProtoInstance531.setUSE("hanim_r_upperarm_2")

fieldValue515.addChildren(ProtoInstance531)
ProtoInstance532 = x3d.ProtoInstance()
ProtoInstance532.setUSE("hanim_l5_2")

fieldValue515.addChildren(ProtoInstance532)
ProtoInstance533 = x3d.ProtoInstance()
ProtoInstance533.setUSE("hanim_sacrum_2")

fieldValue515.addChildren(ProtoInstance533)

ProtoInstance110.addFieldValue(fieldValue515)
fieldValue534 = x3d.fieldValue()
fieldValue534.setName("sites")
ProtoInstance535 = x3d.ProtoInstance()
ProtoInstance535.setUSE("hanim_l_middistal_tip_2")

fieldValue534.addChildren(ProtoInstance535)
ProtoInstance536 = x3d.ProtoInstance()
ProtoInstance536.setUSE("hanim_l_tarsal_interphalangeal_phalanx6")

fieldValue534.addChildren(ProtoInstance536)
ProtoInstance537 = x3d.ProtoInstance()
ProtoInstance537.setUSE("hanim_l_tarsal_interphalangeal_phalanx2")

fieldValue534.addChildren(ProtoInstance537)
ProtoInstance538 = x3d.ProtoInstance()
ProtoInstance538.setUSE("hanim_l_tarsal_distal_phalanx3")

fieldValue534.addChildren(ProtoInstance538)
ProtoInstance539 = x3d.ProtoInstance()
ProtoInstance539.setUSE("hanim_l_lateral_malleolus_2")

fieldValue534.addChildren(ProtoInstance539)
ProtoInstance540 = x3d.ProtoInstance()
ProtoInstance540.setUSE("hanim_l_medial_malleolus_2")

fieldValue534.addChildren(ProtoInstance540)
ProtoInstance541 = x3d.ProtoInstance()
ProtoInstance541.setUSE("hanim_l_sphyrion_2")

fieldValue534.addChildren(ProtoInstance541)
ProtoInstance542 = x3d.ProtoInstance()
ProtoInstance542.setUSE("hanim_l_calcaneus_posterior_2")

fieldValue534.addChildren(ProtoInstance542)
ProtoInstance543 = x3d.ProtoInstance()
ProtoInstance543.setUSE("hanim_l_knee_crease_2")

fieldValue534.addChildren(ProtoInstance543)
ProtoInstance544 = x3d.ProtoInstance()
ProtoInstance544.setUSE("hanim_l_femoral_lateral_epicondyles_2")

fieldValue534.addChildren(ProtoInstance544)
ProtoInstance545 = x3d.ProtoInstance()
ProtoInstance545.setUSE("hanim_l_femoral_medial_epicondyles_2")

fieldValue534.addChildren(ProtoInstance545)
ProtoInstance546 = x3d.ProtoInstance()
ProtoInstance546.setUSE("hanim_r_middistal_tip_2")

fieldValue534.addChildren(ProtoInstance546)
ProtoInstance547 = x3d.ProtoInstance()
ProtoInstance547.setUSE("hanim_r_tarsal_interphalangeal_phalanx6")

fieldValue534.addChildren(ProtoInstance547)
ProtoInstance548 = x3d.ProtoInstance()
ProtoInstance548.setUSE("hanim_r_tarsal_interphalangeal_phalanx2")

fieldValue534.addChildren(ProtoInstance548)
ProtoInstance549 = x3d.ProtoInstance()
ProtoInstance549.setUSE("hanim_r_tarsal_distal_phalanx3")

fieldValue534.addChildren(ProtoInstance549)
ProtoInstance550 = x3d.ProtoInstance()
ProtoInstance550.setUSE("hanim_r_lateral_malleolus_2")

fieldValue534.addChildren(ProtoInstance550)
ProtoInstance551 = x3d.ProtoInstance()
ProtoInstance551.setUSE("hanim_r_medial_malleolus_2")

fieldValue534.addChildren(ProtoInstance551)
ProtoInstance552 = x3d.ProtoInstance()
ProtoInstance552.setUSE("hanim_r_sphyrion_2")

fieldValue534.addChildren(ProtoInstance552)
ProtoInstance553 = x3d.ProtoInstance()
ProtoInstance553.setUSE("hanim_r_calcaneus_posterior_2")

fieldValue534.addChildren(ProtoInstance553)
ProtoInstance554 = x3d.ProtoInstance()
ProtoInstance554.setUSE("hanim_r_knee_crease_2")

fieldValue534.addChildren(ProtoInstance554)
ProtoInstance555 = x3d.ProtoInstance()
ProtoInstance555.setUSE("hanim_r_femoral_lateral_epicondyles_2")

fieldValue534.addChildren(ProtoInstance555)
ProtoInstance556 = x3d.ProtoInstance()
ProtoInstance556.setUSE("hanim_r_femoral_medial_epicondyles_2")

fieldValue534.addChildren(ProtoInstance556)
ProtoInstance557 = x3d.ProtoInstance()
ProtoInstance557.setUSE("hanim_skull_tip_2")

fieldValue534.addChildren(ProtoInstance557)
ProtoInstance558 = x3d.ProtoInstance()
ProtoInstance558.setUSE("hanim_sellion_2")

fieldValue534.addChildren(ProtoInstance558)
ProtoInstance559 = x3d.ProtoInstance()
ProtoInstance559.setUSE("hanim_r_infraorbitale_2")

fieldValue534.addChildren(ProtoInstance559)
ProtoInstance560 = x3d.ProtoInstance()
ProtoInstance560.setUSE("hanim_l_infraorbitale_2")

fieldValue534.addChildren(ProtoInstance560)
ProtoInstance561 = x3d.ProtoInstance()
ProtoInstance561.setUSE("hanim_supramenton_2")

fieldValue534.addChildren(ProtoInstance561)
ProtoInstance562 = x3d.ProtoInstance()
ProtoInstance562.setUSE("hanim_r_tragion_2")

fieldValue534.addChildren(ProtoInstance562)
ProtoInstance563 = x3d.ProtoInstance()
ProtoInstance563.setUSE("hanim_r_gonion_2")

fieldValue534.addChildren(ProtoInstance563)
ProtoInstance564 = x3d.ProtoInstance()
ProtoInstance564.setUSE("hanim_l_tragion_2")

fieldValue534.addChildren(ProtoInstance564)
ProtoInstance565 = x3d.ProtoInstance()
ProtoInstance565.setUSE("hanim_l_gonion_2")

fieldValue534.addChildren(ProtoInstance565)
ProtoInstance566 = x3d.ProtoInstance()
ProtoInstance566.setUSE("hanim_nuchale_2")

fieldValue534.addChildren(ProtoInstance566)
ProtoInstance567 = x3d.ProtoInstance()
ProtoInstance567.setUSE("hanim_l_hand_tip_2")

fieldValue534.addChildren(ProtoInstance567)
ProtoInstance568 = x3d.ProtoInstance()
ProtoInstance568.setUSE("hanim_l_metacarpal_phalanx3")

fieldValue534.addChildren(ProtoInstance568)
ProtoInstance569 = x3d.ProtoInstance()
ProtoInstance569.setUSE("hanim_l_dactylion_2")

fieldValue534.addChildren(ProtoInstance569)
ProtoInstance570 = x3d.ProtoInstance()
ProtoInstance570.setUSE("hanim_l_ulnar_styloid_2")

fieldValue534.addChildren(ProtoInstance570)
ProtoInstance571 = x3d.ProtoInstance()
ProtoInstance571.setUSE("hanim_l_metacarpal_phalanx6")

fieldValue534.addChildren(ProtoInstance571)
ProtoInstance572 = x3d.ProtoInstance()
ProtoInstance572.setUSE("hanim_l_radial_styloid_2")

fieldValue534.addChildren(ProtoInstance572)
ProtoInstance573 = x3d.ProtoInstance()
ProtoInstance573.setUSE("hanim_l_olecranon_2")

fieldValue534.addChildren(ProtoInstance573)
ProtoInstance574 = x3d.ProtoInstance()
ProtoInstance574.setUSE("hanim_l_humeral_medial_epicondyles_2")

fieldValue534.addChildren(ProtoInstance574)
ProtoInstance575 = x3d.ProtoInstance()
ProtoInstance575.setUSE("hanim_l_radiale_2")

fieldValue534.addChildren(ProtoInstance575)
ProtoInstance576 = x3d.ProtoInstance()
ProtoInstance576.setUSE("hanim_l_humeral_lateral_epicondyles_2")

fieldValue534.addChildren(ProtoInstance576)
ProtoInstance577 = x3d.ProtoInstance()
ProtoInstance577.setUSE("hanim_r_hand_tip_2")

fieldValue534.addChildren(ProtoInstance577)
ProtoInstance578 = x3d.ProtoInstance()
ProtoInstance578.setUSE("hanim_r_metacarpal_phalanx3")

fieldValue534.addChildren(ProtoInstance578)
ProtoInstance579 = x3d.ProtoInstance()
ProtoInstance579.setUSE("hanim_r_dactylion_2")

fieldValue534.addChildren(ProtoInstance579)
ProtoInstance580 = x3d.ProtoInstance()
ProtoInstance580.setUSE("hanim_r_ulnar_styloid_2")

fieldValue534.addChildren(ProtoInstance580)
ProtoInstance581 = x3d.ProtoInstance()
ProtoInstance581.setUSE("hanim_r_metacarpal_phalanx6")

fieldValue534.addChildren(ProtoInstance581)
ProtoInstance582 = x3d.ProtoInstance()
ProtoInstance582.setUSE("hanim_r_radial_styloid_2")

fieldValue534.addChildren(ProtoInstance582)
ProtoInstance583 = x3d.ProtoInstance()
ProtoInstance583.setUSE("hanim_r_olecranon_2")

fieldValue534.addChildren(ProtoInstance583)
ProtoInstance584 = x3d.ProtoInstance()
ProtoInstance584.setUSE("hanim_r_humeral_medial_epicondyles_2")

fieldValue534.addChildren(ProtoInstance584)
ProtoInstance585 = x3d.ProtoInstance()
ProtoInstance585.setUSE("hanim_r_radiale_2")

fieldValue534.addChildren(ProtoInstance585)
ProtoInstance586 = x3d.ProtoInstance()
ProtoInstance586.setUSE("hanim_r_humeral_lateral_epicondyles_2")

fieldValue534.addChildren(ProtoInstance586)
ProtoInstance587 = x3d.ProtoInstance()
ProtoInstance587.setUSE("hanim_r_clavicale_2")

fieldValue534.addChildren(ProtoInstance587)
ProtoInstance588 = x3d.ProtoInstance()
ProtoInstance588.setUSE("hanim_suprasternale_2")

fieldValue534.addChildren(ProtoInstance588)
ProtoInstance589 = x3d.ProtoInstance()
ProtoInstance589.setUSE("hanim_l_clavicale_2")

fieldValue534.addChildren(ProtoInstance589)
ProtoInstance590 = x3d.ProtoInstance()
ProtoInstance590.setUSE("hanim_r_thelion_2")

fieldValue534.addChildren(ProtoInstance590)
ProtoInstance591 = x3d.ProtoInstance()
ProtoInstance591.setUSE("hanim_l_thelion_2")

fieldValue534.addChildren(ProtoInstance591)
ProtoInstance592 = x3d.ProtoInstance()
ProtoInstance592.setUSE("hanim_substernale_2")

fieldValue534.addChildren(ProtoInstance592)
ProtoInstance593 = x3d.ProtoInstance()
ProtoInstance593.setUSE("hanim_r_rib10_2")

fieldValue534.addChildren(ProtoInstance593)
ProtoInstance594 = x3d.ProtoInstance()
ProtoInstance594.setUSE("hanim_l_rib10_2")

fieldValue534.addChildren(ProtoInstance594)
ProtoInstance595 = x3d.ProtoInstance()
ProtoInstance595.setUSE("hanim_cervicale_2")

fieldValue534.addChildren(ProtoInstance595)
ProtoInstance596 = x3d.ProtoInstance()
ProtoInstance596.setUSE("hanim_spine_2_lower_back_2")

fieldValue534.addChildren(ProtoInstance596)
ProtoInstance597 = x3d.ProtoInstance()
ProtoInstance597.setUSE("hanim_waist_preferred_posterior_2")

fieldValue534.addChildren(ProtoInstance597)
ProtoInstance598 = x3d.ProtoInstance()
ProtoInstance598.setUSE("hanim_r_acromion_2")

fieldValue534.addChildren(ProtoInstance598)
ProtoInstance599 = x3d.ProtoInstance()
ProtoInstance599.setUSE("hanim_r_axilla_proximal_2")

fieldValue534.addChildren(ProtoInstance599)
ProtoInstance600 = x3d.ProtoInstance()
ProtoInstance600.setUSE("hanim_r_axilla_distal_2")

fieldValue534.addChildren(ProtoInstance600)
ProtoInstance601 = x3d.ProtoInstance()
ProtoInstance601.setUSE("hanim_l_acromion_2")

fieldValue534.addChildren(ProtoInstance601)
ProtoInstance602 = x3d.ProtoInstance()
ProtoInstance602.setUSE("hanim_l_axilla_proximal_2")

fieldValue534.addChildren(ProtoInstance602)
ProtoInstance603 = x3d.ProtoInstance()
ProtoInstance603.setUSE("hanim_l_axilla_distal_2")

fieldValue534.addChildren(ProtoInstance603)
ProtoInstance604 = x3d.ProtoInstance()
ProtoInstance604.setUSE("hanim_r_neck_base_2")

fieldValue534.addChildren(ProtoInstance604)
ProtoInstance605 = x3d.ProtoInstance()
ProtoInstance605.setUSE("hanim_l_neck_base_2")

fieldValue534.addChildren(ProtoInstance605)
ProtoInstance606 = x3d.ProtoInstance()
ProtoInstance606.setUSE("hanim_navel_2")

fieldValue534.addChildren(ProtoInstance606)
ProtoInstance607 = x3d.ProtoInstance()
ProtoInstance607.setUSE("hanim_r_asis_2")

fieldValue534.addChildren(ProtoInstance607)
ProtoInstance608 = x3d.ProtoInstance()
ProtoInstance608.setUSE("hanim_l_asis_2")

fieldValue534.addChildren(ProtoInstance608)
ProtoInstance609 = x3d.ProtoInstance()
ProtoInstance609.setUSE("hanim_r_iliocristale_2")

fieldValue534.addChildren(ProtoInstance609)
ProtoInstance610 = x3d.ProtoInstance()
ProtoInstance610.setUSE("hanim_r_trochanterion_2")

fieldValue534.addChildren(ProtoInstance610)
ProtoInstance611 = x3d.ProtoInstance()
ProtoInstance611.setUSE("hanim_l_iliocristale_2")

fieldValue534.addChildren(ProtoInstance611)
ProtoInstance612 = x3d.ProtoInstance()
ProtoInstance612.setUSE("hanim_l_trochanterion_2")

fieldValue534.addChildren(ProtoInstance612)
ProtoInstance613 = x3d.ProtoInstance()
ProtoInstance613.setUSE("hanim_r_psis_2")

fieldValue534.addChildren(ProtoInstance613)
ProtoInstance614 = x3d.ProtoInstance()
ProtoInstance614.setUSE("hanim_l_psis_2")

fieldValue534.addChildren(ProtoInstance614)
ProtoInstance615 = x3d.ProtoInstance()
ProtoInstance615.setUSE("hanim_crotch_2")

fieldValue534.addChildren(ProtoInstance615)

ProtoInstance110.addFieldValue(fieldValue534)
fieldValue616 = x3d.fieldValue()
fieldValue616.setName("name")
fieldValue616.setValue("humanoid")

ProtoInstance110.addFieldValue(fieldValue616)
fieldValue617 = x3d.fieldValue()
fieldValue617.setName("info")
fieldValue617.setValue("\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;1\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"")

ProtoInstance110.addFieldValue(fieldValue617)

Scene4.addChildren(ProtoInstance110)
Group618 = x3d.Group()
Group618.setDEF("JointCenters_WorldInfo")
WorldInfo619 = x3d.WorldInfo()
WorldInfo619.setTitle("HANIM 200x Default Joint Centers, LOA&#8209;1")
WorldInfo619.setInfo([" HANIM 200x Default Joint Centers, Level-Of-Articulation 1 -------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "])

Group618.addChildren(WorldInfo619)

Scene4.addChildren(Group618)
NavigationInfo620 = x3d.NavigationInfo()
NavigationInfo620.setAvatarSize([0.25,1.60000002384186,0.75])
NavigationInfo620.setSpeed(1.5)

Scene4.addChildren(NavigationInfo620)

X3D0.setScene(Scene4)
X3D0.toFileX3D("../data/LOA1ExampleSourceWithDiamonds_RoundTrip.x3d")
