import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("3.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Networking")
component2.setLevel(2)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("generator")
meta3.setContent("view3dscene, https://castle-engine.io/view3dscene.php")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("source")
meta4.setContent("t1.wrl")

head1.addMeta(meta4)

X3D0.setHead(head1)
Scene5 = x3d.Scene()
NavigationInfo6 = x3d.NavigationInfo()
NavigationInfo6.setType(["EXAMINE","FLY","WALK"])
NavigationInfo6.setSpeed(3)
NavigationInfo6.setAvatarSize([200,200,120])

Scene5.addChildren(NavigationInfo6)
WorldInfo7 = x3d.WorldInfo()
WorldInfo7.setTitle("Arts Mapper")

Scene5.addChildren(WorldInfo7)
Viewpoint8 = x3d.Viewpoint()
Viewpoint8.setDescription("looking North")
Viewpoint8.setPosition([0,60,110])
Viewpoint8.setOrientation([1,0,0,-0.699999988079071])
Viewpoint8.setFieldOfView(0.785398125648499)

Scene5.addChildren(Viewpoint8)
Viewpoint9 = x3d.Viewpoint()
Viewpoint9.setDescription("looking East")
Viewpoint9.setPosition([-140,30,0])
Viewpoint9.setOrientation([0,0.400000005960464,0,-1.39999997615814])
Viewpoint9.setFieldOfView(0.785398125648499)

Scene5.addChildren(Viewpoint9)
Viewpoint10 = x3d.Viewpoint()
Viewpoint10.setDescription("Overhead")
Viewpoint10.setPosition([0,150,0])
Viewpoint10.setOrientation([1,0,0,-1.57000005245209])
Viewpoint10.setFieldOfView(0.785398125648499)

Scene5.addChildren(Viewpoint10)
ProtoDeclare11 = x3d.ProtoDeclare()
ProtoDeclare11.setName("school")
ProtoInterface12 = x3d.ProtoInterface()
field13 = x3d.field()
field13.setName("pos")
field13.setAccessType("initializeOnly")
field13.setType("SFVec3f")
field13.setValue("0 0 0")

ProtoInterface12.addField(field13)

ProtoDeclare11.setProtoInterface(ProtoInterface12)
ProtoBody14 = x3d.ProtoBody()
Transform15 = x3d.Transform()
Shape16 = x3d.Shape()
Appearance17 = x3d.Appearance()
Material18 = x3d.Material()
Material18.setTransparency(0.200000002980232)
Material18.setDiffuseColor([0.5,0,1])

Appearance17.setMaterial(Material18)

Shape16.setAppearance(Appearance17)
IndexedFaceSet19 = x3d.IndexedFaceSet()
IndexedFaceSet19.setCoordIndex([0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1])
Coordinate20 = x3d.Coordinate()
Coordinate20.setPoint([-0.349999994039536,-0.349999994039536,0.349999994039536,0.349999994039536,-0.349999994039536,0.349999994039536,0.349999994039536,-0.349999994039536,-0.349999994039536,-0.349999994039536,-0.349999994039536,-0.349999994039536,0,0.349999994039536,0])

IndexedFaceSet19.setCoord(Coordinate20)

Shape16.setGeometry(IndexedFaceSet19)

Transform15.addChildren(Shape16)
IS21 = x3d.IS()
connect22 = x3d.connect()
connect22.setNodeField("translation")
connect22.setProtoField("pos")

IS21.addConnect(connect22)

Transform15.setIS(IS21)

ProtoBody14.addChildren(Transform15)

ProtoDeclare11.setProtoBody(ProtoBody14)

Scene5.addChildren(ProtoDeclare11)
ProtoDeclare23 = x3d.ProtoDeclare()
ProtoDeclare23.setName("institute")
ProtoInterface24 = x3d.ProtoInterface()
field25 = x3d.field()
field25.setName("pos")
field25.setAccessType("initializeOnly")
field25.setType("SFVec3f")
field25.setValue("0 0 0")

ProtoInterface24.addField(field25)

ProtoDeclare23.setProtoInterface(ProtoInterface24)
ProtoBody26 = x3d.ProtoBody()
Transform27 = x3d.Transform()
Shape28 = x3d.Shape()
Appearance29 = x3d.Appearance()
Material30 = x3d.Material()
Material30.setTransparency(0.200000002980232)
Material30.setDiffuseColor([1,1,0])

Appearance29.setMaterial(Material30)

Shape28.setAppearance(Appearance29)
Box31 = x3d.Box()
Box31.setSize([0.699999988079071,0.699999988079071,0.699999988079071])

Shape28.setGeometry(Box31)

Transform27.addChildren(Shape28)
IS32 = x3d.IS()
connect33 = x3d.connect()
connect33.setNodeField("translation")
connect33.setProtoField("pos")

IS32.addConnect(connect33)

Transform27.setIS(IS32)

ProtoBody26.addChildren(Transform27)

ProtoDeclare23.setProtoBody(ProtoBody26)

Scene5.addChildren(ProtoDeclare23)
ProtoDeclare34 = x3d.ProtoDeclare()
ProtoDeclare34.setName("disart_org")
ProtoInterface35 = x3d.ProtoInterface()
field36 = x3d.field()
field36.setName("pos")
field36.setAccessType("initializeOnly")
field36.setType("SFVec3f")
field36.setValue("0 0 0")

ProtoInterface35.addField(field36)

ProtoDeclare34.setProtoInterface(ProtoInterface35)
ProtoBody37 = x3d.ProtoBody()
Transform38 = x3d.Transform()
Shape39 = x3d.Shape()
Appearance40 = x3d.Appearance()
Material41 = x3d.Material()
Material41.setDiffuseColor([1,1,0])

Appearance40.setMaterial(Material41)

Shape39.setAppearance(Appearance40)
Sphere42 = x3d.Sphere()
Sphere42.setRadius(0.699999988079071)

Shape39.setGeometry(Sphere42)

Transform38.addChildren(Shape39)
IS43 = x3d.IS()
connect44 = x3d.connect()
connect44.setNodeField("translation")
connect44.setProtoField("pos")

IS43.addConnect(connect44)

Transform38.setIS(IS43)

ProtoBody37.addChildren(Transform38)

ProtoDeclare34.setProtoBody(ProtoBody37)

Scene5.addChildren(ProtoDeclare34)
ProtoDeclare45 = x3d.ProtoDeclare()
ProtoDeclare45.setName("org")
ProtoInterface46 = x3d.ProtoInterface()
field47 = x3d.field()
field47.setName("posi")
field47.setAccessType("initializeOnly")
field47.setType("SFVec3f")
field47.setValue("0 0 0")

ProtoInterface46.addField(field47)
field48 = x3d.field()
field48.setName("col")
field48.setAccessType("initializeOnly")
field48.setType("SFColor")
field48.setValue("0 0 0")

ProtoInterface46.addField(field48)

ProtoDeclare45.setProtoInterface(ProtoInterface46)
ProtoBody49 = x3d.ProtoBody()
Transform50 = x3d.Transform()
Shape51 = x3d.Shape()
Appearance52 = x3d.Appearance()
Material53 = x3d.Material()
Material53.setTransparency(0.400000005960464)
IS54 = x3d.IS()
connect55 = x3d.connect()
connect55.setNodeField("emissiveColor")
connect55.setProtoField("col")

IS54.addConnect(connect55)

Material53.setIS(IS54)

Appearance52.setMaterial(Material53)

Shape51.setAppearance(Appearance52)
Sphere56 = x3d.Sphere()
Sphere56.setRadius(1.10000002384186)

Shape51.setGeometry(Sphere56)

Transform50.addChildren(Shape51)
IS57 = x3d.IS()
connect58 = x3d.connect()
connect58.setNodeField("translation")
connect58.setProtoField("posi")

IS57.addConnect(connect58)

Transform50.setIS(IS57)

ProtoBody49.addChildren(Transform50)

ProtoDeclare45.setProtoBody(ProtoBody49)

Scene5.addChildren(ProtoDeclare45)
ProtoDeclare59 = x3d.ProtoDeclare()
ProtoDeclare59.setName("l")
ProtoInterface60 = x3d.ProtoInterface()
field61 = x3d.field()
field61.setName("pos")
field61.setAccessType("initializeOnly")
field61.setType("SFVec3f")
field61.setValue("0 0 0")

ProtoInterface60.addField(field61)

ProtoDeclare59.setProtoInterface(ProtoInterface60)
ProtoBody62 = x3d.ProtoBody()
ProtoInstance63 = x3d.ProtoInstance()
ProtoInstance63.setName("org")
fieldValue64 = x3d.fieldValue()
fieldValue64.setName("col")
fieldValue64.setValue("0 0.600000023841858 0")

ProtoInstance63.addFieldValue(fieldValue64)
IS65 = x3d.IS()
connect66 = x3d.connect()
connect66.setNodeField("posi")
connect66.setProtoField("pos")

IS65.addConnect(connect66)

ProtoInstance63.setIS(IS65)

ProtoBody62.addChildren(ProtoInstance63)

ProtoDeclare59.setProtoBody(ProtoBody62)

Scene5.addChildren(ProtoDeclare59)
ProtoDeclare67 = x3d.ProtoDeclare()
ProtoDeclare67.setName("r")
ProtoInterface68 = x3d.ProtoInterface()
field69 = x3d.field()
field69.setName("pos")
field69.setAccessType("initializeOnly")
field69.setType("SFVec3f")
field69.setValue("0 0 0")

ProtoInterface68.addField(field69)

ProtoDeclare67.setProtoInterface(ProtoInterface68)
ProtoBody70 = x3d.ProtoBody()
ProtoInstance71 = x3d.ProtoInstance()
ProtoInstance71.setName("org")
fieldValue72 = x3d.fieldValue()
fieldValue72.setName("col")
fieldValue72.setValue("0 0.300000011920929 1")

ProtoInstance71.addFieldValue(fieldValue72)
IS73 = x3d.IS()
connect74 = x3d.connect()
connect74.setNodeField("posi")
connect74.setProtoField("pos")

IS73.addConnect(connect74)

ProtoInstance71.setIS(IS73)

ProtoBody70.addChildren(ProtoInstance71)

ProtoDeclare67.setProtoBody(ProtoBody70)

Scene5.addChildren(ProtoDeclare67)
ProtoDeclare75 = x3d.ProtoDeclare()
ProtoDeclare75.setName("n")
ProtoInterface76 = x3d.ProtoInterface()
field77 = x3d.field()
field77.setName("pos")
field77.setAccessType("initializeOnly")
field77.setType("SFVec3f")
field77.setValue("0 0 0")

ProtoInterface76.addField(field77)

ProtoDeclare75.setProtoInterface(ProtoInterface76)
ProtoBody78 = x3d.ProtoBody()
ProtoInstance79 = x3d.ProtoInstance()
ProtoInstance79.setName("org")
fieldValue80 = x3d.fieldValue()
fieldValue80.setName("col")
fieldValue80.setValue("1 0 0.200000002980232")

ProtoInstance79.addFieldValue(fieldValue80)
IS81 = x3d.IS()
connect82 = x3d.connect()
connect82.setNodeField("posi")
connect82.setProtoField("pos")

IS81.addConnect(connect82)

ProtoInstance79.setIS(IS81)

ProtoBody78.addChildren(ProtoInstance79)

ProtoDeclare75.setProtoBody(ProtoBody78)

Scene5.addChildren(ProtoDeclare75)
ProtoDeclare83 = x3d.ProtoDeclare()
ProtoDeclare83.setName("i")
ProtoInterface84 = x3d.ProtoInterface()
field85 = x3d.field()
field85.setName("pos")
field85.setAccessType("initializeOnly")
field85.setType("SFVec3f")
field85.setValue("0 0 0")

ProtoInterface84.addField(field85)

ProtoDeclare83.setProtoInterface(ProtoInterface84)
ProtoBody86 = x3d.ProtoBody()
ProtoInstance87 = x3d.ProtoInstance()
ProtoInstance87.setName("org")
fieldValue88 = x3d.fieldValue()
fieldValue88.setName("col")
fieldValue88.setValue("0.600000023841858 0 0.600000023841858")

ProtoInstance87.addFieldValue(fieldValue88)
IS89 = x3d.IS()
connect90 = x3d.connect()
connect90.setNodeField("posi")
connect90.setProtoField("pos")

IS89.addConnect(connect90)

ProtoInstance87.setIS(IS89)

ProtoBody86.addChildren(ProtoInstance87)

ProtoDeclare83.setProtoBody(ProtoBody86)

Scene5.addChildren(ProtoDeclare83)
Transform91 = x3d.Transform()
Transform91.setTranslation([-468,0,315])
Inline92 = x3d.Inline()
Inline92.setUrl(["t.wrl"])

Transform91.addChildren(Inline92)
Anchor93 = x3d.Anchor()
Anchor93.setUrl(["javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor93.setDescription("Derby Women's Centre")
ProtoInstance94 = x3d.ProtoInstance()
ProtoInstance94.setName("institute")
fieldValue95 = x3d.fieldValue()
fieldValue95.setName("pos")
fieldValue95.setValue("435.299987792969 0.100000001490116 -335.600006103516")

ProtoInstance94.addFieldValue(fieldValue95)

Anchor93.addChildren(ProtoInstance94)

Transform91.addChildren(Anchor93)
Anchor96 = x3d.Anchor()
Anchor96.setUrl(["javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor96.setDescription("High Peak Community Arts")
ProtoInstance97 = x3d.ProtoInstance()
ProtoInstance97.setName("r")
fieldValue98 = x3d.fieldValue()
fieldValue98.setName("pos")
fieldValue98.setValue("400 0.100000001490116 -385")

ProtoInstance97.addFieldValue(fieldValue98)

Anchor96.addChildren(ProtoInstance97)

Transform91.addChildren(Anchor96)
Anchor99 = x3d.Anchor()
Anchor99.setUrl(["javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor99.setDescription("Charlesworth Primary School")
ProtoInstance100 = x3d.ProtoInstance()
ProtoInstance100.setName("school")
fieldValue101 = x3d.fieldValue()
fieldValue101.setName("pos")
fieldValue101.setValue("400.600006103516 0.100000001490116 -392.899993896484")

ProtoInstance100.addFieldValue(fieldValue101)

Anchor99.addChildren(ProtoInstance100)

Transform91.addChildren(Anchor99)
Anchor102 = x3d.Anchor()
Anchor102.setUrl(["javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor102.setDescription("Hope Valley College")
ProtoInstance103 = x3d.ProtoInstance()
ProtoInstance103.setName("school")
fieldValue104 = x3d.fieldValue()
fieldValue104.setName("pos")
fieldValue104.setValue("416.700012207031 0.100000001490116 -383.399993896484")

ProtoInstance103.addFieldValue(fieldValue104)

Anchor102.addChildren(ProtoInstance103)

Transform91.addChildren(Anchor102)
Anchor105 = x3d.Anchor()
Anchor105.setUrl(["javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor105.setDescription("People Express")
ProtoInstance106 = x3d.ProtoInstance()
ProtoInstance106.setName("i")
fieldValue107 = x3d.fieldValue()
fieldValue107.setName("pos")
fieldValue107.setValue("429.899993896484 0.100000001490116 -319.600006103516")

ProtoInstance106.addFieldValue(fieldValue107)

Anchor105.addChildren(ProtoInstance106)

Transform91.addChildren(Anchor105)
Anchor108 = x3d.Anchor()
Anchor108.setUrl(["javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor108.setDescription("QArts/Studios")
ProtoInstance109 = x3d.ProtoInstance()
ProtoInstance109.setName("i")
fieldValue110 = x3d.fieldValue()
fieldValue110.setName("pos")
fieldValue110.setValue("430 0.100000001490116 -335")

ProtoInstance109.addFieldValue(fieldValue110)

Anchor108.addChildren(ProtoInstance109)

Transform91.addChildren(Anchor108)
Anchor111 = x3d.Anchor()
Anchor111.setUrl(["javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor111.setDescription("Stroke Unit, Derbyshire Royal Infirmary")
ProtoInstance112 = x3d.ProtoInstance()
ProtoInstance112.setName("institute")
fieldValue113 = x3d.fieldValue()
fieldValue113.setName("pos")
fieldValue113.setValue("435.799987792969 0.100000001490116 -335.299987792969")

ProtoInstance112.addFieldValue(fieldValue113)

Anchor111.addChildren(ProtoInstance112)

Transform91.addChildren(Anchor111)
Anchor114 = x3d.Anchor()
Anchor114.setUrl(["javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor114.setDescription("Park View Primary, Derby")
ProtoInstance115 = x3d.ProtoInstance()
ProtoInstance115.setName("school")
fieldValue116 = x3d.fieldValue()
fieldValue116.setName("pos")
fieldValue116.setValue("438.299987792969 0.100000001490116 -338.600006103516")

ProtoInstance115.addFieldValue(fieldValue116)

Anchor114.addChildren(ProtoInstance115)

Transform91.addChildren(Anchor114)
Anchor117 = x3d.Anchor()
Anchor117.setUrl(["javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor117.setDescription("First Movement")
ProtoInstance118 = x3d.ProtoInstance()
ProtoInstance118.setName("n")
fieldValue119 = x3d.fieldValue()
fieldValue119.setName("pos")
fieldValue119.setValue("429.899993896484 0.100000001490116 -360.299987792969")

ProtoInstance118.addFieldValue(fieldValue119)

Anchor117.addChildren(ProtoInstance118)

Transform91.addChildren(Anchor117)
Anchor120 = x3d.Anchor()
Anchor120.setUrl(["javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor120.setDescription("St. Benedict R.C. School, Visual Impairment Unit")
ProtoInstance121 = x3d.ProtoInstance()
ProtoInstance121.setName("institute")
fieldValue122 = x3d.fieldValue()
fieldValue122.setName("pos")
fieldValue122.setValue("434.600006103516 0.100000001490116 -338.600006103516")

ProtoInstance121.addFieldValue(fieldValue122)

Anchor120.addChildren(ProtoInstance121)

Transform91.addChildren(Anchor120)
Anchor123 = x3d.Anchor()
Anchor123.setUrl(["javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor123.setDescription("Beckett Primary, Derby")
ProtoInstance124 = x3d.ProtoInstance()
ProtoInstance124.setName("school")
fieldValue125 = x3d.fieldValue()
fieldValue125.setName("pos")
fieldValue125.setValue("434.799987792969 0.100000001490116 -336")

ProtoInstance124.addFieldValue(fieldValue125)

Anchor123.addChildren(ProtoInstance124)

Transform91.addChildren(Anchor123)
Anchor126 = x3d.Anchor()
Anchor126.setUrl(["javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor126.setDescription("Brackensdale Junior School, Communty Unit")
ProtoInstance127 = x3d.ProtoInstance()
ProtoInstance127.setName("institute")
fieldValue128 = x3d.fieldValue()
fieldValue128.setName("pos")
fieldValue128.setValue("432.700012207031 0.100000001490116 -336.600006103516")

ProtoInstance127.addFieldValue(fieldValue128)

Anchor126.addChildren(ProtoInstance127)

Transform91.addChildren(Anchor126)
Anchor129 = x3d.Anchor()
Anchor129.setUrl(["javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor129.setDescription("Moorhead Primary, Derby")
ProtoInstance130 = x3d.ProtoInstance()
ProtoInstance130.setName("school")
fieldValue131 = x3d.fieldValue()
fieldValue131.setName("pos")
fieldValue131.setValue("437.600006103516 0.100000001490116 -332.600006103516")

ProtoInstance130.addFieldValue(fieldValue131)

Anchor129.addChildren(ProtoInstance130)

Transform91.addChildren(Anchor129)
Anchor132 = x3d.Anchor()
Anchor132.setUrl(["javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor132.setDescription("Derby Deaf Club")
ProtoInstance133 = x3d.ProtoInstance()
ProtoInstance133.setName("institute")
fieldValue134 = x3d.fieldValue()
fieldValue134.setName("pos")
fieldValue134.setValue("434.700012207031 0.100000001490116 -336.899993896484")

ProtoInstance133.addFieldValue(fieldValue134)

Anchor132.addChildren(ProtoInstance133)

Transform91.addChildren(Anchor132)
Anchor135 = x3d.Anchor()
Anchor135.setUrl(["javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor135.setDescription("Nightingale Junior, Derby")
ProtoInstance136 = x3d.ProtoInstance()
ProtoInstance136.setName("school")
fieldValue137 = x3d.fieldValue()
fieldValue137.setName("pos")
fieldValue137.setValue("436.299987792969 0.100000001490116 -333.399993896484")

ProtoInstance136.addFieldValue(fieldValue137)

Anchor135.addChildren(ProtoInstance136)

Transform91.addChildren(Anchor135)
Anchor138 = x3d.Anchor()
Anchor138.setUrl(["javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor138.setDescription("St Mary's Primary, Derby")
ProtoInstance139 = x3d.ProtoInstance()
ProtoInstance139.setName("school")
fieldValue140 = x3d.fieldValue()
fieldValue140.setName("pos")
fieldValue140.setValue("435.200012207031 0.100000001490116 -336.799987792969")

ProtoInstance139.addFieldValue(fieldValue140)

Anchor138.addChildren(ProtoInstance139)

Transform91.addChildren(Anchor138)
Anchor141 = x3d.Anchor()
Anchor141.setUrl(["javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor141.setDescription("Griffe Field Primary, Derby")
ProtoInstance142 = x3d.ProtoInstance()
ProtoInstance142.setName("school")
fieldValue143 = x3d.fieldValue()
fieldValue143.setName("pos")
fieldValue143.setValue("432.5 0.100000001490116 -332.5")

ProtoInstance142.addFieldValue(fieldValue143)

Anchor141.addChildren(ProtoInstance142)

Transform91.addChildren(Anchor141)
Anchor144 = x3d.Anchor()
Anchor144.setUrl(["javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor144.setDescription("Leicester Road Day Centre, Melton Mowbray")
ProtoInstance145 = x3d.ProtoInstance()
ProtoInstance145.setName("institute")
fieldValue146 = x3d.fieldValue()
fieldValue146.setName("pos")
fieldValue146.setValue("474.700012207031 0.100000001490116 -318.799987792969")

ProtoInstance145.addFieldValue(fieldValue146)

Anchor144.addChildren(ProtoInstance145)

Transform91.addChildren(Anchor144)
Anchor147 = x3d.Anchor()
Anchor147.setUrl(["javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor147.setDescription("Ivy House Special School, Derby")
ProtoInstance148 = x3d.ProtoInstance()
ProtoInstance148.setName("school")
fieldValue149 = x3d.fieldValue()
fieldValue149.setName("pos")
fieldValue149.setValue("436.100006103516 0.100000001490116 -334.899993896484")

ProtoInstance148.addFieldValue(fieldValue149)

Anchor147.addChildren(ProtoInstance148)

Transform91.addChildren(Anchor147)
Anchor150 = x3d.Anchor()
Anchor150.setUrl(["javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor150.setDescription("Oakham Day Centre, Rutland")
ProtoInstance151 = x3d.ProtoInstance()
ProtoInstance151.setName("institute")
fieldValue152 = x3d.fieldValue()
fieldValue152.setName("pos")
fieldValue152.setValue("485.600006103516 0.100000001490116 -309")

ProtoInstance151.addFieldValue(fieldValue152)

Anchor150.addChildren(ProtoInstance151)

Transform91.addChildren(Anchor150)
Anchor153 = x3d.Anchor()
Anchor153.setUrl(["javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor153.setDescription("Parkwood School, Alfreton")
ProtoInstance154 = x3d.ProtoInstance()
ProtoInstance154.setName("school")
fieldValue155 = x3d.fieldValue()
fieldValue155.setName("pos")
fieldValue155.setValue("440.5 0.100000001490116 -355.5")

ProtoInstance154.addFieldValue(fieldValue155)

Anchor153.addChildren(ProtoInstance154)

Transform91.addChildren(Anchor153)
Anchor156 = x3d.Anchor()
Anchor156.setUrl(["javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor156.setDescription("Ash Green, Specialist Learning Disability Resource")
ProtoInstance157 = x3d.ProtoInstance()
ProtoInstance157.setName("institute")
fieldValue158 = x3d.fieldValue()
fieldValue158.setName("pos")
fieldValue158.setValue("434.799987792969 0.100000001490116 -371.5")

ProtoInstance157.addFieldValue(fieldValue158)

Anchor156.addChildren(ProtoInstance157)

Transform91.addChildren(Anchor156)
Anchor159 = x3d.Anchor()
Anchor159.setUrl(["javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor159.setDescription("Ashgate Croft School, Chesterfield")
ProtoInstance160 = x3d.ProtoInstance()
ProtoInstance160.setName("school")
fieldValue161 = x3d.fieldValue()
fieldValue161.setName("pos")
fieldValue161.setValue("436.299987792969 0.100000001490116 -371.700012207031")

ProtoInstance160.addFieldValue(fieldValue161)

Anchor159.addChildren(ProtoInstance160)

Transform91.addChildren(Anchor159)
Anchor162 = x3d.Anchor()
Anchor162.setUrl(["javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor162.setDescription("Highfields School, Matlock")
ProtoInstance163 = x3d.ProtoInstance()
ProtoInstance163.setName("school")
fieldValue164 = x3d.fieldValue()
fieldValue164.setName("pos")
fieldValue164.setValue("431.200012207031 0.100000001490116 -361.200012207031")

ProtoInstance163.addFieldValue(fieldValue164)

Anchor162.addChildren(ProtoInstance163)

Transform91.addChildren(Anchor162)
Anchor165 = x3d.Anchor()
Anchor165.setUrl(["javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor165.setDescription("City Arts")
ProtoInstance166 = x3d.ProtoInstance()
ProtoInstance166.setName("i")
fieldValue167 = x3d.fieldValue()
fieldValue167.setName("pos")
fieldValue167.setValue("455.899993896484 0.100000001490116 -341.299987792969")

ProtoInstance166.addFieldValue(fieldValue167)

Anchor165.addChildren(ProtoInstance166)

Transform91.addChildren(Anchor165)
Anchor168 = x3d.Anchor()
Anchor168.setUrl(["javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor168.setDescription("Indigo Dance Group (Salamanda Tandem)")
ProtoInstance169 = x3d.ProtoInstance()
ProtoInstance169.setName("r")
fieldValue170 = x3d.fieldValue()
fieldValue170.setName("pos")
fieldValue170.setValue("456.100006103516 0.100000001490116 -341.5")

ProtoInstance169.addFieldValue(fieldValue170)

Anchor168.addChildren(ProtoInstance169)

Transform91.addChildren(Anchor168)
Anchor171 = x3d.Anchor()
Anchor171.setUrl(["javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor171.setDescription("Watering Seeds")
ProtoInstance172 = x3d.ProtoInstance()
ProtoInstance172.setName("r")
fieldValue173 = x3d.fieldValue()
fieldValue173.setName("pos")
fieldValue173.setValue("454 0.100000001490116 -361.299987792969")

ProtoInstance172.addFieldValue(fieldValue173)

Anchor171.addChildren(ProtoInstance172)

Transform91.addChildren(Anchor171)
Anchor174 = x3d.Anchor()
Anchor174.setUrl(["javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor174.setDescription("Red oaks")
ProtoInstance175 = x3d.ProtoInstance()
ProtoInstance175.setName("institute")
fieldValue176 = x3d.fieldValue()
fieldValue176.setName("pos")
fieldValue176.setValue("457.399993896484 0.100000001490116 -359.600006103516")

ProtoInstance175.addFieldValue(fieldValue176)

Anchor174.addChildren(ProtoInstance175)

Transform91.addChildren(Anchor174)
Anchor177 = x3d.Anchor()
Anchor177.setUrl(["javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor177.setDescription("West Notts College")
ProtoInstance178 = x3d.ProtoInstance()
ProtoInstance178.setName("school")
fieldValue179 = x3d.fieldValue()
fieldValue179.setName("pos")
fieldValue179.setValue("454.200012207031 0.100000001490116 -358.600006103516")

ProtoInstance178.addFieldValue(fieldValue179)

Anchor177.addChildren(ProtoInstance178)

Transform91.addChildren(Anchor177)
Anchor180 = x3d.Anchor()
Anchor180.setUrl(["javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor180.setDescription("Willow Wood Day Centre")
ProtoInstance181 = x3d.ProtoInstance()
ProtoInstance181.setName("institute")
fieldValue182 = x3d.fieldValue()
fieldValue182.setName("pos")
fieldValue182.setValue("450.600006103516 0.100000001490116 -358.600006103516")

ProtoInstance181.addFieldValue(fieldValue182)

Anchor180.addChildren(ProtoInstance181)

Transform91.addChildren(Anchor180)
Anchor183 = x3d.Anchor()
Anchor183.setUrl(["javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor183.setDescription("Fased In The Arts")
ProtoInstance184 = x3d.ProtoInstance()
ProtoInstance184.setName("r")
fieldValue185 = x3d.fieldValue()
fieldValue185.setName("pos")
fieldValue185.setValue("440 0.100000001490116 -350")

ProtoInstance184.addFieldValue(fieldValue185)

Anchor183.addChildren(ProtoInstance184)

Transform91.addChildren(Anchor183)
Anchor186 = x3d.Anchor()
Anchor186.setUrl(["javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor186.setDescription("27a Access Artspace")
ProtoInstance187 = x3d.ProtoInstance()
ProtoInstance187.setName("n")
fieldValue188 = x3d.fieldValue()
fieldValue188.setName("pos")
fieldValue188.setValue("458.899993896484 0.100000001490116 -304.299987792969")

ProtoInstance187.addFieldValue(fieldValue188)

Anchor186.addChildren(ProtoInstance187)

Transform91.addChildren(Anchor186)
Anchor189 = x3d.Anchor()
Anchor189.setUrl(["javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor189.setDescription("Roman Way Day Centre, Market Harborough")
ProtoInstance190 = x3d.ProtoInstance()
ProtoInstance190.setName("institute")
fieldValue191 = x3d.fieldValue()
fieldValue191.setName("pos")
fieldValue191.setValue("473.5 0.100000001490116 -287.5")

ProtoInstance190.addFieldValue(fieldValue191)

Anchor189.addChildren(ProtoInstance190)

Transform91.addChildren(Anchor189)
Anchor192 = x3d.Anchor()
Anchor192.setUrl(["javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor192.setDescription("Mosaic, Leicester Disability Services")
ProtoInstance193 = x3d.ProtoInstance()
ProtoInstance193.setName("institute")
fieldValue194 = x3d.fieldValue()
fieldValue194.setName("pos")
fieldValue194.setValue("458 0.100000001490116 -304.5")

ProtoInstance193.addFieldValue(fieldValue194)

Anchor192.addChildren(ProtoInstance193)

Transform91.addChildren(Anchor192)
Anchor195 = x3d.Anchor()
Anchor195.setUrl(["javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor195.setDescription("Bamboozle Theatre Company")
ProtoInstance196 = x3d.ProtoInstance()
ProtoInstance196.setName("r")
fieldValue197 = x3d.fieldValue()
fieldValue197.setName("pos")
fieldValue197.setValue("457.100006103516 0.100000001490116 -300.799987792969")

ProtoInstance196.addFieldValue(fieldValue197)

Anchor195.addChildren(ProtoInstance196)

Transform91.addChildren(Anchor195)
Anchor198 = x3d.Anchor()
Anchor198.setUrl(["javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor198.setDescription("Ellesmere College, Leicester")
ProtoInstance199 = x3d.ProtoInstance()
ProtoInstance199.setName("school")
fieldValue200 = x3d.fieldValue()
fieldValue200.setName("pos")
fieldValue200.setValue("456.799987792969 0.100000001490116 -302.600006103516")

ProtoInstance199.addFieldValue(fieldValue200)

Anchor198.addChildren(ProtoInstance199)

Transform91.addChildren(Anchor198)
Anchor201 = x3d.Anchor()
Anchor201.setUrl(["javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor201.setDescription("Ashmount School, Loughborough")
ProtoInstance202 = x3d.ProtoInstance()
ProtoInstance202.setName("school")
fieldValue203 = x3d.fieldValue()
fieldValue203.setName("pos")
fieldValue203.setValue("453.299987792969 0.100000001490116 -318.600006103516")

ProtoInstance202.addFieldValue(fieldValue203)

Anchor201.addChildren(ProtoInstance202)

Transform91.addChildren(Anchor201)
Anchor204 = x3d.Anchor()
Anchor204.setUrl(["javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor204.setDescription("Mantle Community Arts")
ProtoInstance205 = x3d.ProtoInstance()
ProtoInstance205.setName("r")
fieldValue206 = x3d.fieldValue()
fieldValue206.setName("pos")
fieldValue206.setValue("442.399993896484 0.100000001490116 -314.5")

ProtoInstance205.addFieldValue(fieldValue206)

Anchor204.addChildren(ProtoInstance205)

Transform91.addChildren(Anchor204)
Anchor207 = x3d.Anchor()
Anchor207.setUrl(["javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor207.setDescription("Forrest Way School")
ProtoInstance208 = x3d.ProtoInstance()
ProtoInstance208.setName("school")
fieldValue209 = x3d.fieldValue()
fieldValue209.setName("pos")
fieldValue209.setValue("444.600006103516 0.100000001490116 -313.700012207031")

ProtoInstance208.addFieldValue(fieldValue209)

Anchor207.addChildren(ProtoInstance208)

Transform91.addChildren(Anchor207)
Anchor210 = x3d.Anchor()
Anchor210.setUrl(["javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor210.setDescription("Ibstock Community College")
ProtoInstance211 = x3d.ProtoInstance()
ProtoInstance211.setName("school")
fieldValue212 = x3d.fieldValue()
fieldValue212.setName("pos")
fieldValue212.setValue("440.600006103516 0.100000001490116 -310.399993896484")

ProtoInstance211.addFieldValue(fieldValue212)

Anchor210.addChildren(ProtoInstance211)

Transform91.addChildren(Anchor210)
Anchor213 = x3d.Anchor()
Anchor213.setUrl(["javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor213.setDescription("Artlink East")
ProtoInstance214 = x3d.ProtoInstance()
ProtoInstance214.setName("r")
fieldValue215 = x3d.fieldValue()
fieldValue215.setName("pos")
fieldValue215.setValue("491.600006103516 0.100000001490116 -335.700012207031")

ProtoInstance214.addFieldValue(fieldValue215)

Anchor213.addChildren(ProtoInstance214)

Transform91.addChildren(Anchor213)
Anchor216 = x3d.Anchor()
Anchor216.setUrl(["javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor216.setDescription("United Hospitals and NHS Trust Lincolnshire")
ProtoInstance217 = x3d.ProtoInstance()
ProtoInstance217.setName("institute")
fieldValue218 = x3d.fieldValue()
fieldValue218.setName("pos")
fieldValue218.setValue("491.399993896484 0.100000001490116 -336.799987792969")

ProtoInstance217.addFieldValue(fieldValue218)

Anchor216.addChildren(ProtoInstance217)

Transform91.addChildren(Anchor216)
Anchor219 = x3d.Anchor()
Anchor219.setUrl(["javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor219.setDescription("Ancaster Day Centre")
ProtoInstance220 = x3d.ProtoInstance()
ProtoInstance220.setName("institute")
fieldValue221 = x3d.fieldValue()
fieldValue221.setName("pos")
fieldValue221.setValue("496.899993896484 0.100000001490116 -368.899993896484")

ProtoInstance220.addFieldValue(fieldValue221)

Anchor219.addChildren(ProtoInstance220)

Transform91.addChildren(Anchor219)
Anchor222 = x3d.Anchor()
Anchor222.setUrl(["javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor222.setDescription("Creations")
ProtoInstance223 = x3d.ProtoInstance()
ProtoInstance223.setName("r")
fieldValue224 = x3d.fieldValue()
fieldValue224.setName("pos")
fieldValue224.setValue("467 0.100000001490116 -243.899993896484")

ProtoInstance223.addFieldValue(fieldValue224)

Anchor222.addChildren(ProtoInstance223)

Transform91.addChildren(Anchor222)
Anchor225 = x3d.Anchor()
Anchor225.setUrl(["javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor225.setDescription("Nene Day Centre, Northamtpon")
ProtoInstance226 = x3d.ProtoInstance()
ProtoInstance226.setName("institute")
fieldValue227 = x3d.fieldValue()
fieldValue227.setName("pos")
fieldValue227.setValue("477.100006103516 0.100000001490116 -260")

ProtoInstance226.addFieldValue(fieldValue227)

Anchor225.addChildren(ProtoInstance226)

Transform91.addChildren(Anchor225)
Anchor228 = x3d.Anchor()
Anchor228.setUrl(["javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor228.setDescription("Delapre Middle School, Northampton")
ProtoInstance229 = x3d.ProtoInstance()
ProtoInstance229.setName("school")
fieldValue230 = x3d.fieldValue()
fieldValue230.setName("pos")
fieldValue230.setValue("474.700012207031 0.100000001490116 -259.100006103516")

ProtoInstance229.addFieldValue(fieldValue230)

Anchor228.addChildren(ProtoInstance229)

Transform91.addChildren(Anchor228)
Anchor231 = x3d.Anchor()
Anchor231.setUrl(["javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor231.setDescription("The Links, Brackley")
ProtoInstance232 = x3d.ProtoInstance()
ProtoInstance232.setName("institute")
fieldValue233 = x3d.fieldValue()
fieldValue233.setName("pos")
fieldValue233.setValue("459 0.100000001490116 -236.399993896484")

ProtoInstance232.addFieldValue(fieldValue233)

Anchor231.addChildren(ProtoInstance232)

Transform91.addChildren(Anchor231)
Anchor234 = x3d.Anchor()
Anchor234.setUrl(["javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor234.setDescription("New Perspectives")
ProtoInstance235 = x3d.ProtoInstance()
ProtoInstance235.setName("n")
fieldValue236 = x3d.fieldValue()
fieldValue236.setName("pos")
fieldValue236.setValue("457.399993896484 0.100000001490116 -262.700012207031")

ProtoInstance235.addFieldValue(fieldValue236)

Anchor234.addChildren(ProtoInstance235)

Transform91.addChildren(Anchor234)
Anchor237 = x3d.Anchor()
Anchor237.setUrl(["javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor237.setDescription("UKan2")
ProtoInstance238 = x3d.ProtoInstance()
ProtoInstance238.setName("r")
fieldValue239 = x3d.fieldValue()
fieldValue239.setName("pos")
fieldValue239.setValue("458.700012207031 0.100000001490116 -262.700012207031")

ProtoInstance238.addFieldValue(fieldValue239)

Anchor237.addChildren(ProtoInstance238)

Transform91.addChildren(Anchor237)
Anchor240 = x3d.Anchor()
Anchor240.setUrl(["javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor240.setDescription("Silverstone County Infants School")
ProtoInstance241 = x3d.ProtoInstance()
ProtoInstance241.setName("school")
fieldValue242 = x3d.fieldValue()
fieldValue242.setName("pos")
fieldValue242.setValue("466.899993896484 0.100000001490116 -243.800003051758")

ProtoInstance241.addFieldValue(fieldValue242)

Anchor240.addChildren(ProtoInstance241)

Transform91.addChildren(Anchor240)
Anchor243 = x3d.Anchor()
Anchor243.setUrl(["javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor243.setDescription("Riverside Resource Centre, Towcester")
ProtoInstance244 = x3d.ProtoInstance()
ProtoInstance244.setName("institute")
fieldValue245 = x3d.fieldValue()
fieldValue245.setName("pos")
fieldValue245.setValue("469.5 0.100000001490116 -249.800003051758")

ProtoInstance244.addFieldValue(fieldValue245)

Anchor243.addChildren(ProtoInstance244)

Transform91.addChildren(Anchor243)
Anchor246 = x3d.Anchor()
Anchor246.setUrl(["javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor246.setDescription("Daventry Tertiary College")
ProtoInstance247 = x3d.ProtoInstance()
ProtoInstance247.setName("school")
fieldValue248 = x3d.fieldValue()
fieldValue248.setName("pos")
fieldValue248.setValue("456.700012207031 0.100000001490116 -261.799987792969")

ProtoInstance247.addFieldValue(fieldValue248)

Anchor246.addChildren(ProtoInstance247)

Transform91.addChildren(Anchor246)
Shape249 = x3d.Shape()
Appearance250 = x3d.Appearance()
Material251 = x3d.Material()
Material251.setTransparency(0.200000002980232)
Material251.setEmissiveColor([1,0,0])

Appearance250.setMaterial(Material251)

Shape249.setAppearance(Appearance250)
IndexedLineSet252 = x3d.IndexedLineSet()
IndexedLineSet252.setCoordIndex([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1])
Coordinate253 = x3d.Coordinate()
Coordinate253.setPoint([430,0.0199999995529652,-335,435.799987792969,0.100000001490116,-335.299987792969,430,0.0199999995529652,-335,434.600006103516,0.100000001490116,-338.600006103516,430,0.0199999995529652,-335,432.700012207031,0.100000001490116,-336.600006103516,430,0.0199999995529652,-335,434.700012207031,0.100000001490116,-336.899993896484,429.899993896484,0.0199999995529652,-360.299987792969,474.700012207031,0.100000001490116,-318.799987792969,429.899993896484,0.0199999995529652,-360.299987792969,485.600006103516,0.100000001490116,-309,429.899993896484,0.0199999995529652,-360.299987792969,434.799987792969,0.100000001490116,-371.5,454,0.0199999995529652,-361.299987792969,457.399993896484,0.100000001490116,-359.600006103516,454,0.0199999995529652,-361.299987792969,454.200012207031,0.100000001490116,-358.600006103516,454,0.0199999995529652,-361.299987792969,450.600006103516,0.100000001490116,-358.600006103516,458.899993896484,0.0199999995529652,-304.299987792969,473.5,0.100000001490116,-287.5,458.899993896484,0.0199999995529652,-304.299987792969,458,0.100000001490116,-304.5,491.600006103516,0.0199999995529652,-335.700012207031,491.399993896484,0.100000001490116,-336.799987792969,491.600006103516,0.0199999995529652,-335.700012207031,496.899993896484,0.100000001490116,-368.899993896484,467,0.0199999995529652,-243.899993896484,477.100006103516,0.100000001490116,-260,467,0.0199999995529652,-243.899993896484,459,0.100000001490116,-236.399993896484,458.700012207031,0.0199999995529652,-262.700012207031,469.5,0.100000001490116,-249.800003051758,458.700012207031,0.0199999995529652,-262.700012207031,456.700012207031,0.100000001490116,-261.799987792969])

IndexedLineSet252.setCoord(Coordinate253)

Shape249.setGeometry(IndexedLineSet252)

Transform91.addChildren(Shape249)
Shape254 = x3d.Shape()
Appearance255 = x3d.Appearance()
Material256 = x3d.Material()
Material256.setTransparency(0.200000002980232)
Material256.setEmissiveColor([0,1,0])

Appearance255.setMaterial(Material256)

Shape254.setAppearance(Appearance255)
IndexedLineSet257 = x3d.IndexedLineSet()
IndexedLineSet257.setCoordIndex([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1])
Coordinate258 = x3d.Coordinate()
Coordinate258.setPoint([400,0.0199999995529652,-385,400.600006103516,0.100000001490116,-392.899993896484,400,0.0199999995529652,-385,416.700012207031,0.100000001490116,-383.399993896484,430,0.0199999995529652,-335,438.299987792969,0.100000001490116,-338.600006103516,430,0.0199999995529652,-335,434.799987792969,0.100000001490116,-336,430,0.0199999995529652,-335,437.600006103516,0.100000001490116,-332.600006103516,430,0.0199999995529652,-335,436.299987792969,0.100000001490116,-333.399993896484,430,0.0199999995529652,-335,435.200012207031,0.100000001490116,-336.799987792969,430,0.0199999995529652,-335,432.5,0.100000001490116,-332.5,429.899993896484,0.0199999995529652,-360.299987792969,436.100006103516,0.100000001490116,-334.899993896484,429.899993896484,0.0199999995529652,-360.299987792969,440.5,0.100000001490116,-355.5,429.899993896484,0.0199999995529652,-360.299987792969,436.299987792969,0.100000001490116,-371.700012207031,429.899993896484,0.0199999995529652,-360.299987792969,431.200012207031,0.100000001490116,-361.200012207031,457.100006103516,0.0199999995529652,-300.799987792969,456.799987792969,0.100000001490116,-302.600006103516,457.100006103516,0.0199999995529652,-300.799987792969,453.299987792969,0.100000001490116,-318.600006103516,442.399993896484,0.0199999995529652,-314.5,444.600006103516,0.100000001490116,-313.700012207031,442.399993896484,0.0199999995529652,-314.5,440.600006103516,0.100000001490116,-310.399993896484,467,0.0199999995529652,-243.899993896484,474.700012207031,0.100000001490116,-259.100006103516,457.399993896484,0.0199999995529652,-262.700012207031,466.899993896484,0.100000001490116,-243.800003051758])

IndexedLineSet257.setCoord(Coordinate258)

Shape254.setGeometry(IndexedLineSet257)

Transform91.addChildren(Shape254)
Shape259 = x3d.Shape()
Appearance260 = x3d.Appearance()
Material261 = x3d.Material()
Material261.setTransparency(0.200000002980232)
Material261.setEmissiveColor([1,0,1])

Appearance260.setMaterial(Material261)

Shape259.setAppearance(Appearance260)
IndexedLineSet262 = x3d.IndexedLineSet()
IndexedLineSet262.setCoordIndex([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1])
Coordinate263 = x3d.Coordinate()
Coordinate263.setPoint([430,0.0199999995529652,-335,429.899993896484,0.100000001490116,-360.299987792969,442.399993896484,0.0199999995529652,-314.5,429.899993896484,0.100000001490116,-319.600006103516,457.399993896484,0.0199999995529652,-262.700012207031,467,0.100000001490116,-243.899993896484,458.700012207031,0.0199999995529652,-262.700012207031,457.399993896484,0.100000001490116,-262.700012207031,458.700012207031,0.0199999995529652,-262.700012207031,467,0.100000001490116,-243.899993896484])

IndexedLineSet262.setCoord(Coordinate263)

Shape259.setGeometry(IndexedLineSet262)

Transform91.addChildren(Shape259)

Scene5.addChildren(Transform91)

X3D0.setScene(Scene5)
X3D0.toFileX3D("../data/t1_RoundTrip.x3d")
