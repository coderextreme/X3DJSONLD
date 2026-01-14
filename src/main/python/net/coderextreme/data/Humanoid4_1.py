print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "HAnim"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "Humanoid4_1.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "identifier"
meta4.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4_1.x3d"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "description"
meta5.content = "An attempt at a standard LOA-4 skeleton"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "generator"
meta6.content = "h2.pl"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "14 Jan 2023"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "creator"
meta8.content = "John Carlson"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "created"
meta9.content = "9 November 2020"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "license"
meta10.content = "../license.html"

head1.children.append(meta10)

X3D0.head = head1
Scene11 = x3d.Scene()
Transform12 = x3d.Transform()
"""DEF for markerfor XYZ axes"""
Shape13 = x3d.Shape()
Shape13.DEF = "AxisLinesShape"
"""RGB lines showing XYZ axes"""
IndexedLineSet14 = x3d.IndexedLineSet()
IndexedLineSet14.colorIndex = [0,1,2]
IndexedLineSet14.colorPerVertex = False
IndexedLineSet14.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Coordinate15 = x3d.Coordinate()
Coordinate15.point = [(0, 0, 0),(0.1, 0, 0),(0, 0.1, 0),(0, 0, 0.1)]

IndexedLineSet14.coord = Coordinate15
Color16 = x3d.Color()
Color16.color = [(1, 0, 0),(0, 0.6, 0),(0, 0, 1)]

IndexedLineSet14.color = Color16

Shape13.geometry = IndexedLineSet14

Transform12.children.append(Shape13)

Scene11.children.append(Transform12)
Group17 = x3d.Group()
"""DEFS for markers of skeleton joints, segments, and sites"""
Transform18 = x3d.Transform()
Transform19 = x3d.Transform()
Transform19.translation = [0,2,0]
Shape20 = x3d.Shape()
Shape20.DEF = "HAnimRootShape"
Sphere21 = x3d.Sphere()
Sphere21.radius = 0.02

Shape20.geometry = Sphere21
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.DEF = "HAnimRootMaterial"
Material23.diffuseColor = [0.8,0,0]
Material23.transparency = 0.3

Appearance22.material = Material23

Shape20.appearance = Appearance22

Transform19.children.append(Shape20)

Transform18.children.append(Transform19)
Transform24 = x3d.Transform()
Transform24.translation = [0,2.1,0]
Shape25 = x3d.Shape()
Shape25.DEF = "HAnimJointShape"
Sphere26 = x3d.Sphere()
Sphere26.radius = 0.02

Shape25.geometry = Sphere26
Appearance27 = x3d.Appearance()
Material28 = x3d.Material()
Material28.DEF = "HAnimJointMaterial"
Material28.diffuseColor = [0,0,0.8]
Material28.transparency = 0.3

Appearance27.material = Material28

Shape25.appearance = Appearance27

Transform24.children.append(Shape25)

Transform18.children.append(Transform24)
Transform29 = x3d.Transform()
Transform29.translation = [0,2.05,0]
Shape30 = x3d.Shape()
Shape30.DEF = "HAnimSegmentLine"
LineSet31 = x3d.LineSet()
LineSet31.vertexCount = [2]
ColorRGBA32 = x3d.ColorRGBA()
ColorRGBA32.DEF = "HAnimSegmentLineColorRGBA"
ColorRGBA32.color = [(1, 1, 0, 1),(1, 1, 0, 0.1)]

LineSet31.color = ColorRGBA32
Coordinate33 = x3d.Coordinate()
Coordinate33.point = [(-0.05, 0, 0),(0.05, 0, 0)]

LineSet31.coord = Coordinate33

Shape30.geometry = LineSet31

Transform29.children.append(Shape30)

Transform18.children.append(Transform29)
Transform34 = x3d.Transform()
Transform34.translation = [0,2.1,0]
Shape35 = x3d.Shape()
Shape35.DEF = "HAnimSiteShape"
IndexedFaceSet36 = x3d.IndexedFaceSet()
IndexedFaceSet36.DEF = "DiamondIFS"
IndexedFaceSet36.creaseAngle = 0.5
IndexedFaceSet36.solid = False
IndexedFaceSet36.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA37 = x3d.ColorRGBA()
ColorRGBA37.DEF = "HAnimSiteColorRGBA"
ColorRGBA37.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet36.color = ColorRGBA37
Coordinate38 = x3d.Coordinate()
Coordinate38.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet36.coord = Coordinate38

Shape35.geometry = IndexedFaceSet36
Appearance39 = x3d.Appearance()
Material40 = x3d.Material()
Material40.diffuseColor = [1,1,0]
Material40.transparency = 0.3

Appearance39.material = Material40

Shape35.appearance = Appearance39

Transform34.children.append(Shape35)

Transform18.children.append(Transform34)

Group17.children.append(Transform18)

Scene11.children.append(Group17)
NavigationInfo41 = x3d.NavigationInfo()
NavigationInfo41.speed = 1.5

Scene11.children.append(NavigationInfo41)
Viewpoint42 = x3d.Viewpoint()
Viewpoint42.description = "default"

Scene11.children.append(Viewpoint42)
HAnimHumanoid43 = x3d.HAnimHumanoid()
HAnimHumanoid43.name = "HAnim"
HAnimHumanoid43.DEF = "hanim_HAnim"
HAnimHumanoid43.info = ["humanoidVersion=2.0"]
HAnimHumanoid43.version = "2.0"
"""</LOD>"""
Coordinate44 = x3d.Coordinate()

HAnimHumanoid43.skinCoord = Coordinate44
HAnimJoint45 = x3d.HAnimJoint()
HAnimJoint45.name = "humanoid_root"
HAnimJoint45.DEF = "hanim_humanoid_root"
HAnimJoint45.center = [0,0.824,0.0277]
HAnimJoint45.ulimit = [0,0,0]
HAnimJoint45.llimit = [0,0,0]
HAnimSegment46 = x3d.HAnimSegment()
HAnimSegment46.name = "sacrum"
HAnimSegment46.DEF = "hanim_sacrum"
Transform47 = x3d.Transform()
Transform47.translation = [0,0.824,0.0277]
Transform48 = x3d.Transform()
"""Empty Transform"""
Shape49 = x3d.Shape()
Shape49.USE = "HAnimJointShape"

Transform48.children.append(Shape49)

Transform47.children.append(Transform48)

HAnimSegment46.children.append(Transform47)
Shape50 = x3d.Shape()
LineSet51 = x3d.LineSet()
LineSet51.vertexCount = [2]
Coordinate52 = x3d.Coordinate()
Coordinate52.point = [(0, 0.824, 0.0277),(0, 0.9149, 0.0016)]

LineSet51.coord = Coordinate52
"""from humanoid_root to sacroiliac vertices 2"""
ColorRGBA53 = x3d.ColorRGBA()
ColorRGBA53.USE = "HAnimSegmentLineColorRGBA"

LineSet51.color = ColorRGBA53

Shape50.geometry = LineSet51

HAnimSegment46.children.append(Shape50)
HAnimSite54 = x3d.HAnimSite()
HAnimSite54.name = "buttocks_standing_wall_contact_point_pt"
HAnimSite54.DEF = "hanim_buttocks_standing_wall_contact_point_pt"
TouchSensor55 = x3d.TouchSensor()
TouchSensor55.description = "HAnimSite buttocks_standing_wall_contact_point_pt"

HAnimSite54.children.append(TouchSensor55)
Shape56 = x3d.Shape()
Shape56.USE = "HAnimSiteShape"

HAnimSite54.children.append(Shape56)

HAnimSegment46.children.append(HAnimSite54)
HAnimSite57 = x3d.HAnimSite()
HAnimSite57.name = "crotch_pt"
HAnimSite57.DEF = "hanim_crotch_pt"
HAnimSite57.translation = [0.0034,0.8266,0.0257]
TouchSensor58 = x3d.TouchSensor()
TouchSensor58.description = "HAnimSite crotch_pt"

HAnimSite57.children.append(TouchSensor58)
Shape59 = x3d.Shape()
Shape59.USE = "HAnimSiteShape"

HAnimSite57.children.append(Shape59)

HAnimSegment46.children.append(HAnimSite57)
HAnimSite60 = x3d.HAnimSite()
HAnimSite60.name = "l_asis_pt"
HAnimSite60.DEF = "hanim_l_asis_pt"
HAnimSite60.translation = [0.0925,0.9983,0.1052]
TouchSensor61 = x3d.TouchSensor()
TouchSensor61.description = "HAnimSite l_asis_pt"

HAnimSite60.children.append(TouchSensor61)
Shape62 = x3d.Shape()
Shape62.USE = "HAnimSiteShape"

HAnimSite60.children.append(Shape62)

HAnimSegment46.children.append(HAnimSite60)
HAnimSite63 = x3d.HAnimSite()
HAnimSite63.name = "l_iliocristale_pt"
HAnimSite63.DEF = "hanim_l_iliocristale_pt"
HAnimSite63.translation = [0.1612,1.0537,0.0008]
TouchSensor64 = x3d.TouchSensor()
TouchSensor64.description = "HAnimSite l_iliocristale_pt"

HAnimSite63.children.append(TouchSensor64)
Shape65 = x3d.Shape()
Shape65.USE = "HAnimSiteShape"

HAnimSite63.children.append(Shape65)

HAnimSegment46.children.append(HAnimSite63)
HAnimSite66 = x3d.HAnimSite()
HAnimSite66.name = "l_psis_pt"
HAnimSite66.DEF = "hanim_l_psis_pt"
HAnimSite66.translation = [0.0774,1.019,-0.1151]
TouchSensor67 = x3d.TouchSensor()
TouchSensor67.description = "HAnimSite l_psis_pt"

HAnimSite66.children.append(TouchSensor67)
Shape68 = x3d.Shape()
Shape68.USE = "HAnimSiteShape"

HAnimSite66.children.append(Shape68)

HAnimSegment46.children.append(HAnimSite66)
HAnimSite69 = x3d.HAnimSite()
HAnimSite69.name = "l_trochanterion_pt"
HAnimSite69.DEF = "hanim_l_trochanterion_pt"
HAnimSite69.translation = [0.1677,0.8336,0.0303]
TouchSensor70 = x3d.TouchSensor()
TouchSensor70.description = "HAnimSite l_trochanterion_pt"

HAnimSite69.children.append(TouchSensor70)
Shape71 = x3d.Shape()
Shape71.USE = "HAnimSiteShape"

HAnimSite69.children.append(Shape71)

HAnimSegment46.children.append(HAnimSite69)
HAnimSite72 = x3d.HAnimSite()
HAnimSite72.name = "r_asis_pt"
HAnimSite72.DEF = "hanim_r_asis_pt"
HAnimSite72.translation = [-0.0887,1.0021,0.1112]
TouchSensor73 = x3d.TouchSensor()
TouchSensor73.description = "HAnimSite r_asis_pt"

HAnimSite72.children.append(TouchSensor73)
Shape74 = x3d.Shape()
Shape74.USE = "HAnimSiteShape"

HAnimSite72.children.append(Shape74)

HAnimSegment46.children.append(HAnimSite72)
HAnimSite75 = x3d.HAnimSite()
HAnimSite75.name = "r_iliocristale_pt"
HAnimSite75.DEF = "hanim_r_iliocristale_pt"
HAnimSite75.translation = [-0.1525,1.0628,0.0035]
TouchSensor76 = x3d.TouchSensor()
TouchSensor76.description = "HAnimSite r_iliocristale_pt"

HAnimSite75.children.append(TouchSensor76)
Shape77 = x3d.Shape()
Shape77.USE = "HAnimSiteShape"

HAnimSite75.children.append(Shape77)

HAnimSegment46.children.append(HAnimSite75)
HAnimSite78 = x3d.HAnimSite()
HAnimSite78.name = "r_psis_pt"
HAnimSite78.DEF = "hanim_r_psis_pt"
HAnimSite78.translation = [-0.0716,1.019,-0.1138]
TouchSensor79 = x3d.TouchSensor()
TouchSensor79.description = "HAnimSite r_psis_pt"

HAnimSite78.children.append(TouchSensor79)
Shape80 = x3d.Shape()
Shape80.USE = "HAnimSiteShape"

HAnimSite78.children.append(Shape80)

HAnimSegment46.children.append(HAnimSite78)
HAnimSite81 = x3d.HAnimSite()
HAnimSite81.name = "r_trochanterion_pt"
HAnimSite81.DEF = "hanim_r_trochanterion_pt"
HAnimSite81.translation = [-0.1689,0.8419,0.0352]
TouchSensor82 = x3d.TouchSensor()
TouchSensor82.description = "HAnimSite r_trochanterion_pt"

HAnimSite81.children.append(TouchSensor82)
Shape83 = x3d.Shape()
Shape83.USE = "HAnimSiteShape"

HAnimSite81.children.append(Shape83)

HAnimSegment46.children.append(HAnimSite81)
Shape84 = x3d.Shape()
LineSet85 = x3d.LineSet()
LineSet85.vertexCount = [2]
Coordinate86 = x3d.Coordinate()
Coordinate86.point = [(0, 0.824, 0.0277),(0.0028, 1.0568, -0.0776)]

LineSet85.coord = Coordinate86
"""from humanoid_root to vl5 vertices 2"""
ColorRGBA87 = x3d.ColorRGBA()
ColorRGBA87.USE = "HAnimSegmentLineColorRGBA"

LineSet85.color = ColorRGBA87

Shape84.geometry = LineSet85

HAnimSegment46.children.append(Shape84)
HAnimSite88 = x3d.HAnimSite()
HAnimSite88.name = "navel_pt"
HAnimSite88.DEF = "hanim_navel_pt"
HAnimSite88.translation = [0.0069,1.0966,0.1017]
TouchSensor89 = x3d.TouchSensor()
TouchSensor89.description = "HAnimSite navel_pt"

HAnimSite88.children.append(TouchSensor89)
Shape90 = x3d.Shape()
Shape90.USE = "HAnimSiteShape"

HAnimSite88.children.append(Shape90)

HAnimSegment46.children.append(HAnimSite88)
HAnimSite91 = x3d.HAnimSite()
HAnimSite91.name = "waist_preferred_anterior_pt"
HAnimSite91.DEF = "hanim_waist_preferred_anterior_pt"
TouchSensor92 = x3d.TouchSensor()
TouchSensor92.description = "HAnimSite waist_preferred_anterior_pt"

HAnimSite91.children.append(TouchSensor92)
Shape93 = x3d.Shape()
Shape93.USE = "HAnimSiteShape"

HAnimSite91.children.append(Shape93)

HAnimSegment46.children.append(HAnimSite91)
HAnimSite94 = x3d.HAnimSite()
HAnimSite94.name = "waist_preferred_posterior_pt"
HAnimSite94.DEF = "hanim_waist_preferred_posterior_pt"
HAnimSite94.translation = [0.29,1.0915,-0.1091]
TouchSensor95 = x3d.TouchSensor()
TouchSensor95.description = "HAnimSite waist_preferred_posterior_pt"

HAnimSite94.children.append(TouchSensor95)
Shape96 = x3d.Shape()
Shape96.USE = "HAnimSiteShape"

HAnimSite94.children.append(Shape96)

HAnimSegment46.children.append(HAnimSite94)

HAnimJoint45.children.append(HAnimSegment46)
HAnimJoint97 = x3d.HAnimJoint()
HAnimJoint97.name = "sacroiliac"
HAnimJoint97.DEF = "hanim_sacroiliac"
HAnimJoint97.center = [0,0.9149,0.0016]
HAnimJoint97.ulimit = [0,0,0]
HAnimJoint97.llimit = [0,0,0]
HAnimSegment98 = x3d.HAnimSegment()
HAnimSegment98.name = "pelvis"
HAnimSegment98.DEF = "hanim_pelvis"
Transform99 = x3d.Transform()
Transform99.translation = [0,0.9149,0.0016]
Transform100 = x3d.Transform()
"""Empty Transform"""
Shape101 = x3d.Shape()
Shape101.USE = "HAnimJointShape"

Transform100.children.append(Shape101)

Transform99.children.append(Transform100)

HAnimSegment98.children.append(Transform99)
Shape102 = x3d.Shape()
LineSet103 = x3d.LineSet()
LineSet103.vertexCount = [2]
Coordinate104 = x3d.Coordinate()
Coordinate104.point = [(0, 0.9149, 0.0016),(0.0961, 0.9124, -0.0001)]

LineSet103.coord = Coordinate104
"""from sacroiliac to l_hip vertices 2"""
ColorRGBA105 = x3d.ColorRGBA()
ColorRGBA105.USE = "HAnimSegmentLineColorRGBA"

LineSet103.color = ColorRGBA105

Shape102.geometry = LineSet103

HAnimSegment98.children.append(Shape102)
HAnimSite106 = x3d.HAnimSite()
HAnimSite106.name = "l_femoral_lateral_epicondyles_pt"
HAnimSite106.DEF = "hanim_l_femoral_lateral_epicondyles_pt"
HAnimSite106.translation = [0.1598,0.4967,0.0297]
TouchSensor107 = x3d.TouchSensor()
TouchSensor107.description = "HAnimSite l_femoral_lateral_epicondyles_pt"

HAnimSite106.children.append(TouchSensor107)
Shape108 = x3d.Shape()
Shape108.USE = "HAnimSiteShape"

HAnimSite106.children.append(Shape108)

HAnimSegment98.children.append(HAnimSite106)
HAnimSite109 = x3d.HAnimSite()
HAnimSite109.name = "l_femoral_medial_epicondyles_pt"
HAnimSite109.DEF = "hanim_l_femoral_medial_epicondyles_pt"
HAnimSite109.translation = [0.0398,0.4946,0.0303]
TouchSensor110 = x3d.TouchSensor()
TouchSensor110.description = "HAnimSite l_femoral_medial_epicondyles_pt"

HAnimSite109.children.append(TouchSensor110)
Shape111 = x3d.Shape()
Shape111.USE = "HAnimSiteShape"

HAnimSite109.children.append(Shape111)

HAnimSegment98.children.append(HAnimSite109)
HAnimSite112 = x3d.HAnimSite()
HAnimSite112.name = "l_knee_crease_pt"
HAnimSite112.DEF = "hanim_l_knee_crease_pt"
HAnimSite112.translation = [0.0993,0.4881,-0.0309]
TouchSensor113 = x3d.TouchSensor()
TouchSensor113.description = "HAnimSite l_knee_crease_pt"

HAnimSite112.children.append(TouchSensor113)
Shape114 = x3d.Shape()
Shape114.USE = "HAnimSiteShape"

HAnimSite112.children.append(Shape114)

HAnimSegment98.children.append(HAnimSite112)
HAnimSite115 = x3d.HAnimSite()
HAnimSite115.name = "l_suprapatella_pt"
HAnimSite115.DEF = "hanim_l_suprapatella_pt"
TouchSensor116 = x3d.TouchSensor()
TouchSensor116.description = "HAnimSite l_suprapatella_pt"

HAnimSite115.children.append(TouchSensor116)
Shape117 = x3d.Shape()
Shape117.USE = "HAnimSiteShape"

HAnimSite115.children.append(Shape117)

HAnimSegment98.children.append(HAnimSite115)
Shape118 = x3d.Shape()
LineSet119 = x3d.LineSet()
LineSet119.vertexCount = [2]
Coordinate120 = x3d.Coordinate()
Coordinate120.point = [(0, 0.9149, 0.0016),(-0.095, 0.9171, 0.0029)]

LineSet119.coord = Coordinate120
"""from sacroiliac to r_hip vertices 2"""
ColorRGBA121 = x3d.ColorRGBA()
ColorRGBA121.USE = "HAnimSegmentLineColorRGBA"

LineSet119.color = ColorRGBA121

Shape118.geometry = LineSet119

HAnimSegment98.children.append(Shape118)
HAnimSite122 = x3d.HAnimSite()
HAnimSite122.name = "r_femoral_lateral_epicondyles_pt"
HAnimSite122.DEF = "hanim_r_femoral_lateral_epicondyles_pt"
HAnimSite122.translation = [-0.1421,0.4992,0.031]
TouchSensor123 = x3d.TouchSensor()
TouchSensor123.description = "HAnimSite r_femoral_lateral_epicondyles_pt"

HAnimSite122.children.append(TouchSensor123)
Shape124 = x3d.Shape()
Shape124.USE = "HAnimSiteShape"

HAnimSite122.children.append(Shape124)

HAnimSegment98.children.append(HAnimSite122)
HAnimSite125 = x3d.HAnimSite()
HAnimSite125.name = "r_femoral_medial_epicondyles_pt"
HAnimSite125.DEF = "hanim_r_femoral_medial_epicondyles_pt"
HAnimSite125.translation = [-0.0221,0.5014,0.0289]
TouchSensor126 = x3d.TouchSensor()
TouchSensor126.description = "HAnimSite r_femoral_medial_epicondyles_pt"

HAnimSite125.children.append(TouchSensor126)
Shape127 = x3d.Shape()
Shape127.USE = "HAnimSiteShape"

HAnimSite125.children.append(Shape127)

HAnimSegment98.children.append(HAnimSite125)
HAnimSite128 = x3d.HAnimSite()
HAnimSite128.name = "r_knee_crease_pt"
HAnimSite128.DEF = "hanim_r_knee_crease_pt"
HAnimSite128.translation = [-0.0825,0.4932,-0.0326]
TouchSensor129 = x3d.TouchSensor()
TouchSensor129.description = "HAnimSite r_knee_crease_pt"

HAnimSite128.children.append(TouchSensor129)
Shape130 = x3d.Shape()
Shape130.USE = "HAnimSiteShape"

HAnimSite128.children.append(Shape130)

HAnimSegment98.children.append(HAnimSite128)
HAnimSite131 = x3d.HAnimSite()
HAnimSite131.name = "r_suprapatella_pt"
HAnimSite131.DEF = "hanim_r_suprapatella_pt"
TouchSensor132 = x3d.TouchSensor()
TouchSensor132.description = "HAnimSite r_suprapatella_pt"

HAnimSite131.children.append(TouchSensor132)
Shape133 = x3d.Shape()
Shape133.USE = "HAnimSiteShape"

HAnimSite131.children.append(Shape133)

HAnimSegment98.children.append(HAnimSite131)

HAnimJoint97.children.append(HAnimSegment98)
HAnimJoint134 = x3d.HAnimJoint()
HAnimJoint134.name = "l_hip"
HAnimJoint134.DEF = "hanim_l_hip"
HAnimJoint134.center = [0.0961,0.9124,-0.0001]
HAnimJoint134.ulimit = [0,0,0]
HAnimJoint134.llimit = [0,0,0]
HAnimSegment135 = x3d.HAnimSegment()
HAnimSegment135.name = "l_thigh"
HAnimSegment135.DEF = "hanim_l_thigh"
Transform136 = x3d.Transform()
Transform136.translation = [0.0961,0.9124,-0.0001]
Transform137 = x3d.Transform()
"""Empty Transform"""
Shape138 = x3d.Shape()
Shape138.USE = "HAnimJointShape"

Transform137.children.append(Shape138)

Transform136.children.append(Transform137)

HAnimSegment135.children.append(Transform136)
Shape139 = x3d.Shape()
LineSet140 = x3d.LineSet()
LineSet140.vertexCount = [2]
Coordinate141 = x3d.Coordinate()
Coordinate141.point = [(0.0961, 0.9124, -0.0001),(0.104, 0.4867, 0.0308)]

LineSet140.coord = Coordinate141
"""from l_hip to l_knee vertices 2"""
ColorRGBA142 = x3d.ColorRGBA()
ColorRGBA142.USE = "HAnimSegmentLineColorRGBA"

LineSet140.color = ColorRGBA142

Shape139.geometry = LineSet140

HAnimSegment135.children.append(Shape139)
HAnimSite143 = x3d.HAnimSite()
HAnimSite143.name = "l_lateral_malleolus_pt"
HAnimSite143.DEF = "hanim_l_lateral_malleolus_pt"
HAnimSite143.translation = [0.1308,0.0597,-0.1032]
TouchSensor144 = x3d.TouchSensor()
TouchSensor144.description = "HAnimSite l_lateral_malleolus_pt"

HAnimSite143.children.append(TouchSensor144)
Shape145 = x3d.Shape()
Shape145.USE = "HAnimSiteShape"

HAnimSite143.children.append(Shape145)

HAnimSegment135.children.append(HAnimSite143)
HAnimSite146 = x3d.HAnimSite()
HAnimSite146.name = "l_medial_malleolus_pt"
HAnimSite146.DEF = "hanim_l_medial_malleolus_pt"
HAnimSite146.translation = [0.089,0.0716,-0.0881]
TouchSensor147 = x3d.TouchSensor()
TouchSensor147.description = "HAnimSite l_medial_malleolus_pt"

HAnimSite146.children.append(TouchSensor147)
Shape148 = x3d.Shape()
Shape148.USE = "HAnimSiteShape"

HAnimSite146.children.append(Shape148)

HAnimSegment135.children.append(HAnimSite146)
HAnimSite149 = x3d.HAnimSite()
HAnimSite149.name = "l_tibiale_pt"
HAnimSite149.DEF = "hanim_l_tibiale_pt"
TouchSensor150 = x3d.TouchSensor()
TouchSensor150.description = "HAnimSite l_tibiale_pt"

HAnimSite149.children.append(TouchSensor150)
Shape151 = x3d.Shape()
Shape151.USE = "HAnimSiteShape"

HAnimSite149.children.append(Shape151)

HAnimSegment135.children.append(HAnimSite149)

HAnimJoint134.children.append(HAnimSegment135)
HAnimJoint152 = x3d.HAnimJoint()
HAnimJoint152.name = "l_knee"
HAnimJoint152.DEF = "hanim_l_knee"
HAnimJoint152.center = [0.104,0.4867,0.0308]
HAnimJoint152.ulimit = [0,0,0]
HAnimJoint152.llimit = [0,0,0]
HAnimSegment153 = x3d.HAnimSegment()
HAnimSegment153.name = "l_calf"
HAnimSegment153.DEF = "hanim_l_calf"
Transform154 = x3d.Transform()
Transform154.translation = [0.104,0.4867,0.0308]
Transform155 = x3d.Transform()
"""Empty Transform"""
Shape156 = x3d.Shape()
Shape156.USE = "HAnimJointShape"

Transform155.children.append(Shape156)

Transform154.children.append(Transform155)

HAnimSegment153.children.append(Transform154)
Shape157 = x3d.Shape()
LineSet158 = x3d.LineSet()
LineSet158.vertexCount = [2]
Coordinate159 = x3d.Coordinate()
Coordinate159.point = [(0.104, 0.4867, 0.0308),(0.1101, 0.0656, -0.0736)]

LineSet158.coord = Coordinate159
"""from l_knee to l_talocrural vertices 2"""
ColorRGBA160 = x3d.ColorRGBA()
ColorRGBA160.USE = "HAnimSegmentLineColorRGBA"

LineSet158.color = ColorRGBA160

Shape157.geometry = LineSet158

HAnimSegment153.children.append(Shape157)
HAnimSite161 = x3d.HAnimSite()
HAnimSite161.name = "l_calcaneus_posterior_pt"
HAnimSite161.DEF = "hanim_l_calcaneus_posterior_pt"
HAnimSite161.translation = [0.0974,0.0259,-0.1171]
TouchSensor162 = x3d.TouchSensor()
TouchSensor162.description = "HAnimSite l_calcaneus_posterior_pt"

HAnimSite161.children.append(TouchSensor162)
Shape163 = x3d.Shape()
Shape163.USE = "HAnimSiteShape"

HAnimSite161.children.append(Shape163)

HAnimSegment153.children.append(HAnimSite161)
HAnimSite164 = x3d.HAnimSite()
HAnimSite164.name = "l_sphyrion_pt"
HAnimSite164.DEF = "hanim_l_sphyrion_pt"
HAnimSite164.translation = [0.089,0.0575,-0.0943]
TouchSensor165 = x3d.TouchSensor()
TouchSensor165.description = "HAnimSite l_sphyrion_pt"

HAnimSite164.children.append(TouchSensor165)
Shape166 = x3d.Shape()
Shape166.USE = "HAnimSiteShape"

HAnimSite164.children.append(Shape166)

HAnimSegment153.children.append(HAnimSite164)

HAnimJoint152.children.append(HAnimSegment153)
HAnimJoint167 = x3d.HAnimJoint()
HAnimJoint167.name = "l_talocrural"
HAnimJoint167.DEF = "hanim_l_talocrural"
HAnimJoint167.center = [0.1101,0.0656,-0.0736]
HAnimJoint167.ulimit = [0,0,0]
HAnimJoint167.llimit = [0,0,0]
HAnimSegment168 = x3d.HAnimSegment()
HAnimSegment168.name = "l_talus"
HAnimSegment168.DEF = "hanim_l_talus"
Transform169 = x3d.Transform()
Transform169.scale = [0.15,0.15,0.15]
Transform169.translation = [0.08,0.06,-0.025]
Transform169.rotation = [1,0,0,-1.57]
"""Transform left foot"""
Transform170 = x3d.Transform()
"""Empty Transform left foot"""
Shape171 = x3d.Shape()
Shape171.USE = "HAnimJointShape"

Transform170.children.append(Shape171)

Transform169.children.append(Transform170)

HAnimSegment168.children.append(Transform169)
Shape172 = x3d.Shape()
LineSet173 = x3d.LineSet()
LineSet173.vertexCount = [2]
Coordinate174 = x3d.Coordinate()
Coordinate174.point = [(0.1101, 0.0656, -0.0736),(3.4715, 0.0374, 0.6807)]

LineSet173.coord = Coordinate174
"""from l_talocrural to l_talocalcaneonavicular vertices 2"""
ColorRGBA175 = x3d.ColorRGBA()
ColorRGBA175.USE = "HAnimSegmentLineColorRGBA"

LineSet173.color = ColorRGBA175

Shape172.geometry = LineSet173

HAnimSegment168.children.append(Shape172)
Shape176 = x3d.Shape()
LineSet177 = x3d.LineSet()
LineSet177.vertexCount = [2]
Coordinate178 = x3d.Coordinate()
Coordinate178.point = [(0.1101, 0.0656, -0.0736),(3.9515, 0.0653, -0.6895)]

LineSet177.coord = Coordinate178
"""from l_talocrural to l_calcaneocuboid vertices 2"""
ColorRGBA179 = x3d.ColorRGBA()
ColorRGBA179.USE = "HAnimSegmentLineColorRGBA"

LineSet177.color = ColorRGBA179

Shape176.geometry = LineSet177

HAnimSegment168.children.append(Shape176)

HAnimJoint167.children.append(HAnimSegment168)
HAnimJoint180 = x3d.HAnimJoint()
HAnimJoint180.name = "l_talocalcaneonavicular"
HAnimJoint180.DEF = "hanim_l_talocalcaneonavicular"
HAnimJoint180.center = [3.4715,0.0374,0.6807]
HAnimJoint180.ulimit = [0,0,0]
HAnimJoint180.llimit = [0,0,0]
HAnimSegment181 = x3d.HAnimSegment()
HAnimSegment181.name = "l_navicular"
HAnimSegment181.DEF = "hanim_l_navicular"
Transform182 = x3d.Transform()
Transform182.translation = [3.4715,0.0374,0.6807]
Transform183 = x3d.Transform()
"""Empty Transform"""
Shape184 = x3d.Shape()
Shape184.USE = "HAnimJointShape"

Transform183.children.append(Shape184)

Transform182.children.append(Transform183)

HAnimSegment181.children.append(Transform182)
Shape185 = x3d.Shape()
LineSet186 = x3d.LineSet()
LineSet186.vertexCount = [2]
Coordinate187 = x3d.Coordinate()
Coordinate187.point = [(3.4715, 0.0374, 0.6807),(2.9855, 0.0311, 1.2819)]

LineSet186.coord = Coordinate187
"""from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2"""
ColorRGBA188 = x3d.ColorRGBA()
ColorRGBA188.USE = "HAnimSegmentLineColorRGBA"

LineSet186.color = ColorRGBA188

Shape185.geometry = LineSet186

HAnimSegment181.children.append(Shape185)
Shape189 = x3d.Shape()
LineSet190 = x3d.LineSet()
LineSet190.vertexCount = [2]
Coordinate191 = x3d.Coordinate()
Coordinate191.point = [(3.4715, 0.0374, 0.6807),(3.6105, 0.033, 1.4168)]

LineSet190.coord = Coordinate191
"""from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2"""
ColorRGBA192 = x3d.ColorRGBA()
ColorRGBA192.USE = "HAnimSegmentLineColorRGBA"

LineSet190.color = ColorRGBA192

Shape189.geometry = LineSet190

HAnimSegment181.children.append(Shape189)
Shape193 = x3d.Shape()
LineSet194 = x3d.LineSet()
LineSet194.vertexCount = [2]
Coordinate195 = x3d.Coordinate()
Coordinate195.point = [(3.4715, 0.0374, 0.6807),(4.1235, 0.0328, 1.3453)]

LineSet194.coord = Coordinate195
"""from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2"""
ColorRGBA196 = x3d.ColorRGBA()
ColorRGBA196.USE = "HAnimSegmentLineColorRGBA"

LineSet194.color = ColorRGBA196

Shape193.geometry = LineSet194

HAnimSegment181.children.append(Shape193)

HAnimJoint180.children.append(HAnimSegment181)
HAnimJoint197 = x3d.HAnimJoint()
HAnimJoint197.name = "l_cuneonavicular_1"
HAnimJoint197.DEF = "hanim_l_cuneonavicular_1"
HAnimJoint197.center = [2.9855,0.0311,1.2819]
HAnimJoint197.ulimit = [0,0,0]
HAnimJoint197.llimit = [0,0,0]
HAnimSegment198 = x3d.HAnimSegment()
HAnimSegment198.name = "l_cuneiform_1"
HAnimSegment198.DEF = "hanim_l_cuneiform_1"
Transform199 = x3d.Transform()
Transform199.translation = [2.9855,0.0311,1.2819]
Transform200 = x3d.Transform()
"""Empty Transform"""
Shape201 = x3d.Shape()
Shape201.USE = "HAnimJointShape"

Transform200.children.append(Shape201)

Transform199.children.append(Transform200)

HAnimSegment198.children.append(Transform199)
Shape202 = x3d.Shape()
LineSet203 = x3d.LineSet()
LineSet203.vertexCount = [2]
Coordinate204 = x3d.Coordinate()
Coordinate204.point = [(2.9855, 0.0311, 1.2819),(2.8635, 0.0194, 2.4285)]

LineSet203.coord = Coordinate204
"""from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2"""
ColorRGBA205 = x3d.ColorRGBA()
ColorRGBA205.USE = "HAnimSegmentLineColorRGBA"

LineSet203.color = ColorRGBA205

Shape202.geometry = LineSet203

HAnimSegment198.children.append(Shape202)

HAnimJoint197.children.append(HAnimSegment198)
HAnimJoint206 = x3d.HAnimJoint()
HAnimJoint206.name = "l_tarsometatarsal_1"
HAnimJoint206.DEF = "hanim_l_tarsometatarsal_1"
HAnimJoint206.center = [2.8635,0.0194,2.4285]
HAnimJoint206.ulimit = [0,0,0]
HAnimJoint206.llimit = [0,0,0]
HAnimSegment207 = x3d.HAnimSegment()
HAnimSegment207.name = "l_metatarsal_1"
HAnimSegment207.DEF = "hanim_l_metatarsal_1"
Transform208 = x3d.Transform()
Transform208.translation = [2.8635,0.0194,2.4285]
Transform209 = x3d.Transform()
"""Empty Transform"""
Shape210 = x3d.Shape()
Shape210.USE = "HAnimJointShape"

Transform209.children.append(Shape210)

Transform208.children.append(Transform209)

HAnimSegment207.children.append(Transform208)
Shape211 = x3d.Shape()
LineSet212 = x3d.LineSet()
LineSet212.vertexCount = [2]
Coordinate213 = x3d.Coordinate()
Coordinate213.point = [(2.8635, 0.0194, 2.4285),(2.7525, 0.0077, 4.6255)]

LineSet212.coord = Coordinate213
"""from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2"""
ColorRGBA214 = x3d.ColorRGBA()
ColorRGBA214.USE = "HAnimSegmentLineColorRGBA"

LineSet212.color = ColorRGBA214

Shape211.geometry = LineSet212

HAnimSegment207.children.append(Shape211)
HAnimSite215 = x3d.HAnimSite()
HAnimSite215.name = "l_metatarsal_phalanx_1_pt"
HAnimSite215.DEF = "hanim_l_metatarsal_phalanx_1_pt"
TouchSensor216 = x3d.TouchSensor()
TouchSensor216.description = "HAnimSite l_metatarsal_phalanx_1_pt"

HAnimSite215.children.append(TouchSensor216)
Shape217 = x3d.Shape()
Shape217.USE = "HAnimSiteShape"

HAnimSite215.children.append(Shape217)

HAnimSegment207.children.append(HAnimSite215)

HAnimJoint206.children.append(HAnimSegment207)
HAnimJoint218 = x3d.HAnimJoint()
HAnimJoint218.name = "l_metatarsophalangeal_1"
HAnimJoint218.DEF = "hanim_l_metatarsophalangeal_1"
HAnimJoint218.center = [2.7525,0.0077,4.6255]
HAnimJoint218.ulimit = [0,0,0]
HAnimJoint218.llimit = [0,0,0]
HAnimSegment219 = x3d.HAnimSegment()
HAnimSegment219.name = "l_tarsal_proximal_phalanx_1"
HAnimSegment219.DEF = "hanim_l_tarsal_proximal_phalanx_1"
Transform220 = x3d.Transform()
Transform220.translation = [2.7525,0.0077,4.6255]
Transform221 = x3d.Transform()
"""Empty Transform"""
Shape222 = x3d.Shape()
Shape222.USE = "HAnimJointShape"

Transform221.children.append(Shape222)

Transform220.children.append(Transform221)

HAnimSegment219.children.append(Transform220)
Shape223 = x3d.Shape()
LineSet224 = x3d.LineSet()
LineSet224.vertexCount = [2]
Coordinate225 = x3d.Coordinate()
Coordinate225.point = [(2.7525, 0.0077, 4.6255),(2.7525, 0.0077, 4.6255)]

LineSet224.coord = Coordinate225
"""from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2"""
ColorRGBA226 = x3d.ColorRGBA()
ColorRGBA226.USE = "HAnimSegmentLineColorRGBA"

LineSet224.color = ColorRGBA226

Shape223.geometry = LineSet224

HAnimSegment219.children.append(Shape223)
HAnimSite227 = x3d.HAnimSite()
HAnimSite227.name = "l_tarsal_distal_phalanx_1_tip"
HAnimSite227.DEF = "hanim_l_tarsal_distal_phalanx_1_tip"
TouchSensor228 = x3d.TouchSensor()
TouchSensor228.description = "HAnimSite l_tarsal_distal_phalanx_1_tip"

HAnimSite227.children.append(TouchSensor228)
Shape229 = x3d.Shape()
Shape229.USE = "HAnimSiteShape"

HAnimSite227.children.append(Shape229)

HAnimSegment219.children.append(HAnimSite227)

HAnimJoint218.children.append(HAnimSegment219)
HAnimJoint230 = x3d.HAnimJoint()
HAnimJoint230.name = "l_tarsal_interphalangeal_1"
HAnimJoint230.DEF = "hanim_l_tarsal_interphalangeal_1"
HAnimJoint230.ulimit = [0,0,0]
HAnimJoint230.llimit = [0,0,0]

HAnimJoint218.children.append(HAnimJoint230)

HAnimJoint206.children.append(HAnimJoint218)

HAnimJoint197.children.append(HAnimJoint206)

HAnimJoint180.children.append(HAnimJoint197)
HAnimJoint231 = x3d.HAnimJoint()
HAnimJoint231.name = "l_cuneonavicular_2"
HAnimJoint231.DEF = "hanim_l_cuneonavicular_2"
HAnimJoint231.center = [3.6105,0.033,1.4168]
HAnimJoint231.ulimit = [0,0,0]
HAnimJoint231.llimit = [0,0,0]
HAnimSegment232 = x3d.HAnimSegment()
HAnimSegment232.name = "l_cuneiform_2"
HAnimSegment232.DEF = "hanim_l_cuneiform_2"
Transform233 = x3d.Transform()
Transform233.translation = [3.6105,0.033,1.4168]
Transform234 = x3d.Transform()
"""Empty Transform"""
Shape235 = x3d.Shape()
Shape235.USE = "HAnimJointShape"

Transform234.children.append(Shape235)

Transform233.children.append(Transform234)

HAnimSegment232.children.append(Transform233)
Shape236 = x3d.Shape()
LineSet237 = x3d.LineSet()
LineSet237.vertexCount = [2]
Coordinate238 = x3d.Coordinate()
Coordinate238.point = [(3.6105, 0.033, 1.4168),(3.5555, 0.0232, 2.2895)]

LineSet237.coord = Coordinate238
"""from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2"""
ColorRGBA239 = x3d.ColorRGBA()
ColorRGBA239.USE = "HAnimSegmentLineColorRGBA"

LineSet237.color = ColorRGBA239

Shape236.geometry = LineSet237

HAnimSegment232.children.append(Shape236)

HAnimJoint231.children.append(HAnimSegment232)
HAnimJoint240 = x3d.HAnimJoint()
HAnimJoint240.name = "l_tarsometatarsal_2"
HAnimJoint240.DEF = "hanim_l_tarsometatarsal_2"
HAnimJoint240.center = [3.5555,0.0232,2.2895]
HAnimJoint240.ulimit = [0,0,0]
HAnimJoint240.llimit = [0,0,0]
HAnimSegment241 = x3d.HAnimSegment()
HAnimSegment241.name = "l_metatarsal_2"
HAnimSegment241.DEF = "hanim_l_metatarsal_2"
Transform242 = x3d.Transform()
Transform242.translation = [3.5555,0.0232,2.2895]
Transform243 = x3d.Transform()
"""Empty Transform"""
Shape244 = x3d.Shape()
Shape244.USE = "HAnimJointShape"

Transform243.children.append(Shape244)

Transform242.children.append(Transform243)

HAnimSegment241.children.append(Transform242)
Shape245 = x3d.Shape()
LineSet246 = x3d.LineSet()
LineSet246.vertexCount = [2]
Coordinate247 = x3d.Coordinate()
Coordinate247.point = [(3.5555, 0.0232, 2.2895),(3.6595, 0.0085, 4.8125)]

LineSet246.coord = Coordinate247
"""from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2"""
ColorRGBA248 = x3d.ColorRGBA()
ColorRGBA248.USE = "HAnimSegmentLineColorRGBA"

LineSet246.color = ColorRGBA248

Shape245.geometry = LineSet246

HAnimSegment241.children.append(Shape245)

HAnimJoint240.children.append(HAnimSegment241)
HAnimJoint249 = x3d.HAnimJoint()
HAnimJoint249.name = "l_metatarsophalangeal_2"
HAnimJoint249.DEF = "hanim_l_metatarsophalangeal_2"
HAnimJoint249.center = [3.6595,0.0085,4.8125]
HAnimJoint249.ulimit = [0,0,0]
HAnimJoint249.llimit = [0,0,0]
HAnimSegment250 = x3d.HAnimSegment()
HAnimSegment250.name = "l_tarsal_proximal_phalanx_2"
HAnimSegment250.DEF = "hanim_l_tarsal_proximal_phalanx_2"
Transform251 = x3d.Transform()
Transform251.translation = [3.6595,0.0085,4.8125]
Transform252 = x3d.Transform()
"""Empty Transform"""
Shape253 = x3d.Shape()
Shape253.USE = "HAnimJointShape"

Transform252.children.append(Shape253)

Transform251.children.append(Transform252)

HAnimSegment250.children.append(Transform251)
Shape254 = x3d.Shape()
LineSet255 = x3d.LineSet()
LineSet255.vertexCount = [2]
Coordinate256 = x3d.Coordinate()
Coordinate256.point = [(3.6595, 0.0085, 4.8125),(3.7385, 0.0054, 5.5315)]

LineSet255.coord = Coordinate256
"""from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2"""
ColorRGBA257 = x3d.ColorRGBA()
ColorRGBA257.USE = "HAnimSegmentLineColorRGBA"

LineSet255.color = ColorRGBA257

Shape254.geometry = LineSet255

HAnimSegment250.children.append(Shape254)

HAnimJoint249.children.append(HAnimSegment250)
HAnimJoint258 = x3d.HAnimJoint()
HAnimJoint258.name = "l_tarsal_proximal_interphalangeal_2"
HAnimJoint258.DEF = "hanim_l_tarsal_proximal_interphalangeal_2"
HAnimJoint258.center = [3.7385,0.0054,5.5315]
HAnimJoint258.ulimit = [0,0,0]
HAnimJoint258.llimit = [0,0,0]
HAnimSegment259 = x3d.HAnimSegment()
HAnimSegment259.name = "l_tarsal_middle_phalanx_2"
HAnimSegment259.DEF = "hanim_l_tarsal_middle_phalanx_2"
Transform260 = x3d.Transform()
Transform260.translation = [3.7385,0.0054,5.5315]
Transform261 = x3d.Transform()
"""Empty Transform"""
Shape262 = x3d.Shape()
Shape262.USE = "HAnimJointShape"

Transform261.children.append(Shape262)

Transform260.children.append(Transform261)

HAnimSegment259.children.append(Transform260)
Shape263 = x3d.Shape()
LineSet264 = x3d.LineSet()
LineSet264.vertexCount = [2]
Coordinate265 = x3d.Coordinate()
Coordinate265.point = [(3.7385, 0.0054, 5.5315),(3.7385, 0.0017, 5.9505)]

LineSet264.coord = Coordinate265
"""from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2"""
ColorRGBA266 = x3d.ColorRGBA()
ColorRGBA266.USE = "HAnimSegmentLineColorRGBA"

LineSet264.color = ColorRGBA266

Shape263.geometry = LineSet264

HAnimSegment259.children.append(Shape263)
HAnimSite267 = x3d.HAnimSite()
HAnimSite267.name = "l_tarsal_distal_phalanx_2_tip"
HAnimSite267.DEF = "hanim_l_tarsal_distal_phalanx_2_tip"
HAnimSite267.translation = [0.1195,0.0079,0.1433]
TouchSensor268 = x3d.TouchSensor()
TouchSensor268.description = "HAnimSite l_tarsal_distal_phalanx_2_tip"

HAnimSite267.children.append(TouchSensor268)
Shape269 = x3d.Shape()
Shape269.USE = "HAnimSiteShape"

HAnimSite267.children.append(Shape269)

HAnimSegment259.children.append(HAnimSite267)

HAnimJoint258.children.append(HAnimSegment259)
HAnimJoint270 = x3d.HAnimJoint()
HAnimJoint270.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint270.DEF = "hanim_l_tarsal_distal_interphalangeal_2"
HAnimJoint270.center = [3.7385,0.0017,5.9505]
HAnimJoint270.ulimit = [0,0,0]
HAnimJoint270.llimit = [0,0,0]

HAnimJoint258.children.append(HAnimJoint270)

HAnimJoint249.children.append(HAnimJoint258)

HAnimJoint240.children.append(HAnimJoint249)

HAnimJoint231.children.append(HAnimJoint240)

HAnimJoint180.children.append(HAnimJoint231)
HAnimJoint271 = x3d.HAnimJoint()
HAnimJoint271.name = "l_cuneonavicular_3"
HAnimJoint271.DEF = "hanim_l_cuneonavicular_3"
HAnimJoint271.center = [4.1235,0.0328,1.3453]
HAnimJoint271.ulimit = [0,0,0]
HAnimJoint271.llimit = [0,0,0]
HAnimSegment272 = x3d.HAnimSegment()
HAnimSegment272.name = "l_cuneiform_3"
HAnimSegment272.DEF = "hanim_l_cuneiform_3"
Transform273 = x3d.Transform()
Transform273.translation = [4.1235,0.0328,1.3453]
Transform274 = x3d.Transform()
"""Empty Transform"""
Shape275 = x3d.Shape()
Shape275.USE = "HAnimJointShape"

Transform274.children.append(Shape275)

Transform273.children.append(Transform274)

HAnimSegment272.children.append(Transform273)
Shape276 = x3d.Shape()
LineSet277 = x3d.LineSet()
LineSet277.vertexCount = [2]
Coordinate278 = x3d.Coordinate()
Coordinate278.point = [(4.1235, 0.0328, 1.3453),(3.7385, 0.0017, 5.9505)]

LineSet277.coord = Coordinate278
"""from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2"""
ColorRGBA279 = x3d.ColorRGBA()
ColorRGBA279.USE = "HAnimSegmentLineColorRGBA"

LineSet277.color = ColorRGBA279

Shape276.geometry = LineSet277

HAnimSegment272.children.append(Shape276)

HAnimJoint271.children.append(HAnimSegment272)
HAnimJoint280 = x3d.HAnimJoint()
HAnimJoint280.name = "l_tarsometatarsal_3"
HAnimJoint280.DEF = "hanim_l_tarsometatarsal_3"
HAnimJoint280.ulimit = [0,0,0]
HAnimJoint280.llimit = [0,0,0]
HAnimSegment281 = x3d.HAnimSegment()
HAnimSegment281.name = "l_metatarsal_3"
HAnimSegment281.DEF = "hanim_l_metatarsal_3"
Transform282 = x3d.Transform()
Transform282.translation = [4.1235,0.0328,1.3453]
Transform283 = x3d.Transform()
"""Empty Transform"""
Shape284 = x3d.Shape()
Shape284.USE = "HAnimJointShape"

Transform283.children.append(Shape284)

Transform282.children.append(Transform283)

HAnimSegment281.children.append(Transform282)
Shape285 = x3d.Shape()
LineSet286 = x3d.LineSet()
LineSet286.vertexCount = [2]
Coordinate287 = x3d.Coordinate()
Coordinate287.point = [(4.2795, 0.0086, 4.7055)]

LineSet286.coord = Coordinate287
"""from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 1"""
ColorRGBA288 = x3d.ColorRGBA()
ColorRGBA288.USE = "HAnimSegmentLineColorRGBA"

LineSet286.color = ColorRGBA288

Shape285.geometry = LineSet286

HAnimSegment281.children.append(Shape285)

HAnimJoint280.children.append(HAnimSegment281)
HAnimJoint289 = x3d.HAnimJoint()
HAnimJoint289.name = "l_metatarsophalangeal_3"
HAnimJoint289.DEF = "hanim_l_metatarsophalangeal_3"
HAnimJoint289.center = [4.2795,0.0086,4.7055]
HAnimJoint289.ulimit = [0,0,0]
HAnimJoint289.llimit = [0,0,0]
HAnimSegment290 = x3d.HAnimSegment()
HAnimSegment290.name = "l_tarsal_proximal_phalanx_3"
HAnimSegment290.DEF = "hanim_l_tarsal_proximal_phalanx_3"
Transform291 = x3d.Transform()
Transform291.translation = [4.2795,0.0086,4.7055]
Transform292 = x3d.Transform()
"""Empty Transform"""
Shape293 = x3d.Shape()
Shape293.USE = "HAnimJointShape"

Transform292.children.append(Shape293)

Transform291.children.append(Transform292)

HAnimSegment290.children.append(Transform291)
Shape294 = x3d.Shape()
LineSet295 = x3d.LineSet()
LineSet295.vertexCount = [2]
Coordinate296 = x3d.Coordinate()
Coordinate296.point = [(4.2795, 0.0086, 4.7055),(4.3855, 0.0044, 5.3745)]

LineSet295.coord = Coordinate296
"""from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2"""
ColorRGBA297 = x3d.ColorRGBA()
ColorRGBA297.USE = "HAnimSegmentLineColorRGBA"

LineSet295.color = ColorRGBA297

Shape294.geometry = LineSet295

HAnimSegment290.children.append(Shape294)

HAnimJoint289.children.append(HAnimSegment290)
HAnimJoint298 = x3d.HAnimJoint()
HAnimJoint298.name = "l_tarsal_proximal_interphalangeal_3"
HAnimJoint298.DEF = "hanim_l_tarsal_proximal_interphalangeal_3"
HAnimJoint298.center = [4.3855,0.0044,5.3745]
HAnimJoint298.ulimit = [0,0,0]
HAnimJoint298.llimit = [0,0,0]
HAnimSegment299 = x3d.HAnimSegment()
HAnimSegment299.name = "l_tarsal_middle_phalanx_3"
HAnimSegment299.DEF = "hanim_l_tarsal_middle_phalanx_3"
Transform300 = x3d.Transform()
Transform300.translation = [4.3855,0.0044,5.3745]
Transform301 = x3d.Transform()
"""Empty Transform"""
Shape302 = x3d.Shape()
Shape302.USE = "HAnimJointShape"

Transform301.children.append(Shape302)

Transform300.children.append(Transform301)

HAnimSegment299.children.append(Transform300)
Shape303 = x3d.Shape()
LineSet304 = x3d.LineSet()
LineSet304.vertexCount = [2]
Coordinate305 = x3d.Coordinate()
Coordinate305.point = [(4.3855, 0.0044, 5.3745),(4.4545, 0.0017, 5.7845)]

LineSet304.coord = Coordinate305
"""from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2"""
ColorRGBA306 = x3d.ColorRGBA()
ColorRGBA306.USE = "HAnimSegmentLineColorRGBA"

LineSet304.color = ColorRGBA306

Shape303.geometry = LineSet304

HAnimSegment299.children.append(Shape303)
HAnimSite307 = x3d.HAnimSite()
HAnimSite307.name = "l_tarsal_distal_phalanx_3_tip"
HAnimSite307.DEF = "hanim_l_tarsal_distal_phalanx_3_tip"
TouchSensor308 = x3d.TouchSensor()
TouchSensor308.description = "HAnimSite l_tarsal_distal_phalanx_3_tip"

HAnimSite307.children.append(TouchSensor308)
Shape309 = x3d.Shape()
Shape309.USE = "HAnimSiteShape"

HAnimSite307.children.append(Shape309)

HAnimSegment299.children.append(HAnimSite307)

HAnimJoint298.children.append(HAnimSegment299)
HAnimJoint310 = x3d.HAnimJoint()
HAnimJoint310.name = "l_tarsal_distal_interphalangeal_3"
HAnimJoint310.DEF = "hanim_l_tarsal_distal_interphalangeal_3"
HAnimJoint310.center = [4.4545,0.0017,5.7845]
HAnimJoint310.ulimit = [0,0,0]
HAnimJoint310.llimit = [0,0,0]

HAnimJoint298.children.append(HAnimJoint310)

HAnimJoint289.children.append(HAnimJoint298)

HAnimJoint280.children.append(HAnimJoint289)

HAnimJoint271.children.append(HAnimJoint280)

HAnimJoint180.children.append(HAnimJoint271)

HAnimJoint167.children.append(HAnimJoint180)
HAnimJoint311 = x3d.HAnimJoint()
HAnimJoint311.name = "l_calcaneocuboid"
HAnimJoint311.DEF = "hanim_l_calcaneocuboid"
HAnimJoint311.center = [3.9515,0.0653,-0.6895]
HAnimJoint311.ulimit = [0,0,0]
HAnimJoint311.llimit = [0,0,0]
HAnimSegment312 = x3d.HAnimSegment()
HAnimSegment312.name = "l_calcaneus"
HAnimSegment312.DEF = "hanim_l_calcaneus"
Transform313 = x3d.Transform()
Transform313.translation = [3.9515,0.0653,-0.6895]
Transform314 = x3d.Transform()
"""Empty Transform"""
Shape315 = x3d.Shape()
Shape315.USE = "HAnimJointShape"

Transform314.children.append(Shape315)

Transform313.children.append(Transform314)

HAnimSegment312.children.append(Transform313)
Shape316 = x3d.Shape()
LineSet317 = x3d.LineSet()
LineSet317.vertexCount = [2]
Coordinate318 = x3d.Coordinate()
Coordinate318.point = [(3.9515, 0.0653, -0.6895),(4.9085, 0.0353, 0.5574)]

LineSet317.coord = Coordinate318
"""from l_calcaneocuboid to l_transversetarsal vertices 2"""
ColorRGBA319 = x3d.ColorRGBA()
ColorRGBA319.USE = "HAnimSegmentLineColorRGBA"

LineSet317.color = ColorRGBA319

Shape316.geometry = LineSet317

HAnimSegment312.children.append(Shape316)

HAnimJoint311.children.append(HAnimSegment312)
HAnimJoint320 = x3d.HAnimJoint()
HAnimJoint320.name = "l_transversetarsal"
HAnimJoint320.DEF = "hanim_l_transversetarsal"
HAnimJoint320.center = [4.9085,0.0353,0.5574]
HAnimJoint320.ulimit = [0,0,0]
HAnimJoint320.llimit = [0,0,0]
HAnimSegment321 = x3d.HAnimSegment()
HAnimSegment321.name = "l_cuboid"
HAnimSegment321.DEF = "hanim_l_cuboid"
Transform322 = x3d.Transform()
Transform322.translation = [4.9085,0.0353,0.5574]
Transform323 = x3d.Transform()
"""Empty Transform"""
Shape324 = x3d.Shape()
Shape324.USE = "HAnimJointShape"

Transform323.children.append(Shape324)

Transform322.children.append(Transform323)

HAnimSegment321.children.append(Transform322)
Shape325 = x3d.Shape()
LineSet326 = x3d.LineSet()
LineSet326.vertexCount = [2]
Coordinate327 = x3d.Coordinate()
Coordinate327.point = [(4.9085, 0.0353, 0.5574),(4.7245, 0.0211, 2.1725)]

LineSet326.coord = Coordinate327
"""from l_transversetarsal to l_tarsometatarsal_4 vertices 2"""
ColorRGBA328 = x3d.ColorRGBA()
ColorRGBA328.USE = "HAnimSegmentLineColorRGBA"

LineSet326.color = ColorRGBA328

Shape325.geometry = LineSet326

HAnimSegment321.children.append(Shape325)
Shape329 = x3d.Shape()
LineSet330 = x3d.LineSet()
LineSet330.vertexCount = [2]
Coordinate331 = x3d.Coordinate()
Coordinate331.point = [(4.9085, 0.0353, 0.5574),(5.3615, 0.0164, 2.0085)]

LineSet330.coord = Coordinate331
"""from l_transversetarsal to l_tarsometatarsal_5 vertices 2"""
ColorRGBA332 = x3d.ColorRGBA()
ColorRGBA332.USE = "HAnimSegmentLineColorRGBA"

LineSet330.color = ColorRGBA332

Shape329.geometry = LineSet330

HAnimSegment321.children.append(Shape329)

HAnimJoint320.children.append(HAnimSegment321)
HAnimJoint333 = x3d.HAnimJoint()
HAnimJoint333.name = "l_tarsometatarsal_4"
HAnimJoint333.DEF = "hanim_l_tarsometatarsal_4"
HAnimJoint333.center = [4.7245,0.0211,2.1725]
HAnimJoint333.ulimit = [0,0,0]
HAnimJoint333.llimit = [0,0,0]
HAnimSegment334 = x3d.HAnimSegment()
HAnimSegment334.name = "l_metatarsal_4"
HAnimSegment334.DEF = "hanim_l_metatarsal_4"
Transform335 = x3d.Transform()
Transform335.translation = [4.7245,0.0211,2.1725]
Transform336 = x3d.Transform()
"""Empty Transform"""
Shape337 = x3d.Shape()
Shape337.USE = "HAnimJointShape"

Transform336.children.append(Shape337)

Transform335.children.append(Transform336)

HAnimSegment334.children.append(Transform335)
Shape338 = x3d.Shape()
LineSet339 = x3d.LineSet()
LineSet339.vertexCount = [2]
Coordinate340 = x3d.Coordinate()
Coordinate340.point = [(4.7245, 0.0211, 2.1725),(4.8745, 0.0076, 4.5165)]

LineSet339.coord = Coordinate340
"""from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2"""
ColorRGBA341 = x3d.ColorRGBA()
ColorRGBA341.USE = "HAnimSegmentLineColorRGBA"

LineSet339.color = ColorRGBA341

Shape338.geometry = LineSet339

HAnimSegment334.children.append(Shape338)

HAnimJoint333.children.append(HAnimSegment334)
HAnimJoint342 = x3d.HAnimJoint()
HAnimJoint342.name = "l_metatarsophalangeal_4"
HAnimJoint342.DEF = "hanim_l_metatarsophalangeal_4"
HAnimJoint342.center = [4.8745,0.0076,4.5165]
HAnimJoint342.ulimit = [0,0,0]
HAnimJoint342.llimit = [0,0,0]
HAnimSegment343 = x3d.HAnimSegment()
HAnimSegment343.name = "l_tarsal_proximal_phalanx_4"
HAnimSegment343.DEF = "hanim_l_tarsal_proximal_phalanx_4"
Transform344 = x3d.Transform()
Transform344.translation = [4.8745,0.0076,4.5165]
Transform345 = x3d.Transform()
"""Empty Transform"""
Shape346 = x3d.Shape()
Shape346.USE = "HAnimJointShape"

Transform345.children.append(Shape346)

Transform344.children.append(Transform345)

HAnimSegment343.children.append(Transform344)
Shape347 = x3d.Shape()
LineSet348 = x3d.LineSet()
LineSet348.vertexCount = [2]
Coordinate349 = x3d.Coordinate()
Coordinate349.point = [(4.8745, 0.0076, 4.5165),(5.0655, 0.0049, 5.1895)]

LineSet348.coord = Coordinate349
"""from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2"""
ColorRGBA350 = x3d.ColorRGBA()
ColorRGBA350.USE = "HAnimSegmentLineColorRGBA"

LineSet348.color = ColorRGBA350

Shape347.geometry = LineSet348

HAnimSegment343.children.append(Shape347)

HAnimJoint342.children.append(HAnimSegment343)
HAnimJoint351 = x3d.HAnimJoint()
HAnimJoint351.name = "l_tarsal_proximal_interphalangeal_4"
HAnimJoint351.DEF = "hanim_l_tarsal_proximal_interphalangeal_4"
HAnimJoint351.center = [5.0655,0.0049,5.1895]
HAnimJoint351.ulimit = [0,0,0]
HAnimJoint351.llimit = [0,0,0]
HAnimSegment352 = x3d.HAnimSegment()
HAnimSegment352.name = "l_tarsal_middle_phalanx_4"
HAnimSegment352.DEF = "hanim_l_tarsal_middle_phalanx_4"
Transform353 = x3d.Transform()
Transform353.translation = [5.0655,0.0049,5.1895]
Transform354 = x3d.Transform()
"""Empty Transform"""
Shape355 = x3d.Shape()
Shape355.USE = "HAnimJointShape"

Transform354.children.append(Shape355)

Transform353.children.append(Transform354)

HAnimSegment352.children.append(Transform353)
Shape356 = x3d.Shape()
LineSet357 = x3d.LineSet()
LineSet357.vertexCount = [2]
Coordinate358 = x3d.Coordinate()
Coordinate358.point = [(5.0655, 0.0049, 5.1895),(5.1325, 0.0011, 5.5175)]

LineSet357.coord = Coordinate358
"""from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2"""
ColorRGBA359 = x3d.ColorRGBA()
ColorRGBA359.USE = "HAnimSegmentLineColorRGBA"

LineSet357.color = ColorRGBA359

Shape356.geometry = LineSet357

HAnimSegment352.children.append(Shape356)
HAnimSite360 = x3d.HAnimSite()
HAnimSite360.name = "l_tarsal_distal_phalanx_4_tip"
HAnimSite360.DEF = "hanim_l_tarsal_distal_phalanx_4_tip"
TouchSensor361 = x3d.TouchSensor()
TouchSensor361.description = "HAnimSite l_tarsal_distal_phalanx_4_tip"

HAnimSite360.children.append(TouchSensor361)
Shape362 = x3d.Shape()
Shape362.USE = "HAnimSiteShape"

HAnimSite360.children.append(Shape362)

HAnimSegment352.children.append(HAnimSite360)

HAnimJoint351.children.append(HAnimSegment352)
HAnimJoint363 = x3d.HAnimJoint()
HAnimJoint363.name = "l_tarsal_distal_interphalangeal_4"
HAnimJoint363.DEF = "hanim_l_tarsal_distal_interphalangeal_4"
HAnimJoint363.center = [5.1325,0.0011,5.5175]
HAnimJoint363.ulimit = [0,0,0]
HAnimJoint363.llimit = [0,0,0]

HAnimJoint351.children.append(HAnimJoint363)

HAnimJoint342.children.append(HAnimJoint351)

HAnimJoint333.children.append(HAnimJoint342)

HAnimJoint320.children.append(HAnimJoint333)
HAnimJoint364 = x3d.HAnimJoint()
HAnimJoint364.name = "l_tarsometatarsal_5"
HAnimJoint364.DEF = "hanim_l_tarsometatarsal_5"
HAnimJoint364.center = [5.3615,0.0164,2.0085]
HAnimJoint364.ulimit = [0,0,0]
HAnimJoint364.llimit = [0,0,0]
HAnimSegment365 = x3d.HAnimSegment()
HAnimSegment365.name = "l_metatarsal_5"
HAnimSegment365.DEF = "hanim_l_metatarsal_5"
Transform366 = x3d.Transform()
Transform366.translation = [5.3615,0.0164,2.0085]
Transform367 = x3d.Transform()
"""Empty Transform"""
Shape368 = x3d.Shape()
Shape368.USE = "HAnimJointShape"

Transform367.children.append(Shape368)

Transform366.children.append(Transform367)

HAnimSegment365.children.append(Transform366)
Shape369 = x3d.Shape()
LineSet370 = x3d.LineSet()
LineSet370.vertexCount = [2]
Coordinate371 = x3d.Coordinate()
Coordinate371.point = [(5.3615, 0.0164, 2.0085),(5.5055, 0.0067, 4.3115)]

LineSet370.coord = Coordinate371
"""from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2"""
ColorRGBA372 = x3d.ColorRGBA()
ColorRGBA372.USE = "HAnimSegmentLineColorRGBA"

LineSet370.color = ColorRGBA372

Shape369.geometry = LineSet370

HAnimSegment365.children.append(Shape369)
HAnimSite373 = x3d.HAnimSite()
HAnimSite373.name = "l_metatarsal_phalanx_5_pt"
HAnimSite373.DEF = "hanim_l_metatarsal_phalanx_5_pt"
TouchSensor374 = x3d.TouchSensor()
TouchSensor374.description = "HAnimSite l_metatarsal_phalanx_5_pt"

HAnimSite373.children.append(TouchSensor374)
Shape375 = x3d.Shape()
Shape375.USE = "HAnimSiteShape"

HAnimSite373.children.append(Shape375)

HAnimSegment365.children.append(HAnimSite373)

HAnimJoint364.children.append(HAnimSegment365)
HAnimJoint376 = x3d.HAnimJoint()
HAnimJoint376.name = "l_metatarsophalangeal_5"
HAnimJoint376.DEF = "hanim_l_metatarsophalangeal_5"
HAnimJoint376.center = [5.5055,0.0067,4.3115]
HAnimJoint376.ulimit = [0,0,0]
HAnimJoint376.llimit = [0,0,0]
HAnimSegment377 = x3d.HAnimSegment()
HAnimSegment377.name = "l_tarsal_proximal_phalanx_5"
HAnimSegment377.DEF = "hanim_l_tarsal_proximal_phalanx_5"
Transform378 = x3d.Transform()
Transform378.translation = [5.5055,0.0067,4.3115]
Transform379 = x3d.Transform()
"""Empty Transform"""
Shape380 = x3d.Shape()
Shape380.USE = "HAnimJointShape"

Transform379.children.append(Shape380)

Transform378.children.append(Transform379)

HAnimSegment377.children.append(Transform378)
Shape381 = x3d.Shape()
LineSet382 = x3d.LineSet()
LineSet382.vertexCount = [2]
Coordinate383 = x3d.Coordinate()
Coordinate383.point = [(5.5055, 0.0067, 4.3115),(5.6085, 0.003, 4.6485)]

LineSet382.coord = Coordinate383
"""from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2"""
ColorRGBA384 = x3d.ColorRGBA()
ColorRGBA384.USE = "HAnimSegmentLineColorRGBA"

LineSet382.color = ColorRGBA384

Shape381.geometry = LineSet382

HAnimSegment377.children.append(Shape381)

HAnimJoint376.children.append(HAnimSegment377)
HAnimJoint385 = x3d.HAnimJoint()
HAnimJoint385.name = "l_tarsal_proximal_interphalangeal_5"
HAnimJoint385.DEF = "hanim_l_tarsal_proximal_interphalangeal_5"
HAnimJoint385.center = [5.6085,0.003,4.6485]
HAnimJoint385.ulimit = [0,0,0]
HAnimJoint385.llimit = [0,0,0]
HAnimSegment386 = x3d.HAnimSegment()
HAnimSegment386.name = "l_tarsal_middle_phalanx_5"
HAnimSegment386.DEF = "hanim_l_tarsal_middle_phalanx_5"
Transform387 = x3d.Transform()
Transform387.translation = [5.6085,0.003,4.6485]
Transform388 = x3d.Transform()
"""Empty Transform"""
Shape389 = x3d.Shape()
Shape389.USE = "HAnimJointShape"

Transform388.children.append(Shape389)

Transform387.children.append(Transform388)

HAnimSegment386.children.append(Transform387)
Shape390 = x3d.Shape()
LineSet391 = x3d.LineSet()
LineSet391.vertexCount = [2]
Coordinate392 = x3d.Coordinate()
Coordinate392.point = [(5.6085, 0.003, 4.6485),(5.6485, 0, 4.9925)]

LineSet391.coord = Coordinate392
"""from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2"""
ColorRGBA393 = x3d.ColorRGBA()
ColorRGBA393.USE = "HAnimSegmentLineColorRGBA"

LineSet391.color = ColorRGBA393

Shape390.geometry = LineSet391

HAnimSegment386.children.append(Shape390)
HAnimSite394 = x3d.HAnimSite()
HAnimSite394.name = "l_tarsal_distal_phalanx_5_tip"
HAnimSite394.DEF = "hanim_l_tarsal_distal_phalanx_5_tip"
TouchSensor395 = x3d.TouchSensor()
TouchSensor395.description = "HAnimSite l_tarsal_distal_phalanx_5_tip"

HAnimSite394.children.append(TouchSensor395)
Shape396 = x3d.Shape()
Shape396.USE = "HAnimSiteShape"

HAnimSite394.children.append(Shape396)

HAnimSegment386.children.append(HAnimSite394)

HAnimJoint385.children.append(HAnimSegment386)
HAnimJoint397 = x3d.HAnimJoint()
HAnimJoint397.name = "l_tarsal_distal_interphalangeal_5"
HAnimJoint397.DEF = "hanim_l_tarsal_distal_interphalangeal_5"
HAnimJoint397.center = [5.6485,0,4.9925]
HAnimJoint397.ulimit = [0,0,0]
HAnimJoint397.llimit = [0,0,0]

HAnimJoint385.children.append(HAnimJoint397)

HAnimJoint376.children.append(HAnimJoint385)

HAnimJoint364.children.append(HAnimJoint376)

HAnimJoint320.children.append(HAnimJoint364)

HAnimJoint311.children.append(HAnimJoint320)

HAnimJoint167.children.append(HAnimJoint311)

HAnimJoint152.children.append(HAnimJoint167)

HAnimJoint134.children.append(HAnimJoint152)

HAnimJoint97.children.append(HAnimJoint134)
HAnimJoint398 = x3d.HAnimJoint()
HAnimJoint398.name = "r_hip"
HAnimJoint398.DEF = "hanim_r_hip"
HAnimJoint398.center = [-0.095,0.9171,0.0029]
HAnimJoint398.ulimit = [0,0,0]
HAnimJoint398.llimit = [0,0,0]
HAnimSegment399 = x3d.HAnimSegment()
HAnimSegment399.name = "r_thigh"
HAnimSegment399.DEF = "hanim_r_thigh"
Transform400 = x3d.Transform()
Transform400.translation = [-0.095,0.9171,0.0029]
Transform401 = x3d.Transform()
"""Empty Transform"""
Shape402 = x3d.Shape()
Shape402.USE = "HAnimJointShape"

Transform401.children.append(Shape402)

Transform400.children.append(Transform401)

HAnimSegment399.children.append(Transform400)
Shape403 = x3d.Shape()
LineSet404 = x3d.LineSet()
LineSet404.vertexCount = [2]
Coordinate405 = x3d.Coordinate()
Coordinate405.point = [(-0.095, 0.9171, 0.0029),(-0.0867, 0.4913, 0.0318)]

LineSet404.coord = Coordinate405
"""from r_hip to r_knee vertices 2"""
ColorRGBA406 = x3d.ColorRGBA()
ColorRGBA406.USE = "HAnimSegmentLineColorRGBA"

LineSet404.color = ColorRGBA406

Shape403.geometry = LineSet404

HAnimSegment399.children.append(Shape403)
HAnimSite407 = x3d.HAnimSite()
HAnimSite407.name = "r_lateral_malleolus_pt"
HAnimSite407.DEF = "hanim_r_lateral_malleolus_pt"
HAnimSite407.translation = [-0.1006,0.0658,-0.1075]
TouchSensor408 = x3d.TouchSensor()
TouchSensor408.description = "HAnimSite r_lateral_malleolus_pt"

HAnimSite407.children.append(TouchSensor408)
Shape409 = x3d.Shape()
Shape409.USE = "HAnimSiteShape"

HAnimSite407.children.append(Shape409)

HAnimSegment399.children.append(HAnimSite407)
HAnimSite410 = x3d.HAnimSite()
HAnimSite410.name = "r_medial_malleolus_pt"
HAnimSite410.DEF = "hanim_r_medial_malleolus_pt"
HAnimSite410.translation = [-0.0591,0.076,-0.0928]
TouchSensor411 = x3d.TouchSensor()
TouchSensor411.description = "HAnimSite r_medial_malleolus_pt"

HAnimSite410.children.append(TouchSensor411)
Shape412 = x3d.Shape()
Shape412.USE = "HAnimSiteShape"

HAnimSite410.children.append(Shape412)

HAnimSegment399.children.append(HAnimSite410)
HAnimSite413 = x3d.HAnimSite()
HAnimSite413.name = "r_tibiale_pt"
HAnimSite413.DEF = "hanim_r_tibiale_pt"
TouchSensor414 = x3d.TouchSensor()
TouchSensor414.description = "HAnimSite r_tibiale_pt"

HAnimSite413.children.append(TouchSensor414)
Shape415 = x3d.Shape()
Shape415.USE = "HAnimSiteShape"

HAnimSite413.children.append(Shape415)

HAnimSegment399.children.append(HAnimSite413)

HAnimJoint398.children.append(HAnimSegment399)
HAnimJoint416 = x3d.HAnimJoint()
HAnimJoint416.name = "r_knee"
HAnimJoint416.DEF = "hanim_r_knee"
HAnimJoint416.center = [-0.0867,0.4913,0.0318]
HAnimJoint416.ulimit = [0,0,0]
HAnimJoint416.llimit = [0,0,0]
HAnimSegment417 = x3d.HAnimSegment()
HAnimSegment417.name = "r_calf"
HAnimSegment417.DEF = "hanim_r_calf"
Transform418 = x3d.Transform()
Transform418.translation = [-0.0867,0.4913,0.0318]
Transform419 = x3d.Transform()
"""Empty Transform"""
Shape420 = x3d.Shape()
Shape420.USE = "HAnimJointShape"

Transform419.children.append(Shape420)

Transform418.children.append(Transform419)

HAnimSegment417.children.append(Transform418)
Shape421 = x3d.Shape()
LineSet422 = x3d.LineSet()
LineSet422.vertexCount = [2]
Coordinate423 = x3d.Coordinate()
Coordinate423.point = [(-0.0867, 0.4913, 0.0318),(-0.0801, 0.0712, -0.0766)]

LineSet422.coord = Coordinate423
"""from r_knee to r_talocrural vertices 2"""
ColorRGBA424 = x3d.ColorRGBA()
ColorRGBA424.USE = "HAnimSegmentLineColorRGBA"

LineSet422.color = ColorRGBA424

Shape421.geometry = LineSet422

HAnimSegment417.children.append(Shape421)
HAnimSite425 = x3d.HAnimSite()
HAnimSite425.name = "r_calcaneus_posterior_pt"
HAnimSite425.DEF = "hanim_r_calcaneus_posterior_pt"
HAnimSite425.translation = [-0.0692,0.0297,-0.1221]
TouchSensor426 = x3d.TouchSensor()
TouchSensor426.description = "HAnimSite r_calcaneus_posterior_pt"

HAnimSite425.children.append(TouchSensor426)
Shape427 = x3d.Shape()
Shape427.USE = "HAnimSiteShape"

HAnimSite425.children.append(Shape427)

HAnimSegment417.children.append(HAnimSite425)
HAnimSite428 = x3d.HAnimSite()
HAnimSite428.name = "r_sphyrion_pt"
HAnimSite428.DEF = "hanim_r_sphyrion_pt"
HAnimSite428.translation = [-0.0603,0.061,-0.1002]
TouchSensor429 = x3d.TouchSensor()
TouchSensor429.description = "HAnimSite r_sphyrion_pt"

HAnimSite428.children.append(TouchSensor429)
Shape430 = x3d.Shape()
Shape430.USE = "HAnimSiteShape"

HAnimSite428.children.append(Shape430)

HAnimSegment417.children.append(HAnimSite428)

HAnimJoint416.children.append(HAnimSegment417)
HAnimJoint431 = x3d.HAnimJoint()
HAnimJoint431.name = "r_talocrural"
HAnimJoint431.DEF = "hanim_r_talocrural"
HAnimJoint431.center = [-0.0801,0.0712,-0.0766]
HAnimJoint431.ulimit = [0,0,0]
HAnimJoint431.llimit = [0,0,0]
HAnimSegment432 = x3d.HAnimSegment()
HAnimSegment432.name = "r_talus"
HAnimSegment432.DEF = "hanim_r_talus"
Transform433 = x3d.Transform()
Transform433.scale = [0.15,0.15,0.15]
Transform433.translation = [-0.05,0.06,-0.025]
Transform433.rotation = [1,0,0,-1.57]
"""Transform right foot"""
Transform434 = x3d.Transform()
"""Empty Transform right foot"""
Shape435 = x3d.Shape()
Shape435.USE = "HAnimJointShape"

Transform434.children.append(Shape435)

Transform433.children.append(Transform434)

HAnimSegment432.children.append(Transform433)
Shape436 = x3d.Shape()
LineSet437 = x3d.LineSet()
LineSet437.vertexCount = [2]
Coordinate438 = x3d.Coordinate()
Coordinate438.point = [(-0.0801, 0.0712, -0.0766),(-3.4725, 0.0374, 0.6807)]

LineSet437.coord = Coordinate438
"""from r_talocrural to r_talocalcaneonavicular vertices 2"""
ColorRGBA439 = x3d.ColorRGBA()
ColorRGBA439.USE = "HAnimSegmentLineColorRGBA"

LineSet437.color = ColorRGBA439

Shape436.geometry = LineSet437

HAnimSegment432.children.append(Shape436)
Shape440 = x3d.Shape()
LineSet441 = x3d.LineSet()
LineSet441.vertexCount = [2]
Coordinate442 = x3d.Coordinate()
Coordinate442.point = [(-0.0801, 0.0712, -0.0766),(-3.9515, 0.0653, -0.6895)]

LineSet441.coord = Coordinate442
"""from r_talocrural to r_calcaneocuboid vertices 2"""
ColorRGBA443 = x3d.ColorRGBA()
ColorRGBA443.USE = "HAnimSegmentLineColorRGBA"

LineSet441.color = ColorRGBA443

Shape440.geometry = LineSet441

HAnimSegment432.children.append(Shape440)

HAnimJoint431.children.append(HAnimSegment432)
HAnimJoint444 = x3d.HAnimJoint()
HAnimJoint444.name = "r_talocalcaneonavicular"
HAnimJoint444.DEF = "hanim_r_talocalcaneonavicular"
HAnimJoint444.center = [-3.4725,0.0374,0.6807]
HAnimJoint444.ulimit = [0,0,0]
HAnimJoint444.llimit = [0,0,0]
HAnimSegment445 = x3d.HAnimSegment()
HAnimSegment445.name = "r_navicular"
HAnimSegment445.DEF = "hanim_r_navicular"
Transform446 = x3d.Transform()
Transform446.translation = [-3.4725,0.0374,0.6807]
Transform447 = x3d.Transform()
"""Empty Transform"""
Shape448 = x3d.Shape()
Shape448.USE = "HAnimJointShape"

Transform447.children.append(Shape448)

Transform446.children.append(Transform447)

HAnimSegment445.children.append(Transform446)
Shape449 = x3d.Shape()
LineSet450 = x3d.LineSet()
LineSet450.vertexCount = [2]
Coordinate451 = x3d.Coordinate()
Coordinate451.point = [(-3.4725, 0.0374, 0.6807),(-2.9855, 0.0311, 1.2819)]

LineSet450.coord = Coordinate451
"""from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2"""
ColorRGBA452 = x3d.ColorRGBA()
ColorRGBA452.USE = "HAnimSegmentLineColorRGBA"

LineSet450.color = ColorRGBA452

Shape449.geometry = LineSet450

HAnimSegment445.children.append(Shape449)
Shape453 = x3d.Shape()
LineSet454 = x3d.LineSet()
LineSet454.vertexCount = [2]
Coordinate455 = x3d.Coordinate()
Coordinate455.point = [(-3.4725, 0.0374, 0.6807),(-3.6105, 0.033, 1.4168)]

LineSet454.coord = Coordinate455
"""from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2"""
ColorRGBA456 = x3d.ColorRGBA()
ColorRGBA456.USE = "HAnimSegmentLineColorRGBA"

LineSet454.color = ColorRGBA456

Shape453.geometry = LineSet454

HAnimSegment445.children.append(Shape453)
Shape457 = x3d.Shape()
LineSet458 = x3d.LineSet()
LineSet458.vertexCount = [2]
Coordinate459 = x3d.Coordinate()
Coordinate459.point = [(-3.4725, 0.0374, 0.6807),(-4.1245, 0.0328, 1.3453)]

LineSet458.coord = Coordinate459
"""from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2"""
ColorRGBA460 = x3d.ColorRGBA()
ColorRGBA460.USE = "HAnimSegmentLineColorRGBA"

LineSet458.color = ColorRGBA460

Shape457.geometry = LineSet458

HAnimSegment445.children.append(Shape457)

HAnimJoint444.children.append(HAnimSegment445)
HAnimJoint461 = x3d.HAnimJoint()
HAnimJoint461.name = "r_cuneonavicular_1"
HAnimJoint461.DEF = "hanim_r_cuneonavicular_1"
HAnimJoint461.center = [-2.9855,0.0311,1.2819]
HAnimJoint461.ulimit = [0,0,0]
HAnimJoint461.llimit = [0,0,0]
HAnimSegment462 = x3d.HAnimSegment()
HAnimSegment462.name = "r_cuneiform_1"
HAnimSegment462.DEF = "hanim_r_cuneiform_1"
Transform463 = x3d.Transform()
Transform463.translation = [-2.9855,0.0311,1.2819]
Transform464 = x3d.Transform()
"""Empty Transform"""
Shape465 = x3d.Shape()
Shape465.USE = "HAnimJointShape"

Transform464.children.append(Shape465)

Transform463.children.append(Transform464)

HAnimSegment462.children.append(Transform463)
Shape466 = x3d.Shape()
LineSet467 = x3d.LineSet()
LineSet467.vertexCount = [2]
Coordinate468 = x3d.Coordinate()
Coordinate468.point = [(-2.9855, 0.0311, 1.2819),(-2.8645, 0.0194, 2.4285)]

LineSet467.coord = Coordinate468
"""from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2"""
ColorRGBA469 = x3d.ColorRGBA()
ColorRGBA469.USE = "HAnimSegmentLineColorRGBA"

LineSet467.color = ColorRGBA469

Shape466.geometry = LineSet467

HAnimSegment462.children.append(Shape466)

HAnimJoint461.children.append(HAnimSegment462)
HAnimJoint470 = x3d.HAnimJoint()
HAnimJoint470.name = "r_tarsometatarsal_1"
HAnimJoint470.DEF = "hanim_r_tarsometatarsal_1"
HAnimJoint470.center = [-2.8645,0.0194,2.4285]
HAnimJoint470.ulimit = [0,0,0]
HAnimJoint470.llimit = [0,0,0]
HAnimSegment471 = x3d.HAnimSegment()
HAnimSegment471.name = "r_metatarsal_1"
HAnimSegment471.DEF = "hanim_r_metatarsal_1"
Transform472 = x3d.Transform()
Transform472.translation = [-2.8645,0.0194,2.4285]
Transform473 = x3d.Transform()
"""Empty Transform"""
Shape474 = x3d.Shape()
Shape474.USE = "HAnimJointShape"

Transform473.children.append(Shape474)

Transform472.children.append(Transform473)

HAnimSegment471.children.append(Transform472)
Shape475 = x3d.Shape()
LineSet476 = x3d.LineSet()
LineSet476.vertexCount = [2]
Coordinate477 = x3d.Coordinate()
Coordinate477.point = [(-2.8645, 0.0194, 2.4285),(-2.7535, 0.0077, 4.6255)]

LineSet476.coord = Coordinate477
"""from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2"""
ColorRGBA478 = x3d.ColorRGBA()
ColorRGBA478.USE = "HAnimSegmentLineColorRGBA"

LineSet476.color = ColorRGBA478

Shape475.geometry = LineSet476

HAnimSegment471.children.append(Shape475)
HAnimSite479 = x3d.HAnimSite()
HAnimSite479.name = "r_metatarsal_phalanx_1_pt"
HAnimSite479.DEF = "hanim_r_metatarsal_phalanx_1_pt"
TouchSensor480 = x3d.TouchSensor()
TouchSensor480.description = "HAnimSite r_metatarsal_phalanx_1_pt"

HAnimSite479.children.append(TouchSensor480)
Shape481 = x3d.Shape()
Shape481.USE = "HAnimSiteShape"

HAnimSite479.children.append(Shape481)

HAnimSegment471.children.append(HAnimSite479)

HAnimJoint470.children.append(HAnimSegment471)
HAnimJoint482 = x3d.HAnimJoint()
HAnimJoint482.name = "r_metatarsophalangeal_1"
HAnimJoint482.DEF = "hanim_r_metatarsophalangeal_1"
HAnimJoint482.center = [-2.7535,0.0077,4.6255]
HAnimJoint482.ulimit = [0,0,0]
HAnimJoint482.llimit = [0,0,0]
HAnimSegment483 = x3d.HAnimSegment()
HAnimSegment483.name = "r_tarsal_proximal_phalanx_1"
HAnimSegment483.DEF = "hanim_r_tarsal_proximal_phalanx_1"
Transform484 = x3d.Transform()
Transform484.translation = [-2.7535,0.0077,4.6255]
Transform485 = x3d.Transform()
"""Empty Transform"""
Shape486 = x3d.Shape()
Shape486.USE = "HAnimJointShape"

Transform485.children.append(Shape486)

Transform484.children.append(Transform485)

HAnimSegment483.children.append(Transform484)
Shape487 = x3d.Shape()
LineSet488 = x3d.LineSet()
LineSet488.vertexCount = [2]
Coordinate489 = x3d.Coordinate()
Coordinate489.point = [(-2.7535, 0.0077, 4.6255),(-2.7535, 0.0077, 4.6255)]

LineSet488.coord = Coordinate489
"""from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2"""
ColorRGBA490 = x3d.ColorRGBA()
ColorRGBA490.USE = "HAnimSegmentLineColorRGBA"

LineSet488.color = ColorRGBA490

Shape487.geometry = LineSet488

HAnimSegment483.children.append(Shape487)
HAnimSite491 = x3d.HAnimSite()
HAnimSite491.name = "r_tarsal_distal_phalanx_1_tip"
HAnimSite491.DEF = "hanim_r_tarsal_distal_phalanx_1_tip"
TouchSensor492 = x3d.TouchSensor()
TouchSensor492.description = "HAnimSite r_tarsal_distal_phalanx_1_tip"

HAnimSite491.children.append(TouchSensor492)
Shape493 = x3d.Shape()
Shape493.USE = "HAnimSiteShape"

HAnimSite491.children.append(Shape493)

HAnimSegment483.children.append(HAnimSite491)

HAnimJoint482.children.append(HAnimSegment483)
HAnimJoint494 = x3d.HAnimJoint()
HAnimJoint494.name = "r_tarsal_interphalangeal_1"
HAnimJoint494.DEF = "hanim_r_tarsal_interphalangeal_1"
HAnimJoint494.ulimit = [0,0,0]
HAnimJoint494.llimit = [0,0,0]

HAnimJoint482.children.append(HAnimJoint494)

HAnimJoint470.children.append(HAnimJoint482)

HAnimJoint461.children.append(HAnimJoint470)

HAnimJoint444.children.append(HAnimJoint461)
HAnimJoint495 = x3d.HAnimJoint()
HAnimJoint495.name = "r_cuneonavicular_2"
HAnimJoint495.DEF = "hanim_r_cuneonavicular_2"
HAnimJoint495.center = [-3.6105,0.033,1.4168]
HAnimJoint495.ulimit = [0,0,0]
HAnimJoint495.llimit = [0,0,0]
HAnimSegment496 = x3d.HAnimSegment()
HAnimSegment496.name = "r_cuneiform_2"
HAnimSegment496.DEF = "hanim_r_cuneiform_2"
Transform497 = x3d.Transform()
Transform497.translation = [-3.6105,0.033,1.4168]
Transform498 = x3d.Transform()
"""Empty Transform"""
Shape499 = x3d.Shape()
Shape499.USE = "HAnimJointShape"

Transform498.children.append(Shape499)

Transform497.children.append(Transform498)

HAnimSegment496.children.append(Transform497)
Shape500 = x3d.Shape()
LineSet501 = x3d.LineSet()
LineSet501.vertexCount = [2]
Coordinate502 = x3d.Coordinate()
Coordinate502.point = [(-3.6105, 0.033, 1.4168),(-3.5565, 0.0232, 2.2895)]

LineSet501.coord = Coordinate502
"""from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2"""
ColorRGBA503 = x3d.ColorRGBA()
ColorRGBA503.USE = "HAnimSegmentLineColorRGBA"

LineSet501.color = ColorRGBA503

Shape500.geometry = LineSet501

HAnimSegment496.children.append(Shape500)

HAnimJoint495.children.append(HAnimSegment496)
HAnimJoint504 = x3d.HAnimJoint()
HAnimJoint504.name = "r_tarsometatarsal_2"
HAnimJoint504.DEF = "hanim_r_tarsometatarsal_2"
HAnimJoint504.center = [-3.5565,0.0232,2.2895]
HAnimJoint504.ulimit = [0,0,0]
HAnimJoint504.llimit = [0,0,0]
HAnimSegment505 = x3d.HAnimSegment()
HAnimSegment505.name = "r_metatarsal_2"
HAnimSegment505.DEF = "hanim_r_metatarsal_2"
Transform506 = x3d.Transform()
Transform506.translation = [-3.5565,0.0232,2.2895]
Transform507 = x3d.Transform()
"""Empty Transform"""
Shape508 = x3d.Shape()
Shape508.USE = "HAnimJointShape"

Transform507.children.append(Shape508)

Transform506.children.append(Transform507)

HAnimSegment505.children.append(Transform506)
Shape509 = x3d.Shape()
LineSet510 = x3d.LineSet()
LineSet510.vertexCount = [2]
Coordinate511 = x3d.Coordinate()
Coordinate511.point = [(-3.5565, 0.0232, 2.2895),(-3.6595, 0.0085, 4.8125)]

LineSet510.coord = Coordinate511
"""from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2"""
ColorRGBA512 = x3d.ColorRGBA()
ColorRGBA512.USE = "HAnimSegmentLineColorRGBA"

LineSet510.color = ColorRGBA512

Shape509.geometry = LineSet510

HAnimSegment505.children.append(Shape509)

HAnimJoint504.children.append(HAnimSegment505)
HAnimJoint513 = x3d.HAnimJoint()
HAnimJoint513.name = "r_metatarsophalangeal_2"
HAnimJoint513.DEF = "hanim_r_metatarsophalangeal_2"
HAnimJoint513.center = [-3.6595,0.0085,4.8125]
HAnimJoint513.ulimit = [0,0,0]
HAnimJoint513.llimit = [0,0,0]
HAnimSegment514 = x3d.HAnimSegment()
HAnimSegment514.name = "r_tarsal_proximal_phalanx_2"
HAnimSegment514.DEF = "hanim_r_tarsal_proximal_phalanx_2"
Transform515 = x3d.Transform()
Transform515.translation = [-3.6595,0.0085,4.8125]
Transform516 = x3d.Transform()
"""Empty Transform"""
Shape517 = x3d.Shape()
Shape517.USE = "HAnimJointShape"

Transform516.children.append(Shape517)

Transform515.children.append(Transform516)

HAnimSegment514.children.append(Transform515)
Shape518 = x3d.Shape()
LineSet519 = x3d.LineSet()
LineSet519.vertexCount = [2]
Coordinate520 = x3d.Coordinate()
Coordinate520.point = [(-3.6595, 0.0085, 4.8125),(-3.7385, 0.0054, 5.5315)]

LineSet519.coord = Coordinate520
"""from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2"""
ColorRGBA521 = x3d.ColorRGBA()
ColorRGBA521.USE = "HAnimSegmentLineColorRGBA"

LineSet519.color = ColorRGBA521

Shape518.geometry = LineSet519

HAnimSegment514.children.append(Shape518)

HAnimJoint513.children.append(HAnimSegment514)
HAnimJoint522 = x3d.HAnimJoint()
HAnimJoint522.name = "r_tarsal_proximal_interphalangeal_2"
HAnimJoint522.DEF = "hanim_r_tarsal_proximal_interphalangeal_2"
HAnimJoint522.center = [-3.7385,0.0054,5.5315]
HAnimJoint522.ulimit = [0,0,0]
HAnimJoint522.llimit = [0,0,0]
HAnimSegment523 = x3d.HAnimSegment()
HAnimSegment523.name = "r_tarsal_middle_phalanx_2"
HAnimSegment523.DEF = "hanim_r_tarsal_middle_phalanx_2"
Transform524 = x3d.Transform()
Transform524.translation = [-3.7385,0.0054,5.5315]
Transform525 = x3d.Transform()
"""Empty Transform"""
Shape526 = x3d.Shape()
Shape526.USE = "HAnimJointShape"

Transform525.children.append(Shape526)

Transform524.children.append(Transform525)

HAnimSegment523.children.append(Transform524)
Shape527 = x3d.Shape()
LineSet528 = x3d.LineSet()
LineSet528.vertexCount = [2]
Coordinate529 = x3d.Coordinate()
Coordinate529.point = [(-3.7385, 0.0054, 5.5315),(-3.7385, 0.0017, 5.9505)]

LineSet528.coord = Coordinate529
"""from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2"""
ColorRGBA530 = x3d.ColorRGBA()
ColorRGBA530.USE = "HAnimSegmentLineColorRGBA"

LineSet528.color = ColorRGBA530

Shape527.geometry = LineSet528

HAnimSegment523.children.append(Shape527)
HAnimSite531 = x3d.HAnimSite()
HAnimSite531.name = "r_tarsal_distal_phalanx_2_tip"
HAnimSite531.DEF = "hanim_r_tarsal_distal_phalanx_2_tip"
HAnimSite531.translation = [-0.0883,0.0134,0.1383]
TouchSensor532 = x3d.TouchSensor()
TouchSensor532.description = "HAnimSite r_tarsal_distal_phalanx_2_tip"

HAnimSite531.children.append(TouchSensor532)
Shape533 = x3d.Shape()
Shape533.USE = "HAnimSiteShape"

HAnimSite531.children.append(Shape533)

HAnimSegment523.children.append(HAnimSite531)

HAnimJoint522.children.append(HAnimSegment523)
HAnimJoint534 = x3d.HAnimJoint()
HAnimJoint534.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint534.DEF = "hanim_r_tarsal_distal_interphalangeal_2"
HAnimJoint534.center = [-3.7385,0.0017,5.9505]
HAnimJoint534.ulimit = [0,0,0]
HAnimJoint534.llimit = [0,0,0]

HAnimJoint522.children.append(HAnimJoint534)

HAnimJoint513.children.append(HAnimJoint522)

HAnimJoint504.children.append(HAnimJoint513)

HAnimJoint495.children.append(HAnimJoint504)

HAnimJoint444.children.append(HAnimJoint495)
HAnimJoint535 = x3d.HAnimJoint()
HAnimJoint535.name = "r_cuneonavicular_3"
HAnimJoint535.DEF = "hanim_r_cuneonavicular_3"
HAnimJoint535.center = [-4.1245,0.0328,1.3453]
HAnimJoint535.ulimit = [0,0,0]
HAnimJoint535.llimit = [0,0,0]
HAnimSegment536 = x3d.HAnimSegment()
HAnimSegment536.name = "r_cuneiform_3"
HAnimSegment536.DEF = "hanim_r_cuneiform_3"
Transform537 = x3d.Transform()
Transform537.translation = [-4.1245,0.0328,1.3453]
Transform538 = x3d.Transform()
"""Empty Transform"""
Shape539 = x3d.Shape()
Shape539.USE = "HAnimJointShape"

Transform538.children.append(Shape539)

Transform537.children.append(Transform538)

HAnimSegment536.children.append(Transform537)
Shape540 = x3d.Shape()
LineSet541 = x3d.LineSet()
LineSet541.vertexCount = [2]
Coordinate542 = x3d.Coordinate()
Coordinate542.point = [(-4.1245, 0.0328, 1.3453),(-3.7385, 0.0017, 5.9505)]

LineSet541.coord = Coordinate542
"""from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2"""
ColorRGBA543 = x3d.ColorRGBA()
ColorRGBA543.USE = "HAnimSegmentLineColorRGBA"

LineSet541.color = ColorRGBA543

Shape540.geometry = LineSet541

HAnimSegment536.children.append(Shape540)

HAnimJoint535.children.append(HAnimSegment536)
HAnimJoint544 = x3d.HAnimJoint()
HAnimJoint544.name = "r_tarsometatarsal_3"
HAnimJoint544.DEF = "hanim_r_tarsometatarsal_3"
HAnimJoint544.ulimit = [0,0,0]
HAnimJoint544.llimit = [0,0,0]
HAnimSegment545 = x3d.HAnimSegment()
HAnimSegment545.name = "r_metatarsal_3"
HAnimSegment545.DEF = "hanim_r_metatarsal_3"
Transform546 = x3d.Transform()
Transform546.translation = [-4.1245,0.0328,1.3453]
Transform547 = x3d.Transform()
"""Empty Transform"""
Shape548 = x3d.Shape()
Shape548.USE = "HAnimJointShape"

Transform547.children.append(Shape548)

Transform546.children.append(Transform547)

HAnimSegment545.children.append(Transform546)
Shape549 = x3d.Shape()
LineSet550 = x3d.LineSet()
LineSet550.vertexCount = [2]
Coordinate551 = x3d.Coordinate()
Coordinate551.point = [(-4.2795, 0.0086, 4.7055)]

LineSet550.coord = Coordinate551
"""from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 1"""
ColorRGBA552 = x3d.ColorRGBA()
ColorRGBA552.USE = "HAnimSegmentLineColorRGBA"

LineSet550.color = ColorRGBA552

Shape549.geometry = LineSet550

HAnimSegment545.children.append(Shape549)

HAnimJoint544.children.append(HAnimSegment545)
HAnimJoint553 = x3d.HAnimJoint()
HAnimJoint553.name = "r_metatarsophalangeal_3"
HAnimJoint553.DEF = "hanim_r_metatarsophalangeal_3"
HAnimJoint553.center = [-4.2795,0.0086,4.7055]
HAnimJoint553.ulimit = [0,0,0]
HAnimJoint553.llimit = [0,0,0]
HAnimSegment554 = x3d.HAnimSegment()
HAnimSegment554.name = "r_tarsal_proximal_phalanx_3"
HAnimSegment554.DEF = "hanim_r_tarsal_proximal_phalanx_3"
Transform555 = x3d.Transform()
Transform555.translation = [-4.2795,0.0086,4.7055]
Transform556 = x3d.Transform()
"""Empty Transform"""
Shape557 = x3d.Shape()
Shape557.USE = "HAnimJointShape"

Transform556.children.append(Shape557)

Transform555.children.append(Transform556)

HAnimSegment554.children.append(Transform555)
Shape558 = x3d.Shape()
LineSet559 = x3d.LineSet()
LineSet559.vertexCount = [2]
Coordinate560 = x3d.Coordinate()
Coordinate560.point = [(-4.2795, 0.0086, 4.7055),(-4.3865, 0.0044, 5.3745)]

LineSet559.coord = Coordinate560
"""from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2"""
ColorRGBA561 = x3d.ColorRGBA()
ColorRGBA561.USE = "HAnimSegmentLineColorRGBA"

LineSet559.color = ColorRGBA561

Shape558.geometry = LineSet559

HAnimSegment554.children.append(Shape558)

HAnimJoint553.children.append(HAnimSegment554)
HAnimJoint562 = x3d.HAnimJoint()
HAnimJoint562.name = "r_tarsal_proximal_interphalangeal_3"
HAnimJoint562.DEF = "hanim_r_tarsal_proximal_interphalangeal_3"
HAnimJoint562.center = [-4.3865,0.0044,5.3745]
HAnimJoint562.ulimit = [0,0,0]
HAnimJoint562.llimit = [0,0,0]
HAnimSegment563 = x3d.HAnimSegment()
HAnimSegment563.name = "r_tarsal_middle_phalanx_3"
HAnimSegment563.DEF = "hanim_r_tarsal_middle_phalanx_3"
Transform564 = x3d.Transform()
Transform564.translation = [-4.3865,0.0044,5.3745]
Transform565 = x3d.Transform()
"""Empty Transform"""
Shape566 = x3d.Shape()
Shape566.USE = "HAnimJointShape"

Transform565.children.append(Shape566)

Transform564.children.append(Transform565)

HAnimSegment563.children.append(Transform564)
Shape567 = x3d.Shape()
LineSet568 = x3d.LineSet()
LineSet568.vertexCount = [2]
Coordinate569 = x3d.Coordinate()
Coordinate569.point = [(-4.3865, 0.0044, 5.3745),(-4.4545, 0.0017, 5.7845)]

LineSet568.coord = Coordinate569
"""from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2"""
ColorRGBA570 = x3d.ColorRGBA()
ColorRGBA570.USE = "HAnimSegmentLineColorRGBA"

LineSet568.color = ColorRGBA570

Shape567.geometry = LineSet568

HAnimSegment563.children.append(Shape567)
HAnimSite571 = x3d.HAnimSite()
HAnimSite571.name = "r_tarsal_distal_phalanx_3_tip"
HAnimSite571.DEF = "hanim_r_tarsal_distal_phalanx_3_tip"
TouchSensor572 = x3d.TouchSensor()
TouchSensor572.description = "HAnimSite r_tarsal_distal_phalanx_3_tip"

HAnimSite571.children.append(TouchSensor572)
Shape573 = x3d.Shape()
Shape573.USE = "HAnimSiteShape"

HAnimSite571.children.append(Shape573)

HAnimSegment563.children.append(HAnimSite571)

HAnimJoint562.children.append(HAnimSegment563)
HAnimJoint574 = x3d.HAnimJoint()
HAnimJoint574.name = "r_tarsal_distal_interphalangeal_3"
HAnimJoint574.DEF = "hanim_r_tarsal_distal_interphalangeal_3"
HAnimJoint574.center = [-4.4545,0.0017,5.7845]
HAnimJoint574.ulimit = [0,0,0]
HAnimJoint574.llimit = [0,0,0]

HAnimJoint562.children.append(HAnimJoint574)

HAnimJoint553.children.append(HAnimJoint562)

HAnimJoint544.children.append(HAnimJoint553)

HAnimJoint535.children.append(HAnimJoint544)

HAnimJoint444.children.append(HAnimJoint535)

HAnimJoint431.children.append(HAnimJoint444)
HAnimJoint575 = x3d.HAnimJoint()
HAnimJoint575.name = "r_calcaneocuboid"
HAnimJoint575.DEF = "hanim_r_calcaneocuboid"
HAnimJoint575.center = [-3.9515,0.0653,-0.6895]
HAnimJoint575.ulimit = [0,0,0]
HAnimJoint575.llimit = [0,0,0]
HAnimSegment576 = x3d.HAnimSegment()
HAnimSegment576.name = "r_calcaneus"
HAnimSegment576.DEF = "hanim_r_calcaneus"
Transform577 = x3d.Transform()
Transform577.translation = [-3.9515,0.0653,-0.6895]
Transform578 = x3d.Transform()
"""Empty Transform"""
Shape579 = x3d.Shape()
Shape579.USE = "HAnimJointShape"

Transform578.children.append(Shape579)

Transform577.children.append(Transform578)

HAnimSegment576.children.append(Transform577)
Shape580 = x3d.Shape()
LineSet581 = x3d.LineSet()
LineSet581.vertexCount = [2]
Coordinate582 = x3d.Coordinate()
Coordinate582.point = [(-3.9515, 0.0653, -0.6895),(-4.9095, 0.0353, 0.5574)]

LineSet581.coord = Coordinate582
"""from r_calcaneocuboid to r_transversetarsal vertices 2"""
ColorRGBA583 = x3d.ColorRGBA()
ColorRGBA583.USE = "HAnimSegmentLineColorRGBA"

LineSet581.color = ColorRGBA583

Shape580.geometry = LineSet581

HAnimSegment576.children.append(Shape580)

HAnimJoint575.children.append(HAnimSegment576)
HAnimJoint584 = x3d.HAnimJoint()
HAnimJoint584.name = "r_transversetarsal"
HAnimJoint584.DEF = "hanim_r_transversetarsal"
HAnimJoint584.center = [-4.9095,0.0353,0.5574]
HAnimJoint584.ulimit = [0,0,0]
HAnimJoint584.llimit = [0,0,0]
HAnimSegment585 = x3d.HAnimSegment()
HAnimSegment585.name = "r_cuboid"
HAnimSegment585.DEF = "hanim_r_cuboid"
Transform586 = x3d.Transform()
Transform586.translation = [-4.9095,0.0353,0.5574]
Transform587 = x3d.Transform()
"""Empty Transform"""
Shape588 = x3d.Shape()
Shape588.USE = "HAnimJointShape"

Transform587.children.append(Shape588)

Transform586.children.append(Transform587)

HAnimSegment585.children.append(Transform586)
Shape589 = x3d.Shape()
LineSet590 = x3d.LineSet()
LineSet590.vertexCount = [2]
Coordinate591 = x3d.Coordinate()
Coordinate591.point = [(-4.9095, 0.0353, 0.5574),(-4.7255, 0.0211, 2.1725)]

LineSet590.coord = Coordinate591
"""from r_transversetarsal to r_tarsometatarsal_4 vertices 2"""
ColorRGBA592 = x3d.ColorRGBA()
ColorRGBA592.USE = "HAnimSegmentLineColorRGBA"

LineSet590.color = ColorRGBA592

Shape589.geometry = LineSet590

HAnimSegment585.children.append(Shape589)
Shape593 = x3d.Shape()
LineSet594 = x3d.LineSet()
LineSet594.vertexCount = [2]
Coordinate595 = x3d.Coordinate()
Coordinate595.point = [(-4.9095, 0.0353, 0.5574),(-5.3615, 0.0164, 2.0085)]

LineSet594.coord = Coordinate595
"""from r_transversetarsal to r_tarsometatarsal_5 vertices 2"""
ColorRGBA596 = x3d.ColorRGBA()
ColorRGBA596.USE = "HAnimSegmentLineColorRGBA"

LineSet594.color = ColorRGBA596

Shape593.geometry = LineSet594

HAnimSegment585.children.append(Shape593)

HAnimJoint584.children.append(HAnimSegment585)
HAnimJoint597 = x3d.HAnimJoint()
HAnimJoint597.name = "r_tarsometatarsal_4"
HAnimJoint597.DEF = "hanim_r_tarsometatarsal_4"
HAnimJoint597.center = [-4.7255,0.0211,2.1725]
HAnimJoint597.ulimit = [0,0,0]
HAnimJoint597.llimit = [0,0,0]
HAnimSegment598 = x3d.HAnimSegment()
HAnimSegment598.name = "r_metatarsal_4"
HAnimSegment598.DEF = "hanim_r_metatarsal_4"
Transform599 = x3d.Transform()
Transform599.translation = [-4.7255,0.0211,2.1725]
Transform600 = x3d.Transform()
"""Empty Transform"""
Shape601 = x3d.Shape()
Shape601.USE = "HAnimJointShape"

Transform600.children.append(Shape601)

Transform599.children.append(Transform600)

HAnimSegment598.children.append(Transform599)
Shape602 = x3d.Shape()
LineSet603 = x3d.LineSet()
LineSet603.vertexCount = [2]
Coordinate604 = x3d.Coordinate()
Coordinate604.point = [(-4.7255, 0.0211, 2.1725),(-4.8755, 0.0076, 4.5165)]

LineSet603.coord = Coordinate604
"""from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2"""
ColorRGBA605 = x3d.ColorRGBA()
ColorRGBA605.USE = "HAnimSegmentLineColorRGBA"

LineSet603.color = ColorRGBA605

Shape602.geometry = LineSet603

HAnimSegment598.children.append(Shape602)

HAnimJoint597.children.append(HAnimSegment598)
HAnimJoint606 = x3d.HAnimJoint()
HAnimJoint606.name = "r_metatarsophalangeal_4"
HAnimJoint606.DEF = "hanim_r_metatarsophalangeal_4"
HAnimJoint606.center = [-4.8755,0.0076,4.5165]
HAnimJoint606.ulimit = [0,0,0]
HAnimJoint606.llimit = [0,0,0]
HAnimSegment607 = x3d.HAnimSegment()
HAnimSegment607.name = "r_tarsal_proximal_phalanx_4"
HAnimSegment607.DEF = "hanim_r_tarsal_proximal_phalanx_4"
Transform608 = x3d.Transform()
Transform608.translation = [-4.8755,0.0076,4.5165]
Transform609 = x3d.Transform()
"""Empty Transform"""
Shape610 = x3d.Shape()
Shape610.USE = "HAnimJointShape"

Transform609.children.append(Shape610)

Transform608.children.append(Transform609)

HAnimSegment607.children.append(Transform608)
Shape611 = x3d.Shape()
LineSet612 = x3d.LineSet()
LineSet612.vertexCount = [2]
Coordinate613 = x3d.Coordinate()
Coordinate613.point = [(-4.8755, 0.0076, 4.5165),(-5.0655, 0.0049, 5.1895)]

LineSet612.coord = Coordinate613
"""from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2"""
ColorRGBA614 = x3d.ColorRGBA()
ColorRGBA614.USE = "HAnimSegmentLineColorRGBA"

LineSet612.color = ColorRGBA614

Shape611.geometry = LineSet612

HAnimSegment607.children.append(Shape611)

HAnimJoint606.children.append(HAnimSegment607)
HAnimJoint615 = x3d.HAnimJoint()
HAnimJoint615.name = "r_tarsal_proximal_interphalangeal_4"
HAnimJoint615.DEF = "hanim_r_tarsal_proximal_interphalangeal_4"
HAnimJoint615.center = [-5.0655,0.0049,5.1895]
HAnimJoint615.ulimit = [0,0,0]
HAnimJoint615.llimit = [0,0,0]
HAnimSegment616 = x3d.HAnimSegment()
HAnimSegment616.name = "r_tarsal_middle_phalanx_4"
HAnimSegment616.DEF = "hanim_r_tarsal_middle_phalanx_4"
Transform617 = x3d.Transform()
Transform617.translation = [-5.0655,0.0049,5.1895]
Transform618 = x3d.Transform()
"""Empty Transform"""
Shape619 = x3d.Shape()
Shape619.USE = "HAnimJointShape"

Transform618.children.append(Shape619)

Transform617.children.append(Transform618)

HAnimSegment616.children.append(Transform617)
Shape620 = x3d.Shape()
LineSet621 = x3d.LineSet()
LineSet621.vertexCount = [2]
Coordinate622 = x3d.Coordinate()
Coordinate622.point = [(-5.0655, 0.0049, 5.1895),(-5.1335, 0.0011, 5.5175)]

LineSet621.coord = Coordinate622
"""from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2"""
ColorRGBA623 = x3d.ColorRGBA()
ColorRGBA623.USE = "HAnimSegmentLineColorRGBA"

LineSet621.color = ColorRGBA623

Shape620.geometry = LineSet621

HAnimSegment616.children.append(Shape620)
HAnimSite624 = x3d.HAnimSite()
HAnimSite624.name = "r_tarsal_distal_phalanx_4_tip"
HAnimSite624.DEF = "hanim_r_tarsal_distal_phalanx_4_tip"
TouchSensor625 = x3d.TouchSensor()
TouchSensor625.description = "HAnimSite r_tarsal_distal_phalanx_4_tip"

HAnimSite624.children.append(TouchSensor625)
Shape626 = x3d.Shape()
Shape626.USE = "HAnimSiteShape"

HAnimSite624.children.append(Shape626)

HAnimSegment616.children.append(HAnimSite624)

HAnimJoint615.children.append(HAnimSegment616)
HAnimJoint627 = x3d.HAnimJoint()
HAnimJoint627.name = "r_tarsal_distal_interphalangeal_4"
HAnimJoint627.DEF = "hanim_r_tarsal_distal_interphalangeal_4"
HAnimJoint627.center = [-5.1335,0.0011,5.5175]
HAnimJoint627.ulimit = [0,0,0]
HAnimJoint627.llimit = [0,0,0]

HAnimJoint615.children.append(HAnimJoint627)

HAnimJoint606.children.append(HAnimJoint615)

HAnimJoint597.children.append(HAnimJoint606)

HAnimJoint584.children.append(HAnimJoint597)
HAnimJoint628 = x3d.HAnimJoint()
HAnimJoint628.name = "r_tarsometatarsal_5"
HAnimJoint628.DEF = "hanim_r_tarsometatarsal_5"
HAnimJoint628.center = [-5.3615,0.0164,2.0085]
HAnimJoint628.ulimit = [0,0,0]
HAnimJoint628.llimit = [0,0,0]
HAnimSegment629 = x3d.HAnimSegment()
HAnimSegment629.name = "r_metatarsal_5"
HAnimSegment629.DEF = "hanim_r_metatarsal_5"
Transform630 = x3d.Transform()
Transform630.translation = [-5.3615,0.0164,2.0085]
Transform631 = x3d.Transform()
"""Empty Transform"""
Shape632 = x3d.Shape()
Shape632.USE = "HAnimJointShape"

Transform631.children.append(Shape632)

Transform630.children.append(Transform631)

HAnimSegment629.children.append(Transform630)
Shape633 = x3d.Shape()
LineSet634 = x3d.LineSet()
LineSet634.vertexCount = [2]
Coordinate635 = x3d.Coordinate()
Coordinate635.point = [(-5.3615, 0.0164, 2.0085),(-5.5055, 0.0067, 4.3115)]

LineSet634.coord = Coordinate635
"""from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2"""
ColorRGBA636 = x3d.ColorRGBA()
ColorRGBA636.USE = "HAnimSegmentLineColorRGBA"

LineSet634.color = ColorRGBA636

Shape633.geometry = LineSet634

HAnimSegment629.children.append(Shape633)
HAnimSite637 = x3d.HAnimSite()
HAnimSite637.name = "r_metatarsal_phalanx_5_pt"
HAnimSite637.DEF = "hanim_r_metatarsal_phalanx_5_pt"
TouchSensor638 = x3d.TouchSensor()
TouchSensor638.description = "HAnimSite r_metatarsal_phalanx_5_pt"

HAnimSite637.children.append(TouchSensor638)
Shape639 = x3d.Shape()
Shape639.USE = "HAnimSiteShape"

HAnimSite637.children.append(Shape639)

HAnimSegment629.children.append(HAnimSite637)

HAnimJoint628.children.append(HAnimSegment629)
HAnimJoint640 = x3d.HAnimJoint()
HAnimJoint640.name = "r_metatarsophalangeal_5"
HAnimJoint640.DEF = "hanim_r_metatarsophalangeal_5"
HAnimJoint640.center = [-5.5055,0.0067,4.3115]
HAnimJoint640.ulimit = [0,0,0]
HAnimJoint640.llimit = [0,0,0]
HAnimSegment641 = x3d.HAnimSegment()
HAnimSegment641.name = "r_tarsal_proximal_phalanx_5"
HAnimSegment641.DEF = "hanim_r_tarsal_proximal_phalanx_5"
Transform642 = x3d.Transform()
Transform642.translation = [-5.5055,0.0067,4.3115]
Transform643 = x3d.Transform()
"""Empty Transform"""
Shape644 = x3d.Shape()
Shape644.USE = "HAnimJointShape"

Transform643.children.append(Shape644)

Transform642.children.append(Transform643)

HAnimSegment641.children.append(Transform642)
Shape645 = x3d.Shape()
LineSet646 = x3d.LineSet()
LineSet646.vertexCount = [2]
Coordinate647 = x3d.Coordinate()
Coordinate647.point = [(-5.5055, 0.0067, 4.3115),(-5.6085, 0.003, 4.6485)]

LineSet646.coord = Coordinate647
"""from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2"""
ColorRGBA648 = x3d.ColorRGBA()
ColorRGBA648.USE = "HAnimSegmentLineColorRGBA"

LineSet646.color = ColorRGBA648

Shape645.geometry = LineSet646

HAnimSegment641.children.append(Shape645)

HAnimJoint640.children.append(HAnimSegment641)
HAnimJoint649 = x3d.HAnimJoint()
HAnimJoint649.name = "r_tarsal_proximal_interphalangeal_5"
HAnimJoint649.DEF = "hanim_r_tarsal_proximal_interphalangeal_5"
HAnimJoint649.center = [-5.6085,0.003,4.6485]
HAnimJoint649.ulimit = [0,0,0]
HAnimJoint649.llimit = [0,0,0]
HAnimSegment650 = x3d.HAnimSegment()
HAnimSegment650.name = "r_tarsal_middle_phalanx_5"
HAnimSegment650.DEF = "hanim_r_tarsal_middle_phalanx_5"
Transform651 = x3d.Transform()
Transform651.translation = [-5.6085,0.003,4.6485]
Transform652 = x3d.Transform()
"""Empty Transform"""
Shape653 = x3d.Shape()
Shape653.USE = "HAnimJointShape"

Transform652.children.append(Shape653)

Transform651.children.append(Transform652)

HAnimSegment650.children.append(Transform651)
Shape654 = x3d.Shape()
LineSet655 = x3d.LineSet()
LineSet655.vertexCount = [2]
Coordinate656 = x3d.Coordinate()
Coordinate656.point = [(-5.6085, 0.003, 4.6485),(-5.6495, 0, 4.9925)]

LineSet655.coord = Coordinate656
"""from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2"""
ColorRGBA657 = x3d.ColorRGBA()
ColorRGBA657.USE = "HAnimSegmentLineColorRGBA"

LineSet655.color = ColorRGBA657

Shape654.geometry = LineSet655

HAnimSegment650.children.append(Shape654)
HAnimSite658 = x3d.HAnimSite()
HAnimSite658.name = "r_tarsal_distal_phalanx_5_tip"
HAnimSite658.DEF = "hanim_r_tarsal_distal_phalanx_5_tip"
TouchSensor659 = x3d.TouchSensor()
TouchSensor659.description = "HAnimSite r_tarsal_distal_phalanx_5_tip"

HAnimSite658.children.append(TouchSensor659)
Shape660 = x3d.Shape()
Shape660.USE = "HAnimSiteShape"

HAnimSite658.children.append(Shape660)

HAnimSegment650.children.append(HAnimSite658)

HAnimJoint649.children.append(HAnimSegment650)
HAnimJoint661 = x3d.HAnimJoint()
HAnimJoint661.name = "r_tarsal_distal_interphalangeal_5"
HAnimJoint661.DEF = "hanim_r_tarsal_distal_interphalangeal_5"
HAnimJoint661.center = [-5.6495,0,4.9925]
HAnimJoint661.ulimit = [0,0,0]
HAnimJoint661.llimit = [0,0,0]

HAnimJoint649.children.append(HAnimJoint661)

HAnimJoint640.children.append(HAnimJoint649)

HAnimJoint628.children.append(HAnimJoint640)

HAnimJoint584.children.append(HAnimJoint628)

HAnimJoint575.children.append(HAnimJoint584)

HAnimJoint431.children.append(HAnimJoint575)

HAnimJoint416.children.append(HAnimJoint431)

HAnimJoint398.children.append(HAnimJoint416)

HAnimJoint97.children.append(HAnimJoint398)

HAnimJoint45.children.append(HAnimJoint97)
HAnimJoint662 = x3d.HAnimJoint()
HAnimJoint662.name = "vl5"
HAnimJoint662.DEF = "hanim_vl5"
HAnimJoint662.center = [0.0028,1.0568,-0.0776]
HAnimJoint662.ulimit = [0,0,0]
HAnimJoint662.llimit = [0,0,0]
HAnimSegment663 = x3d.HAnimSegment()
HAnimSegment663.name = "l5"
HAnimSegment663.DEF = "hanim_l5"
Transform664 = x3d.Transform()
Transform664.translation = [0.0028,1.0568,-0.0776]
Transform665 = x3d.Transform()
"""Empty Transform"""
Shape666 = x3d.Shape()
Shape666.USE = "HAnimJointShape"

Transform665.children.append(Shape666)

Transform664.children.append(Transform665)

HAnimSegment663.children.append(Transform664)
Shape667 = x3d.Shape()
LineSet668 = x3d.LineSet()
LineSet668.vertexCount = [2]
Coordinate669 = x3d.Coordinate()
Coordinate669.point = [(0.0028, 1.0568, -0.0776),(0.0035, 1.0925, -0.0787)]

LineSet668.coord = Coordinate669
"""from vl5 to vl4 vertices 2"""
ColorRGBA670 = x3d.ColorRGBA()
ColorRGBA670.USE = "HAnimSegmentLineColorRGBA"

LineSet668.color = ColorRGBA670

Shape667.geometry = LineSet668

HAnimSegment663.children.append(Shape667)

HAnimJoint662.children.append(HAnimSegment663)
HAnimJoint671 = x3d.HAnimJoint()
HAnimJoint671.name = "vl4"
HAnimJoint671.DEF = "hanim_vl4"
HAnimJoint671.center = [0.0035,1.0925,-0.0787]
HAnimJoint671.ulimit = [0,0,0]
HAnimJoint671.llimit = [0,0,0]
HAnimSegment672 = x3d.HAnimSegment()
HAnimSegment672.name = "l4"
HAnimSegment672.DEF = "hanim_l4"
Transform673 = x3d.Transform()
Transform673.translation = [0.0035,1.0925,-0.0787]
Transform674 = x3d.Transform()
"""Empty Transform"""
Shape675 = x3d.Shape()
Shape675.USE = "HAnimJointShape"

Transform674.children.append(Shape675)

Transform673.children.append(Transform674)

HAnimSegment672.children.append(Transform673)
Shape676 = x3d.Shape()
LineSet677 = x3d.LineSet()
LineSet677.vertexCount = [2]
Coordinate678 = x3d.Coordinate()
Coordinate678.point = [(0.0035, 1.0925, -0.0787),(0.0041, 1.1276, -0.0796)]

LineSet677.coord = Coordinate678
"""from vl4 to vl3 vertices 2"""
ColorRGBA679 = x3d.ColorRGBA()
ColorRGBA679.USE = "HAnimSegmentLineColorRGBA"

LineSet677.color = ColorRGBA679

Shape676.geometry = LineSet677

HAnimSegment672.children.append(Shape676)

HAnimJoint671.children.append(HAnimSegment672)
HAnimJoint680 = x3d.HAnimJoint()
HAnimJoint680.name = "vl3"
HAnimJoint680.DEF = "hanim_vl3"
HAnimJoint680.center = [0.0041,1.1276,-0.0796]
HAnimJoint680.ulimit = [0,0,0]
HAnimJoint680.llimit = [0,0,0]
HAnimSegment681 = x3d.HAnimSegment()
HAnimSegment681.name = "l3"
HAnimSegment681.DEF = "hanim_l3"
Transform682 = x3d.Transform()
Transform682.translation = [0.0041,1.1276,-0.0796]
Transform683 = x3d.Transform()
"""Empty Transform"""
Shape684 = x3d.Shape()
Shape684.USE = "HAnimJointShape"

Transform683.children.append(Shape684)

Transform682.children.append(Transform683)

HAnimSegment681.children.append(Transform682)
Shape685 = x3d.Shape()
LineSet686 = x3d.LineSet()
LineSet686.vertexCount = [2]
Coordinate687 = x3d.Coordinate()
Coordinate687.point = [(0.0041, 1.1276, -0.0796),(0.0045, 1.1546, -0.08)]

LineSet686.coord = Coordinate687
"""from vl3 to vl2 vertices 2"""
ColorRGBA688 = x3d.ColorRGBA()
ColorRGBA688.USE = "HAnimSegmentLineColorRGBA"

LineSet686.color = ColorRGBA688

Shape685.geometry = LineSet686

HAnimSegment681.children.append(Shape685)
HAnimSite689 = x3d.HAnimSite()
HAnimSite689.name = "l_rib10_pt"
HAnimSite689.DEF = "hanim_l_rib10_pt"
HAnimSite689.translation = [0.0871,1.1925,0.0992]
TouchSensor690 = x3d.TouchSensor()
TouchSensor690.description = "HAnimSite l_rib10_pt"

HAnimSite689.children.append(TouchSensor690)
Shape691 = x3d.Shape()
Shape691.USE = "HAnimSiteShape"

HAnimSite689.children.append(Shape691)

HAnimSegment681.children.append(HAnimSite689)
HAnimSite692 = x3d.HAnimSite()
HAnimSite692.name = "r_rib10_pt"
HAnimSite692.DEF = "hanim_r_rib10_pt"
HAnimSite692.translation = [-0.0711,1.1941,0.1016]
TouchSensor693 = x3d.TouchSensor()
TouchSensor693.description = "HAnimSite r_rib10_pt"

HAnimSite692.children.append(TouchSensor693)
Shape694 = x3d.Shape()
Shape694.USE = "HAnimSiteShape"

HAnimSite692.children.append(Shape694)

HAnimSegment681.children.append(HAnimSite692)
HAnimSite695 = x3d.HAnimSite()
HAnimSite695.name = "spine_2_middle_back_pt"
HAnimSite695.DEF = "hanim_spine_2_middle_back_pt"
TouchSensor696 = x3d.TouchSensor()
TouchSensor696.description = "HAnimSite spine_2_middle_back_pt"

HAnimSite695.children.append(TouchSensor696)
Shape697 = x3d.Shape()
Shape697.USE = "HAnimSiteShape"

HAnimSite695.children.append(Shape697)

HAnimSegment681.children.append(HAnimSite695)

HAnimJoint680.children.append(HAnimSegment681)
HAnimJoint698 = x3d.HAnimJoint()
HAnimJoint698.name = "vl2"
HAnimJoint698.DEF = "hanim_vl2"
HAnimJoint698.center = [0.0045,1.1546,-0.08]
HAnimJoint698.ulimit = [0,0,0]
HAnimJoint698.llimit = [0,0,0]
HAnimSegment699 = x3d.HAnimSegment()
HAnimSegment699.name = "l2"
HAnimSegment699.DEF = "hanim_l2"
Transform700 = x3d.Transform()
Transform700.translation = [0.0045,1.1546,-0.08]
Transform701 = x3d.Transform()
"""Empty Transform"""
Shape702 = x3d.Shape()
Shape702.USE = "HAnimJointShape"

Transform701.children.append(Shape702)

Transform700.children.append(Transform701)

HAnimSegment699.children.append(Transform700)
Shape703 = x3d.Shape()
LineSet704 = x3d.LineSet()
LineSet704.vertexCount = [2]
Coordinate705 = x3d.Coordinate()
Coordinate705.point = [(0.0045, 1.1546, -0.08),(0.0048, 1.1912, -0.0805)]

LineSet704.coord = Coordinate705
"""from vl2 to vl1 vertices 2"""
ColorRGBA706 = x3d.ColorRGBA()
ColorRGBA706.USE = "HAnimSegmentLineColorRGBA"

LineSet704.color = ColorRGBA706

Shape703.geometry = LineSet704

HAnimSegment699.children.append(Shape703)

HAnimJoint698.children.append(HAnimSegment699)
HAnimJoint707 = x3d.HAnimJoint()
HAnimJoint707.name = "vl1"
HAnimJoint707.DEF = "hanim_vl1"
HAnimJoint707.center = [0.0048,1.1912,-0.0805]
HAnimJoint707.ulimit = [0,0,0]
HAnimJoint707.llimit = [0,0,0]
HAnimSegment708 = x3d.HAnimSegment()
HAnimSegment708.name = "l1"
HAnimSegment708.DEF = "hanim_l1"
Transform709 = x3d.Transform()
Transform709.translation = [0.0048,1.1912,-0.0805]
Transform710 = x3d.Transform()
"""Empty Transform"""
Shape711 = x3d.Shape()
Shape711.USE = "HAnimJointShape"

Transform710.children.append(Shape711)

Transform709.children.append(Transform710)

HAnimSegment708.children.append(Transform709)
Shape712 = x3d.Shape()
LineSet713 = x3d.LineSet()
LineSet713.vertexCount = [2]
Coordinate714 = x3d.Coordinate()
Coordinate714.point = [(0.0048, 1.1912, -0.0805),(0.0051, 1.2278, -0.0808)]

LineSet713.coord = Coordinate714
"""from vl1 to vt12 vertices 2"""
ColorRGBA715 = x3d.ColorRGBA()
ColorRGBA715.USE = "HAnimSegmentLineColorRGBA"

LineSet713.color = ColorRGBA715

Shape712.geometry = LineSet713

HAnimSegment708.children.append(Shape712)

HAnimJoint707.children.append(HAnimSegment708)
HAnimJoint716 = x3d.HAnimJoint()
HAnimJoint716.name = "vt12"
HAnimJoint716.DEF = "hanim_vt12"
HAnimJoint716.center = [0.0051,1.2278,-0.0808]
HAnimJoint716.ulimit = [0,0,0]
HAnimJoint716.llimit = [0,0,0]
HAnimSegment717 = x3d.HAnimSegment()
HAnimSegment717.name = "t12"
HAnimSegment717.DEF = "hanim_t12"
Transform718 = x3d.Transform()
Transform718.translation = [0.0051,1.2278,-0.0808]
Transform719 = x3d.Transform()
"""Empty Transform"""
Shape720 = x3d.Shape()
Shape720.USE = "HAnimJointShape"

Transform719.children.append(Shape720)

Transform718.children.append(Transform719)

HAnimSegment717.children.append(Transform718)
Shape721 = x3d.Shape()
LineSet722 = x3d.LineSet()
LineSet722.vertexCount = [2]
Coordinate723 = x3d.Coordinate()
Coordinate723.point = [(0.0051, 1.2278, -0.0808),(0.0053, 1.2679, -0.081)]

LineSet722.coord = Coordinate723
"""from vt12 to vt11 vertices 2"""
ColorRGBA724 = x3d.ColorRGBA()
ColorRGBA724.USE = "HAnimSegmentLineColorRGBA"

LineSet722.color = ColorRGBA724

Shape721.geometry = LineSet722

HAnimSegment717.children.append(Shape721)

HAnimJoint716.children.append(HAnimSegment717)
HAnimJoint725 = x3d.HAnimJoint()
HAnimJoint725.name = "vt11"
HAnimJoint725.DEF = "hanim_vt11"
HAnimJoint725.center = [0.0053,1.2679,-0.081]
HAnimJoint725.ulimit = [0,0,0]
HAnimJoint725.llimit = [0,0,0]
HAnimSegment726 = x3d.HAnimSegment()
HAnimSegment726.name = "t11"
HAnimSegment726.DEF = "hanim_t11"
Transform727 = x3d.Transform()
Transform727.translation = [0.0053,1.2679,-0.081]
Transform728 = x3d.Transform()
"""Empty Transform"""
Shape729 = x3d.Shape()
Shape729.USE = "HAnimJointShape"

Transform728.children.append(Shape729)

Transform727.children.append(Transform728)

HAnimSegment726.children.append(Transform727)
Shape730 = x3d.Shape()
LineSet731 = x3d.LineSet()
LineSet731.vertexCount = [2]
Coordinate732 = x3d.Coordinate()
Coordinate732.point = [(0.0053, 1.2679, -0.081),(0.0056, 1.2848, -0.0822)]

LineSet731.coord = Coordinate732
"""from vt11 to vt10 vertices 2"""
ColorRGBA733 = x3d.ColorRGBA()
ColorRGBA733.USE = "HAnimSegmentLineColorRGBA"

LineSet731.color = ColorRGBA733

Shape730.geometry = LineSet731

HAnimSegment726.children.append(Shape730)
HAnimSite734 = x3d.HAnimSite()
HAnimSite734.name = "substernale_pt"
HAnimSite734.DEF = "hanim_substernale_pt"
HAnimSite734.translation = [0.0085,1.2995,0.1147]
TouchSensor735 = x3d.TouchSensor()
TouchSensor735.description = "HAnimSite substernale_pt"

HAnimSite734.children.append(TouchSensor735)
Shape736 = x3d.Shape()
Shape736.USE = "HAnimSiteShape"

HAnimSite734.children.append(Shape736)

HAnimSegment726.children.append(HAnimSite734)

HAnimJoint725.children.append(HAnimSegment726)
HAnimJoint737 = x3d.HAnimJoint()
HAnimJoint737.name = "vt10"
HAnimJoint737.DEF = "hanim_vt10"
HAnimJoint737.center = [0.0056,1.2848,-0.0822]
HAnimJoint737.ulimit = [0,0,0]
HAnimJoint737.llimit = [0,0,0]
HAnimSegment738 = x3d.HAnimSegment()
HAnimSegment738.name = "t10"
HAnimSegment738.DEF = "hanim_t10"
Transform739 = x3d.Transform()
Transform739.translation = [0.0056,1.2848,-0.0822]
Transform740 = x3d.Transform()
"""Empty Transform"""
Shape741 = x3d.Shape()
Shape741.USE = "HAnimJointShape"

Transform740.children.append(Shape741)

Transform739.children.append(Transform740)

HAnimSegment738.children.append(Transform739)
Shape742 = x3d.Shape()
LineSet743 = x3d.LineSet()
LineSet743.vertexCount = [2]
Coordinate744 = x3d.Coordinate()
Coordinate744.point = [(0.0056, 1.2848, -0.0822),(0.0057, 1.3126, -0.0838)]

LineSet743.coord = Coordinate744
"""from vt10 to vt9 vertices 2"""
ColorRGBA745 = x3d.ColorRGBA()
ColorRGBA745.USE = "HAnimSegmentLineColorRGBA"

LineSet743.color = ColorRGBA745

Shape742.geometry = LineSet743

HAnimSegment738.children.append(Shape742)
HAnimSite746 = x3d.HAnimSite()
HAnimSite746.name = "l_thelion_pt"
HAnimSite746.DEF = "hanim_l_thelion_pt"
HAnimSite746.translation = [0.0918,1.3382,0.1192]
TouchSensor747 = x3d.TouchSensor()
TouchSensor747.description = "HAnimSite l_thelion_pt"

HAnimSite746.children.append(TouchSensor747)
Shape748 = x3d.Shape()
Shape748.USE = "HAnimSiteShape"

HAnimSite746.children.append(Shape748)

HAnimSegment738.children.append(HAnimSite746)
HAnimSite749 = x3d.HAnimSite()
HAnimSite749.name = "r_thelion_pt"
HAnimSite749.DEF = "hanim_r_thelion_pt"
HAnimSite749.translation = [-0.0736,1.3385,0.1217]
TouchSensor750 = x3d.TouchSensor()
TouchSensor750.description = "HAnimSite r_thelion_pt"

HAnimSite749.children.append(TouchSensor750)
Shape751 = x3d.Shape()
Shape751.USE = "HAnimSiteShape"

HAnimSite749.children.append(Shape751)

HAnimSegment738.children.append(HAnimSite749)

HAnimJoint737.children.append(HAnimSegment738)
HAnimJoint752 = x3d.HAnimJoint()
HAnimJoint752.name = "vt9"
HAnimJoint752.DEF = "hanim_vt9"
HAnimJoint752.center = [0.0057,1.3126,-0.0838]
HAnimJoint752.ulimit = [0,0,0]
HAnimJoint752.llimit = [0,0,0]
HAnimSegment753 = x3d.HAnimSegment()
HAnimSegment753.name = "t9"
HAnimSegment753.DEF = "hanim_t9"
Transform754 = x3d.Transform()
Transform754.translation = [0.0057,1.3126,-0.0838]
Transform755 = x3d.Transform()
"""Empty Transform"""
Shape756 = x3d.Shape()
Shape756.USE = "HAnimJointShape"

Transform755.children.append(Shape756)

Transform754.children.append(Transform755)

HAnimSegment753.children.append(Transform754)
Shape757 = x3d.Shape()
LineSet758 = x3d.LineSet()
LineSet758.vertexCount = [2]
Coordinate759 = x3d.Coordinate()
Coordinate759.point = [(0.0057, 1.3126, -0.0838),(0.0057, 1.3382, -0.0845)]

LineSet758.coord = Coordinate759
"""from vt9 to vt8 vertices 2"""
ColorRGBA760 = x3d.ColorRGBA()
ColorRGBA760.USE = "HAnimSegmentLineColorRGBA"

LineSet758.color = ColorRGBA760

Shape757.geometry = LineSet758

HAnimSegment753.children.append(Shape757)

HAnimJoint752.children.append(HAnimSegment753)
HAnimJoint761 = x3d.HAnimJoint()
HAnimJoint761.name = "vt8"
HAnimJoint761.DEF = "hanim_vt8"
HAnimJoint761.center = [0.0057,1.3382,-0.0845]
HAnimJoint761.ulimit = [0,0,0]
HAnimJoint761.llimit = [0,0,0]
HAnimSegment762 = x3d.HAnimSegment()
HAnimSegment762.name = "t8"
HAnimSegment762.DEF = "hanim_t8"
Transform763 = x3d.Transform()
Transform763.translation = [0.0057,1.3382,-0.0845]
Transform764 = x3d.Transform()
"""Empty Transform"""
Shape765 = x3d.Shape()
Shape765.USE = "HAnimJointShape"

Transform764.children.append(Shape765)

Transform763.children.append(Transform764)

HAnimSegment762.children.append(Transform763)
Shape766 = x3d.Shape()
LineSet767 = x3d.LineSet()
LineSet767.vertexCount = [2]
Coordinate768 = x3d.Coordinate()
Coordinate768.point = [(0.0057, 1.3382, -0.0845),(0.0058, 1.3625, -0.0833)]

LineSet767.coord = Coordinate768
"""from vt8 to vt7 vertices 2"""
ColorRGBA769 = x3d.ColorRGBA()
ColorRGBA769.USE = "HAnimSegmentLineColorRGBA"

LineSet767.color = ColorRGBA769

Shape766.geometry = LineSet767

HAnimSegment762.children.append(Shape766)

HAnimJoint761.children.append(HAnimSegment762)
HAnimJoint770 = x3d.HAnimJoint()
HAnimJoint770.name = "vt7"
HAnimJoint770.DEF = "hanim_vt7"
HAnimJoint770.center = [0.0058,1.3625,-0.0833]
HAnimJoint770.ulimit = [0,0,0]
HAnimJoint770.llimit = [0,0,0]
HAnimSegment771 = x3d.HAnimSegment()
HAnimSegment771.name = "t7"
HAnimSegment771.DEF = "hanim_t7"
Transform772 = x3d.Transform()
Transform772.translation = [0.0058,1.3625,-0.0833]
Transform773 = x3d.Transform()
"""Empty Transform"""
Shape774 = x3d.Shape()
Shape774.USE = "HAnimJointShape"

Transform773.children.append(Shape774)

Transform772.children.append(Transform773)

HAnimSegment771.children.append(Transform772)
Shape775 = x3d.Shape()
LineSet776 = x3d.LineSet()
LineSet776.vertexCount = [2]
Coordinate777 = x3d.Coordinate()
Coordinate777.point = [(0.0058, 1.3625, -0.0833),(0.0059, 1.3866, -0.08)]

LineSet776.coord = Coordinate777
"""from vt7 to vt6 vertices 2"""
ColorRGBA778 = x3d.ColorRGBA()
ColorRGBA778.USE = "HAnimSegmentLineColorRGBA"

LineSet776.color = ColorRGBA778

Shape775.geometry = LineSet776

HAnimSegment771.children.append(Shape775)
HAnimSite779 = x3d.HAnimSite()
HAnimSite779.name = "l_chest_midsagittal_plane_pt"
HAnimSite779.DEF = "hanim_l_chest_midsagittal_plane_pt"
TouchSensor780 = x3d.TouchSensor()
TouchSensor780.description = "HAnimSite l_chest_midsagittal_plane_pt"

HAnimSite779.children.append(TouchSensor780)
Shape781 = x3d.Shape()
Shape781.USE = "HAnimSiteShape"

HAnimSite779.children.append(Shape781)

HAnimSegment771.children.append(HAnimSite779)
HAnimSite782 = x3d.HAnimSite()
HAnimSite782.name = "mesosternale_pt"
HAnimSite782.DEF = "hanim_mesosternale_pt"
TouchSensor783 = x3d.TouchSensor()
TouchSensor783.description = "HAnimSite mesosternale_pt"

HAnimSite782.children.append(TouchSensor783)
Shape784 = x3d.Shape()
Shape784.USE = "HAnimSiteShape"

HAnimSite782.children.append(Shape784)

HAnimSegment771.children.append(HAnimSite782)
HAnimSite785 = x3d.HAnimSite()
HAnimSite785.name = "r_chest_midsagittal_plane_pt"
HAnimSite785.DEF = "hanim_r_chest_midsagittal_plane_pt"
TouchSensor786 = x3d.TouchSensor()
TouchSensor786.description = "HAnimSite r_chest_midsagittal_plane_pt"

HAnimSite785.children.append(TouchSensor786)
Shape787 = x3d.Shape()
Shape787.USE = "HAnimSiteShape"

HAnimSite785.children.append(Shape787)

HAnimSegment771.children.append(HAnimSite785)
HAnimSite788 = x3d.HAnimSite()
HAnimSite788.name = "rear_center_midsagittal_plane_pt"
HAnimSite788.DEF = "hanim_rear_center_midsagittal_plane_pt"
TouchSensor789 = x3d.TouchSensor()
TouchSensor789.description = "HAnimSite rear_center_midsagittal_plane_pt"

HAnimSite788.children.append(TouchSensor789)
Shape790 = x3d.Shape()
Shape790.USE = "HAnimSiteShape"

HAnimSite788.children.append(Shape790)

HAnimSegment771.children.append(HAnimSite788)

HAnimJoint770.children.append(HAnimSegment771)
HAnimJoint791 = x3d.HAnimJoint()
HAnimJoint791.name = "vt6"
HAnimJoint791.DEF = "hanim_vt6"
HAnimJoint791.center = [0.0059,1.3866,-0.08]
HAnimJoint791.ulimit = [0,0,0]
HAnimJoint791.llimit = [0,0,0]
HAnimSegment792 = x3d.HAnimSegment()
HAnimSegment792.name = "t6"
HAnimSegment792.DEF = "hanim_t6"
Transform793 = x3d.Transform()
Transform793.translation = [0.0059,1.3866,-0.08]
Transform794 = x3d.Transform()
"""Empty Transform"""
Shape795 = x3d.Shape()
Shape795.USE = "HAnimJointShape"

Transform794.children.append(Shape795)

Transform793.children.append(Transform794)

HAnimSegment792.children.append(Transform793)
Shape796 = x3d.Shape()
LineSet797 = x3d.LineSet()
LineSet797.vertexCount = [2]
Coordinate798 = x3d.Coordinate()
Coordinate798.point = [(0.0059, 1.3866, -0.08),(0.006, 1.4102, -0.0745)]

LineSet797.coord = Coordinate798
"""from vt6 to vt5 vertices 2"""
ColorRGBA799 = x3d.ColorRGBA()
ColorRGBA799.USE = "HAnimSegmentLineColorRGBA"

LineSet797.color = ColorRGBA799

Shape796.geometry = LineSet797

HAnimSegment792.children.append(Shape796)
HAnimSite800 = x3d.HAnimSite()
HAnimSite800.name = "spine_1_middle_back_pt"
HAnimSite800.DEF = "hanim_spine_1_middle_back_pt"
TouchSensor801 = x3d.TouchSensor()
TouchSensor801.description = "HAnimSite spine_1_middle_back_pt"

HAnimSite800.children.append(TouchSensor801)
Shape802 = x3d.Shape()
Shape802.USE = "HAnimSiteShape"

HAnimSite800.children.append(Shape802)

HAnimSegment792.children.append(HAnimSite800)

HAnimJoint791.children.append(HAnimSegment792)
HAnimJoint803 = x3d.HAnimJoint()
HAnimJoint803.name = "vt5"
HAnimJoint803.DEF = "hanim_vt5"
HAnimJoint803.center = [0.006,1.4102,-0.0745]
HAnimJoint803.ulimit = [0,0,0]
HAnimJoint803.llimit = [0,0,0]
HAnimSegment804 = x3d.HAnimSegment()
HAnimSegment804.name = "t5"
HAnimSegment804.DEF = "hanim_t5"
Transform805 = x3d.Transform()
Transform805.translation = [0.006,1.4102,-0.0745]
Transform806 = x3d.Transform()
"""Empty Transform"""
Shape807 = x3d.Shape()
Shape807.USE = "HAnimJointShape"

Transform806.children.append(Shape807)

Transform805.children.append(Transform806)

HAnimSegment804.children.append(Transform805)
Shape808 = x3d.Shape()
LineSet809 = x3d.LineSet()
LineSet809.vertexCount = [2]
Coordinate810 = x3d.Coordinate()
Coordinate810.point = [(0.006, 1.4102, -0.0745),(0.0061, 1.432, -0.0675)]

LineSet809.coord = Coordinate810
"""from vt5 to vt4 vertices 2"""
ColorRGBA811 = x3d.ColorRGBA()
ColorRGBA811.USE = "HAnimSegmentLineColorRGBA"

LineSet809.color = ColorRGBA811

Shape808.geometry = LineSet809

HAnimSegment804.children.append(Shape808)

HAnimJoint803.children.append(HAnimSegment804)
HAnimJoint812 = x3d.HAnimJoint()
HAnimJoint812.name = "vt4"
HAnimJoint812.DEF = "hanim_vt4"
HAnimJoint812.center = [0.0061,1.432,-0.0675]
HAnimJoint812.ulimit = [0,0,0]
HAnimJoint812.llimit = [0,0,0]
HAnimSegment813 = x3d.HAnimSegment()
HAnimSegment813.name = "t4"
HAnimSegment813.DEF = "hanim_t4"
Transform814 = x3d.Transform()
Transform814.translation = [0.0061,1.432,-0.0675]
Transform815 = x3d.Transform()
"""Empty Transform"""
Shape816 = x3d.Shape()
Shape816.USE = "HAnimJointShape"

Transform815.children.append(Shape816)

Transform814.children.append(Transform815)

HAnimSegment813.children.append(Transform814)
Shape817 = x3d.Shape()
LineSet818 = x3d.LineSet()
LineSet818.vertexCount = [2]
Coordinate819 = x3d.Coordinate()
Coordinate819.point = [(0.0061, 1.432, -0.0675),(0.0062, 1.4583, -0.057)]

LineSet818.coord = Coordinate819
"""from vt4 to vt3 vertices 2"""
ColorRGBA820 = x3d.ColorRGBA()
ColorRGBA820.USE = "HAnimSegmentLineColorRGBA"

LineSet818.color = ColorRGBA820

Shape817.geometry = LineSet818

HAnimSegment813.children.append(Shape817)

HAnimJoint812.children.append(HAnimSegment813)
HAnimJoint821 = x3d.HAnimJoint()
HAnimJoint821.name = "vt3"
HAnimJoint821.DEF = "hanim_vt3"
HAnimJoint821.center = [0.0062,1.4583,-0.057]
HAnimJoint821.ulimit = [0,0,0]
HAnimJoint821.llimit = [0,0,0]
HAnimSegment822 = x3d.HAnimSegment()
HAnimSegment822.name = "t3"
HAnimSegment822.DEF = "hanim_t3"
Transform823 = x3d.Transform()
Transform823.translation = [0.0062,1.4583,-0.057]
Transform824 = x3d.Transform()
"""Empty Transform"""
Shape825 = x3d.Shape()
Shape825.USE = "HAnimJointShape"

Transform824.children.append(Shape825)

Transform823.children.append(Transform824)

HAnimSegment822.children.append(Transform823)
Shape826 = x3d.Shape()
LineSet827 = x3d.LineSet()
LineSet827.vertexCount = [2]
Coordinate828 = x3d.Coordinate()
Coordinate828.point = [(0.0062, 1.4583, -0.057),(0.0063, 1.4761, -0.0484)]

LineSet827.coord = Coordinate828
"""from vt3 to vt2 vertices 2"""
ColorRGBA829 = x3d.ColorRGBA()
ColorRGBA829.USE = "HAnimSegmentLineColorRGBA"

LineSet827.color = ColorRGBA829

Shape826.geometry = LineSet827

HAnimSegment822.children.append(Shape826)

HAnimJoint821.children.append(HAnimSegment822)
HAnimJoint830 = x3d.HAnimJoint()
HAnimJoint830.name = "vt2"
HAnimJoint830.DEF = "hanim_vt2"
HAnimJoint830.center = [0.0063,1.4761,-0.0484]
HAnimJoint830.ulimit = [0,0,0]
HAnimJoint830.llimit = [0,0,0]
HAnimSegment831 = x3d.HAnimSegment()
HAnimSegment831.name = "t2"
HAnimSegment831.DEF = "hanim_t2"
Transform832 = x3d.Transform()
Transform832.translation = [0.0063,1.4761,-0.0484]
Transform833 = x3d.Transform()
"""Empty Transform"""
Shape834 = x3d.Shape()
Shape834.USE = "HAnimJointShape"

Transform833.children.append(Shape834)

Transform832.children.append(Transform833)

HAnimSegment831.children.append(Transform832)
Shape835 = x3d.Shape()
LineSet836 = x3d.LineSet()
LineSet836.vertexCount = [2]
Coordinate837 = x3d.Coordinate()
Coordinate837.point = [(0.0063, 1.4761, -0.0484),(0.0065, 1.4951, -0.0387)]

LineSet836.coord = Coordinate837
"""from vt2 to vt1 vertices 2"""
ColorRGBA838 = x3d.ColorRGBA()
ColorRGBA838.USE = "HAnimSegmentLineColorRGBA"

LineSet836.color = ColorRGBA838

Shape835.geometry = LineSet836

HAnimSegment831.children.append(Shape835)
HAnimSite839 = x3d.HAnimSite()
HAnimSite839.name = "cervicale_pt"
HAnimSite839.DEF = "hanim_cervicale_pt"
HAnimSite839.translation = [0.0064,1.52,-0.0815]
TouchSensor840 = x3d.TouchSensor()
TouchSensor840.description = "HAnimSite cervicale_pt"

HAnimSite839.children.append(TouchSensor840)
Shape841 = x3d.Shape()
Shape841.USE = "HAnimSiteShape"

HAnimSite839.children.append(Shape841)

HAnimSegment831.children.append(HAnimSite839)
HAnimSite842 = x3d.HAnimSite()
HAnimSite842.name = "suprasternale_pt"
HAnimSite842.DEF = "hanim_suprasternale_pt"
HAnimSite842.translation = [0.0084,1.4714,0.0551]
TouchSensor843 = x3d.TouchSensor()
TouchSensor843.description = "HAnimSite suprasternale_pt"

HAnimSite842.children.append(TouchSensor843)
Shape844 = x3d.Shape()
Shape844.USE = "HAnimSiteShape"

HAnimSite842.children.append(Shape844)

HAnimSegment831.children.append(HAnimSite842)

HAnimJoint830.children.append(HAnimSegment831)
HAnimJoint845 = x3d.HAnimJoint()
HAnimJoint845.name = "vt1"
HAnimJoint845.DEF = "hanim_vt1"
HAnimJoint845.center = [0.0065,1.4951,-0.0387]
HAnimJoint845.ulimit = [0,0,0]
HAnimJoint845.llimit = [0,0,0]
HAnimSegment846 = x3d.HAnimSegment()
HAnimSegment846.name = "t1"
HAnimSegment846.DEF = "hanim_t1"
Transform847 = x3d.Transform()
Transform847.translation = [0.0065,1.4951,-0.0387]
Transform848 = x3d.Transform()
"""Empty Transform"""
Shape849 = x3d.Shape()
Shape849.USE = "HAnimJointShape"

Transform848.children.append(Shape849)

Transform847.children.append(Transform848)

HAnimSegment846.children.append(Transform847)
Shape850 = x3d.Shape()
LineSet851 = x3d.LineSet()
LineSet851.vertexCount = [2]
Coordinate852 = x3d.Coordinate()
Coordinate852.point = [(0.0065, 1.4951, -0.0387),(0.0066, 1.5132, -0.0301)]

LineSet851.coord = Coordinate852
"""from vt1 to vc7 vertices 2"""
ColorRGBA853 = x3d.ColorRGBA()
ColorRGBA853.USE = "HAnimSegmentLineColorRGBA"

LineSet851.color = ColorRGBA853

Shape850.geometry = LineSet851

HAnimSegment846.children.append(Shape850)
HAnimSite854 = x3d.HAnimSite()
HAnimSite854.name = "l_neck_base_pt"
HAnimSite854.DEF = "hanim_l_neck_base_pt"
HAnimSite854.translation = [0.0646,1.5141,-0.038]
TouchSensor855 = x3d.TouchSensor()
TouchSensor855.description = "HAnimSite l_neck_base_pt"

HAnimSite854.children.append(TouchSensor855)
Shape856 = x3d.Shape()
Shape856.USE = "HAnimSiteShape"

HAnimSite854.children.append(Shape856)

HAnimSegment846.children.append(HAnimSite854)
HAnimSite857 = x3d.HAnimSite()
HAnimSite857.name = "r_neck_base_pt"
HAnimSite857.DEF = "hanim_r_neck_base_pt"
HAnimSite857.translation = [-0.0419,1.5149,-0.022]
TouchSensor858 = x3d.TouchSensor()
TouchSensor858.description = "HAnimSite r_neck_base_pt"

HAnimSite857.children.append(TouchSensor858)
Shape859 = x3d.Shape()
Shape859.USE = "HAnimSiteShape"

HAnimSite857.children.append(Shape859)

HAnimSegment846.children.append(HAnimSite857)
Shape860 = x3d.Shape()
LineSet861 = x3d.LineSet()
LineSet861.vertexCount = [2]
Coordinate862 = x3d.Coordinate()
Coordinate862.point = [(0.0065, 1.4951, -0.0387),(0.082, 1.4488, -0.0353)]

LineSet861.coord = Coordinate862
"""from vt1 to l_sternoclavicular vertices 2"""
ColorRGBA863 = x3d.ColorRGBA()
ColorRGBA863.USE = "HAnimSegmentLineColorRGBA"

LineSet861.color = ColorRGBA863

Shape860.geometry = LineSet861

HAnimSegment846.children.append(Shape860)
HAnimSite864 = x3d.HAnimSite()
HAnimSite864.name = "l_acromion_pt"
HAnimSite864.DEF = "hanim_l_acromion_pt"
HAnimSite864.translation = [0.2032,1.476,-0.049]
TouchSensor865 = x3d.TouchSensor()
TouchSensor865.description = "HAnimSite l_acromion_pt"

HAnimSite864.children.append(TouchSensor865)
Shape866 = x3d.Shape()
Shape866.USE = "HAnimSiteShape"

HAnimSite864.children.append(Shape866)

HAnimSegment846.children.append(HAnimSite864)
HAnimSite867 = x3d.HAnimSite()
HAnimSite867.name = "l_axilla_distal_pt"
HAnimSite867.DEF = "hanim_l_axilla_distal_pt"
HAnimSite867.translation = [0.1706,1.4072,-0.0875]
TouchSensor868 = x3d.TouchSensor()
TouchSensor868.description = "HAnimSite l_axilla_distal_pt"

HAnimSite867.children.append(TouchSensor868)
Shape869 = x3d.Shape()
Shape869.USE = "HAnimSiteShape"

HAnimSite867.children.append(Shape869)

HAnimSegment846.children.append(HAnimSite867)
HAnimSite870 = x3d.HAnimSite()
HAnimSite870.name = "l_axilla_posterior_folds_pt"
HAnimSite870.DEF = "hanim_l_axilla_posterior_folds_pt"
TouchSensor871 = x3d.TouchSensor()
TouchSensor871.description = "HAnimSite l_axilla_posterior_folds_pt"

HAnimSite870.children.append(TouchSensor871)
Shape872 = x3d.Shape()
Shape872.USE = "HAnimSiteShape"

HAnimSite870.children.append(Shape872)

HAnimSegment846.children.append(HAnimSite870)
HAnimSite873 = x3d.HAnimSite()
HAnimSite873.name = "l_axilla_proximal_pt"
HAnimSite873.DEF = "hanim_l_axilla_proximal_pt"
HAnimSite873.translation = [0.1777,1.4065,-0.0075]
TouchSensor874 = x3d.TouchSensor()
TouchSensor874.description = "HAnimSite l_axilla_proximal_pt"

HAnimSite873.children.append(TouchSensor874)
Shape875 = x3d.Shape()
Shape875.USE = "HAnimSiteShape"

HAnimSite873.children.append(Shape875)

HAnimSegment846.children.append(HAnimSite873)
HAnimSite876 = x3d.HAnimSite()
HAnimSite876.name = "l_clavicale_pt"
HAnimSite876.DEF = "hanim_l_clavicale_pt"
HAnimSite876.translation = [0.0271,1.4943,0.0394]
TouchSensor877 = x3d.TouchSensor()
TouchSensor877.description = "HAnimSite l_clavicale_pt"

HAnimSite876.children.append(TouchSensor877)
Shape878 = x3d.Shape()
Shape878.USE = "HAnimSiteShape"

HAnimSite876.children.append(Shape878)

HAnimSegment846.children.append(HAnimSite876)
Shape879 = x3d.Shape()
LineSet880 = x3d.LineSet()
LineSet880.vertexCount = [2]
Coordinate881 = x3d.Coordinate()
Coordinate881.point = [(0.0065, 1.4951, -0.0387),(-0.0694, 1.46, -0.033)]

LineSet880.coord = Coordinate881
"""from vt1 to r_sternoclavicular vertices 2"""
ColorRGBA882 = x3d.ColorRGBA()
ColorRGBA882.USE = "HAnimSegmentLineColorRGBA"

LineSet880.color = ColorRGBA882

Shape879.geometry = LineSet880

HAnimSegment846.children.append(Shape879)
HAnimSite883 = x3d.HAnimSite()
HAnimSite883.name = "r_acromion_pt"
HAnimSite883.DEF = "hanim_r_acromion_pt"
HAnimSite883.translation = [-0.1905,1.4791,-0.0431]
TouchSensor884 = x3d.TouchSensor()
TouchSensor884.description = "HAnimSite r_acromion_pt"

HAnimSite883.children.append(TouchSensor884)
Shape885 = x3d.Shape()
Shape885.USE = "HAnimSiteShape"

HAnimSite883.children.append(Shape885)

HAnimSegment846.children.append(HAnimSite883)
HAnimSite886 = x3d.HAnimSite()
HAnimSite886.name = "r_axilla_distal_pt"
HAnimSite886.DEF = "hanim_r_axilla_distal_pt"
HAnimSite886.translation = [-0.1603,1.4098,-0.0826]
TouchSensor887 = x3d.TouchSensor()
TouchSensor887.description = "HAnimSite r_axilla_distal_pt"

HAnimSite886.children.append(TouchSensor887)
Shape888 = x3d.Shape()
Shape888.USE = "HAnimSiteShape"

HAnimSite886.children.append(Shape888)

HAnimSegment846.children.append(HAnimSite886)
HAnimSite889 = x3d.HAnimSite()
HAnimSite889.name = "r_axilla_posterior_folds_pt"
HAnimSite889.DEF = "hanim_r_axilla_posterior_folds_pt"
TouchSensor890 = x3d.TouchSensor()
TouchSensor890.description = "HAnimSite r_axilla_posterior_folds_pt"

HAnimSite889.children.append(TouchSensor890)
Shape891 = x3d.Shape()
Shape891.USE = "HAnimSiteShape"

HAnimSite889.children.append(Shape891)

HAnimSegment846.children.append(HAnimSite889)
HAnimSite892 = x3d.HAnimSite()
HAnimSite892.name = "r_axilla_proximal_pt"
HAnimSite892.DEF = "hanim_r_axilla_proximal_pt"
HAnimSite892.translation = [-0.1626,1.4072,-0.0031]
TouchSensor893 = x3d.TouchSensor()
TouchSensor893.description = "HAnimSite r_axilla_proximal_pt"

HAnimSite892.children.append(TouchSensor893)
Shape894 = x3d.Shape()
Shape894.USE = "HAnimSiteShape"

HAnimSite892.children.append(Shape894)

HAnimSegment846.children.append(HAnimSite892)
HAnimSite895 = x3d.HAnimSite()
HAnimSite895.name = "r_clavicale_pt"
HAnimSite895.DEF = "hanim_r_clavicale_pt"
HAnimSite895.translation = [-0.0115,1.4943,0.04]
TouchSensor896 = x3d.TouchSensor()
TouchSensor896.description = "HAnimSite r_clavicale_pt"

HAnimSite895.children.append(TouchSensor896)
Shape897 = x3d.Shape()
Shape897.USE = "HAnimSiteShape"

HAnimSite895.children.append(Shape897)

HAnimSegment846.children.append(HAnimSite895)

HAnimJoint845.children.append(HAnimSegment846)
HAnimJoint898 = x3d.HAnimJoint()
HAnimJoint898.name = "vc7"
HAnimJoint898.DEF = "hanim_vc7"
HAnimJoint898.center = [0.0066,1.5132,-0.0301]
HAnimJoint898.ulimit = [0,0,0]
HAnimJoint898.llimit = [0,0,0]
HAnimSegment899 = x3d.HAnimSegment()
HAnimSegment899.name = "c7"
HAnimSegment899.DEF = "hanim_c7"
Transform900 = x3d.Transform()
Transform900.translation = [0.0066,1.5132,-0.0301]
Transform901 = x3d.Transform()
"""Empty Transform"""
Shape902 = x3d.Shape()
Shape902.USE = "HAnimJointShape"

Transform901.children.append(Shape902)

Transform900.children.append(Transform901)

HAnimSegment899.children.append(Transform900)
Shape903 = x3d.Shape()
LineSet904 = x3d.LineSet()
LineSet904.vertexCount = [2]
Coordinate905 = x3d.Coordinate()
Coordinate905.point = [(0.0066, 1.5132, -0.0301),(0.0066, 1.5357, -0.0143)]

LineSet904.coord = Coordinate905
"""from vc7 to vc6 vertices 2"""
ColorRGBA906 = x3d.ColorRGBA()
ColorRGBA906.USE = "HAnimSegmentLineColorRGBA"

LineSet904.color = ColorRGBA906

Shape903.geometry = LineSet904

HAnimSegment899.children.append(Shape903)

HAnimJoint898.children.append(HAnimSegment899)
HAnimJoint907 = x3d.HAnimJoint()
HAnimJoint907.name = "vc6"
HAnimJoint907.DEF = "hanim_vc6"
HAnimJoint907.center = [0.0066,1.5357,-0.0143]
HAnimJoint907.ulimit = [0,0,0]
HAnimJoint907.llimit = [0,0,0]
HAnimSegment908 = x3d.HAnimSegment()
HAnimSegment908.name = "c6"
HAnimSegment908.DEF = "hanim_c6"
Transform909 = x3d.Transform()
Transform909.translation = [0.0066,1.5357,-0.0143]
Transform910 = x3d.Transform()
"""Empty Transform"""
Shape911 = x3d.Shape()
Shape911.USE = "HAnimJointShape"

Transform910.children.append(Shape911)

Transform909.children.append(Transform910)

HAnimSegment908.children.append(Transform909)
Shape912 = x3d.Shape()
LineSet913 = x3d.LineSet()
LineSet913.vertexCount = [2]
Coordinate914 = x3d.Coordinate()
Coordinate914.point = [(0.0066, 1.5357, -0.0143),(0.0066, 1.552, -0.0082)]

LineSet913.coord = Coordinate914
"""from vc6 to vc5 vertices 2"""
ColorRGBA915 = x3d.ColorRGBA()
ColorRGBA915.USE = "HAnimSegmentLineColorRGBA"

LineSet913.color = ColorRGBA915

Shape912.geometry = LineSet913

HAnimSegment908.children.append(Shape912)

HAnimJoint907.children.append(HAnimSegment908)
HAnimJoint916 = x3d.HAnimJoint()
HAnimJoint916.name = "vc5"
HAnimJoint916.DEF = "hanim_vc5"
HAnimJoint916.center = [0.0066,1.552,-0.0082]
HAnimJoint916.ulimit = [0,0,0]
HAnimJoint916.llimit = [0,0,0]
HAnimSegment917 = x3d.HAnimSegment()
HAnimSegment917.name = "c5"
HAnimSegment917.DEF = "hanim_c5"
Transform918 = x3d.Transform()
Transform918.translation = [0.0066,1.552,-0.0082]
Transform919 = x3d.Transform()
"""Empty Transform"""
Shape920 = x3d.Shape()
Shape920.USE = "HAnimJointShape"

Transform919.children.append(Shape920)

Transform918.children.append(Transform919)

HAnimSegment917.children.append(Transform918)
Shape921 = x3d.Shape()
LineSet922 = x3d.LineSet()
LineSet922.vertexCount = [2]
Coordinate923 = x3d.Coordinate()
Coordinate923.point = [(0.0066, 1.552, -0.0082),(0.0066, 1.5662, -0.0084)]

LineSet922.coord = Coordinate923
"""from vc5 to vc4 vertices 2"""
ColorRGBA924 = x3d.ColorRGBA()
ColorRGBA924.USE = "HAnimSegmentLineColorRGBA"

LineSet922.color = ColorRGBA924

Shape921.geometry = LineSet922

HAnimSegment917.children.append(Shape921)

HAnimJoint916.children.append(HAnimSegment917)
HAnimJoint925 = x3d.HAnimJoint()
HAnimJoint925.name = "vc4"
HAnimJoint925.DEF = "hanim_vc4"
HAnimJoint925.center = [0.0066,1.5662,-0.0084]
HAnimJoint925.ulimit = [0,0,0]
HAnimJoint925.llimit = [0,0,0]
HAnimSegment926 = x3d.HAnimSegment()
HAnimSegment926.name = "c4"
HAnimSegment926.DEF = "hanim_c4"
Transform927 = x3d.Transform()
Transform927.translation = [0.0066,1.5662,-0.0084]
Transform928 = x3d.Transform()
"""Empty Transform"""
Shape929 = x3d.Shape()
Shape929.USE = "HAnimJointShape"

Transform928.children.append(Shape929)

Transform927.children.append(Transform928)

HAnimSegment926.children.append(Transform927)
Shape930 = x3d.Shape()
LineSet931 = x3d.LineSet()
LineSet931.vertexCount = [2]
Coordinate932 = x3d.Coordinate()
Coordinate932.point = [(0.0066, 1.5662, -0.0084),(0.0066, 1.58, -0.0103)]

LineSet931.coord = Coordinate932
"""from vc4 to vc3 vertices 2"""
ColorRGBA933 = x3d.ColorRGBA()
ColorRGBA933.USE = "HAnimSegmentLineColorRGBA"

LineSet931.color = ColorRGBA933

Shape930.geometry = LineSet931

HAnimSegment926.children.append(Shape930)

HAnimJoint925.children.append(HAnimSegment926)
HAnimJoint934 = x3d.HAnimJoint()
HAnimJoint934.name = "vc3"
HAnimJoint934.DEF = "hanim_vc3"
HAnimJoint934.center = [0.0066,1.58,-0.0103]
HAnimJoint934.ulimit = [0,0,0]
HAnimJoint934.llimit = [0,0,0]
HAnimSegment935 = x3d.HAnimSegment()
HAnimSegment935.name = "c3"
HAnimSegment935.DEF = "hanim_c3"
Transform936 = x3d.Transform()
Transform936.translation = [0.0066,1.58,-0.0103]
Transform937 = x3d.Transform()
"""Empty Transform"""
Shape938 = x3d.Shape()
Shape938.USE = "HAnimJointShape"

Transform937.children.append(Shape938)

Transform936.children.append(Transform937)

HAnimSegment935.children.append(Transform936)
Shape939 = x3d.Shape()
LineSet940 = x3d.LineSet()
LineSet940.vertexCount = [2]
Coordinate941 = x3d.Coordinate()
Coordinate941.point = [(0.0066, 1.58, -0.0103),(0.0066, 1.5928, -0.0103)]

LineSet940.coord = Coordinate941
"""from vc3 to vc2 vertices 2"""
ColorRGBA942 = x3d.ColorRGBA()
ColorRGBA942.USE = "HAnimSegmentLineColorRGBA"

LineSet940.color = ColorRGBA942

Shape939.geometry = LineSet940

HAnimSegment935.children.append(Shape939)
HAnimSite943 = x3d.HAnimSite()
HAnimSite943.name = "adams_apple_pt"
HAnimSite943.DEF = "hanim_adams_apple_pt"
TouchSensor944 = x3d.TouchSensor()
TouchSensor944.description = "HAnimSite adams_apple_pt"

HAnimSite943.children.append(TouchSensor944)
Shape945 = x3d.Shape()
Shape945.USE = "HAnimSiteShape"

HAnimSite943.children.append(Shape945)

HAnimSegment935.children.append(HAnimSite943)

HAnimJoint934.children.append(HAnimSegment935)
HAnimJoint946 = x3d.HAnimJoint()
HAnimJoint946.name = "vc2"
HAnimJoint946.DEF = "hanim_vc2"
HAnimJoint946.center = [0.0066,1.5928,-0.0103]
HAnimJoint946.ulimit = [0,0,0]
HAnimJoint946.llimit = [0,0,0]
HAnimSegment947 = x3d.HAnimSegment()
HAnimSegment947.name = "c2"
HAnimSegment947.DEF = "hanim_c2"
Transform948 = x3d.Transform()
Transform948.translation = [0.0066,1.5928,-0.0103]
Transform949 = x3d.Transform()
"""Empty Transform"""
Shape950 = x3d.Shape()
Shape950.USE = "HAnimJointShape"

Transform949.children.append(Shape950)

Transform948.children.append(Transform949)

HAnimSegment947.children.append(Transform948)
Shape951 = x3d.Shape()
LineSet952 = x3d.LineSet()
LineSet952.vertexCount = [2]
Coordinate953 = x3d.Coordinate()
Coordinate953.point = [(0.0066, 1.5928, -0.0103),(0.0066, 1.6144, -0.0034)]

LineSet952.coord = Coordinate953
"""from vc2 to vc1 vertices 2"""
ColorRGBA954 = x3d.ColorRGBA()
ColorRGBA954.USE = "HAnimSegmentLineColorRGBA"

LineSet952.color = ColorRGBA954

Shape951.geometry = LineSet952

HAnimSegment947.children.append(Shape951)

HAnimJoint946.children.append(HAnimSegment947)
HAnimJoint955 = x3d.HAnimJoint()
HAnimJoint955.name = "vc1"
HAnimJoint955.DEF = "hanim_vc1"
HAnimJoint955.center = [0.0066,1.6144,-0.0034]
HAnimJoint955.ulimit = [0,0,0]
HAnimJoint955.llimit = [0,0,0]
HAnimSegment956 = x3d.HAnimSegment()
HAnimSegment956.name = "c1"
HAnimSegment956.DEF = "hanim_c1"
Transform957 = x3d.Transform()
Transform957.translation = [0.0066,1.6144,-0.0034]
Transform958 = x3d.Transform()
"""Empty Transform"""
Shape959 = x3d.Shape()
Shape959.USE = "HAnimJointShape"

Transform958.children.append(Shape959)

Transform957.children.append(Transform958)

HAnimSegment956.children.append(Transform957)
Shape960 = x3d.Shape()
LineSet961 = x3d.LineSet()
LineSet961.vertexCount = [2]
Coordinate962 = x3d.Coordinate()
Coordinate962.point = [(0.0066, 1.6144, -0.0034),(0.0044, 1.6209, 0.0236)]

LineSet961.coord = Coordinate962
"""from vc1 to skullbase vertices 2"""
ColorRGBA963 = x3d.ColorRGBA()
ColorRGBA963.USE = "HAnimSegmentLineColorRGBA"

LineSet961.color = ColorRGBA963

Shape960.geometry = LineSet961

HAnimSegment956.children.append(Shape960)
HAnimSite964 = x3d.HAnimSite()
HAnimSite964.name = "glabella_pt"
HAnimSite964.DEF = "hanim_glabella_pt"
TouchSensor965 = x3d.TouchSensor()
TouchSensor965.description = "HAnimSite glabella_pt"

HAnimSite964.children.append(TouchSensor965)
Shape966 = x3d.Shape()
Shape966.USE = "HAnimSiteShape"

HAnimSite964.children.append(Shape966)

HAnimSegment956.children.append(HAnimSite964)
HAnimSite967 = x3d.HAnimSite()
HAnimSite967.name = "l_ectocanthus_pt"
HAnimSite967.DEF = "hanim_l_ectocanthus_pt"
TouchSensor968 = x3d.TouchSensor()
TouchSensor968.description = "HAnimSite l_ectocanthus_pt"

HAnimSite967.children.append(TouchSensor968)
Shape969 = x3d.Shape()
Shape969.USE = "HAnimSiteShape"

HAnimSite967.children.append(Shape969)

HAnimSegment956.children.append(HAnimSite967)
HAnimSite970 = x3d.HAnimSite()
HAnimSite970.name = "l_infraorbitale_pt"
HAnimSite970.DEF = "hanim_l_infraorbitale_pt"
HAnimSite970.translation = [0.0341,1.6171,0.0752]
TouchSensor971 = x3d.TouchSensor()
TouchSensor971.description = "HAnimSite l_infraorbitale_pt"

HAnimSite970.children.append(TouchSensor971)
Shape972 = x3d.Shape()
Shape972.USE = "HAnimSiteShape"

HAnimSite970.children.append(Shape972)

HAnimSegment956.children.append(HAnimSite970)
HAnimSite973 = x3d.HAnimSite()
HAnimSite973.name = "l_tragion_pt"
HAnimSite973.DEF = "hanim_l_tragion_pt"
HAnimSite973.translation = [0.0739,1.6348,0.0282]
TouchSensor974 = x3d.TouchSensor()
TouchSensor974.description = "HAnimSite l_tragion_pt"

HAnimSite973.children.append(TouchSensor974)
Shape975 = x3d.Shape()
Shape975.USE = "HAnimSiteShape"

HAnimSite973.children.append(Shape975)

HAnimSegment956.children.append(HAnimSite973)
HAnimSite976 = x3d.HAnimSite()
HAnimSite976.name = "nuchale_pt"
HAnimSite976.DEF = "hanim_nuchale_pt"
HAnimSite976.translation = [0.0039,1.5972,-0.0796]
TouchSensor977 = x3d.TouchSensor()
TouchSensor977.description = "HAnimSite nuchale_pt"

HAnimSite976.children.append(TouchSensor977)
Shape978 = x3d.Shape()
Shape978.USE = "HAnimSiteShape"

HAnimSite976.children.append(Shape978)

HAnimSegment956.children.append(HAnimSite976)
HAnimSite979 = x3d.HAnimSite()
HAnimSite979.name = "opisthocranion_pt"
HAnimSite979.DEF = "hanim_opisthocranion_pt"
TouchSensor980 = x3d.TouchSensor()
TouchSensor980.description = "HAnimSite opisthocranion_pt"

HAnimSite979.children.append(TouchSensor980)
Shape981 = x3d.Shape()
Shape981.USE = "HAnimSiteShape"

HAnimSite979.children.append(Shape981)

HAnimSegment956.children.append(HAnimSite979)
HAnimSite982 = x3d.HAnimSite()
HAnimSite982.name = "r_ectocanthus_pt"
HAnimSite982.DEF = "hanim_r_ectocanthus_pt"
TouchSensor983 = x3d.TouchSensor()
TouchSensor983.description = "HAnimSite r_ectocanthus_pt"

HAnimSite982.children.append(TouchSensor983)
Shape984 = x3d.Shape()
Shape984.USE = "HAnimSiteShape"

HAnimSite982.children.append(Shape984)

HAnimSegment956.children.append(HAnimSite982)
HAnimSite985 = x3d.HAnimSite()
HAnimSite985.name = "r_infraorbitale_pt"
HAnimSite985.DEF = "hanim_r_infraorbitale_pt"
HAnimSite985.translation = [-0.0237,1.6171,0.0752]
TouchSensor986 = x3d.TouchSensor()
TouchSensor986.description = "HAnimSite r_infraorbitale_pt"

HAnimSite985.children.append(TouchSensor986)
Shape987 = x3d.Shape()
Shape987.USE = "HAnimSiteShape"

HAnimSite985.children.append(Shape987)

HAnimSegment956.children.append(HAnimSite985)
HAnimSite988 = x3d.HAnimSite()
HAnimSite988.name = "r_tragion_pt"
HAnimSite988.DEF = "hanim_r_tragion_pt"
HAnimSite988.translation = [-0.0646,1.6347,0.0302]
TouchSensor989 = x3d.TouchSensor()
TouchSensor989.description = "HAnimSite r_tragion_pt"

HAnimSite988.children.append(TouchSensor989)
Shape990 = x3d.Shape()
Shape990.USE = "HAnimSiteShape"

HAnimSite988.children.append(Shape990)

HAnimSegment956.children.append(HAnimSite988)
HAnimSite991 = x3d.HAnimSite()
HAnimSite991.name = "sellion_pt"
HAnimSite991.DEF = "hanim_sellion_pt"
HAnimSite991.translation = [0.0058,1.6316,0.0852]
TouchSensor992 = x3d.TouchSensor()
TouchSensor992.description = "HAnimSite sellion_pt"

HAnimSite991.children.append(TouchSensor992)
Shape993 = x3d.Shape()
Shape993.USE = "HAnimSiteShape"

HAnimSite991.children.append(Shape993)

HAnimSegment956.children.append(HAnimSite991)
HAnimSite994 = x3d.HAnimSite()
HAnimSite994.name = "skull_vertex_pt"
HAnimSite994.DEF = "hanim_skull_vertex_pt"
HAnimSite994.translation = [0.005,1.7504,0.0055]
TouchSensor995 = x3d.TouchSensor()
TouchSensor995.description = "HAnimSite skull_vertex_pt"

HAnimSite994.children.append(TouchSensor995)
Shape996 = x3d.Shape()
Shape996.USE = "HAnimSiteShape"

HAnimSite994.children.append(Shape996)

HAnimSegment956.children.append(HAnimSite994)

HAnimJoint955.children.append(HAnimSegment956)
HAnimJoint997 = x3d.HAnimJoint()
HAnimJoint997.name = "skullbase"
HAnimJoint997.DEF = "hanim_skullbase"
HAnimJoint997.center = [0.0044,1.6209,0.0236]
HAnimJoint997.ulimit = [0,0,0]
HAnimJoint997.llimit = [0,0,0]
HAnimSegment998 = x3d.HAnimSegment()
HAnimSegment998.name = "skull"
HAnimSegment998.DEF = "hanim_skull"
Transform999 = x3d.Transform()
Transform999.translation = [0.0044,1.6209,0.0236]
Transform1000 = x3d.Transform()
"""Empty Transform"""
Shape1001 = x3d.Shape()
Shape1001.USE = "HAnimJointShape"

Transform1000.children.append(Shape1001)

Transform999.children.append(Transform1000)

HAnimSegment998.children.append(Transform999)
Shape1002 = x3d.Shape()
LineSet1003 = x3d.LineSet()
LineSet1003.vertexCount = [2]
Coordinate1004 = x3d.Coordinate()
Coordinate1004.point = [(0.0044, 1.6209, 0.0236),(2.2365, 1.87, 1.9285)]

LineSet1003.coord = Coordinate1004
"""from skullbase to l_eyelid_joint vertices 2"""
ColorRGBA1005 = x3d.ColorRGBA()
ColorRGBA1005.USE = "HAnimSegmentLineColorRGBA"

LineSet1003.color = ColorRGBA1005

Shape1002.geometry = LineSet1003

HAnimSegment998.children.append(Shape1002)
Shape1006 = x3d.Shape()
LineSet1007 = x3d.LineSet()
LineSet1007.vertexCount = [2]
Coordinate1008 = x3d.Coordinate()
Coordinate1008.point = [(0.0044, 1.6209, 0.0236),(-2.2535, 1.87, 1.9285)]

LineSet1007.coord = Coordinate1008
"""from skullbase to r_eyelid_joint vertices 2"""
ColorRGBA1009 = x3d.ColorRGBA()
ColorRGBA1009.USE = "HAnimSegmentLineColorRGBA"

LineSet1007.color = ColorRGBA1009

Shape1006.geometry = LineSet1007

HAnimSegment998.children.append(Shape1006)
Shape1010 = x3d.Shape()
LineSet1011 = x3d.LineSet()
LineSet1011.vertexCount = [2]
Coordinate1012 = x3d.Coordinate()
Coordinate1012.point = [(0.0044, 1.6209, 0.0236),(2.1305, 1.8444, 4.1555)]

LineSet1011.coord = Coordinate1012
"""from skullbase to l_eyeball_joint vertices 2"""
ColorRGBA1013 = x3d.ColorRGBA()
ColorRGBA1013.USE = "HAnimSegmentLineColorRGBA"

LineSet1011.color = ColorRGBA1013

Shape1010.geometry = LineSet1011

HAnimSegment998.children.append(Shape1010)
Shape1014 = x3d.Shape()
LineSet1015 = x3d.LineSet()
LineSet1015.vertexCount = [2]
Coordinate1016 = x3d.Coordinate()
Coordinate1016.point = [(0.0044, 1.6209, 0.0236),(-2.1475, 1.8444, 4.1555)]

LineSet1015.coord = Coordinate1016
"""from skullbase to r_eyeball_joint vertices 2"""
ColorRGBA1017 = x3d.ColorRGBA()
ColorRGBA1017.USE = "HAnimSegmentLineColorRGBA"

LineSet1015.color = ColorRGBA1017

Shape1014.geometry = LineSet1015

HAnimSegment998.children.append(Shape1014)
Shape1018 = x3d.Shape()
LineSet1019 = x3d.LineSet()
LineSet1019.vertexCount = [2]
Coordinate1020 = x3d.Coordinate()
Coordinate1020.point = [(0.0044, 1.6209, 0.0236),(0.9581, 1.8563, 5.2175)]

LineSet1019.coord = Coordinate1020
"""from skullbase to l_eyebrow_joint vertices 2"""
ColorRGBA1021 = x3d.ColorRGBA()
ColorRGBA1021.USE = "HAnimSegmentLineColorRGBA"

LineSet1019.color = ColorRGBA1021

Shape1018.geometry = LineSet1019

HAnimSegment998.children.append(Shape1018)
Shape1022 = x3d.Shape()
LineSet1023 = x3d.LineSet()
LineSet1023.vertexCount = [2]
Coordinate1024 = x3d.Coordinate()
Coordinate1024.point = [(0.0044, 1.6209, 0.0236),(-0.9751, 1.8563, 5.2175)]

LineSet1023.coord = Coordinate1024
"""from skullbase to r_eyebrow_joint vertices 2"""
ColorRGBA1025 = x3d.ColorRGBA()
ColorRGBA1025.USE = "HAnimSegmentLineColorRGBA"

LineSet1023.color = ColorRGBA1025

Shape1022.geometry = LineSet1023

HAnimSegment998.children.append(Shape1022)
Shape1026 = x3d.Shape()
LineSet1027 = x3d.LineSet()
LineSet1027.vertexCount = [2]
Coordinate1028 = x3d.Coordinate()
Coordinate1028.point = [(0.0044, 1.6209, 0.0236),(-0.0085, 1.7229, 1.148)]

LineSet1027.coord = Coordinate1028
"""from skullbase to temporomandibular vertices 2"""
ColorRGBA1029 = x3d.ColorRGBA()
ColorRGBA1029.USE = "HAnimSegmentLineColorRGBA"

LineSet1027.color = ColorRGBA1029

Shape1026.geometry = LineSet1027

HAnimSegment998.children.append(Shape1026)
HAnimSite1030 = x3d.HAnimSite()
HAnimSite1030.name = "l_gonion_pt"
HAnimSite1030.DEF = "hanim_l_gonion_pt"
HAnimSite1030.translation = [0.0631,1.553,0.033]
TouchSensor1031 = x3d.TouchSensor()
TouchSensor1031.description = "HAnimSite l_gonion_pt"

HAnimSite1030.children.append(TouchSensor1031)
Shape1032 = x3d.Shape()
Shape1032.USE = "HAnimSiteShape"

HAnimSite1030.children.append(Shape1032)

HAnimSegment998.children.append(HAnimSite1030)
HAnimSite1033 = x3d.HAnimSite()
HAnimSite1033.name = "menton_pt"
HAnimSite1033.DEF = "hanim_menton_pt"
TouchSensor1034 = x3d.TouchSensor()
TouchSensor1034.description = "HAnimSite menton_pt"

HAnimSite1033.children.append(TouchSensor1034)
Shape1035 = x3d.Shape()
Shape1035.USE = "HAnimSiteShape"

HAnimSite1033.children.append(Shape1035)

HAnimSegment998.children.append(HAnimSite1033)
HAnimSite1036 = x3d.HAnimSite()
HAnimSite1036.name = "r_gonion_pt"
HAnimSite1036.DEF = "hanim_r_gonion_pt"
HAnimSite1036.translation = [-0.052,1.5529,0.0347]
TouchSensor1037 = x3d.TouchSensor()
TouchSensor1037.description = "HAnimSite r_gonion_pt"

HAnimSite1036.children.append(TouchSensor1037)
Shape1038 = x3d.Shape()
Shape1038.USE = "HAnimSiteShape"

HAnimSite1036.children.append(Shape1038)

HAnimSegment998.children.append(HAnimSite1036)
HAnimSite1039 = x3d.HAnimSite()
HAnimSite1039.name = "supramenton_pt"
HAnimSite1039.DEF = "hanim_supramenton_pt"
HAnimSite1039.translation = [0.0061,1.541,0.0805]
TouchSensor1040 = x3d.TouchSensor()
TouchSensor1040.description = "HAnimSite supramenton_pt"

HAnimSite1039.children.append(TouchSensor1040)
Shape1041 = x3d.Shape()
Shape1041.USE = "HAnimSiteShape"

HAnimSite1039.children.append(Shape1041)

HAnimSegment998.children.append(HAnimSite1039)

HAnimJoint997.children.append(HAnimSegment998)
HAnimJoint1042 = x3d.HAnimJoint()
HAnimJoint1042.name = "l_eyelid_joint"
HAnimJoint1042.DEF = "hanim_l_eyelid_joint"
HAnimJoint1042.center = [2.2365,1.87,1.9285]
HAnimJoint1042.ulimit = [0,0,0]
HAnimJoint1042.llimit = [0,0,0]

HAnimJoint997.children.append(HAnimJoint1042)
HAnimJoint1043 = x3d.HAnimJoint()
HAnimJoint1043.name = "r_eyelid_joint"
HAnimJoint1043.DEF = "hanim_r_eyelid_joint"
HAnimJoint1043.center = [-2.2535,1.87,1.9285]
HAnimJoint1043.ulimit = [0,0,0]
HAnimJoint1043.llimit = [0,0,0]

HAnimJoint997.children.append(HAnimJoint1043)
HAnimJoint1044 = x3d.HAnimJoint()
HAnimJoint1044.name = "l_eyeball_joint"
HAnimJoint1044.DEF = "hanim_l_eyeball_joint"
HAnimJoint1044.center = [2.1305,1.8444,4.1555]
HAnimJoint1044.ulimit = [0,0,0]
HAnimJoint1044.llimit = [0,0,0]

HAnimJoint997.children.append(HAnimJoint1044)
HAnimJoint1045 = x3d.HAnimJoint()
HAnimJoint1045.name = "r_eyeball_joint"
HAnimJoint1045.DEF = "hanim_r_eyeball_joint"
HAnimJoint1045.center = [-2.1475,1.8444,4.1555]
HAnimJoint1045.ulimit = [0,0,0]
HAnimJoint1045.llimit = [0,0,0]

HAnimJoint997.children.append(HAnimJoint1045)
HAnimJoint1046 = x3d.HAnimJoint()
HAnimJoint1046.name = "l_eyebrow_joint"
HAnimJoint1046.DEF = "hanim_l_eyebrow_joint"
HAnimJoint1046.center = [0.9581,1.8563,5.2175]
HAnimJoint1046.ulimit = [0,0,0]
HAnimJoint1046.llimit = [0,0,0]

HAnimJoint997.children.append(HAnimJoint1046)
HAnimJoint1047 = x3d.HAnimJoint()
HAnimJoint1047.name = "r_eyebrow_joint"
HAnimJoint1047.DEF = "hanim_r_eyebrow_joint"
HAnimJoint1047.center = [-0.9751,1.8563,5.2175]
HAnimJoint1047.ulimit = [0,0,0]
HAnimJoint1047.llimit = [0,0,0]

HAnimJoint997.children.append(HAnimJoint1047)
HAnimJoint1048 = x3d.HAnimJoint()
HAnimJoint1048.name = "temporomandibular"
HAnimJoint1048.DEF = "hanim_temporomandibular"
HAnimJoint1048.center = [-0.0085,1.7229,1.148]
HAnimJoint1048.ulimit = [0,0,0]
HAnimJoint1048.llimit = [0,0,0]

HAnimJoint997.children.append(HAnimJoint1048)

HAnimJoint955.children.append(HAnimJoint997)

HAnimJoint946.children.append(HAnimJoint955)

HAnimJoint934.children.append(HAnimJoint946)

HAnimJoint925.children.append(HAnimJoint934)

HAnimJoint916.children.append(HAnimJoint925)

HAnimJoint907.children.append(HAnimJoint916)

HAnimJoint898.children.append(HAnimJoint907)

HAnimJoint845.children.append(HAnimJoint898)
HAnimJoint1049 = x3d.HAnimJoint()
HAnimJoint1049.name = "l_sternoclavicular"
HAnimJoint1049.DEF = "hanim_l_sternoclavicular"
HAnimJoint1049.center = [0.082,1.4488,-0.0353]
HAnimJoint1049.ulimit = [0,0,0]
HAnimJoint1049.llimit = [0,0,0]
HAnimSegment1050 = x3d.HAnimSegment()
HAnimSegment1050.name = "l_clavicle"
HAnimSegment1050.DEF = "hanim_l_clavicle"
Transform1051 = x3d.Transform()
Transform1051.translation = [0.082,1.4488,-0.0353]
Transform1052 = x3d.Transform()
"""Empty Transform"""
Shape1053 = x3d.Shape()
Shape1053.USE = "HAnimJointShape"

Transform1052.children.append(Shape1053)

Transform1051.children.append(Transform1052)

HAnimSegment1050.children.append(Transform1051)
Shape1054 = x3d.Shape()
LineSet1055 = x3d.LineSet()
LineSet1055.vertexCount = [2]
Coordinate1056 = x3d.Coordinate()
Coordinate1056.point = [(0.082, 1.4488, -0.0353),(0.0962, 1.4269, -0.0424)]

LineSet1055.coord = Coordinate1056
"""from l_sternoclavicular to l_acromioclavicular vertices 2"""
ColorRGBA1057 = x3d.ColorRGBA()
ColorRGBA1057.USE = "HAnimSegmentLineColorRGBA"

LineSet1055.color = ColorRGBA1057

Shape1054.geometry = LineSet1055

HAnimSegment1050.children.append(Shape1054)

HAnimJoint1049.children.append(HAnimSegment1050)
HAnimJoint1058 = x3d.HAnimJoint()
HAnimJoint1058.name = "l_acromioclavicular"
HAnimJoint1058.DEF = "hanim_l_acromioclavicular"
HAnimJoint1058.center = [0.0962,1.4269,-0.0424]
HAnimJoint1058.ulimit = [0,0,0]
HAnimJoint1058.llimit = [0,0,0]
HAnimSegment1059 = x3d.HAnimSegment()
HAnimSegment1059.name = "l_scapula"
HAnimSegment1059.DEF = "hanim_l_scapula"
Transform1060 = x3d.Transform()
Transform1060.translation = [0.0962,1.4269,-0.0424]
Transform1061 = x3d.Transform()
"""Empty Transform"""
Shape1062 = x3d.Shape()
Shape1062.USE = "HAnimJointShape"

Transform1061.children.append(Shape1062)

Transform1060.children.append(Transform1061)

HAnimSegment1059.children.append(Transform1060)
Shape1063 = x3d.Shape()
LineSet1064 = x3d.LineSet()
LineSet1064.vertexCount = [2]
Coordinate1065 = x3d.Coordinate()
Coordinate1065.point = [(0.0962, 1.4269, -0.0424),(0.2029, 1.4376, -0.0387)]

LineSet1064.coord = Coordinate1065
"""from l_acromioclavicular to l_shoulder vertices 2"""
ColorRGBA1066 = x3d.ColorRGBA()
ColorRGBA1066.USE = "HAnimSegmentLineColorRGBA"

LineSet1064.color = ColorRGBA1066

Shape1063.geometry = LineSet1064

HAnimSegment1059.children.append(Shape1063)
HAnimSite1067 = x3d.HAnimSite()
HAnimSite1067.name = "l_bideltoid_pt"
HAnimSite1067.DEF = "hanim_l_bideltoid_pt"
TouchSensor1068 = x3d.TouchSensor()
TouchSensor1068.description = "HAnimSite l_bideltoid_pt"

HAnimSite1067.children.append(TouchSensor1068)
Shape1069 = x3d.Shape()
Shape1069.USE = "HAnimSiteShape"

HAnimSite1067.children.append(Shape1069)

HAnimSegment1059.children.append(HAnimSite1067)
HAnimSite1070 = x3d.HAnimSite()
HAnimSite1070.name = "l_humeral_lateral_epicondyles_pt"
HAnimSite1070.DEF = "hanim_l_humeral_lateral_epicondyles_pt"
HAnimSite1070.translation = [0.228,1.1482,-0.11]
TouchSensor1071 = x3d.TouchSensor()
TouchSensor1071.description = "HAnimSite l_humeral_lateral_epicondyles_pt"

HAnimSite1070.children.append(TouchSensor1071)
Shape1072 = x3d.Shape()
Shape1072.USE = "HAnimSiteShape"

HAnimSite1070.children.append(Shape1072)

HAnimSegment1059.children.append(HAnimSite1070)

HAnimJoint1058.children.append(HAnimSegment1059)
HAnimJoint1073 = x3d.HAnimJoint()
HAnimJoint1073.name = "l_shoulder"
HAnimJoint1073.DEF = "hanim_l_shoulder"
HAnimJoint1073.center = [0.2029,1.4376,-0.0387]
HAnimJoint1073.ulimit = [0,0,0]
HAnimJoint1073.llimit = [0,0,0]
HAnimSegment1074 = x3d.HAnimSegment()
HAnimSegment1074.name = "l_upperarm"
HAnimSegment1074.DEF = "hanim_l_upperarm"
Transform1075 = x3d.Transform()
Transform1075.translation = [0.2029,1.4376,-0.0387]
Transform1076 = x3d.Transform()
"""Empty Transform"""
Shape1077 = x3d.Shape()
Shape1077.USE = "HAnimJointShape"

Transform1076.children.append(Shape1077)

Transform1075.children.append(Transform1076)

HAnimSegment1074.children.append(Transform1075)
Shape1078 = x3d.Shape()
LineSet1079 = x3d.LineSet()
LineSet1079.vertexCount = [2]
Coordinate1080 = x3d.Coordinate()
Coordinate1080.point = [(0.2029, 1.4376, -0.0387),(0.2014, 1.1357, -0.0682)]

LineSet1079.coord = Coordinate1080
"""from l_shoulder to l_elbow vertices 2"""
ColorRGBA1081 = x3d.ColorRGBA()
ColorRGBA1081.USE = "HAnimSegmentLineColorRGBA"

LineSet1079.color = ColorRGBA1081

Shape1078.geometry = LineSet1079

HAnimSegment1074.children.append(Shape1078)
HAnimSite1082 = x3d.HAnimSite()
HAnimSite1082.name = "l_humeral_medial_epicondyles_pt"
HAnimSite1082.DEF = "hanim_l_humeral_medial_epicondyles_pt"
HAnimSite1082.translation = [0.1735,1.1272,-0.1113]
TouchSensor1083 = x3d.TouchSensor()
TouchSensor1083.description = "HAnimSite l_humeral_medial_epicondyles_pt"

HAnimSite1082.children.append(TouchSensor1083)
Shape1084 = x3d.Shape()
Shape1084.USE = "HAnimSiteShape"

HAnimSite1082.children.append(Shape1084)

HAnimSegment1074.children.append(HAnimSite1082)
HAnimSite1085 = x3d.HAnimSite()
HAnimSite1085.name = "l_olecranon_pt"
HAnimSite1085.DEF = "hanim_l_olecranon_pt"
HAnimSite1085.translation = [-0.1962,1.1375,-0.1123]
TouchSensor1086 = x3d.TouchSensor()
TouchSensor1086.description = "HAnimSite l_olecranon_pt"

HAnimSite1085.children.append(TouchSensor1086)
Shape1087 = x3d.Shape()
Shape1087.USE = "HAnimSiteShape"

HAnimSite1085.children.append(Shape1087)

HAnimSegment1074.children.append(HAnimSite1085)
HAnimSite1088 = x3d.HAnimSite()
HAnimSite1088.name = "l_radial_styloid_pt"
HAnimSite1088.DEF = "hanim_l_radial_styloid_pt"
HAnimSite1088.translation = [0.1901,0.8645,-0.0415]
TouchSensor1089 = x3d.TouchSensor()
TouchSensor1089.description = "HAnimSite l_radial_styloid_pt"

HAnimSite1088.children.append(TouchSensor1089)
Shape1090 = x3d.Shape()
Shape1090.USE = "HAnimSiteShape"

HAnimSite1088.children.append(Shape1090)

HAnimSegment1074.children.append(HAnimSite1088)
HAnimSite1091 = x3d.HAnimSite()
HAnimSite1091.name = "l_radiale_pt"
HAnimSite1091.DEF = "hanim_l_radiale_pt"
HAnimSite1091.translation = [0.2182,1.1212,-0.1167]
TouchSensor1092 = x3d.TouchSensor()
TouchSensor1092.description = "HAnimSite l_radiale_pt"

HAnimSite1091.children.append(TouchSensor1092)
Shape1093 = x3d.Shape()
Shape1093.USE = "HAnimSiteShape"

HAnimSite1091.children.append(Shape1093)

HAnimSegment1074.children.append(HAnimSite1091)

HAnimJoint1073.children.append(HAnimSegment1074)
HAnimJoint1094 = x3d.HAnimJoint()
HAnimJoint1094.name = "l_elbow"
HAnimJoint1094.DEF = "hanim_l_elbow"
HAnimJoint1094.center = [0.2014,1.1357,-0.0682]
HAnimJoint1094.ulimit = [0,0,0]
HAnimJoint1094.llimit = [0,0,0]
HAnimSegment1095 = x3d.HAnimSegment()
HAnimSegment1095.name = "l_forearm"
HAnimSegment1095.DEF = "hanim_l_forearm"
Transform1096 = x3d.Transform()
Transform1096.translation = [0.2014,1.1357,-0.0682]
Transform1097 = x3d.Transform()
"""Empty Transform"""
Shape1098 = x3d.Shape()
Shape1098.USE = "HAnimJointShape"

Transform1097.children.append(Shape1098)

Transform1096.children.append(Transform1097)

HAnimSegment1095.children.append(Transform1096)
Shape1099 = x3d.Shape()
LineSet1100 = x3d.LineSet()
LineSet1100.vertexCount = [2]
Coordinate1101 = x3d.Coordinate()
Coordinate1101.point = [(0.2014, 1.1357, -0.0682),(0.1984, 0.8663, -0.0583)]

LineSet1100.coord = Coordinate1101
"""from l_elbow to l_radiocarpal vertices 2"""
ColorRGBA1102 = x3d.ColorRGBA()
ColorRGBA1102.USE = "HAnimSegmentLineColorRGBA"

LineSet1100.color = ColorRGBA1102

Shape1099.geometry = LineSet1100

HAnimSegment1095.children.append(Shape1099)
HAnimSite1103 = x3d.HAnimSite()
HAnimSite1103.name = "l_ulnar_styloid_pt"
HAnimSite1103.DEF = "hanim_l_ulnar_styloid_pt"
HAnimSite1103.translation = [-0.2142,0.8529,-0.0648]
TouchSensor1104 = x3d.TouchSensor()
TouchSensor1104.description = "HAnimSite l_ulnar_styloid_pt"

HAnimSite1103.children.append(TouchSensor1104)
Shape1105 = x3d.Shape()
Shape1105.USE = "HAnimSiteShape"

HAnimSite1103.children.append(Shape1105)

HAnimSegment1095.children.append(HAnimSite1103)

HAnimJoint1094.children.append(HAnimSegment1095)
HAnimJoint1106 = x3d.HAnimJoint()
HAnimJoint1106.name = "l_radiocarpal"
HAnimJoint1106.DEF = "hanim_l_radiocarpal"
HAnimJoint1106.center = [0.1984,0.8663,-0.0583]
HAnimJoint1106.ulimit = [0,0,0]
HAnimJoint1106.llimit = [0,0,0]
HAnimSegment1107 = x3d.HAnimSegment()
HAnimSegment1107.name = "l_carpal"
HAnimSegment1107.DEF = "hanim_l_carpal"
Transform1108 = x3d.Transform()
Transform1108.scale = [0.2,0.2,0.2]
Transform1108.translation = [0.2,0.85,-0.05]
Transform1108.rotation = [0,0,1,-3.14]
"""Transform left hand"""
Transform1109 = x3d.Transform()
Transform1109.rotation = [0,1,0,-1.57]
"""Transform left hand"""
Shape1110 = x3d.Shape()
Shape1110.USE = "HAnimJointShape"

Transform1109.children.append(Shape1110)

Transform1108.children.append(Transform1109)

HAnimSegment1107.children.append(Transform1108)
Shape1111 = x3d.Shape()
LineSet1112 = x3d.LineSet()
LineSet1112.vertexCount = [2]
Coordinate1113 = x3d.Coordinate()
Coordinate1113.point = [(0.1984, 0.8663, -0.0583),(8.0485, 0.9213, 1.3235)]

LineSet1112.coord = Coordinate1113
"""from l_radiocarpal to l_midcarpal_1 vertices 2"""
ColorRGBA1114 = x3d.ColorRGBA()
ColorRGBA1114.USE = "HAnimSegmentLineColorRGBA"

LineSet1112.color = ColorRGBA1114

Shape1111.geometry = LineSet1112

HAnimSegment1107.children.append(Shape1111)
Shape1115 = x3d.Shape()
LineSet1116 = x3d.LineSet()
LineSet1116.vertexCount = [2]
Coordinate1117 = x3d.Coordinate()
Coordinate1117.point = [(0.1984, 0.8663, -0.0583),(8.0485, 0.9225, 0.8386)]

LineSet1116.coord = Coordinate1117
"""from l_radiocarpal to l_midcarpal_2 vertices 2"""
ColorRGBA1118 = x3d.ColorRGBA()
ColorRGBA1118.USE = "HAnimSegmentLineColorRGBA"

LineSet1116.color = ColorRGBA1118

Shape1115.geometry = LineSet1116

HAnimSegment1107.children.append(Shape1115)
Shape1119 = x3d.Shape()
LineSet1120 = x3d.LineSet()
LineSet1120.vertexCount = [2]
Coordinate1121 = x3d.Coordinate()
Coordinate1121.point = [(0.1984, 0.8663, -0.0583),(8.0395, 0.9246, 0.2513)]

LineSet1120.coord = Coordinate1121
"""from l_radiocarpal to l_midcarpal_3 vertices 2"""
ColorRGBA1122 = x3d.ColorRGBA()
ColorRGBA1122.USE = "HAnimSegmentLineColorRGBA"

LineSet1120.color = ColorRGBA1122

Shape1119.geometry = LineSet1120

HAnimSegment1107.children.append(Shape1119)
Shape1123 = x3d.Shape()
LineSet1124 = x3d.LineSet()
LineSet1124.vertexCount = [2]
Coordinate1125 = x3d.Coordinate()
Coordinate1125.point = [(0.1984, 0.8663, -0.0583),(8.0395, 0.921, -0.6795)]

LineSet1124.coord = Coordinate1125
"""from l_radiocarpal to l_midcarpal_4_5 vertices 2"""
ColorRGBA1126 = x3d.ColorRGBA()
ColorRGBA1126.USE = "HAnimSegmentLineColorRGBA"

LineSet1124.color = ColorRGBA1126

Shape1123.geometry = LineSet1124

HAnimSegment1107.children.append(Shape1123)

HAnimJoint1106.children.append(HAnimSegment1107)
HAnimJoint1127 = x3d.HAnimJoint()
HAnimJoint1127.name = "l_midcarpal_1"
HAnimJoint1127.DEF = "hanim_l_midcarpal_1"
HAnimJoint1127.center = [8.0485,0.9213,1.3235]
HAnimJoint1127.ulimit = [0,0,0]
HAnimJoint1127.llimit = [0,0,0]
HAnimSegment1128 = x3d.HAnimSegment()
HAnimSegment1128.name = "l_trapezium"
HAnimSegment1128.DEF = "hanim_l_trapezium"
Transform1129 = x3d.Transform()
Transform1129.translation = [8.0485,0.9213,1.3235]
Transform1130 = x3d.Transform()
"""Empty Transform"""
Shape1131 = x3d.Shape()
Shape1131.USE = "HAnimJointShape"

Transform1130.children.append(Shape1131)

Transform1129.children.append(Transform1130)

HAnimSegment1128.children.append(Transform1129)
Shape1132 = x3d.Shape()
LineSet1133 = x3d.LineSet()
LineSet1133.vertexCount = [2]
Coordinate1134 = x3d.Coordinate()
Coordinate1134.point = [(8.0485, 0.9213, 1.3235),(0.1924, 0.8472, -0.0534)]

LineSet1133.coord = Coordinate1134
"""from l_midcarpal_1 to l_carpometacarpal_1 vertices 2"""
ColorRGBA1135 = x3d.ColorRGBA()
ColorRGBA1135.USE = "HAnimSegmentLineColorRGBA"

LineSet1133.color = ColorRGBA1135

Shape1132.geometry = LineSet1133

HAnimSegment1128.children.append(Shape1132)

HAnimJoint1127.children.append(HAnimSegment1128)
HAnimJoint1136 = x3d.HAnimJoint()
HAnimJoint1136.name = "l_carpometacarpal_1"
HAnimJoint1136.DEF = "hanim_l_carpometacarpal_1"
HAnimJoint1136.center = [0.1924,0.8472,-0.0534]
HAnimJoint1136.ulimit = [0,0,0]
HAnimJoint1136.llimit = [0,0,0]
HAnimSegment1137 = x3d.HAnimSegment()
HAnimSegment1137.name = "l_metacarpal_1"
HAnimSegment1137.DEF = "hanim_l_metacarpal_1"
Transform1138 = x3d.Transform()
Transform1138.translation = [0.1924,0.8472,-0.0534]
Transform1139 = x3d.Transform()
"""Empty Transform"""
Shape1140 = x3d.Shape()
Shape1140.USE = "HAnimJointShape"

Transform1139.children.append(Shape1140)

Transform1138.children.append(Transform1139)

HAnimSegment1137.children.append(Transform1138)
Shape1141 = x3d.Shape()
LineSet1142 = x3d.LineSet()
LineSet1142.vertexCount = [2]
Coordinate1143 = x3d.Coordinate()
Coordinate1143.point = [(0.1924, 0.8472, -0.0534),(0.1951, 0.8226, 0.0246)]

LineSet1142.coord = Coordinate1143
"""from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2"""
ColorRGBA1144 = x3d.ColorRGBA()
ColorRGBA1144.USE = "HAnimSegmentLineColorRGBA"

LineSet1142.color = ColorRGBA1144

Shape1141.geometry = LineSet1142

HAnimSegment1137.children.append(Shape1141)

HAnimJoint1136.children.append(HAnimSegment1137)
HAnimJoint1145 = x3d.HAnimJoint()
HAnimJoint1145.name = "l_metacarpophalangeal_1"
HAnimJoint1145.DEF = "hanim_l_metacarpophalangeal_1"
HAnimJoint1145.center = [0.1951,0.8226,0.0246]
HAnimJoint1145.ulimit = [0,0,0]
HAnimJoint1145.llimit = [0,0,0]
HAnimSegment1146 = x3d.HAnimSegment()
HAnimSegment1146.name = "l_carpal_proximal_phalanx_1"
HAnimSegment1146.DEF = "hanim_l_carpal_proximal_phalanx_1"
Transform1147 = x3d.Transform()
Transform1147.translation = [0.1951,0.8226,0.0246]
Transform1148 = x3d.Transform()
"""Empty Transform"""
Shape1149 = x3d.Shape()
Shape1149.USE = "HAnimJointShape"

Transform1148.children.append(Shape1149)

Transform1147.children.append(Transform1148)

HAnimSegment1146.children.append(Transform1147)
Shape1150 = x3d.Shape()
LineSet1151 = x3d.LineSet()
LineSet1151.vertexCount = [2]
Coordinate1152 = x3d.Coordinate()
Coordinate1152.point = [(0.1951, 0.8226, 0.0246),(0.1955, 0.8159, 0.0464)]

LineSet1151.coord = Coordinate1152
"""from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2"""
ColorRGBA1153 = x3d.ColorRGBA()
ColorRGBA1153.USE = "HAnimSegmentLineColorRGBA"

LineSet1151.color = ColorRGBA1153

Shape1150.geometry = LineSet1151

HAnimSegment1146.children.append(Shape1150)
HAnimSite1154 = x3d.HAnimSite()
HAnimSite1154.name = "l_carpal_distal_phalanx_1_tip"
HAnimSite1154.DEF = "hanim_l_carpal_distal_phalanx_1_tip"
TouchSensor1155 = x3d.TouchSensor()
TouchSensor1155.description = "HAnimSite l_carpal_distal_phalanx_1_tip"

HAnimSite1154.children.append(TouchSensor1155)
Shape1156 = x3d.Shape()
Shape1156.USE = "HAnimSiteShape"

HAnimSite1154.children.append(Shape1156)

HAnimSegment1146.children.append(HAnimSite1154)

HAnimJoint1145.children.append(HAnimSegment1146)
HAnimJoint1157 = x3d.HAnimJoint()
HAnimJoint1157.name = "l_carpal_interphalangeal_1"
HAnimJoint1157.DEF = "hanim_l_carpal_interphalangeal_1"
HAnimJoint1157.center = [0.1955,0.8159,0.0464]
HAnimJoint1157.ulimit = [0,0,0]
HAnimJoint1157.llimit = [0,0,0]

HAnimJoint1145.children.append(HAnimJoint1157)

HAnimJoint1136.children.append(HAnimJoint1145)

HAnimJoint1127.children.append(HAnimJoint1136)

HAnimJoint1106.children.append(HAnimJoint1127)
HAnimJoint1158 = x3d.HAnimJoint()
HAnimJoint1158.name = "l_midcarpal_2"
HAnimJoint1158.DEF = "hanim_l_midcarpal_2"
HAnimJoint1158.center = [8.0485,0.9225,0.8386]
HAnimJoint1158.ulimit = [0,0,0]
HAnimJoint1158.llimit = [0,0,0]
HAnimSegment1159 = x3d.HAnimSegment()
HAnimSegment1159.name = "l_trapezoid"
HAnimSegment1159.DEF = "hanim_l_trapezoid"
Transform1160 = x3d.Transform()
Transform1160.translation = [8.0485,0.9225,0.8386]
Transform1161 = x3d.Transform()
"""Empty Transform"""
Shape1162 = x3d.Shape()
Shape1162.USE = "HAnimJointShape"

Transform1161.children.append(Shape1162)

Transform1160.children.append(Transform1161)

HAnimSegment1159.children.append(Transform1160)
Shape1163 = x3d.Shape()
LineSet1164 = x3d.LineSet()
LineSet1164.vertexCount = [2]
Coordinate1165 = x3d.Coordinate()
Coordinate1165.point = [(8.0485, 0.9225, 0.8386),(0.1983, 0.8024, -0.028)]

LineSet1164.coord = Coordinate1165
"""from l_midcarpal_2 to l_carpometacarpal_2 vertices 2"""
ColorRGBA1166 = x3d.ColorRGBA()
ColorRGBA1166.USE = "HAnimSegmentLineColorRGBA"

LineSet1164.color = ColorRGBA1166

Shape1163.geometry = LineSet1164

HAnimSegment1159.children.append(Shape1163)
HAnimSite1167 = x3d.HAnimSite()
HAnimSite1167.name = "l_metacarpal_phalanx_2_pt"
HAnimSite1167.DEF = "hanim_l_metacarpal_phalanx_2_pt"
HAnimSite1167.translation = [0.2009,0.8139,-0.0237]
TouchSensor1168 = x3d.TouchSensor()
TouchSensor1168.description = "HAnimSite l_metacarpal_phalanx_2_pt"

HAnimSite1167.children.append(TouchSensor1168)
Shape1169 = x3d.Shape()
Shape1169.USE = "HAnimSiteShape"

HAnimSite1167.children.append(Shape1169)

HAnimSegment1159.children.append(HAnimSite1167)

HAnimJoint1158.children.append(HAnimSegment1159)
HAnimJoint1170 = x3d.HAnimJoint()
HAnimJoint1170.name = "l_carpometacarpal_2"
HAnimJoint1170.DEF = "hanim_l_carpometacarpal_2"
HAnimJoint1170.center = [0.1983,0.8024,-0.028]
HAnimJoint1170.ulimit = [0,0,0]
HAnimJoint1170.llimit = [0,0,0]
HAnimSegment1171 = x3d.HAnimSegment()
HAnimSegment1171.name = "l_metacarpal_2"
HAnimSegment1171.DEF = "hanim_l_metacarpal_2"
Transform1172 = x3d.Transform()
Transform1172.translation = [0.1983,0.8024,-0.028]
Transform1173 = x3d.Transform()
"""Empty Transform"""
Shape1174 = x3d.Shape()
Shape1174.USE = "HAnimJointShape"

Transform1173.children.append(Shape1174)

Transform1172.children.append(Transform1173)

HAnimSegment1171.children.append(Transform1172)
Shape1175 = x3d.Shape()
LineSet1176 = x3d.LineSet()
LineSet1176.vertexCount = [2]
Coordinate1177 = x3d.Coordinate()
Coordinate1177.point = [(0.1983, 0.8024, -0.028),(0.1983, 0.7815, -0.028)]

LineSet1176.coord = Coordinate1177
"""from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2"""
ColorRGBA1178 = x3d.ColorRGBA()
ColorRGBA1178.USE = "HAnimSegmentLineColorRGBA"

LineSet1176.color = ColorRGBA1178

Shape1175.geometry = LineSet1176

HAnimSegment1171.children.append(Shape1175)

HAnimJoint1170.children.append(HAnimSegment1171)
HAnimJoint1179 = x3d.HAnimJoint()
HAnimJoint1179.name = "l_metacarpophalangeal_2"
HAnimJoint1179.DEF = "hanim_l_metacarpophalangeal_2"
HAnimJoint1179.center = [0.1983,0.7815,-0.028]
HAnimJoint1179.ulimit = [0,0,0]
HAnimJoint1179.llimit = [0,0,0]
HAnimSegment1180 = x3d.HAnimSegment()
HAnimSegment1180.name = "l_carpal_proximal_phalanx_2"
HAnimSegment1180.DEF = "hanim_l_carpal_proximal_phalanx_2"
Transform1181 = x3d.Transform()
Transform1181.translation = [0.1983,0.7815,-0.028]
Transform1182 = x3d.Transform()
"""Empty Transform"""
Shape1183 = x3d.Shape()
Shape1183.USE = "HAnimJointShape"

Transform1182.children.append(Shape1183)

Transform1181.children.append(Transform1182)

HAnimSegment1180.children.append(Transform1181)
Shape1184 = x3d.Shape()
LineSet1185 = x3d.LineSet()
LineSet1185.vertexCount = [2]
Coordinate1186 = x3d.Coordinate()
Coordinate1186.point = [(0.1983, 0.7815, -0.028),(0.2017, 0.7363, -0.0248)]

LineSet1185.coord = Coordinate1186
"""from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2"""
ColorRGBA1187 = x3d.ColorRGBA()
ColorRGBA1187.USE = "HAnimSegmentLineColorRGBA"

LineSet1185.color = ColorRGBA1187

Shape1184.geometry = LineSet1185

HAnimSegment1180.children.append(Shape1184)

HAnimJoint1179.children.append(HAnimSegment1180)
HAnimJoint1188 = x3d.HAnimJoint()
HAnimJoint1188.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint1188.DEF = "hanim_l_carpal_proximal_interphalangeal_2"
HAnimJoint1188.center = [0.2017,0.7363,-0.0248]
HAnimJoint1188.ulimit = [0,0,0]
HAnimJoint1188.llimit = [0,0,0]
HAnimSegment1189 = x3d.HAnimSegment()
HAnimSegment1189.name = "l_carpal_middle_phalanx_2"
HAnimSegment1189.DEF = "hanim_l_carpal_middle_phalanx_2"
Transform1190 = x3d.Transform()
Transform1190.translation = [0.2017,0.7363,-0.0248]
Transform1191 = x3d.Transform()
"""Empty Transform"""
Shape1192 = x3d.Shape()
Shape1192.USE = "HAnimJointShape"

Transform1191.children.append(Shape1192)

Transform1190.children.append(Transform1191)

HAnimSegment1189.children.append(Transform1190)
Shape1193 = x3d.Shape()
LineSet1194 = x3d.LineSet()
LineSet1194.vertexCount = [2]
Coordinate1195 = x3d.Coordinate()
Coordinate1195.point = [(0.2017, 0.7363, -0.0248),(0.2028, 0.7139, -0.0236)]

LineSet1194.coord = Coordinate1195
"""from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2"""
ColorRGBA1196 = x3d.ColorRGBA()
ColorRGBA1196.USE = "HAnimSegmentLineColorRGBA"

LineSet1194.color = ColorRGBA1196

Shape1193.geometry = LineSet1194

HAnimSegment1189.children.append(Shape1193)
HAnimSite1197 = x3d.HAnimSite()
HAnimSite1197.name = "l_carpal_distal_phalanx_2_tip"
HAnimSite1197.DEF = "hanim_l_carpal_distal_phalanx_2_tip"
TouchSensor1198 = x3d.TouchSensor()
TouchSensor1198.description = "HAnimSite l_carpal_distal_phalanx_2_tip"

HAnimSite1197.children.append(TouchSensor1198)
Shape1199 = x3d.Shape()
Shape1199.USE = "HAnimSiteShape"

HAnimSite1197.children.append(Shape1199)

HAnimSegment1189.children.append(HAnimSite1197)
HAnimSite1200 = x3d.HAnimSite()
HAnimSite1200.name = "l_dactylion_pt"
HAnimSite1200.DEF = "hanim_l_dactylion_pt"
HAnimSite1200.translation = [0.2056,0.6743,-0.0482]
TouchSensor1201 = x3d.TouchSensor()
TouchSensor1201.description = "HAnimSite l_dactylion_pt"

HAnimSite1200.children.append(TouchSensor1201)
Shape1202 = x3d.Shape()
Shape1202.USE = "HAnimSiteShape"

HAnimSite1200.children.append(Shape1202)

HAnimSegment1189.children.append(HAnimSite1200)

HAnimJoint1188.children.append(HAnimSegment1189)
HAnimJoint1203 = x3d.HAnimJoint()
HAnimJoint1203.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint1203.DEF = "hanim_l_carpal_distal_interphalangeal_2"
HAnimJoint1203.center = [0.2028,0.7139,-0.0236]
HAnimJoint1203.ulimit = [0,0,0]
HAnimJoint1203.llimit = [0,0,0]

HAnimJoint1188.children.append(HAnimJoint1203)

HAnimJoint1179.children.append(HAnimJoint1188)

HAnimJoint1170.children.append(HAnimJoint1179)

HAnimJoint1158.children.append(HAnimJoint1170)

HAnimJoint1106.children.append(HAnimJoint1158)
HAnimJoint1204 = x3d.HAnimJoint()
HAnimJoint1204.name = "l_midcarpal_3"
HAnimJoint1204.DEF = "hanim_l_midcarpal_3"
HAnimJoint1204.center = [8.0395,0.9246,0.2513]
HAnimJoint1204.ulimit = [0,0,0]
HAnimJoint1204.llimit = [0,0,0]
HAnimSegment1205 = x3d.HAnimSegment()
HAnimSegment1205.name = "l_capitate"
HAnimSegment1205.DEF = "hanim_l_capitate"
Transform1206 = x3d.Transform()
Transform1206.translation = [8.0395,0.9246,0.2513]
Transform1207 = x3d.Transform()
"""Empty Transform"""
Shape1208 = x3d.Shape()
Shape1208.USE = "HAnimJointShape"

Transform1207.children.append(Shape1208)

Transform1206.children.append(Transform1207)

HAnimSegment1205.children.append(Transform1206)
Shape1209 = x3d.Shape()
LineSet1210 = x3d.LineSet()
LineSet1210.vertexCount = [2]
Coordinate1211 = x3d.Coordinate()
Coordinate1211.point = [(8.0395, 0.9246, 0.2513),(0.1987, 0.8029, -0.053)]

LineSet1210.coord = Coordinate1211
"""from l_midcarpal_3 to l_carpometacarpal_3 vertices 2"""
ColorRGBA1212 = x3d.ColorRGBA()
ColorRGBA1212.USE = "HAnimSegmentLineColorRGBA"

LineSet1210.color = ColorRGBA1212

Shape1209.geometry = LineSet1210

HAnimSegment1205.children.append(Shape1209)
HAnimSite1213 = x3d.HAnimSite()
HAnimSite1213.name = "l_metacarpal_phalanx_3_pt"
HAnimSite1213.DEF = "hanim_l_metacarpal_phalanx_3_pt"
TouchSensor1214 = x3d.TouchSensor()
TouchSensor1214.description = "HAnimSite l_metacarpal_phalanx_3_pt"

HAnimSite1213.children.append(TouchSensor1214)
Shape1215 = x3d.Shape()
Shape1215.USE = "HAnimSiteShape"

HAnimSite1213.children.append(Shape1215)

HAnimSegment1205.children.append(HAnimSite1213)

HAnimJoint1204.children.append(HAnimSegment1205)
HAnimJoint1216 = x3d.HAnimJoint()
HAnimJoint1216.name = "l_carpometacarpal_3"
HAnimJoint1216.DEF = "hanim_l_carpometacarpal_3"
HAnimJoint1216.center = [0.1987,0.8029,-0.053]
HAnimJoint1216.ulimit = [0,0,0]
HAnimJoint1216.llimit = [0,0,0]
HAnimSegment1217 = x3d.HAnimSegment()
HAnimSegment1217.name = "l_metacarpal_3"
HAnimSegment1217.DEF = "hanim_l_metacarpal_3"
Transform1218 = x3d.Transform()
Transform1218.translation = [0.1987,0.8029,-0.053]
Transform1219 = x3d.Transform()
"""Empty Transform"""
Shape1220 = x3d.Shape()
Shape1220.USE = "HAnimJointShape"

Transform1219.children.append(Shape1220)

Transform1218.children.append(Transform1219)

HAnimSegment1217.children.append(Transform1218)
Shape1221 = x3d.Shape()
LineSet1222 = x3d.LineSet()
LineSet1222.vertexCount = [2]
Coordinate1223 = x3d.Coordinate()
Coordinate1223.point = [(0.1987, 0.8029, -0.053),(0.1987, 0.7818, -0.053)]

LineSet1222.coord = Coordinate1223
"""from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2"""
ColorRGBA1224 = x3d.ColorRGBA()
ColorRGBA1224.USE = "HAnimSegmentLineColorRGBA"

LineSet1222.color = ColorRGBA1224

Shape1221.geometry = LineSet1222

HAnimSegment1217.children.append(Shape1221)

HAnimJoint1216.children.append(HAnimSegment1217)
HAnimJoint1225 = x3d.HAnimJoint()
HAnimJoint1225.name = "l_metacarpophalangeal_3"
HAnimJoint1225.DEF = "hanim_l_metacarpophalangeal_3"
HAnimJoint1225.center = [0.1987,0.7818,-0.053]
HAnimJoint1225.ulimit = [0,0,0]
HAnimJoint1225.llimit = [0,0,0]
HAnimSegment1226 = x3d.HAnimSegment()
HAnimSegment1226.name = "l_carpal_proximal_phalanx_3"
HAnimSegment1226.DEF = "hanim_l_carpal_proximal_phalanx_3"
Transform1227 = x3d.Transform()
Transform1227.translation = [0.1987,0.7818,-0.053]
Transform1228 = x3d.Transform()
"""Empty Transform"""
Shape1229 = x3d.Shape()
Shape1229.USE = "HAnimJointShape"

Transform1228.children.append(Shape1229)

Transform1227.children.append(Transform1228)

HAnimSegment1226.children.append(Transform1227)
Shape1230 = x3d.Shape()
LineSet1231 = x3d.LineSet()
LineSet1231.vertexCount = [2]
Coordinate1232 = x3d.Coordinate()
Coordinate1232.point = [(0.1987, 0.7818, -0.053),(0.2013, 0.7273, -0.0503)]

LineSet1231.coord = Coordinate1232
"""from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2"""
ColorRGBA1233 = x3d.ColorRGBA()
ColorRGBA1233.USE = "HAnimSegmentLineColorRGBA"

LineSet1231.color = ColorRGBA1233

Shape1230.geometry = LineSet1231

HAnimSegment1226.children.append(Shape1230)

HAnimJoint1225.children.append(HAnimSegment1226)
HAnimJoint1234 = x3d.HAnimJoint()
HAnimJoint1234.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint1234.DEF = "hanim_l_carpal_proximal_interphalangeal_3"
HAnimJoint1234.center = [0.2013,0.7273,-0.0503]
HAnimJoint1234.ulimit = [0,0,0]
HAnimJoint1234.llimit = [0,0,0]
HAnimSegment1235 = x3d.HAnimSegment()
HAnimSegment1235.name = "l_carpal_middle_phalanx_3"
HAnimSegment1235.DEF = "hanim_l_carpal_middle_phalanx_3"
Transform1236 = x3d.Transform()
Transform1236.translation = [0.2013,0.7273,-0.0503]
Transform1237 = x3d.Transform()
"""Empty Transform"""
Shape1238 = x3d.Shape()
Shape1238.USE = "HAnimJointShape"

Transform1237.children.append(Shape1238)

Transform1236.children.append(Transform1237)

HAnimSegment1235.children.append(Transform1236)
Shape1239 = x3d.Shape()
LineSet1240 = x3d.LineSet()
LineSet1240.vertexCount = [2]
Coordinate1241 = x3d.Coordinate()
Coordinate1241.point = [(0.2013, 0.7273, -0.0503),(0.2026, 0.7011, -0.0494)]

LineSet1240.coord = Coordinate1241
"""from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2"""
ColorRGBA1242 = x3d.ColorRGBA()
ColorRGBA1242.USE = "HAnimSegmentLineColorRGBA"

LineSet1240.color = ColorRGBA1242

Shape1239.geometry = LineSet1240

HAnimSegment1235.children.append(Shape1239)
HAnimSite1243 = x3d.HAnimSite()
HAnimSite1243.name = "l_carpal_distal_phalanx_3_tip"
HAnimSite1243.DEF = "hanim_l_carpal_distal_phalanx_3_tip"
TouchSensor1244 = x3d.TouchSensor()
TouchSensor1244.description = "HAnimSite l_carpal_distal_phalanx_3_tip"

HAnimSite1243.children.append(TouchSensor1244)
Shape1245 = x3d.Shape()
Shape1245.USE = "HAnimSiteShape"

HAnimSite1243.children.append(Shape1245)

HAnimSegment1235.children.append(HAnimSite1243)

HAnimJoint1234.children.append(HAnimSegment1235)
HAnimJoint1246 = x3d.HAnimJoint()
HAnimJoint1246.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint1246.DEF = "hanim_l_carpal_distal_interphalangeal_3"
HAnimJoint1246.center = [0.2026,0.7011,-0.0494]
HAnimJoint1246.ulimit = [0,0,0]
HAnimJoint1246.llimit = [0,0,0]

HAnimJoint1234.children.append(HAnimJoint1246)

HAnimJoint1225.children.append(HAnimJoint1234)

HAnimJoint1216.children.append(HAnimJoint1225)

HAnimJoint1204.children.append(HAnimJoint1216)

HAnimJoint1106.children.append(HAnimJoint1204)
HAnimJoint1247 = x3d.HAnimJoint()
HAnimJoint1247.name = "l_midcarpal_4_5"
HAnimJoint1247.DEF = "hanim_l_midcarpal_4_5"
HAnimJoint1247.center = [8.0395,0.921,-0.6795]
HAnimJoint1247.ulimit = [0,0,0]
HAnimJoint1247.llimit = [0,0,0]
HAnimSegment1248 = x3d.HAnimSegment()
HAnimSegment1248.name = "l_hamate"
HAnimSegment1248.DEF = "hanim_l_hamate"
Transform1249 = x3d.Transform()
Transform1249.translation = [8.0395,0.921,-0.6795]
Transform1250 = x3d.Transform()
"""Empty Transform"""
Shape1251 = x3d.Shape()
Shape1251.USE = "HAnimJointShape"

Transform1250.children.append(Shape1251)

Transform1249.children.append(Transform1250)

HAnimSegment1248.children.append(Transform1249)
Shape1252 = x3d.Shape()
LineSet1253 = x3d.LineSet()
LineSet1253.vertexCount = [2]
Coordinate1254 = x3d.Coordinate()
Coordinate1254.point = [(8.0395, 0.921, -0.6795),(0.1956, 0.8019, -0.0794)]

LineSet1253.coord = Coordinate1254
"""from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2"""
ColorRGBA1255 = x3d.ColorRGBA()
ColorRGBA1255.USE = "HAnimSegmentLineColorRGBA"

LineSet1253.color = ColorRGBA1255

Shape1252.geometry = LineSet1253

HAnimSegment1248.children.append(Shape1252)
Shape1256 = x3d.Shape()
LineSet1257 = x3d.LineSet()
LineSet1257.vertexCount = [2]
Coordinate1258 = x3d.Coordinate()
Coordinate1258.point = [(8.0395, 0.921, -0.6795),(0.1925, 0.8066, -0.1036)]

LineSet1257.coord = Coordinate1258
"""from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2"""
ColorRGBA1259 = x3d.ColorRGBA()
ColorRGBA1259.USE = "HAnimSegmentLineColorRGBA"

LineSet1257.color = ColorRGBA1259

Shape1256.geometry = LineSet1257

HAnimSegment1248.children.append(Shape1256)
HAnimSite1260 = x3d.HAnimSite()
HAnimSite1260.name = "l_metacarpal_phalanx_5_pt"
HAnimSite1260.DEF = "hanim_l_metacarpal_phalanx_5_pt"
HAnimSite1260.translation = [0.1929,0.786,-0.1122]
TouchSensor1261 = x3d.TouchSensor()
TouchSensor1261.description = "HAnimSite l_metacarpal_phalanx_5_pt"

HAnimSite1260.children.append(TouchSensor1261)
Shape1262 = x3d.Shape()
Shape1262.USE = "HAnimSiteShape"

HAnimSite1260.children.append(Shape1262)

HAnimSegment1248.children.append(HAnimSite1260)

HAnimJoint1247.children.append(HAnimSegment1248)
HAnimJoint1263 = x3d.HAnimJoint()
HAnimJoint1263.name = "l_carpometacarpal_4"
HAnimJoint1263.DEF = "hanim_l_carpometacarpal_4"
HAnimJoint1263.center = [0.1956,0.8019,-0.0794]
HAnimJoint1263.ulimit = [0,0,0]
HAnimJoint1263.llimit = [0,0,0]
HAnimSegment1264 = x3d.HAnimSegment()
HAnimSegment1264.name = "l_metacarpal_4"
HAnimSegment1264.DEF = "hanim_l_metacarpal_4"
Transform1265 = x3d.Transform()
Transform1265.translation = [0.1956,0.8019,-0.0794]
Transform1266 = x3d.Transform()
"""Empty Transform"""
Shape1267 = x3d.Shape()
Shape1267.USE = "HAnimJointShape"

Transform1266.children.append(Shape1267)

Transform1265.children.append(Transform1266)

HAnimSegment1264.children.append(Transform1265)
Shape1268 = x3d.Shape()
LineSet1269 = x3d.LineSet()
LineSet1269.vertexCount = [2]
Coordinate1270 = x3d.Coordinate()
Coordinate1270.point = [(0.1956, 0.8019, -0.0794),(0.1956, 0.7815, -0.0794)]

LineSet1269.coord = Coordinate1270
"""from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2"""
ColorRGBA1271 = x3d.ColorRGBA()
ColorRGBA1271.USE = "HAnimSegmentLineColorRGBA"

LineSet1269.color = ColorRGBA1271

Shape1268.geometry = LineSet1269

HAnimSegment1264.children.append(Shape1268)

HAnimJoint1263.children.append(HAnimSegment1264)
HAnimJoint1272 = x3d.HAnimJoint()
HAnimJoint1272.name = "l_metacarpophalangeal_4"
HAnimJoint1272.DEF = "hanim_l_metacarpophalangeal_4"
HAnimJoint1272.center = [0.1956,0.7815,-0.0794]
HAnimJoint1272.ulimit = [0,0,0]
HAnimJoint1272.llimit = [0,0,0]
HAnimSegment1273 = x3d.HAnimSegment()
HAnimSegment1273.name = "l_carpal_proximal_phalanx_4"
HAnimSegment1273.DEF = "hanim_l_carpal_proximal_phalanx_4"
Transform1274 = x3d.Transform()
Transform1274.translation = [0.1956,0.7815,-0.0794]
Transform1275 = x3d.Transform()
"""Empty Transform"""
Shape1276 = x3d.Shape()
Shape1276.USE = "HAnimJointShape"

Transform1275.children.append(Shape1276)

Transform1274.children.append(Transform1275)

HAnimSegment1273.children.append(Transform1274)
Shape1277 = x3d.Shape()
LineSet1278 = x3d.LineSet()
LineSet1278.vertexCount = [2]
Coordinate1279 = x3d.Coordinate()
Coordinate1279.point = [(0.1956, 0.7815, -0.0794),(0.1973, 0.7287, -0.0777)]

LineSet1278.coord = Coordinate1279
"""from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2"""
ColorRGBA1280 = x3d.ColorRGBA()
ColorRGBA1280.USE = "HAnimSegmentLineColorRGBA"

LineSet1278.color = ColorRGBA1280

Shape1277.geometry = LineSet1278

HAnimSegment1273.children.append(Shape1277)

HAnimJoint1272.children.append(HAnimSegment1273)
HAnimJoint1281 = x3d.HAnimJoint()
HAnimJoint1281.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint1281.DEF = "hanim_l_carpal_proximal_interphalangeal_4"
HAnimJoint1281.center = [0.1973,0.7287,-0.0777]
HAnimJoint1281.ulimit = [0,0,0]
HAnimJoint1281.llimit = [0,0,0]
HAnimSegment1282 = x3d.HAnimSegment()
HAnimSegment1282.name = "l_carpal_middle_phalanx_4"
HAnimSegment1282.DEF = "hanim_l_carpal_middle_phalanx_4"
Transform1283 = x3d.Transform()
Transform1283.translation = [0.1973,0.7287,-0.0777]
Transform1284 = x3d.Transform()
"""Empty Transform"""
Shape1285 = x3d.Shape()
Shape1285.USE = "HAnimJointShape"

Transform1284.children.append(Shape1285)

Transform1283.children.append(Transform1284)

HAnimSegment1282.children.append(Transform1283)
Shape1286 = x3d.Shape()
LineSet1287 = x3d.LineSet()
LineSet1287.vertexCount = [2]
Coordinate1288 = x3d.Coordinate()
Coordinate1288.point = [(0.1973, 0.7287, -0.0777),(0.1983, 0.7045, -0.0767)]

LineSet1287.coord = Coordinate1288
"""from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2"""
ColorRGBA1289 = x3d.ColorRGBA()
ColorRGBA1289.USE = "HAnimSegmentLineColorRGBA"

LineSet1287.color = ColorRGBA1289

Shape1286.geometry = LineSet1287

HAnimSegment1282.children.append(Shape1286)
HAnimSite1290 = x3d.HAnimSite()
HAnimSite1290.name = "l_carpal_distal_phalanx_4_tip"
HAnimSite1290.DEF = "hanim_l_carpal_distal_phalanx_4_tip"
TouchSensor1291 = x3d.TouchSensor()
TouchSensor1291.description = "HAnimSite l_carpal_distal_phalanx_4_tip"

HAnimSite1290.children.append(TouchSensor1291)
Shape1292 = x3d.Shape()
Shape1292.USE = "HAnimSiteShape"

HAnimSite1290.children.append(Shape1292)

HAnimSegment1282.children.append(HAnimSite1290)

HAnimJoint1281.children.append(HAnimSegment1282)
HAnimJoint1293 = x3d.HAnimJoint()
HAnimJoint1293.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint1293.DEF = "hanim_l_carpal_distal_interphalangeal_4"
HAnimJoint1293.center = [0.1983,0.7045,-0.0767]
HAnimJoint1293.ulimit = [0,0,0]
HAnimJoint1293.llimit = [0,0,0]

HAnimJoint1281.children.append(HAnimJoint1293)

HAnimJoint1272.children.append(HAnimJoint1281)

HAnimJoint1263.children.append(HAnimJoint1272)

HAnimJoint1247.children.append(HAnimJoint1263)
HAnimJoint1294 = x3d.HAnimJoint()
HAnimJoint1294.name = "l_carpometacarpal_5"
HAnimJoint1294.DEF = "hanim_l_carpometacarpal_5"
HAnimJoint1294.center = [0.1925,0.8066,-0.1036]
HAnimJoint1294.ulimit = [0,0,0]
HAnimJoint1294.llimit = [0,0,0]
HAnimSegment1295 = x3d.HAnimSegment()
HAnimSegment1295.name = "l_metacarpal_5"
HAnimSegment1295.DEF = "hanim_l_metacarpal_5"
Transform1296 = x3d.Transform()
Transform1296.translation = [0.1925,0.8066,-0.1036]
Transform1297 = x3d.Transform()
"""Empty Transform"""
Shape1298 = x3d.Shape()
Shape1298.USE = "HAnimJointShape"

Transform1297.children.append(Shape1298)

Transform1296.children.append(Transform1297)

HAnimSegment1295.children.append(Transform1296)
Shape1299 = x3d.Shape()
LineSet1300 = x3d.LineSet()
LineSet1300.vertexCount = [2]
Coordinate1301 = x3d.Coordinate()
Coordinate1301.point = [(0.1925, 0.8066, -0.1036),(0.1925, 0.7866, -0.1036)]

LineSet1300.coord = Coordinate1301
"""from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2"""
ColorRGBA1302 = x3d.ColorRGBA()
ColorRGBA1302.USE = "HAnimSegmentLineColorRGBA"

LineSet1300.color = ColorRGBA1302

Shape1299.geometry = LineSet1300

HAnimSegment1295.children.append(Shape1299)

HAnimJoint1294.children.append(HAnimSegment1295)
HAnimJoint1303 = x3d.HAnimJoint()
HAnimJoint1303.name = "l_metacarpophalangeal_5"
HAnimJoint1303.DEF = "hanim_l_metacarpophalangeal_5"
HAnimJoint1303.center = [0.1925,0.7866,-0.1036]
HAnimJoint1303.ulimit = [0,0,0]
HAnimJoint1303.llimit = [0,0,0]
HAnimSegment1304 = x3d.HAnimSegment()
HAnimSegment1304.name = "l_carpal_proximal_phalanx_5"
HAnimSegment1304.DEF = "hanim_l_carpal_proximal_phalanx_5"
Transform1305 = x3d.Transform()
Transform1305.translation = [0.1925,0.7866,-0.1036]
Transform1306 = x3d.Transform()
"""Empty Transform"""
Shape1307 = x3d.Shape()
Shape1307.USE = "HAnimJointShape"

Transform1306.children.append(Shape1307)

Transform1305.children.append(Transform1306)

HAnimSegment1304.children.append(Transform1305)
Shape1308 = x3d.Shape()
LineSet1309 = x3d.LineSet()
LineSet1309.vertexCount = [2]
Coordinate1310 = x3d.Coordinate()
Coordinate1310.point = [(0.1925, 0.7866, -0.1036),(0.1938, 0.7452, -0.1024)]

LineSet1309.coord = Coordinate1310
"""from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2"""
ColorRGBA1311 = x3d.ColorRGBA()
ColorRGBA1311.USE = "HAnimSegmentLineColorRGBA"

LineSet1309.color = ColorRGBA1311

Shape1308.geometry = LineSet1309

HAnimSegment1304.children.append(Shape1308)

HAnimJoint1303.children.append(HAnimSegment1304)
HAnimJoint1312 = x3d.HAnimJoint()
HAnimJoint1312.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint1312.DEF = "hanim_l_carpal_proximal_interphalangeal_5"
HAnimJoint1312.center = [0.1938,0.7452,-0.1024]
HAnimJoint1312.ulimit = [0,0,0]
HAnimJoint1312.llimit = [0,0,0]
HAnimSegment1313 = x3d.HAnimSegment()
HAnimSegment1313.name = "l_carpal_middle_phalanx_5"
HAnimSegment1313.DEF = "hanim_l_carpal_middle_phalanx_5"
Transform1314 = x3d.Transform()
Transform1314.translation = [0.1938,0.7452,-0.1024]
Transform1315 = x3d.Transform()
"""Empty Transform"""
Shape1316 = x3d.Shape()
Shape1316.USE = "HAnimJointShape"

Transform1315.children.append(Shape1316)

Transform1314.children.append(Transform1315)

HAnimSegment1313.children.append(Transform1314)
Shape1317 = x3d.Shape()
LineSet1318 = x3d.LineSet()
LineSet1318.vertexCount = [2]
Coordinate1319 = x3d.Coordinate()
Coordinate1319.point = [(0.1938, 0.7452, -0.1024),(0.1948, 0.7277, -0.1017)]

LineSet1318.coord = Coordinate1319
"""from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2"""
ColorRGBA1320 = x3d.ColorRGBA()
ColorRGBA1320.USE = "HAnimSegmentLineColorRGBA"

LineSet1318.color = ColorRGBA1320

Shape1317.geometry = LineSet1318

HAnimSegment1313.children.append(Shape1317)
HAnimSite1321 = x3d.HAnimSite()
HAnimSite1321.name = "l_carpal_distal_phalanx_5_tip"
HAnimSite1321.DEF = "hanim_l_carpal_distal_phalanx_5_tip"
TouchSensor1322 = x3d.TouchSensor()
TouchSensor1322.description = "HAnimSite l_carpal_distal_phalanx_5_tip"

HAnimSite1321.children.append(TouchSensor1322)
Shape1323 = x3d.Shape()
Shape1323.USE = "HAnimSiteShape"

HAnimSite1321.children.append(Shape1323)

HAnimSegment1313.children.append(HAnimSite1321)

HAnimJoint1312.children.append(HAnimSegment1313)
HAnimJoint1324 = x3d.HAnimJoint()
HAnimJoint1324.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint1324.DEF = "hanim_l_carpal_distal_interphalangeal_5"
HAnimJoint1324.center = [0.1948,0.7277,-0.1017]
HAnimJoint1324.ulimit = [0,0,0]
HAnimJoint1324.llimit = [0,0,0]

HAnimJoint1312.children.append(HAnimJoint1324)

HAnimJoint1303.children.append(HAnimJoint1312)

HAnimJoint1294.children.append(HAnimJoint1303)

HAnimJoint1247.children.append(HAnimJoint1294)

HAnimJoint1106.children.append(HAnimJoint1247)

HAnimJoint1094.children.append(HAnimJoint1106)

HAnimJoint1073.children.append(HAnimJoint1094)

HAnimJoint1058.children.append(HAnimJoint1073)

HAnimJoint1049.children.append(HAnimJoint1058)

HAnimJoint845.children.append(HAnimJoint1049)
HAnimJoint1325 = x3d.HAnimJoint()
HAnimJoint1325.name = "r_sternoclavicular"
HAnimJoint1325.DEF = "hanim_r_sternoclavicular"
HAnimJoint1325.center = [-0.0694,1.46,-0.033]
HAnimJoint1325.ulimit = [0,0,0]
HAnimJoint1325.llimit = [0,0,0]
HAnimSegment1326 = x3d.HAnimSegment()
HAnimSegment1326.name = "r_clavicle"
HAnimSegment1326.DEF = "hanim_r_clavicle"
Transform1327 = x3d.Transform()
Transform1327.translation = [-0.0694,1.46,-0.033]
Transform1328 = x3d.Transform()
"""Empty Transform"""
Shape1329 = x3d.Shape()
Shape1329.USE = "HAnimJointShape"

Transform1328.children.append(Shape1329)

Transform1327.children.append(Transform1328)

HAnimSegment1326.children.append(Transform1327)
Shape1330 = x3d.Shape()
LineSet1331 = x3d.LineSet()
LineSet1331.vertexCount = [2]
Coordinate1332 = x3d.Coordinate()
Coordinate1332.point = [(-0.0694, 1.46, -0.033),(-0.0836, 1.4281, -0.0401)]

LineSet1331.coord = Coordinate1332
"""from r_sternoclavicular to r_acromioclavicular vertices 2"""
ColorRGBA1333 = x3d.ColorRGBA()
ColorRGBA1333.USE = "HAnimSegmentLineColorRGBA"

LineSet1331.color = ColorRGBA1333

Shape1330.geometry = LineSet1331

HAnimSegment1326.children.append(Shape1330)

HAnimJoint1325.children.append(HAnimSegment1326)
HAnimJoint1334 = x3d.HAnimJoint()
HAnimJoint1334.name = "r_acromioclavicular"
HAnimJoint1334.DEF = "hanim_r_acromioclavicular"
HAnimJoint1334.center = [-0.0836,1.4281,-0.0401]
HAnimJoint1334.ulimit = [0,0,0]
HAnimJoint1334.llimit = [0,0,0]
HAnimSegment1335 = x3d.HAnimSegment()
HAnimSegment1335.name = "r_scapula"
HAnimSegment1335.DEF = "hanim_r_scapula"
Transform1336 = x3d.Transform()
Transform1336.translation = [-0.0836,1.4281,-0.0401]
Transform1337 = x3d.Transform()
"""Empty Transform"""
Shape1338 = x3d.Shape()
Shape1338.USE = "HAnimJointShape"

Transform1337.children.append(Shape1338)

Transform1336.children.append(Transform1337)

HAnimSegment1335.children.append(Transform1336)
Shape1339 = x3d.Shape()
LineSet1340 = x3d.LineSet()
LineSet1340.vertexCount = [2]
Coordinate1341 = x3d.Coordinate()
Coordinate1341.point = [(-0.0836, 1.4281, -0.0401),(-0.1907, 1.4407, -0.0325)]

LineSet1340.coord = Coordinate1341
"""from r_acromioclavicular to r_shoulder vertices 2"""
ColorRGBA1342 = x3d.ColorRGBA()
ColorRGBA1342.USE = "HAnimSegmentLineColorRGBA"

LineSet1340.color = ColorRGBA1342

Shape1339.geometry = LineSet1340

HAnimSegment1335.children.append(Shape1339)
HAnimSite1343 = x3d.HAnimSite()
HAnimSite1343.name = "r_bideltoid_pt"
HAnimSite1343.DEF = "hanim_r_bideltoid_pt"
TouchSensor1344 = x3d.TouchSensor()
TouchSensor1344.description = "HAnimSite r_bideltoid_pt"

HAnimSite1343.children.append(TouchSensor1344)
Shape1345 = x3d.Shape()
Shape1345.USE = "HAnimSiteShape"

HAnimSite1343.children.append(Shape1345)

HAnimSegment1335.children.append(HAnimSite1343)
HAnimSite1346 = x3d.HAnimSite()
HAnimSite1346.name = "r_humeral_lateral_epicondyles_pt"
HAnimSite1346.DEF = "hanim_r_humeral_lateral_epicondyles_pt"
HAnimSite1346.translation = [-0.2224,1.1517,-0.1033]
TouchSensor1347 = x3d.TouchSensor()
TouchSensor1347.description = "HAnimSite r_humeral_lateral_epicondyles_pt"

HAnimSite1346.children.append(TouchSensor1347)
Shape1348 = x3d.Shape()
Shape1348.USE = "HAnimSiteShape"

HAnimSite1346.children.append(Shape1348)

HAnimSegment1335.children.append(HAnimSite1346)

HAnimJoint1334.children.append(HAnimSegment1335)
HAnimJoint1349 = x3d.HAnimJoint()
HAnimJoint1349.name = "r_shoulder"
HAnimJoint1349.DEF = "hanim_r_shoulder"
HAnimJoint1349.center = [-0.1907,1.4407,-0.0325]
HAnimJoint1349.ulimit = [0,0,0]
HAnimJoint1349.llimit = [0,0,0]
HAnimSegment1350 = x3d.HAnimSegment()
HAnimSegment1350.name = "r_upperarm"
HAnimSegment1350.DEF = "hanim_r_upperarm"
Transform1351 = x3d.Transform()
Transform1351.translation = [-0.1907,1.4407,-0.0325]
Transform1352 = x3d.Transform()
"""Empty Transform"""
Shape1353 = x3d.Shape()
Shape1353.USE = "HAnimJointShape"

Transform1352.children.append(Shape1353)

Transform1351.children.append(Transform1352)

HAnimSegment1350.children.append(Transform1351)
Shape1354 = x3d.Shape()
LineSet1355 = x3d.LineSet()
LineSet1355.vertexCount = [2]
Coordinate1356 = x3d.Coordinate()
Coordinate1356.point = [(-0.1907, 1.4407, -0.0325),(-0.1949, 1.1388, -0.062)]

LineSet1355.coord = Coordinate1356
"""from r_shoulder to r_elbow vertices 2"""
ColorRGBA1357 = x3d.ColorRGBA()
ColorRGBA1357.USE = "HAnimSegmentLineColorRGBA"

LineSet1355.color = ColorRGBA1357

Shape1354.geometry = LineSet1355

HAnimSegment1350.children.append(Shape1354)
HAnimSite1358 = x3d.HAnimSite()
HAnimSite1358.name = "r_humeral_medial_epicondyles_pt"
HAnimSite1358.DEF = "hanim_r_humeral_medial_epicondyles_pt"
HAnimSite1358.translation = [-0.168,1.1298,-0.1062]
TouchSensor1359 = x3d.TouchSensor()
TouchSensor1359.description = "HAnimSite r_humeral_medial_epicondyles_pt"

HAnimSite1358.children.append(TouchSensor1359)
Shape1360 = x3d.Shape()
Shape1360.USE = "HAnimSiteShape"

HAnimSite1358.children.append(Shape1360)

HAnimSegment1350.children.append(HAnimSite1358)
HAnimSite1361 = x3d.HAnimSite()
HAnimSite1361.name = "r_olecranon_pt"
HAnimSite1361.DEF = "hanim_r_olecranon_pt"
HAnimSite1361.translation = [-0.1907,1.1405,-0.1065]
TouchSensor1362 = x3d.TouchSensor()
TouchSensor1362.description = "HAnimSite r_olecranon_pt"

HAnimSite1361.children.append(TouchSensor1362)
Shape1363 = x3d.Shape()
Shape1363.USE = "HAnimSiteShape"

HAnimSite1361.children.append(Shape1363)

HAnimSegment1350.children.append(HAnimSite1361)
HAnimSite1364 = x3d.HAnimSite()
HAnimSite1364.name = "r_radial_styloid_pt"
HAnimSite1364.DEF = "hanim_r_radial_styloid_pt"
HAnimSite1364.translation = [-0.1884,0.8676,-0.036]
TouchSensor1365 = x3d.TouchSensor()
TouchSensor1365.description = "HAnimSite r_radial_styloid_pt"

HAnimSite1364.children.append(TouchSensor1365)
Shape1366 = x3d.Shape()
Shape1366.USE = "HAnimSiteShape"

HAnimSite1364.children.append(Shape1366)

HAnimSegment1350.children.append(HAnimSite1364)
HAnimSite1367 = x3d.HAnimSite()
HAnimSite1367.name = "r_radiale_pt"
HAnimSite1367.DEF = "hanim_r_radiale_pt"
HAnimSite1367.translation = [-0.213,1.1305,-0.1091]
TouchSensor1368 = x3d.TouchSensor()
TouchSensor1368.description = "HAnimSite r_radiale_pt"

HAnimSite1367.children.append(TouchSensor1368)
Shape1369 = x3d.Shape()
Shape1369.USE = "HAnimSiteShape"

HAnimSite1367.children.append(Shape1369)

HAnimSegment1350.children.append(HAnimSite1367)

HAnimJoint1349.children.append(HAnimSegment1350)
HAnimJoint1370 = x3d.HAnimJoint()
HAnimJoint1370.name = "r_elbow"
HAnimJoint1370.DEF = "hanim_r_elbow"
HAnimJoint1370.center = [-0.1949,1.1388,-0.062]
HAnimJoint1370.ulimit = [0,0,0]
HAnimJoint1370.llimit = [0,0,0]
HAnimSegment1371 = x3d.HAnimSegment()
HAnimSegment1371.name = "r_forearm"
HAnimSegment1371.DEF = "hanim_r_forearm"
Transform1372 = x3d.Transform()
Transform1372.translation = [-0.1949,1.1388,-0.062]
Transform1373 = x3d.Transform()
"""Empty Transform"""
Shape1374 = x3d.Shape()
Shape1374.USE = "HAnimJointShape"

Transform1373.children.append(Shape1374)

Transform1372.children.append(Transform1373)

HAnimSegment1371.children.append(Transform1372)
Shape1375 = x3d.Shape()
LineSet1376 = x3d.LineSet()
LineSet1376.vertexCount = [2]
Coordinate1377 = x3d.Coordinate()
Coordinate1377.point = [(-0.1949, 1.1388, -0.062),(-0.1959, 0.8694, -0.0521)]

LineSet1376.coord = Coordinate1377
"""from r_elbow to r_radiocarpal vertices 2"""
ColorRGBA1378 = x3d.ColorRGBA()
ColorRGBA1378.USE = "HAnimSegmentLineColorRGBA"

LineSet1376.color = ColorRGBA1378

Shape1375.geometry = LineSet1376

HAnimSegment1371.children.append(Shape1375)
HAnimSite1379 = x3d.HAnimSite()
HAnimSite1379.name = "r_ulnar_styloid_pt"
HAnimSite1379.DEF = "hanim_r_ulnar_styloid_pt"
HAnimSite1379.translation = [-0.2117,0.8562,-0.0584]
TouchSensor1380 = x3d.TouchSensor()
TouchSensor1380.description = "HAnimSite r_ulnar_styloid_pt"

HAnimSite1379.children.append(TouchSensor1380)
Shape1381 = x3d.Shape()
Shape1381.USE = "HAnimSiteShape"

HAnimSite1379.children.append(Shape1381)

HAnimSegment1371.children.append(HAnimSite1379)

HAnimJoint1370.children.append(HAnimSegment1371)
HAnimJoint1382 = x3d.HAnimJoint()
HAnimJoint1382.name = "r_radiocarpal"
HAnimJoint1382.DEF = "hanim_r_radiocarpal"
HAnimJoint1382.center = [-0.1959,0.8694,-0.0521]
HAnimJoint1382.ulimit = [0,0,0]
HAnimJoint1382.llimit = [0,0,0]
HAnimSegment1383 = x3d.HAnimSegment()
HAnimSegment1383.name = "r_carpal"
HAnimSegment1383.DEF = "hanim_r_carpal"
Transform1384 = x3d.Transform()
Transform1384.scale = [0.2,0.2,0.2]
Transform1384.translation = [-0.2,0.85,-0.05]
Transform1384.rotation = [0,0,1,-3.14]
"""Transform right hand"""
Transform1385 = x3d.Transform()
Transform1385.rotation = [0,1,0,1.57]
"""Transform right hand"""
Shape1386 = x3d.Shape()
Shape1386.USE = "HAnimJointShape"

Transform1385.children.append(Shape1386)

Transform1384.children.append(Transform1385)

HAnimSegment1383.children.append(Transform1384)
Shape1387 = x3d.Shape()
LineSet1388 = x3d.LineSet()
LineSet1388.vertexCount = [2]
Coordinate1389 = x3d.Coordinate()
Coordinate1389.point = [(-0.1959, 0.8694, -0.0521),(-8.0515, 0.9213, 1.3235)]

LineSet1388.coord = Coordinate1389
"""from r_radiocarpal to r_midcarpal_1 vertices 2"""
ColorRGBA1390 = x3d.ColorRGBA()
ColorRGBA1390.USE = "HAnimSegmentLineColorRGBA"

LineSet1388.color = ColorRGBA1390

Shape1387.geometry = LineSet1388

HAnimSegment1383.children.append(Shape1387)
Shape1391 = x3d.Shape()
LineSet1392 = x3d.LineSet()
LineSet1392.vertexCount = [2]
Coordinate1393 = x3d.Coordinate()
Coordinate1393.point = [(-0.1959, 0.8694, -0.0521),(-8.0515, 0.9225, 0.8386)]

LineSet1392.coord = Coordinate1393
"""from r_radiocarpal to r_midcarpal_2 vertices 2"""
ColorRGBA1394 = x3d.ColorRGBA()
ColorRGBA1394.USE = "HAnimSegmentLineColorRGBA"

LineSet1392.color = ColorRGBA1394

Shape1391.geometry = LineSet1392

HAnimSegment1383.children.append(Shape1391)
Shape1395 = x3d.Shape()
LineSet1396 = x3d.LineSet()
LineSet1396.vertexCount = [2]
Coordinate1397 = x3d.Coordinate()
Coordinate1397.point = [(-0.1959, 0.8694, -0.0521),(-8.0405, 0.9246, 0.2513)]

LineSet1396.coord = Coordinate1397
"""from r_radiocarpal to r_midcarpal_3 vertices 2"""
ColorRGBA1398 = x3d.ColorRGBA()
ColorRGBA1398.USE = "HAnimSegmentLineColorRGBA"

LineSet1396.color = ColorRGBA1398

Shape1395.geometry = LineSet1396

HAnimSegment1383.children.append(Shape1395)
Shape1399 = x3d.Shape()
LineSet1400 = x3d.LineSet()
LineSet1400.vertexCount = [2]
Coordinate1401 = x3d.Coordinate()
Coordinate1401.point = [(-0.1959, 0.8694, -0.0521),(-8.0405, 0.921, -0.6795)]

LineSet1400.coord = Coordinate1401
"""from r_radiocarpal to r_midcarpal_4_5 vertices 2"""
ColorRGBA1402 = x3d.ColorRGBA()
ColorRGBA1402.USE = "HAnimSegmentLineColorRGBA"

LineSet1400.color = ColorRGBA1402

Shape1399.geometry = LineSet1400

HAnimSegment1383.children.append(Shape1399)

HAnimJoint1382.children.append(HAnimSegment1383)
HAnimJoint1403 = x3d.HAnimJoint()
HAnimJoint1403.name = "r_midcarpal_1"
HAnimJoint1403.DEF = "hanim_r_midcarpal_1"
HAnimJoint1403.center = [-8.0515,0.9213,1.3235]
HAnimJoint1403.ulimit = [0,0,0]
HAnimJoint1403.llimit = [0,0,0]
HAnimSegment1404 = x3d.HAnimSegment()
HAnimSegment1404.name = "r_trapezium"
HAnimSegment1404.DEF = "hanim_r_trapezium"
Transform1405 = x3d.Transform()
Transform1405.translation = [-8.0515,0.9213,1.3235]
Transform1406 = x3d.Transform()
"""Empty Transform"""
Shape1407 = x3d.Shape()
Shape1407.USE = "HAnimJointShape"

Transform1406.children.append(Shape1407)

Transform1405.children.append(Transform1406)

HAnimSegment1404.children.append(Transform1405)
Shape1408 = x3d.Shape()
LineSet1409 = x3d.LineSet()
LineSet1409.vertexCount = [2]
Coordinate1410 = x3d.Coordinate()
Coordinate1410.point = [(-8.0515, 0.9213, 1.3235),(-0.1899, 0.8502, -0.0473)]

LineSet1409.coord = Coordinate1410
"""from r_midcarpal_1 to r_carpometacarpal_1 vertices 2"""
ColorRGBA1411 = x3d.ColorRGBA()
ColorRGBA1411.USE = "HAnimSegmentLineColorRGBA"

LineSet1409.color = ColorRGBA1411

Shape1408.geometry = LineSet1409

HAnimSegment1404.children.append(Shape1408)

HAnimJoint1403.children.append(HAnimSegment1404)
HAnimJoint1412 = x3d.HAnimJoint()
HAnimJoint1412.name = "r_carpometacarpal_1"
HAnimJoint1412.DEF = "hanim_r_carpometacarpal_1"
HAnimJoint1412.center = [-0.1899,0.8502,-0.0473]
HAnimJoint1412.ulimit = [0,0,0]
HAnimJoint1412.llimit = [0,0,0]
HAnimSegment1413 = x3d.HAnimSegment()
HAnimSegment1413.name = "r_metacarpal_1"
HAnimSegment1413.DEF = "hanim_r_metacarpal_1"
Transform1414 = x3d.Transform()
Transform1414.translation = [-0.1899,0.8502,-0.0473]
Transform1415 = x3d.Transform()
"""Empty Transform"""
Shape1416 = x3d.Shape()
Shape1416.USE = "HAnimJointShape"

Transform1415.children.append(Shape1416)

Transform1414.children.append(Transform1415)

HAnimSegment1413.children.append(Transform1414)
Shape1417 = x3d.Shape()
LineSet1418 = x3d.LineSet()
LineSet1418.vertexCount = [2]
Coordinate1419 = x3d.Coordinate()
Coordinate1419.point = [(-0.1899, 0.8502, -0.0473),(-0.1874, 0.8256, 0.0306)]

LineSet1418.coord = Coordinate1419
"""from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2"""
ColorRGBA1420 = x3d.ColorRGBA()
ColorRGBA1420.USE = "HAnimSegmentLineColorRGBA"

LineSet1418.color = ColorRGBA1420

Shape1417.geometry = LineSet1418

HAnimSegment1413.children.append(Shape1417)

HAnimJoint1412.children.append(HAnimSegment1413)
HAnimJoint1421 = x3d.HAnimJoint()
HAnimJoint1421.name = "r_metacarpophalangeal_1"
HAnimJoint1421.DEF = "hanim_r_metacarpophalangeal_1"
HAnimJoint1421.center = [-0.1874,0.8256,0.0306]
HAnimJoint1421.ulimit = [0,0,0]
HAnimJoint1421.llimit = [0,0,0]
HAnimSegment1422 = x3d.HAnimSegment()
HAnimSegment1422.name = "r_carpal_proximal_phalanx_1"
HAnimSegment1422.DEF = "hanim_r_carpal_proximal_phalanx_1"
Transform1423 = x3d.Transform()
Transform1423.translation = [-0.1874,0.8256,0.0306]
Transform1424 = x3d.Transform()
"""Empty Transform"""
Shape1425 = x3d.Shape()
Shape1425.USE = "HAnimJointShape"

Transform1424.children.append(Shape1425)

Transform1423.children.append(Transform1424)

HAnimSegment1422.children.append(Transform1423)
Shape1426 = x3d.Shape()
LineSet1427 = x3d.LineSet()
LineSet1427.vertexCount = [2]
Coordinate1428 = x3d.Coordinate()
Coordinate1428.point = [(-0.1874, 0.8256, 0.0306),(-0.1864, 0.819, 0.0506)]

LineSet1427.coord = Coordinate1428
"""from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2"""
ColorRGBA1429 = x3d.ColorRGBA()
ColorRGBA1429.USE = "HAnimSegmentLineColorRGBA"

LineSet1427.color = ColorRGBA1429

Shape1426.geometry = LineSet1427

HAnimSegment1422.children.append(Shape1426)
HAnimSite1430 = x3d.HAnimSite()
HAnimSite1430.name = "r_carpal_distal_phalanx_1_tip"
HAnimSite1430.DEF = "hanim_r_carpal_distal_phalanx_1_tip"
TouchSensor1431 = x3d.TouchSensor()
TouchSensor1431.description = "HAnimSite r_carpal_distal_phalanx_1_tip"

HAnimSite1430.children.append(TouchSensor1431)
Shape1432 = x3d.Shape()
Shape1432.USE = "HAnimSiteShape"

HAnimSite1430.children.append(Shape1432)

HAnimSegment1422.children.append(HAnimSite1430)

HAnimJoint1421.children.append(HAnimSegment1422)
HAnimJoint1433 = x3d.HAnimJoint()
HAnimJoint1433.name = "r_carpal_interphalangeal_1"
HAnimJoint1433.DEF = "hanim_r_carpal_interphalangeal_1"
HAnimJoint1433.center = [-0.1864,0.819,0.0506]
HAnimJoint1433.ulimit = [0,0,0]
HAnimJoint1433.llimit = [0,0,0]

HAnimJoint1421.children.append(HAnimJoint1433)

HAnimJoint1412.children.append(HAnimJoint1421)

HAnimJoint1403.children.append(HAnimJoint1412)

HAnimJoint1382.children.append(HAnimJoint1403)
HAnimJoint1434 = x3d.HAnimJoint()
HAnimJoint1434.name = "r_midcarpal_2"
HAnimJoint1434.DEF = "hanim_r_midcarpal_2"
HAnimJoint1434.center = [-8.0515,0.9225,0.8386]
HAnimJoint1434.ulimit = [0,0,0]
HAnimJoint1434.llimit = [0,0,0]
HAnimSegment1435 = x3d.HAnimSegment()
HAnimSegment1435.name = "r_trapezoid"
HAnimSegment1435.DEF = "hanim_r_trapezoid"
Transform1436 = x3d.Transform()
Transform1436.translation = [-8.0515,0.9225,0.8386]
Transform1437 = x3d.Transform()
"""Empty Transform"""
Shape1438 = x3d.Shape()
Shape1438.USE = "HAnimJointShape"

Transform1437.children.append(Shape1438)

Transform1436.children.append(Transform1437)

HAnimSegment1435.children.append(Transform1436)
Shape1439 = x3d.Shape()
LineSet1440 = x3d.LineSet()
LineSet1440.vertexCount = [2]
Coordinate1441 = x3d.Coordinate()
Coordinate1441.point = [(-8.0515, 0.9225, 0.8386),(-0.1961, 0.8055, -0.0218)]

LineSet1440.coord = Coordinate1441
"""from r_midcarpal_2 to r_carpometacarpal_2 vertices 2"""
ColorRGBA1442 = x3d.ColorRGBA()
ColorRGBA1442.USE = "HAnimSegmentLineColorRGBA"

LineSet1440.color = ColorRGBA1442

Shape1439.geometry = LineSet1440

HAnimSegment1435.children.append(Shape1439)
HAnimSite1443 = x3d.HAnimSite()
HAnimSite1443.name = "r_metacarpal_phalanx_2_pt"
HAnimSite1443.DEF = "hanim_r_metacarpal_phalanx_2_pt"
HAnimSite1443.translation = [-0.1977,0.8169,-0.0177]
TouchSensor1444 = x3d.TouchSensor()
TouchSensor1444.description = "HAnimSite r_metacarpal_phalanx_2_pt"

HAnimSite1443.children.append(TouchSensor1444)
Shape1445 = x3d.Shape()
Shape1445.USE = "HAnimSiteShape"

HAnimSite1443.children.append(Shape1445)

HAnimSegment1435.children.append(HAnimSite1443)

HAnimJoint1434.children.append(HAnimSegment1435)
HAnimJoint1446 = x3d.HAnimJoint()
HAnimJoint1446.name = "r_carpometacarpal_2"
HAnimJoint1446.DEF = "hanim_r_carpometacarpal_2"
HAnimJoint1446.center = [-0.1961,0.8055,-0.0218]
HAnimJoint1446.ulimit = [0,0,0]
HAnimJoint1446.llimit = [0,0,0]
HAnimSegment1447 = x3d.HAnimSegment()
HAnimSegment1447.name = "r_metacarpal_2"
HAnimSegment1447.DEF = "hanim_r_metacarpal_2"
Transform1448 = x3d.Transform()
Transform1448.translation = [-0.1961,0.8055,-0.0218]
Transform1449 = x3d.Transform()
"""Empty Transform"""
Shape1450 = x3d.Shape()
Shape1450.USE = "HAnimJointShape"

Transform1449.children.append(Shape1450)

Transform1448.children.append(Transform1449)

HAnimSegment1447.children.append(Transform1448)
Shape1451 = x3d.Shape()
LineSet1452 = x3d.LineSet()
LineSet1452.vertexCount = [2]
Coordinate1453 = x3d.Coordinate()
Coordinate1453.point = [(-0.1961, 0.8055, -0.0218),(-0.1961, 0.7846, -0.0218)]

LineSet1452.coord = Coordinate1453
"""from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2"""
ColorRGBA1454 = x3d.ColorRGBA()
ColorRGBA1454.USE = "HAnimSegmentLineColorRGBA"

LineSet1452.color = ColorRGBA1454

Shape1451.geometry = LineSet1452

HAnimSegment1447.children.append(Shape1451)

HAnimJoint1446.children.append(HAnimSegment1447)
HAnimJoint1455 = x3d.HAnimJoint()
HAnimJoint1455.name = "r_metacarpophalangeal_2"
HAnimJoint1455.DEF = "hanim_r_metacarpophalangeal_2"
HAnimJoint1455.center = [-0.1961,0.7846,-0.0218]
HAnimJoint1455.ulimit = [0,0,0]
HAnimJoint1455.llimit = [0,0,0]
HAnimSegment1456 = x3d.HAnimSegment()
HAnimSegment1456.name = "r_carpal_proximal_phalanx_2"
HAnimSegment1456.DEF = "hanim_r_carpal_proximal_phalanx_2"
Transform1457 = x3d.Transform()
Transform1457.translation = [-0.1961,0.7846,-0.0218]
Transform1458 = x3d.Transform()
"""Empty Transform"""
Shape1459 = x3d.Shape()
Shape1459.USE = "HAnimJointShape"

Transform1458.children.append(Shape1459)

Transform1457.children.append(Transform1458)

HAnimSegment1456.children.append(Transform1457)
Shape1460 = x3d.Shape()
LineSet1461 = x3d.LineSet()
LineSet1461.vertexCount = [2]
Coordinate1462 = x3d.Coordinate()
Coordinate1462.point = [(-0.1961, 0.7846, -0.0218),(-0.1954, 0.7393, -0.0185)]

LineSet1461.coord = Coordinate1462
"""from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2"""
ColorRGBA1463 = x3d.ColorRGBA()
ColorRGBA1463.USE = "HAnimSegmentLineColorRGBA"

LineSet1461.color = ColorRGBA1463

Shape1460.geometry = LineSet1461

HAnimSegment1456.children.append(Shape1460)

HAnimJoint1455.children.append(HAnimSegment1456)
HAnimJoint1464 = x3d.HAnimJoint()
HAnimJoint1464.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint1464.DEF = "hanim_r_carpal_proximal_interphalangeal_2"
HAnimJoint1464.center = [-0.1954,0.7393,-0.0185]
HAnimJoint1464.ulimit = [0,0,0]
HAnimJoint1464.llimit = [0,0,0]
HAnimSegment1465 = x3d.HAnimSegment()
HAnimSegment1465.name = "r_carpal_middle_phalanx_2"
HAnimSegment1465.DEF = "hanim_r_carpal_middle_phalanx_2"
Transform1466 = x3d.Transform()
Transform1466.translation = [-0.1954,0.7393,-0.0185]
Transform1467 = x3d.Transform()
"""Empty Transform"""
Shape1468 = x3d.Shape()
Shape1468.USE = "HAnimJointShape"

Transform1467.children.append(Shape1468)

Transform1466.children.append(Transform1467)

HAnimSegment1465.children.append(Transform1466)
Shape1469 = x3d.Shape()
LineSet1470 = x3d.LineSet()
LineSet1470.vertexCount = [2]
Coordinate1471 = x3d.Coordinate()
Coordinate1471.point = [(-0.1954, 0.7393, -0.0185),(-0.1945, 0.7169, -0.0173)]

LineSet1470.coord = Coordinate1471
"""from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2"""
ColorRGBA1472 = x3d.ColorRGBA()
ColorRGBA1472.USE = "HAnimSegmentLineColorRGBA"

LineSet1470.color = ColorRGBA1472

Shape1469.geometry = LineSet1470

HAnimSegment1465.children.append(Shape1469)
HAnimSite1473 = x3d.HAnimSite()
HAnimSite1473.name = "r_carpal_distal_phalanx_2_tip"
HAnimSite1473.DEF = "hanim_r_carpal_distal_phalanx_2_tip"
TouchSensor1474 = x3d.TouchSensor()
TouchSensor1474.description = "HAnimSite r_carpal_distal_phalanx_2_tip"

HAnimSite1473.children.append(TouchSensor1474)
Shape1475 = x3d.Shape()
Shape1475.USE = "HAnimSiteShape"

HAnimSite1473.children.append(Shape1475)

HAnimSegment1465.children.append(HAnimSite1473)
HAnimSite1476 = x3d.HAnimSite()
HAnimSite1476.name = "r_dactylion_pt"
HAnimSite1476.DEF = "hanim_r_dactylion_pt"
HAnimSite1476.translation = [-0.1941,0.6772,-0.0423]
TouchSensor1477 = x3d.TouchSensor()
TouchSensor1477.description = "HAnimSite r_dactylion_pt"

HAnimSite1476.children.append(TouchSensor1477)
Shape1478 = x3d.Shape()
Shape1478.USE = "HAnimSiteShape"

HAnimSite1476.children.append(Shape1478)

HAnimSegment1465.children.append(HAnimSite1476)

HAnimJoint1464.children.append(HAnimSegment1465)
HAnimJoint1479 = x3d.HAnimJoint()
HAnimJoint1479.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint1479.DEF = "hanim_r_carpal_distal_interphalangeal_2"
HAnimJoint1479.center = [-0.1945,0.7169,-0.0173]
HAnimJoint1479.ulimit = [0,0,0]
HAnimJoint1479.llimit = [0,0,0]

HAnimJoint1464.children.append(HAnimJoint1479)

HAnimJoint1455.children.append(HAnimJoint1464)

HAnimJoint1446.children.append(HAnimJoint1455)

HAnimJoint1434.children.append(HAnimJoint1446)

HAnimJoint1382.children.append(HAnimJoint1434)
HAnimJoint1480 = x3d.HAnimJoint()
HAnimJoint1480.name = "r_midcarpal_3"
HAnimJoint1480.DEF = "hanim_r_midcarpal_3"
HAnimJoint1480.center = [-8.0405,0.9246,0.2513]
HAnimJoint1480.ulimit = [0,0,0]
HAnimJoint1480.llimit = [0,0,0]
HAnimSegment1481 = x3d.HAnimSegment()
HAnimSegment1481.name = "r_capitate"
HAnimSegment1481.DEF = "hanim_r_capitate"
Transform1482 = x3d.Transform()
Transform1482.translation = [-8.0405,0.9246,0.2513]
Transform1483 = x3d.Transform()
"""Empty Transform"""
Shape1484 = x3d.Shape()
Shape1484.USE = "HAnimJointShape"

Transform1483.children.append(Shape1484)

Transform1482.children.append(Transform1483)

HAnimSegment1481.children.append(Transform1482)
Shape1485 = x3d.Shape()
LineSet1486 = x3d.LineSet()
LineSet1486.vertexCount = [2]
Coordinate1487 = x3d.Coordinate()
Coordinate1487.point = [(-8.0405, 0.9246, 0.2513),(-0.1972, 0.806, -0.0468)]

LineSet1486.coord = Coordinate1487
"""from r_midcarpal_3 to r_carpometacarpal_3 vertices 2"""
ColorRGBA1488 = x3d.ColorRGBA()
ColorRGBA1488.USE = "HAnimSegmentLineColorRGBA"

LineSet1486.color = ColorRGBA1488

Shape1485.geometry = LineSet1486

HAnimSegment1481.children.append(Shape1485)
HAnimSite1489 = x3d.HAnimSite()
HAnimSite1489.name = "r_metacarpal_phalanx_3_pt"
HAnimSite1489.DEF = "hanim_r_metacarpal_phalanx_3_pt"
TouchSensor1490 = x3d.TouchSensor()
TouchSensor1490.description = "HAnimSite r_metacarpal_phalanx_3_pt"

HAnimSite1489.children.append(TouchSensor1490)
Shape1491 = x3d.Shape()
Shape1491.USE = "HAnimSiteShape"

HAnimSite1489.children.append(Shape1491)

HAnimSegment1481.children.append(HAnimSite1489)

HAnimJoint1480.children.append(HAnimSegment1481)
HAnimJoint1492 = x3d.HAnimJoint()
HAnimJoint1492.name = "r_carpometacarpal_3"
HAnimJoint1492.DEF = "hanim_r_carpometacarpal_3"
HAnimJoint1492.center = [-0.1972,0.806,-0.0468]
HAnimJoint1492.ulimit = [0,0,0]
HAnimJoint1492.llimit = [0,0,0]
HAnimSegment1493 = x3d.HAnimSegment()
HAnimSegment1493.name = "r_metacarpal_3"
HAnimSegment1493.DEF = "hanim_r_metacarpal_3"
Transform1494 = x3d.Transform()
Transform1494.translation = [-0.1972,0.806,-0.0468]
Transform1495 = x3d.Transform()
"""Empty Transform"""
Shape1496 = x3d.Shape()
Shape1496.USE = "HAnimJointShape"

Transform1495.children.append(Shape1496)

Transform1494.children.append(Transform1495)

HAnimSegment1493.children.append(Transform1494)
Shape1497 = x3d.Shape()
LineSet1498 = x3d.LineSet()
LineSet1498.vertexCount = [2]
Coordinate1499 = x3d.Coordinate()
Coordinate1499.point = [(-0.1972, 0.806, -0.0468),(-0.1972, 0.7849, -0.0468)]

LineSet1498.coord = Coordinate1499
"""from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2"""
ColorRGBA1500 = x3d.ColorRGBA()
ColorRGBA1500.USE = "HAnimSegmentLineColorRGBA"

LineSet1498.color = ColorRGBA1500

Shape1497.geometry = LineSet1498

HAnimSegment1493.children.append(Shape1497)

HAnimJoint1492.children.append(HAnimSegment1493)
HAnimJoint1501 = x3d.HAnimJoint()
HAnimJoint1501.name = "r_metacarpophalangeal_3"
HAnimJoint1501.DEF = "hanim_r_metacarpophalangeal_3"
HAnimJoint1501.center = [-0.1972,0.7849,-0.0468]
HAnimJoint1501.ulimit = [0,0,0]
HAnimJoint1501.llimit = [0,0,0]
HAnimSegment1502 = x3d.HAnimSegment()
HAnimSegment1502.name = "r_carpal_proximal_phalanx_3"
HAnimSegment1502.DEF = "hanim_r_carpal_proximal_phalanx_3"
Transform1503 = x3d.Transform()
Transform1503.translation = [-0.1972,0.7849,-0.0468]
Transform1504 = x3d.Transform()
"""Empty Transform"""
Shape1505 = x3d.Shape()
Shape1505.USE = "HAnimJointShape"

Transform1504.children.append(Shape1505)

Transform1503.children.append(Transform1504)

HAnimSegment1502.children.append(Transform1503)
Shape1506 = x3d.Shape()
LineSet1507 = x3d.LineSet()
LineSet1507.vertexCount = [2]
Coordinate1508 = x3d.Coordinate()
Coordinate1508.point = [(-0.1972, 0.7849, -0.0468),(-0.195, 0.7304, -0.0441)]

LineSet1507.coord = Coordinate1508
"""from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2"""
ColorRGBA1509 = x3d.ColorRGBA()
ColorRGBA1509.USE = "HAnimSegmentLineColorRGBA"

LineSet1507.color = ColorRGBA1509

Shape1506.geometry = LineSet1507

HAnimSegment1502.children.append(Shape1506)

HAnimJoint1501.children.append(HAnimSegment1502)
HAnimJoint1510 = x3d.HAnimJoint()
HAnimJoint1510.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint1510.DEF = "hanim_r_carpal_proximal_interphalangeal_3"
HAnimJoint1510.center = [-0.195,0.7304,-0.0441]
HAnimJoint1510.ulimit = [0,0,0]
HAnimJoint1510.llimit = [0,0,0]
HAnimSegment1511 = x3d.HAnimSegment()
HAnimSegment1511.name = "r_carpal_middle_phalanx_3"
HAnimSegment1511.DEF = "hanim_r_carpal_middle_phalanx_3"
Transform1512 = x3d.Transform()
Transform1512.translation = [-0.195,0.7304,-0.0441]
Transform1513 = x3d.Transform()
"""Empty Transform"""
Shape1514 = x3d.Shape()
Shape1514.USE = "HAnimJointShape"

Transform1513.children.append(Shape1514)

Transform1512.children.append(Transform1513)

HAnimSegment1511.children.append(Transform1512)
Shape1515 = x3d.Shape()
LineSet1516 = x3d.LineSet()
LineSet1516.vertexCount = [2]
Coordinate1517 = x3d.Coordinate()
Coordinate1517.point = [(-0.195, 0.7304, -0.0441),(-0.1939, 0.7042, -0.0432)]

LineSet1516.coord = Coordinate1517
"""from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2"""
ColorRGBA1518 = x3d.ColorRGBA()
ColorRGBA1518.USE = "HAnimSegmentLineColorRGBA"

LineSet1516.color = ColorRGBA1518

Shape1515.geometry = LineSet1516

HAnimSegment1511.children.append(Shape1515)
HAnimSite1519 = x3d.HAnimSite()
HAnimSite1519.name = "r_carpal_distal_phalanx_3_tip"
HAnimSite1519.DEF = "hanim_r_carpal_distal_phalanx_3_tip"
TouchSensor1520 = x3d.TouchSensor()
TouchSensor1520.description = "HAnimSite r_carpal_distal_phalanx_3_tip"

HAnimSite1519.children.append(TouchSensor1520)
Shape1521 = x3d.Shape()
Shape1521.USE = "HAnimSiteShape"

HAnimSite1519.children.append(Shape1521)

HAnimSegment1511.children.append(HAnimSite1519)

HAnimJoint1510.children.append(HAnimSegment1511)
HAnimJoint1522 = x3d.HAnimJoint()
HAnimJoint1522.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint1522.DEF = "hanim_r_carpal_distal_interphalangeal_3"
HAnimJoint1522.center = [-0.1939,0.7042,-0.0432]
HAnimJoint1522.ulimit = [0,0,0]
HAnimJoint1522.llimit = [0,0,0]

HAnimJoint1510.children.append(HAnimJoint1522)

HAnimJoint1501.children.append(HAnimJoint1510)

HAnimJoint1492.children.append(HAnimJoint1501)

HAnimJoint1480.children.append(HAnimJoint1492)

HAnimJoint1382.children.append(HAnimJoint1480)
HAnimJoint1523 = x3d.HAnimJoint()
HAnimJoint1523.name = "r_midcarpal_4_5"
HAnimJoint1523.DEF = "hanim_r_midcarpal_4_5"
HAnimJoint1523.center = [-8.0405,0.921,-0.6795]
HAnimJoint1523.ulimit = [0,0,0]
HAnimJoint1523.llimit = [0,0,0]
HAnimSegment1524 = x3d.HAnimSegment()
HAnimSegment1524.name = "r_hamate"
HAnimSegment1524.DEF = "hanim_r_hamate"
Transform1525 = x3d.Transform()
Transform1525.translation = [-8.0405,0.921,-0.6795]
Transform1526 = x3d.Transform()
"""Empty Transform"""
Shape1527 = x3d.Shape()
Shape1527.USE = "HAnimJointShape"

Transform1526.children.append(Shape1527)

Transform1525.children.append(Transform1526)

HAnimSegment1524.children.append(Transform1525)
Shape1528 = x3d.Shape()
LineSet1529 = x3d.LineSet()
LineSet1529.vertexCount = [2]
Coordinate1530 = x3d.Coordinate()
Coordinate1530.point = [(-8.0405, 0.921, -0.6795),(-0.1951, 0.8049, -0.0732)]

LineSet1529.coord = Coordinate1530
"""from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2"""
ColorRGBA1531 = x3d.ColorRGBA()
ColorRGBA1531.USE = "HAnimSegmentLineColorRGBA"

LineSet1529.color = ColorRGBA1531

Shape1528.geometry = LineSet1529

HAnimSegment1524.children.append(Shape1528)
Shape1532 = x3d.Shape()
LineSet1533 = x3d.LineSet()
LineSet1533.vertexCount = [2]
Coordinate1534 = x3d.Coordinate()
Coordinate1534.point = [(-8.0405, 0.921, -0.6795),(-0.1926, 0.8096, -0.0975)]

LineSet1533.coord = Coordinate1534
"""from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2"""
ColorRGBA1535 = x3d.ColorRGBA()
ColorRGBA1535.USE = "HAnimSegmentLineColorRGBA"

LineSet1533.color = ColorRGBA1535

Shape1532.geometry = LineSet1533

HAnimSegment1524.children.append(Shape1532)
HAnimSite1536 = x3d.HAnimSite()
HAnimSite1536.name = "r_metacarpal_phalanx_5_pt"
HAnimSite1536.DEF = "hanim_r_metacarpal_phalanx_5_pt"
HAnimSite1536.translation = [-0.1929,0.789,-0.1064]
TouchSensor1537 = x3d.TouchSensor()
TouchSensor1537.description = "HAnimSite r_metacarpal_phalanx_5_pt"

HAnimSite1536.children.append(TouchSensor1537)
Shape1538 = x3d.Shape()
Shape1538.USE = "HAnimSiteShape"

HAnimSite1536.children.append(Shape1538)

HAnimSegment1524.children.append(HAnimSite1536)

HAnimJoint1523.children.append(HAnimSegment1524)
HAnimJoint1539 = x3d.HAnimJoint()
HAnimJoint1539.name = "r_carpometacarpal_4"
HAnimJoint1539.DEF = "hanim_r_carpometacarpal_4"
HAnimJoint1539.center = [-0.1951,0.8049,-0.0732]
HAnimJoint1539.ulimit = [0,0,0]
HAnimJoint1539.llimit = [0,0,0]
HAnimSegment1540 = x3d.HAnimSegment()
HAnimSegment1540.name = "r_metacarpal_4"
HAnimSegment1540.DEF = "hanim_r_metacarpal_4"
Transform1541 = x3d.Transform()
Transform1541.translation = [-0.1951,0.8049,-0.0732]
Transform1542 = x3d.Transform()
"""Empty Transform"""
Shape1543 = x3d.Shape()
Shape1543.USE = "HAnimJointShape"

Transform1542.children.append(Shape1543)

Transform1541.children.append(Transform1542)

HAnimSegment1540.children.append(Transform1541)
Shape1544 = x3d.Shape()
LineSet1545 = x3d.LineSet()
LineSet1545.vertexCount = [2]
Coordinate1546 = x3d.Coordinate()
Coordinate1546.point = [(-0.1951, 0.8049, -0.0732),(-0.1951, 0.7845, -0.0732)]

LineSet1545.coord = Coordinate1546
"""from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2"""
ColorRGBA1547 = x3d.ColorRGBA()
ColorRGBA1547.USE = "HAnimSegmentLineColorRGBA"

LineSet1545.color = ColorRGBA1547

Shape1544.geometry = LineSet1545

HAnimSegment1540.children.append(Shape1544)

HAnimJoint1539.children.append(HAnimSegment1540)
HAnimJoint1548 = x3d.HAnimJoint()
HAnimJoint1548.name = "r_metacarpophalangeal_4"
HAnimJoint1548.DEF = "hanim_r_metacarpophalangeal_4"
HAnimJoint1548.center = [-0.1951,0.7845,-0.0732]
HAnimJoint1548.ulimit = [0,0,0]
HAnimJoint1548.llimit = [0,0,0]
HAnimSegment1549 = x3d.HAnimSegment()
HAnimSegment1549.name = "r_carpal_proximal_phalanx_4"
HAnimSegment1549.DEF = "hanim_r_carpal_proximal_phalanx_4"
Transform1550 = x3d.Transform()
Transform1550.translation = [-0.1951,0.7845,-0.0732]
Transform1551 = x3d.Transform()
"""Empty Transform"""
Shape1552 = x3d.Shape()
Shape1552.USE = "HAnimJointShape"

Transform1551.children.append(Shape1552)

Transform1550.children.append(Transform1551)

HAnimSegment1549.children.append(Transform1550)
Shape1553 = x3d.Shape()
LineSet1554 = x3d.LineSet()
LineSet1554.vertexCount = [2]
Coordinate1555 = x3d.Coordinate()
Coordinate1555.point = [(-0.1951, 0.7845, -0.0732),(-0.192, 0.7318, -0.0716)]

LineSet1554.coord = Coordinate1555
"""from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2"""
ColorRGBA1556 = x3d.ColorRGBA()
ColorRGBA1556.USE = "HAnimSegmentLineColorRGBA"

LineSet1554.color = ColorRGBA1556

Shape1553.geometry = LineSet1554

HAnimSegment1549.children.append(Shape1553)

HAnimJoint1548.children.append(HAnimSegment1549)
HAnimJoint1557 = x3d.HAnimJoint()
HAnimJoint1557.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint1557.DEF = "hanim_r_carpal_proximal_interphalangeal_4"
HAnimJoint1557.center = [-0.192,0.7318,-0.0716]
HAnimJoint1557.ulimit = [0,0,0]
HAnimJoint1557.llimit = [0,0,0]
HAnimSegment1558 = x3d.HAnimSegment()
HAnimSegment1558.name = "r_carpal_middle_phalanx_4"
HAnimSegment1558.DEF = "hanim_r_carpal_middle_phalanx_4"
Transform1559 = x3d.Transform()
Transform1559.translation = [-0.192,0.7318,-0.0716]
Transform1560 = x3d.Transform()
"""Empty Transform"""
Shape1561 = x3d.Shape()
Shape1561.USE = "HAnimJointShape"

Transform1560.children.append(Shape1561)

Transform1559.children.append(Transform1560)

HAnimSegment1558.children.append(Transform1559)
Shape1562 = x3d.Shape()
LineSet1563 = x3d.LineSet()
LineSet1563.vertexCount = [2]
Coordinate1564 = x3d.Coordinate()
Coordinate1564.point = [(-0.192, 0.7318, -0.0716),(-0.1908, 0.7077, -0.0706)]

LineSet1563.coord = Coordinate1564
"""from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2"""
ColorRGBA1565 = x3d.ColorRGBA()
ColorRGBA1565.USE = "HAnimSegmentLineColorRGBA"

LineSet1563.color = ColorRGBA1565

Shape1562.geometry = LineSet1563

HAnimSegment1558.children.append(Shape1562)
HAnimSite1566 = x3d.HAnimSite()
HAnimSite1566.name = "r_carpal_distal_phalanx_4_tip"
HAnimSite1566.DEF = "hanim_r_carpal_distal_phalanx_4_tip"
TouchSensor1567 = x3d.TouchSensor()
TouchSensor1567.description = "HAnimSite r_carpal_distal_phalanx_4_tip"

HAnimSite1566.children.append(TouchSensor1567)
Shape1568 = x3d.Shape()
Shape1568.USE = "HAnimSiteShape"

HAnimSite1566.children.append(Shape1568)

HAnimSegment1558.children.append(HAnimSite1566)

HAnimJoint1557.children.append(HAnimSegment1558)
HAnimJoint1569 = x3d.HAnimJoint()
HAnimJoint1569.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint1569.DEF = "hanim_r_carpal_distal_interphalangeal_4"
HAnimJoint1569.center = [-0.1908,0.7077,-0.0706]
HAnimJoint1569.ulimit = [0,0,0]
HAnimJoint1569.llimit = [0,0,0]

HAnimJoint1557.children.append(HAnimJoint1569)

HAnimJoint1548.children.append(HAnimJoint1557)

HAnimJoint1539.children.append(HAnimJoint1548)

HAnimJoint1523.children.append(HAnimJoint1539)
HAnimJoint1570 = x3d.HAnimJoint()
HAnimJoint1570.name = "r_carpometacarpal_5"
HAnimJoint1570.DEF = "hanim_r_carpometacarpal_5"
HAnimJoint1570.center = [-0.1926,0.8096,-0.0975]
HAnimJoint1570.ulimit = [0,0,0]
HAnimJoint1570.llimit = [0,0,0]
HAnimSegment1571 = x3d.HAnimSegment()
HAnimSegment1571.name = "r_metacarpal_5"
HAnimSegment1571.DEF = "hanim_r_metacarpal_5"
Transform1572 = x3d.Transform()
Transform1572.translation = [-0.1926,0.8096,-0.0975]
Transform1573 = x3d.Transform()
"""Empty Transform"""
Shape1574 = x3d.Shape()
Shape1574.USE = "HAnimJointShape"

Transform1573.children.append(Shape1574)

Transform1572.children.append(Transform1573)

HAnimSegment1571.children.append(Transform1572)
Shape1575 = x3d.Shape()
LineSet1576 = x3d.LineSet()
LineSet1576.vertexCount = [2]
Coordinate1577 = x3d.Coordinate()
Coordinate1577.point = [(-0.1926, 0.8096, -0.0975),(-0.1926, 0.7896, -0.0975)]

LineSet1576.coord = Coordinate1577
"""from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2"""
ColorRGBA1578 = x3d.ColorRGBA()
ColorRGBA1578.USE = "HAnimSegmentLineColorRGBA"

LineSet1576.color = ColorRGBA1578

Shape1575.geometry = LineSet1576

HAnimSegment1571.children.append(Shape1575)

HAnimJoint1570.children.append(HAnimSegment1571)
HAnimJoint1579 = x3d.HAnimJoint()
HAnimJoint1579.name = "r_metacarpophalangeal_5"
HAnimJoint1579.DEF = "hanim_r_metacarpophalangeal_5"
HAnimJoint1579.center = [-0.1926,0.7896,-0.0975]
HAnimJoint1579.ulimit = [0,0,0]
HAnimJoint1579.llimit = [0,0,0]
HAnimSegment1580 = x3d.HAnimSegment()
HAnimSegment1580.name = "r_carpal_proximal_phalanx_5"
HAnimSegment1580.DEF = "hanim_r_carpal_proximal_phalanx_5"
Transform1581 = x3d.Transform()
Transform1581.translation = [-0.1926,0.7896,-0.0975]
Transform1582 = x3d.Transform()
"""Empty Transform"""
Shape1583 = x3d.Shape()
Shape1583.USE = "HAnimJointShape"

Transform1582.children.append(Shape1583)

Transform1581.children.append(Transform1582)

HAnimSegment1580.children.append(Transform1581)
Shape1584 = x3d.Shape()
LineSet1585 = x3d.LineSet()
LineSet1585.vertexCount = [2]
Coordinate1586 = x3d.Coordinate()
Coordinate1586.point = [(-0.1926, 0.7896, -0.0975),(-0.1902, 0.7483, -0.0963)]

LineSet1585.coord = Coordinate1586
"""from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2"""
ColorRGBA1587 = x3d.ColorRGBA()
ColorRGBA1587.USE = "HAnimSegmentLineColorRGBA"

LineSet1585.color = ColorRGBA1587

Shape1584.geometry = LineSet1585

HAnimSegment1580.children.append(Shape1584)

HAnimJoint1579.children.append(HAnimSegment1580)
HAnimJoint1588 = x3d.HAnimJoint()
HAnimJoint1588.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint1588.DEF = "hanim_r_carpal_proximal_interphalangeal_5"
HAnimJoint1588.center = [-0.1902,0.7483,-0.0963]
HAnimJoint1588.ulimit = [0,0,0]
HAnimJoint1588.llimit = [0,0,0]
HAnimSegment1589 = x3d.HAnimSegment()
HAnimSegment1589.name = "r_carpal_middle_phalanx_5"
HAnimSegment1589.DEF = "hanim_r_carpal_middle_phalanx_5"
Transform1590 = x3d.Transform()
Transform1590.translation = [-0.1902,0.7483,-0.0963]
Transform1591 = x3d.Transform()
"""Empty Transform"""
Shape1592 = x3d.Shape()
Shape1592.USE = "HAnimJointShape"

Transform1591.children.append(Shape1592)

Transform1590.children.append(Transform1591)

HAnimSegment1589.children.append(Transform1590)
Shape1593 = x3d.Shape()
LineSet1594 = x3d.LineSet()
LineSet1594.vertexCount = [2]
Coordinate1595 = x3d.Coordinate()
Coordinate1595.point = [(-0.1902, 0.7483, -0.0963),(-0.1908, 0.754, -0.096)]

LineSet1594.coord = Coordinate1595
"""from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2"""
ColorRGBA1596 = x3d.ColorRGBA()
ColorRGBA1596.USE = "HAnimSegmentLineColorRGBA"

LineSet1594.color = ColorRGBA1596

Shape1593.geometry = LineSet1594

HAnimSegment1589.children.append(Shape1593)
HAnimSite1597 = x3d.HAnimSite()
HAnimSite1597.name = "r_carpal_distal_phalanx_5_tip"
HAnimSite1597.DEF = "hanim_r_carpal_distal_phalanx_5_tip"
TouchSensor1598 = x3d.TouchSensor()
TouchSensor1598.description = "HAnimSite r_carpal_distal_phalanx_5_tip"

HAnimSite1597.children.append(TouchSensor1598)
Shape1599 = x3d.Shape()
Shape1599.USE = "HAnimSiteShape"

HAnimSite1597.children.append(Shape1599)

HAnimSegment1589.children.append(HAnimSite1597)

HAnimJoint1588.children.append(HAnimSegment1589)
HAnimJoint1600 = x3d.HAnimJoint()
HAnimJoint1600.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint1600.DEF = "hanim_r_carpal_distal_interphalangeal_5"
HAnimJoint1600.center = [-0.1908,0.754,-0.096]
HAnimJoint1600.ulimit = [0,0,0]
HAnimJoint1600.llimit = [0,0,0]

HAnimJoint1588.children.append(HAnimJoint1600)

HAnimJoint1579.children.append(HAnimJoint1588)

HAnimJoint1570.children.append(HAnimJoint1579)

HAnimJoint1523.children.append(HAnimJoint1570)

HAnimJoint1382.children.append(HAnimJoint1523)

HAnimJoint1370.children.append(HAnimJoint1382)

HAnimJoint1349.children.append(HAnimJoint1370)

HAnimJoint1334.children.append(HAnimJoint1349)

HAnimJoint1325.children.append(HAnimJoint1334)

HAnimJoint845.children.append(HAnimJoint1325)

HAnimJoint830.children.append(HAnimJoint845)

HAnimJoint821.children.append(HAnimJoint830)

HAnimJoint812.children.append(HAnimJoint821)

HAnimJoint803.children.append(HAnimJoint812)

HAnimJoint791.children.append(HAnimJoint803)

HAnimJoint770.children.append(HAnimJoint791)

HAnimJoint761.children.append(HAnimJoint770)

HAnimJoint752.children.append(HAnimJoint761)

HAnimJoint737.children.append(HAnimJoint752)

HAnimJoint725.children.append(HAnimJoint737)

HAnimJoint716.children.append(HAnimJoint725)

HAnimJoint707.children.append(HAnimJoint716)

HAnimJoint698.children.append(HAnimJoint707)

HAnimJoint680.children.append(HAnimJoint698)

HAnimJoint671.children.append(HAnimJoint680)

HAnimJoint662.children.append(HAnimJoint671)

HAnimJoint45.children.append(HAnimJoint662)

HAnimHumanoid43.skeleton.append(HAnimJoint45)
HAnimJoint1601 = x3d.HAnimJoint()
HAnimJoint1601.USE = "hanim_humanoid_root"

HAnimHumanoid43.joints.append(HAnimJoint1601)
HAnimJoint1602 = x3d.HAnimJoint()
HAnimJoint1602.USE = "hanim_sacroiliac"

HAnimHumanoid43.joints.append(HAnimJoint1602)
HAnimJoint1603 = x3d.HAnimJoint()
HAnimJoint1603.USE = "hanim_l_hip"

HAnimHumanoid43.joints.append(HAnimJoint1603)
HAnimJoint1604 = x3d.HAnimJoint()
HAnimJoint1604.USE = "hanim_l_knee"

HAnimHumanoid43.joints.append(HAnimJoint1604)
HAnimJoint1605 = x3d.HAnimJoint()
HAnimJoint1605.USE = "hanim_l_talocrural"

HAnimHumanoid43.joints.append(HAnimJoint1605)
HAnimJoint1606 = x3d.HAnimJoint()
HAnimJoint1606.USE = "hanim_l_talocalcaneonavicular"

HAnimHumanoid43.joints.append(HAnimJoint1606)
HAnimJoint1607 = x3d.HAnimJoint()
HAnimJoint1607.USE = "hanim_l_cuneonavicular_1"

HAnimHumanoid43.joints.append(HAnimJoint1607)
HAnimJoint1608 = x3d.HAnimJoint()
HAnimJoint1608.USE = "hanim_l_tarsometatarsal_1"

HAnimHumanoid43.joints.append(HAnimJoint1608)
HAnimJoint1609 = x3d.HAnimJoint()
HAnimJoint1609.USE = "hanim_l_metatarsophalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint1609)
HAnimJoint1610 = x3d.HAnimJoint()
HAnimJoint1610.USE = "hanim_l_tarsal_interphalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint1610)
HAnimJoint1611 = x3d.HAnimJoint()
HAnimJoint1611.USE = "hanim_l_cuneonavicular_2"

HAnimHumanoid43.joints.append(HAnimJoint1611)
HAnimJoint1612 = x3d.HAnimJoint()
HAnimJoint1612.USE = "hanim_l_tarsometatarsal_2"

HAnimHumanoid43.joints.append(HAnimJoint1612)
HAnimJoint1613 = x3d.HAnimJoint()
HAnimJoint1613.USE = "hanim_l_metatarsophalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1613)
HAnimJoint1614 = x3d.HAnimJoint()
HAnimJoint1614.USE = "hanim_l_tarsal_proximal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1614)
HAnimJoint1615 = x3d.HAnimJoint()
HAnimJoint1615.USE = "hanim_l_tarsal_distal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1615)
HAnimJoint1616 = x3d.HAnimJoint()
HAnimJoint1616.USE = "hanim_l_cuneonavicular_3"

HAnimHumanoid43.joints.append(HAnimJoint1616)
HAnimJoint1617 = x3d.HAnimJoint()
HAnimJoint1617.USE = "hanim_l_tarsometatarsal_3"

HAnimHumanoid43.joints.append(HAnimJoint1617)
HAnimJoint1618 = x3d.HAnimJoint()
HAnimJoint1618.USE = "hanim_l_metatarsophalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1618)
HAnimJoint1619 = x3d.HAnimJoint()
HAnimJoint1619.USE = "hanim_l_tarsal_proximal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1619)
HAnimJoint1620 = x3d.HAnimJoint()
HAnimJoint1620.USE = "hanim_l_tarsal_distal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1620)
HAnimJoint1621 = x3d.HAnimJoint()
HAnimJoint1621.USE = "hanim_l_calcaneocuboid"

HAnimHumanoid43.joints.append(HAnimJoint1621)
HAnimJoint1622 = x3d.HAnimJoint()
HAnimJoint1622.USE = "hanim_l_transversetarsal"

HAnimHumanoid43.joints.append(HAnimJoint1622)
HAnimJoint1623 = x3d.HAnimJoint()
HAnimJoint1623.USE = "hanim_l_tarsometatarsal_4"

HAnimHumanoid43.joints.append(HAnimJoint1623)
HAnimJoint1624 = x3d.HAnimJoint()
HAnimJoint1624.USE = "hanim_l_metatarsophalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1624)
HAnimJoint1625 = x3d.HAnimJoint()
HAnimJoint1625.USE = "hanim_l_tarsal_proximal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1625)
HAnimJoint1626 = x3d.HAnimJoint()
HAnimJoint1626.USE = "hanim_l_tarsal_distal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1626)
HAnimJoint1627 = x3d.HAnimJoint()
HAnimJoint1627.USE = "hanim_l_tarsometatarsal_5"

HAnimHumanoid43.joints.append(HAnimJoint1627)
HAnimJoint1628 = x3d.HAnimJoint()
HAnimJoint1628.USE = "hanim_l_metatarsophalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1628)
HAnimJoint1629 = x3d.HAnimJoint()
HAnimJoint1629.USE = "hanim_l_tarsal_proximal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1629)
HAnimJoint1630 = x3d.HAnimJoint()
HAnimJoint1630.USE = "hanim_l_tarsal_distal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1630)
HAnimJoint1631 = x3d.HAnimJoint()
HAnimJoint1631.USE = "hanim_r_hip"

HAnimHumanoid43.joints.append(HAnimJoint1631)
HAnimJoint1632 = x3d.HAnimJoint()
HAnimJoint1632.USE = "hanim_r_knee"

HAnimHumanoid43.joints.append(HAnimJoint1632)
HAnimJoint1633 = x3d.HAnimJoint()
HAnimJoint1633.USE = "hanim_r_talocrural"

HAnimHumanoid43.joints.append(HAnimJoint1633)
HAnimJoint1634 = x3d.HAnimJoint()
HAnimJoint1634.USE = "hanim_r_talocalcaneonavicular"

HAnimHumanoid43.joints.append(HAnimJoint1634)
HAnimJoint1635 = x3d.HAnimJoint()
HAnimJoint1635.USE = "hanim_r_cuneonavicular_1"

HAnimHumanoid43.joints.append(HAnimJoint1635)
HAnimJoint1636 = x3d.HAnimJoint()
HAnimJoint1636.USE = "hanim_r_tarsometatarsal_1"

HAnimHumanoid43.joints.append(HAnimJoint1636)
HAnimJoint1637 = x3d.HAnimJoint()
HAnimJoint1637.USE = "hanim_r_metatarsophalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint1637)
HAnimJoint1638 = x3d.HAnimJoint()
HAnimJoint1638.USE = "hanim_r_tarsal_interphalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint1638)
HAnimJoint1639 = x3d.HAnimJoint()
HAnimJoint1639.USE = "hanim_r_cuneonavicular_2"

HAnimHumanoid43.joints.append(HAnimJoint1639)
HAnimJoint1640 = x3d.HAnimJoint()
HAnimJoint1640.USE = "hanim_r_tarsometatarsal_2"

HAnimHumanoid43.joints.append(HAnimJoint1640)
HAnimJoint1641 = x3d.HAnimJoint()
HAnimJoint1641.USE = "hanim_r_metatarsophalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1641)
HAnimJoint1642 = x3d.HAnimJoint()
HAnimJoint1642.USE = "hanim_r_tarsal_proximal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1642)
HAnimJoint1643 = x3d.HAnimJoint()
HAnimJoint1643.USE = "hanim_r_tarsal_distal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1643)
HAnimJoint1644 = x3d.HAnimJoint()
HAnimJoint1644.USE = "hanim_r_cuneonavicular_3"

HAnimHumanoid43.joints.append(HAnimJoint1644)
HAnimJoint1645 = x3d.HAnimJoint()
HAnimJoint1645.USE = "hanim_r_tarsometatarsal_3"

HAnimHumanoid43.joints.append(HAnimJoint1645)
HAnimJoint1646 = x3d.HAnimJoint()
HAnimJoint1646.USE = "hanim_r_metatarsophalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1646)
HAnimJoint1647 = x3d.HAnimJoint()
HAnimJoint1647.USE = "hanim_r_tarsal_proximal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1647)
HAnimJoint1648 = x3d.HAnimJoint()
HAnimJoint1648.USE = "hanim_r_tarsal_distal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1648)
HAnimJoint1649 = x3d.HAnimJoint()
HAnimJoint1649.USE = "hanim_r_calcaneocuboid"

HAnimHumanoid43.joints.append(HAnimJoint1649)
HAnimJoint1650 = x3d.HAnimJoint()
HAnimJoint1650.USE = "hanim_r_transversetarsal"

HAnimHumanoid43.joints.append(HAnimJoint1650)
HAnimJoint1651 = x3d.HAnimJoint()
HAnimJoint1651.USE = "hanim_r_tarsometatarsal_4"

HAnimHumanoid43.joints.append(HAnimJoint1651)
HAnimJoint1652 = x3d.HAnimJoint()
HAnimJoint1652.USE = "hanim_r_metatarsophalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1652)
HAnimJoint1653 = x3d.HAnimJoint()
HAnimJoint1653.USE = "hanim_r_tarsal_proximal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1653)
HAnimJoint1654 = x3d.HAnimJoint()
HAnimJoint1654.USE = "hanim_r_tarsal_distal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1654)
HAnimJoint1655 = x3d.HAnimJoint()
HAnimJoint1655.USE = "hanim_r_tarsometatarsal_5"

HAnimHumanoid43.joints.append(HAnimJoint1655)
HAnimJoint1656 = x3d.HAnimJoint()
HAnimJoint1656.USE = "hanim_r_metatarsophalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1656)
HAnimJoint1657 = x3d.HAnimJoint()
HAnimJoint1657.USE = "hanim_r_tarsal_proximal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1657)
HAnimJoint1658 = x3d.HAnimJoint()
HAnimJoint1658.USE = "hanim_r_tarsal_distal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1658)
HAnimJoint1659 = x3d.HAnimJoint()
HAnimJoint1659.USE = "hanim_vl5"

HAnimHumanoid43.joints.append(HAnimJoint1659)
HAnimJoint1660 = x3d.HAnimJoint()
HAnimJoint1660.USE = "hanim_vl4"

HAnimHumanoid43.joints.append(HAnimJoint1660)
HAnimJoint1661 = x3d.HAnimJoint()
HAnimJoint1661.USE = "hanim_vl3"

HAnimHumanoid43.joints.append(HAnimJoint1661)
HAnimJoint1662 = x3d.HAnimJoint()
HAnimJoint1662.USE = "hanim_vl2"

HAnimHumanoid43.joints.append(HAnimJoint1662)
HAnimJoint1663 = x3d.HAnimJoint()
HAnimJoint1663.USE = "hanim_vl1"

HAnimHumanoid43.joints.append(HAnimJoint1663)
HAnimJoint1664 = x3d.HAnimJoint()
HAnimJoint1664.USE = "hanim_vt12"

HAnimHumanoid43.joints.append(HAnimJoint1664)
HAnimJoint1665 = x3d.HAnimJoint()
HAnimJoint1665.USE = "hanim_vt11"

HAnimHumanoid43.joints.append(HAnimJoint1665)
HAnimJoint1666 = x3d.HAnimJoint()
HAnimJoint1666.USE = "hanim_vt10"

HAnimHumanoid43.joints.append(HAnimJoint1666)
HAnimJoint1667 = x3d.HAnimJoint()
HAnimJoint1667.USE = "hanim_vt9"

HAnimHumanoid43.joints.append(HAnimJoint1667)
HAnimJoint1668 = x3d.HAnimJoint()
HAnimJoint1668.USE = "hanim_vt8"

HAnimHumanoid43.joints.append(HAnimJoint1668)
HAnimJoint1669 = x3d.HAnimJoint()
HAnimJoint1669.USE = "hanim_vt7"

HAnimHumanoid43.joints.append(HAnimJoint1669)
HAnimJoint1670 = x3d.HAnimJoint()
HAnimJoint1670.USE = "hanim_vt6"

HAnimHumanoid43.joints.append(HAnimJoint1670)
HAnimJoint1671 = x3d.HAnimJoint()
HAnimJoint1671.USE = "hanim_vt5"

HAnimHumanoid43.joints.append(HAnimJoint1671)
HAnimJoint1672 = x3d.HAnimJoint()
HAnimJoint1672.USE = "hanim_vt4"

HAnimHumanoid43.joints.append(HAnimJoint1672)
HAnimJoint1673 = x3d.HAnimJoint()
HAnimJoint1673.USE = "hanim_vt3"

HAnimHumanoid43.joints.append(HAnimJoint1673)
HAnimJoint1674 = x3d.HAnimJoint()
HAnimJoint1674.USE = "hanim_vt2"

HAnimHumanoid43.joints.append(HAnimJoint1674)
HAnimJoint1675 = x3d.HAnimJoint()
HAnimJoint1675.USE = "hanim_vt1"

HAnimHumanoid43.joints.append(HAnimJoint1675)
HAnimJoint1676 = x3d.HAnimJoint()
HAnimJoint1676.USE = "hanim_vc7"

HAnimHumanoid43.joints.append(HAnimJoint1676)
HAnimJoint1677 = x3d.HAnimJoint()
HAnimJoint1677.USE = "hanim_vc6"

HAnimHumanoid43.joints.append(HAnimJoint1677)
HAnimJoint1678 = x3d.HAnimJoint()
HAnimJoint1678.USE = "hanim_vc5"

HAnimHumanoid43.joints.append(HAnimJoint1678)
HAnimJoint1679 = x3d.HAnimJoint()
HAnimJoint1679.USE = "hanim_vc4"

HAnimHumanoid43.joints.append(HAnimJoint1679)
HAnimJoint1680 = x3d.HAnimJoint()
HAnimJoint1680.USE = "hanim_vc3"

HAnimHumanoid43.joints.append(HAnimJoint1680)
HAnimJoint1681 = x3d.HAnimJoint()
HAnimJoint1681.USE = "hanim_vc2"

HAnimHumanoid43.joints.append(HAnimJoint1681)
HAnimJoint1682 = x3d.HAnimJoint()
HAnimJoint1682.USE = "hanim_vc1"

HAnimHumanoid43.joints.append(HAnimJoint1682)
HAnimJoint1683 = x3d.HAnimJoint()
HAnimJoint1683.USE = "hanim_skullbase"

HAnimHumanoid43.joints.append(HAnimJoint1683)
HAnimJoint1684 = x3d.HAnimJoint()
HAnimJoint1684.USE = "hanim_l_eyelid_joint"

HAnimHumanoid43.joints.append(HAnimJoint1684)
HAnimJoint1685 = x3d.HAnimJoint()
HAnimJoint1685.USE = "hanim_r_eyelid_joint"

HAnimHumanoid43.joints.append(HAnimJoint1685)
HAnimJoint1686 = x3d.HAnimJoint()
HAnimJoint1686.USE = "hanim_l_eyeball_joint"

HAnimHumanoid43.joints.append(HAnimJoint1686)
HAnimJoint1687 = x3d.HAnimJoint()
HAnimJoint1687.USE = "hanim_r_eyeball_joint"

HAnimHumanoid43.joints.append(HAnimJoint1687)
HAnimJoint1688 = x3d.HAnimJoint()
HAnimJoint1688.USE = "hanim_l_eyebrow_joint"

HAnimHumanoid43.joints.append(HAnimJoint1688)
HAnimJoint1689 = x3d.HAnimJoint()
HAnimJoint1689.USE = "hanim_r_eyebrow_joint"

HAnimHumanoid43.joints.append(HAnimJoint1689)
HAnimJoint1690 = x3d.HAnimJoint()
HAnimJoint1690.USE = "hanim_temporomandibular"

HAnimHumanoid43.joints.append(HAnimJoint1690)
HAnimJoint1691 = x3d.HAnimJoint()
HAnimJoint1691.USE = "hanim_l_sternoclavicular"

HAnimHumanoid43.joints.append(HAnimJoint1691)
HAnimJoint1692 = x3d.HAnimJoint()
HAnimJoint1692.USE = "hanim_l_acromioclavicular"

HAnimHumanoid43.joints.append(HAnimJoint1692)
HAnimJoint1693 = x3d.HAnimJoint()
HAnimJoint1693.USE = "hanim_l_shoulder"

HAnimHumanoid43.joints.append(HAnimJoint1693)
HAnimJoint1694 = x3d.HAnimJoint()
HAnimJoint1694.USE = "hanim_l_elbow"

HAnimHumanoid43.joints.append(HAnimJoint1694)
HAnimJoint1695 = x3d.HAnimJoint()
HAnimJoint1695.USE = "hanim_l_radiocarpal"

HAnimHumanoid43.joints.append(HAnimJoint1695)
HAnimJoint1696 = x3d.HAnimJoint()
HAnimJoint1696.USE = "hanim_l_midcarpal_1"

HAnimHumanoid43.joints.append(HAnimJoint1696)
HAnimJoint1697 = x3d.HAnimJoint()
HAnimJoint1697.USE = "hanim_l_carpometacarpal_1"

HAnimHumanoid43.joints.append(HAnimJoint1697)
HAnimJoint1698 = x3d.HAnimJoint()
HAnimJoint1698.USE = "hanim_l_metacarpophalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint1698)
HAnimJoint1699 = x3d.HAnimJoint()
HAnimJoint1699.USE = "hanim_l_carpal_interphalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint1699)
HAnimJoint1700 = x3d.HAnimJoint()
HAnimJoint1700.USE = "hanim_l_midcarpal_2"

HAnimHumanoid43.joints.append(HAnimJoint1700)
HAnimJoint1701 = x3d.HAnimJoint()
HAnimJoint1701.USE = "hanim_l_carpometacarpal_2"

HAnimHumanoid43.joints.append(HAnimJoint1701)
HAnimJoint1702 = x3d.HAnimJoint()
HAnimJoint1702.USE = "hanim_l_metacarpophalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1702)
HAnimJoint1703 = x3d.HAnimJoint()
HAnimJoint1703.USE = "hanim_l_carpal_proximal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1703)
HAnimJoint1704 = x3d.HAnimJoint()
HAnimJoint1704.USE = "hanim_l_carpal_distal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1704)
HAnimJoint1705 = x3d.HAnimJoint()
HAnimJoint1705.USE = "hanim_l_midcarpal_3"

HAnimHumanoid43.joints.append(HAnimJoint1705)
HAnimJoint1706 = x3d.HAnimJoint()
HAnimJoint1706.USE = "hanim_l_carpometacarpal_3"

HAnimHumanoid43.joints.append(HAnimJoint1706)
HAnimJoint1707 = x3d.HAnimJoint()
HAnimJoint1707.USE = "hanim_l_metacarpophalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1707)
HAnimJoint1708 = x3d.HAnimJoint()
HAnimJoint1708.USE = "hanim_l_carpal_proximal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1708)
HAnimJoint1709 = x3d.HAnimJoint()
HAnimJoint1709.USE = "hanim_l_carpal_distal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1709)
HAnimJoint1710 = x3d.HAnimJoint()
HAnimJoint1710.USE = "hanim_l_midcarpal_4_5"

HAnimHumanoid43.joints.append(HAnimJoint1710)
HAnimJoint1711 = x3d.HAnimJoint()
HAnimJoint1711.USE = "hanim_l_carpometacarpal_4"

HAnimHumanoid43.joints.append(HAnimJoint1711)
HAnimJoint1712 = x3d.HAnimJoint()
HAnimJoint1712.USE = "hanim_l_metacarpophalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1712)
HAnimJoint1713 = x3d.HAnimJoint()
HAnimJoint1713.USE = "hanim_l_carpal_proximal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1713)
HAnimJoint1714 = x3d.HAnimJoint()
HAnimJoint1714.USE = "hanim_l_carpal_distal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1714)
HAnimJoint1715 = x3d.HAnimJoint()
HAnimJoint1715.USE = "hanim_l_carpometacarpal_5"

HAnimHumanoid43.joints.append(HAnimJoint1715)
HAnimJoint1716 = x3d.HAnimJoint()
HAnimJoint1716.USE = "hanim_l_metacarpophalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1716)
HAnimJoint1717 = x3d.HAnimJoint()
HAnimJoint1717.USE = "hanim_l_carpal_proximal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1717)
HAnimJoint1718 = x3d.HAnimJoint()
HAnimJoint1718.USE = "hanim_l_carpal_distal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1718)
HAnimJoint1719 = x3d.HAnimJoint()
HAnimJoint1719.USE = "hanim_r_sternoclavicular"

HAnimHumanoid43.joints.append(HAnimJoint1719)
HAnimJoint1720 = x3d.HAnimJoint()
HAnimJoint1720.USE = "hanim_r_acromioclavicular"

HAnimHumanoid43.joints.append(HAnimJoint1720)
HAnimJoint1721 = x3d.HAnimJoint()
HAnimJoint1721.USE = "hanim_r_shoulder"

HAnimHumanoid43.joints.append(HAnimJoint1721)
HAnimJoint1722 = x3d.HAnimJoint()
HAnimJoint1722.USE = "hanim_r_elbow"

HAnimHumanoid43.joints.append(HAnimJoint1722)
HAnimJoint1723 = x3d.HAnimJoint()
HAnimJoint1723.USE = "hanim_r_radiocarpal"

HAnimHumanoid43.joints.append(HAnimJoint1723)
HAnimJoint1724 = x3d.HAnimJoint()
HAnimJoint1724.USE = "hanim_r_midcarpal_1"

HAnimHumanoid43.joints.append(HAnimJoint1724)
HAnimJoint1725 = x3d.HAnimJoint()
HAnimJoint1725.USE = "hanim_r_carpometacarpal_1"

HAnimHumanoid43.joints.append(HAnimJoint1725)
HAnimJoint1726 = x3d.HAnimJoint()
HAnimJoint1726.USE = "hanim_r_metacarpophalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint1726)
HAnimJoint1727 = x3d.HAnimJoint()
HAnimJoint1727.USE = "hanim_r_carpal_interphalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint1727)
HAnimJoint1728 = x3d.HAnimJoint()
HAnimJoint1728.USE = "hanim_r_midcarpal_2"

HAnimHumanoid43.joints.append(HAnimJoint1728)
HAnimJoint1729 = x3d.HAnimJoint()
HAnimJoint1729.USE = "hanim_r_carpometacarpal_2"

HAnimHumanoid43.joints.append(HAnimJoint1729)
HAnimJoint1730 = x3d.HAnimJoint()
HAnimJoint1730.USE = "hanim_r_metacarpophalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1730)
HAnimJoint1731 = x3d.HAnimJoint()
HAnimJoint1731.USE = "hanim_r_carpal_proximal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1731)
HAnimJoint1732 = x3d.HAnimJoint()
HAnimJoint1732.USE = "hanim_r_carpal_distal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1732)
HAnimJoint1733 = x3d.HAnimJoint()
HAnimJoint1733.USE = "hanim_r_midcarpal_3"

HAnimHumanoid43.joints.append(HAnimJoint1733)
HAnimJoint1734 = x3d.HAnimJoint()
HAnimJoint1734.USE = "hanim_r_carpometacarpal_3"

HAnimHumanoid43.joints.append(HAnimJoint1734)
HAnimJoint1735 = x3d.HAnimJoint()
HAnimJoint1735.USE = "hanim_r_metacarpophalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1735)
HAnimJoint1736 = x3d.HAnimJoint()
HAnimJoint1736.USE = "hanim_r_carpal_proximal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1736)
HAnimJoint1737 = x3d.HAnimJoint()
HAnimJoint1737.USE = "hanim_r_carpal_distal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1737)
HAnimJoint1738 = x3d.HAnimJoint()
HAnimJoint1738.USE = "hanim_r_midcarpal_4_5"

HAnimHumanoid43.joints.append(HAnimJoint1738)
HAnimJoint1739 = x3d.HAnimJoint()
HAnimJoint1739.USE = "hanim_r_carpometacarpal_4"

HAnimHumanoid43.joints.append(HAnimJoint1739)
HAnimJoint1740 = x3d.HAnimJoint()
HAnimJoint1740.USE = "hanim_r_metacarpophalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1740)
HAnimJoint1741 = x3d.HAnimJoint()
HAnimJoint1741.USE = "hanim_r_carpal_proximal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1741)
HAnimJoint1742 = x3d.HAnimJoint()
HAnimJoint1742.USE = "hanim_r_carpal_distal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1742)
HAnimJoint1743 = x3d.HAnimJoint()
HAnimJoint1743.USE = "hanim_r_carpometacarpal_5"

HAnimHumanoid43.joints.append(HAnimJoint1743)
HAnimJoint1744 = x3d.HAnimJoint()
HAnimJoint1744.USE = "hanim_r_metacarpophalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1744)
HAnimJoint1745 = x3d.HAnimJoint()
HAnimJoint1745.USE = "hanim_r_carpal_proximal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1745)
HAnimJoint1746 = x3d.HAnimJoint()
HAnimJoint1746.USE = "hanim_r_carpal_distal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1746)
HAnimSegment1747 = x3d.HAnimSegment()
HAnimSegment1747.USE = "hanim_sacrum"

HAnimHumanoid43.segments.append(HAnimSegment1747)
HAnimSegment1748 = x3d.HAnimSegment()
HAnimSegment1748.USE = "hanim_pelvis"

HAnimHumanoid43.segments.append(HAnimSegment1748)
HAnimSegment1749 = x3d.HAnimSegment()
HAnimSegment1749.USE = "hanim_l_thigh"

HAnimHumanoid43.segments.append(HAnimSegment1749)
HAnimSegment1750 = x3d.HAnimSegment()
HAnimSegment1750.USE = "hanim_l_calf"

HAnimHumanoid43.segments.append(HAnimSegment1750)
HAnimSegment1751 = x3d.HAnimSegment()
HAnimSegment1751.USE = "hanim_l_talus"

HAnimHumanoid43.segments.append(HAnimSegment1751)
HAnimSegment1752 = x3d.HAnimSegment()
HAnimSegment1752.USE = "hanim_l_navicular"

HAnimHumanoid43.segments.append(HAnimSegment1752)
HAnimSegment1753 = x3d.HAnimSegment()
HAnimSegment1753.USE = "hanim_l_cuneiform_1"

HAnimHumanoid43.segments.append(HAnimSegment1753)
HAnimSegment1754 = x3d.HAnimSegment()
HAnimSegment1754.USE = "hanim_l_metatarsal_1"

HAnimHumanoid43.segments.append(HAnimSegment1754)
HAnimSegment1755 = x3d.HAnimSegment()
HAnimSegment1755.USE = "hanim_l_tarsal_proximal_phalanx_1"

HAnimHumanoid43.segments.append(HAnimSegment1755)
HAnimSegment1756 = x3d.HAnimSegment()
HAnimSegment1756.USE = "hanim_l_cuneiform_2"

HAnimHumanoid43.segments.append(HAnimSegment1756)
HAnimSegment1757 = x3d.HAnimSegment()
HAnimSegment1757.USE = "hanim_l_metatarsal_2"

HAnimHumanoid43.segments.append(HAnimSegment1757)
HAnimSegment1758 = x3d.HAnimSegment()
HAnimSegment1758.USE = "hanim_l_tarsal_proximal_phalanx_2"

HAnimHumanoid43.segments.append(HAnimSegment1758)
HAnimSegment1759 = x3d.HAnimSegment()
HAnimSegment1759.USE = "hanim_l_tarsal_middle_phalanx_2"

HAnimHumanoid43.segments.append(HAnimSegment1759)
HAnimSegment1760 = x3d.HAnimSegment()
HAnimSegment1760.USE = "hanim_l_cuneiform_3"

HAnimHumanoid43.segments.append(HAnimSegment1760)
HAnimSegment1761 = x3d.HAnimSegment()
HAnimSegment1761.USE = "hanim_l_metatarsal_3"

HAnimHumanoid43.segments.append(HAnimSegment1761)
HAnimSegment1762 = x3d.HAnimSegment()
HAnimSegment1762.USE = "hanim_l_tarsal_proximal_phalanx_3"

HAnimHumanoid43.segments.append(HAnimSegment1762)
HAnimSegment1763 = x3d.HAnimSegment()
HAnimSegment1763.USE = "hanim_l_tarsal_middle_phalanx_3"

HAnimHumanoid43.segments.append(HAnimSegment1763)
HAnimSegment1764 = x3d.HAnimSegment()
HAnimSegment1764.USE = "hanim_l_calcaneus"

HAnimHumanoid43.segments.append(HAnimSegment1764)
HAnimSegment1765 = x3d.HAnimSegment()
HAnimSegment1765.USE = "hanim_l_cuboid"

HAnimHumanoid43.segments.append(HAnimSegment1765)
HAnimSegment1766 = x3d.HAnimSegment()
HAnimSegment1766.USE = "hanim_l_metatarsal_4"

HAnimHumanoid43.segments.append(HAnimSegment1766)
HAnimSegment1767 = x3d.HAnimSegment()
HAnimSegment1767.USE = "hanim_l_tarsal_proximal_phalanx_4"

HAnimHumanoid43.segments.append(HAnimSegment1767)
HAnimSegment1768 = x3d.HAnimSegment()
HAnimSegment1768.USE = "hanim_l_tarsal_middle_phalanx_4"

HAnimHumanoid43.segments.append(HAnimSegment1768)
HAnimSegment1769 = x3d.HAnimSegment()
HAnimSegment1769.USE = "hanim_l_metatarsal_5"

HAnimHumanoid43.segments.append(HAnimSegment1769)
HAnimSegment1770 = x3d.HAnimSegment()
HAnimSegment1770.USE = "hanim_l_tarsal_proximal_phalanx_5"

HAnimHumanoid43.segments.append(HAnimSegment1770)
HAnimSegment1771 = x3d.HAnimSegment()
HAnimSegment1771.USE = "hanim_l_tarsal_middle_phalanx_5"

HAnimHumanoid43.segments.append(HAnimSegment1771)
HAnimSegment1772 = x3d.HAnimSegment()
HAnimSegment1772.USE = "hanim_r_thigh"

HAnimHumanoid43.segments.append(HAnimSegment1772)
HAnimSegment1773 = x3d.HAnimSegment()
HAnimSegment1773.USE = "hanim_r_calf"

HAnimHumanoid43.segments.append(HAnimSegment1773)
HAnimSegment1774 = x3d.HAnimSegment()
HAnimSegment1774.USE = "hanim_r_talus"

HAnimHumanoid43.segments.append(HAnimSegment1774)
HAnimSegment1775 = x3d.HAnimSegment()
HAnimSegment1775.USE = "hanim_r_navicular"

HAnimHumanoid43.segments.append(HAnimSegment1775)
HAnimSegment1776 = x3d.HAnimSegment()
HAnimSegment1776.USE = "hanim_r_cuneiform_1"

HAnimHumanoid43.segments.append(HAnimSegment1776)
HAnimSegment1777 = x3d.HAnimSegment()
HAnimSegment1777.USE = "hanim_r_metatarsal_1"

HAnimHumanoid43.segments.append(HAnimSegment1777)
HAnimSegment1778 = x3d.HAnimSegment()
HAnimSegment1778.USE = "hanim_r_tarsal_proximal_phalanx_1"

HAnimHumanoid43.segments.append(HAnimSegment1778)
HAnimSegment1779 = x3d.HAnimSegment()
HAnimSegment1779.USE = "hanim_r_cuneiform_2"

HAnimHumanoid43.segments.append(HAnimSegment1779)
HAnimSegment1780 = x3d.HAnimSegment()
HAnimSegment1780.USE = "hanim_r_metatarsal_2"

HAnimHumanoid43.segments.append(HAnimSegment1780)
HAnimSegment1781 = x3d.HAnimSegment()
HAnimSegment1781.USE = "hanim_r_tarsal_proximal_phalanx_2"

HAnimHumanoid43.segments.append(HAnimSegment1781)
HAnimSegment1782 = x3d.HAnimSegment()
HAnimSegment1782.USE = "hanim_r_tarsal_middle_phalanx_2"

HAnimHumanoid43.segments.append(HAnimSegment1782)
HAnimSegment1783 = x3d.HAnimSegment()
HAnimSegment1783.USE = "hanim_r_cuneiform_3"

HAnimHumanoid43.segments.append(HAnimSegment1783)
HAnimSegment1784 = x3d.HAnimSegment()
HAnimSegment1784.USE = "hanim_r_metatarsal_3"

HAnimHumanoid43.segments.append(HAnimSegment1784)
HAnimSegment1785 = x3d.HAnimSegment()
HAnimSegment1785.USE = "hanim_r_tarsal_proximal_phalanx_3"

HAnimHumanoid43.segments.append(HAnimSegment1785)
HAnimSegment1786 = x3d.HAnimSegment()
HAnimSegment1786.USE = "hanim_r_tarsal_middle_phalanx_3"

HAnimHumanoid43.segments.append(HAnimSegment1786)
HAnimSegment1787 = x3d.HAnimSegment()
HAnimSegment1787.USE = "hanim_r_calcaneus"

HAnimHumanoid43.segments.append(HAnimSegment1787)
HAnimSegment1788 = x3d.HAnimSegment()
HAnimSegment1788.USE = "hanim_r_cuboid"

HAnimHumanoid43.segments.append(HAnimSegment1788)
HAnimSegment1789 = x3d.HAnimSegment()
HAnimSegment1789.USE = "hanim_r_metatarsal_4"

HAnimHumanoid43.segments.append(HAnimSegment1789)
HAnimSegment1790 = x3d.HAnimSegment()
HAnimSegment1790.USE = "hanim_r_tarsal_proximal_phalanx_4"

HAnimHumanoid43.segments.append(HAnimSegment1790)
HAnimSegment1791 = x3d.HAnimSegment()
HAnimSegment1791.USE = "hanim_r_tarsal_middle_phalanx_4"

HAnimHumanoid43.segments.append(HAnimSegment1791)
HAnimSegment1792 = x3d.HAnimSegment()
HAnimSegment1792.USE = "hanim_r_metatarsal_5"

HAnimHumanoid43.segments.append(HAnimSegment1792)
HAnimSegment1793 = x3d.HAnimSegment()
HAnimSegment1793.USE = "hanim_r_tarsal_proximal_phalanx_5"

HAnimHumanoid43.segments.append(HAnimSegment1793)
HAnimSegment1794 = x3d.HAnimSegment()
HAnimSegment1794.USE = "hanim_r_tarsal_middle_phalanx_5"

HAnimHumanoid43.segments.append(HAnimSegment1794)
HAnimSegment1795 = x3d.HAnimSegment()
HAnimSegment1795.USE = "hanim_l5"

HAnimHumanoid43.segments.append(HAnimSegment1795)
HAnimSegment1796 = x3d.HAnimSegment()
HAnimSegment1796.USE = "hanim_l4"

HAnimHumanoid43.segments.append(HAnimSegment1796)
HAnimSegment1797 = x3d.HAnimSegment()
HAnimSegment1797.USE = "hanim_l3"

HAnimHumanoid43.segments.append(HAnimSegment1797)
HAnimSegment1798 = x3d.HAnimSegment()
HAnimSegment1798.USE = "hanim_l2"

HAnimHumanoid43.segments.append(HAnimSegment1798)
HAnimSegment1799 = x3d.HAnimSegment()
HAnimSegment1799.USE = "hanim_l1"

HAnimHumanoid43.segments.append(HAnimSegment1799)
HAnimSegment1800 = x3d.HAnimSegment()
HAnimSegment1800.USE = "hanim_t12"

HAnimHumanoid43.segments.append(HAnimSegment1800)
HAnimSegment1801 = x3d.HAnimSegment()
HAnimSegment1801.USE = "hanim_t11"

HAnimHumanoid43.segments.append(HAnimSegment1801)
HAnimSegment1802 = x3d.HAnimSegment()
HAnimSegment1802.USE = "hanim_t10"

HAnimHumanoid43.segments.append(HAnimSegment1802)
HAnimSegment1803 = x3d.HAnimSegment()
HAnimSegment1803.USE = "hanim_t9"

HAnimHumanoid43.segments.append(HAnimSegment1803)
HAnimSegment1804 = x3d.HAnimSegment()
HAnimSegment1804.USE = "hanim_t8"

HAnimHumanoid43.segments.append(HAnimSegment1804)
HAnimSegment1805 = x3d.HAnimSegment()
HAnimSegment1805.USE = "hanim_t7"

HAnimHumanoid43.segments.append(HAnimSegment1805)
HAnimSegment1806 = x3d.HAnimSegment()
HAnimSegment1806.USE = "hanim_t6"

HAnimHumanoid43.segments.append(HAnimSegment1806)
HAnimSegment1807 = x3d.HAnimSegment()
HAnimSegment1807.USE = "hanim_t5"

HAnimHumanoid43.segments.append(HAnimSegment1807)
HAnimSegment1808 = x3d.HAnimSegment()
HAnimSegment1808.USE = "hanim_t4"

HAnimHumanoid43.segments.append(HAnimSegment1808)
HAnimSegment1809 = x3d.HAnimSegment()
HAnimSegment1809.USE = "hanim_t3"

HAnimHumanoid43.segments.append(HAnimSegment1809)
HAnimSegment1810 = x3d.HAnimSegment()
HAnimSegment1810.USE = "hanim_t2"

HAnimHumanoid43.segments.append(HAnimSegment1810)
HAnimSegment1811 = x3d.HAnimSegment()
HAnimSegment1811.USE = "hanim_t1"

HAnimHumanoid43.segments.append(HAnimSegment1811)
HAnimSegment1812 = x3d.HAnimSegment()
HAnimSegment1812.USE = "hanim_c7"

HAnimHumanoid43.segments.append(HAnimSegment1812)
HAnimSegment1813 = x3d.HAnimSegment()
HAnimSegment1813.USE = "hanim_c6"

HAnimHumanoid43.segments.append(HAnimSegment1813)
HAnimSegment1814 = x3d.HAnimSegment()
HAnimSegment1814.USE = "hanim_c5"

HAnimHumanoid43.segments.append(HAnimSegment1814)
HAnimSegment1815 = x3d.HAnimSegment()
HAnimSegment1815.USE = "hanim_c4"

HAnimHumanoid43.segments.append(HAnimSegment1815)
HAnimSegment1816 = x3d.HAnimSegment()
HAnimSegment1816.USE = "hanim_c3"

HAnimHumanoid43.segments.append(HAnimSegment1816)
HAnimSegment1817 = x3d.HAnimSegment()
HAnimSegment1817.USE = "hanim_c2"

HAnimHumanoid43.segments.append(HAnimSegment1817)
HAnimSegment1818 = x3d.HAnimSegment()
HAnimSegment1818.USE = "hanim_c1"

HAnimHumanoid43.segments.append(HAnimSegment1818)
HAnimSegment1819 = x3d.HAnimSegment()
HAnimSegment1819.USE = "hanim_skull"

HAnimHumanoid43.segments.append(HAnimSegment1819)
HAnimSegment1820 = x3d.HAnimSegment()
HAnimSegment1820.USE = "hanim_l_clavicle"

HAnimHumanoid43.segments.append(HAnimSegment1820)
HAnimSegment1821 = x3d.HAnimSegment()
HAnimSegment1821.USE = "hanim_l_scapula"

HAnimHumanoid43.segments.append(HAnimSegment1821)
HAnimSegment1822 = x3d.HAnimSegment()
HAnimSegment1822.USE = "hanim_l_upperarm"

HAnimHumanoid43.segments.append(HAnimSegment1822)
HAnimSegment1823 = x3d.HAnimSegment()
HAnimSegment1823.USE = "hanim_l_forearm"

HAnimHumanoid43.segments.append(HAnimSegment1823)
HAnimSegment1824 = x3d.HAnimSegment()
HAnimSegment1824.USE = "hanim_l_carpal"

HAnimHumanoid43.segments.append(HAnimSegment1824)
HAnimSegment1825 = x3d.HAnimSegment()
HAnimSegment1825.USE = "hanim_l_trapezium"

HAnimHumanoid43.segments.append(HAnimSegment1825)
HAnimSegment1826 = x3d.HAnimSegment()
HAnimSegment1826.USE = "hanim_l_metacarpal_1"

HAnimHumanoid43.segments.append(HAnimSegment1826)
HAnimSegment1827 = x3d.HAnimSegment()
HAnimSegment1827.USE = "hanim_l_carpal_proximal_phalanx_1"

HAnimHumanoid43.segments.append(HAnimSegment1827)
HAnimSegment1828 = x3d.HAnimSegment()
HAnimSegment1828.USE = "hanim_l_trapezoid"

HAnimHumanoid43.segments.append(HAnimSegment1828)
HAnimSegment1829 = x3d.HAnimSegment()
HAnimSegment1829.USE = "hanim_l_metacarpal_2"

HAnimHumanoid43.segments.append(HAnimSegment1829)
HAnimSegment1830 = x3d.HAnimSegment()
HAnimSegment1830.USE = "hanim_l_carpal_proximal_phalanx_2"

HAnimHumanoid43.segments.append(HAnimSegment1830)
HAnimSegment1831 = x3d.HAnimSegment()
HAnimSegment1831.USE = "hanim_l_carpal_middle_phalanx_2"

HAnimHumanoid43.segments.append(HAnimSegment1831)
HAnimSegment1832 = x3d.HAnimSegment()
HAnimSegment1832.USE = "hanim_l_capitate"

HAnimHumanoid43.segments.append(HAnimSegment1832)
HAnimSegment1833 = x3d.HAnimSegment()
HAnimSegment1833.USE = "hanim_l_metacarpal_3"

HAnimHumanoid43.segments.append(HAnimSegment1833)
HAnimSegment1834 = x3d.HAnimSegment()
HAnimSegment1834.USE = "hanim_l_carpal_proximal_phalanx_3"

HAnimHumanoid43.segments.append(HAnimSegment1834)
HAnimSegment1835 = x3d.HAnimSegment()
HAnimSegment1835.USE = "hanim_l_carpal_middle_phalanx_3"

HAnimHumanoid43.segments.append(HAnimSegment1835)
HAnimSegment1836 = x3d.HAnimSegment()
HAnimSegment1836.USE = "hanim_l_hamate"

HAnimHumanoid43.segments.append(HAnimSegment1836)
HAnimSegment1837 = x3d.HAnimSegment()
HAnimSegment1837.USE = "hanim_l_metacarpal_4"

HAnimHumanoid43.segments.append(HAnimSegment1837)
HAnimSegment1838 = x3d.HAnimSegment()
HAnimSegment1838.USE = "hanim_l_carpal_proximal_phalanx_4"

HAnimHumanoid43.segments.append(HAnimSegment1838)
HAnimSegment1839 = x3d.HAnimSegment()
HAnimSegment1839.USE = "hanim_l_carpal_middle_phalanx_4"

HAnimHumanoid43.segments.append(HAnimSegment1839)
HAnimSegment1840 = x3d.HAnimSegment()
HAnimSegment1840.USE = "hanim_l_metacarpal_5"

HAnimHumanoid43.segments.append(HAnimSegment1840)
HAnimSegment1841 = x3d.HAnimSegment()
HAnimSegment1841.USE = "hanim_l_carpal_proximal_phalanx_5"

HAnimHumanoid43.segments.append(HAnimSegment1841)
HAnimSegment1842 = x3d.HAnimSegment()
HAnimSegment1842.USE = "hanim_l_carpal_middle_phalanx_5"

HAnimHumanoid43.segments.append(HAnimSegment1842)
HAnimSegment1843 = x3d.HAnimSegment()
HAnimSegment1843.USE = "hanim_r_clavicle"

HAnimHumanoid43.segments.append(HAnimSegment1843)
HAnimSegment1844 = x3d.HAnimSegment()
HAnimSegment1844.USE = "hanim_r_scapula"

HAnimHumanoid43.segments.append(HAnimSegment1844)
HAnimSegment1845 = x3d.HAnimSegment()
HAnimSegment1845.USE = "hanim_r_upperarm"

HAnimHumanoid43.segments.append(HAnimSegment1845)
HAnimSegment1846 = x3d.HAnimSegment()
HAnimSegment1846.USE = "hanim_r_forearm"

HAnimHumanoid43.segments.append(HAnimSegment1846)
HAnimSegment1847 = x3d.HAnimSegment()
HAnimSegment1847.USE = "hanim_r_carpal"

HAnimHumanoid43.segments.append(HAnimSegment1847)
HAnimSegment1848 = x3d.HAnimSegment()
HAnimSegment1848.USE = "hanim_r_trapezium"

HAnimHumanoid43.segments.append(HAnimSegment1848)
HAnimSegment1849 = x3d.HAnimSegment()
HAnimSegment1849.USE = "hanim_r_metacarpal_1"

HAnimHumanoid43.segments.append(HAnimSegment1849)
HAnimSegment1850 = x3d.HAnimSegment()
HAnimSegment1850.USE = "hanim_r_carpal_proximal_phalanx_1"

HAnimHumanoid43.segments.append(HAnimSegment1850)
HAnimSegment1851 = x3d.HAnimSegment()
HAnimSegment1851.USE = "hanim_r_trapezoid"

HAnimHumanoid43.segments.append(HAnimSegment1851)
HAnimSegment1852 = x3d.HAnimSegment()
HAnimSegment1852.USE = "hanim_r_metacarpal_2"

HAnimHumanoid43.segments.append(HAnimSegment1852)
HAnimSegment1853 = x3d.HAnimSegment()
HAnimSegment1853.USE = "hanim_r_carpal_proximal_phalanx_2"

HAnimHumanoid43.segments.append(HAnimSegment1853)
HAnimSegment1854 = x3d.HAnimSegment()
HAnimSegment1854.USE = "hanim_r_carpal_middle_phalanx_2"

HAnimHumanoid43.segments.append(HAnimSegment1854)
HAnimSegment1855 = x3d.HAnimSegment()
HAnimSegment1855.USE = "hanim_r_capitate"

HAnimHumanoid43.segments.append(HAnimSegment1855)
HAnimSegment1856 = x3d.HAnimSegment()
HAnimSegment1856.USE = "hanim_r_metacarpal_3"

HAnimHumanoid43.segments.append(HAnimSegment1856)
HAnimSegment1857 = x3d.HAnimSegment()
HAnimSegment1857.USE = "hanim_r_carpal_proximal_phalanx_3"

HAnimHumanoid43.segments.append(HAnimSegment1857)
HAnimSegment1858 = x3d.HAnimSegment()
HAnimSegment1858.USE = "hanim_r_carpal_middle_phalanx_3"

HAnimHumanoid43.segments.append(HAnimSegment1858)
HAnimSegment1859 = x3d.HAnimSegment()
HAnimSegment1859.USE = "hanim_r_hamate"

HAnimHumanoid43.segments.append(HAnimSegment1859)
HAnimSegment1860 = x3d.HAnimSegment()
HAnimSegment1860.USE = "hanim_r_metacarpal_4"

HAnimHumanoid43.segments.append(HAnimSegment1860)
HAnimSegment1861 = x3d.HAnimSegment()
HAnimSegment1861.USE = "hanim_r_carpal_proximal_phalanx_4"

HAnimHumanoid43.segments.append(HAnimSegment1861)
HAnimSegment1862 = x3d.HAnimSegment()
HAnimSegment1862.USE = "hanim_r_carpal_middle_phalanx_4"

HAnimHumanoid43.segments.append(HAnimSegment1862)
HAnimSegment1863 = x3d.HAnimSegment()
HAnimSegment1863.USE = "hanim_r_metacarpal_5"

HAnimHumanoid43.segments.append(HAnimSegment1863)
HAnimSegment1864 = x3d.HAnimSegment()
HAnimSegment1864.USE = "hanim_r_carpal_proximal_phalanx_5"

HAnimHumanoid43.segments.append(HAnimSegment1864)
HAnimSegment1865 = x3d.HAnimSegment()
HAnimSegment1865.USE = "hanim_r_carpal_middle_phalanx_5"

HAnimHumanoid43.segments.append(HAnimSegment1865)
HAnimSite1866 = x3d.HAnimSite()
HAnimSite1866.USE = "hanim_buttocks_standing_wall_contact_point_pt"

HAnimHumanoid43.sites.append(HAnimSite1866)
HAnimSite1867 = x3d.HAnimSite()
HAnimSite1867.USE = "hanim_crotch_pt"

HAnimHumanoid43.sites.append(HAnimSite1867)
HAnimSite1868 = x3d.HAnimSite()
HAnimSite1868.USE = "hanim_l_asis_pt"

HAnimHumanoid43.sites.append(HAnimSite1868)
HAnimSite1869 = x3d.HAnimSite()
HAnimSite1869.USE = "hanim_l_iliocristale_pt"

HAnimHumanoid43.sites.append(HAnimSite1869)
HAnimSite1870 = x3d.HAnimSite()
HAnimSite1870.USE = "hanim_l_psis_pt"

HAnimHumanoid43.sites.append(HAnimSite1870)
HAnimSite1871 = x3d.HAnimSite()
HAnimSite1871.USE = "hanim_l_trochanterion_pt"

HAnimHumanoid43.sites.append(HAnimSite1871)
HAnimSite1872 = x3d.HAnimSite()
HAnimSite1872.USE = "hanim_r_asis_pt"

HAnimHumanoid43.sites.append(HAnimSite1872)
HAnimSite1873 = x3d.HAnimSite()
HAnimSite1873.USE = "hanim_r_iliocristale_pt"

HAnimHumanoid43.sites.append(HAnimSite1873)
HAnimSite1874 = x3d.HAnimSite()
HAnimSite1874.USE = "hanim_r_psis_pt"

HAnimHumanoid43.sites.append(HAnimSite1874)
HAnimSite1875 = x3d.HAnimSite()
HAnimSite1875.USE = "hanim_r_trochanterion_pt"

HAnimHumanoid43.sites.append(HAnimSite1875)
HAnimSite1876 = x3d.HAnimSite()
HAnimSite1876.USE = "hanim_navel_pt"

HAnimHumanoid43.sites.append(HAnimSite1876)
HAnimSite1877 = x3d.HAnimSite()
HAnimSite1877.USE = "hanim_waist_preferred_anterior_pt"

HAnimHumanoid43.sites.append(HAnimSite1877)
HAnimSite1878 = x3d.HAnimSite()
HAnimSite1878.USE = "hanim_waist_preferred_posterior_pt"

HAnimHumanoid43.sites.append(HAnimSite1878)
HAnimSite1879 = x3d.HAnimSite()
HAnimSite1879.USE = "hanim_l_femoral_lateral_epicondyles_pt"

HAnimHumanoid43.sites.append(HAnimSite1879)
HAnimSite1880 = x3d.HAnimSite()
HAnimSite1880.USE = "hanim_l_femoral_medial_epicondyles_pt"

HAnimHumanoid43.sites.append(HAnimSite1880)
HAnimSite1881 = x3d.HAnimSite()
HAnimSite1881.USE = "hanim_l_knee_crease_pt"

HAnimHumanoid43.sites.append(HAnimSite1881)
HAnimSite1882 = x3d.HAnimSite()
HAnimSite1882.USE = "hanim_l_suprapatella_pt"

HAnimHumanoid43.sites.append(HAnimSite1882)
HAnimSite1883 = x3d.HAnimSite()
HAnimSite1883.USE = "hanim_r_femoral_lateral_epicondyles_pt"

HAnimHumanoid43.sites.append(HAnimSite1883)
HAnimSite1884 = x3d.HAnimSite()
HAnimSite1884.USE = "hanim_r_femoral_medial_epicondyles_pt"

HAnimHumanoid43.sites.append(HAnimSite1884)
HAnimSite1885 = x3d.HAnimSite()
HAnimSite1885.USE = "hanim_r_knee_crease_pt"

HAnimHumanoid43.sites.append(HAnimSite1885)
HAnimSite1886 = x3d.HAnimSite()
HAnimSite1886.USE = "hanim_r_suprapatella_pt"

HAnimHumanoid43.sites.append(HAnimSite1886)
HAnimSite1887 = x3d.HAnimSite()
HAnimSite1887.USE = "hanim_l_lateral_malleolus_pt"

HAnimHumanoid43.sites.append(HAnimSite1887)
HAnimSite1888 = x3d.HAnimSite()
HAnimSite1888.USE = "hanim_l_medial_malleolus_pt"

HAnimHumanoid43.sites.append(HAnimSite1888)
HAnimSite1889 = x3d.HAnimSite()
HAnimSite1889.USE = "hanim_l_tibiale_pt"

HAnimHumanoid43.sites.append(HAnimSite1889)
HAnimSite1890 = x3d.HAnimSite()
HAnimSite1890.USE = "hanim_l_calcaneus_posterior_pt"

HAnimHumanoid43.sites.append(HAnimSite1890)
HAnimSite1891 = x3d.HAnimSite()
HAnimSite1891.USE = "hanim_l_sphyrion_pt"

HAnimHumanoid43.sites.append(HAnimSite1891)
HAnimSite1892 = x3d.HAnimSite()
HAnimSite1892.USE = "hanim_l_metatarsal_phalanx_1_pt"

HAnimHumanoid43.sites.append(HAnimSite1892)
HAnimSite1893 = x3d.HAnimSite()
HAnimSite1893.USE = "hanim_l_tarsal_distal_phalanx_1_tip"

HAnimHumanoid43.sites.append(HAnimSite1893)
HAnimSite1894 = x3d.HAnimSite()
HAnimSite1894.USE = "hanim_l_tarsal_distal_phalanx_2_tip"

HAnimHumanoid43.sites.append(HAnimSite1894)
HAnimSite1895 = x3d.HAnimSite()
HAnimSite1895.USE = "hanim_l_tarsal_distal_phalanx_3_tip"

HAnimHumanoid43.sites.append(HAnimSite1895)
HAnimSite1896 = x3d.HAnimSite()
HAnimSite1896.USE = "hanim_l_tarsal_distal_phalanx_4_tip"

HAnimHumanoid43.sites.append(HAnimSite1896)
HAnimSite1897 = x3d.HAnimSite()
HAnimSite1897.USE = "hanim_l_metatarsal_phalanx_5_pt"

HAnimHumanoid43.sites.append(HAnimSite1897)
HAnimSite1898 = x3d.HAnimSite()
HAnimSite1898.USE = "hanim_l_tarsal_distal_phalanx_5_tip"

HAnimHumanoid43.sites.append(HAnimSite1898)
HAnimSite1899 = x3d.HAnimSite()
HAnimSite1899.USE = "hanim_r_lateral_malleolus_pt"

HAnimHumanoid43.sites.append(HAnimSite1899)
HAnimSite1900 = x3d.HAnimSite()
HAnimSite1900.USE = "hanim_r_medial_malleolus_pt"

HAnimHumanoid43.sites.append(HAnimSite1900)
HAnimSite1901 = x3d.HAnimSite()
HAnimSite1901.USE = "hanim_r_tibiale_pt"

HAnimHumanoid43.sites.append(HAnimSite1901)
HAnimSite1902 = x3d.HAnimSite()
HAnimSite1902.USE = "hanim_r_calcaneus_posterior_pt"

HAnimHumanoid43.sites.append(HAnimSite1902)
HAnimSite1903 = x3d.HAnimSite()
HAnimSite1903.USE = "hanim_r_sphyrion_pt"

HAnimHumanoid43.sites.append(HAnimSite1903)
HAnimSite1904 = x3d.HAnimSite()
HAnimSite1904.USE = "hanim_r_metatarsal_phalanx_1_pt"

HAnimHumanoid43.sites.append(HAnimSite1904)
HAnimSite1905 = x3d.HAnimSite()
HAnimSite1905.USE = "hanim_r_tarsal_distal_phalanx_1_tip"

HAnimHumanoid43.sites.append(HAnimSite1905)
HAnimSite1906 = x3d.HAnimSite()
HAnimSite1906.USE = "hanim_r_tarsal_distal_phalanx_2_tip"

HAnimHumanoid43.sites.append(HAnimSite1906)
HAnimSite1907 = x3d.HAnimSite()
HAnimSite1907.USE = "hanim_r_tarsal_distal_phalanx_3_tip"

HAnimHumanoid43.sites.append(HAnimSite1907)
HAnimSite1908 = x3d.HAnimSite()
HAnimSite1908.USE = "hanim_r_tarsal_distal_phalanx_4_tip"

HAnimHumanoid43.sites.append(HAnimSite1908)
HAnimSite1909 = x3d.HAnimSite()
HAnimSite1909.USE = "hanim_r_metatarsal_phalanx_5_pt"

HAnimHumanoid43.sites.append(HAnimSite1909)
HAnimSite1910 = x3d.HAnimSite()
HAnimSite1910.USE = "hanim_r_tarsal_distal_phalanx_5_tip"

HAnimHumanoid43.sites.append(HAnimSite1910)
HAnimSite1911 = x3d.HAnimSite()
HAnimSite1911.USE = "hanim_l_rib10_pt"

HAnimHumanoid43.sites.append(HAnimSite1911)
HAnimSite1912 = x3d.HAnimSite()
HAnimSite1912.USE = "hanim_r_rib10_pt"

HAnimHumanoid43.sites.append(HAnimSite1912)
HAnimSite1913 = x3d.HAnimSite()
HAnimSite1913.USE = "hanim_spine_2_middle_back_pt"

HAnimHumanoid43.sites.append(HAnimSite1913)
HAnimSite1914 = x3d.HAnimSite()
HAnimSite1914.USE = "hanim_substernale_pt"

HAnimHumanoid43.sites.append(HAnimSite1914)
HAnimSite1915 = x3d.HAnimSite()
HAnimSite1915.USE = "hanim_l_thelion_pt"

HAnimHumanoid43.sites.append(HAnimSite1915)
HAnimSite1916 = x3d.HAnimSite()
HAnimSite1916.USE = "hanim_r_thelion_pt"

HAnimHumanoid43.sites.append(HAnimSite1916)
HAnimSite1917 = x3d.HAnimSite()
HAnimSite1917.USE = "hanim_l_chest_midsagittal_plane_pt"

HAnimHumanoid43.sites.append(HAnimSite1917)
HAnimSite1918 = x3d.HAnimSite()
HAnimSite1918.USE = "hanim_mesosternale_pt"

HAnimHumanoid43.sites.append(HAnimSite1918)
HAnimSite1919 = x3d.HAnimSite()
HAnimSite1919.USE = "hanim_r_chest_midsagittal_plane_pt"

HAnimHumanoid43.sites.append(HAnimSite1919)
HAnimSite1920 = x3d.HAnimSite()
HAnimSite1920.USE = "hanim_rear_center_midsagittal_plane_pt"

HAnimHumanoid43.sites.append(HAnimSite1920)
HAnimSite1921 = x3d.HAnimSite()
HAnimSite1921.USE = "hanim_spine_1_middle_back_pt"

HAnimHumanoid43.sites.append(HAnimSite1921)
HAnimSite1922 = x3d.HAnimSite()
HAnimSite1922.USE = "hanim_cervicale_pt"

HAnimHumanoid43.sites.append(HAnimSite1922)
HAnimSite1923 = x3d.HAnimSite()
HAnimSite1923.USE = "hanim_suprasternale_pt"

HAnimHumanoid43.sites.append(HAnimSite1923)
HAnimSite1924 = x3d.HAnimSite()
HAnimSite1924.USE = "hanim_l_neck_base_pt"

HAnimHumanoid43.sites.append(HAnimSite1924)
HAnimSite1925 = x3d.HAnimSite()
HAnimSite1925.USE = "hanim_r_neck_base_pt"

HAnimHumanoid43.sites.append(HAnimSite1925)
HAnimSite1926 = x3d.HAnimSite()
HAnimSite1926.USE = "hanim_l_acromion_pt"

HAnimHumanoid43.sites.append(HAnimSite1926)
HAnimSite1927 = x3d.HAnimSite()
HAnimSite1927.USE = "hanim_l_axilla_distal_pt"

HAnimHumanoid43.sites.append(HAnimSite1927)
HAnimSite1928 = x3d.HAnimSite()
HAnimSite1928.USE = "hanim_l_axilla_posterior_folds_pt"

HAnimHumanoid43.sites.append(HAnimSite1928)
HAnimSite1929 = x3d.HAnimSite()
HAnimSite1929.USE = "hanim_l_axilla_proximal_pt"

HAnimHumanoid43.sites.append(HAnimSite1929)
HAnimSite1930 = x3d.HAnimSite()
HAnimSite1930.USE = "hanim_l_clavicale_pt"

HAnimHumanoid43.sites.append(HAnimSite1930)
HAnimSite1931 = x3d.HAnimSite()
HAnimSite1931.USE = "hanim_r_acromion_pt"

HAnimHumanoid43.sites.append(HAnimSite1931)
HAnimSite1932 = x3d.HAnimSite()
HAnimSite1932.USE = "hanim_r_axilla_distal_pt"

HAnimHumanoid43.sites.append(HAnimSite1932)
HAnimSite1933 = x3d.HAnimSite()
HAnimSite1933.USE = "hanim_r_axilla_posterior_folds_pt"

HAnimHumanoid43.sites.append(HAnimSite1933)
HAnimSite1934 = x3d.HAnimSite()
HAnimSite1934.USE = "hanim_r_axilla_proximal_pt"

HAnimHumanoid43.sites.append(HAnimSite1934)
HAnimSite1935 = x3d.HAnimSite()
HAnimSite1935.USE = "hanim_r_clavicale_pt"

HAnimHumanoid43.sites.append(HAnimSite1935)
HAnimSite1936 = x3d.HAnimSite()
HAnimSite1936.USE = "hanim_adams_apple_pt"

HAnimHumanoid43.sites.append(HAnimSite1936)
HAnimSite1937 = x3d.HAnimSite()
HAnimSite1937.USE = "hanim_glabella_pt"

HAnimHumanoid43.sites.append(HAnimSite1937)
HAnimSite1938 = x3d.HAnimSite()
HAnimSite1938.USE = "hanim_l_ectocanthus_pt"

HAnimHumanoid43.sites.append(HAnimSite1938)
HAnimSite1939 = x3d.HAnimSite()
HAnimSite1939.USE = "hanim_l_infraorbitale_pt"

HAnimHumanoid43.sites.append(HAnimSite1939)
HAnimSite1940 = x3d.HAnimSite()
HAnimSite1940.USE = "hanim_l_tragion_pt"

HAnimHumanoid43.sites.append(HAnimSite1940)
HAnimSite1941 = x3d.HAnimSite()
HAnimSite1941.USE = "hanim_nuchale_pt"

HAnimHumanoid43.sites.append(HAnimSite1941)
HAnimSite1942 = x3d.HAnimSite()
HAnimSite1942.USE = "hanim_opisthocranion_pt"

HAnimHumanoid43.sites.append(HAnimSite1942)
HAnimSite1943 = x3d.HAnimSite()
HAnimSite1943.USE = "hanim_r_ectocanthus_pt"

HAnimHumanoid43.sites.append(HAnimSite1943)
HAnimSite1944 = x3d.HAnimSite()
HAnimSite1944.USE = "hanim_r_infraorbitale_pt"

HAnimHumanoid43.sites.append(HAnimSite1944)
HAnimSite1945 = x3d.HAnimSite()
HAnimSite1945.USE = "hanim_r_tragion_pt"

HAnimHumanoid43.sites.append(HAnimSite1945)
HAnimSite1946 = x3d.HAnimSite()
HAnimSite1946.USE = "hanim_sellion_pt"

HAnimHumanoid43.sites.append(HAnimSite1946)
HAnimSite1947 = x3d.HAnimSite()
HAnimSite1947.USE = "hanim_skull_vertex_pt"

HAnimHumanoid43.sites.append(HAnimSite1947)
HAnimSite1948 = x3d.HAnimSite()
HAnimSite1948.USE = "hanim_l_gonion_pt"

HAnimHumanoid43.sites.append(HAnimSite1948)
HAnimSite1949 = x3d.HAnimSite()
HAnimSite1949.USE = "hanim_menton_pt"

HAnimHumanoid43.sites.append(HAnimSite1949)
HAnimSite1950 = x3d.HAnimSite()
HAnimSite1950.USE = "hanim_r_gonion_pt"

HAnimHumanoid43.sites.append(HAnimSite1950)
HAnimSite1951 = x3d.HAnimSite()
HAnimSite1951.USE = "hanim_supramenton_pt"

HAnimHumanoid43.sites.append(HAnimSite1951)
HAnimSite1952 = x3d.HAnimSite()
HAnimSite1952.USE = "hanim_l_bideltoid_pt"

HAnimHumanoid43.sites.append(HAnimSite1952)
HAnimSite1953 = x3d.HAnimSite()
HAnimSite1953.USE = "hanim_l_humeral_lateral_epicondyles_pt"

HAnimHumanoid43.sites.append(HAnimSite1953)
HAnimSite1954 = x3d.HAnimSite()
HAnimSite1954.USE = "hanim_l_humeral_medial_epicondyles_pt"

HAnimHumanoid43.sites.append(HAnimSite1954)
HAnimSite1955 = x3d.HAnimSite()
HAnimSite1955.USE = "hanim_l_olecranon_pt"

HAnimHumanoid43.sites.append(HAnimSite1955)
HAnimSite1956 = x3d.HAnimSite()
HAnimSite1956.USE = "hanim_l_radial_styloid_pt"

HAnimHumanoid43.sites.append(HAnimSite1956)
HAnimSite1957 = x3d.HAnimSite()
HAnimSite1957.USE = "hanim_l_radiale_pt"

HAnimHumanoid43.sites.append(HAnimSite1957)
HAnimSite1958 = x3d.HAnimSite()
HAnimSite1958.USE = "hanim_l_ulnar_styloid_pt"

HAnimHumanoid43.sites.append(HAnimSite1958)
HAnimSite1959 = x3d.HAnimSite()
HAnimSite1959.USE = "hanim_l_carpal_distal_phalanx_1_tip"

HAnimHumanoid43.sites.append(HAnimSite1959)
HAnimSite1960 = x3d.HAnimSite()
HAnimSite1960.USE = "hanim_l_metacarpal_phalanx_2_pt"

HAnimHumanoid43.sites.append(HAnimSite1960)
HAnimSite1961 = x3d.HAnimSite()
HAnimSite1961.USE = "hanim_l_carpal_distal_phalanx_2_tip"

HAnimHumanoid43.sites.append(HAnimSite1961)
HAnimSite1962 = x3d.HAnimSite()
HAnimSite1962.USE = "hanim_l_dactylion_pt"

HAnimHumanoid43.sites.append(HAnimSite1962)
HAnimSite1963 = x3d.HAnimSite()
HAnimSite1963.USE = "hanim_l_metacarpal_phalanx_3_pt"

HAnimHumanoid43.sites.append(HAnimSite1963)
HAnimSite1964 = x3d.HAnimSite()
HAnimSite1964.USE = "hanim_l_carpal_distal_phalanx_3_tip"

HAnimHumanoid43.sites.append(HAnimSite1964)
HAnimSite1965 = x3d.HAnimSite()
HAnimSite1965.USE = "hanim_l_metacarpal_phalanx_5_pt"

HAnimHumanoid43.sites.append(HAnimSite1965)
HAnimSite1966 = x3d.HAnimSite()
HAnimSite1966.USE = "hanim_l_carpal_distal_phalanx_4_tip"

HAnimHumanoid43.sites.append(HAnimSite1966)
HAnimSite1967 = x3d.HAnimSite()
HAnimSite1967.USE = "hanim_l_carpal_distal_phalanx_5_tip"

HAnimHumanoid43.sites.append(HAnimSite1967)
HAnimSite1968 = x3d.HAnimSite()
HAnimSite1968.USE = "hanim_r_bideltoid_pt"

HAnimHumanoid43.sites.append(HAnimSite1968)
HAnimSite1969 = x3d.HAnimSite()
HAnimSite1969.USE = "hanim_r_humeral_lateral_epicondyles_pt"

HAnimHumanoid43.sites.append(HAnimSite1969)
HAnimSite1970 = x3d.HAnimSite()
HAnimSite1970.USE = "hanim_r_humeral_medial_epicondyles_pt"

HAnimHumanoid43.sites.append(HAnimSite1970)
HAnimSite1971 = x3d.HAnimSite()
HAnimSite1971.USE = "hanim_r_olecranon_pt"

HAnimHumanoid43.sites.append(HAnimSite1971)
HAnimSite1972 = x3d.HAnimSite()
HAnimSite1972.USE = "hanim_r_radial_styloid_pt"

HAnimHumanoid43.sites.append(HAnimSite1972)
HAnimSite1973 = x3d.HAnimSite()
HAnimSite1973.USE = "hanim_r_radiale_pt"

HAnimHumanoid43.sites.append(HAnimSite1973)
HAnimSite1974 = x3d.HAnimSite()
HAnimSite1974.USE = "hanim_r_ulnar_styloid_pt"

HAnimHumanoid43.sites.append(HAnimSite1974)
HAnimSite1975 = x3d.HAnimSite()
HAnimSite1975.USE = "hanim_r_carpal_distal_phalanx_1_tip"

HAnimHumanoid43.sites.append(HAnimSite1975)
HAnimSite1976 = x3d.HAnimSite()
HAnimSite1976.USE = "hanim_r_metacarpal_phalanx_2_pt"

HAnimHumanoid43.sites.append(HAnimSite1976)
HAnimSite1977 = x3d.HAnimSite()
HAnimSite1977.USE = "hanim_r_carpal_distal_phalanx_2_tip"

HAnimHumanoid43.sites.append(HAnimSite1977)
HAnimSite1978 = x3d.HAnimSite()
HAnimSite1978.USE = "hanim_r_dactylion_pt"

HAnimHumanoid43.sites.append(HAnimSite1978)
HAnimSite1979 = x3d.HAnimSite()
HAnimSite1979.USE = "hanim_r_metacarpal_phalanx_3_pt"

HAnimHumanoid43.sites.append(HAnimSite1979)
HAnimSite1980 = x3d.HAnimSite()
HAnimSite1980.USE = "hanim_r_carpal_distal_phalanx_3_tip"

HAnimHumanoid43.sites.append(HAnimSite1980)
HAnimSite1981 = x3d.HAnimSite()
HAnimSite1981.USE = "hanim_r_metacarpal_phalanx_5_pt"

HAnimHumanoid43.sites.append(HAnimSite1981)
HAnimSite1982 = x3d.HAnimSite()
HAnimSite1982.USE = "hanim_r_carpal_distal_phalanx_4_tip"

HAnimHumanoid43.sites.append(HAnimSite1982)
HAnimSite1983 = x3d.HAnimSite()
HAnimSite1983.USE = "hanim_r_carpal_distal_phalanx_5_tip"

HAnimHumanoid43.sites.append(HAnimSite1983)

Scene11.children.append(HAnimHumanoid43)

X3D0.Scene = Scene11
f = open("../data/Humanoid4_1.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Humanoid4_1.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/Humanoid4_1.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
