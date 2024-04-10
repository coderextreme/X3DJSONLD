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
meta3.setContent("Humanoid4_1.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("identifier")
meta4.setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4_1.x3d")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("description")
meta5.setContent("An attempt at a standard LOA-4 skeleton")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("generator")
meta6.setContent("h2.pl")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("14 Jan 2023")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("creator")
meta8.setContent("John Carlson")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("created")
meta9.setContent("9 November 2020")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("license")
meta10.setContent("../license.html")

head1.addMeta(meta10)

X3D0.setHead(head1)
Scene11 = x3d.Scene()
Transform12 = x3d.Transform()
#DEF for markerfor XYZ axes
Shape13 = x3d.Shape()
Shape13.setDEF("AxisLinesShape")
#RGB lines showing XYZ axes
IndexedLineSet14 = x3d.IndexedLineSet()
IndexedLineSet14.setColorIndex([0,1,2])
IndexedLineSet14.setColorPerVertex(False)
IndexedLineSet14.setCoordIndex([0,1,-1,0,2,-1,0,3,-1])
Coordinate15 = x3d.Coordinate()
Coordinate15.setPoint([0,0,0,0.1,0,0,0,0.1,0,0,0,0.1])

IndexedLineSet14.setCoord(Coordinate15)
Color16 = x3d.Color()
Color16.setColor([1,0,0,0,0.6,0,0,0,1])

IndexedLineSet14.setColor(Color16)

Shape13.setGeometry(IndexedLineSet14)

Transform12.addChild(Shape13)

Scene11.addChildren(Transform12)
Group17 = x3d.Group()
#DEFS for markers of skeleton joints, segments, and sites
Transform18 = x3d.Transform()
Transform19 = x3d.Transform()
Transform19.setTranslation([0,2,0])
Shape20 = x3d.Shape()
Shape20.setDEF("HAnimRootShape")
Sphere21 = x3d.Sphere()
Sphere21.setRadius(0.02)

Shape20.setGeometry(Sphere21)
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.setDEF("HAnimRootMaterial")
Material23.setDiffuseColor([0.8,0,0])
Material23.setTransparency(0.3)

Appearance22.setMaterial(Material23)

Shape20.setAppearance(Appearance22)

Transform19.addChild(Shape20)

Transform18.addChildren(Transform19)
Transform24 = x3d.Transform()
Transform24.setTranslation([0,2.1,0])
Shape25 = x3d.Shape()
Shape25.setDEF("HAnimJointShape")
Sphere26 = x3d.Sphere()
Sphere26.setRadius(0.02)

Shape25.setGeometry(Sphere26)
Appearance27 = x3d.Appearance()
Material28 = x3d.Material()
Material28.setDEF("HAnimJointMaterial")
Material28.setDiffuseColor([0,0,0.8])
Material28.setTransparency(0.3)

Appearance27.setMaterial(Material28)

Shape25.setAppearance(Appearance27)

Transform24.addChild(Shape25)

Transform18.addChildren(Transform24)
Transform29 = x3d.Transform()
Transform29.setTranslation([0,2.05,0])
Shape30 = x3d.Shape()
Shape30.setDEF("HAnimSegmentLine")
LineSet31 = x3d.LineSet()
LineSet31.setVertexCount([2])
ColorRGBA32 = x3d.ColorRGBA()
ColorRGBA32.setDEF("HAnimSegmentLineColorRGBA")
ColorRGBA32.setColor([1,1,0,1,1,1,0,0.1])

LineSet31.setColor(ColorRGBA32)
Coordinate33 = x3d.Coordinate()
Coordinate33.setPoint([-0.05,0,0,0.05,0,0])

LineSet31.setCoord(Coordinate33)

Shape30.setGeometry(LineSet31)

Transform29.addChild(Shape30)

Transform18.addChildren(Transform29)
Transform34 = x3d.Transform()
Transform34.setTranslation([0,2.1,0])
Shape35 = x3d.Shape()
Shape35.setDEF("HAnimSiteShape")
IndexedFaceSet36 = x3d.IndexedFaceSet()
IndexedFaceSet36.setDEF("DiamondIFS")
IndexedFaceSet36.setCreaseAngle(0.5)
IndexedFaceSet36.setSolid(False)
IndexedFaceSet36.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
ColorRGBA37 = x3d.ColorRGBA()
ColorRGBA37.setDEF("HAnimSiteColorRGBA")
ColorRGBA37.setColor([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])

IndexedFaceSet36.setColor(ColorRGBA37)
Coordinate38 = x3d.Coordinate()
Coordinate38.setPoint([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])

IndexedFaceSet36.setCoord(Coordinate38)

Shape35.setGeometry(IndexedFaceSet36)
Appearance39 = x3d.Appearance()
Material40 = x3d.Material()
Material40.setDiffuseColor([1,1,0])
Material40.setTransparency(0.3)

Appearance39.setMaterial(Material40)

Shape35.setAppearance(Appearance39)

Transform34.addChild(Shape35)

Transform18.addChildren(Transform34)

Group17.addChildren(Transform18)

Scene11.addChildren(Group17)
NavigationInfo41 = x3d.NavigationInfo()
NavigationInfo41.setSpeed(1.5)

Scene11.addChildren(NavigationInfo41)
Viewpoint42 = x3d.Viewpoint()
Viewpoint42.setDescription("default")

Scene11.addChildren(Viewpoint42)
HAnimHumanoid43 = x3d.HAnimHumanoid()
HAnimHumanoid43.setName("HAnim")
HAnimHumanoid43.setDEF("hanim_HAnim")
HAnimHumanoid43.setInfo(["humanoidVersion=2.0"])
HAnimHumanoid43.setVersion("2.0")
#</LOD>
Coordinate44 = x3d.Coordinate()
Coordinate44.setUSE("TheSkinCoord")

HAnimHumanoid43.setSkinCoord(Coordinate44)
HAnimJoint45 = x3d.HAnimJoint()
HAnimJoint45.setName("humanoid_root")
HAnimJoint45.setDEF("hanim_humanoid_root")
HAnimJoint45.setCenter([0,0.824,0.0277])
HAnimSegment46 = x3d.HAnimSegment()
HAnimSegment46.setName("sacrum")
HAnimSegment46.setDEF("hanim_sacrum")
Transform47 = x3d.Transform()
Transform47.setTranslation([0,0.824,0.0277])
Transform48 = x3d.Transform()
#Empty Transform
Shape49 = x3d.Shape()
Shape49.setUSE("HAnimJointShape")

Transform48.addChild(Shape49)

Transform47.addChildren(Transform48)

HAnimSegment46.addChildren(Transform47)
Shape50 = x3d.Shape()
LineSet51 = x3d.LineSet()
LineSet51.setVertexCount([2])
Coordinate52 = x3d.Coordinate()
Coordinate52.setPoint([0,0.824,0.0277,0,0.9149,0.0016])

LineSet51.setCoord(Coordinate52)
#from humanoid_root to sacroiliac vertices 2
ColorRGBA53 = x3d.ColorRGBA()
ColorRGBA53.setUSE("HAnimSegmentLineColorRGBA")

LineSet51.setColor(ColorRGBA53)

Shape50.setGeometry(LineSet51)

HAnimSegment46.addChildren(Shape50)
HAnimSite54 = x3d.HAnimSite()
HAnimSite54.setName("buttocks_standing_wall_contact_point_pt")
HAnimSite54.setDEF("hanim_buttocks_standing_wall_contact_point_pt")
TouchSensor55 = x3d.TouchSensor()
TouchSensor55.setDescription("HAnimSite buttocks_standing_wall_contact_point_pt")

HAnimSite54.addChildren(TouchSensor55)
Shape56 = x3d.Shape()
Shape56.setUSE("HAnimSiteShape")

HAnimSite54.addChildren(Shape56)

HAnimSegment46.addChildren(HAnimSite54)
HAnimSite57 = x3d.HAnimSite()
HAnimSite57.setName("crotch_pt")
HAnimSite57.setDEF("hanim_crotch_pt")
HAnimSite57.setTranslation([0.0034,0.8266,0.0257])
TouchSensor58 = x3d.TouchSensor()
TouchSensor58.setDescription("HAnimSite crotch_pt")

HAnimSite57.addChildren(TouchSensor58)
Shape59 = x3d.Shape()
Shape59.setUSE("HAnimSiteShape")

HAnimSite57.addChildren(Shape59)

HAnimSegment46.addChildren(HAnimSite57)
HAnimSite60 = x3d.HAnimSite()
HAnimSite60.setName("l_asis_pt")
HAnimSite60.setDEF("hanim_l_asis_pt")
HAnimSite60.setTranslation([0.0925,0.9983,0.1052])
TouchSensor61 = x3d.TouchSensor()
TouchSensor61.setDescription("HAnimSite l_asis_pt")

HAnimSite60.addChildren(TouchSensor61)
Shape62 = x3d.Shape()
Shape62.setUSE("HAnimSiteShape")

HAnimSite60.addChildren(Shape62)

HAnimSegment46.addChildren(HAnimSite60)
HAnimSite63 = x3d.HAnimSite()
HAnimSite63.setName("l_iliocristale_pt")
HAnimSite63.setDEF("hanim_l_iliocristale_pt")
HAnimSite63.setTranslation([0.1612,1.0537,0.0008])
TouchSensor64 = x3d.TouchSensor()
TouchSensor64.setDescription("HAnimSite l_iliocristale_pt")

HAnimSite63.addChildren(TouchSensor64)
Shape65 = x3d.Shape()
Shape65.setUSE("HAnimSiteShape")

HAnimSite63.addChildren(Shape65)

HAnimSegment46.addChildren(HAnimSite63)
HAnimSite66 = x3d.HAnimSite()
HAnimSite66.setName("l_psis_pt")
HAnimSite66.setDEF("hanim_l_psis_pt")
HAnimSite66.setTranslation([0.0774,1.019,-0.1151])
TouchSensor67 = x3d.TouchSensor()
TouchSensor67.setDescription("HAnimSite l_psis_pt")

HAnimSite66.addChildren(TouchSensor67)
Shape68 = x3d.Shape()
Shape68.setUSE("HAnimSiteShape")

HAnimSite66.addChildren(Shape68)

HAnimSegment46.addChildren(HAnimSite66)
HAnimSite69 = x3d.HAnimSite()
HAnimSite69.setName("l_trochanterion_pt")
HAnimSite69.setDEF("hanim_l_trochanterion_pt")
HAnimSite69.setTranslation([0.1677,0.8336,0.0303])
TouchSensor70 = x3d.TouchSensor()
TouchSensor70.setDescription("HAnimSite l_trochanterion_pt")

HAnimSite69.addChildren(TouchSensor70)
Shape71 = x3d.Shape()
Shape71.setUSE("HAnimSiteShape")

HAnimSite69.addChildren(Shape71)

HAnimSegment46.addChildren(HAnimSite69)
HAnimSite72 = x3d.HAnimSite()
HAnimSite72.setName("r_asis_pt")
HAnimSite72.setDEF("hanim_r_asis_pt")
HAnimSite72.setTranslation([-0.0887,1.0021,0.1112])
TouchSensor73 = x3d.TouchSensor()
TouchSensor73.setDescription("HAnimSite r_asis_pt")

HAnimSite72.addChildren(TouchSensor73)
Shape74 = x3d.Shape()
Shape74.setUSE("HAnimSiteShape")

HAnimSite72.addChildren(Shape74)

HAnimSegment46.addChildren(HAnimSite72)
HAnimSite75 = x3d.HAnimSite()
HAnimSite75.setName("r_iliocristale_pt")
HAnimSite75.setDEF("hanim_r_iliocristale_pt")
HAnimSite75.setTranslation([-0.1525,1.0628,0.0035])
TouchSensor76 = x3d.TouchSensor()
TouchSensor76.setDescription("HAnimSite r_iliocristale_pt")

HAnimSite75.addChildren(TouchSensor76)
Shape77 = x3d.Shape()
Shape77.setUSE("HAnimSiteShape")

HAnimSite75.addChildren(Shape77)

HAnimSegment46.addChildren(HAnimSite75)
HAnimSite78 = x3d.HAnimSite()
HAnimSite78.setName("r_psis_pt")
HAnimSite78.setDEF("hanim_r_psis_pt")
HAnimSite78.setTranslation([-0.0716,1.019,-0.1138])
TouchSensor79 = x3d.TouchSensor()
TouchSensor79.setDescription("HAnimSite r_psis_pt")

HAnimSite78.addChildren(TouchSensor79)
Shape80 = x3d.Shape()
Shape80.setUSE("HAnimSiteShape")

HAnimSite78.addChildren(Shape80)

HAnimSegment46.addChildren(HAnimSite78)
HAnimSite81 = x3d.HAnimSite()
HAnimSite81.setName("r_trochanterion_pt")
HAnimSite81.setDEF("hanim_r_trochanterion_pt")
HAnimSite81.setTranslation([-0.1689,0.8419,0.0352])
TouchSensor82 = x3d.TouchSensor()
TouchSensor82.setDescription("HAnimSite r_trochanterion_pt")

HAnimSite81.addChildren(TouchSensor82)
Shape83 = x3d.Shape()
Shape83.setUSE("HAnimSiteShape")

HAnimSite81.addChildren(Shape83)

HAnimSegment46.addChildren(HAnimSite81)
Shape84 = x3d.Shape()
LineSet85 = x3d.LineSet()
LineSet85.setVertexCount([2])
Coordinate86 = x3d.Coordinate()
Coordinate86.setPoint([0,0.824,0.0277,0.0028,1.0568,-0.0776])

LineSet85.setCoord(Coordinate86)
#from humanoid_root to vl5 vertices 2
ColorRGBA87 = x3d.ColorRGBA()
ColorRGBA87.setUSE("HAnimSegmentLineColorRGBA")

LineSet85.setColor(ColorRGBA87)

Shape84.setGeometry(LineSet85)

HAnimSegment46.addChildren(Shape84)
HAnimSite88 = x3d.HAnimSite()
HAnimSite88.setName("navel_pt")
HAnimSite88.setDEF("hanim_navel_pt")
HAnimSite88.setTranslation([0.0069,1.0966,0.1017])
TouchSensor89 = x3d.TouchSensor()
TouchSensor89.setDescription("HAnimSite navel_pt")

HAnimSite88.addChildren(TouchSensor89)
Shape90 = x3d.Shape()
Shape90.setUSE("HAnimSiteShape")

HAnimSite88.addChildren(Shape90)

HAnimSegment46.addChildren(HAnimSite88)
HAnimSite91 = x3d.HAnimSite()
HAnimSite91.setName("waist_preferred_anterior_pt")
HAnimSite91.setDEF("hanim_waist_preferred_anterior_pt")
TouchSensor92 = x3d.TouchSensor()
TouchSensor92.setDescription("HAnimSite waist_preferred_anterior_pt")

HAnimSite91.addChildren(TouchSensor92)
Shape93 = x3d.Shape()
Shape93.setUSE("HAnimSiteShape")

HAnimSite91.addChildren(Shape93)

HAnimSegment46.addChildren(HAnimSite91)
HAnimSite94 = x3d.HAnimSite()
HAnimSite94.setName("waist_preferred_posterior_pt")
HAnimSite94.setDEF("hanim_waist_preferred_posterior_pt")
HAnimSite94.setTranslation([0.29,1.0915,-0.1091])
TouchSensor95 = x3d.TouchSensor()
TouchSensor95.setDescription("HAnimSite waist_preferred_posterior_pt")

HAnimSite94.addChildren(TouchSensor95)
Shape96 = x3d.Shape()
Shape96.setUSE("HAnimSiteShape")

HAnimSite94.addChildren(Shape96)

HAnimSegment46.addChildren(HAnimSite94)

HAnimJoint45.addChildren(HAnimSegment46)
HAnimJoint97 = x3d.HAnimJoint()
HAnimJoint97.setName("sacroiliac")
HAnimJoint97.setDEF("hanim_sacroiliac")
HAnimJoint97.setCenter([0,0.9149,0.0016])
HAnimSegment98 = x3d.HAnimSegment()
HAnimSegment98.setName("pelvis")
HAnimSegment98.setDEF("hanim_pelvis")
Transform99 = x3d.Transform()
Transform99.setTranslation([0,0.9149,0.0016])
Transform100 = x3d.Transform()
#Empty Transform
Shape101 = x3d.Shape()
Shape101.setUSE("HAnimJointShape")

Transform100.addChild(Shape101)

Transform99.addChildren(Transform100)

HAnimSegment98.addChildren(Transform99)
Shape102 = x3d.Shape()
LineSet103 = x3d.LineSet()
LineSet103.setVertexCount([2])
Coordinate104 = x3d.Coordinate()
Coordinate104.setPoint([0,0.9149,0.0016,0.0961,0.9124,-0.0001])

LineSet103.setCoord(Coordinate104)
#from sacroiliac to l_hip vertices 2
ColorRGBA105 = x3d.ColorRGBA()
ColorRGBA105.setUSE("HAnimSegmentLineColorRGBA")

LineSet103.setColor(ColorRGBA105)

Shape102.setGeometry(LineSet103)

HAnimSegment98.addChildren(Shape102)
HAnimSite106 = x3d.HAnimSite()
HAnimSite106.setName("l_femoral_lateral_epicondyles_pt")
HAnimSite106.setDEF("hanim_l_femoral_lateral_epicondyles_pt")
HAnimSite106.setTranslation([0.1598,0.4967,0.0297])
TouchSensor107 = x3d.TouchSensor()
TouchSensor107.setDescription("HAnimSite l_femoral_lateral_epicondyles_pt")

HAnimSite106.addChildren(TouchSensor107)
Shape108 = x3d.Shape()
Shape108.setUSE("HAnimSiteShape")

HAnimSite106.addChildren(Shape108)

HAnimSegment98.addChildren(HAnimSite106)
HAnimSite109 = x3d.HAnimSite()
HAnimSite109.setName("l_femoral_medial_epicondyles_pt")
HAnimSite109.setDEF("hanim_l_femoral_medial_epicondyles_pt")
HAnimSite109.setTranslation([0.0398,0.4946,0.0303])
TouchSensor110 = x3d.TouchSensor()
TouchSensor110.setDescription("HAnimSite l_femoral_medial_epicondyles_pt")

HAnimSite109.addChildren(TouchSensor110)
Shape111 = x3d.Shape()
Shape111.setUSE("HAnimSiteShape")

HAnimSite109.addChildren(Shape111)

HAnimSegment98.addChildren(HAnimSite109)
HAnimSite112 = x3d.HAnimSite()
HAnimSite112.setName("l_knee_crease_pt")
HAnimSite112.setDEF("hanim_l_knee_crease_pt")
HAnimSite112.setTranslation([0.0993,0.4881,-0.0309])
TouchSensor113 = x3d.TouchSensor()
TouchSensor113.setDescription("HAnimSite l_knee_crease_pt")

HAnimSite112.addChildren(TouchSensor113)
Shape114 = x3d.Shape()
Shape114.setUSE("HAnimSiteShape")

HAnimSite112.addChildren(Shape114)

HAnimSegment98.addChildren(HAnimSite112)
HAnimSite115 = x3d.HAnimSite()
HAnimSite115.setName("l_suprapatella_pt")
HAnimSite115.setDEF("hanim_l_suprapatella_pt")
TouchSensor116 = x3d.TouchSensor()
TouchSensor116.setDescription("HAnimSite l_suprapatella_pt")

HAnimSite115.addChildren(TouchSensor116)
Shape117 = x3d.Shape()
Shape117.setUSE("HAnimSiteShape")

HAnimSite115.addChildren(Shape117)

HAnimSegment98.addChildren(HAnimSite115)
Shape118 = x3d.Shape()
LineSet119 = x3d.LineSet()
LineSet119.setVertexCount([2])
Coordinate120 = x3d.Coordinate()
Coordinate120.setPoint([0,0.9149,0.0016,-0.095,0.9171,0.0029])

LineSet119.setCoord(Coordinate120)
#from sacroiliac to r_hip vertices 2
ColorRGBA121 = x3d.ColorRGBA()
ColorRGBA121.setUSE("HAnimSegmentLineColorRGBA")

LineSet119.setColor(ColorRGBA121)

Shape118.setGeometry(LineSet119)

HAnimSegment98.addChildren(Shape118)
HAnimSite122 = x3d.HAnimSite()
HAnimSite122.setName("r_femoral_lateral_epicondyles_pt")
HAnimSite122.setDEF("hanim_r_femoral_lateral_epicondyles_pt")
HAnimSite122.setTranslation([-0.1421,0.4992,0.031])
TouchSensor123 = x3d.TouchSensor()
TouchSensor123.setDescription("HAnimSite r_femoral_lateral_epicondyles_pt")

HAnimSite122.addChildren(TouchSensor123)
Shape124 = x3d.Shape()
Shape124.setUSE("HAnimSiteShape")

HAnimSite122.addChildren(Shape124)

HAnimSegment98.addChildren(HAnimSite122)
HAnimSite125 = x3d.HAnimSite()
HAnimSite125.setName("r_femoral_medial_epicondyles_pt")
HAnimSite125.setDEF("hanim_r_femoral_medial_epicondyles_pt")
HAnimSite125.setTranslation([-0.0221,0.5014,0.0289])
TouchSensor126 = x3d.TouchSensor()
TouchSensor126.setDescription("HAnimSite r_femoral_medial_epicondyles_pt")

HAnimSite125.addChildren(TouchSensor126)
Shape127 = x3d.Shape()
Shape127.setUSE("HAnimSiteShape")

HAnimSite125.addChildren(Shape127)

HAnimSegment98.addChildren(HAnimSite125)
HAnimSite128 = x3d.HAnimSite()
HAnimSite128.setName("r_knee_crease_pt")
HAnimSite128.setDEF("hanim_r_knee_crease_pt")
HAnimSite128.setTranslation([-0.0825,0.4932,-0.0326])
TouchSensor129 = x3d.TouchSensor()
TouchSensor129.setDescription("HAnimSite r_knee_crease_pt")

HAnimSite128.addChildren(TouchSensor129)
Shape130 = x3d.Shape()
Shape130.setUSE("HAnimSiteShape")

HAnimSite128.addChildren(Shape130)

HAnimSegment98.addChildren(HAnimSite128)
HAnimSite131 = x3d.HAnimSite()
HAnimSite131.setName("r_suprapatella_pt")
HAnimSite131.setDEF("hanim_r_suprapatella_pt")
TouchSensor132 = x3d.TouchSensor()
TouchSensor132.setDescription("HAnimSite r_suprapatella_pt")

HAnimSite131.addChildren(TouchSensor132)
Shape133 = x3d.Shape()
Shape133.setUSE("HAnimSiteShape")

HAnimSite131.addChildren(Shape133)

HAnimSegment98.addChildren(HAnimSite131)

HAnimJoint97.addChildren(HAnimSegment98)
HAnimJoint134 = x3d.HAnimJoint()
HAnimJoint134.setName("l_hip")
HAnimJoint134.setDEF("hanim_l_hip")
HAnimJoint134.setCenter([0.0961,0.9124,-0.0001])
HAnimSegment135 = x3d.HAnimSegment()
HAnimSegment135.setName("l_thigh")
HAnimSegment135.setDEF("hanim_l_thigh")
Transform136 = x3d.Transform()
Transform136.setTranslation([0.0961,0.9124,-0.0001])
Transform137 = x3d.Transform()
#Empty Transform
Shape138 = x3d.Shape()
Shape138.setUSE("HAnimJointShape")

Transform137.addChild(Shape138)

Transform136.addChildren(Transform137)

HAnimSegment135.addChildren(Transform136)
Shape139 = x3d.Shape()
LineSet140 = x3d.LineSet()
LineSet140.setVertexCount([2])
Coordinate141 = x3d.Coordinate()
Coordinate141.setPoint([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308])

LineSet140.setCoord(Coordinate141)
#from l_hip to l_knee vertices 2
ColorRGBA142 = x3d.ColorRGBA()
ColorRGBA142.setUSE("HAnimSegmentLineColorRGBA")

LineSet140.setColor(ColorRGBA142)

Shape139.setGeometry(LineSet140)

HAnimSegment135.addChildren(Shape139)
HAnimSite143 = x3d.HAnimSite()
HAnimSite143.setName("l_lateral_malleolus_pt")
HAnimSite143.setDEF("hanim_l_lateral_malleolus_pt")
HAnimSite143.setTranslation([0.1308,0.0597,-0.1032])
TouchSensor144 = x3d.TouchSensor()
TouchSensor144.setDescription("HAnimSite l_lateral_malleolus_pt")

HAnimSite143.addChildren(TouchSensor144)
Shape145 = x3d.Shape()
Shape145.setUSE("HAnimSiteShape")

HAnimSite143.addChildren(Shape145)

HAnimSegment135.addChildren(HAnimSite143)
HAnimSite146 = x3d.HAnimSite()
HAnimSite146.setName("l_medial_malleolus_pt")
HAnimSite146.setDEF("hanim_l_medial_malleolus_pt")
HAnimSite146.setTranslation([0.089,0.0716,-0.0881])
TouchSensor147 = x3d.TouchSensor()
TouchSensor147.setDescription("HAnimSite l_medial_malleolus_pt")

HAnimSite146.addChildren(TouchSensor147)
Shape148 = x3d.Shape()
Shape148.setUSE("HAnimSiteShape")

HAnimSite146.addChildren(Shape148)

HAnimSegment135.addChildren(HAnimSite146)
HAnimSite149 = x3d.HAnimSite()
HAnimSite149.setName("l_tibiale_pt")
HAnimSite149.setDEF("hanim_l_tibiale_pt")
TouchSensor150 = x3d.TouchSensor()
TouchSensor150.setDescription("HAnimSite l_tibiale_pt")

HAnimSite149.addChildren(TouchSensor150)
Shape151 = x3d.Shape()
Shape151.setUSE("HAnimSiteShape")

HAnimSite149.addChildren(Shape151)

HAnimSegment135.addChildren(HAnimSite149)

HAnimJoint134.addChildren(HAnimSegment135)
HAnimJoint152 = x3d.HAnimJoint()
HAnimJoint152.setName("l_knee")
HAnimJoint152.setDEF("hanim_l_knee")
HAnimJoint152.setCenter([0.104,0.4867,0.0308])
HAnimSegment153 = x3d.HAnimSegment()
HAnimSegment153.setName("l_calf")
HAnimSegment153.setDEF("hanim_l_calf")
Transform154 = x3d.Transform()
Transform154.setTranslation([0.104,0.4867,0.0308])
Transform155 = x3d.Transform()
#Empty Transform
Shape156 = x3d.Shape()
Shape156.setUSE("HAnimJointShape")

Transform155.addChild(Shape156)

Transform154.addChildren(Transform155)

HAnimSegment153.addChildren(Transform154)
Shape157 = x3d.Shape()
LineSet158 = x3d.LineSet()
LineSet158.setVertexCount([2])
Coordinate159 = x3d.Coordinate()
Coordinate159.setPoint([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736])

LineSet158.setCoord(Coordinate159)
#from l_knee to l_talocrural vertices 2
ColorRGBA160 = x3d.ColorRGBA()
ColorRGBA160.setUSE("HAnimSegmentLineColorRGBA")

LineSet158.setColor(ColorRGBA160)

Shape157.setGeometry(LineSet158)

HAnimSegment153.addChildren(Shape157)
HAnimSite161 = x3d.HAnimSite()
HAnimSite161.setName("l_calcaneus_posterior_pt")
HAnimSite161.setDEF("hanim_l_calcaneus_posterior_pt")
HAnimSite161.setTranslation([0.0974,0.0259,-0.1171])
TouchSensor162 = x3d.TouchSensor()
TouchSensor162.setDescription("HAnimSite l_calcaneus_posterior_pt")

HAnimSite161.addChildren(TouchSensor162)
Shape163 = x3d.Shape()
Shape163.setUSE("HAnimSiteShape")

HAnimSite161.addChildren(Shape163)

HAnimSegment153.addChildren(HAnimSite161)
HAnimSite164 = x3d.HAnimSite()
HAnimSite164.setName("l_sphyrion_pt")
HAnimSite164.setDEF("hanim_l_sphyrion_pt")
HAnimSite164.setTranslation([0.089,0.0575,-0.0943])
TouchSensor165 = x3d.TouchSensor()
TouchSensor165.setDescription("HAnimSite l_sphyrion_pt")

HAnimSite164.addChildren(TouchSensor165)
Shape166 = x3d.Shape()
Shape166.setUSE("HAnimSiteShape")

HAnimSite164.addChildren(Shape166)

HAnimSegment153.addChildren(HAnimSite164)

HAnimJoint152.addChildren(HAnimSegment153)
HAnimJoint167 = x3d.HAnimJoint()
HAnimJoint167.setName("l_talocrural")
HAnimJoint167.setDEF("hanim_l_talocrural")
HAnimJoint167.setCenter([0.1101,0.0656,-0.0736])
HAnimSegment168 = x3d.HAnimSegment()
HAnimSegment168.setName("l_talus")
HAnimSegment168.setDEF("hanim_l_talus")
Transform169 = x3d.Transform()
Transform169.setScale([0.15,0.15,0.15])
Transform169.setTranslation([0.08,0.06,-0.025])
Transform169.setRotation([1,0,0,-1.57])
#Transform left foot
Transform170 = x3d.Transform()
#Empty Transform left foot
Shape171 = x3d.Shape()
Shape171.setUSE("HAnimJointShape")

Transform170.addChild(Shape171)

Transform169.addChildren(Transform170)

HAnimSegment168.addChildren(Transform169)
Shape172 = x3d.Shape()
LineSet173 = x3d.LineSet()
LineSet173.setVertexCount([2])
Coordinate174 = x3d.Coordinate()
Coordinate174.setPoint([0.1101,0.0656,-0.0736,3.4715,0.0374,0.6807])

LineSet173.setCoord(Coordinate174)
#from l_talocrural to l_talocalcaneonavicular vertices 2
ColorRGBA175 = x3d.ColorRGBA()
ColorRGBA175.setUSE("HAnimSegmentLineColorRGBA")

LineSet173.setColor(ColorRGBA175)

Shape172.setGeometry(LineSet173)

HAnimSegment168.addChildren(Shape172)
Shape176 = x3d.Shape()
LineSet177 = x3d.LineSet()
LineSet177.setVertexCount([2])
Coordinate178 = x3d.Coordinate()
Coordinate178.setPoint([0.1101,0.0656,-0.0736,3.9515,0.0653,-0.6895])

LineSet177.setCoord(Coordinate178)
#from l_talocrural to l_calcaneocuboid vertices 2
ColorRGBA179 = x3d.ColorRGBA()
ColorRGBA179.setUSE("HAnimSegmentLineColorRGBA")

LineSet177.setColor(ColorRGBA179)

Shape176.setGeometry(LineSet177)

HAnimSegment168.addChildren(Shape176)

HAnimJoint167.addChildren(HAnimSegment168)
HAnimJoint180 = x3d.HAnimJoint()
HAnimJoint180.setName("l_talocalcaneonavicular")
HAnimJoint180.setDEF("hanim_l_talocalcaneonavicular")
HAnimJoint180.setCenter([3.4715,0.0374,0.6807])
HAnimSegment181 = x3d.HAnimSegment()
HAnimSegment181.setName("l_navicular")
HAnimSegment181.setDEF("hanim_l_navicular")
Transform182 = x3d.Transform()
Transform182.setTranslation([3.4715,0.0374,0.6807])
Transform183 = x3d.Transform()
#Empty Transform
Shape184 = x3d.Shape()
Shape184.setUSE("HAnimJointShape")

Transform183.addChild(Shape184)

Transform182.addChildren(Transform183)

HAnimSegment181.addChildren(Transform182)
Shape185 = x3d.Shape()
LineSet186 = x3d.LineSet()
LineSet186.setVertexCount([2])
Coordinate187 = x3d.Coordinate()
Coordinate187.setPoint([3.4715,0.0374,0.6807,2.9855,0.0311,1.2819])

LineSet186.setCoord(Coordinate187)
#from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
ColorRGBA188 = x3d.ColorRGBA()
ColorRGBA188.setUSE("HAnimSegmentLineColorRGBA")

LineSet186.setColor(ColorRGBA188)

Shape185.setGeometry(LineSet186)

HAnimSegment181.addChildren(Shape185)
Shape189 = x3d.Shape()
LineSet190 = x3d.LineSet()
LineSet190.setVertexCount([2])
Coordinate191 = x3d.Coordinate()
Coordinate191.setPoint([3.4715,0.0374,0.6807,3.6105,0.033,1.4168])

LineSet190.setCoord(Coordinate191)
#from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
ColorRGBA192 = x3d.ColorRGBA()
ColorRGBA192.setUSE("HAnimSegmentLineColorRGBA")

LineSet190.setColor(ColorRGBA192)

Shape189.setGeometry(LineSet190)

HAnimSegment181.addChildren(Shape189)
Shape193 = x3d.Shape()
LineSet194 = x3d.LineSet()
LineSet194.setVertexCount([2])
Coordinate195 = x3d.Coordinate()
Coordinate195.setPoint([3.4715,0.0374,0.6807,4.1235,0.0328,1.3453])

LineSet194.setCoord(Coordinate195)
#from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
ColorRGBA196 = x3d.ColorRGBA()
ColorRGBA196.setUSE("HAnimSegmentLineColorRGBA")

LineSet194.setColor(ColorRGBA196)

Shape193.setGeometry(LineSet194)

HAnimSegment181.addChildren(Shape193)

HAnimJoint180.addChildren(HAnimSegment181)
HAnimJoint197 = x3d.HAnimJoint()
HAnimJoint197.setName("l_cuneonavicular_1")
HAnimJoint197.setDEF("hanim_l_cuneonavicular_1")
HAnimJoint197.setCenter([2.9855,0.0311,1.2819])
HAnimSegment198 = x3d.HAnimSegment()
HAnimSegment198.setName("l_cuneiform_1")
HAnimSegment198.setDEF("hanim_l_cuneiform_1")
Transform199 = x3d.Transform()
Transform199.setTranslation([2.9855,0.0311,1.2819])
Transform200 = x3d.Transform()
#Empty Transform
Shape201 = x3d.Shape()
Shape201.setUSE("HAnimJointShape")

Transform200.addChild(Shape201)

Transform199.addChildren(Transform200)

HAnimSegment198.addChildren(Transform199)
Shape202 = x3d.Shape()
LineSet203 = x3d.LineSet()
LineSet203.setVertexCount([2])
Coordinate204 = x3d.Coordinate()
Coordinate204.setPoint([2.9855,0.0311,1.2819,2.8635,0.0194,2.4285])

LineSet203.setCoord(Coordinate204)
#from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
ColorRGBA205 = x3d.ColorRGBA()
ColorRGBA205.setUSE("HAnimSegmentLineColorRGBA")

LineSet203.setColor(ColorRGBA205)

Shape202.setGeometry(LineSet203)

HAnimSegment198.addChildren(Shape202)

HAnimJoint197.addChildren(HAnimSegment198)
HAnimJoint206 = x3d.HAnimJoint()
HAnimJoint206.setName("l_tarsometatarsal_1")
HAnimJoint206.setDEF("hanim_l_tarsometatarsal_1")
HAnimJoint206.setCenter([2.8635,0.0194,2.4285])
HAnimSegment207 = x3d.HAnimSegment()
HAnimSegment207.setName("l_metatarsal_1")
HAnimSegment207.setDEF("hanim_l_metatarsal_1")
Transform208 = x3d.Transform()
Transform208.setTranslation([2.8635,0.0194,2.4285])
Transform209 = x3d.Transform()
#Empty Transform
Shape210 = x3d.Shape()
Shape210.setUSE("HAnimJointShape")

Transform209.addChild(Shape210)

Transform208.addChildren(Transform209)

HAnimSegment207.addChildren(Transform208)
Shape211 = x3d.Shape()
LineSet212 = x3d.LineSet()
LineSet212.setVertexCount([2])
Coordinate213 = x3d.Coordinate()
Coordinate213.setPoint([2.8635,0.0194,2.4285,2.7525,0.0077,4.6255])

LineSet212.setCoord(Coordinate213)
#from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
ColorRGBA214 = x3d.ColorRGBA()
ColorRGBA214.setUSE("HAnimSegmentLineColorRGBA")

LineSet212.setColor(ColorRGBA214)

Shape211.setGeometry(LineSet212)

HAnimSegment207.addChildren(Shape211)
HAnimSite215 = x3d.HAnimSite()
HAnimSite215.setName("l_metatarsal_phalanx_1_pt")
HAnimSite215.setDEF("hanim_l_metatarsal_phalanx_1_pt")
TouchSensor216 = x3d.TouchSensor()
TouchSensor216.setDescription("HAnimSite l_metatarsal_phalanx_1_pt")

HAnimSite215.addChildren(TouchSensor216)
Shape217 = x3d.Shape()
Shape217.setUSE("HAnimSiteShape")

HAnimSite215.addChildren(Shape217)

HAnimSegment207.addChildren(HAnimSite215)

HAnimJoint206.addChildren(HAnimSegment207)
HAnimJoint218 = x3d.HAnimJoint()
HAnimJoint218.setName("l_metatarsophalangeal_1")
HAnimJoint218.setDEF("hanim_l_metatarsophalangeal_1")
HAnimJoint218.setCenter([2.7525,0.0077,4.6255])
HAnimSegment219 = x3d.HAnimSegment()
HAnimSegment219.setName("l_tarsal_proximal_phalanx_1")
HAnimSegment219.setDEF("hanim_l_tarsal_proximal_phalanx_1")
Transform220 = x3d.Transform()
Transform220.setTranslation([2.7525,0.0077,4.6255])
Transform221 = x3d.Transform()
#Empty Transform
Shape222 = x3d.Shape()
Shape222.setUSE("HAnimJointShape")

Transform221.addChild(Shape222)

Transform220.addChildren(Transform221)

HAnimSegment219.addChildren(Transform220)
Shape223 = x3d.Shape()
LineSet224 = x3d.LineSet()
LineSet224.setVertexCount([2])
Coordinate225 = x3d.Coordinate()
Coordinate225.setPoint([2.7525,0.0077,4.6255,2.7525,0.0077,4.6255])

LineSet224.setCoord(Coordinate225)
#from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
ColorRGBA226 = x3d.ColorRGBA()
ColorRGBA226.setUSE("HAnimSegmentLineColorRGBA")

LineSet224.setColor(ColorRGBA226)

Shape223.setGeometry(LineSet224)

HAnimSegment219.addChildren(Shape223)
HAnimSite227 = x3d.HAnimSite()
HAnimSite227.setName("l_tarsal_distal_phalanx_1_tip")
HAnimSite227.setDEF("hanim_l_tarsal_distal_phalanx_1_tip")
TouchSensor228 = x3d.TouchSensor()
TouchSensor228.setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip")

HAnimSite227.addChildren(TouchSensor228)
Shape229 = x3d.Shape()
Shape229.setUSE("HAnimSiteShape")

HAnimSite227.addChildren(Shape229)

HAnimSegment219.addChildren(HAnimSite227)

HAnimJoint218.addChildren(HAnimSegment219)
HAnimJoint230 = x3d.HAnimJoint()
HAnimJoint230.setName("l_tarsal_interphalangeal_1")
HAnimJoint230.setDEF("hanim_l_tarsal_interphalangeal_1")

HAnimJoint218.addChildren(HAnimJoint230)

HAnimJoint206.addChildren(HAnimJoint218)

HAnimJoint197.addChildren(HAnimJoint206)

HAnimJoint180.addChildren(HAnimJoint197)
HAnimJoint231 = x3d.HAnimJoint()
HAnimJoint231.setName("l_cuneonavicular_2")
HAnimJoint231.setDEF("hanim_l_cuneonavicular_2")
HAnimJoint231.setCenter([3.6105,0.033,1.4168])
HAnimSegment232 = x3d.HAnimSegment()
HAnimSegment232.setName("l_cuneiform_2")
HAnimSegment232.setDEF("hanim_l_cuneiform_2")
Transform233 = x3d.Transform()
Transform233.setTranslation([3.6105,0.033,1.4168])
Transform234 = x3d.Transform()
#Empty Transform
Shape235 = x3d.Shape()
Shape235.setUSE("HAnimJointShape")

Transform234.addChild(Shape235)

Transform233.addChildren(Transform234)

HAnimSegment232.addChildren(Transform233)
Shape236 = x3d.Shape()
LineSet237 = x3d.LineSet()
LineSet237.setVertexCount([2])
Coordinate238 = x3d.Coordinate()
Coordinate238.setPoint([3.6105,0.033,1.4168,3.5555,0.0232,2.2895])

LineSet237.setCoord(Coordinate238)
#from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
ColorRGBA239 = x3d.ColorRGBA()
ColorRGBA239.setUSE("HAnimSegmentLineColorRGBA")

LineSet237.setColor(ColorRGBA239)

Shape236.setGeometry(LineSet237)

HAnimSegment232.addChildren(Shape236)

HAnimJoint231.addChildren(HAnimSegment232)
HAnimJoint240 = x3d.HAnimJoint()
HAnimJoint240.setName("l_tarsometatarsal_2")
HAnimJoint240.setDEF("hanim_l_tarsometatarsal_2")
HAnimJoint240.setCenter([3.5555,0.0232,2.2895])
HAnimSegment241 = x3d.HAnimSegment()
HAnimSegment241.setName("l_metatarsal_2")
HAnimSegment241.setDEF("hanim_l_metatarsal_2")
Transform242 = x3d.Transform()
Transform242.setTranslation([3.5555,0.0232,2.2895])
Transform243 = x3d.Transform()
#Empty Transform
Shape244 = x3d.Shape()
Shape244.setUSE("HAnimJointShape")

Transform243.addChild(Shape244)

Transform242.addChildren(Transform243)

HAnimSegment241.addChildren(Transform242)
Shape245 = x3d.Shape()
LineSet246 = x3d.LineSet()
LineSet246.setVertexCount([2])
Coordinate247 = x3d.Coordinate()
Coordinate247.setPoint([3.5555,0.0232,2.2895,3.6595,0.0085,4.8125])

LineSet246.setCoord(Coordinate247)
#from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA248 = x3d.ColorRGBA()
ColorRGBA248.setUSE("HAnimSegmentLineColorRGBA")

LineSet246.setColor(ColorRGBA248)

Shape245.setGeometry(LineSet246)

HAnimSegment241.addChildren(Shape245)

HAnimJoint240.addChildren(HAnimSegment241)
HAnimJoint249 = x3d.HAnimJoint()
HAnimJoint249.setName("l_metatarsophalangeal_2")
HAnimJoint249.setDEF("hanim_l_metatarsophalangeal_2")
HAnimJoint249.setCenter([3.6595,0.0085,4.8125])
HAnimSegment250 = x3d.HAnimSegment()
HAnimSegment250.setName("l_tarsal_proximal_phalanx_2")
HAnimSegment250.setDEF("hanim_l_tarsal_proximal_phalanx_2")
Transform251 = x3d.Transform()
Transform251.setTranslation([3.6595,0.0085,4.8125])
Transform252 = x3d.Transform()
#Empty Transform
Shape253 = x3d.Shape()
Shape253.setUSE("HAnimJointShape")

Transform252.addChild(Shape253)

Transform251.addChildren(Transform252)

HAnimSegment250.addChildren(Transform251)
Shape254 = x3d.Shape()
LineSet255 = x3d.LineSet()
LineSet255.setVertexCount([2])
Coordinate256 = x3d.Coordinate()
Coordinate256.setPoint([3.6595,0.0085,4.8125,3.7385,0.0054,5.5315])

LineSet255.setCoord(Coordinate256)
#from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA257 = x3d.ColorRGBA()
ColorRGBA257.setUSE("HAnimSegmentLineColorRGBA")

LineSet255.setColor(ColorRGBA257)

Shape254.setGeometry(LineSet255)

HAnimSegment250.addChildren(Shape254)

HAnimJoint249.addChildren(HAnimSegment250)
HAnimJoint258 = x3d.HAnimJoint()
HAnimJoint258.setName("l_tarsal_proximal_interphalangeal_2")
HAnimJoint258.setDEF("hanim_l_tarsal_proximal_interphalangeal_2")
HAnimJoint258.setCenter([3.7385,0.0054,5.5315])
HAnimSegment259 = x3d.HAnimSegment()
HAnimSegment259.setName("l_tarsal_middle_phalanx_2")
HAnimSegment259.setDEF("hanim_l_tarsal_middle_phalanx_2")
Transform260 = x3d.Transform()
Transform260.setTranslation([3.7385,0.0054,5.5315])
Transform261 = x3d.Transform()
#Empty Transform
Shape262 = x3d.Shape()
Shape262.setUSE("HAnimJointShape")

Transform261.addChild(Shape262)

Transform260.addChildren(Transform261)

HAnimSegment259.addChildren(Transform260)
Shape263 = x3d.Shape()
LineSet264 = x3d.LineSet()
LineSet264.setVertexCount([2])
Coordinate265 = x3d.Coordinate()
Coordinate265.setPoint([3.7385,0.0054,5.5315,3.7385,0.0017,5.9505])

LineSet264.setCoord(Coordinate265)
#from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA266 = x3d.ColorRGBA()
ColorRGBA266.setUSE("HAnimSegmentLineColorRGBA")

LineSet264.setColor(ColorRGBA266)

Shape263.setGeometry(LineSet264)

HAnimSegment259.addChildren(Shape263)
HAnimSite267 = x3d.HAnimSite()
HAnimSite267.setName("l_tarsal_distal_phalanx_2_tip")
HAnimSite267.setDEF("hanim_l_tarsal_distal_phalanx_2_tip")
HAnimSite267.setTranslation([0.1195,0.0079,0.1433])
TouchSensor268 = x3d.TouchSensor()
TouchSensor268.setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip")

HAnimSite267.addChildren(TouchSensor268)
Shape269 = x3d.Shape()
Shape269.setUSE("HAnimSiteShape")

HAnimSite267.addChildren(Shape269)

HAnimSegment259.addChildren(HAnimSite267)

HAnimJoint258.addChildren(HAnimSegment259)
HAnimJoint270 = x3d.HAnimJoint()
HAnimJoint270.setName("l_tarsal_distal_interphalangeal_2")
HAnimJoint270.setDEF("hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint270.setCenter([3.7385,0.0017,5.9505])

HAnimJoint258.addChildren(HAnimJoint270)

HAnimJoint249.addChildren(HAnimJoint258)

HAnimJoint240.addChildren(HAnimJoint249)

HAnimJoint231.addChildren(HAnimJoint240)

HAnimJoint180.addChildren(HAnimJoint231)
HAnimJoint271 = x3d.HAnimJoint()
HAnimJoint271.setName("l_cuneonavicular_3")
HAnimJoint271.setDEF("hanim_l_cuneonavicular_3")
HAnimJoint271.setCenter([4.1235,0.0328,1.3453])
HAnimSegment272 = x3d.HAnimSegment()
HAnimSegment272.setName("l_cuneiform_3")
HAnimSegment272.setDEF("hanim_l_cuneiform_3")
Transform273 = x3d.Transform()
Transform273.setTranslation([4.1235,0.0328,1.3453])
Transform274 = x3d.Transform()
#Empty Transform
Shape275 = x3d.Shape()
Shape275.setUSE("HAnimJointShape")

Transform274.addChild(Shape275)

Transform273.addChildren(Transform274)

HAnimSegment272.addChildren(Transform273)
Shape276 = x3d.Shape()
LineSet277 = x3d.LineSet()
LineSet277.setVertexCount([2])
Coordinate278 = x3d.Coordinate()
Coordinate278.setPoint([4.1235,0.0328,1.3453,3.7385,0.0017,5.9505])

LineSet277.setCoord(Coordinate278)
#from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
ColorRGBA279 = x3d.ColorRGBA()
ColorRGBA279.setUSE("HAnimSegmentLineColorRGBA")

LineSet277.setColor(ColorRGBA279)

Shape276.setGeometry(LineSet277)

HAnimSegment272.addChildren(Shape276)

HAnimJoint271.addChildren(HAnimSegment272)
HAnimJoint280 = x3d.HAnimJoint()
HAnimJoint280.setName("l_tarsometatarsal_3")
HAnimJoint280.setDEF("hanim_l_tarsometatarsal_3")
HAnimSegment281 = x3d.HAnimSegment()
HAnimSegment281.setName("l_metatarsal_3")
HAnimSegment281.setDEF("hanim_l_metatarsal_3")
Transform282 = x3d.Transform()
Transform282.setTranslation([4.1235,0.0328,1.3453])
Transform283 = x3d.Transform()
#Empty Transform
Shape284 = x3d.Shape()
Shape284.setUSE("HAnimJointShape")

Transform283.addChild(Shape284)

Transform282.addChildren(Transform283)

HAnimSegment281.addChildren(Transform282)
Shape285 = x3d.Shape()
LineSet286 = x3d.LineSet()
LineSet286.setVertexCount([2])
Coordinate287 = x3d.Coordinate()
Coordinate287.setPoint([4.2795,0.0086,4.7055])

LineSet286.setCoord(Coordinate287)
#from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 1
ColorRGBA288 = x3d.ColorRGBA()
ColorRGBA288.setUSE("HAnimSegmentLineColorRGBA")

LineSet286.setColor(ColorRGBA288)

Shape285.setGeometry(LineSet286)

HAnimSegment281.addChildren(Shape285)

HAnimJoint280.addChildren(HAnimSegment281)
HAnimJoint289 = x3d.HAnimJoint()
HAnimJoint289.setName("l_metatarsophalangeal_3")
HAnimJoint289.setDEF("hanim_l_metatarsophalangeal_3")
HAnimJoint289.setCenter([4.2795,0.0086,4.7055])
HAnimSegment290 = x3d.HAnimSegment()
HAnimSegment290.setName("l_tarsal_proximal_phalanx_3")
HAnimSegment290.setDEF("hanim_l_tarsal_proximal_phalanx_3")
Transform291 = x3d.Transform()
Transform291.setTranslation([4.2795,0.0086,4.7055])
Transform292 = x3d.Transform()
#Empty Transform
Shape293 = x3d.Shape()
Shape293.setUSE("HAnimJointShape")

Transform292.addChild(Shape293)

Transform291.addChildren(Transform292)

HAnimSegment290.addChildren(Transform291)
Shape294 = x3d.Shape()
LineSet295 = x3d.LineSet()
LineSet295.setVertexCount([2])
Coordinate296 = x3d.Coordinate()
Coordinate296.setPoint([4.2795,0.0086,4.7055,4.3855,0.0044,5.3745])

LineSet295.setCoord(Coordinate296)
#from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA297 = x3d.ColorRGBA()
ColorRGBA297.setUSE("HAnimSegmentLineColorRGBA")

LineSet295.setColor(ColorRGBA297)

Shape294.setGeometry(LineSet295)

HAnimSegment290.addChildren(Shape294)

HAnimJoint289.addChildren(HAnimSegment290)
HAnimJoint298 = x3d.HAnimJoint()
HAnimJoint298.setName("l_tarsal_proximal_interphalangeal_3")
HAnimJoint298.setDEF("hanim_l_tarsal_proximal_interphalangeal_3")
HAnimJoint298.setCenter([4.3855,0.0044,5.3745])
HAnimSegment299 = x3d.HAnimSegment()
HAnimSegment299.setName("l_tarsal_middle_phalanx_3")
HAnimSegment299.setDEF("hanim_l_tarsal_middle_phalanx_3")
Transform300 = x3d.Transform()
Transform300.setTranslation([4.3855,0.0044,5.3745])
Transform301 = x3d.Transform()
#Empty Transform
Shape302 = x3d.Shape()
Shape302.setUSE("HAnimJointShape")

Transform301.addChild(Shape302)

Transform300.addChildren(Transform301)

HAnimSegment299.addChildren(Transform300)
Shape303 = x3d.Shape()
LineSet304 = x3d.LineSet()
LineSet304.setVertexCount([2])
Coordinate305 = x3d.Coordinate()
Coordinate305.setPoint([4.3855,0.0044,5.3745,4.4545,0.0017,5.7845])

LineSet304.setCoord(Coordinate305)
#from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA306 = x3d.ColorRGBA()
ColorRGBA306.setUSE("HAnimSegmentLineColorRGBA")

LineSet304.setColor(ColorRGBA306)

Shape303.setGeometry(LineSet304)

HAnimSegment299.addChildren(Shape303)
HAnimSite307 = x3d.HAnimSite()
HAnimSite307.setName("l_tarsal_distal_phalanx_3_tip")
HAnimSite307.setDEF("hanim_l_tarsal_distal_phalanx_3_tip")
TouchSensor308 = x3d.TouchSensor()
TouchSensor308.setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip")

HAnimSite307.addChildren(TouchSensor308)
Shape309 = x3d.Shape()
Shape309.setUSE("HAnimSiteShape")

HAnimSite307.addChildren(Shape309)

HAnimSegment299.addChildren(HAnimSite307)

HAnimJoint298.addChildren(HAnimSegment299)
HAnimJoint310 = x3d.HAnimJoint()
HAnimJoint310.setName("l_tarsal_distal_interphalangeal_3")
HAnimJoint310.setDEF("hanim_l_tarsal_distal_interphalangeal_3")
HAnimJoint310.setCenter([4.4545,0.0017,5.7845])

HAnimJoint298.addChildren(HAnimJoint310)

HAnimJoint289.addChildren(HAnimJoint298)

HAnimJoint280.addChildren(HAnimJoint289)

HAnimJoint271.addChildren(HAnimJoint280)

HAnimJoint180.addChildren(HAnimJoint271)

HAnimJoint167.addChildren(HAnimJoint180)
HAnimJoint311 = x3d.HAnimJoint()
HAnimJoint311.setName("l_calcaneocuboid")
HAnimJoint311.setDEF("hanim_l_calcaneocuboid")
HAnimJoint311.setCenter([3.9515,0.0653,-0.6895])
HAnimSegment312 = x3d.HAnimSegment()
HAnimSegment312.setName("l_calcaneus")
HAnimSegment312.setDEF("hanim_l_calcaneus")
Transform313 = x3d.Transform()
Transform313.setTranslation([3.9515,0.0653,-0.6895])
Transform314 = x3d.Transform()
#Empty Transform
Shape315 = x3d.Shape()
Shape315.setUSE("HAnimJointShape")

Transform314.addChild(Shape315)

Transform313.addChildren(Transform314)

HAnimSegment312.addChildren(Transform313)
Shape316 = x3d.Shape()
LineSet317 = x3d.LineSet()
LineSet317.setVertexCount([2])
Coordinate318 = x3d.Coordinate()
Coordinate318.setPoint([3.9515,0.0653,-0.6895,4.9085,0.0353,0.5574])

LineSet317.setCoord(Coordinate318)
#from l_calcaneocuboid to l_transversetarsal vertices 2
ColorRGBA319 = x3d.ColorRGBA()
ColorRGBA319.setUSE("HAnimSegmentLineColorRGBA")

LineSet317.setColor(ColorRGBA319)

Shape316.setGeometry(LineSet317)

HAnimSegment312.addChildren(Shape316)

HAnimJoint311.addChildren(HAnimSegment312)
HAnimJoint320 = x3d.HAnimJoint()
HAnimJoint320.setName("l_transversetarsal")
HAnimJoint320.setDEF("hanim_l_transversetarsal")
HAnimJoint320.setCenter([4.9085,0.0353,0.5574])
HAnimSegment321 = x3d.HAnimSegment()
HAnimSegment321.setName("l_cuboid")
HAnimSegment321.setDEF("hanim_l_cuboid")
Transform322 = x3d.Transform()
Transform322.setTranslation([4.9085,0.0353,0.5574])
Transform323 = x3d.Transform()
#Empty Transform
Shape324 = x3d.Shape()
Shape324.setUSE("HAnimJointShape")

Transform323.addChild(Shape324)

Transform322.addChildren(Transform323)

HAnimSegment321.addChildren(Transform322)
Shape325 = x3d.Shape()
LineSet326 = x3d.LineSet()
LineSet326.setVertexCount([2])
Coordinate327 = x3d.Coordinate()
Coordinate327.setPoint([4.9085,0.0353,0.5574,4.7245,0.0211,2.1725])

LineSet326.setCoord(Coordinate327)
#from l_transversetarsal to l_tarsometatarsal_4 vertices 2
ColorRGBA328 = x3d.ColorRGBA()
ColorRGBA328.setUSE("HAnimSegmentLineColorRGBA")

LineSet326.setColor(ColorRGBA328)

Shape325.setGeometry(LineSet326)

HAnimSegment321.addChildren(Shape325)
Shape329 = x3d.Shape()
LineSet330 = x3d.LineSet()
LineSet330.setVertexCount([2])
Coordinate331 = x3d.Coordinate()
Coordinate331.setPoint([4.9085,0.0353,0.5574,5.3615,0.0164,2.0085])

LineSet330.setCoord(Coordinate331)
#from l_transversetarsal to l_tarsometatarsal_5 vertices 2
ColorRGBA332 = x3d.ColorRGBA()
ColorRGBA332.setUSE("HAnimSegmentLineColorRGBA")

LineSet330.setColor(ColorRGBA332)

Shape329.setGeometry(LineSet330)

HAnimSegment321.addChildren(Shape329)

HAnimJoint320.addChildren(HAnimSegment321)
HAnimJoint333 = x3d.HAnimJoint()
HAnimJoint333.setName("l_tarsometatarsal_4")
HAnimJoint333.setDEF("hanim_l_tarsometatarsal_4")
HAnimJoint333.setCenter([4.7245,0.0211,2.1725])
HAnimSegment334 = x3d.HAnimSegment()
HAnimSegment334.setName("l_metatarsal_4")
HAnimSegment334.setDEF("hanim_l_metatarsal_4")
Transform335 = x3d.Transform()
Transform335.setTranslation([4.7245,0.0211,2.1725])
Transform336 = x3d.Transform()
#Empty Transform
Shape337 = x3d.Shape()
Shape337.setUSE("HAnimJointShape")

Transform336.addChild(Shape337)

Transform335.addChildren(Transform336)

HAnimSegment334.addChildren(Transform335)
Shape338 = x3d.Shape()
LineSet339 = x3d.LineSet()
LineSet339.setVertexCount([2])
Coordinate340 = x3d.Coordinate()
Coordinate340.setPoint([4.7245,0.0211,2.1725,4.8745,0.0076,4.5165])

LineSet339.setCoord(Coordinate340)
#from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
ColorRGBA341 = x3d.ColorRGBA()
ColorRGBA341.setUSE("HAnimSegmentLineColorRGBA")

LineSet339.setColor(ColorRGBA341)

Shape338.setGeometry(LineSet339)

HAnimSegment334.addChildren(Shape338)

HAnimJoint333.addChildren(HAnimSegment334)
HAnimJoint342 = x3d.HAnimJoint()
HAnimJoint342.setName("l_metatarsophalangeal_4")
HAnimJoint342.setDEF("hanim_l_metatarsophalangeal_4")
HAnimJoint342.setCenter([4.8745,0.0076,4.5165])
HAnimSegment343 = x3d.HAnimSegment()
HAnimSegment343.setName("l_tarsal_proximal_phalanx_4")
HAnimSegment343.setDEF("hanim_l_tarsal_proximal_phalanx_4")
Transform344 = x3d.Transform()
Transform344.setTranslation([4.8745,0.0076,4.5165])
Transform345 = x3d.Transform()
#Empty Transform
Shape346 = x3d.Shape()
Shape346.setUSE("HAnimJointShape")

Transform345.addChild(Shape346)

Transform344.addChildren(Transform345)

HAnimSegment343.addChildren(Transform344)
Shape347 = x3d.Shape()
LineSet348 = x3d.LineSet()
LineSet348.setVertexCount([2])
Coordinate349 = x3d.Coordinate()
Coordinate349.setPoint([4.8745,0.0076,4.5165,5.0655,0.0049,5.1895])

LineSet348.setCoord(Coordinate349)
#from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA350 = x3d.ColorRGBA()
ColorRGBA350.setUSE("HAnimSegmentLineColorRGBA")

LineSet348.setColor(ColorRGBA350)

Shape347.setGeometry(LineSet348)

HAnimSegment343.addChildren(Shape347)

HAnimJoint342.addChildren(HAnimSegment343)
HAnimJoint351 = x3d.HAnimJoint()
HAnimJoint351.setName("l_tarsal_proximal_interphalangeal_4")
HAnimJoint351.setDEF("hanim_l_tarsal_proximal_interphalangeal_4")
HAnimJoint351.setCenter([5.0655,0.0049,5.1895])
HAnimSegment352 = x3d.HAnimSegment()
HAnimSegment352.setName("l_tarsal_middle_phalanx_4")
HAnimSegment352.setDEF("hanim_l_tarsal_middle_phalanx_4")
Transform353 = x3d.Transform()
Transform353.setTranslation([5.0655,0.0049,5.1895])
Transform354 = x3d.Transform()
#Empty Transform
Shape355 = x3d.Shape()
Shape355.setUSE("HAnimJointShape")

Transform354.addChild(Shape355)

Transform353.addChildren(Transform354)

HAnimSegment352.addChildren(Transform353)
Shape356 = x3d.Shape()
LineSet357 = x3d.LineSet()
LineSet357.setVertexCount([2])
Coordinate358 = x3d.Coordinate()
Coordinate358.setPoint([5.0655,0.0049,5.1895,5.1325,0.0011,5.5175])

LineSet357.setCoord(Coordinate358)
#from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA359 = x3d.ColorRGBA()
ColorRGBA359.setUSE("HAnimSegmentLineColorRGBA")

LineSet357.setColor(ColorRGBA359)

Shape356.setGeometry(LineSet357)

HAnimSegment352.addChildren(Shape356)
HAnimSite360 = x3d.HAnimSite()
HAnimSite360.setName("l_tarsal_distal_phalanx_4_tip")
HAnimSite360.setDEF("hanim_l_tarsal_distal_phalanx_4_tip")
TouchSensor361 = x3d.TouchSensor()
TouchSensor361.setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip")

HAnimSite360.addChildren(TouchSensor361)
Shape362 = x3d.Shape()
Shape362.setUSE("HAnimSiteShape")

HAnimSite360.addChildren(Shape362)

HAnimSegment352.addChildren(HAnimSite360)

HAnimJoint351.addChildren(HAnimSegment352)
HAnimJoint363 = x3d.HAnimJoint()
HAnimJoint363.setName("l_tarsal_distal_interphalangeal_4")
HAnimJoint363.setDEF("hanim_l_tarsal_distal_interphalangeal_4")
HAnimJoint363.setCenter([5.1325,0.0011,5.5175])

HAnimJoint351.addChildren(HAnimJoint363)

HAnimJoint342.addChildren(HAnimJoint351)

HAnimJoint333.addChildren(HAnimJoint342)

HAnimJoint320.addChildren(HAnimJoint333)
HAnimJoint364 = x3d.HAnimJoint()
HAnimJoint364.setName("l_tarsometatarsal_5")
HAnimJoint364.setDEF("hanim_l_tarsometatarsal_5")
HAnimJoint364.setCenter([5.3615,0.0164,2.0085])
HAnimSegment365 = x3d.HAnimSegment()
HAnimSegment365.setName("l_metatarsal_5")
HAnimSegment365.setDEF("hanim_l_metatarsal_5")
Transform366 = x3d.Transform()
Transform366.setTranslation([5.3615,0.0164,2.0085])
Transform367 = x3d.Transform()
#Empty Transform
Shape368 = x3d.Shape()
Shape368.setUSE("HAnimJointShape")

Transform367.addChild(Shape368)

Transform366.addChildren(Transform367)

HAnimSegment365.addChildren(Transform366)
Shape369 = x3d.Shape()
LineSet370 = x3d.LineSet()
LineSet370.setVertexCount([2])
Coordinate371 = x3d.Coordinate()
Coordinate371.setPoint([5.3615,0.0164,2.0085,5.5055,0.0067,4.3115])

LineSet370.setCoord(Coordinate371)
#from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
ColorRGBA372 = x3d.ColorRGBA()
ColorRGBA372.setUSE("HAnimSegmentLineColorRGBA")

LineSet370.setColor(ColorRGBA372)

Shape369.setGeometry(LineSet370)

HAnimSegment365.addChildren(Shape369)
HAnimSite373 = x3d.HAnimSite()
HAnimSite373.setName("l_metatarsal_phalanx_5_pt")
HAnimSite373.setDEF("hanim_l_metatarsal_phalanx_5_pt")
TouchSensor374 = x3d.TouchSensor()
TouchSensor374.setDescription("HAnimSite l_metatarsal_phalanx_5_pt")

HAnimSite373.addChildren(TouchSensor374)
Shape375 = x3d.Shape()
Shape375.setUSE("HAnimSiteShape")

HAnimSite373.addChildren(Shape375)

HAnimSegment365.addChildren(HAnimSite373)

HAnimJoint364.addChildren(HAnimSegment365)
HAnimJoint376 = x3d.HAnimJoint()
HAnimJoint376.setName("l_metatarsophalangeal_5")
HAnimJoint376.setDEF("hanim_l_metatarsophalangeal_5")
HAnimJoint376.setCenter([5.5055,0.0067,4.3115])
HAnimSegment377 = x3d.HAnimSegment()
HAnimSegment377.setName("l_tarsal_proximal_phalanx_5")
HAnimSegment377.setDEF("hanim_l_tarsal_proximal_phalanx_5")
Transform378 = x3d.Transform()
Transform378.setTranslation([5.5055,0.0067,4.3115])
Transform379 = x3d.Transform()
#Empty Transform
Shape380 = x3d.Shape()
Shape380.setUSE("HAnimJointShape")

Transform379.addChild(Shape380)

Transform378.addChildren(Transform379)

HAnimSegment377.addChildren(Transform378)
Shape381 = x3d.Shape()
LineSet382 = x3d.LineSet()
LineSet382.setVertexCount([2])
Coordinate383 = x3d.Coordinate()
Coordinate383.setPoint([5.5055,0.0067,4.3115,5.6085,0.003,4.6485])

LineSet382.setCoord(Coordinate383)
#from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA384 = x3d.ColorRGBA()
ColorRGBA384.setUSE("HAnimSegmentLineColorRGBA")

LineSet382.setColor(ColorRGBA384)

Shape381.setGeometry(LineSet382)

HAnimSegment377.addChildren(Shape381)

HAnimJoint376.addChildren(HAnimSegment377)
HAnimJoint385 = x3d.HAnimJoint()
HAnimJoint385.setName("l_tarsal_proximal_interphalangeal_5")
HAnimJoint385.setDEF("hanim_l_tarsal_proximal_interphalangeal_5")
HAnimJoint385.setCenter([5.6085,0.003,4.6485])
HAnimSegment386 = x3d.HAnimSegment()
HAnimSegment386.setName("l_tarsal_middle_phalanx_5")
HAnimSegment386.setDEF("hanim_l_tarsal_middle_phalanx_5")
Transform387 = x3d.Transform()
Transform387.setTranslation([5.6085,0.003,4.6485])
Transform388 = x3d.Transform()
#Empty Transform
Shape389 = x3d.Shape()
Shape389.setUSE("HAnimJointShape")

Transform388.addChild(Shape389)

Transform387.addChildren(Transform388)

HAnimSegment386.addChildren(Transform387)
Shape390 = x3d.Shape()
LineSet391 = x3d.LineSet()
LineSet391.setVertexCount([2])
Coordinate392 = x3d.Coordinate()
Coordinate392.setPoint([5.6085,0.003,4.6485,5.6485,0,4.9925])

LineSet391.setCoord(Coordinate392)
#from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA393 = x3d.ColorRGBA()
ColorRGBA393.setUSE("HAnimSegmentLineColorRGBA")

LineSet391.setColor(ColorRGBA393)

Shape390.setGeometry(LineSet391)

HAnimSegment386.addChildren(Shape390)
HAnimSite394 = x3d.HAnimSite()
HAnimSite394.setName("l_tarsal_distal_phalanx_5_tip")
HAnimSite394.setDEF("hanim_l_tarsal_distal_phalanx_5_tip")
TouchSensor395 = x3d.TouchSensor()
TouchSensor395.setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip")

HAnimSite394.addChildren(TouchSensor395)
Shape396 = x3d.Shape()
Shape396.setUSE("HAnimSiteShape")

HAnimSite394.addChildren(Shape396)

HAnimSegment386.addChildren(HAnimSite394)

HAnimJoint385.addChildren(HAnimSegment386)
HAnimJoint397 = x3d.HAnimJoint()
HAnimJoint397.setName("l_tarsal_distal_interphalangeal_5")
HAnimJoint397.setDEF("hanim_l_tarsal_distal_interphalangeal_5")
HAnimJoint397.setCenter([5.6485,0,4.9925])

HAnimJoint385.addChildren(HAnimJoint397)

HAnimJoint376.addChildren(HAnimJoint385)

HAnimJoint364.addChildren(HAnimJoint376)

HAnimJoint320.addChildren(HAnimJoint364)

HAnimJoint311.addChildren(HAnimJoint320)

HAnimJoint167.addChildren(HAnimJoint311)

HAnimJoint152.addChildren(HAnimJoint167)

HAnimJoint134.addChildren(HAnimJoint152)

HAnimJoint97.addChildren(HAnimJoint134)
HAnimJoint398 = x3d.HAnimJoint()
HAnimJoint398.setName("r_hip")
HAnimJoint398.setDEF("hanim_r_hip")
HAnimJoint398.setCenter([-0.095,0.9171,0.0029])
HAnimSegment399 = x3d.HAnimSegment()
HAnimSegment399.setName("r_thigh")
HAnimSegment399.setDEF("hanim_r_thigh")
Transform400 = x3d.Transform()
Transform400.setTranslation([-0.095,0.9171,0.0029])
Transform401 = x3d.Transform()
#Empty Transform
Shape402 = x3d.Shape()
Shape402.setUSE("HAnimJointShape")

Transform401.addChild(Shape402)

Transform400.addChildren(Transform401)

HAnimSegment399.addChildren(Transform400)
Shape403 = x3d.Shape()
LineSet404 = x3d.LineSet()
LineSet404.setVertexCount([2])
Coordinate405 = x3d.Coordinate()
Coordinate405.setPoint([-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318])

LineSet404.setCoord(Coordinate405)
#from r_hip to r_knee vertices 2
ColorRGBA406 = x3d.ColorRGBA()
ColorRGBA406.setUSE("HAnimSegmentLineColorRGBA")

LineSet404.setColor(ColorRGBA406)

Shape403.setGeometry(LineSet404)

HAnimSegment399.addChildren(Shape403)
HAnimSite407 = x3d.HAnimSite()
HAnimSite407.setName("r_lateral_malleolus_pt")
HAnimSite407.setDEF("hanim_r_lateral_malleolus_pt")
HAnimSite407.setTranslation([-0.1006,0.0658,-0.1075])
TouchSensor408 = x3d.TouchSensor()
TouchSensor408.setDescription("HAnimSite r_lateral_malleolus_pt")

HAnimSite407.addChildren(TouchSensor408)
Shape409 = x3d.Shape()
Shape409.setUSE("HAnimSiteShape")

HAnimSite407.addChildren(Shape409)

HAnimSegment399.addChildren(HAnimSite407)
HAnimSite410 = x3d.HAnimSite()
HAnimSite410.setName("r_medial_malleolus_pt")
HAnimSite410.setDEF("hanim_r_medial_malleolus_pt")
HAnimSite410.setTranslation([-0.0591,0.076,-0.0928])
TouchSensor411 = x3d.TouchSensor()
TouchSensor411.setDescription("HAnimSite r_medial_malleolus_pt")

HAnimSite410.addChildren(TouchSensor411)
Shape412 = x3d.Shape()
Shape412.setUSE("HAnimSiteShape")

HAnimSite410.addChildren(Shape412)

HAnimSegment399.addChildren(HAnimSite410)
HAnimSite413 = x3d.HAnimSite()
HAnimSite413.setName("r_tibiale_pt")
HAnimSite413.setDEF("hanim_r_tibiale_pt")
TouchSensor414 = x3d.TouchSensor()
TouchSensor414.setDescription("HAnimSite r_tibiale_pt")

HAnimSite413.addChildren(TouchSensor414)
Shape415 = x3d.Shape()
Shape415.setUSE("HAnimSiteShape")

HAnimSite413.addChildren(Shape415)

HAnimSegment399.addChildren(HAnimSite413)

HAnimJoint398.addChildren(HAnimSegment399)
HAnimJoint416 = x3d.HAnimJoint()
HAnimJoint416.setName("r_knee")
HAnimJoint416.setDEF("hanim_r_knee")
HAnimJoint416.setCenter([-0.0867,0.4913,0.0318])
HAnimSegment417 = x3d.HAnimSegment()
HAnimSegment417.setName("r_calf")
HAnimSegment417.setDEF("hanim_r_calf")
Transform418 = x3d.Transform()
Transform418.setTranslation([-0.0867,0.4913,0.0318])
Transform419 = x3d.Transform()
#Empty Transform
Shape420 = x3d.Shape()
Shape420.setUSE("HAnimJointShape")

Transform419.addChild(Shape420)

Transform418.addChildren(Transform419)

HAnimSegment417.addChildren(Transform418)
Shape421 = x3d.Shape()
LineSet422 = x3d.LineSet()
LineSet422.setVertexCount([2])
Coordinate423 = x3d.Coordinate()
Coordinate423.setPoint([-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766])

LineSet422.setCoord(Coordinate423)
#from r_knee to r_talocrural vertices 2
ColorRGBA424 = x3d.ColorRGBA()
ColorRGBA424.setUSE("HAnimSegmentLineColorRGBA")

LineSet422.setColor(ColorRGBA424)

Shape421.setGeometry(LineSet422)

HAnimSegment417.addChildren(Shape421)
HAnimSite425 = x3d.HAnimSite()
HAnimSite425.setName("r_calcaneus_posterior_pt")
HAnimSite425.setDEF("hanim_r_calcaneus_posterior_pt")
HAnimSite425.setTranslation([-0.0692,0.0297,-0.1221])
TouchSensor426 = x3d.TouchSensor()
TouchSensor426.setDescription("HAnimSite r_calcaneus_posterior_pt")

HAnimSite425.addChildren(TouchSensor426)
Shape427 = x3d.Shape()
Shape427.setUSE("HAnimSiteShape")

HAnimSite425.addChildren(Shape427)

HAnimSegment417.addChildren(HAnimSite425)
HAnimSite428 = x3d.HAnimSite()
HAnimSite428.setName("r_sphyrion_pt")
HAnimSite428.setDEF("hanim_r_sphyrion_pt")
HAnimSite428.setTranslation([-0.0603,0.061,-0.1002])
TouchSensor429 = x3d.TouchSensor()
TouchSensor429.setDescription("HAnimSite r_sphyrion_pt")

HAnimSite428.addChildren(TouchSensor429)
Shape430 = x3d.Shape()
Shape430.setUSE("HAnimSiteShape")

HAnimSite428.addChildren(Shape430)

HAnimSegment417.addChildren(HAnimSite428)

HAnimJoint416.addChildren(HAnimSegment417)
HAnimJoint431 = x3d.HAnimJoint()
HAnimJoint431.setName("r_talocrural")
HAnimJoint431.setDEF("hanim_r_talocrural")
HAnimJoint431.setCenter([-0.0801,0.0712,-0.0766])
HAnimSegment432 = x3d.HAnimSegment()
HAnimSegment432.setName("r_talus")
HAnimSegment432.setDEF("hanim_r_talus")
Transform433 = x3d.Transform()
Transform433.setScale([0.15,0.15,0.15])
Transform433.setTranslation([-0.05,0.06,-0.025])
Transform433.setRotation([1,0,0,-1.57])
#Transform right foot
Transform434 = x3d.Transform()
#Empty Transform right foot
Shape435 = x3d.Shape()
Shape435.setUSE("HAnimJointShape")

Transform434.addChild(Shape435)

Transform433.addChildren(Transform434)

HAnimSegment432.addChildren(Transform433)
Shape436 = x3d.Shape()
LineSet437 = x3d.LineSet()
LineSet437.setVertexCount([2])
Coordinate438 = x3d.Coordinate()
Coordinate438.setPoint([-0.0801,0.0712,-0.0766,-3.4725,0.0374,0.6807])

LineSet437.setCoord(Coordinate438)
#from r_talocrural to r_talocalcaneonavicular vertices 2
ColorRGBA439 = x3d.ColorRGBA()
ColorRGBA439.setUSE("HAnimSegmentLineColorRGBA")

LineSet437.setColor(ColorRGBA439)

Shape436.setGeometry(LineSet437)

HAnimSegment432.addChildren(Shape436)
Shape440 = x3d.Shape()
LineSet441 = x3d.LineSet()
LineSet441.setVertexCount([2])
Coordinate442 = x3d.Coordinate()
Coordinate442.setPoint([-0.0801,0.0712,-0.0766,-3.9515,0.0653,-0.6895])

LineSet441.setCoord(Coordinate442)
#from r_talocrural to r_calcaneocuboid vertices 2
ColorRGBA443 = x3d.ColorRGBA()
ColorRGBA443.setUSE("HAnimSegmentLineColorRGBA")

LineSet441.setColor(ColorRGBA443)

Shape440.setGeometry(LineSet441)

HAnimSegment432.addChildren(Shape440)

HAnimJoint431.addChildren(HAnimSegment432)
HAnimJoint444 = x3d.HAnimJoint()
HAnimJoint444.setName("r_talocalcaneonavicular")
HAnimJoint444.setDEF("hanim_r_talocalcaneonavicular")
HAnimJoint444.setCenter([-3.4725,0.0374,0.6807])
HAnimSegment445 = x3d.HAnimSegment()
HAnimSegment445.setName("r_navicular")
HAnimSegment445.setDEF("hanim_r_navicular")
Transform446 = x3d.Transform()
Transform446.setTranslation([-3.4725,0.0374,0.6807])
Transform447 = x3d.Transform()
#Empty Transform
Shape448 = x3d.Shape()
Shape448.setUSE("HAnimJointShape")

Transform447.addChild(Shape448)

Transform446.addChildren(Transform447)

HAnimSegment445.addChildren(Transform446)
Shape449 = x3d.Shape()
LineSet450 = x3d.LineSet()
LineSet450.setVertexCount([2])
Coordinate451 = x3d.Coordinate()
Coordinate451.setPoint([-3.4725,0.0374,0.6807,-2.9855,0.0311,1.2819])

LineSet450.setCoord(Coordinate451)
#from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
ColorRGBA452 = x3d.ColorRGBA()
ColorRGBA452.setUSE("HAnimSegmentLineColorRGBA")

LineSet450.setColor(ColorRGBA452)

Shape449.setGeometry(LineSet450)

HAnimSegment445.addChildren(Shape449)
Shape453 = x3d.Shape()
LineSet454 = x3d.LineSet()
LineSet454.setVertexCount([2])
Coordinate455 = x3d.Coordinate()
Coordinate455.setPoint([-3.4725,0.0374,0.6807,-3.6105,0.033,1.4168])

LineSet454.setCoord(Coordinate455)
#from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
ColorRGBA456 = x3d.ColorRGBA()
ColorRGBA456.setUSE("HAnimSegmentLineColorRGBA")

LineSet454.setColor(ColorRGBA456)

Shape453.setGeometry(LineSet454)

HAnimSegment445.addChildren(Shape453)
Shape457 = x3d.Shape()
LineSet458 = x3d.LineSet()
LineSet458.setVertexCount([2])
Coordinate459 = x3d.Coordinate()
Coordinate459.setPoint([-3.4725,0.0374,0.6807,-4.1245,0.0328,1.3453])

LineSet458.setCoord(Coordinate459)
#from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
ColorRGBA460 = x3d.ColorRGBA()
ColorRGBA460.setUSE("HAnimSegmentLineColorRGBA")

LineSet458.setColor(ColorRGBA460)

Shape457.setGeometry(LineSet458)

HAnimSegment445.addChildren(Shape457)

HAnimJoint444.addChildren(HAnimSegment445)
HAnimJoint461 = x3d.HAnimJoint()
HAnimJoint461.setName("r_cuneonavicular_1")
HAnimJoint461.setDEF("hanim_r_cuneonavicular_1")
HAnimJoint461.setCenter([-2.9855,0.0311,1.2819])
HAnimSegment462 = x3d.HAnimSegment()
HAnimSegment462.setName("r_cuneiform_1")
HAnimSegment462.setDEF("hanim_r_cuneiform_1")
Transform463 = x3d.Transform()
Transform463.setTranslation([-2.9855,0.0311,1.2819])
Transform464 = x3d.Transform()
#Empty Transform
Shape465 = x3d.Shape()
Shape465.setUSE("HAnimJointShape")

Transform464.addChild(Shape465)

Transform463.addChildren(Transform464)

HAnimSegment462.addChildren(Transform463)
Shape466 = x3d.Shape()
LineSet467 = x3d.LineSet()
LineSet467.setVertexCount([2])
Coordinate468 = x3d.Coordinate()
Coordinate468.setPoint([-2.9855,0.0311,1.2819,-2.8645,0.0194,2.4285])

LineSet467.setCoord(Coordinate468)
#from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
ColorRGBA469 = x3d.ColorRGBA()
ColorRGBA469.setUSE("HAnimSegmentLineColorRGBA")

LineSet467.setColor(ColorRGBA469)

Shape466.setGeometry(LineSet467)

HAnimSegment462.addChildren(Shape466)

HAnimJoint461.addChildren(HAnimSegment462)
HAnimJoint470 = x3d.HAnimJoint()
HAnimJoint470.setName("r_tarsometatarsal_1")
HAnimJoint470.setDEF("hanim_r_tarsometatarsal_1")
HAnimJoint470.setCenter([-2.8645,0.0194,2.4285])
HAnimSegment471 = x3d.HAnimSegment()
HAnimSegment471.setName("r_metatarsal_1")
HAnimSegment471.setDEF("hanim_r_metatarsal_1")
Transform472 = x3d.Transform()
Transform472.setTranslation([-2.8645,0.0194,2.4285])
Transform473 = x3d.Transform()
#Empty Transform
Shape474 = x3d.Shape()
Shape474.setUSE("HAnimJointShape")

Transform473.addChild(Shape474)

Transform472.addChildren(Transform473)

HAnimSegment471.addChildren(Transform472)
Shape475 = x3d.Shape()
LineSet476 = x3d.LineSet()
LineSet476.setVertexCount([2])
Coordinate477 = x3d.Coordinate()
Coordinate477.setPoint([-2.8645,0.0194,2.4285,-2.7535,0.0077,4.6255])

LineSet476.setCoord(Coordinate477)
#from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
ColorRGBA478 = x3d.ColorRGBA()
ColorRGBA478.setUSE("HAnimSegmentLineColorRGBA")

LineSet476.setColor(ColorRGBA478)

Shape475.setGeometry(LineSet476)

HAnimSegment471.addChildren(Shape475)
HAnimSite479 = x3d.HAnimSite()
HAnimSite479.setName("r_metatarsal_phalanx_1_pt")
HAnimSite479.setDEF("hanim_r_metatarsal_phalanx_1_pt")
TouchSensor480 = x3d.TouchSensor()
TouchSensor480.setDescription("HAnimSite r_metatarsal_phalanx_1_pt")

HAnimSite479.addChildren(TouchSensor480)
Shape481 = x3d.Shape()
Shape481.setUSE("HAnimSiteShape")

HAnimSite479.addChildren(Shape481)

HAnimSegment471.addChildren(HAnimSite479)

HAnimJoint470.addChildren(HAnimSegment471)
HAnimJoint482 = x3d.HAnimJoint()
HAnimJoint482.setName("r_metatarsophalangeal_1")
HAnimJoint482.setDEF("hanim_r_metatarsophalangeal_1")
HAnimJoint482.setCenter([-2.7535,0.0077,4.6255])
HAnimSegment483 = x3d.HAnimSegment()
HAnimSegment483.setName("r_tarsal_proximal_phalanx_1")
HAnimSegment483.setDEF("hanim_r_tarsal_proximal_phalanx_1")
Transform484 = x3d.Transform()
Transform484.setTranslation([-2.7535,0.0077,4.6255])
Transform485 = x3d.Transform()
#Empty Transform
Shape486 = x3d.Shape()
Shape486.setUSE("HAnimJointShape")

Transform485.addChild(Shape486)

Transform484.addChildren(Transform485)

HAnimSegment483.addChildren(Transform484)
Shape487 = x3d.Shape()
LineSet488 = x3d.LineSet()
LineSet488.setVertexCount([2])
Coordinate489 = x3d.Coordinate()
Coordinate489.setPoint([-2.7535,0.0077,4.6255,-2.7535,0.0077,4.6255])

LineSet488.setCoord(Coordinate489)
#from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
ColorRGBA490 = x3d.ColorRGBA()
ColorRGBA490.setUSE("HAnimSegmentLineColorRGBA")

LineSet488.setColor(ColorRGBA490)

Shape487.setGeometry(LineSet488)

HAnimSegment483.addChildren(Shape487)
HAnimSite491 = x3d.HAnimSite()
HAnimSite491.setName("r_tarsal_distal_phalanx_1_tip")
HAnimSite491.setDEF("hanim_r_tarsal_distal_phalanx_1_tip")
TouchSensor492 = x3d.TouchSensor()
TouchSensor492.setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip")

HAnimSite491.addChildren(TouchSensor492)
Shape493 = x3d.Shape()
Shape493.setUSE("HAnimSiteShape")

HAnimSite491.addChildren(Shape493)

HAnimSegment483.addChildren(HAnimSite491)

HAnimJoint482.addChildren(HAnimSegment483)
HAnimJoint494 = x3d.HAnimJoint()
HAnimJoint494.setName("r_tarsal_interphalangeal_1")
HAnimJoint494.setDEF("hanim_r_tarsal_interphalangeal_1")

HAnimJoint482.addChildren(HAnimJoint494)

HAnimJoint470.addChildren(HAnimJoint482)

HAnimJoint461.addChildren(HAnimJoint470)

HAnimJoint444.addChildren(HAnimJoint461)
HAnimJoint495 = x3d.HAnimJoint()
HAnimJoint495.setName("r_cuneonavicular_2")
HAnimJoint495.setDEF("hanim_r_cuneonavicular_2")
HAnimJoint495.setCenter([-3.6105,0.033,1.4168])
HAnimSegment496 = x3d.HAnimSegment()
HAnimSegment496.setName("r_cuneiform_2")
HAnimSegment496.setDEF("hanim_r_cuneiform_2")
Transform497 = x3d.Transform()
Transform497.setTranslation([-3.6105,0.033,1.4168])
Transform498 = x3d.Transform()
#Empty Transform
Shape499 = x3d.Shape()
Shape499.setUSE("HAnimJointShape")

Transform498.addChild(Shape499)

Transform497.addChildren(Transform498)

HAnimSegment496.addChildren(Transform497)
Shape500 = x3d.Shape()
LineSet501 = x3d.LineSet()
LineSet501.setVertexCount([2])
Coordinate502 = x3d.Coordinate()
Coordinate502.setPoint([-3.6105,0.033,1.4168,-3.5565,0.0232,2.2895])

LineSet501.setCoord(Coordinate502)
#from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
ColorRGBA503 = x3d.ColorRGBA()
ColorRGBA503.setUSE("HAnimSegmentLineColorRGBA")

LineSet501.setColor(ColorRGBA503)

Shape500.setGeometry(LineSet501)

HAnimSegment496.addChildren(Shape500)

HAnimJoint495.addChildren(HAnimSegment496)
HAnimJoint504 = x3d.HAnimJoint()
HAnimJoint504.setName("r_tarsometatarsal_2")
HAnimJoint504.setDEF("hanim_r_tarsometatarsal_2")
HAnimJoint504.setCenter([-3.5565,0.0232,2.2895])
HAnimSegment505 = x3d.HAnimSegment()
HAnimSegment505.setName("r_metatarsal_2")
HAnimSegment505.setDEF("hanim_r_metatarsal_2")
Transform506 = x3d.Transform()
Transform506.setTranslation([-3.5565,0.0232,2.2895])
Transform507 = x3d.Transform()
#Empty Transform
Shape508 = x3d.Shape()
Shape508.setUSE("HAnimJointShape")

Transform507.addChild(Shape508)

Transform506.addChildren(Transform507)

HAnimSegment505.addChildren(Transform506)
Shape509 = x3d.Shape()
LineSet510 = x3d.LineSet()
LineSet510.setVertexCount([2])
Coordinate511 = x3d.Coordinate()
Coordinate511.setPoint([-3.5565,0.0232,2.2895,-3.6595,0.0085,4.8125])

LineSet510.setCoord(Coordinate511)
#from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA512 = x3d.ColorRGBA()
ColorRGBA512.setUSE("HAnimSegmentLineColorRGBA")

LineSet510.setColor(ColorRGBA512)

Shape509.setGeometry(LineSet510)

HAnimSegment505.addChildren(Shape509)

HAnimJoint504.addChildren(HAnimSegment505)
HAnimJoint513 = x3d.HAnimJoint()
HAnimJoint513.setName("r_metatarsophalangeal_2")
HAnimJoint513.setDEF("hanim_r_metatarsophalangeal_2")
HAnimJoint513.setCenter([-3.6595,0.0085,4.8125])
HAnimSegment514 = x3d.HAnimSegment()
HAnimSegment514.setName("r_tarsal_proximal_phalanx_2")
HAnimSegment514.setDEF("hanim_r_tarsal_proximal_phalanx_2")
Transform515 = x3d.Transform()
Transform515.setTranslation([-3.6595,0.0085,4.8125])
Transform516 = x3d.Transform()
#Empty Transform
Shape517 = x3d.Shape()
Shape517.setUSE("HAnimJointShape")

Transform516.addChild(Shape517)

Transform515.addChildren(Transform516)

HAnimSegment514.addChildren(Transform515)
Shape518 = x3d.Shape()
LineSet519 = x3d.LineSet()
LineSet519.setVertexCount([2])
Coordinate520 = x3d.Coordinate()
Coordinate520.setPoint([-3.6595,0.0085,4.8125,-3.7385,0.0054,5.5315])

LineSet519.setCoord(Coordinate520)
#from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA521 = x3d.ColorRGBA()
ColorRGBA521.setUSE("HAnimSegmentLineColorRGBA")

LineSet519.setColor(ColorRGBA521)

Shape518.setGeometry(LineSet519)

HAnimSegment514.addChildren(Shape518)

HAnimJoint513.addChildren(HAnimSegment514)
HAnimJoint522 = x3d.HAnimJoint()
HAnimJoint522.setName("r_tarsal_proximal_interphalangeal_2")
HAnimJoint522.setDEF("hanim_r_tarsal_proximal_interphalangeal_2")
HAnimJoint522.setCenter([-3.7385,0.0054,5.5315])
HAnimSegment523 = x3d.HAnimSegment()
HAnimSegment523.setName("r_tarsal_middle_phalanx_2")
HAnimSegment523.setDEF("hanim_r_tarsal_middle_phalanx_2")
Transform524 = x3d.Transform()
Transform524.setTranslation([-3.7385,0.0054,5.5315])
Transform525 = x3d.Transform()
#Empty Transform
Shape526 = x3d.Shape()
Shape526.setUSE("HAnimJointShape")

Transform525.addChild(Shape526)

Transform524.addChildren(Transform525)

HAnimSegment523.addChildren(Transform524)
Shape527 = x3d.Shape()
LineSet528 = x3d.LineSet()
LineSet528.setVertexCount([2])
Coordinate529 = x3d.Coordinate()
Coordinate529.setPoint([-3.7385,0.0054,5.5315,-3.7385,0.0017,5.9505])

LineSet528.setCoord(Coordinate529)
#from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA530 = x3d.ColorRGBA()
ColorRGBA530.setUSE("HAnimSegmentLineColorRGBA")

LineSet528.setColor(ColorRGBA530)

Shape527.setGeometry(LineSet528)

HAnimSegment523.addChildren(Shape527)
HAnimSite531 = x3d.HAnimSite()
HAnimSite531.setName("r_tarsal_distal_phalanx_2_tip")
HAnimSite531.setDEF("hanim_r_tarsal_distal_phalanx_2_tip")
HAnimSite531.setTranslation([-0.0883,0.0134,0.1383])
TouchSensor532 = x3d.TouchSensor()
TouchSensor532.setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip")

HAnimSite531.addChildren(TouchSensor532)
Shape533 = x3d.Shape()
Shape533.setUSE("HAnimSiteShape")

HAnimSite531.addChildren(Shape533)

HAnimSegment523.addChildren(HAnimSite531)

HAnimJoint522.addChildren(HAnimSegment523)
HAnimJoint534 = x3d.HAnimJoint()
HAnimJoint534.setName("r_tarsal_distal_interphalangeal_2")
HAnimJoint534.setDEF("hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint534.setCenter([-3.7385,0.0017,5.9505])

HAnimJoint522.addChildren(HAnimJoint534)

HAnimJoint513.addChildren(HAnimJoint522)

HAnimJoint504.addChildren(HAnimJoint513)

HAnimJoint495.addChildren(HAnimJoint504)

HAnimJoint444.addChildren(HAnimJoint495)
HAnimJoint535 = x3d.HAnimJoint()
HAnimJoint535.setName("r_cuneonavicular_3")
HAnimJoint535.setDEF("hanim_r_cuneonavicular_3")
HAnimJoint535.setCenter([-4.1245,0.0328,1.3453])
HAnimSegment536 = x3d.HAnimSegment()
HAnimSegment536.setName("r_cuneiform_3")
HAnimSegment536.setDEF("hanim_r_cuneiform_3")
Transform537 = x3d.Transform()
Transform537.setTranslation([-4.1245,0.0328,1.3453])
Transform538 = x3d.Transform()
#Empty Transform
Shape539 = x3d.Shape()
Shape539.setUSE("HAnimJointShape")

Transform538.addChild(Shape539)

Transform537.addChildren(Transform538)

HAnimSegment536.addChildren(Transform537)
Shape540 = x3d.Shape()
LineSet541 = x3d.LineSet()
LineSet541.setVertexCount([2])
Coordinate542 = x3d.Coordinate()
Coordinate542.setPoint([-4.1245,0.0328,1.3453,-3.7385,0.0017,5.9505])

LineSet541.setCoord(Coordinate542)
#from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
ColorRGBA543 = x3d.ColorRGBA()
ColorRGBA543.setUSE("HAnimSegmentLineColorRGBA")

LineSet541.setColor(ColorRGBA543)

Shape540.setGeometry(LineSet541)

HAnimSegment536.addChildren(Shape540)

HAnimJoint535.addChildren(HAnimSegment536)
HAnimJoint544 = x3d.HAnimJoint()
HAnimJoint544.setName("r_tarsometatarsal_3")
HAnimJoint544.setDEF("hanim_r_tarsometatarsal_3")
HAnimSegment545 = x3d.HAnimSegment()
HAnimSegment545.setName("r_metatarsal_3")
HAnimSegment545.setDEF("hanim_r_metatarsal_3")
Transform546 = x3d.Transform()
Transform546.setTranslation([-4.1245,0.0328,1.3453])
Transform547 = x3d.Transform()
#Empty Transform
Shape548 = x3d.Shape()
Shape548.setUSE("HAnimJointShape")

Transform547.addChild(Shape548)

Transform546.addChildren(Transform547)

HAnimSegment545.addChildren(Transform546)
Shape549 = x3d.Shape()
LineSet550 = x3d.LineSet()
LineSet550.setVertexCount([2])
Coordinate551 = x3d.Coordinate()
Coordinate551.setPoint([-4.2795,0.0086,4.7055])

LineSet550.setCoord(Coordinate551)
#from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 1
ColorRGBA552 = x3d.ColorRGBA()
ColorRGBA552.setUSE("HAnimSegmentLineColorRGBA")

LineSet550.setColor(ColorRGBA552)

Shape549.setGeometry(LineSet550)

HAnimSegment545.addChildren(Shape549)

HAnimJoint544.addChildren(HAnimSegment545)
HAnimJoint553 = x3d.HAnimJoint()
HAnimJoint553.setName("r_metatarsophalangeal_3")
HAnimJoint553.setDEF("hanim_r_metatarsophalangeal_3")
HAnimJoint553.setCenter([-4.2795,0.0086,4.7055])
HAnimSegment554 = x3d.HAnimSegment()
HAnimSegment554.setName("r_tarsal_proximal_phalanx_3")
HAnimSegment554.setDEF("hanim_r_tarsal_proximal_phalanx_3")
Transform555 = x3d.Transform()
Transform555.setTranslation([-4.2795,0.0086,4.7055])
Transform556 = x3d.Transform()
#Empty Transform
Shape557 = x3d.Shape()
Shape557.setUSE("HAnimJointShape")

Transform556.addChild(Shape557)

Transform555.addChildren(Transform556)

HAnimSegment554.addChildren(Transform555)
Shape558 = x3d.Shape()
LineSet559 = x3d.LineSet()
LineSet559.setVertexCount([2])
Coordinate560 = x3d.Coordinate()
Coordinate560.setPoint([-4.2795,0.0086,4.7055,-4.3865,0.0044,5.3745])

LineSet559.setCoord(Coordinate560)
#from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA561 = x3d.ColorRGBA()
ColorRGBA561.setUSE("HAnimSegmentLineColorRGBA")

LineSet559.setColor(ColorRGBA561)

Shape558.setGeometry(LineSet559)

HAnimSegment554.addChildren(Shape558)

HAnimJoint553.addChildren(HAnimSegment554)
HAnimJoint562 = x3d.HAnimJoint()
HAnimJoint562.setName("r_tarsal_proximal_interphalangeal_3")
HAnimJoint562.setDEF("hanim_r_tarsal_proximal_interphalangeal_3")
HAnimJoint562.setCenter([-4.3865,0.0044,5.3745])
HAnimSegment563 = x3d.HAnimSegment()
HAnimSegment563.setName("r_tarsal_middle_phalanx_3")
HAnimSegment563.setDEF("hanim_r_tarsal_middle_phalanx_3")
Transform564 = x3d.Transform()
Transform564.setTranslation([-4.3865,0.0044,5.3745])
Transform565 = x3d.Transform()
#Empty Transform
Shape566 = x3d.Shape()
Shape566.setUSE("HAnimJointShape")

Transform565.addChild(Shape566)

Transform564.addChildren(Transform565)

HAnimSegment563.addChildren(Transform564)
Shape567 = x3d.Shape()
LineSet568 = x3d.LineSet()
LineSet568.setVertexCount([2])
Coordinate569 = x3d.Coordinate()
Coordinate569.setPoint([-4.3865,0.0044,5.3745,-4.4545,0.0017,5.7845])

LineSet568.setCoord(Coordinate569)
#from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA570 = x3d.ColorRGBA()
ColorRGBA570.setUSE("HAnimSegmentLineColorRGBA")

LineSet568.setColor(ColorRGBA570)

Shape567.setGeometry(LineSet568)

HAnimSegment563.addChildren(Shape567)
HAnimSite571 = x3d.HAnimSite()
HAnimSite571.setName("r_tarsal_distal_phalanx_3_tip")
HAnimSite571.setDEF("hanim_r_tarsal_distal_phalanx_3_tip")
TouchSensor572 = x3d.TouchSensor()
TouchSensor572.setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip")

HAnimSite571.addChildren(TouchSensor572)
Shape573 = x3d.Shape()
Shape573.setUSE("HAnimSiteShape")

HAnimSite571.addChildren(Shape573)

HAnimSegment563.addChildren(HAnimSite571)

HAnimJoint562.addChildren(HAnimSegment563)
HAnimJoint574 = x3d.HAnimJoint()
HAnimJoint574.setName("r_tarsal_distal_interphalangeal_3")
HAnimJoint574.setDEF("hanim_r_tarsal_distal_interphalangeal_3")
HAnimJoint574.setCenter([-4.4545,0.0017,5.7845])

HAnimJoint562.addChildren(HAnimJoint574)

HAnimJoint553.addChildren(HAnimJoint562)

HAnimJoint544.addChildren(HAnimJoint553)

HAnimJoint535.addChildren(HAnimJoint544)

HAnimJoint444.addChildren(HAnimJoint535)

HAnimJoint431.addChildren(HAnimJoint444)
HAnimJoint575 = x3d.HAnimJoint()
HAnimJoint575.setName("r_calcaneocuboid")
HAnimJoint575.setDEF("hanim_r_calcaneocuboid")
HAnimJoint575.setCenter([-3.9515,0.0653,-0.6895])
HAnimSegment576 = x3d.HAnimSegment()
HAnimSegment576.setName("r_calcaneus")
HAnimSegment576.setDEF("hanim_r_calcaneus")
Transform577 = x3d.Transform()
Transform577.setTranslation([-3.9515,0.0653,-0.6895])
Transform578 = x3d.Transform()
#Empty Transform
Shape579 = x3d.Shape()
Shape579.setUSE("HAnimJointShape")

Transform578.addChild(Shape579)

Transform577.addChildren(Transform578)

HAnimSegment576.addChildren(Transform577)
Shape580 = x3d.Shape()
LineSet581 = x3d.LineSet()
LineSet581.setVertexCount([2])
Coordinate582 = x3d.Coordinate()
Coordinate582.setPoint([-3.9515,0.0653,-0.6895,-4.9095,0.0353,0.5574])

LineSet581.setCoord(Coordinate582)
#from r_calcaneocuboid to r_transversetarsal vertices 2
ColorRGBA583 = x3d.ColorRGBA()
ColorRGBA583.setUSE("HAnimSegmentLineColorRGBA")

LineSet581.setColor(ColorRGBA583)

Shape580.setGeometry(LineSet581)

HAnimSegment576.addChildren(Shape580)

HAnimJoint575.addChildren(HAnimSegment576)
HAnimJoint584 = x3d.HAnimJoint()
HAnimJoint584.setName("r_transversetarsal")
HAnimJoint584.setDEF("hanim_r_transversetarsal")
HAnimJoint584.setCenter([-4.9095,0.0353,0.5574])
HAnimSegment585 = x3d.HAnimSegment()
HAnimSegment585.setName("r_cuboid")
HAnimSegment585.setDEF("hanim_r_cuboid")
Transform586 = x3d.Transform()
Transform586.setTranslation([-4.9095,0.0353,0.5574])
Transform587 = x3d.Transform()
#Empty Transform
Shape588 = x3d.Shape()
Shape588.setUSE("HAnimJointShape")

Transform587.addChild(Shape588)

Transform586.addChildren(Transform587)

HAnimSegment585.addChildren(Transform586)
Shape589 = x3d.Shape()
LineSet590 = x3d.LineSet()
LineSet590.setVertexCount([2])
Coordinate591 = x3d.Coordinate()
Coordinate591.setPoint([-4.9095,0.0353,0.5574,-4.7255,0.0211,2.1725])

LineSet590.setCoord(Coordinate591)
#from r_transversetarsal to r_tarsometatarsal_4 vertices 2
ColorRGBA592 = x3d.ColorRGBA()
ColorRGBA592.setUSE("HAnimSegmentLineColorRGBA")

LineSet590.setColor(ColorRGBA592)

Shape589.setGeometry(LineSet590)

HAnimSegment585.addChildren(Shape589)
Shape593 = x3d.Shape()
LineSet594 = x3d.LineSet()
LineSet594.setVertexCount([2])
Coordinate595 = x3d.Coordinate()
Coordinate595.setPoint([-4.9095,0.0353,0.5574,-5.3615,0.0164,2.0085])

LineSet594.setCoord(Coordinate595)
#from r_transversetarsal to r_tarsometatarsal_5 vertices 2
ColorRGBA596 = x3d.ColorRGBA()
ColorRGBA596.setUSE("HAnimSegmentLineColorRGBA")

LineSet594.setColor(ColorRGBA596)

Shape593.setGeometry(LineSet594)

HAnimSegment585.addChildren(Shape593)

HAnimJoint584.addChildren(HAnimSegment585)
HAnimJoint597 = x3d.HAnimJoint()
HAnimJoint597.setName("r_tarsometatarsal_4")
HAnimJoint597.setDEF("hanim_r_tarsometatarsal_4")
HAnimJoint597.setCenter([-4.7255,0.0211,2.1725])
HAnimSegment598 = x3d.HAnimSegment()
HAnimSegment598.setName("r_metatarsal_4")
HAnimSegment598.setDEF("hanim_r_metatarsal_4")
Transform599 = x3d.Transform()
Transform599.setTranslation([-4.7255,0.0211,2.1725])
Transform600 = x3d.Transform()
#Empty Transform
Shape601 = x3d.Shape()
Shape601.setUSE("HAnimJointShape")

Transform600.addChild(Shape601)

Transform599.addChildren(Transform600)

HAnimSegment598.addChildren(Transform599)
Shape602 = x3d.Shape()
LineSet603 = x3d.LineSet()
LineSet603.setVertexCount([2])
Coordinate604 = x3d.Coordinate()
Coordinate604.setPoint([-4.7255,0.0211,2.1725,-4.8755,0.0076,4.5165])

LineSet603.setCoord(Coordinate604)
#from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
ColorRGBA605 = x3d.ColorRGBA()
ColorRGBA605.setUSE("HAnimSegmentLineColorRGBA")

LineSet603.setColor(ColorRGBA605)

Shape602.setGeometry(LineSet603)

HAnimSegment598.addChildren(Shape602)

HAnimJoint597.addChildren(HAnimSegment598)
HAnimJoint606 = x3d.HAnimJoint()
HAnimJoint606.setName("r_metatarsophalangeal_4")
HAnimJoint606.setDEF("hanim_r_metatarsophalangeal_4")
HAnimJoint606.setCenter([-4.8755,0.0076,4.5165])
HAnimSegment607 = x3d.HAnimSegment()
HAnimSegment607.setName("r_tarsal_proximal_phalanx_4")
HAnimSegment607.setDEF("hanim_r_tarsal_proximal_phalanx_4")
Transform608 = x3d.Transform()
Transform608.setTranslation([-4.8755,0.0076,4.5165])
Transform609 = x3d.Transform()
#Empty Transform
Shape610 = x3d.Shape()
Shape610.setUSE("HAnimJointShape")

Transform609.addChild(Shape610)

Transform608.addChildren(Transform609)

HAnimSegment607.addChildren(Transform608)
Shape611 = x3d.Shape()
LineSet612 = x3d.LineSet()
LineSet612.setVertexCount([2])
Coordinate613 = x3d.Coordinate()
Coordinate613.setPoint([-4.8755,0.0076,4.5165,-5.0655,0.0049,5.1895])

LineSet612.setCoord(Coordinate613)
#from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA614 = x3d.ColorRGBA()
ColorRGBA614.setUSE("HAnimSegmentLineColorRGBA")

LineSet612.setColor(ColorRGBA614)

Shape611.setGeometry(LineSet612)

HAnimSegment607.addChildren(Shape611)

HAnimJoint606.addChildren(HAnimSegment607)
HAnimJoint615 = x3d.HAnimJoint()
HAnimJoint615.setName("r_tarsal_proximal_interphalangeal_4")
HAnimJoint615.setDEF("hanim_r_tarsal_proximal_interphalangeal_4")
HAnimJoint615.setCenter([-5.0655,0.0049,5.1895])
HAnimSegment616 = x3d.HAnimSegment()
HAnimSegment616.setName("r_tarsal_middle_phalanx_4")
HAnimSegment616.setDEF("hanim_r_tarsal_middle_phalanx_4")
Transform617 = x3d.Transform()
Transform617.setTranslation([-5.0655,0.0049,5.1895])
Transform618 = x3d.Transform()
#Empty Transform
Shape619 = x3d.Shape()
Shape619.setUSE("HAnimJointShape")

Transform618.addChild(Shape619)

Transform617.addChildren(Transform618)

HAnimSegment616.addChildren(Transform617)
Shape620 = x3d.Shape()
LineSet621 = x3d.LineSet()
LineSet621.setVertexCount([2])
Coordinate622 = x3d.Coordinate()
Coordinate622.setPoint([-5.0655,0.0049,5.1895,-5.1335,0.0011,5.5175])

LineSet621.setCoord(Coordinate622)
#from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA623 = x3d.ColorRGBA()
ColorRGBA623.setUSE("HAnimSegmentLineColorRGBA")

LineSet621.setColor(ColorRGBA623)

Shape620.setGeometry(LineSet621)

HAnimSegment616.addChildren(Shape620)
HAnimSite624 = x3d.HAnimSite()
HAnimSite624.setName("r_tarsal_distal_phalanx_4_tip")
HAnimSite624.setDEF("hanim_r_tarsal_distal_phalanx_4_tip")
TouchSensor625 = x3d.TouchSensor()
TouchSensor625.setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip")

HAnimSite624.addChildren(TouchSensor625)
Shape626 = x3d.Shape()
Shape626.setUSE("HAnimSiteShape")

HAnimSite624.addChildren(Shape626)

HAnimSegment616.addChildren(HAnimSite624)

HAnimJoint615.addChildren(HAnimSegment616)
HAnimJoint627 = x3d.HAnimJoint()
HAnimJoint627.setName("r_tarsal_distal_interphalangeal_4")
HAnimJoint627.setDEF("hanim_r_tarsal_distal_interphalangeal_4")
HAnimJoint627.setCenter([-5.1335,0.0011,5.5175])

HAnimJoint615.addChildren(HAnimJoint627)

HAnimJoint606.addChildren(HAnimJoint615)

HAnimJoint597.addChildren(HAnimJoint606)

HAnimJoint584.addChildren(HAnimJoint597)
HAnimJoint628 = x3d.HAnimJoint()
HAnimJoint628.setName("r_tarsometatarsal_5")
HAnimJoint628.setDEF("hanim_r_tarsometatarsal_5")
HAnimJoint628.setCenter([-5.3615,0.0164,2.0085])
HAnimSegment629 = x3d.HAnimSegment()
HAnimSegment629.setName("r_metatarsal_5")
HAnimSegment629.setDEF("hanim_r_metatarsal_5")
Transform630 = x3d.Transform()
Transform630.setTranslation([-5.3615,0.0164,2.0085])
Transform631 = x3d.Transform()
#Empty Transform
Shape632 = x3d.Shape()
Shape632.setUSE("HAnimJointShape")

Transform631.addChild(Shape632)

Transform630.addChildren(Transform631)

HAnimSegment629.addChildren(Transform630)
Shape633 = x3d.Shape()
LineSet634 = x3d.LineSet()
LineSet634.setVertexCount([2])
Coordinate635 = x3d.Coordinate()
Coordinate635.setPoint([-5.3615,0.0164,2.0085,-5.5055,0.0067,4.3115])

LineSet634.setCoord(Coordinate635)
#from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
ColorRGBA636 = x3d.ColorRGBA()
ColorRGBA636.setUSE("HAnimSegmentLineColorRGBA")

LineSet634.setColor(ColorRGBA636)

Shape633.setGeometry(LineSet634)

HAnimSegment629.addChildren(Shape633)
HAnimSite637 = x3d.HAnimSite()
HAnimSite637.setName("r_metatarsal_phalanx_5_pt")
HAnimSite637.setDEF("hanim_r_metatarsal_phalanx_5_pt")
TouchSensor638 = x3d.TouchSensor()
TouchSensor638.setDescription("HAnimSite r_metatarsal_phalanx_5_pt")

HAnimSite637.addChildren(TouchSensor638)
Shape639 = x3d.Shape()
Shape639.setUSE("HAnimSiteShape")

HAnimSite637.addChildren(Shape639)

HAnimSegment629.addChildren(HAnimSite637)

HAnimJoint628.addChildren(HAnimSegment629)
HAnimJoint640 = x3d.HAnimJoint()
HAnimJoint640.setName("r_metatarsophalangeal_5")
HAnimJoint640.setDEF("hanim_r_metatarsophalangeal_5")
HAnimJoint640.setCenter([-5.5055,0.0067,4.3115])
HAnimSegment641 = x3d.HAnimSegment()
HAnimSegment641.setName("r_tarsal_proximal_phalanx_5")
HAnimSegment641.setDEF("hanim_r_tarsal_proximal_phalanx_5")
Transform642 = x3d.Transform()
Transform642.setTranslation([-5.5055,0.0067,4.3115])
Transform643 = x3d.Transform()
#Empty Transform
Shape644 = x3d.Shape()
Shape644.setUSE("HAnimJointShape")

Transform643.addChild(Shape644)

Transform642.addChildren(Transform643)

HAnimSegment641.addChildren(Transform642)
Shape645 = x3d.Shape()
LineSet646 = x3d.LineSet()
LineSet646.setVertexCount([2])
Coordinate647 = x3d.Coordinate()
Coordinate647.setPoint([-5.5055,0.0067,4.3115,-5.6085,0.003,4.6485])

LineSet646.setCoord(Coordinate647)
#from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA648 = x3d.ColorRGBA()
ColorRGBA648.setUSE("HAnimSegmentLineColorRGBA")

LineSet646.setColor(ColorRGBA648)

Shape645.setGeometry(LineSet646)

HAnimSegment641.addChildren(Shape645)

HAnimJoint640.addChildren(HAnimSegment641)
HAnimJoint649 = x3d.HAnimJoint()
HAnimJoint649.setName("r_tarsal_proximal_interphalangeal_5")
HAnimJoint649.setDEF("hanim_r_tarsal_proximal_interphalangeal_5")
HAnimJoint649.setCenter([-5.6085,0.003,4.6485])
HAnimSegment650 = x3d.HAnimSegment()
HAnimSegment650.setName("r_tarsal_middle_phalanx_5")
HAnimSegment650.setDEF("hanim_r_tarsal_middle_phalanx_5")
Transform651 = x3d.Transform()
Transform651.setTranslation([-5.6085,0.003,4.6485])
Transform652 = x3d.Transform()
#Empty Transform
Shape653 = x3d.Shape()
Shape653.setUSE("HAnimJointShape")

Transform652.addChild(Shape653)

Transform651.addChildren(Transform652)

HAnimSegment650.addChildren(Transform651)
Shape654 = x3d.Shape()
LineSet655 = x3d.LineSet()
LineSet655.setVertexCount([2])
Coordinate656 = x3d.Coordinate()
Coordinate656.setPoint([-5.6085,0.003,4.6485,-5.6495,0,4.9925])

LineSet655.setCoord(Coordinate656)
#from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA657 = x3d.ColorRGBA()
ColorRGBA657.setUSE("HAnimSegmentLineColorRGBA")

LineSet655.setColor(ColorRGBA657)

Shape654.setGeometry(LineSet655)

HAnimSegment650.addChildren(Shape654)
HAnimSite658 = x3d.HAnimSite()
HAnimSite658.setName("r_tarsal_distal_phalanx_5_tip")
HAnimSite658.setDEF("hanim_r_tarsal_distal_phalanx_5_tip")
TouchSensor659 = x3d.TouchSensor()
TouchSensor659.setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip")

HAnimSite658.addChildren(TouchSensor659)
Shape660 = x3d.Shape()
Shape660.setUSE("HAnimSiteShape")

HAnimSite658.addChildren(Shape660)

HAnimSegment650.addChildren(HAnimSite658)

HAnimJoint649.addChildren(HAnimSegment650)
HAnimJoint661 = x3d.HAnimJoint()
HAnimJoint661.setName("r_tarsal_distal_interphalangeal_5")
HAnimJoint661.setDEF("hanim_r_tarsal_distal_interphalangeal_5")
HAnimJoint661.setCenter([-5.6495,0,4.9925])

HAnimJoint649.addChildren(HAnimJoint661)

HAnimJoint640.addChildren(HAnimJoint649)

HAnimJoint628.addChildren(HAnimJoint640)

HAnimJoint584.addChildren(HAnimJoint628)

HAnimJoint575.addChildren(HAnimJoint584)

HAnimJoint431.addChildren(HAnimJoint575)

HAnimJoint416.addChildren(HAnimJoint431)

HAnimJoint398.addChildren(HAnimJoint416)

HAnimJoint97.addChildren(HAnimJoint398)

HAnimJoint45.addChildren(HAnimJoint97)
HAnimJoint662 = x3d.HAnimJoint()
HAnimJoint662.setName("vl5")
HAnimJoint662.setDEF("hanim_vl5")
HAnimJoint662.setCenter([0.0028,1.0568,-0.0776])
HAnimSegment663 = x3d.HAnimSegment()
HAnimSegment663.setName("l5")
HAnimSegment663.setDEF("hanim_l5")
Transform664 = x3d.Transform()
Transform664.setTranslation([0.0028,1.0568,-0.0776])
Transform665 = x3d.Transform()
#Empty Transform
Shape666 = x3d.Shape()
Shape666.setUSE("HAnimJointShape")

Transform665.addChild(Shape666)

Transform664.addChildren(Transform665)

HAnimSegment663.addChildren(Transform664)
Shape667 = x3d.Shape()
LineSet668 = x3d.LineSet()
LineSet668.setVertexCount([2])
Coordinate669 = x3d.Coordinate()
Coordinate669.setPoint([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787])

LineSet668.setCoord(Coordinate669)
#from vl5 to vl4 vertices 2
ColorRGBA670 = x3d.ColorRGBA()
ColorRGBA670.setUSE("HAnimSegmentLineColorRGBA")

LineSet668.setColor(ColorRGBA670)

Shape667.setGeometry(LineSet668)

HAnimSegment663.addChildren(Shape667)

HAnimJoint662.addChildren(HAnimSegment663)
HAnimJoint671 = x3d.HAnimJoint()
HAnimJoint671.setName("vl4")
HAnimJoint671.setDEF("hanim_vl4")
HAnimJoint671.setCenter([0.0035,1.0925,-0.0787])
HAnimSegment672 = x3d.HAnimSegment()
HAnimSegment672.setName("l4")
HAnimSegment672.setDEF("hanim_l4")
Transform673 = x3d.Transform()
Transform673.setTranslation([0.0035,1.0925,-0.0787])
Transform674 = x3d.Transform()
#Empty Transform
Shape675 = x3d.Shape()
Shape675.setUSE("HAnimJointShape")

Transform674.addChild(Shape675)

Transform673.addChildren(Transform674)

HAnimSegment672.addChildren(Transform673)
Shape676 = x3d.Shape()
LineSet677 = x3d.LineSet()
LineSet677.setVertexCount([2])
Coordinate678 = x3d.Coordinate()
Coordinate678.setPoint([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796])

LineSet677.setCoord(Coordinate678)
#from vl4 to vl3 vertices 2
ColorRGBA679 = x3d.ColorRGBA()
ColorRGBA679.setUSE("HAnimSegmentLineColorRGBA")

LineSet677.setColor(ColorRGBA679)

Shape676.setGeometry(LineSet677)

HAnimSegment672.addChildren(Shape676)

HAnimJoint671.addChildren(HAnimSegment672)
HAnimJoint680 = x3d.HAnimJoint()
HAnimJoint680.setName("vl3")
HAnimJoint680.setDEF("hanim_vl3")
HAnimJoint680.setCenter([0.0041,1.1276,-0.0796])
HAnimSegment681 = x3d.HAnimSegment()
HAnimSegment681.setName("l3")
HAnimSegment681.setDEF("hanim_l3")
Transform682 = x3d.Transform()
Transform682.setTranslation([0.0041,1.1276,-0.0796])
Transform683 = x3d.Transform()
#Empty Transform
Shape684 = x3d.Shape()
Shape684.setUSE("HAnimJointShape")

Transform683.addChild(Shape684)

Transform682.addChildren(Transform683)

HAnimSegment681.addChildren(Transform682)
Shape685 = x3d.Shape()
LineSet686 = x3d.LineSet()
LineSet686.setVertexCount([2])
Coordinate687 = x3d.Coordinate()
Coordinate687.setPoint([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08])

LineSet686.setCoord(Coordinate687)
#from vl3 to vl2 vertices 2
ColorRGBA688 = x3d.ColorRGBA()
ColorRGBA688.setUSE("HAnimSegmentLineColorRGBA")

LineSet686.setColor(ColorRGBA688)

Shape685.setGeometry(LineSet686)

HAnimSegment681.addChildren(Shape685)
HAnimSite689 = x3d.HAnimSite()
HAnimSite689.setName("l_rib10_pt")
HAnimSite689.setDEF("hanim_l_rib10_pt")
HAnimSite689.setTranslation([0.0871,1.1925,0.0992])
TouchSensor690 = x3d.TouchSensor()
TouchSensor690.setDescription("HAnimSite l_rib10_pt")

HAnimSite689.addChildren(TouchSensor690)
Shape691 = x3d.Shape()
Shape691.setUSE("HAnimSiteShape")

HAnimSite689.addChildren(Shape691)

HAnimSegment681.addChildren(HAnimSite689)
HAnimSite692 = x3d.HAnimSite()
HAnimSite692.setName("r_rib10_pt")
HAnimSite692.setDEF("hanim_r_rib10_pt")
HAnimSite692.setTranslation([-0.0711,1.1941,0.1016])
TouchSensor693 = x3d.TouchSensor()
TouchSensor693.setDescription("HAnimSite r_rib10_pt")

HAnimSite692.addChildren(TouchSensor693)
Shape694 = x3d.Shape()
Shape694.setUSE("HAnimSiteShape")

HAnimSite692.addChildren(Shape694)

HAnimSegment681.addChildren(HAnimSite692)
HAnimSite695 = x3d.HAnimSite()
HAnimSite695.setName("spine_2_middle_back_pt")
HAnimSite695.setDEF("hanim_spine_2_middle_back_pt")
TouchSensor696 = x3d.TouchSensor()
TouchSensor696.setDescription("HAnimSite spine_2_middle_back_pt")

HAnimSite695.addChildren(TouchSensor696)
Shape697 = x3d.Shape()
Shape697.setUSE("HAnimSiteShape")

HAnimSite695.addChildren(Shape697)

HAnimSegment681.addChildren(HAnimSite695)

HAnimJoint680.addChildren(HAnimSegment681)
HAnimJoint698 = x3d.HAnimJoint()
HAnimJoint698.setName("vl2")
HAnimJoint698.setDEF("hanim_vl2")
HAnimJoint698.setCenter([0.0045,1.1546,-0.08])
HAnimSegment699 = x3d.HAnimSegment()
HAnimSegment699.setName("l2")
HAnimSegment699.setDEF("hanim_l2")
Transform700 = x3d.Transform()
Transform700.setTranslation([0.0045,1.1546,-0.08])
Transform701 = x3d.Transform()
#Empty Transform
Shape702 = x3d.Shape()
Shape702.setUSE("HAnimJointShape")

Transform701.addChild(Shape702)

Transform700.addChildren(Transform701)

HAnimSegment699.addChildren(Transform700)
Shape703 = x3d.Shape()
LineSet704 = x3d.LineSet()
LineSet704.setVertexCount([2])
Coordinate705 = x3d.Coordinate()
Coordinate705.setPoint([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805])

LineSet704.setCoord(Coordinate705)
#from vl2 to vl1 vertices 2
ColorRGBA706 = x3d.ColorRGBA()
ColorRGBA706.setUSE("HAnimSegmentLineColorRGBA")

LineSet704.setColor(ColorRGBA706)

Shape703.setGeometry(LineSet704)

HAnimSegment699.addChildren(Shape703)

HAnimJoint698.addChildren(HAnimSegment699)
HAnimJoint707 = x3d.HAnimJoint()
HAnimJoint707.setName("vl1")
HAnimJoint707.setDEF("hanim_vl1")
HAnimJoint707.setCenter([0.0048,1.1912,-0.0805])
HAnimSegment708 = x3d.HAnimSegment()
HAnimSegment708.setName("l1")
HAnimSegment708.setDEF("hanim_l1")
Transform709 = x3d.Transform()
Transform709.setTranslation([0.0048,1.1912,-0.0805])
Transform710 = x3d.Transform()
#Empty Transform
Shape711 = x3d.Shape()
Shape711.setUSE("HAnimJointShape")

Transform710.addChild(Shape711)

Transform709.addChildren(Transform710)

HAnimSegment708.addChildren(Transform709)
Shape712 = x3d.Shape()
LineSet713 = x3d.LineSet()
LineSet713.setVertexCount([2])
Coordinate714 = x3d.Coordinate()
Coordinate714.setPoint([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808])

LineSet713.setCoord(Coordinate714)
#from vl1 to vt12 vertices 2
ColorRGBA715 = x3d.ColorRGBA()
ColorRGBA715.setUSE("HAnimSegmentLineColorRGBA")

LineSet713.setColor(ColorRGBA715)

Shape712.setGeometry(LineSet713)

HAnimSegment708.addChildren(Shape712)

HAnimJoint707.addChildren(HAnimSegment708)
HAnimJoint716 = x3d.HAnimJoint()
HAnimJoint716.setName("vt12")
HAnimJoint716.setDEF("hanim_vt12")
HAnimJoint716.setCenter([0.0051,1.2278,-0.0808])
HAnimSegment717 = x3d.HAnimSegment()
HAnimSegment717.setName("t12")
HAnimSegment717.setDEF("hanim_t12")
Transform718 = x3d.Transform()
Transform718.setTranslation([0.0051,1.2278,-0.0808])
Transform719 = x3d.Transform()
#Empty Transform
Shape720 = x3d.Shape()
Shape720.setUSE("HAnimJointShape")

Transform719.addChild(Shape720)

Transform718.addChildren(Transform719)

HAnimSegment717.addChildren(Transform718)
Shape721 = x3d.Shape()
LineSet722 = x3d.LineSet()
LineSet722.setVertexCount([2])
Coordinate723 = x3d.Coordinate()
Coordinate723.setPoint([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081])

LineSet722.setCoord(Coordinate723)
#from vt12 to vt11 vertices 2
ColorRGBA724 = x3d.ColorRGBA()
ColorRGBA724.setUSE("HAnimSegmentLineColorRGBA")

LineSet722.setColor(ColorRGBA724)

Shape721.setGeometry(LineSet722)

HAnimSegment717.addChildren(Shape721)

HAnimJoint716.addChildren(HAnimSegment717)
HAnimJoint725 = x3d.HAnimJoint()
HAnimJoint725.setName("vt11")
HAnimJoint725.setDEF("hanim_vt11")
HAnimJoint725.setCenter([0.0053,1.2679,-0.081])
HAnimSegment726 = x3d.HAnimSegment()
HAnimSegment726.setName("t11")
HAnimSegment726.setDEF("hanim_t11")
Transform727 = x3d.Transform()
Transform727.setTranslation([0.0053,1.2679,-0.081])
Transform728 = x3d.Transform()
#Empty Transform
Shape729 = x3d.Shape()
Shape729.setUSE("HAnimJointShape")

Transform728.addChild(Shape729)

Transform727.addChildren(Transform728)

HAnimSegment726.addChildren(Transform727)
Shape730 = x3d.Shape()
LineSet731 = x3d.LineSet()
LineSet731.setVertexCount([2])
Coordinate732 = x3d.Coordinate()
Coordinate732.setPoint([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822])

LineSet731.setCoord(Coordinate732)
#from vt11 to vt10 vertices 2
ColorRGBA733 = x3d.ColorRGBA()
ColorRGBA733.setUSE("HAnimSegmentLineColorRGBA")

LineSet731.setColor(ColorRGBA733)

Shape730.setGeometry(LineSet731)

HAnimSegment726.addChildren(Shape730)
HAnimSite734 = x3d.HAnimSite()
HAnimSite734.setName("substernale_pt")
HAnimSite734.setDEF("hanim_substernale_pt")
HAnimSite734.setTranslation([0.0085,1.2995,0.1147])
TouchSensor735 = x3d.TouchSensor()
TouchSensor735.setDescription("HAnimSite substernale_pt")

HAnimSite734.addChildren(TouchSensor735)
Shape736 = x3d.Shape()
Shape736.setUSE("HAnimSiteShape")

HAnimSite734.addChildren(Shape736)

HAnimSegment726.addChildren(HAnimSite734)

HAnimJoint725.addChildren(HAnimSegment726)
HAnimJoint737 = x3d.HAnimJoint()
HAnimJoint737.setName("vt10")
HAnimJoint737.setDEF("hanim_vt10")
HAnimJoint737.setCenter([0.0056,1.2848,-0.0822])
HAnimSegment738 = x3d.HAnimSegment()
HAnimSegment738.setName("t10")
HAnimSegment738.setDEF("hanim_t10")
Transform739 = x3d.Transform()
Transform739.setTranslation([0.0056,1.2848,-0.0822])
Transform740 = x3d.Transform()
#Empty Transform
Shape741 = x3d.Shape()
Shape741.setUSE("HAnimJointShape")

Transform740.addChild(Shape741)

Transform739.addChildren(Transform740)

HAnimSegment738.addChildren(Transform739)
Shape742 = x3d.Shape()
LineSet743 = x3d.LineSet()
LineSet743.setVertexCount([2])
Coordinate744 = x3d.Coordinate()
Coordinate744.setPoint([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838])

LineSet743.setCoord(Coordinate744)
#from vt10 to vt9 vertices 2
ColorRGBA745 = x3d.ColorRGBA()
ColorRGBA745.setUSE("HAnimSegmentLineColorRGBA")

LineSet743.setColor(ColorRGBA745)

Shape742.setGeometry(LineSet743)

HAnimSegment738.addChildren(Shape742)
HAnimSite746 = x3d.HAnimSite()
HAnimSite746.setName("l_thelion_pt")
HAnimSite746.setDEF("hanim_l_thelion_pt")
HAnimSite746.setTranslation([0.0918,1.3382,0.1192])
TouchSensor747 = x3d.TouchSensor()
TouchSensor747.setDescription("HAnimSite l_thelion_pt")

HAnimSite746.addChildren(TouchSensor747)
Shape748 = x3d.Shape()
Shape748.setUSE("HAnimSiteShape")

HAnimSite746.addChildren(Shape748)

HAnimSegment738.addChildren(HAnimSite746)
HAnimSite749 = x3d.HAnimSite()
HAnimSite749.setName("r_thelion_pt")
HAnimSite749.setDEF("hanim_r_thelion_pt")
HAnimSite749.setTranslation([-0.0736,1.3385,0.1217])
TouchSensor750 = x3d.TouchSensor()
TouchSensor750.setDescription("HAnimSite r_thelion_pt")

HAnimSite749.addChildren(TouchSensor750)
Shape751 = x3d.Shape()
Shape751.setUSE("HAnimSiteShape")

HAnimSite749.addChildren(Shape751)

HAnimSegment738.addChildren(HAnimSite749)

HAnimJoint737.addChildren(HAnimSegment738)
HAnimJoint752 = x3d.HAnimJoint()
HAnimJoint752.setName("vt9")
HAnimJoint752.setDEF("hanim_vt9")
HAnimJoint752.setCenter([0.0057,1.3126,-0.0838])
HAnimSegment753 = x3d.HAnimSegment()
HAnimSegment753.setName("t9")
HAnimSegment753.setDEF("hanim_t9")
Transform754 = x3d.Transform()
Transform754.setTranslation([0.0057,1.3126,-0.0838])
Transform755 = x3d.Transform()
#Empty Transform
Shape756 = x3d.Shape()
Shape756.setUSE("HAnimJointShape")

Transform755.addChild(Shape756)

Transform754.addChildren(Transform755)

HAnimSegment753.addChildren(Transform754)
Shape757 = x3d.Shape()
LineSet758 = x3d.LineSet()
LineSet758.setVertexCount([2])
Coordinate759 = x3d.Coordinate()
Coordinate759.setPoint([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845])

LineSet758.setCoord(Coordinate759)
#from vt9 to vt8 vertices 2
ColorRGBA760 = x3d.ColorRGBA()
ColorRGBA760.setUSE("HAnimSegmentLineColorRGBA")

LineSet758.setColor(ColorRGBA760)

Shape757.setGeometry(LineSet758)

HAnimSegment753.addChildren(Shape757)

HAnimJoint752.addChildren(HAnimSegment753)
HAnimJoint761 = x3d.HAnimJoint()
HAnimJoint761.setName("vt8")
HAnimJoint761.setDEF("hanim_vt8")
HAnimJoint761.setCenter([0.0057,1.3382,-0.0845])
HAnimSegment762 = x3d.HAnimSegment()
HAnimSegment762.setName("t8")
HAnimSegment762.setDEF("hanim_t8")
Transform763 = x3d.Transform()
Transform763.setTranslation([0.0057,1.3382,-0.0845])
Transform764 = x3d.Transform()
#Empty Transform
Shape765 = x3d.Shape()
Shape765.setUSE("HAnimJointShape")

Transform764.addChild(Shape765)

Transform763.addChildren(Transform764)

HAnimSegment762.addChildren(Transform763)
Shape766 = x3d.Shape()
LineSet767 = x3d.LineSet()
LineSet767.setVertexCount([2])
Coordinate768 = x3d.Coordinate()
Coordinate768.setPoint([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833])

LineSet767.setCoord(Coordinate768)
#from vt8 to vt7 vertices 2
ColorRGBA769 = x3d.ColorRGBA()
ColorRGBA769.setUSE("HAnimSegmentLineColorRGBA")

LineSet767.setColor(ColorRGBA769)

Shape766.setGeometry(LineSet767)

HAnimSegment762.addChildren(Shape766)

HAnimJoint761.addChildren(HAnimSegment762)
HAnimJoint770 = x3d.HAnimJoint()
HAnimJoint770.setName("vt7")
HAnimJoint770.setDEF("hanim_vt7")
HAnimJoint770.setCenter([0.0058,1.3625,-0.0833])
HAnimSegment771 = x3d.HAnimSegment()
HAnimSegment771.setName("t7")
HAnimSegment771.setDEF("hanim_t7")
Transform772 = x3d.Transform()
Transform772.setTranslation([0.0058,1.3625,-0.0833])
Transform773 = x3d.Transform()
#Empty Transform
Shape774 = x3d.Shape()
Shape774.setUSE("HAnimJointShape")

Transform773.addChild(Shape774)

Transform772.addChildren(Transform773)

HAnimSegment771.addChildren(Transform772)
Shape775 = x3d.Shape()
LineSet776 = x3d.LineSet()
LineSet776.setVertexCount([2])
Coordinate777 = x3d.Coordinate()
Coordinate777.setPoint([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08])

LineSet776.setCoord(Coordinate777)
#from vt7 to vt6 vertices 2
ColorRGBA778 = x3d.ColorRGBA()
ColorRGBA778.setUSE("HAnimSegmentLineColorRGBA")

LineSet776.setColor(ColorRGBA778)

Shape775.setGeometry(LineSet776)

HAnimSegment771.addChildren(Shape775)
HAnimSite779 = x3d.HAnimSite()
HAnimSite779.setName("l_chest_midsagittal_plane_pt")
HAnimSite779.setDEF("hanim_l_chest_midsagittal_plane_pt")
TouchSensor780 = x3d.TouchSensor()
TouchSensor780.setDescription("HAnimSite l_chest_midsagittal_plane_pt")

HAnimSite779.addChildren(TouchSensor780)
Shape781 = x3d.Shape()
Shape781.setUSE("HAnimSiteShape")

HAnimSite779.addChildren(Shape781)

HAnimSegment771.addChildren(HAnimSite779)
HAnimSite782 = x3d.HAnimSite()
HAnimSite782.setName("mesosternale_pt")
HAnimSite782.setDEF("hanim_mesosternale_pt")
TouchSensor783 = x3d.TouchSensor()
TouchSensor783.setDescription("HAnimSite mesosternale_pt")

HAnimSite782.addChildren(TouchSensor783)
Shape784 = x3d.Shape()
Shape784.setUSE("HAnimSiteShape")

HAnimSite782.addChildren(Shape784)

HAnimSegment771.addChildren(HAnimSite782)
HAnimSite785 = x3d.HAnimSite()
HAnimSite785.setName("r_chest_midsagittal_plane_pt")
HAnimSite785.setDEF("hanim_r_chest_midsagittal_plane_pt")
TouchSensor786 = x3d.TouchSensor()
TouchSensor786.setDescription("HAnimSite r_chest_midsagittal_plane_pt")

HAnimSite785.addChildren(TouchSensor786)
Shape787 = x3d.Shape()
Shape787.setUSE("HAnimSiteShape")

HAnimSite785.addChildren(Shape787)

HAnimSegment771.addChildren(HAnimSite785)
HAnimSite788 = x3d.HAnimSite()
HAnimSite788.setName("rear_center_midsagittal_plane_pt")
HAnimSite788.setDEF("hanim_rear_center_midsagittal_plane_pt")
TouchSensor789 = x3d.TouchSensor()
TouchSensor789.setDescription("HAnimSite rear_center_midsagittal_plane_pt")

HAnimSite788.addChildren(TouchSensor789)
Shape790 = x3d.Shape()
Shape790.setUSE("HAnimSiteShape")

HAnimSite788.addChildren(Shape790)

HAnimSegment771.addChildren(HAnimSite788)

HAnimJoint770.addChildren(HAnimSegment771)
HAnimJoint791 = x3d.HAnimJoint()
HAnimJoint791.setName("vt6")
HAnimJoint791.setDEF("hanim_vt6")
HAnimJoint791.setCenter([0.0059,1.3866,-0.08])
HAnimSegment792 = x3d.HAnimSegment()
HAnimSegment792.setName("t6")
HAnimSegment792.setDEF("hanim_t6")
Transform793 = x3d.Transform()
Transform793.setTranslation([0.0059,1.3866,-0.08])
Transform794 = x3d.Transform()
#Empty Transform
Shape795 = x3d.Shape()
Shape795.setUSE("HAnimJointShape")

Transform794.addChild(Shape795)

Transform793.addChildren(Transform794)

HAnimSegment792.addChildren(Transform793)
Shape796 = x3d.Shape()
LineSet797 = x3d.LineSet()
LineSet797.setVertexCount([2])
Coordinate798 = x3d.Coordinate()
Coordinate798.setPoint([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745])

LineSet797.setCoord(Coordinate798)
#from vt6 to vt5 vertices 2
ColorRGBA799 = x3d.ColorRGBA()
ColorRGBA799.setUSE("HAnimSegmentLineColorRGBA")

LineSet797.setColor(ColorRGBA799)

Shape796.setGeometry(LineSet797)

HAnimSegment792.addChildren(Shape796)
HAnimSite800 = x3d.HAnimSite()
HAnimSite800.setName("spine_1_middle_back_pt")
HAnimSite800.setDEF("hanim_spine_1_middle_back_pt")
TouchSensor801 = x3d.TouchSensor()
TouchSensor801.setDescription("HAnimSite spine_1_middle_back_pt")

HAnimSite800.addChildren(TouchSensor801)
Shape802 = x3d.Shape()
Shape802.setUSE("HAnimSiteShape")

HAnimSite800.addChildren(Shape802)

HAnimSegment792.addChildren(HAnimSite800)

HAnimJoint791.addChildren(HAnimSegment792)
HAnimJoint803 = x3d.HAnimJoint()
HAnimJoint803.setName("vt5")
HAnimJoint803.setDEF("hanim_vt5")
HAnimJoint803.setCenter([0.006,1.4102,-0.0745])
HAnimSegment804 = x3d.HAnimSegment()
HAnimSegment804.setName("t5")
HAnimSegment804.setDEF("hanim_t5")
Transform805 = x3d.Transform()
Transform805.setTranslation([0.006,1.4102,-0.0745])
Transform806 = x3d.Transform()
#Empty Transform
Shape807 = x3d.Shape()
Shape807.setUSE("HAnimJointShape")

Transform806.addChild(Shape807)

Transform805.addChildren(Transform806)

HAnimSegment804.addChildren(Transform805)
Shape808 = x3d.Shape()
LineSet809 = x3d.LineSet()
LineSet809.setVertexCount([2])
Coordinate810 = x3d.Coordinate()
Coordinate810.setPoint([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675])

LineSet809.setCoord(Coordinate810)
#from vt5 to vt4 vertices 2
ColorRGBA811 = x3d.ColorRGBA()
ColorRGBA811.setUSE("HAnimSegmentLineColorRGBA")

LineSet809.setColor(ColorRGBA811)

Shape808.setGeometry(LineSet809)

HAnimSegment804.addChildren(Shape808)

HAnimJoint803.addChildren(HAnimSegment804)
HAnimJoint812 = x3d.HAnimJoint()
HAnimJoint812.setName("vt4")
HAnimJoint812.setDEF("hanim_vt4")
HAnimJoint812.setCenter([0.0061,1.432,-0.0675])
HAnimSegment813 = x3d.HAnimSegment()
HAnimSegment813.setName("t4")
HAnimSegment813.setDEF("hanim_t4")
Transform814 = x3d.Transform()
Transform814.setTranslation([0.0061,1.432,-0.0675])
Transform815 = x3d.Transform()
#Empty Transform
Shape816 = x3d.Shape()
Shape816.setUSE("HAnimJointShape")

Transform815.addChild(Shape816)

Transform814.addChildren(Transform815)

HAnimSegment813.addChildren(Transform814)
Shape817 = x3d.Shape()
LineSet818 = x3d.LineSet()
LineSet818.setVertexCount([2])
Coordinate819 = x3d.Coordinate()
Coordinate819.setPoint([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057])

LineSet818.setCoord(Coordinate819)
#from vt4 to vt3 vertices 2
ColorRGBA820 = x3d.ColorRGBA()
ColorRGBA820.setUSE("HAnimSegmentLineColorRGBA")

LineSet818.setColor(ColorRGBA820)

Shape817.setGeometry(LineSet818)

HAnimSegment813.addChildren(Shape817)

HAnimJoint812.addChildren(HAnimSegment813)
HAnimJoint821 = x3d.HAnimJoint()
HAnimJoint821.setName("vt3")
HAnimJoint821.setDEF("hanim_vt3")
HAnimJoint821.setCenter([0.0062,1.4583,-0.057])
HAnimSegment822 = x3d.HAnimSegment()
HAnimSegment822.setName("t3")
HAnimSegment822.setDEF("hanim_t3")
Transform823 = x3d.Transform()
Transform823.setTranslation([0.0062,1.4583,-0.057])
Transform824 = x3d.Transform()
#Empty Transform
Shape825 = x3d.Shape()
Shape825.setUSE("HAnimJointShape")

Transform824.addChild(Shape825)

Transform823.addChildren(Transform824)

HAnimSegment822.addChildren(Transform823)
Shape826 = x3d.Shape()
LineSet827 = x3d.LineSet()
LineSet827.setVertexCount([2])
Coordinate828 = x3d.Coordinate()
Coordinate828.setPoint([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484])

LineSet827.setCoord(Coordinate828)
#from vt3 to vt2 vertices 2
ColorRGBA829 = x3d.ColorRGBA()
ColorRGBA829.setUSE("HAnimSegmentLineColorRGBA")

LineSet827.setColor(ColorRGBA829)

Shape826.setGeometry(LineSet827)

HAnimSegment822.addChildren(Shape826)

HAnimJoint821.addChildren(HAnimSegment822)
HAnimJoint830 = x3d.HAnimJoint()
HAnimJoint830.setName("vt2")
HAnimJoint830.setDEF("hanim_vt2")
HAnimJoint830.setCenter([0.0063,1.4761,-0.0484])
HAnimSegment831 = x3d.HAnimSegment()
HAnimSegment831.setName("t2")
HAnimSegment831.setDEF("hanim_t2")
Transform832 = x3d.Transform()
Transform832.setTranslation([0.0063,1.4761,-0.0484])
Transform833 = x3d.Transform()
#Empty Transform
Shape834 = x3d.Shape()
Shape834.setUSE("HAnimJointShape")

Transform833.addChild(Shape834)

Transform832.addChildren(Transform833)

HAnimSegment831.addChildren(Transform832)
Shape835 = x3d.Shape()
LineSet836 = x3d.LineSet()
LineSet836.setVertexCount([2])
Coordinate837 = x3d.Coordinate()
Coordinate837.setPoint([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387])

LineSet836.setCoord(Coordinate837)
#from vt2 to vt1 vertices 2
ColorRGBA838 = x3d.ColorRGBA()
ColorRGBA838.setUSE("HAnimSegmentLineColorRGBA")

LineSet836.setColor(ColorRGBA838)

Shape835.setGeometry(LineSet836)

HAnimSegment831.addChildren(Shape835)
HAnimSite839 = x3d.HAnimSite()
HAnimSite839.setName("cervicale_pt")
HAnimSite839.setDEF("hanim_cervicale_pt")
HAnimSite839.setTranslation([0.0064,1.52,-0.0815])
TouchSensor840 = x3d.TouchSensor()
TouchSensor840.setDescription("HAnimSite cervicale_pt")

HAnimSite839.addChildren(TouchSensor840)
Shape841 = x3d.Shape()
Shape841.setUSE("HAnimSiteShape")

HAnimSite839.addChildren(Shape841)

HAnimSegment831.addChildren(HAnimSite839)
HAnimSite842 = x3d.HAnimSite()
HAnimSite842.setName("suprasternale_pt")
HAnimSite842.setDEF("hanim_suprasternale_pt")
HAnimSite842.setTranslation([0.0084,1.4714,0.0551])
TouchSensor843 = x3d.TouchSensor()
TouchSensor843.setDescription("HAnimSite suprasternale_pt")

HAnimSite842.addChildren(TouchSensor843)
Shape844 = x3d.Shape()
Shape844.setUSE("HAnimSiteShape")

HAnimSite842.addChildren(Shape844)

HAnimSegment831.addChildren(HAnimSite842)

HAnimJoint830.addChildren(HAnimSegment831)
HAnimJoint845 = x3d.HAnimJoint()
HAnimJoint845.setName("vt1")
HAnimJoint845.setDEF("hanim_vt1")
HAnimJoint845.setCenter([0.0065,1.4951,-0.0387])
HAnimSegment846 = x3d.HAnimSegment()
HAnimSegment846.setName("t1")
HAnimSegment846.setDEF("hanim_t1")
Transform847 = x3d.Transform()
Transform847.setTranslation([0.0065,1.4951,-0.0387])
Transform848 = x3d.Transform()
#Empty Transform
Shape849 = x3d.Shape()
Shape849.setUSE("HAnimJointShape")

Transform848.addChild(Shape849)

Transform847.addChildren(Transform848)

HAnimSegment846.addChildren(Transform847)
Shape850 = x3d.Shape()
LineSet851 = x3d.LineSet()
LineSet851.setVertexCount([2])
Coordinate852 = x3d.Coordinate()
Coordinate852.setPoint([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301])

LineSet851.setCoord(Coordinate852)
#from vt1 to vc7 vertices 2
ColorRGBA853 = x3d.ColorRGBA()
ColorRGBA853.setUSE("HAnimSegmentLineColorRGBA")

LineSet851.setColor(ColorRGBA853)

Shape850.setGeometry(LineSet851)

HAnimSegment846.addChildren(Shape850)
HAnimSite854 = x3d.HAnimSite()
HAnimSite854.setName("l_neck_base_pt")
HAnimSite854.setDEF("hanim_l_neck_base_pt")
HAnimSite854.setTranslation([0.0646,1.5141,-0.038])
TouchSensor855 = x3d.TouchSensor()
TouchSensor855.setDescription("HAnimSite l_neck_base_pt")

HAnimSite854.addChildren(TouchSensor855)
Shape856 = x3d.Shape()
Shape856.setUSE("HAnimSiteShape")

HAnimSite854.addChildren(Shape856)

HAnimSegment846.addChildren(HAnimSite854)
HAnimSite857 = x3d.HAnimSite()
HAnimSite857.setName("r_neck_base_pt")
HAnimSite857.setDEF("hanim_r_neck_base_pt")
HAnimSite857.setTranslation([-0.0419,1.5149,-0.022])
TouchSensor858 = x3d.TouchSensor()
TouchSensor858.setDescription("HAnimSite r_neck_base_pt")

HAnimSite857.addChildren(TouchSensor858)
Shape859 = x3d.Shape()
Shape859.setUSE("HAnimSiteShape")

HAnimSite857.addChildren(Shape859)

HAnimSegment846.addChildren(HAnimSite857)
Shape860 = x3d.Shape()
LineSet861 = x3d.LineSet()
LineSet861.setVertexCount([2])
Coordinate862 = x3d.Coordinate()
Coordinate862.setPoint([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353])

LineSet861.setCoord(Coordinate862)
#from vt1 to l_sternoclavicular vertices 2
ColorRGBA863 = x3d.ColorRGBA()
ColorRGBA863.setUSE("HAnimSegmentLineColorRGBA")

LineSet861.setColor(ColorRGBA863)

Shape860.setGeometry(LineSet861)

HAnimSegment846.addChildren(Shape860)
HAnimSite864 = x3d.HAnimSite()
HAnimSite864.setName("l_acromion_pt")
HAnimSite864.setDEF("hanim_l_acromion_pt")
HAnimSite864.setTranslation([0.2032,1.476,-0.049])
TouchSensor865 = x3d.TouchSensor()
TouchSensor865.setDescription("HAnimSite l_acromion_pt")

HAnimSite864.addChildren(TouchSensor865)
Shape866 = x3d.Shape()
Shape866.setUSE("HAnimSiteShape")

HAnimSite864.addChildren(Shape866)

HAnimSegment846.addChildren(HAnimSite864)
HAnimSite867 = x3d.HAnimSite()
HAnimSite867.setName("l_axilla_distal_pt")
HAnimSite867.setDEF("hanim_l_axilla_distal_pt")
HAnimSite867.setTranslation([0.1706,1.4072,-0.0875])
TouchSensor868 = x3d.TouchSensor()
TouchSensor868.setDescription("HAnimSite l_axilla_distal_pt")

HAnimSite867.addChildren(TouchSensor868)
Shape869 = x3d.Shape()
Shape869.setUSE("HAnimSiteShape")

HAnimSite867.addChildren(Shape869)

HAnimSegment846.addChildren(HAnimSite867)
HAnimSite870 = x3d.HAnimSite()
HAnimSite870.setName("l_axilla_posterior_folds_pt")
HAnimSite870.setDEF("hanim_l_axilla_posterior_folds_pt")
TouchSensor871 = x3d.TouchSensor()
TouchSensor871.setDescription("HAnimSite l_axilla_posterior_folds_pt")

HAnimSite870.addChildren(TouchSensor871)
Shape872 = x3d.Shape()
Shape872.setUSE("HAnimSiteShape")

HAnimSite870.addChildren(Shape872)

HAnimSegment846.addChildren(HAnimSite870)
HAnimSite873 = x3d.HAnimSite()
HAnimSite873.setName("l_axilla_proximal_pt")
HAnimSite873.setDEF("hanim_l_axilla_proximal_pt")
HAnimSite873.setTranslation([0.1777,1.4065,-0.0075])
TouchSensor874 = x3d.TouchSensor()
TouchSensor874.setDescription("HAnimSite l_axilla_proximal_pt")

HAnimSite873.addChildren(TouchSensor874)
Shape875 = x3d.Shape()
Shape875.setUSE("HAnimSiteShape")

HAnimSite873.addChildren(Shape875)

HAnimSegment846.addChildren(HAnimSite873)
HAnimSite876 = x3d.HAnimSite()
HAnimSite876.setName("l_clavicale_pt")
HAnimSite876.setDEF("hanim_l_clavicale_pt")
HAnimSite876.setTranslation([0.0271,1.4943,0.0394])
TouchSensor877 = x3d.TouchSensor()
TouchSensor877.setDescription("HAnimSite l_clavicale_pt")

HAnimSite876.addChildren(TouchSensor877)
Shape878 = x3d.Shape()
Shape878.setUSE("HAnimSiteShape")

HAnimSite876.addChildren(Shape878)

HAnimSegment846.addChildren(HAnimSite876)
Shape879 = x3d.Shape()
LineSet880 = x3d.LineSet()
LineSet880.setVertexCount([2])
Coordinate881 = x3d.Coordinate()
Coordinate881.setPoint([0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033])

LineSet880.setCoord(Coordinate881)
#from vt1 to r_sternoclavicular vertices 2
ColorRGBA882 = x3d.ColorRGBA()
ColorRGBA882.setUSE("HAnimSegmentLineColorRGBA")

LineSet880.setColor(ColorRGBA882)

Shape879.setGeometry(LineSet880)

HAnimSegment846.addChildren(Shape879)
HAnimSite883 = x3d.HAnimSite()
HAnimSite883.setName("r_acromion_pt")
HAnimSite883.setDEF("hanim_r_acromion_pt")
HAnimSite883.setTranslation([-0.1905,1.4791,-0.0431])
TouchSensor884 = x3d.TouchSensor()
TouchSensor884.setDescription("HAnimSite r_acromion_pt")

HAnimSite883.addChildren(TouchSensor884)
Shape885 = x3d.Shape()
Shape885.setUSE("HAnimSiteShape")

HAnimSite883.addChildren(Shape885)

HAnimSegment846.addChildren(HAnimSite883)
HAnimSite886 = x3d.HAnimSite()
HAnimSite886.setName("r_axilla_distal_pt")
HAnimSite886.setDEF("hanim_r_axilla_distal_pt")
HAnimSite886.setTranslation([-0.1603,1.4098,-0.0826])
TouchSensor887 = x3d.TouchSensor()
TouchSensor887.setDescription("HAnimSite r_axilla_distal_pt")

HAnimSite886.addChildren(TouchSensor887)
Shape888 = x3d.Shape()
Shape888.setUSE("HAnimSiteShape")

HAnimSite886.addChildren(Shape888)

HAnimSegment846.addChildren(HAnimSite886)
HAnimSite889 = x3d.HAnimSite()
HAnimSite889.setName("r_axilla_posterior_folds_pt")
HAnimSite889.setDEF("hanim_r_axilla_posterior_folds_pt")
TouchSensor890 = x3d.TouchSensor()
TouchSensor890.setDescription("HAnimSite r_axilla_posterior_folds_pt")

HAnimSite889.addChildren(TouchSensor890)
Shape891 = x3d.Shape()
Shape891.setUSE("HAnimSiteShape")

HAnimSite889.addChildren(Shape891)

HAnimSegment846.addChildren(HAnimSite889)
HAnimSite892 = x3d.HAnimSite()
HAnimSite892.setName("r_axilla_proximal_pt")
HAnimSite892.setDEF("hanim_r_axilla_proximal_pt")
HAnimSite892.setTranslation([-0.1626,1.4072,-0.0031])
TouchSensor893 = x3d.TouchSensor()
TouchSensor893.setDescription("HAnimSite r_axilla_proximal_pt")

HAnimSite892.addChildren(TouchSensor893)
Shape894 = x3d.Shape()
Shape894.setUSE("HAnimSiteShape")

HAnimSite892.addChildren(Shape894)

HAnimSegment846.addChildren(HAnimSite892)
HAnimSite895 = x3d.HAnimSite()
HAnimSite895.setName("r_clavicale_pt")
HAnimSite895.setDEF("hanim_r_clavicale_pt")
HAnimSite895.setTranslation([-0.0115,1.4943,0.04])
TouchSensor896 = x3d.TouchSensor()
TouchSensor896.setDescription("HAnimSite r_clavicale_pt")

HAnimSite895.addChildren(TouchSensor896)
Shape897 = x3d.Shape()
Shape897.setUSE("HAnimSiteShape")

HAnimSite895.addChildren(Shape897)

HAnimSegment846.addChildren(HAnimSite895)

HAnimJoint845.addChildren(HAnimSegment846)
HAnimJoint898 = x3d.HAnimJoint()
HAnimJoint898.setName("vc7")
HAnimJoint898.setDEF("hanim_vc7")
HAnimJoint898.setCenter([0.0066,1.5132,-0.0301])
HAnimSegment899 = x3d.HAnimSegment()
HAnimSegment899.setName("c7")
HAnimSegment899.setDEF("hanim_c7")
Transform900 = x3d.Transform()
Transform900.setTranslation([0.0066,1.5132,-0.0301])
Transform901 = x3d.Transform()
#Empty Transform
Shape902 = x3d.Shape()
Shape902.setUSE("HAnimJointShape")

Transform901.addChild(Shape902)

Transform900.addChildren(Transform901)

HAnimSegment899.addChildren(Transform900)
Shape903 = x3d.Shape()
LineSet904 = x3d.LineSet()
LineSet904.setVertexCount([2])
Coordinate905 = x3d.Coordinate()
Coordinate905.setPoint([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143])

LineSet904.setCoord(Coordinate905)
#from vc7 to vc6 vertices 2
ColorRGBA906 = x3d.ColorRGBA()
ColorRGBA906.setUSE("HAnimSegmentLineColorRGBA")

LineSet904.setColor(ColorRGBA906)

Shape903.setGeometry(LineSet904)

HAnimSegment899.addChildren(Shape903)

HAnimJoint898.addChildren(HAnimSegment899)
HAnimJoint907 = x3d.HAnimJoint()
HAnimJoint907.setName("vc6")
HAnimJoint907.setDEF("hanim_vc6")
HAnimJoint907.setCenter([0.0066,1.5357,-0.0143])
HAnimSegment908 = x3d.HAnimSegment()
HAnimSegment908.setName("c6")
HAnimSegment908.setDEF("hanim_c6")
Transform909 = x3d.Transform()
Transform909.setTranslation([0.0066,1.5357,-0.0143])
Transform910 = x3d.Transform()
#Empty Transform
Shape911 = x3d.Shape()
Shape911.setUSE("HAnimJointShape")

Transform910.addChild(Shape911)

Transform909.addChildren(Transform910)

HAnimSegment908.addChildren(Transform909)
Shape912 = x3d.Shape()
LineSet913 = x3d.LineSet()
LineSet913.setVertexCount([2])
Coordinate914 = x3d.Coordinate()
Coordinate914.setPoint([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082])

LineSet913.setCoord(Coordinate914)
#from vc6 to vc5 vertices 2
ColorRGBA915 = x3d.ColorRGBA()
ColorRGBA915.setUSE("HAnimSegmentLineColorRGBA")

LineSet913.setColor(ColorRGBA915)

Shape912.setGeometry(LineSet913)

HAnimSegment908.addChildren(Shape912)

HAnimJoint907.addChildren(HAnimSegment908)
HAnimJoint916 = x3d.HAnimJoint()
HAnimJoint916.setName("vc5")
HAnimJoint916.setDEF("hanim_vc5")
HAnimJoint916.setCenter([0.0066,1.552,-0.0082])
HAnimSegment917 = x3d.HAnimSegment()
HAnimSegment917.setName("c5")
HAnimSegment917.setDEF("hanim_c5")
Transform918 = x3d.Transform()
Transform918.setTranslation([0.0066,1.552,-0.0082])
Transform919 = x3d.Transform()
#Empty Transform
Shape920 = x3d.Shape()
Shape920.setUSE("HAnimJointShape")

Transform919.addChild(Shape920)

Transform918.addChildren(Transform919)

HAnimSegment917.addChildren(Transform918)
Shape921 = x3d.Shape()
LineSet922 = x3d.LineSet()
LineSet922.setVertexCount([2])
Coordinate923 = x3d.Coordinate()
Coordinate923.setPoint([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084])

LineSet922.setCoord(Coordinate923)
#from vc5 to vc4 vertices 2
ColorRGBA924 = x3d.ColorRGBA()
ColorRGBA924.setUSE("HAnimSegmentLineColorRGBA")

LineSet922.setColor(ColorRGBA924)

Shape921.setGeometry(LineSet922)

HAnimSegment917.addChildren(Shape921)

HAnimJoint916.addChildren(HAnimSegment917)
HAnimJoint925 = x3d.HAnimJoint()
HAnimJoint925.setName("vc4")
HAnimJoint925.setDEF("hanim_vc4")
HAnimJoint925.setCenter([0.0066,1.5662,-0.0084])
HAnimSegment926 = x3d.HAnimSegment()
HAnimSegment926.setName("c4")
HAnimSegment926.setDEF("hanim_c4")
Transform927 = x3d.Transform()
Transform927.setTranslation([0.0066,1.5662,-0.0084])
Transform928 = x3d.Transform()
#Empty Transform
Shape929 = x3d.Shape()
Shape929.setUSE("HAnimJointShape")

Transform928.addChild(Shape929)

Transform927.addChildren(Transform928)

HAnimSegment926.addChildren(Transform927)
Shape930 = x3d.Shape()
LineSet931 = x3d.LineSet()
LineSet931.setVertexCount([2])
Coordinate932 = x3d.Coordinate()
Coordinate932.setPoint([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103])

LineSet931.setCoord(Coordinate932)
#from vc4 to vc3 vertices 2
ColorRGBA933 = x3d.ColorRGBA()
ColorRGBA933.setUSE("HAnimSegmentLineColorRGBA")

LineSet931.setColor(ColorRGBA933)

Shape930.setGeometry(LineSet931)

HAnimSegment926.addChildren(Shape930)

HAnimJoint925.addChildren(HAnimSegment926)
HAnimJoint934 = x3d.HAnimJoint()
HAnimJoint934.setName("vc3")
HAnimJoint934.setDEF("hanim_vc3")
HAnimJoint934.setCenter([0.0066,1.58,-0.0103])
HAnimSegment935 = x3d.HAnimSegment()
HAnimSegment935.setName("c3")
HAnimSegment935.setDEF("hanim_c3")
Transform936 = x3d.Transform()
Transform936.setTranslation([0.0066,1.58,-0.0103])
Transform937 = x3d.Transform()
#Empty Transform
Shape938 = x3d.Shape()
Shape938.setUSE("HAnimJointShape")

Transform937.addChild(Shape938)

Transform936.addChildren(Transform937)

HAnimSegment935.addChildren(Transform936)
Shape939 = x3d.Shape()
LineSet940 = x3d.LineSet()
LineSet940.setVertexCount([2])
Coordinate941 = x3d.Coordinate()
Coordinate941.setPoint([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103])

LineSet940.setCoord(Coordinate941)
#from vc3 to vc2 vertices 2
ColorRGBA942 = x3d.ColorRGBA()
ColorRGBA942.setUSE("HAnimSegmentLineColorRGBA")

LineSet940.setColor(ColorRGBA942)

Shape939.setGeometry(LineSet940)

HAnimSegment935.addChildren(Shape939)
HAnimSite943 = x3d.HAnimSite()
HAnimSite943.setName("adams_apple_pt")
HAnimSite943.setDEF("hanim_adams_apple_pt")
TouchSensor944 = x3d.TouchSensor()
TouchSensor944.setDescription("HAnimSite adams_apple_pt")

HAnimSite943.addChildren(TouchSensor944)
Shape945 = x3d.Shape()
Shape945.setUSE("HAnimSiteShape")

HAnimSite943.addChildren(Shape945)

HAnimSegment935.addChildren(HAnimSite943)

HAnimJoint934.addChildren(HAnimSegment935)
HAnimJoint946 = x3d.HAnimJoint()
HAnimJoint946.setName("vc2")
HAnimJoint946.setDEF("hanim_vc2")
HAnimJoint946.setCenter([0.0066,1.5928,-0.0103])
HAnimSegment947 = x3d.HAnimSegment()
HAnimSegment947.setName("c2")
HAnimSegment947.setDEF("hanim_c2")
Transform948 = x3d.Transform()
Transform948.setTranslation([0.0066,1.5928,-0.0103])
Transform949 = x3d.Transform()
#Empty Transform
Shape950 = x3d.Shape()
Shape950.setUSE("HAnimJointShape")

Transform949.addChild(Shape950)

Transform948.addChildren(Transform949)

HAnimSegment947.addChildren(Transform948)
Shape951 = x3d.Shape()
LineSet952 = x3d.LineSet()
LineSet952.setVertexCount([2])
Coordinate953 = x3d.Coordinate()
Coordinate953.setPoint([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034])

LineSet952.setCoord(Coordinate953)
#from vc2 to vc1 vertices 2
ColorRGBA954 = x3d.ColorRGBA()
ColorRGBA954.setUSE("HAnimSegmentLineColorRGBA")

LineSet952.setColor(ColorRGBA954)

Shape951.setGeometry(LineSet952)

HAnimSegment947.addChildren(Shape951)

HAnimJoint946.addChildren(HAnimSegment947)
HAnimJoint955 = x3d.HAnimJoint()
HAnimJoint955.setName("vc1")
HAnimJoint955.setDEF("hanim_vc1")
HAnimJoint955.setCenter([0.0066,1.6144,-0.0034])
HAnimSegment956 = x3d.HAnimSegment()
HAnimSegment956.setName("c1")
HAnimSegment956.setDEF("hanim_c1")
Transform957 = x3d.Transform()
Transform957.setTranslation([0.0066,1.6144,-0.0034])
Transform958 = x3d.Transform()
#Empty Transform
Shape959 = x3d.Shape()
Shape959.setUSE("HAnimJointShape")

Transform958.addChild(Shape959)

Transform957.addChildren(Transform958)

HAnimSegment956.addChildren(Transform957)
Shape960 = x3d.Shape()
LineSet961 = x3d.LineSet()
LineSet961.setVertexCount([2])
Coordinate962 = x3d.Coordinate()
Coordinate962.setPoint([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236])

LineSet961.setCoord(Coordinate962)
#from vc1 to skullbase vertices 2
ColorRGBA963 = x3d.ColorRGBA()
ColorRGBA963.setUSE("HAnimSegmentLineColorRGBA")

LineSet961.setColor(ColorRGBA963)

Shape960.setGeometry(LineSet961)

HAnimSegment956.addChildren(Shape960)
HAnimSite964 = x3d.HAnimSite()
HAnimSite964.setName("glabella_pt")
HAnimSite964.setDEF("hanim_glabella_pt")
TouchSensor965 = x3d.TouchSensor()
TouchSensor965.setDescription("HAnimSite glabella_pt")

HAnimSite964.addChildren(TouchSensor965)
Shape966 = x3d.Shape()
Shape966.setUSE("HAnimSiteShape")

HAnimSite964.addChildren(Shape966)

HAnimSegment956.addChildren(HAnimSite964)
HAnimSite967 = x3d.HAnimSite()
HAnimSite967.setName("l_ectocanthus_pt")
HAnimSite967.setDEF("hanim_l_ectocanthus_pt")
TouchSensor968 = x3d.TouchSensor()
TouchSensor968.setDescription("HAnimSite l_ectocanthus_pt")

HAnimSite967.addChildren(TouchSensor968)
Shape969 = x3d.Shape()
Shape969.setUSE("HAnimSiteShape")

HAnimSite967.addChildren(Shape969)

HAnimSegment956.addChildren(HAnimSite967)
HAnimSite970 = x3d.HAnimSite()
HAnimSite970.setName("l_infraorbitale_pt")
HAnimSite970.setDEF("hanim_l_infraorbitale_pt")
HAnimSite970.setTranslation([0.0341,1.6171,0.0752])
TouchSensor971 = x3d.TouchSensor()
TouchSensor971.setDescription("HAnimSite l_infraorbitale_pt")

HAnimSite970.addChildren(TouchSensor971)
Shape972 = x3d.Shape()
Shape972.setUSE("HAnimSiteShape")

HAnimSite970.addChildren(Shape972)

HAnimSegment956.addChildren(HAnimSite970)
HAnimSite973 = x3d.HAnimSite()
HAnimSite973.setName("l_tragion_pt")
HAnimSite973.setDEF("hanim_l_tragion_pt")
HAnimSite973.setTranslation([0.0739,1.6348,0.0282])
TouchSensor974 = x3d.TouchSensor()
TouchSensor974.setDescription("HAnimSite l_tragion_pt")

HAnimSite973.addChildren(TouchSensor974)
Shape975 = x3d.Shape()
Shape975.setUSE("HAnimSiteShape")

HAnimSite973.addChildren(Shape975)

HAnimSegment956.addChildren(HAnimSite973)
HAnimSite976 = x3d.HAnimSite()
HAnimSite976.setName("nuchale_pt")
HAnimSite976.setDEF("hanim_nuchale_pt")
HAnimSite976.setTranslation([0.0039,1.5972,-0.0796])
TouchSensor977 = x3d.TouchSensor()
TouchSensor977.setDescription("HAnimSite nuchale_pt")

HAnimSite976.addChildren(TouchSensor977)
Shape978 = x3d.Shape()
Shape978.setUSE("HAnimSiteShape")

HAnimSite976.addChildren(Shape978)

HAnimSegment956.addChildren(HAnimSite976)
HAnimSite979 = x3d.HAnimSite()
HAnimSite979.setName("opisthocranion_pt")
HAnimSite979.setDEF("hanim_opisthocranion_pt")
TouchSensor980 = x3d.TouchSensor()
TouchSensor980.setDescription("HAnimSite opisthocranion_pt")

HAnimSite979.addChildren(TouchSensor980)
Shape981 = x3d.Shape()
Shape981.setUSE("HAnimSiteShape")

HAnimSite979.addChildren(Shape981)

HAnimSegment956.addChildren(HAnimSite979)
HAnimSite982 = x3d.HAnimSite()
HAnimSite982.setName("r_ectocanthus_pt")
HAnimSite982.setDEF("hanim_r_ectocanthus_pt")
TouchSensor983 = x3d.TouchSensor()
TouchSensor983.setDescription("HAnimSite r_ectocanthus_pt")

HAnimSite982.addChildren(TouchSensor983)
Shape984 = x3d.Shape()
Shape984.setUSE("HAnimSiteShape")

HAnimSite982.addChildren(Shape984)

HAnimSegment956.addChildren(HAnimSite982)
HAnimSite985 = x3d.HAnimSite()
HAnimSite985.setName("r_infraorbitale_pt")
HAnimSite985.setDEF("hanim_r_infraorbitale_pt")
HAnimSite985.setTranslation([-0.0237,1.6171,0.0752])
TouchSensor986 = x3d.TouchSensor()
TouchSensor986.setDescription("HAnimSite r_infraorbitale_pt")

HAnimSite985.addChildren(TouchSensor986)
Shape987 = x3d.Shape()
Shape987.setUSE("HAnimSiteShape")

HAnimSite985.addChildren(Shape987)

HAnimSegment956.addChildren(HAnimSite985)
HAnimSite988 = x3d.HAnimSite()
HAnimSite988.setName("r_tragion_pt")
HAnimSite988.setDEF("hanim_r_tragion_pt")
HAnimSite988.setTranslation([-0.0646,1.6347,0.0302])
TouchSensor989 = x3d.TouchSensor()
TouchSensor989.setDescription("HAnimSite r_tragion_pt")

HAnimSite988.addChildren(TouchSensor989)
Shape990 = x3d.Shape()
Shape990.setUSE("HAnimSiteShape")

HAnimSite988.addChildren(Shape990)

HAnimSegment956.addChildren(HAnimSite988)
HAnimSite991 = x3d.HAnimSite()
HAnimSite991.setName("sellion_pt")
HAnimSite991.setDEF("hanim_sellion_pt")
HAnimSite991.setTranslation([0.0058,1.6316,0.0852])
TouchSensor992 = x3d.TouchSensor()
TouchSensor992.setDescription("HAnimSite sellion_pt")

HAnimSite991.addChildren(TouchSensor992)
Shape993 = x3d.Shape()
Shape993.setUSE("HAnimSiteShape")

HAnimSite991.addChildren(Shape993)

HAnimSegment956.addChildren(HAnimSite991)
HAnimSite994 = x3d.HAnimSite()
HAnimSite994.setName("skull_vertex_pt")
HAnimSite994.setDEF("hanim_skull_vertex_pt")
HAnimSite994.setTranslation([0.005,1.7504,0.0055])
TouchSensor995 = x3d.TouchSensor()
TouchSensor995.setDescription("HAnimSite skull_vertex_pt")

HAnimSite994.addChildren(TouchSensor995)
Shape996 = x3d.Shape()
Shape996.setUSE("HAnimSiteShape")

HAnimSite994.addChildren(Shape996)

HAnimSegment956.addChildren(HAnimSite994)

HAnimJoint955.addChildren(HAnimSegment956)
HAnimJoint997 = x3d.HAnimJoint()
HAnimJoint997.setName("skullbase")
HAnimJoint997.setDEF("hanim_skullbase")
HAnimJoint997.setCenter([0.0044,1.6209,0.0236])
HAnimSegment998 = x3d.HAnimSegment()
HAnimSegment998.setName("skull")
HAnimSegment998.setDEF("hanim_skull")
Transform999 = x3d.Transform()
Transform999.setTranslation([0.0044,1.6209,0.0236])
Transform1000 = x3d.Transform()
#Empty Transform
Shape1001 = x3d.Shape()
Shape1001.setUSE("HAnimJointShape")

Transform1000.addChild(Shape1001)

Transform999.addChildren(Transform1000)

HAnimSegment998.addChildren(Transform999)
Shape1002 = x3d.Shape()
LineSet1003 = x3d.LineSet()
LineSet1003.setVertexCount([2])
Coordinate1004 = x3d.Coordinate()
Coordinate1004.setPoint([0.0044,1.6209,0.0236,2.2365,1.87,1.9285])

LineSet1003.setCoord(Coordinate1004)
#from skullbase to l_eyelid_joint vertices 2
ColorRGBA1005 = x3d.ColorRGBA()
ColorRGBA1005.setUSE("HAnimSegmentLineColorRGBA")

LineSet1003.setColor(ColorRGBA1005)

Shape1002.setGeometry(LineSet1003)

HAnimSegment998.addChildren(Shape1002)
Shape1006 = x3d.Shape()
LineSet1007 = x3d.LineSet()
LineSet1007.setVertexCount([2])
Coordinate1008 = x3d.Coordinate()
Coordinate1008.setPoint([0.0044,1.6209,0.0236,-2.2535,1.87,1.9285])

LineSet1007.setCoord(Coordinate1008)
#from skullbase to r_eyelid_joint vertices 2
ColorRGBA1009 = x3d.ColorRGBA()
ColorRGBA1009.setUSE("HAnimSegmentLineColorRGBA")

LineSet1007.setColor(ColorRGBA1009)

Shape1006.setGeometry(LineSet1007)

HAnimSegment998.addChildren(Shape1006)
Shape1010 = x3d.Shape()
LineSet1011 = x3d.LineSet()
LineSet1011.setVertexCount([2])
Coordinate1012 = x3d.Coordinate()
Coordinate1012.setPoint([0.0044,1.6209,0.0236,2.1305,1.8444,4.1555])

LineSet1011.setCoord(Coordinate1012)
#from skullbase to l_eyeball_joint vertices 2
ColorRGBA1013 = x3d.ColorRGBA()
ColorRGBA1013.setUSE("HAnimSegmentLineColorRGBA")

LineSet1011.setColor(ColorRGBA1013)

Shape1010.setGeometry(LineSet1011)

HAnimSegment998.addChildren(Shape1010)
Shape1014 = x3d.Shape()
LineSet1015 = x3d.LineSet()
LineSet1015.setVertexCount([2])
Coordinate1016 = x3d.Coordinate()
Coordinate1016.setPoint([0.0044,1.6209,0.0236,-2.1475,1.8444,4.1555])

LineSet1015.setCoord(Coordinate1016)
#from skullbase to r_eyeball_joint vertices 2
ColorRGBA1017 = x3d.ColorRGBA()
ColorRGBA1017.setUSE("HAnimSegmentLineColorRGBA")

LineSet1015.setColor(ColorRGBA1017)

Shape1014.setGeometry(LineSet1015)

HAnimSegment998.addChildren(Shape1014)
Shape1018 = x3d.Shape()
LineSet1019 = x3d.LineSet()
LineSet1019.setVertexCount([2])
Coordinate1020 = x3d.Coordinate()
Coordinate1020.setPoint([0.0044,1.6209,0.0236,0.9581,1.8563,5.2175])

LineSet1019.setCoord(Coordinate1020)
#from skullbase to l_eyebrow_joint vertices 2
ColorRGBA1021 = x3d.ColorRGBA()
ColorRGBA1021.setUSE("HAnimSegmentLineColorRGBA")

LineSet1019.setColor(ColorRGBA1021)

Shape1018.setGeometry(LineSet1019)

HAnimSegment998.addChildren(Shape1018)
Shape1022 = x3d.Shape()
LineSet1023 = x3d.LineSet()
LineSet1023.setVertexCount([2])
Coordinate1024 = x3d.Coordinate()
Coordinate1024.setPoint([0.0044,1.6209,0.0236,-0.9751,1.8563,5.2175])

LineSet1023.setCoord(Coordinate1024)
#from skullbase to r_eyebrow_joint vertices 2
ColorRGBA1025 = x3d.ColorRGBA()
ColorRGBA1025.setUSE("HAnimSegmentLineColorRGBA")

LineSet1023.setColor(ColorRGBA1025)

Shape1022.setGeometry(LineSet1023)

HAnimSegment998.addChildren(Shape1022)
Shape1026 = x3d.Shape()
LineSet1027 = x3d.LineSet()
LineSet1027.setVertexCount([2])
Coordinate1028 = x3d.Coordinate()
Coordinate1028.setPoint([0.0044,1.6209,0.0236,-0.0085,1.7229,1.148])

LineSet1027.setCoord(Coordinate1028)
#from skullbase to temporomandibular vertices 2
ColorRGBA1029 = x3d.ColorRGBA()
ColorRGBA1029.setUSE("HAnimSegmentLineColorRGBA")

LineSet1027.setColor(ColorRGBA1029)

Shape1026.setGeometry(LineSet1027)

HAnimSegment998.addChildren(Shape1026)
HAnimSite1030 = x3d.HAnimSite()
HAnimSite1030.setName("l_gonion_pt")
HAnimSite1030.setDEF("hanim_l_gonion_pt")
HAnimSite1030.setTranslation([0.0631,1.553,0.033])
TouchSensor1031 = x3d.TouchSensor()
TouchSensor1031.setDescription("HAnimSite l_gonion_pt")

HAnimSite1030.addChildren(TouchSensor1031)
Shape1032 = x3d.Shape()
Shape1032.setUSE("HAnimSiteShape")

HAnimSite1030.addChildren(Shape1032)

HAnimSegment998.addChildren(HAnimSite1030)
HAnimSite1033 = x3d.HAnimSite()
HAnimSite1033.setName("menton_pt")
HAnimSite1033.setDEF("hanim_menton_pt")
TouchSensor1034 = x3d.TouchSensor()
TouchSensor1034.setDescription("HAnimSite menton_pt")

HAnimSite1033.addChildren(TouchSensor1034)
Shape1035 = x3d.Shape()
Shape1035.setUSE("HAnimSiteShape")

HAnimSite1033.addChildren(Shape1035)

HAnimSegment998.addChildren(HAnimSite1033)
HAnimSite1036 = x3d.HAnimSite()
HAnimSite1036.setName("r_gonion_pt")
HAnimSite1036.setDEF("hanim_r_gonion_pt")
HAnimSite1036.setTranslation([-0.052,1.5529,0.0347])
TouchSensor1037 = x3d.TouchSensor()
TouchSensor1037.setDescription("HAnimSite r_gonion_pt")

HAnimSite1036.addChildren(TouchSensor1037)
Shape1038 = x3d.Shape()
Shape1038.setUSE("HAnimSiteShape")

HAnimSite1036.addChildren(Shape1038)

HAnimSegment998.addChildren(HAnimSite1036)
HAnimSite1039 = x3d.HAnimSite()
HAnimSite1039.setName("supramenton_pt")
HAnimSite1039.setDEF("hanim_supramenton_pt")
HAnimSite1039.setTranslation([0.0061,1.541,0.0805])
TouchSensor1040 = x3d.TouchSensor()
TouchSensor1040.setDescription("HAnimSite supramenton_pt")

HAnimSite1039.addChildren(TouchSensor1040)
Shape1041 = x3d.Shape()
Shape1041.setUSE("HAnimSiteShape")

HAnimSite1039.addChildren(Shape1041)

HAnimSegment998.addChildren(HAnimSite1039)

HAnimJoint997.addChildren(HAnimSegment998)
HAnimJoint1042 = x3d.HAnimJoint()
HAnimJoint1042.setName("l_eyelid_joint")
HAnimJoint1042.setDEF("hanim_l_eyelid_joint")
HAnimJoint1042.setCenter([2.2365,1.87,1.9285])

HAnimJoint997.addChildren(HAnimJoint1042)
HAnimJoint1043 = x3d.HAnimJoint()
HAnimJoint1043.setName("r_eyelid_joint")
HAnimJoint1043.setDEF("hanim_r_eyelid_joint")
HAnimJoint1043.setCenter([-2.2535,1.87,1.9285])

HAnimJoint997.addChildren(HAnimJoint1043)
HAnimJoint1044 = x3d.HAnimJoint()
HAnimJoint1044.setName("l_eyeball_joint")
HAnimJoint1044.setDEF("hanim_l_eyeball_joint")
HAnimJoint1044.setCenter([2.1305,1.8444,4.1555])

HAnimJoint997.addChildren(HAnimJoint1044)
HAnimJoint1045 = x3d.HAnimJoint()
HAnimJoint1045.setName("r_eyeball_joint")
HAnimJoint1045.setDEF("hanim_r_eyeball_joint")
HAnimJoint1045.setCenter([-2.1475,1.8444,4.1555])

HAnimJoint997.addChildren(HAnimJoint1045)
HAnimJoint1046 = x3d.HAnimJoint()
HAnimJoint1046.setName("l_eyebrow_joint")
HAnimJoint1046.setDEF("hanim_l_eyebrow_joint")
HAnimJoint1046.setCenter([0.9581,1.8563,5.2175])

HAnimJoint997.addChildren(HAnimJoint1046)
HAnimJoint1047 = x3d.HAnimJoint()
HAnimJoint1047.setName("r_eyebrow_joint")
HAnimJoint1047.setDEF("hanim_r_eyebrow_joint")
HAnimJoint1047.setCenter([-0.9751,1.8563,5.2175])

HAnimJoint997.addChildren(HAnimJoint1047)
HAnimJoint1048 = x3d.HAnimJoint()
HAnimJoint1048.setName("temporomandibular")
HAnimJoint1048.setDEF("hanim_temporomandibular")
HAnimJoint1048.setCenter([-0.0085,1.7229,1.148])

HAnimJoint997.addChildren(HAnimJoint1048)

HAnimJoint955.addChildren(HAnimJoint997)

HAnimJoint946.addChildren(HAnimJoint955)

HAnimJoint934.addChildren(HAnimJoint946)

HAnimJoint925.addChildren(HAnimJoint934)

HAnimJoint916.addChildren(HAnimJoint925)

HAnimJoint907.addChildren(HAnimJoint916)

HAnimJoint898.addChildren(HAnimJoint907)

HAnimJoint845.addChildren(HAnimJoint898)
HAnimJoint1049 = x3d.HAnimJoint()
HAnimJoint1049.setName("l_sternoclavicular")
HAnimJoint1049.setDEF("hanim_l_sternoclavicular")
HAnimJoint1049.setCenter([0.082,1.4488,-0.0353])
HAnimSegment1050 = x3d.HAnimSegment()
HAnimSegment1050.setName("l_clavicle")
HAnimSegment1050.setDEF("hanim_l_clavicle")
Transform1051 = x3d.Transform()
Transform1051.setTranslation([0.082,1.4488,-0.0353])
Transform1052 = x3d.Transform()
#Empty Transform
Shape1053 = x3d.Shape()
Shape1053.setUSE("HAnimJointShape")

Transform1052.addChild(Shape1053)

Transform1051.addChildren(Transform1052)

HAnimSegment1050.addChildren(Transform1051)
Shape1054 = x3d.Shape()
LineSet1055 = x3d.LineSet()
LineSet1055.setVertexCount([2])
Coordinate1056 = x3d.Coordinate()
Coordinate1056.setPoint([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424])

LineSet1055.setCoord(Coordinate1056)
#from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA1057 = x3d.ColorRGBA()
ColorRGBA1057.setUSE("HAnimSegmentLineColorRGBA")

LineSet1055.setColor(ColorRGBA1057)

Shape1054.setGeometry(LineSet1055)

HAnimSegment1050.addChildren(Shape1054)

HAnimJoint1049.addChildren(HAnimSegment1050)
HAnimJoint1058 = x3d.HAnimJoint()
HAnimJoint1058.setName("l_acromioclavicular")
HAnimJoint1058.setDEF("hanim_l_acromioclavicular")
HAnimJoint1058.setCenter([0.0962,1.4269,-0.0424])
HAnimSegment1059 = x3d.HAnimSegment()
HAnimSegment1059.setName("l_scapula")
HAnimSegment1059.setDEF("hanim_l_scapula")
Transform1060 = x3d.Transform()
Transform1060.setTranslation([0.0962,1.4269,-0.0424])
Transform1061 = x3d.Transform()
#Empty Transform
Shape1062 = x3d.Shape()
Shape1062.setUSE("HAnimJointShape")

Transform1061.addChild(Shape1062)

Transform1060.addChildren(Transform1061)

HAnimSegment1059.addChildren(Transform1060)
Shape1063 = x3d.Shape()
LineSet1064 = x3d.LineSet()
LineSet1064.setVertexCount([2])
Coordinate1065 = x3d.Coordinate()
Coordinate1065.setPoint([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387])

LineSet1064.setCoord(Coordinate1065)
#from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA1066 = x3d.ColorRGBA()
ColorRGBA1066.setUSE("HAnimSegmentLineColorRGBA")

LineSet1064.setColor(ColorRGBA1066)

Shape1063.setGeometry(LineSet1064)

HAnimSegment1059.addChildren(Shape1063)
HAnimSite1067 = x3d.HAnimSite()
HAnimSite1067.setName("l_bideltoid_pt")
HAnimSite1067.setDEF("hanim_l_bideltoid_pt")
TouchSensor1068 = x3d.TouchSensor()
TouchSensor1068.setDescription("HAnimSite l_bideltoid_pt")

HAnimSite1067.addChildren(TouchSensor1068)
Shape1069 = x3d.Shape()
Shape1069.setUSE("HAnimSiteShape")

HAnimSite1067.addChildren(Shape1069)

HAnimSegment1059.addChildren(HAnimSite1067)
HAnimSite1070 = x3d.HAnimSite()
HAnimSite1070.setName("l_humeral_lateral_epicondyles_pt")
HAnimSite1070.setDEF("hanim_l_humeral_lateral_epicondyles_pt")
HAnimSite1070.setTranslation([0.228,1.1482,-0.11])
TouchSensor1071 = x3d.TouchSensor()
TouchSensor1071.setDescription("HAnimSite l_humeral_lateral_epicondyles_pt")

HAnimSite1070.addChildren(TouchSensor1071)
Shape1072 = x3d.Shape()
Shape1072.setUSE("HAnimSiteShape")

HAnimSite1070.addChildren(Shape1072)

HAnimSegment1059.addChildren(HAnimSite1070)

HAnimJoint1058.addChildren(HAnimSegment1059)
HAnimJoint1073 = x3d.HAnimJoint()
HAnimJoint1073.setName("l_shoulder")
HAnimJoint1073.setDEF("hanim_l_shoulder")
HAnimJoint1073.setCenter([0.2029,1.4376,-0.0387])
HAnimSegment1074 = x3d.HAnimSegment()
HAnimSegment1074.setName("l_upperarm")
HAnimSegment1074.setDEF("hanim_l_upperarm")
Transform1075 = x3d.Transform()
Transform1075.setTranslation([0.2029,1.4376,-0.0387])
Transform1076 = x3d.Transform()
#Empty Transform
Shape1077 = x3d.Shape()
Shape1077.setUSE("HAnimJointShape")

Transform1076.addChild(Shape1077)

Transform1075.addChildren(Transform1076)

HAnimSegment1074.addChildren(Transform1075)
Shape1078 = x3d.Shape()
LineSet1079 = x3d.LineSet()
LineSet1079.setVertexCount([2])
Coordinate1080 = x3d.Coordinate()
Coordinate1080.setPoint([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682])

LineSet1079.setCoord(Coordinate1080)
#from l_shoulder to l_elbow vertices 2
ColorRGBA1081 = x3d.ColorRGBA()
ColorRGBA1081.setUSE("HAnimSegmentLineColorRGBA")

LineSet1079.setColor(ColorRGBA1081)

Shape1078.setGeometry(LineSet1079)

HAnimSegment1074.addChildren(Shape1078)
HAnimSite1082 = x3d.HAnimSite()
HAnimSite1082.setName("l_humeral_medial_epicondyles_pt")
HAnimSite1082.setDEF("hanim_l_humeral_medial_epicondyles_pt")
HAnimSite1082.setTranslation([0.1735,1.1272,-0.1113])
TouchSensor1083 = x3d.TouchSensor()
TouchSensor1083.setDescription("HAnimSite l_humeral_medial_epicondyles_pt")

HAnimSite1082.addChildren(TouchSensor1083)
Shape1084 = x3d.Shape()
Shape1084.setUSE("HAnimSiteShape")

HAnimSite1082.addChildren(Shape1084)

HAnimSegment1074.addChildren(HAnimSite1082)
HAnimSite1085 = x3d.HAnimSite()
HAnimSite1085.setName("l_olecranon_pt")
HAnimSite1085.setDEF("hanim_l_olecranon_pt")
HAnimSite1085.setTranslation([-0.1962,1.1375,-0.1123])
TouchSensor1086 = x3d.TouchSensor()
TouchSensor1086.setDescription("HAnimSite l_olecranon_pt")

HAnimSite1085.addChildren(TouchSensor1086)
Shape1087 = x3d.Shape()
Shape1087.setUSE("HAnimSiteShape")

HAnimSite1085.addChildren(Shape1087)

HAnimSegment1074.addChildren(HAnimSite1085)
HAnimSite1088 = x3d.HAnimSite()
HAnimSite1088.setName("l_radial_styloid_pt")
HAnimSite1088.setDEF("hanim_l_radial_styloid_pt")
HAnimSite1088.setTranslation([0.1901,0.8645,-0.0415])
TouchSensor1089 = x3d.TouchSensor()
TouchSensor1089.setDescription("HAnimSite l_radial_styloid_pt")

HAnimSite1088.addChildren(TouchSensor1089)
Shape1090 = x3d.Shape()
Shape1090.setUSE("HAnimSiteShape")

HAnimSite1088.addChildren(Shape1090)

HAnimSegment1074.addChildren(HAnimSite1088)
HAnimSite1091 = x3d.HAnimSite()
HAnimSite1091.setName("l_radiale_pt")
HAnimSite1091.setDEF("hanim_l_radiale_pt")
HAnimSite1091.setTranslation([0.2182,1.1212,-0.1167])
TouchSensor1092 = x3d.TouchSensor()
TouchSensor1092.setDescription("HAnimSite l_radiale_pt")

HAnimSite1091.addChildren(TouchSensor1092)
Shape1093 = x3d.Shape()
Shape1093.setUSE("HAnimSiteShape")

HAnimSite1091.addChildren(Shape1093)

HAnimSegment1074.addChildren(HAnimSite1091)

HAnimJoint1073.addChildren(HAnimSegment1074)
HAnimJoint1094 = x3d.HAnimJoint()
HAnimJoint1094.setName("l_elbow")
HAnimJoint1094.setDEF("hanim_l_elbow")
HAnimJoint1094.setCenter([0.2014,1.1357,-0.0682])
HAnimSegment1095 = x3d.HAnimSegment()
HAnimSegment1095.setName("l_forearm")
HAnimSegment1095.setDEF("hanim_l_forearm")
Transform1096 = x3d.Transform()
Transform1096.setTranslation([0.2014,1.1357,-0.0682])
Transform1097 = x3d.Transform()
#Empty Transform
Shape1098 = x3d.Shape()
Shape1098.setUSE("HAnimJointShape")

Transform1097.addChild(Shape1098)

Transform1096.addChildren(Transform1097)

HAnimSegment1095.addChildren(Transform1096)
Shape1099 = x3d.Shape()
LineSet1100 = x3d.LineSet()
LineSet1100.setVertexCount([2])
Coordinate1101 = x3d.Coordinate()
Coordinate1101.setPoint([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583])

LineSet1100.setCoord(Coordinate1101)
#from l_elbow to l_radiocarpal vertices 2
ColorRGBA1102 = x3d.ColorRGBA()
ColorRGBA1102.setUSE("HAnimSegmentLineColorRGBA")

LineSet1100.setColor(ColorRGBA1102)

Shape1099.setGeometry(LineSet1100)

HAnimSegment1095.addChildren(Shape1099)
HAnimSite1103 = x3d.HAnimSite()
HAnimSite1103.setName("l_ulnar_styloid_pt")
HAnimSite1103.setDEF("hanim_l_ulnar_styloid_pt")
HAnimSite1103.setTranslation([-0.2142,0.8529,-0.0648])
TouchSensor1104 = x3d.TouchSensor()
TouchSensor1104.setDescription("HAnimSite l_ulnar_styloid_pt")

HAnimSite1103.addChildren(TouchSensor1104)
Shape1105 = x3d.Shape()
Shape1105.setUSE("HAnimSiteShape")

HAnimSite1103.addChildren(Shape1105)

HAnimSegment1095.addChildren(HAnimSite1103)

HAnimJoint1094.addChildren(HAnimSegment1095)
HAnimJoint1106 = x3d.HAnimJoint()
HAnimJoint1106.setName("l_radiocarpal")
HAnimJoint1106.setDEF("hanim_l_radiocarpal")
HAnimJoint1106.setCenter([0.1984,0.8663,-0.0583])
HAnimSegment1107 = x3d.HAnimSegment()
HAnimSegment1107.setName("l_carpal")
HAnimSegment1107.setDEF("hanim_l_carpal")
Transform1108 = x3d.Transform()
Transform1108.setScale([0.2,0.2,0.2])
Transform1108.setTranslation([0.2,0.85,-0.05])
Transform1108.setRotation([0,0,1,-3.14])
#Transform left hand
Transform1109 = x3d.Transform()
Transform1109.setRotation([0,1,0,-1.57])
#Transform left hand
Shape1110 = x3d.Shape()
Shape1110.setUSE("HAnimJointShape")

Transform1109.addChild(Shape1110)

Transform1108.addChildren(Transform1109)

HAnimSegment1107.addChildren(Transform1108)
Shape1111 = x3d.Shape()
LineSet1112 = x3d.LineSet()
LineSet1112.setVertexCount([2])
Coordinate1113 = x3d.Coordinate()
Coordinate1113.setPoint([0.1984,0.8663,-0.0583,8.0485,0.9213,1.3235])

LineSet1112.setCoord(Coordinate1113)
#from l_radiocarpal to l_midcarpal_1 vertices 2
ColorRGBA1114 = x3d.ColorRGBA()
ColorRGBA1114.setUSE("HAnimSegmentLineColorRGBA")

LineSet1112.setColor(ColorRGBA1114)

Shape1111.setGeometry(LineSet1112)

HAnimSegment1107.addChildren(Shape1111)
Shape1115 = x3d.Shape()
LineSet1116 = x3d.LineSet()
LineSet1116.setVertexCount([2])
Coordinate1117 = x3d.Coordinate()
Coordinate1117.setPoint([0.1984,0.8663,-0.0583,8.0485,0.9225,0.8386])

LineSet1116.setCoord(Coordinate1117)
#from l_radiocarpal to l_midcarpal_2 vertices 2
ColorRGBA1118 = x3d.ColorRGBA()
ColorRGBA1118.setUSE("HAnimSegmentLineColorRGBA")

LineSet1116.setColor(ColorRGBA1118)

Shape1115.setGeometry(LineSet1116)

HAnimSegment1107.addChildren(Shape1115)
Shape1119 = x3d.Shape()
LineSet1120 = x3d.LineSet()
LineSet1120.setVertexCount([2])
Coordinate1121 = x3d.Coordinate()
Coordinate1121.setPoint([0.1984,0.8663,-0.0583,8.0395,0.9246,0.2513])

LineSet1120.setCoord(Coordinate1121)
#from l_radiocarpal to l_midcarpal_3 vertices 2
ColorRGBA1122 = x3d.ColorRGBA()
ColorRGBA1122.setUSE("HAnimSegmentLineColorRGBA")

LineSet1120.setColor(ColorRGBA1122)

Shape1119.setGeometry(LineSet1120)

HAnimSegment1107.addChildren(Shape1119)
Shape1123 = x3d.Shape()
LineSet1124 = x3d.LineSet()
LineSet1124.setVertexCount([2])
Coordinate1125 = x3d.Coordinate()
Coordinate1125.setPoint([0.1984,0.8663,-0.0583,8.0395,0.921,-0.6795])

LineSet1124.setCoord(Coordinate1125)
#from l_radiocarpal to l_midcarpal_4_5 vertices 2
ColorRGBA1126 = x3d.ColorRGBA()
ColorRGBA1126.setUSE("HAnimSegmentLineColorRGBA")

LineSet1124.setColor(ColorRGBA1126)

Shape1123.setGeometry(LineSet1124)

HAnimSegment1107.addChildren(Shape1123)

HAnimJoint1106.addChildren(HAnimSegment1107)
HAnimJoint1127 = x3d.HAnimJoint()
HAnimJoint1127.setName("l_midcarpal_1")
HAnimJoint1127.setDEF("hanim_l_midcarpal_1")
HAnimJoint1127.setCenter([8.0485,0.9213,1.3235])
HAnimSegment1128 = x3d.HAnimSegment()
HAnimSegment1128.setName("l_trapezium")
HAnimSegment1128.setDEF("hanim_l_trapezium")
Transform1129 = x3d.Transform()
Transform1129.setTranslation([8.0485,0.9213,1.3235])
Transform1130 = x3d.Transform()
#Empty Transform
Shape1131 = x3d.Shape()
Shape1131.setUSE("HAnimJointShape")

Transform1130.addChild(Shape1131)

Transform1129.addChildren(Transform1130)

HAnimSegment1128.addChildren(Transform1129)
Shape1132 = x3d.Shape()
LineSet1133 = x3d.LineSet()
LineSet1133.setVertexCount([2])
Coordinate1134 = x3d.Coordinate()
Coordinate1134.setPoint([8.0485,0.9213,1.3235,0.1924,0.8472,-0.0534])

LineSet1133.setCoord(Coordinate1134)
#from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
ColorRGBA1135 = x3d.ColorRGBA()
ColorRGBA1135.setUSE("HAnimSegmentLineColorRGBA")

LineSet1133.setColor(ColorRGBA1135)

Shape1132.setGeometry(LineSet1133)

HAnimSegment1128.addChildren(Shape1132)

HAnimJoint1127.addChildren(HAnimSegment1128)
HAnimJoint1136 = x3d.HAnimJoint()
HAnimJoint1136.setName("l_carpometacarpal_1")
HAnimJoint1136.setDEF("hanim_l_carpometacarpal_1")
HAnimJoint1136.setCenter([0.1924,0.8472,-0.0534])
HAnimSegment1137 = x3d.HAnimSegment()
HAnimSegment1137.setName("l_metacarpal_1")
HAnimSegment1137.setDEF("hanim_l_metacarpal_1")
Transform1138 = x3d.Transform()
Transform1138.setTranslation([0.1924,0.8472,-0.0534])
Transform1139 = x3d.Transform()
#Empty Transform
Shape1140 = x3d.Shape()
Shape1140.setUSE("HAnimJointShape")

Transform1139.addChild(Shape1140)

Transform1138.addChildren(Transform1139)

HAnimSegment1137.addChildren(Transform1138)
Shape1141 = x3d.Shape()
LineSet1142 = x3d.LineSet()
LineSet1142.setVertexCount([2])
Coordinate1143 = x3d.Coordinate()
Coordinate1143.setPoint([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246])

LineSet1142.setCoord(Coordinate1143)
#from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA1144 = x3d.ColorRGBA()
ColorRGBA1144.setUSE("HAnimSegmentLineColorRGBA")

LineSet1142.setColor(ColorRGBA1144)

Shape1141.setGeometry(LineSet1142)

HAnimSegment1137.addChildren(Shape1141)

HAnimJoint1136.addChildren(HAnimSegment1137)
HAnimJoint1145 = x3d.HAnimJoint()
HAnimJoint1145.setName("l_metacarpophalangeal_1")
HAnimJoint1145.setDEF("hanim_l_metacarpophalangeal_1")
HAnimJoint1145.setCenter([0.1951,0.8226,0.0246])
HAnimSegment1146 = x3d.HAnimSegment()
HAnimSegment1146.setName("l_carpal_proximal_phalanx_1")
HAnimSegment1146.setDEF("hanim_l_carpal_proximal_phalanx_1")
Transform1147 = x3d.Transform()
Transform1147.setTranslation([0.1951,0.8226,0.0246])
Transform1148 = x3d.Transform()
#Empty Transform
Shape1149 = x3d.Shape()
Shape1149.setUSE("HAnimJointShape")

Transform1148.addChild(Shape1149)

Transform1147.addChildren(Transform1148)

HAnimSegment1146.addChildren(Transform1147)
Shape1150 = x3d.Shape()
LineSet1151 = x3d.LineSet()
LineSet1151.setVertexCount([2])
Coordinate1152 = x3d.Coordinate()
Coordinate1152.setPoint([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464])

LineSet1151.setCoord(Coordinate1152)
#from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA1153 = x3d.ColorRGBA()
ColorRGBA1153.setUSE("HAnimSegmentLineColorRGBA")

LineSet1151.setColor(ColorRGBA1153)

Shape1150.setGeometry(LineSet1151)

HAnimSegment1146.addChildren(Shape1150)
HAnimSite1154 = x3d.HAnimSite()
HAnimSite1154.setName("l_carpal_distal_phalanx_1_tip")
HAnimSite1154.setDEF("hanim_l_carpal_distal_phalanx_1_tip")
TouchSensor1155 = x3d.TouchSensor()
TouchSensor1155.setDescription("HAnimSite l_carpal_distal_phalanx_1_tip")

HAnimSite1154.addChildren(TouchSensor1155)
Shape1156 = x3d.Shape()
Shape1156.setUSE("HAnimSiteShape")

HAnimSite1154.addChildren(Shape1156)

HAnimSegment1146.addChildren(HAnimSite1154)

HAnimJoint1145.addChildren(HAnimSegment1146)
HAnimJoint1157 = x3d.HAnimJoint()
HAnimJoint1157.setName("l_carpal_interphalangeal_1")
HAnimJoint1157.setDEF("hanim_l_carpal_interphalangeal_1")
HAnimJoint1157.setCenter([0.1955,0.8159,0.0464])

HAnimJoint1145.addChildren(HAnimJoint1157)

HAnimJoint1136.addChildren(HAnimJoint1145)

HAnimJoint1127.addChildren(HAnimJoint1136)

HAnimJoint1106.addChildren(HAnimJoint1127)
HAnimJoint1158 = x3d.HAnimJoint()
HAnimJoint1158.setName("l_midcarpal_2")
HAnimJoint1158.setDEF("hanim_l_midcarpal_2")
HAnimJoint1158.setCenter([8.0485,0.9225,0.8386])
HAnimSegment1159 = x3d.HAnimSegment()
HAnimSegment1159.setName("l_trapezoid")
HAnimSegment1159.setDEF("hanim_l_trapezoid")
Transform1160 = x3d.Transform()
Transform1160.setTranslation([8.0485,0.9225,0.8386])
Transform1161 = x3d.Transform()
#Empty Transform
Shape1162 = x3d.Shape()
Shape1162.setUSE("HAnimJointShape")

Transform1161.addChild(Shape1162)

Transform1160.addChildren(Transform1161)

HAnimSegment1159.addChildren(Transform1160)
Shape1163 = x3d.Shape()
LineSet1164 = x3d.LineSet()
LineSet1164.setVertexCount([2])
Coordinate1165 = x3d.Coordinate()
Coordinate1165.setPoint([8.0485,0.9225,0.8386,0.1983,0.8024,-0.028])

LineSet1164.setCoord(Coordinate1165)
#from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
ColorRGBA1166 = x3d.ColorRGBA()
ColorRGBA1166.setUSE("HAnimSegmentLineColorRGBA")

LineSet1164.setColor(ColorRGBA1166)

Shape1163.setGeometry(LineSet1164)

HAnimSegment1159.addChildren(Shape1163)
HAnimSite1167 = x3d.HAnimSite()
HAnimSite1167.setName("l_metacarpal_phalanx_2_pt")
HAnimSite1167.setDEF("hanim_l_metacarpal_phalanx_2_pt")
HAnimSite1167.setTranslation([0.2009,0.8139,-0.0237])
TouchSensor1168 = x3d.TouchSensor()
TouchSensor1168.setDescription("HAnimSite l_metacarpal_phalanx_2_pt")

HAnimSite1167.addChildren(TouchSensor1168)
Shape1169 = x3d.Shape()
Shape1169.setUSE("HAnimSiteShape")

HAnimSite1167.addChildren(Shape1169)

HAnimSegment1159.addChildren(HAnimSite1167)

HAnimJoint1158.addChildren(HAnimSegment1159)
HAnimJoint1170 = x3d.HAnimJoint()
HAnimJoint1170.setName("l_carpometacarpal_2")
HAnimJoint1170.setDEF("hanim_l_carpometacarpal_2")
HAnimJoint1170.setCenter([0.1983,0.8024,-0.028])
HAnimSegment1171 = x3d.HAnimSegment()
HAnimSegment1171.setName("l_metacarpal_2")
HAnimSegment1171.setDEF("hanim_l_metacarpal_2")
Transform1172 = x3d.Transform()
Transform1172.setTranslation([0.1983,0.8024,-0.028])
Transform1173 = x3d.Transform()
#Empty Transform
Shape1174 = x3d.Shape()
Shape1174.setUSE("HAnimJointShape")

Transform1173.addChild(Shape1174)

Transform1172.addChildren(Transform1173)

HAnimSegment1171.addChildren(Transform1172)
Shape1175 = x3d.Shape()
LineSet1176 = x3d.LineSet()
LineSet1176.setVertexCount([2])
Coordinate1177 = x3d.Coordinate()
Coordinate1177.setPoint([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028])

LineSet1176.setCoord(Coordinate1177)
#from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA1178 = x3d.ColorRGBA()
ColorRGBA1178.setUSE("HAnimSegmentLineColorRGBA")

LineSet1176.setColor(ColorRGBA1178)

Shape1175.setGeometry(LineSet1176)

HAnimSegment1171.addChildren(Shape1175)

HAnimJoint1170.addChildren(HAnimSegment1171)
HAnimJoint1179 = x3d.HAnimJoint()
HAnimJoint1179.setName("l_metacarpophalangeal_2")
HAnimJoint1179.setDEF("hanim_l_metacarpophalangeal_2")
HAnimJoint1179.setCenter([0.1983,0.7815,-0.028])
HAnimSegment1180 = x3d.HAnimSegment()
HAnimSegment1180.setName("l_carpal_proximal_phalanx_2")
HAnimSegment1180.setDEF("hanim_l_carpal_proximal_phalanx_2")
Transform1181 = x3d.Transform()
Transform1181.setTranslation([0.1983,0.7815,-0.028])
Transform1182 = x3d.Transform()
#Empty Transform
Shape1183 = x3d.Shape()
Shape1183.setUSE("HAnimJointShape")

Transform1182.addChild(Shape1183)

Transform1181.addChildren(Transform1182)

HAnimSegment1180.addChildren(Transform1181)
Shape1184 = x3d.Shape()
LineSet1185 = x3d.LineSet()
LineSet1185.setVertexCount([2])
Coordinate1186 = x3d.Coordinate()
Coordinate1186.setPoint([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248])

LineSet1185.setCoord(Coordinate1186)
#from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA1187 = x3d.ColorRGBA()
ColorRGBA1187.setUSE("HAnimSegmentLineColorRGBA")

LineSet1185.setColor(ColorRGBA1187)

Shape1184.setGeometry(LineSet1185)

HAnimSegment1180.addChildren(Shape1184)

HAnimJoint1179.addChildren(HAnimSegment1180)
HAnimJoint1188 = x3d.HAnimJoint()
HAnimJoint1188.setName("l_carpal_proximal_interphalangeal_2")
HAnimJoint1188.setDEF("hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint1188.setCenter([0.2017,0.7363,-0.0248])
HAnimSegment1189 = x3d.HAnimSegment()
HAnimSegment1189.setName("l_carpal_middle_phalanx_2")
HAnimSegment1189.setDEF("hanim_l_carpal_middle_phalanx_2")
Transform1190 = x3d.Transform()
Transform1190.setTranslation([0.2017,0.7363,-0.0248])
Transform1191 = x3d.Transform()
#Empty Transform
Shape1192 = x3d.Shape()
Shape1192.setUSE("HAnimJointShape")

Transform1191.addChild(Shape1192)

Transform1190.addChildren(Transform1191)

HAnimSegment1189.addChildren(Transform1190)
Shape1193 = x3d.Shape()
LineSet1194 = x3d.LineSet()
LineSet1194.setVertexCount([2])
Coordinate1195 = x3d.Coordinate()
Coordinate1195.setPoint([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236])

LineSet1194.setCoord(Coordinate1195)
#from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA1196 = x3d.ColorRGBA()
ColorRGBA1196.setUSE("HAnimSegmentLineColorRGBA")

LineSet1194.setColor(ColorRGBA1196)

Shape1193.setGeometry(LineSet1194)

HAnimSegment1189.addChildren(Shape1193)
HAnimSite1197 = x3d.HAnimSite()
HAnimSite1197.setName("l_carpal_distal_phalanx_2_tip")
HAnimSite1197.setDEF("hanim_l_carpal_distal_phalanx_2_tip")
TouchSensor1198 = x3d.TouchSensor()
TouchSensor1198.setDescription("HAnimSite l_carpal_distal_phalanx_2_tip")

HAnimSite1197.addChildren(TouchSensor1198)
Shape1199 = x3d.Shape()
Shape1199.setUSE("HAnimSiteShape")

HAnimSite1197.addChildren(Shape1199)

HAnimSegment1189.addChildren(HAnimSite1197)
HAnimSite1200 = x3d.HAnimSite()
HAnimSite1200.setName("l_dactylion_pt")
HAnimSite1200.setDEF("hanim_l_dactylion_pt")
HAnimSite1200.setTranslation([0.2056,0.6743,-0.0482])
TouchSensor1201 = x3d.TouchSensor()
TouchSensor1201.setDescription("HAnimSite l_dactylion_pt")

HAnimSite1200.addChildren(TouchSensor1201)
Shape1202 = x3d.Shape()
Shape1202.setUSE("HAnimSiteShape")

HAnimSite1200.addChildren(Shape1202)

HAnimSegment1189.addChildren(HAnimSite1200)

HAnimJoint1188.addChildren(HAnimSegment1189)
HAnimJoint1203 = x3d.HAnimJoint()
HAnimJoint1203.setName("l_carpal_distal_interphalangeal_2")
HAnimJoint1203.setDEF("hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint1203.setCenter([0.2028,0.7139,-0.0236])

HAnimJoint1188.addChildren(HAnimJoint1203)

HAnimJoint1179.addChildren(HAnimJoint1188)

HAnimJoint1170.addChildren(HAnimJoint1179)

HAnimJoint1158.addChildren(HAnimJoint1170)

HAnimJoint1106.addChildren(HAnimJoint1158)
HAnimJoint1204 = x3d.HAnimJoint()
HAnimJoint1204.setName("l_midcarpal_3")
HAnimJoint1204.setDEF("hanim_l_midcarpal_3")
HAnimJoint1204.setCenter([8.0395,0.9246,0.2513])
HAnimSegment1205 = x3d.HAnimSegment()
HAnimSegment1205.setName("l_capitate")
HAnimSegment1205.setDEF("hanim_l_capitate")
Transform1206 = x3d.Transform()
Transform1206.setTranslation([8.0395,0.9246,0.2513])
Transform1207 = x3d.Transform()
#Empty Transform
Shape1208 = x3d.Shape()
Shape1208.setUSE("HAnimJointShape")

Transform1207.addChild(Shape1208)

Transform1206.addChildren(Transform1207)

HAnimSegment1205.addChildren(Transform1206)
Shape1209 = x3d.Shape()
LineSet1210 = x3d.LineSet()
LineSet1210.setVertexCount([2])
Coordinate1211 = x3d.Coordinate()
Coordinate1211.setPoint([8.0395,0.9246,0.2513,0.1987,0.8029,-0.053])

LineSet1210.setCoord(Coordinate1211)
#from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
ColorRGBA1212 = x3d.ColorRGBA()
ColorRGBA1212.setUSE("HAnimSegmentLineColorRGBA")

LineSet1210.setColor(ColorRGBA1212)

Shape1209.setGeometry(LineSet1210)

HAnimSegment1205.addChildren(Shape1209)
HAnimSite1213 = x3d.HAnimSite()
HAnimSite1213.setName("l_metacarpal_phalanx_3_pt")
HAnimSite1213.setDEF("hanim_l_metacarpal_phalanx_3_pt")
TouchSensor1214 = x3d.TouchSensor()
TouchSensor1214.setDescription("HAnimSite l_metacarpal_phalanx_3_pt")

HAnimSite1213.addChildren(TouchSensor1214)
Shape1215 = x3d.Shape()
Shape1215.setUSE("HAnimSiteShape")

HAnimSite1213.addChildren(Shape1215)

HAnimSegment1205.addChildren(HAnimSite1213)

HAnimJoint1204.addChildren(HAnimSegment1205)
HAnimJoint1216 = x3d.HAnimJoint()
HAnimJoint1216.setName("l_carpometacarpal_3")
HAnimJoint1216.setDEF("hanim_l_carpometacarpal_3")
HAnimJoint1216.setCenter([0.1987,0.8029,-0.053])
HAnimSegment1217 = x3d.HAnimSegment()
HAnimSegment1217.setName("l_metacarpal_3")
HAnimSegment1217.setDEF("hanim_l_metacarpal_3")
Transform1218 = x3d.Transform()
Transform1218.setTranslation([0.1987,0.8029,-0.053])
Transform1219 = x3d.Transform()
#Empty Transform
Shape1220 = x3d.Shape()
Shape1220.setUSE("HAnimJointShape")

Transform1219.addChild(Shape1220)

Transform1218.addChildren(Transform1219)

HAnimSegment1217.addChildren(Transform1218)
Shape1221 = x3d.Shape()
LineSet1222 = x3d.LineSet()
LineSet1222.setVertexCount([2])
Coordinate1223 = x3d.Coordinate()
Coordinate1223.setPoint([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053])

LineSet1222.setCoord(Coordinate1223)
#from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA1224 = x3d.ColorRGBA()
ColorRGBA1224.setUSE("HAnimSegmentLineColorRGBA")

LineSet1222.setColor(ColorRGBA1224)

Shape1221.setGeometry(LineSet1222)

HAnimSegment1217.addChildren(Shape1221)

HAnimJoint1216.addChildren(HAnimSegment1217)
HAnimJoint1225 = x3d.HAnimJoint()
HAnimJoint1225.setName("l_metacarpophalangeal_3")
HAnimJoint1225.setDEF("hanim_l_metacarpophalangeal_3")
HAnimJoint1225.setCenter([0.1987,0.7818,-0.053])
HAnimSegment1226 = x3d.HAnimSegment()
HAnimSegment1226.setName("l_carpal_proximal_phalanx_3")
HAnimSegment1226.setDEF("hanim_l_carpal_proximal_phalanx_3")
Transform1227 = x3d.Transform()
Transform1227.setTranslation([0.1987,0.7818,-0.053])
Transform1228 = x3d.Transform()
#Empty Transform
Shape1229 = x3d.Shape()
Shape1229.setUSE("HAnimJointShape")

Transform1228.addChild(Shape1229)

Transform1227.addChildren(Transform1228)

HAnimSegment1226.addChildren(Transform1227)
Shape1230 = x3d.Shape()
LineSet1231 = x3d.LineSet()
LineSet1231.setVertexCount([2])
Coordinate1232 = x3d.Coordinate()
Coordinate1232.setPoint([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503])

LineSet1231.setCoord(Coordinate1232)
#from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA1233 = x3d.ColorRGBA()
ColorRGBA1233.setUSE("HAnimSegmentLineColorRGBA")

LineSet1231.setColor(ColorRGBA1233)

Shape1230.setGeometry(LineSet1231)

HAnimSegment1226.addChildren(Shape1230)

HAnimJoint1225.addChildren(HAnimSegment1226)
HAnimJoint1234 = x3d.HAnimJoint()
HAnimJoint1234.setName("l_carpal_proximal_interphalangeal_3")
HAnimJoint1234.setDEF("hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint1234.setCenter([0.2013,0.7273,-0.0503])
HAnimSegment1235 = x3d.HAnimSegment()
HAnimSegment1235.setName("l_carpal_middle_phalanx_3")
HAnimSegment1235.setDEF("hanim_l_carpal_middle_phalanx_3")
Transform1236 = x3d.Transform()
Transform1236.setTranslation([0.2013,0.7273,-0.0503])
Transform1237 = x3d.Transform()
#Empty Transform
Shape1238 = x3d.Shape()
Shape1238.setUSE("HAnimJointShape")

Transform1237.addChild(Shape1238)

Transform1236.addChildren(Transform1237)

HAnimSegment1235.addChildren(Transform1236)
Shape1239 = x3d.Shape()
LineSet1240 = x3d.LineSet()
LineSet1240.setVertexCount([2])
Coordinate1241 = x3d.Coordinate()
Coordinate1241.setPoint([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494])

LineSet1240.setCoord(Coordinate1241)
#from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA1242 = x3d.ColorRGBA()
ColorRGBA1242.setUSE("HAnimSegmentLineColorRGBA")

LineSet1240.setColor(ColorRGBA1242)

Shape1239.setGeometry(LineSet1240)

HAnimSegment1235.addChildren(Shape1239)
HAnimSite1243 = x3d.HAnimSite()
HAnimSite1243.setName("l_carpal_distal_phalanx_3_tip")
HAnimSite1243.setDEF("hanim_l_carpal_distal_phalanx_3_tip")
TouchSensor1244 = x3d.TouchSensor()
TouchSensor1244.setDescription("HAnimSite l_carpal_distal_phalanx_3_tip")

HAnimSite1243.addChildren(TouchSensor1244)
Shape1245 = x3d.Shape()
Shape1245.setUSE("HAnimSiteShape")

HAnimSite1243.addChildren(Shape1245)

HAnimSegment1235.addChildren(HAnimSite1243)

HAnimJoint1234.addChildren(HAnimSegment1235)
HAnimJoint1246 = x3d.HAnimJoint()
HAnimJoint1246.setName("l_carpal_distal_interphalangeal_3")
HAnimJoint1246.setDEF("hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint1246.setCenter([0.2026,0.7011,-0.0494])

HAnimJoint1234.addChildren(HAnimJoint1246)

HAnimJoint1225.addChildren(HAnimJoint1234)

HAnimJoint1216.addChildren(HAnimJoint1225)

HAnimJoint1204.addChildren(HAnimJoint1216)

HAnimJoint1106.addChildren(HAnimJoint1204)
HAnimJoint1247 = x3d.HAnimJoint()
HAnimJoint1247.setName("l_midcarpal_4_5")
HAnimJoint1247.setDEF("hanim_l_midcarpal_4_5")
HAnimJoint1247.setCenter([8.0395,0.921,-0.6795])
HAnimSegment1248 = x3d.HAnimSegment()
HAnimSegment1248.setName("l_hamate")
HAnimSegment1248.setDEF("hanim_l_hamate")
Transform1249 = x3d.Transform()
Transform1249.setTranslation([8.0395,0.921,-0.6795])
Transform1250 = x3d.Transform()
#Empty Transform
Shape1251 = x3d.Shape()
Shape1251.setUSE("HAnimJointShape")

Transform1250.addChild(Shape1251)

Transform1249.addChildren(Transform1250)

HAnimSegment1248.addChildren(Transform1249)
Shape1252 = x3d.Shape()
LineSet1253 = x3d.LineSet()
LineSet1253.setVertexCount([2])
Coordinate1254 = x3d.Coordinate()
Coordinate1254.setPoint([8.0395,0.921,-0.6795,0.1956,0.8019,-0.0794])

LineSet1253.setCoord(Coordinate1254)
#from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
ColorRGBA1255 = x3d.ColorRGBA()
ColorRGBA1255.setUSE("HAnimSegmentLineColorRGBA")

LineSet1253.setColor(ColorRGBA1255)

Shape1252.setGeometry(LineSet1253)

HAnimSegment1248.addChildren(Shape1252)
Shape1256 = x3d.Shape()
LineSet1257 = x3d.LineSet()
LineSet1257.setVertexCount([2])
Coordinate1258 = x3d.Coordinate()
Coordinate1258.setPoint([8.0395,0.921,-0.6795,0.1925,0.8066,-0.1036])

LineSet1257.setCoord(Coordinate1258)
#from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
ColorRGBA1259 = x3d.ColorRGBA()
ColorRGBA1259.setUSE("HAnimSegmentLineColorRGBA")

LineSet1257.setColor(ColorRGBA1259)

Shape1256.setGeometry(LineSet1257)

HAnimSegment1248.addChildren(Shape1256)
HAnimSite1260 = x3d.HAnimSite()
HAnimSite1260.setName("l_metacarpal_phalanx_5_pt")
HAnimSite1260.setDEF("hanim_l_metacarpal_phalanx_5_pt")
HAnimSite1260.setTranslation([0.1929,0.786,-0.1122])
TouchSensor1261 = x3d.TouchSensor()
TouchSensor1261.setDescription("HAnimSite l_metacarpal_phalanx_5_pt")

HAnimSite1260.addChildren(TouchSensor1261)
Shape1262 = x3d.Shape()
Shape1262.setUSE("HAnimSiteShape")

HAnimSite1260.addChildren(Shape1262)

HAnimSegment1248.addChildren(HAnimSite1260)

HAnimJoint1247.addChildren(HAnimSegment1248)
HAnimJoint1263 = x3d.HAnimJoint()
HAnimJoint1263.setName("l_carpometacarpal_4")
HAnimJoint1263.setDEF("hanim_l_carpometacarpal_4")
HAnimJoint1263.setCenter([0.1956,0.8019,-0.0794])
HAnimSegment1264 = x3d.HAnimSegment()
HAnimSegment1264.setName("l_metacarpal_4")
HAnimSegment1264.setDEF("hanim_l_metacarpal_4")
Transform1265 = x3d.Transform()
Transform1265.setTranslation([0.1956,0.8019,-0.0794])
Transform1266 = x3d.Transform()
#Empty Transform
Shape1267 = x3d.Shape()
Shape1267.setUSE("HAnimJointShape")

Transform1266.addChild(Shape1267)

Transform1265.addChildren(Transform1266)

HAnimSegment1264.addChildren(Transform1265)
Shape1268 = x3d.Shape()
LineSet1269 = x3d.LineSet()
LineSet1269.setVertexCount([2])
Coordinate1270 = x3d.Coordinate()
Coordinate1270.setPoint([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794])

LineSet1269.setCoord(Coordinate1270)
#from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA1271 = x3d.ColorRGBA()
ColorRGBA1271.setUSE("HAnimSegmentLineColorRGBA")

LineSet1269.setColor(ColorRGBA1271)

Shape1268.setGeometry(LineSet1269)

HAnimSegment1264.addChildren(Shape1268)

HAnimJoint1263.addChildren(HAnimSegment1264)
HAnimJoint1272 = x3d.HAnimJoint()
HAnimJoint1272.setName("l_metacarpophalangeal_4")
HAnimJoint1272.setDEF("hanim_l_metacarpophalangeal_4")
HAnimJoint1272.setCenter([0.1956,0.7815,-0.0794])
HAnimSegment1273 = x3d.HAnimSegment()
HAnimSegment1273.setName("l_carpal_proximal_phalanx_4")
HAnimSegment1273.setDEF("hanim_l_carpal_proximal_phalanx_4")
Transform1274 = x3d.Transform()
Transform1274.setTranslation([0.1956,0.7815,-0.0794])
Transform1275 = x3d.Transform()
#Empty Transform
Shape1276 = x3d.Shape()
Shape1276.setUSE("HAnimJointShape")

Transform1275.addChild(Shape1276)

Transform1274.addChildren(Transform1275)

HAnimSegment1273.addChildren(Transform1274)
Shape1277 = x3d.Shape()
LineSet1278 = x3d.LineSet()
LineSet1278.setVertexCount([2])
Coordinate1279 = x3d.Coordinate()
Coordinate1279.setPoint([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777])

LineSet1278.setCoord(Coordinate1279)
#from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA1280 = x3d.ColorRGBA()
ColorRGBA1280.setUSE("HAnimSegmentLineColorRGBA")

LineSet1278.setColor(ColorRGBA1280)

Shape1277.setGeometry(LineSet1278)

HAnimSegment1273.addChildren(Shape1277)

HAnimJoint1272.addChildren(HAnimSegment1273)
HAnimJoint1281 = x3d.HAnimJoint()
HAnimJoint1281.setName("l_carpal_proximal_interphalangeal_4")
HAnimJoint1281.setDEF("hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint1281.setCenter([0.1973,0.7287,-0.0777])
HAnimSegment1282 = x3d.HAnimSegment()
HAnimSegment1282.setName("l_carpal_middle_phalanx_4")
HAnimSegment1282.setDEF("hanim_l_carpal_middle_phalanx_4")
Transform1283 = x3d.Transform()
Transform1283.setTranslation([0.1973,0.7287,-0.0777])
Transform1284 = x3d.Transform()
#Empty Transform
Shape1285 = x3d.Shape()
Shape1285.setUSE("HAnimJointShape")

Transform1284.addChild(Shape1285)

Transform1283.addChildren(Transform1284)

HAnimSegment1282.addChildren(Transform1283)
Shape1286 = x3d.Shape()
LineSet1287 = x3d.LineSet()
LineSet1287.setVertexCount([2])
Coordinate1288 = x3d.Coordinate()
Coordinate1288.setPoint([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767])

LineSet1287.setCoord(Coordinate1288)
#from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA1289 = x3d.ColorRGBA()
ColorRGBA1289.setUSE("HAnimSegmentLineColorRGBA")

LineSet1287.setColor(ColorRGBA1289)

Shape1286.setGeometry(LineSet1287)

HAnimSegment1282.addChildren(Shape1286)
HAnimSite1290 = x3d.HAnimSite()
HAnimSite1290.setName("l_carpal_distal_phalanx_4_tip")
HAnimSite1290.setDEF("hanim_l_carpal_distal_phalanx_4_tip")
TouchSensor1291 = x3d.TouchSensor()
TouchSensor1291.setDescription("HAnimSite l_carpal_distal_phalanx_4_tip")

HAnimSite1290.addChildren(TouchSensor1291)
Shape1292 = x3d.Shape()
Shape1292.setUSE("HAnimSiteShape")

HAnimSite1290.addChildren(Shape1292)

HAnimSegment1282.addChildren(HAnimSite1290)

HAnimJoint1281.addChildren(HAnimSegment1282)
HAnimJoint1293 = x3d.HAnimJoint()
HAnimJoint1293.setName("l_carpal_distal_interphalangeal_4")
HAnimJoint1293.setDEF("hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint1293.setCenter([0.1983,0.7045,-0.0767])

HAnimJoint1281.addChildren(HAnimJoint1293)

HAnimJoint1272.addChildren(HAnimJoint1281)

HAnimJoint1263.addChildren(HAnimJoint1272)

HAnimJoint1247.addChildren(HAnimJoint1263)
HAnimJoint1294 = x3d.HAnimJoint()
HAnimJoint1294.setName("l_carpometacarpal_5")
HAnimJoint1294.setDEF("hanim_l_carpometacarpal_5")
HAnimJoint1294.setCenter([0.1925,0.8066,-0.1036])
HAnimSegment1295 = x3d.HAnimSegment()
HAnimSegment1295.setName("l_metacarpal_5")
HAnimSegment1295.setDEF("hanim_l_metacarpal_5")
Transform1296 = x3d.Transform()
Transform1296.setTranslation([0.1925,0.8066,-0.1036])
Transform1297 = x3d.Transform()
#Empty Transform
Shape1298 = x3d.Shape()
Shape1298.setUSE("HAnimJointShape")

Transform1297.addChild(Shape1298)

Transform1296.addChildren(Transform1297)

HAnimSegment1295.addChildren(Transform1296)
Shape1299 = x3d.Shape()
LineSet1300 = x3d.LineSet()
LineSet1300.setVertexCount([2])
Coordinate1301 = x3d.Coordinate()
Coordinate1301.setPoint([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036])

LineSet1300.setCoord(Coordinate1301)
#from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA1302 = x3d.ColorRGBA()
ColorRGBA1302.setUSE("HAnimSegmentLineColorRGBA")

LineSet1300.setColor(ColorRGBA1302)

Shape1299.setGeometry(LineSet1300)

HAnimSegment1295.addChildren(Shape1299)

HAnimJoint1294.addChildren(HAnimSegment1295)
HAnimJoint1303 = x3d.HAnimJoint()
HAnimJoint1303.setName("l_metacarpophalangeal_5")
HAnimJoint1303.setDEF("hanim_l_metacarpophalangeal_5")
HAnimJoint1303.setCenter([0.1925,0.7866,-0.1036])
HAnimSegment1304 = x3d.HAnimSegment()
HAnimSegment1304.setName("l_carpal_proximal_phalanx_5")
HAnimSegment1304.setDEF("hanim_l_carpal_proximal_phalanx_5")
Transform1305 = x3d.Transform()
Transform1305.setTranslation([0.1925,0.7866,-0.1036])
Transform1306 = x3d.Transform()
#Empty Transform
Shape1307 = x3d.Shape()
Shape1307.setUSE("HAnimJointShape")

Transform1306.addChild(Shape1307)

Transform1305.addChildren(Transform1306)

HAnimSegment1304.addChildren(Transform1305)
Shape1308 = x3d.Shape()
LineSet1309 = x3d.LineSet()
LineSet1309.setVertexCount([2])
Coordinate1310 = x3d.Coordinate()
Coordinate1310.setPoint([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024])

LineSet1309.setCoord(Coordinate1310)
#from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA1311 = x3d.ColorRGBA()
ColorRGBA1311.setUSE("HAnimSegmentLineColorRGBA")

LineSet1309.setColor(ColorRGBA1311)

Shape1308.setGeometry(LineSet1309)

HAnimSegment1304.addChildren(Shape1308)

HAnimJoint1303.addChildren(HAnimSegment1304)
HAnimJoint1312 = x3d.HAnimJoint()
HAnimJoint1312.setName("l_carpal_proximal_interphalangeal_5")
HAnimJoint1312.setDEF("hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint1312.setCenter([0.1938,0.7452,-0.1024])
HAnimSegment1313 = x3d.HAnimSegment()
HAnimSegment1313.setName("l_carpal_middle_phalanx_5")
HAnimSegment1313.setDEF("hanim_l_carpal_middle_phalanx_5")
Transform1314 = x3d.Transform()
Transform1314.setTranslation([0.1938,0.7452,-0.1024])
Transform1315 = x3d.Transform()
#Empty Transform
Shape1316 = x3d.Shape()
Shape1316.setUSE("HAnimJointShape")

Transform1315.addChild(Shape1316)

Transform1314.addChildren(Transform1315)

HAnimSegment1313.addChildren(Transform1314)
Shape1317 = x3d.Shape()
LineSet1318 = x3d.LineSet()
LineSet1318.setVertexCount([2])
Coordinate1319 = x3d.Coordinate()
Coordinate1319.setPoint([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017])

LineSet1318.setCoord(Coordinate1319)
#from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA1320 = x3d.ColorRGBA()
ColorRGBA1320.setUSE("HAnimSegmentLineColorRGBA")

LineSet1318.setColor(ColorRGBA1320)

Shape1317.setGeometry(LineSet1318)

HAnimSegment1313.addChildren(Shape1317)
HAnimSite1321 = x3d.HAnimSite()
HAnimSite1321.setName("l_carpal_distal_phalanx_5_tip")
HAnimSite1321.setDEF("hanim_l_carpal_distal_phalanx_5_tip")
TouchSensor1322 = x3d.TouchSensor()
TouchSensor1322.setDescription("HAnimSite l_carpal_distal_phalanx_5_tip")

HAnimSite1321.addChildren(TouchSensor1322)
Shape1323 = x3d.Shape()
Shape1323.setUSE("HAnimSiteShape")

HAnimSite1321.addChildren(Shape1323)

HAnimSegment1313.addChildren(HAnimSite1321)

HAnimJoint1312.addChildren(HAnimSegment1313)
HAnimJoint1324 = x3d.HAnimJoint()
HAnimJoint1324.setName("l_carpal_distal_interphalangeal_5")
HAnimJoint1324.setDEF("hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint1324.setCenter([0.1948,0.7277,-0.1017])

HAnimJoint1312.addChildren(HAnimJoint1324)

HAnimJoint1303.addChildren(HAnimJoint1312)

HAnimJoint1294.addChildren(HAnimJoint1303)

HAnimJoint1247.addChildren(HAnimJoint1294)

HAnimJoint1106.addChildren(HAnimJoint1247)

HAnimJoint1094.addChildren(HAnimJoint1106)

HAnimJoint1073.addChildren(HAnimJoint1094)

HAnimJoint1058.addChildren(HAnimJoint1073)

HAnimJoint1049.addChildren(HAnimJoint1058)

HAnimJoint845.addChildren(HAnimJoint1049)
HAnimJoint1325 = x3d.HAnimJoint()
HAnimJoint1325.setName("r_sternoclavicular")
HAnimJoint1325.setDEF("hanim_r_sternoclavicular")
HAnimJoint1325.setCenter([-0.0694,1.46,-0.033])
HAnimSegment1326 = x3d.HAnimSegment()
HAnimSegment1326.setName("r_clavicle")
HAnimSegment1326.setDEF("hanim_r_clavicle")
Transform1327 = x3d.Transform()
Transform1327.setTranslation([-0.0694,1.46,-0.033])
Transform1328 = x3d.Transform()
#Empty Transform
Shape1329 = x3d.Shape()
Shape1329.setUSE("HAnimJointShape")

Transform1328.addChild(Shape1329)

Transform1327.addChildren(Transform1328)

HAnimSegment1326.addChildren(Transform1327)
Shape1330 = x3d.Shape()
LineSet1331 = x3d.LineSet()
LineSet1331.setVertexCount([2])
Coordinate1332 = x3d.Coordinate()
Coordinate1332.setPoint([-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401])

LineSet1331.setCoord(Coordinate1332)
#from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA1333 = x3d.ColorRGBA()
ColorRGBA1333.setUSE("HAnimSegmentLineColorRGBA")

LineSet1331.setColor(ColorRGBA1333)

Shape1330.setGeometry(LineSet1331)

HAnimSegment1326.addChildren(Shape1330)

HAnimJoint1325.addChildren(HAnimSegment1326)
HAnimJoint1334 = x3d.HAnimJoint()
HAnimJoint1334.setName("r_acromioclavicular")
HAnimJoint1334.setDEF("hanim_r_acromioclavicular")
HAnimJoint1334.setCenter([-0.0836,1.4281,-0.0401])
HAnimSegment1335 = x3d.HAnimSegment()
HAnimSegment1335.setName("r_scapula")
HAnimSegment1335.setDEF("hanim_r_scapula")
Transform1336 = x3d.Transform()
Transform1336.setTranslation([-0.0836,1.4281,-0.0401])
Transform1337 = x3d.Transform()
#Empty Transform
Shape1338 = x3d.Shape()
Shape1338.setUSE("HAnimJointShape")

Transform1337.addChild(Shape1338)

Transform1336.addChildren(Transform1337)

HAnimSegment1335.addChildren(Transform1336)
Shape1339 = x3d.Shape()
LineSet1340 = x3d.LineSet()
LineSet1340.setVertexCount([2])
Coordinate1341 = x3d.Coordinate()
Coordinate1341.setPoint([-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325])

LineSet1340.setCoord(Coordinate1341)
#from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA1342 = x3d.ColorRGBA()
ColorRGBA1342.setUSE("HAnimSegmentLineColorRGBA")

LineSet1340.setColor(ColorRGBA1342)

Shape1339.setGeometry(LineSet1340)

HAnimSegment1335.addChildren(Shape1339)
HAnimSite1343 = x3d.HAnimSite()
HAnimSite1343.setName("r_bideltoid_pt")
HAnimSite1343.setDEF("hanim_r_bideltoid_pt")
TouchSensor1344 = x3d.TouchSensor()
TouchSensor1344.setDescription("HAnimSite r_bideltoid_pt")

HAnimSite1343.addChildren(TouchSensor1344)
Shape1345 = x3d.Shape()
Shape1345.setUSE("HAnimSiteShape")

HAnimSite1343.addChildren(Shape1345)

HAnimSegment1335.addChildren(HAnimSite1343)
HAnimSite1346 = x3d.HAnimSite()
HAnimSite1346.setName("r_humeral_lateral_epicondyles_pt")
HAnimSite1346.setDEF("hanim_r_humeral_lateral_epicondyles_pt")
HAnimSite1346.setTranslation([-0.2224,1.1517,-0.1033])
TouchSensor1347 = x3d.TouchSensor()
TouchSensor1347.setDescription("HAnimSite r_humeral_lateral_epicondyles_pt")

HAnimSite1346.addChildren(TouchSensor1347)
Shape1348 = x3d.Shape()
Shape1348.setUSE("HAnimSiteShape")

HAnimSite1346.addChildren(Shape1348)

HAnimSegment1335.addChildren(HAnimSite1346)

HAnimJoint1334.addChildren(HAnimSegment1335)
HAnimJoint1349 = x3d.HAnimJoint()
HAnimJoint1349.setName("r_shoulder")
HAnimJoint1349.setDEF("hanim_r_shoulder")
HAnimJoint1349.setCenter([-0.1907,1.4407,-0.0325])
HAnimSegment1350 = x3d.HAnimSegment()
HAnimSegment1350.setName("r_upperarm")
HAnimSegment1350.setDEF("hanim_r_upperarm")
Transform1351 = x3d.Transform()
Transform1351.setTranslation([-0.1907,1.4407,-0.0325])
Transform1352 = x3d.Transform()
#Empty Transform
Shape1353 = x3d.Shape()
Shape1353.setUSE("HAnimJointShape")

Transform1352.addChild(Shape1353)

Transform1351.addChildren(Transform1352)

HAnimSegment1350.addChildren(Transform1351)
Shape1354 = x3d.Shape()
LineSet1355 = x3d.LineSet()
LineSet1355.setVertexCount([2])
Coordinate1356 = x3d.Coordinate()
Coordinate1356.setPoint([-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062])

LineSet1355.setCoord(Coordinate1356)
#from r_shoulder to r_elbow vertices 2
ColorRGBA1357 = x3d.ColorRGBA()
ColorRGBA1357.setUSE("HAnimSegmentLineColorRGBA")

LineSet1355.setColor(ColorRGBA1357)

Shape1354.setGeometry(LineSet1355)

HAnimSegment1350.addChildren(Shape1354)
HAnimSite1358 = x3d.HAnimSite()
HAnimSite1358.setName("r_humeral_medial_epicondyles_pt")
HAnimSite1358.setDEF("hanim_r_humeral_medial_epicondyles_pt")
HAnimSite1358.setTranslation([-0.168,1.1298,-0.1062])
TouchSensor1359 = x3d.TouchSensor()
TouchSensor1359.setDescription("HAnimSite r_humeral_medial_epicondyles_pt")

HAnimSite1358.addChildren(TouchSensor1359)
Shape1360 = x3d.Shape()
Shape1360.setUSE("HAnimSiteShape")

HAnimSite1358.addChildren(Shape1360)

HAnimSegment1350.addChildren(HAnimSite1358)
HAnimSite1361 = x3d.HAnimSite()
HAnimSite1361.setName("r_olecranon_pt")
HAnimSite1361.setDEF("hanim_r_olecranon_pt")
HAnimSite1361.setTranslation([-0.1907,1.1405,-0.1065])
TouchSensor1362 = x3d.TouchSensor()
TouchSensor1362.setDescription("HAnimSite r_olecranon_pt")

HAnimSite1361.addChildren(TouchSensor1362)
Shape1363 = x3d.Shape()
Shape1363.setUSE("HAnimSiteShape")

HAnimSite1361.addChildren(Shape1363)

HAnimSegment1350.addChildren(HAnimSite1361)
HAnimSite1364 = x3d.HAnimSite()
HAnimSite1364.setName("r_radial_styloid_pt")
HAnimSite1364.setDEF("hanim_r_radial_styloid_pt")
HAnimSite1364.setTranslation([-0.1884,0.8676,-0.036])
TouchSensor1365 = x3d.TouchSensor()
TouchSensor1365.setDescription("HAnimSite r_radial_styloid_pt")

HAnimSite1364.addChildren(TouchSensor1365)
Shape1366 = x3d.Shape()
Shape1366.setUSE("HAnimSiteShape")

HAnimSite1364.addChildren(Shape1366)

HAnimSegment1350.addChildren(HAnimSite1364)
HAnimSite1367 = x3d.HAnimSite()
HAnimSite1367.setName("r_radiale_pt")
HAnimSite1367.setDEF("hanim_r_radiale_pt")
HAnimSite1367.setTranslation([-0.213,1.1305,-0.1091])
TouchSensor1368 = x3d.TouchSensor()
TouchSensor1368.setDescription("HAnimSite r_radiale_pt")

HAnimSite1367.addChildren(TouchSensor1368)
Shape1369 = x3d.Shape()
Shape1369.setUSE("HAnimSiteShape")

HAnimSite1367.addChildren(Shape1369)

HAnimSegment1350.addChildren(HAnimSite1367)

HAnimJoint1349.addChildren(HAnimSegment1350)
HAnimJoint1370 = x3d.HAnimJoint()
HAnimJoint1370.setName("r_elbow")
HAnimJoint1370.setDEF("hanim_r_elbow")
HAnimJoint1370.setCenter([-0.1949,1.1388,-0.062])
HAnimSegment1371 = x3d.HAnimSegment()
HAnimSegment1371.setName("r_forearm")
HAnimSegment1371.setDEF("hanim_r_forearm")
Transform1372 = x3d.Transform()
Transform1372.setTranslation([-0.1949,1.1388,-0.062])
Transform1373 = x3d.Transform()
#Empty Transform
Shape1374 = x3d.Shape()
Shape1374.setUSE("HAnimJointShape")

Transform1373.addChild(Shape1374)

Transform1372.addChildren(Transform1373)

HAnimSegment1371.addChildren(Transform1372)
Shape1375 = x3d.Shape()
LineSet1376 = x3d.LineSet()
LineSet1376.setVertexCount([2])
Coordinate1377 = x3d.Coordinate()
Coordinate1377.setPoint([-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521])

LineSet1376.setCoord(Coordinate1377)
#from r_elbow to r_radiocarpal vertices 2
ColorRGBA1378 = x3d.ColorRGBA()
ColorRGBA1378.setUSE("HAnimSegmentLineColorRGBA")

LineSet1376.setColor(ColorRGBA1378)

Shape1375.setGeometry(LineSet1376)

HAnimSegment1371.addChildren(Shape1375)
HAnimSite1379 = x3d.HAnimSite()
HAnimSite1379.setName("r_ulnar_styloid_pt")
HAnimSite1379.setDEF("hanim_r_ulnar_styloid_pt")
HAnimSite1379.setTranslation([-0.2117,0.8562,-0.0584])
TouchSensor1380 = x3d.TouchSensor()
TouchSensor1380.setDescription("HAnimSite r_ulnar_styloid_pt")

HAnimSite1379.addChildren(TouchSensor1380)
Shape1381 = x3d.Shape()
Shape1381.setUSE("HAnimSiteShape")

HAnimSite1379.addChildren(Shape1381)

HAnimSegment1371.addChildren(HAnimSite1379)

HAnimJoint1370.addChildren(HAnimSegment1371)
HAnimJoint1382 = x3d.HAnimJoint()
HAnimJoint1382.setName("r_radiocarpal")
HAnimJoint1382.setDEF("hanim_r_radiocarpal")
HAnimJoint1382.setCenter([-0.1959,0.8694,-0.0521])
HAnimSegment1383 = x3d.HAnimSegment()
HAnimSegment1383.setName("r_carpal")
HAnimSegment1383.setDEF("hanim_r_carpal")
Transform1384 = x3d.Transform()
Transform1384.setScale([0.2,0.2,0.2])
Transform1384.setTranslation([-0.2,0.85,-0.05])
Transform1384.setRotation([0,0,1,-3.14])
#Transform right hand
Transform1385 = x3d.Transform()
Transform1385.setRotation([0,1,0,1.57])
#Transform right hand
Shape1386 = x3d.Shape()
Shape1386.setUSE("HAnimJointShape")

Transform1385.addChild(Shape1386)

Transform1384.addChildren(Transform1385)

HAnimSegment1383.addChildren(Transform1384)
Shape1387 = x3d.Shape()
LineSet1388 = x3d.LineSet()
LineSet1388.setVertexCount([2])
Coordinate1389 = x3d.Coordinate()
Coordinate1389.setPoint([-0.1959,0.8694,-0.0521,-8.0515,0.9213,1.3235])

LineSet1388.setCoord(Coordinate1389)
#from r_radiocarpal to r_midcarpal_1 vertices 2
ColorRGBA1390 = x3d.ColorRGBA()
ColorRGBA1390.setUSE("HAnimSegmentLineColorRGBA")

LineSet1388.setColor(ColorRGBA1390)

Shape1387.setGeometry(LineSet1388)

HAnimSegment1383.addChildren(Shape1387)
Shape1391 = x3d.Shape()
LineSet1392 = x3d.LineSet()
LineSet1392.setVertexCount([2])
Coordinate1393 = x3d.Coordinate()
Coordinate1393.setPoint([-0.1959,0.8694,-0.0521,-8.0515,0.9225,0.8386])

LineSet1392.setCoord(Coordinate1393)
#from r_radiocarpal to r_midcarpal_2 vertices 2
ColorRGBA1394 = x3d.ColorRGBA()
ColorRGBA1394.setUSE("HAnimSegmentLineColorRGBA")

LineSet1392.setColor(ColorRGBA1394)

Shape1391.setGeometry(LineSet1392)

HAnimSegment1383.addChildren(Shape1391)
Shape1395 = x3d.Shape()
LineSet1396 = x3d.LineSet()
LineSet1396.setVertexCount([2])
Coordinate1397 = x3d.Coordinate()
Coordinate1397.setPoint([-0.1959,0.8694,-0.0521,-8.0405,0.9246,0.2513])

LineSet1396.setCoord(Coordinate1397)
#from r_radiocarpal to r_midcarpal_3 vertices 2
ColorRGBA1398 = x3d.ColorRGBA()
ColorRGBA1398.setUSE("HAnimSegmentLineColorRGBA")

LineSet1396.setColor(ColorRGBA1398)

Shape1395.setGeometry(LineSet1396)

HAnimSegment1383.addChildren(Shape1395)
Shape1399 = x3d.Shape()
LineSet1400 = x3d.LineSet()
LineSet1400.setVertexCount([2])
Coordinate1401 = x3d.Coordinate()
Coordinate1401.setPoint([-0.1959,0.8694,-0.0521,-8.0405,0.921,-0.6795])

LineSet1400.setCoord(Coordinate1401)
#from r_radiocarpal to r_midcarpal_4_5 vertices 2
ColorRGBA1402 = x3d.ColorRGBA()
ColorRGBA1402.setUSE("HAnimSegmentLineColorRGBA")

LineSet1400.setColor(ColorRGBA1402)

Shape1399.setGeometry(LineSet1400)

HAnimSegment1383.addChildren(Shape1399)

HAnimJoint1382.addChildren(HAnimSegment1383)
HAnimJoint1403 = x3d.HAnimJoint()
HAnimJoint1403.setName("r_midcarpal_1")
HAnimJoint1403.setDEF("hanim_r_midcarpal_1")
HAnimJoint1403.setCenter([-8.0515,0.9213,1.3235])
HAnimSegment1404 = x3d.HAnimSegment()
HAnimSegment1404.setName("r_trapezium")
HAnimSegment1404.setDEF("hanim_r_trapezium")
Transform1405 = x3d.Transform()
Transform1405.setTranslation([-8.0515,0.9213,1.3235])
Transform1406 = x3d.Transform()
#Empty Transform
Shape1407 = x3d.Shape()
Shape1407.setUSE("HAnimJointShape")

Transform1406.addChild(Shape1407)

Transform1405.addChildren(Transform1406)

HAnimSegment1404.addChildren(Transform1405)
Shape1408 = x3d.Shape()
LineSet1409 = x3d.LineSet()
LineSet1409.setVertexCount([2])
Coordinate1410 = x3d.Coordinate()
Coordinate1410.setPoint([-8.0515,0.9213,1.3235,-0.1899,0.8502,-0.0473])

LineSet1409.setCoord(Coordinate1410)
#from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
ColorRGBA1411 = x3d.ColorRGBA()
ColorRGBA1411.setUSE("HAnimSegmentLineColorRGBA")

LineSet1409.setColor(ColorRGBA1411)

Shape1408.setGeometry(LineSet1409)

HAnimSegment1404.addChildren(Shape1408)

HAnimJoint1403.addChildren(HAnimSegment1404)
HAnimJoint1412 = x3d.HAnimJoint()
HAnimJoint1412.setName("r_carpometacarpal_1")
HAnimJoint1412.setDEF("hanim_r_carpometacarpal_1")
HAnimJoint1412.setCenter([-0.1899,0.8502,-0.0473])
HAnimSegment1413 = x3d.HAnimSegment()
HAnimSegment1413.setName("r_metacarpal_1")
HAnimSegment1413.setDEF("hanim_r_metacarpal_1")
Transform1414 = x3d.Transform()
Transform1414.setTranslation([-0.1899,0.8502,-0.0473])
Transform1415 = x3d.Transform()
#Empty Transform
Shape1416 = x3d.Shape()
Shape1416.setUSE("HAnimJointShape")

Transform1415.addChild(Shape1416)

Transform1414.addChildren(Transform1415)

HAnimSegment1413.addChildren(Transform1414)
Shape1417 = x3d.Shape()
LineSet1418 = x3d.LineSet()
LineSet1418.setVertexCount([2])
Coordinate1419 = x3d.Coordinate()
Coordinate1419.setPoint([-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306])

LineSet1418.setCoord(Coordinate1419)
#from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA1420 = x3d.ColorRGBA()
ColorRGBA1420.setUSE("HAnimSegmentLineColorRGBA")

LineSet1418.setColor(ColorRGBA1420)

Shape1417.setGeometry(LineSet1418)

HAnimSegment1413.addChildren(Shape1417)

HAnimJoint1412.addChildren(HAnimSegment1413)
HAnimJoint1421 = x3d.HAnimJoint()
HAnimJoint1421.setName("r_metacarpophalangeal_1")
HAnimJoint1421.setDEF("hanim_r_metacarpophalangeal_1")
HAnimJoint1421.setCenter([-0.1874,0.8256,0.0306])
HAnimSegment1422 = x3d.HAnimSegment()
HAnimSegment1422.setName("r_carpal_proximal_phalanx_1")
HAnimSegment1422.setDEF("hanim_r_carpal_proximal_phalanx_1")
Transform1423 = x3d.Transform()
Transform1423.setTranslation([-0.1874,0.8256,0.0306])
Transform1424 = x3d.Transform()
#Empty Transform
Shape1425 = x3d.Shape()
Shape1425.setUSE("HAnimJointShape")

Transform1424.addChild(Shape1425)

Transform1423.addChildren(Transform1424)

HAnimSegment1422.addChildren(Transform1423)
Shape1426 = x3d.Shape()
LineSet1427 = x3d.LineSet()
LineSet1427.setVertexCount([2])
Coordinate1428 = x3d.Coordinate()
Coordinate1428.setPoint([-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506])

LineSet1427.setCoord(Coordinate1428)
#from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA1429 = x3d.ColorRGBA()
ColorRGBA1429.setUSE("HAnimSegmentLineColorRGBA")

LineSet1427.setColor(ColorRGBA1429)

Shape1426.setGeometry(LineSet1427)

HAnimSegment1422.addChildren(Shape1426)
HAnimSite1430 = x3d.HAnimSite()
HAnimSite1430.setName("r_carpal_distal_phalanx_1_tip")
HAnimSite1430.setDEF("hanim_r_carpal_distal_phalanx_1_tip")
TouchSensor1431 = x3d.TouchSensor()
TouchSensor1431.setDescription("HAnimSite r_carpal_distal_phalanx_1_tip")

HAnimSite1430.addChildren(TouchSensor1431)
Shape1432 = x3d.Shape()
Shape1432.setUSE("HAnimSiteShape")

HAnimSite1430.addChildren(Shape1432)

HAnimSegment1422.addChildren(HAnimSite1430)

HAnimJoint1421.addChildren(HAnimSegment1422)
HAnimJoint1433 = x3d.HAnimJoint()
HAnimJoint1433.setName("r_carpal_interphalangeal_1")
HAnimJoint1433.setDEF("hanim_r_carpal_interphalangeal_1")
HAnimJoint1433.setCenter([-0.1864,0.819,0.0506])

HAnimJoint1421.addChildren(HAnimJoint1433)

HAnimJoint1412.addChildren(HAnimJoint1421)

HAnimJoint1403.addChildren(HAnimJoint1412)

HAnimJoint1382.addChildren(HAnimJoint1403)
HAnimJoint1434 = x3d.HAnimJoint()
HAnimJoint1434.setName("r_midcarpal_2")
HAnimJoint1434.setDEF("hanim_r_midcarpal_2")
HAnimJoint1434.setCenter([-8.0515,0.9225,0.8386])
HAnimSegment1435 = x3d.HAnimSegment()
HAnimSegment1435.setName("r_trapezoid")
HAnimSegment1435.setDEF("hanim_r_trapezoid")
Transform1436 = x3d.Transform()
Transform1436.setTranslation([-8.0515,0.9225,0.8386])
Transform1437 = x3d.Transform()
#Empty Transform
Shape1438 = x3d.Shape()
Shape1438.setUSE("HAnimJointShape")

Transform1437.addChild(Shape1438)

Transform1436.addChildren(Transform1437)

HAnimSegment1435.addChildren(Transform1436)
Shape1439 = x3d.Shape()
LineSet1440 = x3d.LineSet()
LineSet1440.setVertexCount([2])
Coordinate1441 = x3d.Coordinate()
Coordinate1441.setPoint([-8.0515,0.9225,0.8386,-0.1961,0.8055,-0.0218])

LineSet1440.setCoord(Coordinate1441)
#from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
ColorRGBA1442 = x3d.ColorRGBA()
ColorRGBA1442.setUSE("HAnimSegmentLineColorRGBA")

LineSet1440.setColor(ColorRGBA1442)

Shape1439.setGeometry(LineSet1440)

HAnimSegment1435.addChildren(Shape1439)
HAnimSite1443 = x3d.HAnimSite()
HAnimSite1443.setName("r_metacarpal_phalanx_2_pt")
HAnimSite1443.setDEF("hanim_r_metacarpal_phalanx_2_pt")
HAnimSite1443.setTranslation([-0.1977,0.8169,-0.0177])
TouchSensor1444 = x3d.TouchSensor()
TouchSensor1444.setDescription("HAnimSite r_metacarpal_phalanx_2_pt")

HAnimSite1443.addChildren(TouchSensor1444)
Shape1445 = x3d.Shape()
Shape1445.setUSE("HAnimSiteShape")

HAnimSite1443.addChildren(Shape1445)

HAnimSegment1435.addChildren(HAnimSite1443)

HAnimJoint1434.addChildren(HAnimSegment1435)
HAnimJoint1446 = x3d.HAnimJoint()
HAnimJoint1446.setName("r_carpometacarpal_2")
HAnimJoint1446.setDEF("hanim_r_carpometacarpal_2")
HAnimJoint1446.setCenter([-0.1961,0.8055,-0.0218])
HAnimSegment1447 = x3d.HAnimSegment()
HAnimSegment1447.setName("r_metacarpal_2")
HAnimSegment1447.setDEF("hanim_r_metacarpal_2")
Transform1448 = x3d.Transform()
Transform1448.setTranslation([-0.1961,0.8055,-0.0218])
Transform1449 = x3d.Transform()
#Empty Transform
Shape1450 = x3d.Shape()
Shape1450.setUSE("HAnimJointShape")

Transform1449.addChild(Shape1450)

Transform1448.addChildren(Transform1449)

HAnimSegment1447.addChildren(Transform1448)
Shape1451 = x3d.Shape()
LineSet1452 = x3d.LineSet()
LineSet1452.setVertexCount([2])
Coordinate1453 = x3d.Coordinate()
Coordinate1453.setPoint([-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218])

LineSet1452.setCoord(Coordinate1453)
#from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA1454 = x3d.ColorRGBA()
ColorRGBA1454.setUSE("HAnimSegmentLineColorRGBA")

LineSet1452.setColor(ColorRGBA1454)

Shape1451.setGeometry(LineSet1452)

HAnimSegment1447.addChildren(Shape1451)

HAnimJoint1446.addChildren(HAnimSegment1447)
HAnimJoint1455 = x3d.HAnimJoint()
HAnimJoint1455.setName("r_metacarpophalangeal_2")
HAnimJoint1455.setDEF("hanim_r_metacarpophalangeal_2")
HAnimJoint1455.setCenter([-0.1961,0.7846,-0.0218])
HAnimSegment1456 = x3d.HAnimSegment()
HAnimSegment1456.setName("r_carpal_proximal_phalanx_2")
HAnimSegment1456.setDEF("hanim_r_carpal_proximal_phalanx_2")
Transform1457 = x3d.Transform()
Transform1457.setTranslation([-0.1961,0.7846,-0.0218])
Transform1458 = x3d.Transform()
#Empty Transform
Shape1459 = x3d.Shape()
Shape1459.setUSE("HAnimJointShape")

Transform1458.addChild(Shape1459)

Transform1457.addChildren(Transform1458)

HAnimSegment1456.addChildren(Transform1457)
Shape1460 = x3d.Shape()
LineSet1461 = x3d.LineSet()
LineSet1461.setVertexCount([2])
Coordinate1462 = x3d.Coordinate()
Coordinate1462.setPoint([-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185])

LineSet1461.setCoord(Coordinate1462)
#from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA1463 = x3d.ColorRGBA()
ColorRGBA1463.setUSE("HAnimSegmentLineColorRGBA")

LineSet1461.setColor(ColorRGBA1463)

Shape1460.setGeometry(LineSet1461)

HAnimSegment1456.addChildren(Shape1460)

HAnimJoint1455.addChildren(HAnimSegment1456)
HAnimJoint1464 = x3d.HAnimJoint()
HAnimJoint1464.setName("r_carpal_proximal_interphalangeal_2")
HAnimJoint1464.setDEF("hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint1464.setCenter([-0.1954,0.7393,-0.0185])
HAnimSegment1465 = x3d.HAnimSegment()
HAnimSegment1465.setName("r_carpal_middle_phalanx_2")
HAnimSegment1465.setDEF("hanim_r_carpal_middle_phalanx_2")
Transform1466 = x3d.Transform()
Transform1466.setTranslation([-0.1954,0.7393,-0.0185])
Transform1467 = x3d.Transform()
#Empty Transform
Shape1468 = x3d.Shape()
Shape1468.setUSE("HAnimJointShape")

Transform1467.addChild(Shape1468)

Transform1466.addChildren(Transform1467)

HAnimSegment1465.addChildren(Transform1466)
Shape1469 = x3d.Shape()
LineSet1470 = x3d.LineSet()
LineSet1470.setVertexCount([2])
Coordinate1471 = x3d.Coordinate()
Coordinate1471.setPoint([-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173])

LineSet1470.setCoord(Coordinate1471)
#from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA1472 = x3d.ColorRGBA()
ColorRGBA1472.setUSE("HAnimSegmentLineColorRGBA")

LineSet1470.setColor(ColorRGBA1472)

Shape1469.setGeometry(LineSet1470)

HAnimSegment1465.addChildren(Shape1469)
HAnimSite1473 = x3d.HAnimSite()
HAnimSite1473.setName("r_carpal_distal_phalanx_2_tip")
HAnimSite1473.setDEF("hanim_r_carpal_distal_phalanx_2_tip")
TouchSensor1474 = x3d.TouchSensor()
TouchSensor1474.setDescription("HAnimSite r_carpal_distal_phalanx_2_tip")

HAnimSite1473.addChildren(TouchSensor1474)
Shape1475 = x3d.Shape()
Shape1475.setUSE("HAnimSiteShape")

HAnimSite1473.addChildren(Shape1475)

HAnimSegment1465.addChildren(HAnimSite1473)
HAnimSite1476 = x3d.HAnimSite()
HAnimSite1476.setName("r_dactylion_pt")
HAnimSite1476.setDEF("hanim_r_dactylion_pt")
HAnimSite1476.setTranslation([-0.1941,0.6772,-0.0423])
TouchSensor1477 = x3d.TouchSensor()
TouchSensor1477.setDescription("HAnimSite r_dactylion_pt")

HAnimSite1476.addChildren(TouchSensor1477)
Shape1478 = x3d.Shape()
Shape1478.setUSE("HAnimSiteShape")

HAnimSite1476.addChildren(Shape1478)

HAnimSegment1465.addChildren(HAnimSite1476)

HAnimJoint1464.addChildren(HAnimSegment1465)
HAnimJoint1479 = x3d.HAnimJoint()
HAnimJoint1479.setName("r_carpal_distal_interphalangeal_2")
HAnimJoint1479.setDEF("hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint1479.setCenter([-0.1945,0.7169,-0.0173])

HAnimJoint1464.addChildren(HAnimJoint1479)

HAnimJoint1455.addChildren(HAnimJoint1464)

HAnimJoint1446.addChildren(HAnimJoint1455)

HAnimJoint1434.addChildren(HAnimJoint1446)

HAnimJoint1382.addChildren(HAnimJoint1434)
HAnimJoint1480 = x3d.HAnimJoint()
HAnimJoint1480.setName("r_midcarpal_3")
HAnimJoint1480.setDEF("hanim_r_midcarpal_3")
HAnimJoint1480.setCenter([-8.0405,0.9246,0.2513])
HAnimSegment1481 = x3d.HAnimSegment()
HAnimSegment1481.setName("r_capitate")
HAnimSegment1481.setDEF("hanim_r_capitate")
Transform1482 = x3d.Transform()
Transform1482.setTranslation([-8.0405,0.9246,0.2513])
Transform1483 = x3d.Transform()
#Empty Transform
Shape1484 = x3d.Shape()
Shape1484.setUSE("HAnimJointShape")

Transform1483.addChild(Shape1484)

Transform1482.addChildren(Transform1483)

HAnimSegment1481.addChildren(Transform1482)
Shape1485 = x3d.Shape()
LineSet1486 = x3d.LineSet()
LineSet1486.setVertexCount([2])
Coordinate1487 = x3d.Coordinate()
Coordinate1487.setPoint([-8.0405,0.9246,0.2513,-0.1972,0.806,-0.0468])

LineSet1486.setCoord(Coordinate1487)
#from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
ColorRGBA1488 = x3d.ColorRGBA()
ColorRGBA1488.setUSE("HAnimSegmentLineColorRGBA")

LineSet1486.setColor(ColorRGBA1488)

Shape1485.setGeometry(LineSet1486)

HAnimSegment1481.addChildren(Shape1485)
HAnimSite1489 = x3d.HAnimSite()
HAnimSite1489.setName("r_metacarpal_phalanx_3_pt")
HAnimSite1489.setDEF("hanim_r_metacarpal_phalanx_3_pt")
TouchSensor1490 = x3d.TouchSensor()
TouchSensor1490.setDescription("HAnimSite r_metacarpal_phalanx_3_pt")

HAnimSite1489.addChildren(TouchSensor1490)
Shape1491 = x3d.Shape()
Shape1491.setUSE("HAnimSiteShape")

HAnimSite1489.addChildren(Shape1491)

HAnimSegment1481.addChildren(HAnimSite1489)

HAnimJoint1480.addChildren(HAnimSegment1481)
HAnimJoint1492 = x3d.HAnimJoint()
HAnimJoint1492.setName("r_carpometacarpal_3")
HAnimJoint1492.setDEF("hanim_r_carpometacarpal_3")
HAnimJoint1492.setCenter([-0.1972,0.806,-0.0468])
HAnimSegment1493 = x3d.HAnimSegment()
HAnimSegment1493.setName("r_metacarpal_3")
HAnimSegment1493.setDEF("hanim_r_metacarpal_3")
Transform1494 = x3d.Transform()
Transform1494.setTranslation([-0.1972,0.806,-0.0468])
Transform1495 = x3d.Transform()
#Empty Transform
Shape1496 = x3d.Shape()
Shape1496.setUSE("HAnimJointShape")

Transform1495.addChild(Shape1496)

Transform1494.addChildren(Transform1495)

HAnimSegment1493.addChildren(Transform1494)
Shape1497 = x3d.Shape()
LineSet1498 = x3d.LineSet()
LineSet1498.setVertexCount([2])
Coordinate1499 = x3d.Coordinate()
Coordinate1499.setPoint([-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468])

LineSet1498.setCoord(Coordinate1499)
#from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA1500 = x3d.ColorRGBA()
ColorRGBA1500.setUSE("HAnimSegmentLineColorRGBA")

LineSet1498.setColor(ColorRGBA1500)

Shape1497.setGeometry(LineSet1498)

HAnimSegment1493.addChildren(Shape1497)

HAnimJoint1492.addChildren(HAnimSegment1493)
HAnimJoint1501 = x3d.HAnimJoint()
HAnimJoint1501.setName("r_metacarpophalangeal_3")
HAnimJoint1501.setDEF("hanim_r_metacarpophalangeal_3")
HAnimJoint1501.setCenter([-0.1972,0.7849,-0.0468])
HAnimSegment1502 = x3d.HAnimSegment()
HAnimSegment1502.setName("r_carpal_proximal_phalanx_3")
HAnimSegment1502.setDEF("hanim_r_carpal_proximal_phalanx_3")
Transform1503 = x3d.Transform()
Transform1503.setTranslation([-0.1972,0.7849,-0.0468])
Transform1504 = x3d.Transform()
#Empty Transform
Shape1505 = x3d.Shape()
Shape1505.setUSE("HAnimJointShape")

Transform1504.addChild(Shape1505)

Transform1503.addChildren(Transform1504)

HAnimSegment1502.addChildren(Transform1503)
Shape1506 = x3d.Shape()
LineSet1507 = x3d.LineSet()
LineSet1507.setVertexCount([2])
Coordinate1508 = x3d.Coordinate()
Coordinate1508.setPoint([-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441])

LineSet1507.setCoord(Coordinate1508)
#from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA1509 = x3d.ColorRGBA()
ColorRGBA1509.setUSE("HAnimSegmentLineColorRGBA")

LineSet1507.setColor(ColorRGBA1509)

Shape1506.setGeometry(LineSet1507)

HAnimSegment1502.addChildren(Shape1506)

HAnimJoint1501.addChildren(HAnimSegment1502)
HAnimJoint1510 = x3d.HAnimJoint()
HAnimJoint1510.setName("r_carpal_proximal_interphalangeal_3")
HAnimJoint1510.setDEF("hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint1510.setCenter([-0.195,0.7304,-0.0441])
HAnimSegment1511 = x3d.HAnimSegment()
HAnimSegment1511.setName("r_carpal_middle_phalanx_3")
HAnimSegment1511.setDEF("hanim_r_carpal_middle_phalanx_3")
Transform1512 = x3d.Transform()
Transform1512.setTranslation([-0.195,0.7304,-0.0441])
Transform1513 = x3d.Transform()
#Empty Transform
Shape1514 = x3d.Shape()
Shape1514.setUSE("HAnimJointShape")

Transform1513.addChild(Shape1514)

Transform1512.addChildren(Transform1513)

HAnimSegment1511.addChildren(Transform1512)
Shape1515 = x3d.Shape()
LineSet1516 = x3d.LineSet()
LineSet1516.setVertexCount([2])
Coordinate1517 = x3d.Coordinate()
Coordinate1517.setPoint([-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432])

LineSet1516.setCoord(Coordinate1517)
#from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA1518 = x3d.ColorRGBA()
ColorRGBA1518.setUSE("HAnimSegmentLineColorRGBA")

LineSet1516.setColor(ColorRGBA1518)

Shape1515.setGeometry(LineSet1516)

HAnimSegment1511.addChildren(Shape1515)
HAnimSite1519 = x3d.HAnimSite()
HAnimSite1519.setName("r_carpal_distal_phalanx_3_tip")
HAnimSite1519.setDEF("hanim_r_carpal_distal_phalanx_3_tip")
TouchSensor1520 = x3d.TouchSensor()
TouchSensor1520.setDescription("HAnimSite r_carpal_distal_phalanx_3_tip")

HAnimSite1519.addChildren(TouchSensor1520)
Shape1521 = x3d.Shape()
Shape1521.setUSE("HAnimSiteShape")

HAnimSite1519.addChildren(Shape1521)

HAnimSegment1511.addChildren(HAnimSite1519)

HAnimJoint1510.addChildren(HAnimSegment1511)
HAnimJoint1522 = x3d.HAnimJoint()
HAnimJoint1522.setName("r_carpal_distal_interphalangeal_3")
HAnimJoint1522.setDEF("hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint1522.setCenter([-0.1939,0.7042,-0.0432])

HAnimJoint1510.addChildren(HAnimJoint1522)

HAnimJoint1501.addChildren(HAnimJoint1510)

HAnimJoint1492.addChildren(HAnimJoint1501)

HAnimJoint1480.addChildren(HAnimJoint1492)

HAnimJoint1382.addChildren(HAnimJoint1480)
HAnimJoint1523 = x3d.HAnimJoint()
HAnimJoint1523.setName("r_midcarpal_4_5")
HAnimJoint1523.setDEF("hanim_r_midcarpal_4_5")
HAnimJoint1523.setCenter([-8.0405,0.921,-0.6795])
HAnimSegment1524 = x3d.HAnimSegment()
HAnimSegment1524.setName("r_hamate")
HAnimSegment1524.setDEF("hanim_r_hamate")
Transform1525 = x3d.Transform()
Transform1525.setTranslation([-8.0405,0.921,-0.6795])
Transform1526 = x3d.Transform()
#Empty Transform
Shape1527 = x3d.Shape()
Shape1527.setUSE("HAnimJointShape")

Transform1526.addChild(Shape1527)

Transform1525.addChildren(Transform1526)

HAnimSegment1524.addChildren(Transform1525)
Shape1528 = x3d.Shape()
LineSet1529 = x3d.LineSet()
LineSet1529.setVertexCount([2])
Coordinate1530 = x3d.Coordinate()
Coordinate1530.setPoint([-8.0405,0.921,-0.6795,-0.1951,0.8049,-0.0732])

LineSet1529.setCoord(Coordinate1530)
#from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
ColorRGBA1531 = x3d.ColorRGBA()
ColorRGBA1531.setUSE("HAnimSegmentLineColorRGBA")

LineSet1529.setColor(ColorRGBA1531)

Shape1528.setGeometry(LineSet1529)

HAnimSegment1524.addChildren(Shape1528)
Shape1532 = x3d.Shape()
LineSet1533 = x3d.LineSet()
LineSet1533.setVertexCount([2])
Coordinate1534 = x3d.Coordinate()
Coordinate1534.setPoint([-8.0405,0.921,-0.6795,-0.1926,0.8096,-0.0975])

LineSet1533.setCoord(Coordinate1534)
#from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
ColorRGBA1535 = x3d.ColorRGBA()
ColorRGBA1535.setUSE("HAnimSegmentLineColorRGBA")

LineSet1533.setColor(ColorRGBA1535)

Shape1532.setGeometry(LineSet1533)

HAnimSegment1524.addChildren(Shape1532)
HAnimSite1536 = x3d.HAnimSite()
HAnimSite1536.setName("r_metacarpal_phalanx_5_pt")
HAnimSite1536.setDEF("hanim_r_metacarpal_phalanx_5_pt")
HAnimSite1536.setTranslation([-0.1929,0.789,-0.1064])
TouchSensor1537 = x3d.TouchSensor()
TouchSensor1537.setDescription("HAnimSite r_metacarpal_phalanx_5_pt")

HAnimSite1536.addChildren(TouchSensor1537)
Shape1538 = x3d.Shape()
Shape1538.setUSE("HAnimSiteShape")

HAnimSite1536.addChildren(Shape1538)

HAnimSegment1524.addChildren(HAnimSite1536)

HAnimJoint1523.addChildren(HAnimSegment1524)
HAnimJoint1539 = x3d.HAnimJoint()
HAnimJoint1539.setName("r_carpometacarpal_4")
HAnimJoint1539.setDEF("hanim_r_carpometacarpal_4")
HAnimJoint1539.setCenter([-0.1951,0.8049,-0.0732])
HAnimSegment1540 = x3d.HAnimSegment()
HAnimSegment1540.setName("r_metacarpal_4")
HAnimSegment1540.setDEF("hanim_r_metacarpal_4")
Transform1541 = x3d.Transform()
Transform1541.setTranslation([-0.1951,0.8049,-0.0732])
Transform1542 = x3d.Transform()
#Empty Transform
Shape1543 = x3d.Shape()
Shape1543.setUSE("HAnimJointShape")

Transform1542.addChild(Shape1543)

Transform1541.addChildren(Transform1542)

HAnimSegment1540.addChildren(Transform1541)
Shape1544 = x3d.Shape()
LineSet1545 = x3d.LineSet()
LineSet1545.setVertexCount([2])
Coordinate1546 = x3d.Coordinate()
Coordinate1546.setPoint([-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732])

LineSet1545.setCoord(Coordinate1546)
#from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA1547 = x3d.ColorRGBA()
ColorRGBA1547.setUSE("HAnimSegmentLineColorRGBA")

LineSet1545.setColor(ColorRGBA1547)

Shape1544.setGeometry(LineSet1545)

HAnimSegment1540.addChildren(Shape1544)

HAnimJoint1539.addChildren(HAnimSegment1540)
HAnimJoint1548 = x3d.HAnimJoint()
HAnimJoint1548.setName("r_metacarpophalangeal_4")
HAnimJoint1548.setDEF("hanim_r_metacarpophalangeal_4")
HAnimJoint1548.setCenter([-0.1951,0.7845,-0.0732])
HAnimSegment1549 = x3d.HAnimSegment()
HAnimSegment1549.setName("r_carpal_proximal_phalanx_4")
HAnimSegment1549.setDEF("hanim_r_carpal_proximal_phalanx_4")
Transform1550 = x3d.Transform()
Transform1550.setTranslation([-0.1951,0.7845,-0.0732])
Transform1551 = x3d.Transform()
#Empty Transform
Shape1552 = x3d.Shape()
Shape1552.setUSE("HAnimJointShape")

Transform1551.addChild(Shape1552)

Transform1550.addChildren(Transform1551)

HAnimSegment1549.addChildren(Transform1550)
Shape1553 = x3d.Shape()
LineSet1554 = x3d.LineSet()
LineSet1554.setVertexCount([2])
Coordinate1555 = x3d.Coordinate()
Coordinate1555.setPoint([-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716])

LineSet1554.setCoord(Coordinate1555)
#from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA1556 = x3d.ColorRGBA()
ColorRGBA1556.setUSE("HAnimSegmentLineColorRGBA")

LineSet1554.setColor(ColorRGBA1556)

Shape1553.setGeometry(LineSet1554)

HAnimSegment1549.addChildren(Shape1553)

HAnimJoint1548.addChildren(HAnimSegment1549)
HAnimJoint1557 = x3d.HAnimJoint()
HAnimJoint1557.setName("r_carpal_proximal_interphalangeal_4")
HAnimJoint1557.setDEF("hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint1557.setCenter([-0.192,0.7318,-0.0716])
HAnimSegment1558 = x3d.HAnimSegment()
HAnimSegment1558.setName("r_carpal_middle_phalanx_4")
HAnimSegment1558.setDEF("hanim_r_carpal_middle_phalanx_4")
Transform1559 = x3d.Transform()
Transform1559.setTranslation([-0.192,0.7318,-0.0716])
Transform1560 = x3d.Transform()
#Empty Transform
Shape1561 = x3d.Shape()
Shape1561.setUSE("HAnimJointShape")

Transform1560.addChild(Shape1561)

Transform1559.addChildren(Transform1560)

HAnimSegment1558.addChildren(Transform1559)
Shape1562 = x3d.Shape()
LineSet1563 = x3d.LineSet()
LineSet1563.setVertexCount([2])
Coordinate1564 = x3d.Coordinate()
Coordinate1564.setPoint([-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706])

LineSet1563.setCoord(Coordinate1564)
#from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA1565 = x3d.ColorRGBA()
ColorRGBA1565.setUSE("HAnimSegmentLineColorRGBA")

LineSet1563.setColor(ColorRGBA1565)

Shape1562.setGeometry(LineSet1563)

HAnimSegment1558.addChildren(Shape1562)
HAnimSite1566 = x3d.HAnimSite()
HAnimSite1566.setName("r_carpal_distal_phalanx_4_tip")
HAnimSite1566.setDEF("hanim_r_carpal_distal_phalanx_4_tip")
TouchSensor1567 = x3d.TouchSensor()
TouchSensor1567.setDescription("HAnimSite r_carpal_distal_phalanx_4_tip")

HAnimSite1566.addChildren(TouchSensor1567)
Shape1568 = x3d.Shape()
Shape1568.setUSE("HAnimSiteShape")

HAnimSite1566.addChildren(Shape1568)

HAnimSegment1558.addChildren(HAnimSite1566)

HAnimJoint1557.addChildren(HAnimSegment1558)
HAnimJoint1569 = x3d.HAnimJoint()
HAnimJoint1569.setName("r_carpal_distal_interphalangeal_4")
HAnimJoint1569.setDEF("hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint1569.setCenter([-0.1908,0.7077,-0.0706])

HAnimJoint1557.addChildren(HAnimJoint1569)

HAnimJoint1548.addChildren(HAnimJoint1557)

HAnimJoint1539.addChildren(HAnimJoint1548)

HAnimJoint1523.addChildren(HAnimJoint1539)
HAnimJoint1570 = x3d.HAnimJoint()
HAnimJoint1570.setName("r_carpometacarpal_5")
HAnimJoint1570.setDEF("hanim_r_carpometacarpal_5")
HAnimJoint1570.setCenter([-0.1926,0.8096,-0.0975])
HAnimSegment1571 = x3d.HAnimSegment()
HAnimSegment1571.setName("r_metacarpal_5")
HAnimSegment1571.setDEF("hanim_r_metacarpal_5")
Transform1572 = x3d.Transform()
Transform1572.setTranslation([-0.1926,0.8096,-0.0975])
Transform1573 = x3d.Transform()
#Empty Transform
Shape1574 = x3d.Shape()
Shape1574.setUSE("HAnimJointShape")

Transform1573.addChild(Shape1574)

Transform1572.addChildren(Transform1573)

HAnimSegment1571.addChildren(Transform1572)
Shape1575 = x3d.Shape()
LineSet1576 = x3d.LineSet()
LineSet1576.setVertexCount([2])
Coordinate1577 = x3d.Coordinate()
Coordinate1577.setPoint([-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975])

LineSet1576.setCoord(Coordinate1577)
#from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA1578 = x3d.ColorRGBA()
ColorRGBA1578.setUSE("HAnimSegmentLineColorRGBA")

LineSet1576.setColor(ColorRGBA1578)

Shape1575.setGeometry(LineSet1576)

HAnimSegment1571.addChildren(Shape1575)

HAnimJoint1570.addChildren(HAnimSegment1571)
HAnimJoint1579 = x3d.HAnimJoint()
HAnimJoint1579.setName("r_metacarpophalangeal_5")
HAnimJoint1579.setDEF("hanim_r_metacarpophalangeal_5")
HAnimJoint1579.setCenter([-0.1926,0.7896,-0.0975])
HAnimSegment1580 = x3d.HAnimSegment()
HAnimSegment1580.setName("r_carpal_proximal_phalanx_5")
HAnimSegment1580.setDEF("hanim_r_carpal_proximal_phalanx_5")
Transform1581 = x3d.Transform()
Transform1581.setTranslation([-0.1926,0.7896,-0.0975])
Transform1582 = x3d.Transform()
#Empty Transform
Shape1583 = x3d.Shape()
Shape1583.setUSE("HAnimJointShape")

Transform1582.addChild(Shape1583)

Transform1581.addChildren(Transform1582)

HAnimSegment1580.addChildren(Transform1581)
Shape1584 = x3d.Shape()
LineSet1585 = x3d.LineSet()
LineSet1585.setVertexCount([2])
Coordinate1586 = x3d.Coordinate()
Coordinate1586.setPoint([-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963])

LineSet1585.setCoord(Coordinate1586)
#from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA1587 = x3d.ColorRGBA()
ColorRGBA1587.setUSE("HAnimSegmentLineColorRGBA")

LineSet1585.setColor(ColorRGBA1587)

Shape1584.setGeometry(LineSet1585)

HAnimSegment1580.addChildren(Shape1584)

HAnimJoint1579.addChildren(HAnimSegment1580)
HAnimJoint1588 = x3d.HAnimJoint()
HAnimJoint1588.setName("r_carpal_proximal_interphalangeal_5")
HAnimJoint1588.setDEF("hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint1588.setCenter([-0.1902,0.7483,-0.0963])
HAnimSegment1589 = x3d.HAnimSegment()
HAnimSegment1589.setName("r_carpal_middle_phalanx_5")
HAnimSegment1589.setDEF("hanim_r_carpal_middle_phalanx_5")
Transform1590 = x3d.Transform()
Transform1590.setTranslation([-0.1902,0.7483,-0.0963])
Transform1591 = x3d.Transform()
#Empty Transform
Shape1592 = x3d.Shape()
Shape1592.setUSE("HAnimJointShape")

Transform1591.addChild(Shape1592)

Transform1590.addChildren(Transform1591)

HAnimSegment1589.addChildren(Transform1590)
Shape1593 = x3d.Shape()
LineSet1594 = x3d.LineSet()
LineSet1594.setVertexCount([2])
Coordinate1595 = x3d.Coordinate()
Coordinate1595.setPoint([-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096])

LineSet1594.setCoord(Coordinate1595)
#from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA1596 = x3d.ColorRGBA()
ColorRGBA1596.setUSE("HAnimSegmentLineColorRGBA")

LineSet1594.setColor(ColorRGBA1596)

Shape1593.setGeometry(LineSet1594)

HAnimSegment1589.addChildren(Shape1593)
HAnimSite1597 = x3d.HAnimSite()
HAnimSite1597.setName("r_carpal_distal_phalanx_5_tip")
HAnimSite1597.setDEF("hanim_r_carpal_distal_phalanx_5_tip")
TouchSensor1598 = x3d.TouchSensor()
TouchSensor1598.setDescription("HAnimSite r_carpal_distal_phalanx_5_tip")

HAnimSite1597.addChildren(TouchSensor1598)
Shape1599 = x3d.Shape()
Shape1599.setUSE("HAnimSiteShape")

HAnimSite1597.addChildren(Shape1599)

HAnimSegment1589.addChildren(HAnimSite1597)

HAnimJoint1588.addChildren(HAnimSegment1589)
HAnimJoint1600 = x3d.HAnimJoint()
HAnimJoint1600.setName("r_carpal_distal_interphalangeal_5")
HAnimJoint1600.setDEF("hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint1600.setCenter([-0.1908,0.754,-0.096])

HAnimJoint1588.addChildren(HAnimJoint1600)

HAnimJoint1579.addChildren(HAnimJoint1588)

HAnimJoint1570.addChildren(HAnimJoint1579)

HAnimJoint1523.addChildren(HAnimJoint1570)

HAnimJoint1382.addChildren(HAnimJoint1523)

HAnimJoint1370.addChildren(HAnimJoint1382)

HAnimJoint1349.addChildren(HAnimJoint1370)

HAnimJoint1334.addChildren(HAnimJoint1349)

HAnimJoint1325.addChildren(HAnimJoint1334)

HAnimJoint845.addChildren(HAnimJoint1325)

HAnimJoint830.addChildren(HAnimJoint845)

HAnimJoint821.addChildren(HAnimJoint830)

HAnimJoint812.addChildren(HAnimJoint821)

HAnimJoint803.addChildren(HAnimJoint812)

HAnimJoint791.addChildren(HAnimJoint803)

HAnimJoint770.addChildren(HAnimJoint791)

HAnimJoint761.addChildren(HAnimJoint770)

HAnimJoint752.addChildren(HAnimJoint761)

HAnimJoint737.addChildren(HAnimJoint752)

HAnimJoint725.addChildren(HAnimJoint737)

HAnimJoint716.addChildren(HAnimJoint725)

HAnimJoint707.addChildren(HAnimJoint716)

HAnimJoint698.addChildren(HAnimJoint707)

HAnimJoint680.addChildren(HAnimJoint698)

HAnimJoint671.addChildren(HAnimJoint680)

HAnimJoint662.addChildren(HAnimJoint671)

HAnimJoint45.addChildren(HAnimJoint662)

HAnimHumanoid43.setSkeleton(HAnimJoint45)
HAnimJoint1601 = x3d.HAnimJoint()
HAnimJoint1601.setUSE("hanim_humanoid_root")

HAnimHumanoid43.addJoints(HAnimJoint1601)
HAnimJoint1602 = x3d.HAnimJoint()
HAnimJoint1602.setUSE("hanim_sacroiliac")

HAnimHumanoid43.addJoints(HAnimJoint1602)
HAnimJoint1603 = x3d.HAnimJoint()
HAnimJoint1603.setUSE("hanim_l_hip")

HAnimHumanoid43.addJoints(HAnimJoint1603)
HAnimJoint1604 = x3d.HAnimJoint()
HAnimJoint1604.setUSE("hanim_l_knee")

HAnimHumanoid43.addJoints(HAnimJoint1604)
HAnimJoint1605 = x3d.HAnimJoint()
HAnimJoint1605.setUSE("hanim_l_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint1605)
HAnimJoint1606 = x3d.HAnimJoint()
HAnimJoint1606.setUSE("hanim_l_talocalcaneonavicular")

HAnimHumanoid43.addJoints(HAnimJoint1606)
HAnimJoint1607 = x3d.HAnimJoint()
HAnimJoint1607.setUSE("hanim_l_cuneonavicular_1")

HAnimHumanoid43.addJoints(HAnimJoint1607)
HAnimJoint1608 = x3d.HAnimJoint()
HAnimJoint1608.setUSE("hanim_l_tarsometatarsal_1")

HAnimHumanoid43.addJoints(HAnimJoint1608)
HAnimJoint1609 = x3d.HAnimJoint()
HAnimJoint1609.setUSE("hanim_l_metatarsophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1609)
HAnimJoint1610 = x3d.HAnimJoint()
HAnimJoint1610.setUSE("hanim_l_tarsal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1610)
HAnimJoint1611 = x3d.HAnimJoint()
HAnimJoint1611.setUSE("hanim_l_cuneonavicular_2")

HAnimHumanoid43.addJoints(HAnimJoint1611)
HAnimJoint1612 = x3d.HAnimJoint()
HAnimJoint1612.setUSE("hanim_l_tarsometatarsal_2")

HAnimHumanoid43.addJoints(HAnimJoint1612)
HAnimJoint1613 = x3d.HAnimJoint()
HAnimJoint1613.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1613)
HAnimJoint1614 = x3d.HAnimJoint()
HAnimJoint1614.setUSE("hanim_l_tarsal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1614)
HAnimJoint1615 = x3d.HAnimJoint()
HAnimJoint1615.setUSE("hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1615)
HAnimJoint1616 = x3d.HAnimJoint()
HAnimJoint1616.setUSE("hanim_l_cuneonavicular_3")

HAnimHumanoid43.addJoints(HAnimJoint1616)
HAnimJoint1617 = x3d.HAnimJoint()
HAnimJoint1617.setUSE("hanim_l_tarsometatarsal_3")

HAnimHumanoid43.addJoints(HAnimJoint1617)
HAnimJoint1618 = x3d.HAnimJoint()
HAnimJoint1618.setUSE("hanim_l_metatarsophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1618)
HAnimJoint1619 = x3d.HAnimJoint()
HAnimJoint1619.setUSE("hanim_l_tarsal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1619)
HAnimJoint1620 = x3d.HAnimJoint()
HAnimJoint1620.setUSE("hanim_l_tarsal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1620)
HAnimJoint1621 = x3d.HAnimJoint()
HAnimJoint1621.setUSE("hanim_l_calcaneocuboid")

HAnimHumanoid43.addJoints(HAnimJoint1621)
HAnimJoint1622 = x3d.HAnimJoint()
HAnimJoint1622.setUSE("hanim_l_transversetarsal")

HAnimHumanoid43.addJoints(HAnimJoint1622)
HAnimJoint1623 = x3d.HAnimJoint()
HAnimJoint1623.setUSE("hanim_l_tarsometatarsal_4")

HAnimHumanoid43.addJoints(HAnimJoint1623)
HAnimJoint1624 = x3d.HAnimJoint()
HAnimJoint1624.setUSE("hanim_l_metatarsophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1624)
HAnimJoint1625 = x3d.HAnimJoint()
HAnimJoint1625.setUSE("hanim_l_tarsal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1625)
HAnimJoint1626 = x3d.HAnimJoint()
HAnimJoint1626.setUSE("hanim_l_tarsal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1626)
HAnimJoint1627 = x3d.HAnimJoint()
HAnimJoint1627.setUSE("hanim_l_tarsometatarsal_5")

HAnimHumanoid43.addJoints(HAnimJoint1627)
HAnimJoint1628 = x3d.HAnimJoint()
HAnimJoint1628.setUSE("hanim_l_metatarsophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1628)
HAnimJoint1629 = x3d.HAnimJoint()
HAnimJoint1629.setUSE("hanim_l_tarsal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1629)
HAnimJoint1630 = x3d.HAnimJoint()
HAnimJoint1630.setUSE("hanim_l_tarsal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1630)
HAnimJoint1631 = x3d.HAnimJoint()
HAnimJoint1631.setUSE("hanim_r_hip")

HAnimHumanoid43.addJoints(HAnimJoint1631)
HAnimJoint1632 = x3d.HAnimJoint()
HAnimJoint1632.setUSE("hanim_r_knee")

HAnimHumanoid43.addJoints(HAnimJoint1632)
HAnimJoint1633 = x3d.HAnimJoint()
HAnimJoint1633.setUSE("hanim_r_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint1633)
HAnimJoint1634 = x3d.HAnimJoint()
HAnimJoint1634.setUSE("hanim_r_talocalcaneonavicular")

HAnimHumanoid43.addJoints(HAnimJoint1634)
HAnimJoint1635 = x3d.HAnimJoint()
HAnimJoint1635.setUSE("hanim_r_cuneonavicular_1")

HAnimHumanoid43.addJoints(HAnimJoint1635)
HAnimJoint1636 = x3d.HAnimJoint()
HAnimJoint1636.setUSE("hanim_r_tarsometatarsal_1")

HAnimHumanoid43.addJoints(HAnimJoint1636)
HAnimJoint1637 = x3d.HAnimJoint()
HAnimJoint1637.setUSE("hanim_r_metatarsophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1637)
HAnimJoint1638 = x3d.HAnimJoint()
HAnimJoint1638.setUSE("hanim_r_tarsal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1638)
HAnimJoint1639 = x3d.HAnimJoint()
HAnimJoint1639.setUSE("hanim_r_cuneonavicular_2")

HAnimHumanoid43.addJoints(HAnimJoint1639)
HAnimJoint1640 = x3d.HAnimJoint()
HAnimJoint1640.setUSE("hanim_r_tarsometatarsal_2")

HAnimHumanoid43.addJoints(HAnimJoint1640)
HAnimJoint1641 = x3d.HAnimJoint()
HAnimJoint1641.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1641)
HAnimJoint1642 = x3d.HAnimJoint()
HAnimJoint1642.setUSE("hanim_r_tarsal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1642)
HAnimJoint1643 = x3d.HAnimJoint()
HAnimJoint1643.setUSE("hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1643)
HAnimJoint1644 = x3d.HAnimJoint()
HAnimJoint1644.setUSE("hanim_r_cuneonavicular_3")

HAnimHumanoid43.addJoints(HAnimJoint1644)
HAnimJoint1645 = x3d.HAnimJoint()
HAnimJoint1645.setUSE("hanim_r_tarsometatarsal_3")

HAnimHumanoid43.addJoints(HAnimJoint1645)
HAnimJoint1646 = x3d.HAnimJoint()
HAnimJoint1646.setUSE("hanim_r_metatarsophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1646)
HAnimJoint1647 = x3d.HAnimJoint()
HAnimJoint1647.setUSE("hanim_r_tarsal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1647)
HAnimJoint1648 = x3d.HAnimJoint()
HAnimJoint1648.setUSE("hanim_r_tarsal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1648)
HAnimJoint1649 = x3d.HAnimJoint()
HAnimJoint1649.setUSE("hanim_r_calcaneocuboid")

HAnimHumanoid43.addJoints(HAnimJoint1649)
HAnimJoint1650 = x3d.HAnimJoint()
HAnimJoint1650.setUSE("hanim_r_transversetarsal")

HAnimHumanoid43.addJoints(HAnimJoint1650)
HAnimJoint1651 = x3d.HAnimJoint()
HAnimJoint1651.setUSE("hanim_r_tarsometatarsal_4")

HAnimHumanoid43.addJoints(HAnimJoint1651)
HAnimJoint1652 = x3d.HAnimJoint()
HAnimJoint1652.setUSE("hanim_r_metatarsophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1652)
HAnimJoint1653 = x3d.HAnimJoint()
HAnimJoint1653.setUSE("hanim_r_tarsal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1653)
HAnimJoint1654 = x3d.HAnimJoint()
HAnimJoint1654.setUSE("hanim_r_tarsal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1654)
HAnimJoint1655 = x3d.HAnimJoint()
HAnimJoint1655.setUSE("hanim_r_tarsometatarsal_5")

HAnimHumanoid43.addJoints(HAnimJoint1655)
HAnimJoint1656 = x3d.HAnimJoint()
HAnimJoint1656.setUSE("hanim_r_metatarsophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1656)
HAnimJoint1657 = x3d.HAnimJoint()
HAnimJoint1657.setUSE("hanim_r_tarsal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1657)
HAnimJoint1658 = x3d.HAnimJoint()
HAnimJoint1658.setUSE("hanim_r_tarsal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1658)
HAnimJoint1659 = x3d.HAnimJoint()
HAnimJoint1659.setUSE("hanim_vl5")

HAnimHumanoid43.addJoints(HAnimJoint1659)
HAnimJoint1660 = x3d.HAnimJoint()
HAnimJoint1660.setUSE("hanim_vl4")

HAnimHumanoid43.addJoints(HAnimJoint1660)
HAnimJoint1661 = x3d.HAnimJoint()
HAnimJoint1661.setUSE("hanim_vl3")

HAnimHumanoid43.addJoints(HAnimJoint1661)
HAnimJoint1662 = x3d.HAnimJoint()
HAnimJoint1662.setUSE("hanim_vl2")

HAnimHumanoid43.addJoints(HAnimJoint1662)
HAnimJoint1663 = x3d.HAnimJoint()
HAnimJoint1663.setUSE("hanim_vl1")

HAnimHumanoid43.addJoints(HAnimJoint1663)
HAnimJoint1664 = x3d.HAnimJoint()
HAnimJoint1664.setUSE("hanim_vt12")

HAnimHumanoid43.addJoints(HAnimJoint1664)
HAnimJoint1665 = x3d.HAnimJoint()
HAnimJoint1665.setUSE("hanim_vt11")

HAnimHumanoid43.addJoints(HAnimJoint1665)
HAnimJoint1666 = x3d.HAnimJoint()
HAnimJoint1666.setUSE("hanim_vt10")

HAnimHumanoid43.addJoints(HAnimJoint1666)
HAnimJoint1667 = x3d.HAnimJoint()
HAnimJoint1667.setUSE("hanim_vt9")

HAnimHumanoid43.addJoints(HAnimJoint1667)
HAnimJoint1668 = x3d.HAnimJoint()
HAnimJoint1668.setUSE("hanim_vt8")

HAnimHumanoid43.addJoints(HAnimJoint1668)
HAnimJoint1669 = x3d.HAnimJoint()
HAnimJoint1669.setUSE("hanim_vt7")

HAnimHumanoid43.addJoints(HAnimJoint1669)
HAnimJoint1670 = x3d.HAnimJoint()
HAnimJoint1670.setUSE("hanim_vt6")

HAnimHumanoid43.addJoints(HAnimJoint1670)
HAnimJoint1671 = x3d.HAnimJoint()
HAnimJoint1671.setUSE("hanim_vt5")

HAnimHumanoid43.addJoints(HAnimJoint1671)
HAnimJoint1672 = x3d.HAnimJoint()
HAnimJoint1672.setUSE("hanim_vt4")

HAnimHumanoid43.addJoints(HAnimJoint1672)
HAnimJoint1673 = x3d.HAnimJoint()
HAnimJoint1673.setUSE("hanim_vt3")

HAnimHumanoid43.addJoints(HAnimJoint1673)
HAnimJoint1674 = x3d.HAnimJoint()
HAnimJoint1674.setUSE("hanim_vt2")

HAnimHumanoid43.addJoints(HAnimJoint1674)
HAnimJoint1675 = x3d.HAnimJoint()
HAnimJoint1675.setUSE("hanim_vt1")

HAnimHumanoid43.addJoints(HAnimJoint1675)
HAnimJoint1676 = x3d.HAnimJoint()
HAnimJoint1676.setUSE("hanim_vc7")

HAnimHumanoid43.addJoints(HAnimJoint1676)
HAnimJoint1677 = x3d.HAnimJoint()
HAnimJoint1677.setUSE("hanim_vc6")

HAnimHumanoid43.addJoints(HAnimJoint1677)
HAnimJoint1678 = x3d.HAnimJoint()
HAnimJoint1678.setUSE("hanim_vc5")

HAnimHumanoid43.addJoints(HAnimJoint1678)
HAnimJoint1679 = x3d.HAnimJoint()
HAnimJoint1679.setUSE("hanim_vc4")

HAnimHumanoid43.addJoints(HAnimJoint1679)
HAnimJoint1680 = x3d.HAnimJoint()
HAnimJoint1680.setUSE("hanim_vc3")

HAnimHumanoid43.addJoints(HAnimJoint1680)
HAnimJoint1681 = x3d.HAnimJoint()
HAnimJoint1681.setUSE("hanim_vc2")

HAnimHumanoid43.addJoints(HAnimJoint1681)
HAnimJoint1682 = x3d.HAnimJoint()
HAnimJoint1682.setUSE("hanim_vc1")

HAnimHumanoid43.addJoints(HAnimJoint1682)
HAnimJoint1683 = x3d.HAnimJoint()
HAnimJoint1683.setUSE("hanim_skullbase")

HAnimHumanoid43.addJoints(HAnimJoint1683)
HAnimJoint1684 = x3d.HAnimJoint()
HAnimJoint1684.setUSE("hanim_l_eyelid_joint")

HAnimHumanoid43.addJoints(HAnimJoint1684)
HAnimJoint1685 = x3d.HAnimJoint()
HAnimJoint1685.setUSE("hanim_r_eyelid_joint")

HAnimHumanoid43.addJoints(HAnimJoint1685)
HAnimJoint1686 = x3d.HAnimJoint()
HAnimJoint1686.setUSE("hanim_l_eyeball_joint")

HAnimHumanoid43.addJoints(HAnimJoint1686)
HAnimJoint1687 = x3d.HAnimJoint()
HAnimJoint1687.setUSE("hanim_r_eyeball_joint")

HAnimHumanoid43.addJoints(HAnimJoint1687)
HAnimJoint1688 = x3d.HAnimJoint()
HAnimJoint1688.setUSE("hanim_l_eyebrow_joint")

HAnimHumanoid43.addJoints(HAnimJoint1688)
HAnimJoint1689 = x3d.HAnimJoint()
HAnimJoint1689.setUSE("hanim_r_eyebrow_joint")

HAnimHumanoid43.addJoints(HAnimJoint1689)
HAnimJoint1690 = x3d.HAnimJoint()
HAnimJoint1690.setUSE("hanim_temporomandibular")

HAnimHumanoid43.addJoints(HAnimJoint1690)
HAnimJoint1691 = x3d.HAnimJoint()
HAnimJoint1691.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1691)
HAnimJoint1692 = x3d.HAnimJoint()
HAnimJoint1692.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1692)
HAnimJoint1693 = x3d.HAnimJoint()
HAnimJoint1693.setUSE("hanim_l_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint1693)
HAnimJoint1694 = x3d.HAnimJoint()
HAnimJoint1694.setUSE("hanim_l_elbow")

HAnimHumanoid43.addJoints(HAnimJoint1694)
HAnimJoint1695 = x3d.HAnimJoint()
HAnimJoint1695.setUSE("hanim_l_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint1695)
HAnimJoint1696 = x3d.HAnimJoint()
HAnimJoint1696.setUSE("hanim_l_midcarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1696)
HAnimJoint1697 = x3d.HAnimJoint()
HAnimJoint1697.setUSE("hanim_l_carpometacarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1697)
HAnimJoint1698 = x3d.HAnimJoint()
HAnimJoint1698.setUSE("hanim_l_metacarpophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1698)
HAnimJoint1699 = x3d.HAnimJoint()
HAnimJoint1699.setUSE("hanim_l_carpal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1699)
HAnimJoint1700 = x3d.HAnimJoint()
HAnimJoint1700.setUSE("hanim_l_midcarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1700)
HAnimJoint1701 = x3d.HAnimJoint()
HAnimJoint1701.setUSE("hanim_l_carpometacarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1701)
HAnimJoint1702 = x3d.HAnimJoint()
HAnimJoint1702.setUSE("hanim_l_metacarpophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1702)
HAnimJoint1703 = x3d.HAnimJoint()
HAnimJoint1703.setUSE("hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1703)
HAnimJoint1704 = x3d.HAnimJoint()
HAnimJoint1704.setUSE("hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1704)
HAnimJoint1705 = x3d.HAnimJoint()
HAnimJoint1705.setUSE("hanim_l_midcarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1705)
HAnimJoint1706 = x3d.HAnimJoint()
HAnimJoint1706.setUSE("hanim_l_carpometacarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1706)
HAnimJoint1707 = x3d.HAnimJoint()
HAnimJoint1707.setUSE("hanim_l_metacarpophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1707)
HAnimJoint1708 = x3d.HAnimJoint()
HAnimJoint1708.setUSE("hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1708)
HAnimJoint1709 = x3d.HAnimJoint()
HAnimJoint1709.setUSE("hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1709)
HAnimJoint1710 = x3d.HAnimJoint()
HAnimJoint1710.setUSE("hanim_l_midcarpal_4_5")

HAnimHumanoid43.addJoints(HAnimJoint1710)
HAnimJoint1711 = x3d.HAnimJoint()
HAnimJoint1711.setUSE("hanim_l_carpometacarpal_4")

HAnimHumanoid43.addJoints(HAnimJoint1711)
HAnimJoint1712 = x3d.HAnimJoint()
HAnimJoint1712.setUSE("hanim_l_metacarpophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1712)
HAnimJoint1713 = x3d.HAnimJoint()
HAnimJoint1713.setUSE("hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1713)
HAnimJoint1714 = x3d.HAnimJoint()
HAnimJoint1714.setUSE("hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1714)
HAnimJoint1715 = x3d.HAnimJoint()
HAnimJoint1715.setUSE("hanim_l_carpometacarpal_5")

HAnimHumanoid43.addJoints(HAnimJoint1715)
HAnimJoint1716 = x3d.HAnimJoint()
HAnimJoint1716.setUSE("hanim_l_metacarpophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1716)
HAnimJoint1717 = x3d.HAnimJoint()
HAnimJoint1717.setUSE("hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1717)
HAnimJoint1718 = x3d.HAnimJoint()
HAnimJoint1718.setUSE("hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1718)
HAnimJoint1719 = x3d.HAnimJoint()
HAnimJoint1719.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1719)
HAnimJoint1720 = x3d.HAnimJoint()
HAnimJoint1720.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1720)
HAnimJoint1721 = x3d.HAnimJoint()
HAnimJoint1721.setUSE("hanim_r_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint1721)
HAnimJoint1722 = x3d.HAnimJoint()
HAnimJoint1722.setUSE("hanim_r_elbow")

HAnimHumanoid43.addJoints(HAnimJoint1722)
HAnimJoint1723 = x3d.HAnimJoint()
HAnimJoint1723.setUSE("hanim_r_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint1723)
HAnimJoint1724 = x3d.HAnimJoint()
HAnimJoint1724.setUSE("hanim_r_midcarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1724)
HAnimJoint1725 = x3d.HAnimJoint()
HAnimJoint1725.setUSE("hanim_r_carpometacarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1725)
HAnimJoint1726 = x3d.HAnimJoint()
HAnimJoint1726.setUSE("hanim_r_metacarpophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1726)
HAnimJoint1727 = x3d.HAnimJoint()
HAnimJoint1727.setUSE("hanim_r_carpal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1727)
HAnimJoint1728 = x3d.HAnimJoint()
HAnimJoint1728.setUSE("hanim_r_midcarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1728)
HAnimJoint1729 = x3d.HAnimJoint()
HAnimJoint1729.setUSE("hanim_r_carpometacarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1729)
HAnimJoint1730 = x3d.HAnimJoint()
HAnimJoint1730.setUSE("hanim_r_metacarpophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1730)
HAnimJoint1731 = x3d.HAnimJoint()
HAnimJoint1731.setUSE("hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1731)
HAnimJoint1732 = x3d.HAnimJoint()
HAnimJoint1732.setUSE("hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1732)
HAnimJoint1733 = x3d.HAnimJoint()
HAnimJoint1733.setUSE("hanim_r_midcarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1733)
HAnimJoint1734 = x3d.HAnimJoint()
HAnimJoint1734.setUSE("hanim_r_carpometacarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1734)
HAnimJoint1735 = x3d.HAnimJoint()
HAnimJoint1735.setUSE("hanim_r_metacarpophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1735)
HAnimJoint1736 = x3d.HAnimJoint()
HAnimJoint1736.setUSE("hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1736)
HAnimJoint1737 = x3d.HAnimJoint()
HAnimJoint1737.setUSE("hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1737)
HAnimJoint1738 = x3d.HAnimJoint()
HAnimJoint1738.setUSE("hanim_r_midcarpal_4_5")

HAnimHumanoid43.addJoints(HAnimJoint1738)
HAnimJoint1739 = x3d.HAnimJoint()
HAnimJoint1739.setUSE("hanim_r_carpometacarpal_4")

HAnimHumanoid43.addJoints(HAnimJoint1739)
HAnimJoint1740 = x3d.HAnimJoint()
HAnimJoint1740.setUSE("hanim_r_metacarpophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1740)
HAnimJoint1741 = x3d.HAnimJoint()
HAnimJoint1741.setUSE("hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1741)
HAnimJoint1742 = x3d.HAnimJoint()
HAnimJoint1742.setUSE("hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1742)
HAnimJoint1743 = x3d.HAnimJoint()
HAnimJoint1743.setUSE("hanim_r_carpometacarpal_5")

HAnimHumanoid43.addJoints(HAnimJoint1743)
HAnimJoint1744 = x3d.HAnimJoint()
HAnimJoint1744.setUSE("hanim_r_metacarpophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1744)
HAnimJoint1745 = x3d.HAnimJoint()
HAnimJoint1745.setUSE("hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1745)
HAnimJoint1746 = x3d.HAnimJoint()
HAnimJoint1746.setUSE("hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1746)
HAnimSegment1747 = x3d.HAnimSegment()
HAnimSegment1747.setUSE("hanim_sacrum")

HAnimHumanoid43.setSegments(HAnimSegment1747)
HAnimSegment1748 = x3d.HAnimSegment()
HAnimSegment1748.setUSE("hanim_pelvis")

HAnimHumanoid43.setSegments(HAnimSegment1748)
HAnimSegment1749 = x3d.HAnimSegment()
HAnimSegment1749.setUSE("hanim_l_thigh")

HAnimHumanoid43.setSegments(HAnimSegment1749)
HAnimSegment1750 = x3d.HAnimSegment()
HAnimSegment1750.setUSE("hanim_l_calf")

HAnimHumanoid43.setSegments(HAnimSegment1750)
HAnimSegment1751 = x3d.HAnimSegment()
HAnimSegment1751.setUSE("hanim_l_talus")

HAnimHumanoid43.setSegments(HAnimSegment1751)
HAnimSegment1752 = x3d.HAnimSegment()
HAnimSegment1752.setUSE("hanim_l_navicular")

HAnimHumanoid43.setSegments(HAnimSegment1752)
HAnimSegment1753 = x3d.HAnimSegment()
HAnimSegment1753.setUSE("hanim_l_cuneiform_1")

HAnimHumanoid43.setSegments(HAnimSegment1753)
HAnimSegment1754 = x3d.HAnimSegment()
HAnimSegment1754.setUSE("hanim_l_metatarsal_1")

HAnimHumanoid43.setSegments(HAnimSegment1754)
HAnimSegment1755 = x3d.HAnimSegment()
HAnimSegment1755.setUSE("hanim_l_tarsal_proximal_phalanx_1")

HAnimHumanoid43.setSegments(HAnimSegment1755)
HAnimSegment1756 = x3d.HAnimSegment()
HAnimSegment1756.setUSE("hanim_l_cuneiform_2")

HAnimHumanoid43.setSegments(HAnimSegment1756)
HAnimSegment1757 = x3d.HAnimSegment()
HAnimSegment1757.setUSE("hanim_l_metatarsal_2")

HAnimHumanoid43.setSegments(HAnimSegment1757)
HAnimSegment1758 = x3d.HAnimSegment()
HAnimSegment1758.setUSE("hanim_l_tarsal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1758)
HAnimSegment1759 = x3d.HAnimSegment()
HAnimSegment1759.setUSE("hanim_l_tarsal_middle_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1759)
HAnimSegment1760 = x3d.HAnimSegment()
HAnimSegment1760.setUSE("hanim_l_cuneiform_3")

HAnimHumanoid43.setSegments(HAnimSegment1760)
HAnimSegment1761 = x3d.HAnimSegment()
HAnimSegment1761.setUSE("hanim_l_metatarsal_3")

HAnimHumanoid43.setSegments(HAnimSegment1761)
HAnimSegment1762 = x3d.HAnimSegment()
HAnimSegment1762.setUSE("hanim_l_tarsal_proximal_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1762)
HAnimSegment1763 = x3d.HAnimSegment()
HAnimSegment1763.setUSE("hanim_l_tarsal_middle_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1763)
HAnimSegment1764 = x3d.HAnimSegment()
HAnimSegment1764.setUSE("hanim_l_calcaneus")

HAnimHumanoid43.setSegments(HAnimSegment1764)
HAnimSegment1765 = x3d.HAnimSegment()
HAnimSegment1765.setUSE("hanim_l_cuboid")

HAnimHumanoid43.setSegments(HAnimSegment1765)
HAnimSegment1766 = x3d.HAnimSegment()
HAnimSegment1766.setUSE("hanim_l_metatarsal_4")

HAnimHumanoid43.setSegments(HAnimSegment1766)
HAnimSegment1767 = x3d.HAnimSegment()
HAnimSegment1767.setUSE("hanim_l_tarsal_proximal_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1767)
HAnimSegment1768 = x3d.HAnimSegment()
HAnimSegment1768.setUSE("hanim_l_tarsal_middle_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1768)
HAnimSegment1769 = x3d.HAnimSegment()
HAnimSegment1769.setUSE("hanim_l_metatarsal_5")

HAnimHumanoid43.setSegments(HAnimSegment1769)
HAnimSegment1770 = x3d.HAnimSegment()
HAnimSegment1770.setUSE("hanim_l_tarsal_proximal_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1770)
HAnimSegment1771 = x3d.HAnimSegment()
HAnimSegment1771.setUSE("hanim_l_tarsal_middle_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1771)
HAnimSegment1772 = x3d.HAnimSegment()
HAnimSegment1772.setUSE("hanim_r_thigh")

HAnimHumanoid43.setSegments(HAnimSegment1772)
HAnimSegment1773 = x3d.HAnimSegment()
HAnimSegment1773.setUSE("hanim_r_calf")

HAnimHumanoid43.setSegments(HAnimSegment1773)
HAnimSegment1774 = x3d.HAnimSegment()
HAnimSegment1774.setUSE("hanim_r_talus")

HAnimHumanoid43.setSegments(HAnimSegment1774)
HAnimSegment1775 = x3d.HAnimSegment()
HAnimSegment1775.setUSE("hanim_r_navicular")

HAnimHumanoid43.setSegments(HAnimSegment1775)
HAnimSegment1776 = x3d.HAnimSegment()
HAnimSegment1776.setUSE("hanim_r_cuneiform_1")

HAnimHumanoid43.setSegments(HAnimSegment1776)
HAnimSegment1777 = x3d.HAnimSegment()
HAnimSegment1777.setUSE("hanim_r_metatarsal_1")

HAnimHumanoid43.setSegments(HAnimSegment1777)
HAnimSegment1778 = x3d.HAnimSegment()
HAnimSegment1778.setUSE("hanim_r_tarsal_proximal_phalanx_1")

HAnimHumanoid43.setSegments(HAnimSegment1778)
HAnimSegment1779 = x3d.HAnimSegment()
HAnimSegment1779.setUSE("hanim_r_cuneiform_2")

HAnimHumanoid43.setSegments(HAnimSegment1779)
HAnimSegment1780 = x3d.HAnimSegment()
HAnimSegment1780.setUSE("hanim_r_metatarsal_2")

HAnimHumanoid43.setSegments(HAnimSegment1780)
HAnimSegment1781 = x3d.HAnimSegment()
HAnimSegment1781.setUSE("hanim_r_tarsal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1781)
HAnimSegment1782 = x3d.HAnimSegment()
HAnimSegment1782.setUSE("hanim_r_tarsal_middle_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1782)
HAnimSegment1783 = x3d.HAnimSegment()
HAnimSegment1783.setUSE("hanim_r_cuneiform_3")

HAnimHumanoid43.setSegments(HAnimSegment1783)
HAnimSegment1784 = x3d.HAnimSegment()
HAnimSegment1784.setUSE("hanim_r_metatarsal_3")

HAnimHumanoid43.setSegments(HAnimSegment1784)
HAnimSegment1785 = x3d.HAnimSegment()
HAnimSegment1785.setUSE("hanim_r_tarsal_proximal_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1785)
HAnimSegment1786 = x3d.HAnimSegment()
HAnimSegment1786.setUSE("hanim_r_tarsal_middle_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1786)
HAnimSegment1787 = x3d.HAnimSegment()
HAnimSegment1787.setUSE("hanim_r_calcaneus")

HAnimHumanoid43.setSegments(HAnimSegment1787)
HAnimSegment1788 = x3d.HAnimSegment()
HAnimSegment1788.setUSE("hanim_r_cuboid")

HAnimHumanoid43.setSegments(HAnimSegment1788)
HAnimSegment1789 = x3d.HAnimSegment()
HAnimSegment1789.setUSE("hanim_r_metatarsal_4")

HAnimHumanoid43.setSegments(HAnimSegment1789)
HAnimSegment1790 = x3d.HAnimSegment()
HAnimSegment1790.setUSE("hanim_r_tarsal_proximal_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1790)
HAnimSegment1791 = x3d.HAnimSegment()
HAnimSegment1791.setUSE("hanim_r_tarsal_middle_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1791)
HAnimSegment1792 = x3d.HAnimSegment()
HAnimSegment1792.setUSE("hanim_r_metatarsal_5")

HAnimHumanoid43.setSegments(HAnimSegment1792)
HAnimSegment1793 = x3d.HAnimSegment()
HAnimSegment1793.setUSE("hanim_r_tarsal_proximal_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1793)
HAnimSegment1794 = x3d.HAnimSegment()
HAnimSegment1794.setUSE("hanim_r_tarsal_middle_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1794)
HAnimSegment1795 = x3d.HAnimSegment()
HAnimSegment1795.setUSE("hanim_l5")

HAnimHumanoid43.setSegments(HAnimSegment1795)
HAnimSegment1796 = x3d.HAnimSegment()
HAnimSegment1796.setUSE("hanim_l4")

HAnimHumanoid43.setSegments(HAnimSegment1796)
HAnimSegment1797 = x3d.HAnimSegment()
HAnimSegment1797.setUSE("hanim_l3")

HAnimHumanoid43.setSegments(HAnimSegment1797)
HAnimSegment1798 = x3d.HAnimSegment()
HAnimSegment1798.setUSE("hanim_l2")

HAnimHumanoid43.setSegments(HAnimSegment1798)
HAnimSegment1799 = x3d.HAnimSegment()
HAnimSegment1799.setUSE("hanim_l1")

HAnimHumanoid43.setSegments(HAnimSegment1799)
HAnimSegment1800 = x3d.HAnimSegment()
HAnimSegment1800.setUSE("hanim_t12")

HAnimHumanoid43.setSegments(HAnimSegment1800)
HAnimSegment1801 = x3d.HAnimSegment()
HAnimSegment1801.setUSE("hanim_t11")

HAnimHumanoid43.setSegments(HAnimSegment1801)
HAnimSegment1802 = x3d.HAnimSegment()
HAnimSegment1802.setUSE("hanim_t10")

HAnimHumanoid43.setSegments(HAnimSegment1802)
HAnimSegment1803 = x3d.HAnimSegment()
HAnimSegment1803.setUSE("hanim_t9")

HAnimHumanoid43.setSegments(HAnimSegment1803)
HAnimSegment1804 = x3d.HAnimSegment()
HAnimSegment1804.setUSE("hanim_t8")

HAnimHumanoid43.setSegments(HAnimSegment1804)
HAnimSegment1805 = x3d.HAnimSegment()
HAnimSegment1805.setUSE("hanim_t7")

HAnimHumanoid43.setSegments(HAnimSegment1805)
HAnimSegment1806 = x3d.HAnimSegment()
HAnimSegment1806.setUSE("hanim_t6")

HAnimHumanoid43.setSegments(HAnimSegment1806)
HAnimSegment1807 = x3d.HAnimSegment()
HAnimSegment1807.setUSE("hanim_t5")

HAnimHumanoid43.setSegments(HAnimSegment1807)
HAnimSegment1808 = x3d.HAnimSegment()
HAnimSegment1808.setUSE("hanim_t4")

HAnimHumanoid43.setSegments(HAnimSegment1808)
HAnimSegment1809 = x3d.HAnimSegment()
HAnimSegment1809.setUSE("hanim_t3")

HAnimHumanoid43.setSegments(HAnimSegment1809)
HAnimSegment1810 = x3d.HAnimSegment()
HAnimSegment1810.setUSE("hanim_t2")

HAnimHumanoid43.setSegments(HAnimSegment1810)
HAnimSegment1811 = x3d.HAnimSegment()
HAnimSegment1811.setUSE("hanim_t1")

HAnimHumanoid43.setSegments(HAnimSegment1811)
HAnimSegment1812 = x3d.HAnimSegment()
HAnimSegment1812.setUSE("hanim_c7")

HAnimHumanoid43.setSegments(HAnimSegment1812)
HAnimSegment1813 = x3d.HAnimSegment()
HAnimSegment1813.setUSE("hanim_c6")

HAnimHumanoid43.setSegments(HAnimSegment1813)
HAnimSegment1814 = x3d.HAnimSegment()
HAnimSegment1814.setUSE("hanim_c5")

HAnimHumanoid43.setSegments(HAnimSegment1814)
HAnimSegment1815 = x3d.HAnimSegment()
HAnimSegment1815.setUSE("hanim_c4")

HAnimHumanoid43.setSegments(HAnimSegment1815)
HAnimSegment1816 = x3d.HAnimSegment()
HAnimSegment1816.setUSE("hanim_c3")

HAnimHumanoid43.setSegments(HAnimSegment1816)
HAnimSegment1817 = x3d.HAnimSegment()
HAnimSegment1817.setUSE("hanim_c2")

HAnimHumanoid43.setSegments(HAnimSegment1817)
HAnimSegment1818 = x3d.HAnimSegment()
HAnimSegment1818.setUSE("hanim_c1")

HAnimHumanoid43.setSegments(HAnimSegment1818)
HAnimSegment1819 = x3d.HAnimSegment()
HAnimSegment1819.setUSE("hanim_skull")

HAnimHumanoid43.setSegments(HAnimSegment1819)
HAnimSegment1820 = x3d.HAnimSegment()
HAnimSegment1820.setUSE("hanim_l_clavicle")

HAnimHumanoid43.setSegments(HAnimSegment1820)
HAnimSegment1821 = x3d.HAnimSegment()
HAnimSegment1821.setUSE("hanim_l_scapula")

HAnimHumanoid43.setSegments(HAnimSegment1821)
HAnimSegment1822 = x3d.HAnimSegment()
HAnimSegment1822.setUSE("hanim_l_upperarm")

HAnimHumanoid43.setSegments(HAnimSegment1822)
HAnimSegment1823 = x3d.HAnimSegment()
HAnimSegment1823.setUSE("hanim_l_forearm")

HAnimHumanoid43.setSegments(HAnimSegment1823)
HAnimSegment1824 = x3d.HAnimSegment()
HAnimSegment1824.setUSE("hanim_l_carpal")

HAnimHumanoid43.setSegments(HAnimSegment1824)
HAnimSegment1825 = x3d.HAnimSegment()
HAnimSegment1825.setUSE("hanim_l_trapezium")

HAnimHumanoid43.setSegments(HAnimSegment1825)
HAnimSegment1826 = x3d.HAnimSegment()
HAnimSegment1826.setUSE("hanim_l_metacarpal_1")

HAnimHumanoid43.setSegments(HAnimSegment1826)
HAnimSegment1827 = x3d.HAnimSegment()
HAnimSegment1827.setUSE("hanim_l_carpal_proximal_phalanx_1")

HAnimHumanoid43.setSegments(HAnimSegment1827)
HAnimSegment1828 = x3d.HAnimSegment()
HAnimSegment1828.setUSE("hanim_l_trapezoid")

HAnimHumanoid43.setSegments(HAnimSegment1828)
HAnimSegment1829 = x3d.HAnimSegment()
HAnimSegment1829.setUSE("hanim_l_metacarpal_2")

HAnimHumanoid43.setSegments(HAnimSegment1829)
HAnimSegment1830 = x3d.HAnimSegment()
HAnimSegment1830.setUSE("hanim_l_carpal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1830)
HAnimSegment1831 = x3d.HAnimSegment()
HAnimSegment1831.setUSE("hanim_l_carpal_middle_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1831)
HAnimSegment1832 = x3d.HAnimSegment()
HAnimSegment1832.setUSE("hanim_l_capitate")

HAnimHumanoid43.setSegments(HAnimSegment1832)
HAnimSegment1833 = x3d.HAnimSegment()
HAnimSegment1833.setUSE("hanim_l_metacarpal_3")

HAnimHumanoid43.setSegments(HAnimSegment1833)
HAnimSegment1834 = x3d.HAnimSegment()
HAnimSegment1834.setUSE("hanim_l_carpal_proximal_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1834)
HAnimSegment1835 = x3d.HAnimSegment()
HAnimSegment1835.setUSE("hanim_l_carpal_middle_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1835)
HAnimSegment1836 = x3d.HAnimSegment()
HAnimSegment1836.setUSE("hanim_l_hamate")

HAnimHumanoid43.setSegments(HAnimSegment1836)
HAnimSegment1837 = x3d.HAnimSegment()
HAnimSegment1837.setUSE("hanim_l_metacarpal_4")

HAnimHumanoid43.setSegments(HAnimSegment1837)
HAnimSegment1838 = x3d.HAnimSegment()
HAnimSegment1838.setUSE("hanim_l_carpal_proximal_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1838)
HAnimSegment1839 = x3d.HAnimSegment()
HAnimSegment1839.setUSE("hanim_l_carpal_middle_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1839)
HAnimSegment1840 = x3d.HAnimSegment()
HAnimSegment1840.setUSE("hanim_l_metacarpal_5")

HAnimHumanoid43.setSegments(HAnimSegment1840)
HAnimSegment1841 = x3d.HAnimSegment()
HAnimSegment1841.setUSE("hanim_l_carpal_proximal_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1841)
HAnimSegment1842 = x3d.HAnimSegment()
HAnimSegment1842.setUSE("hanim_l_carpal_middle_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1842)
HAnimSegment1843 = x3d.HAnimSegment()
HAnimSegment1843.setUSE("hanim_r_clavicle")

HAnimHumanoid43.setSegments(HAnimSegment1843)
HAnimSegment1844 = x3d.HAnimSegment()
HAnimSegment1844.setUSE("hanim_r_scapula")

HAnimHumanoid43.setSegments(HAnimSegment1844)
HAnimSegment1845 = x3d.HAnimSegment()
HAnimSegment1845.setUSE("hanim_r_upperarm")

HAnimHumanoid43.setSegments(HAnimSegment1845)
HAnimSegment1846 = x3d.HAnimSegment()
HAnimSegment1846.setUSE("hanim_r_forearm")

HAnimHumanoid43.setSegments(HAnimSegment1846)
HAnimSegment1847 = x3d.HAnimSegment()
HAnimSegment1847.setUSE("hanim_r_carpal")

HAnimHumanoid43.setSegments(HAnimSegment1847)
HAnimSegment1848 = x3d.HAnimSegment()
HAnimSegment1848.setUSE("hanim_r_trapezium")

HAnimHumanoid43.setSegments(HAnimSegment1848)
HAnimSegment1849 = x3d.HAnimSegment()
HAnimSegment1849.setUSE("hanim_r_metacarpal_1")

HAnimHumanoid43.setSegments(HAnimSegment1849)
HAnimSegment1850 = x3d.HAnimSegment()
HAnimSegment1850.setUSE("hanim_r_carpal_proximal_phalanx_1")

HAnimHumanoid43.setSegments(HAnimSegment1850)
HAnimSegment1851 = x3d.HAnimSegment()
HAnimSegment1851.setUSE("hanim_r_trapezoid")

HAnimHumanoid43.setSegments(HAnimSegment1851)
HAnimSegment1852 = x3d.HAnimSegment()
HAnimSegment1852.setUSE("hanim_r_metacarpal_2")

HAnimHumanoid43.setSegments(HAnimSegment1852)
HAnimSegment1853 = x3d.HAnimSegment()
HAnimSegment1853.setUSE("hanim_r_carpal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1853)
HAnimSegment1854 = x3d.HAnimSegment()
HAnimSegment1854.setUSE("hanim_r_carpal_middle_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1854)
HAnimSegment1855 = x3d.HAnimSegment()
HAnimSegment1855.setUSE("hanim_r_capitate")

HAnimHumanoid43.setSegments(HAnimSegment1855)
HAnimSegment1856 = x3d.HAnimSegment()
HAnimSegment1856.setUSE("hanim_r_metacarpal_3")

HAnimHumanoid43.setSegments(HAnimSegment1856)
HAnimSegment1857 = x3d.HAnimSegment()
HAnimSegment1857.setUSE("hanim_r_carpal_proximal_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1857)
HAnimSegment1858 = x3d.HAnimSegment()
HAnimSegment1858.setUSE("hanim_r_carpal_middle_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1858)
HAnimSegment1859 = x3d.HAnimSegment()
HAnimSegment1859.setUSE("hanim_r_hamate")

HAnimHumanoid43.setSegments(HAnimSegment1859)
HAnimSegment1860 = x3d.HAnimSegment()
HAnimSegment1860.setUSE("hanim_r_metacarpal_4")

HAnimHumanoid43.setSegments(HAnimSegment1860)
HAnimSegment1861 = x3d.HAnimSegment()
HAnimSegment1861.setUSE("hanim_r_carpal_proximal_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1861)
HAnimSegment1862 = x3d.HAnimSegment()
HAnimSegment1862.setUSE("hanim_r_carpal_middle_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1862)
HAnimSegment1863 = x3d.HAnimSegment()
HAnimSegment1863.setUSE("hanim_r_metacarpal_5")

HAnimHumanoid43.setSegments(HAnimSegment1863)
HAnimSegment1864 = x3d.HAnimSegment()
HAnimSegment1864.setUSE("hanim_r_carpal_proximal_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1864)
HAnimSegment1865 = x3d.HAnimSegment()
HAnimSegment1865.setUSE("hanim_r_carpal_middle_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1865)
HAnimSite1866 = x3d.HAnimSite()
HAnimSite1866.setUSE("hanim_buttocks_standing_wall_contact_point_pt")

HAnimHumanoid43.setSites(HAnimSite1866)
HAnimSite1867 = x3d.HAnimSite()
HAnimSite1867.setUSE("hanim_crotch_pt")

HAnimHumanoid43.setSites(HAnimSite1867)
HAnimSite1868 = x3d.HAnimSite()
HAnimSite1868.setUSE("hanim_l_asis_pt")

HAnimHumanoid43.setSites(HAnimSite1868)
HAnimSite1869 = x3d.HAnimSite()
HAnimSite1869.setUSE("hanim_l_iliocristale_pt")

HAnimHumanoid43.setSites(HAnimSite1869)
HAnimSite1870 = x3d.HAnimSite()
HAnimSite1870.setUSE("hanim_l_psis_pt")

HAnimHumanoid43.setSites(HAnimSite1870)
HAnimSite1871 = x3d.HAnimSite()
HAnimSite1871.setUSE("hanim_l_trochanterion_pt")

HAnimHumanoid43.setSites(HAnimSite1871)
HAnimSite1872 = x3d.HAnimSite()
HAnimSite1872.setUSE("hanim_r_asis_pt")

HAnimHumanoid43.setSites(HAnimSite1872)
HAnimSite1873 = x3d.HAnimSite()
HAnimSite1873.setUSE("hanim_r_iliocristale_pt")

HAnimHumanoid43.setSites(HAnimSite1873)
HAnimSite1874 = x3d.HAnimSite()
HAnimSite1874.setUSE("hanim_r_psis_pt")

HAnimHumanoid43.setSites(HAnimSite1874)
HAnimSite1875 = x3d.HAnimSite()
HAnimSite1875.setUSE("hanim_r_trochanterion_pt")

HAnimHumanoid43.setSites(HAnimSite1875)
HAnimSite1876 = x3d.HAnimSite()
HAnimSite1876.setUSE("hanim_navel_pt")

HAnimHumanoid43.setSites(HAnimSite1876)
HAnimSite1877 = x3d.HAnimSite()
HAnimSite1877.setUSE("hanim_waist_preferred_anterior_pt")

HAnimHumanoid43.setSites(HAnimSite1877)
HAnimSite1878 = x3d.HAnimSite()
HAnimSite1878.setUSE("hanim_waist_preferred_posterior_pt")

HAnimHumanoid43.setSites(HAnimSite1878)
HAnimSite1879 = x3d.HAnimSite()
HAnimSite1879.setUSE("hanim_l_femoral_lateral_epicondyles_pt")

HAnimHumanoid43.setSites(HAnimSite1879)
HAnimSite1880 = x3d.HAnimSite()
HAnimSite1880.setUSE("hanim_l_femoral_medial_epicondyles_pt")

HAnimHumanoid43.setSites(HAnimSite1880)
HAnimSite1881 = x3d.HAnimSite()
HAnimSite1881.setUSE("hanim_l_knee_crease_pt")

HAnimHumanoid43.setSites(HAnimSite1881)
HAnimSite1882 = x3d.HAnimSite()
HAnimSite1882.setUSE("hanim_l_suprapatella_pt")

HAnimHumanoid43.setSites(HAnimSite1882)
HAnimSite1883 = x3d.HAnimSite()
HAnimSite1883.setUSE("hanim_r_femoral_lateral_epicondyles_pt")

HAnimHumanoid43.setSites(HAnimSite1883)
HAnimSite1884 = x3d.HAnimSite()
HAnimSite1884.setUSE("hanim_r_femoral_medial_epicondyles_pt")

HAnimHumanoid43.setSites(HAnimSite1884)
HAnimSite1885 = x3d.HAnimSite()
HAnimSite1885.setUSE("hanim_r_knee_crease_pt")

HAnimHumanoid43.setSites(HAnimSite1885)
HAnimSite1886 = x3d.HAnimSite()
HAnimSite1886.setUSE("hanim_r_suprapatella_pt")

HAnimHumanoid43.setSites(HAnimSite1886)
HAnimSite1887 = x3d.HAnimSite()
HAnimSite1887.setUSE("hanim_l_lateral_malleolus_pt")

HAnimHumanoid43.setSites(HAnimSite1887)
HAnimSite1888 = x3d.HAnimSite()
HAnimSite1888.setUSE("hanim_l_medial_malleolus_pt")

HAnimHumanoid43.setSites(HAnimSite1888)
HAnimSite1889 = x3d.HAnimSite()
HAnimSite1889.setUSE("hanim_l_tibiale_pt")

HAnimHumanoid43.setSites(HAnimSite1889)
HAnimSite1890 = x3d.HAnimSite()
HAnimSite1890.setUSE("hanim_l_calcaneus_posterior_pt")

HAnimHumanoid43.setSites(HAnimSite1890)
HAnimSite1891 = x3d.HAnimSite()
HAnimSite1891.setUSE("hanim_l_sphyrion_pt")

HAnimHumanoid43.setSites(HAnimSite1891)
HAnimSite1892 = x3d.HAnimSite()
HAnimSite1892.setUSE("hanim_l_metatarsal_phalanx_1_pt")

HAnimHumanoid43.setSites(HAnimSite1892)
HAnimSite1893 = x3d.HAnimSite()
HAnimSite1893.setUSE("hanim_l_tarsal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite1893)
HAnimSite1894 = x3d.HAnimSite()
HAnimSite1894.setUSE("hanim_l_tarsal_distal_phalanx_2_tip")

HAnimHumanoid43.setSites(HAnimSite1894)
HAnimSite1895 = x3d.HAnimSite()
HAnimSite1895.setUSE("hanim_l_tarsal_distal_phalanx_3_tip")

HAnimHumanoid43.setSites(HAnimSite1895)
HAnimSite1896 = x3d.HAnimSite()
HAnimSite1896.setUSE("hanim_l_tarsal_distal_phalanx_4_tip")

HAnimHumanoid43.setSites(HAnimSite1896)
HAnimSite1897 = x3d.HAnimSite()
HAnimSite1897.setUSE("hanim_l_metatarsal_phalanx_5_pt")

HAnimHumanoid43.setSites(HAnimSite1897)
HAnimSite1898 = x3d.HAnimSite()
HAnimSite1898.setUSE("hanim_l_tarsal_distal_phalanx_5_tip")

HAnimHumanoid43.setSites(HAnimSite1898)
HAnimSite1899 = x3d.HAnimSite()
HAnimSite1899.setUSE("hanim_r_lateral_malleolus_pt")

HAnimHumanoid43.setSites(HAnimSite1899)
HAnimSite1900 = x3d.HAnimSite()
HAnimSite1900.setUSE("hanim_r_medial_malleolus_pt")

HAnimHumanoid43.setSites(HAnimSite1900)
HAnimSite1901 = x3d.HAnimSite()
HAnimSite1901.setUSE("hanim_r_tibiale_pt")

HAnimHumanoid43.setSites(HAnimSite1901)
HAnimSite1902 = x3d.HAnimSite()
HAnimSite1902.setUSE("hanim_r_calcaneus_posterior_pt")

HAnimHumanoid43.setSites(HAnimSite1902)
HAnimSite1903 = x3d.HAnimSite()
HAnimSite1903.setUSE("hanim_r_sphyrion_pt")

HAnimHumanoid43.setSites(HAnimSite1903)
HAnimSite1904 = x3d.HAnimSite()
HAnimSite1904.setUSE("hanim_r_metatarsal_phalanx_1_pt")

HAnimHumanoid43.setSites(HAnimSite1904)
HAnimSite1905 = x3d.HAnimSite()
HAnimSite1905.setUSE("hanim_r_tarsal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite1905)
HAnimSite1906 = x3d.HAnimSite()
HAnimSite1906.setUSE("hanim_r_tarsal_distal_phalanx_2_tip")

HAnimHumanoid43.setSites(HAnimSite1906)
HAnimSite1907 = x3d.HAnimSite()
HAnimSite1907.setUSE("hanim_r_tarsal_distal_phalanx_3_tip")

HAnimHumanoid43.setSites(HAnimSite1907)
HAnimSite1908 = x3d.HAnimSite()
HAnimSite1908.setUSE("hanim_r_tarsal_distal_phalanx_4_tip")

HAnimHumanoid43.setSites(HAnimSite1908)
HAnimSite1909 = x3d.HAnimSite()
HAnimSite1909.setUSE("hanim_r_metatarsal_phalanx_5_pt")

HAnimHumanoid43.setSites(HAnimSite1909)
HAnimSite1910 = x3d.HAnimSite()
HAnimSite1910.setUSE("hanim_r_tarsal_distal_phalanx_5_tip")

HAnimHumanoid43.setSites(HAnimSite1910)
HAnimSite1911 = x3d.HAnimSite()
HAnimSite1911.setUSE("hanim_l_rib10_pt")

HAnimHumanoid43.setSites(HAnimSite1911)
HAnimSite1912 = x3d.HAnimSite()
HAnimSite1912.setUSE("hanim_r_rib10_pt")

HAnimHumanoid43.setSites(HAnimSite1912)
HAnimSite1913 = x3d.HAnimSite()
HAnimSite1913.setUSE("hanim_spine_2_middle_back_pt")

HAnimHumanoid43.setSites(HAnimSite1913)
HAnimSite1914 = x3d.HAnimSite()
HAnimSite1914.setUSE("hanim_substernale_pt")

HAnimHumanoid43.setSites(HAnimSite1914)
HAnimSite1915 = x3d.HAnimSite()
HAnimSite1915.setUSE("hanim_l_thelion_pt")

HAnimHumanoid43.setSites(HAnimSite1915)
HAnimSite1916 = x3d.HAnimSite()
HAnimSite1916.setUSE("hanim_r_thelion_pt")

HAnimHumanoid43.setSites(HAnimSite1916)
HAnimSite1917 = x3d.HAnimSite()
HAnimSite1917.setUSE("hanim_l_chest_midsagittal_plane_pt")

HAnimHumanoid43.setSites(HAnimSite1917)
HAnimSite1918 = x3d.HAnimSite()
HAnimSite1918.setUSE("hanim_mesosternale_pt")

HAnimHumanoid43.setSites(HAnimSite1918)
HAnimSite1919 = x3d.HAnimSite()
HAnimSite1919.setUSE("hanim_r_chest_midsagittal_plane_pt")

HAnimHumanoid43.setSites(HAnimSite1919)
HAnimSite1920 = x3d.HAnimSite()
HAnimSite1920.setUSE("hanim_rear_center_midsagittal_plane_pt")

HAnimHumanoid43.setSites(HAnimSite1920)
HAnimSite1921 = x3d.HAnimSite()
HAnimSite1921.setUSE("hanim_spine_1_middle_back_pt")

HAnimHumanoid43.setSites(HAnimSite1921)
HAnimSite1922 = x3d.HAnimSite()
HAnimSite1922.setUSE("hanim_cervicale_pt")

HAnimHumanoid43.setSites(HAnimSite1922)
HAnimSite1923 = x3d.HAnimSite()
HAnimSite1923.setUSE("hanim_suprasternale_pt")

HAnimHumanoid43.setSites(HAnimSite1923)
HAnimSite1924 = x3d.HAnimSite()
HAnimSite1924.setUSE("hanim_l_neck_base_pt")

HAnimHumanoid43.setSites(HAnimSite1924)
HAnimSite1925 = x3d.HAnimSite()
HAnimSite1925.setUSE("hanim_r_neck_base_pt")

HAnimHumanoid43.setSites(HAnimSite1925)
HAnimSite1926 = x3d.HAnimSite()
HAnimSite1926.setUSE("hanim_l_acromion_pt")

HAnimHumanoid43.setSites(HAnimSite1926)
HAnimSite1927 = x3d.HAnimSite()
HAnimSite1927.setUSE("hanim_l_axilla_distal_pt")

HAnimHumanoid43.setSites(HAnimSite1927)
HAnimSite1928 = x3d.HAnimSite()
HAnimSite1928.setUSE("hanim_l_axilla_posterior_folds_pt")

HAnimHumanoid43.setSites(HAnimSite1928)
HAnimSite1929 = x3d.HAnimSite()
HAnimSite1929.setUSE("hanim_l_axilla_proximal_pt")

HAnimHumanoid43.setSites(HAnimSite1929)
HAnimSite1930 = x3d.HAnimSite()
HAnimSite1930.setUSE("hanim_l_clavicale_pt")

HAnimHumanoid43.setSites(HAnimSite1930)
HAnimSite1931 = x3d.HAnimSite()
HAnimSite1931.setUSE("hanim_r_acromion_pt")

HAnimHumanoid43.setSites(HAnimSite1931)
HAnimSite1932 = x3d.HAnimSite()
HAnimSite1932.setUSE("hanim_r_axilla_distal_pt")

HAnimHumanoid43.setSites(HAnimSite1932)
HAnimSite1933 = x3d.HAnimSite()
HAnimSite1933.setUSE("hanim_r_axilla_posterior_folds_pt")

HAnimHumanoid43.setSites(HAnimSite1933)
HAnimSite1934 = x3d.HAnimSite()
HAnimSite1934.setUSE("hanim_r_axilla_proximal_pt")

HAnimHumanoid43.setSites(HAnimSite1934)
HAnimSite1935 = x3d.HAnimSite()
HAnimSite1935.setUSE("hanim_r_clavicale_pt")

HAnimHumanoid43.setSites(HAnimSite1935)
HAnimSite1936 = x3d.HAnimSite()
HAnimSite1936.setUSE("hanim_adams_apple_pt")

HAnimHumanoid43.setSites(HAnimSite1936)
HAnimSite1937 = x3d.HAnimSite()
HAnimSite1937.setUSE("hanim_glabella_pt")

HAnimHumanoid43.setSites(HAnimSite1937)
HAnimSite1938 = x3d.HAnimSite()
HAnimSite1938.setUSE("hanim_l_ectocanthus_pt")

HAnimHumanoid43.setSites(HAnimSite1938)
HAnimSite1939 = x3d.HAnimSite()
HAnimSite1939.setUSE("hanim_l_infraorbitale_pt")

HAnimHumanoid43.setSites(HAnimSite1939)
HAnimSite1940 = x3d.HAnimSite()
HAnimSite1940.setUSE("hanim_l_tragion_pt")

HAnimHumanoid43.setSites(HAnimSite1940)
HAnimSite1941 = x3d.HAnimSite()
HAnimSite1941.setUSE("hanim_nuchale_pt")

HAnimHumanoid43.setSites(HAnimSite1941)
HAnimSite1942 = x3d.HAnimSite()
HAnimSite1942.setUSE("hanim_opisthocranion_pt")

HAnimHumanoid43.setSites(HAnimSite1942)
HAnimSite1943 = x3d.HAnimSite()
HAnimSite1943.setUSE("hanim_r_ectocanthus_pt")

HAnimHumanoid43.setSites(HAnimSite1943)
HAnimSite1944 = x3d.HAnimSite()
HAnimSite1944.setUSE("hanim_r_infraorbitale_pt")

HAnimHumanoid43.setSites(HAnimSite1944)
HAnimSite1945 = x3d.HAnimSite()
HAnimSite1945.setUSE("hanim_r_tragion_pt")

HAnimHumanoid43.setSites(HAnimSite1945)
HAnimSite1946 = x3d.HAnimSite()
HAnimSite1946.setUSE("hanim_sellion_pt")

HAnimHumanoid43.setSites(HAnimSite1946)
HAnimSite1947 = x3d.HAnimSite()
HAnimSite1947.setUSE("hanim_skull_vertex_pt")

HAnimHumanoid43.setSites(HAnimSite1947)
HAnimSite1948 = x3d.HAnimSite()
HAnimSite1948.setUSE("hanim_l_gonion_pt")

HAnimHumanoid43.setSites(HAnimSite1948)
HAnimSite1949 = x3d.HAnimSite()
HAnimSite1949.setUSE("hanim_menton_pt")

HAnimHumanoid43.setSites(HAnimSite1949)
HAnimSite1950 = x3d.HAnimSite()
HAnimSite1950.setUSE("hanim_r_gonion_pt")

HAnimHumanoid43.setSites(HAnimSite1950)
HAnimSite1951 = x3d.HAnimSite()
HAnimSite1951.setUSE("hanim_supramenton_pt")

HAnimHumanoid43.setSites(HAnimSite1951)
HAnimSite1952 = x3d.HAnimSite()
HAnimSite1952.setUSE("hanim_l_bideltoid_pt")

HAnimHumanoid43.setSites(HAnimSite1952)
HAnimSite1953 = x3d.HAnimSite()
HAnimSite1953.setUSE("hanim_l_humeral_lateral_epicondyles_pt")

HAnimHumanoid43.setSites(HAnimSite1953)
HAnimSite1954 = x3d.HAnimSite()
HAnimSite1954.setUSE("hanim_l_humeral_medial_epicondyles_pt")

HAnimHumanoid43.setSites(HAnimSite1954)
HAnimSite1955 = x3d.HAnimSite()
HAnimSite1955.setUSE("hanim_l_olecranon_pt")

HAnimHumanoid43.setSites(HAnimSite1955)
HAnimSite1956 = x3d.HAnimSite()
HAnimSite1956.setUSE("hanim_l_radial_styloid_pt")

HAnimHumanoid43.setSites(HAnimSite1956)
HAnimSite1957 = x3d.HAnimSite()
HAnimSite1957.setUSE("hanim_l_radiale_pt")

HAnimHumanoid43.setSites(HAnimSite1957)
HAnimSite1958 = x3d.HAnimSite()
HAnimSite1958.setUSE("hanim_l_ulnar_styloid_pt")

HAnimHumanoid43.setSites(HAnimSite1958)
HAnimSite1959 = x3d.HAnimSite()
HAnimSite1959.setUSE("hanim_l_carpal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite1959)
HAnimSite1960 = x3d.HAnimSite()
HAnimSite1960.setUSE("hanim_l_metacarpal_phalanx_2_pt")

HAnimHumanoid43.setSites(HAnimSite1960)
HAnimSite1961 = x3d.HAnimSite()
HAnimSite1961.setUSE("hanim_l_carpal_distal_phalanx_2_tip")

HAnimHumanoid43.setSites(HAnimSite1961)
HAnimSite1962 = x3d.HAnimSite()
HAnimSite1962.setUSE("hanim_l_dactylion_pt")

HAnimHumanoid43.setSites(HAnimSite1962)
HAnimSite1963 = x3d.HAnimSite()
HAnimSite1963.setUSE("hanim_l_metacarpal_phalanx_3_pt")

HAnimHumanoid43.setSites(HAnimSite1963)
HAnimSite1964 = x3d.HAnimSite()
HAnimSite1964.setUSE("hanim_l_carpal_distal_phalanx_3_tip")

HAnimHumanoid43.setSites(HAnimSite1964)
HAnimSite1965 = x3d.HAnimSite()
HAnimSite1965.setUSE("hanim_l_metacarpal_phalanx_5_pt")

HAnimHumanoid43.setSites(HAnimSite1965)
HAnimSite1966 = x3d.HAnimSite()
HAnimSite1966.setUSE("hanim_l_carpal_distal_phalanx_4_tip")

HAnimHumanoid43.setSites(HAnimSite1966)
HAnimSite1967 = x3d.HAnimSite()
HAnimSite1967.setUSE("hanim_l_carpal_distal_phalanx_5_tip")

HAnimHumanoid43.setSites(HAnimSite1967)
HAnimSite1968 = x3d.HAnimSite()
HAnimSite1968.setUSE("hanim_r_bideltoid_pt")

HAnimHumanoid43.setSites(HAnimSite1968)
HAnimSite1969 = x3d.HAnimSite()
HAnimSite1969.setUSE("hanim_r_humeral_lateral_epicondyles_pt")

HAnimHumanoid43.setSites(HAnimSite1969)
HAnimSite1970 = x3d.HAnimSite()
HAnimSite1970.setUSE("hanim_r_humeral_medial_epicondyles_pt")

HAnimHumanoid43.setSites(HAnimSite1970)
HAnimSite1971 = x3d.HAnimSite()
HAnimSite1971.setUSE("hanim_r_olecranon_pt")

HAnimHumanoid43.setSites(HAnimSite1971)
HAnimSite1972 = x3d.HAnimSite()
HAnimSite1972.setUSE("hanim_r_radial_styloid_pt")

HAnimHumanoid43.setSites(HAnimSite1972)
HAnimSite1973 = x3d.HAnimSite()
HAnimSite1973.setUSE("hanim_r_radiale_pt")

HAnimHumanoid43.setSites(HAnimSite1973)
HAnimSite1974 = x3d.HAnimSite()
HAnimSite1974.setUSE("hanim_r_ulnar_styloid_pt")

HAnimHumanoid43.setSites(HAnimSite1974)
HAnimSite1975 = x3d.HAnimSite()
HAnimSite1975.setUSE("hanim_r_carpal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite1975)
HAnimSite1976 = x3d.HAnimSite()
HAnimSite1976.setUSE("hanim_r_metacarpal_phalanx_2_pt")

HAnimHumanoid43.setSites(HAnimSite1976)
HAnimSite1977 = x3d.HAnimSite()
HAnimSite1977.setUSE("hanim_r_carpal_distal_phalanx_2_tip")

HAnimHumanoid43.setSites(HAnimSite1977)
HAnimSite1978 = x3d.HAnimSite()
HAnimSite1978.setUSE("hanim_r_dactylion_pt")

HAnimHumanoid43.setSites(HAnimSite1978)
HAnimSite1979 = x3d.HAnimSite()
HAnimSite1979.setUSE("hanim_r_metacarpal_phalanx_3_pt")

HAnimHumanoid43.setSites(HAnimSite1979)
HAnimSite1980 = x3d.HAnimSite()
HAnimSite1980.setUSE("hanim_r_carpal_distal_phalanx_3_tip")

HAnimHumanoid43.setSites(HAnimSite1980)
HAnimSite1981 = x3d.HAnimSite()
HAnimSite1981.setUSE("hanim_r_metacarpal_phalanx_5_pt")

HAnimHumanoid43.setSites(HAnimSite1981)
HAnimSite1982 = x3d.HAnimSite()
HAnimSite1982.setUSE("hanim_r_carpal_distal_phalanx_4_tip")

HAnimHumanoid43.setSites(HAnimSite1982)
HAnimSite1983 = x3d.HAnimSite()
HAnimSite1983.setUSE("hanim_r_carpal_distal_phalanx_5_tip")

HAnimHumanoid43.setSites(HAnimSite1983)

Scene11.addChildren(HAnimHumanoid43)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/Humanoid4_1.new.python.x3d")
X3D0.toFileJSON("../data/Humanoid4_1.new.python.json")
