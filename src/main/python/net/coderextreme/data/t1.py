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
meta3.setContent("t1.wrl")

head1.addMeta(meta3)

X3D0.setHead(head1)
Scene4 = x3d.Scene()
NavigationInfo5 = x3d.NavigationInfo()
NavigationInfo5.setType(["EXAMINE","FLY","WALK"])
NavigationInfo5.setSpeed(3)
NavigationInfo5.setAvatarSize([200,200,120])

Scene4.addChildren(NavigationInfo5)
WorldInfo6 = x3d.WorldInfo()
WorldInfo6.setTitle("Arts Mapper")

Scene4.addChildren(WorldInfo6)
Viewpoint7 = x3d.Viewpoint()
Viewpoint7.setDescription("looking North")
Viewpoint7.setPosition([0,60,110])
Viewpoint7.setOrientation([1,0,0,-0.699999988079071])
Viewpoint7.setFieldOfView(0.785398125648499)

Scene4.addChildren(Viewpoint7)
Viewpoint8 = x3d.Viewpoint()
Viewpoint8.setDescription("looking East")
Viewpoint8.setPosition([-140,30,0])
Viewpoint8.setOrientation([0,0.400000005960464,0,-1.39999997615814])
Viewpoint8.setFieldOfView(0.785398125648499)

Scene4.addChildren(Viewpoint8)
Viewpoint9 = x3d.Viewpoint()
Viewpoint9.setDescription("Overhead")
Viewpoint9.setPosition([0,150,0])
Viewpoint9.setOrientation([1,0,0,-1.57000005245209])
Viewpoint9.setFieldOfView(0.785398125648499)

Scene4.addChildren(Viewpoint9)
ProtoDeclare10 = x3d.ProtoDeclare()
ProtoDeclare10.setName("school")
ProtoInterface11 = x3d.ProtoInterface()
field12 = x3d.field()
field12.setAccessType("initializeOnly")
field12.setType("SFVec3f")
field12.setName("pos")
field12.setValue("0 0 0")

ProtoInterface11.addField(field12)

ProtoDeclare10.setProtoInterface(ProtoInterface11)
ProtoBody13 = x3d.ProtoBody()
Transform14 = x3d.Transform()
Shape15 = x3d.Shape()
Appearance16 = x3d.Appearance()
Material17 = x3d.Material()
Material17.setTransparency(0.200000002980232)
Material17.setDiffuseColor([0.5,0,1])

Appearance16.setMaterial(Material17)

Shape15.setAppearance(Appearance16)
IndexedFaceSet18 = x3d.IndexedFaceSet()
IndexedFaceSet18.setCoordIndex([0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1])
Coordinate19 = x3d.Coordinate()
Coordinate19.setPoint([-0.349999994039536,-0.349999994039536,0.349999994039536,0.349999994039536,-0.349999994039536,0.349999994039536,0.349999994039536,-0.349999994039536,-0.349999994039536,-0.349999994039536,-0.349999994039536,-0.349999994039536,0,0.349999994039536,0])

IndexedFaceSet18.setCoord(Coordinate19)

Shape15.setGeometry(IndexedFaceSet18)

Transform14.addChildren(Shape15)
IS20 = x3d.IS()
connect21 = x3d.connect()
connect21.setNodeField("translation")
connect21.setProtoField("pos")

IS20.addConnect(connect21)

Transform14.setIS(IS20)

ProtoBody13.addChildren(Transform14)

ProtoDeclare10.setProtoBody(ProtoBody13)

Scene4.addChildren(ProtoDeclare10)
ProtoDeclare22 = x3d.ProtoDeclare()
ProtoDeclare22.setName("institute")
ProtoInterface23 = x3d.ProtoInterface()
field24 = x3d.field()
field24.setAccessType("initializeOnly")
field24.setType("SFVec3f")
field24.setName("pos")
field24.setValue("0 0 0")

ProtoInterface23.addField(field24)

ProtoDeclare22.setProtoInterface(ProtoInterface23)
ProtoBody25 = x3d.ProtoBody()
Transform26 = x3d.Transform()
Shape27 = x3d.Shape()
Appearance28 = x3d.Appearance()
Material29 = x3d.Material()
Material29.setTransparency(0.200000002980232)
Material29.setDiffuseColor([1,1,0])

Appearance28.setMaterial(Material29)

Shape27.setAppearance(Appearance28)
Box30 = x3d.Box()
Box30.setSize([0.699999988079071,0.699999988079071,0.699999988079071])

Shape27.setGeometry(Box30)

Transform26.addChildren(Shape27)
IS31 = x3d.IS()
connect32 = x3d.connect()
connect32.setNodeField("translation")
connect32.setProtoField("pos")

IS31.addConnect(connect32)

Transform26.setIS(IS31)

ProtoBody25.addChildren(Transform26)

ProtoDeclare22.setProtoBody(ProtoBody25)

Scene4.addChildren(ProtoDeclare22)
ProtoDeclare33 = x3d.ProtoDeclare()
ProtoDeclare33.setName("disart_org")
ProtoInterface34 = x3d.ProtoInterface()
field35 = x3d.field()
field35.setAccessType("initializeOnly")
field35.setType("SFVec3f")
field35.setName("pos")
field35.setValue("0 0 0")

ProtoInterface34.addField(field35)

ProtoDeclare33.setProtoInterface(ProtoInterface34)
ProtoBody36 = x3d.ProtoBody()
Transform37 = x3d.Transform()
Shape38 = x3d.Shape()
Appearance39 = x3d.Appearance()
Material40 = x3d.Material()
Material40.setDiffuseColor([1,1,0])

Appearance39.setMaterial(Material40)

Shape38.setAppearance(Appearance39)
Sphere41 = x3d.Sphere()
Sphere41.setRadius(0.699999988079071)

Shape38.setGeometry(Sphere41)

Transform37.addChildren(Shape38)
IS42 = x3d.IS()
connect43 = x3d.connect()
connect43.setNodeField("translation")
connect43.setProtoField("pos")

IS42.addConnect(connect43)

Transform37.setIS(IS42)

ProtoBody36.addChildren(Transform37)

ProtoDeclare33.setProtoBody(ProtoBody36)

Scene4.addChildren(ProtoDeclare33)
ProtoDeclare44 = x3d.ProtoDeclare()
ProtoDeclare44.setName("org")
ProtoInterface45 = x3d.ProtoInterface()
field46 = x3d.field()
field46.setAccessType("initializeOnly")
field46.setType("SFVec3f")
field46.setName("posi")
field46.setValue("0 0 0")

ProtoInterface45.addField(field46)
field47 = x3d.field()
field47.setAccessType("initializeOnly")
field47.setType("SFColor")
field47.setName("col")
field47.setValue("0 0 0")

ProtoInterface45.addField(field47)

ProtoDeclare44.setProtoInterface(ProtoInterface45)
ProtoBody48 = x3d.ProtoBody()
Transform49 = x3d.Transform()
Shape50 = x3d.Shape()
Appearance51 = x3d.Appearance()
Material52 = x3d.Material()
Material52.setTransparency(0.400000005960464)
IS53 = x3d.IS()
connect54 = x3d.connect()
connect54.setNodeField("emissiveColor")
connect54.setProtoField("col")

IS53.addConnect(connect54)

Material52.setIS(IS53)

Appearance51.setMaterial(Material52)

Shape50.setAppearance(Appearance51)
Sphere55 = x3d.Sphere()
Sphere55.setRadius(1.10000002384186)

Shape50.setGeometry(Sphere55)

Transform49.addChildren(Shape50)
IS56 = x3d.IS()
connect57 = x3d.connect()
connect57.setNodeField("translation")
connect57.setProtoField("posi")

IS56.addConnect(connect57)

Transform49.setIS(IS56)

ProtoBody48.addChildren(Transform49)

ProtoDeclare44.setProtoBody(ProtoBody48)

Scene4.addChildren(ProtoDeclare44)
ProtoDeclare58 = x3d.ProtoDeclare()
ProtoDeclare58.setName("l")
ProtoInterface59 = x3d.ProtoInterface()
field60 = x3d.field()
field60.setAccessType("initializeOnly")
field60.setType("SFVec3f")
field60.setName("pos")
field60.setValue("0 0 0")

ProtoInterface59.addField(field60)

ProtoDeclare58.setProtoInterface(ProtoInterface59)
ProtoBody61 = x3d.ProtoBody()
ProtoInstance62 = x3d.ProtoInstance()
ProtoInstance62.setName("org")
fieldValue63 = x3d.fieldValue()
fieldValue63.setName("col")
fieldValue63.setValue("0 0.600000023841858 0")

ProtoInstance62.addFieldValue(fieldValue63)
IS64 = x3d.IS()
connect65 = x3d.connect()
connect65.setNodeField("posi")
connect65.setProtoField("pos")

IS64.addConnect(connect65)

ProtoInstance62.setIS(IS64)

ProtoBody61.addChildren(ProtoInstance62)

ProtoDeclare58.setProtoBody(ProtoBody61)

Scene4.addChildren(ProtoDeclare58)
ProtoDeclare66 = x3d.ProtoDeclare()
ProtoDeclare66.setName("r")
ProtoInterface67 = x3d.ProtoInterface()
field68 = x3d.field()
field68.setAccessType("initializeOnly")
field68.setType("SFVec3f")
field68.setName("pos")
field68.setValue("0 0 0")

ProtoInterface67.addField(field68)

ProtoDeclare66.setProtoInterface(ProtoInterface67)
ProtoBody69 = x3d.ProtoBody()
ProtoInstance70 = x3d.ProtoInstance()
ProtoInstance70.setName("org")
fieldValue71 = x3d.fieldValue()
fieldValue71.setName("col")
fieldValue71.setValue("0 0.300000011920929 1")

ProtoInstance70.addFieldValue(fieldValue71)
IS72 = x3d.IS()
connect73 = x3d.connect()
connect73.setNodeField("posi")
connect73.setProtoField("pos")

IS72.addConnect(connect73)

ProtoInstance70.setIS(IS72)

ProtoBody69.addChildren(ProtoInstance70)

ProtoDeclare66.setProtoBody(ProtoBody69)

Scene4.addChildren(ProtoDeclare66)
ProtoDeclare74 = x3d.ProtoDeclare()
ProtoDeclare74.setName("n")
ProtoInterface75 = x3d.ProtoInterface()
field76 = x3d.field()
field76.setAccessType("initializeOnly")
field76.setType("SFVec3f")
field76.setName("pos")
field76.setValue("0 0 0")

ProtoInterface75.addField(field76)

ProtoDeclare74.setProtoInterface(ProtoInterface75)
ProtoBody77 = x3d.ProtoBody()
ProtoInstance78 = x3d.ProtoInstance()
ProtoInstance78.setName("org")
fieldValue79 = x3d.fieldValue()
fieldValue79.setName("col")
fieldValue79.setValue("1 0 0.200000002980232")

ProtoInstance78.addFieldValue(fieldValue79)
IS80 = x3d.IS()
connect81 = x3d.connect()
connect81.setNodeField("posi")
connect81.setProtoField("pos")

IS80.addConnect(connect81)

ProtoInstance78.setIS(IS80)

ProtoBody77.addChildren(ProtoInstance78)

ProtoDeclare74.setProtoBody(ProtoBody77)

Scene4.addChildren(ProtoDeclare74)
ProtoDeclare82 = x3d.ProtoDeclare()
ProtoDeclare82.setName("i")
ProtoInterface83 = x3d.ProtoInterface()
field84 = x3d.field()
field84.setAccessType("initializeOnly")
field84.setType("SFVec3f")
field84.setName("pos")
field84.setValue("0 0 0")

ProtoInterface83.addField(field84)

ProtoDeclare82.setProtoInterface(ProtoInterface83)
ProtoBody85 = x3d.ProtoBody()
ProtoInstance86 = x3d.ProtoInstance()
ProtoInstance86.setName("org")
fieldValue87 = x3d.fieldValue()
fieldValue87.setName("col")
fieldValue87.setValue("0.600000023841858 0 0.600000023841858")

ProtoInstance86.addFieldValue(fieldValue87)
IS88 = x3d.IS()
connect89 = x3d.connect()
connect89.setNodeField("posi")
connect89.setProtoField("pos")

IS88.addConnect(connect89)

ProtoInstance86.setIS(IS88)

ProtoBody85.addChildren(ProtoInstance86)

ProtoDeclare82.setProtoBody(ProtoBody85)

Scene4.addChildren(ProtoDeclare82)
Transform90 = x3d.Transform()
Transform90.setTranslation([-468,0,315])
Inline91 = x3d.Inline()
Inline91.setUrl(["t.wrl"])

Transform90.addChildren(Inline91)
Anchor92 = x3d.Anchor()
Anchor92.setUrl(["javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor92.setDescription("Derby Women's Centre")
ProtoInstance93 = x3d.ProtoInstance()
ProtoInstance93.setName("institute")
fieldValue94 = x3d.fieldValue()
fieldValue94.setName("pos")
fieldValue94.setValue("435.299987792969 0.100000001490116 -335.600006103516")

ProtoInstance93.addFieldValue(fieldValue94)

Anchor92.addChildren(ProtoInstance93)

Transform90.addChildren(Anchor92)
Anchor95 = x3d.Anchor()
Anchor95.setUrl(["javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor95.setDescription("High Peak Community Arts")
ProtoInstance96 = x3d.ProtoInstance()
ProtoInstance96.setName("r")
fieldValue97 = x3d.fieldValue()
fieldValue97.setName("pos")
fieldValue97.setValue("400 0.100000001490116 -385")

ProtoInstance96.addFieldValue(fieldValue97)

Anchor95.addChildren(ProtoInstance96)

Transform90.addChildren(Anchor95)
Anchor98 = x3d.Anchor()
Anchor98.setUrl(["javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor98.setDescription("Charlesworth Primary School")
ProtoInstance99 = x3d.ProtoInstance()
ProtoInstance99.setName("school")
fieldValue100 = x3d.fieldValue()
fieldValue100.setName("pos")
fieldValue100.setValue("400.600006103516 0.100000001490116 -392.899993896484")

ProtoInstance99.addFieldValue(fieldValue100)

Anchor98.addChildren(ProtoInstance99)

Transform90.addChildren(Anchor98)
Anchor101 = x3d.Anchor()
Anchor101.setUrl(["javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor101.setDescription("Hope Valley College")
ProtoInstance102 = x3d.ProtoInstance()
ProtoInstance102.setName("school")
fieldValue103 = x3d.fieldValue()
fieldValue103.setName("pos")
fieldValue103.setValue("416.700012207031 0.100000001490116 -383.399993896484")

ProtoInstance102.addFieldValue(fieldValue103)

Anchor101.addChildren(ProtoInstance102)

Transform90.addChildren(Anchor101)
Anchor104 = x3d.Anchor()
Anchor104.setUrl(["javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor104.setDescription("People Express")
ProtoInstance105 = x3d.ProtoInstance()
ProtoInstance105.setName("i")
fieldValue106 = x3d.fieldValue()
fieldValue106.setName("pos")
fieldValue106.setValue("429.899993896484 0.100000001490116 -319.600006103516")

ProtoInstance105.addFieldValue(fieldValue106)

Anchor104.addChildren(ProtoInstance105)

Transform90.addChildren(Anchor104)
Anchor107 = x3d.Anchor()
Anchor107.setUrl(["javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor107.setDescription("QArts/Studios")
ProtoInstance108 = x3d.ProtoInstance()
ProtoInstance108.setName("i")
fieldValue109 = x3d.fieldValue()
fieldValue109.setName("pos")
fieldValue109.setValue("430 0.100000001490116 -335")

ProtoInstance108.addFieldValue(fieldValue109)

Anchor107.addChildren(ProtoInstance108)

Transform90.addChildren(Anchor107)
Anchor110 = x3d.Anchor()
Anchor110.setUrl(["javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor110.setDescription("Stroke Unit, Derbyshire Royal Infirmary")
ProtoInstance111 = x3d.ProtoInstance()
ProtoInstance111.setName("institute")
fieldValue112 = x3d.fieldValue()
fieldValue112.setName("pos")
fieldValue112.setValue("435.799987792969 0.100000001490116 -335.299987792969")

ProtoInstance111.addFieldValue(fieldValue112)

Anchor110.addChildren(ProtoInstance111)

Transform90.addChildren(Anchor110)
Anchor113 = x3d.Anchor()
Anchor113.setUrl(["javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor113.setDescription("Park View Primary, Derby")
ProtoInstance114 = x3d.ProtoInstance()
ProtoInstance114.setName("school")
fieldValue115 = x3d.fieldValue()
fieldValue115.setName("pos")
fieldValue115.setValue("438.299987792969 0.100000001490116 -338.600006103516")

ProtoInstance114.addFieldValue(fieldValue115)

Anchor113.addChildren(ProtoInstance114)

Transform90.addChildren(Anchor113)
Anchor116 = x3d.Anchor()
Anchor116.setUrl(["javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor116.setDescription("First Movement")
ProtoInstance117 = x3d.ProtoInstance()
ProtoInstance117.setName("n")
fieldValue118 = x3d.fieldValue()
fieldValue118.setName("pos")
fieldValue118.setValue("429.899993896484 0.100000001490116 -360.299987792969")

ProtoInstance117.addFieldValue(fieldValue118)

Anchor116.addChildren(ProtoInstance117)

Transform90.addChildren(Anchor116)
Anchor119 = x3d.Anchor()
Anchor119.setUrl(["javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor119.setDescription("St. Benedict R.C. School, Visual Impairment Unit")
ProtoInstance120 = x3d.ProtoInstance()
ProtoInstance120.setName("institute")
fieldValue121 = x3d.fieldValue()
fieldValue121.setName("pos")
fieldValue121.setValue("434.600006103516 0.100000001490116 -338.600006103516")

ProtoInstance120.addFieldValue(fieldValue121)

Anchor119.addChildren(ProtoInstance120)

Transform90.addChildren(Anchor119)
Anchor122 = x3d.Anchor()
Anchor122.setUrl(["javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor122.setDescription("Beckett Primary, Derby")
ProtoInstance123 = x3d.ProtoInstance()
ProtoInstance123.setName("school")
fieldValue124 = x3d.fieldValue()
fieldValue124.setName("pos")
fieldValue124.setValue("434.799987792969 0.100000001490116 -336")

ProtoInstance123.addFieldValue(fieldValue124)

Anchor122.addChildren(ProtoInstance123)

Transform90.addChildren(Anchor122)
Anchor125 = x3d.Anchor()
Anchor125.setUrl(["javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor125.setDescription("Brackensdale Junior School, Communty Unit")
ProtoInstance126 = x3d.ProtoInstance()
ProtoInstance126.setName("institute")
fieldValue127 = x3d.fieldValue()
fieldValue127.setName("pos")
fieldValue127.setValue("432.700012207031 0.100000001490116 -336.600006103516")

ProtoInstance126.addFieldValue(fieldValue127)

Anchor125.addChildren(ProtoInstance126)

Transform90.addChildren(Anchor125)
Anchor128 = x3d.Anchor()
Anchor128.setUrl(["javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor128.setDescription("Moorhead Primary, Derby")
ProtoInstance129 = x3d.ProtoInstance()
ProtoInstance129.setName("school")
fieldValue130 = x3d.fieldValue()
fieldValue130.setName("pos")
fieldValue130.setValue("437.600006103516 0.100000001490116 -332.600006103516")

ProtoInstance129.addFieldValue(fieldValue130)

Anchor128.addChildren(ProtoInstance129)

Transform90.addChildren(Anchor128)
Anchor131 = x3d.Anchor()
Anchor131.setUrl(["javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor131.setDescription("Derby Deaf Club")
ProtoInstance132 = x3d.ProtoInstance()
ProtoInstance132.setName("institute")
fieldValue133 = x3d.fieldValue()
fieldValue133.setName("pos")
fieldValue133.setValue("434.700012207031 0.100000001490116 -336.899993896484")

ProtoInstance132.addFieldValue(fieldValue133)

Anchor131.addChildren(ProtoInstance132)

Transform90.addChildren(Anchor131)
Anchor134 = x3d.Anchor()
Anchor134.setUrl(["javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor134.setDescription("Nightingale Junior, Derby")
ProtoInstance135 = x3d.ProtoInstance()
ProtoInstance135.setName("school")
fieldValue136 = x3d.fieldValue()
fieldValue136.setName("pos")
fieldValue136.setValue("436.299987792969 0.100000001490116 -333.399993896484")

ProtoInstance135.addFieldValue(fieldValue136)

Anchor134.addChildren(ProtoInstance135)

Transform90.addChildren(Anchor134)
Anchor137 = x3d.Anchor()
Anchor137.setUrl(["javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor137.setDescription("St Mary's Primary, Derby")
ProtoInstance138 = x3d.ProtoInstance()
ProtoInstance138.setName("school")
fieldValue139 = x3d.fieldValue()
fieldValue139.setName("pos")
fieldValue139.setValue("435.200012207031 0.100000001490116 -336.799987792969")

ProtoInstance138.addFieldValue(fieldValue139)

Anchor137.addChildren(ProtoInstance138)

Transform90.addChildren(Anchor137)
Anchor140 = x3d.Anchor()
Anchor140.setUrl(["javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor140.setDescription("Griffe Field Primary, Derby")
ProtoInstance141 = x3d.ProtoInstance()
ProtoInstance141.setName("school")
fieldValue142 = x3d.fieldValue()
fieldValue142.setName("pos")
fieldValue142.setValue("432.5 0.100000001490116 -332.5")

ProtoInstance141.addFieldValue(fieldValue142)

Anchor140.addChildren(ProtoInstance141)

Transform90.addChildren(Anchor140)
Anchor143 = x3d.Anchor()
Anchor143.setUrl(["javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor143.setDescription("Leicester Road Day Centre, Melton Mowbray")
ProtoInstance144 = x3d.ProtoInstance()
ProtoInstance144.setName("institute")
fieldValue145 = x3d.fieldValue()
fieldValue145.setName("pos")
fieldValue145.setValue("474.700012207031 0.100000001490116 -318.799987792969")

ProtoInstance144.addFieldValue(fieldValue145)

Anchor143.addChildren(ProtoInstance144)

Transform90.addChildren(Anchor143)
Anchor146 = x3d.Anchor()
Anchor146.setUrl(["javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor146.setDescription("Ivy House Special School, Derby")
ProtoInstance147 = x3d.ProtoInstance()
ProtoInstance147.setName("school")
fieldValue148 = x3d.fieldValue()
fieldValue148.setName("pos")
fieldValue148.setValue("436.100006103516 0.100000001490116 -334.899993896484")

ProtoInstance147.addFieldValue(fieldValue148)

Anchor146.addChildren(ProtoInstance147)

Transform90.addChildren(Anchor146)
Anchor149 = x3d.Anchor()
Anchor149.setUrl(["javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor149.setDescription("Oakham Day Centre, Rutland")
ProtoInstance150 = x3d.ProtoInstance()
ProtoInstance150.setName("institute")
fieldValue151 = x3d.fieldValue()
fieldValue151.setName("pos")
fieldValue151.setValue("485.600006103516 0.100000001490116 -309")

ProtoInstance150.addFieldValue(fieldValue151)

Anchor149.addChildren(ProtoInstance150)

Transform90.addChildren(Anchor149)
Anchor152 = x3d.Anchor()
Anchor152.setUrl(["javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor152.setDescription("Parkwood School, Alfreton")
ProtoInstance153 = x3d.ProtoInstance()
ProtoInstance153.setName("school")
fieldValue154 = x3d.fieldValue()
fieldValue154.setName("pos")
fieldValue154.setValue("440.5 0.100000001490116 -355.5")

ProtoInstance153.addFieldValue(fieldValue154)

Anchor152.addChildren(ProtoInstance153)

Transform90.addChildren(Anchor152)
Anchor155 = x3d.Anchor()
Anchor155.setUrl(["javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor155.setDescription("Ash Green, Specialist Learning Disability Resource")
ProtoInstance156 = x3d.ProtoInstance()
ProtoInstance156.setName("institute")
fieldValue157 = x3d.fieldValue()
fieldValue157.setName("pos")
fieldValue157.setValue("434.799987792969 0.100000001490116 -371.5")

ProtoInstance156.addFieldValue(fieldValue157)

Anchor155.addChildren(ProtoInstance156)

Transform90.addChildren(Anchor155)
Anchor158 = x3d.Anchor()
Anchor158.setUrl(["javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor158.setDescription("Ashgate Croft School, Chesterfield")
ProtoInstance159 = x3d.ProtoInstance()
ProtoInstance159.setName("school")
fieldValue160 = x3d.fieldValue()
fieldValue160.setName("pos")
fieldValue160.setValue("436.299987792969 0.100000001490116 -371.700012207031")

ProtoInstance159.addFieldValue(fieldValue160)

Anchor158.addChildren(ProtoInstance159)

Transform90.addChildren(Anchor158)
Anchor161 = x3d.Anchor()
Anchor161.setUrl(["javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor161.setDescription("Highfields School, Matlock")
ProtoInstance162 = x3d.ProtoInstance()
ProtoInstance162.setName("school")
fieldValue163 = x3d.fieldValue()
fieldValue163.setName("pos")
fieldValue163.setValue("431.200012207031 0.100000001490116 -361.200012207031")

ProtoInstance162.addFieldValue(fieldValue163)

Anchor161.addChildren(ProtoInstance162)

Transform90.addChildren(Anchor161)
Anchor164 = x3d.Anchor()
Anchor164.setUrl(["javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor164.setDescription("City Arts")
ProtoInstance165 = x3d.ProtoInstance()
ProtoInstance165.setName("i")
fieldValue166 = x3d.fieldValue()
fieldValue166.setName("pos")
fieldValue166.setValue("455.899993896484 0.100000001490116 -341.299987792969")

ProtoInstance165.addFieldValue(fieldValue166)

Anchor164.addChildren(ProtoInstance165)

Transform90.addChildren(Anchor164)
Anchor167 = x3d.Anchor()
Anchor167.setUrl(["javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor167.setDescription("Indigo Dance Group (Salamanda Tandem)")
ProtoInstance168 = x3d.ProtoInstance()
ProtoInstance168.setName("r")
fieldValue169 = x3d.fieldValue()
fieldValue169.setName("pos")
fieldValue169.setValue("456.100006103516 0.100000001490116 -341.5")

ProtoInstance168.addFieldValue(fieldValue169)

Anchor167.addChildren(ProtoInstance168)

Transform90.addChildren(Anchor167)
Anchor170 = x3d.Anchor()
Anchor170.setUrl(["javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor170.setDescription("Watering Seeds")
ProtoInstance171 = x3d.ProtoInstance()
ProtoInstance171.setName("r")
fieldValue172 = x3d.fieldValue()
fieldValue172.setName("pos")
fieldValue172.setValue("454 0.100000001490116 -361.299987792969")

ProtoInstance171.addFieldValue(fieldValue172)

Anchor170.addChildren(ProtoInstance171)

Transform90.addChildren(Anchor170)
Anchor173 = x3d.Anchor()
Anchor173.setUrl(["javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor173.setDescription("Red oaks")
ProtoInstance174 = x3d.ProtoInstance()
ProtoInstance174.setName("institute")
fieldValue175 = x3d.fieldValue()
fieldValue175.setName("pos")
fieldValue175.setValue("457.399993896484 0.100000001490116 -359.600006103516")

ProtoInstance174.addFieldValue(fieldValue175)

Anchor173.addChildren(ProtoInstance174)

Transform90.addChildren(Anchor173)
Anchor176 = x3d.Anchor()
Anchor176.setUrl(["javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor176.setDescription("West Notts College")
ProtoInstance177 = x3d.ProtoInstance()
ProtoInstance177.setName("school")
fieldValue178 = x3d.fieldValue()
fieldValue178.setName("pos")
fieldValue178.setValue("454.200012207031 0.100000001490116 -358.600006103516")

ProtoInstance177.addFieldValue(fieldValue178)

Anchor176.addChildren(ProtoInstance177)

Transform90.addChildren(Anchor176)
Anchor179 = x3d.Anchor()
Anchor179.setUrl(["javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor179.setDescription("Willow Wood Day Centre")
ProtoInstance180 = x3d.ProtoInstance()
ProtoInstance180.setName("institute")
fieldValue181 = x3d.fieldValue()
fieldValue181.setName("pos")
fieldValue181.setValue("450.600006103516 0.100000001490116 -358.600006103516")

ProtoInstance180.addFieldValue(fieldValue181)

Anchor179.addChildren(ProtoInstance180)

Transform90.addChildren(Anchor179)
Anchor182 = x3d.Anchor()
Anchor182.setUrl(["javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor182.setDescription("Fased In The Arts")
ProtoInstance183 = x3d.ProtoInstance()
ProtoInstance183.setName("r")
fieldValue184 = x3d.fieldValue()
fieldValue184.setName("pos")
fieldValue184.setValue("440 0.100000001490116 -350")

ProtoInstance183.addFieldValue(fieldValue184)

Anchor182.addChildren(ProtoInstance183)

Transform90.addChildren(Anchor182)
Anchor185 = x3d.Anchor()
Anchor185.setUrl(["javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor185.setDescription("27a Access Artspace")
ProtoInstance186 = x3d.ProtoInstance()
ProtoInstance186.setName("n")
fieldValue187 = x3d.fieldValue()
fieldValue187.setName("pos")
fieldValue187.setValue("458.899993896484 0.100000001490116 -304.299987792969")

ProtoInstance186.addFieldValue(fieldValue187)

Anchor185.addChildren(ProtoInstance186)

Transform90.addChildren(Anchor185)
Anchor188 = x3d.Anchor()
Anchor188.setUrl(["javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor188.setDescription("Roman Way Day Centre, Market Harborough")
ProtoInstance189 = x3d.ProtoInstance()
ProtoInstance189.setName("institute")
fieldValue190 = x3d.fieldValue()
fieldValue190.setName("pos")
fieldValue190.setValue("473.5 0.100000001490116 -287.5")

ProtoInstance189.addFieldValue(fieldValue190)

Anchor188.addChildren(ProtoInstance189)

Transform90.addChildren(Anchor188)
Anchor191 = x3d.Anchor()
Anchor191.setUrl(["javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor191.setDescription("Mosaic, Leicester Disability Services")
ProtoInstance192 = x3d.ProtoInstance()
ProtoInstance192.setName("institute")
fieldValue193 = x3d.fieldValue()
fieldValue193.setName("pos")
fieldValue193.setValue("458 0.100000001490116 -304.5")

ProtoInstance192.addFieldValue(fieldValue193)

Anchor191.addChildren(ProtoInstance192)

Transform90.addChildren(Anchor191)
Anchor194 = x3d.Anchor()
Anchor194.setUrl(["javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor194.setDescription("Bamboozle Theatre Company")
ProtoInstance195 = x3d.ProtoInstance()
ProtoInstance195.setName("r")
fieldValue196 = x3d.fieldValue()
fieldValue196.setName("pos")
fieldValue196.setValue("457.100006103516 0.100000001490116 -300.799987792969")

ProtoInstance195.addFieldValue(fieldValue196)

Anchor194.addChildren(ProtoInstance195)

Transform90.addChildren(Anchor194)
Anchor197 = x3d.Anchor()
Anchor197.setUrl(["javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor197.setDescription("Ellesmere College, Leicester")
ProtoInstance198 = x3d.ProtoInstance()
ProtoInstance198.setName("school")
fieldValue199 = x3d.fieldValue()
fieldValue199.setName("pos")
fieldValue199.setValue("456.799987792969 0.100000001490116 -302.600006103516")

ProtoInstance198.addFieldValue(fieldValue199)

Anchor197.addChildren(ProtoInstance198)

Transform90.addChildren(Anchor197)
Anchor200 = x3d.Anchor()
Anchor200.setUrl(["javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor200.setDescription("Ashmount School, Loughborough")
ProtoInstance201 = x3d.ProtoInstance()
ProtoInstance201.setName("school")
fieldValue202 = x3d.fieldValue()
fieldValue202.setName("pos")
fieldValue202.setValue("453.299987792969 0.100000001490116 -318.600006103516")

ProtoInstance201.addFieldValue(fieldValue202)

Anchor200.addChildren(ProtoInstance201)

Transform90.addChildren(Anchor200)
Anchor203 = x3d.Anchor()
Anchor203.setUrl(["javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor203.setDescription("Mantle Community Arts")
ProtoInstance204 = x3d.ProtoInstance()
ProtoInstance204.setName("r")
fieldValue205 = x3d.fieldValue()
fieldValue205.setName("pos")
fieldValue205.setValue("442.399993896484 0.100000001490116 -314.5")

ProtoInstance204.addFieldValue(fieldValue205)

Anchor203.addChildren(ProtoInstance204)

Transform90.addChildren(Anchor203)
Anchor206 = x3d.Anchor()
Anchor206.setUrl(["javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor206.setDescription("Forrest Way School")
ProtoInstance207 = x3d.ProtoInstance()
ProtoInstance207.setName("school")
fieldValue208 = x3d.fieldValue()
fieldValue208.setName("pos")
fieldValue208.setValue("444.600006103516 0.100000001490116 -313.700012207031")

ProtoInstance207.addFieldValue(fieldValue208)

Anchor206.addChildren(ProtoInstance207)

Transform90.addChildren(Anchor206)
Anchor209 = x3d.Anchor()
Anchor209.setUrl(["javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor209.setDescription("Ibstock Community College")
ProtoInstance210 = x3d.ProtoInstance()
ProtoInstance210.setName("school")
fieldValue211 = x3d.fieldValue()
fieldValue211.setName("pos")
fieldValue211.setValue("440.600006103516 0.100000001490116 -310.399993896484")

ProtoInstance210.addFieldValue(fieldValue211)

Anchor209.addChildren(ProtoInstance210)

Transform90.addChildren(Anchor209)
Anchor212 = x3d.Anchor()
Anchor212.setUrl(["javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor212.setDescription("Artlink East")
ProtoInstance213 = x3d.ProtoInstance()
ProtoInstance213.setName("r")
fieldValue214 = x3d.fieldValue()
fieldValue214.setName("pos")
fieldValue214.setValue("491.600006103516 0.100000001490116 -335.700012207031")

ProtoInstance213.addFieldValue(fieldValue214)

Anchor212.addChildren(ProtoInstance213)

Transform90.addChildren(Anchor212)
Anchor215 = x3d.Anchor()
Anchor215.setUrl(["javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor215.setDescription("United Hospitals and NHS Trust Lincolnshire")
ProtoInstance216 = x3d.ProtoInstance()
ProtoInstance216.setName("institute")
fieldValue217 = x3d.fieldValue()
fieldValue217.setName("pos")
fieldValue217.setValue("491.399993896484 0.100000001490116 -336.799987792969")

ProtoInstance216.addFieldValue(fieldValue217)

Anchor215.addChildren(ProtoInstance216)

Transform90.addChildren(Anchor215)
Anchor218 = x3d.Anchor()
Anchor218.setUrl(["javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor218.setDescription("Ancaster Day Centre")
ProtoInstance219 = x3d.ProtoInstance()
ProtoInstance219.setName("institute")
fieldValue220 = x3d.fieldValue()
fieldValue220.setName("pos")
fieldValue220.setValue("496.899993896484 0.100000001490116 -368.899993896484")

ProtoInstance219.addFieldValue(fieldValue220)

Anchor218.addChildren(ProtoInstance219)

Transform90.addChildren(Anchor218)
Anchor221 = x3d.Anchor()
Anchor221.setUrl(["javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor221.setDescription("Creations")
ProtoInstance222 = x3d.ProtoInstance()
ProtoInstance222.setName("r")
fieldValue223 = x3d.fieldValue()
fieldValue223.setName("pos")
fieldValue223.setValue("467 0.100000001490116 -243.899993896484")

ProtoInstance222.addFieldValue(fieldValue223)

Anchor221.addChildren(ProtoInstance222)

Transform90.addChildren(Anchor221)
Anchor224 = x3d.Anchor()
Anchor224.setUrl(["javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor224.setDescription("Nene Day Centre, Northamtpon")
ProtoInstance225 = x3d.ProtoInstance()
ProtoInstance225.setName("institute")
fieldValue226 = x3d.fieldValue()
fieldValue226.setName("pos")
fieldValue226.setValue("477.100006103516 0.100000001490116 -260")

ProtoInstance225.addFieldValue(fieldValue226)

Anchor224.addChildren(ProtoInstance225)

Transform90.addChildren(Anchor224)
Anchor227 = x3d.Anchor()
Anchor227.setUrl(["javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor227.setDescription("Delapre Middle School, Northampton")
ProtoInstance228 = x3d.ProtoInstance()
ProtoInstance228.setName("school")
fieldValue229 = x3d.fieldValue()
fieldValue229.setName("pos")
fieldValue229.setValue("474.700012207031 0.100000001490116 -259.100006103516")

ProtoInstance228.addFieldValue(fieldValue229)

Anchor227.addChildren(ProtoInstance228)

Transform90.addChildren(Anchor227)
Anchor230 = x3d.Anchor()
Anchor230.setUrl(["javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor230.setDescription("The Links, Brackley")
ProtoInstance231 = x3d.ProtoInstance()
ProtoInstance231.setName("institute")
fieldValue232 = x3d.fieldValue()
fieldValue232.setName("pos")
fieldValue232.setValue("459 0.100000001490116 -236.399993896484")

ProtoInstance231.addFieldValue(fieldValue232)

Anchor230.addChildren(ProtoInstance231)

Transform90.addChildren(Anchor230)
Anchor233 = x3d.Anchor()
Anchor233.setUrl(["javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor233.setDescription("New Perspectives")
ProtoInstance234 = x3d.ProtoInstance()
ProtoInstance234.setName("n")
fieldValue235 = x3d.fieldValue()
fieldValue235.setName("pos")
fieldValue235.setValue("457.399993896484 0.100000001490116 -262.700012207031")

ProtoInstance234.addFieldValue(fieldValue235)

Anchor233.addChildren(ProtoInstance234)

Transform90.addChildren(Anchor233)
Anchor236 = x3d.Anchor()
Anchor236.setUrl(["javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor236.setDescription("UKan2")
ProtoInstance237 = x3d.ProtoInstance()
ProtoInstance237.setName("r")
fieldValue238 = x3d.fieldValue()
fieldValue238.setName("pos")
fieldValue238.setValue("458.700012207031 0.100000001490116 -262.700012207031")

ProtoInstance237.addFieldValue(fieldValue238)

Anchor236.addChildren(ProtoInstance237)

Transform90.addChildren(Anchor236)
Anchor239 = x3d.Anchor()
Anchor239.setUrl(["javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor239.setDescription("Silverstone County Infants School")
ProtoInstance240 = x3d.ProtoInstance()
ProtoInstance240.setName("school")
fieldValue241 = x3d.fieldValue()
fieldValue241.setName("pos")
fieldValue241.setValue("466.899993896484 0.100000001490116 -243.800003051758")

ProtoInstance240.addFieldValue(fieldValue241)

Anchor239.addChildren(ProtoInstance240)

Transform90.addChildren(Anchor239)
Anchor242 = x3d.Anchor()
Anchor242.setUrl(["javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor242.setDescription("Riverside Resource Centre, Towcester")
ProtoInstance243 = x3d.ProtoInstance()
ProtoInstance243.setName("institute")
fieldValue244 = x3d.fieldValue()
fieldValue244.setName("pos")
fieldValue244.setValue("469.5 0.100000001490116 -249.800003051758")

ProtoInstance243.addFieldValue(fieldValue244)

Anchor242.addChildren(ProtoInstance243)

Transform90.addChildren(Anchor242)
Anchor245 = x3d.Anchor()
Anchor245.setUrl(["javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor245.setDescription("Daventry Tertiary College")
ProtoInstance246 = x3d.ProtoInstance()
ProtoInstance246.setName("school")
fieldValue247 = x3d.fieldValue()
fieldValue247.setName("pos")
fieldValue247.setValue("456.700012207031 0.100000001490116 -261.799987792969")

ProtoInstance246.addFieldValue(fieldValue247)

Anchor245.addChildren(ProtoInstance246)

Transform90.addChildren(Anchor245)
Shape248 = x3d.Shape()
Appearance249 = x3d.Appearance()
Material250 = x3d.Material()
Material250.setTransparency(0.200000002980232)
Material250.setEmissiveColor([1,0,0])

Appearance249.setMaterial(Material250)

Shape248.setAppearance(Appearance249)
IndexedLineSet251 = x3d.IndexedLineSet()
IndexedLineSet251.setCoordIndex([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1])
Coordinate252 = x3d.Coordinate()
Coordinate252.setPoint([430,0.0199999995529652,-335,435.799987792969,0.100000001490116,-335.299987792969,430,0.0199999995529652,-335,434.600006103516,0.100000001490116,-338.600006103516,430,0.0199999995529652,-335,432.700012207031,0.100000001490116,-336.600006103516,430,0.0199999995529652,-335,434.700012207031,0.100000001490116,-336.899993896484,429.899993896484,0.0199999995529652,-360.299987792969,474.700012207031,0.100000001490116,-318.799987792969,429.899993896484,0.0199999995529652,-360.299987792969,485.600006103516,0.100000001490116,-309,429.899993896484,0.0199999995529652,-360.299987792969,434.799987792969,0.100000001490116,-371.5,454,0.0199999995529652,-361.299987792969,457.399993896484,0.100000001490116,-359.600006103516,454,0.0199999995529652,-361.299987792969,454.200012207031,0.100000001490116,-358.600006103516,454,0.0199999995529652,-361.299987792969,450.600006103516,0.100000001490116,-358.600006103516,458.899993896484,0.0199999995529652,-304.299987792969,473.5,0.100000001490116,-287.5,458.899993896484,0.0199999995529652,-304.299987792969,458,0.100000001490116,-304.5,491.600006103516,0.0199999995529652,-335.700012207031,491.399993896484,0.100000001490116,-336.799987792969,491.600006103516,0.0199999995529652,-335.700012207031,496.899993896484,0.100000001490116,-368.899993896484,467,0.0199999995529652,-243.899993896484,477.100006103516,0.100000001490116,-260,467,0.0199999995529652,-243.899993896484,459,0.100000001490116,-236.399993896484,458.700012207031,0.0199999995529652,-262.700012207031,469.5,0.100000001490116,-249.800003051758,458.700012207031,0.0199999995529652,-262.700012207031,456.700012207031,0.100000001490116,-261.799987792969])

IndexedLineSet251.setCoord(Coordinate252)

Shape248.setGeometry(IndexedLineSet251)

Transform90.addChildren(Shape248)
Shape253 = x3d.Shape()
Appearance254 = x3d.Appearance()
Material255 = x3d.Material()
Material255.setTransparency(0.200000002980232)
Material255.setEmissiveColor([0,1,0])

Appearance254.setMaterial(Material255)

Shape253.setAppearance(Appearance254)
IndexedLineSet256 = x3d.IndexedLineSet()
IndexedLineSet256.setCoordIndex([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1])
Coordinate257 = x3d.Coordinate()
Coordinate257.setPoint([400,0.0199999995529652,-385,400.600006103516,0.100000001490116,-392.899993896484,400,0.0199999995529652,-385,416.700012207031,0.100000001490116,-383.399993896484,430,0.0199999995529652,-335,438.299987792969,0.100000001490116,-338.600006103516,430,0.0199999995529652,-335,434.799987792969,0.100000001490116,-336,430,0.0199999995529652,-335,437.600006103516,0.100000001490116,-332.600006103516,430,0.0199999995529652,-335,436.299987792969,0.100000001490116,-333.399993896484,430,0.0199999995529652,-335,435.200012207031,0.100000001490116,-336.799987792969,430,0.0199999995529652,-335,432.5,0.100000001490116,-332.5,429.899993896484,0.0199999995529652,-360.299987792969,436.100006103516,0.100000001490116,-334.899993896484,429.899993896484,0.0199999995529652,-360.299987792969,440.5,0.100000001490116,-355.5,429.899993896484,0.0199999995529652,-360.299987792969,436.299987792969,0.100000001490116,-371.700012207031,429.899993896484,0.0199999995529652,-360.299987792969,431.200012207031,0.100000001490116,-361.200012207031,457.100006103516,0.0199999995529652,-300.799987792969,456.799987792969,0.100000001490116,-302.600006103516,457.100006103516,0.0199999995529652,-300.799987792969,453.299987792969,0.100000001490116,-318.600006103516,442.399993896484,0.0199999995529652,-314.5,444.600006103516,0.100000001490116,-313.700012207031,442.399993896484,0.0199999995529652,-314.5,440.600006103516,0.100000001490116,-310.399993896484,467,0.0199999995529652,-243.899993896484,474.700012207031,0.100000001490116,-259.100006103516,457.399993896484,0.0199999995529652,-262.700012207031,466.899993896484,0.100000001490116,-243.800003051758])

IndexedLineSet256.setCoord(Coordinate257)

Shape253.setGeometry(IndexedLineSet256)

Transform90.addChildren(Shape253)
Shape258 = x3d.Shape()
Appearance259 = x3d.Appearance()
Material260 = x3d.Material()
Material260.setTransparency(0.200000002980232)
Material260.setEmissiveColor([1,0,1])

Appearance259.setMaterial(Material260)

Shape258.setAppearance(Appearance259)
IndexedLineSet261 = x3d.IndexedLineSet()
IndexedLineSet261.setCoordIndex([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1])
Coordinate262 = x3d.Coordinate()
Coordinate262.setPoint([430,0.0199999995529652,-335,429.899993896484,0.100000001490116,-360.299987792969,442.399993896484,0.0199999995529652,-314.5,429.899993896484,0.100000001490116,-319.600006103516,457.399993896484,0.0199999995529652,-262.700012207031,467,0.100000001490116,-243.899993896484,458.700012207031,0.0199999995529652,-262.700012207031,457.399993896484,0.100000001490116,-262.700012207031,458.700012207031,0.0199999995529652,-262.700012207031,467,0.100000001490116,-243.899993896484])

IndexedLineSet261.setCoord(Coordinate262)

Shape258.setGeometry(IndexedLineSet261)

Transform90.addChildren(Shape258)

Scene4.addChildren(Transform90)

X3D0.setScene(Scene4)
X3D0.toFileX3D("../data/t1_RoundTrip.x3d")
