import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("3.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("generator")
meta2.setContent("tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("source")
meta3.setContent("LOA1ExampleSourceInVRML.wrl")

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
ProtoInstance101.setDEF("humanoid")
fieldValue102 = x3d.fieldValue()
fieldValue102.setName("humanoidBody")
ProtoInstance103 = x3d.ProtoInstance()
ProtoInstance103.setName("Joint")
ProtoInstance103.setDEF("hanim_humanoid_root")
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
fieldValue106.setValue("0 0.8240000009536743 0.027699999511241913")

ProtoInstance103.addFieldValue(fieldValue106)
fieldValue107 = x3d.fieldValue()
fieldValue107.setName("children")
ProtoInstance108 = x3d.ProtoInstance()
ProtoInstance108.setName("Joint")
ProtoInstance108.setDEF("hanim_sacroiliac")
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
fieldValue111.setValue("0 0.914900004863739 0.0015999999595806003")

ProtoInstance108.addFieldValue(fieldValue111)
fieldValue112 = x3d.fieldValue()
fieldValue112.setName("children")
ProtoInstance113 = x3d.ProtoInstance()
ProtoInstance113.setName("Joint")
ProtoInstance113.setDEF("hanim_l_hip")
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
fieldValue116.setValue("0.09610000252723694 0.9124000072479248 -0.00009999999747378752")

ProtoInstance113.addFieldValue(fieldValue116)
fieldValue117 = x3d.fieldValue()
fieldValue117.setName("children")
ProtoInstance118 = x3d.ProtoInstance()
ProtoInstance118.setName("Joint")
ProtoInstance118.setDEF("hanim_l_knee")
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
fieldValue121.setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995")

ProtoInstance118.addFieldValue(fieldValue121)
fieldValue122 = x3d.fieldValue()
fieldValue122.setName("children")
ProtoInstance123 = x3d.ProtoInstance()
ProtoInstance123.setName("Joint")
ProtoInstance123.setDEF("hanim_l_talocrural")
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
fieldValue126.setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727")

ProtoInstance123.addFieldValue(fieldValue126)
fieldValue127 = x3d.fieldValue()
fieldValue127.setName("children")
ProtoInstance128 = x3d.ProtoInstance()
ProtoInstance128.setName("Joint")
ProtoInstance128.setDEF("hanim_l_metatarsophalangeal_")
fieldValue129 = x3d.fieldValue()
fieldValue129.setName("stiffness")
fieldValue129.setValue("1 1 1")

ProtoInstance128.addFieldValue(fieldValue129)
fieldValue130 = x3d.fieldValue()
fieldValue130.setName("name")
fieldValue130.setValue("l_metatarsophalangeal_")

ProtoInstance128.addFieldValue(fieldValue130)
fieldValue131 = x3d.fieldValue()
fieldValue131.setName("center")
fieldValue131.setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363")

ProtoInstance128.addFieldValue(fieldValue131)
fieldValue132 = x3d.fieldValue()
fieldValue132.setName("children")
ProtoInstance133 = x3d.ProtoInstance()
ProtoInstance133.setName("Segment")
ProtoInstance133.setDEF("hanim_l_middistal")
fieldValue134 = x3d.fieldValue()
fieldValue134.setName("name")
fieldValue134.setValue("l_middistal")

ProtoInstance133.addFieldValue(fieldValue134)
fieldValue135 = x3d.fieldValue()
fieldValue135.setName("children")
ProtoInstance136 = x3d.ProtoInstance()
ProtoInstance136.setName("Site")
ProtoInstance136.setDEF("hanim_l_middistal_tip")
fieldValue137 = x3d.fieldValue()
fieldValue137.setName("name")
fieldValue137.setValue("l_middistal_tip")

ProtoInstance136.addFieldValue(fieldValue137)
fieldValue138 = x3d.fieldValue()
fieldValue138.setName("translation")
fieldValue138.setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261")

ProtoInstance136.addFieldValue(fieldValue138)

fieldValue135.addChildren(ProtoInstance136)
ProtoInstance139 = x3d.ProtoInstance()
ProtoInstance139.setName("Site")
ProtoInstance139.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue140 = x3d.fieldValue()
fieldValue140.setName("name")
fieldValue140.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance139.addFieldValue(fieldValue140)
fieldValue141 = x3d.fieldValue()
fieldValue141.setName("translation")
fieldValue141.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance139.addFieldValue(fieldValue141)

fieldValue135.addChildren(ProtoInstance139)
ProtoInstance142 = x3d.ProtoInstance()
ProtoInstance142.setName("Site")
ProtoInstance142.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue143 = x3d.fieldValue()
fieldValue143.setName("name")
fieldValue143.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance142.addFieldValue(fieldValue143)
fieldValue144 = x3d.fieldValue()
fieldValue144.setName("translation")
fieldValue144.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance142.addFieldValue(fieldValue144)

fieldValue135.addChildren(ProtoInstance142)
ProtoInstance145 = x3d.ProtoInstance()
ProtoInstance145.setName("Site")
ProtoInstance145.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue146 = x3d.fieldValue()
fieldValue146.setName("name")
fieldValue146.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance145.addFieldValue(fieldValue146)
fieldValue147 = x3d.fieldValue()
fieldValue147.setName("translation")
fieldValue147.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance145.addFieldValue(fieldValue147)

fieldValue135.addChildren(ProtoInstance145)

ProtoInstance133.addFieldValue(fieldValue135)

fieldValue132.addChildren(ProtoInstance133)

ProtoInstance128.addFieldValue(fieldValue132)

fieldValue127.addChildren(ProtoInstance128)
ProtoInstance148 = x3d.ProtoInstance()
ProtoInstance148.setName("Segment")
ProtoInstance148.setDEF("hanim_l_hindfoot")
fieldValue149 = x3d.fieldValue()
fieldValue149.setName("name")
fieldValue149.setValue("l_hindfoot")

ProtoInstance148.addFieldValue(fieldValue149)
fieldValue150 = x3d.fieldValue()
fieldValue150.setName("children")
ProtoInstance151 = x3d.ProtoInstance()
ProtoInstance151.setName("Site")
ProtoInstance151.setDEF("hanim_l_lateral_malleolus")
fieldValue152 = x3d.fieldValue()
fieldValue152.setName("name")
fieldValue152.setValue("l_lateral_malleolus")

ProtoInstance151.addFieldValue(fieldValue152)
fieldValue153 = x3d.fieldValue()
fieldValue153.setName("translation")
fieldValue153.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance151.addFieldValue(fieldValue153)

fieldValue150.addChildren(ProtoInstance151)
ProtoInstance154 = x3d.ProtoInstance()
ProtoInstance154.setName("Site")
ProtoInstance154.setDEF("hanim_l_medial_malleolus")
fieldValue155 = x3d.fieldValue()
fieldValue155.setName("name")
fieldValue155.setValue("l_medial_malleolus")

ProtoInstance154.addFieldValue(fieldValue155)
fieldValue156 = x3d.fieldValue()
fieldValue156.setName("translation")
fieldValue156.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance154.addFieldValue(fieldValue156)

fieldValue150.addChildren(ProtoInstance154)
ProtoInstance157 = x3d.ProtoInstance()
ProtoInstance157.setName("Site")
ProtoInstance157.setDEF("hanim_l_sphyrion")
fieldValue158 = x3d.fieldValue()
fieldValue158.setName("name")
fieldValue158.setValue("l_sphyrion")

ProtoInstance157.addFieldValue(fieldValue158)
fieldValue159 = x3d.fieldValue()
fieldValue159.setName("translation")
fieldValue159.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance157.addFieldValue(fieldValue159)

fieldValue150.addChildren(ProtoInstance157)
ProtoInstance160 = x3d.ProtoInstance()
ProtoInstance160.setName("Site")
ProtoInstance160.setDEF("hanim_l_calcaneus_posterior")
fieldValue161 = x3d.fieldValue()
fieldValue161.setName("name")
fieldValue161.setValue("l_calcaneus_posterior")

ProtoInstance160.addFieldValue(fieldValue161)
fieldValue162 = x3d.fieldValue()
fieldValue162.setName("translation")
fieldValue162.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance160.addFieldValue(fieldValue162)

fieldValue150.addChildren(ProtoInstance160)

ProtoInstance148.addFieldValue(fieldValue150)

fieldValue127.addChildren(ProtoInstance148)

ProtoInstance123.addFieldValue(fieldValue127)

fieldValue122.addChildren(ProtoInstance123)
ProtoInstance163 = x3d.ProtoInstance()
ProtoInstance163.setName("Segment")
ProtoInstance163.setDEF("hanim_l_calf")
fieldValue164 = x3d.fieldValue()
fieldValue164.setName("name")
fieldValue164.setValue("l_calf")

ProtoInstance163.addFieldValue(fieldValue164)

fieldValue122.addChildren(ProtoInstance163)

ProtoInstance118.addFieldValue(fieldValue122)

fieldValue117.addChildren(ProtoInstance118)
ProtoInstance165 = x3d.ProtoInstance()
ProtoInstance165.setName("Segment")
ProtoInstance165.setDEF("hanim_l_thigh")
fieldValue166 = x3d.fieldValue()
fieldValue166.setName("name")
fieldValue166.setValue("l_thigh")

ProtoInstance165.addFieldValue(fieldValue166)
fieldValue167 = x3d.fieldValue()
fieldValue167.setName("children")
ProtoInstance168 = x3d.ProtoInstance()
ProtoInstance168.setName("Site")
ProtoInstance168.setDEF("hanim_l_knee_crease")
fieldValue169 = x3d.fieldValue()
fieldValue169.setName("name")
fieldValue169.setValue("l_knee_crease")

ProtoInstance168.addFieldValue(fieldValue169)
fieldValue170 = x3d.fieldValue()
fieldValue170.setName("translation")
fieldValue170.setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757")

ProtoInstance168.addFieldValue(fieldValue170)

fieldValue167.addChildren(ProtoInstance168)
ProtoInstance171 = x3d.ProtoInstance()
ProtoInstance171.setName("Site")
ProtoInstance171.setDEF("hanim_l_femoral_lateral_epicondyles")
fieldValue172 = x3d.fieldValue()
fieldValue172.setName("name")
fieldValue172.setValue("l_femoral_lateral_epicondyles")

ProtoInstance171.addFieldValue(fieldValue172)
fieldValue173 = x3d.fieldValue()
fieldValue173.setName("translation")
fieldValue173.setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746")

ProtoInstance171.addFieldValue(fieldValue173)

fieldValue167.addChildren(ProtoInstance171)
ProtoInstance174 = x3d.ProtoInstance()
ProtoInstance174.setName("Site")
ProtoInstance174.setDEF("hanim_l_femoral_medial_epicondyles")
fieldValue175 = x3d.fieldValue()
fieldValue175.setName("name")
fieldValue175.setValue("l_femoral_lateral_epicondyles")

ProtoInstance174.addFieldValue(fieldValue175)
fieldValue176 = x3d.fieldValue()
fieldValue176.setName("translation")
fieldValue176.setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183")

ProtoInstance174.addFieldValue(fieldValue176)

fieldValue167.addChildren(ProtoInstance174)

ProtoInstance165.addFieldValue(fieldValue167)

fieldValue117.addChildren(ProtoInstance165)

ProtoInstance113.addFieldValue(fieldValue117)

fieldValue112.addChildren(ProtoInstance113)
ProtoInstance177 = x3d.ProtoInstance()
ProtoInstance177.setName("Joint")
ProtoInstance177.setDEF("hanim_r_hip")
fieldValue178 = x3d.fieldValue()
fieldValue178.setName("stiffness")
fieldValue178.setValue("1 1 1")

ProtoInstance177.addFieldValue(fieldValue178)
fieldValue179 = x3d.fieldValue()
fieldValue179.setName("name")
fieldValue179.setValue("r_hip")

ProtoInstance177.addFieldValue(fieldValue179)
fieldValue180 = x3d.fieldValue()
fieldValue180.setName("center")
fieldValue180.setValue("-0.0949999988079071 0.9171000123023987 0.002899999963119626")

ProtoInstance177.addFieldValue(fieldValue180)
fieldValue181 = x3d.fieldValue()
fieldValue181.setName("children")
ProtoInstance182 = x3d.ProtoInstance()
ProtoInstance182.setName("Joint")
ProtoInstance182.setDEF("hanim_r_knee")
fieldValue183 = x3d.fieldValue()
fieldValue183.setName("stiffness")
fieldValue183.setValue("1 1 1")

ProtoInstance182.addFieldValue(fieldValue183)
fieldValue184 = x3d.fieldValue()
fieldValue184.setName("name")
fieldValue184.setValue("r_knee")

ProtoInstance182.addFieldValue(fieldValue184)
fieldValue185 = x3d.fieldValue()
fieldValue185.setName("center")
fieldValue185.setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492")

ProtoInstance182.addFieldValue(fieldValue185)
fieldValue186 = x3d.fieldValue()
fieldValue186.setName("children")
ProtoInstance187 = x3d.ProtoInstance()
ProtoInstance187.setName("Joint")
ProtoInstance187.setDEF("hanim_r_talocrural")
fieldValue188 = x3d.fieldValue()
fieldValue188.setName("stiffness")
fieldValue188.setValue("1 1 1")

ProtoInstance187.addFieldValue(fieldValue188)
fieldValue189 = x3d.fieldValue()
fieldValue189.setName("name")
fieldValue189.setValue("r_talocrural")

ProtoInstance187.addFieldValue(fieldValue189)
fieldValue190 = x3d.fieldValue()
fieldValue190.setName("center")
fieldValue190.setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044")

ProtoInstance187.addFieldValue(fieldValue190)
fieldValue191 = x3d.fieldValue()
fieldValue191.setName("children")
ProtoInstance192 = x3d.ProtoInstance()
ProtoInstance192.setName("Joint")
ProtoInstance192.setDEF("hanim_r_metatarsophalangeal_")
fieldValue193 = x3d.fieldValue()
fieldValue193.setName("stiffness")
fieldValue193.setValue("1 1 1")

ProtoInstance192.addFieldValue(fieldValue193)
fieldValue194 = x3d.fieldValue()
fieldValue194.setName("name")
fieldValue194.setValue("r_metatarsophalangeal_")

ProtoInstance192.addFieldValue(fieldValue194)
fieldValue195 = x3d.fieldValue()
fieldValue195.setName("center")
fieldValue195.setValue("-0.08009999990463257 0 0.03680000081658363")

ProtoInstance192.addFieldValue(fieldValue195)
fieldValue196 = x3d.fieldValue()
fieldValue196.setName("children")
ProtoInstance197 = x3d.ProtoInstance()
ProtoInstance197.setName("Segment")
ProtoInstance197.setDEF("hanim_r_middistal")
fieldValue198 = x3d.fieldValue()
fieldValue198.setName("name")
fieldValue198.setValue("r_middistal")

ProtoInstance197.addFieldValue(fieldValue198)
fieldValue199 = x3d.fieldValue()
fieldValue199.setName("children")
ProtoInstance200 = x3d.ProtoInstance()
ProtoInstance200.setName("Site")
ProtoInstance200.setDEF("hanim_r_middistal_tip")
fieldValue201 = x3d.fieldValue()
fieldValue201.setName("name")
fieldValue201.setValue("r_middistal_tip")

ProtoInstance200.addFieldValue(fieldValue201)
fieldValue202 = x3d.fieldValue()
fieldValue202.setName("translation")
fieldValue202.setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")

ProtoInstance200.addFieldValue(fieldValue202)

fieldValue199.addChildren(ProtoInstance200)
ProtoInstance203 = x3d.ProtoInstance()
ProtoInstance203.setName("Site")
ProtoInstance203.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue204 = x3d.fieldValue()
fieldValue204.setName("name")
fieldValue204.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance203.addFieldValue(fieldValue204)
fieldValue205 = x3d.fieldValue()
fieldValue205.setName("translation")
fieldValue205.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance203.addFieldValue(fieldValue205)

fieldValue199.addChildren(ProtoInstance203)
ProtoInstance206 = x3d.ProtoInstance()
ProtoInstance206.setName("Site")
ProtoInstance206.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue207 = x3d.fieldValue()
fieldValue207.setName("name")
fieldValue207.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance206.addFieldValue(fieldValue207)
fieldValue208 = x3d.fieldValue()
fieldValue208.setName("translation")
fieldValue208.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance206.addFieldValue(fieldValue208)

fieldValue199.addChildren(ProtoInstance206)
ProtoInstance209 = x3d.ProtoInstance()
ProtoInstance209.setName("Site")
ProtoInstance209.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue210 = x3d.fieldValue()
fieldValue210.setName("name")
fieldValue210.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance209.addFieldValue(fieldValue210)
fieldValue211 = x3d.fieldValue()
fieldValue211.setName("translation")
fieldValue211.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance209.addFieldValue(fieldValue211)

fieldValue199.addChildren(ProtoInstance209)

ProtoInstance197.addFieldValue(fieldValue199)

fieldValue196.addChildren(ProtoInstance197)

ProtoInstance192.addFieldValue(fieldValue196)

fieldValue191.addChildren(ProtoInstance192)
ProtoInstance212 = x3d.ProtoInstance()
ProtoInstance212.setName("Segment")
ProtoInstance212.setDEF("hanim_r_hindfoot")
fieldValue213 = x3d.fieldValue()
fieldValue213.setName("name")
fieldValue213.setValue("r_hindfoot")

ProtoInstance212.addFieldValue(fieldValue213)
fieldValue214 = x3d.fieldValue()
fieldValue214.setName("children")
ProtoInstance215 = x3d.ProtoInstance()
ProtoInstance215.setName("Site")
ProtoInstance215.setDEF("hanim_r_lateral_malleolus")
fieldValue216 = x3d.fieldValue()
fieldValue216.setName("name")
fieldValue216.setValue("r_lateral_malleolus")

ProtoInstance215.addFieldValue(fieldValue216)
fieldValue217 = x3d.fieldValue()
fieldValue217.setName("translation")
fieldValue217.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance215.addFieldValue(fieldValue217)

fieldValue214.addChildren(ProtoInstance215)
ProtoInstance218 = x3d.ProtoInstance()
ProtoInstance218.setName("Site")
ProtoInstance218.setDEF("hanim_r_medial_malleolus")
fieldValue219 = x3d.fieldValue()
fieldValue219.setName("name")
fieldValue219.setValue("r_medial_malleolus")

ProtoInstance218.addFieldValue(fieldValue219)
fieldValue220 = x3d.fieldValue()
fieldValue220.setName("translation")
fieldValue220.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance218.addFieldValue(fieldValue220)

fieldValue214.addChildren(ProtoInstance218)
ProtoInstance221 = x3d.ProtoInstance()
ProtoInstance221.setName("Site")
ProtoInstance221.setDEF("hanim_r_sphyrion")
fieldValue222 = x3d.fieldValue()
fieldValue222.setName("name")
fieldValue222.setValue("r_sphyrion")

ProtoInstance221.addFieldValue(fieldValue222)
fieldValue223 = x3d.fieldValue()
fieldValue223.setName("translation")
fieldValue223.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance221.addFieldValue(fieldValue223)

fieldValue214.addChildren(ProtoInstance221)
ProtoInstance224 = x3d.ProtoInstance()
ProtoInstance224.setName("Site")
ProtoInstance224.setDEF("hanim_r_calcaneus_posterior")
fieldValue225 = x3d.fieldValue()
fieldValue225.setName("name")
fieldValue225.setValue("r_calcaneus_posterior")

ProtoInstance224.addFieldValue(fieldValue225)
fieldValue226 = x3d.fieldValue()
fieldValue226.setName("translation")
fieldValue226.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance224.addFieldValue(fieldValue226)

fieldValue214.addChildren(ProtoInstance224)

ProtoInstance212.addFieldValue(fieldValue214)

fieldValue191.addChildren(ProtoInstance212)

ProtoInstance187.addFieldValue(fieldValue191)

fieldValue186.addChildren(ProtoInstance187)
ProtoInstance227 = x3d.ProtoInstance()
ProtoInstance227.setName("Segment")
ProtoInstance227.setDEF("hanim_r_calf")
fieldValue228 = x3d.fieldValue()
fieldValue228.setName("name")
fieldValue228.setValue("r_calf")

ProtoInstance227.addFieldValue(fieldValue228)

fieldValue186.addChildren(ProtoInstance227)

ProtoInstance182.addFieldValue(fieldValue186)

fieldValue181.addChildren(ProtoInstance182)
ProtoInstance229 = x3d.ProtoInstance()
ProtoInstance229.setName("Segment")
ProtoInstance229.setDEF("hanim_r_thigh")
fieldValue230 = x3d.fieldValue()
fieldValue230.setName("name")
fieldValue230.setValue("r_thigh")

ProtoInstance229.addFieldValue(fieldValue230)
fieldValue231 = x3d.fieldValue()
fieldValue231.setName("children")
ProtoInstance232 = x3d.ProtoInstance()
ProtoInstance232.setName("Site")
ProtoInstance232.setDEF("hanim_r_knee_crease")
fieldValue233 = x3d.fieldValue()
fieldValue233.setName("name")
fieldValue233.setValue("r_knee_crease")

ProtoInstance232.addFieldValue(fieldValue233)
fieldValue234 = x3d.fieldValue()
fieldValue234.setName("translation")
fieldValue234.setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")

ProtoInstance232.addFieldValue(fieldValue234)

fieldValue231.addChildren(ProtoInstance232)
ProtoInstance235 = x3d.ProtoInstance()
ProtoInstance235.setName("Site")
ProtoInstance235.setDEF("hanim_r_femoral_lateral_epicondyles")
fieldValue236 = x3d.fieldValue()
fieldValue236.setName("name")
fieldValue236.setValue("r_femoral_lateral_epicondyles")

ProtoInstance235.addFieldValue(fieldValue236)
fieldValue237 = x3d.fieldValue()
fieldValue237.setName("translation")
fieldValue237.setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052")

ProtoInstance235.addFieldValue(fieldValue237)

fieldValue231.addChildren(ProtoInstance235)
ProtoInstance238 = x3d.ProtoInstance()
ProtoInstance238.setName("Site")
ProtoInstance238.setDEF("hanim_r_femoral_medial_epicondyles")
fieldValue239 = x3d.fieldValue()
fieldValue239.setName("name")
fieldValue239.setValue("r_femoral_lateral_epicondyles")

ProtoInstance238.addFieldValue(fieldValue239)
fieldValue240 = x3d.fieldValue()
fieldValue240.setName("translation")
fieldValue240.setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821")

ProtoInstance238.addFieldValue(fieldValue240)

fieldValue231.addChildren(ProtoInstance238)

ProtoInstance229.addFieldValue(fieldValue231)

fieldValue181.addChildren(ProtoInstance229)

ProtoInstance177.addFieldValue(fieldValue181)

fieldValue112.addChildren(ProtoInstance177)
ProtoInstance241 = x3d.ProtoInstance()
ProtoInstance241.setName("Segment")
ProtoInstance241.setDEF("hanim_pelvis")
fieldValue242 = x3d.fieldValue()
fieldValue242.setName("name")
fieldValue242.setValue("pelvis")

ProtoInstance241.addFieldValue(fieldValue242)

fieldValue112.addChildren(ProtoInstance241)

ProtoInstance108.addFieldValue(fieldValue112)

fieldValue107.addChildren(ProtoInstance108)
ProtoInstance243 = x3d.ProtoInstance()
ProtoInstance243.setName("Joint")
ProtoInstance243.setDEF("hanim_vl5")
fieldValue244 = x3d.fieldValue()
fieldValue244.setName("stiffness")
fieldValue244.setValue("1 1 1")

ProtoInstance243.addFieldValue(fieldValue244)
fieldValue245 = x3d.fieldValue()
fieldValue245.setName("name")
fieldValue245.setValue("vl5")

ProtoInstance243.addFieldValue(fieldValue245)
fieldValue246 = x3d.fieldValue()
fieldValue246.setName("center")
fieldValue246.setValue("0.00279999990016222 1.0568000078201294 -0.07760000228881836")

ProtoInstance243.addFieldValue(fieldValue246)
fieldValue247 = x3d.fieldValue()
fieldValue247.setName("children")
ProtoInstance248 = x3d.ProtoInstance()
ProtoInstance248.setName("Joint")
ProtoInstance248.setDEF("hanim_skullbase")
fieldValue249 = x3d.fieldValue()
fieldValue249.setName("stiffness")
fieldValue249.setValue("1 1 1")

ProtoInstance248.addFieldValue(fieldValue249)
fieldValue250 = x3d.fieldValue()
fieldValue250.setName("name")
fieldValue250.setValue("skullbase")

ProtoInstance248.addFieldValue(fieldValue250)
fieldValue251 = x3d.fieldValue()
fieldValue251.setName("center")
fieldValue251.setValue("0.004399999976158142 1.62090003490448 0.023600000888109207")

ProtoInstance248.addFieldValue(fieldValue251)
fieldValue252 = x3d.fieldValue()
fieldValue252.setName("children")
ProtoInstance253 = x3d.ProtoInstance()
ProtoInstance253.setName("Segment")
ProtoInstance253.setDEF("hanim_skull")
fieldValue254 = x3d.fieldValue()
fieldValue254.setName("name")
fieldValue254.setValue("skull")

ProtoInstance253.addFieldValue(fieldValue254)
fieldValue255 = x3d.fieldValue()
fieldValue255.setName("children")
ProtoInstance256 = x3d.ProtoInstance()
ProtoInstance256.setName("Site")
ProtoInstance256.setDEF("hanim_skull_tip")
fieldValue257 = x3d.fieldValue()
fieldValue257.setName("name")
fieldValue257.setValue("skull_tip")

ProtoInstance256.addFieldValue(fieldValue257)
fieldValue258 = x3d.fieldValue()
fieldValue258.setName("translation")
fieldValue258.setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678")

ProtoInstance256.addFieldValue(fieldValue258)

fieldValue255.addChildren(ProtoInstance256)
ProtoInstance259 = x3d.ProtoInstance()
ProtoInstance259.setName("Site")
ProtoInstance259.setDEF("hanim_sellion")
fieldValue260 = x3d.fieldValue()
fieldValue260.setName("name")
fieldValue260.setValue("sellion")

ProtoInstance259.addFieldValue(fieldValue260)
fieldValue261 = x3d.fieldValue()
fieldValue261.setName("translation")
fieldValue261.setValue("0.005799999926239252 1.631600022315979 0.0851999968290329")

ProtoInstance259.addFieldValue(fieldValue261)

fieldValue255.addChildren(ProtoInstance259)
ProtoInstance262 = x3d.ProtoInstance()
ProtoInstance262.setName("Site")
ProtoInstance262.setDEF("hanim_r_infraorbitale")
fieldValue263 = x3d.fieldValue()
fieldValue263.setName("name")
fieldValue263.setValue("r_infraorbitale")

ProtoInstance262.addFieldValue(fieldValue263)
fieldValue264 = x3d.fieldValue()
fieldValue264.setName("translation")
fieldValue264.setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547")

ProtoInstance262.addFieldValue(fieldValue264)

fieldValue255.addChildren(ProtoInstance262)
ProtoInstance265 = x3d.ProtoInstance()
ProtoInstance265.setName("Site")
ProtoInstance265.setDEF("hanim_l_infraorbitale")
fieldValue266 = x3d.fieldValue()
fieldValue266.setName("name")
fieldValue266.setValue("l_infraorbitale")

ProtoInstance265.addFieldValue(fieldValue266)
fieldValue267 = x3d.fieldValue()
fieldValue267.setName("translation")
fieldValue267.setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547")

ProtoInstance265.addFieldValue(fieldValue267)

fieldValue255.addChildren(ProtoInstance265)
ProtoInstance268 = x3d.ProtoInstance()
ProtoInstance268.setName("Site")
ProtoInstance268.setDEF("hanim_supramenton")
fieldValue269 = x3d.fieldValue()
fieldValue269.setName("name")
fieldValue269.setValue("supramenton")

ProtoInstance268.addFieldValue(fieldValue269)
fieldValue270 = x3d.fieldValue()
fieldValue270.setName("translation")
fieldValue270.setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962")

ProtoInstance268.addFieldValue(fieldValue270)

fieldValue255.addChildren(ProtoInstance268)
ProtoInstance271 = x3d.ProtoInstance()
ProtoInstance271.setName("Site")
ProtoInstance271.setDEF("hanim_r_tragion")
fieldValue272 = x3d.fieldValue()
fieldValue272.setName("name")
fieldValue272.setValue("r_tragion")

ProtoInstance271.addFieldValue(fieldValue272)
fieldValue273 = x3d.fieldValue()
fieldValue273.setName("translation")
fieldValue273.setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642")

ProtoInstance271.addFieldValue(fieldValue273)

fieldValue255.addChildren(ProtoInstance271)
ProtoInstance274 = x3d.ProtoInstance()
ProtoInstance274.setName("Site")
ProtoInstance274.setDEF("hanim_r_gonion")
fieldValue275 = x3d.fieldValue()
fieldValue275.setName("name")
fieldValue275.setValue("r_gonion")

ProtoInstance274.addFieldValue(fieldValue275)
fieldValue276 = x3d.fieldValue()
fieldValue276.setName("translation")
fieldValue276.setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176")

ProtoInstance274.addFieldValue(fieldValue276)

fieldValue255.addChildren(ProtoInstance274)
ProtoInstance277 = x3d.ProtoInstance()
ProtoInstance277.setName("Site")
ProtoInstance277.setDEF("hanim_l_tragion")
fieldValue278 = x3d.fieldValue()
fieldValue278.setName("name")
fieldValue278.setValue("l_tragion")

ProtoInstance277.addFieldValue(fieldValue278)
fieldValue279 = x3d.fieldValue()
fieldValue279.setName("translation")
fieldValue279.setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874")

ProtoInstance277.addFieldValue(fieldValue279)

fieldValue255.addChildren(ProtoInstance277)
ProtoInstance280 = x3d.ProtoInstance()
ProtoInstance280.setName("Site")
ProtoInstance280.setDEF("hanim_l_gonion")
fieldValue281 = x3d.fieldValue()
fieldValue281.setName("name")
fieldValue281.setValue("l_gonion")

ProtoInstance280.addFieldValue(fieldValue281)
fieldValue282 = x3d.fieldValue()
fieldValue282.setName("translation")
fieldValue282.setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066")

ProtoInstance280.addFieldValue(fieldValue282)

fieldValue255.addChildren(ProtoInstance280)
ProtoInstance283 = x3d.ProtoInstance()
ProtoInstance283.setName("Site")
ProtoInstance283.setDEF("hanim_nuchale")
fieldValue284 = x3d.fieldValue()
fieldValue284.setName("name")
fieldValue284.setValue("nuchale")

ProtoInstance283.addFieldValue(fieldValue284)
fieldValue285 = x3d.fieldValue()
fieldValue285.setName("translation")
fieldValue285.setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")

ProtoInstance283.addFieldValue(fieldValue285)

fieldValue255.addChildren(ProtoInstance283)

ProtoInstance253.addFieldValue(fieldValue255)

fieldValue252.addChildren(ProtoInstance253)

ProtoInstance248.addFieldValue(fieldValue252)

fieldValue247.addChildren(ProtoInstance248)
ProtoInstance286 = x3d.ProtoInstance()
ProtoInstance286.setName("Joint")
ProtoInstance286.setDEF("hanim_l_shoulder")
fieldValue287 = x3d.fieldValue()
fieldValue287.setName("stiffness")
fieldValue287.setValue("1 1 1")

ProtoInstance286.addFieldValue(fieldValue287)
fieldValue288 = x3d.fieldValue()
fieldValue288.setName("name")
fieldValue288.setValue("l_shoulder")

ProtoInstance286.addFieldValue(fieldValue288)
fieldValue289 = x3d.fieldValue()
fieldValue289.setName("center")
fieldValue289.setValue("0.2029000073671341 1.437600016593933 -0.03869999945163727")

ProtoInstance286.addFieldValue(fieldValue289)
fieldValue290 = x3d.fieldValue()
fieldValue290.setName("children")
ProtoInstance291 = x3d.ProtoInstance()
ProtoInstance291.setName("Joint")
ProtoInstance291.setDEF("hanim_l_elbow")
fieldValue292 = x3d.fieldValue()
fieldValue292.setName("stiffness")
fieldValue292.setValue("1 1 1")

ProtoInstance291.addFieldValue(fieldValue292)
fieldValue293 = x3d.fieldValue()
fieldValue293.setName("name")
fieldValue293.setValue("l_elbow")

ProtoInstance291.addFieldValue(fieldValue293)
fieldValue294 = x3d.fieldValue()
fieldValue294.setName("center")
fieldValue294.setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512")

ProtoInstance291.addFieldValue(fieldValue294)
fieldValue295 = x3d.fieldValue()
fieldValue295.setName("children")
ProtoInstance296 = x3d.ProtoInstance()
ProtoInstance296.setName("Joint")
ProtoInstance296.setDEF("hanim_l_radiocarpal")
fieldValue297 = x3d.fieldValue()
fieldValue297.setName("stiffness")
fieldValue297.setValue("1 1 1")

ProtoInstance296.addFieldValue(fieldValue297)
fieldValue298 = x3d.fieldValue()
fieldValue298.setName("name")
fieldValue298.setValue("l_radiocarpal")

ProtoInstance296.addFieldValue(fieldValue298)
fieldValue299 = x3d.fieldValue()
fieldValue299.setName("center")
fieldValue299.setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538")

ProtoInstance296.addFieldValue(fieldValue299)
fieldValue300 = x3d.fieldValue()
fieldValue300.setName("children")
ProtoInstance301 = x3d.ProtoInstance()
ProtoInstance301.setName("Segment")
ProtoInstance301.setDEF("hanim_l_hand")
fieldValue302 = x3d.fieldValue()
fieldValue302.setName("name")
fieldValue302.setValue("l_hand")

ProtoInstance301.addFieldValue(fieldValue302)
fieldValue303 = x3d.fieldValue()
fieldValue303.setName("children")
ProtoInstance304 = x3d.ProtoInstance()
ProtoInstance304.setName("Site")
ProtoInstance304.setDEF("hanim_l_hand_tip")
fieldValue305 = x3d.fieldValue()
fieldValue305.setName("name")
fieldValue305.setValue("l_hand_tip")

ProtoInstance304.addFieldValue(fieldValue305)
fieldValue306 = x3d.fieldValue()
fieldValue306.setName("translation")
fieldValue306.setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205")

ProtoInstance304.addFieldValue(fieldValue306)

fieldValue303.addChildren(ProtoInstance304)
ProtoInstance307 = x3d.ProtoInstance()
ProtoInstance307.setName("Site")
ProtoInstance307.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue308 = x3d.fieldValue()
fieldValue308.setName("name")
fieldValue308.setValue("l_metacarpal_phalanx_2")

ProtoInstance307.addFieldValue(fieldValue308)
fieldValue309 = x3d.fieldValue()
fieldValue309.setName("translation")
fieldValue309.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance307.addFieldValue(fieldValue309)

fieldValue303.addChildren(ProtoInstance307)
ProtoInstance310 = x3d.ProtoInstance()
ProtoInstance310.setName("Site")
ProtoInstance310.setDEF("hanim_l_dactylion")
fieldValue311 = x3d.fieldValue()
fieldValue311.setName("name")
fieldValue311.setValue("l_dactylion")

ProtoInstance310.addFieldValue(fieldValue311)
fieldValue312 = x3d.fieldValue()
fieldValue312.setName("translation")
fieldValue312.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance310.addFieldValue(fieldValue312)

fieldValue303.addChildren(ProtoInstance310)
ProtoInstance313 = x3d.ProtoInstance()
ProtoInstance313.setName("Site")
ProtoInstance313.setDEF("hanim_l_ulnar_styloid")
fieldValue314 = x3d.fieldValue()
fieldValue314.setName("name")
fieldValue314.setValue("l_ulnar_styloid")

ProtoInstance313.addFieldValue(fieldValue314)
fieldValue315 = x3d.fieldValue()
fieldValue315.setName("translation")
fieldValue315.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance313.addFieldValue(fieldValue315)

fieldValue303.addChildren(ProtoInstance313)
ProtoInstance316 = x3d.ProtoInstance()
ProtoInstance316.setName("Site")
ProtoInstance316.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue317 = x3d.fieldValue()
fieldValue317.setName("name")
fieldValue317.setValue("l_metacarpal_phalanx_5")

ProtoInstance316.addFieldValue(fieldValue317)
fieldValue318 = x3d.fieldValue()
fieldValue318.setName("translation")
fieldValue318.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance316.addFieldValue(fieldValue318)

fieldValue303.addChildren(ProtoInstance316)

ProtoInstance301.addFieldValue(fieldValue303)

fieldValue300.addChildren(ProtoInstance301)

ProtoInstance296.addFieldValue(fieldValue300)

fieldValue295.addChildren(ProtoInstance296)
ProtoInstance319 = x3d.ProtoInstance()
ProtoInstance319.setName("Segment")
ProtoInstance319.setDEF("hanim_l_forearm")
fieldValue320 = x3d.fieldValue()
fieldValue320.setName("name")
fieldValue320.setValue("l_forearm")

ProtoInstance319.addFieldValue(fieldValue320)
fieldValue321 = x3d.fieldValue()
fieldValue321.setName("children")
ProtoInstance322 = x3d.ProtoInstance()
ProtoInstance322.setName("Site")
ProtoInstance322.setDEF("hanim_l_radial_styloid")
fieldValue323 = x3d.fieldValue()
fieldValue323.setName("name")
fieldValue323.setValue("l_radial_styloid")

ProtoInstance322.addFieldValue(fieldValue323)
fieldValue324 = x3d.fieldValue()
fieldValue324.setName("translation")
fieldValue324.setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691")

ProtoInstance322.addFieldValue(fieldValue324)

fieldValue321.addChildren(ProtoInstance322)
ProtoInstance325 = x3d.ProtoInstance()
ProtoInstance325.setName("Site")
ProtoInstance325.setDEF("hanim_l_olecranon")
fieldValue326 = x3d.fieldValue()
fieldValue326.setName("name")
fieldValue326.setValue("l_olecranon")

ProtoInstance325.addFieldValue(fieldValue326)
fieldValue327 = x3d.fieldValue()
fieldValue327.setName("translation")
fieldValue327.setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")

ProtoInstance325.addFieldValue(fieldValue327)

fieldValue321.addChildren(ProtoInstance325)
ProtoInstance328 = x3d.ProtoInstance()
ProtoInstance328.setName("Site")
ProtoInstance328.setDEF("hanim_l_humeral_medial_epicondyles")
fieldValue329 = x3d.fieldValue()
fieldValue329.setName("name")
fieldValue329.setValue("l_humeral_medial_epicondyles")

ProtoInstance328.addFieldValue(fieldValue329)
fieldValue330 = x3d.fieldValue()
fieldValue330.setName("translation")
fieldValue330.setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661")

ProtoInstance328.addFieldValue(fieldValue330)

fieldValue321.addChildren(ProtoInstance328)
ProtoInstance331 = x3d.ProtoInstance()
ProtoInstance331.setName("Site")
ProtoInstance331.setDEF("hanim_l_radiale")
fieldValue332 = x3d.fieldValue()
fieldValue332.setName("name")
fieldValue332.setValue("l_radiale")

ProtoInstance331.addFieldValue(fieldValue332)
fieldValue333 = x3d.fieldValue()
fieldValue333.setName("translation")
fieldValue333.setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268")

ProtoInstance331.addFieldValue(fieldValue333)

fieldValue321.addChildren(ProtoInstance331)

ProtoInstance319.addFieldValue(fieldValue321)

fieldValue295.addChildren(ProtoInstance319)

ProtoInstance291.addFieldValue(fieldValue295)

fieldValue290.addChildren(ProtoInstance291)
ProtoInstance334 = x3d.ProtoInstance()
ProtoInstance334.setName("Segment")
ProtoInstance334.setDEF("hanim_l_upperarm")
fieldValue335 = x3d.fieldValue()
fieldValue335.setName("name")
fieldValue335.setValue("l_upperarm")

ProtoInstance334.addFieldValue(fieldValue335)
fieldValue336 = x3d.fieldValue()
fieldValue336.setName("children")
ProtoInstance337 = x3d.ProtoInstance()
ProtoInstance337.setName("Site")
ProtoInstance337.setDEF("hanim_l_humeral_lateral_epicondyles")
fieldValue338 = x3d.fieldValue()
fieldValue338.setName("name")
fieldValue338.setValue("l_humeral_lateral_epicondyles")

ProtoInstance337.addFieldValue(fieldValue338)
fieldValue339 = x3d.fieldValue()
fieldValue339.setName("translation")
fieldValue339.setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355")

ProtoInstance337.addFieldValue(fieldValue339)

fieldValue336.addChildren(ProtoInstance337)

ProtoInstance334.addFieldValue(fieldValue336)

fieldValue290.addChildren(ProtoInstance334)

ProtoInstance286.addFieldValue(fieldValue290)

fieldValue247.addChildren(ProtoInstance286)
ProtoInstance340 = x3d.ProtoInstance()
ProtoInstance340.setName("Joint")
ProtoInstance340.setDEF("hanim_r_shoulder")
fieldValue341 = x3d.fieldValue()
fieldValue341.setName("stiffness")
fieldValue341.setValue("1 1 1")

ProtoInstance340.addFieldValue(fieldValue341)
fieldValue342 = x3d.fieldValue()
fieldValue342.setName("name")
fieldValue342.setValue("r_shoulder")

ProtoInstance340.addFieldValue(fieldValue342)
fieldValue343 = x3d.fieldValue()
fieldValue343.setName("center")
fieldValue343.setValue("-0.1906999945640564 1.4407000541687012 -0.032499998807907104")

ProtoInstance340.addFieldValue(fieldValue343)
fieldValue344 = x3d.fieldValue()
fieldValue344.setName("children")
ProtoInstance345 = x3d.ProtoInstance()
ProtoInstance345.setName("Joint")
ProtoInstance345.setDEF("hanim_r_elbow")
fieldValue346 = x3d.fieldValue()
fieldValue346.setName("stiffness")
fieldValue346.setValue("1 1 1")

ProtoInstance345.addFieldValue(fieldValue346)
fieldValue347 = x3d.fieldValue()
fieldValue347.setName("name")
fieldValue347.setValue("r_elbow")

ProtoInstance345.addFieldValue(fieldValue347)
fieldValue348 = x3d.fieldValue()
fieldValue348.setName("center")
fieldValue348.setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104")

ProtoInstance345.addFieldValue(fieldValue348)
fieldValue349 = x3d.fieldValue()
fieldValue349.setName("children")
ProtoInstance350 = x3d.ProtoInstance()
ProtoInstance350.setName("Joint")
ProtoInstance350.setDEF("hanim_r_radiocarpal")
fieldValue351 = x3d.fieldValue()
fieldValue351.setName("stiffness")
fieldValue351.setValue("1 1 1")

ProtoInstance350.addFieldValue(fieldValue351)
fieldValue352 = x3d.fieldValue()
fieldValue352.setName("name")
fieldValue352.setValue("r_radiocarpal")

ProtoInstance350.addFieldValue(fieldValue352)
fieldValue353 = x3d.fieldValue()
fieldValue353.setName("center")
fieldValue353.setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522")

ProtoInstance350.addFieldValue(fieldValue353)
fieldValue354 = x3d.fieldValue()
fieldValue354.setName("children")
ProtoInstance355 = x3d.ProtoInstance()
ProtoInstance355.setName("Segment")
ProtoInstance355.setDEF("hanim_r_hand")
fieldValue356 = x3d.fieldValue()
fieldValue356.setName("name")
fieldValue356.setValue("r_hand")

ProtoInstance355.addFieldValue(fieldValue356)
fieldValue357 = x3d.fieldValue()
fieldValue357.setName("children")
ProtoInstance358 = x3d.ProtoInstance()
ProtoInstance358.setName("Site")
ProtoInstance358.setDEF("hanim_r_hand_tip")
fieldValue359 = x3d.fieldValue()
fieldValue359.setName("name")
fieldValue359.setValue("r_hand_tip")

ProtoInstance358.addFieldValue(fieldValue359)
fieldValue360 = x3d.fieldValue()
fieldValue360.setName("translation")
fieldValue360.setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")

ProtoInstance358.addFieldValue(fieldValue360)

fieldValue357.addChildren(ProtoInstance358)
ProtoInstance361 = x3d.ProtoInstance()
ProtoInstance361.setName("Site")
ProtoInstance361.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue362 = x3d.fieldValue()
fieldValue362.setName("name")
fieldValue362.setValue("r_metacarpal_phalanx_2")

ProtoInstance361.addFieldValue(fieldValue362)
fieldValue363 = x3d.fieldValue()
fieldValue363.setName("translation")
fieldValue363.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance361.addFieldValue(fieldValue363)

fieldValue357.addChildren(ProtoInstance361)
ProtoInstance364 = x3d.ProtoInstance()
ProtoInstance364.setName("Site")
ProtoInstance364.setDEF("hanim_r_dactylion")
fieldValue365 = x3d.fieldValue()
fieldValue365.setName("name")
fieldValue365.setValue("r_dactylion")

ProtoInstance364.addFieldValue(fieldValue365)
fieldValue366 = x3d.fieldValue()
fieldValue366.setName("translation")
fieldValue366.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance364.addFieldValue(fieldValue366)

fieldValue357.addChildren(ProtoInstance364)
ProtoInstance367 = x3d.ProtoInstance()
ProtoInstance367.setName("Site")
ProtoInstance367.setDEF("hanim_r_ulnar_styloid")
fieldValue368 = x3d.fieldValue()
fieldValue368.setName("name")
fieldValue368.setValue("r_ulnar_styloid")

ProtoInstance367.addFieldValue(fieldValue368)
fieldValue369 = x3d.fieldValue()
fieldValue369.setName("translation")
fieldValue369.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance367.addFieldValue(fieldValue369)

fieldValue357.addChildren(ProtoInstance367)
ProtoInstance370 = x3d.ProtoInstance()
ProtoInstance370.setName("Site")
ProtoInstance370.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue371 = x3d.fieldValue()
fieldValue371.setName("name")
fieldValue371.setValue("r_metacarpal_phalanx_5")

ProtoInstance370.addFieldValue(fieldValue371)
fieldValue372 = x3d.fieldValue()
fieldValue372.setName("translation")
fieldValue372.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance370.addFieldValue(fieldValue372)

fieldValue357.addChildren(ProtoInstance370)

ProtoInstance355.addFieldValue(fieldValue357)

fieldValue354.addChildren(ProtoInstance355)

ProtoInstance350.addFieldValue(fieldValue354)

fieldValue349.addChildren(ProtoInstance350)
ProtoInstance373 = x3d.ProtoInstance()
ProtoInstance373.setName("Segment")
ProtoInstance373.setDEF("hanim_r_forearm")
fieldValue374 = x3d.fieldValue()
fieldValue374.setName("name")
fieldValue374.setValue("r_forearm")

ProtoInstance373.addFieldValue(fieldValue374)
fieldValue375 = x3d.fieldValue()
fieldValue375.setName("children")
ProtoInstance376 = x3d.ProtoInstance()
ProtoInstance376.setName("Site")
ProtoInstance376.setDEF("hanim_r_radial_styloid")
fieldValue377 = x3d.fieldValue()
fieldValue377.setName("name")
fieldValue377.setValue("r_radial_styloid")

ProtoInstance376.addFieldValue(fieldValue377)
fieldValue378 = x3d.fieldValue()
fieldValue378.setName("translation")
fieldValue378.setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236")

ProtoInstance376.addFieldValue(fieldValue378)

fieldValue375.addChildren(ProtoInstance376)
ProtoInstance379 = x3d.ProtoInstance()
ProtoInstance379.setName("Site")
ProtoInstance379.setDEF("hanim_r_olecranon")
fieldValue380 = x3d.fieldValue()
fieldValue380.setName("name")
fieldValue380.setValue("r_olecranon")

ProtoInstance379.addFieldValue(fieldValue380)
fieldValue381 = x3d.fieldValue()
fieldValue381.setName("translation")
fieldValue381.setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")

ProtoInstance379.addFieldValue(fieldValue381)

fieldValue375.addChildren(ProtoInstance379)
ProtoInstance382 = x3d.ProtoInstance()
ProtoInstance382.setName("Site")
ProtoInstance382.setDEF("hanim_r_humeral_medial_epicondyles")
fieldValue383 = x3d.fieldValue()
fieldValue383.setName("name")
fieldValue383.setValue("r_humeral_medial_epicondyles")

ProtoInstance382.addFieldValue(fieldValue383)
fieldValue384 = x3d.fieldValue()
fieldValue384.setName("translation")
fieldValue384.setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")

ProtoInstance382.addFieldValue(fieldValue384)

fieldValue375.addChildren(ProtoInstance382)
ProtoInstance385 = x3d.ProtoInstance()
ProtoInstance385.setName("Site")
ProtoInstance385.setDEF("hanim_r_radiale")
fieldValue386 = x3d.fieldValue()
fieldValue386.setName("name")
fieldValue386.setValue("r_radiale")

ProtoInstance385.addFieldValue(fieldValue386)
fieldValue387 = x3d.fieldValue()
fieldValue387.setName("translation")
fieldValue387.setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")

ProtoInstance385.addFieldValue(fieldValue387)

fieldValue375.addChildren(ProtoInstance385)

ProtoInstance373.addFieldValue(fieldValue375)

fieldValue349.addChildren(ProtoInstance373)

ProtoInstance345.addFieldValue(fieldValue349)

fieldValue344.addChildren(ProtoInstance345)
ProtoInstance388 = x3d.ProtoInstance()
ProtoInstance388.setName("Segment")
ProtoInstance388.setDEF("hanim_r_upperarm")
fieldValue389 = x3d.fieldValue()
fieldValue389.setName("name")
fieldValue389.setValue("r_upperarm")

ProtoInstance388.addFieldValue(fieldValue389)
fieldValue390 = x3d.fieldValue()
fieldValue390.setName("children")
ProtoInstance391 = x3d.ProtoInstance()
ProtoInstance391.setName("Site")
ProtoInstance391.setDEF("hanim_r_humeral_lateral_epicondyles")
fieldValue392 = x3d.fieldValue()
fieldValue392.setName("name")
fieldValue392.setValue("r_humeral_lateral_epicondyles")

ProtoInstance391.addFieldValue(fieldValue392)
fieldValue393 = x3d.fieldValue()
fieldValue393.setName("translation")
fieldValue393.setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")

ProtoInstance391.addFieldValue(fieldValue393)

fieldValue390.addChildren(ProtoInstance391)

ProtoInstance388.addFieldValue(fieldValue390)

fieldValue344.addChildren(ProtoInstance388)

ProtoInstance340.addFieldValue(fieldValue344)

fieldValue247.addChildren(ProtoInstance340)
ProtoInstance394 = x3d.ProtoInstance()
ProtoInstance394.setName("Segment")
ProtoInstance394.setDEF("hanim_l5")
fieldValue395 = x3d.fieldValue()
fieldValue395.setName("name")
fieldValue395.setValue("l5")

ProtoInstance394.addFieldValue(fieldValue395)
fieldValue396 = x3d.fieldValue()
fieldValue396.setName("children")
ProtoInstance397 = x3d.ProtoInstance()
ProtoInstance397.setName("Site")
ProtoInstance397.setDEF("hanim_r_clavicale")
fieldValue398 = x3d.fieldValue()
fieldValue398.setName("name")
fieldValue398.setValue("r_clavicale")

ProtoInstance397.addFieldValue(fieldValue398)
fieldValue399 = x3d.fieldValue()
fieldValue399.setName("translation")
fieldValue399.setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033")

ProtoInstance397.addFieldValue(fieldValue399)

fieldValue396.addChildren(ProtoInstance397)
ProtoInstance400 = x3d.ProtoInstance()
ProtoInstance400.setName("Site")
ProtoInstance400.setDEF("hanim_suprasternale")
fieldValue401 = x3d.fieldValue()
fieldValue401.setName("name")
fieldValue401.setValue("suprasternale")

ProtoInstance400.addFieldValue(fieldValue401)
fieldValue402 = x3d.fieldValue()
fieldValue402.setName("translation")
fieldValue402.setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869")

ProtoInstance400.addFieldValue(fieldValue402)

fieldValue396.addChildren(ProtoInstance400)
ProtoInstance403 = x3d.ProtoInstance()
ProtoInstance403.setName("Site")
ProtoInstance403.setDEF("hanim_l_clavicale")
fieldValue404 = x3d.fieldValue()
fieldValue404.setName("name")
fieldValue404.setValue("l_clavicale")

ProtoInstance403.addFieldValue(fieldValue404)
fieldValue405 = x3d.fieldValue()
fieldValue405.setName("translation")
fieldValue405.setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754")

ProtoInstance403.addFieldValue(fieldValue405)

fieldValue396.addChildren(ProtoInstance403)
ProtoInstance406 = x3d.ProtoInstance()
ProtoInstance406.setName("Site")
ProtoInstance406.setDEF("hanim_r_thelion")
fieldValue407 = x3d.fieldValue()
fieldValue407.setName("name")
fieldValue407.setValue("r_thelion")

ProtoInstance406.addFieldValue(fieldValue407)
fieldValue408 = x3d.fieldValue()
fieldValue408.setName("translation")
fieldValue408.setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911")

ProtoInstance406.addFieldValue(fieldValue408)

fieldValue396.addChildren(ProtoInstance406)
ProtoInstance409 = x3d.ProtoInstance()
ProtoInstance409.setName("Site")
ProtoInstance409.setDEF("hanim_l_thelion")
fieldValue410 = x3d.fieldValue()
fieldValue410.setName("name")
fieldValue410.setValue("l_thelion")

ProtoInstance409.addFieldValue(fieldValue410)
fieldValue411 = x3d.fieldValue()
fieldValue411.setName("translation")
fieldValue411.setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689")

ProtoInstance409.addFieldValue(fieldValue411)

fieldValue396.addChildren(ProtoInstance409)
ProtoInstance412 = x3d.ProtoInstance()
ProtoInstance412.setName("Site")
ProtoInstance412.setDEF("hanim_substernale")
fieldValue413 = x3d.fieldValue()
fieldValue413.setName("name")
fieldValue413.setValue("substernale")

ProtoInstance412.addFieldValue(fieldValue413)
fieldValue414 = x3d.fieldValue()
fieldValue414.setName("translation")
fieldValue414.setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683")

ProtoInstance412.addFieldValue(fieldValue414)

fieldValue396.addChildren(ProtoInstance412)
ProtoInstance415 = x3d.ProtoInstance()
ProtoInstance415.setName("Site")
ProtoInstance415.setDEF("hanim_r_rib10")
fieldValue416 = x3d.fieldValue()
fieldValue416.setName("name")
fieldValue416.setValue("r_rib10")

ProtoInstance415.addFieldValue(fieldValue416)
fieldValue417 = x3d.fieldValue()
fieldValue417.setName("translation")
fieldValue417.setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432")

ProtoInstance415.addFieldValue(fieldValue417)

fieldValue396.addChildren(ProtoInstance415)
ProtoInstance418 = x3d.ProtoInstance()
ProtoInstance418.setName("Site")
ProtoInstance418.setDEF("hanim_l_rib10")
fieldValue419 = x3d.fieldValue()
fieldValue419.setName("name")
fieldValue419.setValue("l_rib10")

ProtoInstance418.addFieldValue(fieldValue419)
fieldValue420 = x3d.fieldValue()
fieldValue420.setName("translation")
fieldValue420.setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202")

ProtoInstance418.addFieldValue(fieldValue420)

fieldValue396.addChildren(ProtoInstance418)
ProtoInstance421 = x3d.ProtoInstance()
ProtoInstance421.setName("Site")
ProtoInstance421.setDEF("hanim_cervicale")
fieldValue422 = x3d.fieldValue()
fieldValue422.setName("name")
fieldValue422.setValue("cervicale")

ProtoInstance421.addFieldValue(fieldValue422)
fieldValue423 = x3d.fieldValue()
fieldValue423.setName("translation")
fieldValue423.setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754")

ProtoInstance421.addFieldValue(fieldValue423)

fieldValue396.addChildren(ProtoInstance421)
ProtoInstance424 = x3d.ProtoInstance()
ProtoInstance424.setName("Site")
ProtoInstance424.setDEF("hanim_spine_2_lower_back")
fieldValue425 = x3d.fieldValue()
fieldValue425.setName("name")
fieldValue425.setValue("spine_2_lower_back")

ProtoInstance424.addFieldValue(fieldValue425)
fieldValue426 = x3d.fieldValue()
fieldValue426.setName("translation")
fieldValue426.setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661")

ProtoInstance424.addFieldValue(fieldValue426)

fieldValue396.addChildren(ProtoInstance424)
ProtoInstance427 = x3d.ProtoInstance()
ProtoInstance427.setName("Site")
ProtoInstance427.setDEF("hanim_waist_preferred_posterior")
fieldValue428 = x3d.fieldValue()
fieldValue428.setName("name")
fieldValue428.setValue("waist_preferred_posterior")

ProtoInstance427.addFieldValue(fieldValue428)
fieldValue429 = x3d.fieldValue()
fieldValue429.setName("translation")
fieldValue429.setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754")

ProtoInstance427.addFieldValue(fieldValue429)

fieldValue396.addChildren(ProtoInstance427)
ProtoInstance430 = x3d.ProtoInstance()
ProtoInstance430.setName("Site")
ProtoInstance430.setDEF("hanim_r_acromion")
fieldValue431 = x3d.fieldValue()
fieldValue431.setName("name")
fieldValue431.setValue("r_acromion")

ProtoInstance430.addFieldValue(fieldValue431)
fieldValue432 = x3d.fieldValue()
fieldValue432.setName("translation")
fieldValue432.setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541")

ProtoInstance430.addFieldValue(fieldValue432)

fieldValue396.addChildren(ProtoInstance430)
ProtoInstance433 = x3d.ProtoInstance()
ProtoInstance433.setName("Site")
ProtoInstance433.setDEF("hanim_r_axilla_proximal")
fieldValue434 = x3d.fieldValue()
fieldValue434.setName("name")
fieldValue434.setValue("r_axilla_proximal")

ProtoInstance433.addFieldValue(fieldValue434)
fieldValue435 = x3d.fieldValue()
fieldValue435.setName("translation")
fieldValue435.setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438")

ProtoInstance433.addFieldValue(fieldValue435)

fieldValue396.addChildren(ProtoInstance433)
ProtoInstance436 = x3d.ProtoInstance()
ProtoInstance436.setName("Site")
ProtoInstance436.setDEF("hanim_r_axilla_distal")
fieldValue437 = x3d.fieldValue()
fieldValue437.setName("name")
fieldValue437.setValue("r_axilla_distal")

ProtoInstance436.addFieldValue(fieldValue437)
fieldValue438 = x3d.fieldValue()
fieldValue438.setName("translation")
fieldValue438.setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678")

ProtoInstance436.addFieldValue(fieldValue438)

fieldValue396.addChildren(ProtoInstance436)
ProtoInstance439 = x3d.ProtoInstance()
ProtoInstance439.setName("Site")
ProtoInstance439.setDEF("hanim_l_acromion")
fieldValue440 = x3d.fieldValue()
fieldValue440.setName("name")
fieldValue440.setValue("l_acromion")

ProtoInstance439.addFieldValue(fieldValue440)
fieldValue441 = x3d.fieldValue()
fieldValue441.setName("translation")
fieldValue441.setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014")

ProtoInstance439.addFieldValue(fieldValue441)

fieldValue396.addChildren(ProtoInstance439)
ProtoInstance442 = x3d.ProtoInstance()
ProtoInstance442.setName("Site")
ProtoInstance442.setDEF("hanim_l_axilla_proximal")
fieldValue443 = x3d.fieldValue()
fieldValue443.setName("name")
fieldValue443.setValue("l_axilla_proximal")

ProtoInstance442.addFieldValue(fieldValue443)
fieldValue444 = x3d.fieldValue()
fieldValue444.setName("translation")
fieldValue444.setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937")

ProtoInstance442.addFieldValue(fieldValue444)

fieldValue396.addChildren(ProtoInstance442)
ProtoInstance445 = x3d.ProtoInstance()
ProtoInstance445.setName("Site")
ProtoInstance445.setDEF("hanim_l_axilla_distal")
fieldValue446 = x3d.fieldValue()
fieldValue446.setName("name")
fieldValue446.setValue("l_axilla_distal")

ProtoInstance445.addFieldValue(fieldValue446)
fieldValue447 = x3d.fieldValue()
fieldValue447.setName("translation")
fieldValue447.setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388")

ProtoInstance445.addFieldValue(fieldValue447)

fieldValue396.addChildren(ProtoInstance445)
ProtoInstance448 = x3d.ProtoInstance()
ProtoInstance448.setName("Site")
ProtoInstance448.setDEF("hanim_r_neck_base")
fieldValue449 = x3d.fieldValue()
fieldValue449.setName("name")
fieldValue449.setValue("r_neck_base")

ProtoInstance448.addFieldValue(fieldValue449)
fieldValue450 = x3d.fieldValue()
fieldValue450.setName("translation")
fieldValue450.setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071")

ProtoInstance448.addFieldValue(fieldValue450)

fieldValue396.addChildren(ProtoInstance448)
ProtoInstance451 = x3d.ProtoInstance()
ProtoInstance451.setName("Site")
ProtoInstance451.setDEF("hanim_l_neck_base")
fieldValue452 = x3d.fieldValue()
fieldValue452.setName("name")
fieldValue452.setValue("l_neck_base")

ProtoInstance451.addFieldValue(fieldValue452)
fieldValue453 = x3d.fieldValue()
fieldValue453.setName("translation")
fieldValue453.setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478")

ProtoInstance451.addFieldValue(fieldValue453)

fieldValue396.addChildren(ProtoInstance451)
ProtoInstance454 = x3d.ProtoInstance()
ProtoInstance454.setName("Site")
ProtoInstance454.setDEF("hanim_navel")
fieldValue455 = x3d.fieldValue()
fieldValue455.setName("name")
fieldValue455.setValue("navel")

ProtoInstance454.addFieldValue(fieldValue455)
fieldValue456 = x3d.fieldValue()
fieldValue456.setName("translation")
fieldValue456.setValue("0.006899999920278788 1.09660005569458 0.10170000046491623")

ProtoInstance454.addFieldValue(fieldValue456)

fieldValue396.addChildren(ProtoInstance454)

ProtoInstance394.addFieldValue(fieldValue396)

fieldValue247.addChildren(ProtoInstance394)

ProtoInstance243.addFieldValue(fieldValue247)

fieldValue107.addChildren(ProtoInstance243)
ProtoInstance457 = x3d.ProtoInstance()
ProtoInstance457.setName("Segment")
ProtoInstance457.setDEF("hanim_sacrum")
fieldValue458 = x3d.fieldValue()
fieldValue458.setName("name")
fieldValue458.setValue("sacrum")

ProtoInstance457.addFieldValue(fieldValue458)
fieldValue459 = x3d.fieldValue()
fieldValue459.setName("children")
ProtoInstance460 = x3d.ProtoInstance()
ProtoInstance460.setName("Site")
ProtoInstance460.setDEF("hanim_r_asis")
fieldValue461 = x3d.fieldValue()
fieldValue461.setName("name")
fieldValue461.setValue("r_asis")

ProtoInstance460.addFieldValue(fieldValue461)
fieldValue462 = x3d.fieldValue()
fieldValue462.setName("translation")
fieldValue462.setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747")

ProtoInstance460.addFieldValue(fieldValue462)

fieldValue459.addChildren(ProtoInstance460)
ProtoInstance463 = x3d.ProtoInstance()
ProtoInstance463.setName("Site")
ProtoInstance463.setDEF("hanim_l_asis")
fieldValue464 = x3d.fieldValue()
fieldValue464.setName("name")
fieldValue464.setValue("l_asis")

ProtoInstance463.addFieldValue(fieldValue464)
fieldValue465 = x3d.fieldValue()
fieldValue465.setName("translation")
fieldValue465.setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836")

ProtoInstance463.addFieldValue(fieldValue465)

fieldValue459.addChildren(ProtoInstance463)
ProtoInstance466 = x3d.ProtoInstance()
ProtoInstance466.setName("Site")
ProtoInstance466.setDEF("hanim_r_iliocristale")
fieldValue467 = x3d.fieldValue()
fieldValue467.setName("name")
fieldValue467.setValue("r_iliocristale")

ProtoInstance466.addFieldValue(fieldValue467)
fieldValue468 = x3d.fieldValue()
fieldValue468.setName("translation")
fieldValue468.setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187")

ProtoInstance466.addFieldValue(fieldValue468)

fieldValue459.addChildren(ProtoInstance466)
ProtoInstance469 = x3d.ProtoInstance()
ProtoInstance469.setName("Site")
ProtoInstance469.setDEF("hanim_r_trochanterion")
fieldValue470 = x3d.fieldValue()
fieldValue470.setName("name")
fieldValue470.setValue("r_trochanterion")

ProtoInstance469.addFieldValue(fieldValue470)
fieldValue471 = x3d.fieldValue()
fieldValue471.setName("translation")
fieldValue471.setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514")

ProtoInstance469.addFieldValue(fieldValue471)

fieldValue459.addChildren(ProtoInstance469)
ProtoInstance472 = x3d.ProtoInstance()
ProtoInstance472.setName("Site")
ProtoInstance472.setDEF("hanim_l_iliocristale")
fieldValue473 = x3d.fieldValue()
fieldValue473.setName("name")
fieldValue473.setValue("l_iliocristale")

ProtoInstance472.addFieldValue(fieldValue473)
fieldValue474 = x3d.fieldValue()
fieldValue474.setName("translation")
fieldValue474.setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001")

ProtoInstance472.addFieldValue(fieldValue474)

fieldValue459.addChildren(ProtoInstance472)
ProtoInstance475 = x3d.ProtoInstance()
ProtoInstance475.setName("Site")
ProtoInstance475.setDEF("hanim_l_trochanterion")
fieldValue476 = x3d.fieldValue()
fieldValue476.setName("name")
fieldValue476.setValue("l_trochanterion")

ProtoInstance475.addFieldValue(fieldValue476)
fieldValue477 = x3d.fieldValue()
fieldValue477.setName("translation")
fieldValue477.setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183")

ProtoInstance475.addFieldValue(fieldValue477)

fieldValue459.addChildren(ProtoInstance475)
ProtoInstance478 = x3d.ProtoInstance()
ProtoInstance478.setName("Site")
ProtoInstance478.setDEF("hanim_r_psis")
fieldValue479 = x3d.fieldValue()
fieldValue479.setName("name")
fieldValue479.setValue("r_psis")

ProtoInstance478.addFieldValue(fieldValue479)
fieldValue480 = x3d.fieldValue()
fieldValue480.setName("translation")
fieldValue480.setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082")

ProtoInstance478.addFieldValue(fieldValue480)

fieldValue459.addChildren(ProtoInstance478)
ProtoInstance481 = x3d.ProtoInstance()
ProtoInstance481.setName("Site")
ProtoInstance481.setDEF("hanim_l_psis")
fieldValue482 = x3d.fieldValue()
fieldValue482.setName("name")
fieldValue482.setValue("l_psis")

ProtoInstance481.addFieldValue(fieldValue482)
fieldValue483 = x3d.fieldValue()
fieldValue483.setName("translation")
fieldValue483.setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388")

ProtoInstance481.addFieldValue(fieldValue483)

fieldValue459.addChildren(ProtoInstance481)
ProtoInstance484 = x3d.ProtoInstance()
ProtoInstance484.setName("Site")
ProtoInstance484.setDEF("hanim_crotch")
fieldValue485 = x3d.fieldValue()
fieldValue485.setName("name")
fieldValue485.setValue("crotch")

ProtoInstance484.addFieldValue(fieldValue485)
fieldValue486 = x3d.fieldValue()
fieldValue486.setName("translation")
fieldValue486.setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367")

ProtoInstance484.addFieldValue(fieldValue486)

fieldValue459.addChildren(ProtoInstance484)

ProtoInstance457.addFieldValue(fieldValue459)

fieldValue107.addChildren(ProtoInstance457)

ProtoInstance103.addFieldValue(fieldValue107)

fieldValue102.addChildren(ProtoInstance103)

ProtoInstance101.addFieldValue(fieldValue102)
fieldValue487 = x3d.fieldValue()
fieldValue487.setName("joints")
ProtoInstance488 = x3d.ProtoInstance()
ProtoInstance488.setName("Joint")
ProtoInstance488.setDEF("hanim_humanoid_root")
fieldValue489 = x3d.fieldValue()
fieldValue489.setName("stiffness")
fieldValue489.setValue("1 1 1")

ProtoInstance488.addFieldValue(fieldValue489)
fieldValue490 = x3d.fieldValue()
fieldValue490.setName("name")
fieldValue490.setValue("humanoid_root")

ProtoInstance488.addFieldValue(fieldValue490)
fieldValue491 = x3d.fieldValue()
fieldValue491.setName("center")
fieldValue491.setValue("0 0.8240000009536743 0.027699999511241913")

ProtoInstance488.addFieldValue(fieldValue491)
fieldValue492 = x3d.fieldValue()
fieldValue492.setName("children")
ProtoInstance493 = x3d.ProtoInstance()
ProtoInstance493.setName("Joint")
ProtoInstance493.setDEF("hanim_sacroiliac")
fieldValue494 = x3d.fieldValue()
fieldValue494.setName("stiffness")
fieldValue494.setValue("1 1 1")

ProtoInstance493.addFieldValue(fieldValue494)
fieldValue495 = x3d.fieldValue()
fieldValue495.setName("name")
fieldValue495.setValue("sacroiliac")

ProtoInstance493.addFieldValue(fieldValue495)
fieldValue496 = x3d.fieldValue()
fieldValue496.setName("center")
fieldValue496.setValue("0 0.914900004863739 0.0015999999595806003")

ProtoInstance493.addFieldValue(fieldValue496)
fieldValue497 = x3d.fieldValue()
fieldValue497.setName("children")
ProtoInstance498 = x3d.ProtoInstance()
ProtoInstance498.setName("Joint")
ProtoInstance498.setDEF("hanim_l_hip")
fieldValue499 = x3d.fieldValue()
fieldValue499.setName("stiffness")
fieldValue499.setValue("1 1 1")

ProtoInstance498.addFieldValue(fieldValue499)
fieldValue500 = x3d.fieldValue()
fieldValue500.setName("name")
fieldValue500.setValue("l_hip")

ProtoInstance498.addFieldValue(fieldValue500)
fieldValue501 = x3d.fieldValue()
fieldValue501.setName("center")
fieldValue501.setValue("0.09610000252723694 0.9124000072479248 -0.00009999999747378752")

ProtoInstance498.addFieldValue(fieldValue501)
fieldValue502 = x3d.fieldValue()
fieldValue502.setName("children")
ProtoInstance503 = x3d.ProtoInstance()
ProtoInstance503.setName("Joint")
ProtoInstance503.setDEF("hanim_l_knee")
fieldValue504 = x3d.fieldValue()
fieldValue504.setName("stiffness")
fieldValue504.setValue("1 1 1")

ProtoInstance503.addFieldValue(fieldValue504)
fieldValue505 = x3d.fieldValue()
fieldValue505.setName("name")
fieldValue505.setValue("l_knee")

ProtoInstance503.addFieldValue(fieldValue505)
fieldValue506 = x3d.fieldValue()
fieldValue506.setName("center")
fieldValue506.setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995")

ProtoInstance503.addFieldValue(fieldValue506)
fieldValue507 = x3d.fieldValue()
fieldValue507.setName("children")
ProtoInstance508 = x3d.ProtoInstance()
ProtoInstance508.setName("Joint")
ProtoInstance508.setDEF("hanim_l_talocrural")
fieldValue509 = x3d.fieldValue()
fieldValue509.setName("stiffness")
fieldValue509.setValue("1 1 1")

ProtoInstance508.addFieldValue(fieldValue509)
fieldValue510 = x3d.fieldValue()
fieldValue510.setName("name")
fieldValue510.setValue("l_talocrural")

ProtoInstance508.addFieldValue(fieldValue510)
fieldValue511 = x3d.fieldValue()
fieldValue511.setName("center")
fieldValue511.setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727")

ProtoInstance508.addFieldValue(fieldValue511)
fieldValue512 = x3d.fieldValue()
fieldValue512.setName("children")
ProtoInstance513 = x3d.ProtoInstance()
ProtoInstance513.setName("Joint")
ProtoInstance513.setDEF("hanim_l_metatarsophalangeal_")
fieldValue514 = x3d.fieldValue()
fieldValue514.setName("stiffness")
fieldValue514.setValue("1 1 1")

ProtoInstance513.addFieldValue(fieldValue514)
fieldValue515 = x3d.fieldValue()
fieldValue515.setName("name")
fieldValue515.setValue("l_metatarsophalangeal_")

ProtoInstance513.addFieldValue(fieldValue515)
fieldValue516 = x3d.fieldValue()
fieldValue516.setName("center")
fieldValue516.setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363")

ProtoInstance513.addFieldValue(fieldValue516)
fieldValue517 = x3d.fieldValue()
fieldValue517.setName("children")
ProtoInstance518 = x3d.ProtoInstance()
ProtoInstance518.setName("Segment")
ProtoInstance518.setDEF("hanim_l_middistal")
fieldValue519 = x3d.fieldValue()
fieldValue519.setName("name")
fieldValue519.setValue("l_middistal")

ProtoInstance518.addFieldValue(fieldValue519)
fieldValue520 = x3d.fieldValue()
fieldValue520.setName("children")
ProtoInstance521 = x3d.ProtoInstance()
ProtoInstance521.setName("Site")
ProtoInstance521.setDEF("hanim_l_middistal_tip")
fieldValue522 = x3d.fieldValue()
fieldValue522.setName("name")
fieldValue522.setValue("l_middistal_tip")

ProtoInstance521.addFieldValue(fieldValue522)
fieldValue523 = x3d.fieldValue()
fieldValue523.setName("translation")
fieldValue523.setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261")

ProtoInstance521.addFieldValue(fieldValue523)

fieldValue520.addChildren(ProtoInstance521)
ProtoInstance524 = x3d.ProtoInstance()
ProtoInstance524.setName("Site")
ProtoInstance524.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue525 = x3d.fieldValue()
fieldValue525.setName("name")
fieldValue525.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance524.addFieldValue(fieldValue525)
fieldValue526 = x3d.fieldValue()
fieldValue526.setName("translation")
fieldValue526.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance524.addFieldValue(fieldValue526)

fieldValue520.addChildren(ProtoInstance524)
ProtoInstance527 = x3d.ProtoInstance()
ProtoInstance527.setName("Site")
ProtoInstance527.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue528 = x3d.fieldValue()
fieldValue528.setName("name")
fieldValue528.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance527.addFieldValue(fieldValue528)
fieldValue529 = x3d.fieldValue()
fieldValue529.setName("translation")
fieldValue529.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance527.addFieldValue(fieldValue529)

fieldValue520.addChildren(ProtoInstance527)
ProtoInstance530 = x3d.ProtoInstance()
ProtoInstance530.setName("Site")
ProtoInstance530.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue531 = x3d.fieldValue()
fieldValue531.setName("name")
fieldValue531.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance530.addFieldValue(fieldValue531)
fieldValue532 = x3d.fieldValue()
fieldValue532.setName("translation")
fieldValue532.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance530.addFieldValue(fieldValue532)

fieldValue520.addChildren(ProtoInstance530)

ProtoInstance518.addFieldValue(fieldValue520)

fieldValue517.addChildren(ProtoInstance518)

ProtoInstance513.addFieldValue(fieldValue517)

fieldValue512.addChildren(ProtoInstance513)
ProtoInstance533 = x3d.ProtoInstance()
ProtoInstance533.setName("Segment")
ProtoInstance533.setDEF("hanim_l_hindfoot")
fieldValue534 = x3d.fieldValue()
fieldValue534.setName("name")
fieldValue534.setValue("l_hindfoot")

ProtoInstance533.addFieldValue(fieldValue534)
fieldValue535 = x3d.fieldValue()
fieldValue535.setName("children")
ProtoInstance536 = x3d.ProtoInstance()
ProtoInstance536.setName("Site")
ProtoInstance536.setDEF("hanim_l_lateral_malleolus")
fieldValue537 = x3d.fieldValue()
fieldValue537.setName("name")
fieldValue537.setValue("l_lateral_malleolus")

ProtoInstance536.addFieldValue(fieldValue537)
fieldValue538 = x3d.fieldValue()
fieldValue538.setName("translation")
fieldValue538.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance536.addFieldValue(fieldValue538)

fieldValue535.addChildren(ProtoInstance536)
ProtoInstance539 = x3d.ProtoInstance()
ProtoInstance539.setName("Site")
ProtoInstance539.setDEF("hanim_l_medial_malleolus")
fieldValue540 = x3d.fieldValue()
fieldValue540.setName("name")
fieldValue540.setValue("l_medial_malleolus")

ProtoInstance539.addFieldValue(fieldValue540)
fieldValue541 = x3d.fieldValue()
fieldValue541.setName("translation")
fieldValue541.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance539.addFieldValue(fieldValue541)

fieldValue535.addChildren(ProtoInstance539)
ProtoInstance542 = x3d.ProtoInstance()
ProtoInstance542.setName("Site")
ProtoInstance542.setDEF("hanim_l_sphyrion")
fieldValue543 = x3d.fieldValue()
fieldValue543.setName("name")
fieldValue543.setValue("l_sphyrion")

ProtoInstance542.addFieldValue(fieldValue543)
fieldValue544 = x3d.fieldValue()
fieldValue544.setName("translation")
fieldValue544.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance542.addFieldValue(fieldValue544)

fieldValue535.addChildren(ProtoInstance542)
ProtoInstance545 = x3d.ProtoInstance()
ProtoInstance545.setName("Site")
ProtoInstance545.setDEF("hanim_l_calcaneus_posterior")
fieldValue546 = x3d.fieldValue()
fieldValue546.setName("name")
fieldValue546.setValue("l_calcaneus_posterior")

ProtoInstance545.addFieldValue(fieldValue546)
fieldValue547 = x3d.fieldValue()
fieldValue547.setName("translation")
fieldValue547.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance545.addFieldValue(fieldValue547)

fieldValue535.addChildren(ProtoInstance545)

ProtoInstance533.addFieldValue(fieldValue535)

fieldValue512.addChildren(ProtoInstance533)

ProtoInstance508.addFieldValue(fieldValue512)

fieldValue507.addChildren(ProtoInstance508)
ProtoInstance548 = x3d.ProtoInstance()
ProtoInstance548.setName("Segment")
ProtoInstance548.setDEF("hanim_l_calf")
fieldValue549 = x3d.fieldValue()
fieldValue549.setName("name")
fieldValue549.setValue("l_calf")

ProtoInstance548.addFieldValue(fieldValue549)

fieldValue507.addChildren(ProtoInstance548)

ProtoInstance503.addFieldValue(fieldValue507)

fieldValue502.addChildren(ProtoInstance503)
ProtoInstance550 = x3d.ProtoInstance()
ProtoInstance550.setName("Segment")
ProtoInstance550.setDEF("hanim_l_thigh")
fieldValue551 = x3d.fieldValue()
fieldValue551.setName("name")
fieldValue551.setValue("l_thigh")

ProtoInstance550.addFieldValue(fieldValue551)
fieldValue552 = x3d.fieldValue()
fieldValue552.setName("children")
ProtoInstance553 = x3d.ProtoInstance()
ProtoInstance553.setName("Site")
ProtoInstance553.setDEF("hanim_l_knee_crease")
fieldValue554 = x3d.fieldValue()
fieldValue554.setName("name")
fieldValue554.setValue("l_knee_crease")

ProtoInstance553.addFieldValue(fieldValue554)
fieldValue555 = x3d.fieldValue()
fieldValue555.setName("translation")
fieldValue555.setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757")

ProtoInstance553.addFieldValue(fieldValue555)

fieldValue552.addChildren(ProtoInstance553)
ProtoInstance556 = x3d.ProtoInstance()
ProtoInstance556.setName("Site")
ProtoInstance556.setDEF("hanim_l_femoral_lateral_epicondyles")
fieldValue557 = x3d.fieldValue()
fieldValue557.setName("name")
fieldValue557.setValue("l_femoral_lateral_epicondyles")

ProtoInstance556.addFieldValue(fieldValue557)
fieldValue558 = x3d.fieldValue()
fieldValue558.setName("translation")
fieldValue558.setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746")

ProtoInstance556.addFieldValue(fieldValue558)

fieldValue552.addChildren(ProtoInstance556)
ProtoInstance559 = x3d.ProtoInstance()
ProtoInstance559.setName("Site")
ProtoInstance559.setDEF("hanim_l_femoral_medial_epicondyles")
fieldValue560 = x3d.fieldValue()
fieldValue560.setName("name")
fieldValue560.setValue("l_femoral_lateral_epicondyles")

ProtoInstance559.addFieldValue(fieldValue560)
fieldValue561 = x3d.fieldValue()
fieldValue561.setName("translation")
fieldValue561.setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183")

ProtoInstance559.addFieldValue(fieldValue561)

fieldValue552.addChildren(ProtoInstance559)

ProtoInstance550.addFieldValue(fieldValue552)

fieldValue502.addChildren(ProtoInstance550)

ProtoInstance498.addFieldValue(fieldValue502)

fieldValue497.addChildren(ProtoInstance498)
ProtoInstance562 = x3d.ProtoInstance()
ProtoInstance562.setName("Joint")
ProtoInstance562.setDEF("hanim_r_hip")
fieldValue563 = x3d.fieldValue()
fieldValue563.setName("stiffness")
fieldValue563.setValue("1 1 1")

ProtoInstance562.addFieldValue(fieldValue563)
fieldValue564 = x3d.fieldValue()
fieldValue564.setName("name")
fieldValue564.setValue("r_hip")

ProtoInstance562.addFieldValue(fieldValue564)
fieldValue565 = x3d.fieldValue()
fieldValue565.setName("center")
fieldValue565.setValue("-0.0949999988079071 0.9171000123023987 0.002899999963119626")

ProtoInstance562.addFieldValue(fieldValue565)
fieldValue566 = x3d.fieldValue()
fieldValue566.setName("children")
ProtoInstance567 = x3d.ProtoInstance()
ProtoInstance567.setName("Joint")
ProtoInstance567.setDEF("hanim_r_knee")
fieldValue568 = x3d.fieldValue()
fieldValue568.setName("stiffness")
fieldValue568.setValue("1 1 1")

ProtoInstance567.addFieldValue(fieldValue568)
fieldValue569 = x3d.fieldValue()
fieldValue569.setName("name")
fieldValue569.setValue("r_knee")

ProtoInstance567.addFieldValue(fieldValue569)
fieldValue570 = x3d.fieldValue()
fieldValue570.setName("center")
fieldValue570.setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492")

ProtoInstance567.addFieldValue(fieldValue570)
fieldValue571 = x3d.fieldValue()
fieldValue571.setName("children")
ProtoInstance572 = x3d.ProtoInstance()
ProtoInstance572.setName("Joint")
ProtoInstance572.setDEF("hanim_r_talocrural")
fieldValue573 = x3d.fieldValue()
fieldValue573.setName("stiffness")
fieldValue573.setValue("1 1 1")

ProtoInstance572.addFieldValue(fieldValue573)
fieldValue574 = x3d.fieldValue()
fieldValue574.setName("name")
fieldValue574.setValue("r_talocrural")

ProtoInstance572.addFieldValue(fieldValue574)
fieldValue575 = x3d.fieldValue()
fieldValue575.setName("center")
fieldValue575.setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044")

ProtoInstance572.addFieldValue(fieldValue575)
fieldValue576 = x3d.fieldValue()
fieldValue576.setName("children")
ProtoInstance577 = x3d.ProtoInstance()
ProtoInstance577.setName("Joint")
ProtoInstance577.setDEF("hanim_r_metatarsophalangeal_")
fieldValue578 = x3d.fieldValue()
fieldValue578.setName("stiffness")
fieldValue578.setValue("1 1 1")

ProtoInstance577.addFieldValue(fieldValue578)
fieldValue579 = x3d.fieldValue()
fieldValue579.setName("name")
fieldValue579.setValue("r_metatarsophalangeal_")

ProtoInstance577.addFieldValue(fieldValue579)
fieldValue580 = x3d.fieldValue()
fieldValue580.setName("center")
fieldValue580.setValue("-0.08009999990463257 0 0.03680000081658363")

ProtoInstance577.addFieldValue(fieldValue580)
fieldValue581 = x3d.fieldValue()
fieldValue581.setName("children")
ProtoInstance582 = x3d.ProtoInstance()
ProtoInstance582.setName("Segment")
ProtoInstance582.setDEF("hanim_r_middistal")
fieldValue583 = x3d.fieldValue()
fieldValue583.setName("name")
fieldValue583.setValue("r_middistal")

ProtoInstance582.addFieldValue(fieldValue583)
fieldValue584 = x3d.fieldValue()
fieldValue584.setName("children")
ProtoInstance585 = x3d.ProtoInstance()
ProtoInstance585.setName("Site")
ProtoInstance585.setDEF("hanim_r_middistal_tip")
fieldValue586 = x3d.fieldValue()
fieldValue586.setName("name")
fieldValue586.setValue("r_middistal_tip")

ProtoInstance585.addFieldValue(fieldValue586)
fieldValue587 = x3d.fieldValue()
fieldValue587.setName("translation")
fieldValue587.setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")

ProtoInstance585.addFieldValue(fieldValue587)

fieldValue584.addChildren(ProtoInstance585)
ProtoInstance588 = x3d.ProtoInstance()
ProtoInstance588.setName("Site")
ProtoInstance588.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue589 = x3d.fieldValue()
fieldValue589.setName("name")
fieldValue589.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance588.addFieldValue(fieldValue589)
fieldValue590 = x3d.fieldValue()
fieldValue590.setName("translation")
fieldValue590.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance588.addFieldValue(fieldValue590)

fieldValue584.addChildren(ProtoInstance588)
ProtoInstance591 = x3d.ProtoInstance()
ProtoInstance591.setName("Site")
ProtoInstance591.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue592 = x3d.fieldValue()
fieldValue592.setName("name")
fieldValue592.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance591.addFieldValue(fieldValue592)
fieldValue593 = x3d.fieldValue()
fieldValue593.setName("translation")
fieldValue593.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance591.addFieldValue(fieldValue593)

fieldValue584.addChildren(ProtoInstance591)
ProtoInstance594 = x3d.ProtoInstance()
ProtoInstance594.setName("Site")
ProtoInstance594.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue595 = x3d.fieldValue()
fieldValue595.setName("name")
fieldValue595.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance594.addFieldValue(fieldValue595)
fieldValue596 = x3d.fieldValue()
fieldValue596.setName("translation")
fieldValue596.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance594.addFieldValue(fieldValue596)

fieldValue584.addChildren(ProtoInstance594)

ProtoInstance582.addFieldValue(fieldValue584)

fieldValue581.addChildren(ProtoInstance582)

ProtoInstance577.addFieldValue(fieldValue581)

fieldValue576.addChildren(ProtoInstance577)
ProtoInstance597 = x3d.ProtoInstance()
ProtoInstance597.setName("Segment")
ProtoInstance597.setDEF("hanim_r_hindfoot")
fieldValue598 = x3d.fieldValue()
fieldValue598.setName("name")
fieldValue598.setValue("r_hindfoot")

ProtoInstance597.addFieldValue(fieldValue598)
fieldValue599 = x3d.fieldValue()
fieldValue599.setName("children")
ProtoInstance600 = x3d.ProtoInstance()
ProtoInstance600.setName("Site")
ProtoInstance600.setDEF("hanim_r_lateral_malleolus")
fieldValue601 = x3d.fieldValue()
fieldValue601.setName("name")
fieldValue601.setValue("r_lateral_malleolus")

ProtoInstance600.addFieldValue(fieldValue601)
fieldValue602 = x3d.fieldValue()
fieldValue602.setName("translation")
fieldValue602.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance600.addFieldValue(fieldValue602)

fieldValue599.addChildren(ProtoInstance600)
ProtoInstance603 = x3d.ProtoInstance()
ProtoInstance603.setName("Site")
ProtoInstance603.setDEF("hanim_r_medial_malleolus")
fieldValue604 = x3d.fieldValue()
fieldValue604.setName("name")
fieldValue604.setValue("r_medial_malleolus")

ProtoInstance603.addFieldValue(fieldValue604)
fieldValue605 = x3d.fieldValue()
fieldValue605.setName("translation")
fieldValue605.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance603.addFieldValue(fieldValue605)

fieldValue599.addChildren(ProtoInstance603)
ProtoInstance606 = x3d.ProtoInstance()
ProtoInstance606.setName("Site")
ProtoInstance606.setDEF("hanim_r_sphyrion")
fieldValue607 = x3d.fieldValue()
fieldValue607.setName("name")
fieldValue607.setValue("r_sphyrion")

ProtoInstance606.addFieldValue(fieldValue607)
fieldValue608 = x3d.fieldValue()
fieldValue608.setName("translation")
fieldValue608.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance606.addFieldValue(fieldValue608)

fieldValue599.addChildren(ProtoInstance606)
ProtoInstance609 = x3d.ProtoInstance()
ProtoInstance609.setName("Site")
ProtoInstance609.setDEF("hanim_r_calcaneus_posterior")
fieldValue610 = x3d.fieldValue()
fieldValue610.setName("name")
fieldValue610.setValue("r_calcaneus_posterior")

ProtoInstance609.addFieldValue(fieldValue610)
fieldValue611 = x3d.fieldValue()
fieldValue611.setName("translation")
fieldValue611.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance609.addFieldValue(fieldValue611)

fieldValue599.addChildren(ProtoInstance609)

ProtoInstance597.addFieldValue(fieldValue599)

fieldValue576.addChildren(ProtoInstance597)

ProtoInstance572.addFieldValue(fieldValue576)

fieldValue571.addChildren(ProtoInstance572)
ProtoInstance612 = x3d.ProtoInstance()
ProtoInstance612.setName("Segment")
ProtoInstance612.setDEF("hanim_r_calf")
fieldValue613 = x3d.fieldValue()
fieldValue613.setName("name")
fieldValue613.setValue("r_calf")

ProtoInstance612.addFieldValue(fieldValue613)

fieldValue571.addChildren(ProtoInstance612)

ProtoInstance567.addFieldValue(fieldValue571)

fieldValue566.addChildren(ProtoInstance567)
ProtoInstance614 = x3d.ProtoInstance()
ProtoInstance614.setName("Segment")
ProtoInstance614.setDEF("hanim_r_thigh")
fieldValue615 = x3d.fieldValue()
fieldValue615.setName("name")
fieldValue615.setValue("r_thigh")

ProtoInstance614.addFieldValue(fieldValue615)
fieldValue616 = x3d.fieldValue()
fieldValue616.setName("children")
ProtoInstance617 = x3d.ProtoInstance()
ProtoInstance617.setName("Site")
ProtoInstance617.setDEF("hanim_r_knee_crease")
fieldValue618 = x3d.fieldValue()
fieldValue618.setName("name")
fieldValue618.setValue("r_knee_crease")

ProtoInstance617.addFieldValue(fieldValue618)
fieldValue619 = x3d.fieldValue()
fieldValue619.setName("translation")
fieldValue619.setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")

ProtoInstance617.addFieldValue(fieldValue619)

fieldValue616.addChildren(ProtoInstance617)
ProtoInstance620 = x3d.ProtoInstance()
ProtoInstance620.setName("Site")
ProtoInstance620.setDEF("hanim_r_femoral_lateral_epicondyles")
fieldValue621 = x3d.fieldValue()
fieldValue621.setName("name")
fieldValue621.setValue("r_femoral_lateral_epicondyles")

ProtoInstance620.addFieldValue(fieldValue621)
fieldValue622 = x3d.fieldValue()
fieldValue622.setName("translation")
fieldValue622.setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052")

ProtoInstance620.addFieldValue(fieldValue622)

fieldValue616.addChildren(ProtoInstance620)
ProtoInstance623 = x3d.ProtoInstance()
ProtoInstance623.setName("Site")
ProtoInstance623.setDEF("hanim_r_femoral_medial_epicondyles")
fieldValue624 = x3d.fieldValue()
fieldValue624.setName("name")
fieldValue624.setValue("r_femoral_lateral_epicondyles")

ProtoInstance623.addFieldValue(fieldValue624)
fieldValue625 = x3d.fieldValue()
fieldValue625.setName("translation")
fieldValue625.setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821")

ProtoInstance623.addFieldValue(fieldValue625)

fieldValue616.addChildren(ProtoInstance623)

ProtoInstance614.addFieldValue(fieldValue616)

fieldValue566.addChildren(ProtoInstance614)

ProtoInstance562.addFieldValue(fieldValue566)

fieldValue497.addChildren(ProtoInstance562)
ProtoInstance626 = x3d.ProtoInstance()
ProtoInstance626.setName("Segment")
ProtoInstance626.setDEF("hanim_pelvis")
fieldValue627 = x3d.fieldValue()
fieldValue627.setName("name")
fieldValue627.setValue("pelvis")

ProtoInstance626.addFieldValue(fieldValue627)

fieldValue497.addChildren(ProtoInstance626)

ProtoInstance493.addFieldValue(fieldValue497)

fieldValue492.addChildren(ProtoInstance493)
ProtoInstance628 = x3d.ProtoInstance()
ProtoInstance628.setName("Joint")
ProtoInstance628.setDEF("hanim_vl5")
fieldValue629 = x3d.fieldValue()
fieldValue629.setName("stiffness")
fieldValue629.setValue("1 1 1")

ProtoInstance628.addFieldValue(fieldValue629)
fieldValue630 = x3d.fieldValue()
fieldValue630.setName("name")
fieldValue630.setValue("vl5")

ProtoInstance628.addFieldValue(fieldValue630)
fieldValue631 = x3d.fieldValue()
fieldValue631.setName("center")
fieldValue631.setValue("0.00279999990016222 1.0568000078201294 -0.07760000228881836")

ProtoInstance628.addFieldValue(fieldValue631)
fieldValue632 = x3d.fieldValue()
fieldValue632.setName("children")
ProtoInstance633 = x3d.ProtoInstance()
ProtoInstance633.setName("Joint")
ProtoInstance633.setDEF("hanim_skullbase")
fieldValue634 = x3d.fieldValue()
fieldValue634.setName("stiffness")
fieldValue634.setValue("1 1 1")

ProtoInstance633.addFieldValue(fieldValue634)
fieldValue635 = x3d.fieldValue()
fieldValue635.setName("name")
fieldValue635.setValue("skullbase")

ProtoInstance633.addFieldValue(fieldValue635)
fieldValue636 = x3d.fieldValue()
fieldValue636.setName("center")
fieldValue636.setValue("0.004399999976158142 1.62090003490448 0.023600000888109207")

ProtoInstance633.addFieldValue(fieldValue636)
fieldValue637 = x3d.fieldValue()
fieldValue637.setName("children")
ProtoInstance638 = x3d.ProtoInstance()
ProtoInstance638.setName("Segment")
ProtoInstance638.setDEF("hanim_skull")
fieldValue639 = x3d.fieldValue()
fieldValue639.setName("name")
fieldValue639.setValue("skull")

ProtoInstance638.addFieldValue(fieldValue639)
fieldValue640 = x3d.fieldValue()
fieldValue640.setName("children")
ProtoInstance641 = x3d.ProtoInstance()
ProtoInstance641.setName("Site")
ProtoInstance641.setDEF("hanim_skull_tip")
fieldValue642 = x3d.fieldValue()
fieldValue642.setName("name")
fieldValue642.setValue("skull_tip")

ProtoInstance641.addFieldValue(fieldValue642)
fieldValue643 = x3d.fieldValue()
fieldValue643.setName("translation")
fieldValue643.setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678")

ProtoInstance641.addFieldValue(fieldValue643)

fieldValue640.addChildren(ProtoInstance641)
ProtoInstance644 = x3d.ProtoInstance()
ProtoInstance644.setName("Site")
ProtoInstance644.setDEF("hanim_sellion")
fieldValue645 = x3d.fieldValue()
fieldValue645.setName("name")
fieldValue645.setValue("sellion")

ProtoInstance644.addFieldValue(fieldValue645)
fieldValue646 = x3d.fieldValue()
fieldValue646.setName("translation")
fieldValue646.setValue("0.005799999926239252 1.631600022315979 0.0851999968290329")

ProtoInstance644.addFieldValue(fieldValue646)

fieldValue640.addChildren(ProtoInstance644)
ProtoInstance647 = x3d.ProtoInstance()
ProtoInstance647.setName("Site")
ProtoInstance647.setDEF("hanim_r_infraorbitale")
fieldValue648 = x3d.fieldValue()
fieldValue648.setName("name")
fieldValue648.setValue("r_infraorbitale")

ProtoInstance647.addFieldValue(fieldValue648)
fieldValue649 = x3d.fieldValue()
fieldValue649.setName("translation")
fieldValue649.setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547")

ProtoInstance647.addFieldValue(fieldValue649)

fieldValue640.addChildren(ProtoInstance647)
ProtoInstance650 = x3d.ProtoInstance()
ProtoInstance650.setName("Site")
ProtoInstance650.setDEF("hanim_l_infraorbitale")
fieldValue651 = x3d.fieldValue()
fieldValue651.setName("name")
fieldValue651.setValue("l_infraorbitale")

ProtoInstance650.addFieldValue(fieldValue651)
fieldValue652 = x3d.fieldValue()
fieldValue652.setName("translation")
fieldValue652.setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547")

ProtoInstance650.addFieldValue(fieldValue652)

fieldValue640.addChildren(ProtoInstance650)
ProtoInstance653 = x3d.ProtoInstance()
ProtoInstance653.setName("Site")
ProtoInstance653.setDEF("hanim_supramenton")
fieldValue654 = x3d.fieldValue()
fieldValue654.setName("name")
fieldValue654.setValue("supramenton")

ProtoInstance653.addFieldValue(fieldValue654)
fieldValue655 = x3d.fieldValue()
fieldValue655.setName("translation")
fieldValue655.setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962")

ProtoInstance653.addFieldValue(fieldValue655)

fieldValue640.addChildren(ProtoInstance653)
ProtoInstance656 = x3d.ProtoInstance()
ProtoInstance656.setName("Site")
ProtoInstance656.setDEF("hanim_r_tragion")
fieldValue657 = x3d.fieldValue()
fieldValue657.setName("name")
fieldValue657.setValue("r_tragion")

ProtoInstance656.addFieldValue(fieldValue657)
fieldValue658 = x3d.fieldValue()
fieldValue658.setName("translation")
fieldValue658.setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642")

ProtoInstance656.addFieldValue(fieldValue658)

fieldValue640.addChildren(ProtoInstance656)
ProtoInstance659 = x3d.ProtoInstance()
ProtoInstance659.setName("Site")
ProtoInstance659.setDEF("hanim_r_gonion")
fieldValue660 = x3d.fieldValue()
fieldValue660.setName("name")
fieldValue660.setValue("r_gonion")

ProtoInstance659.addFieldValue(fieldValue660)
fieldValue661 = x3d.fieldValue()
fieldValue661.setName("translation")
fieldValue661.setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176")

ProtoInstance659.addFieldValue(fieldValue661)

fieldValue640.addChildren(ProtoInstance659)
ProtoInstance662 = x3d.ProtoInstance()
ProtoInstance662.setName("Site")
ProtoInstance662.setDEF("hanim_l_tragion")
fieldValue663 = x3d.fieldValue()
fieldValue663.setName("name")
fieldValue663.setValue("l_tragion")

ProtoInstance662.addFieldValue(fieldValue663)
fieldValue664 = x3d.fieldValue()
fieldValue664.setName("translation")
fieldValue664.setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874")

ProtoInstance662.addFieldValue(fieldValue664)

fieldValue640.addChildren(ProtoInstance662)
ProtoInstance665 = x3d.ProtoInstance()
ProtoInstance665.setName("Site")
ProtoInstance665.setDEF("hanim_l_gonion")
fieldValue666 = x3d.fieldValue()
fieldValue666.setName("name")
fieldValue666.setValue("l_gonion")

ProtoInstance665.addFieldValue(fieldValue666)
fieldValue667 = x3d.fieldValue()
fieldValue667.setName("translation")
fieldValue667.setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066")

ProtoInstance665.addFieldValue(fieldValue667)

fieldValue640.addChildren(ProtoInstance665)
ProtoInstance668 = x3d.ProtoInstance()
ProtoInstance668.setName("Site")
ProtoInstance668.setDEF("hanim_nuchale")
fieldValue669 = x3d.fieldValue()
fieldValue669.setName("name")
fieldValue669.setValue("nuchale")

ProtoInstance668.addFieldValue(fieldValue669)
fieldValue670 = x3d.fieldValue()
fieldValue670.setName("translation")
fieldValue670.setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")

ProtoInstance668.addFieldValue(fieldValue670)

fieldValue640.addChildren(ProtoInstance668)

ProtoInstance638.addFieldValue(fieldValue640)

fieldValue637.addChildren(ProtoInstance638)

ProtoInstance633.addFieldValue(fieldValue637)

fieldValue632.addChildren(ProtoInstance633)
ProtoInstance671 = x3d.ProtoInstance()
ProtoInstance671.setName("Joint")
ProtoInstance671.setDEF("hanim_l_shoulder")
fieldValue672 = x3d.fieldValue()
fieldValue672.setName("stiffness")
fieldValue672.setValue("1 1 1")

ProtoInstance671.addFieldValue(fieldValue672)
fieldValue673 = x3d.fieldValue()
fieldValue673.setName("name")
fieldValue673.setValue("l_shoulder")

ProtoInstance671.addFieldValue(fieldValue673)
fieldValue674 = x3d.fieldValue()
fieldValue674.setName("center")
fieldValue674.setValue("0.2029000073671341 1.437600016593933 -0.03869999945163727")

ProtoInstance671.addFieldValue(fieldValue674)
fieldValue675 = x3d.fieldValue()
fieldValue675.setName("children")
ProtoInstance676 = x3d.ProtoInstance()
ProtoInstance676.setName("Joint")
ProtoInstance676.setDEF("hanim_l_elbow")
fieldValue677 = x3d.fieldValue()
fieldValue677.setName("stiffness")
fieldValue677.setValue("1 1 1")

ProtoInstance676.addFieldValue(fieldValue677)
fieldValue678 = x3d.fieldValue()
fieldValue678.setName("name")
fieldValue678.setValue("l_elbow")

ProtoInstance676.addFieldValue(fieldValue678)
fieldValue679 = x3d.fieldValue()
fieldValue679.setName("center")
fieldValue679.setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512")

ProtoInstance676.addFieldValue(fieldValue679)
fieldValue680 = x3d.fieldValue()
fieldValue680.setName("children")
ProtoInstance681 = x3d.ProtoInstance()
ProtoInstance681.setName("Joint")
ProtoInstance681.setDEF("hanim_l_radiocarpal")
fieldValue682 = x3d.fieldValue()
fieldValue682.setName("stiffness")
fieldValue682.setValue("1 1 1")

ProtoInstance681.addFieldValue(fieldValue682)
fieldValue683 = x3d.fieldValue()
fieldValue683.setName("name")
fieldValue683.setValue("l_radiocarpal")

ProtoInstance681.addFieldValue(fieldValue683)
fieldValue684 = x3d.fieldValue()
fieldValue684.setName("center")
fieldValue684.setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538")

ProtoInstance681.addFieldValue(fieldValue684)
fieldValue685 = x3d.fieldValue()
fieldValue685.setName("children")
ProtoInstance686 = x3d.ProtoInstance()
ProtoInstance686.setName("Segment")
ProtoInstance686.setDEF("hanim_l_hand")
fieldValue687 = x3d.fieldValue()
fieldValue687.setName("name")
fieldValue687.setValue("l_hand")

ProtoInstance686.addFieldValue(fieldValue687)
fieldValue688 = x3d.fieldValue()
fieldValue688.setName("children")
ProtoInstance689 = x3d.ProtoInstance()
ProtoInstance689.setName("Site")
ProtoInstance689.setDEF("hanim_l_hand_tip")
fieldValue690 = x3d.fieldValue()
fieldValue690.setName("name")
fieldValue690.setValue("l_hand_tip")

ProtoInstance689.addFieldValue(fieldValue690)
fieldValue691 = x3d.fieldValue()
fieldValue691.setName("translation")
fieldValue691.setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205")

ProtoInstance689.addFieldValue(fieldValue691)

fieldValue688.addChildren(ProtoInstance689)
ProtoInstance692 = x3d.ProtoInstance()
ProtoInstance692.setName("Site")
ProtoInstance692.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue693 = x3d.fieldValue()
fieldValue693.setName("name")
fieldValue693.setValue("l_metacarpal_phalanx_2")

ProtoInstance692.addFieldValue(fieldValue693)
fieldValue694 = x3d.fieldValue()
fieldValue694.setName("translation")
fieldValue694.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance692.addFieldValue(fieldValue694)

fieldValue688.addChildren(ProtoInstance692)
ProtoInstance695 = x3d.ProtoInstance()
ProtoInstance695.setName("Site")
ProtoInstance695.setDEF("hanim_l_dactylion")
fieldValue696 = x3d.fieldValue()
fieldValue696.setName("name")
fieldValue696.setValue("l_dactylion")

ProtoInstance695.addFieldValue(fieldValue696)
fieldValue697 = x3d.fieldValue()
fieldValue697.setName("translation")
fieldValue697.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance695.addFieldValue(fieldValue697)

fieldValue688.addChildren(ProtoInstance695)
ProtoInstance698 = x3d.ProtoInstance()
ProtoInstance698.setName("Site")
ProtoInstance698.setDEF("hanim_l_ulnar_styloid")
fieldValue699 = x3d.fieldValue()
fieldValue699.setName("name")
fieldValue699.setValue("l_ulnar_styloid")

ProtoInstance698.addFieldValue(fieldValue699)
fieldValue700 = x3d.fieldValue()
fieldValue700.setName("translation")
fieldValue700.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance698.addFieldValue(fieldValue700)

fieldValue688.addChildren(ProtoInstance698)
ProtoInstance701 = x3d.ProtoInstance()
ProtoInstance701.setName("Site")
ProtoInstance701.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue702 = x3d.fieldValue()
fieldValue702.setName("name")
fieldValue702.setValue("l_metacarpal_phalanx_5")

ProtoInstance701.addFieldValue(fieldValue702)
fieldValue703 = x3d.fieldValue()
fieldValue703.setName("translation")
fieldValue703.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance701.addFieldValue(fieldValue703)

fieldValue688.addChildren(ProtoInstance701)

ProtoInstance686.addFieldValue(fieldValue688)

fieldValue685.addChildren(ProtoInstance686)

ProtoInstance681.addFieldValue(fieldValue685)

fieldValue680.addChildren(ProtoInstance681)
ProtoInstance704 = x3d.ProtoInstance()
ProtoInstance704.setName("Segment")
ProtoInstance704.setDEF("hanim_l_forearm")
fieldValue705 = x3d.fieldValue()
fieldValue705.setName("name")
fieldValue705.setValue("l_forearm")

ProtoInstance704.addFieldValue(fieldValue705)
fieldValue706 = x3d.fieldValue()
fieldValue706.setName("children")
ProtoInstance707 = x3d.ProtoInstance()
ProtoInstance707.setName("Site")
ProtoInstance707.setDEF("hanim_l_radial_styloid")
fieldValue708 = x3d.fieldValue()
fieldValue708.setName("name")
fieldValue708.setValue("l_radial_styloid")

ProtoInstance707.addFieldValue(fieldValue708)
fieldValue709 = x3d.fieldValue()
fieldValue709.setName("translation")
fieldValue709.setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691")

ProtoInstance707.addFieldValue(fieldValue709)

fieldValue706.addChildren(ProtoInstance707)
ProtoInstance710 = x3d.ProtoInstance()
ProtoInstance710.setName("Site")
ProtoInstance710.setDEF("hanim_l_olecranon")
fieldValue711 = x3d.fieldValue()
fieldValue711.setName("name")
fieldValue711.setValue("l_olecranon")

ProtoInstance710.addFieldValue(fieldValue711)
fieldValue712 = x3d.fieldValue()
fieldValue712.setName("translation")
fieldValue712.setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")

ProtoInstance710.addFieldValue(fieldValue712)

fieldValue706.addChildren(ProtoInstance710)
ProtoInstance713 = x3d.ProtoInstance()
ProtoInstance713.setName("Site")
ProtoInstance713.setDEF("hanim_l_humeral_medial_epicondyles")
fieldValue714 = x3d.fieldValue()
fieldValue714.setName("name")
fieldValue714.setValue("l_humeral_medial_epicondyles")

ProtoInstance713.addFieldValue(fieldValue714)
fieldValue715 = x3d.fieldValue()
fieldValue715.setName("translation")
fieldValue715.setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661")

ProtoInstance713.addFieldValue(fieldValue715)

fieldValue706.addChildren(ProtoInstance713)
ProtoInstance716 = x3d.ProtoInstance()
ProtoInstance716.setName("Site")
ProtoInstance716.setDEF("hanim_l_radiale")
fieldValue717 = x3d.fieldValue()
fieldValue717.setName("name")
fieldValue717.setValue("l_radiale")

ProtoInstance716.addFieldValue(fieldValue717)
fieldValue718 = x3d.fieldValue()
fieldValue718.setName("translation")
fieldValue718.setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268")

ProtoInstance716.addFieldValue(fieldValue718)

fieldValue706.addChildren(ProtoInstance716)

ProtoInstance704.addFieldValue(fieldValue706)

fieldValue680.addChildren(ProtoInstance704)

ProtoInstance676.addFieldValue(fieldValue680)

fieldValue675.addChildren(ProtoInstance676)
ProtoInstance719 = x3d.ProtoInstance()
ProtoInstance719.setName("Segment")
ProtoInstance719.setDEF("hanim_l_upperarm")
fieldValue720 = x3d.fieldValue()
fieldValue720.setName("name")
fieldValue720.setValue("l_upperarm")

ProtoInstance719.addFieldValue(fieldValue720)
fieldValue721 = x3d.fieldValue()
fieldValue721.setName("children")
ProtoInstance722 = x3d.ProtoInstance()
ProtoInstance722.setName("Site")
ProtoInstance722.setDEF("hanim_l_humeral_lateral_epicondyles")
fieldValue723 = x3d.fieldValue()
fieldValue723.setName("name")
fieldValue723.setValue("l_humeral_lateral_epicondyles")

ProtoInstance722.addFieldValue(fieldValue723)
fieldValue724 = x3d.fieldValue()
fieldValue724.setName("translation")
fieldValue724.setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355")

ProtoInstance722.addFieldValue(fieldValue724)

fieldValue721.addChildren(ProtoInstance722)

ProtoInstance719.addFieldValue(fieldValue721)

fieldValue675.addChildren(ProtoInstance719)

ProtoInstance671.addFieldValue(fieldValue675)

fieldValue632.addChildren(ProtoInstance671)
ProtoInstance725 = x3d.ProtoInstance()
ProtoInstance725.setName("Joint")
ProtoInstance725.setDEF("hanim_r_shoulder")
fieldValue726 = x3d.fieldValue()
fieldValue726.setName("stiffness")
fieldValue726.setValue("1 1 1")

ProtoInstance725.addFieldValue(fieldValue726)
fieldValue727 = x3d.fieldValue()
fieldValue727.setName("name")
fieldValue727.setValue("r_shoulder")

ProtoInstance725.addFieldValue(fieldValue727)
fieldValue728 = x3d.fieldValue()
fieldValue728.setName("center")
fieldValue728.setValue("-0.1906999945640564 1.4407000541687012 -0.032499998807907104")

ProtoInstance725.addFieldValue(fieldValue728)
fieldValue729 = x3d.fieldValue()
fieldValue729.setName("children")
ProtoInstance730 = x3d.ProtoInstance()
ProtoInstance730.setName("Joint")
ProtoInstance730.setDEF("hanim_r_elbow")
fieldValue731 = x3d.fieldValue()
fieldValue731.setName("stiffness")
fieldValue731.setValue("1 1 1")

ProtoInstance730.addFieldValue(fieldValue731)
fieldValue732 = x3d.fieldValue()
fieldValue732.setName("name")
fieldValue732.setValue("r_elbow")

ProtoInstance730.addFieldValue(fieldValue732)
fieldValue733 = x3d.fieldValue()
fieldValue733.setName("center")
fieldValue733.setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104")

ProtoInstance730.addFieldValue(fieldValue733)
fieldValue734 = x3d.fieldValue()
fieldValue734.setName("children")
ProtoInstance735 = x3d.ProtoInstance()
ProtoInstance735.setName("Joint")
ProtoInstance735.setDEF("hanim_r_radiocarpal")
fieldValue736 = x3d.fieldValue()
fieldValue736.setName("stiffness")
fieldValue736.setValue("1 1 1")

ProtoInstance735.addFieldValue(fieldValue736)
fieldValue737 = x3d.fieldValue()
fieldValue737.setName("name")
fieldValue737.setValue("r_radiocarpal")

ProtoInstance735.addFieldValue(fieldValue737)
fieldValue738 = x3d.fieldValue()
fieldValue738.setName("center")
fieldValue738.setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522")

ProtoInstance735.addFieldValue(fieldValue738)
fieldValue739 = x3d.fieldValue()
fieldValue739.setName("children")
ProtoInstance740 = x3d.ProtoInstance()
ProtoInstance740.setName("Segment")
ProtoInstance740.setDEF("hanim_r_hand")
fieldValue741 = x3d.fieldValue()
fieldValue741.setName("name")
fieldValue741.setValue("r_hand")

ProtoInstance740.addFieldValue(fieldValue741)
fieldValue742 = x3d.fieldValue()
fieldValue742.setName("children")
ProtoInstance743 = x3d.ProtoInstance()
ProtoInstance743.setName("Site")
ProtoInstance743.setDEF("hanim_r_hand_tip")
fieldValue744 = x3d.fieldValue()
fieldValue744.setName("name")
fieldValue744.setValue("r_hand_tip")

ProtoInstance743.addFieldValue(fieldValue744)
fieldValue745 = x3d.fieldValue()
fieldValue745.setName("translation")
fieldValue745.setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")

ProtoInstance743.addFieldValue(fieldValue745)

fieldValue742.addChildren(ProtoInstance743)
ProtoInstance746 = x3d.ProtoInstance()
ProtoInstance746.setName("Site")
ProtoInstance746.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue747 = x3d.fieldValue()
fieldValue747.setName("name")
fieldValue747.setValue("r_metacarpal_phalanx_2")

ProtoInstance746.addFieldValue(fieldValue747)
fieldValue748 = x3d.fieldValue()
fieldValue748.setName("translation")
fieldValue748.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance746.addFieldValue(fieldValue748)

fieldValue742.addChildren(ProtoInstance746)
ProtoInstance749 = x3d.ProtoInstance()
ProtoInstance749.setName("Site")
ProtoInstance749.setDEF("hanim_r_dactylion")
fieldValue750 = x3d.fieldValue()
fieldValue750.setName("name")
fieldValue750.setValue("r_dactylion")

ProtoInstance749.addFieldValue(fieldValue750)
fieldValue751 = x3d.fieldValue()
fieldValue751.setName("translation")
fieldValue751.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance749.addFieldValue(fieldValue751)

fieldValue742.addChildren(ProtoInstance749)
ProtoInstance752 = x3d.ProtoInstance()
ProtoInstance752.setName("Site")
ProtoInstance752.setDEF("hanim_r_ulnar_styloid")
fieldValue753 = x3d.fieldValue()
fieldValue753.setName("name")
fieldValue753.setValue("r_ulnar_styloid")

ProtoInstance752.addFieldValue(fieldValue753)
fieldValue754 = x3d.fieldValue()
fieldValue754.setName("translation")
fieldValue754.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance752.addFieldValue(fieldValue754)

fieldValue742.addChildren(ProtoInstance752)
ProtoInstance755 = x3d.ProtoInstance()
ProtoInstance755.setName("Site")
ProtoInstance755.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue756 = x3d.fieldValue()
fieldValue756.setName("name")
fieldValue756.setValue("r_metacarpal_phalanx_5")

ProtoInstance755.addFieldValue(fieldValue756)
fieldValue757 = x3d.fieldValue()
fieldValue757.setName("translation")
fieldValue757.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance755.addFieldValue(fieldValue757)

fieldValue742.addChildren(ProtoInstance755)

ProtoInstance740.addFieldValue(fieldValue742)

fieldValue739.addChildren(ProtoInstance740)

ProtoInstance735.addFieldValue(fieldValue739)

fieldValue734.addChildren(ProtoInstance735)
ProtoInstance758 = x3d.ProtoInstance()
ProtoInstance758.setName("Segment")
ProtoInstance758.setDEF("hanim_r_forearm")
fieldValue759 = x3d.fieldValue()
fieldValue759.setName("name")
fieldValue759.setValue("r_forearm")

ProtoInstance758.addFieldValue(fieldValue759)
fieldValue760 = x3d.fieldValue()
fieldValue760.setName("children")
ProtoInstance761 = x3d.ProtoInstance()
ProtoInstance761.setName("Site")
ProtoInstance761.setDEF("hanim_r_radial_styloid")
fieldValue762 = x3d.fieldValue()
fieldValue762.setName("name")
fieldValue762.setValue("r_radial_styloid")

ProtoInstance761.addFieldValue(fieldValue762)
fieldValue763 = x3d.fieldValue()
fieldValue763.setName("translation")
fieldValue763.setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236")

ProtoInstance761.addFieldValue(fieldValue763)

fieldValue760.addChildren(ProtoInstance761)
ProtoInstance764 = x3d.ProtoInstance()
ProtoInstance764.setName("Site")
ProtoInstance764.setDEF("hanim_r_olecranon")
fieldValue765 = x3d.fieldValue()
fieldValue765.setName("name")
fieldValue765.setValue("r_olecranon")

ProtoInstance764.addFieldValue(fieldValue765)
fieldValue766 = x3d.fieldValue()
fieldValue766.setName("translation")
fieldValue766.setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")

ProtoInstance764.addFieldValue(fieldValue766)

fieldValue760.addChildren(ProtoInstance764)
ProtoInstance767 = x3d.ProtoInstance()
ProtoInstance767.setName("Site")
ProtoInstance767.setDEF("hanim_r_humeral_medial_epicondyles")
fieldValue768 = x3d.fieldValue()
fieldValue768.setName("name")
fieldValue768.setValue("r_humeral_medial_epicondyles")

ProtoInstance767.addFieldValue(fieldValue768)
fieldValue769 = x3d.fieldValue()
fieldValue769.setName("translation")
fieldValue769.setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")

ProtoInstance767.addFieldValue(fieldValue769)

fieldValue760.addChildren(ProtoInstance767)
ProtoInstance770 = x3d.ProtoInstance()
ProtoInstance770.setName("Site")
ProtoInstance770.setDEF("hanim_r_radiale")
fieldValue771 = x3d.fieldValue()
fieldValue771.setName("name")
fieldValue771.setValue("r_radiale")

ProtoInstance770.addFieldValue(fieldValue771)
fieldValue772 = x3d.fieldValue()
fieldValue772.setName("translation")
fieldValue772.setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")

ProtoInstance770.addFieldValue(fieldValue772)

fieldValue760.addChildren(ProtoInstance770)

ProtoInstance758.addFieldValue(fieldValue760)

fieldValue734.addChildren(ProtoInstance758)

ProtoInstance730.addFieldValue(fieldValue734)

fieldValue729.addChildren(ProtoInstance730)
ProtoInstance773 = x3d.ProtoInstance()
ProtoInstance773.setName("Segment")
ProtoInstance773.setDEF("hanim_r_upperarm")
fieldValue774 = x3d.fieldValue()
fieldValue774.setName("name")
fieldValue774.setValue("r_upperarm")

ProtoInstance773.addFieldValue(fieldValue774)
fieldValue775 = x3d.fieldValue()
fieldValue775.setName("children")
ProtoInstance776 = x3d.ProtoInstance()
ProtoInstance776.setName("Site")
ProtoInstance776.setDEF("hanim_r_humeral_lateral_epicondyles")
fieldValue777 = x3d.fieldValue()
fieldValue777.setName("name")
fieldValue777.setValue("r_humeral_lateral_epicondyles")

ProtoInstance776.addFieldValue(fieldValue777)
fieldValue778 = x3d.fieldValue()
fieldValue778.setName("translation")
fieldValue778.setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")

ProtoInstance776.addFieldValue(fieldValue778)

fieldValue775.addChildren(ProtoInstance776)

ProtoInstance773.addFieldValue(fieldValue775)

fieldValue729.addChildren(ProtoInstance773)

ProtoInstance725.addFieldValue(fieldValue729)

fieldValue632.addChildren(ProtoInstance725)
ProtoInstance779 = x3d.ProtoInstance()
ProtoInstance779.setName("Segment")
ProtoInstance779.setDEF("hanim_l5")
fieldValue780 = x3d.fieldValue()
fieldValue780.setName("name")
fieldValue780.setValue("l5")

ProtoInstance779.addFieldValue(fieldValue780)
fieldValue781 = x3d.fieldValue()
fieldValue781.setName("children")
ProtoInstance782 = x3d.ProtoInstance()
ProtoInstance782.setName("Site")
ProtoInstance782.setDEF("hanim_r_clavicale")
fieldValue783 = x3d.fieldValue()
fieldValue783.setName("name")
fieldValue783.setValue("r_clavicale")

ProtoInstance782.addFieldValue(fieldValue783)
fieldValue784 = x3d.fieldValue()
fieldValue784.setName("translation")
fieldValue784.setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033")

ProtoInstance782.addFieldValue(fieldValue784)

fieldValue781.addChildren(ProtoInstance782)
ProtoInstance785 = x3d.ProtoInstance()
ProtoInstance785.setName("Site")
ProtoInstance785.setDEF("hanim_suprasternale")
fieldValue786 = x3d.fieldValue()
fieldValue786.setName("name")
fieldValue786.setValue("suprasternale")

ProtoInstance785.addFieldValue(fieldValue786)
fieldValue787 = x3d.fieldValue()
fieldValue787.setName("translation")
fieldValue787.setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869")

ProtoInstance785.addFieldValue(fieldValue787)

fieldValue781.addChildren(ProtoInstance785)
ProtoInstance788 = x3d.ProtoInstance()
ProtoInstance788.setName("Site")
ProtoInstance788.setDEF("hanim_l_clavicale")
fieldValue789 = x3d.fieldValue()
fieldValue789.setName("name")
fieldValue789.setValue("l_clavicale")

ProtoInstance788.addFieldValue(fieldValue789)
fieldValue790 = x3d.fieldValue()
fieldValue790.setName("translation")
fieldValue790.setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754")

ProtoInstance788.addFieldValue(fieldValue790)

fieldValue781.addChildren(ProtoInstance788)
ProtoInstance791 = x3d.ProtoInstance()
ProtoInstance791.setName("Site")
ProtoInstance791.setDEF("hanim_r_thelion")
fieldValue792 = x3d.fieldValue()
fieldValue792.setName("name")
fieldValue792.setValue("r_thelion")

ProtoInstance791.addFieldValue(fieldValue792)
fieldValue793 = x3d.fieldValue()
fieldValue793.setName("translation")
fieldValue793.setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911")

ProtoInstance791.addFieldValue(fieldValue793)

fieldValue781.addChildren(ProtoInstance791)
ProtoInstance794 = x3d.ProtoInstance()
ProtoInstance794.setName("Site")
ProtoInstance794.setDEF("hanim_l_thelion")
fieldValue795 = x3d.fieldValue()
fieldValue795.setName("name")
fieldValue795.setValue("l_thelion")

ProtoInstance794.addFieldValue(fieldValue795)
fieldValue796 = x3d.fieldValue()
fieldValue796.setName("translation")
fieldValue796.setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689")

ProtoInstance794.addFieldValue(fieldValue796)

fieldValue781.addChildren(ProtoInstance794)
ProtoInstance797 = x3d.ProtoInstance()
ProtoInstance797.setName("Site")
ProtoInstance797.setDEF("hanim_substernale")
fieldValue798 = x3d.fieldValue()
fieldValue798.setName("name")
fieldValue798.setValue("substernale")

ProtoInstance797.addFieldValue(fieldValue798)
fieldValue799 = x3d.fieldValue()
fieldValue799.setName("translation")
fieldValue799.setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683")

ProtoInstance797.addFieldValue(fieldValue799)

fieldValue781.addChildren(ProtoInstance797)
ProtoInstance800 = x3d.ProtoInstance()
ProtoInstance800.setName("Site")
ProtoInstance800.setDEF("hanim_r_rib10")
fieldValue801 = x3d.fieldValue()
fieldValue801.setName("name")
fieldValue801.setValue("r_rib10")

ProtoInstance800.addFieldValue(fieldValue801)
fieldValue802 = x3d.fieldValue()
fieldValue802.setName("translation")
fieldValue802.setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432")

ProtoInstance800.addFieldValue(fieldValue802)

fieldValue781.addChildren(ProtoInstance800)
ProtoInstance803 = x3d.ProtoInstance()
ProtoInstance803.setName("Site")
ProtoInstance803.setDEF("hanim_l_rib10")
fieldValue804 = x3d.fieldValue()
fieldValue804.setName("name")
fieldValue804.setValue("l_rib10")

ProtoInstance803.addFieldValue(fieldValue804)
fieldValue805 = x3d.fieldValue()
fieldValue805.setName("translation")
fieldValue805.setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202")

ProtoInstance803.addFieldValue(fieldValue805)

fieldValue781.addChildren(ProtoInstance803)
ProtoInstance806 = x3d.ProtoInstance()
ProtoInstance806.setName("Site")
ProtoInstance806.setDEF("hanim_cervicale")
fieldValue807 = x3d.fieldValue()
fieldValue807.setName("name")
fieldValue807.setValue("cervicale")

ProtoInstance806.addFieldValue(fieldValue807)
fieldValue808 = x3d.fieldValue()
fieldValue808.setName("translation")
fieldValue808.setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754")

ProtoInstance806.addFieldValue(fieldValue808)

fieldValue781.addChildren(ProtoInstance806)
ProtoInstance809 = x3d.ProtoInstance()
ProtoInstance809.setName("Site")
ProtoInstance809.setDEF("hanim_spine_2_lower_back")
fieldValue810 = x3d.fieldValue()
fieldValue810.setName("name")
fieldValue810.setValue("spine_2_lower_back")

ProtoInstance809.addFieldValue(fieldValue810)
fieldValue811 = x3d.fieldValue()
fieldValue811.setName("translation")
fieldValue811.setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661")

ProtoInstance809.addFieldValue(fieldValue811)

fieldValue781.addChildren(ProtoInstance809)
ProtoInstance812 = x3d.ProtoInstance()
ProtoInstance812.setName("Site")
ProtoInstance812.setDEF("hanim_waist_preferred_posterior")
fieldValue813 = x3d.fieldValue()
fieldValue813.setName("name")
fieldValue813.setValue("waist_preferred_posterior")

ProtoInstance812.addFieldValue(fieldValue813)
fieldValue814 = x3d.fieldValue()
fieldValue814.setName("translation")
fieldValue814.setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754")

ProtoInstance812.addFieldValue(fieldValue814)

fieldValue781.addChildren(ProtoInstance812)
ProtoInstance815 = x3d.ProtoInstance()
ProtoInstance815.setName("Site")
ProtoInstance815.setDEF("hanim_r_acromion")
fieldValue816 = x3d.fieldValue()
fieldValue816.setName("name")
fieldValue816.setValue("r_acromion")

ProtoInstance815.addFieldValue(fieldValue816)
fieldValue817 = x3d.fieldValue()
fieldValue817.setName("translation")
fieldValue817.setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541")

ProtoInstance815.addFieldValue(fieldValue817)

fieldValue781.addChildren(ProtoInstance815)
ProtoInstance818 = x3d.ProtoInstance()
ProtoInstance818.setName("Site")
ProtoInstance818.setDEF("hanim_r_axilla_proximal")
fieldValue819 = x3d.fieldValue()
fieldValue819.setName("name")
fieldValue819.setValue("r_axilla_proximal")

ProtoInstance818.addFieldValue(fieldValue819)
fieldValue820 = x3d.fieldValue()
fieldValue820.setName("translation")
fieldValue820.setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438")

ProtoInstance818.addFieldValue(fieldValue820)

fieldValue781.addChildren(ProtoInstance818)
ProtoInstance821 = x3d.ProtoInstance()
ProtoInstance821.setName("Site")
ProtoInstance821.setDEF("hanim_r_axilla_distal")
fieldValue822 = x3d.fieldValue()
fieldValue822.setName("name")
fieldValue822.setValue("r_axilla_distal")

ProtoInstance821.addFieldValue(fieldValue822)
fieldValue823 = x3d.fieldValue()
fieldValue823.setName("translation")
fieldValue823.setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678")

ProtoInstance821.addFieldValue(fieldValue823)

fieldValue781.addChildren(ProtoInstance821)
ProtoInstance824 = x3d.ProtoInstance()
ProtoInstance824.setName("Site")
ProtoInstance824.setDEF("hanim_l_acromion")
fieldValue825 = x3d.fieldValue()
fieldValue825.setName("name")
fieldValue825.setValue("l_acromion")

ProtoInstance824.addFieldValue(fieldValue825)
fieldValue826 = x3d.fieldValue()
fieldValue826.setName("translation")
fieldValue826.setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014")

ProtoInstance824.addFieldValue(fieldValue826)

fieldValue781.addChildren(ProtoInstance824)
ProtoInstance827 = x3d.ProtoInstance()
ProtoInstance827.setName("Site")
ProtoInstance827.setDEF("hanim_l_axilla_proximal")
fieldValue828 = x3d.fieldValue()
fieldValue828.setName("name")
fieldValue828.setValue("l_axilla_proximal")

ProtoInstance827.addFieldValue(fieldValue828)
fieldValue829 = x3d.fieldValue()
fieldValue829.setName("translation")
fieldValue829.setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937")

ProtoInstance827.addFieldValue(fieldValue829)

fieldValue781.addChildren(ProtoInstance827)
ProtoInstance830 = x3d.ProtoInstance()
ProtoInstance830.setName("Site")
ProtoInstance830.setDEF("hanim_l_axilla_distal")
fieldValue831 = x3d.fieldValue()
fieldValue831.setName("name")
fieldValue831.setValue("l_axilla_distal")

ProtoInstance830.addFieldValue(fieldValue831)
fieldValue832 = x3d.fieldValue()
fieldValue832.setName("translation")
fieldValue832.setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388")

ProtoInstance830.addFieldValue(fieldValue832)

fieldValue781.addChildren(ProtoInstance830)
ProtoInstance833 = x3d.ProtoInstance()
ProtoInstance833.setName("Site")
ProtoInstance833.setDEF("hanim_r_neck_base")
fieldValue834 = x3d.fieldValue()
fieldValue834.setName("name")
fieldValue834.setValue("r_neck_base")

ProtoInstance833.addFieldValue(fieldValue834)
fieldValue835 = x3d.fieldValue()
fieldValue835.setName("translation")
fieldValue835.setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071")

ProtoInstance833.addFieldValue(fieldValue835)

fieldValue781.addChildren(ProtoInstance833)
ProtoInstance836 = x3d.ProtoInstance()
ProtoInstance836.setName("Site")
ProtoInstance836.setDEF("hanim_l_neck_base")
fieldValue837 = x3d.fieldValue()
fieldValue837.setName("name")
fieldValue837.setValue("l_neck_base")

ProtoInstance836.addFieldValue(fieldValue837)
fieldValue838 = x3d.fieldValue()
fieldValue838.setName("translation")
fieldValue838.setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478")

ProtoInstance836.addFieldValue(fieldValue838)

fieldValue781.addChildren(ProtoInstance836)
ProtoInstance839 = x3d.ProtoInstance()
ProtoInstance839.setName("Site")
ProtoInstance839.setDEF("hanim_navel")
fieldValue840 = x3d.fieldValue()
fieldValue840.setName("name")
fieldValue840.setValue("navel")

ProtoInstance839.addFieldValue(fieldValue840)
fieldValue841 = x3d.fieldValue()
fieldValue841.setName("translation")
fieldValue841.setValue("0.006899999920278788 1.09660005569458 0.10170000046491623")

ProtoInstance839.addFieldValue(fieldValue841)

fieldValue781.addChildren(ProtoInstance839)

ProtoInstance779.addFieldValue(fieldValue781)

fieldValue632.addChildren(ProtoInstance779)

ProtoInstance628.addFieldValue(fieldValue632)

fieldValue492.addChildren(ProtoInstance628)
ProtoInstance842 = x3d.ProtoInstance()
ProtoInstance842.setName("Segment")
ProtoInstance842.setDEF("hanim_sacrum")
fieldValue843 = x3d.fieldValue()
fieldValue843.setName("name")
fieldValue843.setValue("sacrum")

ProtoInstance842.addFieldValue(fieldValue843)
fieldValue844 = x3d.fieldValue()
fieldValue844.setName("children")
ProtoInstance845 = x3d.ProtoInstance()
ProtoInstance845.setName("Site")
ProtoInstance845.setDEF("hanim_r_asis")
fieldValue846 = x3d.fieldValue()
fieldValue846.setName("name")
fieldValue846.setValue("r_asis")

ProtoInstance845.addFieldValue(fieldValue846)
fieldValue847 = x3d.fieldValue()
fieldValue847.setName("translation")
fieldValue847.setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747")

ProtoInstance845.addFieldValue(fieldValue847)

fieldValue844.addChildren(ProtoInstance845)
ProtoInstance848 = x3d.ProtoInstance()
ProtoInstance848.setName("Site")
ProtoInstance848.setDEF("hanim_l_asis")
fieldValue849 = x3d.fieldValue()
fieldValue849.setName("name")
fieldValue849.setValue("l_asis")

ProtoInstance848.addFieldValue(fieldValue849)
fieldValue850 = x3d.fieldValue()
fieldValue850.setName("translation")
fieldValue850.setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836")

ProtoInstance848.addFieldValue(fieldValue850)

fieldValue844.addChildren(ProtoInstance848)
ProtoInstance851 = x3d.ProtoInstance()
ProtoInstance851.setName("Site")
ProtoInstance851.setDEF("hanim_r_iliocristale")
fieldValue852 = x3d.fieldValue()
fieldValue852.setName("name")
fieldValue852.setValue("r_iliocristale")

ProtoInstance851.addFieldValue(fieldValue852)
fieldValue853 = x3d.fieldValue()
fieldValue853.setName("translation")
fieldValue853.setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187")

ProtoInstance851.addFieldValue(fieldValue853)

fieldValue844.addChildren(ProtoInstance851)
ProtoInstance854 = x3d.ProtoInstance()
ProtoInstance854.setName("Site")
ProtoInstance854.setDEF("hanim_r_trochanterion")
fieldValue855 = x3d.fieldValue()
fieldValue855.setName("name")
fieldValue855.setValue("r_trochanterion")

ProtoInstance854.addFieldValue(fieldValue855)
fieldValue856 = x3d.fieldValue()
fieldValue856.setName("translation")
fieldValue856.setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514")

ProtoInstance854.addFieldValue(fieldValue856)

fieldValue844.addChildren(ProtoInstance854)
ProtoInstance857 = x3d.ProtoInstance()
ProtoInstance857.setName("Site")
ProtoInstance857.setDEF("hanim_l_iliocristale")
fieldValue858 = x3d.fieldValue()
fieldValue858.setName("name")
fieldValue858.setValue("l_iliocristale")

ProtoInstance857.addFieldValue(fieldValue858)
fieldValue859 = x3d.fieldValue()
fieldValue859.setName("translation")
fieldValue859.setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001")

ProtoInstance857.addFieldValue(fieldValue859)

fieldValue844.addChildren(ProtoInstance857)
ProtoInstance860 = x3d.ProtoInstance()
ProtoInstance860.setName("Site")
ProtoInstance860.setDEF("hanim_l_trochanterion")
fieldValue861 = x3d.fieldValue()
fieldValue861.setName("name")
fieldValue861.setValue("l_trochanterion")

ProtoInstance860.addFieldValue(fieldValue861)
fieldValue862 = x3d.fieldValue()
fieldValue862.setName("translation")
fieldValue862.setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183")

ProtoInstance860.addFieldValue(fieldValue862)

fieldValue844.addChildren(ProtoInstance860)
ProtoInstance863 = x3d.ProtoInstance()
ProtoInstance863.setName("Site")
ProtoInstance863.setDEF("hanim_r_psis")
fieldValue864 = x3d.fieldValue()
fieldValue864.setName("name")
fieldValue864.setValue("r_psis")

ProtoInstance863.addFieldValue(fieldValue864)
fieldValue865 = x3d.fieldValue()
fieldValue865.setName("translation")
fieldValue865.setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082")

ProtoInstance863.addFieldValue(fieldValue865)

fieldValue844.addChildren(ProtoInstance863)
ProtoInstance866 = x3d.ProtoInstance()
ProtoInstance866.setName("Site")
ProtoInstance866.setDEF("hanim_l_psis")
fieldValue867 = x3d.fieldValue()
fieldValue867.setName("name")
fieldValue867.setValue("l_psis")

ProtoInstance866.addFieldValue(fieldValue867)
fieldValue868 = x3d.fieldValue()
fieldValue868.setName("translation")
fieldValue868.setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388")

ProtoInstance866.addFieldValue(fieldValue868)

fieldValue844.addChildren(ProtoInstance866)
ProtoInstance869 = x3d.ProtoInstance()
ProtoInstance869.setName("Site")
ProtoInstance869.setDEF("hanim_crotch")
fieldValue870 = x3d.fieldValue()
fieldValue870.setName("name")
fieldValue870.setValue("crotch")

ProtoInstance869.addFieldValue(fieldValue870)
fieldValue871 = x3d.fieldValue()
fieldValue871.setName("translation")
fieldValue871.setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367")

ProtoInstance869.addFieldValue(fieldValue871)

fieldValue844.addChildren(ProtoInstance869)

ProtoInstance842.addFieldValue(fieldValue844)

fieldValue492.addChildren(ProtoInstance842)

ProtoInstance488.addFieldValue(fieldValue492)

fieldValue487.addChildren(ProtoInstance488)
ProtoInstance872 = x3d.ProtoInstance()
ProtoInstance872.setName("Joint")
ProtoInstance872.setDEF("hanim_sacroiliac")
fieldValue873 = x3d.fieldValue()
fieldValue873.setName("stiffness")
fieldValue873.setValue("1 1 1")

ProtoInstance872.addFieldValue(fieldValue873)
fieldValue874 = x3d.fieldValue()
fieldValue874.setName("name")
fieldValue874.setValue("sacroiliac")

ProtoInstance872.addFieldValue(fieldValue874)
fieldValue875 = x3d.fieldValue()
fieldValue875.setName("center")
fieldValue875.setValue("0 0.914900004863739 0.0015999999595806003")

ProtoInstance872.addFieldValue(fieldValue875)
fieldValue876 = x3d.fieldValue()
fieldValue876.setName("children")
ProtoInstance877 = x3d.ProtoInstance()
ProtoInstance877.setName("Joint")
ProtoInstance877.setDEF("hanim_l_hip")
fieldValue878 = x3d.fieldValue()
fieldValue878.setName("stiffness")
fieldValue878.setValue("1 1 1")

ProtoInstance877.addFieldValue(fieldValue878)
fieldValue879 = x3d.fieldValue()
fieldValue879.setName("name")
fieldValue879.setValue("l_hip")

ProtoInstance877.addFieldValue(fieldValue879)
fieldValue880 = x3d.fieldValue()
fieldValue880.setName("center")
fieldValue880.setValue("0.09610000252723694 0.9124000072479248 -0.00009999999747378752")

ProtoInstance877.addFieldValue(fieldValue880)
fieldValue881 = x3d.fieldValue()
fieldValue881.setName("children")
ProtoInstance882 = x3d.ProtoInstance()
ProtoInstance882.setName("Joint")
ProtoInstance882.setDEF("hanim_l_knee")
fieldValue883 = x3d.fieldValue()
fieldValue883.setName("stiffness")
fieldValue883.setValue("1 1 1")

ProtoInstance882.addFieldValue(fieldValue883)
fieldValue884 = x3d.fieldValue()
fieldValue884.setName("name")
fieldValue884.setValue("l_knee")

ProtoInstance882.addFieldValue(fieldValue884)
fieldValue885 = x3d.fieldValue()
fieldValue885.setName("center")
fieldValue885.setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995")

ProtoInstance882.addFieldValue(fieldValue885)
fieldValue886 = x3d.fieldValue()
fieldValue886.setName("children")
ProtoInstance887 = x3d.ProtoInstance()
ProtoInstance887.setName("Joint")
ProtoInstance887.setDEF("hanim_l_talocrural")
fieldValue888 = x3d.fieldValue()
fieldValue888.setName("stiffness")
fieldValue888.setValue("1 1 1")

ProtoInstance887.addFieldValue(fieldValue888)
fieldValue889 = x3d.fieldValue()
fieldValue889.setName("name")
fieldValue889.setValue("l_talocrural")

ProtoInstance887.addFieldValue(fieldValue889)
fieldValue890 = x3d.fieldValue()
fieldValue890.setName("center")
fieldValue890.setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727")

ProtoInstance887.addFieldValue(fieldValue890)
fieldValue891 = x3d.fieldValue()
fieldValue891.setName("children")
ProtoInstance892 = x3d.ProtoInstance()
ProtoInstance892.setName("Joint")
ProtoInstance892.setDEF("hanim_l_metatarsophalangeal_")
fieldValue893 = x3d.fieldValue()
fieldValue893.setName("stiffness")
fieldValue893.setValue("1 1 1")

ProtoInstance892.addFieldValue(fieldValue893)
fieldValue894 = x3d.fieldValue()
fieldValue894.setName("name")
fieldValue894.setValue("l_metatarsophalangeal_")

ProtoInstance892.addFieldValue(fieldValue894)
fieldValue895 = x3d.fieldValue()
fieldValue895.setName("center")
fieldValue895.setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363")

ProtoInstance892.addFieldValue(fieldValue895)
fieldValue896 = x3d.fieldValue()
fieldValue896.setName("children")
ProtoInstance897 = x3d.ProtoInstance()
ProtoInstance897.setName("Segment")
ProtoInstance897.setDEF("hanim_l_middistal")
fieldValue898 = x3d.fieldValue()
fieldValue898.setName("name")
fieldValue898.setValue("l_middistal")

ProtoInstance897.addFieldValue(fieldValue898)
fieldValue899 = x3d.fieldValue()
fieldValue899.setName("children")
ProtoInstance900 = x3d.ProtoInstance()
ProtoInstance900.setName("Site")
ProtoInstance900.setDEF("hanim_l_middistal_tip")
fieldValue901 = x3d.fieldValue()
fieldValue901.setName("name")
fieldValue901.setValue("l_middistal_tip")

ProtoInstance900.addFieldValue(fieldValue901)
fieldValue902 = x3d.fieldValue()
fieldValue902.setName("translation")
fieldValue902.setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261")

ProtoInstance900.addFieldValue(fieldValue902)

fieldValue899.addChildren(ProtoInstance900)
ProtoInstance903 = x3d.ProtoInstance()
ProtoInstance903.setName("Site")
ProtoInstance903.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue904 = x3d.fieldValue()
fieldValue904.setName("name")
fieldValue904.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance903.addFieldValue(fieldValue904)
fieldValue905 = x3d.fieldValue()
fieldValue905.setName("translation")
fieldValue905.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance903.addFieldValue(fieldValue905)

fieldValue899.addChildren(ProtoInstance903)
ProtoInstance906 = x3d.ProtoInstance()
ProtoInstance906.setName("Site")
ProtoInstance906.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue907 = x3d.fieldValue()
fieldValue907.setName("name")
fieldValue907.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance906.addFieldValue(fieldValue907)
fieldValue908 = x3d.fieldValue()
fieldValue908.setName("translation")
fieldValue908.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance906.addFieldValue(fieldValue908)

fieldValue899.addChildren(ProtoInstance906)
ProtoInstance909 = x3d.ProtoInstance()
ProtoInstance909.setName("Site")
ProtoInstance909.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue910 = x3d.fieldValue()
fieldValue910.setName("name")
fieldValue910.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance909.addFieldValue(fieldValue910)
fieldValue911 = x3d.fieldValue()
fieldValue911.setName("translation")
fieldValue911.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance909.addFieldValue(fieldValue911)

fieldValue899.addChildren(ProtoInstance909)

ProtoInstance897.addFieldValue(fieldValue899)

fieldValue896.addChildren(ProtoInstance897)

ProtoInstance892.addFieldValue(fieldValue896)

fieldValue891.addChildren(ProtoInstance892)
ProtoInstance912 = x3d.ProtoInstance()
ProtoInstance912.setName("Segment")
ProtoInstance912.setDEF("hanim_l_hindfoot")
fieldValue913 = x3d.fieldValue()
fieldValue913.setName("name")
fieldValue913.setValue("l_hindfoot")

ProtoInstance912.addFieldValue(fieldValue913)
fieldValue914 = x3d.fieldValue()
fieldValue914.setName("children")
ProtoInstance915 = x3d.ProtoInstance()
ProtoInstance915.setName("Site")
ProtoInstance915.setDEF("hanim_l_lateral_malleolus")
fieldValue916 = x3d.fieldValue()
fieldValue916.setName("name")
fieldValue916.setValue("l_lateral_malleolus")

ProtoInstance915.addFieldValue(fieldValue916)
fieldValue917 = x3d.fieldValue()
fieldValue917.setName("translation")
fieldValue917.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance915.addFieldValue(fieldValue917)

fieldValue914.addChildren(ProtoInstance915)
ProtoInstance918 = x3d.ProtoInstance()
ProtoInstance918.setName("Site")
ProtoInstance918.setDEF("hanim_l_medial_malleolus")
fieldValue919 = x3d.fieldValue()
fieldValue919.setName("name")
fieldValue919.setValue("l_medial_malleolus")

ProtoInstance918.addFieldValue(fieldValue919)
fieldValue920 = x3d.fieldValue()
fieldValue920.setName("translation")
fieldValue920.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance918.addFieldValue(fieldValue920)

fieldValue914.addChildren(ProtoInstance918)
ProtoInstance921 = x3d.ProtoInstance()
ProtoInstance921.setName("Site")
ProtoInstance921.setDEF("hanim_l_sphyrion")
fieldValue922 = x3d.fieldValue()
fieldValue922.setName("name")
fieldValue922.setValue("l_sphyrion")

ProtoInstance921.addFieldValue(fieldValue922)
fieldValue923 = x3d.fieldValue()
fieldValue923.setName("translation")
fieldValue923.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance921.addFieldValue(fieldValue923)

fieldValue914.addChildren(ProtoInstance921)
ProtoInstance924 = x3d.ProtoInstance()
ProtoInstance924.setName("Site")
ProtoInstance924.setDEF("hanim_l_calcaneus_posterior")
fieldValue925 = x3d.fieldValue()
fieldValue925.setName("name")
fieldValue925.setValue("l_calcaneus_posterior")

ProtoInstance924.addFieldValue(fieldValue925)
fieldValue926 = x3d.fieldValue()
fieldValue926.setName("translation")
fieldValue926.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance924.addFieldValue(fieldValue926)

fieldValue914.addChildren(ProtoInstance924)

ProtoInstance912.addFieldValue(fieldValue914)

fieldValue891.addChildren(ProtoInstance912)

ProtoInstance887.addFieldValue(fieldValue891)

fieldValue886.addChildren(ProtoInstance887)
ProtoInstance927 = x3d.ProtoInstance()
ProtoInstance927.setName("Segment")
ProtoInstance927.setDEF("hanim_l_calf")
fieldValue928 = x3d.fieldValue()
fieldValue928.setName("name")
fieldValue928.setValue("l_calf")

ProtoInstance927.addFieldValue(fieldValue928)

fieldValue886.addChildren(ProtoInstance927)

ProtoInstance882.addFieldValue(fieldValue886)

fieldValue881.addChildren(ProtoInstance882)
ProtoInstance929 = x3d.ProtoInstance()
ProtoInstance929.setName("Segment")
ProtoInstance929.setDEF("hanim_l_thigh")
fieldValue930 = x3d.fieldValue()
fieldValue930.setName("name")
fieldValue930.setValue("l_thigh")

ProtoInstance929.addFieldValue(fieldValue930)
fieldValue931 = x3d.fieldValue()
fieldValue931.setName("children")
ProtoInstance932 = x3d.ProtoInstance()
ProtoInstance932.setName("Site")
ProtoInstance932.setDEF("hanim_l_knee_crease")
fieldValue933 = x3d.fieldValue()
fieldValue933.setName("name")
fieldValue933.setValue("l_knee_crease")

ProtoInstance932.addFieldValue(fieldValue933)
fieldValue934 = x3d.fieldValue()
fieldValue934.setName("translation")
fieldValue934.setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757")

ProtoInstance932.addFieldValue(fieldValue934)

fieldValue931.addChildren(ProtoInstance932)
ProtoInstance935 = x3d.ProtoInstance()
ProtoInstance935.setName("Site")
ProtoInstance935.setDEF("hanim_l_femoral_lateral_epicondyles")
fieldValue936 = x3d.fieldValue()
fieldValue936.setName("name")
fieldValue936.setValue("l_femoral_lateral_epicondyles")

ProtoInstance935.addFieldValue(fieldValue936)
fieldValue937 = x3d.fieldValue()
fieldValue937.setName("translation")
fieldValue937.setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746")

ProtoInstance935.addFieldValue(fieldValue937)

fieldValue931.addChildren(ProtoInstance935)
ProtoInstance938 = x3d.ProtoInstance()
ProtoInstance938.setName("Site")
ProtoInstance938.setDEF("hanim_l_femoral_medial_epicondyles")
fieldValue939 = x3d.fieldValue()
fieldValue939.setName("name")
fieldValue939.setValue("l_femoral_lateral_epicondyles")

ProtoInstance938.addFieldValue(fieldValue939)
fieldValue940 = x3d.fieldValue()
fieldValue940.setName("translation")
fieldValue940.setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183")

ProtoInstance938.addFieldValue(fieldValue940)

fieldValue931.addChildren(ProtoInstance938)

ProtoInstance929.addFieldValue(fieldValue931)

fieldValue881.addChildren(ProtoInstance929)

ProtoInstance877.addFieldValue(fieldValue881)

fieldValue876.addChildren(ProtoInstance877)
ProtoInstance941 = x3d.ProtoInstance()
ProtoInstance941.setName("Joint")
ProtoInstance941.setDEF("hanim_r_hip")
fieldValue942 = x3d.fieldValue()
fieldValue942.setName("stiffness")
fieldValue942.setValue("1 1 1")

ProtoInstance941.addFieldValue(fieldValue942)
fieldValue943 = x3d.fieldValue()
fieldValue943.setName("name")
fieldValue943.setValue("r_hip")

ProtoInstance941.addFieldValue(fieldValue943)
fieldValue944 = x3d.fieldValue()
fieldValue944.setName("center")
fieldValue944.setValue("-0.0949999988079071 0.9171000123023987 0.002899999963119626")

ProtoInstance941.addFieldValue(fieldValue944)
fieldValue945 = x3d.fieldValue()
fieldValue945.setName("children")
ProtoInstance946 = x3d.ProtoInstance()
ProtoInstance946.setName("Joint")
ProtoInstance946.setDEF("hanim_r_knee")
fieldValue947 = x3d.fieldValue()
fieldValue947.setName("stiffness")
fieldValue947.setValue("1 1 1")

ProtoInstance946.addFieldValue(fieldValue947)
fieldValue948 = x3d.fieldValue()
fieldValue948.setName("name")
fieldValue948.setValue("r_knee")

ProtoInstance946.addFieldValue(fieldValue948)
fieldValue949 = x3d.fieldValue()
fieldValue949.setName("center")
fieldValue949.setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492")

ProtoInstance946.addFieldValue(fieldValue949)
fieldValue950 = x3d.fieldValue()
fieldValue950.setName("children")
ProtoInstance951 = x3d.ProtoInstance()
ProtoInstance951.setName("Joint")
ProtoInstance951.setDEF("hanim_r_talocrural")
fieldValue952 = x3d.fieldValue()
fieldValue952.setName("stiffness")
fieldValue952.setValue("1 1 1")

ProtoInstance951.addFieldValue(fieldValue952)
fieldValue953 = x3d.fieldValue()
fieldValue953.setName("name")
fieldValue953.setValue("r_talocrural")

ProtoInstance951.addFieldValue(fieldValue953)
fieldValue954 = x3d.fieldValue()
fieldValue954.setName("center")
fieldValue954.setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044")

ProtoInstance951.addFieldValue(fieldValue954)
fieldValue955 = x3d.fieldValue()
fieldValue955.setName("children")
ProtoInstance956 = x3d.ProtoInstance()
ProtoInstance956.setName("Joint")
ProtoInstance956.setDEF("hanim_r_metatarsophalangeal_")
fieldValue957 = x3d.fieldValue()
fieldValue957.setName("stiffness")
fieldValue957.setValue("1 1 1")

ProtoInstance956.addFieldValue(fieldValue957)
fieldValue958 = x3d.fieldValue()
fieldValue958.setName("name")
fieldValue958.setValue("r_metatarsophalangeal_")

ProtoInstance956.addFieldValue(fieldValue958)
fieldValue959 = x3d.fieldValue()
fieldValue959.setName("center")
fieldValue959.setValue("-0.08009999990463257 0 0.03680000081658363")

ProtoInstance956.addFieldValue(fieldValue959)
fieldValue960 = x3d.fieldValue()
fieldValue960.setName("children")
ProtoInstance961 = x3d.ProtoInstance()
ProtoInstance961.setName("Segment")
ProtoInstance961.setDEF("hanim_r_middistal")
fieldValue962 = x3d.fieldValue()
fieldValue962.setName("name")
fieldValue962.setValue("r_middistal")

ProtoInstance961.addFieldValue(fieldValue962)
fieldValue963 = x3d.fieldValue()
fieldValue963.setName("children")
ProtoInstance964 = x3d.ProtoInstance()
ProtoInstance964.setName("Site")
ProtoInstance964.setDEF("hanim_r_middistal_tip")
fieldValue965 = x3d.fieldValue()
fieldValue965.setName("name")
fieldValue965.setValue("r_middistal_tip")

ProtoInstance964.addFieldValue(fieldValue965)
fieldValue966 = x3d.fieldValue()
fieldValue966.setName("translation")
fieldValue966.setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")

ProtoInstance964.addFieldValue(fieldValue966)

fieldValue963.addChildren(ProtoInstance964)
ProtoInstance967 = x3d.ProtoInstance()
ProtoInstance967.setName("Site")
ProtoInstance967.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue968 = x3d.fieldValue()
fieldValue968.setName("name")
fieldValue968.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance967.addFieldValue(fieldValue968)
fieldValue969 = x3d.fieldValue()
fieldValue969.setName("translation")
fieldValue969.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance967.addFieldValue(fieldValue969)

fieldValue963.addChildren(ProtoInstance967)
ProtoInstance970 = x3d.ProtoInstance()
ProtoInstance970.setName("Site")
ProtoInstance970.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue971 = x3d.fieldValue()
fieldValue971.setName("name")
fieldValue971.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance970.addFieldValue(fieldValue971)
fieldValue972 = x3d.fieldValue()
fieldValue972.setName("translation")
fieldValue972.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance970.addFieldValue(fieldValue972)

fieldValue963.addChildren(ProtoInstance970)
ProtoInstance973 = x3d.ProtoInstance()
ProtoInstance973.setName("Site")
ProtoInstance973.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue974 = x3d.fieldValue()
fieldValue974.setName("name")
fieldValue974.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance973.addFieldValue(fieldValue974)
fieldValue975 = x3d.fieldValue()
fieldValue975.setName("translation")
fieldValue975.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance973.addFieldValue(fieldValue975)

fieldValue963.addChildren(ProtoInstance973)

ProtoInstance961.addFieldValue(fieldValue963)

fieldValue960.addChildren(ProtoInstance961)

ProtoInstance956.addFieldValue(fieldValue960)

fieldValue955.addChildren(ProtoInstance956)
ProtoInstance976 = x3d.ProtoInstance()
ProtoInstance976.setName("Segment")
ProtoInstance976.setDEF("hanim_r_hindfoot")
fieldValue977 = x3d.fieldValue()
fieldValue977.setName("name")
fieldValue977.setValue("r_hindfoot")

ProtoInstance976.addFieldValue(fieldValue977)
fieldValue978 = x3d.fieldValue()
fieldValue978.setName("children")
ProtoInstance979 = x3d.ProtoInstance()
ProtoInstance979.setName("Site")
ProtoInstance979.setDEF("hanim_r_lateral_malleolus")
fieldValue980 = x3d.fieldValue()
fieldValue980.setName("name")
fieldValue980.setValue("r_lateral_malleolus")

ProtoInstance979.addFieldValue(fieldValue980)
fieldValue981 = x3d.fieldValue()
fieldValue981.setName("translation")
fieldValue981.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance979.addFieldValue(fieldValue981)

fieldValue978.addChildren(ProtoInstance979)
ProtoInstance982 = x3d.ProtoInstance()
ProtoInstance982.setName("Site")
ProtoInstance982.setDEF("hanim_r_medial_malleolus")
fieldValue983 = x3d.fieldValue()
fieldValue983.setName("name")
fieldValue983.setValue("r_medial_malleolus")

ProtoInstance982.addFieldValue(fieldValue983)
fieldValue984 = x3d.fieldValue()
fieldValue984.setName("translation")
fieldValue984.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance982.addFieldValue(fieldValue984)

fieldValue978.addChildren(ProtoInstance982)
ProtoInstance985 = x3d.ProtoInstance()
ProtoInstance985.setName("Site")
ProtoInstance985.setDEF("hanim_r_sphyrion")
fieldValue986 = x3d.fieldValue()
fieldValue986.setName("name")
fieldValue986.setValue("r_sphyrion")

ProtoInstance985.addFieldValue(fieldValue986)
fieldValue987 = x3d.fieldValue()
fieldValue987.setName("translation")
fieldValue987.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance985.addFieldValue(fieldValue987)

fieldValue978.addChildren(ProtoInstance985)
ProtoInstance988 = x3d.ProtoInstance()
ProtoInstance988.setName("Site")
ProtoInstance988.setDEF("hanim_r_calcaneus_posterior")
fieldValue989 = x3d.fieldValue()
fieldValue989.setName("name")
fieldValue989.setValue("r_calcaneus_posterior")

ProtoInstance988.addFieldValue(fieldValue989)
fieldValue990 = x3d.fieldValue()
fieldValue990.setName("translation")
fieldValue990.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance988.addFieldValue(fieldValue990)

fieldValue978.addChildren(ProtoInstance988)

ProtoInstance976.addFieldValue(fieldValue978)

fieldValue955.addChildren(ProtoInstance976)

ProtoInstance951.addFieldValue(fieldValue955)

fieldValue950.addChildren(ProtoInstance951)
ProtoInstance991 = x3d.ProtoInstance()
ProtoInstance991.setName("Segment")
ProtoInstance991.setDEF("hanim_r_calf")
fieldValue992 = x3d.fieldValue()
fieldValue992.setName("name")
fieldValue992.setValue("r_calf")

ProtoInstance991.addFieldValue(fieldValue992)

fieldValue950.addChildren(ProtoInstance991)

ProtoInstance946.addFieldValue(fieldValue950)

fieldValue945.addChildren(ProtoInstance946)
ProtoInstance993 = x3d.ProtoInstance()
ProtoInstance993.setName("Segment")
ProtoInstance993.setDEF("hanim_r_thigh")
fieldValue994 = x3d.fieldValue()
fieldValue994.setName("name")
fieldValue994.setValue("r_thigh")

ProtoInstance993.addFieldValue(fieldValue994)
fieldValue995 = x3d.fieldValue()
fieldValue995.setName("children")
ProtoInstance996 = x3d.ProtoInstance()
ProtoInstance996.setName("Site")
ProtoInstance996.setDEF("hanim_r_knee_crease")
fieldValue997 = x3d.fieldValue()
fieldValue997.setName("name")
fieldValue997.setValue("r_knee_crease")

ProtoInstance996.addFieldValue(fieldValue997)
fieldValue998 = x3d.fieldValue()
fieldValue998.setName("translation")
fieldValue998.setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")

ProtoInstance996.addFieldValue(fieldValue998)

fieldValue995.addChildren(ProtoInstance996)
ProtoInstance999 = x3d.ProtoInstance()
ProtoInstance999.setName("Site")
ProtoInstance999.setDEF("hanim_r_femoral_lateral_epicondyles")
fieldValue1000 = x3d.fieldValue()
fieldValue1000.setName("name")
fieldValue1000.setValue("r_femoral_lateral_epicondyles")

ProtoInstance999.addFieldValue(fieldValue1000)
fieldValue1001 = x3d.fieldValue()
fieldValue1001.setName("translation")
fieldValue1001.setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052")

ProtoInstance999.addFieldValue(fieldValue1001)

fieldValue995.addChildren(ProtoInstance999)
ProtoInstance1002 = x3d.ProtoInstance()
ProtoInstance1002.setName("Site")
ProtoInstance1002.setDEF("hanim_r_femoral_medial_epicondyles")
fieldValue1003 = x3d.fieldValue()
fieldValue1003.setName("name")
fieldValue1003.setValue("r_femoral_lateral_epicondyles")

ProtoInstance1002.addFieldValue(fieldValue1003)
fieldValue1004 = x3d.fieldValue()
fieldValue1004.setName("translation")
fieldValue1004.setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821")

ProtoInstance1002.addFieldValue(fieldValue1004)

fieldValue995.addChildren(ProtoInstance1002)

ProtoInstance993.addFieldValue(fieldValue995)

fieldValue945.addChildren(ProtoInstance993)

ProtoInstance941.addFieldValue(fieldValue945)

fieldValue876.addChildren(ProtoInstance941)
ProtoInstance1005 = x3d.ProtoInstance()
ProtoInstance1005.setName("Segment")
ProtoInstance1005.setDEF("hanim_pelvis")
fieldValue1006 = x3d.fieldValue()
fieldValue1006.setName("name")
fieldValue1006.setValue("pelvis")

ProtoInstance1005.addFieldValue(fieldValue1006)

fieldValue876.addChildren(ProtoInstance1005)

ProtoInstance872.addFieldValue(fieldValue876)

fieldValue487.addChildren(ProtoInstance872)
ProtoInstance1007 = x3d.ProtoInstance()
ProtoInstance1007.setName("Joint")
ProtoInstance1007.setDEF("hanim_l_hip")
fieldValue1008 = x3d.fieldValue()
fieldValue1008.setName("stiffness")
fieldValue1008.setValue("1 1 1")

ProtoInstance1007.addFieldValue(fieldValue1008)
fieldValue1009 = x3d.fieldValue()
fieldValue1009.setName("name")
fieldValue1009.setValue("l_hip")

ProtoInstance1007.addFieldValue(fieldValue1009)
fieldValue1010 = x3d.fieldValue()
fieldValue1010.setName("center")
fieldValue1010.setValue("0.09610000252723694 0.9124000072479248 -0.00009999999747378752")

ProtoInstance1007.addFieldValue(fieldValue1010)
fieldValue1011 = x3d.fieldValue()
fieldValue1011.setName("children")
ProtoInstance1012 = x3d.ProtoInstance()
ProtoInstance1012.setName("Joint")
ProtoInstance1012.setDEF("hanim_l_knee")
fieldValue1013 = x3d.fieldValue()
fieldValue1013.setName("stiffness")
fieldValue1013.setValue("1 1 1")

ProtoInstance1012.addFieldValue(fieldValue1013)
fieldValue1014 = x3d.fieldValue()
fieldValue1014.setName("name")
fieldValue1014.setValue("l_knee")

ProtoInstance1012.addFieldValue(fieldValue1014)
fieldValue1015 = x3d.fieldValue()
fieldValue1015.setName("center")
fieldValue1015.setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995")

ProtoInstance1012.addFieldValue(fieldValue1015)
fieldValue1016 = x3d.fieldValue()
fieldValue1016.setName("children")
ProtoInstance1017 = x3d.ProtoInstance()
ProtoInstance1017.setName("Joint")
ProtoInstance1017.setDEF("hanim_l_talocrural")
fieldValue1018 = x3d.fieldValue()
fieldValue1018.setName("stiffness")
fieldValue1018.setValue("1 1 1")

ProtoInstance1017.addFieldValue(fieldValue1018)
fieldValue1019 = x3d.fieldValue()
fieldValue1019.setName("name")
fieldValue1019.setValue("l_talocrural")

ProtoInstance1017.addFieldValue(fieldValue1019)
fieldValue1020 = x3d.fieldValue()
fieldValue1020.setName("center")
fieldValue1020.setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727")

ProtoInstance1017.addFieldValue(fieldValue1020)
fieldValue1021 = x3d.fieldValue()
fieldValue1021.setName("children")
ProtoInstance1022 = x3d.ProtoInstance()
ProtoInstance1022.setName("Joint")
ProtoInstance1022.setDEF("hanim_l_metatarsophalangeal_")
fieldValue1023 = x3d.fieldValue()
fieldValue1023.setName("stiffness")
fieldValue1023.setValue("1 1 1")

ProtoInstance1022.addFieldValue(fieldValue1023)
fieldValue1024 = x3d.fieldValue()
fieldValue1024.setName("name")
fieldValue1024.setValue("l_metatarsophalangeal_")

ProtoInstance1022.addFieldValue(fieldValue1024)
fieldValue1025 = x3d.fieldValue()
fieldValue1025.setName("center")
fieldValue1025.setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363")

ProtoInstance1022.addFieldValue(fieldValue1025)
fieldValue1026 = x3d.fieldValue()
fieldValue1026.setName("children")
ProtoInstance1027 = x3d.ProtoInstance()
ProtoInstance1027.setName("Segment")
ProtoInstance1027.setDEF("hanim_l_middistal")
fieldValue1028 = x3d.fieldValue()
fieldValue1028.setName("name")
fieldValue1028.setValue("l_middistal")

ProtoInstance1027.addFieldValue(fieldValue1028)
fieldValue1029 = x3d.fieldValue()
fieldValue1029.setName("children")
ProtoInstance1030 = x3d.ProtoInstance()
ProtoInstance1030.setName("Site")
ProtoInstance1030.setDEF("hanim_l_middistal_tip")
fieldValue1031 = x3d.fieldValue()
fieldValue1031.setName("name")
fieldValue1031.setValue("l_middistal_tip")

ProtoInstance1030.addFieldValue(fieldValue1031)
fieldValue1032 = x3d.fieldValue()
fieldValue1032.setName("translation")
fieldValue1032.setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261")

ProtoInstance1030.addFieldValue(fieldValue1032)

fieldValue1029.addChildren(ProtoInstance1030)
ProtoInstance1033 = x3d.ProtoInstance()
ProtoInstance1033.setName("Site")
ProtoInstance1033.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue1034 = x3d.fieldValue()
fieldValue1034.setName("name")
fieldValue1034.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance1033.addFieldValue(fieldValue1034)
fieldValue1035 = x3d.fieldValue()
fieldValue1035.setName("translation")
fieldValue1035.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance1033.addFieldValue(fieldValue1035)

fieldValue1029.addChildren(ProtoInstance1033)
ProtoInstance1036 = x3d.ProtoInstance()
ProtoInstance1036.setName("Site")
ProtoInstance1036.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue1037 = x3d.fieldValue()
fieldValue1037.setName("name")
fieldValue1037.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance1036.addFieldValue(fieldValue1037)
fieldValue1038 = x3d.fieldValue()
fieldValue1038.setName("translation")
fieldValue1038.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance1036.addFieldValue(fieldValue1038)

fieldValue1029.addChildren(ProtoInstance1036)
ProtoInstance1039 = x3d.ProtoInstance()
ProtoInstance1039.setName("Site")
ProtoInstance1039.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue1040 = x3d.fieldValue()
fieldValue1040.setName("name")
fieldValue1040.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance1039.addFieldValue(fieldValue1040)
fieldValue1041 = x3d.fieldValue()
fieldValue1041.setName("translation")
fieldValue1041.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance1039.addFieldValue(fieldValue1041)

fieldValue1029.addChildren(ProtoInstance1039)

ProtoInstance1027.addFieldValue(fieldValue1029)

fieldValue1026.addChildren(ProtoInstance1027)

ProtoInstance1022.addFieldValue(fieldValue1026)

fieldValue1021.addChildren(ProtoInstance1022)
ProtoInstance1042 = x3d.ProtoInstance()
ProtoInstance1042.setName("Segment")
ProtoInstance1042.setDEF("hanim_l_hindfoot")
fieldValue1043 = x3d.fieldValue()
fieldValue1043.setName("name")
fieldValue1043.setValue("l_hindfoot")

ProtoInstance1042.addFieldValue(fieldValue1043)
fieldValue1044 = x3d.fieldValue()
fieldValue1044.setName("children")
ProtoInstance1045 = x3d.ProtoInstance()
ProtoInstance1045.setName("Site")
ProtoInstance1045.setDEF("hanim_l_lateral_malleolus")
fieldValue1046 = x3d.fieldValue()
fieldValue1046.setName("name")
fieldValue1046.setValue("l_lateral_malleolus")

ProtoInstance1045.addFieldValue(fieldValue1046)
fieldValue1047 = x3d.fieldValue()
fieldValue1047.setName("translation")
fieldValue1047.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance1045.addFieldValue(fieldValue1047)

fieldValue1044.addChildren(ProtoInstance1045)
ProtoInstance1048 = x3d.ProtoInstance()
ProtoInstance1048.setName("Site")
ProtoInstance1048.setDEF("hanim_l_medial_malleolus")
fieldValue1049 = x3d.fieldValue()
fieldValue1049.setName("name")
fieldValue1049.setValue("l_medial_malleolus")

ProtoInstance1048.addFieldValue(fieldValue1049)
fieldValue1050 = x3d.fieldValue()
fieldValue1050.setName("translation")
fieldValue1050.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance1048.addFieldValue(fieldValue1050)

fieldValue1044.addChildren(ProtoInstance1048)
ProtoInstance1051 = x3d.ProtoInstance()
ProtoInstance1051.setName("Site")
ProtoInstance1051.setDEF("hanim_l_sphyrion")
fieldValue1052 = x3d.fieldValue()
fieldValue1052.setName("name")
fieldValue1052.setValue("l_sphyrion")

ProtoInstance1051.addFieldValue(fieldValue1052)
fieldValue1053 = x3d.fieldValue()
fieldValue1053.setName("translation")
fieldValue1053.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance1051.addFieldValue(fieldValue1053)

fieldValue1044.addChildren(ProtoInstance1051)
ProtoInstance1054 = x3d.ProtoInstance()
ProtoInstance1054.setName("Site")
ProtoInstance1054.setDEF("hanim_l_calcaneus_posterior")
fieldValue1055 = x3d.fieldValue()
fieldValue1055.setName("name")
fieldValue1055.setValue("l_calcaneus_posterior")

ProtoInstance1054.addFieldValue(fieldValue1055)
fieldValue1056 = x3d.fieldValue()
fieldValue1056.setName("translation")
fieldValue1056.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance1054.addFieldValue(fieldValue1056)

fieldValue1044.addChildren(ProtoInstance1054)

ProtoInstance1042.addFieldValue(fieldValue1044)

fieldValue1021.addChildren(ProtoInstance1042)

ProtoInstance1017.addFieldValue(fieldValue1021)

fieldValue1016.addChildren(ProtoInstance1017)
ProtoInstance1057 = x3d.ProtoInstance()
ProtoInstance1057.setName("Segment")
ProtoInstance1057.setDEF("hanim_l_calf")
fieldValue1058 = x3d.fieldValue()
fieldValue1058.setName("name")
fieldValue1058.setValue("l_calf")

ProtoInstance1057.addFieldValue(fieldValue1058)

fieldValue1016.addChildren(ProtoInstance1057)

ProtoInstance1012.addFieldValue(fieldValue1016)

fieldValue1011.addChildren(ProtoInstance1012)
ProtoInstance1059 = x3d.ProtoInstance()
ProtoInstance1059.setName("Segment")
ProtoInstance1059.setDEF("hanim_l_thigh")
fieldValue1060 = x3d.fieldValue()
fieldValue1060.setName("name")
fieldValue1060.setValue("l_thigh")

ProtoInstance1059.addFieldValue(fieldValue1060)
fieldValue1061 = x3d.fieldValue()
fieldValue1061.setName("children")
ProtoInstance1062 = x3d.ProtoInstance()
ProtoInstance1062.setName("Site")
ProtoInstance1062.setDEF("hanim_l_knee_crease")
fieldValue1063 = x3d.fieldValue()
fieldValue1063.setName("name")
fieldValue1063.setValue("l_knee_crease")

ProtoInstance1062.addFieldValue(fieldValue1063)
fieldValue1064 = x3d.fieldValue()
fieldValue1064.setName("translation")
fieldValue1064.setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757")

ProtoInstance1062.addFieldValue(fieldValue1064)

fieldValue1061.addChildren(ProtoInstance1062)
ProtoInstance1065 = x3d.ProtoInstance()
ProtoInstance1065.setName("Site")
ProtoInstance1065.setDEF("hanim_l_femoral_lateral_epicondyles")
fieldValue1066 = x3d.fieldValue()
fieldValue1066.setName("name")
fieldValue1066.setValue("l_femoral_lateral_epicondyles")

ProtoInstance1065.addFieldValue(fieldValue1066)
fieldValue1067 = x3d.fieldValue()
fieldValue1067.setName("translation")
fieldValue1067.setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746")

ProtoInstance1065.addFieldValue(fieldValue1067)

fieldValue1061.addChildren(ProtoInstance1065)
ProtoInstance1068 = x3d.ProtoInstance()
ProtoInstance1068.setName("Site")
ProtoInstance1068.setDEF("hanim_l_femoral_medial_epicondyles")
fieldValue1069 = x3d.fieldValue()
fieldValue1069.setName("name")
fieldValue1069.setValue("l_femoral_lateral_epicondyles")

ProtoInstance1068.addFieldValue(fieldValue1069)
fieldValue1070 = x3d.fieldValue()
fieldValue1070.setName("translation")
fieldValue1070.setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183")

ProtoInstance1068.addFieldValue(fieldValue1070)

fieldValue1061.addChildren(ProtoInstance1068)

ProtoInstance1059.addFieldValue(fieldValue1061)

fieldValue1011.addChildren(ProtoInstance1059)

ProtoInstance1007.addFieldValue(fieldValue1011)

fieldValue487.addChildren(ProtoInstance1007)
ProtoInstance1071 = x3d.ProtoInstance()
ProtoInstance1071.setName("Joint")
ProtoInstance1071.setDEF("hanim_l_knee")
fieldValue1072 = x3d.fieldValue()
fieldValue1072.setName("stiffness")
fieldValue1072.setValue("1 1 1")

ProtoInstance1071.addFieldValue(fieldValue1072)
fieldValue1073 = x3d.fieldValue()
fieldValue1073.setName("name")
fieldValue1073.setValue("l_knee")

ProtoInstance1071.addFieldValue(fieldValue1073)
fieldValue1074 = x3d.fieldValue()
fieldValue1074.setName("center")
fieldValue1074.setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995")

ProtoInstance1071.addFieldValue(fieldValue1074)
fieldValue1075 = x3d.fieldValue()
fieldValue1075.setName("children")
ProtoInstance1076 = x3d.ProtoInstance()
ProtoInstance1076.setName("Joint")
ProtoInstance1076.setDEF("hanim_l_talocrural")
fieldValue1077 = x3d.fieldValue()
fieldValue1077.setName("stiffness")
fieldValue1077.setValue("1 1 1")

ProtoInstance1076.addFieldValue(fieldValue1077)
fieldValue1078 = x3d.fieldValue()
fieldValue1078.setName("name")
fieldValue1078.setValue("l_talocrural")

ProtoInstance1076.addFieldValue(fieldValue1078)
fieldValue1079 = x3d.fieldValue()
fieldValue1079.setName("center")
fieldValue1079.setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727")

ProtoInstance1076.addFieldValue(fieldValue1079)
fieldValue1080 = x3d.fieldValue()
fieldValue1080.setName("children")
ProtoInstance1081 = x3d.ProtoInstance()
ProtoInstance1081.setName("Joint")
ProtoInstance1081.setDEF("hanim_l_metatarsophalangeal_")
fieldValue1082 = x3d.fieldValue()
fieldValue1082.setName("stiffness")
fieldValue1082.setValue("1 1 1")

ProtoInstance1081.addFieldValue(fieldValue1082)
fieldValue1083 = x3d.fieldValue()
fieldValue1083.setName("name")
fieldValue1083.setValue("l_metatarsophalangeal_")

ProtoInstance1081.addFieldValue(fieldValue1083)
fieldValue1084 = x3d.fieldValue()
fieldValue1084.setName("center")
fieldValue1084.setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363")

ProtoInstance1081.addFieldValue(fieldValue1084)
fieldValue1085 = x3d.fieldValue()
fieldValue1085.setName("children")
ProtoInstance1086 = x3d.ProtoInstance()
ProtoInstance1086.setName("Segment")
ProtoInstance1086.setDEF("hanim_l_middistal")
fieldValue1087 = x3d.fieldValue()
fieldValue1087.setName("name")
fieldValue1087.setValue("l_middistal")

ProtoInstance1086.addFieldValue(fieldValue1087)
fieldValue1088 = x3d.fieldValue()
fieldValue1088.setName("children")
ProtoInstance1089 = x3d.ProtoInstance()
ProtoInstance1089.setName("Site")
ProtoInstance1089.setDEF("hanim_l_middistal_tip")
fieldValue1090 = x3d.fieldValue()
fieldValue1090.setName("name")
fieldValue1090.setValue("l_middistal_tip")

ProtoInstance1089.addFieldValue(fieldValue1090)
fieldValue1091 = x3d.fieldValue()
fieldValue1091.setName("translation")
fieldValue1091.setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261")

ProtoInstance1089.addFieldValue(fieldValue1091)

fieldValue1088.addChildren(ProtoInstance1089)
ProtoInstance1092 = x3d.ProtoInstance()
ProtoInstance1092.setName("Site")
ProtoInstance1092.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue1093 = x3d.fieldValue()
fieldValue1093.setName("name")
fieldValue1093.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance1092.addFieldValue(fieldValue1093)
fieldValue1094 = x3d.fieldValue()
fieldValue1094.setName("translation")
fieldValue1094.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance1092.addFieldValue(fieldValue1094)

fieldValue1088.addChildren(ProtoInstance1092)
ProtoInstance1095 = x3d.ProtoInstance()
ProtoInstance1095.setName("Site")
ProtoInstance1095.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue1096 = x3d.fieldValue()
fieldValue1096.setName("name")
fieldValue1096.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance1095.addFieldValue(fieldValue1096)
fieldValue1097 = x3d.fieldValue()
fieldValue1097.setName("translation")
fieldValue1097.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance1095.addFieldValue(fieldValue1097)

fieldValue1088.addChildren(ProtoInstance1095)
ProtoInstance1098 = x3d.ProtoInstance()
ProtoInstance1098.setName("Site")
ProtoInstance1098.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue1099 = x3d.fieldValue()
fieldValue1099.setName("name")
fieldValue1099.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance1098.addFieldValue(fieldValue1099)
fieldValue1100 = x3d.fieldValue()
fieldValue1100.setName("translation")
fieldValue1100.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance1098.addFieldValue(fieldValue1100)

fieldValue1088.addChildren(ProtoInstance1098)

ProtoInstance1086.addFieldValue(fieldValue1088)

fieldValue1085.addChildren(ProtoInstance1086)

ProtoInstance1081.addFieldValue(fieldValue1085)

fieldValue1080.addChildren(ProtoInstance1081)
ProtoInstance1101 = x3d.ProtoInstance()
ProtoInstance1101.setName("Segment")
ProtoInstance1101.setDEF("hanim_l_hindfoot")
fieldValue1102 = x3d.fieldValue()
fieldValue1102.setName("name")
fieldValue1102.setValue("l_hindfoot")

ProtoInstance1101.addFieldValue(fieldValue1102)
fieldValue1103 = x3d.fieldValue()
fieldValue1103.setName("children")
ProtoInstance1104 = x3d.ProtoInstance()
ProtoInstance1104.setName("Site")
ProtoInstance1104.setDEF("hanim_l_lateral_malleolus")
fieldValue1105 = x3d.fieldValue()
fieldValue1105.setName("name")
fieldValue1105.setValue("l_lateral_malleolus")

ProtoInstance1104.addFieldValue(fieldValue1105)
fieldValue1106 = x3d.fieldValue()
fieldValue1106.setName("translation")
fieldValue1106.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance1104.addFieldValue(fieldValue1106)

fieldValue1103.addChildren(ProtoInstance1104)
ProtoInstance1107 = x3d.ProtoInstance()
ProtoInstance1107.setName("Site")
ProtoInstance1107.setDEF("hanim_l_medial_malleolus")
fieldValue1108 = x3d.fieldValue()
fieldValue1108.setName("name")
fieldValue1108.setValue("l_medial_malleolus")

ProtoInstance1107.addFieldValue(fieldValue1108)
fieldValue1109 = x3d.fieldValue()
fieldValue1109.setName("translation")
fieldValue1109.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance1107.addFieldValue(fieldValue1109)

fieldValue1103.addChildren(ProtoInstance1107)
ProtoInstance1110 = x3d.ProtoInstance()
ProtoInstance1110.setName("Site")
ProtoInstance1110.setDEF("hanim_l_sphyrion")
fieldValue1111 = x3d.fieldValue()
fieldValue1111.setName("name")
fieldValue1111.setValue("l_sphyrion")

ProtoInstance1110.addFieldValue(fieldValue1111)
fieldValue1112 = x3d.fieldValue()
fieldValue1112.setName("translation")
fieldValue1112.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance1110.addFieldValue(fieldValue1112)

fieldValue1103.addChildren(ProtoInstance1110)
ProtoInstance1113 = x3d.ProtoInstance()
ProtoInstance1113.setName("Site")
ProtoInstance1113.setDEF("hanim_l_calcaneus_posterior")
fieldValue1114 = x3d.fieldValue()
fieldValue1114.setName("name")
fieldValue1114.setValue("l_calcaneus_posterior")

ProtoInstance1113.addFieldValue(fieldValue1114)
fieldValue1115 = x3d.fieldValue()
fieldValue1115.setName("translation")
fieldValue1115.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance1113.addFieldValue(fieldValue1115)

fieldValue1103.addChildren(ProtoInstance1113)

ProtoInstance1101.addFieldValue(fieldValue1103)

fieldValue1080.addChildren(ProtoInstance1101)

ProtoInstance1076.addFieldValue(fieldValue1080)

fieldValue1075.addChildren(ProtoInstance1076)
ProtoInstance1116 = x3d.ProtoInstance()
ProtoInstance1116.setName("Segment")
ProtoInstance1116.setDEF("hanim_l_calf")
fieldValue1117 = x3d.fieldValue()
fieldValue1117.setName("name")
fieldValue1117.setValue("l_calf")

ProtoInstance1116.addFieldValue(fieldValue1117)

fieldValue1075.addChildren(ProtoInstance1116)

ProtoInstance1071.addFieldValue(fieldValue1075)

fieldValue487.addChildren(ProtoInstance1071)
ProtoInstance1118 = x3d.ProtoInstance()
ProtoInstance1118.setName("Joint")
ProtoInstance1118.setDEF("hanim_l_talocrural")
fieldValue1119 = x3d.fieldValue()
fieldValue1119.setName("stiffness")
fieldValue1119.setValue("1 1 1")

ProtoInstance1118.addFieldValue(fieldValue1119)
fieldValue1120 = x3d.fieldValue()
fieldValue1120.setName("name")
fieldValue1120.setValue("l_talocrural")

ProtoInstance1118.addFieldValue(fieldValue1120)
fieldValue1121 = x3d.fieldValue()
fieldValue1121.setName("center")
fieldValue1121.setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727")

ProtoInstance1118.addFieldValue(fieldValue1121)
fieldValue1122 = x3d.fieldValue()
fieldValue1122.setName("children")
ProtoInstance1123 = x3d.ProtoInstance()
ProtoInstance1123.setName("Joint")
ProtoInstance1123.setDEF("hanim_l_metatarsophalangeal_")
fieldValue1124 = x3d.fieldValue()
fieldValue1124.setName("stiffness")
fieldValue1124.setValue("1 1 1")

ProtoInstance1123.addFieldValue(fieldValue1124)
fieldValue1125 = x3d.fieldValue()
fieldValue1125.setName("name")
fieldValue1125.setValue("l_metatarsophalangeal_")

ProtoInstance1123.addFieldValue(fieldValue1125)
fieldValue1126 = x3d.fieldValue()
fieldValue1126.setName("center")
fieldValue1126.setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363")

ProtoInstance1123.addFieldValue(fieldValue1126)
fieldValue1127 = x3d.fieldValue()
fieldValue1127.setName("children")
ProtoInstance1128 = x3d.ProtoInstance()
ProtoInstance1128.setName("Segment")
ProtoInstance1128.setDEF("hanim_l_middistal")
fieldValue1129 = x3d.fieldValue()
fieldValue1129.setName("name")
fieldValue1129.setValue("l_middistal")

ProtoInstance1128.addFieldValue(fieldValue1129)
fieldValue1130 = x3d.fieldValue()
fieldValue1130.setName("children")
ProtoInstance1131 = x3d.ProtoInstance()
ProtoInstance1131.setName("Site")
ProtoInstance1131.setDEF("hanim_l_middistal_tip")
fieldValue1132 = x3d.fieldValue()
fieldValue1132.setName("name")
fieldValue1132.setValue("l_middistal_tip")

ProtoInstance1131.addFieldValue(fieldValue1132)
fieldValue1133 = x3d.fieldValue()
fieldValue1133.setName("translation")
fieldValue1133.setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261")

ProtoInstance1131.addFieldValue(fieldValue1133)

fieldValue1130.addChildren(ProtoInstance1131)
ProtoInstance1134 = x3d.ProtoInstance()
ProtoInstance1134.setName("Site")
ProtoInstance1134.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue1135 = x3d.fieldValue()
fieldValue1135.setName("name")
fieldValue1135.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance1134.addFieldValue(fieldValue1135)
fieldValue1136 = x3d.fieldValue()
fieldValue1136.setName("translation")
fieldValue1136.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance1134.addFieldValue(fieldValue1136)

fieldValue1130.addChildren(ProtoInstance1134)
ProtoInstance1137 = x3d.ProtoInstance()
ProtoInstance1137.setName("Site")
ProtoInstance1137.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue1138 = x3d.fieldValue()
fieldValue1138.setName("name")
fieldValue1138.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance1137.addFieldValue(fieldValue1138)
fieldValue1139 = x3d.fieldValue()
fieldValue1139.setName("translation")
fieldValue1139.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance1137.addFieldValue(fieldValue1139)

fieldValue1130.addChildren(ProtoInstance1137)
ProtoInstance1140 = x3d.ProtoInstance()
ProtoInstance1140.setName("Site")
ProtoInstance1140.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue1141 = x3d.fieldValue()
fieldValue1141.setName("name")
fieldValue1141.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance1140.addFieldValue(fieldValue1141)
fieldValue1142 = x3d.fieldValue()
fieldValue1142.setName("translation")
fieldValue1142.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance1140.addFieldValue(fieldValue1142)

fieldValue1130.addChildren(ProtoInstance1140)

ProtoInstance1128.addFieldValue(fieldValue1130)

fieldValue1127.addChildren(ProtoInstance1128)

ProtoInstance1123.addFieldValue(fieldValue1127)

fieldValue1122.addChildren(ProtoInstance1123)
ProtoInstance1143 = x3d.ProtoInstance()
ProtoInstance1143.setName("Segment")
ProtoInstance1143.setDEF("hanim_l_hindfoot")
fieldValue1144 = x3d.fieldValue()
fieldValue1144.setName("name")
fieldValue1144.setValue("l_hindfoot")

ProtoInstance1143.addFieldValue(fieldValue1144)
fieldValue1145 = x3d.fieldValue()
fieldValue1145.setName("children")
ProtoInstance1146 = x3d.ProtoInstance()
ProtoInstance1146.setName("Site")
ProtoInstance1146.setDEF("hanim_l_lateral_malleolus")
fieldValue1147 = x3d.fieldValue()
fieldValue1147.setName("name")
fieldValue1147.setValue("l_lateral_malleolus")

ProtoInstance1146.addFieldValue(fieldValue1147)
fieldValue1148 = x3d.fieldValue()
fieldValue1148.setName("translation")
fieldValue1148.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance1146.addFieldValue(fieldValue1148)

fieldValue1145.addChildren(ProtoInstance1146)
ProtoInstance1149 = x3d.ProtoInstance()
ProtoInstance1149.setName("Site")
ProtoInstance1149.setDEF("hanim_l_medial_malleolus")
fieldValue1150 = x3d.fieldValue()
fieldValue1150.setName("name")
fieldValue1150.setValue("l_medial_malleolus")

ProtoInstance1149.addFieldValue(fieldValue1150)
fieldValue1151 = x3d.fieldValue()
fieldValue1151.setName("translation")
fieldValue1151.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance1149.addFieldValue(fieldValue1151)

fieldValue1145.addChildren(ProtoInstance1149)
ProtoInstance1152 = x3d.ProtoInstance()
ProtoInstance1152.setName("Site")
ProtoInstance1152.setDEF("hanim_l_sphyrion")
fieldValue1153 = x3d.fieldValue()
fieldValue1153.setName("name")
fieldValue1153.setValue("l_sphyrion")

ProtoInstance1152.addFieldValue(fieldValue1153)
fieldValue1154 = x3d.fieldValue()
fieldValue1154.setName("translation")
fieldValue1154.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance1152.addFieldValue(fieldValue1154)

fieldValue1145.addChildren(ProtoInstance1152)
ProtoInstance1155 = x3d.ProtoInstance()
ProtoInstance1155.setName("Site")
ProtoInstance1155.setDEF("hanim_l_calcaneus_posterior")
fieldValue1156 = x3d.fieldValue()
fieldValue1156.setName("name")
fieldValue1156.setValue("l_calcaneus_posterior")

ProtoInstance1155.addFieldValue(fieldValue1156)
fieldValue1157 = x3d.fieldValue()
fieldValue1157.setName("translation")
fieldValue1157.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance1155.addFieldValue(fieldValue1157)

fieldValue1145.addChildren(ProtoInstance1155)

ProtoInstance1143.addFieldValue(fieldValue1145)

fieldValue1122.addChildren(ProtoInstance1143)

ProtoInstance1118.addFieldValue(fieldValue1122)

fieldValue487.addChildren(ProtoInstance1118)
ProtoInstance1158 = x3d.ProtoInstance()
ProtoInstance1158.setName("Joint")
ProtoInstance1158.setDEF("hanim_l_metatarsophalangeal_")
fieldValue1159 = x3d.fieldValue()
fieldValue1159.setName("stiffness")
fieldValue1159.setValue("1 1 1")

ProtoInstance1158.addFieldValue(fieldValue1159)
fieldValue1160 = x3d.fieldValue()
fieldValue1160.setName("name")
fieldValue1160.setValue("l_metatarsophalangeal_")

ProtoInstance1158.addFieldValue(fieldValue1160)
fieldValue1161 = x3d.fieldValue()
fieldValue1161.setName("center")
fieldValue1161.setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363")

ProtoInstance1158.addFieldValue(fieldValue1161)
fieldValue1162 = x3d.fieldValue()
fieldValue1162.setName("children")
ProtoInstance1163 = x3d.ProtoInstance()
ProtoInstance1163.setName("Segment")
ProtoInstance1163.setDEF("hanim_l_middistal")
fieldValue1164 = x3d.fieldValue()
fieldValue1164.setName("name")
fieldValue1164.setValue("l_middistal")

ProtoInstance1163.addFieldValue(fieldValue1164)
fieldValue1165 = x3d.fieldValue()
fieldValue1165.setName("children")
ProtoInstance1166 = x3d.ProtoInstance()
ProtoInstance1166.setName("Site")
ProtoInstance1166.setDEF("hanim_l_middistal_tip")
fieldValue1167 = x3d.fieldValue()
fieldValue1167.setName("name")
fieldValue1167.setValue("l_middistal_tip")

ProtoInstance1166.addFieldValue(fieldValue1167)
fieldValue1168 = x3d.fieldValue()
fieldValue1168.setName("translation")
fieldValue1168.setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261")

ProtoInstance1166.addFieldValue(fieldValue1168)

fieldValue1165.addChildren(ProtoInstance1166)
ProtoInstance1169 = x3d.ProtoInstance()
ProtoInstance1169.setName("Site")
ProtoInstance1169.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue1170 = x3d.fieldValue()
fieldValue1170.setName("name")
fieldValue1170.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance1169.addFieldValue(fieldValue1170)
fieldValue1171 = x3d.fieldValue()
fieldValue1171.setName("translation")
fieldValue1171.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance1169.addFieldValue(fieldValue1171)

fieldValue1165.addChildren(ProtoInstance1169)
ProtoInstance1172 = x3d.ProtoInstance()
ProtoInstance1172.setName("Site")
ProtoInstance1172.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue1173 = x3d.fieldValue()
fieldValue1173.setName("name")
fieldValue1173.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance1172.addFieldValue(fieldValue1173)
fieldValue1174 = x3d.fieldValue()
fieldValue1174.setName("translation")
fieldValue1174.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance1172.addFieldValue(fieldValue1174)

fieldValue1165.addChildren(ProtoInstance1172)
ProtoInstance1175 = x3d.ProtoInstance()
ProtoInstance1175.setName("Site")
ProtoInstance1175.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue1176 = x3d.fieldValue()
fieldValue1176.setName("name")
fieldValue1176.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance1175.addFieldValue(fieldValue1176)
fieldValue1177 = x3d.fieldValue()
fieldValue1177.setName("translation")
fieldValue1177.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance1175.addFieldValue(fieldValue1177)

fieldValue1165.addChildren(ProtoInstance1175)

ProtoInstance1163.addFieldValue(fieldValue1165)

fieldValue1162.addChildren(ProtoInstance1163)

ProtoInstance1158.addFieldValue(fieldValue1162)

fieldValue487.addChildren(ProtoInstance1158)
ProtoInstance1178 = x3d.ProtoInstance()
ProtoInstance1178.setName("Joint")
ProtoInstance1178.setDEF("hanim_r_hip")
fieldValue1179 = x3d.fieldValue()
fieldValue1179.setName("stiffness")
fieldValue1179.setValue("1 1 1")

ProtoInstance1178.addFieldValue(fieldValue1179)
fieldValue1180 = x3d.fieldValue()
fieldValue1180.setName("name")
fieldValue1180.setValue("r_hip")

ProtoInstance1178.addFieldValue(fieldValue1180)
fieldValue1181 = x3d.fieldValue()
fieldValue1181.setName("center")
fieldValue1181.setValue("-0.0949999988079071 0.9171000123023987 0.002899999963119626")

ProtoInstance1178.addFieldValue(fieldValue1181)
fieldValue1182 = x3d.fieldValue()
fieldValue1182.setName("children")
ProtoInstance1183 = x3d.ProtoInstance()
ProtoInstance1183.setName("Joint")
ProtoInstance1183.setDEF("hanim_r_knee")
fieldValue1184 = x3d.fieldValue()
fieldValue1184.setName("stiffness")
fieldValue1184.setValue("1 1 1")

ProtoInstance1183.addFieldValue(fieldValue1184)
fieldValue1185 = x3d.fieldValue()
fieldValue1185.setName("name")
fieldValue1185.setValue("r_knee")

ProtoInstance1183.addFieldValue(fieldValue1185)
fieldValue1186 = x3d.fieldValue()
fieldValue1186.setName("center")
fieldValue1186.setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492")

ProtoInstance1183.addFieldValue(fieldValue1186)
fieldValue1187 = x3d.fieldValue()
fieldValue1187.setName("children")
ProtoInstance1188 = x3d.ProtoInstance()
ProtoInstance1188.setName("Joint")
ProtoInstance1188.setDEF("hanim_r_talocrural")
fieldValue1189 = x3d.fieldValue()
fieldValue1189.setName("stiffness")
fieldValue1189.setValue("1 1 1")

ProtoInstance1188.addFieldValue(fieldValue1189)
fieldValue1190 = x3d.fieldValue()
fieldValue1190.setName("name")
fieldValue1190.setValue("r_talocrural")

ProtoInstance1188.addFieldValue(fieldValue1190)
fieldValue1191 = x3d.fieldValue()
fieldValue1191.setName("center")
fieldValue1191.setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044")

ProtoInstance1188.addFieldValue(fieldValue1191)
fieldValue1192 = x3d.fieldValue()
fieldValue1192.setName("children")
ProtoInstance1193 = x3d.ProtoInstance()
ProtoInstance1193.setName("Joint")
ProtoInstance1193.setDEF("hanim_r_metatarsophalangeal_")
fieldValue1194 = x3d.fieldValue()
fieldValue1194.setName("stiffness")
fieldValue1194.setValue("1 1 1")

ProtoInstance1193.addFieldValue(fieldValue1194)
fieldValue1195 = x3d.fieldValue()
fieldValue1195.setName("name")
fieldValue1195.setValue("r_metatarsophalangeal_")

ProtoInstance1193.addFieldValue(fieldValue1195)
fieldValue1196 = x3d.fieldValue()
fieldValue1196.setName("center")
fieldValue1196.setValue("-0.08009999990463257 0 0.03680000081658363")

ProtoInstance1193.addFieldValue(fieldValue1196)
fieldValue1197 = x3d.fieldValue()
fieldValue1197.setName("children")
ProtoInstance1198 = x3d.ProtoInstance()
ProtoInstance1198.setName("Segment")
ProtoInstance1198.setDEF("hanim_r_middistal")
fieldValue1199 = x3d.fieldValue()
fieldValue1199.setName("name")
fieldValue1199.setValue("r_middistal")

ProtoInstance1198.addFieldValue(fieldValue1199)
fieldValue1200 = x3d.fieldValue()
fieldValue1200.setName("children")
ProtoInstance1201 = x3d.ProtoInstance()
ProtoInstance1201.setName("Site")
ProtoInstance1201.setDEF("hanim_r_middistal_tip")
fieldValue1202 = x3d.fieldValue()
fieldValue1202.setName("name")
fieldValue1202.setValue("r_middistal_tip")

ProtoInstance1201.addFieldValue(fieldValue1202)
fieldValue1203 = x3d.fieldValue()
fieldValue1203.setName("translation")
fieldValue1203.setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")

ProtoInstance1201.addFieldValue(fieldValue1203)

fieldValue1200.addChildren(ProtoInstance1201)
ProtoInstance1204 = x3d.ProtoInstance()
ProtoInstance1204.setName("Site")
ProtoInstance1204.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue1205 = x3d.fieldValue()
fieldValue1205.setName("name")
fieldValue1205.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance1204.addFieldValue(fieldValue1205)
fieldValue1206 = x3d.fieldValue()
fieldValue1206.setName("translation")
fieldValue1206.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance1204.addFieldValue(fieldValue1206)

fieldValue1200.addChildren(ProtoInstance1204)
ProtoInstance1207 = x3d.ProtoInstance()
ProtoInstance1207.setName("Site")
ProtoInstance1207.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue1208 = x3d.fieldValue()
fieldValue1208.setName("name")
fieldValue1208.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance1207.addFieldValue(fieldValue1208)
fieldValue1209 = x3d.fieldValue()
fieldValue1209.setName("translation")
fieldValue1209.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance1207.addFieldValue(fieldValue1209)

fieldValue1200.addChildren(ProtoInstance1207)
ProtoInstance1210 = x3d.ProtoInstance()
ProtoInstance1210.setName("Site")
ProtoInstance1210.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue1211 = x3d.fieldValue()
fieldValue1211.setName("name")
fieldValue1211.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance1210.addFieldValue(fieldValue1211)
fieldValue1212 = x3d.fieldValue()
fieldValue1212.setName("translation")
fieldValue1212.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance1210.addFieldValue(fieldValue1212)

fieldValue1200.addChildren(ProtoInstance1210)

ProtoInstance1198.addFieldValue(fieldValue1200)

fieldValue1197.addChildren(ProtoInstance1198)

ProtoInstance1193.addFieldValue(fieldValue1197)

fieldValue1192.addChildren(ProtoInstance1193)
ProtoInstance1213 = x3d.ProtoInstance()
ProtoInstance1213.setName("Segment")
ProtoInstance1213.setDEF("hanim_r_hindfoot")
fieldValue1214 = x3d.fieldValue()
fieldValue1214.setName("name")
fieldValue1214.setValue("r_hindfoot")

ProtoInstance1213.addFieldValue(fieldValue1214)
fieldValue1215 = x3d.fieldValue()
fieldValue1215.setName("children")
ProtoInstance1216 = x3d.ProtoInstance()
ProtoInstance1216.setName("Site")
ProtoInstance1216.setDEF("hanim_r_lateral_malleolus")
fieldValue1217 = x3d.fieldValue()
fieldValue1217.setName("name")
fieldValue1217.setValue("r_lateral_malleolus")

ProtoInstance1216.addFieldValue(fieldValue1217)
fieldValue1218 = x3d.fieldValue()
fieldValue1218.setName("translation")
fieldValue1218.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance1216.addFieldValue(fieldValue1218)

fieldValue1215.addChildren(ProtoInstance1216)
ProtoInstance1219 = x3d.ProtoInstance()
ProtoInstance1219.setName("Site")
ProtoInstance1219.setDEF("hanim_r_medial_malleolus")
fieldValue1220 = x3d.fieldValue()
fieldValue1220.setName("name")
fieldValue1220.setValue("r_medial_malleolus")

ProtoInstance1219.addFieldValue(fieldValue1220)
fieldValue1221 = x3d.fieldValue()
fieldValue1221.setName("translation")
fieldValue1221.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance1219.addFieldValue(fieldValue1221)

fieldValue1215.addChildren(ProtoInstance1219)
ProtoInstance1222 = x3d.ProtoInstance()
ProtoInstance1222.setName("Site")
ProtoInstance1222.setDEF("hanim_r_sphyrion")
fieldValue1223 = x3d.fieldValue()
fieldValue1223.setName("name")
fieldValue1223.setValue("r_sphyrion")

ProtoInstance1222.addFieldValue(fieldValue1223)
fieldValue1224 = x3d.fieldValue()
fieldValue1224.setName("translation")
fieldValue1224.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance1222.addFieldValue(fieldValue1224)

fieldValue1215.addChildren(ProtoInstance1222)
ProtoInstance1225 = x3d.ProtoInstance()
ProtoInstance1225.setName("Site")
ProtoInstance1225.setDEF("hanim_r_calcaneus_posterior")
fieldValue1226 = x3d.fieldValue()
fieldValue1226.setName("name")
fieldValue1226.setValue("r_calcaneus_posterior")

ProtoInstance1225.addFieldValue(fieldValue1226)
fieldValue1227 = x3d.fieldValue()
fieldValue1227.setName("translation")
fieldValue1227.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance1225.addFieldValue(fieldValue1227)

fieldValue1215.addChildren(ProtoInstance1225)

ProtoInstance1213.addFieldValue(fieldValue1215)

fieldValue1192.addChildren(ProtoInstance1213)

ProtoInstance1188.addFieldValue(fieldValue1192)

fieldValue1187.addChildren(ProtoInstance1188)
ProtoInstance1228 = x3d.ProtoInstance()
ProtoInstance1228.setName("Segment")
ProtoInstance1228.setDEF("hanim_r_calf")
fieldValue1229 = x3d.fieldValue()
fieldValue1229.setName("name")
fieldValue1229.setValue("r_calf")

ProtoInstance1228.addFieldValue(fieldValue1229)

fieldValue1187.addChildren(ProtoInstance1228)

ProtoInstance1183.addFieldValue(fieldValue1187)

fieldValue1182.addChildren(ProtoInstance1183)
ProtoInstance1230 = x3d.ProtoInstance()
ProtoInstance1230.setName("Segment")
ProtoInstance1230.setDEF("hanim_r_thigh")
fieldValue1231 = x3d.fieldValue()
fieldValue1231.setName("name")
fieldValue1231.setValue("r_thigh")

ProtoInstance1230.addFieldValue(fieldValue1231)
fieldValue1232 = x3d.fieldValue()
fieldValue1232.setName("children")
ProtoInstance1233 = x3d.ProtoInstance()
ProtoInstance1233.setName("Site")
ProtoInstance1233.setDEF("hanim_r_knee_crease")
fieldValue1234 = x3d.fieldValue()
fieldValue1234.setName("name")
fieldValue1234.setValue("r_knee_crease")

ProtoInstance1233.addFieldValue(fieldValue1234)
fieldValue1235 = x3d.fieldValue()
fieldValue1235.setName("translation")
fieldValue1235.setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")

ProtoInstance1233.addFieldValue(fieldValue1235)

fieldValue1232.addChildren(ProtoInstance1233)
ProtoInstance1236 = x3d.ProtoInstance()
ProtoInstance1236.setName("Site")
ProtoInstance1236.setDEF("hanim_r_femoral_lateral_epicondyles")
fieldValue1237 = x3d.fieldValue()
fieldValue1237.setName("name")
fieldValue1237.setValue("r_femoral_lateral_epicondyles")

ProtoInstance1236.addFieldValue(fieldValue1237)
fieldValue1238 = x3d.fieldValue()
fieldValue1238.setName("translation")
fieldValue1238.setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052")

ProtoInstance1236.addFieldValue(fieldValue1238)

fieldValue1232.addChildren(ProtoInstance1236)
ProtoInstance1239 = x3d.ProtoInstance()
ProtoInstance1239.setName("Site")
ProtoInstance1239.setDEF("hanim_r_femoral_medial_epicondyles")
fieldValue1240 = x3d.fieldValue()
fieldValue1240.setName("name")
fieldValue1240.setValue("r_femoral_lateral_epicondyles")

ProtoInstance1239.addFieldValue(fieldValue1240)
fieldValue1241 = x3d.fieldValue()
fieldValue1241.setName("translation")
fieldValue1241.setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821")

ProtoInstance1239.addFieldValue(fieldValue1241)

fieldValue1232.addChildren(ProtoInstance1239)

ProtoInstance1230.addFieldValue(fieldValue1232)

fieldValue1182.addChildren(ProtoInstance1230)

ProtoInstance1178.addFieldValue(fieldValue1182)

fieldValue487.addChildren(ProtoInstance1178)
ProtoInstance1242 = x3d.ProtoInstance()
ProtoInstance1242.setName("Joint")
ProtoInstance1242.setDEF("hanim_r_knee")
fieldValue1243 = x3d.fieldValue()
fieldValue1243.setName("stiffness")
fieldValue1243.setValue("1 1 1")

ProtoInstance1242.addFieldValue(fieldValue1243)
fieldValue1244 = x3d.fieldValue()
fieldValue1244.setName("name")
fieldValue1244.setValue("r_knee")

ProtoInstance1242.addFieldValue(fieldValue1244)
fieldValue1245 = x3d.fieldValue()
fieldValue1245.setName("center")
fieldValue1245.setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492")

ProtoInstance1242.addFieldValue(fieldValue1245)
fieldValue1246 = x3d.fieldValue()
fieldValue1246.setName("children")
ProtoInstance1247 = x3d.ProtoInstance()
ProtoInstance1247.setName("Joint")
ProtoInstance1247.setDEF("hanim_r_talocrural")
fieldValue1248 = x3d.fieldValue()
fieldValue1248.setName("stiffness")
fieldValue1248.setValue("1 1 1")

ProtoInstance1247.addFieldValue(fieldValue1248)
fieldValue1249 = x3d.fieldValue()
fieldValue1249.setName("name")
fieldValue1249.setValue("r_talocrural")

ProtoInstance1247.addFieldValue(fieldValue1249)
fieldValue1250 = x3d.fieldValue()
fieldValue1250.setName("center")
fieldValue1250.setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044")

ProtoInstance1247.addFieldValue(fieldValue1250)
fieldValue1251 = x3d.fieldValue()
fieldValue1251.setName("children")
ProtoInstance1252 = x3d.ProtoInstance()
ProtoInstance1252.setName("Joint")
ProtoInstance1252.setDEF("hanim_r_metatarsophalangeal_")
fieldValue1253 = x3d.fieldValue()
fieldValue1253.setName("stiffness")
fieldValue1253.setValue("1 1 1")

ProtoInstance1252.addFieldValue(fieldValue1253)
fieldValue1254 = x3d.fieldValue()
fieldValue1254.setName("name")
fieldValue1254.setValue("r_metatarsophalangeal_")

ProtoInstance1252.addFieldValue(fieldValue1254)
fieldValue1255 = x3d.fieldValue()
fieldValue1255.setName("center")
fieldValue1255.setValue("-0.08009999990463257 0 0.03680000081658363")

ProtoInstance1252.addFieldValue(fieldValue1255)
fieldValue1256 = x3d.fieldValue()
fieldValue1256.setName("children")
ProtoInstance1257 = x3d.ProtoInstance()
ProtoInstance1257.setName("Segment")
ProtoInstance1257.setDEF("hanim_r_middistal")
fieldValue1258 = x3d.fieldValue()
fieldValue1258.setName("name")
fieldValue1258.setValue("r_middistal")

ProtoInstance1257.addFieldValue(fieldValue1258)
fieldValue1259 = x3d.fieldValue()
fieldValue1259.setName("children")
ProtoInstance1260 = x3d.ProtoInstance()
ProtoInstance1260.setName("Site")
ProtoInstance1260.setDEF("hanim_r_middistal_tip")
fieldValue1261 = x3d.fieldValue()
fieldValue1261.setName("name")
fieldValue1261.setValue("r_middistal_tip")

ProtoInstance1260.addFieldValue(fieldValue1261)
fieldValue1262 = x3d.fieldValue()
fieldValue1262.setName("translation")
fieldValue1262.setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")

ProtoInstance1260.addFieldValue(fieldValue1262)

fieldValue1259.addChildren(ProtoInstance1260)
ProtoInstance1263 = x3d.ProtoInstance()
ProtoInstance1263.setName("Site")
ProtoInstance1263.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue1264 = x3d.fieldValue()
fieldValue1264.setName("name")
fieldValue1264.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance1263.addFieldValue(fieldValue1264)
fieldValue1265 = x3d.fieldValue()
fieldValue1265.setName("translation")
fieldValue1265.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance1263.addFieldValue(fieldValue1265)

fieldValue1259.addChildren(ProtoInstance1263)
ProtoInstance1266 = x3d.ProtoInstance()
ProtoInstance1266.setName("Site")
ProtoInstance1266.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue1267 = x3d.fieldValue()
fieldValue1267.setName("name")
fieldValue1267.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance1266.addFieldValue(fieldValue1267)
fieldValue1268 = x3d.fieldValue()
fieldValue1268.setName("translation")
fieldValue1268.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance1266.addFieldValue(fieldValue1268)

fieldValue1259.addChildren(ProtoInstance1266)
ProtoInstance1269 = x3d.ProtoInstance()
ProtoInstance1269.setName("Site")
ProtoInstance1269.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue1270 = x3d.fieldValue()
fieldValue1270.setName("name")
fieldValue1270.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance1269.addFieldValue(fieldValue1270)
fieldValue1271 = x3d.fieldValue()
fieldValue1271.setName("translation")
fieldValue1271.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance1269.addFieldValue(fieldValue1271)

fieldValue1259.addChildren(ProtoInstance1269)

ProtoInstance1257.addFieldValue(fieldValue1259)

fieldValue1256.addChildren(ProtoInstance1257)

ProtoInstance1252.addFieldValue(fieldValue1256)

fieldValue1251.addChildren(ProtoInstance1252)
ProtoInstance1272 = x3d.ProtoInstance()
ProtoInstance1272.setName("Segment")
ProtoInstance1272.setDEF("hanim_r_hindfoot")
fieldValue1273 = x3d.fieldValue()
fieldValue1273.setName("name")
fieldValue1273.setValue("r_hindfoot")

ProtoInstance1272.addFieldValue(fieldValue1273)
fieldValue1274 = x3d.fieldValue()
fieldValue1274.setName("children")
ProtoInstance1275 = x3d.ProtoInstance()
ProtoInstance1275.setName("Site")
ProtoInstance1275.setDEF("hanim_r_lateral_malleolus")
fieldValue1276 = x3d.fieldValue()
fieldValue1276.setName("name")
fieldValue1276.setValue("r_lateral_malleolus")

ProtoInstance1275.addFieldValue(fieldValue1276)
fieldValue1277 = x3d.fieldValue()
fieldValue1277.setName("translation")
fieldValue1277.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance1275.addFieldValue(fieldValue1277)

fieldValue1274.addChildren(ProtoInstance1275)
ProtoInstance1278 = x3d.ProtoInstance()
ProtoInstance1278.setName("Site")
ProtoInstance1278.setDEF("hanim_r_medial_malleolus")
fieldValue1279 = x3d.fieldValue()
fieldValue1279.setName("name")
fieldValue1279.setValue("r_medial_malleolus")

ProtoInstance1278.addFieldValue(fieldValue1279)
fieldValue1280 = x3d.fieldValue()
fieldValue1280.setName("translation")
fieldValue1280.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance1278.addFieldValue(fieldValue1280)

fieldValue1274.addChildren(ProtoInstance1278)
ProtoInstance1281 = x3d.ProtoInstance()
ProtoInstance1281.setName("Site")
ProtoInstance1281.setDEF("hanim_r_sphyrion")
fieldValue1282 = x3d.fieldValue()
fieldValue1282.setName("name")
fieldValue1282.setValue("r_sphyrion")

ProtoInstance1281.addFieldValue(fieldValue1282)
fieldValue1283 = x3d.fieldValue()
fieldValue1283.setName("translation")
fieldValue1283.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance1281.addFieldValue(fieldValue1283)

fieldValue1274.addChildren(ProtoInstance1281)
ProtoInstance1284 = x3d.ProtoInstance()
ProtoInstance1284.setName("Site")
ProtoInstance1284.setDEF("hanim_r_calcaneus_posterior")
fieldValue1285 = x3d.fieldValue()
fieldValue1285.setName("name")
fieldValue1285.setValue("r_calcaneus_posterior")

ProtoInstance1284.addFieldValue(fieldValue1285)
fieldValue1286 = x3d.fieldValue()
fieldValue1286.setName("translation")
fieldValue1286.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance1284.addFieldValue(fieldValue1286)

fieldValue1274.addChildren(ProtoInstance1284)

ProtoInstance1272.addFieldValue(fieldValue1274)

fieldValue1251.addChildren(ProtoInstance1272)

ProtoInstance1247.addFieldValue(fieldValue1251)

fieldValue1246.addChildren(ProtoInstance1247)
ProtoInstance1287 = x3d.ProtoInstance()
ProtoInstance1287.setName("Segment")
ProtoInstance1287.setDEF("hanim_r_calf")
fieldValue1288 = x3d.fieldValue()
fieldValue1288.setName("name")
fieldValue1288.setValue("r_calf")

ProtoInstance1287.addFieldValue(fieldValue1288)

fieldValue1246.addChildren(ProtoInstance1287)

ProtoInstance1242.addFieldValue(fieldValue1246)

fieldValue487.addChildren(ProtoInstance1242)
ProtoInstance1289 = x3d.ProtoInstance()
ProtoInstance1289.setName("Joint")
ProtoInstance1289.setDEF("hanim_r_talocrural")
fieldValue1290 = x3d.fieldValue()
fieldValue1290.setName("stiffness")
fieldValue1290.setValue("1 1 1")

ProtoInstance1289.addFieldValue(fieldValue1290)
fieldValue1291 = x3d.fieldValue()
fieldValue1291.setName("name")
fieldValue1291.setValue("r_talocrural")

ProtoInstance1289.addFieldValue(fieldValue1291)
fieldValue1292 = x3d.fieldValue()
fieldValue1292.setName("center")
fieldValue1292.setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044")

ProtoInstance1289.addFieldValue(fieldValue1292)
fieldValue1293 = x3d.fieldValue()
fieldValue1293.setName("children")
ProtoInstance1294 = x3d.ProtoInstance()
ProtoInstance1294.setName("Joint")
ProtoInstance1294.setDEF("hanim_r_metatarsophalangeal_")
fieldValue1295 = x3d.fieldValue()
fieldValue1295.setName("stiffness")
fieldValue1295.setValue("1 1 1")

ProtoInstance1294.addFieldValue(fieldValue1295)
fieldValue1296 = x3d.fieldValue()
fieldValue1296.setName("name")
fieldValue1296.setValue("r_metatarsophalangeal_")

ProtoInstance1294.addFieldValue(fieldValue1296)
fieldValue1297 = x3d.fieldValue()
fieldValue1297.setName("center")
fieldValue1297.setValue("-0.08009999990463257 0 0.03680000081658363")

ProtoInstance1294.addFieldValue(fieldValue1297)
fieldValue1298 = x3d.fieldValue()
fieldValue1298.setName("children")
ProtoInstance1299 = x3d.ProtoInstance()
ProtoInstance1299.setName("Segment")
ProtoInstance1299.setDEF("hanim_r_middistal")
fieldValue1300 = x3d.fieldValue()
fieldValue1300.setName("name")
fieldValue1300.setValue("r_middistal")

ProtoInstance1299.addFieldValue(fieldValue1300)
fieldValue1301 = x3d.fieldValue()
fieldValue1301.setName("children")
ProtoInstance1302 = x3d.ProtoInstance()
ProtoInstance1302.setName("Site")
ProtoInstance1302.setDEF("hanim_r_middistal_tip")
fieldValue1303 = x3d.fieldValue()
fieldValue1303.setName("name")
fieldValue1303.setValue("r_middistal_tip")

ProtoInstance1302.addFieldValue(fieldValue1303)
fieldValue1304 = x3d.fieldValue()
fieldValue1304.setName("translation")
fieldValue1304.setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")

ProtoInstance1302.addFieldValue(fieldValue1304)

fieldValue1301.addChildren(ProtoInstance1302)
ProtoInstance1305 = x3d.ProtoInstance()
ProtoInstance1305.setName("Site")
ProtoInstance1305.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue1306 = x3d.fieldValue()
fieldValue1306.setName("name")
fieldValue1306.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance1305.addFieldValue(fieldValue1306)
fieldValue1307 = x3d.fieldValue()
fieldValue1307.setName("translation")
fieldValue1307.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance1305.addFieldValue(fieldValue1307)

fieldValue1301.addChildren(ProtoInstance1305)
ProtoInstance1308 = x3d.ProtoInstance()
ProtoInstance1308.setName("Site")
ProtoInstance1308.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue1309 = x3d.fieldValue()
fieldValue1309.setName("name")
fieldValue1309.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance1308.addFieldValue(fieldValue1309)
fieldValue1310 = x3d.fieldValue()
fieldValue1310.setName("translation")
fieldValue1310.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance1308.addFieldValue(fieldValue1310)

fieldValue1301.addChildren(ProtoInstance1308)
ProtoInstance1311 = x3d.ProtoInstance()
ProtoInstance1311.setName("Site")
ProtoInstance1311.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue1312 = x3d.fieldValue()
fieldValue1312.setName("name")
fieldValue1312.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance1311.addFieldValue(fieldValue1312)
fieldValue1313 = x3d.fieldValue()
fieldValue1313.setName("translation")
fieldValue1313.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance1311.addFieldValue(fieldValue1313)

fieldValue1301.addChildren(ProtoInstance1311)

ProtoInstance1299.addFieldValue(fieldValue1301)

fieldValue1298.addChildren(ProtoInstance1299)

ProtoInstance1294.addFieldValue(fieldValue1298)

fieldValue1293.addChildren(ProtoInstance1294)
ProtoInstance1314 = x3d.ProtoInstance()
ProtoInstance1314.setName("Segment")
ProtoInstance1314.setDEF("hanim_r_hindfoot")
fieldValue1315 = x3d.fieldValue()
fieldValue1315.setName("name")
fieldValue1315.setValue("r_hindfoot")

ProtoInstance1314.addFieldValue(fieldValue1315)
fieldValue1316 = x3d.fieldValue()
fieldValue1316.setName("children")
ProtoInstance1317 = x3d.ProtoInstance()
ProtoInstance1317.setName("Site")
ProtoInstance1317.setDEF("hanim_r_lateral_malleolus")
fieldValue1318 = x3d.fieldValue()
fieldValue1318.setName("name")
fieldValue1318.setValue("r_lateral_malleolus")

ProtoInstance1317.addFieldValue(fieldValue1318)
fieldValue1319 = x3d.fieldValue()
fieldValue1319.setName("translation")
fieldValue1319.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance1317.addFieldValue(fieldValue1319)

fieldValue1316.addChildren(ProtoInstance1317)
ProtoInstance1320 = x3d.ProtoInstance()
ProtoInstance1320.setName("Site")
ProtoInstance1320.setDEF("hanim_r_medial_malleolus")
fieldValue1321 = x3d.fieldValue()
fieldValue1321.setName("name")
fieldValue1321.setValue("r_medial_malleolus")

ProtoInstance1320.addFieldValue(fieldValue1321)
fieldValue1322 = x3d.fieldValue()
fieldValue1322.setName("translation")
fieldValue1322.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance1320.addFieldValue(fieldValue1322)

fieldValue1316.addChildren(ProtoInstance1320)
ProtoInstance1323 = x3d.ProtoInstance()
ProtoInstance1323.setName("Site")
ProtoInstance1323.setDEF("hanim_r_sphyrion")
fieldValue1324 = x3d.fieldValue()
fieldValue1324.setName("name")
fieldValue1324.setValue("r_sphyrion")

ProtoInstance1323.addFieldValue(fieldValue1324)
fieldValue1325 = x3d.fieldValue()
fieldValue1325.setName("translation")
fieldValue1325.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance1323.addFieldValue(fieldValue1325)

fieldValue1316.addChildren(ProtoInstance1323)
ProtoInstance1326 = x3d.ProtoInstance()
ProtoInstance1326.setName("Site")
ProtoInstance1326.setDEF("hanim_r_calcaneus_posterior")
fieldValue1327 = x3d.fieldValue()
fieldValue1327.setName("name")
fieldValue1327.setValue("r_calcaneus_posterior")

ProtoInstance1326.addFieldValue(fieldValue1327)
fieldValue1328 = x3d.fieldValue()
fieldValue1328.setName("translation")
fieldValue1328.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance1326.addFieldValue(fieldValue1328)

fieldValue1316.addChildren(ProtoInstance1326)

ProtoInstance1314.addFieldValue(fieldValue1316)

fieldValue1293.addChildren(ProtoInstance1314)

ProtoInstance1289.addFieldValue(fieldValue1293)

fieldValue487.addChildren(ProtoInstance1289)
ProtoInstance1329 = x3d.ProtoInstance()
ProtoInstance1329.setName("Joint")
ProtoInstance1329.setDEF("hanim_r_metatarsophalangeal_")
fieldValue1330 = x3d.fieldValue()
fieldValue1330.setName("stiffness")
fieldValue1330.setValue("1 1 1")

ProtoInstance1329.addFieldValue(fieldValue1330)
fieldValue1331 = x3d.fieldValue()
fieldValue1331.setName("name")
fieldValue1331.setValue("r_metatarsophalangeal_")

ProtoInstance1329.addFieldValue(fieldValue1331)
fieldValue1332 = x3d.fieldValue()
fieldValue1332.setName("center")
fieldValue1332.setValue("-0.08009999990463257 0 0.03680000081658363")

ProtoInstance1329.addFieldValue(fieldValue1332)
fieldValue1333 = x3d.fieldValue()
fieldValue1333.setName("children")
ProtoInstance1334 = x3d.ProtoInstance()
ProtoInstance1334.setName("Segment")
ProtoInstance1334.setDEF("hanim_r_middistal")
fieldValue1335 = x3d.fieldValue()
fieldValue1335.setName("name")
fieldValue1335.setValue("r_middistal")

ProtoInstance1334.addFieldValue(fieldValue1335)
fieldValue1336 = x3d.fieldValue()
fieldValue1336.setName("children")
ProtoInstance1337 = x3d.ProtoInstance()
ProtoInstance1337.setName("Site")
ProtoInstance1337.setDEF("hanim_r_middistal_tip")
fieldValue1338 = x3d.fieldValue()
fieldValue1338.setName("name")
fieldValue1338.setValue("r_middistal_tip")

ProtoInstance1337.addFieldValue(fieldValue1338)
fieldValue1339 = x3d.fieldValue()
fieldValue1339.setName("translation")
fieldValue1339.setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")

ProtoInstance1337.addFieldValue(fieldValue1339)

fieldValue1336.addChildren(ProtoInstance1337)
ProtoInstance1340 = x3d.ProtoInstance()
ProtoInstance1340.setName("Site")
ProtoInstance1340.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue1341 = x3d.fieldValue()
fieldValue1341.setName("name")
fieldValue1341.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance1340.addFieldValue(fieldValue1341)
fieldValue1342 = x3d.fieldValue()
fieldValue1342.setName("translation")
fieldValue1342.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance1340.addFieldValue(fieldValue1342)

fieldValue1336.addChildren(ProtoInstance1340)
ProtoInstance1343 = x3d.ProtoInstance()
ProtoInstance1343.setName("Site")
ProtoInstance1343.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue1344 = x3d.fieldValue()
fieldValue1344.setName("name")
fieldValue1344.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance1343.addFieldValue(fieldValue1344)
fieldValue1345 = x3d.fieldValue()
fieldValue1345.setName("translation")
fieldValue1345.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance1343.addFieldValue(fieldValue1345)

fieldValue1336.addChildren(ProtoInstance1343)
ProtoInstance1346 = x3d.ProtoInstance()
ProtoInstance1346.setName("Site")
ProtoInstance1346.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue1347 = x3d.fieldValue()
fieldValue1347.setName("name")
fieldValue1347.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance1346.addFieldValue(fieldValue1347)
fieldValue1348 = x3d.fieldValue()
fieldValue1348.setName("translation")
fieldValue1348.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance1346.addFieldValue(fieldValue1348)

fieldValue1336.addChildren(ProtoInstance1346)

ProtoInstance1334.addFieldValue(fieldValue1336)

fieldValue1333.addChildren(ProtoInstance1334)

ProtoInstance1329.addFieldValue(fieldValue1333)

fieldValue487.addChildren(ProtoInstance1329)
ProtoInstance1349 = x3d.ProtoInstance()
ProtoInstance1349.setName("Joint")
ProtoInstance1349.setDEF("hanim_vl5")
fieldValue1350 = x3d.fieldValue()
fieldValue1350.setName("stiffness")
fieldValue1350.setValue("1 1 1")

ProtoInstance1349.addFieldValue(fieldValue1350)
fieldValue1351 = x3d.fieldValue()
fieldValue1351.setName("name")
fieldValue1351.setValue("vl5")

ProtoInstance1349.addFieldValue(fieldValue1351)
fieldValue1352 = x3d.fieldValue()
fieldValue1352.setName("center")
fieldValue1352.setValue("0.00279999990016222 1.0568000078201294 -0.07760000228881836")

ProtoInstance1349.addFieldValue(fieldValue1352)
fieldValue1353 = x3d.fieldValue()
fieldValue1353.setName("children")
ProtoInstance1354 = x3d.ProtoInstance()
ProtoInstance1354.setName("Joint")
ProtoInstance1354.setDEF("hanim_skullbase")
fieldValue1355 = x3d.fieldValue()
fieldValue1355.setName("stiffness")
fieldValue1355.setValue("1 1 1")

ProtoInstance1354.addFieldValue(fieldValue1355)
fieldValue1356 = x3d.fieldValue()
fieldValue1356.setName("name")
fieldValue1356.setValue("skullbase")

ProtoInstance1354.addFieldValue(fieldValue1356)
fieldValue1357 = x3d.fieldValue()
fieldValue1357.setName("center")
fieldValue1357.setValue("0.004399999976158142 1.62090003490448 0.023600000888109207")

ProtoInstance1354.addFieldValue(fieldValue1357)
fieldValue1358 = x3d.fieldValue()
fieldValue1358.setName("children")
ProtoInstance1359 = x3d.ProtoInstance()
ProtoInstance1359.setName("Segment")
ProtoInstance1359.setDEF("hanim_skull")
fieldValue1360 = x3d.fieldValue()
fieldValue1360.setName("name")
fieldValue1360.setValue("skull")

ProtoInstance1359.addFieldValue(fieldValue1360)
fieldValue1361 = x3d.fieldValue()
fieldValue1361.setName("children")
ProtoInstance1362 = x3d.ProtoInstance()
ProtoInstance1362.setName("Site")
ProtoInstance1362.setDEF("hanim_skull_tip")
fieldValue1363 = x3d.fieldValue()
fieldValue1363.setName("name")
fieldValue1363.setValue("skull_tip")

ProtoInstance1362.addFieldValue(fieldValue1363)
fieldValue1364 = x3d.fieldValue()
fieldValue1364.setName("translation")
fieldValue1364.setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678")

ProtoInstance1362.addFieldValue(fieldValue1364)

fieldValue1361.addChildren(ProtoInstance1362)
ProtoInstance1365 = x3d.ProtoInstance()
ProtoInstance1365.setName("Site")
ProtoInstance1365.setDEF("hanim_sellion")
fieldValue1366 = x3d.fieldValue()
fieldValue1366.setName("name")
fieldValue1366.setValue("sellion")

ProtoInstance1365.addFieldValue(fieldValue1366)
fieldValue1367 = x3d.fieldValue()
fieldValue1367.setName("translation")
fieldValue1367.setValue("0.005799999926239252 1.631600022315979 0.0851999968290329")

ProtoInstance1365.addFieldValue(fieldValue1367)

fieldValue1361.addChildren(ProtoInstance1365)
ProtoInstance1368 = x3d.ProtoInstance()
ProtoInstance1368.setName("Site")
ProtoInstance1368.setDEF("hanim_r_infraorbitale")
fieldValue1369 = x3d.fieldValue()
fieldValue1369.setName("name")
fieldValue1369.setValue("r_infraorbitale")

ProtoInstance1368.addFieldValue(fieldValue1369)
fieldValue1370 = x3d.fieldValue()
fieldValue1370.setName("translation")
fieldValue1370.setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547")

ProtoInstance1368.addFieldValue(fieldValue1370)

fieldValue1361.addChildren(ProtoInstance1368)
ProtoInstance1371 = x3d.ProtoInstance()
ProtoInstance1371.setName("Site")
ProtoInstance1371.setDEF("hanim_l_infraorbitale")
fieldValue1372 = x3d.fieldValue()
fieldValue1372.setName("name")
fieldValue1372.setValue("l_infraorbitale")

ProtoInstance1371.addFieldValue(fieldValue1372)
fieldValue1373 = x3d.fieldValue()
fieldValue1373.setName("translation")
fieldValue1373.setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547")

ProtoInstance1371.addFieldValue(fieldValue1373)

fieldValue1361.addChildren(ProtoInstance1371)
ProtoInstance1374 = x3d.ProtoInstance()
ProtoInstance1374.setName("Site")
ProtoInstance1374.setDEF("hanim_supramenton")
fieldValue1375 = x3d.fieldValue()
fieldValue1375.setName("name")
fieldValue1375.setValue("supramenton")

ProtoInstance1374.addFieldValue(fieldValue1375)
fieldValue1376 = x3d.fieldValue()
fieldValue1376.setName("translation")
fieldValue1376.setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962")

ProtoInstance1374.addFieldValue(fieldValue1376)

fieldValue1361.addChildren(ProtoInstance1374)
ProtoInstance1377 = x3d.ProtoInstance()
ProtoInstance1377.setName("Site")
ProtoInstance1377.setDEF("hanim_r_tragion")
fieldValue1378 = x3d.fieldValue()
fieldValue1378.setName("name")
fieldValue1378.setValue("r_tragion")

ProtoInstance1377.addFieldValue(fieldValue1378)
fieldValue1379 = x3d.fieldValue()
fieldValue1379.setName("translation")
fieldValue1379.setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642")

ProtoInstance1377.addFieldValue(fieldValue1379)

fieldValue1361.addChildren(ProtoInstance1377)
ProtoInstance1380 = x3d.ProtoInstance()
ProtoInstance1380.setName("Site")
ProtoInstance1380.setDEF("hanim_r_gonion")
fieldValue1381 = x3d.fieldValue()
fieldValue1381.setName("name")
fieldValue1381.setValue("r_gonion")

ProtoInstance1380.addFieldValue(fieldValue1381)
fieldValue1382 = x3d.fieldValue()
fieldValue1382.setName("translation")
fieldValue1382.setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176")

ProtoInstance1380.addFieldValue(fieldValue1382)

fieldValue1361.addChildren(ProtoInstance1380)
ProtoInstance1383 = x3d.ProtoInstance()
ProtoInstance1383.setName("Site")
ProtoInstance1383.setDEF("hanim_l_tragion")
fieldValue1384 = x3d.fieldValue()
fieldValue1384.setName("name")
fieldValue1384.setValue("l_tragion")

ProtoInstance1383.addFieldValue(fieldValue1384)
fieldValue1385 = x3d.fieldValue()
fieldValue1385.setName("translation")
fieldValue1385.setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874")

ProtoInstance1383.addFieldValue(fieldValue1385)

fieldValue1361.addChildren(ProtoInstance1383)
ProtoInstance1386 = x3d.ProtoInstance()
ProtoInstance1386.setName("Site")
ProtoInstance1386.setDEF("hanim_l_gonion")
fieldValue1387 = x3d.fieldValue()
fieldValue1387.setName("name")
fieldValue1387.setValue("l_gonion")

ProtoInstance1386.addFieldValue(fieldValue1387)
fieldValue1388 = x3d.fieldValue()
fieldValue1388.setName("translation")
fieldValue1388.setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066")

ProtoInstance1386.addFieldValue(fieldValue1388)

fieldValue1361.addChildren(ProtoInstance1386)
ProtoInstance1389 = x3d.ProtoInstance()
ProtoInstance1389.setName("Site")
ProtoInstance1389.setDEF("hanim_nuchale")
fieldValue1390 = x3d.fieldValue()
fieldValue1390.setName("name")
fieldValue1390.setValue("nuchale")

ProtoInstance1389.addFieldValue(fieldValue1390)
fieldValue1391 = x3d.fieldValue()
fieldValue1391.setName("translation")
fieldValue1391.setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")

ProtoInstance1389.addFieldValue(fieldValue1391)

fieldValue1361.addChildren(ProtoInstance1389)

ProtoInstance1359.addFieldValue(fieldValue1361)

fieldValue1358.addChildren(ProtoInstance1359)

ProtoInstance1354.addFieldValue(fieldValue1358)

fieldValue1353.addChildren(ProtoInstance1354)
ProtoInstance1392 = x3d.ProtoInstance()
ProtoInstance1392.setName("Joint")
ProtoInstance1392.setDEF("hanim_l_shoulder")
fieldValue1393 = x3d.fieldValue()
fieldValue1393.setName("stiffness")
fieldValue1393.setValue("1 1 1")

ProtoInstance1392.addFieldValue(fieldValue1393)
fieldValue1394 = x3d.fieldValue()
fieldValue1394.setName("name")
fieldValue1394.setValue("l_shoulder")

ProtoInstance1392.addFieldValue(fieldValue1394)
fieldValue1395 = x3d.fieldValue()
fieldValue1395.setName("center")
fieldValue1395.setValue("0.2029000073671341 1.437600016593933 -0.03869999945163727")

ProtoInstance1392.addFieldValue(fieldValue1395)
fieldValue1396 = x3d.fieldValue()
fieldValue1396.setName("children")
ProtoInstance1397 = x3d.ProtoInstance()
ProtoInstance1397.setName("Joint")
ProtoInstance1397.setDEF("hanim_l_elbow")
fieldValue1398 = x3d.fieldValue()
fieldValue1398.setName("stiffness")
fieldValue1398.setValue("1 1 1")

ProtoInstance1397.addFieldValue(fieldValue1398)
fieldValue1399 = x3d.fieldValue()
fieldValue1399.setName("name")
fieldValue1399.setValue("l_elbow")

ProtoInstance1397.addFieldValue(fieldValue1399)
fieldValue1400 = x3d.fieldValue()
fieldValue1400.setName("center")
fieldValue1400.setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512")

ProtoInstance1397.addFieldValue(fieldValue1400)
fieldValue1401 = x3d.fieldValue()
fieldValue1401.setName("children")
ProtoInstance1402 = x3d.ProtoInstance()
ProtoInstance1402.setName("Joint")
ProtoInstance1402.setDEF("hanim_l_radiocarpal")
fieldValue1403 = x3d.fieldValue()
fieldValue1403.setName("stiffness")
fieldValue1403.setValue("1 1 1")

ProtoInstance1402.addFieldValue(fieldValue1403)
fieldValue1404 = x3d.fieldValue()
fieldValue1404.setName("name")
fieldValue1404.setValue("l_radiocarpal")

ProtoInstance1402.addFieldValue(fieldValue1404)
fieldValue1405 = x3d.fieldValue()
fieldValue1405.setName("center")
fieldValue1405.setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538")

ProtoInstance1402.addFieldValue(fieldValue1405)
fieldValue1406 = x3d.fieldValue()
fieldValue1406.setName("children")
ProtoInstance1407 = x3d.ProtoInstance()
ProtoInstance1407.setName("Segment")
ProtoInstance1407.setDEF("hanim_l_hand")
fieldValue1408 = x3d.fieldValue()
fieldValue1408.setName("name")
fieldValue1408.setValue("l_hand")

ProtoInstance1407.addFieldValue(fieldValue1408)
fieldValue1409 = x3d.fieldValue()
fieldValue1409.setName("children")
ProtoInstance1410 = x3d.ProtoInstance()
ProtoInstance1410.setName("Site")
ProtoInstance1410.setDEF("hanim_l_hand_tip")
fieldValue1411 = x3d.fieldValue()
fieldValue1411.setName("name")
fieldValue1411.setValue("l_hand_tip")

ProtoInstance1410.addFieldValue(fieldValue1411)
fieldValue1412 = x3d.fieldValue()
fieldValue1412.setName("translation")
fieldValue1412.setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205")

ProtoInstance1410.addFieldValue(fieldValue1412)

fieldValue1409.addChildren(ProtoInstance1410)
ProtoInstance1413 = x3d.ProtoInstance()
ProtoInstance1413.setName("Site")
ProtoInstance1413.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue1414 = x3d.fieldValue()
fieldValue1414.setName("name")
fieldValue1414.setValue("l_metacarpal_phalanx_2")

ProtoInstance1413.addFieldValue(fieldValue1414)
fieldValue1415 = x3d.fieldValue()
fieldValue1415.setName("translation")
fieldValue1415.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance1413.addFieldValue(fieldValue1415)

fieldValue1409.addChildren(ProtoInstance1413)
ProtoInstance1416 = x3d.ProtoInstance()
ProtoInstance1416.setName("Site")
ProtoInstance1416.setDEF("hanim_l_dactylion")
fieldValue1417 = x3d.fieldValue()
fieldValue1417.setName("name")
fieldValue1417.setValue("l_dactylion")

ProtoInstance1416.addFieldValue(fieldValue1417)
fieldValue1418 = x3d.fieldValue()
fieldValue1418.setName("translation")
fieldValue1418.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance1416.addFieldValue(fieldValue1418)

fieldValue1409.addChildren(ProtoInstance1416)
ProtoInstance1419 = x3d.ProtoInstance()
ProtoInstance1419.setName("Site")
ProtoInstance1419.setDEF("hanim_l_ulnar_styloid")
fieldValue1420 = x3d.fieldValue()
fieldValue1420.setName("name")
fieldValue1420.setValue("l_ulnar_styloid")

ProtoInstance1419.addFieldValue(fieldValue1420)
fieldValue1421 = x3d.fieldValue()
fieldValue1421.setName("translation")
fieldValue1421.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance1419.addFieldValue(fieldValue1421)

fieldValue1409.addChildren(ProtoInstance1419)
ProtoInstance1422 = x3d.ProtoInstance()
ProtoInstance1422.setName("Site")
ProtoInstance1422.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue1423 = x3d.fieldValue()
fieldValue1423.setName("name")
fieldValue1423.setValue("l_metacarpal_phalanx_5")

ProtoInstance1422.addFieldValue(fieldValue1423)
fieldValue1424 = x3d.fieldValue()
fieldValue1424.setName("translation")
fieldValue1424.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance1422.addFieldValue(fieldValue1424)

fieldValue1409.addChildren(ProtoInstance1422)

ProtoInstance1407.addFieldValue(fieldValue1409)

fieldValue1406.addChildren(ProtoInstance1407)

ProtoInstance1402.addFieldValue(fieldValue1406)

fieldValue1401.addChildren(ProtoInstance1402)
ProtoInstance1425 = x3d.ProtoInstance()
ProtoInstance1425.setName("Segment")
ProtoInstance1425.setDEF("hanim_l_forearm")
fieldValue1426 = x3d.fieldValue()
fieldValue1426.setName("name")
fieldValue1426.setValue("l_forearm")

ProtoInstance1425.addFieldValue(fieldValue1426)
fieldValue1427 = x3d.fieldValue()
fieldValue1427.setName("children")
ProtoInstance1428 = x3d.ProtoInstance()
ProtoInstance1428.setName("Site")
ProtoInstance1428.setDEF("hanim_l_radial_styloid")
fieldValue1429 = x3d.fieldValue()
fieldValue1429.setName("name")
fieldValue1429.setValue("l_radial_styloid")

ProtoInstance1428.addFieldValue(fieldValue1429)
fieldValue1430 = x3d.fieldValue()
fieldValue1430.setName("translation")
fieldValue1430.setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691")

ProtoInstance1428.addFieldValue(fieldValue1430)

fieldValue1427.addChildren(ProtoInstance1428)
ProtoInstance1431 = x3d.ProtoInstance()
ProtoInstance1431.setName("Site")
ProtoInstance1431.setDEF("hanim_l_olecranon")
fieldValue1432 = x3d.fieldValue()
fieldValue1432.setName("name")
fieldValue1432.setValue("l_olecranon")

ProtoInstance1431.addFieldValue(fieldValue1432)
fieldValue1433 = x3d.fieldValue()
fieldValue1433.setName("translation")
fieldValue1433.setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")

ProtoInstance1431.addFieldValue(fieldValue1433)

fieldValue1427.addChildren(ProtoInstance1431)
ProtoInstance1434 = x3d.ProtoInstance()
ProtoInstance1434.setName("Site")
ProtoInstance1434.setDEF("hanim_l_humeral_medial_epicondyles")
fieldValue1435 = x3d.fieldValue()
fieldValue1435.setName("name")
fieldValue1435.setValue("l_humeral_medial_epicondyles")

ProtoInstance1434.addFieldValue(fieldValue1435)
fieldValue1436 = x3d.fieldValue()
fieldValue1436.setName("translation")
fieldValue1436.setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661")

ProtoInstance1434.addFieldValue(fieldValue1436)

fieldValue1427.addChildren(ProtoInstance1434)
ProtoInstance1437 = x3d.ProtoInstance()
ProtoInstance1437.setName("Site")
ProtoInstance1437.setDEF("hanim_l_radiale")
fieldValue1438 = x3d.fieldValue()
fieldValue1438.setName("name")
fieldValue1438.setValue("l_radiale")

ProtoInstance1437.addFieldValue(fieldValue1438)
fieldValue1439 = x3d.fieldValue()
fieldValue1439.setName("translation")
fieldValue1439.setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268")

ProtoInstance1437.addFieldValue(fieldValue1439)

fieldValue1427.addChildren(ProtoInstance1437)

ProtoInstance1425.addFieldValue(fieldValue1427)

fieldValue1401.addChildren(ProtoInstance1425)

ProtoInstance1397.addFieldValue(fieldValue1401)

fieldValue1396.addChildren(ProtoInstance1397)
ProtoInstance1440 = x3d.ProtoInstance()
ProtoInstance1440.setName("Segment")
ProtoInstance1440.setDEF("hanim_l_upperarm")
fieldValue1441 = x3d.fieldValue()
fieldValue1441.setName("name")
fieldValue1441.setValue("l_upperarm")

ProtoInstance1440.addFieldValue(fieldValue1441)
fieldValue1442 = x3d.fieldValue()
fieldValue1442.setName("children")
ProtoInstance1443 = x3d.ProtoInstance()
ProtoInstance1443.setName("Site")
ProtoInstance1443.setDEF("hanim_l_humeral_lateral_epicondyles")
fieldValue1444 = x3d.fieldValue()
fieldValue1444.setName("name")
fieldValue1444.setValue("l_humeral_lateral_epicondyles")

ProtoInstance1443.addFieldValue(fieldValue1444)
fieldValue1445 = x3d.fieldValue()
fieldValue1445.setName("translation")
fieldValue1445.setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355")

ProtoInstance1443.addFieldValue(fieldValue1445)

fieldValue1442.addChildren(ProtoInstance1443)

ProtoInstance1440.addFieldValue(fieldValue1442)

fieldValue1396.addChildren(ProtoInstance1440)

ProtoInstance1392.addFieldValue(fieldValue1396)

fieldValue1353.addChildren(ProtoInstance1392)
ProtoInstance1446 = x3d.ProtoInstance()
ProtoInstance1446.setName("Joint")
ProtoInstance1446.setDEF("hanim_r_shoulder")
fieldValue1447 = x3d.fieldValue()
fieldValue1447.setName("stiffness")
fieldValue1447.setValue("1 1 1")

ProtoInstance1446.addFieldValue(fieldValue1447)
fieldValue1448 = x3d.fieldValue()
fieldValue1448.setName("name")
fieldValue1448.setValue("r_shoulder")

ProtoInstance1446.addFieldValue(fieldValue1448)
fieldValue1449 = x3d.fieldValue()
fieldValue1449.setName("center")
fieldValue1449.setValue("-0.1906999945640564 1.4407000541687012 -0.032499998807907104")

ProtoInstance1446.addFieldValue(fieldValue1449)
fieldValue1450 = x3d.fieldValue()
fieldValue1450.setName("children")
ProtoInstance1451 = x3d.ProtoInstance()
ProtoInstance1451.setName("Joint")
ProtoInstance1451.setDEF("hanim_r_elbow")
fieldValue1452 = x3d.fieldValue()
fieldValue1452.setName("stiffness")
fieldValue1452.setValue("1 1 1")

ProtoInstance1451.addFieldValue(fieldValue1452)
fieldValue1453 = x3d.fieldValue()
fieldValue1453.setName("name")
fieldValue1453.setValue("r_elbow")

ProtoInstance1451.addFieldValue(fieldValue1453)
fieldValue1454 = x3d.fieldValue()
fieldValue1454.setName("center")
fieldValue1454.setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104")

ProtoInstance1451.addFieldValue(fieldValue1454)
fieldValue1455 = x3d.fieldValue()
fieldValue1455.setName("children")
ProtoInstance1456 = x3d.ProtoInstance()
ProtoInstance1456.setName("Joint")
ProtoInstance1456.setDEF("hanim_r_radiocarpal")
fieldValue1457 = x3d.fieldValue()
fieldValue1457.setName("stiffness")
fieldValue1457.setValue("1 1 1")

ProtoInstance1456.addFieldValue(fieldValue1457)
fieldValue1458 = x3d.fieldValue()
fieldValue1458.setName("name")
fieldValue1458.setValue("r_radiocarpal")

ProtoInstance1456.addFieldValue(fieldValue1458)
fieldValue1459 = x3d.fieldValue()
fieldValue1459.setName("center")
fieldValue1459.setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522")

ProtoInstance1456.addFieldValue(fieldValue1459)
fieldValue1460 = x3d.fieldValue()
fieldValue1460.setName("children")
ProtoInstance1461 = x3d.ProtoInstance()
ProtoInstance1461.setName("Segment")
ProtoInstance1461.setDEF("hanim_r_hand")
fieldValue1462 = x3d.fieldValue()
fieldValue1462.setName("name")
fieldValue1462.setValue("r_hand")

ProtoInstance1461.addFieldValue(fieldValue1462)
fieldValue1463 = x3d.fieldValue()
fieldValue1463.setName("children")
ProtoInstance1464 = x3d.ProtoInstance()
ProtoInstance1464.setName("Site")
ProtoInstance1464.setDEF("hanim_r_hand_tip")
fieldValue1465 = x3d.fieldValue()
fieldValue1465.setName("name")
fieldValue1465.setValue("r_hand_tip")

ProtoInstance1464.addFieldValue(fieldValue1465)
fieldValue1466 = x3d.fieldValue()
fieldValue1466.setName("translation")
fieldValue1466.setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")

ProtoInstance1464.addFieldValue(fieldValue1466)

fieldValue1463.addChildren(ProtoInstance1464)
ProtoInstance1467 = x3d.ProtoInstance()
ProtoInstance1467.setName("Site")
ProtoInstance1467.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue1468 = x3d.fieldValue()
fieldValue1468.setName("name")
fieldValue1468.setValue("r_metacarpal_phalanx_2")

ProtoInstance1467.addFieldValue(fieldValue1468)
fieldValue1469 = x3d.fieldValue()
fieldValue1469.setName("translation")
fieldValue1469.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance1467.addFieldValue(fieldValue1469)

fieldValue1463.addChildren(ProtoInstance1467)
ProtoInstance1470 = x3d.ProtoInstance()
ProtoInstance1470.setName("Site")
ProtoInstance1470.setDEF("hanim_r_dactylion")
fieldValue1471 = x3d.fieldValue()
fieldValue1471.setName("name")
fieldValue1471.setValue("r_dactylion")

ProtoInstance1470.addFieldValue(fieldValue1471)
fieldValue1472 = x3d.fieldValue()
fieldValue1472.setName("translation")
fieldValue1472.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance1470.addFieldValue(fieldValue1472)

fieldValue1463.addChildren(ProtoInstance1470)
ProtoInstance1473 = x3d.ProtoInstance()
ProtoInstance1473.setName("Site")
ProtoInstance1473.setDEF("hanim_r_ulnar_styloid")
fieldValue1474 = x3d.fieldValue()
fieldValue1474.setName("name")
fieldValue1474.setValue("r_ulnar_styloid")

ProtoInstance1473.addFieldValue(fieldValue1474)
fieldValue1475 = x3d.fieldValue()
fieldValue1475.setName("translation")
fieldValue1475.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance1473.addFieldValue(fieldValue1475)

fieldValue1463.addChildren(ProtoInstance1473)
ProtoInstance1476 = x3d.ProtoInstance()
ProtoInstance1476.setName("Site")
ProtoInstance1476.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue1477 = x3d.fieldValue()
fieldValue1477.setName("name")
fieldValue1477.setValue("r_metacarpal_phalanx_5")

ProtoInstance1476.addFieldValue(fieldValue1477)
fieldValue1478 = x3d.fieldValue()
fieldValue1478.setName("translation")
fieldValue1478.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance1476.addFieldValue(fieldValue1478)

fieldValue1463.addChildren(ProtoInstance1476)

ProtoInstance1461.addFieldValue(fieldValue1463)

fieldValue1460.addChildren(ProtoInstance1461)

ProtoInstance1456.addFieldValue(fieldValue1460)

fieldValue1455.addChildren(ProtoInstance1456)
ProtoInstance1479 = x3d.ProtoInstance()
ProtoInstance1479.setName("Segment")
ProtoInstance1479.setDEF("hanim_r_forearm")
fieldValue1480 = x3d.fieldValue()
fieldValue1480.setName("name")
fieldValue1480.setValue("r_forearm")

ProtoInstance1479.addFieldValue(fieldValue1480)
fieldValue1481 = x3d.fieldValue()
fieldValue1481.setName("children")
ProtoInstance1482 = x3d.ProtoInstance()
ProtoInstance1482.setName("Site")
ProtoInstance1482.setDEF("hanim_r_radial_styloid")
fieldValue1483 = x3d.fieldValue()
fieldValue1483.setName("name")
fieldValue1483.setValue("r_radial_styloid")

ProtoInstance1482.addFieldValue(fieldValue1483)
fieldValue1484 = x3d.fieldValue()
fieldValue1484.setName("translation")
fieldValue1484.setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236")

ProtoInstance1482.addFieldValue(fieldValue1484)

fieldValue1481.addChildren(ProtoInstance1482)
ProtoInstance1485 = x3d.ProtoInstance()
ProtoInstance1485.setName("Site")
ProtoInstance1485.setDEF("hanim_r_olecranon")
fieldValue1486 = x3d.fieldValue()
fieldValue1486.setName("name")
fieldValue1486.setValue("r_olecranon")

ProtoInstance1485.addFieldValue(fieldValue1486)
fieldValue1487 = x3d.fieldValue()
fieldValue1487.setName("translation")
fieldValue1487.setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")

ProtoInstance1485.addFieldValue(fieldValue1487)

fieldValue1481.addChildren(ProtoInstance1485)
ProtoInstance1488 = x3d.ProtoInstance()
ProtoInstance1488.setName("Site")
ProtoInstance1488.setDEF("hanim_r_humeral_medial_epicondyles")
fieldValue1489 = x3d.fieldValue()
fieldValue1489.setName("name")
fieldValue1489.setValue("r_humeral_medial_epicondyles")

ProtoInstance1488.addFieldValue(fieldValue1489)
fieldValue1490 = x3d.fieldValue()
fieldValue1490.setName("translation")
fieldValue1490.setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")

ProtoInstance1488.addFieldValue(fieldValue1490)

fieldValue1481.addChildren(ProtoInstance1488)
ProtoInstance1491 = x3d.ProtoInstance()
ProtoInstance1491.setName("Site")
ProtoInstance1491.setDEF("hanim_r_radiale")
fieldValue1492 = x3d.fieldValue()
fieldValue1492.setName("name")
fieldValue1492.setValue("r_radiale")

ProtoInstance1491.addFieldValue(fieldValue1492)
fieldValue1493 = x3d.fieldValue()
fieldValue1493.setName("translation")
fieldValue1493.setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")

ProtoInstance1491.addFieldValue(fieldValue1493)

fieldValue1481.addChildren(ProtoInstance1491)

ProtoInstance1479.addFieldValue(fieldValue1481)

fieldValue1455.addChildren(ProtoInstance1479)

ProtoInstance1451.addFieldValue(fieldValue1455)

fieldValue1450.addChildren(ProtoInstance1451)
ProtoInstance1494 = x3d.ProtoInstance()
ProtoInstance1494.setName("Segment")
ProtoInstance1494.setDEF("hanim_r_upperarm")
fieldValue1495 = x3d.fieldValue()
fieldValue1495.setName("name")
fieldValue1495.setValue("r_upperarm")

ProtoInstance1494.addFieldValue(fieldValue1495)
fieldValue1496 = x3d.fieldValue()
fieldValue1496.setName("children")
ProtoInstance1497 = x3d.ProtoInstance()
ProtoInstance1497.setName("Site")
ProtoInstance1497.setDEF("hanim_r_humeral_lateral_epicondyles")
fieldValue1498 = x3d.fieldValue()
fieldValue1498.setName("name")
fieldValue1498.setValue("r_humeral_lateral_epicondyles")

ProtoInstance1497.addFieldValue(fieldValue1498)
fieldValue1499 = x3d.fieldValue()
fieldValue1499.setName("translation")
fieldValue1499.setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")

ProtoInstance1497.addFieldValue(fieldValue1499)

fieldValue1496.addChildren(ProtoInstance1497)

ProtoInstance1494.addFieldValue(fieldValue1496)

fieldValue1450.addChildren(ProtoInstance1494)

ProtoInstance1446.addFieldValue(fieldValue1450)

fieldValue1353.addChildren(ProtoInstance1446)
ProtoInstance1500 = x3d.ProtoInstance()
ProtoInstance1500.setName("Segment")
ProtoInstance1500.setDEF("hanim_l5")
fieldValue1501 = x3d.fieldValue()
fieldValue1501.setName("name")
fieldValue1501.setValue("l5")

ProtoInstance1500.addFieldValue(fieldValue1501)
fieldValue1502 = x3d.fieldValue()
fieldValue1502.setName("children")
ProtoInstance1503 = x3d.ProtoInstance()
ProtoInstance1503.setName("Site")
ProtoInstance1503.setDEF("hanim_r_clavicale")
fieldValue1504 = x3d.fieldValue()
fieldValue1504.setName("name")
fieldValue1504.setValue("r_clavicale")

ProtoInstance1503.addFieldValue(fieldValue1504)
fieldValue1505 = x3d.fieldValue()
fieldValue1505.setName("translation")
fieldValue1505.setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033")

ProtoInstance1503.addFieldValue(fieldValue1505)

fieldValue1502.addChildren(ProtoInstance1503)
ProtoInstance1506 = x3d.ProtoInstance()
ProtoInstance1506.setName("Site")
ProtoInstance1506.setDEF("hanim_suprasternale")
fieldValue1507 = x3d.fieldValue()
fieldValue1507.setName("name")
fieldValue1507.setValue("suprasternale")

ProtoInstance1506.addFieldValue(fieldValue1507)
fieldValue1508 = x3d.fieldValue()
fieldValue1508.setName("translation")
fieldValue1508.setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869")

ProtoInstance1506.addFieldValue(fieldValue1508)

fieldValue1502.addChildren(ProtoInstance1506)
ProtoInstance1509 = x3d.ProtoInstance()
ProtoInstance1509.setName("Site")
ProtoInstance1509.setDEF("hanim_l_clavicale")
fieldValue1510 = x3d.fieldValue()
fieldValue1510.setName("name")
fieldValue1510.setValue("l_clavicale")

ProtoInstance1509.addFieldValue(fieldValue1510)
fieldValue1511 = x3d.fieldValue()
fieldValue1511.setName("translation")
fieldValue1511.setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754")

ProtoInstance1509.addFieldValue(fieldValue1511)

fieldValue1502.addChildren(ProtoInstance1509)
ProtoInstance1512 = x3d.ProtoInstance()
ProtoInstance1512.setName("Site")
ProtoInstance1512.setDEF("hanim_r_thelion")
fieldValue1513 = x3d.fieldValue()
fieldValue1513.setName("name")
fieldValue1513.setValue("r_thelion")

ProtoInstance1512.addFieldValue(fieldValue1513)
fieldValue1514 = x3d.fieldValue()
fieldValue1514.setName("translation")
fieldValue1514.setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911")

ProtoInstance1512.addFieldValue(fieldValue1514)

fieldValue1502.addChildren(ProtoInstance1512)
ProtoInstance1515 = x3d.ProtoInstance()
ProtoInstance1515.setName("Site")
ProtoInstance1515.setDEF("hanim_l_thelion")
fieldValue1516 = x3d.fieldValue()
fieldValue1516.setName("name")
fieldValue1516.setValue("l_thelion")

ProtoInstance1515.addFieldValue(fieldValue1516)
fieldValue1517 = x3d.fieldValue()
fieldValue1517.setName("translation")
fieldValue1517.setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689")

ProtoInstance1515.addFieldValue(fieldValue1517)

fieldValue1502.addChildren(ProtoInstance1515)
ProtoInstance1518 = x3d.ProtoInstance()
ProtoInstance1518.setName("Site")
ProtoInstance1518.setDEF("hanim_substernale")
fieldValue1519 = x3d.fieldValue()
fieldValue1519.setName("name")
fieldValue1519.setValue("substernale")

ProtoInstance1518.addFieldValue(fieldValue1519)
fieldValue1520 = x3d.fieldValue()
fieldValue1520.setName("translation")
fieldValue1520.setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683")

ProtoInstance1518.addFieldValue(fieldValue1520)

fieldValue1502.addChildren(ProtoInstance1518)
ProtoInstance1521 = x3d.ProtoInstance()
ProtoInstance1521.setName("Site")
ProtoInstance1521.setDEF("hanim_r_rib10")
fieldValue1522 = x3d.fieldValue()
fieldValue1522.setName("name")
fieldValue1522.setValue("r_rib10")

ProtoInstance1521.addFieldValue(fieldValue1522)
fieldValue1523 = x3d.fieldValue()
fieldValue1523.setName("translation")
fieldValue1523.setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432")

ProtoInstance1521.addFieldValue(fieldValue1523)

fieldValue1502.addChildren(ProtoInstance1521)
ProtoInstance1524 = x3d.ProtoInstance()
ProtoInstance1524.setName("Site")
ProtoInstance1524.setDEF("hanim_l_rib10")
fieldValue1525 = x3d.fieldValue()
fieldValue1525.setName("name")
fieldValue1525.setValue("l_rib10")

ProtoInstance1524.addFieldValue(fieldValue1525)
fieldValue1526 = x3d.fieldValue()
fieldValue1526.setName("translation")
fieldValue1526.setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202")

ProtoInstance1524.addFieldValue(fieldValue1526)

fieldValue1502.addChildren(ProtoInstance1524)
ProtoInstance1527 = x3d.ProtoInstance()
ProtoInstance1527.setName("Site")
ProtoInstance1527.setDEF("hanim_cervicale")
fieldValue1528 = x3d.fieldValue()
fieldValue1528.setName("name")
fieldValue1528.setValue("cervicale")

ProtoInstance1527.addFieldValue(fieldValue1528)
fieldValue1529 = x3d.fieldValue()
fieldValue1529.setName("translation")
fieldValue1529.setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754")

ProtoInstance1527.addFieldValue(fieldValue1529)

fieldValue1502.addChildren(ProtoInstance1527)
ProtoInstance1530 = x3d.ProtoInstance()
ProtoInstance1530.setName("Site")
ProtoInstance1530.setDEF("hanim_spine_2_lower_back")
fieldValue1531 = x3d.fieldValue()
fieldValue1531.setName("name")
fieldValue1531.setValue("spine_2_lower_back")

ProtoInstance1530.addFieldValue(fieldValue1531)
fieldValue1532 = x3d.fieldValue()
fieldValue1532.setName("translation")
fieldValue1532.setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661")

ProtoInstance1530.addFieldValue(fieldValue1532)

fieldValue1502.addChildren(ProtoInstance1530)
ProtoInstance1533 = x3d.ProtoInstance()
ProtoInstance1533.setName("Site")
ProtoInstance1533.setDEF("hanim_waist_preferred_posterior")
fieldValue1534 = x3d.fieldValue()
fieldValue1534.setName("name")
fieldValue1534.setValue("waist_preferred_posterior")

ProtoInstance1533.addFieldValue(fieldValue1534)
fieldValue1535 = x3d.fieldValue()
fieldValue1535.setName("translation")
fieldValue1535.setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754")

ProtoInstance1533.addFieldValue(fieldValue1535)

fieldValue1502.addChildren(ProtoInstance1533)
ProtoInstance1536 = x3d.ProtoInstance()
ProtoInstance1536.setName("Site")
ProtoInstance1536.setDEF("hanim_r_acromion")
fieldValue1537 = x3d.fieldValue()
fieldValue1537.setName("name")
fieldValue1537.setValue("r_acromion")

ProtoInstance1536.addFieldValue(fieldValue1537)
fieldValue1538 = x3d.fieldValue()
fieldValue1538.setName("translation")
fieldValue1538.setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541")

ProtoInstance1536.addFieldValue(fieldValue1538)

fieldValue1502.addChildren(ProtoInstance1536)
ProtoInstance1539 = x3d.ProtoInstance()
ProtoInstance1539.setName("Site")
ProtoInstance1539.setDEF("hanim_r_axilla_proximal")
fieldValue1540 = x3d.fieldValue()
fieldValue1540.setName("name")
fieldValue1540.setValue("r_axilla_proximal")

ProtoInstance1539.addFieldValue(fieldValue1540)
fieldValue1541 = x3d.fieldValue()
fieldValue1541.setName("translation")
fieldValue1541.setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438")

ProtoInstance1539.addFieldValue(fieldValue1541)

fieldValue1502.addChildren(ProtoInstance1539)
ProtoInstance1542 = x3d.ProtoInstance()
ProtoInstance1542.setName("Site")
ProtoInstance1542.setDEF("hanim_r_axilla_distal")
fieldValue1543 = x3d.fieldValue()
fieldValue1543.setName("name")
fieldValue1543.setValue("r_axilla_distal")

ProtoInstance1542.addFieldValue(fieldValue1543)
fieldValue1544 = x3d.fieldValue()
fieldValue1544.setName("translation")
fieldValue1544.setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678")

ProtoInstance1542.addFieldValue(fieldValue1544)

fieldValue1502.addChildren(ProtoInstance1542)
ProtoInstance1545 = x3d.ProtoInstance()
ProtoInstance1545.setName("Site")
ProtoInstance1545.setDEF("hanim_l_acromion")
fieldValue1546 = x3d.fieldValue()
fieldValue1546.setName("name")
fieldValue1546.setValue("l_acromion")

ProtoInstance1545.addFieldValue(fieldValue1546)
fieldValue1547 = x3d.fieldValue()
fieldValue1547.setName("translation")
fieldValue1547.setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014")

ProtoInstance1545.addFieldValue(fieldValue1547)

fieldValue1502.addChildren(ProtoInstance1545)
ProtoInstance1548 = x3d.ProtoInstance()
ProtoInstance1548.setName("Site")
ProtoInstance1548.setDEF("hanim_l_axilla_proximal")
fieldValue1549 = x3d.fieldValue()
fieldValue1549.setName("name")
fieldValue1549.setValue("l_axilla_proximal")

ProtoInstance1548.addFieldValue(fieldValue1549)
fieldValue1550 = x3d.fieldValue()
fieldValue1550.setName("translation")
fieldValue1550.setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937")

ProtoInstance1548.addFieldValue(fieldValue1550)

fieldValue1502.addChildren(ProtoInstance1548)
ProtoInstance1551 = x3d.ProtoInstance()
ProtoInstance1551.setName("Site")
ProtoInstance1551.setDEF("hanim_l_axilla_distal")
fieldValue1552 = x3d.fieldValue()
fieldValue1552.setName("name")
fieldValue1552.setValue("l_axilla_distal")

ProtoInstance1551.addFieldValue(fieldValue1552)
fieldValue1553 = x3d.fieldValue()
fieldValue1553.setName("translation")
fieldValue1553.setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388")

ProtoInstance1551.addFieldValue(fieldValue1553)

fieldValue1502.addChildren(ProtoInstance1551)
ProtoInstance1554 = x3d.ProtoInstance()
ProtoInstance1554.setName("Site")
ProtoInstance1554.setDEF("hanim_r_neck_base")
fieldValue1555 = x3d.fieldValue()
fieldValue1555.setName("name")
fieldValue1555.setValue("r_neck_base")

ProtoInstance1554.addFieldValue(fieldValue1555)
fieldValue1556 = x3d.fieldValue()
fieldValue1556.setName("translation")
fieldValue1556.setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071")

ProtoInstance1554.addFieldValue(fieldValue1556)

fieldValue1502.addChildren(ProtoInstance1554)
ProtoInstance1557 = x3d.ProtoInstance()
ProtoInstance1557.setName("Site")
ProtoInstance1557.setDEF("hanim_l_neck_base")
fieldValue1558 = x3d.fieldValue()
fieldValue1558.setName("name")
fieldValue1558.setValue("l_neck_base")

ProtoInstance1557.addFieldValue(fieldValue1558)
fieldValue1559 = x3d.fieldValue()
fieldValue1559.setName("translation")
fieldValue1559.setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478")

ProtoInstance1557.addFieldValue(fieldValue1559)

fieldValue1502.addChildren(ProtoInstance1557)
ProtoInstance1560 = x3d.ProtoInstance()
ProtoInstance1560.setName("Site")
ProtoInstance1560.setDEF("hanim_navel")
fieldValue1561 = x3d.fieldValue()
fieldValue1561.setName("name")
fieldValue1561.setValue("navel")

ProtoInstance1560.addFieldValue(fieldValue1561)
fieldValue1562 = x3d.fieldValue()
fieldValue1562.setName("translation")
fieldValue1562.setValue("0.006899999920278788 1.09660005569458 0.10170000046491623")

ProtoInstance1560.addFieldValue(fieldValue1562)

fieldValue1502.addChildren(ProtoInstance1560)

ProtoInstance1500.addFieldValue(fieldValue1502)

fieldValue1353.addChildren(ProtoInstance1500)

ProtoInstance1349.addFieldValue(fieldValue1353)

fieldValue487.addChildren(ProtoInstance1349)
ProtoInstance1563 = x3d.ProtoInstance()
ProtoInstance1563.setName("Joint")
ProtoInstance1563.setDEF("hanim_skullbase")
fieldValue1564 = x3d.fieldValue()
fieldValue1564.setName("stiffness")
fieldValue1564.setValue("1 1 1")

ProtoInstance1563.addFieldValue(fieldValue1564)
fieldValue1565 = x3d.fieldValue()
fieldValue1565.setName("name")
fieldValue1565.setValue("skullbase")

ProtoInstance1563.addFieldValue(fieldValue1565)
fieldValue1566 = x3d.fieldValue()
fieldValue1566.setName("center")
fieldValue1566.setValue("0.004399999976158142 1.62090003490448 0.023600000888109207")

ProtoInstance1563.addFieldValue(fieldValue1566)
fieldValue1567 = x3d.fieldValue()
fieldValue1567.setName("children")
ProtoInstance1568 = x3d.ProtoInstance()
ProtoInstance1568.setName("Segment")
ProtoInstance1568.setDEF("hanim_skull")
fieldValue1569 = x3d.fieldValue()
fieldValue1569.setName("name")
fieldValue1569.setValue("skull")

ProtoInstance1568.addFieldValue(fieldValue1569)
fieldValue1570 = x3d.fieldValue()
fieldValue1570.setName("children")
ProtoInstance1571 = x3d.ProtoInstance()
ProtoInstance1571.setName("Site")
ProtoInstance1571.setDEF("hanim_skull_tip")
fieldValue1572 = x3d.fieldValue()
fieldValue1572.setName("name")
fieldValue1572.setValue("skull_tip")

ProtoInstance1571.addFieldValue(fieldValue1572)
fieldValue1573 = x3d.fieldValue()
fieldValue1573.setName("translation")
fieldValue1573.setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678")

ProtoInstance1571.addFieldValue(fieldValue1573)

fieldValue1570.addChildren(ProtoInstance1571)
ProtoInstance1574 = x3d.ProtoInstance()
ProtoInstance1574.setName("Site")
ProtoInstance1574.setDEF("hanim_sellion")
fieldValue1575 = x3d.fieldValue()
fieldValue1575.setName("name")
fieldValue1575.setValue("sellion")

ProtoInstance1574.addFieldValue(fieldValue1575)
fieldValue1576 = x3d.fieldValue()
fieldValue1576.setName("translation")
fieldValue1576.setValue("0.005799999926239252 1.631600022315979 0.0851999968290329")

ProtoInstance1574.addFieldValue(fieldValue1576)

fieldValue1570.addChildren(ProtoInstance1574)
ProtoInstance1577 = x3d.ProtoInstance()
ProtoInstance1577.setName("Site")
ProtoInstance1577.setDEF("hanim_r_infraorbitale")
fieldValue1578 = x3d.fieldValue()
fieldValue1578.setName("name")
fieldValue1578.setValue("r_infraorbitale")

ProtoInstance1577.addFieldValue(fieldValue1578)
fieldValue1579 = x3d.fieldValue()
fieldValue1579.setName("translation")
fieldValue1579.setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547")

ProtoInstance1577.addFieldValue(fieldValue1579)

fieldValue1570.addChildren(ProtoInstance1577)
ProtoInstance1580 = x3d.ProtoInstance()
ProtoInstance1580.setName("Site")
ProtoInstance1580.setDEF("hanim_l_infraorbitale")
fieldValue1581 = x3d.fieldValue()
fieldValue1581.setName("name")
fieldValue1581.setValue("l_infraorbitale")

ProtoInstance1580.addFieldValue(fieldValue1581)
fieldValue1582 = x3d.fieldValue()
fieldValue1582.setName("translation")
fieldValue1582.setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547")

ProtoInstance1580.addFieldValue(fieldValue1582)

fieldValue1570.addChildren(ProtoInstance1580)
ProtoInstance1583 = x3d.ProtoInstance()
ProtoInstance1583.setName("Site")
ProtoInstance1583.setDEF("hanim_supramenton")
fieldValue1584 = x3d.fieldValue()
fieldValue1584.setName("name")
fieldValue1584.setValue("supramenton")

ProtoInstance1583.addFieldValue(fieldValue1584)
fieldValue1585 = x3d.fieldValue()
fieldValue1585.setName("translation")
fieldValue1585.setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962")

ProtoInstance1583.addFieldValue(fieldValue1585)

fieldValue1570.addChildren(ProtoInstance1583)
ProtoInstance1586 = x3d.ProtoInstance()
ProtoInstance1586.setName("Site")
ProtoInstance1586.setDEF("hanim_r_tragion")
fieldValue1587 = x3d.fieldValue()
fieldValue1587.setName("name")
fieldValue1587.setValue("r_tragion")

ProtoInstance1586.addFieldValue(fieldValue1587)
fieldValue1588 = x3d.fieldValue()
fieldValue1588.setName("translation")
fieldValue1588.setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642")

ProtoInstance1586.addFieldValue(fieldValue1588)

fieldValue1570.addChildren(ProtoInstance1586)
ProtoInstance1589 = x3d.ProtoInstance()
ProtoInstance1589.setName("Site")
ProtoInstance1589.setDEF("hanim_r_gonion")
fieldValue1590 = x3d.fieldValue()
fieldValue1590.setName("name")
fieldValue1590.setValue("r_gonion")

ProtoInstance1589.addFieldValue(fieldValue1590)
fieldValue1591 = x3d.fieldValue()
fieldValue1591.setName("translation")
fieldValue1591.setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176")

ProtoInstance1589.addFieldValue(fieldValue1591)

fieldValue1570.addChildren(ProtoInstance1589)
ProtoInstance1592 = x3d.ProtoInstance()
ProtoInstance1592.setName("Site")
ProtoInstance1592.setDEF("hanim_l_tragion")
fieldValue1593 = x3d.fieldValue()
fieldValue1593.setName("name")
fieldValue1593.setValue("l_tragion")

ProtoInstance1592.addFieldValue(fieldValue1593)
fieldValue1594 = x3d.fieldValue()
fieldValue1594.setName("translation")
fieldValue1594.setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874")

ProtoInstance1592.addFieldValue(fieldValue1594)

fieldValue1570.addChildren(ProtoInstance1592)
ProtoInstance1595 = x3d.ProtoInstance()
ProtoInstance1595.setName("Site")
ProtoInstance1595.setDEF("hanim_l_gonion")
fieldValue1596 = x3d.fieldValue()
fieldValue1596.setName("name")
fieldValue1596.setValue("l_gonion")

ProtoInstance1595.addFieldValue(fieldValue1596)
fieldValue1597 = x3d.fieldValue()
fieldValue1597.setName("translation")
fieldValue1597.setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066")

ProtoInstance1595.addFieldValue(fieldValue1597)

fieldValue1570.addChildren(ProtoInstance1595)
ProtoInstance1598 = x3d.ProtoInstance()
ProtoInstance1598.setName("Site")
ProtoInstance1598.setDEF("hanim_nuchale")
fieldValue1599 = x3d.fieldValue()
fieldValue1599.setName("name")
fieldValue1599.setValue("nuchale")

ProtoInstance1598.addFieldValue(fieldValue1599)
fieldValue1600 = x3d.fieldValue()
fieldValue1600.setName("translation")
fieldValue1600.setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")

ProtoInstance1598.addFieldValue(fieldValue1600)

fieldValue1570.addChildren(ProtoInstance1598)

ProtoInstance1568.addFieldValue(fieldValue1570)

fieldValue1567.addChildren(ProtoInstance1568)

ProtoInstance1563.addFieldValue(fieldValue1567)

fieldValue487.addChildren(ProtoInstance1563)
ProtoInstance1601 = x3d.ProtoInstance()
ProtoInstance1601.setName("Joint")
ProtoInstance1601.setDEF("hanim_l_shoulder")
fieldValue1602 = x3d.fieldValue()
fieldValue1602.setName("stiffness")
fieldValue1602.setValue("1 1 1")

ProtoInstance1601.addFieldValue(fieldValue1602)
fieldValue1603 = x3d.fieldValue()
fieldValue1603.setName("name")
fieldValue1603.setValue("l_shoulder")

ProtoInstance1601.addFieldValue(fieldValue1603)
fieldValue1604 = x3d.fieldValue()
fieldValue1604.setName("center")
fieldValue1604.setValue("0.2029000073671341 1.437600016593933 -0.03869999945163727")

ProtoInstance1601.addFieldValue(fieldValue1604)
fieldValue1605 = x3d.fieldValue()
fieldValue1605.setName("children")
ProtoInstance1606 = x3d.ProtoInstance()
ProtoInstance1606.setName("Joint")
ProtoInstance1606.setDEF("hanim_l_elbow")
fieldValue1607 = x3d.fieldValue()
fieldValue1607.setName("stiffness")
fieldValue1607.setValue("1 1 1")

ProtoInstance1606.addFieldValue(fieldValue1607)
fieldValue1608 = x3d.fieldValue()
fieldValue1608.setName("name")
fieldValue1608.setValue("l_elbow")

ProtoInstance1606.addFieldValue(fieldValue1608)
fieldValue1609 = x3d.fieldValue()
fieldValue1609.setName("center")
fieldValue1609.setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512")

ProtoInstance1606.addFieldValue(fieldValue1609)
fieldValue1610 = x3d.fieldValue()
fieldValue1610.setName("children")
ProtoInstance1611 = x3d.ProtoInstance()
ProtoInstance1611.setName("Joint")
ProtoInstance1611.setDEF("hanim_l_radiocarpal")
fieldValue1612 = x3d.fieldValue()
fieldValue1612.setName("stiffness")
fieldValue1612.setValue("1 1 1")

ProtoInstance1611.addFieldValue(fieldValue1612)
fieldValue1613 = x3d.fieldValue()
fieldValue1613.setName("name")
fieldValue1613.setValue("l_radiocarpal")

ProtoInstance1611.addFieldValue(fieldValue1613)
fieldValue1614 = x3d.fieldValue()
fieldValue1614.setName("center")
fieldValue1614.setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538")

ProtoInstance1611.addFieldValue(fieldValue1614)
fieldValue1615 = x3d.fieldValue()
fieldValue1615.setName("children")
ProtoInstance1616 = x3d.ProtoInstance()
ProtoInstance1616.setName("Segment")
ProtoInstance1616.setDEF("hanim_l_hand")
fieldValue1617 = x3d.fieldValue()
fieldValue1617.setName("name")
fieldValue1617.setValue("l_hand")

ProtoInstance1616.addFieldValue(fieldValue1617)
fieldValue1618 = x3d.fieldValue()
fieldValue1618.setName("children")
ProtoInstance1619 = x3d.ProtoInstance()
ProtoInstance1619.setName("Site")
ProtoInstance1619.setDEF("hanim_l_hand_tip")
fieldValue1620 = x3d.fieldValue()
fieldValue1620.setName("name")
fieldValue1620.setValue("l_hand_tip")

ProtoInstance1619.addFieldValue(fieldValue1620)
fieldValue1621 = x3d.fieldValue()
fieldValue1621.setName("translation")
fieldValue1621.setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205")

ProtoInstance1619.addFieldValue(fieldValue1621)

fieldValue1618.addChildren(ProtoInstance1619)
ProtoInstance1622 = x3d.ProtoInstance()
ProtoInstance1622.setName("Site")
ProtoInstance1622.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue1623 = x3d.fieldValue()
fieldValue1623.setName("name")
fieldValue1623.setValue("l_metacarpal_phalanx_2")

ProtoInstance1622.addFieldValue(fieldValue1623)
fieldValue1624 = x3d.fieldValue()
fieldValue1624.setName("translation")
fieldValue1624.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance1622.addFieldValue(fieldValue1624)

fieldValue1618.addChildren(ProtoInstance1622)
ProtoInstance1625 = x3d.ProtoInstance()
ProtoInstance1625.setName("Site")
ProtoInstance1625.setDEF("hanim_l_dactylion")
fieldValue1626 = x3d.fieldValue()
fieldValue1626.setName("name")
fieldValue1626.setValue("l_dactylion")

ProtoInstance1625.addFieldValue(fieldValue1626)
fieldValue1627 = x3d.fieldValue()
fieldValue1627.setName("translation")
fieldValue1627.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance1625.addFieldValue(fieldValue1627)

fieldValue1618.addChildren(ProtoInstance1625)
ProtoInstance1628 = x3d.ProtoInstance()
ProtoInstance1628.setName("Site")
ProtoInstance1628.setDEF("hanim_l_ulnar_styloid")
fieldValue1629 = x3d.fieldValue()
fieldValue1629.setName("name")
fieldValue1629.setValue("l_ulnar_styloid")

ProtoInstance1628.addFieldValue(fieldValue1629)
fieldValue1630 = x3d.fieldValue()
fieldValue1630.setName("translation")
fieldValue1630.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance1628.addFieldValue(fieldValue1630)

fieldValue1618.addChildren(ProtoInstance1628)
ProtoInstance1631 = x3d.ProtoInstance()
ProtoInstance1631.setName("Site")
ProtoInstance1631.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue1632 = x3d.fieldValue()
fieldValue1632.setName("name")
fieldValue1632.setValue("l_metacarpal_phalanx_5")

ProtoInstance1631.addFieldValue(fieldValue1632)
fieldValue1633 = x3d.fieldValue()
fieldValue1633.setName("translation")
fieldValue1633.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance1631.addFieldValue(fieldValue1633)

fieldValue1618.addChildren(ProtoInstance1631)

ProtoInstance1616.addFieldValue(fieldValue1618)

fieldValue1615.addChildren(ProtoInstance1616)

ProtoInstance1611.addFieldValue(fieldValue1615)

fieldValue1610.addChildren(ProtoInstance1611)
ProtoInstance1634 = x3d.ProtoInstance()
ProtoInstance1634.setName("Segment")
ProtoInstance1634.setDEF("hanim_l_forearm")
fieldValue1635 = x3d.fieldValue()
fieldValue1635.setName("name")
fieldValue1635.setValue("l_forearm")

ProtoInstance1634.addFieldValue(fieldValue1635)
fieldValue1636 = x3d.fieldValue()
fieldValue1636.setName("children")
ProtoInstance1637 = x3d.ProtoInstance()
ProtoInstance1637.setName("Site")
ProtoInstance1637.setDEF("hanim_l_radial_styloid")
fieldValue1638 = x3d.fieldValue()
fieldValue1638.setName("name")
fieldValue1638.setValue("l_radial_styloid")

ProtoInstance1637.addFieldValue(fieldValue1638)
fieldValue1639 = x3d.fieldValue()
fieldValue1639.setName("translation")
fieldValue1639.setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691")

ProtoInstance1637.addFieldValue(fieldValue1639)

fieldValue1636.addChildren(ProtoInstance1637)
ProtoInstance1640 = x3d.ProtoInstance()
ProtoInstance1640.setName("Site")
ProtoInstance1640.setDEF("hanim_l_olecranon")
fieldValue1641 = x3d.fieldValue()
fieldValue1641.setName("name")
fieldValue1641.setValue("l_olecranon")

ProtoInstance1640.addFieldValue(fieldValue1641)
fieldValue1642 = x3d.fieldValue()
fieldValue1642.setName("translation")
fieldValue1642.setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")

ProtoInstance1640.addFieldValue(fieldValue1642)

fieldValue1636.addChildren(ProtoInstance1640)
ProtoInstance1643 = x3d.ProtoInstance()
ProtoInstance1643.setName("Site")
ProtoInstance1643.setDEF("hanim_l_humeral_medial_epicondyles")
fieldValue1644 = x3d.fieldValue()
fieldValue1644.setName("name")
fieldValue1644.setValue("l_humeral_medial_epicondyles")

ProtoInstance1643.addFieldValue(fieldValue1644)
fieldValue1645 = x3d.fieldValue()
fieldValue1645.setName("translation")
fieldValue1645.setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661")

ProtoInstance1643.addFieldValue(fieldValue1645)

fieldValue1636.addChildren(ProtoInstance1643)
ProtoInstance1646 = x3d.ProtoInstance()
ProtoInstance1646.setName("Site")
ProtoInstance1646.setDEF("hanim_l_radiale")
fieldValue1647 = x3d.fieldValue()
fieldValue1647.setName("name")
fieldValue1647.setValue("l_radiale")

ProtoInstance1646.addFieldValue(fieldValue1647)
fieldValue1648 = x3d.fieldValue()
fieldValue1648.setName("translation")
fieldValue1648.setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268")

ProtoInstance1646.addFieldValue(fieldValue1648)

fieldValue1636.addChildren(ProtoInstance1646)

ProtoInstance1634.addFieldValue(fieldValue1636)

fieldValue1610.addChildren(ProtoInstance1634)

ProtoInstance1606.addFieldValue(fieldValue1610)

fieldValue1605.addChildren(ProtoInstance1606)
ProtoInstance1649 = x3d.ProtoInstance()
ProtoInstance1649.setName("Segment")
ProtoInstance1649.setDEF("hanim_l_upperarm")
fieldValue1650 = x3d.fieldValue()
fieldValue1650.setName("name")
fieldValue1650.setValue("l_upperarm")

ProtoInstance1649.addFieldValue(fieldValue1650)
fieldValue1651 = x3d.fieldValue()
fieldValue1651.setName("children")
ProtoInstance1652 = x3d.ProtoInstance()
ProtoInstance1652.setName("Site")
ProtoInstance1652.setDEF("hanim_l_humeral_lateral_epicondyles")
fieldValue1653 = x3d.fieldValue()
fieldValue1653.setName("name")
fieldValue1653.setValue("l_humeral_lateral_epicondyles")

ProtoInstance1652.addFieldValue(fieldValue1653)
fieldValue1654 = x3d.fieldValue()
fieldValue1654.setName("translation")
fieldValue1654.setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355")

ProtoInstance1652.addFieldValue(fieldValue1654)

fieldValue1651.addChildren(ProtoInstance1652)

ProtoInstance1649.addFieldValue(fieldValue1651)

fieldValue1605.addChildren(ProtoInstance1649)

ProtoInstance1601.addFieldValue(fieldValue1605)

fieldValue487.addChildren(ProtoInstance1601)
ProtoInstance1655 = x3d.ProtoInstance()
ProtoInstance1655.setName("Joint")
ProtoInstance1655.setDEF("hanim_l_elbow")
fieldValue1656 = x3d.fieldValue()
fieldValue1656.setName("stiffness")
fieldValue1656.setValue("1 1 1")

ProtoInstance1655.addFieldValue(fieldValue1656)
fieldValue1657 = x3d.fieldValue()
fieldValue1657.setName("name")
fieldValue1657.setValue("l_elbow")

ProtoInstance1655.addFieldValue(fieldValue1657)
fieldValue1658 = x3d.fieldValue()
fieldValue1658.setName("center")
fieldValue1658.setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512")

ProtoInstance1655.addFieldValue(fieldValue1658)
fieldValue1659 = x3d.fieldValue()
fieldValue1659.setName("children")
ProtoInstance1660 = x3d.ProtoInstance()
ProtoInstance1660.setName("Joint")
ProtoInstance1660.setDEF("hanim_l_radiocarpal")
fieldValue1661 = x3d.fieldValue()
fieldValue1661.setName("stiffness")
fieldValue1661.setValue("1 1 1")

ProtoInstance1660.addFieldValue(fieldValue1661)
fieldValue1662 = x3d.fieldValue()
fieldValue1662.setName("name")
fieldValue1662.setValue("l_radiocarpal")

ProtoInstance1660.addFieldValue(fieldValue1662)
fieldValue1663 = x3d.fieldValue()
fieldValue1663.setName("center")
fieldValue1663.setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538")

ProtoInstance1660.addFieldValue(fieldValue1663)
fieldValue1664 = x3d.fieldValue()
fieldValue1664.setName("children")
ProtoInstance1665 = x3d.ProtoInstance()
ProtoInstance1665.setName("Segment")
ProtoInstance1665.setDEF("hanim_l_hand")
fieldValue1666 = x3d.fieldValue()
fieldValue1666.setName("name")
fieldValue1666.setValue("l_hand")

ProtoInstance1665.addFieldValue(fieldValue1666)
fieldValue1667 = x3d.fieldValue()
fieldValue1667.setName("children")
ProtoInstance1668 = x3d.ProtoInstance()
ProtoInstance1668.setName("Site")
ProtoInstance1668.setDEF("hanim_l_hand_tip")
fieldValue1669 = x3d.fieldValue()
fieldValue1669.setName("name")
fieldValue1669.setValue("l_hand_tip")

ProtoInstance1668.addFieldValue(fieldValue1669)
fieldValue1670 = x3d.fieldValue()
fieldValue1670.setName("translation")
fieldValue1670.setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205")

ProtoInstance1668.addFieldValue(fieldValue1670)

fieldValue1667.addChildren(ProtoInstance1668)
ProtoInstance1671 = x3d.ProtoInstance()
ProtoInstance1671.setName("Site")
ProtoInstance1671.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue1672 = x3d.fieldValue()
fieldValue1672.setName("name")
fieldValue1672.setValue("l_metacarpal_phalanx_2")

ProtoInstance1671.addFieldValue(fieldValue1672)
fieldValue1673 = x3d.fieldValue()
fieldValue1673.setName("translation")
fieldValue1673.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance1671.addFieldValue(fieldValue1673)

fieldValue1667.addChildren(ProtoInstance1671)
ProtoInstance1674 = x3d.ProtoInstance()
ProtoInstance1674.setName("Site")
ProtoInstance1674.setDEF("hanim_l_dactylion")
fieldValue1675 = x3d.fieldValue()
fieldValue1675.setName("name")
fieldValue1675.setValue("l_dactylion")

ProtoInstance1674.addFieldValue(fieldValue1675)
fieldValue1676 = x3d.fieldValue()
fieldValue1676.setName("translation")
fieldValue1676.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance1674.addFieldValue(fieldValue1676)

fieldValue1667.addChildren(ProtoInstance1674)
ProtoInstance1677 = x3d.ProtoInstance()
ProtoInstance1677.setName("Site")
ProtoInstance1677.setDEF("hanim_l_ulnar_styloid")
fieldValue1678 = x3d.fieldValue()
fieldValue1678.setName("name")
fieldValue1678.setValue("l_ulnar_styloid")

ProtoInstance1677.addFieldValue(fieldValue1678)
fieldValue1679 = x3d.fieldValue()
fieldValue1679.setName("translation")
fieldValue1679.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance1677.addFieldValue(fieldValue1679)

fieldValue1667.addChildren(ProtoInstance1677)
ProtoInstance1680 = x3d.ProtoInstance()
ProtoInstance1680.setName("Site")
ProtoInstance1680.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue1681 = x3d.fieldValue()
fieldValue1681.setName("name")
fieldValue1681.setValue("l_metacarpal_phalanx_5")

ProtoInstance1680.addFieldValue(fieldValue1681)
fieldValue1682 = x3d.fieldValue()
fieldValue1682.setName("translation")
fieldValue1682.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance1680.addFieldValue(fieldValue1682)

fieldValue1667.addChildren(ProtoInstance1680)

ProtoInstance1665.addFieldValue(fieldValue1667)

fieldValue1664.addChildren(ProtoInstance1665)

ProtoInstance1660.addFieldValue(fieldValue1664)

fieldValue1659.addChildren(ProtoInstance1660)
ProtoInstance1683 = x3d.ProtoInstance()
ProtoInstance1683.setName("Segment")
ProtoInstance1683.setDEF("hanim_l_forearm")
fieldValue1684 = x3d.fieldValue()
fieldValue1684.setName("name")
fieldValue1684.setValue("l_forearm")

ProtoInstance1683.addFieldValue(fieldValue1684)
fieldValue1685 = x3d.fieldValue()
fieldValue1685.setName("children")
ProtoInstance1686 = x3d.ProtoInstance()
ProtoInstance1686.setName("Site")
ProtoInstance1686.setDEF("hanim_l_radial_styloid")
fieldValue1687 = x3d.fieldValue()
fieldValue1687.setName("name")
fieldValue1687.setValue("l_radial_styloid")

ProtoInstance1686.addFieldValue(fieldValue1687)
fieldValue1688 = x3d.fieldValue()
fieldValue1688.setName("translation")
fieldValue1688.setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691")

ProtoInstance1686.addFieldValue(fieldValue1688)

fieldValue1685.addChildren(ProtoInstance1686)
ProtoInstance1689 = x3d.ProtoInstance()
ProtoInstance1689.setName("Site")
ProtoInstance1689.setDEF("hanim_l_olecranon")
fieldValue1690 = x3d.fieldValue()
fieldValue1690.setName("name")
fieldValue1690.setValue("l_olecranon")

ProtoInstance1689.addFieldValue(fieldValue1690)
fieldValue1691 = x3d.fieldValue()
fieldValue1691.setName("translation")
fieldValue1691.setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")

ProtoInstance1689.addFieldValue(fieldValue1691)

fieldValue1685.addChildren(ProtoInstance1689)
ProtoInstance1692 = x3d.ProtoInstance()
ProtoInstance1692.setName("Site")
ProtoInstance1692.setDEF("hanim_l_humeral_medial_epicondyles")
fieldValue1693 = x3d.fieldValue()
fieldValue1693.setName("name")
fieldValue1693.setValue("l_humeral_medial_epicondyles")

ProtoInstance1692.addFieldValue(fieldValue1693)
fieldValue1694 = x3d.fieldValue()
fieldValue1694.setName("translation")
fieldValue1694.setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661")

ProtoInstance1692.addFieldValue(fieldValue1694)

fieldValue1685.addChildren(ProtoInstance1692)
ProtoInstance1695 = x3d.ProtoInstance()
ProtoInstance1695.setName("Site")
ProtoInstance1695.setDEF("hanim_l_radiale")
fieldValue1696 = x3d.fieldValue()
fieldValue1696.setName("name")
fieldValue1696.setValue("l_radiale")

ProtoInstance1695.addFieldValue(fieldValue1696)
fieldValue1697 = x3d.fieldValue()
fieldValue1697.setName("translation")
fieldValue1697.setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268")

ProtoInstance1695.addFieldValue(fieldValue1697)

fieldValue1685.addChildren(ProtoInstance1695)

ProtoInstance1683.addFieldValue(fieldValue1685)

fieldValue1659.addChildren(ProtoInstance1683)

ProtoInstance1655.addFieldValue(fieldValue1659)

fieldValue487.addChildren(ProtoInstance1655)
ProtoInstance1698 = x3d.ProtoInstance()
ProtoInstance1698.setName("Joint")
ProtoInstance1698.setDEF("hanim_l_radiocarpal")
fieldValue1699 = x3d.fieldValue()
fieldValue1699.setName("stiffness")
fieldValue1699.setValue("1 1 1")

ProtoInstance1698.addFieldValue(fieldValue1699)
fieldValue1700 = x3d.fieldValue()
fieldValue1700.setName("name")
fieldValue1700.setValue("l_radiocarpal")

ProtoInstance1698.addFieldValue(fieldValue1700)
fieldValue1701 = x3d.fieldValue()
fieldValue1701.setName("center")
fieldValue1701.setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538")

ProtoInstance1698.addFieldValue(fieldValue1701)
fieldValue1702 = x3d.fieldValue()
fieldValue1702.setName("children")
ProtoInstance1703 = x3d.ProtoInstance()
ProtoInstance1703.setName("Segment")
ProtoInstance1703.setDEF("hanim_l_hand")
fieldValue1704 = x3d.fieldValue()
fieldValue1704.setName("name")
fieldValue1704.setValue("l_hand")

ProtoInstance1703.addFieldValue(fieldValue1704)
fieldValue1705 = x3d.fieldValue()
fieldValue1705.setName("children")
ProtoInstance1706 = x3d.ProtoInstance()
ProtoInstance1706.setName("Site")
ProtoInstance1706.setDEF("hanim_l_hand_tip")
fieldValue1707 = x3d.fieldValue()
fieldValue1707.setName("name")
fieldValue1707.setValue("l_hand_tip")

ProtoInstance1706.addFieldValue(fieldValue1707)
fieldValue1708 = x3d.fieldValue()
fieldValue1708.setName("translation")
fieldValue1708.setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205")

ProtoInstance1706.addFieldValue(fieldValue1708)

fieldValue1705.addChildren(ProtoInstance1706)
ProtoInstance1709 = x3d.ProtoInstance()
ProtoInstance1709.setName("Site")
ProtoInstance1709.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue1710 = x3d.fieldValue()
fieldValue1710.setName("name")
fieldValue1710.setValue("l_metacarpal_phalanx_2")

ProtoInstance1709.addFieldValue(fieldValue1710)
fieldValue1711 = x3d.fieldValue()
fieldValue1711.setName("translation")
fieldValue1711.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance1709.addFieldValue(fieldValue1711)

fieldValue1705.addChildren(ProtoInstance1709)
ProtoInstance1712 = x3d.ProtoInstance()
ProtoInstance1712.setName("Site")
ProtoInstance1712.setDEF("hanim_l_dactylion")
fieldValue1713 = x3d.fieldValue()
fieldValue1713.setName("name")
fieldValue1713.setValue("l_dactylion")

ProtoInstance1712.addFieldValue(fieldValue1713)
fieldValue1714 = x3d.fieldValue()
fieldValue1714.setName("translation")
fieldValue1714.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance1712.addFieldValue(fieldValue1714)

fieldValue1705.addChildren(ProtoInstance1712)
ProtoInstance1715 = x3d.ProtoInstance()
ProtoInstance1715.setName("Site")
ProtoInstance1715.setDEF("hanim_l_ulnar_styloid")
fieldValue1716 = x3d.fieldValue()
fieldValue1716.setName("name")
fieldValue1716.setValue("l_ulnar_styloid")

ProtoInstance1715.addFieldValue(fieldValue1716)
fieldValue1717 = x3d.fieldValue()
fieldValue1717.setName("translation")
fieldValue1717.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance1715.addFieldValue(fieldValue1717)

fieldValue1705.addChildren(ProtoInstance1715)
ProtoInstance1718 = x3d.ProtoInstance()
ProtoInstance1718.setName("Site")
ProtoInstance1718.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue1719 = x3d.fieldValue()
fieldValue1719.setName("name")
fieldValue1719.setValue("l_metacarpal_phalanx_5")

ProtoInstance1718.addFieldValue(fieldValue1719)
fieldValue1720 = x3d.fieldValue()
fieldValue1720.setName("translation")
fieldValue1720.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance1718.addFieldValue(fieldValue1720)

fieldValue1705.addChildren(ProtoInstance1718)

ProtoInstance1703.addFieldValue(fieldValue1705)

fieldValue1702.addChildren(ProtoInstance1703)

ProtoInstance1698.addFieldValue(fieldValue1702)

fieldValue487.addChildren(ProtoInstance1698)
ProtoInstance1721 = x3d.ProtoInstance()
ProtoInstance1721.setName("Joint")
ProtoInstance1721.setDEF("hanim_r_shoulder")
fieldValue1722 = x3d.fieldValue()
fieldValue1722.setName("stiffness")
fieldValue1722.setValue("1 1 1")

ProtoInstance1721.addFieldValue(fieldValue1722)
fieldValue1723 = x3d.fieldValue()
fieldValue1723.setName("name")
fieldValue1723.setValue("r_shoulder")

ProtoInstance1721.addFieldValue(fieldValue1723)
fieldValue1724 = x3d.fieldValue()
fieldValue1724.setName("center")
fieldValue1724.setValue("-0.1906999945640564 1.4407000541687012 -0.032499998807907104")

ProtoInstance1721.addFieldValue(fieldValue1724)
fieldValue1725 = x3d.fieldValue()
fieldValue1725.setName("children")
ProtoInstance1726 = x3d.ProtoInstance()
ProtoInstance1726.setName("Joint")
ProtoInstance1726.setDEF("hanim_r_elbow")
fieldValue1727 = x3d.fieldValue()
fieldValue1727.setName("stiffness")
fieldValue1727.setValue("1 1 1")

ProtoInstance1726.addFieldValue(fieldValue1727)
fieldValue1728 = x3d.fieldValue()
fieldValue1728.setName("name")
fieldValue1728.setValue("r_elbow")

ProtoInstance1726.addFieldValue(fieldValue1728)
fieldValue1729 = x3d.fieldValue()
fieldValue1729.setName("center")
fieldValue1729.setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104")

ProtoInstance1726.addFieldValue(fieldValue1729)
fieldValue1730 = x3d.fieldValue()
fieldValue1730.setName("children")
ProtoInstance1731 = x3d.ProtoInstance()
ProtoInstance1731.setName("Joint")
ProtoInstance1731.setDEF("hanim_r_radiocarpal")
fieldValue1732 = x3d.fieldValue()
fieldValue1732.setName("stiffness")
fieldValue1732.setValue("1 1 1")

ProtoInstance1731.addFieldValue(fieldValue1732)
fieldValue1733 = x3d.fieldValue()
fieldValue1733.setName("name")
fieldValue1733.setValue("r_radiocarpal")

ProtoInstance1731.addFieldValue(fieldValue1733)
fieldValue1734 = x3d.fieldValue()
fieldValue1734.setName("center")
fieldValue1734.setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522")

ProtoInstance1731.addFieldValue(fieldValue1734)
fieldValue1735 = x3d.fieldValue()
fieldValue1735.setName("children")
ProtoInstance1736 = x3d.ProtoInstance()
ProtoInstance1736.setName("Segment")
ProtoInstance1736.setDEF("hanim_r_hand")
fieldValue1737 = x3d.fieldValue()
fieldValue1737.setName("name")
fieldValue1737.setValue("r_hand")

ProtoInstance1736.addFieldValue(fieldValue1737)
fieldValue1738 = x3d.fieldValue()
fieldValue1738.setName("children")
ProtoInstance1739 = x3d.ProtoInstance()
ProtoInstance1739.setName("Site")
ProtoInstance1739.setDEF("hanim_r_hand_tip")
fieldValue1740 = x3d.fieldValue()
fieldValue1740.setName("name")
fieldValue1740.setValue("r_hand_tip")

ProtoInstance1739.addFieldValue(fieldValue1740)
fieldValue1741 = x3d.fieldValue()
fieldValue1741.setName("translation")
fieldValue1741.setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")

ProtoInstance1739.addFieldValue(fieldValue1741)

fieldValue1738.addChildren(ProtoInstance1739)
ProtoInstance1742 = x3d.ProtoInstance()
ProtoInstance1742.setName("Site")
ProtoInstance1742.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue1743 = x3d.fieldValue()
fieldValue1743.setName("name")
fieldValue1743.setValue("r_metacarpal_phalanx_2")

ProtoInstance1742.addFieldValue(fieldValue1743)
fieldValue1744 = x3d.fieldValue()
fieldValue1744.setName("translation")
fieldValue1744.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance1742.addFieldValue(fieldValue1744)

fieldValue1738.addChildren(ProtoInstance1742)
ProtoInstance1745 = x3d.ProtoInstance()
ProtoInstance1745.setName("Site")
ProtoInstance1745.setDEF("hanim_r_dactylion")
fieldValue1746 = x3d.fieldValue()
fieldValue1746.setName("name")
fieldValue1746.setValue("r_dactylion")

ProtoInstance1745.addFieldValue(fieldValue1746)
fieldValue1747 = x3d.fieldValue()
fieldValue1747.setName("translation")
fieldValue1747.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance1745.addFieldValue(fieldValue1747)

fieldValue1738.addChildren(ProtoInstance1745)
ProtoInstance1748 = x3d.ProtoInstance()
ProtoInstance1748.setName("Site")
ProtoInstance1748.setDEF("hanim_r_ulnar_styloid")
fieldValue1749 = x3d.fieldValue()
fieldValue1749.setName("name")
fieldValue1749.setValue("r_ulnar_styloid")

ProtoInstance1748.addFieldValue(fieldValue1749)
fieldValue1750 = x3d.fieldValue()
fieldValue1750.setName("translation")
fieldValue1750.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance1748.addFieldValue(fieldValue1750)

fieldValue1738.addChildren(ProtoInstance1748)
ProtoInstance1751 = x3d.ProtoInstance()
ProtoInstance1751.setName("Site")
ProtoInstance1751.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue1752 = x3d.fieldValue()
fieldValue1752.setName("name")
fieldValue1752.setValue("r_metacarpal_phalanx_5")

ProtoInstance1751.addFieldValue(fieldValue1752)
fieldValue1753 = x3d.fieldValue()
fieldValue1753.setName("translation")
fieldValue1753.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance1751.addFieldValue(fieldValue1753)

fieldValue1738.addChildren(ProtoInstance1751)

ProtoInstance1736.addFieldValue(fieldValue1738)

fieldValue1735.addChildren(ProtoInstance1736)

ProtoInstance1731.addFieldValue(fieldValue1735)

fieldValue1730.addChildren(ProtoInstance1731)
ProtoInstance1754 = x3d.ProtoInstance()
ProtoInstance1754.setName("Segment")
ProtoInstance1754.setDEF("hanim_r_forearm")
fieldValue1755 = x3d.fieldValue()
fieldValue1755.setName("name")
fieldValue1755.setValue("r_forearm")

ProtoInstance1754.addFieldValue(fieldValue1755)
fieldValue1756 = x3d.fieldValue()
fieldValue1756.setName("children")
ProtoInstance1757 = x3d.ProtoInstance()
ProtoInstance1757.setName("Site")
ProtoInstance1757.setDEF("hanim_r_radial_styloid")
fieldValue1758 = x3d.fieldValue()
fieldValue1758.setName("name")
fieldValue1758.setValue("r_radial_styloid")

ProtoInstance1757.addFieldValue(fieldValue1758)
fieldValue1759 = x3d.fieldValue()
fieldValue1759.setName("translation")
fieldValue1759.setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236")

ProtoInstance1757.addFieldValue(fieldValue1759)

fieldValue1756.addChildren(ProtoInstance1757)
ProtoInstance1760 = x3d.ProtoInstance()
ProtoInstance1760.setName("Site")
ProtoInstance1760.setDEF("hanim_r_olecranon")
fieldValue1761 = x3d.fieldValue()
fieldValue1761.setName("name")
fieldValue1761.setValue("r_olecranon")

ProtoInstance1760.addFieldValue(fieldValue1761)
fieldValue1762 = x3d.fieldValue()
fieldValue1762.setName("translation")
fieldValue1762.setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")

ProtoInstance1760.addFieldValue(fieldValue1762)

fieldValue1756.addChildren(ProtoInstance1760)
ProtoInstance1763 = x3d.ProtoInstance()
ProtoInstance1763.setName("Site")
ProtoInstance1763.setDEF("hanim_r_humeral_medial_epicondyles")
fieldValue1764 = x3d.fieldValue()
fieldValue1764.setName("name")
fieldValue1764.setValue("r_humeral_medial_epicondyles")

ProtoInstance1763.addFieldValue(fieldValue1764)
fieldValue1765 = x3d.fieldValue()
fieldValue1765.setName("translation")
fieldValue1765.setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")

ProtoInstance1763.addFieldValue(fieldValue1765)

fieldValue1756.addChildren(ProtoInstance1763)
ProtoInstance1766 = x3d.ProtoInstance()
ProtoInstance1766.setName("Site")
ProtoInstance1766.setDEF("hanim_r_radiale")
fieldValue1767 = x3d.fieldValue()
fieldValue1767.setName("name")
fieldValue1767.setValue("r_radiale")

ProtoInstance1766.addFieldValue(fieldValue1767)
fieldValue1768 = x3d.fieldValue()
fieldValue1768.setName("translation")
fieldValue1768.setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")

ProtoInstance1766.addFieldValue(fieldValue1768)

fieldValue1756.addChildren(ProtoInstance1766)

ProtoInstance1754.addFieldValue(fieldValue1756)

fieldValue1730.addChildren(ProtoInstance1754)

ProtoInstance1726.addFieldValue(fieldValue1730)

fieldValue1725.addChildren(ProtoInstance1726)
ProtoInstance1769 = x3d.ProtoInstance()
ProtoInstance1769.setName("Segment")
ProtoInstance1769.setDEF("hanim_r_upperarm")
fieldValue1770 = x3d.fieldValue()
fieldValue1770.setName("name")
fieldValue1770.setValue("r_upperarm")

ProtoInstance1769.addFieldValue(fieldValue1770)
fieldValue1771 = x3d.fieldValue()
fieldValue1771.setName("children")
ProtoInstance1772 = x3d.ProtoInstance()
ProtoInstance1772.setName("Site")
ProtoInstance1772.setDEF("hanim_r_humeral_lateral_epicondyles")
fieldValue1773 = x3d.fieldValue()
fieldValue1773.setName("name")
fieldValue1773.setValue("r_humeral_lateral_epicondyles")

ProtoInstance1772.addFieldValue(fieldValue1773)
fieldValue1774 = x3d.fieldValue()
fieldValue1774.setName("translation")
fieldValue1774.setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")

ProtoInstance1772.addFieldValue(fieldValue1774)

fieldValue1771.addChildren(ProtoInstance1772)

ProtoInstance1769.addFieldValue(fieldValue1771)

fieldValue1725.addChildren(ProtoInstance1769)

ProtoInstance1721.addFieldValue(fieldValue1725)

fieldValue487.addChildren(ProtoInstance1721)
ProtoInstance1775 = x3d.ProtoInstance()
ProtoInstance1775.setName("Joint")
ProtoInstance1775.setDEF("hanim_r_elbow")
fieldValue1776 = x3d.fieldValue()
fieldValue1776.setName("stiffness")
fieldValue1776.setValue("1 1 1")

ProtoInstance1775.addFieldValue(fieldValue1776)
fieldValue1777 = x3d.fieldValue()
fieldValue1777.setName("name")
fieldValue1777.setValue("r_elbow")

ProtoInstance1775.addFieldValue(fieldValue1777)
fieldValue1778 = x3d.fieldValue()
fieldValue1778.setName("center")
fieldValue1778.setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104")

ProtoInstance1775.addFieldValue(fieldValue1778)
fieldValue1779 = x3d.fieldValue()
fieldValue1779.setName("children")
ProtoInstance1780 = x3d.ProtoInstance()
ProtoInstance1780.setName("Joint")
ProtoInstance1780.setDEF("hanim_r_radiocarpal")
fieldValue1781 = x3d.fieldValue()
fieldValue1781.setName("stiffness")
fieldValue1781.setValue("1 1 1")

ProtoInstance1780.addFieldValue(fieldValue1781)
fieldValue1782 = x3d.fieldValue()
fieldValue1782.setName("name")
fieldValue1782.setValue("r_radiocarpal")

ProtoInstance1780.addFieldValue(fieldValue1782)
fieldValue1783 = x3d.fieldValue()
fieldValue1783.setName("center")
fieldValue1783.setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522")

ProtoInstance1780.addFieldValue(fieldValue1783)
fieldValue1784 = x3d.fieldValue()
fieldValue1784.setName("children")
ProtoInstance1785 = x3d.ProtoInstance()
ProtoInstance1785.setName("Segment")
ProtoInstance1785.setDEF("hanim_r_hand")
fieldValue1786 = x3d.fieldValue()
fieldValue1786.setName("name")
fieldValue1786.setValue("r_hand")

ProtoInstance1785.addFieldValue(fieldValue1786)
fieldValue1787 = x3d.fieldValue()
fieldValue1787.setName("children")
ProtoInstance1788 = x3d.ProtoInstance()
ProtoInstance1788.setName("Site")
ProtoInstance1788.setDEF("hanim_r_hand_tip")
fieldValue1789 = x3d.fieldValue()
fieldValue1789.setName("name")
fieldValue1789.setValue("r_hand_tip")

ProtoInstance1788.addFieldValue(fieldValue1789)
fieldValue1790 = x3d.fieldValue()
fieldValue1790.setName("translation")
fieldValue1790.setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")

ProtoInstance1788.addFieldValue(fieldValue1790)

fieldValue1787.addChildren(ProtoInstance1788)
ProtoInstance1791 = x3d.ProtoInstance()
ProtoInstance1791.setName("Site")
ProtoInstance1791.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue1792 = x3d.fieldValue()
fieldValue1792.setName("name")
fieldValue1792.setValue("r_metacarpal_phalanx_2")

ProtoInstance1791.addFieldValue(fieldValue1792)
fieldValue1793 = x3d.fieldValue()
fieldValue1793.setName("translation")
fieldValue1793.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance1791.addFieldValue(fieldValue1793)

fieldValue1787.addChildren(ProtoInstance1791)
ProtoInstance1794 = x3d.ProtoInstance()
ProtoInstance1794.setName("Site")
ProtoInstance1794.setDEF("hanim_r_dactylion")
fieldValue1795 = x3d.fieldValue()
fieldValue1795.setName("name")
fieldValue1795.setValue("r_dactylion")

ProtoInstance1794.addFieldValue(fieldValue1795)
fieldValue1796 = x3d.fieldValue()
fieldValue1796.setName("translation")
fieldValue1796.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance1794.addFieldValue(fieldValue1796)

fieldValue1787.addChildren(ProtoInstance1794)
ProtoInstance1797 = x3d.ProtoInstance()
ProtoInstance1797.setName("Site")
ProtoInstance1797.setDEF("hanim_r_ulnar_styloid")
fieldValue1798 = x3d.fieldValue()
fieldValue1798.setName("name")
fieldValue1798.setValue("r_ulnar_styloid")

ProtoInstance1797.addFieldValue(fieldValue1798)
fieldValue1799 = x3d.fieldValue()
fieldValue1799.setName("translation")
fieldValue1799.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance1797.addFieldValue(fieldValue1799)

fieldValue1787.addChildren(ProtoInstance1797)
ProtoInstance1800 = x3d.ProtoInstance()
ProtoInstance1800.setName("Site")
ProtoInstance1800.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue1801 = x3d.fieldValue()
fieldValue1801.setName("name")
fieldValue1801.setValue("r_metacarpal_phalanx_5")

ProtoInstance1800.addFieldValue(fieldValue1801)
fieldValue1802 = x3d.fieldValue()
fieldValue1802.setName("translation")
fieldValue1802.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance1800.addFieldValue(fieldValue1802)

fieldValue1787.addChildren(ProtoInstance1800)

ProtoInstance1785.addFieldValue(fieldValue1787)

fieldValue1784.addChildren(ProtoInstance1785)

ProtoInstance1780.addFieldValue(fieldValue1784)

fieldValue1779.addChildren(ProtoInstance1780)
ProtoInstance1803 = x3d.ProtoInstance()
ProtoInstance1803.setName("Segment")
ProtoInstance1803.setDEF("hanim_r_forearm")
fieldValue1804 = x3d.fieldValue()
fieldValue1804.setName("name")
fieldValue1804.setValue("r_forearm")

ProtoInstance1803.addFieldValue(fieldValue1804)
fieldValue1805 = x3d.fieldValue()
fieldValue1805.setName("children")
ProtoInstance1806 = x3d.ProtoInstance()
ProtoInstance1806.setName("Site")
ProtoInstance1806.setDEF("hanim_r_radial_styloid")
fieldValue1807 = x3d.fieldValue()
fieldValue1807.setName("name")
fieldValue1807.setValue("r_radial_styloid")

ProtoInstance1806.addFieldValue(fieldValue1807)
fieldValue1808 = x3d.fieldValue()
fieldValue1808.setName("translation")
fieldValue1808.setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236")

ProtoInstance1806.addFieldValue(fieldValue1808)

fieldValue1805.addChildren(ProtoInstance1806)
ProtoInstance1809 = x3d.ProtoInstance()
ProtoInstance1809.setName("Site")
ProtoInstance1809.setDEF("hanim_r_olecranon")
fieldValue1810 = x3d.fieldValue()
fieldValue1810.setName("name")
fieldValue1810.setValue("r_olecranon")

ProtoInstance1809.addFieldValue(fieldValue1810)
fieldValue1811 = x3d.fieldValue()
fieldValue1811.setName("translation")
fieldValue1811.setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")

ProtoInstance1809.addFieldValue(fieldValue1811)

fieldValue1805.addChildren(ProtoInstance1809)
ProtoInstance1812 = x3d.ProtoInstance()
ProtoInstance1812.setName("Site")
ProtoInstance1812.setDEF("hanim_r_humeral_medial_epicondyles")
fieldValue1813 = x3d.fieldValue()
fieldValue1813.setName("name")
fieldValue1813.setValue("r_humeral_medial_epicondyles")

ProtoInstance1812.addFieldValue(fieldValue1813)
fieldValue1814 = x3d.fieldValue()
fieldValue1814.setName("translation")
fieldValue1814.setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")

ProtoInstance1812.addFieldValue(fieldValue1814)

fieldValue1805.addChildren(ProtoInstance1812)
ProtoInstance1815 = x3d.ProtoInstance()
ProtoInstance1815.setName("Site")
ProtoInstance1815.setDEF("hanim_r_radiale")
fieldValue1816 = x3d.fieldValue()
fieldValue1816.setName("name")
fieldValue1816.setValue("r_radiale")

ProtoInstance1815.addFieldValue(fieldValue1816)
fieldValue1817 = x3d.fieldValue()
fieldValue1817.setName("translation")
fieldValue1817.setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")

ProtoInstance1815.addFieldValue(fieldValue1817)

fieldValue1805.addChildren(ProtoInstance1815)

ProtoInstance1803.addFieldValue(fieldValue1805)

fieldValue1779.addChildren(ProtoInstance1803)

ProtoInstance1775.addFieldValue(fieldValue1779)

fieldValue487.addChildren(ProtoInstance1775)
ProtoInstance1818 = x3d.ProtoInstance()
ProtoInstance1818.setName("Joint")
ProtoInstance1818.setDEF("hanim_r_radiocarpal")
fieldValue1819 = x3d.fieldValue()
fieldValue1819.setName("stiffness")
fieldValue1819.setValue("1 1 1")

ProtoInstance1818.addFieldValue(fieldValue1819)
fieldValue1820 = x3d.fieldValue()
fieldValue1820.setName("name")
fieldValue1820.setValue("r_radiocarpal")

ProtoInstance1818.addFieldValue(fieldValue1820)
fieldValue1821 = x3d.fieldValue()
fieldValue1821.setName("center")
fieldValue1821.setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522")

ProtoInstance1818.addFieldValue(fieldValue1821)
fieldValue1822 = x3d.fieldValue()
fieldValue1822.setName("children")
ProtoInstance1823 = x3d.ProtoInstance()
ProtoInstance1823.setName("Segment")
ProtoInstance1823.setDEF("hanim_r_hand")
fieldValue1824 = x3d.fieldValue()
fieldValue1824.setName("name")
fieldValue1824.setValue("r_hand")

ProtoInstance1823.addFieldValue(fieldValue1824)
fieldValue1825 = x3d.fieldValue()
fieldValue1825.setName("children")
ProtoInstance1826 = x3d.ProtoInstance()
ProtoInstance1826.setName("Site")
ProtoInstance1826.setDEF("hanim_r_hand_tip")
fieldValue1827 = x3d.fieldValue()
fieldValue1827.setName("name")
fieldValue1827.setValue("r_hand_tip")

ProtoInstance1826.addFieldValue(fieldValue1827)
fieldValue1828 = x3d.fieldValue()
fieldValue1828.setName("translation")
fieldValue1828.setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")

ProtoInstance1826.addFieldValue(fieldValue1828)

fieldValue1825.addChildren(ProtoInstance1826)
ProtoInstance1829 = x3d.ProtoInstance()
ProtoInstance1829.setName("Site")
ProtoInstance1829.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue1830 = x3d.fieldValue()
fieldValue1830.setName("name")
fieldValue1830.setValue("r_metacarpal_phalanx_2")

ProtoInstance1829.addFieldValue(fieldValue1830)
fieldValue1831 = x3d.fieldValue()
fieldValue1831.setName("translation")
fieldValue1831.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance1829.addFieldValue(fieldValue1831)

fieldValue1825.addChildren(ProtoInstance1829)
ProtoInstance1832 = x3d.ProtoInstance()
ProtoInstance1832.setName("Site")
ProtoInstance1832.setDEF("hanim_r_dactylion")
fieldValue1833 = x3d.fieldValue()
fieldValue1833.setName("name")
fieldValue1833.setValue("r_dactylion")

ProtoInstance1832.addFieldValue(fieldValue1833)
fieldValue1834 = x3d.fieldValue()
fieldValue1834.setName("translation")
fieldValue1834.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance1832.addFieldValue(fieldValue1834)

fieldValue1825.addChildren(ProtoInstance1832)
ProtoInstance1835 = x3d.ProtoInstance()
ProtoInstance1835.setName("Site")
ProtoInstance1835.setDEF("hanim_r_ulnar_styloid")
fieldValue1836 = x3d.fieldValue()
fieldValue1836.setName("name")
fieldValue1836.setValue("r_ulnar_styloid")

ProtoInstance1835.addFieldValue(fieldValue1836)
fieldValue1837 = x3d.fieldValue()
fieldValue1837.setName("translation")
fieldValue1837.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance1835.addFieldValue(fieldValue1837)

fieldValue1825.addChildren(ProtoInstance1835)
ProtoInstance1838 = x3d.ProtoInstance()
ProtoInstance1838.setName("Site")
ProtoInstance1838.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue1839 = x3d.fieldValue()
fieldValue1839.setName("name")
fieldValue1839.setValue("r_metacarpal_phalanx_5")

ProtoInstance1838.addFieldValue(fieldValue1839)
fieldValue1840 = x3d.fieldValue()
fieldValue1840.setName("translation")
fieldValue1840.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance1838.addFieldValue(fieldValue1840)

fieldValue1825.addChildren(ProtoInstance1838)

ProtoInstance1823.addFieldValue(fieldValue1825)

fieldValue1822.addChildren(ProtoInstance1823)

ProtoInstance1818.addFieldValue(fieldValue1822)

fieldValue487.addChildren(ProtoInstance1818)

ProtoInstance101.addFieldValue(fieldValue487)
fieldValue1841 = x3d.fieldValue()
fieldValue1841.setName("segments")
ProtoInstance1842 = x3d.ProtoInstance()
ProtoInstance1842.setName("Segment")
ProtoInstance1842.setDEF("hanim_l_middistal")
fieldValue1843 = x3d.fieldValue()
fieldValue1843.setName("name")
fieldValue1843.setValue("l_middistal")

ProtoInstance1842.addFieldValue(fieldValue1843)
fieldValue1844 = x3d.fieldValue()
fieldValue1844.setName("children")
ProtoInstance1845 = x3d.ProtoInstance()
ProtoInstance1845.setName("Site")
ProtoInstance1845.setDEF("hanim_l_middistal_tip")
fieldValue1846 = x3d.fieldValue()
fieldValue1846.setName("name")
fieldValue1846.setValue("l_middistal_tip")

ProtoInstance1845.addFieldValue(fieldValue1846)
fieldValue1847 = x3d.fieldValue()
fieldValue1847.setName("translation")
fieldValue1847.setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261")

ProtoInstance1845.addFieldValue(fieldValue1847)

fieldValue1844.addChildren(ProtoInstance1845)
ProtoInstance1848 = x3d.ProtoInstance()
ProtoInstance1848.setName("Site")
ProtoInstance1848.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue1849 = x3d.fieldValue()
fieldValue1849.setName("name")
fieldValue1849.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance1848.addFieldValue(fieldValue1849)
fieldValue1850 = x3d.fieldValue()
fieldValue1850.setName("translation")
fieldValue1850.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance1848.addFieldValue(fieldValue1850)

fieldValue1844.addChildren(ProtoInstance1848)
ProtoInstance1851 = x3d.ProtoInstance()
ProtoInstance1851.setName("Site")
ProtoInstance1851.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue1852 = x3d.fieldValue()
fieldValue1852.setName("name")
fieldValue1852.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance1851.addFieldValue(fieldValue1852)
fieldValue1853 = x3d.fieldValue()
fieldValue1853.setName("translation")
fieldValue1853.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance1851.addFieldValue(fieldValue1853)

fieldValue1844.addChildren(ProtoInstance1851)
ProtoInstance1854 = x3d.ProtoInstance()
ProtoInstance1854.setName("Site")
ProtoInstance1854.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue1855 = x3d.fieldValue()
fieldValue1855.setName("name")
fieldValue1855.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance1854.addFieldValue(fieldValue1855)
fieldValue1856 = x3d.fieldValue()
fieldValue1856.setName("translation")
fieldValue1856.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance1854.addFieldValue(fieldValue1856)

fieldValue1844.addChildren(ProtoInstance1854)

ProtoInstance1842.addFieldValue(fieldValue1844)

fieldValue1841.addChildren(ProtoInstance1842)
ProtoInstance1857 = x3d.ProtoInstance()
ProtoInstance1857.setName("Segment")
ProtoInstance1857.setDEF("hanim_l_hindfoot")
fieldValue1858 = x3d.fieldValue()
fieldValue1858.setName("name")
fieldValue1858.setValue("l_hindfoot")

ProtoInstance1857.addFieldValue(fieldValue1858)
fieldValue1859 = x3d.fieldValue()
fieldValue1859.setName("children")
ProtoInstance1860 = x3d.ProtoInstance()
ProtoInstance1860.setName("Site")
ProtoInstance1860.setDEF("hanim_l_lateral_malleolus")
fieldValue1861 = x3d.fieldValue()
fieldValue1861.setName("name")
fieldValue1861.setValue("l_lateral_malleolus")

ProtoInstance1860.addFieldValue(fieldValue1861)
fieldValue1862 = x3d.fieldValue()
fieldValue1862.setName("translation")
fieldValue1862.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance1860.addFieldValue(fieldValue1862)

fieldValue1859.addChildren(ProtoInstance1860)
ProtoInstance1863 = x3d.ProtoInstance()
ProtoInstance1863.setName("Site")
ProtoInstance1863.setDEF("hanim_l_medial_malleolus")
fieldValue1864 = x3d.fieldValue()
fieldValue1864.setName("name")
fieldValue1864.setValue("l_medial_malleolus")

ProtoInstance1863.addFieldValue(fieldValue1864)
fieldValue1865 = x3d.fieldValue()
fieldValue1865.setName("translation")
fieldValue1865.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance1863.addFieldValue(fieldValue1865)

fieldValue1859.addChildren(ProtoInstance1863)
ProtoInstance1866 = x3d.ProtoInstance()
ProtoInstance1866.setName("Site")
ProtoInstance1866.setDEF("hanim_l_sphyrion")
fieldValue1867 = x3d.fieldValue()
fieldValue1867.setName("name")
fieldValue1867.setValue("l_sphyrion")

ProtoInstance1866.addFieldValue(fieldValue1867)
fieldValue1868 = x3d.fieldValue()
fieldValue1868.setName("translation")
fieldValue1868.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance1866.addFieldValue(fieldValue1868)

fieldValue1859.addChildren(ProtoInstance1866)
ProtoInstance1869 = x3d.ProtoInstance()
ProtoInstance1869.setName("Site")
ProtoInstance1869.setDEF("hanim_l_calcaneus_posterior")
fieldValue1870 = x3d.fieldValue()
fieldValue1870.setName("name")
fieldValue1870.setValue("l_calcaneus_posterior")

ProtoInstance1869.addFieldValue(fieldValue1870)
fieldValue1871 = x3d.fieldValue()
fieldValue1871.setName("translation")
fieldValue1871.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance1869.addFieldValue(fieldValue1871)

fieldValue1859.addChildren(ProtoInstance1869)

ProtoInstance1857.addFieldValue(fieldValue1859)

fieldValue1841.addChildren(ProtoInstance1857)
ProtoInstance1872 = x3d.ProtoInstance()
ProtoInstance1872.setName("Segment")
ProtoInstance1872.setDEF("hanim_l_calf")
fieldValue1873 = x3d.fieldValue()
fieldValue1873.setName("name")
fieldValue1873.setValue("l_calf")

ProtoInstance1872.addFieldValue(fieldValue1873)

fieldValue1841.addChildren(ProtoInstance1872)
ProtoInstance1874 = x3d.ProtoInstance()
ProtoInstance1874.setName("Segment")
ProtoInstance1874.setDEF("hanim_l_thigh")
fieldValue1875 = x3d.fieldValue()
fieldValue1875.setName("name")
fieldValue1875.setValue("l_thigh")

ProtoInstance1874.addFieldValue(fieldValue1875)
fieldValue1876 = x3d.fieldValue()
fieldValue1876.setName("children")
ProtoInstance1877 = x3d.ProtoInstance()
ProtoInstance1877.setName("Site")
ProtoInstance1877.setDEF("hanim_l_knee_crease")
fieldValue1878 = x3d.fieldValue()
fieldValue1878.setName("name")
fieldValue1878.setValue("l_knee_crease")

ProtoInstance1877.addFieldValue(fieldValue1878)
fieldValue1879 = x3d.fieldValue()
fieldValue1879.setName("translation")
fieldValue1879.setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757")

ProtoInstance1877.addFieldValue(fieldValue1879)

fieldValue1876.addChildren(ProtoInstance1877)
ProtoInstance1880 = x3d.ProtoInstance()
ProtoInstance1880.setName("Site")
ProtoInstance1880.setDEF("hanim_l_femoral_lateral_epicondyles")
fieldValue1881 = x3d.fieldValue()
fieldValue1881.setName("name")
fieldValue1881.setValue("l_femoral_lateral_epicondyles")

ProtoInstance1880.addFieldValue(fieldValue1881)
fieldValue1882 = x3d.fieldValue()
fieldValue1882.setName("translation")
fieldValue1882.setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746")

ProtoInstance1880.addFieldValue(fieldValue1882)

fieldValue1876.addChildren(ProtoInstance1880)
ProtoInstance1883 = x3d.ProtoInstance()
ProtoInstance1883.setName("Site")
ProtoInstance1883.setDEF("hanim_l_femoral_medial_epicondyles")
fieldValue1884 = x3d.fieldValue()
fieldValue1884.setName("name")
fieldValue1884.setValue("l_femoral_lateral_epicondyles")

ProtoInstance1883.addFieldValue(fieldValue1884)
fieldValue1885 = x3d.fieldValue()
fieldValue1885.setName("translation")
fieldValue1885.setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183")

ProtoInstance1883.addFieldValue(fieldValue1885)

fieldValue1876.addChildren(ProtoInstance1883)

ProtoInstance1874.addFieldValue(fieldValue1876)

fieldValue1841.addChildren(ProtoInstance1874)
ProtoInstance1886 = x3d.ProtoInstance()
ProtoInstance1886.setName("Segment")
ProtoInstance1886.setDEF("hanim_r_middistal")
fieldValue1887 = x3d.fieldValue()
fieldValue1887.setName("name")
fieldValue1887.setValue("r_middistal")

ProtoInstance1886.addFieldValue(fieldValue1887)
fieldValue1888 = x3d.fieldValue()
fieldValue1888.setName("children")
ProtoInstance1889 = x3d.ProtoInstance()
ProtoInstance1889.setName("Site")
ProtoInstance1889.setDEF("hanim_r_middistal_tip")
fieldValue1890 = x3d.fieldValue()
fieldValue1890.setName("name")
fieldValue1890.setValue("r_middistal_tip")

ProtoInstance1889.addFieldValue(fieldValue1890)
fieldValue1891 = x3d.fieldValue()
fieldValue1891.setName("translation")
fieldValue1891.setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")

ProtoInstance1889.addFieldValue(fieldValue1891)

fieldValue1888.addChildren(ProtoInstance1889)
ProtoInstance1892 = x3d.ProtoInstance()
ProtoInstance1892.setName("Site")
ProtoInstance1892.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue1893 = x3d.fieldValue()
fieldValue1893.setName("name")
fieldValue1893.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance1892.addFieldValue(fieldValue1893)
fieldValue1894 = x3d.fieldValue()
fieldValue1894.setName("translation")
fieldValue1894.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance1892.addFieldValue(fieldValue1894)

fieldValue1888.addChildren(ProtoInstance1892)
ProtoInstance1895 = x3d.ProtoInstance()
ProtoInstance1895.setName("Site")
ProtoInstance1895.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue1896 = x3d.fieldValue()
fieldValue1896.setName("name")
fieldValue1896.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance1895.addFieldValue(fieldValue1896)
fieldValue1897 = x3d.fieldValue()
fieldValue1897.setName("translation")
fieldValue1897.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance1895.addFieldValue(fieldValue1897)

fieldValue1888.addChildren(ProtoInstance1895)
ProtoInstance1898 = x3d.ProtoInstance()
ProtoInstance1898.setName("Site")
ProtoInstance1898.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue1899 = x3d.fieldValue()
fieldValue1899.setName("name")
fieldValue1899.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance1898.addFieldValue(fieldValue1899)
fieldValue1900 = x3d.fieldValue()
fieldValue1900.setName("translation")
fieldValue1900.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance1898.addFieldValue(fieldValue1900)

fieldValue1888.addChildren(ProtoInstance1898)

ProtoInstance1886.addFieldValue(fieldValue1888)

fieldValue1841.addChildren(ProtoInstance1886)
ProtoInstance1901 = x3d.ProtoInstance()
ProtoInstance1901.setName("Segment")
ProtoInstance1901.setDEF("hanim_r_hindfoot")
fieldValue1902 = x3d.fieldValue()
fieldValue1902.setName("name")
fieldValue1902.setValue("r_hindfoot")

ProtoInstance1901.addFieldValue(fieldValue1902)
fieldValue1903 = x3d.fieldValue()
fieldValue1903.setName("children")
ProtoInstance1904 = x3d.ProtoInstance()
ProtoInstance1904.setName("Site")
ProtoInstance1904.setDEF("hanim_r_lateral_malleolus")
fieldValue1905 = x3d.fieldValue()
fieldValue1905.setName("name")
fieldValue1905.setValue("r_lateral_malleolus")

ProtoInstance1904.addFieldValue(fieldValue1905)
fieldValue1906 = x3d.fieldValue()
fieldValue1906.setName("translation")
fieldValue1906.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance1904.addFieldValue(fieldValue1906)

fieldValue1903.addChildren(ProtoInstance1904)
ProtoInstance1907 = x3d.ProtoInstance()
ProtoInstance1907.setName("Site")
ProtoInstance1907.setDEF("hanim_r_medial_malleolus")
fieldValue1908 = x3d.fieldValue()
fieldValue1908.setName("name")
fieldValue1908.setValue("r_medial_malleolus")

ProtoInstance1907.addFieldValue(fieldValue1908)
fieldValue1909 = x3d.fieldValue()
fieldValue1909.setName("translation")
fieldValue1909.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance1907.addFieldValue(fieldValue1909)

fieldValue1903.addChildren(ProtoInstance1907)
ProtoInstance1910 = x3d.ProtoInstance()
ProtoInstance1910.setName("Site")
ProtoInstance1910.setDEF("hanim_r_sphyrion")
fieldValue1911 = x3d.fieldValue()
fieldValue1911.setName("name")
fieldValue1911.setValue("r_sphyrion")

ProtoInstance1910.addFieldValue(fieldValue1911)
fieldValue1912 = x3d.fieldValue()
fieldValue1912.setName("translation")
fieldValue1912.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance1910.addFieldValue(fieldValue1912)

fieldValue1903.addChildren(ProtoInstance1910)
ProtoInstance1913 = x3d.ProtoInstance()
ProtoInstance1913.setName("Site")
ProtoInstance1913.setDEF("hanim_r_calcaneus_posterior")
fieldValue1914 = x3d.fieldValue()
fieldValue1914.setName("name")
fieldValue1914.setValue("r_calcaneus_posterior")

ProtoInstance1913.addFieldValue(fieldValue1914)
fieldValue1915 = x3d.fieldValue()
fieldValue1915.setName("translation")
fieldValue1915.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance1913.addFieldValue(fieldValue1915)

fieldValue1903.addChildren(ProtoInstance1913)

ProtoInstance1901.addFieldValue(fieldValue1903)

fieldValue1841.addChildren(ProtoInstance1901)
ProtoInstance1916 = x3d.ProtoInstance()
ProtoInstance1916.setName("Segment")
ProtoInstance1916.setDEF("hanim_r_calf")
fieldValue1917 = x3d.fieldValue()
fieldValue1917.setName("name")
fieldValue1917.setValue("r_calf")

ProtoInstance1916.addFieldValue(fieldValue1917)

fieldValue1841.addChildren(ProtoInstance1916)
ProtoInstance1918 = x3d.ProtoInstance()
ProtoInstance1918.setName("Segment")
ProtoInstance1918.setDEF("hanim_r_thigh")
fieldValue1919 = x3d.fieldValue()
fieldValue1919.setName("name")
fieldValue1919.setValue("r_thigh")

ProtoInstance1918.addFieldValue(fieldValue1919)
fieldValue1920 = x3d.fieldValue()
fieldValue1920.setName("children")
ProtoInstance1921 = x3d.ProtoInstance()
ProtoInstance1921.setName("Site")
ProtoInstance1921.setDEF("hanim_r_knee_crease")
fieldValue1922 = x3d.fieldValue()
fieldValue1922.setName("name")
fieldValue1922.setValue("r_knee_crease")

ProtoInstance1921.addFieldValue(fieldValue1922)
fieldValue1923 = x3d.fieldValue()
fieldValue1923.setName("translation")
fieldValue1923.setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")

ProtoInstance1921.addFieldValue(fieldValue1923)

fieldValue1920.addChildren(ProtoInstance1921)
ProtoInstance1924 = x3d.ProtoInstance()
ProtoInstance1924.setName("Site")
ProtoInstance1924.setDEF("hanim_r_femoral_lateral_epicondyles")
fieldValue1925 = x3d.fieldValue()
fieldValue1925.setName("name")
fieldValue1925.setValue("r_femoral_lateral_epicondyles")

ProtoInstance1924.addFieldValue(fieldValue1925)
fieldValue1926 = x3d.fieldValue()
fieldValue1926.setName("translation")
fieldValue1926.setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052")

ProtoInstance1924.addFieldValue(fieldValue1926)

fieldValue1920.addChildren(ProtoInstance1924)
ProtoInstance1927 = x3d.ProtoInstance()
ProtoInstance1927.setName("Site")
ProtoInstance1927.setDEF("hanim_r_femoral_medial_epicondyles")
fieldValue1928 = x3d.fieldValue()
fieldValue1928.setName("name")
fieldValue1928.setValue("r_femoral_lateral_epicondyles")

ProtoInstance1927.addFieldValue(fieldValue1928)
fieldValue1929 = x3d.fieldValue()
fieldValue1929.setName("translation")
fieldValue1929.setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821")

ProtoInstance1927.addFieldValue(fieldValue1929)

fieldValue1920.addChildren(ProtoInstance1927)

ProtoInstance1918.addFieldValue(fieldValue1920)

fieldValue1841.addChildren(ProtoInstance1918)
ProtoInstance1930 = x3d.ProtoInstance()
ProtoInstance1930.setName("Segment")
ProtoInstance1930.setDEF("hanim_pelvis")
fieldValue1931 = x3d.fieldValue()
fieldValue1931.setName("name")
fieldValue1931.setValue("pelvis")

ProtoInstance1930.addFieldValue(fieldValue1931)

fieldValue1841.addChildren(ProtoInstance1930)
ProtoInstance1932 = x3d.ProtoInstance()
ProtoInstance1932.setName("Segment")
ProtoInstance1932.setDEF("hanim_skull")
fieldValue1933 = x3d.fieldValue()
fieldValue1933.setName("name")
fieldValue1933.setValue("skull")

ProtoInstance1932.addFieldValue(fieldValue1933)
fieldValue1934 = x3d.fieldValue()
fieldValue1934.setName("children")
ProtoInstance1935 = x3d.ProtoInstance()
ProtoInstance1935.setName("Site")
ProtoInstance1935.setDEF("hanim_skull_tip")
fieldValue1936 = x3d.fieldValue()
fieldValue1936.setName("name")
fieldValue1936.setValue("skull_tip")

ProtoInstance1935.addFieldValue(fieldValue1936)
fieldValue1937 = x3d.fieldValue()
fieldValue1937.setName("translation")
fieldValue1937.setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678")

ProtoInstance1935.addFieldValue(fieldValue1937)

fieldValue1934.addChildren(ProtoInstance1935)
ProtoInstance1938 = x3d.ProtoInstance()
ProtoInstance1938.setName("Site")
ProtoInstance1938.setDEF("hanim_sellion")
fieldValue1939 = x3d.fieldValue()
fieldValue1939.setName("name")
fieldValue1939.setValue("sellion")

ProtoInstance1938.addFieldValue(fieldValue1939)
fieldValue1940 = x3d.fieldValue()
fieldValue1940.setName("translation")
fieldValue1940.setValue("0.005799999926239252 1.631600022315979 0.0851999968290329")

ProtoInstance1938.addFieldValue(fieldValue1940)

fieldValue1934.addChildren(ProtoInstance1938)
ProtoInstance1941 = x3d.ProtoInstance()
ProtoInstance1941.setName("Site")
ProtoInstance1941.setDEF("hanim_r_infraorbitale")
fieldValue1942 = x3d.fieldValue()
fieldValue1942.setName("name")
fieldValue1942.setValue("r_infraorbitale")

ProtoInstance1941.addFieldValue(fieldValue1942)
fieldValue1943 = x3d.fieldValue()
fieldValue1943.setName("translation")
fieldValue1943.setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547")

ProtoInstance1941.addFieldValue(fieldValue1943)

fieldValue1934.addChildren(ProtoInstance1941)
ProtoInstance1944 = x3d.ProtoInstance()
ProtoInstance1944.setName("Site")
ProtoInstance1944.setDEF("hanim_l_infraorbitale")
fieldValue1945 = x3d.fieldValue()
fieldValue1945.setName("name")
fieldValue1945.setValue("l_infraorbitale")

ProtoInstance1944.addFieldValue(fieldValue1945)
fieldValue1946 = x3d.fieldValue()
fieldValue1946.setName("translation")
fieldValue1946.setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547")

ProtoInstance1944.addFieldValue(fieldValue1946)

fieldValue1934.addChildren(ProtoInstance1944)
ProtoInstance1947 = x3d.ProtoInstance()
ProtoInstance1947.setName("Site")
ProtoInstance1947.setDEF("hanim_supramenton")
fieldValue1948 = x3d.fieldValue()
fieldValue1948.setName("name")
fieldValue1948.setValue("supramenton")

ProtoInstance1947.addFieldValue(fieldValue1948)
fieldValue1949 = x3d.fieldValue()
fieldValue1949.setName("translation")
fieldValue1949.setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962")

ProtoInstance1947.addFieldValue(fieldValue1949)

fieldValue1934.addChildren(ProtoInstance1947)
ProtoInstance1950 = x3d.ProtoInstance()
ProtoInstance1950.setName("Site")
ProtoInstance1950.setDEF("hanim_r_tragion")
fieldValue1951 = x3d.fieldValue()
fieldValue1951.setName("name")
fieldValue1951.setValue("r_tragion")

ProtoInstance1950.addFieldValue(fieldValue1951)
fieldValue1952 = x3d.fieldValue()
fieldValue1952.setName("translation")
fieldValue1952.setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642")

ProtoInstance1950.addFieldValue(fieldValue1952)

fieldValue1934.addChildren(ProtoInstance1950)
ProtoInstance1953 = x3d.ProtoInstance()
ProtoInstance1953.setName("Site")
ProtoInstance1953.setDEF("hanim_r_gonion")
fieldValue1954 = x3d.fieldValue()
fieldValue1954.setName("name")
fieldValue1954.setValue("r_gonion")

ProtoInstance1953.addFieldValue(fieldValue1954)
fieldValue1955 = x3d.fieldValue()
fieldValue1955.setName("translation")
fieldValue1955.setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176")

ProtoInstance1953.addFieldValue(fieldValue1955)

fieldValue1934.addChildren(ProtoInstance1953)
ProtoInstance1956 = x3d.ProtoInstance()
ProtoInstance1956.setName("Site")
ProtoInstance1956.setDEF("hanim_l_tragion")
fieldValue1957 = x3d.fieldValue()
fieldValue1957.setName("name")
fieldValue1957.setValue("l_tragion")

ProtoInstance1956.addFieldValue(fieldValue1957)
fieldValue1958 = x3d.fieldValue()
fieldValue1958.setName("translation")
fieldValue1958.setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874")

ProtoInstance1956.addFieldValue(fieldValue1958)

fieldValue1934.addChildren(ProtoInstance1956)
ProtoInstance1959 = x3d.ProtoInstance()
ProtoInstance1959.setName("Site")
ProtoInstance1959.setDEF("hanim_l_gonion")
fieldValue1960 = x3d.fieldValue()
fieldValue1960.setName("name")
fieldValue1960.setValue("l_gonion")

ProtoInstance1959.addFieldValue(fieldValue1960)
fieldValue1961 = x3d.fieldValue()
fieldValue1961.setName("translation")
fieldValue1961.setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066")

ProtoInstance1959.addFieldValue(fieldValue1961)

fieldValue1934.addChildren(ProtoInstance1959)
ProtoInstance1962 = x3d.ProtoInstance()
ProtoInstance1962.setName("Site")
ProtoInstance1962.setDEF("hanim_nuchale")
fieldValue1963 = x3d.fieldValue()
fieldValue1963.setName("name")
fieldValue1963.setValue("nuchale")

ProtoInstance1962.addFieldValue(fieldValue1963)
fieldValue1964 = x3d.fieldValue()
fieldValue1964.setName("translation")
fieldValue1964.setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")

ProtoInstance1962.addFieldValue(fieldValue1964)

fieldValue1934.addChildren(ProtoInstance1962)

ProtoInstance1932.addFieldValue(fieldValue1934)

fieldValue1841.addChildren(ProtoInstance1932)
ProtoInstance1965 = x3d.ProtoInstance()
ProtoInstance1965.setName("Segment")
ProtoInstance1965.setDEF("hanim_l_hand")
fieldValue1966 = x3d.fieldValue()
fieldValue1966.setName("name")
fieldValue1966.setValue("l_hand")

ProtoInstance1965.addFieldValue(fieldValue1966)
fieldValue1967 = x3d.fieldValue()
fieldValue1967.setName("children")
ProtoInstance1968 = x3d.ProtoInstance()
ProtoInstance1968.setName("Site")
ProtoInstance1968.setDEF("hanim_l_hand_tip")
fieldValue1969 = x3d.fieldValue()
fieldValue1969.setName("name")
fieldValue1969.setValue("l_hand_tip")

ProtoInstance1968.addFieldValue(fieldValue1969)
fieldValue1970 = x3d.fieldValue()
fieldValue1970.setName("translation")
fieldValue1970.setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205")

ProtoInstance1968.addFieldValue(fieldValue1970)

fieldValue1967.addChildren(ProtoInstance1968)
ProtoInstance1971 = x3d.ProtoInstance()
ProtoInstance1971.setName("Site")
ProtoInstance1971.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue1972 = x3d.fieldValue()
fieldValue1972.setName("name")
fieldValue1972.setValue("l_metacarpal_phalanx_2")

ProtoInstance1971.addFieldValue(fieldValue1972)
fieldValue1973 = x3d.fieldValue()
fieldValue1973.setName("translation")
fieldValue1973.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance1971.addFieldValue(fieldValue1973)

fieldValue1967.addChildren(ProtoInstance1971)
ProtoInstance1974 = x3d.ProtoInstance()
ProtoInstance1974.setName("Site")
ProtoInstance1974.setDEF("hanim_l_dactylion")
fieldValue1975 = x3d.fieldValue()
fieldValue1975.setName("name")
fieldValue1975.setValue("l_dactylion")

ProtoInstance1974.addFieldValue(fieldValue1975)
fieldValue1976 = x3d.fieldValue()
fieldValue1976.setName("translation")
fieldValue1976.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance1974.addFieldValue(fieldValue1976)

fieldValue1967.addChildren(ProtoInstance1974)
ProtoInstance1977 = x3d.ProtoInstance()
ProtoInstance1977.setName("Site")
ProtoInstance1977.setDEF("hanim_l_ulnar_styloid")
fieldValue1978 = x3d.fieldValue()
fieldValue1978.setName("name")
fieldValue1978.setValue("l_ulnar_styloid")

ProtoInstance1977.addFieldValue(fieldValue1978)
fieldValue1979 = x3d.fieldValue()
fieldValue1979.setName("translation")
fieldValue1979.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance1977.addFieldValue(fieldValue1979)

fieldValue1967.addChildren(ProtoInstance1977)
ProtoInstance1980 = x3d.ProtoInstance()
ProtoInstance1980.setName("Site")
ProtoInstance1980.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue1981 = x3d.fieldValue()
fieldValue1981.setName("name")
fieldValue1981.setValue("l_metacarpal_phalanx_5")

ProtoInstance1980.addFieldValue(fieldValue1981)
fieldValue1982 = x3d.fieldValue()
fieldValue1982.setName("translation")
fieldValue1982.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance1980.addFieldValue(fieldValue1982)

fieldValue1967.addChildren(ProtoInstance1980)

ProtoInstance1965.addFieldValue(fieldValue1967)

fieldValue1841.addChildren(ProtoInstance1965)
ProtoInstance1983 = x3d.ProtoInstance()
ProtoInstance1983.setName("Segment")
ProtoInstance1983.setDEF("hanim_l_forearm")
fieldValue1984 = x3d.fieldValue()
fieldValue1984.setName("name")
fieldValue1984.setValue("l_forearm")

ProtoInstance1983.addFieldValue(fieldValue1984)
fieldValue1985 = x3d.fieldValue()
fieldValue1985.setName("children")
ProtoInstance1986 = x3d.ProtoInstance()
ProtoInstance1986.setName("Site")
ProtoInstance1986.setDEF("hanim_l_radial_styloid")
fieldValue1987 = x3d.fieldValue()
fieldValue1987.setName("name")
fieldValue1987.setValue("l_radial_styloid")

ProtoInstance1986.addFieldValue(fieldValue1987)
fieldValue1988 = x3d.fieldValue()
fieldValue1988.setName("translation")
fieldValue1988.setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691")

ProtoInstance1986.addFieldValue(fieldValue1988)

fieldValue1985.addChildren(ProtoInstance1986)
ProtoInstance1989 = x3d.ProtoInstance()
ProtoInstance1989.setName("Site")
ProtoInstance1989.setDEF("hanim_l_olecranon")
fieldValue1990 = x3d.fieldValue()
fieldValue1990.setName("name")
fieldValue1990.setValue("l_olecranon")

ProtoInstance1989.addFieldValue(fieldValue1990)
fieldValue1991 = x3d.fieldValue()
fieldValue1991.setName("translation")
fieldValue1991.setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")

ProtoInstance1989.addFieldValue(fieldValue1991)

fieldValue1985.addChildren(ProtoInstance1989)
ProtoInstance1992 = x3d.ProtoInstance()
ProtoInstance1992.setName("Site")
ProtoInstance1992.setDEF("hanim_l_humeral_medial_epicondyles")
fieldValue1993 = x3d.fieldValue()
fieldValue1993.setName("name")
fieldValue1993.setValue("l_humeral_medial_epicondyles")

ProtoInstance1992.addFieldValue(fieldValue1993)
fieldValue1994 = x3d.fieldValue()
fieldValue1994.setName("translation")
fieldValue1994.setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661")

ProtoInstance1992.addFieldValue(fieldValue1994)

fieldValue1985.addChildren(ProtoInstance1992)
ProtoInstance1995 = x3d.ProtoInstance()
ProtoInstance1995.setName("Site")
ProtoInstance1995.setDEF("hanim_l_radiale")
fieldValue1996 = x3d.fieldValue()
fieldValue1996.setName("name")
fieldValue1996.setValue("l_radiale")

ProtoInstance1995.addFieldValue(fieldValue1996)
fieldValue1997 = x3d.fieldValue()
fieldValue1997.setName("translation")
fieldValue1997.setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268")

ProtoInstance1995.addFieldValue(fieldValue1997)

fieldValue1985.addChildren(ProtoInstance1995)

ProtoInstance1983.addFieldValue(fieldValue1985)

fieldValue1841.addChildren(ProtoInstance1983)
ProtoInstance1998 = x3d.ProtoInstance()
ProtoInstance1998.setName("Segment")
ProtoInstance1998.setDEF("hanim_l_upperarm")
fieldValue1999 = x3d.fieldValue()
fieldValue1999.setName("name")
fieldValue1999.setValue("l_upperarm")

ProtoInstance1998.addFieldValue(fieldValue1999)
fieldValue2000 = x3d.fieldValue()
fieldValue2000.setName("children")
ProtoInstance2001 = x3d.ProtoInstance()
ProtoInstance2001.setName("Site")
ProtoInstance2001.setDEF("hanim_l_humeral_lateral_epicondyles")
fieldValue2002 = x3d.fieldValue()
fieldValue2002.setName("name")
fieldValue2002.setValue("l_humeral_lateral_epicondyles")

ProtoInstance2001.addFieldValue(fieldValue2002)
fieldValue2003 = x3d.fieldValue()
fieldValue2003.setName("translation")
fieldValue2003.setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355")

ProtoInstance2001.addFieldValue(fieldValue2003)

fieldValue2000.addChildren(ProtoInstance2001)

ProtoInstance1998.addFieldValue(fieldValue2000)

fieldValue1841.addChildren(ProtoInstance1998)
ProtoInstance2004 = x3d.ProtoInstance()
ProtoInstance2004.setName("Segment")
ProtoInstance2004.setDEF("hanim_r_hand")
fieldValue2005 = x3d.fieldValue()
fieldValue2005.setName("name")
fieldValue2005.setValue("r_hand")

ProtoInstance2004.addFieldValue(fieldValue2005)
fieldValue2006 = x3d.fieldValue()
fieldValue2006.setName("children")
ProtoInstance2007 = x3d.ProtoInstance()
ProtoInstance2007.setName("Site")
ProtoInstance2007.setDEF("hanim_r_hand_tip")
fieldValue2008 = x3d.fieldValue()
fieldValue2008.setName("name")
fieldValue2008.setValue("r_hand_tip")

ProtoInstance2007.addFieldValue(fieldValue2008)
fieldValue2009 = x3d.fieldValue()
fieldValue2009.setName("translation")
fieldValue2009.setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")

ProtoInstance2007.addFieldValue(fieldValue2009)

fieldValue2006.addChildren(ProtoInstance2007)
ProtoInstance2010 = x3d.ProtoInstance()
ProtoInstance2010.setName("Site")
ProtoInstance2010.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue2011 = x3d.fieldValue()
fieldValue2011.setName("name")
fieldValue2011.setValue("r_metacarpal_phalanx_2")

ProtoInstance2010.addFieldValue(fieldValue2011)
fieldValue2012 = x3d.fieldValue()
fieldValue2012.setName("translation")
fieldValue2012.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance2010.addFieldValue(fieldValue2012)

fieldValue2006.addChildren(ProtoInstance2010)
ProtoInstance2013 = x3d.ProtoInstance()
ProtoInstance2013.setName("Site")
ProtoInstance2013.setDEF("hanim_r_dactylion")
fieldValue2014 = x3d.fieldValue()
fieldValue2014.setName("name")
fieldValue2014.setValue("r_dactylion")

ProtoInstance2013.addFieldValue(fieldValue2014)
fieldValue2015 = x3d.fieldValue()
fieldValue2015.setName("translation")
fieldValue2015.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance2013.addFieldValue(fieldValue2015)

fieldValue2006.addChildren(ProtoInstance2013)
ProtoInstance2016 = x3d.ProtoInstance()
ProtoInstance2016.setName("Site")
ProtoInstance2016.setDEF("hanim_r_ulnar_styloid")
fieldValue2017 = x3d.fieldValue()
fieldValue2017.setName("name")
fieldValue2017.setValue("r_ulnar_styloid")

ProtoInstance2016.addFieldValue(fieldValue2017)
fieldValue2018 = x3d.fieldValue()
fieldValue2018.setName("translation")
fieldValue2018.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance2016.addFieldValue(fieldValue2018)

fieldValue2006.addChildren(ProtoInstance2016)
ProtoInstance2019 = x3d.ProtoInstance()
ProtoInstance2019.setName("Site")
ProtoInstance2019.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue2020 = x3d.fieldValue()
fieldValue2020.setName("name")
fieldValue2020.setValue("r_metacarpal_phalanx_5")

ProtoInstance2019.addFieldValue(fieldValue2020)
fieldValue2021 = x3d.fieldValue()
fieldValue2021.setName("translation")
fieldValue2021.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance2019.addFieldValue(fieldValue2021)

fieldValue2006.addChildren(ProtoInstance2019)

ProtoInstance2004.addFieldValue(fieldValue2006)

fieldValue1841.addChildren(ProtoInstance2004)
ProtoInstance2022 = x3d.ProtoInstance()
ProtoInstance2022.setName("Segment")
ProtoInstance2022.setDEF("hanim_r_forearm")
fieldValue2023 = x3d.fieldValue()
fieldValue2023.setName("name")
fieldValue2023.setValue("r_forearm")

ProtoInstance2022.addFieldValue(fieldValue2023)
fieldValue2024 = x3d.fieldValue()
fieldValue2024.setName("children")
ProtoInstance2025 = x3d.ProtoInstance()
ProtoInstance2025.setName("Site")
ProtoInstance2025.setDEF("hanim_r_radial_styloid")
fieldValue2026 = x3d.fieldValue()
fieldValue2026.setName("name")
fieldValue2026.setValue("r_radial_styloid")

ProtoInstance2025.addFieldValue(fieldValue2026)
fieldValue2027 = x3d.fieldValue()
fieldValue2027.setName("translation")
fieldValue2027.setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236")

ProtoInstance2025.addFieldValue(fieldValue2027)

fieldValue2024.addChildren(ProtoInstance2025)
ProtoInstance2028 = x3d.ProtoInstance()
ProtoInstance2028.setName("Site")
ProtoInstance2028.setDEF("hanim_r_olecranon")
fieldValue2029 = x3d.fieldValue()
fieldValue2029.setName("name")
fieldValue2029.setValue("r_olecranon")

ProtoInstance2028.addFieldValue(fieldValue2029)
fieldValue2030 = x3d.fieldValue()
fieldValue2030.setName("translation")
fieldValue2030.setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")

ProtoInstance2028.addFieldValue(fieldValue2030)

fieldValue2024.addChildren(ProtoInstance2028)
ProtoInstance2031 = x3d.ProtoInstance()
ProtoInstance2031.setName("Site")
ProtoInstance2031.setDEF("hanim_r_humeral_medial_epicondyles")
fieldValue2032 = x3d.fieldValue()
fieldValue2032.setName("name")
fieldValue2032.setValue("r_humeral_medial_epicondyles")

ProtoInstance2031.addFieldValue(fieldValue2032)
fieldValue2033 = x3d.fieldValue()
fieldValue2033.setName("translation")
fieldValue2033.setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")

ProtoInstance2031.addFieldValue(fieldValue2033)

fieldValue2024.addChildren(ProtoInstance2031)
ProtoInstance2034 = x3d.ProtoInstance()
ProtoInstance2034.setName("Site")
ProtoInstance2034.setDEF("hanim_r_radiale")
fieldValue2035 = x3d.fieldValue()
fieldValue2035.setName("name")
fieldValue2035.setValue("r_radiale")

ProtoInstance2034.addFieldValue(fieldValue2035)
fieldValue2036 = x3d.fieldValue()
fieldValue2036.setName("translation")
fieldValue2036.setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")

ProtoInstance2034.addFieldValue(fieldValue2036)

fieldValue2024.addChildren(ProtoInstance2034)

ProtoInstance2022.addFieldValue(fieldValue2024)

fieldValue1841.addChildren(ProtoInstance2022)
ProtoInstance2037 = x3d.ProtoInstance()
ProtoInstance2037.setName("Segment")
ProtoInstance2037.setDEF("hanim_r_upperarm")
fieldValue2038 = x3d.fieldValue()
fieldValue2038.setName("name")
fieldValue2038.setValue("r_upperarm")

ProtoInstance2037.addFieldValue(fieldValue2038)
fieldValue2039 = x3d.fieldValue()
fieldValue2039.setName("children")
ProtoInstance2040 = x3d.ProtoInstance()
ProtoInstance2040.setName("Site")
ProtoInstance2040.setDEF("hanim_r_humeral_lateral_epicondyles")
fieldValue2041 = x3d.fieldValue()
fieldValue2041.setName("name")
fieldValue2041.setValue("r_humeral_lateral_epicondyles")

ProtoInstance2040.addFieldValue(fieldValue2041)
fieldValue2042 = x3d.fieldValue()
fieldValue2042.setName("translation")
fieldValue2042.setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")

ProtoInstance2040.addFieldValue(fieldValue2042)

fieldValue2039.addChildren(ProtoInstance2040)

ProtoInstance2037.addFieldValue(fieldValue2039)

fieldValue1841.addChildren(ProtoInstance2037)
ProtoInstance2043 = x3d.ProtoInstance()
ProtoInstance2043.setName("Segment")
ProtoInstance2043.setDEF("hanim_l5")
fieldValue2044 = x3d.fieldValue()
fieldValue2044.setName("name")
fieldValue2044.setValue("l5")

ProtoInstance2043.addFieldValue(fieldValue2044)
fieldValue2045 = x3d.fieldValue()
fieldValue2045.setName("children")
ProtoInstance2046 = x3d.ProtoInstance()
ProtoInstance2046.setName("Site")
ProtoInstance2046.setDEF("hanim_r_clavicale")
fieldValue2047 = x3d.fieldValue()
fieldValue2047.setName("name")
fieldValue2047.setValue("r_clavicale")

ProtoInstance2046.addFieldValue(fieldValue2047)
fieldValue2048 = x3d.fieldValue()
fieldValue2048.setName("translation")
fieldValue2048.setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033")

ProtoInstance2046.addFieldValue(fieldValue2048)

fieldValue2045.addChildren(ProtoInstance2046)
ProtoInstance2049 = x3d.ProtoInstance()
ProtoInstance2049.setName("Site")
ProtoInstance2049.setDEF("hanim_suprasternale")
fieldValue2050 = x3d.fieldValue()
fieldValue2050.setName("name")
fieldValue2050.setValue("suprasternale")

ProtoInstance2049.addFieldValue(fieldValue2050)
fieldValue2051 = x3d.fieldValue()
fieldValue2051.setName("translation")
fieldValue2051.setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869")

ProtoInstance2049.addFieldValue(fieldValue2051)

fieldValue2045.addChildren(ProtoInstance2049)
ProtoInstance2052 = x3d.ProtoInstance()
ProtoInstance2052.setName("Site")
ProtoInstance2052.setDEF("hanim_l_clavicale")
fieldValue2053 = x3d.fieldValue()
fieldValue2053.setName("name")
fieldValue2053.setValue("l_clavicale")

ProtoInstance2052.addFieldValue(fieldValue2053)
fieldValue2054 = x3d.fieldValue()
fieldValue2054.setName("translation")
fieldValue2054.setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754")

ProtoInstance2052.addFieldValue(fieldValue2054)

fieldValue2045.addChildren(ProtoInstance2052)
ProtoInstance2055 = x3d.ProtoInstance()
ProtoInstance2055.setName("Site")
ProtoInstance2055.setDEF("hanim_r_thelion")
fieldValue2056 = x3d.fieldValue()
fieldValue2056.setName("name")
fieldValue2056.setValue("r_thelion")

ProtoInstance2055.addFieldValue(fieldValue2056)
fieldValue2057 = x3d.fieldValue()
fieldValue2057.setName("translation")
fieldValue2057.setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911")

ProtoInstance2055.addFieldValue(fieldValue2057)

fieldValue2045.addChildren(ProtoInstance2055)
ProtoInstance2058 = x3d.ProtoInstance()
ProtoInstance2058.setName("Site")
ProtoInstance2058.setDEF("hanim_l_thelion")
fieldValue2059 = x3d.fieldValue()
fieldValue2059.setName("name")
fieldValue2059.setValue("l_thelion")

ProtoInstance2058.addFieldValue(fieldValue2059)
fieldValue2060 = x3d.fieldValue()
fieldValue2060.setName("translation")
fieldValue2060.setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689")

ProtoInstance2058.addFieldValue(fieldValue2060)

fieldValue2045.addChildren(ProtoInstance2058)
ProtoInstance2061 = x3d.ProtoInstance()
ProtoInstance2061.setName("Site")
ProtoInstance2061.setDEF("hanim_substernale")
fieldValue2062 = x3d.fieldValue()
fieldValue2062.setName("name")
fieldValue2062.setValue("substernale")

ProtoInstance2061.addFieldValue(fieldValue2062)
fieldValue2063 = x3d.fieldValue()
fieldValue2063.setName("translation")
fieldValue2063.setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683")

ProtoInstance2061.addFieldValue(fieldValue2063)

fieldValue2045.addChildren(ProtoInstance2061)
ProtoInstance2064 = x3d.ProtoInstance()
ProtoInstance2064.setName("Site")
ProtoInstance2064.setDEF("hanim_r_rib10")
fieldValue2065 = x3d.fieldValue()
fieldValue2065.setName("name")
fieldValue2065.setValue("r_rib10")

ProtoInstance2064.addFieldValue(fieldValue2065)
fieldValue2066 = x3d.fieldValue()
fieldValue2066.setName("translation")
fieldValue2066.setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432")

ProtoInstance2064.addFieldValue(fieldValue2066)

fieldValue2045.addChildren(ProtoInstance2064)
ProtoInstance2067 = x3d.ProtoInstance()
ProtoInstance2067.setName("Site")
ProtoInstance2067.setDEF("hanim_l_rib10")
fieldValue2068 = x3d.fieldValue()
fieldValue2068.setName("name")
fieldValue2068.setValue("l_rib10")

ProtoInstance2067.addFieldValue(fieldValue2068)
fieldValue2069 = x3d.fieldValue()
fieldValue2069.setName("translation")
fieldValue2069.setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202")

ProtoInstance2067.addFieldValue(fieldValue2069)

fieldValue2045.addChildren(ProtoInstance2067)
ProtoInstance2070 = x3d.ProtoInstance()
ProtoInstance2070.setName("Site")
ProtoInstance2070.setDEF("hanim_cervicale")
fieldValue2071 = x3d.fieldValue()
fieldValue2071.setName("name")
fieldValue2071.setValue("cervicale")

ProtoInstance2070.addFieldValue(fieldValue2071)
fieldValue2072 = x3d.fieldValue()
fieldValue2072.setName("translation")
fieldValue2072.setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754")

ProtoInstance2070.addFieldValue(fieldValue2072)

fieldValue2045.addChildren(ProtoInstance2070)
ProtoInstance2073 = x3d.ProtoInstance()
ProtoInstance2073.setName("Site")
ProtoInstance2073.setDEF("hanim_spine_2_lower_back")
fieldValue2074 = x3d.fieldValue()
fieldValue2074.setName("name")
fieldValue2074.setValue("spine_2_lower_back")

ProtoInstance2073.addFieldValue(fieldValue2074)
fieldValue2075 = x3d.fieldValue()
fieldValue2075.setName("translation")
fieldValue2075.setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661")

ProtoInstance2073.addFieldValue(fieldValue2075)

fieldValue2045.addChildren(ProtoInstance2073)
ProtoInstance2076 = x3d.ProtoInstance()
ProtoInstance2076.setName("Site")
ProtoInstance2076.setDEF("hanim_waist_preferred_posterior")
fieldValue2077 = x3d.fieldValue()
fieldValue2077.setName("name")
fieldValue2077.setValue("waist_preferred_posterior")

ProtoInstance2076.addFieldValue(fieldValue2077)
fieldValue2078 = x3d.fieldValue()
fieldValue2078.setName("translation")
fieldValue2078.setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754")

ProtoInstance2076.addFieldValue(fieldValue2078)

fieldValue2045.addChildren(ProtoInstance2076)
ProtoInstance2079 = x3d.ProtoInstance()
ProtoInstance2079.setName("Site")
ProtoInstance2079.setDEF("hanim_r_acromion")
fieldValue2080 = x3d.fieldValue()
fieldValue2080.setName("name")
fieldValue2080.setValue("r_acromion")

ProtoInstance2079.addFieldValue(fieldValue2080)
fieldValue2081 = x3d.fieldValue()
fieldValue2081.setName("translation")
fieldValue2081.setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541")

ProtoInstance2079.addFieldValue(fieldValue2081)

fieldValue2045.addChildren(ProtoInstance2079)
ProtoInstance2082 = x3d.ProtoInstance()
ProtoInstance2082.setName("Site")
ProtoInstance2082.setDEF("hanim_r_axilla_proximal")
fieldValue2083 = x3d.fieldValue()
fieldValue2083.setName("name")
fieldValue2083.setValue("r_axilla_proximal")

ProtoInstance2082.addFieldValue(fieldValue2083)
fieldValue2084 = x3d.fieldValue()
fieldValue2084.setName("translation")
fieldValue2084.setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438")

ProtoInstance2082.addFieldValue(fieldValue2084)

fieldValue2045.addChildren(ProtoInstance2082)
ProtoInstance2085 = x3d.ProtoInstance()
ProtoInstance2085.setName("Site")
ProtoInstance2085.setDEF("hanim_r_axilla_distal")
fieldValue2086 = x3d.fieldValue()
fieldValue2086.setName("name")
fieldValue2086.setValue("r_axilla_distal")

ProtoInstance2085.addFieldValue(fieldValue2086)
fieldValue2087 = x3d.fieldValue()
fieldValue2087.setName("translation")
fieldValue2087.setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678")

ProtoInstance2085.addFieldValue(fieldValue2087)

fieldValue2045.addChildren(ProtoInstance2085)
ProtoInstance2088 = x3d.ProtoInstance()
ProtoInstance2088.setName("Site")
ProtoInstance2088.setDEF("hanim_l_acromion")
fieldValue2089 = x3d.fieldValue()
fieldValue2089.setName("name")
fieldValue2089.setValue("l_acromion")

ProtoInstance2088.addFieldValue(fieldValue2089)
fieldValue2090 = x3d.fieldValue()
fieldValue2090.setName("translation")
fieldValue2090.setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014")

ProtoInstance2088.addFieldValue(fieldValue2090)

fieldValue2045.addChildren(ProtoInstance2088)
ProtoInstance2091 = x3d.ProtoInstance()
ProtoInstance2091.setName("Site")
ProtoInstance2091.setDEF("hanim_l_axilla_proximal")
fieldValue2092 = x3d.fieldValue()
fieldValue2092.setName("name")
fieldValue2092.setValue("l_axilla_proximal")

ProtoInstance2091.addFieldValue(fieldValue2092)
fieldValue2093 = x3d.fieldValue()
fieldValue2093.setName("translation")
fieldValue2093.setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937")

ProtoInstance2091.addFieldValue(fieldValue2093)

fieldValue2045.addChildren(ProtoInstance2091)
ProtoInstance2094 = x3d.ProtoInstance()
ProtoInstance2094.setName("Site")
ProtoInstance2094.setDEF("hanim_l_axilla_distal")
fieldValue2095 = x3d.fieldValue()
fieldValue2095.setName("name")
fieldValue2095.setValue("l_axilla_distal")

ProtoInstance2094.addFieldValue(fieldValue2095)
fieldValue2096 = x3d.fieldValue()
fieldValue2096.setName("translation")
fieldValue2096.setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388")

ProtoInstance2094.addFieldValue(fieldValue2096)

fieldValue2045.addChildren(ProtoInstance2094)
ProtoInstance2097 = x3d.ProtoInstance()
ProtoInstance2097.setName("Site")
ProtoInstance2097.setDEF("hanim_r_neck_base")
fieldValue2098 = x3d.fieldValue()
fieldValue2098.setName("name")
fieldValue2098.setValue("r_neck_base")

ProtoInstance2097.addFieldValue(fieldValue2098)
fieldValue2099 = x3d.fieldValue()
fieldValue2099.setName("translation")
fieldValue2099.setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071")

ProtoInstance2097.addFieldValue(fieldValue2099)

fieldValue2045.addChildren(ProtoInstance2097)
ProtoInstance2100 = x3d.ProtoInstance()
ProtoInstance2100.setName("Site")
ProtoInstance2100.setDEF("hanim_l_neck_base")
fieldValue2101 = x3d.fieldValue()
fieldValue2101.setName("name")
fieldValue2101.setValue("l_neck_base")

ProtoInstance2100.addFieldValue(fieldValue2101)
fieldValue2102 = x3d.fieldValue()
fieldValue2102.setName("translation")
fieldValue2102.setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478")

ProtoInstance2100.addFieldValue(fieldValue2102)

fieldValue2045.addChildren(ProtoInstance2100)
ProtoInstance2103 = x3d.ProtoInstance()
ProtoInstance2103.setName("Site")
ProtoInstance2103.setDEF("hanim_navel")
fieldValue2104 = x3d.fieldValue()
fieldValue2104.setName("name")
fieldValue2104.setValue("navel")

ProtoInstance2103.addFieldValue(fieldValue2104)
fieldValue2105 = x3d.fieldValue()
fieldValue2105.setName("translation")
fieldValue2105.setValue("0.006899999920278788 1.09660005569458 0.10170000046491623")

ProtoInstance2103.addFieldValue(fieldValue2105)

fieldValue2045.addChildren(ProtoInstance2103)

ProtoInstance2043.addFieldValue(fieldValue2045)

fieldValue1841.addChildren(ProtoInstance2043)
ProtoInstance2106 = x3d.ProtoInstance()
ProtoInstance2106.setName("Segment")
ProtoInstance2106.setDEF("hanim_sacrum")
fieldValue2107 = x3d.fieldValue()
fieldValue2107.setName("name")
fieldValue2107.setValue("sacrum")

ProtoInstance2106.addFieldValue(fieldValue2107)
fieldValue2108 = x3d.fieldValue()
fieldValue2108.setName("children")
ProtoInstance2109 = x3d.ProtoInstance()
ProtoInstance2109.setName("Site")
ProtoInstance2109.setDEF("hanim_r_asis")
fieldValue2110 = x3d.fieldValue()
fieldValue2110.setName("name")
fieldValue2110.setValue("r_asis")

ProtoInstance2109.addFieldValue(fieldValue2110)
fieldValue2111 = x3d.fieldValue()
fieldValue2111.setName("translation")
fieldValue2111.setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747")

ProtoInstance2109.addFieldValue(fieldValue2111)

fieldValue2108.addChildren(ProtoInstance2109)
ProtoInstance2112 = x3d.ProtoInstance()
ProtoInstance2112.setName("Site")
ProtoInstance2112.setDEF("hanim_l_asis")
fieldValue2113 = x3d.fieldValue()
fieldValue2113.setName("name")
fieldValue2113.setValue("l_asis")

ProtoInstance2112.addFieldValue(fieldValue2113)
fieldValue2114 = x3d.fieldValue()
fieldValue2114.setName("translation")
fieldValue2114.setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836")

ProtoInstance2112.addFieldValue(fieldValue2114)

fieldValue2108.addChildren(ProtoInstance2112)
ProtoInstance2115 = x3d.ProtoInstance()
ProtoInstance2115.setName("Site")
ProtoInstance2115.setDEF("hanim_r_iliocristale")
fieldValue2116 = x3d.fieldValue()
fieldValue2116.setName("name")
fieldValue2116.setValue("r_iliocristale")

ProtoInstance2115.addFieldValue(fieldValue2116)
fieldValue2117 = x3d.fieldValue()
fieldValue2117.setName("translation")
fieldValue2117.setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187")

ProtoInstance2115.addFieldValue(fieldValue2117)

fieldValue2108.addChildren(ProtoInstance2115)
ProtoInstance2118 = x3d.ProtoInstance()
ProtoInstance2118.setName("Site")
ProtoInstance2118.setDEF("hanim_r_trochanterion")
fieldValue2119 = x3d.fieldValue()
fieldValue2119.setName("name")
fieldValue2119.setValue("r_trochanterion")

ProtoInstance2118.addFieldValue(fieldValue2119)
fieldValue2120 = x3d.fieldValue()
fieldValue2120.setName("translation")
fieldValue2120.setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514")

ProtoInstance2118.addFieldValue(fieldValue2120)

fieldValue2108.addChildren(ProtoInstance2118)
ProtoInstance2121 = x3d.ProtoInstance()
ProtoInstance2121.setName("Site")
ProtoInstance2121.setDEF("hanim_l_iliocristale")
fieldValue2122 = x3d.fieldValue()
fieldValue2122.setName("name")
fieldValue2122.setValue("l_iliocristale")

ProtoInstance2121.addFieldValue(fieldValue2122)
fieldValue2123 = x3d.fieldValue()
fieldValue2123.setName("translation")
fieldValue2123.setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001")

ProtoInstance2121.addFieldValue(fieldValue2123)

fieldValue2108.addChildren(ProtoInstance2121)
ProtoInstance2124 = x3d.ProtoInstance()
ProtoInstance2124.setName("Site")
ProtoInstance2124.setDEF("hanim_l_trochanterion")
fieldValue2125 = x3d.fieldValue()
fieldValue2125.setName("name")
fieldValue2125.setValue("l_trochanterion")

ProtoInstance2124.addFieldValue(fieldValue2125)
fieldValue2126 = x3d.fieldValue()
fieldValue2126.setName("translation")
fieldValue2126.setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183")

ProtoInstance2124.addFieldValue(fieldValue2126)

fieldValue2108.addChildren(ProtoInstance2124)
ProtoInstance2127 = x3d.ProtoInstance()
ProtoInstance2127.setName("Site")
ProtoInstance2127.setDEF("hanim_r_psis")
fieldValue2128 = x3d.fieldValue()
fieldValue2128.setName("name")
fieldValue2128.setValue("r_psis")

ProtoInstance2127.addFieldValue(fieldValue2128)
fieldValue2129 = x3d.fieldValue()
fieldValue2129.setName("translation")
fieldValue2129.setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082")

ProtoInstance2127.addFieldValue(fieldValue2129)

fieldValue2108.addChildren(ProtoInstance2127)
ProtoInstance2130 = x3d.ProtoInstance()
ProtoInstance2130.setName("Site")
ProtoInstance2130.setDEF("hanim_l_psis")
fieldValue2131 = x3d.fieldValue()
fieldValue2131.setName("name")
fieldValue2131.setValue("l_psis")

ProtoInstance2130.addFieldValue(fieldValue2131)
fieldValue2132 = x3d.fieldValue()
fieldValue2132.setName("translation")
fieldValue2132.setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388")

ProtoInstance2130.addFieldValue(fieldValue2132)

fieldValue2108.addChildren(ProtoInstance2130)
ProtoInstance2133 = x3d.ProtoInstance()
ProtoInstance2133.setName("Site")
ProtoInstance2133.setDEF("hanim_crotch")
fieldValue2134 = x3d.fieldValue()
fieldValue2134.setName("name")
fieldValue2134.setValue("crotch")

ProtoInstance2133.addFieldValue(fieldValue2134)
fieldValue2135 = x3d.fieldValue()
fieldValue2135.setName("translation")
fieldValue2135.setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367")

ProtoInstance2133.addFieldValue(fieldValue2135)

fieldValue2108.addChildren(ProtoInstance2133)

ProtoInstance2106.addFieldValue(fieldValue2108)

fieldValue1841.addChildren(ProtoInstance2106)

ProtoInstance101.addFieldValue(fieldValue1841)
fieldValue2136 = x3d.fieldValue()
fieldValue2136.setName("sites")
ProtoInstance2137 = x3d.ProtoInstance()
ProtoInstance2137.setName("Site")
ProtoInstance2137.setDEF("hanim_l_middistal_tip")
fieldValue2138 = x3d.fieldValue()
fieldValue2138.setName("name")
fieldValue2138.setValue("l_middistal_tip")

ProtoInstance2137.addFieldValue(fieldValue2138)
fieldValue2139 = x3d.fieldValue()
fieldValue2139.setName("translation")
fieldValue2139.setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261")

ProtoInstance2137.addFieldValue(fieldValue2139)

fieldValue2136.addChildren(ProtoInstance2137)
ProtoInstance2140 = x3d.ProtoInstance()
ProtoInstance2140.setName("Site")
ProtoInstance2140.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue2141 = x3d.fieldValue()
fieldValue2141.setName("name")
fieldValue2141.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance2140.addFieldValue(fieldValue2141)
fieldValue2142 = x3d.fieldValue()
fieldValue2142.setName("translation")
fieldValue2142.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance2140.addFieldValue(fieldValue2142)

fieldValue2136.addChildren(ProtoInstance2140)
ProtoInstance2143 = x3d.ProtoInstance()
ProtoInstance2143.setName("Site")
ProtoInstance2143.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue2144 = x3d.fieldValue()
fieldValue2144.setName("name")
fieldValue2144.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance2143.addFieldValue(fieldValue2144)
fieldValue2145 = x3d.fieldValue()
fieldValue2145.setName("translation")
fieldValue2145.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance2143.addFieldValue(fieldValue2145)

fieldValue2136.addChildren(ProtoInstance2143)
ProtoInstance2146 = x3d.ProtoInstance()
ProtoInstance2146.setName("Site")
ProtoInstance2146.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue2147 = x3d.fieldValue()
fieldValue2147.setName("name")
fieldValue2147.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance2146.addFieldValue(fieldValue2147)
fieldValue2148 = x3d.fieldValue()
fieldValue2148.setName("translation")
fieldValue2148.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance2146.addFieldValue(fieldValue2148)

fieldValue2136.addChildren(ProtoInstance2146)
ProtoInstance2149 = x3d.ProtoInstance()
ProtoInstance2149.setName("Site")
ProtoInstance2149.setDEF("hanim_l_lateral_malleolus")
fieldValue2150 = x3d.fieldValue()
fieldValue2150.setName("name")
fieldValue2150.setValue("l_lateral_malleolus")

ProtoInstance2149.addFieldValue(fieldValue2150)
fieldValue2151 = x3d.fieldValue()
fieldValue2151.setName("translation")
fieldValue2151.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance2149.addFieldValue(fieldValue2151)

fieldValue2136.addChildren(ProtoInstance2149)
ProtoInstance2152 = x3d.ProtoInstance()
ProtoInstance2152.setName("Site")
ProtoInstance2152.setDEF("hanim_l_medial_malleolus")
fieldValue2153 = x3d.fieldValue()
fieldValue2153.setName("name")
fieldValue2153.setValue("l_medial_malleolus")

ProtoInstance2152.addFieldValue(fieldValue2153)
fieldValue2154 = x3d.fieldValue()
fieldValue2154.setName("translation")
fieldValue2154.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance2152.addFieldValue(fieldValue2154)

fieldValue2136.addChildren(ProtoInstance2152)
ProtoInstance2155 = x3d.ProtoInstance()
ProtoInstance2155.setName("Site")
ProtoInstance2155.setDEF("hanim_l_sphyrion")
fieldValue2156 = x3d.fieldValue()
fieldValue2156.setName("name")
fieldValue2156.setValue("l_sphyrion")

ProtoInstance2155.addFieldValue(fieldValue2156)
fieldValue2157 = x3d.fieldValue()
fieldValue2157.setName("translation")
fieldValue2157.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance2155.addFieldValue(fieldValue2157)

fieldValue2136.addChildren(ProtoInstance2155)
ProtoInstance2158 = x3d.ProtoInstance()
ProtoInstance2158.setName("Site")
ProtoInstance2158.setDEF("hanim_l_calcaneus_posterior")
fieldValue2159 = x3d.fieldValue()
fieldValue2159.setName("name")
fieldValue2159.setValue("l_calcaneus_posterior")

ProtoInstance2158.addFieldValue(fieldValue2159)
fieldValue2160 = x3d.fieldValue()
fieldValue2160.setName("translation")
fieldValue2160.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance2158.addFieldValue(fieldValue2160)

fieldValue2136.addChildren(ProtoInstance2158)
ProtoInstance2161 = x3d.ProtoInstance()
ProtoInstance2161.setName("Site")
ProtoInstance2161.setDEF("hanim_l_knee_crease")
fieldValue2162 = x3d.fieldValue()
fieldValue2162.setName("name")
fieldValue2162.setValue("l_knee_crease")

ProtoInstance2161.addFieldValue(fieldValue2162)
fieldValue2163 = x3d.fieldValue()
fieldValue2163.setName("translation")
fieldValue2163.setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757")

ProtoInstance2161.addFieldValue(fieldValue2163)

fieldValue2136.addChildren(ProtoInstance2161)
ProtoInstance2164 = x3d.ProtoInstance()
ProtoInstance2164.setName("Site")
ProtoInstance2164.setDEF("hanim_l_femoral_lateral_epicondyles")
fieldValue2165 = x3d.fieldValue()
fieldValue2165.setName("name")
fieldValue2165.setValue("l_femoral_lateral_epicondyles")

ProtoInstance2164.addFieldValue(fieldValue2165)
fieldValue2166 = x3d.fieldValue()
fieldValue2166.setName("translation")
fieldValue2166.setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746")

ProtoInstance2164.addFieldValue(fieldValue2166)

fieldValue2136.addChildren(ProtoInstance2164)
ProtoInstance2167 = x3d.ProtoInstance()
ProtoInstance2167.setName("Site")
ProtoInstance2167.setDEF("hanim_l_femoral_medial_epicondyles")
fieldValue2168 = x3d.fieldValue()
fieldValue2168.setName("name")
fieldValue2168.setValue("l_femoral_lateral_epicondyles")

ProtoInstance2167.addFieldValue(fieldValue2168)
fieldValue2169 = x3d.fieldValue()
fieldValue2169.setName("translation")
fieldValue2169.setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183")

ProtoInstance2167.addFieldValue(fieldValue2169)

fieldValue2136.addChildren(ProtoInstance2167)
ProtoInstance2170 = x3d.ProtoInstance()
ProtoInstance2170.setName("Site")
ProtoInstance2170.setDEF("hanim_r_middistal_tip")
fieldValue2171 = x3d.fieldValue()
fieldValue2171.setName("name")
fieldValue2171.setValue("r_middistal_tip")

ProtoInstance2170.addFieldValue(fieldValue2171)
fieldValue2172 = x3d.fieldValue()
fieldValue2172.setName("translation")
fieldValue2172.setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")

ProtoInstance2170.addFieldValue(fieldValue2172)

fieldValue2136.addChildren(ProtoInstance2170)
ProtoInstance2173 = x3d.ProtoInstance()
ProtoInstance2173.setName("Site")
ProtoInstance2173.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue2174 = x3d.fieldValue()
fieldValue2174.setName("name")
fieldValue2174.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance2173.addFieldValue(fieldValue2174)
fieldValue2175 = x3d.fieldValue()
fieldValue2175.setName("translation")
fieldValue2175.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance2173.addFieldValue(fieldValue2175)

fieldValue2136.addChildren(ProtoInstance2173)
ProtoInstance2176 = x3d.ProtoInstance()
ProtoInstance2176.setName("Site")
ProtoInstance2176.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue2177 = x3d.fieldValue()
fieldValue2177.setName("name")
fieldValue2177.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance2176.addFieldValue(fieldValue2177)
fieldValue2178 = x3d.fieldValue()
fieldValue2178.setName("translation")
fieldValue2178.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance2176.addFieldValue(fieldValue2178)

fieldValue2136.addChildren(ProtoInstance2176)
ProtoInstance2179 = x3d.ProtoInstance()
ProtoInstance2179.setName("Site")
ProtoInstance2179.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue2180 = x3d.fieldValue()
fieldValue2180.setName("name")
fieldValue2180.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance2179.addFieldValue(fieldValue2180)
fieldValue2181 = x3d.fieldValue()
fieldValue2181.setName("translation")
fieldValue2181.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance2179.addFieldValue(fieldValue2181)

fieldValue2136.addChildren(ProtoInstance2179)
ProtoInstance2182 = x3d.ProtoInstance()
ProtoInstance2182.setName("Site")
ProtoInstance2182.setDEF("hanim_r_lateral_malleolus")
fieldValue2183 = x3d.fieldValue()
fieldValue2183.setName("name")
fieldValue2183.setValue("r_lateral_malleolus")

ProtoInstance2182.addFieldValue(fieldValue2183)
fieldValue2184 = x3d.fieldValue()
fieldValue2184.setName("translation")
fieldValue2184.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance2182.addFieldValue(fieldValue2184)

fieldValue2136.addChildren(ProtoInstance2182)
ProtoInstance2185 = x3d.ProtoInstance()
ProtoInstance2185.setName("Site")
ProtoInstance2185.setDEF("hanim_r_medial_malleolus")
fieldValue2186 = x3d.fieldValue()
fieldValue2186.setName("name")
fieldValue2186.setValue("r_medial_malleolus")

ProtoInstance2185.addFieldValue(fieldValue2186)
fieldValue2187 = x3d.fieldValue()
fieldValue2187.setName("translation")
fieldValue2187.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance2185.addFieldValue(fieldValue2187)

fieldValue2136.addChildren(ProtoInstance2185)
ProtoInstance2188 = x3d.ProtoInstance()
ProtoInstance2188.setName("Site")
ProtoInstance2188.setDEF("hanim_r_sphyrion")
fieldValue2189 = x3d.fieldValue()
fieldValue2189.setName("name")
fieldValue2189.setValue("r_sphyrion")

ProtoInstance2188.addFieldValue(fieldValue2189)
fieldValue2190 = x3d.fieldValue()
fieldValue2190.setName("translation")
fieldValue2190.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance2188.addFieldValue(fieldValue2190)

fieldValue2136.addChildren(ProtoInstance2188)
ProtoInstance2191 = x3d.ProtoInstance()
ProtoInstance2191.setName("Site")
ProtoInstance2191.setDEF("hanim_r_calcaneus_posterior")
fieldValue2192 = x3d.fieldValue()
fieldValue2192.setName("name")
fieldValue2192.setValue("r_calcaneus_posterior")

ProtoInstance2191.addFieldValue(fieldValue2192)
fieldValue2193 = x3d.fieldValue()
fieldValue2193.setName("translation")
fieldValue2193.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance2191.addFieldValue(fieldValue2193)

fieldValue2136.addChildren(ProtoInstance2191)
ProtoInstance2194 = x3d.ProtoInstance()
ProtoInstance2194.setName("Site")
ProtoInstance2194.setDEF("hanim_r_knee_crease")
fieldValue2195 = x3d.fieldValue()
fieldValue2195.setName("name")
fieldValue2195.setValue("r_knee_crease")

ProtoInstance2194.addFieldValue(fieldValue2195)
fieldValue2196 = x3d.fieldValue()
fieldValue2196.setName("translation")
fieldValue2196.setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")

ProtoInstance2194.addFieldValue(fieldValue2196)

fieldValue2136.addChildren(ProtoInstance2194)
ProtoInstance2197 = x3d.ProtoInstance()
ProtoInstance2197.setName("Site")
ProtoInstance2197.setDEF("hanim_r_femoral_lateral_epicondyles")
fieldValue2198 = x3d.fieldValue()
fieldValue2198.setName("name")
fieldValue2198.setValue("r_femoral_lateral_epicondyles")

ProtoInstance2197.addFieldValue(fieldValue2198)
fieldValue2199 = x3d.fieldValue()
fieldValue2199.setName("translation")
fieldValue2199.setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052")

ProtoInstance2197.addFieldValue(fieldValue2199)

fieldValue2136.addChildren(ProtoInstance2197)
ProtoInstance2200 = x3d.ProtoInstance()
ProtoInstance2200.setName("Site")
ProtoInstance2200.setDEF("hanim_r_femoral_medial_epicondyles")
fieldValue2201 = x3d.fieldValue()
fieldValue2201.setName("name")
fieldValue2201.setValue("r_femoral_lateral_epicondyles")

ProtoInstance2200.addFieldValue(fieldValue2201)
fieldValue2202 = x3d.fieldValue()
fieldValue2202.setName("translation")
fieldValue2202.setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821")

ProtoInstance2200.addFieldValue(fieldValue2202)

fieldValue2136.addChildren(ProtoInstance2200)
ProtoInstance2203 = x3d.ProtoInstance()
ProtoInstance2203.setName("Site")
ProtoInstance2203.setDEF("hanim_skull_tip")
fieldValue2204 = x3d.fieldValue()
fieldValue2204.setName("name")
fieldValue2204.setValue("skull_tip")

ProtoInstance2203.addFieldValue(fieldValue2204)
fieldValue2205 = x3d.fieldValue()
fieldValue2205.setName("translation")
fieldValue2205.setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678")

ProtoInstance2203.addFieldValue(fieldValue2205)

fieldValue2136.addChildren(ProtoInstance2203)
ProtoInstance2206 = x3d.ProtoInstance()
ProtoInstance2206.setName("Site")
ProtoInstance2206.setDEF("hanim_sellion")
fieldValue2207 = x3d.fieldValue()
fieldValue2207.setName("name")
fieldValue2207.setValue("sellion")

ProtoInstance2206.addFieldValue(fieldValue2207)
fieldValue2208 = x3d.fieldValue()
fieldValue2208.setName("translation")
fieldValue2208.setValue("0.005799999926239252 1.631600022315979 0.0851999968290329")

ProtoInstance2206.addFieldValue(fieldValue2208)

fieldValue2136.addChildren(ProtoInstance2206)
ProtoInstance2209 = x3d.ProtoInstance()
ProtoInstance2209.setName("Site")
ProtoInstance2209.setDEF("hanim_r_infraorbitale")
fieldValue2210 = x3d.fieldValue()
fieldValue2210.setName("name")
fieldValue2210.setValue("r_infraorbitale")

ProtoInstance2209.addFieldValue(fieldValue2210)
fieldValue2211 = x3d.fieldValue()
fieldValue2211.setName("translation")
fieldValue2211.setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547")

ProtoInstance2209.addFieldValue(fieldValue2211)

fieldValue2136.addChildren(ProtoInstance2209)
ProtoInstance2212 = x3d.ProtoInstance()
ProtoInstance2212.setName("Site")
ProtoInstance2212.setDEF("hanim_l_infraorbitale")
fieldValue2213 = x3d.fieldValue()
fieldValue2213.setName("name")
fieldValue2213.setValue("l_infraorbitale")

ProtoInstance2212.addFieldValue(fieldValue2213)
fieldValue2214 = x3d.fieldValue()
fieldValue2214.setName("translation")
fieldValue2214.setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547")

ProtoInstance2212.addFieldValue(fieldValue2214)

fieldValue2136.addChildren(ProtoInstance2212)
ProtoInstance2215 = x3d.ProtoInstance()
ProtoInstance2215.setName("Site")
ProtoInstance2215.setDEF("hanim_supramenton")
fieldValue2216 = x3d.fieldValue()
fieldValue2216.setName("name")
fieldValue2216.setValue("supramenton")

ProtoInstance2215.addFieldValue(fieldValue2216)
fieldValue2217 = x3d.fieldValue()
fieldValue2217.setName("translation")
fieldValue2217.setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962")

ProtoInstance2215.addFieldValue(fieldValue2217)

fieldValue2136.addChildren(ProtoInstance2215)
ProtoInstance2218 = x3d.ProtoInstance()
ProtoInstance2218.setName("Site")
ProtoInstance2218.setDEF("hanim_r_tragion")
fieldValue2219 = x3d.fieldValue()
fieldValue2219.setName("name")
fieldValue2219.setValue("r_tragion")

ProtoInstance2218.addFieldValue(fieldValue2219)
fieldValue2220 = x3d.fieldValue()
fieldValue2220.setName("translation")
fieldValue2220.setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642")

ProtoInstance2218.addFieldValue(fieldValue2220)

fieldValue2136.addChildren(ProtoInstance2218)
ProtoInstance2221 = x3d.ProtoInstance()
ProtoInstance2221.setName("Site")
ProtoInstance2221.setDEF("hanim_r_gonion")
fieldValue2222 = x3d.fieldValue()
fieldValue2222.setName("name")
fieldValue2222.setValue("r_gonion")

ProtoInstance2221.addFieldValue(fieldValue2222)
fieldValue2223 = x3d.fieldValue()
fieldValue2223.setName("translation")
fieldValue2223.setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176")

ProtoInstance2221.addFieldValue(fieldValue2223)

fieldValue2136.addChildren(ProtoInstance2221)
ProtoInstance2224 = x3d.ProtoInstance()
ProtoInstance2224.setName("Site")
ProtoInstance2224.setDEF("hanim_l_tragion")
fieldValue2225 = x3d.fieldValue()
fieldValue2225.setName("name")
fieldValue2225.setValue("l_tragion")

ProtoInstance2224.addFieldValue(fieldValue2225)
fieldValue2226 = x3d.fieldValue()
fieldValue2226.setName("translation")
fieldValue2226.setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874")

ProtoInstance2224.addFieldValue(fieldValue2226)

fieldValue2136.addChildren(ProtoInstance2224)
ProtoInstance2227 = x3d.ProtoInstance()
ProtoInstance2227.setName("Site")
ProtoInstance2227.setDEF("hanim_l_gonion")
fieldValue2228 = x3d.fieldValue()
fieldValue2228.setName("name")
fieldValue2228.setValue("l_gonion")

ProtoInstance2227.addFieldValue(fieldValue2228)
fieldValue2229 = x3d.fieldValue()
fieldValue2229.setName("translation")
fieldValue2229.setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066")

ProtoInstance2227.addFieldValue(fieldValue2229)

fieldValue2136.addChildren(ProtoInstance2227)
ProtoInstance2230 = x3d.ProtoInstance()
ProtoInstance2230.setName("Site")
ProtoInstance2230.setDEF("hanim_nuchale")
fieldValue2231 = x3d.fieldValue()
fieldValue2231.setName("name")
fieldValue2231.setValue("nuchale")

ProtoInstance2230.addFieldValue(fieldValue2231)
fieldValue2232 = x3d.fieldValue()
fieldValue2232.setName("translation")
fieldValue2232.setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")

ProtoInstance2230.addFieldValue(fieldValue2232)

fieldValue2136.addChildren(ProtoInstance2230)
ProtoInstance2233 = x3d.ProtoInstance()
ProtoInstance2233.setName("Site")
ProtoInstance2233.setDEF("hanim_l_hand_tip")
fieldValue2234 = x3d.fieldValue()
fieldValue2234.setName("name")
fieldValue2234.setValue("l_hand_tip")

ProtoInstance2233.addFieldValue(fieldValue2234)
fieldValue2235 = x3d.fieldValue()
fieldValue2235.setName("translation")
fieldValue2235.setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205")

ProtoInstance2233.addFieldValue(fieldValue2235)

fieldValue2136.addChildren(ProtoInstance2233)
ProtoInstance2236 = x3d.ProtoInstance()
ProtoInstance2236.setName("Site")
ProtoInstance2236.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue2237 = x3d.fieldValue()
fieldValue2237.setName("name")
fieldValue2237.setValue("l_metacarpal_phalanx_2")

ProtoInstance2236.addFieldValue(fieldValue2237)
fieldValue2238 = x3d.fieldValue()
fieldValue2238.setName("translation")
fieldValue2238.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance2236.addFieldValue(fieldValue2238)

fieldValue2136.addChildren(ProtoInstance2236)
ProtoInstance2239 = x3d.ProtoInstance()
ProtoInstance2239.setName("Site")
ProtoInstance2239.setDEF("hanim_l_dactylion")
fieldValue2240 = x3d.fieldValue()
fieldValue2240.setName("name")
fieldValue2240.setValue("l_dactylion")

ProtoInstance2239.addFieldValue(fieldValue2240)
fieldValue2241 = x3d.fieldValue()
fieldValue2241.setName("translation")
fieldValue2241.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance2239.addFieldValue(fieldValue2241)

fieldValue2136.addChildren(ProtoInstance2239)
ProtoInstance2242 = x3d.ProtoInstance()
ProtoInstance2242.setName("Site")
ProtoInstance2242.setDEF("hanim_l_ulnar_styloid")
fieldValue2243 = x3d.fieldValue()
fieldValue2243.setName("name")
fieldValue2243.setValue("l_ulnar_styloid")

ProtoInstance2242.addFieldValue(fieldValue2243)
fieldValue2244 = x3d.fieldValue()
fieldValue2244.setName("translation")
fieldValue2244.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance2242.addFieldValue(fieldValue2244)

fieldValue2136.addChildren(ProtoInstance2242)
ProtoInstance2245 = x3d.ProtoInstance()
ProtoInstance2245.setName("Site")
ProtoInstance2245.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue2246 = x3d.fieldValue()
fieldValue2246.setName("name")
fieldValue2246.setValue("l_metacarpal_phalanx_5")

ProtoInstance2245.addFieldValue(fieldValue2246)
fieldValue2247 = x3d.fieldValue()
fieldValue2247.setName("translation")
fieldValue2247.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance2245.addFieldValue(fieldValue2247)

fieldValue2136.addChildren(ProtoInstance2245)
ProtoInstance2248 = x3d.ProtoInstance()
ProtoInstance2248.setName("Site")
ProtoInstance2248.setDEF("hanim_l_radial_styloid")
fieldValue2249 = x3d.fieldValue()
fieldValue2249.setName("name")
fieldValue2249.setValue("l_radial_styloid")

ProtoInstance2248.addFieldValue(fieldValue2249)
fieldValue2250 = x3d.fieldValue()
fieldValue2250.setName("translation")
fieldValue2250.setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691")

ProtoInstance2248.addFieldValue(fieldValue2250)

fieldValue2136.addChildren(ProtoInstance2248)
ProtoInstance2251 = x3d.ProtoInstance()
ProtoInstance2251.setName("Site")
ProtoInstance2251.setDEF("hanim_l_olecranon")
fieldValue2252 = x3d.fieldValue()
fieldValue2252.setName("name")
fieldValue2252.setValue("l_olecranon")

ProtoInstance2251.addFieldValue(fieldValue2252)
fieldValue2253 = x3d.fieldValue()
fieldValue2253.setName("translation")
fieldValue2253.setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")

ProtoInstance2251.addFieldValue(fieldValue2253)

fieldValue2136.addChildren(ProtoInstance2251)
ProtoInstance2254 = x3d.ProtoInstance()
ProtoInstance2254.setName("Site")
ProtoInstance2254.setDEF("hanim_l_humeral_medial_epicondyles")
fieldValue2255 = x3d.fieldValue()
fieldValue2255.setName("name")
fieldValue2255.setValue("l_humeral_medial_epicondyles")

ProtoInstance2254.addFieldValue(fieldValue2255)
fieldValue2256 = x3d.fieldValue()
fieldValue2256.setName("translation")
fieldValue2256.setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661")

ProtoInstance2254.addFieldValue(fieldValue2256)

fieldValue2136.addChildren(ProtoInstance2254)
ProtoInstance2257 = x3d.ProtoInstance()
ProtoInstance2257.setName("Site")
ProtoInstance2257.setDEF("hanim_l_radiale")
fieldValue2258 = x3d.fieldValue()
fieldValue2258.setName("name")
fieldValue2258.setValue("l_radiale")

ProtoInstance2257.addFieldValue(fieldValue2258)
fieldValue2259 = x3d.fieldValue()
fieldValue2259.setName("translation")
fieldValue2259.setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268")

ProtoInstance2257.addFieldValue(fieldValue2259)

fieldValue2136.addChildren(ProtoInstance2257)
ProtoInstance2260 = x3d.ProtoInstance()
ProtoInstance2260.setName("Site")
ProtoInstance2260.setDEF("hanim_l_humeral_lateral_epicondyles")
fieldValue2261 = x3d.fieldValue()
fieldValue2261.setName("name")
fieldValue2261.setValue("l_humeral_lateral_epicondyles")

ProtoInstance2260.addFieldValue(fieldValue2261)
fieldValue2262 = x3d.fieldValue()
fieldValue2262.setName("translation")
fieldValue2262.setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355")

ProtoInstance2260.addFieldValue(fieldValue2262)

fieldValue2136.addChildren(ProtoInstance2260)
ProtoInstance2263 = x3d.ProtoInstance()
ProtoInstance2263.setName("Site")
ProtoInstance2263.setDEF("hanim_r_hand_tip")
fieldValue2264 = x3d.fieldValue()
fieldValue2264.setName("name")
fieldValue2264.setValue("r_hand_tip")

ProtoInstance2263.addFieldValue(fieldValue2264)
fieldValue2265 = x3d.fieldValue()
fieldValue2265.setName("translation")
fieldValue2265.setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")

ProtoInstance2263.addFieldValue(fieldValue2265)

fieldValue2136.addChildren(ProtoInstance2263)
ProtoInstance2266 = x3d.ProtoInstance()
ProtoInstance2266.setName("Site")
ProtoInstance2266.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue2267 = x3d.fieldValue()
fieldValue2267.setName("name")
fieldValue2267.setValue("r_metacarpal_phalanx_2")

ProtoInstance2266.addFieldValue(fieldValue2267)
fieldValue2268 = x3d.fieldValue()
fieldValue2268.setName("translation")
fieldValue2268.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance2266.addFieldValue(fieldValue2268)

fieldValue2136.addChildren(ProtoInstance2266)
ProtoInstance2269 = x3d.ProtoInstance()
ProtoInstance2269.setName("Site")
ProtoInstance2269.setDEF("hanim_r_dactylion")
fieldValue2270 = x3d.fieldValue()
fieldValue2270.setName("name")
fieldValue2270.setValue("r_dactylion")

ProtoInstance2269.addFieldValue(fieldValue2270)
fieldValue2271 = x3d.fieldValue()
fieldValue2271.setName("translation")
fieldValue2271.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance2269.addFieldValue(fieldValue2271)

fieldValue2136.addChildren(ProtoInstance2269)
ProtoInstance2272 = x3d.ProtoInstance()
ProtoInstance2272.setName("Site")
ProtoInstance2272.setDEF("hanim_r_ulnar_styloid")
fieldValue2273 = x3d.fieldValue()
fieldValue2273.setName("name")
fieldValue2273.setValue("r_ulnar_styloid")

ProtoInstance2272.addFieldValue(fieldValue2273)
fieldValue2274 = x3d.fieldValue()
fieldValue2274.setName("translation")
fieldValue2274.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance2272.addFieldValue(fieldValue2274)

fieldValue2136.addChildren(ProtoInstance2272)
ProtoInstance2275 = x3d.ProtoInstance()
ProtoInstance2275.setName("Site")
ProtoInstance2275.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue2276 = x3d.fieldValue()
fieldValue2276.setName("name")
fieldValue2276.setValue("r_metacarpal_phalanx_5")

ProtoInstance2275.addFieldValue(fieldValue2276)
fieldValue2277 = x3d.fieldValue()
fieldValue2277.setName("translation")
fieldValue2277.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance2275.addFieldValue(fieldValue2277)

fieldValue2136.addChildren(ProtoInstance2275)
ProtoInstance2278 = x3d.ProtoInstance()
ProtoInstance2278.setName("Site")
ProtoInstance2278.setDEF("hanim_r_radial_styloid")
fieldValue2279 = x3d.fieldValue()
fieldValue2279.setName("name")
fieldValue2279.setValue("r_radial_styloid")

ProtoInstance2278.addFieldValue(fieldValue2279)
fieldValue2280 = x3d.fieldValue()
fieldValue2280.setName("translation")
fieldValue2280.setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236")

ProtoInstance2278.addFieldValue(fieldValue2280)

fieldValue2136.addChildren(ProtoInstance2278)
ProtoInstance2281 = x3d.ProtoInstance()
ProtoInstance2281.setName("Site")
ProtoInstance2281.setDEF("hanim_r_olecranon")
fieldValue2282 = x3d.fieldValue()
fieldValue2282.setName("name")
fieldValue2282.setValue("r_olecranon")

ProtoInstance2281.addFieldValue(fieldValue2282)
fieldValue2283 = x3d.fieldValue()
fieldValue2283.setName("translation")
fieldValue2283.setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")

ProtoInstance2281.addFieldValue(fieldValue2283)

fieldValue2136.addChildren(ProtoInstance2281)
ProtoInstance2284 = x3d.ProtoInstance()
ProtoInstance2284.setName("Site")
ProtoInstance2284.setDEF("hanim_r_humeral_medial_epicondyles")
fieldValue2285 = x3d.fieldValue()
fieldValue2285.setName("name")
fieldValue2285.setValue("r_humeral_medial_epicondyles")

ProtoInstance2284.addFieldValue(fieldValue2285)
fieldValue2286 = x3d.fieldValue()
fieldValue2286.setName("translation")
fieldValue2286.setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")

ProtoInstance2284.addFieldValue(fieldValue2286)

fieldValue2136.addChildren(ProtoInstance2284)
ProtoInstance2287 = x3d.ProtoInstance()
ProtoInstance2287.setName("Site")
ProtoInstance2287.setDEF("hanim_r_radiale")
fieldValue2288 = x3d.fieldValue()
fieldValue2288.setName("name")
fieldValue2288.setValue("r_radiale")

ProtoInstance2287.addFieldValue(fieldValue2288)
fieldValue2289 = x3d.fieldValue()
fieldValue2289.setName("translation")
fieldValue2289.setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")

ProtoInstance2287.addFieldValue(fieldValue2289)

fieldValue2136.addChildren(ProtoInstance2287)
ProtoInstance2290 = x3d.ProtoInstance()
ProtoInstance2290.setName("Site")
ProtoInstance2290.setDEF("hanim_r_humeral_lateral_epicondyles")
fieldValue2291 = x3d.fieldValue()
fieldValue2291.setName("name")
fieldValue2291.setValue("r_humeral_lateral_epicondyles")

ProtoInstance2290.addFieldValue(fieldValue2291)
fieldValue2292 = x3d.fieldValue()
fieldValue2292.setName("translation")
fieldValue2292.setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")

ProtoInstance2290.addFieldValue(fieldValue2292)

fieldValue2136.addChildren(ProtoInstance2290)
ProtoInstance2293 = x3d.ProtoInstance()
ProtoInstance2293.setName("Site")
ProtoInstance2293.setDEF("hanim_r_clavicale")
fieldValue2294 = x3d.fieldValue()
fieldValue2294.setName("name")
fieldValue2294.setValue("r_clavicale")

ProtoInstance2293.addFieldValue(fieldValue2294)
fieldValue2295 = x3d.fieldValue()
fieldValue2295.setName("translation")
fieldValue2295.setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033")

ProtoInstance2293.addFieldValue(fieldValue2295)

fieldValue2136.addChildren(ProtoInstance2293)
ProtoInstance2296 = x3d.ProtoInstance()
ProtoInstance2296.setName("Site")
ProtoInstance2296.setDEF("hanim_suprasternale")
fieldValue2297 = x3d.fieldValue()
fieldValue2297.setName("name")
fieldValue2297.setValue("suprasternale")

ProtoInstance2296.addFieldValue(fieldValue2297)
fieldValue2298 = x3d.fieldValue()
fieldValue2298.setName("translation")
fieldValue2298.setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869")

ProtoInstance2296.addFieldValue(fieldValue2298)

fieldValue2136.addChildren(ProtoInstance2296)
ProtoInstance2299 = x3d.ProtoInstance()
ProtoInstance2299.setName("Site")
ProtoInstance2299.setDEF("hanim_l_clavicale")
fieldValue2300 = x3d.fieldValue()
fieldValue2300.setName("name")
fieldValue2300.setValue("l_clavicale")

ProtoInstance2299.addFieldValue(fieldValue2300)
fieldValue2301 = x3d.fieldValue()
fieldValue2301.setName("translation")
fieldValue2301.setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754")

ProtoInstance2299.addFieldValue(fieldValue2301)

fieldValue2136.addChildren(ProtoInstance2299)
ProtoInstance2302 = x3d.ProtoInstance()
ProtoInstance2302.setName("Site")
ProtoInstance2302.setDEF("hanim_r_thelion")
fieldValue2303 = x3d.fieldValue()
fieldValue2303.setName("name")
fieldValue2303.setValue("r_thelion")

ProtoInstance2302.addFieldValue(fieldValue2303)
fieldValue2304 = x3d.fieldValue()
fieldValue2304.setName("translation")
fieldValue2304.setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911")

ProtoInstance2302.addFieldValue(fieldValue2304)

fieldValue2136.addChildren(ProtoInstance2302)
ProtoInstance2305 = x3d.ProtoInstance()
ProtoInstance2305.setName("Site")
ProtoInstance2305.setDEF("hanim_l_thelion")
fieldValue2306 = x3d.fieldValue()
fieldValue2306.setName("name")
fieldValue2306.setValue("l_thelion")

ProtoInstance2305.addFieldValue(fieldValue2306)
fieldValue2307 = x3d.fieldValue()
fieldValue2307.setName("translation")
fieldValue2307.setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689")

ProtoInstance2305.addFieldValue(fieldValue2307)

fieldValue2136.addChildren(ProtoInstance2305)
ProtoInstance2308 = x3d.ProtoInstance()
ProtoInstance2308.setName("Site")
ProtoInstance2308.setDEF("hanim_substernale")
fieldValue2309 = x3d.fieldValue()
fieldValue2309.setName("name")
fieldValue2309.setValue("substernale")

ProtoInstance2308.addFieldValue(fieldValue2309)
fieldValue2310 = x3d.fieldValue()
fieldValue2310.setName("translation")
fieldValue2310.setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683")

ProtoInstance2308.addFieldValue(fieldValue2310)

fieldValue2136.addChildren(ProtoInstance2308)
ProtoInstance2311 = x3d.ProtoInstance()
ProtoInstance2311.setName("Site")
ProtoInstance2311.setDEF("hanim_r_rib10")
fieldValue2312 = x3d.fieldValue()
fieldValue2312.setName("name")
fieldValue2312.setValue("r_rib10")

ProtoInstance2311.addFieldValue(fieldValue2312)
fieldValue2313 = x3d.fieldValue()
fieldValue2313.setName("translation")
fieldValue2313.setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432")

ProtoInstance2311.addFieldValue(fieldValue2313)

fieldValue2136.addChildren(ProtoInstance2311)
ProtoInstance2314 = x3d.ProtoInstance()
ProtoInstance2314.setName("Site")
ProtoInstance2314.setDEF("hanim_l_rib10")
fieldValue2315 = x3d.fieldValue()
fieldValue2315.setName("name")
fieldValue2315.setValue("l_rib10")

ProtoInstance2314.addFieldValue(fieldValue2315)
fieldValue2316 = x3d.fieldValue()
fieldValue2316.setName("translation")
fieldValue2316.setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202")

ProtoInstance2314.addFieldValue(fieldValue2316)

fieldValue2136.addChildren(ProtoInstance2314)
ProtoInstance2317 = x3d.ProtoInstance()
ProtoInstance2317.setName("Site")
ProtoInstance2317.setDEF("hanim_cervicale")
fieldValue2318 = x3d.fieldValue()
fieldValue2318.setName("name")
fieldValue2318.setValue("cervicale")

ProtoInstance2317.addFieldValue(fieldValue2318)
fieldValue2319 = x3d.fieldValue()
fieldValue2319.setName("translation")
fieldValue2319.setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754")

ProtoInstance2317.addFieldValue(fieldValue2319)

fieldValue2136.addChildren(ProtoInstance2317)
ProtoInstance2320 = x3d.ProtoInstance()
ProtoInstance2320.setName("Site")
ProtoInstance2320.setDEF("hanim_spine_2_lower_back")
fieldValue2321 = x3d.fieldValue()
fieldValue2321.setName("name")
fieldValue2321.setValue("spine_2_lower_back")

ProtoInstance2320.addFieldValue(fieldValue2321)
fieldValue2322 = x3d.fieldValue()
fieldValue2322.setName("translation")
fieldValue2322.setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661")

ProtoInstance2320.addFieldValue(fieldValue2322)

fieldValue2136.addChildren(ProtoInstance2320)
ProtoInstance2323 = x3d.ProtoInstance()
ProtoInstance2323.setName("Site")
ProtoInstance2323.setDEF("hanim_waist_preferred_posterior")
fieldValue2324 = x3d.fieldValue()
fieldValue2324.setName("name")
fieldValue2324.setValue("waist_preferred_posterior")

ProtoInstance2323.addFieldValue(fieldValue2324)
fieldValue2325 = x3d.fieldValue()
fieldValue2325.setName("translation")
fieldValue2325.setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754")

ProtoInstance2323.addFieldValue(fieldValue2325)

fieldValue2136.addChildren(ProtoInstance2323)
ProtoInstance2326 = x3d.ProtoInstance()
ProtoInstance2326.setName("Site")
ProtoInstance2326.setDEF("hanim_r_acromion")
fieldValue2327 = x3d.fieldValue()
fieldValue2327.setName("name")
fieldValue2327.setValue("r_acromion")

ProtoInstance2326.addFieldValue(fieldValue2327)
fieldValue2328 = x3d.fieldValue()
fieldValue2328.setName("translation")
fieldValue2328.setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541")

ProtoInstance2326.addFieldValue(fieldValue2328)

fieldValue2136.addChildren(ProtoInstance2326)
ProtoInstance2329 = x3d.ProtoInstance()
ProtoInstance2329.setName("Site")
ProtoInstance2329.setDEF("hanim_r_axilla_proximal")
fieldValue2330 = x3d.fieldValue()
fieldValue2330.setName("name")
fieldValue2330.setValue("r_axilla_proximal")

ProtoInstance2329.addFieldValue(fieldValue2330)
fieldValue2331 = x3d.fieldValue()
fieldValue2331.setName("translation")
fieldValue2331.setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438")

ProtoInstance2329.addFieldValue(fieldValue2331)

fieldValue2136.addChildren(ProtoInstance2329)
ProtoInstance2332 = x3d.ProtoInstance()
ProtoInstance2332.setName("Site")
ProtoInstance2332.setDEF("hanim_r_axilla_distal")
fieldValue2333 = x3d.fieldValue()
fieldValue2333.setName("name")
fieldValue2333.setValue("r_axilla_distal")

ProtoInstance2332.addFieldValue(fieldValue2333)
fieldValue2334 = x3d.fieldValue()
fieldValue2334.setName("translation")
fieldValue2334.setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678")

ProtoInstance2332.addFieldValue(fieldValue2334)

fieldValue2136.addChildren(ProtoInstance2332)
ProtoInstance2335 = x3d.ProtoInstance()
ProtoInstance2335.setName("Site")
ProtoInstance2335.setDEF("hanim_l_acromion")
fieldValue2336 = x3d.fieldValue()
fieldValue2336.setName("name")
fieldValue2336.setValue("l_acromion")

ProtoInstance2335.addFieldValue(fieldValue2336)
fieldValue2337 = x3d.fieldValue()
fieldValue2337.setName("translation")
fieldValue2337.setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014")

ProtoInstance2335.addFieldValue(fieldValue2337)

fieldValue2136.addChildren(ProtoInstance2335)
ProtoInstance2338 = x3d.ProtoInstance()
ProtoInstance2338.setName("Site")
ProtoInstance2338.setDEF("hanim_l_axilla_proximal")
fieldValue2339 = x3d.fieldValue()
fieldValue2339.setName("name")
fieldValue2339.setValue("l_axilla_proximal")

ProtoInstance2338.addFieldValue(fieldValue2339)
fieldValue2340 = x3d.fieldValue()
fieldValue2340.setName("translation")
fieldValue2340.setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937")

ProtoInstance2338.addFieldValue(fieldValue2340)

fieldValue2136.addChildren(ProtoInstance2338)
ProtoInstance2341 = x3d.ProtoInstance()
ProtoInstance2341.setName("Site")
ProtoInstance2341.setDEF("hanim_l_axilla_distal")
fieldValue2342 = x3d.fieldValue()
fieldValue2342.setName("name")
fieldValue2342.setValue("l_axilla_distal")

ProtoInstance2341.addFieldValue(fieldValue2342)
fieldValue2343 = x3d.fieldValue()
fieldValue2343.setName("translation")
fieldValue2343.setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388")

ProtoInstance2341.addFieldValue(fieldValue2343)

fieldValue2136.addChildren(ProtoInstance2341)
ProtoInstance2344 = x3d.ProtoInstance()
ProtoInstance2344.setName("Site")
ProtoInstance2344.setDEF("hanim_r_neck_base")
fieldValue2345 = x3d.fieldValue()
fieldValue2345.setName("name")
fieldValue2345.setValue("r_neck_base")

ProtoInstance2344.addFieldValue(fieldValue2345)
fieldValue2346 = x3d.fieldValue()
fieldValue2346.setName("translation")
fieldValue2346.setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071")

ProtoInstance2344.addFieldValue(fieldValue2346)

fieldValue2136.addChildren(ProtoInstance2344)
ProtoInstance2347 = x3d.ProtoInstance()
ProtoInstance2347.setName("Site")
ProtoInstance2347.setDEF("hanim_l_neck_base")
fieldValue2348 = x3d.fieldValue()
fieldValue2348.setName("name")
fieldValue2348.setValue("l_neck_base")

ProtoInstance2347.addFieldValue(fieldValue2348)
fieldValue2349 = x3d.fieldValue()
fieldValue2349.setName("translation")
fieldValue2349.setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478")

ProtoInstance2347.addFieldValue(fieldValue2349)

fieldValue2136.addChildren(ProtoInstance2347)
ProtoInstance2350 = x3d.ProtoInstance()
ProtoInstance2350.setName("Site")
ProtoInstance2350.setDEF("hanim_navel")
fieldValue2351 = x3d.fieldValue()
fieldValue2351.setName("name")
fieldValue2351.setValue("navel")

ProtoInstance2350.addFieldValue(fieldValue2351)
fieldValue2352 = x3d.fieldValue()
fieldValue2352.setName("translation")
fieldValue2352.setValue("0.006899999920278788 1.09660005569458 0.10170000046491623")

ProtoInstance2350.addFieldValue(fieldValue2352)

fieldValue2136.addChildren(ProtoInstance2350)
ProtoInstance2353 = x3d.ProtoInstance()
ProtoInstance2353.setName("Site")
ProtoInstance2353.setDEF("hanim_r_asis")
fieldValue2354 = x3d.fieldValue()
fieldValue2354.setName("name")
fieldValue2354.setValue("r_asis")

ProtoInstance2353.addFieldValue(fieldValue2354)
fieldValue2355 = x3d.fieldValue()
fieldValue2355.setName("translation")
fieldValue2355.setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747")

ProtoInstance2353.addFieldValue(fieldValue2355)

fieldValue2136.addChildren(ProtoInstance2353)
ProtoInstance2356 = x3d.ProtoInstance()
ProtoInstance2356.setName("Site")
ProtoInstance2356.setDEF("hanim_l_asis")
fieldValue2357 = x3d.fieldValue()
fieldValue2357.setName("name")
fieldValue2357.setValue("l_asis")

ProtoInstance2356.addFieldValue(fieldValue2357)
fieldValue2358 = x3d.fieldValue()
fieldValue2358.setName("translation")
fieldValue2358.setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836")

ProtoInstance2356.addFieldValue(fieldValue2358)

fieldValue2136.addChildren(ProtoInstance2356)
ProtoInstance2359 = x3d.ProtoInstance()
ProtoInstance2359.setName("Site")
ProtoInstance2359.setDEF("hanim_r_iliocristale")
fieldValue2360 = x3d.fieldValue()
fieldValue2360.setName("name")
fieldValue2360.setValue("r_iliocristale")

ProtoInstance2359.addFieldValue(fieldValue2360)
fieldValue2361 = x3d.fieldValue()
fieldValue2361.setName("translation")
fieldValue2361.setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187")

ProtoInstance2359.addFieldValue(fieldValue2361)

fieldValue2136.addChildren(ProtoInstance2359)
ProtoInstance2362 = x3d.ProtoInstance()
ProtoInstance2362.setName("Site")
ProtoInstance2362.setDEF("hanim_r_trochanterion")
fieldValue2363 = x3d.fieldValue()
fieldValue2363.setName("name")
fieldValue2363.setValue("r_trochanterion")

ProtoInstance2362.addFieldValue(fieldValue2363)
fieldValue2364 = x3d.fieldValue()
fieldValue2364.setName("translation")
fieldValue2364.setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514")

ProtoInstance2362.addFieldValue(fieldValue2364)

fieldValue2136.addChildren(ProtoInstance2362)
ProtoInstance2365 = x3d.ProtoInstance()
ProtoInstance2365.setName("Site")
ProtoInstance2365.setDEF("hanim_l_iliocristale")
fieldValue2366 = x3d.fieldValue()
fieldValue2366.setName("name")
fieldValue2366.setValue("l_iliocristale")

ProtoInstance2365.addFieldValue(fieldValue2366)
fieldValue2367 = x3d.fieldValue()
fieldValue2367.setName("translation")
fieldValue2367.setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001")

ProtoInstance2365.addFieldValue(fieldValue2367)

fieldValue2136.addChildren(ProtoInstance2365)
ProtoInstance2368 = x3d.ProtoInstance()
ProtoInstance2368.setName("Site")
ProtoInstance2368.setDEF("hanim_l_trochanterion")
fieldValue2369 = x3d.fieldValue()
fieldValue2369.setName("name")
fieldValue2369.setValue("l_trochanterion")

ProtoInstance2368.addFieldValue(fieldValue2369)
fieldValue2370 = x3d.fieldValue()
fieldValue2370.setName("translation")
fieldValue2370.setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183")

ProtoInstance2368.addFieldValue(fieldValue2370)

fieldValue2136.addChildren(ProtoInstance2368)
ProtoInstance2371 = x3d.ProtoInstance()
ProtoInstance2371.setName("Site")
ProtoInstance2371.setDEF("hanim_r_psis")
fieldValue2372 = x3d.fieldValue()
fieldValue2372.setName("name")
fieldValue2372.setValue("r_psis")

ProtoInstance2371.addFieldValue(fieldValue2372)
fieldValue2373 = x3d.fieldValue()
fieldValue2373.setName("translation")
fieldValue2373.setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082")

ProtoInstance2371.addFieldValue(fieldValue2373)

fieldValue2136.addChildren(ProtoInstance2371)
ProtoInstance2374 = x3d.ProtoInstance()
ProtoInstance2374.setName("Site")
ProtoInstance2374.setDEF("hanim_l_psis")
fieldValue2375 = x3d.fieldValue()
fieldValue2375.setName("name")
fieldValue2375.setValue("l_psis")

ProtoInstance2374.addFieldValue(fieldValue2375)
fieldValue2376 = x3d.fieldValue()
fieldValue2376.setName("translation")
fieldValue2376.setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388")

ProtoInstance2374.addFieldValue(fieldValue2376)

fieldValue2136.addChildren(ProtoInstance2374)
ProtoInstance2377 = x3d.ProtoInstance()
ProtoInstance2377.setName("Site")
ProtoInstance2377.setDEF("hanim_crotch")
fieldValue2378 = x3d.fieldValue()
fieldValue2378.setName("name")
fieldValue2378.setValue("crotch")

ProtoInstance2377.addFieldValue(fieldValue2378)
fieldValue2379 = x3d.fieldValue()
fieldValue2379.setName("translation")
fieldValue2379.setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367")

ProtoInstance2377.addFieldValue(fieldValue2379)

fieldValue2136.addChildren(ProtoInstance2377)

ProtoInstance101.addFieldValue(fieldValue2136)
fieldValue2380 = x3d.fieldValue()
fieldValue2380.setName("name")
fieldValue2380.setValue("humanoid")

ProtoInstance101.addFieldValue(fieldValue2380)
fieldValue2381 = x3d.fieldValue()
fieldValue2381.setName("info")
fieldValue2381.setValue("\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;1\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"")

ProtoInstance101.addFieldValue(fieldValue2381)

Scene4.addChildren(ProtoInstance101)
Group2382 = x3d.Group()
Group2382.setDEF("JointCenters_WorldInfo")
WorldInfo2383 = x3d.WorldInfo()
WorldInfo2383.setTitle("HANIM 200x Default Joint Centers, LOA&#8209;1")
WorldInfo2383.setInfo([" HANIM 200x Default Joint Centers, Level-Of-Articulation 1 -------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "])

Group2382.addChildren(WorldInfo2383)

Scene4.addChildren(Group2382)
NavigationInfo2384 = x3d.NavigationInfo()
NavigationInfo2384.setAvatarSize([0.25,1.600000023841858,0.75])
NavigationInfo2384.setSpeed(1.5)

Scene4.addChildren(NavigationInfo2384)

X3D0.setScene(Scene4)
X3D0.toFileX3D("../data/LOA1ExampleSourceInVRML_RoundTrip.x3d")
