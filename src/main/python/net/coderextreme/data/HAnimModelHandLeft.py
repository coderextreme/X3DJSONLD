import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("H-Anim")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("HAnimModelHandLeft.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("Left hand, using high-fidelity definitions for H-Anim version 2.2")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("YOO Kwan Hee and Don Brutzman")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("created")
meta6.setContent("26 January 2015")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("20 October 2019")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("warning")
meta8.setContent("not yet to scale")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("warning")
meta9.setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("https://www.web3d.org/working-groups/humanoid-animation-h-anim")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("reference")
meta11.setContent("https://www.web3d.org/files/specifications/19774/V1.0")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("subject")
meta13.setContent("X3D H-Anim humanoid animation")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("warning")
meta14.setContent("scene, DOCTYPE and Schema under development.")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("TODO")
meta15.setContent("Integrate and confirm Segment/Joint names, Viewpoints.")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("identifier")
meta16.setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.x3d")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("generator")
meta17.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("license")
meta18.setContent("../license.html")

head1.addMeta(meta18)

X3D0.setHead(head1)
Scene19 = x3d.Scene()
WorldInfo20 = x3d.WorldInfo()
WorldInfo20.setTitle("HAnimModelHandLeft.x3d")

Scene19.addChildren(WorldInfo20)
HAnimHumanoid21 = x3d.HAnimHumanoid()
HAnimHumanoid21.setName("Humanoid_Left_hand")
HAnimHumanoid21.setDEF("Humanoid_Left_hand")
HAnimHumanoid21.setJointBindingPositions([0,0,0])
HAnimHumanoid21.setJointBindingRotations([0,0,1,0])
HAnimHumanoid21.setJointBindingScales([1,1,1])
HAnimHumanoid21.setLoa(-1)
HAnimHumanoid21.setSkeletalConfiguration("BASIC")
HAnimHumanoid21.setVersion("2.0")
HAnimHumanoid21.setDisplayBBox(False)
HAnimJoint22 = x3d.HAnimJoint()
HAnimJoint22.setName("humanoid_root")
HAnimJoint22.setDEF("hanim_HumanoidRoot")
HAnimJoint22.setDisplayBBox(False)
HAnimJoint23 = x3d.HAnimJoint()
HAnimJoint23.setName("l_radiocarpal_joint")
HAnimJoint23.setDEF("l_radiocarpal_joint")
HAnimJoint23.setDisplayBBox(False)
HAnimSegment24 = x3d.HAnimSegment()
HAnimSegment24.setName("l_wrist")
HAnimSegment24.setDEF("l_wrist")
HAnimSegment24.setDisplayBBox(False)
Transform25 = x3d.Transform()
Transform25.setDisplayBBox(False)
Shape26 = x3d.Shape()
Shape26.setDEF("HAnimJointShape")
Shape26.setDisplayBBox(False)
Sphere27 = x3d.Sphere()
Sphere27.setRadius(0.025)

Shape26.setGeometry(Sphere27)
Appearance28 = x3d.Appearance()
Appearance28.setDEF("HAnimJointAppearanceBlue")
Material29 = x3d.Material()
Material29.setDiffuseColor([0,0,1])

Appearance28.setMaterial(Material29)

Shape26.setAppearance(Appearance28)

Transform25.addChildren(Shape26)

HAnimSegment24.addChildren(Transform25)
Shape30 = x3d.Shape()
Shape30.setDisplayBBox(False)
Appearance31 = x3d.Appearance()
Material32 = x3d.Material()
Material32.setEmissiveColor([1,1,1])

Appearance31.setMaterial(Material32)

Shape30.setAppearance(Appearance31)
IndexedLineSet33 = x3d.IndexedLineSet()
IndexedLineSet33.setDEF("RCToMC12")
IndexedLineSet33.setCoordIndex([0,1])
Coordinate34 = x3d.Coordinate()
Coordinate34.setPoint([0,0,0,0.1,0.1,0])

IndexedLineSet33.setCoord(Coordinate34)

Shape30.setGeometry(IndexedLineSet33)

HAnimSegment24.addChildren(Shape30)
Shape35 = x3d.Shape()
Shape35.setDisplayBBox(False)
Appearance36 = x3d.Appearance()
Material37 = x3d.Material()
Material37.setEmissiveColor([1,1,1])

Appearance36.setMaterial(Material37)

Shape35.setAppearance(Appearance36)
IndexedLineSet38 = x3d.IndexedLineSet()
IndexedLineSet38.setDEF("RCToMC3")
IndexedLineSet38.setCoordIndex([0,1])
Coordinate39 = x3d.Coordinate()
Coordinate39.setPoint([0,0,0,0,0.07,0])

IndexedLineSet38.setCoord(Coordinate39)

Shape35.setGeometry(IndexedLineSet38)

HAnimSegment24.addChildren(Shape35)
Shape40 = x3d.Shape()
Shape40.setDisplayBBox(False)
Appearance41 = x3d.Appearance()
Material42 = x3d.Material()
Material42.setEmissiveColor([1,1,1])

Appearance41.setMaterial(Material42)

Shape40.setAppearance(Appearance41)
IndexedLineSet43 = x3d.IndexedLineSet()
IndexedLineSet43.setDEF("RCToMC45")
IndexedLineSet43.setCoordIndex([0,1])
Coordinate44 = x3d.Coordinate()
Coordinate44.setPoint([0,0,0,-0.1,0.1,0])

IndexedLineSet43.setCoord(Coordinate44)

Shape40.setGeometry(IndexedLineSet43)

HAnimSegment24.addChildren(Shape40)

HAnimJoint23.addChildren(HAnimSegment24)
#MC12
HAnimJoint45 = x3d.HAnimJoint()
HAnimJoint45.setName("l_midcarpal_joint_12")
HAnimJoint45.setDEF("l_midcarpal_joint_12")
HAnimJoint45.setCenter([0.1,0.1,0])
HAnimJoint45.setDisplayBBox(False)
HAnimSegment46 = x3d.HAnimSegment()
HAnimSegment46.setName("l_trapezoid")
HAnimSegment46.setDEF("l_trapezoid")
HAnimSegment46.setDisplayBBox(False)
Transform47 = x3d.Transform()
Transform47.setTranslation([0.1,0.1,0])
Transform47.setDisplayBBox(False)
Shape48 = x3d.Shape()
Shape48.setDEF("HAnimNewJointShape")
Shape48.setDisplayBBox(False)
Sphere49 = x3d.Sphere()
Sphere49.setRadius(0.025)

Shape48.setGeometry(Sphere49)
Appearance50 = x3d.Appearance()
Appearance50.setDEF("HAnimJointAppearanceRed")
Material51 = x3d.Material()
Material51.setDiffuseColor([1,0,0])

Appearance50.setMaterial(Material51)

Shape48.setAppearance(Appearance50)

Transform47.addChildren(Shape48)

HAnimSegment46.addChildren(Transform47)
Shape52 = x3d.Shape()
Shape52.setDisplayBBox(False)
Appearance53 = x3d.Appearance()
Material54 = x3d.Material()
Material54.setEmissiveColor([1,1,1])

Appearance53.setMaterial(Material54)

Shape52.setAppearance(Appearance53)
IndexedLineSet55 = x3d.IndexedLineSet()
IndexedLineSet55.setDEF("MC12toCMC1")
IndexedLineSet55.setCoordIndex([0,1])
Coordinate56 = x3d.Coordinate()
Coordinate56.setPoint([0.1,0.1,0,0.2,0.15,0])

IndexedLineSet55.setCoord(Coordinate56)

Shape52.setGeometry(IndexedLineSet55)

HAnimSegment46.addChildren(Shape52)
Shape57 = x3d.Shape()
Shape57.setDisplayBBox(False)
Appearance58 = x3d.Appearance()
Material59 = x3d.Material()
Material59.setEmissiveColor([1,1,1])

Appearance58.setMaterial(Material59)

Shape57.setAppearance(Appearance58)
IndexedLineSet60 = x3d.IndexedLineSet()
IndexedLineSet60.setDEF("MC12toCMC2")
IndexedLineSet60.setCoordIndex([0,1])
Coordinate61 = x3d.Coordinate()
Coordinate61.setPoint([0.1,0.1,0,0.1,0.2,0])

IndexedLineSet60.setCoord(Coordinate61)

Shape57.setGeometry(IndexedLineSet60)

HAnimSegment46.addChildren(Shape57)

HAnimJoint45.addChildren(HAnimSegment46)
#thumb finger
HAnimJoint62 = x3d.HAnimJoint()
HAnimJoint62.setName("l_carpometacarpal_joint_1")
HAnimJoint62.setDEF("l_carpometacarpal_joint_1")
HAnimJoint62.setCenter([0.2,0.15,0])
HAnimJoint62.setDisplayBBox(False)
HAnimSegment63 = x3d.HAnimSegment()
HAnimSegment63.setName("l_metacarpal_1")
HAnimSegment63.setDEF("l_metacarpal_1")
HAnimSegment63.setDisplayBBox(False)
Transform64 = x3d.Transform()
Transform64.setTranslation([0.2,0.15,0])
Transform64.setDisplayBBox(False)
Shape65 = x3d.Shape()
Shape65.setUSE("HAnimJointShape")

Transform64.addChildren(Shape65)

HAnimSegment63.addChildren(Transform64)
Shape66 = x3d.Shape()
Shape66.setDisplayBBox(False)
Appearance67 = x3d.Appearance()
Material68 = x3d.Material()
Material68.setEmissiveColor([1,1,1])

Appearance67.setMaterial(Material68)

Shape66.setAppearance(Appearance67)
IndexedLineSet69 = x3d.IndexedLineSet()
IndexedLineSet69.setDEF("CMC1toMCP1")
IndexedLineSet69.setCoordIndex([0,1])
Coordinate70 = x3d.Coordinate()
Coordinate70.setPoint([0.2,0.15,0,0.3,0.3,0])

IndexedLineSet69.setCoord(Coordinate70)

Shape66.setGeometry(IndexedLineSet69)

HAnimSegment63.addChildren(Shape66)

HAnimJoint62.addChildren(HAnimSegment63)
HAnimJoint71 = x3d.HAnimJoint()
HAnimJoint71.setName("l_metacarpophalangeal_joint_1")
HAnimJoint71.setDEF("l_metacarpophalangeal_joint_1")
HAnimJoint71.setCenter([0.3,0.3,0])
HAnimJoint71.setDisplayBBox(False)
HAnimSegment72 = x3d.HAnimSegment()
HAnimSegment72.setName("l_proximal_phalanges1")
HAnimSegment72.setDEF("l_proximal_phalanges1")
HAnimSegment72.setDisplayBBox(False)
Transform73 = x3d.Transform()
Transform73.setTranslation([0.3,0.3,0])
Transform73.setDisplayBBox(False)
Shape74 = x3d.Shape()
Shape74.setUSE("HAnimJointShape")

Transform73.addChildren(Shape74)

HAnimSegment72.addChildren(Transform73)
Shape75 = x3d.Shape()
Shape75.setDisplayBBox(False)
Appearance76 = x3d.Appearance()
Material77 = x3d.Material()
Material77.setEmissiveColor([1,1,1])

Appearance76.setMaterial(Material77)

Shape75.setAppearance(Appearance76)
IndexedLineSet78 = x3d.IndexedLineSet()
IndexedLineSet78.setDEF("MCP11toIP1")
IndexedLineSet78.setCoordIndex([0,1])
Coordinate79 = x3d.Coordinate()
Coordinate79.setPoint([0.3,0.3,0,0.35,0.4,0])

IndexedLineSet78.setCoord(Coordinate79)

Shape75.setGeometry(IndexedLineSet78)

HAnimSegment72.addChildren(Shape75)

HAnimJoint71.addChildren(HAnimSegment72)
HAnimJoint80 = x3d.HAnimJoint()
HAnimJoint80.setName("l_interphalangeal_joint_1")
HAnimJoint80.setDEF("l_interphalangeal_joint_1")
HAnimJoint80.setCenter([0.35,0.4,0])
HAnimJoint80.setDisplayBBox(False)
HAnimSegment81 = x3d.HAnimSegment()
HAnimSegment81.setName("l_distal_phalanges1")
HAnimSegment81.setDEF("l_distal_phalanges1")
HAnimSegment81.setDisplayBBox(False)
Transform82 = x3d.Transform()
Transform82.setTranslation([0.35,0.4,0])
Transform82.setDisplayBBox(False)
Shape83 = x3d.Shape()
Shape83.setUSE("HAnimJointShape")

Transform82.addChildren(Shape83)

HAnimSegment81.addChildren(Transform82)
Shape84 = x3d.Shape()
Shape84.setDisplayBBox(False)
Appearance85 = x3d.Appearance()
Material86 = x3d.Material()
Material86.setEmissiveColor([1,1,1])

Appearance85.setMaterial(Material86)

Shape84.setAppearance(Appearance85)
IndexedLineSet87 = x3d.IndexedLineSet()
IndexedLineSet87.setDEF("fingertip_l_interphalangeal_joint_1")
IndexedLineSet87.setCoordIndex([0,1])
Coordinate88 = x3d.Coordinate()
Coordinate88.setPoint([0.35,0.4,0,0.36,0.45,0])

IndexedLineSet87.setCoord(Coordinate88)

Shape84.setGeometry(IndexedLineSet87)

HAnimSegment81.addChildren(Shape84)

HAnimJoint80.addChildren(HAnimSegment81)

HAnimJoint71.addChildren(HAnimJoint80)

HAnimJoint62.addChildren(HAnimJoint71)

HAnimJoint45.addChildren(HAnimJoint62)
#index finger
HAnimJoint89 = x3d.HAnimJoint()
HAnimJoint89.setName("l_carpometacarpal_joint_2")
HAnimJoint89.setDEF("l_carpometacarpal_joint_2")
HAnimJoint89.setCenter([0.1,0.2,0])
HAnimJoint89.setDisplayBBox(False)
HAnimSegment90 = x3d.HAnimSegment()
HAnimSegment90.setName("l_metacarpal2")
HAnimSegment90.setDEF("l_metacarpal2")
HAnimSegment90.setDisplayBBox(False)
Transform91 = x3d.Transform()
Transform91.setTranslation([0.1,0.2,0])
Transform91.setDisplayBBox(False)
Shape92 = x3d.Shape()
Shape92.setUSE("HAnimJointShape")

Transform91.addChildren(Shape92)

HAnimSegment90.addChildren(Transform91)
Shape93 = x3d.Shape()
Shape93.setDisplayBBox(False)
Appearance94 = x3d.Appearance()
Material95 = x3d.Material()
Material95.setEmissiveColor([1,1,1])

Appearance94.setMaterial(Material95)

Shape93.setAppearance(Appearance94)
IndexedLineSet96 = x3d.IndexedLineSet()
IndexedLineSet96.setDEF("CMC2toMCP2")
IndexedLineSet96.setCoordIndex([0,1])
Coordinate97 = x3d.Coordinate()
Coordinate97.setPoint([0.1,0.2,0,0.15,0.5,0])

IndexedLineSet96.setCoord(Coordinate97)

Shape93.setGeometry(IndexedLineSet96)

HAnimSegment90.addChildren(Shape93)

HAnimJoint89.addChildren(HAnimSegment90)
HAnimJoint98 = x3d.HAnimJoint()
HAnimJoint98.setName("l_metacarpophalangeal_joint_2")
HAnimJoint98.setDEF("l_metacarpophalangeal_joint_2")
HAnimJoint98.setCenter([0.15,0.5,0])
HAnimJoint98.setDisplayBBox(False)
HAnimSegment99 = x3d.HAnimSegment()
HAnimSegment99.setName("l_proximal_phalanges2")
HAnimSegment99.setDEF("l_proximal_phalanges2")
HAnimSegment99.setDisplayBBox(False)
Transform100 = x3d.Transform()
Transform100.setTranslation([0.15,0.5,0])
Transform100.setDisplayBBox(False)
Shape101 = x3d.Shape()
Shape101.setUSE("HAnimJointShape")

Transform100.addChildren(Shape101)

HAnimSegment99.addChildren(Transform100)
Shape102 = x3d.Shape()
Shape102.setDisplayBBox(False)
Appearance103 = x3d.Appearance()
Material104 = x3d.Material()
Material104.setEmissiveColor([1,1,1])

Appearance103.setMaterial(Material104)

Shape102.setAppearance(Appearance103)
IndexedLineSet105 = x3d.IndexedLineSet()
IndexedLineSet105.setDEF("MCP2toPIP2")
IndexedLineSet105.setCoordIndex([0,1])
Coordinate106 = x3d.Coordinate()
Coordinate106.setPoint([0.15,0.5,0,0.2,0.7,0])

IndexedLineSet105.setCoord(Coordinate106)

Shape102.setGeometry(IndexedLineSet105)

HAnimSegment99.addChildren(Shape102)

HAnimJoint98.addChildren(HAnimSegment99)
HAnimJoint107 = x3d.HAnimJoint()
HAnimJoint107.setName("l_proximal_interphalangeal_joint_2")
HAnimJoint107.setDEF("l_proximal_interphalangeal_joint_2")
HAnimJoint107.setCenter([0.2,0.7,0])
HAnimJoint107.setDisplayBBox(False)
HAnimSegment108 = x3d.HAnimSegment()
HAnimSegment108.setName("l_middle_phalanges2")
HAnimSegment108.setDEF("l_middle_phalanges2")
HAnimSegment108.setDisplayBBox(False)
Transform109 = x3d.Transform()
Transform109.setTranslation([0.2,0.7,0])
Transform109.setDisplayBBox(False)
Shape110 = x3d.Shape()
Shape110.setUSE("HAnimJointShape")

Transform109.addChildren(Shape110)

HAnimSegment108.addChildren(Transform109)
Shape111 = x3d.Shape()
Shape111.setDisplayBBox(False)
Appearance112 = x3d.Appearance()
Material113 = x3d.Material()
Material113.setEmissiveColor([1,1,1])

Appearance112.setMaterial(Material113)

Shape111.setAppearance(Appearance112)
IndexedLineSet114 = x3d.IndexedLineSet()
IndexedLineSet114.setDEF("PIP2toDIP2")
IndexedLineSet114.setCoordIndex([0,1])
Coordinate115 = x3d.Coordinate()
Coordinate115.setPoint([0.2,0.7,0,0.24,0.87,0])

IndexedLineSet114.setCoord(Coordinate115)

Shape111.setGeometry(IndexedLineSet114)

HAnimSegment108.addChildren(Shape111)

HAnimJoint107.addChildren(HAnimSegment108)
HAnimJoint116 = x3d.HAnimJoint()
HAnimJoint116.setName("l_distal_interphalangeal_joint_2")
HAnimJoint116.setDEF("l_distal_interphalangeal_joint_2")
HAnimJoint116.setCenter([0.24,0.87,0])
HAnimJoint116.setDisplayBBox(False)
HAnimSegment117 = x3d.HAnimSegment()
HAnimSegment117.setName("l_distal_phalanges2")
HAnimSegment117.setDEF("l_distal_phalanges2")
HAnimSegment117.setDisplayBBox(False)
Transform118 = x3d.Transform()
Transform118.setTranslation([0.24,0.87,0])
Transform118.setDisplayBBox(False)
Shape119 = x3d.Shape()
Shape119.setUSE("HAnimJointShape")

Transform118.addChildren(Shape119)

HAnimSegment117.addChildren(Transform118)
Shape120 = x3d.Shape()
Shape120.setDisplayBBox(False)
Appearance121 = x3d.Appearance()
Material122 = x3d.Material()
Material122.setEmissiveColor([1,1,1])

Appearance121.setMaterial(Material122)

Shape120.setAppearance(Appearance121)
IndexedLineSet123 = x3d.IndexedLineSet()
IndexedLineSet123.setDEF("fingertip_l_distal_interphalangeal_joint_2")
IndexedLineSet123.setCoordIndex([0,1])
Coordinate124 = x3d.Coordinate()
Coordinate124.setPoint([0.24,0.87,0,0.26,0.93,0])

IndexedLineSet123.setCoord(Coordinate124)

Shape120.setGeometry(IndexedLineSet123)

HAnimSegment117.addChildren(Shape120)

HAnimJoint116.addChildren(HAnimSegment117)

HAnimJoint107.addChildren(HAnimJoint116)

HAnimJoint98.addChildren(HAnimJoint107)

HAnimJoint89.addChildren(HAnimJoint98)

HAnimJoint45.addChildren(HAnimJoint89)

HAnimJoint23.addChildren(HAnimJoint45)
#MC3
HAnimJoint125 = x3d.HAnimJoint()
HAnimJoint125.setName("l_midcarpal_joint_3")
HAnimJoint125.setDEF("l_midcarpal_joint_3")
HAnimJoint125.setCenter([0,0.07,0])
HAnimJoint125.setDisplayBBox(False)
HAnimSegment126 = x3d.HAnimSegment()
HAnimSegment126.setName("l_capitate")
HAnimSegment126.setDEF("l_capitate")
HAnimSegment126.setDisplayBBox(False)
Transform127 = x3d.Transform()
Transform127.setTranslation([0,0.07,0])
Transform127.setDisplayBBox(False)
Shape128 = x3d.Shape()
Shape128.setUSE("HAnimNewJointShape")

Transform127.addChildren(Shape128)

HAnimSegment126.addChildren(Transform127)
Shape129 = x3d.Shape()
Shape129.setDisplayBBox(False)
Appearance130 = x3d.Appearance()
Material131 = x3d.Material()
Material131.setEmissiveColor([1,1,1])

Appearance130.setMaterial(Material131)

Shape129.setAppearance(Appearance130)
IndexedLineSet132 = x3d.IndexedLineSet()
IndexedLineSet132.setDEF("MC3toCMC3")
IndexedLineSet132.setCoordIndex([0,1])
Coordinate133 = x3d.Coordinate()
Coordinate133.setPoint([0,0.07,0,0,0.2,0])

IndexedLineSet132.setCoord(Coordinate133)

Shape129.setGeometry(IndexedLineSet132)

HAnimSegment126.addChildren(Shape129)

HAnimJoint125.addChildren(HAnimSegment126)
#Middle fingle
HAnimJoint134 = x3d.HAnimJoint()
HAnimJoint134.setName("l_carpometacarpal_joint_3")
HAnimJoint134.setDEF("l_carpometacarpal_joint_3")
HAnimJoint134.setCenter([0,0.2,0])
HAnimJoint134.setDisplayBBox(False)
HAnimSegment135 = x3d.HAnimSegment()
HAnimSegment135.setName("l_metacarpal3")
HAnimSegment135.setDEF("l_metacarpal3")
HAnimSegment135.setDisplayBBox(False)
Transform136 = x3d.Transform()
Transform136.setTranslation([0,0.2,0])
Transform136.setDisplayBBox(False)
Shape137 = x3d.Shape()
Shape137.setUSE("HAnimJointShape")

Transform136.addChildren(Shape137)

HAnimSegment135.addChildren(Transform136)
Shape138 = x3d.Shape()
Shape138.setDisplayBBox(False)
Appearance139 = x3d.Appearance()
Material140 = x3d.Material()
Material140.setEmissiveColor([1,1,1])

Appearance139.setMaterial(Material140)

Shape138.setAppearance(Appearance139)
IndexedLineSet141 = x3d.IndexedLineSet()
IndexedLineSet141.setDEF("CMC3toMCP3")
IndexedLineSet141.setCoordIndex([0,1])
Coordinate142 = x3d.Coordinate()
Coordinate142.setPoint([0,0.2,0,0.03,0.5,0])

IndexedLineSet141.setCoord(Coordinate142)

Shape138.setGeometry(IndexedLineSet141)

HAnimSegment135.addChildren(Shape138)

HAnimJoint134.addChildren(HAnimSegment135)
HAnimJoint143 = x3d.HAnimJoint()
HAnimJoint143.setName("l_metacarpophalangeal_joint_3")
HAnimJoint143.setDEF("l_metacarpophalangeal_joint_3")
HAnimJoint143.setCenter([0.03,0.5,0])
HAnimJoint143.setDisplayBBox(False)
HAnimSegment144 = x3d.HAnimSegment()
HAnimSegment144.setName("l_proximal_phalanges3")
HAnimSegment144.setDEF("l_proximal_phalanges3")
HAnimSegment144.setDisplayBBox(False)
Transform145 = x3d.Transform()
Transform145.setTranslation([0.03,0.5,0])
Transform145.setDisplayBBox(False)
Shape146 = x3d.Shape()
Shape146.setUSE("HAnimJointShape")

Transform145.addChildren(Shape146)

HAnimSegment144.addChildren(Transform145)
Shape147 = x3d.Shape()
Shape147.setDisplayBBox(False)
Appearance148 = x3d.Appearance()
Material149 = x3d.Material()
Material149.setEmissiveColor([1,1,1])

Appearance148.setMaterial(Material149)

Shape147.setAppearance(Appearance148)
IndexedLineSet150 = x3d.IndexedLineSet()
IndexedLineSet150.setDEF("MCP3toPIP3")
IndexedLineSet150.setCoordIndex([0,1])
Coordinate151 = x3d.Coordinate()
Coordinate151.setPoint([0.03,0.5,0,0.05,0.75,0])

IndexedLineSet150.setCoord(Coordinate151)

Shape147.setGeometry(IndexedLineSet150)

HAnimSegment144.addChildren(Shape147)

HAnimJoint143.addChildren(HAnimSegment144)
HAnimJoint152 = x3d.HAnimJoint()
HAnimJoint152.setName("l_proximal_interphalangeal_joint_3")
HAnimJoint152.setDEF("l_proximal_interphalangeal_joint_3")
HAnimJoint152.setCenter([0.05,0.75,0])
HAnimJoint152.setDisplayBBox(False)
HAnimSegment153 = x3d.HAnimSegment()
HAnimSegment153.setName("l_middle_phalanges3")
HAnimSegment153.setDEF("l_middle_phalanges3")
HAnimSegment153.setDisplayBBox(False)
Transform154 = x3d.Transform()
Transform154.setTranslation([0.05,0.75,0])
Transform154.setDisplayBBox(False)
Shape155 = x3d.Shape()
Shape155.setUSE("HAnimJointShape")

Transform154.addChildren(Shape155)

HAnimSegment153.addChildren(Transform154)
Shape156 = x3d.Shape()
Shape156.setDisplayBBox(False)
Appearance157 = x3d.Appearance()
Material158 = x3d.Material()
Material158.setEmissiveColor([1,1,1])

Appearance157.setMaterial(Material158)

Shape156.setAppearance(Appearance157)
IndexedLineSet159 = x3d.IndexedLineSet()
IndexedLineSet159.setDEF("PIP3toDIP3")
IndexedLineSet159.setCoordIndex([0,1])
Coordinate160 = x3d.Coordinate()
Coordinate160.setPoint([0.05,0.75,0,0.08,0.96,0])

IndexedLineSet159.setCoord(Coordinate160)

Shape156.setGeometry(IndexedLineSet159)

HAnimSegment153.addChildren(Shape156)

HAnimJoint152.addChildren(HAnimSegment153)
HAnimJoint161 = x3d.HAnimJoint()
HAnimJoint161.setName("l_distal_interphalangeal_joint_3")
HAnimJoint161.setDEF("l_distal_interphalangeal_joint_3")
HAnimJoint161.setCenter([0.08,0.96,0])
HAnimJoint161.setDisplayBBox(False)
HAnimSegment162 = x3d.HAnimSegment()
HAnimSegment162.setName("l_distal_phalanges3")
HAnimSegment162.setDEF("l_distal_phalanges3")
HAnimSegment162.setDisplayBBox(False)
Transform163 = x3d.Transform()
Transform163.setTranslation([0.08,0.96,0])
Transform163.setDisplayBBox(False)
Shape164 = x3d.Shape()
Shape164.setUSE("HAnimJointShape")

Transform163.addChildren(Shape164)

HAnimSegment162.addChildren(Transform163)
Shape165 = x3d.Shape()
Shape165.setDisplayBBox(False)
Appearance166 = x3d.Appearance()
Material167 = x3d.Material()
Material167.setEmissiveColor([1,1,1])

Appearance166.setMaterial(Material167)

Shape165.setAppearance(Appearance166)
IndexedLineSet168 = x3d.IndexedLineSet()
IndexedLineSet168.setDEF("fingertip_l_distal_interphalangeal_joint_3")
IndexedLineSet168.setCoordIndex([0,1])
Coordinate169 = x3d.Coordinate()
Coordinate169.setPoint([0.08,0.96,0,0.09,1.05,0])

IndexedLineSet168.setCoord(Coordinate169)

Shape165.setGeometry(IndexedLineSet168)

HAnimSegment162.addChildren(Shape165)

HAnimJoint161.addChildren(HAnimSegment162)

HAnimJoint152.addChildren(HAnimJoint161)

HAnimJoint143.addChildren(HAnimJoint152)

HAnimJoint134.addChildren(HAnimJoint143)

HAnimJoint125.addChildren(HAnimJoint134)

HAnimJoint23.addChildren(HAnimJoint125)
#MC45
HAnimJoint170 = x3d.HAnimJoint()
HAnimJoint170.setName("l_midcarpal_joint_12")
HAnimJoint170.setDEF("l_midcarpal_joint_45")
HAnimJoint170.setCenter([-0.1,0.1,0])
HAnimJoint170.setDisplayBBox(False)
HAnimSegment171 = x3d.HAnimSegment()
HAnimSegment171.setName("l_hamate")
HAnimSegment171.setDEF("l_hamate")
HAnimSegment171.setDisplayBBox(False)
Transform172 = x3d.Transform()
Transform172.setTranslation([-0.1,0.1,0])
Transform172.setDisplayBBox(False)
Shape173 = x3d.Shape()
Shape173.setUSE("HAnimNewJointShape")

Transform172.addChildren(Shape173)

HAnimSegment171.addChildren(Transform172)
Shape174 = x3d.Shape()
Shape174.setDisplayBBox(False)
Appearance175 = x3d.Appearance()
Material176 = x3d.Material()
Material176.setEmissiveColor([1,1,1])

Appearance175.setMaterial(Material176)

Shape174.setAppearance(Appearance175)
IndexedLineSet177 = x3d.IndexedLineSet()
IndexedLineSet177.setDEF("MC45toCMC4")
IndexedLineSet177.setCoordIndex([0,1])
Coordinate178 = x3d.Coordinate()
Coordinate178.setPoint([-0.1,0.1,0,-0.1,0.2,0])

IndexedLineSet177.setCoord(Coordinate178)

Shape174.setGeometry(IndexedLineSet177)

HAnimSegment171.addChildren(Shape174)
Shape179 = x3d.Shape()
Shape179.setDisplayBBox(False)
Appearance180 = x3d.Appearance()
Material181 = x3d.Material()
Material181.setEmissiveColor([1,1,1])

Appearance180.setMaterial(Material181)

Shape179.setAppearance(Appearance180)
IndexedLineSet182 = x3d.IndexedLineSet()
IndexedLineSet182.setDEF("MC45toCMC5")
IndexedLineSet182.setCoordIndex([0,1])
Coordinate183 = x3d.Coordinate()
Coordinate183.setPoint([-0.1,0.1,0,-0.15,0.17,0])

IndexedLineSet182.setCoord(Coordinate183)

Shape179.setGeometry(IndexedLineSet182)

HAnimSegment171.addChildren(Shape179)

HAnimJoint170.addChildren(HAnimSegment171)
#ring finger
HAnimJoint184 = x3d.HAnimJoint()
HAnimJoint184.setName("l_carpometacarpal_joint_4")
HAnimJoint184.setDEF("l_carpometacarpal_joint_4")
HAnimJoint184.setCenter([-0.1,0.2,0])
HAnimJoint184.setDisplayBBox(False)
HAnimSegment185 = x3d.HAnimSegment()
HAnimSegment185.setName("l_metacarpal4")
HAnimSegment185.setDEF("l_metacarpal4")
HAnimSegment185.setDisplayBBox(False)
Transform186 = x3d.Transform()
Transform186.setTranslation([-0.1,0.2,0])
Transform186.setDisplayBBox(False)
Shape187 = x3d.Shape()
Shape187.setUSE("HAnimJointShape")

Transform186.addChildren(Shape187)

HAnimSegment185.addChildren(Transform186)
Shape188 = x3d.Shape()
Shape188.setDisplayBBox(False)
Appearance189 = x3d.Appearance()
Material190 = x3d.Material()
Material190.setEmissiveColor([1,1,1])

Appearance189.setMaterial(Material190)

Shape188.setAppearance(Appearance189)
IndexedLineSet191 = x3d.IndexedLineSet()
IndexedLineSet191.setDEF("CMC4toMCP4")
IndexedLineSet191.setCoordIndex([0,1])
Coordinate192 = x3d.Coordinate()
Coordinate192.setPoint([-0.1,0.2,0,-0.1,0.47,0])

IndexedLineSet191.setCoord(Coordinate192)

Shape188.setGeometry(IndexedLineSet191)

HAnimSegment185.addChildren(Shape188)

HAnimJoint184.addChildren(HAnimSegment185)
HAnimJoint193 = x3d.HAnimJoint()
HAnimJoint193.setName("l_metacarpophalangeal_joint_4")
HAnimJoint193.setDEF("l_metacarpophalangeal_joint_4")
HAnimJoint193.setCenter([-0.1,0.47,0])
HAnimJoint193.setDisplayBBox(False)
HAnimSegment194 = x3d.HAnimSegment()
HAnimSegment194.setName("l_proximal_phalanges4")
HAnimSegment194.setDEF("l_proximal_phalanges4")
HAnimSegment194.setDisplayBBox(False)
Transform195 = x3d.Transform()
Transform195.setTranslation([-0.1,0.47,0])
Transform195.setDisplayBBox(False)
Shape196 = x3d.Shape()
Shape196.setUSE("HAnimJointShape")

Transform195.addChildren(Shape196)

HAnimSegment194.addChildren(Transform195)
Shape197 = x3d.Shape()
Shape197.setDisplayBBox(False)
Appearance198 = x3d.Appearance()
Material199 = x3d.Material()
Material199.setEmissiveColor([1,1,1])

Appearance198.setMaterial(Material199)

Shape197.setAppearance(Appearance198)
IndexedLineSet200 = x3d.IndexedLineSet()
IndexedLineSet200.setDEF("MCP4toPIP4")
IndexedLineSet200.setCoordIndex([0,1])
Coordinate201 = x3d.Coordinate()
Coordinate201.setPoint([-0.1,0.47,0,-0.1,0.7,0])

IndexedLineSet200.setCoord(Coordinate201)

Shape197.setGeometry(IndexedLineSet200)

HAnimSegment194.addChildren(Shape197)

HAnimJoint193.addChildren(HAnimSegment194)
HAnimJoint202 = x3d.HAnimJoint()
HAnimJoint202.setName("l_proximal_interphalangeal_joint_4")
HAnimJoint202.setDEF("l_proximal_interphalangeal_joint_4")
HAnimJoint202.setCenter([-0.1,0.7,0])
HAnimJoint202.setDisplayBBox(False)
HAnimSegment203 = x3d.HAnimSegment()
HAnimSegment203.setName("l_middle_phalanges4")
HAnimSegment203.setDEF("l_middle_phalanges4")
HAnimSegment203.setDisplayBBox(False)
Transform204 = x3d.Transform()
Transform204.setTranslation([-0.1,0.7,0])
Transform204.setDisplayBBox(False)
Shape205 = x3d.Shape()
Shape205.setUSE("HAnimJointShape")

Transform204.addChildren(Shape205)

HAnimSegment203.addChildren(Transform204)
Shape206 = x3d.Shape()
Shape206.setDisplayBBox(False)
Appearance207 = x3d.Appearance()
Material208 = x3d.Material()
Material208.setEmissiveColor([1,1,1])

Appearance207.setMaterial(Material208)

Shape206.setAppearance(Appearance207)
IndexedLineSet209 = x3d.IndexedLineSet()
IndexedLineSet209.setDEF("PIP4toDIP4")
IndexedLineSet209.setCoordIndex([0,1])
Coordinate210 = x3d.Coordinate()
Coordinate210.setPoint([-0.1,0.7,0,-0.1,0.93,0])

IndexedLineSet209.setCoord(Coordinate210)

Shape206.setGeometry(IndexedLineSet209)

HAnimSegment203.addChildren(Shape206)

HAnimJoint202.addChildren(HAnimSegment203)
HAnimJoint211 = x3d.HAnimJoint()
HAnimJoint211.setName("l_distal_interphalangeal_joint_4")
HAnimJoint211.setDEF("l_distal_interphalangeal_joint_4")
HAnimJoint211.setCenter([-0.1,0.93,0])
HAnimJoint211.setDisplayBBox(False)
HAnimSegment212 = x3d.HAnimSegment()
HAnimSegment212.setName("l_distal_phalanx4")
HAnimSegment212.setDEF("l_distal_phalanx4")
HAnimSegment212.setDisplayBBox(False)
Transform213 = x3d.Transform()
Transform213.setTranslation([-0.1,0.93,0])
Transform213.setDisplayBBox(False)
Shape214 = x3d.Shape()
Shape214.setUSE("HAnimJointShape")

Transform213.addChildren(Shape214)

HAnimSegment212.addChildren(Transform213)
Shape215 = x3d.Shape()
Shape215.setDisplayBBox(False)
Appearance216 = x3d.Appearance()
Material217 = x3d.Material()
Material217.setEmissiveColor([1,1,1])

Appearance216.setMaterial(Material217)

Shape215.setAppearance(Appearance216)
IndexedLineSet218 = x3d.IndexedLineSet()
IndexedLineSet218.setDEF("fingertip_l_distal_interphalangeal_joint_4")
IndexedLineSet218.setCoordIndex([0,1])
Coordinate219 = x3d.Coordinate()
Coordinate219.setPoint([-0.1,0.93,0,-0.1,1,0])

IndexedLineSet218.setCoord(Coordinate219)

Shape215.setGeometry(IndexedLineSet218)

HAnimSegment212.addChildren(Shape215)

HAnimJoint211.addChildren(HAnimSegment212)

HAnimJoint202.addChildren(HAnimJoint211)

HAnimJoint193.addChildren(HAnimJoint202)

HAnimJoint184.addChildren(HAnimJoint193)

HAnimJoint170.addChildren(HAnimJoint184)
#pinky finger
HAnimJoint220 = x3d.HAnimJoint()
HAnimJoint220.setName("l_carpometacarpal_joint_5")
HAnimJoint220.setDEF("l_carpometacarpal_joint_5")
HAnimJoint220.setCenter([-0.15,0.17,0])
HAnimJoint220.setDisplayBBox(False)
HAnimSegment221 = x3d.HAnimSegment()
HAnimSegment221.setName("l_metacarpal5")
HAnimSegment221.setDEF("l_metacarpal5")
HAnimSegment221.setDisplayBBox(False)
Transform222 = x3d.Transform()
Transform222.setTranslation([-0.15,0.17,0])
Transform222.setDisplayBBox(False)
Shape223 = x3d.Shape()
Shape223.setUSE("HAnimJointShape")

Transform222.addChildren(Shape223)

HAnimSegment221.addChildren(Transform222)
Shape224 = x3d.Shape()
Shape224.setDisplayBBox(False)
Appearance225 = x3d.Appearance()
Material226 = x3d.Material()
Material226.setEmissiveColor([1,1,1])

Appearance225.setMaterial(Material226)

Shape224.setAppearance(Appearance225)
IndexedLineSet227 = x3d.IndexedLineSet()
IndexedLineSet227.setDEF("CMC5toMCP5")
IndexedLineSet227.setCoordIndex([0,1])
Coordinate228 = x3d.Coordinate()
Coordinate228.setPoint([-0.15,0.17,0,-0.2,0.4,0])

IndexedLineSet227.setCoord(Coordinate228)

Shape224.setGeometry(IndexedLineSet227)

HAnimSegment221.addChildren(Shape224)

HAnimJoint220.addChildren(HAnimSegment221)
HAnimJoint229 = x3d.HAnimJoint()
HAnimJoint229.setName("l_metacarpophalangeal_joint_5")
HAnimJoint229.setDEF("l_metacarpophalangeal_joint_5")
HAnimJoint229.setCenter([-0.2,0.4,0])
HAnimJoint229.setDisplayBBox(False)
HAnimSegment230 = x3d.HAnimSegment()
HAnimSegment230.setName("l_proximal_phalanges2")
HAnimSegment230.setDEF("l_proximal_phalanges5")
HAnimSegment230.setDisplayBBox(False)
Transform231 = x3d.Transform()
Transform231.setTranslation([-0.2,0.4,0])
Transform231.setDisplayBBox(False)
Shape232 = x3d.Shape()
Shape232.setUSE("HAnimJointShape")

Transform231.addChildren(Shape232)

HAnimSegment230.addChildren(Transform231)
Shape233 = x3d.Shape()
Shape233.setDisplayBBox(False)
Appearance234 = x3d.Appearance()
Material235 = x3d.Material()
Material235.setEmissiveColor([1,1,1])

Appearance234.setMaterial(Material235)

Shape233.setAppearance(Appearance234)
IndexedLineSet236 = x3d.IndexedLineSet()
IndexedLineSet236.setDEF("MCP5toPIP5")
IndexedLineSet236.setCoordIndex([0,1])
Coordinate237 = x3d.Coordinate()
Coordinate237.setPoint([-0.2,0.4,0,-0.23,0.63,0])

IndexedLineSet236.setCoord(Coordinate237)

Shape233.setGeometry(IndexedLineSet236)

HAnimSegment230.addChildren(Shape233)

HAnimJoint229.addChildren(HAnimSegment230)
HAnimJoint238 = x3d.HAnimJoint()
HAnimJoint238.setName("l_proximal_interphalangeal_joint_5")
HAnimJoint238.setDEF("l_proximal_interphalangeal_joint_5")
HAnimJoint238.setCenter([-0.23,0.63,0])
HAnimJoint238.setDisplayBBox(False)
HAnimSegment239 = x3d.HAnimSegment()
HAnimSegment239.setName("l_middle_phalanges5")
HAnimSegment239.setDEF("l_middle_phalanges5")
HAnimSegment239.setDisplayBBox(False)
Transform240 = x3d.Transform()
Transform240.setTranslation([-0.23,0.63,0])
Transform240.setDisplayBBox(False)
Shape241 = x3d.Shape()
Shape241.setUSE("HAnimJointShape")

Transform240.addChildren(Shape241)

HAnimSegment239.addChildren(Transform240)
Shape242 = x3d.Shape()
Shape242.setDisplayBBox(False)
Appearance243 = x3d.Appearance()
Material244 = x3d.Material()
Material244.setEmissiveColor([1,1,1])

Appearance243.setMaterial(Material244)

Shape242.setAppearance(Appearance243)
IndexedLineSet245 = x3d.IndexedLineSet()
IndexedLineSet245.setDEF("PIP5toDIP5")
IndexedLineSet245.setCoordIndex([0,1])
Coordinate246 = x3d.Coordinate()
Coordinate246.setPoint([-0.23,0.63,0,-0.25,0.79,0])

IndexedLineSet245.setCoord(Coordinate246)

Shape242.setGeometry(IndexedLineSet245)

HAnimSegment239.addChildren(Shape242)

HAnimJoint238.addChildren(HAnimSegment239)
HAnimJoint247 = x3d.HAnimJoint()
HAnimJoint247.setName("l_distal_interphalangeal_joint_5")
HAnimJoint247.setDEF("l_distal_interphalangeal_joint_5")
HAnimJoint247.setCenter([-0.25,0.79,0])
HAnimJoint247.setDisplayBBox(False)
HAnimSegment248 = x3d.HAnimSegment()
HAnimSegment248.setName("l_distal_phalanges5")
HAnimSegment248.setDEF("l_distal_phalanges5")
HAnimSegment248.setDisplayBBox(False)
Transform249 = x3d.Transform()
Transform249.setTranslation([-0.25,0.79,0])
Transform249.setDisplayBBox(False)
Shape250 = x3d.Shape()
Shape250.setUSE("HAnimJointShape")

Transform249.addChildren(Shape250)

HAnimSegment248.addChildren(Transform249)
Shape251 = x3d.Shape()
Shape251.setDisplayBBox(False)
Appearance252 = x3d.Appearance()
Material253 = x3d.Material()
Material253.setEmissiveColor([1,1,1])

Appearance252.setMaterial(Material253)

Shape251.setAppearance(Appearance252)
IndexedLineSet254 = x3d.IndexedLineSet()
IndexedLineSet254.setDEF("fingertip_l_distal_interphalangeal_joint_5")
IndexedLineSet254.setCoordIndex([0,1])
Coordinate255 = x3d.Coordinate()
Coordinate255.setPoint([-0.25,0.79,0,-0.26,0.85,0])

IndexedLineSet254.setCoord(Coordinate255)

Shape251.setGeometry(IndexedLineSet254)

HAnimSegment248.addChildren(Shape251)

HAnimJoint247.addChildren(HAnimSegment248)

HAnimJoint238.addChildren(HAnimJoint247)

HAnimJoint229.addChildren(HAnimJoint238)

HAnimJoint220.addChildren(HAnimJoint229)

HAnimJoint170.addChildren(HAnimJoint220)

HAnimJoint23.addChildren(HAnimJoint170)

HAnimJoint22.addChildren(HAnimJoint23)

HAnimHumanoid21.addJoints(HAnimJoint22)
HAnimJoint256 = x3d.HAnimJoint()
HAnimJoint256.setUSE("hanim_HumanoidRoot")

HAnimHumanoid21.addJoints(HAnimJoint256)
HAnimJoint257 = x3d.HAnimJoint()
HAnimJoint257.setUSE("l_radiocarpal_joint")

HAnimHumanoid21.addJoints(HAnimJoint257)
HAnimJoint258 = x3d.HAnimJoint()
HAnimJoint258.setUSE("l_midcarpal_joint_12")

HAnimHumanoid21.addJoints(HAnimJoint258)
HAnimJoint259 = x3d.HAnimJoint()
HAnimJoint259.setUSE("l_carpometacarpal_joint_1")

HAnimHumanoid21.addJoints(HAnimJoint259)
HAnimJoint260 = x3d.HAnimJoint()
HAnimJoint260.setUSE("l_metacarpophalangeal_joint_1")

HAnimHumanoid21.addJoints(HAnimJoint260)
HAnimJoint261 = x3d.HAnimJoint()
HAnimJoint261.setUSE("l_interphalangeal_joint_1")

HAnimHumanoid21.addJoints(HAnimJoint261)
HAnimJoint262 = x3d.HAnimJoint()
HAnimJoint262.setUSE("l_carpometacarpal_joint_2")

HAnimHumanoid21.addJoints(HAnimJoint262)
HAnimJoint263 = x3d.HAnimJoint()
HAnimJoint263.setUSE("l_metacarpophalangeal_joint_2")

HAnimHumanoid21.addJoints(HAnimJoint263)
HAnimJoint264 = x3d.HAnimJoint()
HAnimJoint264.setUSE("l_proximal_interphalangeal_joint_2")

HAnimHumanoid21.addJoints(HAnimJoint264)
HAnimJoint265 = x3d.HAnimJoint()
HAnimJoint265.setUSE("l_distal_interphalangeal_joint_2")

HAnimHumanoid21.addJoints(HAnimJoint265)
HAnimJoint266 = x3d.HAnimJoint()
HAnimJoint266.setUSE("l_midcarpal_joint_3")

HAnimHumanoid21.addJoints(HAnimJoint266)
HAnimJoint267 = x3d.HAnimJoint()
HAnimJoint267.setUSE("l_carpometacarpal_joint_3")

HAnimHumanoid21.addJoints(HAnimJoint267)
HAnimJoint268 = x3d.HAnimJoint()
HAnimJoint268.setUSE("l_metacarpophalangeal_joint_3")

HAnimHumanoid21.addJoints(HAnimJoint268)
HAnimJoint269 = x3d.HAnimJoint()
HAnimJoint269.setUSE("l_proximal_interphalangeal_joint_3")

HAnimHumanoid21.addJoints(HAnimJoint269)
HAnimJoint270 = x3d.HAnimJoint()
HAnimJoint270.setUSE("l_distal_interphalangeal_joint_3")

HAnimHumanoid21.addJoints(HAnimJoint270)
HAnimJoint271 = x3d.HAnimJoint()
HAnimJoint271.setUSE("l_midcarpal_joint_45")

HAnimHumanoid21.addJoints(HAnimJoint271)
HAnimJoint272 = x3d.HAnimJoint()
HAnimJoint272.setUSE("l_carpometacarpal_joint_4")

HAnimHumanoid21.addJoints(HAnimJoint272)
HAnimJoint273 = x3d.HAnimJoint()
HAnimJoint273.setUSE("l_metacarpophalangeal_joint_4")

HAnimHumanoid21.addJoints(HAnimJoint273)
HAnimJoint274 = x3d.HAnimJoint()
HAnimJoint274.setUSE("l_proximal_interphalangeal_joint_4")

HAnimHumanoid21.addJoints(HAnimJoint274)
HAnimJoint275 = x3d.HAnimJoint()
HAnimJoint275.setUSE("l_distal_interphalangeal_joint_4")

HAnimHumanoid21.addJoints(HAnimJoint275)
HAnimJoint276 = x3d.HAnimJoint()
HAnimJoint276.setUSE("l_carpometacarpal_joint_5")

HAnimHumanoid21.addJoints(HAnimJoint276)
HAnimJoint277 = x3d.HAnimJoint()
HAnimJoint277.setUSE("l_metacarpophalangeal_joint_5")

HAnimHumanoid21.addJoints(HAnimJoint277)
HAnimJoint278 = x3d.HAnimJoint()
HAnimJoint278.setUSE("l_proximal_interphalangeal_joint_5")

HAnimHumanoid21.addJoints(HAnimJoint278)
HAnimJoint279 = x3d.HAnimJoint()
HAnimJoint279.setUSE("l_distal_interphalangeal_joint_5")

HAnimHumanoid21.addJoints(HAnimJoint279)
HAnimSegment280 = x3d.HAnimSegment()
HAnimSegment280.setUSE("l_wrist")

HAnimHumanoid21.addSegments(HAnimSegment280)
HAnimSegment281 = x3d.HAnimSegment()
HAnimSegment281.setUSE("l_trapezoid")

HAnimHumanoid21.addSegments(HAnimSegment281)
HAnimSegment282 = x3d.HAnimSegment()
HAnimSegment282.setUSE("l_metacarpal_1")

HAnimHumanoid21.addSegments(HAnimSegment282)
HAnimSegment283 = x3d.HAnimSegment()
HAnimSegment283.setUSE("l_proximal_phalanges1")

HAnimHumanoid21.addSegments(HAnimSegment283)
HAnimSegment284 = x3d.HAnimSegment()
HAnimSegment284.setUSE("l_distal_phalanges1")

HAnimHumanoid21.addSegments(HAnimSegment284)
HAnimSegment285 = x3d.HAnimSegment()
HAnimSegment285.setUSE("l_metacarpal2")

HAnimHumanoid21.addSegments(HAnimSegment285)
HAnimSegment286 = x3d.HAnimSegment()
HAnimSegment286.setUSE("l_proximal_phalanges2")

HAnimHumanoid21.addSegments(HAnimSegment286)
HAnimSegment287 = x3d.HAnimSegment()
HAnimSegment287.setUSE("l_middle_phalanges2")

HAnimHumanoid21.addSegments(HAnimSegment287)
HAnimSegment288 = x3d.HAnimSegment()
HAnimSegment288.setUSE("l_distal_phalanges2")

HAnimHumanoid21.addSegments(HAnimSegment288)
HAnimSegment289 = x3d.HAnimSegment()
HAnimSegment289.setUSE("l_capitate")

HAnimHumanoid21.addSegments(HAnimSegment289)
HAnimSegment290 = x3d.HAnimSegment()
HAnimSegment290.setUSE("l_metacarpal3")

HAnimHumanoid21.addSegments(HAnimSegment290)
HAnimSegment291 = x3d.HAnimSegment()
HAnimSegment291.setUSE("l_proximal_phalanges3")

HAnimHumanoid21.addSegments(HAnimSegment291)
HAnimSegment292 = x3d.HAnimSegment()
HAnimSegment292.setUSE("l_middle_phalanges3")

HAnimHumanoid21.addSegments(HAnimSegment292)
HAnimSegment293 = x3d.HAnimSegment()
HAnimSegment293.setUSE("l_distal_phalanges3")

HAnimHumanoid21.addSegments(HAnimSegment293)
HAnimSegment294 = x3d.HAnimSegment()
HAnimSegment294.setUSE("l_hamate")

HAnimHumanoid21.addSegments(HAnimSegment294)
HAnimSegment295 = x3d.HAnimSegment()
HAnimSegment295.setUSE("l_metacarpal4")

HAnimHumanoid21.addSegments(HAnimSegment295)
HAnimSegment296 = x3d.HAnimSegment()
HAnimSegment296.setUSE("l_proximal_phalanges4")

HAnimHumanoid21.addSegments(HAnimSegment296)
HAnimSegment297 = x3d.HAnimSegment()
HAnimSegment297.setUSE("l_middle_phalanges4")

HAnimHumanoid21.addSegments(HAnimSegment297)
HAnimSegment298 = x3d.HAnimSegment()
HAnimSegment298.setUSE("l_distal_phalanx4")

HAnimHumanoid21.addSegments(HAnimSegment298)
HAnimSegment299 = x3d.HAnimSegment()
HAnimSegment299.setUSE("l_metacarpal5")

HAnimHumanoid21.addSegments(HAnimSegment299)
HAnimSegment300 = x3d.HAnimSegment()
HAnimSegment300.setUSE("l_proximal_phalanges5")

HAnimHumanoid21.addSegments(HAnimSegment300)
HAnimSegment301 = x3d.HAnimSegment()
HAnimSegment301.setUSE("l_middle_phalanges5")

HAnimHumanoid21.addSegments(HAnimSegment301)
HAnimSegment302 = x3d.HAnimSegment()
HAnimSegment302.setUSE("l_distal_phalanges5")

HAnimHumanoid21.addSegments(HAnimSegment302)

Scene19.addChildren(HAnimHumanoid21)

X3D0.setScene(Scene19)
X3D0.toFileX3D("../data/HAnimModelHandLeft_RoundTrip.x3d")
