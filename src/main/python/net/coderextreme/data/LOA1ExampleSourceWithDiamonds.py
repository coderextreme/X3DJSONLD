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
Coordinate62.setPoint([0,0.009999999776482582,0,-0.009999999776482582,0,0,0,0,0.009999999776482582,0.009999999776482582,0,0,0,0,-0.009999999776482582,0,-0.009999999776482582,0])

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
ProtoInstance110.setDEF("humanoid")
fieldValue111 = x3d.fieldValue()
fieldValue111.setName("humanoidBody")
ProtoInstance112 = x3d.ProtoInstance()
ProtoInstance112.setName("Joint")
ProtoInstance112.setDEF("hanim_humanoid_root")
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
fieldValue115.setValue("0 0.8240000009536743 0.027699999511241913")

ProtoInstance112.addFieldValue(fieldValue115)
fieldValue116 = x3d.fieldValue()
fieldValue116.setName("children")
ProtoInstance117 = x3d.ProtoInstance()
ProtoInstance117.setName("Joint")
ProtoInstance117.setDEF("hanim_sacroiliac")
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
fieldValue120.setValue("0 0.914900004863739 0.0015999999595806003")

ProtoInstance117.addFieldValue(fieldValue120)
fieldValue121 = x3d.fieldValue()
fieldValue121.setName("children")
ProtoInstance122 = x3d.ProtoInstance()
ProtoInstance122.setName("Joint")
ProtoInstance122.setDEF("hanim_l_hip")
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
fieldValue125.setValue("0.09610000252723694 0.9124000072479248 -0.00009999999747378752")

ProtoInstance122.addFieldValue(fieldValue125)
fieldValue126 = x3d.fieldValue()
fieldValue126.setName("children")
ProtoInstance127 = x3d.ProtoInstance()
ProtoInstance127.setName("Joint")
ProtoInstance127.setDEF("hanim_l_knee")
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
fieldValue130.setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995")

ProtoInstance127.addFieldValue(fieldValue130)
fieldValue131 = x3d.fieldValue()
fieldValue131.setName("children")
ProtoInstance132 = x3d.ProtoInstance()
ProtoInstance132.setName("Joint")
ProtoInstance132.setDEF("hanim_l_talocrural")
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
fieldValue135.setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727")

ProtoInstance132.addFieldValue(fieldValue135)
fieldValue136 = x3d.fieldValue()
fieldValue136.setName("children")
ProtoInstance137 = x3d.ProtoInstance()
ProtoInstance137.setName("Joint")
ProtoInstance137.setDEF("hanim_l_metatarsophalangeal_")
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
fieldValue140.setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363")

ProtoInstance137.addFieldValue(fieldValue140)
fieldValue141 = x3d.fieldValue()
fieldValue141.setName("children")
ProtoInstance142 = x3d.ProtoInstance()
ProtoInstance142.setName("Segment")
ProtoInstance142.setDEF("hanim_l_middistal")
fieldValue143 = x3d.fieldValue()
fieldValue143.setName("name")
fieldValue143.setValue("l_middistal")

ProtoInstance142.addFieldValue(fieldValue143)
fieldValue144 = x3d.fieldValue()
fieldValue144.setName("children")
ProtoInstance145 = x3d.ProtoInstance()
ProtoInstance145.setName("Site")
ProtoInstance145.setDEF("hanim_l_middistal_tip")
fieldValue146 = x3d.fieldValue()
fieldValue146.setName("name")
fieldValue146.setValue("l_middistal_tip")

ProtoInstance145.addFieldValue(fieldValue146)
fieldValue147 = x3d.fieldValue()
fieldValue147.setName("translation")
fieldValue147.setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261")

ProtoInstance145.addFieldValue(fieldValue147)

fieldValue144.addChildren(ProtoInstance145)
ProtoInstance148 = x3d.ProtoInstance()
ProtoInstance148.setName("Site")
ProtoInstance148.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue149 = x3d.fieldValue()
fieldValue149.setName("name")
fieldValue149.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance148.addFieldValue(fieldValue149)
fieldValue150 = x3d.fieldValue()
fieldValue150.setName("translation")
fieldValue150.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance148.addFieldValue(fieldValue150)

fieldValue144.addChildren(ProtoInstance148)
ProtoInstance151 = x3d.ProtoInstance()
ProtoInstance151.setName("Site")
ProtoInstance151.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue152 = x3d.fieldValue()
fieldValue152.setName("name")
fieldValue152.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance151.addFieldValue(fieldValue152)
fieldValue153 = x3d.fieldValue()
fieldValue153.setName("translation")
fieldValue153.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance151.addFieldValue(fieldValue153)

fieldValue144.addChildren(ProtoInstance151)
ProtoInstance154 = x3d.ProtoInstance()
ProtoInstance154.setName("Site")
ProtoInstance154.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue155 = x3d.fieldValue()
fieldValue155.setName("name")
fieldValue155.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance154.addFieldValue(fieldValue155)
fieldValue156 = x3d.fieldValue()
fieldValue156.setName("translation")
fieldValue156.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance154.addFieldValue(fieldValue156)

fieldValue144.addChildren(ProtoInstance154)

ProtoInstance142.addFieldValue(fieldValue144)

fieldValue141.addChildren(ProtoInstance142)

ProtoInstance137.addFieldValue(fieldValue141)

fieldValue136.addChildren(ProtoInstance137)
ProtoInstance157 = x3d.ProtoInstance()
ProtoInstance157.setName("Segment")
ProtoInstance157.setDEF("hanim_l_hindfoot")
fieldValue158 = x3d.fieldValue()
fieldValue158.setName("name")
fieldValue158.setValue("l_hindfoot")

ProtoInstance157.addFieldValue(fieldValue158)
fieldValue159 = x3d.fieldValue()
fieldValue159.setName("children")
ProtoInstance160 = x3d.ProtoInstance()
ProtoInstance160.setName("Site")
ProtoInstance160.setDEF("hanim_l_lateral_malleolus")
fieldValue161 = x3d.fieldValue()
fieldValue161.setName("name")
fieldValue161.setValue("l_lateral_malleolus")

ProtoInstance160.addFieldValue(fieldValue161)
fieldValue162 = x3d.fieldValue()
fieldValue162.setName("translation")
fieldValue162.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance160.addFieldValue(fieldValue162)

fieldValue159.addChildren(ProtoInstance160)
ProtoInstance163 = x3d.ProtoInstance()
ProtoInstance163.setName("Site")
ProtoInstance163.setDEF("hanim_l_medial_malleolus")
fieldValue164 = x3d.fieldValue()
fieldValue164.setName("name")
fieldValue164.setValue("l_medial_malleolus")

ProtoInstance163.addFieldValue(fieldValue164)
fieldValue165 = x3d.fieldValue()
fieldValue165.setName("translation")
fieldValue165.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance163.addFieldValue(fieldValue165)

fieldValue159.addChildren(ProtoInstance163)
ProtoInstance166 = x3d.ProtoInstance()
ProtoInstance166.setName("Site")
ProtoInstance166.setDEF("hanim_l_sphyrion")
fieldValue167 = x3d.fieldValue()
fieldValue167.setName("name")
fieldValue167.setValue("l_sphyrion")

ProtoInstance166.addFieldValue(fieldValue167)
fieldValue168 = x3d.fieldValue()
fieldValue168.setName("translation")
fieldValue168.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance166.addFieldValue(fieldValue168)

fieldValue159.addChildren(ProtoInstance166)
ProtoInstance169 = x3d.ProtoInstance()
ProtoInstance169.setName("Site")
ProtoInstance169.setDEF("hanim_l_calcaneus_posterior")
fieldValue170 = x3d.fieldValue()
fieldValue170.setName("name")
fieldValue170.setValue("l_calcaneus_posterior")

ProtoInstance169.addFieldValue(fieldValue170)
fieldValue171 = x3d.fieldValue()
fieldValue171.setName("translation")
fieldValue171.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance169.addFieldValue(fieldValue171)

fieldValue159.addChildren(ProtoInstance169)

ProtoInstance157.addFieldValue(fieldValue159)

fieldValue136.addChildren(ProtoInstance157)

ProtoInstance132.addFieldValue(fieldValue136)

fieldValue131.addChildren(ProtoInstance132)
ProtoInstance172 = x3d.ProtoInstance()
ProtoInstance172.setName("Segment")
ProtoInstance172.setDEF("hanim_l_calf")
fieldValue173 = x3d.fieldValue()
fieldValue173.setName("name")
fieldValue173.setValue("l_calf")

ProtoInstance172.addFieldValue(fieldValue173)

fieldValue131.addChildren(ProtoInstance172)

ProtoInstance127.addFieldValue(fieldValue131)

fieldValue126.addChildren(ProtoInstance127)
ProtoInstance174 = x3d.ProtoInstance()
ProtoInstance174.setName("Segment")
ProtoInstance174.setDEF("hanim_l_thigh")
fieldValue175 = x3d.fieldValue()
fieldValue175.setName("name")
fieldValue175.setValue("l_thigh")

ProtoInstance174.addFieldValue(fieldValue175)
fieldValue176 = x3d.fieldValue()
fieldValue176.setName("children")
ProtoInstance177 = x3d.ProtoInstance()
ProtoInstance177.setName("Site")
ProtoInstance177.setDEF("hanim_l_knee_crease")
fieldValue178 = x3d.fieldValue()
fieldValue178.setName("name")
fieldValue178.setValue("l_knee_crease")

ProtoInstance177.addFieldValue(fieldValue178)
fieldValue179 = x3d.fieldValue()
fieldValue179.setName("translation")
fieldValue179.setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757")

ProtoInstance177.addFieldValue(fieldValue179)

fieldValue176.addChildren(ProtoInstance177)
ProtoInstance180 = x3d.ProtoInstance()
ProtoInstance180.setName("Site")
ProtoInstance180.setDEF("hanim_l_femoral_lateral_epicondyles")
fieldValue181 = x3d.fieldValue()
fieldValue181.setName("name")
fieldValue181.setValue("l_femoral_lateral_epicondyles")

ProtoInstance180.addFieldValue(fieldValue181)
fieldValue182 = x3d.fieldValue()
fieldValue182.setName("translation")
fieldValue182.setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746")

ProtoInstance180.addFieldValue(fieldValue182)

fieldValue176.addChildren(ProtoInstance180)
ProtoInstance183 = x3d.ProtoInstance()
ProtoInstance183.setName("Site")
ProtoInstance183.setDEF("hanim_l_femoral_medial_epicondyles")
fieldValue184 = x3d.fieldValue()
fieldValue184.setName("name")
fieldValue184.setValue("l_femoral_lateral_epicondyles")

ProtoInstance183.addFieldValue(fieldValue184)
fieldValue185 = x3d.fieldValue()
fieldValue185.setName("translation")
fieldValue185.setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183")

ProtoInstance183.addFieldValue(fieldValue185)

fieldValue176.addChildren(ProtoInstance183)

ProtoInstance174.addFieldValue(fieldValue176)

fieldValue126.addChildren(ProtoInstance174)

ProtoInstance122.addFieldValue(fieldValue126)

fieldValue121.addChildren(ProtoInstance122)
ProtoInstance186 = x3d.ProtoInstance()
ProtoInstance186.setName("Joint")
ProtoInstance186.setDEF("hanim_r_hip")
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
fieldValue189.setValue("-0.0949999988079071 0.9171000123023987 0.002899999963119626")

ProtoInstance186.addFieldValue(fieldValue189)
fieldValue190 = x3d.fieldValue()
fieldValue190.setName("children")
ProtoInstance191 = x3d.ProtoInstance()
ProtoInstance191.setName("Joint")
ProtoInstance191.setDEF("hanim_r_knee")
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
fieldValue194.setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492")

ProtoInstance191.addFieldValue(fieldValue194)
fieldValue195 = x3d.fieldValue()
fieldValue195.setName("children")
ProtoInstance196 = x3d.ProtoInstance()
ProtoInstance196.setName("Joint")
ProtoInstance196.setDEF("hanim_r_talocrural")
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
fieldValue199.setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044")

ProtoInstance196.addFieldValue(fieldValue199)
fieldValue200 = x3d.fieldValue()
fieldValue200.setName("children")
ProtoInstance201 = x3d.ProtoInstance()
ProtoInstance201.setName("Joint")
ProtoInstance201.setDEF("hanim_r_metatarsophalangeal_")
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
fieldValue204.setValue("-0.08009999990463257 0 0.03680000081658363")

ProtoInstance201.addFieldValue(fieldValue204)
fieldValue205 = x3d.fieldValue()
fieldValue205.setName("children")
ProtoInstance206 = x3d.ProtoInstance()
ProtoInstance206.setName("Segment")
ProtoInstance206.setDEF("hanim_r_middistal")
fieldValue207 = x3d.fieldValue()
fieldValue207.setName("name")
fieldValue207.setValue("r_middistal")

ProtoInstance206.addFieldValue(fieldValue207)
fieldValue208 = x3d.fieldValue()
fieldValue208.setName("children")
ProtoInstance209 = x3d.ProtoInstance()
ProtoInstance209.setName("Site")
ProtoInstance209.setDEF("hanim_r_middistal_tip")
fieldValue210 = x3d.fieldValue()
fieldValue210.setName("name")
fieldValue210.setValue("r_middistal_tip")

ProtoInstance209.addFieldValue(fieldValue210)
fieldValue211 = x3d.fieldValue()
fieldValue211.setName("translation")
fieldValue211.setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")

ProtoInstance209.addFieldValue(fieldValue211)

fieldValue208.addChildren(ProtoInstance209)
ProtoInstance212 = x3d.ProtoInstance()
ProtoInstance212.setName("Site")
ProtoInstance212.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue213 = x3d.fieldValue()
fieldValue213.setName("name")
fieldValue213.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance212.addFieldValue(fieldValue213)
fieldValue214 = x3d.fieldValue()
fieldValue214.setName("translation")
fieldValue214.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance212.addFieldValue(fieldValue214)

fieldValue208.addChildren(ProtoInstance212)
ProtoInstance215 = x3d.ProtoInstance()
ProtoInstance215.setName("Site")
ProtoInstance215.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue216 = x3d.fieldValue()
fieldValue216.setName("name")
fieldValue216.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance215.addFieldValue(fieldValue216)
fieldValue217 = x3d.fieldValue()
fieldValue217.setName("translation")
fieldValue217.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance215.addFieldValue(fieldValue217)

fieldValue208.addChildren(ProtoInstance215)
ProtoInstance218 = x3d.ProtoInstance()
ProtoInstance218.setName("Site")
ProtoInstance218.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue219 = x3d.fieldValue()
fieldValue219.setName("name")
fieldValue219.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance218.addFieldValue(fieldValue219)
fieldValue220 = x3d.fieldValue()
fieldValue220.setName("translation")
fieldValue220.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance218.addFieldValue(fieldValue220)

fieldValue208.addChildren(ProtoInstance218)

ProtoInstance206.addFieldValue(fieldValue208)

fieldValue205.addChildren(ProtoInstance206)

ProtoInstance201.addFieldValue(fieldValue205)

fieldValue200.addChildren(ProtoInstance201)
ProtoInstance221 = x3d.ProtoInstance()
ProtoInstance221.setName("Segment")
ProtoInstance221.setDEF("hanim_r_hindfoot")
fieldValue222 = x3d.fieldValue()
fieldValue222.setName("name")
fieldValue222.setValue("r_hindfoot")

ProtoInstance221.addFieldValue(fieldValue222)
fieldValue223 = x3d.fieldValue()
fieldValue223.setName("children")
ProtoInstance224 = x3d.ProtoInstance()
ProtoInstance224.setName("Site")
ProtoInstance224.setDEF("hanim_r_lateral_malleolus")
fieldValue225 = x3d.fieldValue()
fieldValue225.setName("name")
fieldValue225.setValue("r_lateral_malleolus")

ProtoInstance224.addFieldValue(fieldValue225)
fieldValue226 = x3d.fieldValue()
fieldValue226.setName("translation")
fieldValue226.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance224.addFieldValue(fieldValue226)

fieldValue223.addChildren(ProtoInstance224)
ProtoInstance227 = x3d.ProtoInstance()
ProtoInstance227.setName("Site")
ProtoInstance227.setDEF("hanim_r_medial_malleolus")
fieldValue228 = x3d.fieldValue()
fieldValue228.setName("name")
fieldValue228.setValue("r_medial_malleolus")

ProtoInstance227.addFieldValue(fieldValue228)
fieldValue229 = x3d.fieldValue()
fieldValue229.setName("translation")
fieldValue229.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance227.addFieldValue(fieldValue229)

fieldValue223.addChildren(ProtoInstance227)
ProtoInstance230 = x3d.ProtoInstance()
ProtoInstance230.setName("Site")
ProtoInstance230.setDEF("hanim_r_sphyrion")
fieldValue231 = x3d.fieldValue()
fieldValue231.setName("name")
fieldValue231.setValue("r_sphyrion")

ProtoInstance230.addFieldValue(fieldValue231)
fieldValue232 = x3d.fieldValue()
fieldValue232.setName("translation")
fieldValue232.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance230.addFieldValue(fieldValue232)

fieldValue223.addChildren(ProtoInstance230)
ProtoInstance233 = x3d.ProtoInstance()
ProtoInstance233.setName("Site")
ProtoInstance233.setDEF("hanim_r_calcaneus_posterior")
fieldValue234 = x3d.fieldValue()
fieldValue234.setName("name")
fieldValue234.setValue("r_calcaneus_posterior")

ProtoInstance233.addFieldValue(fieldValue234)
fieldValue235 = x3d.fieldValue()
fieldValue235.setName("translation")
fieldValue235.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance233.addFieldValue(fieldValue235)

fieldValue223.addChildren(ProtoInstance233)

ProtoInstance221.addFieldValue(fieldValue223)

fieldValue200.addChildren(ProtoInstance221)

ProtoInstance196.addFieldValue(fieldValue200)

fieldValue195.addChildren(ProtoInstance196)
ProtoInstance236 = x3d.ProtoInstance()
ProtoInstance236.setName("Segment")
ProtoInstance236.setDEF("hanim_r_calf")
fieldValue237 = x3d.fieldValue()
fieldValue237.setName("name")
fieldValue237.setValue("r_calf")

ProtoInstance236.addFieldValue(fieldValue237)

fieldValue195.addChildren(ProtoInstance236)

ProtoInstance191.addFieldValue(fieldValue195)

fieldValue190.addChildren(ProtoInstance191)
ProtoInstance238 = x3d.ProtoInstance()
ProtoInstance238.setName("Segment")
ProtoInstance238.setDEF("hanim_r_thigh")
fieldValue239 = x3d.fieldValue()
fieldValue239.setName("name")
fieldValue239.setValue("r_thigh")

ProtoInstance238.addFieldValue(fieldValue239)
fieldValue240 = x3d.fieldValue()
fieldValue240.setName("children")
ProtoInstance241 = x3d.ProtoInstance()
ProtoInstance241.setName("Site")
ProtoInstance241.setDEF("hanim_r_knee_crease")
fieldValue242 = x3d.fieldValue()
fieldValue242.setName("name")
fieldValue242.setValue("r_knee_crease")

ProtoInstance241.addFieldValue(fieldValue242)
fieldValue243 = x3d.fieldValue()
fieldValue243.setName("translation")
fieldValue243.setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")

ProtoInstance241.addFieldValue(fieldValue243)

fieldValue240.addChildren(ProtoInstance241)
ProtoInstance244 = x3d.ProtoInstance()
ProtoInstance244.setName("Site")
ProtoInstance244.setDEF("hanim_r_femoral_lateral_epicondyles")
fieldValue245 = x3d.fieldValue()
fieldValue245.setName("name")
fieldValue245.setValue("r_femoral_lateral_epicondyles")

ProtoInstance244.addFieldValue(fieldValue245)
fieldValue246 = x3d.fieldValue()
fieldValue246.setName("translation")
fieldValue246.setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052")

ProtoInstance244.addFieldValue(fieldValue246)

fieldValue240.addChildren(ProtoInstance244)
ProtoInstance247 = x3d.ProtoInstance()
ProtoInstance247.setName("Site")
ProtoInstance247.setDEF("hanim_r_femoral_medial_epicondyles")
fieldValue248 = x3d.fieldValue()
fieldValue248.setName("name")
fieldValue248.setValue("r_femoral_lateral_epicondyles")

ProtoInstance247.addFieldValue(fieldValue248)
fieldValue249 = x3d.fieldValue()
fieldValue249.setName("translation")
fieldValue249.setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821")

ProtoInstance247.addFieldValue(fieldValue249)

fieldValue240.addChildren(ProtoInstance247)

ProtoInstance238.addFieldValue(fieldValue240)

fieldValue190.addChildren(ProtoInstance238)

ProtoInstance186.addFieldValue(fieldValue190)

fieldValue121.addChildren(ProtoInstance186)
ProtoInstance250 = x3d.ProtoInstance()
ProtoInstance250.setName("Segment")
ProtoInstance250.setDEF("hanim_pelvis")
fieldValue251 = x3d.fieldValue()
fieldValue251.setName("name")
fieldValue251.setValue("pelvis")

ProtoInstance250.addFieldValue(fieldValue251)

fieldValue121.addChildren(ProtoInstance250)

ProtoInstance117.addFieldValue(fieldValue121)

fieldValue116.addChildren(ProtoInstance117)
ProtoInstance252 = x3d.ProtoInstance()
ProtoInstance252.setName("Joint")
ProtoInstance252.setDEF("hanim_vl5")
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
fieldValue255.setValue("0.00279999990016222 1.0568000078201294 -0.07760000228881836")

ProtoInstance252.addFieldValue(fieldValue255)
fieldValue256 = x3d.fieldValue()
fieldValue256.setName("children")
ProtoInstance257 = x3d.ProtoInstance()
ProtoInstance257.setName("Joint")
ProtoInstance257.setDEF("hanim_skullbase")
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
fieldValue260.setValue("0.004399999976158142 1.62090003490448 0.023600000888109207")

ProtoInstance257.addFieldValue(fieldValue260)
fieldValue261 = x3d.fieldValue()
fieldValue261.setName("children")
ProtoInstance262 = x3d.ProtoInstance()
ProtoInstance262.setName("Segment")
ProtoInstance262.setDEF("hanim_skull")
fieldValue263 = x3d.fieldValue()
fieldValue263.setName("name")
fieldValue263.setValue("skull")

ProtoInstance262.addFieldValue(fieldValue263)
fieldValue264 = x3d.fieldValue()
fieldValue264.setName("children")
ProtoInstance265 = x3d.ProtoInstance()
ProtoInstance265.setName("Site")
ProtoInstance265.setDEF("hanim_skull_tip")
fieldValue266 = x3d.fieldValue()
fieldValue266.setName("name")
fieldValue266.setValue("skull_tip")

ProtoInstance265.addFieldValue(fieldValue266)
fieldValue267 = x3d.fieldValue()
fieldValue267.setName("translation")
fieldValue267.setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678")

ProtoInstance265.addFieldValue(fieldValue267)

fieldValue264.addChildren(ProtoInstance265)
ProtoInstance268 = x3d.ProtoInstance()
ProtoInstance268.setName("Site")
ProtoInstance268.setDEF("hanim_sellion")
fieldValue269 = x3d.fieldValue()
fieldValue269.setName("name")
fieldValue269.setValue("sellion")

ProtoInstance268.addFieldValue(fieldValue269)
fieldValue270 = x3d.fieldValue()
fieldValue270.setName("translation")
fieldValue270.setValue("0.005799999926239252 1.631600022315979 0.0851999968290329")

ProtoInstance268.addFieldValue(fieldValue270)

fieldValue264.addChildren(ProtoInstance268)
ProtoInstance271 = x3d.ProtoInstance()
ProtoInstance271.setName("Site")
ProtoInstance271.setDEF("hanim_r_infraorbitale")
fieldValue272 = x3d.fieldValue()
fieldValue272.setName("name")
fieldValue272.setValue("r_infraorbitale")

ProtoInstance271.addFieldValue(fieldValue272)
fieldValue273 = x3d.fieldValue()
fieldValue273.setName("translation")
fieldValue273.setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547")

ProtoInstance271.addFieldValue(fieldValue273)

fieldValue264.addChildren(ProtoInstance271)
ProtoInstance274 = x3d.ProtoInstance()
ProtoInstance274.setName("Site")
ProtoInstance274.setDEF("hanim_l_infraorbitale")
fieldValue275 = x3d.fieldValue()
fieldValue275.setName("name")
fieldValue275.setValue("l_infraorbitale")

ProtoInstance274.addFieldValue(fieldValue275)
fieldValue276 = x3d.fieldValue()
fieldValue276.setName("translation")
fieldValue276.setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547")

ProtoInstance274.addFieldValue(fieldValue276)

fieldValue264.addChildren(ProtoInstance274)
ProtoInstance277 = x3d.ProtoInstance()
ProtoInstance277.setName("Site")
ProtoInstance277.setDEF("hanim_supramenton")
fieldValue278 = x3d.fieldValue()
fieldValue278.setName("name")
fieldValue278.setValue("supramenton")

ProtoInstance277.addFieldValue(fieldValue278)
fieldValue279 = x3d.fieldValue()
fieldValue279.setName("translation")
fieldValue279.setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962")

ProtoInstance277.addFieldValue(fieldValue279)

fieldValue264.addChildren(ProtoInstance277)
ProtoInstance280 = x3d.ProtoInstance()
ProtoInstance280.setName("Site")
ProtoInstance280.setDEF("hanim_r_tragion")
fieldValue281 = x3d.fieldValue()
fieldValue281.setName("name")
fieldValue281.setValue("r_tragion")

ProtoInstance280.addFieldValue(fieldValue281)
fieldValue282 = x3d.fieldValue()
fieldValue282.setName("translation")
fieldValue282.setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642")

ProtoInstance280.addFieldValue(fieldValue282)

fieldValue264.addChildren(ProtoInstance280)
ProtoInstance283 = x3d.ProtoInstance()
ProtoInstance283.setName("Site")
ProtoInstance283.setDEF("hanim_r_gonion")
fieldValue284 = x3d.fieldValue()
fieldValue284.setName("name")
fieldValue284.setValue("r_gonion")

ProtoInstance283.addFieldValue(fieldValue284)
fieldValue285 = x3d.fieldValue()
fieldValue285.setName("translation")
fieldValue285.setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176")

ProtoInstance283.addFieldValue(fieldValue285)

fieldValue264.addChildren(ProtoInstance283)
ProtoInstance286 = x3d.ProtoInstance()
ProtoInstance286.setName("Site")
ProtoInstance286.setDEF("hanim_l_tragion")
fieldValue287 = x3d.fieldValue()
fieldValue287.setName("name")
fieldValue287.setValue("l_tragion")

ProtoInstance286.addFieldValue(fieldValue287)
fieldValue288 = x3d.fieldValue()
fieldValue288.setName("translation")
fieldValue288.setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874")

ProtoInstance286.addFieldValue(fieldValue288)

fieldValue264.addChildren(ProtoInstance286)
ProtoInstance289 = x3d.ProtoInstance()
ProtoInstance289.setName("Site")
ProtoInstance289.setDEF("hanim_l_gonion")
fieldValue290 = x3d.fieldValue()
fieldValue290.setName("name")
fieldValue290.setValue("l_gonion")

ProtoInstance289.addFieldValue(fieldValue290)
fieldValue291 = x3d.fieldValue()
fieldValue291.setName("translation")
fieldValue291.setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066")

ProtoInstance289.addFieldValue(fieldValue291)

fieldValue264.addChildren(ProtoInstance289)
ProtoInstance292 = x3d.ProtoInstance()
ProtoInstance292.setName("Site")
ProtoInstance292.setDEF("hanim_nuchale")
fieldValue293 = x3d.fieldValue()
fieldValue293.setName("name")
fieldValue293.setValue("nuchale")

ProtoInstance292.addFieldValue(fieldValue293)
fieldValue294 = x3d.fieldValue()
fieldValue294.setName("translation")
fieldValue294.setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")

ProtoInstance292.addFieldValue(fieldValue294)

fieldValue264.addChildren(ProtoInstance292)

ProtoInstance262.addFieldValue(fieldValue264)

fieldValue261.addChildren(ProtoInstance262)

ProtoInstance257.addFieldValue(fieldValue261)

fieldValue256.addChildren(ProtoInstance257)
ProtoInstance295 = x3d.ProtoInstance()
ProtoInstance295.setName("Joint")
ProtoInstance295.setDEF("hanim_l_shoulder")
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
fieldValue298.setValue("0.2029000073671341 1.437600016593933 -0.03869999945163727")

ProtoInstance295.addFieldValue(fieldValue298)
fieldValue299 = x3d.fieldValue()
fieldValue299.setName("children")
ProtoInstance300 = x3d.ProtoInstance()
ProtoInstance300.setName("Joint")
ProtoInstance300.setDEF("hanim_l_elbow")
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
fieldValue303.setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512")

ProtoInstance300.addFieldValue(fieldValue303)
fieldValue304 = x3d.fieldValue()
fieldValue304.setName("children")
ProtoInstance305 = x3d.ProtoInstance()
ProtoInstance305.setName("Joint")
ProtoInstance305.setDEF("hanim_l_radiocarpal")
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
fieldValue308.setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538")

ProtoInstance305.addFieldValue(fieldValue308)
fieldValue309 = x3d.fieldValue()
fieldValue309.setName("children")
ProtoInstance310 = x3d.ProtoInstance()
ProtoInstance310.setName("Segment")
ProtoInstance310.setDEF("hanim_l_hand")
fieldValue311 = x3d.fieldValue()
fieldValue311.setName("name")
fieldValue311.setValue("l_hand")

ProtoInstance310.addFieldValue(fieldValue311)
fieldValue312 = x3d.fieldValue()
fieldValue312.setName("children")
ProtoInstance313 = x3d.ProtoInstance()
ProtoInstance313.setName("Site")
ProtoInstance313.setDEF("hanim_l_hand_tip")
fieldValue314 = x3d.fieldValue()
fieldValue314.setName("name")
fieldValue314.setValue("l_hand_tip")

ProtoInstance313.addFieldValue(fieldValue314)
fieldValue315 = x3d.fieldValue()
fieldValue315.setName("translation")
fieldValue315.setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205")

ProtoInstance313.addFieldValue(fieldValue315)

fieldValue312.addChildren(ProtoInstance313)
ProtoInstance316 = x3d.ProtoInstance()
ProtoInstance316.setName("Site")
ProtoInstance316.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue317 = x3d.fieldValue()
fieldValue317.setName("name")
fieldValue317.setValue("l_metacarpal_phalanx_2")

ProtoInstance316.addFieldValue(fieldValue317)
fieldValue318 = x3d.fieldValue()
fieldValue318.setName("translation")
fieldValue318.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance316.addFieldValue(fieldValue318)

fieldValue312.addChildren(ProtoInstance316)
ProtoInstance319 = x3d.ProtoInstance()
ProtoInstance319.setName("Site")
ProtoInstance319.setDEF("hanim_l_dactylion")
fieldValue320 = x3d.fieldValue()
fieldValue320.setName("name")
fieldValue320.setValue("l_dactylion")

ProtoInstance319.addFieldValue(fieldValue320)
fieldValue321 = x3d.fieldValue()
fieldValue321.setName("translation")
fieldValue321.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance319.addFieldValue(fieldValue321)

fieldValue312.addChildren(ProtoInstance319)
ProtoInstance322 = x3d.ProtoInstance()
ProtoInstance322.setName("Site")
ProtoInstance322.setDEF("hanim_l_ulnar_styloid")
fieldValue323 = x3d.fieldValue()
fieldValue323.setName("name")
fieldValue323.setValue("l_ulnar_styloid")

ProtoInstance322.addFieldValue(fieldValue323)
fieldValue324 = x3d.fieldValue()
fieldValue324.setName("translation")
fieldValue324.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance322.addFieldValue(fieldValue324)

fieldValue312.addChildren(ProtoInstance322)
ProtoInstance325 = x3d.ProtoInstance()
ProtoInstance325.setName("Site")
ProtoInstance325.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue326 = x3d.fieldValue()
fieldValue326.setName("name")
fieldValue326.setValue("l_metacarpal_phalanx_5")

ProtoInstance325.addFieldValue(fieldValue326)
fieldValue327 = x3d.fieldValue()
fieldValue327.setName("translation")
fieldValue327.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance325.addFieldValue(fieldValue327)

fieldValue312.addChildren(ProtoInstance325)

ProtoInstance310.addFieldValue(fieldValue312)

fieldValue309.addChildren(ProtoInstance310)

ProtoInstance305.addFieldValue(fieldValue309)

fieldValue304.addChildren(ProtoInstance305)
ProtoInstance328 = x3d.ProtoInstance()
ProtoInstance328.setName("Segment")
ProtoInstance328.setDEF("hanim_l_forearm")
fieldValue329 = x3d.fieldValue()
fieldValue329.setName("name")
fieldValue329.setValue("l_forearm")

ProtoInstance328.addFieldValue(fieldValue329)
fieldValue330 = x3d.fieldValue()
fieldValue330.setName("children")
ProtoInstance331 = x3d.ProtoInstance()
ProtoInstance331.setName("Site")
ProtoInstance331.setDEF("hanim_l_radial_styloid")
fieldValue332 = x3d.fieldValue()
fieldValue332.setName("name")
fieldValue332.setValue("l_radial_styloid")

ProtoInstance331.addFieldValue(fieldValue332)
fieldValue333 = x3d.fieldValue()
fieldValue333.setName("translation")
fieldValue333.setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691")

ProtoInstance331.addFieldValue(fieldValue333)

fieldValue330.addChildren(ProtoInstance331)
ProtoInstance334 = x3d.ProtoInstance()
ProtoInstance334.setName("Site")
ProtoInstance334.setDEF("hanim_l_olecranon")
fieldValue335 = x3d.fieldValue()
fieldValue335.setName("name")
fieldValue335.setValue("l_olecranon")

ProtoInstance334.addFieldValue(fieldValue335)
fieldValue336 = x3d.fieldValue()
fieldValue336.setName("translation")
fieldValue336.setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")

ProtoInstance334.addFieldValue(fieldValue336)

fieldValue330.addChildren(ProtoInstance334)
ProtoInstance337 = x3d.ProtoInstance()
ProtoInstance337.setName("Site")
ProtoInstance337.setDEF("hanim_l_humeral_medial_epicondyles")
fieldValue338 = x3d.fieldValue()
fieldValue338.setName("name")
fieldValue338.setValue("l_humeral_medial_epicondyles")

ProtoInstance337.addFieldValue(fieldValue338)
fieldValue339 = x3d.fieldValue()
fieldValue339.setName("translation")
fieldValue339.setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661")

ProtoInstance337.addFieldValue(fieldValue339)

fieldValue330.addChildren(ProtoInstance337)
ProtoInstance340 = x3d.ProtoInstance()
ProtoInstance340.setName("Site")
ProtoInstance340.setDEF("hanim_l_radiale")
fieldValue341 = x3d.fieldValue()
fieldValue341.setName("name")
fieldValue341.setValue("l_radiale")

ProtoInstance340.addFieldValue(fieldValue341)
fieldValue342 = x3d.fieldValue()
fieldValue342.setName("translation")
fieldValue342.setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268")

ProtoInstance340.addFieldValue(fieldValue342)

fieldValue330.addChildren(ProtoInstance340)

ProtoInstance328.addFieldValue(fieldValue330)

fieldValue304.addChildren(ProtoInstance328)

ProtoInstance300.addFieldValue(fieldValue304)

fieldValue299.addChildren(ProtoInstance300)
ProtoInstance343 = x3d.ProtoInstance()
ProtoInstance343.setName("Segment")
ProtoInstance343.setDEF("hanim_l_upperarm")
fieldValue344 = x3d.fieldValue()
fieldValue344.setName("name")
fieldValue344.setValue("l_upperarm")

ProtoInstance343.addFieldValue(fieldValue344)
fieldValue345 = x3d.fieldValue()
fieldValue345.setName("children")
ProtoInstance346 = x3d.ProtoInstance()
ProtoInstance346.setName("Site")
ProtoInstance346.setDEF("hanim_l_humeral_lateral_epicondyles")
fieldValue347 = x3d.fieldValue()
fieldValue347.setName("name")
fieldValue347.setValue("l_humeral_lateral_epicondyles")

ProtoInstance346.addFieldValue(fieldValue347)
fieldValue348 = x3d.fieldValue()
fieldValue348.setName("translation")
fieldValue348.setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355")

ProtoInstance346.addFieldValue(fieldValue348)

fieldValue345.addChildren(ProtoInstance346)

ProtoInstance343.addFieldValue(fieldValue345)

fieldValue299.addChildren(ProtoInstance343)

ProtoInstance295.addFieldValue(fieldValue299)

fieldValue256.addChildren(ProtoInstance295)
ProtoInstance349 = x3d.ProtoInstance()
ProtoInstance349.setName("Joint")
ProtoInstance349.setDEF("hanim_r_shoulder")
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
fieldValue352.setValue("-0.1906999945640564 1.4407000541687012 -0.032499998807907104")

ProtoInstance349.addFieldValue(fieldValue352)
fieldValue353 = x3d.fieldValue()
fieldValue353.setName("children")
ProtoInstance354 = x3d.ProtoInstance()
ProtoInstance354.setName("Joint")
ProtoInstance354.setDEF("hanim_r_elbow")
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
fieldValue357.setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104")

ProtoInstance354.addFieldValue(fieldValue357)
fieldValue358 = x3d.fieldValue()
fieldValue358.setName("children")
ProtoInstance359 = x3d.ProtoInstance()
ProtoInstance359.setName("Joint")
ProtoInstance359.setDEF("hanim_r_radiocarpal")
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
fieldValue362.setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522")

ProtoInstance359.addFieldValue(fieldValue362)
fieldValue363 = x3d.fieldValue()
fieldValue363.setName("children")
ProtoInstance364 = x3d.ProtoInstance()
ProtoInstance364.setName("Segment")
ProtoInstance364.setDEF("hanim_r_hand")
fieldValue365 = x3d.fieldValue()
fieldValue365.setName("name")
fieldValue365.setValue("r_hand")

ProtoInstance364.addFieldValue(fieldValue365)
fieldValue366 = x3d.fieldValue()
fieldValue366.setName("children")
ProtoInstance367 = x3d.ProtoInstance()
ProtoInstance367.setName("Site")
ProtoInstance367.setDEF("hanim_r_hand_tip")
fieldValue368 = x3d.fieldValue()
fieldValue368.setName("name")
fieldValue368.setValue("r_hand_tip")

ProtoInstance367.addFieldValue(fieldValue368)
fieldValue369 = x3d.fieldValue()
fieldValue369.setName("translation")
fieldValue369.setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")

ProtoInstance367.addFieldValue(fieldValue369)

fieldValue366.addChildren(ProtoInstance367)
ProtoInstance370 = x3d.ProtoInstance()
ProtoInstance370.setName("Site")
ProtoInstance370.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue371 = x3d.fieldValue()
fieldValue371.setName("name")
fieldValue371.setValue("r_metacarpal_phalanx_2")

ProtoInstance370.addFieldValue(fieldValue371)
fieldValue372 = x3d.fieldValue()
fieldValue372.setName("translation")
fieldValue372.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance370.addFieldValue(fieldValue372)

fieldValue366.addChildren(ProtoInstance370)
ProtoInstance373 = x3d.ProtoInstance()
ProtoInstance373.setName("Site")
ProtoInstance373.setDEF("hanim_r_dactylion")
fieldValue374 = x3d.fieldValue()
fieldValue374.setName("name")
fieldValue374.setValue("r_dactylion")

ProtoInstance373.addFieldValue(fieldValue374)
fieldValue375 = x3d.fieldValue()
fieldValue375.setName("translation")
fieldValue375.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance373.addFieldValue(fieldValue375)

fieldValue366.addChildren(ProtoInstance373)
ProtoInstance376 = x3d.ProtoInstance()
ProtoInstance376.setName("Site")
ProtoInstance376.setDEF("hanim_r_ulnar_styloid")
fieldValue377 = x3d.fieldValue()
fieldValue377.setName("name")
fieldValue377.setValue("r_ulnar_styloid")

ProtoInstance376.addFieldValue(fieldValue377)
fieldValue378 = x3d.fieldValue()
fieldValue378.setName("translation")
fieldValue378.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance376.addFieldValue(fieldValue378)

fieldValue366.addChildren(ProtoInstance376)
ProtoInstance379 = x3d.ProtoInstance()
ProtoInstance379.setName("Site")
ProtoInstance379.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue380 = x3d.fieldValue()
fieldValue380.setName("name")
fieldValue380.setValue("r_metacarpal_phalanx_5")

ProtoInstance379.addFieldValue(fieldValue380)
fieldValue381 = x3d.fieldValue()
fieldValue381.setName("translation")
fieldValue381.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance379.addFieldValue(fieldValue381)

fieldValue366.addChildren(ProtoInstance379)

ProtoInstance364.addFieldValue(fieldValue366)

fieldValue363.addChildren(ProtoInstance364)

ProtoInstance359.addFieldValue(fieldValue363)

fieldValue358.addChildren(ProtoInstance359)
ProtoInstance382 = x3d.ProtoInstance()
ProtoInstance382.setName("Segment")
ProtoInstance382.setDEF("hanim_r_forearm")
fieldValue383 = x3d.fieldValue()
fieldValue383.setName("name")
fieldValue383.setValue("r_forearm")

ProtoInstance382.addFieldValue(fieldValue383)
fieldValue384 = x3d.fieldValue()
fieldValue384.setName("children")
ProtoInstance385 = x3d.ProtoInstance()
ProtoInstance385.setName("Site")
ProtoInstance385.setDEF("hanim_r_radial_styloid")
fieldValue386 = x3d.fieldValue()
fieldValue386.setName("name")
fieldValue386.setValue("r_radial_styloid")

ProtoInstance385.addFieldValue(fieldValue386)
fieldValue387 = x3d.fieldValue()
fieldValue387.setName("translation")
fieldValue387.setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236")

ProtoInstance385.addFieldValue(fieldValue387)

fieldValue384.addChildren(ProtoInstance385)
ProtoInstance388 = x3d.ProtoInstance()
ProtoInstance388.setName("Site")
ProtoInstance388.setDEF("hanim_r_olecranon")
fieldValue389 = x3d.fieldValue()
fieldValue389.setName("name")
fieldValue389.setValue("r_olecranon")

ProtoInstance388.addFieldValue(fieldValue389)
fieldValue390 = x3d.fieldValue()
fieldValue390.setName("translation")
fieldValue390.setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")

ProtoInstance388.addFieldValue(fieldValue390)

fieldValue384.addChildren(ProtoInstance388)
ProtoInstance391 = x3d.ProtoInstance()
ProtoInstance391.setName("Site")
ProtoInstance391.setDEF("hanim_r_humeral_medial_epicondyles")
fieldValue392 = x3d.fieldValue()
fieldValue392.setName("name")
fieldValue392.setValue("r_humeral_medial_epicondyles")

ProtoInstance391.addFieldValue(fieldValue392)
fieldValue393 = x3d.fieldValue()
fieldValue393.setName("translation")
fieldValue393.setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")

ProtoInstance391.addFieldValue(fieldValue393)

fieldValue384.addChildren(ProtoInstance391)
ProtoInstance394 = x3d.ProtoInstance()
ProtoInstance394.setName("Site")
ProtoInstance394.setDEF("hanim_r_radiale")
fieldValue395 = x3d.fieldValue()
fieldValue395.setName("name")
fieldValue395.setValue("r_radiale")

ProtoInstance394.addFieldValue(fieldValue395)
fieldValue396 = x3d.fieldValue()
fieldValue396.setName("translation")
fieldValue396.setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")

ProtoInstance394.addFieldValue(fieldValue396)

fieldValue384.addChildren(ProtoInstance394)

ProtoInstance382.addFieldValue(fieldValue384)

fieldValue358.addChildren(ProtoInstance382)

ProtoInstance354.addFieldValue(fieldValue358)

fieldValue353.addChildren(ProtoInstance354)
ProtoInstance397 = x3d.ProtoInstance()
ProtoInstance397.setName("Segment")
ProtoInstance397.setDEF("hanim_r_upperarm")
fieldValue398 = x3d.fieldValue()
fieldValue398.setName("name")
fieldValue398.setValue("r_upperarm")

ProtoInstance397.addFieldValue(fieldValue398)
fieldValue399 = x3d.fieldValue()
fieldValue399.setName("children")
ProtoInstance400 = x3d.ProtoInstance()
ProtoInstance400.setName("Site")
ProtoInstance400.setDEF("hanim_r_humeral_lateral_epicondyles")
fieldValue401 = x3d.fieldValue()
fieldValue401.setName("name")
fieldValue401.setValue("r_humeral_lateral_epicondyles")

ProtoInstance400.addFieldValue(fieldValue401)
fieldValue402 = x3d.fieldValue()
fieldValue402.setName("translation")
fieldValue402.setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")

ProtoInstance400.addFieldValue(fieldValue402)

fieldValue399.addChildren(ProtoInstance400)

ProtoInstance397.addFieldValue(fieldValue399)

fieldValue353.addChildren(ProtoInstance397)

ProtoInstance349.addFieldValue(fieldValue353)

fieldValue256.addChildren(ProtoInstance349)
ProtoInstance403 = x3d.ProtoInstance()
ProtoInstance403.setName("Segment")
ProtoInstance403.setDEF("hanim_l5")
fieldValue404 = x3d.fieldValue()
fieldValue404.setName("name")
fieldValue404.setValue("l5")

ProtoInstance403.addFieldValue(fieldValue404)
fieldValue405 = x3d.fieldValue()
fieldValue405.setName("children")
ProtoInstance406 = x3d.ProtoInstance()
ProtoInstance406.setName("Site")
ProtoInstance406.setDEF("hanim_r_clavicale")
fieldValue407 = x3d.fieldValue()
fieldValue407.setName("name")
fieldValue407.setValue("r_clavicale")

ProtoInstance406.addFieldValue(fieldValue407)
fieldValue408 = x3d.fieldValue()
fieldValue408.setName("translation")
fieldValue408.setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033")

ProtoInstance406.addFieldValue(fieldValue408)

fieldValue405.addChildren(ProtoInstance406)
ProtoInstance409 = x3d.ProtoInstance()
ProtoInstance409.setName("Site")
ProtoInstance409.setDEF("hanim_suprasternale")
fieldValue410 = x3d.fieldValue()
fieldValue410.setName("name")
fieldValue410.setValue("suprasternale")

ProtoInstance409.addFieldValue(fieldValue410)
fieldValue411 = x3d.fieldValue()
fieldValue411.setName("translation")
fieldValue411.setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869")

ProtoInstance409.addFieldValue(fieldValue411)

fieldValue405.addChildren(ProtoInstance409)
ProtoInstance412 = x3d.ProtoInstance()
ProtoInstance412.setName("Site")
ProtoInstance412.setDEF("hanim_l_clavicale")
fieldValue413 = x3d.fieldValue()
fieldValue413.setName("name")
fieldValue413.setValue("l_clavicale")

ProtoInstance412.addFieldValue(fieldValue413)
fieldValue414 = x3d.fieldValue()
fieldValue414.setName("translation")
fieldValue414.setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754")

ProtoInstance412.addFieldValue(fieldValue414)

fieldValue405.addChildren(ProtoInstance412)
ProtoInstance415 = x3d.ProtoInstance()
ProtoInstance415.setName("Site")
ProtoInstance415.setDEF("hanim_r_thelion")
fieldValue416 = x3d.fieldValue()
fieldValue416.setName("name")
fieldValue416.setValue("r_thelion")

ProtoInstance415.addFieldValue(fieldValue416)
fieldValue417 = x3d.fieldValue()
fieldValue417.setName("translation")
fieldValue417.setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911")

ProtoInstance415.addFieldValue(fieldValue417)

fieldValue405.addChildren(ProtoInstance415)
ProtoInstance418 = x3d.ProtoInstance()
ProtoInstance418.setName("Site")
ProtoInstance418.setDEF("hanim_l_thelion")
fieldValue419 = x3d.fieldValue()
fieldValue419.setName("name")
fieldValue419.setValue("l_thelion")

ProtoInstance418.addFieldValue(fieldValue419)
fieldValue420 = x3d.fieldValue()
fieldValue420.setName("translation")
fieldValue420.setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689")

ProtoInstance418.addFieldValue(fieldValue420)

fieldValue405.addChildren(ProtoInstance418)
ProtoInstance421 = x3d.ProtoInstance()
ProtoInstance421.setName("Site")
ProtoInstance421.setDEF("hanim_substernale")
fieldValue422 = x3d.fieldValue()
fieldValue422.setName("name")
fieldValue422.setValue("substernale")

ProtoInstance421.addFieldValue(fieldValue422)
fieldValue423 = x3d.fieldValue()
fieldValue423.setName("translation")
fieldValue423.setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683")

ProtoInstance421.addFieldValue(fieldValue423)

fieldValue405.addChildren(ProtoInstance421)
ProtoInstance424 = x3d.ProtoInstance()
ProtoInstance424.setName("Site")
ProtoInstance424.setDEF("hanim_r_rib10")
fieldValue425 = x3d.fieldValue()
fieldValue425.setName("name")
fieldValue425.setValue("r_rib10")

ProtoInstance424.addFieldValue(fieldValue425)
fieldValue426 = x3d.fieldValue()
fieldValue426.setName("translation")
fieldValue426.setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432")

ProtoInstance424.addFieldValue(fieldValue426)

fieldValue405.addChildren(ProtoInstance424)
ProtoInstance427 = x3d.ProtoInstance()
ProtoInstance427.setName("Site")
ProtoInstance427.setDEF("hanim_l_rib10")
fieldValue428 = x3d.fieldValue()
fieldValue428.setName("name")
fieldValue428.setValue("l_rib10")

ProtoInstance427.addFieldValue(fieldValue428)
fieldValue429 = x3d.fieldValue()
fieldValue429.setName("translation")
fieldValue429.setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202")

ProtoInstance427.addFieldValue(fieldValue429)

fieldValue405.addChildren(ProtoInstance427)
ProtoInstance430 = x3d.ProtoInstance()
ProtoInstance430.setName("Site")
ProtoInstance430.setDEF("hanim_cervicale")
fieldValue431 = x3d.fieldValue()
fieldValue431.setName("name")
fieldValue431.setValue("cervicale")

ProtoInstance430.addFieldValue(fieldValue431)
fieldValue432 = x3d.fieldValue()
fieldValue432.setName("translation")
fieldValue432.setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754")

ProtoInstance430.addFieldValue(fieldValue432)

fieldValue405.addChildren(ProtoInstance430)
ProtoInstance433 = x3d.ProtoInstance()
ProtoInstance433.setName("Site")
ProtoInstance433.setDEF("hanim_spine_2_lower_back")
fieldValue434 = x3d.fieldValue()
fieldValue434.setName("name")
fieldValue434.setValue("spine_2_lower_back")

ProtoInstance433.addFieldValue(fieldValue434)
fieldValue435 = x3d.fieldValue()
fieldValue435.setName("translation")
fieldValue435.setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661")

ProtoInstance433.addFieldValue(fieldValue435)

fieldValue405.addChildren(ProtoInstance433)
ProtoInstance436 = x3d.ProtoInstance()
ProtoInstance436.setName("Site")
ProtoInstance436.setDEF("hanim_waist_preferred_posterior")
fieldValue437 = x3d.fieldValue()
fieldValue437.setName("name")
fieldValue437.setValue("waist_preferred_posterior")

ProtoInstance436.addFieldValue(fieldValue437)
fieldValue438 = x3d.fieldValue()
fieldValue438.setName("translation")
fieldValue438.setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754")

ProtoInstance436.addFieldValue(fieldValue438)

fieldValue405.addChildren(ProtoInstance436)
ProtoInstance439 = x3d.ProtoInstance()
ProtoInstance439.setName("Site")
ProtoInstance439.setDEF("hanim_r_acromion")
fieldValue440 = x3d.fieldValue()
fieldValue440.setName("name")
fieldValue440.setValue("r_acromion")

ProtoInstance439.addFieldValue(fieldValue440)
fieldValue441 = x3d.fieldValue()
fieldValue441.setName("translation")
fieldValue441.setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541")

ProtoInstance439.addFieldValue(fieldValue441)

fieldValue405.addChildren(ProtoInstance439)
ProtoInstance442 = x3d.ProtoInstance()
ProtoInstance442.setName("Site")
ProtoInstance442.setDEF("hanim_r_axilla_proximal")
fieldValue443 = x3d.fieldValue()
fieldValue443.setName("name")
fieldValue443.setValue("r_axilla_proximal")

ProtoInstance442.addFieldValue(fieldValue443)
fieldValue444 = x3d.fieldValue()
fieldValue444.setName("translation")
fieldValue444.setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438")

ProtoInstance442.addFieldValue(fieldValue444)

fieldValue405.addChildren(ProtoInstance442)
ProtoInstance445 = x3d.ProtoInstance()
ProtoInstance445.setName("Site")
ProtoInstance445.setDEF("hanim_r_axilla_distal")
fieldValue446 = x3d.fieldValue()
fieldValue446.setName("name")
fieldValue446.setValue("r_axilla_distal")

ProtoInstance445.addFieldValue(fieldValue446)
fieldValue447 = x3d.fieldValue()
fieldValue447.setName("translation")
fieldValue447.setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678")

ProtoInstance445.addFieldValue(fieldValue447)

fieldValue405.addChildren(ProtoInstance445)
ProtoInstance448 = x3d.ProtoInstance()
ProtoInstance448.setName("Site")
ProtoInstance448.setDEF("hanim_l_acromion")
fieldValue449 = x3d.fieldValue()
fieldValue449.setName("name")
fieldValue449.setValue("l_acromion")

ProtoInstance448.addFieldValue(fieldValue449)
fieldValue450 = x3d.fieldValue()
fieldValue450.setName("translation")
fieldValue450.setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014")

ProtoInstance448.addFieldValue(fieldValue450)

fieldValue405.addChildren(ProtoInstance448)
ProtoInstance451 = x3d.ProtoInstance()
ProtoInstance451.setName("Site")
ProtoInstance451.setDEF("hanim_l_axilla_proximal")
fieldValue452 = x3d.fieldValue()
fieldValue452.setName("name")
fieldValue452.setValue("l_axilla_proximal")

ProtoInstance451.addFieldValue(fieldValue452)
fieldValue453 = x3d.fieldValue()
fieldValue453.setName("translation")
fieldValue453.setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937")

ProtoInstance451.addFieldValue(fieldValue453)

fieldValue405.addChildren(ProtoInstance451)
ProtoInstance454 = x3d.ProtoInstance()
ProtoInstance454.setName("Site")
ProtoInstance454.setDEF("hanim_l_axilla_distal")
fieldValue455 = x3d.fieldValue()
fieldValue455.setName("name")
fieldValue455.setValue("l_axilla_distal")

ProtoInstance454.addFieldValue(fieldValue455)
fieldValue456 = x3d.fieldValue()
fieldValue456.setName("translation")
fieldValue456.setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388")

ProtoInstance454.addFieldValue(fieldValue456)

fieldValue405.addChildren(ProtoInstance454)
ProtoInstance457 = x3d.ProtoInstance()
ProtoInstance457.setName("Site")
ProtoInstance457.setDEF("hanim_r_neck_base")
fieldValue458 = x3d.fieldValue()
fieldValue458.setName("name")
fieldValue458.setValue("r_neck_base")

ProtoInstance457.addFieldValue(fieldValue458)
fieldValue459 = x3d.fieldValue()
fieldValue459.setName("translation")
fieldValue459.setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071")

ProtoInstance457.addFieldValue(fieldValue459)

fieldValue405.addChildren(ProtoInstance457)
ProtoInstance460 = x3d.ProtoInstance()
ProtoInstance460.setName("Site")
ProtoInstance460.setDEF("hanim_l_neck_base")
fieldValue461 = x3d.fieldValue()
fieldValue461.setName("name")
fieldValue461.setValue("l_neck_base")

ProtoInstance460.addFieldValue(fieldValue461)
fieldValue462 = x3d.fieldValue()
fieldValue462.setName("translation")
fieldValue462.setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478")

ProtoInstance460.addFieldValue(fieldValue462)

fieldValue405.addChildren(ProtoInstance460)
ProtoInstance463 = x3d.ProtoInstance()
ProtoInstance463.setName("Site")
ProtoInstance463.setDEF("hanim_navel")
fieldValue464 = x3d.fieldValue()
fieldValue464.setName("name")
fieldValue464.setValue("navel")

ProtoInstance463.addFieldValue(fieldValue464)
fieldValue465 = x3d.fieldValue()
fieldValue465.setName("translation")
fieldValue465.setValue("0.006899999920278788 1.09660005569458 0.10170000046491623")

ProtoInstance463.addFieldValue(fieldValue465)

fieldValue405.addChildren(ProtoInstance463)

ProtoInstance403.addFieldValue(fieldValue405)

fieldValue256.addChildren(ProtoInstance403)

ProtoInstance252.addFieldValue(fieldValue256)

fieldValue116.addChildren(ProtoInstance252)
ProtoInstance466 = x3d.ProtoInstance()
ProtoInstance466.setName("Segment")
ProtoInstance466.setDEF("hanim_sacrum")
fieldValue467 = x3d.fieldValue()
fieldValue467.setName("name")
fieldValue467.setValue("sacrum")

ProtoInstance466.addFieldValue(fieldValue467)
fieldValue468 = x3d.fieldValue()
fieldValue468.setName("children")
ProtoInstance469 = x3d.ProtoInstance()
ProtoInstance469.setName("Site")
ProtoInstance469.setDEF("hanim_r_asis")
fieldValue470 = x3d.fieldValue()
fieldValue470.setName("name")
fieldValue470.setValue("r_asis")

ProtoInstance469.addFieldValue(fieldValue470)
fieldValue471 = x3d.fieldValue()
fieldValue471.setName("translation")
fieldValue471.setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747")

ProtoInstance469.addFieldValue(fieldValue471)

fieldValue468.addChildren(ProtoInstance469)
ProtoInstance472 = x3d.ProtoInstance()
ProtoInstance472.setName("Site")
ProtoInstance472.setDEF("hanim_l_asis")
fieldValue473 = x3d.fieldValue()
fieldValue473.setName("name")
fieldValue473.setValue("l_asis")

ProtoInstance472.addFieldValue(fieldValue473)
fieldValue474 = x3d.fieldValue()
fieldValue474.setName("translation")
fieldValue474.setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836")

ProtoInstance472.addFieldValue(fieldValue474)

fieldValue468.addChildren(ProtoInstance472)
ProtoInstance475 = x3d.ProtoInstance()
ProtoInstance475.setName("Site")
ProtoInstance475.setDEF("hanim_r_iliocristale")
fieldValue476 = x3d.fieldValue()
fieldValue476.setName("name")
fieldValue476.setValue("r_iliocristale")

ProtoInstance475.addFieldValue(fieldValue476)
fieldValue477 = x3d.fieldValue()
fieldValue477.setName("translation")
fieldValue477.setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187")

ProtoInstance475.addFieldValue(fieldValue477)

fieldValue468.addChildren(ProtoInstance475)
ProtoInstance478 = x3d.ProtoInstance()
ProtoInstance478.setName("Site")
ProtoInstance478.setDEF("hanim_r_trochanterion")
fieldValue479 = x3d.fieldValue()
fieldValue479.setName("name")
fieldValue479.setValue("r_trochanterion")

ProtoInstance478.addFieldValue(fieldValue479)
fieldValue480 = x3d.fieldValue()
fieldValue480.setName("translation")
fieldValue480.setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514")

ProtoInstance478.addFieldValue(fieldValue480)

fieldValue468.addChildren(ProtoInstance478)
ProtoInstance481 = x3d.ProtoInstance()
ProtoInstance481.setName("Site")
ProtoInstance481.setDEF("hanim_l_iliocristale")
fieldValue482 = x3d.fieldValue()
fieldValue482.setName("name")
fieldValue482.setValue("l_iliocristale")

ProtoInstance481.addFieldValue(fieldValue482)
fieldValue483 = x3d.fieldValue()
fieldValue483.setName("translation")
fieldValue483.setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001")

ProtoInstance481.addFieldValue(fieldValue483)

fieldValue468.addChildren(ProtoInstance481)
ProtoInstance484 = x3d.ProtoInstance()
ProtoInstance484.setName("Site")
ProtoInstance484.setDEF("hanim_l_trochanterion")
fieldValue485 = x3d.fieldValue()
fieldValue485.setName("name")
fieldValue485.setValue("l_trochanterion")

ProtoInstance484.addFieldValue(fieldValue485)
fieldValue486 = x3d.fieldValue()
fieldValue486.setName("translation")
fieldValue486.setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183")

ProtoInstance484.addFieldValue(fieldValue486)

fieldValue468.addChildren(ProtoInstance484)
ProtoInstance487 = x3d.ProtoInstance()
ProtoInstance487.setName("Site")
ProtoInstance487.setDEF("hanim_r_psis")
fieldValue488 = x3d.fieldValue()
fieldValue488.setName("name")
fieldValue488.setValue("r_psis")

ProtoInstance487.addFieldValue(fieldValue488)
fieldValue489 = x3d.fieldValue()
fieldValue489.setName("translation")
fieldValue489.setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082")

ProtoInstance487.addFieldValue(fieldValue489)

fieldValue468.addChildren(ProtoInstance487)
ProtoInstance490 = x3d.ProtoInstance()
ProtoInstance490.setName("Site")
ProtoInstance490.setDEF("hanim_l_psis")
fieldValue491 = x3d.fieldValue()
fieldValue491.setName("name")
fieldValue491.setValue("l_psis")

ProtoInstance490.addFieldValue(fieldValue491)
fieldValue492 = x3d.fieldValue()
fieldValue492.setName("translation")
fieldValue492.setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388")

ProtoInstance490.addFieldValue(fieldValue492)

fieldValue468.addChildren(ProtoInstance490)
ProtoInstance493 = x3d.ProtoInstance()
ProtoInstance493.setName("Site")
ProtoInstance493.setDEF("hanim_crotch")
fieldValue494 = x3d.fieldValue()
fieldValue494.setName("name")
fieldValue494.setValue("crotch")

ProtoInstance493.addFieldValue(fieldValue494)
fieldValue495 = x3d.fieldValue()
fieldValue495.setName("translation")
fieldValue495.setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367")

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
ProtoInstance497.setName("Joint")
ProtoInstance497.setDEF("hanim_humanoid_root")
fieldValue498 = x3d.fieldValue()
fieldValue498.setName("stiffness")
fieldValue498.setValue("1 1 1")

ProtoInstance497.addFieldValue(fieldValue498)
fieldValue499 = x3d.fieldValue()
fieldValue499.setName("name")
fieldValue499.setValue("humanoid_root")

ProtoInstance497.addFieldValue(fieldValue499)
fieldValue500 = x3d.fieldValue()
fieldValue500.setName("center")
fieldValue500.setValue("0 0.8240000009536743 0.027699999511241913")

ProtoInstance497.addFieldValue(fieldValue500)
fieldValue501 = x3d.fieldValue()
fieldValue501.setName("children")
ProtoInstance502 = x3d.ProtoInstance()
ProtoInstance502.setName("Joint")
ProtoInstance502.setDEF("hanim_sacroiliac")
fieldValue503 = x3d.fieldValue()
fieldValue503.setName("stiffness")
fieldValue503.setValue("1 1 1")

ProtoInstance502.addFieldValue(fieldValue503)
fieldValue504 = x3d.fieldValue()
fieldValue504.setName("name")
fieldValue504.setValue("sacroiliac")

ProtoInstance502.addFieldValue(fieldValue504)
fieldValue505 = x3d.fieldValue()
fieldValue505.setName("center")
fieldValue505.setValue("0 0.914900004863739 0.0015999999595806003")

ProtoInstance502.addFieldValue(fieldValue505)
fieldValue506 = x3d.fieldValue()
fieldValue506.setName("children")
ProtoInstance507 = x3d.ProtoInstance()
ProtoInstance507.setName("Joint")
ProtoInstance507.setDEF("hanim_l_hip")
fieldValue508 = x3d.fieldValue()
fieldValue508.setName("stiffness")
fieldValue508.setValue("1 1 1")

ProtoInstance507.addFieldValue(fieldValue508)
fieldValue509 = x3d.fieldValue()
fieldValue509.setName("name")
fieldValue509.setValue("l_hip")

ProtoInstance507.addFieldValue(fieldValue509)
fieldValue510 = x3d.fieldValue()
fieldValue510.setName("center")
fieldValue510.setValue("0.09610000252723694 0.9124000072479248 -0.00009999999747378752")

ProtoInstance507.addFieldValue(fieldValue510)
fieldValue511 = x3d.fieldValue()
fieldValue511.setName("children")
ProtoInstance512 = x3d.ProtoInstance()
ProtoInstance512.setName("Joint")
ProtoInstance512.setDEF("hanim_l_knee")
fieldValue513 = x3d.fieldValue()
fieldValue513.setName("stiffness")
fieldValue513.setValue("1 1 1")

ProtoInstance512.addFieldValue(fieldValue513)
fieldValue514 = x3d.fieldValue()
fieldValue514.setName("name")
fieldValue514.setValue("l_knee")

ProtoInstance512.addFieldValue(fieldValue514)
fieldValue515 = x3d.fieldValue()
fieldValue515.setName("center")
fieldValue515.setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995")

ProtoInstance512.addFieldValue(fieldValue515)
fieldValue516 = x3d.fieldValue()
fieldValue516.setName("children")
ProtoInstance517 = x3d.ProtoInstance()
ProtoInstance517.setName("Joint")
ProtoInstance517.setDEF("hanim_l_talocrural")
fieldValue518 = x3d.fieldValue()
fieldValue518.setName("stiffness")
fieldValue518.setValue("1 1 1")

ProtoInstance517.addFieldValue(fieldValue518)
fieldValue519 = x3d.fieldValue()
fieldValue519.setName("name")
fieldValue519.setValue("l_talocrural")

ProtoInstance517.addFieldValue(fieldValue519)
fieldValue520 = x3d.fieldValue()
fieldValue520.setName("center")
fieldValue520.setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727")

ProtoInstance517.addFieldValue(fieldValue520)
fieldValue521 = x3d.fieldValue()
fieldValue521.setName("children")
ProtoInstance522 = x3d.ProtoInstance()
ProtoInstance522.setName("Joint")
ProtoInstance522.setDEF("hanim_l_metatarsophalangeal_")
fieldValue523 = x3d.fieldValue()
fieldValue523.setName("stiffness")
fieldValue523.setValue("1 1 1")

ProtoInstance522.addFieldValue(fieldValue523)
fieldValue524 = x3d.fieldValue()
fieldValue524.setName("name")
fieldValue524.setValue("l_metatarsophalangeal_")

ProtoInstance522.addFieldValue(fieldValue524)
fieldValue525 = x3d.fieldValue()
fieldValue525.setName("center")
fieldValue525.setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363")

ProtoInstance522.addFieldValue(fieldValue525)
fieldValue526 = x3d.fieldValue()
fieldValue526.setName("children")
ProtoInstance527 = x3d.ProtoInstance()
ProtoInstance527.setName("Segment")
ProtoInstance527.setDEF("hanim_l_middistal")
fieldValue528 = x3d.fieldValue()
fieldValue528.setName("name")
fieldValue528.setValue("l_middistal")

ProtoInstance527.addFieldValue(fieldValue528)
fieldValue529 = x3d.fieldValue()
fieldValue529.setName("children")
ProtoInstance530 = x3d.ProtoInstance()
ProtoInstance530.setName("Site")
ProtoInstance530.setDEF("hanim_l_middistal_tip")
fieldValue531 = x3d.fieldValue()
fieldValue531.setName("name")
fieldValue531.setValue("l_middistal_tip")

ProtoInstance530.addFieldValue(fieldValue531)
fieldValue532 = x3d.fieldValue()
fieldValue532.setName("translation")
fieldValue532.setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261")

ProtoInstance530.addFieldValue(fieldValue532)

fieldValue529.addChildren(ProtoInstance530)
ProtoInstance533 = x3d.ProtoInstance()
ProtoInstance533.setName("Site")
ProtoInstance533.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue534 = x3d.fieldValue()
fieldValue534.setName("name")
fieldValue534.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance533.addFieldValue(fieldValue534)
fieldValue535 = x3d.fieldValue()
fieldValue535.setName("translation")
fieldValue535.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance533.addFieldValue(fieldValue535)

fieldValue529.addChildren(ProtoInstance533)
ProtoInstance536 = x3d.ProtoInstance()
ProtoInstance536.setName("Site")
ProtoInstance536.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue537 = x3d.fieldValue()
fieldValue537.setName("name")
fieldValue537.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance536.addFieldValue(fieldValue537)
fieldValue538 = x3d.fieldValue()
fieldValue538.setName("translation")
fieldValue538.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance536.addFieldValue(fieldValue538)

fieldValue529.addChildren(ProtoInstance536)
ProtoInstance539 = x3d.ProtoInstance()
ProtoInstance539.setName("Site")
ProtoInstance539.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue540 = x3d.fieldValue()
fieldValue540.setName("name")
fieldValue540.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance539.addFieldValue(fieldValue540)
fieldValue541 = x3d.fieldValue()
fieldValue541.setName("translation")
fieldValue541.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance539.addFieldValue(fieldValue541)

fieldValue529.addChildren(ProtoInstance539)

ProtoInstance527.addFieldValue(fieldValue529)

fieldValue526.addChildren(ProtoInstance527)

ProtoInstance522.addFieldValue(fieldValue526)

fieldValue521.addChildren(ProtoInstance522)
ProtoInstance542 = x3d.ProtoInstance()
ProtoInstance542.setName("Segment")
ProtoInstance542.setDEF("hanim_l_hindfoot")
fieldValue543 = x3d.fieldValue()
fieldValue543.setName("name")
fieldValue543.setValue("l_hindfoot")

ProtoInstance542.addFieldValue(fieldValue543)
fieldValue544 = x3d.fieldValue()
fieldValue544.setName("children")
ProtoInstance545 = x3d.ProtoInstance()
ProtoInstance545.setName("Site")
ProtoInstance545.setDEF("hanim_l_lateral_malleolus")
fieldValue546 = x3d.fieldValue()
fieldValue546.setName("name")
fieldValue546.setValue("l_lateral_malleolus")

ProtoInstance545.addFieldValue(fieldValue546)
fieldValue547 = x3d.fieldValue()
fieldValue547.setName("translation")
fieldValue547.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance545.addFieldValue(fieldValue547)

fieldValue544.addChildren(ProtoInstance545)
ProtoInstance548 = x3d.ProtoInstance()
ProtoInstance548.setName("Site")
ProtoInstance548.setDEF("hanim_l_medial_malleolus")
fieldValue549 = x3d.fieldValue()
fieldValue549.setName("name")
fieldValue549.setValue("l_medial_malleolus")

ProtoInstance548.addFieldValue(fieldValue549)
fieldValue550 = x3d.fieldValue()
fieldValue550.setName("translation")
fieldValue550.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance548.addFieldValue(fieldValue550)

fieldValue544.addChildren(ProtoInstance548)
ProtoInstance551 = x3d.ProtoInstance()
ProtoInstance551.setName("Site")
ProtoInstance551.setDEF("hanim_l_sphyrion")
fieldValue552 = x3d.fieldValue()
fieldValue552.setName("name")
fieldValue552.setValue("l_sphyrion")

ProtoInstance551.addFieldValue(fieldValue552)
fieldValue553 = x3d.fieldValue()
fieldValue553.setName("translation")
fieldValue553.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance551.addFieldValue(fieldValue553)

fieldValue544.addChildren(ProtoInstance551)
ProtoInstance554 = x3d.ProtoInstance()
ProtoInstance554.setName("Site")
ProtoInstance554.setDEF("hanim_l_calcaneus_posterior")
fieldValue555 = x3d.fieldValue()
fieldValue555.setName("name")
fieldValue555.setValue("l_calcaneus_posterior")

ProtoInstance554.addFieldValue(fieldValue555)
fieldValue556 = x3d.fieldValue()
fieldValue556.setName("translation")
fieldValue556.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance554.addFieldValue(fieldValue556)

fieldValue544.addChildren(ProtoInstance554)

ProtoInstance542.addFieldValue(fieldValue544)

fieldValue521.addChildren(ProtoInstance542)

ProtoInstance517.addFieldValue(fieldValue521)

fieldValue516.addChildren(ProtoInstance517)
ProtoInstance557 = x3d.ProtoInstance()
ProtoInstance557.setName("Segment")
ProtoInstance557.setDEF("hanim_l_calf")
fieldValue558 = x3d.fieldValue()
fieldValue558.setName("name")
fieldValue558.setValue("l_calf")

ProtoInstance557.addFieldValue(fieldValue558)

fieldValue516.addChildren(ProtoInstance557)

ProtoInstance512.addFieldValue(fieldValue516)

fieldValue511.addChildren(ProtoInstance512)
ProtoInstance559 = x3d.ProtoInstance()
ProtoInstance559.setName("Segment")
ProtoInstance559.setDEF("hanim_l_thigh")
fieldValue560 = x3d.fieldValue()
fieldValue560.setName("name")
fieldValue560.setValue("l_thigh")

ProtoInstance559.addFieldValue(fieldValue560)
fieldValue561 = x3d.fieldValue()
fieldValue561.setName("children")
ProtoInstance562 = x3d.ProtoInstance()
ProtoInstance562.setName("Site")
ProtoInstance562.setDEF("hanim_l_knee_crease")
fieldValue563 = x3d.fieldValue()
fieldValue563.setName("name")
fieldValue563.setValue("l_knee_crease")

ProtoInstance562.addFieldValue(fieldValue563)
fieldValue564 = x3d.fieldValue()
fieldValue564.setName("translation")
fieldValue564.setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757")

ProtoInstance562.addFieldValue(fieldValue564)

fieldValue561.addChildren(ProtoInstance562)
ProtoInstance565 = x3d.ProtoInstance()
ProtoInstance565.setName("Site")
ProtoInstance565.setDEF("hanim_l_femoral_lateral_epicondyles")
fieldValue566 = x3d.fieldValue()
fieldValue566.setName("name")
fieldValue566.setValue("l_femoral_lateral_epicondyles")

ProtoInstance565.addFieldValue(fieldValue566)
fieldValue567 = x3d.fieldValue()
fieldValue567.setName("translation")
fieldValue567.setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746")

ProtoInstance565.addFieldValue(fieldValue567)

fieldValue561.addChildren(ProtoInstance565)
ProtoInstance568 = x3d.ProtoInstance()
ProtoInstance568.setName("Site")
ProtoInstance568.setDEF("hanim_l_femoral_medial_epicondyles")
fieldValue569 = x3d.fieldValue()
fieldValue569.setName("name")
fieldValue569.setValue("l_femoral_lateral_epicondyles")

ProtoInstance568.addFieldValue(fieldValue569)
fieldValue570 = x3d.fieldValue()
fieldValue570.setName("translation")
fieldValue570.setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183")

ProtoInstance568.addFieldValue(fieldValue570)

fieldValue561.addChildren(ProtoInstance568)

ProtoInstance559.addFieldValue(fieldValue561)

fieldValue511.addChildren(ProtoInstance559)

ProtoInstance507.addFieldValue(fieldValue511)

fieldValue506.addChildren(ProtoInstance507)
ProtoInstance571 = x3d.ProtoInstance()
ProtoInstance571.setName("Joint")
ProtoInstance571.setDEF("hanim_r_hip")
fieldValue572 = x3d.fieldValue()
fieldValue572.setName("stiffness")
fieldValue572.setValue("1 1 1")

ProtoInstance571.addFieldValue(fieldValue572)
fieldValue573 = x3d.fieldValue()
fieldValue573.setName("name")
fieldValue573.setValue("r_hip")

ProtoInstance571.addFieldValue(fieldValue573)
fieldValue574 = x3d.fieldValue()
fieldValue574.setName("center")
fieldValue574.setValue("-0.0949999988079071 0.9171000123023987 0.002899999963119626")

ProtoInstance571.addFieldValue(fieldValue574)
fieldValue575 = x3d.fieldValue()
fieldValue575.setName("children")
ProtoInstance576 = x3d.ProtoInstance()
ProtoInstance576.setName("Joint")
ProtoInstance576.setDEF("hanim_r_knee")
fieldValue577 = x3d.fieldValue()
fieldValue577.setName("stiffness")
fieldValue577.setValue("1 1 1")

ProtoInstance576.addFieldValue(fieldValue577)
fieldValue578 = x3d.fieldValue()
fieldValue578.setName("name")
fieldValue578.setValue("r_knee")

ProtoInstance576.addFieldValue(fieldValue578)
fieldValue579 = x3d.fieldValue()
fieldValue579.setName("center")
fieldValue579.setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492")

ProtoInstance576.addFieldValue(fieldValue579)
fieldValue580 = x3d.fieldValue()
fieldValue580.setName("children")
ProtoInstance581 = x3d.ProtoInstance()
ProtoInstance581.setName("Joint")
ProtoInstance581.setDEF("hanim_r_talocrural")
fieldValue582 = x3d.fieldValue()
fieldValue582.setName("stiffness")
fieldValue582.setValue("1 1 1")

ProtoInstance581.addFieldValue(fieldValue582)
fieldValue583 = x3d.fieldValue()
fieldValue583.setName("name")
fieldValue583.setValue("r_talocrural")

ProtoInstance581.addFieldValue(fieldValue583)
fieldValue584 = x3d.fieldValue()
fieldValue584.setName("center")
fieldValue584.setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044")

ProtoInstance581.addFieldValue(fieldValue584)
fieldValue585 = x3d.fieldValue()
fieldValue585.setName("children")
ProtoInstance586 = x3d.ProtoInstance()
ProtoInstance586.setName("Joint")
ProtoInstance586.setDEF("hanim_r_metatarsophalangeal_")
fieldValue587 = x3d.fieldValue()
fieldValue587.setName("stiffness")
fieldValue587.setValue("1 1 1")

ProtoInstance586.addFieldValue(fieldValue587)
fieldValue588 = x3d.fieldValue()
fieldValue588.setName("name")
fieldValue588.setValue("r_metatarsophalangeal_")

ProtoInstance586.addFieldValue(fieldValue588)
fieldValue589 = x3d.fieldValue()
fieldValue589.setName("center")
fieldValue589.setValue("-0.08009999990463257 0 0.03680000081658363")

ProtoInstance586.addFieldValue(fieldValue589)
fieldValue590 = x3d.fieldValue()
fieldValue590.setName("children")
ProtoInstance591 = x3d.ProtoInstance()
ProtoInstance591.setName("Segment")
ProtoInstance591.setDEF("hanim_r_middistal")
fieldValue592 = x3d.fieldValue()
fieldValue592.setName("name")
fieldValue592.setValue("r_middistal")

ProtoInstance591.addFieldValue(fieldValue592)
fieldValue593 = x3d.fieldValue()
fieldValue593.setName("children")
ProtoInstance594 = x3d.ProtoInstance()
ProtoInstance594.setName("Site")
ProtoInstance594.setDEF("hanim_r_middistal_tip")
fieldValue595 = x3d.fieldValue()
fieldValue595.setName("name")
fieldValue595.setValue("r_middistal_tip")

ProtoInstance594.addFieldValue(fieldValue595)
fieldValue596 = x3d.fieldValue()
fieldValue596.setName("translation")
fieldValue596.setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")

ProtoInstance594.addFieldValue(fieldValue596)

fieldValue593.addChildren(ProtoInstance594)
ProtoInstance597 = x3d.ProtoInstance()
ProtoInstance597.setName("Site")
ProtoInstance597.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue598 = x3d.fieldValue()
fieldValue598.setName("name")
fieldValue598.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance597.addFieldValue(fieldValue598)
fieldValue599 = x3d.fieldValue()
fieldValue599.setName("translation")
fieldValue599.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance597.addFieldValue(fieldValue599)

fieldValue593.addChildren(ProtoInstance597)
ProtoInstance600 = x3d.ProtoInstance()
ProtoInstance600.setName("Site")
ProtoInstance600.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue601 = x3d.fieldValue()
fieldValue601.setName("name")
fieldValue601.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance600.addFieldValue(fieldValue601)
fieldValue602 = x3d.fieldValue()
fieldValue602.setName("translation")
fieldValue602.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance600.addFieldValue(fieldValue602)

fieldValue593.addChildren(ProtoInstance600)
ProtoInstance603 = x3d.ProtoInstance()
ProtoInstance603.setName("Site")
ProtoInstance603.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue604 = x3d.fieldValue()
fieldValue604.setName("name")
fieldValue604.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance603.addFieldValue(fieldValue604)
fieldValue605 = x3d.fieldValue()
fieldValue605.setName("translation")
fieldValue605.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance603.addFieldValue(fieldValue605)

fieldValue593.addChildren(ProtoInstance603)

ProtoInstance591.addFieldValue(fieldValue593)

fieldValue590.addChildren(ProtoInstance591)

ProtoInstance586.addFieldValue(fieldValue590)

fieldValue585.addChildren(ProtoInstance586)
ProtoInstance606 = x3d.ProtoInstance()
ProtoInstance606.setName("Segment")
ProtoInstance606.setDEF("hanim_r_hindfoot")
fieldValue607 = x3d.fieldValue()
fieldValue607.setName("name")
fieldValue607.setValue("r_hindfoot")

ProtoInstance606.addFieldValue(fieldValue607)
fieldValue608 = x3d.fieldValue()
fieldValue608.setName("children")
ProtoInstance609 = x3d.ProtoInstance()
ProtoInstance609.setName("Site")
ProtoInstance609.setDEF("hanim_r_lateral_malleolus")
fieldValue610 = x3d.fieldValue()
fieldValue610.setName("name")
fieldValue610.setValue("r_lateral_malleolus")

ProtoInstance609.addFieldValue(fieldValue610)
fieldValue611 = x3d.fieldValue()
fieldValue611.setName("translation")
fieldValue611.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance609.addFieldValue(fieldValue611)

fieldValue608.addChildren(ProtoInstance609)
ProtoInstance612 = x3d.ProtoInstance()
ProtoInstance612.setName("Site")
ProtoInstance612.setDEF("hanim_r_medial_malleolus")
fieldValue613 = x3d.fieldValue()
fieldValue613.setName("name")
fieldValue613.setValue("r_medial_malleolus")

ProtoInstance612.addFieldValue(fieldValue613)
fieldValue614 = x3d.fieldValue()
fieldValue614.setName("translation")
fieldValue614.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance612.addFieldValue(fieldValue614)

fieldValue608.addChildren(ProtoInstance612)
ProtoInstance615 = x3d.ProtoInstance()
ProtoInstance615.setName("Site")
ProtoInstance615.setDEF("hanim_r_sphyrion")
fieldValue616 = x3d.fieldValue()
fieldValue616.setName("name")
fieldValue616.setValue("r_sphyrion")

ProtoInstance615.addFieldValue(fieldValue616)
fieldValue617 = x3d.fieldValue()
fieldValue617.setName("translation")
fieldValue617.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance615.addFieldValue(fieldValue617)

fieldValue608.addChildren(ProtoInstance615)
ProtoInstance618 = x3d.ProtoInstance()
ProtoInstance618.setName("Site")
ProtoInstance618.setDEF("hanim_r_calcaneus_posterior")
fieldValue619 = x3d.fieldValue()
fieldValue619.setName("name")
fieldValue619.setValue("r_calcaneus_posterior")

ProtoInstance618.addFieldValue(fieldValue619)
fieldValue620 = x3d.fieldValue()
fieldValue620.setName("translation")
fieldValue620.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance618.addFieldValue(fieldValue620)

fieldValue608.addChildren(ProtoInstance618)

ProtoInstance606.addFieldValue(fieldValue608)

fieldValue585.addChildren(ProtoInstance606)

ProtoInstance581.addFieldValue(fieldValue585)

fieldValue580.addChildren(ProtoInstance581)
ProtoInstance621 = x3d.ProtoInstance()
ProtoInstance621.setName("Segment")
ProtoInstance621.setDEF("hanim_r_calf")
fieldValue622 = x3d.fieldValue()
fieldValue622.setName("name")
fieldValue622.setValue("r_calf")

ProtoInstance621.addFieldValue(fieldValue622)

fieldValue580.addChildren(ProtoInstance621)

ProtoInstance576.addFieldValue(fieldValue580)

fieldValue575.addChildren(ProtoInstance576)
ProtoInstance623 = x3d.ProtoInstance()
ProtoInstance623.setName("Segment")
ProtoInstance623.setDEF("hanim_r_thigh")
fieldValue624 = x3d.fieldValue()
fieldValue624.setName("name")
fieldValue624.setValue("r_thigh")

ProtoInstance623.addFieldValue(fieldValue624)
fieldValue625 = x3d.fieldValue()
fieldValue625.setName("children")
ProtoInstance626 = x3d.ProtoInstance()
ProtoInstance626.setName("Site")
ProtoInstance626.setDEF("hanim_r_knee_crease")
fieldValue627 = x3d.fieldValue()
fieldValue627.setName("name")
fieldValue627.setValue("r_knee_crease")

ProtoInstance626.addFieldValue(fieldValue627)
fieldValue628 = x3d.fieldValue()
fieldValue628.setName("translation")
fieldValue628.setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")

ProtoInstance626.addFieldValue(fieldValue628)

fieldValue625.addChildren(ProtoInstance626)
ProtoInstance629 = x3d.ProtoInstance()
ProtoInstance629.setName("Site")
ProtoInstance629.setDEF("hanim_r_femoral_lateral_epicondyles")
fieldValue630 = x3d.fieldValue()
fieldValue630.setName("name")
fieldValue630.setValue("r_femoral_lateral_epicondyles")

ProtoInstance629.addFieldValue(fieldValue630)
fieldValue631 = x3d.fieldValue()
fieldValue631.setName("translation")
fieldValue631.setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052")

ProtoInstance629.addFieldValue(fieldValue631)

fieldValue625.addChildren(ProtoInstance629)
ProtoInstance632 = x3d.ProtoInstance()
ProtoInstance632.setName("Site")
ProtoInstance632.setDEF("hanim_r_femoral_medial_epicondyles")
fieldValue633 = x3d.fieldValue()
fieldValue633.setName("name")
fieldValue633.setValue("r_femoral_lateral_epicondyles")

ProtoInstance632.addFieldValue(fieldValue633)
fieldValue634 = x3d.fieldValue()
fieldValue634.setName("translation")
fieldValue634.setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821")

ProtoInstance632.addFieldValue(fieldValue634)

fieldValue625.addChildren(ProtoInstance632)

ProtoInstance623.addFieldValue(fieldValue625)

fieldValue575.addChildren(ProtoInstance623)

ProtoInstance571.addFieldValue(fieldValue575)

fieldValue506.addChildren(ProtoInstance571)
ProtoInstance635 = x3d.ProtoInstance()
ProtoInstance635.setName("Segment")
ProtoInstance635.setDEF("hanim_pelvis")
fieldValue636 = x3d.fieldValue()
fieldValue636.setName("name")
fieldValue636.setValue("pelvis")

ProtoInstance635.addFieldValue(fieldValue636)

fieldValue506.addChildren(ProtoInstance635)

ProtoInstance502.addFieldValue(fieldValue506)

fieldValue501.addChildren(ProtoInstance502)
ProtoInstance637 = x3d.ProtoInstance()
ProtoInstance637.setName("Joint")
ProtoInstance637.setDEF("hanim_vl5")
fieldValue638 = x3d.fieldValue()
fieldValue638.setName("stiffness")
fieldValue638.setValue("1 1 1")

ProtoInstance637.addFieldValue(fieldValue638)
fieldValue639 = x3d.fieldValue()
fieldValue639.setName("name")
fieldValue639.setValue("vl5")

ProtoInstance637.addFieldValue(fieldValue639)
fieldValue640 = x3d.fieldValue()
fieldValue640.setName("center")
fieldValue640.setValue("0.00279999990016222 1.0568000078201294 -0.07760000228881836")

ProtoInstance637.addFieldValue(fieldValue640)
fieldValue641 = x3d.fieldValue()
fieldValue641.setName("children")
ProtoInstance642 = x3d.ProtoInstance()
ProtoInstance642.setName("Joint")
ProtoInstance642.setDEF("hanim_skullbase")
fieldValue643 = x3d.fieldValue()
fieldValue643.setName("stiffness")
fieldValue643.setValue("1 1 1")

ProtoInstance642.addFieldValue(fieldValue643)
fieldValue644 = x3d.fieldValue()
fieldValue644.setName("name")
fieldValue644.setValue("skullbase")

ProtoInstance642.addFieldValue(fieldValue644)
fieldValue645 = x3d.fieldValue()
fieldValue645.setName("center")
fieldValue645.setValue("0.004399999976158142 1.62090003490448 0.023600000888109207")

ProtoInstance642.addFieldValue(fieldValue645)
fieldValue646 = x3d.fieldValue()
fieldValue646.setName("children")
ProtoInstance647 = x3d.ProtoInstance()
ProtoInstance647.setName("Segment")
ProtoInstance647.setDEF("hanim_skull")
fieldValue648 = x3d.fieldValue()
fieldValue648.setName("name")
fieldValue648.setValue("skull")

ProtoInstance647.addFieldValue(fieldValue648)
fieldValue649 = x3d.fieldValue()
fieldValue649.setName("children")
ProtoInstance650 = x3d.ProtoInstance()
ProtoInstance650.setName("Site")
ProtoInstance650.setDEF("hanim_skull_tip")
fieldValue651 = x3d.fieldValue()
fieldValue651.setName("name")
fieldValue651.setValue("skull_tip")

ProtoInstance650.addFieldValue(fieldValue651)
fieldValue652 = x3d.fieldValue()
fieldValue652.setName("translation")
fieldValue652.setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678")

ProtoInstance650.addFieldValue(fieldValue652)

fieldValue649.addChildren(ProtoInstance650)
ProtoInstance653 = x3d.ProtoInstance()
ProtoInstance653.setName("Site")
ProtoInstance653.setDEF("hanim_sellion")
fieldValue654 = x3d.fieldValue()
fieldValue654.setName("name")
fieldValue654.setValue("sellion")

ProtoInstance653.addFieldValue(fieldValue654)
fieldValue655 = x3d.fieldValue()
fieldValue655.setName("translation")
fieldValue655.setValue("0.005799999926239252 1.631600022315979 0.0851999968290329")

ProtoInstance653.addFieldValue(fieldValue655)

fieldValue649.addChildren(ProtoInstance653)
ProtoInstance656 = x3d.ProtoInstance()
ProtoInstance656.setName("Site")
ProtoInstance656.setDEF("hanim_r_infraorbitale")
fieldValue657 = x3d.fieldValue()
fieldValue657.setName("name")
fieldValue657.setValue("r_infraorbitale")

ProtoInstance656.addFieldValue(fieldValue657)
fieldValue658 = x3d.fieldValue()
fieldValue658.setName("translation")
fieldValue658.setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547")

ProtoInstance656.addFieldValue(fieldValue658)

fieldValue649.addChildren(ProtoInstance656)
ProtoInstance659 = x3d.ProtoInstance()
ProtoInstance659.setName("Site")
ProtoInstance659.setDEF("hanim_l_infraorbitale")
fieldValue660 = x3d.fieldValue()
fieldValue660.setName("name")
fieldValue660.setValue("l_infraorbitale")

ProtoInstance659.addFieldValue(fieldValue660)
fieldValue661 = x3d.fieldValue()
fieldValue661.setName("translation")
fieldValue661.setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547")

ProtoInstance659.addFieldValue(fieldValue661)

fieldValue649.addChildren(ProtoInstance659)
ProtoInstance662 = x3d.ProtoInstance()
ProtoInstance662.setName("Site")
ProtoInstance662.setDEF("hanim_supramenton")
fieldValue663 = x3d.fieldValue()
fieldValue663.setName("name")
fieldValue663.setValue("supramenton")

ProtoInstance662.addFieldValue(fieldValue663)
fieldValue664 = x3d.fieldValue()
fieldValue664.setName("translation")
fieldValue664.setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962")

ProtoInstance662.addFieldValue(fieldValue664)

fieldValue649.addChildren(ProtoInstance662)
ProtoInstance665 = x3d.ProtoInstance()
ProtoInstance665.setName("Site")
ProtoInstance665.setDEF("hanim_r_tragion")
fieldValue666 = x3d.fieldValue()
fieldValue666.setName("name")
fieldValue666.setValue("r_tragion")

ProtoInstance665.addFieldValue(fieldValue666)
fieldValue667 = x3d.fieldValue()
fieldValue667.setName("translation")
fieldValue667.setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642")

ProtoInstance665.addFieldValue(fieldValue667)

fieldValue649.addChildren(ProtoInstance665)
ProtoInstance668 = x3d.ProtoInstance()
ProtoInstance668.setName("Site")
ProtoInstance668.setDEF("hanim_r_gonion")
fieldValue669 = x3d.fieldValue()
fieldValue669.setName("name")
fieldValue669.setValue("r_gonion")

ProtoInstance668.addFieldValue(fieldValue669)
fieldValue670 = x3d.fieldValue()
fieldValue670.setName("translation")
fieldValue670.setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176")

ProtoInstance668.addFieldValue(fieldValue670)

fieldValue649.addChildren(ProtoInstance668)
ProtoInstance671 = x3d.ProtoInstance()
ProtoInstance671.setName("Site")
ProtoInstance671.setDEF("hanim_l_tragion")
fieldValue672 = x3d.fieldValue()
fieldValue672.setName("name")
fieldValue672.setValue("l_tragion")

ProtoInstance671.addFieldValue(fieldValue672)
fieldValue673 = x3d.fieldValue()
fieldValue673.setName("translation")
fieldValue673.setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874")

ProtoInstance671.addFieldValue(fieldValue673)

fieldValue649.addChildren(ProtoInstance671)
ProtoInstance674 = x3d.ProtoInstance()
ProtoInstance674.setName("Site")
ProtoInstance674.setDEF("hanim_l_gonion")
fieldValue675 = x3d.fieldValue()
fieldValue675.setName("name")
fieldValue675.setValue("l_gonion")

ProtoInstance674.addFieldValue(fieldValue675)
fieldValue676 = x3d.fieldValue()
fieldValue676.setName("translation")
fieldValue676.setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066")

ProtoInstance674.addFieldValue(fieldValue676)

fieldValue649.addChildren(ProtoInstance674)
ProtoInstance677 = x3d.ProtoInstance()
ProtoInstance677.setName("Site")
ProtoInstance677.setDEF("hanim_nuchale")
fieldValue678 = x3d.fieldValue()
fieldValue678.setName("name")
fieldValue678.setValue("nuchale")

ProtoInstance677.addFieldValue(fieldValue678)
fieldValue679 = x3d.fieldValue()
fieldValue679.setName("translation")
fieldValue679.setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")

ProtoInstance677.addFieldValue(fieldValue679)

fieldValue649.addChildren(ProtoInstance677)

ProtoInstance647.addFieldValue(fieldValue649)

fieldValue646.addChildren(ProtoInstance647)

ProtoInstance642.addFieldValue(fieldValue646)

fieldValue641.addChildren(ProtoInstance642)
ProtoInstance680 = x3d.ProtoInstance()
ProtoInstance680.setName("Joint")
ProtoInstance680.setDEF("hanim_l_shoulder")
fieldValue681 = x3d.fieldValue()
fieldValue681.setName("stiffness")
fieldValue681.setValue("1 1 1")

ProtoInstance680.addFieldValue(fieldValue681)
fieldValue682 = x3d.fieldValue()
fieldValue682.setName("name")
fieldValue682.setValue("l_shoulder")

ProtoInstance680.addFieldValue(fieldValue682)
fieldValue683 = x3d.fieldValue()
fieldValue683.setName("center")
fieldValue683.setValue("0.2029000073671341 1.437600016593933 -0.03869999945163727")

ProtoInstance680.addFieldValue(fieldValue683)
fieldValue684 = x3d.fieldValue()
fieldValue684.setName("children")
ProtoInstance685 = x3d.ProtoInstance()
ProtoInstance685.setName("Joint")
ProtoInstance685.setDEF("hanim_l_elbow")
fieldValue686 = x3d.fieldValue()
fieldValue686.setName("stiffness")
fieldValue686.setValue("1 1 1")

ProtoInstance685.addFieldValue(fieldValue686)
fieldValue687 = x3d.fieldValue()
fieldValue687.setName("name")
fieldValue687.setValue("l_elbow")

ProtoInstance685.addFieldValue(fieldValue687)
fieldValue688 = x3d.fieldValue()
fieldValue688.setName("center")
fieldValue688.setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512")

ProtoInstance685.addFieldValue(fieldValue688)
fieldValue689 = x3d.fieldValue()
fieldValue689.setName("children")
ProtoInstance690 = x3d.ProtoInstance()
ProtoInstance690.setName("Joint")
ProtoInstance690.setDEF("hanim_l_radiocarpal")
fieldValue691 = x3d.fieldValue()
fieldValue691.setName("stiffness")
fieldValue691.setValue("1 1 1")

ProtoInstance690.addFieldValue(fieldValue691)
fieldValue692 = x3d.fieldValue()
fieldValue692.setName("name")
fieldValue692.setValue("l_radiocarpal")

ProtoInstance690.addFieldValue(fieldValue692)
fieldValue693 = x3d.fieldValue()
fieldValue693.setName("center")
fieldValue693.setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538")

ProtoInstance690.addFieldValue(fieldValue693)
fieldValue694 = x3d.fieldValue()
fieldValue694.setName("children")
ProtoInstance695 = x3d.ProtoInstance()
ProtoInstance695.setName("Segment")
ProtoInstance695.setDEF("hanim_l_hand")
fieldValue696 = x3d.fieldValue()
fieldValue696.setName("name")
fieldValue696.setValue("l_hand")

ProtoInstance695.addFieldValue(fieldValue696)
fieldValue697 = x3d.fieldValue()
fieldValue697.setName("children")
ProtoInstance698 = x3d.ProtoInstance()
ProtoInstance698.setName("Site")
ProtoInstance698.setDEF("hanim_l_hand_tip")
fieldValue699 = x3d.fieldValue()
fieldValue699.setName("name")
fieldValue699.setValue("l_hand_tip")

ProtoInstance698.addFieldValue(fieldValue699)
fieldValue700 = x3d.fieldValue()
fieldValue700.setName("translation")
fieldValue700.setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205")

ProtoInstance698.addFieldValue(fieldValue700)

fieldValue697.addChildren(ProtoInstance698)
ProtoInstance701 = x3d.ProtoInstance()
ProtoInstance701.setName("Site")
ProtoInstance701.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue702 = x3d.fieldValue()
fieldValue702.setName("name")
fieldValue702.setValue("l_metacarpal_phalanx_2")

ProtoInstance701.addFieldValue(fieldValue702)
fieldValue703 = x3d.fieldValue()
fieldValue703.setName("translation")
fieldValue703.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance701.addFieldValue(fieldValue703)

fieldValue697.addChildren(ProtoInstance701)
ProtoInstance704 = x3d.ProtoInstance()
ProtoInstance704.setName("Site")
ProtoInstance704.setDEF("hanim_l_dactylion")
fieldValue705 = x3d.fieldValue()
fieldValue705.setName("name")
fieldValue705.setValue("l_dactylion")

ProtoInstance704.addFieldValue(fieldValue705)
fieldValue706 = x3d.fieldValue()
fieldValue706.setName("translation")
fieldValue706.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance704.addFieldValue(fieldValue706)

fieldValue697.addChildren(ProtoInstance704)
ProtoInstance707 = x3d.ProtoInstance()
ProtoInstance707.setName("Site")
ProtoInstance707.setDEF("hanim_l_ulnar_styloid")
fieldValue708 = x3d.fieldValue()
fieldValue708.setName("name")
fieldValue708.setValue("l_ulnar_styloid")

ProtoInstance707.addFieldValue(fieldValue708)
fieldValue709 = x3d.fieldValue()
fieldValue709.setName("translation")
fieldValue709.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance707.addFieldValue(fieldValue709)

fieldValue697.addChildren(ProtoInstance707)
ProtoInstance710 = x3d.ProtoInstance()
ProtoInstance710.setName("Site")
ProtoInstance710.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue711 = x3d.fieldValue()
fieldValue711.setName("name")
fieldValue711.setValue("l_metacarpal_phalanx_5")

ProtoInstance710.addFieldValue(fieldValue711)
fieldValue712 = x3d.fieldValue()
fieldValue712.setName("translation")
fieldValue712.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance710.addFieldValue(fieldValue712)

fieldValue697.addChildren(ProtoInstance710)

ProtoInstance695.addFieldValue(fieldValue697)

fieldValue694.addChildren(ProtoInstance695)

ProtoInstance690.addFieldValue(fieldValue694)

fieldValue689.addChildren(ProtoInstance690)
ProtoInstance713 = x3d.ProtoInstance()
ProtoInstance713.setName("Segment")
ProtoInstance713.setDEF("hanim_l_forearm")
fieldValue714 = x3d.fieldValue()
fieldValue714.setName("name")
fieldValue714.setValue("l_forearm")

ProtoInstance713.addFieldValue(fieldValue714)
fieldValue715 = x3d.fieldValue()
fieldValue715.setName("children")
ProtoInstance716 = x3d.ProtoInstance()
ProtoInstance716.setName("Site")
ProtoInstance716.setDEF("hanim_l_radial_styloid")
fieldValue717 = x3d.fieldValue()
fieldValue717.setName("name")
fieldValue717.setValue("l_radial_styloid")

ProtoInstance716.addFieldValue(fieldValue717)
fieldValue718 = x3d.fieldValue()
fieldValue718.setName("translation")
fieldValue718.setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691")

ProtoInstance716.addFieldValue(fieldValue718)

fieldValue715.addChildren(ProtoInstance716)
ProtoInstance719 = x3d.ProtoInstance()
ProtoInstance719.setName("Site")
ProtoInstance719.setDEF("hanim_l_olecranon")
fieldValue720 = x3d.fieldValue()
fieldValue720.setName("name")
fieldValue720.setValue("l_olecranon")

ProtoInstance719.addFieldValue(fieldValue720)
fieldValue721 = x3d.fieldValue()
fieldValue721.setName("translation")
fieldValue721.setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")

ProtoInstance719.addFieldValue(fieldValue721)

fieldValue715.addChildren(ProtoInstance719)
ProtoInstance722 = x3d.ProtoInstance()
ProtoInstance722.setName("Site")
ProtoInstance722.setDEF("hanim_l_humeral_medial_epicondyles")
fieldValue723 = x3d.fieldValue()
fieldValue723.setName("name")
fieldValue723.setValue("l_humeral_medial_epicondyles")

ProtoInstance722.addFieldValue(fieldValue723)
fieldValue724 = x3d.fieldValue()
fieldValue724.setName("translation")
fieldValue724.setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661")

ProtoInstance722.addFieldValue(fieldValue724)

fieldValue715.addChildren(ProtoInstance722)
ProtoInstance725 = x3d.ProtoInstance()
ProtoInstance725.setName("Site")
ProtoInstance725.setDEF("hanim_l_radiale")
fieldValue726 = x3d.fieldValue()
fieldValue726.setName("name")
fieldValue726.setValue("l_radiale")

ProtoInstance725.addFieldValue(fieldValue726)
fieldValue727 = x3d.fieldValue()
fieldValue727.setName("translation")
fieldValue727.setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268")

ProtoInstance725.addFieldValue(fieldValue727)

fieldValue715.addChildren(ProtoInstance725)

ProtoInstance713.addFieldValue(fieldValue715)

fieldValue689.addChildren(ProtoInstance713)

ProtoInstance685.addFieldValue(fieldValue689)

fieldValue684.addChildren(ProtoInstance685)
ProtoInstance728 = x3d.ProtoInstance()
ProtoInstance728.setName("Segment")
ProtoInstance728.setDEF("hanim_l_upperarm")
fieldValue729 = x3d.fieldValue()
fieldValue729.setName("name")
fieldValue729.setValue("l_upperarm")

ProtoInstance728.addFieldValue(fieldValue729)
fieldValue730 = x3d.fieldValue()
fieldValue730.setName("children")
ProtoInstance731 = x3d.ProtoInstance()
ProtoInstance731.setName("Site")
ProtoInstance731.setDEF("hanim_l_humeral_lateral_epicondyles")
fieldValue732 = x3d.fieldValue()
fieldValue732.setName("name")
fieldValue732.setValue("l_humeral_lateral_epicondyles")

ProtoInstance731.addFieldValue(fieldValue732)
fieldValue733 = x3d.fieldValue()
fieldValue733.setName("translation")
fieldValue733.setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355")

ProtoInstance731.addFieldValue(fieldValue733)

fieldValue730.addChildren(ProtoInstance731)

ProtoInstance728.addFieldValue(fieldValue730)

fieldValue684.addChildren(ProtoInstance728)

ProtoInstance680.addFieldValue(fieldValue684)

fieldValue641.addChildren(ProtoInstance680)
ProtoInstance734 = x3d.ProtoInstance()
ProtoInstance734.setName("Joint")
ProtoInstance734.setDEF("hanim_r_shoulder")
fieldValue735 = x3d.fieldValue()
fieldValue735.setName("stiffness")
fieldValue735.setValue("1 1 1")

ProtoInstance734.addFieldValue(fieldValue735)
fieldValue736 = x3d.fieldValue()
fieldValue736.setName("name")
fieldValue736.setValue("r_shoulder")

ProtoInstance734.addFieldValue(fieldValue736)
fieldValue737 = x3d.fieldValue()
fieldValue737.setName("center")
fieldValue737.setValue("-0.1906999945640564 1.4407000541687012 -0.032499998807907104")

ProtoInstance734.addFieldValue(fieldValue737)
fieldValue738 = x3d.fieldValue()
fieldValue738.setName("children")
ProtoInstance739 = x3d.ProtoInstance()
ProtoInstance739.setName("Joint")
ProtoInstance739.setDEF("hanim_r_elbow")
fieldValue740 = x3d.fieldValue()
fieldValue740.setName("stiffness")
fieldValue740.setValue("1 1 1")

ProtoInstance739.addFieldValue(fieldValue740)
fieldValue741 = x3d.fieldValue()
fieldValue741.setName("name")
fieldValue741.setValue("r_elbow")

ProtoInstance739.addFieldValue(fieldValue741)
fieldValue742 = x3d.fieldValue()
fieldValue742.setName("center")
fieldValue742.setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104")

ProtoInstance739.addFieldValue(fieldValue742)
fieldValue743 = x3d.fieldValue()
fieldValue743.setName("children")
ProtoInstance744 = x3d.ProtoInstance()
ProtoInstance744.setName("Joint")
ProtoInstance744.setDEF("hanim_r_radiocarpal")
fieldValue745 = x3d.fieldValue()
fieldValue745.setName("stiffness")
fieldValue745.setValue("1 1 1")

ProtoInstance744.addFieldValue(fieldValue745)
fieldValue746 = x3d.fieldValue()
fieldValue746.setName("name")
fieldValue746.setValue("r_radiocarpal")

ProtoInstance744.addFieldValue(fieldValue746)
fieldValue747 = x3d.fieldValue()
fieldValue747.setName("center")
fieldValue747.setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522")

ProtoInstance744.addFieldValue(fieldValue747)
fieldValue748 = x3d.fieldValue()
fieldValue748.setName("children")
ProtoInstance749 = x3d.ProtoInstance()
ProtoInstance749.setName("Segment")
ProtoInstance749.setDEF("hanim_r_hand")
fieldValue750 = x3d.fieldValue()
fieldValue750.setName("name")
fieldValue750.setValue("r_hand")

ProtoInstance749.addFieldValue(fieldValue750)
fieldValue751 = x3d.fieldValue()
fieldValue751.setName("children")
ProtoInstance752 = x3d.ProtoInstance()
ProtoInstance752.setName("Site")
ProtoInstance752.setDEF("hanim_r_hand_tip")
fieldValue753 = x3d.fieldValue()
fieldValue753.setName("name")
fieldValue753.setValue("r_hand_tip")

ProtoInstance752.addFieldValue(fieldValue753)
fieldValue754 = x3d.fieldValue()
fieldValue754.setName("translation")
fieldValue754.setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")

ProtoInstance752.addFieldValue(fieldValue754)

fieldValue751.addChildren(ProtoInstance752)
ProtoInstance755 = x3d.ProtoInstance()
ProtoInstance755.setName("Site")
ProtoInstance755.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue756 = x3d.fieldValue()
fieldValue756.setName("name")
fieldValue756.setValue("r_metacarpal_phalanx_2")

ProtoInstance755.addFieldValue(fieldValue756)
fieldValue757 = x3d.fieldValue()
fieldValue757.setName("translation")
fieldValue757.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance755.addFieldValue(fieldValue757)

fieldValue751.addChildren(ProtoInstance755)
ProtoInstance758 = x3d.ProtoInstance()
ProtoInstance758.setName("Site")
ProtoInstance758.setDEF("hanim_r_dactylion")
fieldValue759 = x3d.fieldValue()
fieldValue759.setName("name")
fieldValue759.setValue("r_dactylion")

ProtoInstance758.addFieldValue(fieldValue759)
fieldValue760 = x3d.fieldValue()
fieldValue760.setName("translation")
fieldValue760.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance758.addFieldValue(fieldValue760)

fieldValue751.addChildren(ProtoInstance758)
ProtoInstance761 = x3d.ProtoInstance()
ProtoInstance761.setName("Site")
ProtoInstance761.setDEF("hanim_r_ulnar_styloid")
fieldValue762 = x3d.fieldValue()
fieldValue762.setName("name")
fieldValue762.setValue("r_ulnar_styloid")

ProtoInstance761.addFieldValue(fieldValue762)
fieldValue763 = x3d.fieldValue()
fieldValue763.setName("translation")
fieldValue763.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance761.addFieldValue(fieldValue763)

fieldValue751.addChildren(ProtoInstance761)
ProtoInstance764 = x3d.ProtoInstance()
ProtoInstance764.setName("Site")
ProtoInstance764.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue765 = x3d.fieldValue()
fieldValue765.setName("name")
fieldValue765.setValue("r_metacarpal_phalanx_5")

ProtoInstance764.addFieldValue(fieldValue765)
fieldValue766 = x3d.fieldValue()
fieldValue766.setName("translation")
fieldValue766.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance764.addFieldValue(fieldValue766)

fieldValue751.addChildren(ProtoInstance764)

ProtoInstance749.addFieldValue(fieldValue751)

fieldValue748.addChildren(ProtoInstance749)

ProtoInstance744.addFieldValue(fieldValue748)

fieldValue743.addChildren(ProtoInstance744)
ProtoInstance767 = x3d.ProtoInstance()
ProtoInstance767.setName("Segment")
ProtoInstance767.setDEF("hanim_r_forearm")
fieldValue768 = x3d.fieldValue()
fieldValue768.setName("name")
fieldValue768.setValue("r_forearm")

ProtoInstance767.addFieldValue(fieldValue768)
fieldValue769 = x3d.fieldValue()
fieldValue769.setName("children")
ProtoInstance770 = x3d.ProtoInstance()
ProtoInstance770.setName("Site")
ProtoInstance770.setDEF("hanim_r_radial_styloid")
fieldValue771 = x3d.fieldValue()
fieldValue771.setName("name")
fieldValue771.setValue("r_radial_styloid")

ProtoInstance770.addFieldValue(fieldValue771)
fieldValue772 = x3d.fieldValue()
fieldValue772.setName("translation")
fieldValue772.setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236")

ProtoInstance770.addFieldValue(fieldValue772)

fieldValue769.addChildren(ProtoInstance770)
ProtoInstance773 = x3d.ProtoInstance()
ProtoInstance773.setName("Site")
ProtoInstance773.setDEF("hanim_r_olecranon")
fieldValue774 = x3d.fieldValue()
fieldValue774.setName("name")
fieldValue774.setValue("r_olecranon")

ProtoInstance773.addFieldValue(fieldValue774)
fieldValue775 = x3d.fieldValue()
fieldValue775.setName("translation")
fieldValue775.setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")

ProtoInstance773.addFieldValue(fieldValue775)

fieldValue769.addChildren(ProtoInstance773)
ProtoInstance776 = x3d.ProtoInstance()
ProtoInstance776.setName("Site")
ProtoInstance776.setDEF("hanim_r_humeral_medial_epicondyles")
fieldValue777 = x3d.fieldValue()
fieldValue777.setName("name")
fieldValue777.setValue("r_humeral_medial_epicondyles")

ProtoInstance776.addFieldValue(fieldValue777)
fieldValue778 = x3d.fieldValue()
fieldValue778.setName("translation")
fieldValue778.setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")

ProtoInstance776.addFieldValue(fieldValue778)

fieldValue769.addChildren(ProtoInstance776)
ProtoInstance779 = x3d.ProtoInstance()
ProtoInstance779.setName("Site")
ProtoInstance779.setDEF("hanim_r_radiale")
fieldValue780 = x3d.fieldValue()
fieldValue780.setName("name")
fieldValue780.setValue("r_radiale")

ProtoInstance779.addFieldValue(fieldValue780)
fieldValue781 = x3d.fieldValue()
fieldValue781.setName("translation")
fieldValue781.setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")

ProtoInstance779.addFieldValue(fieldValue781)

fieldValue769.addChildren(ProtoInstance779)

ProtoInstance767.addFieldValue(fieldValue769)

fieldValue743.addChildren(ProtoInstance767)

ProtoInstance739.addFieldValue(fieldValue743)

fieldValue738.addChildren(ProtoInstance739)
ProtoInstance782 = x3d.ProtoInstance()
ProtoInstance782.setName("Segment")
ProtoInstance782.setDEF("hanim_r_upperarm")
fieldValue783 = x3d.fieldValue()
fieldValue783.setName("name")
fieldValue783.setValue("r_upperarm")

ProtoInstance782.addFieldValue(fieldValue783)
fieldValue784 = x3d.fieldValue()
fieldValue784.setName("children")
ProtoInstance785 = x3d.ProtoInstance()
ProtoInstance785.setName("Site")
ProtoInstance785.setDEF("hanim_r_humeral_lateral_epicondyles")
fieldValue786 = x3d.fieldValue()
fieldValue786.setName("name")
fieldValue786.setValue("r_humeral_lateral_epicondyles")

ProtoInstance785.addFieldValue(fieldValue786)
fieldValue787 = x3d.fieldValue()
fieldValue787.setName("translation")
fieldValue787.setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")

ProtoInstance785.addFieldValue(fieldValue787)

fieldValue784.addChildren(ProtoInstance785)

ProtoInstance782.addFieldValue(fieldValue784)

fieldValue738.addChildren(ProtoInstance782)

ProtoInstance734.addFieldValue(fieldValue738)

fieldValue641.addChildren(ProtoInstance734)
ProtoInstance788 = x3d.ProtoInstance()
ProtoInstance788.setName("Segment")
ProtoInstance788.setDEF("hanim_l5")
fieldValue789 = x3d.fieldValue()
fieldValue789.setName("name")
fieldValue789.setValue("l5")

ProtoInstance788.addFieldValue(fieldValue789)
fieldValue790 = x3d.fieldValue()
fieldValue790.setName("children")
ProtoInstance791 = x3d.ProtoInstance()
ProtoInstance791.setName("Site")
ProtoInstance791.setDEF("hanim_r_clavicale")
fieldValue792 = x3d.fieldValue()
fieldValue792.setName("name")
fieldValue792.setValue("r_clavicale")

ProtoInstance791.addFieldValue(fieldValue792)
fieldValue793 = x3d.fieldValue()
fieldValue793.setName("translation")
fieldValue793.setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033")

ProtoInstance791.addFieldValue(fieldValue793)

fieldValue790.addChildren(ProtoInstance791)
ProtoInstance794 = x3d.ProtoInstance()
ProtoInstance794.setName("Site")
ProtoInstance794.setDEF("hanim_suprasternale")
fieldValue795 = x3d.fieldValue()
fieldValue795.setName("name")
fieldValue795.setValue("suprasternale")

ProtoInstance794.addFieldValue(fieldValue795)
fieldValue796 = x3d.fieldValue()
fieldValue796.setName("translation")
fieldValue796.setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869")

ProtoInstance794.addFieldValue(fieldValue796)

fieldValue790.addChildren(ProtoInstance794)
ProtoInstance797 = x3d.ProtoInstance()
ProtoInstance797.setName("Site")
ProtoInstance797.setDEF("hanim_l_clavicale")
fieldValue798 = x3d.fieldValue()
fieldValue798.setName("name")
fieldValue798.setValue("l_clavicale")

ProtoInstance797.addFieldValue(fieldValue798)
fieldValue799 = x3d.fieldValue()
fieldValue799.setName("translation")
fieldValue799.setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754")

ProtoInstance797.addFieldValue(fieldValue799)

fieldValue790.addChildren(ProtoInstance797)
ProtoInstance800 = x3d.ProtoInstance()
ProtoInstance800.setName("Site")
ProtoInstance800.setDEF("hanim_r_thelion")
fieldValue801 = x3d.fieldValue()
fieldValue801.setName("name")
fieldValue801.setValue("r_thelion")

ProtoInstance800.addFieldValue(fieldValue801)
fieldValue802 = x3d.fieldValue()
fieldValue802.setName("translation")
fieldValue802.setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911")

ProtoInstance800.addFieldValue(fieldValue802)

fieldValue790.addChildren(ProtoInstance800)
ProtoInstance803 = x3d.ProtoInstance()
ProtoInstance803.setName("Site")
ProtoInstance803.setDEF("hanim_l_thelion")
fieldValue804 = x3d.fieldValue()
fieldValue804.setName("name")
fieldValue804.setValue("l_thelion")

ProtoInstance803.addFieldValue(fieldValue804)
fieldValue805 = x3d.fieldValue()
fieldValue805.setName("translation")
fieldValue805.setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689")

ProtoInstance803.addFieldValue(fieldValue805)

fieldValue790.addChildren(ProtoInstance803)
ProtoInstance806 = x3d.ProtoInstance()
ProtoInstance806.setName("Site")
ProtoInstance806.setDEF("hanim_substernale")
fieldValue807 = x3d.fieldValue()
fieldValue807.setName("name")
fieldValue807.setValue("substernale")

ProtoInstance806.addFieldValue(fieldValue807)
fieldValue808 = x3d.fieldValue()
fieldValue808.setName("translation")
fieldValue808.setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683")

ProtoInstance806.addFieldValue(fieldValue808)

fieldValue790.addChildren(ProtoInstance806)
ProtoInstance809 = x3d.ProtoInstance()
ProtoInstance809.setName("Site")
ProtoInstance809.setDEF("hanim_r_rib10")
fieldValue810 = x3d.fieldValue()
fieldValue810.setName("name")
fieldValue810.setValue("r_rib10")

ProtoInstance809.addFieldValue(fieldValue810)
fieldValue811 = x3d.fieldValue()
fieldValue811.setName("translation")
fieldValue811.setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432")

ProtoInstance809.addFieldValue(fieldValue811)

fieldValue790.addChildren(ProtoInstance809)
ProtoInstance812 = x3d.ProtoInstance()
ProtoInstance812.setName("Site")
ProtoInstance812.setDEF("hanim_l_rib10")
fieldValue813 = x3d.fieldValue()
fieldValue813.setName("name")
fieldValue813.setValue("l_rib10")

ProtoInstance812.addFieldValue(fieldValue813)
fieldValue814 = x3d.fieldValue()
fieldValue814.setName("translation")
fieldValue814.setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202")

ProtoInstance812.addFieldValue(fieldValue814)

fieldValue790.addChildren(ProtoInstance812)
ProtoInstance815 = x3d.ProtoInstance()
ProtoInstance815.setName("Site")
ProtoInstance815.setDEF("hanim_cervicale")
fieldValue816 = x3d.fieldValue()
fieldValue816.setName("name")
fieldValue816.setValue("cervicale")

ProtoInstance815.addFieldValue(fieldValue816)
fieldValue817 = x3d.fieldValue()
fieldValue817.setName("translation")
fieldValue817.setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754")

ProtoInstance815.addFieldValue(fieldValue817)

fieldValue790.addChildren(ProtoInstance815)
ProtoInstance818 = x3d.ProtoInstance()
ProtoInstance818.setName("Site")
ProtoInstance818.setDEF("hanim_spine_2_lower_back")
fieldValue819 = x3d.fieldValue()
fieldValue819.setName("name")
fieldValue819.setValue("spine_2_lower_back")

ProtoInstance818.addFieldValue(fieldValue819)
fieldValue820 = x3d.fieldValue()
fieldValue820.setName("translation")
fieldValue820.setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661")

ProtoInstance818.addFieldValue(fieldValue820)

fieldValue790.addChildren(ProtoInstance818)
ProtoInstance821 = x3d.ProtoInstance()
ProtoInstance821.setName("Site")
ProtoInstance821.setDEF("hanim_waist_preferred_posterior")
fieldValue822 = x3d.fieldValue()
fieldValue822.setName("name")
fieldValue822.setValue("waist_preferred_posterior")

ProtoInstance821.addFieldValue(fieldValue822)
fieldValue823 = x3d.fieldValue()
fieldValue823.setName("translation")
fieldValue823.setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754")

ProtoInstance821.addFieldValue(fieldValue823)

fieldValue790.addChildren(ProtoInstance821)
ProtoInstance824 = x3d.ProtoInstance()
ProtoInstance824.setName("Site")
ProtoInstance824.setDEF("hanim_r_acromion")
fieldValue825 = x3d.fieldValue()
fieldValue825.setName("name")
fieldValue825.setValue("r_acromion")

ProtoInstance824.addFieldValue(fieldValue825)
fieldValue826 = x3d.fieldValue()
fieldValue826.setName("translation")
fieldValue826.setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541")

ProtoInstance824.addFieldValue(fieldValue826)

fieldValue790.addChildren(ProtoInstance824)
ProtoInstance827 = x3d.ProtoInstance()
ProtoInstance827.setName("Site")
ProtoInstance827.setDEF("hanim_r_axilla_proximal")
fieldValue828 = x3d.fieldValue()
fieldValue828.setName("name")
fieldValue828.setValue("r_axilla_proximal")

ProtoInstance827.addFieldValue(fieldValue828)
fieldValue829 = x3d.fieldValue()
fieldValue829.setName("translation")
fieldValue829.setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438")

ProtoInstance827.addFieldValue(fieldValue829)

fieldValue790.addChildren(ProtoInstance827)
ProtoInstance830 = x3d.ProtoInstance()
ProtoInstance830.setName("Site")
ProtoInstance830.setDEF("hanim_r_axilla_distal")
fieldValue831 = x3d.fieldValue()
fieldValue831.setName("name")
fieldValue831.setValue("r_axilla_distal")

ProtoInstance830.addFieldValue(fieldValue831)
fieldValue832 = x3d.fieldValue()
fieldValue832.setName("translation")
fieldValue832.setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678")

ProtoInstance830.addFieldValue(fieldValue832)

fieldValue790.addChildren(ProtoInstance830)
ProtoInstance833 = x3d.ProtoInstance()
ProtoInstance833.setName("Site")
ProtoInstance833.setDEF("hanim_l_acromion")
fieldValue834 = x3d.fieldValue()
fieldValue834.setName("name")
fieldValue834.setValue("l_acromion")

ProtoInstance833.addFieldValue(fieldValue834)
fieldValue835 = x3d.fieldValue()
fieldValue835.setName("translation")
fieldValue835.setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014")

ProtoInstance833.addFieldValue(fieldValue835)

fieldValue790.addChildren(ProtoInstance833)
ProtoInstance836 = x3d.ProtoInstance()
ProtoInstance836.setName("Site")
ProtoInstance836.setDEF("hanim_l_axilla_proximal")
fieldValue837 = x3d.fieldValue()
fieldValue837.setName("name")
fieldValue837.setValue("l_axilla_proximal")

ProtoInstance836.addFieldValue(fieldValue837)
fieldValue838 = x3d.fieldValue()
fieldValue838.setName("translation")
fieldValue838.setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937")

ProtoInstance836.addFieldValue(fieldValue838)

fieldValue790.addChildren(ProtoInstance836)
ProtoInstance839 = x3d.ProtoInstance()
ProtoInstance839.setName("Site")
ProtoInstance839.setDEF("hanim_l_axilla_distal")
fieldValue840 = x3d.fieldValue()
fieldValue840.setName("name")
fieldValue840.setValue("l_axilla_distal")

ProtoInstance839.addFieldValue(fieldValue840)
fieldValue841 = x3d.fieldValue()
fieldValue841.setName("translation")
fieldValue841.setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388")

ProtoInstance839.addFieldValue(fieldValue841)

fieldValue790.addChildren(ProtoInstance839)
ProtoInstance842 = x3d.ProtoInstance()
ProtoInstance842.setName("Site")
ProtoInstance842.setDEF("hanim_r_neck_base")
fieldValue843 = x3d.fieldValue()
fieldValue843.setName("name")
fieldValue843.setValue("r_neck_base")

ProtoInstance842.addFieldValue(fieldValue843)
fieldValue844 = x3d.fieldValue()
fieldValue844.setName("translation")
fieldValue844.setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071")

ProtoInstance842.addFieldValue(fieldValue844)

fieldValue790.addChildren(ProtoInstance842)
ProtoInstance845 = x3d.ProtoInstance()
ProtoInstance845.setName("Site")
ProtoInstance845.setDEF("hanim_l_neck_base")
fieldValue846 = x3d.fieldValue()
fieldValue846.setName("name")
fieldValue846.setValue("l_neck_base")

ProtoInstance845.addFieldValue(fieldValue846)
fieldValue847 = x3d.fieldValue()
fieldValue847.setName("translation")
fieldValue847.setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478")

ProtoInstance845.addFieldValue(fieldValue847)

fieldValue790.addChildren(ProtoInstance845)
ProtoInstance848 = x3d.ProtoInstance()
ProtoInstance848.setName("Site")
ProtoInstance848.setDEF("hanim_navel")
fieldValue849 = x3d.fieldValue()
fieldValue849.setName("name")
fieldValue849.setValue("navel")

ProtoInstance848.addFieldValue(fieldValue849)
fieldValue850 = x3d.fieldValue()
fieldValue850.setName("translation")
fieldValue850.setValue("0.006899999920278788 1.09660005569458 0.10170000046491623")

ProtoInstance848.addFieldValue(fieldValue850)

fieldValue790.addChildren(ProtoInstance848)

ProtoInstance788.addFieldValue(fieldValue790)

fieldValue641.addChildren(ProtoInstance788)

ProtoInstance637.addFieldValue(fieldValue641)

fieldValue501.addChildren(ProtoInstance637)
ProtoInstance851 = x3d.ProtoInstance()
ProtoInstance851.setName("Segment")
ProtoInstance851.setDEF("hanim_sacrum")
fieldValue852 = x3d.fieldValue()
fieldValue852.setName("name")
fieldValue852.setValue("sacrum")

ProtoInstance851.addFieldValue(fieldValue852)
fieldValue853 = x3d.fieldValue()
fieldValue853.setName("children")
ProtoInstance854 = x3d.ProtoInstance()
ProtoInstance854.setName("Site")
ProtoInstance854.setDEF("hanim_r_asis")
fieldValue855 = x3d.fieldValue()
fieldValue855.setName("name")
fieldValue855.setValue("r_asis")

ProtoInstance854.addFieldValue(fieldValue855)
fieldValue856 = x3d.fieldValue()
fieldValue856.setName("translation")
fieldValue856.setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747")

ProtoInstance854.addFieldValue(fieldValue856)

fieldValue853.addChildren(ProtoInstance854)
ProtoInstance857 = x3d.ProtoInstance()
ProtoInstance857.setName("Site")
ProtoInstance857.setDEF("hanim_l_asis")
fieldValue858 = x3d.fieldValue()
fieldValue858.setName("name")
fieldValue858.setValue("l_asis")

ProtoInstance857.addFieldValue(fieldValue858)
fieldValue859 = x3d.fieldValue()
fieldValue859.setName("translation")
fieldValue859.setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836")

ProtoInstance857.addFieldValue(fieldValue859)

fieldValue853.addChildren(ProtoInstance857)
ProtoInstance860 = x3d.ProtoInstance()
ProtoInstance860.setName("Site")
ProtoInstance860.setDEF("hanim_r_iliocristale")
fieldValue861 = x3d.fieldValue()
fieldValue861.setName("name")
fieldValue861.setValue("r_iliocristale")

ProtoInstance860.addFieldValue(fieldValue861)
fieldValue862 = x3d.fieldValue()
fieldValue862.setName("translation")
fieldValue862.setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187")

ProtoInstance860.addFieldValue(fieldValue862)

fieldValue853.addChildren(ProtoInstance860)
ProtoInstance863 = x3d.ProtoInstance()
ProtoInstance863.setName("Site")
ProtoInstance863.setDEF("hanim_r_trochanterion")
fieldValue864 = x3d.fieldValue()
fieldValue864.setName("name")
fieldValue864.setValue("r_trochanterion")

ProtoInstance863.addFieldValue(fieldValue864)
fieldValue865 = x3d.fieldValue()
fieldValue865.setName("translation")
fieldValue865.setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514")

ProtoInstance863.addFieldValue(fieldValue865)

fieldValue853.addChildren(ProtoInstance863)
ProtoInstance866 = x3d.ProtoInstance()
ProtoInstance866.setName("Site")
ProtoInstance866.setDEF("hanim_l_iliocristale")
fieldValue867 = x3d.fieldValue()
fieldValue867.setName("name")
fieldValue867.setValue("l_iliocristale")

ProtoInstance866.addFieldValue(fieldValue867)
fieldValue868 = x3d.fieldValue()
fieldValue868.setName("translation")
fieldValue868.setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001")

ProtoInstance866.addFieldValue(fieldValue868)

fieldValue853.addChildren(ProtoInstance866)
ProtoInstance869 = x3d.ProtoInstance()
ProtoInstance869.setName("Site")
ProtoInstance869.setDEF("hanim_l_trochanterion")
fieldValue870 = x3d.fieldValue()
fieldValue870.setName("name")
fieldValue870.setValue("l_trochanterion")

ProtoInstance869.addFieldValue(fieldValue870)
fieldValue871 = x3d.fieldValue()
fieldValue871.setName("translation")
fieldValue871.setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183")

ProtoInstance869.addFieldValue(fieldValue871)

fieldValue853.addChildren(ProtoInstance869)
ProtoInstance872 = x3d.ProtoInstance()
ProtoInstance872.setName("Site")
ProtoInstance872.setDEF("hanim_r_psis")
fieldValue873 = x3d.fieldValue()
fieldValue873.setName("name")
fieldValue873.setValue("r_psis")

ProtoInstance872.addFieldValue(fieldValue873)
fieldValue874 = x3d.fieldValue()
fieldValue874.setName("translation")
fieldValue874.setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082")

ProtoInstance872.addFieldValue(fieldValue874)

fieldValue853.addChildren(ProtoInstance872)
ProtoInstance875 = x3d.ProtoInstance()
ProtoInstance875.setName("Site")
ProtoInstance875.setDEF("hanim_l_psis")
fieldValue876 = x3d.fieldValue()
fieldValue876.setName("name")
fieldValue876.setValue("l_psis")

ProtoInstance875.addFieldValue(fieldValue876)
fieldValue877 = x3d.fieldValue()
fieldValue877.setName("translation")
fieldValue877.setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388")

ProtoInstance875.addFieldValue(fieldValue877)

fieldValue853.addChildren(ProtoInstance875)
ProtoInstance878 = x3d.ProtoInstance()
ProtoInstance878.setName("Site")
ProtoInstance878.setDEF("hanim_crotch")
fieldValue879 = x3d.fieldValue()
fieldValue879.setName("name")
fieldValue879.setValue("crotch")

ProtoInstance878.addFieldValue(fieldValue879)
fieldValue880 = x3d.fieldValue()
fieldValue880.setName("translation")
fieldValue880.setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367")

ProtoInstance878.addFieldValue(fieldValue880)

fieldValue853.addChildren(ProtoInstance878)

ProtoInstance851.addFieldValue(fieldValue853)

fieldValue501.addChildren(ProtoInstance851)

ProtoInstance497.addFieldValue(fieldValue501)

fieldValue496.addChildren(ProtoInstance497)
ProtoInstance881 = x3d.ProtoInstance()
ProtoInstance881.setName("Joint")
ProtoInstance881.setDEF("hanim_sacroiliac")
fieldValue882 = x3d.fieldValue()
fieldValue882.setName("stiffness")
fieldValue882.setValue("1 1 1")

ProtoInstance881.addFieldValue(fieldValue882)
fieldValue883 = x3d.fieldValue()
fieldValue883.setName("name")
fieldValue883.setValue("sacroiliac")

ProtoInstance881.addFieldValue(fieldValue883)
fieldValue884 = x3d.fieldValue()
fieldValue884.setName("center")
fieldValue884.setValue("0 0.914900004863739 0.0015999999595806003")

ProtoInstance881.addFieldValue(fieldValue884)
fieldValue885 = x3d.fieldValue()
fieldValue885.setName("children")
ProtoInstance886 = x3d.ProtoInstance()
ProtoInstance886.setName("Joint")
ProtoInstance886.setDEF("hanim_l_hip")
fieldValue887 = x3d.fieldValue()
fieldValue887.setName("stiffness")
fieldValue887.setValue("1 1 1")

ProtoInstance886.addFieldValue(fieldValue887)
fieldValue888 = x3d.fieldValue()
fieldValue888.setName("name")
fieldValue888.setValue("l_hip")

ProtoInstance886.addFieldValue(fieldValue888)
fieldValue889 = x3d.fieldValue()
fieldValue889.setName("center")
fieldValue889.setValue("0.09610000252723694 0.9124000072479248 -0.00009999999747378752")

ProtoInstance886.addFieldValue(fieldValue889)
fieldValue890 = x3d.fieldValue()
fieldValue890.setName("children")
ProtoInstance891 = x3d.ProtoInstance()
ProtoInstance891.setName("Joint")
ProtoInstance891.setDEF("hanim_l_knee")
fieldValue892 = x3d.fieldValue()
fieldValue892.setName("stiffness")
fieldValue892.setValue("1 1 1")

ProtoInstance891.addFieldValue(fieldValue892)
fieldValue893 = x3d.fieldValue()
fieldValue893.setName("name")
fieldValue893.setValue("l_knee")

ProtoInstance891.addFieldValue(fieldValue893)
fieldValue894 = x3d.fieldValue()
fieldValue894.setName("center")
fieldValue894.setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995")

ProtoInstance891.addFieldValue(fieldValue894)
fieldValue895 = x3d.fieldValue()
fieldValue895.setName("children")
ProtoInstance896 = x3d.ProtoInstance()
ProtoInstance896.setName("Joint")
ProtoInstance896.setDEF("hanim_l_talocrural")
fieldValue897 = x3d.fieldValue()
fieldValue897.setName("stiffness")
fieldValue897.setValue("1 1 1")

ProtoInstance896.addFieldValue(fieldValue897)
fieldValue898 = x3d.fieldValue()
fieldValue898.setName("name")
fieldValue898.setValue("l_talocrural")

ProtoInstance896.addFieldValue(fieldValue898)
fieldValue899 = x3d.fieldValue()
fieldValue899.setName("center")
fieldValue899.setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727")

ProtoInstance896.addFieldValue(fieldValue899)
fieldValue900 = x3d.fieldValue()
fieldValue900.setName("children")
ProtoInstance901 = x3d.ProtoInstance()
ProtoInstance901.setName("Joint")
ProtoInstance901.setDEF("hanim_l_metatarsophalangeal_")
fieldValue902 = x3d.fieldValue()
fieldValue902.setName("stiffness")
fieldValue902.setValue("1 1 1")

ProtoInstance901.addFieldValue(fieldValue902)
fieldValue903 = x3d.fieldValue()
fieldValue903.setName("name")
fieldValue903.setValue("l_metatarsophalangeal_")

ProtoInstance901.addFieldValue(fieldValue903)
fieldValue904 = x3d.fieldValue()
fieldValue904.setName("center")
fieldValue904.setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363")

ProtoInstance901.addFieldValue(fieldValue904)
fieldValue905 = x3d.fieldValue()
fieldValue905.setName("children")
ProtoInstance906 = x3d.ProtoInstance()
ProtoInstance906.setName("Segment")
ProtoInstance906.setDEF("hanim_l_middistal")
fieldValue907 = x3d.fieldValue()
fieldValue907.setName("name")
fieldValue907.setValue("l_middistal")

ProtoInstance906.addFieldValue(fieldValue907)
fieldValue908 = x3d.fieldValue()
fieldValue908.setName("children")
ProtoInstance909 = x3d.ProtoInstance()
ProtoInstance909.setName("Site")
ProtoInstance909.setDEF("hanim_l_middistal_tip")
fieldValue910 = x3d.fieldValue()
fieldValue910.setName("name")
fieldValue910.setValue("l_middistal_tip")

ProtoInstance909.addFieldValue(fieldValue910)
fieldValue911 = x3d.fieldValue()
fieldValue911.setName("translation")
fieldValue911.setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261")

ProtoInstance909.addFieldValue(fieldValue911)

fieldValue908.addChildren(ProtoInstance909)
ProtoInstance912 = x3d.ProtoInstance()
ProtoInstance912.setName("Site")
ProtoInstance912.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue913 = x3d.fieldValue()
fieldValue913.setName("name")
fieldValue913.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance912.addFieldValue(fieldValue913)
fieldValue914 = x3d.fieldValue()
fieldValue914.setName("translation")
fieldValue914.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance912.addFieldValue(fieldValue914)

fieldValue908.addChildren(ProtoInstance912)
ProtoInstance915 = x3d.ProtoInstance()
ProtoInstance915.setName("Site")
ProtoInstance915.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue916 = x3d.fieldValue()
fieldValue916.setName("name")
fieldValue916.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance915.addFieldValue(fieldValue916)
fieldValue917 = x3d.fieldValue()
fieldValue917.setName("translation")
fieldValue917.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance915.addFieldValue(fieldValue917)

fieldValue908.addChildren(ProtoInstance915)
ProtoInstance918 = x3d.ProtoInstance()
ProtoInstance918.setName("Site")
ProtoInstance918.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue919 = x3d.fieldValue()
fieldValue919.setName("name")
fieldValue919.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance918.addFieldValue(fieldValue919)
fieldValue920 = x3d.fieldValue()
fieldValue920.setName("translation")
fieldValue920.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance918.addFieldValue(fieldValue920)

fieldValue908.addChildren(ProtoInstance918)

ProtoInstance906.addFieldValue(fieldValue908)

fieldValue905.addChildren(ProtoInstance906)

ProtoInstance901.addFieldValue(fieldValue905)

fieldValue900.addChildren(ProtoInstance901)
ProtoInstance921 = x3d.ProtoInstance()
ProtoInstance921.setName("Segment")
ProtoInstance921.setDEF("hanim_l_hindfoot")
fieldValue922 = x3d.fieldValue()
fieldValue922.setName("name")
fieldValue922.setValue("l_hindfoot")

ProtoInstance921.addFieldValue(fieldValue922)
fieldValue923 = x3d.fieldValue()
fieldValue923.setName("children")
ProtoInstance924 = x3d.ProtoInstance()
ProtoInstance924.setName("Site")
ProtoInstance924.setDEF("hanim_l_lateral_malleolus")
fieldValue925 = x3d.fieldValue()
fieldValue925.setName("name")
fieldValue925.setValue("l_lateral_malleolus")

ProtoInstance924.addFieldValue(fieldValue925)
fieldValue926 = x3d.fieldValue()
fieldValue926.setName("translation")
fieldValue926.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance924.addFieldValue(fieldValue926)

fieldValue923.addChildren(ProtoInstance924)
ProtoInstance927 = x3d.ProtoInstance()
ProtoInstance927.setName("Site")
ProtoInstance927.setDEF("hanim_l_medial_malleolus")
fieldValue928 = x3d.fieldValue()
fieldValue928.setName("name")
fieldValue928.setValue("l_medial_malleolus")

ProtoInstance927.addFieldValue(fieldValue928)
fieldValue929 = x3d.fieldValue()
fieldValue929.setName("translation")
fieldValue929.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance927.addFieldValue(fieldValue929)

fieldValue923.addChildren(ProtoInstance927)
ProtoInstance930 = x3d.ProtoInstance()
ProtoInstance930.setName("Site")
ProtoInstance930.setDEF("hanim_l_sphyrion")
fieldValue931 = x3d.fieldValue()
fieldValue931.setName("name")
fieldValue931.setValue("l_sphyrion")

ProtoInstance930.addFieldValue(fieldValue931)
fieldValue932 = x3d.fieldValue()
fieldValue932.setName("translation")
fieldValue932.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance930.addFieldValue(fieldValue932)

fieldValue923.addChildren(ProtoInstance930)
ProtoInstance933 = x3d.ProtoInstance()
ProtoInstance933.setName("Site")
ProtoInstance933.setDEF("hanim_l_calcaneus_posterior")
fieldValue934 = x3d.fieldValue()
fieldValue934.setName("name")
fieldValue934.setValue("l_calcaneus_posterior")

ProtoInstance933.addFieldValue(fieldValue934)
fieldValue935 = x3d.fieldValue()
fieldValue935.setName("translation")
fieldValue935.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance933.addFieldValue(fieldValue935)

fieldValue923.addChildren(ProtoInstance933)

ProtoInstance921.addFieldValue(fieldValue923)

fieldValue900.addChildren(ProtoInstance921)

ProtoInstance896.addFieldValue(fieldValue900)

fieldValue895.addChildren(ProtoInstance896)
ProtoInstance936 = x3d.ProtoInstance()
ProtoInstance936.setName("Segment")
ProtoInstance936.setDEF("hanim_l_calf")
fieldValue937 = x3d.fieldValue()
fieldValue937.setName("name")
fieldValue937.setValue("l_calf")

ProtoInstance936.addFieldValue(fieldValue937)

fieldValue895.addChildren(ProtoInstance936)

ProtoInstance891.addFieldValue(fieldValue895)

fieldValue890.addChildren(ProtoInstance891)
ProtoInstance938 = x3d.ProtoInstance()
ProtoInstance938.setName("Segment")
ProtoInstance938.setDEF("hanim_l_thigh")
fieldValue939 = x3d.fieldValue()
fieldValue939.setName("name")
fieldValue939.setValue("l_thigh")

ProtoInstance938.addFieldValue(fieldValue939)
fieldValue940 = x3d.fieldValue()
fieldValue940.setName("children")
ProtoInstance941 = x3d.ProtoInstance()
ProtoInstance941.setName("Site")
ProtoInstance941.setDEF("hanim_l_knee_crease")
fieldValue942 = x3d.fieldValue()
fieldValue942.setName("name")
fieldValue942.setValue("l_knee_crease")

ProtoInstance941.addFieldValue(fieldValue942)
fieldValue943 = x3d.fieldValue()
fieldValue943.setName("translation")
fieldValue943.setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757")

ProtoInstance941.addFieldValue(fieldValue943)

fieldValue940.addChildren(ProtoInstance941)
ProtoInstance944 = x3d.ProtoInstance()
ProtoInstance944.setName("Site")
ProtoInstance944.setDEF("hanim_l_femoral_lateral_epicondyles")
fieldValue945 = x3d.fieldValue()
fieldValue945.setName("name")
fieldValue945.setValue("l_femoral_lateral_epicondyles")

ProtoInstance944.addFieldValue(fieldValue945)
fieldValue946 = x3d.fieldValue()
fieldValue946.setName("translation")
fieldValue946.setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746")

ProtoInstance944.addFieldValue(fieldValue946)

fieldValue940.addChildren(ProtoInstance944)
ProtoInstance947 = x3d.ProtoInstance()
ProtoInstance947.setName("Site")
ProtoInstance947.setDEF("hanim_l_femoral_medial_epicondyles")
fieldValue948 = x3d.fieldValue()
fieldValue948.setName("name")
fieldValue948.setValue("l_femoral_lateral_epicondyles")

ProtoInstance947.addFieldValue(fieldValue948)
fieldValue949 = x3d.fieldValue()
fieldValue949.setName("translation")
fieldValue949.setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183")

ProtoInstance947.addFieldValue(fieldValue949)

fieldValue940.addChildren(ProtoInstance947)

ProtoInstance938.addFieldValue(fieldValue940)

fieldValue890.addChildren(ProtoInstance938)

ProtoInstance886.addFieldValue(fieldValue890)

fieldValue885.addChildren(ProtoInstance886)
ProtoInstance950 = x3d.ProtoInstance()
ProtoInstance950.setName("Joint")
ProtoInstance950.setDEF("hanim_r_hip")
fieldValue951 = x3d.fieldValue()
fieldValue951.setName("stiffness")
fieldValue951.setValue("1 1 1")

ProtoInstance950.addFieldValue(fieldValue951)
fieldValue952 = x3d.fieldValue()
fieldValue952.setName("name")
fieldValue952.setValue("r_hip")

ProtoInstance950.addFieldValue(fieldValue952)
fieldValue953 = x3d.fieldValue()
fieldValue953.setName("center")
fieldValue953.setValue("-0.0949999988079071 0.9171000123023987 0.002899999963119626")

ProtoInstance950.addFieldValue(fieldValue953)
fieldValue954 = x3d.fieldValue()
fieldValue954.setName("children")
ProtoInstance955 = x3d.ProtoInstance()
ProtoInstance955.setName("Joint")
ProtoInstance955.setDEF("hanim_r_knee")
fieldValue956 = x3d.fieldValue()
fieldValue956.setName("stiffness")
fieldValue956.setValue("1 1 1")

ProtoInstance955.addFieldValue(fieldValue956)
fieldValue957 = x3d.fieldValue()
fieldValue957.setName("name")
fieldValue957.setValue("r_knee")

ProtoInstance955.addFieldValue(fieldValue957)
fieldValue958 = x3d.fieldValue()
fieldValue958.setName("center")
fieldValue958.setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492")

ProtoInstance955.addFieldValue(fieldValue958)
fieldValue959 = x3d.fieldValue()
fieldValue959.setName("children")
ProtoInstance960 = x3d.ProtoInstance()
ProtoInstance960.setName("Joint")
ProtoInstance960.setDEF("hanim_r_talocrural")
fieldValue961 = x3d.fieldValue()
fieldValue961.setName("stiffness")
fieldValue961.setValue("1 1 1")

ProtoInstance960.addFieldValue(fieldValue961)
fieldValue962 = x3d.fieldValue()
fieldValue962.setName("name")
fieldValue962.setValue("r_talocrural")

ProtoInstance960.addFieldValue(fieldValue962)
fieldValue963 = x3d.fieldValue()
fieldValue963.setName("center")
fieldValue963.setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044")

ProtoInstance960.addFieldValue(fieldValue963)
fieldValue964 = x3d.fieldValue()
fieldValue964.setName("children")
ProtoInstance965 = x3d.ProtoInstance()
ProtoInstance965.setName("Joint")
ProtoInstance965.setDEF("hanim_r_metatarsophalangeal_")
fieldValue966 = x3d.fieldValue()
fieldValue966.setName("stiffness")
fieldValue966.setValue("1 1 1")

ProtoInstance965.addFieldValue(fieldValue966)
fieldValue967 = x3d.fieldValue()
fieldValue967.setName("name")
fieldValue967.setValue("r_metatarsophalangeal_")

ProtoInstance965.addFieldValue(fieldValue967)
fieldValue968 = x3d.fieldValue()
fieldValue968.setName("center")
fieldValue968.setValue("-0.08009999990463257 0 0.03680000081658363")

ProtoInstance965.addFieldValue(fieldValue968)
fieldValue969 = x3d.fieldValue()
fieldValue969.setName("children")
ProtoInstance970 = x3d.ProtoInstance()
ProtoInstance970.setName("Segment")
ProtoInstance970.setDEF("hanim_r_middistal")
fieldValue971 = x3d.fieldValue()
fieldValue971.setName("name")
fieldValue971.setValue("r_middistal")

ProtoInstance970.addFieldValue(fieldValue971)
fieldValue972 = x3d.fieldValue()
fieldValue972.setName("children")
ProtoInstance973 = x3d.ProtoInstance()
ProtoInstance973.setName("Site")
ProtoInstance973.setDEF("hanim_r_middistal_tip")
fieldValue974 = x3d.fieldValue()
fieldValue974.setName("name")
fieldValue974.setValue("r_middistal_tip")

ProtoInstance973.addFieldValue(fieldValue974)
fieldValue975 = x3d.fieldValue()
fieldValue975.setName("translation")
fieldValue975.setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")

ProtoInstance973.addFieldValue(fieldValue975)

fieldValue972.addChildren(ProtoInstance973)
ProtoInstance976 = x3d.ProtoInstance()
ProtoInstance976.setName("Site")
ProtoInstance976.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue977 = x3d.fieldValue()
fieldValue977.setName("name")
fieldValue977.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance976.addFieldValue(fieldValue977)
fieldValue978 = x3d.fieldValue()
fieldValue978.setName("translation")
fieldValue978.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance976.addFieldValue(fieldValue978)

fieldValue972.addChildren(ProtoInstance976)
ProtoInstance979 = x3d.ProtoInstance()
ProtoInstance979.setName("Site")
ProtoInstance979.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue980 = x3d.fieldValue()
fieldValue980.setName("name")
fieldValue980.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance979.addFieldValue(fieldValue980)
fieldValue981 = x3d.fieldValue()
fieldValue981.setName("translation")
fieldValue981.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance979.addFieldValue(fieldValue981)

fieldValue972.addChildren(ProtoInstance979)
ProtoInstance982 = x3d.ProtoInstance()
ProtoInstance982.setName("Site")
ProtoInstance982.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue983 = x3d.fieldValue()
fieldValue983.setName("name")
fieldValue983.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance982.addFieldValue(fieldValue983)
fieldValue984 = x3d.fieldValue()
fieldValue984.setName("translation")
fieldValue984.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance982.addFieldValue(fieldValue984)

fieldValue972.addChildren(ProtoInstance982)

ProtoInstance970.addFieldValue(fieldValue972)

fieldValue969.addChildren(ProtoInstance970)

ProtoInstance965.addFieldValue(fieldValue969)

fieldValue964.addChildren(ProtoInstance965)
ProtoInstance985 = x3d.ProtoInstance()
ProtoInstance985.setName("Segment")
ProtoInstance985.setDEF("hanim_r_hindfoot")
fieldValue986 = x3d.fieldValue()
fieldValue986.setName("name")
fieldValue986.setValue("r_hindfoot")

ProtoInstance985.addFieldValue(fieldValue986)
fieldValue987 = x3d.fieldValue()
fieldValue987.setName("children")
ProtoInstance988 = x3d.ProtoInstance()
ProtoInstance988.setName("Site")
ProtoInstance988.setDEF("hanim_r_lateral_malleolus")
fieldValue989 = x3d.fieldValue()
fieldValue989.setName("name")
fieldValue989.setValue("r_lateral_malleolus")

ProtoInstance988.addFieldValue(fieldValue989)
fieldValue990 = x3d.fieldValue()
fieldValue990.setName("translation")
fieldValue990.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance988.addFieldValue(fieldValue990)

fieldValue987.addChildren(ProtoInstance988)
ProtoInstance991 = x3d.ProtoInstance()
ProtoInstance991.setName("Site")
ProtoInstance991.setDEF("hanim_r_medial_malleolus")
fieldValue992 = x3d.fieldValue()
fieldValue992.setName("name")
fieldValue992.setValue("r_medial_malleolus")

ProtoInstance991.addFieldValue(fieldValue992)
fieldValue993 = x3d.fieldValue()
fieldValue993.setName("translation")
fieldValue993.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance991.addFieldValue(fieldValue993)

fieldValue987.addChildren(ProtoInstance991)
ProtoInstance994 = x3d.ProtoInstance()
ProtoInstance994.setName("Site")
ProtoInstance994.setDEF("hanim_r_sphyrion")
fieldValue995 = x3d.fieldValue()
fieldValue995.setName("name")
fieldValue995.setValue("r_sphyrion")

ProtoInstance994.addFieldValue(fieldValue995)
fieldValue996 = x3d.fieldValue()
fieldValue996.setName("translation")
fieldValue996.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance994.addFieldValue(fieldValue996)

fieldValue987.addChildren(ProtoInstance994)
ProtoInstance997 = x3d.ProtoInstance()
ProtoInstance997.setName("Site")
ProtoInstance997.setDEF("hanim_r_calcaneus_posterior")
fieldValue998 = x3d.fieldValue()
fieldValue998.setName("name")
fieldValue998.setValue("r_calcaneus_posterior")

ProtoInstance997.addFieldValue(fieldValue998)
fieldValue999 = x3d.fieldValue()
fieldValue999.setName("translation")
fieldValue999.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance997.addFieldValue(fieldValue999)

fieldValue987.addChildren(ProtoInstance997)

ProtoInstance985.addFieldValue(fieldValue987)

fieldValue964.addChildren(ProtoInstance985)

ProtoInstance960.addFieldValue(fieldValue964)

fieldValue959.addChildren(ProtoInstance960)
ProtoInstance1000 = x3d.ProtoInstance()
ProtoInstance1000.setName("Segment")
ProtoInstance1000.setDEF("hanim_r_calf")
fieldValue1001 = x3d.fieldValue()
fieldValue1001.setName("name")
fieldValue1001.setValue("r_calf")

ProtoInstance1000.addFieldValue(fieldValue1001)

fieldValue959.addChildren(ProtoInstance1000)

ProtoInstance955.addFieldValue(fieldValue959)

fieldValue954.addChildren(ProtoInstance955)
ProtoInstance1002 = x3d.ProtoInstance()
ProtoInstance1002.setName("Segment")
ProtoInstance1002.setDEF("hanim_r_thigh")
fieldValue1003 = x3d.fieldValue()
fieldValue1003.setName("name")
fieldValue1003.setValue("r_thigh")

ProtoInstance1002.addFieldValue(fieldValue1003)
fieldValue1004 = x3d.fieldValue()
fieldValue1004.setName("children")
ProtoInstance1005 = x3d.ProtoInstance()
ProtoInstance1005.setName("Site")
ProtoInstance1005.setDEF("hanim_r_knee_crease")
fieldValue1006 = x3d.fieldValue()
fieldValue1006.setName("name")
fieldValue1006.setValue("r_knee_crease")

ProtoInstance1005.addFieldValue(fieldValue1006)
fieldValue1007 = x3d.fieldValue()
fieldValue1007.setName("translation")
fieldValue1007.setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")

ProtoInstance1005.addFieldValue(fieldValue1007)

fieldValue1004.addChildren(ProtoInstance1005)
ProtoInstance1008 = x3d.ProtoInstance()
ProtoInstance1008.setName("Site")
ProtoInstance1008.setDEF("hanim_r_femoral_lateral_epicondyles")
fieldValue1009 = x3d.fieldValue()
fieldValue1009.setName("name")
fieldValue1009.setValue("r_femoral_lateral_epicondyles")

ProtoInstance1008.addFieldValue(fieldValue1009)
fieldValue1010 = x3d.fieldValue()
fieldValue1010.setName("translation")
fieldValue1010.setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052")

ProtoInstance1008.addFieldValue(fieldValue1010)

fieldValue1004.addChildren(ProtoInstance1008)
ProtoInstance1011 = x3d.ProtoInstance()
ProtoInstance1011.setName("Site")
ProtoInstance1011.setDEF("hanim_r_femoral_medial_epicondyles")
fieldValue1012 = x3d.fieldValue()
fieldValue1012.setName("name")
fieldValue1012.setValue("r_femoral_lateral_epicondyles")

ProtoInstance1011.addFieldValue(fieldValue1012)
fieldValue1013 = x3d.fieldValue()
fieldValue1013.setName("translation")
fieldValue1013.setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821")

ProtoInstance1011.addFieldValue(fieldValue1013)

fieldValue1004.addChildren(ProtoInstance1011)

ProtoInstance1002.addFieldValue(fieldValue1004)

fieldValue954.addChildren(ProtoInstance1002)

ProtoInstance950.addFieldValue(fieldValue954)

fieldValue885.addChildren(ProtoInstance950)
ProtoInstance1014 = x3d.ProtoInstance()
ProtoInstance1014.setName("Segment")
ProtoInstance1014.setDEF("hanim_pelvis")
fieldValue1015 = x3d.fieldValue()
fieldValue1015.setName("name")
fieldValue1015.setValue("pelvis")

ProtoInstance1014.addFieldValue(fieldValue1015)

fieldValue885.addChildren(ProtoInstance1014)

ProtoInstance881.addFieldValue(fieldValue885)

fieldValue496.addChildren(ProtoInstance881)
ProtoInstance1016 = x3d.ProtoInstance()
ProtoInstance1016.setName("Joint")
ProtoInstance1016.setDEF("hanim_l_hip")
fieldValue1017 = x3d.fieldValue()
fieldValue1017.setName("stiffness")
fieldValue1017.setValue("1 1 1")

ProtoInstance1016.addFieldValue(fieldValue1017)
fieldValue1018 = x3d.fieldValue()
fieldValue1018.setName("name")
fieldValue1018.setValue("l_hip")

ProtoInstance1016.addFieldValue(fieldValue1018)
fieldValue1019 = x3d.fieldValue()
fieldValue1019.setName("center")
fieldValue1019.setValue("0.09610000252723694 0.9124000072479248 -0.00009999999747378752")

ProtoInstance1016.addFieldValue(fieldValue1019)
fieldValue1020 = x3d.fieldValue()
fieldValue1020.setName("children")
ProtoInstance1021 = x3d.ProtoInstance()
ProtoInstance1021.setName("Joint")
ProtoInstance1021.setDEF("hanim_l_knee")
fieldValue1022 = x3d.fieldValue()
fieldValue1022.setName("stiffness")
fieldValue1022.setValue("1 1 1")

ProtoInstance1021.addFieldValue(fieldValue1022)
fieldValue1023 = x3d.fieldValue()
fieldValue1023.setName("name")
fieldValue1023.setValue("l_knee")

ProtoInstance1021.addFieldValue(fieldValue1023)
fieldValue1024 = x3d.fieldValue()
fieldValue1024.setName("center")
fieldValue1024.setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995")

ProtoInstance1021.addFieldValue(fieldValue1024)
fieldValue1025 = x3d.fieldValue()
fieldValue1025.setName("children")
ProtoInstance1026 = x3d.ProtoInstance()
ProtoInstance1026.setName("Joint")
ProtoInstance1026.setDEF("hanim_l_talocrural")
fieldValue1027 = x3d.fieldValue()
fieldValue1027.setName("stiffness")
fieldValue1027.setValue("1 1 1")

ProtoInstance1026.addFieldValue(fieldValue1027)
fieldValue1028 = x3d.fieldValue()
fieldValue1028.setName("name")
fieldValue1028.setValue("l_talocrural")

ProtoInstance1026.addFieldValue(fieldValue1028)
fieldValue1029 = x3d.fieldValue()
fieldValue1029.setName("center")
fieldValue1029.setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727")

ProtoInstance1026.addFieldValue(fieldValue1029)
fieldValue1030 = x3d.fieldValue()
fieldValue1030.setName("children")
ProtoInstance1031 = x3d.ProtoInstance()
ProtoInstance1031.setName("Joint")
ProtoInstance1031.setDEF("hanim_l_metatarsophalangeal_")
fieldValue1032 = x3d.fieldValue()
fieldValue1032.setName("stiffness")
fieldValue1032.setValue("1 1 1")

ProtoInstance1031.addFieldValue(fieldValue1032)
fieldValue1033 = x3d.fieldValue()
fieldValue1033.setName("name")
fieldValue1033.setValue("l_metatarsophalangeal_")

ProtoInstance1031.addFieldValue(fieldValue1033)
fieldValue1034 = x3d.fieldValue()
fieldValue1034.setName("center")
fieldValue1034.setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363")

ProtoInstance1031.addFieldValue(fieldValue1034)
fieldValue1035 = x3d.fieldValue()
fieldValue1035.setName("children")
ProtoInstance1036 = x3d.ProtoInstance()
ProtoInstance1036.setName("Segment")
ProtoInstance1036.setDEF("hanim_l_middistal")
fieldValue1037 = x3d.fieldValue()
fieldValue1037.setName("name")
fieldValue1037.setValue("l_middistal")

ProtoInstance1036.addFieldValue(fieldValue1037)
fieldValue1038 = x3d.fieldValue()
fieldValue1038.setName("children")
ProtoInstance1039 = x3d.ProtoInstance()
ProtoInstance1039.setName("Site")
ProtoInstance1039.setDEF("hanim_l_middistal_tip")
fieldValue1040 = x3d.fieldValue()
fieldValue1040.setName("name")
fieldValue1040.setValue("l_middistal_tip")

ProtoInstance1039.addFieldValue(fieldValue1040)
fieldValue1041 = x3d.fieldValue()
fieldValue1041.setName("translation")
fieldValue1041.setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261")

ProtoInstance1039.addFieldValue(fieldValue1041)

fieldValue1038.addChildren(ProtoInstance1039)
ProtoInstance1042 = x3d.ProtoInstance()
ProtoInstance1042.setName("Site")
ProtoInstance1042.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue1043 = x3d.fieldValue()
fieldValue1043.setName("name")
fieldValue1043.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance1042.addFieldValue(fieldValue1043)
fieldValue1044 = x3d.fieldValue()
fieldValue1044.setName("translation")
fieldValue1044.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance1042.addFieldValue(fieldValue1044)

fieldValue1038.addChildren(ProtoInstance1042)
ProtoInstance1045 = x3d.ProtoInstance()
ProtoInstance1045.setName("Site")
ProtoInstance1045.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue1046 = x3d.fieldValue()
fieldValue1046.setName("name")
fieldValue1046.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance1045.addFieldValue(fieldValue1046)
fieldValue1047 = x3d.fieldValue()
fieldValue1047.setName("translation")
fieldValue1047.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance1045.addFieldValue(fieldValue1047)

fieldValue1038.addChildren(ProtoInstance1045)
ProtoInstance1048 = x3d.ProtoInstance()
ProtoInstance1048.setName("Site")
ProtoInstance1048.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue1049 = x3d.fieldValue()
fieldValue1049.setName("name")
fieldValue1049.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance1048.addFieldValue(fieldValue1049)
fieldValue1050 = x3d.fieldValue()
fieldValue1050.setName("translation")
fieldValue1050.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance1048.addFieldValue(fieldValue1050)

fieldValue1038.addChildren(ProtoInstance1048)

ProtoInstance1036.addFieldValue(fieldValue1038)

fieldValue1035.addChildren(ProtoInstance1036)

ProtoInstance1031.addFieldValue(fieldValue1035)

fieldValue1030.addChildren(ProtoInstance1031)
ProtoInstance1051 = x3d.ProtoInstance()
ProtoInstance1051.setName("Segment")
ProtoInstance1051.setDEF("hanim_l_hindfoot")
fieldValue1052 = x3d.fieldValue()
fieldValue1052.setName("name")
fieldValue1052.setValue("l_hindfoot")

ProtoInstance1051.addFieldValue(fieldValue1052)
fieldValue1053 = x3d.fieldValue()
fieldValue1053.setName("children")
ProtoInstance1054 = x3d.ProtoInstance()
ProtoInstance1054.setName("Site")
ProtoInstance1054.setDEF("hanim_l_lateral_malleolus")
fieldValue1055 = x3d.fieldValue()
fieldValue1055.setName("name")
fieldValue1055.setValue("l_lateral_malleolus")

ProtoInstance1054.addFieldValue(fieldValue1055)
fieldValue1056 = x3d.fieldValue()
fieldValue1056.setName("translation")
fieldValue1056.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance1054.addFieldValue(fieldValue1056)

fieldValue1053.addChildren(ProtoInstance1054)
ProtoInstance1057 = x3d.ProtoInstance()
ProtoInstance1057.setName("Site")
ProtoInstance1057.setDEF("hanim_l_medial_malleolus")
fieldValue1058 = x3d.fieldValue()
fieldValue1058.setName("name")
fieldValue1058.setValue("l_medial_malleolus")

ProtoInstance1057.addFieldValue(fieldValue1058)
fieldValue1059 = x3d.fieldValue()
fieldValue1059.setName("translation")
fieldValue1059.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance1057.addFieldValue(fieldValue1059)

fieldValue1053.addChildren(ProtoInstance1057)
ProtoInstance1060 = x3d.ProtoInstance()
ProtoInstance1060.setName("Site")
ProtoInstance1060.setDEF("hanim_l_sphyrion")
fieldValue1061 = x3d.fieldValue()
fieldValue1061.setName("name")
fieldValue1061.setValue("l_sphyrion")

ProtoInstance1060.addFieldValue(fieldValue1061)
fieldValue1062 = x3d.fieldValue()
fieldValue1062.setName("translation")
fieldValue1062.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance1060.addFieldValue(fieldValue1062)

fieldValue1053.addChildren(ProtoInstance1060)
ProtoInstance1063 = x3d.ProtoInstance()
ProtoInstance1063.setName("Site")
ProtoInstance1063.setDEF("hanim_l_calcaneus_posterior")
fieldValue1064 = x3d.fieldValue()
fieldValue1064.setName("name")
fieldValue1064.setValue("l_calcaneus_posterior")

ProtoInstance1063.addFieldValue(fieldValue1064)
fieldValue1065 = x3d.fieldValue()
fieldValue1065.setName("translation")
fieldValue1065.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance1063.addFieldValue(fieldValue1065)

fieldValue1053.addChildren(ProtoInstance1063)

ProtoInstance1051.addFieldValue(fieldValue1053)

fieldValue1030.addChildren(ProtoInstance1051)

ProtoInstance1026.addFieldValue(fieldValue1030)

fieldValue1025.addChildren(ProtoInstance1026)
ProtoInstance1066 = x3d.ProtoInstance()
ProtoInstance1066.setName("Segment")
ProtoInstance1066.setDEF("hanim_l_calf")
fieldValue1067 = x3d.fieldValue()
fieldValue1067.setName("name")
fieldValue1067.setValue("l_calf")

ProtoInstance1066.addFieldValue(fieldValue1067)

fieldValue1025.addChildren(ProtoInstance1066)

ProtoInstance1021.addFieldValue(fieldValue1025)

fieldValue1020.addChildren(ProtoInstance1021)
ProtoInstance1068 = x3d.ProtoInstance()
ProtoInstance1068.setName("Segment")
ProtoInstance1068.setDEF("hanim_l_thigh")
fieldValue1069 = x3d.fieldValue()
fieldValue1069.setName("name")
fieldValue1069.setValue("l_thigh")

ProtoInstance1068.addFieldValue(fieldValue1069)
fieldValue1070 = x3d.fieldValue()
fieldValue1070.setName("children")
ProtoInstance1071 = x3d.ProtoInstance()
ProtoInstance1071.setName("Site")
ProtoInstance1071.setDEF("hanim_l_knee_crease")
fieldValue1072 = x3d.fieldValue()
fieldValue1072.setName("name")
fieldValue1072.setValue("l_knee_crease")

ProtoInstance1071.addFieldValue(fieldValue1072)
fieldValue1073 = x3d.fieldValue()
fieldValue1073.setName("translation")
fieldValue1073.setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757")

ProtoInstance1071.addFieldValue(fieldValue1073)

fieldValue1070.addChildren(ProtoInstance1071)
ProtoInstance1074 = x3d.ProtoInstance()
ProtoInstance1074.setName("Site")
ProtoInstance1074.setDEF("hanim_l_femoral_lateral_epicondyles")
fieldValue1075 = x3d.fieldValue()
fieldValue1075.setName("name")
fieldValue1075.setValue("l_femoral_lateral_epicondyles")

ProtoInstance1074.addFieldValue(fieldValue1075)
fieldValue1076 = x3d.fieldValue()
fieldValue1076.setName("translation")
fieldValue1076.setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746")

ProtoInstance1074.addFieldValue(fieldValue1076)

fieldValue1070.addChildren(ProtoInstance1074)
ProtoInstance1077 = x3d.ProtoInstance()
ProtoInstance1077.setName("Site")
ProtoInstance1077.setDEF("hanim_l_femoral_medial_epicondyles")
fieldValue1078 = x3d.fieldValue()
fieldValue1078.setName("name")
fieldValue1078.setValue("l_femoral_lateral_epicondyles")

ProtoInstance1077.addFieldValue(fieldValue1078)
fieldValue1079 = x3d.fieldValue()
fieldValue1079.setName("translation")
fieldValue1079.setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183")

ProtoInstance1077.addFieldValue(fieldValue1079)

fieldValue1070.addChildren(ProtoInstance1077)

ProtoInstance1068.addFieldValue(fieldValue1070)

fieldValue1020.addChildren(ProtoInstance1068)

ProtoInstance1016.addFieldValue(fieldValue1020)

fieldValue496.addChildren(ProtoInstance1016)
ProtoInstance1080 = x3d.ProtoInstance()
ProtoInstance1080.setName("Joint")
ProtoInstance1080.setDEF("hanim_l_knee")
fieldValue1081 = x3d.fieldValue()
fieldValue1081.setName("stiffness")
fieldValue1081.setValue("1 1 1")

ProtoInstance1080.addFieldValue(fieldValue1081)
fieldValue1082 = x3d.fieldValue()
fieldValue1082.setName("name")
fieldValue1082.setValue("l_knee")

ProtoInstance1080.addFieldValue(fieldValue1082)
fieldValue1083 = x3d.fieldValue()
fieldValue1083.setName("center")
fieldValue1083.setValue("0.10400000214576721 0.48669999837875366 0.030799999833106995")

ProtoInstance1080.addFieldValue(fieldValue1083)
fieldValue1084 = x3d.fieldValue()
fieldValue1084.setName("children")
ProtoInstance1085 = x3d.ProtoInstance()
ProtoInstance1085.setName("Joint")
ProtoInstance1085.setDEF("hanim_l_talocrural")
fieldValue1086 = x3d.fieldValue()
fieldValue1086.setName("stiffness")
fieldValue1086.setValue("1 1 1")

ProtoInstance1085.addFieldValue(fieldValue1086)
fieldValue1087 = x3d.fieldValue()
fieldValue1087.setName("name")
fieldValue1087.setValue("l_talocrural")

ProtoInstance1085.addFieldValue(fieldValue1087)
fieldValue1088 = x3d.fieldValue()
fieldValue1088.setName("center")
fieldValue1088.setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727")

ProtoInstance1085.addFieldValue(fieldValue1088)
fieldValue1089 = x3d.fieldValue()
fieldValue1089.setName("children")
ProtoInstance1090 = x3d.ProtoInstance()
ProtoInstance1090.setName("Joint")
ProtoInstance1090.setDEF("hanim_l_metatarsophalangeal_")
fieldValue1091 = x3d.fieldValue()
fieldValue1091.setName("stiffness")
fieldValue1091.setValue("1 1 1")

ProtoInstance1090.addFieldValue(fieldValue1091)
fieldValue1092 = x3d.fieldValue()
fieldValue1092.setName("name")
fieldValue1092.setValue("l_metatarsophalangeal_")

ProtoInstance1090.addFieldValue(fieldValue1092)
fieldValue1093 = x3d.fieldValue()
fieldValue1093.setName("center")
fieldValue1093.setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363")

ProtoInstance1090.addFieldValue(fieldValue1093)
fieldValue1094 = x3d.fieldValue()
fieldValue1094.setName("children")
ProtoInstance1095 = x3d.ProtoInstance()
ProtoInstance1095.setName("Segment")
ProtoInstance1095.setDEF("hanim_l_middistal")
fieldValue1096 = x3d.fieldValue()
fieldValue1096.setName("name")
fieldValue1096.setValue("l_middistal")

ProtoInstance1095.addFieldValue(fieldValue1096)
fieldValue1097 = x3d.fieldValue()
fieldValue1097.setName("children")
ProtoInstance1098 = x3d.ProtoInstance()
ProtoInstance1098.setName("Site")
ProtoInstance1098.setDEF("hanim_l_middistal_tip")
fieldValue1099 = x3d.fieldValue()
fieldValue1099.setName("name")
fieldValue1099.setValue("l_middistal_tip")

ProtoInstance1098.addFieldValue(fieldValue1099)
fieldValue1100 = x3d.fieldValue()
fieldValue1100.setName("translation")
fieldValue1100.setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261")

ProtoInstance1098.addFieldValue(fieldValue1100)

fieldValue1097.addChildren(ProtoInstance1098)
ProtoInstance1101 = x3d.ProtoInstance()
ProtoInstance1101.setName("Site")
ProtoInstance1101.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue1102 = x3d.fieldValue()
fieldValue1102.setName("name")
fieldValue1102.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance1101.addFieldValue(fieldValue1102)
fieldValue1103 = x3d.fieldValue()
fieldValue1103.setName("translation")
fieldValue1103.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance1101.addFieldValue(fieldValue1103)

fieldValue1097.addChildren(ProtoInstance1101)
ProtoInstance1104 = x3d.ProtoInstance()
ProtoInstance1104.setName("Site")
ProtoInstance1104.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue1105 = x3d.fieldValue()
fieldValue1105.setName("name")
fieldValue1105.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance1104.addFieldValue(fieldValue1105)
fieldValue1106 = x3d.fieldValue()
fieldValue1106.setName("translation")
fieldValue1106.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance1104.addFieldValue(fieldValue1106)

fieldValue1097.addChildren(ProtoInstance1104)
ProtoInstance1107 = x3d.ProtoInstance()
ProtoInstance1107.setName("Site")
ProtoInstance1107.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue1108 = x3d.fieldValue()
fieldValue1108.setName("name")
fieldValue1108.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance1107.addFieldValue(fieldValue1108)
fieldValue1109 = x3d.fieldValue()
fieldValue1109.setName("translation")
fieldValue1109.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance1107.addFieldValue(fieldValue1109)

fieldValue1097.addChildren(ProtoInstance1107)

ProtoInstance1095.addFieldValue(fieldValue1097)

fieldValue1094.addChildren(ProtoInstance1095)

ProtoInstance1090.addFieldValue(fieldValue1094)

fieldValue1089.addChildren(ProtoInstance1090)
ProtoInstance1110 = x3d.ProtoInstance()
ProtoInstance1110.setName("Segment")
ProtoInstance1110.setDEF("hanim_l_hindfoot")
fieldValue1111 = x3d.fieldValue()
fieldValue1111.setName("name")
fieldValue1111.setValue("l_hindfoot")

ProtoInstance1110.addFieldValue(fieldValue1111)
fieldValue1112 = x3d.fieldValue()
fieldValue1112.setName("children")
ProtoInstance1113 = x3d.ProtoInstance()
ProtoInstance1113.setName("Site")
ProtoInstance1113.setDEF("hanim_l_lateral_malleolus")
fieldValue1114 = x3d.fieldValue()
fieldValue1114.setName("name")
fieldValue1114.setValue("l_lateral_malleolus")

ProtoInstance1113.addFieldValue(fieldValue1114)
fieldValue1115 = x3d.fieldValue()
fieldValue1115.setName("translation")
fieldValue1115.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance1113.addFieldValue(fieldValue1115)

fieldValue1112.addChildren(ProtoInstance1113)
ProtoInstance1116 = x3d.ProtoInstance()
ProtoInstance1116.setName("Site")
ProtoInstance1116.setDEF("hanim_l_medial_malleolus")
fieldValue1117 = x3d.fieldValue()
fieldValue1117.setName("name")
fieldValue1117.setValue("l_medial_malleolus")

ProtoInstance1116.addFieldValue(fieldValue1117)
fieldValue1118 = x3d.fieldValue()
fieldValue1118.setName("translation")
fieldValue1118.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance1116.addFieldValue(fieldValue1118)

fieldValue1112.addChildren(ProtoInstance1116)
ProtoInstance1119 = x3d.ProtoInstance()
ProtoInstance1119.setName("Site")
ProtoInstance1119.setDEF("hanim_l_sphyrion")
fieldValue1120 = x3d.fieldValue()
fieldValue1120.setName("name")
fieldValue1120.setValue("l_sphyrion")

ProtoInstance1119.addFieldValue(fieldValue1120)
fieldValue1121 = x3d.fieldValue()
fieldValue1121.setName("translation")
fieldValue1121.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance1119.addFieldValue(fieldValue1121)

fieldValue1112.addChildren(ProtoInstance1119)
ProtoInstance1122 = x3d.ProtoInstance()
ProtoInstance1122.setName("Site")
ProtoInstance1122.setDEF("hanim_l_calcaneus_posterior")
fieldValue1123 = x3d.fieldValue()
fieldValue1123.setName("name")
fieldValue1123.setValue("l_calcaneus_posterior")

ProtoInstance1122.addFieldValue(fieldValue1123)
fieldValue1124 = x3d.fieldValue()
fieldValue1124.setName("translation")
fieldValue1124.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance1122.addFieldValue(fieldValue1124)

fieldValue1112.addChildren(ProtoInstance1122)

ProtoInstance1110.addFieldValue(fieldValue1112)

fieldValue1089.addChildren(ProtoInstance1110)

ProtoInstance1085.addFieldValue(fieldValue1089)

fieldValue1084.addChildren(ProtoInstance1085)
ProtoInstance1125 = x3d.ProtoInstance()
ProtoInstance1125.setName("Segment")
ProtoInstance1125.setDEF("hanim_l_calf")
fieldValue1126 = x3d.fieldValue()
fieldValue1126.setName("name")
fieldValue1126.setValue("l_calf")

ProtoInstance1125.addFieldValue(fieldValue1126)

fieldValue1084.addChildren(ProtoInstance1125)

ProtoInstance1080.addFieldValue(fieldValue1084)

fieldValue496.addChildren(ProtoInstance1080)
ProtoInstance1127 = x3d.ProtoInstance()
ProtoInstance1127.setName("Joint")
ProtoInstance1127.setDEF("hanim_l_talocrural")
fieldValue1128 = x3d.fieldValue()
fieldValue1128.setName("stiffness")
fieldValue1128.setValue("1 1 1")

ProtoInstance1127.addFieldValue(fieldValue1128)
fieldValue1129 = x3d.fieldValue()
fieldValue1129.setName("name")
fieldValue1129.setValue("l_talocrural")

ProtoInstance1127.addFieldValue(fieldValue1129)
fieldValue1130 = x3d.fieldValue()
fieldValue1130.setName("center")
fieldValue1130.setValue("0.11010000109672546 0.06560000032186508 -0.07360000163316727")

ProtoInstance1127.addFieldValue(fieldValue1130)
fieldValue1131 = x3d.fieldValue()
fieldValue1131.setName("children")
ProtoInstance1132 = x3d.ProtoInstance()
ProtoInstance1132.setName("Joint")
ProtoInstance1132.setDEF("hanim_l_metatarsophalangeal_")
fieldValue1133 = x3d.fieldValue()
fieldValue1133.setName("stiffness")
fieldValue1133.setValue("1 1 1")

ProtoInstance1132.addFieldValue(fieldValue1133)
fieldValue1134 = x3d.fieldValue()
fieldValue1134.setName("name")
fieldValue1134.setValue("l_metatarsophalangeal_")

ProtoInstance1132.addFieldValue(fieldValue1134)
fieldValue1135 = x3d.fieldValue()
fieldValue1135.setName("center")
fieldValue1135.setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363")

ProtoInstance1132.addFieldValue(fieldValue1135)
fieldValue1136 = x3d.fieldValue()
fieldValue1136.setName("children")
ProtoInstance1137 = x3d.ProtoInstance()
ProtoInstance1137.setName("Segment")
ProtoInstance1137.setDEF("hanim_l_middistal")
fieldValue1138 = x3d.fieldValue()
fieldValue1138.setName("name")
fieldValue1138.setValue("l_middistal")

ProtoInstance1137.addFieldValue(fieldValue1138)
fieldValue1139 = x3d.fieldValue()
fieldValue1139.setName("children")
ProtoInstance1140 = x3d.ProtoInstance()
ProtoInstance1140.setName("Site")
ProtoInstance1140.setDEF("hanim_l_middistal_tip")
fieldValue1141 = x3d.fieldValue()
fieldValue1141.setName("name")
fieldValue1141.setValue("l_middistal_tip")

ProtoInstance1140.addFieldValue(fieldValue1141)
fieldValue1142 = x3d.fieldValue()
fieldValue1142.setName("translation")
fieldValue1142.setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261")

ProtoInstance1140.addFieldValue(fieldValue1142)

fieldValue1139.addChildren(ProtoInstance1140)
ProtoInstance1143 = x3d.ProtoInstance()
ProtoInstance1143.setName("Site")
ProtoInstance1143.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue1144 = x3d.fieldValue()
fieldValue1144.setName("name")
fieldValue1144.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance1143.addFieldValue(fieldValue1144)
fieldValue1145 = x3d.fieldValue()
fieldValue1145.setName("translation")
fieldValue1145.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance1143.addFieldValue(fieldValue1145)

fieldValue1139.addChildren(ProtoInstance1143)
ProtoInstance1146 = x3d.ProtoInstance()
ProtoInstance1146.setName("Site")
ProtoInstance1146.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue1147 = x3d.fieldValue()
fieldValue1147.setName("name")
fieldValue1147.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance1146.addFieldValue(fieldValue1147)
fieldValue1148 = x3d.fieldValue()
fieldValue1148.setName("translation")
fieldValue1148.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance1146.addFieldValue(fieldValue1148)

fieldValue1139.addChildren(ProtoInstance1146)
ProtoInstance1149 = x3d.ProtoInstance()
ProtoInstance1149.setName("Site")
ProtoInstance1149.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue1150 = x3d.fieldValue()
fieldValue1150.setName("name")
fieldValue1150.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance1149.addFieldValue(fieldValue1150)
fieldValue1151 = x3d.fieldValue()
fieldValue1151.setName("translation")
fieldValue1151.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance1149.addFieldValue(fieldValue1151)

fieldValue1139.addChildren(ProtoInstance1149)

ProtoInstance1137.addFieldValue(fieldValue1139)

fieldValue1136.addChildren(ProtoInstance1137)

ProtoInstance1132.addFieldValue(fieldValue1136)

fieldValue1131.addChildren(ProtoInstance1132)
ProtoInstance1152 = x3d.ProtoInstance()
ProtoInstance1152.setName("Segment")
ProtoInstance1152.setDEF("hanim_l_hindfoot")
fieldValue1153 = x3d.fieldValue()
fieldValue1153.setName("name")
fieldValue1153.setValue("l_hindfoot")

ProtoInstance1152.addFieldValue(fieldValue1153)
fieldValue1154 = x3d.fieldValue()
fieldValue1154.setName("children")
ProtoInstance1155 = x3d.ProtoInstance()
ProtoInstance1155.setName("Site")
ProtoInstance1155.setDEF("hanim_l_lateral_malleolus")
fieldValue1156 = x3d.fieldValue()
fieldValue1156.setName("name")
fieldValue1156.setValue("l_lateral_malleolus")

ProtoInstance1155.addFieldValue(fieldValue1156)
fieldValue1157 = x3d.fieldValue()
fieldValue1157.setName("translation")
fieldValue1157.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance1155.addFieldValue(fieldValue1157)

fieldValue1154.addChildren(ProtoInstance1155)
ProtoInstance1158 = x3d.ProtoInstance()
ProtoInstance1158.setName("Site")
ProtoInstance1158.setDEF("hanim_l_medial_malleolus")
fieldValue1159 = x3d.fieldValue()
fieldValue1159.setName("name")
fieldValue1159.setValue("l_medial_malleolus")

ProtoInstance1158.addFieldValue(fieldValue1159)
fieldValue1160 = x3d.fieldValue()
fieldValue1160.setName("translation")
fieldValue1160.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance1158.addFieldValue(fieldValue1160)

fieldValue1154.addChildren(ProtoInstance1158)
ProtoInstance1161 = x3d.ProtoInstance()
ProtoInstance1161.setName("Site")
ProtoInstance1161.setDEF("hanim_l_sphyrion")
fieldValue1162 = x3d.fieldValue()
fieldValue1162.setName("name")
fieldValue1162.setValue("l_sphyrion")

ProtoInstance1161.addFieldValue(fieldValue1162)
fieldValue1163 = x3d.fieldValue()
fieldValue1163.setName("translation")
fieldValue1163.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance1161.addFieldValue(fieldValue1163)

fieldValue1154.addChildren(ProtoInstance1161)
ProtoInstance1164 = x3d.ProtoInstance()
ProtoInstance1164.setName("Site")
ProtoInstance1164.setDEF("hanim_l_calcaneus_posterior")
fieldValue1165 = x3d.fieldValue()
fieldValue1165.setName("name")
fieldValue1165.setValue("l_calcaneus_posterior")

ProtoInstance1164.addFieldValue(fieldValue1165)
fieldValue1166 = x3d.fieldValue()
fieldValue1166.setName("translation")
fieldValue1166.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance1164.addFieldValue(fieldValue1166)

fieldValue1154.addChildren(ProtoInstance1164)

ProtoInstance1152.addFieldValue(fieldValue1154)

fieldValue1131.addChildren(ProtoInstance1152)

ProtoInstance1127.addFieldValue(fieldValue1131)

fieldValue496.addChildren(ProtoInstance1127)
ProtoInstance1167 = x3d.ProtoInstance()
ProtoInstance1167.setName("Joint")
ProtoInstance1167.setDEF("hanim_l_metatarsophalangeal_")
fieldValue1168 = x3d.fieldValue()
fieldValue1168.setName("stiffness")
fieldValue1168.setValue("1 1 1")

ProtoInstance1167.addFieldValue(fieldValue1168)
fieldValue1169 = x3d.fieldValue()
fieldValue1169.setName("name")
fieldValue1169.setValue("l_metatarsophalangeal_")

ProtoInstance1167.addFieldValue(fieldValue1169)
fieldValue1170 = x3d.fieldValue()
fieldValue1170.setName("center")
fieldValue1170.setValue("0.10859999805688858 0.00009999999747378752 0.03680000081658363")

ProtoInstance1167.addFieldValue(fieldValue1170)
fieldValue1171 = x3d.fieldValue()
fieldValue1171.setName("children")
ProtoInstance1172 = x3d.ProtoInstance()
ProtoInstance1172.setName("Segment")
ProtoInstance1172.setDEF("hanim_l_middistal")
fieldValue1173 = x3d.fieldValue()
fieldValue1173.setName("name")
fieldValue1173.setValue("l_middistal")

ProtoInstance1172.addFieldValue(fieldValue1173)
fieldValue1174 = x3d.fieldValue()
fieldValue1174.setName("children")
ProtoInstance1175 = x3d.ProtoInstance()
ProtoInstance1175.setName("Site")
ProtoInstance1175.setDEF("hanim_l_middistal_tip")
fieldValue1176 = x3d.fieldValue()
fieldValue1176.setName("name")
fieldValue1176.setValue("l_middistal_tip")

ProtoInstance1175.addFieldValue(fieldValue1176)
fieldValue1177 = x3d.fieldValue()
fieldValue1177.setName("translation")
fieldValue1177.setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261")

ProtoInstance1175.addFieldValue(fieldValue1177)

fieldValue1174.addChildren(ProtoInstance1175)
ProtoInstance1178 = x3d.ProtoInstance()
ProtoInstance1178.setName("Site")
ProtoInstance1178.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue1179 = x3d.fieldValue()
fieldValue1179.setName("name")
fieldValue1179.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance1178.addFieldValue(fieldValue1179)
fieldValue1180 = x3d.fieldValue()
fieldValue1180.setName("translation")
fieldValue1180.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance1178.addFieldValue(fieldValue1180)

fieldValue1174.addChildren(ProtoInstance1178)
ProtoInstance1181 = x3d.ProtoInstance()
ProtoInstance1181.setName("Site")
ProtoInstance1181.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue1182 = x3d.fieldValue()
fieldValue1182.setName("name")
fieldValue1182.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance1181.addFieldValue(fieldValue1182)
fieldValue1183 = x3d.fieldValue()
fieldValue1183.setName("translation")
fieldValue1183.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance1181.addFieldValue(fieldValue1183)

fieldValue1174.addChildren(ProtoInstance1181)
ProtoInstance1184 = x3d.ProtoInstance()
ProtoInstance1184.setName("Site")
ProtoInstance1184.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue1185 = x3d.fieldValue()
fieldValue1185.setName("name")
fieldValue1185.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance1184.addFieldValue(fieldValue1185)
fieldValue1186 = x3d.fieldValue()
fieldValue1186.setName("translation")
fieldValue1186.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance1184.addFieldValue(fieldValue1186)

fieldValue1174.addChildren(ProtoInstance1184)

ProtoInstance1172.addFieldValue(fieldValue1174)

fieldValue1171.addChildren(ProtoInstance1172)

ProtoInstance1167.addFieldValue(fieldValue1171)

fieldValue496.addChildren(ProtoInstance1167)
ProtoInstance1187 = x3d.ProtoInstance()
ProtoInstance1187.setName("Joint")
ProtoInstance1187.setDEF("hanim_r_hip")
fieldValue1188 = x3d.fieldValue()
fieldValue1188.setName("stiffness")
fieldValue1188.setValue("1 1 1")

ProtoInstance1187.addFieldValue(fieldValue1188)
fieldValue1189 = x3d.fieldValue()
fieldValue1189.setName("name")
fieldValue1189.setValue("r_hip")

ProtoInstance1187.addFieldValue(fieldValue1189)
fieldValue1190 = x3d.fieldValue()
fieldValue1190.setName("center")
fieldValue1190.setValue("-0.0949999988079071 0.9171000123023987 0.002899999963119626")

ProtoInstance1187.addFieldValue(fieldValue1190)
fieldValue1191 = x3d.fieldValue()
fieldValue1191.setName("children")
ProtoInstance1192 = x3d.ProtoInstance()
ProtoInstance1192.setName("Joint")
ProtoInstance1192.setDEF("hanim_r_knee")
fieldValue1193 = x3d.fieldValue()
fieldValue1193.setName("stiffness")
fieldValue1193.setValue("1 1 1")

ProtoInstance1192.addFieldValue(fieldValue1193)
fieldValue1194 = x3d.fieldValue()
fieldValue1194.setName("name")
fieldValue1194.setValue("r_knee")

ProtoInstance1192.addFieldValue(fieldValue1194)
fieldValue1195 = x3d.fieldValue()
fieldValue1195.setName("center")
fieldValue1195.setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492")

ProtoInstance1192.addFieldValue(fieldValue1195)
fieldValue1196 = x3d.fieldValue()
fieldValue1196.setName("children")
ProtoInstance1197 = x3d.ProtoInstance()
ProtoInstance1197.setName("Joint")
ProtoInstance1197.setDEF("hanim_r_talocrural")
fieldValue1198 = x3d.fieldValue()
fieldValue1198.setName("stiffness")
fieldValue1198.setValue("1 1 1")

ProtoInstance1197.addFieldValue(fieldValue1198)
fieldValue1199 = x3d.fieldValue()
fieldValue1199.setName("name")
fieldValue1199.setValue("r_talocrural")

ProtoInstance1197.addFieldValue(fieldValue1199)
fieldValue1200 = x3d.fieldValue()
fieldValue1200.setName("center")
fieldValue1200.setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044")

ProtoInstance1197.addFieldValue(fieldValue1200)
fieldValue1201 = x3d.fieldValue()
fieldValue1201.setName("children")
ProtoInstance1202 = x3d.ProtoInstance()
ProtoInstance1202.setName("Joint")
ProtoInstance1202.setDEF("hanim_r_metatarsophalangeal_")
fieldValue1203 = x3d.fieldValue()
fieldValue1203.setName("stiffness")
fieldValue1203.setValue("1 1 1")

ProtoInstance1202.addFieldValue(fieldValue1203)
fieldValue1204 = x3d.fieldValue()
fieldValue1204.setName("name")
fieldValue1204.setValue("r_metatarsophalangeal_")

ProtoInstance1202.addFieldValue(fieldValue1204)
fieldValue1205 = x3d.fieldValue()
fieldValue1205.setName("center")
fieldValue1205.setValue("-0.08009999990463257 0 0.03680000081658363")

ProtoInstance1202.addFieldValue(fieldValue1205)
fieldValue1206 = x3d.fieldValue()
fieldValue1206.setName("children")
ProtoInstance1207 = x3d.ProtoInstance()
ProtoInstance1207.setName("Segment")
ProtoInstance1207.setDEF("hanim_r_middistal")
fieldValue1208 = x3d.fieldValue()
fieldValue1208.setName("name")
fieldValue1208.setValue("r_middistal")

ProtoInstance1207.addFieldValue(fieldValue1208)
fieldValue1209 = x3d.fieldValue()
fieldValue1209.setName("children")
ProtoInstance1210 = x3d.ProtoInstance()
ProtoInstance1210.setName("Site")
ProtoInstance1210.setDEF("hanim_r_middistal_tip")
fieldValue1211 = x3d.fieldValue()
fieldValue1211.setName("name")
fieldValue1211.setValue("r_middistal_tip")

ProtoInstance1210.addFieldValue(fieldValue1211)
fieldValue1212 = x3d.fieldValue()
fieldValue1212.setName("translation")
fieldValue1212.setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")

ProtoInstance1210.addFieldValue(fieldValue1212)

fieldValue1209.addChildren(ProtoInstance1210)
ProtoInstance1213 = x3d.ProtoInstance()
ProtoInstance1213.setName("Site")
ProtoInstance1213.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue1214 = x3d.fieldValue()
fieldValue1214.setName("name")
fieldValue1214.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance1213.addFieldValue(fieldValue1214)
fieldValue1215 = x3d.fieldValue()
fieldValue1215.setName("translation")
fieldValue1215.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance1213.addFieldValue(fieldValue1215)

fieldValue1209.addChildren(ProtoInstance1213)
ProtoInstance1216 = x3d.ProtoInstance()
ProtoInstance1216.setName("Site")
ProtoInstance1216.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue1217 = x3d.fieldValue()
fieldValue1217.setName("name")
fieldValue1217.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance1216.addFieldValue(fieldValue1217)
fieldValue1218 = x3d.fieldValue()
fieldValue1218.setName("translation")
fieldValue1218.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance1216.addFieldValue(fieldValue1218)

fieldValue1209.addChildren(ProtoInstance1216)
ProtoInstance1219 = x3d.ProtoInstance()
ProtoInstance1219.setName("Site")
ProtoInstance1219.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue1220 = x3d.fieldValue()
fieldValue1220.setName("name")
fieldValue1220.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance1219.addFieldValue(fieldValue1220)
fieldValue1221 = x3d.fieldValue()
fieldValue1221.setName("translation")
fieldValue1221.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance1219.addFieldValue(fieldValue1221)

fieldValue1209.addChildren(ProtoInstance1219)

ProtoInstance1207.addFieldValue(fieldValue1209)

fieldValue1206.addChildren(ProtoInstance1207)

ProtoInstance1202.addFieldValue(fieldValue1206)

fieldValue1201.addChildren(ProtoInstance1202)
ProtoInstance1222 = x3d.ProtoInstance()
ProtoInstance1222.setName("Segment")
ProtoInstance1222.setDEF("hanim_r_hindfoot")
fieldValue1223 = x3d.fieldValue()
fieldValue1223.setName("name")
fieldValue1223.setValue("r_hindfoot")

ProtoInstance1222.addFieldValue(fieldValue1223)
fieldValue1224 = x3d.fieldValue()
fieldValue1224.setName("children")
ProtoInstance1225 = x3d.ProtoInstance()
ProtoInstance1225.setName("Site")
ProtoInstance1225.setDEF("hanim_r_lateral_malleolus")
fieldValue1226 = x3d.fieldValue()
fieldValue1226.setName("name")
fieldValue1226.setValue("r_lateral_malleolus")

ProtoInstance1225.addFieldValue(fieldValue1226)
fieldValue1227 = x3d.fieldValue()
fieldValue1227.setName("translation")
fieldValue1227.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance1225.addFieldValue(fieldValue1227)

fieldValue1224.addChildren(ProtoInstance1225)
ProtoInstance1228 = x3d.ProtoInstance()
ProtoInstance1228.setName("Site")
ProtoInstance1228.setDEF("hanim_r_medial_malleolus")
fieldValue1229 = x3d.fieldValue()
fieldValue1229.setName("name")
fieldValue1229.setValue("r_medial_malleolus")

ProtoInstance1228.addFieldValue(fieldValue1229)
fieldValue1230 = x3d.fieldValue()
fieldValue1230.setName("translation")
fieldValue1230.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance1228.addFieldValue(fieldValue1230)

fieldValue1224.addChildren(ProtoInstance1228)
ProtoInstance1231 = x3d.ProtoInstance()
ProtoInstance1231.setName("Site")
ProtoInstance1231.setDEF("hanim_r_sphyrion")
fieldValue1232 = x3d.fieldValue()
fieldValue1232.setName("name")
fieldValue1232.setValue("r_sphyrion")

ProtoInstance1231.addFieldValue(fieldValue1232)
fieldValue1233 = x3d.fieldValue()
fieldValue1233.setName("translation")
fieldValue1233.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance1231.addFieldValue(fieldValue1233)

fieldValue1224.addChildren(ProtoInstance1231)
ProtoInstance1234 = x3d.ProtoInstance()
ProtoInstance1234.setName("Site")
ProtoInstance1234.setDEF("hanim_r_calcaneus_posterior")
fieldValue1235 = x3d.fieldValue()
fieldValue1235.setName("name")
fieldValue1235.setValue("r_calcaneus_posterior")

ProtoInstance1234.addFieldValue(fieldValue1235)
fieldValue1236 = x3d.fieldValue()
fieldValue1236.setName("translation")
fieldValue1236.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance1234.addFieldValue(fieldValue1236)

fieldValue1224.addChildren(ProtoInstance1234)

ProtoInstance1222.addFieldValue(fieldValue1224)

fieldValue1201.addChildren(ProtoInstance1222)

ProtoInstance1197.addFieldValue(fieldValue1201)

fieldValue1196.addChildren(ProtoInstance1197)
ProtoInstance1237 = x3d.ProtoInstance()
ProtoInstance1237.setName("Segment")
ProtoInstance1237.setDEF("hanim_r_calf")
fieldValue1238 = x3d.fieldValue()
fieldValue1238.setName("name")
fieldValue1238.setValue("r_calf")

ProtoInstance1237.addFieldValue(fieldValue1238)

fieldValue1196.addChildren(ProtoInstance1237)

ProtoInstance1192.addFieldValue(fieldValue1196)

fieldValue1191.addChildren(ProtoInstance1192)
ProtoInstance1239 = x3d.ProtoInstance()
ProtoInstance1239.setName("Segment")
ProtoInstance1239.setDEF("hanim_r_thigh")
fieldValue1240 = x3d.fieldValue()
fieldValue1240.setName("name")
fieldValue1240.setValue("r_thigh")

ProtoInstance1239.addFieldValue(fieldValue1240)
fieldValue1241 = x3d.fieldValue()
fieldValue1241.setName("children")
ProtoInstance1242 = x3d.ProtoInstance()
ProtoInstance1242.setName("Site")
ProtoInstance1242.setDEF("hanim_r_knee_crease")
fieldValue1243 = x3d.fieldValue()
fieldValue1243.setName("name")
fieldValue1243.setValue("r_knee_crease")

ProtoInstance1242.addFieldValue(fieldValue1243)
fieldValue1244 = x3d.fieldValue()
fieldValue1244.setName("translation")
fieldValue1244.setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")

ProtoInstance1242.addFieldValue(fieldValue1244)

fieldValue1241.addChildren(ProtoInstance1242)
ProtoInstance1245 = x3d.ProtoInstance()
ProtoInstance1245.setName("Site")
ProtoInstance1245.setDEF("hanim_r_femoral_lateral_epicondyles")
fieldValue1246 = x3d.fieldValue()
fieldValue1246.setName("name")
fieldValue1246.setValue("r_femoral_lateral_epicondyles")

ProtoInstance1245.addFieldValue(fieldValue1246)
fieldValue1247 = x3d.fieldValue()
fieldValue1247.setName("translation")
fieldValue1247.setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052")

ProtoInstance1245.addFieldValue(fieldValue1247)

fieldValue1241.addChildren(ProtoInstance1245)
ProtoInstance1248 = x3d.ProtoInstance()
ProtoInstance1248.setName("Site")
ProtoInstance1248.setDEF("hanim_r_femoral_medial_epicondyles")
fieldValue1249 = x3d.fieldValue()
fieldValue1249.setName("name")
fieldValue1249.setValue("r_femoral_lateral_epicondyles")

ProtoInstance1248.addFieldValue(fieldValue1249)
fieldValue1250 = x3d.fieldValue()
fieldValue1250.setName("translation")
fieldValue1250.setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821")

ProtoInstance1248.addFieldValue(fieldValue1250)

fieldValue1241.addChildren(ProtoInstance1248)

ProtoInstance1239.addFieldValue(fieldValue1241)

fieldValue1191.addChildren(ProtoInstance1239)

ProtoInstance1187.addFieldValue(fieldValue1191)

fieldValue496.addChildren(ProtoInstance1187)
ProtoInstance1251 = x3d.ProtoInstance()
ProtoInstance1251.setName("Joint")
ProtoInstance1251.setDEF("hanim_r_knee")
fieldValue1252 = x3d.fieldValue()
fieldValue1252.setName("stiffness")
fieldValue1252.setValue("1 1 1")

ProtoInstance1251.addFieldValue(fieldValue1252)
fieldValue1253 = x3d.fieldValue()
fieldValue1253.setName("name")
fieldValue1253.setValue("r_knee")

ProtoInstance1251.addFieldValue(fieldValue1253)
fieldValue1254 = x3d.fieldValue()
fieldValue1254.setName("center")
fieldValue1254.setValue("-0.08669999986886978 0.49129998683929443 0.03180000185966492")

ProtoInstance1251.addFieldValue(fieldValue1254)
fieldValue1255 = x3d.fieldValue()
fieldValue1255.setName("children")
ProtoInstance1256 = x3d.ProtoInstance()
ProtoInstance1256.setName("Joint")
ProtoInstance1256.setDEF("hanim_r_talocrural")
fieldValue1257 = x3d.fieldValue()
fieldValue1257.setName("stiffness")
fieldValue1257.setValue("1 1 1")

ProtoInstance1256.addFieldValue(fieldValue1257)
fieldValue1258 = x3d.fieldValue()
fieldValue1258.setName("name")
fieldValue1258.setValue("r_talocrural")

ProtoInstance1256.addFieldValue(fieldValue1258)
fieldValue1259 = x3d.fieldValue()
fieldValue1259.setName("center")
fieldValue1259.setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044")

ProtoInstance1256.addFieldValue(fieldValue1259)
fieldValue1260 = x3d.fieldValue()
fieldValue1260.setName("children")
ProtoInstance1261 = x3d.ProtoInstance()
ProtoInstance1261.setName("Joint")
ProtoInstance1261.setDEF("hanim_r_metatarsophalangeal_")
fieldValue1262 = x3d.fieldValue()
fieldValue1262.setName("stiffness")
fieldValue1262.setValue("1 1 1")

ProtoInstance1261.addFieldValue(fieldValue1262)
fieldValue1263 = x3d.fieldValue()
fieldValue1263.setName("name")
fieldValue1263.setValue("r_metatarsophalangeal_")

ProtoInstance1261.addFieldValue(fieldValue1263)
fieldValue1264 = x3d.fieldValue()
fieldValue1264.setName("center")
fieldValue1264.setValue("-0.08009999990463257 0 0.03680000081658363")

ProtoInstance1261.addFieldValue(fieldValue1264)
fieldValue1265 = x3d.fieldValue()
fieldValue1265.setName("children")
ProtoInstance1266 = x3d.ProtoInstance()
ProtoInstance1266.setName("Segment")
ProtoInstance1266.setDEF("hanim_r_middistal")
fieldValue1267 = x3d.fieldValue()
fieldValue1267.setName("name")
fieldValue1267.setValue("r_middistal")

ProtoInstance1266.addFieldValue(fieldValue1267)
fieldValue1268 = x3d.fieldValue()
fieldValue1268.setName("children")
ProtoInstance1269 = x3d.ProtoInstance()
ProtoInstance1269.setName("Site")
ProtoInstance1269.setDEF("hanim_r_middistal_tip")
fieldValue1270 = x3d.fieldValue()
fieldValue1270.setName("name")
fieldValue1270.setValue("r_middistal_tip")

ProtoInstance1269.addFieldValue(fieldValue1270)
fieldValue1271 = x3d.fieldValue()
fieldValue1271.setName("translation")
fieldValue1271.setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")

ProtoInstance1269.addFieldValue(fieldValue1271)

fieldValue1268.addChildren(ProtoInstance1269)
ProtoInstance1272 = x3d.ProtoInstance()
ProtoInstance1272.setName("Site")
ProtoInstance1272.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue1273 = x3d.fieldValue()
fieldValue1273.setName("name")
fieldValue1273.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance1272.addFieldValue(fieldValue1273)
fieldValue1274 = x3d.fieldValue()
fieldValue1274.setName("translation")
fieldValue1274.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance1272.addFieldValue(fieldValue1274)

fieldValue1268.addChildren(ProtoInstance1272)
ProtoInstance1275 = x3d.ProtoInstance()
ProtoInstance1275.setName("Site")
ProtoInstance1275.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue1276 = x3d.fieldValue()
fieldValue1276.setName("name")
fieldValue1276.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance1275.addFieldValue(fieldValue1276)
fieldValue1277 = x3d.fieldValue()
fieldValue1277.setName("translation")
fieldValue1277.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance1275.addFieldValue(fieldValue1277)

fieldValue1268.addChildren(ProtoInstance1275)
ProtoInstance1278 = x3d.ProtoInstance()
ProtoInstance1278.setName("Site")
ProtoInstance1278.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue1279 = x3d.fieldValue()
fieldValue1279.setName("name")
fieldValue1279.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance1278.addFieldValue(fieldValue1279)
fieldValue1280 = x3d.fieldValue()
fieldValue1280.setName("translation")
fieldValue1280.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance1278.addFieldValue(fieldValue1280)

fieldValue1268.addChildren(ProtoInstance1278)

ProtoInstance1266.addFieldValue(fieldValue1268)

fieldValue1265.addChildren(ProtoInstance1266)

ProtoInstance1261.addFieldValue(fieldValue1265)

fieldValue1260.addChildren(ProtoInstance1261)
ProtoInstance1281 = x3d.ProtoInstance()
ProtoInstance1281.setName("Segment")
ProtoInstance1281.setDEF("hanim_r_hindfoot")
fieldValue1282 = x3d.fieldValue()
fieldValue1282.setName("name")
fieldValue1282.setValue("r_hindfoot")

ProtoInstance1281.addFieldValue(fieldValue1282)
fieldValue1283 = x3d.fieldValue()
fieldValue1283.setName("children")
ProtoInstance1284 = x3d.ProtoInstance()
ProtoInstance1284.setName("Site")
ProtoInstance1284.setDEF("hanim_r_lateral_malleolus")
fieldValue1285 = x3d.fieldValue()
fieldValue1285.setName("name")
fieldValue1285.setValue("r_lateral_malleolus")

ProtoInstance1284.addFieldValue(fieldValue1285)
fieldValue1286 = x3d.fieldValue()
fieldValue1286.setName("translation")
fieldValue1286.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance1284.addFieldValue(fieldValue1286)

fieldValue1283.addChildren(ProtoInstance1284)
ProtoInstance1287 = x3d.ProtoInstance()
ProtoInstance1287.setName("Site")
ProtoInstance1287.setDEF("hanim_r_medial_malleolus")
fieldValue1288 = x3d.fieldValue()
fieldValue1288.setName("name")
fieldValue1288.setValue("r_medial_malleolus")

ProtoInstance1287.addFieldValue(fieldValue1288)
fieldValue1289 = x3d.fieldValue()
fieldValue1289.setName("translation")
fieldValue1289.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance1287.addFieldValue(fieldValue1289)

fieldValue1283.addChildren(ProtoInstance1287)
ProtoInstance1290 = x3d.ProtoInstance()
ProtoInstance1290.setName("Site")
ProtoInstance1290.setDEF("hanim_r_sphyrion")
fieldValue1291 = x3d.fieldValue()
fieldValue1291.setName("name")
fieldValue1291.setValue("r_sphyrion")

ProtoInstance1290.addFieldValue(fieldValue1291)
fieldValue1292 = x3d.fieldValue()
fieldValue1292.setName("translation")
fieldValue1292.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance1290.addFieldValue(fieldValue1292)

fieldValue1283.addChildren(ProtoInstance1290)
ProtoInstance1293 = x3d.ProtoInstance()
ProtoInstance1293.setName("Site")
ProtoInstance1293.setDEF("hanim_r_calcaneus_posterior")
fieldValue1294 = x3d.fieldValue()
fieldValue1294.setName("name")
fieldValue1294.setValue("r_calcaneus_posterior")

ProtoInstance1293.addFieldValue(fieldValue1294)
fieldValue1295 = x3d.fieldValue()
fieldValue1295.setName("translation")
fieldValue1295.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance1293.addFieldValue(fieldValue1295)

fieldValue1283.addChildren(ProtoInstance1293)

ProtoInstance1281.addFieldValue(fieldValue1283)

fieldValue1260.addChildren(ProtoInstance1281)

ProtoInstance1256.addFieldValue(fieldValue1260)

fieldValue1255.addChildren(ProtoInstance1256)
ProtoInstance1296 = x3d.ProtoInstance()
ProtoInstance1296.setName("Segment")
ProtoInstance1296.setDEF("hanim_r_calf")
fieldValue1297 = x3d.fieldValue()
fieldValue1297.setName("name")
fieldValue1297.setValue("r_calf")

ProtoInstance1296.addFieldValue(fieldValue1297)

fieldValue1255.addChildren(ProtoInstance1296)

ProtoInstance1251.addFieldValue(fieldValue1255)

fieldValue496.addChildren(ProtoInstance1251)
ProtoInstance1298 = x3d.ProtoInstance()
ProtoInstance1298.setName("Joint")
ProtoInstance1298.setDEF("hanim_r_talocrural")
fieldValue1299 = x3d.fieldValue()
fieldValue1299.setName("stiffness")
fieldValue1299.setValue("1 1 1")

ProtoInstance1298.addFieldValue(fieldValue1299)
fieldValue1300 = x3d.fieldValue()
fieldValue1300.setName("name")
fieldValue1300.setValue("r_talocrural")

ProtoInstance1298.addFieldValue(fieldValue1300)
fieldValue1301 = x3d.fieldValue()
fieldValue1301.setName("center")
fieldValue1301.setValue("-0.08009999990463257 0.07119999825954437 -0.07660000026226044")

ProtoInstance1298.addFieldValue(fieldValue1301)
fieldValue1302 = x3d.fieldValue()
fieldValue1302.setName("children")
ProtoInstance1303 = x3d.ProtoInstance()
ProtoInstance1303.setName("Joint")
ProtoInstance1303.setDEF("hanim_r_metatarsophalangeal_")
fieldValue1304 = x3d.fieldValue()
fieldValue1304.setName("stiffness")
fieldValue1304.setValue("1 1 1")

ProtoInstance1303.addFieldValue(fieldValue1304)
fieldValue1305 = x3d.fieldValue()
fieldValue1305.setName("name")
fieldValue1305.setValue("r_metatarsophalangeal_")

ProtoInstance1303.addFieldValue(fieldValue1305)
fieldValue1306 = x3d.fieldValue()
fieldValue1306.setName("center")
fieldValue1306.setValue("-0.08009999990463257 0 0.03680000081658363")

ProtoInstance1303.addFieldValue(fieldValue1306)
fieldValue1307 = x3d.fieldValue()
fieldValue1307.setName("children")
ProtoInstance1308 = x3d.ProtoInstance()
ProtoInstance1308.setName("Segment")
ProtoInstance1308.setDEF("hanim_r_middistal")
fieldValue1309 = x3d.fieldValue()
fieldValue1309.setName("name")
fieldValue1309.setValue("r_middistal")

ProtoInstance1308.addFieldValue(fieldValue1309)
fieldValue1310 = x3d.fieldValue()
fieldValue1310.setName("children")
ProtoInstance1311 = x3d.ProtoInstance()
ProtoInstance1311.setName("Site")
ProtoInstance1311.setDEF("hanim_r_middistal_tip")
fieldValue1312 = x3d.fieldValue()
fieldValue1312.setName("name")
fieldValue1312.setValue("r_middistal_tip")

ProtoInstance1311.addFieldValue(fieldValue1312)
fieldValue1313 = x3d.fieldValue()
fieldValue1313.setName("translation")
fieldValue1313.setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")

ProtoInstance1311.addFieldValue(fieldValue1313)

fieldValue1310.addChildren(ProtoInstance1311)
ProtoInstance1314 = x3d.ProtoInstance()
ProtoInstance1314.setName("Site")
ProtoInstance1314.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue1315 = x3d.fieldValue()
fieldValue1315.setName("name")
fieldValue1315.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance1314.addFieldValue(fieldValue1315)
fieldValue1316 = x3d.fieldValue()
fieldValue1316.setName("translation")
fieldValue1316.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance1314.addFieldValue(fieldValue1316)

fieldValue1310.addChildren(ProtoInstance1314)
ProtoInstance1317 = x3d.ProtoInstance()
ProtoInstance1317.setName("Site")
ProtoInstance1317.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue1318 = x3d.fieldValue()
fieldValue1318.setName("name")
fieldValue1318.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance1317.addFieldValue(fieldValue1318)
fieldValue1319 = x3d.fieldValue()
fieldValue1319.setName("translation")
fieldValue1319.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance1317.addFieldValue(fieldValue1319)

fieldValue1310.addChildren(ProtoInstance1317)
ProtoInstance1320 = x3d.ProtoInstance()
ProtoInstance1320.setName("Site")
ProtoInstance1320.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue1321 = x3d.fieldValue()
fieldValue1321.setName("name")
fieldValue1321.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance1320.addFieldValue(fieldValue1321)
fieldValue1322 = x3d.fieldValue()
fieldValue1322.setName("translation")
fieldValue1322.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance1320.addFieldValue(fieldValue1322)

fieldValue1310.addChildren(ProtoInstance1320)

ProtoInstance1308.addFieldValue(fieldValue1310)

fieldValue1307.addChildren(ProtoInstance1308)

ProtoInstance1303.addFieldValue(fieldValue1307)

fieldValue1302.addChildren(ProtoInstance1303)
ProtoInstance1323 = x3d.ProtoInstance()
ProtoInstance1323.setName("Segment")
ProtoInstance1323.setDEF("hanim_r_hindfoot")
fieldValue1324 = x3d.fieldValue()
fieldValue1324.setName("name")
fieldValue1324.setValue("r_hindfoot")

ProtoInstance1323.addFieldValue(fieldValue1324)
fieldValue1325 = x3d.fieldValue()
fieldValue1325.setName("children")
ProtoInstance1326 = x3d.ProtoInstance()
ProtoInstance1326.setName("Site")
ProtoInstance1326.setDEF("hanim_r_lateral_malleolus")
fieldValue1327 = x3d.fieldValue()
fieldValue1327.setName("name")
fieldValue1327.setValue("r_lateral_malleolus")

ProtoInstance1326.addFieldValue(fieldValue1327)
fieldValue1328 = x3d.fieldValue()
fieldValue1328.setName("translation")
fieldValue1328.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance1326.addFieldValue(fieldValue1328)

fieldValue1325.addChildren(ProtoInstance1326)
ProtoInstance1329 = x3d.ProtoInstance()
ProtoInstance1329.setName("Site")
ProtoInstance1329.setDEF("hanim_r_medial_malleolus")
fieldValue1330 = x3d.fieldValue()
fieldValue1330.setName("name")
fieldValue1330.setValue("r_medial_malleolus")

ProtoInstance1329.addFieldValue(fieldValue1330)
fieldValue1331 = x3d.fieldValue()
fieldValue1331.setName("translation")
fieldValue1331.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance1329.addFieldValue(fieldValue1331)

fieldValue1325.addChildren(ProtoInstance1329)
ProtoInstance1332 = x3d.ProtoInstance()
ProtoInstance1332.setName("Site")
ProtoInstance1332.setDEF("hanim_r_sphyrion")
fieldValue1333 = x3d.fieldValue()
fieldValue1333.setName("name")
fieldValue1333.setValue("r_sphyrion")

ProtoInstance1332.addFieldValue(fieldValue1333)
fieldValue1334 = x3d.fieldValue()
fieldValue1334.setName("translation")
fieldValue1334.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance1332.addFieldValue(fieldValue1334)

fieldValue1325.addChildren(ProtoInstance1332)
ProtoInstance1335 = x3d.ProtoInstance()
ProtoInstance1335.setName("Site")
ProtoInstance1335.setDEF("hanim_r_calcaneus_posterior")
fieldValue1336 = x3d.fieldValue()
fieldValue1336.setName("name")
fieldValue1336.setValue("r_calcaneus_posterior")

ProtoInstance1335.addFieldValue(fieldValue1336)
fieldValue1337 = x3d.fieldValue()
fieldValue1337.setName("translation")
fieldValue1337.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance1335.addFieldValue(fieldValue1337)

fieldValue1325.addChildren(ProtoInstance1335)

ProtoInstance1323.addFieldValue(fieldValue1325)

fieldValue1302.addChildren(ProtoInstance1323)

ProtoInstance1298.addFieldValue(fieldValue1302)

fieldValue496.addChildren(ProtoInstance1298)
ProtoInstance1338 = x3d.ProtoInstance()
ProtoInstance1338.setName("Joint")
ProtoInstance1338.setDEF("hanim_r_metatarsophalangeal_")
fieldValue1339 = x3d.fieldValue()
fieldValue1339.setName("stiffness")
fieldValue1339.setValue("1 1 1")

ProtoInstance1338.addFieldValue(fieldValue1339)
fieldValue1340 = x3d.fieldValue()
fieldValue1340.setName("name")
fieldValue1340.setValue("r_metatarsophalangeal_")

ProtoInstance1338.addFieldValue(fieldValue1340)
fieldValue1341 = x3d.fieldValue()
fieldValue1341.setName("center")
fieldValue1341.setValue("-0.08009999990463257 0 0.03680000081658363")

ProtoInstance1338.addFieldValue(fieldValue1341)
fieldValue1342 = x3d.fieldValue()
fieldValue1342.setName("children")
ProtoInstance1343 = x3d.ProtoInstance()
ProtoInstance1343.setName("Segment")
ProtoInstance1343.setDEF("hanim_r_middistal")
fieldValue1344 = x3d.fieldValue()
fieldValue1344.setName("name")
fieldValue1344.setValue("r_middistal")

ProtoInstance1343.addFieldValue(fieldValue1344)
fieldValue1345 = x3d.fieldValue()
fieldValue1345.setName("children")
ProtoInstance1346 = x3d.ProtoInstance()
ProtoInstance1346.setName("Site")
ProtoInstance1346.setDEF("hanim_r_middistal_tip")
fieldValue1347 = x3d.fieldValue()
fieldValue1347.setName("name")
fieldValue1347.setValue("r_middistal_tip")

ProtoInstance1346.addFieldValue(fieldValue1347)
fieldValue1348 = x3d.fieldValue()
fieldValue1348.setName("translation")
fieldValue1348.setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")

ProtoInstance1346.addFieldValue(fieldValue1348)

fieldValue1345.addChildren(ProtoInstance1346)
ProtoInstance1349 = x3d.ProtoInstance()
ProtoInstance1349.setName("Site")
ProtoInstance1349.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue1350 = x3d.fieldValue()
fieldValue1350.setName("name")
fieldValue1350.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance1349.addFieldValue(fieldValue1350)
fieldValue1351 = x3d.fieldValue()
fieldValue1351.setName("translation")
fieldValue1351.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance1349.addFieldValue(fieldValue1351)

fieldValue1345.addChildren(ProtoInstance1349)
ProtoInstance1352 = x3d.ProtoInstance()
ProtoInstance1352.setName("Site")
ProtoInstance1352.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue1353 = x3d.fieldValue()
fieldValue1353.setName("name")
fieldValue1353.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance1352.addFieldValue(fieldValue1353)
fieldValue1354 = x3d.fieldValue()
fieldValue1354.setName("translation")
fieldValue1354.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance1352.addFieldValue(fieldValue1354)

fieldValue1345.addChildren(ProtoInstance1352)
ProtoInstance1355 = x3d.ProtoInstance()
ProtoInstance1355.setName("Site")
ProtoInstance1355.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue1356 = x3d.fieldValue()
fieldValue1356.setName("name")
fieldValue1356.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance1355.addFieldValue(fieldValue1356)
fieldValue1357 = x3d.fieldValue()
fieldValue1357.setName("translation")
fieldValue1357.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance1355.addFieldValue(fieldValue1357)

fieldValue1345.addChildren(ProtoInstance1355)

ProtoInstance1343.addFieldValue(fieldValue1345)

fieldValue1342.addChildren(ProtoInstance1343)

ProtoInstance1338.addFieldValue(fieldValue1342)

fieldValue496.addChildren(ProtoInstance1338)
ProtoInstance1358 = x3d.ProtoInstance()
ProtoInstance1358.setName("Joint")
ProtoInstance1358.setDEF("hanim_vl5")
fieldValue1359 = x3d.fieldValue()
fieldValue1359.setName("stiffness")
fieldValue1359.setValue("1 1 1")

ProtoInstance1358.addFieldValue(fieldValue1359)
fieldValue1360 = x3d.fieldValue()
fieldValue1360.setName("name")
fieldValue1360.setValue("vl5")

ProtoInstance1358.addFieldValue(fieldValue1360)
fieldValue1361 = x3d.fieldValue()
fieldValue1361.setName("center")
fieldValue1361.setValue("0.00279999990016222 1.0568000078201294 -0.07760000228881836")

ProtoInstance1358.addFieldValue(fieldValue1361)
fieldValue1362 = x3d.fieldValue()
fieldValue1362.setName("children")
ProtoInstance1363 = x3d.ProtoInstance()
ProtoInstance1363.setName("Joint")
ProtoInstance1363.setDEF("hanim_skullbase")
fieldValue1364 = x3d.fieldValue()
fieldValue1364.setName("stiffness")
fieldValue1364.setValue("1 1 1")

ProtoInstance1363.addFieldValue(fieldValue1364)
fieldValue1365 = x3d.fieldValue()
fieldValue1365.setName("name")
fieldValue1365.setValue("skullbase")

ProtoInstance1363.addFieldValue(fieldValue1365)
fieldValue1366 = x3d.fieldValue()
fieldValue1366.setName("center")
fieldValue1366.setValue("0.004399999976158142 1.62090003490448 0.023600000888109207")

ProtoInstance1363.addFieldValue(fieldValue1366)
fieldValue1367 = x3d.fieldValue()
fieldValue1367.setName("children")
ProtoInstance1368 = x3d.ProtoInstance()
ProtoInstance1368.setName("Segment")
ProtoInstance1368.setDEF("hanim_skull")
fieldValue1369 = x3d.fieldValue()
fieldValue1369.setName("name")
fieldValue1369.setValue("skull")

ProtoInstance1368.addFieldValue(fieldValue1369)
fieldValue1370 = x3d.fieldValue()
fieldValue1370.setName("children")
ProtoInstance1371 = x3d.ProtoInstance()
ProtoInstance1371.setName("Site")
ProtoInstance1371.setDEF("hanim_skull_tip")
fieldValue1372 = x3d.fieldValue()
fieldValue1372.setName("name")
fieldValue1372.setValue("skull_tip")

ProtoInstance1371.addFieldValue(fieldValue1372)
fieldValue1373 = x3d.fieldValue()
fieldValue1373.setName("translation")
fieldValue1373.setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678")

ProtoInstance1371.addFieldValue(fieldValue1373)

fieldValue1370.addChildren(ProtoInstance1371)
ProtoInstance1374 = x3d.ProtoInstance()
ProtoInstance1374.setName("Site")
ProtoInstance1374.setDEF("hanim_sellion")
fieldValue1375 = x3d.fieldValue()
fieldValue1375.setName("name")
fieldValue1375.setValue("sellion")

ProtoInstance1374.addFieldValue(fieldValue1375)
fieldValue1376 = x3d.fieldValue()
fieldValue1376.setName("translation")
fieldValue1376.setValue("0.005799999926239252 1.631600022315979 0.0851999968290329")

ProtoInstance1374.addFieldValue(fieldValue1376)

fieldValue1370.addChildren(ProtoInstance1374)
ProtoInstance1377 = x3d.ProtoInstance()
ProtoInstance1377.setName("Site")
ProtoInstance1377.setDEF("hanim_r_infraorbitale")
fieldValue1378 = x3d.fieldValue()
fieldValue1378.setName("name")
fieldValue1378.setValue("r_infraorbitale")

ProtoInstance1377.addFieldValue(fieldValue1378)
fieldValue1379 = x3d.fieldValue()
fieldValue1379.setName("translation")
fieldValue1379.setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547")

ProtoInstance1377.addFieldValue(fieldValue1379)

fieldValue1370.addChildren(ProtoInstance1377)
ProtoInstance1380 = x3d.ProtoInstance()
ProtoInstance1380.setName("Site")
ProtoInstance1380.setDEF("hanim_l_infraorbitale")
fieldValue1381 = x3d.fieldValue()
fieldValue1381.setName("name")
fieldValue1381.setValue("l_infraorbitale")

ProtoInstance1380.addFieldValue(fieldValue1381)
fieldValue1382 = x3d.fieldValue()
fieldValue1382.setName("translation")
fieldValue1382.setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547")

ProtoInstance1380.addFieldValue(fieldValue1382)

fieldValue1370.addChildren(ProtoInstance1380)
ProtoInstance1383 = x3d.ProtoInstance()
ProtoInstance1383.setName("Site")
ProtoInstance1383.setDEF("hanim_supramenton")
fieldValue1384 = x3d.fieldValue()
fieldValue1384.setName("name")
fieldValue1384.setValue("supramenton")

ProtoInstance1383.addFieldValue(fieldValue1384)
fieldValue1385 = x3d.fieldValue()
fieldValue1385.setName("translation")
fieldValue1385.setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962")

ProtoInstance1383.addFieldValue(fieldValue1385)

fieldValue1370.addChildren(ProtoInstance1383)
ProtoInstance1386 = x3d.ProtoInstance()
ProtoInstance1386.setName("Site")
ProtoInstance1386.setDEF("hanim_r_tragion")
fieldValue1387 = x3d.fieldValue()
fieldValue1387.setName("name")
fieldValue1387.setValue("r_tragion")

ProtoInstance1386.addFieldValue(fieldValue1387)
fieldValue1388 = x3d.fieldValue()
fieldValue1388.setName("translation")
fieldValue1388.setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642")

ProtoInstance1386.addFieldValue(fieldValue1388)

fieldValue1370.addChildren(ProtoInstance1386)
ProtoInstance1389 = x3d.ProtoInstance()
ProtoInstance1389.setName("Site")
ProtoInstance1389.setDEF("hanim_r_gonion")
fieldValue1390 = x3d.fieldValue()
fieldValue1390.setName("name")
fieldValue1390.setValue("r_gonion")

ProtoInstance1389.addFieldValue(fieldValue1390)
fieldValue1391 = x3d.fieldValue()
fieldValue1391.setName("translation")
fieldValue1391.setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176")

ProtoInstance1389.addFieldValue(fieldValue1391)

fieldValue1370.addChildren(ProtoInstance1389)
ProtoInstance1392 = x3d.ProtoInstance()
ProtoInstance1392.setName("Site")
ProtoInstance1392.setDEF("hanim_l_tragion")
fieldValue1393 = x3d.fieldValue()
fieldValue1393.setName("name")
fieldValue1393.setValue("l_tragion")

ProtoInstance1392.addFieldValue(fieldValue1393)
fieldValue1394 = x3d.fieldValue()
fieldValue1394.setName("translation")
fieldValue1394.setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874")

ProtoInstance1392.addFieldValue(fieldValue1394)

fieldValue1370.addChildren(ProtoInstance1392)
ProtoInstance1395 = x3d.ProtoInstance()
ProtoInstance1395.setName("Site")
ProtoInstance1395.setDEF("hanim_l_gonion")
fieldValue1396 = x3d.fieldValue()
fieldValue1396.setName("name")
fieldValue1396.setValue("l_gonion")

ProtoInstance1395.addFieldValue(fieldValue1396)
fieldValue1397 = x3d.fieldValue()
fieldValue1397.setName("translation")
fieldValue1397.setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066")

ProtoInstance1395.addFieldValue(fieldValue1397)

fieldValue1370.addChildren(ProtoInstance1395)
ProtoInstance1398 = x3d.ProtoInstance()
ProtoInstance1398.setName("Site")
ProtoInstance1398.setDEF("hanim_nuchale")
fieldValue1399 = x3d.fieldValue()
fieldValue1399.setName("name")
fieldValue1399.setValue("nuchale")

ProtoInstance1398.addFieldValue(fieldValue1399)
fieldValue1400 = x3d.fieldValue()
fieldValue1400.setName("translation")
fieldValue1400.setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")

ProtoInstance1398.addFieldValue(fieldValue1400)

fieldValue1370.addChildren(ProtoInstance1398)

ProtoInstance1368.addFieldValue(fieldValue1370)

fieldValue1367.addChildren(ProtoInstance1368)

ProtoInstance1363.addFieldValue(fieldValue1367)

fieldValue1362.addChildren(ProtoInstance1363)
ProtoInstance1401 = x3d.ProtoInstance()
ProtoInstance1401.setName("Joint")
ProtoInstance1401.setDEF("hanim_l_shoulder")
fieldValue1402 = x3d.fieldValue()
fieldValue1402.setName("stiffness")
fieldValue1402.setValue("1 1 1")

ProtoInstance1401.addFieldValue(fieldValue1402)
fieldValue1403 = x3d.fieldValue()
fieldValue1403.setName("name")
fieldValue1403.setValue("l_shoulder")

ProtoInstance1401.addFieldValue(fieldValue1403)
fieldValue1404 = x3d.fieldValue()
fieldValue1404.setName("center")
fieldValue1404.setValue("0.2029000073671341 1.437600016593933 -0.03869999945163727")

ProtoInstance1401.addFieldValue(fieldValue1404)
fieldValue1405 = x3d.fieldValue()
fieldValue1405.setName("children")
ProtoInstance1406 = x3d.ProtoInstance()
ProtoInstance1406.setName("Joint")
ProtoInstance1406.setDEF("hanim_l_elbow")
fieldValue1407 = x3d.fieldValue()
fieldValue1407.setName("stiffness")
fieldValue1407.setValue("1 1 1")

ProtoInstance1406.addFieldValue(fieldValue1407)
fieldValue1408 = x3d.fieldValue()
fieldValue1408.setName("name")
fieldValue1408.setValue("l_elbow")

ProtoInstance1406.addFieldValue(fieldValue1408)
fieldValue1409 = x3d.fieldValue()
fieldValue1409.setName("center")
fieldValue1409.setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512")

ProtoInstance1406.addFieldValue(fieldValue1409)
fieldValue1410 = x3d.fieldValue()
fieldValue1410.setName("children")
ProtoInstance1411 = x3d.ProtoInstance()
ProtoInstance1411.setName("Joint")
ProtoInstance1411.setDEF("hanim_l_radiocarpal")
fieldValue1412 = x3d.fieldValue()
fieldValue1412.setName("stiffness")
fieldValue1412.setValue("1 1 1")

ProtoInstance1411.addFieldValue(fieldValue1412)
fieldValue1413 = x3d.fieldValue()
fieldValue1413.setName("name")
fieldValue1413.setValue("l_radiocarpal")

ProtoInstance1411.addFieldValue(fieldValue1413)
fieldValue1414 = x3d.fieldValue()
fieldValue1414.setName("center")
fieldValue1414.setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538")

ProtoInstance1411.addFieldValue(fieldValue1414)
fieldValue1415 = x3d.fieldValue()
fieldValue1415.setName("children")
ProtoInstance1416 = x3d.ProtoInstance()
ProtoInstance1416.setName("Segment")
ProtoInstance1416.setDEF("hanim_l_hand")
fieldValue1417 = x3d.fieldValue()
fieldValue1417.setName("name")
fieldValue1417.setValue("l_hand")

ProtoInstance1416.addFieldValue(fieldValue1417)
fieldValue1418 = x3d.fieldValue()
fieldValue1418.setName("children")
ProtoInstance1419 = x3d.ProtoInstance()
ProtoInstance1419.setName("Site")
ProtoInstance1419.setDEF("hanim_l_hand_tip")
fieldValue1420 = x3d.fieldValue()
fieldValue1420.setName("name")
fieldValue1420.setValue("l_hand_tip")

ProtoInstance1419.addFieldValue(fieldValue1420)
fieldValue1421 = x3d.fieldValue()
fieldValue1421.setName("translation")
fieldValue1421.setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205")

ProtoInstance1419.addFieldValue(fieldValue1421)

fieldValue1418.addChildren(ProtoInstance1419)
ProtoInstance1422 = x3d.ProtoInstance()
ProtoInstance1422.setName("Site")
ProtoInstance1422.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue1423 = x3d.fieldValue()
fieldValue1423.setName("name")
fieldValue1423.setValue("l_metacarpal_phalanx_2")

ProtoInstance1422.addFieldValue(fieldValue1423)
fieldValue1424 = x3d.fieldValue()
fieldValue1424.setName("translation")
fieldValue1424.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance1422.addFieldValue(fieldValue1424)

fieldValue1418.addChildren(ProtoInstance1422)
ProtoInstance1425 = x3d.ProtoInstance()
ProtoInstance1425.setName("Site")
ProtoInstance1425.setDEF("hanim_l_dactylion")
fieldValue1426 = x3d.fieldValue()
fieldValue1426.setName("name")
fieldValue1426.setValue("l_dactylion")

ProtoInstance1425.addFieldValue(fieldValue1426)
fieldValue1427 = x3d.fieldValue()
fieldValue1427.setName("translation")
fieldValue1427.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance1425.addFieldValue(fieldValue1427)

fieldValue1418.addChildren(ProtoInstance1425)
ProtoInstance1428 = x3d.ProtoInstance()
ProtoInstance1428.setName("Site")
ProtoInstance1428.setDEF("hanim_l_ulnar_styloid")
fieldValue1429 = x3d.fieldValue()
fieldValue1429.setName("name")
fieldValue1429.setValue("l_ulnar_styloid")

ProtoInstance1428.addFieldValue(fieldValue1429)
fieldValue1430 = x3d.fieldValue()
fieldValue1430.setName("translation")
fieldValue1430.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance1428.addFieldValue(fieldValue1430)

fieldValue1418.addChildren(ProtoInstance1428)
ProtoInstance1431 = x3d.ProtoInstance()
ProtoInstance1431.setName("Site")
ProtoInstance1431.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue1432 = x3d.fieldValue()
fieldValue1432.setName("name")
fieldValue1432.setValue("l_metacarpal_phalanx_5")

ProtoInstance1431.addFieldValue(fieldValue1432)
fieldValue1433 = x3d.fieldValue()
fieldValue1433.setName("translation")
fieldValue1433.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance1431.addFieldValue(fieldValue1433)

fieldValue1418.addChildren(ProtoInstance1431)

ProtoInstance1416.addFieldValue(fieldValue1418)

fieldValue1415.addChildren(ProtoInstance1416)

ProtoInstance1411.addFieldValue(fieldValue1415)

fieldValue1410.addChildren(ProtoInstance1411)
ProtoInstance1434 = x3d.ProtoInstance()
ProtoInstance1434.setName("Segment")
ProtoInstance1434.setDEF("hanim_l_forearm")
fieldValue1435 = x3d.fieldValue()
fieldValue1435.setName("name")
fieldValue1435.setValue("l_forearm")

ProtoInstance1434.addFieldValue(fieldValue1435)
fieldValue1436 = x3d.fieldValue()
fieldValue1436.setName("children")
ProtoInstance1437 = x3d.ProtoInstance()
ProtoInstance1437.setName("Site")
ProtoInstance1437.setDEF("hanim_l_radial_styloid")
fieldValue1438 = x3d.fieldValue()
fieldValue1438.setName("name")
fieldValue1438.setValue("l_radial_styloid")

ProtoInstance1437.addFieldValue(fieldValue1438)
fieldValue1439 = x3d.fieldValue()
fieldValue1439.setName("translation")
fieldValue1439.setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691")

ProtoInstance1437.addFieldValue(fieldValue1439)

fieldValue1436.addChildren(ProtoInstance1437)
ProtoInstance1440 = x3d.ProtoInstance()
ProtoInstance1440.setName("Site")
ProtoInstance1440.setDEF("hanim_l_olecranon")
fieldValue1441 = x3d.fieldValue()
fieldValue1441.setName("name")
fieldValue1441.setValue("l_olecranon")

ProtoInstance1440.addFieldValue(fieldValue1441)
fieldValue1442 = x3d.fieldValue()
fieldValue1442.setName("translation")
fieldValue1442.setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")

ProtoInstance1440.addFieldValue(fieldValue1442)

fieldValue1436.addChildren(ProtoInstance1440)
ProtoInstance1443 = x3d.ProtoInstance()
ProtoInstance1443.setName("Site")
ProtoInstance1443.setDEF("hanim_l_humeral_medial_epicondyles")
fieldValue1444 = x3d.fieldValue()
fieldValue1444.setName("name")
fieldValue1444.setValue("l_humeral_medial_epicondyles")

ProtoInstance1443.addFieldValue(fieldValue1444)
fieldValue1445 = x3d.fieldValue()
fieldValue1445.setName("translation")
fieldValue1445.setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661")

ProtoInstance1443.addFieldValue(fieldValue1445)

fieldValue1436.addChildren(ProtoInstance1443)
ProtoInstance1446 = x3d.ProtoInstance()
ProtoInstance1446.setName("Site")
ProtoInstance1446.setDEF("hanim_l_radiale")
fieldValue1447 = x3d.fieldValue()
fieldValue1447.setName("name")
fieldValue1447.setValue("l_radiale")

ProtoInstance1446.addFieldValue(fieldValue1447)
fieldValue1448 = x3d.fieldValue()
fieldValue1448.setName("translation")
fieldValue1448.setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268")

ProtoInstance1446.addFieldValue(fieldValue1448)

fieldValue1436.addChildren(ProtoInstance1446)

ProtoInstance1434.addFieldValue(fieldValue1436)

fieldValue1410.addChildren(ProtoInstance1434)

ProtoInstance1406.addFieldValue(fieldValue1410)

fieldValue1405.addChildren(ProtoInstance1406)
ProtoInstance1449 = x3d.ProtoInstance()
ProtoInstance1449.setName("Segment")
ProtoInstance1449.setDEF("hanim_l_upperarm")
fieldValue1450 = x3d.fieldValue()
fieldValue1450.setName("name")
fieldValue1450.setValue("l_upperarm")

ProtoInstance1449.addFieldValue(fieldValue1450)
fieldValue1451 = x3d.fieldValue()
fieldValue1451.setName("children")
ProtoInstance1452 = x3d.ProtoInstance()
ProtoInstance1452.setName("Site")
ProtoInstance1452.setDEF("hanim_l_humeral_lateral_epicondyles")
fieldValue1453 = x3d.fieldValue()
fieldValue1453.setName("name")
fieldValue1453.setValue("l_humeral_lateral_epicondyles")

ProtoInstance1452.addFieldValue(fieldValue1453)
fieldValue1454 = x3d.fieldValue()
fieldValue1454.setName("translation")
fieldValue1454.setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355")

ProtoInstance1452.addFieldValue(fieldValue1454)

fieldValue1451.addChildren(ProtoInstance1452)

ProtoInstance1449.addFieldValue(fieldValue1451)

fieldValue1405.addChildren(ProtoInstance1449)

ProtoInstance1401.addFieldValue(fieldValue1405)

fieldValue1362.addChildren(ProtoInstance1401)
ProtoInstance1455 = x3d.ProtoInstance()
ProtoInstance1455.setName("Joint")
ProtoInstance1455.setDEF("hanim_r_shoulder")
fieldValue1456 = x3d.fieldValue()
fieldValue1456.setName("stiffness")
fieldValue1456.setValue("1 1 1")

ProtoInstance1455.addFieldValue(fieldValue1456)
fieldValue1457 = x3d.fieldValue()
fieldValue1457.setName("name")
fieldValue1457.setValue("r_shoulder")

ProtoInstance1455.addFieldValue(fieldValue1457)
fieldValue1458 = x3d.fieldValue()
fieldValue1458.setName("center")
fieldValue1458.setValue("-0.1906999945640564 1.4407000541687012 -0.032499998807907104")

ProtoInstance1455.addFieldValue(fieldValue1458)
fieldValue1459 = x3d.fieldValue()
fieldValue1459.setName("children")
ProtoInstance1460 = x3d.ProtoInstance()
ProtoInstance1460.setName("Joint")
ProtoInstance1460.setDEF("hanim_r_elbow")
fieldValue1461 = x3d.fieldValue()
fieldValue1461.setName("stiffness")
fieldValue1461.setValue("1 1 1")

ProtoInstance1460.addFieldValue(fieldValue1461)
fieldValue1462 = x3d.fieldValue()
fieldValue1462.setName("name")
fieldValue1462.setValue("r_elbow")

ProtoInstance1460.addFieldValue(fieldValue1462)
fieldValue1463 = x3d.fieldValue()
fieldValue1463.setName("center")
fieldValue1463.setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104")

ProtoInstance1460.addFieldValue(fieldValue1463)
fieldValue1464 = x3d.fieldValue()
fieldValue1464.setName("children")
ProtoInstance1465 = x3d.ProtoInstance()
ProtoInstance1465.setName("Joint")
ProtoInstance1465.setDEF("hanim_r_radiocarpal")
fieldValue1466 = x3d.fieldValue()
fieldValue1466.setName("stiffness")
fieldValue1466.setValue("1 1 1")

ProtoInstance1465.addFieldValue(fieldValue1466)
fieldValue1467 = x3d.fieldValue()
fieldValue1467.setName("name")
fieldValue1467.setValue("r_radiocarpal")

ProtoInstance1465.addFieldValue(fieldValue1467)
fieldValue1468 = x3d.fieldValue()
fieldValue1468.setName("center")
fieldValue1468.setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522")

ProtoInstance1465.addFieldValue(fieldValue1468)
fieldValue1469 = x3d.fieldValue()
fieldValue1469.setName("children")
ProtoInstance1470 = x3d.ProtoInstance()
ProtoInstance1470.setName("Segment")
ProtoInstance1470.setDEF("hanim_r_hand")
fieldValue1471 = x3d.fieldValue()
fieldValue1471.setName("name")
fieldValue1471.setValue("r_hand")

ProtoInstance1470.addFieldValue(fieldValue1471)
fieldValue1472 = x3d.fieldValue()
fieldValue1472.setName("children")
ProtoInstance1473 = x3d.ProtoInstance()
ProtoInstance1473.setName("Site")
ProtoInstance1473.setDEF("hanim_r_hand_tip")
fieldValue1474 = x3d.fieldValue()
fieldValue1474.setName("name")
fieldValue1474.setValue("r_hand_tip")

ProtoInstance1473.addFieldValue(fieldValue1474)
fieldValue1475 = x3d.fieldValue()
fieldValue1475.setName("translation")
fieldValue1475.setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")

ProtoInstance1473.addFieldValue(fieldValue1475)

fieldValue1472.addChildren(ProtoInstance1473)
ProtoInstance1476 = x3d.ProtoInstance()
ProtoInstance1476.setName("Site")
ProtoInstance1476.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue1477 = x3d.fieldValue()
fieldValue1477.setName("name")
fieldValue1477.setValue("r_metacarpal_phalanx_2")

ProtoInstance1476.addFieldValue(fieldValue1477)
fieldValue1478 = x3d.fieldValue()
fieldValue1478.setName("translation")
fieldValue1478.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance1476.addFieldValue(fieldValue1478)

fieldValue1472.addChildren(ProtoInstance1476)
ProtoInstance1479 = x3d.ProtoInstance()
ProtoInstance1479.setName("Site")
ProtoInstance1479.setDEF("hanim_r_dactylion")
fieldValue1480 = x3d.fieldValue()
fieldValue1480.setName("name")
fieldValue1480.setValue("r_dactylion")

ProtoInstance1479.addFieldValue(fieldValue1480)
fieldValue1481 = x3d.fieldValue()
fieldValue1481.setName("translation")
fieldValue1481.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance1479.addFieldValue(fieldValue1481)

fieldValue1472.addChildren(ProtoInstance1479)
ProtoInstance1482 = x3d.ProtoInstance()
ProtoInstance1482.setName("Site")
ProtoInstance1482.setDEF("hanim_r_ulnar_styloid")
fieldValue1483 = x3d.fieldValue()
fieldValue1483.setName("name")
fieldValue1483.setValue("r_ulnar_styloid")

ProtoInstance1482.addFieldValue(fieldValue1483)
fieldValue1484 = x3d.fieldValue()
fieldValue1484.setName("translation")
fieldValue1484.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance1482.addFieldValue(fieldValue1484)

fieldValue1472.addChildren(ProtoInstance1482)
ProtoInstance1485 = x3d.ProtoInstance()
ProtoInstance1485.setName("Site")
ProtoInstance1485.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue1486 = x3d.fieldValue()
fieldValue1486.setName("name")
fieldValue1486.setValue("r_metacarpal_phalanx_5")

ProtoInstance1485.addFieldValue(fieldValue1486)
fieldValue1487 = x3d.fieldValue()
fieldValue1487.setName("translation")
fieldValue1487.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance1485.addFieldValue(fieldValue1487)

fieldValue1472.addChildren(ProtoInstance1485)

ProtoInstance1470.addFieldValue(fieldValue1472)

fieldValue1469.addChildren(ProtoInstance1470)

ProtoInstance1465.addFieldValue(fieldValue1469)

fieldValue1464.addChildren(ProtoInstance1465)
ProtoInstance1488 = x3d.ProtoInstance()
ProtoInstance1488.setName("Segment")
ProtoInstance1488.setDEF("hanim_r_forearm")
fieldValue1489 = x3d.fieldValue()
fieldValue1489.setName("name")
fieldValue1489.setValue("r_forearm")

ProtoInstance1488.addFieldValue(fieldValue1489)
fieldValue1490 = x3d.fieldValue()
fieldValue1490.setName("children")
ProtoInstance1491 = x3d.ProtoInstance()
ProtoInstance1491.setName("Site")
ProtoInstance1491.setDEF("hanim_r_radial_styloid")
fieldValue1492 = x3d.fieldValue()
fieldValue1492.setName("name")
fieldValue1492.setValue("r_radial_styloid")

ProtoInstance1491.addFieldValue(fieldValue1492)
fieldValue1493 = x3d.fieldValue()
fieldValue1493.setName("translation")
fieldValue1493.setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236")

ProtoInstance1491.addFieldValue(fieldValue1493)

fieldValue1490.addChildren(ProtoInstance1491)
ProtoInstance1494 = x3d.ProtoInstance()
ProtoInstance1494.setName("Site")
ProtoInstance1494.setDEF("hanim_r_olecranon")
fieldValue1495 = x3d.fieldValue()
fieldValue1495.setName("name")
fieldValue1495.setValue("r_olecranon")

ProtoInstance1494.addFieldValue(fieldValue1495)
fieldValue1496 = x3d.fieldValue()
fieldValue1496.setName("translation")
fieldValue1496.setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")

ProtoInstance1494.addFieldValue(fieldValue1496)

fieldValue1490.addChildren(ProtoInstance1494)
ProtoInstance1497 = x3d.ProtoInstance()
ProtoInstance1497.setName("Site")
ProtoInstance1497.setDEF("hanim_r_humeral_medial_epicondyles")
fieldValue1498 = x3d.fieldValue()
fieldValue1498.setName("name")
fieldValue1498.setValue("r_humeral_medial_epicondyles")

ProtoInstance1497.addFieldValue(fieldValue1498)
fieldValue1499 = x3d.fieldValue()
fieldValue1499.setName("translation")
fieldValue1499.setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")

ProtoInstance1497.addFieldValue(fieldValue1499)

fieldValue1490.addChildren(ProtoInstance1497)
ProtoInstance1500 = x3d.ProtoInstance()
ProtoInstance1500.setName("Site")
ProtoInstance1500.setDEF("hanim_r_radiale")
fieldValue1501 = x3d.fieldValue()
fieldValue1501.setName("name")
fieldValue1501.setValue("r_radiale")

ProtoInstance1500.addFieldValue(fieldValue1501)
fieldValue1502 = x3d.fieldValue()
fieldValue1502.setName("translation")
fieldValue1502.setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")

ProtoInstance1500.addFieldValue(fieldValue1502)

fieldValue1490.addChildren(ProtoInstance1500)

ProtoInstance1488.addFieldValue(fieldValue1490)

fieldValue1464.addChildren(ProtoInstance1488)

ProtoInstance1460.addFieldValue(fieldValue1464)

fieldValue1459.addChildren(ProtoInstance1460)
ProtoInstance1503 = x3d.ProtoInstance()
ProtoInstance1503.setName("Segment")
ProtoInstance1503.setDEF("hanim_r_upperarm")
fieldValue1504 = x3d.fieldValue()
fieldValue1504.setName("name")
fieldValue1504.setValue("r_upperarm")

ProtoInstance1503.addFieldValue(fieldValue1504)
fieldValue1505 = x3d.fieldValue()
fieldValue1505.setName("children")
ProtoInstance1506 = x3d.ProtoInstance()
ProtoInstance1506.setName("Site")
ProtoInstance1506.setDEF("hanim_r_humeral_lateral_epicondyles")
fieldValue1507 = x3d.fieldValue()
fieldValue1507.setName("name")
fieldValue1507.setValue("r_humeral_lateral_epicondyles")

ProtoInstance1506.addFieldValue(fieldValue1507)
fieldValue1508 = x3d.fieldValue()
fieldValue1508.setName("translation")
fieldValue1508.setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")

ProtoInstance1506.addFieldValue(fieldValue1508)

fieldValue1505.addChildren(ProtoInstance1506)

ProtoInstance1503.addFieldValue(fieldValue1505)

fieldValue1459.addChildren(ProtoInstance1503)

ProtoInstance1455.addFieldValue(fieldValue1459)

fieldValue1362.addChildren(ProtoInstance1455)
ProtoInstance1509 = x3d.ProtoInstance()
ProtoInstance1509.setName("Segment")
ProtoInstance1509.setDEF("hanim_l5")
fieldValue1510 = x3d.fieldValue()
fieldValue1510.setName("name")
fieldValue1510.setValue("l5")

ProtoInstance1509.addFieldValue(fieldValue1510)
fieldValue1511 = x3d.fieldValue()
fieldValue1511.setName("children")
ProtoInstance1512 = x3d.ProtoInstance()
ProtoInstance1512.setName("Site")
ProtoInstance1512.setDEF("hanim_r_clavicale")
fieldValue1513 = x3d.fieldValue()
fieldValue1513.setName("name")
fieldValue1513.setValue("r_clavicale")

ProtoInstance1512.addFieldValue(fieldValue1513)
fieldValue1514 = x3d.fieldValue()
fieldValue1514.setName("translation")
fieldValue1514.setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033")

ProtoInstance1512.addFieldValue(fieldValue1514)

fieldValue1511.addChildren(ProtoInstance1512)
ProtoInstance1515 = x3d.ProtoInstance()
ProtoInstance1515.setName("Site")
ProtoInstance1515.setDEF("hanim_suprasternale")
fieldValue1516 = x3d.fieldValue()
fieldValue1516.setName("name")
fieldValue1516.setValue("suprasternale")

ProtoInstance1515.addFieldValue(fieldValue1516)
fieldValue1517 = x3d.fieldValue()
fieldValue1517.setName("translation")
fieldValue1517.setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869")

ProtoInstance1515.addFieldValue(fieldValue1517)

fieldValue1511.addChildren(ProtoInstance1515)
ProtoInstance1518 = x3d.ProtoInstance()
ProtoInstance1518.setName("Site")
ProtoInstance1518.setDEF("hanim_l_clavicale")
fieldValue1519 = x3d.fieldValue()
fieldValue1519.setName("name")
fieldValue1519.setValue("l_clavicale")

ProtoInstance1518.addFieldValue(fieldValue1519)
fieldValue1520 = x3d.fieldValue()
fieldValue1520.setName("translation")
fieldValue1520.setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754")

ProtoInstance1518.addFieldValue(fieldValue1520)

fieldValue1511.addChildren(ProtoInstance1518)
ProtoInstance1521 = x3d.ProtoInstance()
ProtoInstance1521.setName("Site")
ProtoInstance1521.setDEF("hanim_r_thelion")
fieldValue1522 = x3d.fieldValue()
fieldValue1522.setName("name")
fieldValue1522.setValue("r_thelion")

ProtoInstance1521.addFieldValue(fieldValue1522)
fieldValue1523 = x3d.fieldValue()
fieldValue1523.setName("translation")
fieldValue1523.setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911")

ProtoInstance1521.addFieldValue(fieldValue1523)

fieldValue1511.addChildren(ProtoInstance1521)
ProtoInstance1524 = x3d.ProtoInstance()
ProtoInstance1524.setName("Site")
ProtoInstance1524.setDEF("hanim_l_thelion")
fieldValue1525 = x3d.fieldValue()
fieldValue1525.setName("name")
fieldValue1525.setValue("l_thelion")

ProtoInstance1524.addFieldValue(fieldValue1525)
fieldValue1526 = x3d.fieldValue()
fieldValue1526.setName("translation")
fieldValue1526.setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689")

ProtoInstance1524.addFieldValue(fieldValue1526)

fieldValue1511.addChildren(ProtoInstance1524)
ProtoInstance1527 = x3d.ProtoInstance()
ProtoInstance1527.setName("Site")
ProtoInstance1527.setDEF("hanim_substernale")
fieldValue1528 = x3d.fieldValue()
fieldValue1528.setName("name")
fieldValue1528.setValue("substernale")

ProtoInstance1527.addFieldValue(fieldValue1528)
fieldValue1529 = x3d.fieldValue()
fieldValue1529.setName("translation")
fieldValue1529.setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683")

ProtoInstance1527.addFieldValue(fieldValue1529)

fieldValue1511.addChildren(ProtoInstance1527)
ProtoInstance1530 = x3d.ProtoInstance()
ProtoInstance1530.setName("Site")
ProtoInstance1530.setDEF("hanim_r_rib10")
fieldValue1531 = x3d.fieldValue()
fieldValue1531.setName("name")
fieldValue1531.setValue("r_rib10")

ProtoInstance1530.addFieldValue(fieldValue1531)
fieldValue1532 = x3d.fieldValue()
fieldValue1532.setName("translation")
fieldValue1532.setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432")

ProtoInstance1530.addFieldValue(fieldValue1532)

fieldValue1511.addChildren(ProtoInstance1530)
ProtoInstance1533 = x3d.ProtoInstance()
ProtoInstance1533.setName("Site")
ProtoInstance1533.setDEF("hanim_l_rib10")
fieldValue1534 = x3d.fieldValue()
fieldValue1534.setName("name")
fieldValue1534.setValue("l_rib10")

ProtoInstance1533.addFieldValue(fieldValue1534)
fieldValue1535 = x3d.fieldValue()
fieldValue1535.setName("translation")
fieldValue1535.setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202")

ProtoInstance1533.addFieldValue(fieldValue1535)

fieldValue1511.addChildren(ProtoInstance1533)
ProtoInstance1536 = x3d.ProtoInstance()
ProtoInstance1536.setName("Site")
ProtoInstance1536.setDEF("hanim_cervicale")
fieldValue1537 = x3d.fieldValue()
fieldValue1537.setName("name")
fieldValue1537.setValue("cervicale")

ProtoInstance1536.addFieldValue(fieldValue1537)
fieldValue1538 = x3d.fieldValue()
fieldValue1538.setName("translation")
fieldValue1538.setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754")

ProtoInstance1536.addFieldValue(fieldValue1538)

fieldValue1511.addChildren(ProtoInstance1536)
ProtoInstance1539 = x3d.ProtoInstance()
ProtoInstance1539.setName("Site")
ProtoInstance1539.setDEF("hanim_spine_2_lower_back")
fieldValue1540 = x3d.fieldValue()
fieldValue1540.setName("name")
fieldValue1540.setValue("spine_2_lower_back")

ProtoInstance1539.addFieldValue(fieldValue1540)
fieldValue1541 = x3d.fieldValue()
fieldValue1541.setName("translation")
fieldValue1541.setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661")

ProtoInstance1539.addFieldValue(fieldValue1541)

fieldValue1511.addChildren(ProtoInstance1539)
ProtoInstance1542 = x3d.ProtoInstance()
ProtoInstance1542.setName("Site")
ProtoInstance1542.setDEF("hanim_waist_preferred_posterior")
fieldValue1543 = x3d.fieldValue()
fieldValue1543.setName("name")
fieldValue1543.setValue("waist_preferred_posterior")

ProtoInstance1542.addFieldValue(fieldValue1543)
fieldValue1544 = x3d.fieldValue()
fieldValue1544.setName("translation")
fieldValue1544.setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754")

ProtoInstance1542.addFieldValue(fieldValue1544)

fieldValue1511.addChildren(ProtoInstance1542)
ProtoInstance1545 = x3d.ProtoInstance()
ProtoInstance1545.setName("Site")
ProtoInstance1545.setDEF("hanim_r_acromion")
fieldValue1546 = x3d.fieldValue()
fieldValue1546.setName("name")
fieldValue1546.setValue("r_acromion")

ProtoInstance1545.addFieldValue(fieldValue1546)
fieldValue1547 = x3d.fieldValue()
fieldValue1547.setName("translation")
fieldValue1547.setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541")

ProtoInstance1545.addFieldValue(fieldValue1547)

fieldValue1511.addChildren(ProtoInstance1545)
ProtoInstance1548 = x3d.ProtoInstance()
ProtoInstance1548.setName("Site")
ProtoInstance1548.setDEF("hanim_r_axilla_proximal")
fieldValue1549 = x3d.fieldValue()
fieldValue1549.setName("name")
fieldValue1549.setValue("r_axilla_proximal")

ProtoInstance1548.addFieldValue(fieldValue1549)
fieldValue1550 = x3d.fieldValue()
fieldValue1550.setName("translation")
fieldValue1550.setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438")

ProtoInstance1548.addFieldValue(fieldValue1550)

fieldValue1511.addChildren(ProtoInstance1548)
ProtoInstance1551 = x3d.ProtoInstance()
ProtoInstance1551.setName("Site")
ProtoInstance1551.setDEF("hanim_r_axilla_distal")
fieldValue1552 = x3d.fieldValue()
fieldValue1552.setName("name")
fieldValue1552.setValue("r_axilla_distal")

ProtoInstance1551.addFieldValue(fieldValue1552)
fieldValue1553 = x3d.fieldValue()
fieldValue1553.setName("translation")
fieldValue1553.setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678")

ProtoInstance1551.addFieldValue(fieldValue1553)

fieldValue1511.addChildren(ProtoInstance1551)
ProtoInstance1554 = x3d.ProtoInstance()
ProtoInstance1554.setName("Site")
ProtoInstance1554.setDEF("hanim_l_acromion")
fieldValue1555 = x3d.fieldValue()
fieldValue1555.setName("name")
fieldValue1555.setValue("l_acromion")

ProtoInstance1554.addFieldValue(fieldValue1555)
fieldValue1556 = x3d.fieldValue()
fieldValue1556.setName("translation")
fieldValue1556.setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014")

ProtoInstance1554.addFieldValue(fieldValue1556)

fieldValue1511.addChildren(ProtoInstance1554)
ProtoInstance1557 = x3d.ProtoInstance()
ProtoInstance1557.setName("Site")
ProtoInstance1557.setDEF("hanim_l_axilla_proximal")
fieldValue1558 = x3d.fieldValue()
fieldValue1558.setName("name")
fieldValue1558.setValue("l_axilla_proximal")

ProtoInstance1557.addFieldValue(fieldValue1558)
fieldValue1559 = x3d.fieldValue()
fieldValue1559.setName("translation")
fieldValue1559.setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937")

ProtoInstance1557.addFieldValue(fieldValue1559)

fieldValue1511.addChildren(ProtoInstance1557)
ProtoInstance1560 = x3d.ProtoInstance()
ProtoInstance1560.setName("Site")
ProtoInstance1560.setDEF("hanim_l_axilla_distal")
fieldValue1561 = x3d.fieldValue()
fieldValue1561.setName("name")
fieldValue1561.setValue("l_axilla_distal")

ProtoInstance1560.addFieldValue(fieldValue1561)
fieldValue1562 = x3d.fieldValue()
fieldValue1562.setName("translation")
fieldValue1562.setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388")

ProtoInstance1560.addFieldValue(fieldValue1562)

fieldValue1511.addChildren(ProtoInstance1560)
ProtoInstance1563 = x3d.ProtoInstance()
ProtoInstance1563.setName("Site")
ProtoInstance1563.setDEF("hanim_r_neck_base")
fieldValue1564 = x3d.fieldValue()
fieldValue1564.setName("name")
fieldValue1564.setValue("r_neck_base")

ProtoInstance1563.addFieldValue(fieldValue1564)
fieldValue1565 = x3d.fieldValue()
fieldValue1565.setName("translation")
fieldValue1565.setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071")

ProtoInstance1563.addFieldValue(fieldValue1565)

fieldValue1511.addChildren(ProtoInstance1563)
ProtoInstance1566 = x3d.ProtoInstance()
ProtoInstance1566.setName("Site")
ProtoInstance1566.setDEF("hanim_l_neck_base")
fieldValue1567 = x3d.fieldValue()
fieldValue1567.setName("name")
fieldValue1567.setValue("l_neck_base")

ProtoInstance1566.addFieldValue(fieldValue1567)
fieldValue1568 = x3d.fieldValue()
fieldValue1568.setName("translation")
fieldValue1568.setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478")

ProtoInstance1566.addFieldValue(fieldValue1568)

fieldValue1511.addChildren(ProtoInstance1566)
ProtoInstance1569 = x3d.ProtoInstance()
ProtoInstance1569.setName("Site")
ProtoInstance1569.setDEF("hanim_navel")
fieldValue1570 = x3d.fieldValue()
fieldValue1570.setName("name")
fieldValue1570.setValue("navel")

ProtoInstance1569.addFieldValue(fieldValue1570)
fieldValue1571 = x3d.fieldValue()
fieldValue1571.setName("translation")
fieldValue1571.setValue("0.006899999920278788 1.09660005569458 0.10170000046491623")

ProtoInstance1569.addFieldValue(fieldValue1571)

fieldValue1511.addChildren(ProtoInstance1569)

ProtoInstance1509.addFieldValue(fieldValue1511)

fieldValue1362.addChildren(ProtoInstance1509)

ProtoInstance1358.addFieldValue(fieldValue1362)

fieldValue496.addChildren(ProtoInstance1358)
ProtoInstance1572 = x3d.ProtoInstance()
ProtoInstance1572.setName("Joint")
ProtoInstance1572.setDEF("hanim_skullbase")
fieldValue1573 = x3d.fieldValue()
fieldValue1573.setName("stiffness")
fieldValue1573.setValue("1 1 1")

ProtoInstance1572.addFieldValue(fieldValue1573)
fieldValue1574 = x3d.fieldValue()
fieldValue1574.setName("name")
fieldValue1574.setValue("skullbase")

ProtoInstance1572.addFieldValue(fieldValue1574)
fieldValue1575 = x3d.fieldValue()
fieldValue1575.setName("center")
fieldValue1575.setValue("0.004399999976158142 1.62090003490448 0.023600000888109207")

ProtoInstance1572.addFieldValue(fieldValue1575)
fieldValue1576 = x3d.fieldValue()
fieldValue1576.setName("children")
ProtoInstance1577 = x3d.ProtoInstance()
ProtoInstance1577.setName("Segment")
ProtoInstance1577.setDEF("hanim_skull")
fieldValue1578 = x3d.fieldValue()
fieldValue1578.setName("name")
fieldValue1578.setValue("skull")

ProtoInstance1577.addFieldValue(fieldValue1578)
fieldValue1579 = x3d.fieldValue()
fieldValue1579.setName("children")
ProtoInstance1580 = x3d.ProtoInstance()
ProtoInstance1580.setName("Site")
ProtoInstance1580.setDEF("hanim_skull_tip")
fieldValue1581 = x3d.fieldValue()
fieldValue1581.setName("name")
fieldValue1581.setValue("skull_tip")

ProtoInstance1580.addFieldValue(fieldValue1581)
fieldValue1582 = x3d.fieldValue()
fieldValue1582.setName("translation")
fieldValue1582.setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678")

ProtoInstance1580.addFieldValue(fieldValue1582)

fieldValue1579.addChildren(ProtoInstance1580)
ProtoInstance1583 = x3d.ProtoInstance()
ProtoInstance1583.setName("Site")
ProtoInstance1583.setDEF("hanim_sellion")
fieldValue1584 = x3d.fieldValue()
fieldValue1584.setName("name")
fieldValue1584.setValue("sellion")

ProtoInstance1583.addFieldValue(fieldValue1584)
fieldValue1585 = x3d.fieldValue()
fieldValue1585.setName("translation")
fieldValue1585.setValue("0.005799999926239252 1.631600022315979 0.0851999968290329")

ProtoInstance1583.addFieldValue(fieldValue1585)

fieldValue1579.addChildren(ProtoInstance1583)
ProtoInstance1586 = x3d.ProtoInstance()
ProtoInstance1586.setName("Site")
ProtoInstance1586.setDEF("hanim_r_infraorbitale")
fieldValue1587 = x3d.fieldValue()
fieldValue1587.setName("name")
fieldValue1587.setValue("r_infraorbitale")

ProtoInstance1586.addFieldValue(fieldValue1587)
fieldValue1588 = x3d.fieldValue()
fieldValue1588.setName("translation")
fieldValue1588.setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547")

ProtoInstance1586.addFieldValue(fieldValue1588)

fieldValue1579.addChildren(ProtoInstance1586)
ProtoInstance1589 = x3d.ProtoInstance()
ProtoInstance1589.setName("Site")
ProtoInstance1589.setDEF("hanim_l_infraorbitale")
fieldValue1590 = x3d.fieldValue()
fieldValue1590.setName("name")
fieldValue1590.setValue("l_infraorbitale")

ProtoInstance1589.addFieldValue(fieldValue1590)
fieldValue1591 = x3d.fieldValue()
fieldValue1591.setName("translation")
fieldValue1591.setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547")

ProtoInstance1589.addFieldValue(fieldValue1591)

fieldValue1579.addChildren(ProtoInstance1589)
ProtoInstance1592 = x3d.ProtoInstance()
ProtoInstance1592.setName("Site")
ProtoInstance1592.setDEF("hanim_supramenton")
fieldValue1593 = x3d.fieldValue()
fieldValue1593.setName("name")
fieldValue1593.setValue("supramenton")

ProtoInstance1592.addFieldValue(fieldValue1593)
fieldValue1594 = x3d.fieldValue()
fieldValue1594.setName("translation")
fieldValue1594.setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962")

ProtoInstance1592.addFieldValue(fieldValue1594)

fieldValue1579.addChildren(ProtoInstance1592)
ProtoInstance1595 = x3d.ProtoInstance()
ProtoInstance1595.setName("Site")
ProtoInstance1595.setDEF("hanim_r_tragion")
fieldValue1596 = x3d.fieldValue()
fieldValue1596.setName("name")
fieldValue1596.setValue("r_tragion")

ProtoInstance1595.addFieldValue(fieldValue1596)
fieldValue1597 = x3d.fieldValue()
fieldValue1597.setName("translation")
fieldValue1597.setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642")

ProtoInstance1595.addFieldValue(fieldValue1597)

fieldValue1579.addChildren(ProtoInstance1595)
ProtoInstance1598 = x3d.ProtoInstance()
ProtoInstance1598.setName("Site")
ProtoInstance1598.setDEF("hanim_r_gonion")
fieldValue1599 = x3d.fieldValue()
fieldValue1599.setName("name")
fieldValue1599.setValue("r_gonion")

ProtoInstance1598.addFieldValue(fieldValue1599)
fieldValue1600 = x3d.fieldValue()
fieldValue1600.setName("translation")
fieldValue1600.setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176")

ProtoInstance1598.addFieldValue(fieldValue1600)

fieldValue1579.addChildren(ProtoInstance1598)
ProtoInstance1601 = x3d.ProtoInstance()
ProtoInstance1601.setName("Site")
ProtoInstance1601.setDEF("hanim_l_tragion")
fieldValue1602 = x3d.fieldValue()
fieldValue1602.setName("name")
fieldValue1602.setValue("l_tragion")

ProtoInstance1601.addFieldValue(fieldValue1602)
fieldValue1603 = x3d.fieldValue()
fieldValue1603.setName("translation")
fieldValue1603.setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874")

ProtoInstance1601.addFieldValue(fieldValue1603)

fieldValue1579.addChildren(ProtoInstance1601)
ProtoInstance1604 = x3d.ProtoInstance()
ProtoInstance1604.setName("Site")
ProtoInstance1604.setDEF("hanim_l_gonion")
fieldValue1605 = x3d.fieldValue()
fieldValue1605.setName("name")
fieldValue1605.setValue("l_gonion")

ProtoInstance1604.addFieldValue(fieldValue1605)
fieldValue1606 = x3d.fieldValue()
fieldValue1606.setName("translation")
fieldValue1606.setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066")

ProtoInstance1604.addFieldValue(fieldValue1606)

fieldValue1579.addChildren(ProtoInstance1604)
ProtoInstance1607 = x3d.ProtoInstance()
ProtoInstance1607.setName("Site")
ProtoInstance1607.setDEF("hanim_nuchale")
fieldValue1608 = x3d.fieldValue()
fieldValue1608.setName("name")
fieldValue1608.setValue("nuchale")

ProtoInstance1607.addFieldValue(fieldValue1608)
fieldValue1609 = x3d.fieldValue()
fieldValue1609.setName("translation")
fieldValue1609.setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")

ProtoInstance1607.addFieldValue(fieldValue1609)

fieldValue1579.addChildren(ProtoInstance1607)

ProtoInstance1577.addFieldValue(fieldValue1579)

fieldValue1576.addChildren(ProtoInstance1577)

ProtoInstance1572.addFieldValue(fieldValue1576)

fieldValue496.addChildren(ProtoInstance1572)
ProtoInstance1610 = x3d.ProtoInstance()
ProtoInstance1610.setName("Joint")
ProtoInstance1610.setDEF("hanim_l_shoulder")
fieldValue1611 = x3d.fieldValue()
fieldValue1611.setName("stiffness")
fieldValue1611.setValue("1 1 1")

ProtoInstance1610.addFieldValue(fieldValue1611)
fieldValue1612 = x3d.fieldValue()
fieldValue1612.setName("name")
fieldValue1612.setValue("l_shoulder")

ProtoInstance1610.addFieldValue(fieldValue1612)
fieldValue1613 = x3d.fieldValue()
fieldValue1613.setName("center")
fieldValue1613.setValue("0.2029000073671341 1.437600016593933 -0.03869999945163727")

ProtoInstance1610.addFieldValue(fieldValue1613)
fieldValue1614 = x3d.fieldValue()
fieldValue1614.setName("children")
ProtoInstance1615 = x3d.ProtoInstance()
ProtoInstance1615.setName("Joint")
ProtoInstance1615.setDEF("hanim_l_elbow")
fieldValue1616 = x3d.fieldValue()
fieldValue1616.setName("stiffness")
fieldValue1616.setValue("1 1 1")

ProtoInstance1615.addFieldValue(fieldValue1616)
fieldValue1617 = x3d.fieldValue()
fieldValue1617.setName("name")
fieldValue1617.setValue("l_elbow")

ProtoInstance1615.addFieldValue(fieldValue1617)
fieldValue1618 = x3d.fieldValue()
fieldValue1618.setName("center")
fieldValue1618.setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512")

ProtoInstance1615.addFieldValue(fieldValue1618)
fieldValue1619 = x3d.fieldValue()
fieldValue1619.setName("children")
ProtoInstance1620 = x3d.ProtoInstance()
ProtoInstance1620.setName("Joint")
ProtoInstance1620.setDEF("hanim_l_radiocarpal")
fieldValue1621 = x3d.fieldValue()
fieldValue1621.setName("stiffness")
fieldValue1621.setValue("1 1 1")

ProtoInstance1620.addFieldValue(fieldValue1621)
fieldValue1622 = x3d.fieldValue()
fieldValue1622.setName("name")
fieldValue1622.setValue("l_radiocarpal")

ProtoInstance1620.addFieldValue(fieldValue1622)
fieldValue1623 = x3d.fieldValue()
fieldValue1623.setName("center")
fieldValue1623.setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538")

ProtoInstance1620.addFieldValue(fieldValue1623)
fieldValue1624 = x3d.fieldValue()
fieldValue1624.setName("children")
ProtoInstance1625 = x3d.ProtoInstance()
ProtoInstance1625.setName("Segment")
ProtoInstance1625.setDEF("hanim_l_hand")
fieldValue1626 = x3d.fieldValue()
fieldValue1626.setName("name")
fieldValue1626.setValue("l_hand")

ProtoInstance1625.addFieldValue(fieldValue1626)
fieldValue1627 = x3d.fieldValue()
fieldValue1627.setName("children")
ProtoInstance1628 = x3d.ProtoInstance()
ProtoInstance1628.setName("Site")
ProtoInstance1628.setDEF("hanim_l_hand_tip")
fieldValue1629 = x3d.fieldValue()
fieldValue1629.setName("name")
fieldValue1629.setValue("l_hand_tip")

ProtoInstance1628.addFieldValue(fieldValue1629)
fieldValue1630 = x3d.fieldValue()
fieldValue1630.setName("translation")
fieldValue1630.setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205")

ProtoInstance1628.addFieldValue(fieldValue1630)

fieldValue1627.addChildren(ProtoInstance1628)
ProtoInstance1631 = x3d.ProtoInstance()
ProtoInstance1631.setName("Site")
ProtoInstance1631.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue1632 = x3d.fieldValue()
fieldValue1632.setName("name")
fieldValue1632.setValue("l_metacarpal_phalanx_2")

ProtoInstance1631.addFieldValue(fieldValue1632)
fieldValue1633 = x3d.fieldValue()
fieldValue1633.setName("translation")
fieldValue1633.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance1631.addFieldValue(fieldValue1633)

fieldValue1627.addChildren(ProtoInstance1631)
ProtoInstance1634 = x3d.ProtoInstance()
ProtoInstance1634.setName("Site")
ProtoInstance1634.setDEF("hanim_l_dactylion")
fieldValue1635 = x3d.fieldValue()
fieldValue1635.setName("name")
fieldValue1635.setValue("l_dactylion")

ProtoInstance1634.addFieldValue(fieldValue1635)
fieldValue1636 = x3d.fieldValue()
fieldValue1636.setName("translation")
fieldValue1636.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance1634.addFieldValue(fieldValue1636)

fieldValue1627.addChildren(ProtoInstance1634)
ProtoInstance1637 = x3d.ProtoInstance()
ProtoInstance1637.setName("Site")
ProtoInstance1637.setDEF("hanim_l_ulnar_styloid")
fieldValue1638 = x3d.fieldValue()
fieldValue1638.setName("name")
fieldValue1638.setValue("l_ulnar_styloid")

ProtoInstance1637.addFieldValue(fieldValue1638)
fieldValue1639 = x3d.fieldValue()
fieldValue1639.setName("translation")
fieldValue1639.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance1637.addFieldValue(fieldValue1639)

fieldValue1627.addChildren(ProtoInstance1637)
ProtoInstance1640 = x3d.ProtoInstance()
ProtoInstance1640.setName("Site")
ProtoInstance1640.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue1641 = x3d.fieldValue()
fieldValue1641.setName("name")
fieldValue1641.setValue("l_metacarpal_phalanx_5")

ProtoInstance1640.addFieldValue(fieldValue1641)
fieldValue1642 = x3d.fieldValue()
fieldValue1642.setName("translation")
fieldValue1642.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance1640.addFieldValue(fieldValue1642)

fieldValue1627.addChildren(ProtoInstance1640)

ProtoInstance1625.addFieldValue(fieldValue1627)

fieldValue1624.addChildren(ProtoInstance1625)

ProtoInstance1620.addFieldValue(fieldValue1624)

fieldValue1619.addChildren(ProtoInstance1620)
ProtoInstance1643 = x3d.ProtoInstance()
ProtoInstance1643.setName("Segment")
ProtoInstance1643.setDEF("hanim_l_forearm")
fieldValue1644 = x3d.fieldValue()
fieldValue1644.setName("name")
fieldValue1644.setValue("l_forearm")

ProtoInstance1643.addFieldValue(fieldValue1644)
fieldValue1645 = x3d.fieldValue()
fieldValue1645.setName("children")
ProtoInstance1646 = x3d.ProtoInstance()
ProtoInstance1646.setName("Site")
ProtoInstance1646.setDEF("hanim_l_radial_styloid")
fieldValue1647 = x3d.fieldValue()
fieldValue1647.setName("name")
fieldValue1647.setValue("l_radial_styloid")

ProtoInstance1646.addFieldValue(fieldValue1647)
fieldValue1648 = x3d.fieldValue()
fieldValue1648.setName("translation")
fieldValue1648.setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691")

ProtoInstance1646.addFieldValue(fieldValue1648)

fieldValue1645.addChildren(ProtoInstance1646)
ProtoInstance1649 = x3d.ProtoInstance()
ProtoInstance1649.setName("Site")
ProtoInstance1649.setDEF("hanim_l_olecranon")
fieldValue1650 = x3d.fieldValue()
fieldValue1650.setName("name")
fieldValue1650.setValue("l_olecranon")

ProtoInstance1649.addFieldValue(fieldValue1650)
fieldValue1651 = x3d.fieldValue()
fieldValue1651.setName("translation")
fieldValue1651.setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")

ProtoInstance1649.addFieldValue(fieldValue1651)

fieldValue1645.addChildren(ProtoInstance1649)
ProtoInstance1652 = x3d.ProtoInstance()
ProtoInstance1652.setName("Site")
ProtoInstance1652.setDEF("hanim_l_humeral_medial_epicondyles")
fieldValue1653 = x3d.fieldValue()
fieldValue1653.setName("name")
fieldValue1653.setValue("l_humeral_medial_epicondyles")

ProtoInstance1652.addFieldValue(fieldValue1653)
fieldValue1654 = x3d.fieldValue()
fieldValue1654.setName("translation")
fieldValue1654.setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661")

ProtoInstance1652.addFieldValue(fieldValue1654)

fieldValue1645.addChildren(ProtoInstance1652)
ProtoInstance1655 = x3d.ProtoInstance()
ProtoInstance1655.setName("Site")
ProtoInstance1655.setDEF("hanim_l_radiale")
fieldValue1656 = x3d.fieldValue()
fieldValue1656.setName("name")
fieldValue1656.setValue("l_radiale")

ProtoInstance1655.addFieldValue(fieldValue1656)
fieldValue1657 = x3d.fieldValue()
fieldValue1657.setName("translation")
fieldValue1657.setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268")

ProtoInstance1655.addFieldValue(fieldValue1657)

fieldValue1645.addChildren(ProtoInstance1655)

ProtoInstance1643.addFieldValue(fieldValue1645)

fieldValue1619.addChildren(ProtoInstance1643)

ProtoInstance1615.addFieldValue(fieldValue1619)

fieldValue1614.addChildren(ProtoInstance1615)
ProtoInstance1658 = x3d.ProtoInstance()
ProtoInstance1658.setName("Segment")
ProtoInstance1658.setDEF("hanim_l_upperarm")
fieldValue1659 = x3d.fieldValue()
fieldValue1659.setName("name")
fieldValue1659.setValue("l_upperarm")

ProtoInstance1658.addFieldValue(fieldValue1659)
fieldValue1660 = x3d.fieldValue()
fieldValue1660.setName("children")
ProtoInstance1661 = x3d.ProtoInstance()
ProtoInstance1661.setName("Site")
ProtoInstance1661.setDEF("hanim_l_humeral_lateral_epicondyles")
fieldValue1662 = x3d.fieldValue()
fieldValue1662.setName("name")
fieldValue1662.setValue("l_humeral_lateral_epicondyles")

ProtoInstance1661.addFieldValue(fieldValue1662)
fieldValue1663 = x3d.fieldValue()
fieldValue1663.setName("translation")
fieldValue1663.setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355")

ProtoInstance1661.addFieldValue(fieldValue1663)

fieldValue1660.addChildren(ProtoInstance1661)

ProtoInstance1658.addFieldValue(fieldValue1660)

fieldValue1614.addChildren(ProtoInstance1658)

ProtoInstance1610.addFieldValue(fieldValue1614)

fieldValue496.addChildren(ProtoInstance1610)
ProtoInstance1664 = x3d.ProtoInstance()
ProtoInstance1664.setName("Joint")
ProtoInstance1664.setDEF("hanim_l_elbow")
fieldValue1665 = x3d.fieldValue()
fieldValue1665.setName("stiffness")
fieldValue1665.setValue("1 1 1")

ProtoInstance1664.addFieldValue(fieldValue1665)
fieldValue1666 = x3d.fieldValue()
fieldValue1666.setName("name")
fieldValue1666.setValue("l_elbow")

ProtoInstance1664.addFieldValue(fieldValue1666)
fieldValue1667 = x3d.fieldValue()
fieldValue1667.setName("center")
fieldValue1667.setValue("0.2013999968767166 1.135699987411499 -0.0681999996304512")

ProtoInstance1664.addFieldValue(fieldValue1667)
fieldValue1668 = x3d.fieldValue()
fieldValue1668.setName("children")
ProtoInstance1669 = x3d.ProtoInstance()
ProtoInstance1669.setName("Joint")
ProtoInstance1669.setDEF("hanim_l_radiocarpal")
fieldValue1670 = x3d.fieldValue()
fieldValue1670.setName("stiffness")
fieldValue1670.setValue("1 1 1")

ProtoInstance1669.addFieldValue(fieldValue1670)
fieldValue1671 = x3d.fieldValue()
fieldValue1671.setName("name")
fieldValue1671.setValue("l_radiocarpal")

ProtoInstance1669.addFieldValue(fieldValue1671)
fieldValue1672 = x3d.fieldValue()
fieldValue1672.setName("center")
fieldValue1672.setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538")

ProtoInstance1669.addFieldValue(fieldValue1672)
fieldValue1673 = x3d.fieldValue()
fieldValue1673.setName("children")
ProtoInstance1674 = x3d.ProtoInstance()
ProtoInstance1674.setName("Segment")
ProtoInstance1674.setDEF("hanim_l_hand")
fieldValue1675 = x3d.fieldValue()
fieldValue1675.setName("name")
fieldValue1675.setValue("l_hand")

ProtoInstance1674.addFieldValue(fieldValue1675)
fieldValue1676 = x3d.fieldValue()
fieldValue1676.setName("children")
ProtoInstance1677 = x3d.ProtoInstance()
ProtoInstance1677.setName("Site")
ProtoInstance1677.setDEF("hanim_l_hand_tip")
fieldValue1678 = x3d.fieldValue()
fieldValue1678.setName("name")
fieldValue1678.setValue("l_hand_tip")

ProtoInstance1677.addFieldValue(fieldValue1678)
fieldValue1679 = x3d.fieldValue()
fieldValue1679.setName("translation")
fieldValue1679.setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205")

ProtoInstance1677.addFieldValue(fieldValue1679)

fieldValue1676.addChildren(ProtoInstance1677)
ProtoInstance1680 = x3d.ProtoInstance()
ProtoInstance1680.setName("Site")
ProtoInstance1680.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue1681 = x3d.fieldValue()
fieldValue1681.setName("name")
fieldValue1681.setValue("l_metacarpal_phalanx_2")

ProtoInstance1680.addFieldValue(fieldValue1681)
fieldValue1682 = x3d.fieldValue()
fieldValue1682.setName("translation")
fieldValue1682.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance1680.addFieldValue(fieldValue1682)

fieldValue1676.addChildren(ProtoInstance1680)
ProtoInstance1683 = x3d.ProtoInstance()
ProtoInstance1683.setName("Site")
ProtoInstance1683.setDEF("hanim_l_dactylion")
fieldValue1684 = x3d.fieldValue()
fieldValue1684.setName("name")
fieldValue1684.setValue("l_dactylion")

ProtoInstance1683.addFieldValue(fieldValue1684)
fieldValue1685 = x3d.fieldValue()
fieldValue1685.setName("translation")
fieldValue1685.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance1683.addFieldValue(fieldValue1685)

fieldValue1676.addChildren(ProtoInstance1683)
ProtoInstance1686 = x3d.ProtoInstance()
ProtoInstance1686.setName("Site")
ProtoInstance1686.setDEF("hanim_l_ulnar_styloid")
fieldValue1687 = x3d.fieldValue()
fieldValue1687.setName("name")
fieldValue1687.setValue("l_ulnar_styloid")

ProtoInstance1686.addFieldValue(fieldValue1687)
fieldValue1688 = x3d.fieldValue()
fieldValue1688.setName("translation")
fieldValue1688.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance1686.addFieldValue(fieldValue1688)

fieldValue1676.addChildren(ProtoInstance1686)
ProtoInstance1689 = x3d.ProtoInstance()
ProtoInstance1689.setName("Site")
ProtoInstance1689.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue1690 = x3d.fieldValue()
fieldValue1690.setName("name")
fieldValue1690.setValue("l_metacarpal_phalanx_5")

ProtoInstance1689.addFieldValue(fieldValue1690)
fieldValue1691 = x3d.fieldValue()
fieldValue1691.setName("translation")
fieldValue1691.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance1689.addFieldValue(fieldValue1691)

fieldValue1676.addChildren(ProtoInstance1689)

ProtoInstance1674.addFieldValue(fieldValue1676)

fieldValue1673.addChildren(ProtoInstance1674)

ProtoInstance1669.addFieldValue(fieldValue1673)

fieldValue1668.addChildren(ProtoInstance1669)
ProtoInstance1692 = x3d.ProtoInstance()
ProtoInstance1692.setName("Segment")
ProtoInstance1692.setDEF("hanim_l_forearm")
fieldValue1693 = x3d.fieldValue()
fieldValue1693.setName("name")
fieldValue1693.setValue("l_forearm")

ProtoInstance1692.addFieldValue(fieldValue1693)
fieldValue1694 = x3d.fieldValue()
fieldValue1694.setName("children")
ProtoInstance1695 = x3d.ProtoInstance()
ProtoInstance1695.setName("Site")
ProtoInstance1695.setDEF("hanim_l_radial_styloid")
fieldValue1696 = x3d.fieldValue()
fieldValue1696.setName("name")
fieldValue1696.setValue("l_radial_styloid")

ProtoInstance1695.addFieldValue(fieldValue1696)
fieldValue1697 = x3d.fieldValue()
fieldValue1697.setName("translation")
fieldValue1697.setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691")

ProtoInstance1695.addFieldValue(fieldValue1697)

fieldValue1694.addChildren(ProtoInstance1695)
ProtoInstance1698 = x3d.ProtoInstance()
ProtoInstance1698.setName("Site")
ProtoInstance1698.setDEF("hanim_l_olecranon")
fieldValue1699 = x3d.fieldValue()
fieldValue1699.setName("name")
fieldValue1699.setValue("l_olecranon")

ProtoInstance1698.addFieldValue(fieldValue1699)
fieldValue1700 = x3d.fieldValue()
fieldValue1700.setName("translation")
fieldValue1700.setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")

ProtoInstance1698.addFieldValue(fieldValue1700)

fieldValue1694.addChildren(ProtoInstance1698)
ProtoInstance1701 = x3d.ProtoInstance()
ProtoInstance1701.setName("Site")
ProtoInstance1701.setDEF("hanim_l_humeral_medial_epicondyles")
fieldValue1702 = x3d.fieldValue()
fieldValue1702.setName("name")
fieldValue1702.setValue("l_humeral_medial_epicondyles")

ProtoInstance1701.addFieldValue(fieldValue1702)
fieldValue1703 = x3d.fieldValue()
fieldValue1703.setName("translation")
fieldValue1703.setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661")

ProtoInstance1701.addFieldValue(fieldValue1703)

fieldValue1694.addChildren(ProtoInstance1701)
ProtoInstance1704 = x3d.ProtoInstance()
ProtoInstance1704.setName("Site")
ProtoInstance1704.setDEF("hanim_l_radiale")
fieldValue1705 = x3d.fieldValue()
fieldValue1705.setName("name")
fieldValue1705.setValue("l_radiale")

ProtoInstance1704.addFieldValue(fieldValue1705)
fieldValue1706 = x3d.fieldValue()
fieldValue1706.setName("translation")
fieldValue1706.setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268")

ProtoInstance1704.addFieldValue(fieldValue1706)

fieldValue1694.addChildren(ProtoInstance1704)

ProtoInstance1692.addFieldValue(fieldValue1694)

fieldValue1668.addChildren(ProtoInstance1692)

ProtoInstance1664.addFieldValue(fieldValue1668)

fieldValue496.addChildren(ProtoInstance1664)
ProtoInstance1707 = x3d.ProtoInstance()
ProtoInstance1707.setName("Joint")
ProtoInstance1707.setDEF("hanim_l_radiocarpal")
fieldValue1708 = x3d.fieldValue()
fieldValue1708.setName("stiffness")
fieldValue1708.setValue("1 1 1")

ProtoInstance1707.addFieldValue(fieldValue1708)
fieldValue1709 = x3d.fieldValue()
fieldValue1709.setName("name")
fieldValue1709.setValue("l_radiocarpal")

ProtoInstance1707.addFieldValue(fieldValue1709)
fieldValue1710 = x3d.fieldValue()
fieldValue1710.setName("center")
fieldValue1710.setValue("0.19840000569820404 0.8662999868392944 -0.05829999968409538")

ProtoInstance1707.addFieldValue(fieldValue1710)
fieldValue1711 = x3d.fieldValue()
fieldValue1711.setName("children")
ProtoInstance1712 = x3d.ProtoInstance()
ProtoInstance1712.setName("Segment")
ProtoInstance1712.setDEF("hanim_l_hand")
fieldValue1713 = x3d.fieldValue()
fieldValue1713.setName("name")
fieldValue1713.setValue("l_hand")

ProtoInstance1712.addFieldValue(fieldValue1713)
fieldValue1714 = x3d.fieldValue()
fieldValue1714.setName("children")
ProtoInstance1715 = x3d.ProtoInstance()
ProtoInstance1715.setName("Site")
ProtoInstance1715.setDEF("hanim_l_hand_tip")
fieldValue1716 = x3d.fieldValue()
fieldValue1716.setName("name")
fieldValue1716.setValue("l_hand_tip")

ProtoInstance1715.addFieldValue(fieldValue1716)
fieldValue1717 = x3d.fieldValue()
fieldValue1717.setName("translation")
fieldValue1717.setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205")

ProtoInstance1715.addFieldValue(fieldValue1717)

fieldValue1714.addChildren(ProtoInstance1715)
ProtoInstance1718 = x3d.ProtoInstance()
ProtoInstance1718.setName("Site")
ProtoInstance1718.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue1719 = x3d.fieldValue()
fieldValue1719.setName("name")
fieldValue1719.setValue("l_metacarpal_phalanx_2")

ProtoInstance1718.addFieldValue(fieldValue1719)
fieldValue1720 = x3d.fieldValue()
fieldValue1720.setName("translation")
fieldValue1720.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance1718.addFieldValue(fieldValue1720)

fieldValue1714.addChildren(ProtoInstance1718)
ProtoInstance1721 = x3d.ProtoInstance()
ProtoInstance1721.setName("Site")
ProtoInstance1721.setDEF("hanim_l_dactylion")
fieldValue1722 = x3d.fieldValue()
fieldValue1722.setName("name")
fieldValue1722.setValue("l_dactylion")

ProtoInstance1721.addFieldValue(fieldValue1722)
fieldValue1723 = x3d.fieldValue()
fieldValue1723.setName("translation")
fieldValue1723.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance1721.addFieldValue(fieldValue1723)

fieldValue1714.addChildren(ProtoInstance1721)
ProtoInstance1724 = x3d.ProtoInstance()
ProtoInstance1724.setName("Site")
ProtoInstance1724.setDEF("hanim_l_ulnar_styloid")
fieldValue1725 = x3d.fieldValue()
fieldValue1725.setName("name")
fieldValue1725.setValue("l_ulnar_styloid")

ProtoInstance1724.addFieldValue(fieldValue1725)
fieldValue1726 = x3d.fieldValue()
fieldValue1726.setName("translation")
fieldValue1726.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance1724.addFieldValue(fieldValue1726)

fieldValue1714.addChildren(ProtoInstance1724)
ProtoInstance1727 = x3d.ProtoInstance()
ProtoInstance1727.setName("Site")
ProtoInstance1727.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue1728 = x3d.fieldValue()
fieldValue1728.setName("name")
fieldValue1728.setValue("l_metacarpal_phalanx_5")

ProtoInstance1727.addFieldValue(fieldValue1728)
fieldValue1729 = x3d.fieldValue()
fieldValue1729.setName("translation")
fieldValue1729.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance1727.addFieldValue(fieldValue1729)

fieldValue1714.addChildren(ProtoInstance1727)

ProtoInstance1712.addFieldValue(fieldValue1714)

fieldValue1711.addChildren(ProtoInstance1712)

ProtoInstance1707.addFieldValue(fieldValue1711)

fieldValue496.addChildren(ProtoInstance1707)
ProtoInstance1730 = x3d.ProtoInstance()
ProtoInstance1730.setName("Joint")
ProtoInstance1730.setDEF("hanim_r_shoulder")
fieldValue1731 = x3d.fieldValue()
fieldValue1731.setName("stiffness")
fieldValue1731.setValue("1 1 1")

ProtoInstance1730.addFieldValue(fieldValue1731)
fieldValue1732 = x3d.fieldValue()
fieldValue1732.setName("name")
fieldValue1732.setValue("r_shoulder")

ProtoInstance1730.addFieldValue(fieldValue1732)
fieldValue1733 = x3d.fieldValue()
fieldValue1733.setName("center")
fieldValue1733.setValue("-0.1906999945640564 1.4407000541687012 -0.032499998807907104")

ProtoInstance1730.addFieldValue(fieldValue1733)
fieldValue1734 = x3d.fieldValue()
fieldValue1734.setName("children")
ProtoInstance1735 = x3d.ProtoInstance()
ProtoInstance1735.setName("Joint")
ProtoInstance1735.setDEF("hanim_r_elbow")
fieldValue1736 = x3d.fieldValue()
fieldValue1736.setName("stiffness")
fieldValue1736.setValue("1 1 1")

ProtoInstance1735.addFieldValue(fieldValue1736)
fieldValue1737 = x3d.fieldValue()
fieldValue1737.setName("name")
fieldValue1737.setValue("r_elbow")

ProtoInstance1735.addFieldValue(fieldValue1737)
fieldValue1738 = x3d.fieldValue()
fieldValue1738.setName("center")
fieldValue1738.setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104")

ProtoInstance1735.addFieldValue(fieldValue1738)
fieldValue1739 = x3d.fieldValue()
fieldValue1739.setName("children")
ProtoInstance1740 = x3d.ProtoInstance()
ProtoInstance1740.setName("Joint")
ProtoInstance1740.setDEF("hanim_r_radiocarpal")
fieldValue1741 = x3d.fieldValue()
fieldValue1741.setName("stiffness")
fieldValue1741.setValue("1 1 1")

ProtoInstance1740.addFieldValue(fieldValue1741)
fieldValue1742 = x3d.fieldValue()
fieldValue1742.setName("name")
fieldValue1742.setValue("r_radiocarpal")

ProtoInstance1740.addFieldValue(fieldValue1742)
fieldValue1743 = x3d.fieldValue()
fieldValue1743.setName("center")
fieldValue1743.setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522")

ProtoInstance1740.addFieldValue(fieldValue1743)
fieldValue1744 = x3d.fieldValue()
fieldValue1744.setName("children")
ProtoInstance1745 = x3d.ProtoInstance()
ProtoInstance1745.setName("Segment")
ProtoInstance1745.setDEF("hanim_r_hand")
fieldValue1746 = x3d.fieldValue()
fieldValue1746.setName("name")
fieldValue1746.setValue("r_hand")

ProtoInstance1745.addFieldValue(fieldValue1746)
fieldValue1747 = x3d.fieldValue()
fieldValue1747.setName("children")
ProtoInstance1748 = x3d.ProtoInstance()
ProtoInstance1748.setName("Site")
ProtoInstance1748.setDEF("hanim_r_hand_tip")
fieldValue1749 = x3d.fieldValue()
fieldValue1749.setName("name")
fieldValue1749.setValue("r_hand_tip")

ProtoInstance1748.addFieldValue(fieldValue1749)
fieldValue1750 = x3d.fieldValue()
fieldValue1750.setName("translation")
fieldValue1750.setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")

ProtoInstance1748.addFieldValue(fieldValue1750)

fieldValue1747.addChildren(ProtoInstance1748)
ProtoInstance1751 = x3d.ProtoInstance()
ProtoInstance1751.setName("Site")
ProtoInstance1751.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue1752 = x3d.fieldValue()
fieldValue1752.setName("name")
fieldValue1752.setValue("r_metacarpal_phalanx_2")

ProtoInstance1751.addFieldValue(fieldValue1752)
fieldValue1753 = x3d.fieldValue()
fieldValue1753.setName("translation")
fieldValue1753.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance1751.addFieldValue(fieldValue1753)

fieldValue1747.addChildren(ProtoInstance1751)
ProtoInstance1754 = x3d.ProtoInstance()
ProtoInstance1754.setName("Site")
ProtoInstance1754.setDEF("hanim_r_dactylion")
fieldValue1755 = x3d.fieldValue()
fieldValue1755.setName("name")
fieldValue1755.setValue("r_dactylion")

ProtoInstance1754.addFieldValue(fieldValue1755)
fieldValue1756 = x3d.fieldValue()
fieldValue1756.setName("translation")
fieldValue1756.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance1754.addFieldValue(fieldValue1756)

fieldValue1747.addChildren(ProtoInstance1754)
ProtoInstance1757 = x3d.ProtoInstance()
ProtoInstance1757.setName("Site")
ProtoInstance1757.setDEF("hanim_r_ulnar_styloid")
fieldValue1758 = x3d.fieldValue()
fieldValue1758.setName("name")
fieldValue1758.setValue("r_ulnar_styloid")

ProtoInstance1757.addFieldValue(fieldValue1758)
fieldValue1759 = x3d.fieldValue()
fieldValue1759.setName("translation")
fieldValue1759.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance1757.addFieldValue(fieldValue1759)

fieldValue1747.addChildren(ProtoInstance1757)
ProtoInstance1760 = x3d.ProtoInstance()
ProtoInstance1760.setName("Site")
ProtoInstance1760.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue1761 = x3d.fieldValue()
fieldValue1761.setName("name")
fieldValue1761.setValue("r_metacarpal_phalanx_5")

ProtoInstance1760.addFieldValue(fieldValue1761)
fieldValue1762 = x3d.fieldValue()
fieldValue1762.setName("translation")
fieldValue1762.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance1760.addFieldValue(fieldValue1762)

fieldValue1747.addChildren(ProtoInstance1760)

ProtoInstance1745.addFieldValue(fieldValue1747)

fieldValue1744.addChildren(ProtoInstance1745)

ProtoInstance1740.addFieldValue(fieldValue1744)

fieldValue1739.addChildren(ProtoInstance1740)
ProtoInstance1763 = x3d.ProtoInstance()
ProtoInstance1763.setName("Segment")
ProtoInstance1763.setDEF("hanim_r_forearm")
fieldValue1764 = x3d.fieldValue()
fieldValue1764.setName("name")
fieldValue1764.setValue("r_forearm")

ProtoInstance1763.addFieldValue(fieldValue1764)
fieldValue1765 = x3d.fieldValue()
fieldValue1765.setName("children")
ProtoInstance1766 = x3d.ProtoInstance()
ProtoInstance1766.setName("Site")
ProtoInstance1766.setDEF("hanim_r_radial_styloid")
fieldValue1767 = x3d.fieldValue()
fieldValue1767.setName("name")
fieldValue1767.setValue("r_radial_styloid")

ProtoInstance1766.addFieldValue(fieldValue1767)
fieldValue1768 = x3d.fieldValue()
fieldValue1768.setName("translation")
fieldValue1768.setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236")

ProtoInstance1766.addFieldValue(fieldValue1768)

fieldValue1765.addChildren(ProtoInstance1766)
ProtoInstance1769 = x3d.ProtoInstance()
ProtoInstance1769.setName("Site")
ProtoInstance1769.setDEF("hanim_r_olecranon")
fieldValue1770 = x3d.fieldValue()
fieldValue1770.setName("name")
fieldValue1770.setValue("r_olecranon")

ProtoInstance1769.addFieldValue(fieldValue1770)
fieldValue1771 = x3d.fieldValue()
fieldValue1771.setName("translation")
fieldValue1771.setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")

ProtoInstance1769.addFieldValue(fieldValue1771)

fieldValue1765.addChildren(ProtoInstance1769)
ProtoInstance1772 = x3d.ProtoInstance()
ProtoInstance1772.setName("Site")
ProtoInstance1772.setDEF("hanim_r_humeral_medial_epicondyles")
fieldValue1773 = x3d.fieldValue()
fieldValue1773.setName("name")
fieldValue1773.setValue("r_humeral_medial_epicondyles")

ProtoInstance1772.addFieldValue(fieldValue1773)
fieldValue1774 = x3d.fieldValue()
fieldValue1774.setName("translation")
fieldValue1774.setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")

ProtoInstance1772.addFieldValue(fieldValue1774)

fieldValue1765.addChildren(ProtoInstance1772)
ProtoInstance1775 = x3d.ProtoInstance()
ProtoInstance1775.setName("Site")
ProtoInstance1775.setDEF("hanim_r_radiale")
fieldValue1776 = x3d.fieldValue()
fieldValue1776.setName("name")
fieldValue1776.setValue("r_radiale")

ProtoInstance1775.addFieldValue(fieldValue1776)
fieldValue1777 = x3d.fieldValue()
fieldValue1777.setName("translation")
fieldValue1777.setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")

ProtoInstance1775.addFieldValue(fieldValue1777)

fieldValue1765.addChildren(ProtoInstance1775)

ProtoInstance1763.addFieldValue(fieldValue1765)

fieldValue1739.addChildren(ProtoInstance1763)

ProtoInstance1735.addFieldValue(fieldValue1739)

fieldValue1734.addChildren(ProtoInstance1735)
ProtoInstance1778 = x3d.ProtoInstance()
ProtoInstance1778.setName("Segment")
ProtoInstance1778.setDEF("hanim_r_upperarm")
fieldValue1779 = x3d.fieldValue()
fieldValue1779.setName("name")
fieldValue1779.setValue("r_upperarm")

ProtoInstance1778.addFieldValue(fieldValue1779)
fieldValue1780 = x3d.fieldValue()
fieldValue1780.setName("children")
ProtoInstance1781 = x3d.ProtoInstance()
ProtoInstance1781.setName("Site")
ProtoInstance1781.setDEF("hanim_r_humeral_lateral_epicondyles")
fieldValue1782 = x3d.fieldValue()
fieldValue1782.setName("name")
fieldValue1782.setValue("r_humeral_lateral_epicondyles")

ProtoInstance1781.addFieldValue(fieldValue1782)
fieldValue1783 = x3d.fieldValue()
fieldValue1783.setName("translation")
fieldValue1783.setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")

ProtoInstance1781.addFieldValue(fieldValue1783)

fieldValue1780.addChildren(ProtoInstance1781)

ProtoInstance1778.addFieldValue(fieldValue1780)

fieldValue1734.addChildren(ProtoInstance1778)

ProtoInstance1730.addFieldValue(fieldValue1734)

fieldValue496.addChildren(ProtoInstance1730)
ProtoInstance1784 = x3d.ProtoInstance()
ProtoInstance1784.setName("Joint")
ProtoInstance1784.setDEF("hanim_r_elbow")
fieldValue1785 = x3d.fieldValue()
fieldValue1785.setName("stiffness")
fieldValue1785.setValue("1 1 1")

ProtoInstance1784.addFieldValue(fieldValue1785)
fieldValue1786 = x3d.fieldValue()
fieldValue1786.setName("name")
fieldValue1786.setValue("r_elbow")

ProtoInstance1784.addFieldValue(fieldValue1786)
fieldValue1787 = x3d.fieldValue()
fieldValue1787.setName("center")
fieldValue1787.setValue("-0.1949000060558319 1.138800024986267 -0.06199999898672104")

ProtoInstance1784.addFieldValue(fieldValue1787)
fieldValue1788 = x3d.fieldValue()
fieldValue1788.setName("children")
ProtoInstance1789 = x3d.ProtoInstance()
ProtoInstance1789.setName("Joint")
ProtoInstance1789.setDEF("hanim_r_radiocarpal")
fieldValue1790 = x3d.fieldValue()
fieldValue1790.setName("stiffness")
fieldValue1790.setValue("1 1 1")

ProtoInstance1789.addFieldValue(fieldValue1790)
fieldValue1791 = x3d.fieldValue()
fieldValue1791.setName("name")
fieldValue1791.setValue("r_radiocarpal")

ProtoInstance1789.addFieldValue(fieldValue1791)
fieldValue1792 = x3d.fieldValue()
fieldValue1792.setName("center")
fieldValue1792.setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522")

ProtoInstance1789.addFieldValue(fieldValue1792)
fieldValue1793 = x3d.fieldValue()
fieldValue1793.setName("children")
ProtoInstance1794 = x3d.ProtoInstance()
ProtoInstance1794.setName("Segment")
ProtoInstance1794.setDEF("hanim_r_hand")
fieldValue1795 = x3d.fieldValue()
fieldValue1795.setName("name")
fieldValue1795.setValue("r_hand")

ProtoInstance1794.addFieldValue(fieldValue1795)
fieldValue1796 = x3d.fieldValue()
fieldValue1796.setName("children")
ProtoInstance1797 = x3d.ProtoInstance()
ProtoInstance1797.setName("Site")
ProtoInstance1797.setDEF("hanim_r_hand_tip")
fieldValue1798 = x3d.fieldValue()
fieldValue1798.setName("name")
fieldValue1798.setValue("r_hand_tip")

ProtoInstance1797.addFieldValue(fieldValue1798)
fieldValue1799 = x3d.fieldValue()
fieldValue1799.setName("translation")
fieldValue1799.setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")

ProtoInstance1797.addFieldValue(fieldValue1799)

fieldValue1796.addChildren(ProtoInstance1797)
ProtoInstance1800 = x3d.ProtoInstance()
ProtoInstance1800.setName("Site")
ProtoInstance1800.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue1801 = x3d.fieldValue()
fieldValue1801.setName("name")
fieldValue1801.setValue("r_metacarpal_phalanx_2")

ProtoInstance1800.addFieldValue(fieldValue1801)
fieldValue1802 = x3d.fieldValue()
fieldValue1802.setName("translation")
fieldValue1802.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance1800.addFieldValue(fieldValue1802)

fieldValue1796.addChildren(ProtoInstance1800)
ProtoInstance1803 = x3d.ProtoInstance()
ProtoInstance1803.setName("Site")
ProtoInstance1803.setDEF("hanim_r_dactylion")
fieldValue1804 = x3d.fieldValue()
fieldValue1804.setName("name")
fieldValue1804.setValue("r_dactylion")

ProtoInstance1803.addFieldValue(fieldValue1804)
fieldValue1805 = x3d.fieldValue()
fieldValue1805.setName("translation")
fieldValue1805.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance1803.addFieldValue(fieldValue1805)

fieldValue1796.addChildren(ProtoInstance1803)
ProtoInstance1806 = x3d.ProtoInstance()
ProtoInstance1806.setName("Site")
ProtoInstance1806.setDEF("hanim_r_ulnar_styloid")
fieldValue1807 = x3d.fieldValue()
fieldValue1807.setName("name")
fieldValue1807.setValue("r_ulnar_styloid")

ProtoInstance1806.addFieldValue(fieldValue1807)
fieldValue1808 = x3d.fieldValue()
fieldValue1808.setName("translation")
fieldValue1808.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance1806.addFieldValue(fieldValue1808)

fieldValue1796.addChildren(ProtoInstance1806)
ProtoInstance1809 = x3d.ProtoInstance()
ProtoInstance1809.setName("Site")
ProtoInstance1809.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue1810 = x3d.fieldValue()
fieldValue1810.setName("name")
fieldValue1810.setValue("r_metacarpal_phalanx_5")

ProtoInstance1809.addFieldValue(fieldValue1810)
fieldValue1811 = x3d.fieldValue()
fieldValue1811.setName("translation")
fieldValue1811.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance1809.addFieldValue(fieldValue1811)

fieldValue1796.addChildren(ProtoInstance1809)

ProtoInstance1794.addFieldValue(fieldValue1796)

fieldValue1793.addChildren(ProtoInstance1794)

ProtoInstance1789.addFieldValue(fieldValue1793)

fieldValue1788.addChildren(ProtoInstance1789)
ProtoInstance1812 = x3d.ProtoInstance()
ProtoInstance1812.setName("Segment")
ProtoInstance1812.setDEF("hanim_r_forearm")
fieldValue1813 = x3d.fieldValue()
fieldValue1813.setName("name")
fieldValue1813.setValue("r_forearm")

ProtoInstance1812.addFieldValue(fieldValue1813)
fieldValue1814 = x3d.fieldValue()
fieldValue1814.setName("children")
ProtoInstance1815 = x3d.ProtoInstance()
ProtoInstance1815.setName("Site")
ProtoInstance1815.setDEF("hanim_r_radial_styloid")
fieldValue1816 = x3d.fieldValue()
fieldValue1816.setName("name")
fieldValue1816.setValue("r_radial_styloid")

ProtoInstance1815.addFieldValue(fieldValue1816)
fieldValue1817 = x3d.fieldValue()
fieldValue1817.setName("translation")
fieldValue1817.setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236")

ProtoInstance1815.addFieldValue(fieldValue1817)

fieldValue1814.addChildren(ProtoInstance1815)
ProtoInstance1818 = x3d.ProtoInstance()
ProtoInstance1818.setName("Site")
ProtoInstance1818.setDEF("hanim_r_olecranon")
fieldValue1819 = x3d.fieldValue()
fieldValue1819.setName("name")
fieldValue1819.setValue("r_olecranon")

ProtoInstance1818.addFieldValue(fieldValue1819)
fieldValue1820 = x3d.fieldValue()
fieldValue1820.setName("translation")
fieldValue1820.setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")

ProtoInstance1818.addFieldValue(fieldValue1820)

fieldValue1814.addChildren(ProtoInstance1818)
ProtoInstance1821 = x3d.ProtoInstance()
ProtoInstance1821.setName("Site")
ProtoInstance1821.setDEF("hanim_r_humeral_medial_epicondyles")
fieldValue1822 = x3d.fieldValue()
fieldValue1822.setName("name")
fieldValue1822.setValue("r_humeral_medial_epicondyles")

ProtoInstance1821.addFieldValue(fieldValue1822)
fieldValue1823 = x3d.fieldValue()
fieldValue1823.setName("translation")
fieldValue1823.setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")

ProtoInstance1821.addFieldValue(fieldValue1823)

fieldValue1814.addChildren(ProtoInstance1821)
ProtoInstance1824 = x3d.ProtoInstance()
ProtoInstance1824.setName("Site")
ProtoInstance1824.setDEF("hanim_r_radiale")
fieldValue1825 = x3d.fieldValue()
fieldValue1825.setName("name")
fieldValue1825.setValue("r_radiale")

ProtoInstance1824.addFieldValue(fieldValue1825)
fieldValue1826 = x3d.fieldValue()
fieldValue1826.setName("translation")
fieldValue1826.setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")

ProtoInstance1824.addFieldValue(fieldValue1826)

fieldValue1814.addChildren(ProtoInstance1824)

ProtoInstance1812.addFieldValue(fieldValue1814)

fieldValue1788.addChildren(ProtoInstance1812)

ProtoInstance1784.addFieldValue(fieldValue1788)

fieldValue496.addChildren(ProtoInstance1784)
ProtoInstance1827 = x3d.ProtoInstance()
ProtoInstance1827.setName("Joint")
ProtoInstance1827.setDEF("hanim_r_radiocarpal")
fieldValue1828 = x3d.fieldValue()
fieldValue1828.setName("stiffness")
fieldValue1828.setValue("1 1 1")

ProtoInstance1827.addFieldValue(fieldValue1828)
fieldValue1829 = x3d.fieldValue()
fieldValue1829.setName("name")
fieldValue1829.setValue("r_radiocarpal")

ProtoInstance1827.addFieldValue(fieldValue1829)
fieldValue1830 = x3d.fieldValue()
fieldValue1830.setName("center")
fieldValue1830.setValue("-0.19589999318122864 0.8694000244140625 -0.05209999904036522")

ProtoInstance1827.addFieldValue(fieldValue1830)
fieldValue1831 = x3d.fieldValue()
fieldValue1831.setName("children")
ProtoInstance1832 = x3d.ProtoInstance()
ProtoInstance1832.setName("Segment")
ProtoInstance1832.setDEF("hanim_r_hand")
fieldValue1833 = x3d.fieldValue()
fieldValue1833.setName("name")
fieldValue1833.setValue("r_hand")

ProtoInstance1832.addFieldValue(fieldValue1833)
fieldValue1834 = x3d.fieldValue()
fieldValue1834.setName("children")
ProtoInstance1835 = x3d.ProtoInstance()
ProtoInstance1835.setName("Site")
ProtoInstance1835.setDEF("hanim_r_hand_tip")
fieldValue1836 = x3d.fieldValue()
fieldValue1836.setName("name")
fieldValue1836.setValue("r_hand_tip")

ProtoInstance1835.addFieldValue(fieldValue1836)
fieldValue1837 = x3d.fieldValue()
fieldValue1837.setName("translation")
fieldValue1837.setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")

ProtoInstance1835.addFieldValue(fieldValue1837)

fieldValue1834.addChildren(ProtoInstance1835)
ProtoInstance1838 = x3d.ProtoInstance()
ProtoInstance1838.setName("Site")
ProtoInstance1838.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue1839 = x3d.fieldValue()
fieldValue1839.setName("name")
fieldValue1839.setValue("r_metacarpal_phalanx_2")

ProtoInstance1838.addFieldValue(fieldValue1839)
fieldValue1840 = x3d.fieldValue()
fieldValue1840.setName("translation")
fieldValue1840.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance1838.addFieldValue(fieldValue1840)

fieldValue1834.addChildren(ProtoInstance1838)
ProtoInstance1841 = x3d.ProtoInstance()
ProtoInstance1841.setName("Site")
ProtoInstance1841.setDEF("hanim_r_dactylion")
fieldValue1842 = x3d.fieldValue()
fieldValue1842.setName("name")
fieldValue1842.setValue("r_dactylion")

ProtoInstance1841.addFieldValue(fieldValue1842)
fieldValue1843 = x3d.fieldValue()
fieldValue1843.setName("translation")
fieldValue1843.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance1841.addFieldValue(fieldValue1843)

fieldValue1834.addChildren(ProtoInstance1841)
ProtoInstance1844 = x3d.ProtoInstance()
ProtoInstance1844.setName("Site")
ProtoInstance1844.setDEF("hanim_r_ulnar_styloid")
fieldValue1845 = x3d.fieldValue()
fieldValue1845.setName("name")
fieldValue1845.setValue("r_ulnar_styloid")

ProtoInstance1844.addFieldValue(fieldValue1845)
fieldValue1846 = x3d.fieldValue()
fieldValue1846.setName("translation")
fieldValue1846.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance1844.addFieldValue(fieldValue1846)

fieldValue1834.addChildren(ProtoInstance1844)
ProtoInstance1847 = x3d.ProtoInstance()
ProtoInstance1847.setName("Site")
ProtoInstance1847.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue1848 = x3d.fieldValue()
fieldValue1848.setName("name")
fieldValue1848.setValue("r_metacarpal_phalanx_5")

ProtoInstance1847.addFieldValue(fieldValue1848)
fieldValue1849 = x3d.fieldValue()
fieldValue1849.setName("translation")
fieldValue1849.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance1847.addFieldValue(fieldValue1849)

fieldValue1834.addChildren(ProtoInstance1847)

ProtoInstance1832.addFieldValue(fieldValue1834)

fieldValue1831.addChildren(ProtoInstance1832)

ProtoInstance1827.addFieldValue(fieldValue1831)

fieldValue496.addChildren(ProtoInstance1827)

ProtoInstance110.addFieldValue(fieldValue496)
fieldValue1850 = x3d.fieldValue()
fieldValue1850.setName("segments")
ProtoInstance1851 = x3d.ProtoInstance()
ProtoInstance1851.setName("Segment")
ProtoInstance1851.setDEF("hanim_l_middistal")
fieldValue1852 = x3d.fieldValue()
fieldValue1852.setName("name")
fieldValue1852.setValue("l_middistal")

ProtoInstance1851.addFieldValue(fieldValue1852)
fieldValue1853 = x3d.fieldValue()
fieldValue1853.setName("children")
ProtoInstance1854 = x3d.ProtoInstance()
ProtoInstance1854.setName("Site")
ProtoInstance1854.setDEF("hanim_l_middistal_tip")
fieldValue1855 = x3d.fieldValue()
fieldValue1855.setName("name")
fieldValue1855.setValue("l_middistal_tip")

ProtoInstance1854.addFieldValue(fieldValue1855)
fieldValue1856 = x3d.fieldValue()
fieldValue1856.setName("translation")
fieldValue1856.setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261")

ProtoInstance1854.addFieldValue(fieldValue1856)

fieldValue1853.addChildren(ProtoInstance1854)
ProtoInstance1857 = x3d.ProtoInstance()
ProtoInstance1857.setName("Site")
ProtoInstance1857.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue1858 = x3d.fieldValue()
fieldValue1858.setName("name")
fieldValue1858.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance1857.addFieldValue(fieldValue1858)
fieldValue1859 = x3d.fieldValue()
fieldValue1859.setName("translation")
fieldValue1859.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance1857.addFieldValue(fieldValue1859)

fieldValue1853.addChildren(ProtoInstance1857)
ProtoInstance1860 = x3d.ProtoInstance()
ProtoInstance1860.setName("Site")
ProtoInstance1860.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue1861 = x3d.fieldValue()
fieldValue1861.setName("name")
fieldValue1861.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance1860.addFieldValue(fieldValue1861)
fieldValue1862 = x3d.fieldValue()
fieldValue1862.setName("translation")
fieldValue1862.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance1860.addFieldValue(fieldValue1862)

fieldValue1853.addChildren(ProtoInstance1860)
ProtoInstance1863 = x3d.ProtoInstance()
ProtoInstance1863.setName("Site")
ProtoInstance1863.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue1864 = x3d.fieldValue()
fieldValue1864.setName("name")
fieldValue1864.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance1863.addFieldValue(fieldValue1864)
fieldValue1865 = x3d.fieldValue()
fieldValue1865.setName("translation")
fieldValue1865.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance1863.addFieldValue(fieldValue1865)

fieldValue1853.addChildren(ProtoInstance1863)

ProtoInstance1851.addFieldValue(fieldValue1853)

fieldValue1850.addChildren(ProtoInstance1851)
ProtoInstance1866 = x3d.ProtoInstance()
ProtoInstance1866.setName("Segment")
ProtoInstance1866.setDEF("hanim_l_hindfoot")
fieldValue1867 = x3d.fieldValue()
fieldValue1867.setName("name")
fieldValue1867.setValue("l_hindfoot")

ProtoInstance1866.addFieldValue(fieldValue1867)
fieldValue1868 = x3d.fieldValue()
fieldValue1868.setName("children")
ProtoInstance1869 = x3d.ProtoInstance()
ProtoInstance1869.setName("Site")
ProtoInstance1869.setDEF("hanim_l_lateral_malleolus")
fieldValue1870 = x3d.fieldValue()
fieldValue1870.setName("name")
fieldValue1870.setValue("l_lateral_malleolus")

ProtoInstance1869.addFieldValue(fieldValue1870)
fieldValue1871 = x3d.fieldValue()
fieldValue1871.setName("translation")
fieldValue1871.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance1869.addFieldValue(fieldValue1871)

fieldValue1868.addChildren(ProtoInstance1869)
ProtoInstance1872 = x3d.ProtoInstance()
ProtoInstance1872.setName("Site")
ProtoInstance1872.setDEF("hanim_l_medial_malleolus")
fieldValue1873 = x3d.fieldValue()
fieldValue1873.setName("name")
fieldValue1873.setValue("l_medial_malleolus")

ProtoInstance1872.addFieldValue(fieldValue1873)
fieldValue1874 = x3d.fieldValue()
fieldValue1874.setName("translation")
fieldValue1874.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance1872.addFieldValue(fieldValue1874)

fieldValue1868.addChildren(ProtoInstance1872)
ProtoInstance1875 = x3d.ProtoInstance()
ProtoInstance1875.setName("Site")
ProtoInstance1875.setDEF("hanim_l_sphyrion")
fieldValue1876 = x3d.fieldValue()
fieldValue1876.setName("name")
fieldValue1876.setValue("l_sphyrion")

ProtoInstance1875.addFieldValue(fieldValue1876)
fieldValue1877 = x3d.fieldValue()
fieldValue1877.setName("translation")
fieldValue1877.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance1875.addFieldValue(fieldValue1877)

fieldValue1868.addChildren(ProtoInstance1875)
ProtoInstance1878 = x3d.ProtoInstance()
ProtoInstance1878.setName("Site")
ProtoInstance1878.setDEF("hanim_l_calcaneus_posterior")
fieldValue1879 = x3d.fieldValue()
fieldValue1879.setName("name")
fieldValue1879.setValue("l_calcaneus_posterior")

ProtoInstance1878.addFieldValue(fieldValue1879)
fieldValue1880 = x3d.fieldValue()
fieldValue1880.setName("translation")
fieldValue1880.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance1878.addFieldValue(fieldValue1880)

fieldValue1868.addChildren(ProtoInstance1878)

ProtoInstance1866.addFieldValue(fieldValue1868)

fieldValue1850.addChildren(ProtoInstance1866)
ProtoInstance1881 = x3d.ProtoInstance()
ProtoInstance1881.setName("Segment")
ProtoInstance1881.setDEF("hanim_l_calf")
fieldValue1882 = x3d.fieldValue()
fieldValue1882.setName("name")
fieldValue1882.setValue("l_calf")

ProtoInstance1881.addFieldValue(fieldValue1882)

fieldValue1850.addChildren(ProtoInstance1881)
ProtoInstance1883 = x3d.ProtoInstance()
ProtoInstance1883.setName("Segment")
ProtoInstance1883.setDEF("hanim_l_thigh")
fieldValue1884 = x3d.fieldValue()
fieldValue1884.setName("name")
fieldValue1884.setValue("l_thigh")

ProtoInstance1883.addFieldValue(fieldValue1884)
fieldValue1885 = x3d.fieldValue()
fieldValue1885.setName("children")
ProtoInstance1886 = x3d.ProtoInstance()
ProtoInstance1886.setName("Site")
ProtoInstance1886.setDEF("hanim_l_knee_crease")
fieldValue1887 = x3d.fieldValue()
fieldValue1887.setName("name")
fieldValue1887.setValue("l_knee_crease")

ProtoInstance1886.addFieldValue(fieldValue1887)
fieldValue1888 = x3d.fieldValue()
fieldValue1888.setName("translation")
fieldValue1888.setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757")

ProtoInstance1886.addFieldValue(fieldValue1888)

fieldValue1885.addChildren(ProtoInstance1886)
ProtoInstance1889 = x3d.ProtoInstance()
ProtoInstance1889.setName("Site")
ProtoInstance1889.setDEF("hanim_l_femoral_lateral_epicondyles")
fieldValue1890 = x3d.fieldValue()
fieldValue1890.setName("name")
fieldValue1890.setValue("l_femoral_lateral_epicondyles")

ProtoInstance1889.addFieldValue(fieldValue1890)
fieldValue1891 = x3d.fieldValue()
fieldValue1891.setName("translation")
fieldValue1891.setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746")

ProtoInstance1889.addFieldValue(fieldValue1891)

fieldValue1885.addChildren(ProtoInstance1889)
ProtoInstance1892 = x3d.ProtoInstance()
ProtoInstance1892.setName("Site")
ProtoInstance1892.setDEF("hanim_l_femoral_medial_epicondyles")
fieldValue1893 = x3d.fieldValue()
fieldValue1893.setName("name")
fieldValue1893.setValue("l_femoral_lateral_epicondyles")

ProtoInstance1892.addFieldValue(fieldValue1893)
fieldValue1894 = x3d.fieldValue()
fieldValue1894.setName("translation")
fieldValue1894.setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183")

ProtoInstance1892.addFieldValue(fieldValue1894)

fieldValue1885.addChildren(ProtoInstance1892)

ProtoInstance1883.addFieldValue(fieldValue1885)

fieldValue1850.addChildren(ProtoInstance1883)
ProtoInstance1895 = x3d.ProtoInstance()
ProtoInstance1895.setName("Segment")
ProtoInstance1895.setDEF("hanim_r_middistal")
fieldValue1896 = x3d.fieldValue()
fieldValue1896.setName("name")
fieldValue1896.setValue("r_middistal")

ProtoInstance1895.addFieldValue(fieldValue1896)
fieldValue1897 = x3d.fieldValue()
fieldValue1897.setName("children")
ProtoInstance1898 = x3d.ProtoInstance()
ProtoInstance1898.setName("Site")
ProtoInstance1898.setDEF("hanim_r_middistal_tip")
fieldValue1899 = x3d.fieldValue()
fieldValue1899.setName("name")
fieldValue1899.setValue("r_middistal_tip")

ProtoInstance1898.addFieldValue(fieldValue1899)
fieldValue1900 = x3d.fieldValue()
fieldValue1900.setName("translation")
fieldValue1900.setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")

ProtoInstance1898.addFieldValue(fieldValue1900)

fieldValue1897.addChildren(ProtoInstance1898)
ProtoInstance1901 = x3d.ProtoInstance()
ProtoInstance1901.setName("Site")
ProtoInstance1901.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue1902 = x3d.fieldValue()
fieldValue1902.setName("name")
fieldValue1902.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance1901.addFieldValue(fieldValue1902)
fieldValue1903 = x3d.fieldValue()
fieldValue1903.setName("translation")
fieldValue1903.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance1901.addFieldValue(fieldValue1903)

fieldValue1897.addChildren(ProtoInstance1901)
ProtoInstance1904 = x3d.ProtoInstance()
ProtoInstance1904.setName("Site")
ProtoInstance1904.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue1905 = x3d.fieldValue()
fieldValue1905.setName("name")
fieldValue1905.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance1904.addFieldValue(fieldValue1905)
fieldValue1906 = x3d.fieldValue()
fieldValue1906.setName("translation")
fieldValue1906.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance1904.addFieldValue(fieldValue1906)

fieldValue1897.addChildren(ProtoInstance1904)
ProtoInstance1907 = x3d.ProtoInstance()
ProtoInstance1907.setName("Site")
ProtoInstance1907.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue1908 = x3d.fieldValue()
fieldValue1908.setName("name")
fieldValue1908.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance1907.addFieldValue(fieldValue1908)
fieldValue1909 = x3d.fieldValue()
fieldValue1909.setName("translation")
fieldValue1909.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance1907.addFieldValue(fieldValue1909)

fieldValue1897.addChildren(ProtoInstance1907)

ProtoInstance1895.addFieldValue(fieldValue1897)

fieldValue1850.addChildren(ProtoInstance1895)
ProtoInstance1910 = x3d.ProtoInstance()
ProtoInstance1910.setName("Segment")
ProtoInstance1910.setDEF("hanim_r_hindfoot")
fieldValue1911 = x3d.fieldValue()
fieldValue1911.setName("name")
fieldValue1911.setValue("r_hindfoot")

ProtoInstance1910.addFieldValue(fieldValue1911)
fieldValue1912 = x3d.fieldValue()
fieldValue1912.setName("children")
ProtoInstance1913 = x3d.ProtoInstance()
ProtoInstance1913.setName("Site")
ProtoInstance1913.setDEF("hanim_r_lateral_malleolus")
fieldValue1914 = x3d.fieldValue()
fieldValue1914.setName("name")
fieldValue1914.setValue("r_lateral_malleolus")

ProtoInstance1913.addFieldValue(fieldValue1914)
fieldValue1915 = x3d.fieldValue()
fieldValue1915.setName("translation")
fieldValue1915.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance1913.addFieldValue(fieldValue1915)

fieldValue1912.addChildren(ProtoInstance1913)
ProtoInstance1916 = x3d.ProtoInstance()
ProtoInstance1916.setName("Site")
ProtoInstance1916.setDEF("hanim_r_medial_malleolus")
fieldValue1917 = x3d.fieldValue()
fieldValue1917.setName("name")
fieldValue1917.setValue("r_medial_malleolus")

ProtoInstance1916.addFieldValue(fieldValue1917)
fieldValue1918 = x3d.fieldValue()
fieldValue1918.setName("translation")
fieldValue1918.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance1916.addFieldValue(fieldValue1918)

fieldValue1912.addChildren(ProtoInstance1916)
ProtoInstance1919 = x3d.ProtoInstance()
ProtoInstance1919.setName("Site")
ProtoInstance1919.setDEF("hanim_r_sphyrion")
fieldValue1920 = x3d.fieldValue()
fieldValue1920.setName("name")
fieldValue1920.setValue("r_sphyrion")

ProtoInstance1919.addFieldValue(fieldValue1920)
fieldValue1921 = x3d.fieldValue()
fieldValue1921.setName("translation")
fieldValue1921.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance1919.addFieldValue(fieldValue1921)

fieldValue1912.addChildren(ProtoInstance1919)
ProtoInstance1922 = x3d.ProtoInstance()
ProtoInstance1922.setName("Site")
ProtoInstance1922.setDEF("hanim_r_calcaneus_posterior")
fieldValue1923 = x3d.fieldValue()
fieldValue1923.setName("name")
fieldValue1923.setValue("r_calcaneus_posterior")

ProtoInstance1922.addFieldValue(fieldValue1923)
fieldValue1924 = x3d.fieldValue()
fieldValue1924.setName("translation")
fieldValue1924.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance1922.addFieldValue(fieldValue1924)

fieldValue1912.addChildren(ProtoInstance1922)

ProtoInstance1910.addFieldValue(fieldValue1912)

fieldValue1850.addChildren(ProtoInstance1910)
ProtoInstance1925 = x3d.ProtoInstance()
ProtoInstance1925.setName("Segment")
ProtoInstance1925.setDEF("hanim_r_calf")
fieldValue1926 = x3d.fieldValue()
fieldValue1926.setName("name")
fieldValue1926.setValue("r_calf")

ProtoInstance1925.addFieldValue(fieldValue1926)

fieldValue1850.addChildren(ProtoInstance1925)
ProtoInstance1927 = x3d.ProtoInstance()
ProtoInstance1927.setName("Segment")
ProtoInstance1927.setDEF("hanim_r_thigh")
fieldValue1928 = x3d.fieldValue()
fieldValue1928.setName("name")
fieldValue1928.setValue("r_thigh")

ProtoInstance1927.addFieldValue(fieldValue1928)
fieldValue1929 = x3d.fieldValue()
fieldValue1929.setName("children")
ProtoInstance1930 = x3d.ProtoInstance()
ProtoInstance1930.setName("Site")
ProtoInstance1930.setDEF("hanim_r_knee_crease")
fieldValue1931 = x3d.fieldValue()
fieldValue1931.setName("name")
fieldValue1931.setValue("r_knee_crease")

ProtoInstance1930.addFieldValue(fieldValue1931)
fieldValue1932 = x3d.fieldValue()
fieldValue1932.setName("translation")
fieldValue1932.setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")

ProtoInstance1930.addFieldValue(fieldValue1932)

fieldValue1929.addChildren(ProtoInstance1930)
ProtoInstance1933 = x3d.ProtoInstance()
ProtoInstance1933.setName("Site")
ProtoInstance1933.setDEF("hanim_r_femoral_lateral_epicondyles")
fieldValue1934 = x3d.fieldValue()
fieldValue1934.setName("name")
fieldValue1934.setValue("r_femoral_lateral_epicondyles")

ProtoInstance1933.addFieldValue(fieldValue1934)
fieldValue1935 = x3d.fieldValue()
fieldValue1935.setName("translation")
fieldValue1935.setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052")

ProtoInstance1933.addFieldValue(fieldValue1935)

fieldValue1929.addChildren(ProtoInstance1933)
ProtoInstance1936 = x3d.ProtoInstance()
ProtoInstance1936.setName("Site")
ProtoInstance1936.setDEF("hanim_r_femoral_medial_epicondyles")
fieldValue1937 = x3d.fieldValue()
fieldValue1937.setName("name")
fieldValue1937.setValue("r_femoral_lateral_epicondyles")

ProtoInstance1936.addFieldValue(fieldValue1937)
fieldValue1938 = x3d.fieldValue()
fieldValue1938.setName("translation")
fieldValue1938.setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821")

ProtoInstance1936.addFieldValue(fieldValue1938)

fieldValue1929.addChildren(ProtoInstance1936)

ProtoInstance1927.addFieldValue(fieldValue1929)

fieldValue1850.addChildren(ProtoInstance1927)
ProtoInstance1939 = x3d.ProtoInstance()
ProtoInstance1939.setName("Segment")
ProtoInstance1939.setDEF("hanim_pelvis")
fieldValue1940 = x3d.fieldValue()
fieldValue1940.setName("name")
fieldValue1940.setValue("pelvis")

ProtoInstance1939.addFieldValue(fieldValue1940)

fieldValue1850.addChildren(ProtoInstance1939)
ProtoInstance1941 = x3d.ProtoInstance()
ProtoInstance1941.setName("Segment")
ProtoInstance1941.setDEF("hanim_skull")
fieldValue1942 = x3d.fieldValue()
fieldValue1942.setName("name")
fieldValue1942.setValue("skull")

ProtoInstance1941.addFieldValue(fieldValue1942)
fieldValue1943 = x3d.fieldValue()
fieldValue1943.setName("children")
ProtoInstance1944 = x3d.ProtoInstance()
ProtoInstance1944.setName("Site")
ProtoInstance1944.setDEF("hanim_skull_tip")
fieldValue1945 = x3d.fieldValue()
fieldValue1945.setName("name")
fieldValue1945.setValue("skull_tip")

ProtoInstance1944.addFieldValue(fieldValue1945)
fieldValue1946 = x3d.fieldValue()
fieldValue1946.setName("translation")
fieldValue1946.setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678")

ProtoInstance1944.addFieldValue(fieldValue1946)

fieldValue1943.addChildren(ProtoInstance1944)
ProtoInstance1947 = x3d.ProtoInstance()
ProtoInstance1947.setName("Site")
ProtoInstance1947.setDEF("hanim_sellion")
fieldValue1948 = x3d.fieldValue()
fieldValue1948.setName("name")
fieldValue1948.setValue("sellion")

ProtoInstance1947.addFieldValue(fieldValue1948)
fieldValue1949 = x3d.fieldValue()
fieldValue1949.setName("translation")
fieldValue1949.setValue("0.005799999926239252 1.631600022315979 0.0851999968290329")

ProtoInstance1947.addFieldValue(fieldValue1949)

fieldValue1943.addChildren(ProtoInstance1947)
ProtoInstance1950 = x3d.ProtoInstance()
ProtoInstance1950.setName("Site")
ProtoInstance1950.setDEF("hanim_r_infraorbitale")
fieldValue1951 = x3d.fieldValue()
fieldValue1951.setName("name")
fieldValue1951.setValue("r_infraorbitale")

ProtoInstance1950.addFieldValue(fieldValue1951)
fieldValue1952 = x3d.fieldValue()
fieldValue1952.setName("translation")
fieldValue1952.setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547")

ProtoInstance1950.addFieldValue(fieldValue1952)

fieldValue1943.addChildren(ProtoInstance1950)
ProtoInstance1953 = x3d.ProtoInstance()
ProtoInstance1953.setName("Site")
ProtoInstance1953.setDEF("hanim_l_infraorbitale")
fieldValue1954 = x3d.fieldValue()
fieldValue1954.setName("name")
fieldValue1954.setValue("l_infraorbitale")

ProtoInstance1953.addFieldValue(fieldValue1954)
fieldValue1955 = x3d.fieldValue()
fieldValue1955.setName("translation")
fieldValue1955.setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547")

ProtoInstance1953.addFieldValue(fieldValue1955)

fieldValue1943.addChildren(ProtoInstance1953)
ProtoInstance1956 = x3d.ProtoInstance()
ProtoInstance1956.setName("Site")
ProtoInstance1956.setDEF("hanim_supramenton")
fieldValue1957 = x3d.fieldValue()
fieldValue1957.setName("name")
fieldValue1957.setValue("supramenton")

ProtoInstance1956.addFieldValue(fieldValue1957)
fieldValue1958 = x3d.fieldValue()
fieldValue1958.setName("translation")
fieldValue1958.setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962")

ProtoInstance1956.addFieldValue(fieldValue1958)

fieldValue1943.addChildren(ProtoInstance1956)
ProtoInstance1959 = x3d.ProtoInstance()
ProtoInstance1959.setName("Site")
ProtoInstance1959.setDEF("hanim_r_tragion")
fieldValue1960 = x3d.fieldValue()
fieldValue1960.setName("name")
fieldValue1960.setValue("r_tragion")

ProtoInstance1959.addFieldValue(fieldValue1960)
fieldValue1961 = x3d.fieldValue()
fieldValue1961.setName("translation")
fieldValue1961.setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642")

ProtoInstance1959.addFieldValue(fieldValue1961)

fieldValue1943.addChildren(ProtoInstance1959)
ProtoInstance1962 = x3d.ProtoInstance()
ProtoInstance1962.setName("Site")
ProtoInstance1962.setDEF("hanim_r_gonion")
fieldValue1963 = x3d.fieldValue()
fieldValue1963.setName("name")
fieldValue1963.setValue("r_gonion")

ProtoInstance1962.addFieldValue(fieldValue1963)
fieldValue1964 = x3d.fieldValue()
fieldValue1964.setName("translation")
fieldValue1964.setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176")

ProtoInstance1962.addFieldValue(fieldValue1964)

fieldValue1943.addChildren(ProtoInstance1962)
ProtoInstance1965 = x3d.ProtoInstance()
ProtoInstance1965.setName("Site")
ProtoInstance1965.setDEF("hanim_l_tragion")
fieldValue1966 = x3d.fieldValue()
fieldValue1966.setName("name")
fieldValue1966.setValue("l_tragion")

ProtoInstance1965.addFieldValue(fieldValue1966)
fieldValue1967 = x3d.fieldValue()
fieldValue1967.setName("translation")
fieldValue1967.setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874")

ProtoInstance1965.addFieldValue(fieldValue1967)

fieldValue1943.addChildren(ProtoInstance1965)
ProtoInstance1968 = x3d.ProtoInstance()
ProtoInstance1968.setName("Site")
ProtoInstance1968.setDEF("hanim_l_gonion")
fieldValue1969 = x3d.fieldValue()
fieldValue1969.setName("name")
fieldValue1969.setValue("l_gonion")

ProtoInstance1968.addFieldValue(fieldValue1969)
fieldValue1970 = x3d.fieldValue()
fieldValue1970.setName("translation")
fieldValue1970.setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066")

ProtoInstance1968.addFieldValue(fieldValue1970)

fieldValue1943.addChildren(ProtoInstance1968)
ProtoInstance1971 = x3d.ProtoInstance()
ProtoInstance1971.setName("Site")
ProtoInstance1971.setDEF("hanim_nuchale")
fieldValue1972 = x3d.fieldValue()
fieldValue1972.setName("name")
fieldValue1972.setValue("nuchale")

ProtoInstance1971.addFieldValue(fieldValue1972)
fieldValue1973 = x3d.fieldValue()
fieldValue1973.setName("translation")
fieldValue1973.setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")

ProtoInstance1971.addFieldValue(fieldValue1973)

fieldValue1943.addChildren(ProtoInstance1971)

ProtoInstance1941.addFieldValue(fieldValue1943)

fieldValue1850.addChildren(ProtoInstance1941)
ProtoInstance1974 = x3d.ProtoInstance()
ProtoInstance1974.setName("Segment")
ProtoInstance1974.setDEF("hanim_l_hand")
fieldValue1975 = x3d.fieldValue()
fieldValue1975.setName("name")
fieldValue1975.setValue("l_hand")

ProtoInstance1974.addFieldValue(fieldValue1975)
fieldValue1976 = x3d.fieldValue()
fieldValue1976.setName("children")
ProtoInstance1977 = x3d.ProtoInstance()
ProtoInstance1977.setName("Site")
ProtoInstance1977.setDEF("hanim_l_hand_tip")
fieldValue1978 = x3d.fieldValue()
fieldValue1978.setName("name")
fieldValue1978.setValue("l_hand_tip")

ProtoInstance1977.addFieldValue(fieldValue1978)
fieldValue1979 = x3d.fieldValue()
fieldValue1979.setName("translation")
fieldValue1979.setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205")

ProtoInstance1977.addFieldValue(fieldValue1979)

fieldValue1976.addChildren(ProtoInstance1977)
ProtoInstance1980 = x3d.ProtoInstance()
ProtoInstance1980.setName("Site")
ProtoInstance1980.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue1981 = x3d.fieldValue()
fieldValue1981.setName("name")
fieldValue1981.setValue("l_metacarpal_phalanx_2")

ProtoInstance1980.addFieldValue(fieldValue1981)
fieldValue1982 = x3d.fieldValue()
fieldValue1982.setName("translation")
fieldValue1982.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance1980.addFieldValue(fieldValue1982)

fieldValue1976.addChildren(ProtoInstance1980)
ProtoInstance1983 = x3d.ProtoInstance()
ProtoInstance1983.setName("Site")
ProtoInstance1983.setDEF("hanim_l_dactylion")
fieldValue1984 = x3d.fieldValue()
fieldValue1984.setName("name")
fieldValue1984.setValue("l_dactylion")

ProtoInstance1983.addFieldValue(fieldValue1984)
fieldValue1985 = x3d.fieldValue()
fieldValue1985.setName("translation")
fieldValue1985.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance1983.addFieldValue(fieldValue1985)

fieldValue1976.addChildren(ProtoInstance1983)
ProtoInstance1986 = x3d.ProtoInstance()
ProtoInstance1986.setName("Site")
ProtoInstance1986.setDEF("hanim_l_ulnar_styloid")
fieldValue1987 = x3d.fieldValue()
fieldValue1987.setName("name")
fieldValue1987.setValue("l_ulnar_styloid")

ProtoInstance1986.addFieldValue(fieldValue1987)
fieldValue1988 = x3d.fieldValue()
fieldValue1988.setName("translation")
fieldValue1988.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance1986.addFieldValue(fieldValue1988)

fieldValue1976.addChildren(ProtoInstance1986)
ProtoInstance1989 = x3d.ProtoInstance()
ProtoInstance1989.setName("Site")
ProtoInstance1989.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue1990 = x3d.fieldValue()
fieldValue1990.setName("name")
fieldValue1990.setValue("l_metacarpal_phalanx_5")

ProtoInstance1989.addFieldValue(fieldValue1990)
fieldValue1991 = x3d.fieldValue()
fieldValue1991.setName("translation")
fieldValue1991.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance1989.addFieldValue(fieldValue1991)

fieldValue1976.addChildren(ProtoInstance1989)

ProtoInstance1974.addFieldValue(fieldValue1976)

fieldValue1850.addChildren(ProtoInstance1974)
ProtoInstance1992 = x3d.ProtoInstance()
ProtoInstance1992.setName("Segment")
ProtoInstance1992.setDEF("hanim_l_forearm")
fieldValue1993 = x3d.fieldValue()
fieldValue1993.setName("name")
fieldValue1993.setValue("l_forearm")

ProtoInstance1992.addFieldValue(fieldValue1993)
fieldValue1994 = x3d.fieldValue()
fieldValue1994.setName("children")
ProtoInstance1995 = x3d.ProtoInstance()
ProtoInstance1995.setName("Site")
ProtoInstance1995.setDEF("hanim_l_radial_styloid")
fieldValue1996 = x3d.fieldValue()
fieldValue1996.setName("name")
fieldValue1996.setValue("l_radial_styloid")

ProtoInstance1995.addFieldValue(fieldValue1996)
fieldValue1997 = x3d.fieldValue()
fieldValue1997.setName("translation")
fieldValue1997.setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691")

ProtoInstance1995.addFieldValue(fieldValue1997)

fieldValue1994.addChildren(ProtoInstance1995)
ProtoInstance1998 = x3d.ProtoInstance()
ProtoInstance1998.setName("Site")
ProtoInstance1998.setDEF("hanim_l_olecranon")
fieldValue1999 = x3d.fieldValue()
fieldValue1999.setName("name")
fieldValue1999.setValue("l_olecranon")

ProtoInstance1998.addFieldValue(fieldValue1999)
fieldValue2000 = x3d.fieldValue()
fieldValue2000.setName("translation")
fieldValue2000.setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")

ProtoInstance1998.addFieldValue(fieldValue2000)

fieldValue1994.addChildren(ProtoInstance1998)
ProtoInstance2001 = x3d.ProtoInstance()
ProtoInstance2001.setName("Site")
ProtoInstance2001.setDEF("hanim_l_humeral_medial_epicondyles")
fieldValue2002 = x3d.fieldValue()
fieldValue2002.setName("name")
fieldValue2002.setValue("l_humeral_medial_epicondyles")

ProtoInstance2001.addFieldValue(fieldValue2002)
fieldValue2003 = x3d.fieldValue()
fieldValue2003.setName("translation")
fieldValue2003.setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661")

ProtoInstance2001.addFieldValue(fieldValue2003)

fieldValue1994.addChildren(ProtoInstance2001)
ProtoInstance2004 = x3d.ProtoInstance()
ProtoInstance2004.setName("Site")
ProtoInstance2004.setDEF("hanim_l_radiale")
fieldValue2005 = x3d.fieldValue()
fieldValue2005.setName("name")
fieldValue2005.setValue("l_radiale")

ProtoInstance2004.addFieldValue(fieldValue2005)
fieldValue2006 = x3d.fieldValue()
fieldValue2006.setName("translation")
fieldValue2006.setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268")

ProtoInstance2004.addFieldValue(fieldValue2006)

fieldValue1994.addChildren(ProtoInstance2004)

ProtoInstance1992.addFieldValue(fieldValue1994)

fieldValue1850.addChildren(ProtoInstance1992)
ProtoInstance2007 = x3d.ProtoInstance()
ProtoInstance2007.setName("Segment")
ProtoInstance2007.setDEF("hanim_l_upperarm")
fieldValue2008 = x3d.fieldValue()
fieldValue2008.setName("name")
fieldValue2008.setValue("l_upperarm")

ProtoInstance2007.addFieldValue(fieldValue2008)
fieldValue2009 = x3d.fieldValue()
fieldValue2009.setName("children")
ProtoInstance2010 = x3d.ProtoInstance()
ProtoInstance2010.setName("Site")
ProtoInstance2010.setDEF("hanim_l_humeral_lateral_epicondyles")
fieldValue2011 = x3d.fieldValue()
fieldValue2011.setName("name")
fieldValue2011.setValue("l_humeral_lateral_epicondyles")

ProtoInstance2010.addFieldValue(fieldValue2011)
fieldValue2012 = x3d.fieldValue()
fieldValue2012.setName("translation")
fieldValue2012.setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355")

ProtoInstance2010.addFieldValue(fieldValue2012)

fieldValue2009.addChildren(ProtoInstance2010)

ProtoInstance2007.addFieldValue(fieldValue2009)

fieldValue1850.addChildren(ProtoInstance2007)
ProtoInstance2013 = x3d.ProtoInstance()
ProtoInstance2013.setName("Segment")
ProtoInstance2013.setDEF("hanim_r_hand")
fieldValue2014 = x3d.fieldValue()
fieldValue2014.setName("name")
fieldValue2014.setValue("r_hand")

ProtoInstance2013.addFieldValue(fieldValue2014)
fieldValue2015 = x3d.fieldValue()
fieldValue2015.setName("children")
ProtoInstance2016 = x3d.ProtoInstance()
ProtoInstance2016.setName("Site")
ProtoInstance2016.setDEF("hanim_r_hand_tip")
fieldValue2017 = x3d.fieldValue()
fieldValue2017.setName("name")
fieldValue2017.setValue("r_hand_tip")

ProtoInstance2016.addFieldValue(fieldValue2017)
fieldValue2018 = x3d.fieldValue()
fieldValue2018.setName("translation")
fieldValue2018.setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")

ProtoInstance2016.addFieldValue(fieldValue2018)

fieldValue2015.addChildren(ProtoInstance2016)
ProtoInstance2019 = x3d.ProtoInstance()
ProtoInstance2019.setName("Site")
ProtoInstance2019.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue2020 = x3d.fieldValue()
fieldValue2020.setName("name")
fieldValue2020.setValue("r_metacarpal_phalanx_2")

ProtoInstance2019.addFieldValue(fieldValue2020)
fieldValue2021 = x3d.fieldValue()
fieldValue2021.setName("translation")
fieldValue2021.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance2019.addFieldValue(fieldValue2021)

fieldValue2015.addChildren(ProtoInstance2019)
ProtoInstance2022 = x3d.ProtoInstance()
ProtoInstance2022.setName("Site")
ProtoInstance2022.setDEF("hanim_r_dactylion")
fieldValue2023 = x3d.fieldValue()
fieldValue2023.setName("name")
fieldValue2023.setValue("r_dactylion")

ProtoInstance2022.addFieldValue(fieldValue2023)
fieldValue2024 = x3d.fieldValue()
fieldValue2024.setName("translation")
fieldValue2024.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance2022.addFieldValue(fieldValue2024)

fieldValue2015.addChildren(ProtoInstance2022)
ProtoInstance2025 = x3d.ProtoInstance()
ProtoInstance2025.setName("Site")
ProtoInstance2025.setDEF("hanim_r_ulnar_styloid")
fieldValue2026 = x3d.fieldValue()
fieldValue2026.setName("name")
fieldValue2026.setValue("r_ulnar_styloid")

ProtoInstance2025.addFieldValue(fieldValue2026)
fieldValue2027 = x3d.fieldValue()
fieldValue2027.setName("translation")
fieldValue2027.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance2025.addFieldValue(fieldValue2027)

fieldValue2015.addChildren(ProtoInstance2025)
ProtoInstance2028 = x3d.ProtoInstance()
ProtoInstance2028.setName("Site")
ProtoInstance2028.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue2029 = x3d.fieldValue()
fieldValue2029.setName("name")
fieldValue2029.setValue("r_metacarpal_phalanx_5")

ProtoInstance2028.addFieldValue(fieldValue2029)
fieldValue2030 = x3d.fieldValue()
fieldValue2030.setName("translation")
fieldValue2030.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance2028.addFieldValue(fieldValue2030)

fieldValue2015.addChildren(ProtoInstance2028)

ProtoInstance2013.addFieldValue(fieldValue2015)

fieldValue1850.addChildren(ProtoInstance2013)
ProtoInstance2031 = x3d.ProtoInstance()
ProtoInstance2031.setName("Segment")
ProtoInstance2031.setDEF("hanim_r_forearm")
fieldValue2032 = x3d.fieldValue()
fieldValue2032.setName("name")
fieldValue2032.setValue("r_forearm")

ProtoInstance2031.addFieldValue(fieldValue2032)
fieldValue2033 = x3d.fieldValue()
fieldValue2033.setName("children")
ProtoInstance2034 = x3d.ProtoInstance()
ProtoInstance2034.setName("Site")
ProtoInstance2034.setDEF("hanim_r_radial_styloid")
fieldValue2035 = x3d.fieldValue()
fieldValue2035.setName("name")
fieldValue2035.setValue("r_radial_styloid")

ProtoInstance2034.addFieldValue(fieldValue2035)
fieldValue2036 = x3d.fieldValue()
fieldValue2036.setName("translation")
fieldValue2036.setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236")

ProtoInstance2034.addFieldValue(fieldValue2036)

fieldValue2033.addChildren(ProtoInstance2034)
ProtoInstance2037 = x3d.ProtoInstance()
ProtoInstance2037.setName("Site")
ProtoInstance2037.setDEF("hanim_r_olecranon")
fieldValue2038 = x3d.fieldValue()
fieldValue2038.setName("name")
fieldValue2038.setValue("r_olecranon")

ProtoInstance2037.addFieldValue(fieldValue2038)
fieldValue2039 = x3d.fieldValue()
fieldValue2039.setName("translation")
fieldValue2039.setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")

ProtoInstance2037.addFieldValue(fieldValue2039)

fieldValue2033.addChildren(ProtoInstance2037)
ProtoInstance2040 = x3d.ProtoInstance()
ProtoInstance2040.setName("Site")
ProtoInstance2040.setDEF("hanim_r_humeral_medial_epicondyles")
fieldValue2041 = x3d.fieldValue()
fieldValue2041.setName("name")
fieldValue2041.setValue("r_humeral_medial_epicondyles")

ProtoInstance2040.addFieldValue(fieldValue2041)
fieldValue2042 = x3d.fieldValue()
fieldValue2042.setName("translation")
fieldValue2042.setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")

ProtoInstance2040.addFieldValue(fieldValue2042)

fieldValue2033.addChildren(ProtoInstance2040)
ProtoInstance2043 = x3d.ProtoInstance()
ProtoInstance2043.setName("Site")
ProtoInstance2043.setDEF("hanim_r_radiale")
fieldValue2044 = x3d.fieldValue()
fieldValue2044.setName("name")
fieldValue2044.setValue("r_radiale")

ProtoInstance2043.addFieldValue(fieldValue2044)
fieldValue2045 = x3d.fieldValue()
fieldValue2045.setName("translation")
fieldValue2045.setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")

ProtoInstance2043.addFieldValue(fieldValue2045)

fieldValue2033.addChildren(ProtoInstance2043)

ProtoInstance2031.addFieldValue(fieldValue2033)

fieldValue1850.addChildren(ProtoInstance2031)
ProtoInstance2046 = x3d.ProtoInstance()
ProtoInstance2046.setName("Segment")
ProtoInstance2046.setDEF("hanim_r_upperarm")
fieldValue2047 = x3d.fieldValue()
fieldValue2047.setName("name")
fieldValue2047.setValue("r_upperarm")

ProtoInstance2046.addFieldValue(fieldValue2047)
fieldValue2048 = x3d.fieldValue()
fieldValue2048.setName("children")
ProtoInstance2049 = x3d.ProtoInstance()
ProtoInstance2049.setName("Site")
ProtoInstance2049.setDEF("hanim_r_humeral_lateral_epicondyles")
fieldValue2050 = x3d.fieldValue()
fieldValue2050.setName("name")
fieldValue2050.setValue("r_humeral_lateral_epicondyles")

ProtoInstance2049.addFieldValue(fieldValue2050)
fieldValue2051 = x3d.fieldValue()
fieldValue2051.setName("translation")
fieldValue2051.setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")

ProtoInstance2049.addFieldValue(fieldValue2051)

fieldValue2048.addChildren(ProtoInstance2049)

ProtoInstance2046.addFieldValue(fieldValue2048)

fieldValue1850.addChildren(ProtoInstance2046)
ProtoInstance2052 = x3d.ProtoInstance()
ProtoInstance2052.setName("Segment")
ProtoInstance2052.setDEF("hanim_l5")
fieldValue2053 = x3d.fieldValue()
fieldValue2053.setName("name")
fieldValue2053.setValue("l5")

ProtoInstance2052.addFieldValue(fieldValue2053)
fieldValue2054 = x3d.fieldValue()
fieldValue2054.setName("children")
ProtoInstance2055 = x3d.ProtoInstance()
ProtoInstance2055.setName("Site")
ProtoInstance2055.setDEF("hanim_r_clavicale")
fieldValue2056 = x3d.fieldValue()
fieldValue2056.setName("name")
fieldValue2056.setValue("r_clavicale")

ProtoInstance2055.addFieldValue(fieldValue2056)
fieldValue2057 = x3d.fieldValue()
fieldValue2057.setName("translation")
fieldValue2057.setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033")

ProtoInstance2055.addFieldValue(fieldValue2057)

fieldValue2054.addChildren(ProtoInstance2055)
ProtoInstance2058 = x3d.ProtoInstance()
ProtoInstance2058.setName("Site")
ProtoInstance2058.setDEF("hanim_suprasternale")
fieldValue2059 = x3d.fieldValue()
fieldValue2059.setName("name")
fieldValue2059.setValue("suprasternale")

ProtoInstance2058.addFieldValue(fieldValue2059)
fieldValue2060 = x3d.fieldValue()
fieldValue2060.setName("translation")
fieldValue2060.setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869")

ProtoInstance2058.addFieldValue(fieldValue2060)

fieldValue2054.addChildren(ProtoInstance2058)
ProtoInstance2061 = x3d.ProtoInstance()
ProtoInstance2061.setName("Site")
ProtoInstance2061.setDEF("hanim_l_clavicale")
fieldValue2062 = x3d.fieldValue()
fieldValue2062.setName("name")
fieldValue2062.setValue("l_clavicale")

ProtoInstance2061.addFieldValue(fieldValue2062)
fieldValue2063 = x3d.fieldValue()
fieldValue2063.setName("translation")
fieldValue2063.setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754")

ProtoInstance2061.addFieldValue(fieldValue2063)

fieldValue2054.addChildren(ProtoInstance2061)
ProtoInstance2064 = x3d.ProtoInstance()
ProtoInstance2064.setName("Site")
ProtoInstance2064.setDEF("hanim_r_thelion")
fieldValue2065 = x3d.fieldValue()
fieldValue2065.setName("name")
fieldValue2065.setValue("r_thelion")

ProtoInstance2064.addFieldValue(fieldValue2065)
fieldValue2066 = x3d.fieldValue()
fieldValue2066.setName("translation")
fieldValue2066.setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911")

ProtoInstance2064.addFieldValue(fieldValue2066)

fieldValue2054.addChildren(ProtoInstance2064)
ProtoInstance2067 = x3d.ProtoInstance()
ProtoInstance2067.setName("Site")
ProtoInstance2067.setDEF("hanim_l_thelion")
fieldValue2068 = x3d.fieldValue()
fieldValue2068.setName("name")
fieldValue2068.setValue("l_thelion")

ProtoInstance2067.addFieldValue(fieldValue2068)
fieldValue2069 = x3d.fieldValue()
fieldValue2069.setName("translation")
fieldValue2069.setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689")

ProtoInstance2067.addFieldValue(fieldValue2069)

fieldValue2054.addChildren(ProtoInstance2067)
ProtoInstance2070 = x3d.ProtoInstance()
ProtoInstance2070.setName("Site")
ProtoInstance2070.setDEF("hanim_substernale")
fieldValue2071 = x3d.fieldValue()
fieldValue2071.setName("name")
fieldValue2071.setValue("substernale")

ProtoInstance2070.addFieldValue(fieldValue2071)
fieldValue2072 = x3d.fieldValue()
fieldValue2072.setName("translation")
fieldValue2072.setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683")

ProtoInstance2070.addFieldValue(fieldValue2072)

fieldValue2054.addChildren(ProtoInstance2070)
ProtoInstance2073 = x3d.ProtoInstance()
ProtoInstance2073.setName("Site")
ProtoInstance2073.setDEF("hanim_r_rib10")
fieldValue2074 = x3d.fieldValue()
fieldValue2074.setName("name")
fieldValue2074.setValue("r_rib10")

ProtoInstance2073.addFieldValue(fieldValue2074)
fieldValue2075 = x3d.fieldValue()
fieldValue2075.setName("translation")
fieldValue2075.setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432")

ProtoInstance2073.addFieldValue(fieldValue2075)

fieldValue2054.addChildren(ProtoInstance2073)
ProtoInstance2076 = x3d.ProtoInstance()
ProtoInstance2076.setName("Site")
ProtoInstance2076.setDEF("hanim_l_rib10")
fieldValue2077 = x3d.fieldValue()
fieldValue2077.setName("name")
fieldValue2077.setValue("l_rib10")

ProtoInstance2076.addFieldValue(fieldValue2077)
fieldValue2078 = x3d.fieldValue()
fieldValue2078.setName("translation")
fieldValue2078.setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202")

ProtoInstance2076.addFieldValue(fieldValue2078)

fieldValue2054.addChildren(ProtoInstance2076)
ProtoInstance2079 = x3d.ProtoInstance()
ProtoInstance2079.setName("Site")
ProtoInstance2079.setDEF("hanim_cervicale")
fieldValue2080 = x3d.fieldValue()
fieldValue2080.setName("name")
fieldValue2080.setValue("cervicale")

ProtoInstance2079.addFieldValue(fieldValue2080)
fieldValue2081 = x3d.fieldValue()
fieldValue2081.setName("translation")
fieldValue2081.setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754")

ProtoInstance2079.addFieldValue(fieldValue2081)

fieldValue2054.addChildren(ProtoInstance2079)
ProtoInstance2082 = x3d.ProtoInstance()
ProtoInstance2082.setName("Site")
ProtoInstance2082.setDEF("hanim_spine_2_lower_back")
fieldValue2083 = x3d.fieldValue()
fieldValue2083.setName("name")
fieldValue2083.setValue("spine_2_lower_back")

ProtoInstance2082.addFieldValue(fieldValue2083)
fieldValue2084 = x3d.fieldValue()
fieldValue2084.setName("translation")
fieldValue2084.setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661")

ProtoInstance2082.addFieldValue(fieldValue2084)

fieldValue2054.addChildren(ProtoInstance2082)
ProtoInstance2085 = x3d.ProtoInstance()
ProtoInstance2085.setName("Site")
ProtoInstance2085.setDEF("hanim_waist_preferred_posterior")
fieldValue2086 = x3d.fieldValue()
fieldValue2086.setName("name")
fieldValue2086.setValue("waist_preferred_posterior")

ProtoInstance2085.addFieldValue(fieldValue2086)
fieldValue2087 = x3d.fieldValue()
fieldValue2087.setName("translation")
fieldValue2087.setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754")

ProtoInstance2085.addFieldValue(fieldValue2087)

fieldValue2054.addChildren(ProtoInstance2085)
ProtoInstance2088 = x3d.ProtoInstance()
ProtoInstance2088.setName("Site")
ProtoInstance2088.setDEF("hanim_r_acromion")
fieldValue2089 = x3d.fieldValue()
fieldValue2089.setName("name")
fieldValue2089.setValue("r_acromion")

ProtoInstance2088.addFieldValue(fieldValue2089)
fieldValue2090 = x3d.fieldValue()
fieldValue2090.setName("translation")
fieldValue2090.setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541")

ProtoInstance2088.addFieldValue(fieldValue2090)

fieldValue2054.addChildren(ProtoInstance2088)
ProtoInstance2091 = x3d.ProtoInstance()
ProtoInstance2091.setName("Site")
ProtoInstance2091.setDEF("hanim_r_axilla_proximal")
fieldValue2092 = x3d.fieldValue()
fieldValue2092.setName("name")
fieldValue2092.setValue("r_axilla_proximal")

ProtoInstance2091.addFieldValue(fieldValue2092)
fieldValue2093 = x3d.fieldValue()
fieldValue2093.setName("translation")
fieldValue2093.setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438")

ProtoInstance2091.addFieldValue(fieldValue2093)

fieldValue2054.addChildren(ProtoInstance2091)
ProtoInstance2094 = x3d.ProtoInstance()
ProtoInstance2094.setName("Site")
ProtoInstance2094.setDEF("hanim_r_axilla_distal")
fieldValue2095 = x3d.fieldValue()
fieldValue2095.setName("name")
fieldValue2095.setValue("r_axilla_distal")

ProtoInstance2094.addFieldValue(fieldValue2095)
fieldValue2096 = x3d.fieldValue()
fieldValue2096.setName("translation")
fieldValue2096.setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678")

ProtoInstance2094.addFieldValue(fieldValue2096)

fieldValue2054.addChildren(ProtoInstance2094)
ProtoInstance2097 = x3d.ProtoInstance()
ProtoInstance2097.setName("Site")
ProtoInstance2097.setDEF("hanim_l_acromion")
fieldValue2098 = x3d.fieldValue()
fieldValue2098.setName("name")
fieldValue2098.setValue("l_acromion")

ProtoInstance2097.addFieldValue(fieldValue2098)
fieldValue2099 = x3d.fieldValue()
fieldValue2099.setName("translation")
fieldValue2099.setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014")

ProtoInstance2097.addFieldValue(fieldValue2099)

fieldValue2054.addChildren(ProtoInstance2097)
ProtoInstance2100 = x3d.ProtoInstance()
ProtoInstance2100.setName("Site")
ProtoInstance2100.setDEF("hanim_l_axilla_proximal")
fieldValue2101 = x3d.fieldValue()
fieldValue2101.setName("name")
fieldValue2101.setValue("l_axilla_proximal")

ProtoInstance2100.addFieldValue(fieldValue2101)
fieldValue2102 = x3d.fieldValue()
fieldValue2102.setName("translation")
fieldValue2102.setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937")

ProtoInstance2100.addFieldValue(fieldValue2102)

fieldValue2054.addChildren(ProtoInstance2100)
ProtoInstance2103 = x3d.ProtoInstance()
ProtoInstance2103.setName("Site")
ProtoInstance2103.setDEF("hanim_l_axilla_distal")
fieldValue2104 = x3d.fieldValue()
fieldValue2104.setName("name")
fieldValue2104.setValue("l_axilla_distal")

ProtoInstance2103.addFieldValue(fieldValue2104)
fieldValue2105 = x3d.fieldValue()
fieldValue2105.setName("translation")
fieldValue2105.setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388")

ProtoInstance2103.addFieldValue(fieldValue2105)

fieldValue2054.addChildren(ProtoInstance2103)
ProtoInstance2106 = x3d.ProtoInstance()
ProtoInstance2106.setName("Site")
ProtoInstance2106.setDEF("hanim_r_neck_base")
fieldValue2107 = x3d.fieldValue()
fieldValue2107.setName("name")
fieldValue2107.setValue("r_neck_base")

ProtoInstance2106.addFieldValue(fieldValue2107)
fieldValue2108 = x3d.fieldValue()
fieldValue2108.setName("translation")
fieldValue2108.setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071")

ProtoInstance2106.addFieldValue(fieldValue2108)

fieldValue2054.addChildren(ProtoInstance2106)
ProtoInstance2109 = x3d.ProtoInstance()
ProtoInstance2109.setName("Site")
ProtoInstance2109.setDEF("hanim_l_neck_base")
fieldValue2110 = x3d.fieldValue()
fieldValue2110.setName("name")
fieldValue2110.setValue("l_neck_base")

ProtoInstance2109.addFieldValue(fieldValue2110)
fieldValue2111 = x3d.fieldValue()
fieldValue2111.setName("translation")
fieldValue2111.setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478")

ProtoInstance2109.addFieldValue(fieldValue2111)

fieldValue2054.addChildren(ProtoInstance2109)
ProtoInstance2112 = x3d.ProtoInstance()
ProtoInstance2112.setName("Site")
ProtoInstance2112.setDEF("hanim_navel")
fieldValue2113 = x3d.fieldValue()
fieldValue2113.setName("name")
fieldValue2113.setValue("navel")

ProtoInstance2112.addFieldValue(fieldValue2113)
fieldValue2114 = x3d.fieldValue()
fieldValue2114.setName("translation")
fieldValue2114.setValue("0.006899999920278788 1.09660005569458 0.10170000046491623")

ProtoInstance2112.addFieldValue(fieldValue2114)

fieldValue2054.addChildren(ProtoInstance2112)

ProtoInstance2052.addFieldValue(fieldValue2054)

fieldValue1850.addChildren(ProtoInstance2052)
ProtoInstance2115 = x3d.ProtoInstance()
ProtoInstance2115.setName("Segment")
ProtoInstance2115.setDEF("hanim_sacrum")
fieldValue2116 = x3d.fieldValue()
fieldValue2116.setName("name")
fieldValue2116.setValue("sacrum")

ProtoInstance2115.addFieldValue(fieldValue2116)
fieldValue2117 = x3d.fieldValue()
fieldValue2117.setName("children")
ProtoInstance2118 = x3d.ProtoInstance()
ProtoInstance2118.setName("Site")
ProtoInstance2118.setDEF("hanim_r_asis")
fieldValue2119 = x3d.fieldValue()
fieldValue2119.setName("name")
fieldValue2119.setValue("r_asis")

ProtoInstance2118.addFieldValue(fieldValue2119)
fieldValue2120 = x3d.fieldValue()
fieldValue2120.setName("translation")
fieldValue2120.setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747")

ProtoInstance2118.addFieldValue(fieldValue2120)

fieldValue2117.addChildren(ProtoInstance2118)
ProtoInstance2121 = x3d.ProtoInstance()
ProtoInstance2121.setName("Site")
ProtoInstance2121.setDEF("hanim_l_asis")
fieldValue2122 = x3d.fieldValue()
fieldValue2122.setName("name")
fieldValue2122.setValue("l_asis")

ProtoInstance2121.addFieldValue(fieldValue2122)
fieldValue2123 = x3d.fieldValue()
fieldValue2123.setName("translation")
fieldValue2123.setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836")

ProtoInstance2121.addFieldValue(fieldValue2123)

fieldValue2117.addChildren(ProtoInstance2121)
ProtoInstance2124 = x3d.ProtoInstance()
ProtoInstance2124.setName("Site")
ProtoInstance2124.setDEF("hanim_r_iliocristale")
fieldValue2125 = x3d.fieldValue()
fieldValue2125.setName("name")
fieldValue2125.setValue("r_iliocristale")

ProtoInstance2124.addFieldValue(fieldValue2125)
fieldValue2126 = x3d.fieldValue()
fieldValue2126.setName("translation")
fieldValue2126.setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187")

ProtoInstance2124.addFieldValue(fieldValue2126)

fieldValue2117.addChildren(ProtoInstance2124)
ProtoInstance2127 = x3d.ProtoInstance()
ProtoInstance2127.setName("Site")
ProtoInstance2127.setDEF("hanim_r_trochanterion")
fieldValue2128 = x3d.fieldValue()
fieldValue2128.setName("name")
fieldValue2128.setValue("r_trochanterion")

ProtoInstance2127.addFieldValue(fieldValue2128)
fieldValue2129 = x3d.fieldValue()
fieldValue2129.setName("translation")
fieldValue2129.setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514")

ProtoInstance2127.addFieldValue(fieldValue2129)

fieldValue2117.addChildren(ProtoInstance2127)
ProtoInstance2130 = x3d.ProtoInstance()
ProtoInstance2130.setName("Site")
ProtoInstance2130.setDEF("hanim_l_iliocristale")
fieldValue2131 = x3d.fieldValue()
fieldValue2131.setName("name")
fieldValue2131.setValue("l_iliocristale")

ProtoInstance2130.addFieldValue(fieldValue2131)
fieldValue2132 = x3d.fieldValue()
fieldValue2132.setName("translation")
fieldValue2132.setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001")

ProtoInstance2130.addFieldValue(fieldValue2132)

fieldValue2117.addChildren(ProtoInstance2130)
ProtoInstance2133 = x3d.ProtoInstance()
ProtoInstance2133.setName("Site")
ProtoInstance2133.setDEF("hanim_l_trochanterion")
fieldValue2134 = x3d.fieldValue()
fieldValue2134.setName("name")
fieldValue2134.setValue("l_trochanterion")

ProtoInstance2133.addFieldValue(fieldValue2134)
fieldValue2135 = x3d.fieldValue()
fieldValue2135.setName("translation")
fieldValue2135.setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183")

ProtoInstance2133.addFieldValue(fieldValue2135)

fieldValue2117.addChildren(ProtoInstance2133)
ProtoInstance2136 = x3d.ProtoInstance()
ProtoInstance2136.setName("Site")
ProtoInstance2136.setDEF("hanim_r_psis")
fieldValue2137 = x3d.fieldValue()
fieldValue2137.setName("name")
fieldValue2137.setValue("r_psis")

ProtoInstance2136.addFieldValue(fieldValue2137)
fieldValue2138 = x3d.fieldValue()
fieldValue2138.setName("translation")
fieldValue2138.setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082")

ProtoInstance2136.addFieldValue(fieldValue2138)

fieldValue2117.addChildren(ProtoInstance2136)
ProtoInstance2139 = x3d.ProtoInstance()
ProtoInstance2139.setName("Site")
ProtoInstance2139.setDEF("hanim_l_psis")
fieldValue2140 = x3d.fieldValue()
fieldValue2140.setName("name")
fieldValue2140.setValue("l_psis")

ProtoInstance2139.addFieldValue(fieldValue2140)
fieldValue2141 = x3d.fieldValue()
fieldValue2141.setName("translation")
fieldValue2141.setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388")

ProtoInstance2139.addFieldValue(fieldValue2141)

fieldValue2117.addChildren(ProtoInstance2139)
ProtoInstance2142 = x3d.ProtoInstance()
ProtoInstance2142.setName("Site")
ProtoInstance2142.setDEF("hanim_crotch")
fieldValue2143 = x3d.fieldValue()
fieldValue2143.setName("name")
fieldValue2143.setValue("crotch")

ProtoInstance2142.addFieldValue(fieldValue2143)
fieldValue2144 = x3d.fieldValue()
fieldValue2144.setName("translation")
fieldValue2144.setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367")

ProtoInstance2142.addFieldValue(fieldValue2144)

fieldValue2117.addChildren(ProtoInstance2142)

ProtoInstance2115.addFieldValue(fieldValue2117)

fieldValue1850.addChildren(ProtoInstance2115)

ProtoInstance110.addFieldValue(fieldValue1850)
fieldValue2145 = x3d.fieldValue()
fieldValue2145.setName("sites")
ProtoInstance2146 = x3d.ProtoInstance()
ProtoInstance2146.setName("Site")
ProtoInstance2146.setDEF("hanim_l_middistal_tip")
fieldValue2147 = x3d.fieldValue()
fieldValue2147.setName("name")
fieldValue2147.setValue("l_middistal_tip")

ProtoInstance2146.addFieldValue(fieldValue2147)
fieldValue2148 = x3d.fieldValue()
fieldValue2148.setName("translation")
fieldValue2148.setValue("0.13539999723434448 0.0015999999595806003 0.147599995136261")

ProtoInstance2146.addFieldValue(fieldValue2148)

fieldValue2145.addChildren(ProtoInstance2146)
ProtoInstance2149 = x3d.ProtoInstance()
ProtoInstance2149.setName("Site")
ProtoInstance2149.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue2150 = x3d.fieldValue()
fieldValue2150.setName("name")
fieldValue2150.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance2149.addFieldValue(fieldValue2150)
fieldValue2151 = x3d.fieldValue()
fieldValue2151.setName("translation")
fieldValue2151.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance2149.addFieldValue(fieldValue2151)

fieldValue2145.addChildren(ProtoInstance2149)
ProtoInstance2152 = x3d.ProtoInstance()
ProtoInstance2152.setName("Site")
ProtoInstance2152.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue2153 = x3d.fieldValue()
fieldValue2153.setName("name")
fieldValue2153.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance2152.addFieldValue(fieldValue2153)
fieldValue2154 = x3d.fieldValue()
fieldValue2154.setName("translation")
fieldValue2154.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance2152.addFieldValue(fieldValue2154)

fieldValue2145.addChildren(ProtoInstance2152)
ProtoInstance2155 = x3d.ProtoInstance()
ProtoInstance2155.setName("Site")
ProtoInstance2155.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue2156 = x3d.fieldValue()
fieldValue2156.setName("name")
fieldValue2156.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance2155.addFieldValue(fieldValue2156)
fieldValue2157 = x3d.fieldValue()
fieldValue2157.setName("translation")
fieldValue2157.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance2155.addFieldValue(fieldValue2157)

fieldValue2145.addChildren(ProtoInstance2155)
ProtoInstance2158 = x3d.ProtoInstance()
ProtoInstance2158.setName("Site")
ProtoInstance2158.setDEF("hanim_l_lateral_malleolus")
fieldValue2159 = x3d.fieldValue()
fieldValue2159.setName("name")
fieldValue2159.setValue("l_lateral_malleolus")

ProtoInstance2158.addFieldValue(fieldValue2159)
fieldValue2160 = x3d.fieldValue()
fieldValue2160.setName("translation")
fieldValue2160.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance2158.addFieldValue(fieldValue2160)

fieldValue2145.addChildren(ProtoInstance2158)
ProtoInstance2161 = x3d.ProtoInstance()
ProtoInstance2161.setName("Site")
ProtoInstance2161.setDEF("hanim_l_medial_malleolus")
fieldValue2162 = x3d.fieldValue()
fieldValue2162.setName("name")
fieldValue2162.setValue("l_medial_malleolus")

ProtoInstance2161.addFieldValue(fieldValue2162)
fieldValue2163 = x3d.fieldValue()
fieldValue2163.setName("translation")
fieldValue2163.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance2161.addFieldValue(fieldValue2163)

fieldValue2145.addChildren(ProtoInstance2161)
ProtoInstance2164 = x3d.ProtoInstance()
ProtoInstance2164.setName("Site")
ProtoInstance2164.setDEF("hanim_l_sphyrion")
fieldValue2165 = x3d.fieldValue()
fieldValue2165.setName("name")
fieldValue2165.setValue("l_sphyrion")

ProtoInstance2164.addFieldValue(fieldValue2165)
fieldValue2166 = x3d.fieldValue()
fieldValue2166.setName("translation")
fieldValue2166.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance2164.addFieldValue(fieldValue2166)

fieldValue2145.addChildren(ProtoInstance2164)
ProtoInstance2167 = x3d.ProtoInstance()
ProtoInstance2167.setName("Site")
ProtoInstance2167.setDEF("hanim_l_calcaneus_posterior")
fieldValue2168 = x3d.fieldValue()
fieldValue2168.setName("name")
fieldValue2168.setValue("l_calcaneus_posterior")

ProtoInstance2167.addFieldValue(fieldValue2168)
fieldValue2169 = x3d.fieldValue()
fieldValue2169.setName("translation")
fieldValue2169.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance2167.addFieldValue(fieldValue2169)

fieldValue2145.addChildren(ProtoInstance2167)
ProtoInstance2170 = x3d.ProtoInstance()
ProtoInstance2170.setName("Site")
ProtoInstance2170.setDEF("hanim_l_knee_crease")
fieldValue2171 = x3d.fieldValue()
fieldValue2171.setName("name")
fieldValue2171.setValue("l_knee_crease")

ProtoInstance2170.addFieldValue(fieldValue2171)
fieldValue2172 = x3d.fieldValue()
fieldValue2172.setName("translation")
fieldValue2172.setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757")

ProtoInstance2170.addFieldValue(fieldValue2172)

fieldValue2145.addChildren(ProtoInstance2170)
ProtoInstance2173 = x3d.ProtoInstance()
ProtoInstance2173.setName("Site")
ProtoInstance2173.setDEF("hanim_l_femoral_lateral_epicondyles")
fieldValue2174 = x3d.fieldValue()
fieldValue2174.setName("name")
fieldValue2174.setValue("l_femoral_lateral_epicondyles")

ProtoInstance2173.addFieldValue(fieldValue2174)
fieldValue2175 = x3d.fieldValue()
fieldValue2175.setName("translation")
fieldValue2175.setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746")

ProtoInstance2173.addFieldValue(fieldValue2175)

fieldValue2145.addChildren(ProtoInstance2173)
ProtoInstance2176 = x3d.ProtoInstance()
ProtoInstance2176.setName("Site")
ProtoInstance2176.setDEF("hanim_l_femoral_medial_epicondyles")
fieldValue2177 = x3d.fieldValue()
fieldValue2177.setName("name")
fieldValue2177.setValue("l_femoral_lateral_epicondyles")

ProtoInstance2176.addFieldValue(fieldValue2177)
fieldValue2178 = x3d.fieldValue()
fieldValue2178.setName("translation")
fieldValue2178.setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183")

ProtoInstance2176.addFieldValue(fieldValue2178)

fieldValue2145.addChildren(ProtoInstance2176)
ProtoInstance2179 = x3d.ProtoInstance()
ProtoInstance2179.setName("Site")
ProtoInstance2179.setDEF("hanim_r_middistal_tip")
fieldValue2180 = x3d.fieldValue()
fieldValue2180.setName("name")
fieldValue2180.setValue("r_middistal_tip")

ProtoInstance2179.addFieldValue(fieldValue2180)
fieldValue2181 = x3d.fieldValue()
fieldValue2181.setName("translation")
fieldValue2181.setValue("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")

ProtoInstance2179.addFieldValue(fieldValue2181)

fieldValue2145.addChildren(ProtoInstance2179)
ProtoInstance2182 = x3d.ProtoInstance()
ProtoInstance2182.setName("Site")
ProtoInstance2182.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue2183 = x3d.fieldValue()
fieldValue2183.setName("name")
fieldValue2183.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance2182.addFieldValue(fieldValue2183)
fieldValue2184 = x3d.fieldValue()
fieldValue2184.setName("translation")
fieldValue2184.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance2182.addFieldValue(fieldValue2184)

fieldValue2145.addChildren(ProtoInstance2182)
ProtoInstance2185 = x3d.ProtoInstance()
ProtoInstance2185.setName("Site")
ProtoInstance2185.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue2186 = x3d.fieldValue()
fieldValue2186.setName("name")
fieldValue2186.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance2185.addFieldValue(fieldValue2186)
fieldValue2187 = x3d.fieldValue()
fieldValue2187.setName("translation")
fieldValue2187.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance2185.addFieldValue(fieldValue2187)

fieldValue2145.addChildren(ProtoInstance2185)
ProtoInstance2188 = x3d.ProtoInstance()
ProtoInstance2188.setName("Site")
ProtoInstance2188.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue2189 = x3d.fieldValue()
fieldValue2189.setName("name")
fieldValue2189.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance2188.addFieldValue(fieldValue2189)
fieldValue2190 = x3d.fieldValue()
fieldValue2190.setName("translation")
fieldValue2190.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance2188.addFieldValue(fieldValue2190)

fieldValue2145.addChildren(ProtoInstance2188)
ProtoInstance2191 = x3d.ProtoInstance()
ProtoInstance2191.setName("Site")
ProtoInstance2191.setDEF("hanim_r_lateral_malleolus")
fieldValue2192 = x3d.fieldValue()
fieldValue2192.setName("name")
fieldValue2192.setValue("r_lateral_malleolus")

ProtoInstance2191.addFieldValue(fieldValue2192)
fieldValue2193 = x3d.fieldValue()
fieldValue2193.setName("translation")
fieldValue2193.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance2191.addFieldValue(fieldValue2193)

fieldValue2145.addChildren(ProtoInstance2191)
ProtoInstance2194 = x3d.ProtoInstance()
ProtoInstance2194.setName("Site")
ProtoInstance2194.setDEF("hanim_r_medial_malleolus")
fieldValue2195 = x3d.fieldValue()
fieldValue2195.setName("name")
fieldValue2195.setValue("r_medial_malleolus")

ProtoInstance2194.addFieldValue(fieldValue2195)
fieldValue2196 = x3d.fieldValue()
fieldValue2196.setName("translation")
fieldValue2196.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance2194.addFieldValue(fieldValue2196)

fieldValue2145.addChildren(ProtoInstance2194)
ProtoInstance2197 = x3d.ProtoInstance()
ProtoInstance2197.setName("Site")
ProtoInstance2197.setDEF("hanim_r_sphyrion")
fieldValue2198 = x3d.fieldValue()
fieldValue2198.setName("name")
fieldValue2198.setValue("r_sphyrion")

ProtoInstance2197.addFieldValue(fieldValue2198)
fieldValue2199 = x3d.fieldValue()
fieldValue2199.setName("translation")
fieldValue2199.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance2197.addFieldValue(fieldValue2199)

fieldValue2145.addChildren(ProtoInstance2197)
ProtoInstance2200 = x3d.ProtoInstance()
ProtoInstance2200.setName("Site")
ProtoInstance2200.setDEF("hanim_r_calcaneus_posterior")
fieldValue2201 = x3d.fieldValue()
fieldValue2201.setName("name")
fieldValue2201.setValue("r_calcaneus_posterior")

ProtoInstance2200.addFieldValue(fieldValue2201)
fieldValue2202 = x3d.fieldValue()
fieldValue2202.setName("translation")
fieldValue2202.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance2200.addFieldValue(fieldValue2202)

fieldValue2145.addChildren(ProtoInstance2200)
ProtoInstance2203 = x3d.ProtoInstance()
ProtoInstance2203.setName("Site")
ProtoInstance2203.setDEF("hanim_r_knee_crease")
fieldValue2204 = x3d.fieldValue()
fieldValue2204.setName("name")
fieldValue2204.setValue("r_knee_crease")

ProtoInstance2203.addFieldValue(fieldValue2204)
fieldValue2205 = x3d.fieldValue()
fieldValue2205.setName("translation")
fieldValue2205.setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")

ProtoInstance2203.addFieldValue(fieldValue2205)

fieldValue2145.addChildren(ProtoInstance2203)
ProtoInstance2206 = x3d.ProtoInstance()
ProtoInstance2206.setName("Site")
ProtoInstance2206.setDEF("hanim_r_femoral_lateral_epicondyles")
fieldValue2207 = x3d.fieldValue()
fieldValue2207.setName("name")
fieldValue2207.setValue("r_femoral_lateral_epicondyles")

ProtoInstance2206.addFieldValue(fieldValue2207)
fieldValue2208 = x3d.fieldValue()
fieldValue2208.setName("translation")
fieldValue2208.setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052")

ProtoInstance2206.addFieldValue(fieldValue2208)

fieldValue2145.addChildren(ProtoInstance2206)
ProtoInstance2209 = x3d.ProtoInstance()
ProtoInstance2209.setName("Site")
ProtoInstance2209.setDEF("hanim_r_femoral_medial_epicondyles")
fieldValue2210 = x3d.fieldValue()
fieldValue2210.setName("name")
fieldValue2210.setValue("r_femoral_lateral_epicondyles")

ProtoInstance2209.addFieldValue(fieldValue2210)
fieldValue2211 = x3d.fieldValue()
fieldValue2211.setName("translation")
fieldValue2211.setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821")

ProtoInstance2209.addFieldValue(fieldValue2211)

fieldValue2145.addChildren(ProtoInstance2209)
ProtoInstance2212 = x3d.ProtoInstance()
ProtoInstance2212.setName("Site")
ProtoInstance2212.setDEF("hanim_skull_tip")
fieldValue2213 = x3d.fieldValue()
fieldValue2213.setName("name")
fieldValue2213.setValue("skull_tip")

ProtoInstance2212.addFieldValue(fieldValue2213)
fieldValue2214 = x3d.fieldValue()
fieldValue2214.setName("translation")
fieldValue2214.setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678")

ProtoInstance2212.addFieldValue(fieldValue2214)

fieldValue2145.addChildren(ProtoInstance2212)
ProtoInstance2215 = x3d.ProtoInstance()
ProtoInstance2215.setName("Site")
ProtoInstance2215.setDEF("hanim_sellion")
fieldValue2216 = x3d.fieldValue()
fieldValue2216.setName("name")
fieldValue2216.setValue("sellion")

ProtoInstance2215.addFieldValue(fieldValue2216)
fieldValue2217 = x3d.fieldValue()
fieldValue2217.setName("translation")
fieldValue2217.setValue("0.005799999926239252 1.631600022315979 0.0851999968290329")

ProtoInstance2215.addFieldValue(fieldValue2217)

fieldValue2145.addChildren(ProtoInstance2215)
ProtoInstance2218 = x3d.ProtoInstance()
ProtoInstance2218.setName("Site")
ProtoInstance2218.setDEF("hanim_r_infraorbitale")
fieldValue2219 = x3d.fieldValue()
fieldValue2219.setName("name")
fieldValue2219.setValue("r_infraorbitale")

ProtoInstance2218.addFieldValue(fieldValue2219)
fieldValue2220 = x3d.fieldValue()
fieldValue2220.setName("translation")
fieldValue2220.setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547")

ProtoInstance2218.addFieldValue(fieldValue2220)

fieldValue2145.addChildren(ProtoInstance2218)
ProtoInstance2221 = x3d.ProtoInstance()
ProtoInstance2221.setName("Site")
ProtoInstance2221.setDEF("hanim_l_infraorbitale")
fieldValue2222 = x3d.fieldValue()
fieldValue2222.setName("name")
fieldValue2222.setValue("l_infraorbitale")

ProtoInstance2221.addFieldValue(fieldValue2222)
fieldValue2223 = x3d.fieldValue()
fieldValue2223.setName("translation")
fieldValue2223.setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547")

ProtoInstance2221.addFieldValue(fieldValue2223)

fieldValue2145.addChildren(ProtoInstance2221)
ProtoInstance2224 = x3d.ProtoInstance()
ProtoInstance2224.setName("Site")
ProtoInstance2224.setDEF("hanim_supramenton")
fieldValue2225 = x3d.fieldValue()
fieldValue2225.setName("name")
fieldValue2225.setValue("supramenton")

ProtoInstance2224.addFieldValue(fieldValue2225)
fieldValue2226 = x3d.fieldValue()
fieldValue2226.setName("translation")
fieldValue2226.setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962")

ProtoInstance2224.addFieldValue(fieldValue2226)

fieldValue2145.addChildren(ProtoInstance2224)
ProtoInstance2227 = x3d.ProtoInstance()
ProtoInstance2227.setName("Site")
ProtoInstance2227.setDEF("hanim_r_tragion")
fieldValue2228 = x3d.fieldValue()
fieldValue2228.setName("name")
fieldValue2228.setValue("r_tragion")

ProtoInstance2227.addFieldValue(fieldValue2228)
fieldValue2229 = x3d.fieldValue()
fieldValue2229.setName("translation")
fieldValue2229.setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642")

ProtoInstance2227.addFieldValue(fieldValue2229)

fieldValue2145.addChildren(ProtoInstance2227)
ProtoInstance2230 = x3d.ProtoInstance()
ProtoInstance2230.setName("Site")
ProtoInstance2230.setDEF("hanim_r_gonion")
fieldValue2231 = x3d.fieldValue()
fieldValue2231.setName("name")
fieldValue2231.setValue("r_gonion")

ProtoInstance2230.addFieldValue(fieldValue2231)
fieldValue2232 = x3d.fieldValue()
fieldValue2232.setName("translation")
fieldValue2232.setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176")

ProtoInstance2230.addFieldValue(fieldValue2232)

fieldValue2145.addChildren(ProtoInstance2230)
ProtoInstance2233 = x3d.ProtoInstance()
ProtoInstance2233.setName("Site")
ProtoInstance2233.setDEF("hanim_l_tragion")
fieldValue2234 = x3d.fieldValue()
fieldValue2234.setName("name")
fieldValue2234.setValue("l_tragion")

ProtoInstance2233.addFieldValue(fieldValue2234)
fieldValue2235 = x3d.fieldValue()
fieldValue2235.setName("translation")
fieldValue2235.setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874")

ProtoInstance2233.addFieldValue(fieldValue2235)

fieldValue2145.addChildren(ProtoInstance2233)
ProtoInstance2236 = x3d.ProtoInstance()
ProtoInstance2236.setName("Site")
ProtoInstance2236.setDEF("hanim_l_gonion")
fieldValue2237 = x3d.fieldValue()
fieldValue2237.setName("name")
fieldValue2237.setValue("l_gonion")

ProtoInstance2236.addFieldValue(fieldValue2237)
fieldValue2238 = x3d.fieldValue()
fieldValue2238.setName("translation")
fieldValue2238.setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066")

ProtoInstance2236.addFieldValue(fieldValue2238)

fieldValue2145.addChildren(ProtoInstance2236)
ProtoInstance2239 = x3d.ProtoInstance()
ProtoInstance2239.setName("Site")
ProtoInstance2239.setDEF("hanim_nuchale")
fieldValue2240 = x3d.fieldValue()
fieldValue2240.setName("name")
fieldValue2240.setValue("nuchale")

ProtoInstance2239.addFieldValue(fieldValue2240)
fieldValue2241 = x3d.fieldValue()
fieldValue2241.setName("translation")
fieldValue2241.setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")

ProtoInstance2239.addFieldValue(fieldValue2241)

fieldValue2145.addChildren(ProtoInstance2239)
ProtoInstance2242 = x3d.ProtoInstance()
ProtoInstance2242.setName("Site")
ProtoInstance2242.setDEF("hanim_l_hand_tip")
fieldValue2243 = x3d.fieldValue()
fieldValue2243.setName("name")
fieldValue2243.setValue("l_hand_tip")

ProtoInstance2242.addFieldValue(fieldValue2243)
fieldValue2244 = x3d.fieldValue()
fieldValue2244.setName("translation")
fieldValue2244.setValue("0.20800000429153442 0.6730999946594238 -0.04910000041127205")

ProtoInstance2242.addFieldValue(fieldValue2244)

fieldValue2145.addChildren(ProtoInstance2242)
ProtoInstance2245 = x3d.ProtoInstance()
ProtoInstance2245.setName("Site")
ProtoInstance2245.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue2246 = x3d.fieldValue()
fieldValue2246.setName("name")
fieldValue2246.setValue("l_metacarpal_phalanx_2")

ProtoInstance2245.addFieldValue(fieldValue2246)
fieldValue2247 = x3d.fieldValue()
fieldValue2247.setName("translation")
fieldValue2247.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance2245.addFieldValue(fieldValue2247)

fieldValue2145.addChildren(ProtoInstance2245)
ProtoInstance2248 = x3d.ProtoInstance()
ProtoInstance2248.setName("Site")
ProtoInstance2248.setDEF("hanim_l_dactylion")
fieldValue2249 = x3d.fieldValue()
fieldValue2249.setName("name")
fieldValue2249.setValue("l_dactylion")

ProtoInstance2248.addFieldValue(fieldValue2249)
fieldValue2250 = x3d.fieldValue()
fieldValue2250.setName("translation")
fieldValue2250.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance2248.addFieldValue(fieldValue2250)

fieldValue2145.addChildren(ProtoInstance2248)
ProtoInstance2251 = x3d.ProtoInstance()
ProtoInstance2251.setName("Site")
ProtoInstance2251.setDEF("hanim_l_ulnar_styloid")
fieldValue2252 = x3d.fieldValue()
fieldValue2252.setName("name")
fieldValue2252.setValue("l_ulnar_styloid")

ProtoInstance2251.addFieldValue(fieldValue2252)
fieldValue2253 = x3d.fieldValue()
fieldValue2253.setName("translation")
fieldValue2253.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance2251.addFieldValue(fieldValue2253)

fieldValue2145.addChildren(ProtoInstance2251)
ProtoInstance2254 = x3d.ProtoInstance()
ProtoInstance2254.setName("Site")
ProtoInstance2254.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue2255 = x3d.fieldValue()
fieldValue2255.setName("name")
fieldValue2255.setValue("l_metacarpal_phalanx_5")

ProtoInstance2254.addFieldValue(fieldValue2255)
fieldValue2256 = x3d.fieldValue()
fieldValue2256.setName("translation")
fieldValue2256.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance2254.addFieldValue(fieldValue2256)

fieldValue2145.addChildren(ProtoInstance2254)
ProtoInstance2257 = x3d.ProtoInstance()
ProtoInstance2257.setName("Site")
ProtoInstance2257.setDEF("hanim_l_radial_styloid")
fieldValue2258 = x3d.fieldValue()
fieldValue2258.setName("name")
fieldValue2258.setValue("l_radial_styloid")

ProtoInstance2257.addFieldValue(fieldValue2258)
fieldValue2259 = x3d.fieldValue()
fieldValue2259.setName("translation")
fieldValue2259.setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691")

ProtoInstance2257.addFieldValue(fieldValue2259)

fieldValue2145.addChildren(ProtoInstance2257)
ProtoInstance2260 = x3d.ProtoInstance()
ProtoInstance2260.setName("Site")
ProtoInstance2260.setDEF("hanim_l_olecranon")
fieldValue2261 = x3d.fieldValue()
fieldValue2261.setName("name")
fieldValue2261.setValue("l_olecranon")

ProtoInstance2260.addFieldValue(fieldValue2261)
fieldValue2262 = x3d.fieldValue()
fieldValue2262.setName("translation")
fieldValue2262.setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")

ProtoInstance2260.addFieldValue(fieldValue2262)

fieldValue2145.addChildren(ProtoInstance2260)
ProtoInstance2263 = x3d.ProtoInstance()
ProtoInstance2263.setName("Site")
ProtoInstance2263.setDEF("hanim_l_humeral_medial_epicondyles")
fieldValue2264 = x3d.fieldValue()
fieldValue2264.setName("name")
fieldValue2264.setValue("l_humeral_medial_epicondyles")

ProtoInstance2263.addFieldValue(fieldValue2264)
fieldValue2265 = x3d.fieldValue()
fieldValue2265.setName("translation")
fieldValue2265.setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661")

ProtoInstance2263.addFieldValue(fieldValue2265)

fieldValue2145.addChildren(ProtoInstance2263)
ProtoInstance2266 = x3d.ProtoInstance()
ProtoInstance2266.setName("Site")
ProtoInstance2266.setDEF("hanim_l_radiale")
fieldValue2267 = x3d.fieldValue()
fieldValue2267.setName("name")
fieldValue2267.setValue("l_radiale")

ProtoInstance2266.addFieldValue(fieldValue2267)
fieldValue2268 = x3d.fieldValue()
fieldValue2268.setName("translation")
fieldValue2268.setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268")

ProtoInstance2266.addFieldValue(fieldValue2268)

fieldValue2145.addChildren(ProtoInstance2266)
ProtoInstance2269 = x3d.ProtoInstance()
ProtoInstance2269.setName("Site")
ProtoInstance2269.setDEF("hanim_l_humeral_lateral_epicondyles")
fieldValue2270 = x3d.fieldValue()
fieldValue2270.setName("name")
fieldValue2270.setValue("l_humeral_lateral_epicondyles")

ProtoInstance2269.addFieldValue(fieldValue2270)
fieldValue2271 = x3d.fieldValue()
fieldValue2271.setName("translation")
fieldValue2271.setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355")

ProtoInstance2269.addFieldValue(fieldValue2271)

fieldValue2145.addChildren(ProtoInstance2269)
ProtoInstance2272 = x3d.ProtoInstance()
ProtoInstance2272.setName("Site")
ProtoInstance2272.setDEF("hanim_r_hand_tip")
fieldValue2273 = x3d.fieldValue()
fieldValue2273.setName("name")
fieldValue2273.setValue("r_hand_tip")

ProtoInstance2272.addFieldValue(fieldValue2273)
fieldValue2274 = x3d.fieldValue()
fieldValue2274.setName("translation")
fieldValue2274.setValue("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")

ProtoInstance2272.addFieldValue(fieldValue2274)

fieldValue2145.addChildren(ProtoInstance2272)
ProtoInstance2275 = x3d.ProtoInstance()
ProtoInstance2275.setName("Site")
ProtoInstance2275.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue2276 = x3d.fieldValue()
fieldValue2276.setName("name")
fieldValue2276.setValue("r_metacarpal_phalanx_2")

ProtoInstance2275.addFieldValue(fieldValue2276)
fieldValue2277 = x3d.fieldValue()
fieldValue2277.setName("translation")
fieldValue2277.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance2275.addFieldValue(fieldValue2277)

fieldValue2145.addChildren(ProtoInstance2275)
ProtoInstance2278 = x3d.ProtoInstance()
ProtoInstance2278.setName("Site")
ProtoInstance2278.setDEF("hanim_r_dactylion")
fieldValue2279 = x3d.fieldValue()
fieldValue2279.setName("name")
fieldValue2279.setValue("r_dactylion")

ProtoInstance2278.addFieldValue(fieldValue2279)
fieldValue2280 = x3d.fieldValue()
fieldValue2280.setName("translation")
fieldValue2280.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance2278.addFieldValue(fieldValue2280)

fieldValue2145.addChildren(ProtoInstance2278)
ProtoInstance2281 = x3d.ProtoInstance()
ProtoInstance2281.setName("Site")
ProtoInstance2281.setDEF("hanim_r_ulnar_styloid")
fieldValue2282 = x3d.fieldValue()
fieldValue2282.setName("name")
fieldValue2282.setValue("r_ulnar_styloid")

ProtoInstance2281.addFieldValue(fieldValue2282)
fieldValue2283 = x3d.fieldValue()
fieldValue2283.setName("translation")
fieldValue2283.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance2281.addFieldValue(fieldValue2283)

fieldValue2145.addChildren(ProtoInstance2281)
ProtoInstance2284 = x3d.ProtoInstance()
ProtoInstance2284.setName("Site")
ProtoInstance2284.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue2285 = x3d.fieldValue()
fieldValue2285.setName("name")
fieldValue2285.setValue("r_metacarpal_phalanx_5")

ProtoInstance2284.addFieldValue(fieldValue2285)
fieldValue2286 = x3d.fieldValue()
fieldValue2286.setName("translation")
fieldValue2286.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance2284.addFieldValue(fieldValue2286)

fieldValue2145.addChildren(ProtoInstance2284)
ProtoInstance2287 = x3d.ProtoInstance()
ProtoInstance2287.setName("Site")
ProtoInstance2287.setDEF("hanim_r_radial_styloid")
fieldValue2288 = x3d.fieldValue()
fieldValue2288.setName("name")
fieldValue2288.setValue("r_radial_styloid")

ProtoInstance2287.addFieldValue(fieldValue2288)
fieldValue2289 = x3d.fieldValue()
fieldValue2289.setName("translation")
fieldValue2289.setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236")

ProtoInstance2287.addFieldValue(fieldValue2289)

fieldValue2145.addChildren(ProtoInstance2287)
ProtoInstance2290 = x3d.ProtoInstance()
ProtoInstance2290.setName("Site")
ProtoInstance2290.setDEF("hanim_r_olecranon")
fieldValue2291 = x3d.fieldValue()
fieldValue2291.setName("name")
fieldValue2291.setValue("r_olecranon")

ProtoInstance2290.addFieldValue(fieldValue2291)
fieldValue2292 = x3d.fieldValue()
fieldValue2292.setName("translation")
fieldValue2292.setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")

ProtoInstance2290.addFieldValue(fieldValue2292)

fieldValue2145.addChildren(ProtoInstance2290)
ProtoInstance2293 = x3d.ProtoInstance()
ProtoInstance2293.setName("Site")
ProtoInstance2293.setDEF("hanim_r_humeral_medial_epicondyles")
fieldValue2294 = x3d.fieldValue()
fieldValue2294.setName("name")
fieldValue2294.setValue("r_humeral_medial_epicondyles")

ProtoInstance2293.addFieldValue(fieldValue2294)
fieldValue2295 = x3d.fieldValue()
fieldValue2295.setName("translation")
fieldValue2295.setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")

ProtoInstance2293.addFieldValue(fieldValue2295)

fieldValue2145.addChildren(ProtoInstance2293)
ProtoInstance2296 = x3d.ProtoInstance()
ProtoInstance2296.setName("Site")
ProtoInstance2296.setDEF("hanim_r_radiale")
fieldValue2297 = x3d.fieldValue()
fieldValue2297.setName("name")
fieldValue2297.setValue("r_radiale")

ProtoInstance2296.addFieldValue(fieldValue2297)
fieldValue2298 = x3d.fieldValue()
fieldValue2298.setName("translation")
fieldValue2298.setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")

ProtoInstance2296.addFieldValue(fieldValue2298)

fieldValue2145.addChildren(ProtoInstance2296)
ProtoInstance2299 = x3d.ProtoInstance()
ProtoInstance2299.setName("Site")
ProtoInstance2299.setDEF("hanim_r_humeral_lateral_epicondyles")
fieldValue2300 = x3d.fieldValue()
fieldValue2300.setName("name")
fieldValue2300.setValue("r_humeral_lateral_epicondyles")

ProtoInstance2299.addFieldValue(fieldValue2300)
fieldValue2301 = x3d.fieldValue()
fieldValue2301.setName("translation")
fieldValue2301.setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")

ProtoInstance2299.addFieldValue(fieldValue2301)

fieldValue2145.addChildren(ProtoInstance2299)
ProtoInstance2302 = x3d.ProtoInstance()
ProtoInstance2302.setName("Site")
ProtoInstance2302.setDEF("hanim_r_clavicale")
fieldValue2303 = x3d.fieldValue()
fieldValue2303.setName("name")
fieldValue2303.setValue("r_clavicale")

ProtoInstance2302.addFieldValue(fieldValue2303)
fieldValue2304 = x3d.fieldValue()
fieldValue2304.setName("translation")
fieldValue2304.setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033")

ProtoInstance2302.addFieldValue(fieldValue2304)

fieldValue2145.addChildren(ProtoInstance2302)
ProtoInstance2305 = x3d.ProtoInstance()
ProtoInstance2305.setName("Site")
ProtoInstance2305.setDEF("hanim_suprasternale")
fieldValue2306 = x3d.fieldValue()
fieldValue2306.setName("name")
fieldValue2306.setValue("suprasternale")

ProtoInstance2305.addFieldValue(fieldValue2306)
fieldValue2307 = x3d.fieldValue()
fieldValue2307.setName("translation")
fieldValue2307.setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869")

ProtoInstance2305.addFieldValue(fieldValue2307)

fieldValue2145.addChildren(ProtoInstance2305)
ProtoInstance2308 = x3d.ProtoInstance()
ProtoInstance2308.setName("Site")
ProtoInstance2308.setDEF("hanim_l_clavicale")
fieldValue2309 = x3d.fieldValue()
fieldValue2309.setName("name")
fieldValue2309.setValue("l_clavicale")

ProtoInstance2308.addFieldValue(fieldValue2309)
fieldValue2310 = x3d.fieldValue()
fieldValue2310.setName("translation")
fieldValue2310.setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754")

ProtoInstance2308.addFieldValue(fieldValue2310)

fieldValue2145.addChildren(ProtoInstance2308)
ProtoInstance2311 = x3d.ProtoInstance()
ProtoInstance2311.setName("Site")
ProtoInstance2311.setDEF("hanim_r_thelion")
fieldValue2312 = x3d.fieldValue()
fieldValue2312.setName("name")
fieldValue2312.setValue("r_thelion")

ProtoInstance2311.addFieldValue(fieldValue2312)
fieldValue2313 = x3d.fieldValue()
fieldValue2313.setName("translation")
fieldValue2313.setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911")

ProtoInstance2311.addFieldValue(fieldValue2313)

fieldValue2145.addChildren(ProtoInstance2311)
ProtoInstance2314 = x3d.ProtoInstance()
ProtoInstance2314.setName("Site")
ProtoInstance2314.setDEF("hanim_l_thelion")
fieldValue2315 = x3d.fieldValue()
fieldValue2315.setName("name")
fieldValue2315.setValue("l_thelion")

ProtoInstance2314.addFieldValue(fieldValue2315)
fieldValue2316 = x3d.fieldValue()
fieldValue2316.setName("translation")
fieldValue2316.setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689")

ProtoInstance2314.addFieldValue(fieldValue2316)

fieldValue2145.addChildren(ProtoInstance2314)
ProtoInstance2317 = x3d.ProtoInstance()
ProtoInstance2317.setName("Site")
ProtoInstance2317.setDEF("hanim_substernale")
fieldValue2318 = x3d.fieldValue()
fieldValue2318.setName("name")
fieldValue2318.setValue("substernale")

ProtoInstance2317.addFieldValue(fieldValue2318)
fieldValue2319 = x3d.fieldValue()
fieldValue2319.setName("translation")
fieldValue2319.setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683")

ProtoInstance2317.addFieldValue(fieldValue2319)

fieldValue2145.addChildren(ProtoInstance2317)
ProtoInstance2320 = x3d.ProtoInstance()
ProtoInstance2320.setName("Site")
ProtoInstance2320.setDEF("hanim_r_rib10")
fieldValue2321 = x3d.fieldValue()
fieldValue2321.setName("name")
fieldValue2321.setValue("r_rib10")

ProtoInstance2320.addFieldValue(fieldValue2321)
fieldValue2322 = x3d.fieldValue()
fieldValue2322.setName("translation")
fieldValue2322.setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432")

ProtoInstance2320.addFieldValue(fieldValue2322)

fieldValue2145.addChildren(ProtoInstance2320)
ProtoInstance2323 = x3d.ProtoInstance()
ProtoInstance2323.setName("Site")
ProtoInstance2323.setDEF("hanim_l_rib10")
fieldValue2324 = x3d.fieldValue()
fieldValue2324.setName("name")
fieldValue2324.setValue("l_rib10")

ProtoInstance2323.addFieldValue(fieldValue2324)
fieldValue2325 = x3d.fieldValue()
fieldValue2325.setName("translation")
fieldValue2325.setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202")

ProtoInstance2323.addFieldValue(fieldValue2325)

fieldValue2145.addChildren(ProtoInstance2323)
ProtoInstance2326 = x3d.ProtoInstance()
ProtoInstance2326.setName("Site")
ProtoInstance2326.setDEF("hanim_cervicale")
fieldValue2327 = x3d.fieldValue()
fieldValue2327.setName("name")
fieldValue2327.setValue("cervicale")

ProtoInstance2326.addFieldValue(fieldValue2327)
fieldValue2328 = x3d.fieldValue()
fieldValue2328.setName("translation")
fieldValue2328.setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754")

ProtoInstance2326.addFieldValue(fieldValue2328)

fieldValue2145.addChildren(ProtoInstance2326)
ProtoInstance2329 = x3d.ProtoInstance()
ProtoInstance2329.setName("Site")
ProtoInstance2329.setDEF("hanim_spine_2_lower_back")
fieldValue2330 = x3d.fieldValue()
fieldValue2330.setName("name")
fieldValue2330.setValue("spine_2_lower_back")

ProtoInstance2329.addFieldValue(fieldValue2330)
fieldValue2331 = x3d.fieldValue()
fieldValue2331.setName("translation")
fieldValue2331.setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661")

ProtoInstance2329.addFieldValue(fieldValue2331)

fieldValue2145.addChildren(ProtoInstance2329)
ProtoInstance2332 = x3d.ProtoInstance()
ProtoInstance2332.setName("Site")
ProtoInstance2332.setDEF("hanim_waist_preferred_posterior")
fieldValue2333 = x3d.fieldValue()
fieldValue2333.setName("name")
fieldValue2333.setValue("waist_preferred_posterior")

ProtoInstance2332.addFieldValue(fieldValue2333)
fieldValue2334 = x3d.fieldValue()
fieldValue2334.setName("translation")
fieldValue2334.setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754")

ProtoInstance2332.addFieldValue(fieldValue2334)

fieldValue2145.addChildren(ProtoInstance2332)
ProtoInstance2335 = x3d.ProtoInstance()
ProtoInstance2335.setName("Site")
ProtoInstance2335.setDEF("hanim_r_acromion")
fieldValue2336 = x3d.fieldValue()
fieldValue2336.setName("name")
fieldValue2336.setValue("r_acromion")

ProtoInstance2335.addFieldValue(fieldValue2336)
fieldValue2337 = x3d.fieldValue()
fieldValue2337.setName("translation")
fieldValue2337.setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541")

ProtoInstance2335.addFieldValue(fieldValue2337)

fieldValue2145.addChildren(ProtoInstance2335)
ProtoInstance2338 = x3d.ProtoInstance()
ProtoInstance2338.setName("Site")
ProtoInstance2338.setDEF("hanim_r_axilla_proximal")
fieldValue2339 = x3d.fieldValue()
fieldValue2339.setName("name")
fieldValue2339.setValue("r_axilla_proximal")

ProtoInstance2338.addFieldValue(fieldValue2339)
fieldValue2340 = x3d.fieldValue()
fieldValue2340.setName("translation")
fieldValue2340.setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438")

ProtoInstance2338.addFieldValue(fieldValue2340)

fieldValue2145.addChildren(ProtoInstance2338)
ProtoInstance2341 = x3d.ProtoInstance()
ProtoInstance2341.setName("Site")
ProtoInstance2341.setDEF("hanim_r_axilla_distal")
fieldValue2342 = x3d.fieldValue()
fieldValue2342.setName("name")
fieldValue2342.setValue("r_axilla_distal")

ProtoInstance2341.addFieldValue(fieldValue2342)
fieldValue2343 = x3d.fieldValue()
fieldValue2343.setName("translation")
fieldValue2343.setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678")

ProtoInstance2341.addFieldValue(fieldValue2343)

fieldValue2145.addChildren(ProtoInstance2341)
ProtoInstance2344 = x3d.ProtoInstance()
ProtoInstance2344.setName("Site")
ProtoInstance2344.setDEF("hanim_l_acromion")
fieldValue2345 = x3d.fieldValue()
fieldValue2345.setName("name")
fieldValue2345.setValue("l_acromion")

ProtoInstance2344.addFieldValue(fieldValue2345)
fieldValue2346 = x3d.fieldValue()
fieldValue2346.setName("translation")
fieldValue2346.setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014")

ProtoInstance2344.addFieldValue(fieldValue2346)

fieldValue2145.addChildren(ProtoInstance2344)
ProtoInstance2347 = x3d.ProtoInstance()
ProtoInstance2347.setName("Site")
ProtoInstance2347.setDEF("hanim_l_axilla_proximal")
fieldValue2348 = x3d.fieldValue()
fieldValue2348.setName("name")
fieldValue2348.setValue("l_axilla_proximal")

ProtoInstance2347.addFieldValue(fieldValue2348)
fieldValue2349 = x3d.fieldValue()
fieldValue2349.setName("translation")
fieldValue2349.setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937")

ProtoInstance2347.addFieldValue(fieldValue2349)

fieldValue2145.addChildren(ProtoInstance2347)
ProtoInstance2350 = x3d.ProtoInstance()
ProtoInstance2350.setName("Site")
ProtoInstance2350.setDEF("hanim_l_axilla_distal")
fieldValue2351 = x3d.fieldValue()
fieldValue2351.setName("name")
fieldValue2351.setValue("l_axilla_distal")

ProtoInstance2350.addFieldValue(fieldValue2351)
fieldValue2352 = x3d.fieldValue()
fieldValue2352.setName("translation")
fieldValue2352.setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388")

ProtoInstance2350.addFieldValue(fieldValue2352)

fieldValue2145.addChildren(ProtoInstance2350)
ProtoInstance2353 = x3d.ProtoInstance()
ProtoInstance2353.setName("Site")
ProtoInstance2353.setDEF("hanim_r_neck_base")
fieldValue2354 = x3d.fieldValue()
fieldValue2354.setName("name")
fieldValue2354.setValue("r_neck_base")

ProtoInstance2353.addFieldValue(fieldValue2354)
fieldValue2355 = x3d.fieldValue()
fieldValue2355.setName("translation")
fieldValue2355.setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071")

ProtoInstance2353.addFieldValue(fieldValue2355)

fieldValue2145.addChildren(ProtoInstance2353)
ProtoInstance2356 = x3d.ProtoInstance()
ProtoInstance2356.setName("Site")
ProtoInstance2356.setDEF("hanim_l_neck_base")
fieldValue2357 = x3d.fieldValue()
fieldValue2357.setName("name")
fieldValue2357.setValue("l_neck_base")

ProtoInstance2356.addFieldValue(fieldValue2357)
fieldValue2358 = x3d.fieldValue()
fieldValue2358.setName("translation")
fieldValue2358.setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478")

ProtoInstance2356.addFieldValue(fieldValue2358)

fieldValue2145.addChildren(ProtoInstance2356)
ProtoInstance2359 = x3d.ProtoInstance()
ProtoInstance2359.setName("Site")
ProtoInstance2359.setDEF("hanim_navel")
fieldValue2360 = x3d.fieldValue()
fieldValue2360.setName("name")
fieldValue2360.setValue("navel")

ProtoInstance2359.addFieldValue(fieldValue2360)
fieldValue2361 = x3d.fieldValue()
fieldValue2361.setName("translation")
fieldValue2361.setValue("0.006899999920278788 1.09660005569458 0.10170000046491623")

ProtoInstance2359.addFieldValue(fieldValue2361)

fieldValue2145.addChildren(ProtoInstance2359)
ProtoInstance2362 = x3d.ProtoInstance()
ProtoInstance2362.setName("Site")
ProtoInstance2362.setDEF("hanim_r_asis")
fieldValue2363 = x3d.fieldValue()
fieldValue2363.setName("name")
fieldValue2363.setValue("r_asis")

ProtoInstance2362.addFieldValue(fieldValue2363)
fieldValue2364 = x3d.fieldValue()
fieldValue2364.setName("translation")
fieldValue2364.setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747")

ProtoInstance2362.addFieldValue(fieldValue2364)

fieldValue2145.addChildren(ProtoInstance2362)
ProtoInstance2365 = x3d.ProtoInstance()
ProtoInstance2365.setName("Site")
ProtoInstance2365.setDEF("hanim_l_asis")
fieldValue2366 = x3d.fieldValue()
fieldValue2366.setName("name")
fieldValue2366.setValue("l_asis")

ProtoInstance2365.addFieldValue(fieldValue2366)
fieldValue2367 = x3d.fieldValue()
fieldValue2367.setName("translation")
fieldValue2367.setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836")

ProtoInstance2365.addFieldValue(fieldValue2367)

fieldValue2145.addChildren(ProtoInstance2365)
ProtoInstance2368 = x3d.ProtoInstance()
ProtoInstance2368.setName("Site")
ProtoInstance2368.setDEF("hanim_r_iliocristale")
fieldValue2369 = x3d.fieldValue()
fieldValue2369.setName("name")
fieldValue2369.setValue("r_iliocristale")

ProtoInstance2368.addFieldValue(fieldValue2369)
fieldValue2370 = x3d.fieldValue()
fieldValue2370.setName("translation")
fieldValue2370.setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187")

ProtoInstance2368.addFieldValue(fieldValue2370)

fieldValue2145.addChildren(ProtoInstance2368)
ProtoInstance2371 = x3d.ProtoInstance()
ProtoInstance2371.setName("Site")
ProtoInstance2371.setDEF("hanim_r_trochanterion")
fieldValue2372 = x3d.fieldValue()
fieldValue2372.setName("name")
fieldValue2372.setValue("r_trochanterion")

ProtoInstance2371.addFieldValue(fieldValue2372)
fieldValue2373 = x3d.fieldValue()
fieldValue2373.setName("translation")
fieldValue2373.setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514")

ProtoInstance2371.addFieldValue(fieldValue2373)

fieldValue2145.addChildren(ProtoInstance2371)
ProtoInstance2374 = x3d.ProtoInstance()
ProtoInstance2374.setName("Site")
ProtoInstance2374.setDEF("hanim_l_iliocristale")
fieldValue2375 = x3d.fieldValue()
fieldValue2375.setName("name")
fieldValue2375.setValue("l_iliocristale")

ProtoInstance2374.addFieldValue(fieldValue2375)
fieldValue2376 = x3d.fieldValue()
fieldValue2376.setName("translation")
fieldValue2376.setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001")

ProtoInstance2374.addFieldValue(fieldValue2376)

fieldValue2145.addChildren(ProtoInstance2374)
ProtoInstance2377 = x3d.ProtoInstance()
ProtoInstance2377.setName("Site")
ProtoInstance2377.setDEF("hanim_l_trochanterion")
fieldValue2378 = x3d.fieldValue()
fieldValue2378.setName("name")
fieldValue2378.setValue("l_trochanterion")

ProtoInstance2377.addFieldValue(fieldValue2378)
fieldValue2379 = x3d.fieldValue()
fieldValue2379.setName("translation")
fieldValue2379.setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183")

ProtoInstance2377.addFieldValue(fieldValue2379)

fieldValue2145.addChildren(ProtoInstance2377)
ProtoInstance2380 = x3d.ProtoInstance()
ProtoInstance2380.setName("Site")
ProtoInstance2380.setDEF("hanim_r_psis")
fieldValue2381 = x3d.fieldValue()
fieldValue2381.setName("name")
fieldValue2381.setValue("r_psis")

ProtoInstance2380.addFieldValue(fieldValue2381)
fieldValue2382 = x3d.fieldValue()
fieldValue2382.setName("translation")
fieldValue2382.setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082")

ProtoInstance2380.addFieldValue(fieldValue2382)

fieldValue2145.addChildren(ProtoInstance2380)
ProtoInstance2383 = x3d.ProtoInstance()
ProtoInstance2383.setName("Site")
ProtoInstance2383.setDEF("hanim_l_psis")
fieldValue2384 = x3d.fieldValue()
fieldValue2384.setName("name")
fieldValue2384.setValue("l_psis")

ProtoInstance2383.addFieldValue(fieldValue2384)
fieldValue2385 = x3d.fieldValue()
fieldValue2385.setName("translation")
fieldValue2385.setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388")

ProtoInstance2383.addFieldValue(fieldValue2385)

fieldValue2145.addChildren(ProtoInstance2383)
ProtoInstance2386 = x3d.ProtoInstance()
ProtoInstance2386.setName("Site")
ProtoInstance2386.setDEF("hanim_crotch")
fieldValue2387 = x3d.fieldValue()
fieldValue2387.setName("name")
fieldValue2387.setValue("crotch")

ProtoInstance2386.addFieldValue(fieldValue2387)
fieldValue2388 = x3d.fieldValue()
fieldValue2388.setName("translation")
fieldValue2388.setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367")

ProtoInstance2386.addFieldValue(fieldValue2388)

fieldValue2145.addChildren(ProtoInstance2386)

ProtoInstance110.addFieldValue(fieldValue2145)
fieldValue2389 = x3d.fieldValue()
fieldValue2389.setName("name")
fieldValue2389.setValue("humanoid")

ProtoInstance110.addFieldValue(fieldValue2389)
fieldValue2390 = x3d.fieldValue()
fieldValue2390.setName("info")
fieldValue2390.setValue("\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;1\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"")

ProtoInstance110.addFieldValue(fieldValue2390)

Scene4.addChildren(ProtoInstance110)
Group2391 = x3d.Group()
Group2391.setDEF("JointCenters_WorldInfo")
WorldInfo2392 = x3d.WorldInfo()
WorldInfo2392.setTitle("HANIM 200x Default Joint Centers, LOA&#8209;1")
WorldInfo2392.setInfo([" HANIM 200x Default Joint Centers, Level-Of-Articulation 1 -------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "])

Group2391.addChildren(WorldInfo2392)

Scene4.addChildren(Group2391)
NavigationInfo2393 = x3d.NavigationInfo()
NavigationInfo2393.setAvatarSize([0.25,1.600000023841858,0.75])
NavigationInfo2393.setSpeed(1.5)

Scene4.addChildren(NavigationInfo2393)

X3D0.setScene(Scene4)
X3D0.toFileX3D("../data/LOA1ExampleSourceWithDiamonds_RoundTrip.x3d")
