import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setLevel(1)
component2.setName("H-Anim")

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setContent("HAnimModelFootLeft.x3d")
meta3.setName("title")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setContent("Left foot, using high-fidelity definitions for H-Anim version 2.2")
meta4.setName("description")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setContent("YOO Kwan Hee and Don Brutzman")
meta5.setName("creator")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setContent("26 January 2015")
meta6.setName("created")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setContent("20 October 2019")
meta7.setName("modified")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setContent("not yet to scale")
meta8.setName("warning")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?")
meta9.setName("warning")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setContent("https://www.web3d.org/working-groups/humanoid-animation-h-anim")
meta10.setName("reference")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setContent("https://www.web3d.org/files/specifications/19774/V1.0")
meta11.setName("reference")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html")
meta12.setName("reference")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setContent("X3D H-Anim humanoid animation")
meta13.setName("subject")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setContent("scene, DOCTYPE and Schema under development.")
meta14.setName("warning")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setContent("Integrate and confirm Segment/Joint names, Viewpoints.")
meta15.setName("TODO")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.x3d")
meta16.setName("identifier")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")
meta17.setName("generator")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setContent("../license.html")
meta18.setName("license")

head1.addMeta(meta18)

X3D0.setHead(head1)
Scene19 = x3d.Scene()
WorldInfo20 = x3d.WorldInfo()
WorldInfo20.setTitle("HAnimModelFootLeft.x3d")

Scene19.addChildren(WorldInfo20)
HAnimHumanoid21 = x3d.HAnimHumanoid()
HAnimHumanoid21.setDEF("Humanoid_Left_Foot")
HAnimHumanoid21.setInfo(["humanoidVersion=2.0"])
HAnimHumanoid21.setJointBindingPositions([0,0,0])
HAnimHumanoid21.setJointBindingRotations([0,0,1,0])
HAnimHumanoid21.setJointBindingScales([1,1,1])
HAnimHumanoid21.setLoa(-1)
HAnimHumanoid21.setName("Humanoid_Left_Foot")
HAnimHumanoid21.setSkeletalConfiguration("BASIC")
HAnimHumanoid21.setVersion("2.0")
HAnimJoint22 = x3d.HAnimJoint()
HAnimJoint22.setDEF("hanim_HumanoidRoot")
HAnimJoint22.setName("humanoid_root")
HAnimJoint23 = x3d.HAnimJoint()
HAnimJoint23.setDEF("l_talocrural_joint")
HAnimJoint23.setName("l_talocrural_joint")
HAnimSegment24 = x3d.HAnimSegment()
HAnimSegment24.setDEF("l_talus")
HAnimSegment24.setName("l_talus")
Transform25 = x3d.Transform()
Shape26 = x3d.Shape()
Shape26.setDEF("HAnimJointShape")
Sphere27 = x3d.Sphere()
Sphere27.setRadius(0.025)

Shape26.setGeometry(Sphere27)
Appearance28 = x3d.Appearance()
Appearance28.setDEF("HAnimJointAppearance")
Material29 = x3d.Material()
Material29.setDiffuseColor([0,0,1])

Appearance28.setMaterial(Material29)

Shape26.setAppearance(Appearance28)

Transform25.addChildren(Shape26)

HAnimSegment24.addChildren(Transform25)
Shape30 = x3d.Shape()
Appearance31 = x3d.Appearance()
Material32 = x3d.Material()
Material32.setEmissiveColor([1,1,1])

Appearance31.setMaterial(Material32)

Shape30.setAppearance(Appearance31)
IndexedLineSet33 = x3d.IndexedLineSet()
IndexedLineSet33.setDEF("TCtoTCN")
IndexedLineSet33.setCoordIndex([0,1])
Coordinate34 = x3d.Coordinate()
Coordinate34.setPoint([0,0,0,0,-0.3,0])

IndexedLineSet33.setCoord(Coordinate34)

Shape30.setGeometry(IndexedLineSet33)

HAnimSegment24.addChildren(Shape30)
Shape35 = x3d.Shape()
Appearance36 = x3d.Appearance()
Material37 = x3d.Material()
Material37.setEmissiveColor([1,1,1])

Appearance36.setMaterial(Material37)

Shape35.setAppearance(Appearance36)
IndexedLineSet38 = x3d.IndexedLineSet()
IndexedLineSet38.setDEF("TCtoCC")
IndexedLineSet38.setCoordIndex([0,1])
Coordinate39 = x3d.Coordinate()
Coordinate39.setPoint([0,0,0,0.2,0.3,0])

IndexedLineSet38.setCoord(Coordinate39)

Shape35.setGeometry(IndexedLineSet38)

HAnimSegment24.addChildren(Shape35)

HAnimJoint23.addChildren(HAnimSegment24)
# TCN 
HAnimJoint40 = x3d.HAnimJoint()
HAnimJoint40.setDEF("l_talocalcaneonavicular_joint")
HAnimJoint40.setCenter([0,-0.3,0])
HAnimJoint40.setName("l_talocalcaneonavicular_joint")
HAnimSegment41 = x3d.HAnimSegment()
HAnimSegment41.setDEF("l_navicular")
HAnimSegment41.setName("l_navicular")
Transform42 = x3d.Transform()
Transform42.setTranslation([0,-0.3,0])
Shape43 = x3d.Shape()
Shape43.setUSE("HAnimJointShape")

Transform42.addChildren(Shape43)

HAnimSegment41.addChildren(Transform42)
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Material46 = x3d.Material()
Material46.setEmissiveColor([1,1,1])

Appearance45.setMaterial(Material46)

Shape44.setAppearance(Appearance45)
IndexedLineSet47 = x3d.IndexedLineSet()
IndexedLineSet47.setDEF("TCNtoCN1")
IndexedLineSet47.setCoordIndex([0,1])
Coordinate48 = x3d.Coordinate()
Coordinate48.setPoint([0,-0.3,0,-0.1,-0.45,0])

IndexedLineSet47.setCoord(Coordinate48)

Shape44.setGeometry(IndexedLineSet47)

HAnimSegment41.addChildren(Shape44)
Shape49 = x3d.Shape()
Appearance50 = x3d.Appearance()
Material51 = x3d.Material()
Material51.setEmissiveColor([1,1,1])

Appearance50.setMaterial(Material51)

Shape49.setAppearance(Appearance50)
IndexedLineSet52 = x3d.IndexedLineSet()
IndexedLineSet52.setDEF("TCNtoCN2")
IndexedLineSet52.setCoordIndex([0,1])
Coordinate53 = x3d.Coordinate()
Coordinate53.setPoint([0,-0.3,0,0,-0.45,0])

IndexedLineSet52.setCoord(Coordinate53)

Shape49.setGeometry(IndexedLineSet52)

HAnimSegment41.addChildren(Shape49)
Shape54 = x3d.Shape()
Appearance55 = x3d.Appearance()
Material56 = x3d.Material()
Material56.setEmissiveColor([1,1,1])

Appearance55.setMaterial(Material56)

Shape54.setAppearance(Appearance55)
IndexedLineSet57 = x3d.IndexedLineSet()
IndexedLineSet57.setDEF("TCNtoCN3")
IndexedLineSet57.setCoordIndex([0,1])
Coordinate58 = x3d.Coordinate()
Coordinate58.setPoint([0,-0.3,0,0.1,-0.4,0])

IndexedLineSet57.setCoord(Coordinate58)

Shape54.setGeometry(IndexedLineSet57)

HAnimSegment41.addChildren(Shape54)

HAnimJoint40.addChildren(HAnimSegment41)
# CN1 
HAnimJoint59 = x3d.HAnimJoint()
HAnimJoint59.setDEF("l_cuneonavicular_joint1")
HAnimJoint59.setCenter([-0.1,-0.45,0])
HAnimJoint59.setName("l_cuneonavicular_joint1")
HAnimSegment60 = x3d.HAnimSegment()
HAnimSegment60.setDEF("l_cuneiform1")
HAnimSegment60.setName("l_cuneiform1")
Transform61 = x3d.Transform()
Transform61.setTranslation([-0.1,-0.45,0])
Shape62 = x3d.Shape()
Shape62.setUSE("HAnimJointShape")

Transform61.addChildren(Shape62)

HAnimSegment60.addChildren(Transform61)
Shape63 = x3d.Shape()
Appearance64 = x3d.Appearance()
Material65 = x3d.Material()
Material65.setEmissiveColor([1,1,1])

Appearance64.setMaterial(Material65)

Shape63.setAppearance(Appearance64)
IndexedLineSet66 = x3d.IndexedLineSet()
IndexedLineSet66.setDEF("CN1toTMT1")
IndexedLineSet66.setCoordIndex([0,1])
Coordinate67 = x3d.Coordinate()
Coordinate67.setPoint([-0.1,-0.45,0,-0.1,-0.6,0])

IndexedLineSet66.setCoord(Coordinate67)

Shape63.setGeometry(IndexedLineSet66)

HAnimSegment60.addChildren(Shape63)

HAnimJoint59.addChildren(HAnimSegment60)
HAnimJoint68 = x3d.HAnimJoint()
HAnimJoint68.setDEF("l_tarsometatarsal_joint1")
HAnimJoint68.setCenter([-0.1,-0.6,0])
HAnimJoint68.setName("l_tarsometatarsal_joint1")
HAnimSegment69 = x3d.HAnimSegment()
HAnimSegment69.setDEF("l_metatarsal1")
HAnimSegment69.setName("l_metatarsal1")
Transform70 = x3d.Transform()
Transform70.setTranslation([-0.1,-0.6,0])
Shape71 = x3d.Shape()
Shape71.setUSE("HAnimJointShape")

Transform70.addChildren(Shape71)

HAnimSegment69.addChildren(Transform70)
Shape72 = x3d.Shape()
Appearance73 = x3d.Appearance()
Material74 = x3d.Material()
Material74.setEmissiveColor([1,1,1])

Appearance73.setMaterial(Material74)

Shape72.setAppearance(Appearance73)
IndexedLineSet75 = x3d.IndexedLineSet()
IndexedLineSet75.setDEF("TMT1toMTP1")
IndexedLineSet75.setCoordIndex([0,1])
Coordinate76 = x3d.Coordinate()
Coordinate76.setPoint([-0.1,-0.6,0,-0.1,-0.9,0])

IndexedLineSet75.setCoord(Coordinate76)

Shape72.setGeometry(IndexedLineSet75)

HAnimSegment69.addChildren(Shape72)

HAnimJoint68.addChildren(HAnimSegment69)
HAnimJoint77 = x3d.HAnimJoint()
HAnimJoint77.setDEF("l_metatarsophalangeal_joint1")
HAnimJoint77.setCenter([-0.1,-0.9,0])
HAnimJoint77.setName("l_metatarsophalangeal_joint1")
HAnimSegment78 = x3d.HAnimSegment()
HAnimSegment78.setDEF("l_proximal_phalanges1")
HAnimSegment78.setName("l_proximal_phalanges1")
Transform79 = x3d.Transform()
Transform79.setTranslation([-0.1,-0.9,0])
Shape80 = x3d.Shape()
Shape80.setUSE("HAnimJointShape")

Transform79.addChildren(Shape80)

HAnimSegment78.addChildren(Transform79)
Shape81 = x3d.Shape()
Appearance82 = x3d.Appearance()
Material83 = x3d.Material()
Material83.setEmissiveColor([1,1,1])

Appearance82.setMaterial(Material83)

Shape81.setAppearance(Appearance82)
IndexedLineSet84 = x3d.IndexedLineSet()
IndexedLineSet84.setDEF("MTP1toIP1")
IndexedLineSet84.setCoordIndex([0,1])
Coordinate85 = x3d.Coordinate()
Coordinate85.setPoint([-0.1,-0.9,0,-0.1,-1.05,0])

IndexedLineSet84.setCoord(Coordinate85)

Shape81.setGeometry(IndexedLineSet84)

HAnimSegment78.addChildren(Shape81)

HAnimJoint77.addChildren(HAnimSegment78)
HAnimJoint86 = x3d.HAnimJoint()
HAnimJoint86.setDEF("l_f_Interphalangeal_joint")
HAnimJoint86.setCenter([-0.1,-1.05,0])
HAnimJoint86.setName("l_f_Interphalangeal_joint")
HAnimSegment87 = x3d.HAnimSegment()
HAnimSegment87.setDEF("l_distal_phalanges1")
HAnimSegment87.setName("l_distal_phalanges1")
Transform88 = x3d.Transform()
Transform88.setTranslation([-0.1,-1.05,0])
Shape89 = x3d.Shape()
Shape89.setUSE("HAnimJointShape")

Transform88.addChildren(Shape89)

HAnimSegment87.addChildren(Transform88)
Shape90 = x3d.Shape()
Appearance91 = x3d.Appearance()
Material92 = x3d.Material()
Material92.setEmissiveColor([1,1,1])

Appearance91.setMaterial(Material92)

Shape90.setAppearance(Appearance91)
IndexedLineSet93 = x3d.IndexedLineSet()
IndexedLineSet93.setDEF("tiptoe_l_distal_phalanges1")
IndexedLineSet93.setCoordIndex([0,1])
Coordinate94 = x3d.Coordinate()
Coordinate94.setPoint([-0.1,-1.05,0,-0.1,-1.1,0])

IndexedLineSet93.setCoord(Coordinate94)

Shape90.setGeometry(IndexedLineSet93)

HAnimSegment87.addChildren(Shape90)

HAnimJoint86.addChildren(HAnimSegment87)

HAnimJoint77.addChildren(HAnimJoint86)

HAnimJoint68.addChildren(HAnimJoint77)

HAnimJoint59.addChildren(HAnimJoint68)

HAnimJoint40.addChildren(HAnimJoint59)
# CN2 
HAnimJoint95 = x3d.HAnimJoint()
HAnimJoint95.setDEF("l_cuneonavicular_joint2")
HAnimJoint95.setCenter([0,-0.45,0])
HAnimJoint95.setName("l_cuneonavicular_joint2")
HAnimSegment96 = x3d.HAnimSegment()
HAnimSegment96.setDEF("l_cuneiform2")
HAnimSegment96.setName("l_cuneiform2")
Transform97 = x3d.Transform()
Transform97.setTranslation([0,-0.45,0])
Shape98 = x3d.Shape()
Shape98.setUSE("HAnimJointShape")

Transform97.addChildren(Shape98)

HAnimSegment96.addChildren(Transform97)
Shape99 = x3d.Shape()
Appearance100 = x3d.Appearance()
Material101 = x3d.Material()
Material101.setEmissiveColor([1,1,1])

Appearance100.setMaterial(Material101)

Shape99.setAppearance(Appearance100)
IndexedLineSet102 = x3d.IndexedLineSet()
IndexedLineSet102.setDEF("CN2toTMT2")
IndexedLineSet102.setCoordIndex([0,1])
Coordinate103 = x3d.Coordinate()
Coordinate103.setPoint([0,-0.45,0,0.05,-0.6,0])

IndexedLineSet102.setCoord(Coordinate103)

Shape99.setGeometry(IndexedLineSet102)

HAnimSegment96.addChildren(Shape99)

HAnimJoint95.addChildren(HAnimSegment96)
HAnimJoint104 = x3d.HAnimJoint()
HAnimJoint104.setDEF("l_tarsometatarsal_joint2")
HAnimJoint104.setCenter([0.05,-0.6,0])
HAnimJoint104.setName("l_tarsometatarsal_joint2")
HAnimSegment105 = x3d.HAnimSegment()
HAnimSegment105.setDEF("l_metatarsal2")
HAnimSegment105.setName("l_metatarsal2")
Transform106 = x3d.Transform()
Transform106.setTranslation([0.05,-0.6,0])
Shape107 = x3d.Shape()
Shape107.setUSE("HAnimJointShape")

Transform106.addChildren(Shape107)

HAnimSegment105.addChildren(Transform106)
Shape108 = x3d.Shape()
Appearance109 = x3d.Appearance()
Material110 = x3d.Material()
Material110.setEmissiveColor([1,1,1])

Appearance109.setMaterial(Material110)

Shape108.setAppearance(Appearance109)
IndexedLineSet111 = x3d.IndexedLineSet()
IndexedLineSet111.setDEF("TMT2toMTP2")
IndexedLineSet111.setCoordIndex([0,1])
Coordinate112 = x3d.Coordinate()
Coordinate112.setPoint([0.05,-0.6,0,0.05,-0.9,0])

IndexedLineSet111.setCoord(Coordinate112)

Shape108.setGeometry(IndexedLineSet111)

HAnimSegment105.addChildren(Shape108)

HAnimJoint104.addChildren(HAnimSegment105)
HAnimJoint113 = x3d.HAnimJoint()
HAnimJoint113.setDEF("l_metatarsophalangeal_joint2")
HAnimJoint113.setCenter([0.05,-0.9,0])
HAnimJoint113.setName("l_metatarsophalangeal_joint2")
HAnimSegment114 = x3d.HAnimSegment()
HAnimSegment114.setDEF("l_proximal_phalanges2")
HAnimSegment114.setName("l_proximal_phalanges2")
Transform115 = x3d.Transform()
Transform115.setTranslation([0.05,-0.9,0])
Shape116 = x3d.Shape()
Shape116.setUSE("HAnimJointShape")

Transform115.addChildren(Shape116)

HAnimSegment114.addChildren(Transform115)
Shape117 = x3d.Shape()
Appearance118 = x3d.Appearance()
Material119 = x3d.Material()
Material119.setEmissiveColor([1,1,1])

Appearance118.setMaterial(Material119)

Shape117.setAppearance(Appearance118)
IndexedLineSet120 = x3d.IndexedLineSet()
IndexedLineSet120.setDEF("MTP2toPIP2")
IndexedLineSet120.setCoordIndex([0,1])
Coordinate121 = x3d.Coordinate()
Coordinate121.setPoint([0.05,-0.9,0,0.05,-1.05,0])

IndexedLineSet120.setCoord(Coordinate121)

Shape117.setGeometry(IndexedLineSet120)

HAnimSegment114.addChildren(Shape117)

HAnimJoint113.addChildren(HAnimSegment114)
HAnimJoint122 = x3d.HAnimJoint()
HAnimJoint122.setDEF("l_f_proximal_Interphalangeal_joint2")
HAnimJoint122.setCenter([0.05,-1.05,0])
HAnimJoint122.setName("l_f_proximal_Interphalangeal_joint2")
HAnimSegment123 = x3d.HAnimSegment()
HAnimSegment123.setDEF("l_middle_phalanges2")
HAnimSegment123.setName("l_middle_phalanges2")
Transform124 = x3d.Transform()
Transform124.setTranslation([0.05,-1.05,0])
Shape125 = x3d.Shape()
Shape125.setUSE("HAnimJointShape")

Transform124.addChildren(Shape125)

HAnimSegment123.addChildren(Transform124)
Shape126 = x3d.Shape()
Appearance127 = x3d.Appearance()
Material128 = x3d.Material()
Material128.setEmissiveColor([1,1,1])

Appearance127.setMaterial(Material128)

Shape126.setAppearance(Appearance127)
IndexedLineSet129 = x3d.IndexedLineSet()
IndexedLineSet129.setDEF("PIP2toDIP2")
IndexedLineSet129.setCoordIndex([0,1])
Coordinate130 = x3d.Coordinate()
Coordinate130.setPoint([0.05,-1.05,0,0.05,-1.12,0])

IndexedLineSet129.setCoord(Coordinate130)

Shape126.setGeometry(IndexedLineSet129)

HAnimSegment123.addChildren(Shape126)

HAnimJoint122.addChildren(HAnimSegment123)
HAnimJoint131 = x3d.HAnimJoint()
HAnimJoint131.setDEF("l_f_distal_Interphalangeal_joint2")
HAnimJoint131.setCenter([0.05,-1.12,0])
HAnimJoint131.setName("l_f_distal_Interphalangeal_joint2")
HAnimSegment132 = x3d.HAnimSegment()
HAnimSegment132.setDEF("l_distal_phalanges2")
HAnimSegment132.setName("l_distal_phalanges2")
Transform133 = x3d.Transform()
Transform133.setTranslation([0.05,-1.12,0])
Shape134 = x3d.Shape()
Shape134.setUSE("HAnimJointShape")

Transform133.addChildren(Shape134)

HAnimSegment132.addChildren(Transform133)
Shape135 = x3d.Shape()
Appearance136 = x3d.Appearance()
Material137 = x3d.Material()
Material137.setEmissiveColor([1,1,1])

Appearance136.setMaterial(Material137)

Shape135.setAppearance(Appearance136)
IndexedLineSet138 = x3d.IndexedLineSet()
IndexedLineSet138.setDEF("tiptoe_l_f_distal_Interphalangeal_joint2")
IndexedLineSet138.setCoordIndex([0,1])
Coordinate139 = x3d.Coordinate()
Coordinate139.setPoint([0.05,-1.12,0,0.05,-1.16,0])

IndexedLineSet138.setCoord(Coordinate139)

Shape135.setGeometry(IndexedLineSet138)

HAnimSegment132.addChildren(Shape135)

HAnimJoint131.addChildren(HAnimSegment132)

HAnimJoint122.addChildren(HAnimJoint131)

HAnimJoint113.addChildren(HAnimJoint122)

HAnimJoint104.addChildren(HAnimJoint113)

HAnimJoint95.addChildren(HAnimJoint104)

HAnimJoint40.addChildren(HAnimJoint95)
# CN3 
HAnimJoint140 = x3d.HAnimJoint()
HAnimJoint140.setDEF("l_cuneonavicular_joint3")
HAnimJoint140.setCenter([0.1,-0.4,0])
HAnimJoint140.setName("l_cuneonavicular_joint3")
HAnimSegment141 = x3d.HAnimSegment()
HAnimSegment141.setDEF("l_cuneiform3")
HAnimSegment141.setName("l_cuneiform3")
Transform142 = x3d.Transform()
Transform142.setTranslation([0.1,-0.4,0])
Shape143 = x3d.Shape()
Shape143.setUSE("HAnimJointShape")

Transform142.addChildren(Shape143)

HAnimSegment141.addChildren(Transform142)
Shape144 = x3d.Shape()
Appearance145 = x3d.Appearance()
Material146 = x3d.Material()
Material146.setEmissiveColor([1,1,1])

Appearance145.setMaterial(Material146)

Shape144.setAppearance(Appearance145)
IndexedLineSet147 = x3d.IndexedLineSet()
IndexedLineSet147.setDEF("CN3toTMT3")
IndexedLineSet147.setCoordIndex([0,1])
Coordinate148 = x3d.Coordinate()
Coordinate148.setPoint([0.1,-0.4,0,0.15,-0.6,0])

IndexedLineSet147.setCoord(Coordinate148)

Shape144.setGeometry(IndexedLineSet147)

HAnimSegment141.addChildren(Shape144)

HAnimJoint140.addChildren(HAnimSegment141)
HAnimJoint149 = x3d.HAnimJoint()
HAnimJoint149.setDEF("l_tarsometatarsal_joint3")
HAnimJoint149.setCenter([0.15,-0.6,0])
HAnimJoint149.setName("l_tarsometatarsal_joint3")
HAnimSegment150 = x3d.HAnimSegment()
HAnimSegment150.setDEF("l_metatarsal3")
HAnimSegment150.setName("l_metatarsal3")
Transform151 = x3d.Transform()
Transform151.setTranslation([0.15,-0.6,0])
Shape152 = x3d.Shape()
Shape152.setUSE("HAnimJointShape")

Transform151.addChildren(Shape152)

HAnimSegment150.addChildren(Transform151)
Shape153 = x3d.Shape()
Appearance154 = x3d.Appearance()
Material155 = x3d.Material()
Material155.setEmissiveColor([1,1,1])

Appearance154.setMaterial(Material155)

Shape153.setAppearance(Appearance154)
IndexedLineSet156 = x3d.IndexedLineSet()
IndexedLineSet156.setDEF("TMT3toMTP3")
IndexedLineSet156.setCoordIndex([0,1])
Coordinate157 = x3d.Coordinate()
Coordinate157.setPoint([0.15,-0.6,0,0.15,-0.9,0])

IndexedLineSet156.setCoord(Coordinate157)

Shape153.setGeometry(IndexedLineSet156)

HAnimSegment150.addChildren(Shape153)

HAnimJoint149.addChildren(HAnimSegment150)
HAnimJoint158 = x3d.HAnimJoint()
HAnimJoint158.setDEF("l_metatarsophalangeal_joint3")
HAnimJoint158.setCenter([0.15,-0.9,0])
HAnimJoint158.setName("l_metatarsophalangeal_joint3")
HAnimSegment159 = x3d.HAnimSegment()
HAnimSegment159.setDEF("l_proximal_phalanges3")
HAnimSegment159.setName("l_proximal_phalanges3")
Transform160 = x3d.Transform()
Transform160.setTranslation([0.15,-0.9,0])
Shape161 = x3d.Shape()
Shape161.setUSE("HAnimJointShape")

Transform160.addChildren(Shape161)

HAnimSegment159.addChildren(Transform160)
Shape162 = x3d.Shape()
Appearance163 = x3d.Appearance()
Material164 = x3d.Material()
Material164.setEmissiveColor([1,1,1])

Appearance163.setMaterial(Material164)

Shape162.setAppearance(Appearance163)
IndexedLineSet165 = x3d.IndexedLineSet()
IndexedLineSet165.setDEF("MTP3toPIP3")
IndexedLineSet165.setCoordIndex([0,1])
Coordinate166 = x3d.Coordinate()
Coordinate166.setPoint([0.15,-0.9,0,0.15,-1.05,0])

IndexedLineSet165.setCoord(Coordinate166)

Shape162.setGeometry(IndexedLineSet165)

HAnimSegment159.addChildren(Shape162)

HAnimJoint158.addChildren(HAnimSegment159)
HAnimJoint167 = x3d.HAnimJoint()
HAnimJoint167.setDEF("l_f_proximal_Interphalangeal_joint3")
HAnimJoint167.setCenter([0.15,-1.05,0])
HAnimJoint167.setName("l_f_proximal_Interphalangeal_joint3")
HAnimSegment168 = x3d.HAnimSegment()
HAnimSegment168.setDEF("l_middle_phalanges3")
HAnimSegment168.setName("l_middle_phalanges3")
Transform169 = x3d.Transform()
Transform169.setTranslation([0.15,-1.05,0])
Shape170 = x3d.Shape()
Shape170.setUSE("HAnimJointShape")

Transform169.addChildren(Shape170)

HAnimSegment168.addChildren(Transform169)
Shape171 = x3d.Shape()
Appearance172 = x3d.Appearance()
Material173 = x3d.Material()
Material173.setEmissiveColor([1,1,1])

Appearance172.setMaterial(Material173)

Shape171.setAppearance(Appearance172)
IndexedLineSet174 = x3d.IndexedLineSet()
IndexedLineSet174.setDEF("PIP3toDIP3")
IndexedLineSet174.setCoordIndex([0,1])
Coordinate175 = x3d.Coordinate()
Coordinate175.setPoint([0.15,-1.05,0,0.15,-1.13,0])

IndexedLineSet174.setCoord(Coordinate175)

Shape171.setGeometry(IndexedLineSet174)

HAnimSegment168.addChildren(Shape171)

HAnimJoint167.addChildren(HAnimSegment168)
HAnimJoint176 = x3d.HAnimJoint()
HAnimJoint176.setDEF("l_f_distal_Interphalangeal_joint3")
HAnimJoint176.setCenter([0.15,-1.13,0])
HAnimJoint176.setName("l_f_distal_Interphalangeal_joint3")
HAnimSegment177 = x3d.HAnimSegment()
HAnimSegment177.setDEF("l_distal_phalanges3")
HAnimSegment177.setName("l_distal_phalanges3")
Transform178 = x3d.Transform()
Transform178.setTranslation([0.15,-1.13,0])
Shape179 = x3d.Shape()
Shape179.setUSE("HAnimJointShape")

Transform178.addChildren(Shape179)

HAnimSegment177.addChildren(Transform178)
Shape180 = x3d.Shape()
Appearance181 = x3d.Appearance()
Material182 = x3d.Material()
Material182.setEmissiveColor([1,1,1])

Appearance181.setMaterial(Material182)

Shape180.setAppearance(Appearance181)
IndexedLineSet183 = x3d.IndexedLineSet()
IndexedLineSet183.setDEF("tiptoe_l_f_distal_Interphalangeal_joint3")
IndexedLineSet183.setCoordIndex([0,1])
Coordinate184 = x3d.Coordinate()
Coordinate184.setPoint([0.15,-1.13,0,0.15,-1.16,0])

IndexedLineSet183.setCoord(Coordinate184)

Shape180.setGeometry(IndexedLineSet183)

HAnimSegment177.addChildren(Shape180)

HAnimJoint176.addChildren(HAnimSegment177)

HAnimJoint167.addChildren(HAnimJoint176)

HAnimJoint158.addChildren(HAnimJoint167)

HAnimJoint149.addChildren(HAnimJoint158)

HAnimJoint140.addChildren(HAnimJoint149)

HAnimJoint40.addChildren(HAnimJoint140)

HAnimJoint23.addChildren(HAnimJoint40)
# CC 
HAnimJoint185 = x3d.HAnimJoint()
HAnimJoint185.setDEF("l_calcaneuscuboid_joint")
HAnimJoint185.setCenter([0.2,0.3,0])
HAnimJoint185.setName("l_calcaneuscuboid_joint")
HAnimSegment186 = x3d.HAnimSegment()
HAnimSegment186.setDEF("l_calcaneus")
HAnimSegment186.setName("l_calcaneus")
Transform187 = x3d.Transform()
Transform187.setTranslation([0.2,0.3,0])
Shape188 = x3d.Shape()
Shape188.setUSE("HAnimJointShape")

Transform187.addChildren(Shape188)

HAnimSegment186.addChildren(Transform187)
Shape189 = x3d.Shape()
Appearance190 = x3d.Appearance()
Material191 = x3d.Material()
Material191.setEmissiveColor([1,1,1])

Appearance190.setMaterial(Material191)

Shape189.setAppearance(Appearance190)
IndexedLineSet192 = x3d.IndexedLineSet()
IndexedLineSet192.setDEF("CCtoTT")
IndexedLineSet192.setCoordIndex([0,1])
Coordinate193 = x3d.Coordinate()
Coordinate193.setPoint([0.2,0.3,0,0.21,-0.3,0])

IndexedLineSet192.setCoord(Coordinate193)

Shape189.setGeometry(IndexedLineSet192)

HAnimSegment186.addChildren(Shape189)

HAnimJoint185.addChildren(HAnimSegment186)
# TT 
HAnimJoint194 = x3d.HAnimJoint()
HAnimJoint194.setDEF("l_transverse_tarsal_joint")
HAnimJoint194.setCenter([0.21,-0.3,0])
HAnimJoint194.setName("l_transverse_tarsal_joint")
HAnimSegment195 = x3d.HAnimSegment()
HAnimSegment195.setDEF("l_cuboid")
HAnimSegment195.setName("l_cuboid")
Transform196 = x3d.Transform()
Transform196.setTranslation([0.21,-0.3,0])
Shape197 = x3d.Shape()
Shape197.setUSE("HAnimJointShape")

Transform196.addChildren(Shape197)

HAnimSegment195.addChildren(Transform196)
Shape198 = x3d.Shape()
Appearance199 = x3d.Appearance()
Material200 = x3d.Material()
Material200.setEmissiveColor([1,1,1])

Appearance199.setMaterial(Material200)

Shape198.setAppearance(Appearance199)
IndexedLineSet201 = x3d.IndexedLineSet()
IndexedLineSet201.setDEF("TTtoTMT4")
IndexedLineSet201.setCoordIndex([0,1])
Coordinate202 = x3d.Coordinate()
Coordinate202.setPoint([0.21,-0.3,0,0.25,-0.58,0])

IndexedLineSet201.setCoord(Coordinate202)

Shape198.setGeometry(IndexedLineSet201)

HAnimSegment195.addChildren(Shape198)
Shape203 = x3d.Shape()
Appearance204 = x3d.Appearance()
Material205 = x3d.Material()
Material205.setEmissiveColor([1,1,1])

Appearance204.setMaterial(Material205)

Shape203.setAppearance(Appearance204)
IndexedLineSet206 = x3d.IndexedLineSet()
IndexedLineSet206.setDEF("TTtoTMT5")
IndexedLineSet206.setCoordIndex([0,1])
Coordinate207 = x3d.Coordinate()
Coordinate207.setPoint([0.21,-0.3,0,0.33,-0.52,0])

IndexedLineSet206.setCoord(Coordinate207)

Shape203.setGeometry(IndexedLineSet206)

HAnimSegment195.addChildren(Shape203)

HAnimJoint194.addChildren(HAnimSegment195)
# TMT4 
HAnimJoint208 = x3d.HAnimJoint()
HAnimJoint208.setDEF("l_tarsometatarsal_joint4")
HAnimJoint208.setCenter([0.25,-0.58,0])
HAnimJoint208.setName("l_tarsometatarsal_joint4")
HAnimSegment209 = x3d.HAnimSegment()
HAnimSegment209.setDEF("l_metatarsal4")
HAnimSegment209.setName("l_metatarsal4")
Transform210 = x3d.Transform()
Transform210.setTranslation([0.25,-0.58,0])
Shape211 = x3d.Shape()
Shape211.setUSE("HAnimJointShape")

Transform210.addChildren(Shape211)

HAnimSegment209.addChildren(Transform210)
Shape212 = x3d.Shape()
Appearance213 = x3d.Appearance()
Material214 = x3d.Material()
Material214.setEmissiveColor([1,1,1])

Appearance213.setMaterial(Material214)

Shape212.setAppearance(Appearance213)
IndexedLineSet215 = x3d.IndexedLineSet()
IndexedLineSet215.setDEF("TMT4toMTP4")
IndexedLineSet215.setCoordIndex([0,1])
Coordinate216 = x3d.Coordinate()
Coordinate216.setPoint([0.25,-0.58,0,0.25,-0.87,0])

IndexedLineSet215.setCoord(Coordinate216)

Shape212.setGeometry(IndexedLineSet215)

HAnimSegment209.addChildren(Shape212)

HAnimJoint208.addChildren(HAnimSegment209)
HAnimJoint217 = x3d.HAnimJoint()
HAnimJoint217.setDEF("l_metatarsophalangeal_joint4")
HAnimJoint217.setCenter([0.25,-0.87,0])
HAnimJoint217.setName("l_metatarsophalangeal_joint4")
HAnimSegment218 = x3d.HAnimSegment()
HAnimSegment218.setDEF("l_proximal_phalanges4")
HAnimSegment218.setName("l_proximal_phalanges4")
Transform219 = x3d.Transform()
Transform219.setTranslation([0.25,-0.87,0])
Shape220 = x3d.Shape()
Shape220.setUSE("HAnimJointShape")

Transform219.addChildren(Shape220)

HAnimSegment218.addChildren(Transform219)
Shape221 = x3d.Shape()
Appearance222 = x3d.Appearance()
Material223 = x3d.Material()
Material223.setEmissiveColor([1,1,1])

Appearance222.setMaterial(Material223)

Shape221.setAppearance(Appearance222)
IndexedLineSet224 = x3d.IndexedLineSet()
IndexedLineSet224.setDEF("MTP4toPIP4")
IndexedLineSet224.setCoordIndex([0,1])
Coordinate225 = x3d.Coordinate()
Coordinate225.setPoint([0.25,-0.87,0,0.25,-1,0])

IndexedLineSet224.setCoord(Coordinate225)

Shape221.setGeometry(IndexedLineSet224)

HAnimSegment218.addChildren(Shape221)

HAnimJoint217.addChildren(HAnimSegment218)
HAnimJoint226 = x3d.HAnimJoint()
HAnimJoint226.setDEF("l_f_proximal_Interphalangeal_joint4")
HAnimJoint226.setCenter([0.25,-1,0])
HAnimJoint226.setName("l_f_proximal_Interphalangeal_joint4")
HAnimSegment227 = x3d.HAnimSegment()
HAnimSegment227.setDEF("l_middle_phalanges4")
HAnimSegment227.setName("l_middle_phalanges4")
Transform228 = x3d.Transform()
Transform228.setTranslation([0.25,-1,0])
Shape229 = x3d.Shape()
Shape229.setUSE("HAnimJointShape")

Transform228.addChildren(Shape229)

HAnimSegment227.addChildren(Transform228)
Shape230 = x3d.Shape()
Appearance231 = x3d.Appearance()
Material232 = x3d.Material()
Material232.setEmissiveColor([1,1,1])

Appearance231.setMaterial(Material232)

Shape230.setAppearance(Appearance231)
IndexedLineSet233 = x3d.IndexedLineSet()
IndexedLineSet233.setDEF("PIP4toDIP4")
IndexedLineSet233.setCoordIndex([0,1])
Coordinate234 = x3d.Coordinate()
Coordinate234.setPoint([0.25,-1,0,0.25,-1.1,0])

IndexedLineSet233.setCoord(Coordinate234)

Shape230.setGeometry(IndexedLineSet233)

HAnimSegment227.addChildren(Shape230)

HAnimJoint226.addChildren(HAnimSegment227)
HAnimJoint235 = x3d.HAnimJoint()
HAnimJoint235.setDEF("l_f_distal_Interphalangeal_joint4")
HAnimJoint235.setCenter([0.25,-1.1,0])
HAnimJoint235.setName("l_f_distal_Interphalangeal_joint4")
HAnimSegment236 = x3d.HAnimSegment()
HAnimSegment236.setDEF("l_distal_phalanges4")
HAnimSegment236.setName("l_distal_phalanges4")
Transform237 = x3d.Transform()
Transform237.setTranslation([0.25,-1.1,0])
Shape238 = x3d.Shape()
Shape238.setUSE("HAnimJointShape")

Transform237.addChildren(Shape238)

HAnimSegment236.addChildren(Transform237)
Shape239 = x3d.Shape()
Appearance240 = x3d.Appearance()
Material241 = x3d.Material()
Material241.setEmissiveColor([1,1,1])

Appearance240.setMaterial(Material241)

Shape239.setAppearance(Appearance240)
IndexedLineSet242 = x3d.IndexedLineSet()
IndexedLineSet242.setDEF("tiptoe_l_f_distal_Interphalangeal_joint4")
IndexedLineSet242.setCoordIndex([0,1])
Coordinate243 = x3d.Coordinate()
Coordinate243.setPoint([0.25,-1.1,0,0.25,-1.15,0])

IndexedLineSet242.setCoord(Coordinate243)

Shape239.setGeometry(IndexedLineSet242)

HAnimSegment236.addChildren(Shape239)

HAnimJoint235.addChildren(HAnimSegment236)

HAnimJoint226.addChildren(HAnimJoint235)

HAnimJoint217.addChildren(HAnimJoint226)

HAnimJoint208.addChildren(HAnimJoint217)

HAnimJoint194.addChildren(HAnimJoint208)
# TMT5 
HAnimJoint244 = x3d.HAnimJoint()
HAnimJoint244.setDEF("l_tarsometatarsal_joint5")
HAnimJoint244.setCenter([0.33,-0.52,0])
HAnimJoint244.setName("l_tarsometatarsal_joint5")
HAnimSegment245 = x3d.HAnimSegment()
HAnimSegment245.setDEF("l_metatarsal5")
HAnimSegment245.setName("l_metatarsal5")
Transform246 = x3d.Transform()
Transform246.setTranslation([0.33,-0.52,0])
Shape247 = x3d.Shape()
Shape247.setUSE("HAnimJointShape")

Transform246.addChildren(Shape247)

HAnimSegment245.addChildren(Transform246)
Shape248 = x3d.Shape()
Appearance249 = x3d.Appearance()
Material250 = x3d.Material()
Material250.setEmissiveColor([1,1,1])

Appearance249.setMaterial(Material250)

Shape248.setAppearance(Appearance249)
IndexedLineSet251 = x3d.IndexedLineSet()
IndexedLineSet251.setDEF("TMT5toMTP5")
IndexedLineSet251.setCoordIndex([0,1])
Coordinate252 = x3d.Coordinate()
Coordinate252.setPoint([0.33,-0.52,0,0.34,-0.8,0])

IndexedLineSet251.setCoord(Coordinate252)

Shape248.setGeometry(IndexedLineSet251)

HAnimSegment245.addChildren(Shape248)

HAnimJoint244.addChildren(HAnimSegment245)
HAnimJoint253 = x3d.HAnimJoint()
HAnimJoint253.setDEF("l_metatarsophalangeal_joint5")
HAnimJoint253.setCenter([0.34,-0.8,0])
HAnimJoint253.setName("l_metatarsophalangeal_joint5")
HAnimSegment254 = x3d.HAnimSegment()
HAnimSegment254.setDEF("l_proximal_phalanges5")
HAnimSegment254.setName("l_proximal_phalanges5")
Transform255 = x3d.Transform()
Transform255.setTranslation([0.34,-0.8,0])
Shape256 = x3d.Shape()
Shape256.setUSE("HAnimJointShape")

Transform255.addChildren(Shape256)

HAnimSegment254.addChildren(Transform255)
Shape257 = x3d.Shape()
Appearance258 = x3d.Appearance()
Material259 = x3d.Material()
Material259.setEmissiveColor([1,1,1])

Appearance258.setMaterial(Material259)

Shape257.setAppearance(Appearance258)
IndexedLineSet260 = x3d.IndexedLineSet()
IndexedLineSet260.setDEF("MTP5toPIP5")
IndexedLineSet260.setCoordIndex([0,1])
Coordinate261 = x3d.Coordinate()
Coordinate261.setPoint([0.34,-0.8,0,0.34,-0.95,0])

IndexedLineSet260.setCoord(Coordinate261)

Shape257.setGeometry(IndexedLineSet260)

HAnimSegment254.addChildren(Shape257)

HAnimJoint253.addChildren(HAnimSegment254)
HAnimJoint262 = x3d.HAnimJoint()
HAnimJoint262.setDEF("l_f_proximal_Interphalangeal_joint5")
HAnimJoint262.setCenter([0.34,-0.95,0])
HAnimJoint262.setName("l_f_proximal_Interphalangeal_joint5")
HAnimSegment263 = x3d.HAnimSegment()
HAnimSegment263.setDEF("l_middle_phalanges5")
HAnimSegment263.setName("l_middle_phalanges5")
Transform264 = x3d.Transform()
Transform264.setTranslation([0.34,-0.95,0])
Shape265 = x3d.Shape()
Shape265.setUSE("HAnimJointShape")

Transform264.addChildren(Shape265)

HAnimSegment263.addChildren(Transform264)
Shape266 = x3d.Shape()
Appearance267 = x3d.Appearance()
Material268 = x3d.Material()
Material268.setEmissiveColor([1,1,1])

Appearance267.setMaterial(Material268)

Shape266.setAppearance(Appearance267)
IndexedLineSet269 = x3d.IndexedLineSet()
IndexedLineSet269.setDEF("PIP5toDIP5")
IndexedLineSet269.setCoordIndex([0,1])
Coordinate270 = x3d.Coordinate()
Coordinate270.setPoint([0.34,-0.95,0,0.34,-1.05,0])

IndexedLineSet269.setCoord(Coordinate270)

Shape266.setGeometry(IndexedLineSet269)

HAnimSegment263.addChildren(Shape266)

HAnimJoint262.addChildren(HAnimSegment263)
HAnimJoint271 = x3d.HAnimJoint()
HAnimJoint271.setDEF("l_f_distal_Interphalangeal_joint5")
HAnimJoint271.setCenter([0.34,-1.05,0])
HAnimJoint271.setName("l_f_distal_Interphalangeal_joint5")
HAnimSegment272 = x3d.HAnimSegment()
HAnimSegment272.setDEF("l_distal_phalanges5")
HAnimSegment272.setName("l_distal_phalanges5")
Transform273 = x3d.Transform()
Transform273.setTranslation([0.34,-1.05,0])
Shape274 = x3d.Shape()
Shape274.setUSE("HAnimJointShape")

Transform273.addChildren(Shape274)

HAnimSegment272.addChildren(Transform273)
Shape275 = x3d.Shape()
Appearance276 = x3d.Appearance()
Material277 = x3d.Material()
Material277.setEmissiveColor([1,1,1])

Appearance276.setMaterial(Material277)

Shape275.setAppearance(Appearance276)
IndexedLineSet278 = x3d.IndexedLineSet()
IndexedLineSet278.setDEF("tiptoe_l_f_distal_Interphalangeal_joint5")
IndexedLineSet278.setCoordIndex([0,1])
Coordinate279 = x3d.Coordinate()
Coordinate279.setPoint([0.34,-1.05,0,0.34,-1.08,0])

IndexedLineSet278.setCoord(Coordinate279)

Shape275.setGeometry(IndexedLineSet278)

HAnimSegment272.addChildren(Shape275)

HAnimJoint271.addChildren(HAnimSegment272)

HAnimJoint262.addChildren(HAnimJoint271)

HAnimJoint253.addChildren(HAnimJoint262)

HAnimJoint244.addChildren(HAnimJoint253)

HAnimJoint194.addChildren(HAnimJoint244)

HAnimJoint185.addChildren(HAnimJoint194)

HAnimJoint23.addChildren(HAnimJoint185)

HAnimJoint22.addChildren(HAnimJoint23)

HAnimHumanoid21.addJoints(HAnimJoint22)
HAnimJoint280 = x3d.HAnimJoint()
HAnimJoint280.setUSE("hanim_HumanoidRoot")

HAnimHumanoid21.addJoints(HAnimJoint280)
HAnimJoint281 = x3d.HAnimJoint()
HAnimJoint281.setUSE("l_talocrural_joint")

HAnimHumanoid21.addJoints(HAnimJoint281)
HAnimJoint282 = x3d.HAnimJoint()
HAnimJoint282.setUSE("l_talocalcaneonavicular_joint")

HAnimHumanoid21.addJoints(HAnimJoint282)
HAnimJoint283 = x3d.HAnimJoint()
HAnimJoint283.setUSE("l_cuneonavicular_joint1")

HAnimHumanoid21.addJoints(HAnimJoint283)
HAnimJoint284 = x3d.HAnimJoint()
HAnimJoint284.setUSE("l_tarsometatarsal_joint1")

HAnimHumanoid21.addJoints(HAnimJoint284)
HAnimJoint285 = x3d.HAnimJoint()
HAnimJoint285.setUSE("l_metatarsophalangeal_joint1")

HAnimHumanoid21.addJoints(HAnimJoint285)
HAnimJoint286 = x3d.HAnimJoint()
HAnimJoint286.setUSE("l_f_Interphalangeal_joint")

HAnimHumanoid21.addJoints(HAnimJoint286)
HAnimJoint287 = x3d.HAnimJoint()
HAnimJoint287.setUSE("l_cuneonavicular_joint2")

HAnimHumanoid21.addJoints(HAnimJoint287)
HAnimJoint288 = x3d.HAnimJoint()
HAnimJoint288.setUSE("l_tarsometatarsal_joint2")

HAnimHumanoid21.addJoints(HAnimJoint288)
HAnimJoint289 = x3d.HAnimJoint()
HAnimJoint289.setUSE("l_metatarsophalangeal_joint2")

HAnimHumanoid21.addJoints(HAnimJoint289)
HAnimJoint290 = x3d.HAnimJoint()
HAnimJoint290.setUSE("l_f_proximal_Interphalangeal_joint2")

HAnimHumanoid21.addJoints(HAnimJoint290)
HAnimJoint291 = x3d.HAnimJoint()
HAnimJoint291.setUSE("l_f_distal_Interphalangeal_joint2")

HAnimHumanoid21.addJoints(HAnimJoint291)
HAnimJoint292 = x3d.HAnimJoint()
HAnimJoint292.setUSE("l_cuneonavicular_joint3")

HAnimHumanoid21.addJoints(HAnimJoint292)
HAnimJoint293 = x3d.HAnimJoint()
HAnimJoint293.setUSE("l_tarsometatarsal_joint3")

HAnimHumanoid21.addJoints(HAnimJoint293)
HAnimJoint294 = x3d.HAnimJoint()
HAnimJoint294.setUSE("l_metatarsophalangeal_joint3")

HAnimHumanoid21.addJoints(HAnimJoint294)
HAnimJoint295 = x3d.HAnimJoint()
HAnimJoint295.setUSE("l_f_proximal_Interphalangeal_joint3")

HAnimHumanoid21.addJoints(HAnimJoint295)
HAnimJoint296 = x3d.HAnimJoint()
HAnimJoint296.setUSE("l_f_distal_Interphalangeal_joint3")

HAnimHumanoid21.addJoints(HAnimJoint296)
HAnimJoint297 = x3d.HAnimJoint()
HAnimJoint297.setUSE("l_calcaneuscuboid_joint")

HAnimHumanoid21.addJoints(HAnimJoint297)
HAnimJoint298 = x3d.HAnimJoint()
HAnimJoint298.setUSE("l_transverse_tarsal_joint")

HAnimHumanoid21.addJoints(HAnimJoint298)
HAnimJoint299 = x3d.HAnimJoint()
HAnimJoint299.setUSE("l_tarsometatarsal_joint4")

HAnimHumanoid21.addJoints(HAnimJoint299)
HAnimJoint300 = x3d.HAnimJoint()
HAnimJoint300.setUSE("l_metatarsophalangeal_joint4")

HAnimHumanoid21.addJoints(HAnimJoint300)
HAnimJoint301 = x3d.HAnimJoint()
HAnimJoint301.setUSE("l_f_proximal_Interphalangeal_joint4")

HAnimHumanoid21.addJoints(HAnimJoint301)
HAnimJoint302 = x3d.HAnimJoint()
HAnimJoint302.setUSE("l_f_distal_Interphalangeal_joint4")

HAnimHumanoid21.addJoints(HAnimJoint302)
HAnimJoint303 = x3d.HAnimJoint()
HAnimJoint303.setUSE("l_tarsometatarsal_joint5")

HAnimHumanoid21.addJoints(HAnimJoint303)
HAnimJoint304 = x3d.HAnimJoint()
HAnimJoint304.setUSE("l_metatarsophalangeal_joint5")

HAnimHumanoid21.addJoints(HAnimJoint304)
HAnimJoint305 = x3d.HAnimJoint()
HAnimJoint305.setUSE("l_f_proximal_Interphalangeal_joint5")

HAnimHumanoid21.addJoints(HAnimJoint305)
HAnimJoint306 = x3d.HAnimJoint()
HAnimJoint306.setUSE("l_f_distal_Interphalangeal_joint5")

HAnimHumanoid21.addJoints(HAnimJoint306)
HAnimSegment307 = x3d.HAnimSegment()
HAnimSegment307.setUSE("l_talus")

HAnimHumanoid21.addSegments(HAnimSegment307)
HAnimSegment308 = x3d.HAnimSegment()
HAnimSegment308.setUSE("l_navicular")

HAnimHumanoid21.addSegments(HAnimSegment308)
HAnimSegment309 = x3d.HAnimSegment()
HAnimSegment309.setUSE("l_cuneiform1")

HAnimHumanoid21.addSegments(HAnimSegment309)
HAnimSegment310 = x3d.HAnimSegment()
HAnimSegment310.setUSE("l_metatarsal1")

HAnimHumanoid21.addSegments(HAnimSegment310)
HAnimSegment311 = x3d.HAnimSegment()
HAnimSegment311.setUSE("l_proximal_phalanges1")

HAnimHumanoid21.addSegments(HAnimSegment311)
HAnimSegment312 = x3d.HAnimSegment()
HAnimSegment312.setUSE("l_distal_phalanges1")

HAnimHumanoid21.addSegments(HAnimSegment312)
HAnimSegment313 = x3d.HAnimSegment()
HAnimSegment313.setUSE("l_cuneiform2")

HAnimHumanoid21.addSegments(HAnimSegment313)
HAnimSegment314 = x3d.HAnimSegment()
HAnimSegment314.setUSE("l_metatarsal2")

HAnimHumanoid21.addSegments(HAnimSegment314)
HAnimSegment315 = x3d.HAnimSegment()
HAnimSegment315.setUSE("l_proximal_phalanges2")

HAnimHumanoid21.addSegments(HAnimSegment315)
HAnimSegment316 = x3d.HAnimSegment()
HAnimSegment316.setUSE("l_middle_phalanges2")

HAnimHumanoid21.addSegments(HAnimSegment316)
HAnimSegment317 = x3d.HAnimSegment()
HAnimSegment317.setUSE("l_distal_phalanges2")

HAnimHumanoid21.addSegments(HAnimSegment317)
HAnimSegment318 = x3d.HAnimSegment()
HAnimSegment318.setUSE("l_cuneiform3")

HAnimHumanoid21.addSegments(HAnimSegment318)
HAnimSegment319 = x3d.HAnimSegment()
HAnimSegment319.setUSE("l_metatarsal3")

HAnimHumanoid21.addSegments(HAnimSegment319)
HAnimSegment320 = x3d.HAnimSegment()
HAnimSegment320.setUSE("l_proximal_phalanges3")

HAnimHumanoid21.addSegments(HAnimSegment320)
HAnimSegment321 = x3d.HAnimSegment()
HAnimSegment321.setUSE("l_middle_phalanges3")

HAnimHumanoid21.addSegments(HAnimSegment321)
HAnimSegment322 = x3d.HAnimSegment()
HAnimSegment322.setUSE("l_distal_phalanges3")

HAnimHumanoid21.addSegments(HAnimSegment322)
HAnimSegment323 = x3d.HAnimSegment()
HAnimSegment323.setUSE("l_calcaneus")

HAnimHumanoid21.addSegments(HAnimSegment323)
HAnimSegment324 = x3d.HAnimSegment()
HAnimSegment324.setUSE("l_cuboid")

HAnimHumanoid21.addSegments(HAnimSegment324)
HAnimSegment325 = x3d.HAnimSegment()
HAnimSegment325.setUSE("l_metatarsal4")

HAnimHumanoid21.addSegments(HAnimSegment325)
HAnimSegment326 = x3d.HAnimSegment()
HAnimSegment326.setUSE("l_proximal_phalanges4")

HAnimHumanoid21.addSegments(HAnimSegment326)
HAnimSegment327 = x3d.HAnimSegment()
HAnimSegment327.setUSE("l_middle_phalanges4")

HAnimHumanoid21.addSegments(HAnimSegment327)
HAnimSegment328 = x3d.HAnimSegment()
HAnimSegment328.setUSE("l_distal_phalanges4")

HAnimHumanoid21.addSegments(HAnimSegment328)
HAnimSegment329 = x3d.HAnimSegment()
HAnimSegment329.setUSE("l_metatarsal5")

HAnimHumanoid21.addSegments(HAnimSegment329)
HAnimSegment330 = x3d.HAnimSegment()
HAnimSegment330.setUSE("l_proximal_phalanges5")

HAnimHumanoid21.addSegments(HAnimSegment330)
HAnimSegment331 = x3d.HAnimSegment()
HAnimSegment331.setUSE("l_middle_phalanges5")

HAnimHumanoid21.addSegments(HAnimSegment331)
HAnimSegment332 = x3d.HAnimSegment()
HAnimSegment332.setUSE("l_distal_phalanges5")

HAnimHumanoid21.addSegments(HAnimSegment332)

Scene19.addChildren(HAnimHumanoid21)

X3D0.setScene(Scene19)
X3D0.toFileX3D("../data/HAnimModelFootLeft_RoundTrip.x3d")
