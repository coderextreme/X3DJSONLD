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
meta3.content = "DonHumanoid.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "identifier"
meta4.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/DonHumanoid.x3d"

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
meta8.content = "Mon, 09 Feb 2026 07:09:53 GMT"

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
Transform17.translation = [0,2.1,0]
Shape18 = x3d.Shape(DEF="HAnimJointShape")
Appearance19 = x3d.Appearance()
Material20 = x3d.Material(DEF="HAnimJointMaterial")
Material20.diffuseColor = [0,0,0]

Appearance19.material = Material20

Shape18.appearance = Appearance19
Sphere21 = x3d.Sphere()
Sphere21.radius = 0.02

Shape18.geometry = Sphere21

Transform17.children.append(Shape18)

Transform16.children.append(Transform17)
Transform22 = x3d.Transform()
Transform22.translation = [0,2.05,0]
Shape23 = x3d.Shape(DEF="HAnimSegmentLine")
LineSet24 = x3d.LineSet()
LineSet24.vertexCount = [2]
ColorRGBA25 = x3d.ColorRGBA(DEF="HAnimSegmentLineColorRGBA")
ColorRGBA25.color = [(1, 1, 0, 0),(1, 1, 0, 0)]

LineSet24.color = ColorRGBA25
Coordinate26 = x3d.Coordinate()
Coordinate26.point = [(-0.05, 0, 0),(0.05, 0, 0)]

LineSet24.coord = Coordinate26

Shape23.geometry = LineSet24

Transform22.children.append(Shape23)

Transform16.children.append(Transform22)
Transform27 = x3d.Transform()
Transform27.translation = [0,2.1,0]
Shape28 = x3d.Shape(DEF="HAnimSiteShape")
Appearance29 = x3d.Appearance()
Material30 = x3d.Material()
Material30.diffuseColor = [1,1,1]
Material30.transparency = 1

Appearance29.material = Material30

Shape28.appearance = Appearance29
IndexedFaceSet31 = x3d.IndexedFaceSet(DEF="DiamondIFS")
IndexedFaceSet31.solid = False
IndexedFaceSet31.creaseAngle = 0.5
IndexedFaceSet31.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA32 = x3d.ColorRGBA(DEF="HAnimSiteColorRGBA")
ColorRGBA32.color = [(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1),(1, 1, 0, 1),(1, 1, 0, 0.1)]

IndexedFaceSet31.color = ColorRGBA32
Coordinate33 = x3d.Coordinate()
Coordinate33.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet31.coord = Coordinate33

Shape28.geometry = IndexedFaceSet31

Transform27.children.append(Shape28)

Transform16.children.append(Transform27)

Group15.children.append(Transform16)

Scene9.children.append(Group15)
NavigationInfo34 = x3d.NavigationInfo()
NavigationInfo34.speed = 1.5

Scene9.children.append(NavigationInfo34)
Viewpoint35 = x3d.Viewpoint()
Viewpoint35.description = "default"
Viewpoint35.position = [0,1,3]
Viewpoint35.centerOfRotation = [0,1,0]

Scene9.children.append(Viewpoint35)
HAnimHumanoid36 = x3d.HAnimHumanoid(DEF="hanim_HAnim")
HAnimHumanoid36.name = "HAnim"
HAnimHumanoid36.info = ["humanoidVersion=2.0"]
HAnimHumanoid36.version = "2.0"
HAnimJoint37 = x3d.HAnimJoint(DEF="hanim_humanoid_root")
HAnimJoint37.name = "humanoid_root"
HAnimJoint37.center = [0,0.824,0.0277]
HAnimSegment38 = x3d.HAnimSegment(DEF="hanim_sacrum")
HAnimSegment38.name = "sacrum"
Transform39 = x3d.Transform()
Transform39.translation = [0,0.824,0.0277]
Transform40 = x3d.Transform()
Shape41 = x3d.Shape(USE="HAnimJointShape")

Transform40.children.append(Shape41)

Transform39.children.append(Transform40)

HAnimSegment38.children.append(Transform39)
Shape42 = x3d.Shape()
LineSet43 = x3d.LineSet()
LineSet43.vertexCount = [2]
ColorRGBA44 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet43.color = ColorRGBA44
Coordinate45 = x3d.Coordinate()
Coordinate45.point = [(0, 0.824, 0.0277),(0, 0.9149, 0.0016)]

LineSet43.coord = Coordinate45

Shape42.geometry = LineSet43

HAnimSegment38.children.append(Shape42)
Shape46 = x3d.Shape()
LineSet47 = x3d.LineSet()
LineSet47.vertexCount = [2]
ColorRGBA48 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet47.color = ColorRGBA48
Coordinate49 = x3d.Coordinate()
Coordinate49.point = [(0, 0.824, 0.0277),(0.0028, 1.0568, -0.0776)]

LineSet47.coord = Coordinate49

Shape46.geometry = LineSet47

HAnimSegment38.children.append(Shape46)

HAnimJoint37.children.append(HAnimSegment38)
HAnimJoint50 = x3d.HAnimJoint(DEF="hanim_sacroiliac")
HAnimJoint50.name = "sacroiliac"
HAnimJoint50.center = [0,0.9149,0.0016]
HAnimSegment51 = x3d.HAnimSegment(DEF="hanim_pelvis")
HAnimSegment51.name = "pelvis"
Transform52 = x3d.Transform()
Transform52.translation = [0,0.9149,0.0016]
Transform53 = x3d.Transform()
Shape54 = x3d.Shape(USE="HAnimJointShape")

Transform53.children.append(Shape54)

Transform52.children.append(Transform53)

HAnimSegment51.children.append(Transform52)
Shape55 = x3d.Shape()
LineSet56 = x3d.LineSet()
LineSet56.vertexCount = [2]
ColorRGBA57 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet56.color = ColorRGBA57
Coordinate58 = x3d.Coordinate()
Coordinate58.point = [(0, 0.9149, 0.0016),(0.0961, 0.9124, -0.0001)]

LineSet56.coord = Coordinate58

Shape55.geometry = LineSet56

HAnimSegment51.children.append(Shape55)
HAnimSite59 = x3d.HAnimSite(DEF="hanim_buttocks_standing_wall_contact_point")
HAnimSite59.name = "buttocks_standing_wall_contact_point"
TouchSensor60 = x3d.TouchSensor()
TouchSensor60.description = "HAnimSite 93 buttocks_standing_wall_contact_point"

HAnimSite59.children.append(TouchSensor60)
Shape61 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite59.children.append(Shape61)
Billboard62 = x3d.Billboard()
Shape63 = x3d.Shape()
Text64 = x3d.Text()
Text64.string = ["93"]
FontStyle65 = x3d.FontStyle()
FontStyle65.size = 0.035

Text64.fontStyle = FontStyle65

Shape63.geometry = Text64

Billboard62.children.append(Shape63)

HAnimSite59.children.append(Billboard62)

HAnimSegment51.children.append(HAnimSite59)
HAnimSite66 = x3d.HAnimSite(DEF="hanim_crotch")
HAnimSite66.name = "crotch"
HAnimSite66.translation = [0.0034,0.8266,0.0257]
TouchSensor67 = x3d.TouchSensor()
TouchSensor67.description = "HAnimSite 38 crotch"

HAnimSite66.children.append(TouchSensor67)
Shape68 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite66.children.append(Shape68)
Billboard69 = x3d.Billboard()
Shape70 = x3d.Shape()
Text71 = x3d.Text()
Text71.string = ["38"]
FontStyle72 = x3d.FontStyle()
FontStyle72.size = 0.035

Text71.fontStyle = FontStyle72

Shape70.geometry = Text71

Billboard69.children.append(Shape70)

HAnimSite66.children.append(Billboard69)

HAnimSegment51.children.append(HAnimSite66)
HAnimSite73 = x3d.HAnimSite(DEF="hanim_l_asis")
HAnimSite73.name = "l_asis"
HAnimSite73.translation = [0.0925,0.9983,0.1052]
TouchSensor74 = x3d.TouchSensor()
TouchSensor74.description = "HAnimSite 32 l_asis"

HAnimSite73.children.append(TouchSensor74)
Shape75 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite73.children.append(Shape75)
Billboard76 = x3d.Billboard()
Shape77 = x3d.Shape()
Text78 = x3d.Text()
Text78.string = ["32"]
FontStyle79 = x3d.FontStyle()
FontStyle79.size = 0.035

Text78.fontStyle = FontStyle79

Shape77.geometry = Text78

Billboard76.children.append(Shape77)

HAnimSite73.children.append(Billboard76)

HAnimSegment51.children.append(HAnimSite73)
HAnimSite80 = x3d.HAnimSite(DEF="hanim_l_iliocristale")
HAnimSite80.name = "l_iliocristale"
HAnimSite80.translation = [0.1612,1.0537,0.0008]
TouchSensor81 = x3d.TouchSensor()
TouchSensor81.description = "HAnimSite 33 l_iliocristale"

HAnimSite80.children.append(TouchSensor81)
Shape82 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite80.children.append(Shape82)
Billboard83 = x3d.Billboard()
Shape84 = x3d.Shape()
Text85 = x3d.Text()
Text85.string = ["33"]
FontStyle86 = x3d.FontStyle()
FontStyle86.size = 0.035

Text85.fontStyle = FontStyle86

Shape84.geometry = Text85

Billboard83.children.append(Shape84)

HAnimSite80.children.append(Billboard83)

HAnimSegment51.children.append(HAnimSite80)
HAnimSite87 = x3d.HAnimSite(DEF="hanim_l_psis")
HAnimSite87.name = "l_psis"
HAnimSite87.translation = [0.0774,1.019,-0.1151]
TouchSensor88 = x3d.TouchSensor()
TouchSensor88.description = "HAnimSite 34 l_psis"

HAnimSite87.children.append(TouchSensor88)
Shape89 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite87.children.append(Shape89)
Billboard90 = x3d.Billboard()
Shape91 = x3d.Shape()
Text92 = x3d.Text()
Text92.string = ["34"]
FontStyle93 = x3d.FontStyle()
FontStyle93.size = 0.035

Text92.fontStyle = FontStyle93

Shape91.geometry = Text92

Billboard90.children.append(Shape91)

HAnimSite87.children.append(Billboard90)

HAnimSegment51.children.append(HAnimSite87)
HAnimSite94 = x3d.HAnimSite(DEF="hanim_l_trochanterion")
HAnimSite94.name = "l_trochanterion"
HAnimSite94.translation = [0.1677,0.8336,0.0303]
TouchSensor95 = x3d.TouchSensor()
TouchSensor95.description = "HAnimSite 42 l_trochanterion"

HAnimSite94.children.append(TouchSensor95)
Shape96 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite94.children.append(Shape96)
Billboard97 = x3d.Billboard()
Shape98 = x3d.Shape()
Text99 = x3d.Text()
Text99.string = ["42"]
FontStyle100 = x3d.FontStyle()
FontStyle100.size = 0.035

Text99.fontStyle = FontStyle100

Shape98.geometry = Text99

Billboard97.children.append(Shape98)

HAnimSite94.children.append(Billboard97)

HAnimSegment51.children.append(HAnimSite94)
HAnimSite101 = x3d.HAnimSite(DEF="hanim_r_asis")
HAnimSite101.name = "r_asis"
HAnimSite101.translation = [-0.0887,1.0021,0.1112]
TouchSensor102 = x3d.TouchSensor()
TouchSensor102.description = "HAnimSite 35 r_asis"

HAnimSite101.children.append(TouchSensor102)
Shape103 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite101.children.append(Shape103)
Billboard104 = x3d.Billboard()
Shape105 = x3d.Shape()
Text106 = x3d.Text()
Text106.string = ["35"]
FontStyle107 = x3d.FontStyle()
FontStyle107.size = 0.035

Text106.fontStyle = FontStyle107

Shape105.geometry = Text106

Billboard104.children.append(Shape105)

HAnimSite101.children.append(Billboard104)

HAnimSegment51.children.append(HAnimSite101)
HAnimSite108 = x3d.HAnimSite(DEF="hanim_r_iliocristale")
HAnimSite108.name = "r_iliocristale"
HAnimSite108.translation = [-0.1525,1.0628,0.0035]
TouchSensor109 = x3d.TouchSensor()
TouchSensor109.description = "HAnimSite 36 r_iliocristale"

HAnimSite108.children.append(TouchSensor109)
Shape110 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite108.children.append(Shape110)
Billboard111 = x3d.Billboard()
Shape112 = x3d.Shape()
Text113 = x3d.Text()
Text113.string = ["36"]
FontStyle114 = x3d.FontStyle()
FontStyle114.size = 0.035

Text113.fontStyle = FontStyle114

Shape112.geometry = Text113

Billboard111.children.append(Shape112)

HAnimSite108.children.append(Billboard111)

HAnimSegment51.children.append(HAnimSite108)
HAnimSite115 = x3d.HAnimSite(DEF="hanim_r_psis")
HAnimSite115.name = "r_psis"
HAnimSite115.translation = [-0.0716,1.019,-0.1138]
TouchSensor116 = x3d.TouchSensor()
TouchSensor116.description = "HAnimSite 37 r_psis"

HAnimSite115.children.append(TouchSensor116)
Shape117 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite115.children.append(Shape117)
Billboard118 = x3d.Billboard()
Shape119 = x3d.Shape()
Text120 = x3d.Text()
Text120.string = ["37"]
FontStyle121 = x3d.FontStyle()
FontStyle121.size = 0.035

Text120.fontStyle = FontStyle121

Shape119.geometry = Text120

Billboard118.children.append(Shape119)

HAnimSite115.children.append(Billboard118)

HAnimSegment51.children.append(HAnimSite115)
HAnimSite122 = x3d.HAnimSite(DEF="hanim_r_trochanterion")
HAnimSite122.name = "r_trochanterion"
HAnimSite122.translation = [-0.1689,0.8419,0.0352]
TouchSensor123 = x3d.TouchSensor()
TouchSensor123.description = "HAnimSite 46 r_trochanterion"

HAnimSite122.children.append(TouchSensor123)
Shape124 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite122.children.append(Shape124)
Billboard125 = x3d.Billboard()
Shape126 = x3d.Shape()
Text127 = x3d.Text()
Text127.string = ["46"]
FontStyle128 = x3d.FontStyle()
FontStyle128.size = 0.035

Text127.fontStyle = FontStyle128

Shape126.geometry = Text127

Billboard125.children.append(Shape126)

HAnimSite122.children.append(Billboard125)

HAnimSegment51.children.append(HAnimSite122)
Shape129 = x3d.Shape()
LineSet130 = x3d.LineSet()
LineSet130.vertexCount = [2]
ColorRGBA131 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet130.color = ColorRGBA131
Coordinate132 = x3d.Coordinate()
Coordinate132.point = [(0, 0.9149, 0.0016),(-0.095, 0.9171, 0.0029)]

LineSet130.coord = Coordinate132

Shape129.geometry = LineSet130

HAnimSegment51.children.append(Shape129)

HAnimJoint50.children.append(HAnimSegment51)
HAnimJoint133 = x3d.HAnimJoint(DEF="hanim_l_hip")
HAnimJoint133.name = "l_hip"
HAnimJoint133.center = [0.0961,0.9124,-0.0001]
HAnimSegment134 = x3d.HAnimSegment(DEF="hanim_l_thigh")
HAnimSegment134.name = "l_thigh"
Transform135 = x3d.Transform()
Transform135.translation = [0.0961,0.9124,-0.0001]
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
HAnimSite142 = x3d.HAnimSite(DEF="hanim_l_femoral_lateral_epicondyles")
HAnimSite142.name = "l_femoral_lateral_epicondyles"
HAnimSite142.translation = [0.1598,0.4967,0.0297]
TouchSensor143 = x3d.TouchSensor()
TouchSensor143.description = "HAnimSite 40 l_femoral_lateral_epicondyles"

HAnimSite142.children.append(TouchSensor143)
Shape144 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite142.children.append(Shape144)
Billboard145 = x3d.Billboard()
Shape146 = x3d.Shape()
Text147 = x3d.Text()
Text147.string = ["40"]
FontStyle148 = x3d.FontStyle()
FontStyle148.size = 0.035

Text147.fontStyle = FontStyle148

Shape146.geometry = Text147

Billboard145.children.append(Shape146)

HAnimSite142.children.append(Billboard145)

HAnimSegment134.children.append(HAnimSite142)
HAnimSite149 = x3d.HAnimSite(DEF="hanim_l_femoral_medial_epicondyles")
HAnimSite149.name = "l_femoral_medial_epicondyles"
HAnimSite149.translation = [0.0398,0.4946,0.0303]
TouchSensor150 = x3d.TouchSensor()
TouchSensor150.description = "HAnimSite 39 l_femoral_medial_epicondyles"

HAnimSite149.children.append(TouchSensor150)
Shape151 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite149.children.append(Shape151)
Billboard152 = x3d.Billboard()
Shape153 = x3d.Shape()
Text154 = x3d.Text()
Text154.string = ["39"]
FontStyle155 = x3d.FontStyle()
FontStyle155.size = 0.035

Text154.fontStyle = FontStyle155

Shape153.geometry = Text154

Billboard152.children.append(Shape153)

HAnimSite149.children.append(Billboard152)

HAnimSegment134.children.append(HAnimSite149)
HAnimSite156 = x3d.HAnimSite(DEF="hanim_l_knee_crease")
HAnimSite156.name = "l_knee_crease"
HAnimSite156.translation = [0.0993,0.4881,-0.0309]
TouchSensor157 = x3d.TouchSensor()
TouchSensor157.description = "HAnimSite 90 l_knee_crease"

HAnimSite156.children.append(TouchSensor157)
Shape158 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite156.children.append(Shape158)
Billboard159 = x3d.Billboard()
Shape160 = x3d.Shape()
Text161 = x3d.Text()
Text161.string = ["90"]
FontStyle162 = x3d.FontStyle()
FontStyle162.size = 0.035

Text161.fontStyle = FontStyle162

Shape160.geometry = Text161

Billboard159.children.append(Shape160)

HAnimSite156.children.append(Billboard159)

HAnimSegment134.children.append(HAnimSite156)
HAnimSite163 = x3d.HAnimSite(DEF="hanim_l_suprapatella")
HAnimSite163.name = "l_suprapatella"
TouchSensor164 = x3d.TouchSensor()
TouchSensor164.description = "HAnimSite 41 l_suprapatella"

HAnimSite163.children.append(TouchSensor164)
Shape165 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite163.children.append(Shape165)
Billboard166 = x3d.Billboard()
Shape167 = x3d.Shape()
Text168 = x3d.Text()
Text168.string = ["41"]
FontStyle169 = x3d.FontStyle()
FontStyle169.size = 0.035

Text168.fontStyle = FontStyle169

Shape167.geometry = Text168

Billboard166.children.append(Shape167)

HAnimSite163.children.append(Billboard166)

HAnimSegment134.children.append(HAnimSite163)

HAnimJoint133.children.append(HAnimSegment134)
HAnimJoint170 = x3d.HAnimJoint(DEF="hanim_l_knee")
HAnimJoint170.name = "l_knee"
HAnimJoint170.center = [0.104,0.4867,0.0308]
HAnimSegment171 = x3d.HAnimSegment(DEF="hanim_l_calf")
HAnimSegment171.name = "l_calf"
Transform172 = x3d.Transform()
Transform172.translation = [0.104,0.4867,0.0308]
Transform173 = x3d.Transform()
Shape174 = x3d.Shape(USE="HAnimJointShape")

Transform173.children.append(Shape174)

Transform172.children.append(Transform173)

HAnimSegment171.children.append(Transform172)
Shape175 = x3d.Shape()
LineSet176 = x3d.LineSet()
LineSet176.vertexCount = [2]
ColorRGBA177 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet176.color = ColorRGBA177
Coordinate178 = x3d.Coordinate()
Coordinate178.point = [(0.104, 0.4867, 0.0308),(0.1101, 0.0656, -0.0736)]

LineSet176.coord = Coordinate178

Shape175.geometry = LineSet176

HAnimSegment171.children.append(Shape175)
HAnimSite179 = x3d.HAnimSite(DEF="hanim_l_lateral_malleolus")
HAnimSite179.name = "l_lateral_malleolus"
HAnimSite179.translation = [0.1308,0.0597,-0.1032]
TouchSensor180 = x3d.TouchSensor()
TouchSensor180.description = "HAnimSite 49 l_lateral_malleolus"

HAnimSite179.children.append(TouchSensor180)
Shape181 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite179.children.append(Shape181)
Billboard182 = x3d.Billboard()
Shape183 = x3d.Shape()
Text184 = x3d.Text()
Text184.string = ["49"]
FontStyle185 = x3d.FontStyle()
FontStyle185.size = 0.035

Text184.fontStyle = FontStyle185

Shape183.geometry = Text184

Billboard182.children.append(Shape183)

HAnimSite179.children.append(Billboard182)

HAnimSegment171.children.append(HAnimSite179)
HAnimSite186 = x3d.HAnimSite(DEF="hanim_l_medial_malleolus")
HAnimSite186.name = "l_medial_malleolus"
HAnimSite186.translation = [0.089,0.0716,-0.0881]
TouchSensor187 = x3d.TouchSensor()
TouchSensor187.description = "HAnimSite 48 l_medial_malleolus"

HAnimSite186.children.append(TouchSensor187)
Shape188 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite186.children.append(Shape188)
Billboard189 = x3d.Billboard()
Shape190 = x3d.Shape()
Text191 = x3d.Text()
Text191.string = ["48"]
FontStyle192 = x3d.FontStyle()
FontStyle192.size = 0.035

Text191.fontStyle = FontStyle192

Shape190.geometry = Text191

Billboard189.children.append(Shape190)

HAnimSite186.children.append(Billboard189)

HAnimSegment171.children.append(HAnimSite186)
HAnimSite193 = x3d.HAnimSite(DEF="hanim_l_tibiale")
HAnimSite193.name = "l_tibiale"
TouchSensor194 = x3d.TouchSensor()
TouchSensor194.description = "HAnimSite 47 l_tibiale"

HAnimSite193.children.append(TouchSensor194)
Shape195 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite193.children.append(Shape195)
Billboard196 = x3d.Billboard()
Shape197 = x3d.Shape()
Text198 = x3d.Text()
Text198.string = ["47"]
FontStyle199 = x3d.FontStyle()
FontStyle199.size = 0.035

Text198.fontStyle = FontStyle199

Shape197.geometry = Text198

Billboard196.children.append(Shape197)

HAnimSite193.children.append(Billboard196)

HAnimSegment171.children.append(HAnimSite193)

HAnimJoint170.children.append(HAnimSegment171)
HAnimJoint200 = x3d.HAnimJoint(DEF="hanim_l_talocrural")
HAnimJoint200.name = "l_talocrural"
HAnimJoint200.center = [0.1101,0.0656,-0.0736]
HAnimSegment201 = x3d.HAnimSegment(DEF="hanim_l_talus")
HAnimSegment201.name = "l_talus"
Transform202 = x3d.Transform()
Transform202.translation = [0.08,0.06,-0.025]
Transform202.rotation = [1,0,0,-1.57]
Transform202.scale = [0.15,0.15,0.15]
Transform203 = x3d.Transform()
Shape204 = x3d.Shape(USE="HAnimJointShape")

Transform203.children.append(Shape204)

Transform202.children.append(Transform203)

HAnimSegment201.children.append(Transform202)
Shape205 = x3d.Shape()
LineSet206 = x3d.LineSet()
LineSet206.vertexCount = [2]
ColorRGBA207 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet206.color = ColorRGBA207
Coordinate208 = x3d.Coordinate()
Coordinate208.point = [(0.1101, 0.0656, -0.0736),(0.0781, 0.0283, -0.097)]

LineSet206.coord = Coordinate208

Shape205.geometry = LineSet206

HAnimSegment201.children.append(Shape205)
HAnimSite209 = x3d.HAnimSite(DEF="hanim_l_calcaneus_posterior")
HAnimSite209.name = "l_calcaneus_posterior"
HAnimSite209.translation = [0.0974,0.0259,-0.1171]
TouchSensor210 = x3d.TouchSensor()
TouchSensor210.description = "HAnimSite 58 l_calcaneus_posterior"

HAnimSite209.children.append(TouchSensor210)
Shape211 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite209.children.append(Shape211)
Billboard212 = x3d.Billboard()
Shape213 = x3d.Shape()
Text214 = x3d.Text()
Text214.string = ["58"]
FontStyle215 = x3d.FontStyle()
FontStyle215.size = 0.035

Text214.fontStyle = FontStyle215

Shape213.geometry = Text214

Billboard212.children.append(Shape213)

HAnimSite209.children.append(Billboard212)

HAnimSegment201.children.append(HAnimSite209)
HAnimSite216 = x3d.HAnimSite(DEF="hanim_l_sphyrion")
HAnimSite216.name = "l_sphyrion"
HAnimSite216.translation = [0.089,0.0575,-0.0943]
TouchSensor217 = x3d.TouchSensor()
TouchSensor217.description = "HAnimSite 50 l_sphyrion"

HAnimSite216.children.append(TouchSensor217)
Shape218 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite216.children.append(Shape218)
Billboard219 = x3d.Billboard()
Shape220 = x3d.Shape()
Text221 = x3d.Text()
Text221.string = ["50"]
FontStyle222 = x3d.FontStyle()
FontStyle222.size = 0.035

Text221.fontStyle = FontStyle222

Shape220.geometry = Text221

Billboard219.children.append(Shape220)

HAnimSite216.children.append(Billboard219)

HAnimSegment201.children.append(HAnimSite216)
Shape223 = x3d.Shape()
LineSet224 = x3d.LineSet()
LineSet224.vertexCount = [2]
ColorRGBA225 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet224.color = ColorRGBA225
Coordinate226 = x3d.Coordinate()
Coordinate226.point = [(0.1101, 0.0656, -0.0736),(0.0889, 0.0494, -0.1278)]

LineSet224.coord = Coordinate226

Shape223.geometry = LineSet224

HAnimSegment201.children.append(Shape223)

HAnimJoint200.children.append(HAnimSegment201)
HAnimJoint227 = x3d.HAnimJoint(DEF="hanim_l_talocalcaneonavicular")
HAnimJoint227.name = "l_talocalcaneonavicular"
HAnimJoint227.center = [0.0781,0.0283,-0.097]
HAnimSegment228 = x3d.HAnimSegment(DEF="hanim_l_navicular")
HAnimSegment228.name = "l_navicular"
Transform229 = x3d.Transform()
Transform229.translation = [0.0781,0.0283,-0.097]
Transform230 = x3d.Transform()
Shape231 = x3d.Shape(USE="HAnimJointShape")

Transform230.children.append(Shape231)

Transform229.children.append(Transform230)

HAnimSegment228.children.append(Transform229)
Shape232 = x3d.Shape()
LineSet233 = x3d.LineSet()
LineSet233.vertexCount = [2]
ColorRGBA234 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet233.color = ColorRGBA234
Coordinate235 = x3d.Coordinate()
Coordinate235.point = [(0.0781, 0.0283, -0.097),(0.0672, 0.0235, -0.0835)]

LineSet233.coord = Coordinate235

Shape232.geometry = LineSet233

HAnimSegment228.children.append(Shape232)
Shape236 = x3d.Shape()
LineSet237 = x3d.LineSet()
LineSet237.vertexCount = [2]
ColorRGBA238 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet237.color = ColorRGBA238
Coordinate239 = x3d.Coordinate()
Coordinate239.point = [(0.0781, 0.0283, -0.097),(0.0812, 0.025, -0.0805)]

LineSet237.coord = Coordinate239

Shape236.geometry = LineSet237

HAnimSegment228.children.append(Shape236)
Shape240 = x3d.Shape()
LineSet241 = x3d.LineSet()
LineSet241.vertexCount = [2]
ColorRGBA242 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet241.color = ColorRGBA242
Coordinate243 = x3d.Coordinate()
Coordinate243.point = [(0.0781, 0.0283, -0.097),(0.0928, 0.0248, -0.0821)]

LineSet241.coord = Coordinate243

Shape240.geometry = LineSet241

HAnimSegment228.children.append(Shape240)

HAnimJoint227.children.append(HAnimSegment228)
HAnimJoint244 = x3d.HAnimJoint(DEF="hanim_l_cuneonavicular_1")
HAnimJoint244.name = "l_cuneonavicular_1"
HAnimJoint244.center = [0.0672,0.0235,-0.0835]
HAnimSegment245 = x3d.HAnimSegment(DEF="hanim_l_cuneiform_1")
HAnimSegment245.name = "l_cuneiform_1"
Transform246 = x3d.Transform()
Transform246.translation = [0.0672,0.0235,-0.0835]
Transform247 = x3d.Transform()
Shape248 = x3d.Shape(USE="HAnimJointShape")

Transform247.children.append(Shape248)

Transform246.children.append(Transform247)

HAnimSegment245.children.append(Transform246)
Shape249 = x3d.Shape()
LineSet250 = x3d.LineSet()
LineSet250.vertexCount = [2]
ColorRGBA251 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet250.color = ColorRGBA251
Coordinate252 = x3d.Coordinate()
Coordinate252.point = [(0.0672, 0.0235, -0.0835),(0.0644, 0.0147, -0.0577)]

LineSet250.coord = Coordinate252

Shape249.geometry = LineSet250

HAnimSegment245.children.append(Shape249)

HAnimJoint244.children.append(HAnimSegment245)
HAnimJoint253 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_1")
HAnimJoint253.name = "l_tarsometatarsal_1"
HAnimJoint253.center = [0.0644,0.0147,-0.0577]
HAnimSegment254 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_1")
HAnimSegment254.name = "l_metatarsal_1"
Transform255 = x3d.Transform()
Transform255.translation = [0.0644,0.0147,-0.0577]
Transform256 = x3d.Transform()
Shape257 = x3d.Shape(USE="HAnimJointShape")

Transform256.children.append(Shape257)

Transform255.children.append(Transform256)

HAnimSegment254.children.append(Transform255)
Shape258 = x3d.Shape()
LineSet259 = x3d.LineSet()
LineSet259.vertexCount = [2]
ColorRGBA260 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet259.color = ColorRGBA260
Coordinate261 = x3d.Coordinate()
Coordinate261.point = [(0.0644, 0.0147, -0.0577),(0.0619, 0.0059, -0.0083)]

LineSet259.coord = Coordinate261

Shape258.geometry = LineSet259

HAnimSegment254.children.append(Shape258)

HAnimJoint253.children.append(HAnimSegment254)
HAnimJoint262 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_1")
HAnimJoint262.name = "l_metatarsophalangeal_1"
HAnimJoint262.center = [0.0619,0.0059,-0.0083]
HAnimSegment263 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_1")
HAnimSegment263.name = "l_tarsal_proximal_phalanx_1"
Transform264 = x3d.Transform()
Transform264.translation = [0.0619,0.0059,-0.0083]
Transform265 = x3d.Transform()
Shape266 = x3d.Shape(USE="HAnimJointShape")

Transform265.children.append(Shape266)

Transform264.children.append(Transform265)

HAnimSegment263.children.append(Transform264)
Shape267 = x3d.Shape()
LineSet268 = x3d.LineSet()
LineSet268.vertexCount = [2]
ColorRGBA269 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet268.color = ColorRGBA269
Coordinate270 = x3d.Coordinate()
Coordinate270.point = [(0.0619, 0.0059, -0.0083),(0.0619, 0.0059, -0.0083)]

LineSet268.coord = Coordinate270

Shape267.geometry = LineSet268

HAnimSegment263.children.append(Shape267)
HAnimSite271 = x3d.HAnimSite(DEF="hanim_l_metatarsal_phalanx_1")
HAnimSite271.name = "l_metatarsal_phalanx_1"
TouchSensor272 = x3d.TouchSensor()
TouchSensor272.description = "HAnimSite 55 l_metatarsal_phalanx_1"

HAnimSite271.children.append(TouchSensor272)
Shape273 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite271.children.append(Shape273)
Billboard274 = x3d.Billboard()
Shape275 = x3d.Shape()
Text276 = x3d.Text()
Text276.string = ["55"]
FontStyle277 = x3d.FontStyle()
FontStyle277.size = 0.035

Text276.fontStyle = FontStyle277

Shape275.geometry = Text276

Billboard274.children.append(Shape275)

HAnimSite271.children.append(Billboard274)

HAnimSegment263.children.append(HAnimSite271)

HAnimJoint262.children.append(HAnimSegment263)
HAnimJoint278 = x3d.HAnimJoint(DEF="hanim_l_tarsal_interphalangeal_1")
HAnimJoint278.name = "l_tarsal_interphalangeal_1"

HAnimJoint262.children.append(HAnimJoint278)

HAnimJoint253.children.append(HAnimJoint262)

HAnimJoint244.children.append(HAnimJoint253)

HAnimJoint227.children.append(HAnimJoint244)
HAnimJoint279 = x3d.HAnimJoint(DEF="hanim_l_cuneonavicular_2")
HAnimJoint279.name = "l_cuneonavicular_2"
HAnimJoint279.center = [0.0812,0.025,-0.0805]
HAnimSegment280 = x3d.HAnimSegment(DEF="hanim_l_cuneiform_2")
HAnimSegment280.name = "l_cuneiform_2"
Transform281 = x3d.Transform()
Transform281.translation = [0.0812,0.025,-0.0805]
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
Coordinate287.point = [(0.0812, 0.025, -0.0805),(0.08, 0.0175, -0.0608)]

LineSet285.coord = Coordinate287

Shape284.geometry = LineSet285

HAnimSegment280.children.append(Shape284)

HAnimJoint279.children.append(HAnimSegment280)
HAnimJoint288 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_2")
HAnimJoint288.name = "l_tarsometatarsal_2"
HAnimJoint288.center = [0.08,0.0175,-0.0608]
HAnimSegment289 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_2")
HAnimSegment289.name = "l_metatarsal_2"
Transform290 = x3d.Transform()
Transform290.translation = [0.08,0.0175,-0.0608]
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
Coordinate296.point = [(0.08, 0.0175, -0.0608),(0.0824, 0.0064, -0.004)]

LineSet294.coord = Coordinate296

Shape293.geometry = LineSet294

HAnimSegment289.children.append(Shape293)

HAnimJoint288.children.append(HAnimSegment289)
HAnimJoint297 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_2")
HAnimJoint297.name = "l_metatarsophalangeal_2"
HAnimJoint297.center = [0.0824,0.0064,-0.004]
HAnimSegment298 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_2")
HAnimSegment298.name = "l_tarsal_proximal_phalanx_2"
Transform299 = x3d.Transform()
Transform299.translation = [0.0824,0.0064,-0.004]
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
Coordinate305.point = [(0.0824, 0.0064, -0.004),(0.0841, 0.0041, 0.0121)]

LineSet303.coord = Coordinate305

Shape302.geometry = LineSet303

HAnimSegment298.children.append(Shape302)

HAnimJoint297.children.append(HAnimSegment298)
HAnimJoint306 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_2")
HAnimJoint306.name = "l_tarsal_proximal_interphalangeal_2"
HAnimJoint306.center = [0.0841,0.0041,0.0121]
HAnimSegment307 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_2")
HAnimSegment307.name = "l_tarsal_middle_phalanx_2"
Transform308 = x3d.Transform()
Transform308.translation = [0.0841,0.0041,0.0121]
Transform309 = x3d.Transform()
Shape310 = x3d.Shape(USE="HAnimJointShape")

Transform309.children.append(Shape310)

Transform308.children.append(Transform309)

HAnimSegment307.children.append(Transform308)
Shape311 = x3d.Shape()
LineSet312 = x3d.LineSet()
LineSet312.vertexCount = [2]
ColorRGBA313 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet312.color = ColorRGBA313
Coordinate314 = x3d.Coordinate()
Coordinate314.point = [(0.0841, 0.0041, 0.0121),(0.0841, 0.0013, 0.0216)]

LineSet312.coord = Coordinate314

Shape311.geometry = LineSet312

HAnimSegment307.children.append(Shape311)

HAnimJoint306.children.append(HAnimSegment307)
HAnimJoint315 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint315.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint315.center = [0.0841,0.0013,0.0216]

HAnimJoint306.children.append(HAnimJoint315)

HAnimJoint297.children.append(HAnimJoint306)

HAnimJoint288.children.append(HAnimJoint297)

HAnimJoint279.children.append(HAnimJoint288)

HAnimJoint227.children.append(HAnimJoint279)
HAnimJoint316 = x3d.HAnimJoint(DEF="hanim_l_cuneonavicular_3")
HAnimJoint316.name = "l_cuneonavicular_3"
HAnimJoint316.center = [0.0928,0.0248,-0.0821]
HAnimSegment317 = x3d.HAnimSegment(DEF="hanim_l_cuneiform_3")
HAnimSegment317.name = "l_cuneiform_3"
Transform318 = x3d.Transform()
Transform318.translation = [0.0928,0.0248,-0.0821]
Transform319 = x3d.Transform()
Shape320 = x3d.Shape(USE="HAnimJointShape")

Transform319.children.append(Shape320)

Transform318.children.append(Transform319)

HAnimSegment317.children.append(Transform318)
Shape321 = x3d.Shape()
LineSet322 = x3d.LineSet()
LineSet322.vertexCount = [2]
ColorRGBA323 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet322.color = ColorRGBA323
Coordinate324 = x3d.Coordinate()
Coordinate324.point = [(0.0928, 0.0248, -0.0821),(0.0944, 0.0175, -0.0625)]

LineSet322.coord = Coordinate324

Shape321.geometry = LineSet322

HAnimSegment317.children.append(Shape321)

HAnimJoint316.children.append(HAnimSegment317)
HAnimJoint325 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_3")
HAnimJoint325.name = "l_tarsometatarsal_3"
HAnimJoint325.center = [0.0944,0.0175,-0.0625]
HAnimSegment326 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_3")
HAnimSegment326.name = "l_metatarsal_3"
Transform327 = x3d.Transform()
Transform327.translation = [0.0944,0.0175,-0.0625]
Transform328 = x3d.Transform()
Shape329 = x3d.Shape(USE="HAnimJointShape")

Transform328.children.append(Shape329)

Transform327.children.append(Transform328)

HAnimSegment326.children.append(Transform327)
Shape330 = x3d.Shape()
LineSet331 = x3d.LineSet()
LineSet331.vertexCount = [2]
ColorRGBA332 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet331.color = ColorRGBA332
Coordinate333 = x3d.Coordinate()
Coordinate333.point = [(0.0944, 0.0175, -0.0625),(0.0963, 0.0065, -0.0065)]

LineSet331.coord = Coordinate333

Shape330.geometry = LineSet331

HAnimSegment326.children.append(Shape330)

HAnimJoint325.children.append(HAnimSegment326)
HAnimJoint334 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_3")
HAnimJoint334.name = "l_metatarsophalangeal_3"
HAnimJoint334.center = [0.0963,0.0065,-0.0065]
HAnimSegment335 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_3")
HAnimSegment335.name = "l_tarsal_proximal_phalanx_3"
Transform336 = x3d.Transform()
Transform336.translation = [0.0963,0.0065,-0.0065]
Transform337 = x3d.Transform()
Shape338 = x3d.Shape(USE="HAnimJointShape")

Transform337.children.append(Shape338)

Transform336.children.append(Transform337)

HAnimSegment335.children.append(Transform336)
Shape339 = x3d.Shape()
LineSet340 = x3d.LineSet()
LineSet340.vertexCount = [2]
ColorRGBA341 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet340.color = ColorRGBA341
Coordinate342 = x3d.Coordinate()
Coordinate342.point = [(0.0963, 0.0065, -0.0065),(0.0987, 0.0034, 0.0086)]

LineSet340.coord = Coordinate342

Shape339.geometry = LineSet340

HAnimSegment335.children.append(Shape339)

HAnimJoint334.children.append(HAnimSegment335)
HAnimJoint343 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_3")
HAnimJoint343.name = "l_tarsal_proximal_interphalangeal_3"
HAnimJoint343.center = [0.0987,0.0034,0.0086]
HAnimSegment344 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_3")
HAnimSegment344.name = "l_tarsal_middle_phalanx_3"
Transform345 = x3d.Transform()
Transform345.translation = [0.0987,0.0034,0.0086]
Transform346 = x3d.Transform()
Shape347 = x3d.Shape(USE="HAnimJointShape")

Transform346.children.append(Shape347)

Transform345.children.append(Transform346)

HAnimSegment344.children.append(Transform345)
Shape348 = x3d.Shape()
LineSet349 = x3d.LineSet()
LineSet349.vertexCount = [2]
ColorRGBA350 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet349.color = ColorRGBA350
Coordinate351 = x3d.Coordinate()
Coordinate351.point = [(0.0987, 0.0034, 0.0086),(0.1002, 0.0013, 0.0178)]

LineSet349.coord = Coordinate351

Shape348.geometry = LineSet349

HAnimSegment344.children.append(Shape348)

HAnimJoint343.children.append(HAnimSegment344)
HAnimJoint352 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_3")
HAnimJoint352.name = "l_tarsal_distal_interphalangeal_3"
HAnimJoint352.center = [0.1002,0.0013,0.0178]

HAnimJoint343.children.append(HAnimJoint352)

HAnimJoint334.children.append(HAnimJoint343)

HAnimJoint325.children.append(HAnimJoint334)

HAnimJoint316.children.append(HAnimJoint325)

HAnimJoint227.children.append(HAnimJoint316)

HAnimJoint200.children.append(HAnimJoint227)
HAnimJoint353 = x3d.HAnimJoint(DEF="hanim_l_calcaneocuboid")
HAnimJoint353.name = "l_calcaneocuboid"
HAnimJoint353.center = [0.0889,0.0494,-0.1278]
HAnimSegment354 = x3d.HAnimSegment(DEF="hanim_l_calcaneus")
HAnimSegment354.name = "l_calcaneus"
Transform355 = x3d.Transform()
Transform355.translation = [0.0889,0.0494,-0.1278]
Transform356 = x3d.Transform()
Shape357 = x3d.Shape(USE="HAnimJointShape")

Transform356.children.append(Shape357)

Transform355.children.append(Transform356)

HAnimSegment354.children.append(Transform355)
Shape358 = x3d.Shape()
LineSet359 = x3d.LineSet()
LineSet359.vertexCount = [2]
ColorRGBA360 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet359.color = ColorRGBA360
Coordinate361 = x3d.Coordinate()
Coordinate361.point = [(0.0889, 0.0494, -0.1278),(0.1105, 0.0267, -0.0998)]

LineSet359.coord = Coordinate361

Shape358.geometry = LineSet359

HAnimSegment354.children.append(Shape358)

HAnimJoint353.children.append(HAnimSegment354)
HAnimJoint362 = x3d.HAnimJoint(DEF="hanim_l_transversetarsal")
HAnimJoint362.name = "l_transversetarsal"
HAnimJoint362.center = [0.1105,0.0267,-0.0998]
HAnimSegment363 = x3d.HAnimSegment(DEF="hanim_l_cuboid")
HAnimSegment363.name = "l_cuboid"
Transform364 = x3d.Transform()
Transform364.translation = [0.1105,0.0267,-0.0998]
Transform365 = x3d.Transform()
Shape366 = x3d.Shape(USE="HAnimJointShape")

Transform365.children.append(Shape366)

Transform364.children.append(Transform365)

HAnimSegment363.children.append(Transform364)
Shape367 = x3d.Shape()
LineSet368 = x3d.LineSet()
LineSet368.vertexCount = [2]
ColorRGBA369 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet368.color = ColorRGBA369
Coordinate370 = x3d.Coordinate()
Coordinate370.point = [(0.1105, 0.0267, -0.0998),(0.1063, 0.016, -0.0634)]

LineSet368.coord = Coordinate370

Shape367.geometry = LineSet368

HAnimSegment363.children.append(Shape367)
Shape371 = x3d.Shape()
LineSet372 = x3d.LineSet()
LineSet372.vertexCount = [2]
ColorRGBA373 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet372.color = ColorRGBA373
Coordinate374 = x3d.Coordinate()
Coordinate374.point = [(0.1105, 0.0267, -0.0998),(0.1206, 0.0124, -0.0671)]

LineSet372.coord = Coordinate374

Shape371.geometry = LineSet372

HAnimSegment363.children.append(Shape371)

HAnimJoint362.children.append(HAnimSegment363)
HAnimJoint375 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_4")
HAnimJoint375.name = "l_tarsometatarsal_4"
HAnimJoint375.center = [0.1063,0.016,-0.0634]
HAnimSegment376 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_4")
HAnimSegment376.name = "l_metatarsal_4"
Transform377 = x3d.Transform()
Transform377.translation = [0.1063,0.016,-0.0634]
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
Coordinate383.point = [(0.1063, 0.016, -0.0634),(0.1097, 0.0058, -0.0107)]

LineSet381.coord = Coordinate383

Shape380.geometry = LineSet381

HAnimSegment376.children.append(Shape380)

HAnimJoint375.children.append(HAnimSegment376)
HAnimJoint384 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_4")
HAnimJoint384.name = "l_metatarsophalangeal_4"
HAnimJoint384.center = [0.1097,0.0058,-0.0107]
HAnimSegment385 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_4")
HAnimSegment385.name = "l_tarsal_proximal_phalanx_4"
Transform386 = x3d.Transform()
Transform386.translation = [0.1097,0.0058,-0.0107]
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
Coordinate392.point = [(0.1097, 0.0058, -0.0107),(0.114, 0.0037, 0.0044)]

LineSet390.coord = Coordinate392

Shape389.geometry = LineSet390

HAnimSegment385.children.append(Shape389)

HAnimJoint384.children.append(HAnimSegment385)
HAnimJoint393 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_4")
HAnimJoint393.name = "l_tarsal_proximal_interphalangeal_4"
HAnimJoint393.center = [0.114,0.0037,0.0044]
HAnimSegment394 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_4")
HAnimSegment394.name = "l_tarsal_middle_phalanx_4"
Transform395 = x3d.Transform()
Transform395.translation = [0.114,0.0037,0.0044]
Transform396 = x3d.Transform()
Shape397 = x3d.Shape(USE="HAnimJointShape")

Transform396.children.append(Shape397)

Transform395.children.append(Transform396)

HAnimSegment394.children.append(Transform395)
Shape398 = x3d.Shape()
LineSet399 = x3d.LineSet()
LineSet399.vertexCount = [2]
ColorRGBA400 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet399.color = ColorRGBA400
Coordinate401 = x3d.Coordinate()
Coordinate401.point = [(0.114, 0.0037, 0.0044),(0.1155, 0.0008, 0.0118)]

LineSet399.coord = Coordinate401

Shape398.geometry = LineSet399

HAnimSegment394.children.append(Shape398)

HAnimJoint393.children.append(HAnimSegment394)
HAnimJoint402 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_4")
HAnimJoint402.name = "l_tarsal_distal_interphalangeal_4"
HAnimJoint402.center = [0.1155,0.0008,0.0118]

HAnimJoint393.children.append(HAnimJoint402)

HAnimJoint384.children.append(HAnimJoint393)

HAnimJoint375.children.append(HAnimJoint384)

HAnimJoint362.children.append(HAnimJoint375)
HAnimJoint403 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_5")
HAnimJoint403.name = "l_tarsometatarsal_5"
HAnimJoint403.center = [0.1206,0.0124,-0.0671]
HAnimSegment404 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_5")
HAnimSegment404.name = "l_metatarsal_5"
Transform405 = x3d.Transform()
Transform405.translation = [0.1206,0.0124,-0.0671]
Transform406 = x3d.Transform()
Shape407 = x3d.Shape(USE="HAnimJointShape")

Transform406.children.append(Shape407)

Transform405.children.append(Transform406)

HAnimSegment404.children.append(Transform405)
Shape408 = x3d.Shape()
LineSet409 = x3d.LineSet()
LineSet409.vertexCount = [2]
ColorRGBA410 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet409.color = ColorRGBA410
Coordinate411 = x3d.Coordinate()
Coordinate411.point = [(0.1206, 0.0124, -0.0671),(0.1239, 0.0051, -0.0153)]

LineSet409.coord = Coordinate411

Shape408.geometry = LineSet409

HAnimSegment404.children.append(Shape408)

HAnimJoint403.children.append(HAnimSegment404)
HAnimJoint412 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_5")
HAnimJoint412.name = "l_metatarsophalangeal_5"
HAnimJoint412.center = [0.1239,0.0051,-0.0153]
HAnimSegment413 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_5")
HAnimSegment413.name = "l_tarsal_proximal_phalanx_5"
Transform414 = x3d.Transform()
Transform414.translation = [0.1239,0.0051,-0.0153]
Transform415 = x3d.Transform()
Shape416 = x3d.Shape(USE="HAnimJointShape")

Transform415.children.append(Shape416)

Transform414.children.append(Transform415)

HAnimSegment413.children.append(Transform414)
Shape417 = x3d.Shape()
LineSet418 = x3d.LineSet()
LineSet418.vertexCount = [2]
ColorRGBA419 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet418.color = ColorRGBA419
Coordinate420 = x3d.Coordinate()
Coordinate420.point = [(0.1239, 0.0051, -0.0153),(0.1262, 0.0023, -0.0077)]

LineSet418.coord = Coordinate420

Shape417.geometry = LineSet418

HAnimSegment413.children.append(Shape417)
HAnimSite421 = x3d.HAnimSite(DEF="hanim_l_metatarsal_phalanx_5")
HAnimSite421.name = "l_metatarsal_phalanx_5"
TouchSensor422 = x3d.TouchSensor()
TouchSensor422.description = "HAnimSite 56 l_metatarsal_phalanx_5"

HAnimSite421.children.append(TouchSensor422)
Shape423 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite421.children.append(Shape423)
Billboard424 = x3d.Billboard()
Shape425 = x3d.Shape()
Text426 = x3d.Text()
Text426.string = ["56"]
FontStyle427 = x3d.FontStyle()
FontStyle427.size = 0.035

Text426.fontStyle = FontStyle427

Shape425.geometry = Text426

Billboard424.children.append(Shape425)

HAnimSite421.children.append(Billboard424)

HAnimSegment413.children.append(HAnimSite421)

HAnimJoint412.children.append(HAnimSegment413)
HAnimJoint428 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_5")
HAnimJoint428.name = "l_tarsal_proximal_interphalangeal_5"
HAnimJoint428.center = [0.1262,0.0023,-0.0077]
HAnimSegment429 = x3d.HAnimSegment(DEF="hanim_l_tarsal_middle_phalanx_5")
HAnimSegment429.name = "l_tarsal_middle_phalanx_5"
Transform430 = x3d.Transform()
Transform430.translation = [0.1262,0.0023,-0.0077]
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
Coordinate436.point = [(0.1262, 0.0023, -0.0077),(0.1271, 0, 0)]

LineSet434.coord = Coordinate436

Shape433.geometry = LineSet434

HAnimSegment429.children.append(Shape433)

HAnimJoint428.children.append(HAnimSegment429)
HAnimJoint437 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_5")
HAnimJoint437.name = "l_tarsal_distal_interphalangeal_5"
HAnimJoint437.center = [0.1271,0,0]

HAnimJoint428.children.append(HAnimJoint437)

HAnimJoint412.children.append(HAnimJoint428)

HAnimJoint403.children.append(HAnimJoint412)

HAnimJoint362.children.append(HAnimJoint403)

HAnimJoint353.children.append(HAnimJoint362)

HAnimJoint200.children.append(HAnimJoint353)

HAnimJoint170.children.append(HAnimJoint200)

HAnimJoint133.children.append(HAnimJoint170)

HAnimJoint50.children.append(HAnimJoint133)
HAnimJoint438 = x3d.HAnimJoint(DEF="hanim_r_hip")
HAnimJoint438.name = "r_hip"
HAnimJoint438.center = [-0.095,0.9171,0.0029]
HAnimSegment439 = x3d.HAnimSegment(DEF="hanim_r_thigh")
HAnimSegment439.name = "r_thigh"
Transform440 = x3d.Transform()
Transform440.translation = [-0.095,0.9171,0.0029]
Transform441 = x3d.Transform()
Shape442 = x3d.Shape(USE="HAnimJointShape")

Transform441.children.append(Shape442)

Transform440.children.append(Transform441)

HAnimSegment439.children.append(Transform440)
Shape443 = x3d.Shape()
LineSet444 = x3d.LineSet()
LineSet444.vertexCount = [2]
ColorRGBA445 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet444.color = ColorRGBA445
Coordinate446 = x3d.Coordinate()
Coordinate446.point = [(-0.095, 0.9171, 0.0029),(-0.0867, 0.4913, 0.0318)]

LineSet444.coord = Coordinate446

Shape443.geometry = LineSet444

HAnimSegment439.children.append(Shape443)
HAnimSite447 = x3d.HAnimSite(DEF="hanim_r_femoral_lateral_epicondyles")
HAnimSite447.name = "r_femoral_lateral_epicondyles"
HAnimSite447.translation = [-0.1421,0.4992,0.031]
TouchSensor448 = x3d.TouchSensor()
TouchSensor448.description = "HAnimSite 44 r_femoral_lateral_epicondyles"

HAnimSite447.children.append(TouchSensor448)
Shape449 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite447.children.append(Shape449)
Billboard450 = x3d.Billboard()
Shape451 = x3d.Shape()
Text452 = x3d.Text()
Text452.string = ["44"]
FontStyle453 = x3d.FontStyle()
FontStyle453.size = 0.035

Text452.fontStyle = FontStyle453

Shape451.geometry = Text452

Billboard450.children.append(Shape451)

HAnimSite447.children.append(Billboard450)

HAnimSegment439.children.append(HAnimSite447)
HAnimSite454 = x3d.HAnimSite(DEF="hanim_r_femoral_medial_epicondyles")
HAnimSite454.name = "r_femoral_medial_epicondyles"
HAnimSite454.translation = [-0.0221,0.5014,0.0289]
TouchSensor455 = x3d.TouchSensor()
TouchSensor455.description = "HAnimSite 43 r_femoral_medial_epicondyles"

HAnimSite454.children.append(TouchSensor455)
Shape456 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite454.children.append(Shape456)
Billboard457 = x3d.Billboard()
Shape458 = x3d.Shape()
Text459 = x3d.Text()
Text459.string = ["43"]
FontStyle460 = x3d.FontStyle()
FontStyle460.size = 0.035

Text459.fontStyle = FontStyle460

Shape458.geometry = Text459

Billboard457.children.append(Shape458)

HAnimSite454.children.append(Billboard457)

HAnimSegment439.children.append(HAnimSite454)
HAnimSite461 = x3d.HAnimSite(DEF="hanim_r_knee_crease")
HAnimSite461.name = "r_knee_crease"
HAnimSite461.translation = [-0.0825,0.4932,-0.0326]
TouchSensor462 = x3d.TouchSensor()
TouchSensor462.description = "HAnimSite 91 r_knee_crease"

HAnimSite461.children.append(TouchSensor462)
Shape463 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite461.children.append(Shape463)
Billboard464 = x3d.Billboard()
Shape465 = x3d.Shape()
Text466 = x3d.Text()
Text466.string = ["91"]
FontStyle467 = x3d.FontStyle()
FontStyle467.size = 0.035

Text466.fontStyle = FontStyle467

Shape465.geometry = Text466

Billboard464.children.append(Shape465)

HAnimSite461.children.append(Billboard464)

HAnimSegment439.children.append(HAnimSite461)
HAnimSite468 = x3d.HAnimSite(DEF="hanim_r_suprapatella")
HAnimSite468.name = "r_suprapatella"
TouchSensor469 = x3d.TouchSensor()
TouchSensor469.description = "HAnimSite 45 r_suprapatella"

HAnimSite468.children.append(TouchSensor469)
Shape470 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite468.children.append(Shape470)
Billboard471 = x3d.Billboard()
Shape472 = x3d.Shape()
Text473 = x3d.Text()
Text473.string = ["45"]
FontStyle474 = x3d.FontStyle()
FontStyle474.size = 0.035

Text473.fontStyle = FontStyle474

Shape472.geometry = Text473

Billboard471.children.append(Shape472)

HAnimSite468.children.append(Billboard471)

HAnimSegment439.children.append(HAnimSite468)

HAnimJoint438.children.append(HAnimSegment439)
HAnimJoint475 = x3d.HAnimJoint(DEF="hanim_r_knee")
HAnimJoint475.name = "r_knee"
HAnimJoint475.center = [-0.0867,0.4913,0.0318]
HAnimSegment476 = x3d.HAnimSegment(DEF="hanim_r_calf")
HAnimSegment476.name = "r_calf"
Transform477 = x3d.Transform()
Transform477.translation = [-0.0867,0.4913,0.0318]
Transform478 = x3d.Transform()
Shape479 = x3d.Shape(USE="HAnimJointShape")

Transform478.children.append(Shape479)

Transform477.children.append(Transform478)

HAnimSegment476.children.append(Transform477)
Shape480 = x3d.Shape()
LineSet481 = x3d.LineSet()
LineSet481.vertexCount = [2]
ColorRGBA482 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet481.color = ColorRGBA482
Coordinate483 = x3d.Coordinate()
Coordinate483.point = [(-0.0867, 0.4913, 0.0318),(-0.0801, 0.0712, -0.0766)]

LineSet481.coord = Coordinate483

Shape480.geometry = LineSet481

HAnimSegment476.children.append(Shape480)
HAnimSite484 = x3d.HAnimSite(DEF="hanim_r_lateral_malleolus")
HAnimSite484.name = "r_lateral_malleolus"
HAnimSite484.translation = [-0.1006,0.0658,-0.1075]
TouchSensor485 = x3d.TouchSensor()
TouchSensor485.description = "HAnimSite 53 r_lateral_malleolus"

HAnimSite484.children.append(TouchSensor485)
Shape486 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite484.children.append(Shape486)
Billboard487 = x3d.Billboard()
Shape488 = x3d.Shape()
Text489 = x3d.Text()
Text489.string = ["53"]
FontStyle490 = x3d.FontStyle()
FontStyle490.size = 0.035

Text489.fontStyle = FontStyle490

Shape488.geometry = Text489

Billboard487.children.append(Shape488)

HAnimSite484.children.append(Billboard487)

HAnimSegment476.children.append(HAnimSite484)
HAnimSite491 = x3d.HAnimSite(DEF="hanim_r_medial_malleolus")
HAnimSite491.name = "r_medial_malleolus"
HAnimSite491.translation = [-0.0591,0.076,-0.0928]
TouchSensor492 = x3d.TouchSensor()
TouchSensor492.description = "HAnimSite 52 r_medial_malleolus"

HAnimSite491.children.append(TouchSensor492)
Shape493 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite491.children.append(Shape493)
Billboard494 = x3d.Billboard()
Shape495 = x3d.Shape()
Text496 = x3d.Text()
Text496.string = ["52"]
FontStyle497 = x3d.FontStyle()
FontStyle497.size = 0.035

Text496.fontStyle = FontStyle497

Shape495.geometry = Text496

Billboard494.children.append(Shape495)

HAnimSite491.children.append(Billboard494)

HAnimSegment476.children.append(HAnimSite491)
HAnimSite498 = x3d.HAnimSite(DEF="hanim_r_tibiale")
HAnimSite498.name = "r_tibiale"
TouchSensor499 = x3d.TouchSensor()
TouchSensor499.description = "HAnimSite 51 r_tibiale"

HAnimSite498.children.append(TouchSensor499)
Shape500 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite498.children.append(Shape500)
Billboard501 = x3d.Billboard()
Shape502 = x3d.Shape()
Text503 = x3d.Text()
Text503.string = ["51"]
FontStyle504 = x3d.FontStyle()
FontStyle504.size = 0.035

Text503.fontStyle = FontStyle504

Shape502.geometry = Text503

Billboard501.children.append(Shape502)

HAnimSite498.children.append(Billboard501)

HAnimSegment476.children.append(HAnimSite498)

HAnimJoint475.children.append(HAnimSegment476)
HAnimJoint505 = x3d.HAnimJoint(DEF="hanim_r_talocrural")
HAnimJoint505.name = "r_talocrural"
HAnimJoint505.center = [-0.0801,0.0712,-0.0766]
HAnimSegment506 = x3d.HAnimSegment(DEF="hanim_r_talus")
HAnimSegment506.name = "r_talus"
Transform507 = x3d.Transform()
Transform507.translation = [-0.05,0.06,-0.025]
Transform507.rotation = [1,0,0,-1.57]
Transform507.scale = [0.15,0.15,0.15]
Transform508 = x3d.Transform()
Shape509 = x3d.Shape(USE="HAnimJointShape")

Transform508.children.append(Shape509)

Transform507.children.append(Transform508)

HAnimSegment506.children.append(Transform507)
Shape510 = x3d.Shape()
LineSet511 = x3d.LineSet()
LineSet511.vertexCount = [2]
ColorRGBA512 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet511.color = ColorRGBA512
Coordinate513 = x3d.Coordinate()
Coordinate513.point = [(-0.0801, 0.0712, -0.0766),(-0.0781, 0.0283, -0.097)]

LineSet511.coord = Coordinate513

Shape510.geometry = LineSet511

HAnimSegment506.children.append(Shape510)
HAnimSite514 = x3d.HAnimSite(DEF="hanim_r_calcaneus_posterior")
HAnimSite514.name = "r_calcaneus_posterior"
HAnimSite514.translation = [-0.0692,0.0297,-0.1221]
TouchSensor515 = x3d.TouchSensor()
TouchSensor515.description = "HAnimSite 62 r_calcaneus_posterior"

HAnimSite514.children.append(TouchSensor515)
Shape516 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite514.children.append(Shape516)
Billboard517 = x3d.Billboard()
Shape518 = x3d.Shape()
Text519 = x3d.Text()
Text519.string = ["62"]
FontStyle520 = x3d.FontStyle()
FontStyle520.size = 0.035

Text519.fontStyle = FontStyle520

Shape518.geometry = Text519

Billboard517.children.append(Shape518)

HAnimSite514.children.append(Billboard517)

HAnimSegment506.children.append(HAnimSite514)
HAnimSite521 = x3d.HAnimSite(DEF="hanim_r_sphyrion")
HAnimSite521.name = "r_sphyrion"
HAnimSite521.translation = [-0.0603,0.061,-0.1002]
TouchSensor522 = x3d.TouchSensor()
TouchSensor522.description = "HAnimSite 54 r_sphyrion"

HAnimSite521.children.append(TouchSensor522)
Shape523 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite521.children.append(Shape523)
Billboard524 = x3d.Billboard()
Shape525 = x3d.Shape()
Text526 = x3d.Text()
Text526.string = ["54"]
FontStyle527 = x3d.FontStyle()
FontStyle527.size = 0.035

Text526.fontStyle = FontStyle527

Shape525.geometry = Text526

Billboard524.children.append(Shape525)

HAnimSite521.children.append(Billboard524)

HAnimSegment506.children.append(HAnimSite521)
Shape528 = x3d.Shape()
LineSet529 = x3d.LineSet()
LineSet529.vertexCount = [2]
ColorRGBA530 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet529.color = ColorRGBA530
Coordinate531 = x3d.Coordinate()
Coordinate531.point = [(-0.0801, 0.0712, -0.0766),(-0.0889, 0.0494, -0.1278)]

LineSet529.coord = Coordinate531

Shape528.geometry = LineSet529

HAnimSegment506.children.append(Shape528)

HAnimJoint505.children.append(HAnimSegment506)
HAnimJoint532 = x3d.HAnimJoint(DEF="hanim_r_talocalcaneonavicular")
HAnimJoint532.name = "r_talocalcaneonavicular"
HAnimJoint532.center = [-0.0781,0.0283,-0.097]
HAnimSegment533 = x3d.HAnimSegment(DEF="hanim_r_navicular")
HAnimSegment533.name = "r_navicular"
Transform534 = x3d.Transform()
Transform534.translation = [-0.0781,0.0283,-0.097]
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
Coordinate540.point = [(-0.0781, 0.0283, -0.097),(-0.0672, 0.0235, -0.0835)]

LineSet538.coord = Coordinate540

Shape537.geometry = LineSet538

HAnimSegment533.children.append(Shape537)
Shape541 = x3d.Shape()
LineSet542 = x3d.LineSet()
LineSet542.vertexCount = [2]
ColorRGBA543 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet542.color = ColorRGBA543
Coordinate544 = x3d.Coordinate()
Coordinate544.point = [(-0.0781, 0.0283, -0.097),(-0.0812, 0.025, -0.0805)]

LineSet542.coord = Coordinate544

Shape541.geometry = LineSet542

HAnimSegment533.children.append(Shape541)
Shape545 = x3d.Shape()
LineSet546 = x3d.LineSet()
LineSet546.vertexCount = [2]
ColorRGBA547 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet546.color = ColorRGBA547
Coordinate548 = x3d.Coordinate()
Coordinate548.point = [(-0.0781, 0.0283, -0.097),(-0.0928, 0.0248, -0.0821)]

LineSet546.coord = Coordinate548

Shape545.geometry = LineSet546

HAnimSegment533.children.append(Shape545)

HAnimJoint532.children.append(HAnimSegment533)
HAnimJoint549 = x3d.HAnimJoint(DEF="hanim_r_cuneonavicular_1")
HAnimJoint549.name = "r_cuneonavicular_1"
HAnimJoint549.center = [-0.0672,0.0235,-0.0835]
HAnimSegment550 = x3d.HAnimSegment(DEF="hanim_r_cuneiform_1")
HAnimSegment550.name = "r_cuneiform_1"
Transform551 = x3d.Transform()
Transform551.translation = [-0.0672,0.0235,-0.0835]
Transform552 = x3d.Transform()
Shape553 = x3d.Shape(USE="HAnimJointShape")

Transform552.children.append(Shape553)

Transform551.children.append(Transform552)

HAnimSegment550.children.append(Transform551)
Shape554 = x3d.Shape()
LineSet555 = x3d.LineSet()
LineSet555.vertexCount = [2]
ColorRGBA556 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet555.color = ColorRGBA556
Coordinate557 = x3d.Coordinate()
Coordinate557.point = [(-0.0672, 0.0235, -0.0835),(-0.0644, 0.0147, -0.0577)]

LineSet555.coord = Coordinate557

Shape554.geometry = LineSet555

HAnimSegment550.children.append(Shape554)

HAnimJoint549.children.append(HAnimSegment550)
HAnimJoint558 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_1")
HAnimJoint558.name = "r_tarsometatarsal_1"
HAnimJoint558.center = [-0.0644,0.0147,-0.0577]
HAnimSegment559 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_1")
HAnimSegment559.name = "r_metatarsal_1"
Transform560 = x3d.Transform()
Transform560.translation = [-0.0644,0.0147,-0.0577]
Transform561 = x3d.Transform()
Shape562 = x3d.Shape(USE="HAnimJointShape")

Transform561.children.append(Shape562)

Transform560.children.append(Transform561)

HAnimSegment559.children.append(Transform560)
Shape563 = x3d.Shape()
LineSet564 = x3d.LineSet()
LineSet564.vertexCount = [2]
ColorRGBA565 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet564.color = ColorRGBA565
Coordinate566 = x3d.Coordinate()
Coordinate566.point = [(-0.0644, 0.0147, -0.0577),(-0.0619, 0.0059, -0.0083)]

LineSet564.coord = Coordinate566

Shape563.geometry = LineSet564

HAnimSegment559.children.append(Shape563)

HAnimJoint558.children.append(HAnimSegment559)
HAnimJoint567 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_1")
HAnimJoint567.name = "r_metatarsophalangeal_1"
HAnimJoint567.center = [-0.0619,0.0059,-0.0083]
HAnimSegment568 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_1")
HAnimSegment568.name = "r_tarsal_proximal_phalanx_1"
Transform569 = x3d.Transform()
Transform569.translation = [-0.0619,0.0059,-0.0083]
Transform570 = x3d.Transform()
Shape571 = x3d.Shape(USE="HAnimJointShape")

Transform570.children.append(Shape571)

Transform569.children.append(Transform570)

HAnimSegment568.children.append(Transform569)
Shape572 = x3d.Shape()
LineSet573 = x3d.LineSet()
LineSet573.vertexCount = [2]
ColorRGBA574 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet573.color = ColorRGBA574
Coordinate575 = x3d.Coordinate()
Coordinate575.point = [(-0.0619, 0.0059, -0.0083),(-0.0619, 0.0059, -0.0083)]

LineSet573.coord = Coordinate575

Shape572.geometry = LineSet573

HAnimSegment568.children.append(Shape572)
HAnimSite576 = x3d.HAnimSite(DEF="hanim_r_metatarsal_phalanx_1")
HAnimSite576.name = "r_metatarsal_phalanx_1"
TouchSensor577 = x3d.TouchSensor()
TouchSensor577.description = "HAnimSite 59 r_metatarsal_phalanx_1"

HAnimSite576.children.append(TouchSensor577)
Shape578 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite576.children.append(Shape578)
Billboard579 = x3d.Billboard()
Shape580 = x3d.Shape()
Text581 = x3d.Text()
Text581.string = ["59"]
FontStyle582 = x3d.FontStyle()
FontStyle582.size = 0.035

Text581.fontStyle = FontStyle582

Shape580.geometry = Text581

Billboard579.children.append(Shape580)

HAnimSite576.children.append(Billboard579)

HAnimSegment568.children.append(HAnimSite576)

HAnimJoint567.children.append(HAnimSegment568)
HAnimJoint583 = x3d.HAnimJoint(DEF="hanim_r_tarsal_interphalangeal_1")
HAnimJoint583.name = "r_tarsal_interphalangeal_1"

HAnimJoint567.children.append(HAnimJoint583)

HAnimJoint558.children.append(HAnimJoint567)

HAnimJoint549.children.append(HAnimJoint558)

HAnimJoint532.children.append(HAnimJoint549)
HAnimJoint584 = x3d.HAnimJoint(DEF="hanim_r_cuneonavicular_2")
HAnimJoint584.name = "r_cuneonavicular_2"
HAnimJoint584.center = [-0.0812,0.025,-0.0805]
HAnimSegment585 = x3d.HAnimSegment(DEF="hanim_r_cuneiform_2")
HAnimSegment585.name = "r_cuneiform_2"
Transform586 = x3d.Transform()
Transform586.translation = [-0.0812,0.025,-0.0805]
Transform587 = x3d.Transform()
Shape588 = x3d.Shape(USE="HAnimJointShape")

Transform587.children.append(Shape588)

Transform586.children.append(Transform587)

HAnimSegment585.children.append(Transform586)
Shape589 = x3d.Shape()
LineSet590 = x3d.LineSet()
LineSet590.vertexCount = [2]
ColorRGBA591 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet590.color = ColorRGBA591
Coordinate592 = x3d.Coordinate()
Coordinate592.point = [(-0.0812, 0.025, -0.0805),(-0.08, 0.0175, -0.0608)]

LineSet590.coord = Coordinate592

Shape589.geometry = LineSet590

HAnimSegment585.children.append(Shape589)

HAnimJoint584.children.append(HAnimSegment585)
HAnimJoint593 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_2")
HAnimJoint593.name = "r_tarsometatarsal_2"
HAnimJoint593.center = [-0.08,0.0175,-0.0608]
HAnimSegment594 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_2")
HAnimSegment594.name = "r_metatarsal_2"
Transform595 = x3d.Transform()
Transform595.translation = [-0.08,0.0175,-0.0608]
Transform596 = x3d.Transform()
Shape597 = x3d.Shape(USE="HAnimJointShape")

Transform596.children.append(Shape597)

Transform595.children.append(Transform596)

HAnimSegment594.children.append(Transform595)
Shape598 = x3d.Shape()
LineSet599 = x3d.LineSet()
LineSet599.vertexCount = [2]
ColorRGBA600 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet599.color = ColorRGBA600
Coordinate601 = x3d.Coordinate()
Coordinate601.point = [(-0.08, 0.0175, -0.0608),(-0.0823, 0.0064, -0.004)]

LineSet599.coord = Coordinate601

Shape598.geometry = LineSet599

HAnimSegment594.children.append(Shape598)

HAnimJoint593.children.append(HAnimSegment594)
HAnimJoint602 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_2")
HAnimJoint602.name = "r_metatarsophalangeal_2"
HAnimJoint602.center = [-0.0823,0.0064,-0.004]
HAnimSegment603 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_2")
HAnimSegment603.name = "r_tarsal_proximal_phalanx_2"
Transform604 = x3d.Transform()
Transform604.translation = [-0.0823,0.0064,-0.004]
Transform605 = x3d.Transform()
Shape606 = x3d.Shape(USE="HAnimJointShape")

Transform605.children.append(Shape606)

Transform604.children.append(Transform605)

HAnimSegment603.children.append(Transform604)
Shape607 = x3d.Shape()
LineSet608 = x3d.LineSet()
LineSet608.vertexCount = [2]
ColorRGBA609 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet608.color = ColorRGBA609
Coordinate610 = x3d.Coordinate()
Coordinate610.point = [(-0.0823, 0.0064, -0.004),(-0.0841, 0.0041, 0.0121)]

LineSet608.coord = Coordinate610

Shape607.geometry = LineSet608

HAnimSegment603.children.append(Shape607)

HAnimJoint602.children.append(HAnimSegment603)
HAnimJoint611 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_2")
HAnimJoint611.name = "r_tarsal_proximal_interphalangeal_2"
HAnimJoint611.center = [-0.0841,0.0041,0.0121]
HAnimSegment612 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_2")
HAnimSegment612.name = "r_tarsal_middle_phalanx_2"
Transform613 = x3d.Transform()
Transform613.translation = [-0.0841,0.0041,0.0121]
Transform614 = x3d.Transform()
Shape615 = x3d.Shape(USE="HAnimJointShape")

Transform614.children.append(Shape615)

Transform613.children.append(Transform614)

HAnimSegment612.children.append(Transform613)
Shape616 = x3d.Shape()
LineSet617 = x3d.LineSet()
LineSet617.vertexCount = [2]
ColorRGBA618 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet617.color = ColorRGBA618
Coordinate619 = x3d.Coordinate()
Coordinate619.point = [(-0.0841, 0.0041, 0.0121),(-0.0841, 0.0013, 0.0216)]

LineSet617.coord = Coordinate619

Shape616.geometry = LineSet617

HAnimSegment612.children.append(Shape616)

HAnimJoint611.children.append(HAnimSegment612)
HAnimJoint620 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint620.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint620.center = [-0.0841,0.0013,0.0216]

HAnimJoint611.children.append(HAnimJoint620)

HAnimJoint602.children.append(HAnimJoint611)

HAnimJoint593.children.append(HAnimJoint602)

HAnimJoint584.children.append(HAnimJoint593)

HAnimJoint532.children.append(HAnimJoint584)
HAnimJoint621 = x3d.HAnimJoint(DEF="hanim_r_cuneonavicular_3")
HAnimJoint621.name = "r_cuneonavicular_3"
HAnimJoint621.center = [-0.0928,0.0248,-0.0821]
HAnimSegment622 = x3d.HAnimSegment(DEF="hanim_r_cuneiform_3")
HAnimSegment622.name = "r_cuneiform_3"
Transform623 = x3d.Transform()
Transform623.translation = [-0.0928,0.0248,-0.0821]
Transform624 = x3d.Transform()
Shape625 = x3d.Shape(USE="HAnimJointShape")

Transform624.children.append(Shape625)

Transform623.children.append(Transform624)

HAnimSegment622.children.append(Transform623)
Shape626 = x3d.Shape()
LineSet627 = x3d.LineSet()
LineSet627.vertexCount = [2]
ColorRGBA628 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet627.color = ColorRGBA628
Coordinate629 = x3d.Coordinate()
Coordinate629.point = [(-0.0928, 0.0248, -0.0821),(-0.0944, 0.0175, -0.0625)]

LineSet627.coord = Coordinate629

Shape626.geometry = LineSet627

HAnimSegment622.children.append(Shape626)

HAnimJoint621.children.append(HAnimSegment622)
HAnimJoint630 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_3")
HAnimJoint630.name = "r_tarsometatarsal_3"
HAnimJoint630.center = [-0.0944,0.0175,-0.0625]
HAnimSegment631 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_3")
HAnimSegment631.name = "r_metatarsal_3"
Transform632 = x3d.Transform()
Transform632.translation = [-0.0944,0.0175,-0.0625]
Transform633 = x3d.Transform()
Shape634 = x3d.Shape(USE="HAnimJointShape")

Transform633.children.append(Shape634)

Transform632.children.append(Transform633)

HAnimSegment631.children.append(Transform632)
Shape635 = x3d.Shape()
LineSet636 = x3d.LineSet()
LineSet636.vertexCount = [2]
ColorRGBA637 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet636.color = ColorRGBA637
Coordinate638 = x3d.Coordinate()
Coordinate638.point = [(-0.0944, 0.0175, -0.0625),(-0.0963, 0.0065, -0.0065)]

LineSet636.coord = Coordinate638

Shape635.geometry = LineSet636

HAnimSegment631.children.append(Shape635)

HAnimJoint630.children.append(HAnimSegment631)
HAnimJoint639 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_3")
HAnimJoint639.name = "r_metatarsophalangeal_3"
HAnimJoint639.center = [-0.0963,0.0065,-0.0065]
HAnimSegment640 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_3")
HAnimSegment640.name = "r_tarsal_proximal_phalanx_3"
Transform641 = x3d.Transform()
Transform641.translation = [-0.0963,0.0065,-0.0065]
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
Coordinate647.point = [(-0.0963, 0.0065, -0.0065),(-0.0987, 0.0034, 0.0086)]

LineSet645.coord = Coordinate647

Shape644.geometry = LineSet645

HAnimSegment640.children.append(Shape644)

HAnimJoint639.children.append(HAnimSegment640)
HAnimJoint648 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_3")
HAnimJoint648.name = "r_tarsal_proximal_interphalangeal_3"
HAnimJoint648.center = [-0.0987,0.0034,0.0086]
HAnimSegment649 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_3")
HAnimSegment649.name = "r_tarsal_middle_phalanx_3"
Transform650 = x3d.Transform()
Transform650.translation = [-0.0987,0.0034,0.0086]
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
Coordinate656.point = [(-0.0987, 0.0034, 0.0086),(-0.1002, 0.0013, 0.0178)]

LineSet654.coord = Coordinate656

Shape653.geometry = LineSet654

HAnimSegment649.children.append(Shape653)

HAnimJoint648.children.append(HAnimSegment649)
HAnimJoint657 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_3")
HAnimJoint657.name = "r_tarsal_distal_interphalangeal_3"
HAnimJoint657.center = [-0.1002,0.0013,0.0178]

HAnimJoint648.children.append(HAnimJoint657)

HAnimJoint639.children.append(HAnimJoint648)

HAnimJoint630.children.append(HAnimJoint639)

HAnimJoint621.children.append(HAnimJoint630)

HAnimJoint532.children.append(HAnimJoint621)

HAnimJoint505.children.append(HAnimJoint532)
HAnimJoint658 = x3d.HAnimJoint(DEF="hanim_r_calcaneocuboid")
HAnimJoint658.name = "r_calcaneocuboid"
HAnimJoint658.center = [-0.0889,0.0494,-0.1278]
HAnimSegment659 = x3d.HAnimSegment(DEF="hanim_r_calcaneus")
HAnimSegment659.name = "r_calcaneus"
Transform660 = x3d.Transform()
Transform660.translation = [-0.0889,0.0494,-0.1278]
Transform661 = x3d.Transform()
Shape662 = x3d.Shape(USE="HAnimJointShape")

Transform661.children.append(Shape662)

Transform660.children.append(Transform661)

HAnimSegment659.children.append(Transform660)
Shape663 = x3d.Shape()
LineSet664 = x3d.LineSet()
LineSet664.vertexCount = [2]
ColorRGBA665 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet664.color = ColorRGBA665
Coordinate666 = x3d.Coordinate()
Coordinate666.point = [(-0.0889, 0.0494, -0.1278),(-0.1105, 0.0267, -0.0998)]

LineSet664.coord = Coordinate666

Shape663.geometry = LineSet664

HAnimSegment659.children.append(Shape663)

HAnimJoint658.children.append(HAnimSegment659)
HAnimJoint667 = x3d.HAnimJoint(DEF="hanim_r_transversetarsal")
HAnimJoint667.name = "r_transversetarsal"
HAnimJoint667.center = [-0.1105,0.0267,-0.0998]
HAnimSegment668 = x3d.HAnimSegment(DEF="hanim_r_cuboid")
HAnimSegment668.name = "r_cuboid"
Transform669 = x3d.Transform()
Transform669.translation = [-0.1105,0.0267,-0.0998]
Transform670 = x3d.Transform()
Shape671 = x3d.Shape(USE="HAnimJointShape")

Transform670.children.append(Shape671)

Transform669.children.append(Transform670)

HAnimSegment668.children.append(Transform669)
Shape672 = x3d.Shape()
LineSet673 = x3d.LineSet()
LineSet673.vertexCount = [2]
ColorRGBA674 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet673.color = ColorRGBA674
Coordinate675 = x3d.Coordinate()
Coordinate675.point = [(-0.1105, 0.0267, -0.0998),(-0.1063, 0.016, -0.0634)]

LineSet673.coord = Coordinate675

Shape672.geometry = LineSet673

HAnimSegment668.children.append(Shape672)
Shape676 = x3d.Shape()
LineSet677 = x3d.LineSet()
LineSet677.vertexCount = [2]
ColorRGBA678 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet677.color = ColorRGBA678
Coordinate679 = x3d.Coordinate()
Coordinate679.point = [(-0.1105, 0.0267, -0.0998),(-0.1206, 0.0124, -0.0671)]

LineSet677.coord = Coordinate679

Shape676.geometry = LineSet677

HAnimSegment668.children.append(Shape676)

HAnimJoint667.children.append(HAnimSegment668)
HAnimJoint680 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_4")
HAnimJoint680.name = "r_tarsometatarsal_4"
HAnimJoint680.center = [-0.1063,0.016,-0.0634]
HAnimSegment681 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_4")
HAnimSegment681.name = "r_metatarsal_4"
Transform682 = x3d.Transform()
Transform682.translation = [-0.1063,0.016,-0.0634]
Transform683 = x3d.Transform()
Shape684 = x3d.Shape(USE="HAnimJointShape")

Transform683.children.append(Shape684)

Transform682.children.append(Transform683)

HAnimSegment681.children.append(Transform682)
Shape685 = x3d.Shape()
LineSet686 = x3d.LineSet()
LineSet686.vertexCount = [2]
ColorRGBA687 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet686.color = ColorRGBA687
Coordinate688 = x3d.Coordinate()
Coordinate688.point = [(-0.1063, 0.016, -0.0634),(-0.1097, 0.0058, -0.0107)]

LineSet686.coord = Coordinate688

Shape685.geometry = LineSet686

HAnimSegment681.children.append(Shape685)

HAnimJoint680.children.append(HAnimSegment681)
HAnimJoint689 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_4")
HAnimJoint689.name = "r_metatarsophalangeal_4"
HAnimJoint689.center = [-0.1097,0.0058,-0.0107]
HAnimSegment690 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_4")
HAnimSegment690.name = "r_tarsal_proximal_phalanx_4"
Transform691 = x3d.Transform()
Transform691.translation = [-0.1097,0.0058,-0.0107]
Transform692 = x3d.Transform()
Shape693 = x3d.Shape(USE="HAnimJointShape")

Transform692.children.append(Shape693)

Transform691.children.append(Transform692)

HAnimSegment690.children.append(Transform691)
Shape694 = x3d.Shape()
LineSet695 = x3d.LineSet()
LineSet695.vertexCount = [2]
ColorRGBA696 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet695.color = ColorRGBA696
Coordinate697 = x3d.Coordinate()
Coordinate697.point = [(-0.1097, 0.0058, -0.0107),(-0.114, 0.0037, 0.0044)]

LineSet695.coord = Coordinate697

Shape694.geometry = LineSet695

HAnimSegment690.children.append(Shape694)

HAnimJoint689.children.append(HAnimSegment690)
HAnimJoint698 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_4")
HAnimJoint698.name = "r_tarsal_proximal_interphalangeal_4"
HAnimJoint698.center = [-0.114,0.0037,0.0044]
HAnimSegment699 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_4")
HAnimSegment699.name = "r_tarsal_middle_phalanx_4"
Transform700 = x3d.Transform()
Transform700.translation = [-0.114,0.0037,0.0044]
Transform701 = x3d.Transform()
Shape702 = x3d.Shape(USE="HAnimJointShape")

Transform701.children.append(Shape702)

Transform700.children.append(Transform701)

HAnimSegment699.children.append(Transform700)
Shape703 = x3d.Shape()
LineSet704 = x3d.LineSet()
LineSet704.vertexCount = [2]
ColorRGBA705 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet704.color = ColorRGBA705
Coordinate706 = x3d.Coordinate()
Coordinate706.point = [(-0.114, 0.0037, 0.0044),(-0.1155, 0.0008, 0.0118)]

LineSet704.coord = Coordinate706

Shape703.geometry = LineSet704

HAnimSegment699.children.append(Shape703)

HAnimJoint698.children.append(HAnimSegment699)
HAnimJoint707 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_4")
HAnimJoint707.name = "r_tarsal_distal_interphalangeal_4"
HAnimJoint707.center = [-0.1155,0.0008,0.0118]

HAnimJoint698.children.append(HAnimJoint707)

HAnimJoint689.children.append(HAnimJoint698)

HAnimJoint680.children.append(HAnimJoint689)

HAnimJoint667.children.append(HAnimJoint680)
HAnimJoint708 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_5")
HAnimJoint708.name = "r_tarsometatarsal_5"
HAnimJoint708.center = [-0.1206,0.0124,-0.0671]
HAnimSegment709 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_5")
HAnimSegment709.name = "r_metatarsal_5"
Transform710 = x3d.Transform()
Transform710.translation = [-0.1206,0.0124,-0.0671]
Transform711 = x3d.Transform()
Shape712 = x3d.Shape(USE="HAnimJointShape")

Transform711.children.append(Shape712)

Transform710.children.append(Transform711)

HAnimSegment709.children.append(Transform710)
Shape713 = x3d.Shape()
LineSet714 = x3d.LineSet()
LineSet714.vertexCount = [2]
ColorRGBA715 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet714.color = ColorRGBA715
Coordinate716 = x3d.Coordinate()
Coordinate716.point = [(-0.1206, 0.0124, -0.0671),(-0.1239, 0.0051, -0.0153)]

LineSet714.coord = Coordinate716

Shape713.geometry = LineSet714

HAnimSegment709.children.append(Shape713)

HAnimJoint708.children.append(HAnimSegment709)
HAnimJoint717 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_5")
HAnimJoint717.name = "r_metatarsophalangeal_5"
HAnimJoint717.center = [-0.1239,0.0051,-0.0153]
HAnimSegment718 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_5")
HAnimSegment718.name = "r_tarsal_proximal_phalanx_5"
Transform719 = x3d.Transform()
Transform719.translation = [-0.1239,0.0051,-0.0153]
Transform720 = x3d.Transform()
Shape721 = x3d.Shape(USE="HAnimJointShape")

Transform720.children.append(Shape721)

Transform719.children.append(Transform720)

HAnimSegment718.children.append(Transform719)
Shape722 = x3d.Shape()
LineSet723 = x3d.LineSet()
LineSet723.vertexCount = [2]
ColorRGBA724 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet723.color = ColorRGBA724
Coordinate725 = x3d.Coordinate()
Coordinate725.point = [(-0.1239, 0.0051, -0.0153),(-0.1262, 0.0023, -0.0077)]

LineSet723.coord = Coordinate725

Shape722.geometry = LineSet723

HAnimSegment718.children.append(Shape722)
HAnimSite726 = x3d.HAnimSite(DEF="hanim_r_metatarsal_phalanx_5")
HAnimSite726.name = "r_metatarsal_phalanx_5"
TouchSensor727 = x3d.TouchSensor()
TouchSensor727.description = "HAnimSite 60 r_metatarsal_phalanx_5"

HAnimSite726.children.append(TouchSensor727)
Shape728 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite726.children.append(Shape728)
Billboard729 = x3d.Billboard()
Shape730 = x3d.Shape()
Text731 = x3d.Text()
Text731.string = ["60"]
FontStyle732 = x3d.FontStyle()
FontStyle732.size = 0.035

Text731.fontStyle = FontStyle732

Shape730.geometry = Text731

Billboard729.children.append(Shape730)

HAnimSite726.children.append(Billboard729)

HAnimSegment718.children.append(HAnimSite726)

HAnimJoint717.children.append(HAnimSegment718)
HAnimJoint733 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_5")
HAnimJoint733.name = "r_tarsal_proximal_interphalangeal_5"
HAnimJoint733.center = [-0.1262,0.0023,-0.0077]
HAnimSegment734 = x3d.HAnimSegment(DEF="hanim_r_tarsal_middle_phalanx_5")
HAnimSegment734.name = "r_tarsal_middle_phalanx_5"
Transform735 = x3d.Transform()
Transform735.translation = [-0.1262,0.0023,-0.0077]
Transform736 = x3d.Transform()
Shape737 = x3d.Shape(USE="HAnimJointShape")

Transform736.children.append(Shape737)

Transform735.children.append(Transform736)

HAnimSegment734.children.append(Transform735)
Shape738 = x3d.Shape()
LineSet739 = x3d.LineSet()
LineSet739.vertexCount = [2]
ColorRGBA740 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet739.color = ColorRGBA740
Coordinate741 = x3d.Coordinate()
Coordinate741.point = [(-0.1262, 0.0023, -0.0077),(-0.1271, 0, 0)]

LineSet739.coord = Coordinate741

Shape738.geometry = LineSet739

HAnimSegment734.children.append(Shape738)

HAnimJoint733.children.append(HAnimSegment734)
HAnimJoint742 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_5")
HAnimJoint742.name = "r_tarsal_distal_interphalangeal_5"
HAnimJoint742.center = [-0.1271,0,0]

HAnimJoint733.children.append(HAnimJoint742)

HAnimJoint717.children.append(HAnimJoint733)

HAnimJoint708.children.append(HAnimJoint717)

HAnimJoint667.children.append(HAnimJoint708)

HAnimJoint658.children.append(HAnimJoint667)

HAnimJoint505.children.append(HAnimJoint658)

HAnimJoint475.children.append(HAnimJoint505)

HAnimJoint438.children.append(HAnimJoint475)

HAnimJoint50.children.append(HAnimJoint438)

HAnimJoint37.children.append(HAnimJoint50)
HAnimJoint743 = x3d.HAnimJoint(DEF="hanim_vl5")
HAnimJoint743.name = "vl5"
HAnimJoint743.center = [0.0028,1.0568,-0.0776]
HAnimSegment744 = x3d.HAnimSegment(DEF="hanim_l5")
HAnimSegment744.name = "l5"
Transform745 = x3d.Transform()
Transform745.translation = [0.0028,1.0568,-0.0776]
Transform746 = x3d.Transform()
Shape747 = x3d.Shape(USE="HAnimJointShape")

Transform746.children.append(Shape747)

Transform745.children.append(Transform746)

HAnimSegment744.children.append(Transform745)
Shape748 = x3d.Shape()
LineSet749 = x3d.LineSet()
LineSet749.vertexCount = [2]
ColorRGBA750 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet749.color = ColorRGBA750
Coordinate751 = x3d.Coordinate()
Coordinate751.point = [(0.0028, 1.0568, -0.0776),(0.0035, 1.0925, -0.0787)]

LineSet749.coord = Coordinate751

Shape748.geometry = LineSet749

HAnimSegment744.children.append(Shape748)
HAnimSite752 = x3d.HAnimSite(DEF="hanim_navel")
HAnimSite752.name = "navel"
HAnimSite752.translation = [0.0069,1.0966,0.1017]
TouchSensor753 = x3d.TouchSensor()
TouchSensor753.description = "HAnimSite 84 navel"

HAnimSite752.children.append(TouchSensor753)
Shape754 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite752.children.append(Shape754)
Billboard755 = x3d.Billboard()
Shape756 = x3d.Shape()
Text757 = x3d.Text()
Text757.string = ["84"]
FontStyle758 = x3d.FontStyle()
FontStyle758.size = 0.035

Text757.fontStyle = FontStyle758

Shape756.geometry = Text757

Billboard755.children.append(Shape756)

HAnimSite752.children.append(Billboard755)

HAnimSegment744.children.append(HAnimSite752)
HAnimSite759 = x3d.HAnimSite(DEF="hanim_waist_preferred_anterior")
HAnimSite759.name = "waist_preferred_anterior"
TouchSensor760 = x3d.TouchSensor()
TouchSensor760.description = "HAnimSite 26 waist_preferred_anterior"

HAnimSite759.children.append(TouchSensor760)
Shape761 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite759.children.append(Shape761)
Billboard762 = x3d.Billboard()
Shape763 = x3d.Shape()
Text764 = x3d.Text()
Text764.string = ["26"]
FontStyle765 = x3d.FontStyle()
FontStyle765.size = 0.035

Text764.fontStyle = FontStyle765

Shape763.geometry = Text764

Billboard762.children.append(Shape763)

HAnimSite759.children.append(Billboard762)

HAnimSegment744.children.append(HAnimSite759)
HAnimSite766 = x3d.HAnimSite(DEF="hanim_waist_preferred_posterior")
HAnimSite766.name = "waist_preferred_posterior"
HAnimSite766.translation = [0.29,1.0915,-0.1091]
TouchSensor767 = x3d.TouchSensor()
TouchSensor767.description = "HAnimSite 27 waist_preferred_posterior"

HAnimSite766.children.append(TouchSensor767)
Shape768 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite766.children.append(Shape768)
Billboard769 = x3d.Billboard()
Shape770 = x3d.Shape()
Text771 = x3d.Text()
Text771.string = ["27"]
FontStyle772 = x3d.FontStyle()
FontStyle772.size = 0.035

Text771.fontStyle = FontStyle772

Shape770.geometry = Text771

Billboard769.children.append(Shape770)

HAnimSite766.children.append(Billboard769)

HAnimSegment744.children.append(HAnimSite766)

HAnimJoint743.children.append(HAnimSegment744)
HAnimJoint773 = x3d.HAnimJoint(DEF="hanim_vl4")
HAnimJoint773.name = "vl4"
HAnimJoint773.center = [0.0035,1.0925,-0.0787]
HAnimSegment774 = x3d.HAnimSegment(DEF="hanim_l4")
HAnimSegment774.name = "l4"
Transform775 = x3d.Transform()
Transform775.translation = [0.0035,1.0925,-0.0787]
Transform776 = x3d.Transform()
Shape777 = x3d.Shape(USE="HAnimJointShape")

Transform776.children.append(Shape777)

Transform775.children.append(Transform776)

HAnimSegment774.children.append(Transform775)
Shape778 = x3d.Shape()
LineSet779 = x3d.LineSet()
LineSet779.vertexCount = [2]
ColorRGBA780 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet779.color = ColorRGBA780
Coordinate781 = x3d.Coordinate()
Coordinate781.point = [(0.0035, 1.0925, -0.0787),(0.0041, 1.1276, -0.0796)]

LineSet779.coord = Coordinate781

Shape778.geometry = LineSet779

HAnimSegment774.children.append(Shape778)

HAnimJoint773.children.append(HAnimSegment774)
HAnimJoint782 = x3d.HAnimJoint(DEF="hanim_vl3")
HAnimJoint782.name = "vl3"
HAnimJoint782.center = [0.0041,1.1276,-0.0796]
HAnimSegment783 = x3d.HAnimSegment(DEF="hanim_l3")
HAnimSegment783.name = "l3"
Transform784 = x3d.Transform()
Transform784.translation = [0.0041,1.1276,-0.0796]
Transform785 = x3d.Transform()
Shape786 = x3d.Shape(USE="HAnimJointShape")

Transform785.children.append(Shape786)

Transform784.children.append(Transform785)

HAnimSegment783.children.append(Transform784)
Shape787 = x3d.Shape()
LineSet788 = x3d.LineSet()
LineSet788.vertexCount = [2]
ColorRGBA789 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet788.color = ColorRGBA789
Coordinate790 = x3d.Coordinate()
Coordinate790.point = [(0.0041, 1.1276, -0.0796),(0.0045, 1.1546, -0.08)]

LineSet788.coord = Coordinate790

Shape787.geometry = LineSet788

HAnimSegment783.children.append(Shape787)

HAnimJoint782.children.append(HAnimSegment783)
HAnimJoint791 = x3d.HAnimJoint(DEF="hanim_vl2")
HAnimJoint791.name = "vl2"
HAnimJoint791.center = [0.0045,1.1546,-0.08]
HAnimSegment792 = x3d.HAnimSegment(DEF="hanim_l2")
HAnimSegment792.name = "l2"
Transform793 = x3d.Transform()
Transform793.translation = [0.0045,1.1546,-0.08]
Transform794 = x3d.Transform()
Shape795 = x3d.Shape(USE="HAnimJointShape")

Transform794.children.append(Shape795)

Transform793.children.append(Transform794)

HAnimSegment792.children.append(Transform793)
Shape796 = x3d.Shape()
LineSet797 = x3d.LineSet()
LineSet797.vertexCount = [2]
ColorRGBA798 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet797.color = ColorRGBA798
Coordinate799 = x3d.Coordinate()
Coordinate799.point = [(0.0045, 1.1546, -0.08),(0.0048, 1.1912, -0.0805)]

LineSet797.coord = Coordinate799

Shape796.geometry = LineSet797

HAnimSegment792.children.append(Shape796)
HAnimSite800 = x3d.HAnimSite(DEF="hanim_l_rib10")
HAnimSite800.name = "l_rib10"
HAnimSite800.translation = [0.0871,1.1925,0.0992]
TouchSensor801 = x3d.TouchSensor()
TouchSensor801.description = "HAnimSite 28 l_rib10"

HAnimSite800.children.append(TouchSensor801)
Shape802 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite800.children.append(Shape802)
Billboard803 = x3d.Billboard()
Shape804 = x3d.Shape()
Text805 = x3d.Text()
Text805.string = ["28"]
FontStyle806 = x3d.FontStyle()
FontStyle806.size = 0.035

Text805.fontStyle = FontStyle806

Shape804.geometry = Text805

Billboard803.children.append(Shape804)

HAnimSite800.children.append(Billboard803)

HAnimSegment792.children.append(HAnimSite800)
HAnimSite807 = x3d.HAnimSite(DEF="hanim_r_rib10")
HAnimSite807.name = "r_rib10"
HAnimSite807.translation = [-0.0711,1.1941,0.1016]
TouchSensor808 = x3d.TouchSensor()
TouchSensor808.description = "HAnimSite 30 r_rib10"

HAnimSite807.children.append(TouchSensor808)
Shape809 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite807.children.append(Shape809)
Billboard810 = x3d.Billboard()
Shape811 = x3d.Shape()
Text812 = x3d.Text()
Text812.string = ["30"]
FontStyle813 = x3d.FontStyle()
FontStyle813.size = 0.035

Text812.fontStyle = FontStyle813

Shape811.geometry = Text812

Billboard810.children.append(Shape811)

HAnimSite807.children.append(Billboard810)

HAnimSegment792.children.append(HAnimSite807)
HAnimSite814 = x3d.HAnimSite(DEF="hanim_spine_2_middle_back")
HAnimSite814.name = "spine_2_middle_back"
TouchSensor815 = x3d.TouchSensor()
TouchSensor815.description = "HAnimSite  spine_2_middle_back"

HAnimSite814.children.append(TouchSensor815)
Shape816 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite814.children.append(Shape816)
Billboard817 = x3d.Billboard()
Shape818 = x3d.Shape()
Text819 = x3d.Text()
Text819.string = [""]
FontStyle820 = x3d.FontStyle()
FontStyle820.size = 0.035

Text819.fontStyle = FontStyle820

Shape818.geometry = Text819

Billboard817.children.append(Shape818)

HAnimSite814.children.append(Billboard817)

HAnimSegment792.children.append(HAnimSite814)

HAnimJoint791.children.append(HAnimSegment792)
HAnimJoint821 = x3d.HAnimJoint(DEF="hanim_vl1")
HAnimJoint821.name = "vl1"
HAnimJoint821.center = [0.0048,1.1912,-0.0805]
HAnimSegment822 = x3d.HAnimSegment(DEF="hanim_l1")
HAnimSegment822.name = "l1"
Transform823 = x3d.Transform()
Transform823.translation = [0.0048,1.1912,-0.0805]
Transform824 = x3d.Transform()
Shape825 = x3d.Shape(USE="HAnimJointShape")

Transform824.children.append(Shape825)

Transform823.children.append(Transform824)

HAnimSegment822.children.append(Transform823)
Shape826 = x3d.Shape()
LineSet827 = x3d.LineSet()
LineSet827.vertexCount = [2]
ColorRGBA828 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet827.color = ColorRGBA828
Coordinate829 = x3d.Coordinate()
Coordinate829.point = [(0.0048, 1.1912, -0.0805),(0.0051, 1.2278, -0.0808)]

LineSet827.coord = Coordinate829

Shape826.geometry = LineSet827

HAnimSegment822.children.append(Shape826)

HAnimJoint821.children.append(HAnimSegment822)
HAnimJoint830 = x3d.HAnimJoint(DEF="hanim_vt12")
HAnimJoint830.name = "vt12"
HAnimJoint830.center = [0.0051,1.2278,-0.0808]
HAnimSegment831 = x3d.HAnimSegment(DEF="hanim_t12")
HAnimSegment831.name = "t12"
Transform832 = x3d.Transform()
Transform832.translation = [0.0051,1.2278,-0.0808]
Transform833 = x3d.Transform()
Shape834 = x3d.Shape(USE="HAnimJointShape")

Transform833.children.append(Shape834)

Transform832.children.append(Transform833)

HAnimSegment831.children.append(Transform832)
Shape835 = x3d.Shape()
LineSet836 = x3d.LineSet()
LineSet836.vertexCount = [2]
ColorRGBA837 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet836.color = ColorRGBA837
Coordinate838 = x3d.Coordinate()
Coordinate838.point = [(0.0051, 1.2278, -0.0808),(0.0053, 1.2679, -0.081)]

LineSet836.coord = Coordinate838

Shape835.geometry = LineSet836

HAnimSegment831.children.append(Shape835)

HAnimJoint830.children.append(HAnimSegment831)
HAnimJoint839 = x3d.HAnimJoint(DEF="hanim_vt11")
HAnimJoint839.name = "vt11"
HAnimJoint839.center = [0.0053,1.2679,-0.081]
HAnimSegment840 = x3d.HAnimSegment(DEF="hanim_t11")
HAnimSegment840.name = "t11"
Transform841 = x3d.Transform()
Transform841.translation = [0.0053,1.2679,-0.081]
Transform842 = x3d.Transform()
Shape843 = x3d.Shape(USE="HAnimJointShape")

Transform842.children.append(Shape843)

Transform841.children.append(Transform842)

HAnimSegment840.children.append(Transform841)
Shape844 = x3d.Shape()
LineSet845 = x3d.LineSet()
LineSet845.vertexCount = [2]
ColorRGBA846 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet845.color = ColorRGBA846
Coordinate847 = x3d.Coordinate()
Coordinate847.point = [(0.0053, 1.2679, -0.081),(0.0056, 1.2848, -0.0822)]

LineSet845.coord = Coordinate847

Shape844.geometry = LineSet845

HAnimSegment840.children.append(Shape844)

HAnimJoint839.children.append(HAnimSegment840)
HAnimJoint848 = x3d.HAnimJoint(DEF="hanim_vt10")
HAnimJoint848.name = "vt10"
HAnimJoint848.center = [0.0056,1.2848,-0.0822]
HAnimSegment849 = x3d.HAnimSegment(DEF="hanim_t10")
HAnimSegment849.name = "t10"
Transform850 = x3d.Transform()
Transform850.translation = [0.0056,1.2848,-0.0822]
Transform851 = x3d.Transform()
Shape852 = x3d.Shape(USE="HAnimJointShape")

Transform851.children.append(Shape852)

Transform850.children.append(Transform851)

HAnimSegment849.children.append(Transform850)
Shape853 = x3d.Shape()
LineSet854 = x3d.LineSet()
LineSet854.vertexCount = [2]
ColorRGBA855 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet854.color = ColorRGBA855
Coordinate856 = x3d.Coordinate()
Coordinate856.point = [(0.0056, 1.2848, -0.0822),(0.0057, 1.3126, -0.0838)]

LineSet854.coord = Coordinate856

Shape853.geometry = LineSet854

HAnimSegment849.children.append(Shape853)
HAnimSite857 = x3d.HAnimSite(DEF="hanim_substernale")
HAnimSite857.name = "substernale"
HAnimSite857.translation = [0.0085,1.2995,0.1147]
TouchSensor858 = x3d.TouchSensor()
TouchSensor858.description = "HAnimSite 13 substernale"

HAnimSite857.children.append(TouchSensor858)
Shape859 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite857.children.append(Shape859)
Billboard860 = x3d.Billboard()
Shape861 = x3d.Shape()
Text862 = x3d.Text()
Text862.string = ["13"]
FontStyle863 = x3d.FontStyle()
FontStyle863.size = 0.035

Text862.fontStyle = FontStyle863

Shape861.geometry = Text862

Billboard860.children.append(Shape861)

HAnimSite857.children.append(Billboard860)

HAnimSegment849.children.append(HAnimSite857)

HAnimJoint848.children.append(HAnimSegment849)
HAnimJoint864 = x3d.HAnimJoint(DEF="hanim_vt9")
HAnimJoint864.name = "vt9"
HAnimJoint864.center = [0.0057,1.3126,-0.0838]
HAnimSegment865 = x3d.HAnimSegment(DEF="hanim_t9")
HAnimSegment865.name = "t9"
Transform866 = x3d.Transform()
Transform866.translation = [0.0057,1.3126,-0.0838]
Transform867 = x3d.Transform()
Shape868 = x3d.Shape(USE="HAnimJointShape")

Transform867.children.append(Shape868)

Transform866.children.append(Transform867)

HAnimSegment865.children.append(Transform866)
Shape869 = x3d.Shape()
LineSet870 = x3d.LineSet()
LineSet870.vertexCount = [2]
ColorRGBA871 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet870.color = ColorRGBA871
Coordinate872 = x3d.Coordinate()
Coordinate872.point = [(0.0057, 1.3126, -0.0838),(0.0057, 1.3382, -0.0845)]

LineSet870.coord = Coordinate872

Shape869.geometry = LineSet870

HAnimSegment865.children.append(Shape869)
HAnimSite873 = x3d.HAnimSite(DEF="hanim_l_thelion")
HAnimSite873.name = "l_thelion"
HAnimSite873.translation = [0.0918,1.3382,0.1192]
TouchSensor874 = x3d.TouchSensor()
TouchSensor874.description = "HAnimSite 29 l_thelion"

HAnimSite873.children.append(TouchSensor874)
Shape875 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite873.children.append(Shape875)
Billboard876 = x3d.Billboard()
Shape877 = x3d.Shape()
Text878 = x3d.Text()
Text878.string = ["29"]
FontStyle879 = x3d.FontStyle()
FontStyle879.size = 0.035

Text878.fontStyle = FontStyle879

Shape877.geometry = Text878

Billboard876.children.append(Shape877)

HAnimSite873.children.append(Billboard876)

HAnimSegment865.children.append(HAnimSite873)
HAnimSite880 = x3d.HAnimSite(DEF="hanim_r_thelion")
HAnimSite880.name = "r_thelion"
HAnimSite880.translation = [-0.0736,1.3385,0.1217]
TouchSensor881 = x3d.TouchSensor()
TouchSensor881.description = "HAnimSite 31 r_thelion"

HAnimSite880.children.append(TouchSensor881)
Shape882 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite880.children.append(Shape882)
Billboard883 = x3d.Billboard()
Shape884 = x3d.Shape()
Text885 = x3d.Text()
Text885.string = ["31"]
FontStyle886 = x3d.FontStyle()
FontStyle886.size = 0.035

Text885.fontStyle = FontStyle886

Shape884.geometry = Text885

Billboard883.children.append(Shape884)

HAnimSite880.children.append(Billboard883)

HAnimSegment865.children.append(HAnimSite880)

HAnimJoint864.children.append(HAnimSegment865)
HAnimJoint887 = x3d.HAnimJoint(DEF="hanim_vt8")
HAnimJoint887.name = "vt8"
HAnimJoint887.center = [0.0057,1.3382,-0.0845]
HAnimSegment888 = x3d.HAnimSegment(DEF="hanim_t8")
HAnimSegment888.name = "t8"
Transform889 = x3d.Transform()
Transform889.translation = [0.0057,1.3382,-0.0845]
Transform890 = x3d.Transform()
Shape891 = x3d.Shape(USE="HAnimJointShape")

Transform890.children.append(Shape891)

Transform889.children.append(Transform890)

HAnimSegment888.children.append(Transform889)
Shape892 = x3d.Shape()
LineSet893 = x3d.LineSet()
LineSet893.vertexCount = [2]
ColorRGBA894 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet893.color = ColorRGBA894
Coordinate895 = x3d.Coordinate()
Coordinate895.point = [(0.0057, 1.3382, -0.0845),(0.0058, 1.3625, -0.0833)]

LineSet893.coord = Coordinate895

Shape892.geometry = LineSet893

HAnimSegment888.children.append(Shape892)

HAnimJoint887.children.append(HAnimSegment888)
HAnimJoint896 = x3d.HAnimJoint(DEF="hanim_vt7")
HAnimJoint896.name = "vt7"
HAnimJoint896.center = [0.0058,1.3625,-0.0833]
HAnimSegment897 = x3d.HAnimSegment(DEF="hanim_t7")
HAnimSegment897.name = "t7"
Transform898 = x3d.Transform()
Transform898.translation = [0.0058,1.3625,-0.0833]
Transform899 = x3d.Transform()
Shape900 = x3d.Shape(USE="HAnimJointShape")

Transform899.children.append(Shape900)

Transform898.children.append(Transform899)

HAnimSegment897.children.append(Transform898)
Shape901 = x3d.Shape()
LineSet902 = x3d.LineSet()
LineSet902.vertexCount = [2]
ColorRGBA903 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet902.color = ColorRGBA903
Coordinate904 = x3d.Coordinate()
Coordinate904.point = [(0.0058, 1.3625, -0.0833),(0.0059, 1.3866, -0.08)]

LineSet902.coord = Coordinate904

Shape901.geometry = LineSet902

HAnimSegment897.children.append(Shape901)

HAnimJoint896.children.append(HAnimSegment897)
HAnimJoint905 = x3d.HAnimJoint(DEF="hanim_vt6")
HAnimJoint905.name = "vt6"
HAnimJoint905.center = [0.0059,1.3866,-0.08]
HAnimSegment906 = x3d.HAnimSegment(DEF="hanim_t6")
HAnimSegment906.name = "t6"
Transform907 = x3d.Transform()
Transform907.translation = [0.0059,1.3866,-0.08]
Transform908 = x3d.Transform()
Shape909 = x3d.Shape(USE="HAnimJointShape")

Transform908.children.append(Shape909)

Transform907.children.append(Transform908)

HAnimSegment906.children.append(Transform907)
Shape910 = x3d.Shape()
LineSet911 = x3d.LineSet()
LineSet911.vertexCount = [2]
ColorRGBA912 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet911.color = ColorRGBA912
Coordinate913 = x3d.Coordinate()
Coordinate913.point = [(0.0059, 1.3866, -0.08),(0.006, 1.4102, -0.0745)]

LineSet911.coord = Coordinate913

Shape910.geometry = LineSet911

HAnimSegment906.children.append(Shape910)
HAnimSite914 = x3d.HAnimSite(DEF="hanim_l_chest_midsagittal_plane")
HAnimSite914.name = "l_chest_midsagittal_plane"
TouchSensor915 = x3d.TouchSensor()
TouchSensor915.description = "HAnimSite 94 l_chest_midsagittal_plane"

HAnimSite914.children.append(TouchSensor915)
Shape916 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite914.children.append(Shape916)
Billboard917 = x3d.Billboard()
Shape918 = x3d.Shape()
Text919 = x3d.Text()
Text919.string = ["94"]
FontStyle920 = x3d.FontStyle()
FontStyle920.size = 0.035

Text919.fontStyle = FontStyle920

Shape918.geometry = Text919

Billboard917.children.append(Shape918)

HAnimSite914.children.append(Billboard917)

HAnimSegment906.children.append(HAnimSite914)
HAnimSite921 = x3d.HAnimSite(DEF="hanim_mesosternale")
HAnimSite921.name = "mesosternale"
TouchSensor922 = x3d.TouchSensor()
TouchSensor922.description = "HAnimSite 88 mesosternale"

HAnimSite921.children.append(TouchSensor922)
Shape923 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite921.children.append(Shape923)
Billboard924 = x3d.Billboard()
Shape925 = x3d.Shape()
Text926 = x3d.Text()
Text926.string = ["88"]
FontStyle927 = x3d.FontStyle()
FontStyle927.size = 0.035

Text926.fontStyle = FontStyle927

Shape925.geometry = Text926

Billboard924.children.append(Shape925)

HAnimSite921.children.append(Billboard924)

HAnimSegment906.children.append(HAnimSite921)
HAnimSite928 = x3d.HAnimSite(DEF="hanim_r_chest_midsagittal_plane")
HAnimSite928.name = "r_chest_midsagittal_plane"
TouchSensor929 = x3d.TouchSensor()
TouchSensor929.description = "HAnimSite 95 r_chest_midsagittal_plane"

HAnimSite928.children.append(TouchSensor929)
Shape930 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite928.children.append(Shape930)
Billboard931 = x3d.Billboard()
Shape932 = x3d.Shape()
Text933 = x3d.Text()
Text933.string = ["95"]
FontStyle934 = x3d.FontStyle()
FontStyle934.size = 0.035

Text933.fontStyle = FontStyle934

Shape932.geometry = Text933

Billboard931.children.append(Shape932)

HAnimSite928.children.append(Billboard931)

HAnimSegment906.children.append(HAnimSite928)
HAnimSite935 = x3d.HAnimSite(DEF="hanim_rear_center_midsagittal_plane")
HAnimSite935.name = "rear_center_midsagittal_plane"
TouchSensor936 = x3d.TouchSensor()
TouchSensor936.description = "HAnimSite 92 rear_center_midsagittal_plane"

HAnimSite935.children.append(TouchSensor936)
Shape937 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite935.children.append(Shape937)
Billboard938 = x3d.Billboard()
Shape939 = x3d.Shape()
Text940 = x3d.Text()
Text940.string = ["92"]
FontStyle941 = x3d.FontStyle()
FontStyle941.size = 0.035

Text940.fontStyle = FontStyle941

Shape939.geometry = Text940

Billboard938.children.append(Shape939)

HAnimSite935.children.append(Billboard938)

HAnimSegment906.children.append(HAnimSite935)

HAnimJoint905.children.append(HAnimSegment906)
HAnimJoint942 = x3d.HAnimJoint(DEF="hanim_vt5")
HAnimJoint942.name = "vt5"
HAnimJoint942.center = [0.006,1.4102,-0.0745]
HAnimSegment943 = x3d.HAnimSegment(DEF="hanim_t5")
HAnimSegment943.name = "t5"
Transform944 = x3d.Transform()
Transform944.translation = [0.006,1.4102,-0.0745]
Transform945 = x3d.Transform()
Shape946 = x3d.Shape(USE="HAnimJointShape")

Transform945.children.append(Shape946)

Transform944.children.append(Transform945)

HAnimSegment943.children.append(Transform944)
Shape947 = x3d.Shape()
LineSet948 = x3d.LineSet()
LineSet948.vertexCount = [2]
ColorRGBA949 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet948.color = ColorRGBA949
Coordinate950 = x3d.Coordinate()
Coordinate950.point = [(0.006, 1.4102, -0.0745),(0.0061, 1.432, -0.0675)]

LineSet948.coord = Coordinate950

Shape947.geometry = LineSet948

HAnimSegment943.children.append(Shape947)
HAnimSite951 = x3d.HAnimSite(DEF="hanim_spine_1_middle_back")
HAnimSite951.name = "spine_1_middle_back"
TouchSensor952 = x3d.TouchSensor()
TouchSensor952.description = "HAnimSite 24 spine_1_middle_back"

HAnimSite951.children.append(TouchSensor952)
Shape953 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite951.children.append(Shape953)
Billboard954 = x3d.Billboard()
Shape955 = x3d.Shape()
Text956 = x3d.Text()
Text956.string = ["24"]
FontStyle957 = x3d.FontStyle()
FontStyle957.size = 0.035

Text956.fontStyle = FontStyle957

Shape955.geometry = Text956

Billboard954.children.append(Shape955)

HAnimSite951.children.append(Billboard954)

HAnimSegment943.children.append(HAnimSite951)

HAnimJoint942.children.append(HAnimSegment943)
HAnimJoint958 = x3d.HAnimJoint(DEF="hanim_vt4")
HAnimJoint958.name = "vt4"
HAnimJoint958.center = [0.0061,1.432,-0.0675]
HAnimSegment959 = x3d.HAnimSegment(DEF="hanim_t4")
HAnimSegment959.name = "t4"
Transform960 = x3d.Transform()
Transform960.translation = [0.0061,1.432,-0.0675]
Transform961 = x3d.Transform()
Shape962 = x3d.Shape(USE="HAnimJointShape")

Transform961.children.append(Shape962)

Transform960.children.append(Transform961)

HAnimSegment959.children.append(Transform960)
Shape963 = x3d.Shape()
LineSet964 = x3d.LineSet()
LineSet964.vertexCount = [2]
ColorRGBA965 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet964.color = ColorRGBA965
Coordinate966 = x3d.Coordinate()
Coordinate966.point = [(0.0061, 1.432, -0.0675),(0.0062, 1.4583, -0.057)]

LineSet964.coord = Coordinate966

Shape963.geometry = LineSet964

HAnimSegment959.children.append(Shape963)

HAnimJoint958.children.append(HAnimSegment959)
HAnimJoint967 = x3d.HAnimJoint(DEF="hanim_vt3")
HAnimJoint967.name = "vt3"
HAnimJoint967.center = [0.0062,1.4583,-0.057]
HAnimSegment968 = x3d.HAnimSegment(DEF="hanim_t3")
HAnimSegment968.name = "t3"
Transform969 = x3d.Transform()
Transform969.translation = [0.0062,1.4583,-0.057]
Transform970 = x3d.Transform()
Shape971 = x3d.Shape(USE="HAnimJointShape")

Transform970.children.append(Shape971)

Transform969.children.append(Transform970)

HAnimSegment968.children.append(Transform969)
Shape972 = x3d.Shape()
LineSet973 = x3d.LineSet()
LineSet973.vertexCount = [2]
ColorRGBA974 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet973.color = ColorRGBA974
Coordinate975 = x3d.Coordinate()
Coordinate975.point = [(0.0062, 1.4583, -0.057),(0.0063, 1.4761, -0.0484)]

LineSet973.coord = Coordinate975

Shape972.geometry = LineSet973

HAnimSegment968.children.append(Shape972)

HAnimJoint967.children.append(HAnimSegment968)
HAnimJoint976 = x3d.HAnimJoint(DEF="hanim_vt2")
HAnimJoint976.name = "vt2"
HAnimJoint976.center = [0.0063,1.4761,-0.0484]
HAnimSegment977 = x3d.HAnimSegment(DEF="hanim_t2")
HAnimSegment977.name = "t2"
Transform978 = x3d.Transform()
Transform978.translation = [0.0063,1.4761,-0.0484]
Transform979 = x3d.Transform()
Shape980 = x3d.Shape(USE="HAnimJointShape")

Transform979.children.append(Shape980)

Transform978.children.append(Transform979)

HAnimSegment977.children.append(Transform978)
Shape981 = x3d.Shape()
LineSet982 = x3d.LineSet()
LineSet982.vertexCount = [2]
ColorRGBA983 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet982.color = ColorRGBA983
Coordinate984 = x3d.Coordinate()
Coordinate984.point = [(0.0063, 1.4761, -0.0484),(0.0065, 1.4951, -0.0387)]

LineSet982.coord = Coordinate984

Shape981.geometry = LineSet982

HAnimSegment977.children.append(Shape981)

HAnimJoint976.children.append(HAnimSegment977)
HAnimJoint985 = x3d.HAnimJoint(DEF="hanim_vt1")
HAnimJoint985.name = "vt1"
HAnimJoint985.center = [0.0065,1.4951,-0.0387]
HAnimSegment986 = x3d.HAnimSegment(DEF="hanim_t1")
HAnimSegment986.name = "t1"
Transform987 = x3d.Transform()
Transform987.translation = [0.0065,1.4951,-0.0387]
Transform988 = x3d.Transform()
Shape989 = x3d.Shape(USE="HAnimJointShape")

Transform988.children.append(Shape989)

Transform987.children.append(Transform988)

HAnimSegment986.children.append(Transform987)
Shape990 = x3d.Shape()
LineSet991 = x3d.LineSet()
LineSet991.vertexCount = [2]
ColorRGBA992 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet991.color = ColorRGBA992
Coordinate993 = x3d.Coordinate()
Coordinate993.point = [(0.0065, 1.4951, -0.0387),(0.0066, 1.5132, -0.0301)]

LineSet991.coord = Coordinate993

Shape990.geometry = LineSet991

HAnimSegment986.children.append(Shape990)
HAnimSite994 = x3d.HAnimSite(DEF="hanim_cervicale")
HAnimSite994.name = "cervicale"
HAnimSite994.translation = [0.0064,1.52,-0.0815]
TouchSensor995 = x3d.TouchSensor()
TouchSensor995.description = "HAnimSite 10 cervicale"

HAnimSite994.children.append(TouchSensor995)
Shape996 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite994.children.append(Shape996)
Billboard997 = x3d.Billboard()
Shape998 = x3d.Shape()
Text999 = x3d.Text()
Text999.string = ["10"]
FontStyle1000 = x3d.FontStyle()
FontStyle1000.size = 0.035

Text999.fontStyle = FontStyle1000

Shape998.geometry = Text999

Billboard997.children.append(Shape998)

HAnimSite994.children.append(Billboard997)

HAnimSegment986.children.append(HAnimSite994)
HAnimSite1001 = x3d.HAnimSite(DEF="hanim_suprasternale")
HAnimSite1001.name = "suprasternale"
HAnimSite1001.translation = [0.0084,1.4714,0.0551]
TouchSensor1002 = x3d.TouchSensor()
TouchSensor1002.description = "HAnimSite 12 suprasternale"

HAnimSite1001.children.append(TouchSensor1002)
Shape1003 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1001.children.append(Shape1003)
Billboard1004 = x3d.Billboard()
Shape1005 = x3d.Shape()
Text1006 = x3d.Text()
Text1006.string = ["12"]
FontStyle1007 = x3d.FontStyle()
FontStyle1007.size = 0.035

Text1006.fontStyle = FontStyle1007

Shape1005.geometry = Text1006

Billboard1004.children.append(Shape1005)

HAnimSite1001.children.append(Billboard1004)

HAnimSegment986.children.append(HAnimSite1001)
Shape1008 = x3d.Shape()
LineSet1009 = x3d.LineSet()
LineSet1009.vertexCount = [2]
ColorRGBA1010 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1009.color = ColorRGBA1010
Coordinate1011 = x3d.Coordinate()
Coordinate1011.point = [(0.0065, 1.4951, -0.0387),(0.082, 1.4488, -0.0353)]

LineSet1009.coord = Coordinate1011

Shape1008.geometry = LineSet1009

HAnimSegment986.children.append(Shape1008)
Shape1012 = x3d.Shape()
LineSet1013 = x3d.LineSet()
LineSet1013.vertexCount = [2]
ColorRGBA1014 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1013.color = ColorRGBA1014
Coordinate1015 = x3d.Coordinate()
Coordinate1015.point = [(0.0065, 1.4951, -0.0387),(-0.0694, 1.46, -0.033)]

LineSet1013.coord = Coordinate1015

Shape1012.geometry = LineSet1013

HAnimSegment986.children.append(Shape1012)

HAnimJoint985.children.append(HAnimSegment986)
HAnimJoint1016 = x3d.HAnimJoint(DEF="hanim_vc7")
HAnimJoint1016.name = "vc7"
HAnimJoint1016.center = [0.0066,1.5132,-0.0301]
HAnimSegment1017 = x3d.HAnimSegment(DEF="hanim_c7")
HAnimSegment1017.name = "c7"
Transform1018 = x3d.Transform()
Transform1018.translation = [0.0066,1.5132,-0.0301]
Transform1019 = x3d.Transform()
Shape1020 = x3d.Shape(USE="HAnimJointShape")

Transform1019.children.append(Shape1020)

Transform1018.children.append(Transform1019)

HAnimSegment1017.children.append(Transform1018)
Shape1021 = x3d.Shape()
LineSet1022 = x3d.LineSet()
LineSet1022.vertexCount = [2]
ColorRGBA1023 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1022.color = ColorRGBA1023
Coordinate1024 = x3d.Coordinate()
Coordinate1024.point = [(0.0066, 1.5132, -0.0301),(0.0066, 1.5357, -0.0143)]

LineSet1022.coord = Coordinate1024

Shape1021.geometry = LineSet1022

HAnimSegment1017.children.append(Shape1021)
HAnimSite1025 = x3d.HAnimSite(DEF="hanim_l_neck_base")
HAnimSite1025.name = "l_neck_base"
HAnimSite1025.translation = [0.0646,1.5141,-0.038]
TouchSensor1026 = x3d.TouchSensor()
TouchSensor1026.description = "HAnimSite 82 l_neck_base"

HAnimSite1025.children.append(TouchSensor1026)
Shape1027 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1025.children.append(Shape1027)
Billboard1028 = x3d.Billboard()
Shape1029 = x3d.Shape()
Text1030 = x3d.Text()
Text1030.string = ["82"]
FontStyle1031 = x3d.FontStyle()
FontStyle1031.size = 0.035

Text1030.fontStyle = FontStyle1031

Shape1029.geometry = Text1030

Billboard1028.children.append(Shape1029)

HAnimSite1025.children.append(Billboard1028)

HAnimSegment1017.children.append(HAnimSite1025)
HAnimSite1032 = x3d.HAnimSite(DEF="hanim_r_neck_base")
HAnimSite1032.name = "r_neck_base"
HAnimSite1032.translation = [-0.0419,1.5149,-0.022]
TouchSensor1033 = x3d.TouchSensor()
TouchSensor1033.description = "HAnimSite 83 r_neck_base"

HAnimSite1032.children.append(TouchSensor1033)
Shape1034 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1032.children.append(Shape1034)
Billboard1035 = x3d.Billboard()
Shape1036 = x3d.Shape()
Text1037 = x3d.Text()
Text1037.string = ["83"]
FontStyle1038 = x3d.FontStyle()
FontStyle1038.size = 0.035

Text1037.fontStyle = FontStyle1038

Shape1036.geometry = Text1037

Billboard1035.children.append(Shape1036)

HAnimSite1032.children.append(Billboard1035)

HAnimSegment1017.children.append(HAnimSite1032)

HAnimJoint1016.children.append(HAnimSegment1017)
HAnimJoint1039 = x3d.HAnimJoint(DEF="hanim_vc6")
HAnimJoint1039.name = "vc6"
HAnimJoint1039.center = [0.0066,1.5357,-0.0143]
HAnimSegment1040 = x3d.HAnimSegment(DEF="hanim_c6")
HAnimSegment1040.name = "c6"
Transform1041 = x3d.Transform()
Transform1041.translation = [0.0066,1.5357,-0.0143]
Transform1042 = x3d.Transform()
Shape1043 = x3d.Shape(USE="HAnimJointShape")

Transform1042.children.append(Shape1043)

Transform1041.children.append(Transform1042)

HAnimSegment1040.children.append(Transform1041)
Shape1044 = x3d.Shape()
LineSet1045 = x3d.LineSet()
LineSet1045.vertexCount = [2]
ColorRGBA1046 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1045.color = ColorRGBA1046
Coordinate1047 = x3d.Coordinate()
Coordinate1047.point = [(0.0066, 1.5357, -0.0143),(0.0066, 1.552, -0.0082)]

LineSet1045.coord = Coordinate1047

Shape1044.geometry = LineSet1045

HAnimSegment1040.children.append(Shape1044)

HAnimJoint1039.children.append(HAnimSegment1040)
HAnimJoint1048 = x3d.HAnimJoint(DEF="hanim_vc5")
HAnimJoint1048.name = "vc5"
HAnimJoint1048.center = [0.0066,1.552,-0.0082]
HAnimSegment1049 = x3d.HAnimSegment(DEF="hanim_c5")
HAnimSegment1049.name = "c5"
Transform1050 = x3d.Transform()
Transform1050.translation = [0.0066,1.552,-0.0082]
Transform1051 = x3d.Transform()
Shape1052 = x3d.Shape(USE="HAnimJointShape")

Transform1051.children.append(Shape1052)

Transform1050.children.append(Transform1051)

HAnimSegment1049.children.append(Transform1050)
Shape1053 = x3d.Shape()
LineSet1054 = x3d.LineSet()
LineSet1054.vertexCount = [2]
ColorRGBA1055 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1054.color = ColorRGBA1055
Coordinate1056 = x3d.Coordinate()
Coordinate1056.point = [(0.0066, 1.552, -0.0082),(0.0066, 1.5662, -0.0084)]

LineSet1054.coord = Coordinate1056

Shape1053.geometry = LineSet1054

HAnimSegment1049.children.append(Shape1053)

HAnimJoint1048.children.append(HAnimSegment1049)
HAnimJoint1057 = x3d.HAnimJoint(DEF="hanim_vc4")
HAnimJoint1057.name = "vc4"
HAnimJoint1057.center = [0.0066,1.5662,-0.0084]
HAnimSegment1058 = x3d.HAnimSegment(DEF="hanim_c4")
HAnimSegment1058.name = "c4"
Transform1059 = x3d.Transform()
Transform1059.translation = [0.0066,1.5662,-0.0084]
Transform1060 = x3d.Transform()
Shape1061 = x3d.Shape(USE="HAnimJointShape")

Transform1060.children.append(Shape1061)

Transform1059.children.append(Transform1060)

HAnimSegment1058.children.append(Transform1059)
Shape1062 = x3d.Shape()
LineSet1063 = x3d.LineSet()
LineSet1063.vertexCount = [2]
ColorRGBA1064 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1063.color = ColorRGBA1064
Coordinate1065 = x3d.Coordinate()
Coordinate1065.point = [(0.0066, 1.5662, -0.0084),(0.0066, 1.58, -0.0103)]

LineSet1063.coord = Coordinate1065

Shape1062.geometry = LineSet1063

HAnimSegment1058.children.append(Shape1062)

HAnimJoint1057.children.append(HAnimSegment1058)
HAnimJoint1066 = x3d.HAnimJoint(DEF="hanim_vc3")
HAnimJoint1066.name = "vc3"
HAnimJoint1066.center = [0.0066,1.58,-0.0103]
HAnimSegment1067 = x3d.HAnimSegment(DEF="hanim_c3")
HAnimSegment1067.name = "c3"
Transform1068 = x3d.Transform()
Transform1068.translation = [0.0066,1.58,-0.0103]
Transform1069 = x3d.Transform()
Shape1070 = x3d.Shape(USE="HAnimJointShape")

Transform1069.children.append(Shape1070)

Transform1068.children.append(Transform1069)

HAnimSegment1067.children.append(Transform1068)
Shape1071 = x3d.Shape()
LineSet1072 = x3d.LineSet()
LineSet1072.vertexCount = [2]
ColorRGBA1073 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1072.color = ColorRGBA1073
Coordinate1074 = x3d.Coordinate()
Coordinate1074.point = [(0.0066, 1.58, -0.0103),(0.0066, 1.5928, -0.0103)]

LineSet1072.coord = Coordinate1074

Shape1071.geometry = LineSet1072

HAnimSegment1067.children.append(Shape1071)

HAnimJoint1066.children.append(HAnimSegment1067)
HAnimJoint1075 = x3d.HAnimJoint(DEF="hanim_vc2")
HAnimJoint1075.name = "vc2"
HAnimJoint1075.center = [0.0066,1.5928,-0.0103]
HAnimSegment1076 = x3d.HAnimSegment(DEF="hanim_c2")
HAnimSegment1076.name = "c2"
Transform1077 = x3d.Transform()
Transform1077.translation = [0.0066,1.5928,-0.0103]
Transform1078 = x3d.Transform()
Shape1079 = x3d.Shape(USE="HAnimJointShape")

Transform1078.children.append(Shape1079)

Transform1077.children.append(Transform1078)

HAnimSegment1076.children.append(Transform1077)
Shape1080 = x3d.Shape()
LineSet1081 = x3d.LineSet()
LineSet1081.vertexCount = [2]
ColorRGBA1082 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1081.color = ColorRGBA1082
Coordinate1083 = x3d.Coordinate()
Coordinate1083.point = [(0.0066, 1.5928, -0.0103),(0.0066, 1.6144, -0.0034)]

LineSet1081.coord = Coordinate1083

Shape1080.geometry = LineSet1081

HAnimSegment1076.children.append(Shape1080)
HAnimSite1084 = x3d.HAnimSite(DEF="hanim_adams_apple")
HAnimSite1084.name = "adams_apple"
TouchSensor1085 = x3d.TouchSensor()
TouchSensor1085.description = "HAnimSite 11 adams_apple"

HAnimSite1084.children.append(TouchSensor1085)
Shape1086 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1084.children.append(Shape1086)
Billboard1087 = x3d.Billboard()
Shape1088 = x3d.Shape()
Text1089 = x3d.Text()
Text1089.string = ["11"]
FontStyle1090 = x3d.FontStyle()
FontStyle1090.size = 0.035

Text1089.fontStyle = FontStyle1090

Shape1088.geometry = Text1089

Billboard1087.children.append(Shape1088)

HAnimSite1084.children.append(Billboard1087)

HAnimSegment1076.children.append(HAnimSite1084)

HAnimJoint1075.children.append(HAnimSegment1076)
HAnimJoint1091 = x3d.HAnimJoint(DEF="hanim_vc1")
HAnimJoint1091.name = "vc1"
HAnimJoint1091.center = [0.0066,1.6144,-0.0034]
HAnimSegment1092 = x3d.HAnimSegment(DEF="hanim_c1")
HAnimSegment1092.name = "c1"
Transform1093 = x3d.Transform()
Transform1093.translation = [0.0066,1.6144,-0.0034]
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
Coordinate1099.point = [(0.0066, 1.6144, -0.0034),(0.0044, 1.6209, 0.0236)]

LineSet1097.coord = Coordinate1099

Shape1096.geometry = LineSet1097

HAnimSegment1092.children.append(Shape1096)

HAnimJoint1091.children.append(HAnimSegment1092)
HAnimJoint1100 = x3d.HAnimJoint(DEF="hanim_skullbase")
HAnimJoint1100.name = "skullbase"
HAnimJoint1100.center = [0.0044,1.6209,0.0236]
HAnimSegment1101 = x3d.HAnimSegment(DEF="hanim_skull")
HAnimSegment1101.name = "skull"
Transform1102 = x3d.Transform()
Transform1102.translation = [0.0044,1.6209,0.0236]
Transform1103 = x3d.Transform()
Shape1104 = x3d.Shape(USE="HAnimJointShape")

Transform1103.children.append(Shape1104)

Transform1102.children.append(Transform1103)

HAnimSegment1101.children.append(Transform1102)
Shape1105 = x3d.Shape()
LineSet1106 = x3d.LineSet()
LineSet1106.vertexCount = [2]
ColorRGBA1107 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1106.color = ColorRGBA1107
Coordinate1108 = x3d.Coordinate()
Coordinate1108.point = [(0.0044, 1.6209, 0.0236),(0.0503, 1.4157, -0.0689)]

LineSet1106.coord = Coordinate1108

Shape1105.geometry = LineSet1106

HAnimSegment1101.children.append(Shape1105)
HAnimSite1109 = x3d.HAnimSite(DEF="hanim_glabella")
HAnimSite1109.name = "glabella"
TouchSensor1110 = x3d.TouchSensor()
TouchSensor1110.description = "HAnimSite 1 glabella"

HAnimSite1109.children.append(TouchSensor1110)
Shape1111 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1109.children.append(Shape1111)
Billboard1112 = x3d.Billboard()
Shape1113 = x3d.Shape()
Text1114 = x3d.Text()
Text1114.string = ["1"]
FontStyle1115 = x3d.FontStyle()
FontStyle1115.size = 0.035

Text1114.fontStyle = FontStyle1115

Shape1113.geometry = Text1114

Billboard1112.children.append(Shape1113)

HAnimSite1109.children.append(Billboard1112)

HAnimSegment1101.children.append(HAnimSite1109)
HAnimSite1116 = x3d.HAnimSite(DEF="hanim_l_ectocanthus")
HAnimSite1116.name = "l_ectocanthus"
TouchSensor1117 = x3d.TouchSensor()
TouchSensor1117.description = "HAnimSite 85 l_ectocanthus"

HAnimSite1116.children.append(TouchSensor1117)
Shape1118 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1116.children.append(Shape1118)
Billboard1119 = x3d.Billboard()
Shape1120 = x3d.Shape()
Text1121 = x3d.Text()
Text1121.string = ["85"]
FontStyle1122 = x3d.FontStyle()
FontStyle1122.size = 0.035

Text1121.fontStyle = FontStyle1122

Shape1120.geometry = Text1121

Billboard1119.children.append(Shape1120)

HAnimSite1116.children.append(Billboard1119)

HAnimSegment1101.children.append(HAnimSite1116)
HAnimSite1123 = x3d.HAnimSite(DEF="hanim_l_infraorbitale")
HAnimSite1123.name = "l_infraorbitale"
HAnimSite1123.translation = [0.0341,1.6171,0.0752]
TouchSensor1124 = x3d.TouchSensor()
TouchSensor1124.description = "HAnimSite 3 l_infraorbitale"

HAnimSite1123.children.append(TouchSensor1124)
Shape1125 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1123.children.append(Shape1125)
Billboard1126 = x3d.Billboard()
Shape1127 = x3d.Shape()
Text1128 = x3d.Text()
Text1128.string = ["3"]
FontStyle1129 = x3d.FontStyle()
FontStyle1129.size = 0.035

Text1128.fontStyle = FontStyle1129

Shape1127.geometry = Text1128

Billboard1126.children.append(Shape1127)

HAnimSite1123.children.append(Billboard1126)

HAnimSegment1101.children.append(HAnimSite1123)
HAnimSite1130 = x3d.HAnimSite(DEF="hanim_l_tragion")
HAnimSite1130.name = "l_tragion"
HAnimSite1130.translation = [0.0739,1.6348,0.0282]
TouchSensor1131 = x3d.TouchSensor()
TouchSensor1131.description = "HAnimSite 4 l_tragion"

HAnimSite1130.children.append(TouchSensor1131)
Shape1132 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1130.children.append(Shape1132)
Billboard1133 = x3d.Billboard()
Shape1134 = x3d.Shape()
Text1135 = x3d.Text()
Text1135.string = ["4"]
FontStyle1136 = x3d.FontStyle()
FontStyle1136.size = 0.035

Text1135.fontStyle = FontStyle1136

Shape1134.geometry = Text1135

Billboard1133.children.append(Shape1134)

HAnimSite1130.children.append(Billboard1133)

HAnimSegment1101.children.append(HAnimSite1130)
HAnimSite1137 = x3d.HAnimSite(DEF="hanim_nuchale")
HAnimSite1137.name = "nuchale"
HAnimSite1137.translation = [0.0039,1.5972,-0.0796]
TouchSensor1138 = x3d.TouchSensor()
TouchSensor1138.description = "HAnimSite 81 nuchale"

HAnimSite1137.children.append(TouchSensor1138)
Shape1139 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1137.children.append(Shape1139)
Billboard1140 = x3d.Billboard()
Shape1141 = x3d.Shape()
Text1142 = x3d.Text()
Text1142.string = ["81"]
FontStyle1143 = x3d.FontStyle()
FontStyle1143.size = 0.035

Text1142.fontStyle = FontStyle1143

Shape1141.geometry = Text1142

Billboard1140.children.append(Shape1141)

HAnimSite1137.children.append(Billboard1140)

HAnimSegment1101.children.append(HAnimSite1137)
HAnimSite1144 = x3d.HAnimSite(DEF="hanim_opisthocranion")
HAnimSite1144.name = "opisthocranion"
TouchSensor1145 = x3d.TouchSensor()
TouchSensor1145.description = "HAnimSite 89 opisthocranion"

HAnimSite1144.children.append(TouchSensor1145)
Shape1146 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1144.children.append(Shape1146)
Billboard1147 = x3d.Billboard()
Shape1148 = x3d.Shape()
Text1149 = x3d.Text()
Text1149.string = ["89"]
FontStyle1150 = x3d.FontStyle()
FontStyle1150.size = 0.035

Text1149.fontStyle = FontStyle1150

Shape1148.geometry = Text1149

Billboard1147.children.append(Shape1148)

HAnimSite1144.children.append(Billboard1147)

HAnimSegment1101.children.append(HAnimSite1144)
HAnimSite1151 = x3d.HAnimSite(DEF="hanim_r_ectocanthus")
HAnimSite1151.name = "r_ectocanthus"
TouchSensor1152 = x3d.TouchSensor()
TouchSensor1152.description = "HAnimSite 86 r_ectocanthus"

HAnimSite1151.children.append(TouchSensor1152)
Shape1153 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1151.children.append(Shape1153)
Billboard1154 = x3d.Billboard()
Shape1155 = x3d.Shape()
Text1156 = x3d.Text()
Text1156.string = ["86"]
FontStyle1157 = x3d.FontStyle()
FontStyle1157.size = 0.035

Text1156.fontStyle = FontStyle1157

Shape1155.geometry = Text1156

Billboard1154.children.append(Shape1155)

HAnimSite1151.children.append(Billboard1154)

HAnimSegment1101.children.append(HAnimSite1151)
HAnimSite1158 = x3d.HAnimSite(DEF="hanim_r_infraorbitale")
HAnimSite1158.name = "r_infraorbitale"
HAnimSite1158.translation = [-0.0237,1.6171,0.0752]
TouchSensor1159 = x3d.TouchSensor()
TouchSensor1159.description = "HAnimSite 6 r_infraorbitale"

HAnimSite1158.children.append(TouchSensor1159)
Shape1160 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1158.children.append(Shape1160)
Billboard1161 = x3d.Billboard()
Shape1162 = x3d.Shape()
Text1163 = x3d.Text()
Text1163.string = ["6"]
FontStyle1164 = x3d.FontStyle()
FontStyle1164.size = 0.035

Text1163.fontStyle = FontStyle1164

Shape1162.geometry = Text1163

Billboard1161.children.append(Shape1162)

HAnimSite1158.children.append(Billboard1161)

HAnimSegment1101.children.append(HAnimSite1158)
HAnimSite1165 = x3d.HAnimSite(DEF="hanim_r_tragion")
HAnimSite1165.name = "r_tragion"
HAnimSite1165.translation = [-0.0646,1.6347,0.0302]
TouchSensor1166 = x3d.TouchSensor()
TouchSensor1166.description = "HAnimSite 7 r_tragion"

HAnimSite1165.children.append(TouchSensor1166)
Shape1167 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1165.children.append(Shape1167)
Billboard1168 = x3d.Billboard()
Shape1169 = x3d.Shape()
Text1170 = x3d.Text()
Text1170.string = ["7"]
FontStyle1171 = x3d.FontStyle()
FontStyle1171.size = 0.035

Text1170.fontStyle = FontStyle1171

Shape1169.geometry = Text1170

Billboard1168.children.append(Shape1169)

HAnimSite1165.children.append(Billboard1168)

HAnimSegment1101.children.append(HAnimSite1165)
HAnimSite1172 = x3d.HAnimSite(DEF="hanim_sellion")
HAnimSite1172.name = "sellion"
HAnimSite1172.translation = [0.0058,1.6316,0.0852]
TouchSensor1173 = x3d.TouchSensor()
TouchSensor1173.description = "HAnimSite 2 sellion"

HAnimSite1172.children.append(TouchSensor1173)
Shape1174 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1172.children.append(Shape1174)
Billboard1175 = x3d.Billboard()
Shape1176 = x3d.Shape()
Text1177 = x3d.Text()
Text1177.string = ["2"]
FontStyle1178 = x3d.FontStyle()
FontStyle1178.size = 0.035

Text1177.fontStyle = FontStyle1178

Shape1176.geometry = Text1177

Billboard1175.children.append(Shape1176)

HAnimSite1172.children.append(Billboard1175)

HAnimSegment1101.children.append(HAnimSite1172)
HAnimSite1179 = x3d.HAnimSite(DEF="hanim_skull_vertex")
HAnimSite1179.name = "skull_vertex"
HAnimSite1179.translation = [0.005,1.7504,0.0055]
TouchSensor1180 = x3d.TouchSensor()
TouchSensor1180.description = "HAnimSite 0 skull_vertex"

HAnimSite1179.children.append(TouchSensor1180)
Shape1181 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1179.children.append(Shape1181)
Billboard1182 = x3d.Billboard()
Shape1183 = x3d.Shape()
Text1184 = x3d.Text()
Text1184.string = ["0"]
FontStyle1185 = x3d.FontStyle()
FontStyle1185.size = 0.035

Text1184.fontStyle = FontStyle1185

Shape1183.geometry = Text1184

Billboard1182.children.append(Shape1183)

HAnimSite1179.children.append(Billboard1182)

HAnimSegment1101.children.append(HAnimSite1179)
Shape1186 = x3d.Shape()
LineSet1187 = x3d.LineSet()
LineSet1187.vertexCount = [2]
ColorRGBA1188 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1187.color = ColorRGBA1188
Coordinate1189 = x3d.Coordinate()
Coordinate1189.point = [(0.0044, 1.6209, 0.0236),(-0.0507, 1.4157, -0.0689)]

LineSet1187.coord = Coordinate1189

Shape1186.geometry = LineSet1187

HAnimSegment1101.children.append(Shape1186)
Shape1190 = x3d.Shape()
LineSet1191 = x3d.LineSet()
LineSet1191.vertexCount = [2]
ColorRGBA1192 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1191.color = ColorRGBA1192
Coordinate1193 = x3d.Coordinate()
Coordinate1193.point = [(0.0044, 1.6209, 0.0236),(0.0479, 1.3963, -0.0188)]

LineSet1191.coord = Coordinate1193

Shape1190.geometry = LineSet1191

HAnimSegment1101.children.append(Shape1190)
Shape1194 = x3d.Shape()
LineSet1195 = x3d.LineSet()
LineSet1195.vertexCount = [2]
ColorRGBA1196 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1195.color = ColorRGBA1196
Coordinate1197 = x3d.Coordinate()
Coordinate1197.point = [(0.0044, 1.6209, 0.0236),(-0.0483, 1.3963, -0.0188)]

LineSet1195.coord = Coordinate1197

Shape1194.geometry = LineSet1195

HAnimSegment1101.children.append(Shape1194)
Shape1198 = x3d.Shape()
LineSet1199 = x3d.LineSet()
LineSet1199.vertexCount = [2]
ColorRGBA1200 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1199.color = ColorRGBA1200
Coordinate1201 = x3d.Coordinate()
Coordinate1201.point = [(0.0044, 1.6209, 0.0236),(0.0216, 1.4053, 0.0051)]

LineSet1199.coord = Coordinate1201

Shape1198.geometry = LineSet1199

HAnimSegment1101.children.append(Shape1198)
Shape1202 = x3d.Shape()
LineSet1203 = x3d.LineSet()
LineSet1203.vertexCount = [2]
ColorRGBA1204 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1203.color = ColorRGBA1204
Coordinate1205 = x3d.Coordinate()
Coordinate1205.point = [(0.0044, 1.6209, 0.0236),(-0.0219, 1.4053, 0.0051)]

LineSet1203.coord = Coordinate1205

Shape1202.geometry = LineSet1203

HAnimSegment1101.children.append(Shape1202)
Shape1206 = x3d.Shape()
LineSet1207 = x3d.LineSet()
LineSet1207.vertexCount = [2]
ColorRGBA1208 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1207.color = ColorRGBA1208
Coordinate1209 = x3d.Coordinate()
Coordinate1209.point = [(0.0044, 1.6209, 0.0236),(-0.0002, 1.3043, -0.0865)]

LineSet1207.coord = Coordinate1209

Shape1206.geometry = LineSet1207

HAnimSegment1101.children.append(Shape1206)

HAnimJoint1100.children.append(HAnimSegment1101)
HAnimJoint1210 = x3d.HAnimJoint(DEF="hanim_l_eyelid_joint")
HAnimJoint1210.name = "l_eyelid_joint"
HAnimJoint1210.center = [0.0503,1.4157,-0.0689]

HAnimJoint1100.children.append(HAnimJoint1210)
HAnimJoint1211 = x3d.HAnimJoint(DEF="hanim_r_eyelid_joint")
HAnimJoint1211.name = "r_eyelid_joint"
HAnimJoint1211.center = [-0.0507,1.4157,-0.0689]

HAnimJoint1100.children.append(HAnimJoint1211)
HAnimJoint1212 = x3d.HAnimJoint(DEF="hanim_l_eyeball_joint")
HAnimJoint1212.name = "l_eyeball_joint"
HAnimJoint1212.center = [0.0479,1.3963,-0.0188]

HAnimJoint1100.children.append(HAnimJoint1212)
HAnimJoint1213 = x3d.HAnimJoint(DEF="hanim_r_eyeball_joint")
HAnimJoint1213.name = "r_eyeball_joint"
HAnimJoint1213.center = [-0.0483,1.3963,-0.0188]

HAnimJoint1100.children.append(HAnimJoint1213)
HAnimJoint1214 = x3d.HAnimJoint(DEF="hanim_l_eyebrow_joint")
HAnimJoint1214.name = "l_eyebrow_joint"
HAnimJoint1214.center = [0.0216,1.4053,0.0051]

HAnimJoint1100.children.append(HAnimJoint1214)
HAnimJoint1215 = x3d.HAnimJoint(DEF="hanim_r_eyebrow_joint")
HAnimJoint1215.name = "r_eyebrow_joint"
HAnimJoint1215.center = [-0.0219,1.4053,0.0051]

HAnimJoint1100.children.append(HAnimJoint1215)
HAnimJoint1216 = x3d.HAnimJoint(DEF="hanim_temporomandibular")
HAnimJoint1216.name = "temporomandibular"
HAnimJoint1216.center = [-0.0002,1.3043,-0.0865]

HAnimJoint1100.children.append(HAnimJoint1216)

HAnimJoint1091.children.append(HAnimJoint1100)

HAnimJoint1075.children.append(HAnimJoint1091)

HAnimJoint1066.children.append(HAnimJoint1075)

HAnimJoint1057.children.append(HAnimJoint1066)

HAnimJoint1048.children.append(HAnimJoint1057)

HAnimJoint1039.children.append(HAnimJoint1048)

HAnimJoint1016.children.append(HAnimJoint1039)

HAnimJoint985.children.append(HAnimJoint1016)
HAnimJoint1217 = x3d.HAnimJoint(DEF="hanim_l_sternoclavicular")
HAnimJoint1217.name = "l_sternoclavicular"
HAnimJoint1217.center = [0.082,1.4488,-0.0353]
HAnimSegment1218 = x3d.HAnimSegment(DEF="hanim_l_clavicle")
HAnimSegment1218.name = "l_clavicle"
Transform1219 = x3d.Transform()
Transform1219.translation = [0.082,1.4488,-0.0353]
Transform1220 = x3d.Transform()
Shape1221 = x3d.Shape(USE="HAnimJointShape")

Transform1220.children.append(Shape1221)

Transform1219.children.append(Transform1220)

HAnimSegment1218.children.append(Transform1219)
Shape1222 = x3d.Shape()
LineSet1223 = x3d.LineSet()
LineSet1223.vertexCount = [2]
ColorRGBA1224 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1223.color = ColorRGBA1224
Coordinate1225 = x3d.Coordinate()
Coordinate1225.point = [(0.082, 1.4488, -0.0353),(0.0962, 1.4269, -0.0424)]

LineSet1223.coord = Coordinate1225

Shape1222.geometry = LineSet1223

HAnimSegment1218.children.append(Shape1222)
HAnimSite1226 = x3d.HAnimSite(DEF="hanim_l_acromion")
HAnimSite1226.name = "l_acromion"
HAnimSite1226.translation = [0.2032,1.476,-0.049]
TouchSensor1227 = x3d.TouchSensor()
TouchSensor1227.description = "HAnimSite 15 l_acromion"

HAnimSite1226.children.append(TouchSensor1227)
Shape1228 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1226.children.append(Shape1228)
Billboard1229 = x3d.Billboard()
Shape1230 = x3d.Shape()
Text1231 = x3d.Text()
Text1231.string = ["15"]
FontStyle1232 = x3d.FontStyle()
FontStyle1232.size = 0.035

Text1231.fontStyle = FontStyle1232

Shape1230.geometry = Text1231

Billboard1229.children.append(Shape1230)

HAnimSite1226.children.append(Billboard1229)

HAnimSegment1218.children.append(HAnimSite1226)
HAnimSite1233 = x3d.HAnimSite(DEF="hanim_l_axilla_distal")
HAnimSite1233.name = "l_axilla_distal"
HAnimSite1233.translation = [0.1706,1.4072,-0.0875]
TouchSensor1234 = x3d.TouchSensor()
TouchSensor1234.description = "HAnimSite 17 l_axilla_distal"

HAnimSite1233.children.append(TouchSensor1234)
Shape1235 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1233.children.append(Shape1235)
Billboard1236 = x3d.Billboard()
Shape1237 = x3d.Shape()
Text1238 = x3d.Text()
Text1238.string = ["17"]
FontStyle1239 = x3d.FontStyle()
FontStyle1239.size = 0.035

Text1238.fontStyle = FontStyle1239

Shape1237.geometry = Text1238

Billboard1236.children.append(Shape1237)

HAnimSite1233.children.append(Billboard1236)

HAnimSegment1218.children.append(HAnimSite1233)
HAnimSite1240 = x3d.HAnimSite(DEF="hanim_l_axilla_posterior_folds")
HAnimSite1240.name = "l_axilla_posterior_folds"
TouchSensor1241 = x3d.TouchSensor()
TouchSensor1241.description = "HAnimSite 18 l_axilla_posterior_folds"

HAnimSite1240.children.append(TouchSensor1241)
Shape1242 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1240.children.append(Shape1242)
Billboard1243 = x3d.Billboard()
Shape1244 = x3d.Shape()
Text1245 = x3d.Text()
Text1245.string = ["18"]
FontStyle1246 = x3d.FontStyle()
FontStyle1246.size = 0.035

Text1245.fontStyle = FontStyle1246

Shape1244.geometry = Text1245

Billboard1243.children.append(Shape1244)

HAnimSite1240.children.append(Billboard1243)

HAnimSegment1218.children.append(HAnimSite1240)
HAnimSite1247 = x3d.HAnimSite(DEF="hanim_l_axilla_proximal")
HAnimSite1247.name = "l_axilla_proximal"
HAnimSite1247.translation = [0.1777,1.4065,-0.0075]
TouchSensor1248 = x3d.TouchSensor()
TouchSensor1248.description = "HAnimSite 16 l_axilla_proximal"

HAnimSite1247.children.append(TouchSensor1248)
Shape1249 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1247.children.append(Shape1249)
Billboard1250 = x3d.Billboard()
Shape1251 = x3d.Shape()
Text1252 = x3d.Text()
Text1252.string = ["16"]
FontStyle1253 = x3d.FontStyle()
FontStyle1253.size = 0.035

Text1252.fontStyle = FontStyle1253

Shape1251.geometry = Text1252

Billboard1250.children.append(Shape1251)

HAnimSite1247.children.append(Billboard1250)

HAnimSegment1218.children.append(HAnimSite1247)
HAnimSite1254 = x3d.HAnimSite(DEF="hanim_l_clavicale")
HAnimSite1254.name = "l_clavicale"
HAnimSite1254.translation = [0.0271,1.4943,0.0394]
TouchSensor1255 = x3d.TouchSensor()
TouchSensor1255.description = "HAnimSite 14 l_clavicale"

HAnimSite1254.children.append(TouchSensor1255)
Shape1256 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1254.children.append(Shape1256)
Billboard1257 = x3d.Billboard()
Shape1258 = x3d.Shape()
Text1259 = x3d.Text()
Text1259.string = ["14"]
FontStyle1260 = x3d.FontStyle()
FontStyle1260.size = 0.035

Text1259.fontStyle = FontStyle1260

Shape1258.geometry = Text1259

Billboard1257.children.append(Shape1258)

HAnimSite1254.children.append(Billboard1257)

HAnimSegment1218.children.append(HAnimSite1254)

HAnimJoint1217.children.append(HAnimSegment1218)
HAnimJoint1261 = x3d.HAnimJoint(DEF="hanim_l_acromioclavicular")
HAnimJoint1261.name = "l_acromioclavicular"
HAnimJoint1261.center = [0.0962,1.4269,-0.0424]
HAnimSegment1262 = x3d.HAnimSegment(DEF="hanim_l_scapula")
HAnimSegment1262.name = "l_scapula"
Transform1263 = x3d.Transform()
Transform1263.translation = [0.0962,1.4269,-0.0424]
Transform1264 = x3d.Transform()
Shape1265 = x3d.Shape(USE="HAnimJointShape")

Transform1264.children.append(Shape1265)

Transform1263.children.append(Transform1264)

HAnimSegment1262.children.append(Transform1263)
Shape1266 = x3d.Shape()
LineSet1267 = x3d.LineSet()
LineSet1267.vertexCount = [2]
ColorRGBA1268 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1267.color = ColorRGBA1268
Coordinate1269 = x3d.Coordinate()
Coordinate1269.point = [(0.0962, 1.4269, -0.0424),(0.2029, 1.4376, -0.0387)]

LineSet1267.coord = Coordinate1269

Shape1266.geometry = LineSet1267

HAnimSegment1262.children.append(Shape1266)

HAnimJoint1261.children.append(HAnimSegment1262)
HAnimJoint1270 = x3d.HAnimJoint(DEF="hanim_l_shoulder")
HAnimJoint1270.name = "l_shoulder"
HAnimJoint1270.center = [0.2029,1.4376,-0.0387]
HAnimSegment1271 = x3d.HAnimSegment(DEF="hanim_l_upperarm")
HAnimSegment1271.name = "l_upperarm"
Transform1272 = x3d.Transform()
Transform1272.translation = [0.2029,1.4376,-0.0387]
Transform1273 = x3d.Transform()
Shape1274 = x3d.Shape(USE="HAnimJointShape")

Transform1273.children.append(Shape1274)

Transform1272.children.append(Transform1273)

HAnimSegment1271.children.append(Transform1272)
Shape1275 = x3d.Shape()
LineSet1276 = x3d.LineSet()
LineSet1276.vertexCount = [2]
ColorRGBA1277 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1276.color = ColorRGBA1277
Coordinate1278 = x3d.Coordinate()
Coordinate1278.point = [(0.2029, 1.4376, -0.0387),(0.2014, 1.1357, -0.0682)]

LineSet1276.coord = Coordinate1278

Shape1275.geometry = LineSet1276

HAnimSegment1271.children.append(Shape1275)
HAnimSite1279 = x3d.HAnimSite(DEF="hanim_l_bideltoid")
HAnimSite1279.name = "l_bideltoid"
TouchSensor1280 = x3d.TouchSensor()
TouchSensor1280.description = "HAnimSite 96 l_bideltoid"

HAnimSite1279.children.append(TouchSensor1280)
Shape1281 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1279.children.append(Shape1281)
Billboard1282 = x3d.Billboard()
Shape1283 = x3d.Shape()
Text1284 = x3d.Text()
Text1284.string = ["96"]
FontStyle1285 = x3d.FontStyle()
FontStyle1285.size = 0.035

Text1284.fontStyle = FontStyle1285

Shape1283.geometry = Text1284

Billboard1282.children.append(Shape1283)

HAnimSite1279.children.append(Billboard1282)

HAnimSegment1271.children.append(HAnimSite1279)
HAnimSite1286 = x3d.HAnimSite(DEF="hanim_l_humeral_lateral_epicondyles")
HAnimSite1286.name = "l_humeral_lateral_epicondyles"
HAnimSite1286.translation = [0.228,1.1482,-0.11]
TouchSensor1287 = x3d.TouchSensor()
TouchSensor1287.description = "HAnimSite 63 l_humeral_lateral_epicondyles"

HAnimSite1286.children.append(TouchSensor1287)
Shape1288 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1286.children.append(Shape1288)
Billboard1289 = x3d.Billboard()
Shape1290 = x3d.Shape()
Text1291 = x3d.Text()
Text1291.string = ["63"]
FontStyle1292 = x3d.FontStyle()
FontStyle1292.size = 0.035

Text1291.fontStyle = FontStyle1292

Shape1290.geometry = Text1291

Billboard1289.children.append(Shape1290)

HAnimSite1286.children.append(Billboard1289)

HAnimSegment1271.children.append(HAnimSite1286)

HAnimJoint1270.children.append(HAnimSegment1271)
HAnimJoint1293 = x3d.HAnimJoint(DEF="hanim_l_elbow")
HAnimJoint1293.name = "l_elbow"
HAnimJoint1293.center = [0.2014,1.1357,-0.0682]
HAnimSegment1294 = x3d.HAnimSegment(DEF="hanim_l_forearm")
HAnimSegment1294.name = "l_forearm"
Transform1295 = x3d.Transform()
Transform1295.translation = [0.2014,1.1357,-0.0682]
Transform1296 = x3d.Transform()
Shape1297 = x3d.Shape(USE="HAnimJointShape")

Transform1296.children.append(Shape1297)

Transform1295.children.append(Transform1296)

HAnimSegment1294.children.append(Transform1295)
Shape1298 = x3d.Shape()
LineSet1299 = x3d.LineSet()
LineSet1299.vertexCount = [2]
ColorRGBA1300 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1299.color = ColorRGBA1300
Coordinate1301 = x3d.Coordinate()
Coordinate1301.point = [(0.2014, 1.1357, -0.0682),(0.1984, 0.8663, -0.0583)]

LineSet1299.coord = Coordinate1301

Shape1298.geometry = LineSet1299

HAnimSegment1294.children.append(Shape1298)
HAnimSite1302 = x3d.HAnimSite(DEF="hanim_l_humeral_medial_epicondyles")
HAnimSite1302.name = "l_humeral_medial_epicondyles"
HAnimSite1302.translation = [0.1735,1.1272,-0.1113]
TouchSensor1303 = x3d.TouchSensor()
TouchSensor1303.description = "HAnimSite 64 l_humeral_medial_epicondyles"

HAnimSite1302.children.append(TouchSensor1303)
Shape1304 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1302.children.append(Shape1304)
Billboard1305 = x3d.Billboard()
Shape1306 = x3d.Shape()
Text1307 = x3d.Text()
Text1307.string = ["64"]
FontStyle1308 = x3d.FontStyle()
FontStyle1308.size = 0.035

Text1307.fontStyle = FontStyle1308

Shape1306.geometry = Text1307

Billboard1305.children.append(Shape1306)

HAnimSite1302.children.append(Billboard1305)

HAnimSegment1294.children.append(HAnimSite1302)
HAnimSite1309 = x3d.HAnimSite(DEF="hanim_l_olecranon")
HAnimSite1309.name = "l_olecranon"
HAnimSite1309.translation = [-0.1962,1.1375,-0.1123]
TouchSensor1310 = x3d.TouchSensor()
TouchSensor1310.description = "HAnimSite 65 l_olecranon"

HAnimSite1309.children.append(TouchSensor1310)
Shape1311 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1309.children.append(Shape1311)
Billboard1312 = x3d.Billboard()
Shape1313 = x3d.Shape()
Text1314 = x3d.Text()
Text1314.string = ["65"]
FontStyle1315 = x3d.FontStyle()
FontStyle1315.size = 0.035

Text1314.fontStyle = FontStyle1315

Shape1313.geometry = Text1314

Billboard1312.children.append(Shape1313)

HAnimSite1309.children.append(Billboard1312)

HAnimSegment1294.children.append(HAnimSite1309)
HAnimSite1316 = x3d.HAnimSite(DEF="hanim_l_radial_styloid")
HAnimSite1316.name = "l_radial_styloid"
HAnimSite1316.translation = [0.1901,0.8645,-0.0415]
TouchSensor1317 = x3d.TouchSensor()
TouchSensor1317.description = "HAnimSite 71 l_radial_styloid"

HAnimSite1316.children.append(TouchSensor1317)
Shape1318 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1316.children.append(Shape1318)
Billboard1319 = x3d.Billboard()
Shape1320 = x3d.Shape()
Text1321 = x3d.Text()
Text1321.string = ["71"]
FontStyle1322 = x3d.FontStyle()
FontStyle1322.size = 0.035

Text1321.fontStyle = FontStyle1322

Shape1320.geometry = Text1321

Billboard1319.children.append(Shape1320)

HAnimSite1316.children.append(Billboard1319)

HAnimSegment1294.children.append(HAnimSite1316)
HAnimSite1323 = x3d.HAnimSite(DEF="hanim_l_radiale")
HAnimSite1323.name = "l_radiale"
HAnimSite1323.translation = [0.2182,1.1212,-0.1167]
TouchSensor1324 = x3d.TouchSensor()
TouchSensor1324.description = "HAnimSite 69 l_radiale"

HAnimSite1323.children.append(TouchSensor1324)
Shape1325 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1323.children.append(Shape1325)
Billboard1326 = x3d.Billboard()
Shape1327 = x3d.Shape()
Text1328 = x3d.Text()
Text1328.string = ["69"]
FontStyle1329 = x3d.FontStyle()
FontStyle1329.size = 0.035

Text1328.fontStyle = FontStyle1329

Shape1327.geometry = Text1328

Billboard1326.children.append(Shape1327)

HAnimSite1323.children.append(Billboard1326)

HAnimSegment1294.children.append(HAnimSite1323)

HAnimJoint1293.children.append(HAnimSegment1294)
HAnimJoint1330 = x3d.HAnimJoint(DEF="hanim_l_radiocarpal")
HAnimJoint1330.name = "l_radiocarpal"
HAnimJoint1330.center = [0.1984,0.8663,-0.0583]
HAnimSegment1331 = x3d.HAnimSegment(DEF="hanim_l_carpal")
HAnimSegment1331.name = "l_carpal"
Transform1332 = x3d.Transform()
Transform1332.translation = [0.2,0.85,-0.05]
Transform1332.rotation = [0,0,1,-3.14]
Transform1332.scale = [0.2,0.2,0.2]
Transform1333 = x3d.Transform()
Transform1333.rotation = [0,1,0,-1.57]
Shape1334 = x3d.Shape(USE="HAnimJointShape")

Transform1333.children.append(Shape1334)

Transform1332.children.append(Transform1333)

HAnimSegment1331.children.append(Transform1332)
Shape1335 = x3d.Shape()
LineSet1336 = x3d.LineSet()
LineSet1336.vertexCount = [2]
ColorRGBA1337 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1336.color = ColorRGBA1337
Coordinate1338 = x3d.Coordinate()
Coordinate1338.point = [(0.1984, 0.8663, -0.0583),(0.1811, 0.6975, -0.0826)]

LineSet1336.coord = Coordinate1338

Shape1335.geometry = LineSet1336

HAnimSegment1331.children.append(Shape1335)
HAnimSite1339 = x3d.HAnimSite(DEF="hanim_l_ulnar_styloid")
HAnimSite1339.name = "l_ulnar_styloid"
HAnimSite1339.translation = [-0.2142,0.8529,-0.0648]
TouchSensor1340 = x3d.TouchSensor()
TouchSensor1340.description = "HAnimSite 70 l_ulnar_styloid"

HAnimSite1339.children.append(TouchSensor1340)
Shape1341 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1339.children.append(Shape1341)
Billboard1342 = x3d.Billboard()
Shape1343 = x3d.Shape()
Text1344 = x3d.Text()
Text1344.string = ["70"]
FontStyle1345 = x3d.FontStyle()
FontStyle1345.size = 0.035

Text1344.fontStyle = FontStyle1345

Shape1343.geometry = Text1344

Billboard1342.children.append(Shape1343)

HAnimSite1339.children.append(Billboard1342)

HAnimSegment1331.children.append(HAnimSite1339)
Shape1346 = x3d.Shape()
LineSet1347 = x3d.LineSet()
LineSet1347.vertexCount = [2]
ColorRGBA1348 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1347.color = ColorRGBA1348
Coordinate1349 = x3d.Coordinate()
Coordinate1349.point = [(0.1984, 0.8663, -0.0583),(0.1811, 0.6984, -0.0935)]

LineSet1347.coord = Coordinate1349

Shape1346.geometry = LineSet1347

HAnimSegment1331.children.append(Shape1346)
Shape1350 = x3d.Shape()
LineSet1351 = x3d.LineSet()
LineSet1351.vertexCount = [2]
ColorRGBA1352 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1351.color = ColorRGBA1352
Coordinate1353 = x3d.Coordinate()
Coordinate1353.point = [(0.1984, 0.8663, -0.0583),(0.1809, 0.7, -0.1067)]

LineSet1351.coord = Coordinate1353

Shape1350.geometry = LineSet1351

HAnimSegment1331.children.append(Shape1350)
Shape1354 = x3d.Shape()
LineSet1355 = x3d.LineSet()
LineSet1355.vertexCount = [2]
ColorRGBA1356 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1355.color = ColorRGBA1356
Coordinate1357 = x3d.Coordinate()
Coordinate1357.point = [(0.1984, 0.8663, -0.0583),(0.1809, 0.6973, -0.1276)]

LineSet1355.coord = Coordinate1357

Shape1354.geometry = LineSet1355

HAnimSegment1331.children.append(Shape1354)

HAnimJoint1330.children.append(HAnimSegment1331)
HAnimJoint1358 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_1")
HAnimJoint1358.name = "l_midcarpal_1"
HAnimJoint1358.center = [0.1811,0.6975,-0.0826]
HAnimSegment1359 = x3d.HAnimSegment(DEF="hanim_l_trapezium")
HAnimSegment1359.name = "l_trapezium"
Transform1360 = x3d.Transform()
Transform1360.translation = [0.1811,0.6975,-0.0826]
Transform1361 = x3d.Transform()
Shape1362 = x3d.Shape(USE="HAnimJointShape")

Transform1361.children.append(Shape1362)

Transform1360.children.append(Transform1361)

HAnimSegment1359.children.append(Transform1360)
Shape1363 = x3d.Shape()
LineSet1364 = x3d.LineSet()
LineSet1364.vertexCount = [2]
ColorRGBA1365 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1364.color = ColorRGBA1365
Coordinate1366 = x3d.Coordinate()
Coordinate1366.point = [(0.1811, 0.6975, -0.0826),(0.1924, 0.8472, -0.0534)]

LineSet1364.coord = Coordinate1366

Shape1363.geometry = LineSet1364

HAnimSegment1359.children.append(Shape1363)

HAnimJoint1358.children.append(HAnimSegment1359)
HAnimJoint1367 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_1")
HAnimJoint1367.name = "l_carpometacarpal_1"
HAnimJoint1367.center = [0.1924,0.8472,-0.0534]
HAnimSegment1368 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_1")
HAnimSegment1368.name = "l_metacarpal_1"
Transform1369 = x3d.Transform()
Transform1369.translation = [0.1924,0.8472,-0.0534]
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
Coordinate1375.point = [(0.1924, 0.8472, -0.0534),(0.1951, 0.8226, 0.0246)]

LineSet1373.coord = Coordinate1375

Shape1372.geometry = LineSet1373

HAnimSegment1368.children.append(Shape1372)

HAnimJoint1367.children.append(HAnimSegment1368)
HAnimJoint1376 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_1")
HAnimJoint1376.name = "l_metacarpophalangeal_1"
HAnimJoint1376.center = [0.1951,0.8226,0.0246]
HAnimSegment1377 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_1")
HAnimSegment1377.name = "l_carpal_proximal_phalanx_1"
Transform1378 = x3d.Transform()
Transform1378.translation = [0.1951,0.8226,0.0246]
Transform1379 = x3d.Transform()
Shape1380 = x3d.Shape(USE="HAnimJointShape")

Transform1379.children.append(Shape1380)

Transform1378.children.append(Transform1379)

HAnimSegment1377.children.append(Transform1378)
Shape1381 = x3d.Shape()
LineSet1382 = x3d.LineSet()
LineSet1382.vertexCount = [2]
ColorRGBA1383 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1382.color = ColorRGBA1383
Coordinate1384 = x3d.Coordinate()
Coordinate1384.point = [(0.1951, 0.8226, 0.0246),(0.1955, 0.8159, 0.0464)]

LineSet1382.coord = Coordinate1384

Shape1381.geometry = LineSet1382

HAnimSegment1377.children.append(Shape1381)

HAnimJoint1376.children.append(HAnimSegment1377)
HAnimJoint1385 = x3d.HAnimJoint(DEF="hanim_l_carpal_interphalangeal_1")
HAnimJoint1385.name = "l_carpal_interphalangeal_1"
HAnimJoint1385.center = [0.1955,0.8159,0.0464]

HAnimJoint1376.children.append(HAnimJoint1385)

HAnimJoint1367.children.append(HAnimJoint1376)

HAnimJoint1358.children.append(HAnimJoint1367)

HAnimJoint1330.children.append(HAnimJoint1358)
HAnimJoint1386 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_2")
HAnimJoint1386.name = "l_midcarpal_2"
HAnimJoint1386.center = [0.1811,0.6984,-0.0935]
HAnimSegment1387 = x3d.HAnimSegment(DEF="hanim_l_trapezoid")
HAnimSegment1387.name = "l_trapezoid"
Transform1388 = x3d.Transform()
Transform1388.translation = [0.1811,0.6984,-0.0935]
Transform1389 = x3d.Transform()
Shape1390 = x3d.Shape(USE="HAnimJointShape")

Transform1389.children.append(Shape1390)

Transform1388.children.append(Transform1389)

HAnimSegment1387.children.append(Transform1388)
Shape1391 = x3d.Shape()
LineSet1392 = x3d.LineSet()
LineSet1392.vertexCount = [2]
ColorRGBA1393 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1392.color = ColorRGBA1393
Coordinate1394 = x3d.Coordinate()
Coordinate1394.point = [(0.1811, 0.6984, -0.0935),(0.1983, 0.8024, -0.028)]

LineSet1392.coord = Coordinate1394

Shape1391.geometry = LineSet1392

HAnimSegment1387.children.append(Shape1391)

HAnimJoint1386.children.append(HAnimSegment1387)
HAnimJoint1395 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_2")
HAnimJoint1395.name = "l_carpometacarpal_2"
HAnimJoint1395.center = [0.1983,0.8024,-0.028]
HAnimSegment1396 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_2")
HAnimSegment1396.name = "l_metacarpal_2"
Transform1397 = x3d.Transform()
Transform1397.translation = [0.1983,0.8024,-0.028]
Transform1398 = x3d.Transform()
Shape1399 = x3d.Shape(USE="HAnimJointShape")

Transform1398.children.append(Shape1399)

Transform1397.children.append(Transform1398)

HAnimSegment1396.children.append(Transform1397)
Shape1400 = x3d.Shape()
LineSet1401 = x3d.LineSet()
LineSet1401.vertexCount = [2]
ColorRGBA1402 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1401.color = ColorRGBA1402
Coordinate1403 = x3d.Coordinate()
Coordinate1403.point = [(0.1983, 0.8024, -0.028),(0.1983, 0.7815, -0.028)]

LineSet1401.coord = Coordinate1403

Shape1400.geometry = LineSet1401

HAnimSegment1396.children.append(Shape1400)
HAnimSite1404 = x3d.HAnimSite(DEF="hanim_l_metacarpal_phalanx_2")
HAnimSite1404.name = "l_metacarpal_phalanx_2"
HAnimSite1404.translation = [0.2009,0.8139,-0.0237]
TouchSensor1405 = x3d.TouchSensor()
TouchSensor1405.description = "HAnimSite 75 l_metacarpal_phalanx_2"

HAnimSite1404.children.append(TouchSensor1405)
Shape1406 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1404.children.append(Shape1406)
Billboard1407 = x3d.Billboard()
Shape1408 = x3d.Shape()
Text1409 = x3d.Text()
Text1409.string = ["75"]
FontStyle1410 = x3d.FontStyle()
FontStyle1410.size = 0.035

Text1409.fontStyle = FontStyle1410

Shape1408.geometry = Text1409

Billboard1407.children.append(Shape1408)

HAnimSite1404.children.append(Billboard1407)

HAnimSegment1396.children.append(HAnimSite1404)

HAnimJoint1395.children.append(HAnimSegment1396)
HAnimJoint1411 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_2")
HAnimJoint1411.name = "l_metacarpophalangeal_2"
HAnimJoint1411.center = [0.1983,0.7815,-0.028]
HAnimSegment1412 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_2")
HAnimSegment1412.name = "l_carpal_proximal_phalanx_2"
Transform1413 = x3d.Transform()
Transform1413.translation = [0.1983,0.7815,-0.028]
Transform1414 = x3d.Transform()
Shape1415 = x3d.Shape(USE="HAnimJointShape")

Transform1414.children.append(Shape1415)

Transform1413.children.append(Transform1414)

HAnimSegment1412.children.append(Transform1413)
Shape1416 = x3d.Shape()
LineSet1417 = x3d.LineSet()
LineSet1417.vertexCount = [2]
ColorRGBA1418 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1417.color = ColorRGBA1418
Coordinate1419 = x3d.Coordinate()
Coordinate1419.point = [(0.1983, 0.7815, -0.028),(0.2017, 0.7363, -0.0248)]

LineSet1417.coord = Coordinate1419

Shape1416.geometry = LineSet1417

HAnimSegment1412.children.append(Shape1416)

HAnimJoint1411.children.append(HAnimSegment1412)
HAnimJoint1420 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint1420.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint1420.center = [0.2017,0.7363,-0.0248]
HAnimSegment1421 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_2")
HAnimSegment1421.name = "l_carpal_middle_phalanx_2"
Transform1422 = x3d.Transform()
Transform1422.translation = [0.2017,0.7363,-0.0248]
Transform1423 = x3d.Transform()
Shape1424 = x3d.Shape(USE="HAnimJointShape")

Transform1423.children.append(Shape1424)

Transform1422.children.append(Transform1423)

HAnimSegment1421.children.append(Transform1422)
Shape1425 = x3d.Shape()
LineSet1426 = x3d.LineSet()
LineSet1426.vertexCount = [2]
ColorRGBA1427 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1426.color = ColorRGBA1427
Coordinate1428 = x3d.Coordinate()
Coordinate1428.point = [(0.2017, 0.7363, -0.0248),(0.2028, 0.7139, -0.0236)]

LineSet1426.coord = Coordinate1428

Shape1425.geometry = LineSet1426

HAnimSegment1421.children.append(Shape1425)

HAnimJoint1420.children.append(HAnimSegment1421)
HAnimJoint1429 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint1429.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint1429.center = [0.2028,0.7139,-0.0236]

HAnimJoint1420.children.append(HAnimJoint1429)

HAnimJoint1411.children.append(HAnimJoint1420)

HAnimJoint1395.children.append(HAnimJoint1411)

HAnimJoint1386.children.append(HAnimJoint1395)

HAnimJoint1330.children.append(HAnimJoint1386)
HAnimJoint1430 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_3")
HAnimJoint1430.name = "l_midcarpal_3"
HAnimJoint1430.center = [0.1809,0.7,-0.1067]
HAnimSegment1431 = x3d.HAnimSegment(DEF="hanim_l_capitate")
HAnimSegment1431.name = "l_capitate"
Transform1432 = x3d.Transform()
Transform1432.translation = [0.1809,0.7,-0.1067]
Transform1433 = x3d.Transform()
Shape1434 = x3d.Shape(USE="HAnimJointShape")

Transform1433.children.append(Shape1434)

Transform1432.children.append(Transform1433)

HAnimSegment1431.children.append(Transform1432)
Shape1435 = x3d.Shape()
LineSet1436 = x3d.LineSet()
LineSet1436.vertexCount = [2]
ColorRGBA1437 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1436.color = ColorRGBA1437
Coordinate1438 = x3d.Coordinate()
Coordinate1438.point = [(0.1809, 0.7, -0.1067),(0.1987, 0.8029, -0.053)]

LineSet1436.coord = Coordinate1438

Shape1435.geometry = LineSet1436

HAnimSegment1431.children.append(Shape1435)

HAnimJoint1430.children.append(HAnimSegment1431)
HAnimJoint1439 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_3")
HAnimJoint1439.name = "l_carpometacarpal_3"
HAnimJoint1439.center = [0.1987,0.8029,-0.053]
HAnimSegment1440 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_3")
HAnimSegment1440.name = "l_metacarpal_3"
Transform1441 = x3d.Transform()
Transform1441.translation = [0.1987,0.8029,-0.053]
Transform1442 = x3d.Transform()
Shape1443 = x3d.Shape(USE="HAnimJointShape")

Transform1442.children.append(Shape1443)

Transform1441.children.append(Transform1442)

HAnimSegment1440.children.append(Transform1441)
Shape1444 = x3d.Shape()
LineSet1445 = x3d.LineSet()
LineSet1445.vertexCount = [2]
ColorRGBA1446 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1445.color = ColorRGBA1446
Coordinate1447 = x3d.Coordinate()
Coordinate1447.point = [(0.1987, 0.8029, -0.053),(0.1987, 0.7818, -0.053)]

LineSet1445.coord = Coordinate1447

Shape1444.geometry = LineSet1445

HAnimSegment1440.children.append(Shape1444)
HAnimSite1448 = x3d.HAnimSite(DEF="hanim_l_metacarpal_phalanx_3")
HAnimSite1448.name = "l_metacarpal_phalanx_3"
TouchSensor1449 = x3d.TouchSensor()
TouchSensor1449.description = "HAnimSite 76 l_metacarpal_phalanx_3"

HAnimSite1448.children.append(TouchSensor1449)
Shape1450 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1448.children.append(Shape1450)
Billboard1451 = x3d.Billboard()
Shape1452 = x3d.Shape()
Text1453 = x3d.Text()
Text1453.string = ["76"]
FontStyle1454 = x3d.FontStyle()
FontStyle1454.size = 0.035

Text1453.fontStyle = FontStyle1454

Shape1452.geometry = Text1453

Billboard1451.children.append(Shape1452)

HAnimSite1448.children.append(Billboard1451)

HAnimSegment1440.children.append(HAnimSite1448)

HAnimJoint1439.children.append(HAnimSegment1440)
HAnimJoint1455 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_3")
HAnimJoint1455.name = "l_metacarpophalangeal_3"
HAnimJoint1455.center = [0.1987,0.7818,-0.053]
HAnimSegment1456 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_3")
HAnimSegment1456.name = "l_carpal_proximal_phalanx_3"
Transform1457 = x3d.Transform()
Transform1457.translation = [0.1987,0.7818,-0.053]
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
Coordinate1463.point = [(0.1987, 0.7818, -0.053),(0.2013, 0.7273, -0.0503)]

LineSet1461.coord = Coordinate1463

Shape1460.geometry = LineSet1461

HAnimSegment1456.children.append(Shape1460)

HAnimJoint1455.children.append(HAnimSegment1456)
HAnimJoint1464 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint1464.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint1464.center = [0.2013,0.7273,-0.0503]
HAnimSegment1465 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_3")
HAnimSegment1465.name = "l_carpal_middle_phalanx_3"
Transform1466 = x3d.Transform()
Transform1466.translation = [0.2013,0.7273,-0.0503]
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
Coordinate1472.point = [(0.2013, 0.7273, -0.0503),(0.2026, 0.7011, -0.0494)]

LineSet1470.coord = Coordinate1472

Shape1469.geometry = LineSet1470

HAnimSegment1465.children.append(Shape1469)

HAnimJoint1464.children.append(HAnimSegment1465)
HAnimJoint1473 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint1473.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint1473.center = [0.2026,0.7011,-0.0494]

HAnimJoint1464.children.append(HAnimJoint1473)

HAnimJoint1455.children.append(HAnimJoint1464)

HAnimJoint1439.children.append(HAnimJoint1455)

HAnimJoint1430.children.append(HAnimJoint1439)

HAnimJoint1330.children.append(HAnimJoint1430)
HAnimJoint1474 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_4_5")
HAnimJoint1474.name = "l_midcarpal_4_5"
HAnimJoint1474.center = [0.1809,0.6973,-0.1276]
HAnimSegment1475 = x3d.HAnimSegment(DEF="hanim_l_hamate")
HAnimSegment1475.name = "l_hamate"
Transform1476 = x3d.Transform()
Transform1476.translation = [0.1809,0.6973,-0.1276]
Transform1477 = x3d.Transform()
Shape1478 = x3d.Shape(USE="HAnimJointShape")

Transform1477.children.append(Shape1478)

Transform1476.children.append(Transform1477)

HAnimSegment1475.children.append(Transform1476)
Shape1479 = x3d.Shape()
LineSet1480 = x3d.LineSet()
LineSet1480.vertexCount = [2]
ColorRGBA1481 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1480.color = ColorRGBA1481
Coordinate1482 = x3d.Coordinate()
Coordinate1482.point = [(0.1809, 0.6973, -0.1276),(0.1956, 0.8019, -0.0794)]

LineSet1480.coord = Coordinate1482

Shape1479.geometry = LineSet1480

HAnimSegment1475.children.append(Shape1479)
Shape1483 = x3d.Shape()
LineSet1484 = x3d.LineSet()
LineSet1484.vertexCount = [2]
ColorRGBA1485 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1484.color = ColorRGBA1485
Coordinate1486 = x3d.Coordinate()
Coordinate1486.point = [(0.1809, 0.6973, -0.1276),(0.1925, 0.8066, -0.1036)]

LineSet1484.coord = Coordinate1486

Shape1483.geometry = LineSet1484

HAnimSegment1475.children.append(Shape1483)

HAnimJoint1474.children.append(HAnimSegment1475)
HAnimJoint1487 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_4")
HAnimJoint1487.name = "l_carpometacarpal_4"
HAnimJoint1487.center = [0.1956,0.8019,-0.0794]
HAnimSegment1488 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_4")
HAnimSegment1488.name = "l_metacarpal_4"
Transform1489 = x3d.Transform()
Transform1489.translation = [0.1956,0.8019,-0.0794]
Transform1490 = x3d.Transform()
Shape1491 = x3d.Shape(USE="HAnimJointShape")

Transform1490.children.append(Shape1491)

Transform1489.children.append(Transform1490)

HAnimSegment1488.children.append(Transform1489)
Shape1492 = x3d.Shape()
LineSet1493 = x3d.LineSet()
LineSet1493.vertexCount = [2]
ColorRGBA1494 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1493.color = ColorRGBA1494
Coordinate1495 = x3d.Coordinate()
Coordinate1495.point = [(0.1956, 0.8019, -0.0794),(0.1956, 0.7815, -0.0794)]

LineSet1493.coord = Coordinate1495

Shape1492.geometry = LineSet1493

HAnimSegment1488.children.append(Shape1492)

HAnimJoint1487.children.append(HAnimSegment1488)
HAnimJoint1496 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_4")
HAnimJoint1496.name = "l_metacarpophalangeal_4"
HAnimJoint1496.center = [0.1956,0.7815,-0.0794]
HAnimSegment1497 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_4")
HAnimSegment1497.name = "l_carpal_proximal_phalanx_4"
Transform1498 = x3d.Transform()
Transform1498.translation = [0.1956,0.7815,-0.0794]
Transform1499 = x3d.Transform()
Shape1500 = x3d.Shape(USE="HAnimJointShape")

Transform1499.children.append(Shape1500)

Transform1498.children.append(Transform1499)

HAnimSegment1497.children.append(Transform1498)
Shape1501 = x3d.Shape()
LineSet1502 = x3d.LineSet()
LineSet1502.vertexCount = [2]
ColorRGBA1503 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1502.color = ColorRGBA1503
Coordinate1504 = x3d.Coordinate()
Coordinate1504.point = [(0.1956, 0.7815, -0.0794),(0.1973, 0.7287, -0.0777)]

LineSet1502.coord = Coordinate1504

Shape1501.geometry = LineSet1502

HAnimSegment1497.children.append(Shape1501)

HAnimJoint1496.children.append(HAnimSegment1497)
HAnimJoint1505 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint1505.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint1505.center = [0.1973,0.7287,-0.0777]
HAnimSegment1506 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_4")
HAnimSegment1506.name = "l_carpal_middle_phalanx_4"
Transform1507 = x3d.Transform()
Transform1507.translation = [0.1973,0.7287,-0.0777]
Transform1508 = x3d.Transform()
Shape1509 = x3d.Shape(USE="HAnimJointShape")

Transform1508.children.append(Shape1509)

Transform1507.children.append(Transform1508)

HAnimSegment1506.children.append(Transform1507)
Shape1510 = x3d.Shape()
LineSet1511 = x3d.LineSet()
LineSet1511.vertexCount = [2]
ColorRGBA1512 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1511.color = ColorRGBA1512
Coordinate1513 = x3d.Coordinate()
Coordinate1513.point = [(0.1973, 0.7287, -0.0777),(0.1983, 0.7045, -0.0767)]

LineSet1511.coord = Coordinate1513

Shape1510.geometry = LineSet1511

HAnimSegment1506.children.append(Shape1510)

HAnimJoint1505.children.append(HAnimSegment1506)
HAnimJoint1514 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint1514.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint1514.center = [0.1983,0.7045,-0.0767]

HAnimJoint1505.children.append(HAnimJoint1514)

HAnimJoint1496.children.append(HAnimJoint1505)

HAnimJoint1487.children.append(HAnimJoint1496)

HAnimJoint1474.children.append(HAnimJoint1487)
HAnimJoint1515 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_5")
HAnimJoint1515.name = "l_carpometacarpal_5"
HAnimJoint1515.center = [0.1925,0.8066,-0.1036]
HAnimSegment1516 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_5")
HAnimSegment1516.name = "l_metacarpal_5"
Transform1517 = x3d.Transform()
Transform1517.translation = [0.1925,0.8066,-0.1036]
Transform1518 = x3d.Transform()
Shape1519 = x3d.Shape(USE="HAnimJointShape")

Transform1518.children.append(Shape1519)

Transform1517.children.append(Transform1518)

HAnimSegment1516.children.append(Transform1517)
Shape1520 = x3d.Shape()
LineSet1521 = x3d.LineSet()
LineSet1521.vertexCount = [2]
ColorRGBA1522 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1521.color = ColorRGBA1522
Coordinate1523 = x3d.Coordinate()
Coordinate1523.point = [(0.1925, 0.8066, -0.1036),(0.1925, 0.7866, -0.1036)]

LineSet1521.coord = Coordinate1523

Shape1520.geometry = LineSet1521

HAnimSegment1516.children.append(Shape1520)
HAnimSite1524 = x3d.HAnimSite(DEF="hanim_l_metacarpal_phalanx_5")
HAnimSite1524.name = "l_metacarpal_phalanx_5"
HAnimSite1524.translation = [0.1929,0.786,-0.1122]
TouchSensor1525 = x3d.TouchSensor()
TouchSensor1525.description = "HAnimSite 77 l_metacarpal_phalanx_5"

HAnimSite1524.children.append(TouchSensor1525)
Shape1526 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1524.children.append(Shape1526)
Billboard1527 = x3d.Billboard()
Shape1528 = x3d.Shape()
Text1529 = x3d.Text()
Text1529.string = ["77"]
FontStyle1530 = x3d.FontStyle()
FontStyle1530.size = 0.035

Text1529.fontStyle = FontStyle1530

Shape1528.geometry = Text1529

Billboard1527.children.append(Shape1528)

HAnimSite1524.children.append(Billboard1527)

HAnimSegment1516.children.append(HAnimSite1524)

HAnimJoint1515.children.append(HAnimSegment1516)
HAnimJoint1531 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_5")
HAnimJoint1531.name = "l_metacarpophalangeal_5"
HAnimJoint1531.center = [0.1925,0.7866,-0.1036]
HAnimSegment1532 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_5")
HAnimSegment1532.name = "l_carpal_proximal_phalanx_5"
Transform1533 = x3d.Transform()
Transform1533.translation = [0.1925,0.7866,-0.1036]
Transform1534 = x3d.Transform()
Shape1535 = x3d.Shape(USE="HAnimJointShape")

Transform1534.children.append(Shape1535)

Transform1533.children.append(Transform1534)

HAnimSegment1532.children.append(Transform1533)
Shape1536 = x3d.Shape()
LineSet1537 = x3d.LineSet()
LineSet1537.vertexCount = [2]
ColorRGBA1538 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1537.color = ColorRGBA1538
Coordinate1539 = x3d.Coordinate()
Coordinate1539.point = [(0.1925, 0.7866, -0.1036),(0.1938, 0.7452, -0.1024)]

LineSet1537.coord = Coordinate1539

Shape1536.geometry = LineSet1537

HAnimSegment1532.children.append(Shape1536)

HAnimJoint1531.children.append(HAnimSegment1532)
HAnimJoint1540 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint1540.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint1540.center = [0.1938,0.7452,-0.1024]
HAnimSegment1541 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_5")
HAnimSegment1541.name = "l_carpal_middle_phalanx_5"
Transform1542 = x3d.Transform()
Transform1542.translation = [0.1938,0.7452,-0.1024]
Transform1543 = x3d.Transform()
Shape1544 = x3d.Shape(USE="HAnimJointShape")

Transform1543.children.append(Shape1544)

Transform1542.children.append(Transform1543)

HAnimSegment1541.children.append(Transform1542)
Shape1545 = x3d.Shape()
LineSet1546 = x3d.LineSet()
LineSet1546.vertexCount = [2]
ColorRGBA1547 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1546.color = ColorRGBA1547
Coordinate1548 = x3d.Coordinate()
Coordinate1548.point = [(0.1938, 0.7452, -0.1024),(0.1948, 0.7277, -0.1017)]

LineSet1546.coord = Coordinate1548

Shape1545.geometry = LineSet1546

HAnimSegment1541.children.append(Shape1545)

HAnimJoint1540.children.append(HAnimSegment1541)
HAnimJoint1549 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint1549.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint1549.center = [0.1948,0.7277,-0.1017]

HAnimJoint1540.children.append(HAnimJoint1549)

HAnimJoint1531.children.append(HAnimJoint1540)

HAnimJoint1515.children.append(HAnimJoint1531)

HAnimJoint1474.children.append(HAnimJoint1515)

HAnimJoint1330.children.append(HAnimJoint1474)

HAnimJoint1293.children.append(HAnimJoint1330)

HAnimJoint1270.children.append(HAnimJoint1293)

HAnimJoint1261.children.append(HAnimJoint1270)

HAnimJoint1217.children.append(HAnimJoint1261)

HAnimJoint985.children.append(HAnimJoint1217)
HAnimJoint1550 = x3d.HAnimJoint(DEF="hanim_r_sternoclavicular")
HAnimJoint1550.name = "r_sternoclavicular"
HAnimJoint1550.center = [-0.0694,1.46,-0.033]
HAnimSegment1551 = x3d.HAnimSegment(DEF="hanim_r_clavicle")
HAnimSegment1551.name = "r_clavicle"
Transform1552 = x3d.Transform()
Transform1552.translation = [-0.0694,1.46,-0.033]
Transform1553 = x3d.Transform()
Shape1554 = x3d.Shape(USE="HAnimJointShape")

Transform1553.children.append(Shape1554)

Transform1552.children.append(Transform1553)

HAnimSegment1551.children.append(Transform1552)
Shape1555 = x3d.Shape()
LineSet1556 = x3d.LineSet()
LineSet1556.vertexCount = [2]
ColorRGBA1557 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1556.color = ColorRGBA1557
Coordinate1558 = x3d.Coordinate()
Coordinate1558.point = [(-0.0694, 1.46, -0.033),(-0.0836, 1.4281, -0.0401)]

LineSet1556.coord = Coordinate1558

Shape1555.geometry = LineSet1556

HAnimSegment1551.children.append(Shape1555)
HAnimSite1559 = x3d.HAnimSite(DEF="hanim_r_acromion")
HAnimSite1559.name = "r_acromion"
HAnimSite1559.translation = [-0.1905,1.4791,-0.0431]
TouchSensor1560 = x3d.TouchSensor()
TouchSensor1560.description = "HAnimSite 20 r_acromion"

HAnimSite1559.children.append(TouchSensor1560)
Shape1561 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1559.children.append(Shape1561)
Billboard1562 = x3d.Billboard()
Shape1563 = x3d.Shape()
Text1564 = x3d.Text()
Text1564.string = ["20"]
FontStyle1565 = x3d.FontStyle()
FontStyle1565.size = 0.035

Text1564.fontStyle = FontStyle1565

Shape1563.geometry = Text1564

Billboard1562.children.append(Shape1563)

HAnimSite1559.children.append(Billboard1562)

HAnimSegment1551.children.append(HAnimSite1559)
HAnimSite1566 = x3d.HAnimSite(DEF="hanim_r_axilla_distal")
HAnimSite1566.name = "r_axilla_distal"
HAnimSite1566.translation = [-0.1603,1.4098,-0.0826]
TouchSensor1567 = x3d.TouchSensor()
TouchSensor1567.description = "HAnimSite 22 r_axilla_distal"

HAnimSite1566.children.append(TouchSensor1567)
Shape1568 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1566.children.append(Shape1568)
Billboard1569 = x3d.Billboard()
Shape1570 = x3d.Shape()
Text1571 = x3d.Text()
Text1571.string = ["22"]
FontStyle1572 = x3d.FontStyle()
FontStyle1572.size = 0.035

Text1571.fontStyle = FontStyle1572

Shape1570.geometry = Text1571

Billboard1569.children.append(Shape1570)

HAnimSite1566.children.append(Billboard1569)

HAnimSegment1551.children.append(HAnimSite1566)
HAnimSite1573 = x3d.HAnimSite(DEF="hanim_r_axilla_posterior_folds")
HAnimSite1573.name = "r_axilla_posterior_folds"
TouchSensor1574 = x3d.TouchSensor()
TouchSensor1574.description = "HAnimSite 23 r_axilla_posterior_folds"

HAnimSite1573.children.append(TouchSensor1574)
Shape1575 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1573.children.append(Shape1575)
Billboard1576 = x3d.Billboard()
Shape1577 = x3d.Shape()
Text1578 = x3d.Text()
Text1578.string = ["23"]
FontStyle1579 = x3d.FontStyle()
FontStyle1579.size = 0.035

Text1578.fontStyle = FontStyle1579

Shape1577.geometry = Text1578

Billboard1576.children.append(Shape1577)

HAnimSite1573.children.append(Billboard1576)

HAnimSegment1551.children.append(HAnimSite1573)
HAnimSite1580 = x3d.HAnimSite(DEF="hanim_r_axilla_proximal")
HAnimSite1580.name = "r_axilla_proximal"
HAnimSite1580.translation = [-0.1626,1.4072,-0.0031]
TouchSensor1581 = x3d.TouchSensor()
TouchSensor1581.description = "HAnimSite 21 r_axilla_proximal"

HAnimSite1580.children.append(TouchSensor1581)
Shape1582 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1580.children.append(Shape1582)
Billboard1583 = x3d.Billboard()
Shape1584 = x3d.Shape()
Text1585 = x3d.Text()
Text1585.string = ["21"]
FontStyle1586 = x3d.FontStyle()
FontStyle1586.size = 0.035

Text1585.fontStyle = FontStyle1586

Shape1584.geometry = Text1585

Billboard1583.children.append(Shape1584)

HAnimSite1580.children.append(Billboard1583)

HAnimSegment1551.children.append(HAnimSite1580)
HAnimSite1587 = x3d.HAnimSite(DEF="hanim_r_clavicale")
HAnimSite1587.name = "r_clavicale"
HAnimSite1587.translation = [-0.0115,1.4943,0.04]
TouchSensor1588 = x3d.TouchSensor()
TouchSensor1588.description = "HAnimSite 19 r_clavicale"

HAnimSite1587.children.append(TouchSensor1588)
Shape1589 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1587.children.append(Shape1589)
Billboard1590 = x3d.Billboard()
Shape1591 = x3d.Shape()
Text1592 = x3d.Text()
Text1592.string = ["19"]
FontStyle1593 = x3d.FontStyle()
FontStyle1593.size = 0.035

Text1592.fontStyle = FontStyle1593

Shape1591.geometry = Text1592

Billboard1590.children.append(Shape1591)

HAnimSite1587.children.append(Billboard1590)

HAnimSegment1551.children.append(HAnimSite1587)

HAnimJoint1550.children.append(HAnimSegment1551)
HAnimJoint1594 = x3d.HAnimJoint(DEF="hanim_r_acromioclavicular")
HAnimJoint1594.name = "r_acromioclavicular"
HAnimJoint1594.center = [-0.0836,1.4281,-0.0401]
HAnimSegment1595 = x3d.HAnimSegment(DEF="hanim_r_scapula")
HAnimSegment1595.name = "r_scapula"
Transform1596 = x3d.Transform()
Transform1596.translation = [-0.0836,1.4281,-0.0401]
Transform1597 = x3d.Transform()
Shape1598 = x3d.Shape(USE="HAnimJointShape")

Transform1597.children.append(Shape1598)

Transform1596.children.append(Transform1597)

HAnimSegment1595.children.append(Transform1596)
Shape1599 = x3d.Shape()
LineSet1600 = x3d.LineSet()
LineSet1600.vertexCount = [2]
ColorRGBA1601 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1600.color = ColorRGBA1601
Coordinate1602 = x3d.Coordinate()
Coordinate1602.point = [(-0.0836, 1.4281, -0.0401),(-0.1907, 1.4407, -0.0325)]

LineSet1600.coord = Coordinate1602

Shape1599.geometry = LineSet1600

HAnimSegment1595.children.append(Shape1599)

HAnimJoint1594.children.append(HAnimSegment1595)
HAnimJoint1603 = x3d.HAnimJoint(DEF="hanim_r_shoulder")
HAnimJoint1603.name = "r_shoulder"
HAnimJoint1603.center = [-0.1907,1.4407,-0.0325]
HAnimSegment1604 = x3d.HAnimSegment(DEF="hanim_r_upperarm")
HAnimSegment1604.name = "r_upperarm"
Transform1605 = x3d.Transform()
Transform1605.translation = [-0.1907,1.4407,-0.0325]
Transform1606 = x3d.Transform()
Shape1607 = x3d.Shape(USE="HAnimJointShape")

Transform1606.children.append(Shape1607)

Transform1605.children.append(Transform1606)

HAnimSegment1604.children.append(Transform1605)
Shape1608 = x3d.Shape()
LineSet1609 = x3d.LineSet()
LineSet1609.vertexCount = [2]
ColorRGBA1610 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1609.color = ColorRGBA1610
Coordinate1611 = x3d.Coordinate()
Coordinate1611.point = [(-0.1907, 1.4407, -0.0325),(-0.1949, 1.1388, -0.062)]

LineSet1609.coord = Coordinate1611

Shape1608.geometry = LineSet1609

HAnimSegment1604.children.append(Shape1608)
HAnimSite1612 = x3d.HAnimSite(DEF="hanim_r_bideltoid")
HAnimSite1612.name = "r_bideltoid"
TouchSensor1613 = x3d.TouchSensor()
TouchSensor1613.description = "HAnimSite 97 r_bideltoid"

HAnimSite1612.children.append(TouchSensor1613)
Shape1614 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1612.children.append(Shape1614)
Billboard1615 = x3d.Billboard()
Shape1616 = x3d.Shape()
Text1617 = x3d.Text()
Text1617.string = ["97"]
FontStyle1618 = x3d.FontStyle()
FontStyle1618.size = 0.035

Text1617.fontStyle = FontStyle1618

Shape1616.geometry = Text1617

Billboard1615.children.append(Shape1616)

HAnimSite1612.children.append(Billboard1615)

HAnimSegment1604.children.append(HAnimSite1612)
HAnimSite1619 = x3d.HAnimSite(DEF="hanim_r_humeral_lateral_epicondyles")
HAnimSite1619.name = "r_humeral_lateral_epicondyles"
HAnimSite1619.translation = [-0.2224,1.1517,-0.1033]
TouchSensor1620 = x3d.TouchSensor()
TouchSensor1620.description = "HAnimSite 66 r_humeral_lateral_epicondyles"

HAnimSite1619.children.append(TouchSensor1620)
Shape1621 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1619.children.append(Shape1621)
Billboard1622 = x3d.Billboard()
Shape1623 = x3d.Shape()
Text1624 = x3d.Text()
Text1624.string = ["66"]
FontStyle1625 = x3d.FontStyle()
FontStyle1625.size = 0.035

Text1624.fontStyle = FontStyle1625

Shape1623.geometry = Text1624

Billboard1622.children.append(Shape1623)

HAnimSite1619.children.append(Billboard1622)

HAnimSegment1604.children.append(HAnimSite1619)

HAnimJoint1603.children.append(HAnimSegment1604)
HAnimJoint1626 = x3d.HAnimJoint(DEF="hanim_r_elbow")
HAnimJoint1626.name = "r_elbow"
HAnimJoint1626.center = [-0.1949,1.1388,-0.062]
HAnimSegment1627 = x3d.HAnimSegment(DEF="hanim_r_forearm")
HAnimSegment1627.name = "r_forearm"
Transform1628 = x3d.Transform()
Transform1628.translation = [-0.1949,1.1388,-0.062]
Transform1629 = x3d.Transform()
Shape1630 = x3d.Shape(USE="HAnimJointShape")

Transform1629.children.append(Shape1630)

Transform1628.children.append(Transform1629)

HAnimSegment1627.children.append(Transform1628)
Shape1631 = x3d.Shape()
LineSet1632 = x3d.LineSet()
LineSet1632.vertexCount = [2]
ColorRGBA1633 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1632.color = ColorRGBA1633
Coordinate1634 = x3d.Coordinate()
Coordinate1634.point = [(-0.1949, 1.1388, -0.062),(-0.1959, 0.8694, -0.0521)]

LineSet1632.coord = Coordinate1634

Shape1631.geometry = LineSet1632

HAnimSegment1627.children.append(Shape1631)
HAnimSite1635 = x3d.HAnimSite(DEF="hanim_r_humeral_medial_epicondyles")
HAnimSite1635.name = "r_humeral_medial_epicondyles"
HAnimSite1635.translation = [-0.168,1.1298,-0.1062]
TouchSensor1636 = x3d.TouchSensor()
TouchSensor1636.description = "HAnimSite 67 r_humeral_medial_epicondyles"

HAnimSite1635.children.append(TouchSensor1636)
Shape1637 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1635.children.append(Shape1637)
Billboard1638 = x3d.Billboard()
Shape1639 = x3d.Shape()
Text1640 = x3d.Text()
Text1640.string = ["67"]
FontStyle1641 = x3d.FontStyle()
FontStyle1641.size = 0.035

Text1640.fontStyle = FontStyle1641

Shape1639.geometry = Text1640

Billboard1638.children.append(Shape1639)

HAnimSite1635.children.append(Billboard1638)

HAnimSegment1627.children.append(HAnimSite1635)
HAnimSite1642 = x3d.HAnimSite(DEF="hanim_r_olecranon")
HAnimSite1642.name = "r_olecranon"
HAnimSite1642.translation = [-0.1907,1.1405,-0.1065]
TouchSensor1643 = x3d.TouchSensor()
TouchSensor1643.description = "HAnimSite 68 r_olecranon"

HAnimSite1642.children.append(TouchSensor1643)
Shape1644 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1642.children.append(Shape1644)
Billboard1645 = x3d.Billboard()
Shape1646 = x3d.Shape()
Text1647 = x3d.Text()
Text1647.string = ["68"]
FontStyle1648 = x3d.FontStyle()
FontStyle1648.size = 0.035

Text1647.fontStyle = FontStyle1648

Shape1646.geometry = Text1647

Billboard1645.children.append(Shape1646)

HAnimSite1642.children.append(Billboard1645)

HAnimSegment1627.children.append(HAnimSite1642)
HAnimSite1649 = x3d.HAnimSite(DEF="hanim_r_radial_styloid")
HAnimSite1649.name = "r_radial_styloid"
HAnimSite1649.translation = [-0.1884,0.8676,-0.036]
TouchSensor1650 = x3d.TouchSensor()
TouchSensor1650.description = "HAnimSite 74 r_radial_styloid"

HAnimSite1649.children.append(TouchSensor1650)
Shape1651 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1649.children.append(Shape1651)
Billboard1652 = x3d.Billboard()
Shape1653 = x3d.Shape()
Text1654 = x3d.Text()
Text1654.string = ["74"]
FontStyle1655 = x3d.FontStyle()
FontStyle1655.size = 0.035

Text1654.fontStyle = FontStyle1655

Shape1653.geometry = Text1654

Billboard1652.children.append(Shape1653)

HAnimSite1649.children.append(Billboard1652)

HAnimSegment1627.children.append(HAnimSite1649)
HAnimSite1656 = x3d.HAnimSite(DEF="hanim_r_radiale")
HAnimSite1656.name = "r_radiale"
HAnimSite1656.translation = [-0.213,1.1305,-0.1091]
TouchSensor1657 = x3d.TouchSensor()
TouchSensor1657.description = "HAnimSite 72 r_radiale"

HAnimSite1656.children.append(TouchSensor1657)
Shape1658 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1656.children.append(Shape1658)
Billboard1659 = x3d.Billboard()
Shape1660 = x3d.Shape()
Text1661 = x3d.Text()
Text1661.string = ["72"]
FontStyle1662 = x3d.FontStyle()
FontStyle1662.size = 0.035

Text1661.fontStyle = FontStyle1662

Shape1660.geometry = Text1661

Billboard1659.children.append(Shape1660)

HAnimSite1656.children.append(Billboard1659)

HAnimSegment1627.children.append(HAnimSite1656)

HAnimJoint1626.children.append(HAnimSegment1627)
HAnimJoint1663 = x3d.HAnimJoint(DEF="hanim_r_radiocarpal")
HAnimJoint1663.name = "r_radiocarpal"
HAnimJoint1663.center = [-0.1959,0.8694,-0.0521]
HAnimSegment1664 = x3d.HAnimSegment(DEF="hanim_r_carpal")
HAnimSegment1664.name = "r_carpal"
Transform1665 = x3d.Transform()
Transform1665.translation = [-0.2,0.85,-0.05]
Transform1665.rotation = [0,0,1,-3.14]
Transform1665.scale = [0.2,0.2,0.2]
Transform1666 = x3d.Transform()
Transform1666.rotation = [0,1,0,1.57]
Shape1667 = x3d.Shape(USE="HAnimJointShape")

Transform1666.children.append(Shape1667)

Transform1665.children.append(Transform1666)

HAnimSegment1664.children.append(Transform1665)
Shape1668 = x3d.Shape()
LineSet1669 = x3d.LineSet()
LineSet1669.vertexCount = [2]
ColorRGBA1670 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1669.color = ColorRGBA1670
Coordinate1671 = x3d.Coordinate()
Coordinate1671.point = [(-0.1959, 0.8694, -0.0521),(-0.1811, 0.6975, -0.0826)]

LineSet1669.coord = Coordinate1671

Shape1668.geometry = LineSet1669

HAnimSegment1664.children.append(Shape1668)
HAnimSite1672 = x3d.HAnimSite(DEF="hanim_r_ulnar_styloid")
HAnimSite1672.name = "r_ulnar_styloid"
HAnimSite1672.translation = [-0.2117,0.8562,-0.0584]
TouchSensor1673 = x3d.TouchSensor()
TouchSensor1673.description = "HAnimSite 73 r_ulnar_styloid"

HAnimSite1672.children.append(TouchSensor1673)
Shape1674 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1672.children.append(Shape1674)
Billboard1675 = x3d.Billboard()
Shape1676 = x3d.Shape()
Text1677 = x3d.Text()
Text1677.string = ["73"]
FontStyle1678 = x3d.FontStyle()
FontStyle1678.size = 0.035

Text1677.fontStyle = FontStyle1678

Shape1676.geometry = Text1677

Billboard1675.children.append(Shape1676)

HAnimSite1672.children.append(Billboard1675)

HAnimSegment1664.children.append(HAnimSite1672)
Shape1679 = x3d.Shape()
LineSet1680 = x3d.LineSet()
LineSet1680.vertexCount = [2]
ColorRGBA1681 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1680.color = ColorRGBA1681
Coordinate1682 = x3d.Coordinate()
Coordinate1682.point = [(-0.1959, 0.8694, -0.0521),(-0.1811, 0.6984, -0.0935)]

LineSet1680.coord = Coordinate1682

Shape1679.geometry = LineSet1680

HAnimSegment1664.children.append(Shape1679)
Shape1683 = x3d.Shape()
LineSet1684 = x3d.LineSet()
LineSet1684.vertexCount = [2]
ColorRGBA1685 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1684.color = ColorRGBA1685
Coordinate1686 = x3d.Coordinate()
Coordinate1686.point = [(-0.1959, 0.8694, -0.0521),(-0.1809, 0.7, -0.1067)]

LineSet1684.coord = Coordinate1686

Shape1683.geometry = LineSet1684

HAnimSegment1664.children.append(Shape1683)
Shape1687 = x3d.Shape()
LineSet1688 = x3d.LineSet()
LineSet1688.vertexCount = [2]
ColorRGBA1689 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1688.color = ColorRGBA1689
Coordinate1690 = x3d.Coordinate()
Coordinate1690.point = [(-0.1959, 0.8694, -0.0521),(-0.1809, 0.6973, -0.1276)]

LineSet1688.coord = Coordinate1690

Shape1687.geometry = LineSet1688

HAnimSegment1664.children.append(Shape1687)

HAnimJoint1663.children.append(HAnimSegment1664)
HAnimJoint1691 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_1")
HAnimJoint1691.name = "r_midcarpal_1"
HAnimJoint1691.center = [-0.1811,0.6975,-0.0826]
HAnimSegment1692 = x3d.HAnimSegment(DEF="hanim_r_trapezium")
HAnimSegment1692.name = "r_trapezium"
Transform1693 = x3d.Transform()
Transform1693.translation = [-0.1811,0.6975,-0.0826]
Transform1694 = x3d.Transform()
Shape1695 = x3d.Shape(USE="HAnimJointShape")

Transform1694.children.append(Shape1695)

Transform1693.children.append(Transform1694)

HAnimSegment1692.children.append(Transform1693)
Shape1696 = x3d.Shape()
LineSet1697 = x3d.LineSet()
LineSet1697.vertexCount = [2]
ColorRGBA1698 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1697.color = ColorRGBA1698
Coordinate1699 = x3d.Coordinate()
Coordinate1699.point = [(-0.1811, 0.6975, -0.0826),(-0.1899, 0.8502, -0.0473)]

LineSet1697.coord = Coordinate1699

Shape1696.geometry = LineSet1697

HAnimSegment1692.children.append(Shape1696)

HAnimJoint1691.children.append(HAnimSegment1692)
HAnimJoint1700 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_1")
HAnimJoint1700.name = "r_carpometacarpal_1"
HAnimJoint1700.center = [-0.1899,0.8502,-0.0473]
HAnimSegment1701 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_1")
HAnimSegment1701.name = "r_metacarpal_1"
Transform1702 = x3d.Transform()
Transform1702.translation = [-0.1899,0.8502,-0.0473]
Transform1703 = x3d.Transform()
Shape1704 = x3d.Shape(USE="HAnimJointShape")

Transform1703.children.append(Shape1704)

Transform1702.children.append(Transform1703)

HAnimSegment1701.children.append(Transform1702)
Shape1705 = x3d.Shape()
LineSet1706 = x3d.LineSet()
LineSet1706.vertexCount = [2]
ColorRGBA1707 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1706.color = ColorRGBA1707
Coordinate1708 = x3d.Coordinate()
Coordinate1708.point = [(-0.1899, 0.8502, -0.0473),(-0.1874, 0.8256, 0.0306)]

LineSet1706.coord = Coordinate1708

Shape1705.geometry = LineSet1706

HAnimSegment1701.children.append(Shape1705)

HAnimJoint1700.children.append(HAnimSegment1701)
HAnimJoint1709 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_1")
HAnimJoint1709.name = "r_metacarpophalangeal_1"
HAnimJoint1709.center = [-0.1874,0.8256,0.0306]
HAnimSegment1710 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_1")
HAnimSegment1710.name = "r_carpal_proximal_phalanx_1"
Transform1711 = x3d.Transform()
Transform1711.translation = [-0.1874,0.8256,0.0306]
Transform1712 = x3d.Transform()
Shape1713 = x3d.Shape(USE="HAnimJointShape")

Transform1712.children.append(Shape1713)

Transform1711.children.append(Transform1712)

HAnimSegment1710.children.append(Transform1711)
Shape1714 = x3d.Shape()
LineSet1715 = x3d.LineSet()
LineSet1715.vertexCount = [2]
ColorRGBA1716 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1715.color = ColorRGBA1716
Coordinate1717 = x3d.Coordinate()
Coordinate1717.point = [(-0.1874, 0.8256, 0.0306),(-0.1864, 0.819, 0.0506)]

LineSet1715.coord = Coordinate1717

Shape1714.geometry = LineSet1715

HAnimSegment1710.children.append(Shape1714)

HAnimJoint1709.children.append(HAnimSegment1710)
HAnimJoint1718 = x3d.HAnimJoint(DEF="hanim_r_carpal_interphalangeal_1")
HAnimJoint1718.name = "r_carpal_interphalangeal_1"
HAnimJoint1718.center = [-0.1864,0.819,0.0506]

HAnimJoint1709.children.append(HAnimJoint1718)

HAnimJoint1700.children.append(HAnimJoint1709)

HAnimJoint1691.children.append(HAnimJoint1700)

HAnimJoint1663.children.append(HAnimJoint1691)
HAnimJoint1719 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_2")
HAnimJoint1719.name = "r_midcarpal_2"
HAnimJoint1719.center = [-0.1811,0.6984,-0.0935]
HAnimSegment1720 = x3d.HAnimSegment(DEF="hanim_r_trapezoid")
HAnimSegment1720.name = "r_trapezoid"
Transform1721 = x3d.Transform()
Transform1721.translation = [-0.1811,0.6984,-0.0935]
Transform1722 = x3d.Transform()
Shape1723 = x3d.Shape(USE="HAnimJointShape")

Transform1722.children.append(Shape1723)

Transform1721.children.append(Transform1722)

HAnimSegment1720.children.append(Transform1721)
Shape1724 = x3d.Shape()
LineSet1725 = x3d.LineSet()
LineSet1725.vertexCount = [2]
ColorRGBA1726 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1725.color = ColorRGBA1726
Coordinate1727 = x3d.Coordinate()
Coordinate1727.point = [(-0.1811, 0.6984, -0.0935),(-0.1961, 0.8055, -0.0218)]

LineSet1725.coord = Coordinate1727

Shape1724.geometry = LineSet1725

HAnimSegment1720.children.append(Shape1724)

HAnimJoint1719.children.append(HAnimSegment1720)
HAnimJoint1728 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_2")
HAnimJoint1728.name = "r_carpometacarpal_2"
HAnimJoint1728.center = [-0.1961,0.8055,-0.0218]
HAnimSegment1729 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_2")
HAnimSegment1729.name = "r_metacarpal_2"
Transform1730 = x3d.Transform()
Transform1730.translation = [-0.1961,0.8055,-0.0218]
Transform1731 = x3d.Transform()
Shape1732 = x3d.Shape(USE="HAnimJointShape")

Transform1731.children.append(Shape1732)

Transform1730.children.append(Transform1731)

HAnimSegment1729.children.append(Transform1730)
Shape1733 = x3d.Shape()
LineSet1734 = x3d.LineSet()
LineSet1734.vertexCount = [2]
ColorRGBA1735 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1734.color = ColorRGBA1735
Coordinate1736 = x3d.Coordinate()
Coordinate1736.point = [(-0.1961, 0.8055, -0.0218),(-0.1961, 0.7846, -0.0218)]

LineSet1734.coord = Coordinate1736

Shape1733.geometry = LineSet1734

HAnimSegment1729.children.append(Shape1733)
HAnimSite1737 = x3d.HAnimSite(DEF="hanim_r_metacarpal_phalanx_2")
HAnimSite1737.name = "r_metacarpal_phalanx_2"
HAnimSite1737.translation = [-0.1977,0.8169,-0.0177]
TouchSensor1738 = x3d.TouchSensor()
TouchSensor1738.description = "HAnimSite 78 r_metacarpal_phalanx_2"

HAnimSite1737.children.append(TouchSensor1738)
Shape1739 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1737.children.append(Shape1739)
Billboard1740 = x3d.Billboard()
Shape1741 = x3d.Shape()
Text1742 = x3d.Text()
Text1742.string = ["78"]
FontStyle1743 = x3d.FontStyle()
FontStyle1743.size = 0.035

Text1742.fontStyle = FontStyle1743

Shape1741.geometry = Text1742

Billboard1740.children.append(Shape1741)

HAnimSite1737.children.append(Billboard1740)

HAnimSegment1729.children.append(HAnimSite1737)

HAnimJoint1728.children.append(HAnimSegment1729)
HAnimJoint1744 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_2")
HAnimJoint1744.name = "r_metacarpophalangeal_2"
HAnimJoint1744.center = [-0.1961,0.7846,-0.0218]
HAnimSegment1745 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_2")
HAnimSegment1745.name = "r_carpal_proximal_phalanx_2"
Transform1746 = x3d.Transform()
Transform1746.translation = [-0.1961,0.7846,-0.0218]
Transform1747 = x3d.Transform()
Shape1748 = x3d.Shape(USE="HAnimJointShape")

Transform1747.children.append(Shape1748)

Transform1746.children.append(Transform1747)

HAnimSegment1745.children.append(Transform1746)
Shape1749 = x3d.Shape()
LineSet1750 = x3d.LineSet()
LineSet1750.vertexCount = [2]
ColorRGBA1751 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1750.color = ColorRGBA1751
Coordinate1752 = x3d.Coordinate()
Coordinate1752.point = [(-0.1961, 0.7846, -0.0218),(-0.1954, 0.7393, -0.0185)]

LineSet1750.coord = Coordinate1752

Shape1749.geometry = LineSet1750

HAnimSegment1745.children.append(Shape1749)

HAnimJoint1744.children.append(HAnimSegment1745)
HAnimJoint1753 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint1753.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint1753.center = [-0.1954,0.7393,-0.0185]
HAnimSegment1754 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_2")
HAnimSegment1754.name = "r_carpal_middle_phalanx_2"
Transform1755 = x3d.Transform()
Transform1755.translation = [-0.1954,0.7393,-0.0185]
Transform1756 = x3d.Transform()
Shape1757 = x3d.Shape(USE="HAnimJointShape")

Transform1756.children.append(Shape1757)

Transform1755.children.append(Transform1756)

HAnimSegment1754.children.append(Transform1755)
Shape1758 = x3d.Shape()
LineSet1759 = x3d.LineSet()
LineSet1759.vertexCount = [2]
ColorRGBA1760 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1759.color = ColorRGBA1760
Coordinate1761 = x3d.Coordinate()
Coordinate1761.point = [(-0.1954, 0.7393, -0.0185),(-0.1945, 0.7169, -0.0173)]

LineSet1759.coord = Coordinate1761

Shape1758.geometry = LineSet1759

HAnimSegment1754.children.append(Shape1758)

HAnimJoint1753.children.append(HAnimSegment1754)
HAnimJoint1762 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint1762.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint1762.center = [-0.1945,0.7169,-0.0173]

HAnimJoint1753.children.append(HAnimJoint1762)

HAnimJoint1744.children.append(HAnimJoint1753)

HAnimJoint1728.children.append(HAnimJoint1744)

HAnimJoint1719.children.append(HAnimJoint1728)

HAnimJoint1663.children.append(HAnimJoint1719)
HAnimJoint1763 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_3")
HAnimJoint1763.name = "r_midcarpal_3"
HAnimJoint1763.center = [-0.1809,0.7,-0.1067]
HAnimSegment1764 = x3d.HAnimSegment(DEF="hanim_r_capitate")
HAnimSegment1764.name = "r_capitate"
Transform1765 = x3d.Transform()
Transform1765.translation = [-0.1809,0.7,-0.1067]
Transform1766 = x3d.Transform()
Shape1767 = x3d.Shape(USE="HAnimJointShape")

Transform1766.children.append(Shape1767)

Transform1765.children.append(Transform1766)

HAnimSegment1764.children.append(Transform1765)
Shape1768 = x3d.Shape()
LineSet1769 = x3d.LineSet()
LineSet1769.vertexCount = [2]
ColorRGBA1770 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1769.color = ColorRGBA1770
Coordinate1771 = x3d.Coordinate()
Coordinate1771.point = [(-0.1809, 0.7, -0.1067),(-0.1972, 0.806, -0.0468)]

LineSet1769.coord = Coordinate1771

Shape1768.geometry = LineSet1769

HAnimSegment1764.children.append(Shape1768)

HAnimJoint1763.children.append(HAnimSegment1764)
HAnimJoint1772 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_3")
HAnimJoint1772.name = "r_carpometacarpal_3"
HAnimJoint1772.center = [-0.1972,0.806,-0.0468]
HAnimSegment1773 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_3")
HAnimSegment1773.name = "r_metacarpal_3"
Transform1774 = x3d.Transform()
Transform1774.translation = [-0.1972,0.806,-0.0468]
Transform1775 = x3d.Transform()
Shape1776 = x3d.Shape(USE="HAnimJointShape")

Transform1775.children.append(Shape1776)

Transform1774.children.append(Transform1775)

HAnimSegment1773.children.append(Transform1774)
Shape1777 = x3d.Shape()
LineSet1778 = x3d.LineSet()
LineSet1778.vertexCount = [2]
ColorRGBA1779 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1778.color = ColorRGBA1779
Coordinate1780 = x3d.Coordinate()
Coordinate1780.point = [(-0.1972, 0.806, -0.0468),(-0.1972, 0.7849, -0.0468)]

LineSet1778.coord = Coordinate1780

Shape1777.geometry = LineSet1778

HAnimSegment1773.children.append(Shape1777)
HAnimSite1781 = x3d.HAnimSite(DEF="hanim_r_metacarpal_phalanx_3")
HAnimSite1781.name = "r_metacarpal_phalanx_3"
TouchSensor1782 = x3d.TouchSensor()
TouchSensor1782.description = "HAnimSite 79 r_metacarpal_phalanx_3"

HAnimSite1781.children.append(TouchSensor1782)
Shape1783 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1781.children.append(Shape1783)
Billboard1784 = x3d.Billboard()
Shape1785 = x3d.Shape()
Text1786 = x3d.Text()
Text1786.string = ["79"]
FontStyle1787 = x3d.FontStyle()
FontStyle1787.size = 0.035

Text1786.fontStyle = FontStyle1787

Shape1785.geometry = Text1786

Billboard1784.children.append(Shape1785)

HAnimSite1781.children.append(Billboard1784)

HAnimSegment1773.children.append(HAnimSite1781)

HAnimJoint1772.children.append(HAnimSegment1773)
HAnimJoint1788 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_3")
HAnimJoint1788.name = "r_metacarpophalangeal_3"
HAnimJoint1788.center = [-0.1972,0.7849,-0.0468]
HAnimSegment1789 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_3")
HAnimSegment1789.name = "r_carpal_proximal_phalanx_3"
Transform1790 = x3d.Transform()
Transform1790.translation = [-0.1972,0.7849,-0.0468]
Transform1791 = x3d.Transform()
Shape1792 = x3d.Shape(USE="HAnimJointShape")

Transform1791.children.append(Shape1792)

Transform1790.children.append(Transform1791)

HAnimSegment1789.children.append(Transform1790)
Shape1793 = x3d.Shape()
LineSet1794 = x3d.LineSet()
LineSet1794.vertexCount = [2]
ColorRGBA1795 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1794.color = ColorRGBA1795
Coordinate1796 = x3d.Coordinate()
Coordinate1796.point = [(-0.1972, 0.7849, -0.0468),(-0.195, 0.7304, -0.0441)]

LineSet1794.coord = Coordinate1796

Shape1793.geometry = LineSet1794

HAnimSegment1789.children.append(Shape1793)

HAnimJoint1788.children.append(HAnimSegment1789)
HAnimJoint1797 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint1797.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint1797.center = [-0.195,0.7304,-0.0441]
HAnimSegment1798 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_3")
HAnimSegment1798.name = "r_carpal_middle_phalanx_3"
Transform1799 = x3d.Transform()
Transform1799.translation = [-0.195,0.7304,-0.0441]
Transform1800 = x3d.Transform()
Shape1801 = x3d.Shape(USE="HAnimJointShape")

Transform1800.children.append(Shape1801)

Transform1799.children.append(Transform1800)

HAnimSegment1798.children.append(Transform1799)
Shape1802 = x3d.Shape()
LineSet1803 = x3d.LineSet()
LineSet1803.vertexCount = [2]
ColorRGBA1804 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1803.color = ColorRGBA1804
Coordinate1805 = x3d.Coordinate()
Coordinate1805.point = [(-0.195, 0.7304, -0.0441),(-0.1939, 0.7042, -0.0432)]

LineSet1803.coord = Coordinate1805

Shape1802.geometry = LineSet1803

HAnimSegment1798.children.append(Shape1802)

HAnimJoint1797.children.append(HAnimSegment1798)
HAnimJoint1806 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint1806.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint1806.center = [-0.1939,0.7042,-0.0432]

HAnimJoint1797.children.append(HAnimJoint1806)

HAnimJoint1788.children.append(HAnimJoint1797)

HAnimJoint1772.children.append(HAnimJoint1788)

HAnimJoint1763.children.append(HAnimJoint1772)

HAnimJoint1663.children.append(HAnimJoint1763)
HAnimJoint1807 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_4_5")
HAnimJoint1807.name = "r_midcarpal_4_5"
HAnimJoint1807.center = [-0.1809,0.6973,-0.1276]
HAnimSegment1808 = x3d.HAnimSegment(DEF="hanim_r_hamate")
HAnimSegment1808.name = "r_hamate"
Transform1809 = x3d.Transform()
Transform1809.translation = [-0.1809,0.6973,-0.1276]
Transform1810 = x3d.Transform()
Shape1811 = x3d.Shape(USE="HAnimJointShape")

Transform1810.children.append(Shape1811)

Transform1809.children.append(Transform1810)

HAnimSegment1808.children.append(Transform1809)
Shape1812 = x3d.Shape()
LineSet1813 = x3d.LineSet()
LineSet1813.vertexCount = [2]
ColorRGBA1814 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1813.color = ColorRGBA1814
Coordinate1815 = x3d.Coordinate()
Coordinate1815.point = [(-0.1809, 0.6973, -0.1276),(-0.1951, 0.8049, -0.0732)]

LineSet1813.coord = Coordinate1815

Shape1812.geometry = LineSet1813

HAnimSegment1808.children.append(Shape1812)
Shape1816 = x3d.Shape()
LineSet1817 = x3d.LineSet()
LineSet1817.vertexCount = [2]
ColorRGBA1818 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1817.color = ColorRGBA1818
Coordinate1819 = x3d.Coordinate()
Coordinate1819.point = [(-0.1809, 0.6973, -0.1276),(-0.1926, 0.8096, -0.0975)]

LineSet1817.coord = Coordinate1819

Shape1816.geometry = LineSet1817

HAnimSegment1808.children.append(Shape1816)

HAnimJoint1807.children.append(HAnimSegment1808)
HAnimJoint1820 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_4")
HAnimJoint1820.name = "r_carpometacarpal_4"
HAnimJoint1820.center = [-0.1951,0.8049,-0.0732]
HAnimSegment1821 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_4")
HAnimSegment1821.name = "r_metacarpal_4"
Transform1822 = x3d.Transform()
Transform1822.translation = [-0.1951,0.8049,-0.0732]
Transform1823 = x3d.Transform()
Shape1824 = x3d.Shape(USE="HAnimJointShape")

Transform1823.children.append(Shape1824)

Transform1822.children.append(Transform1823)

HAnimSegment1821.children.append(Transform1822)
Shape1825 = x3d.Shape()
LineSet1826 = x3d.LineSet()
LineSet1826.vertexCount = [2]
ColorRGBA1827 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1826.color = ColorRGBA1827
Coordinate1828 = x3d.Coordinate()
Coordinate1828.point = [(-0.1951, 0.8049, -0.0732),(-0.1951, 0.7845, -0.0732)]

LineSet1826.coord = Coordinate1828

Shape1825.geometry = LineSet1826

HAnimSegment1821.children.append(Shape1825)

HAnimJoint1820.children.append(HAnimSegment1821)
HAnimJoint1829 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_4")
HAnimJoint1829.name = "r_metacarpophalangeal_4"
HAnimJoint1829.center = [-0.1951,0.7845,-0.0732]
HAnimSegment1830 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_4")
HAnimSegment1830.name = "r_carpal_proximal_phalanx_4"
Transform1831 = x3d.Transform()
Transform1831.translation = [-0.1951,0.7845,-0.0732]
Transform1832 = x3d.Transform()
Shape1833 = x3d.Shape(USE="HAnimJointShape")

Transform1832.children.append(Shape1833)

Transform1831.children.append(Transform1832)

HAnimSegment1830.children.append(Transform1831)
Shape1834 = x3d.Shape()
LineSet1835 = x3d.LineSet()
LineSet1835.vertexCount = [2]
ColorRGBA1836 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1835.color = ColorRGBA1836
Coordinate1837 = x3d.Coordinate()
Coordinate1837.point = [(-0.1951, 0.7845, -0.0732),(-0.192, 0.7318, -0.0716)]

LineSet1835.coord = Coordinate1837

Shape1834.geometry = LineSet1835

HAnimSegment1830.children.append(Shape1834)

HAnimJoint1829.children.append(HAnimSegment1830)
HAnimJoint1838 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint1838.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint1838.center = [-0.192,0.7318,-0.0716]
HAnimSegment1839 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_4")
HAnimSegment1839.name = "r_carpal_middle_phalanx_4"
Transform1840 = x3d.Transform()
Transform1840.translation = [-0.192,0.7318,-0.0716]
Transform1841 = x3d.Transform()
Shape1842 = x3d.Shape(USE="HAnimJointShape")

Transform1841.children.append(Shape1842)

Transform1840.children.append(Transform1841)

HAnimSegment1839.children.append(Transform1840)
Shape1843 = x3d.Shape()
LineSet1844 = x3d.LineSet()
LineSet1844.vertexCount = [2]
ColorRGBA1845 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1844.color = ColorRGBA1845
Coordinate1846 = x3d.Coordinate()
Coordinate1846.point = [(-0.192, 0.7318, -0.0716),(-0.1908, 0.7077, -0.0706)]

LineSet1844.coord = Coordinate1846

Shape1843.geometry = LineSet1844

HAnimSegment1839.children.append(Shape1843)

HAnimJoint1838.children.append(HAnimSegment1839)
HAnimJoint1847 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint1847.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint1847.center = [-0.1908,0.7077,-0.0706]

HAnimJoint1838.children.append(HAnimJoint1847)

HAnimJoint1829.children.append(HAnimJoint1838)

HAnimJoint1820.children.append(HAnimJoint1829)

HAnimJoint1807.children.append(HAnimJoint1820)
HAnimJoint1848 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_5")
HAnimJoint1848.name = "r_carpometacarpal_5"
HAnimJoint1848.center = [-0.1926,0.8096,-0.0975]
HAnimSegment1849 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_5")
HAnimSegment1849.name = "r_metacarpal_5"
Transform1850 = x3d.Transform()
Transform1850.translation = [-0.1926,0.8096,-0.0975]
Transform1851 = x3d.Transform()
Shape1852 = x3d.Shape(USE="HAnimJointShape")

Transform1851.children.append(Shape1852)

Transform1850.children.append(Transform1851)

HAnimSegment1849.children.append(Transform1850)
Shape1853 = x3d.Shape()
LineSet1854 = x3d.LineSet()
LineSet1854.vertexCount = [2]
ColorRGBA1855 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1854.color = ColorRGBA1855
Coordinate1856 = x3d.Coordinate()
Coordinate1856.point = [(-0.1926, 0.8096, -0.0975),(-0.1926, 0.7896, -0.0975)]

LineSet1854.coord = Coordinate1856

Shape1853.geometry = LineSet1854

HAnimSegment1849.children.append(Shape1853)
HAnimSite1857 = x3d.HAnimSite(DEF="hanim_r_metacarpal_phalanx_5")
HAnimSite1857.name = "r_metacarpal_phalanx_5"
HAnimSite1857.translation = [-0.1929,0.789,-0.1064]
TouchSensor1858 = x3d.TouchSensor()
TouchSensor1858.description = "HAnimSite 80 r_metacarpal_phalanx_5"

HAnimSite1857.children.append(TouchSensor1858)
Shape1859 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1857.children.append(Shape1859)
Billboard1860 = x3d.Billboard()
Shape1861 = x3d.Shape()
Text1862 = x3d.Text()
Text1862.string = ["80"]
FontStyle1863 = x3d.FontStyle()
FontStyle1863.size = 0.035

Text1862.fontStyle = FontStyle1863

Shape1861.geometry = Text1862

Billboard1860.children.append(Shape1861)

HAnimSite1857.children.append(Billboard1860)

HAnimSegment1849.children.append(HAnimSite1857)

HAnimJoint1848.children.append(HAnimSegment1849)
HAnimJoint1864 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_5")
HAnimJoint1864.name = "r_metacarpophalangeal_5"
HAnimJoint1864.center = [-0.1926,0.7896,-0.0975]
HAnimSegment1865 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_5")
HAnimSegment1865.name = "r_carpal_proximal_phalanx_5"
Transform1866 = x3d.Transform()
Transform1866.translation = [-0.1926,0.7896,-0.0975]
Transform1867 = x3d.Transform()
Shape1868 = x3d.Shape(USE="HAnimJointShape")

Transform1867.children.append(Shape1868)

Transform1866.children.append(Transform1867)

HAnimSegment1865.children.append(Transform1866)
Shape1869 = x3d.Shape()
LineSet1870 = x3d.LineSet()
LineSet1870.vertexCount = [2]
ColorRGBA1871 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1870.color = ColorRGBA1871
Coordinate1872 = x3d.Coordinate()
Coordinate1872.point = [(-0.1926, 0.7896, -0.0975),(-0.1902, 0.7483, -0.0963)]

LineSet1870.coord = Coordinate1872

Shape1869.geometry = LineSet1870

HAnimSegment1865.children.append(Shape1869)

HAnimJoint1864.children.append(HAnimSegment1865)
HAnimJoint1873 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint1873.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint1873.center = [-0.1902,0.7483,-0.0963]
HAnimSegment1874 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_5")
HAnimSegment1874.name = "r_carpal_middle_phalanx_5"
Transform1875 = x3d.Transform()
Transform1875.translation = [-0.1902,0.7483,-0.0963]
Transform1876 = x3d.Transform()
Shape1877 = x3d.Shape(USE="HAnimJointShape")

Transform1876.children.append(Shape1877)

Transform1875.children.append(Transform1876)

HAnimSegment1874.children.append(Transform1875)
Shape1878 = x3d.Shape()
LineSet1879 = x3d.LineSet()
LineSet1879.vertexCount = [2]
ColorRGBA1880 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1879.color = ColorRGBA1880
Coordinate1881 = x3d.Coordinate()
Coordinate1881.point = [(-0.1902, 0.7483, -0.0963),(-0.1908, 0.754, -0.096)]

LineSet1879.coord = Coordinate1881

Shape1878.geometry = LineSet1879

HAnimSegment1874.children.append(Shape1878)

HAnimJoint1873.children.append(HAnimSegment1874)
HAnimJoint1882 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint1882.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint1882.center = [-0.1908,0.754,-0.096]

HAnimJoint1873.children.append(HAnimJoint1882)

HAnimJoint1864.children.append(HAnimJoint1873)

HAnimJoint1848.children.append(HAnimJoint1864)

HAnimJoint1807.children.append(HAnimJoint1848)

HAnimJoint1663.children.append(HAnimJoint1807)

HAnimJoint1626.children.append(HAnimJoint1663)

HAnimJoint1603.children.append(HAnimJoint1626)

HAnimJoint1594.children.append(HAnimJoint1603)

HAnimJoint1550.children.append(HAnimJoint1594)

HAnimJoint985.children.append(HAnimJoint1550)

HAnimJoint976.children.append(HAnimJoint985)

HAnimJoint967.children.append(HAnimJoint976)

HAnimJoint958.children.append(HAnimJoint967)

HAnimJoint942.children.append(HAnimJoint958)

HAnimJoint905.children.append(HAnimJoint942)

HAnimJoint896.children.append(HAnimJoint905)

HAnimJoint887.children.append(HAnimJoint896)

HAnimJoint864.children.append(HAnimJoint887)

HAnimJoint848.children.append(HAnimJoint864)

HAnimJoint839.children.append(HAnimJoint848)

HAnimJoint830.children.append(HAnimJoint839)

HAnimJoint821.children.append(HAnimJoint830)

HAnimJoint791.children.append(HAnimJoint821)

HAnimJoint782.children.append(HAnimJoint791)

HAnimJoint773.children.append(HAnimJoint782)

HAnimJoint743.children.append(HAnimJoint773)

HAnimJoint37.children.append(HAnimJoint743)

HAnimHumanoid36.skeleton.append(HAnimJoint37)
HAnimJoint1883 = x3d.HAnimJoint(USE="hanim_humanoid_root")

HAnimHumanoid36.joints.append(HAnimJoint1883)
HAnimJoint1884 = x3d.HAnimJoint(USE="hanim_sacroiliac")

HAnimHumanoid36.joints.append(HAnimJoint1884)
HAnimJoint1885 = x3d.HAnimJoint(USE="hanim_l_hip")

HAnimHumanoid36.joints.append(HAnimJoint1885)
HAnimJoint1886 = x3d.HAnimJoint(USE="hanim_l_knee")

HAnimHumanoid36.joints.append(HAnimJoint1886)
HAnimJoint1887 = x3d.HAnimJoint(USE="hanim_l_talocrural")

HAnimHumanoid36.joints.append(HAnimJoint1887)
HAnimJoint1888 = x3d.HAnimJoint(USE="hanim_l_talocalcaneonavicular")

HAnimHumanoid36.joints.append(HAnimJoint1888)
HAnimJoint1889 = x3d.HAnimJoint(USE="hanim_l_cuneonavicular_1")

HAnimHumanoid36.joints.append(HAnimJoint1889)
HAnimJoint1890 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_1")

HAnimHumanoid36.joints.append(HAnimJoint1890)
HAnimJoint1891 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_1")

HAnimHumanoid36.joints.append(HAnimJoint1891)
HAnimJoint1892 = x3d.HAnimJoint(USE="hanim_l_tarsal_interphalangeal_1")

HAnimHumanoid36.joints.append(HAnimJoint1892)
HAnimJoint1893 = x3d.HAnimJoint(USE="hanim_l_cuneonavicular_2")

HAnimHumanoid36.joints.append(HAnimJoint1893)
HAnimJoint1894 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_2")

HAnimHumanoid36.joints.append(HAnimJoint1894)
HAnimJoint1895 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1895)
HAnimJoint1896 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1896)
HAnimJoint1897 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1897)
HAnimJoint1898 = x3d.HAnimJoint(USE="hanim_l_cuneonavicular_3")

HAnimHumanoid36.joints.append(HAnimJoint1898)
HAnimJoint1899 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_3")

HAnimHumanoid36.joints.append(HAnimJoint1899)
HAnimJoint1900 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1900)
HAnimJoint1901 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1901)
HAnimJoint1902 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1902)
HAnimJoint1903 = x3d.HAnimJoint(USE="hanim_l_calcaneocuboid")

HAnimHumanoid36.joints.append(HAnimJoint1903)
HAnimJoint1904 = x3d.HAnimJoint(USE="hanim_l_transversetarsal")

HAnimHumanoid36.joints.append(HAnimJoint1904)
HAnimJoint1905 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_4")

HAnimHumanoid36.joints.append(HAnimJoint1905)
HAnimJoint1906 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1906)
HAnimJoint1907 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1907)
HAnimJoint1908 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1908)
HAnimJoint1909 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_5")

HAnimHumanoid36.joints.append(HAnimJoint1909)
HAnimJoint1910 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1910)
HAnimJoint1911 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1911)
HAnimJoint1912 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1912)
HAnimJoint1913 = x3d.HAnimJoint(USE="hanim_r_hip")

HAnimHumanoid36.joints.append(HAnimJoint1913)
HAnimJoint1914 = x3d.HAnimJoint(USE="hanim_r_knee")

HAnimHumanoid36.joints.append(HAnimJoint1914)
HAnimJoint1915 = x3d.HAnimJoint(USE="hanim_r_talocrural")

HAnimHumanoid36.joints.append(HAnimJoint1915)
HAnimJoint1916 = x3d.HAnimJoint(USE="hanim_r_talocalcaneonavicular")

HAnimHumanoid36.joints.append(HAnimJoint1916)
HAnimJoint1917 = x3d.HAnimJoint(USE="hanim_r_cuneonavicular_1")

HAnimHumanoid36.joints.append(HAnimJoint1917)
HAnimJoint1918 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_1")

HAnimHumanoid36.joints.append(HAnimJoint1918)
HAnimJoint1919 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_1")

HAnimHumanoid36.joints.append(HAnimJoint1919)
HAnimJoint1920 = x3d.HAnimJoint(USE="hanim_r_tarsal_interphalangeal_1")

HAnimHumanoid36.joints.append(HAnimJoint1920)
HAnimJoint1921 = x3d.HAnimJoint(USE="hanim_r_cuneonavicular_2")

HAnimHumanoid36.joints.append(HAnimJoint1921)
HAnimJoint1922 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_2")

HAnimHumanoid36.joints.append(HAnimJoint1922)
HAnimJoint1923 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1923)
HAnimJoint1924 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1924)
HAnimJoint1925 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1925)
HAnimJoint1926 = x3d.HAnimJoint(USE="hanim_r_cuneonavicular_3")

HAnimHumanoid36.joints.append(HAnimJoint1926)
HAnimJoint1927 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_3")

HAnimHumanoid36.joints.append(HAnimJoint1927)
HAnimJoint1928 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1928)
HAnimJoint1929 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1929)
HAnimJoint1930 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1930)
HAnimJoint1931 = x3d.HAnimJoint(USE="hanim_r_calcaneocuboid")

HAnimHumanoid36.joints.append(HAnimJoint1931)
HAnimJoint1932 = x3d.HAnimJoint(USE="hanim_r_transversetarsal")

HAnimHumanoid36.joints.append(HAnimJoint1932)
HAnimJoint1933 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_4")

HAnimHumanoid36.joints.append(HAnimJoint1933)
HAnimJoint1934 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1934)
HAnimJoint1935 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1935)
HAnimJoint1936 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1936)
HAnimJoint1937 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_5")

HAnimHumanoid36.joints.append(HAnimJoint1937)
HAnimJoint1938 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1938)
HAnimJoint1939 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1939)
HAnimJoint1940 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1940)
HAnimJoint1941 = x3d.HAnimJoint(USE="hanim_vl5")

HAnimHumanoid36.joints.append(HAnimJoint1941)
HAnimJoint1942 = x3d.HAnimJoint(USE="hanim_vl4")

HAnimHumanoid36.joints.append(HAnimJoint1942)
HAnimJoint1943 = x3d.HAnimJoint(USE="hanim_vl3")

HAnimHumanoid36.joints.append(HAnimJoint1943)
HAnimJoint1944 = x3d.HAnimJoint(USE="hanim_vl2")

HAnimHumanoid36.joints.append(HAnimJoint1944)
HAnimJoint1945 = x3d.HAnimJoint(USE="hanim_vl1")

HAnimHumanoid36.joints.append(HAnimJoint1945)
HAnimJoint1946 = x3d.HAnimJoint(USE="hanim_vt12")

HAnimHumanoid36.joints.append(HAnimJoint1946)
HAnimJoint1947 = x3d.HAnimJoint(USE="hanim_vt11")

HAnimHumanoid36.joints.append(HAnimJoint1947)
HAnimJoint1948 = x3d.HAnimJoint(USE="hanim_vt10")

HAnimHumanoid36.joints.append(HAnimJoint1948)
HAnimJoint1949 = x3d.HAnimJoint(USE="hanim_vt9")

HAnimHumanoid36.joints.append(HAnimJoint1949)
HAnimJoint1950 = x3d.HAnimJoint(USE="hanim_vt8")

HAnimHumanoid36.joints.append(HAnimJoint1950)
HAnimJoint1951 = x3d.HAnimJoint(USE="hanim_vt7")

HAnimHumanoid36.joints.append(HAnimJoint1951)
HAnimJoint1952 = x3d.HAnimJoint(USE="hanim_vt6")

HAnimHumanoid36.joints.append(HAnimJoint1952)
HAnimJoint1953 = x3d.HAnimJoint(USE="hanim_vt5")

HAnimHumanoid36.joints.append(HAnimJoint1953)
HAnimJoint1954 = x3d.HAnimJoint(USE="hanim_vt4")

HAnimHumanoid36.joints.append(HAnimJoint1954)
HAnimJoint1955 = x3d.HAnimJoint(USE="hanim_vt3")

HAnimHumanoid36.joints.append(HAnimJoint1955)
HAnimJoint1956 = x3d.HAnimJoint(USE="hanim_vt2")

HAnimHumanoid36.joints.append(HAnimJoint1956)
HAnimJoint1957 = x3d.HAnimJoint(USE="hanim_vt1")

HAnimHumanoid36.joints.append(HAnimJoint1957)
HAnimJoint1958 = x3d.HAnimJoint(USE="hanim_vc7")

HAnimHumanoid36.joints.append(HAnimJoint1958)
HAnimJoint1959 = x3d.HAnimJoint(USE="hanim_vc6")

HAnimHumanoid36.joints.append(HAnimJoint1959)
HAnimJoint1960 = x3d.HAnimJoint(USE="hanim_vc5")

HAnimHumanoid36.joints.append(HAnimJoint1960)
HAnimJoint1961 = x3d.HAnimJoint(USE="hanim_vc4")

HAnimHumanoid36.joints.append(HAnimJoint1961)
HAnimJoint1962 = x3d.HAnimJoint(USE="hanim_vc3")

HAnimHumanoid36.joints.append(HAnimJoint1962)
HAnimJoint1963 = x3d.HAnimJoint(USE="hanim_vc2")

HAnimHumanoid36.joints.append(HAnimJoint1963)
HAnimJoint1964 = x3d.HAnimJoint(USE="hanim_vc1")

HAnimHumanoid36.joints.append(HAnimJoint1964)
HAnimJoint1965 = x3d.HAnimJoint(USE="hanim_skullbase")

HAnimHumanoid36.joints.append(HAnimJoint1965)
HAnimJoint1966 = x3d.HAnimJoint(USE="hanim_l_eyelid_joint")

HAnimHumanoid36.joints.append(HAnimJoint1966)
HAnimJoint1967 = x3d.HAnimJoint(USE="hanim_r_eyelid_joint")

HAnimHumanoid36.joints.append(HAnimJoint1967)
HAnimJoint1968 = x3d.HAnimJoint(USE="hanim_l_eyeball_joint")

HAnimHumanoid36.joints.append(HAnimJoint1968)
HAnimJoint1969 = x3d.HAnimJoint(USE="hanim_r_eyeball_joint")

HAnimHumanoid36.joints.append(HAnimJoint1969)
HAnimJoint1970 = x3d.HAnimJoint(USE="hanim_l_eyebrow_joint")

HAnimHumanoid36.joints.append(HAnimJoint1970)
HAnimJoint1971 = x3d.HAnimJoint(USE="hanim_r_eyebrow_joint")

HAnimHumanoid36.joints.append(HAnimJoint1971)
HAnimJoint1972 = x3d.HAnimJoint(USE="hanim_temporomandibular")

HAnimHumanoid36.joints.append(HAnimJoint1972)
HAnimJoint1973 = x3d.HAnimJoint(USE="hanim_l_sternoclavicular")

HAnimHumanoid36.joints.append(HAnimJoint1973)
HAnimJoint1974 = x3d.HAnimJoint(USE="hanim_l_acromioclavicular")

HAnimHumanoid36.joints.append(HAnimJoint1974)
HAnimJoint1975 = x3d.HAnimJoint(USE="hanim_l_shoulder")

HAnimHumanoid36.joints.append(HAnimJoint1975)
HAnimJoint1976 = x3d.HAnimJoint(USE="hanim_l_elbow")

HAnimHumanoid36.joints.append(HAnimJoint1976)
HAnimJoint1977 = x3d.HAnimJoint(USE="hanim_l_radiocarpal")

HAnimHumanoid36.joints.append(HAnimJoint1977)
HAnimJoint1978 = x3d.HAnimJoint(USE="hanim_l_midcarpal_1")

HAnimHumanoid36.joints.append(HAnimJoint1978)
HAnimJoint1979 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_1")

HAnimHumanoid36.joints.append(HAnimJoint1979)
HAnimJoint1980 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_1")

HAnimHumanoid36.joints.append(HAnimJoint1980)
HAnimJoint1981 = x3d.HAnimJoint(USE="hanim_l_carpal_interphalangeal_1")

HAnimHumanoid36.joints.append(HAnimJoint1981)
HAnimJoint1982 = x3d.HAnimJoint(USE="hanim_l_midcarpal_2")

HAnimHumanoid36.joints.append(HAnimJoint1982)
HAnimJoint1983 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_2")

HAnimHumanoid36.joints.append(HAnimJoint1983)
HAnimJoint1984 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1984)
HAnimJoint1985 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1985)
HAnimJoint1986 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1986)
HAnimJoint1987 = x3d.HAnimJoint(USE="hanim_l_midcarpal_3")

HAnimHumanoid36.joints.append(HAnimJoint1987)
HAnimJoint1988 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_3")

HAnimHumanoid36.joints.append(HAnimJoint1988)
HAnimJoint1989 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1989)
HAnimJoint1990 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1990)
HAnimJoint1991 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1991)
HAnimJoint1992 = x3d.HAnimJoint(USE="hanim_l_midcarpal_4_5")

HAnimHumanoid36.joints.append(HAnimJoint1992)
HAnimJoint1993 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_4")

HAnimHumanoid36.joints.append(HAnimJoint1993)
HAnimJoint1994 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1994)
HAnimJoint1995 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1995)
HAnimJoint1996 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1996)
HAnimJoint1997 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_5")

HAnimHumanoid36.joints.append(HAnimJoint1997)
HAnimJoint1998 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1998)
HAnimJoint1999 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1999)
HAnimJoint2000 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint2000)
HAnimJoint2001 = x3d.HAnimJoint(USE="hanim_r_sternoclavicular")

HAnimHumanoid36.joints.append(HAnimJoint2001)
HAnimJoint2002 = x3d.HAnimJoint(USE="hanim_r_acromioclavicular")

HAnimHumanoid36.joints.append(HAnimJoint2002)
HAnimJoint2003 = x3d.HAnimJoint(USE="hanim_r_shoulder")

HAnimHumanoid36.joints.append(HAnimJoint2003)
HAnimJoint2004 = x3d.HAnimJoint(USE="hanim_r_elbow")

HAnimHumanoid36.joints.append(HAnimJoint2004)
HAnimJoint2005 = x3d.HAnimJoint(USE="hanim_r_radiocarpal")

HAnimHumanoid36.joints.append(HAnimJoint2005)
HAnimJoint2006 = x3d.HAnimJoint(USE="hanim_r_midcarpal_1")

HAnimHumanoid36.joints.append(HAnimJoint2006)
HAnimJoint2007 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_1")

HAnimHumanoid36.joints.append(HAnimJoint2007)
HAnimJoint2008 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_1")

HAnimHumanoid36.joints.append(HAnimJoint2008)
HAnimJoint2009 = x3d.HAnimJoint(USE="hanim_r_carpal_interphalangeal_1")

HAnimHumanoid36.joints.append(HAnimJoint2009)
HAnimJoint2010 = x3d.HAnimJoint(USE="hanim_r_midcarpal_2")

HAnimHumanoid36.joints.append(HAnimJoint2010)
HAnimJoint2011 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_2")

HAnimHumanoid36.joints.append(HAnimJoint2011)
HAnimJoint2012 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint2012)
HAnimJoint2013 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint2013)
HAnimJoint2014 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint2014)
HAnimJoint2015 = x3d.HAnimJoint(USE="hanim_r_midcarpal_3")

HAnimHumanoid36.joints.append(HAnimJoint2015)
HAnimJoint2016 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_3")

HAnimHumanoid36.joints.append(HAnimJoint2016)
HAnimJoint2017 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint2017)
HAnimJoint2018 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint2018)
HAnimJoint2019 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint2019)
HAnimJoint2020 = x3d.HAnimJoint(USE="hanim_r_midcarpal_4_5")

HAnimHumanoid36.joints.append(HAnimJoint2020)
HAnimJoint2021 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_4")

HAnimHumanoid36.joints.append(HAnimJoint2021)
HAnimJoint2022 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint2022)
HAnimJoint2023 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint2023)
HAnimJoint2024 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint2024)
HAnimJoint2025 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_5")

HAnimHumanoid36.joints.append(HAnimJoint2025)
HAnimJoint2026 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint2026)
HAnimJoint2027 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint2027)
HAnimJoint2028 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint2028)
Coordinate2029 = x3d.Coordinate(DEF="TheSkinCoord")
Coordinate2029.point = [(0, 1.77, 0),(0, 1.665, 0.09),(-0.033, 1.62, 0.087),(0.033, 1.62, 0.087),(0, 1.55, 0.097),(-0.077, 1.64, -0.01),(-0.0527, 1.58, 0.015),(0.077, 1.64, -0.01),(0.0527, 1.58, 0.015),(0, 1.625, -0.0925),(-0.03, 1.46, 0.035),(0, 1.44, 0.03),(0.03, 1.46, 0.035),(-0.1135, 1.318, 0.095),(0.1135, 1.318, 0.095),(0, 1.25, 0.113),(-0.087, 1.19, 0.09),(-0.0935, 1.03, 0.075),(0.087, 1.19, 0.09),(0.0935, 1.03, 0.075),(-0.1425, 1.065, 0.0033),(-0.15, 0.9, -0.01),(0.1425, 1.065, 0.0033),(0.15, 0.9, -0.01),(0, 1.53, -0.084),(0.0049, 1.1908, -0.1113),(-0.0773, 1.019, -0.12),(0.0773, 1.019, -0.12),(0.005, 1.0915, -0.1091),(-0.178, 1.4825, -0.0625),(-0.17, 1.38, 0.007),(-0.1884, 0.8676, -0.036),(-0.16, 1.38, -0.127),(-0.2, 1.1388, -0.08),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.23, 1.133, -0.055),(-0.1977, 0.8169, -0.0177),(-0.1941, 0.6772, -0.0423),(-0.2117, 0.8562, -0.0584),(-0.1929, 0.789, -0.1064),(0.175, 1.4825, -0.06),(0.17, 1.38, 0.007),(0.1901, 0.8645, -0.0415),(0.16, 1.38, -0.125),(0.2, 1.1388, -0.08),(0.165, 1.1388, -0.04),(0.244, 1.1388, -0.04),(0.23, 1.133, -0.055),(0.2009, 0.8139, -0.0237),(0.2056, 0.6743, -0.0482),(0.2142, 0.8529, -0.0648),(0.1929, 0.786, -0.1122),(-0.1, 0.4913, -0.03),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.165, 0.01, 0.12),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.09, 0.056, 0.0125),(-0.115, 0.02, 0.122),(-0.115, 0.04, -0.055),(-0.11, 0.011, 0.19),(0.0993, 0.4881, -0.0309),(0.17, 0.466, 0),(0.05, 0.4867, 0),(0.165, 0.01, 0.12),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.09, 0.056, 0.0125),(0.115, 0.02, 0.122),(0.115, 0.04, -0.055),(0.11, 0.011, 0.19),(0, 0.875, 0),(-0.0646, 1.5149, -0.038),(0.0646, 1.5149, -0.038),(0, 1.07225, 0.09),(-0.11, 1.427, -0.1375),(-0.235, 1.42, -0.0625),(0.11, 1.427, -0.1375),(0.235, 1.42, -0.0625),(0, 1.41, -0.145),(0, 0.925, 0.08),(-0.087, 1.19, -0.09),(0.087, 1.19, -0.09),(0.172, 1.32, -0.03),(-0.172, 1.32, -0.03),(0.15, 1.23, -0.015),(-0.15, 1.23, -0.015),(0.079, 0.92, -0.14),(0.1, 0.9, 0.077),(-0.079, 0.92, -0.14),(-0.1, 0.9, 0.075),(0, 0.87, 0),(0.171, 0.65, 0),(0.02, 0.65, 0),(0.1, 0.65, -0.08),(0.1, 0.65, 0.07),(-0.171, 0.65, 0),(-0.02, 0.65, 0),(-0.1, 0.65, -0.08),(-0.1, 0.65, 0.07),(0.25, 1.27, -0.04),(0.17, 1.27, -0.04),(0.2, 1.27, -0.09),(0.2, 1.27, 0.02),(0.244, 1.1388, -0.04),(0.165, 1.1388, -0.04),(0.2, 1.1388, -0.08),(0.2, 1.1388, -0.013),(0.225, 1, -0.01),(0.225, 1, -0.07),(0.185, 1, -0.01),(0.185, 1, -0.07),(0.2, 1.1388, -0.04),(0.225, 0.92, -0.04),(0.175, 0.92, -0.04),(0.2, 0.92, -0.065),(0.2, 0.92, -0.015),(0.225, 0.89, -0.04),(0.175, 0.89, -0.04),(0.2, 0.89, -0.065),(0.2, 0.89, -0.015),(0.218, 0.86, -0.04),(0.184, 0.86, -0.04),(0.2, 0.87, -0.07),(0.2, 0.87, 0),(0.21, 0.85, 0),(0.1854, 0.85, 0),(0.212, 0.84, -0.015),(0.183, 0.84, -0.015),(0.213, 0.835, -0.04),(0.19, 0.835, -0.04),(0.211, 0.835, -0.065),(0.192, 0.835, -0.065),(0.208, 0.84, -0.085),(0.19, 0.84, -0.085),(0.2, 0.84, -0.095),(0.215, 0.82, 0),(0.193, 0.815, 0.005),(0.198, 0.8, 0.012),(0.21, 0.82, 0.03),(0.19, 0.82, 0.03),(0.2, 0.835, 0.039),(0.212, 0.8, 0.05),(0.188, 0.8, 0.05),(0.2, 0.807, 0.057),(0.2, 0.793, 0.035),(0.2, 0.774, 0.076),(0.212, 0.78, 0.07),(0.188, 0.78, 0.07),(0.2, 0.785, 0.075),(0.2, 0.77, 0.062),(0.215, 0.793, -0.015),(0.187, 0.793, -0.015),(0.2, 0.793, -0.005),(0.215, 0.788, -0.04),(0.187, 0.788, -0.04),(0.215, 0.793, -0.065),(0.187, 0.793, -0.065),(0.21, 0.79, -0.085),(0.19, 0.79, -0.085),(0.2, 0.79, -0.095),(0.19, 0.77, -0.0275),(0.19, 0.77, -0.0525),(0.19, 0.78, -0.0775),(0.212, 0.745, -0.015),(0.188, 0.745, -0.02),(0.2, 0.745, -0.0255),(0.2, 0.745, -0.0045),(0.211, 0.72, -0.015),(0.189, 0.72, -0.015),(0.2, 0.72, -0.0252),(0.2, 0.72, -0.0048),(0.21, 0.695, -0.015),(0.19, 0.695, -0.015),(0.2, 0.695, -0.025),(0.2, 0.695, -0.005),(0.2, 0.685, -0.015),(0.215, 0.74, -0.04),(0.185, 0.74, -0.04),(0.2, 0.74, -0.055),(0.2, 0.74, -0.025),(0.21, 0.7142, -0.04),(0.19, 0.7142, -0.04),(0.2, 0.7142, -0.053),(0.2, 0.7142, -0.027),(0.21, 0.68, -0.04),(0.19, 0.68, -0.04),(0.2, 0.68, -0.05),(0.2, 0.68, -0.03),(0.2, 0.67, -0.04),(0.212, 0.74, -0.065),(0.188, 0.74, -0.065),(0.2, 0.74, -0.0756),(0.2, 0.74, -0.0542),(0.21, 0.7177, -0.065),(0.19, 0.7177, -0.065),(0.2, 0.7177, -0.0751),(0.2, 0.7177, -0.0549),(0.21, 0.695, -0.065),(0.19, 0.695, -0.065),(0.2, 0.695, -0.075),(0.2, 0.695, -0.055),(0.2, 0.685, -0.065),(0.211, 0.755, -0.085),(0.189, 0.755, -0.085),(0.2, 0.755, -0.0952),(0.2, 0.755, -0.0748),(0.21, 0.735, -0.085),(0.19, 0.735, -0.085),(0.2, 0.735, -0.0951),(0.2, 0.735, -0.0749),(0.21, 0.72, -0.085),(0.19, 0.72, -0.085),(0.2, 0.72, -0.095),(0.2, 0.72, -0.075),(0.2, 0.71, -0.085),(-0.23, 1.23, -0.04),(-0.16, 1.23, -0.04),(-0.2, 1.235, -0.105),(-0.2, 1.235, 0.02),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.2, 1.1388, -0.08),(-0.2, 1.1388, 0.013),(-0.225, 1, -0.01),(-0.225, 1, -0.07),(-0.185, 1, -0.01),(-0.185, 1, -0.07),(-0.2, 1.1388, -0.04),(-0.225, 0.92, -0.04),(-0.175, 0.92, -0.04),(-0.2, 0.92, -0.065),(-0.2, 0.92, -0.015),(-0.225, 0.89, -0.04),(-0.175, 0.89, -0.04),(-0.2, 0.89, -0.065),(-0.2, 0.89, -0.015),(-0.218, 0.86, -0.04),(-0.184, 0.86, -0.04),(-0.2, 0.87, -0.07),(-0.2, 0.87, 0),(-0.21, 0.85, 0),(-0.1854, 0.85, 0),(-0.212, 0.84, -0.015),(-0.183, 0.84, -0.015),(-0.213, 0.835, -0.04),(-0.19, 0.835, -0.04),(-0.211, 0.835, -0.065),(-0.192, 0.835, -0.065),(-0.208, 0.84, -0.085),(-0.19, 0.84, -0.085),(-0.2, 0.84, -0.095),(-0.215, 0.82, 0),(-0.193, 0.815, 0.005),(-0.198, 0.8, 0.012),(-0.21, 0.82, 0.03),(-0.19, 0.82, 0.03),(-0.2, 0.835, 0.039),(-0.212, 0.8, 0.05),(-0.188, 0.8, 0.05),(-0.2, 0.807, 0.057),(-0.2, 0.793, 0.035),(-0.2, 0.774, 0.076),(-0.212, 0.78, 0.07),(-0.188, 0.78, 0.07),(-0.2, 0.785, 0.075),(-0.2, 0.77, 0.062),(-0.215, 0.793, -0.015),(-0.187, 0.793, -0.015),(-0.2, 0.793, -0.005),(-0.215, 0.788, -0.04),(-0.187, 0.788, -0.04),(-0.215, 0.793, -0.065),(-0.187, 0.793, -0.065),(-0.21, 0.79, -0.085),(-0.19, 0.79, -0.085),(-0.2, 0.79, -0.095),(-0.19, 0.77, -0.0275),(-0.19, 0.77, -0.0525),(-0.19, 0.78, -0.0775),(-0.212, 0.745, -0.015),(-0.188, 0.745, -0.02),(-0.2, 0.745, -0.0255),(-0.2, 0.745, -0.0045),(-0.211, 0.72, -0.015),(-0.189, 0.72, -0.015),(-0.2, 0.72, -0.0252),(-0.2, 0.72, -0.0048),(-0.21, 0.695, -0.015),(-0.19, 0.695, -0.015),(-0.2, 0.695, -0.025),(-0.2, 0.695, -0.005),(-0.2, 0.685, -0.015),(-0.215, 0.74, -0.04),(-0.185, 0.74, -0.04),(-0.2, 0.74, -0.055),(-0.2, 0.74, -0.025),(-0.21, 0.7142, -0.04),(-0.19, 0.7142, -0.04),(-0.2, 0.7142, -0.053),(-0.2, 0.7142, -0.027),(-0.21, 0.68, -0.04),(-0.19, 0.68, -0.04),(-0.2, 0.68, -0.05),(-0.2, 0.68, -0.03),(-0.2, 0.67, -0.04),(-0.212, 0.74, -0.065),(-0.188, 0.74, -0.065),(-0.2, 0.74, -0.0756),(-0.2, 0.74, -0.0542),(-0.21, 0.7177, -0.065),(-0.19, 0.7177, -0.065),(-0.2, 0.7177, -0.0751),(-0.2, 0.7177, -0.0549),(-0.21, 0.695, -0.065),(-0.19, 0.695, -0.065),(-0.2, 0.695, -0.075),(-0.2, 0.695, -0.055),(-0.2, 0.685, -0.065),(-0.211, 0.755, -0.085),(-0.189, 0.755, -0.085),(-0.2, 0.755, -0.0952),(-0.2, 0.755, -0.0748),(-0.21, 0.735, -0.085),(-0.19, 0.735, -0.085),(-0.2, 0.735, -0.0951),(-0.2, 0.735, -0.0749),(-0.21, 0.72, -0.085),(-0.19, 0.72, -0.085),(-0.2, 0.72, -0.095),(-0.2, 0.72, -0.075),(-0.2, 0.71, -0.085),(0.115, 0.466, 0.06),(0.115, 0.466, -0.055),(0.15, 0.466, 0),(0.05, 0.466, 0),(0.17, 0.3, 0),(0.06, 0.3, 0),(0.1, 0.3, -0.05),(0.1, 0.3, 0.05),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.115, 0.069, -0.045),(0.117, 0.0975, 0.0615),(0.1375, 0.006, -0.03),(0.095, 0.006, -0.03),(0.115, 0.015, -0.045),(0.115, 0.06, 0.1),(0.115, 0, 0.07),(0.165, 0, 0.07),(0.095, 0, 0.07),(0.115, 0.04, 0.13),(0.125, 0, 0.12),(0.165, 0, 0.12),(0.087, 0, 0.122),(0.09, 0.012, 0.188),(0.11, 0.011, 0.19),(0.128, 0.011, 0.185),(0.142, 0.011, 0.178),(0.154, 0.01, 0.168),(-0.115, 0.466, 0.06),(-0.115, 0.466, -0.055),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.17, 0.3, 0),(-0.06, 0.3, 0),(-0.1, 0.3, -0.05),(-0.1, 0.3, 0.05),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.115, 0.069, -0.045),(-0.117, 0.0975, 0.0615),(-0.1375, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.115, 0.06, 0.1),(-0.115, 0, 0.07),(-0.165, 0, 0.07),(-0.095, 0, 0.07),(-0.115, 0.04, 0.13),(-0.125, 0, 0.12),(-0.165, 0, 0.12),(-0.087, 0, 0.122),(-0.09, 0.012, 0.188),(-0.11, 0.011, 0.19),(-0.128, 0.011, 0.185),(-0.142, 0.011, 0.178),(-0.154, 0.01, 0.168)]

HAnimHumanoid36.skinCoord = Coordinate2029
Shape2030 = x3d.Shape(DEF="SkinShape")
Appearance2031 = x3d.Appearance(DEF="SkinAppearance")
Material2032 = x3d.Material(DEF="SkinMaterial")
Material2032.ambientIntensity = 0.6
Material2032.diffuseColor = [1,1,1]
Material2032.shininess = 0.6
Material2032.transparency = 1

Appearance2031.material = Material2032
ImageTexture2033 = x3d.ImageTexture(DEF="zBlueSpiralBkg2")
ImageTexture2033.description = "Blue Spiral Pattern"
ImageTexture2033.url = ["../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]

Appearance2031.texture = ImageTexture2033

Shape2030.appearance = Appearance2031
IndexedFaceSet2034 = x3d.IndexedFaceSet()
IndexedFaceSet2034.creaseAngle = 3.1
IndexedFaceSet2034.coordIndex = [0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]
Color2035 = x3d.Color()
Color2035.color = [(1, 0, 0),(0, 1, 1),(0, 1, 0),(1, 1, 0),(1, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(0, 1, 1),(1, 1, 0),(1, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(1, 0, 0),(1, 0, 0),(1, 1, 0),(1, 1, 0),(1, 1, 1),(1, 0, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(1, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 1)]

IndexedFaceSet2034.color = Color2035
Coordinate2036 = x3d.Coordinate(USE="TheSkinCoord")

IndexedFaceSet2034.coord = Coordinate2036

Shape2030.geometry = IndexedFaceSet2034

HAnimHumanoid36.skin.append(Shape2030)

Scene9.children.append(HAnimHumanoid36)

X3D0.Scene = Scene9
f = open("../data/DonHumanoid.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/DonHumanoid.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/DonHumanoid.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
