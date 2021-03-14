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
meta8.setContent("20 February 2021")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("Image")
meta9.setContent("DiamondManLOA2.png")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("TODO")
meta10.setContent("can X3dTidy sort top-level USE nodes by node type?")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("Image")
meta11.setContent("images/BonesAllSkeletonFrontViewLOA2.png")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("motto")
meta12.setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("reference")
meta13.setContent("The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("subject")
meta14.setContent("human animation, x3d, vrml, animation")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("identifier")
meta15.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA2.x3d")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("generator")
meta16.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("license")
meta17.setContent("../license.html")

head1.addMeta(meta17)

X3D0.setHead(head1)
Scene18 = x3d.Scene()
WorldInfo19 = x3d.WorldInfo()
WorldInfo19.setInfo(["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 2 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"])
WorldInfo19.setTitle("HANIM 1.1 Default Joint Centers, LOA1")

Scene18.addChildren(WorldInfo19)
NavigationInfo20 = x3d.NavigationInfo()
NavigationInfo20.setSpeed(1.5)

Scene18.addChildren(NavigationInfo20)
Viewpoint21 = x3d.Viewpoint()
Viewpoint21.setCenterOfRotation([0,1,0])
Viewpoint21.setDescription("Diamond Man, LOA 2")
Viewpoint21.setPosition([0,1,3])

Scene18.addChildren(Viewpoint21)
Transform22 = x3d.Transform()
Transform22.setTranslation([1,1.5,0])
Billboard23 = x3d.Billboard()
Shape24 = x3d.Shape()
Text25 = x3d.Text()
Text25.setString(["Diamond Man Key"])
FontStyle26 = x3d.FontStyle()
FontStyle26.setFamily(["SANS"])
FontStyle26.setSize(0.1)

Text25.setFontStyle(FontStyle26)

Shape24.setGeometry(Text25)
Appearance27 = x3d.Appearance()
Material28 = x3d.Material()
Material28.setDEF("TextMaterial")
Material28.setDiffuseColor([0.9,0.9,0.9])

Appearance27.setMaterial(Material28)

Shape24.setAppearance(Appearance27)

Billboard23.addChildren(Shape24)
Transform29 = x3d.Transform()
Transform29.setTranslation([0,-0.3,0])
Shape30 = x3d.Shape()
Sphere31 = x3d.Sphere()
Sphere31.setRadius(0.08)

Shape30.setGeometry(Sphere31)
Appearance32 = x3d.Appearance()
Material33 = x3d.Material()
Material33.setDEF("MIN_COLOR")
Material33.setDiffuseColor([1,0,0])

Appearance32.setMaterial(Material33)

Shape30.setAppearance(Appearance32)

Transform29.addChildren(Shape30)
Transform34 = x3d.Transform()
Transform34.setTranslation([0.2,0,0])
Shape35 = x3d.Shape()
Text36 = x3d.Text()
Text36.setString(["Minimal Humanoid Joints"])
FontStyle37 = x3d.FontStyle()
FontStyle37.setFamily(["SANS"])
FontStyle37.setSize(0.1)

Text36.setFontStyle(FontStyle37)

Shape35.setGeometry(Text36)
Appearance38 = x3d.Appearance()
Material39 = x3d.Material()
Material39.setUSE("TextMaterial")

Appearance38.setMaterial(Material39)

Shape35.setAppearance(Appearance38)

Transform34.addChildren(Shape35)

Transform29.addChildren(Transform34)

Billboard23.addChildren(Transform29)
Transform40 = x3d.Transform()
Transform40.setTranslation([0,-0.5,0])
Shape41 = x3d.Shape()
Sphere42 = x3d.Sphere()
Sphere42.setRadius(0.08)

Shape41.setGeometry(Sphere42)
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()
Material44.setDEF("JOINT_COLOR")
Material44.setDiffuseColor([1,1,0])

Appearance43.setMaterial(Material44)

Shape41.setAppearance(Appearance43)

Transform40.addChildren(Shape41)
Transform45 = x3d.Transform()
Transform45.setTranslation([0.2,0,0])
Shape46 = x3d.Shape()
Text47 = x3d.Text()
Text47.setString(["Humanoid Joints"])
FontStyle48 = x3d.FontStyle()
FontStyle48.setFamily(["SANS"])
FontStyle48.setSize(0.1)

Text47.setFontStyle(FontStyle48)

Shape46.setGeometry(Text47)
Appearance49 = x3d.Appearance()
Material50 = x3d.Material()
Material50.setUSE("TextMaterial")

Appearance49.setMaterial(Material50)

Shape46.setAppearance(Appearance49)

Transform45.addChildren(Shape46)

Transform40.addChildren(Transform45)

Billboard23.addChildren(Transform40)
Transform51 = x3d.Transform()
Transform51.setTranslation([0,-0.7,0])
Shape52 = x3d.Shape()
Sphere53 = x3d.Sphere()
Sphere53.setRadius(0.08)

Shape52.setGeometry(Sphere53)
Appearance54 = x3d.Appearance()
Material55 = x3d.Material()
Material55.setDEF("REC_SPINAL_COLOR")
Material55.setDiffuseColor([1,0,1])

Appearance54.setMaterial(Material55)

Shape52.setAppearance(Appearance54)

Transform51.addChildren(Shape52)
Transform56 = x3d.Transform()
Transform56.setTranslation([0.2,0,0])
Shape57 = x3d.Shape()
Text58 = x3d.Text()
Text58.setString(["Recommended Spinal Joints"])
FontStyle59 = x3d.FontStyle()
FontStyle59.setFamily(["SANS"])
FontStyle59.setSize(0.1)

Text58.setFontStyle(FontStyle59)

Shape57.setGeometry(Text58)
Appearance60 = x3d.Appearance()
Material61 = x3d.Material()
Material61.setUSE("TextMaterial")

Appearance60.setMaterial(Material61)

Shape57.setAppearance(Appearance60)

Transform56.addChildren(Shape57)

Transform51.addChildren(Transform56)

Billboard23.addChildren(Transform51)
Transform62 = x3d.Transform()
Transform62.setTranslation([0,-0.9,0])
Shape63 = x3d.Shape()
Sphere64 = x3d.Sphere()
Sphere64.setRadius(0.08)

Shape63.setGeometry(Sphere64)
Appearance65 = x3d.Appearance()
Material66 = x3d.Material()
Material66.setDEF("SPINAL_COLOR")
Material66.setDiffuseColor([0,1,0])

Appearance65.setMaterial(Material66)

Shape63.setAppearance(Appearance65)

Transform62.addChildren(Shape63)
Transform67 = x3d.Transform()
Transform67.setTranslation([0.2,0,0])
Shape68 = x3d.Shape()
Text69 = x3d.Text()
Text69.setString(["Spinal Joints"])
FontStyle70 = x3d.FontStyle()
FontStyle70.setFamily(["SANS"])
FontStyle70.setSize(0.1)

Text69.setFontStyle(FontStyle70)

Shape68.setGeometry(Text69)
Appearance71 = x3d.Appearance()
Material72 = x3d.Material()
Material72.setUSE("TextMaterial")

Appearance71.setMaterial(Material72)

Shape68.setAppearance(Appearance71)

Transform67.addChildren(Shape68)

Transform62.addChildren(Transform67)

Billboard23.addChildren(Transform62)
Transform73 = x3d.Transform()
Transform73.setTranslation([0,-1.3,0])
Shape74 = x3d.Shape()
Sphere75 = x3d.Sphere()
Sphere75.setRadius(0.08)

Shape74.setGeometry(Sphere75)
Appearance76 = x3d.Appearance()
Material77 = x3d.Material()
Material77.setDEF("SITE_COLOR")
Material77.setDiffuseColor([0,0,1])

Appearance76.setMaterial(Material77)

Shape74.setAppearance(Appearance76)

Transform73.addChildren(Shape74)
Transform78 = x3d.Transform()
Transform78.setTranslation([0.2,0,0])
Shape79 = x3d.Shape()
Text80 = x3d.Text()
Text80.setString(["Humanoid Sites"])
FontStyle81 = x3d.FontStyle()
FontStyle81.setFamily(["SANS"])
FontStyle81.setSize(0.1)

Text80.setFontStyle(FontStyle81)

Shape79.setGeometry(Text80)
Appearance82 = x3d.Appearance()
Material83 = x3d.Material()
Material83.setUSE("TextMaterial")

Appearance82.setMaterial(Material83)

Shape79.setAppearance(Appearance82)

Transform78.addChildren(Shape79)

Transform73.addChildren(Transform78)

Billboard23.addChildren(Transform73)
Transform84 = x3d.Transform()
Transform84.setTranslation([0,-1.1,0])
Shape85 = x3d.Shape()
Sphere86 = x3d.Sphere()
Sphere86.setRadius(0.08)

Shape85.setGeometry(Sphere86)
Appearance87 = x3d.Appearance()
Material88 = x3d.Material()
Material88.setDEF("HAND_FEET_COLOR")
Material88.setDiffuseColor([0,1,1])

Appearance87.setMaterial(Material88)

Shape85.setAppearance(Appearance87)

Transform84.addChildren(Shape85)
Transform89 = x3d.Transform()
Transform89.setTranslation([0.2,0,0])
Shape90 = x3d.Shape()
Text91 = x3d.Text()
Text91.setString(["Hand & Feet Joints"])
FontStyle92 = x3d.FontStyle()
FontStyle92.setFamily(["SANS"])
FontStyle92.setSize(0.1)

Text91.setFontStyle(FontStyle92)

Shape90.setGeometry(Text91)
Appearance93 = x3d.Appearance()
Material94 = x3d.Material()
Material94.setUSE("TextMaterial")

Appearance93.setMaterial(Material94)

Shape90.setAppearance(Appearance93)

Transform89.addChildren(Shape90)

Transform84.addChildren(Transform89)

Billboard23.addChildren(Transform84)

Transform22.addChildren(Billboard23)

Scene18.addChildren(Transform22)
HAnimHumanoid95 = x3d.HAnimHumanoid()
HAnimHumanoid95.setName("humanoid")
HAnimHumanoid95.setDEF("hanim_humanoid")
HAnimHumanoid95.setVersion("2.0")
#HAnimHumanoid original info='\"humanoidVersion=Nancy V1.2b\" \"authorName=Cindy Ballreich\" \"authorEmail=cindy@ballreich.net\" \"copyright=1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved.\" \"creationDate=Tue Dec 30 08:30:08 PST 1997\" \"usageRestrictions=Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given.\"'
MetadataSet96 = x3d.MetadataSet()
MetadataSet96.setName("HAnimHumanoid.info")
MetadataSet96.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
MetadataString97 = x3d.MetadataString()
MetadataString97.setName("humanoidVersion")
MetadataString97.setValue(["Nancy V1.2b"])

MetadataSet96.setValue(MetadataString97)
MetadataString98 = x3d.MetadataString()
MetadataString98.setName("authorEmail")
MetadataString98.setValue(["cindy@ballreich.net"])

MetadataSet96.addValue(MetadataString98)
MetadataString99 = x3d.MetadataString()
MetadataString99.setName("authorName")
MetadataString99.setValue(["Cindy Ballreich"])

MetadataSet96.addValue(MetadataString99)
MetadataString100 = x3d.MetadataString()
MetadataString100.setName("copyright")
MetadataString100.setValue(["1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved."])

MetadataSet96.addValue(MetadataString100)
MetadataString101 = x3d.MetadataString()
MetadataString101.setName("creationDate")
MetadataString101.setValue(["Tue Dec 30 08:30:08 PST 1997"])

MetadataSet96.addValue(MetadataString101)
MetadataString102 = x3d.MetadataString()
MetadataString102.setName("usageRestrictions")
MetadataString102.setValue(["Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given."])

MetadataSet96.addValue(MetadataString102)

HAnimHumanoid95.setMetadata(MetadataSet96)
HAnimJoint103 = x3d.HAnimJoint()
HAnimJoint103.setName("humanoid_root")
HAnimJoint103.setDEF("hanim_humanoid_root")
HAnimJoint103.setCenter([0,0.824,0.0277])
HAnimSegment104 = x3d.HAnimSegment()
HAnimSegment104.setName("segmentNameNeededTODO-93")
HAnimSegment104.setDEF("hanim_segmentNameNeededTODO-93")
Transform105 = x3d.Transform()
Transform105.setTranslation([0,0.824,0.0277])
Shape106 = x3d.Shape()
Shape106.setDEF("DiamondShape")
IndexedFaceSet107 = x3d.IndexedFaceSet()
IndexedFaceSet107.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet107.setCreaseAngle(0.5)
Coordinate108 = x3d.Coordinate()
Coordinate108.setDEF("points")
Coordinate108.setPoint([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])

IndexedFaceSet107.setCoord(Coordinate108)

Shape106.setGeometry(IndexedFaceSet107)
Appearance109 = x3d.Appearance()
Material110 = x3d.Material()
Material110.setDEF("ROOT_COLOR")
Material110.setDiffuseColor([1,1,1])

Appearance109.setMaterial(Material110)

Shape106.setAppearance(Appearance109)

Transform105.addChildren(Shape106)
Transform111 = x3d.Transform()
Transform111.setTranslation([0,0.01,0])
Billboard112 = x3d.Billboard()
Shape113 = x3d.Shape()
Text114 = x3d.Text()
Text114.setString(["Humanoid Root"])
FontStyle115 = x3d.FontStyle()
FontStyle115.setFamily(["SANS"])
FontStyle115.setSize(0.01)
FontStyle115.setStyle("ITALIC")

Text114.setFontStyle(FontStyle115)

Shape113.setGeometry(Text114)
Appearance116 = x3d.Appearance()
Material117 = x3d.Material()
Material117.setDiffuseColor([0.039216,1,0.568627])

Appearance116.setMaterial(Material117)

Shape113.setAppearance(Appearance116)

Billboard112.addChildren(Shape113)

Transform111.addChildren(Billboard112)

Transform105.addChildren(Transform111)

HAnimSegment104.addChildren(Transform105)

HAnimJoint103.addChildren(HAnimSegment104)
HAnimJoint118 = x3d.HAnimJoint()
HAnimJoint118.setName("sacroiliac")
HAnimJoint118.setDEF("hanim_sacroiliac")
HAnimJoint118.setCenter([0,0.9149,0.0016])
HAnimSegment119 = x3d.HAnimSegment()
HAnimSegment119.setName("pelvis")
HAnimSegment119.setDEF("hanim_pelvis")
Transform120 = x3d.Transform()
Transform120.setDEF("sacroiliacPos")
Transform120.setTranslation([0,0.9149,0.0016])
Shape121 = x3d.Shape()
IndexedFaceSet122 = x3d.IndexedFaceSet()
IndexedFaceSet122.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet122.setCreaseAngle(0.5)
Coordinate123 = x3d.Coordinate()
Coordinate123.setUSE("points")

IndexedFaceSet122.setCoord(Coordinate123)

Shape121.setGeometry(IndexedFaceSet122)
Appearance124 = x3d.Appearance()
Material125 = x3d.Material()
Material125.setUSE("MIN_COLOR")

Appearance124.setMaterial(Material125)

Shape121.setAppearance(Appearance124)

Transform120.addChildren(Shape121)

HAnimSegment119.addChildren(Transform120)
HAnimSite126 = x3d.HAnimSite()
HAnimSite126.setName("r_iliocristale_pt")
HAnimSite126.setDEF("hanim_r_iliocristale_pt")
HAnimSite126.setTranslation([-0.1525,1.0628,0.0035])
Shape127 = x3d.Shape()
IndexedFaceSet128 = x3d.IndexedFaceSet()
IndexedFaceSet128.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet128.setCreaseAngle(0.5)
Coordinate129 = x3d.Coordinate()
Coordinate129.setUSE("points")

IndexedFaceSet128.setCoord(Coordinate129)

Shape127.setGeometry(IndexedFaceSet128)
Appearance130 = x3d.Appearance()
Material131 = x3d.Material()
Material131.setUSE("SITE_COLOR")

Appearance130.setMaterial(Material131)

Shape127.setAppearance(Appearance130)

HAnimSite126.addChildren(Shape127)

HAnimSegment119.addChildren(HAnimSite126)
HAnimSite132 = x3d.HAnimSite()
HAnimSite132.setName("r_trochanterion_pt")
HAnimSite132.setDEF("hanim_r_trochanterion_pt")
HAnimSite132.setTranslation([-0.1689,0.8419,0.0352])
Shape133 = x3d.Shape()
IndexedFaceSet134 = x3d.IndexedFaceSet()
IndexedFaceSet134.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet134.setCreaseAngle(0.5)
Coordinate135 = x3d.Coordinate()
Coordinate135.setUSE("points")

IndexedFaceSet134.setCoord(Coordinate135)

Shape133.setGeometry(IndexedFaceSet134)
Appearance136 = x3d.Appearance()
Material137 = x3d.Material()
Material137.setUSE("SITE_COLOR")

Appearance136.setMaterial(Material137)

Shape133.setAppearance(Appearance136)

HAnimSite132.addChildren(Shape133)

HAnimSegment119.addChildren(HAnimSite132)
HAnimSite138 = x3d.HAnimSite()
HAnimSite138.setName("l_iliocristale_pt")
HAnimSite138.setDEF("hanim_l_iliocristale_pt")
HAnimSite138.setTranslation([0.1612,1.0537,0.0008])
Shape139 = x3d.Shape()
IndexedFaceSet140 = x3d.IndexedFaceSet()
IndexedFaceSet140.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet140.setCreaseAngle(0.5)
Coordinate141 = x3d.Coordinate()
Coordinate141.setUSE("points")

IndexedFaceSet140.setCoord(Coordinate141)

Shape139.setGeometry(IndexedFaceSet140)
Appearance142 = x3d.Appearance()
Material143 = x3d.Material()
Material143.setUSE("SITE_COLOR")

Appearance142.setMaterial(Material143)

Shape139.setAppearance(Appearance142)

HAnimSite138.addChildren(Shape139)

HAnimSegment119.addChildren(HAnimSite138)
HAnimSite144 = x3d.HAnimSite()
HAnimSite144.setName("l_trochanterion_pt")
HAnimSite144.setDEF("hanim_l_trochanterion_pt")
HAnimSite144.setTranslation([0.1677,0.8336,0.0303])
Shape145 = x3d.Shape()
IndexedFaceSet146 = x3d.IndexedFaceSet()
IndexedFaceSet146.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet146.setCreaseAngle(0.5)
Coordinate147 = x3d.Coordinate()
Coordinate147.setUSE("points")

IndexedFaceSet146.setCoord(Coordinate147)

Shape145.setGeometry(IndexedFaceSet146)
Appearance148 = x3d.Appearance()
Material149 = x3d.Material()
Material149.setUSE("SITE_COLOR")

Appearance148.setMaterial(Material149)

Shape145.setAppearance(Appearance148)

HAnimSite144.addChildren(Shape145)

HAnimSegment119.addChildren(HAnimSite144)
HAnimSite150 = x3d.HAnimSite()
HAnimSite150.setName("r_asis_pt")
HAnimSite150.setDEF("hanim_r_asis_pt")
HAnimSite150.setTranslation([-0.0887,1.0021,0.1112])
Shape151 = x3d.Shape()
IndexedFaceSet152 = x3d.IndexedFaceSet()
IndexedFaceSet152.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet152.setCreaseAngle(0.5)
Coordinate153 = x3d.Coordinate()
Coordinate153.setUSE("points")

IndexedFaceSet152.setCoord(Coordinate153)

Shape151.setGeometry(IndexedFaceSet152)
Appearance154 = x3d.Appearance()
Material155 = x3d.Material()
Material155.setUSE("SITE_COLOR")

Appearance154.setMaterial(Material155)

Shape151.setAppearance(Appearance154)

HAnimSite150.addChildren(Shape151)

HAnimSegment119.addChildren(HAnimSite150)
HAnimSite156 = x3d.HAnimSite()
HAnimSite156.setName("l_asis_pt")
HAnimSite156.setDEF("hanim_l_asis_pt")
HAnimSite156.setTranslation([0.0925,0.9983,0.1052])
Shape157 = x3d.Shape()
IndexedFaceSet158 = x3d.IndexedFaceSet()
IndexedFaceSet158.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet158.setCreaseAngle(0.5)
Coordinate159 = x3d.Coordinate()
Coordinate159.setUSE("points")

IndexedFaceSet158.setCoord(Coordinate159)

Shape157.setGeometry(IndexedFaceSet158)
Appearance160 = x3d.Appearance()
Material161 = x3d.Material()
Material161.setUSE("SITE_COLOR")

Appearance160.setMaterial(Material161)

Shape157.setAppearance(Appearance160)

HAnimSite156.addChildren(Shape157)

HAnimSegment119.addChildren(HAnimSite156)
HAnimSite162 = x3d.HAnimSite()
HAnimSite162.setName("r_psis_pt")
HAnimSite162.setDEF("hanim_r_psis_pt")
HAnimSite162.setTranslation([-0.0716,1.019,-0.1138])
Shape163 = x3d.Shape()
IndexedFaceSet164 = x3d.IndexedFaceSet()
IndexedFaceSet164.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet164.setCreaseAngle(0.5)
Coordinate165 = x3d.Coordinate()
Coordinate165.setUSE("points")

IndexedFaceSet164.setCoord(Coordinate165)

Shape163.setGeometry(IndexedFaceSet164)
Appearance166 = x3d.Appearance()
Material167 = x3d.Material()
Material167.setUSE("SITE_COLOR")

Appearance166.setMaterial(Material167)

Shape163.setAppearance(Appearance166)

HAnimSite162.addChildren(Shape163)

HAnimSegment119.addChildren(HAnimSite162)
HAnimSite168 = x3d.HAnimSite()
HAnimSite168.setName("l_psis_pt")
HAnimSite168.setDEF("hanim_l_psis_pt")
HAnimSite168.setTranslation([0.0774,1.019,-0.1151])
Shape169 = x3d.Shape()
IndexedFaceSet170 = x3d.IndexedFaceSet()
IndexedFaceSet170.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet170.setCreaseAngle(0.5)
Coordinate171 = x3d.Coordinate()
Coordinate171.setUSE("points")

IndexedFaceSet170.setCoord(Coordinate171)

Shape169.setGeometry(IndexedFaceSet170)
Appearance172 = x3d.Appearance()
Material173 = x3d.Material()
Material173.setUSE("SITE_COLOR")

Appearance172.setMaterial(Material173)

Shape169.setAppearance(Appearance172)

HAnimSite168.addChildren(Shape169)

HAnimSegment119.addChildren(HAnimSite168)
HAnimSite174 = x3d.HAnimSite()
HAnimSite174.setName("crotch_pt")
HAnimSite174.setDEF("hanim_crotch_pt")
HAnimSite174.setTranslation([0.0034,0.8266,0.0257])
Shape175 = x3d.Shape()
IndexedFaceSet176 = x3d.IndexedFaceSet()
IndexedFaceSet176.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet176.setCreaseAngle(0.5)
Coordinate177 = x3d.Coordinate()
Coordinate177.setUSE("points")

IndexedFaceSet176.setCoord(Coordinate177)

Shape175.setGeometry(IndexedFaceSet176)
Appearance178 = x3d.Appearance()
Material179 = x3d.Material()
Material179.setUSE("SITE_COLOR")

Appearance178.setMaterial(Material179)

Shape175.setAppearance(Appearance178)

HAnimSite174.addChildren(Shape175)

HAnimSegment119.addChildren(HAnimSite174)

HAnimJoint118.addChildren(HAnimSegment119)
HAnimJoint180 = x3d.HAnimJoint()
HAnimJoint180.setName("l_hip")
HAnimJoint180.setDEF("hanim_l_hip")
HAnimJoint180.setCenter([0.0961,0.9124,-0.0001])
HAnimSegment181 = x3d.HAnimSegment()
HAnimSegment181.setName("l_thigh")
HAnimSegment181.setDEF("hanim_l_thigh")
Transform182 = x3d.Transform()
Transform182.setTranslation([0.0961,0.9124,-0.0001])
Shape183 = x3d.Shape()
IndexedFaceSet184 = x3d.IndexedFaceSet()
IndexedFaceSet184.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet184.setCreaseAngle(0.5)
Coordinate185 = x3d.Coordinate()
Coordinate185.setUSE("points")

IndexedFaceSet184.setCoord(Coordinate185)

Shape183.setGeometry(IndexedFaceSet184)
Appearance186 = x3d.Appearance()
Material187 = x3d.Material()
Material187.setUSE("MIN_COLOR")

Appearance186.setMaterial(Material187)

Shape183.setAppearance(Appearance186)

Transform182.addChildren(Shape183)

HAnimSegment181.addChildren(Transform182)
HAnimSite188 = x3d.HAnimSite()
HAnimSite188.setName("l_knee_crease_pt")
HAnimSite188.setDEF("hanim_l_knee_crease_pt")
HAnimSite188.setTranslation([0.0993,0.4881,-0.0309])
Shape189 = x3d.Shape()
IndexedFaceSet190 = x3d.IndexedFaceSet()
IndexedFaceSet190.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet190.setCreaseAngle(0.5)
Coordinate191 = x3d.Coordinate()
Coordinate191.setUSE("points")

IndexedFaceSet190.setCoord(Coordinate191)

Shape189.setGeometry(IndexedFaceSet190)
Appearance192 = x3d.Appearance()
Material193 = x3d.Material()
Material193.setUSE("SITE_COLOR")

Appearance192.setMaterial(Material193)

Shape189.setAppearance(Appearance192)

HAnimSite188.addChildren(Shape189)

HAnimSegment181.addChildren(HAnimSite188)
HAnimSite194 = x3d.HAnimSite()
HAnimSite194.setName("l_femoral_lateral_epicn_pt")
HAnimSite194.setDEF("hanim_l_femoral_lateral_epicn_pt")
HAnimSite194.setTranslation([0.1598,0.4967,0.0297])
Shape195 = x3d.Shape()
IndexedFaceSet196 = x3d.IndexedFaceSet()
IndexedFaceSet196.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet196.setCreaseAngle(0.5)
Coordinate197 = x3d.Coordinate()
Coordinate197.setUSE("points")

IndexedFaceSet196.setCoord(Coordinate197)

Shape195.setGeometry(IndexedFaceSet196)
Appearance198 = x3d.Appearance()
Material199 = x3d.Material()
Material199.setUSE("SITE_COLOR")

Appearance198.setMaterial(Material199)

Shape195.setAppearance(Appearance198)

HAnimSite194.addChildren(Shape195)

HAnimSegment181.addChildren(HAnimSite194)
HAnimSite200 = x3d.HAnimSite()
HAnimSite200.setName("l_femoral_medial_epicn_pt")
HAnimSite200.setDEF("hanim_l_femoral_medial_epicn_pt")
HAnimSite200.setTranslation([0.0398,0.4946,0.0303])
Shape201 = x3d.Shape()
IndexedFaceSet202 = x3d.IndexedFaceSet()
IndexedFaceSet202.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet202.setCreaseAngle(0.5)
Coordinate203 = x3d.Coordinate()
Coordinate203.setUSE("points")

IndexedFaceSet202.setCoord(Coordinate203)

Shape201.setGeometry(IndexedFaceSet202)
Appearance204 = x3d.Appearance()
Material205 = x3d.Material()
Material205.setUSE("SITE_COLOR")

Appearance204.setMaterial(Material205)

Shape201.setAppearance(Appearance204)

HAnimSite200.addChildren(Shape201)

HAnimSegment181.addChildren(HAnimSite200)

HAnimJoint180.addChildren(HAnimSegment181)
HAnimJoint206 = x3d.HAnimJoint()
HAnimJoint206.setName("l_knee")
HAnimJoint206.setDEF("hanim_l_knee")
HAnimJoint206.setCenter([0.104,0.4867,0.0308])
HAnimSegment207 = x3d.HAnimSegment()
HAnimSegment207.setName("l_calf")
HAnimSegment207.setDEF("hanim_l_calf")
Transform208 = x3d.Transform()
Transform208.setTranslation([0.104,0.4867,0.0308])
Shape209 = x3d.Shape()
IndexedFaceSet210 = x3d.IndexedFaceSet()
IndexedFaceSet210.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet210.setCreaseAngle(0.5)
Coordinate211 = x3d.Coordinate()
Coordinate211.setUSE("points")

IndexedFaceSet210.setCoord(Coordinate211)

Shape209.setGeometry(IndexedFaceSet210)
Appearance212 = x3d.Appearance()
Material213 = x3d.Material()
Material213.setUSE("MIN_COLOR")

Appearance212.setMaterial(Material213)

Shape209.setAppearance(Appearance212)

Transform208.addChildren(Shape209)

HAnimSegment207.addChildren(Transform208)

HAnimJoint206.addChildren(HAnimSegment207)
HAnimJoint214 = x3d.HAnimJoint()
HAnimJoint214.setName("l_talocrural")
HAnimJoint214.setDEF("hanim_l_talocrural")
HAnimJoint214.setCenter([0.1101,0.0656,-0.0736])
HAnimSegment215 = x3d.HAnimSegment()
HAnimSegment215.setName("l_talus")
HAnimSegment215.setDEF("hanim_l_talus")
Transform216 = x3d.Transform()
Transform216.setTranslation([0.1101,0.0656,-0.0736])
Shape217 = x3d.Shape()
IndexedFaceSet218 = x3d.IndexedFaceSet()
IndexedFaceSet218.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet218.setCreaseAngle(0.5)
Coordinate219 = x3d.Coordinate()
Coordinate219.setUSE("points")

IndexedFaceSet218.setCoord(Coordinate219)

Shape217.setGeometry(IndexedFaceSet218)
Appearance220 = x3d.Appearance()
Material221 = x3d.Material()
Material221.setUSE("MIN_COLOR")

Appearance220.setMaterial(Material221)

Shape217.setAppearance(Appearance220)

Transform216.addChildren(Shape217)

HAnimSegment215.addChildren(Transform216)
HAnimSite222 = x3d.HAnimSite()
HAnimSite222.setName("l_lateral_malleolus_pt")
HAnimSite222.setDEF("hanim_l_lateral_malleolus_pt")
HAnimSite222.setTranslation([0.1308,0.0597,-0.1032])
Shape223 = x3d.Shape()
IndexedFaceSet224 = x3d.IndexedFaceSet()
IndexedFaceSet224.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet224.setCreaseAngle(0.5)
Coordinate225 = x3d.Coordinate()
Coordinate225.setUSE("points")

IndexedFaceSet224.setCoord(Coordinate225)

Shape223.setGeometry(IndexedFaceSet224)
Appearance226 = x3d.Appearance()
Material227 = x3d.Material()
Material227.setUSE("HAND_FEET_COLOR")

Appearance226.setMaterial(Material227)

Shape223.setAppearance(Appearance226)

HAnimSite222.addChildren(Shape223)

HAnimSegment215.addChildren(HAnimSite222)
HAnimSite228 = x3d.HAnimSite()
HAnimSite228.setName("l_medial_malleolus_pt")
HAnimSite228.setDEF("hanim_l_medial_malleolus_pt")
HAnimSite228.setTranslation([0.089,0.0716,-0.0881])
Shape229 = x3d.Shape()
IndexedFaceSet230 = x3d.IndexedFaceSet()
IndexedFaceSet230.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet230.setCreaseAngle(0.5)
Coordinate231 = x3d.Coordinate()
Coordinate231.setUSE("points")

IndexedFaceSet230.setCoord(Coordinate231)

Shape229.setGeometry(IndexedFaceSet230)
Appearance232 = x3d.Appearance()
Material233 = x3d.Material()
Material233.setUSE("HAND_FEET_COLOR")

Appearance232.setMaterial(Material233)

Shape229.setAppearance(Appearance232)

HAnimSite228.addChildren(Shape229)

HAnimSegment215.addChildren(HAnimSite228)
HAnimSite234 = x3d.HAnimSite()
HAnimSite234.setName("l_sphyrion_pt")
HAnimSite234.setDEF("hanim_l_sphyrion_pt")
HAnimSite234.setTranslation([0.089,0.0575,-0.0943])
Shape235 = x3d.Shape()
IndexedFaceSet236 = x3d.IndexedFaceSet()
IndexedFaceSet236.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet236.setCreaseAngle(0.5)
Coordinate237 = x3d.Coordinate()
Coordinate237.setUSE("points")

IndexedFaceSet236.setCoord(Coordinate237)

Shape235.setGeometry(IndexedFaceSet236)
Appearance238 = x3d.Appearance()
Material239 = x3d.Material()
Material239.setUSE("HAND_FEET_COLOR")

Appearance238.setMaterial(Material239)

Shape235.setAppearance(Appearance238)

HAnimSite234.addChildren(Shape235)

HAnimSegment215.addChildren(HAnimSite234)
HAnimSite240 = x3d.HAnimSite()
HAnimSite240.setName("l_calcaneous_post_pt")
HAnimSite240.setDEF("hanim_l_calcaneous_post_pt")
HAnimSite240.setTranslation([0.0974,0.0259,-0.1171])
Shape241 = x3d.Shape()
IndexedFaceSet242 = x3d.IndexedFaceSet()
IndexedFaceSet242.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet242.setCreaseAngle(0.5)
Coordinate243 = x3d.Coordinate()
Coordinate243.setUSE("points")

IndexedFaceSet242.setCoord(Coordinate243)

Shape241.setGeometry(IndexedFaceSet242)
Appearance244 = x3d.Appearance()
Material245 = x3d.Material()
Material245.setUSE("HAND_FEET_COLOR")

Appearance244.setMaterial(Material245)

Shape241.setAppearance(Appearance244)

HAnimSite240.addChildren(Shape241)

HAnimSegment215.addChildren(HAnimSite240)

HAnimJoint214.addChildren(HAnimSegment215)
HAnimJoint246 = x3d.HAnimJoint()
HAnimJoint246.setName("l_tarsometatarsal_2")
HAnimJoint246.setDEF("hanim_l_tarsometatarsal_2")
HAnimJoint246.setCenter([0.1086,0.0001,-0.0368])
HAnimSegment247 = x3d.HAnimSegment()
HAnimSegment247.setName("segmentNameNeededTODO-230")
HAnimSegment247.setDEF("hanim_segmentNameNeededTODO-230")
Transform248 = x3d.Transform()
Transform248.setTranslation([0.1086,0.0001,-0.0368])
Shape249 = x3d.Shape()
IndexedFaceSet250 = x3d.IndexedFaceSet()
IndexedFaceSet250.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet250.setCreaseAngle(0.5)
Coordinate251 = x3d.Coordinate()
Coordinate251.setUSE("points")

IndexedFaceSet250.setCoord(Coordinate251)

Shape249.setGeometry(IndexedFaceSet250)
Appearance252 = x3d.Appearance()
Material253 = x3d.Material()
Material253.setUSE("MIN_COLOR")

Appearance252.setMaterial(Material253)

Shape249.setAppearance(Appearance252)

Transform248.addChildren(Shape249)

HAnimSegment247.addChildren(Transform248)

HAnimJoint246.addChildren(HAnimSegment247)
HAnimJoint254 = x3d.HAnimJoint()
HAnimJoint254.setName("l_metatarsophalangeal_2")
HAnimJoint254.setDEF("hanim_l_metatarsophalangeal_2")
HAnimJoint254.setCenter([0.1086,0.0001,0.0368])
HAnimSegment255 = x3d.HAnimSegment()
HAnimSegment255.setName("l_tarsal_proximal_phalanx_2")
HAnimSegment255.setDEF("hanim_l_tarsal_proximal_phalanx_2")
Transform256 = x3d.Transform()
Transform256.setTranslation([0.1086,0.0001,0.0368])
Shape257 = x3d.Shape()
IndexedFaceSet258 = x3d.IndexedFaceSet()
IndexedFaceSet258.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet258.setCreaseAngle(0.5)
Coordinate259 = x3d.Coordinate()
Coordinate259.setUSE("points")

IndexedFaceSet258.setCoord(Coordinate259)

Shape257.setGeometry(IndexedFaceSet258)
Appearance260 = x3d.Appearance()
Material261 = x3d.Material()
Material261.setUSE("JOINT_COLOR")

Appearance260.setMaterial(Material261)

Shape257.setAppearance(Appearance260)

Transform256.addChildren(Shape257)

HAnimSegment255.addChildren(Transform256)
HAnimSite262 = x3d.HAnimSite()
HAnimSite262.setName("l_middistal_tip")
HAnimSite262.setDEF("hanim_l_middistal_tip")
HAnimSite262.setTranslation([0.1354,0.0016,0.1476])
Shape263 = x3d.Shape()
IndexedFaceSet264 = x3d.IndexedFaceSet()
IndexedFaceSet264.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet264.setCreaseAngle(0.5)
Coordinate265 = x3d.Coordinate()
Coordinate265.setUSE("points")

IndexedFaceSet264.setCoord(Coordinate265)

Shape263.setGeometry(IndexedFaceSet264)
Appearance266 = x3d.Appearance()
Material267 = x3d.Material()
Material267.setUSE("HAND_FEET_COLOR")

Appearance266.setMaterial(Material267)

Shape263.setAppearance(Appearance266)

HAnimSite262.addChildren(Shape263)

HAnimSegment255.addChildren(HAnimSite262)
HAnimSite268 = x3d.HAnimSite()
HAnimSite268.setName("l_metatarsal_pha1_pt")
HAnimSite268.setDEF("hanim_l_metatarsal_pha1_pt")
HAnimSite268.setTranslation([0.0816,0.0232,0.0106])
Shape269 = x3d.Shape()
IndexedFaceSet270 = x3d.IndexedFaceSet()
IndexedFaceSet270.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet270.setCreaseAngle(0.5)
Coordinate271 = x3d.Coordinate()
Coordinate271.setUSE("points")

IndexedFaceSet270.setCoord(Coordinate271)

Shape269.setGeometry(IndexedFaceSet270)
Appearance272 = x3d.Appearance()
Material273 = x3d.Material()
Material273.setUSE("HAND_FEET_COLOR")

Appearance272.setMaterial(Material273)

Shape269.setAppearance(Appearance272)

HAnimSite268.addChildren(Shape269)

HAnimSegment255.addChildren(HAnimSite268)

HAnimJoint254.addChildren(HAnimSegment255)
HAnimJoint274 = x3d.HAnimJoint()
HAnimJoint274.setName("l_tarsal_distal_interphalangeal_2")
HAnimJoint274.setDEF("hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint274.setCenter([0.1086,0,0.0762])
HAnimSegment275 = x3d.HAnimSegment()
HAnimSegment275.setName("l_tarsal_distal_phalanx_2")
HAnimSegment275.setDEF("hanim_l_tarsal_distal_phalanx_2")
Transform276 = x3d.Transform()
Transform276.setTranslation([0.1086,0,0.0762])
Shape277 = x3d.Shape()
IndexedFaceSet278 = x3d.IndexedFaceSet()
IndexedFaceSet278.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet278.setCreaseAngle(0.5)
Coordinate279 = x3d.Coordinate()
Coordinate279.setUSE("points")

IndexedFaceSet278.setCoord(Coordinate279)

Shape277.setGeometry(IndexedFaceSet278)
Appearance280 = x3d.Appearance()
Material281 = x3d.Material()
Material281.setUSE("JOINT_COLOR")

Appearance280.setMaterial(Material281)

Shape277.setAppearance(Appearance280)

Transform276.addChildren(Shape277)

HAnimSegment275.addChildren(Transform276)
HAnimSite282 = x3d.HAnimSite()
HAnimSite282.setName("l_forefoot_tip")
HAnimSite282.setDEF("hanim_l_forefoot_tip")
HAnimSite282.setTranslation([0.1354,0.0016,0.1476])
Shape283 = x3d.Shape()
IndexedFaceSet284 = x3d.IndexedFaceSet()
IndexedFaceSet284.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet284.setCreaseAngle(0.5)
Coordinate285 = x3d.Coordinate()
Coordinate285.setUSE("points")

IndexedFaceSet284.setCoord(Coordinate285)

Shape283.setGeometry(IndexedFaceSet284)
Appearance286 = x3d.Appearance()
Material287 = x3d.Material()
Material287.setUSE("HAND_FEET_COLOR")

Appearance286.setMaterial(Material287)

Shape283.setAppearance(Appearance286)

HAnimSite282.addChildren(Shape283)

HAnimSegment275.addChildren(HAnimSite282)
HAnimSite288 = x3d.HAnimSite()
HAnimSite288.setName("l_metatarsal_pha5_pt")
HAnimSite288.setDEF("hanim_l_metatarsal_pha5_pt")
HAnimSite288.setTranslation([0.1825,0.007,0.0928])
## CAESAR Feature Point #66
Shape289 = x3d.Shape()
IndexedFaceSet290 = x3d.IndexedFaceSet()
IndexedFaceSet290.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet290.setCreaseAngle(0.5)
Coordinate291 = x3d.Coordinate()
Coordinate291.setUSE("points")

IndexedFaceSet290.setCoord(Coordinate291)

Shape289.setGeometry(IndexedFaceSet290)
Appearance292 = x3d.Appearance()
Material293 = x3d.Material()
Material293.setUSE("HAND_FEET_COLOR")

Appearance292.setMaterial(Material293)

Shape289.setAppearance(Appearance292)

HAnimSite288.addChildren(Shape289)

HAnimSegment275.addChildren(HAnimSite288)
HAnimSite294 = x3d.HAnimSite()
HAnimSite294.setName("l_digit2_pt")
HAnimSite294.setDEF("hanim_l_digit2_pt")
HAnimSite294.setTranslation([0.1195,0.0079,0.1433])
## CAESAR Feature Point #72
Shape295 = x3d.Shape()
IndexedFaceSet296 = x3d.IndexedFaceSet()
IndexedFaceSet296.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet296.setCreaseAngle(0.5)
Coordinate297 = x3d.Coordinate()
Coordinate297.setUSE("points")

IndexedFaceSet296.setCoord(Coordinate297)

Shape295.setGeometry(IndexedFaceSet296)
Appearance298 = x3d.Appearance()
Material299 = x3d.Material()
Material299.setUSE("HAND_FEET_COLOR")

Appearance298.setMaterial(Material299)

Shape295.setAppearance(Appearance298)

HAnimSite294.addChildren(Shape295)

HAnimSegment275.addChildren(HAnimSite294)

HAnimJoint274.addChildren(HAnimSegment275)

HAnimJoint254.addChildren(HAnimJoint274)

HAnimJoint246.addChildren(HAnimJoint254)

HAnimJoint214.addChildren(HAnimJoint246)

HAnimJoint206.addChildren(HAnimJoint214)

HAnimJoint180.addChildren(HAnimJoint206)

HAnimJoint118.addChildren(HAnimJoint180)
HAnimJoint300 = x3d.HAnimJoint()
HAnimJoint300.setName("r_hip")
HAnimJoint300.setDEF("hanim_r_hip")
HAnimJoint300.setCenter([-0.095,0.9171,0.0029])
HAnimSegment301 = x3d.HAnimSegment()
HAnimSegment301.setName("r_thigh")
HAnimSegment301.setDEF("hanim_r_thigh")
Transform302 = x3d.Transform()
Transform302.setTranslation([-0.095,0.9171,0.0029])
Shape303 = x3d.Shape()
IndexedFaceSet304 = x3d.IndexedFaceSet()
IndexedFaceSet304.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet304.setCreaseAngle(0.5)
Coordinate305 = x3d.Coordinate()
Coordinate305.setUSE("points")

IndexedFaceSet304.setCoord(Coordinate305)

Shape303.setGeometry(IndexedFaceSet304)
Appearance306 = x3d.Appearance()
Material307 = x3d.Material()
Material307.setUSE("MIN_COLOR")

Appearance306.setMaterial(Material307)

Shape303.setAppearance(Appearance306)

Transform302.addChildren(Shape303)

HAnimSegment301.addChildren(Transform302)
HAnimSite308 = x3d.HAnimSite()
HAnimSite308.setName("r_knee_crease_pt")
HAnimSite308.setDEF("hanim_r_knee_crease_pt")
HAnimSite308.setTranslation([-0.0825,0.4932,-0.0326])
Shape309 = x3d.Shape()
IndexedFaceSet310 = x3d.IndexedFaceSet()
IndexedFaceSet310.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet310.setCreaseAngle(0.5)
Coordinate311 = x3d.Coordinate()
Coordinate311.setUSE("points")

IndexedFaceSet310.setCoord(Coordinate311)

Shape309.setGeometry(IndexedFaceSet310)
Appearance312 = x3d.Appearance()
Material313 = x3d.Material()
Material313.setUSE("SITE_COLOR")

Appearance312.setMaterial(Material313)

Shape309.setAppearance(Appearance312)

HAnimSite308.addChildren(Shape309)

HAnimSegment301.addChildren(HAnimSite308)
HAnimSite314 = x3d.HAnimSite()
HAnimSite314.setName("r_femoral_lateral_epicn_pt")
HAnimSite314.setDEF("hanim_r_femoral_lateral_epicn_pt")
HAnimSite314.setTranslation([-0.1421,0.4992,0.031])
Shape315 = x3d.Shape()
IndexedFaceSet316 = x3d.IndexedFaceSet()
IndexedFaceSet316.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet316.setCreaseAngle(0.5)
Coordinate317 = x3d.Coordinate()
Coordinate317.setUSE("points")

IndexedFaceSet316.setCoord(Coordinate317)

Shape315.setGeometry(IndexedFaceSet316)
Appearance318 = x3d.Appearance()
Material319 = x3d.Material()
Material319.setUSE("SITE_COLOR")

Appearance318.setMaterial(Material319)

Shape315.setAppearance(Appearance318)

HAnimSite314.addChildren(Shape315)

HAnimSegment301.addChildren(HAnimSite314)
HAnimSite320 = x3d.HAnimSite()
HAnimSite320.setName("r_femoral_medial_epicn_pt")
HAnimSite320.setDEF("hanim_r_femoral_medial_epicn_pt")
HAnimSite320.setTranslation([-0.0221,0.5014,0.0289])
Shape321 = x3d.Shape()
IndexedFaceSet322 = x3d.IndexedFaceSet()
IndexedFaceSet322.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet322.setCreaseAngle(0.5)
Coordinate323 = x3d.Coordinate()
Coordinate323.setUSE("points")

IndexedFaceSet322.setCoord(Coordinate323)

Shape321.setGeometry(IndexedFaceSet322)
Appearance324 = x3d.Appearance()
Material325 = x3d.Material()
Material325.setUSE("SITE_COLOR")

Appearance324.setMaterial(Material325)

Shape321.setAppearance(Appearance324)

HAnimSite320.addChildren(Shape321)

HAnimSegment301.addChildren(HAnimSite320)

HAnimJoint300.addChildren(HAnimSegment301)
HAnimJoint326 = x3d.HAnimJoint()
HAnimJoint326.setName("r_knee")
HAnimJoint326.setDEF("hanim_r_knee")
HAnimJoint326.setCenter([-0.0867,0.4913,0.0318])
HAnimSegment327 = x3d.HAnimSegment()
HAnimSegment327.setName("r_calf")
HAnimSegment327.setDEF("hanim_r_calf")
Transform328 = x3d.Transform()
Transform328.setTranslation([-0.0867,0.4913,0.0318])
Shape329 = x3d.Shape()
IndexedFaceSet330 = x3d.IndexedFaceSet()
IndexedFaceSet330.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet330.setCreaseAngle(0.5)
Coordinate331 = x3d.Coordinate()
Coordinate331.setUSE("points")

IndexedFaceSet330.setCoord(Coordinate331)

Shape329.setGeometry(IndexedFaceSet330)
Appearance332 = x3d.Appearance()
Material333 = x3d.Material()
Material333.setUSE("SITE_COLOR")

Appearance332.setMaterial(Material333)

Shape329.setAppearance(Appearance332)

Transform328.addChildren(Shape329)

HAnimSegment327.addChildren(Transform328)

HAnimJoint326.addChildren(HAnimSegment327)
HAnimJoint334 = x3d.HAnimJoint()
HAnimJoint334.setName("r_talocrural")
HAnimJoint334.setDEF("hanim_r_talocrural")
HAnimJoint334.setCenter([-0.0801,0.0712,-0.0766])
HAnimSegment335 = x3d.HAnimSegment()
HAnimSegment335.setName("r_talus")
HAnimSegment335.setDEF("hanim_r_talus")
Transform336 = x3d.Transform()
Transform336.setTranslation([-0.0801,0.0712,-0.0766])
Shape337 = x3d.Shape()
IndexedFaceSet338 = x3d.IndexedFaceSet()
IndexedFaceSet338.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet338.setCreaseAngle(0.5)
Coordinate339 = x3d.Coordinate()
Coordinate339.setUSE("points")

IndexedFaceSet338.setCoord(Coordinate339)

Shape337.setGeometry(IndexedFaceSet338)
Appearance340 = x3d.Appearance()
Material341 = x3d.Material()
Material341.setUSE("MIN_COLOR")

Appearance340.setMaterial(Material341)

Shape337.setAppearance(Appearance340)

Transform336.addChildren(Shape337)

HAnimSegment335.addChildren(Transform336)
HAnimSite342 = x3d.HAnimSite()
HAnimSite342.setName("r_lateral_malleolus_pt")
HAnimSite342.setDEF("hanim_r_lateral_malleolus_pt")
HAnimSite342.setTranslation([-0.1006,0.0658,-0.1075])
Shape343 = x3d.Shape()
IndexedFaceSet344 = x3d.IndexedFaceSet()
IndexedFaceSet344.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet344.setCreaseAngle(0.5)
Coordinate345 = x3d.Coordinate()
Coordinate345.setUSE("points")

IndexedFaceSet344.setCoord(Coordinate345)

Shape343.setGeometry(IndexedFaceSet344)
Appearance346 = x3d.Appearance()
Material347 = x3d.Material()
Material347.setUSE("HAND_FEET_COLOR")

Appearance346.setMaterial(Material347)

Shape343.setAppearance(Appearance346)

HAnimSite342.addChildren(Shape343)

HAnimSegment335.addChildren(HAnimSite342)
HAnimSite348 = x3d.HAnimSite()
HAnimSite348.setName("r_medial_malleolus_pt")
HAnimSite348.setDEF("hanim_r_medial_malleolus_pt")
HAnimSite348.setTranslation([-0.0591,0.076,-0.0928])
Shape349 = x3d.Shape()
IndexedFaceSet350 = x3d.IndexedFaceSet()
IndexedFaceSet350.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet350.setCreaseAngle(0.5)
Coordinate351 = x3d.Coordinate()
Coordinate351.setUSE("points")

IndexedFaceSet350.setCoord(Coordinate351)

Shape349.setGeometry(IndexedFaceSet350)
Appearance352 = x3d.Appearance()
Material353 = x3d.Material()
Material353.setUSE("HAND_FEET_COLOR")

Appearance352.setMaterial(Material353)

Shape349.setAppearance(Appearance352)

HAnimSite348.addChildren(Shape349)

HAnimSegment335.addChildren(HAnimSite348)
HAnimSite354 = x3d.HAnimSite()
HAnimSite354.setName("r_sphyrion_pt")
HAnimSite354.setDEF("hanim_r_sphyrion_pt")
HAnimSite354.setTranslation([-0.0603,0.061,-0.1002])
Shape355 = x3d.Shape()
IndexedFaceSet356 = x3d.IndexedFaceSet()
IndexedFaceSet356.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet356.setCreaseAngle(0.5)
Coordinate357 = x3d.Coordinate()
Coordinate357.setUSE("points")

IndexedFaceSet356.setCoord(Coordinate357)

Shape355.setGeometry(IndexedFaceSet356)
Appearance358 = x3d.Appearance()
Material359 = x3d.Material()
Material359.setUSE("HAND_FEET_COLOR")

Appearance358.setMaterial(Material359)

Shape355.setAppearance(Appearance358)

HAnimSite354.addChildren(Shape355)

HAnimSegment335.addChildren(HAnimSite354)
HAnimSite360 = x3d.HAnimSite()
HAnimSite360.setName("r_calcaneous_post_pt")
HAnimSite360.setDEF("hanim_r_calcaneous_post_pt")
HAnimSite360.setTranslation([-0.0692,0.0297,-0.1221])
Shape361 = x3d.Shape()
IndexedFaceSet362 = x3d.IndexedFaceSet()
IndexedFaceSet362.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet362.setCreaseAngle(0.5)
Coordinate363 = x3d.Coordinate()
Coordinate363.setUSE("points")

IndexedFaceSet362.setCoord(Coordinate363)

Shape361.setGeometry(IndexedFaceSet362)
Appearance364 = x3d.Appearance()
Material365 = x3d.Material()
Material365.setUSE("HAND_FEET_COLOR")

Appearance364.setMaterial(Material365)

Shape361.setAppearance(Appearance364)

HAnimSite360.addChildren(Shape361)

HAnimSegment335.addChildren(HAnimSite360)

HAnimJoint334.addChildren(HAnimSegment335)
HAnimJoint366 = x3d.HAnimJoint()
HAnimJoint366.setName("r_metatarsophalangeal_2")
HAnimJoint366.setDEF("hanim_r_metatarsophalangeal_2")
HAnimJoint366.setCenter([-0.0801,0,0.0368])
HAnimSegment367 = x3d.HAnimSegment()
HAnimSegment367.setName("r_tarsal_proximal_phalanx_2")
HAnimSegment367.setDEF("hanim_r_tarsal_proximal_phalanx_2")
Transform368 = x3d.Transform()
Transform368.setTranslation([-0.0801,0,0.0368])
Shape369 = x3d.Shape()
IndexedFaceSet370 = x3d.IndexedFaceSet()
IndexedFaceSet370.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet370.setCreaseAngle(0.5)
Coordinate371 = x3d.Coordinate()
Coordinate371.setUSE("points")

IndexedFaceSet370.setCoord(Coordinate371)

Shape369.setGeometry(IndexedFaceSet370)
Appearance372 = x3d.Appearance()
Material373 = x3d.Material()
Material373.setUSE("JOINT_COLOR")

Appearance372.setMaterial(Material373)

Shape369.setAppearance(Appearance372)

Transform368.addChildren(Shape369)

HAnimSegment367.addChildren(Transform368)
HAnimSite374 = x3d.HAnimSite()
HAnimSite374.setName("r_middistal_tip")
HAnimSite374.setDEF("hanim_r_middistal_tip")
HAnimSite374.setTranslation([-0.1043,-0.0227,0.145])
Shape375 = x3d.Shape()
IndexedFaceSet376 = x3d.IndexedFaceSet()
IndexedFaceSet376.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet376.setCreaseAngle(0.5)
Coordinate377 = x3d.Coordinate()
Coordinate377.setUSE("points")

IndexedFaceSet376.setCoord(Coordinate377)

Shape375.setGeometry(IndexedFaceSet376)
Appearance378 = x3d.Appearance()
Material379 = x3d.Material()
Material379.setUSE("HAND_FEET_COLOR")

Appearance378.setMaterial(Material379)

Shape375.setAppearance(Appearance378)

HAnimSite374.addChildren(Shape375)

HAnimSegment367.addChildren(HAnimSite374)
HAnimSite380 = x3d.HAnimSite()
HAnimSite380.setName("r_metatarsal_pha5_pt")
HAnimSite380.setDEF("hanim_r_metatarsal_pha5_pt")
HAnimSite380.setTranslation([-0.1523,0.0166,0.0895])
Shape381 = x3d.Shape()
IndexedFaceSet382 = x3d.IndexedFaceSet()
IndexedFaceSet382.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet382.setCreaseAngle(0.5)
Coordinate383 = x3d.Coordinate()
Coordinate383.setUSE("points")

IndexedFaceSet382.setCoord(Coordinate383)

Shape381.setGeometry(IndexedFaceSet382)
Appearance384 = x3d.Appearance()
Material385 = x3d.Material()
Material385.setUSE("HAND_FEET_COLOR")

Appearance384.setMaterial(Material385)

Shape381.setAppearance(Appearance384)

HAnimSite380.addChildren(Shape381)

HAnimSegment367.addChildren(HAnimSite380)
HAnimSite386 = x3d.HAnimSite()
HAnimSite386.setName("r_metatarsal_pha1_pt")
HAnimSite386.setDEF("hanim_r_metatarsal_pha1_pt")
HAnimSite386.setTranslation([-0.0521,0.026,0.0127])
Shape387 = x3d.Shape()
IndexedFaceSet388 = x3d.IndexedFaceSet()
IndexedFaceSet388.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet388.setCreaseAngle(0.5)
Coordinate389 = x3d.Coordinate()
Coordinate389.setUSE("points")

IndexedFaceSet388.setCoord(Coordinate389)

Shape387.setGeometry(IndexedFaceSet388)
Appearance390 = x3d.Appearance()
Material391 = x3d.Material()
Material391.setUSE("HAND_FEET_COLOR")

Appearance390.setMaterial(Material391)

Shape387.setAppearance(Appearance390)

HAnimSite386.addChildren(Shape387)

HAnimSegment367.addChildren(HAnimSite386)
HAnimSite392 = x3d.HAnimSite()
HAnimSite392.setName("r_digit2_pt")
HAnimSite392.setDEF("hanim_r_digit2_pt")
HAnimSite392.setTranslation([-0.0883,0.0134,0.1383])
Shape393 = x3d.Shape()
IndexedFaceSet394 = x3d.IndexedFaceSet()
IndexedFaceSet394.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet394.setCreaseAngle(0.5)
Coordinate395 = x3d.Coordinate()
Coordinate395.setUSE("points")

IndexedFaceSet394.setCoord(Coordinate395)

Shape393.setGeometry(IndexedFaceSet394)
Appearance396 = x3d.Appearance()
Material397 = x3d.Material()
Material397.setUSE("HAND_FEET_COLOR")

Appearance396.setMaterial(Material397)

Shape393.setAppearance(Appearance396)

HAnimSite392.addChildren(Shape393)

HAnimSegment367.addChildren(HAnimSite392)

HAnimJoint366.addChildren(HAnimSegment367)

HAnimJoint334.addChildren(HAnimJoint366)

HAnimJoint326.addChildren(HAnimJoint334)

HAnimJoint300.addChildren(HAnimJoint326)

HAnimJoint118.addChildren(HAnimJoint300)

HAnimJoint103.addChildren(HAnimJoint118)
HAnimJoint398 = x3d.HAnimJoint()
HAnimJoint398.setName("vl5")
HAnimJoint398.setDEF("hanim_vl5")
HAnimJoint398.setCenter([0.0028,1.0568,-0.0776])
HAnimSegment399 = x3d.HAnimSegment()
HAnimSegment399.setName("segmentNameNeededTODO-385")
HAnimSegment399.setDEF("hanim_segmentNameNeededTODO-385")
Transform400 = x3d.Transform()
Transform400.setTranslation([0.0028,1.0568,-0.0776])
Shape401 = x3d.Shape()
IndexedFaceSet402 = x3d.IndexedFaceSet()
IndexedFaceSet402.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet402.setCreaseAngle(0.5)
Coordinate403 = x3d.Coordinate()
Coordinate403.setUSE("points")

IndexedFaceSet402.setCoord(Coordinate403)

Shape401.setGeometry(IndexedFaceSet402)
Appearance404 = x3d.Appearance()
Material405 = x3d.Material()
Material405.setUSE("REC_SPINAL_COLOR")

Appearance404.setMaterial(Material405)

Shape401.setAppearance(Appearance404)

Transform400.addChildren(Shape401)

HAnimSegment399.addChildren(Transform400)

HAnimJoint398.addChildren(HAnimSegment399)
HAnimJoint406 = x3d.HAnimJoint()
HAnimJoint406.setName("vl4")
HAnimJoint406.setDEF("hanim_vl4")
HAnimJoint406.setCenter([0.0035,1.0925,-0.0787])
HAnimSegment407 = x3d.HAnimSegment()
HAnimSegment407.setName("segmentNameNeededTODO-391")
HAnimSegment407.setDEF("hanim_segmentNameNeededTODO-391")
Transform408 = x3d.Transform()
Transform408.setTranslation([0.0035,1.0925,-0.0787])
Shape409 = x3d.Shape()
IndexedFaceSet410 = x3d.IndexedFaceSet()
IndexedFaceSet410.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet410.setCreaseAngle(0.5)
Coordinate411 = x3d.Coordinate()
Coordinate411.setUSE("points")

IndexedFaceSet410.setCoord(Coordinate411)

Shape409.setGeometry(IndexedFaceSet410)
Appearance412 = x3d.Appearance()
Material413 = x3d.Material()
Material413.setUSE("SPINAL_COLOR")

Appearance412.setMaterial(Material413)

Shape409.setAppearance(Appearance412)

Transform408.addChildren(Shape409)

HAnimSegment407.addChildren(Transform408)

HAnimJoint406.addChildren(HAnimSegment407)
HAnimJoint414 = x3d.HAnimJoint()
HAnimJoint414.setName("vl3")
HAnimJoint414.setDEF("hanim_vl3")
HAnimJoint414.setCenter([0.0041,1.1276,-0.0796])
HAnimSegment415 = x3d.HAnimSegment()
HAnimSegment415.setName("segmentNameNeededTODO-397")
HAnimSegment415.setDEF("hanim_segmentNameNeededTODO-397")
Transform416 = x3d.Transform()
Transform416.setTranslation([0.0041,1.1276,-0.0796])
Shape417 = x3d.Shape()
IndexedFaceSet418 = x3d.IndexedFaceSet()
IndexedFaceSet418.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet418.setCreaseAngle(0.5)
Coordinate419 = x3d.Coordinate()
Coordinate419.setUSE("points")

IndexedFaceSet418.setCoord(Coordinate419)

Shape417.setGeometry(IndexedFaceSet418)
Appearance420 = x3d.Appearance()
Material421 = x3d.Material()
Material421.setUSE("REC_SPINAL_COLOR")

Appearance420.setMaterial(Material421)

Shape417.setAppearance(Appearance420)

Transform416.addChildren(Shape417)

HAnimSegment415.addChildren(Transform416)

HAnimJoint414.addChildren(HAnimSegment415)
HAnimJoint422 = x3d.HAnimJoint()
HAnimJoint422.setName("vl2")
HAnimJoint422.setDEF("hanim_vl2")
HAnimJoint422.setCenter([0.0045,1.1546,-0.08])
HAnimSegment423 = x3d.HAnimSegment()
HAnimSegment423.setName("segmentNameNeededTODO-403")
HAnimSegment423.setDEF("hanim_segmentNameNeededTODO-403")
Transform424 = x3d.Transform()
Transform424.setTranslation([0.0045,1.1546,-0.08])
Shape425 = x3d.Shape()
IndexedFaceSet426 = x3d.IndexedFaceSet()
IndexedFaceSet426.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet426.setCreaseAngle(0.5)
Coordinate427 = x3d.Coordinate()
Coordinate427.setUSE("points")

IndexedFaceSet426.setCoord(Coordinate427)

Shape425.setGeometry(IndexedFaceSet426)
Appearance428 = x3d.Appearance()
Material429 = x3d.Material()
Material429.setUSE("SPINAL_COLOR")

Appearance428.setMaterial(Material429)

Shape425.setAppearance(Appearance428)

Transform424.addChildren(Shape425)

HAnimSegment423.addChildren(Transform424)

HAnimJoint422.addChildren(HAnimSegment423)
HAnimJoint430 = x3d.HAnimJoint()
HAnimJoint430.setName("vl1")
HAnimJoint430.setDEF("hanim_vl1")
HAnimJoint430.setCenter([0.0048,1.1912,-0.0805])
HAnimSegment431 = x3d.HAnimSegment()
HAnimSegment431.setName("segmentNameNeededTODO-409")
HAnimSegment431.setDEF("hanim_segmentNameNeededTODO-409")
Transform432 = x3d.Transform()
Transform432.setTranslation([0.0048,1.1912,-0.0805])
Shape433 = x3d.Shape()
IndexedFaceSet434 = x3d.IndexedFaceSet()
IndexedFaceSet434.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet434.setCreaseAngle(0.5)
Coordinate435 = x3d.Coordinate()
Coordinate435.setUSE("points")

IndexedFaceSet434.setCoord(Coordinate435)

Shape433.setGeometry(IndexedFaceSet434)
Appearance436 = x3d.Appearance()
Material437 = x3d.Material()
Material437.setUSE("REC_SPINAL_COLOR")

Appearance436.setMaterial(Material437)

Shape433.setAppearance(Appearance436)

Transform432.addChildren(Shape433)

HAnimSegment431.addChildren(Transform432)

HAnimJoint430.addChildren(HAnimSegment431)
HAnimJoint438 = x3d.HAnimJoint()
HAnimJoint438.setName("vt12")
HAnimJoint438.setDEF("hanim_vt12")
HAnimJoint438.setCenter([0.0051,1.2278,-0.0808])
HAnimSegment439 = x3d.HAnimSegment()
HAnimSegment439.setName("segmentNameNeededTODO-415")
HAnimSegment439.setDEF("hanim_segmentNameNeededTODO-415")
Transform440 = x3d.Transform()
Transform440.setTranslation([0.0051,1.2278,-0.0808])
Shape441 = x3d.Shape()
IndexedFaceSet442 = x3d.IndexedFaceSet()
IndexedFaceSet442.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet442.setCreaseAngle(0.5)
Coordinate443 = x3d.Coordinate()
Coordinate443.setUSE("points")

IndexedFaceSet442.setCoord(Coordinate443)

Shape441.setGeometry(IndexedFaceSet442)
Appearance444 = x3d.Appearance()
Material445 = x3d.Material()
Material445.setUSE("SPINAL_COLOR")

Appearance444.setMaterial(Material445)

Shape441.setAppearance(Appearance444)

Transform440.addChildren(Shape441)

HAnimSegment439.addChildren(Transform440)

HAnimJoint438.addChildren(HAnimSegment439)
HAnimJoint446 = x3d.HAnimJoint()
HAnimJoint446.setName("vt11")
HAnimJoint446.setDEF("hanim_vt11")
HAnimJoint446.setCenter([0.0053,1.2679,-0.081])
HAnimSegment447 = x3d.HAnimSegment()
HAnimSegment447.setName("segmentNameNeededTODO-421")
HAnimSegment447.setDEF("hanim_segmentNameNeededTODO-421")
Transform448 = x3d.Transform()
Transform448.setTranslation([0.0053,1.2679,-0.081])
Shape449 = x3d.Shape()
IndexedFaceSet450 = x3d.IndexedFaceSet()
IndexedFaceSet450.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet450.setCreaseAngle(0.5)
Coordinate451 = x3d.Coordinate()
Coordinate451.setUSE("points")

IndexedFaceSet450.setCoord(Coordinate451)

Shape449.setGeometry(IndexedFaceSet450)
Appearance452 = x3d.Appearance()
Material453 = x3d.Material()
Material453.setUSE("SPINAL_COLOR")

Appearance452.setMaterial(Material453)

Shape449.setAppearance(Appearance452)

Transform448.addChildren(Shape449)

HAnimSegment447.addChildren(Transform448)

HAnimJoint446.addChildren(HAnimSegment447)
HAnimJoint454 = x3d.HAnimJoint()
HAnimJoint454.setName("vt10")
HAnimJoint454.setDEF("hanim_vt10")
HAnimJoint454.setCenter([0.0056,1.2848,-0.0822])
HAnimSegment455 = x3d.HAnimSegment()
HAnimSegment455.setName("segmentNameNeededTODO-427")
HAnimSegment455.setDEF("hanim_segmentNameNeededTODO-427")
Transform456 = x3d.Transform()
Transform456.setTranslation([0.0056,1.2848,-0.0822])
Shape457 = x3d.Shape()
IndexedFaceSet458 = x3d.IndexedFaceSet()
IndexedFaceSet458.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet458.setCreaseAngle(0.5)
Coordinate459 = x3d.Coordinate()
Coordinate459.setUSE("points")

IndexedFaceSet458.setCoord(Coordinate459)

Shape457.setGeometry(IndexedFaceSet458)
Appearance460 = x3d.Appearance()
Material461 = x3d.Material()
Material461.setUSE("REC_SPINAL_COLOR")

Appearance460.setMaterial(Material461)

Shape457.setAppearance(Appearance460)

Transform456.addChildren(Shape457)

HAnimSegment455.addChildren(Transform456)

HAnimJoint454.addChildren(HAnimSegment455)
HAnimJoint462 = x3d.HAnimJoint()
HAnimJoint462.setName("vt9")
HAnimJoint462.setDEF("hanim_vt9")
HAnimJoint462.setCenter([0.0057,1.3126,-0.0838])
HAnimSegment463 = x3d.HAnimSegment()
HAnimSegment463.setName("segmentNameNeededTODO-433")
HAnimSegment463.setDEF("hanim_segmentNameNeededTODO-433")
Transform464 = x3d.Transform()
Transform464.setTranslation([0.0057,1.3126,-0.0838])
Shape465 = x3d.Shape()
IndexedFaceSet466 = x3d.IndexedFaceSet()
IndexedFaceSet466.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet466.setCreaseAngle(0.5)
Coordinate467 = x3d.Coordinate()
Coordinate467.setUSE("points")

IndexedFaceSet466.setCoord(Coordinate467)

Shape465.setGeometry(IndexedFaceSet466)
Appearance468 = x3d.Appearance()
Material469 = x3d.Material()
Material469.setUSE("SPINAL_COLOR")

Appearance468.setMaterial(Material469)

Shape465.setAppearance(Appearance468)

Transform464.addChildren(Shape465)

HAnimSegment463.addChildren(Transform464)

HAnimJoint462.addChildren(HAnimSegment463)
HAnimJoint470 = x3d.HAnimJoint()
HAnimJoint470.setName("vt8")
HAnimJoint470.setDEF("hanim_vt8")
HAnimJoint470.setCenter([0.0057,1.3382,-0.0845])
HAnimSegment471 = x3d.HAnimSegment()
HAnimSegment471.setName("segmentNameNeededTODO-439")
HAnimSegment471.setDEF("hanim_segmentNameNeededTODO-439")
Transform472 = x3d.Transform()
Transform472.setTranslation([0.0057,1.3382,-0.0845])
Shape473 = x3d.Shape()
IndexedFaceSet474 = x3d.IndexedFaceSet()
IndexedFaceSet474.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet474.setCreaseAngle(0.5)
Coordinate475 = x3d.Coordinate()
Coordinate475.setUSE("points")

IndexedFaceSet474.setCoord(Coordinate475)

Shape473.setGeometry(IndexedFaceSet474)
Appearance476 = x3d.Appearance()
Material477 = x3d.Material()
Material477.setUSE("SPINAL_COLOR")

Appearance476.setMaterial(Material477)

Shape473.setAppearance(Appearance476)

Transform472.addChildren(Shape473)

HAnimSegment471.addChildren(Transform472)

HAnimJoint470.addChildren(HAnimSegment471)
HAnimJoint478 = x3d.HAnimJoint()
HAnimJoint478.setName("vt7")
HAnimJoint478.setDEF("hanim_vt7")
HAnimJoint478.setCenter([0.0058,1.3625,-0.0833])
HAnimSegment479 = x3d.HAnimSegment()
HAnimSegment479.setName("segmentNameNeededTODO-445")
HAnimSegment479.setDEF("hanim_segmentNameNeededTODO-445")
Transform480 = x3d.Transform()
Transform480.setTranslation([0.0058,1.3625,-0.0833])
Shape481 = x3d.Shape()
IndexedFaceSet482 = x3d.IndexedFaceSet()
IndexedFaceSet482.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet482.setCreaseAngle(0.5)
Coordinate483 = x3d.Coordinate()
Coordinate483.setUSE("points")

IndexedFaceSet482.setCoord(Coordinate483)

Shape481.setGeometry(IndexedFaceSet482)
Appearance484 = x3d.Appearance()
Material485 = x3d.Material()
Material485.setUSE("SPINAL_COLOR")

Appearance484.setMaterial(Material485)

Shape481.setAppearance(Appearance484)

Transform480.addChildren(Shape481)

HAnimSegment479.addChildren(Transform480)

HAnimJoint478.addChildren(HAnimSegment479)
HAnimJoint486 = x3d.HAnimJoint()
HAnimJoint486.setName("vt6")
HAnimJoint486.setDEF("hanim_vt6")
HAnimJoint486.setCenter([0.0059,1.3866,-0.08])
HAnimSegment487 = x3d.HAnimSegment()
HAnimSegment487.setName("segmentNameNeededTODO-451")
HAnimSegment487.setDEF("hanim_segmentNameNeededTODO-451")
Transform488 = x3d.Transform()
Transform488.setTranslation([0.0059,1.3866,-0.08])
Shape489 = x3d.Shape()
IndexedFaceSet490 = x3d.IndexedFaceSet()
IndexedFaceSet490.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet490.setCreaseAngle(0.5)
Coordinate491 = x3d.Coordinate()
Coordinate491.setUSE("points")

IndexedFaceSet490.setCoord(Coordinate491)

Shape489.setGeometry(IndexedFaceSet490)
Appearance492 = x3d.Appearance()
Material493 = x3d.Material()
Material493.setUSE("REC_SPINAL_COLOR")

Appearance492.setMaterial(Material493)

Shape489.setAppearance(Appearance492)

Transform488.addChildren(Shape489)

HAnimSegment487.addChildren(Transform488)

HAnimJoint486.addChildren(HAnimSegment487)
HAnimJoint494 = x3d.HAnimJoint()
HAnimJoint494.setName("vt5")
HAnimJoint494.setDEF("hanim_vt5")
HAnimJoint494.setCenter([0.006,1.4102,-0.0745])
HAnimSegment495 = x3d.HAnimSegment()
HAnimSegment495.setName("segmentNameNeededTODO-457")
HAnimSegment495.setDEF("hanim_segmentNameNeededTODO-457")
Transform496 = x3d.Transform()
Transform496.setTranslation([0.006,1.4102,-0.0745])
Shape497 = x3d.Shape()
IndexedFaceSet498 = x3d.IndexedFaceSet()
IndexedFaceSet498.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet498.setCreaseAngle(0.5)
Coordinate499 = x3d.Coordinate()
Coordinate499.setUSE("points")

IndexedFaceSet498.setCoord(Coordinate499)

Shape497.setGeometry(IndexedFaceSet498)
Appearance500 = x3d.Appearance()
Material501 = x3d.Material()
Material501.setUSE("SPINAL_COLOR")

Appearance500.setMaterial(Material501)

Shape497.setAppearance(Appearance500)

Transform496.addChildren(Shape497)

HAnimSegment495.addChildren(Transform496)

HAnimJoint494.addChildren(HAnimSegment495)
HAnimJoint502 = x3d.HAnimJoint()
HAnimJoint502.setName("vt4")
HAnimJoint502.setDEF("hanim_vt4")
HAnimJoint502.setCenter([0.0061,1.432,-0.0675])
HAnimSegment503 = x3d.HAnimSegment()
HAnimSegment503.setName("segmentNameNeededTODO-463")
HAnimSegment503.setDEF("hanim_segmentNameNeededTODO-463")
Transform504 = x3d.Transform()
Transform504.setTranslation([0.0061,1.432,-0.0675])
Shape505 = x3d.Shape()
IndexedFaceSet506 = x3d.IndexedFaceSet()
IndexedFaceSet506.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet506.setCreaseAngle(0.5)
Coordinate507 = x3d.Coordinate()
Coordinate507.setUSE("points")

IndexedFaceSet506.setCoord(Coordinate507)

Shape505.setGeometry(IndexedFaceSet506)
Appearance508 = x3d.Appearance()
Material509 = x3d.Material()
Material509.setUSE("SPINAL_COLOR")

Appearance508.setMaterial(Material509)

Shape505.setAppearance(Appearance508)

Transform504.addChildren(Shape505)

HAnimSegment503.addChildren(Transform504)

HAnimJoint502.addChildren(HAnimSegment503)
HAnimJoint510 = x3d.HAnimJoint()
HAnimJoint510.setName("vt3")
HAnimJoint510.setDEF("hanim_vt3")
HAnimJoint510.setCenter([0.0062,1.4583,-0.057])
HAnimSegment511 = x3d.HAnimSegment()
HAnimSegment511.setName("segmentNameNeededTODO-469")
HAnimSegment511.setDEF("hanim_segmentNameNeededTODO-469")
Transform512 = x3d.Transform()
Transform512.setTranslation([0.0062,1.4583,-0.057])
Shape513 = x3d.Shape()
IndexedFaceSet514 = x3d.IndexedFaceSet()
IndexedFaceSet514.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet514.setCreaseAngle(0.5)
Coordinate515 = x3d.Coordinate()
Coordinate515.setUSE("points")

IndexedFaceSet514.setCoord(Coordinate515)

Shape513.setGeometry(IndexedFaceSet514)
Appearance516 = x3d.Appearance()
Material517 = x3d.Material()
Material517.setUSE("SPINAL_COLOR")

Appearance516.setMaterial(Material517)

Shape513.setAppearance(Appearance516)

Transform512.addChildren(Shape513)

HAnimSegment511.addChildren(Transform512)

HAnimJoint510.addChildren(HAnimSegment511)
HAnimJoint518 = x3d.HAnimJoint()
HAnimJoint518.setName("vt2")
HAnimJoint518.setDEF("hanim_vt2")
HAnimJoint518.setCenter([0.0063,1.4761,-0.0484])
HAnimSegment519 = x3d.HAnimSegment()
HAnimSegment519.setName("segmentNameNeededTODO-475")
HAnimSegment519.setDEF("hanim_segmentNameNeededTODO-475")
Transform520 = x3d.Transform()
Transform520.setTranslation([0.0063,1.4761,-0.0484])
Shape521 = x3d.Shape()
IndexedFaceSet522 = x3d.IndexedFaceSet()
IndexedFaceSet522.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet522.setCreaseAngle(0.5)
Coordinate523 = x3d.Coordinate()
Coordinate523.setUSE("points")

IndexedFaceSet522.setCoord(Coordinate523)

Shape521.setGeometry(IndexedFaceSet522)
Appearance524 = x3d.Appearance()
Material525 = x3d.Material()
Material525.setUSE("SPINAL_COLOR")

Appearance524.setMaterial(Material525)

Shape521.setAppearance(Appearance524)

Transform520.addChildren(Shape521)

HAnimSegment519.addChildren(Transform520)

HAnimJoint518.addChildren(HAnimSegment519)
HAnimJoint526 = x3d.HAnimJoint()
HAnimJoint526.setName("vt1")
HAnimJoint526.setDEF("hanim_vt1")
HAnimJoint526.setCenter([0.0065,1.4951,-0.0387])
HAnimSegment527 = x3d.HAnimSegment()
HAnimSegment527.setName("segmentNameNeededTODO-481")
HAnimSegment527.setDEF("hanim_segmentNameNeededTODO-481")
Transform528 = x3d.Transform()
Transform528.setTranslation([0.0065,1.4951,-0.0387])
Shape529 = x3d.Shape()
IndexedFaceSet530 = x3d.IndexedFaceSet()
IndexedFaceSet530.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet530.setCreaseAngle(0.5)
Coordinate531 = x3d.Coordinate()
Coordinate531.setUSE("points")

IndexedFaceSet530.setCoord(Coordinate531)

Shape529.setGeometry(IndexedFaceSet530)
Appearance532 = x3d.Appearance()
Material533 = x3d.Material()
Material533.setUSE("REC_SPINAL_COLOR")

Appearance532.setMaterial(Material533)

Shape529.setAppearance(Appearance532)

Transform528.addChildren(Shape529)

HAnimSegment527.addChildren(Transform528)

HAnimJoint526.addChildren(HAnimSegment527)
HAnimJoint534 = x3d.HAnimJoint()
HAnimJoint534.setName("l_shoulder")
HAnimJoint534.setDEF("hanim_l_shoulder")
HAnimJoint534.setCenter([0.2029,1.4376,-0.0387])
HAnimSegment535 = x3d.HAnimSegment()
HAnimSegment535.setName("l_upperarm")
HAnimSegment535.setDEF("hanim_l_upperarm")
Transform536 = x3d.Transform()
Transform536.setTranslation([0.2029,1.4376,-0.0387])
Shape537 = x3d.Shape()
IndexedFaceSet538 = x3d.IndexedFaceSet()
IndexedFaceSet538.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet538.setCreaseAngle(0.5)
Coordinate539 = x3d.Coordinate()
Coordinate539.setUSE("points")

IndexedFaceSet538.setCoord(Coordinate539)

Shape537.setGeometry(IndexedFaceSet538)
Appearance540 = x3d.Appearance()
Material541 = x3d.Material()
Material541.setUSE("MIN_COLOR")

Appearance540.setMaterial(Material541)

Shape537.setAppearance(Appearance540)

Transform536.addChildren(Shape537)

HAnimSegment535.addChildren(Transform536)
Transform542 = x3d.Transform()
Transform542.setDEF("l_upperarm_adjust")
Transform542.setCenter([0.182,1.22,-0.047])
Transform542.setRotation([1,0,0,0.119])
Transform542.setTranslation([0.2029,1.4376,-0.0387])

HAnimSegment535.addChildren(Transform542)
HAnimSite543 = x3d.HAnimSite()
HAnimSite543.setName("l_humeral_lateral_epicn_pt")
HAnimSite543.setDEF("hanim_l_humeral_lateral_epicn_pt")
HAnimSite543.setTranslation([0.228,1.1482,-0.11])
Shape544 = x3d.Shape()
IndexedFaceSet545 = x3d.IndexedFaceSet()
IndexedFaceSet545.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet545.setCreaseAngle(0.5)
Coordinate546 = x3d.Coordinate()
Coordinate546.setUSE("points")

IndexedFaceSet545.setCoord(Coordinate546)

Shape544.setGeometry(IndexedFaceSet545)
Appearance547 = x3d.Appearance()
Material548 = x3d.Material()
Material548.setUSE("SITE_COLOR")

Appearance547.setMaterial(Material548)

Shape544.setAppearance(Appearance547)

HAnimSite543.addChildren(Shape544)

HAnimSegment535.addChildren(HAnimSite543)

HAnimJoint534.addChildren(HAnimSegment535)
HAnimJoint549 = x3d.HAnimJoint()
HAnimJoint549.setName("l_elbow")
HAnimJoint549.setDEF("hanim_l_elbow")
HAnimJoint549.setCenter([0.2014,1.1357,-0.0682])
HAnimSegment550 = x3d.HAnimSegment()
HAnimSegment550.setName("l_forearm")
HAnimSegment550.setDEF("hanim_l_forearm")
Transform551 = x3d.Transform()
Transform551.setTranslation([0.2014,1.1357,-0.0682])
Shape552 = x3d.Shape()
IndexedFaceSet553 = x3d.IndexedFaceSet()
IndexedFaceSet553.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet553.setCreaseAngle(0.5)
Coordinate554 = x3d.Coordinate()
Coordinate554.setUSE("points")

IndexedFaceSet553.setCoord(Coordinate554)

Shape552.setGeometry(IndexedFaceSet553)
Appearance555 = x3d.Appearance()
Material556 = x3d.Material()
Material556.setUSE("MIN_COLOR")

Appearance555.setMaterial(Material556)

Shape552.setAppearance(Appearance555)

Transform551.addChildren(Shape552)

HAnimSegment550.addChildren(Transform551)
Transform557 = x3d.Transform()
Transform557.setDEF("l_forearm_adjust")
Transform557.setCenter([0.198,0.961,-0.0405])
Transform557.setRotation([-1,0,0,0.1])
Transform557.setTranslation([0.2014,1.1357,-0.0682])

HAnimSegment550.addChildren(Transform557)
HAnimSite558 = x3d.HAnimSite()
HAnimSite558.setName("l_radial_styloid_pt")
HAnimSite558.setDEF("hanim_l_radial_styloid_pt")
HAnimSite558.setTranslation([0.1901,0.8645,-0.0415])
Shape559 = x3d.Shape()
IndexedFaceSet560 = x3d.IndexedFaceSet()
IndexedFaceSet560.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet560.setCreaseAngle(0.5)
Coordinate561 = x3d.Coordinate()
Coordinate561.setUSE("points")

IndexedFaceSet560.setCoord(Coordinate561)

Shape559.setGeometry(IndexedFaceSet560)
Appearance562 = x3d.Appearance()
Material563 = x3d.Material()
Material563.setUSE("SITE_COLOR")

Appearance562.setMaterial(Material563)

Shape559.setAppearance(Appearance562)

HAnimSite558.addChildren(Shape559)

HAnimSegment550.addChildren(HAnimSite558)
HAnimSite564 = x3d.HAnimSite()
HAnimSite564.setName("l_olecranon_pt")
HAnimSite564.setDEF("hanim_l_olecranon_pt")
HAnimSite564.setTranslation([-0.1962,1.1375,-0.1123])
Shape565 = x3d.Shape()
IndexedFaceSet566 = x3d.IndexedFaceSet()
IndexedFaceSet566.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet566.setCreaseAngle(0.5)
Coordinate567 = x3d.Coordinate()
Coordinate567.setUSE("points")

IndexedFaceSet566.setCoord(Coordinate567)

Shape565.setGeometry(IndexedFaceSet566)
Appearance568 = x3d.Appearance()
Material569 = x3d.Material()
Material569.setUSE("SITE_COLOR")

Appearance568.setMaterial(Material569)

Shape565.setAppearance(Appearance568)

HAnimSite564.addChildren(Shape565)

HAnimSegment550.addChildren(HAnimSite564)
HAnimSite570 = x3d.HAnimSite()
HAnimSite570.setName("l_humeral_medial_epicn_pt")
HAnimSite570.setDEF("hanim_l_humeral_medial_epicn_pt")
HAnimSite570.setTranslation([0.1735,1.1272,-0.1113])
Shape571 = x3d.Shape()
IndexedFaceSet572 = x3d.IndexedFaceSet()
IndexedFaceSet572.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet572.setCreaseAngle(0.5)
Coordinate573 = x3d.Coordinate()
Coordinate573.setUSE("points")

IndexedFaceSet572.setCoord(Coordinate573)

Shape571.setGeometry(IndexedFaceSet572)
Appearance574 = x3d.Appearance()
Material575 = x3d.Material()
Material575.setUSE("SITE_COLOR")

Appearance574.setMaterial(Material575)

Shape571.setAppearance(Appearance574)

HAnimSite570.addChildren(Shape571)

HAnimSegment550.addChildren(HAnimSite570)
HAnimSite576 = x3d.HAnimSite()
HAnimSite576.setName("l_radiale_pt")
HAnimSite576.setDEF("hanim_l_radiale_pt")
HAnimSite576.setTranslation([0.2182,1.1212,-0.1167])
Shape577 = x3d.Shape()
IndexedFaceSet578 = x3d.IndexedFaceSet()
IndexedFaceSet578.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet578.setCreaseAngle(0.5)
Coordinate579 = x3d.Coordinate()
Coordinate579.setUSE("points")

IndexedFaceSet578.setCoord(Coordinate579)

Shape577.setGeometry(IndexedFaceSet578)
Appearance580 = x3d.Appearance()
Material581 = x3d.Material()
Material581.setUSE("SITE_COLOR")

Appearance580.setMaterial(Material581)

Shape577.setAppearance(Appearance580)

HAnimSite576.addChildren(Shape577)

HAnimSegment550.addChildren(HAnimSite576)

HAnimJoint549.addChildren(HAnimSegment550)
HAnimJoint582 = x3d.HAnimJoint()
HAnimJoint582.setName("l_radiocarpal")
HAnimJoint582.setDEF("hanim_l_radiocarpal")
HAnimJoint582.setCenter([0.1984,0.8663,-0.0583])
HAnimSegment583 = x3d.HAnimSegment()
HAnimSegment583.setName("l_carpal")
HAnimSegment583.setDEF("hanim_l_carpal")
Transform584 = x3d.Transform()
Transform584.setTranslation([0.1984,0.8663,-0.0583])
Shape585 = x3d.Shape()
IndexedFaceSet586 = x3d.IndexedFaceSet()
IndexedFaceSet586.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet586.setCreaseAngle(0.5)
Coordinate587 = x3d.Coordinate()
Coordinate587.setUSE("points")

IndexedFaceSet586.setCoord(Coordinate587)

Shape585.setGeometry(IndexedFaceSet586)
Appearance588 = x3d.Appearance()
Material589 = x3d.Material()
Material589.setUSE("MIN_COLOR")

Appearance588.setMaterial(Material589)

Shape585.setAppearance(Appearance588)

Transform584.addChildren(Shape585)

HAnimSegment583.addChildren(Transform584)
Transform590 = x3d.Transform()
Transform590.setDEF("l_hand_adjust")
Transform590.setCenter([0.213,0.811,-0.0338])
Transform590.setRotation([-0.06361,-0.9967,0.04988,1.333])
Transform590.setTranslation([0.1984,0.8663,-0.0583])

HAnimSegment583.addChildren(Transform590)
HAnimSite591 = x3d.HAnimSite()
HAnimSite591.setName("l_hand_tip")
HAnimSite591.setDEF("hanim_l_hand_tip")
HAnimSite591.setTranslation([0.208,0.6731,-0.0491])
Shape592 = x3d.Shape()
IndexedFaceSet593 = x3d.IndexedFaceSet()
IndexedFaceSet593.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet593.setCreaseAngle(0.5)
Coordinate594 = x3d.Coordinate()
Coordinate594.setUSE("points")

IndexedFaceSet593.setCoord(Coordinate594)

Shape592.setGeometry(IndexedFaceSet593)
Appearance595 = x3d.Appearance()
Material596 = x3d.Material()
Material596.setUSE("SITE_COLOR")

Appearance595.setMaterial(Material596)

Shape592.setAppearance(Appearance595)

HAnimSite591.addChildren(Shape592)

HAnimSegment583.addChildren(HAnimSite591)
HAnimSite597 = x3d.HAnimSite()
HAnimSite597.setName("l_metacarpal_pha2_pt")
HAnimSite597.setDEF("hanim_l_metacarpal_pha2_pt")
HAnimSite597.setTranslation([0.2009,0.8139,-0.0237])
Shape598 = x3d.Shape()
IndexedFaceSet599 = x3d.IndexedFaceSet()
IndexedFaceSet599.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet599.setCreaseAngle(0.5)
Coordinate600 = x3d.Coordinate()
Coordinate600.setUSE("points")

IndexedFaceSet599.setCoord(Coordinate600)

Shape598.setGeometry(IndexedFaceSet599)
Appearance601 = x3d.Appearance()
Material602 = x3d.Material()
Material602.setUSE("SITE_COLOR")

Appearance601.setMaterial(Material602)

Shape598.setAppearance(Appearance601)

HAnimSite597.addChildren(Shape598)

HAnimSegment583.addChildren(HAnimSite597)
HAnimSite603 = x3d.HAnimSite()
HAnimSite603.setName("l_dactylion_pt")
HAnimSite603.setDEF("hanim_l_dactylion_pt")
HAnimSite603.setTranslation([0.2056,0.6743,-0.0482])
Shape604 = x3d.Shape()
IndexedFaceSet605 = x3d.IndexedFaceSet()
IndexedFaceSet605.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet605.setCreaseAngle(0.5)
Coordinate606 = x3d.Coordinate()
Coordinate606.setUSE("points")

IndexedFaceSet605.setCoord(Coordinate606)

Shape604.setGeometry(IndexedFaceSet605)
Appearance607 = x3d.Appearance()
Material608 = x3d.Material()
Material608.setUSE("SITE_COLOR")

Appearance607.setMaterial(Material608)

Shape604.setAppearance(Appearance607)

HAnimSite603.addChildren(Shape604)

HAnimSegment583.addChildren(HAnimSite603)
HAnimSite609 = x3d.HAnimSite()
HAnimSite609.setName("l_ulnar_styloid_pt")
HAnimSite609.setDEF("hanim_l_ulnar_styloid_pt")
HAnimSite609.setTranslation([-0.2142,0.8529,-0.0648])
Shape610 = x3d.Shape()
IndexedFaceSet611 = x3d.IndexedFaceSet()
IndexedFaceSet611.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet611.setCreaseAngle(0.5)
Coordinate612 = x3d.Coordinate()
Coordinate612.setUSE("points")

IndexedFaceSet611.setCoord(Coordinate612)

Shape610.setGeometry(IndexedFaceSet611)
Appearance613 = x3d.Appearance()
Material614 = x3d.Material()
Material614.setUSE("SITE_COLOR")

Appearance613.setMaterial(Material614)

Shape610.setAppearance(Appearance613)

HAnimSite609.addChildren(Shape610)

HAnimSegment583.addChildren(HAnimSite609)
HAnimSite615 = x3d.HAnimSite()
HAnimSite615.setName("l_metacarpal_pha5_pt")
HAnimSite615.setDEF("hanim_l_metacarpal_pha5_pt")
HAnimSite615.setTranslation([0.1929,0.786,-0.1122])
Shape616 = x3d.Shape()
IndexedFaceSet617 = x3d.IndexedFaceSet()
IndexedFaceSet617.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet617.setCreaseAngle(0.5)
Coordinate618 = x3d.Coordinate()
Coordinate618.setUSE("points")

IndexedFaceSet617.setCoord(Coordinate618)

Shape616.setGeometry(IndexedFaceSet617)
Appearance619 = x3d.Appearance()
Material620 = x3d.Material()
Material620.setUSE("SITE_COLOR")

Appearance619.setMaterial(Material620)

Shape616.setAppearance(Appearance619)

HAnimSite615.addChildren(Shape616)

HAnimSegment583.addChildren(HAnimSite615)

HAnimJoint582.addChildren(HAnimSegment583)
HAnimJoint621 = x3d.HAnimJoint()
HAnimJoint621.setName("l_thumb1")
HAnimJoint621.setDEF("hanim_l_thumb1")
HAnimJoint621.setCenter([0.1924,0.8472,-0.0534])
HAnimSegment622 = x3d.HAnimSegment()
HAnimSegment622.setName("segmentNameNeededTODO-539")
HAnimSegment622.setDEF("hanim_segmentNameNeededTODO-539")
Transform623 = x3d.Transform()
Transform623.setTranslation([0.1924,0.8472,-0.0534])
Shape624 = x3d.Shape()
IndexedFaceSet625 = x3d.IndexedFaceSet()
IndexedFaceSet625.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet625.setCreaseAngle(0.5)
Coordinate626 = x3d.Coordinate()
Coordinate626.setUSE("points")

IndexedFaceSet625.setCoord(Coordinate626)

Shape624.setGeometry(IndexedFaceSet625)
Appearance627 = x3d.Appearance()
Material628 = x3d.Material()
Material628.setUSE("JOINT_COLOR")

Appearance627.setMaterial(Material628)

Shape624.setAppearance(Appearance627)

Transform623.addChildren(Shape624)

HAnimSegment622.addChildren(Transform623)

HAnimJoint621.addChildren(HAnimSegment622)
HAnimJoint629 = x3d.HAnimJoint()
HAnimJoint629.setName("l_thumb2")
HAnimJoint629.setDEF("hanim_l_thumb2")
HAnimJoint629.setCenter([0.1951,0.8226,0.0246])
HAnimSegment630 = x3d.HAnimSegment()
HAnimSegment630.setName("segmentNameNeededTODO-545")
HAnimSegment630.setDEF("hanim_segmentNameNeededTODO-545")
Transform631 = x3d.Transform()
Transform631.setTranslation([0.1951,0.8226,0.0246])
Shape632 = x3d.Shape()
IndexedFaceSet633 = x3d.IndexedFaceSet()
IndexedFaceSet633.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet633.setCreaseAngle(0.5)
Coordinate634 = x3d.Coordinate()
Coordinate634.setUSE("points")

IndexedFaceSet633.setCoord(Coordinate634)

Shape632.setGeometry(IndexedFaceSet633)
Appearance635 = x3d.Appearance()
Material636 = x3d.Material()
Material636.setUSE("JOINT_COLOR")

Appearance635.setMaterial(Material636)

Shape632.setAppearance(Appearance635)

Transform631.addChildren(Shape632)

HAnimSegment630.addChildren(Transform631)

HAnimJoint629.addChildren(HAnimSegment630)
HAnimJoint637 = x3d.HAnimJoint()
HAnimJoint637.setName("l_thumb3")
HAnimJoint637.setDEF("hanim_l_thumb3")
HAnimJoint637.setCenter([0.1955,0.8159,0.0464])
HAnimSegment638 = x3d.HAnimSegment()
HAnimSegment638.setName("l_carpal_distal_phalanx_1")
HAnimSegment638.setDEF("hanim_l_carpal_distal_phalanx_1")
Transform639 = x3d.Transform()
Transform639.setTranslation([0.1955,0.8159,0.0464])
Shape640 = x3d.Shape()
IndexedFaceSet641 = x3d.IndexedFaceSet()
IndexedFaceSet641.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet641.setCreaseAngle(0.5)
Coordinate642 = x3d.Coordinate()
Coordinate642.setUSE("points")

IndexedFaceSet641.setCoord(Coordinate642)

Shape640.setGeometry(IndexedFaceSet641)
Appearance643 = x3d.Appearance()
Material644 = x3d.Material()
Material644.setUSE("JOINT_COLOR")

Appearance643.setMaterial(Material644)

Shape640.setAppearance(Appearance643)

Transform639.addChildren(Shape640)

HAnimSegment638.addChildren(Transform639)
HAnimSite645 = x3d.HAnimSite()
HAnimSite645.setName("l_thumb_distal_tip")
HAnimSite645.setDEF("hanim_l_thumb_distal_tip")
HAnimSite645.setTranslation([0.1982,0.8061,0.0759])
Shape646 = x3d.Shape()
IndexedFaceSet647 = x3d.IndexedFaceSet()
IndexedFaceSet647.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet647.setCreaseAngle(0.5)
Coordinate648 = x3d.Coordinate()
Coordinate648.setUSE("points")

IndexedFaceSet647.setCoord(Coordinate648)

Shape646.setGeometry(IndexedFaceSet647)
Appearance649 = x3d.Appearance()
Material650 = x3d.Material()
Material650.setUSE("HAND_FEET_COLOR")

Appearance649.setMaterial(Material650)

Shape646.setAppearance(Appearance649)

HAnimSite645.addChildren(Shape646)

HAnimSegment638.addChildren(HAnimSite645)

HAnimJoint637.addChildren(HAnimSegment638)

HAnimJoint629.addChildren(HAnimJoint637)

HAnimJoint621.addChildren(HAnimJoint629)

HAnimJoint582.addChildren(HAnimJoint621)
HAnimJoint651 = x3d.HAnimJoint()
HAnimJoint651.setName("l_index0")
HAnimJoint651.setDEF("hanim_l_index0")
HAnimJoint651.setCenter([0.1983,0.8024,-0.028])
HAnimSegment652 = x3d.HAnimSegment()
HAnimSegment652.setName("segmentNameNeededTODO-567")
HAnimSegment652.setDEF("hanim_segmentNameNeededTODO-567")
Transform653 = x3d.Transform()
Transform653.setTranslation([0.1983,0.8024,-0.028])
Shape654 = x3d.Shape()
IndexedFaceSet655 = x3d.IndexedFaceSet()
IndexedFaceSet655.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet655.setCreaseAngle(0.5)
Coordinate656 = x3d.Coordinate()
Coordinate656.setUSE("points")

IndexedFaceSet655.setCoord(Coordinate656)

Shape654.setGeometry(IndexedFaceSet655)
Appearance657 = x3d.Appearance()
Material658 = x3d.Material()
Material658.setUSE("JOINT_COLOR")

Appearance657.setMaterial(Material658)

Shape654.setAppearance(Appearance657)

Transform653.addChildren(Shape654)

HAnimSegment652.addChildren(Transform653)

HAnimJoint651.addChildren(HAnimSegment652)
HAnimJoint659 = x3d.HAnimJoint()
HAnimJoint659.setName("l_index1")
HAnimJoint659.setDEF("hanim_l_index1")
HAnimJoint659.setCenter([0.1983,0.7815,-0.028])
HAnimSegment660 = x3d.HAnimSegment()
HAnimSegment660.setName("segmentNameNeededTODO-573")
HAnimSegment660.setDEF("hanim_segmentNameNeededTODO-573")
Transform661 = x3d.Transform()
Transform661.setTranslation([0.1983,0.7815,-0.028])
Shape662 = x3d.Shape()
IndexedFaceSet663 = x3d.IndexedFaceSet()
IndexedFaceSet663.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet663.setCreaseAngle(0.5)
Coordinate664 = x3d.Coordinate()
Coordinate664.setUSE("points")

IndexedFaceSet663.setCoord(Coordinate664)

Shape662.setGeometry(IndexedFaceSet663)
Appearance665 = x3d.Appearance()
Material666 = x3d.Material()
Material666.setUSE("JOINT_COLOR")

Appearance665.setMaterial(Material666)

Shape662.setAppearance(Appearance665)

Transform661.addChildren(Shape662)

HAnimSegment660.addChildren(Transform661)

HAnimJoint659.addChildren(HAnimSegment660)
HAnimJoint667 = x3d.HAnimJoint()
HAnimJoint667.setName("l_index2")
HAnimJoint667.setDEF("hanim_l_index2")
HAnimJoint667.setCenter([0.2017,0.7363,-0.0248])
HAnimSegment668 = x3d.HAnimSegment()
HAnimSegment668.setName("segmentNameNeededTODO-579")
HAnimSegment668.setDEF("hanim_segmentNameNeededTODO-579")
Transform669 = x3d.Transform()
Transform669.setTranslation([0.2017,0.7363,-0.0248])
Shape670 = x3d.Shape()
IndexedFaceSet671 = x3d.IndexedFaceSet()
IndexedFaceSet671.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet671.setCreaseAngle(0.5)
Coordinate672 = x3d.Coordinate()
Coordinate672.setUSE("points")

IndexedFaceSet671.setCoord(Coordinate672)

Shape670.setGeometry(IndexedFaceSet671)
Appearance673 = x3d.Appearance()
Material674 = x3d.Material()
Material674.setUSE("JOINT_COLOR")

Appearance673.setMaterial(Material674)

Shape670.setAppearance(Appearance673)

Transform669.addChildren(Shape670)

HAnimSegment668.addChildren(Transform669)

HAnimJoint667.addChildren(HAnimSegment668)
HAnimJoint675 = x3d.HAnimJoint()
HAnimJoint675.setName("l_index3")
HAnimJoint675.setDEF("hanim_l_index3")
HAnimJoint675.setCenter([0.2028,0.7139,-0.0236])
HAnimSegment676 = x3d.HAnimSegment()
HAnimSegment676.setName("l_carpal_distal_phalanx_2")
HAnimSegment676.setDEF("hanim_l_carpal_distal_phalanx_2")
Transform677 = x3d.Transform()
Transform677.setTranslation([0.2028,0.7139,-0.0236])
Shape678 = x3d.Shape()
IndexedFaceSet679 = x3d.IndexedFaceSet()
IndexedFaceSet679.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet679.setCreaseAngle(0.5)
Coordinate680 = x3d.Coordinate()
Coordinate680.setUSE("points")

IndexedFaceSet679.setCoord(Coordinate680)

Shape678.setGeometry(IndexedFaceSet679)
Appearance681 = x3d.Appearance()
Material682 = x3d.Material()
Material682.setUSE("JOINT_COLOR")

Appearance681.setMaterial(Material682)

Shape678.setAppearance(Appearance681)

Transform677.addChildren(Shape678)

HAnimSegment676.addChildren(Transform677)
HAnimSite683 = x3d.HAnimSite()
HAnimSite683.setName("l_index_distal_tip")
HAnimSite683.setDEF("hanim_l_index_distal_tip")
HAnimSite683.setTranslation([0.2089,0.6858,-0.0245])
Shape684 = x3d.Shape()
IndexedFaceSet685 = x3d.IndexedFaceSet()
IndexedFaceSet685.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet685.setCreaseAngle(0.5)
Coordinate686 = x3d.Coordinate()
Coordinate686.setUSE("points")

IndexedFaceSet685.setCoord(Coordinate686)

Shape684.setGeometry(IndexedFaceSet685)
Appearance687 = x3d.Appearance()
Material688 = x3d.Material()
Material688.setUSE("HAND_FEET_COLOR")

Appearance687.setMaterial(Material688)

Shape684.setAppearance(Appearance687)

HAnimSite683.addChildren(Shape684)

HAnimSegment676.addChildren(HAnimSite683)

HAnimJoint675.addChildren(HAnimSegment676)

HAnimJoint667.addChildren(HAnimJoint675)

HAnimJoint659.addChildren(HAnimJoint667)

HAnimJoint651.addChildren(HAnimJoint659)

HAnimJoint582.addChildren(HAnimJoint651)

HAnimJoint549.addChildren(HAnimJoint582)

HAnimJoint534.addChildren(HAnimJoint549)

HAnimJoint526.addChildren(HAnimJoint534)
HAnimJoint689 = x3d.HAnimJoint()
HAnimJoint689.setName("r_shoulder")
HAnimJoint689.setDEF("hanim_r_shoulder")
HAnimJoint689.setCenter([-0.1907,1.4407,-0.0325])
HAnimSegment690 = x3d.HAnimSegment()
HAnimSegment690.setName("r_upperarm")
HAnimSegment690.setDEF("hanim_r_upperarm")
Transform691 = x3d.Transform()
Transform691.setTranslation([-0.1907,1.4407,-0.0325])
Shape692 = x3d.Shape()
IndexedFaceSet693 = x3d.IndexedFaceSet()
IndexedFaceSet693.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet693.setCreaseAngle(0.5)
Coordinate694 = x3d.Coordinate()
Coordinate694.setUSE("points")

IndexedFaceSet693.setCoord(Coordinate694)

Shape692.setGeometry(IndexedFaceSet693)
Appearance695 = x3d.Appearance()
Material696 = x3d.Material()
Material696.setUSE("MIN_COLOR")

Appearance695.setMaterial(Material696)

Shape692.setAppearance(Appearance695)

Transform691.addChildren(Shape692)

HAnimSegment690.addChildren(Transform691)
Transform697 = x3d.Transform()
Transform697.setDEF("r_upperarm_adjust")
Transform697.setCenter([-0.182,1.22,-0.047])
Transform697.setRotation([1,0,0,0.0836])
Transform697.setTranslation([-0.1907,1.4407,-0.0325])

HAnimSegment690.addChildren(Transform697)
HAnimSite698 = x3d.HAnimSite()
HAnimSite698.setName("r_humeral_lateral_epicn_pt")
HAnimSite698.setDEF("hanim_r_humeral_lateral_epicn_pt")
HAnimSite698.setTranslation([-0.2224,1.1517,-0.1033])
Shape699 = x3d.Shape()
IndexedFaceSet700 = x3d.IndexedFaceSet()
IndexedFaceSet700.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet700.setCreaseAngle(0.5)
Coordinate701 = x3d.Coordinate()
Coordinate701.setUSE("points")

IndexedFaceSet700.setCoord(Coordinate701)

Shape699.setGeometry(IndexedFaceSet700)
Appearance702 = x3d.Appearance()
Material703 = x3d.Material()
Material703.setUSE("SITE_COLOR")

Appearance702.setMaterial(Material703)

Shape699.setAppearance(Appearance702)

HAnimSite698.addChildren(Shape699)

HAnimSegment690.addChildren(HAnimSite698)

HAnimJoint689.addChildren(HAnimSegment690)
HAnimJoint704 = x3d.HAnimJoint()
HAnimJoint704.setName("r_elbow")
HAnimJoint704.setDEF("hanim_r_elbow")
HAnimJoint704.setCenter([-0.1949,1.1388,-0.062])
HAnimSegment705 = x3d.HAnimSegment()
HAnimSegment705.setName("r_forearm")
HAnimSegment705.setDEF("hanim_r_forearm")
Transform706 = x3d.Transform()
Transform706.setTranslation([-0.1949,1.1388,-0.062])
Shape707 = x3d.Shape()
IndexedFaceSet708 = x3d.IndexedFaceSet()
IndexedFaceSet708.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet708.setCreaseAngle(0.5)
Coordinate709 = x3d.Coordinate()
Coordinate709.setUSE("points")

IndexedFaceSet708.setCoord(Coordinate709)

Shape707.setGeometry(IndexedFaceSet708)
Appearance710 = x3d.Appearance()
Material711 = x3d.Material()
Material711.setUSE("MIN_COLOR")

Appearance710.setMaterial(Material711)

Shape707.setAppearance(Appearance710)

Transform706.addChildren(Shape707)

HAnimSegment705.addChildren(Transform706)
Transform712 = x3d.Transform()
Transform712.setDEF("r_forearm_adjust")
Transform712.setCenter([-0.198,0.961,-0.0397])
Transform712.setRotation([-1,0,0,0.1254])
Transform712.setTranslation([-0.1949,1.1388,-0.062])

HAnimSegment705.addChildren(Transform712)
HAnimSite713 = x3d.HAnimSite()
HAnimSite713.setName("r_radial_styloid_pt")
HAnimSite713.setDEF("hanim_r_radial_styloid_pt")
HAnimSite713.setTranslation([-0.1884,0.8676,-0.036])
Shape714 = x3d.Shape()
IndexedFaceSet715 = x3d.IndexedFaceSet()
IndexedFaceSet715.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet715.setCreaseAngle(0.5)
Coordinate716 = x3d.Coordinate()
Coordinate716.setUSE("points")

IndexedFaceSet715.setCoord(Coordinate716)

Shape714.setGeometry(IndexedFaceSet715)
Appearance717 = x3d.Appearance()
Material718 = x3d.Material()
Material718.setUSE("SITE_COLOR")

Appearance717.setMaterial(Material718)

Shape714.setAppearance(Appearance717)

HAnimSite713.addChildren(Shape714)

HAnimSegment705.addChildren(HAnimSite713)
HAnimSite719 = x3d.HAnimSite()
HAnimSite719.setName("r_olecranon_pt")
HAnimSite719.setDEF("hanim_r_olecranon_pt")
HAnimSite719.setTranslation([-0.1907,1.1405,-0.1065])
Shape720 = x3d.Shape()
IndexedFaceSet721 = x3d.IndexedFaceSet()
IndexedFaceSet721.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet721.setCreaseAngle(0.5)
Coordinate722 = x3d.Coordinate()
Coordinate722.setUSE("points")

IndexedFaceSet721.setCoord(Coordinate722)

Shape720.setGeometry(IndexedFaceSet721)
Appearance723 = x3d.Appearance()
Material724 = x3d.Material()
Material724.setUSE("SITE_COLOR")

Appearance723.setMaterial(Material724)

Shape720.setAppearance(Appearance723)

HAnimSite719.addChildren(Shape720)

HAnimSegment705.addChildren(HAnimSite719)
HAnimSite725 = x3d.HAnimSite()
HAnimSite725.setName("r_humeral_medial_epicn_pt")
HAnimSite725.setDEF("hanim_r_humeral_medial_epicn_pt")
HAnimSite725.setTranslation([-0.168,1.1298,-0.1062])
Shape726 = x3d.Shape()
IndexedFaceSet727 = x3d.IndexedFaceSet()
IndexedFaceSet727.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet727.setCreaseAngle(0.5)
Coordinate728 = x3d.Coordinate()
Coordinate728.setUSE("points")

IndexedFaceSet727.setCoord(Coordinate728)

Shape726.setGeometry(IndexedFaceSet727)
Appearance729 = x3d.Appearance()
Material730 = x3d.Material()
Material730.setUSE("SITE_COLOR")

Appearance729.setMaterial(Material730)

Shape726.setAppearance(Appearance729)

HAnimSite725.addChildren(Shape726)

HAnimSegment705.addChildren(HAnimSite725)
HAnimSite731 = x3d.HAnimSite()
HAnimSite731.setName("r_radiale_pt")
HAnimSite731.setDEF("hanim_r_radiale_pt")
HAnimSite731.setTranslation([-0.213,1.1305,-0.1091])
Shape732 = x3d.Shape()
IndexedFaceSet733 = x3d.IndexedFaceSet()
IndexedFaceSet733.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet733.setCreaseAngle(0.5)
Coordinate734 = x3d.Coordinate()
Coordinate734.setUSE("points")

IndexedFaceSet733.setCoord(Coordinate734)

Shape732.setGeometry(IndexedFaceSet733)
Appearance735 = x3d.Appearance()
Material736 = x3d.Material()
Material736.setUSE("SITE_COLOR")

Appearance735.setMaterial(Material736)

Shape732.setAppearance(Appearance735)

HAnimSite731.addChildren(Shape732)

HAnimSegment705.addChildren(HAnimSite731)

HAnimJoint704.addChildren(HAnimSegment705)
HAnimJoint737 = x3d.HAnimJoint()
HAnimJoint737.setName("r_radiocarpal")
HAnimJoint737.setDEF("hanim_r_radiocarpal")
HAnimJoint737.setCenter([-0.1959,0.8694,-0.0521])
HAnimSegment738 = x3d.HAnimSegment()
HAnimSegment738.setName("r_carpal")
HAnimSegment738.setDEF("hanim_r_carpal")
Transform739 = x3d.Transform()
Transform739.setTranslation([-0.1959,0.8694,-0.0521])
Shape740 = x3d.Shape()
IndexedFaceSet741 = x3d.IndexedFaceSet()
IndexedFaceSet741.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet741.setCreaseAngle(0.5)
Coordinate742 = x3d.Coordinate()
Coordinate742.setUSE("points")

IndexedFaceSet741.setCoord(Coordinate742)

Shape740.setGeometry(IndexedFaceSet741)
Appearance743 = x3d.Appearance()
Material744 = x3d.Material()
Material744.setUSE("MIN_COLOR")

Appearance743.setMaterial(Material744)

Shape740.setAppearance(Appearance743)

Transform739.addChildren(Shape740)

HAnimSegment738.addChildren(Transform739)
Transform745 = x3d.Transform()
Transform745.setDEF("r_hand_adjust")
Transform745.setCenter([-0.217,0.811,-0.0338])
Transform745.setRotation([-0.09024,0.994,-0.0624,1.216])

HAnimSegment738.addChildren(Transform745)
HAnimSite746 = x3d.HAnimSite()
HAnimSite746.setName("r_hand_tip")
HAnimSite746.setDEF("hanim_r_hand_tip")
HAnimSite746.setTranslation([-0.1969,0.6758,-0.0427])
Shape747 = x3d.Shape()
IndexedFaceSet748 = x3d.IndexedFaceSet()
IndexedFaceSet748.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet748.setCreaseAngle(0.5)
Coordinate749 = x3d.Coordinate()
Coordinate749.setUSE("points")

IndexedFaceSet748.setCoord(Coordinate749)

Shape747.setGeometry(IndexedFaceSet748)
Appearance750 = x3d.Appearance()
Material751 = x3d.Material()
Material751.setUSE("SITE_COLOR")

Appearance750.setMaterial(Material751)

Shape747.setAppearance(Appearance750)

HAnimSite746.addChildren(Shape747)

HAnimSegment738.addChildren(HAnimSite746)
HAnimSite752 = x3d.HAnimSite()
HAnimSite752.setName("r_metacarpal_pha2_pt")
HAnimSite752.setDEF("hanim_r_metacarpal_pha2_pt")
HAnimSite752.setTranslation([-0.1977,0.8169,-0.0177])
Shape753 = x3d.Shape()
IndexedFaceSet754 = x3d.IndexedFaceSet()
IndexedFaceSet754.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet754.setCreaseAngle(0.5)
Coordinate755 = x3d.Coordinate()
Coordinate755.setUSE("points")

IndexedFaceSet754.setCoord(Coordinate755)

Shape753.setGeometry(IndexedFaceSet754)
Appearance756 = x3d.Appearance()
Material757 = x3d.Material()
Material757.setUSE("SITE_COLOR")

Appearance756.setMaterial(Material757)

Shape753.setAppearance(Appearance756)

HAnimSite752.addChildren(Shape753)

HAnimSegment738.addChildren(HAnimSite752)
HAnimSite758 = x3d.HAnimSite()
HAnimSite758.setName("r_dactylion_pt")
HAnimSite758.setDEF("hanim_r_dactylion_pt")
HAnimSite758.setTranslation([-0.1941,0.6772,-0.0423])
Shape759 = x3d.Shape()
IndexedFaceSet760 = x3d.IndexedFaceSet()
IndexedFaceSet760.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet760.setCreaseAngle(0.5)
Coordinate761 = x3d.Coordinate()
Coordinate761.setUSE("points")

IndexedFaceSet760.setCoord(Coordinate761)

Shape759.setGeometry(IndexedFaceSet760)
Appearance762 = x3d.Appearance()
Material763 = x3d.Material()
Material763.setUSE("SITE_COLOR")

Appearance762.setMaterial(Material763)

Shape759.setAppearance(Appearance762)

HAnimSite758.addChildren(Shape759)

HAnimSegment738.addChildren(HAnimSite758)
HAnimSite764 = x3d.HAnimSite()
HAnimSite764.setName("r_ulnar_styloid_pt")
HAnimSite764.setDEF("hanim_r_ulnar_styloid_pt")
HAnimSite764.setTranslation([-0.2117,0.8562,-0.0584])
Shape765 = x3d.Shape()
IndexedFaceSet766 = x3d.IndexedFaceSet()
IndexedFaceSet766.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet766.setCreaseAngle(0.5)
Coordinate767 = x3d.Coordinate()
Coordinate767.setUSE("points")

IndexedFaceSet766.setCoord(Coordinate767)

Shape765.setGeometry(IndexedFaceSet766)
Appearance768 = x3d.Appearance()
Material769 = x3d.Material()
Material769.setUSE("SITE_COLOR")

Appearance768.setMaterial(Material769)

Shape765.setAppearance(Appearance768)

HAnimSite764.addChildren(Shape765)

HAnimSegment738.addChildren(HAnimSite764)
HAnimSite770 = x3d.HAnimSite()
HAnimSite770.setName("r_metacarpal_pha5_pt")
HAnimSite770.setDEF("hanim_r_metacarpal_pha5_pt")
HAnimSite770.setTranslation([-0.1929,0.789,-0.1064])
Shape771 = x3d.Shape()
IndexedFaceSet772 = x3d.IndexedFaceSet()
IndexedFaceSet772.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet772.setCreaseAngle(0.5)
Coordinate773 = x3d.Coordinate()
Coordinate773.setUSE("points")

IndexedFaceSet772.setCoord(Coordinate773)

Shape771.setGeometry(IndexedFaceSet772)
Appearance774 = x3d.Appearance()
Material775 = x3d.Material()
Material775.setUSE("SITE_COLOR")

Appearance774.setMaterial(Material775)

Shape771.setAppearance(Appearance774)

HAnimSite770.addChildren(Shape771)

HAnimSegment738.addChildren(HAnimSite770)

HAnimJoint737.addChildren(HAnimSegment738)

HAnimJoint704.addChildren(HAnimJoint737)

HAnimJoint689.addChildren(HAnimJoint704)

HAnimJoint526.addChildren(HAnimJoint689)
HAnimJoint776 = x3d.HAnimJoint()
HAnimJoint776.setName("vc7")
HAnimJoint776.setDEF("hanim_vc7")
HAnimJoint776.setCenter([0.0066,1.5132,-0.0301])
HAnimSegment777 = x3d.HAnimSegment()
HAnimSegment777.setName("c7")
HAnimSegment777.setDEF("hanim_c7")
Transform778 = x3d.Transform()
Transform778.setTranslation([0.0066,1.5132,-0.0301])
Shape779 = x3d.Shape()
IndexedFaceSet780 = x3d.IndexedFaceSet()
IndexedFaceSet780.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet780.setCreaseAngle(0.5)
Coordinate781 = x3d.Coordinate()
Coordinate781.setUSE("points")

IndexedFaceSet780.setCoord(Coordinate781)

Shape779.setGeometry(IndexedFaceSet780)
Appearance782 = x3d.Appearance()
Material783 = x3d.Material()
Material783.setUSE("SPINAL_COLOR")

Appearance782.setMaterial(Material783)

Shape779.setAppearance(Appearance782)

Transform778.addChildren(Shape779)

HAnimSegment777.addChildren(Transform778)

HAnimJoint776.addChildren(HAnimSegment777)
HAnimJoint784 = x3d.HAnimJoint()
HAnimJoint784.setName("vc6")
HAnimJoint784.setDEF("hanim_vc6")
HAnimJoint784.setCenter([0.0066,1.5357,-0.0143])
HAnimSegment785 = x3d.HAnimSegment()
HAnimSegment785.setName("segmentNameNeededTODO-731")
HAnimSegment785.setDEF("hanim_segmentNameNeededTODO-731")
Transform786 = x3d.Transform()
Transform786.setTranslation([0.0066,1.5357,-0.0143])
Shape787 = x3d.Shape()
IndexedFaceSet788 = x3d.IndexedFaceSet()
IndexedFaceSet788.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet788.setCreaseAngle(0.5)
Coordinate789 = x3d.Coordinate()
Coordinate789.setUSE("points")

IndexedFaceSet788.setCoord(Coordinate789)

Shape787.setGeometry(IndexedFaceSet788)
Appearance790 = x3d.Appearance()
Material791 = x3d.Material()
Material791.setUSE("SPINAL_COLOR")

Appearance790.setMaterial(Material791)

Shape787.setAppearance(Appearance790)

Transform786.addChildren(Shape787)

HAnimSegment785.addChildren(Transform786)

HAnimJoint784.addChildren(HAnimSegment785)
HAnimJoint792 = x3d.HAnimJoint()
HAnimJoint792.setName("vc5")
HAnimJoint792.setDEF("hanim_vc5")
HAnimJoint792.setCenter([0.0066,1.552,-0.0082])
HAnimSegment793 = x3d.HAnimSegment()
HAnimSegment793.setName("segmentNameNeededTODO-737")
HAnimSegment793.setDEF("hanim_segmentNameNeededTODO-737")
Transform794 = x3d.Transform()
Transform794.setTranslation([0.0066,1.552,-0.0082])
Shape795 = x3d.Shape()
IndexedFaceSet796 = x3d.IndexedFaceSet()
IndexedFaceSet796.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet796.setCreaseAngle(0.5)
Coordinate797 = x3d.Coordinate()
Coordinate797.setUSE("points")

IndexedFaceSet796.setCoord(Coordinate797)

Shape795.setGeometry(IndexedFaceSet796)
Appearance798 = x3d.Appearance()
Material799 = x3d.Material()
Material799.setUSE("SPINAL_COLOR")

Appearance798.setMaterial(Material799)

Shape795.setAppearance(Appearance798)

Transform794.addChildren(Shape795)

HAnimSegment793.addChildren(Transform794)

HAnimJoint792.addChildren(HAnimSegment793)
HAnimJoint800 = x3d.HAnimJoint()
HAnimJoint800.setName("vc4")
HAnimJoint800.setDEF("hanim_vc4")
HAnimJoint800.setCenter([0.0066,1.5662,-0.0084])
HAnimSegment801 = x3d.HAnimSegment()
HAnimSegment801.setName("c4")
HAnimSegment801.setDEF("hanim_c4")
Transform802 = x3d.Transform()
Transform802.setTranslation([0.0066,1.5662,-0.0084])
Shape803 = x3d.Shape()
IndexedFaceSet804 = x3d.IndexedFaceSet()
IndexedFaceSet804.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet804.setCreaseAngle(0.5)
Coordinate805 = x3d.Coordinate()
Coordinate805.setUSE("points")

IndexedFaceSet804.setCoord(Coordinate805)

Shape803.setGeometry(IndexedFaceSet804)
Appearance806 = x3d.Appearance()
Material807 = x3d.Material()
Material807.setUSE("SPINAL_COLOR")

Appearance806.setMaterial(Material807)

Shape803.setAppearance(Appearance806)

Transform802.addChildren(Shape803)

HAnimSegment801.addChildren(Transform802)

HAnimJoint800.addChildren(HAnimSegment801)
HAnimJoint808 = x3d.HAnimJoint()
HAnimJoint808.setName("vc3")
HAnimJoint808.setDEF("hanim_vc3")
HAnimJoint808.setCenter([0.0066,1.58,-0.0103])
HAnimSegment809 = x3d.HAnimSegment()
HAnimSegment809.setName("segmentNameNeededTODO-750")
HAnimSegment809.setDEF("hanim_segmentNameNeededTODO-750")
Transform810 = x3d.Transform()
Transform810.setTranslation([0.0066,1.58,-0.0103])
Shape811 = x3d.Shape()
IndexedFaceSet812 = x3d.IndexedFaceSet()
IndexedFaceSet812.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet812.setCreaseAngle(0.5)
Coordinate813 = x3d.Coordinate()
Coordinate813.setUSE("points")

IndexedFaceSet812.setCoord(Coordinate813)

Shape811.setGeometry(IndexedFaceSet812)
Appearance814 = x3d.Appearance()
Material815 = x3d.Material()
Material815.setUSE("SPINAL_COLOR")

Appearance814.setMaterial(Material815)

Shape811.setAppearance(Appearance814)

Transform810.addChildren(Shape811)

HAnimSegment809.addChildren(Transform810)

HAnimJoint808.addChildren(HAnimSegment809)
HAnimJoint816 = x3d.HAnimJoint()
HAnimJoint816.setName("vc2")
HAnimJoint816.setDEF("hanim_vc2")
HAnimJoint816.setCenter([0.0066,1.5928,-0.0103])
HAnimSegment817 = x3d.HAnimSegment()
HAnimSegment817.setName("segmentNameNeededTODO-756")
HAnimSegment817.setDEF("hanim_segmentNameNeededTODO-756")
Transform818 = x3d.Transform()
Transform818.setTranslation([0.0066,1.5928,-0.0103])
Shape819 = x3d.Shape()
IndexedFaceSet820 = x3d.IndexedFaceSet()
IndexedFaceSet820.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet820.setCreaseAngle(0.5)
Coordinate821 = x3d.Coordinate()
Coordinate821.setUSE("points")

IndexedFaceSet820.setCoord(Coordinate821)

Shape819.setGeometry(IndexedFaceSet820)
Appearance822 = x3d.Appearance()
Material823 = x3d.Material()
Material823.setUSE("REC_SPINAL_COLOR")

Appearance822.setMaterial(Material823)

Shape819.setAppearance(Appearance822)

Transform818.addChildren(Shape819)

HAnimSegment817.addChildren(Transform818)

HAnimJoint816.addChildren(HAnimSegment817)
HAnimJoint824 = x3d.HAnimJoint()
HAnimJoint824.setName("vc1")
HAnimJoint824.setDEF("hanim_vc1")
HAnimJoint824.setCenter([0.0066,1.6144,-0.0034])
HAnimSegment825 = x3d.HAnimSegment()
HAnimSegment825.setName("segmentNameNeededTODO-762")
HAnimSegment825.setDEF("hanim_segmentNameNeededTODO-762")
Transform826 = x3d.Transform()
Transform826.setTranslation([0.0066,1.6144,-0.0034])
Shape827 = x3d.Shape()
IndexedFaceSet828 = x3d.IndexedFaceSet()
IndexedFaceSet828.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet828.setCreaseAngle(0.5)
Coordinate829 = x3d.Coordinate()
Coordinate829.setUSE("points")

IndexedFaceSet828.setCoord(Coordinate829)

Shape827.setGeometry(IndexedFaceSet828)
Appearance830 = x3d.Appearance()
Material831 = x3d.Material()
Material831.setUSE("SPINAL_COLOR")

Appearance830.setMaterial(Material831)

Shape827.setAppearance(Appearance830)

Transform826.addChildren(Shape827)

HAnimSegment825.addChildren(Transform826)

HAnimJoint824.addChildren(HAnimSegment825)
HAnimJoint832 = x3d.HAnimJoint()
HAnimJoint832.setName("skullbase")
HAnimJoint832.setDEF("hanim_skullbase")
HAnimJoint832.setCenter([0.0044,1.6209,0.0236])
HAnimSegment833 = x3d.HAnimSegment()
HAnimSegment833.setName("skull")
HAnimSegment833.setDEF("hanim_skull")
Transform834 = x3d.Transform()
Transform834.setTranslation([0.0044,1.6209,0.0236])
Shape835 = x3d.Shape()
IndexedFaceSet836 = x3d.IndexedFaceSet()
IndexedFaceSet836.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet836.setCreaseAngle(0.5)
Coordinate837 = x3d.Coordinate()
Coordinate837.setUSE("points")

IndexedFaceSet836.setCoord(Coordinate837)

Shape835.setGeometry(IndexedFaceSet836)
Appearance838 = x3d.Appearance()
Material839 = x3d.Material()
Material839.setUSE("MIN_COLOR")

Appearance838.setMaterial(Material839)

Shape835.setAppearance(Appearance838)

Transform834.addChildren(Shape835)

HAnimSegment833.addChildren(Transform834)
HAnimSite840 = x3d.HAnimSite()
HAnimSite840.setName("skull_tip")
HAnimSite840.setDEF("hanim_skull_tip")
HAnimSite840.setTranslation([0.005,1.7504,0.0055])
Shape841 = x3d.Shape()
IndexedFaceSet842 = x3d.IndexedFaceSet()
IndexedFaceSet842.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet842.setCreaseAngle(0.5)
Coordinate843 = x3d.Coordinate()
Coordinate843.setUSE("points")

IndexedFaceSet842.setCoord(Coordinate843)

Shape841.setGeometry(IndexedFaceSet842)
Appearance844 = x3d.Appearance()
Material845 = x3d.Material()
Material845.setUSE("SITE_COLOR")

Appearance844.setMaterial(Material845)

Shape841.setAppearance(Appearance844)

HAnimSite840.addChildren(Shape841)

HAnimSegment833.addChildren(HAnimSite840)
HAnimSite846 = x3d.HAnimSite()
HAnimSite846.setName("sellion_pt")
HAnimSite846.setDEF("hanim_sellion_pt")
HAnimSite846.setTranslation([0.0058,1.6316,0.0852])
Shape847 = x3d.Shape()
IndexedFaceSet848 = x3d.IndexedFaceSet()
IndexedFaceSet848.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet848.setCreaseAngle(0.5)
Coordinate849 = x3d.Coordinate()
Coordinate849.setUSE("points")

IndexedFaceSet848.setCoord(Coordinate849)

Shape847.setGeometry(IndexedFaceSet848)
Appearance850 = x3d.Appearance()
Material851 = x3d.Material()
Material851.setUSE("SITE_COLOR")

Appearance850.setMaterial(Material851)

Shape847.setAppearance(Appearance850)

HAnimSite846.addChildren(Shape847)

HAnimSegment833.addChildren(HAnimSite846)
HAnimSite852 = x3d.HAnimSite()
HAnimSite852.setName("r_infraorbitale_pt")
HAnimSite852.setDEF("hanim_r_infraorbitale_pt")
HAnimSite852.setTranslation([-0.0237,1.6171,0.0752])
Shape853 = x3d.Shape()
IndexedFaceSet854 = x3d.IndexedFaceSet()
IndexedFaceSet854.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet854.setCreaseAngle(0.5)
Coordinate855 = x3d.Coordinate()
Coordinate855.setUSE("points")

IndexedFaceSet854.setCoord(Coordinate855)

Shape853.setGeometry(IndexedFaceSet854)
Appearance856 = x3d.Appearance()
Material857 = x3d.Material()
Material857.setUSE("SITE_COLOR")

Appearance856.setMaterial(Material857)

Shape853.setAppearance(Appearance856)

HAnimSite852.addChildren(Shape853)

HAnimSegment833.addChildren(HAnimSite852)
HAnimSite858 = x3d.HAnimSite()
HAnimSite858.setName("l_infraorbitale_pt")
HAnimSite858.setDEF("hanim_l_infraorbitale_pt")
HAnimSite858.setTranslation([0.0341,1.6171,0.0752])
Shape859 = x3d.Shape()
IndexedFaceSet860 = x3d.IndexedFaceSet()
IndexedFaceSet860.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet860.setCreaseAngle(0.5)
Coordinate861 = x3d.Coordinate()
Coordinate861.setUSE("points")

IndexedFaceSet860.setCoord(Coordinate861)

Shape859.setGeometry(IndexedFaceSet860)
Appearance862 = x3d.Appearance()
Material863 = x3d.Material()
Material863.setUSE("SITE_COLOR")

Appearance862.setMaterial(Material863)

Shape859.setAppearance(Appearance862)

HAnimSite858.addChildren(Shape859)

HAnimSegment833.addChildren(HAnimSite858)
HAnimSite864 = x3d.HAnimSite()
HAnimSite864.setName("supramenton_pt")
HAnimSite864.setDEF("hanim_supramenton_pt")
HAnimSite864.setTranslation([0.0061,1.541,0.0805])
Shape865 = x3d.Shape()
IndexedFaceSet866 = x3d.IndexedFaceSet()
IndexedFaceSet866.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet866.setCreaseAngle(0.5)
Coordinate867 = x3d.Coordinate()
Coordinate867.setUSE("points")

IndexedFaceSet866.setCoord(Coordinate867)

Shape865.setGeometry(IndexedFaceSet866)
Appearance868 = x3d.Appearance()
Material869 = x3d.Material()
Material869.setUSE("SITE_COLOR")

Appearance868.setMaterial(Material869)

Shape865.setAppearance(Appearance868)

HAnimSite864.addChildren(Shape865)

HAnimSegment833.addChildren(HAnimSite864)
HAnimSite870 = x3d.HAnimSite()
HAnimSite870.setName("r_tragion_pt")
HAnimSite870.setDEF("hanim_r_tragion_pt")
HAnimSite870.setTranslation([-0.0646,1.6347,0.0302])
Shape871 = x3d.Shape()
IndexedFaceSet872 = x3d.IndexedFaceSet()
IndexedFaceSet872.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet872.setCreaseAngle(0.5)
Coordinate873 = x3d.Coordinate()
Coordinate873.setUSE("points")

IndexedFaceSet872.setCoord(Coordinate873)

Shape871.setGeometry(IndexedFaceSet872)
Appearance874 = x3d.Appearance()
Material875 = x3d.Material()
Material875.setUSE("SITE_COLOR")

Appearance874.setMaterial(Material875)

Shape871.setAppearance(Appearance874)

HAnimSite870.addChildren(Shape871)

HAnimSegment833.addChildren(HAnimSite870)
HAnimSite876 = x3d.HAnimSite()
HAnimSite876.setName("r_gonion_pt")
HAnimSite876.setDEF("hanim_r_gonion_pt")
HAnimSite876.setTranslation([-0.052,1.5529,0.0347])
Shape877 = x3d.Shape()
IndexedFaceSet878 = x3d.IndexedFaceSet()
IndexedFaceSet878.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet878.setCreaseAngle(0.5)
Coordinate879 = x3d.Coordinate()
Coordinate879.setUSE("points")

IndexedFaceSet878.setCoord(Coordinate879)

Shape877.setGeometry(IndexedFaceSet878)
Appearance880 = x3d.Appearance()
Material881 = x3d.Material()
Material881.setUSE("SITE_COLOR")

Appearance880.setMaterial(Material881)

Shape877.setAppearance(Appearance880)

HAnimSite876.addChildren(Shape877)

HAnimSegment833.addChildren(HAnimSite876)
HAnimSite882 = x3d.HAnimSite()
HAnimSite882.setName("l_tragion_pt")
HAnimSite882.setDEF("hanim_l_tragion_pt")
HAnimSite882.setTranslation([0.0739,1.6348,0.0282])
Shape883 = x3d.Shape()
IndexedFaceSet884 = x3d.IndexedFaceSet()
IndexedFaceSet884.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet884.setCreaseAngle(0.5)
Coordinate885 = x3d.Coordinate()
Coordinate885.setUSE("points")

IndexedFaceSet884.setCoord(Coordinate885)

Shape883.setGeometry(IndexedFaceSet884)
Appearance886 = x3d.Appearance()
Material887 = x3d.Material()
Material887.setUSE("SITE_COLOR")

Appearance886.setMaterial(Material887)

Shape883.setAppearance(Appearance886)

HAnimSite882.addChildren(Shape883)

HAnimSegment833.addChildren(HAnimSite882)
HAnimSite888 = x3d.HAnimSite()
HAnimSite888.setName("l_gonion_pt")
HAnimSite888.setDEF("hanim_l_gonion_pt")
HAnimSite888.setTranslation([0.0631,1.553,0.033])
Shape889 = x3d.Shape()
IndexedFaceSet890 = x3d.IndexedFaceSet()
IndexedFaceSet890.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet890.setCreaseAngle(0.5)
Coordinate891 = x3d.Coordinate()
Coordinate891.setUSE("points")

IndexedFaceSet890.setCoord(Coordinate891)

Shape889.setGeometry(IndexedFaceSet890)
Appearance892 = x3d.Appearance()
Material893 = x3d.Material()
Material893.setUSE("SITE_COLOR")

Appearance892.setMaterial(Material893)

Shape889.setAppearance(Appearance892)

HAnimSite888.addChildren(Shape889)

HAnimSegment833.addChildren(HAnimSite888)
HAnimSite894 = x3d.HAnimSite()
HAnimSite894.setName("nuchale_pt")
HAnimSite894.setDEF("hanim_nuchale_pt")
HAnimSite894.setTranslation([0.0039,1.5972,-0.0796])
Shape895 = x3d.Shape()
IndexedFaceSet896 = x3d.IndexedFaceSet()
IndexedFaceSet896.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet896.setCreaseAngle(0.5)
Coordinate897 = x3d.Coordinate()
Coordinate897.setUSE("points")

IndexedFaceSet896.setCoord(Coordinate897)

Shape895.setGeometry(IndexedFaceSet896)
Appearance898 = x3d.Appearance()
Material899 = x3d.Material()
Material899.setUSE("SITE_COLOR")

Appearance898.setMaterial(Material899)

Shape895.setAppearance(Appearance898)

HAnimSite894.addChildren(Shape895)

HAnimSegment833.addChildren(HAnimSite894)

HAnimJoint832.addChildren(HAnimSegment833)

HAnimJoint824.addChildren(HAnimJoint832)

HAnimJoint816.addChildren(HAnimJoint824)

HAnimJoint808.addChildren(HAnimJoint816)

HAnimJoint800.addChildren(HAnimJoint808)

HAnimJoint792.addChildren(HAnimJoint800)

HAnimJoint784.addChildren(HAnimJoint792)

HAnimJoint776.addChildren(HAnimJoint784)

HAnimJoint526.addChildren(HAnimJoint776)

HAnimJoint518.addChildren(HAnimJoint526)

HAnimJoint510.addChildren(HAnimJoint518)

HAnimJoint502.addChildren(HAnimJoint510)

HAnimJoint494.addChildren(HAnimJoint502)

HAnimJoint486.addChildren(HAnimJoint494)

HAnimJoint478.addChildren(HAnimJoint486)

HAnimJoint470.addChildren(HAnimJoint478)

HAnimJoint462.addChildren(HAnimJoint470)

HAnimJoint454.addChildren(HAnimJoint462)

HAnimJoint446.addChildren(HAnimJoint454)

HAnimJoint438.addChildren(HAnimJoint446)

HAnimJoint430.addChildren(HAnimJoint438)

HAnimJoint422.addChildren(HAnimJoint430)

HAnimJoint414.addChildren(HAnimJoint422)

HAnimJoint406.addChildren(HAnimJoint414)

HAnimJoint398.addChildren(HAnimJoint406)

HAnimJoint103.addChildren(HAnimJoint398)

HAnimHumanoid95.setSkeleton(HAnimJoint103)
HAnimSite900 = x3d.HAnimSite()
HAnimSite900.setName("DiamondManLOA2_view")
HAnimSite900.setDEF("hanim_DiamondManLOA2_view")
Viewpoint901 = x3d.Viewpoint()
Viewpoint901.setDEF("FrontView")
Viewpoint901.setDescription("Front View")
Viewpoint901.setPosition([0.35,0.854,2.57665])

HAnimSite900.addChildren(Viewpoint901)
Viewpoint902 = x3d.Viewpoint()
Viewpoint902.setDEF("SideView")
Viewpoint902.setDescription("Side View")
Viewpoint902.setOrientation([0,1,0,1.57079])
Viewpoint902.setPosition([2,0.854,0])

HAnimSite900.addChildren(Viewpoint902)
Viewpoint903 = x3d.Viewpoint()
Viewpoint903.setDEF("TopView")
Viewpoint903.setDescription("Top View")
Viewpoint903.setOrientation([1,0,0,-1.57079])
Viewpoint903.setPosition([0,3.4495,0])

HAnimSite900.addChildren(Viewpoint903)
Viewpoint904 = x3d.Viewpoint()
Viewpoint904.setDEF("RootView")
Viewpoint904.setDescription("Humanoid Root View")
Viewpoint904.setPosition([0,0.824,0.277])

HAnimSite900.addChildren(Viewpoint904)
Viewpoint905 = x3d.Viewpoint()
Viewpoint905.setDEF("InclinedView")
Viewpoint905.setDescription("Inclined View")
Viewpoint905.setOrientation([-0.113,0.993,0.0347,0.671])
Viewpoint905.setPosition([1.62,1.05,2.06])

HAnimSite900.addChildren(Viewpoint905)

HAnimHumanoid95.addViewpoints(HAnimSite900)
HAnimJoint906 = x3d.HAnimJoint()
HAnimJoint906.setUSE("hanim_humanoid_root")

HAnimHumanoid95.addJoints(HAnimJoint906)
HAnimJoint907 = x3d.HAnimJoint()
HAnimJoint907.setUSE("hanim_sacroiliac")

HAnimHumanoid95.addJoints(HAnimJoint907)
HAnimJoint908 = x3d.HAnimJoint()
HAnimJoint908.setUSE("hanim_vl1")

HAnimHumanoid95.addJoints(HAnimJoint908)
HAnimJoint909 = x3d.HAnimJoint()
HAnimJoint909.setUSE("hanim_vc4")

HAnimHumanoid95.addJoints(HAnimJoint909)
HAnimJoint910 = x3d.HAnimJoint()
HAnimJoint910.setUSE("hanim_skullbase")

HAnimHumanoid95.addJoints(HAnimJoint910)
HAnimJoint911 = x3d.HAnimJoint()
HAnimJoint911.setUSE("hanim_vl5")

HAnimHumanoid95.addJoints(HAnimJoint911)
HAnimJoint912 = x3d.HAnimJoint()
HAnimJoint912.setUSE("hanim_vl4")

HAnimHumanoid95.addJoints(HAnimJoint912)
HAnimJoint913 = x3d.HAnimJoint()
HAnimJoint913.setUSE("hanim_vl3")

HAnimHumanoid95.addJoints(HAnimJoint913)
HAnimJoint914 = x3d.HAnimJoint()
HAnimJoint914.setUSE("hanim_vl2")

HAnimHumanoid95.addJoints(HAnimJoint914)
HAnimJoint915 = x3d.HAnimJoint()
HAnimJoint915.setUSE("hanim_vt12")

HAnimHumanoid95.addJoints(HAnimJoint915)
HAnimJoint916 = x3d.HAnimJoint()
HAnimJoint916.setUSE("hanim_vt11")

HAnimHumanoid95.addJoints(HAnimJoint916)
HAnimJoint917 = x3d.HAnimJoint()
HAnimJoint917.setUSE("hanim_vt10")

HAnimHumanoid95.addJoints(HAnimJoint917)
HAnimJoint918 = x3d.HAnimJoint()
HAnimJoint918.setUSE("hanim_vt9")

HAnimHumanoid95.addJoints(HAnimJoint918)
HAnimJoint919 = x3d.HAnimJoint()
HAnimJoint919.setUSE("hanim_vt8")

HAnimHumanoid95.addJoints(HAnimJoint919)
HAnimJoint920 = x3d.HAnimJoint()
HAnimJoint920.setUSE("hanim_vt7")

HAnimHumanoid95.addJoints(HAnimJoint920)
HAnimJoint921 = x3d.HAnimJoint()
HAnimJoint921.setUSE("hanim_vt6")

HAnimHumanoid95.addJoints(HAnimJoint921)
HAnimJoint922 = x3d.HAnimJoint()
HAnimJoint922.setUSE("hanim_vt5")

HAnimHumanoid95.addJoints(HAnimJoint922)
HAnimJoint923 = x3d.HAnimJoint()
HAnimJoint923.setUSE("hanim_vt4")

HAnimHumanoid95.addJoints(HAnimJoint923)
HAnimJoint924 = x3d.HAnimJoint()
HAnimJoint924.setUSE("hanim_vt3")

HAnimHumanoid95.addJoints(HAnimJoint924)
HAnimJoint925 = x3d.HAnimJoint()
HAnimJoint925.setUSE("hanim_vt2")

HAnimHumanoid95.addJoints(HAnimJoint925)
HAnimJoint926 = x3d.HAnimJoint()
HAnimJoint926.setUSE("hanim_vt1")

HAnimHumanoid95.addJoints(HAnimJoint926)
HAnimJoint927 = x3d.HAnimJoint()
HAnimJoint927.setUSE("hanim_vc7")

HAnimHumanoid95.addJoints(HAnimJoint927)
HAnimJoint928 = x3d.HAnimJoint()
HAnimJoint928.setUSE("hanim_vc6")

HAnimHumanoid95.addJoints(HAnimJoint928)
HAnimJoint929 = x3d.HAnimJoint()
HAnimJoint929.setUSE("hanim_vc5")

HAnimHumanoid95.addJoints(HAnimJoint929)
HAnimJoint930 = x3d.HAnimJoint()
HAnimJoint930.setUSE("hanim_vc3")

HAnimHumanoid95.addJoints(HAnimJoint930)
HAnimJoint931 = x3d.HAnimJoint()
HAnimJoint931.setUSE("hanim_vc2")

HAnimHumanoid95.addJoints(HAnimJoint931)
HAnimJoint932 = x3d.HAnimJoint()
HAnimJoint932.setUSE("hanim_vc1")

HAnimHumanoid95.addJoints(HAnimJoint932)
HAnimJoint933 = x3d.HAnimJoint()
HAnimJoint933.setUSE("hanim_l_elbow")

HAnimHumanoid95.addJoints(HAnimJoint933)
HAnimJoint934 = x3d.HAnimJoint()
HAnimJoint934.setUSE("hanim_r_elbow")

HAnimHumanoid95.addJoints(HAnimJoint934)
HAnimJoint935 = x3d.HAnimJoint()
HAnimJoint935.setUSE("hanim_l_hip")

HAnimHumanoid95.addJoints(HAnimJoint935)
HAnimJoint936 = x3d.HAnimJoint()
HAnimJoint936.setUSE("hanim_r_hip")

HAnimHumanoid95.addJoints(HAnimJoint936)
HAnimJoint937 = x3d.HAnimJoint()
HAnimJoint937.setUSE("hanim_l_index0")

HAnimHumanoid95.addJoints(HAnimJoint937)
HAnimJoint938 = x3d.HAnimJoint()
HAnimJoint938.setUSE("hanim_l_index1")

HAnimHumanoid95.addJoints(HAnimJoint938)
HAnimJoint939 = x3d.HAnimJoint()
HAnimJoint939.setUSE("hanim_l_index2")

HAnimHumanoid95.addJoints(HAnimJoint939)
HAnimJoint940 = x3d.HAnimJoint()
HAnimJoint940.setUSE("hanim_l_index3")

HAnimHumanoid95.addJoints(HAnimJoint940)
HAnimJoint941 = x3d.HAnimJoint()
HAnimJoint941.setUSE("hanim_l_knee")

HAnimHumanoid95.addJoints(HAnimJoint941)
HAnimJoint942 = x3d.HAnimJoint()
HAnimJoint942.setUSE("hanim_r_knee")

HAnimHumanoid95.addJoints(HAnimJoint942)
HAnimJoint943 = x3d.HAnimJoint()
HAnimJoint943.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid95.addJoints(HAnimJoint943)
HAnimJoint944 = x3d.HAnimJoint()
HAnimJoint944.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid95.addJoints(HAnimJoint944)
HAnimJoint945 = x3d.HAnimJoint()
HAnimJoint945.setUSE("hanim_l_radiocarpal")

HAnimHumanoid95.addJoints(HAnimJoint945)
HAnimJoint946 = x3d.HAnimJoint()
HAnimJoint946.setUSE("hanim_r_radiocarpal")

HAnimHumanoid95.addJoints(HAnimJoint946)
HAnimJoint947 = x3d.HAnimJoint()
HAnimJoint947.setUSE("hanim_l_shoulder")

HAnimHumanoid95.addJoints(HAnimJoint947)
HAnimJoint948 = x3d.HAnimJoint()
HAnimJoint948.setUSE("hanim_r_shoulder")

HAnimHumanoid95.addJoints(HAnimJoint948)
HAnimJoint949 = x3d.HAnimJoint()
HAnimJoint949.setUSE("hanim_l_talocrural")

HAnimHumanoid95.addJoints(HAnimJoint949)
HAnimJoint950 = x3d.HAnimJoint()
HAnimJoint950.setUSE("hanim_r_talocrural")

HAnimHumanoid95.addJoints(HAnimJoint950)
HAnimJoint951 = x3d.HAnimJoint()
HAnimJoint951.setUSE("hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid95.addJoints(HAnimJoint951)
HAnimJoint952 = x3d.HAnimJoint()
HAnimJoint952.setUSE("hanim_l_tarsometatarsal_2")

HAnimHumanoid95.addJoints(HAnimJoint952)
HAnimJoint953 = x3d.HAnimJoint()
HAnimJoint953.setUSE("hanim_l_thumb1")

HAnimHumanoid95.addJoints(HAnimJoint953)
HAnimJoint954 = x3d.HAnimJoint()
HAnimJoint954.setUSE("hanim_l_thumb2")

HAnimHumanoid95.addJoints(HAnimJoint954)
HAnimJoint955 = x3d.HAnimJoint()
HAnimJoint955.setUSE("hanim_l_thumb3")

HAnimHumanoid95.addJoints(HAnimJoint955)
HAnimSegment956 = x3d.HAnimSegment()
HAnimSegment956.setUSE("hanim_pelvis")

HAnimHumanoid95.addSegments(HAnimSegment956)
HAnimSegment957 = x3d.HAnimSegment()
HAnimSegment957.setUSE("hanim_c7")

HAnimHumanoid95.addSegments(HAnimSegment957)
HAnimSegment958 = x3d.HAnimSegment()
HAnimSegment958.setUSE("hanim_c4")

HAnimHumanoid95.addSegments(HAnimSegment958)
HAnimSegment959 = x3d.HAnimSegment()
HAnimSegment959.setUSE("hanim_skull")

HAnimHumanoid95.addSegments(HAnimSegment959)
HAnimSegment960 = x3d.HAnimSegment()
HAnimSegment960.setUSE("hanim_segmentNameNeededTODO-93")

HAnimHumanoid95.addSegments(HAnimSegment960)
HAnimSegment961 = x3d.HAnimSegment()
HAnimSegment961.setUSE("hanim_segmentNameNeededTODO-230")

HAnimHumanoid95.addSegments(HAnimSegment961)
HAnimSegment962 = x3d.HAnimSegment()
HAnimSegment962.setUSE("hanim_segmentNameNeededTODO-385")

HAnimHumanoid95.addSegments(HAnimSegment962)
HAnimSegment963 = x3d.HAnimSegment()
HAnimSegment963.setUSE("hanim_segmentNameNeededTODO-391")

HAnimHumanoid95.addSegments(HAnimSegment963)
HAnimSegment964 = x3d.HAnimSegment()
HAnimSegment964.setUSE("hanim_segmentNameNeededTODO-397")

HAnimHumanoid95.addSegments(HAnimSegment964)
HAnimSegment965 = x3d.HAnimSegment()
HAnimSegment965.setUSE("hanim_segmentNameNeededTODO-403")

HAnimHumanoid95.addSegments(HAnimSegment965)
HAnimSegment966 = x3d.HAnimSegment()
HAnimSegment966.setUSE("hanim_segmentNameNeededTODO-409")

HAnimHumanoid95.addSegments(HAnimSegment966)
HAnimSegment967 = x3d.HAnimSegment()
HAnimSegment967.setUSE("hanim_segmentNameNeededTODO-415")

HAnimHumanoid95.addSegments(HAnimSegment967)
HAnimSegment968 = x3d.HAnimSegment()
HAnimSegment968.setUSE("hanim_segmentNameNeededTODO-421")

HAnimHumanoid95.addSegments(HAnimSegment968)
HAnimSegment969 = x3d.HAnimSegment()
HAnimSegment969.setUSE("hanim_segmentNameNeededTODO-427")

HAnimHumanoid95.addSegments(HAnimSegment969)
HAnimSegment970 = x3d.HAnimSegment()
HAnimSegment970.setUSE("hanim_segmentNameNeededTODO-433")

HAnimHumanoid95.addSegments(HAnimSegment970)
HAnimSegment971 = x3d.HAnimSegment()
HAnimSegment971.setUSE("hanim_segmentNameNeededTODO-439")

HAnimHumanoid95.addSegments(HAnimSegment971)
HAnimSegment972 = x3d.HAnimSegment()
HAnimSegment972.setUSE("hanim_segmentNameNeededTODO-445")

HAnimHumanoid95.addSegments(HAnimSegment972)
HAnimSegment973 = x3d.HAnimSegment()
HAnimSegment973.setUSE("hanim_segmentNameNeededTODO-451")

HAnimHumanoid95.addSegments(HAnimSegment973)
HAnimSegment974 = x3d.HAnimSegment()
HAnimSegment974.setUSE("hanim_segmentNameNeededTODO-457")

HAnimHumanoid95.addSegments(HAnimSegment974)
HAnimSegment975 = x3d.HAnimSegment()
HAnimSegment975.setUSE("hanim_segmentNameNeededTODO-463")

HAnimHumanoid95.addSegments(HAnimSegment975)
HAnimSegment976 = x3d.HAnimSegment()
HAnimSegment976.setUSE("hanim_segmentNameNeededTODO-469")

HAnimHumanoid95.addSegments(HAnimSegment976)
HAnimSegment977 = x3d.HAnimSegment()
HAnimSegment977.setUSE("hanim_segmentNameNeededTODO-475")

HAnimHumanoid95.addSegments(HAnimSegment977)
HAnimSegment978 = x3d.HAnimSegment()
HAnimSegment978.setUSE("hanim_segmentNameNeededTODO-481")

HAnimHumanoid95.addSegments(HAnimSegment978)
HAnimSegment979 = x3d.HAnimSegment()
HAnimSegment979.setUSE("hanim_segmentNameNeededTODO-539")

HAnimHumanoid95.addSegments(HAnimSegment979)
HAnimSegment980 = x3d.HAnimSegment()
HAnimSegment980.setUSE("hanim_segmentNameNeededTODO-545")

HAnimHumanoid95.addSegments(HAnimSegment980)
HAnimSegment981 = x3d.HAnimSegment()
HAnimSegment981.setUSE("hanim_segmentNameNeededTODO-567")

HAnimHumanoid95.addSegments(HAnimSegment981)
HAnimSegment982 = x3d.HAnimSegment()
HAnimSegment982.setUSE("hanim_segmentNameNeededTODO-573")

HAnimHumanoid95.addSegments(HAnimSegment982)
HAnimSegment983 = x3d.HAnimSegment()
HAnimSegment983.setUSE("hanim_segmentNameNeededTODO-579")

HAnimHumanoid95.addSegments(HAnimSegment983)
HAnimSegment984 = x3d.HAnimSegment()
HAnimSegment984.setUSE("hanim_segmentNameNeededTODO-731")

HAnimHumanoid95.addSegments(HAnimSegment984)
HAnimSegment985 = x3d.HAnimSegment()
HAnimSegment985.setUSE("hanim_segmentNameNeededTODO-737")

HAnimHumanoid95.addSegments(HAnimSegment985)
HAnimSegment986 = x3d.HAnimSegment()
HAnimSegment986.setUSE("hanim_segmentNameNeededTODO-750")

HAnimHumanoid95.addSegments(HAnimSegment986)
HAnimSegment987 = x3d.HAnimSegment()
HAnimSegment987.setUSE("hanim_segmentNameNeededTODO-756")

HAnimHumanoid95.addSegments(HAnimSegment987)
HAnimSegment988 = x3d.HAnimSegment()
HAnimSegment988.setUSE("hanim_segmentNameNeededTODO-762")

HAnimHumanoid95.addSegments(HAnimSegment988)
HAnimSegment989 = x3d.HAnimSegment()
HAnimSegment989.setUSE("hanim_l_calf")

HAnimHumanoid95.addSegments(HAnimSegment989)
HAnimSegment990 = x3d.HAnimSegment()
HAnimSegment990.setUSE("hanim_r_calf")

HAnimHumanoid95.addSegments(HAnimSegment990)
HAnimSegment991 = x3d.HAnimSegment()
HAnimSegment991.setUSE("hanim_l_carpal")

HAnimHumanoid95.addSegments(HAnimSegment991)
HAnimSegment992 = x3d.HAnimSegment()
HAnimSegment992.setUSE("hanim_r_carpal")

HAnimHumanoid95.addSegments(HAnimSegment992)
HAnimSegment993 = x3d.HAnimSegment()
HAnimSegment993.setUSE("hanim_l_carpal_distal_phalanx_1")

HAnimHumanoid95.addSegments(HAnimSegment993)
HAnimSegment994 = x3d.HAnimSegment()
HAnimSegment994.setUSE("hanim_l_carpal_distal_phalanx_2")

HAnimHumanoid95.addSegments(HAnimSegment994)
HAnimSegment995 = x3d.HAnimSegment()
HAnimSegment995.setUSE("hanim_l_forearm")

HAnimHumanoid95.addSegments(HAnimSegment995)
HAnimSegment996 = x3d.HAnimSegment()
HAnimSegment996.setUSE("hanim_r_forearm")

HAnimHumanoid95.addSegments(HAnimSegment996)
HAnimSegment997 = x3d.HAnimSegment()
HAnimSegment997.setUSE("hanim_l_talus")

HAnimHumanoid95.addSegments(HAnimSegment997)
HAnimSegment998 = x3d.HAnimSegment()
HAnimSegment998.setUSE("hanim_r_talus")

HAnimHumanoid95.addSegments(HAnimSegment998)
HAnimSegment999 = x3d.HAnimSegment()
HAnimSegment999.setUSE("hanim_l_tarsal_distal_phalanx_2")

HAnimHumanoid95.addSegments(HAnimSegment999)
HAnimSegment1000 = x3d.HAnimSegment()
HAnimSegment1000.setUSE("hanim_l_tarsal_proximal_phalanx_2")

HAnimHumanoid95.addSegments(HAnimSegment1000)
HAnimSegment1001 = x3d.HAnimSegment()
HAnimSegment1001.setUSE("hanim_r_tarsal_proximal_phalanx_2")

HAnimHumanoid95.addSegments(HAnimSegment1001)
HAnimSegment1002 = x3d.HAnimSegment()
HAnimSegment1002.setUSE("hanim_l_thigh")

HAnimHumanoid95.addSegments(HAnimSegment1002)
HAnimSegment1003 = x3d.HAnimSegment()
HAnimSegment1003.setUSE("hanim_r_thigh")

HAnimHumanoid95.addSegments(HAnimSegment1003)
HAnimSegment1004 = x3d.HAnimSegment()
HAnimSegment1004.setUSE("hanim_l_upperarm")

HAnimHumanoid95.addSegments(HAnimSegment1004)
HAnimSegment1005 = x3d.HAnimSegment()
HAnimSegment1005.setUSE("hanim_r_upperarm")

HAnimHumanoid95.addSegments(HAnimSegment1005)
HAnimSite1006 = x3d.HAnimSite()
HAnimSite1006.setUSE("hanim_crotch_pt")

HAnimHumanoid95.addSites(HAnimSite1006)
HAnimSite1007 = x3d.HAnimSite()
HAnimSite1007.setUSE("hanim_skull_tip")

HAnimHumanoid95.addSites(HAnimSite1007)
HAnimSite1008 = x3d.HAnimSite()
HAnimSite1008.setUSE("hanim_sellion_pt")

HAnimHumanoid95.addSites(HAnimSite1008)
HAnimSite1009 = x3d.HAnimSite()
HAnimSite1009.setUSE("hanim_supramenton_pt")

HAnimHumanoid95.addSites(HAnimSite1009)
HAnimSite1010 = x3d.HAnimSite()
HAnimSite1010.setUSE("hanim_nuchale_pt")

HAnimHumanoid95.addSites(HAnimSite1010)
HAnimSite1011 = x3d.HAnimSite()
HAnimSite1011.setUSE("hanim_r_asis_pt")

HAnimHumanoid95.addSites(HAnimSite1011)
HAnimSite1012 = x3d.HAnimSite()
HAnimSite1012.setUSE("hanim_l_asis_pt")

HAnimHumanoid95.addSites(HAnimSite1012)
HAnimSite1013 = x3d.HAnimSite()
HAnimSite1013.setUSE("hanim_l_calcaneous_post_pt")

HAnimHumanoid95.addSites(HAnimSite1013)
HAnimSite1014 = x3d.HAnimSite()
HAnimSite1014.setUSE("hanim_r_calcaneous_post_pt")

HAnimHumanoid95.addSites(HAnimSite1014)
HAnimSite1015 = x3d.HAnimSite()
HAnimSite1015.setUSE("hanim_l_dactylion_pt")

HAnimHumanoid95.addSites(HAnimSite1015)
HAnimSite1016 = x3d.HAnimSite()
HAnimSite1016.setUSE("hanim_r_dactylion_pt")

HAnimHumanoid95.addSites(HAnimSite1016)
HAnimSite1017 = x3d.HAnimSite()
HAnimSite1017.setUSE("hanim_l_digit2_pt")

HAnimHumanoid95.addSites(HAnimSite1017)
HAnimSite1018 = x3d.HAnimSite()
HAnimSite1018.setUSE("hanim_r_digit2_pt")

HAnimHumanoid95.addSites(HAnimSite1018)
HAnimSite1019 = x3d.HAnimSite()
HAnimSite1019.setUSE("hanim_l_femoral_lateral_epicn_pt")

HAnimHumanoid95.addSites(HAnimSite1019)
HAnimSite1020 = x3d.HAnimSite()
HAnimSite1020.setUSE("hanim_r_femoral_lateral_epicn_pt")

HAnimHumanoid95.addSites(HAnimSite1020)
HAnimSite1021 = x3d.HAnimSite()
HAnimSite1021.setUSE("hanim_l_femoral_medial_epicn_pt")

HAnimHumanoid95.addSites(HAnimSite1021)
HAnimSite1022 = x3d.HAnimSite()
HAnimSite1022.setUSE("hanim_r_femoral_medial_epicn_pt")

HAnimHumanoid95.addSites(HAnimSite1022)
HAnimSite1023 = x3d.HAnimSite()
HAnimSite1023.setUSE("hanim_l_forefoot_tip")

HAnimHumanoid95.addSites(HAnimSite1023)
HAnimSite1024 = x3d.HAnimSite()
HAnimSite1024.setUSE("hanim_r_gonion_pt")

HAnimHumanoid95.addSites(HAnimSite1024)
HAnimSite1025 = x3d.HAnimSite()
HAnimSite1025.setUSE("hanim_l_gonion_pt")

HAnimHumanoid95.addSites(HAnimSite1025)
HAnimSite1026 = x3d.HAnimSite()
HAnimSite1026.setUSE("hanim_l_hand_tip")

HAnimHumanoid95.addSites(HAnimSite1026)
HAnimSite1027 = x3d.HAnimSite()
HAnimSite1027.setUSE("hanim_r_hand_tip")

HAnimHumanoid95.addSites(HAnimSite1027)
HAnimSite1028 = x3d.HAnimSite()
HAnimSite1028.setUSE("hanim_l_humeral_lateral_epicn_pt")

HAnimHumanoid95.addSites(HAnimSite1028)
HAnimSite1029 = x3d.HAnimSite()
HAnimSite1029.setUSE("hanim_r_humeral_lateral_epicn_pt")

HAnimHumanoid95.addSites(HAnimSite1029)
HAnimSite1030 = x3d.HAnimSite()
HAnimSite1030.setUSE("hanim_l_humeral_medial_epicn_pt")

HAnimHumanoid95.addSites(HAnimSite1030)
HAnimSite1031 = x3d.HAnimSite()
HAnimSite1031.setUSE("hanim_r_humeral_medial_epicn_pt")

HAnimHumanoid95.addSites(HAnimSite1031)
HAnimSite1032 = x3d.HAnimSite()
HAnimSite1032.setUSE("hanim_r_iliocristale_pt")

HAnimHumanoid95.addSites(HAnimSite1032)
HAnimSite1033 = x3d.HAnimSite()
HAnimSite1033.setUSE("hanim_l_iliocristale_pt")

HAnimHumanoid95.addSites(HAnimSite1033)
HAnimSite1034 = x3d.HAnimSite()
HAnimSite1034.setUSE("hanim_l_index_distal_tip")

HAnimHumanoid95.addSites(HAnimSite1034)
HAnimSite1035 = x3d.HAnimSite()
HAnimSite1035.setUSE("hanim_r_infraorbitale_pt")

HAnimHumanoid95.addSites(HAnimSite1035)
HAnimSite1036 = x3d.HAnimSite()
HAnimSite1036.setUSE("hanim_l_infraorbitale_pt")

HAnimHumanoid95.addSites(HAnimSite1036)
HAnimSite1037 = x3d.HAnimSite()
HAnimSite1037.setUSE("hanim_l_knee_crease_pt")

HAnimHumanoid95.addSites(HAnimSite1037)
HAnimSite1038 = x3d.HAnimSite()
HAnimSite1038.setUSE("hanim_r_knee_crease_pt")

HAnimHumanoid95.addSites(HAnimSite1038)
HAnimSite1039 = x3d.HAnimSite()
HAnimSite1039.setUSE("hanim_l_lateral_malleolus_pt")

HAnimHumanoid95.addSites(HAnimSite1039)
HAnimSite1040 = x3d.HAnimSite()
HAnimSite1040.setUSE("hanim_r_lateral_malleolus_pt")

HAnimHumanoid95.addSites(HAnimSite1040)
HAnimSite1041 = x3d.HAnimSite()
HAnimSite1041.setUSE("hanim_l_medial_malleolus_pt")

HAnimHumanoid95.addSites(HAnimSite1041)
HAnimSite1042 = x3d.HAnimSite()
HAnimSite1042.setUSE("hanim_r_medial_malleolus_pt")

HAnimHumanoid95.addSites(HAnimSite1042)
HAnimSite1043 = x3d.HAnimSite()
HAnimSite1043.setUSE("hanim_l_metacarpal_pha2_pt")

HAnimHumanoid95.addSites(HAnimSite1043)
HAnimSite1044 = x3d.HAnimSite()
HAnimSite1044.setUSE("hanim_r_metacarpal_pha2_pt")

HAnimHumanoid95.addSites(HAnimSite1044)
HAnimSite1045 = x3d.HAnimSite()
HAnimSite1045.setUSE("hanim_l_metacarpal_pha5_pt")

HAnimHumanoid95.addSites(HAnimSite1045)
HAnimSite1046 = x3d.HAnimSite()
HAnimSite1046.setUSE("hanim_r_metacarpal_pha5_pt")

HAnimHumanoid95.addSites(HAnimSite1046)
HAnimSite1047 = x3d.HAnimSite()
HAnimSite1047.setUSE("hanim_l_metatarsal_pha1_pt")

HAnimHumanoid95.addSites(HAnimSite1047)
HAnimSite1048 = x3d.HAnimSite()
HAnimSite1048.setUSE("hanim_r_metatarsal_pha1_pt")

HAnimHumanoid95.addSites(HAnimSite1048)
HAnimSite1049 = x3d.HAnimSite()
HAnimSite1049.setUSE("hanim_l_metatarsal_pha5_pt")

HAnimHumanoid95.addSites(HAnimSite1049)
HAnimSite1050 = x3d.HAnimSite()
HAnimSite1050.setUSE("hanim_r_metatarsal_pha5_pt")

HAnimHumanoid95.addSites(HAnimSite1050)
HAnimSite1051 = x3d.HAnimSite()
HAnimSite1051.setUSE("hanim_l_middistal_tip")

HAnimHumanoid95.addSites(HAnimSite1051)
HAnimSite1052 = x3d.HAnimSite()
HAnimSite1052.setUSE("hanim_r_middistal_tip")

HAnimHumanoid95.addSites(HAnimSite1052)
HAnimSite1053 = x3d.HAnimSite()
HAnimSite1053.setUSE("hanim_l_olecranon_pt")

HAnimHumanoid95.addSites(HAnimSite1053)
HAnimSite1054 = x3d.HAnimSite()
HAnimSite1054.setUSE("hanim_r_olecranon_pt")

HAnimHumanoid95.addSites(HAnimSite1054)
HAnimSite1055 = x3d.HAnimSite()
HAnimSite1055.setUSE("hanim_r_psis_pt")

HAnimHumanoid95.addSites(HAnimSite1055)
HAnimSite1056 = x3d.HAnimSite()
HAnimSite1056.setUSE("hanim_l_psis_pt")

HAnimHumanoid95.addSites(HAnimSite1056)
HAnimSite1057 = x3d.HAnimSite()
HAnimSite1057.setUSE("hanim_l_radial_styloid_pt")

HAnimHumanoid95.addSites(HAnimSite1057)
HAnimSite1058 = x3d.HAnimSite()
HAnimSite1058.setUSE("hanim_r_radial_styloid_pt")

HAnimHumanoid95.addSites(HAnimSite1058)
HAnimSite1059 = x3d.HAnimSite()
HAnimSite1059.setUSE("hanim_l_radiale_pt")

HAnimHumanoid95.addSites(HAnimSite1059)
HAnimSite1060 = x3d.HAnimSite()
HAnimSite1060.setUSE("hanim_r_radiale_pt")

HAnimHumanoid95.addSites(HAnimSite1060)
HAnimSite1061 = x3d.HAnimSite()
HAnimSite1061.setUSE("hanim_l_sphyrion_pt")

HAnimHumanoid95.addSites(HAnimSite1061)
HAnimSite1062 = x3d.HAnimSite()
HAnimSite1062.setUSE("hanim_r_sphyrion_pt")

HAnimHumanoid95.addSites(HAnimSite1062)
HAnimSite1063 = x3d.HAnimSite()
HAnimSite1063.setUSE("hanim_l_thumb_distal_tip")

HAnimHumanoid95.addSites(HAnimSite1063)
HAnimSite1064 = x3d.HAnimSite()
HAnimSite1064.setUSE("hanim_r_tragion_pt")

HAnimHumanoid95.addSites(HAnimSite1064)
HAnimSite1065 = x3d.HAnimSite()
HAnimSite1065.setUSE("hanim_l_tragion_pt")

HAnimHumanoid95.addSites(HAnimSite1065)
HAnimSite1066 = x3d.HAnimSite()
HAnimSite1066.setUSE("hanim_r_trochanterion_pt")

HAnimHumanoid95.addSites(HAnimSite1066)
HAnimSite1067 = x3d.HAnimSite()
HAnimSite1067.setUSE("hanim_l_trochanterion_pt")

HAnimHumanoid95.addSites(HAnimSite1067)
HAnimSite1068 = x3d.HAnimSite()
HAnimSite1068.setUSE("hanim_l_ulnar_styloid_pt")

HAnimHumanoid95.addSites(HAnimSite1068)
HAnimSite1069 = x3d.HAnimSite()
HAnimSite1069.setUSE("hanim_r_ulnar_styloid_pt")

HAnimHumanoid95.addSites(HAnimSite1069)

Scene18.addChildren(HAnimHumanoid95)

X3D0.setScene(Scene18)
X3D0.toFileX3D("../data/DiamondManLOA2_RoundTrip.x3d")
