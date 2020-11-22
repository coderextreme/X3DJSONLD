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
meta3.setContent("LOA4ExampleSourceInVRML.wrl")

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
ProtoInstance306.setDEF("hanim_vl4_2")
fieldValue307 = x3d.fieldValue()
fieldValue307.setName("stiffness")
fieldValue307.setValue("1 1 1")

ProtoInstance306.addFieldValue(fieldValue307)
fieldValue308 = x3d.fieldValue()
fieldValue308.setName("name")
fieldValue308.setValue("vl4")

ProtoInstance306.addFieldValue(fieldValue308)
fieldValue309 = x3d.fieldValue()
fieldValue309.setName("center")
fieldValue309.setValue("0.00350000010803342 1.09249997138977 -0.0786999985575676")

ProtoInstance306.addFieldValue(fieldValue309)
fieldValue310 = x3d.fieldValue()
fieldValue310.setName("children")
ProtoInstance311 = x3d.ProtoInstance()
ProtoInstance311.setName("Joint")
ProtoInstance311.setDEF("hanim_vl3_2")
fieldValue312 = x3d.fieldValue()
fieldValue312.setName("stiffness")
fieldValue312.setValue("1 1 1")

ProtoInstance311.addFieldValue(fieldValue312)
fieldValue313 = x3d.fieldValue()
fieldValue313.setName("name")
fieldValue313.setValue("vl3")

ProtoInstance311.addFieldValue(fieldValue313)
fieldValue314 = x3d.fieldValue()
fieldValue314.setName("center")
fieldValue314.setValue("0.00410000002011657 1.1275999546051 -0.0795999988913536")

ProtoInstance311.addFieldValue(fieldValue314)
fieldValue315 = x3d.fieldValue()
fieldValue315.setName("children")
ProtoInstance316 = x3d.ProtoInstance()
ProtoInstance316.setName("Joint")
ProtoInstance316.setDEF("hanim_vl2_2")
fieldValue317 = x3d.fieldValue()
fieldValue317.setName("stiffness")
fieldValue317.setValue("1 1 1")

ProtoInstance316.addFieldValue(fieldValue317)
fieldValue318 = x3d.fieldValue()
fieldValue318.setName("name")
fieldValue318.setValue("vl2")

ProtoInstance316.addFieldValue(fieldValue318)
fieldValue319 = x3d.fieldValue()
fieldValue319.setName("center")
fieldValue319.setValue("0.0044999998062849 1.15460002422333 -0.0799999982118607")

ProtoInstance316.addFieldValue(fieldValue319)
fieldValue320 = x3d.fieldValue()
fieldValue320.setName("children")
ProtoInstance321 = x3d.ProtoInstance()
ProtoInstance321.setName("Joint")
ProtoInstance321.setDEF("hanim_vl1_2")
fieldValue322 = x3d.fieldValue()
fieldValue322.setName("stiffness")
fieldValue322.setValue("1 1 1")

ProtoInstance321.addFieldValue(fieldValue322)
fieldValue323 = x3d.fieldValue()
fieldValue323.setName("name")
fieldValue323.setValue("vl1")

ProtoInstance321.addFieldValue(fieldValue323)
fieldValue324 = x3d.fieldValue()
fieldValue324.setName("center")
fieldValue324.setValue("0.00480000022798777 1.19120001792908 -0.0804999992251396")

ProtoInstance321.addFieldValue(fieldValue324)
fieldValue325 = x3d.fieldValue()
fieldValue325.setName("children")
ProtoInstance326 = x3d.ProtoInstance()
ProtoInstance326.setName("Joint")
ProtoInstance326.setDEF("hanim_vt12_2")
fieldValue327 = x3d.fieldValue()
fieldValue327.setName("stiffness")
fieldValue327.setValue("1 1 1")

ProtoInstance326.addFieldValue(fieldValue327)
fieldValue328 = x3d.fieldValue()
fieldValue328.setName("name")
fieldValue328.setValue("vt12")

ProtoInstance326.addFieldValue(fieldValue328)
fieldValue329 = x3d.fieldValue()
fieldValue329.setName("center")
fieldValue329.setValue("0.00510000018402934 1.22780001163483 -0.0807999968528748")

ProtoInstance326.addFieldValue(fieldValue329)
fieldValue330 = x3d.fieldValue()
fieldValue330.setName("children")
ProtoInstance331 = x3d.ProtoInstance()
ProtoInstance331.setName("Joint")
ProtoInstance331.setDEF("hanim_vt11_2")
fieldValue332 = x3d.fieldValue()
fieldValue332.setName("stiffness")
fieldValue332.setValue("1 1 1")

ProtoInstance331.addFieldValue(fieldValue332)
fieldValue333 = x3d.fieldValue()
fieldValue333.setName("name")
fieldValue333.setValue("vt11")

ProtoInstance331.addFieldValue(fieldValue333)
fieldValue334 = x3d.fieldValue()
fieldValue334.setName("center")
fieldValue334.setValue("0.00529999984428287 1.26789999008179 -0.0810000002384186")

ProtoInstance331.addFieldValue(fieldValue334)
fieldValue335 = x3d.fieldValue()
fieldValue335.setName("children")
ProtoInstance336 = x3d.ProtoInstance()
ProtoInstance336.setName("Joint")
ProtoInstance336.setDEF("hanim_vt10_2")
fieldValue337 = x3d.fieldValue()
fieldValue337.setName("stiffness")
fieldValue337.setValue("1 1 1")

ProtoInstance336.addFieldValue(fieldValue337)
fieldValue338 = x3d.fieldValue()
fieldValue338.setName("name")
fieldValue338.setValue("vt10")

ProtoInstance336.addFieldValue(fieldValue338)
fieldValue339 = x3d.fieldValue()
fieldValue339.setName("center")
fieldValue339.setValue("0.00559999980032444 1.28480005264282 -0.0821999981999397")

ProtoInstance336.addFieldValue(fieldValue339)
fieldValue340 = x3d.fieldValue()
fieldValue340.setName("children")
ProtoInstance341 = x3d.ProtoInstance()
ProtoInstance341.setName("Joint")
ProtoInstance341.setDEF("hanim_vt9_2")
fieldValue342 = x3d.fieldValue()
fieldValue342.setName("stiffness")
fieldValue342.setValue("1 1 1")

ProtoInstance341.addFieldValue(fieldValue342)
fieldValue343 = x3d.fieldValue()
fieldValue343.setName("name")
fieldValue343.setValue("vt9")

ProtoInstance341.addFieldValue(fieldValue343)
fieldValue344 = x3d.fieldValue()
fieldValue344.setName("center")
fieldValue344.setValue("0.00570000009611249 1.31260001659393 -0.0838000029325485")

ProtoInstance341.addFieldValue(fieldValue344)
fieldValue345 = x3d.fieldValue()
fieldValue345.setName("children")
ProtoInstance346 = x3d.ProtoInstance()
ProtoInstance346.setName("Joint")
ProtoInstance346.setDEF("hanim_vt8_2")
fieldValue347 = x3d.fieldValue()
fieldValue347.setName("stiffness")
fieldValue347.setValue("1 1 1")

ProtoInstance346.addFieldValue(fieldValue347)
fieldValue348 = x3d.fieldValue()
fieldValue348.setName("name")
fieldValue348.setValue("vt8")

ProtoInstance346.addFieldValue(fieldValue348)
fieldValue349 = x3d.fieldValue()
fieldValue349.setName("center")
fieldValue349.setValue("0.00570000009611249 1.33819997310638 -0.0844999998807907")

ProtoInstance346.addFieldValue(fieldValue349)
fieldValue350 = x3d.fieldValue()
fieldValue350.setName("children")
ProtoInstance351 = x3d.ProtoInstance()
ProtoInstance351.setName("Joint")
ProtoInstance351.setDEF("hanim_vt7_2")
fieldValue352 = x3d.fieldValue()
fieldValue352.setName("stiffness")
fieldValue352.setValue("1 1 1")

ProtoInstance351.addFieldValue(fieldValue352)
fieldValue353 = x3d.fieldValue()
fieldValue353.setName("name")
fieldValue353.setValue("vt7")

ProtoInstance351.addFieldValue(fieldValue353)
fieldValue354 = x3d.fieldValue()
fieldValue354.setName("center")
fieldValue354.setValue("0.00579999992623925 1.36249995231628 -0.0833000019192696")

ProtoInstance351.addFieldValue(fieldValue354)
fieldValue355 = x3d.fieldValue()
fieldValue355.setName("children")
ProtoInstance356 = x3d.ProtoInstance()
ProtoInstance356.setName("Joint")
ProtoInstance356.setDEF("hanim_vt6_2")
fieldValue357 = x3d.fieldValue()
fieldValue357.setName("stiffness")
fieldValue357.setValue("1 1 1")

ProtoInstance356.addFieldValue(fieldValue357)
fieldValue358 = x3d.fieldValue()
fieldValue358.setName("name")
fieldValue358.setValue("vt6")

ProtoInstance356.addFieldValue(fieldValue358)
fieldValue359 = x3d.fieldValue()
fieldValue359.setName("center")
fieldValue359.setValue("0.0059000002220273 1.38660001754761 -0.0799999982118607")

ProtoInstance356.addFieldValue(fieldValue359)
fieldValue360 = x3d.fieldValue()
fieldValue360.setName("children")
ProtoInstance361 = x3d.ProtoInstance()
ProtoInstance361.setName("Joint")
ProtoInstance361.setDEF("hanim_vt5_2")
fieldValue362 = x3d.fieldValue()
fieldValue362.setName("stiffness")
fieldValue362.setValue("1 1 1")

ProtoInstance361.addFieldValue(fieldValue362)
fieldValue363 = x3d.fieldValue()
fieldValue363.setName("name")
fieldValue363.setValue("vt5")

ProtoInstance361.addFieldValue(fieldValue363)
fieldValue364 = x3d.fieldValue()
fieldValue364.setName("center")
fieldValue364.setValue("0.00600000005215406 1.41019999980927 -0.0745000019669533")

ProtoInstance361.addFieldValue(fieldValue364)
fieldValue365 = x3d.fieldValue()
fieldValue365.setName("children")
ProtoInstance366 = x3d.ProtoInstance()
ProtoInstance366.setName("Joint")
ProtoInstance366.setDEF("hanim_vt4_2")
fieldValue367 = x3d.fieldValue()
fieldValue367.setName("stiffness")
fieldValue367.setValue("1 1 1")

ProtoInstance366.addFieldValue(fieldValue367)
fieldValue368 = x3d.fieldValue()
fieldValue368.setName("name")
fieldValue368.setValue("vt4")

ProtoInstance366.addFieldValue(fieldValue368)
fieldValue369 = x3d.fieldValue()
fieldValue369.setName("center")
fieldValue369.setValue("0.00609999988228083 1.432000041008 -0.067500002682209")

ProtoInstance366.addFieldValue(fieldValue369)
fieldValue370 = x3d.fieldValue()
fieldValue370.setName("children")
ProtoInstance371 = x3d.ProtoInstance()
ProtoInstance371.setName("Joint")
ProtoInstance371.setDEF("hanim_vt3_2")
fieldValue372 = x3d.fieldValue()
fieldValue372.setName("stiffness")
fieldValue372.setValue("1 1 1")

ProtoInstance371.addFieldValue(fieldValue372)
fieldValue373 = x3d.fieldValue()
fieldValue373.setName("name")
fieldValue373.setValue("vt3")

ProtoInstance371.addFieldValue(fieldValue373)
fieldValue374 = x3d.fieldValue()
fieldValue374.setName("center")
fieldValue374.setValue("0.00620000017806888 1.45829999446869 -0.0570000000298023")

ProtoInstance371.addFieldValue(fieldValue374)
fieldValue375 = x3d.fieldValue()
fieldValue375.setName("children")
ProtoInstance376 = x3d.ProtoInstance()
ProtoInstance376.setName("Joint")
ProtoInstance376.setDEF("hanim_vt2_2")
fieldValue377 = x3d.fieldValue()
fieldValue377.setName("stiffness")
fieldValue377.setValue("1 1 1")

ProtoInstance376.addFieldValue(fieldValue377)
fieldValue378 = x3d.fieldValue()
fieldValue378.setName("name")
fieldValue378.setValue("vt2")

ProtoInstance376.addFieldValue(fieldValue378)
fieldValue379 = x3d.fieldValue()
fieldValue379.setName("center")
fieldValue379.setValue("0.00630000000819564 1.47609996795654 -0.0483999997377396")

ProtoInstance376.addFieldValue(fieldValue379)
fieldValue380 = x3d.fieldValue()
fieldValue380.setName("children")
ProtoInstance381 = x3d.ProtoInstance()
ProtoInstance381.setName("Joint")
ProtoInstance381.setDEF("hanim_vt1_2")
fieldValue382 = x3d.fieldValue()
fieldValue382.setName("stiffness")
fieldValue382.setValue("1 1 1")

ProtoInstance381.addFieldValue(fieldValue382)
fieldValue383 = x3d.fieldValue()
fieldValue383.setName("name")
fieldValue383.setValue("vt1")

ProtoInstance381.addFieldValue(fieldValue383)
fieldValue384 = x3d.fieldValue()
fieldValue384.setName("center")
fieldValue384.setValue("0.00650000013411045 1.4951000213623 -0.0386999994516373")

ProtoInstance381.addFieldValue(fieldValue384)
fieldValue385 = x3d.fieldValue()
fieldValue385.setName("children")
ProtoInstance386 = x3d.ProtoInstance()
ProtoInstance386.setName("Joint")
ProtoInstance386.setDEF("hanim_vc7_2")
fieldValue387 = x3d.fieldValue()
fieldValue387.setName("stiffness")
fieldValue387.setValue("1 1 1")

ProtoInstance386.addFieldValue(fieldValue387)
fieldValue388 = x3d.fieldValue()
fieldValue388.setName("name")
fieldValue388.setValue("vc7")

ProtoInstance386.addFieldValue(fieldValue388)
fieldValue389 = x3d.fieldValue()
fieldValue389.setName("center")
fieldValue389.setValue("0.00659999996423721 1.51320004463196 -0.0300999991595745")

ProtoInstance386.addFieldValue(fieldValue389)
fieldValue390 = x3d.fieldValue()
fieldValue390.setName("children")
ProtoInstance391 = x3d.ProtoInstance()
ProtoInstance391.setName("Joint")
ProtoInstance391.setDEF("hanim_vc6_2")
fieldValue392 = x3d.fieldValue()
fieldValue392.setName("stiffness")
fieldValue392.setValue("1 1 1")

ProtoInstance391.addFieldValue(fieldValue392)
fieldValue393 = x3d.fieldValue()
fieldValue393.setName("name")
fieldValue393.setValue("vc6")

ProtoInstance391.addFieldValue(fieldValue393)
fieldValue394 = x3d.fieldValue()
fieldValue394.setName("center")
fieldValue394.setValue("0.00659999996423721 1.53569996356964 -0.014299999922514")

ProtoInstance391.addFieldValue(fieldValue394)
fieldValue395 = x3d.fieldValue()
fieldValue395.setName("children")
ProtoInstance396 = x3d.ProtoInstance()
ProtoInstance396.setName("Joint")
ProtoInstance396.setDEF("hanim_vc5_2")
fieldValue397 = x3d.fieldValue()
fieldValue397.setName("stiffness")
fieldValue397.setValue("1 1 1")

ProtoInstance396.addFieldValue(fieldValue397)
fieldValue398 = x3d.fieldValue()
fieldValue398.setName("name")
fieldValue398.setValue("vc5")

ProtoInstance396.addFieldValue(fieldValue398)
fieldValue399 = x3d.fieldValue()
fieldValue399.setName("center")
fieldValue399.setValue("0.00659999996423721 1.55200004577637 -0.00820000004023314")

ProtoInstance396.addFieldValue(fieldValue399)
fieldValue400 = x3d.fieldValue()
fieldValue400.setName("children")
ProtoInstance401 = x3d.ProtoInstance()
ProtoInstance401.setName("Joint")
ProtoInstance401.setDEF("hanim_vc4_2")
fieldValue402 = x3d.fieldValue()
fieldValue402.setName("stiffness")
fieldValue402.setValue("1 1 1")

ProtoInstance401.addFieldValue(fieldValue402)
fieldValue403 = x3d.fieldValue()
fieldValue403.setName("name")
fieldValue403.setValue("vc4")

ProtoInstance401.addFieldValue(fieldValue403)
fieldValue404 = x3d.fieldValue()
fieldValue404.setName("center")
fieldValue404.setValue("0.00659999996423721 1.56620001792908 -0.00839999970048666")

ProtoInstance401.addFieldValue(fieldValue404)
fieldValue405 = x3d.fieldValue()
fieldValue405.setName("children")
ProtoInstance406 = x3d.ProtoInstance()
ProtoInstance406.setName("Joint")
ProtoInstance406.setDEF("hanim_vc3_2")
fieldValue407 = x3d.fieldValue()
fieldValue407.setName("stiffness")
fieldValue407.setValue("1 1 1")

ProtoInstance406.addFieldValue(fieldValue407)
fieldValue408 = x3d.fieldValue()
fieldValue408.setName("name")
fieldValue408.setValue("vc3")

ProtoInstance406.addFieldValue(fieldValue408)
fieldValue409 = x3d.fieldValue()
fieldValue409.setName("center")
fieldValue409.setValue("0.00659999996423721 1.58000004291534 -0.0103000001981854")

ProtoInstance406.addFieldValue(fieldValue409)
fieldValue410 = x3d.fieldValue()
fieldValue410.setName("children")
ProtoInstance411 = x3d.ProtoInstance()
ProtoInstance411.setName("Joint")
ProtoInstance411.setDEF("hanim_vc2_2")
fieldValue412 = x3d.fieldValue()
fieldValue412.setName("stiffness")
fieldValue412.setValue("1 1 1")

ProtoInstance411.addFieldValue(fieldValue412)
fieldValue413 = x3d.fieldValue()
fieldValue413.setName("name")
fieldValue413.setValue("vc2")

ProtoInstance411.addFieldValue(fieldValue413)
fieldValue414 = x3d.fieldValue()
fieldValue414.setName("center")
fieldValue414.setValue("0.00659999996423721 1.59280002117157 -0.0103000001981854")

ProtoInstance411.addFieldValue(fieldValue414)
fieldValue415 = x3d.fieldValue()
fieldValue415.setName("children")
ProtoInstance416 = x3d.ProtoInstance()
ProtoInstance416.setName("Joint")
ProtoInstance416.setDEF("hanim_vc1_2")
fieldValue417 = x3d.fieldValue()
fieldValue417.setName("stiffness")
fieldValue417.setValue("1 1 1")

ProtoInstance416.addFieldValue(fieldValue417)
fieldValue418 = x3d.fieldValue()
fieldValue418.setName("name")
fieldValue418.setValue("vc1")

ProtoInstance416.addFieldValue(fieldValue418)
fieldValue419 = x3d.fieldValue()
fieldValue419.setName("center")
fieldValue419.setValue("0.00659999996423721 1.61440002918243 -0.00340000004507601")

ProtoInstance416.addFieldValue(fieldValue419)
fieldValue420 = x3d.fieldValue()
fieldValue420.setName("children")
ProtoInstance421 = x3d.ProtoInstance()
ProtoInstance421.setName("Joint")
ProtoInstance421.setDEF("hanim_skullbase_2")
fieldValue422 = x3d.fieldValue()
fieldValue422.setName("stiffness")
fieldValue422.setValue("1 1 1")

ProtoInstance421.addFieldValue(fieldValue422)
fieldValue423 = x3d.fieldValue()
fieldValue423.setName("name")
fieldValue423.setValue("skullbase")

ProtoInstance421.addFieldValue(fieldValue423)
fieldValue424 = x3d.fieldValue()
fieldValue424.setName("center")
fieldValue424.setValue("0.00439999997615814 1.62090003490448 0.0236000008881092")

ProtoInstance421.addFieldValue(fieldValue424)
fieldValue425 = x3d.fieldValue()
fieldValue425.setName("children")
ProtoInstance426 = x3d.ProtoInstance()
ProtoInstance426.setName("Joint")
ProtoInstance426.setDEF("hanim_l_eyeball_4")
fieldValue427 = x3d.fieldValue()
fieldValue427.setName("stiffness")
fieldValue427.setValue("1 1 1")

ProtoInstance426.addFieldValue(fieldValue427)
fieldValue428 = x3d.fieldValue()
fieldValue428.setName("name")
fieldValue428.setValue("l_eyeball")

ProtoInstance426.addFieldValue(fieldValue428)
fieldValue429 = x3d.fieldValue()
fieldValue429.setName("center")
fieldValue429.setValue("0.0335999988019466 1.63320004940033 0.0502000004053116")

ProtoInstance426.addFieldValue(fieldValue429)
fieldValue430 = x3d.fieldValue()
fieldValue430.setName("children")
ProtoInstance431 = x3d.ProtoInstance()
ProtoInstance431.setName("Segment")
ProtoInstance431.setDEF("hanim_l_eyeball_3")
fieldValue432 = x3d.fieldValue()
fieldValue432.setName("name")
fieldValue432.setValue("l_eyeball")

ProtoInstance431.addFieldValue(fieldValue432)

fieldValue430.addChildren(ProtoInstance431)

ProtoInstance426.addFieldValue(fieldValue430)

fieldValue425.addChildren(ProtoInstance426)
ProtoInstance433 = x3d.ProtoInstance()
ProtoInstance433.setName("Joint")
ProtoInstance433.setDEF("hanim_r_eyeball_4")
fieldValue434 = x3d.fieldValue()
fieldValue434.setName("stiffness")
fieldValue434.setValue("1 1 1")

ProtoInstance433.addFieldValue(fieldValue434)
fieldValue435 = x3d.fieldValue()
fieldValue435.setName("name")
fieldValue435.setValue("r_eyeball")

ProtoInstance433.addFieldValue(fieldValue435)
fieldValue436 = x3d.fieldValue()
fieldValue436.setName("center")
fieldValue436.setValue("-0.0236000008881092 1.6331000328064 0.0509999990463257")

ProtoInstance433.addFieldValue(fieldValue436)
fieldValue437 = x3d.fieldValue()
fieldValue437.setName("children")
ProtoInstance438 = x3d.ProtoInstance()
ProtoInstance438.setName("Segment")
ProtoInstance438.setDEF("hanim_r_eyeball_3")
fieldValue439 = x3d.fieldValue()
fieldValue439.setName("name")
fieldValue439.setValue("r_eyeball")

ProtoInstance438.addFieldValue(fieldValue439)

fieldValue437.addChildren(ProtoInstance438)

ProtoInstance433.addFieldValue(fieldValue437)

fieldValue425.addChildren(ProtoInstance433)
ProtoInstance440 = x3d.ProtoInstance()
ProtoInstance440.setName("Segment")
ProtoInstance440.setDEF("hanim_skull_2")
fieldValue441 = x3d.fieldValue()
fieldValue441.setName("name")
fieldValue441.setValue("skull")

ProtoInstance440.addFieldValue(fieldValue441)
fieldValue442 = x3d.fieldValue()
fieldValue442.setName("children")
ProtoInstance443 = x3d.ProtoInstance()
ProtoInstance443.setName("Site")
ProtoInstance443.setDEF("hanim_skull_tip_2")
fieldValue444 = x3d.fieldValue()
fieldValue444.setName("name")
fieldValue444.setValue("skull_tip")

ProtoInstance443.addFieldValue(fieldValue444)
fieldValue445 = x3d.fieldValue()
fieldValue445.setName("translation")
fieldValue445.setValue("0.00499999988824129 1.75039994716644 0.00549999997019768")

ProtoInstance443.addFieldValue(fieldValue445)

fieldValue442.addChildren(ProtoInstance443)
ProtoInstance446 = x3d.ProtoInstance()
ProtoInstance446.setName("Site")
ProtoInstance446.setDEF("hanim_sellion_2")
fieldValue447 = x3d.fieldValue()
fieldValue447.setName("name")
fieldValue447.setValue("sellion")

ProtoInstance446.addFieldValue(fieldValue447)
fieldValue448 = x3d.fieldValue()
fieldValue448.setName("translation")
fieldValue448.setValue("0.00579999992623925 1.63160002231598 0.0851999968290329")

ProtoInstance446.addFieldValue(fieldValue448)

fieldValue442.addChildren(ProtoInstance446)
ProtoInstance449 = x3d.ProtoInstance()
ProtoInstance449.setName("Site")
ProtoInstance449.setDEF("hanim_r_infraorbitale_2")
fieldValue450 = x3d.fieldValue()
fieldValue450.setName("name")
fieldValue450.setValue("r_infraorbitale")

ProtoInstance449.addFieldValue(fieldValue450)
fieldValue451 = x3d.fieldValue()
fieldValue451.setName("translation")
fieldValue451.setValue("-0.023700000718236 1.61710000038147 0.0751999989151955")

ProtoInstance449.addFieldValue(fieldValue451)

fieldValue442.addChildren(ProtoInstance449)
ProtoInstance452 = x3d.ProtoInstance()
ProtoInstance452.setName("Site")
ProtoInstance452.setDEF("hanim_l_infraorbitale_2")
fieldValue453 = x3d.fieldValue()
fieldValue453.setName("name")
fieldValue453.setValue("l_infraorbitale")

ProtoInstance452.addFieldValue(fieldValue453)
fieldValue454 = x3d.fieldValue()
fieldValue454.setName("translation")
fieldValue454.setValue("0.0340999998152256 1.61710000038147 0.0751999989151955")

ProtoInstance452.addFieldValue(fieldValue454)

fieldValue442.addChildren(ProtoInstance452)
ProtoInstance455 = x3d.ProtoInstance()
ProtoInstance455.setName("Site")
ProtoInstance455.setDEF("hanim_supramenton_2")
fieldValue456 = x3d.fieldValue()
fieldValue456.setName("name")
fieldValue456.setValue("supramenton")

ProtoInstance455.addFieldValue(fieldValue456)
fieldValue457 = x3d.fieldValue()
fieldValue457.setName("translation")
fieldValue457.setValue("0.00609999988228083 1.54100000858307 0.0804999992251396")

ProtoInstance455.addFieldValue(fieldValue457)

fieldValue442.addChildren(ProtoInstance455)
ProtoInstance458 = x3d.ProtoInstance()
ProtoInstance458.setName("Site")
ProtoInstance458.setDEF("hanim_r_tragion_2")
fieldValue459 = x3d.fieldValue()
fieldValue459.setName("name")
fieldValue459.setValue("r_tragion")

ProtoInstance458.addFieldValue(fieldValue459)
fieldValue460 = x3d.fieldValue()
fieldValue460.setName("translation")
fieldValue460.setValue("-0.0645999982953072 1.63469994068146 0.0302000008523464")

ProtoInstance458.addFieldValue(fieldValue460)

fieldValue442.addChildren(ProtoInstance458)
ProtoInstance461 = x3d.ProtoInstance()
ProtoInstance461.setName("Site")
ProtoInstance461.setDEF("hanim_r_gonion_2")
fieldValue462 = x3d.fieldValue()
fieldValue462.setName("name")
fieldValue462.setValue("r_gonion")

ProtoInstance461.addFieldValue(fieldValue462)
fieldValue463 = x3d.fieldValue()
fieldValue463.setName("translation")
fieldValue463.setValue("-0.0520000010728836 1.55289995670319 0.0346999987959862")

ProtoInstance461.addFieldValue(fieldValue463)

fieldValue442.addChildren(ProtoInstance461)
ProtoInstance464 = x3d.ProtoInstance()
ProtoInstance464.setName("Site")
ProtoInstance464.setDEF("hanim_l_tragion_2")
fieldValue465 = x3d.fieldValue()
fieldValue465.setName("name")
fieldValue465.setValue("l_tragion")

ProtoInstance464.addFieldValue(fieldValue465)
fieldValue466 = x3d.fieldValue()
fieldValue466.setName("translation")
fieldValue466.setValue("0.0738999992609024 1.63479995727539 0.0282000005245209")

ProtoInstance464.addFieldValue(fieldValue466)

fieldValue442.addChildren(ProtoInstance464)
ProtoInstance467 = x3d.ProtoInstance()
ProtoInstance467.setName("Site")
ProtoInstance467.setDEF("hanim_l_gonion_2")
fieldValue468 = x3d.fieldValue()
fieldValue468.setName("name")
fieldValue468.setValue("l_gonion")

ProtoInstance467.addFieldValue(fieldValue468)
fieldValue469 = x3d.fieldValue()
fieldValue469.setName("translation")
fieldValue469.setValue("0.0631000027060509 1.55299997329712 0.0329999998211861")

ProtoInstance467.addFieldValue(fieldValue469)

fieldValue442.addChildren(ProtoInstance467)
ProtoInstance470 = x3d.ProtoInstance()
ProtoInstance470.setName("Site")
ProtoInstance470.setDEF("hanim_nuchale_2")
fieldValue471 = x3d.fieldValue()
fieldValue471.setName("name")
fieldValue471.setValue("nuchale")

ProtoInstance470.addFieldValue(fieldValue471)
fieldValue472 = x3d.fieldValue()
fieldValue472.setName("translation")
fieldValue472.setValue("0.00389999989420176 1.59720003604889 -0.0795999988913536")

ProtoInstance470.addFieldValue(fieldValue472)

fieldValue442.addChildren(ProtoInstance470)

ProtoInstance440.addFieldValue(fieldValue442)

fieldValue425.addChildren(ProtoInstance440)

ProtoInstance421.addFieldValue(fieldValue425)

fieldValue420.addChildren(ProtoInstance421)
ProtoInstance473 = x3d.ProtoInstance()
ProtoInstance473.setName("Segment")
ProtoInstance473.setDEF("hanim_c1_2")
fieldValue474 = x3d.fieldValue()
fieldValue474.setName("name")
fieldValue474.setValue("c1")

ProtoInstance473.addFieldValue(fieldValue474)

fieldValue420.addChildren(ProtoInstance473)

ProtoInstance416.addFieldValue(fieldValue420)

fieldValue415.addChildren(ProtoInstance416)
ProtoInstance475 = x3d.ProtoInstance()
ProtoInstance475.setName("Segment")
ProtoInstance475.setDEF("hanim_c2_2")
fieldValue476 = x3d.fieldValue()
fieldValue476.setName("name")
fieldValue476.setValue("c2")

ProtoInstance475.addFieldValue(fieldValue476)

fieldValue415.addChildren(ProtoInstance475)

ProtoInstance411.addFieldValue(fieldValue415)

fieldValue410.addChildren(ProtoInstance411)
ProtoInstance477 = x3d.ProtoInstance()
ProtoInstance477.setName("Segment")
ProtoInstance477.setDEF("hanim_c3_2")
fieldValue478 = x3d.fieldValue()
fieldValue478.setName("name")
fieldValue478.setValue("c3")

ProtoInstance477.addFieldValue(fieldValue478)

fieldValue410.addChildren(ProtoInstance477)

ProtoInstance406.addFieldValue(fieldValue410)

fieldValue405.addChildren(ProtoInstance406)
ProtoInstance479 = x3d.ProtoInstance()
ProtoInstance479.setName("Segment")
ProtoInstance479.setDEF("hanim_c4_2")
fieldValue480 = x3d.fieldValue()
fieldValue480.setName("name")
fieldValue480.setValue("c4")

ProtoInstance479.addFieldValue(fieldValue480)

fieldValue405.addChildren(ProtoInstance479)

ProtoInstance401.addFieldValue(fieldValue405)

fieldValue400.addChildren(ProtoInstance401)
ProtoInstance481 = x3d.ProtoInstance()
ProtoInstance481.setName("Segment")
ProtoInstance481.setDEF("hanim_c5_2")
fieldValue482 = x3d.fieldValue()
fieldValue482.setName("name")
fieldValue482.setValue("c5")

ProtoInstance481.addFieldValue(fieldValue482)

fieldValue400.addChildren(ProtoInstance481)

ProtoInstance396.addFieldValue(fieldValue400)

fieldValue395.addChildren(ProtoInstance396)
ProtoInstance483 = x3d.ProtoInstance()
ProtoInstance483.setName("Segment")
ProtoInstance483.setDEF("hanim_c6_2")
fieldValue484 = x3d.fieldValue()
fieldValue484.setName("name")
fieldValue484.setValue("c6")

ProtoInstance483.addFieldValue(fieldValue484)

fieldValue395.addChildren(ProtoInstance483)

ProtoInstance391.addFieldValue(fieldValue395)

fieldValue390.addChildren(ProtoInstance391)
ProtoInstance485 = x3d.ProtoInstance()
ProtoInstance485.setName("Segment")
ProtoInstance485.setDEF("hanim_c7_2")
fieldValue486 = x3d.fieldValue()
fieldValue486.setName("name")
fieldValue486.setValue("c7")

ProtoInstance485.addFieldValue(fieldValue486)
fieldValue487 = x3d.fieldValue()
fieldValue487.setName("children")
ProtoInstance488 = x3d.ProtoInstance()
ProtoInstance488.setName("Site")
ProtoInstance488.setDEF("hanim_r_neck_base_2")
fieldValue489 = x3d.fieldValue()
fieldValue489.setName("name")
fieldValue489.setValue("r_neck_base")

ProtoInstance488.addFieldValue(fieldValue489)
fieldValue490 = x3d.fieldValue()
fieldValue490.setName("translation")
fieldValue490.setValue("-0.0419000014662743 1.51489996910095 -0.0219999998807907")

ProtoInstance488.addFieldValue(fieldValue490)

fieldValue487.addChildren(ProtoInstance488)
ProtoInstance491 = x3d.ProtoInstance()
ProtoInstance491.setName("Site")
ProtoInstance491.setDEF("hanim_l_neck_base_2")
fieldValue492 = x3d.fieldValue()
fieldValue492.setName("name")
fieldValue492.setValue("l_neck_base")

ProtoInstance491.addFieldValue(fieldValue492)
fieldValue493 = x3d.fieldValue()
fieldValue493.setName("translation")
fieldValue493.setValue("0.0645999982953072 1.51409995555878 -0.0379999987781048")

ProtoInstance491.addFieldValue(fieldValue493)

fieldValue487.addChildren(ProtoInstance491)

ProtoInstance485.addFieldValue(fieldValue487)

fieldValue390.addChildren(ProtoInstance485)

ProtoInstance386.addFieldValue(fieldValue390)

fieldValue385.addChildren(ProtoInstance386)
ProtoInstance494 = x3d.ProtoInstance()
ProtoInstance494.setName("Joint")
ProtoInstance494.setDEF("hanim_l_sternoclavicular_2")
fieldValue495 = x3d.fieldValue()
fieldValue495.setName("stiffness")
fieldValue495.setValue("1 1 1")

ProtoInstance494.addFieldValue(fieldValue495)
fieldValue496 = x3d.fieldValue()
fieldValue496.setName("name")
fieldValue496.setValue("l_sternoclavicular")

ProtoInstance494.addFieldValue(fieldValue496)
fieldValue497 = x3d.fieldValue()
fieldValue497.setName("center")
fieldValue497.setValue("0.0820000022649765 1.44879996776581 -0.035300001502037")

ProtoInstance494.addFieldValue(fieldValue497)
fieldValue498 = x3d.fieldValue()
fieldValue498.setName("children")
ProtoInstance499 = x3d.ProtoInstance()
ProtoInstance499.setName("Joint")
ProtoInstance499.setDEF("hanim_l_acromioclavicular_2")
fieldValue500 = x3d.fieldValue()
fieldValue500.setName("stiffness")
fieldValue500.setValue("1 1 1")

ProtoInstance499.addFieldValue(fieldValue500)
fieldValue501 = x3d.fieldValue()
fieldValue501.setName("name")
fieldValue501.setValue("l_acromioclavicular")

ProtoInstance499.addFieldValue(fieldValue501)
fieldValue502 = x3d.fieldValue()
fieldValue502.setName("center")
fieldValue502.setValue("0.0961999967694283 1.42690002918243 -0.0423999987542629")

ProtoInstance499.addFieldValue(fieldValue502)
fieldValue503 = x3d.fieldValue()
fieldValue503.setName("children")
ProtoInstance504 = x3d.ProtoInstance()
ProtoInstance504.setName("Joint")
ProtoInstance504.setDEF("hanim_l_shoulder_2")
fieldValue505 = x3d.fieldValue()
fieldValue505.setName("stiffness")
fieldValue505.setValue("1 1 1")

ProtoInstance504.addFieldValue(fieldValue505)
fieldValue506 = x3d.fieldValue()
fieldValue506.setName("name")
fieldValue506.setValue("l_shoulder")

ProtoInstance504.addFieldValue(fieldValue506)
fieldValue507 = x3d.fieldValue()
fieldValue507.setName("center")
fieldValue507.setValue("0.202900007367134 1.43760001659393 -0.0386999994516373")

ProtoInstance504.addFieldValue(fieldValue507)
fieldValue508 = x3d.fieldValue()
fieldValue508.setName("children")
ProtoInstance509 = x3d.ProtoInstance()
ProtoInstance509.setName("Joint")
ProtoInstance509.setDEF("hanim_l_elbow_2")
fieldValue510 = x3d.fieldValue()
fieldValue510.setName("stiffness")
fieldValue510.setValue("1 1 1")

ProtoInstance509.addFieldValue(fieldValue510)
fieldValue511 = x3d.fieldValue()
fieldValue511.setName("name")
fieldValue511.setValue("l_elbow")

ProtoInstance509.addFieldValue(fieldValue511)
fieldValue512 = x3d.fieldValue()
fieldValue512.setName("center")
fieldValue512.setValue("0.201399996876717 1.1356999874115 -0.0681999996304512")

ProtoInstance509.addFieldValue(fieldValue512)
fieldValue513 = x3d.fieldValue()
fieldValue513.setName("children")
ProtoInstance514 = x3d.ProtoInstance()
ProtoInstance514.setName("Joint")
ProtoInstance514.setDEF("hanim_l_radiocarpal_2")
fieldValue515 = x3d.fieldValue()
fieldValue515.setName("stiffness")
fieldValue515.setValue("1 1 1")

ProtoInstance514.addFieldValue(fieldValue515)
fieldValue516 = x3d.fieldValue()
fieldValue516.setName("name")
fieldValue516.setValue("l_radiocarpal")

ProtoInstance514.addFieldValue(fieldValue516)
fieldValue517 = x3d.fieldValue()
fieldValue517.setName("center")
fieldValue517.setValue("0.198400005698204 0.866299986839294 -0.0582999996840954")

ProtoInstance514.addFieldValue(fieldValue517)
fieldValue518 = x3d.fieldValue()
fieldValue518.setName("children")
ProtoInstance519 = x3d.ProtoInstance()
ProtoInstance519.setName("Joint")
ProtoInstance519.setDEF("hanim_l_carpometacarpal2")
fieldValue520 = x3d.fieldValue()
fieldValue520.setName("stiffness")
fieldValue520.setValue("1 1 1")

ProtoInstance519.addFieldValue(fieldValue520)
fieldValue521 = x3d.fieldValue()
fieldValue521.setName("name")
fieldValue521.setValue("l_carpometacarpal_1")

ProtoInstance519.addFieldValue(fieldValue521)
fieldValue522 = x3d.fieldValue()
fieldValue522.setName("center")
fieldValue522.setValue("0.192399993538857 0.847199976444244 -0.0533999986946583")

ProtoInstance519.addFieldValue(fieldValue522)
fieldValue523 = x3d.fieldValue()
fieldValue523.setName("children")
ProtoInstance524 = x3d.ProtoInstance()
ProtoInstance524.setName("Joint")
ProtoInstance524.setDEF("hanim_l_metacarpophalangeal2")
fieldValue525 = x3d.fieldValue()
fieldValue525.setName("stiffness")
fieldValue525.setValue("1 1 1")

ProtoInstance524.addFieldValue(fieldValue525)
fieldValue526 = x3d.fieldValue()
fieldValue526.setName("name")
fieldValue526.setValue("l_metacarpophalangeal_1")

ProtoInstance524.addFieldValue(fieldValue526)
fieldValue527 = x3d.fieldValue()
fieldValue527.setName("center")
fieldValue527.setValue("0.195099994540215 0.82260000705719 0.0245999991893768")

ProtoInstance524.addFieldValue(fieldValue527)
fieldValue528 = x3d.fieldValue()
fieldValue528.setName("children")
ProtoInstance529 = x3d.ProtoInstance()
ProtoInstance529.setName("Joint")
ProtoInstance529.setDEF("hanim_l_carpal_interphalangeal2")
fieldValue530 = x3d.fieldValue()
fieldValue530.setName("stiffness")
fieldValue530.setValue("1 1 1")

ProtoInstance529.addFieldValue(fieldValue530)
fieldValue531 = x3d.fieldValue()
fieldValue531.setName("name")
fieldValue531.setValue("l_carpal_interphalangeal_1")

ProtoInstance529.addFieldValue(fieldValue531)
fieldValue532 = x3d.fieldValue()
fieldValue532.setName("center")
fieldValue532.setValue("0.195500001311302 0.815900027751923 0.046399999409914")

ProtoInstance529.addFieldValue(fieldValue532)
fieldValue533 = x3d.fieldValue()
fieldValue533.setName("children")
ProtoInstance534 = x3d.ProtoInstance()
ProtoInstance534.setName("Segment")
ProtoInstance534.setDEF("hanim_l_carpal_distal_phalanx2")
fieldValue535 = x3d.fieldValue()
fieldValue535.setName("name")
fieldValue535.setValue("l_carpal_distal_phalanx_1")

ProtoInstance534.addFieldValue(fieldValue535)
fieldValue536 = x3d.fieldValue()
fieldValue536.setName("children")
ProtoInstance537 = x3d.ProtoInstance()
ProtoInstance537.setName("Site")
ProtoInstance537.setDEF("hanim_l_carpal_distal_phalanx_1_tip_2")
fieldValue538 = x3d.fieldValue()
fieldValue538.setName("name")
fieldValue538.setValue("l_carpal_distal_phalanx_1_tip")

ProtoInstance537.addFieldValue(fieldValue538)
fieldValue539 = x3d.fieldValue()
fieldValue539.setName("translation")
fieldValue539.setValue("0.19820000231266 0.806100010871887 0.0759000033140183")

ProtoInstance537.addFieldValue(fieldValue539)

fieldValue536.addChildren(ProtoInstance537)

ProtoInstance534.addFieldValue(fieldValue536)

fieldValue533.addChildren(ProtoInstance534)

ProtoInstance529.addFieldValue(fieldValue533)

fieldValue528.addChildren(ProtoInstance529)
ProtoInstance540 = x3d.ProtoInstance()
ProtoInstance540.setName("Segment")
ProtoInstance540.setDEF("hanim_l_index_proximal_2")
fieldValue541 = x3d.fieldValue()
fieldValue541.setName("name")
fieldValue541.setValue("l_index_proximal")

ProtoInstance540.addFieldValue(fieldValue541)

fieldValue528.addChildren(ProtoInstance540)

ProtoInstance524.addFieldValue(fieldValue528)

fieldValue523.addChildren(ProtoInstance524)
ProtoInstance542 = x3d.ProtoInstance()
ProtoInstance542.setName("Segment")
ProtoInstance542.setDEF("hanim_l_index_proximal_4")
fieldValue543 = x3d.fieldValue()
fieldValue543.setName("name")
fieldValue543.setValue("l_index_proximal")

ProtoInstance542.addFieldValue(fieldValue543)

fieldValue523.addChildren(ProtoInstance542)

ProtoInstance519.addFieldValue(fieldValue523)

fieldValue518.addChildren(ProtoInstance519)
ProtoInstance544 = x3d.ProtoInstance()
ProtoInstance544.setName("Joint")
ProtoInstance544.setDEF("hanim_l_carpometacarpal3")
fieldValue545 = x3d.fieldValue()
fieldValue545.setName("stiffness")
fieldValue545.setValue("1 1 1")

ProtoInstance544.addFieldValue(fieldValue545)
fieldValue546 = x3d.fieldValue()
fieldValue546.setName("name")
fieldValue546.setValue("l_carpometacarpal_2")

ProtoInstance544.addFieldValue(fieldValue546)
fieldValue547 = x3d.fieldValue()
fieldValue547.setName("center")
fieldValue547.setValue("0.198300004005432 0.80239999294281 -0.0280000008642673")

ProtoInstance544.addFieldValue(fieldValue547)
fieldValue548 = x3d.fieldValue()
fieldValue548.setName("children")
ProtoInstance549 = x3d.ProtoInstance()
ProtoInstance549.setName("Joint")
ProtoInstance549.setDEF("hanim_l_metacarpophalangeal3")
fieldValue550 = x3d.fieldValue()
fieldValue550.setName("stiffness")
fieldValue550.setValue("1 1 1")

ProtoInstance549.addFieldValue(fieldValue550)
fieldValue551 = x3d.fieldValue()
fieldValue551.setName("name")
fieldValue551.setValue("l_metacarpophalangeal_2")

ProtoInstance549.addFieldValue(fieldValue551)
fieldValue552 = x3d.fieldValue()
fieldValue552.setName("center")
fieldValue552.setValue("0.198300004005432 0.781499981880188 -0.0280000008642673")

ProtoInstance549.addFieldValue(fieldValue552)
fieldValue553 = x3d.fieldValue()
fieldValue553.setName("children")
ProtoInstance554 = x3d.ProtoInstance()
ProtoInstance554.setName("Joint")
ProtoInstance554.setDEF("hanim_l_carpal_proximal_interphalangeal3")
fieldValue555 = x3d.fieldValue()
fieldValue555.setName("stiffness")
fieldValue555.setValue("1 1 1")

ProtoInstance554.addFieldValue(fieldValue555)
fieldValue556 = x3d.fieldValue()
fieldValue556.setName("name")
fieldValue556.setValue("l_carpal_proximal_interphalangeal_2")

ProtoInstance554.addFieldValue(fieldValue556)
fieldValue557 = x3d.fieldValue()
fieldValue557.setName("center")
fieldValue557.setValue("0.201700001955032 0.736299991607666 -0.0248000007122755")

ProtoInstance554.addFieldValue(fieldValue557)
fieldValue558 = x3d.fieldValue()
fieldValue558.setName("children")
ProtoInstance559 = x3d.ProtoInstance()
ProtoInstance559.setName("Joint")
ProtoInstance559.setDEF("hanim_l_carpal_distal_interphalangeal3")
fieldValue560 = x3d.fieldValue()
fieldValue560.setName("stiffness")
fieldValue560.setValue("1 1 1")

ProtoInstance559.addFieldValue(fieldValue560)
fieldValue561 = x3d.fieldValue()
fieldValue561.setName("name")
fieldValue561.setValue("l_carpal_distal_interphalangeal_2")

ProtoInstance559.addFieldValue(fieldValue561)
fieldValue562 = x3d.fieldValue()
fieldValue562.setName("center")
fieldValue562.setValue("0.202800005674362 0.713900029659271 -0.0236000008881092")

ProtoInstance559.addFieldValue(fieldValue562)
fieldValue563 = x3d.fieldValue()
fieldValue563.setName("children")
ProtoInstance564 = x3d.ProtoInstance()
ProtoInstance564.setName("Segment")
ProtoInstance564.setDEF("hanim_l_carpal_distal_phalanx3")
fieldValue565 = x3d.fieldValue()
fieldValue565.setName("name")
fieldValue565.setValue("l_carpal_distal_phalanx_2")

ProtoInstance564.addFieldValue(fieldValue565)
fieldValue566 = x3d.fieldValue()
fieldValue566.setName("children")
ProtoInstance567 = x3d.ProtoInstance()
ProtoInstance567.setName("Site")
ProtoInstance567.setDEF("hanim_l_carpal_distal_phalanx_2_tip_2")
fieldValue568 = x3d.fieldValue()
fieldValue568.setName("name")
fieldValue568.setValue("l_carpal_distal_phalanx_2_tip")

ProtoInstance567.addFieldValue(fieldValue568)
fieldValue569 = x3d.fieldValue()
fieldValue569.setName("translation")
fieldValue569.setValue("0.20890000462532 0.685800015926361 -0.0244999993592501")

ProtoInstance567.addFieldValue(fieldValue569)

fieldValue566.addChildren(ProtoInstance567)
ProtoInstance570 = x3d.ProtoInstance()
ProtoInstance570.setName("Site")
ProtoInstance570.setDEF("hanim_l_dactylion_2")
fieldValue571 = x3d.fieldValue()
fieldValue571.setName("name")
fieldValue571.setValue("l_dactylion")

ProtoInstance570.addFieldValue(fieldValue571)
fieldValue572 = x3d.fieldValue()
fieldValue572.setName("translation")
fieldValue572.setValue("0.205599993467331 0.674300014972687 -0.048200000077486")

ProtoInstance570.addFieldValue(fieldValue572)

fieldValue566.addChildren(ProtoInstance570)

ProtoInstance564.addFieldValue(fieldValue566)

fieldValue563.addChildren(ProtoInstance564)

ProtoInstance559.addFieldValue(fieldValue563)

fieldValue558.addChildren(ProtoInstance559)
ProtoInstance573 = x3d.ProtoInstance()
ProtoInstance573.setName("Segment")
ProtoInstance573.setDEF("hanim_l_index_middle_2")
fieldValue574 = x3d.fieldValue()
fieldValue574.setName("name")
fieldValue574.setValue("l_index_middle")

ProtoInstance573.addFieldValue(fieldValue574)

fieldValue558.addChildren(ProtoInstance573)

ProtoInstance554.addFieldValue(fieldValue558)

fieldValue553.addChildren(ProtoInstance554)
ProtoInstance575 = x3d.ProtoInstance()
ProtoInstance575.setName("Segment")
ProtoInstance575.setDEF("hanim_l_index_proximal_6")
fieldValue576 = x3d.fieldValue()
fieldValue576.setName("name")
fieldValue576.setValue("l_index_proximal")

ProtoInstance575.addFieldValue(fieldValue576)

fieldValue553.addChildren(ProtoInstance575)

ProtoInstance549.addFieldValue(fieldValue553)

fieldValue548.addChildren(ProtoInstance549)
ProtoInstance577 = x3d.ProtoInstance()
ProtoInstance577.setName("Segment")
ProtoInstance577.setDEF("hanim_l_index_metacarpal_2")
fieldValue578 = x3d.fieldValue()
fieldValue578.setName("name")
fieldValue578.setValue("l_index_metacarpal")

ProtoInstance577.addFieldValue(fieldValue578)

fieldValue548.addChildren(ProtoInstance577)

ProtoInstance544.addFieldValue(fieldValue548)

fieldValue518.addChildren(ProtoInstance544)
ProtoInstance579 = x3d.ProtoInstance()
ProtoInstance579.setName("Joint")
ProtoInstance579.setDEF("hanim_l_carpometacarpal4")
fieldValue580 = x3d.fieldValue()
fieldValue580.setName("stiffness")
fieldValue580.setValue("1 1 1")

ProtoInstance579.addFieldValue(fieldValue580)
fieldValue581 = x3d.fieldValue()
fieldValue581.setName("name")
fieldValue581.setValue("l_carpometacarpal_3")

ProtoInstance579.addFieldValue(fieldValue581)
fieldValue582 = x3d.fieldValue()
fieldValue582.setName("center")
fieldValue582.setValue("0.198699995875359 0.802900016307831 -0.0529999993741512")

ProtoInstance579.addFieldValue(fieldValue582)
fieldValue583 = x3d.fieldValue()
fieldValue583.setName("children")
ProtoInstance584 = x3d.ProtoInstance()
ProtoInstance584.setName("Joint")
ProtoInstance584.setDEF("hanim_l_metacarpophalangeal4")
fieldValue585 = x3d.fieldValue()
fieldValue585.setName("stiffness")
fieldValue585.setValue("1 1 1")

ProtoInstance584.addFieldValue(fieldValue585)
fieldValue586 = x3d.fieldValue()
fieldValue586.setName("name")
fieldValue586.setValue("l_metacarpophalangeal_3")

ProtoInstance584.addFieldValue(fieldValue586)
fieldValue587 = x3d.fieldValue()
fieldValue587.setName("center")
fieldValue587.setValue("0.198699995875359 0.781799972057343 -0.0529999993741512")

ProtoInstance584.addFieldValue(fieldValue587)
fieldValue588 = x3d.fieldValue()
fieldValue588.setName("children")
ProtoInstance589 = x3d.ProtoInstance()
ProtoInstance589.setName("Joint")
ProtoInstance589.setDEF("hanim_l_carpal_proximal_interphalangeal4")
fieldValue590 = x3d.fieldValue()
fieldValue590.setName("stiffness")
fieldValue590.setValue("1 1 1")

ProtoInstance589.addFieldValue(fieldValue590)
fieldValue591 = x3d.fieldValue()
fieldValue591.setName("name")
fieldValue591.setValue("l_carpal_proximal_interphalangeal_3")

ProtoInstance589.addFieldValue(fieldValue591)
fieldValue592 = x3d.fieldValue()
fieldValue592.setName("center")
fieldValue592.setValue("0.201299995183945 0.727299988269806 -0.0502999983727932")

ProtoInstance589.addFieldValue(fieldValue592)
fieldValue593 = x3d.fieldValue()
fieldValue593.setName("children")
ProtoInstance594 = x3d.ProtoInstance()
ProtoInstance594.setName("Joint")
ProtoInstance594.setDEF("hanim_l_carpal_distal_interphalangeal4")
fieldValue595 = x3d.fieldValue()
fieldValue595.setName("stiffness")
fieldValue595.setValue("1 1 1")

ProtoInstance594.addFieldValue(fieldValue595)
fieldValue596 = x3d.fieldValue()
fieldValue596.setName("name")
fieldValue596.setValue("l_carpal_distal_interphalangeal_3")

ProtoInstance594.addFieldValue(fieldValue596)
fieldValue597 = x3d.fieldValue()
fieldValue597.setName("center")
fieldValue597.setValue("0.202600002288818 0.701099991798401 -0.0494000017642975")

ProtoInstance594.addFieldValue(fieldValue597)
fieldValue598 = x3d.fieldValue()
fieldValue598.setName("children")
ProtoInstance599 = x3d.ProtoInstance()
ProtoInstance599.setName("Segment")
ProtoInstance599.setDEF("hanim_l_carpal_distal_phalanx4")
fieldValue600 = x3d.fieldValue()
fieldValue600.setName("name")
fieldValue600.setValue("l_carpal_distal_phalanx_3")

ProtoInstance599.addFieldValue(fieldValue600)
fieldValue601 = x3d.fieldValue()
fieldValue601.setName("children")
ProtoInstance602 = x3d.ProtoInstance()
ProtoInstance602.setName("Site")
ProtoInstance602.setDEF("hanim_l_carpal_distal_phalanx_3_tip_2")
fieldValue603 = x3d.fieldValue()
fieldValue603.setName("name")
fieldValue603.setValue("l_carpal_distal_phalanx_3_tip")

ProtoInstance602.addFieldValue(fieldValue603)
fieldValue604 = x3d.fieldValue()
fieldValue604.setName("translation")
fieldValue604.setValue("0.208000004291534 0.673099994659424 -0.049100000411272")

ProtoInstance602.addFieldValue(fieldValue604)

fieldValue601.addChildren(ProtoInstance602)

ProtoInstance599.addFieldValue(fieldValue601)

fieldValue598.addChildren(ProtoInstance599)

ProtoInstance594.addFieldValue(fieldValue598)

fieldValue593.addChildren(ProtoInstance594)
ProtoInstance605 = x3d.ProtoInstance()
ProtoInstance605.setName("Segment")
ProtoInstance605.setDEF("hanim_l_middle_middle_2")
fieldValue606 = x3d.fieldValue()
fieldValue606.setName("name")
fieldValue606.setValue("l_middle_middle")

ProtoInstance605.addFieldValue(fieldValue606)

fieldValue593.addChildren(ProtoInstance605)

ProtoInstance589.addFieldValue(fieldValue593)

fieldValue588.addChildren(ProtoInstance589)
ProtoInstance607 = x3d.ProtoInstance()
ProtoInstance607.setName("Segment")
ProtoInstance607.setDEF("hanim_l_middle_proximal_2")
fieldValue608 = x3d.fieldValue()
fieldValue608.setName("name")
fieldValue608.setValue("l_middle_proximal")

ProtoInstance607.addFieldValue(fieldValue608)

fieldValue588.addChildren(ProtoInstance607)

ProtoInstance584.addFieldValue(fieldValue588)

fieldValue583.addChildren(ProtoInstance584)
ProtoInstance609 = x3d.ProtoInstance()
ProtoInstance609.setName("Segment")
ProtoInstance609.setDEF("hanim_l_middle_metacarpal_2")
fieldValue610 = x3d.fieldValue()
fieldValue610.setName("name")
fieldValue610.setValue("l_middle_metacarpal")

ProtoInstance609.addFieldValue(fieldValue610)

fieldValue583.addChildren(ProtoInstance609)

ProtoInstance579.addFieldValue(fieldValue583)

fieldValue518.addChildren(ProtoInstance579)
ProtoInstance611 = x3d.ProtoInstance()
ProtoInstance611.setName("Joint")
ProtoInstance611.setDEF("hanim_l_carpometacarpal5")
fieldValue612 = x3d.fieldValue()
fieldValue612.setName("stiffness")
fieldValue612.setValue("1 1 1")

ProtoInstance611.addFieldValue(fieldValue612)
fieldValue613 = x3d.fieldValue()
fieldValue613.setName("name")
fieldValue613.setValue("l_carpometacarpal_4")

ProtoInstance611.addFieldValue(fieldValue613)
fieldValue614 = x3d.fieldValue()
fieldValue614.setName("center")
fieldValue614.setValue("0.195600003004074 0.801900029182434 -0.0794000029563904")

ProtoInstance611.addFieldValue(fieldValue614)
fieldValue615 = x3d.fieldValue()
fieldValue615.setName("children")
ProtoInstance616 = x3d.ProtoInstance()
ProtoInstance616.setName("Joint")
ProtoInstance616.setDEF("hanim_l_metacarpophalangeal5")
fieldValue617 = x3d.fieldValue()
fieldValue617.setName("stiffness")
fieldValue617.setValue("1 1 1")

ProtoInstance616.addFieldValue(fieldValue617)
fieldValue618 = x3d.fieldValue()
fieldValue618.setName("name")
fieldValue618.setValue("l_metacarpophalangeal_4")

ProtoInstance616.addFieldValue(fieldValue618)
fieldValue619 = x3d.fieldValue()
fieldValue619.setName("center")
fieldValue619.setValue("0.195600003004074 0.781499981880188 -0.0794000029563904")

ProtoInstance616.addFieldValue(fieldValue619)
fieldValue620 = x3d.fieldValue()
fieldValue620.setName("children")
ProtoInstance621 = x3d.ProtoInstance()
ProtoInstance621.setName("Joint")
ProtoInstance621.setDEF("hanim_l_carpal_proximal_interphalangeal5")
fieldValue622 = x3d.fieldValue()
fieldValue622.setName("stiffness")
fieldValue622.setValue("1 1 1")

ProtoInstance621.addFieldValue(fieldValue622)
fieldValue623 = x3d.fieldValue()
fieldValue623.setName("name")
fieldValue623.setValue("l_carpal_proximal_interphalangeal_4")

ProtoInstance621.addFieldValue(fieldValue623)
fieldValue624 = x3d.fieldValue()
fieldValue624.setName("center")
fieldValue624.setValue("0.197300001978874 0.72869998216629 -0.0776999965310097")

ProtoInstance621.addFieldValue(fieldValue624)
fieldValue625 = x3d.fieldValue()
fieldValue625.setName("children")
ProtoInstance626 = x3d.ProtoInstance()
ProtoInstance626.setName("Joint")
ProtoInstance626.setDEF("hanim_l_carpal_distal_interphalangeal5")
fieldValue627 = x3d.fieldValue()
fieldValue627.setName("stiffness")
fieldValue627.setValue("1 1 1")

ProtoInstance626.addFieldValue(fieldValue627)
fieldValue628 = x3d.fieldValue()
fieldValue628.setName("name")
fieldValue628.setValue("l_carpal_distal_interphalangeal_4")

ProtoInstance626.addFieldValue(fieldValue628)
fieldValue629 = x3d.fieldValue()
fieldValue629.setName("center")
fieldValue629.setValue("0.198300004005432 0.704500019550323 -0.0767000019550323")

ProtoInstance626.addFieldValue(fieldValue629)
fieldValue630 = x3d.fieldValue()
fieldValue630.setName("children")
ProtoInstance631 = x3d.ProtoInstance()
ProtoInstance631.setName("Segment")
ProtoInstance631.setDEF("hanim_l_carpal_distal_phalanx5")
fieldValue632 = x3d.fieldValue()
fieldValue632.setName("name")
fieldValue632.setValue("l_carpal_distal_phalanx_4")

ProtoInstance631.addFieldValue(fieldValue632)
fieldValue633 = x3d.fieldValue()
fieldValue633.setName("children")
ProtoInstance634 = x3d.ProtoInstance()
ProtoInstance634.setName("Site")
ProtoInstance634.setDEF("hanim_l_carpal_distal_phalanx_4_tip_2")
fieldValue635 = x3d.fieldValue()
fieldValue635.setName("name")
fieldValue635.setValue("l_carpal_distal_phalanx_4_tip")

ProtoInstance634.addFieldValue(fieldValue635)
fieldValue636 = x3d.fieldValue()
fieldValue636.setName("translation")
fieldValue636.setValue("0.203500002622604 0.675000011920929 -0.0755999982357025")

ProtoInstance634.addFieldValue(fieldValue636)

fieldValue633.addChildren(ProtoInstance634)

ProtoInstance631.addFieldValue(fieldValue633)

fieldValue630.addChildren(ProtoInstance631)

ProtoInstance626.addFieldValue(fieldValue630)

fieldValue625.addChildren(ProtoInstance626)
ProtoInstance637 = x3d.ProtoInstance()
ProtoInstance637.setName("Segment")
ProtoInstance637.setDEF("hanim_l_ring_middle_2")
fieldValue638 = x3d.fieldValue()
fieldValue638.setName("name")
fieldValue638.setValue("l_ring_middle")

ProtoInstance637.addFieldValue(fieldValue638)

fieldValue625.addChildren(ProtoInstance637)

ProtoInstance621.addFieldValue(fieldValue625)

fieldValue620.addChildren(ProtoInstance621)
ProtoInstance639 = x3d.ProtoInstance()
ProtoInstance639.setName("Segment")
ProtoInstance639.setDEF("hanim_l_ring_proximal_2")
fieldValue640 = x3d.fieldValue()
fieldValue640.setName("name")
fieldValue640.setValue("l_ring_proximal")

ProtoInstance639.addFieldValue(fieldValue640)

fieldValue620.addChildren(ProtoInstance639)

ProtoInstance616.addFieldValue(fieldValue620)

fieldValue615.addChildren(ProtoInstance616)
ProtoInstance641 = x3d.ProtoInstance()
ProtoInstance641.setName("Segment")
ProtoInstance641.setDEF("hanim_l_ring_metacarpal_2")
fieldValue642 = x3d.fieldValue()
fieldValue642.setName("name")
fieldValue642.setValue("l_ring_metacarpal")

ProtoInstance641.addFieldValue(fieldValue642)

fieldValue615.addChildren(ProtoInstance641)

ProtoInstance611.addFieldValue(fieldValue615)

fieldValue518.addChildren(ProtoInstance611)
ProtoInstance643 = x3d.ProtoInstance()
ProtoInstance643.setName("Joint")
ProtoInstance643.setDEF("hanim_l_carpometacarpal6")
fieldValue644 = x3d.fieldValue()
fieldValue644.setName("stiffness")
fieldValue644.setValue("1 1 1")

ProtoInstance643.addFieldValue(fieldValue644)
fieldValue645 = x3d.fieldValue()
fieldValue645.setName("name")
fieldValue645.setValue("l_carpometacarpal_5")

ProtoInstance643.addFieldValue(fieldValue645)
fieldValue646 = x3d.fieldValue()
fieldValue646.setName("center")
fieldValue646.setValue("0.192499995231628 0.806599974632263 -0.10360000282526")

ProtoInstance643.addFieldValue(fieldValue646)
fieldValue647 = x3d.fieldValue()
fieldValue647.setName("children")
ProtoInstance648 = x3d.ProtoInstance()
ProtoInstance648.setName("Joint")
ProtoInstance648.setDEF("hanim_l_metacarpophalangeal6")
fieldValue649 = x3d.fieldValue()
fieldValue649.setName("stiffness")
fieldValue649.setValue("1 1 1")

ProtoInstance648.addFieldValue(fieldValue649)
fieldValue650 = x3d.fieldValue()
fieldValue650.setName("name")
fieldValue650.setValue("l_metacarpophalangeal_5")

ProtoInstance648.addFieldValue(fieldValue650)
fieldValue651 = x3d.fieldValue()
fieldValue651.setName("center")
fieldValue651.setValue("0.192499995231628 0.78659999370575 -0.10360000282526")

ProtoInstance648.addFieldValue(fieldValue651)
fieldValue652 = x3d.fieldValue()
fieldValue652.setName("children")
ProtoInstance653 = x3d.ProtoInstance()
ProtoInstance653.setName("Joint")
ProtoInstance653.setDEF("hanim_l_carpal_proximal_interphalangeal6")
fieldValue654 = x3d.fieldValue()
fieldValue654.setName("stiffness")
fieldValue654.setValue("1 1 1")

ProtoInstance653.addFieldValue(fieldValue654)
fieldValue655 = x3d.fieldValue()
fieldValue655.setName("name")
fieldValue655.setValue("l_carpal_proximal_interphalangeal_5")

ProtoInstance653.addFieldValue(fieldValue655)
fieldValue656 = x3d.fieldValue()
fieldValue656.setName("center")
fieldValue656.setValue("0.193800002336502 0.745199978351593 -0.102399997413158")

ProtoInstance653.addFieldValue(fieldValue656)
fieldValue657 = x3d.fieldValue()
fieldValue657.setName("children")
ProtoInstance658 = x3d.ProtoInstance()
ProtoInstance658.setName("Joint")
ProtoInstance658.setDEF("hanim_l_carpal_distal_interphalangeal6")
fieldValue659 = x3d.fieldValue()
fieldValue659.setName("stiffness")
fieldValue659.setValue("1 1 1")

ProtoInstance658.addFieldValue(fieldValue659)
fieldValue660 = x3d.fieldValue()
fieldValue660.setName("name")
fieldValue660.setValue("l_carpal_distal_interphalangeal_5")

ProtoInstance658.addFieldValue(fieldValue660)
fieldValue661 = x3d.fieldValue()
fieldValue661.setName("center")
fieldValue661.setValue("0.19480000436306 0.727699995040894 -0.101700000464916")

ProtoInstance658.addFieldValue(fieldValue661)
fieldValue662 = x3d.fieldValue()
fieldValue662.setName("children")
ProtoInstance663 = x3d.ProtoInstance()
ProtoInstance663.setName("Segment")
ProtoInstance663.setDEF("hanim_l_carpal_distal_phalanx6")
fieldValue664 = x3d.fieldValue()
fieldValue664.setName("name")
fieldValue664.setValue("l_carpal_distal_phalanx_5")

ProtoInstance663.addFieldValue(fieldValue664)
fieldValue665 = x3d.fieldValue()
fieldValue665.setName("children")
ProtoInstance666 = x3d.ProtoInstance()
ProtoInstance666.setName("Site")
ProtoInstance666.setDEF("hanim_l_carpal_distal_phalanx_5_tip_2")
fieldValue667 = x3d.fieldValue()
fieldValue667.setName("name")
fieldValue667.setValue("l_carpal_distal_phalanx_5_tip")

ProtoInstance666.addFieldValue(fieldValue667)
fieldValue668 = x3d.fieldValue()
fieldValue668.setName("translation")
fieldValue668.setValue("0.201399996876717 0.700900018215179 -0.101199999451637")

ProtoInstance666.addFieldValue(fieldValue668)

fieldValue665.addChildren(ProtoInstance666)

ProtoInstance663.addFieldValue(fieldValue665)

fieldValue662.addChildren(ProtoInstance663)

ProtoInstance658.addFieldValue(fieldValue662)

fieldValue657.addChildren(ProtoInstance658)
ProtoInstance669 = x3d.ProtoInstance()
ProtoInstance669.setName("Segment")
ProtoInstance669.setDEF("hanim_l_pinky_middle_2")
fieldValue670 = x3d.fieldValue()
fieldValue670.setName("name")
fieldValue670.setValue("l_pinky_middle")

ProtoInstance669.addFieldValue(fieldValue670)

fieldValue657.addChildren(ProtoInstance669)

ProtoInstance653.addFieldValue(fieldValue657)

fieldValue652.addChildren(ProtoInstance653)
ProtoInstance671 = x3d.ProtoInstance()
ProtoInstance671.setName("Segment")
ProtoInstance671.setDEF("hanim_l_pinky_proximal_2")
fieldValue672 = x3d.fieldValue()
fieldValue672.setName("name")
fieldValue672.setValue("l_pinky_proximal")

ProtoInstance671.addFieldValue(fieldValue672)

fieldValue652.addChildren(ProtoInstance671)

ProtoInstance648.addFieldValue(fieldValue652)

fieldValue647.addChildren(ProtoInstance648)
ProtoInstance673 = x3d.ProtoInstance()
ProtoInstance673.setName("Segment")
ProtoInstance673.setDEF("hanim_l_pinky_metacarpal_2")
fieldValue674 = x3d.fieldValue()
fieldValue674.setName("name")
fieldValue674.setValue("l_pinky_metacarpal")

ProtoInstance673.addFieldValue(fieldValue674)

fieldValue647.addChildren(ProtoInstance673)

ProtoInstance643.addFieldValue(fieldValue647)

fieldValue518.addChildren(ProtoInstance643)
ProtoInstance675 = x3d.ProtoInstance()
ProtoInstance675.setName("Segment")
ProtoInstance675.setDEF("hanim_l_hand_2")
fieldValue676 = x3d.fieldValue()
fieldValue676.setName("name")
fieldValue676.setValue("l_hand")

ProtoInstance675.addFieldValue(fieldValue676)
fieldValue677 = x3d.fieldValue()
fieldValue677.setName("children")
ProtoInstance678 = x3d.ProtoInstance()
ProtoInstance678.setName("Site")
ProtoInstance678.setDEF("hanim_l_metacarpal_phalanx3")
fieldValue679 = x3d.fieldValue()
fieldValue679.setName("name")
fieldValue679.setValue("l_metacarpal_phalanx_2")

ProtoInstance678.addFieldValue(fieldValue679)
fieldValue680 = x3d.fieldValue()
fieldValue680.setName("translation")
fieldValue680.setValue("0.200900003314018 0.813899993896484 -0.023700000718236")

ProtoInstance678.addFieldValue(fieldValue680)

fieldValue677.addChildren(ProtoInstance678)
ProtoInstance681 = x3d.ProtoInstance()
ProtoInstance681.setName("Site")
ProtoInstance681.setDEF("hanim_l_ulnar_styloid_2")
fieldValue682 = x3d.fieldValue()
fieldValue682.setName("name")
fieldValue682.setValue("l_ulnar_styloid")

ProtoInstance681.addFieldValue(fieldValue682)
fieldValue683 = x3d.fieldValue()
fieldValue683.setName("translation")
fieldValue683.setValue("-0.214200004935265 0.85290002822876 -0.064800001680851")

ProtoInstance681.addFieldValue(fieldValue683)

fieldValue677.addChildren(ProtoInstance681)
ProtoInstance684 = x3d.ProtoInstance()
ProtoInstance684.setName("Site")
ProtoInstance684.setDEF("hanim_l_metacarpal_phalanx6")
fieldValue685 = x3d.fieldValue()
fieldValue685.setName("name")
fieldValue685.setValue("l_metacarpal_phalanx_5")

ProtoInstance684.addFieldValue(fieldValue685)
fieldValue686 = x3d.fieldValue()
fieldValue686.setName("translation")
fieldValue686.setValue("0.192900002002716 0.78600001335144 -0.112199999392033")

ProtoInstance684.addFieldValue(fieldValue686)

fieldValue677.addChildren(ProtoInstance684)

ProtoInstance675.addFieldValue(fieldValue677)

fieldValue518.addChildren(ProtoInstance675)

ProtoInstance514.addFieldValue(fieldValue518)

fieldValue513.addChildren(ProtoInstance514)
ProtoInstance687 = x3d.ProtoInstance()
ProtoInstance687.setName("Segment")
ProtoInstance687.setDEF("hanim_l_forearm_2")
fieldValue688 = x3d.fieldValue()
fieldValue688.setName("name")
fieldValue688.setValue("l_forearm")

ProtoInstance687.addFieldValue(fieldValue688)
fieldValue689 = x3d.fieldValue()
fieldValue689.setName("children")
ProtoInstance690 = x3d.ProtoInstance()
ProtoInstance690.setName("Site")
ProtoInstance690.setDEF("hanim_l_radial_styloid_2")
fieldValue691 = x3d.fieldValue()
fieldValue691.setName("name")
fieldValue691.setValue("l_radial_styloid")

ProtoInstance690.addFieldValue(fieldValue691)
fieldValue692 = x3d.fieldValue()
fieldValue692.setName("translation")
fieldValue692.setValue("0.190099999308586 0.864499986171722 -0.0414999984204769")

ProtoInstance690.addFieldValue(fieldValue692)

fieldValue689.addChildren(ProtoInstance690)
ProtoInstance693 = x3d.ProtoInstance()
ProtoInstance693.setName("Site")
ProtoInstance693.setDEF("hanim_l_olecranon_2")
fieldValue694 = x3d.fieldValue()
fieldValue694.setName("name")
fieldValue694.setValue("l_olecranon")

ProtoInstance693.addFieldValue(fieldValue694)
fieldValue695 = x3d.fieldValue()
fieldValue695.setName("translation")
fieldValue695.setValue("-0.196199998259544 1.13750004768372 -0.112300001084805")

ProtoInstance693.addFieldValue(fieldValue695)

fieldValue689.addChildren(ProtoInstance693)
ProtoInstance696 = x3d.ProtoInstance()
ProtoInstance696.setName("Site")
ProtoInstance696.setDEF("hanim_l_humeral_medial_epicondyles_2")
fieldValue697 = x3d.fieldValue()
fieldValue697.setName("name")
fieldValue697.setValue("l_humeral_medial_epicondyles")

ProtoInstance696.addFieldValue(fieldValue697)
fieldValue698 = x3d.fieldValue()
fieldValue698.setName("translation")
fieldValue698.setValue("0.173500001430511 1.12720000743866 -0.111299999058247")

ProtoInstance696.addFieldValue(fieldValue698)

fieldValue689.addChildren(ProtoInstance696)
ProtoInstance699 = x3d.ProtoInstance()
ProtoInstance699.setName("Site")
ProtoInstance699.setDEF("hanim_l_radiale_2")
fieldValue700 = x3d.fieldValue()
fieldValue700.setName("name")
fieldValue700.setValue("l_radiale")

ProtoInstance699.addFieldValue(fieldValue700)
fieldValue701 = x3d.fieldValue()
fieldValue701.setName("translation")
fieldValue701.setValue("0.218199998140335 1.12119996547699 -0.116700001060963")

ProtoInstance699.addFieldValue(fieldValue701)

fieldValue689.addChildren(ProtoInstance699)

ProtoInstance687.addFieldValue(fieldValue689)

fieldValue513.addChildren(ProtoInstance687)

ProtoInstance509.addFieldValue(fieldValue513)

fieldValue508.addChildren(ProtoInstance509)
ProtoInstance702 = x3d.ProtoInstance()
ProtoInstance702.setName("Segment")
ProtoInstance702.setDEF("hanim_l_upperarm_2")
fieldValue703 = x3d.fieldValue()
fieldValue703.setName("name")
fieldValue703.setValue("l_upperarm")

ProtoInstance702.addFieldValue(fieldValue703)
fieldValue704 = x3d.fieldValue()
fieldValue704.setName("children")
ProtoInstance705 = x3d.ProtoInstance()
ProtoInstance705.setName("Site")
ProtoInstance705.setDEF("hanim_l_humeral_lateral_epicondyles_2")
fieldValue706 = x3d.fieldValue()
fieldValue706.setName("name")
fieldValue706.setValue("l_humeral_lateral_epicondyles")

ProtoInstance705.addFieldValue(fieldValue706)
fieldValue707 = x3d.fieldValue()
fieldValue707.setName("translation")
fieldValue707.setValue("0.228000000119209 1.14820003509521 -0.109999999403954")

ProtoInstance705.addFieldValue(fieldValue707)

fieldValue704.addChildren(ProtoInstance705)

ProtoInstance702.addFieldValue(fieldValue704)

fieldValue508.addChildren(ProtoInstance702)

ProtoInstance504.addFieldValue(fieldValue508)

fieldValue503.addChildren(ProtoInstance504)
ProtoInstance708 = x3d.ProtoInstance()
ProtoInstance708.setName("Segment")
ProtoInstance708.setDEF("hanim_l_scapula_2")
fieldValue709 = x3d.fieldValue()
fieldValue709.setName("name")
fieldValue709.setValue("l_scapula")

ProtoInstance708.addFieldValue(fieldValue709)

fieldValue503.addChildren(ProtoInstance708)

ProtoInstance499.addFieldValue(fieldValue503)

fieldValue498.addChildren(ProtoInstance499)
ProtoInstance710 = x3d.ProtoInstance()
ProtoInstance710.setName("Segment")
ProtoInstance710.setDEF("hanim_l_clavicle_2")
fieldValue711 = x3d.fieldValue()
fieldValue711.setName("name")
fieldValue711.setValue("l_clavicle")

ProtoInstance710.addFieldValue(fieldValue711)
fieldValue712 = x3d.fieldValue()
fieldValue712.setName("children")
ProtoInstance713 = x3d.ProtoInstance()
ProtoInstance713.setName("Site")
ProtoInstance713.setDEF("hanim_l_clavicale_2")
fieldValue714 = x3d.fieldValue()
fieldValue714.setName("name")
fieldValue714.setValue("l_clavicale")

ProtoInstance713.addFieldValue(fieldValue714)
fieldValue715 = x3d.fieldValue()
fieldValue715.setName("translation")
fieldValue715.setValue("0.0271000005304813 1.49430000782013 0.0394000001251698")

ProtoInstance713.addFieldValue(fieldValue715)

fieldValue712.addChildren(ProtoInstance713)
ProtoInstance716 = x3d.ProtoInstance()
ProtoInstance716.setName("Site")
ProtoInstance716.setDEF("hanim_l_acromion_2")
fieldValue717 = x3d.fieldValue()
fieldValue717.setName("name")
fieldValue717.setValue("l_acromion")

ProtoInstance716.addFieldValue(fieldValue717)
fieldValue718 = x3d.fieldValue()
fieldValue718.setName("translation")
fieldValue718.setValue("0.203199997544289 1.47599995136261 -0.0489999987185001")

ProtoInstance716.addFieldValue(fieldValue718)

fieldValue712.addChildren(ProtoInstance716)
ProtoInstance719 = x3d.ProtoInstance()
ProtoInstance719.setName("Site")
ProtoInstance719.setDEF("hanim_l_axilla_proximal_2")
fieldValue720 = x3d.fieldValue()
fieldValue720.setName("name")
fieldValue720.setValue("l_axilla_proximal")

ProtoInstance719.addFieldValue(fieldValue720)
fieldValue721 = x3d.fieldValue()
fieldValue721.setName("translation")
fieldValue721.setValue("0.177699998021126 1.40649998188019 -0.00749999983236194")

ProtoInstance719.addFieldValue(fieldValue721)

fieldValue712.addChildren(ProtoInstance719)
ProtoInstance722 = x3d.ProtoInstance()
ProtoInstance722.setName("Site")
ProtoInstance722.setDEF("hanim_l_axilla_distal_2")
fieldValue723 = x3d.fieldValue()
fieldValue723.setName("name")
fieldValue723.setValue("l_axilla_distal")

ProtoInstance722.addFieldValue(fieldValue723)
fieldValue724 = x3d.fieldValue()
fieldValue724.setName("translation")
fieldValue724.setValue("0.17059999704361 1.40719997882843 -0.0874999985098839")

ProtoInstance722.addFieldValue(fieldValue724)

fieldValue712.addChildren(ProtoInstance722)

ProtoInstance710.addFieldValue(fieldValue712)

fieldValue498.addChildren(ProtoInstance710)

ProtoInstance494.addFieldValue(fieldValue498)

fieldValue385.addChildren(ProtoInstance494)
ProtoInstance725 = x3d.ProtoInstance()
ProtoInstance725.setName("Joint")
ProtoInstance725.setDEF("hanim_r_sternoclavicular_2")
fieldValue726 = x3d.fieldValue()
fieldValue726.setName("stiffness")
fieldValue726.setValue("1 1 1")

ProtoInstance725.addFieldValue(fieldValue726)
fieldValue727 = x3d.fieldValue()
fieldValue727.setName("name")
fieldValue727.setValue("r_sternoclavicular")

ProtoInstance725.addFieldValue(fieldValue727)
fieldValue728 = x3d.fieldValue()
fieldValue728.setName("center")
fieldValue728.setValue("-0.0693999975919724 1.46000003814697 -0.0329999998211861")

ProtoInstance725.addFieldValue(fieldValue728)
fieldValue729 = x3d.fieldValue()
fieldValue729.setName("children")
ProtoInstance730 = x3d.ProtoInstance()
ProtoInstance730.setName("Joint")
ProtoInstance730.setDEF("hanim_r_acromioclavicular_2")
fieldValue731 = x3d.fieldValue()
fieldValue731.setName("stiffness")
fieldValue731.setValue("1 1 1")

ProtoInstance730.addFieldValue(fieldValue731)
fieldValue732 = x3d.fieldValue()
fieldValue732.setName("name")
fieldValue732.setValue("r_acromioclavicular")

ProtoInstance730.addFieldValue(fieldValue732)
fieldValue733 = x3d.fieldValue()
fieldValue733.setName("center")
fieldValue733.setValue("-0.0835999995470047 1.42809998989105 -0.0401000007987022")

ProtoInstance730.addFieldValue(fieldValue733)
fieldValue734 = x3d.fieldValue()
fieldValue734.setName("children")
ProtoInstance735 = x3d.ProtoInstance()
ProtoInstance735.setName("Joint")
ProtoInstance735.setDEF("hanim_r_shoulder_2")
fieldValue736 = x3d.fieldValue()
fieldValue736.setName("stiffness")
fieldValue736.setValue("1 1 1")

ProtoInstance735.addFieldValue(fieldValue736)
fieldValue737 = x3d.fieldValue()
fieldValue737.setName("name")
fieldValue737.setValue("r_shoulder")

ProtoInstance735.addFieldValue(fieldValue737)
fieldValue738 = x3d.fieldValue()
fieldValue738.setName("center")
fieldValue738.setValue("-0.190699994564056 1.4407000541687 -0.0324999988079071")

ProtoInstance735.addFieldValue(fieldValue738)
fieldValue739 = x3d.fieldValue()
fieldValue739.setName("children")
ProtoInstance740 = x3d.ProtoInstance()
ProtoInstance740.setName("Joint")
ProtoInstance740.setDEF("hanim_r_elbow_2")
fieldValue741 = x3d.fieldValue()
fieldValue741.setName("stiffness")
fieldValue741.setValue("1 1 1")

ProtoInstance740.addFieldValue(fieldValue741)
fieldValue742 = x3d.fieldValue()
fieldValue742.setName("name")
fieldValue742.setValue("r_elbow")

ProtoInstance740.addFieldValue(fieldValue742)
fieldValue743 = x3d.fieldValue()
fieldValue743.setName("center")
fieldValue743.setValue("-0.194900006055832 1.13880002498627 -0.061999998986721")

ProtoInstance740.addFieldValue(fieldValue743)
fieldValue744 = x3d.fieldValue()
fieldValue744.setName("children")
ProtoInstance745 = x3d.ProtoInstance()
ProtoInstance745.setName("Joint")
ProtoInstance745.setDEF("hanim_r_radiocarpal_2")
fieldValue746 = x3d.fieldValue()
fieldValue746.setName("stiffness")
fieldValue746.setValue("1 1 1")

ProtoInstance745.addFieldValue(fieldValue746)
fieldValue747 = x3d.fieldValue()
fieldValue747.setName("name")
fieldValue747.setValue("r_radiocarpal")

ProtoInstance745.addFieldValue(fieldValue747)
fieldValue748 = x3d.fieldValue()
fieldValue748.setName("center")
fieldValue748.setValue("-0.195899993181229 0.869400024414063 -0.0520999990403652")

ProtoInstance745.addFieldValue(fieldValue748)
fieldValue749 = x3d.fieldValue()
fieldValue749.setName("children")
ProtoInstance750 = x3d.ProtoInstance()
ProtoInstance750.setName("Joint")
ProtoInstance750.setDEF("hanim_r_carpometacarpal2")
fieldValue751 = x3d.fieldValue()
fieldValue751.setName("stiffness")
fieldValue751.setValue("1 1 1")

ProtoInstance750.addFieldValue(fieldValue751)
fieldValue752 = x3d.fieldValue()
fieldValue752.setName("name")
fieldValue752.setValue("r_carpometacarpal_1")

ProtoInstance750.addFieldValue(fieldValue752)
fieldValue753 = x3d.fieldValue()
fieldValue753.setName("center")
fieldValue753.setValue("-0.189899995923042 0.850199997425079 -0.0472999997437")

ProtoInstance750.addFieldValue(fieldValue753)
fieldValue754 = x3d.fieldValue()
fieldValue754.setName("children")
ProtoInstance755 = x3d.ProtoInstance()
ProtoInstance755.setName("Joint")
ProtoInstance755.setDEF("hanim_r_metacarpophalangeal2")
fieldValue756 = x3d.fieldValue()
fieldValue756.setName("stiffness")
fieldValue756.setValue("1 1 1")

ProtoInstance755.addFieldValue(fieldValue756)
fieldValue757 = x3d.fieldValue()
fieldValue757.setName("name")
fieldValue757.setValue("r_metacarpophalangeal_1")

ProtoInstance755.addFieldValue(fieldValue757)
fieldValue758 = x3d.fieldValue()
fieldValue758.setName("center")
fieldValue758.setValue("-0.187399998307228 0.825600028038025 0.0306000001728535")

ProtoInstance755.addFieldValue(fieldValue758)
fieldValue759 = x3d.fieldValue()
fieldValue759.setName("children")
ProtoInstance760 = x3d.ProtoInstance()
ProtoInstance760.setName("Joint")
ProtoInstance760.setDEF("hanim_r_carpal_interphalangeal2")
fieldValue761 = x3d.fieldValue()
fieldValue761.setName("stiffness")
fieldValue761.setValue("1 1 1")

ProtoInstance760.addFieldValue(fieldValue761)
fieldValue762 = x3d.fieldValue()
fieldValue762.setName("name")
fieldValue762.setValue("r_carpal_interphalangeal_1")

ProtoInstance760.addFieldValue(fieldValue762)
fieldValue763 = x3d.fieldValue()
fieldValue763.setName("center")
fieldValue763.setValue("-0.18639999628067 0.819000005722046 0.0505999997258186")

ProtoInstance760.addFieldValue(fieldValue763)
fieldValue764 = x3d.fieldValue()
fieldValue764.setName("children")
ProtoInstance765 = x3d.ProtoInstance()
ProtoInstance765.setName("Segment")
ProtoInstance765.setDEF("hanim_r_carpal_distal_phalanx2")
fieldValue766 = x3d.fieldValue()
fieldValue766.setName("name")
fieldValue766.setValue("r_carpal_distal_phalanx_1")

ProtoInstance765.addFieldValue(fieldValue766)
fieldValue767 = x3d.fieldValue()
fieldValue767.setName("children")
ProtoInstance768 = x3d.ProtoInstance()
ProtoInstance768.setName("Site")
ProtoInstance768.setDEF("hanim_r_carpal_distal_phalanx_1_tip_2")
fieldValue769 = x3d.fieldValue()
fieldValue769.setName("name")
fieldValue769.setValue("r_carpal_distal_phalanx_1_tip")

ProtoInstance768.addFieldValue(fieldValue769)
fieldValue770 = x3d.fieldValue()
fieldValue770.setName("translation")
fieldValue770.setValue("-0.18690000474453 0.809000015258789 0.0820000022649765")

ProtoInstance768.addFieldValue(fieldValue770)

fieldValue767.addChildren(ProtoInstance768)

ProtoInstance765.addFieldValue(fieldValue767)

fieldValue764.addChildren(ProtoInstance765)

ProtoInstance760.addFieldValue(fieldValue764)

fieldValue759.addChildren(ProtoInstance760)
ProtoInstance771 = x3d.ProtoInstance()
ProtoInstance771.setName("Segment")
ProtoInstance771.setDEF("hanim_r_index_proximal_2")
fieldValue772 = x3d.fieldValue()
fieldValue772.setName("name")
fieldValue772.setValue("r_index_proximal")

ProtoInstance771.addFieldValue(fieldValue772)

fieldValue759.addChildren(ProtoInstance771)

ProtoInstance755.addFieldValue(fieldValue759)

fieldValue754.addChildren(ProtoInstance755)
ProtoInstance773 = x3d.ProtoInstance()
ProtoInstance773.setName("Segment")
ProtoInstance773.setDEF("hanim_r_index_proximal_4")
fieldValue774 = x3d.fieldValue()
fieldValue774.setName("name")
fieldValue774.setValue("r_index_proximal")

ProtoInstance773.addFieldValue(fieldValue774)

fieldValue754.addChildren(ProtoInstance773)

ProtoInstance750.addFieldValue(fieldValue754)

fieldValue749.addChildren(ProtoInstance750)
ProtoInstance775 = x3d.ProtoInstance()
ProtoInstance775.setName("Joint")
ProtoInstance775.setDEF("hanim_r_carpometacarpal3")
fieldValue776 = x3d.fieldValue()
fieldValue776.setName("stiffness")
fieldValue776.setValue("1 1 1")

ProtoInstance775.addFieldValue(fieldValue776)
fieldValue777 = x3d.fieldValue()
fieldValue777.setName("name")
fieldValue777.setValue("r_carpometacarpal_2")

ProtoInstance775.addFieldValue(fieldValue777)
fieldValue778 = x3d.fieldValue()
fieldValue778.setName("center")
fieldValue778.setValue("-0.196099996566772 0.805499970912933 -0.0218000002205372")

ProtoInstance775.addFieldValue(fieldValue778)
fieldValue779 = x3d.fieldValue()
fieldValue779.setName("children")
ProtoInstance780 = x3d.ProtoInstance()
ProtoInstance780.setName("Joint")
ProtoInstance780.setDEF("hanim_r_metacarpophalangeal3")
fieldValue781 = x3d.fieldValue()
fieldValue781.setName("stiffness")
fieldValue781.setValue("1 1 1")

ProtoInstance780.addFieldValue(fieldValue781)
fieldValue782 = x3d.fieldValue()
fieldValue782.setName("name")
fieldValue782.setValue("r_metacarpophalangeal_2")

ProtoInstance780.addFieldValue(fieldValue782)
fieldValue783 = x3d.fieldValue()
fieldValue783.setName("center")
fieldValue783.setValue("-0.196099996566772 0.784600019454956 -0.0218000002205372")

ProtoInstance780.addFieldValue(fieldValue783)
fieldValue784 = x3d.fieldValue()
fieldValue784.setName("children")
ProtoInstance785 = x3d.ProtoInstance()
ProtoInstance785.setName("Joint")
ProtoInstance785.setDEF("hanim_r_carpal_proximal_interphalangeal3")
fieldValue786 = x3d.fieldValue()
fieldValue786.setName("stiffness")
fieldValue786.setValue("1 1 1")

ProtoInstance785.addFieldValue(fieldValue786)
fieldValue787 = x3d.fieldValue()
fieldValue787.setName("name")
fieldValue787.setValue("r_carpal_proximal_interphalangeal_2")

ProtoInstance785.addFieldValue(fieldValue787)
fieldValue788 = x3d.fieldValue()
fieldValue788.setName("center")
fieldValue788.setValue("-0.19539999961853 0.739300012588501 -0.0185000002384186")

ProtoInstance785.addFieldValue(fieldValue788)
fieldValue789 = x3d.fieldValue()
fieldValue789.setName("children")
ProtoInstance790 = x3d.ProtoInstance()
ProtoInstance790.setName("Joint")
ProtoInstance790.setDEF("hanim_r_carpal_distal_interphalangeal3")
fieldValue791 = x3d.fieldValue()
fieldValue791.setName("stiffness")
fieldValue791.setValue("1 1 1")

ProtoInstance790.addFieldValue(fieldValue791)
fieldValue792 = x3d.fieldValue()
fieldValue792.setName("name")
fieldValue792.setValue("r_carpal_distal_interphalangeal_2")

ProtoInstance790.addFieldValue(fieldValue792)
fieldValue793 = x3d.fieldValue()
fieldValue793.setName("center")
fieldValue793.setValue("-0.194499999284744 0.716899991035461 -0.0173000004142523")

ProtoInstance790.addFieldValue(fieldValue793)
fieldValue794 = x3d.fieldValue()
fieldValue794.setName("children")
ProtoInstance795 = x3d.ProtoInstance()
ProtoInstance795.setName("Segment")
ProtoInstance795.setDEF("hanim_r_carpal_distal_phalanx3")
fieldValue796 = x3d.fieldValue()
fieldValue796.setName("name")
fieldValue796.setValue("r_carpal_distal_phalanx_2")

ProtoInstance795.addFieldValue(fieldValue796)
fieldValue797 = x3d.fieldValue()
fieldValue797.setName("children")
ProtoInstance798 = x3d.ProtoInstance()
ProtoInstance798.setName("Site")
ProtoInstance798.setDEF("hanim_r_carpal_distal_phalanx_2_tip_2")
fieldValue799 = x3d.fieldValue()
fieldValue799.setName("name")
fieldValue799.setValue("r_carpal_distal_phalanx_2_tip")

ProtoInstance798.addFieldValue(fieldValue799)
fieldValue800 = x3d.fieldValue()
fieldValue800.setName("translation")
fieldValue800.setValue("-0.197999998927116 0.688300013542175 -0.0179999992251396")

ProtoInstance798.addFieldValue(fieldValue800)

fieldValue797.addChildren(ProtoInstance798)
ProtoInstance801 = x3d.ProtoInstance()
ProtoInstance801.setName("Site")
ProtoInstance801.setDEF("hanim_r_dactylion_2")
fieldValue802 = x3d.fieldValue()
fieldValue802.setName("name")
fieldValue802.setValue("r_dactylion")

ProtoInstance801.addFieldValue(fieldValue802)
fieldValue803 = x3d.fieldValue()
fieldValue803.setName("translation")
fieldValue803.setValue("-0.194100007414818 0.677200019359589 -0.0423000007867813")

ProtoInstance801.addFieldValue(fieldValue803)

fieldValue797.addChildren(ProtoInstance801)

ProtoInstance795.addFieldValue(fieldValue797)

fieldValue794.addChildren(ProtoInstance795)

ProtoInstance790.addFieldValue(fieldValue794)

fieldValue789.addChildren(ProtoInstance790)
ProtoInstance804 = x3d.ProtoInstance()
ProtoInstance804.setName("Segment")
ProtoInstance804.setDEF("hanim_r_index_middle_2")
fieldValue805 = x3d.fieldValue()
fieldValue805.setName("name")
fieldValue805.setValue("r_index_middle")

ProtoInstance804.addFieldValue(fieldValue805)

fieldValue789.addChildren(ProtoInstance804)

ProtoInstance785.addFieldValue(fieldValue789)

fieldValue784.addChildren(ProtoInstance785)
ProtoInstance806 = x3d.ProtoInstance()
ProtoInstance806.setName("Segment")
ProtoInstance806.setDEF("hanim_r_index_proximal_6")
fieldValue807 = x3d.fieldValue()
fieldValue807.setName("name")
fieldValue807.setValue("r_index_proximal")

ProtoInstance806.addFieldValue(fieldValue807)

fieldValue784.addChildren(ProtoInstance806)

ProtoInstance780.addFieldValue(fieldValue784)

fieldValue779.addChildren(ProtoInstance780)
ProtoInstance808 = x3d.ProtoInstance()
ProtoInstance808.setName("Segment")
ProtoInstance808.setDEF("hanim_r_index_metacarpal_2")
fieldValue809 = x3d.fieldValue()
fieldValue809.setName("name")
fieldValue809.setValue("r_index_metacarpal")

ProtoInstance808.addFieldValue(fieldValue809)

fieldValue779.addChildren(ProtoInstance808)

ProtoInstance775.addFieldValue(fieldValue779)

fieldValue749.addChildren(ProtoInstance775)
ProtoInstance810 = x3d.ProtoInstance()
ProtoInstance810.setName("Joint")
ProtoInstance810.setDEF("hanim_r_carpometacarpal4")
fieldValue811 = x3d.fieldValue()
fieldValue811.setName("stiffness")
fieldValue811.setValue("1 1 1")

ProtoInstance810.addFieldValue(fieldValue811)
fieldValue812 = x3d.fieldValue()
fieldValue812.setName("name")
fieldValue812.setValue("r_carpometacarpal_3")

ProtoInstance810.addFieldValue(fieldValue812)
fieldValue813 = x3d.fieldValue()
fieldValue813.setName("center")
fieldValue813.setValue("-0.197200000286102 0.805999994277954 -0.0467999987304211")

ProtoInstance810.addFieldValue(fieldValue813)
fieldValue814 = x3d.fieldValue()
fieldValue814.setName("children")
ProtoInstance815 = x3d.ProtoInstance()
ProtoInstance815.setName("Joint")
ProtoInstance815.setDEF("hanim_r_metacarpophalangeal4")
fieldValue816 = x3d.fieldValue()
fieldValue816.setName("stiffness")
fieldValue816.setValue("1 1 1")

ProtoInstance815.addFieldValue(fieldValue816)
fieldValue817 = x3d.fieldValue()
fieldValue817.setName("name")
fieldValue817.setValue("r_metacarpophalangeal_3")

ProtoInstance815.addFieldValue(fieldValue817)
fieldValue818 = x3d.fieldValue()
fieldValue818.setName("center")
fieldValue818.setValue("-0.197200000286102 0.784900009632111 -0.0467999987304211")

ProtoInstance815.addFieldValue(fieldValue818)
fieldValue819 = x3d.fieldValue()
fieldValue819.setName("children")
ProtoInstance820 = x3d.ProtoInstance()
ProtoInstance820.setName("Joint")
ProtoInstance820.setDEF("hanim_r_carpal_proximal_interphalangeal4")
fieldValue821 = x3d.fieldValue()
fieldValue821.setName("stiffness")
fieldValue821.setValue("1 1 1")

ProtoInstance820.addFieldValue(fieldValue821)
fieldValue822 = x3d.fieldValue()
fieldValue822.setName("name")
fieldValue822.setValue("r_carpal_proximal_interphalangeal_3")

ProtoInstance820.addFieldValue(fieldValue822)
fieldValue823 = x3d.fieldValue()
fieldValue823.setName("center")
fieldValue823.setValue("-0.194999992847443 0.730400025844574 -0.0441000014543533")

ProtoInstance820.addFieldValue(fieldValue823)
fieldValue824 = x3d.fieldValue()
fieldValue824.setName("children")
ProtoInstance825 = x3d.ProtoInstance()
ProtoInstance825.setName("Joint")
ProtoInstance825.setDEF("hanim_r_carpal_distal_interphalangeal4")
fieldValue826 = x3d.fieldValue()
fieldValue826.setName("stiffness")
fieldValue826.setValue("1 1 1")

ProtoInstance825.addFieldValue(fieldValue826)
fieldValue827 = x3d.fieldValue()
fieldValue827.setName("name")
fieldValue827.setValue("r_carpal_distal_interphalangeal_3")

ProtoInstance825.addFieldValue(fieldValue827)
fieldValue828 = x3d.fieldValue()
fieldValue828.setName("center")
fieldValue828.setValue("-0.193900004029274 0.704200029373169 -0.0432000011205673")

ProtoInstance825.addFieldValue(fieldValue828)
fieldValue829 = x3d.fieldValue()
fieldValue829.setName("children")
ProtoInstance830 = x3d.ProtoInstance()
ProtoInstance830.setName("Segment")
ProtoInstance830.setDEF("hanim_r_carpal_distal_phalanx4")
fieldValue831 = x3d.fieldValue()
fieldValue831.setName("name")
fieldValue831.setValue("r_carpal_distal_phalanx_3")

ProtoInstance830.addFieldValue(fieldValue831)
fieldValue832 = x3d.fieldValue()
fieldValue832.setName("children")
ProtoInstance833 = x3d.ProtoInstance()
ProtoInstance833.setName("Site")
ProtoInstance833.setDEF("hanim_r_carpal_distal_phalanx_3_tip_2")
fieldValue834 = x3d.fieldValue()
fieldValue834.setName("name")
fieldValue834.setValue("r_carpal_distal_phalanx_3_tip")

ProtoInstance833.addFieldValue(fieldValue834)
fieldValue835 = x3d.fieldValue()
fieldValue835.setName("translation")
fieldValue835.setValue("-0.196899995207787 0.675800025463104 -0.0427000001072884")

ProtoInstance833.addFieldValue(fieldValue835)

fieldValue832.addChildren(ProtoInstance833)

ProtoInstance830.addFieldValue(fieldValue832)

fieldValue829.addChildren(ProtoInstance830)

ProtoInstance825.addFieldValue(fieldValue829)

fieldValue824.addChildren(ProtoInstance825)
ProtoInstance836 = x3d.ProtoInstance()
ProtoInstance836.setName("Segment")
ProtoInstance836.setDEF("hanim_r_middle_middle_2")
fieldValue837 = x3d.fieldValue()
fieldValue837.setName("name")
fieldValue837.setValue("r_middle_middle")

ProtoInstance836.addFieldValue(fieldValue837)

fieldValue824.addChildren(ProtoInstance836)

ProtoInstance820.addFieldValue(fieldValue824)

fieldValue819.addChildren(ProtoInstance820)
ProtoInstance838 = x3d.ProtoInstance()
ProtoInstance838.setName("Segment")
ProtoInstance838.setDEF("hanim_r_middle_proximal_2")
fieldValue839 = x3d.fieldValue()
fieldValue839.setName("name")
fieldValue839.setValue("r_middle_proximal")

ProtoInstance838.addFieldValue(fieldValue839)

fieldValue819.addChildren(ProtoInstance838)

ProtoInstance815.addFieldValue(fieldValue819)

fieldValue814.addChildren(ProtoInstance815)
ProtoInstance840 = x3d.ProtoInstance()
ProtoInstance840.setName("Segment")
ProtoInstance840.setDEF("hanim_r_middle_metacarpal_2")
fieldValue841 = x3d.fieldValue()
fieldValue841.setName("name")
fieldValue841.setValue("r_middle_metacarpal")

ProtoInstance840.addFieldValue(fieldValue841)

fieldValue814.addChildren(ProtoInstance840)

ProtoInstance810.addFieldValue(fieldValue814)

fieldValue749.addChildren(ProtoInstance810)
ProtoInstance842 = x3d.ProtoInstance()
ProtoInstance842.setName("Joint")
ProtoInstance842.setDEF("hanim_r_carpometacarpal5")
fieldValue843 = x3d.fieldValue()
fieldValue843.setName("stiffness")
fieldValue843.setValue("1 1 1")

ProtoInstance842.addFieldValue(fieldValue843)
fieldValue844 = x3d.fieldValue()
fieldValue844.setName("name")
fieldValue844.setValue("r_carpometacarpal_4")

ProtoInstance842.addFieldValue(fieldValue844)
fieldValue845 = x3d.fieldValue()
fieldValue845.setName("center")
fieldValue845.setValue("-0.195099994540215 0.804899990558624 -0.0732000023126602")

ProtoInstance842.addFieldValue(fieldValue845)
fieldValue846 = x3d.fieldValue()
fieldValue846.setName("children")
ProtoInstance847 = x3d.ProtoInstance()
ProtoInstance847.setName("Joint")
ProtoInstance847.setDEF("hanim_r_metacarpophalangeal5")
fieldValue848 = x3d.fieldValue()
fieldValue848.setName("stiffness")
fieldValue848.setValue("1 1 1")

ProtoInstance847.addFieldValue(fieldValue848)
fieldValue849 = x3d.fieldValue()
fieldValue849.setName("name")
fieldValue849.setValue("r_metacarpophalangeal_4")

ProtoInstance847.addFieldValue(fieldValue849)
fieldValue850 = x3d.fieldValue()
fieldValue850.setName("center")
fieldValue850.setValue("-0.195099994540215 0.784500002861023 -0.0732000023126602")

ProtoInstance847.addFieldValue(fieldValue850)
fieldValue851 = x3d.fieldValue()
fieldValue851.setName("children")
ProtoInstance852 = x3d.ProtoInstance()
ProtoInstance852.setName("Joint")
ProtoInstance852.setDEF("hanim_r_carpal_proximal_interphalangeal5")
fieldValue853 = x3d.fieldValue()
fieldValue853.setName("stiffness")
fieldValue853.setValue("1 1 1")

ProtoInstance852.addFieldValue(fieldValue853)
fieldValue854 = x3d.fieldValue()
fieldValue854.setName("name")
fieldValue854.setValue("r_carpal_proximal_interphalangeal_4")

ProtoInstance852.addFieldValue(fieldValue854)
fieldValue855 = x3d.fieldValue()
fieldValue855.setName("center")
fieldValue855.setValue("-0.19200000166893 0.731800019741058 -0.0715999975800514")

ProtoInstance852.addFieldValue(fieldValue855)
fieldValue856 = x3d.fieldValue()
fieldValue856.setName("children")
ProtoInstance857 = x3d.ProtoInstance()
ProtoInstance857.setName("Joint")
ProtoInstance857.setDEF("hanim_r_carpal_distal_interphalangeal5")
fieldValue858 = x3d.fieldValue()
fieldValue858.setName("stiffness")
fieldValue858.setValue("1 1 1")

ProtoInstance857.addFieldValue(fieldValue858)
fieldValue859 = x3d.fieldValue()
fieldValue859.setName("name")
fieldValue859.setValue("r_carpal_distal_interphalangeal_4")

ProtoInstance857.addFieldValue(fieldValue859)
fieldValue860 = x3d.fieldValue()
fieldValue860.setName("center")
fieldValue860.setValue("-0.190799996256828 0.70770001411438 -0.0706000030040741")

ProtoInstance857.addFieldValue(fieldValue860)
fieldValue861 = x3d.fieldValue()
fieldValue861.setName("children")
ProtoInstance862 = x3d.ProtoInstance()
ProtoInstance862.setName("Segment")
ProtoInstance862.setDEF("hanim_r_carpal_distal_phalanx5")
fieldValue863 = x3d.fieldValue()
fieldValue863.setName("name")
fieldValue863.setValue("r_carpal_distal_phalanx_4")

ProtoInstance862.addFieldValue(fieldValue863)
fieldValue864 = x3d.fieldValue()
fieldValue864.setName("children")
ProtoInstance865 = x3d.ProtoInstance()
ProtoInstance865.setName("Site")
ProtoInstance865.setDEF("hanim_r_carpal_distal_phalanx_4_tip_2")
fieldValue866 = x3d.fieldValue()
fieldValue866.setName("name")
fieldValue866.setValue("r_carpal_distal_phalanx_4_tip")

ProtoInstance865.addFieldValue(fieldValue866)
fieldValue867 = x3d.fieldValue()
fieldValue867.setName("translation")
fieldValue867.setValue("-0.193399995565414 0.677799999713898 -0.069300003349781")

ProtoInstance865.addFieldValue(fieldValue867)

fieldValue864.addChildren(ProtoInstance865)

ProtoInstance862.addFieldValue(fieldValue864)

fieldValue861.addChildren(ProtoInstance862)

ProtoInstance857.addFieldValue(fieldValue861)

fieldValue856.addChildren(ProtoInstance857)
ProtoInstance868 = x3d.ProtoInstance()
ProtoInstance868.setName("Segment")
ProtoInstance868.setDEF("hanim_r_ring_middle_2")
fieldValue869 = x3d.fieldValue()
fieldValue869.setName("name")
fieldValue869.setValue("r_ring_middle")

ProtoInstance868.addFieldValue(fieldValue869)

fieldValue856.addChildren(ProtoInstance868)

ProtoInstance852.addFieldValue(fieldValue856)

fieldValue851.addChildren(ProtoInstance852)
ProtoInstance870 = x3d.ProtoInstance()
ProtoInstance870.setName("Segment")
ProtoInstance870.setDEF("hanim_r_ring_proximal_2")
fieldValue871 = x3d.fieldValue()
fieldValue871.setName("name")
fieldValue871.setValue("r_ring_proximal")

ProtoInstance870.addFieldValue(fieldValue871)

fieldValue851.addChildren(ProtoInstance870)

ProtoInstance847.addFieldValue(fieldValue851)

fieldValue846.addChildren(ProtoInstance847)
ProtoInstance872 = x3d.ProtoInstance()
ProtoInstance872.setName("Segment")
ProtoInstance872.setDEF("hanim_r_ring_metacarpal_2")
fieldValue873 = x3d.fieldValue()
fieldValue873.setName("name")
fieldValue873.setValue("r_ring_metacarpal")

ProtoInstance872.addFieldValue(fieldValue873)

fieldValue846.addChildren(ProtoInstance872)

ProtoInstance842.addFieldValue(fieldValue846)

fieldValue749.addChildren(ProtoInstance842)
ProtoInstance874 = x3d.ProtoInstance()
ProtoInstance874.setName("Joint")
ProtoInstance874.setDEF("hanim_r_carpometacarpal6")
fieldValue875 = x3d.fieldValue()
fieldValue875.setName("stiffness")
fieldValue875.setValue("1 1 1")

ProtoInstance874.addFieldValue(fieldValue875)
fieldValue876 = x3d.fieldValue()
fieldValue876.setName("name")
fieldValue876.setValue("r_carpometacarpal_5")

ProtoInstance874.addFieldValue(fieldValue876)
fieldValue877 = x3d.fieldValue()
fieldValue877.setName("center")
fieldValue877.setValue("-0.1925999969244 0.809599995613098 -0.0974999964237213")

ProtoInstance874.addFieldValue(fieldValue877)
fieldValue878 = x3d.fieldValue()
fieldValue878.setName("children")
ProtoInstance879 = x3d.ProtoInstance()
ProtoInstance879.setName("Joint")
ProtoInstance879.setDEF("hanim_r_metacarpophalangeal6")
fieldValue880 = x3d.fieldValue()
fieldValue880.setName("stiffness")
fieldValue880.setValue("1 1 1")

ProtoInstance879.addFieldValue(fieldValue880)
fieldValue881 = x3d.fieldValue()
fieldValue881.setName("name")
fieldValue881.setValue("r_metacarpophalangeal_5")

ProtoInstance879.addFieldValue(fieldValue881)
fieldValue882 = x3d.fieldValue()
fieldValue882.setName("center")
fieldValue882.setValue("-0.1925999969244 0.789600014686584 -0.0974999964237213")

ProtoInstance879.addFieldValue(fieldValue882)
fieldValue883 = x3d.fieldValue()
fieldValue883.setName("children")
ProtoInstance884 = x3d.ProtoInstance()
ProtoInstance884.setName("Joint")
ProtoInstance884.setDEF("hanim_r_carpal_proximal_interphalangeal6")
fieldValue885 = x3d.fieldValue()
fieldValue885.setName("stiffness")
fieldValue885.setValue("1 1 1")

ProtoInstance884.addFieldValue(fieldValue885)
fieldValue886 = x3d.fieldValue()
fieldValue886.setName("name")
fieldValue886.setValue("r_carpal_proximal_interphalangeal_5")

ProtoInstance884.addFieldValue(fieldValue886)
fieldValue887 = x3d.fieldValue()
fieldValue887.setName("center")
fieldValue887.setValue("-0.190200001001358 0.748300015926361 -0.0962999984622002")

ProtoInstance884.addFieldValue(fieldValue887)
fieldValue888 = x3d.fieldValue()
fieldValue888.setName("children")
ProtoInstance889 = x3d.ProtoInstance()
ProtoInstance889.setName("Joint")
ProtoInstance889.setDEF("hanim_r_carpal_distal_interphalangeal6")
fieldValue890 = x3d.fieldValue()
fieldValue890.setName("stiffness")
fieldValue890.setValue("1 1 1")

ProtoInstance889.addFieldValue(fieldValue890)
fieldValue891 = x3d.fieldValue()
fieldValue891.setName("name")
fieldValue891.setValue("r_carpal_distal_interphalangeal_5")

ProtoInstance889.addFieldValue(fieldValue891)
fieldValue892 = x3d.fieldValue()
fieldValue892.setName("center")
fieldValue892.setValue("-0.190799996256828 0.754000008106232 -0.096000000834465")

ProtoInstance889.addFieldValue(fieldValue892)
fieldValue893 = x3d.fieldValue()
fieldValue893.setName("children")
ProtoInstance894 = x3d.ProtoInstance()
ProtoInstance894.setName("Segment")
ProtoInstance894.setDEF("hanim_r_carpal_distal_phalanx6")
fieldValue895 = x3d.fieldValue()
fieldValue895.setName("name")
fieldValue895.setValue("r_carpal_distal_phalanx_5")

ProtoInstance894.addFieldValue(fieldValue895)
fieldValue896 = x3d.fieldValue()
fieldValue896.setName("children")
ProtoInstance897 = x3d.ProtoInstance()
ProtoInstance897.setName("Site")
ProtoInstance897.setDEF("hanim_r_carpal_distal_phalanx_5_tip_2")
fieldValue898 = x3d.fieldValue()
fieldValue898.setName("name")
fieldValue898.setValue("r_carpal_distal_phalanx_5_tip")

ProtoInstance897.addFieldValue(fieldValue898)
fieldValue899 = x3d.fieldValue()
fieldValue899.setName("translation")
fieldValue899.setValue("-0.193800002336502 0.703499972820282 -0.0948999971151352")

ProtoInstance897.addFieldValue(fieldValue899)

fieldValue896.addChildren(ProtoInstance897)

ProtoInstance894.addFieldValue(fieldValue896)

fieldValue893.addChildren(ProtoInstance894)

ProtoInstance889.addFieldValue(fieldValue893)

fieldValue888.addChildren(ProtoInstance889)
ProtoInstance900 = x3d.ProtoInstance()
ProtoInstance900.setName("Segment")
ProtoInstance900.setDEF("hanim_r_pinky_middle_2")
fieldValue901 = x3d.fieldValue()
fieldValue901.setName("name")
fieldValue901.setValue("r_pinky_middle")

ProtoInstance900.addFieldValue(fieldValue901)

fieldValue888.addChildren(ProtoInstance900)

ProtoInstance884.addFieldValue(fieldValue888)

fieldValue883.addChildren(ProtoInstance884)
ProtoInstance902 = x3d.ProtoInstance()
ProtoInstance902.setName("Segment")
ProtoInstance902.setDEF("hanim_r_pinky_proximal_2")
fieldValue903 = x3d.fieldValue()
fieldValue903.setName("name")
fieldValue903.setValue("r_pinky_proximal")

ProtoInstance902.addFieldValue(fieldValue903)

fieldValue883.addChildren(ProtoInstance902)

ProtoInstance879.addFieldValue(fieldValue883)

fieldValue878.addChildren(ProtoInstance879)
ProtoInstance904 = x3d.ProtoInstance()
ProtoInstance904.setName("Segment")
ProtoInstance904.setDEF("hanim_r_pinky_metacarpal_2")
fieldValue905 = x3d.fieldValue()
fieldValue905.setName("name")
fieldValue905.setValue("r_pinky_metacarpal")

ProtoInstance904.addFieldValue(fieldValue905)

fieldValue878.addChildren(ProtoInstance904)

ProtoInstance874.addFieldValue(fieldValue878)

fieldValue749.addChildren(ProtoInstance874)
ProtoInstance906 = x3d.ProtoInstance()
ProtoInstance906.setName("Segment")
ProtoInstance906.setDEF("hanim_r_hand_2")
fieldValue907 = x3d.fieldValue()
fieldValue907.setName("name")
fieldValue907.setValue("r_hand")

ProtoInstance906.addFieldValue(fieldValue907)
fieldValue908 = x3d.fieldValue()
fieldValue908.setName("children")
ProtoInstance909 = x3d.ProtoInstance()
ProtoInstance909.setName("Site")
ProtoInstance909.setDEF("hanim_r_metacarpal_phalanx3")
fieldValue910 = x3d.fieldValue()
fieldValue910.setName("name")
fieldValue910.setValue("r_metacarpal_phalanx_2")

ProtoInstance909.addFieldValue(fieldValue910)
fieldValue911 = x3d.fieldValue()
fieldValue911.setName("translation")
fieldValue911.setValue("-0.197699993848801 0.816900014877319 -0.0176999997347593")

ProtoInstance909.addFieldValue(fieldValue911)

fieldValue908.addChildren(ProtoInstance909)
ProtoInstance912 = x3d.ProtoInstance()
ProtoInstance912.setName("Site")
ProtoInstance912.setDEF("hanim_r_ulnar_styloid_2")
fieldValue913 = x3d.fieldValue()
fieldValue913.setName("name")
fieldValue913.setValue("r_ulnar_styloid")

ProtoInstance912.addFieldValue(fieldValue913)
fieldValue914 = x3d.fieldValue()
fieldValue914.setName("translation")
fieldValue914.setValue("-0.21170000731945 0.856199979782104 -0.0584000013768673")

ProtoInstance912.addFieldValue(fieldValue914)

fieldValue908.addChildren(ProtoInstance912)
ProtoInstance915 = x3d.ProtoInstance()
ProtoInstance915.setName("Site")
ProtoInstance915.setDEF("hanim_r_metacarpal_phalanx6")
fieldValue916 = x3d.fieldValue()
fieldValue916.setName("name")
fieldValue916.setValue("r_metacarpal_phalanx_5")

ProtoInstance915.addFieldValue(fieldValue916)
fieldValue917 = x3d.fieldValue()
fieldValue917.setName("translation")
fieldValue917.setValue("-0.192900002002716 0.788999974727631 -0.10639999806881")

ProtoInstance915.addFieldValue(fieldValue917)

fieldValue908.addChildren(ProtoInstance915)

ProtoInstance906.addFieldValue(fieldValue908)

fieldValue749.addChildren(ProtoInstance906)

ProtoInstance745.addFieldValue(fieldValue749)

fieldValue744.addChildren(ProtoInstance745)
ProtoInstance918 = x3d.ProtoInstance()
ProtoInstance918.setName("Segment")
ProtoInstance918.setDEF("hanim_r_forearm_2")
fieldValue919 = x3d.fieldValue()
fieldValue919.setName("name")
fieldValue919.setValue("r_forearm")

ProtoInstance918.addFieldValue(fieldValue919)
fieldValue920 = x3d.fieldValue()
fieldValue920.setName("children")
ProtoInstance921 = x3d.ProtoInstance()
ProtoInstance921.setName("Site")
ProtoInstance921.setDEF("hanim_r_radial_styloid_2")
fieldValue922 = x3d.fieldValue()
fieldValue922.setName("name")
fieldValue922.setValue("r_radial_styloid")

ProtoInstance921.addFieldValue(fieldValue922)
fieldValue923 = x3d.fieldValue()
fieldValue923.setName("translation")
fieldValue923.setValue("-0.188400000333786 0.86760002374649 -0.0359999984502792")

ProtoInstance921.addFieldValue(fieldValue923)

fieldValue920.addChildren(ProtoInstance921)
ProtoInstance924 = x3d.ProtoInstance()
ProtoInstance924.setName("Site")
ProtoInstance924.setDEF("hanim_r_olecranon_2")
fieldValue925 = x3d.fieldValue()
fieldValue925.setName("name")
fieldValue925.setValue("r_olecranon")

ProtoInstance924.addFieldValue(fieldValue925)
fieldValue926 = x3d.fieldValue()
fieldValue926.setName("translation")
fieldValue926.setValue("-0.190699994564056 1.14049994945526 -0.106499999761581")

ProtoInstance924.addFieldValue(fieldValue926)

fieldValue920.addChildren(ProtoInstance924)
ProtoInstance927 = x3d.ProtoInstance()
ProtoInstance927.setName("Site")
ProtoInstance927.setDEF("hanim_r_humeral_medial_epicondyles_2")
fieldValue928 = x3d.fieldValue()
fieldValue928.setName("name")
fieldValue928.setValue("r_humeral_medial_epicondyles")

ProtoInstance927.addFieldValue(fieldValue928)
fieldValue929 = x3d.fieldValue()
fieldValue929.setName("translation")
fieldValue929.setValue("-0.167999997735024 1.12979996204376 -0.106200002133846")

ProtoInstance927.addFieldValue(fieldValue929)

fieldValue920.addChildren(ProtoInstance927)
ProtoInstance930 = x3d.ProtoInstance()
ProtoInstance930.setName("Site")
ProtoInstance930.setDEF("hanim_r_radiale_2")
fieldValue931 = x3d.fieldValue()
fieldValue931.setName("name")
fieldValue931.setValue("r_radiale")

ProtoInstance930.addFieldValue(fieldValue931)
fieldValue932 = x3d.fieldValue()
fieldValue932.setName("translation")
fieldValue932.setValue("-0.212999999523163 1.130499958992 -0.109099999070168")

ProtoInstance930.addFieldValue(fieldValue932)

fieldValue920.addChildren(ProtoInstance930)

ProtoInstance918.addFieldValue(fieldValue920)

fieldValue744.addChildren(ProtoInstance918)

ProtoInstance740.addFieldValue(fieldValue744)

fieldValue739.addChildren(ProtoInstance740)
ProtoInstance933 = x3d.ProtoInstance()
ProtoInstance933.setName("Segment")
ProtoInstance933.setDEF("hanim_r_upperarm_2")
fieldValue934 = x3d.fieldValue()
fieldValue934.setName("name")
fieldValue934.setValue("r_upperarm")

ProtoInstance933.addFieldValue(fieldValue934)
fieldValue935 = x3d.fieldValue()
fieldValue935.setName("children")
ProtoInstance936 = x3d.ProtoInstance()
ProtoInstance936.setName("Site")
ProtoInstance936.setDEF("hanim_r_humeral_lateral_epicondyles_2")
fieldValue937 = x3d.fieldValue()
fieldValue937.setName("name")
fieldValue937.setValue("r_humeral_lateral_epicondyles")

ProtoInstance936.addFieldValue(fieldValue937)
fieldValue938 = x3d.fieldValue()
fieldValue938.setName("translation")
fieldValue938.setValue("-0.222399994730949 1.15170001983643 -0.103299997746944")

ProtoInstance936.addFieldValue(fieldValue938)

fieldValue935.addChildren(ProtoInstance936)

ProtoInstance933.addFieldValue(fieldValue935)

fieldValue739.addChildren(ProtoInstance933)

ProtoInstance735.addFieldValue(fieldValue739)

fieldValue734.addChildren(ProtoInstance735)
ProtoInstance939 = x3d.ProtoInstance()
ProtoInstance939.setName("Segment")
ProtoInstance939.setDEF("hanim_r_scapula_2")
fieldValue940 = x3d.fieldValue()
fieldValue940.setName("name")
fieldValue940.setValue("r_scapula")

ProtoInstance939.addFieldValue(fieldValue940)

fieldValue734.addChildren(ProtoInstance939)

ProtoInstance730.addFieldValue(fieldValue734)

fieldValue729.addChildren(ProtoInstance730)
ProtoInstance941 = x3d.ProtoInstance()
ProtoInstance941.setName("Segment")
ProtoInstance941.setDEF("hanim_r_clavicle_2")
fieldValue942 = x3d.fieldValue()
fieldValue942.setName("name")
fieldValue942.setValue("r_clavicle")

ProtoInstance941.addFieldValue(fieldValue942)
fieldValue943 = x3d.fieldValue()
fieldValue943.setName("children")
ProtoInstance944 = x3d.ProtoInstance()
ProtoInstance944.setName("Site")
ProtoInstance944.setDEF("hanim_r_clavicale_2")
fieldValue945 = x3d.fieldValue()
fieldValue945.setName("name")
fieldValue945.setValue("r_clavicale")

ProtoInstance944.addFieldValue(fieldValue945)
fieldValue946 = x3d.fieldValue()
fieldValue946.setName("translation")
fieldValue946.setValue("-0.0115000000223517 1.49430000782013 0.0399999991059303")

ProtoInstance944.addFieldValue(fieldValue946)

fieldValue943.addChildren(ProtoInstance944)
ProtoInstance947 = x3d.ProtoInstance()
ProtoInstance947.setName("Site")
ProtoInstance947.setDEF("hanim_r_acromion_2")
fieldValue948 = x3d.fieldValue()
fieldValue948.setName("name")
fieldValue948.setValue("r_acromion")

ProtoInstance947.addFieldValue(fieldValue948)
fieldValue949 = x3d.fieldValue()
fieldValue949.setName("translation")
fieldValue949.setValue("-0.190500006079674 1.47909998893738 -0.0430999994277954")

ProtoInstance947.addFieldValue(fieldValue949)

fieldValue943.addChildren(ProtoInstance947)
ProtoInstance950 = x3d.ProtoInstance()
ProtoInstance950.setName("Site")
ProtoInstance950.setDEF("hanim_r_axilla_proximal_2")
fieldValue951 = x3d.fieldValue()
fieldValue951.setName("name")
fieldValue951.setValue("r_axilla_proximal")

ProtoInstance950.addFieldValue(fieldValue951)
fieldValue952 = x3d.fieldValue()
fieldValue952.setName("translation")
fieldValue952.setValue("-0.162599995732307 1.40719997882843 -0.00310000008903444")

ProtoInstance950.addFieldValue(fieldValue952)

fieldValue943.addChildren(ProtoInstance950)
ProtoInstance953 = x3d.ProtoInstance()
ProtoInstance953.setName("Site")
ProtoInstance953.setDEF("hanim_r_axilla_distal_2")
fieldValue954 = x3d.fieldValue()
fieldValue954.setName("name")
fieldValue954.setValue("r_axilla_distal")

ProtoInstance953.addFieldValue(fieldValue954)
fieldValue955 = x3d.fieldValue()
fieldValue955.setName("translation")
fieldValue955.setValue("-0.160300001502037 1.40980005264282 -0.0825999975204468")

ProtoInstance953.addFieldValue(fieldValue955)

fieldValue943.addChildren(ProtoInstance953)

ProtoInstance941.addFieldValue(fieldValue943)

fieldValue729.addChildren(ProtoInstance941)

ProtoInstance725.addFieldValue(fieldValue729)

fieldValue385.addChildren(ProtoInstance725)
ProtoInstance956 = x3d.ProtoInstance()
ProtoInstance956.setName("Segment")
ProtoInstance956.setDEF("hanim_t1_2")
fieldValue957 = x3d.fieldValue()
fieldValue957.setName("name")
fieldValue957.setValue("t1")

ProtoInstance956.addFieldValue(fieldValue957)
fieldValue958 = x3d.fieldValue()
fieldValue958.setName("children")
ProtoInstance959 = x3d.ProtoInstance()
ProtoInstance959.setName("Site")
ProtoInstance959.setDEF("hanim_suprasternale_2")
fieldValue960 = x3d.fieldValue()
fieldValue960.setName("name")
fieldValue960.setValue("suprasternale")

ProtoInstance959.addFieldValue(fieldValue960)
fieldValue961 = x3d.fieldValue()
fieldValue961.setName("translation")
fieldValue961.setValue("0.00839999970048666 1.47140002250671 0.0551000013947487")

ProtoInstance959.addFieldValue(fieldValue961)

fieldValue958.addChildren(ProtoInstance959)
ProtoInstance962 = x3d.ProtoInstance()
ProtoInstance962.setName("Site")
ProtoInstance962.setDEF("hanim_cervicale_2")
fieldValue963 = x3d.fieldValue()
fieldValue963.setName("name")
fieldValue963.setValue("cervicale")

ProtoInstance962.addFieldValue(fieldValue963)
fieldValue964 = x3d.fieldValue()
fieldValue964.setName("translation")
fieldValue964.setValue("0.0063999998383224 1.51999998092651 -0.0815000012516975")

ProtoInstance962.addFieldValue(fieldValue964)

fieldValue958.addChildren(ProtoInstance962)

ProtoInstance956.addFieldValue(fieldValue958)

fieldValue385.addChildren(ProtoInstance956)

ProtoInstance381.addFieldValue(fieldValue385)

fieldValue380.addChildren(ProtoInstance381)
ProtoInstance965 = x3d.ProtoInstance()
ProtoInstance965.setName("Segment")
ProtoInstance965.setDEF("hanim_t2_2")
fieldValue966 = x3d.fieldValue()
fieldValue966.setName("name")
fieldValue966.setValue("t2")

ProtoInstance965.addFieldValue(fieldValue966)

fieldValue380.addChildren(ProtoInstance965)

ProtoInstance376.addFieldValue(fieldValue380)

fieldValue375.addChildren(ProtoInstance376)
ProtoInstance967 = x3d.ProtoInstance()
ProtoInstance967.setName("Segment")
ProtoInstance967.setDEF("hanim_t3_2")
fieldValue968 = x3d.fieldValue()
fieldValue968.setName("name")
fieldValue968.setValue("t3")

ProtoInstance967.addFieldValue(fieldValue968)

fieldValue375.addChildren(ProtoInstance967)

ProtoInstance371.addFieldValue(fieldValue375)

fieldValue370.addChildren(ProtoInstance371)
ProtoInstance969 = x3d.ProtoInstance()
ProtoInstance969.setName("Segment")
ProtoInstance969.setDEF("hanim_t4_2")
fieldValue970 = x3d.fieldValue()
fieldValue970.setName("name")
fieldValue970.setValue("t4")

ProtoInstance969.addFieldValue(fieldValue970)

fieldValue370.addChildren(ProtoInstance969)

ProtoInstance366.addFieldValue(fieldValue370)

fieldValue365.addChildren(ProtoInstance366)
ProtoInstance971 = x3d.ProtoInstance()
ProtoInstance971.setName("Segment")
ProtoInstance971.setDEF("hanim_t5_2")
fieldValue972 = x3d.fieldValue()
fieldValue972.setName("name")
fieldValue972.setValue("t5")

ProtoInstance971.addFieldValue(fieldValue972)

fieldValue365.addChildren(ProtoInstance971)

ProtoInstance361.addFieldValue(fieldValue365)

fieldValue360.addChildren(ProtoInstance361)
ProtoInstance973 = x3d.ProtoInstance()
ProtoInstance973.setName("Segment")
ProtoInstance973.setDEF("hanim_t6_2")
fieldValue974 = x3d.fieldValue()
fieldValue974.setName("name")
fieldValue974.setValue("t6")

ProtoInstance973.addFieldValue(fieldValue974)

fieldValue360.addChildren(ProtoInstance973)

ProtoInstance356.addFieldValue(fieldValue360)

fieldValue355.addChildren(ProtoInstance356)
ProtoInstance975 = x3d.ProtoInstance()
ProtoInstance975.setName("Segment")
ProtoInstance975.setDEF("hanim_t7_2")
fieldValue976 = x3d.fieldValue()
fieldValue976.setName("name")
fieldValue976.setValue("t7")

ProtoInstance975.addFieldValue(fieldValue976)

fieldValue355.addChildren(ProtoInstance975)

ProtoInstance351.addFieldValue(fieldValue355)

fieldValue350.addChildren(ProtoInstance351)
ProtoInstance977 = x3d.ProtoInstance()
ProtoInstance977.setName("Segment")
ProtoInstance977.setDEF("hanim_t8_2")
fieldValue978 = x3d.fieldValue()
fieldValue978.setName("name")
fieldValue978.setValue("t8")

ProtoInstance977.addFieldValue(fieldValue978)

fieldValue350.addChildren(ProtoInstance977)

ProtoInstance346.addFieldValue(fieldValue350)

fieldValue345.addChildren(ProtoInstance346)
ProtoInstance979 = x3d.ProtoInstance()
ProtoInstance979.setName("Segment")
ProtoInstance979.setDEF("hanim_t9_2")
fieldValue980 = x3d.fieldValue()
fieldValue980.setName("name")
fieldValue980.setValue("t9")

ProtoInstance979.addFieldValue(fieldValue980)
fieldValue981 = x3d.fieldValue()
fieldValue981.setName("children")
ProtoInstance982 = x3d.ProtoInstance()
ProtoInstance982.setName("Site")
ProtoInstance982.setDEF("hanim_r_thelion_2")
fieldValue983 = x3d.fieldValue()
fieldValue983.setName("name")
fieldValue983.setValue("r_thelion")

ProtoInstance982.addFieldValue(fieldValue983)
fieldValue984 = x3d.fieldValue()
fieldValue984.setName("translation")
fieldValue984.setValue("-0.0736000016331673 1.33850002288818 0.121699996292591")

ProtoInstance982.addFieldValue(fieldValue984)

fieldValue981.addChildren(ProtoInstance982)
ProtoInstance985 = x3d.ProtoInstance()
ProtoInstance985.setName("Site")
ProtoInstance985.setDEF("hanim_l_thelion_2")
fieldValue986 = x3d.fieldValue()
fieldValue986.setName("name")
fieldValue986.setValue("l_thelion")

ProtoInstance985.addFieldValue(fieldValue986)
fieldValue987 = x3d.fieldValue()
fieldValue987.setName("translation")
fieldValue987.setValue("0.0917999967932701 1.33819997310638 0.119199998676777")

ProtoInstance985.addFieldValue(fieldValue987)

fieldValue981.addChildren(ProtoInstance985)

ProtoInstance979.addFieldValue(fieldValue981)

fieldValue345.addChildren(ProtoInstance979)

ProtoInstance341.addFieldValue(fieldValue345)

fieldValue340.addChildren(ProtoInstance341)
ProtoInstance988 = x3d.ProtoInstance()
ProtoInstance988.setName("Segment")
ProtoInstance988.setDEF("hanim_t10_2")
fieldValue989 = x3d.fieldValue()
fieldValue989.setName("name")
fieldValue989.setValue("t10")

ProtoInstance988.addFieldValue(fieldValue989)
fieldValue990 = x3d.fieldValue()
fieldValue990.setName("children")
ProtoInstance991 = x3d.ProtoInstance()
ProtoInstance991.setName("Site")
ProtoInstance991.setDEF("hanim_substernale_2")
fieldValue992 = x3d.fieldValue()
fieldValue992.setName("name")
fieldValue992.setValue("substernale")

ProtoInstance991.addFieldValue(fieldValue992)
fieldValue993 = x3d.fieldValue()
fieldValue993.setName("translation")
fieldValue993.setValue("0.008500000461936 1.29949998855591 0.114699997007847")

ProtoInstance991.addFieldValue(fieldValue993)

fieldValue990.addChildren(ProtoInstance991)

ProtoInstance988.addFieldValue(fieldValue990)

fieldValue340.addChildren(ProtoInstance988)

ProtoInstance336.addFieldValue(fieldValue340)

fieldValue335.addChildren(ProtoInstance336)
ProtoInstance994 = x3d.ProtoInstance()
ProtoInstance994.setName("Segment")
ProtoInstance994.setDEF("hanim_t11_2")
fieldValue995 = x3d.fieldValue()
fieldValue995.setName("name")
fieldValue995.setValue("t11")

ProtoInstance994.addFieldValue(fieldValue995)

fieldValue335.addChildren(ProtoInstance994)

ProtoInstance331.addFieldValue(fieldValue335)

fieldValue330.addChildren(ProtoInstance331)
ProtoInstance996 = x3d.ProtoInstance()
ProtoInstance996.setName("Segment")
ProtoInstance996.setDEF("hanim_t12_2")
fieldValue997 = x3d.fieldValue()
fieldValue997.setName("name")
fieldValue997.setValue("t12")

ProtoInstance996.addFieldValue(fieldValue997)

fieldValue330.addChildren(ProtoInstance996)

ProtoInstance326.addFieldValue(fieldValue330)

fieldValue325.addChildren(ProtoInstance326)
ProtoInstance998 = x3d.ProtoInstance()
ProtoInstance998.setName("Segment")
ProtoInstance998.setDEF("hanim_l1_2")
fieldValue999 = x3d.fieldValue()
fieldValue999.setName("name")
fieldValue999.setValue("l1")

ProtoInstance998.addFieldValue(fieldValue999)

fieldValue325.addChildren(ProtoInstance998)

ProtoInstance321.addFieldValue(fieldValue325)

fieldValue320.addChildren(ProtoInstance321)
ProtoInstance1000 = x3d.ProtoInstance()
ProtoInstance1000.setName("Segment")
ProtoInstance1000.setDEF("hanim_l2_2")
fieldValue1001 = x3d.fieldValue()
fieldValue1001.setName("name")
fieldValue1001.setValue("l2")

ProtoInstance1000.addFieldValue(fieldValue1001)
fieldValue1002 = x3d.fieldValue()
fieldValue1002.setName("children")
ProtoInstance1003 = x3d.ProtoInstance()
ProtoInstance1003.setName("Site")
ProtoInstance1003.setDEF("hanim_r_rib10_2")
fieldValue1004 = x3d.fieldValue()
fieldValue1004.setName("name")
fieldValue1004.setValue("r_rib10")

ProtoInstance1003.addFieldValue(fieldValue1004)
fieldValue1005 = x3d.fieldValue()
fieldValue1005.setName("translation")
fieldValue1005.setValue("-0.0710999965667725 1.19410002231598 0.101599998772144")

ProtoInstance1003.addFieldValue(fieldValue1005)

fieldValue1002.addChildren(ProtoInstance1003)
ProtoInstance1006 = x3d.ProtoInstance()
ProtoInstance1006.setName("Site")
ProtoInstance1006.setDEF("hanim_l_rib10_2")
fieldValue1007 = x3d.fieldValue()
fieldValue1007.setName("name")
fieldValue1007.setValue("l_rib10")

ProtoInstance1006.addFieldValue(fieldValue1007)
fieldValue1008 = x3d.fieldValue()
fieldValue1008.setName("translation")
fieldValue1008.setValue("0.0870999991893768 1.19249999523163 0.099200002849102")

ProtoInstance1006.addFieldValue(fieldValue1008)

fieldValue1002.addChildren(ProtoInstance1006)
ProtoInstance1009 = x3d.ProtoInstance()
ProtoInstance1009.setName("Site")
ProtoInstance1009.setDEF("hanim_spine_2_lower_back_2")
fieldValue1010 = x3d.fieldValue()
fieldValue1010.setName("name")
fieldValue1010.setValue("spine_2_lower_back")

ProtoInstance1009.addFieldValue(fieldValue1010)
fieldValue1011 = x3d.fieldValue()
fieldValue1011.setName("translation")
fieldValue1011.setValue("0.00490000005811453 1.19079995155334 -0.111299999058247")

ProtoInstance1009.addFieldValue(fieldValue1011)

fieldValue1002.addChildren(ProtoInstance1009)

ProtoInstance1000.addFieldValue(fieldValue1002)

fieldValue320.addChildren(ProtoInstance1000)

ProtoInstance316.addFieldValue(fieldValue320)

fieldValue315.addChildren(ProtoInstance316)
ProtoInstance1012 = x3d.ProtoInstance()
ProtoInstance1012.setName("Segment")
ProtoInstance1012.setDEF("hanim_l3_2")
fieldValue1013 = x3d.fieldValue()
fieldValue1013.setName("name")
fieldValue1013.setValue("l3")

ProtoInstance1012.addFieldValue(fieldValue1013)

fieldValue315.addChildren(ProtoInstance1012)

ProtoInstance311.addFieldValue(fieldValue315)

fieldValue310.addChildren(ProtoInstance311)
ProtoInstance1014 = x3d.ProtoInstance()
ProtoInstance1014.setName("Segment")
ProtoInstance1014.setDEF("hanim_l4_2")
fieldValue1015 = x3d.fieldValue()
fieldValue1015.setName("name")
fieldValue1015.setValue("l4")

ProtoInstance1014.addFieldValue(fieldValue1015)

fieldValue310.addChildren(ProtoInstance1014)

ProtoInstance306.addFieldValue(fieldValue310)

fieldValue305.addChildren(ProtoInstance306)
ProtoInstance1016 = x3d.ProtoInstance()
ProtoInstance1016.setName("Segment")
ProtoInstance1016.setDEF("hanim_l5_2")
fieldValue1017 = x3d.fieldValue()
fieldValue1017.setName("name")
fieldValue1017.setValue("l5")

ProtoInstance1016.addFieldValue(fieldValue1017)
fieldValue1018 = x3d.fieldValue()
fieldValue1018.setName("children")
ProtoInstance1019 = x3d.ProtoInstance()
ProtoInstance1019.setName("Site")
ProtoInstance1019.setDEF("hanim_waist_preferred_posterior_2")
fieldValue1020 = x3d.fieldValue()
fieldValue1020.setName("name")
fieldValue1020.setValue("waist_preferred_posterior")

ProtoInstance1019.addFieldValue(fieldValue1020)
fieldValue1021 = x3d.fieldValue()
fieldValue1021.setName("translation")
fieldValue1021.setValue("0.28999999165535 1.09150004386902 -0.109099999070168")

ProtoInstance1019.addFieldValue(fieldValue1021)

fieldValue1018.addChildren(ProtoInstance1019)
ProtoInstance1022 = x3d.ProtoInstance()
ProtoInstance1022.setName("Site")
ProtoInstance1022.setDEF("hanim_navel_2")
fieldValue1023 = x3d.fieldValue()
fieldValue1023.setName("name")
fieldValue1023.setValue("navel")

ProtoInstance1022.addFieldValue(fieldValue1023)
fieldValue1024 = x3d.fieldValue()
fieldValue1024.setName("translation")
fieldValue1024.setValue("0.00689999992027879 1.09660005569458 0.101700000464916")

ProtoInstance1022.addFieldValue(fieldValue1024)

fieldValue1018.addChildren(ProtoInstance1022)

ProtoInstance1016.addFieldValue(fieldValue1018)

fieldValue305.addChildren(ProtoInstance1016)

ProtoInstance301.addFieldValue(fieldValue305)

fieldValue107.addChildren(ProtoInstance301)
ProtoInstance1025 = x3d.ProtoInstance()
ProtoInstance1025.setName("Segment")
ProtoInstance1025.setDEF("hanim_sacrum_2")
fieldValue1026 = x3d.fieldValue()
fieldValue1026.setName("name")
fieldValue1026.setValue("sacrum")

ProtoInstance1025.addFieldValue(fieldValue1026)

fieldValue107.addChildren(ProtoInstance1025)

ProtoInstance103.addFieldValue(fieldValue107)

fieldValue102.addChildren(ProtoInstance103)

ProtoInstance101.addFieldValue(fieldValue102)
fieldValue1027 = x3d.fieldValue()
fieldValue1027.setName("joints")
ProtoInstance1028 = x3d.ProtoInstance()
ProtoInstance1028.setUSE("hanim_humanoid_root_2")

fieldValue1027.addChildren(ProtoInstance1028)
ProtoInstance1029 = x3d.ProtoInstance()
ProtoInstance1029.setUSE("hanim_sacroiliac_2")

fieldValue1027.addChildren(ProtoInstance1029)
ProtoInstance1030 = x3d.ProtoInstance()
ProtoInstance1030.setUSE("hanim_l_hip_2")

fieldValue1027.addChildren(ProtoInstance1030)
ProtoInstance1031 = x3d.ProtoInstance()
ProtoInstance1031.setUSE("hanim_l_knee_2")

fieldValue1027.addChildren(ProtoInstance1031)
ProtoInstance1032 = x3d.ProtoInstance()
ProtoInstance1032.setUSE("hanim_l_talocrural_2")

fieldValue1027.addChildren(ProtoInstance1032)
ProtoInstance1033 = x3d.ProtoInstance()
ProtoInstance1033.setUSE("hanim_l_tarsotarsal_interphalangeal__2")

fieldValue1027.addChildren(ProtoInstance1033)
ProtoInstance1034 = x3d.ProtoInstance()
ProtoInstance1034.setUSE("hanim_l_metatarsophalangeal__2")

fieldValue1027.addChildren(ProtoInstance1034)
ProtoInstance1035 = x3d.ProtoInstance()
ProtoInstance1035.setUSE("hanim_l_tarsal_interphalangeal__2")

fieldValue1027.addChildren(ProtoInstance1035)
ProtoInstance1036 = x3d.ProtoInstance()
ProtoInstance1036.setUSE("hanim_r_hip_2")

fieldValue1027.addChildren(ProtoInstance1036)
ProtoInstance1037 = x3d.ProtoInstance()
ProtoInstance1037.setUSE("hanim_r_knee_2")

fieldValue1027.addChildren(ProtoInstance1037)
ProtoInstance1038 = x3d.ProtoInstance()
ProtoInstance1038.setUSE("hanim_r_talocrural_2")

fieldValue1027.addChildren(ProtoInstance1038)
ProtoInstance1039 = x3d.ProtoInstance()
ProtoInstance1039.setUSE("hanim_r_tarsotarsal_interphalangeal__2")

fieldValue1027.addChildren(ProtoInstance1039)
ProtoInstance1040 = x3d.ProtoInstance()
ProtoInstance1040.setUSE("hanim_r_metatarsophalangeal__2")

fieldValue1027.addChildren(ProtoInstance1040)
ProtoInstance1041 = x3d.ProtoInstance()
ProtoInstance1041.setUSE("hanim_r_tarsal_interphalangeal__2")

fieldValue1027.addChildren(ProtoInstance1041)
ProtoInstance1042 = x3d.ProtoInstance()
ProtoInstance1042.setUSE("hanim_vl5_2")

fieldValue1027.addChildren(ProtoInstance1042)
ProtoInstance1043 = x3d.ProtoInstance()
ProtoInstance1043.setUSE("hanim_vl4_2")

fieldValue1027.addChildren(ProtoInstance1043)
ProtoInstance1044 = x3d.ProtoInstance()
ProtoInstance1044.setUSE("hanim_vl3_2")

fieldValue1027.addChildren(ProtoInstance1044)
ProtoInstance1045 = x3d.ProtoInstance()
ProtoInstance1045.setUSE("hanim_vl2_2")

fieldValue1027.addChildren(ProtoInstance1045)
ProtoInstance1046 = x3d.ProtoInstance()
ProtoInstance1046.setUSE("hanim_vl1_2")

fieldValue1027.addChildren(ProtoInstance1046)
ProtoInstance1047 = x3d.ProtoInstance()
ProtoInstance1047.setUSE("hanim_vt12_2")

fieldValue1027.addChildren(ProtoInstance1047)
ProtoInstance1048 = x3d.ProtoInstance()
ProtoInstance1048.setUSE("hanim_vt11_2")

fieldValue1027.addChildren(ProtoInstance1048)
ProtoInstance1049 = x3d.ProtoInstance()
ProtoInstance1049.setUSE("hanim_vt10_2")

fieldValue1027.addChildren(ProtoInstance1049)
ProtoInstance1050 = x3d.ProtoInstance()
ProtoInstance1050.setUSE("hanim_vt9_2")

fieldValue1027.addChildren(ProtoInstance1050)
ProtoInstance1051 = x3d.ProtoInstance()
ProtoInstance1051.setUSE("hanim_vt8_2")

fieldValue1027.addChildren(ProtoInstance1051)
ProtoInstance1052 = x3d.ProtoInstance()
ProtoInstance1052.setUSE("hanim_vt7_2")

fieldValue1027.addChildren(ProtoInstance1052)
ProtoInstance1053 = x3d.ProtoInstance()
ProtoInstance1053.setUSE("hanim_vt6_2")

fieldValue1027.addChildren(ProtoInstance1053)
ProtoInstance1054 = x3d.ProtoInstance()
ProtoInstance1054.setUSE("hanim_vt5_2")

fieldValue1027.addChildren(ProtoInstance1054)
ProtoInstance1055 = x3d.ProtoInstance()
ProtoInstance1055.setUSE("hanim_vt4_2")

fieldValue1027.addChildren(ProtoInstance1055)
ProtoInstance1056 = x3d.ProtoInstance()
ProtoInstance1056.setUSE("hanim_vt3_2")

fieldValue1027.addChildren(ProtoInstance1056)
ProtoInstance1057 = x3d.ProtoInstance()
ProtoInstance1057.setUSE("hanim_vt2_2")

fieldValue1027.addChildren(ProtoInstance1057)
ProtoInstance1058 = x3d.ProtoInstance()
ProtoInstance1058.setUSE("hanim_vt1_2")

fieldValue1027.addChildren(ProtoInstance1058)
ProtoInstance1059 = x3d.ProtoInstance()
ProtoInstance1059.setUSE("hanim_vc7_2")

fieldValue1027.addChildren(ProtoInstance1059)
ProtoInstance1060 = x3d.ProtoInstance()
ProtoInstance1060.setUSE("hanim_vc6_2")

fieldValue1027.addChildren(ProtoInstance1060)
ProtoInstance1061 = x3d.ProtoInstance()
ProtoInstance1061.setUSE("hanim_vc5_2")

fieldValue1027.addChildren(ProtoInstance1061)
ProtoInstance1062 = x3d.ProtoInstance()
ProtoInstance1062.setUSE("hanim_vc4_2")

fieldValue1027.addChildren(ProtoInstance1062)
ProtoInstance1063 = x3d.ProtoInstance()
ProtoInstance1063.setUSE("hanim_vc3_2")

fieldValue1027.addChildren(ProtoInstance1063)
ProtoInstance1064 = x3d.ProtoInstance()
ProtoInstance1064.setUSE("hanim_vc2_2")

fieldValue1027.addChildren(ProtoInstance1064)
ProtoInstance1065 = x3d.ProtoInstance()
ProtoInstance1065.setUSE("hanim_vc1_2")

fieldValue1027.addChildren(ProtoInstance1065)
ProtoInstance1066 = x3d.ProtoInstance()
ProtoInstance1066.setUSE("hanim_skullbase_2")

fieldValue1027.addChildren(ProtoInstance1066)
ProtoInstance1067 = x3d.ProtoInstance()
ProtoInstance1067.setUSE("hanim_l_eyeball_4")

fieldValue1027.addChildren(ProtoInstance1067)
ProtoInstance1068 = x3d.ProtoInstance()
ProtoInstance1068.setUSE("hanim_r_eyeball_4")

fieldValue1027.addChildren(ProtoInstance1068)
ProtoInstance1069 = x3d.ProtoInstance()
ProtoInstance1069.setUSE("hanim_l_sternoclavicular_2")

fieldValue1027.addChildren(ProtoInstance1069)
ProtoInstance1070 = x3d.ProtoInstance()
ProtoInstance1070.setUSE("hanim_l_acromioclavicular_2")

fieldValue1027.addChildren(ProtoInstance1070)
ProtoInstance1071 = x3d.ProtoInstance()
ProtoInstance1071.setUSE("hanim_l_shoulder_2")

fieldValue1027.addChildren(ProtoInstance1071)
ProtoInstance1072 = x3d.ProtoInstance()
ProtoInstance1072.setUSE("hanim_l_elbow_2")

fieldValue1027.addChildren(ProtoInstance1072)
ProtoInstance1073 = x3d.ProtoInstance()
ProtoInstance1073.setUSE("hanim_l_radiocarpal_2")

fieldValue1027.addChildren(ProtoInstance1073)
ProtoInstance1074 = x3d.ProtoInstance()
ProtoInstance1074.setUSE("hanim_l_carpometacarpal2")

fieldValue1027.addChildren(ProtoInstance1074)
ProtoInstance1075 = x3d.ProtoInstance()
ProtoInstance1075.setUSE("hanim_l_metacarpophalangeal2")

fieldValue1027.addChildren(ProtoInstance1075)
ProtoInstance1076 = x3d.ProtoInstance()
ProtoInstance1076.setUSE("hanim_l_carpal_interphalangeal2")

fieldValue1027.addChildren(ProtoInstance1076)
ProtoInstance1077 = x3d.ProtoInstance()
ProtoInstance1077.setUSE("hanim_l_carpometacarpal3")

fieldValue1027.addChildren(ProtoInstance1077)
ProtoInstance1078 = x3d.ProtoInstance()
ProtoInstance1078.setUSE("hanim_l_metacarpophalangeal3")

fieldValue1027.addChildren(ProtoInstance1078)
ProtoInstance1079 = x3d.ProtoInstance()
ProtoInstance1079.setUSE("hanim_l_carpal_proximal_interphalangeal3")

fieldValue1027.addChildren(ProtoInstance1079)
ProtoInstance1080 = x3d.ProtoInstance()
ProtoInstance1080.setUSE("hanim_l_carpal_distal_interphalangeal3")

fieldValue1027.addChildren(ProtoInstance1080)
ProtoInstance1081 = x3d.ProtoInstance()
ProtoInstance1081.setUSE("hanim_l_carpometacarpal4")

fieldValue1027.addChildren(ProtoInstance1081)
ProtoInstance1082 = x3d.ProtoInstance()
ProtoInstance1082.setUSE("hanim_l_metacarpophalangeal4")

fieldValue1027.addChildren(ProtoInstance1082)
ProtoInstance1083 = x3d.ProtoInstance()
ProtoInstance1083.setUSE("hanim_l_carpal_proximal_interphalangeal4")

fieldValue1027.addChildren(ProtoInstance1083)
ProtoInstance1084 = x3d.ProtoInstance()
ProtoInstance1084.setUSE("hanim_l_carpal_distal_interphalangeal4")

fieldValue1027.addChildren(ProtoInstance1084)
ProtoInstance1085 = x3d.ProtoInstance()
ProtoInstance1085.setUSE("hanim_l_carpometacarpal5")

fieldValue1027.addChildren(ProtoInstance1085)
ProtoInstance1086 = x3d.ProtoInstance()
ProtoInstance1086.setUSE("hanim_l_metacarpophalangeal5")

fieldValue1027.addChildren(ProtoInstance1086)
ProtoInstance1087 = x3d.ProtoInstance()
ProtoInstance1087.setUSE("hanim_l_carpal_proximal_interphalangeal5")

fieldValue1027.addChildren(ProtoInstance1087)
ProtoInstance1088 = x3d.ProtoInstance()
ProtoInstance1088.setUSE("hanim_l_carpal_distal_interphalangeal5")

fieldValue1027.addChildren(ProtoInstance1088)
ProtoInstance1089 = x3d.ProtoInstance()
ProtoInstance1089.setUSE("hanim_l_carpometacarpal6")

fieldValue1027.addChildren(ProtoInstance1089)
ProtoInstance1090 = x3d.ProtoInstance()
ProtoInstance1090.setUSE("hanim_l_metacarpophalangeal6")

fieldValue1027.addChildren(ProtoInstance1090)
ProtoInstance1091 = x3d.ProtoInstance()
ProtoInstance1091.setUSE("hanim_l_carpal_proximal_interphalangeal6")

fieldValue1027.addChildren(ProtoInstance1091)
ProtoInstance1092 = x3d.ProtoInstance()
ProtoInstance1092.setUSE("hanim_l_carpal_distal_interphalangeal6")

fieldValue1027.addChildren(ProtoInstance1092)
ProtoInstance1093 = x3d.ProtoInstance()
ProtoInstance1093.setUSE("hanim_r_sternoclavicular_2")

fieldValue1027.addChildren(ProtoInstance1093)
ProtoInstance1094 = x3d.ProtoInstance()
ProtoInstance1094.setUSE("hanim_r_acromioclavicular_2")

fieldValue1027.addChildren(ProtoInstance1094)
ProtoInstance1095 = x3d.ProtoInstance()
ProtoInstance1095.setUSE("hanim_r_shoulder_2")

fieldValue1027.addChildren(ProtoInstance1095)
ProtoInstance1096 = x3d.ProtoInstance()
ProtoInstance1096.setUSE("hanim_r_elbow_2")

fieldValue1027.addChildren(ProtoInstance1096)
ProtoInstance1097 = x3d.ProtoInstance()
ProtoInstance1097.setUSE("hanim_r_radiocarpal_2")

fieldValue1027.addChildren(ProtoInstance1097)
ProtoInstance1098 = x3d.ProtoInstance()
ProtoInstance1098.setUSE("hanim_r_carpometacarpal2")

fieldValue1027.addChildren(ProtoInstance1098)
ProtoInstance1099 = x3d.ProtoInstance()
ProtoInstance1099.setUSE("hanim_r_metacarpophalangeal2")

fieldValue1027.addChildren(ProtoInstance1099)
ProtoInstance1100 = x3d.ProtoInstance()
ProtoInstance1100.setUSE("hanim_r_carpal_interphalangeal2")

fieldValue1027.addChildren(ProtoInstance1100)
ProtoInstance1101 = x3d.ProtoInstance()
ProtoInstance1101.setUSE("hanim_r_carpometacarpal3")

fieldValue1027.addChildren(ProtoInstance1101)
ProtoInstance1102 = x3d.ProtoInstance()
ProtoInstance1102.setUSE("hanim_r_metacarpophalangeal3")

fieldValue1027.addChildren(ProtoInstance1102)
ProtoInstance1103 = x3d.ProtoInstance()
ProtoInstance1103.setUSE("hanim_r_carpal_proximal_interphalangeal3")

fieldValue1027.addChildren(ProtoInstance1103)
ProtoInstance1104 = x3d.ProtoInstance()
ProtoInstance1104.setUSE("hanim_r_carpal_distal_interphalangeal3")

fieldValue1027.addChildren(ProtoInstance1104)
ProtoInstance1105 = x3d.ProtoInstance()
ProtoInstance1105.setUSE("hanim_r_carpometacarpal4")

fieldValue1027.addChildren(ProtoInstance1105)
ProtoInstance1106 = x3d.ProtoInstance()
ProtoInstance1106.setUSE("hanim_r_metacarpophalangeal4")

fieldValue1027.addChildren(ProtoInstance1106)
ProtoInstance1107 = x3d.ProtoInstance()
ProtoInstance1107.setUSE("hanim_r_carpal_proximal_interphalangeal4")

fieldValue1027.addChildren(ProtoInstance1107)
ProtoInstance1108 = x3d.ProtoInstance()
ProtoInstance1108.setUSE("hanim_r_carpal_distal_interphalangeal4")

fieldValue1027.addChildren(ProtoInstance1108)
ProtoInstance1109 = x3d.ProtoInstance()
ProtoInstance1109.setUSE("hanim_r_carpometacarpal5")

fieldValue1027.addChildren(ProtoInstance1109)
ProtoInstance1110 = x3d.ProtoInstance()
ProtoInstance1110.setUSE("hanim_r_metacarpophalangeal5")

fieldValue1027.addChildren(ProtoInstance1110)
ProtoInstance1111 = x3d.ProtoInstance()
ProtoInstance1111.setUSE("hanim_r_carpal_proximal_interphalangeal5")

fieldValue1027.addChildren(ProtoInstance1111)
ProtoInstance1112 = x3d.ProtoInstance()
ProtoInstance1112.setUSE("hanim_r_carpal_distal_interphalangeal5")

fieldValue1027.addChildren(ProtoInstance1112)
ProtoInstance1113 = x3d.ProtoInstance()
ProtoInstance1113.setUSE("hanim_r_carpometacarpal6")

fieldValue1027.addChildren(ProtoInstance1113)
ProtoInstance1114 = x3d.ProtoInstance()
ProtoInstance1114.setUSE("hanim_r_metacarpophalangeal6")

fieldValue1027.addChildren(ProtoInstance1114)
ProtoInstance1115 = x3d.ProtoInstance()
ProtoInstance1115.setUSE("hanim_r_carpal_proximal_interphalangeal6")

fieldValue1027.addChildren(ProtoInstance1115)
ProtoInstance1116 = x3d.ProtoInstance()
ProtoInstance1116.setUSE("hanim_r_carpal_distal_interphalangeal6")

fieldValue1027.addChildren(ProtoInstance1116)

ProtoInstance101.addFieldValue(fieldValue1027)
fieldValue1117 = x3d.fieldValue()
fieldValue1117.setName("sites")
ProtoInstance1118 = x3d.ProtoInstance()
ProtoInstance1118.setUSE("hanim_l_tarsal_distal_phalanx_1_tip_2")

fieldValue1117.addChildren(ProtoInstance1118)
ProtoInstance1119 = x3d.ProtoInstance()
ProtoInstance1119.setUSE("hanim_l_tarsal_interphalangeal_phalanx6")

fieldValue1117.addChildren(ProtoInstance1119)
ProtoInstance1120 = x3d.ProtoInstance()
ProtoInstance1120.setUSE("hanim_l_tarsal_distal_phalanx3")

fieldValue1117.addChildren(ProtoInstance1120)
ProtoInstance1121 = x3d.ProtoInstance()
ProtoInstance1121.setUSE("hanim_l_tarsal_interphalangeal_phalanx2")

fieldValue1117.addChildren(ProtoInstance1121)
ProtoInstance1122 = x3d.ProtoInstance()
ProtoInstance1122.setUSE("hanim_l_lateral_malleolus_2")

fieldValue1117.addChildren(ProtoInstance1122)
ProtoInstance1123 = x3d.ProtoInstance()
ProtoInstance1123.setUSE("hanim_l_medial_malleolus_2")

fieldValue1117.addChildren(ProtoInstance1123)
ProtoInstance1124 = x3d.ProtoInstance()
ProtoInstance1124.setUSE("hanim_l_sphyrion_2")

fieldValue1117.addChildren(ProtoInstance1124)
ProtoInstance1125 = x3d.ProtoInstance()
ProtoInstance1125.setUSE("hanim_l_calcaneus_posterior_2")

fieldValue1117.addChildren(ProtoInstance1125)
ProtoInstance1126 = x3d.ProtoInstance()
ProtoInstance1126.setUSE("hanim_l_knee_crease_2")

fieldValue1117.addChildren(ProtoInstance1126)
ProtoInstance1127 = x3d.ProtoInstance()
ProtoInstance1127.setUSE("hanim_l_femoral_lateral_epicondyles_2")

fieldValue1117.addChildren(ProtoInstance1127)
ProtoInstance1128 = x3d.ProtoInstance()
ProtoInstance1128.setUSE("hanim_l_femoral_medial_epicondyles_2")

fieldValue1117.addChildren(ProtoInstance1128)
ProtoInstance1129 = x3d.ProtoInstance()
ProtoInstance1129.setUSE("hanim_r_tarsal_distal_phalanx_1_tip_2")

fieldValue1117.addChildren(ProtoInstance1129)
ProtoInstance1130 = x3d.ProtoInstance()
ProtoInstance1130.setUSE("hanim_r_tarsal_interphalangeal_phalanx6")

fieldValue1117.addChildren(ProtoInstance1130)
ProtoInstance1131 = x3d.ProtoInstance()
ProtoInstance1131.setUSE("hanim_r_tarsal_distal_phalanx3")

fieldValue1117.addChildren(ProtoInstance1131)
ProtoInstance1132 = x3d.ProtoInstance()
ProtoInstance1132.setUSE("hanim_r_tarsal_interphalangeal_phalanx2")

fieldValue1117.addChildren(ProtoInstance1132)
ProtoInstance1133 = x3d.ProtoInstance()
ProtoInstance1133.setUSE("hanim_r_lateral_malleolus_2")

fieldValue1117.addChildren(ProtoInstance1133)
ProtoInstance1134 = x3d.ProtoInstance()
ProtoInstance1134.setUSE("hanim_r_medial_malleolus_2")

fieldValue1117.addChildren(ProtoInstance1134)
ProtoInstance1135 = x3d.ProtoInstance()
ProtoInstance1135.setUSE("hanim_r_sphyrion_2")

fieldValue1117.addChildren(ProtoInstance1135)
ProtoInstance1136 = x3d.ProtoInstance()
ProtoInstance1136.setUSE("hanim_r_calcaneus_posterior_2")

fieldValue1117.addChildren(ProtoInstance1136)
ProtoInstance1137 = x3d.ProtoInstance()
ProtoInstance1137.setUSE("hanim_r_knee_crease_2")

fieldValue1117.addChildren(ProtoInstance1137)
ProtoInstance1138 = x3d.ProtoInstance()
ProtoInstance1138.setUSE("hanim_r_femoral_lateral_epicondyles_2")

fieldValue1117.addChildren(ProtoInstance1138)
ProtoInstance1139 = x3d.ProtoInstance()
ProtoInstance1139.setUSE("hanim_r_femoral_medial_epicondyles_2")

fieldValue1117.addChildren(ProtoInstance1139)
ProtoInstance1140 = x3d.ProtoInstance()
ProtoInstance1140.setUSE("hanim_r_iliocristale_2")

fieldValue1117.addChildren(ProtoInstance1140)
ProtoInstance1141 = x3d.ProtoInstance()
ProtoInstance1141.setUSE("hanim_r_trochanterion_2")

fieldValue1117.addChildren(ProtoInstance1141)
ProtoInstance1142 = x3d.ProtoInstance()
ProtoInstance1142.setUSE("hanim_l_iliocristale_2")

fieldValue1117.addChildren(ProtoInstance1142)
ProtoInstance1143 = x3d.ProtoInstance()
ProtoInstance1143.setUSE("hanim_l_trochanterion_2")

fieldValue1117.addChildren(ProtoInstance1143)
ProtoInstance1144 = x3d.ProtoInstance()
ProtoInstance1144.setUSE("hanim_r_asis_2")

fieldValue1117.addChildren(ProtoInstance1144)
ProtoInstance1145 = x3d.ProtoInstance()
ProtoInstance1145.setUSE("hanim_l_asis_2")

fieldValue1117.addChildren(ProtoInstance1145)
ProtoInstance1146 = x3d.ProtoInstance()
ProtoInstance1146.setUSE("hanim_r_psis_2")

fieldValue1117.addChildren(ProtoInstance1146)
ProtoInstance1147 = x3d.ProtoInstance()
ProtoInstance1147.setUSE("hanim_l_psis_2")

fieldValue1117.addChildren(ProtoInstance1147)
ProtoInstance1148 = x3d.ProtoInstance()
ProtoInstance1148.setUSE("hanim_crotch_2")

fieldValue1117.addChildren(ProtoInstance1148)
ProtoInstance1149 = x3d.ProtoInstance()
ProtoInstance1149.setUSE("hanim_skull_tip_2")

fieldValue1117.addChildren(ProtoInstance1149)
ProtoInstance1150 = x3d.ProtoInstance()
ProtoInstance1150.setUSE("hanim_sellion_2")

fieldValue1117.addChildren(ProtoInstance1150)
ProtoInstance1151 = x3d.ProtoInstance()
ProtoInstance1151.setUSE("hanim_r_infraorbitale_2")

fieldValue1117.addChildren(ProtoInstance1151)
ProtoInstance1152 = x3d.ProtoInstance()
ProtoInstance1152.setUSE("hanim_l_infraorbitale_2")

fieldValue1117.addChildren(ProtoInstance1152)
ProtoInstance1153 = x3d.ProtoInstance()
ProtoInstance1153.setUSE("hanim_supramenton_2")

fieldValue1117.addChildren(ProtoInstance1153)
ProtoInstance1154 = x3d.ProtoInstance()
ProtoInstance1154.setUSE("hanim_r_tragion_2")

fieldValue1117.addChildren(ProtoInstance1154)
ProtoInstance1155 = x3d.ProtoInstance()
ProtoInstance1155.setUSE("hanim_r_gonion_2")

fieldValue1117.addChildren(ProtoInstance1155)
ProtoInstance1156 = x3d.ProtoInstance()
ProtoInstance1156.setUSE("hanim_l_tragion_2")

fieldValue1117.addChildren(ProtoInstance1156)
ProtoInstance1157 = x3d.ProtoInstance()
ProtoInstance1157.setUSE("hanim_l_gonion_2")

fieldValue1117.addChildren(ProtoInstance1157)
ProtoInstance1158 = x3d.ProtoInstance()
ProtoInstance1158.setUSE("hanim_nuchale_2")

fieldValue1117.addChildren(ProtoInstance1158)
ProtoInstance1159 = x3d.ProtoInstance()
ProtoInstance1159.setUSE("hanim_r_neck_base_2")

fieldValue1117.addChildren(ProtoInstance1159)
ProtoInstance1160 = x3d.ProtoInstance()
ProtoInstance1160.setUSE("hanim_l_neck_base_2")

fieldValue1117.addChildren(ProtoInstance1160)
ProtoInstance1161 = x3d.ProtoInstance()
ProtoInstance1161.setUSE("hanim_l_carpal_distal_phalanx_1_tip_2")

fieldValue1117.addChildren(ProtoInstance1161)
ProtoInstance1162 = x3d.ProtoInstance()
ProtoInstance1162.setUSE("hanim_l_carpal_distal_phalanx_2_tip_2")

fieldValue1117.addChildren(ProtoInstance1162)
ProtoInstance1163 = x3d.ProtoInstance()
ProtoInstance1163.setUSE("hanim_l_dactylion_2")

fieldValue1117.addChildren(ProtoInstance1163)
ProtoInstance1164 = x3d.ProtoInstance()
ProtoInstance1164.setUSE("hanim_l_carpal_distal_phalanx_3_tip_2")

fieldValue1117.addChildren(ProtoInstance1164)
ProtoInstance1165 = x3d.ProtoInstance()
ProtoInstance1165.setUSE("hanim_l_carpal_distal_phalanx_4_tip_2")

fieldValue1117.addChildren(ProtoInstance1165)
ProtoInstance1166 = x3d.ProtoInstance()
ProtoInstance1166.setUSE("hanim_l_carpal_distal_phalanx_5_tip_2")

fieldValue1117.addChildren(ProtoInstance1166)
ProtoInstance1167 = x3d.ProtoInstance()
ProtoInstance1167.setUSE("hanim_l_metacarpal_phalanx3")

fieldValue1117.addChildren(ProtoInstance1167)
ProtoInstance1168 = x3d.ProtoInstance()
ProtoInstance1168.setUSE("hanim_l_ulnar_styloid_2")

fieldValue1117.addChildren(ProtoInstance1168)
ProtoInstance1169 = x3d.ProtoInstance()
ProtoInstance1169.setUSE("hanim_l_metacarpal_phalanx6")

fieldValue1117.addChildren(ProtoInstance1169)
ProtoInstance1170 = x3d.ProtoInstance()
ProtoInstance1170.setUSE("hanim_l_radial_styloid_2")

fieldValue1117.addChildren(ProtoInstance1170)
ProtoInstance1171 = x3d.ProtoInstance()
ProtoInstance1171.setUSE("hanim_l_olecranon_2")

fieldValue1117.addChildren(ProtoInstance1171)
ProtoInstance1172 = x3d.ProtoInstance()
ProtoInstance1172.setUSE("hanim_l_humeral_medial_epicondyles_2")

fieldValue1117.addChildren(ProtoInstance1172)
ProtoInstance1173 = x3d.ProtoInstance()
ProtoInstance1173.setUSE("hanim_l_radiale_2")

fieldValue1117.addChildren(ProtoInstance1173)
ProtoInstance1174 = x3d.ProtoInstance()
ProtoInstance1174.setUSE("hanim_l_humeral_lateral_epicondyles_2")

fieldValue1117.addChildren(ProtoInstance1174)
ProtoInstance1175 = x3d.ProtoInstance()
ProtoInstance1175.setUSE("hanim_l_clavicale_2")

fieldValue1117.addChildren(ProtoInstance1175)
ProtoInstance1176 = x3d.ProtoInstance()
ProtoInstance1176.setUSE("hanim_l_acromion_2")

fieldValue1117.addChildren(ProtoInstance1176)
ProtoInstance1177 = x3d.ProtoInstance()
ProtoInstance1177.setUSE("hanim_l_axilla_proximal_2")

fieldValue1117.addChildren(ProtoInstance1177)
ProtoInstance1178 = x3d.ProtoInstance()
ProtoInstance1178.setUSE("hanim_l_axilla_distal_2")

fieldValue1117.addChildren(ProtoInstance1178)
ProtoInstance1179 = x3d.ProtoInstance()
ProtoInstance1179.setUSE("hanim_r_carpal_distal_phalanx_1_tip_2")

fieldValue1117.addChildren(ProtoInstance1179)
ProtoInstance1180 = x3d.ProtoInstance()
ProtoInstance1180.setUSE("hanim_r_carpal_distal_phalanx_2_tip_2")

fieldValue1117.addChildren(ProtoInstance1180)
ProtoInstance1181 = x3d.ProtoInstance()
ProtoInstance1181.setUSE("hanim_r_dactylion_2")

fieldValue1117.addChildren(ProtoInstance1181)
ProtoInstance1182 = x3d.ProtoInstance()
ProtoInstance1182.setUSE("hanim_r_carpal_distal_phalanx_3_tip_2")

fieldValue1117.addChildren(ProtoInstance1182)
ProtoInstance1183 = x3d.ProtoInstance()
ProtoInstance1183.setUSE("hanim_r_carpal_distal_phalanx_4_tip_2")

fieldValue1117.addChildren(ProtoInstance1183)
ProtoInstance1184 = x3d.ProtoInstance()
ProtoInstance1184.setUSE("hanim_r_carpal_distal_phalanx_5_tip_2")

fieldValue1117.addChildren(ProtoInstance1184)
ProtoInstance1185 = x3d.ProtoInstance()
ProtoInstance1185.setUSE("hanim_r_metacarpal_phalanx3")

fieldValue1117.addChildren(ProtoInstance1185)
ProtoInstance1186 = x3d.ProtoInstance()
ProtoInstance1186.setUSE("hanim_r_ulnar_styloid_2")

fieldValue1117.addChildren(ProtoInstance1186)
ProtoInstance1187 = x3d.ProtoInstance()
ProtoInstance1187.setUSE("hanim_r_metacarpal_phalanx6")

fieldValue1117.addChildren(ProtoInstance1187)
ProtoInstance1188 = x3d.ProtoInstance()
ProtoInstance1188.setUSE("hanim_r_radial_styloid_2")

fieldValue1117.addChildren(ProtoInstance1188)
ProtoInstance1189 = x3d.ProtoInstance()
ProtoInstance1189.setUSE("hanim_r_olecranon_2")

fieldValue1117.addChildren(ProtoInstance1189)
ProtoInstance1190 = x3d.ProtoInstance()
ProtoInstance1190.setUSE("hanim_r_humeral_medial_epicondyles_2")

fieldValue1117.addChildren(ProtoInstance1190)
ProtoInstance1191 = x3d.ProtoInstance()
ProtoInstance1191.setUSE("hanim_r_radiale_2")

fieldValue1117.addChildren(ProtoInstance1191)
ProtoInstance1192 = x3d.ProtoInstance()
ProtoInstance1192.setUSE("hanim_r_humeral_lateral_epicondyles_2")

fieldValue1117.addChildren(ProtoInstance1192)
ProtoInstance1193 = x3d.ProtoInstance()
ProtoInstance1193.setUSE("hanim_r_clavicale_2")

fieldValue1117.addChildren(ProtoInstance1193)
ProtoInstance1194 = x3d.ProtoInstance()
ProtoInstance1194.setUSE("hanim_r_acromion_2")

fieldValue1117.addChildren(ProtoInstance1194)
ProtoInstance1195 = x3d.ProtoInstance()
ProtoInstance1195.setUSE("hanim_r_axilla_proximal_2")

fieldValue1117.addChildren(ProtoInstance1195)
ProtoInstance1196 = x3d.ProtoInstance()
ProtoInstance1196.setUSE("hanim_r_axilla_distal_2")

fieldValue1117.addChildren(ProtoInstance1196)
ProtoInstance1197 = x3d.ProtoInstance()
ProtoInstance1197.setUSE("hanim_suprasternale_2")

fieldValue1117.addChildren(ProtoInstance1197)
ProtoInstance1198 = x3d.ProtoInstance()
ProtoInstance1198.setUSE("hanim_cervicale_2")

fieldValue1117.addChildren(ProtoInstance1198)
ProtoInstance1199 = x3d.ProtoInstance()
ProtoInstance1199.setUSE("hanim_r_thelion_2")

fieldValue1117.addChildren(ProtoInstance1199)
ProtoInstance1200 = x3d.ProtoInstance()
ProtoInstance1200.setUSE("hanim_l_thelion_2")

fieldValue1117.addChildren(ProtoInstance1200)
ProtoInstance1201 = x3d.ProtoInstance()
ProtoInstance1201.setUSE("hanim_substernale_2")

fieldValue1117.addChildren(ProtoInstance1201)
ProtoInstance1202 = x3d.ProtoInstance()
ProtoInstance1202.setUSE("hanim_r_rib10_2")

fieldValue1117.addChildren(ProtoInstance1202)
ProtoInstance1203 = x3d.ProtoInstance()
ProtoInstance1203.setUSE("hanim_l_rib10_2")

fieldValue1117.addChildren(ProtoInstance1203)
ProtoInstance1204 = x3d.ProtoInstance()
ProtoInstance1204.setUSE("hanim_spine_2_lower_back_2")

fieldValue1117.addChildren(ProtoInstance1204)
ProtoInstance1205 = x3d.ProtoInstance()
ProtoInstance1205.setUSE("hanim_waist_preferred_posterior_2")

fieldValue1117.addChildren(ProtoInstance1205)
ProtoInstance1206 = x3d.ProtoInstance()
ProtoInstance1206.setUSE("hanim_navel_2")

fieldValue1117.addChildren(ProtoInstance1206)

ProtoInstance101.addFieldValue(fieldValue1117)
fieldValue1207 = x3d.fieldValue()
fieldValue1207.setName("segments")
ProtoInstance1208 = x3d.ProtoInstance()
ProtoInstance1208.setUSE("hanim_l_tarsal_distal_phalanx2")

fieldValue1207.addChildren(ProtoInstance1208)
ProtoInstance1209 = x3d.ProtoInstance()
ProtoInstance1209.setUSE("hanim_l_middistal_2")

fieldValue1207.addChildren(ProtoInstance1209)
ProtoInstance1210 = x3d.ProtoInstance()
ProtoInstance1210.setUSE("hanim_l_midproximal_2")

fieldValue1207.addChildren(ProtoInstance1210)
ProtoInstance1211 = x3d.ProtoInstance()
ProtoInstance1211.setUSE("hanim_l_hindfoot_2")

fieldValue1207.addChildren(ProtoInstance1211)
ProtoInstance1212 = x3d.ProtoInstance()
ProtoInstance1212.setUSE("hanim_l_calf_2")

fieldValue1207.addChildren(ProtoInstance1212)
ProtoInstance1213 = x3d.ProtoInstance()
ProtoInstance1213.setUSE("hanim_l_thigh_2")

fieldValue1207.addChildren(ProtoInstance1213)
ProtoInstance1214 = x3d.ProtoInstance()
ProtoInstance1214.setUSE("hanim_r_tarsal_distal_phalanx2")

fieldValue1207.addChildren(ProtoInstance1214)
ProtoInstance1215 = x3d.ProtoInstance()
ProtoInstance1215.setUSE("hanim_r_middistal_2")

fieldValue1207.addChildren(ProtoInstance1215)
ProtoInstance1216 = x3d.ProtoInstance()
ProtoInstance1216.setUSE("hanim_r_midproximal_2")

fieldValue1207.addChildren(ProtoInstance1216)
ProtoInstance1217 = x3d.ProtoInstance()
ProtoInstance1217.setUSE("hanim_r_hindfoot_2")

fieldValue1207.addChildren(ProtoInstance1217)
ProtoInstance1218 = x3d.ProtoInstance()
ProtoInstance1218.setUSE("hanim_r_calf_2")

fieldValue1207.addChildren(ProtoInstance1218)
ProtoInstance1219 = x3d.ProtoInstance()
ProtoInstance1219.setUSE("hanim_r_thigh_2")

fieldValue1207.addChildren(ProtoInstance1219)
ProtoInstance1220 = x3d.ProtoInstance()
ProtoInstance1220.setUSE("hanim_pelvis_2")

fieldValue1207.addChildren(ProtoInstance1220)
ProtoInstance1221 = x3d.ProtoInstance()
ProtoInstance1221.setUSE("hanim_l_eyeball_4")

fieldValue1207.addChildren(ProtoInstance1221)
ProtoInstance1222 = x3d.ProtoInstance()
ProtoInstance1222.setUSE("hanim_r_eyeball_4")

fieldValue1207.addChildren(ProtoInstance1222)
ProtoInstance1223 = x3d.ProtoInstance()
ProtoInstance1223.setUSE("hanim_skull_2")

fieldValue1207.addChildren(ProtoInstance1223)
ProtoInstance1224 = x3d.ProtoInstance()
ProtoInstance1224.setUSE("hanim_c1_2")

fieldValue1207.addChildren(ProtoInstance1224)
ProtoInstance1225 = x3d.ProtoInstance()
ProtoInstance1225.setUSE("hanim_c2_2")

fieldValue1207.addChildren(ProtoInstance1225)
ProtoInstance1226 = x3d.ProtoInstance()
ProtoInstance1226.setUSE("hanim_c3_2")

fieldValue1207.addChildren(ProtoInstance1226)
ProtoInstance1227 = x3d.ProtoInstance()
ProtoInstance1227.setUSE("hanim_c4_2")

fieldValue1207.addChildren(ProtoInstance1227)
ProtoInstance1228 = x3d.ProtoInstance()
ProtoInstance1228.setUSE("hanim_c5_2")

fieldValue1207.addChildren(ProtoInstance1228)
ProtoInstance1229 = x3d.ProtoInstance()
ProtoInstance1229.setUSE("hanim_c6_2")

fieldValue1207.addChildren(ProtoInstance1229)
ProtoInstance1230 = x3d.ProtoInstance()
ProtoInstance1230.setUSE("hanim_c7_2")

fieldValue1207.addChildren(ProtoInstance1230)
ProtoInstance1231 = x3d.ProtoInstance()
ProtoInstance1231.setUSE("hanim_l_carpal_distal_phalanx2")

fieldValue1207.addChildren(ProtoInstance1231)
ProtoInstance1232 = x3d.ProtoInstance()
ProtoInstance1232.setUSE("hanim_l_index_proximal_6")

fieldValue1207.addChildren(ProtoInstance1232)
ProtoInstance1233 = x3d.ProtoInstance()
ProtoInstance1233.setUSE("hanim_l_index_proximal_6")

fieldValue1207.addChildren(ProtoInstance1233)
ProtoInstance1234 = x3d.ProtoInstance()
ProtoInstance1234.setUSE("hanim_l_carpal_distal_phalanx3")

fieldValue1207.addChildren(ProtoInstance1234)
ProtoInstance1235 = x3d.ProtoInstance()
ProtoInstance1235.setUSE("hanim_l_index_middle_2")

fieldValue1207.addChildren(ProtoInstance1235)
ProtoInstance1236 = x3d.ProtoInstance()
ProtoInstance1236.setUSE("hanim_l_index_proximal_6")

fieldValue1207.addChildren(ProtoInstance1236)
ProtoInstance1237 = x3d.ProtoInstance()
ProtoInstance1237.setUSE("hanim_l_index_metacarpal_2")

fieldValue1207.addChildren(ProtoInstance1237)
ProtoInstance1238 = x3d.ProtoInstance()
ProtoInstance1238.setUSE("hanim_l_carpal_distal_phalanx4")

fieldValue1207.addChildren(ProtoInstance1238)
ProtoInstance1239 = x3d.ProtoInstance()
ProtoInstance1239.setUSE("hanim_l_middle_middle_2")

fieldValue1207.addChildren(ProtoInstance1239)
ProtoInstance1240 = x3d.ProtoInstance()
ProtoInstance1240.setUSE("hanim_l_middle_proximal_2")

fieldValue1207.addChildren(ProtoInstance1240)
ProtoInstance1241 = x3d.ProtoInstance()
ProtoInstance1241.setUSE("hanim_l_middle_metacarpal_2")

fieldValue1207.addChildren(ProtoInstance1241)
ProtoInstance1242 = x3d.ProtoInstance()
ProtoInstance1242.setUSE("hanim_l_carpal_distal_phalanx5")

fieldValue1207.addChildren(ProtoInstance1242)
ProtoInstance1243 = x3d.ProtoInstance()
ProtoInstance1243.setUSE("hanim_l_ring_middle_2")

fieldValue1207.addChildren(ProtoInstance1243)
ProtoInstance1244 = x3d.ProtoInstance()
ProtoInstance1244.setUSE("hanim_l_ring_proximal_2")

fieldValue1207.addChildren(ProtoInstance1244)
ProtoInstance1245 = x3d.ProtoInstance()
ProtoInstance1245.setUSE("hanim_l_ring_metacarpal_2")

fieldValue1207.addChildren(ProtoInstance1245)
ProtoInstance1246 = x3d.ProtoInstance()
ProtoInstance1246.setUSE("hanim_l_carpal_distal_phalanx6")

fieldValue1207.addChildren(ProtoInstance1246)
ProtoInstance1247 = x3d.ProtoInstance()
ProtoInstance1247.setUSE("hanim_l_pinky_middle_2")

fieldValue1207.addChildren(ProtoInstance1247)
ProtoInstance1248 = x3d.ProtoInstance()
ProtoInstance1248.setUSE("hanim_l_pinky_proximal_2")

fieldValue1207.addChildren(ProtoInstance1248)
ProtoInstance1249 = x3d.ProtoInstance()
ProtoInstance1249.setUSE("hanim_l_pinky_metacarpal_2")

fieldValue1207.addChildren(ProtoInstance1249)
ProtoInstance1250 = x3d.ProtoInstance()
ProtoInstance1250.setUSE("hanim_l_hand_2")

fieldValue1207.addChildren(ProtoInstance1250)
ProtoInstance1251 = x3d.ProtoInstance()
ProtoInstance1251.setUSE("hanim_l_forearm_2")

fieldValue1207.addChildren(ProtoInstance1251)
ProtoInstance1252 = x3d.ProtoInstance()
ProtoInstance1252.setUSE("hanim_l_upperarm_2")

fieldValue1207.addChildren(ProtoInstance1252)
ProtoInstance1253 = x3d.ProtoInstance()
ProtoInstance1253.setUSE("hanim_l_scapula_2")

fieldValue1207.addChildren(ProtoInstance1253)
ProtoInstance1254 = x3d.ProtoInstance()
ProtoInstance1254.setUSE("hanim_l_clavicle_2")

fieldValue1207.addChildren(ProtoInstance1254)
ProtoInstance1255 = x3d.ProtoInstance()
ProtoInstance1255.setUSE("hanim_r_carpal_distal_phalanx2")

fieldValue1207.addChildren(ProtoInstance1255)
ProtoInstance1256 = x3d.ProtoInstance()
ProtoInstance1256.setUSE("hanim_r_index_proximal_6")

fieldValue1207.addChildren(ProtoInstance1256)
ProtoInstance1257 = x3d.ProtoInstance()
ProtoInstance1257.setUSE("hanim_r_index_proximal_6")

fieldValue1207.addChildren(ProtoInstance1257)
ProtoInstance1258 = x3d.ProtoInstance()
ProtoInstance1258.setUSE("hanim_r_carpal_distal_phalanx3")

fieldValue1207.addChildren(ProtoInstance1258)
ProtoInstance1259 = x3d.ProtoInstance()
ProtoInstance1259.setUSE("hanim_r_index_middle_2")

fieldValue1207.addChildren(ProtoInstance1259)
ProtoInstance1260 = x3d.ProtoInstance()
ProtoInstance1260.setUSE("hanim_r_index_proximal_6")

fieldValue1207.addChildren(ProtoInstance1260)
ProtoInstance1261 = x3d.ProtoInstance()
ProtoInstance1261.setUSE("hanim_r_index_metacarpal_2")

fieldValue1207.addChildren(ProtoInstance1261)
ProtoInstance1262 = x3d.ProtoInstance()
ProtoInstance1262.setUSE("hanim_r_carpal_distal_phalanx4")

fieldValue1207.addChildren(ProtoInstance1262)
ProtoInstance1263 = x3d.ProtoInstance()
ProtoInstance1263.setUSE("hanim_r_middle_middle_2")

fieldValue1207.addChildren(ProtoInstance1263)
ProtoInstance1264 = x3d.ProtoInstance()
ProtoInstance1264.setUSE("hanim_r_middle_proximal_2")

fieldValue1207.addChildren(ProtoInstance1264)
ProtoInstance1265 = x3d.ProtoInstance()
ProtoInstance1265.setUSE("hanim_r_middle_metacarpal_2")

fieldValue1207.addChildren(ProtoInstance1265)
ProtoInstance1266 = x3d.ProtoInstance()
ProtoInstance1266.setUSE("hanim_r_carpal_distal_phalanx5")

fieldValue1207.addChildren(ProtoInstance1266)
ProtoInstance1267 = x3d.ProtoInstance()
ProtoInstance1267.setUSE("hanim_r_ring_middle_2")

fieldValue1207.addChildren(ProtoInstance1267)
ProtoInstance1268 = x3d.ProtoInstance()
ProtoInstance1268.setUSE("hanim_r_ring_proximal_2")

fieldValue1207.addChildren(ProtoInstance1268)
ProtoInstance1269 = x3d.ProtoInstance()
ProtoInstance1269.setUSE("hanim_r_ring_metacarpal_2")

fieldValue1207.addChildren(ProtoInstance1269)
ProtoInstance1270 = x3d.ProtoInstance()
ProtoInstance1270.setUSE("hanim_r_carpal_distal_phalanx6")

fieldValue1207.addChildren(ProtoInstance1270)
ProtoInstance1271 = x3d.ProtoInstance()
ProtoInstance1271.setUSE("hanim_r_pinky_middle_2")

fieldValue1207.addChildren(ProtoInstance1271)
ProtoInstance1272 = x3d.ProtoInstance()
ProtoInstance1272.setUSE("hanim_r_pinky_proximal_2")

fieldValue1207.addChildren(ProtoInstance1272)
ProtoInstance1273 = x3d.ProtoInstance()
ProtoInstance1273.setUSE("hanim_r_pinky_metacarpal_2")

fieldValue1207.addChildren(ProtoInstance1273)
ProtoInstance1274 = x3d.ProtoInstance()
ProtoInstance1274.setUSE("hanim_r_hand_2")

fieldValue1207.addChildren(ProtoInstance1274)
ProtoInstance1275 = x3d.ProtoInstance()
ProtoInstance1275.setUSE("hanim_r_forearm_2")

fieldValue1207.addChildren(ProtoInstance1275)
ProtoInstance1276 = x3d.ProtoInstance()
ProtoInstance1276.setUSE("hanim_r_upperarm_2")

fieldValue1207.addChildren(ProtoInstance1276)
ProtoInstance1277 = x3d.ProtoInstance()
ProtoInstance1277.setUSE("hanim_r_scapula_2")

fieldValue1207.addChildren(ProtoInstance1277)
ProtoInstance1278 = x3d.ProtoInstance()
ProtoInstance1278.setUSE("hanim_r_clavicle_2")

fieldValue1207.addChildren(ProtoInstance1278)
ProtoInstance1279 = x3d.ProtoInstance()
ProtoInstance1279.setUSE("hanim_t1_2")

fieldValue1207.addChildren(ProtoInstance1279)
ProtoInstance1280 = x3d.ProtoInstance()
ProtoInstance1280.setUSE("hanim_t2_2")

fieldValue1207.addChildren(ProtoInstance1280)
ProtoInstance1281 = x3d.ProtoInstance()
ProtoInstance1281.setUSE("hanim_t3_2")

fieldValue1207.addChildren(ProtoInstance1281)
ProtoInstance1282 = x3d.ProtoInstance()
ProtoInstance1282.setUSE("hanim_t4_2")

fieldValue1207.addChildren(ProtoInstance1282)
ProtoInstance1283 = x3d.ProtoInstance()
ProtoInstance1283.setUSE("hanim_t5_2")

fieldValue1207.addChildren(ProtoInstance1283)
ProtoInstance1284 = x3d.ProtoInstance()
ProtoInstance1284.setUSE("hanim_t6_2")

fieldValue1207.addChildren(ProtoInstance1284)
ProtoInstance1285 = x3d.ProtoInstance()
ProtoInstance1285.setUSE("hanim_t7_2")

fieldValue1207.addChildren(ProtoInstance1285)
ProtoInstance1286 = x3d.ProtoInstance()
ProtoInstance1286.setUSE("hanim_t8_2")

fieldValue1207.addChildren(ProtoInstance1286)
ProtoInstance1287 = x3d.ProtoInstance()
ProtoInstance1287.setUSE("hanim_t9_2")

fieldValue1207.addChildren(ProtoInstance1287)
ProtoInstance1288 = x3d.ProtoInstance()
ProtoInstance1288.setUSE("hanim_t10_2")

fieldValue1207.addChildren(ProtoInstance1288)
ProtoInstance1289 = x3d.ProtoInstance()
ProtoInstance1289.setUSE("hanim_t11_2")

fieldValue1207.addChildren(ProtoInstance1289)
ProtoInstance1290 = x3d.ProtoInstance()
ProtoInstance1290.setUSE("hanim_t12_2")

fieldValue1207.addChildren(ProtoInstance1290)
ProtoInstance1291 = x3d.ProtoInstance()
ProtoInstance1291.setUSE("hanim_l1_2")

fieldValue1207.addChildren(ProtoInstance1291)
ProtoInstance1292 = x3d.ProtoInstance()
ProtoInstance1292.setUSE("hanim_l2_2")

fieldValue1207.addChildren(ProtoInstance1292)
ProtoInstance1293 = x3d.ProtoInstance()
ProtoInstance1293.setUSE("hanim_l3_2")

fieldValue1207.addChildren(ProtoInstance1293)
ProtoInstance1294 = x3d.ProtoInstance()
ProtoInstance1294.setUSE("hanim_l4_2")

fieldValue1207.addChildren(ProtoInstance1294)
ProtoInstance1295 = x3d.ProtoInstance()
ProtoInstance1295.setUSE("hanim_l5_2")

fieldValue1207.addChildren(ProtoInstance1295)
ProtoInstance1296 = x3d.ProtoInstance()
ProtoInstance1296.setUSE("hanim_sacrum_2")

fieldValue1207.addChildren(ProtoInstance1296)

ProtoInstance101.addFieldValue(fieldValue1207)
fieldValue1297 = x3d.fieldValue()
fieldValue1297.setName("name")
fieldValue1297.setValue("humanoid")

ProtoInstance101.addFieldValue(fieldValue1297)
fieldValue1298 = x3d.fieldValue()
fieldValue1298.setName("info")
fieldValue1298.setValue("\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;4\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"")

ProtoInstance101.addFieldValue(fieldValue1298)

Scene4.addChildren(ProtoInstance101)
Group1299 = x3d.Group()
Group1299.setDEF("JointCenters_WorldInfo")
WorldInfo1300 = x3d.WorldInfo()
WorldInfo1300.setTitle("HANIM 200x Default Joint Centers, LOA&#8209;4")
WorldInfo1300.setInfo([" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 --------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "])

Group1299.addChildren(WorldInfo1300)

Scene4.addChildren(Group1299)
NavigationInfo1301 = x3d.NavigationInfo()
NavigationInfo1301.setAvatarSize([0.25,1.60000002384186,0.75])
NavigationInfo1301.setSpeed(1.5)

Scene4.addChildren(NavigationInfo1301)

X3D0.setScene(Scene4)
X3D0.toFileX3D("../data/LOA4ExampleSourceInVRML_RoundTrip.x3d")
