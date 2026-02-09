print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta6.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "generator"
meta7.content = "h2.pl"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "modified"
meta8.content = "Mon, 09 Feb 2026 07:11:33 GMT"

head1.children.append(meta8)

X3D0.head = head1
Scene9 = x3d.Scene()
Transform10 = x3d.Transform()
Shape11 = x3d.Shape(DEF="AxisLinesShape")
IndexedLineSet12 = x3d.IndexedLineSet()
IndexedLineSet12.colorPerVertex = False
IndexedLineSet12.colorIndex = [0,1,2]
IndexedLineSet12.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Color13 = x3d.Color()
Color13.color = [(1, 0, 0),(0, 0.6, 0),(0, 0, 1)]

IndexedLineSet12.color = Color13
Coordinate14 = x3d.Coordinate()
Coordinate14.point = [(0, 0, 0),(0.1, 0, 0),(0, 0.1, 0),(0, 0, 0.1)]

IndexedLineSet12.coord = Coordinate14

Shape11.geometry = IndexedLineSet12

Transform10.children.append(Shape11)

Scene9.children.append(Transform10)
Group15 = x3d.Group()
Transform16 = x3d.Transform()
Transform17 = x3d.Transform()
Transform17.translation = [0,2,0]
Shape18 = x3d.Shape(DEF="HAnimRootShape")
Appearance19 = x3d.Appearance()
Material20 = x3d.Material(DEF="HAnimRootMaterial")
Material20.diffuseColor = [0.8,0,0]
Material20.transparency = 0.3

Appearance19.material = Material20

Shape18.appearance = Appearance19
Sphere21 = x3d.Sphere()
Sphere21.radius = 0.02

Shape18.geometry = Sphere21

Transform17.children.append(Shape18)

Transform16.children.append(Transform17)
Transform22 = x3d.Transform()
Transform22.translation = [0,2.1,0]
Shape23 = x3d.Shape(DEF="HAnimJointShape")
Appearance24 = x3d.Appearance()
Material25 = x3d.Material(DEF="HAnimJointMaterial")
Material25.diffuseColor = [0,0,0.8]
Material25.transparency = 0.3

Appearance24.material = Material25

Shape23.appearance = Appearance24
Sphere26 = x3d.Sphere()
Sphere26.radius = 0.02

Shape23.geometry = Sphere26

Transform22.children.append(Shape23)

Transform16.children.append(Transform22)
Transform27 = x3d.Transform()
Transform27.translation = [0,2.05,0]
Shape28 = x3d.Shape(DEF="HAnimSegmentLine")
LineSet29 = x3d.LineSet()
LineSet29.vertexCount = [2]
ColorRGBA30 = x3d.ColorRGBA(DEF="HAnimSegmentLineColorRGBA")
ColorRGBA30.color = [(1, 1, 0, 1),(1, 1, 0, 0.1)]

LineSet29.color = ColorRGBA30
Coordinate31 = x3d.Coordinate()
Coordinate31.point = [(-0.05, 0, 0),(0.05, 0, 0)]

LineSet29.coord = Coordinate31

Shape28.geometry = LineSet29

Transform27.children.append(Shape28)

Transform16.children.append(Transform27)
Transform32 = x3d.Transform()
Transform32.translation = [0,2.1,0]
Shape33 = x3d.Shape(DEF="HAnimSiteShape")
Appearance34 = x3d.Appearance()
Material35 = x3d.Material()
Material35.diffuseColor = [1,1,0]
Material35.transparency = 0.3

Appearance34.material = Material35

Shape33.appearance = Appearance34
IndexedFaceSet36 = x3d.IndexedFaceSet(DEF="DiamondIFS")
IndexedFaceSet36.solid = False
IndexedFaceSet36.creaseAngle = 0.5
IndexedFaceSet36.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA37 = x3d.ColorRGBA(DEF="HAnimSiteColorRGBA")
ColorRGBA37.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet36.color = ColorRGBA37
Coordinate38 = x3d.Coordinate()
Coordinate38.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet36.coord = Coordinate38

Shape33.geometry = IndexedFaceSet36

Transform32.children.append(Shape33)

Transform16.children.append(Transform32)

Group15.children.append(Transform16)

Scene9.children.append(Group15)
NavigationInfo39 = x3d.NavigationInfo()
NavigationInfo39.speed = 1.5

Scene9.children.append(NavigationInfo39)
Viewpoint40 = x3d.Viewpoint()
Viewpoint40.description = "default"

Scene9.children.append(Viewpoint40)
HAnimHumanoid41 = x3d.HAnimHumanoid(DEF="hanim_HAnim")
HAnimHumanoid41.name = "HAnim"
HAnimHumanoid41.info = ["humanoidVersion=2.0"]
HAnimHumanoid41.version = "2.0"
HAnimJoint42 = x3d.HAnimJoint(DEF="hanim_humanoid_root")
HAnimJoint42.name = "humanoid_root"
HAnimJoint42.center = [0,0.824,0.0277]
HAnimSegment43 = x3d.HAnimSegment(DEF="hanim_sacrum")
HAnimSegment43.name = "sacrum"
Transform44 = x3d.Transform()
Transform44.translation = [0,0.824,0.0277]
Transform45 = x3d.Transform()
Shape46 = x3d.Shape(USE="HAnimJointShape")

Transform45.children.append(Shape46)

Transform44.children.append(Transform45)

HAnimSegment43.children.append(Transform44)
Shape47 = x3d.Shape()
LineSet48 = x3d.LineSet()
LineSet48.vertexCount = [2]
ColorRGBA49 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet48.color = ColorRGBA49
Coordinate50 = x3d.Coordinate()
Coordinate50.point = [(0, 0.824, 0.0277),(0, 0.9149, 0.0016)]

LineSet48.coord = Coordinate50

Shape47.geometry = LineSet48

HAnimSegment43.children.append(Shape47)
HAnimSite51 = x3d.HAnimSite(DEF="hanim_buttocks_standing_wall_contact_point_pt")
HAnimSite51.name = "buttocks_standing_wall_contact_point_pt"
TouchSensor52 = x3d.TouchSensor()
TouchSensor52.description = "HAnimSite buttocks_standing_wall_contact_point_pt"

HAnimSite51.children.append(TouchSensor52)
Shape53 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite51.children.append(Shape53)

HAnimSegment43.children.append(HAnimSite51)
HAnimSite54 = x3d.HAnimSite(DEF="hanim_crotch_pt")
HAnimSite54.name = "crotch_pt"
HAnimSite54.translation = [0.0034,0.8266,0.0257]
TouchSensor55 = x3d.TouchSensor()
TouchSensor55.description = "HAnimSite crotch_pt"

HAnimSite54.children.append(TouchSensor55)
Shape56 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite54.children.append(Shape56)

HAnimSegment43.children.append(HAnimSite54)
HAnimSite57 = x3d.HAnimSite(DEF="hanim_l_asis_pt")
HAnimSite57.name = "l_asis_pt"
HAnimSite57.translation = [0.0925,0.9983,0.1052]
TouchSensor58 = x3d.TouchSensor()
TouchSensor58.description = "HAnimSite l_asis_pt"

HAnimSite57.children.append(TouchSensor58)
Shape59 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite57.children.append(Shape59)

HAnimSegment43.children.append(HAnimSite57)
HAnimSite60 = x3d.HAnimSite(DEF="hanim_l_iliocristale_pt")
HAnimSite60.name = "l_iliocristale_pt"
HAnimSite60.translation = [0.1612,1.0537,0.0008]
TouchSensor61 = x3d.TouchSensor()
TouchSensor61.description = "HAnimSite l_iliocristale_pt"

HAnimSite60.children.append(TouchSensor61)
Shape62 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite60.children.append(Shape62)

HAnimSegment43.children.append(HAnimSite60)
HAnimSite63 = x3d.HAnimSite(DEF="hanim_l_psis_pt")
HAnimSite63.name = "l_psis_pt"
HAnimSite63.translation = [0.0774,1.019,-0.1151]
TouchSensor64 = x3d.TouchSensor()
TouchSensor64.description = "HAnimSite l_psis_pt"

HAnimSite63.children.append(TouchSensor64)
Shape65 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite63.children.append(Shape65)

HAnimSegment43.children.append(HAnimSite63)
HAnimSite66 = x3d.HAnimSite(DEF="hanim_l_trochanterion_pt")
HAnimSite66.name = "l_trochanterion_pt"
HAnimSite66.translation = [0.1677,0.8336,0.0303]
TouchSensor67 = x3d.TouchSensor()
TouchSensor67.description = "HAnimSite l_trochanterion_pt"

HAnimSite66.children.append(TouchSensor67)
Shape68 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite66.children.append(Shape68)

HAnimSegment43.children.append(HAnimSite66)
HAnimSite69 = x3d.HAnimSite(DEF="hanim_r_asis_pt")
HAnimSite69.name = "r_asis_pt"
HAnimSite69.translation = [-0.0887,1.0021,0.1112]
TouchSensor70 = x3d.TouchSensor()
TouchSensor70.description = "HAnimSite r_asis_pt"

HAnimSite69.children.append(TouchSensor70)
Shape71 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite69.children.append(Shape71)

HAnimSegment43.children.append(HAnimSite69)
HAnimSite72 = x3d.HAnimSite(DEF="hanim_r_iliocristale_pt")
HAnimSite72.name = "r_iliocristale_pt"
HAnimSite72.translation = [-0.1525,1.0628,0.0035]
TouchSensor73 = x3d.TouchSensor()
TouchSensor73.description = "HAnimSite r_iliocristale_pt"

HAnimSite72.children.append(TouchSensor73)
Shape74 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite72.children.append(Shape74)

HAnimSegment43.children.append(HAnimSite72)
HAnimSite75 = x3d.HAnimSite(DEF="hanim_r_psis_pt")
HAnimSite75.name = "r_psis_pt"
HAnimSite75.translation = [-0.0716,1.019,-0.1138]
TouchSensor76 = x3d.TouchSensor()
TouchSensor76.description = "HAnimSite r_psis_pt"

HAnimSite75.children.append(TouchSensor76)
Shape77 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite75.children.append(Shape77)

HAnimSegment43.children.append(HAnimSite75)
HAnimSite78 = x3d.HAnimSite(DEF="hanim_r_trochanterion_pt")
HAnimSite78.name = "r_trochanterion_pt"
HAnimSite78.translation = [-0.1689,0.8419,0.0352]
TouchSensor79 = x3d.TouchSensor()
TouchSensor79.description = "HAnimSite r_trochanterion_pt"

HAnimSite78.children.append(TouchSensor79)
Shape80 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite78.children.append(Shape80)

HAnimSegment43.children.append(HAnimSite78)
Shape81 = x3d.Shape()
LineSet82 = x3d.LineSet()
LineSet82.vertexCount = [2]
ColorRGBA83 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet82.color = ColorRGBA83
Coordinate84 = x3d.Coordinate()
Coordinate84.point = [(0, 0.824, 0.0277),(0.0028, 1.0568, -0.0776)]

LineSet82.coord = Coordinate84

Shape81.geometry = LineSet82

HAnimSegment43.children.append(Shape81)
HAnimSite85 = x3d.HAnimSite(DEF="hanim_navel_pt")
HAnimSite85.name = "navel_pt"
HAnimSite85.translation = [0.0069,1.0966,0.1017]
TouchSensor86 = x3d.TouchSensor()
TouchSensor86.description = "HAnimSite navel_pt"

HAnimSite85.children.append(TouchSensor86)
Shape87 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite85.children.append(Shape87)

HAnimSegment43.children.append(HAnimSite85)
HAnimSite88 = x3d.HAnimSite(DEF="hanim_waist_preferred_anterior_pt")
HAnimSite88.name = "waist_preferred_anterior_pt"
TouchSensor89 = x3d.TouchSensor()
TouchSensor89.description = "HAnimSite waist_preferred_anterior_pt"

HAnimSite88.children.append(TouchSensor89)
Shape90 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite88.children.append(Shape90)

HAnimSegment43.children.append(HAnimSite88)
HAnimSite91 = x3d.HAnimSite(DEF="hanim_waist_preferred_posterior_pt")
HAnimSite91.name = "waist_preferred_posterior_pt"
HAnimSite91.translation = [0.29,1.0915,-0.1091]
TouchSensor92 = x3d.TouchSensor()
TouchSensor92.description = "HAnimSite waist_preferred_posterior_pt"

HAnimSite91.children.append(TouchSensor92)
Shape93 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite91.children.append(Shape93)

HAnimSegment43.children.append(HAnimSite91)

HAnimJoint42.children.append(HAnimSegment43)
HAnimJoint94 = x3d.HAnimJoint(DEF="hanim_sacroiliac")
HAnimJoint94.name = "sacroiliac"
HAnimJoint94.center = [0,0.9149,0.0016]
HAnimSegment95 = x3d.HAnimSegment(DEF="hanim_pelvis")
HAnimSegment95.name = "pelvis"
Transform96 = x3d.Transform()
Transform96.translation = [0,0.9149,0.0016]
Transform97 = x3d.Transform()
Shape98 = x3d.Shape(USE="HAnimJointShape")

Transform97.children.append(Shape98)

Transform96.children.append(Transform97)

HAnimSegment95.children.append(Transform96)
Shape99 = x3d.Shape()
LineSet100 = x3d.LineSet()
LineSet100.vertexCount = [2]
ColorRGBA101 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet100.color = ColorRGBA101
Coordinate102 = x3d.Coordinate()
Coordinate102.point = [(0, 0.9149, 0.0016),(0.0961, 0.9124, -0.0001)]

LineSet100.coord = Coordinate102

Shape99.geometry = LineSet100

HAnimSegment95.children.append(Shape99)
HAnimSite103 = x3d.HAnimSite(DEF="hanim_l_femoral_lateral_epicondyles_pt")
HAnimSite103.name = "l_femoral_lateral_epicondyles_pt"
HAnimSite103.translation = [0.1598,0.4967,0.0297]
TouchSensor104 = x3d.TouchSensor()
TouchSensor104.description = "HAnimSite l_femoral_lateral_epicondyles_pt"

HAnimSite103.children.append(TouchSensor104)
Shape105 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite103.children.append(Shape105)

HAnimSegment95.children.append(HAnimSite103)
HAnimSite106 = x3d.HAnimSite(DEF="hanim_l_femoral_medial_epicondyles_pt")
HAnimSite106.name = "l_femoral_medial_epicondyles_pt"
HAnimSite106.translation = [0.0398,0.4946,0.0303]
TouchSensor107 = x3d.TouchSensor()
TouchSensor107.description = "HAnimSite l_femoral_medial_epicondyles_pt"

HAnimSite106.children.append(TouchSensor107)
Shape108 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite106.children.append(Shape108)

HAnimSegment95.children.append(HAnimSite106)
HAnimSite109 = x3d.HAnimSite(DEF="hanim_l_knee_crease_pt")
HAnimSite109.name = "l_knee_crease_pt"
HAnimSite109.translation = [0.0993,0.4881,-0.0309]
TouchSensor110 = x3d.TouchSensor()
TouchSensor110.description = "HAnimSite l_knee_crease_pt"

HAnimSite109.children.append(TouchSensor110)
Shape111 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite109.children.append(Shape111)

HAnimSegment95.children.append(HAnimSite109)
HAnimSite112 = x3d.HAnimSite(DEF="hanim_l_suprapatella_pt")
HAnimSite112.name = "l_suprapatella_pt"
TouchSensor113 = x3d.TouchSensor()
TouchSensor113.description = "HAnimSite l_suprapatella_pt"

HAnimSite112.children.append(TouchSensor113)
Shape114 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite112.children.append(Shape114)

HAnimSegment95.children.append(HAnimSite112)
Shape115 = x3d.Shape()
LineSet116 = x3d.LineSet()
LineSet116.vertexCount = [2]
ColorRGBA117 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet116.color = ColorRGBA117
Coordinate118 = x3d.Coordinate()
Coordinate118.point = [(0, 0.9149, 0.0016),(-0.095, 0.9171, 0.0029)]

LineSet116.coord = Coordinate118

Shape115.geometry = LineSet116

HAnimSegment95.children.append(Shape115)
HAnimSite119 = x3d.HAnimSite(DEF="hanim_r_femoral_lateral_epicondyles_pt")
HAnimSite119.name = "r_femoral_lateral_epicondyles_pt"
HAnimSite119.translation = [-0.1421,0.4992,0.031]
TouchSensor120 = x3d.TouchSensor()
TouchSensor120.description = "HAnimSite r_femoral_lateral_epicondyles_pt"

HAnimSite119.children.append(TouchSensor120)
Shape121 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite119.children.append(Shape121)

HAnimSegment95.children.append(HAnimSite119)
HAnimSite122 = x3d.HAnimSite(DEF="hanim_r_femoral_medial_epicondyles_pt")
HAnimSite122.name = "r_femoral_medial_epicondyles_pt"
HAnimSite122.translation = [-0.0221,0.5014,0.0289]
TouchSensor123 = x3d.TouchSensor()
TouchSensor123.description = "HAnimSite r_femoral_medial_epicondyles_pt"

HAnimSite122.children.append(TouchSensor123)
Shape124 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite122.children.append(Shape124)

HAnimSegment95.children.append(HAnimSite122)
HAnimSite125 = x3d.HAnimSite(DEF="hanim_r_knee_crease_pt")
HAnimSite125.name = "r_knee_crease_pt"
HAnimSite125.translation = [-0.0825,0.4932,-0.0326]
TouchSensor126 = x3d.TouchSensor()
TouchSensor126.description = "HAnimSite r_knee_crease_pt"

HAnimSite125.children.append(TouchSensor126)
Shape127 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite125.children.append(Shape127)

HAnimSegment95.children.append(HAnimSite125)
HAnimSite128 = x3d.HAnimSite(DEF="hanim_r_suprapatella_pt")
HAnimSite128.name = "r_suprapatella_pt"
TouchSensor129 = x3d.TouchSensor()
TouchSensor129.description = "HAnimSite r_suprapatella_pt"

HAnimSite128.children.append(TouchSensor129)
Shape130 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite128.children.append(Shape130)

HAnimSegment95.children.append(HAnimSite128)

HAnimJoint94.children.append(HAnimSegment95)
HAnimJoint131 = x3d.HAnimJoint(DEF="hanim_l_hip")
HAnimJoint131.name = "l_hip"
HAnimJoint131.center = [0.0961,0.9124,-0.0001]
HAnimSegment132 = x3d.HAnimSegment(DEF="hanim_l_thigh")
HAnimSegment132.name = "l_thigh"
Transform133 = x3d.Transform()
Transform133.translation = [0.0961,0.9124,-0.0001]
Transform134 = x3d.Transform()
Shape135 = x3d.Shape(USE="HAnimJointShape")

Transform134.children.append(Shape135)

Transform133.children.append(Transform134)

HAnimSegment132.children.append(Transform133)
Shape136 = x3d.Shape()
LineSet137 = x3d.LineSet()
LineSet137.vertexCount = [2]
ColorRGBA138 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet137.color = ColorRGBA138
Coordinate139 = x3d.Coordinate()
Coordinate139.point = [(0.0961, 0.9124, -0.0001),(0.104, 0.4867, 0.0308)]

LineSet137.coord = Coordinate139

Shape136.geometry = LineSet137

HAnimSegment132.children.append(Shape136)
HAnimSite140 = x3d.HAnimSite(DEF="hanim_l_lateral_malleolus_pt")
HAnimSite140.name = "l_lateral_malleolus_pt"
HAnimSite140.translation = [0.1308,0.0597,-0.1032]
TouchSensor141 = x3d.TouchSensor()
TouchSensor141.description = "HAnimSite l_lateral_malleolus_pt"

HAnimSite140.children.append(TouchSensor141)
Shape142 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite140.children.append(Shape142)

HAnimSegment132.children.append(HAnimSite140)
HAnimSite143 = x3d.HAnimSite(DEF="hanim_l_medial_malleolus_pt")
HAnimSite143.name = "l_medial_malleolus_pt"
HAnimSite143.translation = [0.089,0.0716,-0.0881]
TouchSensor144 = x3d.TouchSensor()
TouchSensor144.description = "HAnimSite l_medial_malleolus_pt"

HAnimSite143.children.append(TouchSensor144)
Shape145 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite143.children.append(Shape145)

HAnimSegment132.children.append(HAnimSite143)
HAnimSite146 = x3d.HAnimSite(DEF="hanim_l_tibiale_pt")
HAnimSite146.name = "l_tibiale_pt"
TouchSensor147 = x3d.TouchSensor()
TouchSensor147.description = "HAnimSite l_tibiale_pt"

HAnimSite146.children.append(TouchSensor147)
Shape148 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite146.children.append(Shape148)

HAnimSegment132.children.append(HAnimSite146)

HAnimJoint131.children.append(HAnimSegment132)
HAnimJoint149 = x3d.HAnimJoint(DEF="hanim_l_knee")
HAnimJoint149.name = "l_knee"
HAnimJoint149.center = [0.104,0.4867,0.0308]
HAnimSegment150 = x3d.HAnimSegment(DEF="hanim_l_calf")
HAnimSegment150.name = "l_calf"
Transform151 = x3d.Transform()
Transform151.translation = [0.104,0.4867,0.0308]
Transform152 = x3d.Transform()
Shape153 = x3d.Shape(USE="HAnimJointShape")

Transform152.children.append(Shape153)

Transform151.children.append(Transform152)

HAnimSegment150.children.append(Transform151)
Shape154 = x3d.Shape()
LineSet155 = x3d.LineSet()
LineSet155.vertexCount = [2]
ColorRGBA156 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet155.color = ColorRGBA156
Coordinate157 = x3d.Coordinate()
Coordinate157.point = [(0.104, 0.4867, 0.0308),(0.1101, 0.0656, -0.0736)]

LineSet155.coord = Coordinate157

Shape154.geometry = LineSet155

HAnimSegment150.children.append(Shape154)
HAnimSite158 = x3d.HAnimSite(DEF="hanim_l_calcaneus_posterior_pt")
HAnimSite158.name = "l_calcaneus_posterior_pt"
HAnimSite158.translation = [0.0974,0.0259,-0.1171]
TouchSensor159 = x3d.TouchSensor()
TouchSensor159.description = "HAnimSite l_calcaneus_posterior_pt"

HAnimSite158.children.append(TouchSensor159)
Shape160 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite158.children.append(Shape160)

HAnimSegment150.children.append(HAnimSite158)
HAnimSite161 = x3d.HAnimSite(DEF="hanim_l_sphyrion_pt")
HAnimSite161.name = "l_sphyrion_pt"
HAnimSite161.translation = [0.089,0.0575,-0.0943]
TouchSensor162 = x3d.TouchSensor()
TouchSensor162.description = "HAnimSite l_sphyrion_pt"

HAnimSite161.children.append(TouchSensor162)
Shape163 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite161.children.append(Shape163)

HAnimSegment150.children.append(HAnimSite161)

HAnimJoint149.children.append(HAnimSegment150)
HAnimJoint164 = x3d.HAnimJoint(DEF="hanim_l_talocrural")
HAnimJoint164.name = "l_talocrural"
HAnimJoint164.center = [0.1101,0.0656,-0.0736]
HAnimSegment165 = x3d.HAnimSegment(DEF="hanim_l_talus")
HAnimSegment165.name = "l_talus"
Transform166 = x3d.Transform()
Transform166.translation = [0.08,0.06,-0.025]
Transform166.rotation = [1,0,0,-1.57]
Transform166.scale = [0.15,0.15,0.15]
Transform167 = x3d.Transform()
Shape168 = x3d.Shape(USE="HAnimJointShape")

Transform167.children.append(Shape168)

Transform166.children.append(Transform167)

HAnimSegment165.children.append(Transform166)
Shape169 = x3d.Shape()
LineSet170 = x3d.LineSet()
LineSet170.vertexCount = [2]
ColorRGBA171 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet170.color = ColorRGBA171
Coordinate172 = x3d.Coordinate()
Coordinate172.point = [(0.1101, 0.0656, -0.0736),(3.4715, 0.0374, 0.6807)]

LineSet170.coord = Coordinate172

Shape169.geometry = LineSet170

HAnimSegment165.children.append(Shape169)
Shape173 = x3d.Shape()
LineSet174 = x3d.LineSet()
LineSet174.vertexCount = [2]
ColorRGBA175 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet174.color = ColorRGBA175
Coordinate176 = x3d.Coordinate()
Coordinate176.point = [(0.1101, 0.0656, -0.0736),(3.9515, 0.0653, -0.6895)]

LineSet174.coord = Coordinate176

Shape173.geometry = LineSet174

HAnimSegment165.children.append(Shape173)

HAnimJoint164.children.append(HAnimSegment165)
HAnimJoint177 = x3d.HAnimJoint(DEF="hanim_l_talocalcaneonavicular")
HAnimJoint177.name = "l_talocalcaneonavicular"
HAnimJoint177.center = [3.4715,0.0374,0.6807]
HAnimSegment178 = x3d.HAnimSegment(DEF="hanim_l_navicular")
HAnimSegment178.name = "l_navicular"
Transform179 = x3d.Transform()
Transform179.translation = [3.4715,0.0374,0.6807]
Transform180 = x3d.Transform()
Shape181 = x3d.Shape(USE="HAnimJointShape")

Transform180.children.append(Shape181)

Transform179.children.append(Transform180)

HAnimSegment178.children.append(Transform179)
Shape182 = x3d.Shape()
LineSet183 = x3d.LineSet()
LineSet183.vertexCount = [2]
ColorRGBA184 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet183.color = ColorRGBA184
Coordinate185 = x3d.Coordinate()
Coordinate185.point = [(3.4715, 0.0374, 0.6807),(2.9855, 0.0311, 1.2819)]

LineSet183.coord = Coordinate185

Shape182.geometry = LineSet183

HAnimSegment178.children.append(Shape182)
Shape186 = x3d.Shape()
LineSet187 = x3d.LineSet()
LineSet187.vertexCount = [2]
ColorRGBA188 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet187.color = ColorRGBA188
Coordinate189 = x3d.Coordinate()
Coordinate189.point = [(3.4715, 0.0374, 0.6807),(3.6105, 0.033, 1.4168)]

LineSet187.coord = Coordinate189

Shape186.geometry = LineSet187

HAnimSegment178.children.append(Shape186)
Shape190 = x3d.Shape()
LineSet191 = x3d.LineSet()
LineSet191.vertexCount = [2]
ColorRGBA192 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet191.color = ColorRGBA192
Coordinate193 = x3d.Coordinate()
Coordinate193.point = [(3.4715, 0.0374, 0.6807),(4.1235, 0.0328, 1.3453)]

LineSet191.coord = Coordinate193

Shape190.geometry = LineSet191

HAnimSegment178.children.append(Shape190)

HAnimJoint177.children.append(HAnimSegment178)
HAnimJoint194 = x3d.HAnimJoint(DEF="hanim_l_cuneonavicular_1")
HAnimJoint194.name = "l_cuneonavicular_1"
HAnimJoint194.center = [2.9855,0.0311,1.2819]
HAnimSegment195 = x3d.HAnimSegment(DEF="hanim_l_cuneiform_1")
HAnimSegment195.name = "l_cuneiform_1"
Transform196 = x3d.Transform()
Transform196.translation = [2.9855,0.0311,1.2819]
Transform197 = x3d.Transform()
Shape198 = x3d.Shape(USE="HAnimJointShape")

Transform197.children.append(Shape198)

Transform196.children.append(Transform197)

HAnimSegment195.children.append(Transform196)
Shape199 = x3d.Shape()
LineSet200 = x3d.LineSet()
LineSet200.vertexCount = [2]
ColorRGBA201 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet200.color = ColorRGBA201
Coordinate202 = x3d.Coordinate()
Coordinate202.point = [(2.9855, 0.0311, 1.2819),(2.8635, 0.0194, 2.4285)]

LineSet200.coord = Coordinate202

Shape199.geometry = LineSet200

HAnimSegment195.children.append(Shape199)

HAnimJoint194.children.append(HAnimSegment195)
HAnimJoint203 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_1")
HAnimJoint203.name = "l_tarsometatarsal_1"
HAnimJoint203.center = [2.8635,0.0194,2.4285]
HAnimSegment204 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_1")
HAnimSegment204.name = "l_metatarsal_1"
Transform205 = x3d.Transform()
Transform205.translation = [2.8635,0.0194,2.4285]
Transform206 = x3d.Transform()
Shape207 = x3d.Shape(USE="HAnimJointShape")

Transform206.children.append(Shape207)

Transform205.children.append(Transform206)

HAnimSegment204.children.append(Transform205)
Shape208 = x3d.Shape()
LineSet209 = x3d.LineSet()
LineSet209.vertexCount = [2]
ColorRGBA210 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet209.color = ColorRGBA210
Coordinate211 = x3d.Coordinate()
Coordinate211.point = [(2.8635, 0.0194, 2.4285),(2.7525, 0.0077, 4.6255)]

LineSet209.coord = Coordinate211

Shape208.geometry = LineSet209

HAnimSegment204.children.append(Shape208)
HAnimSite212 = x3d.HAnimSite(DEF="hanim_l_metatarsal_phalanx_1_pt")
HAnimSite212.name = "l_metatarsal_phalanx_1_pt"
TouchSensor213 = x3d.TouchSensor()
TouchSensor213.description = "HAnimSite l_metatarsal_phalanx_1_pt"

HAnimSite212.children.append(TouchSensor213)
Shape214 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite212.children.append(Shape214)

HAnimSegment204.children.append(HAnimSite212)

HAnimJoint203.children.append(HAnimSegment204)
HAnimJoint215 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_1")
HAnimJoint215.name = "l_metatarsophalangeal_1"
HAnimJoint215.center = [2.7525,0.0077,4.6255]
HAnimSegment216 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_1")
HAnimSegment216.name = "l_tarsal_proximal_phalanx_1"
Transform217 = x3d.Transform()
Transform217.translation = [2.7525,0.0077,4.6255]
Transform218 = x3d.Transform()
Shape219 = x3d.Shape(USE="HAnimJointShape")

Transform218.children.append(Shape219)

Transform217.children.append(Transform218)

HAnimSegment216.children.append(Transform217)
Shape220 = x3d.Shape()
LineSet221 = x3d.LineSet()
LineSet221.vertexCount = [2]
ColorRGBA222 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet221.color = ColorRGBA222
Coordinate223 = x3d.Coordinate()
Coordinate223.point = [(2.7525, 0.0077, 4.6255),(2.7525, 0.0077, 4.6255)]

LineSet221.coord = Coordinate223

Shape220.geometry = LineSet221

HAnimSegment216.children.append(Shape220)
HAnimSite224 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_1_tip")
HAnimSite224.name = "l_tarsal_distal_phalanx_1_tip"
TouchSensor225 = x3d.TouchSensor()
TouchSensor225.description = "HAnimSite l_tarsal_distal_phalanx_1_tip"

HAnimSite224.children.append(TouchSensor225)
Shape226 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite224.children.append(Shape226)

HAnimSegment216.children.append(HAnimSite224)

HAnimJoint215.children.append(HAnimSegment216)
HAnimJoint227 = x3d.HAnimJoint(DEF="hanim_l_tarsal_interphalangeal_1")
HAnimJoint227.name = "l_tarsal_interphalangeal_1"

HAnimJoint215.children.append(HAnimJoint227)

HAnimJoint203.children.append(HAnimJoint215)

HAnimJoint194.children.append(HAnimJoint203)

HAnimJoint177.children.append(HAnimJoint194)
HAnimJoint228 = x3d.HAnimJoint(DEF="hanim_l_cuneonavicular_2")
HAnimJoint228.name = "l_cuneonavicular_2"
HAnimJoint228.center = [3.6105,0.033,1.4168]
HAnimSegment229 = x3d.HAnimSegment(DEF="hanim_l_cuneiform_2")
HAnimSegment229.name = "l_cuneiform_2"
Transform230 = x3d.Transform()
Transform230.translation = [3.6105,0.033,1.4168]
Transform231 = x3d.Transform()
Shape232 = x3d.Shape(USE="HAnimJointShape")

Transform231.children.append(Shape232)

Transform230.children.append(Transform231)

HAnimSegment229.children.append(Transform230)
Shape233 = x3d.Shape()
LineSet234 = x3d.LineSet()
LineSet234.vertexCount = [2]
ColorRGBA235 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet234.color = ColorRGBA235
Coordinate236 = x3d.Coordinate()
Coordinate236.point = [(3.6105, 0.033, 1.4168),(3.5555, 0.0232, 2.2895)]

LineSet234.coord = Coordinate236

Shape233.geometry = LineSet234

HAnimSegment229.children.append(Shape233)

HAnimJoint228.children.append(HAnimSegment229)
HAnimJoint237 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_2")
HAnimJoint237.name = "l_tarsometatarsal_2"
HAnimJoint237.center = [3.5555,0.0232,2.2895]
HAnimSegment238 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_2")
HAnimSegment238.name = "l_metatarsal_2"
Transform239 = x3d.Transform()
Transform239.translation = [3.5555,0.0232,2.2895]
Transform240 = x3d.Transform()
Shape241 = x3d.Shape(USE="HAnimJointShape")

Transform240.children.append(Shape241)

Transform239.children.append(Transform240)

HAnimSegment238.children.append(Transform239)
Shape242 = x3d.Shape()
LineSet243 = x3d.LineSet()
LineSet243.vertexCount = [2]
ColorRGBA244 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet243.color = ColorRGBA244
Coordinate245 = x3d.Coordinate()
Coordinate245.point = [(3.5555, 0.0232, 2.2895),(3.6595, 0.0085, 4.8125)]

LineSet243.coord = Coordinate245

Shape242.geometry = LineSet243

HAnimSegment238.children.append(Shape242)

HAnimJoint237.children.append(HAnimSegment238)
HAnimJoint246 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_2")
HAnimJoint246.name = "l_metatarsophalangeal_2"
HAnimJoint246.center = [3.6595,0.0085,4.8125]
HAnimSegment247 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_2")
HAnimSegment247.name = "l_tarsal_proximal_phalanx_2"
Transform248 = x3d.Transform()
Transform248.translation = [3.6595,0.0085,4.8125]
Transform249 = x3d.Transform()
Shape250 = x3d.Shape(USE="HAnimJointShape")

Transform249.children.append(Shape250)

Transform248.children.append(Transform249)

HAnimSegment247.children.append(Transform248)
Shape251 = x3d.Shape()
LineSet252 = x3d.LineSet()
LineSet252.vertexCount = [2]
ColorRGBA253 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet252.color = ColorRGBA253
Coordinate254 = x3d.Coordinate()
Coordinate254.point = [(3.6595, 0.0085, 4.8125),(3.7385, 0.0054, 5.5315)]

LineSet252.coord = Coordinate254

Shape251.geometry = LineSet252

HAnimSegment247.children.append(Shape251)

HAnimJoint246.children.append(HAnimSegment247)
HAnimJoint255 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_2")
HAnimJoint255.name = "l_tarsal_proximal_interphalangeal_2"
HAnimJoint255.center = [3.7385,0.0054,5.5315]
HAnimSegment256 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_2")
HAnimSegment256.name = "l_tarsal_middle_phalanx_2"
Transform257 = x3d.Transform()
Transform257.translation = [3.7385,0.0054,5.5315]
Transform258 = x3d.Transform()
Shape259 = x3d.Shape(USE="HAnimJointShape")

Transform258.children.append(Shape259)

Transform257.children.append(Transform258)

HAnimSegment256.children.append(Transform257)
Shape260 = x3d.Shape()
LineSet261 = x3d.LineSet()
LineSet261.vertexCount = [2]
ColorRGBA262 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet261.color = ColorRGBA262
Coordinate263 = x3d.Coordinate()
Coordinate263.point = [(3.7385, 0.0054, 5.5315),(3.7385, 0.0017, 5.9505)]

LineSet261.coord = Coordinate263

Shape260.geometry = LineSet261

HAnimSegment256.children.append(Shape260)
HAnimSite264 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_2_tip")
HAnimSite264.name = "l_tarsal_distal_phalanx_2_tip"
HAnimSite264.translation = [0.1195,0.0079,0.1433]
TouchSensor265 = x3d.TouchSensor()
TouchSensor265.description = "HAnimSite l_tarsal_distal_phalanx_2_tip"

HAnimSite264.children.append(TouchSensor265)
Shape266 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite264.children.append(Shape266)

HAnimSegment256.children.append(HAnimSite264)

HAnimJoint255.children.append(HAnimSegment256)
HAnimJoint267 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint267.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint267.center = [3.7385,0.0017,5.9505]

HAnimJoint255.children.append(HAnimJoint267)

HAnimJoint246.children.append(HAnimJoint255)

HAnimJoint237.children.append(HAnimJoint246)

HAnimJoint228.children.append(HAnimJoint237)

HAnimJoint177.children.append(HAnimJoint228)
HAnimJoint268 = x3d.HAnimJoint(DEF="hanim_l_cuneonavicular_3")
HAnimJoint268.name = "l_cuneonavicular_3"
HAnimJoint268.center = [4.1235,0.0328,1.3453]
HAnimSegment269 = x3d.HAnimSegment(DEF="hanim_l_cuneiform_3")
HAnimSegment269.name = "l_cuneiform_3"
Transform270 = x3d.Transform()
Transform270.translation = [4.1235,0.0328,1.3453]
Transform271 = x3d.Transform()
Shape272 = x3d.Shape(USE="HAnimJointShape")

Transform271.children.append(Shape272)

Transform270.children.append(Transform271)

HAnimSegment269.children.append(Transform270)
Shape273 = x3d.Shape()
LineSet274 = x3d.LineSet()
LineSet274.vertexCount = [2]
ColorRGBA275 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet274.color = ColorRGBA275
Coordinate276 = x3d.Coordinate()
Coordinate276.point = [(4.1235, 0.0328, 1.3453),(3.7385, 0.0017, 5.9505)]

LineSet274.coord = Coordinate276

Shape273.geometry = LineSet274

HAnimSegment269.children.append(Shape273)

HAnimJoint268.children.append(HAnimSegment269)
HAnimJoint277 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_3 ")
HAnimJoint277.name = "l_tarsometatarsal_3 "
HAnimSegment278 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_3")
HAnimSegment278.name = "l_metatarsal_3"
Transform279 = x3d.Transform()
Transform279.translation = [4.1235,0.0328,1.3453]
Transform280 = x3d.Transform()
Shape281 = x3d.Shape(USE="HAnimJointShape")

Transform280.children.append(Shape281)

Transform279.children.append(Transform280)

HAnimSegment278.children.append(Transform279)
Shape282 = x3d.Shape()
LineSet283 = x3d.LineSet()
LineSet283.vertexCount = [2]
ColorRGBA284 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet283.color = ColorRGBA284
Coordinate285 = x3d.Coordinate()
Coordinate285.point = [(4.2795, 0.0086, 4.7055)]

LineSet283.coord = Coordinate285

Shape282.geometry = LineSet283

HAnimSegment278.children.append(Shape282)

HAnimJoint277.children.append(HAnimSegment278)
HAnimJoint286 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_3")
HAnimJoint286.name = "l_metatarsophalangeal_3"
HAnimJoint286.center = [4.2795,0.0086,4.7055]
HAnimSegment287 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_3")
HAnimSegment287.name = "l_tarsal_proximal_phalanx_3"
Transform288 = x3d.Transform()
Transform288.translation = [4.2795,0.0086,4.7055]
Transform289 = x3d.Transform()
Shape290 = x3d.Shape(USE="HAnimJointShape")

Transform289.children.append(Shape290)

Transform288.children.append(Transform289)

HAnimSegment287.children.append(Transform288)
Shape291 = x3d.Shape()
LineSet292 = x3d.LineSet()
LineSet292.vertexCount = [2]
ColorRGBA293 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet292.color = ColorRGBA293
Coordinate294 = x3d.Coordinate()
Coordinate294.point = [(4.2795, 0.0086, 4.7055),(4.3855, 0.0044, 5.3745)]

LineSet292.coord = Coordinate294

Shape291.geometry = LineSet292

HAnimSegment287.children.append(Shape291)

HAnimJoint286.children.append(HAnimSegment287)
HAnimJoint295 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_3")
HAnimJoint295.name = "l_tarsal_proximal_interphalangeal_3"
HAnimJoint295.center = [4.3855,0.0044,5.3745]
HAnimSegment296 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_3")
HAnimSegment296.name = "l_tarsal_middle_phalanx_3"
Transform297 = x3d.Transform()
Transform297.translation = [4.3855,0.0044,5.3745]
Transform298 = x3d.Transform()
Shape299 = x3d.Shape(USE="HAnimJointShape")

Transform298.children.append(Shape299)

Transform297.children.append(Transform298)

HAnimSegment296.children.append(Transform297)
Shape300 = x3d.Shape()
LineSet301 = x3d.LineSet()
LineSet301.vertexCount = [2]
ColorRGBA302 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet301.color = ColorRGBA302
Coordinate303 = x3d.Coordinate()
Coordinate303.point = [(4.3855, 0.0044, 5.3745),(4.4545, 0.0017, 5.7845)]

LineSet301.coord = Coordinate303

Shape300.geometry = LineSet301

HAnimSegment296.children.append(Shape300)
HAnimSite304 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_3_tip")
HAnimSite304.name = "l_tarsal_distal_phalanx_3_tip"
TouchSensor305 = x3d.TouchSensor()
TouchSensor305.description = "HAnimSite l_tarsal_distal_phalanx_3_tip"

HAnimSite304.children.append(TouchSensor305)
Shape306 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite304.children.append(Shape306)

HAnimSegment296.children.append(HAnimSite304)

HAnimJoint295.children.append(HAnimSegment296)
HAnimJoint307 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_3")
HAnimJoint307.name = "l_tarsal_distal_interphalangeal_3"
HAnimJoint307.center = [4.4545,0.0017,5.7845]

HAnimJoint295.children.append(HAnimJoint307)

HAnimJoint286.children.append(HAnimJoint295)

HAnimJoint277.children.append(HAnimJoint286)

HAnimJoint268.children.append(HAnimJoint277)

HAnimJoint177.children.append(HAnimJoint268)

HAnimJoint164.children.append(HAnimJoint177)
HAnimJoint308 = x3d.HAnimJoint(DEF="hanim_l_calcaneocuboid")
HAnimJoint308.name = "l_calcaneocuboid"
HAnimJoint308.center = [3.9515,0.0653,-0.6895]
HAnimSegment309 = x3d.HAnimSegment(DEF="hanim_l_calcaneus")
HAnimSegment309.name = "l_calcaneus"
Transform310 = x3d.Transform()
Transform310.translation = [3.9515,0.0653,-0.6895]
Transform311 = x3d.Transform()
Shape312 = x3d.Shape(USE="HAnimJointShape")

Transform311.children.append(Shape312)

Transform310.children.append(Transform311)

HAnimSegment309.children.append(Transform310)
Shape313 = x3d.Shape()
LineSet314 = x3d.LineSet()
LineSet314.vertexCount = [2]
ColorRGBA315 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet314.color = ColorRGBA315
Coordinate316 = x3d.Coordinate()
Coordinate316.point = [(3.9515, 0.0653, -0.6895),(4.9085, 0.0353, 0.5574)]

LineSet314.coord = Coordinate316

Shape313.geometry = LineSet314

HAnimSegment309.children.append(Shape313)

HAnimJoint308.children.append(HAnimSegment309)
HAnimJoint317 = x3d.HAnimJoint(DEF="hanim_l_transversetarsal")
HAnimJoint317.name = "l_transversetarsal"
HAnimJoint317.center = [4.9085,0.0353,0.5574]
HAnimSegment318 = x3d.HAnimSegment(DEF="hanim_l_cuboid")
HAnimSegment318.name = "l_cuboid"
Transform319 = x3d.Transform()
Transform319.translation = [4.9085,0.0353,0.5574]
Transform320 = x3d.Transform()
Shape321 = x3d.Shape(USE="HAnimJointShape")

Transform320.children.append(Shape321)

Transform319.children.append(Transform320)

HAnimSegment318.children.append(Transform319)
Shape322 = x3d.Shape()
LineSet323 = x3d.LineSet()
LineSet323.vertexCount = [2]
ColorRGBA324 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet323.color = ColorRGBA324
Coordinate325 = x3d.Coordinate()
Coordinate325.point = [(4.9085, 0.0353, 0.5574),(4.7245, 0.0211, 2.1725)]

LineSet323.coord = Coordinate325

Shape322.geometry = LineSet323

HAnimSegment318.children.append(Shape322)
Shape326 = x3d.Shape()
LineSet327 = x3d.LineSet()
LineSet327.vertexCount = [2]
ColorRGBA328 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet327.color = ColorRGBA328
Coordinate329 = x3d.Coordinate()
Coordinate329.point = [(4.9085, 0.0353, 0.5574),(5.3615, 0.0164, 2.0085)]

LineSet327.coord = Coordinate329

Shape326.geometry = LineSet327

HAnimSegment318.children.append(Shape326)

HAnimJoint317.children.append(HAnimSegment318)
HAnimJoint330 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_4")
HAnimJoint330.name = "l_tarsometatarsal_4"
HAnimJoint330.center = [4.7245,0.0211,2.1725]
HAnimSegment331 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_4")
HAnimSegment331.name = "l_metatarsal_4"
Transform332 = x3d.Transform()
Transform332.translation = [4.7245,0.0211,2.1725]
Transform333 = x3d.Transform()
Shape334 = x3d.Shape(USE="HAnimJointShape")

Transform333.children.append(Shape334)

Transform332.children.append(Transform333)

HAnimSegment331.children.append(Transform332)
Shape335 = x3d.Shape()
LineSet336 = x3d.LineSet()
LineSet336.vertexCount = [2]
ColorRGBA337 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet336.color = ColorRGBA337
Coordinate338 = x3d.Coordinate()
Coordinate338.point = [(4.7245, 0.0211, 2.1725),(4.8745, 0.0076, 4.5165)]

LineSet336.coord = Coordinate338

Shape335.geometry = LineSet336

HAnimSegment331.children.append(Shape335)

HAnimJoint330.children.append(HAnimSegment331)
HAnimJoint339 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_4")
HAnimJoint339.name = "l_metatarsophalangeal_4"
HAnimJoint339.center = [4.8745,0.0076,4.5165]
HAnimSegment340 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_4")
HAnimSegment340.name = "l_tarsal_proximal_phalanx_4"
Transform341 = x3d.Transform()
Transform341.translation = [4.8745,0.0076,4.5165]
Transform342 = x3d.Transform()
Shape343 = x3d.Shape(USE="HAnimJointShape")

Transform342.children.append(Shape343)

Transform341.children.append(Transform342)

HAnimSegment340.children.append(Transform341)
Shape344 = x3d.Shape()
LineSet345 = x3d.LineSet()
LineSet345.vertexCount = [2]
ColorRGBA346 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet345.color = ColorRGBA346
Coordinate347 = x3d.Coordinate()
Coordinate347.point = [(4.8745, 0.0076, 4.5165),(5.0655, 0.0049, 5.1895)]

LineSet345.coord = Coordinate347

Shape344.geometry = LineSet345

HAnimSegment340.children.append(Shape344)

HAnimJoint339.children.append(HAnimSegment340)
HAnimJoint348 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_4")
HAnimJoint348.name = "l_tarsal_proximal_interphalangeal_4"
HAnimJoint348.center = [5.0655,0.0049,5.1895]
HAnimSegment349 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_4")
HAnimSegment349.name = "l_tarsal_middle_phalanx_4"
Transform350 = x3d.Transform()
Transform350.translation = [5.0655,0.0049,5.1895]
Transform351 = x3d.Transform()
Shape352 = x3d.Shape(USE="HAnimJointShape")

Transform351.children.append(Shape352)

Transform350.children.append(Transform351)

HAnimSegment349.children.append(Transform350)
Shape353 = x3d.Shape()
LineSet354 = x3d.LineSet()
LineSet354.vertexCount = [2]
ColorRGBA355 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet354.color = ColorRGBA355
Coordinate356 = x3d.Coordinate()
Coordinate356.point = [(5.0655, 0.0049, 5.1895),(5.1325, 0.0011, 5.5175)]

LineSet354.coord = Coordinate356

Shape353.geometry = LineSet354

HAnimSegment349.children.append(Shape353)
HAnimSite357 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_4_tip")
HAnimSite357.name = "l_tarsal_distal_phalanx_4_tip"
TouchSensor358 = x3d.TouchSensor()
TouchSensor358.description = "HAnimSite l_tarsal_distal_phalanx_4_tip"

HAnimSite357.children.append(TouchSensor358)
Shape359 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite357.children.append(Shape359)

HAnimSegment349.children.append(HAnimSite357)

HAnimJoint348.children.append(HAnimSegment349)
HAnimJoint360 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_4")
HAnimJoint360.name = "l_tarsal_distal_interphalangeal_4"
HAnimJoint360.center = [5.1325,0.0011,5.5175]

HAnimJoint348.children.append(HAnimJoint360)

HAnimJoint339.children.append(HAnimJoint348)

HAnimJoint330.children.append(HAnimJoint339)

HAnimJoint317.children.append(HAnimJoint330)
HAnimJoint361 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_5")
HAnimJoint361.name = "l_tarsometatarsal_5"
HAnimJoint361.center = [5.3615,0.0164,2.0085]
HAnimSegment362 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_5")
HAnimSegment362.name = "l_metatarsal_5"
Transform363 = x3d.Transform()
Transform363.translation = [5.3615,0.0164,2.0085]
Transform364 = x3d.Transform()
Shape365 = x3d.Shape(USE="HAnimJointShape")

Transform364.children.append(Shape365)

Transform363.children.append(Transform364)

HAnimSegment362.children.append(Transform363)
Shape366 = x3d.Shape()
LineSet367 = x3d.LineSet()
LineSet367.vertexCount = [2]
ColorRGBA368 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet367.color = ColorRGBA368
Coordinate369 = x3d.Coordinate()
Coordinate369.point = [(5.3615, 0.0164, 2.0085),(5.5055, 0.0067, 4.3115)]

LineSet367.coord = Coordinate369

Shape366.geometry = LineSet367

HAnimSegment362.children.append(Shape366)
HAnimSite370 = x3d.HAnimSite(DEF="hanim_l_metatarsal_phalanx_5_pt")
HAnimSite370.name = "l_metatarsal_phalanx_5_pt"
TouchSensor371 = x3d.TouchSensor()
TouchSensor371.description = "HAnimSite l_metatarsal_phalanx_5_pt"

HAnimSite370.children.append(TouchSensor371)
Shape372 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite370.children.append(Shape372)

HAnimSegment362.children.append(HAnimSite370)

HAnimJoint361.children.append(HAnimSegment362)
HAnimJoint373 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_5")
HAnimJoint373.name = "l_metatarsophalangeal_5"
HAnimJoint373.center = [5.5055,0.0067,4.3115]
HAnimSegment374 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_5")
HAnimSegment374.name = "l_tarsal_proximal_phalanx_5"
Transform375 = x3d.Transform()
Transform375.translation = [5.5055,0.0067,4.3115]
Transform376 = x3d.Transform()
Shape377 = x3d.Shape(USE="HAnimJointShape")

Transform376.children.append(Shape377)

Transform375.children.append(Transform376)

HAnimSegment374.children.append(Transform375)
Shape378 = x3d.Shape()
LineSet379 = x3d.LineSet()
LineSet379.vertexCount = [2]
ColorRGBA380 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet379.color = ColorRGBA380
Coordinate381 = x3d.Coordinate()
Coordinate381.point = [(5.5055, 0.0067, 4.3115),(5.6085, 0.003, 4.6485)]

LineSet379.coord = Coordinate381

Shape378.geometry = LineSet379

HAnimSegment374.children.append(Shape378)

HAnimJoint373.children.append(HAnimSegment374)
HAnimJoint382 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_5")
HAnimJoint382.name = "l_tarsal_proximal_interphalangeal_5"
HAnimJoint382.center = [5.6085,0.003,4.6485]
HAnimSegment383 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_5")
HAnimSegment383.name = "l_tarsal_middle_phalanx_5"
Transform384 = x3d.Transform()
Transform384.translation = [5.6085,0.003,4.6485]
Transform385 = x3d.Transform()
Shape386 = x3d.Shape(USE="HAnimJointShape")

Transform385.children.append(Shape386)

Transform384.children.append(Transform385)

HAnimSegment383.children.append(Transform384)
Shape387 = x3d.Shape()
LineSet388 = x3d.LineSet()
LineSet388.vertexCount = [2]
ColorRGBA389 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet388.color = ColorRGBA389
Coordinate390 = x3d.Coordinate()
Coordinate390.point = [(5.6085, 0.003, 4.6485),(5.6485, 0, 4.9925)]

LineSet388.coord = Coordinate390

Shape387.geometry = LineSet388

HAnimSegment383.children.append(Shape387)
HAnimSite391 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_5_tip")
HAnimSite391.name = "l_tarsal_distal_phalanx_5_tip"
TouchSensor392 = x3d.TouchSensor()
TouchSensor392.description = "HAnimSite l_tarsal_distal_phalanx_5_tip"

HAnimSite391.children.append(TouchSensor392)
Shape393 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite391.children.append(Shape393)

HAnimSegment383.children.append(HAnimSite391)

HAnimJoint382.children.append(HAnimSegment383)
HAnimJoint394 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_5")
HAnimJoint394.name = "l_tarsal_distal_interphalangeal_5"
HAnimJoint394.center = [5.6485,0,4.9925]

HAnimJoint382.children.append(HAnimJoint394)

HAnimJoint373.children.append(HAnimJoint382)

HAnimJoint361.children.append(HAnimJoint373)

HAnimJoint317.children.append(HAnimJoint361)

HAnimJoint308.children.append(HAnimJoint317)

HAnimJoint164.children.append(HAnimJoint308)

HAnimJoint149.children.append(HAnimJoint164)

HAnimJoint131.children.append(HAnimJoint149)

HAnimJoint94.children.append(HAnimJoint131)
HAnimJoint395 = x3d.HAnimJoint(DEF="hanim_r_hip")
HAnimJoint395.name = "r_hip"
HAnimJoint395.center = [-0.095,0.9171,0.0029]
HAnimSegment396 = x3d.HAnimSegment(DEF="hanim_r_thigh")
HAnimSegment396.name = "r_thigh"
Transform397 = x3d.Transform()
Transform397.translation = [-0.095,0.9171,0.0029]
Transform398 = x3d.Transform()
Shape399 = x3d.Shape(USE="HAnimJointShape")

Transform398.children.append(Shape399)

Transform397.children.append(Transform398)

HAnimSegment396.children.append(Transform397)
Shape400 = x3d.Shape()
LineSet401 = x3d.LineSet()
LineSet401.vertexCount = [2]
ColorRGBA402 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet401.color = ColorRGBA402
Coordinate403 = x3d.Coordinate()
Coordinate403.point = [(-0.095, 0.9171, 0.0029),(-0.0867, 0.4913, 0.0318)]

LineSet401.coord = Coordinate403

Shape400.geometry = LineSet401

HAnimSegment396.children.append(Shape400)
HAnimSite404 = x3d.HAnimSite(DEF="hanim_r_lateral_malleolus_pt")
HAnimSite404.name = "r_lateral_malleolus_pt"
HAnimSite404.translation = [-0.1006,0.0658,-0.1075]
TouchSensor405 = x3d.TouchSensor()
TouchSensor405.description = "HAnimSite r_lateral_malleolus_pt"

HAnimSite404.children.append(TouchSensor405)
Shape406 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite404.children.append(Shape406)

HAnimSegment396.children.append(HAnimSite404)
HAnimSite407 = x3d.HAnimSite(DEF="hanim_r_medial_malleolus_pt")
HAnimSite407.name = "r_medial_malleolus_pt"
HAnimSite407.translation = [-0.0591,0.076,-0.0928]
TouchSensor408 = x3d.TouchSensor()
TouchSensor408.description = "HAnimSite r_medial_malleolus_pt"

HAnimSite407.children.append(TouchSensor408)
Shape409 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite407.children.append(Shape409)

HAnimSegment396.children.append(HAnimSite407)
HAnimSite410 = x3d.HAnimSite(DEF="hanim_r_tibiale_pt")
HAnimSite410.name = "r_tibiale_pt"
TouchSensor411 = x3d.TouchSensor()
TouchSensor411.description = "HAnimSite r_tibiale_pt"

HAnimSite410.children.append(TouchSensor411)
Shape412 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite410.children.append(Shape412)

HAnimSegment396.children.append(HAnimSite410)

HAnimJoint395.children.append(HAnimSegment396)
HAnimJoint413 = x3d.HAnimJoint(DEF="hanim_r_knee")
HAnimJoint413.name = "r_knee"
HAnimJoint413.center = [-0.0867,0.4913,0.0318]
HAnimSegment414 = x3d.HAnimSegment(DEF="hanim_r_calf")
HAnimSegment414.name = "r_calf"
Transform415 = x3d.Transform()
Transform415.translation = [-0.0867,0.4913,0.0318]
Transform416 = x3d.Transform()
Shape417 = x3d.Shape(USE="HAnimJointShape")

Transform416.children.append(Shape417)

Transform415.children.append(Transform416)

HAnimSegment414.children.append(Transform415)
Shape418 = x3d.Shape()
LineSet419 = x3d.LineSet()
LineSet419.vertexCount = [2]
ColorRGBA420 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet419.color = ColorRGBA420
Coordinate421 = x3d.Coordinate()
Coordinate421.point = [(-0.0867, 0.4913, 0.0318),(-0.0801, 0.0712, -0.0766)]

LineSet419.coord = Coordinate421

Shape418.geometry = LineSet419

HAnimSegment414.children.append(Shape418)
HAnimSite422 = x3d.HAnimSite(DEF="hanim_r_calcaneus_posterior_pt")
HAnimSite422.name = "r_calcaneus_posterior_pt"
HAnimSite422.translation = [-0.0692,0.0297,-0.1221]
TouchSensor423 = x3d.TouchSensor()
TouchSensor423.description = "HAnimSite r_calcaneus_posterior_pt"

HAnimSite422.children.append(TouchSensor423)
Shape424 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite422.children.append(Shape424)

HAnimSegment414.children.append(HAnimSite422)
HAnimSite425 = x3d.HAnimSite(DEF="hanim_r_sphyrion_pt")
HAnimSite425.name = "r_sphyrion_pt"
HAnimSite425.translation = [-0.0603,0.061,-0.1002]
TouchSensor426 = x3d.TouchSensor()
TouchSensor426.description = "HAnimSite r_sphyrion_pt"

HAnimSite425.children.append(TouchSensor426)
Shape427 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite425.children.append(Shape427)

HAnimSegment414.children.append(HAnimSite425)

HAnimJoint413.children.append(HAnimSegment414)
HAnimJoint428 = x3d.HAnimJoint(DEF="hanim_r_talocrural")
HAnimJoint428.name = "r_talocrural"
HAnimJoint428.center = [-0.0801,0.0712,-0.0766]
HAnimSegment429 = x3d.HAnimSegment(DEF="hanim_r_talus")
HAnimSegment429.name = "r_talus"
Transform430 = x3d.Transform()
Transform430.translation = [-0.05,0.06,-0.025]
Transform430.rotation = [1,0,0,-1.57]
Transform430.scale = [0.15,0.15,0.15]
Transform431 = x3d.Transform()
Shape432 = x3d.Shape(USE="HAnimJointShape")

Transform431.children.append(Shape432)

Transform430.children.append(Transform431)

HAnimSegment429.children.append(Transform430)
Shape433 = x3d.Shape()
LineSet434 = x3d.LineSet()
LineSet434.vertexCount = [2]
ColorRGBA435 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet434.color = ColorRGBA435
Coordinate436 = x3d.Coordinate()
Coordinate436.point = [(-0.0801, 0.0712, -0.0766),(-3.4725, 0.0374, 0.6807)]

LineSet434.coord = Coordinate436

Shape433.geometry = LineSet434

HAnimSegment429.children.append(Shape433)
Shape437 = x3d.Shape()
LineSet438 = x3d.LineSet()
LineSet438.vertexCount = [2]
ColorRGBA439 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet438.color = ColorRGBA439
Coordinate440 = x3d.Coordinate()
Coordinate440.point = [(-0.0801, 0.0712, -0.0766),(-3.9515, 0.0653, -0.6895)]

LineSet438.coord = Coordinate440

Shape437.geometry = LineSet438

HAnimSegment429.children.append(Shape437)

HAnimJoint428.children.append(HAnimSegment429)
HAnimJoint441 = x3d.HAnimJoint(DEF="hanim_r_talocalcaneonavicular")
HAnimJoint441.name = "r_talocalcaneonavicular"
HAnimJoint441.center = [-3.4725,0.0374,0.6807]
HAnimSegment442 = x3d.HAnimSegment(DEF="hanim_r_navicular")
HAnimSegment442.name = "r_navicular"
Transform443 = x3d.Transform()
Transform443.translation = [-3.4725,0.0374,0.6807]
Transform444 = x3d.Transform()
Shape445 = x3d.Shape(USE="HAnimJointShape")

Transform444.children.append(Shape445)

Transform443.children.append(Transform444)

HAnimSegment442.children.append(Transform443)
Shape446 = x3d.Shape()
LineSet447 = x3d.LineSet()
LineSet447.vertexCount = [2]
ColorRGBA448 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet447.color = ColorRGBA448
Coordinate449 = x3d.Coordinate()
Coordinate449.point = [(-3.4725, 0.0374, 0.6807),(-2.9855, 0.0311, 1.2819)]

LineSet447.coord = Coordinate449

Shape446.geometry = LineSet447

HAnimSegment442.children.append(Shape446)
Shape450 = x3d.Shape()
LineSet451 = x3d.LineSet()
LineSet451.vertexCount = [2]
ColorRGBA452 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet451.color = ColorRGBA452
Coordinate453 = x3d.Coordinate()
Coordinate453.point = [(-3.4725, 0.0374, 0.6807),(-3.6105, 0.033, 1.4168)]

LineSet451.coord = Coordinate453

Shape450.geometry = LineSet451

HAnimSegment442.children.append(Shape450)
Shape454 = x3d.Shape()
LineSet455 = x3d.LineSet()
LineSet455.vertexCount = [2]
ColorRGBA456 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet455.color = ColorRGBA456
Coordinate457 = x3d.Coordinate()
Coordinate457.point = [(-3.4725, 0.0374, 0.6807),(-4.1245, 0.0328, 1.3453)]

LineSet455.coord = Coordinate457

Shape454.geometry = LineSet455

HAnimSegment442.children.append(Shape454)

HAnimJoint441.children.append(HAnimSegment442)
HAnimJoint458 = x3d.HAnimJoint(DEF="hanim_r_cuneonavicular_1")
HAnimJoint458.name = "r_cuneonavicular_1"
HAnimJoint458.center = [-2.9855,0.0311,1.2819]
HAnimSegment459 = x3d.HAnimSegment(DEF="hanim_r_cuneiform_1")
HAnimSegment459.name = "r_cuneiform_1"
Transform460 = x3d.Transform()
Transform460.translation = [-2.9855,0.0311,1.2819]
Transform461 = x3d.Transform()
Shape462 = x3d.Shape(USE="HAnimJointShape")

Transform461.children.append(Shape462)

Transform460.children.append(Transform461)

HAnimSegment459.children.append(Transform460)
Shape463 = x3d.Shape()
LineSet464 = x3d.LineSet()
LineSet464.vertexCount = [2]
ColorRGBA465 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet464.color = ColorRGBA465
Coordinate466 = x3d.Coordinate()
Coordinate466.point = [(-2.9855, 0.0311, 1.2819),(-2.8645, 0.0194, 2.4285)]

LineSet464.coord = Coordinate466

Shape463.geometry = LineSet464

HAnimSegment459.children.append(Shape463)

HAnimJoint458.children.append(HAnimSegment459)
HAnimJoint467 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_1")
HAnimJoint467.name = "r_tarsometatarsal_1"
HAnimJoint467.center = [-2.8645,0.0194,2.4285]
HAnimSegment468 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_1")
HAnimSegment468.name = "r_metatarsal_1"
Transform469 = x3d.Transform()
Transform469.translation = [-2.8645,0.0194,2.4285]
Transform470 = x3d.Transform()
Shape471 = x3d.Shape(USE="HAnimJointShape")

Transform470.children.append(Shape471)

Transform469.children.append(Transform470)

HAnimSegment468.children.append(Transform469)
Shape472 = x3d.Shape()
LineSet473 = x3d.LineSet()
LineSet473.vertexCount = [2]
ColorRGBA474 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet473.color = ColorRGBA474
Coordinate475 = x3d.Coordinate()
Coordinate475.point = [(-2.8645, 0.0194, 2.4285),(-2.7535, 0.0077, 4.6255)]

LineSet473.coord = Coordinate475

Shape472.geometry = LineSet473

HAnimSegment468.children.append(Shape472)
HAnimSite476 = x3d.HAnimSite(DEF="hanim_r_metatarsal_phalanx_1_pt")
HAnimSite476.name = "r_metatarsal_phalanx_1_pt"
TouchSensor477 = x3d.TouchSensor()
TouchSensor477.description = "HAnimSite r_metatarsal_phalanx_1_pt"

HAnimSite476.children.append(TouchSensor477)
Shape478 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite476.children.append(Shape478)

HAnimSegment468.children.append(HAnimSite476)

HAnimJoint467.children.append(HAnimSegment468)
HAnimJoint479 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_1")
HAnimJoint479.name = "r_metatarsophalangeal_1"
HAnimJoint479.center = [-2.7535,0.0077,4.6255]
HAnimSegment480 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_1")
HAnimSegment480.name = "r_tarsal_proximal_phalanx_1"
Transform481 = x3d.Transform()
Transform481.translation = [-2.7535,0.0077,4.6255]
Transform482 = x3d.Transform()
Shape483 = x3d.Shape(USE="HAnimJointShape")

Transform482.children.append(Shape483)

Transform481.children.append(Transform482)

HAnimSegment480.children.append(Transform481)
Shape484 = x3d.Shape()
LineSet485 = x3d.LineSet()
LineSet485.vertexCount = [2]
ColorRGBA486 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet485.color = ColorRGBA486
Coordinate487 = x3d.Coordinate()
Coordinate487.point = [(-2.7535, 0.0077, 4.6255),(-2.7535, 0.0077, 4.6255)]

LineSet485.coord = Coordinate487

Shape484.geometry = LineSet485

HAnimSegment480.children.append(Shape484)
HAnimSite488 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_1_tip")
HAnimSite488.name = "r_tarsal_distal_phalanx_1_tip"
TouchSensor489 = x3d.TouchSensor()
TouchSensor489.description = "HAnimSite r_tarsal_distal_phalanx_1_tip"

HAnimSite488.children.append(TouchSensor489)
Shape490 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite488.children.append(Shape490)

HAnimSegment480.children.append(HAnimSite488)

HAnimJoint479.children.append(HAnimSegment480)
HAnimJoint491 = x3d.HAnimJoint(DEF="hanim_r_tarsal_interphalangeal_1")
HAnimJoint491.name = "r_tarsal_interphalangeal_1"

HAnimJoint479.children.append(HAnimJoint491)

HAnimJoint467.children.append(HAnimJoint479)

HAnimJoint458.children.append(HAnimJoint467)

HAnimJoint441.children.append(HAnimJoint458)
HAnimJoint492 = x3d.HAnimJoint(DEF="hanim_r_cuneonavicular_2")
HAnimJoint492.name = "r_cuneonavicular_2"
HAnimJoint492.center = [-3.6105,0.033,1.4168]
HAnimSegment493 = x3d.HAnimSegment(DEF="hanim_r_cuneiform_2")
HAnimSegment493.name = "r_cuneiform_2"
Transform494 = x3d.Transform()
Transform494.translation = [-3.6105,0.033,1.4168]
Transform495 = x3d.Transform()
Shape496 = x3d.Shape(USE="HAnimJointShape")

Transform495.children.append(Shape496)

Transform494.children.append(Transform495)

HAnimSegment493.children.append(Transform494)
Shape497 = x3d.Shape()
LineSet498 = x3d.LineSet()
LineSet498.vertexCount = [2]
ColorRGBA499 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet498.color = ColorRGBA499
Coordinate500 = x3d.Coordinate()
Coordinate500.point = [(-3.6105, 0.033, 1.4168),(-3.5565, 0.0232, 2.2895)]

LineSet498.coord = Coordinate500

Shape497.geometry = LineSet498

HAnimSegment493.children.append(Shape497)

HAnimJoint492.children.append(HAnimSegment493)
HAnimJoint501 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_2")
HAnimJoint501.name = "r_tarsometatarsal_2"
HAnimJoint501.center = [-3.5565,0.0232,2.2895]
HAnimSegment502 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_2")
HAnimSegment502.name = "r_metatarsal_2"
Transform503 = x3d.Transform()
Transform503.translation = [-3.5565,0.0232,2.2895]
Transform504 = x3d.Transform()
Shape505 = x3d.Shape(USE="HAnimJointShape")

Transform504.children.append(Shape505)

Transform503.children.append(Transform504)

HAnimSegment502.children.append(Transform503)
Shape506 = x3d.Shape()
LineSet507 = x3d.LineSet()
LineSet507.vertexCount = [2]
ColorRGBA508 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet507.color = ColorRGBA508
Coordinate509 = x3d.Coordinate()
Coordinate509.point = [(-3.5565, 0.0232, 2.2895),(-3.6595, 0.0085, 4.8125)]

LineSet507.coord = Coordinate509

Shape506.geometry = LineSet507

HAnimSegment502.children.append(Shape506)

HAnimJoint501.children.append(HAnimSegment502)
HAnimJoint510 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_2")
HAnimJoint510.name = "r_metatarsophalangeal_2"
HAnimJoint510.center = [-3.6595,0.0085,4.8125]
HAnimSegment511 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_2")
HAnimSegment511.name = "r_tarsal_proximal_phalanx_2"
Transform512 = x3d.Transform()
Transform512.translation = [-3.6595,0.0085,4.8125]
Transform513 = x3d.Transform()
Shape514 = x3d.Shape(USE="HAnimJointShape")

Transform513.children.append(Shape514)

Transform512.children.append(Transform513)

HAnimSegment511.children.append(Transform512)
Shape515 = x3d.Shape()
LineSet516 = x3d.LineSet()
LineSet516.vertexCount = [2]
ColorRGBA517 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet516.color = ColorRGBA517
Coordinate518 = x3d.Coordinate()
Coordinate518.point = [(-3.6595, 0.0085, 4.8125),(-3.7385, 0.0054, 5.5315)]

LineSet516.coord = Coordinate518

Shape515.geometry = LineSet516

HAnimSegment511.children.append(Shape515)

HAnimJoint510.children.append(HAnimSegment511)
HAnimJoint519 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_2")
HAnimJoint519.name = "r_tarsal_proximal_interphalangeal_2"
HAnimJoint519.center = [-3.7385,0.0054,5.5315]
HAnimSegment520 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_2")
HAnimSegment520.name = "r_tarsal_middle_phalanx_2"
Transform521 = x3d.Transform()
Transform521.translation = [-3.7385,0.0054,5.5315]
Transform522 = x3d.Transform()
Shape523 = x3d.Shape(USE="HAnimJointShape")

Transform522.children.append(Shape523)

Transform521.children.append(Transform522)

HAnimSegment520.children.append(Transform521)
Shape524 = x3d.Shape()
LineSet525 = x3d.LineSet()
LineSet525.vertexCount = [2]
ColorRGBA526 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet525.color = ColorRGBA526
Coordinate527 = x3d.Coordinate()
Coordinate527.point = [(-3.7385, 0.0054, 5.5315),(-3.7385, 0.0017, 5.9505)]

LineSet525.coord = Coordinate527

Shape524.geometry = LineSet525

HAnimSegment520.children.append(Shape524)
HAnimSite528 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_2_tip")
HAnimSite528.name = "r_tarsal_distal_phalanx_2_tip"
HAnimSite528.translation = [-0.0883,0.0134,0.1383]
TouchSensor529 = x3d.TouchSensor()
TouchSensor529.description = "HAnimSite r_tarsal_distal_phalanx_2_tip"

HAnimSite528.children.append(TouchSensor529)
Shape530 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite528.children.append(Shape530)

HAnimSegment520.children.append(HAnimSite528)

HAnimJoint519.children.append(HAnimSegment520)
HAnimJoint531 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint531.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint531.center = [-3.7385,0.0017,5.9505]

HAnimJoint519.children.append(HAnimJoint531)

HAnimJoint510.children.append(HAnimJoint519)

HAnimJoint501.children.append(HAnimJoint510)

HAnimJoint492.children.append(HAnimJoint501)

HAnimJoint441.children.append(HAnimJoint492)
HAnimJoint532 = x3d.HAnimJoint(DEF="hanim_r_cuneonavicular_3")
HAnimJoint532.name = "r_cuneonavicular_3"
HAnimJoint532.center = [-4.1245,0.0328,1.3453]
HAnimSegment533 = x3d.HAnimSegment(DEF="hanim_r_cuneiform_3")
HAnimSegment533.name = "r_cuneiform_3"
Transform534 = x3d.Transform()
Transform534.translation = [-4.1245,0.0328,1.3453]
Transform535 = x3d.Transform()
Shape536 = x3d.Shape(USE="HAnimJointShape")

Transform535.children.append(Shape536)

Transform534.children.append(Transform535)

HAnimSegment533.children.append(Transform534)
Shape537 = x3d.Shape()
LineSet538 = x3d.LineSet()
LineSet538.vertexCount = [2]
ColorRGBA539 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet538.color = ColorRGBA539
Coordinate540 = x3d.Coordinate()
Coordinate540.point = [(-4.1245, 0.0328, 1.3453),(-3.7385, 0.0017, 5.9505)]

LineSet538.coord = Coordinate540

Shape537.geometry = LineSet538

HAnimSegment533.children.append(Shape537)

HAnimJoint532.children.append(HAnimSegment533)
HAnimJoint541 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_3 ")
HAnimJoint541.name = "r_tarsometatarsal_3 "
HAnimSegment542 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_3")
HAnimSegment542.name = "r_metatarsal_3"
Transform543 = x3d.Transform()
Transform543.translation = [-4.1245,0.0328,1.3453]
Transform544 = x3d.Transform()
Shape545 = x3d.Shape(USE="HAnimJointShape")

Transform544.children.append(Shape545)

Transform543.children.append(Transform544)

HAnimSegment542.children.append(Transform543)
Shape546 = x3d.Shape()
LineSet547 = x3d.LineSet()
LineSet547.vertexCount = [2]
ColorRGBA548 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet547.color = ColorRGBA548
Coordinate549 = x3d.Coordinate()
Coordinate549.point = [(-4.2795, 0.0086, 4.7055)]

LineSet547.coord = Coordinate549

Shape546.geometry = LineSet547

HAnimSegment542.children.append(Shape546)

HAnimJoint541.children.append(HAnimSegment542)
HAnimJoint550 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_3")
HAnimJoint550.name = "r_metatarsophalangeal_3"
HAnimJoint550.center = [-4.2795,0.0086,4.7055]
HAnimSegment551 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_3")
HAnimSegment551.name = "r_tarsal_proximal_phalanx_3"
Transform552 = x3d.Transform()
Transform552.translation = [-4.2795,0.0086,4.7055]
Transform553 = x3d.Transform()
Shape554 = x3d.Shape(USE="HAnimJointShape")

Transform553.children.append(Shape554)

Transform552.children.append(Transform553)

HAnimSegment551.children.append(Transform552)
Shape555 = x3d.Shape()
LineSet556 = x3d.LineSet()
LineSet556.vertexCount = [2]
ColorRGBA557 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet556.color = ColorRGBA557
Coordinate558 = x3d.Coordinate()
Coordinate558.point = [(-4.2795, 0.0086, 4.7055),(-4.3865, 0.0044, 5.3745)]

LineSet556.coord = Coordinate558

Shape555.geometry = LineSet556

HAnimSegment551.children.append(Shape555)

HAnimJoint550.children.append(HAnimSegment551)
HAnimJoint559 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_3")
HAnimJoint559.name = "r_tarsal_proximal_interphalangeal_3"
HAnimJoint559.center = [-4.3865,0.0044,5.3745]
HAnimSegment560 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_3")
HAnimSegment560.name = "r_tarsal_middle_phalanx_3"
Transform561 = x3d.Transform()
Transform561.translation = [-4.3865,0.0044,5.3745]
Transform562 = x3d.Transform()
Shape563 = x3d.Shape(USE="HAnimJointShape")

Transform562.children.append(Shape563)

Transform561.children.append(Transform562)

HAnimSegment560.children.append(Transform561)
Shape564 = x3d.Shape()
LineSet565 = x3d.LineSet()
LineSet565.vertexCount = [2]
ColorRGBA566 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet565.color = ColorRGBA566
Coordinate567 = x3d.Coordinate()
Coordinate567.point = [(-4.3865, 0.0044, 5.3745),(-4.4545, 0.0017, 5.7845)]

LineSet565.coord = Coordinate567

Shape564.geometry = LineSet565

HAnimSegment560.children.append(Shape564)
HAnimSite568 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_3_tip")
HAnimSite568.name = "r_tarsal_distal_phalanx_3_tip"
TouchSensor569 = x3d.TouchSensor()
TouchSensor569.description = "HAnimSite r_tarsal_distal_phalanx_3_tip"

HAnimSite568.children.append(TouchSensor569)
Shape570 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite568.children.append(Shape570)

HAnimSegment560.children.append(HAnimSite568)

HAnimJoint559.children.append(HAnimSegment560)
HAnimJoint571 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_3")
HAnimJoint571.name = "r_tarsal_distal_interphalangeal_3"
HAnimJoint571.center = [-4.4545,0.0017,5.7845]

HAnimJoint559.children.append(HAnimJoint571)

HAnimJoint550.children.append(HAnimJoint559)

HAnimJoint541.children.append(HAnimJoint550)

HAnimJoint532.children.append(HAnimJoint541)

HAnimJoint441.children.append(HAnimJoint532)

HAnimJoint428.children.append(HAnimJoint441)
HAnimJoint572 = x3d.HAnimJoint(DEF="hanim_r_calcaneocuboid")
HAnimJoint572.name = "r_calcaneocuboid"
HAnimJoint572.center = [-3.9515,0.0653,-0.6895]
HAnimSegment573 = x3d.HAnimSegment(DEF="hanim_r_calcaneus")
HAnimSegment573.name = "r_calcaneus"
Transform574 = x3d.Transform()
Transform574.translation = [-3.9515,0.0653,-0.6895]
Transform575 = x3d.Transform()
Shape576 = x3d.Shape(USE="HAnimJointShape")

Transform575.children.append(Shape576)

Transform574.children.append(Transform575)

HAnimSegment573.children.append(Transform574)
Shape577 = x3d.Shape()
LineSet578 = x3d.LineSet()
LineSet578.vertexCount = [2]
ColorRGBA579 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet578.color = ColorRGBA579
Coordinate580 = x3d.Coordinate()
Coordinate580.point = [(-3.9515, 0.0653, -0.6895),(-4.9095, 0.0353, 0.5574)]

LineSet578.coord = Coordinate580

Shape577.geometry = LineSet578

HAnimSegment573.children.append(Shape577)

HAnimJoint572.children.append(HAnimSegment573)
HAnimJoint581 = x3d.HAnimJoint(DEF="hanim_r_transversetarsal")
HAnimJoint581.name = "r_transversetarsal"
HAnimJoint581.center = [-4.9095,0.0353,0.5574]
HAnimSegment582 = x3d.HAnimSegment(DEF="hanim_r_cuboid")
HAnimSegment582.name = "r_cuboid"
Transform583 = x3d.Transform()
Transform583.translation = [-4.9095,0.0353,0.5574]
Transform584 = x3d.Transform()
Shape585 = x3d.Shape(USE="HAnimJointShape")

Transform584.children.append(Shape585)

Transform583.children.append(Transform584)

HAnimSegment582.children.append(Transform583)
Shape586 = x3d.Shape()
LineSet587 = x3d.LineSet()
LineSet587.vertexCount = [2]
ColorRGBA588 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet587.color = ColorRGBA588
Coordinate589 = x3d.Coordinate()
Coordinate589.point = [(-4.9095, 0.0353, 0.5574),(-4.7255, 0.0211, 2.1725)]

LineSet587.coord = Coordinate589

Shape586.geometry = LineSet587

HAnimSegment582.children.append(Shape586)
Shape590 = x3d.Shape()
LineSet591 = x3d.LineSet()
LineSet591.vertexCount = [2]
ColorRGBA592 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet591.color = ColorRGBA592
Coordinate593 = x3d.Coordinate()
Coordinate593.point = [(-4.9095, 0.0353, 0.5574),(-5.3615, 0.0164, 2.0085)]

LineSet591.coord = Coordinate593

Shape590.geometry = LineSet591

HAnimSegment582.children.append(Shape590)

HAnimJoint581.children.append(HAnimSegment582)
HAnimJoint594 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_4")
HAnimJoint594.name = "r_tarsometatarsal_4"
HAnimJoint594.center = [-4.7255,0.0211,2.1725]
HAnimSegment595 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_4")
HAnimSegment595.name = "r_metatarsal_4"
Transform596 = x3d.Transform()
Transform596.translation = [-4.7255,0.0211,2.1725]
Transform597 = x3d.Transform()
Shape598 = x3d.Shape(USE="HAnimJointShape")

Transform597.children.append(Shape598)

Transform596.children.append(Transform597)

HAnimSegment595.children.append(Transform596)
Shape599 = x3d.Shape()
LineSet600 = x3d.LineSet()
LineSet600.vertexCount = [2]
ColorRGBA601 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet600.color = ColorRGBA601
Coordinate602 = x3d.Coordinate()
Coordinate602.point = [(-4.7255, 0.0211, 2.1725),(-4.8755, 0.0076, 4.5165)]

LineSet600.coord = Coordinate602

Shape599.geometry = LineSet600

HAnimSegment595.children.append(Shape599)

HAnimJoint594.children.append(HAnimSegment595)
HAnimJoint603 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_4")
HAnimJoint603.name = "r_metatarsophalangeal_4"
HAnimJoint603.center = [-4.8755,0.0076,4.5165]
HAnimSegment604 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_4")
HAnimSegment604.name = "r_tarsal_proximal_phalanx_4"
Transform605 = x3d.Transform()
Transform605.translation = [-4.8755,0.0076,4.5165]
Transform606 = x3d.Transform()
Shape607 = x3d.Shape(USE="HAnimJointShape")

Transform606.children.append(Shape607)

Transform605.children.append(Transform606)

HAnimSegment604.children.append(Transform605)
Shape608 = x3d.Shape()
LineSet609 = x3d.LineSet()
LineSet609.vertexCount = [2]
ColorRGBA610 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet609.color = ColorRGBA610
Coordinate611 = x3d.Coordinate()
Coordinate611.point = [(-4.8755, 0.0076, 4.5165),(-5.0655, 0.0049, 5.1895)]

LineSet609.coord = Coordinate611

Shape608.geometry = LineSet609

HAnimSegment604.children.append(Shape608)

HAnimJoint603.children.append(HAnimSegment604)
HAnimJoint612 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_4")
HAnimJoint612.name = "r_tarsal_proximal_interphalangeal_4"
HAnimJoint612.center = [-5.0655,0.0049,5.1895]
HAnimSegment613 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_4")
HAnimSegment613.name = "r_tarsal_middle_phalanx_4"
Transform614 = x3d.Transform()
Transform614.translation = [-5.0655,0.0049,5.1895]
Transform615 = x3d.Transform()
Shape616 = x3d.Shape(USE="HAnimJointShape")

Transform615.children.append(Shape616)

Transform614.children.append(Transform615)

HAnimSegment613.children.append(Transform614)
Shape617 = x3d.Shape()
LineSet618 = x3d.LineSet()
LineSet618.vertexCount = [2]
ColorRGBA619 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet618.color = ColorRGBA619
Coordinate620 = x3d.Coordinate()
Coordinate620.point = [(-5.0655, 0.0049, 5.1895),(-5.1335, 0.0011, 5.5175)]

LineSet618.coord = Coordinate620

Shape617.geometry = LineSet618

HAnimSegment613.children.append(Shape617)
HAnimSite621 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_4_tip")
HAnimSite621.name = "r_tarsal_distal_phalanx_4_tip"
TouchSensor622 = x3d.TouchSensor()
TouchSensor622.description = "HAnimSite r_tarsal_distal_phalanx_4_tip"

HAnimSite621.children.append(TouchSensor622)
Shape623 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite621.children.append(Shape623)

HAnimSegment613.children.append(HAnimSite621)

HAnimJoint612.children.append(HAnimSegment613)
HAnimJoint624 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_4")
HAnimJoint624.name = "r_tarsal_distal_interphalangeal_4"
HAnimJoint624.center = [-5.1335,0.0011,5.5175]

HAnimJoint612.children.append(HAnimJoint624)

HAnimJoint603.children.append(HAnimJoint612)

HAnimJoint594.children.append(HAnimJoint603)

HAnimJoint581.children.append(HAnimJoint594)
HAnimJoint625 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_5")
HAnimJoint625.name = "r_tarsometatarsal_5"
HAnimJoint625.center = [-5.3615,0.0164,2.0085]
HAnimSegment626 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_5")
HAnimSegment626.name = "r_metatarsal_5"
Transform627 = x3d.Transform()
Transform627.translation = [-5.3615,0.0164,2.0085]
Transform628 = x3d.Transform()
Shape629 = x3d.Shape(USE="HAnimJointShape")

Transform628.children.append(Shape629)

Transform627.children.append(Transform628)

HAnimSegment626.children.append(Transform627)
Shape630 = x3d.Shape()
LineSet631 = x3d.LineSet()
LineSet631.vertexCount = [2]
ColorRGBA632 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet631.color = ColorRGBA632
Coordinate633 = x3d.Coordinate()
Coordinate633.point = [(-5.3615, 0.0164, 2.0085),(-5.5055, 0.0067, 4.3115)]

LineSet631.coord = Coordinate633

Shape630.geometry = LineSet631

HAnimSegment626.children.append(Shape630)
HAnimSite634 = x3d.HAnimSite(DEF="hanim_r_metatarsal_phalanx_5_pt")
HAnimSite634.name = "r_metatarsal_phalanx_5_pt"
TouchSensor635 = x3d.TouchSensor()
TouchSensor635.description = "HAnimSite r_metatarsal_phalanx_5_pt"

HAnimSite634.children.append(TouchSensor635)
Shape636 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite634.children.append(Shape636)

HAnimSegment626.children.append(HAnimSite634)

HAnimJoint625.children.append(HAnimSegment626)
HAnimJoint637 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_5")
HAnimJoint637.name = "r_metatarsophalangeal_5"
HAnimJoint637.center = [-5.5055,0.0067,4.3115]
HAnimSegment638 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_5")
HAnimSegment638.name = "r_tarsal_proximal_phalanx_5"
Transform639 = x3d.Transform()
Transform639.translation = [-5.5055,0.0067,4.3115]
Transform640 = x3d.Transform()
Shape641 = x3d.Shape(USE="HAnimJointShape")

Transform640.children.append(Shape641)

Transform639.children.append(Transform640)

HAnimSegment638.children.append(Transform639)
Shape642 = x3d.Shape()
LineSet643 = x3d.LineSet()
LineSet643.vertexCount = [2]
ColorRGBA644 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet643.color = ColorRGBA644
Coordinate645 = x3d.Coordinate()
Coordinate645.point = [(-5.5055, 0.0067, 4.3115),(-5.6085, 0.003, 4.6485)]

LineSet643.coord = Coordinate645

Shape642.geometry = LineSet643

HAnimSegment638.children.append(Shape642)

HAnimJoint637.children.append(HAnimSegment638)
HAnimJoint646 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_5")
HAnimJoint646.name = "r_tarsal_proximal_interphalangeal_5"
HAnimJoint646.center = [-5.6085,0.003,4.6485]
HAnimSegment647 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_5")
HAnimSegment647.name = "r_tarsal_middle_phalanx_5"
Transform648 = x3d.Transform()
Transform648.translation = [-5.6085,0.003,4.6485]
Transform649 = x3d.Transform()
Shape650 = x3d.Shape(USE="HAnimJointShape")

Transform649.children.append(Shape650)

Transform648.children.append(Transform649)

HAnimSegment647.children.append(Transform648)
Shape651 = x3d.Shape()
LineSet652 = x3d.LineSet()
LineSet652.vertexCount = [2]
ColorRGBA653 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet652.color = ColorRGBA653
Coordinate654 = x3d.Coordinate()
Coordinate654.point = [(-5.6085, 0.003, 4.6485),(-5.6495, 0, 4.9925)]

LineSet652.coord = Coordinate654

Shape651.geometry = LineSet652

HAnimSegment647.children.append(Shape651)
HAnimSite655 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_5_tip")
HAnimSite655.name = "r_tarsal_distal_phalanx_5_tip"
TouchSensor656 = x3d.TouchSensor()
TouchSensor656.description = "HAnimSite r_tarsal_distal_phalanx_5_tip"

HAnimSite655.children.append(TouchSensor656)
Shape657 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite655.children.append(Shape657)

HAnimSegment647.children.append(HAnimSite655)

HAnimJoint646.children.append(HAnimSegment647)
HAnimJoint658 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_5")
HAnimJoint658.name = "r_tarsal_distal_interphalangeal_5"
HAnimJoint658.center = [-5.6495,0,4.9925]

HAnimJoint646.children.append(HAnimJoint658)

HAnimJoint637.children.append(HAnimJoint646)

HAnimJoint625.children.append(HAnimJoint637)

HAnimJoint581.children.append(HAnimJoint625)

HAnimJoint572.children.append(HAnimJoint581)

HAnimJoint428.children.append(HAnimJoint572)

HAnimJoint413.children.append(HAnimJoint428)

HAnimJoint395.children.append(HAnimJoint413)

HAnimJoint94.children.append(HAnimJoint395)

HAnimJoint42.children.append(HAnimJoint94)
HAnimJoint659 = x3d.HAnimJoint(DEF="hanim_vl5")
HAnimJoint659.name = "vl5"
HAnimJoint659.center = [0.0028,1.0568,-0.0776]
HAnimSegment660 = x3d.HAnimSegment(DEF="hanim_l5")
HAnimSegment660.name = "l5"
Transform661 = x3d.Transform()
Transform661.translation = [0.0028,1.0568,-0.0776]
Transform662 = x3d.Transform()
Shape663 = x3d.Shape(USE="HAnimJointShape")

Transform662.children.append(Shape663)

Transform661.children.append(Transform662)

HAnimSegment660.children.append(Transform661)
Shape664 = x3d.Shape()
LineSet665 = x3d.LineSet()
LineSet665.vertexCount = [2]
ColorRGBA666 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet665.color = ColorRGBA666
Coordinate667 = x3d.Coordinate()
Coordinate667.point = [(0.0028, 1.0568, -0.0776),(0.0035, 1.0925, -0.0787)]

LineSet665.coord = Coordinate667

Shape664.geometry = LineSet665

HAnimSegment660.children.append(Shape664)

HAnimJoint659.children.append(HAnimSegment660)
HAnimJoint668 = x3d.HAnimJoint(DEF="hanim_vl4")
HAnimJoint668.name = "vl4"
HAnimJoint668.center = [0.0035,1.0925,-0.0787]
HAnimSegment669 = x3d.HAnimSegment(DEF="hanim_l4")
HAnimSegment669.name = "l4"
Transform670 = x3d.Transform()
Transform670.translation = [0.0035,1.0925,-0.0787]
Transform671 = x3d.Transform()
Shape672 = x3d.Shape(USE="HAnimJointShape")

Transform671.children.append(Shape672)

Transform670.children.append(Transform671)

HAnimSegment669.children.append(Transform670)
Shape673 = x3d.Shape()
LineSet674 = x3d.LineSet()
LineSet674.vertexCount = [2]
ColorRGBA675 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet674.color = ColorRGBA675
Coordinate676 = x3d.Coordinate()
Coordinate676.point = [(0.0035, 1.0925, -0.0787),(0.0041, 1.1276, -0.0796)]

LineSet674.coord = Coordinate676

Shape673.geometry = LineSet674

HAnimSegment669.children.append(Shape673)

HAnimJoint668.children.append(HAnimSegment669)
HAnimJoint677 = x3d.HAnimJoint(DEF="hanim_vl3")
HAnimJoint677.name = "vl3"
HAnimJoint677.center = [0.0041,1.1276,-0.0796]
HAnimSegment678 = x3d.HAnimSegment(DEF="hanim_l3")
HAnimSegment678.name = "l3"
Transform679 = x3d.Transform()
Transform679.translation = [0.0041,1.1276,-0.0796]
Transform680 = x3d.Transform()
Shape681 = x3d.Shape(USE="HAnimJointShape")

Transform680.children.append(Shape681)

Transform679.children.append(Transform680)

HAnimSegment678.children.append(Transform679)
Shape682 = x3d.Shape()
LineSet683 = x3d.LineSet()
LineSet683.vertexCount = [2]
ColorRGBA684 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet683.color = ColorRGBA684
Coordinate685 = x3d.Coordinate()
Coordinate685.point = [(0.0041, 1.1276, -0.0796),(0.0045, 1.1546, -0.08)]

LineSet683.coord = Coordinate685

Shape682.geometry = LineSet683

HAnimSegment678.children.append(Shape682)
HAnimSite686 = x3d.HAnimSite(DEF="hanim_l_rib10_pt")
HAnimSite686.name = "l_rib10_pt"
HAnimSite686.translation = [0.0871,1.1925,0.0992]
TouchSensor687 = x3d.TouchSensor()
TouchSensor687.description = "HAnimSite l_rib10_pt"

HAnimSite686.children.append(TouchSensor687)
Shape688 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite686.children.append(Shape688)

HAnimSegment678.children.append(HAnimSite686)
HAnimSite689 = x3d.HAnimSite(DEF="hanim_r_rib10_pt")
HAnimSite689.name = "r_rib10_pt"
HAnimSite689.translation = [-0.0711,1.1941,0.1016]
TouchSensor690 = x3d.TouchSensor()
TouchSensor690.description = "HAnimSite r_rib10_pt"

HAnimSite689.children.append(TouchSensor690)
Shape691 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite689.children.append(Shape691)

HAnimSegment678.children.append(HAnimSite689)
HAnimSite692 = x3d.HAnimSite(DEF="hanim_spine_2_middle_back_pt")
HAnimSite692.name = "spine_2_middle_back_pt"
TouchSensor693 = x3d.TouchSensor()
TouchSensor693.description = "HAnimSite spine_2_middle_back_pt"

HAnimSite692.children.append(TouchSensor693)
Shape694 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite692.children.append(Shape694)

HAnimSegment678.children.append(HAnimSite692)

HAnimJoint677.children.append(HAnimSegment678)
HAnimJoint695 = x3d.HAnimJoint(DEF="hanim_vl2")
HAnimJoint695.name = "vl2"
HAnimJoint695.center = [0.0045,1.1546,-0.08]
HAnimSegment696 = x3d.HAnimSegment(DEF="hanim_l2")
HAnimSegment696.name = "l2"
Transform697 = x3d.Transform()
Transform697.translation = [0.0045,1.1546,-0.08]
Transform698 = x3d.Transform()
Shape699 = x3d.Shape(USE="HAnimJointShape")

Transform698.children.append(Shape699)

Transform697.children.append(Transform698)

HAnimSegment696.children.append(Transform697)
Shape700 = x3d.Shape()
LineSet701 = x3d.LineSet()
LineSet701.vertexCount = [2]
ColorRGBA702 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet701.color = ColorRGBA702
Coordinate703 = x3d.Coordinate()
Coordinate703.point = [(0.0045, 1.1546, -0.08),(0.0048, 1.1912, -0.0805)]

LineSet701.coord = Coordinate703

Shape700.geometry = LineSet701

HAnimSegment696.children.append(Shape700)

HAnimJoint695.children.append(HAnimSegment696)
HAnimJoint704 = x3d.HAnimJoint(DEF="hanim_vl1")
HAnimJoint704.name = "vl1"
HAnimJoint704.center = [0.0048,1.1912,-0.0805]
HAnimSegment705 = x3d.HAnimSegment(DEF="hanim_l1")
HAnimSegment705.name = "l1"
Transform706 = x3d.Transform()
Transform706.translation = [0.0048,1.1912,-0.0805]
Transform707 = x3d.Transform()
Shape708 = x3d.Shape(USE="HAnimJointShape")

Transform707.children.append(Shape708)

Transform706.children.append(Transform707)

HAnimSegment705.children.append(Transform706)
Shape709 = x3d.Shape()
LineSet710 = x3d.LineSet()
LineSet710.vertexCount = [2]
ColorRGBA711 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet710.color = ColorRGBA711
Coordinate712 = x3d.Coordinate()
Coordinate712.point = [(0.0048, 1.1912, -0.0805),(0.0051, 1.2278, -0.0808)]

LineSet710.coord = Coordinate712

Shape709.geometry = LineSet710

HAnimSegment705.children.append(Shape709)

HAnimJoint704.children.append(HAnimSegment705)
HAnimJoint713 = x3d.HAnimJoint(DEF="hanim_vt12")
HAnimJoint713.name = "vt12"
HAnimJoint713.center = [0.0051,1.2278,-0.0808]
HAnimSegment714 = x3d.HAnimSegment(DEF="hanim_t12")
HAnimSegment714.name = "t12"
Transform715 = x3d.Transform()
Transform715.translation = [0.0051,1.2278,-0.0808]
Transform716 = x3d.Transform()
Shape717 = x3d.Shape(USE="HAnimJointShape")

Transform716.children.append(Shape717)

Transform715.children.append(Transform716)

HAnimSegment714.children.append(Transform715)
Shape718 = x3d.Shape()
LineSet719 = x3d.LineSet()
LineSet719.vertexCount = [2]
ColorRGBA720 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet719.color = ColorRGBA720
Coordinate721 = x3d.Coordinate()
Coordinate721.point = [(0.0051, 1.2278, -0.0808),(0.0053, 1.2679, -0.081)]

LineSet719.coord = Coordinate721

Shape718.geometry = LineSet719

HAnimSegment714.children.append(Shape718)

HAnimJoint713.children.append(HAnimSegment714)
HAnimJoint722 = x3d.HAnimJoint(DEF="hanim_vt11")
HAnimJoint722.name = "vt11"
HAnimJoint722.center = [0.0053,1.2679,-0.081]
HAnimSegment723 = x3d.HAnimSegment(DEF="hanim_t11")
HAnimSegment723.name = "t11"
Transform724 = x3d.Transform()
Transform724.translation = [0.0053,1.2679,-0.081]
Transform725 = x3d.Transform()
Shape726 = x3d.Shape(USE="HAnimJointShape")

Transform725.children.append(Shape726)

Transform724.children.append(Transform725)

HAnimSegment723.children.append(Transform724)
Shape727 = x3d.Shape()
LineSet728 = x3d.LineSet()
LineSet728.vertexCount = [2]
ColorRGBA729 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet728.color = ColorRGBA729
Coordinate730 = x3d.Coordinate()
Coordinate730.point = [(0.0053, 1.2679, -0.081),(0.0056, 1.2848, -0.0822)]

LineSet728.coord = Coordinate730

Shape727.geometry = LineSet728

HAnimSegment723.children.append(Shape727)
HAnimSite731 = x3d.HAnimSite(DEF="hanim_substernale_pt")
HAnimSite731.name = "substernale_pt"
HAnimSite731.translation = [0.0085,1.2995,0.1147]
TouchSensor732 = x3d.TouchSensor()
TouchSensor732.description = "HAnimSite substernale_pt"

HAnimSite731.children.append(TouchSensor732)
Shape733 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite731.children.append(Shape733)

HAnimSegment723.children.append(HAnimSite731)

HAnimJoint722.children.append(HAnimSegment723)
HAnimJoint734 = x3d.HAnimJoint(DEF="hanim_vt10")
HAnimJoint734.name = "vt10"
HAnimJoint734.center = [0.0056,1.2848,-0.0822]
HAnimSegment735 = x3d.HAnimSegment(DEF="hanim_t10")
HAnimSegment735.name = "t10"
Transform736 = x3d.Transform()
Transform736.translation = [0.0056,1.2848,-0.0822]
Transform737 = x3d.Transform()
Shape738 = x3d.Shape(USE="HAnimJointShape")

Transform737.children.append(Shape738)

Transform736.children.append(Transform737)

HAnimSegment735.children.append(Transform736)
Shape739 = x3d.Shape()
LineSet740 = x3d.LineSet()
LineSet740.vertexCount = [2]
ColorRGBA741 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet740.color = ColorRGBA741
Coordinate742 = x3d.Coordinate()
Coordinate742.point = [(0.0056, 1.2848, -0.0822),(0.0057, 1.3126, -0.0838)]

LineSet740.coord = Coordinate742

Shape739.geometry = LineSet740

HAnimSegment735.children.append(Shape739)
HAnimSite743 = x3d.HAnimSite(DEF="hanim_l_thelion_pt")
HAnimSite743.name = "l_thelion_pt"
HAnimSite743.translation = [0.0918,1.3382,0.1192]
TouchSensor744 = x3d.TouchSensor()
TouchSensor744.description = "HAnimSite l_thelion_pt"

HAnimSite743.children.append(TouchSensor744)
Shape745 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite743.children.append(Shape745)

HAnimSegment735.children.append(HAnimSite743)
HAnimSite746 = x3d.HAnimSite(DEF="hanim_r_thelion_pt")
HAnimSite746.name = "r_thelion_pt"
HAnimSite746.translation = [-0.0736,1.3385,0.1217]
TouchSensor747 = x3d.TouchSensor()
TouchSensor747.description = "HAnimSite r_thelion_pt"

HAnimSite746.children.append(TouchSensor747)
Shape748 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite746.children.append(Shape748)

HAnimSegment735.children.append(HAnimSite746)

HAnimJoint734.children.append(HAnimSegment735)
HAnimJoint749 = x3d.HAnimJoint(DEF="hanim_vt9")
HAnimJoint749.name = "vt9"
HAnimJoint749.center = [0.0057,1.3126,-0.0838]
HAnimSegment750 = x3d.HAnimSegment(DEF="hanim_t9")
HAnimSegment750.name = "t9"
Transform751 = x3d.Transform()
Transform751.translation = [0.0057,1.3126,-0.0838]
Transform752 = x3d.Transform()
Shape753 = x3d.Shape(USE="HAnimJointShape")

Transform752.children.append(Shape753)

Transform751.children.append(Transform752)

HAnimSegment750.children.append(Transform751)
Shape754 = x3d.Shape()
LineSet755 = x3d.LineSet()
LineSet755.vertexCount = [2]
ColorRGBA756 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet755.color = ColorRGBA756
Coordinate757 = x3d.Coordinate()
Coordinate757.point = [(0.0057, 1.3126, -0.0838),(0.0057, 1.3382, -0.0845)]

LineSet755.coord = Coordinate757

Shape754.geometry = LineSet755

HAnimSegment750.children.append(Shape754)

HAnimJoint749.children.append(HAnimSegment750)
HAnimJoint758 = x3d.HAnimJoint(DEF="hanim_vt8")
HAnimJoint758.name = "vt8"
HAnimJoint758.center = [0.0057,1.3382,-0.0845]
HAnimSegment759 = x3d.HAnimSegment(DEF="hanim_t8")
HAnimSegment759.name = "t8"
Transform760 = x3d.Transform()
Transform760.translation = [0.0057,1.3382,-0.0845]
Transform761 = x3d.Transform()
Shape762 = x3d.Shape(USE="HAnimJointShape")

Transform761.children.append(Shape762)

Transform760.children.append(Transform761)

HAnimSegment759.children.append(Transform760)
Shape763 = x3d.Shape()
LineSet764 = x3d.LineSet()
LineSet764.vertexCount = [2]
ColorRGBA765 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet764.color = ColorRGBA765
Coordinate766 = x3d.Coordinate()
Coordinate766.point = [(0.0057, 1.3382, -0.0845),(0.0058, 1.3625, -0.0833)]

LineSet764.coord = Coordinate766

Shape763.geometry = LineSet764

HAnimSegment759.children.append(Shape763)

HAnimJoint758.children.append(HAnimSegment759)
HAnimJoint767 = x3d.HAnimJoint(DEF="hanim_vt7")
HAnimJoint767.name = "vt7"
HAnimJoint767.center = [0.0058,1.3625,-0.0833]
HAnimSegment768 = x3d.HAnimSegment(DEF="hanim_t7")
HAnimSegment768.name = "t7"
Transform769 = x3d.Transform()
Transform769.translation = [0.0058,1.3625,-0.0833]
Transform770 = x3d.Transform()
Shape771 = x3d.Shape(USE="HAnimJointShape")

Transform770.children.append(Shape771)

Transform769.children.append(Transform770)

HAnimSegment768.children.append(Transform769)
Shape772 = x3d.Shape()
LineSet773 = x3d.LineSet()
LineSet773.vertexCount = [2]
ColorRGBA774 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet773.color = ColorRGBA774
Coordinate775 = x3d.Coordinate()
Coordinate775.point = [(0.0058, 1.3625, -0.0833),(0.0059, 1.3866, -0.08)]

LineSet773.coord = Coordinate775

Shape772.geometry = LineSet773

HAnimSegment768.children.append(Shape772)
HAnimSite776 = x3d.HAnimSite(DEF="hanim_l_chest_midsagittal_plane_pt")
HAnimSite776.name = "l_chest_midsagittal_plane_pt"
TouchSensor777 = x3d.TouchSensor()
TouchSensor777.description = "HAnimSite l_chest_midsagittal_plane_pt"

HAnimSite776.children.append(TouchSensor777)
Shape778 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite776.children.append(Shape778)

HAnimSegment768.children.append(HAnimSite776)
HAnimSite779 = x3d.HAnimSite(DEF="hanim_mesosternale_pt")
HAnimSite779.name = "mesosternale_pt"
TouchSensor780 = x3d.TouchSensor()
TouchSensor780.description = "HAnimSite mesosternale_pt"

HAnimSite779.children.append(TouchSensor780)
Shape781 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite779.children.append(Shape781)

HAnimSegment768.children.append(HAnimSite779)
HAnimSite782 = x3d.HAnimSite(DEF="hanim_r_chest_midsagittal_plane_pt")
HAnimSite782.name = "r_chest_midsagittal_plane_pt"
TouchSensor783 = x3d.TouchSensor()
TouchSensor783.description = "HAnimSite r_chest_midsagittal_plane_pt"

HAnimSite782.children.append(TouchSensor783)
Shape784 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite782.children.append(Shape784)

HAnimSegment768.children.append(HAnimSite782)
HAnimSite785 = x3d.HAnimSite(DEF="hanim_rear_center_midsagittal_plane_pt")
HAnimSite785.name = "rear_center_midsagittal_plane_pt"
TouchSensor786 = x3d.TouchSensor()
TouchSensor786.description = "HAnimSite rear_center_midsagittal_plane_pt"

HAnimSite785.children.append(TouchSensor786)
Shape787 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite785.children.append(Shape787)

HAnimSegment768.children.append(HAnimSite785)

HAnimJoint767.children.append(HAnimSegment768)
HAnimJoint788 = x3d.HAnimJoint(DEF="hanim_vt6")
HAnimJoint788.name = "vt6"
HAnimJoint788.center = [0.0059,1.3866,-0.08]
HAnimSegment789 = x3d.HAnimSegment(DEF="hanim_t6")
HAnimSegment789.name = "t6"
Transform790 = x3d.Transform()
Transform790.translation = [0.0059,1.3866,-0.08]
Transform791 = x3d.Transform()
Shape792 = x3d.Shape(USE="HAnimJointShape")

Transform791.children.append(Shape792)

Transform790.children.append(Transform791)

HAnimSegment789.children.append(Transform790)
Shape793 = x3d.Shape()
LineSet794 = x3d.LineSet()
LineSet794.vertexCount = [2]
ColorRGBA795 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet794.color = ColorRGBA795
Coordinate796 = x3d.Coordinate()
Coordinate796.point = [(0.0059, 1.3866, -0.08),(0.006, 1.4102, -0.0745)]

LineSet794.coord = Coordinate796

Shape793.geometry = LineSet794

HAnimSegment789.children.append(Shape793)
HAnimSite797 = x3d.HAnimSite(DEF="hanim_spine_1_middle_back_pt")
HAnimSite797.name = "spine_1_middle_back_pt"
TouchSensor798 = x3d.TouchSensor()
TouchSensor798.description = "HAnimSite spine_1_middle_back_pt"

HAnimSite797.children.append(TouchSensor798)
Shape799 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite797.children.append(Shape799)

HAnimSegment789.children.append(HAnimSite797)

HAnimJoint788.children.append(HAnimSegment789)
HAnimJoint800 = x3d.HAnimJoint(DEF="hanim_vt5")
HAnimJoint800.name = "vt5"
HAnimJoint800.center = [0.006,1.4102,-0.0745]
HAnimSegment801 = x3d.HAnimSegment(DEF="hanim_t5")
HAnimSegment801.name = "t5"
Transform802 = x3d.Transform()
Transform802.translation = [0.006,1.4102,-0.0745]
Transform803 = x3d.Transform()
Shape804 = x3d.Shape(USE="HAnimJointShape")

Transform803.children.append(Shape804)

Transform802.children.append(Transform803)

HAnimSegment801.children.append(Transform802)
Shape805 = x3d.Shape()
LineSet806 = x3d.LineSet()
LineSet806.vertexCount = [2]
ColorRGBA807 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet806.color = ColorRGBA807
Coordinate808 = x3d.Coordinate()
Coordinate808.point = [(0.006, 1.4102, -0.0745),(0.0061, 1.432, -0.0675)]

LineSet806.coord = Coordinate808

Shape805.geometry = LineSet806

HAnimSegment801.children.append(Shape805)

HAnimJoint800.children.append(HAnimSegment801)
HAnimJoint809 = x3d.HAnimJoint(DEF="hanim_vt4")
HAnimJoint809.name = "vt4"
HAnimJoint809.center = [0.0061,1.432,-0.0675]
HAnimSegment810 = x3d.HAnimSegment(DEF="hanim_t4")
HAnimSegment810.name = "t4"
Transform811 = x3d.Transform()
Transform811.translation = [0.0061,1.432,-0.0675]
Transform812 = x3d.Transform()
Shape813 = x3d.Shape(USE="HAnimJointShape")

Transform812.children.append(Shape813)

Transform811.children.append(Transform812)

HAnimSegment810.children.append(Transform811)
Shape814 = x3d.Shape()
LineSet815 = x3d.LineSet()
LineSet815.vertexCount = [2]
ColorRGBA816 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet815.color = ColorRGBA816
Coordinate817 = x3d.Coordinate()
Coordinate817.point = [(0.0061, 1.432, -0.0675),(0.0062, 1.4583, -0.057)]

LineSet815.coord = Coordinate817

Shape814.geometry = LineSet815

HAnimSegment810.children.append(Shape814)

HAnimJoint809.children.append(HAnimSegment810)
HAnimJoint818 = x3d.HAnimJoint(DEF="hanim_vt3")
HAnimJoint818.name = "vt3"
HAnimJoint818.center = [0.0062,1.4583,-0.057]
HAnimSegment819 = x3d.HAnimSegment(DEF="hanim_t3")
HAnimSegment819.name = "t3"
Transform820 = x3d.Transform()
Transform820.translation = [0.0062,1.4583,-0.057]
Transform821 = x3d.Transform()
Shape822 = x3d.Shape(USE="HAnimJointShape")

Transform821.children.append(Shape822)

Transform820.children.append(Transform821)

HAnimSegment819.children.append(Transform820)
Shape823 = x3d.Shape()
LineSet824 = x3d.LineSet()
LineSet824.vertexCount = [2]
ColorRGBA825 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet824.color = ColorRGBA825
Coordinate826 = x3d.Coordinate()
Coordinate826.point = [(0.0062, 1.4583, -0.057),(0.0063, 1.4761, -0.0484)]

LineSet824.coord = Coordinate826

Shape823.geometry = LineSet824

HAnimSegment819.children.append(Shape823)

HAnimJoint818.children.append(HAnimSegment819)
HAnimJoint827 = x3d.HAnimJoint(DEF="hanim_vt2")
HAnimJoint827.name = "vt2"
HAnimJoint827.center = [0.0063,1.4761,-0.0484]
HAnimSegment828 = x3d.HAnimSegment(DEF="hanim_t2")
HAnimSegment828.name = "t2"
Transform829 = x3d.Transform()
Transform829.translation = [0.0063,1.4761,-0.0484]
Transform830 = x3d.Transform()
Shape831 = x3d.Shape(USE="HAnimJointShape")

Transform830.children.append(Shape831)

Transform829.children.append(Transform830)

HAnimSegment828.children.append(Transform829)
Shape832 = x3d.Shape()
LineSet833 = x3d.LineSet()
LineSet833.vertexCount = [2]
ColorRGBA834 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet833.color = ColorRGBA834
Coordinate835 = x3d.Coordinate()
Coordinate835.point = [(0.0063, 1.4761, -0.0484),(0.0065, 1.4951, -0.0387)]

LineSet833.coord = Coordinate835

Shape832.geometry = LineSet833

HAnimSegment828.children.append(Shape832)
HAnimSite836 = x3d.HAnimSite(DEF="hanim_cervicale_pt")
HAnimSite836.name = "cervicale_pt"
HAnimSite836.translation = [0.0064,1.52,-0.0815]
TouchSensor837 = x3d.TouchSensor()
TouchSensor837.description = "HAnimSite cervicale_pt"

HAnimSite836.children.append(TouchSensor837)
Shape838 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite836.children.append(Shape838)

HAnimSegment828.children.append(HAnimSite836)
HAnimSite839 = x3d.HAnimSite(DEF="hanim_suprasternale_pt")
HAnimSite839.name = "suprasternale_pt"
HAnimSite839.translation = [0.0084,1.4714,0.0551]
TouchSensor840 = x3d.TouchSensor()
TouchSensor840.description = "HAnimSite suprasternale_pt"

HAnimSite839.children.append(TouchSensor840)
Shape841 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite839.children.append(Shape841)

HAnimSegment828.children.append(HAnimSite839)

HAnimJoint827.children.append(HAnimSegment828)
HAnimJoint842 = x3d.HAnimJoint(DEF="hanim_vt1")
HAnimJoint842.name = "vt1"
HAnimJoint842.center = [0.0065,1.4951,-0.0387]
HAnimSegment843 = x3d.HAnimSegment(DEF="hanim_t1")
HAnimSegment843.name = "t1"
Transform844 = x3d.Transform()
Transform844.translation = [0.0065,1.4951,-0.0387]
Transform845 = x3d.Transform()
Shape846 = x3d.Shape(USE="HAnimJointShape")

Transform845.children.append(Shape846)

Transform844.children.append(Transform845)

HAnimSegment843.children.append(Transform844)
Shape847 = x3d.Shape()
LineSet848 = x3d.LineSet()
LineSet848.vertexCount = [2]
ColorRGBA849 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet848.color = ColorRGBA849
Coordinate850 = x3d.Coordinate()
Coordinate850.point = [(0.0065, 1.4951, -0.0387),(0.0066, 1.5132, -0.0301)]

LineSet848.coord = Coordinate850

Shape847.geometry = LineSet848

HAnimSegment843.children.append(Shape847)
HAnimSite851 = x3d.HAnimSite(DEF="hanim_l_neck_base_pt")
HAnimSite851.name = "l_neck_base_pt"
HAnimSite851.translation = [0.0646,1.5141,-0.038]
TouchSensor852 = x3d.TouchSensor()
TouchSensor852.description = "HAnimSite l_neck_base_pt"

HAnimSite851.children.append(TouchSensor852)
Shape853 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite851.children.append(Shape853)

HAnimSegment843.children.append(HAnimSite851)
HAnimSite854 = x3d.HAnimSite(DEF="hanim_r_neck_base_pt")
HAnimSite854.name = "r_neck_base_pt"
HAnimSite854.translation = [-0.0419,1.5149,-0.022]
TouchSensor855 = x3d.TouchSensor()
TouchSensor855.description = "HAnimSite r_neck_base_pt"

HAnimSite854.children.append(TouchSensor855)
Shape856 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite854.children.append(Shape856)

HAnimSegment843.children.append(HAnimSite854)
Shape857 = x3d.Shape()
LineSet858 = x3d.LineSet()
LineSet858.vertexCount = [2]
ColorRGBA859 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet858.color = ColorRGBA859
Coordinate860 = x3d.Coordinate()
Coordinate860.point = [(0.0065, 1.4951, -0.0387),(0.082, 1.4488, -0.0353)]

LineSet858.coord = Coordinate860

Shape857.geometry = LineSet858

HAnimSegment843.children.append(Shape857)
HAnimSite861 = x3d.HAnimSite(DEF="hanim_l_acromion_pt")
HAnimSite861.name = "l_acromion_pt"
HAnimSite861.translation = [0.2032,1.476,-0.049]
TouchSensor862 = x3d.TouchSensor()
TouchSensor862.description = "HAnimSite l_acromion_pt"

HAnimSite861.children.append(TouchSensor862)
Shape863 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite861.children.append(Shape863)

HAnimSegment843.children.append(HAnimSite861)
HAnimSite864 = x3d.HAnimSite(DEF="hanim_l_axilla_distal_pt")
HAnimSite864.name = "l_axilla_distal_pt"
HAnimSite864.translation = [0.1706,1.4072,-0.0875]
TouchSensor865 = x3d.TouchSensor()
TouchSensor865.description = "HAnimSite l_axilla_distal_pt"

HAnimSite864.children.append(TouchSensor865)
Shape866 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite864.children.append(Shape866)

HAnimSegment843.children.append(HAnimSite864)
HAnimSite867 = x3d.HAnimSite(DEF="hanim_l_axilla_posterior_folds_pt")
HAnimSite867.name = "l_axilla_posterior_folds_pt"
TouchSensor868 = x3d.TouchSensor()
TouchSensor868.description = "HAnimSite l_axilla_posterior_folds_pt"

HAnimSite867.children.append(TouchSensor868)
Shape869 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite867.children.append(Shape869)

HAnimSegment843.children.append(HAnimSite867)
HAnimSite870 = x3d.HAnimSite(DEF="hanim_l_axilla_proximal_pt")
HAnimSite870.name = "l_axilla_proximal_pt"
HAnimSite870.translation = [0.1777,1.4065,-0.0075]
TouchSensor871 = x3d.TouchSensor()
TouchSensor871.description = "HAnimSite l_axilla_proximal_pt"

HAnimSite870.children.append(TouchSensor871)
Shape872 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite870.children.append(Shape872)

HAnimSegment843.children.append(HAnimSite870)
HAnimSite873 = x3d.HAnimSite(DEF="hanim_l_clavicale_pt")
HAnimSite873.name = "l_clavicale_pt"
HAnimSite873.translation = [0.0271,1.4943,0.0394]
TouchSensor874 = x3d.TouchSensor()
TouchSensor874.description = "HAnimSite l_clavicale_pt"

HAnimSite873.children.append(TouchSensor874)
Shape875 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite873.children.append(Shape875)

HAnimSegment843.children.append(HAnimSite873)
Shape876 = x3d.Shape()
LineSet877 = x3d.LineSet()
LineSet877.vertexCount = [2]
ColorRGBA878 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet877.color = ColorRGBA878
Coordinate879 = x3d.Coordinate()
Coordinate879.point = [(0.0065, 1.4951, -0.0387),(-0.0694, 1.46, -0.033)]

LineSet877.coord = Coordinate879

Shape876.geometry = LineSet877

HAnimSegment843.children.append(Shape876)
HAnimSite880 = x3d.HAnimSite(DEF="hanim_r_acromion_pt")
HAnimSite880.name = "r_acromion_pt"
HAnimSite880.translation = [-0.1905,1.4791,-0.0431]
TouchSensor881 = x3d.TouchSensor()
TouchSensor881.description = "HAnimSite r_acromion_pt"

HAnimSite880.children.append(TouchSensor881)
Shape882 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite880.children.append(Shape882)

HAnimSegment843.children.append(HAnimSite880)
HAnimSite883 = x3d.HAnimSite(DEF="hanim_r_axilla_distal_pt")
HAnimSite883.name = "r_axilla_distal_pt"
HAnimSite883.translation = [-0.1603,1.4098,-0.0826]
TouchSensor884 = x3d.TouchSensor()
TouchSensor884.description = "HAnimSite r_axilla_distal_pt"

HAnimSite883.children.append(TouchSensor884)
Shape885 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite883.children.append(Shape885)

HAnimSegment843.children.append(HAnimSite883)
HAnimSite886 = x3d.HAnimSite(DEF="hanim_r_axilla_posterior_folds_pt")
HAnimSite886.name = "r_axilla_posterior_folds_pt"
TouchSensor887 = x3d.TouchSensor()
TouchSensor887.description = "HAnimSite r_axilla_posterior_folds_pt"

HAnimSite886.children.append(TouchSensor887)
Shape888 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite886.children.append(Shape888)

HAnimSegment843.children.append(HAnimSite886)
HAnimSite889 = x3d.HAnimSite(DEF="hanim_r_axilla_proximal_pt")
HAnimSite889.name = "r_axilla_proximal_pt"
HAnimSite889.translation = [-0.1626,1.4072,-0.0031]
TouchSensor890 = x3d.TouchSensor()
TouchSensor890.description = "HAnimSite r_axilla_proximal_pt"

HAnimSite889.children.append(TouchSensor890)
Shape891 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite889.children.append(Shape891)

HAnimSegment843.children.append(HAnimSite889)
HAnimSite892 = x3d.HAnimSite(DEF="hanim_r_clavicale_pt")
HAnimSite892.name = "r_clavicale_pt"
HAnimSite892.translation = [-0.0115,1.4943,0.04]
TouchSensor893 = x3d.TouchSensor()
TouchSensor893.description = "HAnimSite r_clavicale_pt"

HAnimSite892.children.append(TouchSensor893)
Shape894 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite892.children.append(Shape894)

HAnimSegment843.children.append(HAnimSite892)

HAnimJoint842.children.append(HAnimSegment843)
HAnimJoint895 = x3d.HAnimJoint(DEF="hanim_vc7")
HAnimJoint895.name = "vc7"
HAnimJoint895.center = [0.0066,1.5132,-0.0301]
HAnimSegment896 = x3d.HAnimSegment(DEF="hanim_c7")
HAnimSegment896.name = "c7"
Transform897 = x3d.Transform()
Transform897.translation = [0.0066,1.5132,-0.0301]
Transform898 = x3d.Transform()
Shape899 = x3d.Shape(USE="HAnimJointShape")

Transform898.children.append(Shape899)

Transform897.children.append(Transform898)

HAnimSegment896.children.append(Transform897)
Shape900 = x3d.Shape()
LineSet901 = x3d.LineSet()
LineSet901.vertexCount = [2]
ColorRGBA902 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet901.color = ColorRGBA902
Coordinate903 = x3d.Coordinate()
Coordinate903.point = [(0.0066, 1.5132, -0.0301),(0.0066, 1.5357, -0.0143)]

LineSet901.coord = Coordinate903

Shape900.geometry = LineSet901

HAnimSegment896.children.append(Shape900)

HAnimJoint895.children.append(HAnimSegment896)
HAnimJoint904 = x3d.HAnimJoint(DEF="hanim_vc6")
HAnimJoint904.name = "vc6"
HAnimJoint904.center = [0.0066,1.5357,-0.0143]
HAnimSegment905 = x3d.HAnimSegment(DEF="hanim_c6")
HAnimSegment905.name = "c6"
Transform906 = x3d.Transform()
Transform906.translation = [0.0066,1.5357,-0.0143]
Transform907 = x3d.Transform()
Shape908 = x3d.Shape(USE="HAnimJointShape")

Transform907.children.append(Shape908)

Transform906.children.append(Transform907)

HAnimSegment905.children.append(Transform906)
Shape909 = x3d.Shape()
LineSet910 = x3d.LineSet()
LineSet910.vertexCount = [2]
ColorRGBA911 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet910.color = ColorRGBA911
Coordinate912 = x3d.Coordinate()
Coordinate912.point = [(0.0066, 1.5357, -0.0143),(0.0066, 1.552, -0.0082)]

LineSet910.coord = Coordinate912

Shape909.geometry = LineSet910

HAnimSegment905.children.append(Shape909)

HAnimJoint904.children.append(HAnimSegment905)
HAnimJoint913 = x3d.HAnimJoint(DEF="hanim_vc5")
HAnimJoint913.name = "vc5"
HAnimJoint913.center = [0.0066,1.552,-0.0082]
HAnimSegment914 = x3d.HAnimSegment(DEF="hanim_c5")
HAnimSegment914.name = "c5"
Transform915 = x3d.Transform()
Transform915.translation = [0.0066,1.552,-0.0082]
Transform916 = x3d.Transform()
Shape917 = x3d.Shape(USE="HAnimJointShape")

Transform916.children.append(Shape917)

Transform915.children.append(Transform916)

HAnimSegment914.children.append(Transform915)
Shape918 = x3d.Shape()
LineSet919 = x3d.LineSet()
LineSet919.vertexCount = [2]
ColorRGBA920 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet919.color = ColorRGBA920
Coordinate921 = x3d.Coordinate()
Coordinate921.point = [(0.0066, 1.552, -0.0082),(0.0066, 1.5662, -0.0084)]

LineSet919.coord = Coordinate921

Shape918.geometry = LineSet919

HAnimSegment914.children.append(Shape918)

HAnimJoint913.children.append(HAnimSegment914)
HAnimJoint922 = x3d.HAnimJoint(DEF="hanim_vc4")
HAnimJoint922.name = "vc4"
HAnimJoint922.center = [0.0066,1.5662,-0.0084]
HAnimSegment923 = x3d.HAnimSegment(DEF="hanim_c4")
HAnimSegment923.name = "c4"
Transform924 = x3d.Transform()
Transform924.translation = [0.0066,1.5662,-0.0084]
Transform925 = x3d.Transform()
Shape926 = x3d.Shape(USE="HAnimJointShape")

Transform925.children.append(Shape926)

Transform924.children.append(Transform925)

HAnimSegment923.children.append(Transform924)
Shape927 = x3d.Shape()
LineSet928 = x3d.LineSet()
LineSet928.vertexCount = [2]
ColorRGBA929 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet928.color = ColorRGBA929
Coordinate930 = x3d.Coordinate()
Coordinate930.point = [(0.0066, 1.5662, -0.0084),(0.0066, 1.58, -0.0103)]

LineSet928.coord = Coordinate930

Shape927.geometry = LineSet928

HAnimSegment923.children.append(Shape927)

HAnimJoint922.children.append(HAnimSegment923)
HAnimJoint931 = x3d.HAnimJoint(DEF="hanim_vc3")
HAnimJoint931.name = "vc3"
HAnimJoint931.center = [0.0066,1.58,-0.0103]
HAnimSegment932 = x3d.HAnimSegment(DEF="hanim_c3")
HAnimSegment932.name = "c3"
Transform933 = x3d.Transform()
Transform933.translation = [0.0066,1.58,-0.0103]
Transform934 = x3d.Transform()
Shape935 = x3d.Shape(USE="HAnimJointShape")

Transform934.children.append(Shape935)

Transform933.children.append(Transform934)

HAnimSegment932.children.append(Transform933)
Shape936 = x3d.Shape()
LineSet937 = x3d.LineSet()
LineSet937.vertexCount = [2]
ColorRGBA938 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet937.color = ColorRGBA938
Coordinate939 = x3d.Coordinate()
Coordinate939.point = [(0.0066, 1.58, -0.0103),(0.0066, 1.5928, -0.0103)]

LineSet937.coord = Coordinate939

Shape936.geometry = LineSet937

HAnimSegment932.children.append(Shape936)
HAnimSite940 = x3d.HAnimSite(DEF="hanim_adams_apple_pt")
HAnimSite940.name = "adams_apple_pt"
TouchSensor941 = x3d.TouchSensor()
TouchSensor941.description = "HAnimSite adams_apple_pt"

HAnimSite940.children.append(TouchSensor941)
Shape942 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite940.children.append(Shape942)

HAnimSegment932.children.append(HAnimSite940)

HAnimJoint931.children.append(HAnimSegment932)
HAnimJoint943 = x3d.HAnimJoint(DEF="hanim_vc2")
HAnimJoint943.name = "vc2"
HAnimJoint943.center = [0.0066,1.5928,-0.0103]
HAnimSegment944 = x3d.HAnimSegment(DEF="hanim_c2")
HAnimSegment944.name = "c2"
Transform945 = x3d.Transform()
Transform945.translation = [0.0066,1.5928,-0.0103]
Transform946 = x3d.Transform()
Shape947 = x3d.Shape(USE="HAnimJointShape")

Transform946.children.append(Shape947)

Transform945.children.append(Transform946)

HAnimSegment944.children.append(Transform945)
Shape948 = x3d.Shape()
LineSet949 = x3d.LineSet()
LineSet949.vertexCount = [2]
ColorRGBA950 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet949.color = ColorRGBA950
Coordinate951 = x3d.Coordinate()
Coordinate951.point = [(0.0066, 1.5928, -0.0103),(0.0066, 1.6144, -0.0034)]

LineSet949.coord = Coordinate951

Shape948.geometry = LineSet949

HAnimSegment944.children.append(Shape948)

HAnimJoint943.children.append(HAnimSegment944)
HAnimJoint952 = x3d.HAnimJoint(DEF="hanim_vc1")
HAnimJoint952.name = "vc1"
HAnimJoint952.center = [0.0066,1.6144,-0.0034]
HAnimSegment953 = x3d.HAnimSegment(DEF="hanim_c1")
HAnimSegment953.name = "c1"
Transform954 = x3d.Transform()
Transform954.translation = [0.0066,1.6144,-0.0034]
Transform955 = x3d.Transform()
Shape956 = x3d.Shape(USE="HAnimJointShape")

Transform955.children.append(Shape956)

Transform954.children.append(Transform955)

HAnimSegment953.children.append(Transform954)
Shape957 = x3d.Shape()
LineSet958 = x3d.LineSet()
LineSet958.vertexCount = [2]
ColorRGBA959 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet958.color = ColorRGBA959
Coordinate960 = x3d.Coordinate()
Coordinate960.point = [(0.0066, 1.6144, -0.0034),(0.0044, 1.6209, 0.0236)]

LineSet958.coord = Coordinate960

Shape957.geometry = LineSet958

HAnimSegment953.children.append(Shape957)
HAnimSite961 = x3d.HAnimSite(DEF="hanim_glabella_pt")
HAnimSite961.name = "glabella_pt"
TouchSensor962 = x3d.TouchSensor()
TouchSensor962.description = "HAnimSite glabella_pt"

HAnimSite961.children.append(TouchSensor962)
Shape963 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite961.children.append(Shape963)

HAnimSegment953.children.append(HAnimSite961)
HAnimSite964 = x3d.HAnimSite(DEF="hanim_l_ectocanthus_pt")
HAnimSite964.name = "l_ectocanthus_pt"
TouchSensor965 = x3d.TouchSensor()
TouchSensor965.description = "HAnimSite l_ectocanthus_pt"

HAnimSite964.children.append(TouchSensor965)
Shape966 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite964.children.append(Shape966)

HAnimSegment953.children.append(HAnimSite964)
HAnimSite967 = x3d.HAnimSite(DEF="hanim_l_infraorbitale_pt")
HAnimSite967.name = "l_infraorbitale_pt"
HAnimSite967.translation = [0.0341,1.6171,0.0752]
TouchSensor968 = x3d.TouchSensor()
TouchSensor968.description = "HAnimSite l_infraorbitale_pt"

HAnimSite967.children.append(TouchSensor968)
Shape969 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite967.children.append(Shape969)

HAnimSegment953.children.append(HAnimSite967)
HAnimSite970 = x3d.HAnimSite(DEF="hanim_l_tragion_pt")
HAnimSite970.name = "l_tragion_pt"
HAnimSite970.translation = [0.0739,1.6348,0.0282]
TouchSensor971 = x3d.TouchSensor()
TouchSensor971.description = "HAnimSite l_tragion_pt"

HAnimSite970.children.append(TouchSensor971)
Shape972 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite970.children.append(Shape972)

HAnimSegment953.children.append(HAnimSite970)
HAnimSite973 = x3d.HAnimSite(DEF="hanim_nuchale_pt")
HAnimSite973.name = "nuchale_pt"
HAnimSite973.translation = [0.0039,1.5972,-0.0796]
TouchSensor974 = x3d.TouchSensor()
TouchSensor974.description = "HAnimSite nuchale_pt"

HAnimSite973.children.append(TouchSensor974)
Shape975 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite973.children.append(Shape975)

HAnimSegment953.children.append(HAnimSite973)
HAnimSite976 = x3d.HAnimSite(DEF="hanim_opisthocranion_pt")
HAnimSite976.name = "opisthocranion_pt"
TouchSensor977 = x3d.TouchSensor()
TouchSensor977.description = "HAnimSite opisthocranion_pt"

HAnimSite976.children.append(TouchSensor977)
Shape978 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite976.children.append(Shape978)

HAnimSegment953.children.append(HAnimSite976)
HAnimSite979 = x3d.HAnimSite(DEF="hanim_r_ectocanthus_pt")
HAnimSite979.name = "r_ectocanthus_pt"
TouchSensor980 = x3d.TouchSensor()
TouchSensor980.description = "HAnimSite r_ectocanthus_pt"

HAnimSite979.children.append(TouchSensor980)
Shape981 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite979.children.append(Shape981)

HAnimSegment953.children.append(HAnimSite979)
HAnimSite982 = x3d.HAnimSite(DEF="hanim_r_infraorbitale_pt")
HAnimSite982.name = "r_infraorbitale_pt"
HAnimSite982.translation = [-0.0237,1.6171,0.0752]
TouchSensor983 = x3d.TouchSensor()
TouchSensor983.description = "HAnimSite r_infraorbitale_pt"

HAnimSite982.children.append(TouchSensor983)
Shape984 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite982.children.append(Shape984)

HAnimSegment953.children.append(HAnimSite982)
HAnimSite985 = x3d.HAnimSite(DEF="hanim_r_tragion_pt")
HAnimSite985.name = "r_tragion_pt"
HAnimSite985.translation = [-0.0646,1.6347,0.0302]
TouchSensor986 = x3d.TouchSensor()
TouchSensor986.description = "HAnimSite r_tragion_pt"

HAnimSite985.children.append(TouchSensor986)
Shape987 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite985.children.append(Shape987)

HAnimSegment953.children.append(HAnimSite985)
HAnimSite988 = x3d.HAnimSite(DEF="hanim_sellion_pt")
HAnimSite988.name = "sellion_pt"
HAnimSite988.translation = [0.0058,1.6316,0.0852]
TouchSensor989 = x3d.TouchSensor()
TouchSensor989.description = "HAnimSite sellion_pt"

HAnimSite988.children.append(TouchSensor989)
Shape990 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite988.children.append(Shape990)

HAnimSegment953.children.append(HAnimSite988)
HAnimSite991 = x3d.HAnimSite(DEF="hanim_skull_vertex_pt")
HAnimSite991.name = "skull_vertex_pt"
HAnimSite991.translation = [0.005,1.7504,0.0055]
TouchSensor992 = x3d.TouchSensor()
TouchSensor992.description = "HAnimSite skull_vertex_pt"

HAnimSite991.children.append(TouchSensor992)
Shape993 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite991.children.append(Shape993)

HAnimSegment953.children.append(HAnimSite991)

HAnimJoint952.children.append(HAnimSegment953)
HAnimJoint994 = x3d.HAnimJoint(DEF="hanim_skullbase")
HAnimJoint994.name = "skullbase"
HAnimJoint994.center = [0.0044,1.6209,0.0236]
HAnimSegment995 = x3d.HAnimSegment(DEF="hanim_skull")
HAnimSegment995.name = "skull"
Transform996 = x3d.Transform()
Transform996.translation = [0.0044,1.6209,0.0236]
Transform997 = x3d.Transform()
Shape998 = x3d.Shape(USE="HAnimJointShape")

Transform997.children.append(Shape998)

Transform996.children.append(Transform997)

HAnimSegment995.children.append(Transform996)
Shape999 = x3d.Shape()
LineSet1000 = x3d.LineSet()
LineSet1000.vertexCount = [2]
ColorRGBA1001 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1000.color = ColorRGBA1001
Coordinate1002 = x3d.Coordinate()
Coordinate1002.point = [(0.0044, 1.6209, 0.0236),(2.2365, 1.87, 1.9285)]

LineSet1000.coord = Coordinate1002

Shape999.geometry = LineSet1000

HAnimSegment995.children.append(Shape999)
Shape1003 = x3d.Shape()
LineSet1004 = x3d.LineSet()
LineSet1004.vertexCount = [2]
ColorRGBA1005 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1004.color = ColorRGBA1005
Coordinate1006 = x3d.Coordinate()
Coordinate1006.point = [(0.0044, 1.6209, 0.0236),(-2.2535, 1.87, 1.9285)]

LineSet1004.coord = Coordinate1006

Shape1003.geometry = LineSet1004

HAnimSegment995.children.append(Shape1003)
Shape1007 = x3d.Shape()
LineSet1008 = x3d.LineSet()
LineSet1008.vertexCount = [2]
ColorRGBA1009 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1008.color = ColorRGBA1009
Coordinate1010 = x3d.Coordinate()
Coordinate1010.point = [(0.0044, 1.6209, 0.0236),(2.1305, 1.8444, 4.1555)]

LineSet1008.coord = Coordinate1010

Shape1007.geometry = LineSet1008

HAnimSegment995.children.append(Shape1007)
Shape1011 = x3d.Shape()
LineSet1012 = x3d.LineSet()
LineSet1012.vertexCount = [2]
ColorRGBA1013 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1012.color = ColorRGBA1013
Coordinate1014 = x3d.Coordinate()
Coordinate1014.point = [(0.0044, 1.6209, 0.0236),(-2.1475, 1.8444, 4.1555)]

LineSet1012.coord = Coordinate1014

Shape1011.geometry = LineSet1012

HAnimSegment995.children.append(Shape1011)
Shape1015 = x3d.Shape()
LineSet1016 = x3d.LineSet()
LineSet1016.vertexCount = [2]
ColorRGBA1017 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1016.color = ColorRGBA1017
Coordinate1018 = x3d.Coordinate()
Coordinate1018.point = [(0.0044, 1.6209, 0.0236),(0.9581, 1.8563, 5.2175)]

LineSet1016.coord = Coordinate1018

Shape1015.geometry = LineSet1016

HAnimSegment995.children.append(Shape1015)
Shape1019 = x3d.Shape()
LineSet1020 = x3d.LineSet()
LineSet1020.vertexCount = [2]
ColorRGBA1021 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1020.color = ColorRGBA1021
Coordinate1022 = x3d.Coordinate()
Coordinate1022.point = [(0.0044, 1.6209, 0.0236),(-0.9751, 1.8563, 5.2175)]

LineSet1020.coord = Coordinate1022

Shape1019.geometry = LineSet1020

HAnimSegment995.children.append(Shape1019)
Shape1023 = x3d.Shape()
LineSet1024 = x3d.LineSet()
LineSet1024.vertexCount = [2]
ColorRGBA1025 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1024.color = ColorRGBA1025
Coordinate1026 = x3d.Coordinate()
Coordinate1026.point = [(0.0044, 1.6209, 0.0236),(-0.0085, 1.7229, 1.148)]

LineSet1024.coord = Coordinate1026

Shape1023.geometry = LineSet1024

HAnimSegment995.children.append(Shape1023)
HAnimSite1027 = x3d.HAnimSite(DEF="hanim_l_gonion_pt")
HAnimSite1027.name = "l_gonion_pt"
HAnimSite1027.translation = [0.0631,1.553,0.033]
TouchSensor1028 = x3d.TouchSensor()
TouchSensor1028.description = "HAnimSite l_gonion_pt"

HAnimSite1027.children.append(TouchSensor1028)
Shape1029 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1027.children.append(Shape1029)

HAnimSegment995.children.append(HAnimSite1027)
HAnimSite1030 = x3d.HAnimSite(DEF="hanim_menton_pt")
HAnimSite1030.name = "menton_pt"
TouchSensor1031 = x3d.TouchSensor()
TouchSensor1031.description = "HAnimSite menton_pt"

HAnimSite1030.children.append(TouchSensor1031)
Shape1032 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1030.children.append(Shape1032)

HAnimSegment995.children.append(HAnimSite1030)
HAnimSite1033 = x3d.HAnimSite(DEF="hanim_r_gonion_pt")
HAnimSite1033.name = "r_gonion_pt"
HAnimSite1033.translation = [-0.052,1.5529,0.0347]
TouchSensor1034 = x3d.TouchSensor()
TouchSensor1034.description = "HAnimSite r_gonion_pt"

HAnimSite1033.children.append(TouchSensor1034)
Shape1035 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1033.children.append(Shape1035)

HAnimSegment995.children.append(HAnimSite1033)
HAnimSite1036 = x3d.HAnimSite(DEF="hanim_supramenton_pt")
HAnimSite1036.name = "supramenton_pt"
HAnimSite1036.translation = [0.0061,1.541,0.0805]
TouchSensor1037 = x3d.TouchSensor()
TouchSensor1037.description = "HAnimSite supramenton_pt"

HAnimSite1036.children.append(TouchSensor1037)
Shape1038 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1036.children.append(Shape1038)

HAnimSegment995.children.append(HAnimSite1036)

HAnimJoint994.children.append(HAnimSegment995)
HAnimJoint1039 = x3d.HAnimJoint(DEF="hanim_l_eyelid_joint")
HAnimJoint1039.name = "l_eyelid_joint"
HAnimJoint1039.center = [2.2365,1.87,1.9285]

HAnimJoint994.children.append(HAnimJoint1039)
HAnimJoint1040 = x3d.HAnimJoint(DEF="hanim_r_eyelid_joint")
HAnimJoint1040.name = "r_eyelid_joint"
HAnimJoint1040.center = [-2.2535,1.87,1.9285]

HAnimJoint994.children.append(HAnimJoint1040)
HAnimJoint1041 = x3d.HAnimJoint(DEF="hanim_l_eyeball_joint")
HAnimJoint1041.name = "l_eyeball_joint"
HAnimJoint1041.center = [2.1305,1.8444,4.1555]

HAnimJoint994.children.append(HAnimJoint1041)
HAnimJoint1042 = x3d.HAnimJoint(DEF="hanim_r_eyeball_joint")
HAnimJoint1042.name = "r_eyeball_joint"
HAnimJoint1042.center = [-2.1475,1.8444,4.1555]

HAnimJoint994.children.append(HAnimJoint1042)
HAnimJoint1043 = x3d.HAnimJoint(DEF="hanim_l_eyebrow_joint")
HAnimJoint1043.name = "l_eyebrow_joint"
HAnimJoint1043.center = [0.9581,1.8563,5.2175]

HAnimJoint994.children.append(HAnimJoint1043)
HAnimJoint1044 = x3d.HAnimJoint(DEF="hanim_r_eyebrow_joint")
HAnimJoint1044.name = "r_eyebrow_joint"
HAnimJoint1044.center = [-0.9751,1.8563,5.2175]

HAnimJoint994.children.append(HAnimJoint1044)
HAnimJoint1045 = x3d.HAnimJoint(DEF="hanim_temporomandibular")
HAnimJoint1045.name = "temporomandibular"
HAnimJoint1045.center = [-0.0085,1.7229,1.148]

HAnimJoint994.children.append(HAnimJoint1045)

HAnimJoint952.children.append(HAnimJoint994)

HAnimJoint943.children.append(HAnimJoint952)

HAnimJoint931.children.append(HAnimJoint943)

HAnimJoint922.children.append(HAnimJoint931)

HAnimJoint913.children.append(HAnimJoint922)

HAnimJoint904.children.append(HAnimJoint913)

HAnimJoint895.children.append(HAnimJoint904)

HAnimJoint842.children.append(HAnimJoint895)
HAnimJoint1046 = x3d.HAnimJoint(DEF="hanim_l_sternoclavicular")
HAnimJoint1046.name = "l_sternoclavicular"
HAnimJoint1046.center = [0.082,1.4488,-0.0353]
HAnimSegment1047 = x3d.HAnimSegment(DEF="hanim_l_clavicle")
HAnimSegment1047.name = "l_clavicle"
Transform1048 = x3d.Transform()
Transform1048.translation = [0.082,1.4488,-0.0353]
Transform1049 = x3d.Transform()
Shape1050 = x3d.Shape(USE="HAnimJointShape")

Transform1049.children.append(Shape1050)

Transform1048.children.append(Transform1049)

HAnimSegment1047.children.append(Transform1048)
Shape1051 = x3d.Shape()
LineSet1052 = x3d.LineSet()
LineSet1052.vertexCount = [2]
ColorRGBA1053 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1052.color = ColorRGBA1053
Coordinate1054 = x3d.Coordinate()
Coordinate1054.point = [(0.082, 1.4488, -0.0353),(0.0962, 1.4269, -0.0424)]

LineSet1052.coord = Coordinate1054

Shape1051.geometry = LineSet1052

HAnimSegment1047.children.append(Shape1051)

HAnimJoint1046.children.append(HAnimSegment1047)
HAnimJoint1055 = x3d.HAnimJoint(DEF="hanim_l_acromioclavicular")
HAnimJoint1055.name = "l_acromioclavicular"
HAnimJoint1055.center = [0.0962,1.4269,-0.0424]
HAnimSegment1056 = x3d.HAnimSegment(DEF="hanim_l_scapula")
HAnimSegment1056.name = "l_scapula"
Transform1057 = x3d.Transform()
Transform1057.translation = [0.0962,1.4269,-0.0424]
Transform1058 = x3d.Transform()
Shape1059 = x3d.Shape(USE="HAnimJointShape")

Transform1058.children.append(Shape1059)

Transform1057.children.append(Transform1058)

HAnimSegment1056.children.append(Transform1057)
Shape1060 = x3d.Shape()
LineSet1061 = x3d.LineSet()
LineSet1061.vertexCount = [2]
ColorRGBA1062 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1061.color = ColorRGBA1062
Coordinate1063 = x3d.Coordinate()
Coordinate1063.point = [(0.0962, 1.4269, -0.0424),(0.2029, 1.4376, -0.0387)]

LineSet1061.coord = Coordinate1063

Shape1060.geometry = LineSet1061

HAnimSegment1056.children.append(Shape1060)
HAnimSite1064 = x3d.HAnimSite(DEF="hanim_l_bideltoid_pt")
HAnimSite1064.name = "l_bideltoid_pt"
TouchSensor1065 = x3d.TouchSensor()
TouchSensor1065.description = "HAnimSite l_bideltoid_pt"

HAnimSite1064.children.append(TouchSensor1065)
Shape1066 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1064.children.append(Shape1066)

HAnimSegment1056.children.append(HAnimSite1064)
HAnimSite1067 = x3d.HAnimSite(DEF="hanim_l_humeral_lateral_epicondyles_pt")
HAnimSite1067.name = "l_humeral_lateral_epicondyles_pt"
HAnimSite1067.translation = [0.228,1.1482,-0.11]
TouchSensor1068 = x3d.TouchSensor()
TouchSensor1068.description = "HAnimSite l_humeral_lateral_epicondyles_pt"

HAnimSite1067.children.append(TouchSensor1068)
Shape1069 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1067.children.append(Shape1069)

HAnimSegment1056.children.append(HAnimSite1067)

HAnimJoint1055.children.append(HAnimSegment1056)
HAnimJoint1070 = x3d.HAnimJoint(DEF="hanim_l_shoulder")
HAnimJoint1070.name = "l_shoulder"
HAnimJoint1070.center = [0.2029,1.4376,-0.0387]
HAnimSegment1071 = x3d.HAnimSegment(DEF="hanim_l_upperarm")
HAnimSegment1071.name = "l_upperarm"
Transform1072 = x3d.Transform()
Transform1072.translation = [0.2029,1.4376,-0.0387]
Transform1073 = x3d.Transform()
Shape1074 = x3d.Shape(USE="HAnimJointShape")

Transform1073.children.append(Shape1074)

Transform1072.children.append(Transform1073)

HAnimSegment1071.children.append(Transform1072)
Shape1075 = x3d.Shape()
LineSet1076 = x3d.LineSet()
LineSet1076.vertexCount = [2]
ColorRGBA1077 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1076.color = ColorRGBA1077
Coordinate1078 = x3d.Coordinate()
Coordinate1078.point = [(0.2029, 1.4376, -0.0387),(0.2014, 1.1357, -0.0682)]

LineSet1076.coord = Coordinate1078

Shape1075.geometry = LineSet1076

HAnimSegment1071.children.append(Shape1075)
HAnimSite1079 = x3d.HAnimSite(DEF="hanim_l_humeral_medial_epicondyles_pt")
HAnimSite1079.name = "l_humeral_medial_epicondyles_pt"
HAnimSite1079.translation = [0.1735,1.1272,-0.1113]
TouchSensor1080 = x3d.TouchSensor()
TouchSensor1080.description = "HAnimSite l_humeral_medial_epicondyles_pt"

HAnimSite1079.children.append(TouchSensor1080)
Shape1081 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1079.children.append(Shape1081)

HAnimSegment1071.children.append(HAnimSite1079)
HAnimSite1082 = x3d.HAnimSite(DEF="hanim_l_olecranon_pt")
HAnimSite1082.name = "l_olecranon_pt"
HAnimSite1082.translation = [-0.1962,1.1375,-0.1123]
TouchSensor1083 = x3d.TouchSensor()
TouchSensor1083.description = "HAnimSite l_olecranon_pt"

HAnimSite1082.children.append(TouchSensor1083)
Shape1084 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1082.children.append(Shape1084)

HAnimSegment1071.children.append(HAnimSite1082)
HAnimSite1085 = x3d.HAnimSite(DEF="hanim_l_radial_styloid_pt")
HAnimSite1085.name = "l_radial_styloid_pt"
HAnimSite1085.translation = [0.1901,0.8645,-0.0415]
TouchSensor1086 = x3d.TouchSensor()
TouchSensor1086.description = "HAnimSite l_radial_styloid_pt"

HAnimSite1085.children.append(TouchSensor1086)
Shape1087 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1085.children.append(Shape1087)

HAnimSegment1071.children.append(HAnimSite1085)
HAnimSite1088 = x3d.HAnimSite(DEF="hanim_l_radiale_pt")
HAnimSite1088.name = "l_radiale_pt"
HAnimSite1088.translation = [0.2182,1.1212,-0.1167]
TouchSensor1089 = x3d.TouchSensor()
TouchSensor1089.description = "HAnimSite l_radiale_pt"

HAnimSite1088.children.append(TouchSensor1089)
Shape1090 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1088.children.append(Shape1090)

HAnimSegment1071.children.append(HAnimSite1088)

HAnimJoint1070.children.append(HAnimSegment1071)
HAnimJoint1091 = x3d.HAnimJoint(DEF="hanim_l_elbow")
HAnimJoint1091.name = "l_elbow"
HAnimJoint1091.center = [0.2014,1.1357,-0.0682]
HAnimSegment1092 = x3d.HAnimSegment(DEF="hanim_l_forearm")
HAnimSegment1092.name = "l_forearm"
Transform1093 = x3d.Transform()
Transform1093.translation = [0.2014,1.1357,-0.0682]
Transform1094 = x3d.Transform()
Shape1095 = x3d.Shape(USE="HAnimJointShape")

Transform1094.children.append(Shape1095)

Transform1093.children.append(Transform1094)

HAnimSegment1092.children.append(Transform1093)
Shape1096 = x3d.Shape()
LineSet1097 = x3d.LineSet()
LineSet1097.vertexCount = [2]
ColorRGBA1098 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1097.color = ColorRGBA1098
Coordinate1099 = x3d.Coordinate()
Coordinate1099.point = [(0.2014, 1.1357, -0.0682),(0.1984, 0.8663, -0.0583)]

LineSet1097.coord = Coordinate1099

Shape1096.geometry = LineSet1097

HAnimSegment1092.children.append(Shape1096)
HAnimSite1100 = x3d.HAnimSite(DEF="hanim_l_ulnar_styloid_pt")
HAnimSite1100.name = "l_ulnar_styloid_pt"
HAnimSite1100.translation = [-0.2142,0.8529,-0.0648]
TouchSensor1101 = x3d.TouchSensor()
TouchSensor1101.description = "HAnimSite l_ulnar_styloid_pt"

HAnimSite1100.children.append(TouchSensor1101)
Shape1102 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1100.children.append(Shape1102)

HAnimSegment1092.children.append(HAnimSite1100)

HAnimJoint1091.children.append(HAnimSegment1092)
HAnimJoint1103 = x3d.HAnimJoint(DEF="hanim_l_radiocarpal")
HAnimJoint1103.name = "l_radiocarpal"
HAnimJoint1103.center = [0.1984,0.8663,-0.0583]
HAnimSegment1104 = x3d.HAnimSegment(DEF="hanim_l_carpal")
HAnimSegment1104.name = "l_carpal"
Transform1105 = x3d.Transform()
Transform1105.translation = [0.2,0.85,-0.05]
Transform1105.rotation = [0,0,1,-3.14]
Transform1105.scale = [0.2,0.2,0.2]
Transform1106 = x3d.Transform()
Transform1106.rotation = [0,1,0,-1.57]
Shape1107 = x3d.Shape(USE="HAnimJointShape")

Transform1106.children.append(Shape1107)

Transform1105.children.append(Transform1106)

HAnimSegment1104.children.append(Transform1105)
Shape1108 = x3d.Shape()
LineSet1109 = x3d.LineSet()
LineSet1109.vertexCount = [2]
ColorRGBA1110 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1109.color = ColorRGBA1110
Coordinate1111 = x3d.Coordinate()
Coordinate1111.point = [(0.1984, 0.8663, -0.0583),(8.0485, 0.9213, 1.3235)]

LineSet1109.coord = Coordinate1111

Shape1108.geometry = LineSet1109

HAnimSegment1104.children.append(Shape1108)
Shape1112 = x3d.Shape()
LineSet1113 = x3d.LineSet()
LineSet1113.vertexCount = [2]
ColorRGBA1114 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1113.color = ColorRGBA1114
Coordinate1115 = x3d.Coordinate()
Coordinate1115.point = [(0.1984, 0.8663, -0.0583),(8.0485, 0.9225, 0.8386)]

LineSet1113.coord = Coordinate1115

Shape1112.geometry = LineSet1113

HAnimSegment1104.children.append(Shape1112)
Shape1116 = x3d.Shape()
LineSet1117 = x3d.LineSet()
LineSet1117.vertexCount = [2]
ColorRGBA1118 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1117.color = ColorRGBA1118
Coordinate1119 = x3d.Coordinate()
Coordinate1119.point = [(0.1984, 0.8663, -0.0583),(8.0395, 0.9246, 0.2513)]

LineSet1117.coord = Coordinate1119

Shape1116.geometry = LineSet1117

HAnimSegment1104.children.append(Shape1116)
Shape1120 = x3d.Shape()
LineSet1121 = x3d.LineSet()
LineSet1121.vertexCount = [2]
ColorRGBA1122 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1121.color = ColorRGBA1122
Coordinate1123 = x3d.Coordinate()
Coordinate1123.point = [(0.1984, 0.8663, -0.0583),(8.0395, 0.921, -0.6795)]

LineSet1121.coord = Coordinate1123

Shape1120.geometry = LineSet1121

HAnimSegment1104.children.append(Shape1120)

HAnimJoint1103.children.append(HAnimSegment1104)
HAnimJoint1124 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_1")
HAnimJoint1124.name = "l_midcarpal_1"
HAnimJoint1124.center = [8.0485,0.9213,1.3235]
HAnimSegment1125 = x3d.HAnimSegment(DEF="hanim_l_trapezium")
HAnimSegment1125.name = "l_trapezium"
Transform1126 = x3d.Transform()
Transform1126.translation = [8.0485,0.9213,1.3235]
Transform1127 = x3d.Transform()
Shape1128 = x3d.Shape(USE="HAnimJointShape")

Transform1127.children.append(Shape1128)

Transform1126.children.append(Transform1127)

HAnimSegment1125.children.append(Transform1126)
Shape1129 = x3d.Shape()
LineSet1130 = x3d.LineSet()
LineSet1130.vertexCount = [2]
ColorRGBA1131 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1130.color = ColorRGBA1131
Coordinate1132 = x3d.Coordinate()
Coordinate1132.point = [(8.0485, 0.9213, 1.3235),(0.1924, 0.8472, -0.0534)]

LineSet1130.coord = Coordinate1132

Shape1129.geometry = LineSet1130

HAnimSegment1125.children.append(Shape1129)

HAnimJoint1124.children.append(HAnimSegment1125)
HAnimJoint1133 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_1")
HAnimJoint1133.name = "l_carpometacarpal_1"
HAnimJoint1133.center = [0.1924,0.8472,-0.0534]
HAnimSegment1134 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_1")
HAnimSegment1134.name = "l_metacarpal_1"
Transform1135 = x3d.Transform()
Transform1135.translation = [0.1924,0.8472,-0.0534]
Transform1136 = x3d.Transform()
Shape1137 = x3d.Shape(USE="HAnimJointShape")

Transform1136.children.append(Shape1137)

Transform1135.children.append(Transform1136)

HAnimSegment1134.children.append(Transform1135)
Shape1138 = x3d.Shape()
LineSet1139 = x3d.LineSet()
LineSet1139.vertexCount = [2]
ColorRGBA1140 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1139.color = ColorRGBA1140
Coordinate1141 = x3d.Coordinate()
Coordinate1141.point = [(0.1924, 0.8472, -0.0534),(0.1951, 0.8226, 0.0246)]

LineSet1139.coord = Coordinate1141

Shape1138.geometry = LineSet1139

HAnimSegment1134.children.append(Shape1138)

HAnimJoint1133.children.append(HAnimSegment1134)
HAnimJoint1142 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_1")
HAnimJoint1142.name = "l_metacarpophalangeal_1"
HAnimJoint1142.center = [0.1951,0.8226,0.0246]
HAnimSegment1143 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_1")
HAnimSegment1143.name = "l_carpal_proximal_phalanx_1"
Transform1144 = x3d.Transform()
Transform1144.translation = [0.1951,0.8226,0.0246]
Transform1145 = x3d.Transform()
Shape1146 = x3d.Shape(USE="HAnimJointShape")

Transform1145.children.append(Shape1146)

Transform1144.children.append(Transform1145)

HAnimSegment1143.children.append(Transform1144)
Shape1147 = x3d.Shape()
LineSet1148 = x3d.LineSet()
LineSet1148.vertexCount = [2]
ColorRGBA1149 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1148.color = ColorRGBA1149
Coordinate1150 = x3d.Coordinate()
Coordinate1150.point = [(0.1951, 0.8226, 0.0246),(0.1955, 0.8159, 0.0464)]

LineSet1148.coord = Coordinate1150

Shape1147.geometry = LineSet1148

HAnimSegment1143.children.append(Shape1147)
HAnimSite1151 = x3d.HAnimSite(DEF="hanim_l_carpal_distal_phalanx_1_tip")
HAnimSite1151.name = "l_carpal_distal_phalanx_1_tip"
TouchSensor1152 = x3d.TouchSensor()
TouchSensor1152.description = "HAnimSite l_carpal_distal_phalanx_1_tip"

HAnimSite1151.children.append(TouchSensor1152)
Shape1153 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1151.children.append(Shape1153)

HAnimSegment1143.children.append(HAnimSite1151)

HAnimJoint1142.children.append(HAnimSegment1143)
HAnimJoint1154 = x3d.HAnimJoint(DEF="hanim_l_carpal_interphalangeal_1")
HAnimJoint1154.name = "l_carpal_interphalangeal_1"
HAnimJoint1154.center = [0.1955,0.8159,0.0464]

HAnimJoint1142.children.append(HAnimJoint1154)

HAnimJoint1133.children.append(HAnimJoint1142)

HAnimJoint1124.children.append(HAnimJoint1133)

HAnimJoint1103.children.append(HAnimJoint1124)
HAnimJoint1155 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_2")
HAnimJoint1155.name = "l_midcarpal_2"
HAnimJoint1155.center = [8.0485,0.9225,0.8386]
HAnimSegment1156 = x3d.HAnimSegment(DEF="hanim_l_trapezoid")
HAnimSegment1156.name = "l_trapezoid"
Transform1157 = x3d.Transform()
Transform1157.translation = [8.0485,0.9225,0.8386]
Transform1158 = x3d.Transform()
Shape1159 = x3d.Shape(USE="HAnimJointShape")

Transform1158.children.append(Shape1159)

Transform1157.children.append(Transform1158)

HAnimSegment1156.children.append(Transform1157)
Shape1160 = x3d.Shape()
LineSet1161 = x3d.LineSet()
LineSet1161.vertexCount = [2]
ColorRGBA1162 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1161.color = ColorRGBA1162
Coordinate1163 = x3d.Coordinate()
Coordinate1163.point = [(8.0485, 0.9225, 0.8386),(0.1983, 0.8024, -0.028)]

LineSet1161.coord = Coordinate1163

Shape1160.geometry = LineSet1161

HAnimSegment1156.children.append(Shape1160)
HAnimSite1164 = x3d.HAnimSite(DEF="hanim_l_metacarpal_phalanx_2_pt")
HAnimSite1164.name = "l_metacarpal_phalanx_2_pt"
HAnimSite1164.translation = [0.2009,0.8139,-0.0237]
TouchSensor1165 = x3d.TouchSensor()
TouchSensor1165.description = "HAnimSite l_metacarpal_phalanx_2_pt"

HAnimSite1164.children.append(TouchSensor1165)
Shape1166 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1164.children.append(Shape1166)

HAnimSegment1156.children.append(HAnimSite1164)

HAnimJoint1155.children.append(HAnimSegment1156)
HAnimJoint1167 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_2")
HAnimJoint1167.name = "l_carpometacarpal_2"
HAnimJoint1167.center = [0.1983,0.8024,-0.028]
HAnimSegment1168 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_2")
HAnimSegment1168.name = "l_metacarpal_2"
Transform1169 = x3d.Transform()
Transform1169.translation = [0.1983,0.8024,-0.028]
Transform1170 = x3d.Transform()
Shape1171 = x3d.Shape(USE="HAnimJointShape")

Transform1170.children.append(Shape1171)

Transform1169.children.append(Transform1170)

HAnimSegment1168.children.append(Transform1169)
Shape1172 = x3d.Shape()
LineSet1173 = x3d.LineSet()
LineSet1173.vertexCount = [2]
ColorRGBA1174 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1173.color = ColorRGBA1174
Coordinate1175 = x3d.Coordinate()
Coordinate1175.point = [(0.1983, 0.8024, -0.028),(0.1983, 0.7815, -0.028)]

LineSet1173.coord = Coordinate1175

Shape1172.geometry = LineSet1173

HAnimSegment1168.children.append(Shape1172)

HAnimJoint1167.children.append(HAnimSegment1168)
HAnimJoint1176 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_2")
HAnimJoint1176.name = "l_metacarpophalangeal_2"
HAnimJoint1176.center = [0.1983,0.7815,-0.028]
HAnimSegment1177 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_2 ")
HAnimSegment1177.name = "l_carpal_proximal_phalanx_2 "
Transform1178 = x3d.Transform()
Transform1178.translation = [0.1983,0.7815,-0.028]
Transform1179 = x3d.Transform()
Shape1180 = x3d.Shape(USE="HAnimJointShape")

Transform1179.children.append(Shape1180)

Transform1178.children.append(Transform1179)

HAnimSegment1177.children.append(Transform1178)
Shape1181 = x3d.Shape()
LineSet1182 = x3d.LineSet()
LineSet1182.vertexCount = [2]
ColorRGBA1183 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1182.color = ColorRGBA1183
Coordinate1184 = x3d.Coordinate()
Coordinate1184.point = [(0.1983, 0.7815, -0.028),(0.2017, 0.7363, -0.0248)]

LineSet1182.coord = Coordinate1184

Shape1181.geometry = LineSet1182

HAnimSegment1177.children.append(Shape1181)

HAnimJoint1176.children.append(HAnimSegment1177)
HAnimJoint1185 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint1185.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint1185.center = [0.2017,0.7363,-0.0248]
HAnimSegment1186 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_2")
HAnimSegment1186.name = "l_carpal_middle_phalanx_2"
Transform1187 = x3d.Transform()
Transform1187.translation = [0.2017,0.7363,-0.0248]
Transform1188 = x3d.Transform()
Shape1189 = x3d.Shape(USE="HAnimJointShape")

Transform1188.children.append(Shape1189)

Transform1187.children.append(Transform1188)

HAnimSegment1186.children.append(Transform1187)
Shape1190 = x3d.Shape()
LineSet1191 = x3d.LineSet()
LineSet1191.vertexCount = [2]
ColorRGBA1192 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1191.color = ColorRGBA1192
Coordinate1193 = x3d.Coordinate()
Coordinate1193.point = [(0.2017, 0.7363, -0.0248),(0.2028, 0.7139, -0.0236)]

LineSet1191.coord = Coordinate1193

Shape1190.geometry = LineSet1191

HAnimSegment1186.children.append(Shape1190)
HAnimSite1194 = x3d.HAnimSite(DEF="hanim_l_carpal_distal_phalanx_2_tip")
HAnimSite1194.name = "l_carpal_distal_phalanx_2_tip"
TouchSensor1195 = x3d.TouchSensor()
TouchSensor1195.description = "HAnimSite l_carpal_distal_phalanx_2_tip"

HAnimSite1194.children.append(TouchSensor1195)
Shape1196 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1194.children.append(Shape1196)

HAnimSegment1186.children.append(HAnimSite1194)
HAnimSite1197 = x3d.HAnimSite(DEF="hanim_l_dactylion_pt")
HAnimSite1197.name = "l_dactylion_pt"
HAnimSite1197.translation = [0.2056,0.6743,-0.0482]
TouchSensor1198 = x3d.TouchSensor()
TouchSensor1198.description = "HAnimSite l_dactylion_pt"

HAnimSite1197.children.append(TouchSensor1198)
Shape1199 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1197.children.append(Shape1199)

HAnimSegment1186.children.append(HAnimSite1197)

HAnimJoint1185.children.append(HAnimSegment1186)
HAnimJoint1200 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint1200.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint1200.center = [0.2028,0.7139,-0.0236]

HAnimJoint1185.children.append(HAnimJoint1200)

HAnimJoint1176.children.append(HAnimJoint1185)

HAnimJoint1167.children.append(HAnimJoint1176)

HAnimJoint1155.children.append(HAnimJoint1167)

HAnimJoint1103.children.append(HAnimJoint1155)
HAnimJoint1201 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_3")
HAnimJoint1201.name = "l_midcarpal_3"
HAnimJoint1201.center = [8.0395,0.9246,0.2513]
HAnimSegment1202 = x3d.HAnimSegment(DEF="hanim_l_capitate")
HAnimSegment1202.name = "l_capitate"
Transform1203 = x3d.Transform()
Transform1203.translation = [8.0395,0.9246,0.2513]
Transform1204 = x3d.Transform()
Shape1205 = x3d.Shape(USE="HAnimJointShape")

Transform1204.children.append(Shape1205)

Transform1203.children.append(Transform1204)

HAnimSegment1202.children.append(Transform1203)
Shape1206 = x3d.Shape()
LineSet1207 = x3d.LineSet()
LineSet1207.vertexCount = [2]
ColorRGBA1208 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1207.color = ColorRGBA1208
Coordinate1209 = x3d.Coordinate()
Coordinate1209.point = [(8.0395, 0.9246, 0.2513),(0.1987, 0.8029, -0.053)]

LineSet1207.coord = Coordinate1209

Shape1206.geometry = LineSet1207

HAnimSegment1202.children.append(Shape1206)
HAnimSite1210 = x3d.HAnimSite(DEF="hanim_l_metacarpal_phalanx_3_pt")
HAnimSite1210.name = "l_metacarpal_phalanx_3_pt"
TouchSensor1211 = x3d.TouchSensor()
TouchSensor1211.description = "HAnimSite l_metacarpal_phalanx_3_pt"

HAnimSite1210.children.append(TouchSensor1211)
Shape1212 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1210.children.append(Shape1212)

HAnimSegment1202.children.append(HAnimSite1210)

HAnimJoint1201.children.append(HAnimSegment1202)
HAnimJoint1213 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_3")
HAnimJoint1213.name = "l_carpometacarpal_3"
HAnimJoint1213.center = [0.1987,0.8029,-0.053]
HAnimSegment1214 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_3")
HAnimSegment1214.name = "l_metacarpal_3"
Transform1215 = x3d.Transform()
Transform1215.translation = [0.1987,0.8029,-0.053]
Transform1216 = x3d.Transform()
Shape1217 = x3d.Shape(USE="HAnimJointShape")

Transform1216.children.append(Shape1217)

Transform1215.children.append(Transform1216)

HAnimSegment1214.children.append(Transform1215)
Shape1218 = x3d.Shape()
LineSet1219 = x3d.LineSet()
LineSet1219.vertexCount = [2]
ColorRGBA1220 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1219.color = ColorRGBA1220
Coordinate1221 = x3d.Coordinate()
Coordinate1221.point = [(0.1987, 0.8029, -0.053),(0.1987, 0.7818, -0.053)]

LineSet1219.coord = Coordinate1221

Shape1218.geometry = LineSet1219

HAnimSegment1214.children.append(Shape1218)

HAnimJoint1213.children.append(HAnimSegment1214)
HAnimJoint1222 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_3")
HAnimJoint1222.name = "l_metacarpophalangeal_3"
HAnimJoint1222.center = [0.1987,0.7818,-0.053]
HAnimSegment1223 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_3")
HAnimSegment1223.name = "l_carpal_proximal_phalanx_3"
Transform1224 = x3d.Transform()
Transform1224.translation = [0.1987,0.7818,-0.053]
Transform1225 = x3d.Transform()
Shape1226 = x3d.Shape(USE="HAnimJointShape")

Transform1225.children.append(Shape1226)

Transform1224.children.append(Transform1225)

HAnimSegment1223.children.append(Transform1224)
Shape1227 = x3d.Shape()
LineSet1228 = x3d.LineSet()
LineSet1228.vertexCount = [2]
ColorRGBA1229 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1228.color = ColorRGBA1229
Coordinate1230 = x3d.Coordinate()
Coordinate1230.point = [(0.1987, 0.7818, -0.053),(0.2013, 0.7273, -0.0503)]

LineSet1228.coord = Coordinate1230

Shape1227.geometry = LineSet1228

HAnimSegment1223.children.append(Shape1227)

HAnimJoint1222.children.append(HAnimSegment1223)
HAnimJoint1231 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint1231.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint1231.center = [0.2013,0.7273,-0.0503]
HAnimSegment1232 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_3")
HAnimSegment1232.name = "l_carpal_middle_phalanx_3"
Transform1233 = x3d.Transform()
Transform1233.translation = [0.2013,0.7273,-0.0503]
Transform1234 = x3d.Transform()
Shape1235 = x3d.Shape(USE="HAnimJointShape")

Transform1234.children.append(Shape1235)

Transform1233.children.append(Transform1234)

HAnimSegment1232.children.append(Transform1233)
Shape1236 = x3d.Shape()
LineSet1237 = x3d.LineSet()
LineSet1237.vertexCount = [2]
ColorRGBA1238 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1237.color = ColorRGBA1238
Coordinate1239 = x3d.Coordinate()
Coordinate1239.point = [(0.2013, 0.7273, -0.0503),(0.2026, 0.7011, -0.0494)]

LineSet1237.coord = Coordinate1239

Shape1236.geometry = LineSet1237

HAnimSegment1232.children.append(Shape1236)
HAnimSite1240 = x3d.HAnimSite(DEF="hanim_l_carpal_distal_phalanx_3_tip")
HAnimSite1240.name = "l_carpal_distal_phalanx_3_tip"
TouchSensor1241 = x3d.TouchSensor()
TouchSensor1241.description = "HAnimSite l_carpal_distal_phalanx_3_tip"

HAnimSite1240.children.append(TouchSensor1241)
Shape1242 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1240.children.append(Shape1242)

HAnimSegment1232.children.append(HAnimSite1240)

HAnimJoint1231.children.append(HAnimSegment1232)
HAnimJoint1243 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint1243.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint1243.center = [0.2026,0.7011,-0.0494]

HAnimJoint1231.children.append(HAnimJoint1243)

HAnimJoint1222.children.append(HAnimJoint1231)

HAnimJoint1213.children.append(HAnimJoint1222)

HAnimJoint1201.children.append(HAnimJoint1213)

HAnimJoint1103.children.append(HAnimJoint1201)
HAnimJoint1244 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_4_5")
HAnimJoint1244.name = "l_midcarpal_4_5"
HAnimJoint1244.center = [8.0395,0.921,-0.6795]
HAnimSegment1245 = x3d.HAnimSegment(DEF="hanim_l_hamate")
HAnimSegment1245.name = "l_hamate"
Transform1246 = x3d.Transform()
Transform1246.translation = [8.0395,0.921,-0.6795]
Transform1247 = x3d.Transform()
Shape1248 = x3d.Shape(USE="HAnimJointShape")

Transform1247.children.append(Shape1248)

Transform1246.children.append(Transform1247)

HAnimSegment1245.children.append(Transform1246)
Shape1249 = x3d.Shape()
LineSet1250 = x3d.LineSet()
LineSet1250.vertexCount = [2]
ColorRGBA1251 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1250.color = ColorRGBA1251
Coordinate1252 = x3d.Coordinate()
Coordinate1252.point = [(8.0395, 0.921, -0.6795),(0.1956, 0.8019, -0.0794)]

LineSet1250.coord = Coordinate1252

Shape1249.geometry = LineSet1250

HAnimSegment1245.children.append(Shape1249)
Shape1253 = x3d.Shape()
LineSet1254 = x3d.LineSet()
LineSet1254.vertexCount = [2]
ColorRGBA1255 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1254.color = ColorRGBA1255
Coordinate1256 = x3d.Coordinate()
Coordinate1256.point = [(8.0395, 0.921, -0.6795),(0.1925, 0.8066, -0.1036)]

LineSet1254.coord = Coordinate1256

Shape1253.geometry = LineSet1254

HAnimSegment1245.children.append(Shape1253)
HAnimSite1257 = x3d.HAnimSite(DEF="hanim_l_metacarpal_phalanx_5_pt")
HAnimSite1257.name = "l_metacarpal_phalanx_5_pt"
HAnimSite1257.translation = [0.1929,0.786,-0.1122]
TouchSensor1258 = x3d.TouchSensor()
TouchSensor1258.description = "HAnimSite l_metacarpal_phalanx_5_pt"

HAnimSite1257.children.append(TouchSensor1258)
Shape1259 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1257.children.append(Shape1259)

HAnimSegment1245.children.append(HAnimSite1257)

HAnimJoint1244.children.append(HAnimSegment1245)
HAnimJoint1260 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_4")
HAnimJoint1260.name = "l_carpometacarpal_4"
HAnimJoint1260.center = [0.1956,0.8019,-0.0794]
HAnimSegment1261 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_4")
HAnimSegment1261.name = "l_metacarpal_4"
Transform1262 = x3d.Transform()
Transform1262.translation = [0.1956,0.8019,-0.0794]
Transform1263 = x3d.Transform()
Shape1264 = x3d.Shape(USE="HAnimJointShape")

Transform1263.children.append(Shape1264)

Transform1262.children.append(Transform1263)

HAnimSegment1261.children.append(Transform1262)
Shape1265 = x3d.Shape()
LineSet1266 = x3d.LineSet()
LineSet1266.vertexCount = [2]
ColorRGBA1267 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1266.color = ColorRGBA1267
Coordinate1268 = x3d.Coordinate()
Coordinate1268.point = [(0.1956, 0.8019, -0.0794),(0.1956, 0.7815, -0.0794)]

LineSet1266.coord = Coordinate1268

Shape1265.geometry = LineSet1266

HAnimSegment1261.children.append(Shape1265)

HAnimJoint1260.children.append(HAnimSegment1261)
HAnimJoint1269 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_4")
HAnimJoint1269.name = "l_metacarpophalangeal_4"
HAnimJoint1269.center = [0.1956,0.7815,-0.0794]
HAnimSegment1270 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_4")
HAnimSegment1270.name = "l_carpal_proximal_phalanx_4"
Transform1271 = x3d.Transform()
Transform1271.translation = [0.1956,0.7815,-0.0794]
Transform1272 = x3d.Transform()
Shape1273 = x3d.Shape(USE="HAnimJointShape")

Transform1272.children.append(Shape1273)

Transform1271.children.append(Transform1272)

HAnimSegment1270.children.append(Transform1271)
Shape1274 = x3d.Shape()
LineSet1275 = x3d.LineSet()
LineSet1275.vertexCount = [2]
ColorRGBA1276 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1275.color = ColorRGBA1276
Coordinate1277 = x3d.Coordinate()
Coordinate1277.point = [(0.1956, 0.7815, -0.0794),(0.1973, 0.7287, -0.0777)]

LineSet1275.coord = Coordinate1277

Shape1274.geometry = LineSet1275

HAnimSegment1270.children.append(Shape1274)

HAnimJoint1269.children.append(HAnimSegment1270)
HAnimJoint1278 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint1278.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint1278.center = [0.1973,0.7287,-0.0777]
HAnimSegment1279 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_4")
HAnimSegment1279.name = "l_carpal_middle_phalanx_4"
Transform1280 = x3d.Transform()
Transform1280.translation = [0.1973,0.7287,-0.0777]
Transform1281 = x3d.Transform()
Shape1282 = x3d.Shape(USE="HAnimJointShape")

Transform1281.children.append(Shape1282)

Transform1280.children.append(Transform1281)

HAnimSegment1279.children.append(Transform1280)
Shape1283 = x3d.Shape()
LineSet1284 = x3d.LineSet()
LineSet1284.vertexCount = [2]
ColorRGBA1285 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1284.color = ColorRGBA1285
Coordinate1286 = x3d.Coordinate()
Coordinate1286.point = [(0.1973, 0.7287, -0.0777),(0.1983, 0.7045, -0.0767)]

LineSet1284.coord = Coordinate1286

Shape1283.geometry = LineSet1284

HAnimSegment1279.children.append(Shape1283)
HAnimSite1287 = x3d.HAnimSite(DEF="hanim_l_carpal_distal_phalanx_4_tip")
HAnimSite1287.name = "l_carpal_distal_phalanx_4_tip"
TouchSensor1288 = x3d.TouchSensor()
TouchSensor1288.description = "HAnimSite l_carpal_distal_phalanx_4_tip"

HAnimSite1287.children.append(TouchSensor1288)
Shape1289 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1287.children.append(Shape1289)

HAnimSegment1279.children.append(HAnimSite1287)

HAnimJoint1278.children.append(HAnimSegment1279)
HAnimJoint1290 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint1290.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint1290.center = [0.1983,0.7045,-0.0767]

HAnimJoint1278.children.append(HAnimJoint1290)

HAnimJoint1269.children.append(HAnimJoint1278)

HAnimJoint1260.children.append(HAnimJoint1269)

HAnimJoint1244.children.append(HAnimJoint1260)
HAnimJoint1291 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_5")
HAnimJoint1291.name = "l_carpometacarpal_5"
HAnimJoint1291.center = [0.1925,0.8066,-0.1036]
HAnimSegment1292 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_5")
HAnimSegment1292.name = "l_metacarpal_5"
Transform1293 = x3d.Transform()
Transform1293.translation = [0.1925,0.8066,-0.1036]
Transform1294 = x3d.Transform()
Shape1295 = x3d.Shape(USE="HAnimJointShape")

Transform1294.children.append(Shape1295)

Transform1293.children.append(Transform1294)

HAnimSegment1292.children.append(Transform1293)
Shape1296 = x3d.Shape()
LineSet1297 = x3d.LineSet()
LineSet1297.vertexCount = [2]
ColorRGBA1298 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1297.color = ColorRGBA1298
Coordinate1299 = x3d.Coordinate()
Coordinate1299.point = [(0.1925, 0.8066, -0.1036),(0.1925, 0.7866, -0.1036)]

LineSet1297.coord = Coordinate1299

Shape1296.geometry = LineSet1297

HAnimSegment1292.children.append(Shape1296)

HAnimJoint1291.children.append(HAnimSegment1292)
HAnimJoint1300 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_5")
HAnimJoint1300.name = "l_metacarpophalangeal_5"
HAnimJoint1300.center = [0.1925,0.7866,-0.1036]
HAnimSegment1301 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_5")
HAnimSegment1301.name = "l_carpal_proximal_phalanx_5"
Transform1302 = x3d.Transform()
Transform1302.translation = [0.1925,0.7866,-0.1036]
Transform1303 = x3d.Transform()
Shape1304 = x3d.Shape(USE="HAnimJointShape")

Transform1303.children.append(Shape1304)

Transform1302.children.append(Transform1303)

HAnimSegment1301.children.append(Transform1302)
Shape1305 = x3d.Shape()
LineSet1306 = x3d.LineSet()
LineSet1306.vertexCount = [2]
ColorRGBA1307 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1306.color = ColorRGBA1307
Coordinate1308 = x3d.Coordinate()
Coordinate1308.point = [(0.1925, 0.7866, -0.1036),(0.1938, 0.7452, -0.1024)]

LineSet1306.coord = Coordinate1308

Shape1305.geometry = LineSet1306

HAnimSegment1301.children.append(Shape1305)

HAnimJoint1300.children.append(HAnimSegment1301)
HAnimJoint1309 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint1309.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint1309.center = [0.1938,0.7452,-0.1024]
HAnimSegment1310 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_5")
HAnimSegment1310.name = "l_carpal_middle_phalanx_5"
Transform1311 = x3d.Transform()
Transform1311.translation = [0.1938,0.7452,-0.1024]
Transform1312 = x3d.Transform()
Shape1313 = x3d.Shape(USE="HAnimJointShape")

Transform1312.children.append(Shape1313)

Transform1311.children.append(Transform1312)

HAnimSegment1310.children.append(Transform1311)
Shape1314 = x3d.Shape()
LineSet1315 = x3d.LineSet()
LineSet1315.vertexCount = [2]
ColorRGBA1316 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1315.color = ColorRGBA1316
Coordinate1317 = x3d.Coordinate()
Coordinate1317.point = [(0.1938, 0.7452, -0.1024),(0.1948, 0.7277, -0.1017)]

LineSet1315.coord = Coordinate1317

Shape1314.geometry = LineSet1315

HAnimSegment1310.children.append(Shape1314)
HAnimSite1318 = x3d.HAnimSite(DEF="hanim_l_carpal_distal_phalanx_5_tip")
HAnimSite1318.name = "l_carpal_distal_phalanx_5_tip"
TouchSensor1319 = x3d.TouchSensor()
TouchSensor1319.description = "HAnimSite l_carpal_distal_phalanx_5_tip"

HAnimSite1318.children.append(TouchSensor1319)
Shape1320 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1318.children.append(Shape1320)

HAnimSegment1310.children.append(HAnimSite1318)

HAnimJoint1309.children.append(HAnimSegment1310)
HAnimJoint1321 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint1321.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint1321.center = [0.1948,0.7277,-0.1017]

HAnimJoint1309.children.append(HAnimJoint1321)

HAnimJoint1300.children.append(HAnimJoint1309)

HAnimJoint1291.children.append(HAnimJoint1300)

HAnimJoint1244.children.append(HAnimJoint1291)

HAnimJoint1103.children.append(HAnimJoint1244)

HAnimJoint1091.children.append(HAnimJoint1103)

HAnimJoint1070.children.append(HAnimJoint1091)

HAnimJoint1055.children.append(HAnimJoint1070)

HAnimJoint1046.children.append(HAnimJoint1055)

HAnimJoint842.children.append(HAnimJoint1046)
HAnimJoint1322 = x3d.HAnimJoint(DEF="hanim_r_sternoclavicular")
HAnimJoint1322.name = "r_sternoclavicular"
HAnimJoint1322.center = [-0.0694,1.46,-0.033]
HAnimSegment1323 = x3d.HAnimSegment(DEF="hanim_r_clavicle")
HAnimSegment1323.name = "r_clavicle"
Transform1324 = x3d.Transform()
Transform1324.translation = [-0.0694,1.46,-0.033]
Transform1325 = x3d.Transform()
Shape1326 = x3d.Shape(USE="HAnimJointShape")

Transform1325.children.append(Shape1326)

Transform1324.children.append(Transform1325)

HAnimSegment1323.children.append(Transform1324)
Shape1327 = x3d.Shape()
LineSet1328 = x3d.LineSet()
LineSet1328.vertexCount = [2]
ColorRGBA1329 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1328.color = ColorRGBA1329
Coordinate1330 = x3d.Coordinate()
Coordinate1330.point = [(-0.0694, 1.46, -0.033),(-0.0836, 1.4281, -0.0401)]

LineSet1328.coord = Coordinate1330

Shape1327.geometry = LineSet1328

HAnimSegment1323.children.append(Shape1327)

HAnimJoint1322.children.append(HAnimSegment1323)
HAnimJoint1331 = x3d.HAnimJoint(DEF="hanim_r_acromioclavicular")
HAnimJoint1331.name = "r_acromioclavicular"
HAnimJoint1331.center = [-0.0836,1.4281,-0.0401]
HAnimSegment1332 = x3d.HAnimSegment(DEF="hanim_r_scapula")
HAnimSegment1332.name = "r_scapula"
Transform1333 = x3d.Transform()
Transform1333.translation = [-0.0836,1.4281,-0.0401]
Transform1334 = x3d.Transform()
Shape1335 = x3d.Shape(USE="HAnimJointShape")

Transform1334.children.append(Shape1335)

Transform1333.children.append(Transform1334)

HAnimSegment1332.children.append(Transform1333)
Shape1336 = x3d.Shape()
LineSet1337 = x3d.LineSet()
LineSet1337.vertexCount = [2]
ColorRGBA1338 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1337.color = ColorRGBA1338
Coordinate1339 = x3d.Coordinate()
Coordinate1339.point = [(-0.0836, 1.4281, -0.0401),(-0.1907, 1.4407, -0.0325)]

LineSet1337.coord = Coordinate1339

Shape1336.geometry = LineSet1337

HAnimSegment1332.children.append(Shape1336)
HAnimSite1340 = x3d.HAnimSite(DEF="hanim_r_bideltoid_pt")
HAnimSite1340.name = "r_bideltoid_pt"
TouchSensor1341 = x3d.TouchSensor()
TouchSensor1341.description = "HAnimSite r_bideltoid_pt"

HAnimSite1340.children.append(TouchSensor1341)
Shape1342 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1340.children.append(Shape1342)

HAnimSegment1332.children.append(HAnimSite1340)
HAnimSite1343 = x3d.HAnimSite(DEF="hanim_r_humeral_lateral_epicondyles_pt")
HAnimSite1343.name = "r_humeral_lateral_epicondyles_pt"
HAnimSite1343.translation = [-0.2224,1.1517,-0.1033]
TouchSensor1344 = x3d.TouchSensor()
TouchSensor1344.description = "HAnimSite r_humeral_lateral_epicondyles_pt"

HAnimSite1343.children.append(TouchSensor1344)
Shape1345 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1343.children.append(Shape1345)

HAnimSegment1332.children.append(HAnimSite1343)

HAnimJoint1331.children.append(HAnimSegment1332)
HAnimJoint1346 = x3d.HAnimJoint(DEF="hanim_r_shoulder")
HAnimJoint1346.name = "r_shoulder"
HAnimJoint1346.center = [-0.1907,1.4407,-0.0325]
HAnimSegment1347 = x3d.HAnimSegment(DEF="hanim_r_upperarm")
HAnimSegment1347.name = "r_upperarm"
Transform1348 = x3d.Transform()
Transform1348.translation = [-0.1907,1.4407,-0.0325]
Transform1349 = x3d.Transform()
Shape1350 = x3d.Shape(USE="HAnimJointShape")

Transform1349.children.append(Shape1350)

Transform1348.children.append(Transform1349)

HAnimSegment1347.children.append(Transform1348)
Shape1351 = x3d.Shape()
LineSet1352 = x3d.LineSet()
LineSet1352.vertexCount = [2]
ColorRGBA1353 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1352.color = ColorRGBA1353
Coordinate1354 = x3d.Coordinate()
Coordinate1354.point = [(-0.1907, 1.4407, -0.0325),(-0.1949, 1.1388, -0.062)]

LineSet1352.coord = Coordinate1354

Shape1351.geometry = LineSet1352

HAnimSegment1347.children.append(Shape1351)
HAnimSite1355 = x3d.HAnimSite(DEF="hanim_r_humeral_medial_epicondyles_pt")
HAnimSite1355.name = "r_humeral_medial_epicondyles_pt"
HAnimSite1355.translation = [-0.168,1.1298,-0.1062]
TouchSensor1356 = x3d.TouchSensor()
TouchSensor1356.description = "HAnimSite r_humeral_medial_epicondyles_pt"

HAnimSite1355.children.append(TouchSensor1356)
Shape1357 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1355.children.append(Shape1357)

HAnimSegment1347.children.append(HAnimSite1355)
HAnimSite1358 = x3d.HAnimSite(DEF="hanim_r_olecranon_pt")
HAnimSite1358.name = "r_olecranon_pt"
HAnimSite1358.translation = [-0.1907,1.1405,-0.1065]
TouchSensor1359 = x3d.TouchSensor()
TouchSensor1359.description = "HAnimSite r_olecranon_pt"

HAnimSite1358.children.append(TouchSensor1359)
Shape1360 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1358.children.append(Shape1360)

HAnimSegment1347.children.append(HAnimSite1358)
HAnimSite1361 = x3d.HAnimSite(DEF="hanim_r_radial_styloid_pt")
HAnimSite1361.name = "r_radial_styloid_pt"
HAnimSite1361.translation = [-0.1884,0.8676,-0.036]
TouchSensor1362 = x3d.TouchSensor()
TouchSensor1362.description = "HAnimSite r_radial_styloid_pt"

HAnimSite1361.children.append(TouchSensor1362)
Shape1363 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1361.children.append(Shape1363)

HAnimSegment1347.children.append(HAnimSite1361)
HAnimSite1364 = x3d.HAnimSite(DEF="hanim_r_radiale_pt")
HAnimSite1364.name = "r_radiale_pt"
HAnimSite1364.translation = [-0.213,1.1305,-0.1091]
TouchSensor1365 = x3d.TouchSensor()
TouchSensor1365.description = "HAnimSite r_radiale_pt"

HAnimSite1364.children.append(TouchSensor1365)
Shape1366 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1364.children.append(Shape1366)

HAnimSegment1347.children.append(HAnimSite1364)

HAnimJoint1346.children.append(HAnimSegment1347)
HAnimJoint1367 = x3d.HAnimJoint(DEF="hanim_r_elbow")
HAnimJoint1367.name = "r_elbow"
HAnimJoint1367.center = [-0.1949,1.1388,-0.062]
HAnimSegment1368 = x3d.HAnimSegment(DEF="hanim_r_forearm")
HAnimSegment1368.name = "r_forearm"
Transform1369 = x3d.Transform()
Transform1369.translation = [-0.1949,1.1388,-0.062]
Transform1370 = x3d.Transform()
Shape1371 = x3d.Shape(USE="HAnimJointShape")

Transform1370.children.append(Shape1371)

Transform1369.children.append(Transform1370)

HAnimSegment1368.children.append(Transform1369)
Shape1372 = x3d.Shape()
LineSet1373 = x3d.LineSet()
LineSet1373.vertexCount = [2]
ColorRGBA1374 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1373.color = ColorRGBA1374
Coordinate1375 = x3d.Coordinate()
Coordinate1375.point = [(-0.1949, 1.1388, -0.062),(-0.1959, 0.8694, -0.0521)]

LineSet1373.coord = Coordinate1375

Shape1372.geometry = LineSet1373

HAnimSegment1368.children.append(Shape1372)
HAnimSite1376 = x3d.HAnimSite(DEF="hanim_r_ulnar_styloid_pt")
HAnimSite1376.name = "r_ulnar_styloid_pt"
HAnimSite1376.translation = [-0.2117,0.8562,-0.0584]
TouchSensor1377 = x3d.TouchSensor()
TouchSensor1377.description = "HAnimSite r_ulnar_styloid_pt"

HAnimSite1376.children.append(TouchSensor1377)
Shape1378 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1376.children.append(Shape1378)

HAnimSegment1368.children.append(HAnimSite1376)

HAnimJoint1367.children.append(HAnimSegment1368)
HAnimJoint1379 = x3d.HAnimJoint(DEF="hanim_r_radiocarpal")
HAnimJoint1379.name = "r_radiocarpal"
HAnimJoint1379.center = [-0.1959,0.8694,-0.0521]
HAnimSegment1380 = x3d.HAnimSegment(DEF="hanim_r_carpal")
HAnimSegment1380.name = "r_carpal"
Transform1381 = x3d.Transform()
Transform1381.translation = [-0.2,0.85,-0.05]
Transform1381.rotation = [0,0,1,-3.14]
Transform1381.scale = [0.2,0.2,0.2]
Transform1382 = x3d.Transform()
Transform1382.rotation = [0,1,0,1.57]
Shape1383 = x3d.Shape(USE="HAnimJointShape")

Transform1382.children.append(Shape1383)

Transform1381.children.append(Transform1382)

HAnimSegment1380.children.append(Transform1381)
Shape1384 = x3d.Shape()
LineSet1385 = x3d.LineSet()
LineSet1385.vertexCount = [2]
ColorRGBA1386 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1385.color = ColorRGBA1386
Coordinate1387 = x3d.Coordinate()
Coordinate1387.point = [(-0.1959, 0.8694, -0.0521),(-8.0515, 0.9213, 1.3235)]

LineSet1385.coord = Coordinate1387

Shape1384.geometry = LineSet1385

HAnimSegment1380.children.append(Shape1384)
Shape1388 = x3d.Shape()
LineSet1389 = x3d.LineSet()
LineSet1389.vertexCount = [2]
ColorRGBA1390 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1389.color = ColorRGBA1390
Coordinate1391 = x3d.Coordinate()
Coordinate1391.point = [(-0.1959, 0.8694, -0.0521),(-8.0515, 0.9225, 0.8386)]

LineSet1389.coord = Coordinate1391

Shape1388.geometry = LineSet1389

HAnimSegment1380.children.append(Shape1388)
Shape1392 = x3d.Shape()
LineSet1393 = x3d.LineSet()
LineSet1393.vertexCount = [2]
ColorRGBA1394 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1393.color = ColorRGBA1394
Coordinate1395 = x3d.Coordinate()
Coordinate1395.point = [(-0.1959, 0.8694, -0.0521),(-8.0405, 0.9246, 0.2513)]

LineSet1393.coord = Coordinate1395

Shape1392.geometry = LineSet1393

HAnimSegment1380.children.append(Shape1392)
Shape1396 = x3d.Shape()
LineSet1397 = x3d.LineSet()
LineSet1397.vertexCount = [2]
ColorRGBA1398 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1397.color = ColorRGBA1398
Coordinate1399 = x3d.Coordinate()
Coordinate1399.point = [(-0.1959, 0.8694, -0.0521),(-8.0405, 0.921, -0.6795)]

LineSet1397.coord = Coordinate1399

Shape1396.geometry = LineSet1397

HAnimSegment1380.children.append(Shape1396)

HAnimJoint1379.children.append(HAnimSegment1380)
HAnimJoint1400 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_1")
HAnimJoint1400.name = "r_midcarpal_1"
HAnimJoint1400.center = [-8.0515,0.9213,1.3235]
HAnimSegment1401 = x3d.HAnimSegment(DEF="hanim_r_trapezium")
HAnimSegment1401.name = "r_trapezium"
Transform1402 = x3d.Transform()
Transform1402.translation = [-8.0515,0.9213,1.3235]
Transform1403 = x3d.Transform()
Shape1404 = x3d.Shape(USE="HAnimJointShape")

Transform1403.children.append(Shape1404)

Transform1402.children.append(Transform1403)

HAnimSegment1401.children.append(Transform1402)
Shape1405 = x3d.Shape()
LineSet1406 = x3d.LineSet()
LineSet1406.vertexCount = [2]
ColorRGBA1407 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1406.color = ColorRGBA1407
Coordinate1408 = x3d.Coordinate()
Coordinate1408.point = [(-8.0515, 0.9213, 1.3235),(-0.1899, 0.8502, -0.0473)]

LineSet1406.coord = Coordinate1408

Shape1405.geometry = LineSet1406

HAnimSegment1401.children.append(Shape1405)

HAnimJoint1400.children.append(HAnimSegment1401)
HAnimJoint1409 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_1")
HAnimJoint1409.name = "r_carpometacarpal_1"
HAnimJoint1409.center = [-0.1899,0.8502,-0.0473]
HAnimSegment1410 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_1")
HAnimSegment1410.name = "r_metacarpal_1"
Transform1411 = x3d.Transform()
Transform1411.translation = [-0.1899,0.8502,-0.0473]
Transform1412 = x3d.Transform()
Shape1413 = x3d.Shape(USE="HAnimJointShape")

Transform1412.children.append(Shape1413)

Transform1411.children.append(Transform1412)

HAnimSegment1410.children.append(Transform1411)
Shape1414 = x3d.Shape()
LineSet1415 = x3d.LineSet()
LineSet1415.vertexCount = [2]
ColorRGBA1416 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1415.color = ColorRGBA1416
Coordinate1417 = x3d.Coordinate()
Coordinate1417.point = [(-0.1899, 0.8502, -0.0473),(-0.1874, 0.8256, 0.0306)]

LineSet1415.coord = Coordinate1417

Shape1414.geometry = LineSet1415

HAnimSegment1410.children.append(Shape1414)

HAnimJoint1409.children.append(HAnimSegment1410)
HAnimJoint1418 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_1")
HAnimJoint1418.name = "r_metacarpophalangeal_1"
HAnimJoint1418.center = [-0.1874,0.8256,0.0306]
HAnimSegment1419 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_1")
HAnimSegment1419.name = "r_carpal_proximal_phalanx_1"
Transform1420 = x3d.Transform()
Transform1420.translation = [-0.1874,0.8256,0.0306]
Transform1421 = x3d.Transform()
Shape1422 = x3d.Shape(USE="HAnimJointShape")

Transform1421.children.append(Shape1422)

Transform1420.children.append(Transform1421)

HAnimSegment1419.children.append(Transform1420)
Shape1423 = x3d.Shape()
LineSet1424 = x3d.LineSet()
LineSet1424.vertexCount = [2]
ColorRGBA1425 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1424.color = ColorRGBA1425
Coordinate1426 = x3d.Coordinate()
Coordinate1426.point = [(-0.1874, 0.8256, 0.0306),(-0.1864, 0.819, 0.0506)]

LineSet1424.coord = Coordinate1426

Shape1423.geometry = LineSet1424

HAnimSegment1419.children.append(Shape1423)
HAnimSite1427 = x3d.HAnimSite(DEF="hanim_r_carpal_distal_phalanx_1_tip")
HAnimSite1427.name = "r_carpal_distal_phalanx_1_tip"
TouchSensor1428 = x3d.TouchSensor()
TouchSensor1428.description = "HAnimSite r_carpal_distal_phalanx_1_tip"

HAnimSite1427.children.append(TouchSensor1428)
Shape1429 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1427.children.append(Shape1429)

HAnimSegment1419.children.append(HAnimSite1427)

HAnimJoint1418.children.append(HAnimSegment1419)
HAnimJoint1430 = x3d.HAnimJoint(DEF="hanim_r_carpal_interphalangeal_1")
HAnimJoint1430.name = "r_carpal_interphalangeal_1"
HAnimJoint1430.center = [-0.1864,0.819,0.0506]

HAnimJoint1418.children.append(HAnimJoint1430)

HAnimJoint1409.children.append(HAnimJoint1418)

HAnimJoint1400.children.append(HAnimJoint1409)

HAnimJoint1379.children.append(HAnimJoint1400)
HAnimJoint1431 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_2")
HAnimJoint1431.name = "r_midcarpal_2"
HAnimJoint1431.center = [-8.0515,0.9225,0.8386]
HAnimSegment1432 = x3d.HAnimSegment(DEF="hanim_r_trapezoid")
HAnimSegment1432.name = "r_trapezoid"
Transform1433 = x3d.Transform()
Transform1433.translation = [-8.0515,0.9225,0.8386]
Transform1434 = x3d.Transform()
Shape1435 = x3d.Shape(USE="HAnimJointShape")

Transform1434.children.append(Shape1435)

Transform1433.children.append(Transform1434)

HAnimSegment1432.children.append(Transform1433)
Shape1436 = x3d.Shape()
LineSet1437 = x3d.LineSet()
LineSet1437.vertexCount = [2]
ColorRGBA1438 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1437.color = ColorRGBA1438
Coordinate1439 = x3d.Coordinate()
Coordinate1439.point = [(-8.0515, 0.9225, 0.8386),(-0.1961, 0.8055, -0.0218)]

LineSet1437.coord = Coordinate1439

Shape1436.geometry = LineSet1437

HAnimSegment1432.children.append(Shape1436)
HAnimSite1440 = x3d.HAnimSite(DEF="hanim_r_metacarpal_phalanx_2_pt")
HAnimSite1440.name = "r_metacarpal_phalanx_2_pt"
HAnimSite1440.translation = [-0.1977,0.8169,-0.0177]
TouchSensor1441 = x3d.TouchSensor()
TouchSensor1441.description = "HAnimSite r_metacarpal_phalanx_2_pt"

HAnimSite1440.children.append(TouchSensor1441)
Shape1442 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1440.children.append(Shape1442)

HAnimSegment1432.children.append(HAnimSite1440)

HAnimJoint1431.children.append(HAnimSegment1432)
HAnimJoint1443 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_2")
HAnimJoint1443.name = "r_carpometacarpal_2"
HAnimJoint1443.center = [-0.1961,0.8055,-0.0218]
HAnimSegment1444 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_2")
HAnimSegment1444.name = "r_metacarpal_2"
Transform1445 = x3d.Transform()
Transform1445.translation = [-0.1961,0.8055,-0.0218]
Transform1446 = x3d.Transform()
Shape1447 = x3d.Shape(USE="HAnimJointShape")

Transform1446.children.append(Shape1447)

Transform1445.children.append(Transform1446)

HAnimSegment1444.children.append(Transform1445)
Shape1448 = x3d.Shape()
LineSet1449 = x3d.LineSet()
LineSet1449.vertexCount = [2]
ColorRGBA1450 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1449.color = ColorRGBA1450
Coordinate1451 = x3d.Coordinate()
Coordinate1451.point = [(-0.1961, 0.8055, -0.0218),(-0.1961, 0.7846, -0.0218)]

LineSet1449.coord = Coordinate1451

Shape1448.geometry = LineSet1449

HAnimSegment1444.children.append(Shape1448)

HAnimJoint1443.children.append(HAnimSegment1444)
HAnimJoint1452 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_2")
HAnimJoint1452.name = "r_metacarpophalangeal_2"
HAnimJoint1452.center = [-0.1961,0.7846,-0.0218]
HAnimSegment1453 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_2 ")
HAnimSegment1453.name = "r_carpal_proximal_phalanx_2 "
Transform1454 = x3d.Transform()
Transform1454.translation = [-0.1961,0.7846,-0.0218]
Transform1455 = x3d.Transform()
Shape1456 = x3d.Shape(USE="HAnimJointShape")

Transform1455.children.append(Shape1456)

Transform1454.children.append(Transform1455)

HAnimSegment1453.children.append(Transform1454)
Shape1457 = x3d.Shape()
LineSet1458 = x3d.LineSet()
LineSet1458.vertexCount = [2]
ColorRGBA1459 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1458.color = ColorRGBA1459
Coordinate1460 = x3d.Coordinate()
Coordinate1460.point = [(-0.1961, 0.7846, -0.0218),(-0.1954, 0.7393, -0.0185)]

LineSet1458.coord = Coordinate1460

Shape1457.geometry = LineSet1458

HAnimSegment1453.children.append(Shape1457)

HAnimJoint1452.children.append(HAnimSegment1453)
HAnimJoint1461 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint1461.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint1461.center = [-0.1954,0.7393,-0.0185]
HAnimSegment1462 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_2")
HAnimSegment1462.name = "r_carpal_middle_phalanx_2"
Transform1463 = x3d.Transform()
Transform1463.translation = [-0.1954,0.7393,-0.0185]
Transform1464 = x3d.Transform()
Shape1465 = x3d.Shape(USE="HAnimJointShape")

Transform1464.children.append(Shape1465)

Transform1463.children.append(Transform1464)

HAnimSegment1462.children.append(Transform1463)
Shape1466 = x3d.Shape()
LineSet1467 = x3d.LineSet()
LineSet1467.vertexCount = [2]
ColorRGBA1468 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1467.color = ColorRGBA1468
Coordinate1469 = x3d.Coordinate()
Coordinate1469.point = [(-0.1954, 0.7393, -0.0185),(-0.1945, 0.7169, -0.0173)]

LineSet1467.coord = Coordinate1469

Shape1466.geometry = LineSet1467

HAnimSegment1462.children.append(Shape1466)
HAnimSite1470 = x3d.HAnimSite(DEF="hanim_r_carpal_distal_phalanx_2_tip")
HAnimSite1470.name = "r_carpal_distal_phalanx_2_tip"
TouchSensor1471 = x3d.TouchSensor()
TouchSensor1471.description = "HAnimSite r_carpal_distal_phalanx_2_tip"

HAnimSite1470.children.append(TouchSensor1471)
Shape1472 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1470.children.append(Shape1472)

HAnimSegment1462.children.append(HAnimSite1470)
HAnimSite1473 = x3d.HAnimSite(DEF="hanim_r_dactylion_pt")
HAnimSite1473.name = "r_dactylion_pt"
HAnimSite1473.translation = [-0.1941,0.6772,-0.0423]
TouchSensor1474 = x3d.TouchSensor()
TouchSensor1474.description = "HAnimSite r_dactylion_pt"

HAnimSite1473.children.append(TouchSensor1474)
Shape1475 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1473.children.append(Shape1475)

HAnimSegment1462.children.append(HAnimSite1473)

HAnimJoint1461.children.append(HAnimSegment1462)
HAnimJoint1476 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint1476.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint1476.center = [-0.1945,0.7169,-0.0173]

HAnimJoint1461.children.append(HAnimJoint1476)

HAnimJoint1452.children.append(HAnimJoint1461)

HAnimJoint1443.children.append(HAnimJoint1452)

HAnimJoint1431.children.append(HAnimJoint1443)

HAnimJoint1379.children.append(HAnimJoint1431)
HAnimJoint1477 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_3")
HAnimJoint1477.name = "r_midcarpal_3"
HAnimJoint1477.center = [-8.0405,0.9246,0.2513]
HAnimSegment1478 = x3d.HAnimSegment(DEF="hanim_r_capitate")
HAnimSegment1478.name = "r_capitate"
Transform1479 = x3d.Transform()
Transform1479.translation = [-8.0405,0.9246,0.2513]
Transform1480 = x3d.Transform()
Shape1481 = x3d.Shape(USE="HAnimJointShape")

Transform1480.children.append(Shape1481)

Transform1479.children.append(Transform1480)

HAnimSegment1478.children.append(Transform1479)
Shape1482 = x3d.Shape()
LineSet1483 = x3d.LineSet()
LineSet1483.vertexCount = [2]
ColorRGBA1484 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1483.color = ColorRGBA1484
Coordinate1485 = x3d.Coordinate()
Coordinate1485.point = [(-8.0405, 0.9246, 0.2513),(-0.1972, 0.806, -0.0468)]

LineSet1483.coord = Coordinate1485

Shape1482.geometry = LineSet1483

HAnimSegment1478.children.append(Shape1482)
HAnimSite1486 = x3d.HAnimSite(DEF="hanim_r_metacarpal_phalanx_3_pt")
HAnimSite1486.name = "r_metacarpal_phalanx_3_pt"
TouchSensor1487 = x3d.TouchSensor()
TouchSensor1487.description = "HAnimSite r_metacarpal_phalanx_3_pt"

HAnimSite1486.children.append(TouchSensor1487)
Shape1488 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1486.children.append(Shape1488)

HAnimSegment1478.children.append(HAnimSite1486)

HAnimJoint1477.children.append(HAnimSegment1478)
HAnimJoint1489 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_3")
HAnimJoint1489.name = "r_carpometacarpal_3"
HAnimJoint1489.center = [-0.1972,0.806,-0.0468]
HAnimSegment1490 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_3")
HAnimSegment1490.name = "r_metacarpal_3"
Transform1491 = x3d.Transform()
Transform1491.translation = [-0.1972,0.806,-0.0468]
Transform1492 = x3d.Transform()
Shape1493 = x3d.Shape(USE="HAnimJointShape")

Transform1492.children.append(Shape1493)

Transform1491.children.append(Transform1492)

HAnimSegment1490.children.append(Transform1491)
Shape1494 = x3d.Shape()
LineSet1495 = x3d.LineSet()
LineSet1495.vertexCount = [2]
ColorRGBA1496 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1495.color = ColorRGBA1496
Coordinate1497 = x3d.Coordinate()
Coordinate1497.point = [(-0.1972, 0.806, -0.0468),(-0.1972, 0.7849, -0.0468)]

LineSet1495.coord = Coordinate1497

Shape1494.geometry = LineSet1495

HAnimSegment1490.children.append(Shape1494)

HAnimJoint1489.children.append(HAnimSegment1490)
HAnimJoint1498 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_3")
HAnimJoint1498.name = "r_metacarpophalangeal_3"
HAnimJoint1498.center = [-0.1972,0.7849,-0.0468]
HAnimSegment1499 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_3")
HAnimSegment1499.name = "r_carpal_proximal_phalanx_3"
Transform1500 = x3d.Transform()
Transform1500.translation = [-0.1972,0.7849,-0.0468]
Transform1501 = x3d.Transform()
Shape1502 = x3d.Shape(USE="HAnimJointShape")

Transform1501.children.append(Shape1502)

Transform1500.children.append(Transform1501)

HAnimSegment1499.children.append(Transform1500)
Shape1503 = x3d.Shape()
LineSet1504 = x3d.LineSet()
LineSet1504.vertexCount = [2]
ColorRGBA1505 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1504.color = ColorRGBA1505
Coordinate1506 = x3d.Coordinate()
Coordinate1506.point = [(-0.1972, 0.7849, -0.0468),(-0.195, 0.7304, -0.0441)]

LineSet1504.coord = Coordinate1506

Shape1503.geometry = LineSet1504

HAnimSegment1499.children.append(Shape1503)

HAnimJoint1498.children.append(HAnimSegment1499)
HAnimJoint1507 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint1507.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint1507.center = [-0.195,0.7304,-0.0441]
HAnimSegment1508 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_3")
HAnimSegment1508.name = "r_carpal_middle_phalanx_3"
Transform1509 = x3d.Transform()
Transform1509.translation = [-0.195,0.7304,-0.0441]
Transform1510 = x3d.Transform()
Shape1511 = x3d.Shape(USE="HAnimJointShape")

Transform1510.children.append(Shape1511)

Transform1509.children.append(Transform1510)

HAnimSegment1508.children.append(Transform1509)
Shape1512 = x3d.Shape()
LineSet1513 = x3d.LineSet()
LineSet1513.vertexCount = [2]
ColorRGBA1514 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1513.color = ColorRGBA1514
Coordinate1515 = x3d.Coordinate()
Coordinate1515.point = [(-0.195, 0.7304, -0.0441),(-0.1939, 0.7042, -0.0432)]

LineSet1513.coord = Coordinate1515

Shape1512.geometry = LineSet1513

HAnimSegment1508.children.append(Shape1512)
HAnimSite1516 = x3d.HAnimSite(DEF="hanim_r_carpal_distal_phalanx_3_tip")
HAnimSite1516.name = "r_carpal_distal_phalanx_3_tip"
TouchSensor1517 = x3d.TouchSensor()
TouchSensor1517.description = "HAnimSite r_carpal_distal_phalanx_3_tip"

HAnimSite1516.children.append(TouchSensor1517)
Shape1518 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1516.children.append(Shape1518)

HAnimSegment1508.children.append(HAnimSite1516)

HAnimJoint1507.children.append(HAnimSegment1508)
HAnimJoint1519 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint1519.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint1519.center = [-0.1939,0.7042,-0.0432]

HAnimJoint1507.children.append(HAnimJoint1519)

HAnimJoint1498.children.append(HAnimJoint1507)

HAnimJoint1489.children.append(HAnimJoint1498)

HAnimJoint1477.children.append(HAnimJoint1489)

HAnimJoint1379.children.append(HAnimJoint1477)
HAnimJoint1520 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_4_5")
HAnimJoint1520.name = "r_midcarpal_4_5"
HAnimJoint1520.center = [-8.0405,0.921,-0.6795]
HAnimSegment1521 = x3d.HAnimSegment(DEF="hanim_r_hamate")
HAnimSegment1521.name = "r_hamate"
Transform1522 = x3d.Transform()
Transform1522.translation = [-8.0405,0.921,-0.6795]
Transform1523 = x3d.Transform()
Shape1524 = x3d.Shape(USE="HAnimJointShape")

Transform1523.children.append(Shape1524)

Transform1522.children.append(Transform1523)

HAnimSegment1521.children.append(Transform1522)
Shape1525 = x3d.Shape()
LineSet1526 = x3d.LineSet()
LineSet1526.vertexCount = [2]
ColorRGBA1527 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1526.color = ColorRGBA1527
Coordinate1528 = x3d.Coordinate()
Coordinate1528.point = [(-8.0405, 0.921, -0.6795),(-0.1951, 0.8049, -0.0732)]

LineSet1526.coord = Coordinate1528

Shape1525.geometry = LineSet1526

HAnimSegment1521.children.append(Shape1525)
Shape1529 = x3d.Shape()
LineSet1530 = x3d.LineSet()
LineSet1530.vertexCount = [2]
ColorRGBA1531 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1530.color = ColorRGBA1531
Coordinate1532 = x3d.Coordinate()
Coordinate1532.point = [(-8.0405, 0.921, -0.6795),(-0.1926, 0.8096, -0.0975)]

LineSet1530.coord = Coordinate1532

Shape1529.geometry = LineSet1530

HAnimSegment1521.children.append(Shape1529)
HAnimSite1533 = x3d.HAnimSite(DEF="hanim_r_metacarpal_phalanx_5_pt")
HAnimSite1533.name = "r_metacarpal_phalanx_5_pt"
HAnimSite1533.translation = [-0.1929,0.789,-0.1064]
TouchSensor1534 = x3d.TouchSensor()
TouchSensor1534.description = "HAnimSite r_metacarpal_phalanx_5_pt"

HAnimSite1533.children.append(TouchSensor1534)
Shape1535 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1533.children.append(Shape1535)

HAnimSegment1521.children.append(HAnimSite1533)

HAnimJoint1520.children.append(HAnimSegment1521)
HAnimJoint1536 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_4")
HAnimJoint1536.name = "r_carpometacarpal_4"
HAnimJoint1536.center = [-0.1951,0.8049,-0.0732]
HAnimSegment1537 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_4")
HAnimSegment1537.name = "r_metacarpal_4"
Transform1538 = x3d.Transform()
Transform1538.translation = [-0.1951,0.8049,-0.0732]
Transform1539 = x3d.Transform()
Shape1540 = x3d.Shape(USE="HAnimJointShape")

Transform1539.children.append(Shape1540)

Transform1538.children.append(Transform1539)

HAnimSegment1537.children.append(Transform1538)
Shape1541 = x3d.Shape()
LineSet1542 = x3d.LineSet()
LineSet1542.vertexCount = [2]
ColorRGBA1543 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1542.color = ColorRGBA1543
Coordinate1544 = x3d.Coordinate()
Coordinate1544.point = [(-0.1951, 0.8049, -0.0732),(-0.1951, 0.7845, -0.0732)]

LineSet1542.coord = Coordinate1544

Shape1541.geometry = LineSet1542

HAnimSegment1537.children.append(Shape1541)

HAnimJoint1536.children.append(HAnimSegment1537)
HAnimJoint1545 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_4")
HAnimJoint1545.name = "r_metacarpophalangeal_4"
HAnimJoint1545.center = [-0.1951,0.7845,-0.0732]
HAnimSegment1546 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_4")
HAnimSegment1546.name = "r_carpal_proximal_phalanx_4"
Transform1547 = x3d.Transform()
Transform1547.translation = [-0.1951,0.7845,-0.0732]
Transform1548 = x3d.Transform()
Shape1549 = x3d.Shape(USE="HAnimJointShape")

Transform1548.children.append(Shape1549)

Transform1547.children.append(Transform1548)

HAnimSegment1546.children.append(Transform1547)
Shape1550 = x3d.Shape()
LineSet1551 = x3d.LineSet()
LineSet1551.vertexCount = [2]
ColorRGBA1552 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1551.color = ColorRGBA1552
Coordinate1553 = x3d.Coordinate()
Coordinate1553.point = [(-0.1951, 0.7845, -0.0732),(-0.192, 0.7318, -0.0716)]

LineSet1551.coord = Coordinate1553

Shape1550.geometry = LineSet1551

HAnimSegment1546.children.append(Shape1550)

HAnimJoint1545.children.append(HAnimSegment1546)
HAnimJoint1554 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint1554.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint1554.center = [-0.192,0.7318,-0.0716]
HAnimSegment1555 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_4")
HAnimSegment1555.name = "r_carpal_middle_phalanx_4"
Transform1556 = x3d.Transform()
Transform1556.translation = [-0.192,0.7318,-0.0716]
Transform1557 = x3d.Transform()
Shape1558 = x3d.Shape(USE="HAnimJointShape")

Transform1557.children.append(Shape1558)

Transform1556.children.append(Transform1557)

HAnimSegment1555.children.append(Transform1556)
Shape1559 = x3d.Shape()
LineSet1560 = x3d.LineSet()
LineSet1560.vertexCount = [2]
ColorRGBA1561 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1560.color = ColorRGBA1561
Coordinate1562 = x3d.Coordinate()
Coordinate1562.point = [(-0.192, 0.7318, -0.0716),(-0.1908, 0.7077, -0.0706)]

LineSet1560.coord = Coordinate1562

Shape1559.geometry = LineSet1560

HAnimSegment1555.children.append(Shape1559)
HAnimSite1563 = x3d.HAnimSite(DEF="hanim_r_carpal_distal_phalanx_4_tip")
HAnimSite1563.name = "r_carpal_distal_phalanx_4_tip"
TouchSensor1564 = x3d.TouchSensor()
TouchSensor1564.description = "HAnimSite r_carpal_distal_phalanx_4_tip"

HAnimSite1563.children.append(TouchSensor1564)
Shape1565 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1563.children.append(Shape1565)

HAnimSegment1555.children.append(HAnimSite1563)

HAnimJoint1554.children.append(HAnimSegment1555)
HAnimJoint1566 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint1566.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint1566.center = [-0.1908,0.7077,-0.0706]

HAnimJoint1554.children.append(HAnimJoint1566)

HAnimJoint1545.children.append(HAnimJoint1554)

HAnimJoint1536.children.append(HAnimJoint1545)

HAnimJoint1520.children.append(HAnimJoint1536)
HAnimJoint1567 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_5")
HAnimJoint1567.name = "r_carpometacarpal_5"
HAnimJoint1567.center = [-0.1926,0.8096,-0.0975]
HAnimSegment1568 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_5")
HAnimSegment1568.name = "r_metacarpal_5"
Transform1569 = x3d.Transform()
Transform1569.translation = [-0.1926,0.8096,-0.0975]
Transform1570 = x3d.Transform()
Shape1571 = x3d.Shape(USE="HAnimJointShape")

Transform1570.children.append(Shape1571)

Transform1569.children.append(Transform1570)

HAnimSegment1568.children.append(Transform1569)
Shape1572 = x3d.Shape()
LineSet1573 = x3d.LineSet()
LineSet1573.vertexCount = [2]
ColorRGBA1574 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1573.color = ColorRGBA1574
Coordinate1575 = x3d.Coordinate()
Coordinate1575.point = [(-0.1926, 0.8096, -0.0975),(-0.1926, 0.7896, -0.0975)]

LineSet1573.coord = Coordinate1575

Shape1572.geometry = LineSet1573

HAnimSegment1568.children.append(Shape1572)

HAnimJoint1567.children.append(HAnimSegment1568)
HAnimJoint1576 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_5")
HAnimJoint1576.name = "r_metacarpophalangeal_5"
HAnimJoint1576.center = [-0.1926,0.7896,-0.0975]
HAnimSegment1577 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_5")
HAnimSegment1577.name = "r_carpal_proximal_phalanx_5"
Transform1578 = x3d.Transform()
Transform1578.translation = [-0.1926,0.7896,-0.0975]
Transform1579 = x3d.Transform()
Shape1580 = x3d.Shape(USE="HAnimJointShape")

Transform1579.children.append(Shape1580)

Transform1578.children.append(Transform1579)

HAnimSegment1577.children.append(Transform1578)
Shape1581 = x3d.Shape()
LineSet1582 = x3d.LineSet()
LineSet1582.vertexCount = [2]
ColorRGBA1583 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1582.color = ColorRGBA1583
Coordinate1584 = x3d.Coordinate()
Coordinate1584.point = [(-0.1926, 0.7896, -0.0975),(-0.1902, 0.7483, -0.0963)]

LineSet1582.coord = Coordinate1584

Shape1581.geometry = LineSet1582

HAnimSegment1577.children.append(Shape1581)

HAnimJoint1576.children.append(HAnimSegment1577)
HAnimJoint1585 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint1585.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint1585.center = [-0.1902,0.7483,-0.0963]
HAnimSegment1586 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_5")
HAnimSegment1586.name = "r_carpal_middle_phalanx_5"
Transform1587 = x3d.Transform()
Transform1587.translation = [-0.1902,0.7483,-0.0963]
Transform1588 = x3d.Transform()
Shape1589 = x3d.Shape(USE="HAnimJointShape")

Transform1588.children.append(Shape1589)

Transform1587.children.append(Transform1588)

HAnimSegment1586.children.append(Transform1587)
Shape1590 = x3d.Shape()
LineSet1591 = x3d.LineSet()
LineSet1591.vertexCount = [2]
ColorRGBA1592 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1591.color = ColorRGBA1592
Coordinate1593 = x3d.Coordinate()
Coordinate1593.point = [(-0.1902, 0.7483, -0.0963),(-0.1908, 0.754, -0.096)]

LineSet1591.coord = Coordinate1593

Shape1590.geometry = LineSet1591

HAnimSegment1586.children.append(Shape1590)
HAnimSite1594 = x3d.HAnimSite(DEF="hanim_r_carpal_distal_phalanx_5_tip")
HAnimSite1594.name = "r_carpal_distal_phalanx_5_tip"
TouchSensor1595 = x3d.TouchSensor()
TouchSensor1595.description = "HAnimSite r_carpal_distal_phalanx_5_tip"

HAnimSite1594.children.append(TouchSensor1595)
Shape1596 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1594.children.append(Shape1596)

HAnimSegment1586.children.append(HAnimSite1594)

HAnimJoint1585.children.append(HAnimSegment1586)
HAnimJoint1597 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint1597.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint1597.center = [-0.1908,0.754,-0.096]

HAnimJoint1585.children.append(HAnimJoint1597)

HAnimJoint1576.children.append(HAnimJoint1585)

HAnimJoint1567.children.append(HAnimJoint1576)

HAnimJoint1520.children.append(HAnimJoint1567)

HAnimJoint1379.children.append(HAnimJoint1520)

HAnimJoint1367.children.append(HAnimJoint1379)

HAnimJoint1346.children.append(HAnimJoint1367)

HAnimJoint1331.children.append(HAnimJoint1346)

HAnimJoint1322.children.append(HAnimJoint1331)

HAnimJoint842.children.append(HAnimJoint1322)

HAnimJoint827.children.append(HAnimJoint842)

HAnimJoint818.children.append(HAnimJoint827)

HAnimJoint809.children.append(HAnimJoint818)

HAnimJoint800.children.append(HAnimJoint809)

HAnimJoint788.children.append(HAnimJoint800)

HAnimJoint767.children.append(HAnimJoint788)

HAnimJoint758.children.append(HAnimJoint767)

HAnimJoint749.children.append(HAnimJoint758)

HAnimJoint734.children.append(HAnimJoint749)

HAnimJoint722.children.append(HAnimJoint734)

HAnimJoint713.children.append(HAnimJoint722)

HAnimJoint704.children.append(HAnimJoint713)

HAnimJoint695.children.append(HAnimJoint704)

HAnimJoint677.children.append(HAnimJoint695)

HAnimJoint668.children.append(HAnimJoint677)

HAnimJoint659.children.append(HAnimJoint668)

HAnimJoint42.children.append(HAnimJoint659)

HAnimHumanoid41.skeleton.append(HAnimJoint42)
HAnimJoint1598 = x3d.HAnimJoint(USE="hanim_humanoid_root")

HAnimHumanoid41.joints.append(HAnimJoint1598)
HAnimJoint1599 = x3d.HAnimJoint(USE="hanim_sacroiliac")

HAnimHumanoid41.joints.append(HAnimJoint1599)
HAnimJoint1600 = x3d.HAnimJoint(USE="hanim_l_hip")

HAnimHumanoid41.joints.append(HAnimJoint1600)
HAnimJoint1601 = x3d.HAnimJoint(USE="hanim_l_knee")

HAnimHumanoid41.joints.append(HAnimJoint1601)
HAnimJoint1602 = x3d.HAnimJoint(USE="hanim_l_talocrural")

HAnimHumanoid41.joints.append(HAnimJoint1602)
HAnimJoint1603 = x3d.HAnimJoint(USE="hanim_l_talocalcaneonavicular")

HAnimHumanoid41.joints.append(HAnimJoint1603)
HAnimJoint1604 = x3d.HAnimJoint(USE="hanim_l_cuneonavicular_1")

HAnimHumanoid41.joints.append(HAnimJoint1604)
HAnimJoint1605 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_1")

HAnimHumanoid41.joints.append(HAnimJoint1605)
HAnimJoint1606 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint1606)
HAnimJoint1607 = x3d.HAnimJoint(USE="hanim_l_tarsal_interphalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint1607)
HAnimJoint1608 = x3d.HAnimJoint(USE="hanim_l_cuneonavicular_2")

HAnimHumanoid41.joints.append(HAnimJoint1608)
HAnimJoint1609 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_2")

HAnimHumanoid41.joints.append(HAnimJoint1609)
HAnimJoint1610 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1610)
HAnimJoint1611 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1611)
HAnimJoint1612 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1612)
HAnimJoint1613 = x3d.HAnimJoint(USE="hanim_l_cuneonavicular_3")

HAnimHumanoid41.joints.append(HAnimJoint1613)
HAnimJoint1614 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_3 ")

HAnimHumanoid41.joints.append(HAnimJoint1614)
HAnimJoint1615 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1615)
HAnimJoint1616 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1616)
HAnimJoint1617 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1617)
HAnimJoint1618 = x3d.HAnimJoint(USE="hanim_l_calcaneocuboid")

HAnimHumanoid41.joints.append(HAnimJoint1618)
HAnimJoint1619 = x3d.HAnimJoint(USE="hanim_l_transversetarsal")

HAnimHumanoid41.joints.append(HAnimJoint1619)
HAnimJoint1620 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_4")

HAnimHumanoid41.joints.append(HAnimJoint1620)
HAnimJoint1621 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1621)
HAnimJoint1622 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1622)
HAnimJoint1623 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1623)
HAnimJoint1624 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_5")

HAnimHumanoid41.joints.append(HAnimJoint1624)
HAnimJoint1625 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1625)
HAnimJoint1626 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1626)
HAnimJoint1627 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1627)
HAnimJoint1628 = x3d.HAnimJoint(USE="hanim_r_hip")

HAnimHumanoid41.joints.append(HAnimJoint1628)
HAnimJoint1629 = x3d.HAnimJoint(USE="hanim_r_knee")

HAnimHumanoid41.joints.append(HAnimJoint1629)
HAnimJoint1630 = x3d.HAnimJoint(USE="hanim_r_talocrural")

HAnimHumanoid41.joints.append(HAnimJoint1630)
HAnimJoint1631 = x3d.HAnimJoint(USE="hanim_r_talocalcaneonavicular")

HAnimHumanoid41.joints.append(HAnimJoint1631)
HAnimJoint1632 = x3d.HAnimJoint(USE="hanim_r_cuneonavicular_1")

HAnimHumanoid41.joints.append(HAnimJoint1632)
HAnimJoint1633 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_1")

HAnimHumanoid41.joints.append(HAnimJoint1633)
HAnimJoint1634 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint1634)
HAnimJoint1635 = x3d.HAnimJoint(USE="hanim_r_tarsal_interphalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint1635)
HAnimJoint1636 = x3d.HAnimJoint(USE="hanim_r_cuneonavicular_2")

HAnimHumanoid41.joints.append(HAnimJoint1636)
HAnimJoint1637 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_2")

HAnimHumanoid41.joints.append(HAnimJoint1637)
HAnimJoint1638 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1638)
HAnimJoint1639 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1639)
HAnimJoint1640 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1640)
HAnimJoint1641 = x3d.HAnimJoint(USE="hanim_r_cuneonavicular_3")

HAnimHumanoid41.joints.append(HAnimJoint1641)
HAnimJoint1642 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_3 ")

HAnimHumanoid41.joints.append(HAnimJoint1642)
HAnimJoint1643 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1643)
HAnimJoint1644 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1644)
HAnimJoint1645 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1645)
HAnimJoint1646 = x3d.HAnimJoint(USE="hanim_r_calcaneocuboid")

HAnimHumanoid41.joints.append(HAnimJoint1646)
HAnimJoint1647 = x3d.HAnimJoint(USE="hanim_r_transversetarsal")

HAnimHumanoid41.joints.append(HAnimJoint1647)
HAnimJoint1648 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_4")

HAnimHumanoid41.joints.append(HAnimJoint1648)
HAnimJoint1649 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1649)
HAnimJoint1650 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1650)
HAnimJoint1651 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1651)
HAnimJoint1652 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_5")

HAnimHumanoid41.joints.append(HAnimJoint1652)
HAnimJoint1653 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1653)
HAnimJoint1654 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1654)
HAnimJoint1655 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1655)
HAnimJoint1656 = x3d.HAnimJoint(USE="hanim_vl5")

HAnimHumanoid41.joints.append(HAnimJoint1656)
HAnimJoint1657 = x3d.HAnimJoint(USE="hanim_vl4")

HAnimHumanoid41.joints.append(HAnimJoint1657)
HAnimJoint1658 = x3d.HAnimJoint(USE="hanim_vl3")

HAnimHumanoid41.joints.append(HAnimJoint1658)
HAnimJoint1659 = x3d.HAnimJoint(USE="hanim_vl2")

HAnimHumanoid41.joints.append(HAnimJoint1659)
HAnimJoint1660 = x3d.HAnimJoint(USE="hanim_vl1")

HAnimHumanoid41.joints.append(HAnimJoint1660)
HAnimJoint1661 = x3d.HAnimJoint(USE="hanim_vt12")

HAnimHumanoid41.joints.append(HAnimJoint1661)
HAnimJoint1662 = x3d.HAnimJoint(USE="hanim_vt11")

HAnimHumanoid41.joints.append(HAnimJoint1662)
HAnimJoint1663 = x3d.HAnimJoint(USE="hanim_vt10")

HAnimHumanoid41.joints.append(HAnimJoint1663)
HAnimJoint1664 = x3d.HAnimJoint(USE="hanim_vt9")

HAnimHumanoid41.joints.append(HAnimJoint1664)
HAnimJoint1665 = x3d.HAnimJoint(USE="hanim_vt8")

HAnimHumanoid41.joints.append(HAnimJoint1665)
HAnimJoint1666 = x3d.HAnimJoint(USE="hanim_vt7")

HAnimHumanoid41.joints.append(HAnimJoint1666)
HAnimJoint1667 = x3d.HAnimJoint(USE="hanim_vt6")

HAnimHumanoid41.joints.append(HAnimJoint1667)
HAnimJoint1668 = x3d.HAnimJoint(USE="hanim_vt5")

HAnimHumanoid41.joints.append(HAnimJoint1668)
HAnimJoint1669 = x3d.HAnimJoint(USE="hanim_vt4")

HAnimHumanoid41.joints.append(HAnimJoint1669)
HAnimJoint1670 = x3d.HAnimJoint(USE="hanim_vt3")

HAnimHumanoid41.joints.append(HAnimJoint1670)
HAnimJoint1671 = x3d.HAnimJoint(USE="hanim_vt2")

HAnimHumanoid41.joints.append(HAnimJoint1671)
HAnimJoint1672 = x3d.HAnimJoint(USE="hanim_vt1")

HAnimHumanoid41.joints.append(HAnimJoint1672)
HAnimJoint1673 = x3d.HAnimJoint(USE="hanim_vc7")

HAnimHumanoid41.joints.append(HAnimJoint1673)
HAnimJoint1674 = x3d.HAnimJoint(USE="hanim_vc6")

HAnimHumanoid41.joints.append(HAnimJoint1674)
HAnimJoint1675 = x3d.HAnimJoint(USE="hanim_vc5")

HAnimHumanoid41.joints.append(HAnimJoint1675)
HAnimJoint1676 = x3d.HAnimJoint(USE="hanim_vc4")

HAnimHumanoid41.joints.append(HAnimJoint1676)
HAnimJoint1677 = x3d.HAnimJoint(USE="hanim_vc3")

HAnimHumanoid41.joints.append(HAnimJoint1677)
HAnimJoint1678 = x3d.HAnimJoint(USE="hanim_vc2")

HAnimHumanoid41.joints.append(HAnimJoint1678)
HAnimJoint1679 = x3d.HAnimJoint(USE="hanim_vc1")

HAnimHumanoid41.joints.append(HAnimJoint1679)
HAnimJoint1680 = x3d.HAnimJoint(USE="hanim_skullbase")

HAnimHumanoid41.joints.append(HAnimJoint1680)
HAnimJoint1681 = x3d.HAnimJoint(USE="hanim_l_eyelid_joint")

HAnimHumanoid41.joints.append(HAnimJoint1681)
HAnimJoint1682 = x3d.HAnimJoint(USE="hanim_r_eyelid_joint")

HAnimHumanoid41.joints.append(HAnimJoint1682)
HAnimJoint1683 = x3d.HAnimJoint(USE="hanim_l_eyeball_joint")

HAnimHumanoid41.joints.append(HAnimJoint1683)
HAnimJoint1684 = x3d.HAnimJoint(USE="hanim_r_eyeball_joint")

HAnimHumanoid41.joints.append(HAnimJoint1684)
HAnimJoint1685 = x3d.HAnimJoint(USE="hanim_l_eyebrow_joint")

HAnimHumanoid41.joints.append(HAnimJoint1685)
HAnimJoint1686 = x3d.HAnimJoint(USE="hanim_r_eyebrow_joint")

HAnimHumanoid41.joints.append(HAnimJoint1686)
HAnimJoint1687 = x3d.HAnimJoint(USE="hanim_temporomandibular")

HAnimHumanoid41.joints.append(HAnimJoint1687)
HAnimJoint1688 = x3d.HAnimJoint(USE="hanim_l_sternoclavicular")

HAnimHumanoid41.joints.append(HAnimJoint1688)
HAnimJoint1689 = x3d.HAnimJoint(USE="hanim_l_acromioclavicular")

HAnimHumanoid41.joints.append(HAnimJoint1689)
HAnimJoint1690 = x3d.HAnimJoint(USE="hanim_l_shoulder")

HAnimHumanoid41.joints.append(HAnimJoint1690)
HAnimJoint1691 = x3d.HAnimJoint(USE="hanim_l_elbow")

HAnimHumanoid41.joints.append(HAnimJoint1691)
HAnimJoint1692 = x3d.HAnimJoint(USE="hanim_l_radiocarpal")

HAnimHumanoid41.joints.append(HAnimJoint1692)
HAnimJoint1693 = x3d.HAnimJoint(USE="hanim_l_midcarpal_1")

HAnimHumanoid41.joints.append(HAnimJoint1693)
HAnimJoint1694 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_1")

HAnimHumanoid41.joints.append(HAnimJoint1694)
HAnimJoint1695 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint1695)
HAnimJoint1696 = x3d.HAnimJoint(USE="hanim_l_carpal_interphalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint1696)
HAnimJoint1697 = x3d.HAnimJoint(USE="hanim_l_midcarpal_2")

HAnimHumanoid41.joints.append(HAnimJoint1697)
HAnimJoint1698 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_2")

HAnimHumanoid41.joints.append(HAnimJoint1698)
HAnimJoint1699 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1699)
HAnimJoint1700 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1700)
HAnimJoint1701 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1701)
HAnimJoint1702 = x3d.HAnimJoint(USE="hanim_l_midcarpal_3")

HAnimHumanoid41.joints.append(HAnimJoint1702)
HAnimJoint1703 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_3")

HAnimHumanoid41.joints.append(HAnimJoint1703)
HAnimJoint1704 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1704)
HAnimJoint1705 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1705)
HAnimJoint1706 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1706)
HAnimJoint1707 = x3d.HAnimJoint(USE="hanim_l_midcarpal_4_5")

HAnimHumanoid41.joints.append(HAnimJoint1707)
HAnimJoint1708 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_4")

HAnimHumanoid41.joints.append(HAnimJoint1708)
HAnimJoint1709 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1709)
HAnimJoint1710 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1710)
HAnimJoint1711 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1711)
HAnimJoint1712 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_5")

HAnimHumanoid41.joints.append(HAnimJoint1712)
HAnimJoint1713 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1713)
HAnimJoint1714 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1714)
HAnimJoint1715 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1715)
HAnimJoint1716 = x3d.HAnimJoint(USE="hanim_r_sternoclavicular")

HAnimHumanoid41.joints.append(HAnimJoint1716)
HAnimJoint1717 = x3d.HAnimJoint(USE="hanim_r_acromioclavicular")

HAnimHumanoid41.joints.append(HAnimJoint1717)
HAnimJoint1718 = x3d.HAnimJoint(USE="hanim_r_shoulder")

HAnimHumanoid41.joints.append(HAnimJoint1718)
HAnimJoint1719 = x3d.HAnimJoint(USE="hanim_r_elbow")

HAnimHumanoid41.joints.append(HAnimJoint1719)
HAnimJoint1720 = x3d.HAnimJoint(USE="hanim_r_radiocarpal")

HAnimHumanoid41.joints.append(HAnimJoint1720)
HAnimJoint1721 = x3d.HAnimJoint(USE="hanim_r_midcarpal_1")

HAnimHumanoid41.joints.append(HAnimJoint1721)
HAnimJoint1722 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_1")

HAnimHumanoid41.joints.append(HAnimJoint1722)
HAnimJoint1723 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint1723)
HAnimJoint1724 = x3d.HAnimJoint(USE="hanim_r_carpal_interphalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint1724)
HAnimJoint1725 = x3d.HAnimJoint(USE="hanim_r_midcarpal_2")

HAnimHumanoid41.joints.append(HAnimJoint1725)
HAnimJoint1726 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_2")

HAnimHumanoid41.joints.append(HAnimJoint1726)
HAnimJoint1727 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1727)
HAnimJoint1728 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1728)
HAnimJoint1729 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1729)
HAnimJoint1730 = x3d.HAnimJoint(USE="hanim_r_midcarpal_3")

HAnimHumanoid41.joints.append(HAnimJoint1730)
HAnimJoint1731 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_3")

HAnimHumanoid41.joints.append(HAnimJoint1731)
HAnimJoint1732 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1732)
HAnimJoint1733 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1733)
HAnimJoint1734 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1734)
HAnimJoint1735 = x3d.HAnimJoint(USE="hanim_r_midcarpal_4_5")

HAnimHumanoid41.joints.append(HAnimJoint1735)
HAnimJoint1736 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_4")

HAnimHumanoid41.joints.append(HAnimJoint1736)
HAnimJoint1737 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1737)
HAnimJoint1738 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1738)
HAnimJoint1739 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1739)
HAnimJoint1740 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_5")

HAnimHumanoid41.joints.append(HAnimJoint1740)
HAnimJoint1741 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1741)
HAnimJoint1742 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1742)
HAnimJoint1743 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1743)
Coordinate1744 = x3d.Coordinate()

HAnimHumanoid41.skinCoord = Coordinate1744

Scene9.children.append(HAnimHumanoid41)

X3D0.Scene = Scene9
f = open("../data/Humanoid4_1.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Humanoid4_1.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/Humanoid4_1.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
