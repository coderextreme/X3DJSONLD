import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("HAnim")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("DiamondManLOA2.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("hanim skeletal structure at level of articulation two, one diamond at the base node for the structure")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("Matthew T. Beitler")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("translator")
meta6.setContent("Joel S. Pawloski")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("created")
meta7.setContent("12 November 2001")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("modified")
meta8.setContent("8 March 2021")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("Image")
meta9.setContent("DiamondManLOA2.png")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("Image")
meta10.setContent("images/BonesAllSkeletonFrontViewLOA2.png")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("motto")
meta11.setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("subject")
meta13.setContent("human animation, x3d, vrml, animation")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("identifier")
meta14.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA2.x3d")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("generator")
meta15.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("license")
meta16.setContent("../license.html")

head1.addMeta(meta16)

X3D0.setHead(head1)
Scene17 = x3d.Scene()
WorldInfo18 = x3d.WorldInfo()
WorldInfo18.setInfo(["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 2 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"])
WorldInfo18.setTitle("HANIM 1.1 Default Joint Centers, LOA1")

Scene17.addChildren(WorldInfo18)
NavigationInfo19 = x3d.NavigationInfo()
NavigationInfo19.setSpeed(1.5)

Scene17.addChildren(NavigationInfo19)
Viewpoint20 = x3d.Viewpoint()
Viewpoint20.setCenterOfRotation([0,1,0])
Viewpoint20.setDescription("Diamond Man, LOA 2")
Viewpoint20.setPosition([0,1,3])

Scene17.addChildren(Viewpoint20)
Transform21 = x3d.Transform()
Transform21.setTranslation([1,1.5,0])
Billboard22 = x3d.Billboard()
Shape23 = x3d.Shape()
Text24 = x3d.Text()
Text24.setString(["Diamond Man Key"])
FontStyle25 = x3d.FontStyle()
FontStyle25.setFamily(["SANS"])
FontStyle25.setSize(0.1)

Text24.setFontStyle(FontStyle25)

Shape23.setGeometry(Text24)
Appearance26 = x3d.Appearance()
Material27 = x3d.Material()
Material27.setDEF("TextMaterial")
Material27.setDiffuseColor([0.9,0.9,0.9])

Appearance26.setMaterial(Material27)

Shape23.setAppearance(Appearance26)

Billboard22.addChildren(Shape23)
Transform28 = x3d.Transform()
Transform28.setTranslation([0,-0.3,0])
Shape29 = x3d.Shape()
Sphere30 = x3d.Sphere()
Sphere30.setRadius(0.08)

Shape29.setGeometry(Sphere30)
Appearance31 = x3d.Appearance()
Material32 = x3d.Material()
Material32.setDEF("MIN_COLOR")
Material32.setDiffuseColor([1,0,0])

Appearance31.setMaterial(Material32)

Shape29.setAppearance(Appearance31)

Transform28.addChildren(Shape29)
Transform33 = x3d.Transform()
Transform33.setTranslation([0.2,0,0])
Shape34 = x3d.Shape()
Text35 = x3d.Text()
Text35.setString(["Minimal Humanoid Joints"])
FontStyle36 = x3d.FontStyle()
FontStyle36.setFamily(["SANS"])
FontStyle36.setSize(0.1)

Text35.setFontStyle(FontStyle36)

Shape34.setGeometry(Text35)
Appearance37 = x3d.Appearance()
Material38 = x3d.Material()
Material38.setUSE("TextMaterial")

Appearance37.setMaterial(Material38)

Shape34.setAppearance(Appearance37)

Transform33.addChildren(Shape34)

Transform28.addChildren(Transform33)

Billboard22.addChildren(Transform28)
Transform39 = x3d.Transform()
Transform39.setTranslation([0,-0.5,0])
Shape40 = x3d.Shape()
Sphere41 = x3d.Sphere()
Sphere41.setRadius(0.08)

Shape40.setGeometry(Sphere41)
Appearance42 = x3d.Appearance()
Material43 = x3d.Material()
Material43.setDEF("JOINT_COLOR")
Material43.setDiffuseColor([1,1,0])

Appearance42.setMaterial(Material43)

Shape40.setAppearance(Appearance42)

Transform39.addChildren(Shape40)
Transform44 = x3d.Transform()
Transform44.setTranslation([0.2,0,0])
Shape45 = x3d.Shape()
Text46 = x3d.Text()
Text46.setString(["Humanoid Joints"])
FontStyle47 = x3d.FontStyle()
FontStyle47.setFamily(["SANS"])
FontStyle47.setSize(0.1)

Text46.setFontStyle(FontStyle47)

Shape45.setGeometry(Text46)
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.setUSE("TextMaterial")

Appearance48.setMaterial(Material49)

Shape45.setAppearance(Appearance48)

Transform44.addChildren(Shape45)

Transform39.addChildren(Transform44)

Billboard22.addChildren(Transform39)
Transform50 = x3d.Transform()
Transform50.setTranslation([0,-0.7,0])
Shape51 = x3d.Shape()
Sphere52 = x3d.Sphere()
Sphere52.setRadius(0.08)

Shape51.setGeometry(Sphere52)
Appearance53 = x3d.Appearance()
Material54 = x3d.Material()
Material54.setDEF("REC_SPINAL_COLOR")
Material54.setDiffuseColor([1,0,1])

Appearance53.setMaterial(Material54)

Shape51.setAppearance(Appearance53)

Transform50.addChildren(Shape51)
Transform55 = x3d.Transform()
Transform55.setTranslation([0.2,0,0])
Shape56 = x3d.Shape()
Text57 = x3d.Text()
Text57.setString(["Recommended Spinal Joints"])
FontStyle58 = x3d.FontStyle()
FontStyle58.setFamily(["SANS"])
FontStyle58.setSize(0.1)

Text57.setFontStyle(FontStyle58)

Shape56.setGeometry(Text57)
Appearance59 = x3d.Appearance()
Material60 = x3d.Material()
Material60.setUSE("TextMaterial")

Appearance59.setMaterial(Material60)

Shape56.setAppearance(Appearance59)

Transform55.addChildren(Shape56)

Transform50.addChildren(Transform55)

Billboard22.addChildren(Transform50)
Transform61 = x3d.Transform()
Transform61.setTranslation([0,-0.9,0])
Shape62 = x3d.Shape()
Sphere63 = x3d.Sphere()
Sphere63.setRadius(0.08)

Shape62.setGeometry(Sphere63)
Appearance64 = x3d.Appearance()
Material65 = x3d.Material()
Material65.setDEF("SPINAL_COLOR")
Material65.setDiffuseColor([0,1,0])

Appearance64.setMaterial(Material65)

Shape62.setAppearance(Appearance64)

Transform61.addChildren(Shape62)
Transform66 = x3d.Transform()
Transform66.setTranslation([0.2,0,0])
Shape67 = x3d.Shape()
Text68 = x3d.Text()
Text68.setString(["Spinal Joints"])
FontStyle69 = x3d.FontStyle()
FontStyle69.setFamily(["SANS"])
FontStyle69.setSize(0.1)

Text68.setFontStyle(FontStyle69)

Shape67.setGeometry(Text68)
Appearance70 = x3d.Appearance()
Material71 = x3d.Material()
Material71.setUSE("TextMaterial")

Appearance70.setMaterial(Material71)

Shape67.setAppearance(Appearance70)

Transform66.addChildren(Shape67)

Transform61.addChildren(Transform66)

Billboard22.addChildren(Transform61)
Transform72 = x3d.Transform()
Transform72.setTranslation([0,-1.3,0])
Shape73 = x3d.Shape()
Sphere74 = x3d.Sphere()
Sphere74.setRadius(0.08)

Shape73.setGeometry(Sphere74)
Appearance75 = x3d.Appearance()
Material76 = x3d.Material()
Material76.setDEF("SITE_COLOR")
Material76.setDiffuseColor([0,0,1])

Appearance75.setMaterial(Material76)

Shape73.setAppearance(Appearance75)

Transform72.addChildren(Shape73)
Transform77 = x3d.Transform()
Transform77.setTranslation([0.2,0,0])
Shape78 = x3d.Shape()
Text79 = x3d.Text()
Text79.setString(["Humanoid Sites"])
FontStyle80 = x3d.FontStyle()
FontStyle80.setFamily(["SANS"])
FontStyle80.setSize(0.1)

Text79.setFontStyle(FontStyle80)

Shape78.setGeometry(Text79)
Appearance81 = x3d.Appearance()
Material82 = x3d.Material()
Material82.setUSE("TextMaterial")

Appearance81.setMaterial(Material82)

Shape78.setAppearance(Appearance81)

Transform77.addChildren(Shape78)

Transform72.addChildren(Transform77)

Billboard22.addChildren(Transform72)
Transform83 = x3d.Transform()
Transform83.setTranslation([0,-1.1,0])
Shape84 = x3d.Shape()
Sphere85 = x3d.Sphere()
Sphere85.setRadius(0.08)

Shape84.setGeometry(Sphere85)
Appearance86 = x3d.Appearance()
Material87 = x3d.Material()
Material87.setDEF("HAND_FEET_COLOR")
Material87.setDiffuseColor([0,1,1])

Appearance86.setMaterial(Material87)

Shape84.setAppearance(Appearance86)

Transform83.addChildren(Shape84)
Transform88 = x3d.Transform()
Transform88.setTranslation([0.2,0,0])
Shape89 = x3d.Shape()
Text90 = x3d.Text()
Text90.setString(["Hand & Feet Joints"])
FontStyle91 = x3d.FontStyle()
FontStyle91.setFamily(["SANS"])
FontStyle91.setSize(0.1)

Text90.setFontStyle(FontStyle91)

Shape89.setGeometry(Text90)
Appearance92 = x3d.Appearance()
Material93 = x3d.Material()
Material93.setUSE("TextMaterial")

Appearance92.setMaterial(Material93)

Shape89.setAppearance(Appearance92)

Transform88.addChildren(Shape89)

Transform83.addChildren(Transform88)

Billboard22.addChildren(Transform83)

Transform21.addChildren(Billboard22)

Scene17.addChildren(Transform21)
HAnimHumanoid94 = x3d.HAnimHumanoid()
HAnimHumanoid94.setName("humanoid")
HAnimHumanoid94.setDEF("hanim_humanoid")
HAnimHumanoid94.setLoa(2)
HAnimHumanoid94.setVersion("2.0")
#HAnimHumanoid original info='\"humanoidVersion=Nancy V1.2b\" \"authorName=Cindy Ballreich\" \"authorEmail=cindy@ballreich.net\" \"copyright=1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved.\" \"creationDate=Tue Dec 30 08:30:08 PST 1997\" \"usageRestrictions=Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given.\"'
MetadataSet95 = x3d.MetadataSet()
MetadataSet95.setName("HAnimHumanoid.info")
MetadataSet95.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
MetadataString96 = x3d.MetadataString()
MetadataString96.setName("humanoidVersion")
MetadataString96.setValue(["Nancy V1.2b"])

MetadataSet95.setValue(MetadataString96)
MetadataString97 = x3d.MetadataString()
MetadataString97.setName("authorEmail")
MetadataString97.setValue(["cindy@ballreich.net"])

MetadataSet95.addValue(MetadataString97)
MetadataString98 = x3d.MetadataString()
MetadataString98.setName("authorName")
MetadataString98.setValue(["Cindy Ballreich"])

MetadataSet95.addValue(MetadataString98)
MetadataString99 = x3d.MetadataString()
MetadataString99.setName("copyright")
MetadataString99.setValue(["1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved."])

MetadataSet95.addValue(MetadataString99)
MetadataString100 = x3d.MetadataString()
MetadataString100.setName("creationDate")
MetadataString100.setValue(["Tue Dec 30 08:30:08 PST 1997"])

MetadataSet95.addValue(MetadataString100)
MetadataString101 = x3d.MetadataString()
MetadataString101.setName("usageRestrictions")
MetadataString101.setValue(["Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given."])

MetadataSet95.addValue(MetadataString101)

HAnimHumanoid94.setMetadata(MetadataSet95)
HAnimJoint102 = x3d.HAnimJoint()
HAnimJoint102.setName("humanoid_root")
HAnimJoint102.setDEF("hanim_humanoid_root")
HAnimJoint102.setCenter([0,0.824,0.0277])
HAnimJoint102.setStiffness([0,0,0])
HAnimSegment103 = x3d.HAnimSegment()
HAnimSegment103.setName("sacrum")
HAnimSegment103.setDEF("hanim_sacrum")
Transform104 = x3d.Transform()
Transform104.setTranslation([0,0.824,0.0277])
Shape105 = x3d.Shape()
Shape105.setDEF("DiamondShape")
IndexedFaceSet106 = x3d.IndexedFaceSet()
IndexedFaceSet106.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet106.setCreaseAngle(0.5)
Coordinate107 = x3d.Coordinate()
Coordinate107.setDEF("points")
Coordinate107.setPoint([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])

IndexedFaceSet106.setCoord(Coordinate107)

Shape105.setGeometry(IndexedFaceSet106)
Appearance108 = x3d.Appearance()
Material109 = x3d.Material()
Material109.setDEF("ROOT_COLOR")
Material109.setDiffuseColor([1,1,1])

Appearance108.setMaterial(Material109)

Shape105.setAppearance(Appearance108)

Transform104.addChildren(Shape105)
Transform110 = x3d.Transform()
Transform110.setTranslation([0,0.01,0])
Billboard111 = x3d.Billboard()
Shape112 = x3d.Shape()
Text113 = x3d.Text()
Text113.setString(["Humanoid Root"])
FontStyle114 = x3d.FontStyle()
FontStyle114.setFamily(["SANS"])
FontStyle114.setSize(0.01)
FontStyle114.setStyle("ITALIC")

Text113.setFontStyle(FontStyle114)

Shape112.setGeometry(Text113)
Appearance115 = x3d.Appearance()
Material116 = x3d.Material()
Material116.setDiffuseColor([0.039216,1,0.568627])

Appearance115.setMaterial(Material116)

Shape112.setAppearance(Appearance115)

Billboard111.addChildren(Shape112)

Transform110.addChildren(Billboard111)

Transform104.addChildren(Transform110)

HAnimSegment103.addChildren(Transform104)

HAnimJoint102.addChildren(HAnimSegment103)
HAnimJoint117 = x3d.HAnimJoint()
HAnimJoint117.setName("sacroiliac")
HAnimJoint117.setDEF("hanim_sacroiliac")
HAnimJoint117.setCenter([0,0.9149,0.0016])
HAnimJoint117.setStiffness([0,0,0])
HAnimSegment118 = x3d.HAnimSegment()
HAnimSegment118.setName("pelvis")
HAnimSegment118.setDEF("hanim_pelvis")
Transform119 = x3d.Transform()
Transform119.setDEF("sacroiliacPos")
Transform119.setTranslation([0,0.9149,0.0016])
Shape120 = x3d.Shape()
IndexedFaceSet121 = x3d.IndexedFaceSet()
IndexedFaceSet121.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet121.setCreaseAngle(0.5)
Coordinate122 = x3d.Coordinate()
Coordinate122.setUSE("points")

IndexedFaceSet121.setCoord(Coordinate122)

Shape120.setGeometry(IndexedFaceSet121)
Appearance123 = x3d.Appearance()
Material124 = x3d.Material()
Material124.setUSE("MIN_COLOR")

Appearance123.setMaterial(Material124)

Shape120.setAppearance(Appearance123)

Transform119.addChildren(Shape120)

HAnimSegment118.addChildren(Transform119)
HAnimSite125 = x3d.HAnimSite()
HAnimSite125.setName("r_iliocristale_pt")
HAnimSite125.setDEF("hanim_r_iliocristale_pt")
HAnimSite125.setTranslation([-0.1525,1.0628,0.0035])
Shape126 = x3d.Shape()
IndexedFaceSet127 = x3d.IndexedFaceSet()
IndexedFaceSet127.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet127.setCreaseAngle(0.5)
Coordinate128 = x3d.Coordinate()
Coordinate128.setUSE("points")

IndexedFaceSet127.setCoord(Coordinate128)

Shape126.setGeometry(IndexedFaceSet127)
Appearance129 = x3d.Appearance()
Material130 = x3d.Material()
Material130.setUSE("SITE_COLOR")

Appearance129.setMaterial(Material130)

Shape126.setAppearance(Appearance129)

HAnimSite125.addChildren(Shape126)

HAnimSegment118.addChildren(HAnimSite125)
HAnimSite131 = x3d.HAnimSite()
HAnimSite131.setName("r_trochanterion_pt")
HAnimSite131.setDEF("hanim_r_trochanterion_pt")
HAnimSite131.setTranslation([-0.1689,0.8419,0.0352])
Shape132 = x3d.Shape()
IndexedFaceSet133 = x3d.IndexedFaceSet()
IndexedFaceSet133.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet133.setCreaseAngle(0.5)
Coordinate134 = x3d.Coordinate()
Coordinate134.setUSE("points")

IndexedFaceSet133.setCoord(Coordinate134)

Shape132.setGeometry(IndexedFaceSet133)
Appearance135 = x3d.Appearance()
Material136 = x3d.Material()
Material136.setUSE("SITE_COLOR")

Appearance135.setMaterial(Material136)

Shape132.setAppearance(Appearance135)

HAnimSite131.addChildren(Shape132)

HAnimSegment118.addChildren(HAnimSite131)
HAnimSite137 = x3d.HAnimSite()
HAnimSite137.setName("l_iliocristale_pt")
HAnimSite137.setDEF("hanim_l_iliocristale_pt")
HAnimSite137.setTranslation([0.1612,1.0537,0.0008])
Shape138 = x3d.Shape()
IndexedFaceSet139 = x3d.IndexedFaceSet()
IndexedFaceSet139.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet139.setCreaseAngle(0.5)
Coordinate140 = x3d.Coordinate()
Coordinate140.setUSE("points")

IndexedFaceSet139.setCoord(Coordinate140)

Shape138.setGeometry(IndexedFaceSet139)
Appearance141 = x3d.Appearance()
Material142 = x3d.Material()
Material142.setUSE("SITE_COLOR")

Appearance141.setMaterial(Material142)

Shape138.setAppearance(Appearance141)

HAnimSite137.addChildren(Shape138)

HAnimSegment118.addChildren(HAnimSite137)
HAnimSite143 = x3d.HAnimSite()
HAnimSite143.setName("l_trochanterion_pt")
HAnimSite143.setDEF("hanim_l_trochanterion_pt")
HAnimSite143.setTranslation([0.1677,0.8336,0.0303])
Shape144 = x3d.Shape()
IndexedFaceSet145 = x3d.IndexedFaceSet()
IndexedFaceSet145.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet145.setCreaseAngle(0.5)
Coordinate146 = x3d.Coordinate()
Coordinate146.setUSE("points")

IndexedFaceSet145.setCoord(Coordinate146)

Shape144.setGeometry(IndexedFaceSet145)
Appearance147 = x3d.Appearance()
Material148 = x3d.Material()
Material148.setUSE("SITE_COLOR")

Appearance147.setMaterial(Material148)

Shape144.setAppearance(Appearance147)

HAnimSite143.addChildren(Shape144)

HAnimSegment118.addChildren(HAnimSite143)
HAnimSite149 = x3d.HAnimSite()
HAnimSite149.setName("r_asis_pt")
HAnimSite149.setDEF("hanim_r_asis_pt")
HAnimSite149.setTranslation([-0.0887,1.0021,0.1112])
Shape150 = x3d.Shape()
IndexedFaceSet151 = x3d.IndexedFaceSet()
IndexedFaceSet151.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet151.setCreaseAngle(0.5)
Coordinate152 = x3d.Coordinate()
Coordinate152.setUSE("points")

IndexedFaceSet151.setCoord(Coordinate152)

Shape150.setGeometry(IndexedFaceSet151)
Appearance153 = x3d.Appearance()
Material154 = x3d.Material()
Material154.setUSE("SITE_COLOR")

Appearance153.setMaterial(Material154)

Shape150.setAppearance(Appearance153)

HAnimSite149.addChildren(Shape150)

HAnimSegment118.addChildren(HAnimSite149)
HAnimSite155 = x3d.HAnimSite()
HAnimSite155.setName("l_asis_pt")
HAnimSite155.setDEF("hanim_l_asis_pt")
HAnimSite155.setTranslation([0.0925,0.9983,0.1052])
Shape156 = x3d.Shape()
IndexedFaceSet157 = x3d.IndexedFaceSet()
IndexedFaceSet157.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet157.setCreaseAngle(0.5)
Coordinate158 = x3d.Coordinate()
Coordinate158.setUSE("points")

IndexedFaceSet157.setCoord(Coordinate158)

Shape156.setGeometry(IndexedFaceSet157)
Appearance159 = x3d.Appearance()
Material160 = x3d.Material()
Material160.setUSE("SITE_COLOR")

Appearance159.setMaterial(Material160)

Shape156.setAppearance(Appearance159)

HAnimSite155.addChildren(Shape156)

HAnimSegment118.addChildren(HAnimSite155)
HAnimSite161 = x3d.HAnimSite()
HAnimSite161.setName("r_psis_pt")
HAnimSite161.setDEF("hanim_r_psis_pt")
HAnimSite161.setTranslation([-0.0716,1.019,-0.1138])
Shape162 = x3d.Shape()
IndexedFaceSet163 = x3d.IndexedFaceSet()
IndexedFaceSet163.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet163.setCreaseAngle(0.5)
Coordinate164 = x3d.Coordinate()
Coordinate164.setUSE("points")

IndexedFaceSet163.setCoord(Coordinate164)

Shape162.setGeometry(IndexedFaceSet163)
Appearance165 = x3d.Appearance()
Material166 = x3d.Material()
Material166.setUSE("SITE_COLOR")

Appearance165.setMaterial(Material166)

Shape162.setAppearance(Appearance165)

HAnimSite161.addChildren(Shape162)

HAnimSegment118.addChildren(HAnimSite161)
HAnimSite167 = x3d.HAnimSite()
HAnimSite167.setName("l_psis_pt")
HAnimSite167.setDEF("hanim_l_psis_pt")
HAnimSite167.setTranslation([0.0774,1.019,-0.1151])
Shape168 = x3d.Shape()
IndexedFaceSet169 = x3d.IndexedFaceSet()
IndexedFaceSet169.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet169.setCreaseAngle(0.5)
Coordinate170 = x3d.Coordinate()
Coordinate170.setUSE("points")

IndexedFaceSet169.setCoord(Coordinate170)

Shape168.setGeometry(IndexedFaceSet169)
Appearance171 = x3d.Appearance()
Material172 = x3d.Material()
Material172.setUSE("SITE_COLOR")

Appearance171.setMaterial(Material172)

Shape168.setAppearance(Appearance171)

HAnimSite167.addChildren(Shape168)

HAnimSegment118.addChildren(HAnimSite167)
HAnimSite173 = x3d.HAnimSite()
HAnimSite173.setName("crotch_pt")
HAnimSite173.setDEF("hanim_crotch_pt")
HAnimSite173.setTranslation([0.0034,0.8266,0.0257])
Shape174 = x3d.Shape()
IndexedFaceSet175 = x3d.IndexedFaceSet()
IndexedFaceSet175.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet175.setCreaseAngle(0.5)
Coordinate176 = x3d.Coordinate()
Coordinate176.setUSE("points")

IndexedFaceSet175.setCoord(Coordinate176)

Shape174.setGeometry(IndexedFaceSet175)
Appearance177 = x3d.Appearance()
Material178 = x3d.Material()
Material178.setUSE("SITE_COLOR")

Appearance177.setMaterial(Material178)

Shape174.setAppearance(Appearance177)

HAnimSite173.addChildren(Shape174)

HAnimSegment118.addChildren(HAnimSite173)

HAnimJoint117.addChildren(HAnimSegment118)
HAnimJoint179 = x3d.HAnimJoint()
HAnimJoint179.setName("l_hip")
HAnimJoint179.setDEF("hanim_l_hip")
HAnimJoint179.setCenter([0.0961,0.9124,-0.0001])
HAnimJoint179.setStiffness([0,0,0])
HAnimSegment180 = x3d.HAnimSegment()
HAnimSegment180.setName("l_thigh")
HAnimSegment180.setDEF("hanim_l_thigh")
Transform181 = x3d.Transform()
Transform181.setTranslation([0.0961,0.9124,-0.0001])
Shape182 = x3d.Shape()
IndexedFaceSet183 = x3d.IndexedFaceSet()
IndexedFaceSet183.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet183.setCreaseAngle(0.5)
Coordinate184 = x3d.Coordinate()
Coordinate184.setUSE("points")

IndexedFaceSet183.setCoord(Coordinate184)

Shape182.setGeometry(IndexedFaceSet183)
Appearance185 = x3d.Appearance()
Material186 = x3d.Material()
Material186.setUSE("MIN_COLOR")

Appearance185.setMaterial(Material186)

Shape182.setAppearance(Appearance185)

Transform181.addChildren(Shape182)

HAnimSegment180.addChildren(Transform181)
HAnimSite187 = x3d.HAnimSite()
HAnimSite187.setName("l_knee_crease_pt")
HAnimSite187.setDEF("hanim_l_knee_crease_pt")
HAnimSite187.setTranslation([0.0993,0.4881,-0.0309])
Shape188 = x3d.Shape()
IndexedFaceSet189 = x3d.IndexedFaceSet()
IndexedFaceSet189.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet189.setCreaseAngle(0.5)
Coordinate190 = x3d.Coordinate()
Coordinate190.setUSE("points")

IndexedFaceSet189.setCoord(Coordinate190)

Shape188.setGeometry(IndexedFaceSet189)
Appearance191 = x3d.Appearance()
Material192 = x3d.Material()
Material192.setUSE("SITE_COLOR")

Appearance191.setMaterial(Material192)

Shape188.setAppearance(Appearance191)

HAnimSite187.addChildren(Shape188)

HAnimSegment180.addChildren(HAnimSite187)
HAnimSite193 = x3d.HAnimSite()
HAnimSite193.setName("l_femoral_lateral_epicondyle_pt")
HAnimSite193.setDEF("hanim_l_femoral_lateral_epicondyle_pt")
HAnimSite193.setTranslation([0.1598,0.4967,0.0297])
Shape194 = x3d.Shape()
IndexedFaceSet195 = x3d.IndexedFaceSet()
IndexedFaceSet195.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet195.setCreaseAngle(0.5)
Coordinate196 = x3d.Coordinate()
Coordinate196.setUSE("points")

IndexedFaceSet195.setCoord(Coordinate196)

Shape194.setGeometry(IndexedFaceSet195)
Appearance197 = x3d.Appearance()
Material198 = x3d.Material()
Material198.setUSE("SITE_COLOR")

Appearance197.setMaterial(Material198)

Shape194.setAppearance(Appearance197)

HAnimSite193.addChildren(Shape194)

HAnimSegment180.addChildren(HAnimSite193)
HAnimSite199 = x3d.HAnimSite()
HAnimSite199.setName("l_femoral_medial_epicondyle_pt")
HAnimSite199.setDEF("hanim_l_femoral_medial_epicondyle_pt")
HAnimSite199.setTranslation([0.0398,0.4946,0.0303])
Shape200 = x3d.Shape()
IndexedFaceSet201 = x3d.IndexedFaceSet()
IndexedFaceSet201.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet201.setCreaseAngle(0.5)
Coordinate202 = x3d.Coordinate()
Coordinate202.setUSE("points")

IndexedFaceSet201.setCoord(Coordinate202)

Shape200.setGeometry(IndexedFaceSet201)
Appearance203 = x3d.Appearance()
Material204 = x3d.Material()
Material204.setUSE("SITE_COLOR")

Appearance203.setMaterial(Material204)

Shape200.setAppearance(Appearance203)

HAnimSite199.addChildren(Shape200)

HAnimSegment180.addChildren(HAnimSite199)

HAnimJoint179.addChildren(HAnimSegment180)
HAnimJoint205 = x3d.HAnimJoint()
HAnimJoint205.setName("l_knee")
HAnimJoint205.setDEF("hanim_l_knee")
HAnimJoint205.setCenter([0.104,0.4867,0.0308])
HAnimJoint205.setStiffness([0,0,0])
HAnimSegment206 = x3d.HAnimSegment()
HAnimSegment206.setName("l_calf")
HAnimSegment206.setDEF("hanim_l_calf")
Transform207 = x3d.Transform()
Transform207.setTranslation([0.104,0.4867,0.0308])
Shape208 = x3d.Shape()
IndexedFaceSet209 = x3d.IndexedFaceSet()
IndexedFaceSet209.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet209.setCreaseAngle(0.5)
Coordinate210 = x3d.Coordinate()
Coordinate210.setUSE("points")

IndexedFaceSet209.setCoord(Coordinate210)

Shape208.setGeometry(IndexedFaceSet209)
Appearance211 = x3d.Appearance()
Material212 = x3d.Material()
Material212.setUSE("MIN_COLOR")

Appearance211.setMaterial(Material212)

Shape208.setAppearance(Appearance211)

Transform207.addChildren(Shape208)

HAnimSegment206.addChildren(Transform207)

HAnimJoint205.addChildren(HAnimSegment206)
HAnimJoint213 = x3d.HAnimJoint()
HAnimJoint213.setName("l_talocrural")
HAnimJoint213.setDEF("hanim_l_talocrural")
HAnimJoint213.setCenter([0.1101,0.0656,-0.0736])
HAnimJoint213.setStiffness([0,0,0])
HAnimSegment214 = x3d.HAnimSegment()
HAnimSegment214.setName("l_talus")
HAnimSegment214.setDEF("hanim_l_talus")
Transform215 = x3d.Transform()
Transform215.setTranslation([0.1101,0.0656,-0.0736])
Shape216 = x3d.Shape()
IndexedFaceSet217 = x3d.IndexedFaceSet()
IndexedFaceSet217.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet217.setCreaseAngle(0.5)
Coordinate218 = x3d.Coordinate()
Coordinate218.setUSE("points")

IndexedFaceSet217.setCoord(Coordinate218)

Shape216.setGeometry(IndexedFaceSet217)
Appearance219 = x3d.Appearance()
Material220 = x3d.Material()
Material220.setUSE("MIN_COLOR")

Appearance219.setMaterial(Material220)

Shape216.setAppearance(Appearance219)

Transform215.addChildren(Shape216)

HAnimSegment214.addChildren(Transform215)
HAnimSite221 = x3d.HAnimSite()
HAnimSite221.setName("l_lateral_malleolus_pt")
HAnimSite221.setDEF("hanim_l_lateral_malleolus_pt")
HAnimSite221.setTranslation([0.1308,0.0597,-0.1032])
Shape222 = x3d.Shape()
IndexedFaceSet223 = x3d.IndexedFaceSet()
IndexedFaceSet223.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet223.setCreaseAngle(0.5)
Coordinate224 = x3d.Coordinate()
Coordinate224.setUSE("points")

IndexedFaceSet223.setCoord(Coordinate224)

Shape222.setGeometry(IndexedFaceSet223)
Appearance225 = x3d.Appearance()
Material226 = x3d.Material()
Material226.setUSE("HAND_FEET_COLOR")

Appearance225.setMaterial(Material226)

Shape222.setAppearance(Appearance225)

HAnimSite221.addChildren(Shape222)

HAnimSegment214.addChildren(HAnimSite221)
HAnimSite227 = x3d.HAnimSite()
HAnimSite227.setName("l_medial_malleolus_pt")
HAnimSite227.setDEF("hanim_l_medial_malleolus_pt")
HAnimSite227.setTranslation([0.089,0.0716,-0.0881])
Shape228 = x3d.Shape()
IndexedFaceSet229 = x3d.IndexedFaceSet()
IndexedFaceSet229.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet229.setCreaseAngle(0.5)
Coordinate230 = x3d.Coordinate()
Coordinate230.setUSE("points")

IndexedFaceSet229.setCoord(Coordinate230)

Shape228.setGeometry(IndexedFaceSet229)
Appearance231 = x3d.Appearance()
Material232 = x3d.Material()
Material232.setUSE("HAND_FEET_COLOR")

Appearance231.setMaterial(Material232)

Shape228.setAppearance(Appearance231)

HAnimSite227.addChildren(Shape228)

HAnimSegment214.addChildren(HAnimSite227)
HAnimSite233 = x3d.HAnimSite()
HAnimSite233.setName("l_sphyrion_pt")
HAnimSite233.setDEF("hanim_l_sphyrion_pt")
HAnimSite233.setTranslation([0.089,0.0575,-0.0943])
Shape234 = x3d.Shape()
IndexedFaceSet235 = x3d.IndexedFaceSet()
IndexedFaceSet235.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet235.setCreaseAngle(0.5)
Coordinate236 = x3d.Coordinate()
Coordinate236.setUSE("points")

IndexedFaceSet235.setCoord(Coordinate236)

Shape234.setGeometry(IndexedFaceSet235)
Appearance237 = x3d.Appearance()
Material238 = x3d.Material()
Material238.setUSE("HAND_FEET_COLOR")

Appearance237.setMaterial(Material238)

Shape234.setAppearance(Appearance237)

HAnimSite233.addChildren(Shape234)

HAnimSegment214.addChildren(HAnimSite233)
HAnimSite239 = x3d.HAnimSite()
HAnimSite239.setName("l_calcaneus_posterior_pt")
HAnimSite239.setDEF("hanim_l_calcaneus_posterior_pt")
HAnimSite239.setTranslation([0.0974,0.0259,-0.1171])
Shape240 = x3d.Shape()
IndexedFaceSet241 = x3d.IndexedFaceSet()
IndexedFaceSet241.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet241.setCreaseAngle(0.5)
Coordinate242 = x3d.Coordinate()
Coordinate242.setUSE("points")

IndexedFaceSet241.setCoord(Coordinate242)

Shape240.setGeometry(IndexedFaceSet241)
Appearance243 = x3d.Appearance()
Material244 = x3d.Material()
Material244.setUSE("HAND_FEET_COLOR")

Appearance243.setMaterial(Material244)

Shape240.setAppearance(Appearance243)

HAnimSite239.addChildren(Shape240)

HAnimSegment214.addChildren(HAnimSite239)

HAnimJoint213.addChildren(HAnimSegment214)
HAnimJoint245 = x3d.HAnimJoint()
HAnimJoint245.setName("l_tarsometatarsal_2")
HAnimJoint245.setDEF("hanim_l_tarsometatarsal_2")
HAnimJoint245.setCenter([0.1086,0.0001,-0.0368])
HAnimJoint245.setStiffness([0,0,0])
HAnimSegment246 = x3d.HAnimSegment()
HAnimSegment246.setName("l_metatarsal_2")
HAnimSegment246.setDEF("hanim_l_metatarsal_2")
Transform247 = x3d.Transform()
Transform247.setTranslation([0.1086,0.0001,-0.0368])
Shape248 = x3d.Shape()
IndexedFaceSet249 = x3d.IndexedFaceSet()
IndexedFaceSet249.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet249.setCreaseAngle(0.5)
Coordinate250 = x3d.Coordinate()
Coordinate250.setUSE("points")

IndexedFaceSet249.setCoord(Coordinate250)

Shape248.setGeometry(IndexedFaceSet249)
Appearance251 = x3d.Appearance()
Material252 = x3d.Material()
Material252.setUSE("MIN_COLOR")

Appearance251.setMaterial(Material252)

Shape248.setAppearance(Appearance251)

Transform247.addChildren(Shape248)

HAnimSegment246.addChildren(Transform247)

HAnimJoint245.addChildren(HAnimSegment246)
HAnimJoint253 = x3d.HAnimJoint()
HAnimJoint253.setName("l_metatarsophalangeal_2")
HAnimJoint253.setDEF("hanim_l_metatarsophalangeal_2")
HAnimJoint253.setCenter([0.1086,0.0001,0.0368])
HAnimJoint253.setStiffness([0,0,0])
HAnimSegment254 = x3d.HAnimSegment()
HAnimSegment254.setName("l_tarsal_proximal_phalanx_2")
HAnimSegment254.setDEF("hanim_l_tarsal_proximal_phalanx_2")
Transform255 = x3d.Transform()
Transform255.setTranslation([0.1086,0.0001,0.0368])
Shape256 = x3d.Shape()
IndexedFaceSet257 = x3d.IndexedFaceSet()
IndexedFaceSet257.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet257.setCreaseAngle(0.5)
Coordinate258 = x3d.Coordinate()
Coordinate258.setUSE("points")

IndexedFaceSet257.setCoord(Coordinate258)

Shape256.setGeometry(IndexedFaceSet257)
Appearance259 = x3d.Appearance()
Material260 = x3d.Material()
Material260.setUSE("JOINT_COLOR")

Appearance259.setMaterial(Material260)

Shape256.setAppearance(Appearance259)

Transform255.addChildren(Shape256)

HAnimSegment254.addChildren(Transform255)
HAnimSite261 = x3d.HAnimSite()
HAnimSite261.setName("l_middistal_tip")
HAnimSite261.setDEF("hanim_l_middistal_tip")
HAnimSite261.setTranslation([0.1354,0.0016,0.1476])
Shape262 = x3d.Shape()
IndexedFaceSet263 = x3d.IndexedFaceSet()
IndexedFaceSet263.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet263.setCreaseAngle(0.5)
Coordinate264 = x3d.Coordinate()
Coordinate264.setUSE("points")

IndexedFaceSet263.setCoord(Coordinate264)

Shape262.setGeometry(IndexedFaceSet263)
Appearance265 = x3d.Appearance()
Material266 = x3d.Material()
Material266.setUSE("HAND_FEET_COLOR")

Appearance265.setMaterial(Material266)

Shape262.setAppearance(Appearance265)

HAnimSite261.addChildren(Shape262)

HAnimSegment254.addChildren(HAnimSite261)
HAnimSite267 = x3d.HAnimSite()
HAnimSite267.setName("l_metatarsal_phalanx_1_pt")
HAnimSite267.setDEF("hanim_l_metatarsal_phalanx_1_pt")
HAnimSite267.setTranslation([0.0816,0.0232,0.0106])
Shape268 = x3d.Shape()
IndexedFaceSet269 = x3d.IndexedFaceSet()
IndexedFaceSet269.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet269.setCreaseAngle(0.5)
Coordinate270 = x3d.Coordinate()
Coordinate270.setUSE("points")

IndexedFaceSet269.setCoord(Coordinate270)

Shape268.setGeometry(IndexedFaceSet269)
Appearance271 = x3d.Appearance()
Material272 = x3d.Material()
Material272.setUSE("HAND_FEET_COLOR")

Appearance271.setMaterial(Material272)

Shape268.setAppearance(Appearance271)

HAnimSite267.addChildren(Shape268)

HAnimSegment254.addChildren(HAnimSite267)

HAnimJoint253.addChildren(HAnimSegment254)
HAnimJoint273 = x3d.HAnimJoint()
HAnimJoint273.setName("l_tarsal_distal_interphalangeal_2")
HAnimJoint273.setDEF("hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint273.setCenter([0.1086,0,0.0762])
HAnimJoint273.setStiffness([0,0,0])
HAnimSegment274 = x3d.HAnimSegment()
HAnimSegment274.setName("l_tarsal_distal_phalanx_2")
HAnimSegment274.setDEF("hanim_l_tarsal_distal_phalanx_2")
Transform275 = x3d.Transform()
Transform275.setTranslation([0.1086,0,0.0762])
Shape276 = x3d.Shape()
IndexedFaceSet277 = x3d.IndexedFaceSet()
IndexedFaceSet277.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet277.setCreaseAngle(0.5)
Coordinate278 = x3d.Coordinate()
Coordinate278.setUSE("points")

IndexedFaceSet277.setCoord(Coordinate278)

Shape276.setGeometry(IndexedFaceSet277)
Appearance279 = x3d.Appearance()
Material280 = x3d.Material()
Material280.setUSE("JOINT_COLOR")

Appearance279.setMaterial(Material280)

Shape276.setAppearance(Appearance279)

Transform275.addChildren(Shape276)

HAnimSegment274.addChildren(Transform275)
HAnimSite281 = x3d.HAnimSite()
HAnimSite281.setName("l_forefoot_tip")
HAnimSite281.setDEF("hanim_l_forefoot_tip")
HAnimSite281.setTranslation([0.1354,0.0016,0.1476])
Shape282 = x3d.Shape()
IndexedFaceSet283 = x3d.IndexedFaceSet()
IndexedFaceSet283.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet283.setCreaseAngle(0.5)
Coordinate284 = x3d.Coordinate()
Coordinate284.setUSE("points")

IndexedFaceSet283.setCoord(Coordinate284)

Shape282.setGeometry(IndexedFaceSet283)
Appearance285 = x3d.Appearance()
Material286 = x3d.Material()
Material286.setUSE("HAND_FEET_COLOR")

Appearance285.setMaterial(Material286)

Shape282.setAppearance(Appearance285)

HAnimSite281.addChildren(Shape282)

HAnimSegment274.addChildren(HAnimSite281)
HAnimSite287 = x3d.HAnimSite()
HAnimSite287.setName("l_metatarsal_phalanx_5_pt")
HAnimSite287.setDEF("hanim_l_metatarsal_phalanx_5_pt")
HAnimSite287.setTranslation([0.1825,0.007,0.0928])
## CAESAR Feature Point #66
Shape288 = x3d.Shape()
IndexedFaceSet289 = x3d.IndexedFaceSet()
IndexedFaceSet289.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet289.setCreaseAngle(0.5)
Coordinate290 = x3d.Coordinate()
Coordinate290.setUSE("points")

IndexedFaceSet289.setCoord(Coordinate290)

Shape288.setGeometry(IndexedFaceSet289)
Appearance291 = x3d.Appearance()
Material292 = x3d.Material()
Material292.setUSE("HAND_FEET_COLOR")

Appearance291.setMaterial(Material292)

Shape288.setAppearance(Appearance291)

HAnimSite287.addChildren(Shape288)

HAnimSegment274.addChildren(HAnimSite287)
HAnimSite293 = x3d.HAnimSite()
HAnimSite293.setName("l_tarsal_distal_phalanx_2_pt")
HAnimSite293.setDEF("hanim_l_tarsal_distal_phalanx_2_pt")
HAnimSite293.setTranslation([0.1195,0.0079,0.1433])
## CAESAR Feature Point #72
Shape294 = x3d.Shape()
IndexedFaceSet295 = x3d.IndexedFaceSet()
IndexedFaceSet295.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet295.setCreaseAngle(0.5)
Coordinate296 = x3d.Coordinate()
Coordinate296.setUSE("points")

IndexedFaceSet295.setCoord(Coordinate296)

Shape294.setGeometry(IndexedFaceSet295)
Appearance297 = x3d.Appearance()
Material298 = x3d.Material()
Material298.setUSE("HAND_FEET_COLOR")

Appearance297.setMaterial(Material298)

Shape294.setAppearance(Appearance297)

HAnimSite293.addChildren(Shape294)

HAnimSegment274.addChildren(HAnimSite293)

HAnimJoint273.addChildren(HAnimSegment274)

HAnimJoint253.addChildren(HAnimJoint273)

HAnimJoint245.addChildren(HAnimJoint253)

HAnimJoint213.addChildren(HAnimJoint245)

HAnimJoint205.addChildren(HAnimJoint213)

HAnimJoint179.addChildren(HAnimJoint205)

HAnimJoint117.addChildren(HAnimJoint179)
HAnimJoint299 = x3d.HAnimJoint()
HAnimJoint299.setName("r_hip")
HAnimJoint299.setDEF("hanim_r_hip")
HAnimJoint299.setCenter([-0.095,0.9171,0.0029])
HAnimJoint299.setStiffness([0,0,0])
HAnimSegment300 = x3d.HAnimSegment()
HAnimSegment300.setName("r_thigh")
HAnimSegment300.setDEF("hanim_r_thigh")
Transform301 = x3d.Transform()
Transform301.setTranslation([-0.095,0.9171,0.0029])
Shape302 = x3d.Shape()
IndexedFaceSet303 = x3d.IndexedFaceSet()
IndexedFaceSet303.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet303.setCreaseAngle(0.5)
Coordinate304 = x3d.Coordinate()
Coordinate304.setUSE("points")

IndexedFaceSet303.setCoord(Coordinate304)

Shape302.setGeometry(IndexedFaceSet303)
Appearance305 = x3d.Appearance()
Material306 = x3d.Material()
Material306.setUSE("MIN_COLOR")

Appearance305.setMaterial(Material306)

Shape302.setAppearance(Appearance305)

Transform301.addChildren(Shape302)

HAnimSegment300.addChildren(Transform301)
HAnimSite307 = x3d.HAnimSite()
HAnimSite307.setName("r_knee_crease_pt")
HAnimSite307.setDEF("hanim_r_knee_crease_pt")
HAnimSite307.setTranslation([-0.0825,0.4932,-0.0326])
Shape308 = x3d.Shape()
IndexedFaceSet309 = x3d.IndexedFaceSet()
IndexedFaceSet309.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet309.setCreaseAngle(0.5)
Coordinate310 = x3d.Coordinate()
Coordinate310.setUSE("points")

IndexedFaceSet309.setCoord(Coordinate310)

Shape308.setGeometry(IndexedFaceSet309)
Appearance311 = x3d.Appearance()
Material312 = x3d.Material()
Material312.setUSE("SITE_COLOR")

Appearance311.setMaterial(Material312)

Shape308.setAppearance(Appearance311)

HAnimSite307.addChildren(Shape308)

HAnimSegment300.addChildren(HAnimSite307)
HAnimSite313 = x3d.HAnimSite()
HAnimSite313.setName("r_femoral_lateral_epicondyle_pt")
HAnimSite313.setDEF("hanim_r_femoral_lateral_epicondyle_pt")
HAnimSite313.setTranslation([-0.1421,0.4992,0.031])
Shape314 = x3d.Shape()
IndexedFaceSet315 = x3d.IndexedFaceSet()
IndexedFaceSet315.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet315.setCreaseAngle(0.5)
Coordinate316 = x3d.Coordinate()
Coordinate316.setUSE("points")

IndexedFaceSet315.setCoord(Coordinate316)

Shape314.setGeometry(IndexedFaceSet315)
Appearance317 = x3d.Appearance()
Material318 = x3d.Material()
Material318.setUSE("SITE_COLOR")

Appearance317.setMaterial(Material318)

Shape314.setAppearance(Appearance317)

HAnimSite313.addChildren(Shape314)

HAnimSegment300.addChildren(HAnimSite313)
HAnimSite319 = x3d.HAnimSite()
HAnimSite319.setName("r_femoral_medial_epicondyle_pt")
HAnimSite319.setDEF("hanim_r_femoral_medial_epicondyle_pt")
HAnimSite319.setTranslation([-0.0221,0.5014,0.0289])
Shape320 = x3d.Shape()
IndexedFaceSet321 = x3d.IndexedFaceSet()
IndexedFaceSet321.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet321.setCreaseAngle(0.5)
Coordinate322 = x3d.Coordinate()
Coordinate322.setUSE("points")

IndexedFaceSet321.setCoord(Coordinate322)

Shape320.setGeometry(IndexedFaceSet321)
Appearance323 = x3d.Appearance()
Material324 = x3d.Material()
Material324.setUSE("SITE_COLOR")

Appearance323.setMaterial(Material324)

Shape320.setAppearance(Appearance323)

HAnimSite319.addChildren(Shape320)

HAnimSegment300.addChildren(HAnimSite319)

HAnimJoint299.addChildren(HAnimSegment300)
HAnimJoint325 = x3d.HAnimJoint()
HAnimJoint325.setName("r_knee")
HAnimJoint325.setDEF("hanim_r_knee")
HAnimJoint325.setCenter([-0.0867,0.4913,0.0318])
HAnimJoint325.setStiffness([0,0,0])
HAnimSegment326 = x3d.HAnimSegment()
HAnimSegment326.setName("r_calf")
HAnimSegment326.setDEF("hanim_r_calf")
Transform327 = x3d.Transform()
Transform327.setTranslation([-0.0867,0.4913,0.0318])
Shape328 = x3d.Shape()
IndexedFaceSet329 = x3d.IndexedFaceSet()
IndexedFaceSet329.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet329.setCreaseAngle(0.5)
Coordinate330 = x3d.Coordinate()
Coordinate330.setUSE("points")

IndexedFaceSet329.setCoord(Coordinate330)

Shape328.setGeometry(IndexedFaceSet329)
Appearance331 = x3d.Appearance()
Material332 = x3d.Material()
Material332.setUSE("SITE_COLOR")

Appearance331.setMaterial(Material332)

Shape328.setAppearance(Appearance331)

Transform327.addChildren(Shape328)

HAnimSegment326.addChildren(Transform327)

HAnimJoint325.addChildren(HAnimSegment326)
HAnimJoint333 = x3d.HAnimJoint()
HAnimJoint333.setName("r_talocrural")
HAnimJoint333.setDEF("hanim_r_talocrural")
HAnimJoint333.setCenter([-0.0801,0.0712,-0.0766])
HAnimJoint333.setStiffness([0,0,0])
HAnimSegment334 = x3d.HAnimSegment()
HAnimSegment334.setName("r_talus")
HAnimSegment334.setDEF("hanim_r_talus")
Transform335 = x3d.Transform()
Transform335.setTranslation([-0.0801,0.0712,-0.0766])
Shape336 = x3d.Shape()
IndexedFaceSet337 = x3d.IndexedFaceSet()
IndexedFaceSet337.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet337.setCreaseAngle(0.5)
Coordinate338 = x3d.Coordinate()
Coordinate338.setUSE("points")

IndexedFaceSet337.setCoord(Coordinate338)

Shape336.setGeometry(IndexedFaceSet337)
Appearance339 = x3d.Appearance()
Material340 = x3d.Material()
Material340.setUSE("MIN_COLOR")

Appearance339.setMaterial(Material340)

Shape336.setAppearance(Appearance339)

Transform335.addChildren(Shape336)

HAnimSegment334.addChildren(Transform335)
HAnimSite341 = x3d.HAnimSite()
HAnimSite341.setName("r_lateral_malleolus_pt")
HAnimSite341.setDEF("hanim_r_lateral_malleolus_pt")
HAnimSite341.setTranslation([-0.1006,0.0658,-0.1075])
Shape342 = x3d.Shape()
IndexedFaceSet343 = x3d.IndexedFaceSet()
IndexedFaceSet343.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet343.setCreaseAngle(0.5)
Coordinate344 = x3d.Coordinate()
Coordinate344.setUSE("points")

IndexedFaceSet343.setCoord(Coordinate344)

Shape342.setGeometry(IndexedFaceSet343)
Appearance345 = x3d.Appearance()
Material346 = x3d.Material()
Material346.setUSE("HAND_FEET_COLOR")

Appearance345.setMaterial(Material346)

Shape342.setAppearance(Appearance345)

HAnimSite341.addChildren(Shape342)

HAnimSegment334.addChildren(HAnimSite341)
HAnimSite347 = x3d.HAnimSite()
HAnimSite347.setName("r_medial_malleolus_pt")
HAnimSite347.setDEF("hanim_r_medial_malleolus_pt")
HAnimSite347.setTranslation([-0.0591,0.076,-0.0928])
Shape348 = x3d.Shape()
IndexedFaceSet349 = x3d.IndexedFaceSet()
IndexedFaceSet349.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet349.setCreaseAngle(0.5)
Coordinate350 = x3d.Coordinate()
Coordinate350.setUSE("points")

IndexedFaceSet349.setCoord(Coordinate350)

Shape348.setGeometry(IndexedFaceSet349)
Appearance351 = x3d.Appearance()
Material352 = x3d.Material()
Material352.setUSE("HAND_FEET_COLOR")

Appearance351.setMaterial(Material352)

Shape348.setAppearance(Appearance351)

HAnimSite347.addChildren(Shape348)

HAnimSegment334.addChildren(HAnimSite347)
HAnimSite353 = x3d.HAnimSite()
HAnimSite353.setName("r_sphyrion_pt")
HAnimSite353.setDEF("hanim_r_sphyrion_pt")
HAnimSite353.setTranslation([-0.0603,0.061,-0.1002])
Shape354 = x3d.Shape()
IndexedFaceSet355 = x3d.IndexedFaceSet()
IndexedFaceSet355.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet355.setCreaseAngle(0.5)
Coordinate356 = x3d.Coordinate()
Coordinate356.setUSE("points")

IndexedFaceSet355.setCoord(Coordinate356)

Shape354.setGeometry(IndexedFaceSet355)
Appearance357 = x3d.Appearance()
Material358 = x3d.Material()
Material358.setUSE("HAND_FEET_COLOR")

Appearance357.setMaterial(Material358)

Shape354.setAppearance(Appearance357)

HAnimSite353.addChildren(Shape354)

HAnimSegment334.addChildren(HAnimSite353)
HAnimSite359 = x3d.HAnimSite()
HAnimSite359.setName("r_calcaneus_posterior_pt")
HAnimSite359.setDEF("hanim_r_calcaneus_posterior_pt")
HAnimSite359.setTranslation([-0.0692,0.0297,-0.1221])
Shape360 = x3d.Shape()
IndexedFaceSet361 = x3d.IndexedFaceSet()
IndexedFaceSet361.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet361.setCreaseAngle(0.5)
Coordinate362 = x3d.Coordinate()
Coordinate362.setUSE("points")

IndexedFaceSet361.setCoord(Coordinate362)

Shape360.setGeometry(IndexedFaceSet361)
Appearance363 = x3d.Appearance()
Material364 = x3d.Material()
Material364.setUSE("HAND_FEET_COLOR")

Appearance363.setMaterial(Material364)

Shape360.setAppearance(Appearance363)

HAnimSite359.addChildren(Shape360)

HAnimSegment334.addChildren(HAnimSite359)

HAnimJoint333.addChildren(HAnimSegment334)
HAnimJoint365 = x3d.HAnimJoint()
HAnimJoint365.setName("r_metatarsophalangeal_2")
HAnimJoint365.setDEF("hanim_r_metatarsophalangeal_2")
HAnimJoint365.setCenter([-0.0801,0,0.0368])
HAnimJoint365.setStiffness([0,0,0])
HAnimSegment366 = x3d.HAnimSegment()
HAnimSegment366.setName("r_tarsal_proximal_phalanx_2")
HAnimSegment366.setDEF("hanim_r_tarsal_proximal_phalanx_2")
Transform367 = x3d.Transform()
Transform367.setTranslation([-0.0801,0,0.0368])
Shape368 = x3d.Shape()
IndexedFaceSet369 = x3d.IndexedFaceSet()
IndexedFaceSet369.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet369.setCreaseAngle(0.5)
Coordinate370 = x3d.Coordinate()
Coordinate370.setUSE("points")

IndexedFaceSet369.setCoord(Coordinate370)

Shape368.setGeometry(IndexedFaceSet369)
Appearance371 = x3d.Appearance()
Material372 = x3d.Material()
Material372.setUSE("JOINT_COLOR")

Appearance371.setMaterial(Material372)

Shape368.setAppearance(Appearance371)

Transform367.addChildren(Shape368)

HAnimSegment366.addChildren(Transform367)
HAnimSite373 = x3d.HAnimSite()
HAnimSite373.setName("r_middistal_tip")
HAnimSite373.setDEF("hanim_r_middistal_tip")
HAnimSite373.setTranslation([-0.1043,-0.0227,0.145])
Shape374 = x3d.Shape()
IndexedFaceSet375 = x3d.IndexedFaceSet()
IndexedFaceSet375.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet375.setCreaseAngle(0.5)
Coordinate376 = x3d.Coordinate()
Coordinate376.setUSE("points")

IndexedFaceSet375.setCoord(Coordinate376)

Shape374.setGeometry(IndexedFaceSet375)
Appearance377 = x3d.Appearance()
Material378 = x3d.Material()
Material378.setUSE("HAND_FEET_COLOR")

Appearance377.setMaterial(Material378)

Shape374.setAppearance(Appearance377)

HAnimSite373.addChildren(Shape374)

HAnimSegment366.addChildren(HAnimSite373)
HAnimSite379 = x3d.HAnimSite()
HAnimSite379.setName("r_metatarsal_phalanx_5_pt")
HAnimSite379.setDEF("hanim_r_metatarsal_phalanx_5_pt")
HAnimSite379.setTranslation([-0.1523,0.0166,0.0895])
Shape380 = x3d.Shape()
IndexedFaceSet381 = x3d.IndexedFaceSet()
IndexedFaceSet381.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet381.setCreaseAngle(0.5)
Coordinate382 = x3d.Coordinate()
Coordinate382.setUSE("points")

IndexedFaceSet381.setCoord(Coordinate382)

Shape380.setGeometry(IndexedFaceSet381)
Appearance383 = x3d.Appearance()
Material384 = x3d.Material()
Material384.setUSE("HAND_FEET_COLOR")

Appearance383.setMaterial(Material384)

Shape380.setAppearance(Appearance383)

HAnimSite379.addChildren(Shape380)

HAnimSegment366.addChildren(HAnimSite379)
HAnimSite385 = x3d.HAnimSite()
HAnimSite385.setName("r_metatarsal_phalanx_1_pt")
HAnimSite385.setDEF("hanim_r_metatarsal_phalanx_1_pt")
HAnimSite385.setTranslation([-0.0521,0.026,0.0127])
Shape386 = x3d.Shape()
IndexedFaceSet387 = x3d.IndexedFaceSet()
IndexedFaceSet387.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet387.setCreaseAngle(0.5)
Coordinate388 = x3d.Coordinate()
Coordinate388.setUSE("points")

IndexedFaceSet387.setCoord(Coordinate388)

Shape386.setGeometry(IndexedFaceSet387)
Appearance389 = x3d.Appearance()
Material390 = x3d.Material()
Material390.setUSE("HAND_FEET_COLOR")

Appearance389.setMaterial(Material390)

Shape386.setAppearance(Appearance389)

HAnimSite385.addChildren(Shape386)

HAnimSegment366.addChildren(HAnimSite385)
HAnimSite391 = x3d.HAnimSite()
HAnimSite391.setName("r_tarsal_distal_phalanx_2_pt")
HAnimSite391.setDEF("hanim_r_tarsal_distal_phalanx_2_pt")
HAnimSite391.setTranslation([-0.0883,0.0134,0.1383])
Shape392 = x3d.Shape()
IndexedFaceSet393 = x3d.IndexedFaceSet()
IndexedFaceSet393.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet393.setCreaseAngle(0.5)
Coordinate394 = x3d.Coordinate()
Coordinate394.setUSE("points")

IndexedFaceSet393.setCoord(Coordinate394)

Shape392.setGeometry(IndexedFaceSet393)
Appearance395 = x3d.Appearance()
Material396 = x3d.Material()
Material396.setUSE("HAND_FEET_COLOR")

Appearance395.setMaterial(Material396)

Shape392.setAppearance(Appearance395)

HAnimSite391.addChildren(Shape392)

HAnimSegment366.addChildren(HAnimSite391)

HAnimJoint365.addChildren(HAnimSegment366)

HAnimJoint333.addChildren(HAnimJoint365)

HAnimJoint325.addChildren(HAnimJoint333)

HAnimJoint299.addChildren(HAnimJoint325)

HAnimJoint117.addChildren(HAnimJoint299)

HAnimJoint102.addChildren(HAnimJoint117)
HAnimJoint397 = x3d.HAnimJoint()
HAnimJoint397.setName("vl5")
HAnimJoint397.setDEF("hanim_vl5")
HAnimJoint397.setCenter([0.0028,1.0568,-0.0776])
HAnimJoint397.setStiffness([0,0,0])
HAnimSegment398 = x3d.HAnimSegment()
HAnimSegment398.setName("l5")
HAnimSegment398.setDEF("hanim_l5")
Transform399 = x3d.Transform()
Transform399.setTranslation([0.0028,1.0568,-0.0776])
Shape400 = x3d.Shape()
IndexedFaceSet401 = x3d.IndexedFaceSet()
IndexedFaceSet401.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet401.setCreaseAngle(0.5)
Coordinate402 = x3d.Coordinate()
Coordinate402.setUSE("points")

IndexedFaceSet401.setCoord(Coordinate402)

Shape400.setGeometry(IndexedFaceSet401)
Appearance403 = x3d.Appearance()
Material404 = x3d.Material()
Material404.setUSE("REC_SPINAL_COLOR")

Appearance403.setMaterial(Material404)

Shape400.setAppearance(Appearance403)

Transform399.addChildren(Shape400)

HAnimSegment398.addChildren(Transform399)

HAnimJoint397.addChildren(HAnimSegment398)
HAnimJoint405 = x3d.HAnimJoint()
HAnimJoint405.setName("vl4")
HAnimJoint405.setDEF("hanim_vl4")
HAnimJoint405.setCenter([0.0035,1.0925,-0.0787])
HAnimJoint405.setStiffness([0,0,0])
HAnimSegment406 = x3d.HAnimSegment()
HAnimSegment406.setName("l4")
HAnimSegment406.setDEF("hanim_l4")
Transform407 = x3d.Transform()
Transform407.setTranslation([0.0035,1.0925,-0.0787])
Shape408 = x3d.Shape()
IndexedFaceSet409 = x3d.IndexedFaceSet()
IndexedFaceSet409.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet409.setCreaseAngle(0.5)
Coordinate410 = x3d.Coordinate()
Coordinate410.setUSE("points")

IndexedFaceSet409.setCoord(Coordinate410)

Shape408.setGeometry(IndexedFaceSet409)
Appearance411 = x3d.Appearance()
Material412 = x3d.Material()
Material412.setUSE("SPINAL_COLOR")

Appearance411.setMaterial(Material412)

Shape408.setAppearance(Appearance411)

Transform407.addChildren(Shape408)

HAnimSegment406.addChildren(Transform407)

HAnimJoint405.addChildren(HAnimSegment406)
HAnimJoint413 = x3d.HAnimJoint()
HAnimJoint413.setName("vl3")
HAnimJoint413.setDEF("hanim_vl3")
HAnimJoint413.setCenter([0.0041,1.1276,-0.0796])
HAnimJoint413.setStiffness([0,0,0])
HAnimSegment414 = x3d.HAnimSegment()
HAnimSegment414.setName("l3")
HAnimSegment414.setDEF("hanim_l3")
Transform415 = x3d.Transform()
Transform415.setTranslation([0.0041,1.1276,-0.0796])
Shape416 = x3d.Shape()
IndexedFaceSet417 = x3d.IndexedFaceSet()
IndexedFaceSet417.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet417.setCreaseAngle(0.5)
Coordinate418 = x3d.Coordinate()
Coordinate418.setUSE("points")

IndexedFaceSet417.setCoord(Coordinate418)

Shape416.setGeometry(IndexedFaceSet417)
Appearance419 = x3d.Appearance()
Material420 = x3d.Material()
Material420.setUSE("REC_SPINAL_COLOR")

Appearance419.setMaterial(Material420)

Shape416.setAppearance(Appearance419)

Transform415.addChildren(Shape416)

HAnimSegment414.addChildren(Transform415)

HAnimJoint413.addChildren(HAnimSegment414)
HAnimJoint421 = x3d.HAnimJoint()
HAnimJoint421.setName("vl2")
HAnimJoint421.setDEF("hanim_vl2")
HAnimJoint421.setCenter([0.0045,1.1546,-0.08])
HAnimJoint421.setStiffness([0,0,0])
HAnimSegment422 = x3d.HAnimSegment()
HAnimSegment422.setName("l2")
HAnimSegment422.setDEF("hanim_l2")
Transform423 = x3d.Transform()
Transform423.setTranslation([0.0045,1.1546,-0.08])
Shape424 = x3d.Shape()
IndexedFaceSet425 = x3d.IndexedFaceSet()
IndexedFaceSet425.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet425.setCreaseAngle(0.5)
Coordinate426 = x3d.Coordinate()
Coordinate426.setUSE("points")

IndexedFaceSet425.setCoord(Coordinate426)

Shape424.setGeometry(IndexedFaceSet425)
Appearance427 = x3d.Appearance()
Material428 = x3d.Material()
Material428.setUSE("SPINAL_COLOR")

Appearance427.setMaterial(Material428)

Shape424.setAppearance(Appearance427)

Transform423.addChildren(Shape424)

HAnimSegment422.addChildren(Transform423)

HAnimJoint421.addChildren(HAnimSegment422)
HAnimJoint429 = x3d.HAnimJoint()
HAnimJoint429.setName("vl1")
HAnimJoint429.setDEF("hanim_vl1")
HAnimJoint429.setCenter([0.0048,1.1912,-0.0805])
HAnimJoint429.setStiffness([0,0,0])
HAnimSegment430 = x3d.HAnimSegment()
HAnimSegment430.setName("l1")
HAnimSegment430.setDEF("hanim_l1")
Transform431 = x3d.Transform()
Transform431.setTranslation([0.0048,1.1912,-0.0805])
Shape432 = x3d.Shape()
IndexedFaceSet433 = x3d.IndexedFaceSet()
IndexedFaceSet433.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet433.setCreaseAngle(0.5)
Coordinate434 = x3d.Coordinate()
Coordinate434.setUSE("points")

IndexedFaceSet433.setCoord(Coordinate434)

Shape432.setGeometry(IndexedFaceSet433)
Appearance435 = x3d.Appearance()
Material436 = x3d.Material()
Material436.setUSE("REC_SPINAL_COLOR")

Appearance435.setMaterial(Material436)

Shape432.setAppearance(Appearance435)

Transform431.addChildren(Shape432)

HAnimSegment430.addChildren(Transform431)

HAnimJoint429.addChildren(HAnimSegment430)
HAnimJoint437 = x3d.HAnimJoint()
HAnimJoint437.setName("vt12")
HAnimJoint437.setDEF("hanim_vt12")
HAnimJoint437.setCenter([0.0051,1.2278,-0.0808])
HAnimJoint437.setStiffness([0,0,0])
HAnimSegment438 = x3d.HAnimSegment()
HAnimSegment438.setName("t12")
HAnimSegment438.setDEF("hanim_t12")
Transform439 = x3d.Transform()
Transform439.setTranslation([0.0051,1.2278,-0.0808])
Shape440 = x3d.Shape()
IndexedFaceSet441 = x3d.IndexedFaceSet()
IndexedFaceSet441.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet441.setCreaseAngle(0.5)
Coordinate442 = x3d.Coordinate()
Coordinate442.setUSE("points")

IndexedFaceSet441.setCoord(Coordinate442)

Shape440.setGeometry(IndexedFaceSet441)
Appearance443 = x3d.Appearance()
Material444 = x3d.Material()
Material444.setUSE("SPINAL_COLOR")

Appearance443.setMaterial(Material444)

Shape440.setAppearance(Appearance443)

Transform439.addChildren(Shape440)

HAnimSegment438.addChildren(Transform439)

HAnimJoint437.addChildren(HAnimSegment438)
HAnimJoint445 = x3d.HAnimJoint()
HAnimJoint445.setName("vt11")
HAnimJoint445.setDEF("hanim_vt11")
HAnimJoint445.setCenter([0.0053,1.2679,-0.081])
HAnimJoint445.setStiffness([0,0,0])
HAnimSegment446 = x3d.HAnimSegment()
HAnimSegment446.setName("t11")
HAnimSegment446.setDEF("hanim_t11")
Transform447 = x3d.Transform()
Transform447.setTranslation([0.0053,1.2679,-0.081])
Shape448 = x3d.Shape()
IndexedFaceSet449 = x3d.IndexedFaceSet()
IndexedFaceSet449.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet449.setCreaseAngle(0.5)
Coordinate450 = x3d.Coordinate()
Coordinate450.setUSE("points")

IndexedFaceSet449.setCoord(Coordinate450)

Shape448.setGeometry(IndexedFaceSet449)
Appearance451 = x3d.Appearance()
Material452 = x3d.Material()
Material452.setUSE("SPINAL_COLOR")

Appearance451.setMaterial(Material452)

Shape448.setAppearance(Appearance451)

Transform447.addChildren(Shape448)

HAnimSegment446.addChildren(Transform447)

HAnimJoint445.addChildren(HAnimSegment446)
HAnimJoint453 = x3d.HAnimJoint()
HAnimJoint453.setName("vt10")
HAnimJoint453.setDEF("hanim_vt10")
HAnimJoint453.setCenter([0.0056,1.2848,-0.0822])
HAnimJoint453.setStiffness([0,0,0])
HAnimSegment454 = x3d.HAnimSegment()
HAnimSegment454.setName("t10")
HAnimSegment454.setDEF("hanim_t10")
Transform455 = x3d.Transform()
Transform455.setTranslation([0.0056,1.2848,-0.0822])
Shape456 = x3d.Shape()
IndexedFaceSet457 = x3d.IndexedFaceSet()
IndexedFaceSet457.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet457.setCreaseAngle(0.5)
Coordinate458 = x3d.Coordinate()
Coordinate458.setUSE("points")

IndexedFaceSet457.setCoord(Coordinate458)

Shape456.setGeometry(IndexedFaceSet457)
Appearance459 = x3d.Appearance()
Material460 = x3d.Material()
Material460.setUSE("REC_SPINAL_COLOR")

Appearance459.setMaterial(Material460)

Shape456.setAppearance(Appearance459)

Transform455.addChildren(Shape456)

HAnimSegment454.addChildren(Transform455)

HAnimJoint453.addChildren(HAnimSegment454)
HAnimJoint461 = x3d.HAnimJoint()
HAnimJoint461.setName("vt9")
HAnimJoint461.setDEF("hanim_vt9")
HAnimJoint461.setCenter([0.0057,1.3126,-0.0838])
HAnimJoint461.setStiffness([0,0,0])
HAnimSegment462 = x3d.HAnimSegment()
HAnimSegment462.setName("t9")
HAnimSegment462.setDEF("hanim_t9")
Transform463 = x3d.Transform()
Transform463.setTranslation([0.0057,1.3126,-0.0838])
Shape464 = x3d.Shape()
IndexedFaceSet465 = x3d.IndexedFaceSet()
IndexedFaceSet465.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet465.setCreaseAngle(0.5)
Coordinate466 = x3d.Coordinate()
Coordinate466.setUSE("points")

IndexedFaceSet465.setCoord(Coordinate466)

Shape464.setGeometry(IndexedFaceSet465)
Appearance467 = x3d.Appearance()
Material468 = x3d.Material()
Material468.setUSE("SPINAL_COLOR")

Appearance467.setMaterial(Material468)

Shape464.setAppearance(Appearance467)

Transform463.addChildren(Shape464)

HAnimSegment462.addChildren(Transform463)

HAnimJoint461.addChildren(HAnimSegment462)
HAnimJoint469 = x3d.HAnimJoint()
HAnimJoint469.setName("vt8")
HAnimJoint469.setDEF("hanim_vt8")
HAnimJoint469.setCenter([0.0057,1.3382,-0.0845])
HAnimJoint469.setStiffness([0,0,0])
HAnimSegment470 = x3d.HAnimSegment()
HAnimSegment470.setName("t8")
HAnimSegment470.setDEF("hanim_t8")
Transform471 = x3d.Transform()
Transform471.setTranslation([0.0057,1.3382,-0.0845])
Shape472 = x3d.Shape()
IndexedFaceSet473 = x3d.IndexedFaceSet()
IndexedFaceSet473.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet473.setCreaseAngle(0.5)
Coordinate474 = x3d.Coordinate()
Coordinate474.setUSE("points")

IndexedFaceSet473.setCoord(Coordinate474)

Shape472.setGeometry(IndexedFaceSet473)
Appearance475 = x3d.Appearance()
Material476 = x3d.Material()
Material476.setUSE("SPINAL_COLOR")

Appearance475.setMaterial(Material476)

Shape472.setAppearance(Appearance475)

Transform471.addChildren(Shape472)

HAnimSegment470.addChildren(Transform471)

HAnimJoint469.addChildren(HAnimSegment470)
HAnimJoint477 = x3d.HAnimJoint()
HAnimJoint477.setName("vt7")
HAnimJoint477.setDEF("hanim_vt7")
HAnimJoint477.setCenter([0.0058,1.3625,-0.0833])
HAnimJoint477.setStiffness([0,0,0])
HAnimSegment478 = x3d.HAnimSegment()
HAnimSegment478.setName("t7")
HAnimSegment478.setDEF("hanim_t7")
Transform479 = x3d.Transform()
Transform479.setTranslation([0.0058,1.3625,-0.0833])
Shape480 = x3d.Shape()
IndexedFaceSet481 = x3d.IndexedFaceSet()
IndexedFaceSet481.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet481.setCreaseAngle(0.5)
Coordinate482 = x3d.Coordinate()
Coordinate482.setUSE("points")

IndexedFaceSet481.setCoord(Coordinate482)

Shape480.setGeometry(IndexedFaceSet481)
Appearance483 = x3d.Appearance()
Material484 = x3d.Material()
Material484.setUSE("SPINAL_COLOR")

Appearance483.setMaterial(Material484)

Shape480.setAppearance(Appearance483)

Transform479.addChildren(Shape480)

HAnimSegment478.addChildren(Transform479)

HAnimJoint477.addChildren(HAnimSegment478)
HAnimJoint485 = x3d.HAnimJoint()
HAnimJoint485.setName("vt6")
HAnimJoint485.setDEF("hanim_vt6")
HAnimJoint485.setCenter([0.0059,1.3866,-0.08])
HAnimJoint485.setStiffness([0,0,0])
HAnimSegment486 = x3d.HAnimSegment()
HAnimSegment486.setName("t6")
HAnimSegment486.setDEF("hanim_t6")
Transform487 = x3d.Transform()
Transform487.setTranslation([0.0059,1.3866,-0.08])
Shape488 = x3d.Shape()
IndexedFaceSet489 = x3d.IndexedFaceSet()
IndexedFaceSet489.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet489.setCreaseAngle(0.5)
Coordinate490 = x3d.Coordinate()
Coordinate490.setUSE("points")

IndexedFaceSet489.setCoord(Coordinate490)

Shape488.setGeometry(IndexedFaceSet489)
Appearance491 = x3d.Appearance()
Material492 = x3d.Material()
Material492.setUSE("REC_SPINAL_COLOR")

Appearance491.setMaterial(Material492)

Shape488.setAppearance(Appearance491)

Transform487.addChildren(Shape488)

HAnimSegment486.addChildren(Transform487)

HAnimJoint485.addChildren(HAnimSegment486)
HAnimJoint493 = x3d.HAnimJoint()
HAnimJoint493.setName("vt5")
HAnimJoint493.setDEF("hanim_vt5")
HAnimJoint493.setCenter([0.006,1.4102,-0.0745])
HAnimJoint493.setStiffness([0,0,0])
HAnimSegment494 = x3d.HAnimSegment()
HAnimSegment494.setName("t5")
HAnimSegment494.setDEF("hanim_t5")
Transform495 = x3d.Transform()
Transform495.setTranslation([0.006,1.4102,-0.0745])
Shape496 = x3d.Shape()
IndexedFaceSet497 = x3d.IndexedFaceSet()
IndexedFaceSet497.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet497.setCreaseAngle(0.5)
Coordinate498 = x3d.Coordinate()
Coordinate498.setUSE("points")

IndexedFaceSet497.setCoord(Coordinate498)

Shape496.setGeometry(IndexedFaceSet497)
Appearance499 = x3d.Appearance()
Material500 = x3d.Material()
Material500.setUSE("SPINAL_COLOR")

Appearance499.setMaterial(Material500)

Shape496.setAppearance(Appearance499)

Transform495.addChildren(Shape496)

HAnimSegment494.addChildren(Transform495)

HAnimJoint493.addChildren(HAnimSegment494)
HAnimJoint501 = x3d.HAnimJoint()
HAnimJoint501.setName("vt4")
HAnimJoint501.setDEF("hanim_vt4")
HAnimJoint501.setCenter([0.0061,1.432,-0.0675])
HAnimJoint501.setStiffness([0,0,0])
HAnimSegment502 = x3d.HAnimSegment()
HAnimSegment502.setName("t4")
HAnimSegment502.setDEF("hanim_t4")
Transform503 = x3d.Transform()
Transform503.setTranslation([0.0061,1.432,-0.0675])
Shape504 = x3d.Shape()
IndexedFaceSet505 = x3d.IndexedFaceSet()
IndexedFaceSet505.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet505.setCreaseAngle(0.5)
Coordinate506 = x3d.Coordinate()
Coordinate506.setUSE("points")

IndexedFaceSet505.setCoord(Coordinate506)

Shape504.setGeometry(IndexedFaceSet505)
Appearance507 = x3d.Appearance()
Material508 = x3d.Material()
Material508.setUSE("SPINAL_COLOR")

Appearance507.setMaterial(Material508)

Shape504.setAppearance(Appearance507)

Transform503.addChildren(Shape504)

HAnimSegment502.addChildren(Transform503)

HAnimJoint501.addChildren(HAnimSegment502)
HAnimJoint509 = x3d.HAnimJoint()
HAnimJoint509.setName("vt3")
HAnimJoint509.setDEF("hanim_vt3")
HAnimJoint509.setCenter([0.0062,1.4583,-0.057])
HAnimJoint509.setStiffness([0,0,0])
HAnimSegment510 = x3d.HAnimSegment()
HAnimSegment510.setName("t3")
HAnimSegment510.setDEF("hanim_t3")
Transform511 = x3d.Transform()
Transform511.setTranslation([0.0062,1.4583,-0.057])
Shape512 = x3d.Shape()
IndexedFaceSet513 = x3d.IndexedFaceSet()
IndexedFaceSet513.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet513.setCreaseAngle(0.5)
Coordinate514 = x3d.Coordinate()
Coordinate514.setUSE("points")

IndexedFaceSet513.setCoord(Coordinate514)

Shape512.setGeometry(IndexedFaceSet513)
Appearance515 = x3d.Appearance()
Material516 = x3d.Material()
Material516.setUSE("SPINAL_COLOR")

Appearance515.setMaterial(Material516)

Shape512.setAppearance(Appearance515)

Transform511.addChildren(Shape512)

HAnimSegment510.addChildren(Transform511)

HAnimJoint509.addChildren(HAnimSegment510)
HAnimJoint517 = x3d.HAnimJoint()
HAnimJoint517.setName("vt2")
HAnimJoint517.setDEF("hanim_vt2")
HAnimJoint517.setCenter([0.0063,1.4761,-0.0484])
HAnimJoint517.setStiffness([0,0,0])
HAnimSegment518 = x3d.HAnimSegment()
HAnimSegment518.setName("t2")
HAnimSegment518.setDEF("hanim_t2")
Transform519 = x3d.Transform()
Transform519.setTranslation([0.0063,1.4761,-0.0484])
Shape520 = x3d.Shape()
IndexedFaceSet521 = x3d.IndexedFaceSet()
IndexedFaceSet521.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet521.setCreaseAngle(0.5)
Coordinate522 = x3d.Coordinate()
Coordinate522.setUSE("points")

IndexedFaceSet521.setCoord(Coordinate522)

Shape520.setGeometry(IndexedFaceSet521)
Appearance523 = x3d.Appearance()
Material524 = x3d.Material()
Material524.setUSE("SPINAL_COLOR")

Appearance523.setMaterial(Material524)

Shape520.setAppearance(Appearance523)

Transform519.addChildren(Shape520)

HAnimSegment518.addChildren(Transform519)

HAnimJoint517.addChildren(HAnimSegment518)
HAnimJoint525 = x3d.HAnimJoint()
HAnimJoint525.setName("vt1")
HAnimJoint525.setDEF("hanim_vt1")
HAnimJoint525.setCenter([0.0065,1.4951,-0.0387])
HAnimJoint525.setStiffness([0,0,0])
HAnimSegment526 = x3d.HAnimSegment()
HAnimSegment526.setName("t1")
HAnimSegment526.setDEF("hanim_t1")
Transform527 = x3d.Transform()
Transform527.setTranslation([0.0065,1.4951,-0.0387])
Shape528 = x3d.Shape()
IndexedFaceSet529 = x3d.IndexedFaceSet()
IndexedFaceSet529.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet529.setCreaseAngle(0.5)
Coordinate530 = x3d.Coordinate()
Coordinate530.setUSE("points")

IndexedFaceSet529.setCoord(Coordinate530)

Shape528.setGeometry(IndexedFaceSet529)
Appearance531 = x3d.Appearance()
Material532 = x3d.Material()
Material532.setUSE("REC_SPINAL_COLOR")

Appearance531.setMaterial(Material532)

Shape528.setAppearance(Appearance531)

Transform527.addChildren(Shape528)

HAnimSegment526.addChildren(Transform527)

HAnimJoint525.addChildren(HAnimSegment526)
HAnimJoint533 = x3d.HAnimJoint()
HAnimJoint533.setName("l_shoulder")
HAnimJoint533.setDEF("hanim_l_shoulder")
HAnimJoint533.setCenter([0.2029,1.4376,-0.0387])
HAnimJoint533.setStiffness([0,0,0])
HAnimSegment534 = x3d.HAnimSegment()
HAnimSegment534.setName("l_upperarm")
HAnimSegment534.setDEF("hanim_l_upperarm")
Transform535 = x3d.Transform()
Transform535.setTranslation([0.2029,1.4376,-0.0387])
Shape536 = x3d.Shape()
IndexedFaceSet537 = x3d.IndexedFaceSet()
IndexedFaceSet537.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet537.setCreaseAngle(0.5)
Coordinate538 = x3d.Coordinate()
Coordinate538.setUSE("points")

IndexedFaceSet537.setCoord(Coordinate538)

Shape536.setGeometry(IndexedFaceSet537)
Appearance539 = x3d.Appearance()
Material540 = x3d.Material()
Material540.setUSE("MIN_COLOR")

Appearance539.setMaterial(Material540)

Shape536.setAppearance(Appearance539)

Transform535.addChildren(Shape536)

HAnimSegment534.addChildren(Transform535)
Transform541 = x3d.Transform()
Transform541.setDEF("l_upperarm_adjust")
Transform541.setCenter([0.182,1.22,-0.047])
Transform541.setRotation([1,0,0,0.119])
Transform541.setTranslation([0.2029,1.4376,-0.0387])

HAnimSegment534.addChildren(Transform541)
HAnimSite542 = x3d.HAnimSite()
HAnimSite542.setName("l_humeral_lateral_epicondyle_pt")
HAnimSite542.setDEF("hanim_l_humeral_lateral_epicondyle_pt")
HAnimSite542.setTranslation([0.228,1.1482,-0.11])
Shape543 = x3d.Shape()
IndexedFaceSet544 = x3d.IndexedFaceSet()
IndexedFaceSet544.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet544.setCreaseAngle(0.5)
Coordinate545 = x3d.Coordinate()
Coordinate545.setUSE("points")

IndexedFaceSet544.setCoord(Coordinate545)

Shape543.setGeometry(IndexedFaceSet544)
Appearance546 = x3d.Appearance()
Material547 = x3d.Material()
Material547.setUSE("SITE_COLOR")

Appearance546.setMaterial(Material547)

Shape543.setAppearance(Appearance546)

HAnimSite542.addChildren(Shape543)

HAnimSegment534.addChildren(HAnimSite542)

HAnimJoint533.addChildren(HAnimSegment534)
HAnimJoint548 = x3d.HAnimJoint()
HAnimJoint548.setName("l_elbow")
HAnimJoint548.setDEF("hanim_l_elbow")
HAnimJoint548.setCenter([0.2014,1.1357,-0.0682])
HAnimJoint548.setStiffness([0,0,0])
HAnimSegment549 = x3d.HAnimSegment()
HAnimSegment549.setName("l_forearm")
HAnimSegment549.setDEF("hanim_l_forearm")
Transform550 = x3d.Transform()
Transform550.setTranslation([0.2014,1.1357,-0.0682])
Shape551 = x3d.Shape()
IndexedFaceSet552 = x3d.IndexedFaceSet()
IndexedFaceSet552.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet552.setCreaseAngle(0.5)
Coordinate553 = x3d.Coordinate()
Coordinate553.setUSE("points")

IndexedFaceSet552.setCoord(Coordinate553)

Shape551.setGeometry(IndexedFaceSet552)
Appearance554 = x3d.Appearance()
Material555 = x3d.Material()
Material555.setUSE("MIN_COLOR")

Appearance554.setMaterial(Material555)

Shape551.setAppearance(Appearance554)

Transform550.addChildren(Shape551)

HAnimSegment549.addChildren(Transform550)
Transform556 = x3d.Transform()
Transform556.setDEF("l_forearm_adjust")
Transform556.setCenter([0.198,0.961,-0.0405])
Transform556.setRotation([-1,0,0,0.1])
Transform556.setTranslation([0.2014,1.1357,-0.0682])

HAnimSegment549.addChildren(Transform556)
HAnimSite557 = x3d.HAnimSite()
HAnimSite557.setName("l_radial_styloid_pt")
HAnimSite557.setDEF("hanim_l_radial_styloid_pt")
HAnimSite557.setTranslation([0.1901,0.8645,-0.0415])
Shape558 = x3d.Shape()
IndexedFaceSet559 = x3d.IndexedFaceSet()
IndexedFaceSet559.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet559.setCreaseAngle(0.5)
Coordinate560 = x3d.Coordinate()
Coordinate560.setUSE("points")

IndexedFaceSet559.setCoord(Coordinate560)

Shape558.setGeometry(IndexedFaceSet559)
Appearance561 = x3d.Appearance()
Material562 = x3d.Material()
Material562.setUSE("SITE_COLOR")

Appearance561.setMaterial(Material562)

Shape558.setAppearance(Appearance561)

HAnimSite557.addChildren(Shape558)

HAnimSegment549.addChildren(HAnimSite557)
HAnimSite563 = x3d.HAnimSite()
HAnimSite563.setName("l_olecranon_pt")
HAnimSite563.setDEF("hanim_l_olecranon_pt")
HAnimSite563.setTranslation([-0.1962,1.1375,-0.1123])
Shape564 = x3d.Shape()
IndexedFaceSet565 = x3d.IndexedFaceSet()
IndexedFaceSet565.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet565.setCreaseAngle(0.5)
Coordinate566 = x3d.Coordinate()
Coordinate566.setUSE("points")

IndexedFaceSet565.setCoord(Coordinate566)

Shape564.setGeometry(IndexedFaceSet565)
Appearance567 = x3d.Appearance()
Material568 = x3d.Material()
Material568.setUSE("SITE_COLOR")

Appearance567.setMaterial(Material568)

Shape564.setAppearance(Appearance567)

HAnimSite563.addChildren(Shape564)

HAnimSegment549.addChildren(HAnimSite563)
HAnimSite569 = x3d.HAnimSite()
HAnimSite569.setName("l_humeral_medial_epicondyle_pt")
HAnimSite569.setDEF("hanim_l_humeral_medial_epicondyle_pt")
HAnimSite569.setTranslation([0.1735,1.1272,-0.1113])
Shape570 = x3d.Shape()
IndexedFaceSet571 = x3d.IndexedFaceSet()
IndexedFaceSet571.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet571.setCreaseAngle(0.5)
Coordinate572 = x3d.Coordinate()
Coordinate572.setUSE("points")

IndexedFaceSet571.setCoord(Coordinate572)

Shape570.setGeometry(IndexedFaceSet571)
Appearance573 = x3d.Appearance()
Material574 = x3d.Material()
Material574.setUSE("SITE_COLOR")

Appearance573.setMaterial(Material574)

Shape570.setAppearance(Appearance573)

HAnimSite569.addChildren(Shape570)

HAnimSegment549.addChildren(HAnimSite569)
HAnimSite575 = x3d.HAnimSite()
HAnimSite575.setName("l_radiale_pt")
HAnimSite575.setDEF("hanim_l_radiale_pt")
HAnimSite575.setTranslation([0.2182,1.1212,-0.1167])
Shape576 = x3d.Shape()
IndexedFaceSet577 = x3d.IndexedFaceSet()
IndexedFaceSet577.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet577.setCreaseAngle(0.5)
Coordinate578 = x3d.Coordinate()
Coordinate578.setUSE("points")

IndexedFaceSet577.setCoord(Coordinate578)

Shape576.setGeometry(IndexedFaceSet577)
Appearance579 = x3d.Appearance()
Material580 = x3d.Material()
Material580.setUSE("SITE_COLOR")

Appearance579.setMaterial(Material580)

Shape576.setAppearance(Appearance579)

HAnimSite575.addChildren(Shape576)

HAnimSegment549.addChildren(HAnimSite575)

HAnimJoint548.addChildren(HAnimSegment549)
HAnimJoint581 = x3d.HAnimJoint()
HAnimJoint581.setName("l_radiocarpal")
HAnimJoint581.setDEF("hanim_l_radiocarpal")
HAnimJoint581.setCenter([0.1984,0.8663,-0.0583])
HAnimJoint581.setStiffness([0,0,0])
HAnimSegment582 = x3d.HAnimSegment()
HAnimSegment582.setName("l_carpal")
HAnimSegment582.setDEF("hanim_l_carpal")
Transform583 = x3d.Transform()
Transform583.setTranslation([0.1984,0.8663,-0.0583])
Shape584 = x3d.Shape()
IndexedFaceSet585 = x3d.IndexedFaceSet()
IndexedFaceSet585.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet585.setCreaseAngle(0.5)
Coordinate586 = x3d.Coordinate()
Coordinate586.setUSE("points")

IndexedFaceSet585.setCoord(Coordinate586)

Shape584.setGeometry(IndexedFaceSet585)
Appearance587 = x3d.Appearance()
Material588 = x3d.Material()
Material588.setUSE("MIN_COLOR")

Appearance587.setMaterial(Material588)

Shape584.setAppearance(Appearance587)

Transform583.addChildren(Shape584)

HAnimSegment582.addChildren(Transform583)
Transform589 = x3d.Transform()
Transform589.setDEF("l_hand_adjust")
Transform589.setCenter([0.213,0.811,-0.0338])
Transform589.setRotation([-0.06361,-0.9967,0.04988,1.333])
Transform589.setTranslation([0.1984,0.8663,-0.0583])

HAnimSegment582.addChildren(Transform589)
HAnimSite590 = x3d.HAnimSite()
HAnimSite590.setName("l_hand_tip")
HAnimSite590.setDEF("hanim_l_hand_tip")
HAnimSite590.setTranslation([0.208,0.6731,-0.0491])
Shape591 = x3d.Shape()
IndexedFaceSet592 = x3d.IndexedFaceSet()
IndexedFaceSet592.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet592.setCreaseAngle(0.5)
Coordinate593 = x3d.Coordinate()
Coordinate593.setUSE("points")

IndexedFaceSet592.setCoord(Coordinate593)

Shape591.setGeometry(IndexedFaceSet592)
Appearance594 = x3d.Appearance()
Material595 = x3d.Material()
Material595.setUSE("SITE_COLOR")

Appearance594.setMaterial(Material595)

Shape591.setAppearance(Appearance594)

HAnimSite590.addChildren(Shape591)

HAnimSegment582.addChildren(HAnimSite590)
HAnimSite596 = x3d.HAnimSite()
HAnimSite596.setName("l_metacarpal_phalanx_2_pt")
HAnimSite596.setDEF("hanim_l_metacarpal_phalanx_2_pt")
HAnimSite596.setTranslation([0.2009,0.8139,-0.0237])
Shape597 = x3d.Shape()
IndexedFaceSet598 = x3d.IndexedFaceSet()
IndexedFaceSet598.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet598.setCreaseAngle(0.5)
Coordinate599 = x3d.Coordinate()
Coordinate599.setUSE("points")

IndexedFaceSet598.setCoord(Coordinate599)

Shape597.setGeometry(IndexedFaceSet598)
Appearance600 = x3d.Appearance()
Material601 = x3d.Material()
Material601.setUSE("SITE_COLOR")

Appearance600.setMaterial(Material601)

Shape597.setAppearance(Appearance600)

HAnimSite596.addChildren(Shape597)

HAnimSegment582.addChildren(HAnimSite596)
HAnimSite602 = x3d.HAnimSite()
HAnimSite602.setName("l_dactylion_pt")
HAnimSite602.setDEF("hanim_l_dactylion_pt")
HAnimSite602.setTranslation([0.2056,0.6743,-0.0482])
Shape603 = x3d.Shape()
IndexedFaceSet604 = x3d.IndexedFaceSet()
IndexedFaceSet604.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet604.setCreaseAngle(0.5)
Coordinate605 = x3d.Coordinate()
Coordinate605.setUSE("points")

IndexedFaceSet604.setCoord(Coordinate605)

Shape603.setGeometry(IndexedFaceSet604)
Appearance606 = x3d.Appearance()
Material607 = x3d.Material()
Material607.setUSE("SITE_COLOR")

Appearance606.setMaterial(Material607)

Shape603.setAppearance(Appearance606)

HAnimSite602.addChildren(Shape603)

HAnimSegment582.addChildren(HAnimSite602)
HAnimSite608 = x3d.HAnimSite()
HAnimSite608.setName("l_ulnar_styloid_pt")
HAnimSite608.setDEF("hanim_l_ulnar_styloid_pt")
HAnimSite608.setTranslation([-0.2142,0.8529,-0.0648])
Shape609 = x3d.Shape()
IndexedFaceSet610 = x3d.IndexedFaceSet()
IndexedFaceSet610.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet610.setCreaseAngle(0.5)
Coordinate611 = x3d.Coordinate()
Coordinate611.setUSE("points")

IndexedFaceSet610.setCoord(Coordinate611)

Shape609.setGeometry(IndexedFaceSet610)
Appearance612 = x3d.Appearance()
Material613 = x3d.Material()
Material613.setUSE("SITE_COLOR")

Appearance612.setMaterial(Material613)

Shape609.setAppearance(Appearance612)

HAnimSite608.addChildren(Shape609)

HAnimSegment582.addChildren(HAnimSite608)
HAnimSite614 = x3d.HAnimSite()
HAnimSite614.setName("l_metacarpal_phalanx_5_pt")
HAnimSite614.setDEF("hanim_l_metacarpal_phalanx_5_pt")
HAnimSite614.setTranslation([0.1929,0.786,-0.1122])
Shape615 = x3d.Shape()
IndexedFaceSet616 = x3d.IndexedFaceSet()
IndexedFaceSet616.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet616.setCreaseAngle(0.5)
Coordinate617 = x3d.Coordinate()
Coordinate617.setUSE("points")

IndexedFaceSet616.setCoord(Coordinate617)

Shape615.setGeometry(IndexedFaceSet616)
Appearance618 = x3d.Appearance()
Material619 = x3d.Material()
Material619.setUSE("SITE_COLOR")

Appearance618.setMaterial(Material619)

Shape615.setAppearance(Appearance618)

HAnimSite614.addChildren(Shape615)

HAnimSegment582.addChildren(HAnimSite614)

HAnimJoint581.addChildren(HAnimSegment582)
HAnimJoint620 = x3d.HAnimJoint()
HAnimJoint620.setName("l_carpometacarpal_1")
HAnimJoint620.setDEF("hanim_l_carpometacarpal_1")
HAnimJoint620.setCenter([0.1924,0.8472,-0.0534])
HAnimJoint620.setStiffness([0,0,0])
HAnimSegment621 = x3d.HAnimSegment()
HAnimSegment621.setName("l_metacarpal_1")
HAnimSegment621.setDEF("hanim_l_metacarpal_1")
Transform622 = x3d.Transform()
Transform622.setTranslation([0.1924,0.8472,-0.0534])
Shape623 = x3d.Shape()
IndexedFaceSet624 = x3d.IndexedFaceSet()
IndexedFaceSet624.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet624.setCreaseAngle(0.5)
Coordinate625 = x3d.Coordinate()
Coordinate625.setUSE("points")

IndexedFaceSet624.setCoord(Coordinate625)

Shape623.setGeometry(IndexedFaceSet624)
Appearance626 = x3d.Appearance()
Material627 = x3d.Material()
Material627.setUSE("JOINT_COLOR")

Appearance626.setMaterial(Material627)

Shape623.setAppearance(Appearance626)

Transform622.addChildren(Shape623)

HAnimSegment621.addChildren(Transform622)

HAnimJoint620.addChildren(HAnimSegment621)
HAnimJoint628 = x3d.HAnimJoint()
HAnimJoint628.setName("l_metacarpophalangeal_1")
HAnimJoint628.setDEF("hanim_l_metacarpophalangeal_1")
HAnimJoint628.setCenter([0.1951,0.8226,0.0246])
HAnimJoint628.setStiffness([0,0,0])
HAnimSegment629 = x3d.HAnimSegment()
HAnimSegment629.setName("l_carpal_proximal_phalanx_1")
HAnimSegment629.setDEF("hanim_l_carpal_proximal_phalanx_1")
Transform630 = x3d.Transform()
Transform630.setTranslation([0.1951,0.8226,0.0246])
Shape631 = x3d.Shape()
IndexedFaceSet632 = x3d.IndexedFaceSet()
IndexedFaceSet632.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet632.setCreaseAngle(0.5)
Coordinate633 = x3d.Coordinate()
Coordinate633.setUSE("points")

IndexedFaceSet632.setCoord(Coordinate633)

Shape631.setGeometry(IndexedFaceSet632)
Appearance634 = x3d.Appearance()
Material635 = x3d.Material()
Material635.setUSE("JOINT_COLOR")

Appearance634.setMaterial(Material635)

Shape631.setAppearance(Appearance634)

Transform630.addChildren(Shape631)

HAnimSegment629.addChildren(Transform630)

HAnimJoint628.addChildren(HAnimSegment629)
HAnimJoint636 = x3d.HAnimJoint()
HAnimJoint636.setName("l_carpal_interphalangeal_1")
HAnimJoint636.setDEF("hanim_l_carpal_interphalangeal_1")
HAnimJoint636.setCenter([0.1955,0.8159,0.0464])
HAnimJoint636.setStiffness([0,0,0])
HAnimSegment637 = x3d.HAnimSegment()
HAnimSegment637.setName("l_carpal_distal_phalanx_1")
HAnimSegment637.setDEF("hanim_l_carpal_distal_phalanx_1")
Transform638 = x3d.Transform()
Transform638.setTranslation([0.1955,0.8159,0.0464])
Shape639 = x3d.Shape()
IndexedFaceSet640 = x3d.IndexedFaceSet()
IndexedFaceSet640.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet640.setCreaseAngle(0.5)
Coordinate641 = x3d.Coordinate()
Coordinate641.setUSE("points")

IndexedFaceSet640.setCoord(Coordinate641)

Shape639.setGeometry(IndexedFaceSet640)
Appearance642 = x3d.Appearance()
Material643 = x3d.Material()
Material643.setUSE("JOINT_COLOR")

Appearance642.setMaterial(Material643)

Shape639.setAppearance(Appearance642)

Transform638.addChildren(Shape639)

HAnimSegment637.addChildren(Transform638)
HAnimSite644 = x3d.HAnimSite()
HAnimSite644.setName("l_carpal_distal_phalanx_1_tip")
HAnimSite644.setDEF("hanim_l_carpal_distal_phalanx_1_tip")
HAnimSite644.setTranslation([0.1982,0.8061,0.0759])
Shape645 = x3d.Shape()
IndexedFaceSet646 = x3d.IndexedFaceSet()
IndexedFaceSet646.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet646.setCreaseAngle(0.5)
Coordinate647 = x3d.Coordinate()
Coordinate647.setUSE("points")

IndexedFaceSet646.setCoord(Coordinate647)

Shape645.setGeometry(IndexedFaceSet646)
Appearance648 = x3d.Appearance()
Material649 = x3d.Material()
Material649.setUSE("HAND_FEET_COLOR")

Appearance648.setMaterial(Material649)

Shape645.setAppearance(Appearance648)

HAnimSite644.addChildren(Shape645)

HAnimSegment637.addChildren(HAnimSite644)

HAnimJoint636.addChildren(HAnimSegment637)

HAnimJoint628.addChildren(HAnimJoint636)

HAnimJoint620.addChildren(HAnimJoint628)

HAnimJoint581.addChildren(HAnimJoint620)
HAnimJoint650 = x3d.HAnimJoint()
HAnimJoint650.setName("l_carpometacarpal_2")
HAnimJoint650.setDEF("hanim_l_carpometacarpal_2")
HAnimJoint650.setCenter([0.1983,0.8024,-0.028])
HAnimJoint650.setStiffness([0,0,0])
HAnimSegment651 = x3d.HAnimSegment()
HAnimSegment651.setName("l_metacarpal_2")
HAnimSegment651.setDEF("hanim_l_metacarpal_2")
Transform652 = x3d.Transform()
Transform652.setTranslation([0.1983,0.8024,-0.028])
Shape653 = x3d.Shape()
IndexedFaceSet654 = x3d.IndexedFaceSet()
IndexedFaceSet654.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet654.setCreaseAngle(0.5)
Coordinate655 = x3d.Coordinate()
Coordinate655.setUSE("points")

IndexedFaceSet654.setCoord(Coordinate655)

Shape653.setGeometry(IndexedFaceSet654)
Appearance656 = x3d.Appearance()
Material657 = x3d.Material()
Material657.setUSE("JOINT_COLOR")

Appearance656.setMaterial(Material657)

Shape653.setAppearance(Appearance656)

Transform652.addChildren(Shape653)

HAnimSegment651.addChildren(Transform652)

HAnimJoint650.addChildren(HAnimSegment651)
HAnimJoint658 = x3d.HAnimJoint()
HAnimJoint658.setName("l_metacarpophalangeal_2")
HAnimJoint658.setDEF("hanim_l_metacarpophalangeal_2")
HAnimJoint658.setCenter([0.1983,0.7815,-0.028])
HAnimJoint658.setStiffness([0,0,0])
HAnimSegment659 = x3d.HAnimSegment()
HAnimSegment659.setName("l_carpal_proximal_phalanx_2")
HAnimSegment659.setDEF("hanim_l_carpal_proximal_phalanx_2")
Transform660 = x3d.Transform()
Transform660.setTranslation([0.1983,0.7815,-0.028])
Shape661 = x3d.Shape()
IndexedFaceSet662 = x3d.IndexedFaceSet()
IndexedFaceSet662.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet662.setCreaseAngle(0.5)
Coordinate663 = x3d.Coordinate()
Coordinate663.setUSE("points")

IndexedFaceSet662.setCoord(Coordinate663)

Shape661.setGeometry(IndexedFaceSet662)
Appearance664 = x3d.Appearance()
Material665 = x3d.Material()
Material665.setUSE("JOINT_COLOR")

Appearance664.setMaterial(Material665)

Shape661.setAppearance(Appearance664)

Transform660.addChildren(Shape661)

HAnimSegment659.addChildren(Transform660)

HAnimJoint658.addChildren(HAnimSegment659)
HAnimJoint666 = x3d.HAnimJoint()
HAnimJoint666.setName("l_carpal_proximal_interphalangeal_2")
HAnimJoint666.setDEF("hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint666.setCenter([0.2017,0.7363,-0.0248])
HAnimJoint666.setStiffness([0,0,0])
HAnimSegment667 = x3d.HAnimSegment()
HAnimSegment667.setName("l_carpal_middle_phalanx_2")
HAnimSegment667.setDEF("hanim_l_carpal_middle_phalanx_2")
Transform668 = x3d.Transform()
Transform668.setTranslation([0.2017,0.7363,-0.0248])
Shape669 = x3d.Shape()
IndexedFaceSet670 = x3d.IndexedFaceSet()
IndexedFaceSet670.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet670.setCreaseAngle(0.5)
Coordinate671 = x3d.Coordinate()
Coordinate671.setUSE("points")

IndexedFaceSet670.setCoord(Coordinate671)

Shape669.setGeometry(IndexedFaceSet670)
Appearance672 = x3d.Appearance()
Material673 = x3d.Material()
Material673.setUSE("JOINT_COLOR")

Appearance672.setMaterial(Material673)

Shape669.setAppearance(Appearance672)

Transform668.addChildren(Shape669)

HAnimSegment667.addChildren(Transform668)

HAnimJoint666.addChildren(HAnimSegment667)
HAnimJoint674 = x3d.HAnimJoint()
HAnimJoint674.setName("l_carpal_distal_interphalangeal_2")
HAnimJoint674.setDEF("hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint674.setCenter([0.2028,0.7139,-0.0236])
HAnimJoint674.setStiffness([0,0,0])
HAnimSegment675 = x3d.HAnimSegment()
HAnimSegment675.setName("l_carpal_distal_phalanx_2")
HAnimSegment675.setDEF("hanim_l_carpal_distal_phalanx_2")
Transform676 = x3d.Transform()
Transform676.setTranslation([0.2028,0.7139,-0.0236])
Shape677 = x3d.Shape()
IndexedFaceSet678 = x3d.IndexedFaceSet()
IndexedFaceSet678.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet678.setCreaseAngle(0.5)
Coordinate679 = x3d.Coordinate()
Coordinate679.setUSE("points")

IndexedFaceSet678.setCoord(Coordinate679)

Shape677.setGeometry(IndexedFaceSet678)
Appearance680 = x3d.Appearance()
Material681 = x3d.Material()
Material681.setUSE("JOINT_COLOR")

Appearance680.setMaterial(Material681)

Shape677.setAppearance(Appearance680)

Transform676.addChildren(Shape677)

HAnimSegment675.addChildren(Transform676)
HAnimSite682 = x3d.HAnimSite()
HAnimSite682.setName("l_carpal_distal_phalanx_2_tip")
HAnimSite682.setDEF("hanim_l_carpal_distal_phalanx_2_tip")
HAnimSite682.setTranslation([0.2089,0.6858,-0.0245])
Shape683 = x3d.Shape()
IndexedFaceSet684 = x3d.IndexedFaceSet()
IndexedFaceSet684.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet684.setCreaseAngle(0.5)
Coordinate685 = x3d.Coordinate()
Coordinate685.setUSE("points")

IndexedFaceSet684.setCoord(Coordinate685)

Shape683.setGeometry(IndexedFaceSet684)
Appearance686 = x3d.Appearance()
Material687 = x3d.Material()
Material687.setUSE("HAND_FEET_COLOR")

Appearance686.setMaterial(Material687)

Shape683.setAppearance(Appearance686)

HAnimSite682.addChildren(Shape683)

HAnimSegment675.addChildren(HAnimSite682)

HAnimJoint674.addChildren(HAnimSegment675)

HAnimJoint666.addChildren(HAnimJoint674)

HAnimJoint658.addChildren(HAnimJoint666)

HAnimJoint650.addChildren(HAnimJoint658)

HAnimJoint581.addChildren(HAnimJoint650)

HAnimJoint548.addChildren(HAnimJoint581)

HAnimJoint533.addChildren(HAnimJoint548)

HAnimJoint525.addChildren(HAnimJoint533)
HAnimJoint688 = x3d.HAnimJoint()
HAnimJoint688.setName("r_shoulder")
HAnimJoint688.setDEF("hanim_r_shoulder")
HAnimJoint688.setCenter([-0.1907,1.4407,-0.0325])
HAnimJoint688.setStiffness([0,0,0])
HAnimSegment689 = x3d.HAnimSegment()
HAnimSegment689.setName("r_upperarm")
HAnimSegment689.setDEF("hanim_r_upperarm")
Transform690 = x3d.Transform()
Transform690.setTranslation([-0.1907,1.4407,-0.0325])
Shape691 = x3d.Shape()
IndexedFaceSet692 = x3d.IndexedFaceSet()
IndexedFaceSet692.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet692.setCreaseAngle(0.5)
Coordinate693 = x3d.Coordinate()
Coordinate693.setUSE("points")

IndexedFaceSet692.setCoord(Coordinate693)

Shape691.setGeometry(IndexedFaceSet692)
Appearance694 = x3d.Appearance()
Material695 = x3d.Material()
Material695.setUSE("MIN_COLOR")

Appearance694.setMaterial(Material695)

Shape691.setAppearance(Appearance694)

Transform690.addChildren(Shape691)

HAnimSegment689.addChildren(Transform690)
Transform696 = x3d.Transform()
Transform696.setDEF("r_upperarm_adjust")
Transform696.setCenter([-0.182,1.22,-0.047])
Transform696.setRotation([1,0,0,0.0836])
Transform696.setTranslation([-0.1907,1.4407,-0.0325])

HAnimSegment689.addChildren(Transform696)
HAnimSite697 = x3d.HAnimSite()
HAnimSite697.setName("r_humeral_lateral_epicondyle_pt")
HAnimSite697.setDEF("hanim_r_humeral_lateral_epicondyle_pt")
HAnimSite697.setTranslation([-0.2224,1.1517,-0.1033])
Shape698 = x3d.Shape()
IndexedFaceSet699 = x3d.IndexedFaceSet()
IndexedFaceSet699.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet699.setCreaseAngle(0.5)
Coordinate700 = x3d.Coordinate()
Coordinate700.setUSE("points")

IndexedFaceSet699.setCoord(Coordinate700)

Shape698.setGeometry(IndexedFaceSet699)
Appearance701 = x3d.Appearance()
Material702 = x3d.Material()
Material702.setUSE("SITE_COLOR")

Appearance701.setMaterial(Material702)

Shape698.setAppearance(Appearance701)

HAnimSite697.addChildren(Shape698)

HAnimSegment689.addChildren(HAnimSite697)

HAnimJoint688.addChildren(HAnimSegment689)
HAnimJoint703 = x3d.HAnimJoint()
HAnimJoint703.setName("r_elbow")
HAnimJoint703.setDEF("hanim_r_elbow")
HAnimJoint703.setCenter([-0.1949,1.1388,-0.062])
HAnimJoint703.setStiffness([0,0,0])
HAnimSegment704 = x3d.HAnimSegment()
HAnimSegment704.setName("r_forearm")
HAnimSegment704.setDEF("hanim_r_forearm")
Transform705 = x3d.Transform()
Transform705.setTranslation([-0.1949,1.1388,-0.062])
Shape706 = x3d.Shape()
IndexedFaceSet707 = x3d.IndexedFaceSet()
IndexedFaceSet707.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet707.setCreaseAngle(0.5)
Coordinate708 = x3d.Coordinate()
Coordinate708.setUSE("points")

IndexedFaceSet707.setCoord(Coordinate708)

Shape706.setGeometry(IndexedFaceSet707)
Appearance709 = x3d.Appearance()
Material710 = x3d.Material()
Material710.setUSE("MIN_COLOR")

Appearance709.setMaterial(Material710)

Shape706.setAppearance(Appearance709)

Transform705.addChildren(Shape706)

HAnimSegment704.addChildren(Transform705)
Transform711 = x3d.Transform()
Transform711.setDEF("r_forearm_adjust")
Transform711.setCenter([-0.198,0.961,-0.0397])
Transform711.setRotation([-1,0,0,0.1254])
Transform711.setTranslation([-0.1949,1.1388,-0.062])

HAnimSegment704.addChildren(Transform711)
HAnimSite712 = x3d.HAnimSite()
HAnimSite712.setName("r_radial_styloid_pt")
HAnimSite712.setDEF("hanim_r_radial_styloid_pt")
HAnimSite712.setTranslation([-0.1884,0.8676,-0.036])
Shape713 = x3d.Shape()
IndexedFaceSet714 = x3d.IndexedFaceSet()
IndexedFaceSet714.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet714.setCreaseAngle(0.5)
Coordinate715 = x3d.Coordinate()
Coordinate715.setUSE("points")

IndexedFaceSet714.setCoord(Coordinate715)

Shape713.setGeometry(IndexedFaceSet714)
Appearance716 = x3d.Appearance()
Material717 = x3d.Material()
Material717.setUSE("SITE_COLOR")

Appearance716.setMaterial(Material717)

Shape713.setAppearance(Appearance716)

HAnimSite712.addChildren(Shape713)

HAnimSegment704.addChildren(HAnimSite712)
HAnimSite718 = x3d.HAnimSite()
HAnimSite718.setName("r_olecranon_pt")
HAnimSite718.setDEF("hanim_r_olecranon_pt")
HAnimSite718.setTranslation([-0.1907,1.1405,-0.1065])
Shape719 = x3d.Shape()
IndexedFaceSet720 = x3d.IndexedFaceSet()
IndexedFaceSet720.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet720.setCreaseAngle(0.5)
Coordinate721 = x3d.Coordinate()
Coordinate721.setUSE("points")

IndexedFaceSet720.setCoord(Coordinate721)

Shape719.setGeometry(IndexedFaceSet720)
Appearance722 = x3d.Appearance()
Material723 = x3d.Material()
Material723.setUSE("SITE_COLOR")

Appearance722.setMaterial(Material723)

Shape719.setAppearance(Appearance722)

HAnimSite718.addChildren(Shape719)

HAnimSegment704.addChildren(HAnimSite718)
HAnimSite724 = x3d.HAnimSite()
HAnimSite724.setName("r_humeral_medial_epicondyle_pt")
HAnimSite724.setDEF("hanim_r_humeral_medial_epicondyle_pt")
HAnimSite724.setTranslation([-0.168,1.1298,-0.1062])
Shape725 = x3d.Shape()
IndexedFaceSet726 = x3d.IndexedFaceSet()
IndexedFaceSet726.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet726.setCreaseAngle(0.5)
Coordinate727 = x3d.Coordinate()
Coordinate727.setUSE("points")

IndexedFaceSet726.setCoord(Coordinate727)

Shape725.setGeometry(IndexedFaceSet726)
Appearance728 = x3d.Appearance()
Material729 = x3d.Material()
Material729.setUSE("SITE_COLOR")

Appearance728.setMaterial(Material729)

Shape725.setAppearance(Appearance728)

HAnimSite724.addChildren(Shape725)

HAnimSegment704.addChildren(HAnimSite724)
HAnimSite730 = x3d.HAnimSite()
HAnimSite730.setName("r_radiale_pt")
HAnimSite730.setDEF("hanim_r_radiale_pt")
HAnimSite730.setTranslation([-0.213,1.1305,-0.1091])
Shape731 = x3d.Shape()
IndexedFaceSet732 = x3d.IndexedFaceSet()
IndexedFaceSet732.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet732.setCreaseAngle(0.5)
Coordinate733 = x3d.Coordinate()
Coordinate733.setUSE("points")

IndexedFaceSet732.setCoord(Coordinate733)

Shape731.setGeometry(IndexedFaceSet732)
Appearance734 = x3d.Appearance()
Material735 = x3d.Material()
Material735.setUSE("SITE_COLOR")

Appearance734.setMaterial(Material735)

Shape731.setAppearance(Appearance734)

HAnimSite730.addChildren(Shape731)

HAnimSegment704.addChildren(HAnimSite730)

HAnimJoint703.addChildren(HAnimSegment704)
HAnimJoint736 = x3d.HAnimJoint()
HAnimJoint736.setName("r_radiocarpal")
HAnimJoint736.setDEF("hanim_r_radiocarpal")
HAnimJoint736.setCenter([-0.1959,0.8694,-0.0521])
HAnimJoint736.setStiffness([0,0,0])
HAnimSegment737 = x3d.HAnimSegment()
HAnimSegment737.setName("r_carpal")
HAnimSegment737.setDEF("hanim_r_carpal")
Transform738 = x3d.Transform()
Transform738.setTranslation([-0.1959,0.8694,-0.0521])
Shape739 = x3d.Shape()
IndexedFaceSet740 = x3d.IndexedFaceSet()
IndexedFaceSet740.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet740.setCreaseAngle(0.5)
Coordinate741 = x3d.Coordinate()
Coordinate741.setUSE("points")

IndexedFaceSet740.setCoord(Coordinate741)

Shape739.setGeometry(IndexedFaceSet740)
Appearance742 = x3d.Appearance()
Material743 = x3d.Material()
Material743.setUSE("MIN_COLOR")

Appearance742.setMaterial(Material743)

Shape739.setAppearance(Appearance742)

Transform738.addChildren(Shape739)

HAnimSegment737.addChildren(Transform738)
Transform744 = x3d.Transform()
Transform744.setDEF("r_hand_adjust")
Transform744.setCenter([-0.217,0.811,-0.0338])
Transform744.setRotation([-0.09024,0.994,-0.0624,1.216])

HAnimSegment737.addChildren(Transform744)
HAnimSite745 = x3d.HAnimSite()
HAnimSite745.setName("r_hand_tip")
HAnimSite745.setDEF("hanim_r_hand_tip")
HAnimSite745.setTranslation([-0.1969,0.6758,-0.0427])
Shape746 = x3d.Shape()
IndexedFaceSet747 = x3d.IndexedFaceSet()
IndexedFaceSet747.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet747.setCreaseAngle(0.5)
Coordinate748 = x3d.Coordinate()
Coordinate748.setUSE("points")

IndexedFaceSet747.setCoord(Coordinate748)

Shape746.setGeometry(IndexedFaceSet747)
Appearance749 = x3d.Appearance()
Material750 = x3d.Material()
Material750.setUSE("SITE_COLOR")

Appearance749.setMaterial(Material750)

Shape746.setAppearance(Appearance749)

HAnimSite745.addChildren(Shape746)

HAnimSegment737.addChildren(HAnimSite745)
HAnimSite751 = x3d.HAnimSite()
HAnimSite751.setName("r_metacarpal_phalanx_2_pt")
HAnimSite751.setDEF("hanim_r_metacarpal_phalanx_2_pt")
HAnimSite751.setTranslation([-0.1977,0.8169,-0.0177])
Shape752 = x3d.Shape()
IndexedFaceSet753 = x3d.IndexedFaceSet()
IndexedFaceSet753.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet753.setCreaseAngle(0.5)
Coordinate754 = x3d.Coordinate()
Coordinate754.setUSE("points")

IndexedFaceSet753.setCoord(Coordinate754)

Shape752.setGeometry(IndexedFaceSet753)
Appearance755 = x3d.Appearance()
Material756 = x3d.Material()
Material756.setUSE("SITE_COLOR")

Appearance755.setMaterial(Material756)

Shape752.setAppearance(Appearance755)

HAnimSite751.addChildren(Shape752)

HAnimSegment737.addChildren(HAnimSite751)
HAnimSite757 = x3d.HAnimSite()
HAnimSite757.setName("r_dactylion_pt")
HAnimSite757.setDEF("hanim_r_dactylion_pt")
HAnimSite757.setTranslation([-0.1941,0.6772,-0.0423])
Shape758 = x3d.Shape()
IndexedFaceSet759 = x3d.IndexedFaceSet()
IndexedFaceSet759.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet759.setCreaseAngle(0.5)
Coordinate760 = x3d.Coordinate()
Coordinate760.setUSE("points")

IndexedFaceSet759.setCoord(Coordinate760)

Shape758.setGeometry(IndexedFaceSet759)
Appearance761 = x3d.Appearance()
Material762 = x3d.Material()
Material762.setUSE("SITE_COLOR")

Appearance761.setMaterial(Material762)

Shape758.setAppearance(Appearance761)

HAnimSite757.addChildren(Shape758)

HAnimSegment737.addChildren(HAnimSite757)
HAnimSite763 = x3d.HAnimSite()
HAnimSite763.setName("r_ulnar_styloid_pt")
HAnimSite763.setDEF("hanim_r_ulnar_styloid_pt")
HAnimSite763.setTranslation([-0.2117,0.8562,-0.0584])
Shape764 = x3d.Shape()
IndexedFaceSet765 = x3d.IndexedFaceSet()
IndexedFaceSet765.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet765.setCreaseAngle(0.5)
Coordinate766 = x3d.Coordinate()
Coordinate766.setUSE("points")

IndexedFaceSet765.setCoord(Coordinate766)

Shape764.setGeometry(IndexedFaceSet765)
Appearance767 = x3d.Appearance()
Material768 = x3d.Material()
Material768.setUSE("SITE_COLOR")

Appearance767.setMaterial(Material768)

Shape764.setAppearance(Appearance767)

HAnimSite763.addChildren(Shape764)

HAnimSegment737.addChildren(HAnimSite763)
HAnimSite769 = x3d.HAnimSite()
HAnimSite769.setName("r_metacarpal_phalanx_5_pt")
HAnimSite769.setDEF("hanim_r_metacarpal_phalanx_5_pt")
HAnimSite769.setTranslation([-0.1929,0.789,-0.1064])
Shape770 = x3d.Shape()
IndexedFaceSet771 = x3d.IndexedFaceSet()
IndexedFaceSet771.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet771.setCreaseAngle(0.5)
Coordinate772 = x3d.Coordinate()
Coordinate772.setUSE("points")

IndexedFaceSet771.setCoord(Coordinate772)

Shape770.setGeometry(IndexedFaceSet771)
Appearance773 = x3d.Appearance()
Material774 = x3d.Material()
Material774.setUSE("SITE_COLOR")

Appearance773.setMaterial(Material774)

Shape770.setAppearance(Appearance773)

HAnimSite769.addChildren(Shape770)

HAnimSegment737.addChildren(HAnimSite769)

HAnimJoint736.addChildren(HAnimSegment737)

HAnimJoint703.addChildren(HAnimJoint736)

HAnimJoint688.addChildren(HAnimJoint703)

HAnimJoint525.addChildren(HAnimJoint688)
HAnimJoint775 = x3d.HAnimJoint()
HAnimJoint775.setName("vc7")
HAnimJoint775.setDEF("hanim_vc7")
HAnimJoint775.setCenter([0.0066,1.5132,-0.0301])
HAnimJoint775.setStiffness([0,0,0])
HAnimSegment776 = x3d.HAnimSegment()
HAnimSegment776.setName("c7")
HAnimSegment776.setDEF("hanim_c7")
Transform777 = x3d.Transform()
Transform777.setTranslation([0.0066,1.5132,-0.0301])
Shape778 = x3d.Shape()
IndexedFaceSet779 = x3d.IndexedFaceSet()
IndexedFaceSet779.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet779.setCreaseAngle(0.5)
Coordinate780 = x3d.Coordinate()
Coordinate780.setUSE("points")

IndexedFaceSet779.setCoord(Coordinate780)

Shape778.setGeometry(IndexedFaceSet779)
Appearance781 = x3d.Appearance()
Material782 = x3d.Material()
Material782.setUSE("SPINAL_COLOR")

Appearance781.setMaterial(Material782)

Shape778.setAppearance(Appearance781)

Transform777.addChildren(Shape778)

HAnimSegment776.addChildren(Transform777)

HAnimJoint775.addChildren(HAnimSegment776)
HAnimJoint783 = x3d.HAnimJoint()
HAnimJoint783.setName("vc6")
HAnimJoint783.setDEF("hanim_vc6")
HAnimJoint783.setCenter([0.0066,1.5357,-0.0143])
HAnimJoint783.setStiffness([0,0,0])
HAnimSegment784 = x3d.HAnimSegment()
HAnimSegment784.setName("c6")
HAnimSegment784.setDEF("hanim_c6")
Transform785 = x3d.Transform()
Transform785.setTranslation([0.0066,1.5357,-0.0143])
Shape786 = x3d.Shape()
IndexedFaceSet787 = x3d.IndexedFaceSet()
IndexedFaceSet787.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet787.setCreaseAngle(0.5)
Coordinate788 = x3d.Coordinate()
Coordinate788.setUSE("points")

IndexedFaceSet787.setCoord(Coordinate788)

Shape786.setGeometry(IndexedFaceSet787)
Appearance789 = x3d.Appearance()
Material790 = x3d.Material()
Material790.setUSE("SPINAL_COLOR")

Appearance789.setMaterial(Material790)

Shape786.setAppearance(Appearance789)

Transform785.addChildren(Shape786)

HAnimSegment784.addChildren(Transform785)

HAnimJoint783.addChildren(HAnimSegment784)
HAnimJoint791 = x3d.HAnimJoint()
HAnimJoint791.setName("vc5")
HAnimJoint791.setDEF("hanim_vc5")
HAnimJoint791.setCenter([0.0066,1.552,-0.0082])
HAnimJoint791.setStiffness([0,0,0])
HAnimSegment792 = x3d.HAnimSegment()
HAnimSegment792.setName("c5")
HAnimSegment792.setDEF("hanim_c5")
Transform793 = x3d.Transform()
Transform793.setTranslation([0.0066,1.552,-0.0082])
Shape794 = x3d.Shape()
IndexedFaceSet795 = x3d.IndexedFaceSet()
IndexedFaceSet795.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet795.setCreaseAngle(0.5)
Coordinate796 = x3d.Coordinate()
Coordinate796.setUSE("points")

IndexedFaceSet795.setCoord(Coordinate796)

Shape794.setGeometry(IndexedFaceSet795)
Appearance797 = x3d.Appearance()
Material798 = x3d.Material()
Material798.setUSE("SPINAL_COLOR")

Appearance797.setMaterial(Material798)

Shape794.setAppearance(Appearance797)

Transform793.addChildren(Shape794)

HAnimSegment792.addChildren(Transform793)

HAnimJoint791.addChildren(HAnimSegment792)
HAnimJoint799 = x3d.HAnimJoint()
HAnimJoint799.setName("vc4")
HAnimJoint799.setDEF("hanim_vc4")
HAnimJoint799.setCenter([0.0066,1.5662,-0.0084])
HAnimJoint799.setStiffness([0,0,0])
HAnimSegment800 = x3d.HAnimSegment()
HAnimSegment800.setName("c4")
HAnimSegment800.setDEF("hanim_c4")
Transform801 = x3d.Transform()
Transform801.setTranslation([0.0066,1.5662,-0.0084])
Shape802 = x3d.Shape()
IndexedFaceSet803 = x3d.IndexedFaceSet()
IndexedFaceSet803.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet803.setCreaseAngle(0.5)
Coordinate804 = x3d.Coordinate()
Coordinate804.setUSE("points")

IndexedFaceSet803.setCoord(Coordinate804)

Shape802.setGeometry(IndexedFaceSet803)
Appearance805 = x3d.Appearance()
Material806 = x3d.Material()
Material806.setUSE("SPINAL_COLOR")

Appearance805.setMaterial(Material806)

Shape802.setAppearance(Appearance805)

Transform801.addChildren(Shape802)

HAnimSegment800.addChildren(Transform801)

HAnimJoint799.addChildren(HAnimSegment800)
HAnimJoint807 = x3d.HAnimJoint()
HAnimJoint807.setName("vc3")
HAnimJoint807.setDEF("hanim_vc3")
HAnimJoint807.setCenter([0.0066,1.58,-0.0103])
HAnimJoint807.setStiffness([0,0,0])
HAnimSegment808 = x3d.HAnimSegment()
HAnimSegment808.setName("c3")
HAnimSegment808.setDEF("hanim_c3")
Transform809 = x3d.Transform()
Transform809.setTranslation([0.0066,1.58,-0.0103])
Shape810 = x3d.Shape()
IndexedFaceSet811 = x3d.IndexedFaceSet()
IndexedFaceSet811.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet811.setCreaseAngle(0.5)
Coordinate812 = x3d.Coordinate()
Coordinate812.setUSE("points")

IndexedFaceSet811.setCoord(Coordinate812)

Shape810.setGeometry(IndexedFaceSet811)
Appearance813 = x3d.Appearance()
Material814 = x3d.Material()
Material814.setUSE("SPINAL_COLOR")

Appearance813.setMaterial(Material814)

Shape810.setAppearance(Appearance813)

Transform809.addChildren(Shape810)

HAnimSegment808.addChildren(Transform809)

HAnimJoint807.addChildren(HAnimSegment808)
HAnimJoint815 = x3d.HAnimJoint()
HAnimJoint815.setName("vc2")
HAnimJoint815.setDEF("hanim_vc2")
HAnimJoint815.setCenter([0.0066,1.5928,-0.0103])
HAnimJoint815.setStiffness([0,0,0])
HAnimSegment816 = x3d.HAnimSegment()
HAnimSegment816.setName("c2")
HAnimSegment816.setDEF("hanim_c2")
Transform817 = x3d.Transform()
Transform817.setTranslation([0.0066,1.5928,-0.0103])
Shape818 = x3d.Shape()
IndexedFaceSet819 = x3d.IndexedFaceSet()
IndexedFaceSet819.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet819.setCreaseAngle(0.5)
Coordinate820 = x3d.Coordinate()
Coordinate820.setUSE("points")

IndexedFaceSet819.setCoord(Coordinate820)

Shape818.setGeometry(IndexedFaceSet819)
Appearance821 = x3d.Appearance()
Material822 = x3d.Material()
Material822.setUSE("REC_SPINAL_COLOR")

Appearance821.setMaterial(Material822)

Shape818.setAppearance(Appearance821)

Transform817.addChildren(Shape818)

HAnimSegment816.addChildren(Transform817)

HAnimJoint815.addChildren(HAnimSegment816)
HAnimJoint823 = x3d.HAnimJoint()
HAnimJoint823.setName("vc1")
HAnimJoint823.setDEF("hanim_vc1")
HAnimJoint823.setCenter([0.0066,1.6144,-0.0034])
HAnimJoint823.setStiffness([0,0,0])
HAnimSegment824 = x3d.HAnimSegment()
HAnimSegment824.setName("c1")
HAnimSegment824.setDEF("hanim_c1")
Transform825 = x3d.Transform()
Transform825.setTranslation([0.0066,1.6144,-0.0034])
Shape826 = x3d.Shape()
IndexedFaceSet827 = x3d.IndexedFaceSet()
IndexedFaceSet827.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet827.setCreaseAngle(0.5)
Coordinate828 = x3d.Coordinate()
Coordinate828.setUSE("points")

IndexedFaceSet827.setCoord(Coordinate828)

Shape826.setGeometry(IndexedFaceSet827)
Appearance829 = x3d.Appearance()
Material830 = x3d.Material()
Material830.setUSE("SPINAL_COLOR")

Appearance829.setMaterial(Material830)

Shape826.setAppearance(Appearance829)

Transform825.addChildren(Shape826)

HAnimSegment824.addChildren(Transform825)

HAnimJoint823.addChildren(HAnimSegment824)
HAnimJoint831 = x3d.HAnimJoint()
HAnimJoint831.setName("skullbase")
HAnimJoint831.setDEF("hanim_skullbase")
HAnimJoint831.setCenter([0.0044,1.6209,0.0236])
HAnimJoint831.setStiffness([0,0,0])
HAnimSegment832 = x3d.HAnimSegment()
HAnimSegment832.setName("skull")
HAnimSegment832.setDEF("hanim_skull")
Transform833 = x3d.Transform()
Transform833.setTranslation([0.0044,1.6209,0.0236])
Shape834 = x3d.Shape()
IndexedFaceSet835 = x3d.IndexedFaceSet()
IndexedFaceSet835.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet835.setCreaseAngle(0.5)
Coordinate836 = x3d.Coordinate()
Coordinate836.setUSE("points")

IndexedFaceSet835.setCoord(Coordinate836)

Shape834.setGeometry(IndexedFaceSet835)
Appearance837 = x3d.Appearance()
Material838 = x3d.Material()
Material838.setUSE("MIN_COLOR")

Appearance837.setMaterial(Material838)

Shape834.setAppearance(Appearance837)

Transform833.addChildren(Shape834)

HAnimSegment832.addChildren(Transform833)
HAnimSite839 = x3d.HAnimSite()
HAnimSite839.setName("skull_vertex_tip")
HAnimSite839.setDEF("hanim_skull_vertex_tip")
HAnimSite839.setTranslation([0.005,1.7504,0.0055])
Shape840 = x3d.Shape()
IndexedFaceSet841 = x3d.IndexedFaceSet()
IndexedFaceSet841.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet841.setCreaseAngle(0.5)
Coordinate842 = x3d.Coordinate()
Coordinate842.setUSE("points")

IndexedFaceSet841.setCoord(Coordinate842)

Shape840.setGeometry(IndexedFaceSet841)
Appearance843 = x3d.Appearance()
Material844 = x3d.Material()
Material844.setUSE("SITE_COLOR")

Appearance843.setMaterial(Material844)

Shape840.setAppearance(Appearance843)

HAnimSite839.addChildren(Shape840)

HAnimSegment832.addChildren(HAnimSite839)
HAnimSite845 = x3d.HAnimSite()
HAnimSite845.setName("sellion_pt")
HAnimSite845.setDEF("hanim_sellion_pt")
HAnimSite845.setTranslation([0.0058,1.6316,0.0852])
Shape846 = x3d.Shape()
IndexedFaceSet847 = x3d.IndexedFaceSet()
IndexedFaceSet847.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet847.setCreaseAngle(0.5)
Coordinate848 = x3d.Coordinate()
Coordinate848.setUSE("points")

IndexedFaceSet847.setCoord(Coordinate848)

Shape846.setGeometry(IndexedFaceSet847)
Appearance849 = x3d.Appearance()
Material850 = x3d.Material()
Material850.setUSE("SITE_COLOR")

Appearance849.setMaterial(Material850)

Shape846.setAppearance(Appearance849)

HAnimSite845.addChildren(Shape846)

HAnimSegment832.addChildren(HAnimSite845)
HAnimSite851 = x3d.HAnimSite()
HAnimSite851.setName("r_infraorbitale_pt")
HAnimSite851.setDEF("hanim_r_infraorbitale_pt")
HAnimSite851.setTranslation([-0.0237,1.6171,0.0752])
Shape852 = x3d.Shape()
IndexedFaceSet853 = x3d.IndexedFaceSet()
IndexedFaceSet853.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet853.setCreaseAngle(0.5)
Coordinate854 = x3d.Coordinate()
Coordinate854.setUSE("points")

IndexedFaceSet853.setCoord(Coordinate854)

Shape852.setGeometry(IndexedFaceSet853)
Appearance855 = x3d.Appearance()
Material856 = x3d.Material()
Material856.setUSE("SITE_COLOR")

Appearance855.setMaterial(Material856)

Shape852.setAppearance(Appearance855)

HAnimSite851.addChildren(Shape852)

HAnimSegment832.addChildren(HAnimSite851)
HAnimSite857 = x3d.HAnimSite()
HAnimSite857.setName("l_infraorbitale_pt")
HAnimSite857.setDEF("hanim_l_infraorbitale_pt")
HAnimSite857.setTranslation([0.0341,1.6171,0.0752])
Shape858 = x3d.Shape()
IndexedFaceSet859 = x3d.IndexedFaceSet()
IndexedFaceSet859.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet859.setCreaseAngle(0.5)
Coordinate860 = x3d.Coordinate()
Coordinate860.setUSE("points")

IndexedFaceSet859.setCoord(Coordinate860)

Shape858.setGeometry(IndexedFaceSet859)
Appearance861 = x3d.Appearance()
Material862 = x3d.Material()
Material862.setUSE("SITE_COLOR")

Appearance861.setMaterial(Material862)

Shape858.setAppearance(Appearance861)

HAnimSite857.addChildren(Shape858)

HAnimSegment832.addChildren(HAnimSite857)
HAnimSite863 = x3d.HAnimSite()
HAnimSite863.setName("supramenton_pt")
HAnimSite863.setDEF("hanim_supramenton_pt")
HAnimSite863.setTranslation([0.0061,1.541,0.0805])
Shape864 = x3d.Shape()
IndexedFaceSet865 = x3d.IndexedFaceSet()
IndexedFaceSet865.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet865.setCreaseAngle(0.5)
Coordinate866 = x3d.Coordinate()
Coordinate866.setUSE("points")

IndexedFaceSet865.setCoord(Coordinate866)

Shape864.setGeometry(IndexedFaceSet865)
Appearance867 = x3d.Appearance()
Material868 = x3d.Material()
Material868.setUSE("SITE_COLOR")

Appearance867.setMaterial(Material868)

Shape864.setAppearance(Appearance867)

HAnimSite863.addChildren(Shape864)

HAnimSegment832.addChildren(HAnimSite863)
HAnimSite869 = x3d.HAnimSite()
HAnimSite869.setName("r_tragion_pt")
HAnimSite869.setDEF("hanim_r_tragion_pt")
HAnimSite869.setTranslation([-0.0646,1.6347,0.0302])
Shape870 = x3d.Shape()
IndexedFaceSet871 = x3d.IndexedFaceSet()
IndexedFaceSet871.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet871.setCreaseAngle(0.5)
Coordinate872 = x3d.Coordinate()
Coordinate872.setUSE("points")

IndexedFaceSet871.setCoord(Coordinate872)

Shape870.setGeometry(IndexedFaceSet871)
Appearance873 = x3d.Appearance()
Material874 = x3d.Material()
Material874.setUSE("SITE_COLOR")

Appearance873.setMaterial(Material874)

Shape870.setAppearance(Appearance873)

HAnimSite869.addChildren(Shape870)

HAnimSegment832.addChildren(HAnimSite869)
HAnimSite875 = x3d.HAnimSite()
HAnimSite875.setName("r_gonion_pt")
HAnimSite875.setDEF("hanim_r_gonion_pt")
HAnimSite875.setTranslation([-0.052,1.5529,0.0347])
Shape876 = x3d.Shape()
IndexedFaceSet877 = x3d.IndexedFaceSet()
IndexedFaceSet877.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet877.setCreaseAngle(0.5)
Coordinate878 = x3d.Coordinate()
Coordinate878.setUSE("points")

IndexedFaceSet877.setCoord(Coordinate878)

Shape876.setGeometry(IndexedFaceSet877)
Appearance879 = x3d.Appearance()
Material880 = x3d.Material()
Material880.setUSE("SITE_COLOR")

Appearance879.setMaterial(Material880)

Shape876.setAppearance(Appearance879)

HAnimSite875.addChildren(Shape876)

HAnimSegment832.addChildren(HAnimSite875)
HAnimSite881 = x3d.HAnimSite()
HAnimSite881.setName("l_tragion_pt")
HAnimSite881.setDEF("hanim_l_tragion_pt")
HAnimSite881.setTranslation([0.0739,1.6348,0.0282])
Shape882 = x3d.Shape()
IndexedFaceSet883 = x3d.IndexedFaceSet()
IndexedFaceSet883.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet883.setCreaseAngle(0.5)
Coordinate884 = x3d.Coordinate()
Coordinate884.setUSE("points")

IndexedFaceSet883.setCoord(Coordinate884)

Shape882.setGeometry(IndexedFaceSet883)
Appearance885 = x3d.Appearance()
Material886 = x3d.Material()
Material886.setUSE("SITE_COLOR")

Appearance885.setMaterial(Material886)

Shape882.setAppearance(Appearance885)

HAnimSite881.addChildren(Shape882)

HAnimSegment832.addChildren(HAnimSite881)
HAnimSite887 = x3d.HAnimSite()
HAnimSite887.setName("l_gonion_pt")
HAnimSite887.setDEF("hanim_l_gonion_pt")
HAnimSite887.setTranslation([0.0631,1.553,0.033])
Shape888 = x3d.Shape()
IndexedFaceSet889 = x3d.IndexedFaceSet()
IndexedFaceSet889.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet889.setCreaseAngle(0.5)
Coordinate890 = x3d.Coordinate()
Coordinate890.setUSE("points")

IndexedFaceSet889.setCoord(Coordinate890)

Shape888.setGeometry(IndexedFaceSet889)
Appearance891 = x3d.Appearance()
Material892 = x3d.Material()
Material892.setUSE("SITE_COLOR")

Appearance891.setMaterial(Material892)

Shape888.setAppearance(Appearance891)

HAnimSite887.addChildren(Shape888)

HAnimSegment832.addChildren(HAnimSite887)
HAnimSite893 = x3d.HAnimSite()
HAnimSite893.setName("nuchale_pt")
HAnimSite893.setDEF("hanim_nuchale_pt")
HAnimSite893.setTranslation([0.0039,1.5972,-0.0796])
Shape894 = x3d.Shape()
IndexedFaceSet895 = x3d.IndexedFaceSet()
IndexedFaceSet895.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet895.setCreaseAngle(0.5)
Coordinate896 = x3d.Coordinate()
Coordinate896.setUSE("points")

IndexedFaceSet895.setCoord(Coordinate896)

Shape894.setGeometry(IndexedFaceSet895)
Appearance897 = x3d.Appearance()
Material898 = x3d.Material()
Material898.setUSE("SITE_COLOR")

Appearance897.setMaterial(Material898)

Shape894.setAppearance(Appearance897)

HAnimSite893.addChildren(Shape894)

HAnimSegment832.addChildren(HAnimSite893)

HAnimJoint831.addChildren(HAnimSegment832)

HAnimJoint823.addChildren(HAnimJoint831)

HAnimJoint815.addChildren(HAnimJoint823)

HAnimJoint807.addChildren(HAnimJoint815)

HAnimJoint799.addChildren(HAnimJoint807)

HAnimJoint791.addChildren(HAnimJoint799)

HAnimJoint783.addChildren(HAnimJoint791)

HAnimJoint775.addChildren(HAnimJoint783)

HAnimJoint525.addChildren(HAnimJoint775)

HAnimJoint517.addChildren(HAnimJoint525)

HAnimJoint509.addChildren(HAnimJoint517)

HAnimJoint501.addChildren(HAnimJoint509)

HAnimJoint493.addChildren(HAnimJoint501)

HAnimJoint485.addChildren(HAnimJoint493)

HAnimJoint477.addChildren(HAnimJoint485)

HAnimJoint469.addChildren(HAnimJoint477)

HAnimJoint461.addChildren(HAnimJoint469)

HAnimJoint453.addChildren(HAnimJoint461)

HAnimJoint445.addChildren(HAnimJoint453)

HAnimJoint437.addChildren(HAnimJoint445)

HAnimJoint429.addChildren(HAnimJoint437)

HAnimJoint421.addChildren(HAnimJoint429)

HAnimJoint413.addChildren(HAnimJoint421)

HAnimJoint405.addChildren(HAnimJoint413)

HAnimJoint397.addChildren(HAnimJoint405)

HAnimJoint102.addChildren(HAnimJoint397)

HAnimHumanoid94.setSkeleton(HAnimJoint102)
HAnimSite899 = x3d.HAnimSite()
HAnimSite899.setName("DiamondManLOA2_view")
HAnimSite899.setDEF("hanim_DiamondManLOA2_view")
Viewpoint900 = x3d.Viewpoint()
Viewpoint900.setDEF("FrontView")
Viewpoint900.setDescription("Front View")
Viewpoint900.setPosition([0.35,0.854,2.57665])

HAnimSite899.addChildren(Viewpoint900)
Viewpoint901 = x3d.Viewpoint()
Viewpoint901.setDEF("SideView")
Viewpoint901.setDescription("Side View")
Viewpoint901.setOrientation([0,1,0,1.57079])
Viewpoint901.setPosition([2,0.854,0])

HAnimSite899.addChildren(Viewpoint901)
Viewpoint902 = x3d.Viewpoint()
Viewpoint902.setDEF("TopView")
Viewpoint902.setDescription("Top View")
Viewpoint902.setOrientation([1,0,0,-1.57079])
Viewpoint902.setPosition([0,3.4495,0])

HAnimSite899.addChildren(Viewpoint902)
Viewpoint903 = x3d.Viewpoint()
Viewpoint903.setDEF("RootView")
Viewpoint903.setDescription("Humanoid Root View")
Viewpoint903.setPosition([0,0.824,0.277])

HAnimSite899.addChildren(Viewpoint903)
Viewpoint904 = x3d.Viewpoint()
Viewpoint904.setDEF("InclinedView")
Viewpoint904.setDescription("Inclined View")
Viewpoint904.setOrientation([-0.113,0.993,0.0347,0.671])
Viewpoint904.setPosition([1.62,1.05,2.06])

HAnimSite899.addChildren(Viewpoint904)

HAnimHumanoid94.addViewpoints(HAnimSite899)
HAnimJoint905 = x3d.HAnimJoint()
HAnimJoint905.setUSE("hanim_humanoid_root")

HAnimHumanoid94.addJoints(HAnimJoint905)
HAnimJoint906 = x3d.HAnimJoint()
HAnimJoint906.setUSE("hanim_sacroiliac")

HAnimHumanoid94.addJoints(HAnimJoint906)
HAnimJoint907 = x3d.HAnimJoint()
HAnimJoint907.setUSE("hanim_vl1")

HAnimHumanoid94.addJoints(HAnimJoint907)
HAnimJoint908 = x3d.HAnimJoint()
HAnimJoint908.setUSE("hanim_vc4")

HAnimHumanoid94.addJoints(HAnimJoint908)
HAnimJoint909 = x3d.HAnimJoint()
HAnimJoint909.setUSE("hanim_skullbase")

HAnimHumanoid94.addJoints(HAnimJoint909)
HAnimJoint910 = x3d.HAnimJoint()
HAnimJoint910.setUSE("hanim_vl5")

HAnimHumanoid94.addJoints(HAnimJoint910)
HAnimJoint911 = x3d.HAnimJoint()
HAnimJoint911.setUSE("hanim_vl4")

HAnimHumanoid94.addJoints(HAnimJoint911)
HAnimJoint912 = x3d.HAnimJoint()
HAnimJoint912.setUSE("hanim_vl3")

HAnimHumanoid94.addJoints(HAnimJoint912)
HAnimJoint913 = x3d.HAnimJoint()
HAnimJoint913.setUSE("hanim_vl2")

HAnimHumanoid94.addJoints(HAnimJoint913)
HAnimJoint914 = x3d.HAnimJoint()
HAnimJoint914.setUSE("hanim_vt12")

HAnimHumanoid94.addJoints(HAnimJoint914)
HAnimJoint915 = x3d.HAnimJoint()
HAnimJoint915.setUSE("hanim_vt11")

HAnimHumanoid94.addJoints(HAnimJoint915)
HAnimJoint916 = x3d.HAnimJoint()
HAnimJoint916.setUSE("hanim_vt10")

HAnimHumanoid94.addJoints(HAnimJoint916)
HAnimJoint917 = x3d.HAnimJoint()
HAnimJoint917.setUSE("hanim_vt9")

HAnimHumanoid94.addJoints(HAnimJoint917)
HAnimJoint918 = x3d.HAnimJoint()
HAnimJoint918.setUSE("hanim_vt8")

HAnimHumanoid94.addJoints(HAnimJoint918)
HAnimJoint919 = x3d.HAnimJoint()
HAnimJoint919.setUSE("hanim_vt7")

HAnimHumanoid94.addJoints(HAnimJoint919)
HAnimJoint920 = x3d.HAnimJoint()
HAnimJoint920.setUSE("hanim_vt6")

HAnimHumanoid94.addJoints(HAnimJoint920)
HAnimJoint921 = x3d.HAnimJoint()
HAnimJoint921.setUSE("hanim_vt5")

HAnimHumanoid94.addJoints(HAnimJoint921)
HAnimJoint922 = x3d.HAnimJoint()
HAnimJoint922.setUSE("hanim_vt4")

HAnimHumanoid94.addJoints(HAnimJoint922)
HAnimJoint923 = x3d.HAnimJoint()
HAnimJoint923.setUSE("hanim_vt3")

HAnimHumanoid94.addJoints(HAnimJoint923)
HAnimJoint924 = x3d.HAnimJoint()
HAnimJoint924.setUSE("hanim_vt2")

HAnimHumanoid94.addJoints(HAnimJoint924)
HAnimJoint925 = x3d.HAnimJoint()
HAnimJoint925.setUSE("hanim_vt1")

HAnimHumanoid94.addJoints(HAnimJoint925)
HAnimJoint926 = x3d.HAnimJoint()
HAnimJoint926.setUSE("hanim_vc7")

HAnimHumanoid94.addJoints(HAnimJoint926)
HAnimJoint927 = x3d.HAnimJoint()
HAnimJoint927.setUSE("hanim_vc6")

HAnimHumanoid94.addJoints(HAnimJoint927)
HAnimJoint928 = x3d.HAnimJoint()
HAnimJoint928.setUSE("hanim_vc5")

HAnimHumanoid94.addJoints(HAnimJoint928)
HAnimJoint929 = x3d.HAnimJoint()
HAnimJoint929.setUSE("hanim_vc3")

HAnimHumanoid94.addJoints(HAnimJoint929)
HAnimJoint930 = x3d.HAnimJoint()
HAnimJoint930.setUSE("hanim_vc2")

HAnimHumanoid94.addJoints(HAnimJoint930)
HAnimJoint931 = x3d.HAnimJoint()
HAnimJoint931.setUSE("hanim_vc1")

HAnimHumanoid94.addJoints(HAnimJoint931)
HAnimJoint932 = x3d.HAnimJoint()
HAnimJoint932.setUSE("hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid94.addJoints(HAnimJoint932)
HAnimJoint933 = x3d.HAnimJoint()
HAnimJoint933.setUSE("hanim_l_carpal_interphalangeal_1")

HAnimHumanoid94.addJoints(HAnimJoint933)
HAnimJoint934 = x3d.HAnimJoint()
HAnimJoint934.setUSE("hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid94.addJoints(HAnimJoint934)
HAnimJoint935 = x3d.HAnimJoint()
HAnimJoint935.setUSE("hanim_l_carpometacarpal_1")

HAnimHumanoid94.addJoints(HAnimJoint935)
HAnimJoint936 = x3d.HAnimJoint()
HAnimJoint936.setUSE("hanim_l_carpometacarpal_2")

HAnimHumanoid94.addJoints(HAnimJoint936)
HAnimJoint937 = x3d.HAnimJoint()
HAnimJoint937.setUSE("hanim_l_elbow")

HAnimHumanoid94.addJoints(HAnimJoint937)
HAnimJoint938 = x3d.HAnimJoint()
HAnimJoint938.setUSE("hanim_r_elbow")

HAnimHumanoid94.addJoints(HAnimJoint938)
HAnimJoint939 = x3d.HAnimJoint()
HAnimJoint939.setUSE("hanim_l_hip")

HAnimHumanoid94.addJoints(HAnimJoint939)
HAnimJoint940 = x3d.HAnimJoint()
HAnimJoint940.setUSE("hanim_r_hip")

HAnimHumanoid94.addJoints(HAnimJoint940)
HAnimJoint941 = x3d.HAnimJoint()
HAnimJoint941.setUSE("hanim_l_knee")

HAnimHumanoid94.addJoints(HAnimJoint941)
HAnimJoint942 = x3d.HAnimJoint()
HAnimJoint942.setUSE("hanim_r_knee")

HAnimHumanoid94.addJoints(HAnimJoint942)
HAnimJoint943 = x3d.HAnimJoint()
HAnimJoint943.setUSE("hanim_l_metacarpophalangeal_1")

HAnimHumanoid94.addJoints(HAnimJoint943)
HAnimJoint944 = x3d.HAnimJoint()
HAnimJoint944.setUSE("hanim_l_metacarpophalangeal_2")

HAnimHumanoid94.addJoints(HAnimJoint944)
HAnimJoint945 = x3d.HAnimJoint()
HAnimJoint945.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid94.addJoints(HAnimJoint945)
HAnimJoint946 = x3d.HAnimJoint()
HAnimJoint946.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid94.addJoints(HAnimJoint946)
HAnimJoint947 = x3d.HAnimJoint()
HAnimJoint947.setUSE("hanim_l_radiocarpal")

HAnimHumanoid94.addJoints(HAnimJoint947)
HAnimJoint948 = x3d.HAnimJoint()
HAnimJoint948.setUSE("hanim_r_radiocarpal")

HAnimHumanoid94.addJoints(HAnimJoint948)
HAnimJoint949 = x3d.HAnimJoint()
HAnimJoint949.setUSE("hanim_l_shoulder")

HAnimHumanoid94.addJoints(HAnimJoint949)
HAnimJoint950 = x3d.HAnimJoint()
HAnimJoint950.setUSE("hanim_r_shoulder")

HAnimHumanoid94.addJoints(HAnimJoint950)
HAnimJoint951 = x3d.HAnimJoint()
HAnimJoint951.setUSE("hanim_l_talocrural")

HAnimHumanoid94.addJoints(HAnimJoint951)
HAnimJoint952 = x3d.HAnimJoint()
HAnimJoint952.setUSE("hanim_r_talocrural")

HAnimHumanoid94.addJoints(HAnimJoint952)
HAnimJoint953 = x3d.HAnimJoint()
HAnimJoint953.setUSE("hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid94.addJoints(HAnimJoint953)
HAnimJoint954 = x3d.HAnimJoint()
HAnimJoint954.setUSE("hanim_l_tarsometatarsal_2")

HAnimHumanoid94.addJoints(HAnimJoint954)
HAnimSegment955 = x3d.HAnimSegment()
HAnimSegment955.setUSE("hanim_pelvis")

HAnimHumanoid94.addSegments(HAnimSegment955)
HAnimSegment956 = x3d.HAnimSegment()
HAnimSegment956.setUSE("hanim_c7")

HAnimHumanoid94.addSegments(HAnimSegment956)
HAnimSegment957 = x3d.HAnimSegment()
HAnimSegment957.setUSE("hanim_c4")

HAnimHumanoid94.addSegments(HAnimSegment957)
HAnimSegment958 = x3d.HAnimSegment()
HAnimSegment958.setUSE("hanim_skull")

HAnimHumanoid94.addSegments(HAnimSegment958)
HAnimSegment959 = x3d.HAnimSegment()
HAnimSegment959.setUSE("hanim_sacrum")

HAnimHumanoid94.addSegments(HAnimSegment959)
HAnimSegment960 = x3d.HAnimSegment()
HAnimSegment960.setUSE("hanim_l5")

HAnimHumanoid94.addSegments(HAnimSegment960)
HAnimSegment961 = x3d.HAnimSegment()
HAnimSegment961.setUSE("hanim_l4")

HAnimHumanoid94.addSegments(HAnimSegment961)
HAnimSegment962 = x3d.HAnimSegment()
HAnimSegment962.setUSE("hanim_l3")

HAnimHumanoid94.addSegments(HAnimSegment962)
HAnimSegment963 = x3d.HAnimSegment()
HAnimSegment963.setUSE("hanim_l2")

HAnimHumanoid94.addSegments(HAnimSegment963)
HAnimSegment964 = x3d.HAnimSegment()
HAnimSegment964.setUSE("hanim_l1")

HAnimHumanoid94.addSegments(HAnimSegment964)
HAnimSegment965 = x3d.HAnimSegment()
HAnimSegment965.setUSE("hanim_t12")

HAnimHumanoid94.addSegments(HAnimSegment965)
HAnimSegment966 = x3d.HAnimSegment()
HAnimSegment966.setUSE("hanim_t11")

HAnimHumanoid94.addSegments(HAnimSegment966)
HAnimSegment967 = x3d.HAnimSegment()
HAnimSegment967.setUSE("hanim_t10")

HAnimHumanoid94.addSegments(HAnimSegment967)
HAnimSegment968 = x3d.HAnimSegment()
HAnimSegment968.setUSE("hanim_t9")

HAnimHumanoid94.addSegments(HAnimSegment968)
HAnimSegment969 = x3d.HAnimSegment()
HAnimSegment969.setUSE("hanim_t8")

HAnimHumanoid94.addSegments(HAnimSegment969)
HAnimSegment970 = x3d.HAnimSegment()
HAnimSegment970.setUSE("hanim_t7")

HAnimHumanoid94.addSegments(HAnimSegment970)
HAnimSegment971 = x3d.HAnimSegment()
HAnimSegment971.setUSE("hanim_t6")

HAnimHumanoid94.addSegments(HAnimSegment971)
HAnimSegment972 = x3d.HAnimSegment()
HAnimSegment972.setUSE("hanim_t5")

HAnimHumanoid94.addSegments(HAnimSegment972)
HAnimSegment973 = x3d.HAnimSegment()
HAnimSegment973.setUSE("hanim_t4")

HAnimHumanoid94.addSegments(HAnimSegment973)
HAnimSegment974 = x3d.HAnimSegment()
HAnimSegment974.setUSE("hanim_t3")

HAnimHumanoid94.addSegments(HAnimSegment974)
HAnimSegment975 = x3d.HAnimSegment()
HAnimSegment975.setUSE("hanim_t2")

HAnimHumanoid94.addSegments(HAnimSegment975)
HAnimSegment976 = x3d.HAnimSegment()
HAnimSegment976.setUSE("hanim_t1")

HAnimHumanoid94.addSegments(HAnimSegment976)
HAnimSegment977 = x3d.HAnimSegment()
HAnimSegment977.setUSE("hanim_c6")

HAnimHumanoid94.addSegments(HAnimSegment977)
HAnimSegment978 = x3d.HAnimSegment()
HAnimSegment978.setUSE("hanim_c5")

HAnimHumanoid94.addSegments(HAnimSegment978)
HAnimSegment979 = x3d.HAnimSegment()
HAnimSegment979.setUSE("hanim_c3")

HAnimHumanoid94.addSegments(HAnimSegment979)
HAnimSegment980 = x3d.HAnimSegment()
HAnimSegment980.setUSE("hanim_c2")

HAnimHumanoid94.addSegments(HAnimSegment980)
HAnimSegment981 = x3d.HAnimSegment()
HAnimSegment981.setUSE("hanim_c1")

HAnimHumanoid94.addSegments(HAnimSegment981)
HAnimSegment982 = x3d.HAnimSegment()
HAnimSegment982.setUSE("hanim_l_calf")

HAnimHumanoid94.addSegments(HAnimSegment982)
HAnimSegment983 = x3d.HAnimSegment()
HAnimSegment983.setUSE("hanim_r_calf")

HAnimHumanoid94.addSegments(HAnimSegment983)
HAnimSegment984 = x3d.HAnimSegment()
HAnimSegment984.setUSE("hanim_l_carpal")

HAnimHumanoid94.addSegments(HAnimSegment984)
HAnimSegment985 = x3d.HAnimSegment()
HAnimSegment985.setUSE("hanim_r_carpal")

HAnimHumanoid94.addSegments(HAnimSegment985)
HAnimSegment986 = x3d.HAnimSegment()
HAnimSegment986.setUSE("hanim_l_carpal_distal_phalanx_1")

HAnimHumanoid94.addSegments(HAnimSegment986)
HAnimSegment987 = x3d.HAnimSegment()
HAnimSegment987.setUSE("hanim_l_carpal_distal_phalanx_2")

HAnimHumanoid94.addSegments(HAnimSegment987)
HAnimSegment988 = x3d.HAnimSegment()
HAnimSegment988.setUSE("hanim_l_carpal_middle_phalanx_2")

HAnimHumanoid94.addSegments(HAnimSegment988)
HAnimSegment989 = x3d.HAnimSegment()
HAnimSegment989.setUSE("hanim_l_carpal_proximal_phalanx_1")

HAnimHumanoid94.addSegments(HAnimSegment989)
HAnimSegment990 = x3d.HAnimSegment()
HAnimSegment990.setUSE("hanim_l_carpal_proximal_phalanx_2")

HAnimHumanoid94.addSegments(HAnimSegment990)
HAnimSegment991 = x3d.HAnimSegment()
HAnimSegment991.setUSE("hanim_l_forearm")

HAnimHumanoid94.addSegments(HAnimSegment991)
HAnimSegment992 = x3d.HAnimSegment()
HAnimSegment992.setUSE("hanim_r_forearm")

HAnimHumanoid94.addSegments(HAnimSegment992)
HAnimSegment993 = x3d.HAnimSegment()
HAnimSegment993.setUSE("hanim_l_metacarpal_1")

HAnimHumanoid94.addSegments(HAnimSegment993)
HAnimSegment994 = x3d.HAnimSegment()
HAnimSegment994.setUSE("hanim_l_metacarpal_2")

HAnimHumanoid94.addSegments(HAnimSegment994)
HAnimSegment995 = x3d.HAnimSegment()
HAnimSegment995.setUSE("hanim_l_metatarsal_2")

HAnimHumanoid94.addSegments(HAnimSegment995)
HAnimSegment996 = x3d.HAnimSegment()
HAnimSegment996.setUSE("hanim_l_talus")

HAnimHumanoid94.addSegments(HAnimSegment996)
HAnimSegment997 = x3d.HAnimSegment()
HAnimSegment997.setUSE("hanim_r_talus")

HAnimHumanoid94.addSegments(HAnimSegment997)
HAnimSegment998 = x3d.HAnimSegment()
HAnimSegment998.setUSE("hanim_l_tarsal_distal_phalanx_2")

HAnimHumanoid94.addSegments(HAnimSegment998)
HAnimSegment999 = x3d.HAnimSegment()
HAnimSegment999.setUSE("hanim_l_tarsal_proximal_phalanx_2")

HAnimHumanoid94.addSegments(HAnimSegment999)
HAnimSegment1000 = x3d.HAnimSegment()
HAnimSegment1000.setUSE("hanim_r_tarsal_proximal_phalanx_2")

HAnimHumanoid94.addSegments(HAnimSegment1000)
HAnimSegment1001 = x3d.HAnimSegment()
HAnimSegment1001.setUSE("hanim_l_thigh")

HAnimHumanoid94.addSegments(HAnimSegment1001)
HAnimSegment1002 = x3d.HAnimSegment()
HAnimSegment1002.setUSE("hanim_r_thigh")

HAnimHumanoid94.addSegments(HAnimSegment1002)
HAnimSegment1003 = x3d.HAnimSegment()
HAnimSegment1003.setUSE("hanim_l_upperarm")

HAnimHumanoid94.addSegments(HAnimSegment1003)
HAnimSegment1004 = x3d.HAnimSegment()
HAnimSegment1004.setUSE("hanim_r_upperarm")

HAnimHumanoid94.addSegments(HAnimSegment1004)
HAnimSite1005 = x3d.HAnimSite()
HAnimSite1005.setUSE("hanim_crotch_pt")

HAnimHumanoid94.addSites(HAnimSite1005)
HAnimSite1006 = x3d.HAnimSite()
HAnimSite1006.setUSE("hanim_skull_vertex_tip")

HAnimHumanoid94.addSites(HAnimSite1006)
HAnimSite1007 = x3d.HAnimSite()
HAnimSite1007.setUSE("hanim_sellion_pt")

HAnimHumanoid94.addSites(HAnimSite1007)
HAnimSite1008 = x3d.HAnimSite()
HAnimSite1008.setUSE("hanim_supramenton_pt")

HAnimHumanoid94.addSites(HAnimSite1008)
HAnimSite1009 = x3d.HAnimSite()
HAnimSite1009.setUSE("hanim_nuchale_pt")

HAnimHumanoid94.addSites(HAnimSite1009)
HAnimSite1010 = x3d.HAnimSite()
HAnimSite1010.setUSE("hanim_r_asis_pt")

HAnimHumanoid94.addSites(HAnimSite1010)
HAnimSite1011 = x3d.HAnimSite()
HAnimSite1011.setUSE("hanim_l_asis_pt")

HAnimHumanoid94.addSites(HAnimSite1011)
HAnimSite1012 = x3d.HAnimSite()
HAnimSite1012.setUSE("hanim_l_calcaneus_posterior_pt")

HAnimHumanoid94.addSites(HAnimSite1012)
HAnimSite1013 = x3d.HAnimSite()
HAnimSite1013.setUSE("hanim_r_calcaneus_posterior_pt")

HAnimHumanoid94.addSites(HAnimSite1013)
HAnimSite1014 = x3d.HAnimSite()
HAnimSite1014.setUSE("hanim_l_carpal_distal_phalanx_1_tip")

HAnimHumanoid94.addSites(HAnimSite1014)
HAnimSite1015 = x3d.HAnimSite()
HAnimSite1015.setUSE("hanim_l_carpal_distal_phalanx_2_tip")

HAnimHumanoid94.addSites(HAnimSite1015)
HAnimSite1016 = x3d.HAnimSite()
HAnimSite1016.setUSE("hanim_l_dactylion_pt")

HAnimHumanoid94.addSites(HAnimSite1016)
HAnimSite1017 = x3d.HAnimSite()
HAnimSite1017.setUSE("hanim_r_dactylion_pt")

HAnimHumanoid94.addSites(HAnimSite1017)
HAnimSite1018 = x3d.HAnimSite()
HAnimSite1018.setUSE("hanim_l_femoral_lateral_epicondyle_pt")

HAnimHumanoid94.addSites(HAnimSite1018)
HAnimSite1019 = x3d.HAnimSite()
HAnimSite1019.setUSE("hanim_r_femoral_lateral_epicondyle_pt")

HAnimHumanoid94.addSites(HAnimSite1019)
HAnimSite1020 = x3d.HAnimSite()
HAnimSite1020.setUSE("hanim_l_femoral_medial_epicondyle_pt")

HAnimHumanoid94.addSites(HAnimSite1020)
HAnimSite1021 = x3d.HAnimSite()
HAnimSite1021.setUSE("hanim_r_femoral_medial_epicondyle_pt")

HAnimHumanoid94.addSites(HAnimSite1021)
HAnimSite1022 = x3d.HAnimSite()
HAnimSite1022.setUSE("hanim_l_forefoot_tip")

HAnimHumanoid94.addSites(HAnimSite1022)
HAnimSite1023 = x3d.HAnimSite()
HAnimSite1023.setUSE("hanim_r_gonion_pt")

HAnimHumanoid94.addSites(HAnimSite1023)
HAnimSite1024 = x3d.HAnimSite()
HAnimSite1024.setUSE("hanim_l_gonion_pt")

HAnimHumanoid94.addSites(HAnimSite1024)
HAnimSite1025 = x3d.HAnimSite()
HAnimSite1025.setUSE("hanim_l_hand_tip")

HAnimHumanoid94.addSites(HAnimSite1025)
HAnimSite1026 = x3d.HAnimSite()
HAnimSite1026.setUSE("hanim_r_hand_tip")

HAnimHumanoid94.addSites(HAnimSite1026)
HAnimSite1027 = x3d.HAnimSite()
HAnimSite1027.setUSE("hanim_l_humeral_lateral_epicondyle_pt")

HAnimHumanoid94.addSites(HAnimSite1027)
HAnimSite1028 = x3d.HAnimSite()
HAnimSite1028.setUSE("hanim_r_humeral_lateral_epicondyle_pt")

HAnimHumanoid94.addSites(HAnimSite1028)
HAnimSite1029 = x3d.HAnimSite()
HAnimSite1029.setUSE("hanim_l_humeral_medial_epicondyle_pt")

HAnimHumanoid94.addSites(HAnimSite1029)
HAnimSite1030 = x3d.HAnimSite()
HAnimSite1030.setUSE("hanim_r_humeral_medial_epicondyle_pt")

HAnimHumanoid94.addSites(HAnimSite1030)
HAnimSite1031 = x3d.HAnimSite()
HAnimSite1031.setUSE("hanim_r_iliocristale_pt")

HAnimHumanoid94.addSites(HAnimSite1031)
HAnimSite1032 = x3d.HAnimSite()
HAnimSite1032.setUSE("hanim_l_iliocristale_pt")

HAnimHumanoid94.addSites(HAnimSite1032)
HAnimSite1033 = x3d.HAnimSite()
HAnimSite1033.setUSE("hanim_r_infraorbitale_pt")

HAnimHumanoid94.addSites(HAnimSite1033)
HAnimSite1034 = x3d.HAnimSite()
HAnimSite1034.setUSE("hanim_l_infraorbitale_pt")

HAnimHumanoid94.addSites(HAnimSite1034)
HAnimSite1035 = x3d.HAnimSite()
HAnimSite1035.setUSE("hanim_l_knee_crease_pt")

HAnimHumanoid94.addSites(HAnimSite1035)
HAnimSite1036 = x3d.HAnimSite()
HAnimSite1036.setUSE("hanim_r_knee_crease_pt")

HAnimHumanoid94.addSites(HAnimSite1036)
HAnimSite1037 = x3d.HAnimSite()
HAnimSite1037.setUSE("hanim_l_lateral_malleolus_pt")

HAnimHumanoid94.addSites(HAnimSite1037)
HAnimSite1038 = x3d.HAnimSite()
HAnimSite1038.setUSE("hanim_r_lateral_malleolus_pt")

HAnimHumanoid94.addSites(HAnimSite1038)
HAnimSite1039 = x3d.HAnimSite()
HAnimSite1039.setUSE("hanim_l_medial_malleolus_pt")

HAnimHumanoid94.addSites(HAnimSite1039)
HAnimSite1040 = x3d.HAnimSite()
HAnimSite1040.setUSE("hanim_r_medial_malleolus_pt")

HAnimHumanoid94.addSites(HAnimSite1040)
HAnimSite1041 = x3d.HAnimSite()
HAnimSite1041.setUSE("hanim_l_metacarpal_phalanx_2_pt")

HAnimHumanoid94.addSites(HAnimSite1041)
HAnimSite1042 = x3d.HAnimSite()
HAnimSite1042.setUSE("hanim_r_metacarpal_phalanx_2_pt")

HAnimHumanoid94.addSites(HAnimSite1042)
HAnimSite1043 = x3d.HAnimSite()
HAnimSite1043.setUSE("hanim_l_metacarpal_phalanx_5_pt")

HAnimHumanoid94.addSites(HAnimSite1043)
HAnimSite1044 = x3d.HAnimSite()
HAnimSite1044.setUSE("hanim_r_metacarpal_phalanx_5_pt")

HAnimHumanoid94.addSites(HAnimSite1044)
HAnimSite1045 = x3d.HAnimSite()
HAnimSite1045.setUSE("hanim_l_metatarsal_phalanx_1_pt")

HAnimHumanoid94.addSites(HAnimSite1045)
HAnimSite1046 = x3d.HAnimSite()
HAnimSite1046.setUSE("hanim_r_metatarsal_phalanx_1_pt")

HAnimHumanoid94.addSites(HAnimSite1046)
HAnimSite1047 = x3d.HAnimSite()
HAnimSite1047.setUSE("hanim_l_metatarsal_phalanx_5_pt")

HAnimHumanoid94.addSites(HAnimSite1047)
HAnimSite1048 = x3d.HAnimSite()
HAnimSite1048.setUSE("hanim_r_metatarsal_phalanx_5_pt")

HAnimHumanoid94.addSites(HAnimSite1048)
HAnimSite1049 = x3d.HAnimSite()
HAnimSite1049.setUSE("hanim_l_middistal_tip")

HAnimHumanoid94.addSites(HAnimSite1049)
HAnimSite1050 = x3d.HAnimSite()
HAnimSite1050.setUSE("hanim_r_middistal_tip")

HAnimHumanoid94.addSites(HAnimSite1050)
HAnimSite1051 = x3d.HAnimSite()
HAnimSite1051.setUSE("hanim_l_olecranon_pt")

HAnimHumanoid94.addSites(HAnimSite1051)
HAnimSite1052 = x3d.HAnimSite()
HAnimSite1052.setUSE("hanim_r_olecranon_pt")

HAnimHumanoid94.addSites(HAnimSite1052)
HAnimSite1053 = x3d.HAnimSite()
HAnimSite1053.setUSE("hanim_r_psis_pt")

HAnimHumanoid94.addSites(HAnimSite1053)
HAnimSite1054 = x3d.HAnimSite()
HAnimSite1054.setUSE("hanim_l_psis_pt")

HAnimHumanoid94.addSites(HAnimSite1054)
HAnimSite1055 = x3d.HAnimSite()
HAnimSite1055.setUSE("hanim_l_radial_styloid_pt")

HAnimHumanoid94.addSites(HAnimSite1055)
HAnimSite1056 = x3d.HAnimSite()
HAnimSite1056.setUSE("hanim_r_radial_styloid_pt")

HAnimHumanoid94.addSites(HAnimSite1056)
HAnimSite1057 = x3d.HAnimSite()
HAnimSite1057.setUSE("hanim_l_radiale_pt")

HAnimHumanoid94.addSites(HAnimSite1057)
HAnimSite1058 = x3d.HAnimSite()
HAnimSite1058.setUSE("hanim_r_radiale_pt")

HAnimHumanoid94.addSites(HAnimSite1058)
HAnimSite1059 = x3d.HAnimSite()
HAnimSite1059.setUSE("hanim_l_sphyrion_pt")

HAnimHumanoid94.addSites(HAnimSite1059)
HAnimSite1060 = x3d.HAnimSite()
HAnimSite1060.setUSE("hanim_r_sphyrion_pt")

HAnimHumanoid94.addSites(HAnimSite1060)
HAnimSite1061 = x3d.HAnimSite()
HAnimSite1061.setUSE("hanim_l_tarsal_distal_phalanx_2_pt")

HAnimHumanoid94.addSites(HAnimSite1061)
HAnimSite1062 = x3d.HAnimSite()
HAnimSite1062.setUSE("hanim_r_tarsal_distal_phalanx_2_pt")

HAnimHumanoid94.addSites(HAnimSite1062)
HAnimSite1063 = x3d.HAnimSite()
HAnimSite1063.setUSE("hanim_r_tragion_pt")

HAnimHumanoid94.addSites(HAnimSite1063)
HAnimSite1064 = x3d.HAnimSite()
HAnimSite1064.setUSE("hanim_l_tragion_pt")

HAnimHumanoid94.addSites(HAnimSite1064)
HAnimSite1065 = x3d.HAnimSite()
HAnimSite1065.setUSE("hanim_r_trochanterion_pt")

HAnimHumanoid94.addSites(HAnimSite1065)
HAnimSite1066 = x3d.HAnimSite()
HAnimSite1066.setUSE("hanim_l_trochanterion_pt")

HAnimHumanoid94.addSites(HAnimSite1066)
HAnimSite1067 = x3d.HAnimSite()
HAnimSite1067.setUSE("hanim_l_ulnar_styloid_pt")

HAnimHumanoid94.addSites(HAnimSite1067)
HAnimSite1068 = x3d.HAnimSite()
HAnimSite1068.setUSE("hanim_r_ulnar_styloid_pt")

HAnimHumanoid94.addSites(HAnimSite1068)

Scene17.addChildren(HAnimHumanoid94)

X3D0.setScene(Scene17)
X3D0.toFileX3D("../data/DiamondManLOA2_RoundTrip.x3d")
