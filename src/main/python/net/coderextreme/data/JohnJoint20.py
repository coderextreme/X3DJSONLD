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
meta3.content = "JohnJoint20.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "identifier"
meta4.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint20.x3d"

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
meta8.content = "Mon, 09 Feb 2026 07:11:51 GMT"

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
HAnimDisplacer44 = x3d.HAnimDisplacer()
HAnimDisplacer44.name = "sacrum_feature"
HAnimDisplacer44.coordIndex = [0]
HAnimDisplacer44.displacements = [(0, 0, 0)]

HAnimSegment43.displacers.append(HAnimDisplacer44)
HAnimDisplacer45 = x3d.HAnimDisplacer()
HAnimDisplacer45.name = "sacrum_config"
HAnimDisplacer45.coordIndex = [0]
HAnimDisplacer45.displacements = [(0, 0, 0)]

HAnimSegment43.displacers.append(HAnimDisplacer45)
Transform46 = x3d.Transform()
Transform47 = x3d.Transform()
Shape48 = x3d.Shape(USE="HAnimJointShape")

Transform47.children.append(Shape48)

Transform46.children.append(Transform47)

HAnimSegment43.children.append(Transform46)
Shape49 = x3d.Shape()
LineSet50 = x3d.LineSet()
LineSet50.vertexCount = [2]
ColorRGBA51 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet50.color = ColorRGBA51
Coordinate52 = x3d.Coordinate()
Coordinate52.point = [(0, 0.824, 0.0277),(0, 0.9149, 0.0016)]

LineSet50.coord = Coordinate52

Shape49.geometry = LineSet50

HAnimSegment43.children.append(Shape49)
HAnimSite53 = x3d.HAnimSite(DEF="hanim_buttocks_standing_wall_contact_point_pt")
HAnimSite53.name = "buttocks_standing_wall_contact_point_pt"
HAnimSite53.translation = [0,1,0]
TouchSensor54 = x3d.TouchSensor()
TouchSensor54.description = "HAnimSite buttocks_standing_wall_contact_point_pt"

HAnimSite53.children.append(TouchSensor54)
Shape55 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite53.children.append(Shape55)

HAnimSegment43.children.append(HAnimSite53)
HAnimSite56 = x3d.HAnimSite(DEF="hanim_crotch_pt")
HAnimSite56.name = "crotch_pt"
HAnimSite56.translation = [0.0034,0.8266,0.0257]
TouchSensor57 = x3d.TouchSensor()
TouchSensor57.description = "HAnimSite crotch_pt"

HAnimSite56.children.append(TouchSensor57)
Shape58 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite56.children.append(Shape58)

HAnimSegment43.children.append(HAnimSite56)
HAnimSite59 = x3d.HAnimSite(DEF="hanim_l_asis_pt")
HAnimSite59.name = "l_asis_pt"
HAnimSite59.translation = [0.0925,0.9983,0.1052]
TouchSensor60 = x3d.TouchSensor()
TouchSensor60.description = "HAnimSite l_asis_pt"

HAnimSite59.children.append(TouchSensor60)
Shape61 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite59.children.append(Shape61)

HAnimSegment43.children.append(HAnimSite59)
HAnimSite62 = x3d.HAnimSite(DEF="hanim_l_iliocristale_pt")
HAnimSite62.name = "l_iliocristale_pt"
HAnimSite62.translation = [0.1612,1.0537,0.0008]
TouchSensor63 = x3d.TouchSensor()
TouchSensor63.description = "HAnimSite l_iliocristale_pt"

HAnimSite62.children.append(TouchSensor63)
Shape64 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite62.children.append(Shape64)

HAnimSegment43.children.append(HAnimSite62)
HAnimSite65 = x3d.HAnimSite(DEF="hanim_l_psis_pt")
HAnimSite65.name = "l_psis_pt"
HAnimSite65.translation = [0.0774,1.019,-0.1151]
TouchSensor66 = x3d.TouchSensor()
TouchSensor66.description = "HAnimSite l_psis_pt"

HAnimSite65.children.append(TouchSensor66)
Shape67 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite65.children.append(Shape67)

HAnimSegment43.children.append(HAnimSite65)
HAnimSite68 = x3d.HAnimSite(DEF="hanim_l_trochanterion_pt")
HAnimSite68.name = "l_trochanterion_pt"
HAnimSite68.translation = [0.1677,0.8336,0.0303]
TouchSensor69 = x3d.TouchSensor()
TouchSensor69.description = "HAnimSite l_trochanterion_pt"

HAnimSite68.children.append(TouchSensor69)
Shape70 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite68.children.append(Shape70)

HAnimSegment43.children.append(HAnimSite68)
HAnimSite71 = x3d.HAnimSite(DEF="hanim_r_asis_pt")
HAnimSite71.name = "r_asis_pt"
HAnimSite71.translation = [-0.0887,1.0021,0.1112]
TouchSensor72 = x3d.TouchSensor()
TouchSensor72.description = "HAnimSite r_asis_pt"

HAnimSite71.children.append(TouchSensor72)
Shape73 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite71.children.append(Shape73)

HAnimSegment43.children.append(HAnimSite71)
HAnimSite74 = x3d.HAnimSite(DEF="hanim_r_iliocristale_pt")
HAnimSite74.name = "r_iliocristale_pt"
HAnimSite74.translation = [-0.1525,1.0628,0.0035]
TouchSensor75 = x3d.TouchSensor()
TouchSensor75.description = "HAnimSite r_iliocristale_pt"

HAnimSite74.children.append(TouchSensor75)
Shape76 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite74.children.append(Shape76)

HAnimSegment43.children.append(HAnimSite74)
HAnimSite77 = x3d.HAnimSite(DEF="hanim_r_psis_pt")
HAnimSite77.name = "r_psis_pt"
HAnimSite77.translation = [-0.0716,1.019,-0.1138]
TouchSensor78 = x3d.TouchSensor()
TouchSensor78.description = "HAnimSite r_psis_pt"

HAnimSite77.children.append(TouchSensor78)
Shape79 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite77.children.append(Shape79)

HAnimSegment43.children.append(HAnimSite77)
HAnimSite80 = x3d.HAnimSite(DEF="hanim_r_trochanterion_pt")
HAnimSite80.name = "r_trochanterion_pt"
HAnimSite80.translation = [-0.1689,0.8419,0.0352]
TouchSensor81 = x3d.TouchSensor()
TouchSensor81.description = "HAnimSite r_trochanterion_pt"

HAnimSite80.children.append(TouchSensor81)
Shape82 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite80.children.append(Shape82)

HAnimSegment43.children.append(HAnimSite80)
Shape83 = x3d.Shape()
LineSet84 = x3d.LineSet()
LineSet84.vertexCount = [2]
ColorRGBA85 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet84.color = ColorRGBA85
Coordinate86 = x3d.Coordinate()
Coordinate86.point = [(0, 0.824, 0.0277),(0.0028, 1.0568, -0.0776)]

LineSet84.coord = Coordinate86

Shape83.geometry = LineSet84

HAnimSegment43.children.append(Shape83)
HAnimSite87 = x3d.HAnimSite(DEF="hanim_navel_pt")
HAnimSite87.name = "navel_pt"
HAnimSite87.translation = [0.0069,1.0966,0.1017]
TouchSensor88 = x3d.TouchSensor()
TouchSensor88.description = "HAnimSite navel_pt"

HAnimSite87.children.append(TouchSensor88)
Shape89 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite87.children.append(Shape89)

HAnimSegment43.children.append(HAnimSite87)
HAnimSite90 = x3d.HAnimSite(DEF="hanim_waist_preferred_anterior_pt")
HAnimSite90.name = "waist_preferred_anterior_pt"
HAnimSite90.translation = [0,1,0]
TouchSensor91 = x3d.TouchSensor()
TouchSensor91.description = "HAnimSite waist_preferred_anterior_pt"

HAnimSite90.children.append(TouchSensor91)
Shape92 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite90.children.append(Shape92)

HAnimSegment43.children.append(HAnimSite90)
HAnimSite93 = x3d.HAnimSite(DEF="hanim_waist_preferred_posterior_pt")
HAnimSite93.name = "waist_preferred_posterior_pt"
HAnimSite93.translation = [0.29,1.0915,-0.1091]
TouchSensor94 = x3d.TouchSensor()
TouchSensor94.description = "HAnimSite waist_preferred_posterior_pt"

HAnimSite93.children.append(TouchSensor94)
Shape95 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite93.children.append(Shape95)

HAnimSegment43.children.append(HAnimSite93)

HAnimJoint42.children.append(HAnimSegment43)
HAnimJoint96 = x3d.HAnimJoint(DEF="hanim_sacroiliac")
HAnimJoint96.name = "sacroiliac"
HAnimJoint96.center = [0,0.9149,0.0016]
HAnimSegment97 = x3d.HAnimSegment(DEF="hanim_pelvis")
HAnimSegment97.name = "pelvis"
Transform98 = x3d.Transform()
Transform99 = x3d.Transform()
Shape100 = x3d.Shape(USE="HAnimJointShape")

Transform99.children.append(Shape100)

Transform98.children.append(Transform99)

HAnimSegment97.children.append(Transform98)
Shape101 = x3d.Shape()
LineSet102 = x3d.LineSet()
LineSet102.vertexCount = [2]
ColorRGBA103 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet102.color = ColorRGBA103
Coordinate104 = x3d.Coordinate()
Coordinate104.point = [(0, 0.9149, 0.0016),(0.0961, 0.9124, -0.0001)]

LineSet102.coord = Coordinate104

Shape101.geometry = LineSet102

HAnimSegment97.children.append(Shape101)
HAnimSite105 = x3d.HAnimSite(DEF="hanim_l_femoral_lateral_epicondyles_pt")
HAnimSite105.name = "l_femoral_lateral_epicondyles_pt"
HAnimSite105.translation = [0.1598,0.4967,0.0297]
TouchSensor106 = x3d.TouchSensor()
TouchSensor106.description = "HAnimSite l_femoral_lateral_epicondyles_pt"

HAnimSite105.children.append(TouchSensor106)
Shape107 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite105.children.append(Shape107)

HAnimSegment97.children.append(HAnimSite105)
HAnimSite108 = x3d.HAnimSite(DEF="hanim_l_femoral_medial_epicondyles_pt")
HAnimSite108.name = "l_femoral_medial_epicondyles_pt"
HAnimSite108.translation = [0.0398,0.4946,0.0303]
TouchSensor109 = x3d.TouchSensor()
TouchSensor109.description = "HAnimSite l_femoral_medial_epicondyles_pt"

HAnimSite108.children.append(TouchSensor109)
Shape110 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite108.children.append(Shape110)

HAnimSegment97.children.append(HAnimSite108)
HAnimSite111 = x3d.HAnimSite(DEF="hanim_l_knee_crease_pt")
HAnimSite111.name = "l_knee_crease_pt"
HAnimSite111.translation = [0.0993,0.4881,-0.0309]
TouchSensor112 = x3d.TouchSensor()
TouchSensor112.description = "HAnimSite l_knee_crease_pt"

HAnimSite111.children.append(TouchSensor112)
Shape113 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite111.children.append(Shape113)

HAnimSegment97.children.append(HAnimSite111)
HAnimSite114 = x3d.HAnimSite(DEF="hanim_l_suprapatella_pt")
HAnimSite114.name = "l_suprapatella_pt"
HAnimSite114.translation = [0,1,0]
TouchSensor115 = x3d.TouchSensor()
TouchSensor115.description = "HAnimSite l_suprapatella_pt"

HAnimSite114.children.append(TouchSensor115)
Shape116 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite114.children.append(Shape116)

HAnimSegment97.children.append(HAnimSite114)
Shape117 = x3d.Shape()
LineSet118 = x3d.LineSet()
LineSet118.vertexCount = [2]
ColorRGBA119 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet118.color = ColorRGBA119
Coordinate120 = x3d.Coordinate()
Coordinate120.point = [(0, 0.9149, 0.0016),(-0.095, 0.9171, 0.0029)]

LineSet118.coord = Coordinate120

Shape117.geometry = LineSet118

HAnimSegment97.children.append(Shape117)
HAnimSite121 = x3d.HAnimSite(DEF="hanim_r_femoral_lateral_epicondyles_pt")
HAnimSite121.name = "r_femoral_lateral_epicondyles_pt"
HAnimSite121.translation = [-0.1421,0.4992,0.031]
TouchSensor122 = x3d.TouchSensor()
TouchSensor122.description = "HAnimSite r_femoral_lateral_epicondyles_pt"

HAnimSite121.children.append(TouchSensor122)
Shape123 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite121.children.append(Shape123)

HAnimSegment97.children.append(HAnimSite121)
HAnimSite124 = x3d.HAnimSite(DEF="hanim_r_femoral_medial_epicondyles_pt")
HAnimSite124.name = "r_femoral_medial_epicondyles_pt"
HAnimSite124.translation = [-0.0221,0.5014,0.0289]
TouchSensor125 = x3d.TouchSensor()
TouchSensor125.description = "HAnimSite r_femoral_medial_epicondyles_pt"

HAnimSite124.children.append(TouchSensor125)
Shape126 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite124.children.append(Shape126)

HAnimSegment97.children.append(HAnimSite124)
HAnimSite127 = x3d.HAnimSite(DEF="hanim_r_knee_crease_pt")
HAnimSite127.name = "r_knee_crease_pt"
HAnimSite127.translation = [-0.0825,0.4932,-0.0326]
TouchSensor128 = x3d.TouchSensor()
TouchSensor128.description = "HAnimSite r_knee_crease_pt"

HAnimSite127.children.append(TouchSensor128)
Shape129 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite127.children.append(Shape129)

HAnimSegment97.children.append(HAnimSite127)
HAnimSite130 = x3d.HAnimSite(DEF="hanim_r_suprapatella_pt")
HAnimSite130.name = "r_suprapatella_pt"
HAnimSite130.translation = [0,1,0]
TouchSensor131 = x3d.TouchSensor()
TouchSensor131.description = "HAnimSite r_suprapatella_pt"

HAnimSite130.children.append(TouchSensor131)
Shape132 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite130.children.append(Shape132)

HAnimSegment97.children.append(HAnimSite130)

HAnimJoint96.children.append(HAnimSegment97)
HAnimJoint133 = x3d.HAnimJoint(DEF="hanim_l_hip")
HAnimJoint133.name = "l_hip"
HAnimJoint133.center = [0.0961,0.9124,-0.0001]
HAnimSegment134 = x3d.HAnimSegment(DEF="hanim_l_thigh")
HAnimSegment134.name = "l_thigh"
Transform135 = x3d.Transform()
Transform136 = x3d.Transform()
Shape137 = x3d.Shape(USE="HAnimJointShape")

Transform136.children.append(Shape137)

Transform135.children.append(Transform136)

HAnimSegment134.children.append(Transform135)
Shape138 = x3d.Shape()
LineSet139 = x3d.LineSet()
LineSet139.vertexCount = [2]
ColorRGBA140 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet139.color = ColorRGBA140
Coordinate141 = x3d.Coordinate()
Coordinate141.point = [(0.0961, 0.9124, -0.0001),(0.104, 0.4867, 0.0308)]

LineSet139.coord = Coordinate141

Shape138.geometry = LineSet139

HAnimSegment134.children.append(Shape138)
HAnimSite142 = x3d.HAnimSite(DEF="hanim_l_lateral_malleolus_pt")
HAnimSite142.name = "l_lateral_malleolus_pt"
HAnimSite142.translation = [0.1308,0.0597,-0.1032]
TouchSensor143 = x3d.TouchSensor()
TouchSensor143.description = "HAnimSite l_lateral_malleolus_pt"

HAnimSite142.children.append(TouchSensor143)
Shape144 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite142.children.append(Shape144)

HAnimSegment134.children.append(HAnimSite142)
HAnimSite145 = x3d.HAnimSite(DEF="hanim_l_medial_malleolus_pt")
HAnimSite145.name = "l_medial_malleolus_pt"
HAnimSite145.translation = [0.089,0.0716,-0.0881]
TouchSensor146 = x3d.TouchSensor()
TouchSensor146.description = "HAnimSite l_medial_malleolus_pt"

HAnimSite145.children.append(TouchSensor146)
Shape147 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite145.children.append(Shape147)

HAnimSegment134.children.append(HAnimSite145)
HAnimSite148 = x3d.HAnimSite(DEF="hanim_l_tibiale_pt")
HAnimSite148.name = "l_tibiale_pt"
HAnimSite148.translation = [0,1,0]
TouchSensor149 = x3d.TouchSensor()
TouchSensor149.description = "HAnimSite l_tibiale_pt"

HAnimSite148.children.append(TouchSensor149)
Shape150 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite148.children.append(Shape150)

HAnimSegment134.children.append(HAnimSite148)

HAnimJoint133.children.append(HAnimSegment134)
HAnimJoint151 = x3d.HAnimJoint(DEF="hanim_l_knee")
HAnimJoint151.name = "l_knee"
HAnimJoint151.center = [0.104,0.4867,0.0308]
HAnimSegment152 = x3d.HAnimSegment(DEF="hanim_l_calf")
HAnimSegment152.name = "l_calf"
Transform153 = x3d.Transform()
Transform154 = x3d.Transform()
Shape155 = x3d.Shape(USE="HAnimJointShape")

Transform154.children.append(Shape155)

Transform153.children.append(Transform154)

HAnimSegment152.children.append(Transform153)
Shape156 = x3d.Shape()
LineSet157 = x3d.LineSet()
LineSet157.vertexCount = [2]
ColorRGBA158 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet157.color = ColorRGBA158
Coordinate159 = x3d.Coordinate()
Coordinate159.point = [(0.104, 0.4867, 0.0308),(0.1101, 0.0656, -0.0736)]

LineSet157.coord = Coordinate159

Shape156.geometry = LineSet157

HAnimSegment152.children.append(Shape156)
HAnimSite160 = x3d.HAnimSite(DEF="hanim_l_calcaneus_posterior_pt")
HAnimSite160.name = "l_calcaneus_posterior_pt"
HAnimSite160.translation = [0.0974,0.0259,-0.1171]
TouchSensor161 = x3d.TouchSensor()
TouchSensor161.description = "HAnimSite l_calcaneus_posterior_pt"

HAnimSite160.children.append(TouchSensor161)
Shape162 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite160.children.append(Shape162)

HAnimSegment152.children.append(HAnimSite160)
HAnimSite163 = x3d.HAnimSite(DEF="hanim_l_sphyrion_pt")
HAnimSite163.name = "l_sphyrion_pt"
HAnimSite163.translation = [0.089,0.0575,-0.0943]
TouchSensor164 = x3d.TouchSensor()
TouchSensor164.description = "HAnimSite l_sphyrion_pt"

HAnimSite163.children.append(TouchSensor164)
Shape165 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite163.children.append(Shape165)

HAnimSegment152.children.append(HAnimSite163)

HAnimJoint151.children.append(HAnimSegment152)
HAnimJoint166 = x3d.HAnimJoint(DEF="hanim_l_talocrural")
HAnimJoint166.name = "l_talocrural"
HAnimJoint166.center = [0.1101,0.0656,-0.0736]
HAnimSegment167 = x3d.HAnimSegment(DEF="hanim_l_talus")
HAnimSegment167.name = "l_talus"
Transform168 = x3d.Transform()
Transform168.translation = [0.08,0.06,-0.025]
Transform168.rotation = [1,0,0,-1.57]
Transform168.scale = [0.15,0.15,0.15]
Transform169 = x3d.Transform()
Shape170 = x3d.Shape(USE="HAnimJointShape")

Transform169.children.append(Shape170)

Transform168.children.append(Transform169)

HAnimSegment167.children.append(Transform168)
Shape171 = x3d.Shape()
LineSet172 = x3d.LineSet()
LineSet172.vertexCount = [2]
ColorRGBA173 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet172.color = ColorRGBA173
Coordinate174 = x3d.Coordinate()
Coordinate174.point = [(0.1101, 0.0656, -0.0736),(0, 1, 0)]

LineSet172.coord = Coordinate174

Shape171.geometry = LineSet172

HAnimSegment167.children.append(Shape171)
Shape175 = x3d.Shape()
LineSet176 = x3d.LineSet()
LineSet176.vertexCount = [2]
ColorRGBA177 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet176.color = ColorRGBA177
Coordinate178 = x3d.Coordinate()
Coordinate178.point = [(0.1101, 0.0656, -0.0736),(0, 1, 0)]

LineSet176.coord = Coordinate178

Shape175.geometry = LineSet176

HAnimSegment167.children.append(Shape175)

HAnimJoint166.children.append(HAnimSegment167)
HAnimJoint179 = x3d.HAnimJoint(DEF="hanim_l_talocalcaneonavicular")
HAnimJoint179.name = "l_talocalcaneonavicular"
HAnimJoint179.center = [0,1,0]
HAnimSegment180 = x3d.HAnimSegment(DEF="hanim_l_navicular")
HAnimSegment180.name = "l_navicular"
Transform181 = x3d.Transform()
Transform182 = x3d.Transform()
Shape183 = x3d.Shape(USE="HAnimJointShape")

Transform182.children.append(Shape183)

Transform181.children.append(Transform182)

HAnimSegment180.children.append(Transform181)
Shape184 = x3d.Shape()
LineSet185 = x3d.LineSet()
LineSet185.vertexCount = [2]
ColorRGBA186 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet185.color = ColorRGBA186
Coordinate187 = x3d.Coordinate()
Coordinate187.point = [(0, 1, 0),(0, 1, 0)]

LineSet185.coord = Coordinate187

Shape184.geometry = LineSet185

HAnimSegment180.children.append(Shape184)
Shape188 = x3d.Shape()
LineSet189 = x3d.LineSet()
LineSet189.vertexCount = [2]
ColorRGBA190 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet189.color = ColorRGBA190
Coordinate191 = x3d.Coordinate()
Coordinate191.point = [(0, 1, 0),(0, 1, 0)]

LineSet189.coord = Coordinate191

Shape188.geometry = LineSet189

HAnimSegment180.children.append(Shape188)
Shape192 = x3d.Shape()
LineSet193 = x3d.LineSet()
LineSet193.vertexCount = [2]
ColorRGBA194 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet193.color = ColorRGBA194
Coordinate195 = x3d.Coordinate()
Coordinate195.point = [(0, 1, 0),(0, 1, 0)]

LineSet193.coord = Coordinate195

Shape192.geometry = LineSet193

HAnimSegment180.children.append(Shape192)

HAnimJoint179.children.append(HAnimSegment180)
HAnimJoint196 = x3d.HAnimJoint(DEF="hanim_l_cuneonavicular_1")
HAnimJoint196.name = "l_cuneonavicular_1"
HAnimJoint196.center = [0,1,0]
HAnimSegment197 = x3d.HAnimSegment(DEF="hanim_l_cuneiform_1")
HAnimSegment197.name = "l_cuneiform_1"
Transform198 = x3d.Transform()
Transform199 = x3d.Transform()
Shape200 = x3d.Shape(USE="HAnimJointShape")

Transform199.children.append(Shape200)

Transform198.children.append(Transform199)

HAnimSegment197.children.append(Transform198)
Shape201 = x3d.Shape()
LineSet202 = x3d.LineSet()
LineSet202.vertexCount = [2]
ColorRGBA203 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet202.color = ColorRGBA203
Coordinate204 = x3d.Coordinate()
Coordinate204.point = [(0, 1, 0),(0, 1, 0)]

LineSet202.coord = Coordinate204

Shape201.geometry = LineSet202

HAnimSegment197.children.append(Shape201)

HAnimJoint196.children.append(HAnimSegment197)
HAnimJoint205 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_1")
HAnimJoint205.name = "l_tarsometatarsal_1"
HAnimJoint205.center = [0,1,0]
HAnimSegment206 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_1")
HAnimSegment206.name = "l_metatarsal_1"
Transform207 = x3d.Transform()
Transform208 = x3d.Transform()
Shape209 = x3d.Shape(USE="HAnimJointShape")

Transform208.children.append(Shape209)

Transform207.children.append(Transform208)

HAnimSegment206.children.append(Transform207)
Shape210 = x3d.Shape()
LineSet211 = x3d.LineSet()
LineSet211.vertexCount = [2]
ColorRGBA212 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet211.color = ColorRGBA212
Coordinate213 = x3d.Coordinate()
Coordinate213.point = [(0, 1, 0),(0, 1, 0)]

LineSet211.coord = Coordinate213

Shape210.geometry = LineSet211

HAnimSegment206.children.append(Shape210)
HAnimSite214 = x3d.HAnimSite(DEF="hanim_l_metatarsal_phalanx_1_pt")
HAnimSite214.name = "l_metatarsal_phalanx_1_pt"
HAnimSite214.translation = [0,1,0]
TouchSensor215 = x3d.TouchSensor()
TouchSensor215.description = "HAnimSite l_metatarsal_phalanx_1_pt"

HAnimSite214.children.append(TouchSensor215)
Shape216 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite214.children.append(Shape216)

HAnimSegment206.children.append(HAnimSite214)

HAnimJoint205.children.append(HAnimSegment206)
HAnimJoint217 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_1")
HAnimJoint217.name = "l_metatarsophalangeal_1"
HAnimJoint217.center = [0,1,0]
HAnimSegment218 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_1")
HAnimSegment218.name = "l_tarsal_proximal_phalanx_1"
Transform219 = x3d.Transform()
Transform220 = x3d.Transform()
Shape221 = x3d.Shape(USE="HAnimJointShape")

Transform220.children.append(Shape221)

Transform219.children.append(Transform220)

HAnimSegment218.children.append(Transform219)
Shape222 = x3d.Shape()
LineSet223 = x3d.LineSet()
LineSet223.vertexCount = [2]
ColorRGBA224 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet223.color = ColorRGBA224
Coordinate225 = x3d.Coordinate()
Coordinate225.point = [(0, 1, 0),(0, 1, 0)]

LineSet223.coord = Coordinate225

Shape222.geometry = LineSet223

HAnimSegment218.children.append(Shape222)
HAnimSite226 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_1_tip")
HAnimSite226.name = "l_tarsal_distal_phalanx_1_tip"
HAnimSite226.translation = [0,1,0]
TouchSensor227 = x3d.TouchSensor()
TouchSensor227.description = "HAnimSite l_tarsal_distal_phalanx_1_tip"

HAnimSite226.children.append(TouchSensor227)
Shape228 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite226.children.append(Shape228)

HAnimSegment218.children.append(HAnimSite226)

HAnimJoint217.children.append(HAnimSegment218)
HAnimJoint229 = x3d.HAnimJoint(DEF="hanim_l_tarsal_interphalangeal_1")
HAnimJoint229.name = "l_tarsal_interphalangeal_1"
HAnimJoint229.center = [0,1,0]

HAnimJoint217.children.append(HAnimJoint229)

HAnimJoint205.children.append(HAnimJoint217)

HAnimJoint196.children.append(HAnimJoint205)

HAnimJoint179.children.append(HAnimJoint196)
HAnimJoint230 = x3d.HAnimJoint(DEF="hanim_l_cuneonavicular_2")
HAnimJoint230.name = "l_cuneonavicular_2"
HAnimJoint230.center = [0,1,0]
HAnimSegment231 = x3d.HAnimSegment(DEF="hanim_l_cuneiform_2")
HAnimSegment231.name = "l_cuneiform_2"
Transform232 = x3d.Transform()
Transform233 = x3d.Transform()
Shape234 = x3d.Shape(USE="HAnimJointShape")

Transform233.children.append(Shape234)

Transform232.children.append(Transform233)

HAnimSegment231.children.append(Transform232)
Shape235 = x3d.Shape()
LineSet236 = x3d.LineSet()
LineSet236.vertexCount = [2]
ColorRGBA237 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet236.color = ColorRGBA237
Coordinate238 = x3d.Coordinate()
Coordinate238.point = [(0, 1, 0),(0, 1, 0)]

LineSet236.coord = Coordinate238

Shape235.geometry = LineSet236

HAnimSegment231.children.append(Shape235)

HAnimJoint230.children.append(HAnimSegment231)
HAnimJoint239 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_2")
HAnimJoint239.name = "l_tarsometatarsal_2"
HAnimJoint239.center = [0,1,0]
HAnimSegment240 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_2")
HAnimSegment240.name = "l_metatarsal_2"
Transform241 = x3d.Transform()
Transform242 = x3d.Transform()
Shape243 = x3d.Shape(USE="HAnimJointShape")

Transform242.children.append(Shape243)

Transform241.children.append(Transform242)

HAnimSegment240.children.append(Transform241)
Shape244 = x3d.Shape()
LineSet245 = x3d.LineSet()
LineSet245.vertexCount = [2]
ColorRGBA246 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet245.color = ColorRGBA246
Coordinate247 = x3d.Coordinate()
Coordinate247.point = [(0, 1, 0),(0, 1, 0)]

LineSet245.coord = Coordinate247

Shape244.geometry = LineSet245

HAnimSegment240.children.append(Shape244)

HAnimJoint239.children.append(HAnimSegment240)
HAnimJoint248 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_2")
HAnimJoint248.name = "l_metatarsophalangeal_2"
HAnimJoint248.center = [0,1,0]
HAnimSegment249 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_2")
HAnimSegment249.name = "l_tarsal_proximal_phalanx_2"
Transform250 = x3d.Transform()
Transform251 = x3d.Transform()
Shape252 = x3d.Shape(USE="HAnimJointShape")

Transform251.children.append(Shape252)

Transform250.children.append(Transform251)

HAnimSegment249.children.append(Transform250)
Shape253 = x3d.Shape()
LineSet254 = x3d.LineSet()
LineSet254.vertexCount = [2]
ColorRGBA255 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet254.color = ColorRGBA255
Coordinate256 = x3d.Coordinate()
Coordinate256.point = [(0, 1, 0),(0, 1, 0)]

LineSet254.coord = Coordinate256

Shape253.geometry = LineSet254

HAnimSegment249.children.append(Shape253)

HAnimJoint248.children.append(HAnimSegment249)
HAnimJoint257 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_2")
HAnimJoint257.name = "l_tarsal_proximal_interphalangeal_2"
HAnimJoint257.center = [0,1,0]
HAnimSegment258 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_2")
HAnimSegment258.name = "l_tarsal_middle_phalanx_2"
Transform259 = x3d.Transform()
Transform260 = x3d.Transform()
Shape261 = x3d.Shape(USE="HAnimJointShape")

Transform260.children.append(Shape261)

Transform259.children.append(Transform260)

HAnimSegment258.children.append(Transform259)
Shape262 = x3d.Shape()
LineSet263 = x3d.LineSet()
LineSet263.vertexCount = [2]
ColorRGBA264 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet263.color = ColorRGBA264
Coordinate265 = x3d.Coordinate()
Coordinate265.point = [(0, 1, 0),(0, 1, 0)]

LineSet263.coord = Coordinate265

Shape262.geometry = LineSet263

HAnimSegment258.children.append(Shape262)
HAnimSite266 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_2_tip")
HAnimSite266.name = "l_tarsal_distal_phalanx_2_tip"
HAnimSite266.translation = [0.1195,0.0079,0.1433]
TouchSensor267 = x3d.TouchSensor()
TouchSensor267.description = "HAnimSite l_tarsal_distal_phalanx_2_tip"

HAnimSite266.children.append(TouchSensor267)
Shape268 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite266.children.append(Shape268)

HAnimSegment258.children.append(HAnimSite266)

HAnimJoint257.children.append(HAnimSegment258)
HAnimJoint269 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint269.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint269.center = [0,1,0]

HAnimJoint257.children.append(HAnimJoint269)

HAnimJoint248.children.append(HAnimJoint257)

HAnimJoint239.children.append(HAnimJoint248)

HAnimJoint230.children.append(HAnimJoint239)

HAnimJoint179.children.append(HAnimJoint230)
HAnimJoint270 = x3d.HAnimJoint(DEF="hanim_l_cuneonavicular_3")
HAnimJoint270.name = "l_cuneonavicular_3"
HAnimJoint270.center = [0,1,0]
HAnimSegment271 = x3d.HAnimSegment(DEF="hanim_l_cuneiform_3")
HAnimSegment271.name = "l_cuneiform_3"
Transform272 = x3d.Transform()
Transform273 = x3d.Transform()
Shape274 = x3d.Shape(USE="HAnimJointShape")

Transform273.children.append(Shape274)

Transform272.children.append(Transform273)

HAnimSegment271.children.append(Transform272)
Shape275 = x3d.Shape()
LineSet276 = x3d.LineSet()
LineSet276.vertexCount = [2]
ColorRGBA277 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet276.color = ColorRGBA277
Coordinate278 = x3d.Coordinate()
Coordinate278.point = [(0, 1, 0),(0, 1, 0)]

LineSet276.coord = Coordinate278

Shape275.geometry = LineSet276

HAnimSegment271.children.append(Shape275)

HAnimJoint270.children.append(HAnimSegment271)
HAnimJoint279 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_3")
HAnimJoint279.name = "l_tarsometatarsal_3"
HAnimJoint279.center = [0,1,0]
HAnimSegment280 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_3")
HAnimSegment280.name = "l_metatarsal_3"
Transform281 = x3d.Transform()
Transform282 = x3d.Transform()
Shape283 = x3d.Shape(USE="HAnimJointShape")

Transform282.children.append(Shape283)

Transform281.children.append(Transform282)

HAnimSegment280.children.append(Transform281)
Shape284 = x3d.Shape()
LineSet285 = x3d.LineSet()
LineSet285.vertexCount = [2]
ColorRGBA286 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet285.color = ColorRGBA286
Coordinate287 = x3d.Coordinate()
Coordinate287.point = [(0, 1, 0),(0, 1, 0)]

LineSet285.coord = Coordinate287

Shape284.geometry = LineSet285

HAnimSegment280.children.append(Shape284)

HAnimJoint279.children.append(HAnimSegment280)
HAnimJoint288 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_3")
HAnimJoint288.name = "l_metatarsophalangeal_3"
HAnimJoint288.center = [0,1,0]
HAnimSegment289 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_3")
HAnimSegment289.name = "l_tarsal_proximal_phalanx_3"
Transform290 = x3d.Transform()
Transform291 = x3d.Transform()
Shape292 = x3d.Shape(USE="HAnimJointShape")

Transform291.children.append(Shape292)

Transform290.children.append(Transform291)

HAnimSegment289.children.append(Transform290)
Shape293 = x3d.Shape()
LineSet294 = x3d.LineSet()
LineSet294.vertexCount = [2]
ColorRGBA295 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet294.color = ColorRGBA295
Coordinate296 = x3d.Coordinate()
Coordinate296.point = [(0, 1, 0),(0, 1, 0)]

LineSet294.coord = Coordinate296

Shape293.geometry = LineSet294

HAnimSegment289.children.append(Shape293)

HAnimJoint288.children.append(HAnimSegment289)
HAnimJoint297 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_3")
HAnimJoint297.name = "l_tarsal_proximal_interphalangeal_3"
HAnimJoint297.center = [0,1,0]
HAnimSegment298 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_3")
HAnimSegment298.name = "l_tarsal_middle_phalanx_3"
Transform299 = x3d.Transform()
Transform300 = x3d.Transform()
Shape301 = x3d.Shape(USE="HAnimJointShape")

Transform300.children.append(Shape301)

Transform299.children.append(Transform300)

HAnimSegment298.children.append(Transform299)
Shape302 = x3d.Shape()
LineSet303 = x3d.LineSet()
LineSet303.vertexCount = [2]
ColorRGBA304 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet303.color = ColorRGBA304
Coordinate305 = x3d.Coordinate()
Coordinate305.point = [(0, 1, 0),(0, 1, 0)]

LineSet303.coord = Coordinate305

Shape302.geometry = LineSet303

HAnimSegment298.children.append(Shape302)
HAnimSite306 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_3_tip")
HAnimSite306.name = "l_tarsal_distal_phalanx_3_tip"
HAnimSite306.translation = [0,1,0]
TouchSensor307 = x3d.TouchSensor()
TouchSensor307.description = "HAnimSite l_tarsal_distal_phalanx_3_tip"

HAnimSite306.children.append(TouchSensor307)
Shape308 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite306.children.append(Shape308)

HAnimSegment298.children.append(HAnimSite306)

HAnimJoint297.children.append(HAnimSegment298)
HAnimJoint309 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_3")
HAnimJoint309.name = "l_tarsal_distal_interphalangeal_3"
HAnimJoint309.center = [0,1,0]

HAnimJoint297.children.append(HAnimJoint309)

HAnimJoint288.children.append(HAnimJoint297)

HAnimJoint279.children.append(HAnimJoint288)

HAnimJoint270.children.append(HAnimJoint279)

HAnimJoint179.children.append(HAnimJoint270)

HAnimJoint166.children.append(HAnimJoint179)
HAnimJoint310 = x3d.HAnimJoint(DEF="hanim_l_calcaneocuboid")
HAnimJoint310.name = "l_calcaneocuboid"
HAnimJoint310.center = [0,1,0]
HAnimSegment311 = x3d.HAnimSegment(DEF="hanim_l_calcaneus")
HAnimSegment311.name = "l_calcaneus"
Transform312 = x3d.Transform()
Transform313 = x3d.Transform()
Shape314 = x3d.Shape(USE="HAnimJointShape")

Transform313.children.append(Shape314)

Transform312.children.append(Transform313)

HAnimSegment311.children.append(Transform312)
Shape315 = x3d.Shape()
LineSet316 = x3d.LineSet()
LineSet316.vertexCount = [2]
ColorRGBA317 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet316.color = ColorRGBA317
Coordinate318 = x3d.Coordinate()
Coordinate318.point = [(0, 1, 0),(0, 1, 0)]

LineSet316.coord = Coordinate318

Shape315.geometry = LineSet316

HAnimSegment311.children.append(Shape315)

HAnimJoint310.children.append(HAnimSegment311)
HAnimJoint319 = x3d.HAnimJoint(DEF="hanim_l_transversetarsal")
HAnimJoint319.name = "l_transversetarsal"
HAnimJoint319.center = [0,1,0]
HAnimSegment320 = x3d.HAnimSegment(DEF="hanim_l_cuboid")
HAnimSegment320.name = "l_cuboid"
Transform321 = x3d.Transform()
Transform322 = x3d.Transform()
Shape323 = x3d.Shape(USE="HAnimJointShape")

Transform322.children.append(Shape323)

Transform321.children.append(Transform322)

HAnimSegment320.children.append(Transform321)
Shape324 = x3d.Shape()
LineSet325 = x3d.LineSet()
LineSet325.vertexCount = [2]
ColorRGBA326 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet325.color = ColorRGBA326
Coordinate327 = x3d.Coordinate()
Coordinate327.point = [(0, 1, 0),(0, 1, 0)]

LineSet325.coord = Coordinate327

Shape324.geometry = LineSet325

HAnimSegment320.children.append(Shape324)
Shape328 = x3d.Shape()
LineSet329 = x3d.LineSet()
LineSet329.vertexCount = [2]
ColorRGBA330 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet329.color = ColorRGBA330
Coordinate331 = x3d.Coordinate()
Coordinate331.point = [(0, 1, 0),(0, 1, 0)]

LineSet329.coord = Coordinate331

Shape328.geometry = LineSet329

HAnimSegment320.children.append(Shape328)

HAnimJoint319.children.append(HAnimSegment320)
HAnimJoint332 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_4")
HAnimJoint332.name = "l_tarsometatarsal_4"
HAnimJoint332.center = [0,1,0]
HAnimSegment333 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_4")
HAnimSegment333.name = "l_metatarsal_4"
Transform334 = x3d.Transform()
Transform335 = x3d.Transform()
Shape336 = x3d.Shape(USE="HAnimJointShape")

Transform335.children.append(Shape336)

Transform334.children.append(Transform335)

HAnimSegment333.children.append(Transform334)
Shape337 = x3d.Shape()
LineSet338 = x3d.LineSet()
LineSet338.vertexCount = [2]
ColorRGBA339 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet338.color = ColorRGBA339
Coordinate340 = x3d.Coordinate()
Coordinate340.point = [(0, 1, 0),(0, 1, 0)]

LineSet338.coord = Coordinate340

Shape337.geometry = LineSet338

HAnimSegment333.children.append(Shape337)

HAnimJoint332.children.append(HAnimSegment333)
HAnimJoint341 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_4")
HAnimJoint341.name = "l_metatarsophalangeal_4"
HAnimJoint341.center = [0,1,0]
HAnimSegment342 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_4")
HAnimSegment342.name = "l_tarsal_proximal_phalanx_4"
Transform343 = x3d.Transform()
Transform344 = x3d.Transform()
Shape345 = x3d.Shape(USE="HAnimJointShape")

Transform344.children.append(Shape345)

Transform343.children.append(Transform344)

HAnimSegment342.children.append(Transform343)
Shape346 = x3d.Shape()
LineSet347 = x3d.LineSet()
LineSet347.vertexCount = [2]
ColorRGBA348 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet347.color = ColorRGBA348
Coordinate349 = x3d.Coordinate()
Coordinate349.point = [(0, 1, 0),(0, 1, 0)]

LineSet347.coord = Coordinate349

Shape346.geometry = LineSet347

HAnimSegment342.children.append(Shape346)

HAnimJoint341.children.append(HAnimSegment342)
HAnimJoint350 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_4")
HAnimJoint350.name = "l_tarsal_proximal_interphalangeal_4"
HAnimJoint350.center = [0,1,0]
HAnimSegment351 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_4")
HAnimSegment351.name = "l_tarsal_middle_phalanx_4"
Transform352 = x3d.Transform()
Transform353 = x3d.Transform()
Shape354 = x3d.Shape(USE="HAnimJointShape")

Transform353.children.append(Shape354)

Transform352.children.append(Transform353)

HAnimSegment351.children.append(Transform352)
Shape355 = x3d.Shape()
LineSet356 = x3d.LineSet()
LineSet356.vertexCount = [2]
ColorRGBA357 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet356.color = ColorRGBA357
Coordinate358 = x3d.Coordinate()
Coordinate358.point = [(0, 1, 0),(0, 1, 0)]

LineSet356.coord = Coordinate358

Shape355.geometry = LineSet356

HAnimSegment351.children.append(Shape355)
HAnimSite359 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_4_tip")
HAnimSite359.name = "l_tarsal_distal_phalanx_4_tip"
HAnimSite359.translation = [0,1,0]
TouchSensor360 = x3d.TouchSensor()
TouchSensor360.description = "HAnimSite l_tarsal_distal_phalanx_4_tip"

HAnimSite359.children.append(TouchSensor360)
Shape361 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite359.children.append(Shape361)

HAnimSegment351.children.append(HAnimSite359)

HAnimJoint350.children.append(HAnimSegment351)
HAnimJoint362 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_4")
HAnimJoint362.name = "l_tarsal_distal_interphalangeal_4"
HAnimJoint362.center = [0,1,0]

HAnimJoint350.children.append(HAnimJoint362)

HAnimJoint341.children.append(HAnimJoint350)

HAnimJoint332.children.append(HAnimJoint341)

HAnimJoint319.children.append(HAnimJoint332)
HAnimJoint363 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_5")
HAnimJoint363.name = "l_tarsometatarsal_5"
HAnimJoint363.center = [0,1,0]
HAnimSegment364 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_5")
HAnimSegment364.name = "l_metatarsal_5"
Transform365 = x3d.Transform()
Transform366 = x3d.Transform()
Shape367 = x3d.Shape(USE="HAnimJointShape")

Transform366.children.append(Shape367)

Transform365.children.append(Transform366)

HAnimSegment364.children.append(Transform365)
Shape368 = x3d.Shape()
LineSet369 = x3d.LineSet()
LineSet369.vertexCount = [2]
ColorRGBA370 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet369.color = ColorRGBA370
Coordinate371 = x3d.Coordinate()
Coordinate371.point = [(0, 1, 0),(0, 1, 0)]

LineSet369.coord = Coordinate371

Shape368.geometry = LineSet369

HAnimSegment364.children.append(Shape368)
HAnimSite372 = x3d.HAnimSite(DEF="hanim_l_metatarsal_phalanx_5_pt")
HAnimSite372.name = "l_metatarsal_phalanx_5_pt"
HAnimSite372.translation = [0,1,0]
TouchSensor373 = x3d.TouchSensor()
TouchSensor373.description = "HAnimSite l_metatarsal_phalanx_5_pt"

HAnimSite372.children.append(TouchSensor373)
Shape374 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite372.children.append(Shape374)

HAnimSegment364.children.append(HAnimSite372)

HAnimJoint363.children.append(HAnimSegment364)
HAnimJoint375 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_5")
HAnimJoint375.name = "l_metatarsophalangeal_5"
HAnimJoint375.center = [0,1,0]
HAnimSegment376 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_5")
HAnimSegment376.name = "l_tarsal_proximal_phalanx_5"
Transform377 = x3d.Transform()
Transform378 = x3d.Transform()
Shape379 = x3d.Shape(USE="HAnimJointShape")

Transform378.children.append(Shape379)

Transform377.children.append(Transform378)

HAnimSegment376.children.append(Transform377)
Shape380 = x3d.Shape()
LineSet381 = x3d.LineSet()
LineSet381.vertexCount = [2]
ColorRGBA382 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet381.color = ColorRGBA382
Coordinate383 = x3d.Coordinate()
Coordinate383.point = [(0, 1, 0),(0, 1, 0)]

LineSet381.coord = Coordinate383

Shape380.geometry = LineSet381

HAnimSegment376.children.append(Shape380)

HAnimJoint375.children.append(HAnimSegment376)
HAnimJoint384 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_5")
HAnimJoint384.name = "l_tarsal_proximal_interphalangeal_5"
HAnimJoint384.center = [0,1,0]
HAnimSegment385 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_5")
HAnimSegment385.name = "l_tarsal_middle_phalanx_5"
Transform386 = x3d.Transform()
Transform387 = x3d.Transform()
Shape388 = x3d.Shape(USE="HAnimJointShape")

Transform387.children.append(Shape388)

Transform386.children.append(Transform387)

HAnimSegment385.children.append(Transform386)
Shape389 = x3d.Shape()
LineSet390 = x3d.LineSet()
LineSet390.vertexCount = [2]
ColorRGBA391 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet390.color = ColorRGBA391
Coordinate392 = x3d.Coordinate()
Coordinate392.point = [(0, 1, 0),(0, 1, 0)]

LineSet390.coord = Coordinate392

Shape389.geometry = LineSet390

HAnimSegment385.children.append(Shape389)
HAnimSite393 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_5_tip")
HAnimSite393.name = "l_tarsal_distal_phalanx_5_tip"
HAnimSite393.translation = [0,1,0]
TouchSensor394 = x3d.TouchSensor()
TouchSensor394.description = "HAnimSite l_tarsal_distal_phalanx_5_tip"

HAnimSite393.children.append(TouchSensor394)
Shape395 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite393.children.append(Shape395)

HAnimSegment385.children.append(HAnimSite393)

HAnimJoint384.children.append(HAnimSegment385)
HAnimJoint396 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_5")
HAnimJoint396.name = "l_tarsal_distal_interphalangeal_5"
HAnimJoint396.center = [0,1,0]

HAnimJoint384.children.append(HAnimJoint396)

HAnimJoint375.children.append(HAnimJoint384)

HAnimJoint363.children.append(HAnimJoint375)

HAnimJoint319.children.append(HAnimJoint363)

HAnimJoint310.children.append(HAnimJoint319)

HAnimJoint166.children.append(HAnimJoint310)

HAnimJoint151.children.append(HAnimJoint166)

HAnimJoint133.children.append(HAnimJoint151)

HAnimJoint96.children.append(HAnimJoint133)
HAnimJoint397 = x3d.HAnimJoint(DEF="hanim_r_hip")
HAnimJoint397.name = "r_hip"
HAnimJoint397.center = [-0.095,0.9171,0.0029]
HAnimSegment398 = x3d.HAnimSegment(DEF="hanim_r_thigh")
HAnimSegment398.name = "r_thigh"
Transform399 = x3d.Transform()
Transform400 = x3d.Transform()
Shape401 = x3d.Shape(USE="HAnimJointShape")

Transform400.children.append(Shape401)

Transform399.children.append(Transform400)

HAnimSegment398.children.append(Transform399)
Shape402 = x3d.Shape()
LineSet403 = x3d.LineSet()
LineSet403.vertexCount = [2]
ColorRGBA404 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet403.color = ColorRGBA404
Coordinate405 = x3d.Coordinate()
Coordinate405.point = [(-0.095, 0.9171, 0.0029),(-0.0867, 0.4913, 0.0318)]

LineSet403.coord = Coordinate405

Shape402.geometry = LineSet403

HAnimSegment398.children.append(Shape402)
HAnimSite406 = x3d.HAnimSite(DEF="hanim_r_lateral_malleolus_pt")
HAnimSite406.name = "r_lateral_malleolus_pt"
HAnimSite406.translation = [-0.1006,0.0658,-0.1075]
TouchSensor407 = x3d.TouchSensor()
TouchSensor407.description = "HAnimSite r_lateral_malleolus_pt"

HAnimSite406.children.append(TouchSensor407)
Shape408 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite406.children.append(Shape408)

HAnimSegment398.children.append(HAnimSite406)
HAnimSite409 = x3d.HAnimSite(DEF="hanim_r_medial_malleolus_pt")
HAnimSite409.name = "r_medial_malleolus_pt"
HAnimSite409.translation = [-0.0591,0.076,-0.0928]
TouchSensor410 = x3d.TouchSensor()
TouchSensor410.description = "HAnimSite r_medial_malleolus_pt"

HAnimSite409.children.append(TouchSensor410)
Shape411 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite409.children.append(Shape411)

HAnimSegment398.children.append(HAnimSite409)
HAnimSite412 = x3d.HAnimSite(DEF="hanim_r_tibiale_pt")
HAnimSite412.name = "r_tibiale_pt"
HAnimSite412.translation = [0,1,0]
TouchSensor413 = x3d.TouchSensor()
TouchSensor413.description = "HAnimSite r_tibiale_pt"

HAnimSite412.children.append(TouchSensor413)
Shape414 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite412.children.append(Shape414)

HAnimSegment398.children.append(HAnimSite412)

HAnimJoint397.children.append(HAnimSegment398)
HAnimJoint415 = x3d.HAnimJoint(DEF="hanim_r_knee")
HAnimJoint415.name = "r_knee"
HAnimJoint415.center = [-0.0867,0.4913,0.0318]
HAnimSegment416 = x3d.HAnimSegment(DEF="hanim_r_calf")
HAnimSegment416.name = "r_calf"
Transform417 = x3d.Transform()
Transform418 = x3d.Transform()
Shape419 = x3d.Shape(USE="HAnimJointShape")

Transform418.children.append(Shape419)

Transform417.children.append(Transform418)

HAnimSegment416.children.append(Transform417)
Shape420 = x3d.Shape()
LineSet421 = x3d.LineSet()
LineSet421.vertexCount = [2]
ColorRGBA422 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet421.color = ColorRGBA422
Coordinate423 = x3d.Coordinate()
Coordinate423.point = [(-0.0867, 0.4913, 0.0318),(-0.0801, 0.0712, -0.0766)]

LineSet421.coord = Coordinate423

Shape420.geometry = LineSet421

HAnimSegment416.children.append(Shape420)
HAnimSite424 = x3d.HAnimSite(DEF="hanim_r_calcaneus_posterior_pt")
HAnimSite424.name = "r_calcaneus_posterior_pt"
HAnimSite424.translation = [-0.0692,0.0297,-0.1221]
TouchSensor425 = x3d.TouchSensor()
TouchSensor425.description = "HAnimSite r_calcaneus_posterior_pt"

HAnimSite424.children.append(TouchSensor425)
Shape426 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite424.children.append(Shape426)

HAnimSegment416.children.append(HAnimSite424)
HAnimSite427 = x3d.HAnimSite(DEF="hanim_r_sphyrion_pt")
HAnimSite427.name = "r_sphyrion_pt"
HAnimSite427.translation = [-0.0603,0.061,-0.1002]
TouchSensor428 = x3d.TouchSensor()
TouchSensor428.description = "HAnimSite r_sphyrion_pt"

HAnimSite427.children.append(TouchSensor428)
Shape429 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite427.children.append(Shape429)

HAnimSegment416.children.append(HAnimSite427)

HAnimJoint415.children.append(HAnimSegment416)
HAnimJoint430 = x3d.HAnimJoint(DEF="hanim_r_talocrural")
HAnimJoint430.name = "r_talocrural"
HAnimJoint430.center = [-0.0801,0.0712,-0.0766]
HAnimSegment431 = x3d.HAnimSegment(DEF="hanim_r_talus")
HAnimSegment431.name = "r_talus"
Transform432 = x3d.Transform()
Transform432.translation = [-0.05,0.06,-0.025]
Transform432.rotation = [1,0,0,-1.57]
Transform432.scale = [0.15,0.15,0.15]
Transform433 = x3d.Transform()
Shape434 = x3d.Shape(USE="HAnimJointShape")

Transform433.children.append(Shape434)

Transform432.children.append(Transform433)

HAnimSegment431.children.append(Transform432)
Shape435 = x3d.Shape()
LineSet436 = x3d.LineSet()
LineSet436.vertexCount = [2]
ColorRGBA437 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet436.color = ColorRGBA437
Coordinate438 = x3d.Coordinate()
Coordinate438.point = [(-0.0801, 0.0712, -0.0766),(0, 1, 0)]

LineSet436.coord = Coordinate438

Shape435.geometry = LineSet436

HAnimSegment431.children.append(Shape435)
Shape439 = x3d.Shape()
LineSet440 = x3d.LineSet()
LineSet440.vertexCount = [2]
ColorRGBA441 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet440.color = ColorRGBA441
Coordinate442 = x3d.Coordinate()
Coordinate442.point = [(-0.0801, 0.0712, -0.0766),(0, 1, 0)]

LineSet440.coord = Coordinate442

Shape439.geometry = LineSet440

HAnimSegment431.children.append(Shape439)

HAnimJoint430.children.append(HAnimSegment431)
HAnimJoint443 = x3d.HAnimJoint(DEF="hanim_r_talocalcaneonavicular")
HAnimJoint443.name = "r_talocalcaneonavicular"
HAnimJoint443.center = [0,1,0]
HAnimSegment444 = x3d.HAnimSegment(DEF="hanim_r_navicular")
HAnimSegment444.name = "r_navicular"
Transform445 = x3d.Transform()
Transform446 = x3d.Transform()
Shape447 = x3d.Shape(USE="HAnimJointShape")

Transform446.children.append(Shape447)

Transform445.children.append(Transform446)

HAnimSegment444.children.append(Transform445)
Shape448 = x3d.Shape()
LineSet449 = x3d.LineSet()
LineSet449.vertexCount = [2]
ColorRGBA450 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet449.color = ColorRGBA450
Coordinate451 = x3d.Coordinate()
Coordinate451.point = [(0, 1, 0),(0, 1, 0)]

LineSet449.coord = Coordinate451

Shape448.geometry = LineSet449

HAnimSegment444.children.append(Shape448)
Shape452 = x3d.Shape()
LineSet453 = x3d.LineSet()
LineSet453.vertexCount = [2]
ColorRGBA454 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet453.color = ColorRGBA454
Coordinate455 = x3d.Coordinate()
Coordinate455.point = [(0, 1, 0),(0, 1, 0)]

LineSet453.coord = Coordinate455

Shape452.geometry = LineSet453

HAnimSegment444.children.append(Shape452)
Shape456 = x3d.Shape()
LineSet457 = x3d.LineSet()
LineSet457.vertexCount = [2]
ColorRGBA458 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet457.color = ColorRGBA458
Coordinate459 = x3d.Coordinate()
Coordinate459.point = [(0, 1, 0),(0, 1, 0)]

LineSet457.coord = Coordinate459

Shape456.geometry = LineSet457

HAnimSegment444.children.append(Shape456)

HAnimJoint443.children.append(HAnimSegment444)
HAnimJoint460 = x3d.HAnimJoint(DEF="hanim_r_cuneonavicular_1")
HAnimJoint460.name = "r_cuneonavicular_1"
HAnimJoint460.center = [0,1,0]
HAnimSegment461 = x3d.HAnimSegment(DEF="hanim_r_cuneiform_1")
HAnimSegment461.name = "r_cuneiform_1"
Transform462 = x3d.Transform()
Transform463 = x3d.Transform()
Shape464 = x3d.Shape(USE="HAnimJointShape")

Transform463.children.append(Shape464)

Transform462.children.append(Transform463)

HAnimSegment461.children.append(Transform462)
Shape465 = x3d.Shape()
LineSet466 = x3d.LineSet()
LineSet466.vertexCount = [2]
ColorRGBA467 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet466.color = ColorRGBA467
Coordinate468 = x3d.Coordinate()
Coordinate468.point = [(0, 1, 0),(0, 1, 0)]

LineSet466.coord = Coordinate468

Shape465.geometry = LineSet466

HAnimSegment461.children.append(Shape465)

HAnimJoint460.children.append(HAnimSegment461)
HAnimJoint469 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_1")
HAnimJoint469.name = "r_tarsometatarsal_1"
HAnimJoint469.center = [0,1,0]
HAnimSegment470 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_1")
HAnimSegment470.name = "r_metatarsal_1"
Transform471 = x3d.Transform()
Transform472 = x3d.Transform()
Shape473 = x3d.Shape(USE="HAnimJointShape")

Transform472.children.append(Shape473)

Transform471.children.append(Transform472)

HAnimSegment470.children.append(Transform471)
Shape474 = x3d.Shape()
LineSet475 = x3d.LineSet()
LineSet475.vertexCount = [2]
ColorRGBA476 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet475.color = ColorRGBA476
Coordinate477 = x3d.Coordinate()
Coordinate477.point = [(0, 1, 0),(0, 1, 0)]

LineSet475.coord = Coordinate477

Shape474.geometry = LineSet475

HAnimSegment470.children.append(Shape474)
HAnimSite478 = x3d.HAnimSite(DEF="hanim_r_metatarsal_phalanx_1_pt")
HAnimSite478.name = "r_metatarsal_phalanx_1_pt"
HAnimSite478.translation = [0,1,0]
TouchSensor479 = x3d.TouchSensor()
TouchSensor479.description = "HAnimSite r_metatarsal_phalanx_1_pt"

HAnimSite478.children.append(TouchSensor479)
Shape480 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite478.children.append(Shape480)

HAnimSegment470.children.append(HAnimSite478)

HAnimJoint469.children.append(HAnimSegment470)
HAnimJoint481 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_1")
HAnimJoint481.name = "r_metatarsophalangeal_1"
HAnimJoint481.center = [0,1,0]
HAnimSegment482 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_1")
HAnimSegment482.name = "r_tarsal_proximal_phalanx_1"
Transform483 = x3d.Transform()
Transform484 = x3d.Transform()
Shape485 = x3d.Shape(USE="HAnimJointShape")

Transform484.children.append(Shape485)

Transform483.children.append(Transform484)

HAnimSegment482.children.append(Transform483)
Shape486 = x3d.Shape()
LineSet487 = x3d.LineSet()
LineSet487.vertexCount = [2]
ColorRGBA488 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet487.color = ColorRGBA488
Coordinate489 = x3d.Coordinate()
Coordinate489.point = [(0, 1, 0),(0, 1, 0)]

LineSet487.coord = Coordinate489

Shape486.geometry = LineSet487

HAnimSegment482.children.append(Shape486)
HAnimSite490 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_1_tip")
HAnimSite490.name = "r_tarsal_distal_phalanx_1_tip"
HAnimSite490.translation = [0.1,-1.05,0]
TouchSensor491 = x3d.TouchSensor()
TouchSensor491.description = "HAnimSite r_tarsal_distal_phalanx_1_tip"

HAnimSite490.children.append(TouchSensor491)
Shape492 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite490.children.append(Shape492)

HAnimSegment482.children.append(HAnimSite490)

HAnimJoint481.children.append(HAnimSegment482)
HAnimJoint493 = x3d.HAnimJoint(DEF="hanim_r_tarsal_interphalangeal_1")
HAnimJoint493.name = "r_tarsal_interphalangeal_1"
HAnimJoint493.center = [0,1,0]

HAnimJoint481.children.append(HAnimJoint493)

HAnimJoint469.children.append(HAnimJoint481)

HAnimJoint460.children.append(HAnimJoint469)

HAnimJoint443.children.append(HAnimJoint460)
HAnimJoint494 = x3d.HAnimJoint(DEF="hanim_r_cuneonavicular_2")
HAnimJoint494.name = "r_cuneonavicular_2"
HAnimJoint494.center = [0,1,0]
HAnimSegment495 = x3d.HAnimSegment(DEF="hanim_r_cuneiform_2")
HAnimSegment495.name = "r_cuneiform_2"
Transform496 = x3d.Transform()
Transform497 = x3d.Transform()
Shape498 = x3d.Shape(USE="HAnimJointShape")

Transform497.children.append(Shape498)

Transform496.children.append(Transform497)

HAnimSegment495.children.append(Transform496)
Shape499 = x3d.Shape()
LineSet500 = x3d.LineSet()
LineSet500.vertexCount = [2]
ColorRGBA501 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet500.color = ColorRGBA501
Coordinate502 = x3d.Coordinate()
Coordinate502.point = [(0, 1, 0),(0, 1, 0)]

LineSet500.coord = Coordinate502

Shape499.geometry = LineSet500

HAnimSegment495.children.append(Shape499)

HAnimJoint494.children.append(HAnimSegment495)
HAnimJoint503 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_2")
HAnimJoint503.name = "r_tarsometatarsal_2"
HAnimJoint503.center = [0,1,0]
HAnimSegment504 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_2")
HAnimSegment504.name = "r_metatarsal_2"
Transform505 = x3d.Transform()
Transform506 = x3d.Transform()
Shape507 = x3d.Shape(USE="HAnimJointShape")

Transform506.children.append(Shape507)

Transform505.children.append(Transform506)

HAnimSegment504.children.append(Transform505)
Shape508 = x3d.Shape()
LineSet509 = x3d.LineSet()
LineSet509.vertexCount = [2]
ColorRGBA510 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet509.color = ColorRGBA510
Coordinate511 = x3d.Coordinate()
Coordinate511.point = [(0, 1, 0),(0, 1, 0)]

LineSet509.coord = Coordinate511

Shape508.geometry = LineSet509

HAnimSegment504.children.append(Shape508)

HAnimJoint503.children.append(HAnimSegment504)
HAnimJoint512 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_2")
HAnimJoint512.name = "r_metatarsophalangeal_2"
HAnimJoint512.center = [0,1,0]
HAnimSegment513 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_2")
HAnimSegment513.name = "r_tarsal_proximal_phalanx_2"
Transform514 = x3d.Transform()
Transform515 = x3d.Transform()
Shape516 = x3d.Shape(USE="HAnimJointShape")

Transform515.children.append(Shape516)

Transform514.children.append(Transform515)

HAnimSegment513.children.append(Transform514)
Shape517 = x3d.Shape()
LineSet518 = x3d.LineSet()
LineSet518.vertexCount = [2]
ColorRGBA519 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet518.color = ColorRGBA519
Coordinate520 = x3d.Coordinate()
Coordinate520.point = [(0, 1, 0),(0, 1, 0)]

LineSet518.coord = Coordinate520

Shape517.geometry = LineSet518

HAnimSegment513.children.append(Shape517)

HAnimJoint512.children.append(HAnimSegment513)
HAnimJoint521 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_2")
HAnimJoint521.name = "r_tarsal_proximal_interphalangeal_2"
HAnimJoint521.center = [0,1,0]
HAnimSegment522 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_2")
HAnimSegment522.name = "r_tarsal_middle_phalanx_2"
Transform523 = x3d.Transform()
Transform524 = x3d.Transform()
Shape525 = x3d.Shape(USE="HAnimJointShape")

Transform524.children.append(Shape525)

Transform523.children.append(Transform524)

HAnimSegment522.children.append(Transform523)
Shape526 = x3d.Shape()
LineSet527 = x3d.LineSet()
LineSet527.vertexCount = [2]
ColorRGBA528 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet527.color = ColorRGBA528
Coordinate529 = x3d.Coordinate()
Coordinate529.point = [(0, 1, 0),(0, 1, 0)]

LineSet527.coord = Coordinate529

Shape526.geometry = LineSet527

HAnimSegment522.children.append(Shape526)
HAnimSite530 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_2_tip")
HAnimSite530.name = "r_tarsal_distal_phalanx_2_tip"
HAnimSite530.translation = [-0.05,-1.12,0]
TouchSensor531 = x3d.TouchSensor()
TouchSensor531.description = "HAnimSite r_tarsal_distal_phalanx_2_tip"

HAnimSite530.children.append(TouchSensor531)
Shape532 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite530.children.append(Shape532)

HAnimSegment522.children.append(HAnimSite530)

HAnimJoint521.children.append(HAnimSegment522)
HAnimJoint533 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint533.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint533.center = [0,1,0]

HAnimJoint521.children.append(HAnimJoint533)

HAnimJoint512.children.append(HAnimJoint521)

HAnimJoint503.children.append(HAnimJoint512)

HAnimJoint494.children.append(HAnimJoint503)

HAnimJoint443.children.append(HAnimJoint494)
HAnimJoint534 = x3d.HAnimJoint(DEF="hanim_r_cuneonavicular_3")
HAnimJoint534.name = "r_cuneonavicular_3"
HAnimJoint534.center = [0,1,0]
HAnimSegment535 = x3d.HAnimSegment(DEF="hanim_r_cuneiform_3")
HAnimSegment535.name = "r_cuneiform_3"
Transform536 = x3d.Transform()
Transform537 = x3d.Transform()
Shape538 = x3d.Shape(USE="HAnimJointShape")

Transform537.children.append(Shape538)

Transform536.children.append(Transform537)

HAnimSegment535.children.append(Transform536)
Shape539 = x3d.Shape()
LineSet540 = x3d.LineSet()
LineSet540.vertexCount = [2]
ColorRGBA541 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet540.color = ColorRGBA541
Coordinate542 = x3d.Coordinate()
Coordinate542.point = [(0, 1, 0),(0, 1, 0)]

LineSet540.coord = Coordinate542

Shape539.geometry = LineSet540

HAnimSegment535.children.append(Shape539)

HAnimJoint534.children.append(HAnimSegment535)
HAnimJoint543 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_3")
HAnimJoint543.name = "r_tarsometatarsal_3"
HAnimJoint543.center = [0,1,0]
HAnimSegment544 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_3")
HAnimSegment544.name = "r_metatarsal_3"
Transform545 = x3d.Transform()
Transform546 = x3d.Transform()
Shape547 = x3d.Shape(USE="HAnimJointShape")

Transform546.children.append(Shape547)

Transform545.children.append(Transform546)

HAnimSegment544.children.append(Transform545)
Shape548 = x3d.Shape()
LineSet549 = x3d.LineSet()
LineSet549.vertexCount = [2]
ColorRGBA550 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet549.color = ColorRGBA550
Coordinate551 = x3d.Coordinate()
Coordinate551.point = [(0, 1, 0),(0, 1, 0)]

LineSet549.coord = Coordinate551

Shape548.geometry = LineSet549

HAnimSegment544.children.append(Shape548)

HAnimJoint543.children.append(HAnimSegment544)
HAnimJoint552 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_3")
HAnimJoint552.name = "r_metatarsophalangeal_3"
HAnimJoint552.center = [0,1,0]
HAnimSegment553 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_3")
HAnimSegment553.name = "r_tarsal_proximal_phalanx_3"
Transform554 = x3d.Transform()
Transform555 = x3d.Transform()
Shape556 = x3d.Shape(USE="HAnimJointShape")

Transform555.children.append(Shape556)

Transform554.children.append(Transform555)

HAnimSegment553.children.append(Transform554)
Shape557 = x3d.Shape()
LineSet558 = x3d.LineSet()
LineSet558.vertexCount = [2]
ColorRGBA559 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet558.color = ColorRGBA559
Coordinate560 = x3d.Coordinate()
Coordinate560.point = [(0, 1, 0),(0, 1, 0)]

LineSet558.coord = Coordinate560

Shape557.geometry = LineSet558

HAnimSegment553.children.append(Shape557)

HAnimJoint552.children.append(HAnimSegment553)
HAnimJoint561 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_3")
HAnimJoint561.name = "r_tarsal_proximal_interphalangeal_3"
HAnimJoint561.center = [0,1,0]
HAnimSegment562 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_3")
HAnimSegment562.name = "r_tarsal_middle_phalanx_3"
Transform563 = x3d.Transform()
Transform564 = x3d.Transform()
Shape565 = x3d.Shape(USE="HAnimJointShape")

Transform564.children.append(Shape565)

Transform563.children.append(Transform564)

HAnimSegment562.children.append(Transform563)
Shape566 = x3d.Shape()
LineSet567 = x3d.LineSet()
LineSet567.vertexCount = [2]
ColorRGBA568 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet567.color = ColorRGBA568
Coordinate569 = x3d.Coordinate()
Coordinate569.point = [(0, 1, 0),(0, 1, 0)]

LineSet567.coord = Coordinate569

Shape566.geometry = LineSet567

HAnimSegment562.children.append(Shape566)
HAnimSite570 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_3_tip")
HAnimSite570.name = "r_tarsal_distal_phalanx_3_tip"
HAnimSite570.translation = [-0.15,-1.13,0]
TouchSensor571 = x3d.TouchSensor()
TouchSensor571.description = "HAnimSite r_tarsal_distal_phalanx_3_tip"

HAnimSite570.children.append(TouchSensor571)
Shape572 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite570.children.append(Shape572)

HAnimSegment562.children.append(HAnimSite570)

HAnimJoint561.children.append(HAnimSegment562)
HAnimJoint573 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_3")
HAnimJoint573.name = "r_tarsal_distal_interphalangeal_3"
HAnimJoint573.center = [0,1,0]

HAnimJoint561.children.append(HAnimJoint573)

HAnimJoint552.children.append(HAnimJoint561)

HAnimJoint543.children.append(HAnimJoint552)

HAnimJoint534.children.append(HAnimJoint543)

HAnimJoint443.children.append(HAnimJoint534)

HAnimJoint430.children.append(HAnimJoint443)
HAnimJoint574 = x3d.HAnimJoint(DEF="hanim_r_calcaneocuboid")
HAnimJoint574.name = "r_calcaneocuboid"
HAnimJoint574.center = [0,1,0]
HAnimSegment575 = x3d.HAnimSegment(DEF="hanim_r_calcaneus")
HAnimSegment575.name = "r_calcaneus"
Transform576 = x3d.Transform()
Transform577 = x3d.Transform()
Shape578 = x3d.Shape(USE="HAnimJointShape")

Transform577.children.append(Shape578)

Transform576.children.append(Transform577)

HAnimSegment575.children.append(Transform576)
Shape579 = x3d.Shape()
LineSet580 = x3d.LineSet()
LineSet580.vertexCount = [2]
ColorRGBA581 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet580.color = ColorRGBA581
Coordinate582 = x3d.Coordinate()
Coordinate582.point = [(0, 1, 0),(0, 1, 0)]

LineSet580.coord = Coordinate582

Shape579.geometry = LineSet580

HAnimSegment575.children.append(Shape579)

HAnimJoint574.children.append(HAnimSegment575)
HAnimJoint583 = x3d.HAnimJoint(DEF="hanim_r_transversetarsal")
HAnimJoint583.name = "r_transversetarsal"
HAnimJoint583.center = [0,1,0]
HAnimSegment584 = x3d.HAnimSegment(DEF="hanim_r_cuboid")
HAnimSegment584.name = "r_cuboid"
Transform585 = x3d.Transform()
Transform586 = x3d.Transform()
Shape587 = x3d.Shape(USE="HAnimJointShape")

Transform586.children.append(Shape587)

Transform585.children.append(Transform586)

HAnimSegment584.children.append(Transform585)
Shape588 = x3d.Shape()
LineSet589 = x3d.LineSet()
LineSet589.vertexCount = [2]
ColorRGBA590 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet589.color = ColorRGBA590
Coordinate591 = x3d.Coordinate()
Coordinate591.point = [(0, 1, 0),(0, 1, 0)]

LineSet589.coord = Coordinate591

Shape588.geometry = LineSet589

HAnimSegment584.children.append(Shape588)
Shape592 = x3d.Shape()
LineSet593 = x3d.LineSet()
LineSet593.vertexCount = [2]
ColorRGBA594 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet593.color = ColorRGBA594
Coordinate595 = x3d.Coordinate()
Coordinate595.point = [(0, 1, 0),(0, 1, 0)]

LineSet593.coord = Coordinate595

Shape592.geometry = LineSet593

HAnimSegment584.children.append(Shape592)

HAnimJoint583.children.append(HAnimSegment584)
HAnimJoint596 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_4")
HAnimJoint596.name = "r_tarsometatarsal_4"
HAnimJoint596.center = [0,1,0]
HAnimSegment597 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_4")
HAnimSegment597.name = "r_metatarsal_4"
Transform598 = x3d.Transform()
Transform599 = x3d.Transform()
Shape600 = x3d.Shape(USE="HAnimJointShape")

Transform599.children.append(Shape600)

Transform598.children.append(Transform599)

HAnimSegment597.children.append(Transform598)
Shape601 = x3d.Shape()
LineSet602 = x3d.LineSet()
LineSet602.vertexCount = [2]
ColorRGBA603 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet602.color = ColorRGBA603
Coordinate604 = x3d.Coordinate()
Coordinate604.point = [(0, 1, 0),(0, 1, 0)]

LineSet602.coord = Coordinate604

Shape601.geometry = LineSet602

HAnimSegment597.children.append(Shape601)

HAnimJoint596.children.append(HAnimSegment597)
HAnimJoint605 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_4")
HAnimJoint605.name = "r_metatarsophalangeal_4"
HAnimJoint605.center = [0,1,0]
HAnimSegment606 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_4")
HAnimSegment606.name = "r_tarsal_proximal_phalanx_4"
Transform607 = x3d.Transform()
Transform608 = x3d.Transform()
Shape609 = x3d.Shape(USE="HAnimJointShape")

Transform608.children.append(Shape609)

Transform607.children.append(Transform608)

HAnimSegment606.children.append(Transform607)
Shape610 = x3d.Shape()
LineSet611 = x3d.LineSet()
LineSet611.vertexCount = [2]
ColorRGBA612 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet611.color = ColorRGBA612
Coordinate613 = x3d.Coordinate()
Coordinate613.point = [(0, 1, 0),(0, 1, 0)]

LineSet611.coord = Coordinate613

Shape610.geometry = LineSet611

HAnimSegment606.children.append(Shape610)

HAnimJoint605.children.append(HAnimSegment606)
HAnimJoint614 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_4")
HAnimJoint614.name = "r_tarsal_proximal_interphalangeal_4"
HAnimJoint614.center = [0,1,0]
HAnimSegment615 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_4")
HAnimSegment615.name = "r_tarsal_middle_phalanx_4"
Transform616 = x3d.Transform()
Transform617 = x3d.Transform()
Shape618 = x3d.Shape(USE="HAnimJointShape")

Transform617.children.append(Shape618)

Transform616.children.append(Transform617)

HAnimSegment615.children.append(Transform616)
Shape619 = x3d.Shape()
LineSet620 = x3d.LineSet()
LineSet620.vertexCount = [2]
ColorRGBA621 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet620.color = ColorRGBA621
Coordinate622 = x3d.Coordinate()
Coordinate622.point = [(0, 1, 0),(0, 1, 0)]

LineSet620.coord = Coordinate622

Shape619.geometry = LineSet620

HAnimSegment615.children.append(Shape619)
HAnimSite623 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_4_tip")
HAnimSite623.name = "r_tarsal_distal_phalanx_4_tip"
HAnimSite623.translation = [-0.25,-1.1,0]
TouchSensor624 = x3d.TouchSensor()
TouchSensor624.description = "HAnimSite r_tarsal_distal_phalanx_4_tip"

HAnimSite623.children.append(TouchSensor624)
Shape625 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite623.children.append(Shape625)

HAnimSegment615.children.append(HAnimSite623)

HAnimJoint614.children.append(HAnimSegment615)
HAnimJoint626 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_4")
HAnimJoint626.name = "r_tarsal_distal_interphalangeal_4"
HAnimJoint626.center = [0,1,0]

HAnimJoint614.children.append(HAnimJoint626)

HAnimJoint605.children.append(HAnimJoint614)

HAnimJoint596.children.append(HAnimJoint605)

HAnimJoint583.children.append(HAnimJoint596)
HAnimJoint627 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_5")
HAnimJoint627.name = "r_tarsometatarsal_5"
HAnimJoint627.center = [0,1,0]
HAnimSegment628 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_5")
HAnimSegment628.name = "r_metatarsal_5"
Transform629 = x3d.Transform()
Transform630 = x3d.Transform()
Shape631 = x3d.Shape(USE="HAnimJointShape")

Transform630.children.append(Shape631)

Transform629.children.append(Transform630)

HAnimSegment628.children.append(Transform629)
Shape632 = x3d.Shape()
LineSet633 = x3d.LineSet()
LineSet633.vertexCount = [2]
ColorRGBA634 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet633.color = ColorRGBA634
Coordinate635 = x3d.Coordinate()
Coordinate635.point = [(0, 1, 0),(0, 1, 0)]

LineSet633.coord = Coordinate635

Shape632.geometry = LineSet633

HAnimSegment628.children.append(Shape632)
HAnimSite636 = x3d.HAnimSite(DEF="hanim_r_metatarsal_phalanx_5_pt")
HAnimSite636.name = "r_metatarsal_phalanx_5_pt"
HAnimSite636.translation = [0,1,0]
TouchSensor637 = x3d.TouchSensor()
TouchSensor637.description = "HAnimSite r_metatarsal_phalanx_5_pt"

HAnimSite636.children.append(TouchSensor637)
Shape638 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite636.children.append(Shape638)

HAnimSegment628.children.append(HAnimSite636)

HAnimJoint627.children.append(HAnimSegment628)
HAnimJoint639 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_5")
HAnimJoint639.name = "r_metatarsophalangeal_5"
HAnimJoint639.center = [0,1,0]
HAnimSegment640 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_5")
HAnimSegment640.name = "r_tarsal_proximal_phalanx_5"
Transform641 = x3d.Transform()
Transform642 = x3d.Transform()
Shape643 = x3d.Shape(USE="HAnimJointShape")

Transform642.children.append(Shape643)

Transform641.children.append(Transform642)

HAnimSegment640.children.append(Transform641)
Shape644 = x3d.Shape()
LineSet645 = x3d.LineSet()
LineSet645.vertexCount = [2]
ColorRGBA646 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet645.color = ColorRGBA646
Coordinate647 = x3d.Coordinate()
Coordinate647.point = [(0, 1, 0),(0, 1, 0)]

LineSet645.coord = Coordinate647

Shape644.geometry = LineSet645

HAnimSegment640.children.append(Shape644)

HAnimJoint639.children.append(HAnimSegment640)
HAnimJoint648 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_5")
HAnimJoint648.name = "r_tarsal_proximal_interphalangeal_5"
HAnimJoint648.center = [0,1,0]
HAnimSegment649 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_5")
HAnimSegment649.name = "r_tarsal_middle_phalanx_5"
Transform650 = x3d.Transform()
Transform651 = x3d.Transform()
Shape652 = x3d.Shape(USE="HAnimJointShape")

Transform651.children.append(Shape652)

Transform650.children.append(Transform651)

HAnimSegment649.children.append(Transform650)
Shape653 = x3d.Shape()
LineSet654 = x3d.LineSet()
LineSet654.vertexCount = [2]
ColorRGBA655 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet654.color = ColorRGBA655
Coordinate656 = x3d.Coordinate()
Coordinate656.point = [(0, 1, 0),(0, 1, 0)]

LineSet654.coord = Coordinate656

Shape653.geometry = LineSet654

HAnimSegment649.children.append(Shape653)
HAnimSite657 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_5_tip")
HAnimSite657.name = "r_tarsal_distal_phalanx_5_tip"
HAnimSite657.translation = [-0.34,-1.05,0]
TouchSensor658 = x3d.TouchSensor()
TouchSensor658.description = "HAnimSite r_tarsal_distal_phalanx_5_tip"

HAnimSite657.children.append(TouchSensor658)
Shape659 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite657.children.append(Shape659)

HAnimSegment649.children.append(HAnimSite657)

HAnimJoint648.children.append(HAnimSegment649)
HAnimJoint660 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_5")
HAnimJoint660.name = "r_tarsal_distal_interphalangeal_5"
HAnimJoint660.center = [0,1,0]

HAnimJoint648.children.append(HAnimJoint660)

HAnimJoint639.children.append(HAnimJoint648)

HAnimJoint627.children.append(HAnimJoint639)

HAnimJoint583.children.append(HAnimJoint627)

HAnimJoint574.children.append(HAnimJoint583)

HAnimJoint430.children.append(HAnimJoint574)

HAnimJoint415.children.append(HAnimJoint430)

HAnimJoint397.children.append(HAnimJoint415)

HAnimJoint96.children.append(HAnimJoint397)

HAnimJoint42.children.append(HAnimJoint96)
HAnimJoint661 = x3d.HAnimJoint(DEF="hanim_vl5")
HAnimJoint661.name = "vl5"
HAnimJoint661.center = [0.0028,1.0568,-0.0776]
HAnimSegment662 = x3d.HAnimSegment(DEF="hanim_l5")
HAnimSegment662.name = "l5"
Transform663 = x3d.Transform()
Transform664 = x3d.Transform()
Shape665 = x3d.Shape(USE="HAnimJointShape")

Transform664.children.append(Shape665)

Transform663.children.append(Transform664)

HAnimSegment662.children.append(Transform663)
Shape666 = x3d.Shape()
LineSet667 = x3d.LineSet()
LineSet667.vertexCount = [2]
ColorRGBA668 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet667.color = ColorRGBA668
Coordinate669 = x3d.Coordinate()
Coordinate669.point = [(0.0028, 1.0568, -0.0776),(0.0035, 1.0925, -0.0787)]

LineSet667.coord = Coordinate669

Shape666.geometry = LineSet667

HAnimSegment662.children.append(Shape666)

HAnimJoint661.children.append(HAnimSegment662)
HAnimJoint670 = x3d.HAnimJoint(DEF="hanim_vl4")
HAnimJoint670.name = "vl4"
HAnimJoint670.center = [0.0035,1.0925,-0.0787]
HAnimSegment671 = x3d.HAnimSegment(DEF="hanim_l4")
HAnimSegment671.name = "l4"
Transform672 = x3d.Transform()
Transform673 = x3d.Transform()
Shape674 = x3d.Shape(USE="HAnimJointShape")

Transform673.children.append(Shape674)

Transform672.children.append(Transform673)

HAnimSegment671.children.append(Transform672)
Shape675 = x3d.Shape()
LineSet676 = x3d.LineSet()
LineSet676.vertexCount = [2]
ColorRGBA677 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet676.color = ColorRGBA677
Coordinate678 = x3d.Coordinate()
Coordinate678.point = [(0.0035, 1.0925, -0.0787),(0.0041, 1.1276, -0.0796)]

LineSet676.coord = Coordinate678

Shape675.geometry = LineSet676

HAnimSegment671.children.append(Shape675)

HAnimJoint670.children.append(HAnimSegment671)
HAnimJoint679 = x3d.HAnimJoint(DEF="hanim_vl3")
HAnimJoint679.name = "vl3"
HAnimJoint679.center = [0.0041,1.1276,-0.0796]
HAnimSegment680 = x3d.HAnimSegment(DEF="hanim_l3")
HAnimSegment680.name = "l3"
Transform681 = x3d.Transform()
Transform682 = x3d.Transform()
Shape683 = x3d.Shape(USE="HAnimJointShape")

Transform682.children.append(Shape683)

Transform681.children.append(Transform682)

HAnimSegment680.children.append(Transform681)
Shape684 = x3d.Shape()
LineSet685 = x3d.LineSet()
LineSet685.vertexCount = [2]
ColorRGBA686 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet685.color = ColorRGBA686
Coordinate687 = x3d.Coordinate()
Coordinate687.point = [(0.0041, 1.1276, -0.0796),(0.0045, 1.1546, -0.08)]

LineSet685.coord = Coordinate687

Shape684.geometry = LineSet685

HAnimSegment680.children.append(Shape684)
HAnimSite688 = x3d.HAnimSite(DEF="hanim_l_rib10_pt")
HAnimSite688.name = "l_rib10_pt"
HAnimSite688.translation = [0.0871,1.1925,0.0992]
TouchSensor689 = x3d.TouchSensor()
TouchSensor689.description = "HAnimSite l_rib10_pt"

HAnimSite688.children.append(TouchSensor689)
Shape690 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite688.children.append(Shape690)

HAnimSegment680.children.append(HAnimSite688)
HAnimSite691 = x3d.HAnimSite(DEF="hanim_r_rib10_pt")
HAnimSite691.name = "r_rib10_pt"
HAnimSite691.translation = [-0.0711,1.1941,0.1016]
TouchSensor692 = x3d.TouchSensor()
TouchSensor692.description = "HAnimSite r_rib10_pt"

HAnimSite691.children.append(TouchSensor692)
Shape693 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite691.children.append(Shape693)

HAnimSegment680.children.append(HAnimSite691)
HAnimSite694 = x3d.HAnimSite(DEF="hanim_spine_2_middle_back_pt")
HAnimSite694.name = "spine_2_middle_back_pt"
HAnimSite694.translation = [0,1,0]
TouchSensor695 = x3d.TouchSensor()
TouchSensor695.description = "HAnimSite spine_2_middle_back_pt"

HAnimSite694.children.append(TouchSensor695)
Shape696 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite694.children.append(Shape696)

HAnimSegment680.children.append(HAnimSite694)

HAnimJoint679.children.append(HAnimSegment680)
HAnimJoint697 = x3d.HAnimJoint(DEF="hanim_vl2")
HAnimJoint697.name = "vl2"
HAnimJoint697.center = [0.0045,1.1546,-0.08]
HAnimSegment698 = x3d.HAnimSegment(DEF="hanim_l2")
HAnimSegment698.name = "l2"
Transform699 = x3d.Transform()
Transform700 = x3d.Transform()
Shape701 = x3d.Shape(USE="HAnimJointShape")

Transform700.children.append(Shape701)

Transform699.children.append(Transform700)

HAnimSegment698.children.append(Transform699)
Shape702 = x3d.Shape()
LineSet703 = x3d.LineSet()
LineSet703.vertexCount = [2]
ColorRGBA704 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet703.color = ColorRGBA704
Coordinate705 = x3d.Coordinate()
Coordinate705.point = [(0.0045, 1.1546, -0.08),(0.0048, 1.1912, -0.0805)]

LineSet703.coord = Coordinate705

Shape702.geometry = LineSet703

HAnimSegment698.children.append(Shape702)

HAnimJoint697.children.append(HAnimSegment698)
HAnimJoint706 = x3d.HAnimJoint(DEF="hanim_vl1")
HAnimJoint706.name = "vl1"
HAnimJoint706.center = [0.0048,1.1912,-0.0805]
HAnimSegment707 = x3d.HAnimSegment(DEF="hanim_l1")
HAnimSegment707.name = "l1"
Transform708 = x3d.Transform()
Transform709 = x3d.Transform()
Shape710 = x3d.Shape(USE="HAnimJointShape")

Transform709.children.append(Shape710)

Transform708.children.append(Transform709)

HAnimSegment707.children.append(Transform708)
Shape711 = x3d.Shape()
LineSet712 = x3d.LineSet()
LineSet712.vertexCount = [2]
ColorRGBA713 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet712.color = ColorRGBA713
Coordinate714 = x3d.Coordinate()
Coordinate714.point = [(0.0048, 1.1912, -0.0805),(0.0051, 1.2278, -0.0808)]

LineSet712.coord = Coordinate714

Shape711.geometry = LineSet712

HAnimSegment707.children.append(Shape711)

HAnimJoint706.children.append(HAnimSegment707)
HAnimJoint715 = x3d.HAnimJoint(DEF="hanim_vt12")
HAnimJoint715.name = "vt12"
HAnimJoint715.center = [0.0051,1.2278,-0.0808]
HAnimSegment716 = x3d.HAnimSegment(DEF="hanim_t12")
HAnimSegment716.name = "t12"
Transform717 = x3d.Transform()
Transform718 = x3d.Transform()
Shape719 = x3d.Shape(USE="HAnimJointShape")

Transform718.children.append(Shape719)

Transform717.children.append(Transform718)

HAnimSegment716.children.append(Transform717)
Shape720 = x3d.Shape()
LineSet721 = x3d.LineSet()
LineSet721.vertexCount = [2]
ColorRGBA722 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet721.color = ColorRGBA722
Coordinate723 = x3d.Coordinate()
Coordinate723.point = [(0.0051, 1.2278, -0.0808),(0.0053, 1.2679, -0.081)]

LineSet721.coord = Coordinate723

Shape720.geometry = LineSet721

HAnimSegment716.children.append(Shape720)

HAnimJoint715.children.append(HAnimSegment716)
HAnimJoint724 = x3d.HAnimJoint(DEF="hanim_vt11")
HAnimJoint724.name = "vt11"
HAnimJoint724.center = [0.0053,1.2679,-0.081]
HAnimSegment725 = x3d.HAnimSegment(DEF="hanim_t11")
HAnimSegment725.name = "t11"
Transform726 = x3d.Transform()
Transform727 = x3d.Transform()
Shape728 = x3d.Shape(USE="HAnimJointShape")

Transform727.children.append(Shape728)

Transform726.children.append(Transform727)

HAnimSegment725.children.append(Transform726)
Shape729 = x3d.Shape()
LineSet730 = x3d.LineSet()
LineSet730.vertexCount = [2]
ColorRGBA731 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet730.color = ColorRGBA731
Coordinate732 = x3d.Coordinate()
Coordinate732.point = [(0.0053, 1.2679, -0.081),(0.0056, 1.2848, -0.0822)]

LineSet730.coord = Coordinate732

Shape729.geometry = LineSet730

HAnimSegment725.children.append(Shape729)
HAnimSite733 = x3d.HAnimSite(DEF="hanim_substernale_pt")
HAnimSite733.name = "substernale_pt"
HAnimSite733.translation = [0.0085,1.2995,0.1147]
TouchSensor734 = x3d.TouchSensor()
TouchSensor734.description = "HAnimSite substernale_pt"

HAnimSite733.children.append(TouchSensor734)
Shape735 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite733.children.append(Shape735)

HAnimSegment725.children.append(HAnimSite733)

HAnimJoint724.children.append(HAnimSegment725)
HAnimJoint736 = x3d.HAnimJoint(DEF="hanim_vt10")
HAnimJoint736.name = "vt10"
HAnimJoint736.center = [0.0056,1.2848,-0.0822]
HAnimSegment737 = x3d.HAnimSegment(DEF="hanim_t10")
HAnimSegment737.name = "t10"
Transform738 = x3d.Transform()
Transform739 = x3d.Transform()
Shape740 = x3d.Shape(USE="HAnimJointShape")

Transform739.children.append(Shape740)

Transform738.children.append(Transform739)

HAnimSegment737.children.append(Transform738)
Shape741 = x3d.Shape()
LineSet742 = x3d.LineSet()
LineSet742.vertexCount = [2]
ColorRGBA743 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet742.color = ColorRGBA743
Coordinate744 = x3d.Coordinate()
Coordinate744.point = [(0.0056, 1.2848, -0.0822),(0.0057, 1.3126, -0.0838)]

LineSet742.coord = Coordinate744

Shape741.geometry = LineSet742

HAnimSegment737.children.append(Shape741)
HAnimSite745 = x3d.HAnimSite(DEF="hanim_l_thelion_pt")
HAnimSite745.name = "l_thelion_pt"
HAnimSite745.translation = [0.0918,1.3382,0.1192]
TouchSensor746 = x3d.TouchSensor()
TouchSensor746.description = "HAnimSite l_thelion_pt"

HAnimSite745.children.append(TouchSensor746)
Shape747 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite745.children.append(Shape747)

HAnimSegment737.children.append(HAnimSite745)
HAnimSite748 = x3d.HAnimSite(DEF="hanim_r_thelion_pt")
HAnimSite748.name = "r_thelion_pt"
HAnimSite748.translation = [-0.0736,1.3385,0.1217]
TouchSensor749 = x3d.TouchSensor()
TouchSensor749.description = "HAnimSite r_thelion_pt"

HAnimSite748.children.append(TouchSensor749)
Shape750 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite748.children.append(Shape750)

HAnimSegment737.children.append(HAnimSite748)

HAnimJoint736.children.append(HAnimSegment737)
HAnimJoint751 = x3d.HAnimJoint(DEF="hanim_vt9")
HAnimJoint751.name = "vt9"
HAnimJoint751.center = [0.0057,1.3126,-0.0838]
HAnimSegment752 = x3d.HAnimSegment(DEF="hanim_t9")
HAnimSegment752.name = "t9"
Transform753 = x3d.Transform()
Transform754 = x3d.Transform()
Shape755 = x3d.Shape(USE="HAnimJointShape")

Transform754.children.append(Shape755)

Transform753.children.append(Transform754)

HAnimSegment752.children.append(Transform753)
Shape756 = x3d.Shape()
LineSet757 = x3d.LineSet()
LineSet757.vertexCount = [2]
ColorRGBA758 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet757.color = ColorRGBA758
Coordinate759 = x3d.Coordinate()
Coordinate759.point = [(0.0057, 1.3126, -0.0838),(0.0057, 1.3382, -0.0845)]

LineSet757.coord = Coordinate759

Shape756.geometry = LineSet757

HAnimSegment752.children.append(Shape756)

HAnimJoint751.children.append(HAnimSegment752)
HAnimJoint760 = x3d.HAnimJoint(DEF="hanim_vt8")
HAnimJoint760.name = "vt8"
HAnimJoint760.center = [0.0057,1.3382,-0.0845]
HAnimSegment761 = x3d.HAnimSegment(DEF="hanim_t8")
HAnimSegment761.name = "t8"
Transform762 = x3d.Transform()
Transform763 = x3d.Transform()
Shape764 = x3d.Shape(USE="HAnimJointShape")

Transform763.children.append(Shape764)

Transform762.children.append(Transform763)

HAnimSegment761.children.append(Transform762)
Shape765 = x3d.Shape()
LineSet766 = x3d.LineSet()
LineSet766.vertexCount = [2]
ColorRGBA767 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet766.color = ColorRGBA767
Coordinate768 = x3d.Coordinate()
Coordinate768.point = [(0.0057, 1.3382, -0.0845),(0.0058, 1.3625, -0.0833)]

LineSet766.coord = Coordinate768

Shape765.geometry = LineSet766

HAnimSegment761.children.append(Shape765)

HAnimJoint760.children.append(HAnimSegment761)
HAnimJoint769 = x3d.HAnimJoint(DEF="hanim_vt7")
HAnimJoint769.name = "vt7"
HAnimJoint769.center = [0.0058,1.3625,-0.0833]
HAnimSegment770 = x3d.HAnimSegment(DEF="hanim_t7")
HAnimSegment770.name = "t7"
Transform771 = x3d.Transform()
Transform772 = x3d.Transform()
Shape773 = x3d.Shape(USE="HAnimJointShape")

Transform772.children.append(Shape773)

Transform771.children.append(Transform772)

HAnimSegment770.children.append(Transform771)
Shape774 = x3d.Shape()
LineSet775 = x3d.LineSet()
LineSet775.vertexCount = [2]
ColorRGBA776 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet775.color = ColorRGBA776
Coordinate777 = x3d.Coordinate()
Coordinate777.point = [(0.0058, 1.3625, -0.0833),(0.0059, 1.3866, -0.08)]

LineSet775.coord = Coordinate777

Shape774.geometry = LineSet775

HAnimSegment770.children.append(Shape774)
HAnimSite778 = x3d.HAnimSite(DEF="hanim_l_chest_midsagittal_plane_pt")
HAnimSite778.name = "l_chest_midsagittal_plane_pt"
HAnimSite778.translation = [0,1,0]
TouchSensor779 = x3d.TouchSensor()
TouchSensor779.description = "HAnimSite l_chest_midsagittal_plane_pt"

HAnimSite778.children.append(TouchSensor779)
Shape780 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite778.children.append(Shape780)

HAnimSegment770.children.append(HAnimSite778)
HAnimSite781 = x3d.HAnimSite(DEF="hanim_mesosternale_pt")
HAnimSite781.name = "mesosternale_pt"
HAnimSite781.translation = [0,1,0]
TouchSensor782 = x3d.TouchSensor()
TouchSensor782.description = "HAnimSite mesosternale_pt"

HAnimSite781.children.append(TouchSensor782)
Shape783 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite781.children.append(Shape783)

HAnimSegment770.children.append(HAnimSite781)
HAnimSite784 = x3d.HAnimSite(DEF="hanim_r_chest_midsagittal_plane_pt")
HAnimSite784.name = "r_chest_midsagittal_plane_pt"
HAnimSite784.translation = [0,1,0]
TouchSensor785 = x3d.TouchSensor()
TouchSensor785.description = "HAnimSite r_chest_midsagittal_plane_pt"

HAnimSite784.children.append(TouchSensor785)
Shape786 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite784.children.append(Shape786)

HAnimSegment770.children.append(HAnimSite784)
HAnimSite787 = x3d.HAnimSite(DEF="hanim_rear_center_midsagittal_plane_pt")
HAnimSite787.name = "rear_center_midsagittal_plane_pt"
HAnimSite787.translation = [0,1,0]
TouchSensor788 = x3d.TouchSensor()
TouchSensor788.description = "HAnimSite rear_center_midsagittal_plane_pt"

HAnimSite787.children.append(TouchSensor788)
Shape789 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite787.children.append(Shape789)

HAnimSegment770.children.append(HAnimSite787)

HAnimJoint769.children.append(HAnimSegment770)
HAnimJoint790 = x3d.HAnimJoint(DEF="hanim_vt6")
HAnimJoint790.name = "vt6"
HAnimJoint790.center = [0.0059,1.3866,-0.08]
HAnimSegment791 = x3d.HAnimSegment(DEF="hanim_t6")
HAnimSegment791.name = "t6"
Transform792 = x3d.Transform()
Transform793 = x3d.Transform()
Shape794 = x3d.Shape(USE="HAnimJointShape")

Transform793.children.append(Shape794)

Transform792.children.append(Transform793)

HAnimSegment791.children.append(Transform792)
Shape795 = x3d.Shape()
LineSet796 = x3d.LineSet()
LineSet796.vertexCount = [2]
ColorRGBA797 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet796.color = ColorRGBA797
Coordinate798 = x3d.Coordinate()
Coordinate798.point = [(0.0059, 1.3866, -0.08),(0.006, 1.4102, -0.0745)]

LineSet796.coord = Coordinate798

Shape795.geometry = LineSet796

HAnimSegment791.children.append(Shape795)
HAnimSite799 = x3d.HAnimSite(DEF="hanim_spine_1_middle_back_pt")
HAnimSite799.name = "spine_1_middle_back_pt"
HAnimSite799.translation = [0,1,0]
TouchSensor800 = x3d.TouchSensor()
TouchSensor800.description = "HAnimSite spine_1_middle_back_pt"

HAnimSite799.children.append(TouchSensor800)
Shape801 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite799.children.append(Shape801)

HAnimSegment791.children.append(HAnimSite799)

HAnimJoint790.children.append(HAnimSegment791)
HAnimJoint802 = x3d.HAnimJoint(DEF="hanim_vt5")
HAnimJoint802.name = "vt5"
HAnimJoint802.center = [0.006,1.4102,-0.0745]
HAnimSegment803 = x3d.HAnimSegment(DEF="hanim_t5")
HAnimSegment803.name = "t5"
Transform804 = x3d.Transform()
Transform805 = x3d.Transform()
Shape806 = x3d.Shape(USE="HAnimJointShape")

Transform805.children.append(Shape806)

Transform804.children.append(Transform805)

HAnimSegment803.children.append(Transform804)
Shape807 = x3d.Shape()
LineSet808 = x3d.LineSet()
LineSet808.vertexCount = [2]
ColorRGBA809 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet808.color = ColorRGBA809
Coordinate810 = x3d.Coordinate()
Coordinate810.point = [(0.006, 1.4102, -0.0745),(0.0061, 1.432, -0.0675)]

LineSet808.coord = Coordinate810

Shape807.geometry = LineSet808

HAnimSegment803.children.append(Shape807)

HAnimJoint802.children.append(HAnimSegment803)
HAnimJoint811 = x3d.HAnimJoint(DEF="hanim_vt4")
HAnimJoint811.name = "vt4"
HAnimJoint811.center = [0.0061,1.432,-0.0675]
HAnimSegment812 = x3d.HAnimSegment(DEF="hanim_t4")
HAnimSegment812.name = "t4"
Transform813 = x3d.Transform()
Transform814 = x3d.Transform()
Shape815 = x3d.Shape(USE="HAnimJointShape")

Transform814.children.append(Shape815)

Transform813.children.append(Transform814)

HAnimSegment812.children.append(Transform813)
Shape816 = x3d.Shape()
LineSet817 = x3d.LineSet()
LineSet817.vertexCount = [2]
ColorRGBA818 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet817.color = ColorRGBA818
Coordinate819 = x3d.Coordinate()
Coordinate819.point = [(0.0061, 1.432, -0.0675),(0.0062, 1.4583, -0.057)]

LineSet817.coord = Coordinate819

Shape816.geometry = LineSet817

HAnimSegment812.children.append(Shape816)

HAnimJoint811.children.append(HAnimSegment812)
HAnimJoint820 = x3d.HAnimJoint(DEF="hanim_vt3")
HAnimJoint820.name = "vt3"
HAnimJoint820.center = [0.0062,1.4583,-0.057]
HAnimSegment821 = x3d.HAnimSegment(DEF="hanim_t3")
HAnimSegment821.name = "t3"
Transform822 = x3d.Transform()
Transform823 = x3d.Transform()
Shape824 = x3d.Shape(USE="HAnimJointShape")

Transform823.children.append(Shape824)

Transform822.children.append(Transform823)

HAnimSegment821.children.append(Transform822)
Shape825 = x3d.Shape()
LineSet826 = x3d.LineSet()
LineSet826.vertexCount = [2]
ColorRGBA827 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet826.color = ColorRGBA827
Coordinate828 = x3d.Coordinate()
Coordinate828.point = [(0.0062, 1.4583, -0.057),(0.0063, 1.4761, -0.0484)]

LineSet826.coord = Coordinate828

Shape825.geometry = LineSet826

HAnimSegment821.children.append(Shape825)

HAnimJoint820.children.append(HAnimSegment821)
HAnimJoint829 = x3d.HAnimJoint(DEF="hanim_vt2")
HAnimJoint829.name = "vt2"
HAnimJoint829.center = [0.0063,1.4761,-0.0484]
HAnimSegment830 = x3d.HAnimSegment(DEF="hanim_t2")
HAnimSegment830.name = "t2"
Transform831 = x3d.Transform()
Transform832 = x3d.Transform()
Shape833 = x3d.Shape(USE="HAnimJointShape")

Transform832.children.append(Shape833)

Transform831.children.append(Transform832)

HAnimSegment830.children.append(Transform831)
Shape834 = x3d.Shape()
LineSet835 = x3d.LineSet()
LineSet835.vertexCount = [2]
ColorRGBA836 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet835.color = ColorRGBA836
Coordinate837 = x3d.Coordinate()
Coordinate837.point = [(0.0063, 1.4761, -0.0484),(0.0065, 1.4951, -0.0387)]

LineSet835.coord = Coordinate837

Shape834.geometry = LineSet835

HAnimSegment830.children.append(Shape834)
HAnimSite838 = x3d.HAnimSite(DEF="hanim_cervicale_pt")
HAnimSite838.name = "cervicale_pt"
HAnimSite838.translation = [0.0064,1.52,-0.0815]
TouchSensor839 = x3d.TouchSensor()
TouchSensor839.description = "HAnimSite cervicale_pt"

HAnimSite838.children.append(TouchSensor839)
Shape840 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite838.children.append(Shape840)

HAnimSegment830.children.append(HAnimSite838)
HAnimSite841 = x3d.HAnimSite(DEF="hanim_suprasternale_pt")
HAnimSite841.name = "suprasternale_pt"
HAnimSite841.translation = [0.0084,1.4714,0.0551]
TouchSensor842 = x3d.TouchSensor()
TouchSensor842.description = "HAnimSite suprasternale_pt"

HAnimSite841.children.append(TouchSensor842)
Shape843 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite841.children.append(Shape843)

HAnimSegment830.children.append(HAnimSite841)

HAnimJoint829.children.append(HAnimSegment830)
HAnimJoint844 = x3d.HAnimJoint(DEF="hanim_vt1")
HAnimJoint844.name = "vt1"
HAnimJoint844.center = [0.0065,1.4951,-0.0387]
HAnimSegment845 = x3d.HAnimSegment(DEF="hanim_t1")
HAnimSegment845.name = "t1"
Transform846 = x3d.Transform()
Transform847 = x3d.Transform()
Shape848 = x3d.Shape(USE="HAnimJointShape")

Transform847.children.append(Shape848)

Transform846.children.append(Transform847)

HAnimSegment845.children.append(Transform846)
Shape849 = x3d.Shape()
LineSet850 = x3d.LineSet()
LineSet850.vertexCount = [2]
ColorRGBA851 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet850.color = ColorRGBA851
Coordinate852 = x3d.Coordinate()
Coordinate852.point = [(0.0065, 1.4951, -0.0387),(0.0066, 1.5132, -0.0301)]

LineSet850.coord = Coordinate852

Shape849.geometry = LineSet850

HAnimSegment845.children.append(Shape849)
HAnimSite853 = x3d.HAnimSite(DEF="hanim_l_neck_base_pt")
HAnimSite853.name = "l_neck_base_pt"
HAnimSite853.translation = [0.0646,1.5141,-0.038]
TouchSensor854 = x3d.TouchSensor()
TouchSensor854.description = "HAnimSite l_neck_base_pt"

HAnimSite853.children.append(TouchSensor854)
Shape855 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite853.children.append(Shape855)

HAnimSegment845.children.append(HAnimSite853)
HAnimSite856 = x3d.HAnimSite(DEF="hanim_r_neck_base_pt")
HAnimSite856.name = "r_neck_base_pt"
HAnimSite856.translation = [-0.0419,1.5149,-0.022]
TouchSensor857 = x3d.TouchSensor()
TouchSensor857.description = "HAnimSite r_neck_base_pt"

HAnimSite856.children.append(TouchSensor857)
Shape858 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite856.children.append(Shape858)

HAnimSegment845.children.append(HAnimSite856)
Shape859 = x3d.Shape()
LineSet860 = x3d.LineSet()
LineSet860.vertexCount = [2]
ColorRGBA861 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet860.color = ColorRGBA861
Coordinate862 = x3d.Coordinate()
Coordinate862.point = [(0.0065, 1.4951, -0.0387),(0.082, 1.4488, -0.0353)]

LineSet860.coord = Coordinate862

Shape859.geometry = LineSet860

HAnimSegment845.children.append(Shape859)
HAnimSite863 = x3d.HAnimSite(DEF="hanim_l_acromion_pt")
HAnimSite863.name = "l_acromion_pt"
HAnimSite863.translation = [0.2032,1.476,-0.049]
TouchSensor864 = x3d.TouchSensor()
TouchSensor864.description = "HAnimSite l_acromion_pt"

HAnimSite863.children.append(TouchSensor864)
Shape865 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite863.children.append(Shape865)

HAnimSegment845.children.append(HAnimSite863)
HAnimSite866 = x3d.HAnimSite(DEF="hanim_l_axilla_distal_pt")
HAnimSite866.name = "l_axilla_distal_pt"
HAnimSite866.translation = [0.1706,1.4072,-0.0875]
TouchSensor867 = x3d.TouchSensor()
TouchSensor867.description = "HAnimSite l_axilla_distal_pt"

HAnimSite866.children.append(TouchSensor867)
Shape868 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite866.children.append(Shape868)

HAnimSegment845.children.append(HAnimSite866)
HAnimSite869 = x3d.HAnimSite(DEF="hanim_l_axilla_posterior_folds_pt")
HAnimSite869.name = "l_axilla_posterior_folds_pt"
HAnimSite869.translation = [0,1,0]
TouchSensor870 = x3d.TouchSensor()
TouchSensor870.description = "HAnimSite l_axilla_posterior_folds_pt"

HAnimSite869.children.append(TouchSensor870)
Shape871 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite869.children.append(Shape871)

HAnimSegment845.children.append(HAnimSite869)
HAnimSite872 = x3d.HAnimSite(DEF="hanim_l_axilla_proximal_pt")
HAnimSite872.name = "l_axilla_proximal_pt"
HAnimSite872.translation = [0.1777,1.4065,-0.0075]
TouchSensor873 = x3d.TouchSensor()
TouchSensor873.description = "HAnimSite l_axilla_proximal_pt"

HAnimSite872.children.append(TouchSensor873)
Shape874 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite872.children.append(Shape874)

HAnimSegment845.children.append(HAnimSite872)
HAnimSite875 = x3d.HAnimSite(DEF="hanim_l_clavicale_pt")
HAnimSite875.name = "l_clavicale_pt"
HAnimSite875.translation = [0.0271,1.4943,0.0394]
TouchSensor876 = x3d.TouchSensor()
TouchSensor876.description = "HAnimSite l_clavicale_pt"

HAnimSite875.children.append(TouchSensor876)
Shape877 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite875.children.append(Shape877)

HAnimSegment845.children.append(HAnimSite875)
Shape878 = x3d.Shape()
LineSet879 = x3d.LineSet()
LineSet879.vertexCount = [2]
ColorRGBA880 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet879.color = ColorRGBA880
Coordinate881 = x3d.Coordinate()
Coordinate881.point = [(0.0065, 1.4951, -0.0387),(-0.0694, 1.46, -0.033)]

LineSet879.coord = Coordinate881

Shape878.geometry = LineSet879

HAnimSegment845.children.append(Shape878)
HAnimSite882 = x3d.HAnimSite(DEF="hanim_r_acromion_pt")
HAnimSite882.name = "r_acromion_pt"
HAnimSite882.translation = [-0.1905,1.4791,-0.0431]
TouchSensor883 = x3d.TouchSensor()
TouchSensor883.description = "HAnimSite r_acromion_pt"

HAnimSite882.children.append(TouchSensor883)
Shape884 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite882.children.append(Shape884)

HAnimSegment845.children.append(HAnimSite882)
HAnimSite885 = x3d.HAnimSite(DEF="hanim_r_axilla_distal_pt")
HAnimSite885.name = "r_axilla_distal_pt"
HAnimSite885.translation = [-0.1603,1.4098,-0.0826]
TouchSensor886 = x3d.TouchSensor()
TouchSensor886.description = "HAnimSite r_axilla_distal_pt"

HAnimSite885.children.append(TouchSensor886)
Shape887 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite885.children.append(Shape887)

HAnimSegment845.children.append(HAnimSite885)
HAnimSite888 = x3d.HAnimSite(DEF="hanim_r_axilla_posterior_folds_pt")
HAnimSite888.name = "r_axilla_posterior_folds_pt"
HAnimSite888.translation = [0,1,0]
TouchSensor889 = x3d.TouchSensor()
TouchSensor889.description = "HAnimSite r_axilla_posterior_folds_pt"

HAnimSite888.children.append(TouchSensor889)
Shape890 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite888.children.append(Shape890)

HAnimSegment845.children.append(HAnimSite888)
HAnimSite891 = x3d.HAnimSite(DEF="hanim_r_axilla_proximal_pt")
HAnimSite891.name = "r_axilla_proximal_pt"
HAnimSite891.translation = [-0.1626,1.4072,-0.0031]
TouchSensor892 = x3d.TouchSensor()
TouchSensor892.description = "HAnimSite r_axilla_proximal_pt"

HAnimSite891.children.append(TouchSensor892)
Shape893 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite891.children.append(Shape893)

HAnimSegment845.children.append(HAnimSite891)
HAnimSite894 = x3d.HAnimSite(DEF="hanim_r_clavicale_pt")
HAnimSite894.name = "r_clavicale_pt"
HAnimSite894.translation = [-0.0115,1.4943,0.04]
TouchSensor895 = x3d.TouchSensor()
TouchSensor895.description = "HAnimSite r_clavicale_pt"

HAnimSite894.children.append(TouchSensor895)
Shape896 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite894.children.append(Shape896)

HAnimSegment845.children.append(HAnimSite894)

HAnimJoint844.children.append(HAnimSegment845)
HAnimJoint897 = x3d.HAnimJoint(DEF="hanim_vc7")
HAnimJoint897.name = "vc7"
HAnimJoint897.center = [0.0066,1.5132,-0.0301]
HAnimSegment898 = x3d.HAnimSegment(DEF="hanim_c7")
HAnimSegment898.name = "c7"
Transform899 = x3d.Transform()
Transform900 = x3d.Transform()
Shape901 = x3d.Shape(USE="HAnimJointShape")

Transform900.children.append(Shape901)

Transform899.children.append(Transform900)

HAnimSegment898.children.append(Transform899)
Shape902 = x3d.Shape()
LineSet903 = x3d.LineSet()
LineSet903.vertexCount = [2]
ColorRGBA904 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet903.color = ColorRGBA904
Coordinate905 = x3d.Coordinate()
Coordinate905.point = [(0.0066, 1.5132, -0.0301),(0.0066, 1.5357, -0.0143)]

LineSet903.coord = Coordinate905

Shape902.geometry = LineSet903

HAnimSegment898.children.append(Shape902)

HAnimJoint897.children.append(HAnimSegment898)
HAnimJoint906 = x3d.HAnimJoint(DEF="hanim_vc6")
HAnimJoint906.name = "vc6"
HAnimJoint906.center = [0.0066,1.5357,-0.0143]
HAnimSegment907 = x3d.HAnimSegment(DEF="hanim_c6")
HAnimSegment907.name = "c6"
Transform908 = x3d.Transform()
Transform909 = x3d.Transform()
Shape910 = x3d.Shape(USE="HAnimJointShape")

Transform909.children.append(Shape910)

Transform908.children.append(Transform909)

HAnimSegment907.children.append(Transform908)
Shape911 = x3d.Shape()
LineSet912 = x3d.LineSet()
LineSet912.vertexCount = [2]
ColorRGBA913 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet912.color = ColorRGBA913
Coordinate914 = x3d.Coordinate()
Coordinate914.point = [(0.0066, 1.5357, -0.0143),(0.0066, 1.552, -0.0082)]

LineSet912.coord = Coordinate914

Shape911.geometry = LineSet912

HAnimSegment907.children.append(Shape911)

HAnimJoint906.children.append(HAnimSegment907)
HAnimJoint915 = x3d.HAnimJoint(DEF="hanim_vc5")
HAnimJoint915.name = "vc5"
HAnimJoint915.center = [0.0066,1.552,-0.0082]
HAnimSegment916 = x3d.HAnimSegment(DEF="hanim_c5")
HAnimSegment916.name = "c5"
Transform917 = x3d.Transform()
Transform918 = x3d.Transform()
Shape919 = x3d.Shape(USE="HAnimJointShape")

Transform918.children.append(Shape919)

Transform917.children.append(Transform918)

HAnimSegment916.children.append(Transform917)
Shape920 = x3d.Shape()
LineSet921 = x3d.LineSet()
LineSet921.vertexCount = [2]
ColorRGBA922 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet921.color = ColorRGBA922
Coordinate923 = x3d.Coordinate()
Coordinate923.point = [(0.0066, 1.552, -0.0082),(0.0066, 1.5662, -0.0084)]

LineSet921.coord = Coordinate923

Shape920.geometry = LineSet921

HAnimSegment916.children.append(Shape920)

HAnimJoint915.children.append(HAnimSegment916)
HAnimJoint924 = x3d.HAnimJoint(DEF="hanim_vc4")
HAnimJoint924.name = "vc4"
HAnimJoint924.center = [0.0066,1.5662,-0.0084]
HAnimSegment925 = x3d.HAnimSegment(DEF="hanim_c4")
HAnimSegment925.name = "c4"
Transform926 = x3d.Transform()
Transform927 = x3d.Transform()
Shape928 = x3d.Shape(USE="HAnimJointShape")

Transform927.children.append(Shape928)

Transform926.children.append(Transform927)

HAnimSegment925.children.append(Transform926)
Shape929 = x3d.Shape()
LineSet930 = x3d.LineSet()
LineSet930.vertexCount = [2]
ColorRGBA931 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet930.color = ColorRGBA931
Coordinate932 = x3d.Coordinate()
Coordinate932.point = [(0.0066, 1.5662, -0.0084),(0.0066, 1.58, -0.0103)]

LineSet930.coord = Coordinate932

Shape929.geometry = LineSet930

HAnimSegment925.children.append(Shape929)

HAnimJoint924.children.append(HAnimSegment925)
HAnimJoint933 = x3d.HAnimJoint(DEF="hanim_vc3")
HAnimJoint933.name = "vc3"
HAnimJoint933.center = [0.0066,1.58,-0.0103]
HAnimSegment934 = x3d.HAnimSegment(DEF="hanim_c3")
HAnimSegment934.name = "c3"
Transform935 = x3d.Transform()
Transform936 = x3d.Transform()
Shape937 = x3d.Shape(USE="HAnimJointShape")

Transform936.children.append(Shape937)

Transform935.children.append(Transform936)

HAnimSegment934.children.append(Transform935)
Shape938 = x3d.Shape()
LineSet939 = x3d.LineSet()
LineSet939.vertexCount = [2]
ColorRGBA940 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet939.color = ColorRGBA940
Coordinate941 = x3d.Coordinate()
Coordinate941.point = [(0.0066, 1.58, -0.0103),(0.0066, 1.5928, -0.0103)]

LineSet939.coord = Coordinate941

Shape938.geometry = LineSet939

HAnimSegment934.children.append(Shape938)
HAnimSite942 = x3d.HAnimSite(DEF="hanim_adams_apple_pt")
HAnimSite942.name = "adams_apple_pt"
HAnimSite942.translation = [0,1,0]
TouchSensor943 = x3d.TouchSensor()
TouchSensor943.description = "HAnimSite adams_apple_pt"

HAnimSite942.children.append(TouchSensor943)
Shape944 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite942.children.append(Shape944)

HAnimSegment934.children.append(HAnimSite942)

HAnimJoint933.children.append(HAnimSegment934)
HAnimJoint945 = x3d.HAnimJoint(DEF="hanim_vc2")
HAnimJoint945.name = "vc2"
HAnimJoint945.center = [0.0066,1.5928,-0.0103]
HAnimSegment946 = x3d.HAnimSegment(DEF="hanim_c2")
HAnimSegment946.name = "c2"
Transform947 = x3d.Transform()
Transform948 = x3d.Transform()
Shape949 = x3d.Shape(USE="HAnimJointShape")

Transform948.children.append(Shape949)

Transform947.children.append(Transform948)

HAnimSegment946.children.append(Transform947)
Shape950 = x3d.Shape()
LineSet951 = x3d.LineSet()
LineSet951.vertexCount = [2]
ColorRGBA952 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet951.color = ColorRGBA952
Coordinate953 = x3d.Coordinate()
Coordinate953.point = [(0.0066, 1.5928, -0.0103),(0.0066, 1.6144, -0.0034)]

LineSet951.coord = Coordinate953

Shape950.geometry = LineSet951

HAnimSegment946.children.append(Shape950)

HAnimJoint945.children.append(HAnimSegment946)
HAnimJoint954 = x3d.HAnimJoint(DEF="hanim_vc1")
HAnimJoint954.name = "vc1"
HAnimJoint954.center = [0.0066,1.6144,-0.0034]
HAnimSegment955 = x3d.HAnimSegment(DEF="hanim_c1")
HAnimSegment955.name = "c1"
Transform956 = x3d.Transform()
Transform957 = x3d.Transform()
Shape958 = x3d.Shape(USE="HAnimJointShape")

Transform957.children.append(Shape958)

Transform956.children.append(Transform957)

HAnimSegment955.children.append(Transform956)
Shape959 = x3d.Shape()
LineSet960 = x3d.LineSet()
LineSet960.vertexCount = [2]
ColorRGBA961 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet960.color = ColorRGBA961
Coordinate962 = x3d.Coordinate()
Coordinate962.point = [(0.0066, 1.6144, -0.0034),(0.0044, 1.6209, 0.0236)]

LineSet960.coord = Coordinate962

Shape959.geometry = LineSet960

HAnimSegment955.children.append(Shape959)
HAnimSite963 = x3d.HAnimSite(DEF="hanim_glabella_pt")
HAnimSite963.name = "glabella_pt"
HAnimSite963.translation = [0,1,0]
TouchSensor964 = x3d.TouchSensor()
TouchSensor964.description = "HAnimSite glabella_pt"

HAnimSite963.children.append(TouchSensor964)
Shape965 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite963.children.append(Shape965)

HAnimSegment955.children.append(HAnimSite963)
HAnimSite966 = x3d.HAnimSite(DEF="hanim_l_ectocanthus_pt")
HAnimSite966.name = "l_ectocanthus_pt"
HAnimSite966.translation = [0,1,0]
TouchSensor967 = x3d.TouchSensor()
TouchSensor967.description = "HAnimSite l_ectocanthus_pt"

HAnimSite966.children.append(TouchSensor967)
Shape968 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite966.children.append(Shape968)

HAnimSegment955.children.append(HAnimSite966)
HAnimSite969 = x3d.HAnimSite(DEF="hanim_l_infraorbitale_pt")
HAnimSite969.name = "l_infraorbitale_pt"
HAnimSite969.translation = [0.0341,1.6171,0.0752]
TouchSensor970 = x3d.TouchSensor()
TouchSensor970.description = "HAnimSite l_infraorbitale_pt"

HAnimSite969.children.append(TouchSensor970)
Shape971 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite969.children.append(Shape971)

HAnimSegment955.children.append(HAnimSite969)
HAnimSite972 = x3d.HAnimSite(DEF="hanim_l_tragion_pt")
HAnimSite972.name = "l_tragion_pt"
HAnimSite972.translation = [0.0739,1.6348,0.0282]
TouchSensor973 = x3d.TouchSensor()
TouchSensor973.description = "HAnimSite l_tragion_pt"

HAnimSite972.children.append(TouchSensor973)
Shape974 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite972.children.append(Shape974)

HAnimSegment955.children.append(HAnimSite972)
HAnimSite975 = x3d.HAnimSite(DEF="hanim_nuchale_pt")
HAnimSite975.name = "nuchale_pt"
HAnimSite975.translation = [0.0039,1.5972,-0.0796]
TouchSensor976 = x3d.TouchSensor()
TouchSensor976.description = "HAnimSite nuchale_pt"

HAnimSite975.children.append(TouchSensor976)
Shape977 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite975.children.append(Shape977)

HAnimSegment955.children.append(HAnimSite975)
HAnimSite978 = x3d.HAnimSite(DEF="hanim_opisthocranion_pt")
HAnimSite978.name = "opisthocranion_pt"
HAnimSite978.translation = [0,1,0]
TouchSensor979 = x3d.TouchSensor()
TouchSensor979.description = "HAnimSite opisthocranion_pt"

HAnimSite978.children.append(TouchSensor979)
Shape980 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite978.children.append(Shape980)

HAnimSegment955.children.append(HAnimSite978)
HAnimSite981 = x3d.HAnimSite(DEF="hanim_r_ectocanthus_pt")
HAnimSite981.name = "r_ectocanthus_pt"
HAnimSite981.translation = [0,1,0]
TouchSensor982 = x3d.TouchSensor()
TouchSensor982.description = "HAnimSite r_ectocanthus_pt"

HAnimSite981.children.append(TouchSensor982)
Shape983 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite981.children.append(Shape983)

HAnimSegment955.children.append(HAnimSite981)
HAnimSite984 = x3d.HAnimSite(DEF="hanim_r_infraorbitale_pt")
HAnimSite984.name = "r_infraorbitale_pt"
HAnimSite984.translation = [-0.0237,1.6171,0.0752]
TouchSensor985 = x3d.TouchSensor()
TouchSensor985.description = "HAnimSite r_infraorbitale_pt"

HAnimSite984.children.append(TouchSensor985)
Shape986 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite984.children.append(Shape986)

HAnimSegment955.children.append(HAnimSite984)
HAnimSite987 = x3d.HAnimSite(DEF="hanim_r_tragion_pt")
HAnimSite987.name = "r_tragion_pt"
HAnimSite987.translation = [-0.0646,1.6347,0.0302]
TouchSensor988 = x3d.TouchSensor()
TouchSensor988.description = "HAnimSite r_tragion_pt"

HAnimSite987.children.append(TouchSensor988)
Shape989 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite987.children.append(Shape989)

HAnimSegment955.children.append(HAnimSite987)
HAnimSite990 = x3d.HAnimSite(DEF="hanim_sellion_pt")
HAnimSite990.name = "sellion_pt"
HAnimSite990.translation = [0.0058,1.6316,0.0852]
TouchSensor991 = x3d.TouchSensor()
TouchSensor991.description = "HAnimSite sellion_pt"

HAnimSite990.children.append(TouchSensor991)
Shape992 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite990.children.append(Shape992)

HAnimSegment955.children.append(HAnimSite990)
HAnimSite993 = x3d.HAnimSite(DEF="hanim_skull_vertex_pt")
HAnimSite993.name = "skull_vertex_pt"
HAnimSite993.translation = [0.005,1.7504,0.0055]
TouchSensor994 = x3d.TouchSensor()
TouchSensor994.description = "HAnimSite skull_vertex_pt"

HAnimSite993.children.append(TouchSensor994)
Shape995 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite993.children.append(Shape995)

HAnimSegment955.children.append(HAnimSite993)

HAnimJoint954.children.append(HAnimSegment955)
HAnimJoint996 = x3d.HAnimJoint(DEF="hanim_skullbase")
HAnimJoint996.name = "skullbase"
HAnimJoint996.center = [0.0044,1.6209,0.0236]
HAnimDisplacer997 = x3d.HAnimDisplacer(DEF="Joe_skull_tip_raiser_action")
HAnimDisplacer997.name = "skull_tip_raiser_action"
HAnimDisplacer997.coordIndex = [0,1,2,3,4,5,6,7,8,9]
HAnimDisplacer997.displacements = [(0, 0.15, 0),(0, 0, 0.15),(-0.1, 0, 0.15),(0.1, 0, 0.05),(0, -0.02, 0.05),(-0.15, 0, 0),(-0.05, 0, 0),(0.15, 0, 0),(0.05, 0, 0),(0, 0, -0.15)]

HAnimJoint996.displacers.append(HAnimDisplacer997)
HAnimSegment998 = x3d.HAnimSegment(DEF="hanim_skull")
HAnimSegment998.name = "skull"
Transform999 = x3d.Transform()
Transform1000 = x3d.Transform()
Shape1001 = x3d.Shape(USE="HAnimJointShape")

Transform1000.children.append(Shape1001)

Transform999.children.append(Transform1000)

HAnimSegment998.children.append(Transform999)
Shape1002 = x3d.Shape()
LineSet1003 = x3d.LineSet()
LineSet1003.vertexCount = [2]
ColorRGBA1004 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1003.color = ColorRGBA1004
Coordinate1005 = x3d.Coordinate()
Coordinate1005.point = [(0.0044, 1.6209, 0.0236),(0, 1, 0)]

LineSet1003.coord = Coordinate1005

Shape1002.geometry = LineSet1003

HAnimSegment998.children.append(Shape1002)
Shape1006 = x3d.Shape()
LineSet1007 = x3d.LineSet()
LineSet1007.vertexCount = [2]
ColorRGBA1008 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1007.color = ColorRGBA1008
Coordinate1009 = x3d.Coordinate()
Coordinate1009.point = [(0.0044, 1.6209, 0.0236),(0, 1, 0)]

LineSet1007.coord = Coordinate1009

Shape1006.geometry = LineSet1007

HAnimSegment998.children.append(Shape1006)
Shape1010 = x3d.Shape()
LineSet1011 = x3d.LineSet()
LineSet1011.vertexCount = [2]
ColorRGBA1012 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1011.color = ColorRGBA1012
Coordinate1013 = x3d.Coordinate()
Coordinate1013.point = [(0.0044, 1.6209, 0.0236),(0, 1, 0)]

LineSet1011.coord = Coordinate1013

Shape1010.geometry = LineSet1011

HAnimSegment998.children.append(Shape1010)
Shape1014 = x3d.Shape()
LineSet1015 = x3d.LineSet()
LineSet1015.vertexCount = [2]
ColorRGBA1016 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1015.color = ColorRGBA1016
Coordinate1017 = x3d.Coordinate()
Coordinate1017.point = [(0.0044, 1.6209, 0.0236),(0, 1, 0)]

LineSet1015.coord = Coordinate1017

Shape1014.geometry = LineSet1015

HAnimSegment998.children.append(Shape1014)
Shape1018 = x3d.Shape()
LineSet1019 = x3d.LineSet()
LineSet1019.vertexCount = [2]
ColorRGBA1020 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1019.color = ColorRGBA1020
Coordinate1021 = x3d.Coordinate()
Coordinate1021.point = [(0.0044, 1.6209, 0.0236),(0, 1, 0)]

LineSet1019.coord = Coordinate1021

Shape1018.geometry = LineSet1019

HAnimSegment998.children.append(Shape1018)
Shape1022 = x3d.Shape()
LineSet1023 = x3d.LineSet()
LineSet1023.vertexCount = [2]
ColorRGBA1024 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1023.color = ColorRGBA1024
Coordinate1025 = x3d.Coordinate()
Coordinate1025.point = [(0.0044, 1.6209, 0.0236),(0, 1, 0)]

LineSet1023.coord = Coordinate1025

Shape1022.geometry = LineSet1023

HAnimSegment998.children.append(Shape1022)
Shape1026 = x3d.Shape()
LineSet1027 = x3d.LineSet()
LineSet1027.vertexCount = [2]
ColorRGBA1028 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1027.color = ColorRGBA1028
Coordinate1029 = x3d.Coordinate()
Coordinate1029.point = [(0.0044, 1.6209, 0.0236),(0, 1, 0)]

LineSet1027.coord = Coordinate1029

Shape1026.geometry = LineSet1027

HAnimSegment998.children.append(Shape1026)
HAnimSite1030 = x3d.HAnimSite(DEF="hanim_l_gonion_pt")
HAnimSite1030.name = "l_gonion_pt"
HAnimSite1030.translation = [0.0631,1.553,0.033]
TouchSensor1031 = x3d.TouchSensor()
TouchSensor1031.description = "HAnimSite l_gonion_pt"

HAnimSite1030.children.append(TouchSensor1031)
Shape1032 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1030.children.append(Shape1032)

HAnimSegment998.children.append(HAnimSite1030)
HAnimSite1033 = x3d.HAnimSite(DEF="hanim_menton_pt")
HAnimSite1033.name = "menton_pt"
HAnimSite1033.translation = [0,1,0]
TouchSensor1034 = x3d.TouchSensor()
TouchSensor1034.description = "HAnimSite menton_pt"

HAnimSite1033.children.append(TouchSensor1034)
Shape1035 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1033.children.append(Shape1035)

HAnimSegment998.children.append(HAnimSite1033)
HAnimSite1036 = x3d.HAnimSite(DEF="hanim_r_gonion_pt")
HAnimSite1036.name = "r_gonion_pt"
HAnimSite1036.translation = [-0.052,1.5529,0.0347]
TouchSensor1037 = x3d.TouchSensor()
TouchSensor1037.description = "HAnimSite r_gonion_pt"

HAnimSite1036.children.append(TouchSensor1037)
Shape1038 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1036.children.append(Shape1038)

HAnimSegment998.children.append(HAnimSite1036)
HAnimSite1039 = x3d.HAnimSite(DEF="hanim_supramenton_pt")
HAnimSite1039.name = "supramenton_pt"
HAnimSite1039.translation = [0.0061,1.541,0.0805]
TouchSensor1040 = x3d.TouchSensor()
TouchSensor1040.description = "HAnimSite supramenton_pt"

HAnimSite1039.children.append(TouchSensor1040)
Shape1041 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1039.children.append(Shape1041)

HAnimSegment998.children.append(HAnimSite1039)

HAnimJoint996.children.append(HAnimSegment998)
HAnimJoint1042 = x3d.HAnimJoint(DEF="hanim_l_eyelid_joint")
HAnimJoint1042.name = "l_eyelid_joint"
HAnimJoint1042.center = [0,1,0]

HAnimJoint996.children.append(HAnimJoint1042)
HAnimJoint1043 = x3d.HAnimJoint(DEF="hanim_r_eyelid_joint")
HAnimJoint1043.name = "r_eyelid_joint"
HAnimJoint1043.center = [0,1,0]

HAnimJoint996.children.append(HAnimJoint1043)
HAnimJoint1044 = x3d.HAnimJoint(DEF="hanim_l_eyeball_joint")
HAnimJoint1044.name = "l_eyeball_joint"
HAnimJoint1044.center = [0,1,0]

HAnimJoint996.children.append(HAnimJoint1044)
HAnimJoint1045 = x3d.HAnimJoint(DEF="hanim_r_eyeball_joint")
HAnimJoint1045.name = "r_eyeball_joint"
HAnimJoint1045.center = [0,1,0]

HAnimJoint996.children.append(HAnimJoint1045)
HAnimJoint1046 = x3d.HAnimJoint(DEF="hanim_l_eyebrow_joint")
HAnimJoint1046.name = "l_eyebrow_joint"
HAnimJoint1046.center = [0,1,0]

HAnimJoint996.children.append(HAnimJoint1046)
HAnimJoint1047 = x3d.HAnimJoint(DEF="hanim_r_eyebrow_joint")
HAnimJoint1047.name = "r_eyebrow_joint"
HAnimJoint1047.center = [0,1,0]

HAnimJoint996.children.append(HAnimJoint1047)
HAnimJoint1048 = x3d.HAnimJoint(DEF="hanim_temporomandibular")
HAnimJoint1048.name = "temporomandibular"
HAnimJoint1048.center = [0,1,0]

HAnimJoint996.children.append(HAnimJoint1048)

HAnimJoint954.children.append(HAnimJoint996)

HAnimJoint945.children.append(HAnimJoint954)

HAnimJoint933.children.append(HAnimJoint945)

HAnimJoint924.children.append(HAnimJoint933)

HAnimJoint915.children.append(HAnimJoint924)

HAnimJoint906.children.append(HAnimJoint915)

HAnimJoint897.children.append(HAnimJoint906)

HAnimJoint844.children.append(HAnimJoint897)
HAnimJoint1049 = x3d.HAnimJoint(DEF="hanim_l_sternoclavicular")
HAnimJoint1049.name = "l_sternoclavicular"
HAnimJoint1049.center = [0.082,1.4488,-0.0353]
HAnimSegment1050 = x3d.HAnimSegment(DEF="hanim_l_clavicle")
HAnimSegment1050.name = "l_clavicle"
Transform1051 = x3d.Transform()
Transform1052 = x3d.Transform()
Shape1053 = x3d.Shape(USE="HAnimJointShape")

Transform1052.children.append(Shape1053)

Transform1051.children.append(Transform1052)

HAnimSegment1050.children.append(Transform1051)
Shape1054 = x3d.Shape()
LineSet1055 = x3d.LineSet()
LineSet1055.vertexCount = [2]
ColorRGBA1056 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1055.color = ColorRGBA1056
Coordinate1057 = x3d.Coordinate()
Coordinate1057.point = [(0.082, 1.4488, -0.0353),(0.0962, 1.4269, -0.0424)]

LineSet1055.coord = Coordinate1057

Shape1054.geometry = LineSet1055

HAnimSegment1050.children.append(Shape1054)

HAnimJoint1049.children.append(HAnimSegment1050)
HAnimJoint1058 = x3d.HAnimJoint(DEF="hanim_l_acromioclavicular")
HAnimJoint1058.name = "l_acromioclavicular"
HAnimJoint1058.center = [0.0962,1.4269,-0.0424]
HAnimSegment1059 = x3d.HAnimSegment(DEF="hanim_l_scapula")
HAnimSegment1059.name = "l_scapula"
Transform1060 = x3d.Transform()
Transform1061 = x3d.Transform()
Shape1062 = x3d.Shape(USE="HAnimJointShape")

Transform1061.children.append(Shape1062)

Transform1060.children.append(Transform1061)

HAnimSegment1059.children.append(Transform1060)
Shape1063 = x3d.Shape()
LineSet1064 = x3d.LineSet()
LineSet1064.vertexCount = [2]
ColorRGBA1065 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1064.color = ColorRGBA1065
Coordinate1066 = x3d.Coordinate()
Coordinate1066.point = [(0.0962, 1.4269, -0.0424),(0.2029, 1.4376, -0.0387)]

LineSet1064.coord = Coordinate1066

Shape1063.geometry = LineSet1064

HAnimSegment1059.children.append(Shape1063)
HAnimSite1067 = x3d.HAnimSite(DEF="hanim_l_bideltoid_pt")
HAnimSite1067.name = "l_bideltoid_pt"
HAnimSite1067.translation = [0,1,0]
TouchSensor1068 = x3d.TouchSensor()
TouchSensor1068.description = "HAnimSite l_bideltoid_pt"

HAnimSite1067.children.append(TouchSensor1068)
Shape1069 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1067.children.append(Shape1069)

HAnimSegment1059.children.append(HAnimSite1067)
HAnimSite1070 = x3d.HAnimSite(DEF="hanim_l_humeral_lateral_epicondyles_pt")
HAnimSite1070.name = "l_humeral_lateral_epicondyles_pt"
HAnimSite1070.translation = [0.228,1.1482,-0.11]
TouchSensor1071 = x3d.TouchSensor()
TouchSensor1071.description = "HAnimSite l_humeral_lateral_epicondyles_pt"

HAnimSite1070.children.append(TouchSensor1071)
Shape1072 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1070.children.append(Shape1072)

HAnimSegment1059.children.append(HAnimSite1070)

HAnimJoint1058.children.append(HAnimSegment1059)
HAnimJoint1073 = x3d.HAnimJoint(DEF="hanim_l_shoulder")
HAnimJoint1073.name = "l_shoulder"
HAnimJoint1073.center = [0.2029,1.4376,-0.0387]
HAnimSegment1074 = x3d.HAnimSegment(DEF="hanim_l_upperarm")
HAnimSegment1074.name = "l_upperarm"
Transform1075 = x3d.Transform()
Transform1076 = x3d.Transform()
Shape1077 = x3d.Shape(USE="HAnimJointShape")

Transform1076.children.append(Shape1077)

Transform1075.children.append(Transform1076)

HAnimSegment1074.children.append(Transform1075)
Shape1078 = x3d.Shape()
LineSet1079 = x3d.LineSet()
LineSet1079.vertexCount = [2]
ColorRGBA1080 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1079.color = ColorRGBA1080
Coordinate1081 = x3d.Coordinate()
Coordinate1081.point = [(0.2029, 1.4376, -0.0387),(0.2014, 1.1357, -0.0682)]

LineSet1079.coord = Coordinate1081

Shape1078.geometry = LineSet1079

HAnimSegment1074.children.append(Shape1078)
HAnimSite1082 = x3d.HAnimSite(DEF="hanim_l_humeral_medial_epicondyles_pt")
HAnimSite1082.name = "l_humeral_medial_epicondyles_pt"
HAnimSite1082.translation = [0.1735,1.1272,-0.1113]
TouchSensor1083 = x3d.TouchSensor()
TouchSensor1083.description = "HAnimSite l_humeral_medial_epicondyles_pt"

HAnimSite1082.children.append(TouchSensor1083)
Shape1084 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1082.children.append(Shape1084)

HAnimSegment1074.children.append(HAnimSite1082)
HAnimSite1085 = x3d.HAnimSite(DEF="hanim_l_olecranon_pt")
HAnimSite1085.name = "l_olecranon_pt"
HAnimSite1085.translation = [-0.1962,1.1375,-0.1123]
TouchSensor1086 = x3d.TouchSensor()
TouchSensor1086.description = "HAnimSite l_olecranon_pt"

HAnimSite1085.children.append(TouchSensor1086)
Shape1087 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1085.children.append(Shape1087)

HAnimSegment1074.children.append(HAnimSite1085)
HAnimSite1088 = x3d.HAnimSite(DEF="hanim_l_radial_styloid_pt")
HAnimSite1088.name = "l_radial_styloid_pt"
HAnimSite1088.translation = [0.1901,0.8645,-0.0415]
TouchSensor1089 = x3d.TouchSensor()
TouchSensor1089.description = "HAnimSite l_radial_styloid_pt"

HAnimSite1088.children.append(TouchSensor1089)
Shape1090 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1088.children.append(Shape1090)

HAnimSegment1074.children.append(HAnimSite1088)
HAnimSite1091 = x3d.HAnimSite(DEF="hanim_l_radiale_pt")
HAnimSite1091.name = "l_radiale_pt"
HAnimSite1091.translation = [0.2182,1.1212,-0.1167]
TouchSensor1092 = x3d.TouchSensor()
TouchSensor1092.description = "HAnimSite l_radiale_pt"

HAnimSite1091.children.append(TouchSensor1092)
Shape1093 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1091.children.append(Shape1093)

HAnimSegment1074.children.append(HAnimSite1091)

HAnimJoint1073.children.append(HAnimSegment1074)
HAnimJoint1094 = x3d.HAnimJoint(DEF="hanim_l_elbow")
HAnimJoint1094.name = "l_elbow"
HAnimJoint1094.center = [0.2014,1.1357,-0.0682]
HAnimSegment1095 = x3d.HAnimSegment(DEF="hanim_l_forearm")
HAnimSegment1095.name = "l_forearm"
Transform1096 = x3d.Transform()
Transform1097 = x3d.Transform()
Shape1098 = x3d.Shape(USE="HAnimJointShape")

Transform1097.children.append(Shape1098)

Transform1096.children.append(Transform1097)

HAnimSegment1095.children.append(Transform1096)
Shape1099 = x3d.Shape()
LineSet1100 = x3d.LineSet()
LineSet1100.vertexCount = [2]
ColorRGBA1101 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1100.color = ColorRGBA1101
Coordinate1102 = x3d.Coordinate()
Coordinate1102.point = [(0.2014, 1.1357, -0.0682),(0.1984, 0.8663, -0.0583)]

LineSet1100.coord = Coordinate1102

Shape1099.geometry = LineSet1100

HAnimSegment1095.children.append(Shape1099)
HAnimSite1103 = x3d.HAnimSite(DEF="hanim_l_ulnar_styloid_pt")
HAnimSite1103.name = "l_ulnar_styloid_pt"
HAnimSite1103.translation = [-0.2142,0.8529,-0.0648]
TouchSensor1104 = x3d.TouchSensor()
TouchSensor1104.description = "HAnimSite l_ulnar_styloid_pt"

HAnimSite1103.children.append(TouchSensor1104)
Shape1105 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1103.children.append(Shape1105)

HAnimSegment1095.children.append(HAnimSite1103)

HAnimJoint1094.children.append(HAnimSegment1095)
HAnimJoint1106 = x3d.HAnimJoint(DEF="hanim_l_radiocarpal")
HAnimJoint1106.name = "l_radiocarpal"
HAnimJoint1106.center = [0.1984,0.8663,-0.0583]
HAnimSegment1107 = x3d.HAnimSegment(DEF="hanim_l_carpal")
HAnimSegment1107.name = "l_carpal"
Transform1108 = x3d.Transform()
Transform1108.translation = [0.2,0.85,-0.05]
Transform1108.rotation = [0,0,1,-3.14]
Transform1108.scale = [0.2,0.2,0.2]
Transform1109 = x3d.Transform()
Transform1109.rotation = [0,1,0,-1.57]
Shape1110 = x3d.Shape(USE="HAnimJointShape")

Transform1109.children.append(Shape1110)

Transform1108.children.append(Transform1109)

HAnimSegment1107.children.append(Transform1108)
Shape1111 = x3d.Shape()
LineSet1112 = x3d.LineSet()
LineSet1112.vertexCount = [2]
ColorRGBA1113 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1112.color = ColorRGBA1113
Coordinate1114 = x3d.Coordinate()
Coordinate1114.point = [(0.1984, 0.8663, -0.0583),(0, 1, 0)]

LineSet1112.coord = Coordinate1114

Shape1111.geometry = LineSet1112

HAnimSegment1107.children.append(Shape1111)
Shape1115 = x3d.Shape()
LineSet1116 = x3d.LineSet()
LineSet1116.vertexCount = [2]
ColorRGBA1117 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1116.color = ColorRGBA1117
Coordinate1118 = x3d.Coordinate()
Coordinate1118.point = [(0.1984, 0.8663, -0.0583),(0, 1, 0)]

LineSet1116.coord = Coordinate1118

Shape1115.geometry = LineSet1116

HAnimSegment1107.children.append(Shape1115)
Shape1119 = x3d.Shape()
LineSet1120 = x3d.LineSet()
LineSet1120.vertexCount = [2]
ColorRGBA1121 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1120.color = ColorRGBA1121
Coordinate1122 = x3d.Coordinate()
Coordinate1122.point = [(0.1984, 0.8663, -0.0583),(0, 1, 0)]

LineSet1120.coord = Coordinate1122

Shape1119.geometry = LineSet1120

HAnimSegment1107.children.append(Shape1119)
Shape1123 = x3d.Shape()
LineSet1124 = x3d.LineSet()
LineSet1124.vertexCount = [2]
ColorRGBA1125 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1124.color = ColorRGBA1125
Coordinate1126 = x3d.Coordinate()
Coordinate1126.point = [(0.1984, 0.8663, -0.0583),(0, 1, 0)]

LineSet1124.coord = Coordinate1126

Shape1123.geometry = LineSet1124

HAnimSegment1107.children.append(Shape1123)

HAnimJoint1106.children.append(HAnimSegment1107)
HAnimJoint1127 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_1")
HAnimJoint1127.name = "l_midcarpal_1"
HAnimJoint1127.center = [0,1,0]
HAnimSegment1128 = x3d.HAnimSegment(DEF="hanim_l_trapezium")
HAnimSegment1128.name = "l_trapezium"
Transform1129 = x3d.Transform()
Transform1130 = x3d.Transform()
Shape1131 = x3d.Shape(USE="HAnimJointShape")

Transform1130.children.append(Shape1131)

Transform1129.children.append(Transform1130)

HAnimSegment1128.children.append(Transform1129)
Shape1132 = x3d.Shape()
LineSet1133 = x3d.LineSet()
LineSet1133.vertexCount = [2]
ColorRGBA1134 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1133.color = ColorRGBA1134
Coordinate1135 = x3d.Coordinate()
Coordinate1135.point = [(0, 1, 0),(0.1924, 0.8472, -0.0534)]

LineSet1133.coord = Coordinate1135

Shape1132.geometry = LineSet1133

HAnimSegment1128.children.append(Shape1132)

HAnimJoint1127.children.append(HAnimSegment1128)
HAnimJoint1136 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_1")
HAnimJoint1136.name = "l_carpometacarpal_1"
HAnimJoint1136.center = [0.1924,0.8472,-0.0534]
HAnimSegment1137 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_1")
HAnimSegment1137.name = "l_metacarpal_1"
Transform1138 = x3d.Transform()
Transform1139 = x3d.Transform()
Shape1140 = x3d.Shape(USE="HAnimJointShape")

Transform1139.children.append(Shape1140)

Transform1138.children.append(Transform1139)

HAnimSegment1137.children.append(Transform1138)
Shape1141 = x3d.Shape()
LineSet1142 = x3d.LineSet()
LineSet1142.vertexCount = [2]
ColorRGBA1143 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1142.color = ColorRGBA1143
Coordinate1144 = x3d.Coordinate()
Coordinate1144.point = [(0.1924, 0.8472, -0.0534),(0.1951, 0.8226, 0.0246)]

LineSet1142.coord = Coordinate1144

Shape1141.geometry = LineSet1142

HAnimSegment1137.children.append(Shape1141)

HAnimJoint1136.children.append(HAnimSegment1137)
HAnimJoint1145 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_1")
HAnimJoint1145.name = "l_metacarpophalangeal_1"
HAnimJoint1145.center = [0.1951,0.8226,0.0246]
HAnimSegment1146 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_1")
HAnimSegment1146.name = "l_carpal_proximal_phalanx_1"
Transform1147 = x3d.Transform()
Transform1148 = x3d.Transform()
Shape1149 = x3d.Shape(USE="HAnimJointShape")

Transform1148.children.append(Shape1149)

Transform1147.children.append(Transform1148)

HAnimSegment1146.children.append(Transform1147)
Shape1150 = x3d.Shape()
LineSet1151 = x3d.LineSet()
LineSet1151.vertexCount = [2]
ColorRGBA1152 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1151.color = ColorRGBA1152
Coordinate1153 = x3d.Coordinate()
Coordinate1153.point = [(0.1951, 0.8226, 0.0246),(0.1955, 0.8159, 0.0464)]

LineSet1151.coord = Coordinate1153

Shape1150.geometry = LineSet1151

HAnimSegment1146.children.append(Shape1150)
HAnimSite1154 = x3d.HAnimSite(DEF="hanim_l_carpal_distal_phalanx_1_tip")
HAnimSite1154.name = "l_carpal_distal_phalanx_1_tip"
HAnimSite1154.translation = [0,1,0]
TouchSensor1155 = x3d.TouchSensor()
TouchSensor1155.description = "HAnimSite l_carpal_distal_phalanx_1_tip"

HAnimSite1154.children.append(TouchSensor1155)
Shape1156 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1154.children.append(Shape1156)

HAnimSegment1146.children.append(HAnimSite1154)

HAnimJoint1145.children.append(HAnimSegment1146)
HAnimJoint1157 = x3d.HAnimJoint(DEF="hanim_l_carpal_interphalangeal_1")
HAnimJoint1157.name = "l_carpal_interphalangeal_1"
HAnimJoint1157.center = [0.1955,0.8159,0.0464]

HAnimJoint1145.children.append(HAnimJoint1157)

HAnimJoint1136.children.append(HAnimJoint1145)

HAnimJoint1127.children.append(HAnimJoint1136)

HAnimJoint1106.children.append(HAnimJoint1127)
HAnimJoint1158 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_2")
HAnimJoint1158.name = "l_midcarpal_2"
HAnimJoint1158.center = [0,1,0]
HAnimSegment1159 = x3d.HAnimSegment(DEF="hanim_l_trapezoid")
HAnimSegment1159.name = "l_trapezoid"
Transform1160 = x3d.Transform()
Transform1161 = x3d.Transform()
Shape1162 = x3d.Shape(USE="HAnimJointShape")

Transform1161.children.append(Shape1162)

Transform1160.children.append(Transform1161)

HAnimSegment1159.children.append(Transform1160)
Shape1163 = x3d.Shape()
LineSet1164 = x3d.LineSet()
LineSet1164.vertexCount = [2]
ColorRGBA1165 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1164.color = ColorRGBA1165
Coordinate1166 = x3d.Coordinate()
Coordinate1166.point = [(0, 1, 0),(0.1983, 0.8024, -0.028)]

LineSet1164.coord = Coordinate1166

Shape1163.geometry = LineSet1164

HAnimSegment1159.children.append(Shape1163)
HAnimSite1167 = x3d.HAnimSite(DEF="hanim_l_metacarpal_phalanx_2_pt")
HAnimSite1167.name = "l_metacarpal_phalanx_2_pt"
HAnimSite1167.translation = [0.2009,0.8139,-0.0237]
TouchSensor1168 = x3d.TouchSensor()
TouchSensor1168.description = "HAnimSite l_metacarpal_phalanx_2_pt"

HAnimSite1167.children.append(TouchSensor1168)
Shape1169 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1167.children.append(Shape1169)

HAnimSegment1159.children.append(HAnimSite1167)

HAnimJoint1158.children.append(HAnimSegment1159)
HAnimJoint1170 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_2")
HAnimJoint1170.name = "l_carpometacarpal_2"
HAnimJoint1170.center = [0.1983,0.8024,-0.028]
HAnimSegment1171 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_2")
HAnimSegment1171.name = "l_metacarpal_2"
Transform1172 = x3d.Transform()
Transform1173 = x3d.Transform()
Shape1174 = x3d.Shape(USE="HAnimJointShape")

Transform1173.children.append(Shape1174)

Transform1172.children.append(Transform1173)

HAnimSegment1171.children.append(Transform1172)
Shape1175 = x3d.Shape()
LineSet1176 = x3d.LineSet()
LineSet1176.vertexCount = [2]
ColorRGBA1177 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1176.color = ColorRGBA1177
Coordinate1178 = x3d.Coordinate()
Coordinate1178.point = [(0.1983, 0.8024, -0.028),(0.1983, 0.7815, -0.028)]

LineSet1176.coord = Coordinate1178

Shape1175.geometry = LineSet1176

HAnimSegment1171.children.append(Shape1175)

HAnimJoint1170.children.append(HAnimSegment1171)
HAnimJoint1179 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_2")
HAnimJoint1179.name = "l_metacarpophalangeal_2"
HAnimJoint1179.center = [0.1983,0.7815,-0.028]
HAnimSegment1180 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_2")
HAnimSegment1180.name = "l_carpal_proximal_phalanx_2"
Transform1181 = x3d.Transform()
Transform1182 = x3d.Transform()
Shape1183 = x3d.Shape(USE="HAnimJointShape")

Transform1182.children.append(Shape1183)

Transform1181.children.append(Transform1182)

HAnimSegment1180.children.append(Transform1181)
Shape1184 = x3d.Shape()
LineSet1185 = x3d.LineSet()
LineSet1185.vertexCount = [2]
ColorRGBA1186 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1185.color = ColorRGBA1186
Coordinate1187 = x3d.Coordinate()
Coordinate1187.point = [(0.1983, 0.7815, -0.028),(0.2017, 0.7363, -0.0248)]

LineSet1185.coord = Coordinate1187

Shape1184.geometry = LineSet1185

HAnimSegment1180.children.append(Shape1184)

HAnimJoint1179.children.append(HAnimSegment1180)
HAnimJoint1188 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint1188.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint1188.center = [0.2017,0.7363,-0.0248]
HAnimSegment1189 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_2")
HAnimSegment1189.name = "l_carpal_middle_phalanx_2"
Transform1190 = x3d.Transform()
Transform1191 = x3d.Transform()
Shape1192 = x3d.Shape(USE="HAnimJointShape")

Transform1191.children.append(Shape1192)

Transform1190.children.append(Transform1191)

HAnimSegment1189.children.append(Transform1190)
Shape1193 = x3d.Shape()
LineSet1194 = x3d.LineSet()
LineSet1194.vertexCount = [2]
ColorRGBA1195 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1194.color = ColorRGBA1195
Coordinate1196 = x3d.Coordinate()
Coordinate1196.point = [(0.2017, 0.7363, -0.0248),(0.2028, 0.7139, -0.0236)]

LineSet1194.coord = Coordinate1196

Shape1193.geometry = LineSet1194

HAnimSegment1189.children.append(Shape1193)
HAnimSite1197 = x3d.HAnimSite(DEF="hanim_l_carpal_distal_phalanx_2_tip")
HAnimSite1197.name = "l_carpal_distal_phalanx_2_tip"
HAnimSite1197.translation = [0,1,0]
TouchSensor1198 = x3d.TouchSensor()
TouchSensor1198.description = "HAnimSite l_carpal_distal_phalanx_2_tip"

HAnimSite1197.children.append(TouchSensor1198)
Shape1199 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1197.children.append(Shape1199)

HAnimSegment1189.children.append(HAnimSite1197)
HAnimSite1200 = x3d.HAnimSite(DEF="hanim_l_dactylion_pt")
HAnimSite1200.name = "l_dactylion_pt"
HAnimSite1200.translation = [0.2056,0.6743,-0.0482]
TouchSensor1201 = x3d.TouchSensor()
TouchSensor1201.description = "HAnimSite l_dactylion_pt"

HAnimSite1200.children.append(TouchSensor1201)
Shape1202 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1200.children.append(Shape1202)

HAnimSegment1189.children.append(HAnimSite1200)

HAnimJoint1188.children.append(HAnimSegment1189)
HAnimJoint1203 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint1203.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint1203.center = [0.2028,0.7139,-0.0236]

HAnimJoint1188.children.append(HAnimJoint1203)

HAnimJoint1179.children.append(HAnimJoint1188)

HAnimJoint1170.children.append(HAnimJoint1179)

HAnimJoint1158.children.append(HAnimJoint1170)

HAnimJoint1106.children.append(HAnimJoint1158)
HAnimJoint1204 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_3")
HAnimJoint1204.name = "l_midcarpal_3"
HAnimJoint1204.center = [0,1,0]
HAnimSegment1205 = x3d.HAnimSegment(DEF="hanim_l_capitate")
HAnimSegment1205.name = "l_capitate"
Transform1206 = x3d.Transform()
Transform1207 = x3d.Transform()
Shape1208 = x3d.Shape(USE="HAnimJointShape")

Transform1207.children.append(Shape1208)

Transform1206.children.append(Transform1207)

HAnimSegment1205.children.append(Transform1206)
Shape1209 = x3d.Shape()
LineSet1210 = x3d.LineSet()
LineSet1210.vertexCount = [2]
ColorRGBA1211 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1210.color = ColorRGBA1211
Coordinate1212 = x3d.Coordinate()
Coordinate1212.point = [(0, 1, 0),(0.1987, 0.8029, -0.053)]

LineSet1210.coord = Coordinate1212

Shape1209.geometry = LineSet1210

HAnimSegment1205.children.append(Shape1209)
HAnimSite1213 = x3d.HAnimSite(DEF="hanim_l_metacarpal_phalanx_3_pt")
HAnimSite1213.name = "l_metacarpal_phalanx_3_pt"
HAnimSite1213.translation = [0,1,0]
TouchSensor1214 = x3d.TouchSensor()
TouchSensor1214.description = "HAnimSite l_metacarpal_phalanx_3_pt"

HAnimSite1213.children.append(TouchSensor1214)
Shape1215 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1213.children.append(Shape1215)

HAnimSegment1205.children.append(HAnimSite1213)

HAnimJoint1204.children.append(HAnimSegment1205)
HAnimJoint1216 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_3")
HAnimJoint1216.name = "l_carpometacarpal_3"
HAnimJoint1216.center = [0.1987,0.8029,-0.053]
HAnimSegment1217 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_3")
HAnimSegment1217.name = "l_metacarpal_3"
Transform1218 = x3d.Transform()
Transform1219 = x3d.Transform()
Shape1220 = x3d.Shape(USE="HAnimJointShape")

Transform1219.children.append(Shape1220)

Transform1218.children.append(Transform1219)

HAnimSegment1217.children.append(Transform1218)
Shape1221 = x3d.Shape()
LineSet1222 = x3d.LineSet()
LineSet1222.vertexCount = [2]
ColorRGBA1223 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1222.color = ColorRGBA1223
Coordinate1224 = x3d.Coordinate()
Coordinate1224.point = [(0.1987, 0.8029, -0.053),(0.1987, 0.7818, -0.053)]

LineSet1222.coord = Coordinate1224

Shape1221.geometry = LineSet1222

HAnimSegment1217.children.append(Shape1221)

HAnimJoint1216.children.append(HAnimSegment1217)
HAnimJoint1225 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_3")
HAnimJoint1225.name = "l_metacarpophalangeal_3"
HAnimJoint1225.center = [0.1987,0.7818,-0.053]
HAnimSegment1226 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_3")
HAnimSegment1226.name = "l_carpal_proximal_phalanx_3"
Transform1227 = x3d.Transform()
Transform1228 = x3d.Transform()
Shape1229 = x3d.Shape(USE="HAnimJointShape")

Transform1228.children.append(Shape1229)

Transform1227.children.append(Transform1228)

HAnimSegment1226.children.append(Transform1227)
Shape1230 = x3d.Shape()
LineSet1231 = x3d.LineSet()
LineSet1231.vertexCount = [2]
ColorRGBA1232 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1231.color = ColorRGBA1232
Coordinate1233 = x3d.Coordinate()
Coordinate1233.point = [(0.1987, 0.7818, -0.053),(0.2013, 0.7273, -0.0503)]

LineSet1231.coord = Coordinate1233

Shape1230.geometry = LineSet1231

HAnimSegment1226.children.append(Shape1230)

HAnimJoint1225.children.append(HAnimSegment1226)
HAnimJoint1234 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint1234.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint1234.center = [0.2013,0.7273,-0.0503]
HAnimSegment1235 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_3")
HAnimSegment1235.name = "l_carpal_middle_phalanx_3"
Transform1236 = x3d.Transform()
Transform1237 = x3d.Transform()
Shape1238 = x3d.Shape(USE="HAnimJointShape")

Transform1237.children.append(Shape1238)

Transform1236.children.append(Transform1237)

HAnimSegment1235.children.append(Transform1236)
Shape1239 = x3d.Shape()
LineSet1240 = x3d.LineSet()
LineSet1240.vertexCount = [2]
ColorRGBA1241 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1240.color = ColorRGBA1241
Coordinate1242 = x3d.Coordinate()
Coordinate1242.point = [(0.2013, 0.7273, -0.0503),(0.2026, 0.7011, -0.0494)]

LineSet1240.coord = Coordinate1242

Shape1239.geometry = LineSet1240

HAnimSegment1235.children.append(Shape1239)
HAnimSite1243 = x3d.HAnimSite(DEF="hanim_l_carpal_distal_phalanx_3_tip")
HAnimSite1243.name = "l_carpal_distal_phalanx_3_tip"
HAnimSite1243.translation = [0,1,0]
TouchSensor1244 = x3d.TouchSensor()
TouchSensor1244.description = "HAnimSite l_carpal_distal_phalanx_3_tip"

HAnimSite1243.children.append(TouchSensor1244)
Shape1245 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1243.children.append(Shape1245)

HAnimSegment1235.children.append(HAnimSite1243)

HAnimJoint1234.children.append(HAnimSegment1235)
HAnimJoint1246 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint1246.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint1246.center = [0.2026,0.7011,-0.0494]

HAnimJoint1234.children.append(HAnimJoint1246)

HAnimJoint1225.children.append(HAnimJoint1234)

HAnimJoint1216.children.append(HAnimJoint1225)

HAnimJoint1204.children.append(HAnimJoint1216)

HAnimJoint1106.children.append(HAnimJoint1204)
HAnimJoint1247 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_4_5")
HAnimJoint1247.name = "l_midcarpal_4_5"
HAnimJoint1247.center = [0,1,0]
HAnimSegment1248 = x3d.HAnimSegment(DEF="hanim_l_hamate")
HAnimSegment1248.name = "l_hamate"
Transform1249 = x3d.Transform()
Transform1250 = x3d.Transform()
Shape1251 = x3d.Shape(USE="HAnimJointShape")

Transform1250.children.append(Shape1251)

Transform1249.children.append(Transform1250)

HAnimSegment1248.children.append(Transform1249)
Shape1252 = x3d.Shape()
LineSet1253 = x3d.LineSet()
LineSet1253.vertexCount = [2]
ColorRGBA1254 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1253.color = ColorRGBA1254
Coordinate1255 = x3d.Coordinate()
Coordinate1255.point = [(0, 1, 0),(0.1956, 0.8019, -0.0794)]

LineSet1253.coord = Coordinate1255

Shape1252.geometry = LineSet1253

HAnimSegment1248.children.append(Shape1252)
Shape1256 = x3d.Shape()
LineSet1257 = x3d.LineSet()
LineSet1257.vertexCount = [2]
ColorRGBA1258 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1257.color = ColorRGBA1258
Coordinate1259 = x3d.Coordinate()
Coordinate1259.point = [(0, 1, 0),(0.1925, 0.8066, -0.1036)]

LineSet1257.coord = Coordinate1259

Shape1256.geometry = LineSet1257

HAnimSegment1248.children.append(Shape1256)
HAnimSite1260 = x3d.HAnimSite(DEF="hanim_l_metacarpal_phalanx_5_pt")
HAnimSite1260.name = "l_metacarpal_phalanx_5_pt"
HAnimSite1260.translation = [0.1929,0.786,-0.1122]
TouchSensor1261 = x3d.TouchSensor()
TouchSensor1261.description = "HAnimSite l_metacarpal_phalanx_5_pt"

HAnimSite1260.children.append(TouchSensor1261)
Shape1262 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1260.children.append(Shape1262)

HAnimSegment1248.children.append(HAnimSite1260)

HAnimJoint1247.children.append(HAnimSegment1248)
HAnimJoint1263 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_4")
HAnimJoint1263.name = "l_carpometacarpal_4"
HAnimJoint1263.center = [0.1956,0.8019,-0.0794]
HAnimSegment1264 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_4")
HAnimSegment1264.name = "l_metacarpal_4"
Transform1265 = x3d.Transform()
Transform1266 = x3d.Transform()
Shape1267 = x3d.Shape(USE="HAnimJointShape")

Transform1266.children.append(Shape1267)

Transform1265.children.append(Transform1266)

HAnimSegment1264.children.append(Transform1265)
Shape1268 = x3d.Shape()
LineSet1269 = x3d.LineSet()
LineSet1269.vertexCount = [2]
ColorRGBA1270 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1269.color = ColorRGBA1270
Coordinate1271 = x3d.Coordinate()
Coordinate1271.point = [(0.1956, 0.8019, -0.0794),(0.1956, 0.7815, -0.0794)]

LineSet1269.coord = Coordinate1271

Shape1268.geometry = LineSet1269

HAnimSegment1264.children.append(Shape1268)

HAnimJoint1263.children.append(HAnimSegment1264)
HAnimJoint1272 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_4")
HAnimJoint1272.name = "l_metacarpophalangeal_4"
HAnimJoint1272.center = [0.1956,0.7815,-0.0794]
HAnimSegment1273 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_4")
HAnimSegment1273.name = "l_carpal_proximal_phalanx_4"
Transform1274 = x3d.Transform()
Transform1275 = x3d.Transform()
Shape1276 = x3d.Shape(USE="HAnimJointShape")

Transform1275.children.append(Shape1276)

Transform1274.children.append(Transform1275)

HAnimSegment1273.children.append(Transform1274)
Shape1277 = x3d.Shape()
LineSet1278 = x3d.LineSet()
LineSet1278.vertexCount = [2]
ColorRGBA1279 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1278.color = ColorRGBA1279
Coordinate1280 = x3d.Coordinate()
Coordinate1280.point = [(0.1956, 0.7815, -0.0794),(0.1973, 0.7287, -0.0777)]

LineSet1278.coord = Coordinate1280

Shape1277.geometry = LineSet1278

HAnimSegment1273.children.append(Shape1277)

HAnimJoint1272.children.append(HAnimSegment1273)
HAnimJoint1281 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint1281.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint1281.center = [0.1973,0.7287,-0.0777]
HAnimSegment1282 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_4")
HAnimSegment1282.name = "l_carpal_middle_phalanx_4"
Transform1283 = x3d.Transform()
Transform1284 = x3d.Transform()
Shape1285 = x3d.Shape(USE="HAnimJointShape")

Transform1284.children.append(Shape1285)

Transform1283.children.append(Transform1284)

HAnimSegment1282.children.append(Transform1283)
Shape1286 = x3d.Shape()
LineSet1287 = x3d.LineSet()
LineSet1287.vertexCount = [2]
ColorRGBA1288 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1287.color = ColorRGBA1288
Coordinate1289 = x3d.Coordinate()
Coordinate1289.point = [(0.1973, 0.7287, -0.0777),(0.1983, 0.7045, -0.0767)]

LineSet1287.coord = Coordinate1289

Shape1286.geometry = LineSet1287

HAnimSegment1282.children.append(Shape1286)
HAnimSite1290 = x3d.HAnimSite(DEF="hanim_l_carpal_distal_phalanx_4_tip")
HAnimSite1290.name = "l_carpal_distal_phalanx_4_tip"
HAnimSite1290.translation = [0,1,0]
TouchSensor1291 = x3d.TouchSensor()
TouchSensor1291.description = "HAnimSite l_carpal_distal_phalanx_4_tip"

HAnimSite1290.children.append(TouchSensor1291)
Shape1292 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1290.children.append(Shape1292)

HAnimSegment1282.children.append(HAnimSite1290)

HAnimJoint1281.children.append(HAnimSegment1282)
HAnimJoint1293 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint1293.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint1293.center = [0.1983,0.7045,-0.0767]

HAnimJoint1281.children.append(HAnimJoint1293)

HAnimJoint1272.children.append(HAnimJoint1281)

HAnimJoint1263.children.append(HAnimJoint1272)

HAnimJoint1247.children.append(HAnimJoint1263)
HAnimJoint1294 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_5")
HAnimJoint1294.name = "l_carpometacarpal_5"
HAnimJoint1294.center = [0.1925,0.8066,-0.1036]
HAnimSegment1295 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_5")
HAnimSegment1295.name = "l_metacarpal_5"
Transform1296 = x3d.Transform()
Transform1297 = x3d.Transform()
Shape1298 = x3d.Shape(USE="HAnimJointShape")

Transform1297.children.append(Shape1298)

Transform1296.children.append(Transform1297)

HAnimSegment1295.children.append(Transform1296)
Shape1299 = x3d.Shape()
LineSet1300 = x3d.LineSet()
LineSet1300.vertexCount = [2]
ColorRGBA1301 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1300.color = ColorRGBA1301
Coordinate1302 = x3d.Coordinate()
Coordinate1302.point = [(0.1925, 0.8066, -0.1036),(0.1925, 0.7866, -0.1036)]

LineSet1300.coord = Coordinate1302

Shape1299.geometry = LineSet1300

HAnimSegment1295.children.append(Shape1299)

HAnimJoint1294.children.append(HAnimSegment1295)
HAnimJoint1303 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_5")
HAnimJoint1303.name = "l_metacarpophalangeal_5"
HAnimJoint1303.center = [0.1925,0.7866,-0.1036]
HAnimSegment1304 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_5")
HAnimSegment1304.name = "l_carpal_proximal_phalanx_5"
Transform1305 = x3d.Transform()
Transform1306 = x3d.Transform()
Shape1307 = x3d.Shape(USE="HAnimJointShape")

Transform1306.children.append(Shape1307)

Transform1305.children.append(Transform1306)

HAnimSegment1304.children.append(Transform1305)
Shape1308 = x3d.Shape()
LineSet1309 = x3d.LineSet()
LineSet1309.vertexCount = [2]
ColorRGBA1310 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1309.color = ColorRGBA1310
Coordinate1311 = x3d.Coordinate()
Coordinate1311.point = [(0.1925, 0.7866, -0.1036),(0.1938, 0.7452, -0.1024)]

LineSet1309.coord = Coordinate1311

Shape1308.geometry = LineSet1309

HAnimSegment1304.children.append(Shape1308)

HAnimJoint1303.children.append(HAnimSegment1304)
HAnimJoint1312 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint1312.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint1312.center = [0.1938,0.7452,-0.1024]
HAnimSegment1313 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_5")
HAnimSegment1313.name = "l_carpal_middle_phalanx_5"
Transform1314 = x3d.Transform()
Transform1315 = x3d.Transform()
Shape1316 = x3d.Shape(USE="HAnimJointShape")

Transform1315.children.append(Shape1316)

Transform1314.children.append(Transform1315)

HAnimSegment1313.children.append(Transform1314)
Shape1317 = x3d.Shape()
LineSet1318 = x3d.LineSet()
LineSet1318.vertexCount = [2]
ColorRGBA1319 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1318.color = ColorRGBA1319
Coordinate1320 = x3d.Coordinate()
Coordinate1320.point = [(0.1938, 0.7452, -0.1024),(0.1948, 0.7277, -0.1017)]

LineSet1318.coord = Coordinate1320

Shape1317.geometry = LineSet1318

HAnimSegment1313.children.append(Shape1317)
HAnimSite1321 = x3d.HAnimSite(DEF="hanim_l_carpal_distal_phalanx_5_tip")
HAnimSite1321.name = "l_carpal_distal_phalanx_5_tip"
HAnimSite1321.translation = [0,1,0]
TouchSensor1322 = x3d.TouchSensor()
TouchSensor1322.description = "HAnimSite l_carpal_distal_phalanx_5_tip"

HAnimSite1321.children.append(TouchSensor1322)
Shape1323 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1321.children.append(Shape1323)

HAnimSegment1313.children.append(HAnimSite1321)

HAnimJoint1312.children.append(HAnimSegment1313)
HAnimJoint1324 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint1324.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint1324.center = [0.1948,0.7277,-0.1017]

HAnimJoint1312.children.append(HAnimJoint1324)

HAnimJoint1303.children.append(HAnimJoint1312)

HAnimJoint1294.children.append(HAnimJoint1303)

HAnimJoint1247.children.append(HAnimJoint1294)

HAnimJoint1106.children.append(HAnimJoint1247)

HAnimJoint1094.children.append(HAnimJoint1106)

HAnimJoint1073.children.append(HAnimJoint1094)

HAnimJoint1058.children.append(HAnimJoint1073)

HAnimJoint1049.children.append(HAnimJoint1058)

HAnimJoint844.children.append(HAnimJoint1049)
HAnimJoint1325 = x3d.HAnimJoint(DEF="hanim_r_sternoclavicular")
HAnimJoint1325.name = "r_sternoclavicular"
HAnimJoint1325.center = [-0.0694,1.46,-0.033]
HAnimSegment1326 = x3d.HAnimSegment(DEF="hanim_r_clavicle")
HAnimSegment1326.name = "r_clavicle"
Transform1327 = x3d.Transform()
Transform1328 = x3d.Transform()
Shape1329 = x3d.Shape(USE="HAnimJointShape")

Transform1328.children.append(Shape1329)

Transform1327.children.append(Transform1328)

HAnimSegment1326.children.append(Transform1327)
Shape1330 = x3d.Shape()
LineSet1331 = x3d.LineSet()
LineSet1331.vertexCount = [2]
ColorRGBA1332 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1331.color = ColorRGBA1332
Coordinate1333 = x3d.Coordinate()
Coordinate1333.point = [(-0.0694, 1.46, -0.033),(-0.0836, 1.4281, -0.0401)]

LineSet1331.coord = Coordinate1333

Shape1330.geometry = LineSet1331

HAnimSegment1326.children.append(Shape1330)

HAnimJoint1325.children.append(HAnimSegment1326)
HAnimJoint1334 = x3d.HAnimJoint(DEF="hanim_r_acromioclavicular")
HAnimJoint1334.name = "r_acromioclavicular"
HAnimJoint1334.center = [-0.0836,1.4281,-0.0401]
HAnimSegment1335 = x3d.HAnimSegment(DEF="hanim_r_scapula")
HAnimSegment1335.name = "r_scapula"
Transform1336 = x3d.Transform()
Transform1337 = x3d.Transform()
Shape1338 = x3d.Shape(USE="HAnimJointShape")

Transform1337.children.append(Shape1338)

Transform1336.children.append(Transform1337)

HAnimSegment1335.children.append(Transform1336)
Shape1339 = x3d.Shape()
LineSet1340 = x3d.LineSet()
LineSet1340.vertexCount = [2]
ColorRGBA1341 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1340.color = ColorRGBA1341
Coordinate1342 = x3d.Coordinate()
Coordinate1342.point = [(-0.0836, 1.4281, -0.0401),(-0.1907, 1.4407, -0.0325)]

LineSet1340.coord = Coordinate1342

Shape1339.geometry = LineSet1340

HAnimSegment1335.children.append(Shape1339)
HAnimSite1343 = x3d.HAnimSite(DEF="hanim_r_bideltoid_pt")
HAnimSite1343.name = "r_bideltoid_pt"
HAnimSite1343.translation = [0,1,0]
TouchSensor1344 = x3d.TouchSensor()
TouchSensor1344.description = "HAnimSite r_bideltoid_pt"

HAnimSite1343.children.append(TouchSensor1344)
Shape1345 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1343.children.append(Shape1345)

HAnimSegment1335.children.append(HAnimSite1343)
HAnimSite1346 = x3d.HAnimSite(DEF="hanim_r_humeral_lateral_epicondyles_pt")
HAnimSite1346.name = "r_humeral_lateral_epicondyles_pt"
HAnimSite1346.translation = [-0.2224,1.1517,-0.1033]
TouchSensor1347 = x3d.TouchSensor()
TouchSensor1347.description = "HAnimSite r_humeral_lateral_epicondyles_pt"

HAnimSite1346.children.append(TouchSensor1347)
Shape1348 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1346.children.append(Shape1348)

HAnimSegment1335.children.append(HAnimSite1346)

HAnimJoint1334.children.append(HAnimSegment1335)
HAnimJoint1349 = x3d.HAnimJoint(DEF="hanim_r_shoulder")
HAnimJoint1349.name = "r_shoulder"
HAnimJoint1349.center = [-0.1907,1.4407,-0.0325]
HAnimSegment1350 = x3d.HAnimSegment(DEF="hanim_r_upperarm")
HAnimSegment1350.name = "r_upperarm"
Transform1351 = x3d.Transform()
Transform1352 = x3d.Transform()
Shape1353 = x3d.Shape(USE="HAnimJointShape")

Transform1352.children.append(Shape1353)

Transform1351.children.append(Transform1352)

HAnimSegment1350.children.append(Transform1351)
Shape1354 = x3d.Shape()
LineSet1355 = x3d.LineSet()
LineSet1355.vertexCount = [2]
ColorRGBA1356 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1355.color = ColorRGBA1356
Coordinate1357 = x3d.Coordinate()
Coordinate1357.point = [(-0.1907, 1.4407, -0.0325),(-0.1949, 1.1388, -0.062)]

LineSet1355.coord = Coordinate1357

Shape1354.geometry = LineSet1355

HAnimSegment1350.children.append(Shape1354)
HAnimSite1358 = x3d.HAnimSite(DEF="hanim_r_humeral_medial_epicondyles_pt")
HAnimSite1358.name = "r_humeral_medial_epicondyles_pt"
HAnimSite1358.translation = [-0.168,1.1298,-0.1062]
TouchSensor1359 = x3d.TouchSensor()
TouchSensor1359.description = "HAnimSite r_humeral_medial_epicondyles_pt"

HAnimSite1358.children.append(TouchSensor1359)
Shape1360 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1358.children.append(Shape1360)

HAnimSegment1350.children.append(HAnimSite1358)
HAnimSite1361 = x3d.HAnimSite(DEF="hanim_r_olecranon_pt")
HAnimSite1361.name = "r_olecranon_pt"
HAnimSite1361.translation = [-0.1907,1.1405,-0.1065]
TouchSensor1362 = x3d.TouchSensor()
TouchSensor1362.description = "HAnimSite r_olecranon_pt"

HAnimSite1361.children.append(TouchSensor1362)
Shape1363 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1361.children.append(Shape1363)

HAnimSegment1350.children.append(HAnimSite1361)
HAnimSite1364 = x3d.HAnimSite(DEF="hanim_r_radial_styloid_pt")
HAnimSite1364.name = "r_radial_styloid_pt"
HAnimSite1364.translation = [-0.1884,0.8676,-0.036]
TouchSensor1365 = x3d.TouchSensor()
TouchSensor1365.description = "HAnimSite r_radial_styloid_pt"

HAnimSite1364.children.append(TouchSensor1365)
Shape1366 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1364.children.append(Shape1366)

HAnimSegment1350.children.append(HAnimSite1364)
HAnimSite1367 = x3d.HAnimSite(DEF="hanim_r_radiale_pt")
HAnimSite1367.name = "r_radiale_pt"
HAnimSite1367.translation = [-0.213,1.1305,-0.1091]
TouchSensor1368 = x3d.TouchSensor()
TouchSensor1368.description = "HAnimSite r_radiale_pt"

HAnimSite1367.children.append(TouchSensor1368)
Shape1369 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1367.children.append(Shape1369)

HAnimSegment1350.children.append(HAnimSite1367)

HAnimJoint1349.children.append(HAnimSegment1350)
HAnimJoint1370 = x3d.HAnimJoint(DEF="hanim_r_elbow")
HAnimJoint1370.name = "r_elbow"
HAnimJoint1370.center = [-0.1949,1.1388,-0.062]
HAnimSegment1371 = x3d.HAnimSegment(DEF="hanim_r_forearm")
HAnimSegment1371.name = "r_forearm"
Transform1372 = x3d.Transform()
Transform1373 = x3d.Transform()
Shape1374 = x3d.Shape(USE="HAnimJointShape")

Transform1373.children.append(Shape1374)

Transform1372.children.append(Transform1373)

HAnimSegment1371.children.append(Transform1372)
Shape1375 = x3d.Shape()
LineSet1376 = x3d.LineSet()
LineSet1376.vertexCount = [2]
ColorRGBA1377 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1376.color = ColorRGBA1377
Coordinate1378 = x3d.Coordinate()
Coordinate1378.point = [(-0.1949, 1.1388, -0.062),(-0.1959, 0.8694, -0.0521)]

LineSet1376.coord = Coordinate1378

Shape1375.geometry = LineSet1376

HAnimSegment1371.children.append(Shape1375)
HAnimSite1379 = x3d.HAnimSite(DEF="hanim_r_ulnar_styloid_pt")
HAnimSite1379.name = "r_ulnar_styloid_pt"
HAnimSite1379.translation = [-0.2117,0.8562,-0.0584]
TouchSensor1380 = x3d.TouchSensor()
TouchSensor1380.description = "HAnimSite r_ulnar_styloid_pt"

HAnimSite1379.children.append(TouchSensor1380)
Shape1381 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1379.children.append(Shape1381)

HAnimSegment1371.children.append(HAnimSite1379)

HAnimJoint1370.children.append(HAnimSegment1371)
HAnimJoint1382 = x3d.HAnimJoint(DEF="hanim_r_radiocarpal")
HAnimJoint1382.name = "r_radiocarpal"
HAnimJoint1382.center = [-0.1959,0.8694,-0.0521]
HAnimSegment1383 = x3d.HAnimSegment(DEF="hanim_r_carpal")
HAnimSegment1383.name = "r_carpal"
Transform1384 = x3d.Transform()
Transform1384.translation = [-0.2,0.85,-0.05]
Transform1384.rotation = [0,0,1,-3.14]
Transform1384.scale = [0.2,0.2,0.2]
Transform1385 = x3d.Transform()
Transform1385.rotation = [0,1,0,1.57]
Shape1386 = x3d.Shape(USE="HAnimJointShape")

Transform1385.children.append(Shape1386)

Transform1384.children.append(Transform1385)

HAnimSegment1383.children.append(Transform1384)
Shape1387 = x3d.Shape()
LineSet1388 = x3d.LineSet()
LineSet1388.vertexCount = [2]
ColorRGBA1389 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1388.color = ColorRGBA1389
Coordinate1390 = x3d.Coordinate()
Coordinate1390.point = [(-0.1959, 0.8694, -0.0521),(0, 1, 0)]

LineSet1388.coord = Coordinate1390

Shape1387.geometry = LineSet1388

HAnimSegment1383.children.append(Shape1387)
Shape1391 = x3d.Shape()
LineSet1392 = x3d.LineSet()
LineSet1392.vertexCount = [2]
ColorRGBA1393 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1392.color = ColorRGBA1393
Coordinate1394 = x3d.Coordinate()
Coordinate1394.point = [(-0.1959, 0.8694, -0.0521),(0, 1, 0)]

LineSet1392.coord = Coordinate1394

Shape1391.geometry = LineSet1392

HAnimSegment1383.children.append(Shape1391)
Shape1395 = x3d.Shape()
LineSet1396 = x3d.LineSet()
LineSet1396.vertexCount = [2]
ColorRGBA1397 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1396.color = ColorRGBA1397
Coordinate1398 = x3d.Coordinate()
Coordinate1398.point = [(-0.1959, 0.8694, -0.0521),(0, 1, 0)]

LineSet1396.coord = Coordinate1398

Shape1395.geometry = LineSet1396

HAnimSegment1383.children.append(Shape1395)
Shape1399 = x3d.Shape()
LineSet1400 = x3d.LineSet()
LineSet1400.vertexCount = [2]
ColorRGBA1401 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1400.color = ColorRGBA1401
Coordinate1402 = x3d.Coordinate()
Coordinate1402.point = [(-0.1959, 0.8694, -0.0521),(0, 1, 0)]

LineSet1400.coord = Coordinate1402

Shape1399.geometry = LineSet1400

HAnimSegment1383.children.append(Shape1399)

HAnimJoint1382.children.append(HAnimSegment1383)
HAnimJoint1403 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_1")
HAnimJoint1403.name = "r_midcarpal_1"
HAnimJoint1403.center = [0,1,0]
HAnimSegment1404 = x3d.HAnimSegment(DEF="hanim_r_trapezium")
HAnimSegment1404.name = "r_trapezium"
Transform1405 = x3d.Transform()
Transform1406 = x3d.Transform()
Shape1407 = x3d.Shape(USE="HAnimJointShape")

Transform1406.children.append(Shape1407)

Transform1405.children.append(Transform1406)

HAnimSegment1404.children.append(Transform1405)
Shape1408 = x3d.Shape()
LineSet1409 = x3d.LineSet()
LineSet1409.vertexCount = [2]
ColorRGBA1410 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1409.color = ColorRGBA1410
Coordinate1411 = x3d.Coordinate()
Coordinate1411.point = [(0, 1, 0),(-0.1899, 0.8502, -0.0473)]

LineSet1409.coord = Coordinate1411

Shape1408.geometry = LineSet1409

HAnimSegment1404.children.append(Shape1408)

HAnimJoint1403.children.append(HAnimSegment1404)
HAnimJoint1412 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_1")
HAnimJoint1412.name = "r_carpometacarpal_1"
HAnimJoint1412.center = [-0.1899,0.8502,-0.0473]
HAnimSegment1413 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_1")
HAnimSegment1413.name = "r_metacarpal_1"
Transform1414 = x3d.Transform()
Transform1415 = x3d.Transform()
Shape1416 = x3d.Shape(USE="HAnimJointShape")

Transform1415.children.append(Shape1416)

Transform1414.children.append(Transform1415)

HAnimSegment1413.children.append(Transform1414)
Shape1417 = x3d.Shape()
LineSet1418 = x3d.LineSet()
LineSet1418.vertexCount = [2]
ColorRGBA1419 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1418.color = ColorRGBA1419
Coordinate1420 = x3d.Coordinate()
Coordinate1420.point = [(-0.1899, 0.8502, -0.0473),(-0.1874, 0.8256, 0.0306)]

LineSet1418.coord = Coordinate1420

Shape1417.geometry = LineSet1418

HAnimSegment1413.children.append(Shape1417)

HAnimJoint1412.children.append(HAnimSegment1413)
HAnimJoint1421 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_1")
HAnimJoint1421.name = "r_metacarpophalangeal_1"
HAnimJoint1421.center = [-0.1874,0.8256,0.0306]
HAnimSegment1422 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_1")
HAnimSegment1422.name = "r_carpal_proximal_phalanx_1"
Transform1423 = x3d.Transform()
Transform1424 = x3d.Transform()
Shape1425 = x3d.Shape(USE="HAnimJointShape")

Transform1424.children.append(Shape1425)

Transform1423.children.append(Transform1424)

HAnimSegment1422.children.append(Transform1423)
Shape1426 = x3d.Shape()
LineSet1427 = x3d.LineSet()
LineSet1427.vertexCount = [2]
ColorRGBA1428 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1427.color = ColorRGBA1428
Coordinate1429 = x3d.Coordinate()
Coordinate1429.point = [(-0.1874, 0.8256, 0.0306),(-0.1864, 0.819, 0.0506)]

LineSet1427.coord = Coordinate1429

Shape1426.geometry = LineSet1427

HAnimSegment1422.children.append(Shape1426)
HAnimSite1430 = x3d.HAnimSite(DEF="hanim_r_carpal_distal_phalanx_1_tip")
HAnimSite1430.name = "r_carpal_distal_phalanx_1_tip"
HAnimSite1430.translation = [-0.35,0.4,0]
TouchSensor1431 = x3d.TouchSensor()
TouchSensor1431.description = "HAnimSite r_carpal_distal_phalanx_1_tip"

HAnimSite1430.children.append(TouchSensor1431)
Shape1432 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1430.children.append(Shape1432)

HAnimSegment1422.children.append(HAnimSite1430)

HAnimJoint1421.children.append(HAnimSegment1422)
HAnimJoint1433 = x3d.HAnimJoint(DEF="hanim_r_carpal_interphalangeal_1")
HAnimJoint1433.name = "r_carpal_interphalangeal_1"
HAnimJoint1433.center = [-0.1864,0.819,0.0506]

HAnimJoint1421.children.append(HAnimJoint1433)

HAnimJoint1412.children.append(HAnimJoint1421)

HAnimJoint1403.children.append(HAnimJoint1412)

HAnimJoint1382.children.append(HAnimJoint1403)
HAnimJoint1434 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_2")
HAnimJoint1434.name = "r_midcarpal_2"
HAnimJoint1434.center = [0,1,0]
HAnimSegment1435 = x3d.HAnimSegment(DEF="hanim_r_trapezoid")
HAnimSegment1435.name = "r_trapezoid"
Transform1436 = x3d.Transform()
Transform1437 = x3d.Transform()
Shape1438 = x3d.Shape(USE="HAnimJointShape")

Transform1437.children.append(Shape1438)

Transform1436.children.append(Transform1437)

HAnimSegment1435.children.append(Transform1436)
Shape1439 = x3d.Shape()
LineSet1440 = x3d.LineSet()
LineSet1440.vertexCount = [2]
ColorRGBA1441 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1440.color = ColorRGBA1441
Coordinate1442 = x3d.Coordinate()
Coordinate1442.point = [(0, 1, 0),(-0.1961, 0.8055, -0.0218)]

LineSet1440.coord = Coordinate1442

Shape1439.geometry = LineSet1440

HAnimSegment1435.children.append(Shape1439)
HAnimSite1443 = x3d.HAnimSite(DEF="hanim_r_metacarpal_phalanx_2_pt")
HAnimSite1443.name = "r_metacarpal_phalanx_2_pt"
HAnimSite1443.translation = [-0.1977,0.8169,-0.0177]
TouchSensor1444 = x3d.TouchSensor()
TouchSensor1444.description = "HAnimSite r_metacarpal_phalanx_2_pt"

HAnimSite1443.children.append(TouchSensor1444)
Shape1445 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1443.children.append(Shape1445)

HAnimSegment1435.children.append(HAnimSite1443)

HAnimJoint1434.children.append(HAnimSegment1435)
HAnimJoint1446 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_2")
HAnimJoint1446.name = "r_carpometacarpal_2"
HAnimJoint1446.center = [-0.1961,0.8055,-0.0218]
HAnimSegment1447 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_2")
HAnimSegment1447.name = "r_metacarpal_2"
Transform1448 = x3d.Transform()
Transform1449 = x3d.Transform()
Shape1450 = x3d.Shape(USE="HAnimJointShape")

Transform1449.children.append(Shape1450)

Transform1448.children.append(Transform1449)

HAnimSegment1447.children.append(Transform1448)
Shape1451 = x3d.Shape()
LineSet1452 = x3d.LineSet()
LineSet1452.vertexCount = [2]
ColorRGBA1453 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1452.color = ColorRGBA1453
Coordinate1454 = x3d.Coordinate()
Coordinate1454.point = [(-0.1961, 0.8055, -0.0218),(-0.1961, 0.7846, -0.0218)]

LineSet1452.coord = Coordinate1454

Shape1451.geometry = LineSet1452

HAnimSegment1447.children.append(Shape1451)

HAnimJoint1446.children.append(HAnimSegment1447)
HAnimJoint1455 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_2")
HAnimJoint1455.name = "r_metacarpophalangeal_2"
HAnimJoint1455.center = [-0.1961,0.7846,-0.0218]
HAnimSegment1456 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_2")
HAnimSegment1456.name = "r_carpal_proximal_phalanx_2"
Transform1457 = x3d.Transform()
Transform1458 = x3d.Transform()
Shape1459 = x3d.Shape(USE="HAnimJointShape")

Transform1458.children.append(Shape1459)

Transform1457.children.append(Transform1458)

HAnimSegment1456.children.append(Transform1457)
Shape1460 = x3d.Shape()
LineSet1461 = x3d.LineSet()
LineSet1461.vertexCount = [2]
ColorRGBA1462 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1461.color = ColorRGBA1462
Coordinate1463 = x3d.Coordinate()
Coordinate1463.point = [(-0.1961, 0.7846, -0.0218),(-0.1954, 0.7393, -0.0185)]

LineSet1461.coord = Coordinate1463

Shape1460.geometry = LineSet1461

HAnimSegment1456.children.append(Shape1460)

HAnimJoint1455.children.append(HAnimSegment1456)
HAnimJoint1464 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint1464.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint1464.center = [-0.1954,0.7393,-0.0185]
HAnimSegment1465 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_2")
HAnimSegment1465.name = "r_carpal_middle_phalanx_2"
Transform1466 = x3d.Transform()
Transform1467 = x3d.Transform()
Shape1468 = x3d.Shape(USE="HAnimJointShape")

Transform1467.children.append(Shape1468)

Transform1466.children.append(Transform1467)

HAnimSegment1465.children.append(Transform1466)
Shape1469 = x3d.Shape()
LineSet1470 = x3d.LineSet()
LineSet1470.vertexCount = [2]
ColorRGBA1471 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1470.color = ColorRGBA1471
Coordinate1472 = x3d.Coordinate()
Coordinate1472.point = [(-0.1954, 0.7393, -0.0185),(-0.1945, 0.7169, -0.0173)]

LineSet1470.coord = Coordinate1472

Shape1469.geometry = LineSet1470

HAnimSegment1465.children.append(Shape1469)
HAnimSite1473 = x3d.HAnimSite(DEF="hanim_r_carpal_distal_phalanx_2_tip")
HAnimSite1473.name = "r_carpal_distal_phalanx_2_tip"
HAnimSite1473.translation = [-0.24,0.87,0]
TouchSensor1474 = x3d.TouchSensor()
TouchSensor1474.description = "HAnimSite r_carpal_distal_phalanx_2_tip"

HAnimSite1473.children.append(TouchSensor1474)
Shape1475 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1473.children.append(Shape1475)

HAnimSegment1465.children.append(HAnimSite1473)
HAnimSite1476 = x3d.HAnimSite(DEF="hanim_r_dactylion_pt")
HAnimSite1476.name = "r_dactylion_pt"
HAnimSite1476.translation = [-0.1941,0.6772,-0.0423]
TouchSensor1477 = x3d.TouchSensor()
TouchSensor1477.description = "HAnimSite r_dactylion_pt"

HAnimSite1476.children.append(TouchSensor1477)
Shape1478 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1476.children.append(Shape1478)

HAnimSegment1465.children.append(HAnimSite1476)

HAnimJoint1464.children.append(HAnimSegment1465)
HAnimJoint1479 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint1479.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint1479.center = [-0.1945,0.7169,-0.0173]

HAnimJoint1464.children.append(HAnimJoint1479)

HAnimJoint1455.children.append(HAnimJoint1464)

HAnimJoint1446.children.append(HAnimJoint1455)

HAnimJoint1434.children.append(HAnimJoint1446)

HAnimJoint1382.children.append(HAnimJoint1434)
HAnimJoint1480 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_3")
HAnimJoint1480.name = "r_midcarpal_3"
HAnimJoint1480.center = [0,1,0]
HAnimSegment1481 = x3d.HAnimSegment(DEF="hanim_r_capitate")
HAnimSegment1481.name = "r_capitate"
Transform1482 = x3d.Transform()
Transform1483 = x3d.Transform()
Shape1484 = x3d.Shape(USE="HAnimJointShape")

Transform1483.children.append(Shape1484)

Transform1482.children.append(Transform1483)

HAnimSegment1481.children.append(Transform1482)
Shape1485 = x3d.Shape()
LineSet1486 = x3d.LineSet()
LineSet1486.vertexCount = [2]
ColorRGBA1487 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1486.color = ColorRGBA1487
Coordinate1488 = x3d.Coordinate()
Coordinate1488.point = [(0, 1, 0),(-0.1972, 0.806, -0.0468)]

LineSet1486.coord = Coordinate1488

Shape1485.geometry = LineSet1486

HAnimSegment1481.children.append(Shape1485)
HAnimSite1489 = x3d.HAnimSite(DEF="hanim_r_metacarpal_phalanx_3_pt")
HAnimSite1489.name = "r_metacarpal_phalanx_3_pt"
HAnimSite1489.translation = [0,1,0]
TouchSensor1490 = x3d.TouchSensor()
TouchSensor1490.description = "HAnimSite r_metacarpal_phalanx_3_pt"

HAnimSite1489.children.append(TouchSensor1490)
Shape1491 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1489.children.append(Shape1491)

HAnimSegment1481.children.append(HAnimSite1489)

HAnimJoint1480.children.append(HAnimSegment1481)
HAnimJoint1492 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_3")
HAnimJoint1492.name = "r_carpometacarpal_3"
HAnimJoint1492.center = [-0.1972,0.806,-0.0468]
HAnimSegment1493 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_3")
HAnimSegment1493.name = "r_metacarpal_3"
Transform1494 = x3d.Transform()
Transform1495 = x3d.Transform()
Shape1496 = x3d.Shape(USE="HAnimJointShape")

Transform1495.children.append(Shape1496)

Transform1494.children.append(Transform1495)

HAnimSegment1493.children.append(Transform1494)
Shape1497 = x3d.Shape()
LineSet1498 = x3d.LineSet()
LineSet1498.vertexCount = [2]
ColorRGBA1499 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1498.color = ColorRGBA1499
Coordinate1500 = x3d.Coordinate()
Coordinate1500.point = [(-0.1972, 0.806, -0.0468),(-0.1972, 0.7849, -0.0468)]

LineSet1498.coord = Coordinate1500

Shape1497.geometry = LineSet1498

HAnimSegment1493.children.append(Shape1497)

HAnimJoint1492.children.append(HAnimSegment1493)
HAnimJoint1501 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_3")
HAnimJoint1501.name = "r_metacarpophalangeal_3"
HAnimJoint1501.center = [-0.1972,0.7849,-0.0468]
HAnimSegment1502 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_3")
HAnimSegment1502.name = "r_carpal_proximal_phalanx_3"
Transform1503 = x3d.Transform()
Transform1504 = x3d.Transform()
Shape1505 = x3d.Shape(USE="HAnimJointShape")

Transform1504.children.append(Shape1505)

Transform1503.children.append(Transform1504)

HAnimSegment1502.children.append(Transform1503)
Shape1506 = x3d.Shape()
LineSet1507 = x3d.LineSet()
LineSet1507.vertexCount = [2]
ColorRGBA1508 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1507.color = ColorRGBA1508
Coordinate1509 = x3d.Coordinate()
Coordinate1509.point = [(-0.1972, 0.7849, -0.0468),(-0.195, 0.7304, -0.0441)]

LineSet1507.coord = Coordinate1509

Shape1506.geometry = LineSet1507

HAnimSegment1502.children.append(Shape1506)

HAnimJoint1501.children.append(HAnimSegment1502)
HAnimJoint1510 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint1510.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint1510.center = [-0.195,0.7304,-0.0441]
HAnimSegment1511 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_3")
HAnimSegment1511.name = "r_carpal_middle_phalanx_3"
Transform1512 = x3d.Transform()
Transform1513 = x3d.Transform()
Shape1514 = x3d.Shape(USE="HAnimJointShape")

Transform1513.children.append(Shape1514)

Transform1512.children.append(Transform1513)

HAnimSegment1511.children.append(Transform1512)
Shape1515 = x3d.Shape()
LineSet1516 = x3d.LineSet()
LineSet1516.vertexCount = [2]
ColorRGBA1517 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1516.color = ColorRGBA1517
Coordinate1518 = x3d.Coordinate()
Coordinate1518.point = [(-0.195, 0.7304, -0.0441),(-0.1939, 0.7042, -0.0432)]

LineSet1516.coord = Coordinate1518

Shape1515.geometry = LineSet1516

HAnimSegment1511.children.append(Shape1515)
HAnimSite1519 = x3d.HAnimSite(DEF="hanim_r_carpal_distal_phalanx_3_tip")
HAnimSite1519.name = "r_carpal_distal_phalanx_3_tip"
HAnimSite1519.translation = [-0.08,0.96,0]
TouchSensor1520 = x3d.TouchSensor()
TouchSensor1520.description = "HAnimSite r_carpal_distal_phalanx_3_tip"

HAnimSite1519.children.append(TouchSensor1520)
Shape1521 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1519.children.append(Shape1521)

HAnimSegment1511.children.append(HAnimSite1519)

HAnimJoint1510.children.append(HAnimSegment1511)
HAnimJoint1522 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint1522.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint1522.center = [-0.1939,0.7042,-0.0432]

HAnimJoint1510.children.append(HAnimJoint1522)

HAnimJoint1501.children.append(HAnimJoint1510)

HAnimJoint1492.children.append(HAnimJoint1501)

HAnimJoint1480.children.append(HAnimJoint1492)

HAnimJoint1382.children.append(HAnimJoint1480)
HAnimJoint1523 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_4_5")
HAnimJoint1523.name = "r_midcarpal_4_5"
HAnimJoint1523.center = [0,1,0]
HAnimSegment1524 = x3d.HAnimSegment(DEF="hanim_r_hamate")
HAnimSegment1524.name = "r_hamate"
Transform1525 = x3d.Transform()
Transform1526 = x3d.Transform()
Shape1527 = x3d.Shape(USE="HAnimJointShape")

Transform1526.children.append(Shape1527)

Transform1525.children.append(Transform1526)

HAnimSegment1524.children.append(Transform1525)
Shape1528 = x3d.Shape()
LineSet1529 = x3d.LineSet()
LineSet1529.vertexCount = [2]
ColorRGBA1530 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1529.color = ColorRGBA1530
Coordinate1531 = x3d.Coordinate()
Coordinate1531.point = [(0, 1, 0),(-0.1951, 0.8049, -0.0732)]

LineSet1529.coord = Coordinate1531

Shape1528.geometry = LineSet1529

HAnimSegment1524.children.append(Shape1528)
Shape1532 = x3d.Shape()
LineSet1533 = x3d.LineSet()
LineSet1533.vertexCount = [2]
ColorRGBA1534 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1533.color = ColorRGBA1534
Coordinate1535 = x3d.Coordinate()
Coordinate1535.point = [(0, 1, 0),(-0.1926, 0.8096, -0.0975)]

LineSet1533.coord = Coordinate1535

Shape1532.geometry = LineSet1533

HAnimSegment1524.children.append(Shape1532)
HAnimSite1536 = x3d.HAnimSite(DEF="hanim_r_metacarpal_phalanx_5_pt")
HAnimSite1536.name = "r_metacarpal_phalanx_5_pt"
HAnimSite1536.translation = [-0.1929,0.789,-0.1064]
TouchSensor1537 = x3d.TouchSensor()
TouchSensor1537.description = "HAnimSite r_metacarpal_phalanx_5_pt"

HAnimSite1536.children.append(TouchSensor1537)
Shape1538 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1536.children.append(Shape1538)

HAnimSegment1524.children.append(HAnimSite1536)

HAnimJoint1523.children.append(HAnimSegment1524)
HAnimJoint1539 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_4")
HAnimJoint1539.name = "r_carpometacarpal_4"
HAnimJoint1539.center = [-0.1951,0.8049,-0.0732]
HAnimSegment1540 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_4")
HAnimSegment1540.name = "r_metacarpal_4"
Transform1541 = x3d.Transform()
Transform1542 = x3d.Transform()
Shape1543 = x3d.Shape(USE="HAnimJointShape")

Transform1542.children.append(Shape1543)

Transform1541.children.append(Transform1542)

HAnimSegment1540.children.append(Transform1541)
Shape1544 = x3d.Shape()
LineSet1545 = x3d.LineSet()
LineSet1545.vertexCount = [2]
ColorRGBA1546 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1545.color = ColorRGBA1546
Coordinate1547 = x3d.Coordinate()
Coordinate1547.point = [(-0.1951, 0.8049, -0.0732),(-0.1951, 0.7845, -0.0732)]

LineSet1545.coord = Coordinate1547

Shape1544.geometry = LineSet1545

HAnimSegment1540.children.append(Shape1544)

HAnimJoint1539.children.append(HAnimSegment1540)
HAnimJoint1548 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_4")
HAnimJoint1548.name = "r_metacarpophalangeal_4"
HAnimJoint1548.center = [-0.1951,0.7845,-0.0732]
HAnimSegment1549 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_4")
HAnimSegment1549.name = "r_carpal_proximal_phalanx_4"
Transform1550 = x3d.Transform()
Transform1551 = x3d.Transform()
Shape1552 = x3d.Shape(USE="HAnimJointShape")

Transform1551.children.append(Shape1552)

Transform1550.children.append(Transform1551)

HAnimSegment1549.children.append(Transform1550)
Shape1553 = x3d.Shape()
LineSet1554 = x3d.LineSet()
LineSet1554.vertexCount = [2]
ColorRGBA1555 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1554.color = ColorRGBA1555
Coordinate1556 = x3d.Coordinate()
Coordinate1556.point = [(-0.1951, 0.7845, -0.0732),(-0.192, 0.7318, -0.0716)]

LineSet1554.coord = Coordinate1556

Shape1553.geometry = LineSet1554

HAnimSegment1549.children.append(Shape1553)

HAnimJoint1548.children.append(HAnimSegment1549)
HAnimJoint1557 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint1557.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint1557.center = [-0.192,0.7318,-0.0716]
HAnimSegment1558 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_4")
HAnimSegment1558.name = "r_carpal_middle_phalanx_4"
Transform1559 = x3d.Transform()
Transform1560 = x3d.Transform()
Shape1561 = x3d.Shape(USE="HAnimJointShape")

Transform1560.children.append(Shape1561)

Transform1559.children.append(Transform1560)

HAnimSegment1558.children.append(Transform1559)
Shape1562 = x3d.Shape()
LineSet1563 = x3d.LineSet()
LineSet1563.vertexCount = [2]
ColorRGBA1564 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1563.color = ColorRGBA1564
Coordinate1565 = x3d.Coordinate()
Coordinate1565.point = [(-0.192, 0.7318, -0.0716),(-0.1908, 0.7077, -0.0706)]

LineSet1563.coord = Coordinate1565

Shape1562.geometry = LineSet1563

HAnimSegment1558.children.append(Shape1562)
HAnimSite1566 = x3d.HAnimSite(DEF="hanim_r_carpal_distal_phalanx_4_tip")
HAnimSite1566.name = "r_carpal_distal_phalanx_4_tip"
HAnimSite1566.translation = [0.1,0.93,0]
TouchSensor1567 = x3d.TouchSensor()
TouchSensor1567.description = "HAnimSite r_carpal_distal_phalanx_4_tip"

HAnimSite1566.children.append(TouchSensor1567)
Shape1568 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1566.children.append(Shape1568)

HAnimSegment1558.children.append(HAnimSite1566)

HAnimJoint1557.children.append(HAnimSegment1558)
HAnimJoint1569 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint1569.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint1569.center = [-0.1908,0.7077,-0.0706]

HAnimJoint1557.children.append(HAnimJoint1569)

HAnimJoint1548.children.append(HAnimJoint1557)

HAnimJoint1539.children.append(HAnimJoint1548)

HAnimJoint1523.children.append(HAnimJoint1539)
HAnimJoint1570 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_5")
HAnimJoint1570.name = "r_carpometacarpal_5"
HAnimJoint1570.center = [-0.1926,0.8096,-0.0975]
HAnimSegment1571 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_5")
HAnimSegment1571.name = "r_metacarpal_5"
Transform1572 = x3d.Transform()
Transform1573 = x3d.Transform()
Shape1574 = x3d.Shape(USE="HAnimJointShape")

Transform1573.children.append(Shape1574)

Transform1572.children.append(Transform1573)

HAnimSegment1571.children.append(Transform1572)
Shape1575 = x3d.Shape()
LineSet1576 = x3d.LineSet()
LineSet1576.vertexCount = [2]
ColorRGBA1577 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1576.color = ColorRGBA1577
Coordinate1578 = x3d.Coordinate()
Coordinate1578.point = [(-0.1926, 0.8096, -0.0975),(-0.1926, 0.7896, -0.0975)]

LineSet1576.coord = Coordinate1578

Shape1575.geometry = LineSet1576

HAnimSegment1571.children.append(Shape1575)

HAnimJoint1570.children.append(HAnimSegment1571)
HAnimJoint1579 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_5")
HAnimJoint1579.name = "r_metacarpophalangeal_5"
HAnimJoint1579.center = [-0.1926,0.7896,-0.0975]
HAnimSegment1580 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_5")
HAnimSegment1580.name = "r_carpal_proximal_phalanx_5"
Transform1581 = x3d.Transform()
Transform1582 = x3d.Transform()
Shape1583 = x3d.Shape(USE="HAnimJointShape")

Transform1582.children.append(Shape1583)

Transform1581.children.append(Transform1582)

HAnimSegment1580.children.append(Transform1581)
Shape1584 = x3d.Shape()
LineSet1585 = x3d.LineSet()
LineSet1585.vertexCount = [2]
ColorRGBA1586 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1585.color = ColorRGBA1586
Coordinate1587 = x3d.Coordinate()
Coordinate1587.point = [(-0.1926, 0.7896, -0.0975),(-0.1902, 0.7483, -0.0963)]

LineSet1585.coord = Coordinate1587

Shape1584.geometry = LineSet1585

HAnimSegment1580.children.append(Shape1584)

HAnimJoint1579.children.append(HAnimSegment1580)
HAnimJoint1588 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint1588.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint1588.center = [-0.1902,0.7483,-0.0963]
HAnimSegment1589 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_5")
HAnimSegment1589.name = "r_carpal_middle_phalanx_5"
Transform1590 = x3d.Transform()
Transform1591 = x3d.Transform()
Shape1592 = x3d.Shape(USE="HAnimJointShape")

Transform1591.children.append(Shape1592)

Transform1590.children.append(Transform1591)

HAnimSegment1589.children.append(Transform1590)
Shape1593 = x3d.Shape()
LineSet1594 = x3d.LineSet()
LineSet1594.vertexCount = [2]
ColorRGBA1595 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1594.color = ColorRGBA1595
Coordinate1596 = x3d.Coordinate()
Coordinate1596.point = [(-0.1902, 0.7483, -0.0963),(-0.1908, 0.754, -0.096)]

LineSet1594.coord = Coordinate1596

Shape1593.geometry = LineSet1594

HAnimSegment1589.children.append(Shape1593)
HAnimSite1597 = x3d.HAnimSite(DEF="hanim_r_carpal_distal_phalanx_5_tip")
HAnimSite1597.name = "r_carpal_distal_phalanx_5_tip"
HAnimSite1597.translation = [0.25,0.79,0]
TouchSensor1598 = x3d.TouchSensor()
TouchSensor1598.description = "HAnimSite r_carpal_distal_phalanx_5_tip"

HAnimSite1597.children.append(TouchSensor1598)
Shape1599 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1597.children.append(Shape1599)

HAnimSegment1589.children.append(HAnimSite1597)

HAnimJoint1588.children.append(HAnimSegment1589)
HAnimJoint1600 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint1600.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint1600.center = [-0.1908,0.754,-0.096]

HAnimJoint1588.children.append(HAnimJoint1600)

HAnimJoint1579.children.append(HAnimJoint1588)

HAnimJoint1570.children.append(HAnimJoint1579)

HAnimJoint1523.children.append(HAnimJoint1570)

HAnimJoint1382.children.append(HAnimJoint1523)

HAnimJoint1370.children.append(HAnimJoint1382)

HAnimJoint1349.children.append(HAnimJoint1370)

HAnimJoint1334.children.append(HAnimJoint1349)

HAnimJoint1325.children.append(HAnimJoint1334)

HAnimJoint844.children.append(HAnimJoint1325)

HAnimJoint829.children.append(HAnimJoint844)

HAnimJoint820.children.append(HAnimJoint829)

HAnimJoint811.children.append(HAnimJoint820)

HAnimJoint802.children.append(HAnimJoint811)

HAnimJoint790.children.append(HAnimJoint802)

HAnimJoint769.children.append(HAnimJoint790)

HAnimJoint760.children.append(HAnimJoint769)

HAnimJoint751.children.append(HAnimJoint760)

HAnimJoint736.children.append(HAnimJoint751)

HAnimJoint724.children.append(HAnimJoint736)

HAnimJoint715.children.append(HAnimJoint724)

HAnimJoint706.children.append(HAnimJoint715)

HAnimJoint697.children.append(HAnimJoint706)

HAnimJoint679.children.append(HAnimJoint697)

HAnimJoint670.children.append(HAnimJoint679)

HAnimJoint661.children.append(HAnimJoint670)

HAnimJoint42.children.append(HAnimJoint661)

HAnimHumanoid41.skeleton.append(HAnimJoint42)
HAnimJoint1601 = x3d.HAnimJoint(USE="hanim_humanoid_root")

HAnimHumanoid41.joints.append(HAnimJoint1601)
HAnimJoint1602 = x3d.HAnimJoint(USE="hanim_sacroiliac")

HAnimHumanoid41.joints.append(HAnimJoint1602)
HAnimJoint1603 = x3d.HAnimJoint(USE="hanim_l_hip")

HAnimHumanoid41.joints.append(HAnimJoint1603)
HAnimJoint1604 = x3d.HAnimJoint(USE="hanim_l_knee")

HAnimHumanoid41.joints.append(HAnimJoint1604)
HAnimJoint1605 = x3d.HAnimJoint(USE="hanim_l_talocrural")

HAnimHumanoid41.joints.append(HAnimJoint1605)
HAnimJoint1606 = x3d.HAnimJoint(USE="hanim_l_talocalcaneonavicular")

HAnimHumanoid41.joints.append(HAnimJoint1606)
HAnimJoint1607 = x3d.HAnimJoint(USE="hanim_l_cuneonavicular_1")

HAnimHumanoid41.joints.append(HAnimJoint1607)
HAnimJoint1608 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_1")

HAnimHumanoid41.joints.append(HAnimJoint1608)
HAnimJoint1609 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint1609)
HAnimJoint1610 = x3d.HAnimJoint(USE="hanim_l_tarsal_interphalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint1610)
HAnimJoint1611 = x3d.HAnimJoint(USE="hanim_l_cuneonavicular_2")

HAnimHumanoid41.joints.append(HAnimJoint1611)
HAnimJoint1612 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_2")

HAnimHumanoid41.joints.append(HAnimJoint1612)
HAnimJoint1613 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1613)
HAnimJoint1614 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1614)
HAnimJoint1615 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1615)
HAnimJoint1616 = x3d.HAnimJoint(USE="hanim_l_cuneonavicular_3")

HAnimHumanoid41.joints.append(HAnimJoint1616)
HAnimJoint1617 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_3")

HAnimHumanoid41.joints.append(HAnimJoint1617)
HAnimJoint1618 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1618)
HAnimJoint1619 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1619)
HAnimJoint1620 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1620)
HAnimJoint1621 = x3d.HAnimJoint(USE="hanim_l_calcaneocuboid")

HAnimHumanoid41.joints.append(HAnimJoint1621)
HAnimJoint1622 = x3d.HAnimJoint(USE="hanim_l_transversetarsal")

HAnimHumanoid41.joints.append(HAnimJoint1622)
HAnimJoint1623 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_4")

HAnimHumanoid41.joints.append(HAnimJoint1623)
HAnimJoint1624 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1624)
HAnimJoint1625 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1625)
HAnimJoint1626 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1626)
HAnimJoint1627 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_5")

HAnimHumanoid41.joints.append(HAnimJoint1627)
HAnimJoint1628 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1628)
HAnimJoint1629 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1629)
HAnimJoint1630 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1630)
HAnimJoint1631 = x3d.HAnimJoint(USE="hanim_r_hip")

HAnimHumanoid41.joints.append(HAnimJoint1631)
HAnimJoint1632 = x3d.HAnimJoint(USE="hanim_r_knee")

HAnimHumanoid41.joints.append(HAnimJoint1632)
HAnimJoint1633 = x3d.HAnimJoint(USE="hanim_r_talocrural")

HAnimHumanoid41.joints.append(HAnimJoint1633)
HAnimJoint1634 = x3d.HAnimJoint(USE="hanim_r_talocalcaneonavicular")

HAnimHumanoid41.joints.append(HAnimJoint1634)
HAnimJoint1635 = x3d.HAnimJoint(USE="hanim_r_cuneonavicular_1")

HAnimHumanoid41.joints.append(HAnimJoint1635)
HAnimJoint1636 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_1")

HAnimHumanoid41.joints.append(HAnimJoint1636)
HAnimJoint1637 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint1637)
HAnimJoint1638 = x3d.HAnimJoint(USE="hanim_r_tarsal_interphalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint1638)
HAnimJoint1639 = x3d.HAnimJoint(USE="hanim_r_cuneonavicular_2")

HAnimHumanoid41.joints.append(HAnimJoint1639)
HAnimJoint1640 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_2")

HAnimHumanoid41.joints.append(HAnimJoint1640)
HAnimJoint1641 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1641)
HAnimJoint1642 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1642)
HAnimJoint1643 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1643)
HAnimJoint1644 = x3d.HAnimJoint(USE="hanim_r_cuneonavicular_3")

HAnimHumanoid41.joints.append(HAnimJoint1644)
HAnimJoint1645 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_3")

HAnimHumanoid41.joints.append(HAnimJoint1645)
HAnimJoint1646 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1646)
HAnimJoint1647 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1647)
HAnimJoint1648 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1648)
HAnimJoint1649 = x3d.HAnimJoint(USE="hanim_r_calcaneocuboid")

HAnimHumanoid41.joints.append(HAnimJoint1649)
HAnimJoint1650 = x3d.HAnimJoint(USE="hanim_r_transversetarsal")

HAnimHumanoid41.joints.append(HAnimJoint1650)
HAnimJoint1651 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_4")

HAnimHumanoid41.joints.append(HAnimJoint1651)
HAnimJoint1652 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1652)
HAnimJoint1653 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1653)
HAnimJoint1654 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1654)
HAnimJoint1655 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_5")

HAnimHumanoid41.joints.append(HAnimJoint1655)
HAnimJoint1656 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1656)
HAnimJoint1657 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1657)
HAnimJoint1658 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1658)
HAnimJoint1659 = x3d.HAnimJoint(USE="hanim_vl5")

HAnimHumanoid41.joints.append(HAnimJoint1659)
HAnimJoint1660 = x3d.HAnimJoint(USE="hanim_vl4")

HAnimHumanoid41.joints.append(HAnimJoint1660)
HAnimJoint1661 = x3d.HAnimJoint(USE="hanim_vl3")

HAnimHumanoid41.joints.append(HAnimJoint1661)
HAnimJoint1662 = x3d.HAnimJoint(USE="hanim_vl2")

HAnimHumanoid41.joints.append(HAnimJoint1662)
HAnimJoint1663 = x3d.HAnimJoint(USE="hanim_vl1")

HAnimHumanoid41.joints.append(HAnimJoint1663)
HAnimJoint1664 = x3d.HAnimJoint(USE="hanim_vt12")

HAnimHumanoid41.joints.append(HAnimJoint1664)
HAnimJoint1665 = x3d.HAnimJoint(USE="hanim_vt11")

HAnimHumanoid41.joints.append(HAnimJoint1665)
HAnimJoint1666 = x3d.HAnimJoint(USE="hanim_vt10")

HAnimHumanoid41.joints.append(HAnimJoint1666)
HAnimJoint1667 = x3d.HAnimJoint(USE="hanim_vt9")

HAnimHumanoid41.joints.append(HAnimJoint1667)
HAnimJoint1668 = x3d.HAnimJoint(USE="hanim_vt8")

HAnimHumanoid41.joints.append(HAnimJoint1668)
HAnimJoint1669 = x3d.HAnimJoint(USE="hanim_vt7")

HAnimHumanoid41.joints.append(HAnimJoint1669)
HAnimJoint1670 = x3d.HAnimJoint(USE="hanim_vt6")

HAnimHumanoid41.joints.append(HAnimJoint1670)
HAnimJoint1671 = x3d.HAnimJoint(USE="hanim_vt5")

HAnimHumanoid41.joints.append(HAnimJoint1671)
HAnimJoint1672 = x3d.HAnimJoint(USE="hanim_vt4")

HAnimHumanoid41.joints.append(HAnimJoint1672)
HAnimJoint1673 = x3d.HAnimJoint(USE="hanim_vt3")

HAnimHumanoid41.joints.append(HAnimJoint1673)
HAnimJoint1674 = x3d.HAnimJoint(USE="hanim_vt2")

HAnimHumanoid41.joints.append(HAnimJoint1674)
HAnimJoint1675 = x3d.HAnimJoint(USE="hanim_vt1")

HAnimHumanoid41.joints.append(HAnimJoint1675)
HAnimJoint1676 = x3d.HAnimJoint(USE="hanim_vc7")

HAnimHumanoid41.joints.append(HAnimJoint1676)
HAnimJoint1677 = x3d.HAnimJoint(USE="hanim_vc6")

HAnimHumanoid41.joints.append(HAnimJoint1677)
HAnimJoint1678 = x3d.HAnimJoint(USE="hanim_vc5")

HAnimHumanoid41.joints.append(HAnimJoint1678)
HAnimJoint1679 = x3d.HAnimJoint(USE="hanim_vc4")

HAnimHumanoid41.joints.append(HAnimJoint1679)
HAnimJoint1680 = x3d.HAnimJoint(USE="hanim_vc3")

HAnimHumanoid41.joints.append(HAnimJoint1680)
HAnimJoint1681 = x3d.HAnimJoint(USE="hanim_vc2")

HAnimHumanoid41.joints.append(HAnimJoint1681)
HAnimJoint1682 = x3d.HAnimJoint(USE="hanim_vc1")

HAnimHumanoid41.joints.append(HAnimJoint1682)
HAnimJoint1683 = x3d.HAnimJoint(USE="hanim_skullbase")

HAnimHumanoid41.joints.append(HAnimJoint1683)
HAnimJoint1684 = x3d.HAnimJoint(USE="hanim_l_eyelid_joint")

HAnimHumanoid41.joints.append(HAnimJoint1684)
HAnimJoint1685 = x3d.HAnimJoint(USE="hanim_r_eyelid_joint")

HAnimHumanoid41.joints.append(HAnimJoint1685)
HAnimJoint1686 = x3d.HAnimJoint(USE="hanim_l_eyeball_joint")

HAnimHumanoid41.joints.append(HAnimJoint1686)
HAnimJoint1687 = x3d.HAnimJoint(USE="hanim_r_eyeball_joint")

HAnimHumanoid41.joints.append(HAnimJoint1687)
HAnimJoint1688 = x3d.HAnimJoint(USE="hanim_l_eyebrow_joint")

HAnimHumanoid41.joints.append(HAnimJoint1688)
HAnimJoint1689 = x3d.HAnimJoint(USE="hanim_r_eyebrow_joint")

HAnimHumanoid41.joints.append(HAnimJoint1689)
HAnimJoint1690 = x3d.HAnimJoint(USE="hanim_temporomandibular")

HAnimHumanoid41.joints.append(HAnimJoint1690)
HAnimJoint1691 = x3d.HAnimJoint(USE="hanim_l_sternoclavicular")

HAnimHumanoid41.joints.append(HAnimJoint1691)
HAnimJoint1692 = x3d.HAnimJoint(USE="hanim_l_acromioclavicular")

HAnimHumanoid41.joints.append(HAnimJoint1692)
HAnimJoint1693 = x3d.HAnimJoint(USE="hanim_l_shoulder")

HAnimHumanoid41.joints.append(HAnimJoint1693)
HAnimJoint1694 = x3d.HAnimJoint(USE="hanim_l_elbow")

HAnimHumanoid41.joints.append(HAnimJoint1694)
HAnimJoint1695 = x3d.HAnimJoint(USE="hanim_l_radiocarpal")

HAnimHumanoid41.joints.append(HAnimJoint1695)
HAnimJoint1696 = x3d.HAnimJoint(USE="hanim_l_midcarpal_1")

HAnimHumanoid41.joints.append(HAnimJoint1696)
HAnimJoint1697 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_1")

HAnimHumanoid41.joints.append(HAnimJoint1697)
HAnimJoint1698 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint1698)
HAnimJoint1699 = x3d.HAnimJoint(USE="hanim_l_carpal_interphalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint1699)
HAnimJoint1700 = x3d.HAnimJoint(USE="hanim_l_midcarpal_2")

HAnimHumanoid41.joints.append(HAnimJoint1700)
HAnimJoint1701 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_2")

HAnimHumanoid41.joints.append(HAnimJoint1701)
HAnimJoint1702 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1702)
HAnimJoint1703 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1703)
HAnimJoint1704 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1704)
HAnimJoint1705 = x3d.HAnimJoint(USE="hanim_l_midcarpal_3")

HAnimHumanoid41.joints.append(HAnimJoint1705)
HAnimJoint1706 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_3")

HAnimHumanoid41.joints.append(HAnimJoint1706)
HAnimJoint1707 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1707)
HAnimJoint1708 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1708)
HAnimJoint1709 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1709)
HAnimJoint1710 = x3d.HAnimJoint(USE="hanim_l_midcarpal_4_5")

HAnimHumanoid41.joints.append(HAnimJoint1710)
HAnimJoint1711 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_4")

HAnimHumanoid41.joints.append(HAnimJoint1711)
HAnimJoint1712 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1712)
HAnimJoint1713 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1713)
HAnimJoint1714 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1714)
HAnimJoint1715 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_5")

HAnimHumanoid41.joints.append(HAnimJoint1715)
HAnimJoint1716 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1716)
HAnimJoint1717 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1717)
HAnimJoint1718 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1718)
HAnimJoint1719 = x3d.HAnimJoint(USE="hanim_r_sternoclavicular")

HAnimHumanoid41.joints.append(HAnimJoint1719)
HAnimJoint1720 = x3d.HAnimJoint(USE="hanim_r_acromioclavicular")

HAnimHumanoid41.joints.append(HAnimJoint1720)
HAnimJoint1721 = x3d.HAnimJoint(USE="hanim_r_shoulder")

HAnimHumanoid41.joints.append(HAnimJoint1721)
HAnimJoint1722 = x3d.HAnimJoint(USE="hanim_r_elbow")

HAnimHumanoid41.joints.append(HAnimJoint1722)
HAnimJoint1723 = x3d.HAnimJoint(USE="hanim_r_radiocarpal")

HAnimHumanoid41.joints.append(HAnimJoint1723)
HAnimJoint1724 = x3d.HAnimJoint(USE="hanim_r_midcarpal_1")

HAnimHumanoid41.joints.append(HAnimJoint1724)
HAnimJoint1725 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_1")

HAnimHumanoid41.joints.append(HAnimJoint1725)
HAnimJoint1726 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint1726)
HAnimJoint1727 = x3d.HAnimJoint(USE="hanim_r_carpal_interphalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint1727)
HAnimJoint1728 = x3d.HAnimJoint(USE="hanim_r_midcarpal_2")

HAnimHumanoid41.joints.append(HAnimJoint1728)
HAnimJoint1729 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_2")

HAnimHumanoid41.joints.append(HAnimJoint1729)
HAnimJoint1730 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1730)
HAnimJoint1731 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1731)
HAnimJoint1732 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint1732)
HAnimJoint1733 = x3d.HAnimJoint(USE="hanim_r_midcarpal_3")

HAnimHumanoid41.joints.append(HAnimJoint1733)
HAnimJoint1734 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_3")

HAnimHumanoid41.joints.append(HAnimJoint1734)
HAnimJoint1735 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1735)
HAnimJoint1736 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1736)
HAnimJoint1737 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint1737)
HAnimJoint1738 = x3d.HAnimJoint(USE="hanim_r_midcarpal_4_5")

HAnimHumanoid41.joints.append(HAnimJoint1738)
HAnimJoint1739 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_4")

HAnimHumanoid41.joints.append(HAnimJoint1739)
HAnimJoint1740 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1740)
HAnimJoint1741 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1741)
HAnimJoint1742 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint1742)
HAnimJoint1743 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_5")

HAnimHumanoid41.joints.append(HAnimJoint1743)
HAnimJoint1744 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1744)
HAnimJoint1745 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1745)
HAnimJoint1746 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint1746)
Coordinate1747 = x3d.Coordinate(DEF="TheSkinCoord")
Coordinate1747.point = [(0, 1.77, 0),(0, 1.665, 0.09),(-0.033, 1.62, 0.087),(0.033, 1.62, 0.087),(0, 1.55, 0.097),(-0.077, 1.64, -0.01),(-0.0527, 1.58, 0.015),(0.077, 1.64, -0.01),(0.0527, 1.58, 0.015),(0, 1.625, -0.0925),(-0.03, 1.46, 0.035),(0, 1.44, 0.03),(0.03, 1.46, 0.035),(-0.1135, 1.318, 0.095),(0.1135, 1.318, 0.095),(0, 1.25, 0.113),(-0.087, 1.19, 0.09),(-0.0935, 1.03, 0.075),(0.087, 1.19, 0.09),(0.0935, 1.03, 0.075),(-0.1425, 1.065, 0.0033),(-0.15, 0.9, -0.01),(0.1425, 1.065, 0.0033),(0.15, 0.9, -0.01),(0, 1.53, -0.084),(0.0049, 1.1908, -0.1113),(-0.0773, 1.019, -0.12),(0.0773, 1.019, -0.12),(0.005, 1.0915, -0.1091),(-0.178, 1.4825, -0.0625),(-0.17, 1.38, 0.007),(-0.1884, 0.8676, -0.036),(-0.16, 1.38, -0.127),(-0.2, 1.1388, -0.08),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.23, 1.133, -0.055),(-0.1977, 0.8169, -0.0177),(-0.1941, 0.6772, -0.0423),(-0.2117, 0.8562, -0.0584),(-0.1929, 0.789, -0.1064),(0.175, 1.4825, -0.06),(0.17, 1.38, 0.007),(0.1901, 0.8645, -0.0415),(0.16, 1.38, -0.125),(0.2, 1.1388, -0.08),(0.165, 1.1388, -0.04),(0.244, 1.1388, -0.04),(0.23, 1.133, -0.055),(0.2009, 0.8139, -0.0237),(0.2056, 0.6743, -0.0482),(0.2142, 0.8529, -0.0648),(0.1929, 0.786, -0.1122),(-0.1, 0.4913, -0.03),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.165, 0.01, 0.12),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.09, 0.056, 0.0125),(-0.115, 0.02, 0.122),(-0.115, 0.04, -0.055),(-0.11, 0.011, 0.19),(0.0993, 0.4881, -0.0309),(0.17, 0.466, 0),(0.05, 0.4867, 0),(0.165, 0.01, 0.12),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.09, 0.056, 0.0125),(0.115, 0.02, 0.122),(0.115, 0.04, -0.055),(0.11, 0.011, 0.19),(0, 0.875, 0),(-0.0646, 1.5149, -0.038),(0.0646, 1.5149, -0.038),(0, 1.07225, 0.09),(-0.11, 1.427, -0.1375),(-0.235, 1.42, -0.0625),(0.11, 1.427, -0.1375),(0.235, 1.42, -0.0625),(0, 1.41, -0.145),(0, 0.925, 0.08),(-0.087, 1.19, -0.09),(0.087, 1.19, -0.09),(0.172, 1.32, -0.03),(-0.172, 1.32, -0.03),(0.15, 1.23, -0.015),(-0.15, 1.23, -0.015),(0.079, 0.92, -0.14),(0.1, 0.9, 0.077),(-0.079, 0.92, -0.14),(-0.1, 0.9, 0.075),(0, 0.87, 0),(0.171, 0.65, 0),(0.02, 0.65, 0),(0.1, 0.65, -0.08),(0.1, 0.65, 0.07),(-0.171, 0.65, 0),(-0.02, 0.65, 0),(-0.1, 0.65, -0.08),(-0.1, 0.65, 0.07),(0.25, 1.27, -0.04),(0.17, 1.27, -0.04),(0.2, 1.27, -0.09),(0.2, 1.27, 0.02),(0.244, 1.1388, -0.04),(0.165, 1.1388, -0.04),(0.2, 1.1388, -0.08),(0.2, 1.1388, -0.013),(0.225, 1, -0.01),(0.225, 1, -0.07),(0.185, 1, -0.01),(0.185, 1, -0.07),(0.2, 1.1388, -0.04),(0.225, 0.92, -0.04),(0.175, 0.92, -0.04),(0.2, 0.92, -0.065),(0.2, 0.92, -0.015),(0.225, 0.89, -0.04),(0.175, 0.89, -0.04),(0.2, 0.89, -0.065),(0.2, 0.89, -0.015),(0.218, 0.86, -0.04),(0.184, 0.86, -0.04),(0.2, 0.87, -0.07),(0.2, 0.87, 0),(0.21, 0.85, 0),(0.1854, 0.85, 0),(0.212, 0.84, -0.015),(0.183, 0.84, -0.015),(0.213, 0.835, -0.04),(0.19, 0.835, -0.04),(0.211, 0.835, -0.065),(0.192, 0.835, -0.065),(0.208, 0.84, -0.085),(0.19, 0.84, -0.085),(0.2, 0.84, -0.095),(0.215, 0.82, 0),(0.193, 0.815, 0.005),(0.198, 0.8, 0.012),(0.21, 0.82, 0.03),(0.19, 0.82, 0.03),(0.2, 0.835, 0.039),(0.212, 0.8, 0.05),(0.188, 0.8, 0.05),(0.2, 0.807, 0.057),(0.2, 0.793, 0.035),(0.2, 0.774, 0.076),(0.212, 0.78, 0.07),(0.188, 0.78, 0.07),(0.2, 0.785, 0.075),(0.2, 0.77, 0.062),(0.215, 0.793, -0.015),(0.187, 0.793, -0.015),(0.2, 0.793, -0.005),(0.215, 0.788, -0.04),(0.187, 0.788, -0.04),(0.215, 0.793, -0.065),(0.187, 0.793, -0.065),(0.21, 0.79, -0.085),(0.19, 0.79, -0.085),(0.2, 0.79, -0.095),(0.19, 0.77, -0.0275),(0.19, 0.77, -0.0525),(0.19, 0.78, -0.0775),(0.212, 0.745, -0.015),(0.188, 0.745, -0.02),(0.2, 0.745, -0.0255),(0.2, 0.745, -0.0045),(0.211, 0.72, -0.015),(0.189, 0.72, -0.015),(0.2, 0.72, -0.0252),(0.2, 0.72, -0.0048),(0.21, 0.695, -0.015),(0.19, 0.695, -0.015),(0.2, 0.695, -0.025),(0.2, 0.695, -0.005),(0.2, 0.685, -0.015),(0.215, 0.74, -0.04),(0.185, 0.74, -0.04),(0.2, 0.74, -0.055),(0.2, 0.74, -0.025),(0.21, 0.7142, -0.04),(0.19, 0.7142, -0.04),(0.2, 0.7142, -0.053),(0.2, 0.7142, -0.027),(0.21, 0.68, -0.04),(0.19, 0.68, -0.04),(0.2, 0.68, -0.05),(0.2, 0.68, -0.03),(0.2, 0.67, -0.04),(0.212, 0.74, -0.065),(0.188, 0.74, -0.065),(0.2, 0.74, -0.0756),(0.2, 0.74, -0.0542),(0.21, 0.7177, -0.065),(0.19, 0.7177, -0.065),(0.2, 0.7177, -0.0751),(0.2, 0.7177, -0.0549),(0.21, 0.695, -0.065),(0.19, 0.695, -0.065),(0.2, 0.695, -0.075),(0.2, 0.695, -0.055),(0.2, 0.685, -0.065),(0.211, 0.755, -0.085),(0.189, 0.755, -0.085),(0.2, 0.755, -0.0952),(0.2, 0.755, -0.0748),(0.21, 0.735, -0.085),(0.19, 0.735, -0.085),(0.2, 0.735, -0.0951),(0.2, 0.735, -0.0749),(0.21, 0.72, -0.085),(0.19, 0.72, -0.085),(0.2, 0.72, -0.095),(0.2, 0.72, -0.075),(0.2, 0.71, -0.085),(-0.23, 1.23, -0.04),(-0.16, 1.23, -0.04),(-0.2, 1.235, -0.105),(-0.2, 1.235, 0.02),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.2, 1.1388, -0.08),(-0.2, 1.1388, 0.013),(-0.225, 1, -0.01),(-0.225, 1, -0.07),(-0.185, 1, -0.01),(-0.185, 1, -0.07),(-0.2, 1.1388, -0.04),(-0.225, 0.92, -0.04),(-0.175, 0.92, -0.04),(-0.2, 0.92, -0.065),(-0.2, 0.92, -0.015),(-0.225, 0.89, -0.04),(-0.175, 0.89, -0.04),(-0.2, 0.89, -0.065),(-0.2, 0.89, -0.015),(-0.218, 0.86, -0.04),(-0.184, 0.86, -0.04),(-0.2, 0.87, -0.07),(-0.2, 0.87, 0),(-0.21, 0.85, 0),(-0.1854, 0.85, 0),(-0.212, 0.84, -0.015),(-0.183, 0.84, -0.015),(-0.213, 0.835, -0.04),(-0.19, 0.835, -0.04),(-0.211, 0.835, -0.065),(-0.192, 0.835, -0.065),(-0.208, 0.84, -0.085),(-0.19, 0.84, -0.085),(-0.2, 0.84, -0.095),(-0.215, 0.82, 0),(-0.193, 0.815, 0.005),(-0.198, 0.8, 0.012),(-0.21, 0.82, 0.03),(-0.19, 0.82, 0.03),(-0.2, 0.835, 0.039),(-0.212, 0.8, 0.05),(-0.188, 0.8, 0.05),(-0.2, 0.807, 0.057),(-0.2, 0.793, 0.035),(-0.2, 0.774, 0.076),(-0.212, 0.78, 0.07),(-0.188, 0.78, 0.07),(-0.2, 0.785, 0.075),(-0.2, 0.77, 0.062),(-0.215, 0.793, -0.015),(-0.187, 0.793, -0.015),(-0.2, 0.793, -0.005),(-0.215, 0.788, -0.04),(-0.187, 0.788, -0.04),(-0.215, 0.793, -0.065),(-0.187, 0.793, -0.065),(-0.21, 0.79, -0.085),(-0.19, 0.79, -0.085),(-0.2, 0.79, -0.095),(-0.19, 0.77, -0.0275),(-0.19, 0.77, -0.0525),(-0.19, 0.78, -0.0775),(-0.212, 0.745, -0.015),(-0.188, 0.745, -0.02),(-0.2, 0.745, -0.0255),(-0.2, 0.745, -0.0045),(-0.211, 0.72, -0.015),(-0.189, 0.72, -0.015),(-0.2, 0.72, -0.0252),(-0.2, 0.72, -0.0048),(-0.21, 0.695, -0.015),(-0.19, 0.695, -0.015),(-0.2, 0.695, -0.025),(-0.2, 0.695, -0.005),(-0.2, 0.685, -0.015),(-0.215, 0.74, -0.04),(-0.185, 0.74, -0.04),(-0.2, 0.74, -0.055),(-0.2, 0.74, -0.025),(-0.21, 0.7142, -0.04),(-0.19, 0.7142, -0.04),(-0.2, 0.7142, -0.053),(-0.2, 0.7142, -0.027),(-0.21, 0.68, -0.04),(-0.19, 0.68, -0.04),(-0.2, 0.68, -0.05),(-0.2, 0.68, -0.03),(-0.2, 0.67, -0.04),(-0.212, 0.74, -0.065),(-0.188, 0.74, -0.065),(-0.2, 0.74, -0.0756),(-0.2, 0.74, -0.0542),(-0.21, 0.7177, -0.065),(-0.19, 0.7177, -0.065),(-0.2, 0.7177, -0.0751),(-0.2, 0.7177, -0.0549),(-0.21, 0.695, -0.065),(-0.19, 0.695, -0.065),(-0.2, 0.695, -0.075),(-0.2, 0.695, -0.055),(-0.2, 0.685, -0.065),(-0.211, 0.755, -0.085),(-0.189, 0.755, -0.085),(-0.2, 0.755, -0.0952),(-0.2, 0.755, -0.0748),(-0.21, 0.735, -0.085),(-0.19, 0.735, -0.085),(-0.2, 0.735, -0.0951),(-0.2, 0.735, -0.0749),(-0.21, 0.72, -0.085),(-0.19, 0.72, -0.085),(-0.2, 0.72, -0.095),(-0.2, 0.72, -0.075),(-0.2, 0.71, -0.085),(0.115, 0.466, 0.06),(0.115, 0.466, -0.055),(0.15, 0.466, 0),(0.05, 0.466, 0),(0.17, 0.3, 0),(0.06, 0.3, 0),(0.1, 0.3, -0.05),(0.1, 0.3, 0.05),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.115, 0.069, -0.045),(0.117, 0.0975, 0.0615),(0.1375, 0.006, -0.03),(0.095, 0.006, -0.03),(0.115, 0.015, -0.045),(0.115, 0.06, 0.1),(0.115, 0, 0.07),(0.165, 0, 0.07),(0.095, 0, 0.07),(0.115, 0.04, 0.13),(0.125, 0, 0.12),(0.165, 0, 0.12),(0.087, 0, 0.122),(0.09, 0.012, 0.188),(0.11, 0.011, 0.19),(0.128, 0.011, 0.185),(0.142, 0.011, 0.178),(0.154, 0.01, 0.168),(-0.115, 0.466, 0.06),(-0.115, 0.466, -0.055),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.17, 0.3, 0),(-0.06, 0.3, 0),(-0.1, 0.3, -0.05),(-0.1, 0.3, 0.05),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.115, 0.069, -0.045),(-0.117, 0.0975, 0.0615),(-0.1375, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.115, 0.06, 0.1),(-0.115, 0, 0.07),(-0.165, 0, 0.07),(-0.095, 0, 0.07),(-0.115, 0.04, 0.13),(-0.125, 0, 0.12),(-0.165, 0, 0.12),(-0.087, 0, 0.122),(-0.09, 0.012, 0.188),(-0.11, 0.011, 0.19),(-0.128, 0.011, 0.185),(-0.142, 0.011, 0.178),(-0.154, 0.01, 0.168)]

HAnimHumanoid41.skinCoord = Coordinate1747
Shape1748 = x3d.Shape(DEF="SkinShape")
Appearance1749 = x3d.Appearance(DEF="SkinAppearance")
Material1750 = x3d.Material(DEF="SkinMaterial")
Material1750.ambientIntensity = 0.6
Material1750.diffuseColor = [1,1,1]
Material1750.shininess = 0.6
Material1750.transparency = 0.2

Appearance1749.material = Material1750
ImageTexture1751 = x3d.ImageTexture(DEF="zBlueSpiralBkg2")
ImageTexture1751.url = ["../resources/images/zBlueSpiralBkg2.gif","../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]

Appearance1749.texture = ImageTexture1751

Shape1748.appearance = Appearance1749
IndexedFaceSet1752 = x3d.IndexedFaceSet()
IndexedFaceSet1752.creaseAngle = 3.1
IndexedFaceSet1752.coordIndex = [0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]
Color1753 = x3d.Color()
Color1753.color = [(1, 0, 0),(0, 1, 1),(0, 1, 0),(1, 1, 0),(1, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(0, 1, 1),(1, 1, 0),(1, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(1, 0, 0),(1, 0, 0),(1, 1, 0),(1, 1, 0),(1, 1, 1),(1, 0, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(1, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 1)]

IndexedFaceSet1752.color = Color1753
Coordinate1754 = x3d.Coordinate(USE="TheSkinCoord")

IndexedFaceSet1752.coord = Coordinate1754

Shape1748.geometry = IndexedFaceSet1752

HAnimHumanoid41.skin.append(Shape1748)

Scene9.children.append(HAnimHumanoid41)

X3D0.Scene = Scene9
f = open("../data/JohnJoint20.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/JohnJoint20.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/JohnJoint20.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
