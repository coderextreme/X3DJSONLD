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
meta3.setContent("LOA4ExampleSourceWithDiamonds.wrl")

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
ProtoInstance137.setDEF("hanim_l_tarsotarsal_interphalangeal__2")
fieldValue138 = x3d.fieldValue()
fieldValue138.setName("stiffness")
fieldValue138.setValue("1 1 1")

ProtoInstance137.addFieldValue(fieldValue138)
fieldValue139 = x3d.fieldValue()
fieldValue139.setName("name")
fieldValue139.setValue("l_tarsotarsal_interphalangeal_")

ProtoInstance137.addFieldValue(fieldValue139)
fieldValue140 = x3d.fieldValue()
fieldValue140.setName("center")
fieldValue140.setValue("0.108599998056889 0.0000999999974737875 -0.0368000008165836")

ProtoInstance137.addFieldValue(fieldValue140)
fieldValue141 = x3d.fieldValue()
fieldValue141.setName("children")
ProtoInstance142 = x3d.ProtoInstance()
ProtoInstance142.setName("Joint")
ProtoInstance142.setDEF("hanim_l_metatarsophalangeal__2")
fieldValue143 = x3d.fieldValue()
fieldValue143.setName("stiffness")
fieldValue143.setValue("1 1 1")

ProtoInstance142.addFieldValue(fieldValue143)
fieldValue144 = x3d.fieldValue()
fieldValue144.setName("name")
fieldValue144.setValue("l_metatarsophalangeal_")

ProtoInstance142.addFieldValue(fieldValue144)
fieldValue145 = x3d.fieldValue()
fieldValue145.setName("center")
fieldValue145.setValue("0.108599998056889 0.0000999999974737875 0.0368000008165836")

ProtoInstance142.addFieldValue(fieldValue145)
fieldValue146 = x3d.fieldValue()
fieldValue146.setName("children")
ProtoInstance147 = x3d.ProtoInstance()
ProtoInstance147.setName("Joint")
ProtoInstance147.setDEF("hanim_l_tarsal_interphalangeal__2")
fieldValue148 = x3d.fieldValue()
fieldValue148.setName("stiffness")
fieldValue148.setValue("1 1 1")

ProtoInstance147.addFieldValue(fieldValue148)
fieldValue149 = x3d.fieldValue()
fieldValue149.setName("name")
fieldValue149.setValue("l_tarsal_interphalangeal_")

ProtoInstance147.addFieldValue(fieldValue149)
fieldValue150 = x3d.fieldValue()
fieldValue150.setName("center")
fieldValue150.setValue("0.108599998056889 0 0.0762000009417534")

ProtoInstance147.addFieldValue(fieldValue150)
fieldValue151 = x3d.fieldValue()
fieldValue151.setName("children")
ProtoInstance152 = x3d.ProtoInstance()
ProtoInstance152.setName("Segment")
ProtoInstance152.setDEF("hanim_l_tarsal_distal_phalanx2")
fieldValue153 = x3d.fieldValue()
fieldValue153.setName("name")
fieldValue153.setValue("l_tarsal_distal_phalanx_1")

ProtoInstance152.addFieldValue(fieldValue153)
fieldValue154 = x3d.fieldValue()
fieldValue154.setName("children")
ProtoInstance155 = x3d.ProtoInstance()
ProtoInstance155.setName("Site")
ProtoInstance155.setDEF("hanim_l_tarsal_distal_phalanx_1_tip_2")
fieldValue156 = x3d.fieldValue()
fieldValue156.setName("name")
fieldValue156.setValue("l_tarsal_distal_phalanx_1_tip")

ProtoInstance155.addFieldValue(fieldValue156)
fieldValue157 = x3d.fieldValue()
fieldValue157.setName("translation")
fieldValue157.setValue("0.135399997234344 0.0015999999595806 0.147599995136261")

ProtoInstance155.addFieldValue(fieldValue157)

fieldValue154.addChildren(ProtoInstance155)
ProtoInstance158 = x3d.ProtoInstance()
ProtoInstance158.setName("Site")
ProtoInstance158.setDEF("hanim_l_tarsal_interphalangeal_phalanx6")
fieldValue159 = x3d.fieldValue()
fieldValue159.setName("name")
fieldValue159.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance158.addFieldValue(fieldValue159)
fieldValue160 = x3d.fieldValue()
fieldValue160.setName("translation")
fieldValue160.setValue("0.182500004768372 0.00700000021606684 0.092799998819828")

ProtoInstance158.addFieldValue(fieldValue160)

fieldValue154.addChildren(ProtoInstance158)
ProtoInstance161 = x3d.ProtoInstance()
ProtoInstance161.setName("Site")
ProtoInstance161.setDEF("hanim_l_tarsal_distal_phalanx3")
fieldValue162 = x3d.fieldValue()
fieldValue162.setName("name")
fieldValue162.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance161.addFieldValue(fieldValue162)
fieldValue163 = x3d.fieldValue()
fieldValue163.setName("translation")
fieldValue163.setValue("0.119499996304512 0.00789999961853027 0.143299996852875")

ProtoInstance161.addFieldValue(fieldValue163)

fieldValue154.addChildren(ProtoInstance161)

ProtoInstance152.addFieldValue(fieldValue154)

fieldValue151.addChildren(ProtoInstance152)

ProtoInstance147.addFieldValue(fieldValue151)

fieldValue146.addChildren(ProtoInstance147)
ProtoInstance164 = x3d.ProtoInstance()
ProtoInstance164.setName("Segment")
ProtoInstance164.setDEF("hanim_l_middistal_2")
fieldValue165 = x3d.fieldValue()
fieldValue165.setName("name")
fieldValue165.setValue("l_middistal")

ProtoInstance164.addFieldValue(fieldValue165)
fieldValue166 = x3d.fieldValue()
fieldValue166.setName("children")
ProtoInstance167 = x3d.ProtoInstance()
ProtoInstance167.setName("Site")
ProtoInstance167.setDEF("hanim_l_tarsal_interphalangeal_phalanx2")
fieldValue168 = x3d.fieldValue()
fieldValue168.setName("name")
fieldValue168.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance167.addFieldValue(fieldValue168)
fieldValue169 = x3d.fieldValue()
fieldValue169.setName("translation")
fieldValue169.setValue("0.0816000029444695 0.023199999704957 0.0105999996885657")

ProtoInstance167.addFieldValue(fieldValue169)

fieldValue166.addChildren(ProtoInstance167)

ProtoInstance164.addFieldValue(fieldValue166)

fieldValue146.addChildren(ProtoInstance164)

ProtoInstance142.addFieldValue(fieldValue146)

fieldValue141.addChildren(ProtoInstance142)
ProtoInstance170 = x3d.ProtoInstance()
ProtoInstance170.setName("Segment")
ProtoInstance170.setDEF("hanim_l_midproximal_2")
fieldValue171 = x3d.fieldValue()
fieldValue171.setName("name")
fieldValue171.setValue("l_midproximal")

ProtoInstance170.addFieldValue(fieldValue171)

fieldValue141.addChildren(ProtoInstance170)

ProtoInstance137.addFieldValue(fieldValue141)

fieldValue136.addChildren(ProtoInstance137)
ProtoInstance172 = x3d.ProtoInstance()
ProtoInstance172.setName("Segment")
ProtoInstance172.setDEF("hanim_l_hindfoot_2")
fieldValue173 = x3d.fieldValue()
fieldValue173.setName("name")
fieldValue173.setValue("l_hindfoot")

ProtoInstance172.addFieldValue(fieldValue173)
fieldValue174 = x3d.fieldValue()
fieldValue174.setName("children")
ProtoInstance175 = x3d.ProtoInstance()
ProtoInstance175.setName("Site")
ProtoInstance175.setDEF("hanim_l_lateral_malleolus_2")
fieldValue176 = x3d.fieldValue()
fieldValue176.setName("name")
fieldValue176.setValue("l_lateral_malleolus")

ProtoInstance175.addFieldValue(fieldValue176)
fieldValue177 = x3d.fieldValue()
fieldValue177.setName("translation")
fieldValue177.setValue("0.130799993872643 0.0597000010311604 -0.103200003504753")

ProtoInstance175.addFieldValue(fieldValue177)

fieldValue174.addChildren(ProtoInstance175)
ProtoInstance178 = x3d.ProtoInstance()
ProtoInstance178.setName("Site")
ProtoInstance178.setDEF("hanim_l_medial_malleolus_2")
fieldValue179 = x3d.fieldValue()
fieldValue179.setName("name")
fieldValue179.setValue("l_medial_malleolus")

ProtoInstance178.addFieldValue(fieldValue179)
fieldValue180 = x3d.fieldValue()
fieldValue180.setName("translation")
fieldValue180.setValue("0.0890000015497208 0.0715999975800514 -0.0881000012159348")

ProtoInstance178.addFieldValue(fieldValue180)

fieldValue174.addChildren(ProtoInstance178)
ProtoInstance181 = x3d.ProtoInstance()
ProtoInstance181.setName("Site")
ProtoInstance181.setDEF("hanim_l_sphyrion_2")
fieldValue182 = x3d.fieldValue()
fieldValue182.setName("name")
fieldValue182.setValue("l_sphyrion")

ProtoInstance181.addFieldValue(fieldValue182)
fieldValue183 = x3d.fieldValue()
fieldValue183.setName("translation")
fieldValue183.setValue("0.0890000015497208 0.0575000010430813 -0.0943000018596649")

ProtoInstance181.addFieldValue(fieldValue183)

fieldValue174.addChildren(ProtoInstance181)
ProtoInstance184 = x3d.ProtoInstance()
ProtoInstance184.setName("Site")
ProtoInstance184.setDEF("hanim_l_calcaneus_posterior_2")
fieldValue185 = x3d.fieldValue()
fieldValue185.setName("name")
fieldValue185.setValue("l_calcaneus_posterior")

ProtoInstance184.addFieldValue(fieldValue185)
fieldValue186 = x3d.fieldValue()
fieldValue186.setName("translation")
fieldValue186.setValue("0.09740000218153 0.025900000706315 -0.11710000038147")

ProtoInstance184.addFieldValue(fieldValue186)

fieldValue174.addChildren(ProtoInstance184)

ProtoInstance172.addFieldValue(fieldValue174)

fieldValue136.addChildren(ProtoInstance172)

ProtoInstance132.addFieldValue(fieldValue136)

fieldValue131.addChildren(ProtoInstance132)
ProtoInstance187 = x3d.ProtoInstance()
ProtoInstance187.setName("Segment")
ProtoInstance187.setDEF("hanim_l_calf_2")
fieldValue188 = x3d.fieldValue()
fieldValue188.setName("name")
fieldValue188.setValue("l_calf")

ProtoInstance187.addFieldValue(fieldValue188)

fieldValue131.addChildren(ProtoInstance187)

ProtoInstance127.addFieldValue(fieldValue131)

fieldValue126.addChildren(ProtoInstance127)
ProtoInstance189 = x3d.ProtoInstance()
ProtoInstance189.setName("Segment")
ProtoInstance189.setDEF("hanim_l_thigh_2")
fieldValue190 = x3d.fieldValue()
fieldValue190.setName("name")
fieldValue190.setValue("l_thigh")

ProtoInstance189.addFieldValue(fieldValue190)
fieldValue191 = x3d.fieldValue()
fieldValue191.setName("children")
ProtoInstance192 = x3d.ProtoInstance()
ProtoInstance192.setName("Site")
ProtoInstance192.setDEF("hanim_l_knee_crease_2")
fieldValue193 = x3d.fieldValue()
fieldValue193.setName("name")
fieldValue193.setValue("l_knee_crease")

ProtoInstance192.addFieldValue(fieldValue193)
fieldValue194 = x3d.fieldValue()
fieldValue194.setName("translation")
fieldValue194.setValue("0.0992999970912933 0.488099992275238 -0.0308999996632338")

ProtoInstance192.addFieldValue(fieldValue194)

fieldValue191.addChildren(ProtoInstance192)
ProtoInstance195 = x3d.ProtoInstance()
ProtoInstance195.setName("Site")
ProtoInstance195.setDEF("hanim_l_femoral_lateral_epicondyles_2")
fieldValue196 = x3d.fieldValue()
fieldValue196.setName("name")
fieldValue196.setValue("l_femoral_lateral_epicondyles")

ProtoInstance195.addFieldValue(fieldValue196)
fieldValue197 = x3d.fieldValue()
fieldValue197.setName("translation")
fieldValue197.setValue("0.159799993038177 0.496699988842011 0.0296999998390675")

ProtoInstance195.addFieldValue(fieldValue197)

fieldValue191.addChildren(ProtoInstance195)
ProtoInstance198 = x3d.ProtoInstance()
ProtoInstance198.setName("Site")
ProtoInstance198.setDEF("hanim_l_femoral_medial_epicondyles_2")
fieldValue199 = x3d.fieldValue()
fieldValue199.setName("name")
fieldValue199.setValue("l_femoral_lateral_epicondyles")

ProtoInstance198.addFieldValue(fieldValue199)
fieldValue200 = x3d.fieldValue()
fieldValue200.setName("translation")
fieldValue200.setValue("0.0397999994456768 0.494599997997284 0.0303000006824732")

ProtoInstance198.addFieldValue(fieldValue200)

fieldValue191.addChildren(ProtoInstance198)

ProtoInstance189.addFieldValue(fieldValue191)

fieldValue126.addChildren(ProtoInstance189)

ProtoInstance122.addFieldValue(fieldValue126)

fieldValue121.addChildren(ProtoInstance122)
ProtoInstance201 = x3d.ProtoInstance()
ProtoInstance201.setName("Joint")
ProtoInstance201.setDEF("hanim_r_hip_2")
fieldValue202 = x3d.fieldValue()
fieldValue202.setName("stiffness")
fieldValue202.setValue("1 1 1")

ProtoInstance201.addFieldValue(fieldValue202)
fieldValue203 = x3d.fieldValue()
fieldValue203.setName("name")
fieldValue203.setValue("r_hip")

ProtoInstance201.addFieldValue(fieldValue203)
fieldValue204 = x3d.fieldValue()
fieldValue204.setName("center")
fieldValue204.setValue("-0.0949999988079071 0.917100012302399 0.00289999996311963")

ProtoInstance201.addFieldValue(fieldValue204)
fieldValue205 = x3d.fieldValue()
fieldValue205.setName("children")
ProtoInstance206 = x3d.ProtoInstance()
ProtoInstance206.setName("Joint")
ProtoInstance206.setDEF("hanim_r_knee_2")
fieldValue207 = x3d.fieldValue()
fieldValue207.setName("stiffness")
fieldValue207.setValue("1 1 1")

ProtoInstance206.addFieldValue(fieldValue207)
fieldValue208 = x3d.fieldValue()
fieldValue208.setName("name")
fieldValue208.setValue("r_knee")

ProtoInstance206.addFieldValue(fieldValue208)
fieldValue209 = x3d.fieldValue()
fieldValue209.setName("center")
fieldValue209.setValue("-0.0866999998688698 0.491299986839294 0.0318000018596649")

ProtoInstance206.addFieldValue(fieldValue209)
fieldValue210 = x3d.fieldValue()
fieldValue210.setName("children")
ProtoInstance211 = x3d.ProtoInstance()
ProtoInstance211.setName("Joint")
ProtoInstance211.setDEF("hanim_r_talocrural_2")
fieldValue212 = x3d.fieldValue()
fieldValue212.setName("stiffness")
fieldValue212.setValue("1 1 1")

ProtoInstance211.addFieldValue(fieldValue212)
fieldValue213 = x3d.fieldValue()
fieldValue213.setName("name")
fieldValue213.setValue("r_talocrural")

ProtoInstance211.addFieldValue(fieldValue213)
fieldValue214 = x3d.fieldValue()
fieldValue214.setName("center")
fieldValue214.setValue("-0.0800999999046326 0.0711999982595444 -0.0766000002622604")

ProtoInstance211.addFieldValue(fieldValue214)
fieldValue215 = x3d.fieldValue()
fieldValue215.setName("children")
ProtoInstance216 = x3d.ProtoInstance()
ProtoInstance216.setName("Joint")
ProtoInstance216.setDEF("hanim_r_tarsotarsal_interphalangeal__2")
fieldValue217 = x3d.fieldValue()
fieldValue217.setName("stiffness")
fieldValue217.setValue("1 1 1")

ProtoInstance216.addFieldValue(fieldValue217)
fieldValue218 = x3d.fieldValue()
fieldValue218.setName("name")
fieldValue218.setValue("r_tarsotarsal_interphalangeal_")

ProtoInstance216.addFieldValue(fieldValue218)
fieldValue219 = x3d.fieldValue()
fieldValue219.setName("center")
fieldValue219.setValue("-0.0800999999046326 0 -0.0368000008165836")

ProtoInstance216.addFieldValue(fieldValue219)
fieldValue220 = x3d.fieldValue()
fieldValue220.setName("children")
ProtoInstance221 = x3d.ProtoInstance()
ProtoInstance221.setName("Joint")
ProtoInstance221.setDEF("hanim_r_metatarsophalangeal__2")
fieldValue222 = x3d.fieldValue()
fieldValue222.setName("stiffness")
fieldValue222.setValue("1 1 1")

ProtoInstance221.addFieldValue(fieldValue222)
fieldValue223 = x3d.fieldValue()
fieldValue223.setName("name")
fieldValue223.setValue("r_metatarsophalangeal_")

ProtoInstance221.addFieldValue(fieldValue223)
fieldValue224 = x3d.fieldValue()
fieldValue224.setName("center")
fieldValue224.setValue("-0.0800999999046326 0 0.0368000008165836")

ProtoInstance221.addFieldValue(fieldValue224)
fieldValue225 = x3d.fieldValue()
fieldValue225.setName("children")
ProtoInstance226 = x3d.ProtoInstance()
ProtoInstance226.setName("Joint")
ProtoInstance226.setDEF("hanim_r_tarsal_interphalangeal__2")
fieldValue227 = x3d.fieldValue()
fieldValue227.setName("stiffness")
fieldValue227.setValue("1 1 1")

ProtoInstance226.addFieldValue(fieldValue227)
fieldValue228 = x3d.fieldValue()
fieldValue228.setName("name")
fieldValue228.setValue("r_tarsal_interphalangeal_")

ProtoInstance226.addFieldValue(fieldValue228)
fieldValue229 = x3d.fieldValue()
fieldValue229.setName("center")
fieldValue229.setValue("-0.0800999999046326 0.00389999989420176 0.0732000023126602")

ProtoInstance226.addFieldValue(fieldValue229)
fieldValue230 = x3d.fieldValue()
fieldValue230.setName("children")
ProtoInstance231 = x3d.ProtoInstance()
ProtoInstance231.setName("Segment")
ProtoInstance231.setDEF("hanim_r_tarsal_distal_phalanx2")
fieldValue232 = x3d.fieldValue()
fieldValue232.setName("name")
fieldValue232.setValue("r_tarsal_distal_phalanx_1")

ProtoInstance231.addFieldValue(fieldValue232)
fieldValue233 = x3d.fieldValue()
fieldValue233.setName("children")
ProtoInstance234 = x3d.ProtoInstance()
ProtoInstance234.setName("Site")
ProtoInstance234.setDEF("hanim_r_tarsal_distal_phalanx_1_tip_2")
fieldValue235 = x3d.fieldValue()
fieldValue235.setName("name")
fieldValue235.setValue("r_tarsal_distal_phalanx_1_tip")

ProtoInstance234.addFieldValue(fieldValue235)
fieldValue236 = x3d.fieldValue()
fieldValue236.setName("translation")
fieldValue236.setValue("-0.104299999773502 -0.0227000005543232 0.144999995827675")

ProtoInstance234.addFieldValue(fieldValue236)

fieldValue233.addChildren(ProtoInstance234)
ProtoInstance237 = x3d.ProtoInstance()
ProtoInstance237.setName("Site")
ProtoInstance237.setDEF("hanim_r_tarsal_interphalangeal_phalanx6")
fieldValue238 = x3d.fieldValue()
fieldValue238.setName("name")
fieldValue238.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance237.addFieldValue(fieldValue238)
fieldValue239 = x3d.fieldValue()
fieldValue239.setName("translation")
fieldValue239.setValue("-0.152300000190735 0.0165999997407198 0.0895000025629997")

ProtoInstance237.addFieldValue(fieldValue239)

fieldValue233.addChildren(ProtoInstance237)
ProtoInstance240 = x3d.ProtoInstance()
ProtoInstance240.setName("Site")
ProtoInstance240.setDEF("hanim_r_tarsal_distal_phalanx3")
fieldValue241 = x3d.fieldValue()
fieldValue241.setName("name")
fieldValue241.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance240.addFieldValue(fieldValue241)
fieldValue242 = x3d.fieldValue()
fieldValue242.setName("translation")
fieldValue242.setValue("-0.088299997150898 0.013399999588728 0.138300001621246")

ProtoInstance240.addFieldValue(fieldValue242)

fieldValue233.addChildren(ProtoInstance240)

ProtoInstance231.addFieldValue(fieldValue233)

fieldValue230.addChildren(ProtoInstance231)

ProtoInstance226.addFieldValue(fieldValue230)

fieldValue225.addChildren(ProtoInstance226)
ProtoInstance243 = x3d.ProtoInstance()
ProtoInstance243.setName("Segment")
ProtoInstance243.setDEF("hanim_r_middistal_2")
fieldValue244 = x3d.fieldValue()
fieldValue244.setName("name")
fieldValue244.setValue("r_middistal")

ProtoInstance243.addFieldValue(fieldValue244)
fieldValue245 = x3d.fieldValue()
fieldValue245.setName("children")
ProtoInstance246 = x3d.ProtoInstance()
ProtoInstance246.setName("Site")
ProtoInstance246.setDEF("hanim_r_tarsal_interphalangeal_phalanx2")
fieldValue247 = x3d.fieldValue()
fieldValue247.setName("name")
fieldValue247.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance246.addFieldValue(fieldValue247)
fieldValue248 = x3d.fieldValue()
fieldValue248.setName("translation")
fieldValue248.setValue("-0.0520999990403652 0.0260000005364418 0.012699999846518")

ProtoInstance246.addFieldValue(fieldValue248)

fieldValue245.addChildren(ProtoInstance246)

ProtoInstance243.addFieldValue(fieldValue245)

fieldValue225.addChildren(ProtoInstance243)

ProtoInstance221.addFieldValue(fieldValue225)

fieldValue220.addChildren(ProtoInstance221)
ProtoInstance249 = x3d.ProtoInstance()
ProtoInstance249.setName("Segment")
ProtoInstance249.setDEF("hanim_r_midproximal_2")
fieldValue250 = x3d.fieldValue()
fieldValue250.setName("name")
fieldValue250.setValue("r_midproximal")

ProtoInstance249.addFieldValue(fieldValue250)

fieldValue220.addChildren(ProtoInstance249)

ProtoInstance216.addFieldValue(fieldValue220)

fieldValue215.addChildren(ProtoInstance216)
ProtoInstance251 = x3d.ProtoInstance()
ProtoInstance251.setName("Segment")
ProtoInstance251.setDEF("hanim_r_hindfoot_2")
fieldValue252 = x3d.fieldValue()
fieldValue252.setName("name")
fieldValue252.setValue("r_hindfoot")

ProtoInstance251.addFieldValue(fieldValue252)
fieldValue253 = x3d.fieldValue()
fieldValue253.setName("children")
ProtoInstance254 = x3d.ProtoInstance()
ProtoInstance254.setName("Site")
ProtoInstance254.setDEF("hanim_r_lateral_malleolus_2")
fieldValue255 = x3d.fieldValue()
fieldValue255.setName("name")
fieldValue255.setValue("r_lateral_malleolus")

ProtoInstance254.addFieldValue(fieldValue255)
fieldValue256 = x3d.fieldValue()
fieldValue256.setName("translation")
fieldValue256.setValue("-0.100599996745586 0.0658000037074089 -0.107500001788139")

ProtoInstance254.addFieldValue(fieldValue256)

fieldValue253.addChildren(ProtoInstance254)
ProtoInstance257 = x3d.ProtoInstance()
ProtoInstance257.setName("Site")
ProtoInstance257.setDEF("hanim_r_medial_malleolus_2")
fieldValue258 = x3d.fieldValue()
fieldValue258.setName("name")
fieldValue258.setValue("r_medial_malleolus")

ProtoInstance257.addFieldValue(fieldValue258)
fieldValue259 = x3d.fieldValue()
fieldValue259.setName("translation")
fieldValue259.setValue("-0.0590999983251095 0.0759999975562096 -0.092799998819828")

ProtoInstance257.addFieldValue(fieldValue259)

fieldValue253.addChildren(ProtoInstance257)
ProtoInstance260 = x3d.ProtoInstance()
ProtoInstance260.setName("Site")
ProtoInstance260.setDEF("hanim_r_sphyrion_2")
fieldValue261 = x3d.fieldValue()
fieldValue261.setName("name")
fieldValue261.setValue("r_sphyrion")

ProtoInstance260.addFieldValue(fieldValue261)
fieldValue262 = x3d.fieldValue()
fieldValue262.setName("translation")
fieldValue262.setValue("-0.0603000000119209 0.0610000006854534 -0.100199997425079")

ProtoInstance260.addFieldValue(fieldValue262)

fieldValue253.addChildren(ProtoInstance260)
ProtoInstance263 = x3d.ProtoInstance()
ProtoInstance263.setName("Site")
ProtoInstance263.setDEF("hanim_r_calcaneus_posterior_2")
fieldValue264 = x3d.fieldValue()
fieldValue264.setName("name")
fieldValue264.setValue("r_calcaneus_posterior")

ProtoInstance263.addFieldValue(fieldValue264)
fieldValue265 = x3d.fieldValue()
fieldValue265.setName("translation")
fieldValue265.setValue("-0.0692000016570091 0.0296999998390675 -0.122100003063679")

ProtoInstance263.addFieldValue(fieldValue265)

fieldValue253.addChildren(ProtoInstance263)

ProtoInstance251.addFieldValue(fieldValue253)

fieldValue215.addChildren(ProtoInstance251)

ProtoInstance211.addFieldValue(fieldValue215)

fieldValue210.addChildren(ProtoInstance211)
ProtoInstance266 = x3d.ProtoInstance()
ProtoInstance266.setName("Segment")
ProtoInstance266.setDEF("hanim_r_calf_2")
fieldValue267 = x3d.fieldValue()
fieldValue267.setName("name")
fieldValue267.setValue("r_calf")

ProtoInstance266.addFieldValue(fieldValue267)

fieldValue210.addChildren(ProtoInstance266)

ProtoInstance206.addFieldValue(fieldValue210)

fieldValue205.addChildren(ProtoInstance206)
ProtoInstance268 = x3d.ProtoInstance()
ProtoInstance268.setName("Segment")
ProtoInstance268.setDEF("hanim_r_thigh_2")
fieldValue269 = x3d.fieldValue()
fieldValue269.setName("name")
fieldValue269.setValue("r_thigh")

ProtoInstance268.addFieldValue(fieldValue269)
fieldValue270 = x3d.fieldValue()
fieldValue270.setName("children")
ProtoInstance271 = x3d.ProtoInstance()
ProtoInstance271.setName("Site")
ProtoInstance271.setDEF("hanim_r_knee_crease_2")
fieldValue272 = x3d.fieldValue()
fieldValue272.setName("name")
fieldValue272.setValue("r_knee_crease")

ProtoInstance271.addFieldValue(fieldValue272)
fieldValue273 = x3d.fieldValue()
fieldValue273.setName("translation")
fieldValue273.setValue("-0.0825000032782555 0.4932000041008 -0.032600000500679")

ProtoInstance271.addFieldValue(fieldValue273)

fieldValue270.addChildren(ProtoInstance271)
ProtoInstance274 = x3d.ProtoInstance()
ProtoInstance274.setName("Site")
ProtoInstance274.setDEF("hanim_r_femoral_lateral_epicondyles_2")
fieldValue275 = x3d.fieldValue()
fieldValue275.setName("name")
fieldValue275.setValue("r_femoral_lateral_epicondyles")

ProtoInstance274.addFieldValue(fieldValue275)
fieldValue276 = x3d.fieldValue()
fieldValue276.setName("translation")
fieldValue276.setValue("-0.142100006341934 0.499199986457825 0.0309999994933605")

ProtoInstance274.addFieldValue(fieldValue276)

fieldValue270.addChildren(ProtoInstance274)
ProtoInstance277 = x3d.ProtoInstance()
ProtoInstance277.setName("Site")
ProtoInstance277.setDEF("hanim_r_femoral_medial_epicondyles_2")
fieldValue278 = x3d.fieldValue()
fieldValue278.setName("name")
fieldValue278.setValue("r_femoral_lateral_epicondyles")

ProtoInstance277.addFieldValue(fieldValue278)
fieldValue279 = x3d.fieldValue()
fieldValue279.setName("translation")
fieldValue279.setValue("-0.0220999997109175 0.501399993896484 0.0288999993354082")

ProtoInstance277.addFieldValue(fieldValue279)

fieldValue270.addChildren(ProtoInstance277)

ProtoInstance268.addFieldValue(fieldValue270)

fieldValue205.addChildren(ProtoInstance268)

ProtoInstance201.addFieldValue(fieldValue205)

fieldValue121.addChildren(ProtoInstance201)
ProtoInstance280 = x3d.ProtoInstance()
ProtoInstance280.setName("Segment")
ProtoInstance280.setDEF("hanim_pelvis_2")
fieldValue281 = x3d.fieldValue()
fieldValue281.setName("name")
fieldValue281.setValue("pelvis")

ProtoInstance280.addFieldValue(fieldValue281)
fieldValue282 = x3d.fieldValue()
fieldValue282.setName("children")
ProtoInstance283 = x3d.ProtoInstance()
ProtoInstance283.setName("Site")
ProtoInstance283.setDEF("hanim_r_iliocristale_2")
fieldValue284 = x3d.fieldValue()
fieldValue284.setName("name")
fieldValue284.setValue("r_iliocristale")

ProtoInstance283.addFieldValue(fieldValue284)
fieldValue285 = x3d.fieldValue()
fieldValue285.setName("translation")
fieldValue285.setValue("-0.152500003576279 1.0628000497818 0.00350000010803342")

ProtoInstance283.addFieldValue(fieldValue285)

fieldValue282.addChildren(ProtoInstance283)
ProtoInstance286 = x3d.ProtoInstance()
ProtoInstance286.setName("Site")
ProtoInstance286.setDEF("hanim_r_trochanterion_2")
fieldValue287 = x3d.fieldValue()
fieldValue287.setName("name")
fieldValue287.setValue("r_trochanterion")

ProtoInstance286.addFieldValue(fieldValue287)
fieldValue288 = x3d.fieldValue()
fieldValue288.setName("translation")
fieldValue288.setValue("-0.16889999806881 0.841899991035461 0.0351999998092651")

ProtoInstance286.addFieldValue(fieldValue288)

fieldValue282.addChildren(ProtoInstance286)
ProtoInstance289 = x3d.ProtoInstance()
ProtoInstance289.setName("Site")
ProtoInstance289.setDEF("hanim_l_iliocristale_2")
fieldValue290 = x3d.fieldValue()
fieldValue290.setName("name")
fieldValue290.setValue("l_iliocristale")

ProtoInstance289.addFieldValue(fieldValue290)
fieldValue291 = x3d.fieldValue()
fieldValue291.setName("translation")
fieldValue291.setValue("0.161200001835823 1.05369997024536 0.0007999999797903")

ProtoInstance289.addFieldValue(fieldValue291)

fieldValue282.addChildren(ProtoInstance289)
ProtoInstance292 = x3d.ProtoInstance()
ProtoInstance292.setName("Site")
ProtoInstance292.setDEF("hanim_l_trochanterion_2")
fieldValue293 = x3d.fieldValue()
fieldValue293.setName("name")
fieldValue293.setValue("l_trochanterion")

ProtoInstance292.addFieldValue(fieldValue293)
fieldValue294 = x3d.fieldValue()
fieldValue294.setName("translation")
fieldValue294.setValue("0.167699992656708 0.833599984645844 0.0303000006824732")

ProtoInstance292.addFieldValue(fieldValue294)

fieldValue282.addChildren(ProtoInstance292)
ProtoInstance295 = x3d.ProtoInstance()
ProtoInstance295.setName("Site")
ProtoInstance295.setDEF("hanim_r_asis_2")
fieldValue296 = x3d.fieldValue()
fieldValue296.setName("name")
fieldValue296.setValue("r_asis")

ProtoInstance295.addFieldValue(fieldValue296)
fieldValue297 = x3d.fieldValue()
fieldValue297.setName("translation")
fieldValue297.setValue("-0.088699996471405 1.00209999084473 0.111199997365475")

ProtoInstance295.addFieldValue(fieldValue297)

fieldValue282.addChildren(ProtoInstance295)
ProtoInstance298 = x3d.ProtoInstance()
ProtoInstance298.setName("Site")
ProtoInstance298.setDEF("hanim_l_asis_2")
fieldValue299 = x3d.fieldValue()
fieldValue299.setName("name")
fieldValue299.setValue("l_asis")

ProtoInstance298.addFieldValue(fieldValue299)
fieldValue300 = x3d.fieldValue()
fieldValue300.setName("translation")
fieldValue300.setValue("0.0925000011920929 0.998300015926361 0.105200000107288")

ProtoInstance298.addFieldValue(fieldValue300)

fieldValue282.addChildren(ProtoInstance298)
ProtoInstance301 = x3d.ProtoInstance()
ProtoInstance301.setName("Site")
ProtoInstance301.setDEF("hanim_r_psis_2")
fieldValue302 = x3d.fieldValue()
fieldValue302.setName("name")
fieldValue302.setValue("r_psis")

ProtoInstance301.addFieldValue(fieldValue302)
fieldValue303 = x3d.fieldValue()
fieldValue303.setName("translation")
fieldValue303.setValue("-0.0715999975800514 1.01900005340576 -0.113799996674061")

ProtoInstance301.addFieldValue(fieldValue303)

fieldValue282.addChildren(ProtoInstance301)
ProtoInstance304 = x3d.ProtoInstance()
ProtoInstance304.setName("Site")
ProtoInstance304.setDEF("hanim_l_psis_2")
fieldValue305 = x3d.fieldValue()
fieldValue305.setName("name")
fieldValue305.setValue("l_psis")

ProtoInstance304.addFieldValue(fieldValue305)
fieldValue306 = x3d.fieldValue()
fieldValue306.setName("translation")
fieldValue306.setValue("0.0773999989032745 1.01900005340576 -0.115099996328354")

ProtoInstance304.addFieldValue(fieldValue306)

fieldValue282.addChildren(ProtoInstance304)
ProtoInstance307 = x3d.ProtoInstance()
ProtoInstance307.setName("Site")
ProtoInstance307.setDEF("hanim_crotch_2")
fieldValue308 = x3d.fieldValue()
fieldValue308.setName("name")
fieldValue308.setValue("crotch")

ProtoInstance307.addFieldValue(fieldValue308)
fieldValue309 = x3d.fieldValue()
fieldValue309.setName("translation")
fieldValue309.setValue("0.00340000004507601 0.826600015163422 0.0256999991834164")

ProtoInstance307.addFieldValue(fieldValue309)

fieldValue282.addChildren(ProtoInstance307)

ProtoInstance280.addFieldValue(fieldValue282)

fieldValue121.addChildren(ProtoInstance280)

ProtoInstance117.addFieldValue(fieldValue121)

fieldValue116.addChildren(ProtoInstance117)
ProtoInstance310 = x3d.ProtoInstance()
ProtoInstance310.setName("Joint")
ProtoInstance310.setDEF("hanim_vl5_2")
fieldValue311 = x3d.fieldValue()
fieldValue311.setName("stiffness")
fieldValue311.setValue("1 1 1")

ProtoInstance310.addFieldValue(fieldValue311)
fieldValue312 = x3d.fieldValue()
fieldValue312.setName("name")
fieldValue312.setValue("vl5")

ProtoInstance310.addFieldValue(fieldValue312)
fieldValue313 = x3d.fieldValue()
fieldValue313.setName("center")
fieldValue313.setValue("0.00279999990016222 1.05680000782013 -0.0776000022888184")

ProtoInstance310.addFieldValue(fieldValue313)
fieldValue314 = x3d.fieldValue()
fieldValue314.setName("children")
ProtoInstance315 = x3d.ProtoInstance()
ProtoInstance315.setName("Joint")
ProtoInstance315.setDEF("hanim_vl4_2")
fieldValue316 = x3d.fieldValue()
fieldValue316.setName("stiffness")
fieldValue316.setValue("1 1 1")

ProtoInstance315.addFieldValue(fieldValue316)
fieldValue317 = x3d.fieldValue()
fieldValue317.setName("name")
fieldValue317.setValue("vl4")

ProtoInstance315.addFieldValue(fieldValue317)
fieldValue318 = x3d.fieldValue()
fieldValue318.setName("center")
fieldValue318.setValue("0.00350000010803342 1.09249997138977 -0.0786999985575676")

ProtoInstance315.addFieldValue(fieldValue318)
fieldValue319 = x3d.fieldValue()
fieldValue319.setName("children")
ProtoInstance320 = x3d.ProtoInstance()
ProtoInstance320.setName("Joint")
ProtoInstance320.setDEF("hanim_vl3_2")
fieldValue321 = x3d.fieldValue()
fieldValue321.setName("stiffness")
fieldValue321.setValue("1 1 1")

ProtoInstance320.addFieldValue(fieldValue321)
fieldValue322 = x3d.fieldValue()
fieldValue322.setName("name")
fieldValue322.setValue("vl3")

ProtoInstance320.addFieldValue(fieldValue322)
fieldValue323 = x3d.fieldValue()
fieldValue323.setName("center")
fieldValue323.setValue("0.00410000002011657 1.1275999546051 -0.0795999988913536")

ProtoInstance320.addFieldValue(fieldValue323)
fieldValue324 = x3d.fieldValue()
fieldValue324.setName("children")
ProtoInstance325 = x3d.ProtoInstance()
ProtoInstance325.setName("Joint")
ProtoInstance325.setDEF("hanim_vl2_2")
fieldValue326 = x3d.fieldValue()
fieldValue326.setName("stiffness")
fieldValue326.setValue("1 1 1")

ProtoInstance325.addFieldValue(fieldValue326)
fieldValue327 = x3d.fieldValue()
fieldValue327.setName("name")
fieldValue327.setValue("vl2")

ProtoInstance325.addFieldValue(fieldValue327)
fieldValue328 = x3d.fieldValue()
fieldValue328.setName("center")
fieldValue328.setValue("0.0044999998062849 1.15460002422333 -0.0799999982118607")

ProtoInstance325.addFieldValue(fieldValue328)
fieldValue329 = x3d.fieldValue()
fieldValue329.setName("children")
ProtoInstance330 = x3d.ProtoInstance()
ProtoInstance330.setName("Joint")
ProtoInstance330.setDEF("hanim_vl1_2")
fieldValue331 = x3d.fieldValue()
fieldValue331.setName("stiffness")
fieldValue331.setValue("1 1 1")

ProtoInstance330.addFieldValue(fieldValue331)
fieldValue332 = x3d.fieldValue()
fieldValue332.setName("name")
fieldValue332.setValue("vl1")

ProtoInstance330.addFieldValue(fieldValue332)
fieldValue333 = x3d.fieldValue()
fieldValue333.setName("center")
fieldValue333.setValue("0.00480000022798777 1.19120001792908 -0.0804999992251396")

ProtoInstance330.addFieldValue(fieldValue333)
fieldValue334 = x3d.fieldValue()
fieldValue334.setName("children")
ProtoInstance335 = x3d.ProtoInstance()
ProtoInstance335.setName("Joint")
ProtoInstance335.setDEF("hanim_vt12_2")
fieldValue336 = x3d.fieldValue()
fieldValue336.setName("stiffness")
fieldValue336.setValue("1 1 1")

ProtoInstance335.addFieldValue(fieldValue336)
fieldValue337 = x3d.fieldValue()
fieldValue337.setName("name")
fieldValue337.setValue("vt12")

ProtoInstance335.addFieldValue(fieldValue337)
fieldValue338 = x3d.fieldValue()
fieldValue338.setName("center")
fieldValue338.setValue("0.00510000018402934 1.22780001163483 -0.0807999968528748")

ProtoInstance335.addFieldValue(fieldValue338)
fieldValue339 = x3d.fieldValue()
fieldValue339.setName("children")
ProtoInstance340 = x3d.ProtoInstance()
ProtoInstance340.setName("Joint")
ProtoInstance340.setDEF("hanim_vt11_2")
fieldValue341 = x3d.fieldValue()
fieldValue341.setName("stiffness")
fieldValue341.setValue("1 1 1")

ProtoInstance340.addFieldValue(fieldValue341)
fieldValue342 = x3d.fieldValue()
fieldValue342.setName("name")
fieldValue342.setValue("vt11")

ProtoInstance340.addFieldValue(fieldValue342)
fieldValue343 = x3d.fieldValue()
fieldValue343.setName("center")
fieldValue343.setValue("0.00529999984428287 1.26789999008179 -0.0810000002384186")

ProtoInstance340.addFieldValue(fieldValue343)
fieldValue344 = x3d.fieldValue()
fieldValue344.setName("children")
ProtoInstance345 = x3d.ProtoInstance()
ProtoInstance345.setName("Joint")
ProtoInstance345.setDEF("hanim_vt10_2")
fieldValue346 = x3d.fieldValue()
fieldValue346.setName("stiffness")
fieldValue346.setValue("1 1 1")

ProtoInstance345.addFieldValue(fieldValue346)
fieldValue347 = x3d.fieldValue()
fieldValue347.setName("name")
fieldValue347.setValue("vt10")

ProtoInstance345.addFieldValue(fieldValue347)
fieldValue348 = x3d.fieldValue()
fieldValue348.setName("center")
fieldValue348.setValue("0.00559999980032444 1.28480005264282 -0.0821999981999397")

ProtoInstance345.addFieldValue(fieldValue348)
fieldValue349 = x3d.fieldValue()
fieldValue349.setName("children")
ProtoInstance350 = x3d.ProtoInstance()
ProtoInstance350.setName("Joint")
ProtoInstance350.setDEF("hanim_vt9_2")
fieldValue351 = x3d.fieldValue()
fieldValue351.setName("stiffness")
fieldValue351.setValue("1 1 1")

ProtoInstance350.addFieldValue(fieldValue351)
fieldValue352 = x3d.fieldValue()
fieldValue352.setName("name")
fieldValue352.setValue("vt9")

ProtoInstance350.addFieldValue(fieldValue352)
fieldValue353 = x3d.fieldValue()
fieldValue353.setName("center")
fieldValue353.setValue("0.00570000009611249 1.31260001659393 -0.0838000029325485")

ProtoInstance350.addFieldValue(fieldValue353)
fieldValue354 = x3d.fieldValue()
fieldValue354.setName("children")
ProtoInstance355 = x3d.ProtoInstance()
ProtoInstance355.setName("Joint")
ProtoInstance355.setDEF("hanim_vt8_2")
fieldValue356 = x3d.fieldValue()
fieldValue356.setName("stiffness")
fieldValue356.setValue("1 1 1")

ProtoInstance355.addFieldValue(fieldValue356)
fieldValue357 = x3d.fieldValue()
fieldValue357.setName("name")
fieldValue357.setValue("vt8")

ProtoInstance355.addFieldValue(fieldValue357)
fieldValue358 = x3d.fieldValue()
fieldValue358.setName("center")
fieldValue358.setValue("0.00570000009611249 1.33819997310638 -0.0844999998807907")

ProtoInstance355.addFieldValue(fieldValue358)
fieldValue359 = x3d.fieldValue()
fieldValue359.setName("children")
ProtoInstance360 = x3d.ProtoInstance()
ProtoInstance360.setName("Joint")
ProtoInstance360.setDEF("hanim_vt7_2")
fieldValue361 = x3d.fieldValue()
fieldValue361.setName("stiffness")
fieldValue361.setValue("1 1 1")

ProtoInstance360.addFieldValue(fieldValue361)
fieldValue362 = x3d.fieldValue()
fieldValue362.setName("name")
fieldValue362.setValue("vt7")

ProtoInstance360.addFieldValue(fieldValue362)
fieldValue363 = x3d.fieldValue()
fieldValue363.setName("center")
fieldValue363.setValue("0.00579999992623925 1.36249995231628 -0.0833000019192696")

ProtoInstance360.addFieldValue(fieldValue363)
fieldValue364 = x3d.fieldValue()
fieldValue364.setName("children")
ProtoInstance365 = x3d.ProtoInstance()
ProtoInstance365.setName("Joint")
ProtoInstance365.setDEF("hanim_vt6_2")
fieldValue366 = x3d.fieldValue()
fieldValue366.setName("stiffness")
fieldValue366.setValue("1 1 1")

ProtoInstance365.addFieldValue(fieldValue366)
fieldValue367 = x3d.fieldValue()
fieldValue367.setName("name")
fieldValue367.setValue("vt6")

ProtoInstance365.addFieldValue(fieldValue367)
fieldValue368 = x3d.fieldValue()
fieldValue368.setName("center")
fieldValue368.setValue("0.0059000002220273 1.38660001754761 -0.0799999982118607")

ProtoInstance365.addFieldValue(fieldValue368)
fieldValue369 = x3d.fieldValue()
fieldValue369.setName("children")
ProtoInstance370 = x3d.ProtoInstance()
ProtoInstance370.setName("Joint")
ProtoInstance370.setDEF("hanim_vt5_2")
fieldValue371 = x3d.fieldValue()
fieldValue371.setName("stiffness")
fieldValue371.setValue("1 1 1")

ProtoInstance370.addFieldValue(fieldValue371)
fieldValue372 = x3d.fieldValue()
fieldValue372.setName("name")
fieldValue372.setValue("vt5")

ProtoInstance370.addFieldValue(fieldValue372)
fieldValue373 = x3d.fieldValue()
fieldValue373.setName("center")
fieldValue373.setValue("0.00600000005215406 1.41019999980927 -0.0745000019669533")

ProtoInstance370.addFieldValue(fieldValue373)
fieldValue374 = x3d.fieldValue()
fieldValue374.setName("children")
ProtoInstance375 = x3d.ProtoInstance()
ProtoInstance375.setName("Joint")
ProtoInstance375.setDEF("hanim_vt4_2")
fieldValue376 = x3d.fieldValue()
fieldValue376.setName("stiffness")
fieldValue376.setValue("1 1 1")

ProtoInstance375.addFieldValue(fieldValue376)
fieldValue377 = x3d.fieldValue()
fieldValue377.setName("name")
fieldValue377.setValue("vt4")

ProtoInstance375.addFieldValue(fieldValue377)
fieldValue378 = x3d.fieldValue()
fieldValue378.setName("center")
fieldValue378.setValue("0.00609999988228083 1.432000041008 -0.067500002682209")

ProtoInstance375.addFieldValue(fieldValue378)
fieldValue379 = x3d.fieldValue()
fieldValue379.setName("children")
ProtoInstance380 = x3d.ProtoInstance()
ProtoInstance380.setName("Joint")
ProtoInstance380.setDEF("hanim_vt3_2")
fieldValue381 = x3d.fieldValue()
fieldValue381.setName("stiffness")
fieldValue381.setValue("1 1 1")

ProtoInstance380.addFieldValue(fieldValue381)
fieldValue382 = x3d.fieldValue()
fieldValue382.setName("name")
fieldValue382.setValue("vt3")

ProtoInstance380.addFieldValue(fieldValue382)
fieldValue383 = x3d.fieldValue()
fieldValue383.setName("center")
fieldValue383.setValue("0.00620000017806888 1.45829999446869 -0.0570000000298023")

ProtoInstance380.addFieldValue(fieldValue383)
fieldValue384 = x3d.fieldValue()
fieldValue384.setName("children")
ProtoInstance385 = x3d.ProtoInstance()
ProtoInstance385.setName("Joint")
ProtoInstance385.setDEF("hanim_vt2_2")
fieldValue386 = x3d.fieldValue()
fieldValue386.setName("stiffness")
fieldValue386.setValue("1 1 1")

ProtoInstance385.addFieldValue(fieldValue386)
fieldValue387 = x3d.fieldValue()
fieldValue387.setName("name")
fieldValue387.setValue("vt2")

ProtoInstance385.addFieldValue(fieldValue387)
fieldValue388 = x3d.fieldValue()
fieldValue388.setName("center")
fieldValue388.setValue("0.00630000000819564 1.47609996795654 -0.0483999997377396")

ProtoInstance385.addFieldValue(fieldValue388)
fieldValue389 = x3d.fieldValue()
fieldValue389.setName("children")
ProtoInstance390 = x3d.ProtoInstance()
ProtoInstance390.setName("Joint")
ProtoInstance390.setDEF("hanim_vt1_2")
fieldValue391 = x3d.fieldValue()
fieldValue391.setName("stiffness")
fieldValue391.setValue("1 1 1")

ProtoInstance390.addFieldValue(fieldValue391)
fieldValue392 = x3d.fieldValue()
fieldValue392.setName("name")
fieldValue392.setValue("vt1")

ProtoInstance390.addFieldValue(fieldValue392)
fieldValue393 = x3d.fieldValue()
fieldValue393.setName("center")
fieldValue393.setValue("0.00650000013411045 1.4951000213623 -0.0386999994516373")

ProtoInstance390.addFieldValue(fieldValue393)
fieldValue394 = x3d.fieldValue()
fieldValue394.setName("children")
ProtoInstance395 = x3d.ProtoInstance()
ProtoInstance395.setName("Joint")
ProtoInstance395.setDEF("hanim_vc7_2")
fieldValue396 = x3d.fieldValue()
fieldValue396.setName("stiffness")
fieldValue396.setValue("1 1 1")

ProtoInstance395.addFieldValue(fieldValue396)
fieldValue397 = x3d.fieldValue()
fieldValue397.setName("name")
fieldValue397.setValue("vc7")

ProtoInstance395.addFieldValue(fieldValue397)
fieldValue398 = x3d.fieldValue()
fieldValue398.setName("center")
fieldValue398.setValue("0.00659999996423721 1.51320004463196 -0.0300999991595745")

ProtoInstance395.addFieldValue(fieldValue398)
fieldValue399 = x3d.fieldValue()
fieldValue399.setName("children")
ProtoInstance400 = x3d.ProtoInstance()
ProtoInstance400.setName("Joint")
ProtoInstance400.setDEF("hanim_vc6_2")
fieldValue401 = x3d.fieldValue()
fieldValue401.setName("stiffness")
fieldValue401.setValue("1 1 1")

ProtoInstance400.addFieldValue(fieldValue401)
fieldValue402 = x3d.fieldValue()
fieldValue402.setName("name")
fieldValue402.setValue("vc6")

ProtoInstance400.addFieldValue(fieldValue402)
fieldValue403 = x3d.fieldValue()
fieldValue403.setName("center")
fieldValue403.setValue("0.00659999996423721 1.53569996356964 -0.014299999922514")

ProtoInstance400.addFieldValue(fieldValue403)
fieldValue404 = x3d.fieldValue()
fieldValue404.setName("children")
ProtoInstance405 = x3d.ProtoInstance()
ProtoInstance405.setName("Joint")
ProtoInstance405.setDEF("hanim_vc5_2")
fieldValue406 = x3d.fieldValue()
fieldValue406.setName("stiffness")
fieldValue406.setValue("1 1 1")

ProtoInstance405.addFieldValue(fieldValue406)
fieldValue407 = x3d.fieldValue()
fieldValue407.setName("name")
fieldValue407.setValue("vc5")

ProtoInstance405.addFieldValue(fieldValue407)
fieldValue408 = x3d.fieldValue()
fieldValue408.setName("center")
fieldValue408.setValue("0.00659999996423721 1.55200004577637 -0.00820000004023314")

ProtoInstance405.addFieldValue(fieldValue408)
fieldValue409 = x3d.fieldValue()
fieldValue409.setName("children")
ProtoInstance410 = x3d.ProtoInstance()
ProtoInstance410.setName("Joint")
ProtoInstance410.setDEF("hanim_vc4_2")
fieldValue411 = x3d.fieldValue()
fieldValue411.setName("stiffness")
fieldValue411.setValue("1 1 1")

ProtoInstance410.addFieldValue(fieldValue411)
fieldValue412 = x3d.fieldValue()
fieldValue412.setName("name")
fieldValue412.setValue("vc4")

ProtoInstance410.addFieldValue(fieldValue412)
fieldValue413 = x3d.fieldValue()
fieldValue413.setName("center")
fieldValue413.setValue("0.00659999996423721 1.56620001792908 -0.00839999970048666")

ProtoInstance410.addFieldValue(fieldValue413)
fieldValue414 = x3d.fieldValue()
fieldValue414.setName("children")
ProtoInstance415 = x3d.ProtoInstance()
ProtoInstance415.setName("Joint")
ProtoInstance415.setDEF("hanim_vc3_2")
fieldValue416 = x3d.fieldValue()
fieldValue416.setName("stiffness")
fieldValue416.setValue("1 1 1")

ProtoInstance415.addFieldValue(fieldValue416)
fieldValue417 = x3d.fieldValue()
fieldValue417.setName("name")
fieldValue417.setValue("vc3")

ProtoInstance415.addFieldValue(fieldValue417)
fieldValue418 = x3d.fieldValue()
fieldValue418.setName("center")
fieldValue418.setValue("0.00659999996423721 1.58000004291534 -0.0103000001981854")

ProtoInstance415.addFieldValue(fieldValue418)
fieldValue419 = x3d.fieldValue()
fieldValue419.setName("children")
ProtoInstance420 = x3d.ProtoInstance()
ProtoInstance420.setName("Joint")
ProtoInstance420.setDEF("hanim_vc2_2")
fieldValue421 = x3d.fieldValue()
fieldValue421.setName("stiffness")
fieldValue421.setValue("1 1 1")

ProtoInstance420.addFieldValue(fieldValue421)
fieldValue422 = x3d.fieldValue()
fieldValue422.setName("name")
fieldValue422.setValue("vc2")

ProtoInstance420.addFieldValue(fieldValue422)
fieldValue423 = x3d.fieldValue()
fieldValue423.setName("center")
fieldValue423.setValue("0.00659999996423721 1.59280002117157 -0.0103000001981854")

ProtoInstance420.addFieldValue(fieldValue423)
fieldValue424 = x3d.fieldValue()
fieldValue424.setName("children")
ProtoInstance425 = x3d.ProtoInstance()
ProtoInstance425.setName("Joint")
ProtoInstance425.setDEF("hanim_vc1_2")
fieldValue426 = x3d.fieldValue()
fieldValue426.setName("stiffness")
fieldValue426.setValue("1 1 1")

ProtoInstance425.addFieldValue(fieldValue426)
fieldValue427 = x3d.fieldValue()
fieldValue427.setName("name")
fieldValue427.setValue("vc1")

ProtoInstance425.addFieldValue(fieldValue427)
fieldValue428 = x3d.fieldValue()
fieldValue428.setName("center")
fieldValue428.setValue("0.00659999996423721 1.61440002918243 -0.00340000004507601")

ProtoInstance425.addFieldValue(fieldValue428)
fieldValue429 = x3d.fieldValue()
fieldValue429.setName("children")
ProtoInstance430 = x3d.ProtoInstance()
ProtoInstance430.setName("Joint")
ProtoInstance430.setDEF("hanim_skullbase_2")
fieldValue431 = x3d.fieldValue()
fieldValue431.setName("stiffness")
fieldValue431.setValue("1 1 1")

ProtoInstance430.addFieldValue(fieldValue431)
fieldValue432 = x3d.fieldValue()
fieldValue432.setName("name")
fieldValue432.setValue("skullbase")

ProtoInstance430.addFieldValue(fieldValue432)
fieldValue433 = x3d.fieldValue()
fieldValue433.setName("center")
fieldValue433.setValue("0.00439999997615814 1.62090003490448 0.0236000008881092")

ProtoInstance430.addFieldValue(fieldValue433)
fieldValue434 = x3d.fieldValue()
fieldValue434.setName("children")
ProtoInstance435 = x3d.ProtoInstance()
ProtoInstance435.setName("Joint")
ProtoInstance435.setDEF("hanim_l_eyeball_4")
fieldValue436 = x3d.fieldValue()
fieldValue436.setName("stiffness")
fieldValue436.setValue("1 1 1")

ProtoInstance435.addFieldValue(fieldValue436)
fieldValue437 = x3d.fieldValue()
fieldValue437.setName("name")
fieldValue437.setValue("l_eyeball")

ProtoInstance435.addFieldValue(fieldValue437)
fieldValue438 = x3d.fieldValue()
fieldValue438.setName("center")
fieldValue438.setValue("0.0335999988019466 1.63320004940033 0.0502000004053116")

ProtoInstance435.addFieldValue(fieldValue438)
fieldValue439 = x3d.fieldValue()
fieldValue439.setName("children")
ProtoInstance440 = x3d.ProtoInstance()
ProtoInstance440.setName("Segment")
ProtoInstance440.setDEF("hanim_l_eyeball_3")
fieldValue441 = x3d.fieldValue()
fieldValue441.setName("name")
fieldValue441.setValue("l_eyeball")

ProtoInstance440.addFieldValue(fieldValue441)

fieldValue439.addChildren(ProtoInstance440)

ProtoInstance435.addFieldValue(fieldValue439)

fieldValue434.addChildren(ProtoInstance435)
ProtoInstance442 = x3d.ProtoInstance()
ProtoInstance442.setName("Joint")
ProtoInstance442.setDEF("hanim_r_eyeball_4")
fieldValue443 = x3d.fieldValue()
fieldValue443.setName("stiffness")
fieldValue443.setValue("1 1 1")

ProtoInstance442.addFieldValue(fieldValue443)
fieldValue444 = x3d.fieldValue()
fieldValue444.setName("name")
fieldValue444.setValue("r_eyeball")

ProtoInstance442.addFieldValue(fieldValue444)
fieldValue445 = x3d.fieldValue()
fieldValue445.setName("center")
fieldValue445.setValue("-0.0236000008881092 1.6331000328064 0.0509999990463257")

ProtoInstance442.addFieldValue(fieldValue445)
fieldValue446 = x3d.fieldValue()
fieldValue446.setName("children")
ProtoInstance447 = x3d.ProtoInstance()
ProtoInstance447.setName("Segment")
ProtoInstance447.setDEF("hanim_r_eyeball_3")
fieldValue448 = x3d.fieldValue()
fieldValue448.setName("name")
fieldValue448.setValue("r_eyeball")

ProtoInstance447.addFieldValue(fieldValue448)

fieldValue446.addChildren(ProtoInstance447)

ProtoInstance442.addFieldValue(fieldValue446)

fieldValue434.addChildren(ProtoInstance442)
ProtoInstance449 = x3d.ProtoInstance()
ProtoInstance449.setName("Segment")
ProtoInstance449.setDEF("hanim_skull_2")
fieldValue450 = x3d.fieldValue()
fieldValue450.setName("name")
fieldValue450.setValue("skull")

ProtoInstance449.addFieldValue(fieldValue450)
fieldValue451 = x3d.fieldValue()
fieldValue451.setName("children")
ProtoInstance452 = x3d.ProtoInstance()
ProtoInstance452.setName("Site")
ProtoInstance452.setDEF("hanim_skull_tip_2")
fieldValue453 = x3d.fieldValue()
fieldValue453.setName("name")
fieldValue453.setValue("skull_tip")

ProtoInstance452.addFieldValue(fieldValue453)
fieldValue454 = x3d.fieldValue()
fieldValue454.setName("translation")
fieldValue454.setValue("0.00499999988824129 1.75039994716644 0.00549999997019768")

ProtoInstance452.addFieldValue(fieldValue454)

fieldValue451.addChildren(ProtoInstance452)
ProtoInstance455 = x3d.ProtoInstance()
ProtoInstance455.setName("Site")
ProtoInstance455.setDEF("hanim_sellion_2")
fieldValue456 = x3d.fieldValue()
fieldValue456.setName("name")
fieldValue456.setValue("sellion")

ProtoInstance455.addFieldValue(fieldValue456)
fieldValue457 = x3d.fieldValue()
fieldValue457.setName("translation")
fieldValue457.setValue("0.00579999992623925 1.63160002231598 0.0851999968290329")

ProtoInstance455.addFieldValue(fieldValue457)

fieldValue451.addChildren(ProtoInstance455)
ProtoInstance458 = x3d.ProtoInstance()
ProtoInstance458.setName("Site")
ProtoInstance458.setDEF("hanim_r_infraorbitale_2")
fieldValue459 = x3d.fieldValue()
fieldValue459.setName("name")
fieldValue459.setValue("r_infraorbitale")

ProtoInstance458.addFieldValue(fieldValue459)
fieldValue460 = x3d.fieldValue()
fieldValue460.setName("translation")
fieldValue460.setValue("-0.023700000718236 1.61710000038147 0.0751999989151955")

ProtoInstance458.addFieldValue(fieldValue460)

fieldValue451.addChildren(ProtoInstance458)
ProtoInstance461 = x3d.ProtoInstance()
ProtoInstance461.setName("Site")
ProtoInstance461.setDEF("hanim_l_infraorbitale_2")
fieldValue462 = x3d.fieldValue()
fieldValue462.setName("name")
fieldValue462.setValue("l_infraorbitale")

ProtoInstance461.addFieldValue(fieldValue462)
fieldValue463 = x3d.fieldValue()
fieldValue463.setName("translation")
fieldValue463.setValue("0.0340999998152256 1.61710000038147 0.0751999989151955")

ProtoInstance461.addFieldValue(fieldValue463)

fieldValue451.addChildren(ProtoInstance461)
ProtoInstance464 = x3d.ProtoInstance()
ProtoInstance464.setName("Site")
ProtoInstance464.setDEF("hanim_supramenton_2")
fieldValue465 = x3d.fieldValue()
fieldValue465.setName("name")
fieldValue465.setValue("supramenton")

ProtoInstance464.addFieldValue(fieldValue465)
fieldValue466 = x3d.fieldValue()
fieldValue466.setName("translation")
fieldValue466.setValue("0.00609999988228083 1.54100000858307 0.0804999992251396")

ProtoInstance464.addFieldValue(fieldValue466)

fieldValue451.addChildren(ProtoInstance464)
ProtoInstance467 = x3d.ProtoInstance()
ProtoInstance467.setName("Site")
ProtoInstance467.setDEF("hanim_r_tragion_2")
fieldValue468 = x3d.fieldValue()
fieldValue468.setName("name")
fieldValue468.setValue("r_tragion")

ProtoInstance467.addFieldValue(fieldValue468)
fieldValue469 = x3d.fieldValue()
fieldValue469.setName("translation")
fieldValue469.setValue("-0.0645999982953072 1.63469994068146 0.0302000008523464")

ProtoInstance467.addFieldValue(fieldValue469)

fieldValue451.addChildren(ProtoInstance467)
ProtoInstance470 = x3d.ProtoInstance()
ProtoInstance470.setName("Site")
ProtoInstance470.setDEF("hanim_r_gonion_2")
fieldValue471 = x3d.fieldValue()
fieldValue471.setName("name")
fieldValue471.setValue("r_gonion")

ProtoInstance470.addFieldValue(fieldValue471)
fieldValue472 = x3d.fieldValue()
fieldValue472.setName("translation")
fieldValue472.setValue("-0.0520000010728836 1.55289995670319 0.0346999987959862")

ProtoInstance470.addFieldValue(fieldValue472)

fieldValue451.addChildren(ProtoInstance470)
ProtoInstance473 = x3d.ProtoInstance()
ProtoInstance473.setName("Site")
ProtoInstance473.setDEF("hanim_l_tragion_2")
fieldValue474 = x3d.fieldValue()
fieldValue474.setName("name")
fieldValue474.setValue("l_tragion")

ProtoInstance473.addFieldValue(fieldValue474)
fieldValue475 = x3d.fieldValue()
fieldValue475.setName("translation")
fieldValue475.setValue("0.0738999992609024 1.63479995727539 0.0282000005245209")

ProtoInstance473.addFieldValue(fieldValue475)

fieldValue451.addChildren(ProtoInstance473)
ProtoInstance476 = x3d.ProtoInstance()
ProtoInstance476.setName("Site")
ProtoInstance476.setDEF("hanim_l_gonion_2")
fieldValue477 = x3d.fieldValue()
fieldValue477.setName("name")
fieldValue477.setValue("l_gonion")

ProtoInstance476.addFieldValue(fieldValue477)
fieldValue478 = x3d.fieldValue()
fieldValue478.setName("translation")
fieldValue478.setValue("0.0631000027060509 1.55299997329712 0.0329999998211861")

ProtoInstance476.addFieldValue(fieldValue478)

fieldValue451.addChildren(ProtoInstance476)
ProtoInstance479 = x3d.ProtoInstance()
ProtoInstance479.setName("Site")
ProtoInstance479.setDEF("hanim_nuchale_2")
fieldValue480 = x3d.fieldValue()
fieldValue480.setName("name")
fieldValue480.setValue("nuchale")

ProtoInstance479.addFieldValue(fieldValue480)
fieldValue481 = x3d.fieldValue()
fieldValue481.setName("translation")
fieldValue481.setValue("0.00389999989420176 1.59720003604889 -0.0795999988913536")

ProtoInstance479.addFieldValue(fieldValue481)

fieldValue451.addChildren(ProtoInstance479)

ProtoInstance449.addFieldValue(fieldValue451)

fieldValue434.addChildren(ProtoInstance449)

ProtoInstance430.addFieldValue(fieldValue434)

fieldValue429.addChildren(ProtoInstance430)
ProtoInstance482 = x3d.ProtoInstance()
ProtoInstance482.setName("Segment")
ProtoInstance482.setDEF("hanim_c1_2")
fieldValue483 = x3d.fieldValue()
fieldValue483.setName("name")
fieldValue483.setValue("c1")

ProtoInstance482.addFieldValue(fieldValue483)

fieldValue429.addChildren(ProtoInstance482)

ProtoInstance425.addFieldValue(fieldValue429)

fieldValue424.addChildren(ProtoInstance425)
ProtoInstance484 = x3d.ProtoInstance()
ProtoInstance484.setName("Segment")
ProtoInstance484.setDEF("hanim_c2_2")
fieldValue485 = x3d.fieldValue()
fieldValue485.setName("name")
fieldValue485.setValue("c2")

ProtoInstance484.addFieldValue(fieldValue485)

fieldValue424.addChildren(ProtoInstance484)

ProtoInstance420.addFieldValue(fieldValue424)

fieldValue419.addChildren(ProtoInstance420)
ProtoInstance486 = x3d.ProtoInstance()
ProtoInstance486.setName("Segment")
ProtoInstance486.setDEF("hanim_c3_2")
fieldValue487 = x3d.fieldValue()
fieldValue487.setName("name")
fieldValue487.setValue("c3")

ProtoInstance486.addFieldValue(fieldValue487)

fieldValue419.addChildren(ProtoInstance486)

ProtoInstance415.addFieldValue(fieldValue419)

fieldValue414.addChildren(ProtoInstance415)
ProtoInstance488 = x3d.ProtoInstance()
ProtoInstance488.setName("Segment")
ProtoInstance488.setDEF("hanim_c4_2")
fieldValue489 = x3d.fieldValue()
fieldValue489.setName("name")
fieldValue489.setValue("c4")

ProtoInstance488.addFieldValue(fieldValue489)

fieldValue414.addChildren(ProtoInstance488)

ProtoInstance410.addFieldValue(fieldValue414)

fieldValue409.addChildren(ProtoInstance410)
ProtoInstance490 = x3d.ProtoInstance()
ProtoInstance490.setName("Segment")
ProtoInstance490.setDEF("hanim_c5_2")
fieldValue491 = x3d.fieldValue()
fieldValue491.setName("name")
fieldValue491.setValue("c5")

ProtoInstance490.addFieldValue(fieldValue491)

fieldValue409.addChildren(ProtoInstance490)

ProtoInstance405.addFieldValue(fieldValue409)

fieldValue404.addChildren(ProtoInstance405)
ProtoInstance492 = x3d.ProtoInstance()
ProtoInstance492.setName("Segment")
ProtoInstance492.setDEF("hanim_c6_2")
fieldValue493 = x3d.fieldValue()
fieldValue493.setName("name")
fieldValue493.setValue("c6")

ProtoInstance492.addFieldValue(fieldValue493)

fieldValue404.addChildren(ProtoInstance492)

ProtoInstance400.addFieldValue(fieldValue404)

fieldValue399.addChildren(ProtoInstance400)
ProtoInstance494 = x3d.ProtoInstance()
ProtoInstance494.setName("Segment")
ProtoInstance494.setDEF("hanim_c7_2")
fieldValue495 = x3d.fieldValue()
fieldValue495.setName("name")
fieldValue495.setValue("c7")

ProtoInstance494.addFieldValue(fieldValue495)
fieldValue496 = x3d.fieldValue()
fieldValue496.setName("children")
ProtoInstance497 = x3d.ProtoInstance()
ProtoInstance497.setName("Site")
ProtoInstance497.setDEF("hanim_r_neck_base_2")
fieldValue498 = x3d.fieldValue()
fieldValue498.setName("name")
fieldValue498.setValue("r_neck_base")

ProtoInstance497.addFieldValue(fieldValue498)
fieldValue499 = x3d.fieldValue()
fieldValue499.setName("translation")
fieldValue499.setValue("-0.0419000014662743 1.51489996910095 -0.0219999998807907")

ProtoInstance497.addFieldValue(fieldValue499)

fieldValue496.addChildren(ProtoInstance497)
ProtoInstance500 = x3d.ProtoInstance()
ProtoInstance500.setName("Site")
ProtoInstance500.setDEF("hanim_l_neck_base_2")
fieldValue501 = x3d.fieldValue()
fieldValue501.setName("name")
fieldValue501.setValue("l_neck_base")

ProtoInstance500.addFieldValue(fieldValue501)
fieldValue502 = x3d.fieldValue()
fieldValue502.setName("translation")
fieldValue502.setValue("0.0645999982953072 1.51409995555878 -0.0379999987781048")

ProtoInstance500.addFieldValue(fieldValue502)

fieldValue496.addChildren(ProtoInstance500)

ProtoInstance494.addFieldValue(fieldValue496)

fieldValue399.addChildren(ProtoInstance494)

ProtoInstance395.addFieldValue(fieldValue399)

fieldValue394.addChildren(ProtoInstance395)
ProtoInstance503 = x3d.ProtoInstance()
ProtoInstance503.setName("Joint")
ProtoInstance503.setDEF("hanim_l_sternoclavicular_2")
fieldValue504 = x3d.fieldValue()
fieldValue504.setName("stiffness")
fieldValue504.setValue("1 1 1")

ProtoInstance503.addFieldValue(fieldValue504)
fieldValue505 = x3d.fieldValue()
fieldValue505.setName("name")
fieldValue505.setValue("l_sternoclavicular")

ProtoInstance503.addFieldValue(fieldValue505)
fieldValue506 = x3d.fieldValue()
fieldValue506.setName("center")
fieldValue506.setValue("0.0820000022649765 1.44879996776581 -0.035300001502037")

ProtoInstance503.addFieldValue(fieldValue506)
fieldValue507 = x3d.fieldValue()
fieldValue507.setName("children")
ProtoInstance508 = x3d.ProtoInstance()
ProtoInstance508.setName("Joint")
ProtoInstance508.setDEF("hanim_l_acromioclavicular_2")
fieldValue509 = x3d.fieldValue()
fieldValue509.setName("stiffness")
fieldValue509.setValue("1 1 1")

ProtoInstance508.addFieldValue(fieldValue509)
fieldValue510 = x3d.fieldValue()
fieldValue510.setName("name")
fieldValue510.setValue("l_acromioclavicular")

ProtoInstance508.addFieldValue(fieldValue510)
fieldValue511 = x3d.fieldValue()
fieldValue511.setName("center")
fieldValue511.setValue("0.0961999967694283 1.42690002918243 -0.0423999987542629")

ProtoInstance508.addFieldValue(fieldValue511)
fieldValue512 = x3d.fieldValue()
fieldValue512.setName("children")
ProtoInstance513 = x3d.ProtoInstance()
ProtoInstance513.setName("Joint")
ProtoInstance513.setDEF("hanim_l_shoulder_2")
fieldValue514 = x3d.fieldValue()
fieldValue514.setName("stiffness")
fieldValue514.setValue("1 1 1")

ProtoInstance513.addFieldValue(fieldValue514)
fieldValue515 = x3d.fieldValue()
fieldValue515.setName("name")
fieldValue515.setValue("l_shoulder")

ProtoInstance513.addFieldValue(fieldValue515)
fieldValue516 = x3d.fieldValue()
fieldValue516.setName("center")
fieldValue516.setValue("0.202900007367134 1.43760001659393 -0.0386999994516373")

ProtoInstance513.addFieldValue(fieldValue516)
fieldValue517 = x3d.fieldValue()
fieldValue517.setName("children")
ProtoInstance518 = x3d.ProtoInstance()
ProtoInstance518.setName("Joint")
ProtoInstance518.setDEF("hanim_l_elbow_2")
fieldValue519 = x3d.fieldValue()
fieldValue519.setName("stiffness")
fieldValue519.setValue("1 1 1")

ProtoInstance518.addFieldValue(fieldValue519)
fieldValue520 = x3d.fieldValue()
fieldValue520.setName("name")
fieldValue520.setValue("l_elbow")

ProtoInstance518.addFieldValue(fieldValue520)
fieldValue521 = x3d.fieldValue()
fieldValue521.setName("center")
fieldValue521.setValue("0.201399996876717 1.1356999874115 -0.0681999996304512")

ProtoInstance518.addFieldValue(fieldValue521)
fieldValue522 = x3d.fieldValue()
fieldValue522.setName("children")
ProtoInstance523 = x3d.ProtoInstance()
ProtoInstance523.setName("Joint")
ProtoInstance523.setDEF("hanim_l_radiocarpal_2")
fieldValue524 = x3d.fieldValue()
fieldValue524.setName("stiffness")
fieldValue524.setValue("1 1 1")

ProtoInstance523.addFieldValue(fieldValue524)
fieldValue525 = x3d.fieldValue()
fieldValue525.setName("name")
fieldValue525.setValue("l_radiocarpal")

ProtoInstance523.addFieldValue(fieldValue525)
fieldValue526 = x3d.fieldValue()
fieldValue526.setName("center")
fieldValue526.setValue("0.198400005698204 0.866299986839294 -0.0582999996840954")

ProtoInstance523.addFieldValue(fieldValue526)
fieldValue527 = x3d.fieldValue()
fieldValue527.setName("children")
ProtoInstance528 = x3d.ProtoInstance()
ProtoInstance528.setName("Joint")
ProtoInstance528.setDEF("hanim_l_carpometacarpal2")
fieldValue529 = x3d.fieldValue()
fieldValue529.setName("stiffness")
fieldValue529.setValue("1 1 1")

ProtoInstance528.addFieldValue(fieldValue529)
fieldValue530 = x3d.fieldValue()
fieldValue530.setName("name")
fieldValue530.setValue("l_carpometacarpal_1")

ProtoInstance528.addFieldValue(fieldValue530)
fieldValue531 = x3d.fieldValue()
fieldValue531.setName("center")
fieldValue531.setValue("0.192399993538857 0.847199976444244 -0.0533999986946583")

ProtoInstance528.addFieldValue(fieldValue531)
fieldValue532 = x3d.fieldValue()
fieldValue532.setName("children")
ProtoInstance533 = x3d.ProtoInstance()
ProtoInstance533.setName("Joint")
ProtoInstance533.setDEF("hanim_l_metacarpophalangeal2")
fieldValue534 = x3d.fieldValue()
fieldValue534.setName("stiffness")
fieldValue534.setValue("1 1 1")

ProtoInstance533.addFieldValue(fieldValue534)
fieldValue535 = x3d.fieldValue()
fieldValue535.setName("name")
fieldValue535.setValue("l_metacarpophalangeal_1")

ProtoInstance533.addFieldValue(fieldValue535)
fieldValue536 = x3d.fieldValue()
fieldValue536.setName("center")
fieldValue536.setValue("0.195099994540215 0.82260000705719 0.0245999991893768")

ProtoInstance533.addFieldValue(fieldValue536)
fieldValue537 = x3d.fieldValue()
fieldValue537.setName("children")
ProtoInstance538 = x3d.ProtoInstance()
ProtoInstance538.setName("Joint")
ProtoInstance538.setDEF("hanim_l_carpal_interphalangeal2")
fieldValue539 = x3d.fieldValue()
fieldValue539.setName("stiffness")
fieldValue539.setValue("1 1 1")

ProtoInstance538.addFieldValue(fieldValue539)
fieldValue540 = x3d.fieldValue()
fieldValue540.setName("name")
fieldValue540.setValue("l_carpal_interphalangeal_1")

ProtoInstance538.addFieldValue(fieldValue540)
fieldValue541 = x3d.fieldValue()
fieldValue541.setName("center")
fieldValue541.setValue("0.195500001311302 0.815900027751923 0.046399999409914")

ProtoInstance538.addFieldValue(fieldValue541)
fieldValue542 = x3d.fieldValue()
fieldValue542.setName("children")
ProtoInstance543 = x3d.ProtoInstance()
ProtoInstance543.setName("Segment")
ProtoInstance543.setDEF("hanim_l_carpal_distal_phalanx2")
fieldValue544 = x3d.fieldValue()
fieldValue544.setName("name")
fieldValue544.setValue("l_carpal_distal_phalanx_1")

ProtoInstance543.addFieldValue(fieldValue544)
fieldValue545 = x3d.fieldValue()
fieldValue545.setName("children")
ProtoInstance546 = x3d.ProtoInstance()
ProtoInstance546.setName("Site")
ProtoInstance546.setDEF("hanim_l_carpal_distal_phalanx_1_tip_2")
fieldValue547 = x3d.fieldValue()
fieldValue547.setName("name")
fieldValue547.setValue("l_carpal_distal_phalanx_1_tip")

ProtoInstance546.addFieldValue(fieldValue547)
fieldValue548 = x3d.fieldValue()
fieldValue548.setName("translation")
fieldValue548.setValue("0.19820000231266 0.806100010871887 0.0759000033140183")

ProtoInstance546.addFieldValue(fieldValue548)

fieldValue545.addChildren(ProtoInstance546)

ProtoInstance543.addFieldValue(fieldValue545)

fieldValue542.addChildren(ProtoInstance543)

ProtoInstance538.addFieldValue(fieldValue542)

fieldValue537.addChildren(ProtoInstance538)
ProtoInstance549 = x3d.ProtoInstance()
ProtoInstance549.setName("Segment")
ProtoInstance549.setDEF("hanim_l_index_proximal_2")
fieldValue550 = x3d.fieldValue()
fieldValue550.setName("name")
fieldValue550.setValue("l_index_proximal")

ProtoInstance549.addFieldValue(fieldValue550)

fieldValue537.addChildren(ProtoInstance549)

ProtoInstance533.addFieldValue(fieldValue537)

fieldValue532.addChildren(ProtoInstance533)
ProtoInstance551 = x3d.ProtoInstance()
ProtoInstance551.setName("Segment")
ProtoInstance551.setDEF("hanim_l_index_proximal_4")
fieldValue552 = x3d.fieldValue()
fieldValue552.setName("name")
fieldValue552.setValue("l_index_proximal")

ProtoInstance551.addFieldValue(fieldValue552)

fieldValue532.addChildren(ProtoInstance551)

ProtoInstance528.addFieldValue(fieldValue532)

fieldValue527.addChildren(ProtoInstance528)
ProtoInstance553 = x3d.ProtoInstance()
ProtoInstance553.setName("Joint")
ProtoInstance553.setDEF("hanim_l_carpometacarpal3")
fieldValue554 = x3d.fieldValue()
fieldValue554.setName("stiffness")
fieldValue554.setValue("1 1 1")

ProtoInstance553.addFieldValue(fieldValue554)
fieldValue555 = x3d.fieldValue()
fieldValue555.setName("name")
fieldValue555.setValue("l_carpometacarpal_2")

ProtoInstance553.addFieldValue(fieldValue555)
fieldValue556 = x3d.fieldValue()
fieldValue556.setName("center")
fieldValue556.setValue("0.198300004005432 0.80239999294281 -0.0280000008642673")

ProtoInstance553.addFieldValue(fieldValue556)
fieldValue557 = x3d.fieldValue()
fieldValue557.setName("children")
ProtoInstance558 = x3d.ProtoInstance()
ProtoInstance558.setName("Joint")
ProtoInstance558.setDEF("hanim_l_metacarpophalangeal3")
fieldValue559 = x3d.fieldValue()
fieldValue559.setName("stiffness")
fieldValue559.setValue("1 1 1")

ProtoInstance558.addFieldValue(fieldValue559)
fieldValue560 = x3d.fieldValue()
fieldValue560.setName("name")
fieldValue560.setValue("l_metacarpophalangeal_2")

ProtoInstance558.addFieldValue(fieldValue560)
fieldValue561 = x3d.fieldValue()
fieldValue561.setName("center")
fieldValue561.setValue("0.198300004005432 0.781499981880188 -0.0280000008642673")

ProtoInstance558.addFieldValue(fieldValue561)
fieldValue562 = x3d.fieldValue()
fieldValue562.setName("children")
ProtoInstance563 = x3d.ProtoInstance()
ProtoInstance563.setName("Joint")
ProtoInstance563.setDEF("hanim_l_carpal_proximal_interphalangeal3")
fieldValue564 = x3d.fieldValue()
fieldValue564.setName("stiffness")
fieldValue564.setValue("1 1 1")

ProtoInstance563.addFieldValue(fieldValue564)
fieldValue565 = x3d.fieldValue()
fieldValue565.setName("name")
fieldValue565.setValue("l_carpal_proximal_interphalangeal_2")

ProtoInstance563.addFieldValue(fieldValue565)
fieldValue566 = x3d.fieldValue()
fieldValue566.setName("center")
fieldValue566.setValue("0.201700001955032 0.736299991607666 -0.0248000007122755")

ProtoInstance563.addFieldValue(fieldValue566)
fieldValue567 = x3d.fieldValue()
fieldValue567.setName("children")
ProtoInstance568 = x3d.ProtoInstance()
ProtoInstance568.setName("Joint")
ProtoInstance568.setDEF("hanim_l_carpal_distal_interphalangeal3")
fieldValue569 = x3d.fieldValue()
fieldValue569.setName("stiffness")
fieldValue569.setValue("1 1 1")

ProtoInstance568.addFieldValue(fieldValue569)
fieldValue570 = x3d.fieldValue()
fieldValue570.setName("name")
fieldValue570.setValue("l_carpal_distal_interphalangeal_2")

ProtoInstance568.addFieldValue(fieldValue570)
fieldValue571 = x3d.fieldValue()
fieldValue571.setName("center")
fieldValue571.setValue("0.202800005674362 0.713900029659271 -0.0236000008881092")

ProtoInstance568.addFieldValue(fieldValue571)
fieldValue572 = x3d.fieldValue()
fieldValue572.setName("children")
ProtoInstance573 = x3d.ProtoInstance()
ProtoInstance573.setName("Segment")
ProtoInstance573.setDEF("hanim_l_carpal_distal_phalanx3")
fieldValue574 = x3d.fieldValue()
fieldValue574.setName("name")
fieldValue574.setValue("l_carpal_distal_phalanx_2")

ProtoInstance573.addFieldValue(fieldValue574)
fieldValue575 = x3d.fieldValue()
fieldValue575.setName("children")
ProtoInstance576 = x3d.ProtoInstance()
ProtoInstance576.setName("Site")
ProtoInstance576.setDEF("hanim_l_carpal_distal_phalanx_2_tip_2")
fieldValue577 = x3d.fieldValue()
fieldValue577.setName("name")
fieldValue577.setValue("l_carpal_distal_phalanx_2_tip")

ProtoInstance576.addFieldValue(fieldValue577)
fieldValue578 = x3d.fieldValue()
fieldValue578.setName("translation")
fieldValue578.setValue("0.20890000462532 0.685800015926361 -0.0244999993592501")

ProtoInstance576.addFieldValue(fieldValue578)

fieldValue575.addChildren(ProtoInstance576)
ProtoInstance579 = x3d.ProtoInstance()
ProtoInstance579.setName("Site")
ProtoInstance579.setDEF("hanim_l_dactylion_2")
fieldValue580 = x3d.fieldValue()
fieldValue580.setName("name")
fieldValue580.setValue("l_dactylion")

ProtoInstance579.addFieldValue(fieldValue580)
fieldValue581 = x3d.fieldValue()
fieldValue581.setName("translation")
fieldValue581.setValue("0.205599993467331 0.674300014972687 -0.048200000077486")

ProtoInstance579.addFieldValue(fieldValue581)

fieldValue575.addChildren(ProtoInstance579)

ProtoInstance573.addFieldValue(fieldValue575)

fieldValue572.addChildren(ProtoInstance573)

ProtoInstance568.addFieldValue(fieldValue572)

fieldValue567.addChildren(ProtoInstance568)
ProtoInstance582 = x3d.ProtoInstance()
ProtoInstance582.setName("Segment")
ProtoInstance582.setDEF("hanim_l_index_middle_2")
fieldValue583 = x3d.fieldValue()
fieldValue583.setName("name")
fieldValue583.setValue("l_index_middle")

ProtoInstance582.addFieldValue(fieldValue583)

fieldValue567.addChildren(ProtoInstance582)

ProtoInstance563.addFieldValue(fieldValue567)

fieldValue562.addChildren(ProtoInstance563)
ProtoInstance584 = x3d.ProtoInstance()
ProtoInstance584.setName("Segment")
ProtoInstance584.setDEF("hanim_l_index_proximal_6")
fieldValue585 = x3d.fieldValue()
fieldValue585.setName("name")
fieldValue585.setValue("l_index_proximal")

ProtoInstance584.addFieldValue(fieldValue585)

fieldValue562.addChildren(ProtoInstance584)

ProtoInstance558.addFieldValue(fieldValue562)

fieldValue557.addChildren(ProtoInstance558)
ProtoInstance586 = x3d.ProtoInstance()
ProtoInstance586.setName("Segment")
ProtoInstance586.setDEF("hanim_l_index_metacarpal_2")
fieldValue587 = x3d.fieldValue()
fieldValue587.setName("name")
fieldValue587.setValue("l_index_metacarpal")

ProtoInstance586.addFieldValue(fieldValue587)

fieldValue557.addChildren(ProtoInstance586)

ProtoInstance553.addFieldValue(fieldValue557)

fieldValue527.addChildren(ProtoInstance553)
ProtoInstance588 = x3d.ProtoInstance()
ProtoInstance588.setName("Joint")
ProtoInstance588.setDEF("hanim_l_carpometacarpal4")
fieldValue589 = x3d.fieldValue()
fieldValue589.setName("stiffness")
fieldValue589.setValue("1 1 1")

ProtoInstance588.addFieldValue(fieldValue589)
fieldValue590 = x3d.fieldValue()
fieldValue590.setName("name")
fieldValue590.setValue("l_carpometacarpal_3")

ProtoInstance588.addFieldValue(fieldValue590)
fieldValue591 = x3d.fieldValue()
fieldValue591.setName("center")
fieldValue591.setValue("0.198699995875359 0.802900016307831 -0.0529999993741512")

ProtoInstance588.addFieldValue(fieldValue591)
fieldValue592 = x3d.fieldValue()
fieldValue592.setName("children")
ProtoInstance593 = x3d.ProtoInstance()
ProtoInstance593.setName("Joint")
ProtoInstance593.setDEF("hanim_l_metacarpophalangeal4")
fieldValue594 = x3d.fieldValue()
fieldValue594.setName("stiffness")
fieldValue594.setValue("1 1 1")

ProtoInstance593.addFieldValue(fieldValue594)
fieldValue595 = x3d.fieldValue()
fieldValue595.setName("name")
fieldValue595.setValue("l_metacarpophalangeal_3")

ProtoInstance593.addFieldValue(fieldValue595)
fieldValue596 = x3d.fieldValue()
fieldValue596.setName("center")
fieldValue596.setValue("0.198699995875359 0.781799972057343 -0.0529999993741512")

ProtoInstance593.addFieldValue(fieldValue596)
fieldValue597 = x3d.fieldValue()
fieldValue597.setName("children")
ProtoInstance598 = x3d.ProtoInstance()
ProtoInstance598.setName("Joint")
ProtoInstance598.setDEF("hanim_l_carpal_proximal_interphalangeal4")
fieldValue599 = x3d.fieldValue()
fieldValue599.setName("stiffness")
fieldValue599.setValue("1 1 1")

ProtoInstance598.addFieldValue(fieldValue599)
fieldValue600 = x3d.fieldValue()
fieldValue600.setName("name")
fieldValue600.setValue("l_carpal_proximal_interphalangeal_3")

ProtoInstance598.addFieldValue(fieldValue600)
fieldValue601 = x3d.fieldValue()
fieldValue601.setName("center")
fieldValue601.setValue("0.201299995183945 0.727299988269806 -0.0502999983727932")

ProtoInstance598.addFieldValue(fieldValue601)
fieldValue602 = x3d.fieldValue()
fieldValue602.setName("children")
ProtoInstance603 = x3d.ProtoInstance()
ProtoInstance603.setName("Joint")
ProtoInstance603.setDEF("hanim_l_carpal_distal_interphalangeal4")
fieldValue604 = x3d.fieldValue()
fieldValue604.setName("stiffness")
fieldValue604.setValue("1 1 1")

ProtoInstance603.addFieldValue(fieldValue604)
fieldValue605 = x3d.fieldValue()
fieldValue605.setName("name")
fieldValue605.setValue("l_carpal_distal_interphalangeal_3")

ProtoInstance603.addFieldValue(fieldValue605)
fieldValue606 = x3d.fieldValue()
fieldValue606.setName("center")
fieldValue606.setValue("0.202600002288818 0.701099991798401 -0.0494000017642975")

ProtoInstance603.addFieldValue(fieldValue606)
fieldValue607 = x3d.fieldValue()
fieldValue607.setName("children")
ProtoInstance608 = x3d.ProtoInstance()
ProtoInstance608.setName("Segment")
ProtoInstance608.setDEF("hanim_l_carpal_distal_phalanx4")
fieldValue609 = x3d.fieldValue()
fieldValue609.setName("name")
fieldValue609.setValue("l_carpal_distal_phalanx_3")

ProtoInstance608.addFieldValue(fieldValue609)
fieldValue610 = x3d.fieldValue()
fieldValue610.setName("children")
ProtoInstance611 = x3d.ProtoInstance()
ProtoInstance611.setName("Site")
ProtoInstance611.setDEF("hanim_l_carpal_distal_phalanx_3_tip_2")
fieldValue612 = x3d.fieldValue()
fieldValue612.setName("name")
fieldValue612.setValue("l_carpal_distal_phalanx_3_tip")

ProtoInstance611.addFieldValue(fieldValue612)
fieldValue613 = x3d.fieldValue()
fieldValue613.setName("translation")
fieldValue613.setValue("0.208000004291534 0.673099994659424 -0.049100000411272")

ProtoInstance611.addFieldValue(fieldValue613)

fieldValue610.addChildren(ProtoInstance611)

ProtoInstance608.addFieldValue(fieldValue610)

fieldValue607.addChildren(ProtoInstance608)

ProtoInstance603.addFieldValue(fieldValue607)

fieldValue602.addChildren(ProtoInstance603)
ProtoInstance614 = x3d.ProtoInstance()
ProtoInstance614.setName("Segment")
ProtoInstance614.setDEF("hanim_l_middle_middle_2")
fieldValue615 = x3d.fieldValue()
fieldValue615.setName("name")
fieldValue615.setValue("l_middle_middle")

ProtoInstance614.addFieldValue(fieldValue615)

fieldValue602.addChildren(ProtoInstance614)

ProtoInstance598.addFieldValue(fieldValue602)

fieldValue597.addChildren(ProtoInstance598)
ProtoInstance616 = x3d.ProtoInstance()
ProtoInstance616.setName("Segment")
ProtoInstance616.setDEF("hanim_l_middle_proximal_2")
fieldValue617 = x3d.fieldValue()
fieldValue617.setName("name")
fieldValue617.setValue("l_middle_proximal")

ProtoInstance616.addFieldValue(fieldValue617)

fieldValue597.addChildren(ProtoInstance616)

ProtoInstance593.addFieldValue(fieldValue597)

fieldValue592.addChildren(ProtoInstance593)
ProtoInstance618 = x3d.ProtoInstance()
ProtoInstance618.setName("Segment")
ProtoInstance618.setDEF("hanim_l_middle_metacarpal_2")
fieldValue619 = x3d.fieldValue()
fieldValue619.setName("name")
fieldValue619.setValue("l_middle_metacarpal")

ProtoInstance618.addFieldValue(fieldValue619)

fieldValue592.addChildren(ProtoInstance618)

ProtoInstance588.addFieldValue(fieldValue592)

fieldValue527.addChildren(ProtoInstance588)
ProtoInstance620 = x3d.ProtoInstance()
ProtoInstance620.setName("Joint")
ProtoInstance620.setDEF("hanim_l_carpometacarpal5")
fieldValue621 = x3d.fieldValue()
fieldValue621.setName("stiffness")
fieldValue621.setValue("1 1 1")

ProtoInstance620.addFieldValue(fieldValue621)
fieldValue622 = x3d.fieldValue()
fieldValue622.setName("name")
fieldValue622.setValue("l_carpometacarpal_4")

ProtoInstance620.addFieldValue(fieldValue622)
fieldValue623 = x3d.fieldValue()
fieldValue623.setName("center")
fieldValue623.setValue("0.195600003004074 0.801900029182434 -0.0794000029563904")

ProtoInstance620.addFieldValue(fieldValue623)
fieldValue624 = x3d.fieldValue()
fieldValue624.setName("children")
ProtoInstance625 = x3d.ProtoInstance()
ProtoInstance625.setName("Joint")
ProtoInstance625.setDEF("hanim_l_metacarpophalangeal5")
fieldValue626 = x3d.fieldValue()
fieldValue626.setName("stiffness")
fieldValue626.setValue("1 1 1")

ProtoInstance625.addFieldValue(fieldValue626)
fieldValue627 = x3d.fieldValue()
fieldValue627.setName("name")
fieldValue627.setValue("l_metacarpophalangeal_4")

ProtoInstance625.addFieldValue(fieldValue627)
fieldValue628 = x3d.fieldValue()
fieldValue628.setName("center")
fieldValue628.setValue("0.195600003004074 0.781499981880188 -0.0794000029563904")

ProtoInstance625.addFieldValue(fieldValue628)
fieldValue629 = x3d.fieldValue()
fieldValue629.setName("children")
ProtoInstance630 = x3d.ProtoInstance()
ProtoInstance630.setName("Joint")
ProtoInstance630.setDEF("hanim_l_carpal_proximal_interphalangeal5")
fieldValue631 = x3d.fieldValue()
fieldValue631.setName("stiffness")
fieldValue631.setValue("1 1 1")

ProtoInstance630.addFieldValue(fieldValue631)
fieldValue632 = x3d.fieldValue()
fieldValue632.setName("name")
fieldValue632.setValue("l_carpal_proximal_interphalangeal_4")

ProtoInstance630.addFieldValue(fieldValue632)
fieldValue633 = x3d.fieldValue()
fieldValue633.setName("center")
fieldValue633.setValue("0.197300001978874 0.72869998216629 -0.0776999965310097")

ProtoInstance630.addFieldValue(fieldValue633)
fieldValue634 = x3d.fieldValue()
fieldValue634.setName("children")
ProtoInstance635 = x3d.ProtoInstance()
ProtoInstance635.setName("Joint")
ProtoInstance635.setDEF("hanim_l_carpal_distal_interphalangeal5")
fieldValue636 = x3d.fieldValue()
fieldValue636.setName("stiffness")
fieldValue636.setValue("1 1 1")

ProtoInstance635.addFieldValue(fieldValue636)
fieldValue637 = x3d.fieldValue()
fieldValue637.setName("name")
fieldValue637.setValue("l_carpal_distal_interphalangeal_4")

ProtoInstance635.addFieldValue(fieldValue637)
fieldValue638 = x3d.fieldValue()
fieldValue638.setName("center")
fieldValue638.setValue("0.198300004005432 0.704500019550323 -0.0767000019550323")

ProtoInstance635.addFieldValue(fieldValue638)
fieldValue639 = x3d.fieldValue()
fieldValue639.setName("children")
ProtoInstance640 = x3d.ProtoInstance()
ProtoInstance640.setName("Segment")
ProtoInstance640.setDEF("hanim_l_carpal_distal_phalanx5")
fieldValue641 = x3d.fieldValue()
fieldValue641.setName("name")
fieldValue641.setValue("l_carpal_distal_phalanx_4")

ProtoInstance640.addFieldValue(fieldValue641)
fieldValue642 = x3d.fieldValue()
fieldValue642.setName("children")
ProtoInstance643 = x3d.ProtoInstance()
ProtoInstance643.setName("Site")
ProtoInstance643.setDEF("hanim_l_carpal_distal_phalanx_4_tip_2")
fieldValue644 = x3d.fieldValue()
fieldValue644.setName("name")
fieldValue644.setValue("l_carpal_distal_phalanx_4_tip")

ProtoInstance643.addFieldValue(fieldValue644)
fieldValue645 = x3d.fieldValue()
fieldValue645.setName("translation")
fieldValue645.setValue("0.203500002622604 0.675000011920929 -0.0755999982357025")

ProtoInstance643.addFieldValue(fieldValue645)

fieldValue642.addChildren(ProtoInstance643)

ProtoInstance640.addFieldValue(fieldValue642)

fieldValue639.addChildren(ProtoInstance640)

ProtoInstance635.addFieldValue(fieldValue639)

fieldValue634.addChildren(ProtoInstance635)
ProtoInstance646 = x3d.ProtoInstance()
ProtoInstance646.setName("Segment")
ProtoInstance646.setDEF("hanim_l_ring_middle_2")
fieldValue647 = x3d.fieldValue()
fieldValue647.setName("name")
fieldValue647.setValue("l_ring_middle")

ProtoInstance646.addFieldValue(fieldValue647)

fieldValue634.addChildren(ProtoInstance646)

ProtoInstance630.addFieldValue(fieldValue634)

fieldValue629.addChildren(ProtoInstance630)
ProtoInstance648 = x3d.ProtoInstance()
ProtoInstance648.setName("Segment")
ProtoInstance648.setDEF("hanim_l_ring_proximal_2")
fieldValue649 = x3d.fieldValue()
fieldValue649.setName("name")
fieldValue649.setValue("l_ring_proximal")

ProtoInstance648.addFieldValue(fieldValue649)

fieldValue629.addChildren(ProtoInstance648)

ProtoInstance625.addFieldValue(fieldValue629)

fieldValue624.addChildren(ProtoInstance625)
ProtoInstance650 = x3d.ProtoInstance()
ProtoInstance650.setName("Segment")
ProtoInstance650.setDEF("hanim_l_ring_metacarpal_2")
fieldValue651 = x3d.fieldValue()
fieldValue651.setName("name")
fieldValue651.setValue("l_ring_metacarpal")

ProtoInstance650.addFieldValue(fieldValue651)

fieldValue624.addChildren(ProtoInstance650)

ProtoInstance620.addFieldValue(fieldValue624)

fieldValue527.addChildren(ProtoInstance620)
ProtoInstance652 = x3d.ProtoInstance()
ProtoInstance652.setName("Joint")
ProtoInstance652.setDEF("hanim_l_carpometacarpal6")
fieldValue653 = x3d.fieldValue()
fieldValue653.setName("stiffness")
fieldValue653.setValue("1 1 1")

ProtoInstance652.addFieldValue(fieldValue653)
fieldValue654 = x3d.fieldValue()
fieldValue654.setName("name")
fieldValue654.setValue("l_carpometacarpal_5")

ProtoInstance652.addFieldValue(fieldValue654)
fieldValue655 = x3d.fieldValue()
fieldValue655.setName("center")
fieldValue655.setValue("0.192499995231628 0.806599974632263 -0.10360000282526")

ProtoInstance652.addFieldValue(fieldValue655)
fieldValue656 = x3d.fieldValue()
fieldValue656.setName("children")
ProtoInstance657 = x3d.ProtoInstance()
ProtoInstance657.setName("Joint")
ProtoInstance657.setDEF("hanim_l_metacarpophalangeal6")
fieldValue658 = x3d.fieldValue()
fieldValue658.setName("stiffness")
fieldValue658.setValue("1 1 1")

ProtoInstance657.addFieldValue(fieldValue658)
fieldValue659 = x3d.fieldValue()
fieldValue659.setName("name")
fieldValue659.setValue("l_metacarpophalangeal_5")

ProtoInstance657.addFieldValue(fieldValue659)
fieldValue660 = x3d.fieldValue()
fieldValue660.setName("center")
fieldValue660.setValue("0.192499995231628 0.78659999370575 -0.10360000282526")

ProtoInstance657.addFieldValue(fieldValue660)
fieldValue661 = x3d.fieldValue()
fieldValue661.setName("children")
ProtoInstance662 = x3d.ProtoInstance()
ProtoInstance662.setName("Joint")
ProtoInstance662.setDEF("hanim_l_carpal_proximal_interphalangeal6")
fieldValue663 = x3d.fieldValue()
fieldValue663.setName("stiffness")
fieldValue663.setValue("1 1 1")

ProtoInstance662.addFieldValue(fieldValue663)
fieldValue664 = x3d.fieldValue()
fieldValue664.setName("name")
fieldValue664.setValue("l_carpal_proximal_interphalangeal_5")

ProtoInstance662.addFieldValue(fieldValue664)
fieldValue665 = x3d.fieldValue()
fieldValue665.setName("center")
fieldValue665.setValue("0.193800002336502 0.745199978351593 -0.102399997413158")

ProtoInstance662.addFieldValue(fieldValue665)
fieldValue666 = x3d.fieldValue()
fieldValue666.setName("children")
ProtoInstance667 = x3d.ProtoInstance()
ProtoInstance667.setName("Joint")
ProtoInstance667.setDEF("hanim_l_carpal_distal_interphalangeal6")
fieldValue668 = x3d.fieldValue()
fieldValue668.setName("stiffness")
fieldValue668.setValue("1 1 1")

ProtoInstance667.addFieldValue(fieldValue668)
fieldValue669 = x3d.fieldValue()
fieldValue669.setName("name")
fieldValue669.setValue("l_carpal_distal_interphalangeal_5")

ProtoInstance667.addFieldValue(fieldValue669)
fieldValue670 = x3d.fieldValue()
fieldValue670.setName("center")
fieldValue670.setValue("0.19480000436306 0.727699995040894 -0.101700000464916")

ProtoInstance667.addFieldValue(fieldValue670)
fieldValue671 = x3d.fieldValue()
fieldValue671.setName("children")
ProtoInstance672 = x3d.ProtoInstance()
ProtoInstance672.setName("Segment")
ProtoInstance672.setDEF("hanim_l_carpal_distal_phalanx6")
fieldValue673 = x3d.fieldValue()
fieldValue673.setName("name")
fieldValue673.setValue("l_carpal_distal_phalanx_5")

ProtoInstance672.addFieldValue(fieldValue673)
fieldValue674 = x3d.fieldValue()
fieldValue674.setName("children")
ProtoInstance675 = x3d.ProtoInstance()
ProtoInstance675.setName("Site")
ProtoInstance675.setDEF("hanim_l_carpal_distal_phalanx_5_tip_2")
fieldValue676 = x3d.fieldValue()
fieldValue676.setName("name")
fieldValue676.setValue("l_carpal_distal_phalanx_5_tip")

ProtoInstance675.addFieldValue(fieldValue676)
fieldValue677 = x3d.fieldValue()
fieldValue677.setName("translation")
fieldValue677.setValue("0.201399996876717 0.700900018215179 -0.101199999451637")

ProtoInstance675.addFieldValue(fieldValue677)

fieldValue674.addChildren(ProtoInstance675)

ProtoInstance672.addFieldValue(fieldValue674)

fieldValue671.addChildren(ProtoInstance672)

ProtoInstance667.addFieldValue(fieldValue671)

fieldValue666.addChildren(ProtoInstance667)
ProtoInstance678 = x3d.ProtoInstance()
ProtoInstance678.setName("Segment")
ProtoInstance678.setDEF("hanim_l_pinky_middle_2")
fieldValue679 = x3d.fieldValue()
fieldValue679.setName("name")
fieldValue679.setValue("l_pinky_middle")

ProtoInstance678.addFieldValue(fieldValue679)

fieldValue666.addChildren(ProtoInstance678)

ProtoInstance662.addFieldValue(fieldValue666)

fieldValue661.addChildren(ProtoInstance662)
ProtoInstance680 = x3d.ProtoInstance()
ProtoInstance680.setName("Segment")
ProtoInstance680.setDEF("hanim_l_pinky_proximal_2")
fieldValue681 = x3d.fieldValue()
fieldValue681.setName("name")
fieldValue681.setValue("l_pinky_proximal")

ProtoInstance680.addFieldValue(fieldValue681)

fieldValue661.addChildren(ProtoInstance680)

ProtoInstance657.addFieldValue(fieldValue661)

fieldValue656.addChildren(ProtoInstance657)
ProtoInstance682 = x3d.ProtoInstance()
ProtoInstance682.setName("Segment")
ProtoInstance682.setDEF("hanim_l_pinky_metacarpal_2")
fieldValue683 = x3d.fieldValue()
fieldValue683.setName("name")
fieldValue683.setValue("l_pinky_metacarpal")

ProtoInstance682.addFieldValue(fieldValue683)

fieldValue656.addChildren(ProtoInstance682)

ProtoInstance652.addFieldValue(fieldValue656)

fieldValue527.addChildren(ProtoInstance652)
ProtoInstance684 = x3d.ProtoInstance()
ProtoInstance684.setName("Segment")
ProtoInstance684.setDEF("hanim_l_hand_2")
fieldValue685 = x3d.fieldValue()
fieldValue685.setName("name")
fieldValue685.setValue("l_hand")

ProtoInstance684.addFieldValue(fieldValue685)
fieldValue686 = x3d.fieldValue()
fieldValue686.setName("children")
ProtoInstance687 = x3d.ProtoInstance()
ProtoInstance687.setName("Site")
ProtoInstance687.setDEF("hanim_l_metacarpal_phalanx3")
fieldValue688 = x3d.fieldValue()
fieldValue688.setName("name")
fieldValue688.setValue("l_metacarpal_phalanx_2")

ProtoInstance687.addFieldValue(fieldValue688)
fieldValue689 = x3d.fieldValue()
fieldValue689.setName("translation")
fieldValue689.setValue("0.200900003314018 0.813899993896484 -0.023700000718236")

ProtoInstance687.addFieldValue(fieldValue689)

fieldValue686.addChildren(ProtoInstance687)
ProtoInstance690 = x3d.ProtoInstance()
ProtoInstance690.setName("Site")
ProtoInstance690.setDEF("hanim_l_ulnar_styloid_2")
fieldValue691 = x3d.fieldValue()
fieldValue691.setName("name")
fieldValue691.setValue("l_ulnar_styloid")

ProtoInstance690.addFieldValue(fieldValue691)
fieldValue692 = x3d.fieldValue()
fieldValue692.setName("translation")
fieldValue692.setValue("-0.214200004935265 0.85290002822876 -0.064800001680851")

ProtoInstance690.addFieldValue(fieldValue692)

fieldValue686.addChildren(ProtoInstance690)
ProtoInstance693 = x3d.ProtoInstance()
ProtoInstance693.setName("Site")
ProtoInstance693.setDEF("hanim_l_metacarpal_phalanx6")
fieldValue694 = x3d.fieldValue()
fieldValue694.setName("name")
fieldValue694.setValue("l_metacarpal_phalanx_5")

ProtoInstance693.addFieldValue(fieldValue694)
fieldValue695 = x3d.fieldValue()
fieldValue695.setName("translation")
fieldValue695.setValue("0.192900002002716 0.78600001335144 -0.112199999392033")

ProtoInstance693.addFieldValue(fieldValue695)

fieldValue686.addChildren(ProtoInstance693)

ProtoInstance684.addFieldValue(fieldValue686)

fieldValue527.addChildren(ProtoInstance684)

ProtoInstance523.addFieldValue(fieldValue527)

fieldValue522.addChildren(ProtoInstance523)
ProtoInstance696 = x3d.ProtoInstance()
ProtoInstance696.setName("Segment")
ProtoInstance696.setDEF("hanim_l_forearm_2")
fieldValue697 = x3d.fieldValue()
fieldValue697.setName("name")
fieldValue697.setValue("l_forearm")

ProtoInstance696.addFieldValue(fieldValue697)
fieldValue698 = x3d.fieldValue()
fieldValue698.setName("children")
ProtoInstance699 = x3d.ProtoInstance()
ProtoInstance699.setName("Site")
ProtoInstance699.setDEF("hanim_l_radial_styloid_2")
fieldValue700 = x3d.fieldValue()
fieldValue700.setName("name")
fieldValue700.setValue("l_radial_styloid")

ProtoInstance699.addFieldValue(fieldValue700)
fieldValue701 = x3d.fieldValue()
fieldValue701.setName("translation")
fieldValue701.setValue("0.190099999308586 0.864499986171722 -0.0414999984204769")

ProtoInstance699.addFieldValue(fieldValue701)

fieldValue698.addChildren(ProtoInstance699)
ProtoInstance702 = x3d.ProtoInstance()
ProtoInstance702.setName("Site")
ProtoInstance702.setDEF("hanim_l_olecranon_2")
fieldValue703 = x3d.fieldValue()
fieldValue703.setName("name")
fieldValue703.setValue("l_olecranon")

ProtoInstance702.addFieldValue(fieldValue703)
fieldValue704 = x3d.fieldValue()
fieldValue704.setName("translation")
fieldValue704.setValue("-0.196199998259544 1.13750004768372 -0.112300001084805")

ProtoInstance702.addFieldValue(fieldValue704)

fieldValue698.addChildren(ProtoInstance702)
ProtoInstance705 = x3d.ProtoInstance()
ProtoInstance705.setName("Site")
ProtoInstance705.setDEF("hanim_l_humeral_medial_epicondyles_2")
fieldValue706 = x3d.fieldValue()
fieldValue706.setName("name")
fieldValue706.setValue("l_humeral_medial_epicondyles")

ProtoInstance705.addFieldValue(fieldValue706)
fieldValue707 = x3d.fieldValue()
fieldValue707.setName("translation")
fieldValue707.setValue("0.173500001430511 1.12720000743866 -0.111299999058247")

ProtoInstance705.addFieldValue(fieldValue707)

fieldValue698.addChildren(ProtoInstance705)
ProtoInstance708 = x3d.ProtoInstance()
ProtoInstance708.setName("Site")
ProtoInstance708.setDEF("hanim_l_radiale_2")
fieldValue709 = x3d.fieldValue()
fieldValue709.setName("name")
fieldValue709.setValue("l_radiale")

ProtoInstance708.addFieldValue(fieldValue709)
fieldValue710 = x3d.fieldValue()
fieldValue710.setName("translation")
fieldValue710.setValue("0.218199998140335 1.12119996547699 -0.116700001060963")

ProtoInstance708.addFieldValue(fieldValue710)

fieldValue698.addChildren(ProtoInstance708)

ProtoInstance696.addFieldValue(fieldValue698)

fieldValue522.addChildren(ProtoInstance696)

ProtoInstance518.addFieldValue(fieldValue522)

fieldValue517.addChildren(ProtoInstance518)
ProtoInstance711 = x3d.ProtoInstance()
ProtoInstance711.setName("Segment")
ProtoInstance711.setDEF("hanim_l_upperarm_2")
fieldValue712 = x3d.fieldValue()
fieldValue712.setName("name")
fieldValue712.setValue("l_upperarm")

ProtoInstance711.addFieldValue(fieldValue712)
fieldValue713 = x3d.fieldValue()
fieldValue713.setName("children")
ProtoInstance714 = x3d.ProtoInstance()
ProtoInstance714.setName("Site")
ProtoInstance714.setDEF("hanim_l_humeral_lateral_epicondyles_2")
fieldValue715 = x3d.fieldValue()
fieldValue715.setName("name")
fieldValue715.setValue("l_humeral_lateral_epicondyles")

ProtoInstance714.addFieldValue(fieldValue715)
fieldValue716 = x3d.fieldValue()
fieldValue716.setName("translation")
fieldValue716.setValue("0.228000000119209 1.14820003509521 -0.109999999403954")

ProtoInstance714.addFieldValue(fieldValue716)

fieldValue713.addChildren(ProtoInstance714)

ProtoInstance711.addFieldValue(fieldValue713)

fieldValue517.addChildren(ProtoInstance711)

ProtoInstance513.addFieldValue(fieldValue517)

fieldValue512.addChildren(ProtoInstance513)
ProtoInstance717 = x3d.ProtoInstance()
ProtoInstance717.setName("Segment")
ProtoInstance717.setDEF("hanim_l_scapula_2")
fieldValue718 = x3d.fieldValue()
fieldValue718.setName("name")
fieldValue718.setValue("l_scapula")

ProtoInstance717.addFieldValue(fieldValue718)

fieldValue512.addChildren(ProtoInstance717)

ProtoInstance508.addFieldValue(fieldValue512)

fieldValue507.addChildren(ProtoInstance508)
ProtoInstance719 = x3d.ProtoInstance()
ProtoInstance719.setName("Segment")
ProtoInstance719.setDEF("hanim_l_clavicle_2")
fieldValue720 = x3d.fieldValue()
fieldValue720.setName("name")
fieldValue720.setValue("l_clavicle")

ProtoInstance719.addFieldValue(fieldValue720)
fieldValue721 = x3d.fieldValue()
fieldValue721.setName("children")
ProtoInstance722 = x3d.ProtoInstance()
ProtoInstance722.setName("Site")
ProtoInstance722.setDEF("hanim_l_clavicale_2")
fieldValue723 = x3d.fieldValue()
fieldValue723.setName("name")
fieldValue723.setValue("l_clavicale")

ProtoInstance722.addFieldValue(fieldValue723)
fieldValue724 = x3d.fieldValue()
fieldValue724.setName("translation")
fieldValue724.setValue("0.0271000005304813 1.49430000782013 0.0394000001251698")

ProtoInstance722.addFieldValue(fieldValue724)

fieldValue721.addChildren(ProtoInstance722)
ProtoInstance725 = x3d.ProtoInstance()
ProtoInstance725.setName("Site")
ProtoInstance725.setDEF("hanim_l_acromion_2")
fieldValue726 = x3d.fieldValue()
fieldValue726.setName("name")
fieldValue726.setValue("l_acromion")

ProtoInstance725.addFieldValue(fieldValue726)
fieldValue727 = x3d.fieldValue()
fieldValue727.setName("translation")
fieldValue727.setValue("0.203199997544289 1.47599995136261 -0.0489999987185001")

ProtoInstance725.addFieldValue(fieldValue727)

fieldValue721.addChildren(ProtoInstance725)
ProtoInstance728 = x3d.ProtoInstance()
ProtoInstance728.setName("Site")
ProtoInstance728.setDEF("hanim_l_axilla_proximal_2")
fieldValue729 = x3d.fieldValue()
fieldValue729.setName("name")
fieldValue729.setValue("l_axilla_proximal")

ProtoInstance728.addFieldValue(fieldValue729)
fieldValue730 = x3d.fieldValue()
fieldValue730.setName("translation")
fieldValue730.setValue("0.177699998021126 1.40649998188019 -0.00749999983236194")

ProtoInstance728.addFieldValue(fieldValue730)

fieldValue721.addChildren(ProtoInstance728)
ProtoInstance731 = x3d.ProtoInstance()
ProtoInstance731.setName("Site")
ProtoInstance731.setDEF("hanim_l_axilla_distal_2")
fieldValue732 = x3d.fieldValue()
fieldValue732.setName("name")
fieldValue732.setValue("l_axilla_distal")

ProtoInstance731.addFieldValue(fieldValue732)
fieldValue733 = x3d.fieldValue()
fieldValue733.setName("translation")
fieldValue733.setValue("0.17059999704361 1.40719997882843 -0.0874999985098839")

ProtoInstance731.addFieldValue(fieldValue733)

fieldValue721.addChildren(ProtoInstance731)

ProtoInstance719.addFieldValue(fieldValue721)

fieldValue507.addChildren(ProtoInstance719)

ProtoInstance503.addFieldValue(fieldValue507)

fieldValue394.addChildren(ProtoInstance503)
ProtoInstance734 = x3d.ProtoInstance()
ProtoInstance734.setName("Joint")
ProtoInstance734.setDEF("hanim_r_sternoclavicular_2")
fieldValue735 = x3d.fieldValue()
fieldValue735.setName("stiffness")
fieldValue735.setValue("1 1 1")

ProtoInstance734.addFieldValue(fieldValue735)
fieldValue736 = x3d.fieldValue()
fieldValue736.setName("name")
fieldValue736.setValue("r_sternoclavicular")

ProtoInstance734.addFieldValue(fieldValue736)
fieldValue737 = x3d.fieldValue()
fieldValue737.setName("center")
fieldValue737.setValue("-0.0693999975919724 1.46000003814697 -0.0329999998211861")

ProtoInstance734.addFieldValue(fieldValue737)
fieldValue738 = x3d.fieldValue()
fieldValue738.setName("children")
ProtoInstance739 = x3d.ProtoInstance()
ProtoInstance739.setName("Joint")
ProtoInstance739.setDEF("hanim_r_acromioclavicular_2")
fieldValue740 = x3d.fieldValue()
fieldValue740.setName("stiffness")
fieldValue740.setValue("1 1 1")

ProtoInstance739.addFieldValue(fieldValue740)
fieldValue741 = x3d.fieldValue()
fieldValue741.setName("name")
fieldValue741.setValue("r_acromioclavicular")

ProtoInstance739.addFieldValue(fieldValue741)
fieldValue742 = x3d.fieldValue()
fieldValue742.setName("center")
fieldValue742.setValue("-0.0835999995470047 1.42809998989105 -0.0401000007987022")

ProtoInstance739.addFieldValue(fieldValue742)
fieldValue743 = x3d.fieldValue()
fieldValue743.setName("children")
ProtoInstance744 = x3d.ProtoInstance()
ProtoInstance744.setName("Joint")
ProtoInstance744.setDEF("hanim_r_shoulder_2")
fieldValue745 = x3d.fieldValue()
fieldValue745.setName("stiffness")
fieldValue745.setValue("1 1 1")

ProtoInstance744.addFieldValue(fieldValue745)
fieldValue746 = x3d.fieldValue()
fieldValue746.setName("name")
fieldValue746.setValue("r_shoulder")

ProtoInstance744.addFieldValue(fieldValue746)
fieldValue747 = x3d.fieldValue()
fieldValue747.setName("center")
fieldValue747.setValue("-0.190699994564056 1.4407000541687 -0.0324999988079071")

ProtoInstance744.addFieldValue(fieldValue747)
fieldValue748 = x3d.fieldValue()
fieldValue748.setName("children")
ProtoInstance749 = x3d.ProtoInstance()
ProtoInstance749.setName("Joint")
ProtoInstance749.setDEF("hanim_r_elbow_2")
fieldValue750 = x3d.fieldValue()
fieldValue750.setName("stiffness")
fieldValue750.setValue("1 1 1")

ProtoInstance749.addFieldValue(fieldValue750)
fieldValue751 = x3d.fieldValue()
fieldValue751.setName("name")
fieldValue751.setValue("r_elbow")

ProtoInstance749.addFieldValue(fieldValue751)
fieldValue752 = x3d.fieldValue()
fieldValue752.setName("center")
fieldValue752.setValue("-0.194900006055832 1.13880002498627 -0.061999998986721")

ProtoInstance749.addFieldValue(fieldValue752)
fieldValue753 = x3d.fieldValue()
fieldValue753.setName("children")
ProtoInstance754 = x3d.ProtoInstance()
ProtoInstance754.setName("Joint")
ProtoInstance754.setDEF("hanim_r_radiocarpal_2")
fieldValue755 = x3d.fieldValue()
fieldValue755.setName("stiffness")
fieldValue755.setValue("1 1 1")

ProtoInstance754.addFieldValue(fieldValue755)
fieldValue756 = x3d.fieldValue()
fieldValue756.setName("name")
fieldValue756.setValue("r_radiocarpal")

ProtoInstance754.addFieldValue(fieldValue756)
fieldValue757 = x3d.fieldValue()
fieldValue757.setName("center")
fieldValue757.setValue("-0.195899993181229 0.869400024414063 -0.0520999990403652")

ProtoInstance754.addFieldValue(fieldValue757)
fieldValue758 = x3d.fieldValue()
fieldValue758.setName("children")
ProtoInstance759 = x3d.ProtoInstance()
ProtoInstance759.setName("Joint")
ProtoInstance759.setDEF("hanim_r_carpometacarpal2")
fieldValue760 = x3d.fieldValue()
fieldValue760.setName("stiffness")
fieldValue760.setValue("1 1 1")

ProtoInstance759.addFieldValue(fieldValue760)
fieldValue761 = x3d.fieldValue()
fieldValue761.setName("name")
fieldValue761.setValue("r_carpometacarpal_1")

ProtoInstance759.addFieldValue(fieldValue761)
fieldValue762 = x3d.fieldValue()
fieldValue762.setName("center")
fieldValue762.setValue("-0.189899995923042 0.850199997425079 -0.0472999997437")

ProtoInstance759.addFieldValue(fieldValue762)
fieldValue763 = x3d.fieldValue()
fieldValue763.setName("children")
ProtoInstance764 = x3d.ProtoInstance()
ProtoInstance764.setName("Joint")
ProtoInstance764.setDEF("hanim_r_metacarpophalangeal2")
fieldValue765 = x3d.fieldValue()
fieldValue765.setName("stiffness")
fieldValue765.setValue("1 1 1")

ProtoInstance764.addFieldValue(fieldValue765)
fieldValue766 = x3d.fieldValue()
fieldValue766.setName("name")
fieldValue766.setValue("r_metacarpophalangeal_1")

ProtoInstance764.addFieldValue(fieldValue766)
fieldValue767 = x3d.fieldValue()
fieldValue767.setName("center")
fieldValue767.setValue("-0.187399998307228 0.825600028038025 0.0306000001728535")

ProtoInstance764.addFieldValue(fieldValue767)
fieldValue768 = x3d.fieldValue()
fieldValue768.setName("children")
ProtoInstance769 = x3d.ProtoInstance()
ProtoInstance769.setName("Joint")
ProtoInstance769.setDEF("hanim_r_carpal_interphalangeal2")
fieldValue770 = x3d.fieldValue()
fieldValue770.setName("stiffness")
fieldValue770.setValue("1 1 1")

ProtoInstance769.addFieldValue(fieldValue770)
fieldValue771 = x3d.fieldValue()
fieldValue771.setName("name")
fieldValue771.setValue("r_carpal_interphalangeal_1")

ProtoInstance769.addFieldValue(fieldValue771)
fieldValue772 = x3d.fieldValue()
fieldValue772.setName("center")
fieldValue772.setValue("-0.18639999628067 0.819000005722046 0.0505999997258186")

ProtoInstance769.addFieldValue(fieldValue772)
fieldValue773 = x3d.fieldValue()
fieldValue773.setName("children")
ProtoInstance774 = x3d.ProtoInstance()
ProtoInstance774.setName("Segment")
ProtoInstance774.setDEF("hanim_r_carpal_distal_phalanx2")
fieldValue775 = x3d.fieldValue()
fieldValue775.setName("name")
fieldValue775.setValue("r_carpal_distal_phalanx_1")

ProtoInstance774.addFieldValue(fieldValue775)
fieldValue776 = x3d.fieldValue()
fieldValue776.setName("children")
ProtoInstance777 = x3d.ProtoInstance()
ProtoInstance777.setName("Site")
ProtoInstance777.setDEF("hanim_r_carpal_distal_phalanx_1_tip_2")
fieldValue778 = x3d.fieldValue()
fieldValue778.setName("name")
fieldValue778.setValue("r_carpal_distal_phalanx_1_tip")

ProtoInstance777.addFieldValue(fieldValue778)
fieldValue779 = x3d.fieldValue()
fieldValue779.setName("translation")
fieldValue779.setValue("-0.18690000474453 0.809000015258789 0.0820000022649765")

ProtoInstance777.addFieldValue(fieldValue779)

fieldValue776.addChildren(ProtoInstance777)

ProtoInstance774.addFieldValue(fieldValue776)

fieldValue773.addChildren(ProtoInstance774)

ProtoInstance769.addFieldValue(fieldValue773)

fieldValue768.addChildren(ProtoInstance769)
ProtoInstance780 = x3d.ProtoInstance()
ProtoInstance780.setName("Segment")
ProtoInstance780.setDEF("hanim_r_index_proximal_2")
fieldValue781 = x3d.fieldValue()
fieldValue781.setName("name")
fieldValue781.setValue("r_index_proximal")

ProtoInstance780.addFieldValue(fieldValue781)

fieldValue768.addChildren(ProtoInstance780)

ProtoInstance764.addFieldValue(fieldValue768)

fieldValue763.addChildren(ProtoInstance764)
ProtoInstance782 = x3d.ProtoInstance()
ProtoInstance782.setName("Segment")
ProtoInstance782.setDEF("hanim_r_index_proximal_4")
fieldValue783 = x3d.fieldValue()
fieldValue783.setName("name")
fieldValue783.setValue("r_index_proximal")

ProtoInstance782.addFieldValue(fieldValue783)

fieldValue763.addChildren(ProtoInstance782)

ProtoInstance759.addFieldValue(fieldValue763)

fieldValue758.addChildren(ProtoInstance759)
ProtoInstance784 = x3d.ProtoInstance()
ProtoInstance784.setName("Joint")
ProtoInstance784.setDEF("hanim_r_carpometacarpal3")
fieldValue785 = x3d.fieldValue()
fieldValue785.setName("stiffness")
fieldValue785.setValue("1 1 1")

ProtoInstance784.addFieldValue(fieldValue785)
fieldValue786 = x3d.fieldValue()
fieldValue786.setName("name")
fieldValue786.setValue("r_carpometacarpal_2")

ProtoInstance784.addFieldValue(fieldValue786)
fieldValue787 = x3d.fieldValue()
fieldValue787.setName("center")
fieldValue787.setValue("-0.196099996566772 0.805499970912933 -0.0218000002205372")

ProtoInstance784.addFieldValue(fieldValue787)
fieldValue788 = x3d.fieldValue()
fieldValue788.setName("children")
ProtoInstance789 = x3d.ProtoInstance()
ProtoInstance789.setName("Joint")
ProtoInstance789.setDEF("hanim_r_metacarpophalangeal3")
fieldValue790 = x3d.fieldValue()
fieldValue790.setName("stiffness")
fieldValue790.setValue("1 1 1")

ProtoInstance789.addFieldValue(fieldValue790)
fieldValue791 = x3d.fieldValue()
fieldValue791.setName("name")
fieldValue791.setValue("r_metacarpophalangeal_2")

ProtoInstance789.addFieldValue(fieldValue791)
fieldValue792 = x3d.fieldValue()
fieldValue792.setName("center")
fieldValue792.setValue("-0.196099996566772 0.784600019454956 -0.0218000002205372")

ProtoInstance789.addFieldValue(fieldValue792)
fieldValue793 = x3d.fieldValue()
fieldValue793.setName("children")
ProtoInstance794 = x3d.ProtoInstance()
ProtoInstance794.setName("Joint")
ProtoInstance794.setDEF("hanim_r_carpal_proximal_interphalangeal3")
fieldValue795 = x3d.fieldValue()
fieldValue795.setName("stiffness")
fieldValue795.setValue("1 1 1")

ProtoInstance794.addFieldValue(fieldValue795)
fieldValue796 = x3d.fieldValue()
fieldValue796.setName("name")
fieldValue796.setValue("r_carpal_proximal_interphalangeal_2")

ProtoInstance794.addFieldValue(fieldValue796)
fieldValue797 = x3d.fieldValue()
fieldValue797.setName("center")
fieldValue797.setValue("-0.19539999961853 0.739300012588501 -0.0185000002384186")

ProtoInstance794.addFieldValue(fieldValue797)
fieldValue798 = x3d.fieldValue()
fieldValue798.setName("children")
ProtoInstance799 = x3d.ProtoInstance()
ProtoInstance799.setName("Joint")
ProtoInstance799.setDEF("hanim_r_carpal_distal_interphalangeal3")
fieldValue800 = x3d.fieldValue()
fieldValue800.setName("stiffness")
fieldValue800.setValue("1 1 1")

ProtoInstance799.addFieldValue(fieldValue800)
fieldValue801 = x3d.fieldValue()
fieldValue801.setName("name")
fieldValue801.setValue("r_carpal_distal_interphalangeal_2")

ProtoInstance799.addFieldValue(fieldValue801)
fieldValue802 = x3d.fieldValue()
fieldValue802.setName("center")
fieldValue802.setValue("-0.194499999284744 0.716899991035461 -0.0173000004142523")

ProtoInstance799.addFieldValue(fieldValue802)
fieldValue803 = x3d.fieldValue()
fieldValue803.setName("children")
ProtoInstance804 = x3d.ProtoInstance()
ProtoInstance804.setName("Segment")
ProtoInstance804.setDEF("hanim_r_carpal_distal_phalanx3")
fieldValue805 = x3d.fieldValue()
fieldValue805.setName("name")
fieldValue805.setValue("r_carpal_distal_phalanx_2")

ProtoInstance804.addFieldValue(fieldValue805)
fieldValue806 = x3d.fieldValue()
fieldValue806.setName("children")
ProtoInstance807 = x3d.ProtoInstance()
ProtoInstance807.setName("Site")
ProtoInstance807.setDEF("hanim_r_carpal_distal_phalanx_2_tip_2")
fieldValue808 = x3d.fieldValue()
fieldValue808.setName("name")
fieldValue808.setValue("r_carpal_distal_phalanx_2_tip")

ProtoInstance807.addFieldValue(fieldValue808)
fieldValue809 = x3d.fieldValue()
fieldValue809.setName("translation")
fieldValue809.setValue("-0.197999998927116 0.688300013542175 -0.0179999992251396")

ProtoInstance807.addFieldValue(fieldValue809)

fieldValue806.addChildren(ProtoInstance807)
ProtoInstance810 = x3d.ProtoInstance()
ProtoInstance810.setName("Site")
ProtoInstance810.setDEF("hanim_r_dactylion_2")
fieldValue811 = x3d.fieldValue()
fieldValue811.setName("name")
fieldValue811.setValue("r_dactylion")

ProtoInstance810.addFieldValue(fieldValue811)
fieldValue812 = x3d.fieldValue()
fieldValue812.setName("translation")
fieldValue812.setValue("-0.194100007414818 0.677200019359589 -0.0423000007867813")

ProtoInstance810.addFieldValue(fieldValue812)

fieldValue806.addChildren(ProtoInstance810)

ProtoInstance804.addFieldValue(fieldValue806)

fieldValue803.addChildren(ProtoInstance804)

ProtoInstance799.addFieldValue(fieldValue803)

fieldValue798.addChildren(ProtoInstance799)
ProtoInstance813 = x3d.ProtoInstance()
ProtoInstance813.setName("Segment")
ProtoInstance813.setDEF("hanim_r_index_middle_2")
fieldValue814 = x3d.fieldValue()
fieldValue814.setName("name")
fieldValue814.setValue("r_index_middle")

ProtoInstance813.addFieldValue(fieldValue814)

fieldValue798.addChildren(ProtoInstance813)

ProtoInstance794.addFieldValue(fieldValue798)

fieldValue793.addChildren(ProtoInstance794)
ProtoInstance815 = x3d.ProtoInstance()
ProtoInstance815.setName("Segment")
ProtoInstance815.setDEF("hanim_r_index_proximal_6")
fieldValue816 = x3d.fieldValue()
fieldValue816.setName("name")
fieldValue816.setValue("r_index_proximal")

ProtoInstance815.addFieldValue(fieldValue816)

fieldValue793.addChildren(ProtoInstance815)

ProtoInstance789.addFieldValue(fieldValue793)

fieldValue788.addChildren(ProtoInstance789)
ProtoInstance817 = x3d.ProtoInstance()
ProtoInstance817.setName("Segment")
ProtoInstance817.setDEF("hanim_r_index_metacarpal_2")
fieldValue818 = x3d.fieldValue()
fieldValue818.setName("name")
fieldValue818.setValue("r_index_metacarpal")

ProtoInstance817.addFieldValue(fieldValue818)

fieldValue788.addChildren(ProtoInstance817)

ProtoInstance784.addFieldValue(fieldValue788)

fieldValue758.addChildren(ProtoInstance784)
ProtoInstance819 = x3d.ProtoInstance()
ProtoInstance819.setName("Joint")
ProtoInstance819.setDEF("hanim_r_carpometacarpal4")
fieldValue820 = x3d.fieldValue()
fieldValue820.setName("stiffness")
fieldValue820.setValue("1 1 1")

ProtoInstance819.addFieldValue(fieldValue820)
fieldValue821 = x3d.fieldValue()
fieldValue821.setName("name")
fieldValue821.setValue("r_carpometacarpal_3")

ProtoInstance819.addFieldValue(fieldValue821)
fieldValue822 = x3d.fieldValue()
fieldValue822.setName("center")
fieldValue822.setValue("-0.197200000286102 0.805999994277954 -0.0467999987304211")

ProtoInstance819.addFieldValue(fieldValue822)
fieldValue823 = x3d.fieldValue()
fieldValue823.setName("children")
ProtoInstance824 = x3d.ProtoInstance()
ProtoInstance824.setName("Joint")
ProtoInstance824.setDEF("hanim_r_metacarpophalangeal4")
fieldValue825 = x3d.fieldValue()
fieldValue825.setName("stiffness")
fieldValue825.setValue("1 1 1")

ProtoInstance824.addFieldValue(fieldValue825)
fieldValue826 = x3d.fieldValue()
fieldValue826.setName("name")
fieldValue826.setValue("r_metacarpophalangeal_3")

ProtoInstance824.addFieldValue(fieldValue826)
fieldValue827 = x3d.fieldValue()
fieldValue827.setName("center")
fieldValue827.setValue("-0.197200000286102 0.784900009632111 -0.0467999987304211")

ProtoInstance824.addFieldValue(fieldValue827)
fieldValue828 = x3d.fieldValue()
fieldValue828.setName("children")
ProtoInstance829 = x3d.ProtoInstance()
ProtoInstance829.setName("Joint")
ProtoInstance829.setDEF("hanim_r_carpal_proximal_interphalangeal4")
fieldValue830 = x3d.fieldValue()
fieldValue830.setName("stiffness")
fieldValue830.setValue("1 1 1")

ProtoInstance829.addFieldValue(fieldValue830)
fieldValue831 = x3d.fieldValue()
fieldValue831.setName("name")
fieldValue831.setValue("r_carpal_proximal_interphalangeal_3")

ProtoInstance829.addFieldValue(fieldValue831)
fieldValue832 = x3d.fieldValue()
fieldValue832.setName("center")
fieldValue832.setValue("-0.194999992847443 0.730400025844574 -0.0441000014543533")

ProtoInstance829.addFieldValue(fieldValue832)
fieldValue833 = x3d.fieldValue()
fieldValue833.setName("children")
ProtoInstance834 = x3d.ProtoInstance()
ProtoInstance834.setName("Joint")
ProtoInstance834.setDEF("hanim_r_carpal_distal_interphalangeal4")
fieldValue835 = x3d.fieldValue()
fieldValue835.setName("stiffness")
fieldValue835.setValue("1 1 1")

ProtoInstance834.addFieldValue(fieldValue835)
fieldValue836 = x3d.fieldValue()
fieldValue836.setName("name")
fieldValue836.setValue("r_carpal_distal_interphalangeal_3")

ProtoInstance834.addFieldValue(fieldValue836)
fieldValue837 = x3d.fieldValue()
fieldValue837.setName("center")
fieldValue837.setValue("-0.193900004029274 0.704200029373169 -0.0432000011205673")

ProtoInstance834.addFieldValue(fieldValue837)
fieldValue838 = x3d.fieldValue()
fieldValue838.setName("children")
ProtoInstance839 = x3d.ProtoInstance()
ProtoInstance839.setName("Segment")
ProtoInstance839.setDEF("hanim_r_carpal_distal_phalanx4")
fieldValue840 = x3d.fieldValue()
fieldValue840.setName("name")
fieldValue840.setValue("r_carpal_distal_phalanx_3")

ProtoInstance839.addFieldValue(fieldValue840)
fieldValue841 = x3d.fieldValue()
fieldValue841.setName("children")
ProtoInstance842 = x3d.ProtoInstance()
ProtoInstance842.setName("Site")
ProtoInstance842.setDEF("hanim_r_carpal_distal_phalanx_3_tip_2")
fieldValue843 = x3d.fieldValue()
fieldValue843.setName("name")
fieldValue843.setValue("r_carpal_distal_phalanx_3_tip")

ProtoInstance842.addFieldValue(fieldValue843)
fieldValue844 = x3d.fieldValue()
fieldValue844.setName("translation")
fieldValue844.setValue("-0.196899995207787 0.675800025463104 -0.0427000001072884")

ProtoInstance842.addFieldValue(fieldValue844)

fieldValue841.addChildren(ProtoInstance842)

ProtoInstance839.addFieldValue(fieldValue841)

fieldValue838.addChildren(ProtoInstance839)

ProtoInstance834.addFieldValue(fieldValue838)

fieldValue833.addChildren(ProtoInstance834)
ProtoInstance845 = x3d.ProtoInstance()
ProtoInstance845.setName("Segment")
ProtoInstance845.setDEF("hanim_r_middle_middle_2")
fieldValue846 = x3d.fieldValue()
fieldValue846.setName("name")
fieldValue846.setValue("r_middle_middle")

ProtoInstance845.addFieldValue(fieldValue846)

fieldValue833.addChildren(ProtoInstance845)

ProtoInstance829.addFieldValue(fieldValue833)

fieldValue828.addChildren(ProtoInstance829)
ProtoInstance847 = x3d.ProtoInstance()
ProtoInstance847.setName("Segment")
ProtoInstance847.setDEF("hanim_r_middle_proximal_2")
fieldValue848 = x3d.fieldValue()
fieldValue848.setName("name")
fieldValue848.setValue("r_middle_proximal")

ProtoInstance847.addFieldValue(fieldValue848)

fieldValue828.addChildren(ProtoInstance847)

ProtoInstance824.addFieldValue(fieldValue828)

fieldValue823.addChildren(ProtoInstance824)
ProtoInstance849 = x3d.ProtoInstance()
ProtoInstance849.setName("Segment")
ProtoInstance849.setDEF("hanim_r_middle_metacarpal_2")
fieldValue850 = x3d.fieldValue()
fieldValue850.setName("name")
fieldValue850.setValue("r_middle_metacarpal")

ProtoInstance849.addFieldValue(fieldValue850)

fieldValue823.addChildren(ProtoInstance849)

ProtoInstance819.addFieldValue(fieldValue823)

fieldValue758.addChildren(ProtoInstance819)
ProtoInstance851 = x3d.ProtoInstance()
ProtoInstance851.setName("Joint")
ProtoInstance851.setDEF("hanim_r_carpometacarpal5")
fieldValue852 = x3d.fieldValue()
fieldValue852.setName("stiffness")
fieldValue852.setValue("1 1 1")

ProtoInstance851.addFieldValue(fieldValue852)
fieldValue853 = x3d.fieldValue()
fieldValue853.setName("name")
fieldValue853.setValue("r_carpometacarpal_4")

ProtoInstance851.addFieldValue(fieldValue853)
fieldValue854 = x3d.fieldValue()
fieldValue854.setName("center")
fieldValue854.setValue("-0.195099994540215 0.804899990558624 -0.0732000023126602")

ProtoInstance851.addFieldValue(fieldValue854)
fieldValue855 = x3d.fieldValue()
fieldValue855.setName("children")
ProtoInstance856 = x3d.ProtoInstance()
ProtoInstance856.setName("Joint")
ProtoInstance856.setDEF("hanim_r_metacarpophalangeal5")
fieldValue857 = x3d.fieldValue()
fieldValue857.setName("stiffness")
fieldValue857.setValue("1 1 1")

ProtoInstance856.addFieldValue(fieldValue857)
fieldValue858 = x3d.fieldValue()
fieldValue858.setName("name")
fieldValue858.setValue("r_metacarpophalangeal_4")

ProtoInstance856.addFieldValue(fieldValue858)
fieldValue859 = x3d.fieldValue()
fieldValue859.setName("center")
fieldValue859.setValue("-0.195099994540215 0.784500002861023 -0.0732000023126602")

ProtoInstance856.addFieldValue(fieldValue859)
fieldValue860 = x3d.fieldValue()
fieldValue860.setName("children")
ProtoInstance861 = x3d.ProtoInstance()
ProtoInstance861.setName("Joint")
ProtoInstance861.setDEF("hanim_r_carpal_proximal_interphalangeal5")
fieldValue862 = x3d.fieldValue()
fieldValue862.setName("stiffness")
fieldValue862.setValue("1 1 1")

ProtoInstance861.addFieldValue(fieldValue862)
fieldValue863 = x3d.fieldValue()
fieldValue863.setName("name")
fieldValue863.setValue("r_carpal_proximal_interphalangeal_4")

ProtoInstance861.addFieldValue(fieldValue863)
fieldValue864 = x3d.fieldValue()
fieldValue864.setName("center")
fieldValue864.setValue("-0.19200000166893 0.731800019741058 -0.0715999975800514")

ProtoInstance861.addFieldValue(fieldValue864)
fieldValue865 = x3d.fieldValue()
fieldValue865.setName("children")
ProtoInstance866 = x3d.ProtoInstance()
ProtoInstance866.setName("Joint")
ProtoInstance866.setDEF("hanim_r_carpal_distal_interphalangeal5")
fieldValue867 = x3d.fieldValue()
fieldValue867.setName("stiffness")
fieldValue867.setValue("1 1 1")

ProtoInstance866.addFieldValue(fieldValue867)
fieldValue868 = x3d.fieldValue()
fieldValue868.setName("name")
fieldValue868.setValue("r_carpal_distal_interphalangeal_4")

ProtoInstance866.addFieldValue(fieldValue868)
fieldValue869 = x3d.fieldValue()
fieldValue869.setName("center")
fieldValue869.setValue("-0.190799996256828 0.70770001411438 -0.0706000030040741")

ProtoInstance866.addFieldValue(fieldValue869)
fieldValue870 = x3d.fieldValue()
fieldValue870.setName("children")
ProtoInstance871 = x3d.ProtoInstance()
ProtoInstance871.setName("Segment")
ProtoInstance871.setDEF("hanim_r_carpal_distal_phalanx5")
fieldValue872 = x3d.fieldValue()
fieldValue872.setName("name")
fieldValue872.setValue("r_carpal_distal_phalanx_4")

ProtoInstance871.addFieldValue(fieldValue872)
fieldValue873 = x3d.fieldValue()
fieldValue873.setName("children")
ProtoInstance874 = x3d.ProtoInstance()
ProtoInstance874.setName("Site")
ProtoInstance874.setDEF("hanim_r_carpal_distal_phalanx_4_tip_2")
fieldValue875 = x3d.fieldValue()
fieldValue875.setName("name")
fieldValue875.setValue("r_carpal_distal_phalanx_4_tip")

ProtoInstance874.addFieldValue(fieldValue875)
fieldValue876 = x3d.fieldValue()
fieldValue876.setName("translation")
fieldValue876.setValue("-0.193399995565414 0.677799999713898 -0.069300003349781")

ProtoInstance874.addFieldValue(fieldValue876)

fieldValue873.addChildren(ProtoInstance874)

ProtoInstance871.addFieldValue(fieldValue873)

fieldValue870.addChildren(ProtoInstance871)

ProtoInstance866.addFieldValue(fieldValue870)

fieldValue865.addChildren(ProtoInstance866)
ProtoInstance877 = x3d.ProtoInstance()
ProtoInstance877.setName("Segment")
ProtoInstance877.setDEF("hanim_r_ring_middle_2")
fieldValue878 = x3d.fieldValue()
fieldValue878.setName("name")
fieldValue878.setValue("r_ring_middle")

ProtoInstance877.addFieldValue(fieldValue878)

fieldValue865.addChildren(ProtoInstance877)

ProtoInstance861.addFieldValue(fieldValue865)

fieldValue860.addChildren(ProtoInstance861)
ProtoInstance879 = x3d.ProtoInstance()
ProtoInstance879.setName("Segment")
ProtoInstance879.setDEF("hanim_r_ring_proximal_2")
fieldValue880 = x3d.fieldValue()
fieldValue880.setName("name")
fieldValue880.setValue("r_ring_proximal")

ProtoInstance879.addFieldValue(fieldValue880)

fieldValue860.addChildren(ProtoInstance879)

ProtoInstance856.addFieldValue(fieldValue860)

fieldValue855.addChildren(ProtoInstance856)
ProtoInstance881 = x3d.ProtoInstance()
ProtoInstance881.setName("Segment")
ProtoInstance881.setDEF("hanim_r_ring_metacarpal_2")
fieldValue882 = x3d.fieldValue()
fieldValue882.setName("name")
fieldValue882.setValue("r_ring_metacarpal")

ProtoInstance881.addFieldValue(fieldValue882)

fieldValue855.addChildren(ProtoInstance881)

ProtoInstance851.addFieldValue(fieldValue855)

fieldValue758.addChildren(ProtoInstance851)
ProtoInstance883 = x3d.ProtoInstance()
ProtoInstance883.setName("Joint")
ProtoInstance883.setDEF("hanim_r_carpometacarpal6")
fieldValue884 = x3d.fieldValue()
fieldValue884.setName("stiffness")
fieldValue884.setValue("1 1 1")

ProtoInstance883.addFieldValue(fieldValue884)
fieldValue885 = x3d.fieldValue()
fieldValue885.setName("name")
fieldValue885.setValue("r_carpometacarpal_5")

ProtoInstance883.addFieldValue(fieldValue885)
fieldValue886 = x3d.fieldValue()
fieldValue886.setName("center")
fieldValue886.setValue("-0.1925999969244 0.809599995613098 -0.0974999964237213")

ProtoInstance883.addFieldValue(fieldValue886)
fieldValue887 = x3d.fieldValue()
fieldValue887.setName("children")
ProtoInstance888 = x3d.ProtoInstance()
ProtoInstance888.setName("Joint")
ProtoInstance888.setDEF("hanim_r_metacarpophalangeal6")
fieldValue889 = x3d.fieldValue()
fieldValue889.setName("stiffness")
fieldValue889.setValue("1 1 1")

ProtoInstance888.addFieldValue(fieldValue889)
fieldValue890 = x3d.fieldValue()
fieldValue890.setName("name")
fieldValue890.setValue("r_metacarpophalangeal_5")

ProtoInstance888.addFieldValue(fieldValue890)
fieldValue891 = x3d.fieldValue()
fieldValue891.setName("center")
fieldValue891.setValue("-0.1925999969244 0.789600014686584 -0.0974999964237213")

ProtoInstance888.addFieldValue(fieldValue891)
fieldValue892 = x3d.fieldValue()
fieldValue892.setName("children")
ProtoInstance893 = x3d.ProtoInstance()
ProtoInstance893.setName("Joint")
ProtoInstance893.setDEF("hanim_r_carpal_proximal_interphalangeal6")
fieldValue894 = x3d.fieldValue()
fieldValue894.setName("stiffness")
fieldValue894.setValue("1 1 1")

ProtoInstance893.addFieldValue(fieldValue894)
fieldValue895 = x3d.fieldValue()
fieldValue895.setName("name")
fieldValue895.setValue("r_carpal_proximal_interphalangeal_5")

ProtoInstance893.addFieldValue(fieldValue895)
fieldValue896 = x3d.fieldValue()
fieldValue896.setName("center")
fieldValue896.setValue("-0.190200001001358 0.748300015926361 -0.0962999984622002")

ProtoInstance893.addFieldValue(fieldValue896)
fieldValue897 = x3d.fieldValue()
fieldValue897.setName("children")
ProtoInstance898 = x3d.ProtoInstance()
ProtoInstance898.setName("Joint")
ProtoInstance898.setDEF("hanim_r_carpal_distal_interphalangeal6")
fieldValue899 = x3d.fieldValue()
fieldValue899.setName("stiffness")
fieldValue899.setValue("1 1 1")

ProtoInstance898.addFieldValue(fieldValue899)
fieldValue900 = x3d.fieldValue()
fieldValue900.setName("name")
fieldValue900.setValue("r_carpal_distal_interphalangeal_5")

ProtoInstance898.addFieldValue(fieldValue900)
fieldValue901 = x3d.fieldValue()
fieldValue901.setName("center")
fieldValue901.setValue("-0.190799996256828 0.754000008106232 -0.096000000834465")

ProtoInstance898.addFieldValue(fieldValue901)
fieldValue902 = x3d.fieldValue()
fieldValue902.setName("children")
ProtoInstance903 = x3d.ProtoInstance()
ProtoInstance903.setName("Segment")
ProtoInstance903.setDEF("hanim_r_carpal_distal_phalanx6")
fieldValue904 = x3d.fieldValue()
fieldValue904.setName("name")
fieldValue904.setValue("r_carpal_distal_phalanx_5")

ProtoInstance903.addFieldValue(fieldValue904)
fieldValue905 = x3d.fieldValue()
fieldValue905.setName("children")
ProtoInstance906 = x3d.ProtoInstance()
ProtoInstance906.setName("Site")
ProtoInstance906.setDEF("hanim_r_carpal_distal_phalanx_5_tip_2")
fieldValue907 = x3d.fieldValue()
fieldValue907.setName("name")
fieldValue907.setValue("r_carpal_distal_phalanx_5_tip")

ProtoInstance906.addFieldValue(fieldValue907)
fieldValue908 = x3d.fieldValue()
fieldValue908.setName("translation")
fieldValue908.setValue("-0.193800002336502 0.703499972820282 -0.0948999971151352")

ProtoInstance906.addFieldValue(fieldValue908)

fieldValue905.addChildren(ProtoInstance906)

ProtoInstance903.addFieldValue(fieldValue905)

fieldValue902.addChildren(ProtoInstance903)

ProtoInstance898.addFieldValue(fieldValue902)

fieldValue897.addChildren(ProtoInstance898)
ProtoInstance909 = x3d.ProtoInstance()
ProtoInstance909.setName("Segment")
ProtoInstance909.setDEF("hanim_r_pinky_middle_2")
fieldValue910 = x3d.fieldValue()
fieldValue910.setName("name")
fieldValue910.setValue("r_pinky_middle")

ProtoInstance909.addFieldValue(fieldValue910)

fieldValue897.addChildren(ProtoInstance909)

ProtoInstance893.addFieldValue(fieldValue897)

fieldValue892.addChildren(ProtoInstance893)
ProtoInstance911 = x3d.ProtoInstance()
ProtoInstance911.setName("Segment")
ProtoInstance911.setDEF("hanim_r_pinky_proximal_2")
fieldValue912 = x3d.fieldValue()
fieldValue912.setName("name")
fieldValue912.setValue("r_pinky_proximal")

ProtoInstance911.addFieldValue(fieldValue912)

fieldValue892.addChildren(ProtoInstance911)

ProtoInstance888.addFieldValue(fieldValue892)

fieldValue887.addChildren(ProtoInstance888)
ProtoInstance913 = x3d.ProtoInstance()
ProtoInstance913.setName("Segment")
ProtoInstance913.setDEF("hanim_r_pinky_metacarpal_2")
fieldValue914 = x3d.fieldValue()
fieldValue914.setName("name")
fieldValue914.setValue("r_pinky_metacarpal")

ProtoInstance913.addFieldValue(fieldValue914)

fieldValue887.addChildren(ProtoInstance913)

ProtoInstance883.addFieldValue(fieldValue887)

fieldValue758.addChildren(ProtoInstance883)
ProtoInstance915 = x3d.ProtoInstance()
ProtoInstance915.setName("Segment")
ProtoInstance915.setDEF("hanim_r_hand_2")
fieldValue916 = x3d.fieldValue()
fieldValue916.setName("name")
fieldValue916.setValue("r_hand")

ProtoInstance915.addFieldValue(fieldValue916)
fieldValue917 = x3d.fieldValue()
fieldValue917.setName("children")
ProtoInstance918 = x3d.ProtoInstance()
ProtoInstance918.setName("Site")
ProtoInstance918.setDEF("hanim_r_metacarpal_phalanx3")
fieldValue919 = x3d.fieldValue()
fieldValue919.setName("name")
fieldValue919.setValue("r_metacarpal_phalanx_2")

ProtoInstance918.addFieldValue(fieldValue919)
fieldValue920 = x3d.fieldValue()
fieldValue920.setName("translation")
fieldValue920.setValue("-0.197699993848801 0.816900014877319 -0.0176999997347593")

ProtoInstance918.addFieldValue(fieldValue920)

fieldValue917.addChildren(ProtoInstance918)
ProtoInstance921 = x3d.ProtoInstance()
ProtoInstance921.setName("Site")
ProtoInstance921.setDEF("hanim_r_ulnar_styloid_2")
fieldValue922 = x3d.fieldValue()
fieldValue922.setName("name")
fieldValue922.setValue("r_ulnar_styloid")

ProtoInstance921.addFieldValue(fieldValue922)
fieldValue923 = x3d.fieldValue()
fieldValue923.setName("translation")
fieldValue923.setValue("-0.21170000731945 0.856199979782104 -0.0584000013768673")

ProtoInstance921.addFieldValue(fieldValue923)

fieldValue917.addChildren(ProtoInstance921)
ProtoInstance924 = x3d.ProtoInstance()
ProtoInstance924.setName("Site")
ProtoInstance924.setDEF("hanim_r_metacarpal_phalanx6")
fieldValue925 = x3d.fieldValue()
fieldValue925.setName("name")
fieldValue925.setValue("r_metacarpal_phalanx_5")

ProtoInstance924.addFieldValue(fieldValue925)
fieldValue926 = x3d.fieldValue()
fieldValue926.setName("translation")
fieldValue926.setValue("-0.192900002002716 0.788999974727631 -0.10639999806881")

ProtoInstance924.addFieldValue(fieldValue926)

fieldValue917.addChildren(ProtoInstance924)

ProtoInstance915.addFieldValue(fieldValue917)

fieldValue758.addChildren(ProtoInstance915)

ProtoInstance754.addFieldValue(fieldValue758)

fieldValue753.addChildren(ProtoInstance754)
ProtoInstance927 = x3d.ProtoInstance()
ProtoInstance927.setName("Segment")
ProtoInstance927.setDEF("hanim_r_forearm_2")
fieldValue928 = x3d.fieldValue()
fieldValue928.setName("name")
fieldValue928.setValue("r_forearm")

ProtoInstance927.addFieldValue(fieldValue928)
fieldValue929 = x3d.fieldValue()
fieldValue929.setName("children")
ProtoInstance930 = x3d.ProtoInstance()
ProtoInstance930.setName("Site")
ProtoInstance930.setDEF("hanim_r_radial_styloid_2")
fieldValue931 = x3d.fieldValue()
fieldValue931.setName("name")
fieldValue931.setValue("r_radial_styloid")

ProtoInstance930.addFieldValue(fieldValue931)
fieldValue932 = x3d.fieldValue()
fieldValue932.setName("translation")
fieldValue932.setValue("-0.188400000333786 0.86760002374649 -0.0359999984502792")

ProtoInstance930.addFieldValue(fieldValue932)

fieldValue929.addChildren(ProtoInstance930)
ProtoInstance933 = x3d.ProtoInstance()
ProtoInstance933.setName("Site")
ProtoInstance933.setDEF("hanim_r_olecranon_2")
fieldValue934 = x3d.fieldValue()
fieldValue934.setName("name")
fieldValue934.setValue("r_olecranon")

ProtoInstance933.addFieldValue(fieldValue934)
fieldValue935 = x3d.fieldValue()
fieldValue935.setName("translation")
fieldValue935.setValue("-0.190699994564056 1.14049994945526 -0.106499999761581")

ProtoInstance933.addFieldValue(fieldValue935)

fieldValue929.addChildren(ProtoInstance933)
ProtoInstance936 = x3d.ProtoInstance()
ProtoInstance936.setName("Site")
ProtoInstance936.setDEF("hanim_r_humeral_medial_epicondyles_2")
fieldValue937 = x3d.fieldValue()
fieldValue937.setName("name")
fieldValue937.setValue("r_humeral_medial_epicondyles")

ProtoInstance936.addFieldValue(fieldValue937)
fieldValue938 = x3d.fieldValue()
fieldValue938.setName("translation")
fieldValue938.setValue("-0.167999997735024 1.12979996204376 -0.106200002133846")

ProtoInstance936.addFieldValue(fieldValue938)

fieldValue929.addChildren(ProtoInstance936)
ProtoInstance939 = x3d.ProtoInstance()
ProtoInstance939.setName("Site")
ProtoInstance939.setDEF("hanim_r_radiale_2")
fieldValue940 = x3d.fieldValue()
fieldValue940.setName("name")
fieldValue940.setValue("r_radiale")

ProtoInstance939.addFieldValue(fieldValue940)
fieldValue941 = x3d.fieldValue()
fieldValue941.setName("translation")
fieldValue941.setValue("-0.212999999523163 1.130499958992 -0.109099999070168")

ProtoInstance939.addFieldValue(fieldValue941)

fieldValue929.addChildren(ProtoInstance939)

ProtoInstance927.addFieldValue(fieldValue929)

fieldValue753.addChildren(ProtoInstance927)

ProtoInstance749.addFieldValue(fieldValue753)

fieldValue748.addChildren(ProtoInstance749)
ProtoInstance942 = x3d.ProtoInstance()
ProtoInstance942.setName("Segment")
ProtoInstance942.setDEF("hanim_r_upperarm_2")
fieldValue943 = x3d.fieldValue()
fieldValue943.setName("name")
fieldValue943.setValue("r_upperarm")

ProtoInstance942.addFieldValue(fieldValue943)
fieldValue944 = x3d.fieldValue()
fieldValue944.setName("children")
ProtoInstance945 = x3d.ProtoInstance()
ProtoInstance945.setName("Site")
ProtoInstance945.setDEF("hanim_r_humeral_lateral_epicondyles_2")
fieldValue946 = x3d.fieldValue()
fieldValue946.setName("name")
fieldValue946.setValue("r_humeral_lateral_epicondyles")

ProtoInstance945.addFieldValue(fieldValue946)
fieldValue947 = x3d.fieldValue()
fieldValue947.setName("translation")
fieldValue947.setValue("-0.222399994730949 1.15170001983643 -0.103299997746944")

ProtoInstance945.addFieldValue(fieldValue947)

fieldValue944.addChildren(ProtoInstance945)

ProtoInstance942.addFieldValue(fieldValue944)

fieldValue748.addChildren(ProtoInstance942)

ProtoInstance744.addFieldValue(fieldValue748)

fieldValue743.addChildren(ProtoInstance744)
ProtoInstance948 = x3d.ProtoInstance()
ProtoInstance948.setName("Segment")
ProtoInstance948.setDEF("hanim_r_scapula_2")
fieldValue949 = x3d.fieldValue()
fieldValue949.setName("name")
fieldValue949.setValue("r_scapula")

ProtoInstance948.addFieldValue(fieldValue949)

fieldValue743.addChildren(ProtoInstance948)

ProtoInstance739.addFieldValue(fieldValue743)

fieldValue738.addChildren(ProtoInstance739)
ProtoInstance950 = x3d.ProtoInstance()
ProtoInstance950.setName("Segment")
ProtoInstance950.setDEF("hanim_r_clavicle_2")
fieldValue951 = x3d.fieldValue()
fieldValue951.setName("name")
fieldValue951.setValue("r_clavicle")

ProtoInstance950.addFieldValue(fieldValue951)
fieldValue952 = x3d.fieldValue()
fieldValue952.setName("children")
ProtoInstance953 = x3d.ProtoInstance()
ProtoInstance953.setName("Site")
ProtoInstance953.setDEF("hanim_r_clavicale_2")
fieldValue954 = x3d.fieldValue()
fieldValue954.setName("name")
fieldValue954.setValue("r_clavicale")

ProtoInstance953.addFieldValue(fieldValue954)
fieldValue955 = x3d.fieldValue()
fieldValue955.setName("translation")
fieldValue955.setValue("-0.0115000000223517 1.49430000782013 0.0399999991059303")

ProtoInstance953.addFieldValue(fieldValue955)

fieldValue952.addChildren(ProtoInstance953)
ProtoInstance956 = x3d.ProtoInstance()
ProtoInstance956.setName("Site")
ProtoInstance956.setDEF("hanim_r_acromion_2")
fieldValue957 = x3d.fieldValue()
fieldValue957.setName("name")
fieldValue957.setValue("r_acromion")

ProtoInstance956.addFieldValue(fieldValue957)
fieldValue958 = x3d.fieldValue()
fieldValue958.setName("translation")
fieldValue958.setValue("-0.190500006079674 1.47909998893738 -0.0430999994277954")

ProtoInstance956.addFieldValue(fieldValue958)

fieldValue952.addChildren(ProtoInstance956)
ProtoInstance959 = x3d.ProtoInstance()
ProtoInstance959.setName("Site")
ProtoInstance959.setDEF("hanim_r_axilla_proximal_2")
fieldValue960 = x3d.fieldValue()
fieldValue960.setName("name")
fieldValue960.setValue("r_axilla_proximal")

ProtoInstance959.addFieldValue(fieldValue960)
fieldValue961 = x3d.fieldValue()
fieldValue961.setName("translation")
fieldValue961.setValue("-0.162599995732307 1.40719997882843 -0.00310000008903444")

ProtoInstance959.addFieldValue(fieldValue961)

fieldValue952.addChildren(ProtoInstance959)
ProtoInstance962 = x3d.ProtoInstance()
ProtoInstance962.setName("Site")
ProtoInstance962.setDEF("hanim_r_axilla_distal_2")
fieldValue963 = x3d.fieldValue()
fieldValue963.setName("name")
fieldValue963.setValue("r_axilla_distal")

ProtoInstance962.addFieldValue(fieldValue963)
fieldValue964 = x3d.fieldValue()
fieldValue964.setName("translation")
fieldValue964.setValue("-0.160300001502037 1.40980005264282 -0.0825999975204468")

ProtoInstance962.addFieldValue(fieldValue964)

fieldValue952.addChildren(ProtoInstance962)

ProtoInstance950.addFieldValue(fieldValue952)

fieldValue738.addChildren(ProtoInstance950)

ProtoInstance734.addFieldValue(fieldValue738)

fieldValue394.addChildren(ProtoInstance734)
ProtoInstance965 = x3d.ProtoInstance()
ProtoInstance965.setName("Segment")
ProtoInstance965.setDEF("hanim_t1_2")
fieldValue966 = x3d.fieldValue()
fieldValue966.setName("name")
fieldValue966.setValue("t1")

ProtoInstance965.addFieldValue(fieldValue966)
fieldValue967 = x3d.fieldValue()
fieldValue967.setName("children")
ProtoInstance968 = x3d.ProtoInstance()
ProtoInstance968.setName("Site")
ProtoInstance968.setDEF("hanim_suprasternale_2")
fieldValue969 = x3d.fieldValue()
fieldValue969.setName("name")
fieldValue969.setValue("suprasternale")

ProtoInstance968.addFieldValue(fieldValue969)
fieldValue970 = x3d.fieldValue()
fieldValue970.setName("translation")
fieldValue970.setValue("0.00839999970048666 1.47140002250671 0.0551000013947487")

ProtoInstance968.addFieldValue(fieldValue970)

fieldValue967.addChildren(ProtoInstance968)
ProtoInstance971 = x3d.ProtoInstance()
ProtoInstance971.setName("Site")
ProtoInstance971.setDEF("hanim_cervicale_2")
fieldValue972 = x3d.fieldValue()
fieldValue972.setName("name")
fieldValue972.setValue("cervicale")

ProtoInstance971.addFieldValue(fieldValue972)
fieldValue973 = x3d.fieldValue()
fieldValue973.setName("translation")
fieldValue973.setValue("0.0063999998383224 1.51999998092651 -0.0815000012516975")

ProtoInstance971.addFieldValue(fieldValue973)

fieldValue967.addChildren(ProtoInstance971)

ProtoInstance965.addFieldValue(fieldValue967)

fieldValue394.addChildren(ProtoInstance965)

ProtoInstance390.addFieldValue(fieldValue394)

fieldValue389.addChildren(ProtoInstance390)
ProtoInstance974 = x3d.ProtoInstance()
ProtoInstance974.setName("Segment")
ProtoInstance974.setDEF("hanim_t2_2")
fieldValue975 = x3d.fieldValue()
fieldValue975.setName("name")
fieldValue975.setValue("t2")

ProtoInstance974.addFieldValue(fieldValue975)

fieldValue389.addChildren(ProtoInstance974)

ProtoInstance385.addFieldValue(fieldValue389)

fieldValue384.addChildren(ProtoInstance385)
ProtoInstance976 = x3d.ProtoInstance()
ProtoInstance976.setName("Segment")
ProtoInstance976.setDEF("hanim_t3_2")
fieldValue977 = x3d.fieldValue()
fieldValue977.setName("name")
fieldValue977.setValue("t3")

ProtoInstance976.addFieldValue(fieldValue977)

fieldValue384.addChildren(ProtoInstance976)

ProtoInstance380.addFieldValue(fieldValue384)

fieldValue379.addChildren(ProtoInstance380)
ProtoInstance978 = x3d.ProtoInstance()
ProtoInstance978.setName("Segment")
ProtoInstance978.setDEF("hanim_t4_2")
fieldValue979 = x3d.fieldValue()
fieldValue979.setName("name")
fieldValue979.setValue("t4")

ProtoInstance978.addFieldValue(fieldValue979)

fieldValue379.addChildren(ProtoInstance978)

ProtoInstance375.addFieldValue(fieldValue379)

fieldValue374.addChildren(ProtoInstance375)
ProtoInstance980 = x3d.ProtoInstance()
ProtoInstance980.setName("Segment")
ProtoInstance980.setDEF("hanim_t5_2")
fieldValue981 = x3d.fieldValue()
fieldValue981.setName("name")
fieldValue981.setValue("t5")

ProtoInstance980.addFieldValue(fieldValue981)

fieldValue374.addChildren(ProtoInstance980)

ProtoInstance370.addFieldValue(fieldValue374)

fieldValue369.addChildren(ProtoInstance370)
ProtoInstance982 = x3d.ProtoInstance()
ProtoInstance982.setName("Segment")
ProtoInstance982.setDEF("hanim_t6_2")
fieldValue983 = x3d.fieldValue()
fieldValue983.setName("name")
fieldValue983.setValue("t6")

ProtoInstance982.addFieldValue(fieldValue983)

fieldValue369.addChildren(ProtoInstance982)

ProtoInstance365.addFieldValue(fieldValue369)

fieldValue364.addChildren(ProtoInstance365)
ProtoInstance984 = x3d.ProtoInstance()
ProtoInstance984.setName("Segment")
ProtoInstance984.setDEF("hanim_t7_2")
fieldValue985 = x3d.fieldValue()
fieldValue985.setName("name")
fieldValue985.setValue("t7")

ProtoInstance984.addFieldValue(fieldValue985)

fieldValue364.addChildren(ProtoInstance984)

ProtoInstance360.addFieldValue(fieldValue364)

fieldValue359.addChildren(ProtoInstance360)
ProtoInstance986 = x3d.ProtoInstance()
ProtoInstance986.setName("Segment")
ProtoInstance986.setDEF("hanim_t8_2")
fieldValue987 = x3d.fieldValue()
fieldValue987.setName("name")
fieldValue987.setValue("t8")

ProtoInstance986.addFieldValue(fieldValue987)

fieldValue359.addChildren(ProtoInstance986)

ProtoInstance355.addFieldValue(fieldValue359)

fieldValue354.addChildren(ProtoInstance355)
ProtoInstance988 = x3d.ProtoInstance()
ProtoInstance988.setName("Segment")
ProtoInstance988.setDEF("hanim_t9_2")
fieldValue989 = x3d.fieldValue()
fieldValue989.setName("name")
fieldValue989.setValue("t9")

ProtoInstance988.addFieldValue(fieldValue989)
fieldValue990 = x3d.fieldValue()
fieldValue990.setName("children")
ProtoInstance991 = x3d.ProtoInstance()
ProtoInstance991.setName("Site")
ProtoInstance991.setDEF("hanim_r_thelion_2")
fieldValue992 = x3d.fieldValue()
fieldValue992.setName("name")
fieldValue992.setValue("r_thelion")

ProtoInstance991.addFieldValue(fieldValue992)
fieldValue993 = x3d.fieldValue()
fieldValue993.setName("translation")
fieldValue993.setValue("-0.0736000016331673 1.33850002288818 0.121699996292591")

ProtoInstance991.addFieldValue(fieldValue993)

fieldValue990.addChildren(ProtoInstance991)
ProtoInstance994 = x3d.ProtoInstance()
ProtoInstance994.setName("Site")
ProtoInstance994.setDEF("hanim_l_thelion_2")
fieldValue995 = x3d.fieldValue()
fieldValue995.setName("name")
fieldValue995.setValue("l_thelion")

ProtoInstance994.addFieldValue(fieldValue995)
fieldValue996 = x3d.fieldValue()
fieldValue996.setName("translation")
fieldValue996.setValue("0.0917999967932701 1.33819997310638 0.119199998676777")

ProtoInstance994.addFieldValue(fieldValue996)

fieldValue990.addChildren(ProtoInstance994)

ProtoInstance988.addFieldValue(fieldValue990)

fieldValue354.addChildren(ProtoInstance988)

ProtoInstance350.addFieldValue(fieldValue354)

fieldValue349.addChildren(ProtoInstance350)
ProtoInstance997 = x3d.ProtoInstance()
ProtoInstance997.setName("Segment")
ProtoInstance997.setDEF("hanim_t10_2")
fieldValue998 = x3d.fieldValue()
fieldValue998.setName("name")
fieldValue998.setValue("t10")

ProtoInstance997.addFieldValue(fieldValue998)
fieldValue999 = x3d.fieldValue()
fieldValue999.setName("children")
ProtoInstance1000 = x3d.ProtoInstance()
ProtoInstance1000.setName("Site")
ProtoInstance1000.setDEF("hanim_substernale_2")
fieldValue1001 = x3d.fieldValue()
fieldValue1001.setName("name")
fieldValue1001.setValue("substernale")

ProtoInstance1000.addFieldValue(fieldValue1001)
fieldValue1002 = x3d.fieldValue()
fieldValue1002.setName("translation")
fieldValue1002.setValue("0.008500000461936 1.29949998855591 0.114699997007847")

ProtoInstance1000.addFieldValue(fieldValue1002)

fieldValue999.addChildren(ProtoInstance1000)

ProtoInstance997.addFieldValue(fieldValue999)

fieldValue349.addChildren(ProtoInstance997)

ProtoInstance345.addFieldValue(fieldValue349)

fieldValue344.addChildren(ProtoInstance345)
ProtoInstance1003 = x3d.ProtoInstance()
ProtoInstance1003.setName("Segment")
ProtoInstance1003.setDEF("hanim_t11_2")
fieldValue1004 = x3d.fieldValue()
fieldValue1004.setName("name")
fieldValue1004.setValue("t11")

ProtoInstance1003.addFieldValue(fieldValue1004)

fieldValue344.addChildren(ProtoInstance1003)

ProtoInstance340.addFieldValue(fieldValue344)

fieldValue339.addChildren(ProtoInstance340)
ProtoInstance1005 = x3d.ProtoInstance()
ProtoInstance1005.setName("Segment")
ProtoInstance1005.setDEF("hanim_t12_2")
fieldValue1006 = x3d.fieldValue()
fieldValue1006.setName("name")
fieldValue1006.setValue("t12")

ProtoInstance1005.addFieldValue(fieldValue1006)

fieldValue339.addChildren(ProtoInstance1005)

ProtoInstance335.addFieldValue(fieldValue339)

fieldValue334.addChildren(ProtoInstance335)
ProtoInstance1007 = x3d.ProtoInstance()
ProtoInstance1007.setName("Segment")
ProtoInstance1007.setDEF("hanim_l1_2")
fieldValue1008 = x3d.fieldValue()
fieldValue1008.setName("name")
fieldValue1008.setValue("l1")

ProtoInstance1007.addFieldValue(fieldValue1008)

fieldValue334.addChildren(ProtoInstance1007)

ProtoInstance330.addFieldValue(fieldValue334)

fieldValue329.addChildren(ProtoInstance330)
ProtoInstance1009 = x3d.ProtoInstance()
ProtoInstance1009.setName("Segment")
ProtoInstance1009.setDEF("hanim_l2_2")
fieldValue1010 = x3d.fieldValue()
fieldValue1010.setName("name")
fieldValue1010.setValue("l2")

ProtoInstance1009.addFieldValue(fieldValue1010)
fieldValue1011 = x3d.fieldValue()
fieldValue1011.setName("children")
ProtoInstance1012 = x3d.ProtoInstance()
ProtoInstance1012.setName("Site")
ProtoInstance1012.setDEF("hanim_r_rib10_2")
fieldValue1013 = x3d.fieldValue()
fieldValue1013.setName("name")
fieldValue1013.setValue("r_rib10")

ProtoInstance1012.addFieldValue(fieldValue1013)
fieldValue1014 = x3d.fieldValue()
fieldValue1014.setName("translation")
fieldValue1014.setValue("-0.0710999965667725 1.19410002231598 0.101599998772144")

ProtoInstance1012.addFieldValue(fieldValue1014)

fieldValue1011.addChildren(ProtoInstance1012)
ProtoInstance1015 = x3d.ProtoInstance()
ProtoInstance1015.setName("Site")
ProtoInstance1015.setDEF("hanim_l_rib10_2")
fieldValue1016 = x3d.fieldValue()
fieldValue1016.setName("name")
fieldValue1016.setValue("l_rib10")

ProtoInstance1015.addFieldValue(fieldValue1016)
fieldValue1017 = x3d.fieldValue()
fieldValue1017.setName("translation")
fieldValue1017.setValue("0.0870999991893768 1.19249999523163 0.099200002849102")

ProtoInstance1015.addFieldValue(fieldValue1017)

fieldValue1011.addChildren(ProtoInstance1015)
ProtoInstance1018 = x3d.ProtoInstance()
ProtoInstance1018.setName("Site")
ProtoInstance1018.setDEF("hanim_spine_2_lower_back_2")
fieldValue1019 = x3d.fieldValue()
fieldValue1019.setName("name")
fieldValue1019.setValue("spine_2_lower_back")

ProtoInstance1018.addFieldValue(fieldValue1019)
fieldValue1020 = x3d.fieldValue()
fieldValue1020.setName("translation")
fieldValue1020.setValue("0.00490000005811453 1.19079995155334 -0.111299999058247")

ProtoInstance1018.addFieldValue(fieldValue1020)

fieldValue1011.addChildren(ProtoInstance1018)

ProtoInstance1009.addFieldValue(fieldValue1011)

fieldValue329.addChildren(ProtoInstance1009)

ProtoInstance325.addFieldValue(fieldValue329)

fieldValue324.addChildren(ProtoInstance325)
ProtoInstance1021 = x3d.ProtoInstance()
ProtoInstance1021.setName("Segment")
ProtoInstance1021.setDEF("hanim_l3_2")
fieldValue1022 = x3d.fieldValue()
fieldValue1022.setName("name")
fieldValue1022.setValue("l3")

ProtoInstance1021.addFieldValue(fieldValue1022)

fieldValue324.addChildren(ProtoInstance1021)

ProtoInstance320.addFieldValue(fieldValue324)

fieldValue319.addChildren(ProtoInstance320)
ProtoInstance1023 = x3d.ProtoInstance()
ProtoInstance1023.setName("Segment")
ProtoInstance1023.setDEF("hanim_l4_2")
fieldValue1024 = x3d.fieldValue()
fieldValue1024.setName("name")
fieldValue1024.setValue("l4")

ProtoInstance1023.addFieldValue(fieldValue1024)

fieldValue319.addChildren(ProtoInstance1023)

ProtoInstance315.addFieldValue(fieldValue319)

fieldValue314.addChildren(ProtoInstance315)
ProtoInstance1025 = x3d.ProtoInstance()
ProtoInstance1025.setName("Segment")
ProtoInstance1025.setDEF("hanim_l5_2")
fieldValue1026 = x3d.fieldValue()
fieldValue1026.setName("name")
fieldValue1026.setValue("l5")

ProtoInstance1025.addFieldValue(fieldValue1026)
fieldValue1027 = x3d.fieldValue()
fieldValue1027.setName("children")
ProtoInstance1028 = x3d.ProtoInstance()
ProtoInstance1028.setName("Site")
ProtoInstance1028.setDEF("hanim_waist_preferred_posterior_2")
fieldValue1029 = x3d.fieldValue()
fieldValue1029.setName("name")
fieldValue1029.setValue("waist_preferred_posterior")

ProtoInstance1028.addFieldValue(fieldValue1029)
fieldValue1030 = x3d.fieldValue()
fieldValue1030.setName("translation")
fieldValue1030.setValue("0.28999999165535 1.09150004386902 -0.109099999070168")

ProtoInstance1028.addFieldValue(fieldValue1030)

fieldValue1027.addChildren(ProtoInstance1028)
ProtoInstance1031 = x3d.ProtoInstance()
ProtoInstance1031.setName("Site")
ProtoInstance1031.setDEF("hanim_navel_2")
fieldValue1032 = x3d.fieldValue()
fieldValue1032.setName("name")
fieldValue1032.setValue("navel")

ProtoInstance1031.addFieldValue(fieldValue1032)
fieldValue1033 = x3d.fieldValue()
fieldValue1033.setName("translation")
fieldValue1033.setValue("0.00689999992027879 1.09660005569458 0.101700000464916")

ProtoInstance1031.addFieldValue(fieldValue1033)

fieldValue1027.addChildren(ProtoInstance1031)

ProtoInstance1025.addFieldValue(fieldValue1027)

fieldValue314.addChildren(ProtoInstance1025)

ProtoInstance310.addFieldValue(fieldValue314)

fieldValue116.addChildren(ProtoInstance310)
ProtoInstance1034 = x3d.ProtoInstance()
ProtoInstance1034.setName("Segment")
ProtoInstance1034.setDEF("hanim_sacrum_2")
fieldValue1035 = x3d.fieldValue()
fieldValue1035.setName("name")
fieldValue1035.setValue("sacrum")

ProtoInstance1034.addFieldValue(fieldValue1035)

fieldValue116.addChildren(ProtoInstance1034)

ProtoInstance112.addFieldValue(fieldValue116)

fieldValue111.addChildren(ProtoInstance112)

ProtoInstance110.addFieldValue(fieldValue111)
fieldValue1036 = x3d.fieldValue()
fieldValue1036.setName("joints")
ProtoInstance1037 = x3d.ProtoInstance()
ProtoInstance1037.setUSE("hanim_humanoid_root_2")

fieldValue1036.addChildren(ProtoInstance1037)
ProtoInstance1038 = x3d.ProtoInstance()
ProtoInstance1038.setUSE("hanim_sacroiliac_2")

fieldValue1036.addChildren(ProtoInstance1038)
ProtoInstance1039 = x3d.ProtoInstance()
ProtoInstance1039.setUSE("hanim_l_hip_2")

fieldValue1036.addChildren(ProtoInstance1039)
ProtoInstance1040 = x3d.ProtoInstance()
ProtoInstance1040.setUSE("hanim_l_knee_2")

fieldValue1036.addChildren(ProtoInstance1040)
ProtoInstance1041 = x3d.ProtoInstance()
ProtoInstance1041.setUSE("hanim_l_talocrural_2")

fieldValue1036.addChildren(ProtoInstance1041)
ProtoInstance1042 = x3d.ProtoInstance()
ProtoInstance1042.setUSE("hanim_l_tarsotarsal_interphalangeal__2")

fieldValue1036.addChildren(ProtoInstance1042)
ProtoInstance1043 = x3d.ProtoInstance()
ProtoInstance1043.setUSE("hanim_l_metatarsophalangeal__2")

fieldValue1036.addChildren(ProtoInstance1043)
ProtoInstance1044 = x3d.ProtoInstance()
ProtoInstance1044.setUSE("hanim_l_tarsal_interphalangeal__2")

fieldValue1036.addChildren(ProtoInstance1044)
ProtoInstance1045 = x3d.ProtoInstance()
ProtoInstance1045.setUSE("hanim_r_hip_2")

fieldValue1036.addChildren(ProtoInstance1045)
ProtoInstance1046 = x3d.ProtoInstance()
ProtoInstance1046.setUSE("hanim_r_knee_2")

fieldValue1036.addChildren(ProtoInstance1046)
ProtoInstance1047 = x3d.ProtoInstance()
ProtoInstance1047.setUSE("hanim_r_talocrural_2")

fieldValue1036.addChildren(ProtoInstance1047)
ProtoInstance1048 = x3d.ProtoInstance()
ProtoInstance1048.setUSE("hanim_r_tarsotarsal_interphalangeal__2")

fieldValue1036.addChildren(ProtoInstance1048)
ProtoInstance1049 = x3d.ProtoInstance()
ProtoInstance1049.setUSE("hanim_r_metatarsophalangeal__2")

fieldValue1036.addChildren(ProtoInstance1049)
ProtoInstance1050 = x3d.ProtoInstance()
ProtoInstance1050.setUSE("hanim_r_tarsal_interphalangeal__2")

fieldValue1036.addChildren(ProtoInstance1050)
ProtoInstance1051 = x3d.ProtoInstance()
ProtoInstance1051.setUSE("hanim_vl5_2")

fieldValue1036.addChildren(ProtoInstance1051)
ProtoInstance1052 = x3d.ProtoInstance()
ProtoInstance1052.setUSE("hanim_vl4_2")

fieldValue1036.addChildren(ProtoInstance1052)
ProtoInstance1053 = x3d.ProtoInstance()
ProtoInstance1053.setUSE("hanim_vl3_2")

fieldValue1036.addChildren(ProtoInstance1053)
ProtoInstance1054 = x3d.ProtoInstance()
ProtoInstance1054.setUSE("hanim_vl2_2")

fieldValue1036.addChildren(ProtoInstance1054)
ProtoInstance1055 = x3d.ProtoInstance()
ProtoInstance1055.setUSE("hanim_vl1_2")

fieldValue1036.addChildren(ProtoInstance1055)
ProtoInstance1056 = x3d.ProtoInstance()
ProtoInstance1056.setUSE("hanim_vt12_2")

fieldValue1036.addChildren(ProtoInstance1056)
ProtoInstance1057 = x3d.ProtoInstance()
ProtoInstance1057.setUSE("hanim_vt11_2")

fieldValue1036.addChildren(ProtoInstance1057)
ProtoInstance1058 = x3d.ProtoInstance()
ProtoInstance1058.setUSE("hanim_vt10_2")

fieldValue1036.addChildren(ProtoInstance1058)
ProtoInstance1059 = x3d.ProtoInstance()
ProtoInstance1059.setUSE("hanim_vt9_2")

fieldValue1036.addChildren(ProtoInstance1059)
ProtoInstance1060 = x3d.ProtoInstance()
ProtoInstance1060.setUSE("hanim_vt8_2")

fieldValue1036.addChildren(ProtoInstance1060)
ProtoInstance1061 = x3d.ProtoInstance()
ProtoInstance1061.setUSE("hanim_vt7_2")

fieldValue1036.addChildren(ProtoInstance1061)
ProtoInstance1062 = x3d.ProtoInstance()
ProtoInstance1062.setUSE("hanim_vt6_2")

fieldValue1036.addChildren(ProtoInstance1062)
ProtoInstance1063 = x3d.ProtoInstance()
ProtoInstance1063.setUSE("hanim_vt5_2")

fieldValue1036.addChildren(ProtoInstance1063)
ProtoInstance1064 = x3d.ProtoInstance()
ProtoInstance1064.setUSE("hanim_vt4_2")

fieldValue1036.addChildren(ProtoInstance1064)
ProtoInstance1065 = x3d.ProtoInstance()
ProtoInstance1065.setUSE("hanim_vt3_2")

fieldValue1036.addChildren(ProtoInstance1065)
ProtoInstance1066 = x3d.ProtoInstance()
ProtoInstance1066.setUSE("hanim_vt2_2")

fieldValue1036.addChildren(ProtoInstance1066)
ProtoInstance1067 = x3d.ProtoInstance()
ProtoInstance1067.setUSE("hanim_vt1_2")

fieldValue1036.addChildren(ProtoInstance1067)
ProtoInstance1068 = x3d.ProtoInstance()
ProtoInstance1068.setUSE("hanim_vc7_2")

fieldValue1036.addChildren(ProtoInstance1068)
ProtoInstance1069 = x3d.ProtoInstance()
ProtoInstance1069.setUSE("hanim_vc6_2")

fieldValue1036.addChildren(ProtoInstance1069)
ProtoInstance1070 = x3d.ProtoInstance()
ProtoInstance1070.setUSE("hanim_vc5_2")

fieldValue1036.addChildren(ProtoInstance1070)
ProtoInstance1071 = x3d.ProtoInstance()
ProtoInstance1071.setUSE("hanim_vc4_2")

fieldValue1036.addChildren(ProtoInstance1071)
ProtoInstance1072 = x3d.ProtoInstance()
ProtoInstance1072.setUSE("hanim_vc3_2")

fieldValue1036.addChildren(ProtoInstance1072)
ProtoInstance1073 = x3d.ProtoInstance()
ProtoInstance1073.setUSE("hanim_vc2_2")

fieldValue1036.addChildren(ProtoInstance1073)
ProtoInstance1074 = x3d.ProtoInstance()
ProtoInstance1074.setUSE("hanim_vc1_2")

fieldValue1036.addChildren(ProtoInstance1074)
ProtoInstance1075 = x3d.ProtoInstance()
ProtoInstance1075.setUSE("hanim_skullbase_2")

fieldValue1036.addChildren(ProtoInstance1075)
ProtoInstance1076 = x3d.ProtoInstance()
ProtoInstance1076.setUSE("hanim_l_eyeball_4")

fieldValue1036.addChildren(ProtoInstance1076)
ProtoInstance1077 = x3d.ProtoInstance()
ProtoInstance1077.setUSE("hanim_r_eyeball_4")

fieldValue1036.addChildren(ProtoInstance1077)
ProtoInstance1078 = x3d.ProtoInstance()
ProtoInstance1078.setUSE("hanim_l_sternoclavicular_2")

fieldValue1036.addChildren(ProtoInstance1078)
ProtoInstance1079 = x3d.ProtoInstance()
ProtoInstance1079.setUSE("hanim_l_acromioclavicular_2")

fieldValue1036.addChildren(ProtoInstance1079)
ProtoInstance1080 = x3d.ProtoInstance()
ProtoInstance1080.setUSE("hanim_l_shoulder_2")

fieldValue1036.addChildren(ProtoInstance1080)
ProtoInstance1081 = x3d.ProtoInstance()
ProtoInstance1081.setUSE("hanim_l_elbow_2")

fieldValue1036.addChildren(ProtoInstance1081)
ProtoInstance1082 = x3d.ProtoInstance()
ProtoInstance1082.setUSE("hanim_l_radiocarpal_2")

fieldValue1036.addChildren(ProtoInstance1082)
ProtoInstance1083 = x3d.ProtoInstance()
ProtoInstance1083.setUSE("hanim_l_carpometacarpal2")

fieldValue1036.addChildren(ProtoInstance1083)
ProtoInstance1084 = x3d.ProtoInstance()
ProtoInstance1084.setUSE("hanim_l_metacarpophalangeal2")

fieldValue1036.addChildren(ProtoInstance1084)
ProtoInstance1085 = x3d.ProtoInstance()
ProtoInstance1085.setUSE("hanim_l_carpal_interphalangeal2")

fieldValue1036.addChildren(ProtoInstance1085)
ProtoInstance1086 = x3d.ProtoInstance()
ProtoInstance1086.setUSE("hanim_l_carpometacarpal3")

fieldValue1036.addChildren(ProtoInstance1086)
ProtoInstance1087 = x3d.ProtoInstance()
ProtoInstance1087.setUSE("hanim_l_metacarpophalangeal3")

fieldValue1036.addChildren(ProtoInstance1087)
ProtoInstance1088 = x3d.ProtoInstance()
ProtoInstance1088.setUSE("hanim_l_carpal_proximal_interphalangeal3")

fieldValue1036.addChildren(ProtoInstance1088)
ProtoInstance1089 = x3d.ProtoInstance()
ProtoInstance1089.setUSE("hanim_l_carpal_distal_interphalangeal3")

fieldValue1036.addChildren(ProtoInstance1089)
ProtoInstance1090 = x3d.ProtoInstance()
ProtoInstance1090.setUSE("hanim_l_carpometacarpal4")

fieldValue1036.addChildren(ProtoInstance1090)
ProtoInstance1091 = x3d.ProtoInstance()
ProtoInstance1091.setUSE("hanim_l_metacarpophalangeal4")

fieldValue1036.addChildren(ProtoInstance1091)
ProtoInstance1092 = x3d.ProtoInstance()
ProtoInstance1092.setUSE("hanim_l_carpal_proximal_interphalangeal4")

fieldValue1036.addChildren(ProtoInstance1092)
ProtoInstance1093 = x3d.ProtoInstance()
ProtoInstance1093.setUSE("hanim_l_carpal_distal_interphalangeal4")

fieldValue1036.addChildren(ProtoInstance1093)
ProtoInstance1094 = x3d.ProtoInstance()
ProtoInstance1094.setUSE("hanim_l_carpometacarpal5")

fieldValue1036.addChildren(ProtoInstance1094)
ProtoInstance1095 = x3d.ProtoInstance()
ProtoInstance1095.setUSE("hanim_l_metacarpophalangeal5")

fieldValue1036.addChildren(ProtoInstance1095)
ProtoInstance1096 = x3d.ProtoInstance()
ProtoInstance1096.setUSE("hanim_l_carpal_proximal_interphalangeal5")

fieldValue1036.addChildren(ProtoInstance1096)
ProtoInstance1097 = x3d.ProtoInstance()
ProtoInstance1097.setUSE("hanim_l_carpal_distal_interphalangeal5")

fieldValue1036.addChildren(ProtoInstance1097)
ProtoInstance1098 = x3d.ProtoInstance()
ProtoInstance1098.setUSE("hanim_l_carpometacarpal6")

fieldValue1036.addChildren(ProtoInstance1098)
ProtoInstance1099 = x3d.ProtoInstance()
ProtoInstance1099.setUSE("hanim_l_metacarpophalangeal6")

fieldValue1036.addChildren(ProtoInstance1099)
ProtoInstance1100 = x3d.ProtoInstance()
ProtoInstance1100.setUSE("hanim_l_carpal_proximal_interphalangeal6")

fieldValue1036.addChildren(ProtoInstance1100)
ProtoInstance1101 = x3d.ProtoInstance()
ProtoInstance1101.setUSE("hanim_l_carpal_distal_interphalangeal6")

fieldValue1036.addChildren(ProtoInstance1101)
ProtoInstance1102 = x3d.ProtoInstance()
ProtoInstance1102.setUSE("hanim_r_sternoclavicular_2")

fieldValue1036.addChildren(ProtoInstance1102)
ProtoInstance1103 = x3d.ProtoInstance()
ProtoInstance1103.setUSE("hanim_r_acromioclavicular_2")

fieldValue1036.addChildren(ProtoInstance1103)
ProtoInstance1104 = x3d.ProtoInstance()
ProtoInstance1104.setUSE("hanim_r_shoulder_2")

fieldValue1036.addChildren(ProtoInstance1104)
ProtoInstance1105 = x3d.ProtoInstance()
ProtoInstance1105.setUSE("hanim_r_elbow_2")

fieldValue1036.addChildren(ProtoInstance1105)
ProtoInstance1106 = x3d.ProtoInstance()
ProtoInstance1106.setUSE("hanim_r_radiocarpal_2")

fieldValue1036.addChildren(ProtoInstance1106)
ProtoInstance1107 = x3d.ProtoInstance()
ProtoInstance1107.setUSE("hanim_r_carpometacarpal2")

fieldValue1036.addChildren(ProtoInstance1107)
ProtoInstance1108 = x3d.ProtoInstance()
ProtoInstance1108.setUSE("hanim_r_metacarpophalangeal2")

fieldValue1036.addChildren(ProtoInstance1108)
ProtoInstance1109 = x3d.ProtoInstance()
ProtoInstance1109.setUSE("hanim_r_carpal_interphalangeal2")

fieldValue1036.addChildren(ProtoInstance1109)
ProtoInstance1110 = x3d.ProtoInstance()
ProtoInstance1110.setUSE("hanim_r_carpometacarpal3")

fieldValue1036.addChildren(ProtoInstance1110)
ProtoInstance1111 = x3d.ProtoInstance()
ProtoInstance1111.setUSE("hanim_r_metacarpophalangeal3")

fieldValue1036.addChildren(ProtoInstance1111)
ProtoInstance1112 = x3d.ProtoInstance()
ProtoInstance1112.setUSE("hanim_r_carpal_proximal_interphalangeal3")

fieldValue1036.addChildren(ProtoInstance1112)
ProtoInstance1113 = x3d.ProtoInstance()
ProtoInstance1113.setUSE("hanim_r_carpal_distal_interphalangeal3")

fieldValue1036.addChildren(ProtoInstance1113)
ProtoInstance1114 = x3d.ProtoInstance()
ProtoInstance1114.setUSE("hanim_r_carpometacarpal4")

fieldValue1036.addChildren(ProtoInstance1114)
ProtoInstance1115 = x3d.ProtoInstance()
ProtoInstance1115.setUSE("hanim_r_metacarpophalangeal4")

fieldValue1036.addChildren(ProtoInstance1115)
ProtoInstance1116 = x3d.ProtoInstance()
ProtoInstance1116.setUSE("hanim_r_carpal_proximal_interphalangeal4")

fieldValue1036.addChildren(ProtoInstance1116)
ProtoInstance1117 = x3d.ProtoInstance()
ProtoInstance1117.setUSE("hanim_r_carpal_distal_interphalangeal4")

fieldValue1036.addChildren(ProtoInstance1117)
ProtoInstance1118 = x3d.ProtoInstance()
ProtoInstance1118.setUSE("hanim_r_carpometacarpal5")

fieldValue1036.addChildren(ProtoInstance1118)
ProtoInstance1119 = x3d.ProtoInstance()
ProtoInstance1119.setUSE("hanim_r_metacarpophalangeal5")

fieldValue1036.addChildren(ProtoInstance1119)
ProtoInstance1120 = x3d.ProtoInstance()
ProtoInstance1120.setUSE("hanim_r_carpal_proximal_interphalangeal5")

fieldValue1036.addChildren(ProtoInstance1120)
ProtoInstance1121 = x3d.ProtoInstance()
ProtoInstance1121.setUSE("hanim_r_carpal_distal_interphalangeal5")

fieldValue1036.addChildren(ProtoInstance1121)
ProtoInstance1122 = x3d.ProtoInstance()
ProtoInstance1122.setUSE("hanim_r_carpometacarpal6")

fieldValue1036.addChildren(ProtoInstance1122)
ProtoInstance1123 = x3d.ProtoInstance()
ProtoInstance1123.setUSE("hanim_r_metacarpophalangeal6")

fieldValue1036.addChildren(ProtoInstance1123)
ProtoInstance1124 = x3d.ProtoInstance()
ProtoInstance1124.setUSE("hanim_r_carpal_proximal_interphalangeal6")

fieldValue1036.addChildren(ProtoInstance1124)
ProtoInstance1125 = x3d.ProtoInstance()
ProtoInstance1125.setUSE("hanim_r_carpal_distal_interphalangeal6")

fieldValue1036.addChildren(ProtoInstance1125)

ProtoInstance110.addFieldValue(fieldValue1036)
fieldValue1126 = x3d.fieldValue()
fieldValue1126.setName("sites")
ProtoInstance1127 = x3d.ProtoInstance()
ProtoInstance1127.setUSE("hanim_l_tarsal_distal_phalanx_1_tip_2")

fieldValue1126.addChildren(ProtoInstance1127)
ProtoInstance1128 = x3d.ProtoInstance()
ProtoInstance1128.setUSE("hanim_l_tarsal_interphalangeal_phalanx6")

fieldValue1126.addChildren(ProtoInstance1128)
ProtoInstance1129 = x3d.ProtoInstance()
ProtoInstance1129.setUSE("hanim_l_tarsal_distal_phalanx3")

fieldValue1126.addChildren(ProtoInstance1129)
ProtoInstance1130 = x3d.ProtoInstance()
ProtoInstance1130.setUSE("hanim_l_tarsal_interphalangeal_phalanx2")

fieldValue1126.addChildren(ProtoInstance1130)
ProtoInstance1131 = x3d.ProtoInstance()
ProtoInstance1131.setUSE("hanim_l_lateral_malleolus_2")

fieldValue1126.addChildren(ProtoInstance1131)
ProtoInstance1132 = x3d.ProtoInstance()
ProtoInstance1132.setUSE("hanim_l_medial_malleolus_2")

fieldValue1126.addChildren(ProtoInstance1132)
ProtoInstance1133 = x3d.ProtoInstance()
ProtoInstance1133.setUSE("hanim_l_sphyrion_2")

fieldValue1126.addChildren(ProtoInstance1133)
ProtoInstance1134 = x3d.ProtoInstance()
ProtoInstance1134.setUSE("hanim_l_calcaneus_posterior_2")

fieldValue1126.addChildren(ProtoInstance1134)
ProtoInstance1135 = x3d.ProtoInstance()
ProtoInstance1135.setUSE("hanim_l_knee_crease_2")

fieldValue1126.addChildren(ProtoInstance1135)
ProtoInstance1136 = x3d.ProtoInstance()
ProtoInstance1136.setUSE("hanim_l_femoral_lateral_epicondyles_2")

fieldValue1126.addChildren(ProtoInstance1136)
ProtoInstance1137 = x3d.ProtoInstance()
ProtoInstance1137.setUSE("hanim_l_femoral_medial_epicondyles_2")

fieldValue1126.addChildren(ProtoInstance1137)
ProtoInstance1138 = x3d.ProtoInstance()
ProtoInstance1138.setUSE("hanim_r_tarsal_distal_phalanx_1_tip_2")

fieldValue1126.addChildren(ProtoInstance1138)
ProtoInstance1139 = x3d.ProtoInstance()
ProtoInstance1139.setUSE("hanim_r_tarsal_interphalangeal_phalanx6")

fieldValue1126.addChildren(ProtoInstance1139)
ProtoInstance1140 = x3d.ProtoInstance()
ProtoInstance1140.setUSE("hanim_r_tarsal_distal_phalanx3")

fieldValue1126.addChildren(ProtoInstance1140)
ProtoInstance1141 = x3d.ProtoInstance()
ProtoInstance1141.setUSE("hanim_r_tarsal_interphalangeal_phalanx2")

fieldValue1126.addChildren(ProtoInstance1141)
ProtoInstance1142 = x3d.ProtoInstance()
ProtoInstance1142.setUSE("hanim_r_lateral_malleolus_2")

fieldValue1126.addChildren(ProtoInstance1142)
ProtoInstance1143 = x3d.ProtoInstance()
ProtoInstance1143.setUSE("hanim_r_medial_malleolus_2")

fieldValue1126.addChildren(ProtoInstance1143)
ProtoInstance1144 = x3d.ProtoInstance()
ProtoInstance1144.setUSE("hanim_r_sphyrion_2")

fieldValue1126.addChildren(ProtoInstance1144)
ProtoInstance1145 = x3d.ProtoInstance()
ProtoInstance1145.setUSE("hanim_r_calcaneus_posterior_2")

fieldValue1126.addChildren(ProtoInstance1145)
ProtoInstance1146 = x3d.ProtoInstance()
ProtoInstance1146.setUSE("hanim_r_knee_crease_2")

fieldValue1126.addChildren(ProtoInstance1146)
ProtoInstance1147 = x3d.ProtoInstance()
ProtoInstance1147.setUSE("hanim_r_femoral_lateral_epicondyles_2")

fieldValue1126.addChildren(ProtoInstance1147)
ProtoInstance1148 = x3d.ProtoInstance()
ProtoInstance1148.setUSE("hanim_r_femoral_medial_epicondyles_2")

fieldValue1126.addChildren(ProtoInstance1148)
ProtoInstance1149 = x3d.ProtoInstance()
ProtoInstance1149.setUSE("hanim_r_iliocristale_2")

fieldValue1126.addChildren(ProtoInstance1149)
ProtoInstance1150 = x3d.ProtoInstance()
ProtoInstance1150.setUSE("hanim_r_trochanterion_2")

fieldValue1126.addChildren(ProtoInstance1150)
ProtoInstance1151 = x3d.ProtoInstance()
ProtoInstance1151.setUSE("hanim_l_iliocristale_2")

fieldValue1126.addChildren(ProtoInstance1151)
ProtoInstance1152 = x3d.ProtoInstance()
ProtoInstance1152.setUSE("hanim_l_trochanterion_2")

fieldValue1126.addChildren(ProtoInstance1152)
ProtoInstance1153 = x3d.ProtoInstance()
ProtoInstance1153.setUSE("hanim_r_asis_2")

fieldValue1126.addChildren(ProtoInstance1153)
ProtoInstance1154 = x3d.ProtoInstance()
ProtoInstance1154.setUSE("hanim_l_asis_2")

fieldValue1126.addChildren(ProtoInstance1154)
ProtoInstance1155 = x3d.ProtoInstance()
ProtoInstance1155.setUSE("hanim_r_psis_2")

fieldValue1126.addChildren(ProtoInstance1155)
ProtoInstance1156 = x3d.ProtoInstance()
ProtoInstance1156.setUSE("hanim_l_psis_2")

fieldValue1126.addChildren(ProtoInstance1156)
ProtoInstance1157 = x3d.ProtoInstance()
ProtoInstance1157.setUSE("hanim_crotch_2")

fieldValue1126.addChildren(ProtoInstance1157)
ProtoInstance1158 = x3d.ProtoInstance()
ProtoInstance1158.setUSE("hanim_skull_tip_2")

fieldValue1126.addChildren(ProtoInstance1158)
ProtoInstance1159 = x3d.ProtoInstance()
ProtoInstance1159.setUSE("hanim_sellion_2")

fieldValue1126.addChildren(ProtoInstance1159)
ProtoInstance1160 = x3d.ProtoInstance()
ProtoInstance1160.setUSE("hanim_r_infraorbitale_2")

fieldValue1126.addChildren(ProtoInstance1160)
ProtoInstance1161 = x3d.ProtoInstance()
ProtoInstance1161.setUSE("hanim_l_infraorbitale_2")

fieldValue1126.addChildren(ProtoInstance1161)
ProtoInstance1162 = x3d.ProtoInstance()
ProtoInstance1162.setUSE("hanim_supramenton_2")

fieldValue1126.addChildren(ProtoInstance1162)
ProtoInstance1163 = x3d.ProtoInstance()
ProtoInstance1163.setUSE("hanim_r_tragion_2")

fieldValue1126.addChildren(ProtoInstance1163)
ProtoInstance1164 = x3d.ProtoInstance()
ProtoInstance1164.setUSE("hanim_r_gonion_2")

fieldValue1126.addChildren(ProtoInstance1164)
ProtoInstance1165 = x3d.ProtoInstance()
ProtoInstance1165.setUSE("hanim_l_tragion_2")

fieldValue1126.addChildren(ProtoInstance1165)
ProtoInstance1166 = x3d.ProtoInstance()
ProtoInstance1166.setUSE("hanim_l_gonion_2")

fieldValue1126.addChildren(ProtoInstance1166)
ProtoInstance1167 = x3d.ProtoInstance()
ProtoInstance1167.setUSE("hanim_nuchale_2")

fieldValue1126.addChildren(ProtoInstance1167)
ProtoInstance1168 = x3d.ProtoInstance()
ProtoInstance1168.setUSE("hanim_r_neck_base_2")

fieldValue1126.addChildren(ProtoInstance1168)
ProtoInstance1169 = x3d.ProtoInstance()
ProtoInstance1169.setUSE("hanim_l_neck_base_2")

fieldValue1126.addChildren(ProtoInstance1169)
ProtoInstance1170 = x3d.ProtoInstance()
ProtoInstance1170.setUSE("hanim_l_carpal_distal_phalanx_1_tip_2")

fieldValue1126.addChildren(ProtoInstance1170)
ProtoInstance1171 = x3d.ProtoInstance()
ProtoInstance1171.setUSE("hanim_l_carpal_distal_phalanx_2_tip_2")

fieldValue1126.addChildren(ProtoInstance1171)
ProtoInstance1172 = x3d.ProtoInstance()
ProtoInstance1172.setUSE("hanim_l_dactylion_2")

fieldValue1126.addChildren(ProtoInstance1172)
ProtoInstance1173 = x3d.ProtoInstance()
ProtoInstance1173.setUSE("hanim_l_carpal_distal_phalanx_3_tip_2")

fieldValue1126.addChildren(ProtoInstance1173)
ProtoInstance1174 = x3d.ProtoInstance()
ProtoInstance1174.setUSE("hanim_l_carpal_distal_phalanx_4_tip_2")

fieldValue1126.addChildren(ProtoInstance1174)
ProtoInstance1175 = x3d.ProtoInstance()
ProtoInstance1175.setUSE("hanim_l_carpal_distal_phalanx_5_tip_2")

fieldValue1126.addChildren(ProtoInstance1175)
ProtoInstance1176 = x3d.ProtoInstance()
ProtoInstance1176.setUSE("hanim_l_metacarpal_phalanx3")

fieldValue1126.addChildren(ProtoInstance1176)
ProtoInstance1177 = x3d.ProtoInstance()
ProtoInstance1177.setUSE("hanim_l_ulnar_styloid_2")

fieldValue1126.addChildren(ProtoInstance1177)
ProtoInstance1178 = x3d.ProtoInstance()
ProtoInstance1178.setUSE("hanim_l_metacarpal_phalanx6")

fieldValue1126.addChildren(ProtoInstance1178)
ProtoInstance1179 = x3d.ProtoInstance()
ProtoInstance1179.setUSE("hanim_l_radial_styloid_2")

fieldValue1126.addChildren(ProtoInstance1179)
ProtoInstance1180 = x3d.ProtoInstance()
ProtoInstance1180.setUSE("hanim_l_olecranon_2")

fieldValue1126.addChildren(ProtoInstance1180)
ProtoInstance1181 = x3d.ProtoInstance()
ProtoInstance1181.setUSE("hanim_l_humeral_medial_epicondyles_2")

fieldValue1126.addChildren(ProtoInstance1181)
ProtoInstance1182 = x3d.ProtoInstance()
ProtoInstance1182.setUSE("hanim_l_radiale_2")

fieldValue1126.addChildren(ProtoInstance1182)
ProtoInstance1183 = x3d.ProtoInstance()
ProtoInstance1183.setUSE("hanim_l_humeral_lateral_epicondyles_2")

fieldValue1126.addChildren(ProtoInstance1183)
ProtoInstance1184 = x3d.ProtoInstance()
ProtoInstance1184.setUSE("hanim_l_clavicale_2")

fieldValue1126.addChildren(ProtoInstance1184)
ProtoInstance1185 = x3d.ProtoInstance()
ProtoInstance1185.setUSE("hanim_l_acromion_2")

fieldValue1126.addChildren(ProtoInstance1185)
ProtoInstance1186 = x3d.ProtoInstance()
ProtoInstance1186.setUSE("hanim_l_axilla_proximal_2")

fieldValue1126.addChildren(ProtoInstance1186)
ProtoInstance1187 = x3d.ProtoInstance()
ProtoInstance1187.setUSE("hanim_l_axilla_distal_2")

fieldValue1126.addChildren(ProtoInstance1187)
ProtoInstance1188 = x3d.ProtoInstance()
ProtoInstance1188.setUSE("hanim_r_carpal_distal_phalanx_1_tip_2")

fieldValue1126.addChildren(ProtoInstance1188)
ProtoInstance1189 = x3d.ProtoInstance()
ProtoInstance1189.setUSE("hanim_r_carpal_distal_phalanx_2_tip_2")

fieldValue1126.addChildren(ProtoInstance1189)
ProtoInstance1190 = x3d.ProtoInstance()
ProtoInstance1190.setUSE("hanim_r_dactylion_2")

fieldValue1126.addChildren(ProtoInstance1190)
ProtoInstance1191 = x3d.ProtoInstance()
ProtoInstance1191.setUSE("hanim_r_carpal_distal_phalanx_3_tip_2")

fieldValue1126.addChildren(ProtoInstance1191)
ProtoInstance1192 = x3d.ProtoInstance()
ProtoInstance1192.setUSE("hanim_r_carpal_distal_phalanx_4_tip_2")

fieldValue1126.addChildren(ProtoInstance1192)
ProtoInstance1193 = x3d.ProtoInstance()
ProtoInstance1193.setUSE("hanim_r_carpal_distal_phalanx_5_tip_2")

fieldValue1126.addChildren(ProtoInstance1193)
ProtoInstance1194 = x3d.ProtoInstance()
ProtoInstance1194.setUSE("hanim_r_metacarpal_phalanx3")

fieldValue1126.addChildren(ProtoInstance1194)
ProtoInstance1195 = x3d.ProtoInstance()
ProtoInstance1195.setUSE("hanim_r_ulnar_styloid_2")

fieldValue1126.addChildren(ProtoInstance1195)
ProtoInstance1196 = x3d.ProtoInstance()
ProtoInstance1196.setUSE("hanim_r_metacarpal_phalanx6")

fieldValue1126.addChildren(ProtoInstance1196)
ProtoInstance1197 = x3d.ProtoInstance()
ProtoInstance1197.setUSE("hanim_r_radial_styloid_2")

fieldValue1126.addChildren(ProtoInstance1197)
ProtoInstance1198 = x3d.ProtoInstance()
ProtoInstance1198.setUSE("hanim_r_olecranon_2")

fieldValue1126.addChildren(ProtoInstance1198)
ProtoInstance1199 = x3d.ProtoInstance()
ProtoInstance1199.setUSE("hanim_r_humeral_medial_epicondyles_2")

fieldValue1126.addChildren(ProtoInstance1199)
ProtoInstance1200 = x3d.ProtoInstance()
ProtoInstance1200.setUSE("hanim_r_radiale_2")

fieldValue1126.addChildren(ProtoInstance1200)
ProtoInstance1201 = x3d.ProtoInstance()
ProtoInstance1201.setUSE("hanim_r_humeral_lateral_epicondyles_2")

fieldValue1126.addChildren(ProtoInstance1201)
ProtoInstance1202 = x3d.ProtoInstance()
ProtoInstance1202.setUSE("hanim_r_clavicale_2")

fieldValue1126.addChildren(ProtoInstance1202)
ProtoInstance1203 = x3d.ProtoInstance()
ProtoInstance1203.setUSE("hanim_r_acromion_2")

fieldValue1126.addChildren(ProtoInstance1203)
ProtoInstance1204 = x3d.ProtoInstance()
ProtoInstance1204.setUSE("hanim_r_axilla_proximal_2")

fieldValue1126.addChildren(ProtoInstance1204)
ProtoInstance1205 = x3d.ProtoInstance()
ProtoInstance1205.setUSE("hanim_r_axilla_distal_2")

fieldValue1126.addChildren(ProtoInstance1205)
ProtoInstance1206 = x3d.ProtoInstance()
ProtoInstance1206.setUSE("hanim_suprasternale_2")

fieldValue1126.addChildren(ProtoInstance1206)
ProtoInstance1207 = x3d.ProtoInstance()
ProtoInstance1207.setUSE("hanim_cervicale_2")

fieldValue1126.addChildren(ProtoInstance1207)
ProtoInstance1208 = x3d.ProtoInstance()
ProtoInstance1208.setUSE("hanim_r_thelion_2")

fieldValue1126.addChildren(ProtoInstance1208)
ProtoInstance1209 = x3d.ProtoInstance()
ProtoInstance1209.setUSE("hanim_l_thelion_2")

fieldValue1126.addChildren(ProtoInstance1209)
ProtoInstance1210 = x3d.ProtoInstance()
ProtoInstance1210.setUSE("hanim_substernale_2")

fieldValue1126.addChildren(ProtoInstance1210)
ProtoInstance1211 = x3d.ProtoInstance()
ProtoInstance1211.setUSE("hanim_r_rib10_2")

fieldValue1126.addChildren(ProtoInstance1211)
ProtoInstance1212 = x3d.ProtoInstance()
ProtoInstance1212.setUSE("hanim_l_rib10_2")

fieldValue1126.addChildren(ProtoInstance1212)
ProtoInstance1213 = x3d.ProtoInstance()
ProtoInstance1213.setUSE("hanim_spine_2_lower_back_2")

fieldValue1126.addChildren(ProtoInstance1213)
ProtoInstance1214 = x3d.ProtoInstance()
ProtoInstance1214.setUSE("hanim_waist_preferred_posterior_2")

fieldValue1126.addChildren(ProtoInstance1214)
ProtoInstance1215 = x3d.ProtoInstance()
ProtoInstance1215.setUSE("hanim_navel_2")

fieldValue1126.addChildren(ProtoInstance1215)

ProtoInstance110.addFieldValue(fieldValue1126)
fieldValue1216 = x3d.fieldValue()
fieldValue1216.setName("segments")
ProtoInstance1217 = x3d.ProtoInstance()
ProtoInstance1217.setUSE("hanim_l_tarsal_distal_phalanx2")

fieldValue1216.addChildren(ProtoInstance1217)
ProtoInstance1218 = x3d.ProtoInstance()
ProtoInstance1218.setUSE("hanim_l_middistal_2")

fieldValue1216.addChildren(ProtoInstance1218)
ProtoInstance1219 = x3d.ProtoInstance()
ProtoInstance1219.setUSE("hanim_l_midproximal_2")

fieldValue1216.addChildren(ProtoInstance1219)
ProtoInstance1220 = x3d.ProtoInstance()
ProtoInstance1220.setUSE("hanim_l_hindfoot_2")

fieldValue1216.addChildren(ProtoInstance1220)
ProtoInstance1221 = x3d.ProtoInstance()
ProtoInstance1221.setUSE("hanim_l_calf_2")

fieldValue1216.addChildren(ProtoInstance1221)
ProtoInstance1222 = x3d.ProtoInstance()
ProtoInstance1222.setUSE("hanim_l_thigh_2")

fieldValue1216.addChildren(ProtoInstance1222)
ProtoInstance1223 = x3d.ProtoInstance()
ProtoInstance1223.setUSE("hanim_r_tarsal_distal_phalanx2")

fieldValue1216.addChildren(ProtoInstance1223)
ProtoInstance1224 = x3d.ProtoInstance()
ProtoInstance1224.setUSE("hanim_r_middistal_2")

fieldValue1216.addChildren(ProtoInstance1224)
ProtoInstance1225 = x3d.ProtoInstance()
ProtoInstance1225.setUSE("hanim_r_midproximal_2")

fieldValue1216.addChildren(ProtoInstance1225)
ProtoInstance1226 = x3d.ProtoInstance()
ProtoInstance1226.setUSE("hanim_r_hindfoot_2")

fieldValue1216.addChildren(ProtoInstance1226)
ProtoInstance1227 = x3d.ProtoInstance()
ProtoInstance1227.setUSE("hanim_r_calf_2")

fieldValue1216.addChildren(ProtoInstance1227)
ProtoInstance1228 = x3d.ProtoInstance()
ProtoInstance1228.setUSE("hanim_r_thigh_2")

fieldValue1216.addChildren(ProtoInstance1228)
ProtoInstance1229 = x3d.ProtoInstance()
ProtoInstance1229.setUSE("hanim_pelvis_2")

fieldValue1216.addChildren(ProtoInstance1229)
ProtoInstance1230 = x3d.ProtoInstance()
ProtoInstance1230.setUSE("hanim_l_eyeball_4")

fieldValue1216.addChildren(ProtoInstance1230)
ProtoInstance1231 = x3d.ProtoInstance()
ProtoInstance1231.setUSE("hanim_r_eyeball_4")

fieldValue1216.addChildren(ProtoInstance1231)
ProtoInstance1232 = x3d.ProtoInstance()
ProtoInstance1232.setUSE("hanim_skull_2")

fieldValue1216.addChildren(ProtoInstance1232)
ProtoInstance1233 = x3d.ProtoInstance()
ProtoInstance1233.setUSE("hanim_c1_2")

fieldValue1216.addChildren(ProtoInstance1233)
ProtoInstance1234 = x3d.ProtoInstance()
ProtoInstance1234.setUSE("hanim_c2_2")

fieldValue1216.addChildren(ProtoInstance1234)
ProtoInstance1235 = x3d.ProtoInstance()
ProtoInstance1235.setUSE("hanim_c3_2")

fieldValue1216.addChildren(ProtoInstance1235)
ProtoInstance1236 = x3d.ProtoInstance()
ProtoInstance1236.setUSE("hanim_c4_2")

fieldValue1216.addChildren(ProtoInstance1236)
ProtoInstance1237 = x3d.ProtoInstance()
ProtoInstance1237.setUSE("hanim_c5_2")

fieldValue1216.addChildren(ProtoInstance1237)
ProtoInstance1238 = x3d.ProtoInstance()
ProtoInstance1238.setUSE("hanim_c6_2")

fieldValue1216.addChildren(ProtoInstance1238)
ProtoInstance1239 = x3d.ProtoInstance()
ProtoInstance1239.setUSE("hanim_c7_2")

fieldValue1216.addChildren(ProtoInstance1239)
ProtoInstance1240 = x3d.ProtoInstance()
ProtoInstance1240.setUSE("hanim_l_carpal_distal_phalanx2")

fieldValue1216.addChildren(ProtoInstance1240)
ProtoInstance1241 = x3d.ProtoInstance()
ProtoInstance1241.setUSE("hanim_l_index_proximal_6")

fieldValue1216.addChildren(ProtoInstance1241)
ProtoInstance1242 = x3d.ProtoInstance()
ProtoInstance1242.setUSE("hanim_l_index_proximal_6")

fieldValue1216.addChildren(ProtoInstance1242)
ProtoInstance1243 = x3d.ProtoInstance()
ProtoInstance1243.setUSE("hanim_l_carpal_distal_phalanx3")

fieldValue1216.addChildren(ProtoInstance1243)
ProtoInstance1244 = x3d.ProtoInstance()
ProtoInstance1244.setUSE("hanim_l_index_middle_2")

fieldValue1216.addChildren(ProtoInstance1244)
ProtoInstance1245 = x3d.ProtoInstance()
ProtoInstance1245.setUSE("hanim_l_index_proximal_6")

fieldValue1216.addChildren(ProtoInstance1245)
ProtoInstance1246 = x3d.ProtoInstance()
ProtoInstance1246.setUSE("hanim_l_index_metacarpal_2")

fieldValue1216.addChildren(ProtoInstance1246)
ProtoInstance1247 = x3d.ProtoInstance()
ProtoInstance1247.setUSE("hanim_l_carpal_distal_phalanx4")

fieldValue1216.addChildren(ProtoInstance1247)
ProtoInstance1248 = x3d.ProtoInstance()
ProtoInstance1248.setUSE("hanim_l_middle_middle_2")

fieldValue1216.addChildren(ProtoInstance1248)
ProtoInstance1249 = x3d.ProtoInstance()
ProtoInstance1249.setUSE("hanim_l_middle_proximal_2")

fieldValue1216.addChildren(ProtoInstance1249)
ProtoInstance1250 = x3d.ProtoInstance()
ProtoInstance1250.setUSE("hanim_l_middle_metacarpal_2")

fieldValue1216.addChildren(ProtoInstance1250)
ProtoInstance1251 = x3d.ProtoInstance()
ProtoInstance1251.setUSE("hanim_l_carpal_distal_phalanx5")

fieldValue1216.addChildren(ProtoInstance1251)
ProtoInstance1252 = x3d.ProtoInstance()
ProtoInstance1252.setUSE("hanim_l_ring_middle_2")

fieldValue1216.addChildren(ProtoInstance1252)
ProtoInstance1253 = x3d.ProtoInstance()
ProtoInstance1253.setUSE("hanim_l_ring_proximal_2")

fieldValue1216.addChildren(ProtoInstance1253)
ProtoInstance1254 = x3d.ProtoInstance()
ProtoInstance1254.setUSE("hanim_l_ring_metacarpal_2")

fieldValue1216.addChildren(ProtoInstance1254)
ProtoInstance1255 = x3d.ProtoInstance()
ProtoInstance1255.setUSE("hanim_l_carpal_distal_phalanx6")

fieldValue1216.addChildren(ProtoInstance1255)
ProtoInstance1256 = x3d.ProtoInstance()
ProtoInstance1256.setUSE("hanim_l_pinky_middle_2")

fieldValue1216.addChildren(ProtoInstance1256)
ProtoInstance1257 = x3d.ProtoInstance()
ProtoInstance1257.setUSE("hanim_l_pinky_proximal_2")

fieldValue1216.addChildren(ProtoInstance1257)
ProtoInstance1258 = x3d.ProtoInstance()
ProtoInstance1258.setUSE("hanim_l_pinky_metacarpal_2")

fieldValue1216.addChildren(ProtoInstance1258)
ProtoInstance1259 = x3d.ProtoInstance()
ProtoInstance1259.setUSE("hanim_l_hand_2")

fieldValue1216.addChildren(ProtoInstance1259)
ProtoInstance1260 = x3d.ProtoInstance()
ProtoInstance1260.setUSE("hanim_l_forearm_2")

fieldValue1216.addChildren(ProtoInstance1260)
ProtoInstance1261 = x3d.ProtoInstance()
ProtoInstance1261.setUSE("hanim_l_upperarm_2")

fieldValue1216.addChildren(ProtoInstance1261)
ProtoInstance1262 = x3d.ProtoInstance()
ProtoInstance1262.setUSE("hanim_l_scapula_2")

fieldValue1216.addChildren(ProtoInstance1262)
ProtoInstance1263 = x3d.ProtoInstance()
ProtoInstance1263.setUSE("hanim_l_clavicle_2")

fieldValue1216.addChildren(ProtoInstance1263)
ProtoInstance1264 = x3d.ProtoInstance()
ProtoInstance1264.setUSE("hanim_r_carpal_distal_phalanx2")

fieldValue1216.addChildren(ProtoInstance1264)
ProtoInstance1265 = x3d.ProtoInstance()
ProtoInstance1265.setUSE("hanim_r_index_proximal_6")

fieldValue1216.addChildren(ProtoInstance1265)
ProtoInstance1266 = x3d.ProtoInstance()
ProtoInstance1266.setUSE("hanim_r_index_proximal_6")

fieldValue1216.addChildren(ProtoInstance1266)
ProtoInstance1267 = x3d.ProtoInstance()
ProtoInstance1267.setUSE("hanim_r_carpal_distal_phalanx3")

fieldValue1216.addChildren(ProtoInstance1267)
ProtoInstance1268 = x3d.ProtoInstance()
ProtoInstance1268.setUSE("hanim_r_index_middle_2")

fieldValue1216.addChildren(ProtoInstance1268)
ProtoInstance1269 = x3d.ProtoInstance()
ProtoInstance1269.setUSE("hanim_r_index_proximal_6")

fieldValue1216.addChildren(ProtoInstance1269)
ProtoInstance1270 = x3d.ProtoInstance()
ProtoInstance1270.setUSE("hanim_r_index_metacarpal_2")

fieldValue1216.addChildren(ProtoInstance1270)
ProtoInstance1271 = x3d.ProtoInstance()
ProtoInstance1271.setUSE("hanim_r_carpal_distal_phalanx4")

fieldValue1216.addChildren(ProtoInstance1271)
ProtoInstance1272 = x3d.ProtoInstance()
ProtoInstance1272.setUSE("hanim_r_middle_middle_2")

fieldValue1216.addChildren(ProtoInstance1272)
ProtoInstance1273 = x3d.ProtoInstance()
ProtoInstance1273.setUSE("hanim_r_middle_proximal_2")

fieldValue1216.addChildren(ProtoInstance1273)
ProtoInstance1274 = x3d.ProtoInstance()
ProtoInstance1274.setUSE("hanim_r_middle_metacarpal_2")

fieldValue1216.addChildren(ProtoInstance1274)
ProtoInstance1275 = x3d.ProtoInstance()
ProtoInstance1275.setUSE("hanim_r_carpal_distal_phalanx5")

fieldValue1216.addChildren(ProtoInstance1275)
ProtoInstance1276 = x3d.ProtoInstance()
ProtoInstance1276.setUSE("hanim_r_ring_middle_2")

fieldValue1216.addChildren(ProtoInstance1276)
ProtoInstance1277 = x3d.ProtoInstance()
ProtoInstance1277.setUSE("hanim_r_ring_proximal_2")

fieldValue1216.addChildren(ProtoInstance1277)
ProtoInstance1278 = x3d.ProtoInstance()
ProtoInstance1278.setUSE("hanim_r_ring_metacarpal_2")

fieldValue1216.addChildren(ProtoInstance1278)
ProtoInstance1279 = x3d.ProtoInstance()
ProtoInstance1279.setUSE("hanim_r_carpal_distal_phalanx6")

fieldValue1216.addChildren(ProtoInstance1279)
ProtoInstance1280 = x3d.ProtoInstance()
ProtoInstance1280.setUSE("hanim_r_pinky_middle_2")

fieldValue1216.addChildren(ProtoInstance1280)
ProtoInstance1281 = x3d.ProtoInstance()
ProtoInstance1281.setUSE("hanim_r_pinky_proximal_2")

fieldValue1216.addChildren(ProtoInstance1281)
ProtoInstance1282 = x3d.ProtoInstance()
ProtoInstance1282.setUSE("hanim_r_pinky_metacarpal_2")

fieldValue1216.addChildren(ProtoInstance1282)
ProtoInstance1283 = x3d.ProtoInstance()
ProtoInstance1283.setUSE("hanim_r_hand_2")

fieldValue1216.addChildren(ProtoInstance1283)
ProtoInstance1284 = x3d.ProtoInstance()
ProtoInstance1284.setUSE("hanim_r_forearm_2")

fieldValue1216.addChildren(ProtoInstance1284)
ProtoInstance1285 = x3d.ProtoInstance()
ProtoInstance1285.setUSE("hanim_r_upperarm_2")

fieldValue1216.addChildren(ProtoInstance1285)
ProtoInstance1286 = x3d.ProtoInstance()
ProtoInstance1286.setUSE("hanim_r_scapula_2")

fieldValue1216.addChildren(ProtoInstance1286)
ProtoInstance1287 = x3d.ProtoInstance()
ProtoInstance1287.setUSE("hanim_r_clavicle_2")

fieldValue1216.addChildren(ProtoInstance1287)
ProtoInstance1288 = x3d.ProtoInstance()
ProtoInstance1288.setUSE("hanim_t1_2")

fieldValue1216.addChildren(ProtoInstance1288)
ProtoInstance1289 = x3d.ProtoInstance()
ProtoInstance1289.setUSE("hanim_t2_2")

fieldValue1216.addChildren(ProtoInstance1289)
ProtoInstance1290 = x3d.ProtoInstance()
ProtoInstance1290.setUSE("hanim_t3_2")

fieldValue1216.addChildren(ProtoInstance1290)
ProtoInstance1291 = x3d.ProtoInstance()
ProtoInstance1291.setUSE("hanim_t4_2")

fieldValue1216.addChildren(ProtoInstance1291)
ProtoInstance1292 = x3d.ProtoInstance()
ProtoInstance1292.setUSE("hanim_t5_2")

fieldValue1216.addChildren(ProtoInstance1292)
ProtoInstance1293 = x3d.ProtoInstance()
ProtoInstance1293.setUSE("hanim_t6_2")

fieldValue1216.addChildren(ProtoInstance1293)
ProtoInstance1294 = x3d.ProtoInstance()
ProtoInstance1294.setUSE("hanim_t7_2")

fieldValue1216.addChildren(ProtoInstance1294)
ProtoInstance1295 = x3d.ProtoInstance()
ProtoInstance1295.setUSE("hanim_t8_2")

fieldValue1216.addChildren(ProtoInstance1295)
ProtoInstance1296 = x3d.ProtoInstance()
ProtoInstance1296.setUSE("hanim_t9_2")

fieldValue1216.addChildren(ProtoInstance1296)
ProtoInstance1297 = x3d.ProtoInstance()
ProtoInstance1297.setUSE("hanim_t10_2")

fieldValue1216.addChildren(ProtoInstance1297)
ProtoInstance1298 = x3d.ProtoInstance()
ProtoInstance1298.setUSE("hanim_t11_2")

fieldValue1216.addChildren(ProtoInstance1298)
ProtoInstance1299 = x3d.ProtoInstance()
ProtoInstance1299.setUSE("hanim_t12_2")

fieldValue1216.addChildren(ProtoInstance1299)
ProtoInstance1300 = x3d.ProtoInstance()
ProtoInstance1300.setUSE("hanim_l1_2")

fieldValue1216.addChildren(ProtoInstance1300)
ProtoInstance1301 = x3d.ProtoInstance()
ProtoInstance1301.setUSE("hanim_l2_2")

fieldValue1216.addChildren(ProtoInstance1301)
ProtoInstance1302 = x3d.ProtoInstance()
ProtoInstance1302.setUSE("hanim_l3_2")

fieldValue1216.addChildren(ProtoInstance1302)
ProtoInstance1303 = x3d.ProtoInstance()
ProtoInstance1303.setUSE("hanim_l4_2")

fieldValue1216.addChildren(ProtoInstance1303)
ProtoInstance1304 = x3d.ProtoInstance()
ProtoInstance1304.setUSE("hanim_l5_2")

fieldValue1216.addChildren(ProtoInstance1304)
ProtoInstance1305 = x3d.ProtoInstance()
ProtoInstance1305.setUSE("hanim_sacrum_2")

fieldValue1216.addChildren(ProtoInstance1305)

ProtoInstance110.addFieldValue(fieldValue1216)
fieldValue1306 = x3d.fieldValue()
fieldValue1306.setName("name")
fieldValue1306.setValue("humanoid")

ProtoInstance110.addFieldValue(fieldValue1306)
fieldValue1307 = x3d.fieldValue()
fieldValue1307.setName("info")
fieldValue1307.setValue("\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;4\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"")

ProtoInstance110.addFieldValue(fieldValue1307)

Scene4.addChildren(ProtoInstance110)
Group1308 = x3d.Group()
Group1308.setDEF("JointCenters_WorldInfo")
WorldInfo1309 = x3d.WorldInfo()
WorldInfo1309.setTitle("HANIM 200x Default Joint Centers, LOA&#8209;4")
WorldInfo1309.setInfo([" HANIM 200x Default Joint Centers, Level-Of-Articulation 4 --------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "])

Group1308.addChildren(WorldInfo1309)

Scene4.addChildren(Group1308)
NavigationInfo1310 = x3d.NavigationInfo()
NavigationInfo1310.setAvatarSize([0.25,1.60000002384186,0.75])
NavigationInfo1310.setSpeed(1.5)

Scene4.addChildren(NavigationInfo1310)

X3D0.setScene(Scene4)
X3D0.toFileX3D("../data/LOA4ExampleSourceWithDiamonds_RoundTrip.x3d")
