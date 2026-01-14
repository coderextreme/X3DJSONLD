import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
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
meta3.setContent("DiamondManLOA_2.x3d")

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
meta7.setName("translator")
meta7.setContent("Don Brutzman")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("created")
meta8.setContent("12 November 2001")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("modified")
meta9.setContent("Tue, 09 Sep 2025 19:37:54 GMT")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("../Templates/DiamondManLOA_2.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("error")
meta12.setContent("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("Image")
meta13.setContent("DiamondManLOA_2.png")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("Image")
meta14.setContent("images/BonesAllSkeletonFrontViewLOA2.png")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("motto")
meta15.setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("subject")
meta16.setContent("human animation, x3d, vrml, animation")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("identifier")
meta17.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_2.x3d")

head1.addMeta(meta17)

X3D0.setHead(head1)
Scene18 = x3d.Scene()
WorldInfo19 = x3d.WorldInfo()
WorldInfo19.setTitle("HANIM 1.1 Default Joint Centers, LOA1")
WorldInfo19.setInfo(["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 2 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"])

Scene18.addChild(WorldInfo19)
NavigationInfo20 = x3d.NavigationInfo()
NavigationInfo20.setSpeed(1.5)

Scene18.addChild(NavigationInfo20)
Viewpoint21 = x3d.Viewpoint()
Viewpoint21.setDescription("Diamond Man, LOA 2")
Viewpoint21.setPosition(x3d.doubleToFloat([0,1,3]))
Viewpoint21.setCenterOfRotation(x3d.doubleToFloat([0,1,0]))

Scene18.addChild(Viewpoint21)
Transform22 = x3d.Transform()
Transform22.setTranslation(x3d.doubleToFloat([1,1.5,0]))
Billboard23 = x3d.Billboard()
Shape24 = x3d.Shape()
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()
Material26.setDEF("TextMaterial")
Material26.setDiffuseColor(x3d.doubleToFloat([0.9,0.9,0.9]))

Appearance25.setMaterial(Material26)

Shape24.setAppearance(Appearance25)
Text27 = x3d.Text()
Text27.setString(["Diamond Man Key"])
FontStyle28 = x3d.FontStyle()
FontStyle28.setFamily(["SANS"])
FontStyle28.setSize(0.1)

Text27.setFontStyle(FontStyle28)

Shape24.setGeometry(Text27)

Billboard23.addChild(Shape24)
Transform29 = x3d.Transform()
Transform29.setTranslation(x3d.doubleToFloat([0,-0.3,0]))
Shape30 = x3d.Shape()
Appearance31 = x3d.Appearance()
Material32 = x3d.Material()
Material32.setDEF("MIN_COLOR")
Material32.setDiffuseColor(x3d.doubleToFloat([1,0,0]))

Appearance31.setMaterial(Material32)

Shape30.setAppearance(Appearance31)
Sphere33 = x3d.Sphere()
Sphere33.setRadius(0.08)

Shape30.setGeometry(Sphere33)

Transform29.addChild(Shape30)
Transform34 = x3d.Transform()
Transform34.setTranslation(x3d.doubleToFloat([0.2,0,0]))
Shape35 = x3d.Shape()
Appearance36 = x3d.Appearance()
Material37 = x3d.Material()
Material37.setUSE("TextMaterial")

Appearance36.setMaterial(Material37)

Shape35.setAppearance(Appearance36)
Text38 = x3d.Text()
Text38.setString(["Minimal Humanoid Joints"])
FontStyle39 = x3d.FontStyle()
FontStyle39.setFamily(["SANS"])
FontStyle39.setSize(0.1)

Text38.setFontStyle(FontStyle39)

Shape35.setGeometry(Text38)

Transform34.addChild(Shape35)

Transform29.addChild(Transform34)

Billboard23.addChild(Transform29)
Transform40 = x3d.Transform()
Transform40.setTranslation(x3d.doubleToFloat([0,-0.5,0]))
Shape41 = x3d.Shape()
Appearance42 = x3d.Appearance()
Material43 = x3d.Material()
Material43.setDEF("JOINT_COLOR")
Material43.setDiffuseColor(x3d.doubleToFloat([1,1,0]))

Appearance42.setMaterial(Material43)

Shape41.setAppearance(Appearance42)
Sphere44 = x3d.Sphere()
Sphere44.setRadius(0.08)

Shape41.setGeometry(Sphere44)

Transform40.addChild(Shape41)
Transform45 = x3d.Transform()
Transform45.setTranslation(x3d.doubleToFloat([0.2,0,0]))
Shape46 = x3d.Shape()
Appearance47 = x3d.Appearance()
Material48 = x3d.Material()
Material48.setUSE("TextMaterial")

Appearance47.setMaterial(Material48)

Shape46.setAppearance(Appearance47)
Text49 = x3d.Text()
Text49.setString(["Humanoid Joints"])
FontStyle50 = x3d.FontStyle()
FontStyle50.setFamily(["SANS"])
FontStyle50.setSize(0.1)

Text49.setFontStyle(FontStyle50)

Shape46.setGeometry(Text49)

Transform45.addChild(Shape46)

Transform40.addChild(Transform45)

Billboard23.addChild(Transform40)
Transform51 = x3d.Transform()
Transform51.setTranslation(x3d.doubleToFloat([0,-0.7,0]))
Shape52 = x3d.Shape()
Appearance53 = x3d.Appearance()
Material54 = x3d.Material()
Material54.setDEF("REC_SPINAL_COLOR")
Material54.setDiffuseColor(x3d.doubleToFloat([1,0,1]))

Appearance53.setMaterial(Material54)

Shape52.setAppearance(Appearance53)
Sphere55 = x3d.Sphere()
Sphere55.setRadius(0.08)

Shape52.setGeometry(Sphere55)

Transform51.addChild(Shape52)
Transform56 = x3d.Transform()
Transform56.setTranslation(x3d.doubleToFloat([0.2,0,0]))
Shape57 = x3d.Shape()
Appearance58 = x3d.Appearance()
Material59 = x3d.Material()
Material59.setUSE("TextMaterial")

Appearance58.setMaterial(Material59)

Shape57.setAppearance(Appearance58)
Text60 = x3d.Text()
Text60.setString(["Recommended Spinal Joints"])
FontStyle61 = x3d.FontStyle()
FontStyle61.setFamily(["SANS"])
FontStyle61.setSize(0.1)

Text60.setFontStyle(FontStyle61)

Shape57.setGeometry(Text60)

Transform56.addChild(Shape57)

Transform51.addChild(Transform56)

Billboard23.addChild(Transform51)
Transform62 = x3d.Transform()
Transform62.setTranslation(x3d.doubleToFloat([0,-0.9,0]))
Shape63 = x3d.Shape()
Appearance64 = x3d.Appearance()
Material65 = x3d.Material()
Material65.setDEF("SPINAL_COLOR")
Material65.setDiffuseColor(x3d.doubleToFloat([0,1,0]))

Appearance64.setMaterial(Material65)

Shape63.setAppearance(Appearance64)
Sphere66 = x3d.Sphere()
Sphere66.setRadius(0.08)

Shape63.setGeometry(Sphere66)

Transform62.addChild(Shape63)
Transform67 = x3d.Transform()
Transform67.setTranslation(x3d.doubleToFloat([0.2,0,0]))
Shape68 = x3d.Shape()
Appearance69 = x3d.Appearance()
Material70 = x3d.Material()
Material70.setUSE("TextMaterial")

Appearance69.setMaterial(Material70)

Shape68.setAppearance(Appearance69)
Text71 = x3d.Text()
Text71.setString(["Spinal Joints"])
FontStyle72 = x3d.FontStyle()
FontStyle72.setFamily(["SANS"])
FontStyle72.setSize(0.1)

Text71.setFontStyle(FontStyle72)

Shape68.setGeometry(Text71)

Transform67.addChild(Shape68)

Transform62.addChild(Transform67)

Billboard23.addChild(Transform62)
Transform73 = x3d.Transform()
Transform73.setTranslation(x3d.doubleToFloat([0,-1.3,0]))
Shape74 = x3d.Shape()
Appearance75 = x3d.Appearance()
Material76 = x3d.Material()
Material76.setDEF("SITE_COLOR")
Material76.setDiffuseColor(x3d.doubleToFloat([0,0,1]))

Appearance75.setMaterial(Material76)

Shape74.setAppearance(Appearance75)
Sphere77 = x3d.Sphere()
Sphere77.setRadius(0.08)

Shape74.setGeometry(Sphere77)

Transform73.addChild(Shape74)
Transform78 = x3d.Transform()
Transform78.setTranslation(x3d.doubleToFloat([0.2,0,0]))
Shape79 = x3d.Shape()
Appearance80 = x3d.Appearance()
Material81 = x3d.Material()
Material81.setUSE("TextMaterial")

Appearance80.setMaterial(Material81)

Shape79.setAppearance(Appearance80)
Text82 = x3d.Text()
Text82.setString(["Humanoid Sites"])
FontStyle83 = x3d.FontStyle()
FontStyle83.setFamily(["SANS"])
FontStyle83.setSize(0.1)

Text82.setFontStyle(FontStyle83)

Shape79.setGeometry(Text82)

Transform78.addChild(Shape79)

Transform73.addChild(Transform78)

Billboard23.addChild(Transform73)
Transform84 = x3d.Transform()
Transform84.setTranslation(x3d.doubleToFloat([0,-1.1,0]))
Shape85 = x3d.Shape()
Appearance86 = x3d.Appearance()
Material87 = x3d.Material()
Material87.setDEF("HAND_FEET_COLOR")
Material87.setDiffuseColor(x3d.doubleToFloat([0,1,1]))

Appearance86.setMaterial(Material87)

Shape85.setAppearance(Appearance86)
Sphere88 = x3d.Sphere()
Sphere88.setRadius(0.08)

Shape85.setGeometry(Sphere88)

Transform84.addChild(Shape85)
Transform89 = x3d.Transform()
Transform89.setTranslation(x3d.doubleToFloat([0.2,0,0]))
Shape90 = x3d.Shape()
Appearance91 = x3d.Appearance()
Material92 = x3d.Material()
Material92.setUSE("TextMaterial")

Appearance91.setMaterial(Material92)

Shape90.setAppearance(Appearance91)
Text93 = x3d.Text()
Text93.setString(["Hand & Feet Joints"])
FontStyle94 = x3d.FontStyle()
FontStyle94.setFamily(["SANS"])
FontStyle94.setSize(0.1)

Text93.setFontStyle(FontStyle94)

Shape90.setGeometry(Text93)

Transform89.addChild(Shape90)

Transform84.addChild(Transform89)

Billboard23.addChild(Transform84)

Transform22.addChild(Billboard23)

Scene18.addChild(Transform22)
HAnimHumanoid95 = x3d.HAnimHumanoid()
HAnimHumanoid95.setDEF("hanim_humanoid")
HAnimHumanoid95.setName("humanoid")
HAnimHumanoid95.setVersion("1.0")
MetadataSet96 = x3d.MetadataSet()
MetadataSet96.setName("HAnimHumanoid.info")
MetadataSet96.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
MetadataString97 = x3d.MetadataString()
MetadataString97.setName("authorName")

MetadataSet96.setMetadata(MetadataString97)

HAnimHumanoid95.setMetadata(MetadataSet96)
HAnimJoint98 = x3d.HAnimJoint()
HAnimJoint98.setContainerFieldOverride("skeleton")
HAnimJoint98.setDEF("hanim_HumanoidRoot")
HAnimJoint98.setName("humanoid_root")
HAnimJoint98.setCenter(x3d.doubleToFloat([0,0.824,0.0277]))
HAnimSegment99 = x3d.HAnimSegment()
HAnimSegment99.setDEF("hanim_sacrum")
HAnimSegment99.setName("sacrum")
Transform100 = x3d.Transform()
Transform100.setTranslation(x3d.doubleToFloat([0,0.824,0.0277]))
Shape101 = x3d.Shape()
Shape101.setDEF("DiamondShape")
Appearance102 = x3d.Appearance()
Material103 = x3d.Material()
Material103.setDEF("ROOT_COLOR")
Material103.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance102.setMaterial(Material103)

Shape101.setAppearance(Appearance102)
IndexedFaceSet104 = x3d.IndexedFaceSet()
IndexedFaceSet104.setCreaseAngle(0.5)
IndexedFaceSet104.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate105 = x3d.Coordinate()
Coordinate105.setDEF("points")
Coordinate105.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet104.setCoord(Coordinate105)

Shape101.setGeometry(IndexedFaceSet104)

Transform100.addChild(Shape101)
Transform106 = x3d.Transform()
Transform106.setTranslation(x3d.doubleToFloat([0,0.01,0]))
Billboard107 = x3d.Billboard()
Shape108 = x3d.Shape()
Appearance109 = x3d.Appearance()
Material110 = x3d.Material()
Material110.setDiffuseColor(x3d.doubleToFloat([0.039216,1,0.568627]))

Appearance109.setMaterial(Material110)

Shape108.setAppearance(Appearance109)
Text111 = x3d.Text()
Text111.setString(["Humanoid Root"])
FontStyle112 = x3d.FontStyle()
FontStyle112.setFamily(["SANS"])
FontStyle112.setStyle("ITALIC")
FontStyle112.setSize(0.01)

Text111.setFontStyle(FontStyle112)

Shape108.setGeometry(Text111)

Billboard107.addChild(Shape108)

Transform106.addChild(Billboard107)

Transform100.addChild(Transform106)

HAnimSegment99.addChild(Transform100)

HAnimJoint98.addChild(HAnimSegment99)
HAnimJoint113 = x3d.HAnimJoint()
HAnimJoint113.setDEF("hanim_sacroiliac")
HAnimJoint113.setName("sacroiliac")
HAnimJoint113.setCenter(x3d.doubleToFloat([0,0.9149,0.0016]))
HAnimSegment114 = x3d.HAnimSegment()
HAnimSegment114.setDEF("hanim_pelvis")
HAnimSegment114.setName("pelvis")
Transform115 = x3d.Transform()
Transform115.setDEF("sacroiliacPos")
Transform115.setTranslation(x3d.doubleToFloat([0,0.9149,0.0016]))
Shape116 = x3d.Shape()
Appearance117 = x3d.Appearance()
Material118 = x3d.Material()
Material118.setUSE("MIN_COLOR")

Appearance117.setMaterial(Material118)

Shape116.setAppearance(Appearance117)
IndexedFaceSet119 = x3d.IndexedFaceSet()
IndexedFaceSet119.setCreaseAngle(0.5)
IndexedFaceSet119.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate120 = x3d.Coordinate()
Coordinate120.setUSE("points")

IndexedFaceSet119.setCoord(Coordinate120)

Shape116.setGeometry(IndexedFaceSet119)

Transform115.addChild(Shape116)

HAnimSegment114.addChild(Transform115)
HAnimSite121 = x3d.HAnimSite()
HAnimSite121.setDEF("hanim_r_iliocristale_pt")
HAnimSite121.setName("r_iliocristale_pt")
HAnimSite121.setTranslation(x3d.doubleToFloat([-0.1525,1.0628,0.0035]))
Shape122 = x3d.Shape()
Appearance123 = x3d.Appearance()
Material124 = x3d.Material()
Material124.setUSE("SITE_COLOR")

Appearance123.setMaterial(Material124)

Shape122.setAppearance(Appearance123)
IndexedFaceSet125 = x3d.IndexedFaceSet()
IndexedFaceSet125.setCreaseAngle(0.5)
IndexedFaceSet125.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate126 = x3d.Coordinate()
Coordinate126.setUSE("points")

IndexedFaceSet125.setCoord(Coordinate126)

Shape122.setGeometry(IndexedFaceSet125)

HAnimSite121.addChild(Shape122)

HAnimSegment114.addChild(HAnimSite121)
HAnimSite127 = x3d.HAnimSite()
HAnimSite127.setDEF("hanim_r_trochanterion_pt")
HAnimSite127.setName("r_trochanterion_pt")
HAnimSite127.setTranslation(x3d.doubleToFloat([-0.1689,0.8419,0.0352]))
Shape128 = x3d.Shape()
Appearance129 = x3d.Appearance()
Material130 = x3d.Material()
Material130.setUSE("SITE_COLOR")

Appearance129.setMaterial(Material130)

Shape128.setAppearance(Appearance129)
IndexedFaceSet131 = x3d.IndexedFaceSet()
IndexedFaceSet131.setCreaseAngle(0.5)
IndexedFaceSet131.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate132 = x3d.Coordinate()
Coordinate132.setUSE("points")

IndexedFaceSet131.setCoord(Coordinate132)

Shape128.setGeometry(IndexedFaceSet131)

HAnimSite127.addChild(Shape128)

HAnimSegment114.addChild(HAnimSite127)
HAnimSite133 = x3d.HAnimSite()
HAnimSite133.setDEF("hanim_l_iliocristale_pt")
HAnimSite133.setName("l_iliocristale_pt")
HAnimSite133.setTranslation(x3d.doubleToFloat([0.1612,1.0537,0.0008]))
Shape134 = x3d.Shape()
Appearance135 = x3d.Appearance()
Material136 = x3d.Material()
Material136.setUSE("SITE_COLOR")

Appearance135.setMaterial(Material136)

Shape134.setAppearance(Appearance135)
IndexedFaceSet137 = x3d.IndexedFaceSet()
IndexedFaceSet137.setCreaseAngle(0.5)
IndexedFaceSet137.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate138 = x3d.Coordinate()
Coordinate138.setUSE("points")

IndexedFaceSet137.setCoord(Coordinate138)

Shape134.setGeometry(IndexedFaceSet137)

HAnimSite133.addChild(Shape134)

HAnimSegment114.addChild(HAnimSite133)
HAnimSite139 = x3d.HAnimSite()
HAnimSite139.setDEF("hanim_l_trochanterion_pt")
HAnimSite139.setName("l_trochanterion_pt")
HAnimSite139.setTranslation(x3d.doubleToFloat([0.1677,0.8336,0.0303]))
Shape140 = x3d.Shape()
Appearance141 = x3d.Appearance()
Material142 = x3d.Material()
Material142.setUSE("SITE_COLOR")

Appearance141.setMaterial(Material142)

Shape140.setAppearance(Appearance141)
IndexedFaceSet143 = x3d.IndexedFaceSet()
IndexedFaceSet143.setCreaseAngle(0.5)
IndexedFaceSet143.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate144 = x3d.Coordinate()
Coordinate144.setUSE("points")

IndexedFaceSet143.setCoord(Coordinate144)

Shape140.setGeometry(IndexedFaceSet143)

HAnimSite139.addChild(Shape140)

HAnimSegment114.addChild(HAnimSite139)
HAnimSite145 = x3d.HAnimSite()
HAnimSite145.setDEF("hanim_r_asis_pt")
HAnimSite145.setName("r_asis_pt")
HAnimSite145.setTranslation(x3d.doubleToFloat([-0.0887,1.0021,0.1112]))
Shape146 = x3d.Shape()
Appearance147 = x3d.Appearance()
Material148 = x3d.Material()
Material148.setUSE("SITE_COLOR")

Appearance147.setMaterial(Material148)

Shape146.setAppearance(Appearance147)
IndexedFaceSet149 = x3d.IndexedFaceSet()
IndexedFaceSet149.setCreaseAngle(0.5)
IndexedFaceSet149.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate150 = x3d.Coordinate()
Coordinate150.setUSE("points")

IndexedFaceSet149.setCoord(Coordinate150)

Shape146.setGeometry(IndexedFaceSet149)

HAnimSite145.addChild(Shape146)

HAnimSegment114.addChild(HAnimSite145)
HAnimSite151 = x3d.HAnimSite()
HAnimSite151.setDEF("hanim_l_asis_pt")
HAnimSite151.setName("l_asis_pt")
HAnimSite151.setTranslation(x3d.doubleToFloat([0.0925,0.9983,0.1052]))
Shape152 = x3d.Shape()
Appearance153 = x3d.Appearance()
Material154 = x3d.Material()
Material154.setUSE("SITE_COLOR")

Appearance153.setMaterial(Material154)

Shape152.setAppearance(Appearance153)
IndexedFaceSet155 = x3d.IndexedFaceSet()
IndexedFaceSet155.setCreaseAngle(0.5)
IndexedFaceSet155.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate156 = x3d.Coordinate()
Coordinate156.setUSE("points")

IndexedFaceSet155.setCoord(Coordinate156)

Shape152.setGeometry(IndexedFaceSet155)

HAnimSite151.addChild(Shape152)

HAnimSegment114.addChild(HAnimSite151)
HAnimSite157 = x3d.HAnimSite()
HAnimSite157.setDEF("hanim_r_psis_pt")
HAnimSite157.setName("r_psis_pt")
HAnimSite157.setTranslation(x3d.doubleToFloat([-0.0716,1.019,-0.1138]))
Shape158 = x3d.Shape()
Appearance159 = x3d.Appearance()
Material160 = x3d.Material()
Material160.setUSE("SITE_COLOR")

Appearance159.setMaterial(Material160)

Shape158.setAppearance(Appearance159)
IndexedFaceSet161 = x3d.IndexedFaceSet()
IndexedFaceSet161.setCreaseAngle(0.5)
IndexedFaceSet161.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate162 = x3d.Coordinate()
Coordinate162.setUSE("points")

IndexedFaceSet161.setCoord(Coordinate162)

Shape158.setGeometry(IndexedFaceSet161)

HAnimSite157.addChild(Shape158)

HAnimSegment114.addChild(HAnimSite157)
HAnimSite163 = x3d.HAnimSite()
HAnimSite163.setDEF("hanim_l_psis_pt")
HAnimSite163.setName("l_psis_pt")
HAnimSite163.setTranslation(x3d.doubleToFloat([0.0774,1.019,-0.1151]))
Shape164 = x3d.Shape()
Appearance165 = x3d.Appearance()
Material166 = x3d.Material()
Material166.setUSE("SITE_COLOR")

Appearance165.setMaterial(Material166)

Shape164.setAppearance(Appearance165)
IndexedFaceSet167 = x3d.IndexedFaceSet()
IndexedFaceSet167.setCreaseAngle(0.5)
IndexedFaceSet167.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate168 = x3d.Coordinate()
Coordinate168.setUSE("points")

IndexedFaceSet167.setCoord(Coordinate168)

Shape164.setGeometry(IndexedFaceSet167)

HAnimSite163.addChild(Shape164)

HAnimSegment114.addChild(HAnimSite163)
HAnimSite169 = x3d.HAnimSite()
HAnimSite169.setDEF("hanim_crotch_pt")
HAnimSite169.setName("crotch_pt")
HAnimSite169.setTranslation(x3d.doubleToFloat([0.0034,0.8266,0.0257]))
Shape170 = x3d.Shape()
Appearance171 = x3d.Appearance()
Material172 = x3d.Material()
Material172.setUSE("SITE_COLOR")

Appearance171.setMaterial(Material172)

Shape170.setAppearance(Appearance171)
IndexedFaceSet173 = x3d.IndexedFaceSet()
IndexedFaceSet173.setCreaseAngle(0.5)
IndexedFaceSet173.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate174 = x3d.Coordinate()
Coordinate174.setUSE("points")

IndexedFaceSet173.setCoord(Coordinate174)

Shape170.setGeometry(IndexedFaceSet173)

HAnimSite169.addChild(Shape170)

HAnimSegment114.addChild(HAnimSite169)

HAnimJoint113.addChild(HAnimSegment114)
HAnimJoint175 = x3d.HAnimJoint()
HAnimJoint175.setDEF("hanim_l_hip")
HAnimJoint175.setName("l_hip")
HAnimJoint175.setCenter(x3d.doubleToFloat([0.0961,0.9124,-0.0001]))
HAnimSegment176 = x3d.HAnimSegment()
HAnimSegment176.setDEF("hanim_l_thigh")
HAnimSegment176.setName("l_thigh")
Transform177 = x3d.Transform()
Transform177.setTranslation(x3d.doubleToFloat([0.0961,0.9124,-0.0001]))
Shape178 = x3d.Shape()
Appearance179 = x3d.Appearance()
Material180 = x3d.Material()
Material180.setUSE("MIN_COLOR")

Appearance179.setMaterial(Material180)

Shape178.setAppearance(Appearance179)
IndexedFaceSet181 = x3d.IndexedFaceSet()
IndexedFaceSet181.setCreaseAngle(0.5)
IndexedFaceSet181.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate182 = x3d.Coordinate()
Coordinate182.setUSE("points")

IndexedFaceSet181.setCoord(Coordinate182)

Shape178.setGeometry(IndexedFaceSet181)

Transform177.addChild(Shape178)

HAnimSegment176.addChild(Transform177)
HAnimSite183 = x3d.HAnimSite()
HAnimSite183.setDEF("hanim_l_knee_crease_pt")
HAnimSite183.setName("l_knee_crease_pt")
HAnimSite183.setTranslation(x3d.doubleToFloat([0.0993,0.4881,-0.0309]))
Shape184 = x3d.Shape()
Appearance185 = x3d.Appearance()
Material186 = x3d.Material()
Material186.setUSE("SITE_COLOR")

Appearance185.setMaterial(Material186)

Shape184.setAppearance(Appearance185)
IndexedFaceSet187 = x3d.IndexedFaceSet()
IndexedFaceSet187.setCreaseAngle(0.5)
IndexedFaceSet187.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate188 = x3d.Coordinate()
Coordinate188.setUSE("points")

IndexedFaceSet187.setCoord(Coordinate188)

Shape184.setGeometry(IndexedFaceSet187)

HAnimSite183.addChild(Shape184)

HAnimSegment176.addChild(HAnimSite183)
HAnimSite189 = x3d.HAnimSite()
HAnimSite189.setDEF("hanim_l_femoral_lateral_epicn_pt")
HAnimSite189.setName("l_femoral_lateral_epicn_pt")
HAnimSite189.setTranslation(x3d.doubleToFloat([0.1598,0.4967,0.0297]))
Shape190 = x3d.Shape()
Appearance191 = x3d.Appearance()
Material192 = x3d.Material()
Material192.setUSE("SITE_COLOR")

Appearance191.setMaterial(Material192)

Shape190.setAppearance(Appearance191)
IndexedFaceSet193 = x3d.IndexedFaceSet()
IndexedFaceSet193.setCreaseAngle(0.5)
IndexedFaceSet193.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate194 = x3d.Coordinate()
Coordinate194.setUSE("points")

IndexedFaceSet193.setCoord(Coordinate194)

Shape190.setGeometry(IndexedFaceSet193)

HAnimSite189.addChild(Shape190)

HAnimSegment176.addChild(HAnimSite189)
HAnimSite195 = x3d.HAnimSite()
HAnimSite195.setDEF("hanim_l_femoral_medial_epicn_pt")
HAnimSite195.setName("l_femoral_medial_epicn_pt")
HAnimSite195.setTranslation(x3d.doubleToFloat([0.0398,0.4946,0.0303]))
Shape196 = x3d.Shape()
Appearance197 = x3d.Appearance()
Material198 = x3d.Material()
Material198.setUSE("SITE_COLOR")

Appearance197.setMaterial(Material198)

Shape196.setAppearance(Appearance197)
IndexedFaceSet199 = x3d.IndexedFaceSet()
IndexedFaceSet199.setCreaseAngle(0.5)
IndexedFaceSet199.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate200 = x3d.Coordinate()
Coordinate200.setUSE("points")

IndexedFaceSet199.setCoord(Coordinate200)

Shape196.setGeometry(IndexedFaceSet199)

HAnimSite195.addChild(Shape196)

HAnimSegment176.addChild(HAnimSite195)

HAnimJoint175.addChild(HAnimSegment176)
HAnimJoint201 = x3d.HAnimJoint()
HAnimJoint201.setDEF("hanim_l_knee")
HAnimJoint201.setName("l_knee")
HAnimJoint201.setCenter(x3d.doubleToFloat([0.104,0.4867,0.0308]))
HAnimSegment202 = x3d.HAnimSegment()
HAnimSegment202.setDEF("hanim_l_calf")
HAnimSegment202.setName("l_calf")
Transform203 = x3d.Transform()
Transform203.setTranslation(x3d.doubleToFloat([0.104,0.4867,0.0308]))
Shape204 = x3d.Shape()
Appearance205 = x3d.Appearance()
Material206 = x3d.Material()
Material206.setUSE("MIN_COLOR")

Appearance205.setMaterial(Material206)

Shape204.setAppearance(Appearance205)
IndexedFaceSet207 = x3d.IndexedFaceSet()
IndexedFaceSet207.setCreaseAngle(0.5)
IndexedFaceSet207.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate208 = x3d.Coordinate()
Coordinate208.setUSE("points")

IndexedFaceSet207.setCoord(Coordinate208)

Shape204.setGeometry(IndexedFaceSet207)

Transform203.addChild(Shape204)

HAnimSegment202.addChild(Transform203)

HAnimJoint201.addChild(HAnimSegment202)
HAnimJoint209 = x3d.HAnimJoint()
HAnimJoint209.setDEF("hanim_l_ankle")
HAnimJoint209.setName("l_ankle")
HAnimJoint209.setCenter(x3d.doubleToFloat([0.1101,0.0656,-0.0736]))
HAnimSegment210 = x3d.HAnimSegment()
HAnimSegment210.setDEF("hanim_l_hindfoot")
HAnimSegment210.setName("l_hindfoot")
Transform211 = x3d.Transform()
Transform211.setTranslation(x3d.doubleToFloat([0.1101,0.0656,-0.0736]))
Shape212 = x3d.Shape()
Appearance213 = x3d.Appearance()
Material214 = x3d.Material()
Material214.setUSE("MIN_COLOR")

Appearance213.setMaterial(Material214)

Shape212.setAppearance(Appearance213)
IndexedFaceSet215 = x3d.IndexedFaceSet()
IndexedFaceSet215.setCreaseAngle(0.5)
IndexedFaceSet215.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate216 = x3d.Coordinate()
Coordinate216.setUSE("points")

IndexedFaceSet215.setCoord(Coordinate216)

Shape212.setGeometry(IndexedFaceSet215)

Transform211.addChild(Shape212)

HAnimSegment210.addChild(Transform211)
HAnimSite217 = x3d.HAnimSite()
HAnimSite217.setDEF("hanim_l_lateral_malleolus_pt")
HAnimSite217.setName("l_lateral_malleolus_pt")
HAnimSite217.setTranslation(x3d.doubleToFloat([0.1308,0.0597,-0.1032]))
Shape218 = x3d.Shape()
Appearance219 = x3d.Appearance()
Material220 = x3d.Material()
Material220.setUSE("HAND_FEET_COLOR")

Appearance219.setMaterial(Material220)

Shape218.setAppearance(Appearance219)
IndexedFaceSet221 = x3d.IndexedFaceSet()
IndexedFaceSet221.setCreaseAngle(0.5)
IndexedFaceSet221.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate222 = x3d.Coordinate()
Coordinate222.setUSE("points")

IndexedFaceSet221.setCoord(Coordinate222)

Shape218.setGeometry(IndexedFaceSet221)

HAnimSite217.addChild(Shape218)

HAnimSegment210.addChild(HAnimSite217)
HAnimSite223 = x3d.HAnimSite()
HAnimSite223.setDEF("hanim_l_medial_malleolus_pt")
HAnimSite223.setName("l_medial_malleolus_pt")
HAnimSite223.setTranslation(x3d.doubleToFloat([0.089,0.0716,-0.0881]))
Shape224 = x3d.Shape()
Appearance225 = x3d.Appearance()
Material226 = x3d.Material()
Material226.setUSE("HAND_FEET_COLOR")

Appearance225.setMaterial(Material226)

Shape224.setAppearance(Appearance225)
IndexedFaceSet227 = x3d.IndexedFaceSet()
IndexedFaceSet227.setCreaseAngle(0.5)
IndexedFaceSet227.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate228 = x3d.Coordinate()
Coordinate228.setUSE("points")

IndexedFaceSet227.setCoord(Coordinate228)

Shape224.setGeometry(IndexedFaceSet227)

HAnimSite223.addChild(Shape224)

HAnimSegment210.addChild(HAnimSite223)
HAnimSite229 = x3d.HAnimSite()
HAnimSite229.setDEF("hanim_l_sphyrion_pt")
HAnimSite229.setName("l_sphyrion_pt")
HAnimSite229.setTranslation(x3d.doubleToFloat([0.089,0.0575,-0.0943]))
Shape230 = x3d.Shape()
Appearance231 = x3d.Appearance()
Material232 = x3d.Material()
Material232.setUSE("HAND_FEET_COLOR")

Appearance231.setMaterial(Material232)

Shape230.setAppearance(Appearance231)
IndexedFaceSet233 = x3d.IndexedFaceSet()
IndexedFaceSet233.setCreaseAngle(0.5)
IndexedFaceSet233.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate234 = x3d.Coordinate()
Coordinate234.setUSE("points")

IndexedFaceSet233.setCoord(Coordinate234)

Shape230.setGeometry(IndexedFaceSet233)

HAnimSite229.addChild(Shape230)

HAnimSegment210.addChild(HAnimSite229)
HAnimSite235 = x3d.HAnimSite()
HAnimSite235.setDEF("hanim_l_calcaneous_post_pt")
HAnimSite235.setName("l_calcaneous_post_pt")
HAnimSite235.setTranslation(x3d.doubleToFloat([0.0974,0.0259,-0.1171]))
Shape236 = x3d.Shape()
Appearance237 = x3d.Appearance()
Material238 = x3d.Material()
Material238.setUSE("HAND_FEET_COLOR")

Appearance237.setMaterial(Material238)

Shape236.setAppearance(Appearance237)
IndexedFaceSet239 = x3d.IndexedFaceSet()
IndexedFaceSet239.setCreaseAngle(0.5)
IndexedFaceSet239.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate240 = x3d.Coordinate()
Coordinate240.setUSE("points")

IndexedFaceSet239.setCoord(Coordinate240)

Shape236.setGeometry(IndexedFaceSet239)

HAnimSite235.addChild(Shape236)

HAnimSegment210.addChild(HAnimSite235)

HAnimJoint209.addChild(HAnimSegment210)
HAnimJoint241 = x3d.HAnimJoint()
HAnimJoint241.setDEF("hanim_l_subtalar")
HAnimJoint241.setName("l_subtalar")
HAnimJoint241.setCenter(x3d.doubleToFloat([0.1086,0.0001,-0.0368]))
HAnimSegment242 = x3d.HAnimSegment()
HAnimSegment242.setDEF("hanim_midproximal")
HAnimSegment242.setName("midproximal")
Transform243 = x3d.Transform()
Transform243.setTranslation(x3d.doubleToFloat([0.1086,0.0001,-0.0368]))
Shape244 = x3d.Shape()
Appearance245 = x3d.Appearance()
Material246 = x3d.Material()
Material246.setUSE("MIN_COLOR")

Appearance245.setMaterial(Material246)

Shape244.setAppearance(Appearance245)
IndexedFaceSet247 = x3d.IndexedFaceSet()
IndexedFaceSet247.setCreaseAngle(0.5)
IndexedFaceSet247.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate248 = x3d.Coordinate()
Coordinate248.setUSE("points")

IndexedFaceSet247.setCoord(Coordinate248)

Shape244.setGeometry(IndexedFaceSet247)

Transform243.addChild(Shape244)

HAnimSegment242.addChild(Transform243)

HAnimJoint241.addChild(HAnimSegment242)
HAnimJoint249 = x3d.HAnimJoint()
HAnimJoint249.setDEF("hanim_l_midtarsal")
HAnimJoint249.setName("l_midtarsal")
HAnimJoint249.setCenter(x3d.doubleToFloat([0.1086,0.0001,0.0368]))
HAnimSegment250 = x3d.HAnimSegment()
HAnimSegment250.setDEF("hanim_l_middistal")
HAnimSegment250.setName("l_middistal")
Transform251 = x3d.Transform()
Transform251.setTranslation(x3d.doubleToFloat([0.1086,0.0001,0.0368]))
Shape252 = x3d.Shape()
Appearance253 = x3d.Appearance()
Material254 = x3d.Material()
Material254.setUSE("JOINT_COLOR")

Appearance253.setMaterial(Material254)

Shape252.setAppearance(Appearance253)
IndexedFaceSet255 = x3d.IndexedFaceSet()
IndexedFaceSet255.setCreaseAngle(0.5)
IndexedFaceSet255.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate256 = x3d.Coordinate()
Coordinate256.setUSE("points")

IndexedFaceSet255.setCoord(Coordinate256)

Shape252.setGeometry(IndexedFaceSet255)

Transform251.addChild(Shape252)

HAnimSegment250.addChild(Transform251)
HAnimSite257 = x3d.HAnimSite()
HAnimSite257.setDEF("hanim_l_middistal_tip")
HAnimSite257.setName("l_middistal_tip")
HAnimSite257.setTranslation(x3d.doubleToFloat([0.1354,0.0016,0.1476]))
Shape258 = x3d.Shape()
Appearance259 = x3d.Appearance()
Material260 = x3d.Material()
Material260.setUSE("HAND_FEET_COLOR")

Appearance259.setMaterial(Material260)

Shape258.setAppearance(Appearance259)
IndexedFaceSet261 = x3d.IndexedFaceSet()
IndexedFaceSet261.setCreaseAngle(0.5)
IndexedFaceSet261.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate262 = x3d.Coordinate()
Coordinate262.setUSE("points")

IndexedFaceSet261.setCoord(Coordinate262)

Shape258.setGeometry(IndexedFaceSet261)

HAnimSite257.addChild(Shape258)

HAnimSegment250.addChild(HAnimSite257)
HAnimSite263 = x3d.HAnimSite()
HAnimSite263.setDEF("hanim_l_metatarsal_pha1_pt")
HAnimSite263.setName("l_metatarsal_pha1_pt")
HAnimSite263.setTranslation(x3d.doubleToFloat([0.0816,0.0232,0.0106]))
Shape264 = x3d.Shape()
Appearance265 = x3d.Appearance()
Material266 = x3d.Material()
Material266.setUSE("HAND_FEET_COLOR")

Appearance265.setMaterial(Material266)

Shape264.setAppearance(Appearance265)
IndexedFaceSet267 = x3d.IndexedFaceSet()
IndexedFaceSet267.setCreaseAngle(0.5)
IndexedFaceSet267.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate268 = x3d.Coordinate()
Coordinate268.setUSE("points")

IndexedFaceSet267.setCoord(Coordinate268)

Shape264.setGeometry(IndexedFaceSet267)

HAnimSite263.addChild(Shape264)

HAnimSegment250.addChild(HAnimSite263)

HAnimJoint249.addChild(HAnimSegment250)
HAnimJoint269 = x3d.HAnimJoint()
HAnimJoint269.setDEF("hanim_l_metatarsal")
HAnimJoint269.setName("l_metatarsal")
HAnimJoint269.setCenter(x3d.doubleToFloat([0.1086,0,0.0762]))
HAnimSegment270 = x3d.HAnimSegment()
HAnimSegment270.setDEF("hanim_l_forefoot")
HAnimSegment270.setName("l_forefoot")
Transform271 = x3d.Transform()
Transform271.setTranslation(x3d.doubleToFloat([0.1086,0,0.0762]))
Shape272 = x3d.Shape()
Appearance273 = x3d.Appearance()
Material274 = x3d.Material()
Material274.setUSE("JOINT_COLOR")

Appearance273.setMaterial(Material274)

Shape272.setAppearance(Appearance273)
IndexedFaceSet275 = x3d.IndexedFaceSet()
IndexedFaceSet275.setCreaseAngle(0.5)
IndexedFaceSet275.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate276 = x3d.Coordinate()
Coordinate276.setUSE("points")

IndexedFaceSet275.setCoord(Coordinate276)

Shape272.setGeometry(IndexedFaceSet275)

Transform271.addChild(Shape272)

HAnimSegment270.addChild(Transform271)
HAnimSite277 = x3d.HAnimSite()
HAnimSite277.setDEF("hanim_l_forefoot_tip")
HAnimSite277.setName("l_forefoot_tip")
HAnimSite277.setTranslation(x3d.doubleToFloat([0.1354,0.0016,0.1476]))
Shape278 = x3d.Shape()
Appearance279 = x3d.Appearance()
Material280 = x3d.Material()
Material280.setUSE("HAND_FEET_COLOR")

Appearance279.setMaterial(Material280)

Shape278.setAppearance(Appearance279)
IndexedFaceSet281 = x3d.IndexedFaceSet()
IndexedFaceSet281.setCreaseAngle(0.5)
IndexedFaceSet281.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate282 = x3d.Coordinate()
Coordinate282.setUSE("points")

IndexedFaceSet281.setCoord(Coordinate282)

Shape278.setGeometry(IndexedFaceSet281)

HAnimSite277.addChild(Shape278)

HAnimSegment270.addChild(HAnimSite277)
HAnimSite283 = x3d.HAnimSite()
HAnimSite283.setDEF("hanim_l_metatarsal_pha5_pt")
HAnimSite283.setName("l_metatarsal_pha5_pt")
HAnimSite283.setTranslation(x3d.doubleToFloat([0.1825,0.007,0.0928]))
Shape284 = x3d.Shape()
Appearance285 = x3d.Appearance()
Material286 = x3d.Material()
Material286.setUSE("HAND_FEET_COLOR")

Appearance285.setMaterial(Material286)

Shape284.setAppearance(Appearance285)
IndexedFaceSet287 = x3d.IndexedFaceSet()
IndexedFaceSet287.setCreaseAngle(0.5)
IndexedFaceSet287.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate288 = x3d.Coordinate()
Coordinate288.setUSE("points")

IndexedFaceSet287.setCoord(Coordinate288)

Shape284.setGeometry(IndexedFaceSet287)

HAnimSite283.addChild(Shape284)

HAnimSegment270.addChild(HAnimSite283)
HAnimSite289 = x3d.HAnimSite()
HAnimSite289.setDEF("hanim_l_digit2_pt")
HAnimSite289.setName("l_digit2_pt")
HAnimSite289.setTranslation(x3d.doubleToFloat([0.1195,0.0079,0.1433]))
Shape290 = x3d.Shape()
Appearance291 = x3d.Appearance()
Material292 = x3d.Material()
Material292.setUSE("HAND_FEET_COLOR")

Appearance291.setMaterial(Material292)

Shape290.setAppearance(Appearance291)
IndexedFaceSet293 = x3d.IndexedFaceSet()
IndexedFaceSet293.setCreaseAngle(0.5)
IndexedFaceSet293.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate294 = x3d.Coordinate()
Coordinate294.setUSE("points")

IndexedFaceSet293.setCoord(Coordinate294)

Shape290.setGeometry(IndexedFaceSet293)

HAnimSite289.addChild(Shape290)

HAnimSegment270.addChild(HAnimSite289)

HAnimJoint269.addChild(HAnimSegment270)

HAnimJoint249.addChild(HAnimJoint269)

HAnimJoint241.addChild(HAnimJoint249)

HAnimJoint209.addChild(HAnimJoint241)

HAnimJoint201.addChild(HAnimJoint209)

HAnimJoint175.addChild(HAnimJoint201)

HAnimJoint113.addChild(HAnimJoint175)
HAnimJoint295 = x3d.HAnimJoint()
HAnimJoint295.setDEF("hanim_r_hip")
HAnimJoint295.setName("r_hip")
HAnimJoint295.setCenter(x3d.doubleToFloat([-0.095,0.9171,0.0029]))
HAnimSegment296 = x3d.HAnimSegment()
HAnimSegment296.setDEF("hanim_r_thigh")
HAnimSegment296.setName("r_thigh")
Transform297 = x3d.Transform()
Transform297.setTranslation(x3d.doubleToFloat([-0.095,0.9171,0.0029]))
Shape298 = x3d.Shape()
Appearance299 = x3d.Appearance()
Material300 = x3d.Material()
Material300.setUSE("MIN_COLOR")

Appearance299.setMaterial(Material300)

Shape298.setAppearance(Appearance299)
IndexedFaceSet301 = x3d.IndexedFaceSet()
IndexedFaceSet301.setCreaseAngle(0.5)
IndexedFaceSet301.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate302 = x3d.Coordinate()
Coordinate302.setUSE("points")

IndexedFaceSet301.setCoord(Coordinate302)

Shape298.setGeometry(IndexedFaceSet301)

Transform297.addChild(Shape298)

HAnimSegment296.addChild(Transform297)
HAnimSite303 = x3d.HAnimSite()
HAnimSite303.setDEF("hanim_r_knee_crease_pt")
HAnimSite303.setName("r_knee_crease_pt")
HAnimSite303.setTranslation(x3d.doubleToFloat([-0.0825,0.4932,-0.0326]))
Shape304 = x3d.Shape()
Appearance305 = x3d.Appearance()
Material306 = x3d.Material()
Material306.setUSE("SITE_COLOR")

Appearance305.setMaterial(Material306)

Shape304.setAppearance(Appearance305)
IndexedFaceSet307 = x3d.IndexedFaceSet()
IndexedFaceSet307.setCreaseAngle(0.5)
IndexedFaceSet307.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate308 = x3d.Coordinate()
Coordinate308.setUSE("points")

IndexedFaceSet307.setCoord(Coordinate308)

Shape304.setGeometry(IndexedFaceSet307)

HAnimSite303.addChild(Shape304)

HAnimSegment296.addChild(HAnimSite303)
HAnimSite309 = x3d.HAnimSite()
HAnimSite309.setDEF("hanim_r_femoral_lateral_epicn_pt")
HAnimSite309.setName("r_femoral_lateral_epicn_pt")
HAnimSite309.setTranslation(x3d.doubleToFloat([-0.1421,0.4992,0.031]))
Shape310 = x3d.Shape()
Appearance311 = x3d.Appearance()
Material312 = x3d.Material()
Material312.setUSE("SITE_COLOR")

Appearance311.setMaterial(Material312)

Shape310.setAppearance(Appearance311)
IndexedFaceSet313 = x3d.IndexedFaceSet()
IndexedFaceSet313.setCreaseAngle(0.5)
IndexedFaceSet313.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate314 = x3d.Coordinate()
Coordinate314.setUSE("points")

IndexedFaceSet313.setCoord(Coordinate314)

Shape310.setGeometry(IndexedFaceSet313)

HAnimSite309.addChild(Shape310)

HAnimSegment296.addChild(HAnimSite309)
HAnimSite315 = x3d.HAnimSite()
HAnimSite315.setDEF("hanim_r_femoral_medial_epicn_pt")
HAnimSite315.setName("r_femoral_medial_epicn_pt")
HAnimSite315.setTranslation(x3d.doubleToFloat([-0.0221,0.5014,0.0289]))
Shape316 = x3d.Shape()
Appearance317 = x3d.Appearance()
Material318 = x3d.Material()
Material318.setUSE("SITE_COLOR")

Appearance317.setMaterial(Material318)

Shape316.setAppearance(Appearance317)
IndexedFaceSet319 = x3d.IndexedFaceSet()
IndexedFaceSet319.setCreaseAngle(0.5)
IndexedFaceSet319.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate320 = x3d.Coordinate()
Coordinate320.setUSE("points")

IndexedFaceSet319.setCoord(Coordinate320)

Shape316.setGeometry(IndexedFaceSet319)

HAnimSite315.addChild(Shape316)

HAnimSegment296.addChild(HAnimSite315)

HAnimJoint295.addChild(HAnimSegment296)
HAnimJoint321 = x3d.HAnimJoint()
HAnimJoint321.setDEF("hanim_r_knee")
HAnimJoint321.setName("r_knee")
HAnimJoint321.setCenter(x3d.doubleToFloat([-0.0867,0.4913,0.0318]))
HAnimSegment322 = x3d.HAnimSegment()
HAnimSegment322.setDEF("hanim_r_calf")
HAnimSegment322.setName("r_calf")
Transform323 = x3d.Transform()
Transform323.setTranslation(x3d.doubleToFloat([-0.0867,0.4913,0.0318]))
Shape324 = x3d.Shape()
Appearance325 = x3d.Appearance()
Material326 = x3d.Material()
Material326.setUSE("SITE_COLOR")

Appearance325.setMaterial(Material326)

Shape324.setAppearance(Appearance325)
IndexedFaceSet327 = x3d.IndexedFaceSet()
IndexedFaceSet327.setCreaseAngle(0.5)
IndexedFaceSet327.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate328 = x3d.Coordinate()
Coordinate328.setUSE("points")

IndexedFaceSet327.setCoord(Coordinate328)

Shape324.setGeometry(IndexedFaceSet327)

Transform323.addChild(Shape324)

HAnimSegment322.addChild(Transform323)

HAnimJoint321.addChild(HAnimSegment322)
HAnimJoint329 = x3d.HAnimJoint()
HAnimJoint329.setDEF("hanim_r_ankle")
HAnimJoint329.setName("r_ankle")
HAnimJoint329.setCenter(x3d.doubleToFloat([-0.0801,0.0712,-0.0766]))
HAnimSegment330 = x3d.HAnimSegment()
HAnimSegment330.setDEF("hanim_r_hindfoot")
HAnimSegment330.setName("r_hindfoot")
Transform331 = x3d.Transform()
Transform331.setTranslation(x3d.doubleToFloat([-0.0801,0.0712,-0.0766]))
Shape332 = x3d.Shape()
Appearance333 = x3d.Appearance()
Material334 = x3d.Material()
Material334.setUSE("MIN_COLOR")

Appearance333.setMaterial(Material334)

Shape332.setAppearance(Appearance333)
IndexedFaceSet335 = x3d.IndexedFaceSet()
IndexedFaceSet335.setCreaseAngle(0.5)
IndexedFaceSet335.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate336 = x3d.Coordinate()
Coordinate336.setUSE("points")

IndexedFaceSet335.setCoord(Coordinate336)

Shape332.setGeometry(IndexedFaceSet335)

Transform331.addChild(Shape332)

HAnimSegment330.addChild(Transform331)
HAnimSite337 = x3d.HAnimSite()
HAnimSite337.setDEF("hanim_r_lateral_malleolus_pt")
HAnimSite337.setName("r_lateral_malleolus_pt")
HAnimSite337.setTranslation(x3d.doubleToFloat([-0.1006,0.0658,-0.1075]))
Shape338 = x3d.Shape()
Appearance339 = x3d.Appearance()
Material340 = x3d.Material()
Material340.setUSE("HAND_FEET_COLOR")

Appearance339.setMaterial(Material340)

Shape338.setAppearance(Appearance339)
IndexedFaceSet341 = x3d.IndexedFaceSet()
IndexedFaceSet341.setCreaseAngle(0.5)
IndexedFaceSet341.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate342 = x3d.Coordinate()
Coordinate342.setUSE("points")

IndexedFaceSet341.setCoord(Coordinate342)

Shape338.setGeometry(IndexedFaceSet341)

HAnimSite337.addChild(Shape338)

HAnimSegment330.addChild(HAnimSite337)
HAnimSite343 = x3d.HAnimSite()
HAnimSite343.setDEF("hanim_r_medial_malleolus_pt")
HAnimSite343.setName("r_medial_malleolus_pt")
HAnimSite343.setTranslation(x3d.doubleToFloat([-0.0591,0.076,-0.0928]))
Shape344 = x3d.Shape()
Appearance345 = x3d.Appearance()
Material346 = x3d.Material()
Material346.setUSE("HAND_FEET_COLOR")

Appearance345.setMaterial(Material346)

Shape344.setAppearance(Appearance345)
IndexedFaceSet347 = x3d.IndexedFaceSet()
IndexedFaceSet347.setCreaseAngle(0.5)
IndexedFaceSet347.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate348 = x3d.Coordinate()
Coordinate348.setUSE("points")

IndexedFaceSet347.setCoord(Coordinate348)

Shape344.setGeometry(IndexedFaceSet347)

HAnimSite343.addChild(Shape344)

HAnimSegment330.addChild(HAnimSite343)
HAnimSite349 = x3d.HAnimSite()
HAnimSite349.setDEF("hanim_r_sphyrion_pt")
HAnimSite349.setName("r_sphyrion_pt")
HAnimSite349.setTranslation(x3d.doubleToFloat([-0.0603,0.061,-0.1002]))
Shape350 = x3d.Shape()
Appearance351 = x3d.Appearance()
Material352 = x3d.Material()
Material352.setUSE("HAND_FEET_COLOR")

Appearance351.setMaterial(Material352)

Shape350.setAppearance(Appearance351)
IndexedFaceSet353 = x3d.IndexedFaceSet()
IndexedFaceSet353.setCreaseAngle(0.5)
IndexedFaceSet353.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate354 = x3d.Coordinate()
Coordinate354.setUSE("points")

IndexedFaceSet353.setCoord(Coordinate354)

Shape350.setGeometry(IndexedFaceSet353)

HAnimSite349.addChild(Shape350)

HAnimSegment330.addChild(HAnimSite349)
HAnimSite355 = x3d.HAnimSite()
HAnimSite355.setDEF("hanim_r_calcaneous_post_pt")
HAnimSite355.setName("r_calcaneous_post_pt")
HAnimSite355.setTranslation(x3d.doubleToFloat([-0.0692,0.0297,-0.1221]))
Shape356 = x3d.Shape()
Appearance357 = x3d.Appearance()
Material358 = x3d.Material()
Material358.setUSE("HAND_FEET_COLOR")

Appearance357.setMaterial(Material358)

Shape356.setAppearance(Appearance357)
IndexedFaceSet359 = x3d.IndexedFaceSet()
IndexedFaceSet359.setCreaseAngle(0.5)
IndexedFaceSet359.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate360 = x3d.Coordinate()
Coordinate360.setUSE("points")

IndexedFaceSet359.setCoord(Coordinate360)

Shape356.setGeometry(IndexedFaceSet359)

HAnimSite355.addChild(Shape356)

HAnimSegment330.addChild(HAnimSite355)

HAnimJoint329.addChild(HAnimSegment330)
HAnimJoint361 = x3d.HAnimJoint()
HAnimJoint361.setDEF("hanim_r_midtarsal")
HAnimJoint361.setName("r_midtarsal")
HAnimJoint361.setCenter(x3d.doubleToFloat([-0.0801,0,0.0368]))
HAnimSegment362 = x3d.HAnimSegment()
HAnimSegment362.setDEF("hanim_r_middistal")
HAnimSegment362.setName("r_middistal")
Transform363 = x3d.Transform()
Transform363.setTranslation(x3d.doubleToFloat([-0.0801,0,0.0368]))
Shape364 = x3d.Shape()
Appearance365 = x3d.Appearance()
Material366 = x3d.Material()
Material366.setUSE("JOINT_COLOR")

Appearance365.setMaterial(Material366)

Shape364.setAppearance(Appearance365)
IndexedFaceSet367 = x3d.IndexedFaceSet()
IndexedFaceSet367.setCreaseAngle(0.5)
IndexedFaceSet367.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate368 = x3d.Coordinate()
Coordinate368.setUSE("points")

IndexedFaceSet367.setCoord(Coordinate368)

Shape364.setGeometry(IndexedFaceSet367)

Transform363.addChild(Shape364)

HAnimSegment362.addChild(Transform363)
HAnimSite369 = x3d.HAnimSite()
HAnimSite369.setDEF("hanim_r_middistal_tip")
HAnimSite369.setName("r_middistal_tip")
HAnimSite369.setTranslation(x3d.doubleToFloat([-0.1043,-0.0227,0.145]))
Shape370 = x3d.Shape()
Appearance371 = x3d.Appearance()
Material372 = x3d.Material()
Material372.setUSE("HAND_FEET_COLOR")

Appearance371.setMaterial(Material372)

Shape370.setAppearance(Appearance371)
IndexedFaceSet373 = x3d.IndexedFaceSet()
IndexedFaceSet373.setCreaseAngle(0.5)
IndexedFaceSet373.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate374 = x3d.Coordinate()
Coordinate374.setUSE("points")

IndexedFaceSet373.setCoord(Coordinate374)

Shape370.setGeometry(IndexedFaceSet373)

HAnimSite369.addChild(Shape370)

HAnimSegment362.addChild(HAnimSite369)
HAnimSite375 = x3d.HAnimSite()
HAnimSite375.setDEF("hanim_r_metatarsal_pha5_pt")
HAnimSite375.setName("r_metatarsal_pha5_pt")
HAnimSite375.setTranslation(x3d.doubleToFloat([-0.1523,0.0166,0.0895]))
Shape376 = x3d.Shape()
Appearance377 = x3d.Appearance()
Material378 = x3d.Material()
Material378.setUSE("HAND_FEET_COLOR")

Appearance377.setMaterial(Material378)

Shape376.setAppearance(Appearance377)
IndexedFaceSet379 = x3d.IndexedFaceSet()
IndexedFaceSet379.setCreaseAngle(0.5)
IndexedFaceSet379.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate380 = x3d.Coordinate()
Coordinate380.setUSE("points")

IndexedFaceSet379.setCoord(Coordinate380)

Shape376.setGeometry(IndexedFaceSet379)

HAnimSite375.addChild(Shape376)

HAnimSegment362.addChild(HAnimSite375)
HAnimSite381 = x3d.HAnimSite()
HAnimSite381.setDEF("hanim_r_metatarsal_pha1_pt")
HAnimSite381.setName("r_metatarsal_pha1_pt")
HAnimSite381.setTranslation(x3d.doubleToFloat([-0.0521,0.026,0.0127]))
Shape382 = x3d.Shape()
Appearance383 = x3d.Appearance()
Material384 = x3d.Material()
Material384.setUSE("HAND_FEET_COLOR")

Appearance383.setMaterial(Material384)

Shape382.setAppearance(Appearance383)
IndexedFaceSet385 = x3d.IndexedFaceSet()
IndexedFaceSet385.setCreaseAngle(0.5)
IndexedFaceSet385.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate386 = x3d.Coordinate()
Coordinate386.setUSE("points")

IndexedFaceSet385.setCoord(Coordinate386)

Shape382.setGeometry(IndexedFaceSet385)

HAnimSite381.addChild(Shape382)

HAnimSegment362.addChild(HAnimSite381)
HAnimSite387 = x3d.HAnimSite()
HAnimSite387.setDEF("hanim_r_digit2_pt")
HAnimSite387.setName("r_digit2_pt")
HAnimSite387.setTranslation(x3d.doubleToFloat([-0.0883,0.0134,0.1383]))
Shape388 = x3d.Shape()
Appearance389 = x3d.Appearance()
Material390 = x3d.Material()
Material390.setUSE("HAND_FEET_COLOR")

Appearance389.setMaterial(Material390)

Shape388.setAppearance(Appearance389)
IndexedFaceSet391 = x3d.IndexedFaceSet()
IndexedFaceSet391.setCreaseAngle(0.5)
IndexedFaceSet391.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate392 = x3d.Coordinate()
Coordinate392.setUSE("points")

IndexedFaceSet391.setCoord(Coordinate392)

Shape388.setGeometry(IndexedFaceSet391)

HAnimSite387.addChild(Shape388)

HAnimSegment362.addChild(HAnimSite387)

HAnimJoint361.addChild(HAnimSegment362)

HAnimJoint329.addChild(HAnimJoint361)

HAnimJoint321.addChild(HAnimJoint329)

HAnimJoint295.addChild(HAnimJoint321)

HAnimJoint113.addChild(HAnimJoint295)

HAnimJoint98.addChild(HAnimJoint113)
HAnimJoint393 = x3d.HAnimJoint()
HAnimJoint393.setDEF("hanim_vl5")
HAnimJoint393.setName("vl5")
HAnimJoint393.setCenter(x3d.doubleToFloat([0.0028,1.0568,-0.0776]))
HAnimSegment394 = x3d.HAnimSegment()
HAnimSegment394.setDEF("hanim_l5")
HAnimSegment394.setName("l5")
Transform395 = x3d.Transform()
Transform395.setTranslation(x3d.doubleToFloat([0.0028,1.0568,-0.0776]))
Shape396 = x3d.Shape()
Appearance397 = x3d.Appearance()
Material398 = x3d.Material()
Material398.setUSE("REC_SPINAL_COLOR")

Appearance397.setMaterial(Material398)

Shape396.setAppearance(Appearance397)
IndexedFaceSet399 = x3d.IndexedFaceSet()
IndexedFaceSet399.setCreaseAngle(0.5)
IndexedFaceSet399.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate400 = x3d.Coordinate()
Coordinate400.setUSE("points")

IndexedFaceSet399.setCoord(Coordinate400)

Shape396.setGeometry(IndexedFaceSet399)

Transform395.addChild(Shape396)

HAnimSegment394.addChild(Transform395)

HAnimJoint393.addChild(HAnimSegment394)
HAnimJoint401 = x3d.HAnimJoint()
HAnimJoint401.setDEF("hanim_vl4")
HAnimJoint401.setName("vl4")
HAnimJoint401.setCenter(x3d.doubleToFloat([0.0035,1.0925,-0.0787]))
HAnimSegment402 = x3d.HAnimSegment()
HAnimSegment402.setDEF("hanim_l4")
HAnimSegment402.setName("l4")
Transform403 = x3d.Transform()
Transform403.setTranslation(x3d.doubleToFloat([0.0035,1.0925,-0.0787]))
Shape404 = x3d.Shape()
Appearance405 = x3d.Appearance()
Material406 = x3d.Material()
Material406.setUSE("SPINAL_COLOR")

Appearance405.setMaterial(Material406)

Shape404.setAppearance(Appearance405)
IndexedFaceSet407 = x3d.IndexedFaceSet()
IndexedFaceSet407.setCreaseAngle(0.5)
IndexedFaceSet407.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate408 = x3d.Coordinate()
Coordinate408.setUSE("points")

IndexedFaceSet407.setCoord(Coordinate408)

Shape404.setGeometry(IndexedFaceSet407)

Transform403.addChild(Shape404)

HAnimSegment402.addChild(Transform403)

HAnimJoint401.addChild(HAnimSegment402)
HAnimJoint409 = x3d.HAnimJoint()
HAnimJoint409.setDEF("hanim_vl3")
HAnimJoint409.setName("vl3")
HAnimJoint409.setCenter(x3d.doubleToFloat([0.0041,1.1276,-0.0796]))
HAnimSegment410 = x3d.HAnimSegment()
HAnimSegment410.setDEF("hanim_l3")
HAnimSegment410.setName("l3")
Transform411 = x3d.Transform()
Transform411.setTranslation(x3d.doubleToFloat([0.0041,1.1276,-0.0796]))
Shape412 = x3d.Shape()
Appearance413 = x3d.Appearance()
Material414 = x3d.Material()
Material414.setUSE("REC_SPINAL_COLOR")

Appearance413.setMaterial(Material414)

Shape412.setAppearance(Appearance413)
IndexedFaceSet415 = x3d.IndexedFaceSet()
IndexedFaceSet415.setCreaseAngle(0.5)
IndexedFaceSet415.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate416 = x3d.Coordinate()
Coordinate416.setUSE("points")

IndexedFaceSet415.setCoord(Coordinate416)

Shape412.setGeometry(IndexedFaceSet415)

Transform411.addChild(Shape412)

HAnimSegment410.addChild(Transform411)

HAnimJoint409.addChild(HAnimSegment410)
HAnimJoint417 = x3d.HAnimJoint()
HAnimJoint417.setDEF("hanim_vl2")
HAnimJoint417.setName("vl2")
HAnimJoint417.setCenter(x3d.doubleToFloat([0.0045,1.1546,-0.08]))
HAnimSegment418 = x3d.HAnimSegment()
HAnimSegment418.setDEF("hanim_l2")
HAnimSegment418.setName("l2")
Transform419 = x3d.Transform()
Transform419.setTranslation(x3d.doubleToFloat([0.0045,1.1546,-0.08]))
Shape420 = x3d.Shape()
Appearance421 = x3d.Appearance()
Material422 = x3d.Material()
Material422.setUSE("SPINAL_COLOR")

Appearance421.setMaterial(Material422)

Shape420.setAppearance(Appearance421)
IndexedFaceSet423 = x3d.IndexedFaceSet()
IndexedFaceSet423.setCreaseAngle(0.5)
IndexedFaceSet423.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate424 = x3d.Coordinate()
Coordinate424.setUSE("points")

IndexedFaceSet423.setCoord(Coordinate424)

Shape420.setGeometry(IndexedFaceSet423)

Transform419.addChild(Shape420)

HAnimSegment418.addChild(Transform419)

HAnimJoint417.addChild(HAnimSegment418)
HAnimJoint425 = x3d.HAnimJoint()
HAnimJoint425.setDEF("hanim_vl1")
HAnimJoint425.setName("vl1")
HAnimJoint425.setCenter(x3d.doubleToFloat([0.0048,1.1912,-0.0805]))
HAnimSegment426 = x3d.HAnimSegment()
HAnimSegment426.setDEF("hanim_l1")
HAnimSegment426.setName("l1")
Transform427 = x3d.Transform()
Transform427.setTranslation(x3d.doubleToFloat([0.0048,1.1912,-0.0805]))
Shape428 = x3d.Shape()
Appearance429 = x3d.Appearance()
Material430 = x3d.Material()
Material430.setUSE("REC_SPINAL_COLOR")

Appearance429.setMaterial(Material430)

Shape428.setAppearance(Appearance429)
IndexedFaceSet431 = x3d.IndexedFaceSet()
IndexedFaceSet431.setCreaseAngle(0.5)
IndexedFaceSet431.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate432 = x3d.Coordinate()
Coordinate432.setUSE("points")

IndexedFaceSet431.setCoord(Coordinate432)

Shape428.setGeometry(IndexedFaceSet431)

Transform427.addChild(Shape428)

HAnimSegment426.addChild(Transform427)

HAnimJoint425.addChild(HAnimSegment426)
HAnimJoint433 = x3d.HAnimJoint()
HAnimJoint433.setDEF("hanim_vt12")
HAnimJoint433.setName("vt12")
HAnimJoint433.setCenter(x3d.doubleToFloat([0.0051,1.2278,-0.0808]))
HAnimSegment434 = x3d.HAnimSegment()
HAnimSegment434.setDEF("hanim_t12")
HAnimSegment434.setName("t12")
Transform435 = x3d.Transform()
Transform435.setTranslation(x3d.doubleToFloat([0.0051,1.2278,-0.0808]))
Shape436 = x3d.Shape()
Appearance437 = x3d.Appearance()
Material438 = x3d.Material()
Material438.setUSE("SPINAL_COLOR")

Appearance437.setMaterial(Material438)

Shape436.setAppearance(Appearance437)
IndexedFaceSet439 = x3d.IndexedFaceSet()
IndexedFaceSet439.setCreaseAngle(0.5)
IndexedFaceSet439.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate440 = x3d.Coordinate()
Coordinate440.setUSE("points")

IndexedFaceSet439.setCoord(Coordinate440)

Shape436.setGeometry(IndexedFaceSet439)

Transform435.addChild(Shape436)

HAnimSegment434.addChild(Transform435)

HAnimJoint433.addChild(HAnimSegment434)
HAnimJoint441 = x3d.HAnimJoint()
HAnimJoint441.setDEF("hanim_vt11")
HAnimJoint441.setName("vt11")
HAnimJoint441.setCenter(x3d.doubleToFloat([0.0053,1.2679,-0.081]))
HAnimSegment442 = x3d.HAnimSegment()
HAnimSegment442.setDEF("hanim_t11")
HAnimSegment442.setName("t11")
Transform443 = x3d.Transform()
Transform443.setTranslation(x3d.doubleToFloat([0.0053,1.2679,-0.081]))
Shape444 = x3d.Shape()
Appearance445 = x3d.Appearance()
Material446 = x3d.Material()
Material446.setUSE("SPINAL_COLOR")

Appearance445.setMaterial(Material446)

Shape444.setAppearance(Appearance445)
IndexedFaceSet447 = x3d.IndexedFaceSet()
IndexedFaceSet447.setCreaseAngle(0.5)
IndexedFaceSet447.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate448 = x3d.Coordinate()
Coordinate448.setUSE("points")

IndexedFaceSet447.setCoord(Coordinate448)

Shape444.setGeometry(IndexedFaceSet447)

Transform443.addChild(Shape444)

HAnimSegment442.addChild(Transform443)

HAnimJoint441.addChild(HAnimSegment442)
HAnimJoint449 = x3d.HAnimJoint()
HAnimJoint449.setDEF("hanim_vt10")
HAnimJoint449.setName("vt10")
HAnimJoint449.setCenter(x3d.doubleToFloat([0.0056,1.2848,-0.0822]))
HAnimSegment450 = x3d.HAnimSegment()
HAnimSegment450.setDEF("hanim_t10")
HAnimSegment450.setName("t10")
Transform451 = x3d.Transform()
Transform451.setTranslation(x3d.doubleToFloat([0.0056,1.2848,-0.0822]))
Shape452 = x3d.Shape()
Appearance453 = x3d.Appearance()
Material454 = x3d.Material()
Material454.setUSE("REC_SPINAL_COLOR")

Appearance453.setMaterial(Material454)

Shape452.setAppearance(Appearance453)
IndexedFaceSet455 = x3d.IndexedFaceSet()
IndexedFaceSet455.setCreaseAngle(0.5)
IndexedFaceSet455.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate456 = x3d.Coordinate()
Coordinate456.setUSE("points")

IndexedFaceSet455.setCoord(Coordinate456)

Shape452.setGeometry(IndexedFaceSet455)

Transform451.addChild(Shape452)

HAnimSegment450.addChild(Transform451)

HAnimJoint449.addChild(HAnimSegment450)
HAnimJoint457 = x3d.HAnimJoint()
HAnimJoint457.setDEF("hanim_vt9")
HAnimJoint457.setName("vt9")
HAnimJoint457.setCenter(x3d.doubleToFloat([0.0057,1.3126,-0.0838]))
HAnimSegment458 = x3d.HAnimSegment()
HAnimSegment458.setDEF("hanim_t9")
HAnimSegment458.setName("t9")
Transform459 = x3d.Transform()
Transform459.setTranslation(x3d.doubleToFloat([0.0057,1.3126,-0.0838]))
Shape460 = x3d.Shape()
Appearance461 = x3d.Appearance()
Material462 = x3d.Material()
Material462.setUSE("SPINAL_COLOR")

Appearance461.setMaterial(Material462)

Shape460.setAppearance(Appearance461)
IndexedFaceSet463 = x3d.IndexedFaceSet()
IndexedFaceSet463.setCreaseAngle(0.5)
IndexedFaceSet463.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate464 = x3d.Coordinate()
Coordinate464.setUSE("points")

IndexedFaceSet463.setCoord(Coordinate464)

Shape460.setGeometry(IndexedFaceSet463)

Transform459.addChild(Shape460)

HAnimSegment458.addChild(Transform459)

HAnimJoint457.addChild(HAnimSegment458)
HAnimJoint465 = x3d.HAnimJoint()
HAnimJoint465.setDEF("hanim_vt8")
HAnimJoint465.setName("vt8")
HAnimJoint465.setCenter(x3d.doubleToFloat([0.0057,1.3382,-0.0845]))
HAnimSegment466 = x3d.HAnimSegment()
HAnimSegment466.setDEF("hanim_t8")
HAnimSegment466.setName("t8")
Transform467 = x3d.Transform()
Transform467.setTranslation(x3d.doubleToFloat([0.0057,1.3382,-0.0845]))
Shape468 = x3d.Shape()
Appearance469 = x3d.Appearance()
Material470 = x3d.Material()
Material470.setUSE("SPINAL_COLOR")

Appearance469.setMaterial(Material470)

Shape468.setAppearance(Appearance469)
IndexedFaceSet471 = x3d.IndexedFaceSet()
IndexedFaceSet471.setCreaseAngle(0.5)
IndexedFaceSet471.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate472 = x3d.Coordinate()
Coordinate472.setUSE("points")

IndexedFaceSet471.setCoord(Coordinate472)

Shape468.setGeometry(IndexedFaceSet471)

Transform467.addChild(Shape468)

HAnimSegment466.addChild(Transform467)

HAnimJoint465.addChild(HAnimSegment466)
HAnimJoint473 = x3d.HAnimJoint()
HAnimJoint473.setDEF("hanim_vt7")
HAnimJoint473.setName("vt7")
HAnimJoint473.setCenter(x3d.doubleToFloat([0.0058,1.3625,-0.0833]))
HAnimSegment474 = x3d.HAnimSegment()
HAnimSegment474.setDEF("hanim_t7")
HAnimSegment474.setName("t7")
Transform475 = x3d.Transform()
Transform475.setTranslation(x3d.doubleToFloat([0.0058,1.3625,-0.0833]))
Shape476 = x3d.Shape()
Appearance477 = x3d.Appearance()
Material478 = x3d.Material()
Material478.setUSE("SPINAL_COLOR")

Appearance477.setMaterial(Material478)

Shape476.setAppearance(Appearance477)
IndexedFaceSet479 = x3d.IndexedFaceSet()
IndexedFaceSet479.setCreaseAngle(0.5)
IndexedFaceSet479.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate480 = x3d.Coordinate()
Coordinate480.setUSE("points")

IndexedFaceSet479.setCoord(Coordinate480)

Shape476.setGeometry(IndexedFaceSet479)

Transform475.addChild(Shape476)

HAnimSegment474.addChild(Transform475)

HAnimJoint473.addChild(HAnimSegment474)
HAnimJoint481 = x3d.HAnimJoint()
HAnimJoint481.setDEF("hanim_vt6")
HAnimJoint481.setName("vt6")
HAnimJoint481.setCenter(x3d.doubleToFloat([0.0059,1.3866,-0.08]))
HAnimSegment482 = x3d.HAnimSegment()
HAnimSegment482.setDEF("hanim_t6")
HAnimSegment482.setName("t6")
Transform483 = x3d.Transform()
Transform483.setTranslation(x3d.doubleToFloat([0.0059,1.3866,-0.08]))
Shape484 = x3d.Shape()
Appearance485 = x3d.Appearance()
Material486 = x3d.Material()
Material486.setUSE("REC_SPINAL_COLOR")

Appearance485.setMaterial(Material486)

Shape484.setAppearance(Appearance485)
IndexedFaceSet487 = x3d.IndexedFaceSet()
IndexedFaceSet487.setCreaseAngle(0.5)
IndexedFaceSet487.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate488 = x3d.Coordinate()
Coordinate488.setUSE("points")

IndexedFaceSet487.setCoord(Coordinate488)

Shape484.setGeometry(IndexedFaceSet487)

Transform483.addChild(Shape484)

HAnimSegment482.addChild(Transform483)

HAnimJoint481.addChild(HAnimSegment482)
HAnimJoint489 = x3d.HAnimJoint()
HAnimJoint489.setDEF("hanim_vt5")
HAnimJoint489.setName("vt5")
HAnimJoint489.setCenter(x3d.doubleToFloat([0.006,1.4102,-0.0745]))
HAnimSegment490 = x3d.HAnimSegment()
HAnimSegment490.setDEF("hanim_t5")
HAnimSegment490.setName("t5")
Transform491 = x3d.Transform()
Transform491.setTranslation(x3d.doubleToFloat([0.006,1.4102,-0.0745]))
Shape492 = x3d.Shape()
Appearance493 = x3d.Appearance()
Material494 = x3d.Material()
Material494.setUSE("SPINAL_COLOR")

Appearance493.setMaterial(Material494)

Shape492.setAppearance(Appearance493)
IndexedFaceSet495 = x3d.IndexedFaceSet()
IndexedFaceSet495.setCreaseAngle(0.5)
IndexedFaceSet495.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate496 = x3d.Coordinate()
Coordinate496.setUSE("points")

IndexedFaceSet495.setCoord(Coordinate496)

Shape492.setGeometry(IndexedFaceSet495)

Transform491.addChild(Shape492)

HAnimSegment490.addChild(Transform491)

HAnimJoint489.addChild(HAnimSegment490)
HAnimJoint497 = x3d.HAnimJoint()
HAnimJoint497.setDEF("hanim_vt4")
HAnimJoint497.setName("vt4")
HAnimJoint497.setCenter(x3d.doubleToFloat([0.0061,1.432,-0.0675]))
HAnimSegment498 = x3d.HAnimSegment()
HAnimSegment498.setDEF("hanim_t4")
HAnimSegment498.setName("t4")
Transform499 = x3d.Transform()
Transform499.setTranslation(x3d.doubleToFloat([0.0061,1.432,-0.0675]))
Shape500 = x3d.Shape()
Appearance501 = x3d.Appearance()
Material502 = x3d.Material()
Material502.setUSE("SPINAL_COLOR")

Appearance501.setMaterial(Material502)

Shape500.setAppearance(Appearance501)
IndexedFaceSet503 = x3d.IndexedFaceSet()
IndexedFaceSet503.setCreaseAngle(0.5)
IndexedFaceSet503.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate504 = x3d.Coordinate()
Coordinate504.setUSE("points")

IndexedFaceSet503.setCoord(Coordinate504)

Shape500.setGeometry(IndexedFaceSet503)

Transform499.addChild(Shape500)

HAnimSegment498.addChild(Transform499)

HAnimJoint497.addChild(HAnimSegment498)
HAnimJoint505 = x3d.HAnimJoint()
HAnimJoint505.setDEF("hanim_vt3")
HAnimJoint505.setName("vt3")
HAnimJoint505.setCenter(x3d.doubleToFloat([0.0062,1.4583,-0.057]))
HAnimSegment506 = x3d.HAnimSegment()
HAnimSegment506.setDEF("hanim_t3")
HAnimSegment506.setName("t3")
Transform507 = x3d.Transform()
Transform507.setTranslation(x3d.doubleToFloat([0.0062,1.4583,-0.057]))
Shape508 = x3d.Shape()
Appearance509 = x3d.Appearance()
Material510 = x3d.Material()
Material510.setUSE("SPINAL_COLOR")

Appearance509.setMaterial(Material510)

Shape508.setAppearance(Appearance509)
IndexedFaceSet511 = x3d.IndexedFaceSet()
IndexedFaceSet511.setCreaseAngle(0.5)
IndexedFaceSet511.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate512 = x3d.Coordinate()
Coordinate512.setUSE("points")

IndexedFaceSet511.setCoord(Coordinate512)

Shape508.setGeometry(IndexedFaceSet511)

Transform507.addChild(Shape508)

HAnimSegment506.addChild(Transform507)

HAnimJoint505.addChild(HAnimSegment506)
HAnimJoint513 = x3d.HAnimJoint()
HAnimJoint513.setDEF("hanim_vt2")
HAnimJoint513.setName("vt2")
HAnimJoint513.setCenter(x3d.doubleToFloat([0.0063,1.4761,-0.0484]))
HAnimSegment514 = x3d.HAnimSegment()
HAnimSegment514.setDEF("hanim_t2")
HAnimSegment514.setName("t2")
Transform515 = x3d.Transform()
Transform515.setTranslation(x3d.doubleToFloat([0.0063,1.4761,-0.0484]))
Shape516 = x3d.Shape()
Appearance517 = x3d.Appearance()
Material518 = x3d.Material()
Material518.setUSE("SPINAL_COLOR")

Appearance517.setMaterial(Material518)

Shape516.setAppearance(Appearance517)
IndexedFaceSet519 = x3d.IndexedFaceSet()
IndexedFaceSet519.setCreaseAngle(0.5)
IndexedFaceSet519.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate520 = x3d.Coordinate()
Coordinate520.setUSE("points")

IndexedFaceSet519.setCoord(Coordinate520)

Shape516.setGeometry(IndexedFaceSet519)

Transform515.addChild(Shape516)

HAnimSegment514.addChild(Transform515)

HAnimJoint513.addChild(HAnimSegment514)
HAnimJoint521 = x3d.HAnimJoint()
HAnimJoint521.setDEF("hanim_vt1")
HAnimJoint521.setName("vt1")
HAnimJoint521.setCenter(x3d.doubleToFloat([0.0065,1.4951,-0.0387]))
HAnimSegment522 = x3d.HAnimSegment()
HAnimSegment522.setDEF("hanim_t1")
HAnimSegment522.setName("t1")
Transform523 = x3d.Transform()
Transform523.setTranslation(x3d.doubleToFloat([0.0065,1.4951,-0.0387]))
Shape524 = x3d.Shape()
Appearance525 = x3d.Appearance()
Material526 = x3d.Material()
Material526.setUSE("REC_SPINAL_COLOR")

Appearance525.setMaterial(Material526)

Shape524.setAppearance(Appearance525)
IndexedFaceSet527 = x3d.IndexedFaceSet()
IndexedFaceSet527.setCreaseAngle(0.5)
IndexedFaceSet527.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate528 = x3d.Coordinate()
Coordinate528.setUSE("points")

IndexedFaceSet527.setCoord(Coordinate528)

Shape524.setGeometry(IndexedFaceSet527)

Transform523.addChild(Shape524)

HAnimSegment522.addChild(Transform523)

HAnimJoint521.addChild(HAnimSegment522)
HAnimJoint529 = x3d.HAnimJoint()
HAnimJoint529.setDEF("hanim_l_shoulder")
HAnimJoint529.setName("l_shoulder")
HAnimJoint529.setCenter(x3d.doubleToFloat([0.2029,1.4376,-0.0387]))
HAnimSegment530 = x3d.HAnimSegment()
HAnimSegment530.setDEF("hanim_l_upperarm")
HAnimSegment530.setName("l_upperarm")
Transform531 = x3d.Transform()
Transform531.setTranslation(x3d.doubleToFloat([0.2029,1.4376,-0.0387]))
Shape532 = x3d.Shape()
Appearance533 = x3d.Appearance()
Material534 = x3d.Material()
Material534.setUSE("MIN_COLOR")

Appearance533.setMaterial(Material534)

Shape532.setAppearance(Appearance533)
IndexedFaceSet535 = x3d.IndexedFaceSet()
IndexedFaceSet535.setCreaseAngle(0.5)
IndexedFaceSet535.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate536 = x3d.Coordinate()
Coordinate536.setUSE("points")

IndexedFaceSet535.setCoord(Coordinate536)

Shape532.setGeometry(IndexedFaceSet535)

Transform531.addChild(Shape532)

HAnimSegment530.addChild(Transform531)
Transform537 = x3d.Transform()
Transform537.setDEF("l_upperarm_adjust")
Transform537.setTranslation(x3d.doubleToFloat([0.2029,1.4376,-0.0387]))
Transform537.setRotation(x3d.doubleToFloat([1,0,0,0.119]))
Transform537.setCenter(x3d.doubleToFloat([0.182,1.22,-0.047]))

HAnimSegment530.addChild(Transform537)
HAnimSite538 = x3d.HAnimSite()
HAnimSite538.setDEF("hanim_l_humeral_lateral_epicn_pt")
HAnimSite538.setName("l_humeral_lateral_epicn_pt")
HAnimSite538.setTranslation(x3d.doubleToFloat([0.228,1.1482,-0.11]))
Shape539 = x3d.Shape()
Appearance540 = x3d.Appearance()
Material541 = x3d.Material()
Material541.setUSE("SITE_COLOR")

Appearance540.setMaterial(Material541)

Shape539.setAppearance(Appearance540)
IndexedFaceSet542 = x3d.IndexedFaceSet()
IndexedFaceSet542.setCreaseAngle(0.5)
IndexedFaceSet542.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate543 = x3d.Coordinate()
Coordinate543.setUSE("points")

IndexedFaceSet542.setCoord(Coordinate543)

Shape539.setGeometry(IndexedFaceSet542)

HAnimSite538.addChild(Shape539)

HAnimSegment530.addChild(HAnimSite538)

HAnimJoint529.addChild(HAnimSegment530)
HAnimJoint544 = x3d.HAnimJoint()
HAnimJoint544.setDEF("hanim_l_elbow")
HAnimJoint544.setName("l_elbow")
HAnimJoint544.setCenter(x3d.doubleToFloat([0.2014,1.1357,-0.0682]))
HAnimSegment545 = x3d.HAnimSegment()
HAnimSegment545.setDEF("hanim_l_forearm")
HAnimSegment545.setName("l_forearm")
Transform546 = x3d.Transform()
Transform546.setTranslation(x3d.doubleToFloat([0.2014,1.1357,-0.0682]))
Shape547 = x3d.Shape()
Appearance548 = x3d.Appearance()
Material549 = x3d.Material()
Material549.setUSE("MIN_COLOR")

Appearance548.setMaterial(Material549)

Shape547.setAppearance(Appearance548)
IndexedFaceSet550 = x3d.IndexedFaceSet()
IndexedFaceSet550.setCreaseAngle(0.5)
IndexedFaceSet550.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate551 = x3d.Coordinate()
Coordinate551.setUSE("points")

IndexedFaceSet550.setCoord(Coordinate551)

Shape547.setGeometry(IndexedFaceSet550)

Transform546.addChild(Shape547)

HAnimSegment545.addChild(Transform546)
Transform552 = x3d.Transform()
Transform552.setDEF("l_forearm_adjust")
Transform552.setTranslation(x3d.doubleToFloat([0.2014,1.1357,-0.0682]))
Transform552.setRotation(x3d.doubleToFloat([-1,0,0,0.1]))
Transform552.setCenter(x3d.doubleToFloat([0.198,0.961,-0.0405]))

HAnimSegment545.addChild(Transform552)
HAnimSite553 = x3d.HAnimSite()
HAnimSite553.setDEF("hanim_l_radial_styloid_pt")
HAnimSite553.setName("l_radial_styloid_pt")
HAnimSite553.setTranslation(x3d.doubleToFloat([0.1901,0.8645,-0.0415]))
Shape554 = x3d.Shape()
Appearance555 = x3d.Appearance()
Material556 = x3d.Material()
Material556.setUSE("SITE_COLOR")

Appearance555.setMaterial(Material556)

Shape554.setAppearance(Appearance555)
IndexedFaceSet557 = x3d.IndexedFaceSet()
IndexedFaceSet557.setCreaseAngle(0.5)
IndexedFaceSet557.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate558 = x3d.Coordinate()
Coordinate558.setUSE("points")

IndexedFaceSet557.setCoord(Coordinate558)

Shape554.setGeometry(IndexedFaceSet557)

HAnimSite553.addChild(Shape554)

HAnimSegment545.addChild(HAnimSite553)
HAnimSite559 = x3d.HAnimSite()
HAnimSite559.setDEF("hanim_l_olecranon_pt")
HAnimSite559.setName("l_olecranon_pt")
HAnimSite559.setTranslation(x3d.doubleToFloat([-0.1962,1.1375,-0.1123]))
Shape560 = x3d.Shape()
Appearance561 = x3d.Appearance()
Material562 = x3d.Material()
Material562.setUSE("SITE_COLOR")

Appearance561.setMaterial(Material562)

Shape560.setAppearance(Appearance561)
IndexedFaceSet563 = x3d.IndexedFaceSet()
IndexedFaceSet563.setCreaseAngle(0.5)
IndexedFaceSet563.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate564 = x3d.Coordinate()
Coordinate564.setUSE("points")

IndexedFaceSet563.setCoord(Coordinate564)

Shape560.setGeometry(IndexedFaceSet563)

HAnimSite559.addChild(Shape560)

HAnimSegment545.addChild(HAnimSite559)
HAnimSite565 = x3d.HAnimSite()
HAnimSite565.setDEF("hanim_l_humeral_medial_epicn_pt")
HAnimSite565.setName("l_humeral_medial_epicn_pt")
HAnimSite565.setTranslation(x3d.doubleToFloat([0.1735,1.1272,-0.1113]))
Shape566 = x3d.Shape()
Appearance567 = x3d.Appearance()
Material568 = x3d.Material()
Material568.setUSE("SITE_COLOR")

Appearance567.setMaterial(Material568)

Shape566.setAppearance(Appearance567)
IndexedFaceSet569 = x3d.IndexedFaceSet()
IndexedFaceSet569.setCreaseAngle(0.5)
IndexedFaceSet569.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate570 = x3d.Coordinate()
Coordinate570.setUSE("points")

IndexedFaceSet569.setCoord(Coordinate570)

Shape566.setGeometry(IndexedFaceSet569)

HAnimSite565.addChild(Shape566)

HAnimSegment545.addChild(HAnimSite565)
HAnimSite571 = x3d.HAnimSite()
HAnimSite571.setDEF("hanim_l_radiale_pt")
HAnimSite571.setName("l_radiale_pt")
HAnimSite571.setTranslation(x3d.doubleToFloat([0.2182,1.1212,-0.1167]))
Shape572 = x3d.Shape()
Appearance573 = x3d.Appearance()
Material574 = x3d.Material()
Material574.setUSE("SITE_COLOR")

Appearance573.setMaterial(Material574)

Shape572.setAppearance(Appearance573)
IndexedFaceSet575 = x3d.IndexedFaceSet()
IndexedFaceSet575.setCreaseAngle(0.5)
IndexedFaceSet575.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate576 = x3d.Coordinate()
Coordinate576.setUSE("points")

IndexedFaceSet575.setCoord(Coordinate576)

Shape572.setGeometry(IndexedFaceSet575)

HAnimSite571.addChild(Shape572)

HAnimSegment545.addChild(HAnimSite571)

HAnimJoint544.addChild(HAnimSegment545)
HAnimJoint577 = x3d.HAnimJoint()
HAnimJoint577.setDEF("hanim_l_wrist")
HAnimJoint577.setName("l_wrist")
HAnimJoint577.setCenter(x3d.doubleToFloat([0.1984,0.8663,-0.0583]))
HAnimSegment578 = x3d.HAnimSegment()
HAnimSegment578.setDEF("hanim_l_hand")
HAnimSegment578.setName("l_hand")
Transform579 = x3d.Transform()
Transform579.setTranslation(x3d.doubleToFloat([0.1984,0.8663,-0.0583]))
Shape580 = x3d.Shape()
Appearance581 = x3d.Appearance()
Material582 = x3d.Material()
Material582.setUSE("MIN_COLOR")

Appearance581.setMaterial(Material582)

Shape580.setAppearance(Appearance581)
IndexedFaceSet583 = x3d.IndexedFaceSet()
IndexedFaceSet583.setCreaseAngle(0.5)
IndexedFaceSet583.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate584 = x3d.Coordinate()
Coordinate584.setUSE("points")

IndexedFaceSet583.setCoord(Coordinate584)

Shape580.setGeometry(IndexedFaceSet583)

Transform579.addChild(Shape580)

HAnimSegment578.addChild(Transform579)
Transform585 = x3d.Transform()
Transform585.setDEF("l_hand_adjust")
Transform585.setTranslation(x3d.doubleToFloat([0.1984,0.8663,-0.0583]))
Transform585.setRotation(x3d.doubleToFloat([-0.06361,-0.9967,0.04988,1.333]))
Transform585.setCenter(x3d.doubleToFloat([0.213,0.811,-0.0338]))

HAnimSegment578.addChild(Transform585)
HAnimSite586 = x3d.HAnimSite()
HAnimSite586.setDEF("hanim_l_hand_tip")
HAnimSite586.setName("l_hand_tip")
HAnimSite586.setTranslation(x3d.doubleToFloat([0.208,0.6731,-0.0491]))
Shape587 = x3d.Shape()
Appearance588 = x3d.Appearance()
Material589 = x3d.Material()
Material589.setUSE("SITE_COLOR")

Appearance588.setMaterial(Material589)

Shape587.setAppearance(Appearance588)
IndexedFaceSet590 = x3d.IndexedFaceSet()
IndexedFaceSet590.setCreaseAngle(0.5)
IndexedFaceSet590.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate591 = x3d.Coordinate()
Coordinate591.setUSE("points")

IndexedFaceSet590.setCoord(Coordinate591)

Shape587.setGeometry(IndexedFaceSet590)

HAnimSite586.addChild(Shape587)

HAnimSegment578.addChild(HAnimSite586)
HAnimSite592 = x3d.HAnimSite()
HAnimSite592.setDEF("hanim_l_metacarpal_pha2_pt")
HAnimSite592.setName("l_metacarpal_pha2_pt")
HAnimSite592.setTranslation(x3d.doubleToFloat([0.2009,0.8139,-0.0237]))
Shape593 = x3d.Shape()
Appearance594 = x3d.Appearance()
Material595 = x3d.Material()
Material595.setUSE("SITE_COLOR")

Appearance594.setMaterial(Material595)

Shape593.setAppearance(Appearance594)
IndexedFaceSet596 = x3d.IndexedFaceSet()
IndexedFaceSet596.setCreaseAngle(0.5)
IndexedFaceSet596.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate597 = x3d.Coordinate()
Coordinate597.setUSE("points")

IndexedFaceSet596.setCoord(Coordinate597)

Shape593.setGeometry(IndexedFaceSet596)

HAnimSite592.addChild(Shape593)

HAnimSegment578.addChild(HAnimSite592)
HAnimSite598 = x3d.HAnimSite()
HAnimSite598.setDEF("hanim_l_dactylion_pt")
HAnimSite598.setName("l_dactylion_pt")
HAnimSite598.setTranslation(x3d.doubleToFloat([0.2056,0.6743,-0.0482]))
Shape599 = x3d.Shape()
Appearance600 = x3d.Appearance()
Material601 = x3d.Material()
Material601.setUSE("SITE_COLOR")

Appearance600.setMaterial(Material601)

Shape599.setAppearance(Appearance600)
IndexedFaceSet602 = x3d.IndexedFaceSet()
IndexedFaceSet602.setCreaseAngle(0.5)
IndexedFaceSet602.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate603 = x3d.Coordinate()
Coordinate603.setUSE("points")

IndexedFaceSet602.setCoord(Coordinate603)

Shape599.setGeometry(IndexedFaceSet602)

HAnimSite598.addChild(Shape599)

HAnimSegment578.addChild(HAnimSite598)
HAnimSite604 = x3d.HAnimSite()
HAnimSite604.setDEF("hanim_l_ulnar_styloid_pt")
HAnimSite604.setName("l_ulnar_styloid_pt")
HAnimSite604.setTranslation(x3d.doubleToFloat([-0.2142,0.8529,-0.0648]))
Shape605 = x3d.Shape()
Appearance606 = x3d.Appearance()
Material607 = x3d.Material()
Material607.setUSE("SITE_COLOR")

Appearance606.setMaterial(Material607)

Shape605.setAppearance(Appearance606)
IndexedFaceSet608 = x3d.IndexedFaceSet()
IndexedFaceSet608.setCreaseAngle(0.5)
IndexedFaceSet608.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate609 = x3d.Coordinate()
Coordinate609.setUSE("points")

IndexedFaceSet608.setCoord(Coordinate609)

Shape605.setGeometry(IndexedFaceSet608)

HAnimSite604.addChild(Shape605)

HAnimSegment578.addChild(HAnimSite604)
HAnimSite610 = x3d.HAnimSite()
HAnimSite610.setDEF("hanim_l_metacarpal_pha5_pt")
HAnimSite610.setName("l_metacarpal_pha5_pt")
HAnimSite610.setTranslation(x3d.doubleToFloat([0.1929,0.786,-0.1122]))
Shape611 = x3d.Shape()
Appearance612 = x3d.Appearance()
Material613 = x3d.Material()
Material613.setUSE("SITE_COLOR")

Appearance612.setMaterial(Material613)

Shape611.setAppearance(Appearance612)
IndexedFaceSet614 = x3d.IndexedFaceSet()
IndexedFaceSet614.setCreaseAngle(0.5)
IndexedFaceSet614.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate615 = x3d.Coordinate()
Coordinate615.setUSE("points")

IndexedFaceSet614.setCoord(Coordinate615)

Shape611.setGeometry(IndexedFaceSet614)

HAnimSite610.addChild(Shape611)

HAnimSegment578.addChild(HAnimSite610)

HAnimJoint577.addChild(HAnimSegment578)
HAnimJoint616 = x3d.HAnimJoint()
HAnimJoint616.setDEF("hanim_l_thumb1")
HAnimJoint616.setName("l_thumb1")
HAnimJoint616.setCenter(x3d.doubleToFloat([0.1924,0.8472,-0.0534]))
HAnimSegment617 = x3d.HAnimSegment()
HAnimSegment617.setDEF("hanim_l_thumb_metacarpal")
HAnimSegment617.setName("l_thumb_metacarpal")
Transform618 = x3d.Transform()
Transform618.setTranslation(x3d.doubleToFloat([0.1924,0.8472,-0.0534]))
Shape619 = x3d.Shape()
Appearance620 = x3d.Appearance()
Material621 = x3d.Material()
Material621.setUSE("JOINT_COLOR")

Appearance620.setMaterial(Material621)

Shape619.setAppearance(Appearance620)
IndexedFaceSet622 = x3d.IndexedFaceSet()
IndexedFaceSet622.setCreaseAngle(0.5)
IndexedFaceSet622.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate623 = x3d.Coordinate()
Coordinate623.setUSE("points")

IndexedFaceSet622.setCoord(Coordinate623)

Shape619.setGeometry(IndexedFaceSet622)

Transform618.addChild(Shape619)

HAnimSegment617.addChild(Transform618)

HAnimJoint616.addChild(HAnimSegment617)
HAnimJoint624 = x3d.HAnimJoint()
HAnimJoint624.setDEF("hanim_l_thumb2")
HAnimJoint624.setName("l_thumb2")
HAnimJoint624.setCenter(x3d.doubleToFloat([0.1951,0.8226,0.0246]))
HAnimSegment625 = x3d.HAnimSegment()
HAnimSegment625.setDEF("hanim_l_thumb_proximal")
HAnimSegment625.setName("l_thumb_proximal")
Transform626 = x3d.Transform()
Transform626.setTranslation(x3d.doubleToFloat([0.1951,0.8226,0.0246]))
Shape627 = x3d.Shape()
Appearance628 = x3d.Appearance()
Material629 = x3d.Material()
Material629.setUSE("JOINT_COLOR")

Appearance628.setMaterial(Material629)

Shape627.setAppearance(Appearance628)
IndexedFaceSet630 = x3d.IndexedFaceSet()
IndexedFaceSet630.setCreaseAngle(0.5)
IndexedFaceSet630.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate631 = x3d.Coordinate()
Coordinate631.setUSE("points")

IndexedFaceSet630.setCoord(Coordinate631)

Shape627.setGeometry(IndexedFaceSet630)

Transform626.addChild(Shape627)

HAnimSegment625.addChild(Transform626)

HAnimJoint624.addChild(HAnimSegment625)
HAnimJoint632 = x3d.HAnimJoint()
HAnimJoint632.setDEF("hanim_l_thumb3")
HAnimJoint632.setName("l_thumb3")
HAnimJoint632.setCenter(x3d.doubleToFloat([0.1955,0.8159,0.0464]))
HAnimSegment633 = x3d.HAnimSegment()
HAnimSegment633.setDEF("hanim_l_thumb_distal")
HAnimSegment633.setName("l_thumb_distal")
Transform634 = x3d.Transform()
Transform634.setTranslation(x3d.doubleToFloat([0.1955,0.8159,0.0464]))
Shape635 = x3d.Shape()
Appearance636 = x3d.Appearance()
Material637 = x3d.Material()
Material637.setUSE("JOINT_COLOR")

Appearance636.setMaterial(Material637)

Shape635.setAppearance(Appearance636)
IndexedFaceSet638 = x3d.IndexedFaceSet()
IndexedFaceSet638.setCreaseAngle(0.5)
IndexedFaceSet638.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate639 = x3d.Coordinate()
Coordinate639.setUSE("points")

IndexedFaceSet638.setCoord(Coordinate639)

Shape635.setGeometry(IndexedFaceSet638)

Transform634.addChild(Shape635)

HAnimSegment633.addChild(Transform634)
HAnimSite640 = x3d.HAnimSite()
HAnimSite640.setDEF("hanim_l_thumb_distal_tip")
HAnimSite640.setName("l_thumb_distal_tip")
HAnimSite640.setTranslation(x3d.doubleToFloat([0.1982,0.8061,0.0759]))
Shape641 = x3d.Shape()
Appearance642 = x3d.Appearance()
Material643 = x3d.Material()
Material643.setUSE("HAND_FEET_COLOR")

Appearance642.setMaterial(Material643)

Shape641.setAppearance(Appearance642)
IndexedFaceSet644 = x3d.IndexedFaceSet()
IndexedFaceSet644.setCreaseAngle(0.5)
IndexedFaceSet644.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate645 = x3d.Coordinate()
Coordinate645.setUSE("points")

IndexedFaceSet644.setCoord(Coordinate645)

Shape641.setGeometry(IndexedFaceSet644)

HAnimSite640.addChild(Shape641)

HAnimSegment633.addChild(HAnimSite640)

HAnimJoint632.addChild(HAnimSegment633)

HAnimJoint624.addChild(HAnimJoint632)

HAnimJoint616.addChild(HAnimJoint624)

HAnimJoint577.addChild(HAnimJoint616)
HAnimJoint646 = x3d.HAnimJoint()
HAnimJoint646.setDEF("hanim_l_index0")
HAnimJoint646.setName("l_index0")
HAnimJoint646.setCenter(x3d.doubleToFloat([0.1983,0.8024,-0.028]))
HAnimSegment647 = x3d.HAnimSegment()
HAnimSegment647.setDEF("hanim_l_index_metacarpal")
HAnimSegment647.setName("l_index_metacarpal")
Transform648 = x3d.Transform()
Transform648.setTranslation(x3d.doubleToFloat([0.1983,0.8024,-0.028]))
Shape649 = x3d.Shape()
Appearance650 = x3d.Appearance()
Material651 = x3d.Material()
Material651.setUSE("JOINT_COLOR")

Appearance650.setMaterial(Material651)

Shape649.setAppearance(Appearance650)
IndexedFaceSet652 = x3d.IndexedFaceSet()
IndexedFaceSet652.setCreaseAngle(0.5)
IndexedFaceSet652.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate653 = x3d.Coordinate()
Coordinate653.setUSE("points")

IndexedFaceSet652.setCoord(Coordinate653)

Shape649.setGeometry(IndexedFaceSet652)

Transform648.addChild(Shape649)

HAnimSegment647.addChild(Transform648)

HAnimJoint646.addChild(HAnimSegment647)
HAnimJoint654 = x3d.HAnimJoint()
HAnimJoint654.setDEF("hanim_l_index1")
HAnimJoint654.setName("l_index1")
HAnimJoint654.setCenter(x3d.doubleToFloat([0.1983,0.7815,-0.028]))
HAnimSegment655 = x3d.HAnimSegment()
HAnimSegment655.setDEF("hanim_l_index_proximal")
HAnimSegment655.setName("l_index_proximal")
Transform656 = x3d.Transform()
Transform656.setTranslation(x3d.doubleToFloat([0.1983,0.7815,-0.028]))
Shape657 = x3d.Shape()
Appearance658 = x3d.Appearance()
Material659 = x3d.Material()
Material659.setUSE("JOINT_COLOR")

Appearance658.setMaterial(Material659)

Shape657.setAppearance(Appearance658)
IndexedFaceSet660 = x3d.IndexedFaceSet()
IndexedFaceSet660.setCreaseAngle(0.5)
IndexedFaceSet660.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate661 = x3d.Coordinate()
Coordinate661.setUSE("points")

IndexedFaceSet660.setCoord(Coordinate661)

Shape657.setGeometry(IndexedFaceSet660)

Transform656.addChild(Shape657)

HAnimSegment655.addChild(Transform656)

HAnimJoint654.addChild(HAnimSegment655)
HAnimJoint662 = x3d.HAnimJoint()
HAnimJoint662.setDEF("hanim_l_index2")
HAnimJoint662.setName("l_index2")
HAnimJoint662.setCenter(x3d.doubleToFloat([0.2017,0.7363,-0.0248]))
HAnimSegment663 = x3d.HAnimSegment()
HAnimSegment663.setDEF("hanim_l_index_middle")
HAnimSegment663.setName("l_index_middle")
Transform664 = x3d.Transform()
Transform664.setTranslation(x3d.doubleToFloat([0.2017,0.7363,-0.0248]))
Shape665 = x3d.Shape()
Appearance666 = x3d.Appearance()
Material667 = x3d.Material()
Material667.setUSE("JOINT_COLOR")

Appearance666.setMaterial(Material667)

Shape665.setAppearance(Appearance666)
IndexedFaceSet668 = x3d.IndexedFaceSet()
IndexedFaceSet668.setCreaseAngle(0.5)
IndexedFaceSet668.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate669 = x3d.Coordinate()
Coordinate669.setUSE("points")

IndexedFaceSet668.setCoord(Coordinate669)

Shape665.setGeometry(IndexedFaceSet668)

Transform664.addChild(Shape665)

HAnimSegment663.addChild(Transform664)

HAnimJoint662.addChild(HAnimSegment663)
HAnimJoint670 = x3d.HAnimJoint()
HAnimJoint670.setDEF("hanim_l_index3")
HAnimJoint670.setName("l_index3")
HAnimJoint670.setCenter(x3d.doubleToFloat([0.2028,0.7139,-0.0236]))
HAnimSegment671 = x3d.HAnimSegment()
HAnimSegment671.setDEF("hanim_l_index_distal")
HAnimSegment671.setName("l_index_distal")
Transform672 = x3d.Transform()
Transform672.setTranslation(x3d.doubleToFloat([0.2028,0.7139,-0.0236]))
Shape673 = x3d.Shape()
Appearance674 = x3d.Appearance()
Material675 = x3d.Material()
Material675.setUSE("JOINT_COLOR")

Appearance674.setMaterial(Material675)

Shape673.setAppearance(Appearance674)
IndexedFaceSet676 = x3d.IndexedFaceSet()
IndexedFaceSet676.setCreaseAngle(0.5)
IndexedFaceSet676.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate677 = x3d.Coordinate()
Coordinate677.setUSE("points")

IndexedFaceSet676.setCoord(Coordinate677)

Shape673.setGeometry(IndexedFaceSet676)

Transform672.addChild(Shape673)

HAnimSegment671.addChild(Transform672)
HAnimSite678 = x3d.HAnimSite()
HAnimSite678.setDEF("hanim_l_index_distal_tip")
HAnimSite678.setName("l_index_distal_tip")
HAnimSite678.setTranslation(x3d.doubleToFloat([0.2089,0.6858,-0.0245]))
Shape679 = x3d.Shape()
Appearance680 = x3d.Appearance()
Material681 = x3d.Material()
Material681.setUSE("HAND_FEET_COLOR")

Appearance680.setMaterial(Material681)

Shape679.setAppearance(Appearance680)
IndexedFaceSet682 = x3d.IndexedFaceSet()
IndexedFaceSet682.setCreaseAngle(0.5)
IndexedFaceSet682.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate683 = x3d.Coordinate()
Coordinate683.setUSE("points")

IndexedFaceSet682.setCoord(Coordinate683)

Shape679.setGeometry(IndexedFaceSet682)

HAnimSite678.addChild(Shape679)

HAnimSegment671.addChild(HAnimSite678)

HAnimJoint670.addChild(HAnimSegment671)

HAnimJoint662.addChild(HAnimJoint670)

HAnimJoint654.addChild(HAnimJoint662)

HAnimJoint646.addChild(HAnimJoint654)

HAnimJoint577.addChild(HAnimJoint646)

HAnimJoint544.addChild(HAnimJoint577)

HAnimJoint529.addChild(HAnimJoint544)

HAnimJoint521.addChild(HAnimJoint529)
HAnimJoint684 = x3d.HAnimJoint()
HAnimJoint684.setDEF("hanim_r_shoulder")
HAnimJoint684.setName("r_shoulder")
HAnimJoint684.setCenter(x3d.doubleToFloat([-0.1907,1.4407,-0.0325]))
HAnimSegment685 = x3d.HAnimSegment()
HAnimSegment685.setDEF("hanim_r_upperarm")
HAnimSegment685.setName("r_upperarm")
Transform686 = x3d.Transform()
Transform686.setTranslation(x3d.doubleToFloat([-0.1907,1.4407,-0.0325]))
Shape687 = x3d.Shape()
Appearance688 = x3d.Appearance()
Material689 = x3d.Material()
Material689.setUSE("MIN_COLOR")

Appearance688.setMaterial(Material689)

Shape687.setAppearance(Appearance688)
IndexedFaceSet690 = x3d.IndexedFaceSet()
IndexedFaceSet690.setCreaseAngle(0.5)
IndexedFaceSet690.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate691 = x3d.Coordinate()
Coordinate691.setUSE("points")

IndexedFaceSet690.setCoord(Coordinate691)

Shape687.setGeometry(IndexedFaceSet690)

Transform686.addChild(Shape687)

HAnimSegment685.addChild(Transform686)
Transform692 = x3d.Transform()
Transform692.setDEF("r_upperarm_adjust")
Transform692.setTranslation(x3d.doubleToFloat([-0.1907,1.4407,-0.0325]))
Transform692.setRotation(x3d.doubleToFloat([1,0,0,0.0836]))
Transform692.setCenter(x3d.doubleToFloat([-0.182,1.22,-0.047]))

HAnimSegment685.addChild(Transform692)
HAnimSite693 = x3d.HAnimSite()
HAnimSite693.setDEF("hanim_r_humeral_lateral_epicn_pt")
HAnimSite693.setName("r_humeral_lateral_epicn_pt")
HAnimSite693.setTranslation(x3d.doubleToFloat([-0.2224,1.1517,-0.1033]))
Shape694 = x3d.Shape()
Appearance695 = x3d.Appearance()
Material696 = x3d.Material()
Material696.setUSE("SITE_COLOR")

Appearance695.setMaterial(Material696)

Shape694.setAppearance(Appearance695)
IndexedFaceSet697 = x3d.IndexedFaceSet()
IndexedFaceSet697.setCreaseAngle(0.5)
IndexedFaceSet697.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate698 = x3d.Coordinate()
Coordinate698.setUSE("points")

IndexedFaceSet697.setCoord(Coordinate698)

Shape694.setGeometry(IndexedFaceSet697)

HAnimSite693.addChild(Shape694)

HAnimSegment685.addChild(HAnimSite693)

HAnimJoint684.addChild(HAnimSegment685)
HAnimJoint699 = x3d.HAnimJoint()
HAnimJoint699.setDEF("hanim_r_elbow")
HAnimJoint699.setName("r_elbow")
HAnimJoint699.setCenter(x3d.doubleToFloat([-0.1949,1.1388,-0.062]))
HAnimSegment700 = x3d.HAnimSegment()
HAnimSegment700.setDEF("hanim_r_forearm")
HAnimSegment700.setName("r_forearm")
Transform701 = x3d.Transform()
Transform701.setTranslation(x3d.doubleToFloat([-0.1949,1.1388,-0.062]))
Shape702 = x3d.Shape()
Appearance703 = x3d.Appearance()
Material704 = x3d.Material()
Material704.setUSE("MIN_COLOR")

Appearance703.setMaterial(Material704)

Shape702.setAppearance(Appearance703)
IndexedFaceSet705 = x3d.IndexedFaceSet()
IndexedFaceSet705.setCreaseAngle(0.5)
IndexedFaceSet705.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate706 = x3d.Coordinate()
Coordinate706.setUSE("points")

IndexedFaceSet705.setCoord(Coordinate706)

Shape702.setGeometry(IndexedFaceSet705)

Transform701.addChild(Shape702)

HAnimSegment700.addChild(Transform701)
Transform707 = x3d.Transform()
Transform707.setDEF("r_forearm_adjust")
Transform707.setTranslation(x3d.doubleToFloat([-0.1949,1.1388,-0.062]))
Transform707.setRotation(x3d.doubleToFloat([-1,0,0,0.1254]))
Transform707.setCenter(x3d.doubleToFloat([-0.198,0.961,-0.0397]))

HAnimSegment700.addChild(Transform707)
HAnimSite708 = x3d.HAnimSite()
HAnimSite708.setDEF("hanim_r_radial_styloid_pt")
HAnimSite708.setName("r_radial_styloid_pt")
HAnimSite708.setTranslation(x3d.doubleToFloat([-0.1884,0.8676,-0.036]))
Shape709 = x3d.Shape()
Appearance710 = x3d.Appearance()
Material711 = x3d.Material()
Material711.setUSE("SITE_COLOR")

Appearance710.setMaterial(Material711)

Shape709.setAppearance(Appearance710)
IndexedFaceSet712 = x3d.IndexedFaceSet()
IndexedFaceSet712.setCreaseAngle(0.5)
IndexedFaceSet712.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate713 = x3d.Coordinate()
Coordinate713.setUSE("points")

IndexedFaceSet712.setCoord(Coordinate713)

Shape709.setGeometry(IndexedFaceSet712)

HAnimSite708.addChild(Shape709)

HAnimSegment700.addChild(HAnimSite708)
HAnimSite714 = x3d.HAnimSite()
HAnimSite714.setDEF("hanim_r_olecranon_pt")
HAnimSite714.setName("r_olecranon_pt")
HAnimSite714.setTranslation(x3d.doubleToFloat([-0.1907,1.1405,-0.1065]))
Shape715 = x3d.Shape()
Appearance716 = x3d.Appearance()
Material717 = x3d.Material()
Material717.setUSE("SITE_COLOR")

Appearance716.setMaterial(Material717)

Shape715.setAppearance(Appearance716)
IndexedFaceSet718 = x3d.IndexedFaceSet()
IndexedFaceSet718.setCreaseAngle(0.5)
IndexedFaceSet718.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate719 = x3d.Coordinate()
Coordinate719.setUSE("points")

IndexedFaceSet718.setCoord(Coordinate719)

Shape715.setGeometry(IndexedFaceSet718)

HAnimSite714.addChild(Shape715)

HAnimSegment700.addChild(HAnimSite714)
HAnimSite720 = x3d.HAnimSite()
HAnimSite720.setDEF("hanim_r_humeral_medial_epicn_pt")
HAnimSite720.setName("r_humeral_medial_epicn_pt")
HAnimSite720.setTranslation(x3d.doubleToFloat([-0.168,1.1298,-0.1062]))
Shape721 = x3d.Shape()
Appearance722 = x3d.Appearance()
Material723 = x3d.Material()
Material723.setUSE("SITE_COLOR")

Appearance722.setMaterial(Material723)

Shape721.setAppearance(Appearance722)
IndexedFaceSet724 = x3d.IndexedFaceSet()
IndexedFaceSet724.setCreaseAngle(0.5)
IndexedFaceSet724.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate725 = x3d.Coordinate()
Coordinate725.setUSE("points")

IndexedFaceSet724.setCoord(Coordinate725)

Shape721.setGeometry(IndexedFaceSet724)

HAnimSite720.addChild(Shape721)

HAnimSegment700.addChild(HAnimSite720)
HAnimSite726 = x3d.HAnimSite()
HAnimSite726.setDEF("hanim_r_radiale_pt")
HAnimSite726.setName("r_radiale_pt")
HAnimSite726.setTranslation(x3d.doubleToFloat([-0.213,1.1305,-0.1091]))
Shape727 = x3d.Shape()
Appearance728 = x3d.Appearance()
Material729 = x3d.Material()
Material729.setUSE("SITE_COLOR")

Appearance728.setMaterial(Material729)

Shape727.setAppearance(Appearance728)
IndexedFaceSet730 = x3d.IndexedFaceSet()
IndexedFaceSet730.setCreaseAngle(0.5)
IndexedFaceSet730.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate731 = x3d.Coordinate()
Coordinate731.setUSE("points")

IndexedFaceSet730.setCoord(Coordinate731)

Shape727.setGeometry(IndexedFaceSet730)

HAnimSite726.addChild(Shape727)

HAnimSegment700.addChild(HAnimSite726)

HAnimJoint699.addChild(HAnimSegment700)
HAnimJoint732 = x3d.HAnimJoint()
HAnimJoint732.setDEF("hanim_r_wrist")
HAnimJoint732.setName("r_wrist")
HAnimJoint732.setCenter(x3d.doubleToFloat([-0.1959,0.8694,-0.0521]))
HAnimSegment733 = x3d.HAnimSegment()
HAnimSegment733.setDEF("hanim_r_hand")
HAnimSegment733.setName("r_hand")
Transform734 = x3d.Transform()
Transform734.setTranslation(x3d.doubleToFloat([-0.1959,0.8694,-0.0521]))
Shape735 = x3d.Shape()
Appearance736 = x3d.Appearance()
Material737 = x3d.Material()
Material737.setUSE("MIN_COLOR")

Appearance736.setMaterial(Material737)

Shape735.setAppearance(Appearance736)
IndexedFaceSet738 = x3d.IndexedFaceSet()
IndexedFaceSet738.setCreaseAngle(0.5)
IndexedFaceSet738.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate739 = x3d.Coordinate()
Coordinate739.setUSE("points")

IndexedFaceSet738.setCoord(Coordinate739)

Shape735.setGeometry(IndexedFaceSet738)

Transform734.addChild(Shape735)

HAnimSegment733.addChild(Transform734)
Transform740 = x3d.Transform()
Transform740.setDEF("r_hand_adjust")
Transform740.setRotation(x3d.doubleToFloat([-0.09024,0.994,-0.0624,1.216]))
Transform740.setCenter(x3d.doubleToFloat([-0.217,0.811,-0.0338]))

HAnimSegment733.addChild(Transform740)
HAnimSite741 = x3d.HAnimSite()
HAnimSite741.setDEF("hanim_r_hand_tip")
HAnimSite741.setName("r_hand_tip")
HAnimSite741.setTranslation(x3d.doubleToFloat([-0.1969,0.6758,-0.0427]))
Shape742 = x3d.Shape()
Appearance743 = x3d.Appearance()
Material744 = x3d.Material()
Material744.setUSE("SITE_COLOR")

Appearance743.setMaterial(Material744)

Shape742.setAppearance(Appearance743)
IndexedFaceSet745 = x3d.IndexedFaceSet()
IndexedFaceSet745.setCreaseAngle(0.5)
IndexedFaceSet745.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate746 = x3d.Coordinate()
Coordinate746.setUSE("points")

IndexedFaceSet745.setCoord(Coordinate746)

Shape742.setGeometry(IndexedFaceSet745)

HAnimSite741.addChild(Shape742)

HAnimSegment733.addChild(HAnimSite741)
HAnimSite747 = x3d.HAnimSite()
HAnimSite747.setDEF("hanim_r_metacarpal_pha2_pt")
HAnimSite747.setName("r_metacarpal_pha2_pt")
HAnimSite747.setTranslation(x3d.doubleToFloat([-0.1977,0.8169,-0.0177]))
Shape748 = x3d.Shape()
Appearance749 = x3d.Appearance()
Material750 = x3d.Material()
Material750.setUSE("SITE_COLOR")

Appearance749.setMaterial(Material750)

Shape748.setAppearance(Appearance749)
IndexedFaceSet751 = x3d.IndexedFaceSet()
IndexedFaceSet751.setCreaseAngle(0.5)
IndexedFaceSet751.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate752 = x3d.Coordinate()
Coordinate752.setUSE("points")

IndexedFaceSet751.setCoord(Coordinate752)

Shape748.setGeometry(IndexedFaceSet751)

HAnimSite747.addChild(Shape748)

HAnimSegment733.addChild(HAnimSite747)
HAnimSite753 = x3d.HAnimSite()
HAnimSite753.setDEF("hanim_r_dactylion_pt")
HAnimSite753.setName("r_dactylion_pt")
HAnimSite753.setTranslation(x3d.doubleToFloat([-0.1941,0.6772,-0.0423]))
Shape754 = x3d.Shape()
Appearance755 = x3d.Appearance()
Material756 = x3d.Material()
Material756.setUSE("SITE_COLOR")

Appearance755.setMaterial(Material756)

Shape754.setAppearance(Appearance755)
IndexedFaceSet757 = x3d.IndexedFaceSet()
IndexedFaceSet757.setCreaseAngle(0.5)
IndexedFaceSet757.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate758 = x3d.Coordinate()
Coordinate758.setUSE("points")

IndexedFaceSet757.setCoord(Coordinate758)

Shape754.setGeometry(IndexedFaceSet757)

HAnimSite753.addChild(Shape754)

HAnimSegment733.addChild(HAnimSite753)
HAnimSite759 = x3d.HAnimSite()
HAnimSite759.setDEF("hanim_r_ulnar_styloid_pt")
HAnimSite759.setName("r_ulnar_styloid_pt")
HAnimSite759.setTranslation(x3d.doubleToFloat([-0.2117,0.8562,-0.0584]))
Shape760 = x3d.Shape()
Appearance761 = x3d.Appearance()
Material762 = x3d.Material()
Material762.setUSE("SITE_COLOR")

Appearance761.setMaterial(Material762)

Shape760.setAppearance(Appearance761)
IndexedFaceSet763 = x3d.IndexedFaceSet()
IndexedFaceSet763.setCreaseAngle(0.5)
IndexedFaceSet763.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate764 = x3d.Coordinate()
Coordinate764.setUSE("points")

IndexedFaceSet763.setCoord(Coordinate764)

Shape760.setGeometry(IndexedFaceSet763)

HAnimSite759.addChild(Shape760)

HAnimSegment733.addChild(HAnimSite759)
HAnimSite765 = x3d.HAnimSite()
HAnimSite765.setDEF("hanim_r_metacarpal_pha5_pt")
HAnimSite765.setName("r_metacarpal_pha5_pt")
HAnimSite765.setTranslation(x3d.doubleToFloat([-0.1929,0.789,-0.1064]))
Shape766 = x3d.Shape()
Appearance767 = x3d.Appearance()
Material768 = x3d.Material()
Material768.setUSE("SITE_COLOR")

Appearance767.setMaterial(Material768)

Shape766.setAppearance(Appearance767)
IndexedFaceSet769 = x3d.IndexedFaceSet()
IndexedFaceSet769.setCreaseAngle(0.5)
IndexedFaceSet769.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate770 = x3d.Coordinate()
Coordinate770.setUSE("points")

IndexedFaceSet769.setCoord(Coordinate770)

Shape766.setGeometry(IndexedFaceSet769)

HAnimSite765.addChild(Shape766)

HAnimSegment733.addChild(HAnimSite765)

HAnimJoint732.addChild(HAnimSegment733)

HAnimJoint699.addChild(HAnimJoint732)

HAnimJoint684.addChild(HAnimJoint699)

HAnimJoint521.addChild(HAnimJoint684)
HAnimJoint771 = x3d.HAnimJoint()
HAnimJoint771.setDEF("hanim_vc7")
HAnimJoint771.setName("vc7")
HAnimJoint771.setCenter(x3d.doubleToFloat([0.0066,1.5132,-0.0301]))
HAnimSegment772 = x3d.HAnimSegment()
HAnimSegment772.setDEF("hanim_c7")
HAnimSegment772.setName("c7")
Transform773 = x3d.Transform()
Transform773.setTranslation(x3d.doubleToFloat([0.0066,1.5132,-0.0301]))
Shape774 = x3d.Shape()
Appearance775 = x3d.Appearance()
Material776 = x3d.Material()
Material776.setUSE("SPINAL_COLOR")

Appearance775.setMaterial(Material776)

Shape774.setAppearance(Appearance775)
IndexedFaceSet777 = x3d.IndexedFaceSet()
IndexedFaceSet777.setCreaseAngle(0.5)
IndexedFaceSet777.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate778 = x3d.Coordinate()
Coordinate778.setUSE("points")

IndexedFaceSet777.setCoord(Coordinate778)

Shape774.setGeometry(IndexedFaceSet777)

Transform773.addChild(Shape774)

HAnimSegment772.addChild(Transform773)

HAnimJoint771.addChild(HAnimSegment772)
HAnimJoint779 = x3d.HAnimJoint()
HAnimJoint779.setDEF("hanim_vc6")
HAnimJoint779.setName("vc6")
HAnimJoint779.setCenter(x3d.doubleToFloat([0.0066,1.5357,-0.0143]))
HAnimSegment780 = x3d.HAnimSegment()
HAnimSegment780.setDEF("hanim_c6")
HAnimSegment780.setName("c6")
Transform781 = x3d.Transform()
Transform781.setTranslation(x3d.doubleToFloat([0.0066,1.5357,-0.0143]))
Shape782 = x3d.Shape()
Appearance783 = x3d.Appearance()
Material784 = x3d.Material()
Material784.setUSE("SPINAL_COLOR")

Appearance783.setMaterial(Material784)

Shape782.setAppearance(Appearance783)
IndexedFaceSet785 = x3d.IndexedFaceSet()
IndexedFaceSet785.setCreaseAngle(0.5)
IndexedFaceSet785.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate786 = x3d.Coordinate()
Coordinate786.setUSE("points")

IndexedFaceSet785.setCoord(Coordinate786)

Shape782.setGeometry(IndexedFaceSet785)

Transform781.addChild(Shape782)

HAnimSegment780.addChild(Transform781)

HAnimJoint779.addChild(HAnimSegment780)
HAnimJoint787 = x3d.HAnimJoint()
HAnimJoint787.setDEF("hanim_vc5")
HAnimJoint787.setName("vc5")
HAnimJoint787.setCenter(x3d.doubleToFloat([0.0066,1.552,-0.0082]))
HAnimSegment788 = x3d.HAnimSegment()
HAnimSegment788.setDEF("hanim_c5")
HAnimSegment788.setName("c5")
Transform789 = x3d.Transform()
Transform789.setTranslation(x3d.doubleToFloat([0.0066,1.552,-0.0082]))
Shape790 = x3d.Shape()
Appearance791 = x3d.Appearance()
Material792 = x3d.Material()
Material792.setUSE("SPINAL_COLOR")

Appearance791.setMaterial(Material792)

Shape790.setAppearance(Appearance791)
IndexedFaceSet793 = x3d.IndexedFaceSet()
IndexedFaceSet793.setCreaseAngle(0.5)
IndexedFaceSet793.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate794 = x3d.Coordinate()
Coordinate794.setUSE("points")

IndexedFaceSet793.setCoord(Coordinate794)

Shape790.setGeometry(IndexedFaceSet793)

Transform789.addChild(Shape790)

HAnimSegment788.addChild(Transform789)

HAnimJoint787.addChild(HAnimSegment788)
HAnimJoint795 = x3d.HAnimJoint()
HAnimJoint795.setDEF("hanim_vc4")
HAnimJoint795.setName("vc4")
HAnimJoint795.setCenter(x3d.doubleToFloat([0.0066,1.5662,-0.0084]))
HAnimSegment796 = x3d.HAnimSegment()
HAnimSegment796.setDEF("hanim_c4")
HAnimSegment796.setName("c4")
Transform797 = x3d.Transform()
Transform797.setTranslation(x3d.doubleToFloat([0.0066,1.5662,-0.0084]))
Shape798 = x3d.Shape()
Appearance799 = x3d.Appearance()
Material800 = x3d.Material()
Material800.setUSE("SPINAL_COLOR")

Appearance799.setMaterial(Material800)

Shape798.setAppearance(Appearance799)
IndexedFaceSet801 = x3d.IndexedFaceSet()
IndexedFaceSet801.setCreaseAngle(0.5)
IndexedFaceSet801.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate802 = x3d.Coordinate()
Coordinate802.setUSE("points")

IndexedFaceSet801.setCoord(Coordinate802)

Shape798.setGeometry(IndexedFaceSet801)

Transform797.addChild(Shape798)

HAnimSegment796.addChild(Transform797)

HAnimJoint795.addChild(HAnimSegment796)
HAnimJoint803 = x3d.HAnimJoint()
HAnimJoint803.setDEF("hanim_vc3")
HAnimJoint803.setName("vc3")
HAnimJoint803.setCenter(x3d.doubleToFloat([0.0066,1.58,-0.0103]))
HAnimSegment804 = x3d.HAnimSegment()
HAnimSegment804.setDEF("hanim_c3")
HAnimSegment804.setName("c3")
Transform805 = x3d.Transform()
Transform805.setTranslation(x3d.doubleToFloat([0.0066,1.58,-0.0103]))
Shape806 = x3d.Shape()
Appearance807 = x3d.Appearance()
Material808 = x3d.Material()
Material808.setUSE("SPINAL_COLOR")

Appearance807.setMaterial(Material808)

Shape806.setAppearance(Appearance807)
IndexedFaceSet809 = x3d.IndexedFaceSet()
IndexedFaceSet809.setCreaseAngle(0.5)
IndexedFaceSet809.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate810 = x3d.Coordinate()
Coordinate810.setUSE("points")

IndexedFaceSet809.setCoord(Coordinate810)

Shape806.setGeometry(IndexedFaceSet809)

Transform805.addChild(Shape806)

HAnimSegment804.addChild(Transform805)

HAnimJoint803.addChild(HAnimSegment804)
HAnimJoint811 = x3d.HAnimJoint()
HAnimJoint811.setDEF("hanim_vc2")
HAnimJoint811.setName("vc2")
HAnimJoint811.setCenter(x3d.doubleToFloat([0.0066,1.5928,-0.0103]))
HAnimSegment812 = x3d.HAnimSegment()
HAnimSegment812.setDEF("hanim_c2")
HAnimSegment812.setName("c2")
Transform813 = x3d.Transform()
Transform813.setTranslation(x3d.doubleToFloat([0.0066,1.5928,-0.0103]))
Shape814 = x3d.Shape()
Appearance815 = x3d.Appearance()
Material816 = x3d.Material()
Material816.setUSE("REC_SPINAL_COLOR")

Appearance815.setMaterial(Material816)

Shape814.setAppearance(Appearance815)
IndexedFaceSet817 = x3d.IndexedFaceSet()
IndexedFaceSet817.setCreaseAngle(0.5)
IndexedFaceSet817.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate818 = x3d.Coordinate()
Coordinate818.setUSE("points")

IndexedFaceSet817.setCoord(Coordinate818)

Shape814.setGeometry(IndexedFaceSet817)

Transform813.addChild(Shape814)

HAnimSegment812.addChild(Transform813)

HAnimJoint811.addChild(HAnimSegment812)
HAnimJoint819 = x3d.HAnimJoint()
HAnimJoint819.setDEF("hanim_vc1")
HAnimJoint819.setName("vc1")
HAnimJoint819.setCenter(x3d.doubleToFloat([0.0066,1.6144,-0.0034]))
HAnimSegment820 = x3d.HAnimSegment()
HAnimSegment820.setDEF("hanim_c1")
HAnimSegment820.setName("c1")
Transform821 = x3d.Transform()
Transform821.setTranslation(x3d.doubleToFloat([0.0066,1.6144,-0.0034]))
Shape822 = x3d.Shape()
Appearance823 = x3d.Appearance()
Material824 = x3d.Material()
Material824.setUSE("SPINAL_COLOR")

Appearance823.setMaterial(Material824)

Shape822.setAppearance(Appearance823)
IndexedFaceSet825 = x3d.IndexedFaceSet()
IndexedFaceSet825.setCreaseAngle(0.5)
IndexedFaceSet825.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate826 = x3d.Coordinate()
Coordinate826.setUSE("points")

IndexedFaceSet825.setCoord(Coordinate826)

Shape822.setGeometry(IndexedFaceSet825)

Transform821.addChild(Shape822)

HAnimSegment820.addChild(Transform821)

HAnimJoint819.addChild(HAnimSegment820)
HAnimJoint827 = x3d.HAnimJoint()
HAnimJoint827.setDEF("hanim_skullbase")
HAnimJoint827.setName("skullbase")
HAnimJoint827.setCenter(x3d.doubleToFloat([0.0044,1.6209,0.0236]))
HAnimSegment828 = x3d.HAnimSegment()
HAnimSegment828.setDEF("hanim_skull")
HAnimSegment828.setName("skull")
Transform829 = x3d.Transform()
Transform829.setTranslation(x3d.doubleToFloat([0.0044,1.6209,0.0236]))
Shape830 = x3d.Shape()
Appearance831 = x3d.Appearance()
Material832 = x3d.Material()
Material832.setUSE("MIN_COLOR")

Appearance831.setMaterial(Material832)

Shape830.setAppearance(Appearance831)
IndexedFaceSet833 = x3d.IndexedFaceSet()
IndexedFaceSet833.setCreaseAngle(0.5)
IndexedFaceSet833.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate834 = x3d.Coordinate()
Coordinate834.setUSE("points")

IndexedFaceSet833.setCoord(Coordinate834)

Shape830.setGeometry(IndexedFaceSet833)

Transform829.addChild(Shape830)

HAnimSegment828.addChild(Transform829)
HAnimSite835 = x3d.HAnimSite()
HAnimSite835.setDEF("hanim_skull_tip")
HAnimSite835.setName("skull_tip")
HAnimSite835.setTranslation(x3d.doubleToFloat([0.005,1.7504,0.0055]))
Shape836 = x3d.Shape()
Appearance837 = x3d.Appearance()
Material838 = x3d.Material()
Material838.setUSE("SITE_COLOR")

Appearance837.setMaterial(Material838)

Shape836.setAppearance(Appearance837)
IndexedFaceSet839 = x3d.IndexedFaceSet()
IndexedFaceSet839.setCreaseAngle(0.5)
IndexedFaceSet839.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate840 = x3d.Coordinate()
Coordinate840.setUSE("points")

IndexedFaceSet839.setCoord(Coordinate840)

Shape836.setGeometry(IndexedFaceSet839)

HAnimSite835.addChild(Shape836)

HAnimSegment828.addChild(HAnimSite835)
HAnimSite841 = x3d.HAnimSite()
HAnimSite841.setDEF("hanim_sellion_pt")
HAnimSite841.setName("sellion_pt")
HAnimSite841.setTranslation(x3d.doubleToFloat([0.0058,1.6316,0.0852]))
Shape842 = x3d.Shape()
Appearance843 = x3d.Appearance()
Material844 = x3d.Material()
Material844.setUSE("SITE_COLOR")

Appearance843.setMaterial(Material844)

Shape842.setAppearance(Appearance843)
IndexedFaceSet845 = x3d.IndexedFaceSet()
IndexedFaceSet845.setCreaseAngle(0.5)
IndexedFaceSet845.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate846 = x3d.Coordinate()
Coordinate846.setUSE("points")

IndexedFaceSet845.setCoord(Coordinate846)

Shape842.setGeometry(IndexedFaceSet845)

HAnimSite841.addChild(Shape842)

HAnimSegment828.addChild(HAnimSite841)
HAnimSite847 = x3d.HAnimSite()
HAnimSite847.setDEF("hanim_r_infraorbitale_pt")
HAnimSite847.setName("r_infraorbitale_pt")
HAnimSite847.setTranslation(x3d.doubleToFloat([-0.0237,1.6171,0.0752]))
Shape848 = x3d.Shape()
Appearance849 = x3d.Appearance()
Material850 = x3d.Material()
Material850.setUSE("SITE_COLOR")

Appearance849.setMaterial(Material850)

Shape848.setAppearance(Appearance849)
IndexedFaceSet851 = x3d.IndexedFaceSet()
IndexedFaceSet851.setCreaseAngle(0.5)
IndexedFaceSet851.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate852 = x3d.Coordinate()
Coordinate852.setUSE("points")

IndexedFaceSet851.setCoord(Coordinate852)

Shape848.setGeometry(IndexedFaceSet851)

HAnimSite847.addChild(Shape848)

HAnimSegment828.addChild(HAnimSite847)
HAnimSite853 = x3d.HAnimSite()
HAnimSite853.setDEF("hanim_l_infraorbitale_pt")
HAnimSite853.setName("l_infraorbitale_pt")
HAnimSite853.setTranslation(x3d.doubleToFloat([0.0341,1.6171,0.0752]))
Shape854 = x3d.Shape()
Appearance855 = x3d.Appearance()
Material856 = x3d.Material()
Material856.setUSE("SITE_COLOR")

Appearance855.setMaterial(Material856)

Shape854.setAppearance(Appearance855)
IndexedFaceSet857 = x3d.IndexedFaceSet()
IndexedFaceSet857.setCreaseAngle(0.5)
IndexedFaceSet857.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate858 = x3d.Coordinate()
Coordinate858.setUSE("points")

IndexedFaceSet857.setCoord(Coordinate858)

Shape854.setGeometry(IndexedFaceSet857)

HAnimSite853.addChild(Shape854)

HAnimSegment828.addChild(HAnimSite853)
HAnimSite859 = x3d.HAnimSite()
HAnimSite859.setDEF("hanim_supramenton_pt")
HAnimSite859.setName("supramenton_pt")
HAnimSite859.setTranslation(x3d.doubleToFloat([0.0061,1.541,0.0805]))
Shape860 = x3d.Shape()
Appearance861 = x3d.Appearance()
Material862 = x3d.Material()
Material862.setUSE("SITE_COLOR")

Appearance861.setMaterial(Material862)

Shape860.setAppearance(Appearance861)
IndexedFaceSet863 = x3d.IndexedFaceSet()
IndexedFaceSet863.setCreaseAngle(0.5)
IndexedFaceSet863.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate864 = x3d.Coordinate()
Coordinate864.setUSE("points")

IndexedFaceSet863.setCoord(Coordinate864)

Shape860.setGeometry(IndexedFaceSet863)

HAnimSite859.addChild(Shape860)

HAnimSegment828.addChild(HAnimSite859)
HAnimSite865 = x3d.HAnimSite()
HAnimSite865.setDEF("hanim_r_tragion_pt")
HAnimSite865.setName("r_tragion_pt")
HAnimSite865.setTranslation(x3d.doubleToFloat([-0.0646,1.6347,0.0302]))
Shape866 = x3d.Shape()
Appearance867 = x3d.Appearance()
Material868 = x3d.Material()
Material868.setUSE("SITE_COLOR")

Appearance867.setMaterial(Material868)

Shape866.setAppearance(Appearance867)
IndexedFaceSet869 = x3d.IndexedFaceSet()
IndexedFaceSet869.setCreaseAngle(0.5)
IndexedFaceSet869.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate870 = x3d.Coordinate()
Coordinate870.setUSE("points")

IndexedFaceSet869.setCoord(Coordinate870)

Shape866.setGeometry(IndexedFaceSet869)

HAnimSite865.addChild(Shape866)

HAnimSegment828.addChild(HAnimSite865)
HAnimSite871 = x3d.HAnimSite()
HAnimSite871.setDEF("hanim_r_gonion_pt")
HAnimSite871.setName("r_gonion_pt")
HAnimSite871.setTranslation(x3d.doubleToFloat([-0.052,1.5529,0.0347]))
Shape872 = x3d.Shape()
Appearance873 = x3d.Appearance()
Material874 = x3d.Material()
Material874.setUSE("SITE_COLOR")

Appearance873.setMaterial(Material874)

Shape872.setAppearance(Appearance873)
IndexedFaceSet875 = x3d.IndexedFaceSet()
IndexedFaceSet875.setCreaseAngle(0.5)
IndexedFaceSet875.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate876 = x3d.Coordinate()
Coordinate876.setUSE("points")

IndexedFaceSet875.setCoord(Coordinate876)

Shape872.setGeometry(IndexedFaceSet875)

HAnimSite871.addChild(Shape872)

HAnimSegment828.addChild(HAnimSite871)
HAnimSite877 = x3d.HAnimSite()
HAnimSite877.setDEF("hanim_l_tragion_pt")
HAnimSite877.setName("l_tragion_pt")
HAnimSite877.setTranslation(x3d.doubleToFloat([0.0739,1.6348,0.0282]))
Shape878 = x3d.Shape()
Appearance879 = x3d.Appearance()
Material880 = x3d.Material()
Material880.setUSE("SITE_COLOR")

Appearance879.setMaterial(Material880)

Shape878.setAppearance(Appearance879)
IndexedFaceSet881 = x3d.IndexedFaceSet()
IndexedFaceSet881.setCreaseAngle(0.5)
IndexedFaceSet881.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate882 = x3d.Coordinate()
Coordinate882.setUSE("points")

IndexedFaceSet881.setCoord(Coordinate882)

Shape878.setGeometry(IndexedFaceSet881)

HAnimSite877.addChild(Shape878)

HAnimSegment828.addChild(HAnimSite877)
HAnimSite883 = x3d.HAnimSite()
HAnimSite883.setDEF("hanim_l_gonion_pt")
HAnimSite883.setName("l_gonion_pt")
HAnimSite883.setTranslation(x3d.doubleToFloat([0.0631,1.553,0.033]))
Shape884 = x3d.Shape()
Appearance885 = x3d.Appearance()
Material886 = x3d.Material()
Material886.setUSE("SITE_COLOR")

Appearance885.setMaterial(Material886)

Shape884.setAppearance(Appearance885)
IndexedFaceSet887 = x3d.IndexedFaceSet()
IndexedFaceSet887.setCreaseAngle(0.5)
IndexedFaceSet887.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate888 = x3d.Coordinate()
Coordinate888.setUSE("points")

IndexedFaceSet887.setCoord(Coordinate888)

Shape884.setGeometry(IndexedFaceSet887)

HAnimSite883.addChild(Shape884)

HAnimSegment828.addChild(HAnimSite883)
HAnimSite889 = x3d.HAnimSite()
HAnimSite889.setDEF("hanim_nuchale_pt")
HAnimSite889.setName("nuchale_pt")
HAnimSite889.setTranslation(x3d.doubleToFloat([0.0039,1.5972,-0.0796]))
Shape890 = x3d.Shape()
Appearance891 = x3d.Appearance()
Material892 = x3d.Material()
Material892.setUSE("SITE_COLOR")

Appearance891.setMaterial(Material892)

Shape890.setAppearance(Appearance891)
IndexedFaceSet893 = x3d.IndexedFaceSet()
IndexedFaceSet893.setCreaseAngle(0.5)
IndexedFaceSet893.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate894 = x3d.Coordinate()
Coordinate894.setUSE("points")

IndexedFaceSet893.setCoord(Coordinate894)

Shape890.setGeometry(IndexedFaceSet893)

HAnimSite889.addChild(Shape890)

HAnimSegment828.addChild(HAnimSite889)

HAnimJoint827.addChild(HAnimSegment828)

HAnimJoint819.addChild(HAnimJoint827)

HAnimJoint811.addChild(HAnimJoint819)

HAnimJoint803.addChild(HAnimJoint811)

HAnimJoint795.addChild(HAnimJoint803)

HAnimJoint787.addChild(HAnimJoint795)

HAnimJoint779.addChild(HAnimJoint787)

HAnimJoint771.addChild(HAnimJoint779)

HAnimJoint521.addChild(HAnimJoint771)

HAnimJoint513.addChild(HAnimJoint521)

HAnimJoint505.addChild(HAnimJoint513)

HAnimJoint497.addChild(HAnimJoint505)

HAnimJoint489.addChild(HAnimJoint497)

HAnimJoint481.addChild(HAnimJoint489)

HAnimJoint473.addChild(HAnimJoint481)

HAnimJoint465.addChild(HAnimJoint473)

HAnimJoint457.addChild(HAnimJoint465)

HAnimJoint449.addChild(HAnimJoint457)

HAnimJoint441.addChild(HAnimJoint449)

HAnimJoint433.addChild(HAnimJoint441)

HAnimJoint425.addChild(HAnimJoint433)

HAnimJoint417.addChild(HAnimJoint425)

HAnimJoint409.addChild(HAnimJoint417)

HAnimJoint401.addChild(HAnimJoint409)

HAnimJoint393.addChild(HAnimJoint401)

HAnimJoint98.addChild(HAnimJoint393)

HAnimHumanoid95.addSkeleton(HAnimJoint98)
HAnimJoint895 = x3d.HAnimJoint()
HAnimJoint895.setContainerFieldOverride("joints")
HAnimJoint895.setUSE("hanim_HumanoidRoot")

HAnimHumanoid95.addJoints(HAnimJoint895)
HAnimJoint896 = x3d.HAnimJoint()
HAnimJoint896.setContainerFieldOverride("joints")
HAnimJoint896.setUSE("hanim_sacroiliac")

HAnimHumanoid95.addJoints(HAnimJoint896)
HAnimJoint897 = x3d.HAnimJoint()
HAnimJoint897.setContainerFieldOverride("joints")
HAnimJoint897.setUSE("hanim_vl1")

HAnimHumanoid95.addJoints(HAnimJoint897)
HAnimJoint898 = x3d.HAnimJoint()
HAnimJoint898.setContainerFieldOverride("joints")
HAnimJoint898.setUSE("hanim_vc4")

HAnimHumanoid95.addJoints(HAnimJoint898)
HAnimJoint899 = x3d.HAnimJoint()
HAnimJoint899.setContainerFieldOverride("joints")
HAnimJoint899.setUSE("hanim_skullbase")

HAnimHumanoid95.addJoints(HAnimJoint899)
HAnimJoint900 = x3d.HAnimJoint()
HAnimJoint900.setContainerFieldOverride("joints")
HAnimJoint900.setUSE("hanim_vl5")

HAnimHumanoid95.addJoints(HAnimJoint900)
HAnimJoint901 = x3d.HAnimJoint()
HAnimJoint901.setContainerFieldOverride("joints")
HAnimJoint901.setUSE("hanim_vl4")

HAnimHumanoid95.addJoints(HAnimJoint901)
HAnimJoint902 = x3d.HAnimJoint()
HAnimJoint902.setContainerFieldOverride("joints")
HAnimJoint902.setUSE("hanim_vl3")

HAnimHumanoid95.addJoints(HAnimJoint902)
HAnimJoint903 = x3d.HAnimJoint()
HAnimJoint903.setContainerFieldOverride("joints")
HAnimJoint903.setUSE("hanim_vl2")

HAnimHumanoid95.addJoints(HAnimJoint903)
HAnimJoint904 = x3d.HAnimJoint()
HAnimJoint904.setContainerFieldOverride("joints")
HAnimJoint904.setUSE("hanim_vt12")

HAnimHumanoid95.addJoints(HAnimJoint904)
HAnimJoint905 = x3d.HAnimJoint()
HAnimJoint905.setContainerFieldOverride("joints")
HAnimJoint905.setUSE("hanim_vt11")

HAnimHumanoid95.addJoints(HAnimJoint905)
HAnimJoint906 = x3d.HAnimJoint()
HAnimJoint906.setContainerFieldOverride("joints")
HAnimJoint906.setUSE("hanim_vt10")

HAnimHumanoid95.addJoints(HAnimJoint906)
HAnimJoint907 = x3d.HAnimJoint()
HAnimJoint907.setContainerFieldOverride("joints")
HAnimJoint907.setUSE("hanim_vt9")

HAnimHumanoid95.addJoints(HAnimJoint907)
HAnimJoint908 = x3d.HAnimJoint()
HAnimJoint908.setContainerFieldOverride("joints")
HAnimJoint908.setUSE("hanim_vt8")

HAnimHumanoid95.addJoints(HAnimJoint908)
HAnimJoint909 = x3d.HAnimJoint()
HAnimJoint909.setContainerFieldOverride("joints")
HAnimJoint909.setUSE("hanim_vt7")

HAnimHumanoid95.addJoints(HAnimJoint909)
HAnimJoint910 = x3d.HAnimJoint()
HAnimJoint910.setContainerFieldOverride("joints")
HAnimJoint910.setUSE("hanim_vt6")

HAnimHumanoid95.addJoints(HAnimJoint910)
HAnimJoint911 = x3d.HAnimJoint()
HAnimJoint911.setContainerFieldOverride("joints")
HAnimJoint911.setUSE("hanim_vt5")

HAnimHumanoid95.addJoints(HAnimJoint911)
HAnimJoint912 = x3d.HAnimJoint()
HAnimJoint912.setContainerFieldOverride("joints")
HAnimJoint912.setUSE("hanim_vt4")

HAnimHumanoid95.addJoints(HAnimJoint912)
HAnimJoint913 = x3d.HAnimJoint()
HAnimJoint913.setContainerFieldOverride("joints")
HAnimJoint913.setUSE("hanim_vt3")

HAnimHumanoid95.addJoints(HAnimJoint913)
HAnimJoint914 = x3d.HAnimJoint()
HAnimJoint914.setContainerFieldOverride("joints")
HAnimJoint914.setUSE("hanim_vt2")

HAnimHumanoid95.addJoints(HAnimJoint914)
HAnimJoint915 = x3d.HAnimJoint()
HAnimJoint915.setContainerFieldOverride("joints")
HAnimJoint915.setUSE("hanim_vt1")

HAnimHumanoid95.addJoints(HAnimJoint915)
HAnimJoint916 = x3d.HAnimJoint()
HAnimJoint916.setContainerFieldOverride("joints")
HAnimJoint916.setUSE("hanim_vc7")

HAnimHumanoid95.addJoints(HAnimJoint916)
HAnimJoint917 = x3d.HAnimJoint()
HAnimJoint917.setContainerFieldOverride("joints")
HAnimJoint917.setUSE("hanim_vc6")

HAnimHumanoid95.addJoints(HAnimJoint917)
HAnimJoint918 = x3d.HAnimJoint()
HAnimJoint918.setContainerFieldOverride("joints")
HAnimJoint918.setUSE("hanim_vc5")

HAnimHumanoid95.addJoints(HAnimJoint918)
HAnimJoint919 = x3d.HAnimJoint()
HAnimJoint919.setContainerFieldOverride("joints")
HAnimJoint919.setUSE("hanim_vc3")

HAnimHumanoid95.addJoints(HAnimJoint919)
HAnimJoint920 = x3d.HAnimJoint()
HAnimJoint920.setContainerFieldOverride("joints")
HAnimJoint920.setUSE("hanim_vc2")

HAnimHumanoid95.addJoints(HAnimJoint920)
HAnimJoint921 = x3d.HAnimJoint()
HAnimJoint921.setContainerFieldOverride("joints")
HAnimJoint921.setUSE("hanim_vc1")

HAnimHumanoid95.addJoints(HAnimJoint921)
HAnimJoint922 = x3d.HAnimJoint()
HAnimJoint922.setContainerFieldOverride("joints")
HAnimJoint922.setUSE("hanim_l_ankle")

HAnimHumanoid95.addJoints(HAnimJoint922)
HAnimJoint923 = x3d.HAnimJoint()
HAnimJoint923.setContainerFieldOverride("joints")
HAnimJoint923.setUSE("hanim_r_ankle")

HAnimHumanoid95.addJoints(HAnimJoint923)
HAnimJoint924 = x3d.HAnimJoint()
HAnimJoint924.setContainerFieldOverride("joints")
HAnimJoint924.setUSE("hanim_l_elbow")

HAnimHumanoid95.addJoints(HAnimJoint924)
HAnimJoint925 = x3d.HAnimJoint()
HAnimJoint925.setContainerFieldOverride("joints")
HAnimJoint925.setUSE("hanim_r_elbow")

HAnimHumanoid95.addJoints(HAnimJoint925)
HAnimJoint926 = x3d.HAnimJoint()
HAnimJoint926.setContainerFieldOverride("joints")
HAnimJoint926.setUSE("hanim_l_hip")

HAnimHumanoid95.addJoints(HAnimJoint926)
HAnimJoint927 = x3d.HAnimJoint()
HAnimJoint927.setContainerFieldOverride("joints")
HAnimJoint927.setUSE("hanim_r_hip")

HAnimHumanoid95.addJoints(HAnimJoint927)
HAnimJoint928 = x3d.HAnimJoint()
HAnimJoint928.setContainerFieldOverride("joints")
HAnimJoint928.setUSE("hanim_l_index0")

HAnimHumanoid95.addJoints(HAnimJoint928)
HAnimJoint929 = x3d.HAnimJoint()
HAnimJoint929.setContainerFieldOverride("joints")
HAnimJoint929.setUSE("hanim_l_index1")

HAnimHumanoid95.addJoints(HAnimJoint929)
HAnimJoint930 = x3d.HAnimJoint()
HAnimJoint930.setContainerFieldOverride("joints")
HAnimJoint930.setUSE("hanim_l_index2")

HAnimHumanoid95.addJoints(HAnimJoint930)
HAnimJoint931 = x3d.HAnimJoint()
HAnimJoint931.setContainerFieldOverride("joints")
HAnimJoint931.setUSE("hanim_l_index3")

HAnimHumanoid95.addJoints(HAnimJoint931)
HAnimJoint932 = x3d.HAnimJoint()
HAnimJoint932.setContainerFieldOverride("joints")
HAnimJoint932.setUSE("hanim_l_knee")

HAnimHumanoid95.addJoints(HAnimJoint932)
HAnimJoint933 = x3d.HAnimJoint()
HAnimJoint933.setContainerFieldOverride("joints")
HAnimJoint933.setUSE("hanim_r_knee")

HAnimHumanoid95.addJoints(HAnimJoint933)
HAnimJoint934 = x3d.HAnimJoint()
HAnimJoint934.setContainerFieldOverride("joints")
HAnimJoint934.setUSE("hanim_l_metatarsal")

HAnimHumanoid95.addJoints(HAnimJoint934)
HAnimJoint935 = x3d.HAnimJoint()
HAnimJoint935.setContainerFieldOverride("joints")
HAnimJoint935.setUSE("hanim_l_midtarsal")

HAnimHumanoid95.addJoints(HAnimJoint935)
HAnimJoint936 = x3d.HAnimJoint()
HAnimJoint936.setContainerFieldOverride("joints")
HAnimJoint936.setUSE("hanim_r_midtarsal")

HAnimHumanoid95.addJoints(HAnimJoint936)
HAnimJoint937 = x3d.HAnimJoint()
HAnimJoint937.setContainerFieldOverride("joints")
HAnimJoint937.setUSE("hanim_l_shoulder")

HAnimHumanoid95.addJoints(HAnimJoint937)
HAnimJoint938 = x3d.HAnimJoint()
HAnimJoint938.setContainerFieldOverride("joints")
HAnimJoint938.setUSE("hanim_r_shoulder")

HAnimHumanoid95.addJoints(HAnimJoint938)
HAnimJoint939 = x3d.HAnimJoint()
HAnimJoint939.setContainerFieldOverride("joints")
HAnimJoint939.setUSE("hanim_l_subtalar")

HAnimHumanoid95.addJoints(HAnimJoint939)
HAnimJoint940 = x3d.HAnimJoint()
HAnimJoint940.setContainerFieldOverride("joints")
HAnimJoint940.setUSE("hanim_l_thumb1")

HAnimHumanoid95.addJoints(HAnimJoint940)
HAnimJoint941 = x3d.HAnimJoint()
HAnimJoint941.setContainerFieldOverride("joints")
HAnimJoint941.setUSE("hanim_l_thumb2")

HAnimHumanoid95.addJoints(HAnimJoint941)
HAnimJoint942 = x3d.HAnimJoint()
HAnimJoint942.setContainerFieldOverride("joints")
HAnimJoint942.setUSE("hanim_l_thumb3")

HAnimHumanoid95.addJoints(HAnimJoint942)
HAnimJoint943 = x3d.HAnimJoint()
HAnimJoint943.setContainerFieldOverride("joints")
HAnimJoint943.setUSE("hanim_l_wrist")

HAnimHumanoid95.addJoints(HAnimJoint943)
HAnimJoint944 = x3d.HAnimJoint()
HAnimJoint944.setContainerFieldOverride("joints")
HAnimJoint944.setUSE("hanim_r_wrist")

HAnimHumanoid95.addJoints(HAnimJoint944)
HAnimSegment945 = x3d.HAnimSegment()
HAnimSegment945.setContainerFieldOverride("segments")
HAnimSegment945.setUSE("hanim_pelvis")

HAnimHumanoid95.addSegments(HAnimSegment945)
HAnimSegment946 = x3d.HAnimSegment()
HAnimSegment946.setContainerFieldOverride("segments")
HAnimSegment946.setUSE("hanim_c7")

HAnimHumanoid95.addSegments(HAnimSegment946)
HAnimSegment947 = x3d.HAnimSegment()
HAnimSegment947.setContainerFieldOverride("segments")
HAnimSegment947.setUSE("hanim_c4")

HAnimHumanoid95.addSegments(HAnimSegment947)
HAnimSegment948 = x3d.HAnimSegment()
HAnimSegment948.setContainerFieldOverride("segments")
HAnimSegment948.setUSE("hanim_skull")

HAnimHumanoid95.addSegments(HAnimSegment948)
HAnimSegment949 = x3d.HAnimSegment()
HAnimSegment949.setContainerFieldOverride("segments")
HAnimSegment949.setUSE("hanim_sacrum")

HAnimHumanoid95.addSegments(HAnimSegment949)
HAnimSegment950 = x3d.HAnimSegment()
HAnimSegment950.setContainerFieldOverride("segments")
HAnimSegment950.setUSE("hanim_midproximal")

HAnimHumanoid95.addSegments(HAnimSegment950)
HAnimSegment951 = x3d.HAnimSegment()
HAnimSegment951.setContainerFieldOverride("segments")
HAnimSegment951.setUSE("hanim_l5")

HAnimHumanoid95.addSegments(HAnimSegment951)
HAnimSegment952 = x3d.HAnimSegment()
HAnimSegment952.setContainerFieldOverride("segments")
HAnimSegment952.setUSE("hanim_l4")

HAnimHumanoid95.addSegments(HAnimSegment952)
HAnimSegment953 = x3d.HAnimSegment()
HAnimSegment953.setContainerFieldOverride("segments")
HAnimSegment953.setUSE("hanim_l3")

HAnimHumanoid95.addSegments(HAnimSegment953)
HAnimSegment954 = x3d.HAnimSegment()
HAnimSegment954.setContainerFieldOverride("segments")
HAnimSegment954.setUSE("hanim_l2")

HAnimHumanoid95.addSegments(HAnimSegment954)
HAnimSegment955 = x3d.HAnimSegment()
HAnimSegment955.setContainerFieldOverride("segments")
HAnimSegment955.setUSE("hanim_l1")

HAnimHumanoid95.addSegments(HAnimSegment955)
HAnimSegment956 = x3d.HAnimSegment()
HAnimSegment956.setContainerFieldOverride("segments")
HAnimSegment956.setUSE("hanim_t12")

HAnimHumanoid95.addSegments(HAnimSegment956)
HAnimSegment957 = x3d.HAnimSegment()
HAnimSegment957.setContainerFieldOverride("segments")
HAnimSegment957.setUSE("hanim_t11")

HAnimHumanoid95.addSegments(HAnimSegment957)
HAnimSegment958 = x3d.HAnimSegment()
HAnimSegment958.setContainerFieldOverride("segments")
HAnimSegment958.setUSE("hanim_t10")

HAnimHumanoid95.addSegments(HAnimSegment958)
HAnimSegment959 = x3d.HAnimSegment()
HAnimSegment959.setContainerFieldOverride("segments")
HAnimSegment959.setUSE("hanim_t9")

HAnimHumanoid95.addSegments(HAnimSegment959)
HAnimSegment960 = x3d.HAnimSegment()
HAnimSegment960.setContainerFieldOverride("segments")
HAnimSegment960.setUSE("hanim_t8")

HAnimHumanoid95.addSegments(HAnimSegment960)
HAnimSegment961 = x3d.HAnimSegment()
HAnimSegment961.setContainerFieldOverride("segments")
HAnimSegment961.setUSE("hanim_t7")

HAnimHumanoid95.addSegments(HAnimSegment961)
HAnimSegment962 = x3d.HAnimSegment()
HAnimSegment962.setContainerFieldOverride("segments")
HAnimSegment962.setUSE("hanim_t6")

HAnimHumanoid95.addSegments(HAnimSegment962)
HAnimSegment963 = x3d.HAnimSegment()
HAnimSegment963.setContainerFieldOverride("segments")
HAnimSegment963.setUSE("hanim_t5")

HAnimHumanoid95.addSegments(HAnimSegment963)
HAnimSegment964 = x3d.HAnimSegment()
HAnimSegment964.setContainerFieldOverride("segments")
HAnimSegment964.setUSE("hanim_t4")

HAnimHumanoid95.addSegments(HAnimSegment964)
HAnimSegment965 = x3d.HAnimSegment()
HAnimSegment965.setContainerFieldOverride("segments")
HAnimSegment965.setUSE("hanim_t3")

HAnimHumanoid95.addSegments(HAnimSegment965)
HAnimSegment966 = x3d.HAnimSegment()
HAnimSegment966.setContainerFieldOverride("segments")
HAnimSegment966.setUSE("hanim_t2")

HAnimHumanoid95.addSegments(HAnimSegment966)
HAnimSegment967 = x3d.HAnimSegment()
HAnimSegment967.setContainerFieldOverride("segments")
HAnimSegment967.setUSE("hanim_t1")

HAnimHumanoid95.addSegments(HAnimSegment967)
HAnimSegment968 = x3d.HAnimSegment()
HAnimSegment968.setContainerFieldOverride("segments")
HAnimSegment968.setUSE("hanim_c6")

HAnimHumanoid95.addSegments(HAnimSegment968)
HAnimSegment969 = x3d.HAnimSegment()
HAnimSegment969.setContainerFieldOverride("segments")
HAnimSegment969.setUSE("hanim_c5")

HAnimHumanoid95.addSegments(HAnimSegment969)
HAnimSegment970 = x3d.HAnimSegment()
HAnimSegment970.setContainerFieldOverride("segments")
HAnimSegment970.setUSE("hanim_c3")

HAnimHumanoid95.addSegments(HAnimSegment970)
HAnimSegment971 = x3d.HAnimSegment()
HAnimSegment971.setContainerFieldOverride("segments")
HAnimSegment971.setUSE("hanim_c2")

HAnimHumanoid95.addSegments(HAnimSegment971)
HAnimSegment972 = x3d.HAnimSegment()
HAnimSegment972.setContainerFieldOverride("segments")
HAnimSegment972.setUSE("hanim_c1")

HAnimHumanoid95.addSegments(HAnimSegment972)
HAnimSegment973 = x3d.HAnimSegment()
HAnimSegment973.setContainerFieldOverride("segments")
HAnimSegment973.setUSE("hanim_l_calf")

HAnimHumanoid95.addSegments(HAnimSegment973)
HAnimSegment974 = x3d.HAnimSegment()
HAnimSegment974.setContainerFieldOverride("segments")
HAnimSegment974.setUSE("hanim_r_calf")

HAnimHumanoid95.addSegments(HAnimSegment974)
HAnimSegment975 = x3d.HAnimSegment()
HAnimSegment975.setContainerFieldOverride("segments")
HAnimSegment975.setUSE("hanim_l_forearm")

HAnimHumanoid95.addSegments(HAnimSegment975)
HAnimSegment976 = x3d.HAnimSegment()
HAnimSegment976.setContainerFieldOverride("segments")
HAnimSegment976.setUSE("hanim_r_forearm")

HAnimHumanoid95.addSegments(HAnimSegment976)
HAnimSegment977 = x3d.HAnimSegment()
HAnimSegment977.setContainerFieldOverride("segments")
HAnimSegment977.setUSE("hanim_l_forefoot")

HAnimHumanoid95.addSegments(HAnimSegment977)
HAnimSegment978 = x3d.HAnimSegment()
HAnimSegment978.setContainerFieldOverride("segments")
HAnimSegment978.setUSE("hanim_l_hand")

HAnimHumanoid95.addSegments(HAnimSegment978)
HAnimSegment979 = x3d.HAnimSegment()
HAnimSegment979.setContainerFieldOverride("segments")
HAnimSegment979.setUSE("hanim_r_hand")

HAnimHumanoid95.addSegments(HAnimSegment979)
HAnimSegment980 = x3d.HAnimSegment()
HAnimSegment980.setContainerFieldOverride("segments")
HAnimSegment980.setUSE("hanim_l_hindfoot")

HAnimHumanoid95.addSegments(HAnimSegment980)
HAnimSegment981 = x3d.HAnimSegment()
HAnimSegment981.setContainerFieldOverride("segments")
HAnimSegment981.setUSE("hanim_r_hindfoot")

HAnimHumanoid95.addSegments(HAnimSegment981)
HAnimSegment982 = x3d.HAnimSegment()
HAnimSegment982.setContainerFieldOverride("segments")
HAnimSegment982.setUSE("hanim_l_index_distal")

HAnimHumanoid95.addSegments(HAnimSegment982)
HAnimSegment983 = x3d.HAnimSegment()
HAnimSegment983.setContainerFieldOverride("segments")
HAnimSegment983.setUSE("hanim_l_index_metacarpal")

HAnimHumanoid95.addSegments(HAnimSegment983)
HAnimSegment984 = x3d.HAnimSegment()
HAnimSegment984.setContainerFieldOverride("segments")
HAnimSegment984.setUSE("hanim_l_index_middle")

HAnimHumanoid95.addSegments(HAnimSegment984)
HAnimSegment985 = x3d.HAnimSegment()
HAnimSegment985.setContainerFieldOverride("segments")
HAnimSegment985.setUSE("hanim_l_index_proximal")

HAnimHumanoid95.addSegments(HAnimSegment985)
HAnimSegment986 = x3d.HAnimSegment()
HAnimSegment986.setContainerFieldOverride("segments")
HAnimSegment986.setUSE("hanim_l_middistal")

HAnimHumanoid95.addSegments(HAnimSegment986)
HAnimSegment987 = x3d.HAnimSegment()
HAnimSegment987.setContainerFieldOverride("segments")
HAnimSegment987.setUSE("hanim_r_middistal")

HAnimHumanoid95.addSegments(HAnimSegment987)
HAnimSegment988 = x3d.HAnimSegment()
HAnimSegment988.setContainerFieldOverride("segments")
HAnimSegment988.setUSE("hanim_l_thigh")

HAnimHumanoid95.addSegments(HAnimSegment988)
HAnimSegment989 = x3d.HAnimSegment()
HAnimSegment989.setContainerFieldOverride("segments")
HAnimSegment989.setUSE("hanim_r_thigh")

HAnimHumanoid95.addSegments(HAnimSegment989)
HAnimSegment990 = x3d.HAnimSegment()
HAnimSegment990.setContainerFieldOverride("segments")
HAnimSegment990.setUSE("hanim_l_thumb_distal")

HAnimHumanoid95.addSegments(HAnimSegment990)
HAnimSegment991 = x3d.HAnimSegment()
HAnimSegment991.setContainerFieldOverride("segments")
HAnimSegment991.setUSE("hanim_l_thumb_metacarpal")

HAnimHumanoid95.addSegments(HAnimSegment991)
HAnimSegment992 = x3d.HAnimSegment()
HAnimSegment992.setContainerFieldOverride("segments")
HAnimSegment992.setUSE("hanim_l_thumb_proximal")

HAnimHumanoid95.addSegments(HAnimSegment992)
HAnimSegment993 = x3d.HAnimSegment()
HAnimSegment993.setContainerFieldOverride("segments")
HAnimSegment993.setUSE("hanim_l_upperarm")

HAnimHumanoid95.addSegments(HAnimSegment993)
HAnimSegment994 = x3d.HAnimSegment()
HAnimSegment994.setContainerFieldOverride("segments")
HAnimSegment994.setUSE("hanim_r_upperarm")

HAnimHumanoid95.addSegments(HAnimSegment994)
HAnimSite995 = x3d.HAnimSite()
HAnimSite995.setContainerFieldOverride("sites")
HAnimSite995.setUSE("hanim_crotch_pt")

HAnimHumanoid95.addSites(HAnimSite995)
HAnimSite996 = x3d.HAnimSite()
HAnimSite996.setContainerFieldOverride("sites")
HAnimSite996.setUSE("hanim_skull_tip")

HAnimHumanoid95.addSites(HAnimSite996)
HAnimSite997 = x3d.HAnimSite()
HAnimSite997.setContainerFieldOverride("sites")
HAnimSite997.setUSE("hanim_sellion_pt")

HAnimHumanoid95.addSites(HAnimSite997)
HAnimSite998 = x3d.HAnimSite()
HAnimSite998.setContainerFieldOverride("sites")
HAnimSite998.setUSE("hanim_supramenton_pt")

HAnimHumanoid95.addSites(HAnimSite998)
HAnimSite999 = x3d.HAnimSite()
HAnimSite999.setContainerFieldOverride("sites")
HAnimSite999.setUSE("hanim_nuchale_pt")

HAnimHumanoid95.addSites(HAnimSite999)
HAnimSite1000 = x3d.HAnimSite()
HAnimSite1000.setContainerFieldOverride("sites")
HAnimSite1000.setUSE("hanim_r_asis_pt")

HAnimHumanoid95.addSites(HAnimSite1000)
HAnimSite1001 = x3d.HAnimSite()
HAnimSite1001.setContainerFieldOverride("sites")
HAnimSite1001.setUSE("hanim_l_asis_pt")

HAnimHumanoid95.addSites(HAnimSite1001)
HAnimSite1002 = x3d.HAnimSite()
HAnimSite1002.setContainerFieldOverride("sites")
HAnimSite1002.setUSE("hanim_l_calcaneous_post_pt")

HAnimHumanoid95.addSites(HAnimSite1002)
HAnimSite1003 = x3d.HAnimSite()
HAnimSite1003.setContainerFieldOverride("sites")
HAnimSite1003.setUSE("hanim_r_calcaneous_post_pt")

HAnimHumanoid95.addSites(HAnimSite1003)
HAnimSite1004 = x3d.HAnimSite()
HAnimSite1004.setContainerFieldOverride("sites")
HAnimSite1004.setUSE("hanim_l_dactylion_pt")

HAnimHumanoid95.addSites(HAnimSite1004)
HAnimSite1005 = x3d.HAnimSite()
HAnimSite1005.setContainerFieldOverride("sites")
HAnimSite1005.setUSE("hanim_r_dactylion_pt")

HAnimHumanoid95.addSites(HAnimSite1005)
HAnimSite1006 = x3d.HAnimSite()
HAnimSite1006.setContainerFieldOverride("sites")
HAnimSite1006.setUSE("hanim_l_digit2_pt")

HAnimHumanoid95.addSites(HAnimSite1006)
HAnimSite1007 = x3d.HAnimSite()
HAnimSite1007.setContainerFieldOverride("sites")
HAnimSite1007.setUSE("hanim_r_digit2_pt")

HAnimHumanoid95.addSites(HAnimSite1007)
HAnimSite1008 = x3d.HAnimSite()
HAnimSite1008.setContainerFieldOverride("sites")
HAnimSite1008.setUSE("hanim_l_femoral_lateral_epicn_pt")

HAnimHumanoid95.addSites(HAnimSite1008)
HAnimSite1009 = x3d.HAnimSite()
HAnimSite1009.setContainerFieldOverride("sites")
HAnimSite1009.setUSE("hanim_r_femoral_lateral_epicn_pt")

HAnimHumanoid95.addSites(HAnimSite1009)
HAnimSite1010 = x3d.HAnimSite()
HAnimSite1010.setContainerFieldOverride("sites")
HAnimSite1010.setUSE("hanim_l_femoral_medial_epicn_pt")

HAnimHumanoid95.addSites(HAnimSite1010)
HAnimSite1011 = x3d.HAnimSite()
HAnimSite1011.setContainerFieldOverride("sites")
HAnimSite1011.setUSE("hanim_r_femoral_medial_epicn_pt")

HAnimHumanoid95.addSites(HAnimSite1011)
HAnimSite1012 = x3d.HAnimSite()
HAnimSite1012.setContainerFieldOverride("sites")
HAnimSite1012.setUSE("hanim_l_forefoot_tip")

HAnimHumanoid95.addSites(HAnimSite1012)
HAnimSite1013 = x3d.HAnimSite()
HAnimSite1013.setContainerFieldOverride("sites")
HAnimSite1013.setUSE("hanim_r_gonion_pt")

HAnimHumanoid95.addSites(HAnimSite1013)
HAnimSite1014 = x3d.HAnimSite()
HAnimSite1014.setContainerFieldOverride("sites")
HAnimSite1014.setUSE("hanim_l_gonion_pt")

HAnimHumanoid95.addSites(HAnimSite1014)
HAnimSite1015 = x3d.HAnimSite()
HAnimSite1015.setContainerFieldOverride("sites")
HAnimSite1015.setUSE("hanim_l_hand_tip")

HAnimHumanoid95.addSites(HAnimSite1015)
HAnimSite1016 = x3d.HAnimSite()
HAnimSite1016.setContainerFieldOverride("sites")
HAnimSite1016.setUSE("hanim_r_hand_tip")

HAnimHumanoid95.addSites(HAnimSite1016)
HAnimSite1017 = x3d.HAnimSite()
HAnimSite1017.setContainerFieldOverride("sites")
HAnimSite1017.setUSE("hanim_l_humeral_lateral_epicn_pt")

HAnimHumanoid95.addSites(HAnimSite1017)
HAnimSite1018 = x3d.HAnimSite()
HAnimSite1018.setContainerFieldOverride("sites")
HAnimSite1018.setUSE("hanim_r_humeral_lateral_epicn_pt")

HAnimHumanoid95.addSites(HAnimSite1018)
HAnimSite1019 = x3d.HAnimSite()
HAnimSite1019.setContainerFieldOverride("sites")
HAnimSite1019.setUSE("hanim_l_humeral_medial_epicn_pt")

HAnimHumanoid95.addSites(HAnimSite1019)
HAnimSite1020 = x3d.HAnimSite()
HAnimSite1020.setContainerFieldOverride("sites")
HAnimSite1020.setUSE("hanim_r_humeral_medial_epicn_pt")

HAnimHumanoid95.addSites(HAnimSite1020)
HAnimSite1021 = x3d.HAnimSite()
HAnimSite1021.setContainerFieldOverride("sites")
HAnimSite1021.setUSE("hanim_r_iliocristale_pt")

HAnimHumanoid95.addSites(HAnimSite1021)
HAnimSite1022 = x3d.HAnimSite()
HAnimSite1022.setContainerFieldOverride("sites")
HAnimSite1022.setUSE("hanim_l_iliocristale_pt")

HAnimHumanoid95.addSites(HAnimSite1022)
HAnimSite1023 = x3d.HAnimSite()
HAnimSite1023.setContainerFieldOverride("sites")
HAnimSite1023.setUSE("hanim_l_index_distal_tip")

HAnimHumanoid95.addSites(HAnimSite1023)
HAnimSite1024 = x3d.HAnimSite()
HAnimSite1024.setContainerFieldOverride("sites")
HAnimSite1024.setUSE("hanim_r_infraorbitale_pt")

HAnimHumanoid95.addSites(HAnimSite1024)
HAnimSite1025 = x3d.HAnimSite()
HAnimSite1025.setContainerFieldOverride("sites")
HAnimSite1025.setUSE("hanim_l_infraorbitale_pt")

HAnimHumanoid95.addSites(HAnimSite1025)
HAnimSite1026 = x3d.HAnimSite()
HAnimSite1026.setContainerFieldOverride("sites")
HAnimSite1026.setUSE("hanim_l_knee_crease_pt")

HAnimHumanoid95.addSites(HAnimSite1026)
HAnimSite1027 = x3d.HAnimSite()
HAnimSite1027.setContainerFieldOverride("sites")
HAnimSite1027.setUSE("hanim_r_knee_crease_pt")

HAnimHumanoid95.addSites(HAnimSite1027)
HAnimSite1028 = x3d.HAnimSite()
HAnimSite1028.setContainerFieldOverride("sites")
HAnimSite1028.setUSE("hanim_l_lateral_malleolus_pt")

HAnimHumanoid95.addSites(HAnimSite1028)
HAnimSite1029 = x3d.HAnimSite()
HAnimSite1029.setContainerFieldOverride("sites")
HAnimSite1029.setUSE("hanim_r_lateral_malleolus_pt")

HAnimHumanoid95.addSites(HAnimSite1029)
HAnimSite1030 = x3d.HAnimSite()
HAnimSite1030.setContainerFieldOverride("sites")
HAnimSite1030.setUSE("hanim_l_medial_malleolus_pt")

HAnimHumanoid95.addSites(HAnimSite1030)
HAnimSite1031 = x3d.HAnimSite()
HAnimSite1031.setContainerFieldOverride("sites")
HAnimSite1031.setUSE("hanim_r_medial_malleolus_pt")

HAnimHumanoid95.addSites(HAnimSite1031)
HAnimSite1032 = x3d.HAnimSite()
HAnimSite1032.setContainerFieldOverride("sites")
HAnimSite1032.setUSE("hanim_l_metacarpal_pha2_pt")

HAnimHumanoid95.addSites(HAnimSite1032)
HAnimSite1033 = x3d.HAnimSite()
HAnimSite1033.setContainerFieldOverride("sites")
HAnimSite1033.setUSE("hanim_r_metacarpal_pha2_pt")

HAnimHumanoid95.addSites(HAnimSite1033)
HAnimSite1034 = x3d.HAnimSite()
HAnimSite1034.setContainerFieldOverride("sites")
HAnimSite1034.setUSE("hanim_l_metacarpal_pha5_pt")

HAnimHumanoid95.addSites(HAnimSite1034)
HAnimSite1035 = x3d.HAnimSite()
HAnimSite1035.setContainerFieldOverride("sites")
HAnimSite1035.setUSE("hanim_r_metacarpal_pha5_pt")

HAnimHumanoid95.addSites(HAnimSite1035)
HAnimSite1036 = x3d.HAnimSite()
HAnimSite1036.setContainerFieldOverride("sites")
HAnimSite1036.setUSE("hanim_l_metatarsal_pha1_pt")

HAnimHumanoid95.addSites(HAnimSite1036)
HAnimSite1037 = x3d.HAnimSite()
HAnimSite1037.setContainerFieldOverride("sites")
HAnimSite1037.setUSE("hanim_r_metatarsal_pha1_pt")

HAnimHumanoid95.addSites(HAnimSite1037)
HAnimSite1038 = x3d.HAnimSite()
HAnimSite1038.setContainerFieldOverride("sites")
HAnimSite1038.setUSE("hanim_l_metatarsal_pha5_pt")

HAnimHumanoid95.addSites(HAnimSite1038)
HAnimSite1039 = x3d.HAnimSite()
HAnimSite1039.setContainerFieldOverride("sites")
HAnimSite1039.setUSE("hanim_r_metatarsal_pha5_pt")

HAnimHumanoid95.addSites(HAnimSite1039)
HAnimSite1040 = x3d.HAnimSite()
HAnimSite1040.setContainerFieldOverride("sites")
HAnimSite1040.setUSE("hanim_l_middistal_tip")

HAnimHumanoid95.addSites(HAnimSite1040)
HAnimSite1041 = x3d.HAnimSite()
HAnimSite1041.setContainerFieldOverride("sites")
HAnimSite1041.setUSE("hanim_r_middistal_tip")

HAnimHumanoid95.addSites(HAnimSite1041)
HAnimSite1042 = x3d.HAnimSite()
HAnimSite1042.setContainerFieldOverride("sites")
HAnimSite1042.setUSE("hanim_l_olecranon_pt")

HAnimHumanoid95.addSites(HAnimSite1042)
HAnimSite1043 = x3d.HAnimSite()
HAnimSite1043.setContainerFieldOverride("sites")
HAnimSite1043.setUSE("hanim_r_olecranon_pt")

HAnimHumanoid95.addSites(HAnimSite1043)
HAnimSite1044 = x3d.HAnimSite()
HAnimSite1044.setContainerFieldOverride("sites")
HAnimSite1044.setUSE("hanim_r_psis_pt")

HAnimHumanoid95.addSites(HAnimSite1044)
HAnimSite1045 = x3d.HAnimSite()
HAnimSite1045.setContainerFieldOverride("sites")
HAnimSite1045.setUSE("hanim_l_psis_pt")

HAnimHumanoid95.addSites(HAnimSite1045)
HAnimSite1046 = x3d.HAnimSite()
HAnimSite1046.setContainerFieldOverride("sites")
HAnimSite1046.setUSE("hanim_l_radial_styloid_pt")

HAnimHumanoid95.addSites(HAnimSite1046)
HAnimSite1047 = x3d.HAnimSite()
HAnimSite1047.setContainerFieldOverride("sites")
HAnimSite1047.setUSE("hanim_r_radial_styloid_pt")

HAnimHumanoid95.addSites(HAnimSite1047)
HAnimSite1048 = x3d.HAnimSite()
HAnimSite1048.setContainerFieldOverride("sites")
HAnimSite1048.setUSE("hanim_l_radiale_pt")

HAnimHumanoid95.addSites(HAnimSite1048)
HAnimSite1049 = x3d.HAnimSite()
HAnimSite1049.setContainerFieldOverride("sites")
HAnimSite1049.setUSE("hanim_r_radiale_pt")

HAnimHumanoid95.addSites(HAnimSite1049)
HAnimSite1050 = x3d.HAnimSite()
HAnimSite1050.setContainerFieldOverride("sites")
HAnimSite1050.setUSE("hanim_l_sphyrion_pt")

HAnimHumanoid95.addSites(HAnimSite1050)
HAnimSite1051 = x3d.HAnimSite()
HAnimSite1051.setContainerFieldOverride("sites")
HAnimSite1051.setUSE("hanim_r_sphyrion_pt")

HAnimHumanoid95.addSites(HAnimSite1051)
HAnimSite1052 = x3d.HAnimSite()
HAnimSite1052.setContainerFieldOverride("sites")
HAnimSite1052.setUSE("hanim_l_thumb_distal_tip")

HAnimHumanoid95.addSites(HAnimSite1052)
HAnimSite1053 = x3d.HAnimSite()
HAnimSite1053.setContainerFieldOverride("sites")
HAnimSite1053.setUSE("hanim_r_tragion_pt")

HAnimHumanoid95.addSites(HAnimSite1053)
HAnimSite1054 = x3d.HAnimSite()
HAnimSite1054.setContainerFieldOverride("sites")
HAnimSite1054.setUSE("hanim_l_tragion_pt")

HAnimHumanoid95.addSites(HAnimSite1054)
HAnimSite1055 = x3d.HAnimSite()
HAnimSite1055.setContainerFieldOverride("sites")
HAnimSite1055.setUSE("hanim_r_trochanterion_pt")

HAnimHumanoid95.addSites(HAnimSite1055)
HAnimSite1056 = x3d.HAnimSite()
HAnimSite1056.setContainerFieldOverride("sites")
HAnimSite1056.setUSE("hanim_l_trochanterion_pt")

HAnimHumanoid95.addSites(HAnimSite1056)
HAnimSite1057 = x3d.HAnimSite()
HAnimSite1057.setContainerFieldOverride("sites")
HAnimSite1057.setUSE("hanim_l_ulnar_styloid_pt")

HAnimHumanoid95.addSites(HAnimSite1057)
HAnimSite1058 = x3d.HAnimSite()
HAnimSite1058.setContainerFieldOverride("sites")
HAnimSite1058.setUSE("hanim_r_ulnar_styloid_pt")

HAnimHumanoid95.addSites(HAnimSite1058)
HAnimSite1059 = x3d.HAnimSite()
HAnimSite1059.setDEF("hanim_DiamondManLOA_2_view")
HAnimSite1059.setName("DiamondManLOA_2_view")
Viewpoint1060 = x3d.Viewpoint()
Viewpoint1060.setDEF("FrontView")
Viewpoint1060.setDescription("Front View")
Viewpoint1060.setPosition(x3d.doubleToFloat([0.35,0.854,2.57665]))

HAnimSite1059.addChild(Viewpoint1060)
Viewpoint1061 = x3d.Viewpoint()
Viewpoint1061.setDEF("SideView")
Viewpoint1061.setDescription("Side View")
Viewpoint1061.setPosition(x3d.doubleToFloat([2,0.854,0]))
Viewpoint1061.setOrientation(x3d.doubleToFloat([0,1,0,1.57079]))

HAnimSite1059.addChild(Viewpoint1061)
Viewpoint1062 = x3d.Viewpoint()
Viewpoint1062.setDEF("TopView")
Viewpoint1062.setDescription("Top View")
Viewpoint1062.setPosition(x3d.doubleToFloat([0,3.4495,0]))
Viewpoint1062.setOrientation(x3d.doubleToFloat([1,0,0,-1.57079]))

HAnimSite1059.addChild(Viewpoint1062)
Viewpoint1063 = x3d.Viewpoint()
Viewpoint1063.setDEF("RootView")
Viewpoint1063.setDescription("Humanoid Root View")
Viewpoint1063.setPosition(x3d.doubleToFloat([0,0.824,0.277]))

HAnimSite1059.addChild(Viewpoint1063)
Viewpoint1064 = x3d.Viewpoint()
Viewpoint1064.setDEF("InclinedView")
Viewpoint1064.setDescription("Inclined View")
Viewpoint1064.setPosition(x3d.doubleToFloat([1.62,1.05,2.06]))
Viewpoint1064.setOrientation(x3d.doubleToFloat([-0.113,0.993,0.0347,0.671]))

HAnimSite1059.addChild(Viewpoint1064)

HAnimHumanoid95.addViewpoints(HAnimSite1059)

Scene18.addChild(HAnimHumanoid95)

X3D0.setScene(Scene18)
X3D0.toFileX3D("../data/DiamondManLOA_2.new.graalpy.x3d")
X3D0.toFileJSON("../data/DiamondManLOA_2.new.graalpy.json")
