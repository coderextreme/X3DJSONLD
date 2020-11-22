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
meta3.setContent("LOA2ExampleSourceInVRML.wrl")

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
Transform50 = x3d.Transform()
IS51 = x3d.IS()
connect52 = x3d.connect()
connect52.setNodeField("children")
connect52.setProtoField("children")

IS51.addConnect(connect52)
connect53 = x3d.connect()
connect53.setNodeField("center")
connect53.setProtoField("center")

IS51.addConnect(connect53)
connect54 = x3d.connect()
connect54.setNodeField("rotation")
connect54.setProtoField("rotation")

IS51.addConnect(connect54)
connect55 = x3d.connect()
connect55.setNodeField("scale")
connect55.setProtoField("scale")

IS51.addConnect(connect55)
connect56 = x3d.connect()
connect56.setNodeField("scaleOrientation")
connect56.setProtoField("scaleOrientation")

IS51.addConnect(connect56)
connect57 = x3d.connect()
connect57.setNodeField("translation")
connect57.setProtoField("translation")

IS51.addConnect(connect57)

Transform50.setIS(IS51)

ProtoBody49.addChildren(Transform50)

ProtoDeclare36.setProtoBody(ProtoBody49)

Scene4.addChildren(ProtoDeclare36)
ProtoDeclare58 = x3d.ProtoDeclare()
ProtoDeclare58.setName("Segment")
ProtoInterface59 = x3d.ProtoInterface()
field60 = x3d.field()
field60.setName("addChildren")
field60.setAccessType("inputOnly")
field60.setType("MFNode")

ProtoInterface59.addField(field60)
field61 = x3d.field()
field61.setName("removeChildren")
field61.setAccessType("inputOnly")
field61.setType("MFNode")

ProtoInterface59.addField(field61)
field62 = x3d.field()
field62.setName("centerOfMass")
field62.setAccessType("inputOutput")
field62.setType("SFVec3f")
field62.setValue("0 0 0")

ProtoInterface59.addField(field62)
field63 = x3d.field()
field63.setName("children")
field63.setAccessType("inputOutput")
field63.setType("MFNode")

ProtoInterface59.addField(field63)
field64 = x3d.field()
field64.setName("coord")
field64.setAccessType("inputOutput")
field64.setType("SFNode")
field64.setValue()

ProtoInterface59.addField(field64)
field65 = x3d.field()
field65.setName("displacers")
field65.setAccessType("inputOutput")
field65.setType("MFNode")

ProtoInterface59.addField(field65)
field66 = x3d.field()
field66.setName("name")
field66.setAccessType("inputOutput")
field66.setType("SFString")

ProtoInterface59.addField(field66)
field67 = x3d.field()
field67.setName("mass")
field67.setAccessType("inputOutput")
field67.setType("SFFloat")
field67.setValue("0")

ProtoInterface59.addField(field67)
field68 = x3d.field()
field68.setName("momentsOfInertia")
field68.setAccessType("inputOutput")
field68.setType("SFVec3f")
field68.setValue("1 1 1")

ProtoInterface59.addField(field68)
field69 = x3d.field()
field69.setName("bboxCenter")
field69.setAccessType("initializeOnly")
field69.setType("SFVec3f")
field69.setValue("0 0 0")

ProtoInterface59.addField(field69)
field70 = x3d.field()
field70.setName("bboxSize")
field70.setAccessType("initializeOnly")
field70.setType("SFVec3f")
field70.setValue("-1 -1 -1")

ProtoInterface59.addField(field70)

ProtoDeclare58.setProtoInterface(ProtoInterface59)
ProtoBody71 = x3d.ProtoBody()
Group72 = x3d.Group()
IS73 = x3d.IS()
connect74 = x3d.connect()
connect74.setNodeField("children")
connect74.setProtoField("children")

IS73.addConnect(connect74)
connect75 = x3d.connect()
connect75.setNodeField("bboxCenter")
connect75.setProtoField("bboxCenter")

IS73.addConnect(connect75)
connect76 = x3d.connect()
connect76.setNodeField("bboxSize")
connect76.setProtoField("bboxSize")

IS73.addConnect(connect76)
connect77 = x3d.connect()
connect77.setNodeField("addChildren")
connect77.setProtoField("addChildren")

IS73.addConnect(connect77)
connect78 = x3d.connect()
connect78.setNodeField("removeChildren")
connect78.setProtoField("removeChildren")

IS73.addConnect(connect78)

Group72.setIS(IS73)

ProtoBody71.addChildren(Group72)

ProtoDeclare58.setProtoBody(ProtoBody71)

Scene4.addChildren(ProtoDeclare58)
ProtoDeclare79 = x3d.ProtoDeclare()
ProtoDeclare79.setName("Site")
ProtoInterface80 = x3d.ProtoInterface()
field81 = x3d.field()
field81.setName("addChildren")
field81.setAccessType("inputOnly")
field81.setType("MFNode")

ProtoInterface80.addField(field81)
field82 = x3d.field()
field82.setName("removeChildren")
field82.setAccessType("inputOnly")
field82.setType("MFNode")

ProtoInterface80.addField(field82)
field83 = x3d.field()
field83.setName("center")
field83.setAccessType("inputOutput")
field83.setType("SFVec3f")
field83.setValue("0 0 0")

ProtoInterface80.addField(field83)
field84 = x3d.field()
field84.setName("children")
field84.setAccessType("inputOutput")
field84.setType("MFNode")

ProtoInterface80.addField(field84)
field85 = x3d.field()
field85.setName("name")
field85.setAccessType("inputOutput")
field85.setType("SFString")

ProtoInterface80.addField(field85)
field86 = x3d.field()
field86.setName("rotation")
field86.setAccessType("inputOutput")
field86.setType("SFRotation")
field86.setValue("0 0 1 0")

ProtoInterface80.addField(field86)
field87 = x3d.field()
field87.setName("scale")
field87.setAccessType("inputOutput")
field87.setType("SFVec3f")
field87.setValue("1 1 1")

ProtoInterface80.addField(field87)
field88 = x3d.field()
field88.setName("scaleOrientation")
field88.setAccessType("inputOutput")
field88.setType("SFRotation")
field88.setValue("0 0 1 0")

ProtoInterface80.addField(field88)
field89 = x3d.field()
field89.setName("translation")
field89.setAccessType("inputOutput")
field89.setType("SFVec3f")
field89.setValue("0 0 0")

ProtoInterface80.addField(field89)

ProtoDeclare79.setProtoInterface(ProtoInterface80)
ProtoBody90 = x3d.ProtoBody()
Transform91 = x3d.Transform()
IS92 = x3d.IS()
connect93 = x3d.connect()
connect93.setNodeField("children")
connect93.setProtoField("children")

IS92.addConnect(connect93)
connect94 = x3d.connect()
connect94.setNodeField("center")
connect94.setProtoField("center")

IS92.addConnect(connect94)
connect95 = x3d.connect()
connect95.setNodeField("rotation")
connect95.setProtoField("rotation")

IS92.addConnect(connect95)
connect96 = x3d.connect()
connect96.setNodeField("scale")
connect96.setProtoField("scale")

IS92.addConnect(connect96)
connect97 = x3d.connect()
connect97.setNodeField("scaleOrientation")
connect97.setProtoField("scaleOrientation")

IS92.addConnect(connect97)
connect98 = x3d.connect()
connect98.setNodeField("translation")
connect98.setProtoField("translation")

IS92.addConnect(connect98)
connect99 = x3d.connect()
connect99.setNodeField("addChildren")
connect99.setProtoField("addChildren")

IS92.addConnect(connect99)
connect100 = x3d.connect()
connect100.setNodeField("removeChildren")
connect100.setProtoField("removeChildren")

IS92.addConnect(connect100)

Transform91.setIS(IS92)

ProtoBody90.addChildren(Transform91)

ProtoDeclare79.setProtoBody(ProtoBody90)

Scene4.addChildren(ProtoDeclare79)
ProtoInstance101 = x3d.ProtoInstance()
ProtoInstance101.setName("Humanoid")
ProtoInstance101.setDEF("humanoid_2")
fieldValue102 = x3d.fieldValue()
fieldValue102.setName("humanoidBody")
ProtoInstance103 = x3d.ProtoInstance()
ProtoInstance103.setName("Joint")
ProtoInstance103.setDEF("hanim_humanoid_root_2")
fieldValue104 = x3d.fieldValue()
fieldValue104.setName("stiffness")
fieldValue104.setValue("1 1 1")

ProtoInstance103.addFieldValue(fieldValue104)
fieldValue105 = x3d.fieldValue()
fieldValue105.setName("name")
fieldValue105.setValue("humanoid_root")

ProtoInstance103.addFieldValue(fieldValue105)
fieldValue106 = x3d.fieldValue()
fieldValue106.setName("center")
fieldValue106.setValue("0 0.824000000953674 0.0276999995112419")

ProtoInstance103.addFieldValue(fieldValue106)
fieldValue107 = x3d.fieldValue()
fieldValue107.setName("children")
ProtoInstance108 = x3d.ProtoInstance()
ProtoInstance108.setName("Joint")
ProtoInstance108.setDEF("hanim_sacroiliac_2")
fieldValue109 = x3d.fieldValue()
fieldValue109.setName("stiffness")
fieldValue109.setValue("1 1 1")

ProtoInstance108.addFieldValue(fieldValue109)
fieldValue110 = x3d.fieldValue()
fieldValue110.setName("name")
fieldValue110.setValue("sacroiliac")

ProtoInstance108.addFieldValue(fieldValue110)
fieldValue111 = x3d.fieldValue()
fieldValue111.setName("center")
fieldValue111.setValue("0 0.914900004863739 0.0015999999595806")

ProtoInstance108.addFieldValue(fieldValue111)
fieldValue112 = x3d.fieldValue()
fieldValue112.setName("children")
ProtoInstance113 = x3d.ProtoInstance()
ProtoInstance113.setName("Joint")
ProtoInstance113.setDEF("hanim_l_hip_2")
fieldValue114 = x3d.fieldValue()
fieldValue114.setName("stiffness")
fieldValue114.setValue("1 1 1")

ProtoInstance113.addFieldValue(fieldValue114)
fieldValue115 = x3d.fieldValue()
fieldValue115.setName("name")
fieldValue115.setValue("l_hip")

ProtoInstance113.addFieldValue(fieldValue115)
fieldValue116 = x3d.fieldValue()
fieldValue116.setName("center")
fieldValue116.setValue("0.0961000025272369 0.912400007247925 -0.0000999999974737875")

ProtoInstance113.addFieldValue(fieldValue116)
fieldValue117 = x3d.fieldValue()
fieldValue117.setName("children")
ProtoInstance118 = x3d.ProtoInstance()
ProtoInstance118.setName("Joint")
ProtoInstance118.setDEF("hanim_l_knee_2")
fieldValue119 = x3d.fieldValue()
fieldValue119.setName("stiffness")
fieldValue119.setValue("1 1 1")

ProtoInstance118.addFieldValue(fieldValue119)
fieldValue120 = x3d.fieldValue()
fieldValue120.setName("name")
fieldValue120.setValue("l_knee")

ProtoInstance118.addFieldValue(fieldValue120)
fieldValue121 = x3d.fieldValue()
fieldValue121.setName("center")
fieldValue121.setValue("0.104000002145767 0.486699998378754 0.030799999833107")

ProtoInstance118.addFieldValue(fieldValue121)
fieldValue122 = x3d.fieldValue()
fieldValue122.setName("children")
ProtoInstance123 = x3d.ProtoInstance()
ProtoInstance123.setName("Joint")
ProtoInstance123.setDEF("hanim_l_talocrural_2")
fieldValue124 = x3d.fieldValue()
fieldValue124.setName("stiffness")
fieldValue124.setValue("1 1 1")

ProtoInstance123.addFieldValue(fieldValue124)
fieldValue125 = x3d.fieldValue()
fieldValue125.setName("name")
fieldValue125.setValue("l_talocrural")

ProtoInstance123.addFieldValue(fieldValue125)
fieldValue126 = x3d.fieldValue()
fieldValue126.setName("center")
fieldValue126.setValue("0.110100001096725 0.0656000003218651 -0.0736000016331673")

ProtoInstance123.addFieldValue(fieldValue126)
fieldValue127 = x3d.fieldValue()
fieldValue127.setName("children")
ProtoInstance128 = x3d.ProtoInstance()
ProtoInstance128.setName("Joint")
ProtoInstance128.setDEF("hanim_l_tarsotarsal_interphalangeal__2")
fieldValue129 = x3d.fieldValue()
fieldValue129.setName("stiffness")
fieldValue129.setValue("1 1 1")

ProtoInstance128.addFieldValue(fieldValue129)
fieldValue130 = x3d.fieldValue()
fieldValue130.setName("name")
fieldValue130.setValue("l_tarsotarsal_interphalangeal_")

ProtoInstance128.addFieldValue(fieldValue130)
fieldValue131 = x3d.fieldValue()
fieldValue131.setName("center")
fieldValue131.setValue("0.108599998056889 0.0000999999974737875 -0.0368000008165836")

ProtoInstance128.addFieldValue(fieldValue131)
fieldValue132 = x3d.fieldValue()
fieldValue132.setName("children")
ProtoInstance133 = x3d.ProtoInstance()
ProtoInstance133.setName("Joint")
ProtoInstance133.setDEF("hanim_l_metatarsophalangeal__2")
fieldValue134 = x3d.fieldValue()
fieldValue134.setName("stiffness")
fieldValue134.setValue("1 1 1")

ProtoInstance133.addFieldValue(fieldValue134)
fieldValue135 = x3d.fieldValue()
fieldValue135.setName("name")
fieldValue135.setValue("l_metatarsophalangeal_")

ProtoInstance133.addFieldValue(fieldValue135)
fieldValue136 = x3d.fieldValue()
fieldValue136.setName("center")
fieldValue136.setValue("0.108599998056889 0.0000999999974737875 0.0368000008165836")

ProtoInstance133.addFieldValue(fieldValue136)
fieldValue137 = x3d.fieldValue()
fieldValue137.setName("children")
ProtoInstance138 = x3d.ProtoInstance()
ProtoInstance138.setName("Joint")
ProtoInstance138.setDEF("hanim_l_tarsal_interphalangeal__2")
fieldValue139 = x3d.fieldValue()
fieldValue139.setName("stiffness")
fieldValue139.setValue("1 1 1")

ProtoInstance138.addFieldValue(fieldValue139)
fieldValue140 = x3d.fieldValue()
fieldValue140.setName("name")
fieldValue140.setValue("l_tarsal_interphalangeal_")

ProtoInstance138.addFieldValue(fieldValue140)
fieldValue141 = x3d.fieldValue()
fieldValue141.setName("center")
fieldValue141.setValue("0.108599998056889 0 0.0762000009417534")

ProtoInstance138.addFieldValue(fieldValue141)
fieldValue142 = x3d.fieldValue()
fieldValue142.setName("children")
ProtoInstance143 = x3d.ProtoInstance()
ProtoInstance143.setName("Segment")
ProtoInstance143.setDEF("hanim_l_tarsal_distal_phalanx2")
fieldValue144 = x3d.fieldValue()
fieldValue144.setName("name")
fieldValue144.setValue("l_tarsal_distal_phalanx_1")

ProtoInstance143.addFieldValue(fieldValue144)
fieldValue145 = x3d.fieldValue()
fieldValue145.setName("children")
ProtoInstance146 = x3d.ProtoInstance()
ProtoInstance146.setName("Site")
ProtoInstance146.setDEF("hanim_l_tarsal_distal_phalanx_1_tip_2")
fieldValue147 = x3d.fieldValue()
fieldValue147.setName("name")
fieldValue147.setValue("l_tarsal_distal_phalanx_1_tip")

ProtoInstance146.addFieldValue(fieldValue147)
fieldValue148 = x3d.fieldValue()
fieldValue148.setName("translation")
fieldValue148.setValue("0.135399997234344 0.0015999999595806 0.147599995136261")

ProtoInstance146.addFieldValue(fieldValue148)

fieldValue145.addChildren(ProtoInstance146)
ProtoInstance149 = x3d.ProtoInstance()
ProtoInstance149.setName("Site")
ProtoInstance149.setDEF("hanim_l_tarsal_interphalangeal_phalanx6")
fieldValue150 = x3d.fieldValue()
fieldValue150.setName("name")
fieldValue150.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance149.addFieldValue(fieldValue150)
fieldValue151 = x3d.fieldValue()
fieldValue151.setName("translation")
fieldValue151.setValue("0.182500004768372 0.00700000021606684 0.092799998819828")

ProtoInstance149.addFieldValue(fieldValue151)

fieldValue145.addChildren(ProtoInstance149)
ProtoInstance152 = x3d.ProtoInstance()
ProtoInstance152.setName("Site")
ProtoInstance152.setDEF("hanim_l_tarsal_distal_phalanx3")
fieldValue153 = x3d.fieldValue()
fieldValue153.setName("name")
fieldValue153.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance152.addFieldValue(fieldValue153)
fieldValue154 = x3d.fieldValue()
fieldValue154.setName("translation")
fieldValue154.setValue("0.119499996304512 0.00789999961853027 0.143299996852875")

ProtoInstance152.addFieldValue(fieldValue154)

fieldValue145.addChildren(ProtoInstance152)

ProtoInstance143.addFieldValue(fieldValue145)

fieldValue142.addChildren(ProtoInstance143)

ProtoInstance138.addFieldValue(fieldValue142)

fieldValue137.addChildren(ProtoInstance138)
ProtoInstance155 = x3d.ProtoInstance()
ProtoInstance155.setName("Segment")
ProtoInstance155.setDEF("hanim_l_middistal_2")
fieldValue156 = x3d.fieldValue()
fieldValue156.setName("name")
fieldValue156.setValue("l_middistal")

ProtoInstance155.addFieldValue(fieldValue156)
fieldValue157 = x3d.fieldValue()
fieldValue157.setName("children")
ProtoInstance158 = x3d.ProtoInstance()
ProtoInstance158.setName("Site")
ProtoInstance158.setDEF("hanim_l_tarsal_interphalangeal_phalanx2")
fieldValue159 = x3d.fieldValue()
fieldValue159.setName("name")
fieldValue159.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance158.addFieldValue(fieldValue159)
fieldValue160 = x3d.fieldValue()
fieldValue160.setName("translation")
fieldValue160.setValue("0.0816000029444695 0.023199999704957 0.0105999996885657")

ProtoInstance158.addFieldValue(fieldValue160)

fieldValue157.addChildren(ProtoInstance158)

ProtoInstance155.addFieldValue(fieldValue157)

fieldValue137.addChildren(ProtoInstance155)

ProtoInstance133.addFieldValue(fieldValue137)

fieldValue132.addChildren(ProtoInstance133)
ProtoInstance161 = x3d.ProtoInstance()
ProtoInstance161.setName("Segment")
ProtoInstance161.setDEF("hanim_l_midproximal_2")
fieldValue162 = x3d.fieldValue()
fieldValue162.setName("name")
fieldValue162.setValue("l_midproximal")

ProtoInstance161.addFieldValue(fieldValue162)

fieldValue132.addChildren(ProtoInstance161)

ProtoInstance128.addFieldValue(fieldValue132)

fieldValue127.addChildren(ProtoInstance128)
ProtoInstance163 = x3d.ProtoInstance()
ProtoInstance163.setName("Segment")
ProtoInstance163.setDEF("hanim_l_hindfoot_2")
fieldValue164 = x3d.fieldValue()
fieldValue164.setName("name")
fieldValue164.setValue("l_hindfoot")

ProtoInstance163.addFieldValue(fieldValue164)
fieldValue165 = x3d.fieldValue()
fieldValue165.setName("children")
ProtoInstance166 = x3d.ProtoInstance()
ProtoInstance166.setName("Site")
ProtoInstance166.setDEF("hanim_l_lateral_malleolus_2")
fieldValue167 = x3d.fieldValue()
fieldValue167.setName("name")
fieldValue167.setValue("l_lateral_malleolus")

ProtoInstance166.addFieldValue(fieldValue167)
fieldValue168 = x3d.fieldValue()
fieldValue168.setName("translation")
fieldValue168.setValue("0.130799993872643 0.0597000010311604 -0.103200003504753")

ProtoInstance166.addFieldValue(fieldValue168)

fieldValue165.addChildren(ProtoInstance166)
ProtoInstance169 = x3d.ProtoInstance()
ProtoInstance169.setName("Site")
ProtoInstance169.setDEF("hanim_l_medial_malleolus_2")
fieldValue170 = x3d.fieldValue()
fieldValue170.setName("name")
fieldValue170.setValue("l_medial_malleolus")

ProtoInstance169.addFieldValue(fieldValue170)
fieldValue171 = x3d.fieldValue()
fieldValue171.setName("translation")
fieldValue171.setValue("0.0890000015497208 0.0715999975800514 -0.0881000012159348")

ProtoInstance169.addFieldValue(fieldValue171)

fieldValue165.addChildren(ProtoInstance169)
ProtoInstance172 = x3d.ProtoInstance()
ProtoInstance172.setName("Site")
ProtoInstance172.setDEF("hanim_l_sphyrion_2")
fieldValue173 = x3d.fieldValue()
fieldValue173.setName("name")
fieldValue173.setValue("l_sphyrion")

ProtoInstance172.addFieldValue(fieldValue173)
fieldValue174 = x3d.fieldValue()
fieldValue174.setName("translation")
fieldValue174.setValue("0.0890000015497208 0.0575000010430813 -0.0943000018596649")

ProtoInstance172.addFieldValue(fieldValue174)

fieldValue165.addChildren(ProtoInstance172)
ProtoInstance175 = x3d.ProtoInstance()
ProtoInstance175.setName("Site")
ProtoInstance175.setDEF("hanim_l_calcaneus_posterior_2")
fieldValue176 = x3d.fieldValue()
fieldValue176.setName("name")
fieldValue176.setValue("l_calcaneus_posterior")

ProtoInstance175.addFieldValue(fieldValue176)
fieldValue177 = x3d.fieldValue()
fieldValue177.setName("translation")
fieldValue177.setValue("0.09740000218153 0.025900000706315 -0.11710000038147")

ProtoInstance175.addFieldValue(fieldValue177)

fieldValue165.addChildren(ProtoInstance175)

ProtoInstance163.addFieldValue(fieldValue165)

fieldValue127.addChildren(ProtoInstance163)

ProtoInstance123.addFieldValue(fieldValue127)

fieldValue122.addChildren(ProtoInstance123)
ProtoInstance178 = x3d.ProtoInstance()
ProtoInstance178.setName("Segment")
ProtoInstance178.setDEF("hanim_l_calf_2")
fieldValue179 = x3d.fieldValue()
fieldValue179.setName("name")
fieldValue179.setValue("l_calf")

ProtoInstance178.addFieldValue(fieldValue179)

fieldValue122.addChildren(ProtoInstance178)

ProtoInstance118.addFieldValue(fieldValue122)

fieldValue117.addChildren(ProtoInstance118)
ProtoInstance180 = x3d.ProtoInstance()
ProtoInstance180.setName("Segment")
ProtoInstance180.setDEF("hanim_l_thigh_2")
fieldValue181 = x3d.fieldValue()
fieldValue181.setName("name")
fieldValue181.setValue("l_thigh")

ProtoInstance180.addFieldValue(fieldValue181)
fieldValue182 = x3d.fieldValue()
fieldValue182.setName("children")
ProtoInstance183 = x3d.ProtoInstance()
ProtoInstance183.setName("Site")
ProtoInstance183.setDEF("hanim_l_knee_crease_2")
fieldValue184 = x3d.fieldValue()
fieldValue184.setName("name")
fieldValue184.setValue("l_knee_crease")

ProtoInstance183.addFieldValue(fieldValue184)
fieldValue185 = x3d.fieldValue()
fieldValue185.setName("translation")
fieldValue185.setValue("0.0992999970912933 0.488099992275238 -0.0308999996632338")

ProtoInstance183.addFieldValue(fieldValue185)

fieldValue182.addChildren(ProtoInstance183)
ProtoInstance186 = x3d.ProtoInstance()
ProtoInstance186.setName("Site")
ProtoInstance186.setDEF("hanim_l_femoral_lateral_epicondyles_2")
fieldValue187 = x3d.fieldValue()
fieldValue187.setName("name")
fieldValue187.setValue("l_femoral_lateral_epicondyles")

ProtoInstance186.addFieldValue(fieldValue187)
fieldValue188 = x3d.fieldValue()
fieldValue188.setName("translation")
fieldValue188.setValue("0.159799993038177 0.496699988842011 0.0296999998390675")

ProtoInstance186.addFieldValue(fieldValue188)

fieldValue182.addChildren(ProtoInstance186)
ProtoInstance189 = x3d.ProtoInstance()
ProtoInstance189.setName("Site")
ProtoInstance189.setDEF("hanim_l_femoral_medial_epicondyles_2")
fieldValue190 = x3d.fieldValue()
fieldValue190.setName("name")
fieldValue190.setValue("l_femoral_lateral_epicondyles")

ProtoInstance189.addFieldValue(fieldValue190)
fieldValue191 = x3d.fieldValue()
fieldValue191.setName("translation")
fieldValue191.setValue("0.0397999994456768 0.494599997997284 0.0303000006824732")

ProtoInstance189.addFieldValue(fieldValue191)

fieldValue182.addChildren(ProtoInstance189)

ProtoInstance180.addFieldValue(fieldValue182)

fieldValue117.addChildren(ProtoInstance180)

ProtoInstance113.addFieldValue(fieldValue117)

fieldValue112.addChildren(ProtoInstance113)
ProtoInstance192 = x3d.ProtoInstance()
ProtoInstance192.setName("Joint")
ProtoInstance192.setDEF("hanim_r_hip_2")
fieldValue193 = x3d.fieldValue()
fieldValue193.setName("stiffness")
fieldValue193.setValue("1 1 1")

ProtoInstance192.addFieldValue(fieldValue193)
fieldValue194 = x3d.fieldValue()
fieldValue194.setName("name")
fieldValue194.setValue("r_hip")

ProtoInstance192.addFieldValue(fieldValue194)
fieldValue195 = x3d.fieldValue()
fieldValue195.setName("center")
fieldValue195.setValue("-0.0949999988079071 0.917100012302399 0.00289999996311963")

ProtoInstance192.addFieldValue(fieldValue195)
fieldValue196 = x3d.fieldValue()
fieldValue196.setName("children")
ProtoInstance197 = x3d.ProtoInstance()
ProtoInstance197.setName("Joint")
ProtoInstance197.setDEF("hanim_r_knee_2")
fieldValue198 = x3d.fieldValue()
fieldValue198.setName("stiffness")
fieldValue198.setValue("1 1 1")

ProtoInstance197.addFieldValue(fieldValue198)
fieldValue199 = x3d.fieldValue()
fieldValue199.setName("name")
fieldValue199.setValue("r_knee")

ProtoInstance197.addFieldValue(fieldValue199)
fieldValue200 = x3d.fieldValue()
fieldValue200.setName("center")
fieldValue200.setValue("-0.0866999998688698 0.491299986839294 0.0318000018596649")

ProtoInstance197.addFieldValue(fieldValue200)
fieldValue201 = x3d.fieldValue()
fieldValue201.setName("children")
ProtoInstance202 = x3d.ProtoInstance()
ProtoInstance202.setName("Joint")
ProtoInstance202.setDEF("hanim_r_talocrural_2")
fieldValue203 = x3d.fieldValue()
fieldValue203.setName("stiffness")
fieldValue203.setValue("1 1 1")

ProtoInstance202.addFieldValue(fieldValue203)
fieldValue204 = x3d.fieldValue()
fieldValue204.setName("name")
fieldValue204.setValue("r_talocrural")

ProtoInstance202.addFieldValue(fieldValue204)
fieldValue205 = x3d.fieldValue()
fieldValue205.setName("center")
fieldValue205.setValue("-0.0800999999046326 0.0711999982595444 -0.0766000002622604")

ProtoInstance202.addFieldValue(fieldValue205)
fieldValue206 = x3d.fieldValue()
fieldValue206.setName("children")
ProtoInstance207 = x3d.ProtoInstance()
ProtoInstance207.setName("Joint")
ProtoInstance207.setDEF("hanim_r_tarsotarsal_interphalangeal__2")
fieldValue208 = x3d.fieldValue()
fieldValue208.setName("stiffness")
fieldValue208.setValue("1 1 1")

ProtoInstance207.addFieldValue(fieldValue208)
fieldValue209 = x3d.fieldValue()
fieldValue209.setName("name")
fieldValue209.setValue("r_tarsotarsal_interphalangeal_")

ProtoInstance207.addFieldValue(fieldValue209)
fieldValue210 = x3d.fieldValue()
fieldValue210.setName("center")
fieldValue210.setValue("-0.0800999999046326 0 -0.0368000008165836")

ProtoInstance207.addFieldValue(fieldValue210)
fieldValue211 = x3d.fieldValue()
fieldValue211.setName("children")
ProtoInstance212 = x3d.ProtoInstance()
ProtoInstance212.setName("Joint")
ProtoInstance212.setDEF("hanim_r_metatarsophalangeal__2")
fieldValue213 = x3d.fieldValue()
fieldValue213.setName("stiffness")
fieldValue213.setValue("1 1 1")

ProtoInstance212.addFieldValue(fieldValue213)
fieldValue214 = x3d.fieldValue()
fieldValue214.setName("name")
fieldValue214.setValue("r_metatarsophalangeal_")

ProtoInstance212.addFieldValue(fieldValue214)
fieldValue215 = x3d.fieldValue()
fieldValue215.setName("center")
fieldValue215.setValue("-0.0800999999046326 0 0.0368000008165836")

ProtoInstance212.addFieldValue(fieldValue215)
fieldValue216 = x3d.fieldValue()
fieldValue216.setName("children")
ProtoInstance217 = x3d.ProtoInstance()
ProtoInstance217.setName("Joint")
ProtoInstance217.setDEF("hanim_r_tarsal_interphalangeal__2")
fieldValue218 = x3d.fieldValue()
fieldValue218.setName("stiffness")
fieldValue218.setValue("1 1 1")

ProtoInstance217.addFieldValue(fieldValue218)
fieldValue219 = x3d.fieldValue()
fieldValue219.setName("name")
fieldValue219.setValue("r_tarsal_interphalangeal_")

ProtoInstance217.addFieldValue(fieldValue219)
fieldValue220 = x3d.fieldValue()
fieldValue220.setName("center")
fieldValue220.setValue("-0.0800999999046326 0.00389999989420176 0.0732000023126602")

ProtoInstance217.addFieldValue(fieldValue220)
fieldValue221 = x3d.fieldValue()
fieldValue221.setName("children")
ProtoInstance222 = x3d.ProtoInstance()
ProtoInstance222.setName("Segment")
ProtoInstance222.setDEF("hanim_r_tarsal_distal_phalanx2")
fieldValue223 = x3d.fieldValue()
fieldValue223.setName("name")
fieldValue223.setValue("r_tarsal_distal_phalanx_1")

ProtoInstance222.addFieldValue(fieldValue223)
fieldValue224 = x3d.fieldValue()
fieldValue224.setName("children")
ProtoInstance225 = x3d.ProtoInstance()
ProtoInstance225.setName("Site")
ProtoInstance225.setDEF("hanim_r_tarsal_distal_phalanx_1_tip_2")
fieldValue226 = x3d.fieldValue()
fieldValue226.setName("name")
fieldValue226.setValue("r_tarsal_distal_phalanx_1_tip")

ProtoInstance225.addFieldValue(fieldValue226)
fieldValue227 = x3d.fieldValue()
fieldValue227.setName("translation")
fieldValue227.setValue("-0.104299999773502 -0.0227000005543232 0.144999995827675")

ProtoInstance225.addFieldValue(fieldValue227)

fieldValue224.addChildren(ProtoInstance225)
ProtoInstance228 = x3d.ProtoInstance()
ProtoInstance228.setName("Site")
ProtoInstance228.setDEF("hanim_r_tarsal_interphalangeal_phalanx6")
fieldValue229 = x3d.fieldValue()
fieldValue229.setName("name")
fieldValue229.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance228.addFieldValue(fieldValue229)
fieldValue230 = x3d.fieldValue()
fieldValue230.setName("translation")
fieldValue230.setValue("-0.152300000190735 0.0165999997407198 0.0895000025629997")

ProtoInstance228.addFieldValue(fieldValue230)

fieldValue224.addChildren(ProtoInstance228)
ProtoInstance231 = x3d.ProtoInstance()
ProtoInstance231.setName("Site")
ProtoInstance231.setDEF("hanim_r_tarsal_distal_phalanx3")
fieldValue232 = x3d.fieldValue()
fieldValue232.setName("name")
fieldValue232.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance231.addFieldValue(fieldValue232)
fieldValue233 = x3d.fieldValue()
fieldValue233.setName("translation")
fieldValue233.setValue("-0.088299997150898 0.013399999588728 0.138300001621246")

ProtoInstance231.addFieldValue(fieldValue233)

fieldValue224.addChildren(ProtoInstance231)

ProtoInstance222.addFieldValue(fieldValue224)

fieldValue221.addChildren(ProtoInstance222)

ProtoInstance217.addFieldValue(fieldValue221)

fieldValue216.addChildren(ProtoInstance217)
ProtoInstance234 = x3d.ProtoInstance()
ProtoInstance234.setName("Segment")
ProtoInstance234.setDEF("hanim_r_middistal_2")
fieldValue235 = x3d.fieldValue()
fieldValue235.setName("name")
fieldValue235.setValue("r_middistal")

ProtoInstance234.addFieldValue(fieldValue235)
fieldValue236 = x3d.fieldValue()
fieldValue236.setName("children")
ProtoInstance237 = x3d.ProtoInstance()
ProtoInstance237.setName("Site")
ProtoInstance237.setDEF("hanim_r_tarsal_interphalangeal_phalanx2")
fieldValue238 = x3d.fieldValue()
fieldValue238.setName("name")
fieldValue238.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance237.addFieldValue(fieldValue238)
fieldValue239 = x3d.fieldValue()
fieldValue239.setName("translation")
fieldValue239.setValue("-0.0520999990403652 0.0260000005364418 0.012699999846518")

ProtoInstance237.addFieldValue(fieldValue239)

fieldValue236.addChildren(ProtoInstance237)

ProtoInstance234.addFieldValue(fieldValue236)

fieldValue216.addChildren(ProtoInstance234)

ProtoInstance212.addFieldValue(fieldValue216)

fieldValue211.addChildren(ProtoInstance212)
ProtoInstance240 = x3d.ProtoInstance()
ProtoInstance240.setName("Segment")
ProtoInstance240.setDEF("hanim_r_midproximal_2")
fieldValue241 = x3d.fieldValue()
fieldValue241.setName("name")
fieldValue241.setValue("r_midproximal")

ProtoInstance240.addFieldValue(fieldValue241)

fieldValue211.addChildren(ProtoInstance240)

ProtoInstance207.addFieldValue(fieldValue211)

fieldValue206.addChildren(ProtoInstance207)
ProtoInstance242 = x3d.ProtoInstance()
ProtoInstance242.setName("Segment")
ProtoInstance242.setDEF("hanim_r_hindfoot_2")
fieldValue243 = x3d.fieldValue()
fieldValue243.setName("name")
fieldValue243.setValue("r_hindfoot")

ProtoInstance242.addFieldValue(fieldValue243)
fieldValue244 = x3d.fieldValue()
fieldValue244.setName("children")
ProtoInstance245 = x3d.ProtoInstance()
ProtoInstance245.setName("Site")
ProtoInstance245.setDEF("hanim_r_lateral_malleolus_2")
fieldValue246 = x3d.fieldValue()
fieldValue246.setName("name")
fieldValue246.setValue("r_lateral_malleolus")

ProtoInstance245.addFieldValue(fieldValue246)
fieldValue247 = x3d.fieldValue()
fieldValue247.setName("translation")
fieldValue247.setValue("-0.100599996745586 0.0658000037074089 -0.107500001788139")

ProtoInstance245.addFieldValue(fieldValue247)

fieldValue244.addChildren(ProtoInstance245)
ProtoInstance248 = x3d.ProtoInstance()
ProtoInstance248.setName("Site")
ProtoInstance248.setDEF("hanim_r_medial_malleolus_2")
fieldValue249 = x3d.fieldValue()
fieldValue249.setName("name")
fieldValue249.setValue("r_medial_malleolus")

ProtoInstance248.addFieldValue(fieldValue249)
fieldValue250 = x3d.fieldValue()
fieldValue250.setName("translation")
fieldValue250.setValue("-0.0590999983251095 0.0759999975562096 -0.092799998819828")

ProtoInstance248.addFieldValue(fieldValue250)

fieldValue244.addChildren(ProtoInstance248)
ProtoInstance251 = x3d.ProtoInstance()
ProtoInstance251.setName("Site")
ProtoInstance251.setDEF("hanim_r_sphyrion_2")
fieldValue252 = x3d.fieldValue()
fieldValue252.setName("name")
fieldValue252.setValue("r_sphyrion")

ProtoInstance251.addFieldValue(fieldValue252)
fieldValue253 = x3d.fieldValue()
fieldValue253.setName("translation")
fieldValue253.setValue("-0.0603000000119209 0.0610000006854534 -0.100199997425079")

ProtoInstance251.addFieldValue(fieldValue253)

fieldValue244.addChildren(ProtoInstance251)
ProtoInstance254 = x3d.ProtoInstance()
ProtoInstance254.setName("Site")
ProtoInstance254.setDEF("hanim_r_calcaneus_posterior_2")
fieldValue255 = x3d.fieldValue()
fieldValue255.setName("name")
fieldValue255.setValue("r_calcaneus_posterior")

ProtoInstance254.addFieldValue(fieldValue255)
fieldValue256 = x3d.fieldValue()
fieldValue256.setName("translation")
fieldValue256.setValue("-0.0692000016570091 0.0296999998390675 -0.122100003063679")

ProtoInstance254.addFieldValue(fieldValue256)

fieldValue244.addChildren(ProtoInstance254)

ProtoInstance242.addFieldValue(fieldValue244)

fieldValue206.addChildren(ProtoInstance242)

ProtoInstance202.addFieldValue(fieldValue206)

fieldValue201.addChildren(ProtoInstance202)
ProtoInstance257 = x3d.ProtoInstance()
ProtoInstance257.setName("Segment")
ProtoInstance257.setDEF("hanim_r_calf_2")
fieldValue258 = x3d.fieldValue()
fieldValue258.setName("name")
fieldValue258.setValue("r_calf")

ProtoInstance257.addFieldValue(fieldValue258)

fieldValue201.addChildren(ProtoInstance257)

ProtoInstance197.addFieldValue(fieldValue201)

fieldValue196.addChildren(ProtoInstance197)
ProtoInstance259 = x3d.ProtoInstance()
ProtoInstance259.setName("Segment")
ProtoInstance259.setDEF("hanim_r_thigh_2")
fieldValue260 = x3d.fieldValue()
fieldValue260.setName("name")
fieldValue260.setValue("r_thigh")

ProtoInstance259.addFieldValue(fieldValue260)
fieldValue261 = x3d.fieldValue()
fieldValue261.setName("children")
ProtoInstance262 = x3d.ProtoInstance()
ProtoInstance262.setName("Site")
ProtoInstance262.setDEF("hanim_r_knee_crease_2")
fieldValue263 = x3d.fieldValue()
fieldValue263.setName("name")
fieldValue263.setValue("r_knee_crease")

ProtoInstance262.addFieldValue(fieldValue263)
fieldValue264 = x3d.fieldValue()
fieldValue264.setName("translation")
fieldValue264.setValue("-0.0825000032782555 0.4932000041008 -0.032600000500679")

ProtoInstance262.addFieldValue(fieldValue264)

fieldValue261.addChildren(ProtoInstance262)
ProtoInstance265 = x3d.ProtoInstance()
ProtoInstance265.setName("Site")
ProtoInstance265.setDEF("hanim_r_femoral_lateral_epicondyles_2")
fieldValue266 = x3d.fieldValue()
fieldValue266.setName("name")
fieldValue266.setValue("r_femoral_lateral_epicondyles")

ProtoInstance265.addFieldValue(fieldValue266)
fieldValue267 = x3d.fieldValue()
fieldValue267.setName("translation")
fieldValue267.setValue("-0.142100006341934 0.499199986457825 0.0309999994933605")

ProtoInstance265.addFieldValue(fieldValue267)

fieldValue261.addChildren(ProtoInstance265)
ProtoInstance268 = x3d.ProtoInstance()
ProtoInstance268.setName("Site")
ProtoInstance268.setDEF("hanim_r_femoral_medial_epicondyles_2")
fieldValue269 = x3d.fieldValue()
fieldValue269.setName("name")
fieldValue269.setValue("r_femoral_lateral_epicondyles")

ProtoInstance268.addFieldValue(fieldValue269)
fieldValue270 = x3d.fieldValue()
fieldValue270.setName("translation")
fieldValue270.setValue("-0.0220999997109175 0.501399993896484 0.0288999993354082")

ProtoInstance268.addFieldValue(fieldValue270)

fieldValue261.addChildren(ProtoInstance268)

ProtoInstance259.addFieldValue(fieldValue261)

fieldValue196.addChildren(ProtoInstance259)

ProtoInstance192.addFieldValue(fieldValue196)

fieldValue112.addChildren(ProtoInstance192)
ProtoInstance271 = x3d.ProtoInstance()
ProtoInstance271.setName("Segment")
ProtoInstance271.setDEF("hanim_pelvis_2")
fieldValue272 = x3d.fieldValue()
fieldValue272.setName("name")
fieldValue272.setValue("pelvis")

ProtoInstance271.addFieldValue(fieldValue272)
fieldValue273 = x3d.fieldValue()
fieldValue273.setName("children")
ProtoInstance274 = x3d.ProtoInstance()
ProtoInstance274.setName("Site")
ProtoInstance274.setDEF("hanim_r_iliocristale_2")
fieldValue275 = x3d.fieldValue()
fieldValue275.setName("name")
fieldValue275.setValue("r_iliocristale")

ProtoInstance274.addFieldValue(fieldValue275)
fieldValue276 = x3d.fieldValue()
fieldValue276.setName("translation")
fieldValue276.setValue("-0.152500003576279 1.0628000497818 0.00350000010803342")

ProtoInstance274.addFieldValue(fieldValue276)

fieldValue273.addChildren(ProtoInstance274)
ProtoInstance277 = x3d.ProtoInstance()
ProtoInstance277.setName("Site")
ProtoInstance277.setDEF("hanim_r_trochanterion_2")
fieldValue278 = x3d.fieldValue()
fieldValue278.setName("name")
fieldValue278.setValue("r_trochanterion")

ProtoInstance277.addFieldValue(fieldValue278)
fieldValue279 = x3d.fieldValue()
fieldValue279.setName("translation")
fieldValue279.setValue("-0.16889999806881 0.841899991035461 0.0351999998092651")

ProtoInstance277.addFieldValue(fieldValue279)

fieldValue273.addChildren(ProtoInstance277)
ProtoInstance280 = x3d.ProtoInstance()
ProtoInstance280.setName("Site")
ProtoInstance280.setDEF("hanim_l_iliocristale_2")
fieldValue281 = x3d.fieldValue()
fieldValue281.setName("name")
fieldValue281.setValue("l_iliocristale")

ProtoInstance280.addFieldValue(fieldValue281)
fieldValue282 = x3d.fieldValue()
fieldValue282.setName("translation")
fieldValue282.setValue("0.161200001835823 1.05369997024536 0.0007999999797903")

ProtoInstance280.addFieldValue(fieldValue282)

fieldValue273.addChildren(ProtoInstance280)
ProtoInstance283 = x3d.ProtoInstance()
ProtoInstance283.setName("Site")
ProtoInstance283.setDEF("hanim_l_trochanterion_2")
fieldValue284 = x3d.fieldValue()
fieldValue284.setName("name")
fieldValue284.setValue("l_trochanterion")

ProtoInstance283.addFieldValue(fieldValue284)
fieldValue285 = x3d.fieldValue()
fieldValue285.setName("translation")
fieldValue285.setValue("0.167699992656708 0.833599984645844 0.0303000006824732")

ProtoInstance283.addFieldValue(fieldValue285)

fieldValue273.addChildren(ProtoInstance283)
ProtoInstance286 = x3d.ProtoInstance()
ProtoInstance286.setName("Site")
ProtoInstance286.setDEF("hanim_r_asis_2")
fieldValue287 = x3d.fieldValue()
fieldValue287.setName("name")
fieldValue287.setValue("r_asis")

ProtoInstance286.addFieldValue(fieldValue287)
fieldValue288 = x3d.fieldValue()
fieldValue288.setName("translation")
fieldValue288.setValue("-0.088699996471405 1.00209999084473 0.111199997365475")

ProtoInstance286.addFieldValue(fieldValue288)

fieldValue273.addChildren(ProtoInstance286)
ProtoInstance289 = x3d.ProtoInstance()
ProtoInstance289.setName("Site")
ProtoInstance289.setDEF("hanim_l_asis_2")
fieldValue290 = x3d.fieldValue()
fieldValue290.setName("name")
fieldValue290.setValue("l_asis")

ProtoInstance289.addFieldValue(fieldValue290)
fieldValue291 = x3d.fieldValue()
fieldValue291.setName("translation")
fieldValue291.setValue("0.0925000011920929 0.998300015926361 0.105200000107288")

ProtoInstance289.addFieldValue(fieldValue291)

fieldValue273.addChildren(ProtoInstance289)
ProtoInstance292 = x3d.ProtoInstance()
ProtoInstance292.setName("Site")
ProtoInstance292.setDEF("hanim_r_psis_2")
fieldValue293 = x3d.fieldValue()
fieldValue293.setName("name")
fieldValue293.setValue("r_psis")

ProtoInstance292.addFieldValue(fieldValue293)
fieldValue294 = x3d.fieldValue()
fieldValue294.setName("translation")
fieldValue294.setValue("-0.0715999975800514 1.01900005340576 -0.113799996674061")

ProtoInstance292.addFieldValue(fieldValue294)

fieldValue273.addChildren(ProtoInstance292)
ProtoInstance295 = x3d.ProtoInstance()
ProtoInstance295.setName("Site")
ProtoInstance295.setDEF("hanim_l_psis_2")
fieldValue296 = x3d.fieldValue()
fieldValue296.setName("name")
fieldValue296.setValue("l_psis")

ProtoInstance295.addFieldValue(fieldValue296)
fieldValue297 = x3d.fieldValue()
fieldValue297.setName("translation")
fieldValue297.setValue("0.0773999989032745 1.01900005340576 -0.115099996328354")

ProtoInstance295.addFieldValue(fieldValue297)

fieldValue273.addChildren(ProtoInstance295)
ProtoInstance298 = x3d.ProtoInstance()
ProtoInstance298.setName("Site")
ProtoInstance298.setDEF("hanim_crotch_2")
fieldValue299 = x3d.fieldValue()
fieldValue299.setName("name")
fieldValue299.setValue("crotch")

ProtoInstance298.addFieldValue(fieldValue299)
fieldValue300 = x3d.fieldValue()
fieldValue300.setName("translation")
fieldValue300.setValue("0.00340000004507601 0.826600015163422 0.0256999991834164")

ProtoInstance298.addFieldValue(fieldValue300)

fieldValue273.addChildren(ProtoInstance298)

ProtoInstance271.addFieldValue(fieldValue273)

fieldValue112.addChildren(ProtoInstance271)

ProtoInstance108.addFieldValue(fieldValue112)

fieldValue107.addChildren(ProtoInstance108)
ProtoInstance301 = x3d.ProtoInstance()
ProtoInstance301.setName("Joint")
ProtoInstance301.setDEF("hanim_vl5_2")
fieldValue302 = x3d.fieldValue()
fieldValue302.setName("stiffness")
fieldValue302.setValue("1 1 1")

ProtoInstance301.addFieldValue(fieldValue302)
fieldValue303 = x3d.fieldValue()
fieldValue303.setName("name")
fieldValue303.setValue("vl5")

ProtoInstance301.addFieldValue(fieldValue303)
fieldValue304 = x3d.fieldValue()
fieldValue304.setName("center")
fieldValue304.setValue("0.00279999990016222 1.05680000782013 -0.0776000022888184")

ProtoInstance301.addFieldValue(fieldValue304)
fieldValue305 = x3d.fieldValue()
fieldValue305.setName("children")
ProtoInstance306 = x3d.ProtoInstance()
ProtoInstance306.setName("Joint")
ProtoInstance306.setDEF("hanim_vl3_2")
fieldValue307 = x3d.fieldValue()
fieldValue307.setName("stiffness")
fieldValue307.setValue("1 1 1")

ProtoInstance306.addFieldValue(fieldValue307)
fieldValue308 = x3d.fieldValue()
fieldValue308.setName("name")
fieldValue308.setValue("vl3")

ProtoInstance306.addFieldValue(fieldValue308)
fieldValue309 = x3d.fieldValue()
fieldValue309.setName("center")
fieldValue309.setValue("0.00410000002011657 1.1275999546051 -0.0795999988913536")

ProtoInstance306.addFieldValue(fieldValue309)
fieldValue310 = x3d.fieldValue()
fieldValue310.setName("children")
ProtoInstance311 = x3d.ProtoInstance()
ProtoInstance311.setName("Joint")
ProtoInstance311.setDEF("hanim_vl1_2")
fieldValue312 = x3d.fieldValue()
fieldValue312.setName("stiffness")
fieldValue312.setValue("1 1 1")

ProtoInstance311.addFieldValue(fieldValue312)
fieldValue313 = x3d.fieldValue()
fieldValue313.setName("name")
fieldValue313.setValue("vl1")

ProtoInstance311.addFieldValue(fieldValue313)
fieldValue314 = x3d.fieldValue()
fieldValue314.setName("center")
fieldValue314.setValue("0.00480000022798777 1.19120001792908 -0.0804999992251396")

ProtoInstance311.addFieldValue(fieldValue314)
fieldValue315 = x3d.fieldValue()
fieldValue315.setName("children")
ProtoInstance316 = x3d.ProtoInstance()
ProtoInstance316.setName("Joint")
ProtoInstance316.setDEF("hanim_vt10_2")
fieldValue317 = x3d.fieldValue()
fieldValue317.setName("stiffness")
fieldValue317.setValue("1 1 1")

ProtoInstance316.addFieldValue(fieldValue317)
fieldValue318 = x3d.fieldValue()
fieldValue318.setName("name")
fieldValue318.setValue("vt10")

ProtoInstance316.addFieldValue(fieldValue318)
fieldValue319 = x3d.fieldValue()
fieldValue319.setName("center")
fieldValue319.setValue("0.00559999980032444 1.28480005264282 -0.0821999981999397")

ProtoInstance316.addFieldValue(fieldValue319)
fieldValue320 = x3d.fieldValue()
fieldValue320.setName("children")
ProtoInstance321 = x3d.ProtoInstance()
ProtoInstance321.setName("Joint")
ProtoInstance321.setDEF("hanim_vt6_2")
fieldValue322 = x3d.fieldValue()
fieldValue322.setName("stiffness")
fieldValue322.setValue("1 1 1")

ProtoInstance321.addFieldValue(fieldValue322)
fieldValue323 = x3d.fieldValue()
fieldValue323.setName("name")
fieldValue323.setValue("vt6")

ProtoInstance321.addFieldValue(fieldValue323)
fieldValue324 = x3d.fieldValue()
fieldValue324.setName("center")
fieldValue324.setValue("0.0059000002220273 1.38660001754761 -0.0799999982118607")

ProtoInstance321.addFieldValue(fieldValue324)
fieldValue325 = x3d.fieldValue()
fieldValue325.setName("children")
ProtoInstance326 = x3d.ProtoInstance()
ProtoInstance326.setName("Joint")
ProtoInstance326.setDEF("hanim_vt1_2")
fieldValue327 = x3d.fieldValue()
fieldValue327.setName("stiffness")
fieldValue327.setValue("1 1 1")

ProtoInstance326.addFieldValue(fieldValue327)
fieldValue328 = x3d.fieldValue()
fieldValue328.setName("name")
fieldValue328.setValue("vt1")

ProtoInstance326.addFieldValue(fieldValue328)
fieldValue329 = x3d.fieldValue()
fieldValue329.setName("center")
fieldValue329.setValue("0.00650000013411045 1.4951000213623 -0.0386999994516373")

ProtoInstance326.addFieldValue(fieldValue329)
fieldValue330 = x3d.fieldValue()
fieldValue330.setName("children")
ProtoInstance331 = x3d.ProtoInstance()
ProtoInstance331.setName("Joint")
ProtoInstance331.setDEF("hanim_vc4_2")
fieldValue332 = x3d.fieldValue()
fieldValue332.setName("stiffness")
fieldValue332.setValue("1 1 1")

ProtoInstance331.addFieldValue(fieldValue332)
fieldValue333 = x3d.fieldValue()
fieldValue333.setName("name")
fieldValue333.setValue("vc4")

ProtoInstance331.addFieldValue(fieldValue333)
fieldValue334 = x3d.fieldValue()
fieldValue334.setName("center")
fieldValue334.setValue("0.00659999996423721 1.56620001792908 -0.00839999970048666")

ProtoInstance331.addFieldValue(fieldValue334)
fieldValue335 = x3d.fieldValue()
fieldValue335.setName("children")
ProtoInstance336 = x3d.ProtoInstance()
ProtoInstance336.setName("Joint")
ProtoInstance336.setDEF("hanim_vc2_2")
fieldValue337 = x3d.fieldValue()
fieldValue337.setName("stiffness")
fieldValue337.setValue("1 1 1")

ProtoInstance336.addFieldValue(fieldValue337)
fieldValue338 = x3d.fieldValue()
fieldValue338.setName("name")
fieldValue338.setValue("vc2")

ProtoInstance336.addFieldValue(fieldValue338)
fieldValue339 = x3d.fieldValue()
fieldValue339.setName("center")
fieldValue339.setValue("0.00659999996423721 1.59280002117157 -0.0103000001981854")

ProtoInstance336.addFieldValue(fieldValue339)
fieldValue340 = x3d.fieldValue()
fieldValue340.setName("children")
ProtoInstance341 = x3d.ProtoInstance()
ProtoInstance341.setName("Joint")
ProtoInstance341.setDEF("hanim_skullbase_2")
fieldValue342 = x3d.fieldValue()
fieldValue342.setName("stiffness")
fieldValue342.setValue("1 1 1")

ProtoInstance341.addFieldValue(fieldValue342)
fieldValue343 = x3d.fieldValue()
fieldValue343.setName("name")
fieldValue343.setValue("skullbase")

ProtoInstance341.addFieldValue(fieldValue343)
fieldValue344 = x3d.fieldValue()
fieldValue344.setName("center")
fieldValue344.setValue("0.00439999997615814 1.62090003490448 0.0236000008881092")

ProtoInstance341.addFieldValue(fieldValue344)
fieldValue345 = x3d.fieldValue()
fieldValue345.setName("children")
ProtoInstance346 = x3d.ProtoInstance()
ProtoInstance346.setName("Segment")
ProtoInstance346.setDEF("hanim_skull_2")
fieldValue347 = x3d.fieldValue()
fieldValue347.setName("name")
fieldValue347.setValue("skull")

ProtoInstance346.addFieldValue(fieldValue347)
fieldValue348 = x3d.fieldValue()
fieldValue348.setName("children")
ProtoInstance349 = x3d.ProtoInstance()
ProtoInstance349.setName("Site")
ProtoInstance349.setDEF("hanim_skull_tip_2")
fieldValue350 = x3d.fieldValue()
fieldValue350.setName("name")
fieldValue350.setValue("skull_tip")

ProtoInstance349.addFieldValue(fieldValue350)
fieldValue351 = x3d.fieldValue()
fieldValue351.setName("translation")
fieldValue351.setValue("0.00499999988824129 1.75039994716644 0.00549999997019768")

ProtoInstance349.addFieldValue(fieldValue351)

fieldValue348.addChildren(ProtoInstance349)
ProtoInstance352 = x3d.ProtoInstance()
ProtoInstance352.setName("Site")
ProtoInstance352.setDEF("hanim_sellion_2")
fieldValue353 = x3d.fieldValue()
fieldValue353.setName("name")
fieldValue353.setValue("sellion")

ProtoInstance352.addFieldValue(fieldValue353)
fieldValue354 = x3d.fieldValue()
fieldValue354.setName("translation")
fieldValue354.setValue("0.00579999992623925 1.63160002231598 0.0851999968290329")

ProtoInstance352.addFieldValue(fieldValue354)

fieldValue348.addChildren(ProtoInstance352)
ProtoInstance355 = x3d.ProtoInstance()
ProtoInstance355.setName("Site")
ProtoInstance355.setDEF("hanim_r_infraorbitale_2")
fieldValue356 = x3d.fieldValue()
fieldValue356.setName("name")
fieldValue356.setValue("r_infraorbitale")

ProtoInstance355.addFieldValue(fieldValue356)
fieldValue357 = x3d.fieldValue()
fieldValue357.setName("translation")
fieldValue357.setValue("-0.023700000718236 1.61710000038147 0.0751999989151955")

ProtoInstance355.addFieldValue(fieldValue357)

fieldValue348.addChildren(ProtoInstance355)
ProtoInstance358 = x3d.ProtoInstance()
ProtoInstance358.setName("Site")
ProtoInstance358.setDEF("hanim_l_infraorbitale_2")
fieldValue359 = x3d.fieldValue()
fieldValue359.setName("name")
fieldValue359.setValue("l_infraorbitale")

ProtoInstance358.addFieldValue(fieldValue359)
fieldValue360 = x3d.fieldValue()
fieldValue360.setName("translation")
fieldValue360.setValue("0.0340999998152256 1.61710000038147 0.0751999989151955")

ProtoInstance358.addFieldValue(fieldValue360)

fieldValue348.addChildren(ProtoInstance358)
ProtoInstance361 = x3d.ProtoInstance()
ProtoInstance361.setName("Site")
ProtoInstance361.setDEF("hanim_supramenton_2")
fieldValue362 = x3d.fieldValue()
fieldValue362.setName("name")
fieldValue362.setValue("supramenton")

ProtoInstance361.addFieldValue(fieldValue362)
fieldValue363 = x3d.fieldValue()
fieldValue363.setName("translation")
fieldValue363.setValue("0.00609999988228083 1.54100000858307 0.0804999992251396")

ProtoInstance361.addFieldValue(fieldValue363)

fieldValue348.addChildren(ProtoInstance361)
ProtoInstance364 = x3d.ProtoInstance()
ProtoInstance364.setName("Site")
ProtoInstance364.setDEF("hanim_r_tragion_2")
fieldValue365 = x3d.fieldValue()
fieldValue365.setName("name")
fieldValue365.setValue("r_tragion")

ProtoInstance364.addFieldValue(fieldValue365)
fieldValue366 = x3d.fieldValue()
fieldValue366.setName("translation")
fieldValue366.setValue("-0.0645999982953072 1.63469994068146 0.0302000008523464")

ProtoInstance364.addFieldValue(fieldValue366)

fieldValue348.addChildren(ProtoInstance364)
ProtoInstance367 = x3d.ProtoInstance()
ProtoInstance367.setName("Site")
ProtoInstance367.setDEF("hanim_r_gonion_2")
fieldValue368 = x3d.fieldValue()
fieldValue368.setName("name")
fieldValue368.setValue("r_gonion")

ProtoInstance367.addFieldValue(fieldValue368)
fieldValue369 = x3d.fieldValue()
fieldValue369.setName("translation")
fieldValue369.setValue("-0.0520000010728836 1.55289995670319 0.0346999987959862")

ProtoInstance367.addFieldValue(fieldValue369)

fieldValue348.addChildren(ProtoInstance367)
ProtoInstance370 = x3d.ProtoInstance()
ProtoInstance370.setName("Site")
ProtoInstance370.setDEF("hanim_l_tragion_2")
fieldValue371 = x3d.fieldValue()
fieldValue371.setName("name")
fieldValue371.setValue("l_tragion")

ProtoInstance370.addFieldValue(fieldValue371)
fieldValue372 = x3d.fieldValue()
fieldValue372.setName("translation")
fieldValue372.setValue("0.0738999992609024 1.63479995727539 0.0282000005245209")

ProtoInstance370.addFieldValue(fieldValue372)

fieldValue348.addChildren(ProtoInstance370)
ProtoInstance373 = x3d.ProtoInstance()
ProtoInstance373.setName("Site")
ProtoInstance373.setDEF("hanim_l_gonion_2")
fieldValue374 = x3d.fieldValue()
fieldValue374.setName("name")
fieldValue374.setValue("l_gonion")

ProtoInstance373.addFieldValue(fieldValue374)
fieldValue375 = x3d.fieldValue()
fieldValue375.setName("translation")
fieldValue375.setValue("0.0631000027060509 1.55299997329712 0.0329999998211861")

ProtoInstance373.addFieldValue(fieldValue375)

fieldValue348.addChildren(ProtoInstance373)
ProtoInstance376 = x3d.ProtoInstance()
ProtoInstance376.setName("Site")
ProtoInstance376.setDEF("hanim_nuchale_2")
fieldValue377 = x3d.fieldValue()
fieldValue377.setName("name")
fieldValue377.setValue("nuchale")

ProtoInstance376.addFieldValue(fieldValue377)
fieldValue378 = x3d.fieldValue()
fieldValue378.setName("translation")
fieldValue378.setValue("0.00389999989420176 1.59720003604889 -0.0795999988913536")

ProtoInstance376.addFieldValue(fieldValue378)

fieldValue348.addChildren(ProtoInstance376)

ProtoInstance346.addFieldValue(fieldValue348)

fieldValue345.addChildren(ProtoInstance346)

ProtoInstance341.addFieldValue(fieldValue345)

fieldValue340.addChildren(ProtoInstance341)
ProtoInstance379 = x3d.ProtoInstance()
ProtoInstance379.setName("Segment")
ProtoInstance379.setDEF("hanim_c2_2")
fieldValue380 = x3d.fieldValue()
fieldValue380.setName("name")
fieldValue380.setValue("c2")

ProtoInstance379.addFieldValue(fieldValue380)

fieldValue340.addChildren(ProtoInstance379)

ProtoInstance336.addFieldValue(fieldValue340)

fieldValue335.addChildren(ProtoInstance336)
ProtoInstance381 = x3d.ProtoInstance()
ProtoInstance381.setName("Segment")
ProtoInstance381.setDEF("hanim_c4_2")
fieldValue382 = x3d.fieldValue()
fieldValue382.setName("name")
fieldValue382.setValue("c4")

ProtoInstance381.addFieldValue(fieldValue382)

fieldValue335.addChildren(ProtoInstance381)

ProtoInstance331.addFieldValue(fieldValue335)

fieldValue330.addChildren(ProtoInstance331)
ProtoInstance383 = x3d.ProtoInstance()
ProtoInstance383.setName("Joint")
ProtoInstance383.setDEF("hanim_l_sternoclavicular_2")
fieldValue384 = x3d.fieldValue()
fieldValue384.setName("stiffness")
fieldValue384.setValue("1 1 1")

ProtoInstance383.addFieldValue(fieldValue384)
fieldValue385 = x3d.fieldValue()
fieldValue385.setName("name")
fieldValue385.setValue("l_sternoclavicular")

ProtoInstance383.addFieldValue(fieldValue385)
fieldValue386 = x3d.fieldValue()
fieldValue386.setName("center")
fieldValue386.setValue("0.0820000022649765 1.44879996776581 -0.035300001502037")

ProtoInstance383.addFieldValue(fieldValue386)
fieldValue387 = x3d.fieldValue()
fieldValue387.setName("children")
ProtoInstance388 = x3d.ProtoInstance()
ProtoInstance388.setName("Joint")
ProtoInstance388.setDEF("hanim_l_acromioclavicular_2")
fieldValue389 = x3d.fieldValue()
fieldValue389.setName("stiffness")
fieldValue389.setValue("1 1 1")

ProtoInstance388.addFieldValue(fieldValue389)
fieldValue390 = x3d.fieldValue()
fieldValue390.setName("name")
fieldValue390.setValue("l_acromioclavicular")

ProtoInstance388.addFieldValue(fieldValue390)
fieldValue391 = x3d.fieldValue()
fieldValue391.setName("center")
fieldValue391.setValue("0.0961999967694283 1.42690002918243 -0.0423999987542629")

ProtoInstance388.addFieldValue(fieldValue391)
fieldValue392 = x3d.fieldValue()
fieldValue392.setName("children")
ProtoInstance393 = x3d.ProtoInstance()
ProtoInstance393.setName("Joint")
ProtoInstance393.setDEF("hanim_l_shoulder_2")
fieldValue394 = x3d.fieldValue()
fieldValue394.setName("stiffness")
fieldValue394.setValue("1 1 1")

ProtoInstance393.addFieldValue(fieldValue394)
fieldValue395 = x3d.fieldValue()
fieldValue395.setName("name")
fieldValue395.setValue("l_shoulder")

ProtoInstance393.addFieldValue(fieldValue395)
fieldValue396 = x3d.fieldValue()
fieldValue396.setName("center")
fieldValue396.setValue("0.202900007367134 1.43760001659393 -0.0386999994516373")

ProtoInstance393.addFieldValue(fieldValue396)
fieldValue397 = x3d.fieldValue()
fieldValue397.setName("children")
ProtoInstance398 = x3d.ProtoInstance()
ProtoInstance398.setName("Joint")
ProtoInstance398.setDEF("hanim_l_elbow_2")
fieldValue399 = x3d.fieldValue()
fieldValue399.setName("stiffness")
fieldValue399.setValue("1 1 1")

ProtoInstance398.addFieldValue(fieldValue399)
fieldValue400 = x3d.fieldValue()
fieldValue400.setName("name")
fieldValue400.setValue("l_elbow")

ProtoInstance398.addFieldValue(fieldValue400)
fieldValue401 = x3d.fieldValue()
fieldValue401.setName("center")
fieldValue401.setValue("0.201399996876717 1.1356999874115 -0.0681999996304512")

ProtoInstance398.addFieldValue(fieldValue401)
fieldValue402 = x3d.fieldValue()
fieldValue402.setName("children")
ProtoInstance403 = x3d.ProtoInstance()
ProtoInstance403.setName("Joint")
ProtoInstance403.setDEF("hanim_l_radiocarpal_2")
fieldValue404 = x3d.fieldValue()
fieldValue404.setName("stiffness")
fieldValue404.setValue("1 1 1")

ProtoInstance403.addFieldValue(fieldValue404)
fieldValue405 = x3d.fieldValue()
fieldValue405.setName("name")
fieldValue405.setValue("l_radiocarpal")

ProtoInstance403.addFieldValue(fieldValue405)
fieldValue406 = x3d.fieldValue()
fieldValue406.setName("center")
fieldValue406.setValue("0.198400005698204 0.866299986839294 -0.0582999996840954")

ProtoInstance403.addFieldValue(fieldValue406)
fieldValue407 = x3d.fieldValue()
fieldValue407.setName("children")
ProtoInstance408 = x3d.ProtoInstance()
ProtoInstance408.setName("Joint")
ProtoInstance408.setDEF("hanim_l_carpometacarpal2")
fieldValue409 = x3d.fieldValue()
fieldValue409.setName("stiffness")
fieldValue409.setValue("1 1 1")

ProtoInstance408.addFieldValue(fieldValue409)
fieldValue410 = x3d.fieldValue()
fieldValue410.setName("name")
fieldValue410.setValue("l_carpometacarpal_1")

ProtoInstance408.addFieldValue(fieldValue410)
fieldValue411 = x3d.fieldValue()
fieldValue411.setName("center")
fieldValue411.setValue("0.192399993538857 0.847199976444244 -0.0533999986946583")

ProtoInstance408.addFieldValue(fieldValue411)
fieldValue412 = x3d.fieldValue()
fieldValue412.setName("children")
ProtoInstance413 = x3d.ProtoInstance()
ProtoInstance413.setName("Joint")
ProtoInstance413.setDEF("hanim_l_metacarpophalangeal2")
fieldValue414 = x3d.fieldValue()
fieldValue414.setName("stiffness")
fieldValue414.setValue("1 1 1")

ProtoInstance413.addFieldValue(fieldValue414)
fieldValue415 = x3d.fieldValue()
fieldValue415.setName("name")
fieldValue415.setValue("l_metacarpophalangeal_1")

ProtoInstance413.addFieldValue(fieldValue415)
fieldValue416 = x3d.fieldValue()
fieldValue416.setName("center")
fieldValue416.setValue("0.195099994540215 0.82260000705719 0.0245999991893768")

ProtoInstance413.addFieldValue(fieldValue416)
fieldValue417 = x3d.fieldValue()
fieldValue417.setName("children")
ProtoInstance418 = x3d.ProtoInstance()
ProtoInstance418.setName("Joint")
ProtoInstance418.setDEF("hanim_l_carpal_interphalangeal2")
fieldValue419 = x3d.fieldValue()
fieldValue419.setName("stiffness")
fieldValue419.setValue("1 1 1")

ProtoInstance418.addFieldValue(fieldValue419)
fieldValue420 = x3d.fieldValue()
fieldValue420.setName("name")
fieldValue420.setValue("l_carpal_interphalangeal_1")

ProtoInstance418.addFieldValue(fieldValue420)
fieldValue421 = x3d.fieldValue()
fieldValue421.setName("center")
fieldValue421.setValue("0.195500001311302 0.815900027751923 0.046399999409914")

ProtoInstance418.addFieldValue(fieldValue421)
fieldValue422 = x3d.fieldValue()
fieldValue422.setName("children")
ProtoInstance423 = x3d.ProtoInstance()
ProtoInstance423.setName("Segment")
ProtoInstance423.setDEF("hanim_l_carpal_distal_phalanx2")
fieldValue424 = x3d.fieldValue()
fieldValue424.setName("name")
fieldValue424.setValue("l_carpal_distal_phalanx_1")

ProtoInstance423.addFieldValue(fieldValue424)
fieldValue425 = x3d.fieldValue()
fieldValue425.setName("children")
ProtoInstance426 = x3d.ProtoInstance()
ProtoInstance426.setName("Site")
ProtoInstance426.setDEF("hanim_l_carpal_distal_phalanx_1_tip_2")
fieldValue427 = x3d.fieldValue()
fieldValue427.setName("name")
fieldValue427.setValue("l_carpal_distal_phalanx_1_tip")

ProtoInstance426.addFieldValue(fieldValue427)
fieldValue428 = x3d.fieldValue()
fieldValue428.setName("translation")
fieldValue428.setValue("0.19820000231266 0.806100010871887 0.0759000033140183")

ProtoInstance426.addFieldValue(fieldValue428)

fieldValue425.addChildren(ProtoInstance426)

ProtoInstance423.addFieldValue(fieldValue425)

fieldValue422.addChildren(ProtoInstance423)

ProtoInstance418.addFieldValue(fieldValue422)

fieldValue417.addChildren(ProtoInstance418)
ProtoInstance429 = x3d.ProtoInstance()
ProtoInstance429.setName("Segment")
ProtoInstance429.setDEF("hanim_l_index_proximal_2")
fieldValue430 = x3d.fieldValue()
fieldValue430.setName("name")
fieldValue430.setValue("l_index_proximal")

ProtoInstance429.addFieldValue(fieldValue430)

fieldValue417.addChildren(ProtoInstance429)

ProtoInstance413.addFieldValue(fieldValue417)

fieldValue412.addChildren(ProtoInstance413)
ProtoInstance431 = x3d.ProtoInstance()
ProtoInstance431.setName("Segment")
ProtoInstance431.setDEF("hanim_l_index_proximal_4")
fieldValue432 = x3d.fieldValue()
fieldValue432.setName("name")
fieldValue432.setValue("l_index_proximal")

ProtoInstance431.addFieldValue(fieldValue432)

fieldValue412.addChildren(ProtoInstance431)

ProtoInstance408.addFieldValue(fieldValue412)

fieldValue407.addChildren(ProtoInstance408)
ProtoInstance433 = x3d.ProtoInstance()
ProtoInstance433.setName("Joint")
ProtoInstance433.setDEF("hanim_l_carpometacarpal3")
fieldValue434 = x3d.fieldValue()
fieldValue434.setName("stiffness")
fieldValue434.setValue("1 1 1")

ProtoInstance433.addFieldValue(fieldValue434)
fieldValue435 = x3d.fieldValue()
fieldValue435.setName("name")
fieldValue435.setValue("l_carpometacarpal_2")

ProtoInstance433.addFieldValue(fieldValue435)
fieldValue436 = x3d.fieldValue()
fieldValue436.setName("center")
fieldValue436.setValue("0.198300004005432 0.80239999294281 -0.0280000008642673")

ProtoInstance433.addFieldValue(fieldValue436)
fieldValue437 = x3d.fieldValue()
fieldValue437.setName("children")
ProtoInstance438 = x3d.ProtoInstance()
ProtoInstance438.setName("Joint")
ProtoInstance438.setDEF("hanim_l_metacarpophalangeal3")
fieldValue439 = x3d.fieldValue()
fieldValue439.setName("stiffness")
fieldValue439.setValue("1 1 1")

ProtoInstance438.addFieldValue(fieldValue439)
fieldValue440 = x3d.fieldValue()
fieldValue440.setName("name")
fieldValue440.setValue("l_metacarpophalangeal_2")

ProtoInstance438.addFieldValue(fieldValue440)
fieldValue441 = x3d.fieldValue()
fieldValue441.setName("center")
fieldValue441.setValue("0.198300004005432 0.781499981880188 -0.0280000008642673")

ProtoInstance438.addFieldValue(fieldValue441)
fieldValue442 = x3d.fieldValue()
fieldValue442.setName("children")
ProtoInstance443 = x3d.ProtoInstance()
ProtoInstance443.setName("Joint")
ProtoInstance443.setDEF("hanim_l_carpal_proximal_interphalangeal3")
fieldValue444 = x3d.fieldValue()
fieldValue444.setName("stiffness")
fieldValue444.setValue("1 1 1")

ProtoInstance443.addFieldValue(fieldValue444)
fieldValue445 = x3d.fieldValue()
fieldValue445.setName("name")
fieldValue445.setValue("l_carpal_proximal_interphalangeal_2")

ProtoInstance443.addFieldValue(fieldValue445)
fieldValue446 = x3d.fieldValue()
fieldValue446.setName("center")
fieldValue446.setValue("0.201700001955032 0.736299991607666 -0.0248000007122755")

ProtoInstance443.addFieldValue(fieldValue446)
fieldValue447 = x3d.fieldValue()
fieldValue447.setName("children")
ProtoInstance448 = x3d.ProtoInstance()
ProtoInstance448.setName("Joint")
ProtoInstance448.setDEF("hanim_l_carpal_distal_interphalangeal3")
fieldValue449 = x3d.fieldValue()
fieldValue449.setName("stiffness")
fieldValue449.setValue("1 1 1")

ProtoInstance448.addFieldValue(fieldValue449)
fieldValue450 = x3d.fieldValue()
fieldValue450.setName("name")
fieldValue450.setValue("l_carpal_distal_interphalangeal_2")

ProtoInstance448.addFieldValue(fieldValue450)
fieldValue451 = x3d.fieldValue()
fieldValue451.setName("center")
fieldValue451.setValue("0.202800005674362 0.713900029659271 -0.0236000008881092")

ProtoInstance448.addFieldValue(fieldValue451)
fieldValue452 = x3d.fieldValue()
fieldValue452.setName("children")
ProtoInstance453 = x3d.ProtoInstance()
ProtoInstance453.setName("Segment")
ProtoInstance453.setDEF("hanim_l_carpal_distal_phalanx3")
fieldValue454 = x3d.fieldValue()
fieldValue454.setName("name")
fieldValue454.setValue("l_carpal_distal_phalanx_2")

ProtoInstance453.addFieldValue(fieldValue454)
fieldValue455 = x3d.fieldValue()
fieldValue455.setName("children")
ProtoInstance456 = x3d.ProtoInstance()
ProtoInstance456.setName("Site")
ProtoInstance456.setDEF("hanim_l_carpal_distal_phalanx_2_tip_2")
fieldValue457 = x3d.fieldValue()
fieldValue457.setName("name")
fieldValue457.setValue("l_carpal_distal_phalanx_2_tip")

ProtoInstance456.addFieldValue(fieldValue457)
fieldValue458 = x3d.fieldValue()
fieldValue458.setName("translation")
fieldValue458.setValue("0.20890000462532 0.685800015926361 -0.0244999993592501")

ProtoInstance456.addFieldValue(fieldValue458)

fieldValue455.addChildren(ProtoInstance456)
ProtoInstance459 = x3d.ProtoInstance()
ProtoInstance459.setName("Site")
ProtoInstance459.setDEF("hanim_l_dactylion_2")
fieldValue460 = x3d.fieldValue()
fieldValue460.setName("name")
fieldValue460.setValue("l_dactylion")

ProtoInstance459.addFieldValue(fieldValue460)
fieldValue461 = x3d.fieldValue()
fieldValue461.setName("translation")
fieldValue461.setValue("0.205599993467331 0.674300014972687 -0.048200000077486")

ProtoInstance459.addFieldValue(fieldValue461)

fieldValue455.addChildren(ProtoInstance459)

ProtoInstance453.addFieldValue(fieldValue455)

fieldValue452.addChildren(ProtoInstance453)

ProtoInstance448.addFieldValue(fieldValue452)

fieldValue447.addChildren(ProtoInstance448)
ProtoInstance462 = x3d.ProtoInstance()
ProtoInstance462.setName("Segment")
ProtoInstance462.setDEF("hanim_l_index_middle_2")
fieldValue463 = x3d.fieldValue()
fieldValue463.setName("name")
fieldValue463.setValue("l_index_middle")

ProtoInstance462.addFieldValue(fieldValue463)

fieldValue447.addChildren(ProtoInstance462)

ProtoInstance443.addFieldValue(fieldValue447)

fieldValue442.addChildren(ProtoInstance443)
ProtoInstance464 = x3d.ProtoInstance()
ProtoInstance464.setName("Segment")
ProtoInstance464.setDEF("hanim_l_index_proximal_6")
fieldValue465 = x3d.fieldValue()
fieldValue465.setName("name")
fieldValue465.setValue("l_index_proximal")

ProtoInstance464.addFieldValue(fieldValue465)

fieldValue442.addChildren(ProtoInstance464)

ProtoInstance438.addFieldValue(fieldValue442)

fieldValue437.addChildren(ProtoInstance438)
ProtoInstance466 = x3d.ProtoInstance()
ProtoInstance466.setName("Segment")
ProtoInstance466.setDEF("hanim_l_index_metacarpal_2")
fieldValue467 = x3d.fieldValue()
fieldValue467.setName("name")
fieldValue467.setValue("l_index_metacarpal")

ProtoInstance466.addFieldValue(fieldValue467)

fieldValue437.addChildren(ProtoInstance466)

ProtoInstance433.addFieldValue(fieldValue437)

fieldValue407.addChildren(ProtoInstance433)
ProtoInstance468 = x3d.ProtoInstance()
ProtoInstance468.setName("Joint")
ProtoInstance468.setDEF("hanim_l_carpometacarpal4")
fieldValue469 = x3d.fieldValue()
fieldValue469.setName("stiffness")
fieldValue469.setValue("1 1 1")

ProtoInstance468.addFieldValue(fieldValue469)
fieldValue470 = x3d.fieldValue()
fieldValue470.setName("name")
fieldValue470.setValue("l_carpometacarpal_3")

ProtoInstance468.addFieldValue(fieldValue470)
fieldValue471 = x3d.fieldValue()
fieldValue471.setName("center")
fieldValue471.setValue("0.198699995875359 0.802900016307831 -0.0529999993741512")

ProtoInstance468.addFieldValue(fieldValue471)
fieldValue472 = x3d.fieldValue()
fieldValue472.setName("children")
ProtoInstance473 = x3d.ProtoInstance()
ProtoInstance473.setName("Joint")
ProtoInstance473.setDEF("hanim_l_metacarpophalangeal4")
fieldValue474 = x3d.fieldValue()
fieldValue474.setName("stiffness")
fieldValue474.setValue("1 1 1")

ProtoInstance473.addFieldValue(fieldValue474)
fieldValue475 = x3d.fieldValue()
fieldValue475.setName("name")
fieldValue475.setValue("l_metacarpophalangeal_3")

ProtoInstance473.addFieldValue(fieldValue475)
fieldValue476 = x3d.fieldValue()
fieldValue476.setName("center")
fieldValue476.setValue("0.198699995875359 0.781799972057343 -0.0529999993741512")

ProtoInstance473.addFieldValue(fieldValue476)
fieldValue477 = x3d.fieldValue()
fieldValue477.setName("children")
ProtoInstance478 = x3d.ProtoInstance()
ProtoInstance478.setName("Joint")
ProtoInstance478.setDEF("hanim_l_carpal_proximal_interphalangeal4")
fieldValue479 = x3d.fieldValue()
fieldValue479.setName("stiffness")
fieldValue479.setValue("1 1 1")

ProtoInstance478.addFieldValue(fieldValue479)
fieldValue480 = x3d.fieldValue()
fieldValue480.setName("name")
fieldValue480.setValue("l_carpal_proximal_interphalangeal_3")

ProtoInstance478.addFieldValue(fieldValue480)
fieldValue481 = x3d.fieldValue()
fieldValue481.setName("center")
fieldValue481.setValue("0.201299995183945 0.727299988269806 -0.0502999983727932")

ProtoInstance478.addFieldValue(fieldValue481)
fieldValue482 = x3d.fieldValue()
fieldValue482.setName("children")
ProtoInstance483 = x3d.ProtoInstance()
ProtoInstance483.setName("Joint")
ProtoInstance483.setDEF("hanim_l_carpal_distal_interphalangeal4")
fieldValue484 = x3d.fieldValue()
fieldValue484.setName("stiffness")
fieldValue484.setValue("1 1 1")

ProtoInstance483.addFieldValue(fieldValue484)
fieldValue485 = x3d.fieldValue()
fieldValue485.setName("name")
fieldValue485.setValue("l_carpal_distal_interphalangeal_3")

ProtoInstance483.addFieldValue(fieldValue485)
fieldValue486 = x3d.fieldValue()
fieldValue486.setName("center")
fieldValue486.setValue("0.202600002288818 0.701099991798401 -0.0494000017642975")

ProtoInstance483.addFieldValue(fieldValue486)
fieldValue487 = x3d.fieldValue()
fieldValue487.setName("children")
ProtoInstance488 = x3d.ProtoInstance()
ProtoInstance488.setName("Segment")
ProtoInstance488.setDEF("hanim_l_carpal_distal_phalanx4")
fieldValue489 = x3d.fieldValue()
fieldValue489.setName("name")
fieldValue489.setValue("l_carpal_distal_phalanx_3")

ProtoInstance488.addFieldValue(fieldValue489)
fieldValue490 = x3d.fieldValue()
fieldValue490.setName("children")
ProtoInstance491 = x3d.ProtoInstance()
ProtoInstance491.setName("Site")
ProtoInstance491.setDEF("hanim_l_carpal_distal_phalanx_3_tip_2")
fieldValue492 = x3d.fieldValue()
fieldValue492.setName("name")
fieldValue492.setValue("l_carpal_distal_phalanx_3_tip")

ProtoInstance491.addFieldValue(fieldValue492)
fieldValue493 = x3d.fieldValue()
fieldValue493.setName("translation")
fieldValue493.setValue("0.208000004291534 0.673099994659424 -0.049100000411272")

ProtoInstance491.addFieldValue(fieldValue493)

fieldValue490.addChildren(ProtoInstance491)

ProtoInstance488.addFieldValue(fieldValue490)

fieldValue487.addChildren(ProtoInstance488)

ProtoInstance483.addFieldValue(fieldValue487)

fieldValue482.addChildren(ProtoInstance483)
ProtoInstance494 = x3d.ProtoInstance()
ProtoInstance494.setName("Segment")
ProtoInstance494.setDEF("hanim_l_middle_middle_2")
fieldValue495 = x3d.fieldValue()
fieldValue495.setName("name")
fieldValue495.setValue("l_middle_middle")

ProtoInstance494.addFieldValue(fieldValue495)

fieldValue482.addChildren(ProtoInstance494)

ProtoInstance478.addFieldValue(fieldValue482)

fieldValue477.addChildren(ProtoInstance478)
ProtoInstance496 = x3d.ProtoInstance()
ProtoInstance496.setName("Segment")
ProtoInstance496.setDEF("hanim_l_middle_proximal_2")
fieldValue497 = x3d.fieldValue()
fieldValue497.setName("name")
fieldValue497.setValue("l_middle_proximal")

ProtoInstance496.addFieldValue(fieldValue497)

fieldValue477.addChildren(ProtoInstance496)

ProtoInstance473.addFieldValue(fieldValue477)

fieldValue472.addChildren(ProtoInstance473)
ProtoInstance498 = x3d.ProtoInstance()
ProtoInstance498.setName("Segment")
ProtoInstance498.setDEF("hanim_l_middle_metacarpal_2")
fieldValue499 = x3d.fieldValue()
fieldValue499.setName("name")
fieldValue499.setValue("l_middle_metacarpal")

ProtoInstance498.addFieldValue(fieldValue499)

fieldValue472.addChildren(ProtoInstance498)

ProtoInstance468.addFieldValue(fieldValue472)

fieldValue407.addChildren(ProtoInstance468)
ProtoInstance500 = x3d.ProtoInstance()
ProtoInstance500.setName("Joint")
ProtoInstance500.setDEF("hanim_l_carpometacarpal5")
fieldValue501 = x3d.fieldValue()
fieldValue501.setName("stiffness")
fieldValue501.setValue("1 1 1")

ProtoInstance500.addFieldValue(fieldValue501)
fieldValue502 = x3d.fieldValue()
fieldValue502.setName("name")
fieldValue502.setValue("l_carpometacarpal_4")

ProtoInstance500.addFieldValue(fieldValue502)
fieldValue503 = x3d.fieldValue()
fieldValue503.setName("center")
fieldValue503.setValue("0.195600003004074 0.801900029182434 -0.0794000029563904")

ProtoInstance500.addFieldValue(fieldValue503)
fieldValue504 = x3d.fieldValue()
fieldValue504.setName("children")
ProtoInstance505 = x3d.ProtoInstance()
ProtoInstance505.setName("Joint")
ProtoInstance505.setDEF("hanim_l_metacarpophalangeal5")
fieldValue506 = x3d.fieldValue()
fieldValue506.setName("stiffness")
fieldValue506.setValue("1 1 1")

ProtoInstance505.addFieldValue(fieldValue506)
fieldValue507 = x3d.fieldValue()
fieldValue507.setName("name")
fieldValue507.setValue("l_metacarpophalangeal_4")

ProtoInstance505.addFieldValue(fieldValue507)
fieldValue508 = x3d.fieldValue()
fieldValue508.setName("center")
fieldValue508.setValue("0.195600003004074 0.781499981880188 -0.0794000029563904")

ProtoInstance505.addFieldValue(fieldValue508)
fieldValue509 = x3d.fieldValue()
fieldValue509.setName("children")
ProtoInstance510 = x3d.ProtoInstance()
ProtoInstance510.setName("Joint")
ProtoInstance510.setDEF("hanim_l_carpal_proximal_interphalangeal5")
fieldValue511 = x3d.fieldValue()
fieldValue511.setName("stiffness")
fieldValue511.setValue("1 1 1")

ProtoInstance510.addFieldValue(fieldValue511)
fieldValue512 = x3d.fieldValue()
fieldValue512.setName("name")
fieldValue512.setValue("l_carpal_proximal_interphalangeal_4")

ProtoInstance510.addFieldValue(fieldValue512)
fieldValue513 = x3d.fieldValue()
fieldValue513.setName("center")
fieldValue513.setValue("0.197300001978874 0.72869998216629 -0.0776999965310097")

ProtoInstance510.addFieldValue(fieldValue513)
fieldValue514 = x3d.fieldValue()
fieldValue514.setName("children")
ProtoInstance515 = x3d.ProtoInstance()
ProtoInstance515.setName("Joint")
ProtoInstance515.setDEF("hanim_l_carpal_distal_interphalangeal5")
fieldValue516 = x3d.fieldValue()
fieldValue516.setName("stiffness")
fieldValue516.setValue("1 1 1")

ProtoInstance515.addFieldValue(fieldValue516)
fieldValue517 = x3d.fieldValue()
fieldValue517.setName("name")
fieldValue517.setValue("l_carpal_distal_interphalangeal_4")

ProtoInstance515.addFieldValue(fieldValue517)
fieldValue518 = x3d.fieldValue()
fieldValue518.setName("center")
fieldValue518.setValue("0.198300004005432 0.704500019550323 -0.0767000019550323")

ProtoInstance515.addFieldValue(fieldValue518)
fieldValue519 = x3d.fieldValue()
fieldValue519.setName("children")
ProtoInstance520 = x3d.ProtoInstance()
ProtoInstance520.setName("Segment")
ProtoInstance520.setDEF("hanim_l_carpal_distal_phalanx5")
fieldValue521 = x3d.fieldValue()
fieldValue521.setName("name")
fieldValue521.setValue("l_carpal_distal_phalanx_4")

ProtoInstance520.addFieldValue(fieldValue521)
fieldValue522 = x3d.fieldValue()
fieldValue522.setName("children")
ProtoInstance523 = x3d.ProtoInstance()
ProtoInstance523.setName("Site")
ProtoInstance523.setDEF("hanim_l_carpal_distal_phalanx_4_tip_2")
fieldValue524 = x3d.fieldValue()
fieldValue524.setName("name")
fieldValue524.setValue("l_carpal_distal_phalanx_4_tip")

ProtoInstance523.addFieldValue(fieldValue524)
fieldValue525 = x3d.fieldValue()
fieldValue525.setName("translation")
fieldValue525.setValue("0.203500002622604 0.675000011920929 -0.0755999982357025")

ProtoInstance523.addFieldValue(fieldValue525)

fieldValue522.addChildren(ProtoInstance523)

ProtoInstance520.addFieldValue(fieldValue522)

fieldValue519.addChildren(ProtoInstance520)

ProtoInstance515.addFieldValue(fieldValue519)

fieldValue514.addChildren(ProtoInstance515)
ProtoInstance526 = x3d.ProtoInstance()
ProtoInstance526.setName("Segment")
ProtoInstance526.setDEF("hanim_l_ring_middle_2")
fieldValue527 = x3d.fieldValue()
fieldValue527.setName("name")
fieldValue527.setValue("l_ring_middle")

ProtoInstance526.addFieldValue(fieldValue527)

fieldValue514.addChildren(ProtoInstance526)

ProtoInstance510.addFieldValue(fieldValue514)

fieldValue509.addChildren(ProtoInstance510)
ProtoInstance528 = x3d.ProtoInstance()
ProtoInstance528.setName("Segment")
ProtoInstance528.setDEF("hanim_l_ring_proximal_2")
fieldValue529 = x3d.fieldValue()
fieldValue529.setName("name")
fieldValue529.setValue("l_ring_proximal")

ProtoInstance528.addFieldValue(fieldValue529)

fieldValue509.addChildren(ProtoInstance528)

ProtoInstance505.addFieldValue(fieldValue509)

fieldValue504.addChildren(ProtoInstance505)
ProtoInstance530 = x3d.ProtoInstance()
ProtoInstance530.setName("Segment")
ProtoInstance530.setDEF("hanim_l_ring_metacarpal_2")
fieldValue531 = x3d.fieldValue()
fieldValue531.setName("name")
fieldValue531.setValue("l_ring_metacarpal")

ProtoInstance530.addFieldValue(fieldValue531)

fieldValue504.addChildren(ProtoInstance530)

ProtoInstance500.addFieldValue(fieldValue504)

fieldValue407.addChildren(ProtoInstance500)
ProtoInstance532 = x3d.ProtoInstance()
ProtoInstance532.setName("Joint")
ProtoInstance532.setDEF("hanim_l_carpometacarpal6")
fieldValue533 = x3d.fieldValue()
fieldValue533.setName("stiffness")
fieldValue533.setValue("1 1 1")

ProtoInstance532.addFieldValue(fieldValue533)
fieldValue534 = x3d.fieldValue()
fieldValue534.setName("name")
fieldValue534.setValue("l_carpometacarpal_5")

ProtoInstance532.addFieldValue(fieldValue534)
fieldValue535 = x3d.fieldValue()
fieldValue535.setName("center")
fieldValue535.setValue("0.192499995231628 0.806599974632263 -0.10360000282526")

ProtoInstance532.addFieldValue(fieldValue535)
fieldValue536 = x3d.fieldValue()
fieldValue536.setName("children")
ProtoInstance537 = x3d.ProtoInstance()
ProtoInstance537.setName("Joint")
ProtoInstance537.setDEF("hanim_l_metacarpophalangeal6")
fieldValue538 = x3d.fieldValue()
fieldValue538.setName("stiffness")
fieldValue538.setValue("1 1 1")

ProtoInstance537.addFieldValue(fieldValue538)
fieldValue539 = x3d.fieldValue()
fieldValue539.setName("name")
fieldValue539.setValue("l_metacarpophalangeal_5")

ProtoInstance537.addFieldValue(fieldValue539)
fieldValue540 = x3d.fieldValue()
fieldValue540.setName("center")
fieldValue540.setValue("0.192499995231628 0.78659999370575 -0.10360000282526")

ProtoInstance537.addFieldValue(fieldValue540)
fieldValue541 = x3d.fieldValue()
fieldValue541.setName("children")
ProtoInstance542 = x3d.ProtoInstance()
ProtoInstance542.setName("Joint")
ProtoInstance542.setDEF("hanim_l_carpal_proximal_interphalangeal6")
fieldValue543 = x3d.fieldValue()
fieldValue543.setName("stiffness")
fieldValue543.setValue("1 1 1")

ProtoInstance542.addFieldValue(fieldValue543)
fieldValue544 = x3d.fieldValue()
fieldValue544.setName("name")
fieldValue544.setValue("l_carpal_proximal_interphalangeal_5")

ProtoInstance542.addFieldValue(fieldValue544)
fieldValue545 = x3d.fieldValue()
fieldValue545.setName("center")
fieldValue545.setValue("0.193800002336502 0.745199978351593 -0.102399997413158")

ProtoInstance542.addFieldValue(fieldValue545)
fieldValue546 = x3d.fieldValue()
fieldValue546.setName("children")
ProtoInstance547 = x3d.ProtoInstance()
ProtoInstance547.setName("Joint")
ProtoInstance547.setDEF("hanim_l_carpal_distal_interphalangeal6")
fieldValue548 = x3d.fieldValue()
fieldValue548.setName("stiffness")
fieldValue548.setValue("1 1 1")

ProtoInstance547.addFieldValue(fieldValue548)
fieldValue549 = x3d.fieldValue()
fieldValue549.setName("name")
fieldValue549.setValue("l_carpal_distal_interphalangeal_5")

ProtoInstance547.addFieldValue(fieldValue549)
fieldValue550 = x3d.fieldValue()
fieldValue550.setName("center")
fieldValue550.setValue("0.19480000436306 0.727699995040894 -0.101700000464916")

ProtoInstance547.addFieldValue(fieldValue550)
fieldValue551 = x3d.fieldValue()
fieldValue551.setName("children")
ProtoInstance552 = x3d.ProtoInstance()
ProtoInstance552.setName("Segment")
ProtoInstance552.setDEF("hanim_l_carpal_distal_phalanx6")
fieldValue553 = x3d.fieldValue()
fieldValue553.setName("name")
fieldValue553.setValue("l_carpal_distal_phalanx_5")

ProtoInstance552.addFieldValue(fieldValue553)
fieldValue554 = x3d.fieldValue()
fieldValue554.setName("children")
ProtoInstance555 = x3d.ProtoInstance()
ProtoInstance555.setName("Site")
ProtoInstance555.setDEF("hanim_l_carpal_distal_phalanx_5_tip_2")
fieldValue556 = x3d.fieldValue()
fieldValue556.setName("name")
fieldValue556.setValue("l_carpal_distal_phalanx_5_tip")

ProtoInstance555.addFieldValue(fieldValue556)
fieldValue557 = x3d.fieldValue()
fieldValue557.setName("translation")
fieldValue557.setValue("0.201399996876717 0.700900018215179 -0.101199999451637")

ProtoInstance555.addFieldValue(fieldValue557)

fieldValue554.addChildren(ProtoInstance555)

ProtoInstance552.addFieldValue(fieldValue554)

fieldValue551.addChildren(ProtoInstance552)

ProtoInstance547.addFieldValue(fieldValue551)

fieldValue546.addChildren(ProtoInstance547)
ProtoInstance558 = x3d.ProtoInstance()
ProtoInstance558.setName("Segment")
ProtoInstance558.setDEF("hanim_l_pinky_middle_2")
fieldValue559 = x3d.fieldValue()
fieldValue559.setName("name")
fieldValue559.setValue("l_pinky_middle")

ProtoInstance558.addFieldValue(fieldValue559)

fieldValue546.addChildren(ProtoInstance558)

ProtoInstance542.addFieldValue(fieldValue546)

fieldValue541.addChildren(ProtoInstance542)
ProtoInstance560 = x3d.ProtoInstance()
ProtoInstance560.setName("Segment")
ProtoInstance560.setDEF("hanim_l_pinky_proximal_2")
fieldValue561 = x3d.fieldValue()
fieldValue561.setName("name")
fieldValue561.setValue("l_pinky_proximal")

ProtoInstance560.addFieldValue(fieldValue561)

fieldValue541.addChildren(ProtoInstance560)

ProtoInstance537.addFieldValue(fieldValue541)

fieldValue536.addChildren(ProtoInstance537)
ProtoInstance562 = x3d.ProtoInstance()
ProtoInstance562.setName("Segment")
ProtoInstance562.setDEF("hanim_l_pinky_metacarpal_2")
fieldValue563 = x3d.fieldValue()
fieldValue563.setName("name")
fieldValue563.setValue("l_pinky_metacarpal")

ProtoInstance562.addFieldValue(fieldValue563)

fieldValue536.addChildren(ProtoInstance562)

ProtoInstance532.addFieldValue(fieldValue536)

fieldValue407.addChildren(ProtoInstance532)
ProtoInstance564 = x3d.ProtoInstance()
ProtoInstance564.setName("Segment")
ProtoInstance564.setDEF("hanim_l_hand_2")
fieldValue565 = x3d.fieldValue()
fieldValue565.setName("name")
fieldValue565.setValue("l_hand")

ProtoInstance564.addFieldValue(fieldValue565)
fieldValue566 = x3d.fieldValue()
fieldValue566.setName("children")
ProtoInstance567 = x3d.ProtoInstance()
ProtoInstance567.setName("Site")
ProtoInstance567.setDEF("hanim_l_metacarpal_phalanx3")
fieldValue568 = x3d.fieldValue()
fieldValue568.setName("name")
fieldValue568.setValue("l_metacarpal_phalanx_2")

ProtoInstance567.addFieldValue(fieldValue568)
fieldValue569 = x3d.fieldValue()
fieldValue569.setName("translation")
fieldValue569.setValue("0.200900003314018 0.813899993896484 -0.023700000718236")

ProtoInstance567.addFieldValue(fieldValue569)

fieldValue566.addChildren(ProtoInstance567)
ProtoInstance570 = x3d.ProtoInstance()
ProtoInstance570.setName("Site")
ProtoInstance570.setDEF("hanim_l_ulnar_styloid_2")
fieldValue571 = x3d.fieldValue()
fieldValue571.setName("name")
fieldValue571.setValue("l_ulnar_styloid")

ProtoInstance570.addFieldValue(fieldValue571)
fieldValue572 = x3d.fieldValue()
fieldValue572.setName("translation")
fieldValue572.setValue("-0.214200004935265 0.85290002822876 -0.064800001680851")

ProtoInstance570.addFieldValue(fieldValue572)

fieldValue566.addChildren(ProtoInstance570)
ProtoInstance573 = x3d.ProtoInstance()
ProtoInstance573.setName("Site")
ProtoInstance573.setDEF("hanim_l_metacarpal_phalanx6")
fieldValue574 = x3d.fieldValue()
fieldValue574.setName("name")
fieldValue574.setValue("l_metacarpal_phalanx_5")

ProtoInstance573.addFieldValue(fieldValue574)
fieldValue575 = x3d.fieldValue()
fieldValue575.setName("translation")
fieldValue575.setValue("0.192900002002716 0.78600001335144 -0.112199999392033")

ProtoInstance573.addFieldValue(fieldValue575)

fieldValue566.addChildren(ProtoInstance573)

ProtoInstance564.addFieldValue(fieldValue566)

fieldValue407.addChildren(ProtoInstance564)

ProtoInstance403.addFieldValue(fieldValue407)

fieldValue402.addChildren(ProtoInstance403)
ProtoInstance576 = x3d.ProtoInstance()
ProtoInstance576.setName("Segment")
ProtoInstance576.setDEF("hanim_l_forearm_2")
fieldValue577 = x3d.fieldValue()
fieldValue577.setName("name")
fieldValue577.setValue("l_forearm")

ProtoInstance576.addFieldValue(fieldValue577)
fieldValue578 = x3d.fieldValue()
fieldValue578.setName("children")
ProtoInstance579 = x3d.ProtoInstance()
ProtoInstance579.setName("Site")
ProtoInstance579.setDEF("hanim_l_radial_styloid_2")
fieldValue580 = x3d.fieldValue()
fieldValue580.setName("name")
fieldValue580.setValue("l_radial_styloid")

ProtoInstance579.addFieldValue(fieldValue580)
fieldValue581 = x3d.fieldValue()
fieldValue581.setName("translation")
fieldValue581.setValue("0.190099999308586 0.864499986171722 -0.0414999984204769")

ProtoInstance579.addFieldValue(fieldValue581)

fieldValue578.addChildren(ProtoInstance579)
ProtoInstance582 = x3d.ProtoInstance()
ProtoInstance582.setName("Site")
ProtoInstance582.setDEF("hanim_l_olecranon_2")
fieldValue583 = x3d.fieldValue()
fieldValue583.setName("name")
fieldValue583.setValue("l_olecranon")

ProtoInstance582.addFieldValue(fieldValue583)
fieldValue584 = x3d.fieldValue()
fieldValue584.setName("translation")
fieldValue584.setValue("-0.196199998259544 1.13750004768372 -0.112300001084805")

ProtoInstance582.addFieldValue(fieldValue584)

fieldValue578.addChildren(ProtoInstance582)
ProtoInstance585 = x3d.ProtoInstance()
ProtoInstance585.setName("Site")
ProtoInstance585.setDEF("hanim_l_humeral_medial_epicondyles_2")
fieldValue586 = x3d.fieldValue()
fieldValue586.setName("name")
fieldValue586.setValue("l_humeral_medial_epicondyles")

ProtoInstance585.addFieldValue(fieldValue586)
fieldValue587 = x3d.fieldValue()
fieldValue587.setName("translation")
fieldValue587.setValue("0.173500001430511 1.12720000743866 -0.111299999058247")

ProtoInstance585.addFieldValue(fieldValue587)

fieldValue578.addChildren(ProtoInstance585)
ProtoInstance588 = x3d.ProtoInstance()
ProtoInstance588.setName("Site")
ProtoInstance588.setDEF("hanim_l_radiale_2")
fieldValue589 = x3d.fieldValue()
fieldValue589.setName("name")
fieldValue589.setValue("l_radiale")

ProtoInstance588.addFieldValue(fieldValue589)
fieldValue590 = x3d.fieldValue()
fieldValue590.setName("translation")
fieldValue590.setValue("0.218199998140335 1.12119996547699 -0.116700001060963")

ProtoInstance588.addFieldValue(fieldValue590)

fieldValue578.addChildren(ProtoInstance588)

ProtoInstance576.addFieldValue(fieldValue578)

fieldValue402.addChildren(ProtoInstance576)

ProtoInstance398.addFieldValue(fieldValue402)

fieldValue397.addChildren(ProtoInstance398)
ProtoInstance591 = x3d.ProtoInstance()
ProtoInstance591.setName("Segment")
ProtoInstance591.setDEF("hanim_l_upperarm_2")
fieldValue592 = x3d.fieldValue()
fieldValue592.setName("name")
fieldValue592.setValue("l_upperarm")

ProtoInstance591.addFieldValue(fieldValue592)
fieldValue593 = x3d.fieldValue()
fieldValue593.setName("children")
ProtoInstance594 = x3d.ProtoInstance()
ProtoInstance594.setName("Site")
ProtoInstance594.setDEF("hanim_l_humeral_lateral_epicondyles_2")
fieldValue595 = x3d.fieldValue()
fieldValue595.setName("name")
fieldValue595.setValue("l_humeral_lateral_epicondyles")

ProtoInstance594.addFieldValue(fieldValue595)
fieldValue596 = x3d.fieldValue()
fieldValue596.setName("translation")
fieldValue596.setValue("0.228000000119209 1.14820003509521 -0.109999999403954")

ProtoInstance594.addFieldValue(fieldValue596)

fieldValue593.addChildren(ProtoInstance594)

ProtoInstance591.addFieldValue(fieldValue593)

fieldValue397.addChildren(ProtoInstance591)

ProtoInstance393.addFieldValue(fieldValue397)

fieldValue392.addChildren(ProtoInstance393)
ProtoInstance597 = x3d.ProtoInstance()
ProtoInstance597.setName("Segment")
ProtoInstance597.setDEF("hanim_l_scapula_2")
fieldValue598 = x3d.fieldValue()
fieldValue598.setName("name")
fieldValue598.setValue("l_scapula")

ProtoInstance597.addFieldValue(fieldValue598)

fieldValue392.addChildren(ProtoInstance597)

ProtoInstance388.addFieldValue(fieldValue392)

fieldValue387.addChildren(ProtoInstance388)
ProtoInstance599 = x3d.ProtoInstance()
ProtoInstance599.setName("Segment")
ProtoInstance599.setDEF("hanim_l_clavicle_2")
fieldValue600 = x3d.fieldValue()
fieldValue600.setName("name")
fieldValue600.setValue("l_clavicle")

ProtoInstance599.addFieldValue(fieldValue600)
fieldValue601 = x3d.fieldValue()
fieldValue601.setName("children")
ProtoInstance602 = x3d.ProtoInstance()
ProtoInstance602.setName("Site")
ProtoInstance602.setDEF("hanim_l_clavicale_2")
fieldValue603 = x3d.fieldValue()
fieldValue603.setName("name")
fieldValue603.setValue("l_clavicale")

ProtoInstance602.addFieldValue(fieldValue603)
fieldValue604 = x3d.fieldValue()
fieldValue604.setName("translation")
fieldValue604.setValue("0.0271000005304813 1.49430000782013 0.0394000001251698")

ProtoInstance602.addFieldValue(fieldValue604)

fieldValue601.addChildren(ProtoInstance602)
ProtoInstance605 = x3d.ProtoInstance()
ProtoInstance605.setName("Site")
ProtoInstance605.setDEF("hanim_l_acromion_2")
fieldValue606 = x3d.fieldValue()
fieldValue606.setName("name")
fieldValue606.setValue("l_acromion")

ProtoInstance605.addFieldValue(fieldValue606)
fieldValue607 = x3d.fieldValue()
fieldValue607.setName("translation")
fieldValue607.setValue("0.203199997544289 1.47599995136261 -0.0489999987185001")

ProtoInstance605.addFieldValue(fieldValue607)

fieldValue601.addChildren(ProtoInstance605)
ProtoInstance608 = x3d.ProtoInstance()
ProtoInstance608.setName("Site")
ProtoInstance608.setDEF("hanim_l_axilla_proximal_2")
fieldValue609 = x3d.fieldValue()
fieldValue609.setName("name")
fieldValue609.setValue("l_axilla_proximal")

ProtoInstance608.addFieldValue(fieldValue609)
fieldValue610 = x3d.fieldValue()
fieldValue610.setName("translation")
fieldValue610.setValue("0.177699998021126 1.40649998188019 -0.00749999983236194")

ProtoInstance608.addFieldValue(fieldValue610)

fieldValue601.addChildren(ProtoInstance608)
ProtoInstance611 = x3d.ProtoInstance()
ProtoInstance611.setName("Site")
ProtoInstance611.setDEF("hanim_l_axilla_distal_2")
fieldValue612 = x3d.fieldValue()
fieldValue612.setName("name")
fieldValue612.setValue("l_axilla_distal")

ProtoInstance611.addFieldValue(fieldValue612)
fieldValue613 = x3d.fieldValue()
fieldValue613.setName("translation")
fieldValue613.setValue("0.17059999704361 1.40719997882843 -0.0874999985098839")

ProtoInstance611.addFieldValue(fieldValue613)

fieldValue601.addChildren(ProtoInstance611)

ProtoInstance599.addFieldValue(fieldValue601)

fieldValue387.addChildren(ProtoInstance599)

ProtoInstance383.addFieldValue(fieldValue387)

fieldValue330.addChildren(ProtoInstance383)
ProtoInstance614 = x3d.ProtoInstance()
ProtoInstance614.setName("Joint")
ProtoInstance614.setDEF("hanim_r_sternoclavicular_2")
fieldValue615 = x3d.fieldValue()
fieldValue615.setName("stiffness")
fieldValue615.setValue("1 1 1")

ProtoInstance614.addFieldValue(fieldValue615)
fieldValue616 = x3d.fieldValue()
fieldValue616.setName("name")
fieldValue616.setValue("r_sternoclavicular")

ProtoInstance614.addFieldValue(fieldValue616)
fieldValue617 = x3d.fieldValue()
fieldValue617.setName("center")
fieldValue617.setValue("-0.0693999975919724 1.46000003814697 -0.0329999998211861")

ProtoInstance614.addFieldValue(fieldValue617)
fieldValue618 = x3d.fieldValue()
fieldValue618.setName("children")
ProtoInstance619 = x3d.ProtoInstance()
ProtoInstance619.setName("Joint")
ProtoInstance619.setDEF("hanim_r_acromioclavicular_2")
fieldValue620 = x3d.fieldValue()
fieldValue620.setName("stiffness")
fieldValue620.setValue("1 1 1")

ProtoInstance619.addFieldValue(fieldValue620)
fieldValue621 = x3d.fieldValue()
fieldValue621.setName("name")
fieldValue621.setValue("r_acromioclavicular")

ProtoInstance619.addFieldValue(fieldValue621)
fieldValue622 = x3d.fieldValue()
fieldValue622.setName("center")
fieldValue622.setValue("-0.0835999995470047 1.42809998989105 -0.0401000007987022")

ProtoInstance619.addFieldValue(fieldValue622)
fieldValue623 = x3d.fieldValue()
fieldValue623.setName("children")
ProtoInstance624 = x3d.ProtoInstance()
ProtoInstance624.setName("Joint")
ProtoInstance624.setDEF("hanim_r_shoulder_2")
fieldValue625 = x3d.fieldValue()
fieldValue625.setName("stiffness")
fieldValue625.setValue("1 1 1")

ProtoInstance624.addFieldValue(fieldValue625)
fieldValue626 = x3d.fieldValue()
fieldValue626.setName("name")
fieldValue626.setValue("r_shoulder")

ProtoInstance624.addFieldValue(fieldValue626)
fieldValue627 = x3d.fieldValue()
fieldValue627.setName("center")
fieldValue627.setValue("-0.190699994564056 1.4407000541687 -0.0324999988079071")

ProtoInstance624.addFieldValue(fieldValue627)
fieldValue628 = x3d.fieldValue()
fieldValue628.setName("children")
ProtoInstance629 = x3d.ProtoInstance()
ProtoInstance629.setName("Joint")
ProtoInstance629.setDEF("hanim_r_elbow_2")
fieldValue630 = x3d.fieldValue()
fieldValue630.setName("stiffness")
fieldValue630.setValue("1 1 1")

ProtoInstance629.addFieldValue(fieldValue630)
fieldValue631 = x3d.fieldValue()
fieldValue631.setName("name")
fieldValue631.setValue("r_elbow")

ProtoInstance629.addFieldValue(fieldValue631)
fieldValue632 = x3d.fieldValue()
fieldValue632.setName("center")
fieldValue632.setValue("-0.194900006055832 1.13880002498627 -0.061999998986721")

ProtoInstance629.addFieldValue(fieldValue632)
fieldValue633 = x3d.fieldValue()
fieldValue633.setName("children")
ProtoInstance634 = x3d.ProtoInstance()
ProtoInstance634.setName("Joint")
ProtoInstance634.setDEF("hanim_r_radiocarpal_2")
fieldValue635 = x3d.fieldValue()
fieldValue635.setName("stiffness")
fieldValue635.setValue("1 1 1")

ProtoInstance634.addFieldValue(fieldValue635)
fieldValue636 = x3d.fieldValue()
fieldValue636.setName("name")
fieldValue636.setValue("r_radiocarpal")

ProtoInstance634.addFieldValue(fieldValue636)
fieldValue637 = x3d.fieldValue()
fieldValue637.setName("center")
fieldValue637.setValue("-0.195899993181229 0.869400024414063 -0.0520999990403652")

ProtoInstance634.addFieldValue(fieldValue637)
fieldValue638 = x3d.fieldValue()
fieldValue638.setName("children")
ProtoInstance639 = x3d.ProtoInstance()
ProtoInstance639.setName("Joint")
ProtoInstance639.setDEF("hanim_r_carpometacarpal2")
fieldValue640 = x3d.fieldValue()
fieldValue640.setName("stiffness")
fieldValue640.setValue("1 1 1")

ProtoInstance639.addFieldValue(fieldValue640)
fieldValue641 = x3d.fieldValue()
fieldValue641.setName("name")
fieldValue641.setValue("r_carpometacarpal_1")

ProtoInstance639.addFieldValue(fieldValue641)
fieldValue642 = x3d.fieldValue()
fieldValue642.setName("center")
fieldValue642.setValue("-0.189899995923042 0.850199997425079 -0.0472999997437")

ProtoInstance639.addFieldValue(fieldValue642)
fieldValue643 = x3d.fieldValue()
fieldValue643.setName("children")
ProtoInstance644 = x3d.ProtoInstance()
ProtoInstance644.setName("Joint")
ProtoInstance644.setDEF("hanim_r_metacarpophalangeal2")
fieldValue645 = x3d.fieldValue()
fieldValue645.setName("stiffness")
fieldValue645.setValue("1 1 1")

ProtoInstance644.addFieldValue(fieldValue645)
fieldValue646 = x3d.fieldValue()
fieldValue646.setName("name")
fieldValue646.setValue("r_metacarpophalangeal_1")

ProtoInstance644.addFieldValue(fieldValue646)
fieldValue647 = x3d.fieldValue()
fieldValue647.setName("center")
fieldValue647.setValue("-0.187399998307228 0.825600028038025 0.0306000001728535")

ProtoInstance644.addFieldValue(fieldValue647)
fieldValue648 = x3d.fieldValue()
fieldValue648.setName("children")
ProtoInstance649 = x3d.ProtoInstance()
ProtoInstance649.setName("Joint")
ProtoInstance649.setDEF("hanim_r_carpal_interphalangeal2")
fieldValue650 = x3d.fieldValue()
fieldValue650.setName("stiffness")
fieldValue650.setValue("1 1 1")

ProtoInstance649.addFieldValue(fieldValue650)
fieldValue651 = x3d.fieldValue()
fieldValue651.setName("name")
fieldValue651.setValue("r_carpal_interphalangeal_1")

ProtoInstance649.addFieldValue(fieldValue651)
fieldValue652 = x3d.fieldValue()
fieldValue652.setName("center")
fieldValue652.setValue("-0.18639999628067 0.819000005722046 0.0505999997258186")

ProtoInstance649.addFieldValue(fieldValue652)
fieldValue653 = x3d.fieldValue()
fieldValue653.setName("children")
ProtoInstance654 = x3d.ProtoInstance()
ProtoInstance654.setName("Segment")
ProtoInstance654.setDEF("hanim_r_carpal_distal_phalanx2")
fieldValue655 = x3d.fieldValue()
fieldValue655.setName("name")
fieldValue655.setValue("r_carpal_distal_phalanx_1")

ProtoInstance654.addFieldValue(fieldValue655)
fieldValue656 = x3d.fieldValue()
fieldValue656.setName("children")
ProtoInstance657 = x3d.ProtoInstance()
ProtoInstance657.setName("Site")
ProtoInstance657.setDEF("hanim_r_carpal_distal_phalanx_1_tip_2")
fieldValue658 = x3d.fieldValue()
fieldValue658.setName("name")
fieldValue658.setValue("r_carpal_distal_phalanx_1_tip")

ProtoInstance657.addFieldValue(fieldValue658)
fieldValue659 = x3d.fieldValue()
fieldValue659.setName("translation")
fieldValue659.setValue("-0.18690000474453 0.809000015258789 0.0820000022649765")

ProtoInstance657.addFieldValue(fieldValue659)

fieldValue656.addChildren(ProtoInstance657)

ProtoInstance654.addFieldValue(fieldValue656)

fieldValue653.addChildren(ProtoInstance654)

ProtoInstance649.addFieldValue(fieldValue653)

fieldValue648.addChildren(ProtoInstance649)
ProtoInstance660 = x3d.ProtoInstance()
ProtoInstance660.setName("Segment")
ProtoInstance660.setDEF("hanim_r_index_proximal_2")
fieldValue661 = x3d.fieldValue()
fieldValue661.setName("name")
fieldValue661.setValue("r_index_proximal")

ProtoInstance660.addFieldValue(fieldValue661)

fieldValue648.addChildren(ProtoInstance660)

ProtoInstance644.addFieldValue(fieldValue648)

fieldValue643.addChildren(ProtoInstance644)
ProtoInstance662 = x3d.ProtoInstance()
ProtoInstance662.setName("Segment")
ProtoInstance662.setDEF("hanim_r_index_proximal_4")
fieldValue663 = x3d.fieldValue()
fieldValue663.setName("name")
fieldValue663.setValue("r_index_proximal")

ProtoInstance662.addFieldValue(fieldValue663)

fieldValue643.addChildren(ProtoInstance662)

ProtoInstance639.addFieldValue(fieldValue643)

fieldValue638.addChildren(ProtoInstance639)
ProtoInstance664 = x3d.ProtoInstance()
ProtoInstance664.setName("Joint")
ProtoInstance664.setDEF("hanim_r_carpometacarpal3")
fieldValue665 = x3d.fieldValue()
fieldValue665.setName("stiffness")
fieldValue665.setValue("1 1 1")

ProtoInstance664.addFieldValue(fieldValue665)
fieldValue666 = x3d.fieldValue()
fieldValue666.setName("name")
fieldValue666.setValue("r_carpometacarpal_2")

ProtoInstance664.addFieldValue(fieldValue666)
fieldValue667 = x3d.fieldValue()
fieldValue667.setName("center")
fieldValue667.setValue("-0.196099996566772 0.805499970912933 -0.0218000002205372")

ProtoInstance664.addFieldValue(fieldValue667)
fieldValue668 = x3d.fieldValue()
fieldValue668.setName("children")
ProtoInstance669 = x3d.ProtoInstance()
ProtoInstance669.setName("Joint")
ProtoInstance669.setDEF("hanim_r_metacarpophalangeal3")
fieldValue670 = x3d.fieldValue()
fieldValue670.setName("stiffness")
fieldValue670.setValue("1 1 1")

ProtoInstance669.addFieldValue(fieldValue670)
fieldValue671 = x3d.fieldValue()
fieldValue671.setName("name")
fieldValue671.setValue("r_metacarpophalangeal_2")

ProtoInstance669.addFieldValue(fieldValue671)
fieldValue672 = x3d.fieldValue()
fieldValue672.setName("center")
fieldValue672.setValue("-0.196099996566772 0.784600019454956 -0.0218000002205372")

ProtoInstance669.addFieldValue(fieldValue672)
fieldValue673 = x3d.fieldValue()
fieldValue673.setName("children")
ProtoInstance674 = x3d.ProtoInstance()
ProtoInstance674.setName("Joint")
ProtoInstance674.setDEF("hanim_r_carpal_proximal_interphalangeal3")
fieldValue675 = x3d.fieldValue()
fieldValue675.setName("stiffness")
fieldValue675.setValue("1 1 1")

ProtoInstance674.addFieldValue(fieldValue675)
fieldValue676 = x3d.fieldValue()
fieldValue676.setName("name")
fieldValue676.setValue("r_carpal_proximal_interphalangeal_2")

ProtoInstance674.addFieldValue(fieldValue676)
fieldValue677 = x3d.fieldValue()
fieldValue677.setName("center")
fieldValue677.setValue("-0.19539999961853 0.739300012588501 -0.0185000002384186")

ProtoInstance674.addFieldValue(fieldValue677)
fieldValue678 = x3d.fieldValue()
fieldValue678.setName("children")
ProtoInstance679 = x3d.ProtoInstance()
ProtoInstance679.setName("Joint")
ProtoInstance679.setDEF("hanim_r_carpal_distal_interphalangeal3")
fieldValue680 = x3d.fieldValue()
fieldValue680.setName("stiffness")
fieldValue680.setValue("1 1 1")

ProtoInstance679.addFieldValue(fieldValue680)
fieldValue681 = x3d.fieldValue()
fieldValue681.setName("name")
fieldValue681.setValue("r_carpal_distal_interphalangeal_2")

ProtoInstance679.addFieldValue(fieldValue681)
fieldValue682 = x3d.fieldValue()
fieldValue682.setName("center")
fieldValue682.setValue("-0.194499999284744 0.716899991035461 -0.0173000004142523")

ProtoInstance679.addFieldValue(fieldValue682)
fieldValue683 = x3d.fieldValue()
fieldValue683.setName("children")
ProtoInstance684 = x3d.ProtoInstance()
ProtoInstance684.setName("Segment")
ProtoInstance684.setDEF("hanim_r_carpal_distal_phalanx3")
fieldValue685 = x3d.fieldValue()
fieldValue685.setName("name")
fieldValue685.setValue("r_carpal_distal_phalanx_2")

ProtoInstance684.addFieldValue(fieldValue685)
fieldValue686 = x3d.fieldValue()
fieldValue686.setName("children")
ProtoInstance687 = x3d.ProtoInstance()
ProtoInstance687.setName("Site")
ProtoInstance687.setDEF("hanim_r_carpal_distal_phalanx_2_tip_2")
fieldValue688 = x3d.fieldValue()
fieldValue688.setName("name")
fieldValue688.setValue("r_carpal_distal_phalanx_2_tip")

ProtoInstance687.addFieldValue(fieldValue688)
fieldValue689 = x3d.fieldValue()
fieldValue689.setName("translation")
fieldValue689.setValue("-0.197999998927116 0.688300013542175 -0.0179999992251396")

ProtoInstance687.addFieldValue(fieldValue689)

fieldValue686.addChildren(ProtoInstance687)
ProtoInstance690 = x3d.ProtoInstance()
ProtoInstance690.setName("Site")
ProtoInstance690.setDEF("hanim_r_dactylion_2")
fieldValue691 = x3d.fieldValue()
fieldValue691.setName("name")
fieldValue691.setValue("r_dactylion")

ProtoInstance690.addFieldValue(fieldValue691)
fieldValue692 = x3d.fieldValue()
fieldValue692.setName("translation")
fieldValue692.setValue("-0.194100007414818 0.677200019359589 -0.0423000007867813")

ProtoInstance690.addFieldValue(fieldValue692)

fieldValue686.addChildren(ProtoInstance690)

ProtoInstance684.addFieldValue(fieldValue686)

fieldValue683.addChildren(ProtoInstance684)

ProtoInstance679.addFieldValue(fieldValue683)

fieldValue678.addChildren(ProtoInstance679)
ProtoInstance693 = x3d.ProtoInstance()
ProtoInstance693.setName("Segment")
ProtoInstance693.setDEF("hanim_r_index_middle_2")
fieldValue694 = x3d.fieldValue()
fieldValue694.setName("name")
fieldValue694.setValue("r_index_middle")

ProtoInstance693.addFieldValue(fieldValue694)

fieldValue678.addChildren(ProtoInstance693)

ProtoInstance674.addFieldValue(fieldValue678)

fieldValue673.addChildren(ProtoInstance674)
ProtoInstance695 = x3d.ProtoInstance()
ProtoInstance695.setName("Segment")
ProtoInstance695.setDEF("hanim_r_index_proximal_6")
fieldValue696 = x3d.fieldValue()
fieldValue696.setName("name")
fieldValue696.setValue("r_index_proximal")

ProtoInstance695.addFieldValue(fieldValue696)

fieldValue673.addChildren(ProtoInstance695)

ProtoInstance669.addFieldValue(fieldValue673)

fieldValue668.addChildren(ProtoInstance669)
ProtoInstance697 = x3d.ProtoInstance()
ProtoInstance697.setName("Segment")
ProtoInstance697.setDEF("hanim_r_index_metacarpal_2")
fieldValue698 = x3d.fieldValue()
fieldValue698.setName("name")
fieldValue698.setValue("r_index_metacarpal")

ProtoInstance697.addFieldValue(fieldValue698)

fieldValue668.addChildren(ProtoInstance697)

ProtoInstance664.addFieldValue(fieldValue668)

fieldValue638.addChildren(ProtoInstance664)
ProtoInstance699 = x3d.ProtoInstance()
ProtoInstance699.setName("Joint")
ProtoInstance699.setDEF("hanim_r_carpometacarpal4")
fieldValue700 = x3d.fieldValue()
fieldValue700.setName("stiffness")
fieldValue700.setValue("1 1 1")

ProtoInstance699.addFieldValue(fieldValue700)
fieldValue701 = x3d.fieldValue()
fieldValue701.setName("name")
fieldValue701.setValue("r_carpometacarpal_3")

ProtoInstance699.addFieldValue(fieldValue701)
fieldValue702 = x3d.fieldValue()
fieldValue702.setName("center")
fieldValue702.setValue("-0.197200000286102 0.805999994277954 -0.0467999987304211")

ProtoInstance699.addFieldValue(fieldValue702)
fieldValue703 = x3d.fieldValue()
fieldValue703.setName("children")
ProtoInstance704 = x3d.ProtoInstance()
ProtoInstance704.setName("Joint")
ProtoInstance704.setDEF("hanim_r_metacarpophalangeal4")
fieldValue705 = x3d.fieldValue()
fieldValue705.setName("stiffness")
fieldValue705.setValue("1 1 1")

ProtoInstance704.addFieldValue(fieldValue705)
fieldValue706 = x3d.fieldValue()
fieldValue706.setName("name")
fieldValue706.setValue("r_metacarpophalangeal_3")

ProtoInstance704.addFieldValue(fieldValue706)
fieldValue707 = x3d.fieldValue()
fieldValue707.setName("center")
fieldValue707.setValue("-0.197200000286102 0.784900009632111 -0.0467999987304211")

ProtoInstance704.addFieldValue(fieldValue707)
fieldValue708 = x3d.fieldValue()
fieldValue708.setName("children")
ProtoInstance709 = x3d.ProtoInstance()
ProtoInstance709.setName("Joint")
ProtoInstance709.setDEF("hanim_r_carpal_proximal_interphalangeal4")
fieldValue710 = x3d.fieldValue()
fieldValue710.setName("stiffness")
fieldValue710.setValue("1 1 1")

ProtoInstance709.addFieldValue(fieldValue710)
fieldValue711 = x3d.fieldValue()
fieldValue711.setName("name")
fieldValue711.setValue("r_carpal_proximal_interphalangeal_3")

ProtoInstance709.addFieldValue(fieldValue711)
fieldValue712 = x3d.fieldValue()
fieldValue712.setName("center")
fieldValue712.setValue("-0.194999992847443 0.730400025844574 -0.0441000014543533")

ProtoInstance709.addFieldValue(fieldValue712)
fieldValue713 = x3d.fieldValue()
fieldValue713.setName("children")
ProtoInstance714 = x3d.ProtoInstance()
ProtoInstance714.setName("Joint")
ProtoInstance714.setDEF("hanim_r_carpal_distal_interphalangeal4")
fieldValue715 = x3d.fieldValue()
fieldValue715.setName("stiffness")
fieldValue715.setValue("1 1 1")

ProtoInstance714.addFieldValue(fieldValue715)
fieldValue716 = x3d.fieldValue()
fieldValue716.setName("name")
fieldValue716.setValue("r_carpal_distal_interphalangeal_3")

ProtoInstance714.addFieldValue(fieldValue716)
fieldValue717 = x3d.fieldValue()
fieldValue717.setName("center")
fieldValue717.setValue("-0.193900004029274 0.704200029373169 -0.0432000011205673")

ProtoInstance714.addFieldValue(fieldValue717)
fieldValue718 = x3d.fieldValue()
fieldValue718.setName("children")
ProtoInstance719 = x3d.ProtoInstance()
ProtoInstance719.setName("Segment")
ProtoInstance719.setDEF("hanim_r_carpal_distal_phalanx4")
fieldValue720 = x3d.fieldValue()
fieldValue720.setName("name")
fieldValue720.setValue("r_carpal_distal_phalanx_3")

ProtoInstance719.addFieldValue(fieldValue720)
fieldValue721 = x3d.fieldValue()
fieldValue721.setName("children")
ProtoInstance722 = x3d.ProtoInstance()
ProtoInstance722.setName("Site")
ProtoInstance722.setDEF("hanim_r_carpal_distal_phalanx_3_tip_2")
fieldValue723 = x3d.fieldValue()
fieldValue723.setName("name")
fieldValue723.setValue("r_carpal_distal_phalanx_3_tip")

ProtoInstance722.addFieldValue(fieldValue723)
fieldValue724 = x3d.fieldValue()
fieldValue724.setName("translation")
fieldValue724.setValue("-0.196899995207787 0.675800025463104 -0.0427000001072884")

ProtoInstance722.addFieldValue(fieldValue724)

fieldValue721.addChildren(ProtoInstance722)

ProtoInstance719.addFieldValue(fieldValue721)

fieldValue718.addChildren(ProtoInstance719)

ProtoInstance714.addFieldValue(fieldValue718)

fieldValue713.addChildren(ProtoInstance714)
ProtoInstance725 = x3d.ProtoInstance()
ProtoInstance725.setName("Segment")
ProtoInstance725.setDEF("hanim_r_middle_middle_2")
fieldValue726 = x3d.fieldValue()
fieldValue726.setName("name")
fieldValue726.setValue("r_middle_middle")

ProtoInstance725.addFieldValue(fieldValue726)

fieldValue713.addChildren(ProtoInstance725)

ProtoInstance709.addFieldValue(fieldValue713)

fieldValue708.addChildren(ProtoInstance709)
ProtoInstance727 = x3d.ProtoInstance()
ProtoInstance727.setName("Segment")
ProtoInstance727.setDEF("hanim_r_middle_proximal_2")
fieldValue728 = x3d.fieldValue()
fieldValue728.setName("name")
fieldValue728.setValue("r_middle_proximal")

ProtoInstance727.addFieldValue(fieldValue728)

fieldValue708.addChildren(ProtoInstance727)

ProtoInstance704.addFieldValue(fieldValue708)

fieldValue703.addChildren(ProtoInstance704)
ProtoInstance729 = x3d.ProtoInstance()
ProtoInstance729.setName("Segment")
ProtoInstance729.setDEF("hanim_r_middle_metacarpal_2")
fieldValue730 = x3d.fieldValue()
fieldValue730.setName("name")
fieldValue730.setValue("r_middle_metacarpal")

ProtoInstance729.addFieldValue(fieldValue730)

fieldValue703.addChildren(ProtoInstance729)

ProtoInstance699.addFieldValue(fieldValue703)

fieldValue638.addChildren(ProtoInstance699)
ProtoInstance731 = x3d.ProtoInstance()
ProtoInstance731.setName("Joint")
ProtoInstance731.setDEF("hanim_r_carpometacarpal5")
fieldValue732 = x3d.fieldValue()
fieldValue732.setName("stiffness")
fieldValue732.setValue("1 1 1")

ProtoInstance731.addFieldValue(fieldValue732)
fieldValue733 = x3d.fieldValue()
fieldValue733.setName("name")
fieldValue733.setValue("r_carpometacarpal_4")

ProtoInstance731.addFieldValue(fieldValue733)
fieldValue734 = x3d.fieldValue()
fieldValue734.setName("center")
fieldValue734.setValue("-0.195099994540215 0.804899990558624 -0.0732000023126602")

ProtoInstance731.addFieldValue(fieldValue734)
fieldValue735 = x3d.fieldValue()
fieldValue735.setName("children")
ProtoInstance736 = x3d.ProtoInstance()
ProtoInstance736.setName("Joint")
ProtoInstance736.setDEF("hanim_r_metacarpophalangeal5")
fieldValue737 = x3d.fieldValue()
fieldValue737.setName("stiffness")
fieldValue737.setValue("1 1 1")

ProtoInstance736.addFieldValue(fieldValue737)
fieldValue738 = x3d.fieldValue()
fieldValue738.setName("name")
fieldValue738.setValue("r_metacarpophalangeal_4")

ProtoInstance736.addFieldValue(fieldValue738)
fieldValue739 = x3d.fieldValue()
fieldValue739.setName("center")
fieldValue739.setValue("-0.195099994540215 0.784500002861023 -0.0732000023126602")

ProtoInstance736.addFieldValue(fieldValue739)
fieldValue740 = x3d.fieldValue()
fieldValue740.setName("children")
ProtoInstance741 = x3d.ProtoInstance()
ProtoInstance741.setName("Joint")
ProtoInstance741.setDEF("hanim_r_carpal_proximal_interphalangeal5")
fieldValue742 = x3d.fieldValue()
fieldValue742.setName("stiffness")
fieldValue742.setValue("1 1 1")

ProtoInstance741.addFieldValue(fieldValue742)
fieldValue743 = x3d.fieldValue()
fieldValue743.setName("name")
fieldValue743.setValue("r_carpal_proximal_interphalangeal_4")

ProtoInstance741.addFieldValue(fieldValue743)
fieldValue744 = x3d.fieldValue()
fieldValue744.setName("center")
fieldValue744.setValue("-0.19200000166893 0.731800019741058 -0.0715999975800514")

ProtoInstance741.addFieldValue(fieldValue744)
fieldValue745 = x3d.fieldValue()
fieldValue745.setName("children")
ProtoInstance746 = x3d.ProtoInstance()
ProtoInstance746.setName("Joint")
ProtoInstance746.setDEF("hanim_r_carpal_distal_interphalangeal5")
fieldValue747 = x3d.fieldValue()
fieldValue747.setName("stiffness")
fieldValue747.setValue("1 1 1")

ProtoInstance746.addFieldValue(fieldValue747)
fieldValue748 = x3d.fieldValue()
fieldValue748.setName("name")
fieldValue748.setValue("r_carpal_distal_interphalangeal_4")

ProtoInstance746.addFieldValue(fieldValue748)
fieldValue749 = x3d.fieldValue()
fieldValue749.setName("center")
fieldValue749.setValue("-0.190799996256828 0.70770001411438 -0.0706000030040741")

ProtoInstance746.addFieldValue(fieldValue749)
fieldValue750 = x3d.fieldValue()
fieldValue750.setName("children")
ProtoInstance751 = x3d.ProtoInstance()
ProtoInstance751.setName("Segment")
ProtoInstance751.setDEF("hanim_r_carpal_distal_phalanx5")
fieldValue752 = x3d.fieldValue()
fieldValue752.setName("name")
fieldValue752.setValue("r_carpal_distal_phalanx_4")

ProtoInstance751.addFieldValue(fieldValue752)
fieldValue753 = x3d.fieldValue()
fieldValue753.setName("children")
ProtoInstance754 = x3d.ProtoInstance()
ProtoInstance754.setName("Site")
ProtoInstance754.setDEF("hanim_r_carpal_distal_phalanx_4_tip_2")
fieldValue755 = x3d.fieldValue()
fieldValue755.setName("name")
fieldValue755.setValue("r_carpal_distal_phalanx_4_tip")

ProtoInstance754.addFieldValue(fieldValue755)
fieldValue756 = x3d.fieldValue()
fieldValue756.setName("translation")
fieldValue756.setValue("-0.193399995565414 0.677799999713898 -0.069300003349781")

ProtoInstance754.addFieldValue(fieldValue756)

fieldValue753.addChildren(ProtoInstance754)

ProtoInstance751.addFieldValue(fieldValue753)

fieldValue750.addChildren(ProtoInstance751)

ProtoInstance746.addFieldValue(fieldValue750)

fieldValue745.addChildren(ProtoInstance746)
ProtoInstance757 = x3d.ProtoInstance()
ProtoInstance757.setName("Segment")
ProtoInstance757.setDEF("hanim_r_ring_middle_2")
fieldValue758 = x3d.fieldValue()
fieldValue758.setName("name")
fieldValue758.setValue("r_ring_middle")

ProtoInstance757.addFieldValue(fieldValue758)

fieldValue745.addChildren(ProtoInstance757)

ProtoInstance741.addFieldValue(fieldValue745)

fieldValue740.addChildren(ProtoInstance741)
ProtoInstance759 = x3d.ProtoInstance()
ProtoInstance759.setName("Segment")
ProtoInstance759.setDEF("hanim_r_ring_proximal_2")
fieldValue760 = x3d.fieldValue()
fieldValue760.setName("name")
fieldValue760.setValue("r_ring_proximal")

ProtoInstance759.addFieldValue(fieldValue760)

fieldValue740.addChildren(ProtoInstance759)

ProtoInstance736.addFieldValue(fieldValue740)

fieldValue735.addChildren(ProtoInstance736)
ProtoInstance761 = x3d.ProtoInstance()
ProtoInstance761.setName("Segment")
ProtoInstance761.setDEF("hanim_r_ring_metacarpal_2")
fieldValue762 = x3d.fieldValue()
fieldValue762.setName("name")
fieldValue762.setValue("r_ring_metacarpal")

ProtoInstance761.addFieldValue(fieldValue762)

fieldValue735.addChildren(ProtoInstance761)

ProtoInstance731.addFieldValue(fieldValue735)

fieldValue638.addChildren(ProtoInstance731)
ProtoInstance763 = x3d.ProtoInstance()
ProtoInstance763.setName("Joint")
ProtoInstance763.setDEF("hanim_r_carpometacarpal6")
fieldValue764 = x3d.fieldValue()
fieldValue764.setName("stiffness")
fieldValue764.setValue("1 1 1")

ProtoInstance763.addFieldValue(fieldValue764)
fieldValue765 = x3d.fieldValue()
fieldValue765.setName("name")
fieldValue765.setValue("r_carpometacarpal_5")

ProtoInstance763.addFieldValue(fieldValue765)
fieldValue766 = x3d.fieldValue()
fieldValue766.setName("center")
fieldValue766.setValue("-0.1925999969244 0.809599995613098 -0.0974999964237213")

ProtoInstance763.addFieldValue(fieldValue766)
fieldValue767 = x3d.fieldValue()
fieldValue767.setName("children")
ProtoInstance768 = x3d.ProtoInstance()
ProtoInstance768.setName("Joint")
ProtoInstance768.setDEF("hanim_r_metacarpophalangeal6")
fieldValue769 = x3d.fieldValue()
fieldValue769.setName("stiffness")
fieldValue769.setValue("1 1 1")

ProtoInstance768.addFieldValue(fieldValue769)
fieldValue770 = x3d.fieldValue()
fieldValue770.setName("name")
fieldValue770.setValue("r_metacarpophalangeal_5")

ProtoInstance768.addFieldValue(fieldValue770)
fieldValue771 = x3d.fieldValue()
fieldValue771.setName("center")
fieldValue771.setValue("-0.1925999969244 0.789600014686584 -0.0974999964237213")

ProtoInstance768.addFieldValue(fieldValue771)
fieldValue772 = x3d.fieldValue()
fieldValue772.setName("children")
ProtoInstance773 = x3d.ProtoInstance()
ProtoInstance773.setName("Joint")
ProtoInstance773.setDEF("hanim_r_carpal_proximal_interphalangeal6")
fieldValue774 = x3d.fieldValue()
fieldValue774.setName("stiffness")
fieldValue774.setValue("1 1 1")

ProtoInstance773.addFieldValue(fieldValue774)
fieldValue775 = x3d.fieldValue()
fieldValue775.setName("name")
fieldValue775.setValue("r_carpal_proximal_interphalangeal_5")

ProtoInstance773.addFieldValue(fieldValue775)
fieldValue776 = x3d.fieldValue()
fieldValue776.setName("center")
fieldValue776.setValue("-0.190200001001358 0.748300015926361 -0.0962999984622002")

ProtoInstance773.addFieldValue(fieldValue776)
fieldValue777 = x3d.fieldValue()
fieldValue777.setName("children")
ProtoInstance778 = x3d.ProtoInstance()
ProtoInstance778.setName("Joint")
ProtoInstance778.setDEF("hanim_r_carpal_distal_interphalangeal6")
fieldValue779 = x3d.fieldValue()
fieldValue779.setName("stiffness")
fieldValue779.setValue("1 1 1")

ProtoInstance778.addFieldValue(fieldValue779)
fieldValue780 = x3d.fieldValue()
fieldValue780.setName("name")
fieldValue780.setValue("r_carpal_distal_interphalangeal_5")

ProtoInstance778.addFieldValue(fieldValue780)
fieldValue781 = x3d.fieldValue()
fieldValue781.setName("center")
fieldValue781.setValue("-0.190799996256828 0.754000008106232 -0.096000000834465")

ProtoInstance778.addFieldValue(fieldValue781)
fieldValue782 = x3d.fieldValue()
fieldValue782.setName("children")
ProtoInstance783 = x3d.ProtoInstance()
ProtoInstance783.setName("Segment")
ProtoInstance783.setDEF("hanim_r_carpal_distal_phalanx6")
fieldValue784 = x3d.fieldValue()
fieldValue784.setName("name")
fieldValue784.setValue("r_carpal_distal_phalanx_5")

ProtoInstance783.addFieldValue(fieldValue784)
fieldValue785 = x3d.fieldValue()
fieldValue785.setName("children")
ProtoInstance786 = x3d.ProtoInstance()
ProtoInstance786.setName("Site")
ProtoInstance786.setDEF("hanim_r_carpal_distal_phalanx_5_tip_2")
fieldValue787 = x3d.fieldValue()
fieldValue787.setName("name")
fieldValue787.setValue("r_carpal_distal_phalanx_5_tip")

ProtoInstance786.addFieldValue(fieldValue787)
fieldValue788 = x3d.fieldValue()
fieldValue788.setName("translation")
fieldValue788.setValue("-0.193800002336502 0.703499972820282 -0.0948999971151352")

ProtoInstance786.addFieldValue(fieldValue788)

fieldValue785.addChildren(ProtoInstance786)

ProtoInstance783.addFieldValue(fieldValue785)

fieldValue782.addChildren(ProtoInstance783)

ProtoInstance778.addFieldValue(fieldValue782)

fieldValue777.addChildren(ProtoInstance778)
ProtoInstance789 = x3d.ProtoInstance()
ProtoInstance789.setName("Segment")
ProtoInstance789.setDEF("hanim_r_pinky_middle_2")
fieldValue790 = x3d.fieldValue()
fieldValue790.setName("name")
fieldValue790.setValue("r_pinky_middle")

ProtoInstance789.addFieldValue(fieldValue790)

fieldValue777.addChildren(ProtoInstance789)

ProtoInstance773.addFieldValue(fieldValue777)

fieldValue772.addChildren(ProtoInstance773)
ProtoInstance791 = x3d.ProtoInstance()
ProtoInstance791.setName("Segment")
ProtoInstance791.setDEF("hanim_r_pinky_proximal_2")
fieldValue792 = x3d.fieldValue()
fieldValue792.setName("name")
fieldValue792.setValue("r_pinky_proximal")

ProtoInstance791.addFieldValue(fieldValue792)

fieldValue772.addChildren(ProtoInstance791)

ProtoInstance768.addFieldValue(fieldValue772)

fieldValue767.addChildren(ProtoInstance768)
ProtoInstance793 = x3d.ProtoInstance()
ProtoInstance793.setName("Segment")
ProtoInstance793.setDEF("hanim_r_pinky_metacarpal_2")
fieldValue794 = x3d.fieldValue()
fieldValue794.setName("name")
fieldValue794.setValue("r_pinky_metacarpal")

ProtoInstance793.addFieldValue(fieldValue794)

fieldValue767.addChildren(ProtoInstance793)

ProtoInstance763.addFieldValue(fieldValue767)

fieldValue638.addChildren(ProtoInstance763)
ProtoInstance795 = x3d.ProtoInstance()
ProtoInstance795.setName("Segment")
ProtoInstance795.setDEF("hanim_r_hand_2")
fieldValue796 = x3d.fieldValue()
fieldValue796.setName("name")
fieldValue796.setValue("r_hand")

ProtoInstance795.addFieldValue(fieldValue796)
fieldValue797 = x3d.fieldValue()
fieldValue797.setName("children")
ProtoInstance798 = x3d.ProtoInstance()
ProtoInstance798.setName("Site")
ProtoInstance798.setDEF("hanim_r_metacarpal_phalanx3")
fieldValue799 = x3d.fieldValue()
fieldValue799.setName("name")
fieldValue799.setValue("r_metacarpal_phalanx_2")

ProtoInstance798.addFieldValue(fieldValue799)
fieldValue800 = x3d.fieldValue()
fieldValue800.setName("translation")
fieldValue800.setValue("-0.197699993848801 0.816900014877319 -0.0176999997347593")

ProtoInstance798.addFieldValue(fieldValue800)

fieldValue797.addChildren(ProtoInstance798)
ProtoInstance801 = x3d.ProtoInstance()
ProtoInstance801.setName("Site")
ProtoInstance801.setDEF("hanim_r_ulnar_styloid_2")
fieldValue802 = x3d.fieldValue()
fieldValue802.setName("name")
fieldValue802.setValue("r_ulnar_styloid")

ProtoInstance801.addFieldValue(fieldValue802)
fieldValue803 = x3d.fieldValue()
fieldValue803.setName("translation")
fieldValue803.setValue("-0.21170000731945 0.856199979782104 -0.0584000013768673")

ProtoInstance801.addFieldValue(fieldValue803)

fieldValue797.addChildren(ProtoInstance801)
ProtoInstance804 = x3d.ProtoInstance()
ProtoInstance804.setName("Site")
ProtoInstance804.setDEF("hanim_r_metacarpal_phalanx6")
fieldValue805 = x3d.fieldValue()
fieldValue805.setName("name")
fieldValue805.setValue("r_metacarpal_phalanx_5")

ProtoInstance804.addFieldValue(fieldValue805)
fieldValue806 = x3d.fieldValue()
fieldValue806.setName("translation")
fieldValue806.setValue("-0.192900002002716 0.788999974727631 -0.10639999806881")

ProtoInstance804.addFieldValue(fieldValue806)

fieldValue797.addChildren(ProtoInstance804)

ProtoInstance795.addFieldValue(fieldValue797)

fieldValue638.addChildren(ProtoInstance795)

ProtoInstance634.addFieldValue(fieldValue638)

fieldValue633.addChildren(ProtoInstance634)
ProtoInstance807 = x3d.ProtoInstance()
ProtoInstance807.setName("Segment")
ProtoInstance807.setDEF("hanim_r_forearm_2")
fieldValue808 = x3d.fieldValue()
fieldValue808.setName("name")
fieldValue808.setValue("r_forearm")

ProtoInstance807.addFieldValue(fieldValue808)
fieldValue809 = x3d.fieldValue()
fieldValue809.setName("children")
ProtoInstance810 = x3d.ProtoInstance()
ProtoInstance810.setName("Site")
ProtoInstance810.setDEF("hanim_r_radial_styloid_2")
fieldValue811 = x3d.fieldValue()
fieldValue811.setName("name")
fieldValue811.setValue("r_radial_styloid")

ProtoInstance810.addFieldValue(fieldValue811)
fieldValue812 = x3d.fieldValue()
fieldValue812.setName("translation")
fieldValue812.setValue("-0.188400000333786 0.86760002374649 -0.0359999984502792")

ProtoInstance810.addFieldValue(fieldValue812)

fieldValue809.addChildren(ProtoInstance810)
ProtoInstance813 = x3d.ProtoInstance()
ProtoInstance813.setName("Site")
ProtoInstance813.setDEF("hanim_r_olecranon_2")
fieldValue814 = x3d.fieldValue()
fieldValue814.setName("name")
fieldValue814.setValue("r_olecranon")

ProtoInstance813.addFieldValue(fieldValue814)
fieldValue815 = x3d.fieldValue()
fieldValue815.setName("translation")
fieldValue815.setValue("-0.190699994564056 1.14049994945526 -0.106499999761581")

ProtoInstance813.addFieldValue(fieldValue815)

fieldValue809.addChildren(ProtoInstance813)
ProtoInstance816 = x3d.ProtoInstance()
ProtoInstance816.setName("Site")
ProtoInstance816.setDEF("hanim_r_humeral_medial_epicondyles_2")
fieldValue817 = x3d.fieldValue()
fieldValue817.setName("name")
fieldValue817.setValue("r_humeral_medial_epicondyles")

ProtoInstance816.addFieldValue(fieldValue817)
fieldValue818 = x3d.fieldValue()
fieldValue818.setName("translation")
fieldValue818.setValue("-0.167999997735024 1.12979996204376 -0.106200002133846")

ProtoInstance816.addFieldValue(fieldValue818)

fieldValue809.addChildren(ProtoInstance816)
ProtoInstance819 = x3d.ProtoInstance()
ProtoInstance819.setName("Site")
ProtoInstance819.setDEF("hanim_r_radiale_2")
fieldValue820 = x3d.fieldValue()
fieldValue820.setName("name")
fieldValue820.setValue("r_radiale")

ProtoInstance819.addFieldValue(fieldValue820)
fieldValue821 = x3d.fieldValue()
fieldValue821.setName("translation")
fieldValue821.setValue("-0.212999999523163 1.130499958992 -0.109099999070168")

ProtoInstance819.addFieldValue(fieldValue821)

fieldValue809.addChildren(ProtoInstance819)

ProtoInstance807.addFieldValue(fieldValue809)

fieldValue633.addChildren(ProtoInstance807)

ProtoInstance629.addFieldValue(fieldValue633)

fieldValue628.addChildren(ProtoInstance629)
ProtoInstance822 = x3d.ProtoInstance()
ProtoInstance822.setName("Segment")
ProtoInstance822.setDEF("hanim_r_upperarm_2")
fieldValue823 = x3d.fieldValue()
fieldValue823.setName("name")
fieldValue823.setValue("r_upperarm")

ProtoInstance822.addFieldValue(fieldValue823)
fieldValue824 = x3d.fieldValue()
fieldValue824.setName("children")
ProtoInstance825 = x3d.ProtoInstance()
ProtoInstance825.setName("Site")
ProtoInstance825.setDEF("hanim_r_humeral_lateral_epicondyles_2")
fieldValue826 = x3d.fieldValue()
fieldValue826.setName("name")
fieldValue826.setValue("r_humeral_lateral_epicondyles")

ProtoInstance825.addFieldValue(fieldValue826)
fieldValue827 = x3d.fieldValue()
fieldValue827.setName("translation")
fieldValue827.setValue("-0.222399994730949 1.15170001983643 -0.103299997746944")

ProtoInstance825.addFieldValue(fieldValue827)

fieldValue824.addChildren(ProtoInstance825)

ProtoInstance822.addFieldValue(fieldValue824)

fieldValue628.addChildren(ProtoInstance822)

ProtoInstance624.addFieldValue(fieldValue628)

fieldValue623.addChildren(ProtoInstance624)
ProtoInstance828 = x3d.ProtoInstance()
ProtoInstance828.setName("Segment")
ProtoInstance828.setDEF("hanim_r_scapula_2")
fieldValue829 = x3d.fieldValue()
fieldValue829.setName("name")
fieldValue829.setValue("r_scapula")

ProtoInstance828.addFieldValue(fieldValue829)

fieldValue623.addChildren(ProtoInstance828)

ProtoInstance619.addFieldValue(fieldValue623)

fieldValue618.addChildren(ProtoInstance619)
ProtoInstance830 = x3d.ProtoInstance()
ProtoInstance830.setName("Segment")
ProtoInstance830.setDEF("hanim_r_clavicle_2")
fieldValue831 = x3d.fieldValue()
fieldValue831.setName("name")
fieldValue831.setValue("r_clavicle")

ProtoInstance830.addFieldValue(fieldValue831)
fieldValue832 = x3d.fieldValue()
fieldValue832.setName("children")
ProtoInstance833 = x3d.ProtoInstance()
ProtoInstance833.setName("Site")
ProtoInstance833.setDEF("hanim_r_clavicale_2")
fieldValue834 = x3d.fieldValue()
fieldValue834.setName("name")
fieldValue834.setValue("r_clavicale")

ProtoInstance833.addFieldValue(fieldValue834)
fieldValue835 = x3d.fieldValue()
fieldValue835.setName("translation")
fieldValue835.setValue("-0.0115000000223517 1.49430000782013 0.0399999991059303")

ProtoInstance833.addFieldValue(fieldValue835)

fieldValue832.addChildren(ProtoInstance833)
ProtoInstance836 = x3d.ProtoInstance()
ProtoInstance836.setName("Site")
ProtoInstance836.setDEF("hanim_r_acromion_2")
fieldValue837 = x3d.fieldValue()
fieldValue837.setName("name")
fieldValue837.setValue("r_acromion")

ProtoInstance836.addFieldValue(fieldValue837)
fieldValue838 = x3d.fieldValue()
fieldValue838.setName("translation")
fieldValue838.setValue("-0.190500006079674 1.47909998893738 -0.0430999994277954")

ProtoInstance836.addFieldValue(fieldValue838)

fieldValue832.addChildren(ProtoInstance836)
ProtoInstance839 = x3d.ProtoInstance()
ProtoInstance839.setName("Site")
ProtoInstance839.setDEF("hanim_r_axilla_proximal_2")
fieldValue840 = x3d.fieldValue()
fieldValue840.setName("name")
fieldValue840.setValue("r_axilla_proximal")

ProtoInstance839.addFieldValue(fieldValue840)
fieldValue841 = x3d.fieldValue()
fieldValue841.setName("translation")
fieldValue841.setValue("-0.162599995732307 1.40719997882843 -0.00310000008903444")

ProtoInstance839.addFieldValue(fieldValue841)

fieldValue832.addChildren(ProtoInstance839)
ProtoInstance842 = x3d.ProtoInstance()
ProtoInstance842.setName("Site")
ProtoInstance842.setDEF("hanim_r_axilla_distal_2")
fieldValue843 = x3d.fieldValue()
fieldValue843.setName("name")
fieldValue843.setValue("r_axilla_distal")

ProtoInstance842.addFieldValue(fieldValue843)
fieldValue844 = x3d.fieldValue()
fieldValue844.setName("translation")
fieldValue844.setValue("-0.160300001502037 1.40980005264282 -0.0825999975204468")

ProtoInstance842.addFieldValue(fieldValue844)

fieldValue832.addChildren(ProtoInstance842)

ProtoInstance830.addFieldValue(fieldValue832)

fieldValue618.addChildren(ProtoInstance830)

ProtoInstance614.addFieldValue(fieldValue618)

fieldValue330.addChildren(ProtoInstance614)
ProtoInstance845 = x3d.ProtoInstance()
ProtoInstance845.setName("Segment")
ProtoInstance845.setDEF("hanim_t1_2")
fieldValue846 = x3d.fieldValue()
fieldValue846.setName("name")
fieldValue846.setValue("t1")

ProtoInstance845.addFieldValue(fieldValue846)
fieldValue847 = x3d.fieldValue()
fieldValue847.setName("children")
ProtoInstance848 = x3d.ProtoInstance()
ProtoInstance848.setName("Site")
ProtoInstance848.setDEF("hanim_r_neck_base_2")
fieldValue849 = x3d.fieldValue()
fieldValue849.setName("name")
fieldValue849.setValue("r_neck_base")

ProtoInstance848.addFieldValue(fieldValue849)
fieldValue850 = x3d.fieldValue()
fieldValue850.setName("translation")
fieldValue850.setValue("-0.0419000014662743 1.51489996910095 -0.0219999998807907")

ProtoInstance848.addFieldValue(fieldValue850)

fieldValue847.addChildren(ProtoInstance848)
ProtoInstance851 = x3d.ProtoInstance()
ProtoInstance851.setName("Site")
ProtoInstance851.setDEF("hanim_l_neck_base_2")
fieldValue852 = x3d.fieldValue()
fieldValue852.setName("name")
fieldValue852.setValue("l_neck_base")

ProtoInstance851.addFieldValue(fieldValue852)
fieldValue853 = x3d.fieldValue()
fieldValue853.setName("translation")
fieldValue853.setValue("0.0645999982953072 1.51409995555878 -0.0379999987781048")

ProtoInstance851.addFieldValue(fieldValue853)

fieldValue847.addChildren(ProtoInstance851)
ProtoInstance854 = x3d.ProtoInstance()
ProtoInstance854.setName("Site")
ProtoInstance854.setDEF("hanim_suprasternale_2")
fieldValue855 = x3d.fieldValue()
fieldValue855.setName("name")
fieldValue855.setValue("suprasternale")

ProtoInstance854.addFieldValue(fieldValue855)
fieldValue856 = x3d.fieldValue()
fieldValue856.setName("translation")
fieldValue856.setValue("0.00839999970048666 1.47140002250671 0.0551000013947487")

ProtoInstance854.addFieldValue(fieldValue856)

fieldValue847.addChildren(ProtoInstance854)
ProtoInstance857 = x3d.ProtoInstance()
ProtoInstance857.setName("Site")
ProtoInstance857.setDEF("hanim_cervicale_2")
fieldValue858 = x3d.fieldValue()
fieldValue858.setName("name")
fieldValue858.setValue("cervicale")

ProtoInstance857.addFieldValue(fieldValue858)
fieldValue859 = x3d.fieldValue()
fieldValue859.setName("translation")
fieldValue859.setValue("0.0063999998383224 1.51999998092651 -0.0815000012516975")

ProtoInstance857.addFieldValue(fieldValue859)

fieldValue847.addChildren(ProtoInstance857)

ProtoInstance845.addFieldValue(fieldValue847)

fieldValue330.addChildren(ProtoInstance845)

ProtoInstance326.addFieldValue(fieldValue330)

fieldValue325.addChildren(ProtoInstance326)
ProtoInstance860 = x3d.ProtoInstance()
ProtoInstance860.setName("Segment")
ProtoInstance860.setDEF("hanim_t6_2")
fieldValue861 = x3d.fieldValue()
fieldValue861.setName("name")
fieldValue861.setValue("t6")

ProtoInstance860.addFieldValue(fieldValue861)

fieldValue325.addChildren(ProtoInstance860)

ProtoInstance321.addFieldValue(fieldValue325)

fieldValue320.addChildren(ProtoInstance321)
ProtoInstance862 = x3d.ProtoInstance()
ProtoInstance862.setName("Segment")
ProtoInstance862.setDEF("hanim_t10_2")
fieldValue863 = x3d.fieldValue()
fieldValue863.setName("name")
fieldValue863.setValue("t10")

ProtoInstance862.addFieldValue(fieldValue863)
fieldValue864 = x3d.fieldValue()
fieldValue864.setName("children")
ProtoInstance865 = x3d.ProtoInstance()
ProtoInstance865.setName("Site")
ProtoInstance865.setDEF("hanim_r_thelion_2")
fieldValue866 = x3d.fieldValue()
fieldValue866.setName("name")
fieldValue866.setValue("r_thelion")

ProtoInstance865.addFieldValue(fieldValue866)
fieldValue867 = x3d.fieldValue()
fieldValue867.setName("translation")
fieldValue867.setValue("-0.0736000016331673 1.33850002288818 0.121699996292591")

ProtoInstance865.addFieldValue(fieldValue867)

fieldValue864.addChildren(ProtoInstance865)
ProtoInstance868 = x3d.ProtoInstance()
ProtoInstance868.setName("Site")
ProtoInstance868.setDEF("hanim_l_thelion_2")
fieldValue869 = x3d.fieldValue()
fieldValue869.setName("name")
fieldValue869.setValue("l_thelion")

ProtoInstance868.addFieldValue(fieldValue869)
fieldValue870 = x3d.fieldValue()
fieldValue870.setName("translation")
fieldValue870.setValue("0.0917999967932701 1.33819997310638 0.119199998676777")

ProtoInstance868.addFieldValue(fieldValue870)

fieldValue864.addChildren(ProtoInstance868)
ProtoInstance871 = x3d.ProtoInstance()
ProtoInstance871.setName("Site")
ProtoInstance871.setDEF("hanim_substernale_2")
fieldValue872 = x3d.fieldValue()
fieldValue872.setName("name")
fieldValue872.setValue("substernale")

ProtoInstance871.addFieldValue(fieldValue872)
fieldValue873 = x3d.fieldValue()
fieldValue873.setName("translation")
fieldValue873.setValue("0.008500000461936 1.29949998855591 0.114699997007847")

ProtoInstance871.addFieldValue(fieldValue873)

fieldValue864.addChildren(ProtoInstance871)

ProtoInstance862.addFieldValue(fieldValue864)

fieldValue320.addChildren(ProtoInstance862)

ProtoInstance316.addFieldValue(fieldValue320)

fieldValue315.addChildren(ProtoInstance316)
ProtoInstance874 = x3d.ProtoInstance()
ProtoInstance874.setName("Segment")
ProtoInstance874.setDEF("hanim_l1_2")
fieldValue875 = x3d.fieldValue()
fieldValue875.setName("name")
fieldValue875.setValue("l1")

ProtoInstance874.addFieldValue(fieldValue875)

fieldValue315.addChildren(ProtoInstance874)

ProtoInstance311.addFieldValue(fieldValue315)

fieldValue310.addChildren(ProtoInstance311)
ProtoInstance876 = x3d.ProtoInstance()
ProtoInstance876.setName("Segment")
ProtoInstance876.setDEF("hanim_l3_2")
fieldValue877 = x3d.fieldValue()
fieldValue877.setName("name")
fieldValue877.setValue("l3")

ProtoInstance876.addFieldValue(fieldValue877)
fieldValue878 = x3d.fieldValue()
fieldValue878.setName("children")
ProtoInstance879 = x3d.ProtoInstance()
ProtoInstance879.setName("Site")
ProtoInstance879.setDEF("hanim_r_rib10_2")
fieldValue880 = x3d.fieldValue()
fieldValue880.setName("name")
fieldValue880.setValue("r_rib10")

ProtoInstance879.addFieldValue(fieldValue880)
fieldValue881 = x3d.fieldValue()
fieldValue881.setName("translation")
fieldValue881.setValue("-0.0710999965667725 1.19410002231598 0.101599998772144")

ProtoInstance879.addFieldValue(fieldValue881)

fieldValue878.addChildren(ProtoInstance879)
ProtoInstance882 = x3d.ProtoInstance()
ProtoInstance882.setName("Site")
ProtoInstance882.setDEF("hanim_l_rib10_2")
fieldValue883 = x3d.fieldValue()
fieldValue883.setName("name")
fieldValue883.setValue("l_rib10")

ProtoInstance882.addFieldValue(fieldValue883)
fieldValue884 = x3d.fieldValue()
fieldValue884.setName("translation")
fieldValue884.setValue("0.0870999991893768 1.19249999523163 0.099200002849102")

ProtoInstance882.addFieldValue(fieldValue884)

fieldValue878.addChildren(ProtoInstance882)
ProtoInstance885 = x3d.ProtoInstance()
ProtoInstance885.setName("Site")
ProtoInstance885.setDEF("hanim_spine_2_lower_back_2")
fieldValue886 = x3d.fieldValue()
fieldValue886.setName("name")
fieldValue886.setValue("spine_2_lower_back")

ProtoInstance885.addFieldValue(fieldValue886)
fieldValue887 = x3d.fieldValue()
fieldValue887.setName("translation")
fieldValue887.setValue("0.00490000005811453 1.19079995155334 -0.111299999058247")

ProtoInstance885.addFieldValue(fieldValue887)

fieldValue878.addChildren(ProtoInstance885)

ProtoInstance876.addFieldValue(fieldValue878)

fieldValue310.addChildren(ProtoInstance876)

ProtoInstance306.addFieldValue(fieldValue310)

fieldValue305.addChildren(ProtoInstance306)
ProtoInstance888 = x3d.ProtoInstance()
ProtoInstance888.setName("Segment")
ProtoInstance888.setDEF("hanim_l5_2")
fieldValue889 = x3d.fieldValue()
fieldValue889.setName("name")
fieldValue889.setValue("l5")

ProtoInstance888.addFieldValue(fieldValue889)
fieldValue890 = x3d.fieldValue()
fieldValue890.setName("children")
ProtoInstance891 = x3d.ProtoInstance()
ProtoInstance891.setName("Site")
ProtoInstance891.setDEF("hanim_waist_preferred_posterior_2")
fieldValue892 = x3d.fieldValue()
fieldValue892.setName("name")
fieldValue892.setValue("waist_preferred_posterior")

ProtoInstance891.addFieldValue(fieldValue892)
fieldValue893 = x3d.fieldValue()
fieldValue893.setName("translation")
fieldValue893.setValue("0.28999999165535 1.09150004386902 -0.109099999070168")

ProtoInstance891.addFieldValue(fieldValue893)

fieldValue890.addChildren(ProtoInstance891)
ProtoInstance894 = x3d.ProtoInstance()
ProtoInstance894.setName("Site")
ProtoInstance894.setDEF("hanim_navel_2")
fieldValue895 = x3d.fieldValue()
fieldValue895.setName("name")
fieldValue895.setValue("navel")

ProtoInstance894.addFieldValue(fieldValue895)
fieldValue896 = x3d.fieldValue()
fieldValue896.setName("translation")
fieldValue896.setValue("0.00689999992027879 1.09660005569458 0.101700000464916")

ProtoInstance894.addFieldValue(fieldValue896)

fieldValue890.addChildren(ProtoInstance894)

ProtoInstance888.addFieldValue(fieldValue890)

fieldValue305.addChildren(ProtoInstance888)

ProtoInstance301.addFieldValue(fieldValue305)

fieldValue107.addChildren(ProtoInstance301)
ProtoInstance897 = x3d.ProtoInstance()
ProtoInstance897.setName("Segment")
ProtoInstance897.setDEF("hanim_sacrum_2")
fieldValue898 = x3d.fieldValue()
fieldValue898.setName("name")
fieldValue898.setValue("sacrum")

ProtoInstance897.addFieldValue(fieldValue898)

fieldValue107.addChildren(ProtoInstance897)

ProtoInstance103.addFieldValue(fieldValue107)

fieldValue102.addChildren(ProtoInstance103)

ProtoInstance101.addFieldValue(fieldValue102)
fieldValue899 = x3d.fieldValue()
fieldValue899.setName("joints")
ProtoInstance900 = x3d.ProtoInstance()
ProtoInstance900.setUSE("hanim_humanoid_root_2")

fieldValue899.addChildren(ProtoInstance900)
ProtoInstance901 = x3d.ProtoInstance()
ProtoInstance901.setUSE("hanim_sacroiliac_2")

fieldValue899.addChildren(ProtoInstance901)
ProtoInstance902 = x3d.ProtoInstance()
ProtoInstance902.setUSE("hanim_l_hip_2")

fieldValue899.addChildren(ProtoInstance902)
ProtoInstance903 = x3d.ProtoInstance()
ProtoInstance903.setUSE("hanim_l_knee_2")

fieldValue899.addChildren(ProtoInstance903)
ProtoInstance904 = x3d.ProtoInstance()
ProtoInstance904.setUSE("hanim_l_talocrural_2")

fieldValue899.addChildren(ProtoInstance904)
ProtoInstance905 = x3d.ProtoInstance()
ProtoInstance905.setUSE("hanim_l_tarsotarsal_interphalangeal__2")

fieldValue899.addChildren(ProtoInstance905)
ProtoInstance906 = x3d.ProtoInstance()
ProtoInstance906.setUSE("hanim_l_metatarsophalangeal__2")

fieldValue899.addChildren(ProtoInstance906)
ProtoInstance907 = x3d.ProtoInstance()
ProtoInstance907.setUSE("hanim_l_tarsal_interphalangeal__2")

fieldValue899.addChildren(ProtoInstance907)
ProtoInstance908 = x3d.ProtoInstance()
ProtoInstance908.setUSE("hanim_r_hip_2")

fieldValue899.addChildren(ProtoInstance908)
ProtoInstance909 = x3d.ProtoInstance()
ProtoInstance909.setUSE("hanim_r_knee_2")

fieldValue899.addChildren(ProtoInstance909)
ProtoInstance910 = x3d.ProtoInstance()
ProtoInstance910.setUSE("hanim_r_talocrural_2")

fieldValue899.addChildren(ProtoInstance910)
ProtoInstance911 = x3d.ProtoInstance()
ProtoInstance911.setUSE("hanim_r_tarsotarsal_interphalangeal__2")

fieldValue899.addChildren(ProtoInstance911)
ProtoInstance912 = x3d.ProtoInstance()
ProtoInstance912.setUSE("hanim_r_metatarsophalangeal__2")

fieldValue899.addChildren(ProtoInstance912)
ProtoInstance913 = x3d.ProtoInstance()
ProtoInstance913.setUSE("hanim_r_tarsal_interphalangeal__2")

fieldValue899.addChildren(ProtoInstance913)
ProtoInstance914 = x3d.ProtoInstance()
ProtoInstance914.setUSE("hanim_vl5_2")

fieldValue899.addChildren(ProtoInstance914)
ProtoInstance915 = x3d.ProtoInstance()
ProtoInstance915.setUSE("hanim_vl3_2")

fieldValue899.addChildren(ProtoInstance915)
ProtoInstance916 = x3d.ProtoInstance()
ProtoInstance916.setUSE("hanim_vl1_2")

fieldValue899.addChildren(ProtoInstance916)
ProtoInstance917 = x3d.ProtoInstance()
ProtoInstance917.setUSE("hanim_vt10_2")

fieldValue899.addChildren(ProtoInstance917)
ProtoInstance918 = x3d.ProtoInstance()
ProtoInstance918.setUSE("hanim_vt6_2")

fieldValue899.addChildren(ProtoInstance918)
ProtoInstance919 = x3d.ProtoInstance()
ProtoInstance919.setUSE("hanim_vt1_2")

fieldValue899.addChildren(ProtoInstance919)
ProtoInstance920 = x3d.ProtoInstance()
ProtoInstance920.setUSE("hanim_vc4_2")

fieldValue899.addChildren(ProtoInstance920)
ProtoInstance921 = x3d.ProtoInstance()
ProtoInstance921.setUSE("hanim_vc2_2")

fieldValue899.addChildren(ProtoInstance921)
ProtoInstance922 = x3d.ProtoInstance()
ProtoInstance922.setUSE("hanim_skullbase_2")

fieldValue899.addChildren(ProtoInstance922)
ProtoInstance923 = x3d.ProtoInstance()
ProtoInstance923.setUSE("hanim_l_sternoclavicular_2")

fieldValue899.addChildren(ProtoInstance923)
ProtoInstance924 = x3d.ProtoInstance()
ProtoInstance924.setUSE("hanim_l_acromioclavicular_2")

fieldValue899.addChildren(ProtoInstance924)
ProtoInstance925 = x3d.ProtoInstance()
ProtoInstance925.setUSE("hanim_l_shoulder_2")

fieldValue899.addChildren(ProtoInstance925)
ProtoInstance926 = x3d.ProtoInstance()
ProtoInstance926.setUSE("hanim_l_elbow_2")

fieldValue899.addChildren(ProtoInstance926)
ProtoInstance927 = x3d.ProtoInstance()
ProtoInstance927.setUSE("hanim_l_radiocarpal_2")

fieldValue899.addChildren(ProtoInstance927)
ProtoInstance928 = x3d.ProtoInstance()
ProtoInstance928.setUSE("hanim_l_carpometacarpal2")

fieldValue899.addChildren(ProtoInstance928)
ProtoInstance929 = x3d.ProtoInstance()
ProtoInstance929.setUSE("hanim_l_metacarpophalangeal2")

fieldValue899.addChildren(ProtoInstance929)
ProtoInstance930 = x3d.ProtoInstance()
ProtoInstance930.setUSE("hanim_l_carpal_interphalangeal2")

fieldValue899.addChildren(ProtoInstance930)
ProtoInstance931 = x3d.ProtoInstance()
ProtoInstance931.setUSE("hanim_l_carpometacarpal3")

fieldValue899.addChildren(ProtoInstance931)
ProtoInstance932 = x3d.ProtoInstance()
ProtoInstance932.setUSE("hanim_l_metacarpophalangeal3")

fieldValue899.addChildren(ProtoInstance932)
ProtoInstance933 = x3d.ProtoInstance()
ProtoInstance933.setUSE("hanim_l_carpal_proximal_interphalangeal3")

fieldValue899.addChildren(ProtoInstance933)
ProtoInstance934 = x3d.ProtoInstance()
ProtoInstance934.setUSE("hanim_l_carpal_distal_interphalangeal3")

fieldValue899.addChildren(ProtoInstance934)
ProtoInstance935 = x3d.ProtoInstance()
ProtoInstance935.setUSE("hanim_l_carpometacarpal4")

fieldValue899.addChildren(ProtoInstance935)
ProtoInstance936 = x3d.ProtoInstance()
ProtoInstance936.setUSE("hanim_l_metacarpophalangeal4")

fieldValue899.addChildren(ProtoInstance936)
ProtoInstance937 = x3d.ProtoInstance()
ProtoInstance937.setUSE("hanim_l_carpal_proximal_interphalangeal4")

fieldValue899.addChildren(ProtoInstance937)
ProtoInstance938 = x3d.ProtoInstance()
ProtoInstance938.setUSE("hanim_l_carpal_distal_interphalangeal4")

fieldValue899.addChildren(ProtoInstance938)
ProtoInstance939 = x3d.ProtoInstance()
ProtoInstance939.setUSE("hanim_l_carpometacarpal5")

fieldValue899.addChildren(ProtoInstance939)
ProtoInstance940 = x3d.ProtoInstance()
ProtoInstance940.setUSE("hanim_l_metacarpophalangeal5")

fieldValue899.addChildren(ProtoInstance940)
ProtoInstance941 = x3d.ProtoInstance()
ProtoInstance941.setUSE("hanim_l_carpal_proximal_interphalangeal5")

fieldValue899.addChildren(ProtoInstance941)
ProtoInstance942 = x3d.ProtoInstance()
ProtoInstance942.setUSE("hanim_l_carpal_distal_interphalangeal5")

fieldValue899.addChildren(ProtoInstance942)
ProtoInstance943 = x3d.ProtoInstance()
ProtoInstance943.setUSE("hanim_l_carpometacarpal6")

fieldValue899.addChildren(ProtoInstance943)
ProtoInstance944 = x3d.ProtoInstance()
ProtoInstance944.setUSE("hanim_l_metacarpophalangeal6")

fieldValue899.addChildren(ProtoInstance944)
ProtoInstance945 = x3d.ProtoInstance()
ProtoInstance945.setUSE("hanim_l_carpal_proximal_interphalangeal6")

fieldValue899.addChildren(ProtoInstance945)
ProtoInstance946 = x3d.ProtoInstance()
ProtoInstance946.setUSE("hanim_l_carpal_distal_interphalangeal6")

fieldValue899.addChildren(ProtoInstance946)
ProtoInstance947 = x3d.ProtoInstance()
ProtoInstance947.setUSE("hanim_r_sternoclavicular_2")

fieldValue899.addChildren(ProtoInstance947)
ProtoInstance948 = x3d.ProtoInstance()
ProtoInstance948.setUSE("hanim_r_acromioclavicular_2")

fieldValue899.addChildren(ProtoInstance948)
ProtoInstance949 = x3d.ProtoInstance()
ProtoInstance949.setUSE("hanim_r_shoulder_2")

fieldValue899.addChildren(ProtoInstance949)
ProtoInstance950 = x3d.ProtoInstance()
ProtoInstance950.setUSE("hanim_r_elbow_2")

fieldValue899.addChildren(ProtoInstance950)
ProtoInstance951 = x3d.ProtoInstance()
ProtoInstance951.setUSE("hanim_r_radiocarpal_2")

fieldValue899.addChildren(ProtoInstance951)
ProtoInstance952 = x3d.ProtoInstance()
ProtoInstance952.setUSE("hanim_r_carpometacarpal2")

fieldValue899.addChildren(ProtoInstance952)
ProtoInstance953 = x3d.ProtoInstance()
ProtoInstance953.setUSE("hanim_r_metacarpophalangeal2")

fieldValue899.addChildren(ProtoInstance953)
ProtoInstance954 = x3d.ProtoInstance()
ProtoInstance954.setUSE("hanim_r_carpal_interphalangeal2")

fieldValue899.addChildren(ProtoInstance954)
ProtoInstance955 = x3d.ProtoInstance()
ProtoInstance955.setUSE("hanim_r_carpometacarpal3")

fieldValue899.addChildren(ProtoInstance955)
ProtoInstance956 = x3d.ProtoInstance()
ProtoInstance956.setUSE("hanim_r_metacarpophalangeal3")

fieldValue899.addChildren(ProtoInstance956)
ProtoInstance957 = x3d.ProtoInstance()
ProtoInstance957.setUSE("hanim_r_carpal_proximal_interphalangeal3")

fieldValue899.addChildren(ProtoInstance957)
ProtoInstance958 = x3d.ProtoInstance()
ProtoInstance958.setUSE("hanim_r_carpal_distal_interphalangeal3")

fieldValue899.addChildren(ProtoInstance958)
ProtoInstance959 = x3d.ProtoInstance()
ProtoInstance959.setUSE("hanim_r_carpometacarpal4")

fieldValue899.addChildren(ProtoInstance959)
ProtoInstance960 = x3d.ProtoInstance()
ProtoInstance960.setUSE("hanim_r_metacarpophalangeal4")

fieldValue899.addChildren(ProtoInstance960)
ProtoInstance961 = x3d.ProtoInstance()
ProtoInstance961.setUSE("hanim_r_carpal_proximal_interphalangeal4")

fieldValue899.addChildren(ProtoInstance961)
ProtoInstance962 = x3d.ProtoInstance()
ProtoInstance962.setUSE("hanim_r_carpal_distal_interphalangeal4")

fieldValue899.addChildren(ProtoInstance962)
ProtoInstance963 = x3d.ProtoInstance()
ProtoInstance963.setUSE("hanim_r_carpometacarpal5")

fieldValue899.addChildren(ProtoInstance963)
ProtoInstance964 = x3d.ProtoInstance()
ProtoInstance964.setUSE("hanim_r_metacarpophalangeal5")

fieldValue899.addChildren(ProtoInstance964)
ProtoInstance965 = x3d.ProtoInstance()
ProtoInstance965.setUSE("hanim_r_carpal_proximal_interphalangeal5")

fieldValue899.addChildren(ProtoInstance965)
ProtoInstance966 = x3d.ProtoInstance()
ProtoInstance966.setUSE("hanim_r_carpal_distal_interphalangeal5")

fieldValue899.addChildren(ProtoInstance966)
ProtoInstance967 = x3d.ProtoInstance()
ProtoInstance967.setUSE("hanim_r_carpometacarpal6")

fieldValue899.addChildren(ProtoInstance967)
ProtoInstance968 = x3d.ProtoInstance()
ProtoInstance968.setUSE("hanim_r_metacarpophalangeal6")

fieldValue899.addChildren(ProtoInstance968)
ProtoInstance969 = x3d.ProtoInstance()
ProtoInstance969.setUSE("hanim_r_carpal_proximal_interphalangeal6")

fieldValue899.addChildren(ProtoInstance969)
ProtoInstance970 = x3d.ProtoInstance()
ProtoInstance970.setUSE("hanim_r_carpal_distal_interphalangeal6")

fieldValue899.addChildren(ProtoInstance970)

ProtoInstance101.addFieldValue(fieldValue899)
fieldValue971 = x3d.fieldValue()
fieldValue971.setName("sites")
ProtoInstance972 = x3d.ProtoInstance()
ProtoInstance972.setUSE("hanim_l_tarsal_distal_phalanx_1_tip_2")

fieldValue971.addChildren(ProtoInstance972)
ProtoInstance973 = x3d.ProtoInstance()
ProtoInstance973.setUSE("hanim_l_tarsal_interphalangeal_phalanx6")

fieldValue971.addChildren(ProtoInstance973)
ProtoInstance974 = x3d.ProtoInstance()
ProtoInstance974.setUSE("hanim_l_tarsal_distal_phalanx3")

fieldValue971.addChildren(ProtoInstance974)
ProtoInstance975 = x3d.ProtoInstance()
ProtoInstance975.setUSE("hanim_l_tarsal_interphalangeal_phalanx2")

fieldValue971.addChildren(ProtoInstance975)
ProtoInstance976 = x3d.ProtoInstance()
ProtoInstance976.setUSE("hanim_l_lateral_malleolus_2")

fieldValue971.addChildren(ProtoInstance976)
ProtoInstance977 = x3d.ProtoInstance()
ProtoInstance977.setUSE("hanim_l_medial_malleolus_2")

fieldValue971.addChildren(ProtoInstance977)
ProtoInstance978 = x3d.ProtoInstance()
ProtoInstance978.setUSE("hanim_l_sphyrion_2")

fieldValue971.addChildren(ProtoInstance978)
ProtoInstance979 = x3d.ProtoInstance()
ProtoInstance979.setUSE("hanim_l_calcaneus_posterior_2")

fieldValue971.addChildren(ProtoInstance979)
ProtoInstance980 = x3d.ProtoInstance()
ProtoInstance980.setUSE("hanim_l_knee_crease_2")

fieldValue971.addChildren(ProtoInstance980)
ProtoInstance981 = x3d.ProtoInstance()
ProtoInstance981.setUSE("hanim_l_femoral_lateral_epicondyles_2")

fieldValue971.addChildren(ProtoInstance981)
ProtoInstance982 = x3d.ProtoInstance()
ProtoInstance982.setUSE("hanim_l_femoral_medial_epicondyles_2")

fieldValue971.addChildren(ProtoInstance982)
ProtoInstance983 = x3d.ProtoInstance()
ProtoInstance983.setUSE("hanim_r_tarsal_distal_phalanx_1_tip_2")

fieldValue971.addChildren(ProtoInstance983)
ProtoInstance984 = x3d.ProtoInstance()
ProtoInstance984.setUSE("hanim_r_tarsal_interphalangeal_phalanx6")

fieldValue971.addChildren(ProtoInstance984)
ProtoInstance985 = x3d.ProtoInstance()
ProtoInstance985.setUSE("hanim_r_tarsal_distal_phalanx3")

fieldValue971.addChildren(ProtoInstance985)
ProtoInstance986 = x3d.ProtoInstance()
ProtoInstance986.setUSE("hanim_r_tarsal_interphalangeal_phalanx2")

fieldValue971.addChildren(ProtoInstance986)
ProtoInstance987 = x3d.ProtoInstance()
ProtoInstance987.setUSE("hanim_r_lateral_malleolus_2")

fieldValue971.addChildren(ProtoInstance987)
ProtoInstance988 = x3d.ProtoInstance()
ProtoInstance988.setUSE("hanim_r_medial_malleolus_2")

fieldValue971.addChildren(ProtoInstance988)
ProtoInstance989 = x3d.ProtoInstance()
ProtoInstance989.setUSE("hanim_r_sphyrion_2")

fieldValue971.addChildren(ProtoInstance989)
ProtoInstance990 = x3d.ProtoInstance()
ProtoInstance990.setUSE("hanim_r_calcaneus_posterior_2")

fieldValue971.addChildren(ProtoInstance990)
ProtoInstance991 = x3d.ProtoInstance()
ProtoInstance991.setUSE("hanim_r_knee_crease_2")

fieldValue971.addChildren(ProtoInstance991)
ProtoInstance992 = x3d.ProtoInstance()
ProtoInstance992.setUSE("hanim_r_femoral_lateral_epicondyles_2")

fieldValue971.addChildren(ProtoInstance992)
ProtoInstance993 = x3d.ProtoInstance()
ProtoInstance993.setUSE("hanim_r_femoral_medial_epicondyles_2")

fieldValue971.addChildren(ProtoInstance993)
ProtoInstance994 = x3d.ProtoInstance()
ProtoInstance994.setUSE("hanim_r_iliocristale_2")

fieldValue971.addChildren(ProtoInstance994)
ProtoInstance995 = x3d.ProtoInstance()
ProtoInstance995.setUSE("hanim_r_trochanterion_2")

fieldValue971.addChildren(ProtoInstance995)
ProtoInstance996 = x3d.ProtoInstance()
ProtoInstance996.setUSE("hanim_l_iliocristale_2")

fieldValue971.addChildren(ProtoInstance996)
ProtoInstance997 = x3d.ProtoInstance()
ProtoInstance997.setUSE("hanim_l_trochanterion_2")

fieldValue971.addChildren(ProtoInstance997)
ProtoInstance998 = x3d.ProtoInstance()
ProtoInstance998.setUSE("hanim_r_asis_2")

fieldValue971.addChildren(ProtoInstance998)
ProtoInstance999 = x3d.ProtoInstance()
ProtoInstance999.setUSE("hanim_l_asis_2")

fieldValue971.addChildren(ProtoInstance999)
ProtoInstance1000 = x3d.ProtoInstance()
ProtoInstance1000.setUSE("hanim_r_psis_2")

fieldValue971.addChildren(ProtoInstance1000)
ProtoInstance1001 = x3d.ProtoInstance()
ProtoInstance1001.setUSE("hanim_l_psis_2")

fieldValue971.addChildren(ProtoInstance1001)
ProtoInstance1002 = x3d.ProtoInstance()
ProtoInstance1002.setUSE("hanim_crotch_2")

fieldValue971.addChildren(ProtoInstance1002)
ProtoInstance1003 = x3d.ProtoInstance()
ProtoInstance1003.setUSE("hanim_skull_tip_2")

fieldValue971.addChildren(ProtoInstance1003)
ProtoInstance1004 = x3d.ProtoInstance()
ProtoInstance1004.setUSE("hanim_sellion_2")

fieldValue971.addChildren(ProtoInstance1004)
ProtoInstance1005 = x3d.ProtoInstance()
ProtoInstance1005.setUSE("hanim_r_infraorbitale_2")

fieldValue971.addChildren(ProtoInstance1005)
ProtoInstance1006 = x3d.ProtoInstance()
ProtoInstance1006.setUSE("hanim_l_infraorbitale_2")

fieldValue971.addChildren(ProtoInstance1006)
ProtoInstance1007 = x3d.ProtoInstance()
ProtoInstance1007.setUSE("hanim_supramenton_2")

fieldValue971.addChildren(ProtoInstance1007)
ProtoInstance1008 = x3d.ProtoInstance()
ProtoInstance1008.setUSE("hanim_r_tragion_2")

fieldValue971.addChildren(ProtoInstance1008)
ProtoInstance1009 = x3d.ProtoInstance()
ProtoInstance1009.setUSE("hanim_r_gonion_2")

fieldValue971.addChildren(ProtoInstance1009)
ProtoInstance1010 = x3d.ProtoInstance()
ProtoInstance1010.setUSE("hanim_l_tragion_2")

fieldValue971.addChildren(ProtoInstance1010)
ProtoInstance1011 = x3d.ProtoInstance()
ProtoInstance1011.setUSE("hanim_l_gonion_2")

fieldValue971.addChildren(ProtoInstance1011)
ProtoInstance1012 = x3d.ProtoInstance()
ProtoInstance1012.setUSE("hanim_nuchale_2")

fieldValue971.addChildren(ProtoInstance1012)
ProtoInstance1013 = x3d.ProtoInstance()
ProtoInstance1013.setUSE("hanim_l_carpal_distal_phalanx_1_tip_2")

fieldValue971.addChildren(ProtoInstance1013)
ProtoInstance1014 = x3d.ProtoInstance()
ProtoInstance1014.setUSE("hanim_l_carpal_distal_phalanx_2_tip_2")

fieldValue971.addChildren(ProtoInstance1014)
ProtoInstance1015 = x3d.ProtoInstance()
ProtoInstance1015.setUSE("hanim_l_dactylion_2")

fieldValue971.addChildren(ProtoInstance1015)
ProtoInstance1016 = x3d.ProtoInstance()
ProtoInstance1016.setUSE("hanim_l_carpal_distal_phalanx_3_tip_2")

fieldValue971.addChildren(ProtoInstance1016)
ProtoInstance1017 = x3d.ProtoInstance()
ProtoInstance1017.setUSE("hanim_l_carpal_distal_phalanx_4_tip_2")

fieldValue971.addChildren(ProtoInstance1017)
ProtoInstance1018 = x3d.ProtoInstance()
ProtoInstance1018.setUSE("hanim_l_carpal_distal_phalanx_5_tip_2")

fieldValue971.addChildren(ProtoInstance1018)
ProtoInstance1019 = x3d.ProtoInstance()
ProtoInstance1019.setUSE("hanim_l_metacarpal_phalanx3")

fieldValue971.addChildren(ProtoInstance1019)
ProtoInstance1020 = x3d.ProtoInstance()
ProtoInstance1020.setUSE("hanim_l_ulnar_styloid_2")

fieldValue971.addChildren(ProtoInstance1020)
ProtoInstance1021 = x3d.ProtoInstance()
ProtoInstance1021.setUSE("hanim_l_metacarpal_phalanx6")

fieldValue971.addChildren(ProtoInstance1021)
ProtoInstance1022 = x3d.ProtoInstance()
ProtoInstance1022.setUSE("hanim_l_radial_styloid_2")

fieldValue971.addChildren(ProtoInstance1022)
ProtoInstance1023 = x3d.ProtoInstance()
ProtoInstance1023.setUSE("hanim_l_olecranon_2")

fieldValue971.addChildren(ProtoInstance1023)
ProtoInstance1024 = x3d.ProtoInstance()
ProtoInstance1024.setUSE("hanim_l_humeral_medial_epicondyles_2")

fieldValue971.addChildren(ProtoInstance1024)
ProtoInstance1025 = x3d.ProtoInstance()
ProtoInstance1025.setUSE("hanim_l_radiale_2")

fieldValue971.addChildren(ProtoInstance1025)
ProtoInstance1026 = x3d.ProtoInstance()
ProtoInstance1026.setUSE("hanim_l_humeral_lateral_epicondyles_2")

fieldValue971.addChildren(ProtoInstance1026)
ProtoInstance1027 = x3d.ProtoInstance()
ProtoInstance1027.setUSE("hanim_l_clavicale_2")

fieldValue971.addChildren(ProtoInstance1027)
ProtoInstance1028 = x3d.ProtoInstance()
ProtoInstance1028.setUSE("hanim_l_acromion_2")

fieldValue971.addChildren(ProtoInstance1028)
ProtoInstance1029 = x3d.ProtoInstance()
ProtoInstance1029.setUSE("hanim_l_axilla_proximal_2")

fieldValue971.addChildren(ProtoInstance1029)
ProtoInstance1030 = x3d.ProtoInstance()
ProtoInstance1030.setUSE("hanim_l_axilla_distal_2")

fieldValue971.addChildren(ProtoInstance1030)
ProtoInstance1031 = x3d.ProtoInstance()
ProtoInstance1031.setUSE("hanim_r_carpal_distal_phalanx_1_tip_2")

fieldValue971.addChildren(ProtoInstance1031)
ProtoInstance1032 = x3d.ProtoInstance()
ProtoInstance1032.setUSE("hanim_r_carpal_distal_phalanx_2_tip_2")

fieldValue971.addChildren(ProtoInstance1032)
ProtoInstance1033 = x3d.ProtoInstance()
ProtoInstance1033.setUSE("hanim_r_dactylion_2")

fieldValue971.addChildren(ProtoInstance1033)
ProtoInstance1034 = x3d.ProtoInstance()
ProtoInstance1034.setUSE("hanim_r_carpal_distal_phalanx_3_tip_2")

fieldValue971.addChildren(ProtoInstance1034)
ProtoInstance1035 = x3d.ProtoInstance()
ProtoInstance1035.setUSE("hanim_r_carpal_distal_phalanx_4_tip_2")

fieldValue971.addChildren(ProtoInstance1035)
ProtoInstance1036 = x3d.ProtoInstance()
ProtoInstance1036.setUSE("hanim_r_carpal_distal_phalanx_5_tip_2")

fieldValue971.addChildren(ProtoInstance1036)
ProtoInstance1037 = x3d.ProtoInstance()
ProtoInstance1037.setUSE("hanim_r_metacarpal_phalanx3")

fieldValue971.addChildren(ProtoInstance1037)
ProtoInstance1038 = x3d.ProtoInstance()
ProtoInstance1038.setUSE("hanim_r_ulnar_styloid_2")

fieldValue971.addChildren(ProtoInstance1038)
ProtoInstance1039 = x3d.ProtoInstance()
ProtoInstance1039.setUSE("hanim_r_metacarpal_phalanx6")

fieldValue971.addChildren(ProtoInstance1039)
ProtoInstance1040 = x3d.ProtoInstance()
ProtoInstance1040.setUSE("hanim_r_radial_styloid_2")

fieldValue971.addChildren(ProtoInstance1040)
ProtoInstance1041 = x3d.ProtoInstance()
ProtoInstance1041.setUSE("hanim_r_olecranon_2")

fieldValue971.addChildren(ProtoInstance1041)
ProtoInstance1042 = x3d.ProtoInstance()
ProtoInstance1042.setUSE("hanim_r_humeral_medial_epicondyles_2")

fieldValue971.addChildren(ProtoInstance1042)
ProtoInstance1043 = x3d.ProtoInstance()
ProtoInstance1043.setUSE("hanim_r_radiale_2")

fieldValue971.addChildren(ProtoInstance1043)
ProtoInstance1044 = x3d.ProtoInstance()
ProtoInstance1044.setUSE("hanim_r_humeral_lateral_epicondyles_2")

fieldValue971.addChildren(ProtoInstance1044)
ProtoInstance1045 = x3d.ProtoInstance()
ProtoInstance1045.setUSE("hanim_r_clavicale_2")

fieldValue971.addChildren(ProtoInstance1045)
ProtoInstance1046 = x3d.ProtoInstance()
ProtoInstance1046.setUSE("hanim_r_acromion_2")

fieldValue971.addChildren(ProtoInstance1046)
ProtoInstance1047 = x3d.ProtoInstance()
ProtoInstance1047.setUSE("hanim_r_axilla_proximal_2")

fieldValue971.addChildren(ProtoInstance1047)
ProtoInstance1048 = x3d.ProtoInstance()
ProtoInstance1048.setUSE("hanim_r_axilla_distal_2")

fieldValue971.addChildren(ProtoInstance1048)
ProtoInstance1049 = x3d.ProtoInstance()
ProtoInstance1049.setUSE("hanim_r_neck_base_2")

fieldValue971.addChildren(ProtoInstance1049)
ProtoInstance1050 = x3d.ProtoInstance()
ProtoInstance1050.setUSE("hanim_l_neck_base_2")

fieldValue971.addChildren(ProtoInstance1050)
ProtoInstance1051 = x3d.ProtoInstance()
ProtoInstance1051.setUSE("hanim_suprasternale_2")

fieldValue971.addChildren(ProtoInstance1051)
ProtoInstance1052 = x3d.ProtoInstance()
ProtoInstance1052.setUSE("hanim_cervicale_2")

fieldValue971.addChildren(ProtoInstance1052)
ProtoInstance1053 = x3d.ProtoInstance()
ProtoInstance1053.setUSE("hanim_r_thelion_2")

fieldValue971.addChildren(ProtoInstance1053)
ProtoInstance1054 = x3d.ProtoInstance()
ProtoInstance1054.setUSE("hanim_l_thelion_2")

fieldValue971.addChildren(ProtoInstance1054)
ProtoInstance1055 = x3d.ProtoInstance()
ProtoInstance1055.setUSE("hanim_substernale_2")

fieldValue971.addChildren(ProtoInstance1055)
ProtoInstance1056 = x3d.ProtoInstance()
ProtoInstance1056.setUSE("hanim_r_rib10_2")

fieldValue971.addChildren(ProtoInstance1056)
ProtoInstance1057 = x3d.ProtoInstance()
ProtoInstance1057.setUSE("hanim_l_rib10_2")

fieldValue971.addChildren(ProtoInstance1057)
ProtoInstance1058 = x3d.ProtoInstance()
ProtoInstance1058.setUSE("hanim_spine_2_lower_back_2")

fieldValue971.addChildren(ProtoInstance1058)
ProtoInstance1059 = x3d.ProtoInstance()
ProtoInstance1059.setUSE("hanim_waist_preferred_posterior_2")

fieldValue971.addChildren(ProtoInstance1059)
ProtoInstance1060 = x3d.ProtoInstance()
ProtoInstance1060.setUSE("hanim_navel_2")

fieldValue971.addChildren(ProtoInstance1060)

ProtoInstance101.addFieldValue(fieldValue971)
fieldValue1061 = x3d.fieldValue()
fieldValue1061.setName("segments")
ProtoInstance1062 = x3d.ProtoInstance()
ProtoInstance1062.setUSE("hanim_l_tarsal_distal_phalanx2")

fieldValue1061.addChildren(ProtoInstance1062)
ProtoInstance1063 = x3d.ProtoInstance()
ProtoInstance1063.setUSE("hanim_l_middistal_2")

fieldValue1061.addChildren(ProtoInstance1063)
ProtoInstance1064 = x3d.ProtoInstance()
ProtoInstance1064.setUSE("hanim_l_midproximal_2")

fieldValue1061.addChildren(ProtoInstance1064)
ProtoInstance1065 = x3d.ProtoInstance()
ProtoInstance1065.setUSE("hanim_l_hindfoot_2")

fieldValue1061.addChildren(ProtoInstance1065)
ProtoInstance1066 = x3d.ProtoInstance()
ProtoInstance1066.setUSE("hanim_l_calf_2")

fieldValue1061.addChildren(ProtoInstance1066)
ProtoInstance1067 = x3d.ProtoInstance()
ProtoInstance1067.setUSE("hanim_l_thigh_2")

fieldValue1061.addChildren(ProtoInstance1067)
ProtoInstance1068 = x3d.ProtoInstance()
ProtoInstance1068.setUSE("hanim_r_tarsal_distal_phalanx2")

fieldValue1061.addChildren(ProtoInstance1068)
ProtoInstance1069 = x3d.ProtoInstance()
ProtoInstance1069.setUSE("hanim_r_middistal_2")

fieldValue1061.addChildren(ProtoInstance1069)
ProtoInstance1070 = x3d.ProtoInstance()
ProtoInstance1070.setUSE("hanim_r_midproximal_2")

fieldValue1061.addChildren(ProtoInstance1070)
ProtoInstance1071 = x3d.ProtoInstance()
ProtoInstance1071.setUSE("hanim_r_hindfoot_2")

fieldValue1061.addChildren(ProtoInstance1071)
ProtoInstance1072 = x3d.ProtoInstance()
ProtoInstance1072.setUSE("hanim_r_calf_2")

fieldValue1061.addChildren(ProtoInstance1072)
ProtoInstance1073 = x3d.ProtoInstance()
ProtoInstance1073.setUSE("hanim_r_thigh_2")

fieldValue1061.addChildren(ProtoInstance1073)
ProtoInstance1074 = x3d.ProtoInstance()
ProtoInstance1074.setUSE("hanim_pelvis_2")

fieldValue1061.addChildren(ProtoInstance1074)
ProtoInstance1075 = x3d.ProtoInstance()
ProtoInstance1075.setUSE("hanim_skull_2")

fieldValue1061.addChildren(ProtoInstance1075)
ProtoInstance1076 = x3d.ProtoInstance()
ProtoInstance1076.setUSE("hanim_c2_2")

fieldValue1061.addChildren(ProtoInstance1076)
ProtoInstance1077 = x3d.ProtoInstance()
ProtoInstance1077.setUSE("hanim_c4_2")

fieldValue1061.addChildren(ProtoInstance1077)
ProtoInstance1078 = x3d.ProtoInstance()
ProtoInstance1078.setUSE("hanim_l_carpal_distal_phalanx2")

fieldValue1061.addChildren(ProtoInstance1078)
ProtoInstance1079 = x3d.ProtoInstance()
ProtoInstance1079.setUSE("hanim_l_index_proximal_6")

fieldValue1061.addChildren(ProtoInstance1079)
ProtoInstance1080 = x3d.ProtoInstance()
ProtoInstance1080.setUSE("hanim_l_index_proximal_6")

fieldValue1061.addChildren(ProtoInstance1080)
ProtoInstance1081 = x3d.ProtoInstance()
ProtoInstance1081.setUSE("hanim_l_carpal_distal_phalanx3")

fieldValue1061.addChildren(ProtoInstance1081)
ProtoInstance1082 = x3d.ProtoInstance()
ProtoInstance1082.setUSE("hanim_l_index_middle_2")

fieldValue1061.addChildren(ProtoInstance1082)
ProtoInstance1083 = x3d.ProtoInstance()
ProtoInstance1083.setUSE("hanim_l_index_proximal_6")

fieldValue1061.addChildren(ProtoInstance1083)
ProtoInstance1084 = x3d.ProtoInstance()
ProtoInstance1084.setUSE("hanim_l_index_metacarpal_2")

fieldValue1061.addChildren(ProtoInstance1084)
ProtoInstance1085 = x3d.ProtoInstance()
ProtoInstance1085.setUSE("hanim_l_carpal_distal_phalanx4")

fieldValue1061.addChildren(ProtoInstance1085)
ProtoInstance1086 = x3d.ProtoInstance()
ProtoInstance1086.setUSE("hanim_l_middle_middle_2")

fieldValue1061.addChildren(ProtoInstance1086)
ProtoInstance1087 = x3d.ProtoInstance()
ProtoInstance1087.setUSE("hanim_l_middle_proximal_2")

fieldValue1061.addChildren(ProtoInstance1087)
ProtoInstance1088 = x3d.ProtoInstance()
ProtoInstance1088.setUSE("hanim_l_middle_metacarpal_2")

fieldValue1061.addChildren(ProtoInstance1088)
ProtoInstance1089 = x3d.ProtoInstance()
ProtoInstance1089.setUSE("hanim_l_carpal_distal_phalanx5")

fieldValue1061.addChildren(ProtoInstance1089)
ProtoInstance1090 = x3d.ProtoInstance()
ProtoInstance1090.setUSE("hanim_l_ring_middle_2")

fieldValue1061.addChildren(ProtoInstance1090)
ProtoInstance1091 = x3d.ProtoInstance()
ProtoInstance1091.setUSE("hanim_l_ring_proximal_2")

fieldValue1061.addChildren(ProtoInstance1091)
ProtoInstance1092 = x3d.ProtoInstance()
ProtoInstance1092.setUSE("hanim_l_ring_metacarpal_2")

fieldValue1061.addChildren(ProtoInstance1092)
ProtoInstance1093 = x3d.ProtoInstance()
ProtoInstance1093.setUSE("hanim_l_carpal_distal_phalanx6")

fieldValue1061.addChildren(ProtoInstance1093)
ProtoInstance1094 = x3d.ProtoInstance()
ProtoInstance1094.setUSE("hanim_l_pinky_middle_2")

fieldValue1061.addChildren(ProtoInstance1094)
ProtoInstance1095 = x3d.ProtoInstance()
ProtoInstance1095.setUSE("hanim_l_pinky_proximal_2")

fieldValue1061.addChildren(ProtoInstance1095)
ProtoInstance1096 = x3d.ProtoInstance()
ProtoInstance1096.setUSE("hanim_l_pinky_metacarpal_2")

fieldValue1061.addChildren(ProtoInstance1096)
ProtoInstance1097 = x3d.ProtoInstance()
ProtoInstance1097.setUSE("hanim_l_hand_2")

fieldValue1061.addChildren(ProtoInstance1097)
ProtoInstance1098 = x3d.ProtoInstance()
ProtoInstance1098.setUSE("hanim_l_forearm_2")

fieldValue1061.addChildren(ProtoInstance1098)
ProtoInstance1099 = x3d.ProtoInstance()
ProtoInstance1099.setUSE("hanim_l_upperarm_2")

fieldValue1061.addChildren(ProtoInstance1099)
ProtoInstance1100 = x3d.ProtoInstance()
ProtoInstance1100.setUSE("hanim_l_scapula_2")

fieldValue1061.addChildren(ProtoInstance1100)
ProtoInstance1101 = x3d.ProtoInstance()
ProtoInstance1101.setUSE("hanim_l_clavicle_2")

fieldValue1061.addChildren(ProtoInstance1101)
ProtoInstance1102 = x3d.ProtoInstance()
ProtoInstance1102.setUSE("hanim_r_carpal_distal_phalanx2")

fieldValue1061.addChildren(ProtoInstance1102)
ProtoInstance1103 = x3d.ProtoInstance()
ProtoInstance1103.setUSE("hanim_r_index_proximal_6")

fieldValue1061.addChildren(ProtoInstance1103)
ProtoInstance1104 = x3d.ProtoInstance()
ProtoInstance1104.setUSE("hanim_r_index_proximal_6")

fieldValue1061.addChildren(ProtoInstance1104)
ProtoInstance1105 = x3d.ProtoInstance()
ProtoInstance1105.setUSE("hanim_r_carpal_distal_phalanx3")

fieldValue1061.addChildren(ProtoInstance1105)
ProtoInstance1106 = x3d.ProtoInstance()
ProtoInstance1106.setUSE("hanim_r_index_middle_2")

fieldValue1061.addChildren(ProtoInstance1106)
ProtoInstance1107 = x3d.ProtoInstance()
ProtoInstance1107.setUSE("hanim_r_index_proximal_6")

fieldValue1061.addChildren(ProtoInstance1107)
ProtoInstance1108 = x3d.ProtoInstance()
ProtoInstance1108.setUSE("hanim_r_index_metacarpal_2")

fieldValue1061.addChildren(ProtoInstance1108)
ProtoInstance1109 = x3d.ProtoInstance()
ProtoInstance1109.setUSE("hanim_r_carpal_distal_phalanx4")

fieldValue1061.addChildren(ProtoInstance1109)
ProtoInstance1110 = x3d.ProtoInstance()
ProtoInstance1110.setUSE("hanim_r_middle_middle_2")

fieldValue1061.addChildren(ProtoInstance1110)
ProtoInstance1111 = x3d.ProtoInstance()
ProtoInstance1111.setUSE("hanim_r_middle_proximal_2")

fieldValue1061.addChildren(ProtoInstance1111)
ProtoInstance1112 = x3d.ProtoInstance()
ProtoInstance1112.setUSE("hanim_r_middle_metacarpal_2")

fieldValue1061.addChildren(ProtoInstance1112)
ProtoInstance1113 = x3d.ProtoInstance()
ProtoInstance1113.setUSE("hanim_r_carpal_distal_phalanx5")

fieldValue1061.addChildren(ProtoInstance1113)
ProtoInstance1114 = x3d.ProtoInstance()
ProtoInstance1114.setUSE("hanim_r_ring_middle_2")

fieldValue1061.addChildren(ProtoInstance1114)
ProtoInstance1115 = x3d.ProtoInstance()
ProtoInstance1115.setUSE("hanim_r_ring_proximal_2")

fieldValue1061.addChildren(ProtoInstance1115)
ProtoInstance1116 = x3d.ProtoInstance()
ProtoInstance1116.setUSE("hanim_r_ring_metacarpal_2")

fieldValue1061.addChildren(ProtoInstance1116)
ProtoInstance1117 = x3d.ProtoInstance()
ProtoInstance1117.setUSE("hanim_r_carpal_distal_phalanx6")

fieldValue1061.addChildren(ProtoInstance1117)
ProtoInstance1118 = x3d.ProtoInstance()
ProtoInstance1118.setUSE("hanim_r_pinky_middle_2")

fieldValue1061.addChildren(ProtoInstance1118)
ProtoInstance1119 = x3d.ProtoInstance()
ProtoInstance1119.setUSE("hanim_r_pinky_proximal_2")

fieldValue1061.addChildren(ProtoInstance1119)
ProtoInstance1120 = x3d.ProtoInstance()
ProtoInstance1120.setUSE("hanim_r_pinky_metacarpal_2")

fieldValue1061.addChildren(ProtoInstance1120)
ProtoInstance1121 = x3d.ProtoInstance()
ProtoInstance1121.setUSE("hanim_r_hand_2")

fieldValue1061.addChildren(ProtoInstance1121)
ProtoInstance1122 = x3d.ProtoInstance()
ProtoInstance1122.setUSE("hanim_r_forearm_2")

fieldValue1061.addChildren(ProtoInstance1122)
ProtoInstance1123 = x3d.ProtoInstance()
ProtoInstance1123.setUSE("hanim_r_upperarm_2")

fieldValue1061.addChildren(ProtoInstance1123)
ProtoInstance1124 = x3d.ProtoInstance()
ProtoInstance1124.setUSE("hanim_r_scapula_2")

fieldValue1061.addChildren(ProtoInstance1124)
ProtoInstance1125 = x3d.ProtoInstance()
ProtoInstance1125.setUSE("hanim_r_clavicle_2")

fieldValue1061.addChildren(ProtoInstance1125)
ProtoInstance1126 = x3d.ProtoInstance()
ProtoInstance1126.setUSE("hanim_t1_2")

fieldValue1061.addChildren(ProtoInstance1126)
ProtoInstance1127 = x3d.ProtoInstance()
ProtoInstance1127.setUSE("hanim_t6_2")

fieldValue1061.addChildren(ProtoInstance1127)
ProtoInstance1128 = x3d.ProtoInstance()
ProtoInstance1128.setUSE("hanim_t10_2")

fieldValue1061.addChildren(ProtoInstance1128)
ProtoInstance1129 = x3d.ProtoInstance()
ProtoInstance1129.setUSE("hanim_l1_2")

fieldValue1061.addChildren(ProtoInstance1129)
ProtoInstance1130 = x3d.ProtoInstance()
ProtoInstance1130.setUSE("hanim_l3_2")

fieldValue1061.addChildren(ProtoInstance1130)
ProtoInstance1131 = x3d.ProtoInstance()
ProtoInstance1131.setUSE("hanim_l5_2")

fieldValue1061.addChildren(ProtoInstance1131)
ProtoInstance1132 = x3d.ProtoInstance()
ProtoInstance1132.setUSE("hanim_sacrum_2")

fieldValue1061.addChildren(ProtoInstance1132)

ProtoInstance101.addFieldValue(fieldValue1061)
fieldValue1133 = x3d.fieldValue()
fieldValue1133.setName("name")
fieldValue1133.setValue("humanoid")

ProtoInstance101.addFieldValue(fieldValue1133)
fieldValue1134 = x3d.fieldValue()
fieldValue1134.setName("info")
fieldValue1134.setValue("\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;2\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"")

ProtoInstance101.addFieldValue(fieldValue1134)

Scene4.addChildren(ProtoInstance101)
Group1135 = x3d.Group()
Group1135.setDEF("JointCenters_WorldInfo")
WorldInfo1136 = x3d.WorldInfo()
WorldInfo1136.setTitle("HANIM 200x Default Joint Centers, LOA&#8209;2")
WorldInfo1136.setInfo([" HANIM 200x Default Joint Centers, Level-Of-Articulation 2 --------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "])

Group1135.addChildren(WorldInfo1136)

Scene4.addChildren(Group1135)
NavigationInfo1137 = x3d.NavigationInfo()
NavigationInfo1137.setAvatarSize([0.25,1.60000002384186,0.75])
NavigationInfo1137.setSpeed(1.5)

Scene4.addChildren(NavigationInfo1137)

X3D0.setScene(Scene4)
X3D0.toFileX3D("../data/LOA2ExampleSourceInVRML_RoundTrip.x3d")
