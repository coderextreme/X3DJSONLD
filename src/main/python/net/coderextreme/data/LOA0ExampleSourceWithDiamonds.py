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
ProtoInstance117.setName("Segment")
ProtoInstance117.setDEF("hanim_sacrum")
fieldValue118 = x3d.fieldValue()
fieldValue118.setName("name")
fieldValue118.setValue("sacrum")

ProtoInstance117.addFieldValue(fieldValue118)
fieldValue119 = x3d.fieldValue()
fieldValue119.setName("children")
ProtoInstance120 = x3d.ProtoInstance()
ProtoInstance120.setName("Site")
ProtoInstance120.setDEF("hanim_skull_tip")
fieldValue121 = x3d.fieldValue()
fieldValue121.setName("name")
fieldValue121.setValue("skull_tip")

ProtoInstance120.addFieldValue(fieldValue121)
fieldValue122 = x3d.fieldValue()
fieldValue122.setName("translation")
fieldValue122.setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678")

ProtoInstance120.addFieldValue(fieldValue122)

fieldValue119.addChildren(ProtoInstance120)
ProtoInstance123 = x3d.ProtoInstance()
ProtoInstance123.setName("Site")
ProtoInstance123.setDEF("hanim_sellion")
fieldValue124 = x3d.fieldValue()
fieldValue124.setName("name")
fieldValue124.setValue("sellion")

ProtoInstance123.addFieldValue(fieldValue124)
fieldValue125 = x3d.fieldValue()
fieldValue125.setName("translation")
fieldValue125.setValue("0.005799999926239252 1.631600022315979 0.0851999968290329")

ProtoInstance123.addFieldValue(fieldValue125)

fieldValue119.addChildren(ProtoInstance123)
ProtoInstance126 = x3d.ProtoInstance()
ProtoInstance126.setName("Site")
ProtoInstance126.setDEF("hanim_r_infraorbitale")
fieldValue127 = x3d.fieldValue()
fieldValue127.setName("name")
fieldValue127.setValue("r_infraorbitale")

ProtoInstance126.addFieldValue(fieldValue127)
fieldValue128 = x3d.fieldValue()
fieldValue128.setName("translation")
fieldValue128.setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547")

ProtoInstance126.addFieldValue(fieldValue128)

fieldValue119.addChildren(ProtoInstance126)
ProtoInstance129 = x3d.ProtoInstance()
ProtoInstance129.setName("Site")
ProtoInstance129.setDEF("hanim_l_infraorbitale")
fieldValue130 = x3d.fieldValue()
fieldValue130.setName("name")
fieldValue130.setValue("l_infraorbitale")

ProtoInstance129.addFieldValue(fieldValue130)
fieldValue131 = x3d.fieldValue()
fieldValue131.setName("translation")
fieldValue131.setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547")

ProtoInstance129.addFieldValue(fieldValue131)

fieldValue119.addChildren(ProtoInstance129)
ProtoInstance132 = x3d.ProtoInstance()
ProtoInstance132.setName("Site")
ProtoInstance132.setDEF("hanim_supramenton")
fieldValue133 = x3d.fieldValue()
fieldValue133.setName("name")
fieldValue133.setValue("supramenton")

ProtoInstance132.addFieldValue(fieldValue133)
fieldValue134 = x3d.fieldValue()
fieldValue134.setName("translation")
fieldValue134.setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962")

ProtoInstance132.addFieldValue(fieldValue134)

fieldValue119.addChildren(ProtoInstance132)
ProtoInstance135 = x3d.ProtoInstance()
ProtoInstance135.setName("Site")
ProtoInstance135.setDEF("hanim_r_tragion")
fieldValue136 = x3d.fieldValue()
fieldValue136.setName("name")
fieldValue136.setValue("r_tragion")

ProtoInstance135.addFieldValue(fieldValue136)
fieldValue137 = x3d.fieldValue()
fieldValue137.setName("translation")
fieldValue137.setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642")

ProtoInstance135.addFieldValue(fieldValue137)

fieldValue119.addChildren(ProtoInstance135)
ProtoInstance138 = x3d.ProtoInstance()
ProtoInstance138.setName("Site")
ProtoInstance138.setDEF("hanim_r_gonion")
fieldValue139 = x3d.fieldValue()
fieldValue139.setName("name")
fieldValue139.setValue("r_gonion")

ProtoInstance138.addFieldValue(fieldValue139)
fieldValue140 = x3d.fieldValue()
fieldValue140.setName("translation")
fieldValue140.setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176")

ProtoInstance138.addFieldValue(fieldValue140)

fieldValue119.addChildren(ProtoInstance138)
ProtoInstance141 = x3d.ProtoInstance()
ProtoInstance141.setName("Site")
ProtoInstance141.setDEF("hanim_l_tragion")
fieldValue142 = x3d.fieldValue()
fieldValue142.setName("name")
fieldValue142.setValue("l_tragion")

ProtoInstance141.addFieldValue(fieldValue142)
fieldValue143 = x3d.fieldValue()
fieldValue143.setName("translation")
fieldValue143.setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874")

ProtoInstance141.addFieldValue(fieldValue143)

fieldValue119.addChildren(ProtoInstance141)
ProtoInstance144 = x3d.ProtoInstance()
ProtoInstance144.setName("Site")
ProtoInstance144.setDEF("hanim_l_gonion")
fieldValue145 = x3d.fieldValue()
fieldValue145.setName("name")
fieldValue145.setValue("l_gonion")

ProtoInstance144.addFieldValue(fieldValue145)
fieldValue146 = x3d.fieldValue()
fieldValue146.setName("translation")
fieldValue146.setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066")

ProtoInstance144.addFieldValue(fieldValue146)

fieldValue119.addChildren(ProtoInstance144)
ProtoInstance147 = x3d.ProtoInstance()
ProtoInstance147.setName("Site")
ProtoInstance147.setDEF("hanim_nuchale")
fieldValue148 = x3d.fieldValue()
fieldValue148.setName("name")
fieldValue148.setValue("nuchale")

ProtoInstance147.addFieldValue(fieldValue148)
fieldValue149 = x3d.fieldValue()
fieldValue149.setName("translation")
fieldValue149.setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")

ProtoInstance147.addFieldValue(fieldValue149)

fieldValue119.addChildren(ProtoInstance147)
ProtoInstance150 = x3d.ProtoInstance()
ProtoInstance150.setName("Site")
ProtoInstance150.setDEF("hanim_r_clavicale")
fieldValue151 = x3d.fieldValue()
fieldValue151.setName("name")
fieldValue151.setValue("r_clavicale")

ProtoInstance150.addFieldValue(fieldValue151)
fieldValue152 = x3d.fieldValue()
fieldValue152.setName("translation")
fieldValue152.setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033")

ProtoInstance150.addFieldValue(fieldValue152)

fieldValue119.addChildren(ProtoInstance150)
ProtoInstance153 = x3d.ProtoInstance()
ProtoInstance153.setName("Site")
ProtoInstance153.setDEF("hanim_suprasternale")
fieldValue154 = x3d.fieldValue()
fieldValue154.setName("name")
fieldValue154.setValue("suprasternale")

ProtoInstance153.addFieldValue(fieldValue154)
fieldValue155 = x3d.fieldValue()
fieldValue155.setName("translation")
fieldValue155.setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869")

ProtoInstance153.addFieldValue(fieldValue155)

fieldValue119.addChildren(ProtoInstance153)
ProtoInstance156 = x3d.ProtoInstance()
ProtoInstance156.setName("Site")
ProtoInstance156.setDEF("hanim_l_clavicale")
fieldValue157 = x3d.fieldValue()
fieldValue157.setName("name")
fieldValue157.setValue("l_clavicale")

ProtoInstance156.addFieldValue(fieldValue157)
fieldValue158 = x3d.fieldValue()
fieldValue158.setName("translation")
fieldValue158.setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754")

ProtoInstance156.addFieldValue(fieldValue158)

fieldValue119.addChildren(ProtoInstance156)
ProtoInstance159 = x3d.ProtoInstance()
ProtoInstance159.setName("Site")
ProtoInstance159.setDEF("hanim_r_thelion")
fieldValue160 = x3d.fieldValue()
fieldValue160.setName("name")
fieldValue160.setValue("r_thelion")

ProtoInstance159.addFieldValue(fieldValue160)
fieldValue161 = x3d.fieldValue()
fieldValue161.setName("translation")
fieldValue161.setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911")

ProtoInstance159.addFieldValue(fieldValue161)

fieldValue119.addChildren(ProtoInstance159)
ProtoInstance162 = x3d.ProtoInstance()
ProtoInstance162.setName("Site")
ProtoInstance162.setDEF("hanim_l_thelion")
fieldValue163 = x3d.fieldValue()
fieldValue163.setName("name")
fieldValue163.setValue("l_thelion")

ProtoInstance162.addFieldValue(fieldValue163)
fieldValue164 = x3d.fieldValue()
fieldValue164.setName("translation")
fieldValue164.setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689")

ProtoInstance162.addFieldValue(fieldValue164)

fieldValue119.addChildren(ProtoInstance162)
ProtoInstance165 = x3d.ProtoInstance()
ProtoInstance165.setName("Site")
ProtoInstance165.setDEF("hanim_substernale")
fieldValue166 = x3d.fieldValue()
fieldValue166.setName("name")
fieldValue166.setValue("substernale")

ProtoInstance165.addFieldValue(fieldValue166)
fieldValue167 = x3d.fieldValue()
fieldValue167.setName("translation")
fieldValue167.setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683")

ProtoInstance165.addFieldValue(fieldValue167)

fieldValue119.addChildren(ProtoInstance165)
ProtoInstance168 = x3d.ProtoInstance()
ProtoInstance168.setName("Site")
ProtoInstance168.setDEF("hanim_r_rib10")
fieldValue169 = x3d.fieldValue()
fieldValue169.setName("name")
fieldValue169.setValue("r_rib10")

ProtoInstance168.addFieldValue(fieldValue169)
fieldValue170 = x3d.fieldValue()
fieldValue170.setName("translation")
fieldValue170.setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432")

ProtoInstance168.addFieldValue(fieldValue170)

fieldValue119.addChildren(ProtoInstance168)
ProtoInstance171 = x3d.ProtoInstance()
ProtoInstance171.setName("Site")
ProtoInstance171.setDEF("hanim_r_asis")
fieldValue172 = x3d.fieldValue()
fieldValue172.setName("name")
fieldValue172.setValue("r_asis")

ProtoInstance171.addFieldValue(fieldValue172)
fieldValue173 = x3d.fieldValue()
fieldValue173.setName("translation")
fieldValue173.setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747")

ProtoInstance171.addFieldValue(fieldValue173)

fieldValue119.addChildren(ProtoInstance171)
ProtoInstance174 = x3d.ProtoInstance()
ProtoInstance174.setName("Site")
ProtoInstance174.setDEF("hanim_l_rib10")
fieldValue175 = x3d.fieldValue()
fieldValue175.setName("name")
fieldValue175.setValue("l_rib10")

ProtoInstance174.addFieldValue(fieldValue175)
fieldValue176 = x3d.fieldValue()
fieldValue176.setName("translation")
fieldValue176.setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202")

ProtoInstance174.addFieldValue(fieldValue176)

fieldValue119.addChildren(ProtoInstance174)
ProtoInstance177 = x3d.ProtoInstance()
ProtoInstance177.setName("Site")
ProtoInstance177.setDEF("hanim_l_asis")
fieldValue178 = x3d.fieldValue()
fieldValue178.setName("name")
fieldValue178.setValue("l_asis")

ProtoInstance177.addFieldValue(fieldValue178)
fieldValue179 = x3d.fieldValue()
fieldValue179.setName("translation")
fieldValue179.setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836")

ProtoInstance177.addFieldValue(fieldValue179)

fieldValue119.addChildren(ProtoInstance177)
ProtoInstance180 = x3d.ProtoInstance()
ProtoInstance180.setName("Site")
ProtoInstance180.setDEF("hanim_r_iliocristale")
fieldValue181 = x3d.fieldValue()
fieldValue181.setName("name")
fieldValue181.setValue("r_iliocristale")

ProtoInstance180.addFieldValue(fieldValue181)
fieldValue182 = x3d.fieldValue()
fieldValue182.setName("translation")
fieldValue182.setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187")

ProtoInstance180.addFieldValue(fieldValue182)

fieldValue119.addChildren(ProtoInstance180)
ProtoInstance183 = x3d.ProtoInstance()
ProtoInstance183.setName("Site")
ProtoInstance183.setDEF("hanim_r_trochanterion")
fieldValue184 = x3d.fieldValue()
fieldValue184.setName("name")
fieldValue184.setValue("r_trochanterion")

ProtoInstance183.addFieldValue(fieldValue184)
fieldValue185 = x3d.fieldValue()
fieldValue185.setName("translation")
fieldValue185.setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514")

ProtoInstance183.addFieldValue(fieldValue185)

fieldValue119.addChildren(ProtoInstance183)
ProtoInstance186 = x3d.ProtoInstance()
ProtoInstance186.setName("Site")
ProtoInstance186.setDEF("hanim_l_iliocristale")
fieldValue187 = x3d.fieldValue()
fieldValue187.setName("name")
fieldValue187.setValue("l_iliocristale")

ProtoInstance186.addFieldValue(fieldValue187)
fieldValue188 = x3d.fieldValue()
fieldValue188.setName("translation")
fieldValue188.setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001")

ProtoInstance186.addFieldValue(fieldValue188)

fieldValue119.addChildren(ProtoInstance186)
ProtoInstance189 = x3d.ProtoInstance()
ProtoInstance189.setName("Site")
ProtoInstance189.setDEF("hanim_l_trochanterion")
fieldValue190 = x3d.fieldValue()
fieldValue190.setName("name")
fieldValue190.setValue("l_trochanterion")

ProtoInstance189.addFieldValue(fieldValue190)
fieldValue191 = x3d.fieldValue()
fieldValue191.setName("translation")
fieldValue191.setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183")

ProtoInstance189.addFieldValue(fieldValue191)

fieldValue119.addChildren(ProtoInstance189)
ProtoInstance192 = x3d.ProtoInstance()
ProtoInstance192.setName("Site")
ProtoInstance192.setDEF("hanim_cervicale")
fieldValue193 = x3d.fieldValue()
fieldValue193.setName("name")
fieldValue193.setValue("cervicale")

ProtoInstance192.addFieldValue(fieldValue193)
fieldValue194 = x3d.fieldValue()
fieldValue194.setName("translation")
fieldValue194.setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754")

ProtoInstance192.addFieldValue(fieldValue194)

fieldValue119.addChildren(ProtoInstance192)
ProtoInstance195 = x3d.ProtoInstance()
ProtoInstance195.setName("Site")
ProtoInstance195.setDEF("hanim_spine_2_lower_back")
fieldValue196 = x3d.fieldValue()
fieldValue196.setName("name")
fieldValue196.setValue("spine_2_lower_back")

ProtoInstance195.addFieldValue(fieldValue196)
fieldValue197 = x3d.fieldValue()
fieldValue197.setName("translation")
fieldValue197.setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661")

ProtoInstance195.addFieldValue(fieldValue197)

fieldValue119.addChildren(ProtoInstance195)
ProtoInstance198 = x3d.ProtoInstance()
ProtoInstance198.setName("Site")
ProtoInstance198.setDEF("hanim_r_psis")
fieldValue199 = x3d.fieldValue()
fieldValue199.setName("name")
fieldValue199.setValue("r_psis")

ProtoInstance198.addFieldValue(fieldValue199)
fieldValue200 = x3d.fieldValue()
fieldValue200.setName("translation")
fieldValue200.setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082")

ProtoInstance198.addFieldValue(fieldValue200)

fieldValue119.addChildren(ProtoInstance198)
ProtoInstance201 = x3d.ProtoInstance()
ProtoInstance201.setName("Site")
ProtoInstance201.setDEF("hanim_l_psis")
fieldValue202 = x3d.fieldValue()
fieldValue202.setName("name")
fieldValue202.setValue("l_psis")

ProtoInstance201.addFieldValue(fieldValue202)
fieldValue203 = x3d.fieldValue()
fieldValue203.setName("translation")
fieldValue203.setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388")

ProtoInstance201.addFieldValue(fieldValue203)

fieldValue119.addChildren(ProtoInstance201)
ProtoInstance204 = x3d.ProtoInstance()
ProtoInstance204.setName("Site")
ProtoInstance204.setDEF("hanim_waist_preferred_posterior")
fieldValue205 = x3d.fieldValue()
fieldValue205.setName("name")
fieldValue205.setValue("waist_preferred_posterior")

ProtoInstance204.addFieldValue(fieldValue205)
fieldValue206 = x3d.fieldValue()
fieldValue206.setName("translation")
fieldValue206.setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754")

ProtoInstance204.addFieldValue(fieldValue206)

fieldValue119.addChildren(ProtoInstance204)
ProtoInstance207 = x3d.ProtoInstance()
ProtoInstance207.setName("Site")
ProtoInstance207.setDEF("hanim_r_acromion")
fieldValue208 = x3d.fieldValue()
fieldValue208.setName("name")
fieldValue208.setValue("r_acromion")

ProtoInstance207.addFieldValue(fieldValue208)
fieldValue209 = x3d.fieldValue()
fieldValue209.setName("translation")
fieldValue209.setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541")

ProtoInstance207.addFieldValue(fieldValue209)

fieldValue119.addChildren(ProtoInstance207)
ProtoInstance210 = x3d.ProtoInstance()
ProtoInstance210.setName("Site")
ProtoInstance210.setDEF("hanim_r_axilla_proximal")
fieldValue211 = x3d.fieldValue()
fieldValue211.setName("name")
fieldValue211.setValue("r_axilla_proximal")

ProtoInstance210.addFieldValue(fieldValue211)
fieldValue212 = x3d.fieldValue()
fieldValue212.setName("translation")
fieldValue212.setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438")

ProtoInstance210.addFieldValue(fieldValue212)

fieldValue119.addChildren(ProtoInstance210)
ProtoInstance213 = x3d.ProtoInstance()
ProtoInstance213.setName("Site")
ProtoInstance213.setDEF("hanim_r_radial_styloid")
fieldValue214 = x3d.fieldValue()
fieldValue214.setName("name")
fieldValue214.setValue("r_radial_styloid")

ProtoInstance213.addFieldValue(fieldValue214)
fieldValue215 = x3d.fieldValue()
fieldValue215.setName("translation")
fieldValue215.setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236")

ProtoInstance213.addFieldValue(fieldValue215)

fieldValue119.addChildren(ProtoInstance213)
ProtoInstance216 = x3d.ProtoInstance()
ProtoInstance216.setName("Site")
ProtoInstance216.setDEF("hanim_r_axilla_distal")
fieldValue217 = x3d.fieldValue()
fieldValue217.setName("name")
fieldValue217.setValue("r_axilla_distal")

ProtoInstance216.addFieldValue(fieldValue217)
fieldValue218 = x3d.fieldValue()
fieldValue218.setName("translation")
fieldValue218.setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678")

ProtoInstance216.addFieldValue(fieldValue218)

fieldValue119.addChildren(ProtoInstance216)
ProtoInstance219 = x3d.ProtoInstance()
ProtoInstance219.setName("Site")
ProtoInstance219.setDEF("hanim_r_olecranon")
fieldValue220 = x3d.fieldValue()
fieldValue220.setName("name")
fieldValue220.setValue("r_olecranon")

ProtoInstance219.addFieldValue(fieldValue220)
fieldValue221 = x3d.fieldValue()
fieldValue221.setName("translation")
fieldValue221.setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")

ProtoInstance219.addFieldValue(fieldValue221)

fieldValue119.addChildren(ProtoInstance219)
ProtoInstance222 = x3d.ProtoInstance()
ProtoInstance222.setName("Site")
ProtoInstance222.setDEF("hanim_r_humeral_lateral_epicondyles")
fieldValue223 = x3d.fieldValue()
fieldValue223.setName("name")
fieldValue223.setValue("r_humeral_lateral_epicondyles")

ProtoInstance222.addFieldValue(fieldValue223)
fieldValue224 = x3d.fieldValue()
fieldValue224.setName("translation")
fieldValue224.setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")

ProtoInstance222.addFieldValue(fieldValue224)

fieldValue119.addChildren(ProtoInstance222)
ProtoInstance225 = x3d.ProtoInstance()
ProtoInstance225.setName("Site")
ProtoInstance225.setDEF("hanim_r_humeral_medial_epicondyles")
fieldValue226 = x3d.fieldValue()
fieldValue226.setName("name")
fieldValue226.setValue("r_humeral_medial_epicondyles")

ProtoInstance225.addFieldValue(fieldValue226)
fieldValue227 = x3d.fieldValue()
fieldValue227.setName("translation")
fieldValue227.setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")

ProtoInstance225.addFieldValue(fieldValue227)

fieldValue119.addChildren(ProtoInstance225)
ProtoInstance228 = x3d.ProtoInstance()
ProtoInstance228.setName("Site")
ProtoInstance228.setDEF("hanim_r_radiale")
fieldValue229 = x3d.fieldValue()
fieldValue229.setName("name")
fieldValue229.setValue("r_radiale")

ProtoInstance228.addFieldValue(fieldValue229)
fieldValue230 = x3d.fieldValue()
fieldValue230.setName("translation")
fieldValue230.setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")

ProtoInstance228.addFieldValue(fieldValue230)

fieldValue119.addChildren(ProtoInstance228)
ProtoInstance231 = x3d.ProtoInstance()
ProtoInstance231.setName("Site")
ProtoInstance231.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue232 = x3d.fieldValue()
fieldValue232.setName("name")
fieldValue232.setValue("r_metacarpal_phalanx_2")

ProtoInstance231.addFieldValue(fieldValue232)
fieldValue233 = x3d.fieldValue()
fieldValue233.setName("translation")
fieldValue233.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance231.addFieldValue(fieldValue233)

fieldValue119.addChildren(ProtoInstance231)
ProtoInstance234 = x3d.ProtoInstance()
ProtoInstance234.setName("Site")
ProtoInstance234.setDEF("hanim_r_dactylion")
fieldValue235 = x3d.fieldValue()
fieldValue235.setName("name")
fieldValue235.setValue("r_dactylion")

ProtoInstance234.addFieldValue(fieldValue235)
fieldValue236 = x3d.fieldValue()
fieldValue236.setName("translation")
fieldValue236.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance234.addFieldValue(fieldValue236)

fieldValue119.addChildren(ProtoInstance234)
ProtoInstance237 = x3d.ProtoInstance()
ProtoInstance237.setName("Site")
ProtoInstance237.setDEF("hanim_r_ulnar_styloid")
fieldValue238 = x3d.fieldValue()
fieldValue238.setName("name")
fieldValue238.setValue("r_ulnar_styloid")

ProtoInstance237.addFieldValue(fieldValue238)
fieldValue239 = x3d.fieldValue()
fieldValue239.setName("translation")
fieldValue239.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance237.addFieldValue(fieldValue239)

fieldValue119.addChildren(ProtoInstance237)
ProtoInstance240 = x3d.ProtoInstance()
ProtoInstance240.setName("Site")
ProtoInstance240.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue241 = x3d.fieldValue()
fieldValue241.setName("name")
fieldValue241.setValue("r_metacarpal_phalanx_5")

ProtoInstance240.addFieldValue(fieldValue241)
fieldValue242 = x3d.fieldValue()
fieldValue242.setName("translation")
fieldValue242.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance240.addFieldValue(fieldValue242)

fieldValue119.addChildren(ProtoInstance240)
ProtoInstance243 = x3d.ProtoInstance()
ProtoInstance243.setName("Site")
ProtoInstance243.setDEF("hanim_l_acromion")
fieldValue244 = x3d.fieldValue()
fieldValue244.setName("name")
fieldValue244.setValue("l_acromion")

ProtoInstance243.addFieldValue(fieldValue244)
fieldValue245 = x3d.fieldValue()
fieldValue245.setName("translation")
fieldValue245.setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014")

ProtoInstance243.addFieldValue(fieldValue245)

fieldValue119.addChildren(ProtoInstance243)
ProtoInstance246 = x3d.ProtoInstance()
ProtoInstance246.setName("Site")
ProtoInstance246.setDEF("hanim_l_axilla_proximal")
fieldValue247 = x3d.fieldValue()
fieldValue247.setName("name")
fieldValue247.setValue("l_axilla_proximal")

ProtoInstance246.addFieldValue(fieldValue247)
fieldValue248 = x3d.fieldValue()
fieldValue248.setName("translation")
fieldValue248.setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937")

ProtoInstance246.addFieldValue(fieldValue248)

fieldValue119.addChildren(ProtoInstance246)
ProtoInstance249 = x3d.ProtoInstance()
ProtoInstance249.setName("Site")
ProtoInstance249.setDEF("hanim_l_radial_styloid")
fieldValue250 = x3d.fieldValue()
fieldValue250.setName("name")
fieldValue250.setValue("l_radial_styloid")

ProtoInstance249.addFieldValue(fieldValue250)
fieldValue251 = x3d.fieldValue()
fieldValue251.setName("translation")
fieldValue251.setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691")

ProtoInstance249.addFieldValue(fieldValue251)

fieldValue119.addChildren(ProtoInstance249)
ProtoInstance252 = x3d.ProtoInstance()
ProtoInstance252.setName("Site")
ProtoInstance252.setDEF("hanim_l_axilla_distal")
fieldValue253 = x3d.fieldValue()
fieldValue253.setName("name")
fieldValue253.setValue("l_axilla_distal")

ProtoInstance252.addFieldValue(fieldValue253)
fieldValue254 = x3d.fieldValue()
fieldValue254.setName("translation")
fieldValue254.setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388")

ProtoInstance252.addFieldValue(fieldValue254)

fieldValue119.addChildren(ProtoInstance252)
ProtoInstance255 = x3d.ProtoInstance()
ProtoInstance255.setName("Site")
ProtoInstance255.setDEF("hanim_l_olecranon")
fieldValue256 = x3d.fieldValue()
fieldValue256.setName("name")
fieldValue256.setValue("l_olecranon")

ProtoInstance255.addFieldValue(fieldValue256)
fieldValue257 = x3d.fieldValue()
fieldValue257.setName("translation")
fieldValue257.setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")

ProtoInstance255.addFieldValue(fieldValue257)

fieldValue119.addChildren(ProtoInstance255)
ProtoInstance258 = x3d.ProtoInstance()
ProtoInstance258.setName("Site")
ProtoInstance258.setDEF("hanim_l_humeral_lateral_epicondyles")
fieldValue259 = x3d.fieldValue()
fieldValue259.setName("name")
fieldValue259.setValue("l_humeral_lateral_epicondyles")

ProtoInstance258.addFieldValue(fieldValue259)
fieldValue260 = x3d.fieldValue()
fieldValue260.setName("translation")
fieldValue260.setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355")

ProtoInstance258.addFieldValue(fieldValue260)

fieldValue119.addChildren(ProtoInstance258)
ProtoInstance261 = x3d.ProtoInstance()
ProtoInstance261.setName("Site")
ProtoInstance261.setDEF("hanim_l_humeral_medial_epicondyles")
fieldValue262 = x3d.fieldValue()
fieldValue262.setName("name")
fieldValue262.setValue("l_humeral_medial_epicondyles")

ProtoInstance261.addFieldValue(fieldValue262)
fieldValue263 = x3d.fieldValue()
fieldValue263.setName("translation")
fieldValue263.setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661")

ProtoInstance261.addFieldValue(fieldValue263)

fieldValue119.addChildren(ProtoInstance261)
ProtoInstance264 = x3d.ProtoInstance()
ProtoInstance264.setName("Site")
ProtoInstance264.setDEF("hanim_l_radiale")
fieldValue265 = x3d.fieldValue()
fieldValue265.setName("name")
fieldValue265.setValue("l_radiale")

ProtoInstance264.addFieldValue(fieldValue265)
fieldValue266 = x3d.fieldValue()
fieldValue266.setName("translation")
fieldValue266.setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268")

ProtoInstance264.addFieldValue(fieldValue266)

fieldValue119.addChildren(ProtoInstance264)
ProtoInstance267 = x3d.ProtoInstance()
ProtoInstance267.setName("Site")
ProtoInstance267.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue268 = x3d.fieldValue()
fieldValue268.setName("name")
fieldValue268.setValue("l_metacarpal_phalanx_2")

ProtoInstance267.addFieldValue(fieldValue268)
fieldValue269 = x3d.fieldValue()
fieldValue269.setName("translation")
fieldValue269.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance267.addFieldValue(fieldValue269)

fieldValue119.addChildren(ProtoInstance267)
ProtoInstance270 = x3d.ProtoInstance()
ProtoInstance270.setName("Site")
ProtoInstance270.setDEF("hanim_l_dactylion")
fieldValue271 = x3d.fieldValue()
fieldValue271.setName("name")
fieldValue271.setValue("l_dactylion")

ProtoInstance270.addFieldValue(fieldValue271)
fieldValue272 = x3d.fieldValue()
fieldValue272.setName("translation")
fieldValue272.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance270.addFieldValue(fieldValue272)

fieldValue119.addChildren(ProtoInstance270)
ProtoInstance273 = x3d.ProtoInstance()
ProtoInstance273.setName("Site")
ProtoInstance273.setDEF("hanim_l_ulnar_styloid")
fieldValue274 = x3d.fieldValue()
fieldValue274.setName("name")
fieldValue274.setValue("l_ulnar_styloid")

ProtoInstance273.addFieldValue(fieldValue274)
fieldValue275 = x3d.fieldValue()
fieldValue275.setName("translation")
fieldValue275.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance273.addFieldValue(fieldValue275)

fieldValue119.addChildren(ProtoInstance273)
ProtoInstance276 = x3d.ProtoInstance()
ProtoInstance276.setName("Site")
ProtoInstance276.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue277 = x3d.fieldValue()
fieldValue277.setName("name")
fieldValue277.setValue("l_metacarpal_phalanx_5")

ProtoInstance276.addFieldValue(fieldValue277)
fieldValue278 = x3d.fieldValue()
fieldValue278.setName("translation")
fieldValue278.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance276.addFieldValue(fieldValue278)

fieldValue119.addChildren(ProtoInstance276)
ProtoInstance279 = x3d.ProtoInstance()
ProtoInstance279.setName("Site")
ProtoInstance279.setDEF("hanim_r_knee_crease")
fieldValue280 = x3d.fieldValue()
fieldValue280.setName("name")
fieldValue280.setValue("r_knee_crease")

ProtoInstance279.addFieldValue(fieldValue280)
fieldValue281 = x3d.fieldValue()
fieldValue281.setName("translation")
fieldValue281.setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")

ProtoInstance279.addFieldValue(fieldValue281)

fieldValue119.addChildren(ProtoInstance279)
ProtoInstance282 = x3d.ProtoInstance()
ProtoInstance282.setName("Site")
ProtoInstance282.setDEF("hanim_r_femoral_lateral_epicondyles")
fieldValue283 = x3d.fieldValue()
fieldValue283.setName("name")
fieldValue283.setValue("r_femoral_lateral_epicondyles")

ProtoInstance282.addFieldValue(fieldValue283)
fieldValue284 = x3d.fieldValue()
fieldValue284.setName("translation")
fieldValue284.setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052")

ProtoInstance282.addFieldValue(fieldValue284)

fieldValue119.addChildren(ProtoInstance282)
ProtoInstance285 = x3d.ProtoInstance()
ProtoInstance285.setName("Site")
ProtoInstance285.setDEF("hanim_r_femoral_medial_epicondyles")
fieldValue286 = x3d.fieldValue()
fieldValue286.setName("name")
fieldValue286.setValue("r_femoral_lateral_epicondyles")

ProtoInstance285.addFieldValue(fieldValue286)
fieldValue287 = x3d.fieldValue()
fieldValue287.setName("translation")
fieldValue287.setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821")

ProtoInstance285.addFieldValue(fieldValue287)

fieldValue119.addChildren(ProtoInstance285)
ProtoInstance288 = x3d.ProtoInstance()
ProtoInstance288.setName("Site")
ProtoInstance288.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue289 = x3d.fieldValue()
fieldValue289.setName("name")
fieldValue289.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance288.addFieldValue(fieldValue289)
fieldValue290 = x3d.fieldValue()
fieldValue290.setName("translation")
fieldValue290.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance288.addFieldValue(fieldValue290)

fieldValue119.addChildren(ProtoInstance288)
ProtoInstance291 = x3d.ProtoInstance()
ProtoInstance291.setName("Site")
ProtoInstance291.setDEF("hanim_r_lateral_malleolus")
fieldValue292 = x3d.fieldValue()
fieldValue292.setName("name")
fieldValue292.setValue("r_lateral_malleolus")

ProtoInstance291.addFieldValue(fieldValue292)
fieldValue293 = x3d.fieldValue()
fieldValue293.setName("translation")
fieldValue293.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance291.addFieldValue(fieldValue293)

fieldValue119.addChildren(ProtoInstance291)
ProtoInstance294 = x3d.ProtoInstance()
ProtoInstance294.setName("Site")
ProtoInstance294.setDEF("hanim_r_medial_malleolus")
fieldValue295 = x3d.fieldValue()
fieldValue295.setName("name")
fieldValue295.setValue("r_medial_malleolus")

ProtoInstance294.addFieldValue(fieldValue295)
fieldValue296 = x3d.fieldValue()
fieldValue296.setName("translation")
fieldValue296.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance294.addFieldValue(fieldValue296)

fieldValue119.addChildren(ProtoInstance294)
ProtoInstance297 = x3d.ProtoInstance()
ProtoInstance297.setName("Site")
ProtoInstance297.setDEF("hanim_r_sphyrion")
fieldValue298 = x3d.fieldValue()
fieldValue298.setName("name")
fieldValue298.setValue("r_sphyrion")

ProtoInstance297.addFieldValue(fieldValue298)
fieldValue299 = x3d.fieldValue()
fieldValue299.setName("translation")
fieldValue299.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance297.addFieldValue(fieldValue299)

fieldValue119.addChildren(ProtoInstance297)
ProtoInstance300 = x3d.ProtoInstance()
ProtoInstance300.setName("Site")
ProtoInstance300.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue301 = x3d.fieldValue()
fieldValue301.setName("name")
fieldValue301.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance300.addFieldValue(fieldValue301)
fieldValue302 = x3d.fieldValue()
fieldValue302.setName("translation")
fieldValue302.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance300.addFieldValue(fieldValue302)

fieldValue119.addChildren(ProtoInstance300)
ProtoInstance303 = x3d.ProtoInstance()
ProtoInstance303.setName("Site")
ProtoInstance303.setDEF("hanim_r_calcaneus_posterior")
fieldValue304 = x3d.fieldValue()
fieldValue304.setName("name")
fieldValue304.setValue("r_calcaneus_posterior")

ProtoInstance303.addFieldValue(fieldValue304)
fieldValue305 = x3d.fieldValue()
fieldValue305.setName("translation")
fieldValue305.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance303.addFieldValue(fieldValue305)

fieldValue119.addChildren(ProtoInstance303)
ProtoInstance306 = x3d.ProtoInstance()
ProtoInstance306.setName("Site")
ProtoInstance306.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue307 = x3d.fieldValue()
fieldValue307.setName("name")
fieldValue307.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance306.addFieldValue(fieldValue307)
fieldValue308 = x3d.fieldValue()
fieldValue308.setName("translation")
fieldValue308.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance306.addFieldValue(fieldValue308)

fieldValue119.addChildren(ProtoInstance306)
ProtoInstance309 = x3d.ProtoInstance()
ProtoInstance309.setName("Site")
ProtoInstance309.setDEF("hanim_l_knee_crease")
fieldValue310 = x3d.fieldValue()
fieldValue310.setName("name")
fieldValue310.setValue("l_knee_crease")

ProtoInstance309.addFieldValue(fieldValue310)
fieldValue311 = x3d.fieldValue()
fieldValue311.setName("translation")
fieldValue311.setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757")

ProtoInstance309.addFieldValue(fieldValue311)

fieldValue119.addChildren(ProtoInstance309)
ProtoInstance312 = x3d.ProtoInstance()
ProtoInstance312.setName("Site")
ProtoInstance312.setDEF("hanim_l_femoral_lateral_epicondyles")
fieldValue313 = x3d.fieldValue()
fieldValue313.setName("name")
fieldValue313.setValue("l_femoral_lateral_epicondyles")

ProtoInstance312.addFieldValue(fieldValue313)
fieldValue314 = x3d.fieldValue()
fieldValue314.setName("translation")
fieldValue314.setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746")

ProtoInstance312.addFieldValue(fieldValue314)

fieldValue119.addChildren(ProtoInstance312)
ProtoInstance315 = x3d.ProtoInstance()
ProtoInstance315.setName("Site")
ProtoInstance315.setDEF("hanim_l_femoral_medial_epicondyles")
fieldValue316 = x3d.fieldValue()
fieldValue316.setName("name")
fieldValue316.setValue("l_femoral_lateral_epicondyles")

ProtoInstance315.addFieldValue(fieldValue316)
fieldValue317 = x3d.fieldValue()
fieldValue317.setName("translation")
fieldValue317.setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183")

ProtoInstance315.addFieldValue(fieldValue317)

fieldValue119.addChildren(ProtoInstance315)
ProtoInstance318 = x3d.ProtoInstance()
ProtoInstance318.setName("Site")
ProtoInstance318.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue319 = x3d.fieldValue()
fieldValue319.setName("name")
fieldValue319.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance318.addFieldValue(fieldValue319)
fieldValue320 = x3d.fieldValue()
fieldValue320.setName("translation")
fieldValue320.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance318.addFieldValue(fieldValue320)

fieldValue119.addChildren(ProtoInstance318)
ProtoInstance321 = x3d.ProtoInstance()
ProtoInstance321.setName("Site")
ProtoInstance321.setDEF("hanim_l_lateral_malleolus")
fieldValue322 = x3d.fieldValue()
fieldValue322.setName("name")
fieldValue322.setValue("l_lateral_malleolus")

ProtoInstance321.addFieldValue(fieldValue322)
fieldValue323 = x3d.fieldValue()
fieldValue323.setName("translation")
fieldValue323.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance321.addFieldValue(fieldValue323)

fieldValue119.addChildren(ProtoInstance321)
ProtoInstance324 = x3d.ProtoInstance()
ProtoInstance324.setName("Site")
ProtoInstance324.setDEF("hanim_l_medial_malleolus")
fieldValue325 = x3d.fieldValue()
fieldValue325.setName("name")
fieldValue325.setValue("l_medial_malleolus")

ProtoInstance324.addFieldValue(fieldValue325)
fieldValue326 = x3d.fieldValue()
fieldValue326.setName("translation")
fieldValue326.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance324.addFieldValue(fieldValue326)

fieldValue119.addChildren(ProtoInstance324)
ProtoInstance327 = x3d.ProtoInstance()
ProtoInstance327.setName("Site")
ProtoInstance327.setDEF("hanim_l_sphyrion")
fieldValue328 = x3d.fieldValue()
fieldValue328.setName("name")
fieldValue328.setValue("l_sphyrion")

ProtoInstance327.addFieldValue(fieldValue328)
fieldValue329 = x3d.fieldValue()
fieldValue329.setName("translation")
fieldValue329.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance327.addFieldValue(fieldValue329)

fieldValue119.addChildren(ProtoInstance327)
ProtoInstance330 = x3d.ProtoInstance()
ProtoInstance330.setName("Site")
ProtoInstance330.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue331 = x3d.fieldValue()
fieldValue331.setName("name")
fieldValue331.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance330.addFieldValue(fieldValue331)
fieldValue332 = x3d.fieldValue()
fieldValue332.setName("translation")
fieldValue332.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance330.addFieldValue(fieldValue332)

fieldValue119.addChildren(ProtoInstance330)
ProtoInstance333 = x3d.ProtoInstance()
ProtoInstance333.setName("Site")
ProtoInstance333.setDEF("hanim_l_calcaneus_posterior")
fieldValue334 = x3d.fieldValue()
fieldValue334.setName("name")
fieldValue334.setValue("l_calcaneus_posterior")

ProtoInstance333.addFieldValue(fieldValue334)
fieldValue335 = x3d.fieldValue()
fieldValue335.setName("translation")
fieldValue335.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance333.addFieldValue(fieldValue335)

fieldValue119.addChildren(ProtoInstance333)
ProtoInstance336 = x3d.ProtoInstance()
ProtoInstance336.setName("Site")
ProtoInstance336.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue337 = x3d.fieldValue()
fieldValue337.setName("name")
fieldValue337.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance336.addFieldValue(fieldValue337)
fieldValue338 = x3d.fieldValue()
fieldValue338.setName("translation")
fieldValue338.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance336.addFieldValue(fieldValue338)

fieldValue119.addChildren(ProtoInstance336)
ProtoInstance339 = x3d.ProtoInstance()
ProtoInstance339.setName("Site")
ProtoInstance339.setDEF("hanim_crotch")
fieldValue340 = x3d.fieldValue()
fieldValue340.setName("name")
fieldValue340.setValue("crotch")

ProtoInstance339.addFieldValue(fieldValue340)
fieldValue341 = x3d.fieldValue()
fieldValue341.setName("translation")
fieldValue341.setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367")

ProtoInstance339.addFieldValue(fieldValue341)

fieldValue119.addChildren(ProtoInstance339)
ProtoInstance342 = x3d.ProtoInstance()
ProtoInstance342.setName("Site")
ProtoInstance342.setDEF("hanim_r_neck_base")
fieldValue343 = x3d.fieldValue()
fieldValue343.setName("name")
fieldValue343.setValue("r_neck_base")

ProtoInstance342.addFieldValue(fieldValue343)
fieldValue344 = x3d.fieldValue()
fieldValue344.setName("translation")
fieldValue344.setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071")

ProtoInstance342.addFieldValue(fieldValue344)

fieldValue119.addChildren(ProtoInstance342)
ProtoInstance345 = x3d.ProtoInstance()
ProtoInstance345.setName("Site")
ProtoInstance345.setDEF("hanim_l_neck_base")
fieldValue346 = x3d.fieldValue()
fieldValue346.setName("name")
fieldValue346.setValue("l_neck_base")

ProtoInstance345.addFieldValue(fieldValue346)
fieldValue347 = x3d.fieldValue()
fieldValue347.setName("translation")
fieldValue347.setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478")

ProtoInstance345.addFieldValue(fieldValue347)

fieldValue119.addChildren(ProtoInstance345)
ProtoInstance348 = x3d.ProtoInstance()
ProtoInstance348.setName("Site")
ProtoInstance348.setDEF("hanim_navel")
fieldValue349 = x3d.fieldValue()
fieldValue349.setName("name")
fieldValue349.setValue("navel")

ProtoInstance348.addFieldValue(fieldValue349)
fieldValue350 = x3d.fieldValue()
fieldValue350.setName("translation")
fieldValue350.setValue("0.006899999920278788 1.09660005569458 0.10170000046491623")

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
ProtoInstance352.setName("Joint")
ProtoInstance352.setDEF("hanim_humanoid_root")
fieldValue353 = x3d.fieldValue()
fieldValue353.setName("stiffness")
fieldValue353.setValue("1 1 1")

ProtoInstance352.addFieldValue(fieldValue353)
fieldValue354 = x3d.fieldValue()
fieldValue354.setName("name")
fieldValue354.setValue("humanoid_root")

ProtoInstance352.addFieldValue(fieldValue354)
fieldValue355 = x3d.fieldValue()
fieldValue355.setName("center")
fieldValue355.setValue("0 0.8240000009536743 0.027699999511241913")

ProtoInstance352.addFieldValue(fieldValue355)
fieldValue356 = x3d.fieldValue()
fieldValue356.setName("children")
ProtoInstance357 = x3d.ProtoInstance()
ProtoInstance357.setName("Segment")
ProtoInstance357.setDEF("hanim_sacrum")
fieldValue358 = x3d.fieldValue()
fieldValue358.setName("name")
fieldValue358.setValue("sacrum")

ProtoInstance357.addFieldValue(fieldValue358)
fieldValue359 = x3d.fieldValue()
fieldValue359.setName("children")
ProtoInstance360 = x3d.ProtoInstance()
ProtoInstance360.setName("Site")
ProtoInstance360.setDEF("hanim_skull_tip")
fieldValue361 = x3d.fieldValue()
fieldValue361.setName("name")
fieldValue361.setValue("skull_tip")

ProtoInstance360.addFieldValue(fieldValue361)
fieldValue362 = x3d.fieldValue()
fieldValue362.setName("translation")
fieldValue362.setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678")

ProtoInstance360.addFieldValue(fieldValue362)

fieldValue359.addChildren(ProtoInstance360)
ProtoInstance363 = x3d.ProtoInstance()
ProtoInstance363.setName("Site")
ProtoInstance363.setDEF("hanim_sellion")
fieldValue364 = x3d.fieldValue()
fieldValue364.setName("name")
fieldValue364.setValue("sellion")

ProtoInstance363.addFieldValue(fieldValue364)
fieldValue365 = x3d.fieldValue()
fieldValue365.setName("translation")
fieldValue365.setValue("0.005799999926239252 1.631600022315979 0.0851999968290329")

ProtoInstance363.addFieldValue(fieldValue365)

fieldValue359.addChildren(ProtoInstance363)
ProtoInstance366 = x3d.ProtoInstance()
ProtoInstance366.setName("Site")
ProtoInstance366.setDEF("hanim_r_infraorbitale")
fieldValue367 = x3d.fieldValue()
fieldValue367.setName("name")
fieldValue367.setValue("r_infraorbitale")

ProtoInstance366.addFieldValue(fieldValue367)
fieldValue368 = x3d.fieldValue()
fieldValue368.setName("translation")
fieldValue368.setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547")

ProtoInstance366.addFieldValue(fieldValue368)

fieldValue359.addChildren(ProtoInstance366)
ProtoInstance369 = x3d.ProtoInstance()
ProtoInstance369.setName("Site")
ProtoInstance369.setDEF("hanim_l_infraorbitale")
fieldValue370 = x3d.fieldValue()
fieldValue370.setName("name")
fieldValue370.setValue("l_infraorbitale")

ProtoInstance369.addFieldValue(fieldValue370)
fieldValue371 = x3d.fieldValue()
fieldValue371.setName("translation")
fieldValue371.setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547")

ProtoInstance369.addFieldValue(fieldValue371)

fieldValue359.addChildren(ProtoInstance369)
ProtoInstance372 = x3d.ProtoInstance()
ProtoInstance372.setName("Site")
ProtoInstance372.setDEF("hanim_supramenton")
fieldValue373 = x3d.fieldValue()
fieldValue373.setName("name")
fieldValue373.setValue("supramenton")

ProtoInstance372.addFieldValue(fieldValue373)
fieldValue374 = x3d.fieldValue()
fieldValue374.setName("translation")
fieldValue374.setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962")

ProtoInstance372.addFieldValue(fieldValue374)

fieldValue359.addChildren(ProtoInstance372)
ProtoInstance375 = x3d.ProtoInstance()
ProtoInstance375.setName("Site")
ProtoInstance375.setDEF("hanim_r_tragion")
fieldValue376 = x3d.fieldValue()
fieldValue376.setName("name")
fieldValue376.setValue("r_tragion")

ProtoInstance375.addFieldValue(fieldValue376)
fieldValue377 = x3d.fieldValue()
fieldValue377.setName("translation")
fieldValue377.setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642")

ProtoInstance375.addFieldValue(fieldValue377)

fieldValue359.addChildren(ProtoInstance375)
ProtoInstance378 = x3d.ProtoInstance()
ProtoInstance378.setName("Site")
ProtoInstance378.setDEF("hanim_r_gonion")
fieldValue379 = x3d.fieldValue()
fieldValue379.setName("name")
fieldValue379.setValue("r_gonion")

ProtoInstance378.addFieldValue(fieldValue379)
fieldValue380 = x3d.fieldValue()
fieldValue380.setName("translation")
fieldValue380.setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176")

ProtoInstance378.addFieldValue(fieldValue380)

fieldValue359.addChildren(ProtoInstance378)
ProtoInstance381 = x3d.ProtoInstance()
ProtoInstance381.setName("Site")
ProtoInstance381.setDEF("hanim_l_tragion")
fieldValue382 = x3d.fieldValue()
fieldValue382.setName("name")
fieldValue382.setValue("l_tragion")

ProtoInstance381.addFieldValue(fieldValue382)
fieldValue383 = x3d.fieldValue()
fieldValue383.setName("translation")
fieldValue383.setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874")

ProtoInstance381.addFieldValue(fieldValue383)

fieldValue359.addChildren(ProtoInstance381)
ProtoInstance384 = x3d.ProtoInstance()
ProtoInstance384.setName("Site")
ProtoInstance384.setDEF("hanim_l_gonion")
fieldValue385 = x3d.fieldValue()
fieldValue385.setName("name")
fieldValue385.setValue("l_gonion")

ProtoInstance384.addFieldValue(fieldValue385)
fieldValue386 = x3d.fieldValue()
fieldValue386.setName("translation")
fieldValue386.setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066")

ProtoInstance384.addFieldValue(fieldValue386)

fieldValue359.addChildren(ProtoInstance384)
ProtoInstance387 = x3d.ProtoInstance()
ProtoInstance387.setName("Site")
ProtoInstance387.setDEF("hanim_nuchale")
fieldValue388 = x3d.fieldValue()
fieldValue388.setName("name")
fieldValue388.setValue("nuchale")

ProtoInstance387.addFieldValue(fieldValue388)
fieldValue389 = x3d.fieldValue()
fieldValue389.setName("translation")
fieldValue389.setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")

ProtoInstance387.addFieldValue(fieldValue389)

fieldValue359.addChildren(ProtoInstance387)
ProtoInstance390 = x3d.ProtoInstance()
ProtoInstance390.setName("Site")
ProtoInstance390.setDEF("hanim_r_clavicale")
fieldValue391 = x3d.fieldValue()
fieldValue391.setName("name")
fieldValue391.setValue("r_clavicale")

ProtoInstance390.addFieldValue(fieldValue391)
fieldValue392 = x3d.fieldValue()
fieldValue392.setName("translation")
fieldValue392.setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033")

ProtoInstance390.addFieldValue(fieldValue392)

fieldValue359.addChildren(ProtoInstance390)
ProtoInstance393 = x3d.ProtoInstance()
ProtoInstance393.setName("Site")
ProtoInstance393.setDEF("hanim_suprasternale")
fieldValue394 = x3d.fieldValue()
fieldValue394.setName("name")
fieldValue394.setValue("suprasternale")

ProtoInstance393.addFieldValue(fieldValue394)
fieldValue395 = x3d.fieldValue()
fieldValue395.setName("translation")
fieldValue395.setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869")

ProtoInstance393.addFieldValue(fieldValue395)

fieldValue359.addChildren(ProtoInstance393)
ProtoInstance396 = x3d.ProtoInstance()
ProtoInstance396.setName("Site")
ProtoInstance396.setDEF("hanim_l_clavicale")
fieldValue397 = x3d.fieldValue()
fieldValue397.setName("name")
fieldValue397.setValue("l_clavicale")

ProtoInstance396.addFieldValue(fieldValue397)
fieldValue398 = x3d.fieldValue()
fieldValue398.setName("translation")
fieldValue398.setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754")

ProtoInstance396.addFieldValue(fieldValue398)

fieldValue359.addChildren(ProtoInstance396)
ProtoInstance399 = x3d.ProtoInstance()
ProtoInstance399.setName("Site")
ProtoInstance399.setDEF("hanim_r_thelion")
fieldValue400 = x3d.fieldValue()
fieldValue400.setName("name")
fieldValue400.setValue("r_thelion")

ProtoInstance399.addFieldValue(fieldValue400)
fieldValue401 = x3d.fieldValue()
fieldValue401.setName("translation")
fieldValue401.setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911")

ProtoInstance399.addFieldValue(fieldValue401)

fieldValue359.addChildren(ProtoInstance399)
ProtoInstance402 = x3d.ProtoInstance()
ProtoInstance402.setName("Site")
ProtoInstance402.setDEF("hanim_l_thelion")
fieldValue403 = x3d.fieldValue()
fieldValue403.setName("name")
fieldValue403.setValue("l_thelion")

ProtoInstance402.addFieldValue(fieldValue403)
fieldValue404 = x3d.fieldValue()
fieldValue404.setName("translation")
fieldValue404.setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689")

ProtoInstance402.addFieldValue(fieldValue404)

fieldValue359.addChildren(ProtoInstance402)
ProtoInstance405 = x3d.ProtoInstance()
ProtoInstance405.setName("Site")
ProtoInstance405.setDEF("hanim_substernale")
fieldValue406 = x3d.fieldValue()
fieldValue406.setName("name")
fieldValue406.setValue("substernale")

ProtoInstance405.addFieldValue(fieldValue406)
fieldValue407 = x3d.fieldValue()
fieldValue407.setName("translation")
fieldValue407.setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683")

ProtoInstance405.addFieldValue(fieldValue407)

fieldValue359.addChildren(ProtoInstance405)
ProtoInstance408 = x3d.ProtoInstance()
ProtoInstance408.setName("Site")
ProtoInstance408.setDEF("hanim_r_rib10")
fieldValue409 = x3d.fieldValue()
fieldValue409.setName("name")
fieldValue409.setValue("r_rib10")

ProtoInstance408.addFieldValue(fieldValue409)
fieldValue410 = x3d.fieldValue()
fieldValue410.setName("translation")
fieldValue410.setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432")

ProtoInstance408.addFieldValue(fieldValue410)

fieldValue359.addChildren(ProtoInstance408)
ProtoInstance411 = x3d.ProtoInstance()
ProtoInstance411.setName("Site")
ProtoInstance411.setDEF("hanim_r_asis")
fieldValue412 = x3d.fieldValue()
fieldValue412.setName("name")
fieldValue412.setValue("r_asis")

ProtoInstance411.addFieldValue(fieldValue412)
fieldValue413 = x3d.fieldValue()
fieldValue413.setName("translation")
fieldValue413.setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747")

ProtoInstance411.addFieldValue(fieldValue413)

fieldValue359.addChildren(ProtoInstance411)
ProtoInstance414 = x3d.ProtoInstance()
ProtoInstance414.setName("Site")
ProtoInstance414.setDEF("hanim_l_rib10")
fieldValue415 = x3d.fieldValue()
fieldValue415.setName("name")
fieldValue415.setValue("l_rib10")

ProtoInstance414.addFieldValue(fieldValue415)
fieldValue416 = x3d.fieldValue()
fieldValue416.setName("translation")
fieldValue416.setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202")

ProtoInstance414.addFieldValue(fieldValue416)

fieldValue359.addChildren(ProtoInstance414)
ProtoInstance417 = x3d.ProtoInstance()
ProtoInstance417.setName("Site")
ProtoInstance417.setDEF("hanim_l_asis")
fieldValue418 = x3d.fieldValue()
fieldValue418.setName("name")
fieldValue418.setValue("l_asis")

ProtoInstance417.addFieldValue(fieldValue418)
fieldValue419 = x3d.fieldValue()
fieldValue419.setName("translation")
fieldValue419.setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836")

ProtoInstance417.addFieldValue(fieldValue419)

fieldValue359.addChildren(ProtoInstance417)
ProtoInstance420 = x3d.ProtoInstance()
ProtoInstance420.setName("Site")
ProtoInstance420.setDEF("hanim_r_iliocristale")
fieldValue421 = x3d.fieldValue()
fieldValue421.setName("name")
fieldValue421.setValue("r_iliocristale")

ProtoInstance420.addFieldValue(fieldValue421)
fieldValue422 = x3d.fieldValue()
fieldValue422.setName("translation")
fieldValue422.setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187")

ProtoInstance420.addFieldValue(fieldValue422)

fieldValue359.addChildren(ProtoInstance420)
ProtoInstance423 = x3d.ProtoInstance()
ProtoInstance423.setName("Site")
ProtoInstance423.setDEF("hanim_r_trochanterion")
fieldValue424 = x3d.fieldValue()
fieldValue424.setName("name")
fieldValue424.setValue("r_trochanterion")

ProtoInstance423.addFieldValue(fieldValue424)
fieldValue425 = x3d.fieldValue()
fieldValue425.setName("translation")
fieldValue425.setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514")

ProtoInstance423.addFieldValue(fieldValue425)

fieldValue359.addChildren(ProtoInstance423)
ProtoInstance426 = x3d.ProtoInstance()
ProtoInstance426.setName("Site")
ProtoInstance426.setDEF("hanim_l_iliocristale")
fieldValue427 = x3d.fieldValue()
fieldValue427.setName("name")
fieldValue427.setValue("l_iliocristale")

ProtoInstance426.addFieldValue(fieldValue427)
fieldValue428 = x3d.fieldValue()
fieldValue428.setName("translation")
fieldValue428.setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001")

ProtoInstance426.addFieldValue(fieldValue428)

fieldValue359.addChildren(ProtoInstance426)
ProtoInstance429 = x3d.ProtoInstance()
ProtoInstance429.setName("Site")
ProtoInstance429.setDEF("hanim_l_trochanterion")
fieldValue430 = x3d.fieldValue()
fieldValue430.setName("name")
fieldValue430.setValue("l_trochanterion")

ProtoInstance429.addFieldValue(fieldValue430)
fieldValue431 = x3d.fieldValue()
fieldValue431.setName("translation")
fieldValue431.setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183")

ProtoInstance429.addFieldValue(fieldValue431)

fieldValue359.addChildren(ProtoInstance429)
ProtoInstance432 = x3d.ProtoInstance()
ProtoInstance432.setName("Site")
ProtoInstance432.setDEF("hanim_cervicale")
fieldValue433 = x3d.fieldValue()
fieldValue433.setName("name")
fieldValue433.setValue("cervicale")

ProtoInstance432.addFieldValue(fieldValue433)
fieldValue434 = x3d.fieldValue()
fieldValue434.setName("translation")
fieldValue434.setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754")

ProtoInstance432.addFieldValue(fieldValue434)

fieldValue359.addChildren(ProtoInstance432)
ProtoInstance435 = x3d.ProtoInstance()
ProtoInstance435.setName("Site")
ProtoInstance435.setDEF("hanim_spine_2_lower_back")
fieldValue436 = x3d.fieldValue()
fieldValue436.setName("name")
fieldValue436.setValue("spine_2_lower_back")

ProtoInstance435.addFieldValue(fieldValue436)
fieldValue437 = x3d.fieldValue()
fieldValue437.setName("translation")
fieldValue437.setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661")

ProtoInstance435.addFieldValue(fieldValue437)

fieldValue359.addChildren(ProtoInstance435)
ProtoInstance438 = x3d.ProtoInstance()
ProtoInstance438.setName("Site")
ProtoInstance438.setDEF("hanim_r_psis")
fieldValue439 = x3d.fieldValue()
fieldValue439.setName("name")
fieldValue439.setValue("r_psis")

ProtoInstance438.addFieldValue(fieldValue439)
fieldValue440 = x3d.fieldValue()
fieldValue440.setName("translation")
fieldValue440.setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082")

ProtoInstance438.addFieldValue(fieldValue440)

fieldValue359.addChildren(ProtoInstance438)
ProtoInstance441 = x3d.ProtoInstance()
ProtoInstance441.setName("Site")
ProtoInstance441.setDEF("hanim_l_psis")
fieldValue442 = x3d.fieldValue()
fieldValue442.setName("name")
fieldValue442.setValue("l_psis")

ProtoInstance441.addFieldValue(fieldValue442)
fieldValue443 = x3d.fieldValue()
fieldValue443.setName("translation")
fieldValue443.setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388")

ProtoInstance441.addFieldValue(fieldValue443)

fieldValue359.addChildren(ProtoInstance441)
ProtoInstance444 = x3d.ProtoInstance()
ProtoInstance444.setName("Site")
ProtoInstance444.setDEF("hanim_waist_preferred_posterior")
fieldValue445 = x3d.fieldValue()
fieldValue445.setName("name")
fieldValue445.setValue("waist_preferred_posterior")

ProtoInstance444.addFieldValue(fieldValue445)
fieldValue446 = x3d.fieldValue()
fieldValue446.setName("translation")
fieldValue446.setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754")

ProtoInstance444.addFieldValue(fieldValue446)

fieldValue359.addChildren(ProtoInstance444)
ProtoInstance447 = x3d.ProtoInstance()
ProtoInstance447.setName("Site")
ProtoInstance447.setDEF("hanim_r_acromion")
fieldValue448 = x3d.fieldValue()
fieldValue448.setName("name")
fieldValue448.setValue("r_acromion")

ProtoInstance447.addFieldValue(fieldValue448)
fieldValue449 = x3d.fieldValue()
fieldValue449.setName("translation")
fieldValue449.setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541")

ProtoInstance447.addFieldValue(fieldValue449)

fieldValue359.addChildren(ProtoInstance447)
ProtoInstance450 = x3d.ProtoInstance()
ProtoInstance450.setName("Site")
ProtoInstance450.setDEF("hanim_r_axilla_proximal")
fieldValue451 = x3d.fieldValue()
fieldValue451.setName("name")
fieldValue451.setValue("r_axilla_proximal")

ProtoInstance450.addFieldValue(fieldValue451)
fieldValue452 = x3d.fieldValue()
fieldValue452.setName("translation")
fieldValue452.setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438")

ProtoInstance450.addFieldValue(fieldValue452)

fieldValue359.addChildren(ProtoInstance450)
ProtoInstance453 = x3d.ProtoInstance()
ProtoInstance453.setName("Site")
ProtoInstance453.setDEF("hanim_r_radial_styloid")
fieldValue454 = x3d.fieldValue()
fieldValue454.setName("name")
fieldValue454.setValue("r_radial_styloid")

ProtoInstance453.addFieldValue(fieldValue454)
fieldValue455 = x3d.fieldValue()
fieldValue455.setName("translation")
fieldValue455.setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236")

ProtoInstance453.addFieldValue(fieldValue455)

fieldValue359.addChildren(ProtoInstance453)
ProtoInstance456 = x3d.ProtoInstance()
ProtoInstance456.setName("Site")
ProtoInstance456.setDEF("hanim_r_axilla_distal")
fieldValue457 = x3d.fieldValue()
fieldValue457.setName("name")
fieldValue457.setValue("r_axilla_distal")

ProtoInstance456.addFieldValue(fieldValue457)
fieldValue458 = x3d.fieldValue()
fieldValue458.setName("translation")
fieldValue458.setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678")

ProtoInstance456.addFieldValue(fieldValue458)

fieldValue359.addChildren(ProtoInstance456)
ProtoInstance459 = x3d.ProtoInstance()
ProtoInstance459.setName("Site")
ProtoInstance459.setDEF("hanim_r_olecranon")
fieldValue460 = x3d.fieldValue()
fieldValue460.setName("name")
fieldValue460.setValue("r_olecranon")

ProtoInstance459.addFieldValue(fieldValue460)
fieldValue461 = x3d.fieldValue()
fieldValue461.setName("translation")
fieldValue461.setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")

ProtoInstance459.addFieldValue(fieldValue461)

fieldValue359.addChildren(ProtoInstance459)
ProtoInstance462 = x3d.ProtoInstance()
ProtoInstance462.setName("Site")
ProtoInstance462.setDEF("hanim_r_humeral_lateral_epicondyles")
fieldValue463 = x3d.fieldValue()
fieldValue463.setName("name")
fieldValue463.setValue("r_humeral_lateral_epicondyles")

ProtoInstance462.addFieldValue(fieldValue463)
fieldValue464 = x3d.fieldValue()
fieldValue464.setName("translation")
fieldValue464.setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")

ProtoInstance462.addFieldValue(fieldValue464)

fieldValue359.addChildren(ProtoInstance462)
ProtoInstance465 = x3d.ProtoInstance()
ProtoInstance465.setName("Site")
ProtoInstance465.setDEF("hanim_r_humeral_medial_epicondyles")
fieldValue466 = x3d.fieldValue()
fieldValue466.setName("name")
fieldValue466.setValue("r_humeral_medial_epicondyles")

ProtoInstance465.addFieldValue(fieldValue466)
fieldValue467 = x3d.fieldValue()
fieldValue467.setName("translation")
fieldValue467.setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")

ProtoInstance465.addFieldValue(fieldValue467)

fieldValue359.addChildren(ProtoInstance465)
ProtoInstance468 = x3d.ProtoInstance()
ProtoInstance468.setName("Site")
ProtoInstance468.setDEF("hanim_r_radiale")
fieldValue469 = x3d.fieldValue()
fieldValue469.setName("name")
fieldValue469.setValue("r_radiale")

ProtoInstance468.addFieldValue(fieldValue469)
fieldValue470 = x3d.fieldValue()
fieldValue470.setName("translation")
fieldValue470.setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")

ProtoInstance468.addFieldValue(fieldValue470)

fieldValue359.addChildren(ProtoInstance468)
ProtoInstance471 = x3d.ProtoInstance()
ProtoInstance471.setName("Site")
ProtoInstance471.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue472 = x3d.fieldValue()
fieldValue472.setName("name")
fieldValue472.setValue("r_metacarpal_phalanx_2")

ProtoInstance471.addFieldValue(fieldValue472)
fieldValue473 = x3d.fieldValue()
fieldValue473.setName("translation")
fieldValue473.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance471.addFieldValue(fieldValue473)

fieldValue359.addChildren(ProtoInstance471)
ProtoInstance474 = x3d.ProtoInstance()
ProtoInstance474.setName("Site")
ProtoInstance474.setDEF("hanim_r_dactylion")
fieldValue475 = x3d.fieldValue()
fieldValue475.setName("name")
fieldValue475.setValue("r_dactylion")

ProtoInstance474.addFieldValue(fieldValue475)
fieldValue476 = x3d.fieldValue()
fieldValue476.setName("translation")
fieldValue476.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance474.addFieldValue(fieldValue476)

fieldValue359.addChildren(ProtoInstance474)
ProtoInstance477 = x3d.ProtoInstance()
ProtoInstance477.setName("Site")
ProtoInstance477.setDEF("hanim_r_ulnar_styloid")
fieldValue478 = x3d.fieldValue()
fieldValue478.setName("name")
fieldValue478.setValue("r_ulnar_styloid")

ProtoInstance477.addFieldValue(fieldValue478)
fieldValue479 = x3d.fieldValue()
fieldValue479.setName("translation")
fieldValue479.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance477.addFieldValue(fieldValue479)

fieldValue359.addChildren(ProtoInstance477)
ProtoInstance480 = x3d.ProtoInstance()
ProtoInstance480.setName("Site")
ProtoInstance480.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue481 = x3d.fieldValue()
fieldValue481.setName("name")
fieldValue481.setValue("r_metacarpal_phalanx_5")

ProtoInstance480.addFieldValue(fieldValue481)
fieldValue482 = x3d.fieldValue()
fieldValue482.setName("translation")
fieldValue482.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance480.addFieldValue(fieldValue482)

fieldValue359.addChildren(ProtoInstance480)
ProtoInstance483 = x3d.ProtoInstance()
ProtoInstance483.setName("Site")
ProtoInstance483.setDEF("hanim_l_acromion")
fieldValue484 = x3d.fieldValue()
fieldValue484.setName("name")
fieldValue484.setValue("l_acromion")

ProtoInstance483.addFieldValue(fieldValue484)
fieldValue485 = x3d.fieldValue()
fieldValue485.setName("translation")
fieldValue485.setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014")

ProtoInstance483.addFieldValue(fieldValue485)

fieldValue359.addChildren(ProtoInstance483)
ProtoInstance486 = x3d.ProtoInstance()
ProtoInstance486.setName("Site")
ProtoInstance486.setDEF("hanim_l_axilla_proximal")
fieldValue487 = x3d.fieldValue()
fieldValue487.setName("name")
fieldValue487.setValue("l_axilla_proximal")

ProtoInstance486.addFieldValue(fieldValue487)
fieldValue488 = x3d.fieldValue()
fieldValue488.setName("translation")
fieldValue488.setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937")

ProtoInstance486.addFieldValue(fieldValue488)

fieldValue359.addChildren(ProtoInstance486)
ProtoInstance489 = x3d.ProtoInstance()
ProtoInstance489.setName("Site")
ProtoInstance489.setDEF("hanim_l_radial_styloid")
fieldValue490 = x3d.fieldValue()
fieldValue490.setName("name")
fieldValue490.setValue("l_radial_styloid")

ProtoInstance489.addFieldValue(fieldValue490)
fieldValue491 = x3d.fieldValue()
fieldValue491.setName("translation")
fieldValue491.setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691")

ProtoInstance489.addFieldValue(fieldValue491)

fieldValue359.addChildren(ProtoInstance489)
ProtoInstance492 = x3d.ProtoInstance()
ProtoInstance492.setName("Site")
ProtoInstance492.setDEF("hanim_l_axilla_distal")
fieldValue493 = x3d.fieldValue()
fieldValue493.setName("name")
fieldValue493.setValue("l_axilla_distal")

ProtoInstance492.addFieldValue(fieldValue493)
fieldValue494 = x3d.fieldValue()
fieldValue494.setName("translation")
fieldValue494.setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388")

ProtoInstance492.addFieldValue(fieldValue494)

fieldValue359.addChildren(ProtoInstance492)
ProtoInstance495 = x3d.ProtoInstance()
ProtoInstance495.setName("Site")
ProtoInstance495.setDEF("hanim_l_olecranon")
fieldValue496 = x3d.fieldValue()
fieldValue496.setName("name")
fieldValue496.setValue("l_olecranon")

ProtoInstance495.addFieldValue(fieldValue496)
fieldValue497 = x3d.fieldValue()
fieldValue497.setName("translation")
fieldValue497.setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")

ProtoInstance495.addFieldValue(fieldValue497)

fieldValue359.addChildren(ProtoInstance495)
ProtoInstance498 = x3d.ProtoInstance()
ProtoInstance498.setName("Site")
ProtoInstance498.setDEF("hanim_l_humeral_lateral_epicondyles")
fieldValue499 = x3d.fieldValue()
fieldValue499.setName("name")
fieldValue499.setValue("l_humeral_lateral_epicondyles")

ProtoInstance498.addFieldValue(fieldValue499)
fieldValue500 = x3d.fieldValue()
fieldValue500.setName("translation")
fieldValue500.setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355")

ProtoInstance498.addFieldValue(fieldValue500)

fieldValue359.addChildren(ProtoInstance498)
ProtoInstance501 = x3d.ProtoInstance()
ProtoInstance501.setName("Site")
ProtoInstance501.setDEF("hanim_l_humeral_medial_epicondyles")
fieldValue502 = x3d.fieldValue()
fieldValue502.setName("name")
fieldValue502.setValue("l_humeral_medial_epicondyles")

ProtoInstance501.addFieldValue(fieldValue502)
fieldValue503 = x3d.fieldValue()
fieldValue503.setName("translation")
fieldValue503.setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661")

ProtoInstance501.addFieldValue(fieldValue503)

fieldValue359.addChildren(ProtoInstance501)
ProtoInstance504 = x3d.ProtoInstance()
ProtoInstance504.setName("Site")
ProtoInstance504.setDEF("hanim_l_radiale")
fieldValue505 = x3d.fieldValue()
fieldValue505.setName("name")
fieldValue505.setValue("l_radiale")

ProtoInstance504.addFieldValue(fieldValue505)
fieldValue506 = x3d.fieldValue()
fieldValue506.setName("translation")
fieldValue506.setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268")

ProtoInstance504.addFieldValue(fieldValue506)

fieldValue359.addChildren(ProtoInstance504)
ProtoInstance507 = x3d.ProtoInstance()
ProtoInstance507.setName("Site")
ProtoInstance507.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue508 = x3d.fieldValue()
fieldValue508.setName("name")
fieldValue508.setValue("l_metacarpal_phalanx_2")

ProtoInstance507.addFieldValue(fieldValue508)
fieldValue509 = x3d.fieldValue()
fieldValue509.setName("translation")
fieldValue509.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance507.addFieldValue(fieldValue509)

fieldValue359.addChildren(ProtoInstance507)
ProtoInstance510 = x3d.ProtoInstance()
ProtoInstance510.setName("Site")
ProtoInstance510.setDEF("hanim_l_dactylion")
fieldValue511 = x3d.fieldValue()
fieldValue511.setName("name")
fieldValue511.setValue("l_dactylion")

ProtoInstance510.addFieldValue(fieldValue511)
fieldValue512 = x3d.fieldValue()
fieldValue512.setName("translation")
fieldValue512.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance510.addFieldValue(fieldValue512)

fieldValue359.addChildren(ProtoInstance510)
ProtoInstance513 = x3d.ProtoInstance()
ProtoInstance513.setName("Site")
ProtoInstance513.setDEF("hanim_l_ulnar_styloid")
fieldValue514 = x3d.fieldValue()
fieldValue514.setName("name")
fieldValue514.setValue("l_ulnar_styloid")

ProtoInstance513.addFieldValue(fieldValue514)
fieldValue515 = x3d.fieldValue()
fieldValue515.setName("translation")
fieldValue515.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance513.addFieldValue(fieldValue515)

fieldValue359.addChildren(ProtoInstance513)
ProtoInstance516 = x3d.ProtoInstance()
ProtoInstance516.setName("Site")
ProtoInstance516.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue517 = x3d.fieldValue()
fieldValue517.setName("name")
fieldValue517.setValue("l_metacarpal_phalanx_5")

ProtoInstance516.addFieldValue(fieldValue517)
fieldValue518 = x3d.fieldValue()
fieldValue518.setName("translation")
fieldValue518.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance516.addFieldValue(fieldValue518)

fieldValue359.addChildren(ProtoInstance516)
ProtoInstance519 = x3d.ProtoInstance()
ProtoInstance519.setName("Site")
ProtoInstance519.setDEF("hanim_r_knee_crease")
fieldValue520 = x3d.fieldValue()
fieldValue520.setName("name")
fieldValue520.setValue("r_knee_crease")

ProtoInstance519.addFieldValue(fieldValue520)
fieldValue521 = x3d.fieldValue()
fieldValue521.setName("translation")
fieldValue521.setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")

ProtoInstance519.addFieldValue(fieldValue521)

fieldValue359.addChildren(ProtoInstance519)
ProtoInstance522 = x3d.ProtoInstance()
ProtoInstance522.setName("Site")
ProtoInstance522.setDEF("hanim_r_femoral_lateral_epicondyles")
fieldValue523 = x3d.fieldValue()
fieldValue523.setName("name")
fieldValue523.setValue("r_femoral_lateral_epicondyles")

ProtoInstance522.addFieldValue(fieldValue523)
fieldValue524 = x3d.fieldValue()
fieldValue524.setName("translation")
fieldValue524.setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052")

ProtoInstance522.addFieldValue(fieldValue524)

fieldValue359.addChildren(ProtoInstance522)
ProtoInstance525 = x3d.ProtoInstance()
ProtoInstance525.setName("Site")
ProtoInstance525.setDEF("hanim_r_femoral_medial_epicondyles")
fieldValue526 = x3d.fieldValue()
fieldValue526.setName("name")
fieldValue526.setValue("r_femoral_lateral_epicondyles")

ProtoInstance525.addFieldValue(fieldValue526)
fieldValue527 = x3d.fieldValue()
fieldValue527.setName("translation")
fieldValue527.setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821")

ProtoInstance525.addFieldValue(fieldValue527)

fieldValue359.addChildren(ProtoInstance525)
ProtoInstance528 = x3d.ProtoInstance()
ProtoInstance528.setName("Site")
ProtoInstance528.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue529 = x3d.fieldValue()
fieldValue529.setName("name")
fieldValue529.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance528.addFieldValue(fieldValue529)
fieldValue530 = x3d.fieldValue()
fieldValue530.setName("translation")
fieldValue530.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance528.addFieldValue(fieldValue530)

fieldValue359.addChildren(ProtoInstance528)
ProtoInstance531 = x3d.ProtoInstance()
ProtoInstance531.setName("Site")
ProtoInstance531.setDEF("hanim_r_lateral_malleolus")
fieldValue532 = x3d.fieldValue()
fieldValue532.setName("name")
fieldValue532.setValue("r_lateral_malleolus")

ProtoInstance531.addFieldValue(fieldValue532)
fieldValue533 = x3d.fieldValue()
fieldValue533.setName("translation")
fieldValue533.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance531.addFieldValue(fieldValue533)

fieldValue359.addChildren(ProtoInstance531)
ProtoInstance534 = x3d.ProtoInstance()
ProtoInstance534.setName("Site")
ProtoInstance534.setDEF("hanim_r_medial_malleolus")
fieldValue535 = x3d.fieldValue()
fieldValue535.setName("name")
fieldValue535.setValue("r_medial_malleolus")

ProtoInstance534.addFieldValue(fieldValue535)
fieldValue536 = x3d.fieldValue()
fieldValue536.setName("translation")
fieldValue536.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance534.addFieldValue(fieldValue536)

fieldValue359.addChildren(ProtoInstance534)
ProtoInstance537 = x3d.ProtoInstance()
ProtoInstance537.setName("Site")
ProtoInstance537.setDEF("hanim_r_sphyrion")
fieldValue538 = x3d.fieldValue()
fieldValue538.setName("name")
fieldValue538.setValue("r_sphyrion")

ProtoInstance537.addFieldValue(fieldValue538)
fieldValue539 = x3d.fieldValue()
fieldValue539.setName("translation")
fieldValue539.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance537.addFieldValue(fieldValue539)

fieldValue359.addChildren(ProtoInstance537)
ProtoInstance540 = x3d.ProtoInstance()
ProtoInstance540.setName("Site")
ProtoInstance540.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue541 = x3d.fieldValue()
fieldValue541.setName("name")
fieldValue541.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance540.addFieldValue(fieldValue541)
fieldValue542 = x3d.fieldValue()
fieldValue542.setName("translation")
fieldValue542.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance540.addFieldValue(fieldValue542)

fieldValue359.addChildren(ProtoInstance540)
ProtoInstance543 = x3d.ProtoInstance()
ProtoInstance543.setName("Site")
ProtoInstance543.setDEF("hanim_r_calcaneus_posterior")
fieldValue544 = x3d.fieldValue()
fieldValue544.setName("name")
fieldValue544.setValue("r_calcaneus_posterior")

ProtoInstance543.addFieldValue(fieldValue544)
fieldValue545 = x3d.fieldValue()
fieldValue545.setName("translation")
fieldValue545.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance543.addFieldValue(fieldValue545)

fieldValue359.addChildren(ProtoInstance543)
ProtoInstance546 = x3d.ProtoInstance()
ProtoInstance546.setName("Site")
ProtoInstance546.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue547 = x3d.fieldValue()
fieldValue547.setName("name")
fieldValue547.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance546.addFieldValue(fieldValue547)
fieldValue548 = x3d.fieldValue()
fieldValue548.setName("translation")
fieldValue548.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance546.addFieldValue(fieldValue548)

fieldValue359.addChildren(ProtoInstance546)
ProtoInstance549 = x3d.ProtoInstance()
ProtoInstance549.setName("Site")
ProtoInstance549.setDEF("hanim_l_knee_crease")
fieldValue550 = x3d.fieldValue()
fieldValue550.setName("name")
fieldValue550.setValue("l_knee_crease")

ProtoInstance549.addFieldValue(fieldValue550)
fieldValue551 = x3d.fieldValue()
fieldValue551.setName("translation")
fieldValue551.setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757")

ProtoInstance549.addFieldValue(fieldValue551)

fieldValue359.addChildren(ProtoInstance549)
ProtoInstance552 = x3d.ProtoInstance()
ProtoInstance552.setName("Site")
ProtoInstance552.setDEF("hanim_l_femoral_lateral_epicondyles")
fieldValue553 = x3d.fieldValue()
fieldValue553.setName("name")
fieldValue553.setValue("l_femoral_lateral_epicondyles")

ProtoInstance552.addFieldValue(fieldValue553)
fieldValue554 = x3d.fieldValue()
fieldValue554.setName("translation")
fieldValue554.setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746")

ProtoInstance552.addFieldValue(fieldValue554)

fieldValue359.addChildren(ProtoInstance552)
ProtoInstance555 = x3d.ProtoInstance()
ProtoInstance555.setName("Site")
ProtoInstance555.setDEF("hanim_l_femoral_medial_epicondyles")
fieldValue556 = x3d.fieldValue()
fieldValue556.setName("name")
fieldValue556.setValue("l_femoral_lateral_epicondyles")

ProtoInstance555.addFieldValue(fieldValue556)
fieldValue557 = x3d.fieldValue()
fieldValue557.setName("translation")
fieldValue557.setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183")

ProtoInstance555.addFieldValue(fieldValue557)

fieldValue359.addChildren(ProtoInstance555)
ProtoInstance558 = x3d.ProtoInstance()
ProtoInstance558.setName("Site")
ProtoInstance558.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue559 = x3d.fieldValue()
fieldValue559.setName("name")
fieldValue559.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance558.addFieldValue(fieldValue559)
fieldValue560 = x3d.fieldValue()
fieldValue560.setName("translation")
fieldValue560.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance558.addFieldValue(fieldValue560)

fieldValue359.addChildren(ProtoInstance558)
ProtoInstance561 = x3d.ProtoInstance()
ProtoInstance561.setName("Site")
ProtoInstance561.setDEF("hanim_l_lateral_malleolus")
fieldValue562 = x3d.fieldValue()
fieldValue562.setName("name")
fieldValue562.setValue("l_lateral_malleolus")

ProtoInstance561.addFieldValue(fieldValue562)
fieldValue563 = x3d.fieldValue()
fieldValue563.setName("translation")
fieldValue563.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance561.addFieldValue(fieldValue563)

fieldValue359.addChildren(ProtoInstance561)
ProtoInstance564 = x3d.ProtoInstance()
ProtoInstance564.setName("Site")
ProtoInstance564.setDEF("hanim_l_medial_malleolus")
fieldValue565 = x3d.fieldValue()
fieldValue565.setName("name")
fieldValue565.setValue("l_medial_malleolus")

ProtoInstance564.addFieldValue(fieldValue565)
fieldValue566 = x3d.fieldValue()
fieldValue566.setName("translation")
fieldValue566.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance564.addFieldValue(fieldValue566)

fieldValue359.addChildren(ProtoInstance564)
ProtoInstance567 = x3d.ProtoInstance()
ProtoInstance567.setName("Site")
ProtoInstance567.setDEF("hanim_l_sphyrion")
fieldValue568 = x3d.fieldValue()
fieldValue568.setName("name")
fieldValue568.setValue("l_sphyrion")

ProtoInstance567.addFieldValue(fieldValue568)
fieldValue569 = x3d.fieldValue()
fieldValue569.setName("translation")
fieldValue569.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance567.addFieldValue(fieldValue569)

fieldValue359.addChildren(ProtoInstance567)
ProtoInstance570 = x3d.ProtoInstance()
ProtoInstance570.setName("Site")
ProtoInstance570.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue571 = x3d.fieldValue()
fieldValue571.setName("name")
fieldValue571.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance570.addFieldValue(fieldValue571)
fieldValue572 = x3d.fieldValue()
fieldValue572.setName("translation")
fieldValue572.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance570.addFieldValue(fieldValue572)

fieldValue359.addChildren(ProtoInstance570)
ProtoInstance573 = x3d.ProtoInstance()
ProtoInstance573.setName("Site")
ProtoInstance573.setDEF("hanim_l_calcaneus_posterior")
fieldValue574 = x3d.fieldValue()
fieldValue574.setName("name")
fieldValue574.setValue("l_calcaneus_posterior")

ProtoInstance573.addFieldValue(fieldValue574)
fieldValue575 = x3d.fieldValue()
fieldValue575.setName("translation")
fieldValue575.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance573.addFieldValue(fieldValue575)

fieldValue359.addChildren(ProtoInstance573)
ProtoInstance576 = x3d.ProtoInstance()
ProtoInstance576.setName("Site")
ProtoInstance576.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue577 = x3d.fieldValue()
fieldValue577.setName("name")
fieldValue577.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance576.addFieldValue(fieldValue577)
fieldValue578 = x3d.fieldValue()
fieldValue578.setName("translation")
fieldValue578.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance576.addFieldValue(fieldValue578)

fieldValue359.addChildren(ProtoInstance576)
ProtoInstance579 = x3d.ProtoInstance()
ProtoInstance579.setName("Site")
ProtoInstance579.setDEF("hanim_crotch")
fieldValue580 = x3d.fieldValue()
fieldValue580.setName("name")
fieldValue580.setValue("crotch")

ProtoInstance579.addFieldValue(fieldValue580)
fieldValue581 = x3d.fieldValue()
fieldValue581.setName("translation")
fieldValue581.setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367")

ProtoInstance579.addFieldValue(fieldValue581)

fieldValue359.addChildren(ProtoInstance579)
ProtoInstance582 = x3d.ProtoInstance()
ProtoInstance582.setName("Site")
ProtoInstance582.setDEF("hanim_r_neck_base")
fieldValue583 = x3d.fieldValue()
fieldValue583.setName("name")
fieldValue583.setValue("r_neck_base")

ProtoInstance582.addFieldValue(fieldValue583)
fieldValue584 = x3d.fieldValue()
fieldValue584.setName("translation")
fieldValue584.setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071")

ProtoInstance582.addFieldValue(fieldValue584)

fieldValue359.addChildren(ProtoInstance582)
ProtoInstance585 = x3d.ProtoInstance()
ProtoInstance585.setName("Site")
ProtoInstance585.setDEF("hanim_l_neck_base")
fieldValue586 = x3d.fieldValue()
fieldValue586.setName("name")
fieldValue586.setValue("l_neck_base")

ProtoInstance585.addFieldValue(fieldValue586)
fieldValue587 = x3d.fieldValue()
fieldValue587.setName("translation")
fieldValue587.setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478")

ProtoInstance585.addFieldValue(fieldValue587)

fieldValue359.addChildren(ProtoInstance585)
ProtoInstance588 = x3d.ProtoInstance()
ProtoInstance588.setName("Site")
ProtoInstance588.setDEF("hanim_navel")
fieldValue589 = x3d.fieldValue()
fieldValue589.setName("name")
fieldValue589.setValue("navel")

ProtoInstance588.addFieldValue(fieldValue589)
fieldValue590 = x3d.fieldValue()
fieldValue590.setName("translation")
fieldValue590.setValue("0.006899999920278788 1.09660005569458 0.10170000046491623")

ProtoInstance588.addFieldValue(fieldValue590)

fieldValue359.addChildren(ProtoInstance588)

ProtoInstance357.addFieldValue(fieldValue359)

fieldValue356.addChildren(ProtoInstance357)

ProtoInstance352.addFieldValue(fieldValue356)

fieldValue351.addChildren(ProtoInstance352)

ProtoInstance110.addFieldValue(fieldValue351)
fieldValue591 = x3d.fieldValue()
fieldValue591.setName("segments")
ProtoInstance592 = x3d.ProtoInstance()
ProtoInstance592.setName("Segment")
ProtoInstance592.setDEF("hanim_sacrum")
fieldValue593 = x3d.fieldValue()
fieldValue593.setName("name")
fieldValue593.setValue("sacrum")

ProtoInstance592.addFieldValue(fieldValue593)
fieldValue594 = x3d.fieldValue()
fieldValue594.setName("children")
ProtoInstance595 = x3d.ProtoInstance()
ProtoInstance595.setName("Site")
ProtoInstance595.setDEF("hanim_skull_tip")
fieldValue596 = x3d.fieldValue()
fieldValue596.setName("name")
fieldValue596.setValue("skull_tip")

ProtoInstance595.addFieldValue(fieldValue596)
fieldValue597 = x3d.fieldValue()
fieldValue597.setName("translation")
fieldValue597.setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678")

ProtoInstance595.addFieldValue(fieldValue597)

fieldValue594.addChildren(ProtoInstance595)
ProtoInstance598 = x3d.ProtoInstance()
ProtoInstance598.setName("Site")
ProtoInstance598.setDEF("hanim_sellion")
fieldValue599 = x3d.fieldValue()
fieldValue599.setName("name")
fieldValue599.setValue("sellion")

ProtoInstance598.addFieldValue(fieldValue599)
fieldValue600 = x3d.fieldValue()
fieldValue600.setName("translation")
fieldValue600.setValue("0.005799999926239252 1.631600022315979 0.0851999968290329")

ProtoInstance598.addFieldValue(fieldValue600)

fieldValue594.addChildren(ProtoInstance598)
ProtoInstance601 = x3d.ProtoInstance()
ProtoInstance601.setName("Site")
ProtoInstance601.setDEF("hanim_r_infraorbitale")
fieldValue602 = x3d.fieldValue()
fieldValue602.setName("name")
fieldValue602.setValue("r_infraorbitale")

ProtoInstance601.addFieldValue(fieldValue602)
fieldValue603 = x3d.fieldValue()
fieldValue603.setName("translation")
fieldValue603.setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547")

ProtoInstance601.addFieldValue(fieldValue603)

fieldValue594.addChildren(ProtoInstance601)
ProtoInstance604 = x3d.ProtoInstance()
ProtoInstance604.setName("Site")
ProtoInstance604.setDEF("hanim_l_infraorbitale")
fieldValue605 = x3d.fieldValue()
fieldValue605.setName("name")
fieldValue605.setValue("l_infraorbitale")

ProtoInstance604.addFieldValue(fieldValue605)
fieldValue606 = x3d.fieldValue()
fieldValue606.setName("translation")
fieldValue606.setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547")

ProtoInstance604.addFieldValue(fieldValue606)

fieldValue594.addChildren(ProtoInstance604)
ProtoInstance607 = x3d.ProtoInstance()
ProtoInstance607.setName("Site")
ProtoInstance607.setDEF("hanim_supramenton")
fieldValue608 = x3d.fieldValue()
fieldValue608.setName("name")
fieldValue608.setValue("supramenton")

ProtoInstance607.addFieldValue(fieldValue608)
fieldValue609 = x3d.fieldValue()
fieldValue609.setName("translation")
fieldValue609.setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962")

ProtoInstance607.addFieldValue(fieldValue609)

fieldValue594.addChildren(ProtoInstance607)
ProtoInstance610 = x3d.ProtoInstance()
ProtoInstance610.setName("Site")
ProtoInstance610.setDEF("hanim_r_tragion")
fieldValue611 = x3d.fieldValue()
fieldValue611.setName("name")
fieldValue611.setValue("r_tragion")

ProtoInstance610.addFieldValue(fieldValue611)
fieldValue612 = x3d.fieldValue()
fieldValue612.setName("translation")
fieldValue612.setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642")

ProtoInstance610.addFieldValue(fieldValue612)

fieldValue594.addChildren(ProtoInstance610)
ProtoInstance613 = x3d.ProtoInstance()
ProtoInstance613.setName("Site")
ProtoInstance613.setDEF("hanim_r_gonion")
fieldValue614 = x3d.fieldValue()
fieldValue614.setName("name")
fieldValue614.setValue("r_gonion")

ProtoInstance613.addFieldValue(fieldValue614)
fieldValue615 = x3d.fieldValue()
fieldValue615.setName("translation")
fieldValue615.setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176")

ProtoInstance613.addFieldValue(fieldValue615)

fieldValue594.addChildren(ProtoInstance613)
ProtoInstance616 = x3d.ProtoInstance()
ProtoInstance616.setName("Site")
ProtoInstance616.setDEF("hanim_l_tragion")
fieldValue617 = x3d.fieldValue()
fieldValue617.setName("name")
fieldValue617.setValue("l_tragion")

ProtoInstance616.addFieldValue(fieldValue617)
fieldValue618 = x3d.fieldValue()
fieldValue618.setName("translation")
fieldValue618.setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874")

ProtoInstance616.addFieldValue(fieldValue618)

fieldValue594.addChildren(ProtoInstance616)
ProtoInstance619 = x3d.ProtoInstance()
ProtoInstance619.setName("Site")
ProtoInstance619.setDEF("hanim_l_gonion")
fieldValue620 = x3d.fieldValue()
fieldValue620.setName("name")
fieldValue620.setValue("l_gonion")

ProtoInstance619.addFieldValue(fieldValue620)
fieldValue621 = x3d.fieldValue()
fieldValue621.setName("translation")
fieldValue621.setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066")

ProtoInstance619.addFieldValue(fieldValue621)

fieldValue594.addChildren(ProtoInstance619)
ProtoInstance622 = x3d.ProtoInstance()
ProtoInstance622.setName("Site")
ProtoInstance622.setDEF("hanim_nuchale")
fieldValue623 = x3d.fieldValue()
fieldValue623.setName("name")
fieldValue623.setValue("nuchale")

ProtoInstance622.addFieldValue(fieldValue623)
fieldValue624 = x3d.fieldValue()
fieldValue624.setName("translation")
fieldValue624.setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")

ProtoInstance622.addFieldValue(fieldValue624)

fieldValue594.addChildren(ProtoInstance622)
ProtoInstance625 = x3d.ProtoInstance()
ProtoInstance625.setName("Site")
ProtoInstance625.setDEF("hanim_r_clavicale")
fieldValue626 = x3d.fieldValue()
fieldValue626.setName("name")
fieldValue626.setValue("r_clavicale")

ProtoInstance625.addFieldValue(fieldValue626)
fieldValue627 = x3d.fieldValue()
fieldValue627.setName("translation")
fieldValue627.setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033")

ProtoInstance625.addFieldValue(fieldValue627)

fieldValue594.addChildren(ProtoInstance625)
ProtoInstance628 = x3d.ProtoInstance()
ProtoInstance628.setName("Site")
ProtoInstance628.setDEF("hanim_suprasternale")
fieldValue629 = x3d.fieldValue()
fieldValue629.setName("name")
fieldValue629.setValue("suprasternale")

ProtoInstance628.addFieldValue(fieldValue629)
fieldValue630 = x3d.fieldValue()
fieldValue630.setName("translation")
fieldValue630.setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869")

ProtoInstance628.addFieldValue(fieldValue630)

fieldValue594.addChildren(ProtoInstance628)
ProtoInstance631 = x3d.ProtoInstance()
ProtoInstance631.setName("Site")
ProtoInstance631.setDEF("hanim_l_clavicale")
fieldValue632 = x3d.fieldValue()
fieldValue632.setName("name")
fieldValue632.setValue("l_clavicale")

ProtoInstance631.addFieldValue(fieldValue632)
fieldValue633 = x3d.fieldValue()
fieldValue633.setName("translation")
fieldValue633.setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754")

ProtoInstance631.addFieldValue(fieldValue633)

fieldValue594.addChildren(ProtoInstance631)
ProtoInstance634 = x3d.ProtoInstance()
ProtoInstance634.setName("Site")
ProtoInstance634.setDEF("hanim_r_thelion")
fieldValue635 = x3d.fieldValue()
fieldValue635.setName("name")
fieldValue635.setValue("r_thelion")

ProtoInstance634.addFieldValue(fieldValue635)
fieldValue636 = x3d.fieldValue()
fieldValue636.setName("translation")
fieldValue636.setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911")

ProtoInstance634.addFieldValue(fieldValue636)

fieldValue594.addChildren(ProtoInstance634)
ProtoInstance637 = x3d.ProtoInstance()
ProtoInstance637.setName("Site")
ProtoInstance637.setDEF("hanim_l_thelion")
fieldValue638 = x3d.fieldValue()
fieldValue638.setName("name")
fieldValue638.setValue("l_thelion")

ProtoInstance637.addFieldValue(fieldValue638)
fieldValue639 = x3d.fieldValue()
fieldValue639.setName("translation")
fieldValue639.setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689")

ProtoInstance637.addFieldValue(fieldValue639)

fieldValue594.addChildren(ProtoInstance637)
ProtoInstance640 = x3d.ProtoInstance()
ProtoInstance640.setName("Site")
ProtoInstance640.setDEF("hanim_substernale")
fieldValue641 = x3d.fieldValue()
fieldValue641.setName("name")
fieldValue641.setValue("substernale")

ProtoInstance640.addFieldValue(fieldValue641)
fieldValue642 = x3d.fieldValue()
fieldValue642.setName("translation")
fieldValue642.setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683")

ProtoInstance640.addFieldValue(fieldValue642)

fieldValue594.addChildren(ProtoInstance640)
ProtoInstance643 = x3d.ProtoInstance()
ProtoInstance643.setName("Site")
ProtoInstance643.setDEF("hanim_r_rib10")
fieldValue644 = x3d.fieldValue()
fieldValue644.setName("name")
fieldValue644.setValue("r_rib10")

ProtoInstance643.addFieldValue(fieldValue644)
fieldValue645 = x3d.fieldValue()
fieldValue645.setName("translation")
fieldValue645.setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432")

ProtoInstance643.addFieldValue(fieldValue645)

fieldValue594.addChildren(ProtoInstance643)
ProtoInstance646 = x3d.ProtoInstance()
ProtoInstance646.setName("Site")
ProtoInstance646.setDEF("hanim_r_asis")
fieldValue647 = x3d.fieldValue()
fieldValue647.setName("name")
fieldValue647.setValue("r_asis")

ProtoInstance646.addFieldValue(fieldValue647)
fieldValue648 = x3d.fieldValue()
fieldValue648.setName("translation")
fieldValue648.setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747")

ProtoInstance646.addFieldValue(fieldValue648)

fieldValue594.addChildren(ProtoInstance646)
ProtoInstance649 = x3d.ProtoInstance()
ProtoInstance649.setName("Site")
ProtoInstance649.setDEF("hanim_l_rib10")
fieldValue650 = x3d.fieldValue()
fieldValue650.setName("name")
fieldValue650.setValue("l_rib10")

ProtoInstance649.addFieldValue(fieldValue650)
fieldValue651 = x3d.fieldValue()
fieldValue651.setName("translation")
fieldValue651.setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202")

ProtoInstance649.addFieldValue(fieldValue651)

fieldValue594.addChildren(ProtoInstance649)
ProtoInstance652 = x3d.ProtoInstance()
ProtoInstance652.setName("Site")
ProtoInstance652.setDEF("hanim_l_asis")
fieldValue653 = x3d.fieldValue()
fieldValue653.setName("name")
fieldValue653.setValue("l_asis")

ProtoInstance652.addFieldValue(fieldValue653)
fieldValue654 = x3d.fieldValue()
fieldValue654.setName("translation")
fieldValue654.setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836")

ProtoInstance652.addFieldValue(fieldValue654)

fieldValue594.addChildren(ProtoInstance652)
ProtoInstance655 = x3d.ProtoInstance()
ProtoInstance655.setName("Site")
ProtoInstance655.setDEF("hanim_r_iliocristale")
fieldValue656 = x3d.fieldValue()
fieldValue656.setName("name")
fieldValue656.setValue("r_iliocristale")

ProtoInstance655.addFieldValue(fieldValue656)
fieldValue657 = x3d.fieldValue()
fieldValue657.setName("translation")
fieldValue657.setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187")

ProtoInstance655.addFieldValue(fieldValue657)

fieldValue594.addChildren(ProtoInstance655)
ProtoInstance658 = x3d.ProtoInstance()
ProtoInstance658.setName("Site")
ProtoInstance658.setDEF("hanim_r_trochanterion")
fieldValue659 = x3d.fieldValue()
fieldValue659.setName("name")
fieldValue659.setValue("r_trochanterion")

ProtoInstance658.addFieldValue(fieldValue659)
fieldValue660 = x3d.fieldValue()
fieldValue660.setName("translation")
fieldValue660.setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514")

ProtoInstance658.addFieldValue(fieldValue660)

fieldValue594.addChildren(ProtoInstance658)
ProtoInstance661 = x3d.ProtoInstance()
ProtoInstance661.setName("Site")
ProtoInstance661.setDEF("hanim_l_iliocristale")
fieldValue662 = x3d.fieldValue()
fieldValue662.setName("name")
fieldValue662.setValue("l_iliocristale")

ProtoInstance661.addFieldValue(fieldValue662)
fieldValue663 = x3d.fieldValue()
fieldValue663.setName("translation")
fieldValue663.setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001")

ProtoInstance661.addFieldValue(fieldValue663)

fieldValue594.addChildren(ProtoInstance661)
ProtoInstance664 = x3d.ProtoInstance()
ProtoInstance664.setName("Site")
ProtoInstance664.setDEF("hanim_l_trochanterion")
fieldValue665 = x3d.fieldValue()
fieldValue665.setName("name")
fieldValue665.setValue("l_trochanterion")

ProtoInstance664.addFieldValue(fieldValue665)
fieldValue666 = x3d.fieldValue()
fieldValue666.setName("translation")
fieldValue666.setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183")

ProtoInstance664.addFieldValue(fieldValue666)

fieldValue594.addChildren(ProtoInstance664)
ProtoInstance667 = x3d.ProtoInstance()
ProtoInstance667.setName("Site")
ProtoInstance667.setDEF("hanim_cervicale")
fieldValue668 = x3d.fieldValue()
fieldValue668.setName("name")
fieldValue668.setValue("cervicale")

ProtoInstance667.addFieldValue(fieldValue668)
fieldValue669 = x3d.fieldValue()
fieldValue669.setName("translation")
fieldValue669.setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754")

ProtoInstance667.addFieldValue(fieldValue669)

fieldValue594.addChildren(ProtoInstance667)
ProtoInstance670 = x3d.ProtoInstance()
ProtoInstance670.setName("Site")
ProtoInstance670.setDEF("hanim_spine_2_lower_back")
fieldValue671 = x3d.fieldValue()
fieldValue671.setName("name")
fieldValue671.setValue("spine_2_lower_back")

ProtoInstance670.addFieldValue(fieldValue671)
fieldValue672 = x3d.fieldValue()
fieldValue672.setName("translation")
fieldValue672.setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661")

ProtoInstance670.addFieldValue(fieldValue672)

fieldValue594.addChildren(ProtoInstance670)
ProtoInstance673 = x3d.ProtoInstance()
ProtoInstance673.setName("Site")
ProtoInstance673.setDEF("hanim_r_psis")
fieldValue674 = x3d.fieldValue()
fieldValue674.setName("name")
fieldValue674.setValue("r_psis")

ProtoInstance673.addFieldValue(fieldValue674)
fieldValue675 = x3d.fieldValue()
fieldValue675.setName("translation")
fieldValue675.setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082")

ProtoInstance673.addFieldValue(fieldValue675)

fieldValue594.addChildren(ProtoInstance673)
ProtoInstance676 = x3d.ProtoInstance()
ProtoInstance676.setName("Site")
ProtoInstance676.setDEF("hanim_l_psis")
fieldValue677 = x3d.fieldValue()
fieldValue677.setName("name")
fieldValue677.setValue("l_psis")

ProtoInstance676.addFieldValue(fieldValue677)
fieldValue678 = x3d.fieldValue()
fieldValue678.setName("translation")
fieldValue678.setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388")

ProtoInstance676.addFieldValue(fieldValue678)

fieldValue594.addChildren(ProtoInstance676)
ProtoInstance679 = x3d.ProtoInstance()
ProtoInstance679.setName("Site")
ProtoInstance679.setDEF("hanim_waist_preferred_posterior")
fieldValue680 = x3d.fieldValue()
fieldValue680.setName("name")
fieldValue680.setValue("waist_preferred_posterior")

ProtoInstance679.addFieldValue(fieldValue680)
fieldValue681 = x3d.fieldValue()
fieldValue681.setName("translation")
fieldValue681.setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754")

ProtoInstance679.addFieldValue(fieldValue681)

fieldValue594.addChildren(ProtoInstance679)
ProtoInstance682 = x3d.ProtoInstance()
ProtoInstance682.setName("Site")
ProtoInstance682.setDEF("hanim_r_acromion")
fieldValue683 = x3d.fieldValue()
fieldValue683.setName("name")
fieldValue683.setValue("r_acromion")

ProtoInstance682.addFieldValue(fieldValue683)
fieldValue684 = x3d.fieldValue()
fieldValue684.setName("translation")
fieldValue684.setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541")

ProtoInstance682.addFieldValue(fieldValue684)

fieldValue594.addChildren(ProtoInstance682)
ProtoInstance685 = x3d.ProtoInstance()
ProtoInstance685.setName("Site")
ProtoInstance685.setDEF("hanim_r_axilla_proximal")
fieldValue686 = x3d.fieldValue()
fieldValue686.setName("name")
fieldValue686.setValue("r_axilla_proximal")

ProtoInstance685.addFieldValue(fieldValue686)
fieldValue687 = x3d.fieldValue()
fieldValue687.setName("translation")
fieldValue687.setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438")

ProtoInstance685.addFieldValue(fieldValue687)

fieldValue594.addChildren(ProtoInstance685)
ProtoInstance688 = x3d.ProtoInstance()
ProtoInstance688.setName("Site")
ProtoInstance688.setDEF("hanim_r_radial_styloid")
fieldValue689 = x3d.fieldValue()
fieldValue689.setName("name")
fieldValue689.setValue("r_radial_styloid")

ProtoInstance688.addFieldValue(fieldValue689)
fieldValue690 = x3d.fieldValue()
fieldValue690.setName("translation")
fieldValue690.setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236")

ProtoInstance688.addFieldValue(fieldValue690)

fieldValue594.addChildren(ProtoInstance688)
ProtoInstance691 = x3d.ProtoInstance()
ProtoInstance691.setName("Site")
ProtoInstance691.setDEF("hanim_r_axilla_distal")
fieldValue692 = x3d.fieldValue()
fieldValue692.setName("name")
fieldValue692.setValue("r_axilla_distal")

ProtoInstance691.addFieldValue(fieldValue692)
fieldValue693 = x3d.fieldValue()
fieldValue693.setName("translation")
fieldValue693.setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678")

ProtoInstance691.addFieldValue(fieldValue693)

fieldValue594.addChildren(ProtoInstance691)
ProtoInstance694 = x3d.ProtoInstance()
ProtoInstance694.setName("Site")
ProtoInstance694.setDEF("hanim_r_olecranon")
fieldValue695 = x3d.fieldValue()
fieldValue695.setName("name")
fieldValue695.setValue("r_olecranon")

ProtoInstance694.addFieldValue(fieldValue695)
fieldValue696 = x3d.fieldValue()
fieldValue696.setName("translation")
fieldValue696.setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")

ProtoInstance694.addFieldValue(fieldValue696)

fieldValue594.addChildren(ProtoInstance694)
ProtoInstance697 = x3d.ProtoInstance()
ProtoInstance697.setName("Site")
ProtoInstance697.setDEF("hanim_r_humeral_lateral_epicondyles")
fieldValue698 = x3d.fieldValue()
fieldValue698.setName("name")
fieldValue698.setValue("r_humeral_lateral_epicondyles")

ProtoInstance697.addFieldValue(fieldValue698)
fieldValue699 = x3d.fieldValue()
fieldValue699.setName("translation")
fieldValue699.setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")

ProtoInstance697.addFieldValue(fieldValue699)

fieldValue594.addChildren(ProtoInstance697)
ProtoInstance700 = x3d.ProtoInstance()
ProtoInstance700.setName("Site")
ProtoInstance700.setDEF("hanim_r_humeral_medial_epicondyles")
fieldValue701 = x3d.fieldValue()
fieldValue701.setName("name")
fieldValue701.setValue("r_humeral_medial_epicondyles")

ProtoInstance700.addFieldValue(fieldValue701)
fieldValue702 = x3d.fieldValue()
fieldValue702.setName("translation")
fieldValue702.setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")

ProtoInstance700.addFieldValue(fieldValue702)

fieldValue594.addChildren(ProtoInstance700)
ProtoInstance703 = x3d.ProtoInstance()
ProtoInstance703.setName("Site")
ProtoInstance703.setDEF("hanim_r_radiale")
fieldValue704 = x3d.fieldValue()
fieldValue704.setName("name")
fieldValue704.setValue("r_radiale")

ProtoInstance703.addFieldValue(fieldValue704)
fieldValue705 = x3d.fieldValue()
fieldValue705.setName("translation")
fieldValue705.setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")

ProtoInstance703.addFieldValue(fieldValue705)

fieldValue594.addChildren(ProtoInstance703)
ProtoInstance706 = x3d.ProtoInstance()
ProtoInstance706.setName("Site")
ProtoInstance706.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue707 = x3d.fieldValue()
fieldValue707.setName("name")
fieldValue707.setValue("r_metacarpal_phalanx_2")

ProtoInstance706.addFieldValue(fieldValue707)
fieldValue708 = x3d.fieldValue()
fieldValue708.setName("translation")
fieldValue708.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance706.addFieldValue(fieldValue708)

fieldValue594.addChildren(ProtoInstance706)
ProtoInstance709 = x3d.ProtoInstance()
ProtoInstance709.setName("Site")
ProtoInstance709.setDEF("hanim_r_dactylion")
fieldValue710 = x3d.fieldValue()
fieldValue710.setName("name")
fieldValue710.setValue("r_dactylion")

ProtoInstance709.addFieldValue(fieldValue710)
fieldValue711 = x3d.fieldValue()
fieldValue711.setName("translation")
fieldValue711.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance709.addFieldValue(fieldValue711)

fieldValue594.addChildren(ProtoInstance709)
ProtoInstance712 = x3d.ProtoInstance()
ProtoInstance712.setName("Site")
ProtoInstance712.setDEF("hanim_r_ulnar_styloid")
fieldValue713 = x3d.fieldValue()
fieldValue713.setName("name")
fieldValue713.setValue("r_ulnar_styloid")

ProtoInstance712.addFieldValue(fieldValue713)
fieldValue714 = x3d.fieldValue()
fieldValue714.setName("translation")
fieldValue714.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance712.addFieldValue(fieldValue714)

fieldValue594.addChildren(ProtoInstance712)
ProtoInstance715 = x3d.ProtoInstance()
ProtoInstance715.setName("Site")
ProtoInstance715.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue716 = x3d.fieldValue()
fieldValue716.setName("name")
fieldValue716.setValue("r_metacarpal_phalanx_5")

ProtoInstance715.addFieldValue(fieldValue716)
fieldValue717 = x3d.fieldValue()
fieldValue717.setName("translation")
fieldValue717.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance715.addFieldValue(fieldValue717)

fieldValue594.addChildren(ProtoInstance715)
ProtoInstance718 = x3d.ProtoInstance()
ProtoInstance718.setName("Site")
ProtoInstance718.setDEF("hanim_l_acromion")
fieldValue719 = x3d.fieldValue()
fieldValue719.setName("name")
fieldValue719.setValue("l_acromion")

ProtoInstance718.addFieldValue(fieldValue719)
fieldValue720 = x3d.fieldValue()
fieldValue720.setName("translation")
fieldValue720.setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014")

ProtoInstance718.addFieldValue(fieldValue720)

fieldValue594.addChildren(ProtoInstance718)
ProtoInstance721 = x3d.ProtoInstance()
ProtoInstance721.setName("Site")
ProtoInstance721.setDEF("hanim_l_axilla_proximal")
fieldValue722 = x3d.fieldValue()
fieldValue722.setName("name")
fieldValue722.setValue("l_axilla_proximal")

ProtoInstance721.addFieldValue(fieldValue722)
fieldValue723 = x3d.fieldValue()
fieldValue723.setName("translation")
fieldValue723.setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937")

ProtoInstance721.addFieldValue(fieldValue723)

fieldValue594.addChildren(ProtoInstance721)
ProtoInstance724 = x3d.ProtoInstance()
ProtoInstance724.setName("Site")
ProtoInstance724.setDEF("hanim_l_radial_styloid")
fieldValue725 = x3d.fieldValue()
fieldValue725.setName("name")
fieldValue725.setValue("l_radial_styloid")

ProtoInstance724.addFieldValue(fieldValue725)
fieldValue726 = x3d.fieldValue()
fieldValue726.setName("translation")
fieldValue726.setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691")

ProtoInstance724.addFieldValue(fieldValue726)

fieldValue594.addChildren(ProtoInstance724)
ProtoInstance727 = x3d.ProtoInstance()
ProtoInstance727.setName("Site")
ProtoInstance727.setDEF("hanim_l_axilla_distal")
fieldValue728 = x3d.fieldValue()
fieldValue728.setName("name")
fieldValue728.setValue("l_axilla_distal")

ProtoInstance727.addFieldValue(fieldValue728)
fieldValue729 = x3d.fieldValue()
fieldValue729.setName("translation")
fieldValue729.setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388")

ProtoInstance727.addFieldValue(fieldValue729)

fieldValue594.addChildren(ProtoInstance727)
ProtoInstance730 = x3d.ProtoInstance()
ProtoInstance730.setName("Site")
ProtoInstance730.setDEF("hanim_l_olecranon")
fieldValue731 = x3d.fieldValue()
fieldValue731.setName("name")
fieldValue731.setValue("l_olecranon")

ProtoInstance730.addFieldValue(fieldValue731)
fieldValue732 = x3d.fieldValue()
fieldValue732.setName("translation")
fieldValue732.setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")

ProtoInstance730.addFieldValue(fieldValue732)

fieldValue594.addChildren(ProtoInstance730)
ProtoInstance733 = x3d.ProtoInstance()
ProtoInstance733.setName("Site")
ProtoInstance733.setDEF("hanim_l_humeral_lateral_epicondyles")
fieldValue734 = x3d.fieldValue()
fieldValue734.setName("name")
fieldValue734.setValue("l_humeral_lateral_epicondyles")

ProtoInstance733.addFieldValue(fieldValue734)
fieldValue735 = x3d.fieldValue()
fieldValue735.setName("translation")
fieldValue735.setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355")

ProtoInstance733.addFieldValue(fieldValue735)

fieldValue594.addChildren(ProtoInstance733)
ProtoInstance736 = x3d.ProtoInstance()
ProtoInstance736.setName("Site")
ProtoInstance736.setDEF("hanim_l_humeral_medial_epicondyles")
fieldValue737 = x3d.fieldValue()
fieldValue737.setName("name")
fieldValue737.setValue("l_humeral_medial_epicondyles")

ProtoInstance736.addFieldValue(fieldValue737)
fieldValue738 = x3d.fieldValue()
fieldValue738.setName("translation")
fieldValue738.setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661")

ProtoInstance736.addFieldValue(fieldValue738)

fieldValue594.addChildren(ProtoInstance736)
ProtoInstance739 = x3d.ProtoInstance()
ProtoInstance739.setName("Site")
ProtoInstance739.setDEF("hanim_l_radiale")
fieldValue740 = x3d.fieldValue()
fieldValue740.setName("name")
fieldValue740.setValue("l_radiale")

ProtoInstance739.addFieldValue(fieldValue740)
fieldValue741 = x3d.fieldValue()
fieldValue741.setName("translation")
fieldValue741.setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268")

ProtoInstance739.addFieldValue(fieldValue741)

fieldValue594.addChildren(ProtoInstance739)
ProtoInstance742 = x3d.ProtoInstance()
ProtoInstance742.setName("Site")
ProtoInstance742.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue743 = x3d.fieldValue()
fieldValue743.setName("name")
fieldValue743.setValue("l_metacarpal_phalanx_2")

ProtoInstance742.addFieldValue(fieldValue743)
fieldValue744 = x3d.fieldValue()
fieldValue744.setName("translation")
fieldValue744.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance742.addFieldValue(fieldValue744)

fieldValue594.addChildren(ProtoInstance742)
ProtoInstance745 = x3d.ProtoInstance()
ProtoInstance745.setName("Site")
ProtoInstance745.setDEF("hanim_l_dactylion")
fieldValue746 = x3d.fieldValue()
fieldValue746.setName("name")
fieldValue746.setValue("l_dactylion")

ProtoInstance745.addFieldValue(fieldValue746)
fieldValue747 = x3d.fieldValue()
fieldValue747.setName("translation")
fieldValue747.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance745.addFieldValue(fieldValue747)

fieldValue594.addChildren(ProtoInstance745)
ProtoInstance748 = x3d.ProtoInstance()
ProtoInstance748.setName("Site")
ProtoInstance748.setDEF("hanim_l_ulnar_styloid")
fieldValue749 = x3d.fieldValue()
fieldValue749.setName("name")
fieldValue749.setValue("l_ulnar_styloid")

ProtoInstance748.addFieldValue(fieldValue749)
fieldValue750 = x3d.fieldValue()
fieldValue750.setName("translation")
fieldValue750.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance748.addFieldValue(fieldValue750)

fieldValue594.addChildren(ProtoInstance748)
ProtoInstance751 = x3d.ProtoInstance()
ProtoInstance751.setName("Site")
ProtoInstance751.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue752 = x3d.fieldValue()
fieldValue752.setName("name")
fieldValue752.setValue("l_metacarpal_phalanx_5")

ProtoInstance751.addFieldValue(fieldValue752)
fieldValue753 = x3d.fieldValue()
fieldValue753.setName("translation")
fieldValue753.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance751.addFieldValue(fieldValue753)

fieldValue594.addChildren(ProtoInstance751)
ProtoInstance754 = x3d.ProtoInstance()
ProtoInstance754.setName("Site")
ProtoInstance754.setDEF("hanim_r_knee_crease")
fieldValue755 = x3d.fieldValue()
fieldValue755.setName("name")
fieldValue755.setValue("r_knee_crease")

ProtoInstance754.addFieldValue(fieldValue755)
fieldValue756 = x3d.fieldValue()
fieldValue756.setName("translation")
fieldValue756.setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")

ProtoInstance754.addFieldValue(fieldValue756)

fieldValue594.addChildren(ProtoInstance754)
ProtoInstance757 = x3d.ProtoInstance()
ProtoInstance757.setName("Site")
ProtoInstance757.setDEF("hanim_r_femoral_lateral_epicondyles")
fieldValue758 = x3d.fieldValue()
fieldValue758.setName("name")
fieldValue758.setValue("r_femoral_lateral_epicondyles")

ProtoInstance757.addFieldValue(fieldValue758)
fieldValue759 = x3d.fieldValue()
fieldValue759.setName("translation")
fieldValue759.setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052")

ProtoInstance757.addFieldValue(fieldValue759)

fieldValue594.addChildren(ProtoInstance757)
ProtoInstance760 = x3d.ProtoInstance()
ProtoInstance760.setName("Site")
ProtoInstance760.setDEF("hanim_r_femoral_medial_epicondyles")
fieldValue761 = x3d.fieldValue()
fieldValue761.setName("name")
fieldValue761.setValue("r_femoral_lateral_epicondyles")

ProtoInstance760.addFieldValue(fieldValue761)
fieldValue762 = x3d.fieldValue()
fieldValue762.setName("translation")
fieldValue762.setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821")

ProtoInstance760.addFieldValue(fieldValue762)

fieldValue594.addChildren(ProtoInstance760)
ProtoInstance763 = x3d.ProtoInstance()
ProtoInstance763.setName("Site")
ProtoInstance763.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue764 = x3d.fieldValue()
fieldValue764.setName("name")
fieldValue764.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance763.addFieldValue(fieldValue764)
fieldValue765 = x3d.fieldValue()
fieldValue765.setName("translation")
fieldValue765.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance763.addFieldValue(fieldValue765)

fieldValue594.addChildren(ProtoInstance763)
ProtoInstance766 = x3d.ProtoInstance()
ProtoInstance766.setName("Site")
ProtoInstance766.setDEF("hanim_r_lateral_malleolus")
fieldValue767 = x3d.fieldValue()
fieldValue767.setName("name")
fieldValue767.setValue("r_lateral_malleolus")

ProtoInstance766.addFieldValue(fieldValue767)
fieldValue768 = x3d.fieldValue()
fieldValue768.setName("translation")
fieldValue768.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance766.addFieldValue(fieldValue768)

fieldValue594.addChildren(ProtoInstance766)
ProtoInstance769 = x3d.ProtoInstance()
ProtoInstance769.setName("Site")
ProtoInstance769.setDEF("hanim_r_medial_malleolus")
fieldValue770 = x3d.fieldValue()
fieldValue770.setName("name")
fieldValue770.setValue("r_medial_malleolus")

ProtoInstance769.addFieldValue(fieldValue770)
fieldValue771 = x3d.fieldValue()
fieldValue771.setName("translation")
fieldValue771.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance769.addFieldValue(fieldValue771)

fieldValue594.addChildren(ProtoInstance769)
ProtoInstance772 = x3d.ProtoInstance()
ProtoInstance772.setName("Site")
ProtoInstance772.setDEF("hanim_r_sphyrion")
fieldValue773 = x3d.fieldValue()
fieldValue773.setName("name")
fieldValue773.setValue("r_sphyrion")

ProtoInstance772.addFieldValue(fieldValue773)
fieldValue774 = x3d.fieldValue()
fieldValue774.setName("translation")
fieldValue774.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance772.addFieldValue(fieldValue774)

fieldValue594.addChildren(ProtoInstance772)
ProtoInstance775 = x3d.ProtoInstance()
ProtoInstance775.setName("Site")
ProtoInstance775.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue776 = x3d.fieldValue()
fieldValue776.setName("name")
fieldValue776.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance775.addFieldValue(fieldValue776)
fieldValue777 = x3d.fieldValue()
fieldValue777.setName("translation")
fieldValue777.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance775.addFieldValue(fieldValue777)

fieldValue594.addChildren(ProtoInstance775)
ProtoInstance778 = x3d.ProtoInstance()
ProtoInstance778.setName("Site")
ProtoInstance778.setDEF("hanim_r_calcaneus_posterior")
fieldValue779 = x3d.fieldValue()
fieldValue779.setName("name")
fieldValue779.setValue("r_calcaneus_posterior")

ProtoInstance778.addFieldValue(fieldValue779)
fieldValue780 = x3d.fieldValue()
fieldValue780.setName("translation")
fieldValue780.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance778.addFieldValue(fieldValue780)

fieldValue594.addChildren(ProtoInstance778)
ProtoInstance781 = x3d.ProtoInstance()
ProtoInstance781.setName("Site")
ProtoInstance781.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue782 = x3d.fieldValue()
fieldValue782.setName("name")
fieldValue782.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance781.addFieldValue(fieldValue782)
fieldValue783 = x3d.fieldValue()
fieldValue783.setName("translation")
fieldValue783.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance781.addFieldValue(fieldValue783)

fieldValue594.addChildren(ProtoInstance781)
ProtoInstance784 = x3d.ProtoInstance()
ProtoInstance784.setName("Site")
ProtoInstance784.setDEF("hanim_l_knee_crease")
fieldValue785 = x3d.fieldValue()
fieldValue785.setName("name")
fieldValue785.setValue("l_knee_crease")

ProtoInstance784.addFieldValue(fieldValue785)
fieldValue786 = x3d.fieldValue()
fieldValue786.setName("translation")
fieldValue786.setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757")

ProtoInstance784.addFieldValue(fieldValue786)

fieldValue594.addChildren(ProtoInstance784)
ProtoInstance787 = x3d.ProtoInstance()
ProtoInstance787.setName("Site")
ProtoInstance787.setDEF("hanim_l_femoral_lateral_epicondyles")
fieldValue788 = x3d.fieldValue()
fieldValue788.setName("name")
fieldValue788.setValue("l_femoral_lateral_epicondyles")

ProtoInstance787.addFieldValue(fieldValue788)
fieldValue789 = x3d.fieldValue()
fieldValue789.setName("translation")
fieldValue789.setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746")

ProtoInstance787.addFieldValue(fieldValue789)

fieldValue594.addChildren(ProtoInstance787)
ProtoInstance790 = x3d.ProtoInstance()
ProtoInstance790.setName("Site")
ProtoInstance790.setDEF("hanim_l_femoral_medial_epicondyles")
fieldValue791 = x3d.fieldValue()
fieldValue791.setName("name")
fieldValue791.setValue("l_femoral_lateral_epicondyles")

ProtoInstance790.addFieldValue(fieldValue791)
fieldValue792 = x3d.fieldValue()
fieldValue792.setName("translation")
fieldValue792.setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183")

ProtoInstance790.addFieldValue(fieldValue792)

fieldValue594.addChildren(ProtoInstance790)
ProtoInstance793 = x3d.ProtoInstance()
ProtoInstance793.setName("Site")
ProtoInstance793.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue794 = x3d.fieldValue()
fieldValue794.setName("name")
fieldValue794.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance793.addFieldValue(fieldValue794)
fieldValue795 = x3d.fieldValue()
fieldValue795.setName("translation")
fieldValue795.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance793.addFieldValue(fieldValue795)

fieldValue594.addChildren(ProtoInstance793)
ProtoInstance796 = x3d.ProtoInstance()
ProtoInstance796.setName("Site")
ProtoInstance796.setDEF("hanim_l_lateral_malleolus")
fieldValue797 = x3d.fieldValue()
fieldValue797.setName("name")
fieldValue797.setValue("l_lateral_malleolus")

ProtoInstance796.addFieldValue(fieldValue797)
fieldValue798 = x3d.fieldValue()
fieldValue798.setName("translation")
fieldValue798.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance796.addFieldValue(fieldValue798)

fieldValue594.addChildren(ProtoInstance796)
ProtoInstance799 = x3d.ProtoInstance()
ProtoInstance799.setName("Site")
ProtoInstance799.setDEF("hanim_l_medial_malleolus")
fieldValue800 = x3d.fieldValue()
fieldValue800.setName("name")
fieldValue800.setValue("l_medial_malleolus")

ProtoInstance799.addFieldValue(fieldValue800)
fieldValue801 = x3d.fieldValue()
fieldValue801.setName("translation")
fieldValue801.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance799.addFieldValue(fieldValue801)

fieldValue594.addChildren(ProtoInstance799)
ProtoInstance802 = x3d.ProtoInstance()
ProtoInstance802.setName("Site")
ProtoInstance802.setDEF("hanim_l_sphyrion")
fieldValue803 = x3d.fieldValue()
fieldValue803.setName("name")
fieldValue803.setValue("l_sphyrion")

ProtoInstance802.addFieldValue(fieldValue803)
fieldValue804 = x3d.fieldValue()
fieldValue804.setName("translation")
fieldValue804.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance802.addFieldValue(fieldValue804)

fieldValue594.addChildren(ProtoInstance802)
ProtoInstance805 = x3d.ProtoInstance()
ProtoInstance805.setName("Site")
ProtoInstance805.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue806 = x3d.fieldValue()
fieldValue806.setName("name")
fieldValue806.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance805.addFieldValue(fieldValue806)
fieldValue807 = x3d.fieldValue()
fieldValue807.setName("translation")
fieldValue807.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance805.addFieldValue(fieldValue807)

fieldValue594.addChildren(ProtoInstance805)
ProtoInstance808 = x3d.ProtoInstance()
ProtoInstance808.setName("Site")
ProtoInstance808.setDEF("hanim_l_calcaneus_posterior")
fieldValue809 = x3d.fieldValue()
fieldValue809.setName("name")
fieldValue809.setValue("l_calcaneus_posterior")

ProtoInstance808.addFieldValue(fieldValue809)
fieldValue810 = x3d.fieldValue()
fieldValue810.setName("translation")
fieldValue810.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance808.addFieldValue(fieldValue810)

fieldValue594.addChildren(ProtoInstance808)
ProtoInstance811 = x3d.ProtoInstance()
ProtoInstance811.setName("Site")
ProtoInstance811.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue812 = x3d.fieldValue()
fieldValue812.setName("name")
fieldValue812.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance811.addFieldValue(fieldValue812)
fieldValue813 = x3d.fieldValue()
fieldValue813.setName("translation")
fieldValue813.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance811.addFieldValue(fieldValue813)

fieldValue594.addChildren(ProtoInstance811)
ProtoInstance814 = x3d.ProtoInstance()
ProtoInstance814.setName("Site")
ProtoInstance814.setDEF("hanim_crotch")
fieldValue815 = x3d.fieldValue()
fieldValue815.setName("name")
fieldValue815.setValue("crotch")

ProtoInstance814.addFieldValue(fieldValue815)
fieldValue816 = x3d.fieldValue()
fieldValue816.setName("translation")
fieldValue816.setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367")

ProtoInstance814.addFieldValue(fieldValue816)

fieldValue594.addChildren(ProtoInstance814)
ProtoInstance817 = x3d.ProtoInstance()
ProtoInstance817.setName("Site")
ProtoInstance817.setDEF("hanim_r_neck_base")
fieldValue818 = x3d.fieldValue()
fieldValue818.setName("name")
fieldValue818.setValue("r_neck_base")

ProtoInstance817.addFieldValue(fieldValue818)
fieldValue819 = x3d.fieldValue()
fieldValue819.setName("translation")
fieldValue819.setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071")

ProtoInstance817.addFieldValue(fieldValue819)

fieldValue594.addChildren(ProtoInstance817)
ProtoInstance820 = x3d.ProtoInstance()
ProtoInstance820.setName("Site")
ProtoInstance820.setDEF("hanim_l_neck_base")
fieldValue821 = x3d.fieldValue()
fieldValue821.setName("name")
fieldValue821.setValue("l_neck_base")

ProtoInstance820.addFieldValue(fieldValue821)
fieldValue822 = x3d.fieldValue()
fieldValue822.setName("translation")
fieldValue822.setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478")

ProtoInstance820.addFieldValue(fieldValue822)

fieldValue594.addChildren(ProtoInstance820)
ProtoInstance823 = x3d.ProtoInstance()
ProtoInstance823.setName("Site")
ProtoInstance823.setDEF("hanim_navel")
fieldValue824 = x3d.fieldValue()
fieldValue824.setName("name")
fieldValue824.setValue("navel")

ProtoInstance823.addFieldValue(fieldValue824)
fieldValue825 = x3d.fieldValue()
fieldValue825.setName("translation")
fieldValue825.setValue("0.006899999920278788 1.09660005569458 0.10170000046491623")

ProtoInstance823.addFieldValue(fieldValue825)

fieldValue594.addChildren(ProtoInstance823)

ProtoInstance592.addFieldValue(fieldValue594)

fieldValue591.addChildren(ProtoInstance592)

ProtoInstance110.addFieldValue(fieldValue591)
fieldValue826 = x3d.fieldValue()
fieldValue826.setName("sites")
ProtoInstance827 = x3d.ProtoInstance()
ProtoInstance827.setName("Site")
ProtoInstance827.setDEF("hanim_skull_tip")
fieldValue828 = x3d.fieldValue()
fieldValue828.setName("name")
fieldValue828.setValue("skull_tip")

ProtoInstance827.addFieldValue(fieldValue828)
fieldValue829 = x3d.fieldValue()
fieldValue829.setName("translation")
fieldValue829.setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678")

ProtoInstance827.addFieldValue(fieldValue829)

fieldValue826.addChildren(ProtoInstance827)
ProtoInstance830 = x3d.ProtoInstance()
ProtoInstance830.setName("Site")
ProtoInstance830.setDEF("hanim_sellion")
fieldValue831 = x3d.fieldValue()
fieldValue831.setName("name")
fieldValue831.setValue("sellion")

ProtoInstance830.addFieldValue(fieldValue831)
fieldValue832 = x3d.fieldValue()
fieldValue832.setName("translation")
fieldValue832.setValue("0.005799999926239252 1.631600022315979 0.0851999968290329")

ProtoInstance830.addFieldValue(fieldValue832)

fieldValue826.addChildren(ProtoInstance830)
ProtoInstance833 = x3d.ProtoInstance()
ProtoInstance833.setName("Site")
ProtoInstance833.setDEF("hanim_r_infraorbitale")
fieldValue834 = x3d.fieldValue()
fieldValue834.setName("name")
fieldValue834.setValue("r_infraorbitale")

ProtoInstance833.addFieldValue(fieldValue834)
fieldValue835 = x3d.fieldValue()
fieldValue835.setName("translation")
fieldValue835.setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547")

ProtoInstance833.addFieldValue(fieldValue835)

fieldValue826.addChildren(ProtoInstance833)
ProtoInstance836 = x3d.ProtoInstance()
ProtoInstance836.setName("Site")
ProtoInstance836.setDEF("hanim_l_infraorbitale")
fieldValue837 = x3d.fieldValue()
fieldValue837.setName("name")
fieldValue837.setValue("l_infraorbitale")

ProtoInstance836.addFieldValue(fieldValue837)
fieldValue838 = x3d.fieldValue()
fieldValue838.setName("translation")
fieldValue838.setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547")

ProtoInstance836.addFieldValue(fieldValue838)

fieldValue826.addChildren(ProtoInstance836)
ProtoInstance839 = x3d.ProtoInstance()
ProtoInstance839.setName("Site")
ProtoInstance839.setDEF("hanim_supramenton")
fieldValue840 = x3d.fieldValue()
fieldValue840.setName("name")
fieldValue840.setValue("supramenton")

ProtoInstance839.addFieldValue(fieldValue840)
fieldValue841 = x3d.fieldValue()
fieldValue841.setName("translation")
fieldValue841.setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962")

ProtoInstance839.addFieldValue(fieldValue841)

fieldValue826.addChildren(ProtoInstance839)
ProtoInstance842 = x3d.ProtoInstance()
ProtoInstance842.setName("Site")
ProtoInstance842.setDEF("hanim_r_tragion")
fieldValue843 = x3d.fieldValue()
fieldValue843.setName("name")
fieldValue843.setValue("r_tragion")

ProtoInstance842.addFieldValue(fieldValue843)
fieldValue844 = x3d.fieldValue()
fieldValue844.setName("translation")
fieldValue844.setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642")

ProtoInstance842.addFieldValue(fieldValue844)

fieldValue826.addChildren(ProtoInstance842)
ProtoInstance845 = x3d.ProtoInstance()
ProtoInstance845.setName("Site")
ProtoInstance845.setDEF("hanim_r_gonion")
fieldValue846 = x3d.fieldValue()
fieldValue846.setName("name")
fieldValue846.setValue("r_gonion")

ProtoInstance845.addFieldValue(fieldValue846)
fieldValue847 = x3d.fieldValue()
fieldValue847.setName("translation")
fieldValue847.setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176")

ProtoInstance845.addFieldValue(fieldValue847)

fieldValue826.addChildren(ProtoInstance845)
ProtoInstance848 = x3d.ProtoInstance()
ProtoInstance848.setName("Site")
ProtoInstance848.setDEF("hanim_l_tragion")
fieldValue849 = x3d.fieldValue()
fieldValue849.setName("name")
fieldValue849.setValue("l_tragion")

ProtoInstance848.addFieldValue(fieldValue849)
fieldValue850 = x3d.fieldValue()
fieldValue850.setName("translation")
fieldValue850.setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874")

ProtoInstance848.addFieldValue(fieldValue850)

fieldValue826.addChildren(ProtoInstance848)
ProtoInstance851 = x3d.ProtoInstance()
ProtoInstance851.setName("Site")
ProtoInstance851.setDEF("hanim_l_gonion")
fieldValue852 = x3d.fieldValue()
fieldValue852.setName("name")
fieldValue852.setValue("l_gonion")

ProtoInstance851.addFieldValue(fieldValue852)
fieldValue853 = x3d.fieldValue()
fieldValue853.setName("translation")
fieldValue853.setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066")

ProtoInstance851.addFieldValue(fieldValue853)

fieldValue826.addChildren(ProtoInstance851)
ProtoInstance854 = x3d.ProtoInstance()
ProtoInstance854.setName("Site")
ProtoInstance854.setDEF("hanim_nuchale")
fieldValue855 = x3d.fieldValue()
fieldValue855.setName("name")
fieldValue855.setValue("nuchale")

ProtoInstance854.addFieldValue(fieldValue855)
fieldValue856 = x3d.fieldValue()
fieldValue856.setName("translation")
fieldValue856.setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")

ProtoInstance854.addFieldValue(fieldValue856)

fieldValue826.addChildren(ProtoInstance854)
ProtoInstance857 = x3d.ProtoInstance()
ProtoInstance857.setName("Site")
ProtoInstance857.setDEF("hanim_r_clavicale")
fieldValue858 = x3d.fieldValue()
fieldValue858.setName("name")
fieldValue858.setValue("r_clavicale")

ProtoInstance857.addFieldValue(fieldValue858)
fieldValue859 = x3d.fieldValue()
fieldValue859.setName("translation")
fieldValue859.setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033")

ProtoInstance857.addFieldValue(fieldValue859)

fieldValue826.addChildren(ProtoInstance857)
ProtoInstance860 = x3d.ProtoInstance()
ProtoInstance860.setName("Site")
ProtoInstance860.setDEF("hanim_suprasternale")
fieldValue861 = x3d.fieldValue()
fieldValue861.setName("name")
fieldValue861.setValue("suprasternale")

ProtoInstance860.addFieldValue(fieldValue861)
fieldValue862 = x3d.fieldValue()
fieldValue862.setName("translation")
fieldValue862.setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869")

ProtoInstance860.addFieldValue(fieldValue862)

fieldValue826.addChildren(ProtoInstance860)
ProtoInstance863 = x3d.ProtoInstance()
ProtoInstance863.setName("Site")
ProtoInstance863.setDEF("hanim_l_clavicale")
fieldValue864 = x3d.fieldValue()
fieldValue864.setName("name")
fieldValue864.setValue("l_clavicale")

ProtoInstance863.addFieldValue(fieldValue864)
fieldValue865 = x3d.fieldValue()
fieldValue865.setName("translation")
fieldValue865.setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754")

ProtoInstance863.addFieldValue(fieldValue865)

fieldValue826.addChildren(ProtoInstance863)
ProtoInstance866 = x3d.ProtoInstance()
ProtoInstance866.setName("Site")
ProtoInstance866.setDEF("hanim_r_thelion")
fieldValue867 = x3d.fieldValue()
fieldValue867.setName("name")
fieldValue867.setValue("r_thelion")

ProtoInstance866.addFieldValue(fieldValue867)
fieldValue868 = x3d.fieldValue()
fieldValue868.setName("translation")
fieldValue868.setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911")

ProtoInstance866.addFieldValue(fieldValue868)

fieldValue826.addChildren(ProtoInstance866)
ProtoInstance869 = x3d.ProtoInstance()
ProtoInstance869.setName("Site")
ProtoInstance869.setDEF("hanim_l_thelion")
fieldValue870 = x3d.fieldValue()
fieldValue870.setName("name")
fieldValue870.setValue("l_thelion")

ProtoInstance869.addFieldValue(fieldValue870)
fieldValue871 = x3d.fieldValue()
fieldValue871.setName("translation")
fieldValue871.setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689")

ProtoInstance869.addFieldValue(fieldValue871)

fieldValue826.addChildren(ProtoInstance869)
ProtoInstance872 = x3d.ProtoInstance()
ProtoInstance872.setName("Site")
ProtoInstance872.setDEF("hanim_substernale")
fieldValue873 = x3d.fieldValue()
fieldValue873.setName("name")
fieldValue873.setValue("substernale")

ProtoInstance872.addFieldValue(fieldValue873)
fieldValue874 = x3d.fieldValue()
fieldValue874.setName("translation")
fieldValue874.setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683")

ProtoInstance872.addFieldValue(fieldValue874)

fieldValue826.addChildren(ProtoInstance872)
ProtoInstance875 = x3d.ProtoInstance()
ProtoInstance875.setName("Site")
ProtoInstance875.setDEF("hanim_r_rib10")
fieldValue876 = x3d.fieldValue()
fieldValue876.setName("name")
fieldValue876.setValue("r_rib10")

ProtoInstance875.addFieldValue(fieldValue876)
fieldValue877 = x3d.fieldValue()
fieldValue877.setName("translation")
fieldValue877.setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432")

ProtoInstance875.addFieldValue(fieldValue877)

fieldValue826.addChildren(ProtoInstance875)
ProtoInstance878 = x3d.ProtoInstance()
ProtoInstance878.setName("Site")
ProtoInstance878.setDEF("hanim_r_asis")
fieldValue879 = x3d.fieldValue()
fieldValue879.setName("name")
fieldValue879.setValue("r_asis")

ProtoInstance878.addFieldValue(fieldValue879)
fieldValue880 = x3d.fieldValue()
fieldValue880.setName("translation")
fieldValue880.setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747")

ProtoInstance878.addFieldValue(fieldValue880)

fieldValue826.addChildren(ProtoInstance878)
ProtoInstance881 = x3d.ProtoInstance()
ProtoInstance881.setName("Site")
ProtoInstance881.setDEF("hanim_l_rib10")
fieldValue882 = x3d.fieldValue()
fieldValue882.setName("name")
fieldValue882.setValue("l_rib10")

ProtoInstance881.addFieldValue(fieldValue882)
fieldValue883 = x3d.fieldValue()
fieldValue883.setName("translation")
fieldValue883.setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202")

ProtoInstance881.addFieldValue(fieldValue883)

fieldValue826.addChildren(ProtoInstance881)
ProtoInstance884 = x3d.ProtoInstance()
ProtoInstance884.setName("Site")
ProtoInstance884.setDEF("hanim_l_asis")
fieldValue885 = x3d.fieldValue()
fieldValue885.setName("name")
fieldValue885.setValue("l_asis")

ProtoInstance884.addFieldValue(fieldValue885)
fieldValue886 = x3d.fieldValue()
fieldValue886.setName("translation")
fieldValue886.setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836")

ProtoInstance884.addFieldValue(fieldValue886)

fieldValue826.addChildren(ProtoInstance884)
ProtoInstance887 = x3d.ProtoInstance()
ProtoInstance887.setName("Site")
ProtoInstance887.setDEF("hanim_r_iliocristale")
fieldValue888 = x3d.fieldValue()
fieldValue888.setName("name")
fieldValue888.setValue("r_iliocristale")

ProtoInstance887.addFieldValue(fieldValue888)
fieldValue889 = x3d.fieldValue()
fieldValue889.setName("translation")
fieldValue889.setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187")

ProtoInstance887.addFieldValue(fieldValue889)

fieldValue826.addChildren(ProtoInstance887)
ProtoInstance890 = x3d.ProtoInstance()
ProtoInstance890.setName("Site")
ProtoInstance890.setDEF("hanim_r_trochanterion")
fieldValue891 = x3d.fieldValue()
fieldValue891.setName("name")
fieldValue891.setValue("r_trochanterion")

ProtoInstance890.addFieldValue(fieldValue891)
fieldValue892 = x3d.fieldValue()
fieldValue892.setName("translation")
fieldValue892.setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514")

ProtoInstance890.addFieldValue(fieldValue892)

fieldValue826.addChildren(ProtoInstance890)
ProtoInstance893 = x3d.ProtoInstance()
ProtoInstance893.setName("Site")
ProtoInstance893.setDEF("hanim_l_iliocristale")
fieldValue894 = x3d.fieldValue()
fieldValue894.setName("name")
fieldValue894.setValue("l_iliocristale")

ProtoInstance893.addFieldValue(fieldValue894)
fieldValue895 = x3d.fieldValue()
fieldValue895.setName("translation")
fieldValue895.setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001")

ProtoInstance893.addFieldValue(fieldValue895)

fieldValue826.addChildren(ProtoInstance893)
ProtoInstance896 = x3d.ProtoInstance()
ProtoInstance896.setName("Site")
ProtoInstance896.setDEF("hanim_l_trochanterion")
fieldValue897 = x3d.fieldValue()
fieldValue897.setName("name")
fieldValue897.setValue("l_trochanterion")

ProtoInstance896.addFieldValue(fieldValue897)
fieldValue898 = x3d.fieldValue()
fieldValue898.setName("translation")
fieldValue898.setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183")

ProtoInstance896.addFieldValue(fieldValue898)

fieldValue826.addChildren(ProtoInstance896)
ProtoInstance899 = x3d.ProtoInstance()
ProtoInstance899.setName("Site")
ProtoInstance899.setDEF("hanim_cervicale")
fieldValue900 = x3d.fieldValue()
fieldValue900.setName("name")
fieldValue900.setValue("cervicale")

ProtoInstance899.addFieldValue(fieldValue900)
fieldValue901 = x3d.fieldValue()
fieldValue901.setName("translation")
fieldValue901.setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754")

ProtoInstance899.addFieldValue(fieldValue901)

fieldValue826.addChildren(ProtoInstance899)
ProtoInstance902 = x3d.ProtoInstance()
ProtoInstance902.setName("Site")
ProtoInstance902.setDEF("hanim_spine_2_lower_back")
fieldValue903 = x3d.fieldValue()
fieldValue903.setName("name")
fieldValue903.setValue("spine_2_lower_back")

ProtoInstance902.addFieldValue(fieldValue903)
fieldValue904 = x3d.fieldValue()
fieldValue904.setName("translation")
fieldValue904.setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661")

ProtoInstance902.addFieldValue(fieldValue904)

fieldValue826.addChildren(ProtoInstance902)
ProtoInstance905 = x3d.ProtoInstance()
ProtoInstance905.setName("Site")
ProtoInstance905.setDEF("hanim_r_psis")
fieldValue906 = x3d.fieldValue()
fieldValue906.setName("name")
fieldValue906.setValue("r_psis")

ProtoInstance905.addFieldValue(fieldValue906)
fieldValue907 = x3d.fieldValue()
fieldValue907.setName("translation")
fieldValue907.setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082")

ProtoInstance905.addFieldValue(fieldValue907)

fieldValue826.addChildren(ProtoInstance905)
ProtoInstance908 = x3d.ProtoInstance()
ProtoInstance908.setName("Site")
ProtoInstance908.setDEF("hanim_l_psis")
fieldValue909 = x3d.fieldValue()
fieldValue909.setName("name")
fieldValue909.setValue("l_psis")

ProtoInstance908.addFieldValue(fieldValue909)
fieldValue910 = x3d.fieldValue()
fieldValue910.setName("translation")
fieldValue910.setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388")

ProtoInstance908.addFieldValue(fieldValue910)

fieldValue826.addChildren(ProtoInstance908)
ProtoInstance911 = x3d.ProtoInstance()
ProtoInstance911.setName("Site")
ProtoInstance911.setDEF("hanim_waist_preferred_posterior")
fieldValue912 = x3d.fieldValue()
fieldValue912.setName("name")
fieldValue912.setValue("waist_preferred_posterior")

ProtoInstance911.addFieldValue(fieldValue912)
fieldValue913 = x3d.fieldValue()
fieldValue913.setName("translation")
fieldValue913.setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754")

ProtoInstance911.addFieldValue(fieldValue913)

fieldValue826.addChildren(ProtoInstance911)
ProtoInstance914 = x3d.ProtoInstance()
ProtoInstance914.setName("Site")
ProtoInstance914.setDEF("hanim_r_acromion")
fieldValue915 = x3d.fieldValue()
fieldValue915.setName("name")
fieldValue915.setValue("r_acromion")

ProtoInstance914.addFieldValue(fieldValue915)
fieldValue916 = x3d.fieldValue()
fieldValue916.setName("translation")
fieldValue916.setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541")

ProtoInstance914.addFieldValue(fieldValue916)

fieldValue826.addChildren(ProtoInstance914)
ProtoInstance917 = x3d.ProtoInstance()
ProtoInstance917.setName("Site")
ProtoInstance917.setDEF("hanim_r_axilla_proximal")
fieldValue918 = x3d.fieldValue()
fieldValue918.setName("name")
fieldValue918.setValue("r_axilla_proximal")

ProtoInstance917.addFieldValue(fieldValue918)
fieldValue919 = x3d.fieldValue()
fieldValue919.setName("translation")
fieldValue919.setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438")

ProtoInstance917.addFieldValue(fieldValue919)

fieldValue826.addChildren(ProtoInstance917)
ProtoInstance920 = x3d.ProtoInstance()
ProtoInstance920.setName("Site")
ProtoInstance920.setDEF("hanim_r_radial_styloid")
fieldValue921 = x3d.fieldValue()
fieldValue921.setName("name")
fieldValue921.setValue("r_radial_styloid")

ProtoInstance920.addFieldValue(fieldValue921)
fieldValue922 = x3d.fieldValue()
fieldValue922.setName("translation")
fieldValue922.setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236")

ProtoInstance920.addFieldValue(fieldValue922)

fieldValue826.addChildren(ProtoInstance920)
ProtoInstance923 = x3d.ProtoInstance()
ProtoInstance923.setName("Site")
ProtoInstance923.setDEF("hanim_r_axilla_distal")
fieldValue924 = x3d.fieldValue()
fieldValue924.setName("name")
fieldValue924.setValue("r_axilla_distal")

ProtoInstance923.addFieldValue(fieldValue924)
fieldValue925 = x3d.fieldValue()
fieldValue925.setName("translation")
fieldValue925.setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678")

ProtoInstance923.addFieldValue(fieldValue925)

fieldValue826.addChildren(ProtoInstance923)
ProtoInstance926 = x3d.ProtoInstance()
ProtoInstance926.setName("Site")
ProtoInstance926.setDEF("hanim_r_olecranon")
fieldValue927 = x3d.fieldValue()
fieldValue927.setName("name")
fieldValue927.setValue("r_olecranon")

ProtoInstance926.addFieldValue(fieldValue927)
fieldValue928 = x3d.fieldValue()
fieldValue928.setName("translation")
fieldValue928.setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")

ProtoInstance926.addFieldValue(fieldValue928)

fieldValue826.addChildren(ProtoInstance926)
ProtoInstance929 = x3d.ProtoInstance()
ProtoInstance929.setName("Site")
ProtoInstance929.setDEF("hanim_r_humeral_lateral_epicondyles")
fieldValue930 = x3d.fieldValue()
fieldValue930.setName("name")
fieldValue930.setValue("r_humeral_lateral_epicondyles")

ProtoInstance929.addFieldValue(fieldValue930)
fieldValue931 = x3d.fieldValue()
fieldValue931.setName("translation")
fieldValue931.setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")

ProtoInstance929.addFieldValue(fieldValue931)

fieldValue826.addChildren(ProtoInstance929)
ProtoInstance932 = x3d.ProtoInstance()
ProtoInstance932.setName("Site")
ProtoInstance932.setDEF("hanim_r_humeral_medial_epicondyles")
fieldValue933 = x3d.fieldValue()
fieldValue933.setName("name")
fieldValue933.setValue("r_humeral_medial_epicondyles")

ProtoInstance932.addFieldValue(fieldValue933)
fieldValue934 = x3d.fieldValue()
fieldValue934.setName("translation")
fieldValue934.setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")

ProtoInstance932.addFieldValue(fieldValue934)

fieldValue826.addChildren(ProtoInstance932)
ProtoInstance935 = x3d.ProtoInstance()
ProtoInstance935.setName("Site")
ProtoInstance935.setDEF("hanim_r_radiale")
fieldValue936 = x3d.fieldValue()
fieldValue936.setName("name")
fieldValue936.setValue("r_radiale")

ProtoInstance935.addFieldValue(fieldValue936)
fieldValue937 = x3d.fieldValue()
fieldValue937.setName("translation")
fieldValue937.setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")

ProtoInstance935.addFieldValue(fieldValue937)

fieldValue826.addChildren(ProtoInstance935)
ProtoInstance938 = x3d.ProtoInstance()
ProtoInstance938.setName("Site")
ProtoInstance938.setDEF("hanim_r_metacarpal_phalanx_2")
fieldValue939 = x3d.fieldValue()
fieldValue939.setName("name")
fieldValue939.setValue("r_metacarpal_phalanx_2")

ProtoInstance938.addFieldValue(fieldValue939)
fieldValue940 = x3d.fieldValue()
fieldValue940.setName("translation")
fieldValue940.setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")

ProtoInstance938.addFieldValue(fieldValue940)

fieldValue826.addChildren(ProtoInstance938)
ProtoInstance941 = x3d.ProtoInstance()
ProtoInstance941.setName("Site")
ProtoInstance941.setDEF("hanim_r_dactylion")
fieldValue942 = x3d.fieldValue()
fieldValue942.setName("name")
fieldValue942.setValue("r_dactylion")

ProtoInstance941.addFieldValue(fieldValue942)
fieldValue943 = x3d.fieldValue()
fieldValue943.setName("translation")
fieldValue943.setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")

ProtoInstance941.addFieldValue(fieldValue943)

fieldValue826.addChildren(ProtoInstance941)
ProtoInstance944 = x3d.ProtoInstance()
ProtoInstance944.setName("Site")
ProtoInstance944.setDEF("hanim_r_ulnar_styloid")
fieldValue945 = x3d.fieldValue()
fieldValue945.setName("name")
fieldValue945.setValue("r_ulnar_styloid")

ProtoInstance944.addFieldValue(fieldValue945)
fieldValue946 = x3d.fieldValue()
fieldValue946.setName("translation")
fieldValue946.setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")

ProtoInstance944.addFieldValue(fieldValue946)

fieldValue826.addChildren(ProtoInstance944)
ProtoInstance947 = x3d.ProtoInstance()
ProtoInstance947.setName("Site")
ProtoInstance947.setDEF("hanim_r_metacarpal_phalanx_5")
fieldValue948 = x3d.fieldValue()
fieldValue948.setName("name")
fieldValue948.setValue("r_metacarpal_phalanx_5")

ProtoInstance947.addFieldValue(fieldValue948)
fieldValue949 = x3d.fieldValue()
fieldValue949.setName("translation")
fieldValue949.setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")

ProtoInstance947.addFieldValue(fieldValue949)

fieldValue826.addChildren(ProtoInstance947)
ProtoInstance950 = x3d.ProtoInstance()
ProtoInstance950.setName("Site")
ProtoInstance950.setDEF("hanim_l_acromion")
fieldValue951 = x3d.fieldValue()
fieldValue951.setName("name")
fieldValue951.setValue("l_acromion")

ProtoInstance950.addFieldValue(fieldValue951)
fieldValue952 = x3d.fieldValue()
fieldValue952.setName("translation")
fieldValue952.setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014")

ProtoInstance950.addFieldValue(fieldValue952)

fieldValue826.addChildren(ProtoInstance950)
ProtoInstance953 = x3d.ProtoInstance()
ProtoInstance953.setName("Site")
ProtoInstance953.setDEF("hanim_l_axilla_proximal")
fieldValue954 = x3d.fieldValue()
fieldValue954.setName("name")
fieldValue954.setValue("l_axilla_proximal")

ProtoInstance953.addFieldValue(fieldValue954)
fieldValue955 = x3d.fieldValue()
fieldValue955.setName("translation")
fieldValue955.setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937")

ProtoInstance953.addFieldValue(fieldValue955)

fieldValue826.addChildren(ProtoInstance953)
ProtoInstance956 = x3d.ProtoInstance()
ProtoInstance956.setName("Site")
ProtoInstance956.setDEF("hanim_l_radial_styloid")
fieldValue957 = x3d.fieldValue()
fieldValue957.setName("name")
fieldValue957.setValue("l_radial_styloid")

ProtoInstance956.addFieldValue(fieldValue957)
fieldValue958 = x3d.fieldValue()
fieldValue958.setName("translation")
fieldValue958.setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691")

ProtoInstance956.addFieldValue(fieldValue958)

fieldValue826.addChildren(ProtoInstance956)
ProtoInstance959 = x3d.ProtoInstance()
ProtoInstance959.setName("Site")
ProtoInstance959.setDEF("hanim_l_axilla_distal")
fieldValue960 = x3d.fieldValue()
fieldValue960.setName("name")
fieldValue960.setValue("l_axilla_distal")

ProtoInstance959.addFieldValue(fieldValue960)
fieldValue961 = x3d.fieldValue()
fieldValue961.setName("translation")
fieldValue961.setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388")

ProtoInstance959.addFieldValue(fieldValue961)

fieldValue826.addChildren(ProtoInstance959)
ProtoInstance962 = x3d.ProtoInstance()
ProtoInstance962.setName("Site")
ProtoInstance962.setDEF("hanim_l_olecranon")
fieldValue963 = x3d.fieldValue()
fieldValue963.setName("name")
fieldValue963.setValue("l_olecranon")

ProtoInstance962.addFieldValue(fieldValue963)
fieldValue964 = x3d.fieldValue()
fieldValue964.setName("translation")
fieldValue964.setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")

ProtoInstance962.addFieldValue(fieldValue964)

fieldValue826.addChildren(ProtoInstance962)
ProtoInstance965 = x3d.ProtoInstance()
ProtoInstance965.setName("Site")
ProtoInstance965.setDEF("hanim_l_humeral_lateral_epicondyles")
fieldValue966 = x3d.fieldValue()
fieldValue966.setName("name")
fieldValue966.setValue("l_humeral_lateral_epicondyles")

ProtoInstance965.addFieldValue(fieldValue966)
fieldValue967 = x3d.fieldValue()
fieldValue967.setName("translation")
fieldValue967.setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355")

ProtoInstance965.addFieldValue(fieldValue967)

fieldValue826.addChildren(ProtoInstance965)
ProtoInstance968 = x3d.ProtoInstance()
ProtoInstance968.setName("Site")
ProtoInstance968.setDEF("hanim_l_humeral_medial_epicondyles")
fieldValue969 = x3d.fieldValue()
fieldValue969.setName("name")
fieldValue969.setValue("l_humeral_medial_epicondyles")

ProtoInstance968.addFieldValue(fieldValue969)
fieldValue970 = x3d.fieldValue()
fieldValue970.setName("translation")
fieldValue970.setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661")

ProtoInstance968.addFieldValue(fieldValue970)

fieldValue826.addChildren(ProtoInstance968)
ProtoInstance971 = x3d.ProtoInstance()
ProtoInstance971.setName("Site")
ProtoInstance971.setDEF("hanim_l_radiale")
fieldValue972 = x3d.fieldValue()
fieldValue972.setName("name")
fieldValue972.setValue("l_radiale")

ProtoInstance971.addFieldValue(fieldValue972)
fieldValue973 = x3d.fieldValue()
fieldValue973.setName("translation")
fieldValue973.setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268")

ProtoInstance971.addFieldValue(fieldValue973)

fieldValue826.addChildren(ProtoInstance971)
ProtoInstance974 = x3d.ProtoInstance()
ProtoInstance974.setName("Site")
ProtoInstance974.setDEF("hanim_l_metacarpal_phalanx_2")
fieldValue975 = x3d.fieldValue()
fieldValue975.setName("name")
fieldValue975.setValue("l_metacarpal_phalanx_2")

ProtoInstance974.addFieldValue(fieldValue975)
fieldValue976 = x3d.fieldValue()
fieldValue976.setName("translation")
fieldValue976.setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597")

ProtoInstance974.addFieldValue(fieldValue976)

fieldValue826.addChildren(ProtoInstance974)
ProtoInstance977 = x3d.ProtoInstance()
ProtoInstance977.setName("Site")
ProtoInstance977.setDEF("hanim_l_dactylion")
fieldValue978 = x3d.fieldValue()
fieldValue978.setName("name")
fieldValue978.setValue("l_dactylion")

ProtoInstance977.addFieldValue(fieldValue978)
fieldValue979 = x3d.fieldValue()
fieldValue979.setName("translation")
fieldValue979.setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604")

ProtoInstance977.addFieldValue(fieldValue979)

fieldValue826.addChildren(ProtoInstance977)
ProtoInstance980 = x3d.ProtoInstance()
ProtoInstance980.setName("Site")
ProtoInstance980.setDEF("hanim_l_ulnar_styloid")
fieldValue981 = x3d.fieldValue()
fieldValue981.setName("name")
fieldValue981.setValue("l_ulnar_styloid")

ProtoInstance980.addFieldValue(fieldValue981)
fieldValue982 = x3d.fieldValue()
fieldValue982.setName("translation")
fieldValue982.setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")

ProtoInstance980.addFieldValue(fieldValue982)

fieldValue826.addChildren(ProtoInstance980)
ProtoInstance983 = x3d.ProtoInstance()
ProtoInstance983.setName("Site")
ProtoInstance983.setDEF("hanim_l_metacarpal_phalanx_5")
fieldValue984 = x3d.fieldValue()
fieldValue984.setName("name")
fieldValue984.setValue("l_metacarpal_phalanx_5")

ProtoInstance983.addFieldValue(fieldValue984)
fieldValue985 = x3d.fieldValue()
fieldValue985.setName("translation")
fieldValue985.setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262")

ProtoInstance983.addFieldValue(fieldValue985)

fieldValue826.addChildren(ProtoInstance983)
ProtoInstance986 = x3d.ProtoInstance()
ProtoInstance986.setName("Site")
ProtoInstance986.setDEF("hanim_r_knee_crease")
fieldValue987 = x3d.fieldValue()
fieldValue987.setName("name")
fieldValue987.setValue("r_knee_crease")

ProtoInstance986.addFieldValue(fieldValue987)
fieldValue988 = x3d.fieldValue()
fieldValue988.setName("translation")
fieldValue988.setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")

ProtoInstance986.addFieldValue(fieldValue988)

fieldValue826.addChildren(ProtoInstance986)
ProtoInstance989 = x3d.ProtoInstance()
ProtoInstance989.setName("Site")
ProtoInstance989.setDEF("hanim_r_femoral_lateral_epicondyles")
fieldValue990 = x3d.fieldValue()
fieldValue990.setName("name")
fieldValue990.setValue("r_femoral_lateral_epicondyles")

ProtoInstance989.addFieldValue(fieldValue990)
fieldValue991 = x3d.fieldValue()
fieldValue991.setName("translation")
fieldValue991.setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052")

ProtoInstance989.addFieldValue(fieldValue991)

fieldValue826.addChildren(ProtoInstance989)
ProtoInstance992 = x3d.ProtoInstance()
ProtoInstance992.setName("Site")
ProtoInstance992.setDEF("hanim_r_femoral_medial_epicondyles")
fieldValue993 = x3d.fieldValue()
fieldValue993.setName("name")
fieldValue993.setValue("r_femoral_lateral_epicondyles")

ProtoInstance992.addFieldValue(fieldValue993)
fieldValue994 = x3d.fieldValue()
fieldValue994.setName("translation")
fieldValue994.setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821")

ProtoInstance992.addFieldValue(fieldValue994)

fieldValue826.addChildren(ProtoInstance992)
ProtoInstance995 = x3d.ProtoInstance()
ProtoInstance995.setName("Site")
ProtoInstance995.setDEF("hanim_r_tarsal_interphalangeal_phalanx_5")
fieldValue996 = x3d.fieldValue()
fieldValue996.setName("name")
fieldValue996.setValue("r_tarsal_interphalangeal_phalanx_5")

ProtoInstance995.addFieldValue(fieldValue996)
fieldValue997 = x3d.fieldValue()
fieldValue997.setName("translation")
fieldValue997.setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973")

ProtoInstance995.addFieldValue(fieldValue997)

fieldValue826.addChildren(ProtoInstance995)
ProtoInstance998 = x3d.ProtoInstance()
ProtoInstance998.setName("Site")
ProtoInstance998.setDEF("hanim_r_lateral_malleolus")
fieldValue999 = x3d.fieldValue()
fieldValue999.setName("name")
fieldValue999.setValue("r_lateral_malleolus")

ProtoInstance998.addFieldValue(fieldValue999)
fieldValue1000 = x3d.fieldValue()
fieldValue1000.setName("translation")
fieldValue1000.setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")

ProtoInstance998.addFieldValue(fieldValue1000)

fieldValue826.addChildren(ProtoInstance998)
ProtoInstance1001 = x3d.ProtoInstance()
ProtoInstance1001.setName("Site")
ProtoInstance1001.setDEF("hanim_r_medial_malleolus")
fieldValue1002 = x3d.fieldValue()
fieldValue1002.setName("name")
fieldValue1002.setValue("r_medial_malleolus")

ProtoInstance1001.addFieldValue(fieldValue1002)
fieldValue1003 = x3d.fieldValue()
fieldValue1003.setName("translation")
fieldValue1003.setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")

ProtoInstance1001.addFieldValue(fieldValue1003)

fieldValue826.addChildren(ProtoInstance1001)
ProtoInstance1004 = x3d.ProtoInstance()
ProtoInstance1004.setName("Site")
ProtoInstance1004.setDEF("hanim_r_sphyrion")
fieldValue1005 = x3d.fieldValue()
fieldValue1005.setName("name")
fieldValue1005.setValue("r_sphyrion")

ProtoInstance1004.addFieldValue(fieldValue1005)
fieldValue1006 = x3d.fieldValue()
fieldValue1006.setName("translation")
fieldValue1006.setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")

ProtoInstance1004.addFieldValue(fieldValue1006)

fieldValue826.addChildren(ProtoInstance1004)
ProtoInstance1007 = x3d.ProtoInstance()
ProtoInstance1007.setName("Site")
ProtoInstance1007.setDEF("hanim_r_tarsal_interphalangeal_phalanx_1")
fieldValue1008 = x3d.fieldValue()
fieldValue1008.setName("name")
fieldValue1008.setValue("r_tarsal_interphalangeal_phalanx_1")

ProtoInstance1007.addFieldValue(fieldValue1008)
fieldValue1009 = x3d.fieldValue()
fieldValue1009.setName("translation")
fieldValue1009.setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804")

ProtoInstance1007.addFieldValue(fieldValue1009)

fieldValue826.addChildren(ProtoInstance1007)
ProtoInstance1010 = x3d.ProtoInstance()
ProtoInstance1010.setName("Site")
ProtoInstance1010.setDEF("hanim_r_calcaneus_posterior")
fieldValue1011 = x3d.fieldValue()
fieldValue1011.setName("name")
fieldValue1011.setValue("r_calcaneus_posterior")

ProtoInstance1010.addFieldValue(fieldValue1011)
fieldValue1012 = x3d.fieldValue()
fieldValue1012.setName("translation")
fieldValue1012.setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")

ProtoInstance1010.addFieldValue(fieldValue1012)

fieldValue826.addChildren(ProtoInstance1010)
ProtoInstance1013 = x3d.ProtoInstance()
ProtoInstance1013.setName("Site")
ProtoInstance1013.setDEF("hanim_r_tarsal_distal_phalanx_2")
fieldValue1014 = x3d.fieldValue()
fieldValue1014.setName("name")
fieldValue1014.setValue("r_tarsal_distal_phalanx_2")

ProtoInstance1013.addFieldValue(fieldValue1014)
fieldValue1015 = x3d.fieldValue()
fieldValue1015.setName("translation")
fieldValue1015.setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634")

ProtoInstance1013.addFieldValue(fieldValue1015)

fieldValue826.addChildren(ProtoInstance1013)
ProtoInstance1016 = x3d.ProtoInstance()
ProtoInstance1016.setName("Site")
ProtoInstance1016.setDEF("hanim_l_knee_crease")
fieldValue1017 = x3d.fieldValue()
fieldValue1017.setName("name")
fieldValue1017.setValue("l_knee_crease")

ProtoInstance1016.addFieldValue(fieldValue1017)
fieldValue1018 = x3d.fieldValue()
fieldValue1018.setName("translation")
fieldValue1018.setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757")

ProtoInstance1016.addFieldValue(fieldValue1018)

fieldValue826.addChildren(ProtoInstance1016)
ProtoInstance1019 = x3d.ProtoInstance()
ProtoInstance1019.setName("Site")
ProtoInstance1019.setDEF("hanim_l_femoral_lateral_epicondyles")
fieldValue1020 = x3d.fieldValue()
fieldValue1020.setName("name")
fieldValue1020.setValue("l_femoral_lateral_epicondyles")

ProtoInstance1019.addFieldValue(fieldValue1020)
fieldValue1021 = x3d.fieldValue()
fieldValue1021.setName("translation")
fieldValue1021.setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746")

ProtoInstance1019.addFieldValue(fieldValue1021)

fieldValue826.addChildren(ProtoInstance1019)
ProtoInstance1022 = x3d.ProtoInstance()
ProtoInstance1022.setName("Site")
ProtoInstance1022.setDEF("hanim_l_femoral_medial_epicondyles")
fieldValue1023 = x3d.fieldValue()
fieldValue1023.setName("name")
fieldValue1023.setValue("l_femoral_lateral_epicondyles")

ProtoInstance1022.addFieldValue(fieldValue1023)
fieldValue1024 = x3d.fieldValue()
fieldValue1024.setName("translation")
fieldValue1024.setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183")

ProtoInstance1022.addFieldValue(fieldValue1024)

fieldValue826.addChildren(ProtoInstance1022)
ProtoInstance1025 = x3d.ProtoInstance()
ProtoInstance1025.setName("Site")
ProtoInstance1025.setDEF("hanim_l_tarsal_interphalangeal_phalanx_5")
fieldValue1026 = x3d.fieldValue()
fieldValue1026.setName("name")
fieldValue1026.setValue("l_tarsal_interphalangeal_phalanx_5")

ProtoInstance1025.addFieldValue(fieldValue1026)
fieldValue1027 = x3d.fieldValue()
fieldValue1027.setName("translation")
fieldValue1027.setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803")

ProtoInstance1025.addFieldValue(fieldValue1027)

fieldValue826.addChildren(ProtoInstance1025)
ProtoInstance1028 = x3d.ProtoInstance()
ProtoInstance1028.setName("Site")
ProtoInstance1028.setDEF("hanim_l_lateral_malleolus")
fieldValue1029 = x3d.fieldValue()
fieldValue1029.setName("name")
fieldValue1029.setValue("l_lateral_malleolus")

ProtoInstance1028.addFieldValue(fieldValue1029)
fieldValue1030 = x3d.fieldValue()
fieldValue1030.setName("translation")
fieldValue1030.setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311")

ProtoInstance1028.addFieldValue(fieldValue1030)

fieldValue826.addChildren(ProtoInstance1028)
ProtoInstance1031 = x3d.ProtoInstance()
ProtoInstance1031.setName("Site")
ProtoInstance1031.setDEF("hanim_l_medial_malleolus")
fieldValue1032 = x3d.fieldValue()
fieldValue1032.setName("name")
fieldValue1032.setValue("l_medial_malleolus")

ProtoInstance1031.addFieldValue(fieldValue1032)
fieldValue1033 = x3d.fieldValue()
fieldValue1033.setName("translation")
fieldValue1033.setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475")

ProtoInstance1031.addFieldValue(fieldValue1033)

fieldValue826.addChildren(ProtoInstance1031)
ProtoInstance1034 = x3d.ProtoInstance()
ProtoInstance1034.setName("Site")
ProtoInstance1034.setDEF("hanim_l_sphyrion")
fieldValue1035 = x3d.fieldValue()
fieldValue1035.setName("name")
fieldValue1035.setValue("l_sphyrion")

ProtoInstance1034.addFieldValue(fieldValue1035)
fieldValue1036 = x3d.fieldValue()
fieldValue1036.setName("translation")
fieldValue1036.setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492")

ProtoInstance1034.addFieldValue(fieldValue1036)

fieldValue826.addChildren(ProtoInstance1034)
ProtoInstance1037 = x3d.ProtoInstance()
ProtoInstance1037.setName("Site")
ProtoInstance1037.setDEF("hanim_l_tarsal_interphalangeal_phalanx_1")
fieldValue1038 = x3d.fieldValue()
fieldValue1038.setName("name")
fieldValue1038.setValue("l_tarsal_interphalangeal_phalanx_1")

ProtoInstance1037.addFieldValue(fieldValue1038)
fieldValue1039 = x3d.fieldValue()
fieldValue1039.setName("translation")
fieldValue1039.setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731")

ProtoInstance1037.addFieldValue(fieldValue1039)

fieldValue826.addChildren(ProtoInstance1037)
ProtoInstance1040 = x3d.ProtoInstance()
ProtoInstance1040.setName("Site")
ProtoInstance1040.setDEF("hanim_l_calcaneus_posterior")
fieldValue1041 = x3d.fieldValue()
fieldValue1041.setName("name")
fieldValue1041.setValue("l_calcaneus_posterior")

ProtoInstance1040.addFieldValue(fieldValue1041)
fieldValue1042 = x3d.fieldValue()
fieldValue1042.setName("translation")
fieldValue1042.setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973")

ProtoInstance1040.addFieldValue(fieldValue1042)

fieldValue826.addChildren(ProtoInstance1040)
ProtoInstance1043 = x3d.ProtoInstance()
ProtoInstance1043.setName("Site")
ProtoInstance1043.setDEF("hanim_l_tarsal_distal_phalanx_2")
fieldValue1044 = x3d.fieldValue()
fieldValue1044.setName("name")
fieldValue1044.setValue("l_tarsal_distal_phalanx_2")

ProtoInstance1043.addFieldValue(fieldValue1044)
fieldValue1045 = x3d.fieldValue()
fieldValue1045.setName("translation")
fieldValue1045.setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476")

ProtoInstance1043.addFieldValue(fieldValue1045)

fieldValue826.addChildren(ProtoInstance1043)
ProtoInstance1046 = x3d.ProtoInstance()
ProtoInstance1046.setName("Site")
ProtoInstance1046.setDEF("hanim_crotch")
fieldValue1047 = x3d.fieldValue()
fieldValue1047.setName("name")
fieldValue1047.setValue("crotch")

ProtoInstance1046.addFieldValue(fieldValue1047)
fieldValue1048 = x3d.fieldValue()
fieldValue1048.setName("translation")
fieldValue1048.setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367")

ProtoInstance1046.addFieldValue(fieldValue1048)

fieldValue826.addChildren(ProtoInstance1046)
ProtoInstance1049 = x3d.ProtoInstance()
ProtoInstance1049.setName("Site")
ProtoInstance1049.setDEF("hanim_r_neck_base")
fieldValue1050 = x3d.fieldValue()
fieldValue1050.setName("name")
fieldValue1050.setValue("r_neck_base")

ProtoInstance1049.addFieldValue(fieldValue1050)
fieldValue1051 = x3d.fieldValue()
fieldValue1051.setName("translation")
fieldValue1051.setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071")

ProtoInstance1049.addFieldValue(fieldValue1051)

fieldValue826.addChildren(ProtoInstance1049)
ProtoInstance1052 = x3d.ProtoInstance()
ProtoInstance1052.setName("Site")
ProtoInstance1052.setDEF("hanim_l_neck_base")
fieldValue1053 = x3d.fieldValue()
fieldValue1053.setName("name")
fieldValue1053.setValue("l_neck_base")

ProtoInstance1052.addFieldValue(fieldValue1053)
fieldValue1054 = x3d.fieldValue()
fieldValue1054.setName("translation")
fieldValue1054.setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478")

ProtoInstance1052.addFieldValue(fieldValue1054)

fieldValue826.addChildren(ProtoInstance1052)
ProtoInstance1055 = x3d.ProtoInstance()
ProtoInstance1055.setName("Site")
ProtoInstance1055.setDEF("hanim_navel")
fieldValue1056 = x3d.fieldValue()
fieldValue1056.setName("name")
fieldValue1056.setValue("navel")

ProtoInstance1055.addFieldValue(fieldValue1056)
fieldValue1057 = x3d.fieldValue()
fieldValue1057.setName("translation")
fieldValue1057.setValue("0.006899999920278788 1.09660005569458 0.10170000046491623")

ProtoInstance1055.addFieldValue(fieldValue1057)

fieldValue826.addChildren(ProtoInstance1055)

ProtoInstance110.addFieldValue(fieldValue826)
fieldValue1058 = x3d.fieldValue()
fieldValue1058.setName("name")
fieldValue1058.setValue("humanoid")

ProtoInstance110.addFieldValue(fieldValue1058)
fieldValue1059 = x3d.fieldValue()
fieldValue1059.setName("info")
fieldValue1059.setValue("\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;0\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"")

ProtoInstance110.addFieldValue(fieldValue1059)

Scene4.addChildren(ProtoInstance110)
Group1060 = x3d.Group()
Group1060.setDEF("JointCenters_WorldInfo")
WorldInfo1061 = x3d.WorldInfo()
WorldInfo1061.setTitle("HANIM 200x Default Joint Centers, LOA&#8209;0")
WorldInfo1061.setInfo([" HANIM 200x Default Joint Centers, Level-Of-Articulation 0 --------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "])

Group1060.addChildren(WorldInfo1061)

Scene4.addChildren(Group1060)
NavigationInfo1062 = x3d.NavigationInfo()
NavigationInfo1062.setAvatarSize([0.25,1.600000023841858,0.75])
NavigationInfo1062.setSpeed(1.5)

Scene4.addChildren(NavigationInfo1062)

X3D0.setScene(Scene4)
X3D0.toFileX3D("../data/LOA0ExampleSourceWithDiamonds_RoundTrip.x3d")
