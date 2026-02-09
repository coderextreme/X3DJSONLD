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
meta3.content = "Humanoid2.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "identifier"
meta4.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid2.x3d"

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
meta8.content = "Mon, 09 Feb 2026 07:11:18 GMT"

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
Coordinate208.point = [(0.1101, 0.0656, -0.0736),(0.08, 0.0175, -0.0608)]

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

HAnimJoint200.children.append(HAnimSegment201)
HAnimJoint223 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_2")
HAnimJoint223.name = "l_tarsometatarsal_2"
HAnimJoint223.center = [0.08,0.0175,-0.0608]
HAnimSegment224 = x3d.HAnimSegment(DEF="hanim_l_metatarsal_2")
HAnimSegment224.name = "l_metatarsal_2"
Transform225 = x3d.Transform()
Transform225.translation = [0.08,0.0175,-0.0608]
Transform226 = x3d.Transform()
Shape227 = x3d.Shape(USE="HAnimJointShape")

Transform226.children.append(Shape227)

Transform225.children.append(Transform226)

HAnimSegment224.children.append(Transform225)
Shape228 = x3d.Shape()
LineSet229 = x3d.LineSet()
LineSet229.vertexCount = [2]
ColorRGBA230 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet229.color = ColorRGBA230
Coordinate231 = x3d.Coordinate()
Coordinate231.point = [(0.08, 0.0175, -0.0608),(0.0824, 0.0064, -0.004)]

LineSet229.coord = Coordinate231

Shape228.geometry = LineSet229

HAnimSegment224.children.append(Shape228)

HAnimJoint223.children.append(HAnimSegment224)
HAnimJoint232 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_2")
HAnimJoint232.name = "l_metatarsophalangeal_2"
HAnimJoint232.center = [0.0824,0.0064,-0.004]
HAnimSegment233 = x3d.HAnimSegment(DEF="hanim_l_tarsal_proximal_phalanx_2")
HAnimSegment233.name = "l_tarsal_proximal_phalanx_2"
Transform234 = x3d.Transform()
Transform234.translation = [0.0824,0.0064,-0.004]
Transform235 = x3d.Transform()
Shape236 = x3d.Shape(USE="HAnimJointShape")

Transform235.children.append(Shape236)

Transform234.children.append(Transform235)

HAnimSegment233.children.append(Transform234)
Shape237 = x3d.Shape()
LineSet238 = x3d.LineSet()
LineSet238.vertexCount = [2]
ColorRGBA239 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet238.color = ColorRGBA239
Coordinate240 = x3d.Coordinate()
Coordinate240.point = [(0.0824, 0.0064, -0.004),(0.0841, 0.0013, 0.0216)]

LineSet238.coord = Coordinate240

Shape237.geometry = LineSet238

HAnimSegment233.children.append(Shape237)
HAnimSite241 = x3d.HAnimSite(DEF="hanim_l_metatarsal_phalanx_1")
HAnimSite241.name = "l_metatarsal_phalanx_1"
TouchSensor242 = x3d.TouchSensor()
TouchSensor242.description = "HAnimSite 55 l_metatarsal_phalanx_1"

HAnimSite241.children.append(TouchSensor242)
Shape243 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite241.children.append(Shape243)
Billboard244 = x3d.Billboard()
Shape245 = x3d.Shape()
Text246 = x3d.Text()
Text246.string = ["55"]
FontStyle247 = x3d.FontStyle()
FontStyle247.size = 0.035

Text246.fontStyle = FontStyle247

Shape245.geometry = Text246

Billboard244.children.append(Shape245)

HAnimSite241.children.append(Billboard244)

HAnimSegment233.children.append(HAnimSite241)
HAnimSite248 = x3d.HAnimSite(DEF="hanim_l_metatarsal_phalanx_5")
HAnimSite248.name = "l_metatarsal_phalanx_5"
TouchSensor249 = x3d.TouchSensor()
TouchSensor249.description = "HAnimSite 56 l_metatarsal_phalanx_5"

HAnimSite248.children.append(TouchSensor249)
Shape250 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite248.children.append(Shape250)
Billboard251 = x3d.Billboard()
Shape252 = x3d.Shape()
Text253 = x3d.Text()
Text253.string = ["56"]
FontStyle254 = x3d.FontStyle()
FontStyle254.size = 0.035

Text253.fontStyle = FontStyle254

Shape252.geometry = Text253

Billboard251.children.append(Shape252)

HAnimSite248.children.append(Billboard251)

HAnimSegment233.children.append(HAnimSite248)
HAnimSite255 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_1_tip")
HAnimSite255.name = "l_tarsal_distal_phalanx_1_tip"
TouchSensor256 = x3d.TouchSensor()
TouchSensor256.description = "HAnimSite  l_tarsal_distal_phalanx_1_tip"

HAnimSite255.children.append(TouchSensor256)
Shape257 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite255.children.append(Shape257)
Billboard258 = x3d.Billboard()
Shape259 = x3d.Shape()
Text260 = x3d.Text()
Text260.string = [""]
FontStyle261 = x3d.FontStyle()
FontStyle261.size = 0.035

Text260.fontStyle = FontStyle261

Shape259.geometry = Text260

Billboard258.children.append(Shape259)

HAnimSite255.children.append(Billboard258)

HAnimSegment233.children.append(HAnimSite255)
HAnimSite262 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_2_tip")
HAnimSite262.name = "l_tarsal_distal_phalanx_2_tip"
HAnimSite262.translation = [0.1195,0.0079,0.1433]
TouchSensor263 = x3d.TouchSensor()
TouchSensor263.description = "HAnimSite  l_tarsal_distal_phalanx_2_tip"

HAnimSite262.children.append(TouchSensor263)
Shape264 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite262.children.append(Shape264)
Billboard265 = x3d.Billboard()
Shape266 = x3d.Shape()
Text267 = x3d.Text()
Text267.string = [""]
FontStyle268 = x3d.FontStyle()
FontStyle268.size = 0.035

Text267.fontStyle = FontStyle268

Shape266.geometry = Text267

Billboard265.children.append(Shape266)

HAnimSite262.children.append(Billboard265)

HAnimSegment233.children.append(HAnimSite262)
HAnimSite269 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_3_tip")
HAnimSite269.name = "l_tarsal_distal_phalanx_3_tip"
TouchSensor270 = x3d.TouchSensor()
TouchSensor270.description = "HAnimSite  l_tarsal_distal_phalanx_3_tip"

HAnimSite269.children.append(TouchSensor270)
Shape271 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite269.children.append(Shape271)
Billboard272 = x3d.Billboard()
Shape273 = x3d.Shape()
Text274 = x3d.Text()
Text274.string = [""]
FontStyle275 = x3d.FontStyle()
FontStyle275.size = 0.035

Text274.fontStyle = FontStyle275

Shape273.geometry = Text274

Billboard272.children.append(Shape273)

HAnimSite269.children.append(Billboard272)

HAnimSegment233.children.append(HAnimSite269)
HAnimSite276 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_4_tip")
HAnimSite276.name = "l_tarsal_distal_phalanx_4_tip"
TouchSensor277 = x3d.TouchSensor()
TouchSensor277.description = "HAnimSite  l_tarsal_distal_phalanx_4_tip"

HAnimSite276.children.append(TouchSensor277)
Shape278 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite276.children.append(Shape278)
Billboard279 = x3d.Billboard()
Shape280 = x3d.Shape()
Text281 = x3d.Text()
Text281.string = [""]
FontStyle282 = x3d.FontStyle()
FontStyle282.size = 0.035

Text281.fontStyle = FontStyle282

Shape280.geometry = Text281

Billboard279.children.append(Shape280)

HAnimSite276.children.append(Billboard279)

HAnimSegment233.children.append(HAnimSite276)
HAnimSite283 = x3d.HAnimSite(DEF="hanim_l_tarsal_distal_phalanx_5_tip")
HAnimSite283.name = "l_tarsal_distal_phalanx_5_tip"
TouchSensor284 = x3d.TouchSensor()
TouchSensor284.description = "HAnimSite  l_tarsal_distal_phalanx_5_tip"

HAnimSite283.children.append(TouchSensor284)
Shape285 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite283.children.append(Shape285)
Billboard286 = x3d.Billboard()
Shape287 = x3d.Shape()
Text288 = x3d.Text()
Text288.string = [""]
FontStyle289 = x3d.FontStyle()
FontStyle289.size = 0.035

Text288.fontStyle = FontStyle289

Shape287.geometry = Text288

Billboard286.children.append(Shape287)

HAnimSite283.children.append(Billboard286)

HAnimSegment233.children.append(HAnimSite283)

HAnimJoint232.children.append(HAnimSegment233)
HAnimJoint290 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint290.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint290.center = [0.0841,0.0013,0.0216]

HAnimJoint232.children.append(HAnimJoint290)

HAnimJoint223.children.append(HAnimJoint232)

HAnimJoint200.children.append(HAnimJoint223)

HAnimJoint170.children.append(HAnimJoint200)

HAnimJoint133.children.append(HAnimJoint170)

HAnimJoint50.children.append(HAnimJoint133)
HAnimJoint291 = x3d.HAnimJoint(DEF="hanim_r_hip")
HAnimJoint291.name = "r_hip"
HAnimJoint291.center = [-0.095,0.9171,0.0029]
HAnimSegment292 = x3d.HAnimSegment(DEF="hanim_r_thigh")
HAnimSegment292.name = "r_thigh"
Transform293 = x3d.Transform()
Transform293.translation = [-0.095,0.9171,0.0029]
Transform294 = x3d.Transform()
Shape295 = x3d.Shape(USE="HAnimJointShape")

Transform294.children.append(Shape295)

Transform293.children.append(Transform294)

HAnimSegment292.children.append(Transform293)
Shape296 = x3d.Shape()
LineSet297 = x3d.LineSet()
LineSet297.vertexCount = [2]
ColorRGBA298 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet297.color = ColorRGBA298
Coordinate299 = x3d.Coordinate()
Coordinate299.point = [(-0.095, 0.9171, 0.0029),(-0.0867, 0.4913, 0.0318)]

LineSet297.coord = Coordinate299

Shape296.geometry = LineSet297

HAnimSegment292.children.append(Shape296)
HAnimSite300 = x3d.HAnimSite(DEF="hanim_r_femoral_lateral_epicondyles")
HAnimSite300.name = "r_femoral_lateral_epicondyles"
HAnimSite300.translation = [-0.1421,0.4992,0.031]
TouchSensor301 = x3d.TouchSensor()
TouchSensor301.description = "HAnimSite 44 r_femoral_lateral_epicondyles"

HAnimSite300.children.append(TouchSensor301)
Shape302 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite300.children.append(Shape302)
Billboard303 = x3d.Billboard()
Shape304 = x3d.Shape()
Text305 = x3d.Text()
Text305.string = ["44"]
FontStyle306 = x3d.FontStyle()
FontStyle306.size = 0.035

Text305.fontStyle = FontStyle306

Shape304.geometry = Text305

Billboard303.children.append(Shape304)

HAnimSite300.children.append(Billboard303)

HAnimSegment292.children.append(HAnimSite300)
HAnimSite307 = x3d.HAnimSite(DEF="hanim_r_femoral_medial_epicondyles")
HAnimSite307.name = "r_femoral_medial_epicondyles"
HAnimSite307.translation = [-0.0221,0.5014,0.0289]
TouchSensor308 = x3d.TouchSensor()
TouchSensor308.description = "HAnimSite 43 r_femoral_medial_epicondyles"

HAnimSite307.children.append(TouchSensor308)
Shape309 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite307.children.append(Shape309)
Billboard310 = x3d.Billboard()
Shape311 = x3d.Shape()
Text312 = x3d.Text()
Text312.string = ["43"]
FontStyle313 = x3d.FontStyle()
FontStyle313.size = 0.035

Text312.fontStyle = FontStyle313

Shape311.geometry = Text312

Billboard310.children.append(Shape311)

HAnimSite307.children.append(Billboard310)

HAnimSegment292.children.append(HAnimSite307)
HAnimSite314 = x3d.HAnimSite(DEF="hanim_r_knee_crease")
HAnimSite314.name = "r_knee_crease"
HAnimSite314.translation = [-0.0825,0.4932,-0.0326]
TouchSensor315 = x3d.TouchSensor()
TouchSensor315.description = "HAnimSite 91 r_knee_crease"

HAnimSite314.children.append(TouchSensor315)
Shape316 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite314.children.append(Shape316)
Billboard317 = x3d.Billboard()
Shape318 = x3d.Shape()
Text319 = x3d.Text()
Text319.string = ["91"]
FontStyle320 = x3d.FontStyle()
FontStyle320.size = 0.035

Text319.fontStyle = FontStyle320

Shape318.geometry = Text319

Billboard317.children.append(Shape318)

HAnimSite314.children.append(Billboard317)

HAnimSegment292.children.append(HAnimSite314)
HAnimSite321 = x3d.HAnimSite(DEF="hanim_r_suprapatella")
HAnimSite321.name = "r_suprapatella"
TouchSensor322 = x3d.TouchSensor()
TouchSensor322.description = "HAnimSite 45 r_suprapatella"

HAnimSite321.children.append(TouchSensor322)
Shape323 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite321.children.append(Shape323)
Billboard324 = x3d.Billboard()
Shape325 = x3d.Shape()
Text326 = x3d.Text()
Text326.string = ["45"]
FontStyle327 = x3d.FontStyle()
FontStyle327.size = 0.035

Text326.fontStyle = FontStyle327

Shape325.geometry = Text326

Billboard324.children.append(Shape325)

HAnimSite321.children.append(Billboard324)

HAnimSegment292.children.append(HAnimSite321)

HAnimJoint291.children.append(HAnimSegment292)
HAnimJoint328 = x3d.HAnimJoint(DEF="hanim_r_knee")
HAnimJoint328.name = "r_knee"
HAnimJoint328.center = [-0.0867,0.4913,0.0318]
HAnimSegment329 = x3d.HAnimSegment(DEF="hanim_r_calf")
HAnimSegment329.name = "r_calf"
Transform330 = x3d.Transform()
Transform330.translation = [-0.0867,0.4913,0.0318]
Transform331 = x3d.Transform()
Shape332 = x3d.Shape(USE="HAnimJointShape")

Transform331.children.append(Shape332)

Transform330.children.append(Transform331)

HAnimSegment329.children.append(Transform330)
Shape333 = x3d.Shape()
LineSet334 = x3d.LineSet()
LineSet334.vertexCount = [2]
ColorRGBA335 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet334.color = ColorRGBA335
Coordinate336 = x3d.Coordinate()
Coordinate336.point = [(-0.0867, 0.4913, 0.0318),(-0.0801, 0.0712, -0.0766)]

LineSet334.coord = Coordinate336

Shape333.geometry = LineSet334

HAnimSegment329.children.append(Shape333)
HAnimSite337 = x3d.HAnimSite(DEF="hanim_r_lateral_malleolus")
HAnimSite337.name = "r_lateral_malleolus"
HAnimSite337.translation = [-0.1006,0.0658,-0.1075]
TouchSensor338 = x3d.TouchSensor()
TouchSensor338.description = "HAnimSite 53 r_lateral_malleolus"

HAnimSite337.children.append(TouchSensor338)
Shape339 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite337.children.append(Shape339)
Billboard340 = x3d.Billboard()
Shape341 = x3d.Shape()
Text342 = x3d.Text()
Text342.string = ["53"]
FontStyle343 = x3d.FontStyle()
FontStyle343.size = 0.035

Text342.fontStyle = FontStyle343

Shape341.geometry = Text342

Billboard340.children.append(Shape341)

HAnimSite337.children.append(Billboard340)

HAnimSegment329.children.append(HAnimSite337)
HAnimSite344 = x3d.HAnimSite(DEF="hanim_r_medial_malleolus")
HAnimSite344.name = "r_medial_malleolus"
HAnimSite344.translation = [-0.0591,0.076,-0.0928]
TouchSensor345 = x3d.TouchSensor()
TouchSensor345.description = "HAnimSite 52 r_medial_malleolus"

HAnimSite344.children.append(TouchSensor345)
Shape346 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite344.children.append(Shape346)
Billboard347 = x3d.Billboard()
Shape348 = x3d.Shape()
Text349 = x3d.Text()
Text349.string = ["52"]
FontStyle350 = x3d.FontStyle()
FontStyle350.size = 0.035

Text349.fontStyle = FontStyle350

Shape348.geometry = Text349

Billboard347.children.append(Shape348)

HAnimSite344.children.append(Billboard347)

HAnimSegment329.children.append(HAnimSite344)
HAnimSite351 = x3d.HAnimSite(DEF="hanim_r_tibiale")
HAnimSite351.name = "r_tibiale"
TouchSensor352 = x3d.TouchSensor()
TouchSensor352.description = "HAnimSite 51 r_tibiale"

HAnimSite351.children.append(TouchSensor352)
Shape353 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite351.children.append(Shape353)
Billboard354 = x3d.Billboard()
Shape355 = x3d.Shape()
Text356 = x3d.Text()
Text356.string = ["51"]
FontStyle357 = x3d.FontStyle()
FontStyle357.size = 0.035

Text356.fontStyle = FontStyle357

Shape355.geometry = Text356

Billboard354.children.append(Shape355)

HAnimSite351.children.append(Billboard354)

HAnimSegment329.children.append(HAnimSite351)

HAnimJoint328.children.append(HAnimSegment329)
HAnimJoint358 = x3d.HAnimJoint(DEF="hanim_r_talocrural")
HAnimJoint358.name = "r_talocrural"
HAnimJoint358.center = [-0.0801,0.0712,-0.0766]
HAnimSegment359 = x3d.HAnimSegment(DEF="hanim_r_talus")
HAnimSegment359.name = "r_talus"
Transform360 = x3d.Transform()
Transform360.translation = [-0.05,0.06,-0.025]
Transform360.rotation = [1,0,0,-1.57]
Transform360.scale = [0.15,0.15,0.15]
Transform361 = x3d.Transform()
Shape362 = x3d.Shape(USE="HAnimJointShape")

Transform361.children.append(Shape362)

Transform360.children.append(Transform361)

HAnimSegment359.children.append(Transform360)
Shape363 = x3d.Shape()
LineSet364 = x3d.LineSet()
LineSet364.vertexCount = [2]
ColorRGBA365 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet364.color = ColorRGBA365
Coordinate366 = x3d.Coordinate()
Coordinate366.point = [(-0.0801, 0.0712, -0.0766),(-0.08, 0.0175, -0.0608)]

LineSet364.coord = Coordinate366

Shape363.geometry = LineSet364

HAnimSegment359.children.append(Shape363)
HAnimSite367 = x3d.HAnimSite(DEF="hanim_r_calcaneus_posterior")
HAnimSite367.name = "r_calcaneus_posterior"
HAnimSite367.translation = [-0.0692,0.0297,-0.1221]
TouchSensor368 = x3d.TouchSensor()
TouchSensor368.description = "HAnimSite 62 r_calcaneus_posterior"

HAnimSite367.children.append(TouchSensor368)
Shape369 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite367.children.append(Shape369)
Billboard370 = x3d.Billboard()
Shape371 = x3d.Shape()
Text372 = x3d.Text()
Text372.string = ["62"]
FontStyle373 = x3d.FontStyle()
FontStyle373.size = 0.035

Text372.fontStyle = FontStyle373

Shape371.geometry = Text372

Billboard370.children.append(Shape371)

HAnimSite367.children.append(Billboard370)

HAnimSegment359.children.append(HAnimSite367)
HAnimSite374 = x3d.HAnimSite(DEF="hanim_r_sphyrion")
HAnimSite374.name = "r_sphyrion"
HAnimSite374.translation = [-0.0603,0.061,-0.1002]
TouchSensor375 = x3d.TouchSensor()
TouchSensor375.description = "HAnimSite 54 r_sphyrion"

HAnimSite374.children.append(TouchSensor375)
Shape376 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite374.children.append(Shape376)
Billboard377 = x3d.Billboard()
Shape378 = x3d.Shape()
Text379 = x3d.Text()
Text379.string = ["54"]
FontStyle380 = x3d.FontStyle()
FontStyle380.size = 0.035

Text379.fontStyle = FontStyle380

Shape378.geometry = Text379

Billboard377.children.append(Shape378)

HAnimSite374.children.append(Billboard377)

HAnimSegment359.children.append(HAnimSite374)

HAnimJoint358.children.append(HAnimSegment359)
HAnimJoint381 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_2")
HAnimJoint381.name = "r_tarsometatarsal_2"
HAnimJoint381.center = [-0.08,0.0175,-0.0608]
HAnimSegment382 = x3d.HAnimSegment(DEF="hanim_r_metatarsal_2")
HAnimSegment382.name = "r_metatarsal_2"
Transform383 = x3d.Transform()
Transform383.translation = [-0.08,0.0175,-0.0608]
Transform384 = x3d.Transform()
Shape385 = x3d.Shape(USE="HAnimJointShape")

Transform384.children.append(Shape385)

Transform383.children.append(Transform384)

HAnimSegment382.children.append(Transform383)
Shape386 = x3d.Shape()
LineSet387 = x3d.LineSet()
LineSet387.vertexCount = [2]
ColorRGBA388 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet387.color = ColorRGBA388
Coordinate389 = x3d.Coordinate()
Coordinate389.point = [(-0.08, 0.0175, -0.0608),(-0.0823, 0.0064, -0.004)]

LineSet387.coord = Coordinate389

Shape386.geometry = LineSet387

HAnimSegment382.children.append(Shape386)

HAnimJoint381.children.append(HAnimSegment382)
HAnimJoint390 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_2")
HAnimJoint390.name = "r_metatarsophalangeal_2"
HAnimJoint390.center = [-0.0823,0.0064,-0.004]
HAnimSegment391 = x3d.HAnimSegment(DEF="hanim_r_tarsal_proximal_phalanx_2")
HAnimSegment391.name = "r_tarsal_proximal_phalanx_2"
Transform392 = x3d.Transform()
Transform392.translation = [-0.0823,0.0064,-0.004]
Transform393 = x3d.Transform()
Shape394 = x3d.Shape(USE="HAnimJointShape")

Transform393.children.append(Shape394)

Transform392.children.append(Transform393)

HAnimSegment391.children.append(Transform392)
Shape395 = x3d.Shape()
LineSet396 = x3d.LineSet()
LineSet396.vertexCount = [2]
ColorRGBA397 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet396.color = ColorRGBA397
Coordinate398 = x3d.Coordinate()
Coordinate398.point = [(-0.0823, 0.0064, -0.004),(-0.0841, 0.0013, 0.0216)]

LineSet396.coord = Coordinate398

Shape395.geometry = LineSet396

HAnimSegment391.children.append(Shape395)
HAnimSite399 = x3d.HAnimSite(DEF="hanim_r_metatarsal_phalanx_1")
HAnimSite399.name = "r_metatarsal_phalanx_1"
TouchSensor400 = x3d.TouchSensor()
TouchSensor400.description = "HAnimSite 59 r_metatarsal_phalanx_1"

HAnimSite399.children.append(TouchSensor400)
Shape401 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite399.children.append(Shape401)
Billboard402 = x3d.Billboard()
Shape403 = x3d.Shape()
Text404 = x3d.Text()
Text404.string = ["59"]
FontStyle405 = x3d.FontStyle()
FontStyle405.size = 0.035

Text404.fontStyle = FontStyle405

Shape403.geometry = Text404

Billboard402.children.append(Shape403)

HAnimSite399.children.append(Billboard402)

HAnimSegment391.children.append(HAnimSite399)
HAnimSite406 = x3d.HAnimSite(DEF="hanim_r_metatarsal_phalanx_5")
HAnimSite406.name = "r_metatarsal_phalanx_5"
TouchSensor407 = x3d.TouchSensor()
TouchSensor407.description = "HAnimSite 60 r_metatarsal_phalanx_5"

HAnimSite406.children.append(TouchSensor407)
Shape408 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite406.children.append(Shape408)
Billboard409 = x3d.Billboard()
Shape410 = x3d.Shape()
Text411 = x3d.Text()
Text411.string = ["60"]
FontStyle412 = x3d.FontStyle()
FontStyle412.size = 0.035

Text411.fontStyle = FontStyle412

Shape410.geometry = Text411

Billboard409.children.append(Shape410)

HAnimSite406.children.append(Billboard409)

HAnimSegment391.children.append(HAnimSite406)
HAnimSite413 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_1_tip")
HAnimSite413.name = "r_tarsal_distal_phalanx_1_tip"
TouchSensor414 = x3d.TouchSensor()
TouchSensor414.description = "HAnimSite  r_tarsal_distal_phalanx_1_tip"

HAnimSite413.children.append(TouchSensor414)
Shape415 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite413.children.append(Shape415)
Billboard416 = x3d.Billboard()
Shape417 = x3d.Shape()
Text418 = x3d.Text()
Text418.string = [""]
FontStyle419 = x3d.FontStyle()
FontStyle419.size = 0.035

Text418.fontStyle = FontStyle419

Shape417.geometry = Text418

Billboard416.children.append(Shape417)

HAnimSite413.children.append(Billboard416)

HAnimSegment391.children.append(HAnimSite413)
HAnimSite420 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_2_tip")
HAnimSite420.name = "r_tarsal_distal_phalanx_2_tip"
HAnimSite420.translation = [-0.0883,0.0134,0.1383]
TouchSensor421 = x3d.TouchSensor()
TouchSensor421.description = "HAnimSite  r_tarsal_distal_phalanx_2_tip"

HAnimSite420.children.append(TouchSensor421)
Shape422 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite420.children.append(Shape422)
Billboard423 = x3d.Billboard()
Shape424 = x3d.Shape()
Text425 = x3d.Text()
Text425.string = [""]
FontStyle426 = x3d.FontStyle()
FontStyle426.size = 0.035

Text425.fontStyle = FontStyle426

Shape424.geometry = Text425

Billboard423.children.append(Shape424)

HAnimSite420.children.append(Billboard423)

HAnimSegment391.children.append(HAnimSite420)
HAnimSite427 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_3_tip")
HAnimSite427.name = "r_tarsal_distal_phalanx_3_tip"
TouchSensor428 = x3d.TouchSensor()
TouchSensor428.description = "HAnimSite  r_tarsal_distal_phalanx_3_tip"

HAnimSite427.children.append(TouchSensor428)
Shape429 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite427.children.append(Shape429)
Billboard430 = x3d.Billboard()
Shape431 = x3d.Shape()
Text432 = x3d.Text()
Text432.string = [""]
FontStyle433 = x3d.FontStyle()
FontStyle433.size = 0.035

Text432.fontStyle = FontStyle433

Shape431.geometry = Text432

Billboard430.children.append(Shape431)

HAnimSite427.children.append(Billboard430)

HAnimSegment391.children.append(HAnimSite427)
HAnimSite434 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_4_tip")
HAnimSite434.name = "r_tarsal_distal_phalanx_4_tip"
TouchSensor435 = x3d.TouchSensor()
TouchSensor435.description = "HAnimSite  r_tarsal_distal_phalanx_4_tip"

HAnimSite434.children.append(TouchSensor435)
Shape436 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite434.children.append(Shape436)
Billboard437 = x3d.Billboard()
Shape438 = x3d.Shape()
Text439 = x3d.Text()
Text439.string = [""]
FontStyle440 = x3d.FontStyle()
FontStyle440.size = 0.035

Text439.fontStyle = FontStyle440

Shape438.geometry = Text439

Billboard437.children.append(Shape438)

HAnimSite434.children.append(Billboard437)

HAnimSegment391.children.append(HAnimSite434)
HAnimSite441 = x3d.HAnimSite(DEF="hanim_r_tarsal_distal_phalanx_5_tip")
HAnimSite441.name = "r_tarsal_distal_phalanx_5_tip"
TouchSensor442 = x3d.TouchSensor()
TouchSensor442.description = "HAnimSite  r_tarsal_distal_phalanx_5_tip"

HAnimSite441.children.append(TouchSensor442)
Shape443 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite441.children.append(Shape443)
Billboard444 = x3d.Billboard()
Shape445 = x3d.Shape()
Text446 = x3d.Text()
Text446.string = [""]
FontStyle447 = x3d.FontStyle()
FontStyle447.size = 0.035

Text446.fontStyle = FontStyle447

Shape445.geometry = Text446

Billboard444.children.append(Shape445)

HAnimSite441.children.append(Billboard444)

HAnimSegment391.children.append(HAnimSite441)

HAnimJoint390.children.append(HAnimSegment391)
HAnimJoint448 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint448.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint448.center = [-0.0841,0.0013,0.0216]

HAnimJoint390.children.append(HAnimJoint448)

HAnimJoint381.children.append(HAnimJoint390)

HAnimJoint358.children.append(HAnimJoint381)

HAnimJoint328.children.append(HAnimJoint358)

HAnimJoint291.children.append(HAnimJoint328)

HAnimJoint50.children.append(HAnimJoint291)

HAnimJoint37.children.append(HAnimJoint50)
HAnimJoint449 = x3d.HAnimJoint(DEF="hanim_vl5")
HAnimJoint449.name = "vl5"
HAnimJoint449.center = [0.0028,1.0568,-0.0776]
HAnimSegment450 = x3d.HAnimSegment(DEF="hanim_l5")
HAnimSegment450.name = "l5"
Transform451 = x3d.Transform()
Transform451.translation = [0.0028,1.0568,-0.0776]
Transform452 = x3d.Transform()
Shape453 = x3d.Shape(USE="HAnimJointShape")

Transform452.children.append(Shape453)

Transform451.children.append(Transform452)

HAnimSegment450.children.append(Transform451)
Shape454 = x3d.Shape()
LineSet455 = x3d.LineSet()
LineSet455.vertexCount = [2]
ColorRGBA456 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet455.color = ColorRGBA456
Coordinate457 = x3d.Coordinate()
Coordinate457.point = [(0.0028, 1.0568, -0.0776),(0.0041, 1.1276, -0.0796)]

LineSet455.coord = Coordinate457

Shape454.geometry = LineSet455

HAnimSegment450.children.append(Shape454)
HAnimSite458 = x3d.HAnimSite(DEF="hanim_navel")
HAnimSite458.name = "navel"
HAnimSite458.translation = [0.0069,1.0966,0.1017]
TouchSensor459 = x3d.TouchSensor()
TouchSensor459.description = "HAnimSite 84 navel"

HAnimSite458.children.append(TouchSensor459)
Shape460 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite458.children.append(Shape460)
Billboard461 = x3d.Billboard()
Shape462 = x3d.Shape()
Text463 = x3d.Text()
Text463.string = ["84"]
FontStyle464 = x3d.FontStyle()
FontStyle464.size = 0.035

Text463.fontStyle = FontStyle464

Shape462.geometry = Text463

Billboard461.children.append(Shape462)

HAnimSite458.children.append(Billboard461)

HAnimSegment450.children.append(HAnimSite458)
HAnimSite465 = x3d.HAnimSite(DEF="hanim_waist_preferred_anterior")
HAnimSite465.name = "waist_preferred_anterior"
TouchSensor466 = x3d.TouchSensor()
TouchSensor466.description = "HAnimSite 26 waist_preferred_anterior"

HAnimSite465.children.append(TouchSensor466)
Shape467 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite465.children.append(Shape467)
Billboard468 = x3d.Billboard()
Shape469 = x3d.Shape()
Text470 = x3d.Text()
Text470.string = ["26"]
FontStyle471 = x3d.FontStyle()
FontStyle471.size = 0.035

Text470.fontStyle = FontStyle471

Shape469.geometry = Text470

Billboard468.children.append(Shape469)

HAnimSite465.children.append(Billboard468)

HAnimSegment450.children.append(HAnimSite465)
HAnimSite472 = x3d.HAnimSite(DEF="hanim_waist_preferred_posterior")
HAnimSite472.name = "waist_preferred_posterior"
HAnimSite472.translation = [0.29,1.0915,-0.1091]
TouchSensor473 = x3d.TouchSensor()
TouchSensor473.description = "HAnimSite 27 waist_preferred_posterior"

HAnimSite472.children.append(TouchSensor473)
Shape474 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite472.children.append(Shape474)
Billboard475 = x3d.Billboard()
Shape476 = x3d.Shape()
Text477 = x3d.Text()
Text477.string = ["27"]
FontStyle478 = x3d.FontStyle()
FontStyle478.size = 0.035

Text477.fontStyle = FontStyle478

Shape476.geometry = Text477

Billboard475.children.append(Shape476)

HAnimSite472.children.append(Billboard475)

HAnimSegment450.children.append(HAnimSite472)

HAnimJoint449.children.append(HAnimSegment450)
HAnimJoint479 = x3d.HAnimJoint(DEF="hanim_vl3")
HAnimJoint479.name = "vl3"
HAnimJoint479.center = [0.0041,1.1276,-0.0796]
HAnimSegment480 = x3d.HAnimSegment(DEF="hanim_l3")
HAnimSegment480.name = "l3"
Transform481 = x3d.Transform()
Transform481.translation = [0.0041,1.1276,-0.0796]
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
Coordinate487.point = [(0.0041, 1.1276, -0.0796),(0.0048, 1.1912, -0.0805)]

LineSet485.coord = Coordinate487

Shape484.geometry = LineSet485

HAnimSegment480.children.append(Shape484)
HAnimSite488 = x3d.HAnimSite(DEF="hanim_l_rib10")
HAnimSite488.name = "l_rib10"
HAnimSite488.translation = [0.0871,1.1925,0.0992]
TouchSensor489 = x3d.TouchSensor()
TouchSensor489.description = "HAnimSite 28 l_rib10"

HAnimSite488.children.append(TouchSensor489)
Shape490 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite488.children.append(Shape490)
Billboard491 = x3d.Billboard()
Shape492 = x3d.Shape()
Text493 = x3d.Text()
Text493.string = ["28"]
FontStyle494 = x3d.FontStyle()
FontStyle494.size = 0.035

Text493.fontStyle = FontStyle494

Shape492.geometry = Text493

Billboard491.children.append(Shape492)

HAnimSite488.children.append(Billboard491)

HAnimSegment480.children.append(HAnimSite488)
HAnimSite495 = x3d.HAnimSite(DEF="hanim_r_rib10")
HAnimSite495.name = "r_rib10"
HAnimSite495.translation = [-0.0711,1.1941,0.1016]
TouchSensor496 = x3d.TouchSensor()
TouchSensor496.description = "HAnimSite 30 r_rib10"

HAnimSite495.children.append(TouchSensor496)
Shape497 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite495.children.append(Shape497)
Billboard498 = x3d.Billboard()
Shape499 = x3d.Shape()
Text500 = x3d.Text()
Text500.string = ["30"]
FontStyle501 = x3d.FontStyle()
FontStyle501.size = 0.035

Text500.fontStyle = FontStyle501

Shape499.geometry = Text500

Billboard498.children.append(Shape499)

HAnimSite495.children.append(Billboard498)

HAnimSegment480.children.append(HAnimSite495)
HAnimSite502 = x3d.HAnimSite(DEF="hanim_spine_1_middle_back")
HAnimSite502.name = "spine_1_middle_back"
TouchSensor503 = x3d.TouchSensor()
TouchSensor503.description = "HAnimSite 24 spine_1_middle_back"

HAnimSite502.children.append(TouchSensor503)
Shape504 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite502.children.append(Shape504)
Billboard505 = x3d.Billboard()
Shape506 = x3d.Shape()
Text507 = x3d.Text()
Text507.string = ["24"]
FontStyle508 = x3d.FontStyle()
FontStyle508.size = 0.035

Text507.fontStyle = FontStyle508

Shape506.geometry = Text507

Billboard505.children.append(Shape506)

HAnimSite502.children.append(Billboard505)

HAnimSegment480.children.append(HAnimSite502)
HAnimSite509 = x3d.HAnimSite(DEF="hanim_spine_2_middle_back")
HAnimSite509.name = "spine_2_middle_back"
TouchSensor510 = x3d.TouchSensor()
TouchSensor510.description = "HAnimSite  spine_2_middle_back"

HAnimSite509.children.append(TouchSensor510)
Shape511 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite509.children.append(Shape511)
Billboard512 = x3d.Billboard()
Shape513 = x3d.Shape()
Text514 = x3d.Text()
Text514.string = [""]
FontStyle515 = x3d.FontStyle()
FontStyle515.size = 0.035

Text514.fontStyle = FontStyle515

Shape513.geometry = Text514

Billboard512.children.append(Shape513)

HAnimSite509.children.append(Billboard512)

HAnimSegment480.children.append(HAnimSite509)

HAnimJoint479.children.append(HAnimSegment480)
HAnimJoint516 = x3d.HAnimJoint(DEF="hanim_vl1")
HAnimJoint516.name = "vl1"
HAnimJoint516.center = [0.0048,1.1912,-0.0805]
HAnimSegment517 = x3d.HAnimSegment(DEF="hanim_l1")
HAnimSegment517.name = "l1"
Transform518 = x3d.Transform()
Transform518.translation = [0.0048,1.1912,-0.0805]
Transform519 = x3d.Transform()
Shape520 = x3d.Shape(USE="HAnimJointShape")

Transform519.children.append(Shape520)

Transform518.children.append(Transform519)

HAnimSegment517.children.append(Transform518)
Shape521 = x3d.Shape()
LineSet522 = x3d.LineSet()
LineSet522.vertexCount = [2]
ColorRGBA523 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet522.color = ColorRGBA523
Coordinate524 = x3d.Coordinate()
Coordinate524.point = [(0.0048, 1.1912, -0.0805),(0.0056, 1.2848, -0.0822)]

LineSet522.coord = Coordinate524

Shape521.geometry = LineSet522

HAnimSegment517.children.append(Shape521)

HAnimJoint516.children.append(HAnimSegment517)
HAnimJoint525 = x3d.HAnimJoint(DEF="hanim_vt10")
HAnimJoint525.name = "vt10"
HAnimJoint525.center = [0.0056,1.2848,-0.0822]
HAnimSegment526 = x3d.HAnimSegment(DEF="hanim_t10")
HAnimSegment526.name = "t10"
Transform527 = x3d.Transform()
Transform527.translation = [0.0056,1.2848,-0.0822]
Transform528 = x3d.Transform()
Shape529 = x3d.Shape(USE="HAnimJointShape")

Transform528.children.append(Shape529)

Transform527.children.append(Transform528)

HAnimSegment526.children.append(Transform527)
Shape530 = x3d.Shape()
LineSet531 = x3d.LineSet()
LineSet531.vertexCount = [2]
ColorRGBA532 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet531.color = ColorRGBA532
Coordinate533 = x3d.Coordinate()
Coordinate533.point = [(0.0056, 1.2848, -0.0822),(0.0059, 1.3866, -0.08)]

LineSet531.coord = Coordinate533

Shape530.geometry = LineSet531

HAnimSegment526.children.append(Shape530)
HAnimSite534 = x3d.HAnimSite(DEF="hanim_l_thelion")
HAnimSite534.name = "l_thelion"
HAnimSite534.translation = [0.0918,1.3382,0.1192]
TouchSensor535 = x3d.TouchSensor()
TouchSensor535.description = "HAnimSite 29 l_thelion"

HAnimSite534.children.append(TouchSensor535)
Shape536 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite534.children.append(Shape536)
Billboard537 = x3d.Billboard()
Shape538 = x3d.Shape()
Text539 = x3d.Text()
Text539.string = ["29"]
FontStyle540 = x3d.FontStyle()
FontStyle540.size = 0.035

Text539.fontStyle = FontStyle540

Shape538.geometry = Text539

Billboard537.children.append(Shape538)

HAnimSite534.children.append(Billboard537)

HAnimSegment526.children.append(HAnimSite534)
HAnimSite541 = x3d.HAnimSite(DEF="hanim_r_thelion")
HAnimSite541.name = "r_thelion"
HAnimSite541.translation = [-0.0736,1.3385,0.1217]
TouchSensor542 = x3d.TouchSensor()
TouchSensor542.description = "HAnimSite 31 r_thelion"

HAnimSite541.children.append(TouchSensor542)
Shape543 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite541.children.append(Shape543)
Billboard544 = x3d.Billboard()
Shape545 = x3d.Shape()
Text546 = x3d.Text()
Text546.string = ["31"]
FontStyle547 = x3d.FontStyle()
FontStyle547.size = 0.035

Text546.fontStyle = FontStyle547

Shape545.geometry = Text546

Billboard544.children.append(Shape545)

HAnimSite541.children.append(Billboard544)

HAnimSegment526.children.append(HAnimSite541)
HAnimSite548 = x3d.HAnimSite(DEF="hanim_substernale")
HAnimSite548.name = "substernale"
HAnimSite548.translation = [0.0085,1.2995,0.1147]
TouchSensor549 = x3d.TouchSensor()
TouchSensor549.description = "HAnimSite 13 substernale"

HAnimSite548.children.append(TouchSensor549)
Shape550 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite548.children.append(Shape550)
Billboard551 = x3d.Billboard()
Shape552 = x3d.Shape()
Text553 = x3d.Text()
Text553.string = ["13"]
FontStyle554 = x3d.FontStyle()
FontStyle554.size = 0.035

Text553.fontStyle = FontStyle554

Shape552.geometry = Text553

Billboard551.children.append(Shape552)

HAnimSite548.children.append(Billboard551)

HAnimSegment526.children.append(HAnimSite548)

HAnimJoint525.children.append(HAnimSegment526)
HAnimJoint555 = x3d.HAnimJoint(DEF="hanim_vt6")
HAnimJoint555.name = "vt6"
HAnimJoint555.center = [0.0059,1.3866,-0.08]
HAnimSegment556 = x3d.HAnimSegment(DEF="hanim_t6")
HAnimSegment556.name = "t6"
Transform557 = x3d.Transform()
Transform557.translation = [0.0059,1.3866,-0.08]
Transform558 = x3d.Transform()
Shape559 = x3d.Shape(USE="HAnimJointShape")

Transform558.children.append(Shape559)

Transform557.children.append(Transform558)

HAnimSegment556.children.append(Transform557)
Shape560 = x3d.Shape()
LineSet561 = x3d.LineSet()
LineSet561.vertexCount = [2]
ColorRGBA562 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet561.color = ColorRGBA562
Coordinate563 = x3d.Coordinate()
Coordinate563.point = [(0.0059, 1.3866, -0.08),(0.0065, 1.4951, -0.0387)]

LineSet561.coord = Coordinate563

Shape560.geometry = LineSet561

HAnimSegment556.children.append(Shape560)
HAnimSite564 = x3d.HAnimSite(DEF="hanim_l_chest_midsagittal_plane")
HAnimSite564.name = "l_chest_midsagittal_plane"
TouchSensor565 = x3d.TouchSensor()
TouchSensor565.description = "HAnimSite 94 l_chest_midsagittal_plane"

HAnimSite564.children.append(TouchSensor565)
Shape566 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite564.children.append(Shape566)
Billboard567 = x3d.Billboard()
Shape568 = x3d.Shape()
Text569 = x3d.Text()
Text569.string = ["94"]
FontStyle570 = x3d.FontStyle()
FontStyle570.size = 0.035

Text569.fontStyle = FontStyle570

Shape568.geometry = Text569

Billboard567.children.append(Shape568)

HAnimSite564.children.append(Billboard567)

HAnimSegment556.children.append(HAnimSite564)
HAnimSite571 = x3d.HAnimSite(DEF="hanim_mesosternale")
HAnimSite571.name = "mesosternale"
TouchSensor572 = x3d.TouchSensor()
TouchSensor572.description = "HAnimSite 88 mesosternale"

HAnimSite571.children.append(TouchSensor572)
Shape573 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite571.children.append(Shape573)
Billboard574 = x3d.Billboard()
Shape575 = x3d.Shape()
Text576 = x3d.Text()
Text576.string = ["88"]
FontStyle577 = x3d.FontStyle()
FontStyle577.size = 0.035

Text576.fontStyle = FontStyle577

Shape575.geometry = Text576

Billboard574.children.append(Shape575)

HAnimSite571.children.append(Billboard574)

HAnimSegment556.children.append(HAnimSite571)
HAnimSite578 = x3d.HAnimSite(DEF="hanim_r_chest_midsagittal_plane")
HAnimSite578.name = "r_chest_midsagittal_plane"
TouchSensor579 = x3d.TouchSensor()
TouchSensor579.description = "HAnimSite 95 r_chest_midsagittal_plane"

HAnimSite578.children.append(TouchSensor579)
Shape580 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite578.children.append(Shape580)
Billboard581 = x3d.Billboard()
Shape582 = x3d.Shape()
Text583 = x3d.Text()
Text583.string = ["95"]
FontStyle584 = x3d.FontStyle()
FontStyle584.size = 0.035

Text583.fontStyle = FontStyle584

Shape582.geometry = Text583

Billboard581.children.append(Shape582)

HAnimSite578.children.append(Billboard581)

HAnimSegment556.children.append(HAnimSite578)
HAnimSite585 = x3d.HAnimSite(DEF="hanim_rear_center_midsagittal_plane")
HAnimSite585.name = "rear_center_midsagittal_plane"
TouchSensor586 = x3d.TouchSensor()
TouchSensor586.description = "HAnimSite 92 rear_center_midsagittal_plane"

HAnimSite585.children.append(TouchSensor586)
Shape587 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite585.children.append(Shape587)
Billboard588 = x3d.Billboard()
Shape589 = x3d.Shape()
Text590 = x3d.Text()
Text590.string = ["92"]
FontStyle591 = x3d.FontStyle()
FontStyle591.size = 0.035

Text590.fontStyle = FontStyle591

Shape589.geometry = Text590

Billboard588.children.append(Shape589)

HAnimSite585.children.append(Billboard588)

HAnimSegment556.children.append(HAnimSite585)

HAnimJoint555.children.append(HAnimSegment556)
HAnimJoint592 = x3d.HAnimJoint(DEF="hanim_vt1")
HAnimJoint592.name = "vt1"
HAnimJoint592.center = [0.0065,1.4951,-0.0387]
HAnimSegment593 = x3d.HAnimSegment(DEF="hanim_t1")
HAnimSegment593.name = "t1"
Transform594 = x3d.Transform()
Transform594.translation = [0.0065,1.4951,-0.0387]
Transform595 = x3d.Transform()
Shape596 = x3d.Shape(USE="HAnimJointShape")

Transform595.children.append(Shape596)

Transform594.children.append(Transform595)

HAnimSegment593.children.append(Transform594)
Shape597 = x3d.Shape()
LineSet598 = x3d.LineSet()
LineSet598.vertexCount = [2]
ColorRGBA599 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet598.color = ColorRGBA599
Coordinate600 = x3d.Coordinate()
Coordinate600.point = [(0.0065, 1.4951, -0.0387),(0.0066, 1.5662, -0.0084)]

LineSet598.coord = Coordinate600

Shape597.geometry = LineSet598

HAnimSegment593.children.append(Shape597)
HAnimSite601 = x3d.HAnimSite(DEF="hanim_cervicale")
HAnimSite601.name = "cervicale"
HAnimSite601.translation = [0.0064,1.52,-0.0815]
TouchSensor602 = x3d.TouchSensor()
TouchSensor602.description = "HAnimSite 10 cervicale"

HAnimSite601.children.append(TouchSensor602)
Shape603 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite601.children.append(Shape603)
Billboard604 = x3d.Billboard()
Shape605 = x3d.Shape()
Text606 = x3d.Text()
Text606.string = ["10"]
FontStyle607 = x3d.FontStyle()
FontStyle607.size = 0.035

Text606.fontStyle = FontStyle607

Shape605.geometry = Text606

Billboard604.children.append(Shape605)

HAnimSite601.children.append(Billboard604)

HAnimSegment593.children.append(HAnimSite601)
HAnimSite608 = x3d.HAnimSite(DEF="hanim_l_neck_base")
HAnimSite608.name = "l_neck_base"
HAnimSite608.translation = [0.0646,1.5141,-0.038]
TouchSensor609 = x3d.TouchSensor()
TouchSensor609.description = "HAnimSite 82 l_neck_base"

HAnimSite608.children.append(TouchSensor609)
Shape610 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite608.children.append(Shape610)
Billboard611 = x3d.Billboard()
Shape612 = x3d.Shape()
Text613 = x3d.Text()
Text613.string = ["82"]
FontStyle614 = x3d.FontStyle()
FontStyle614.size = 0.035

Text613.fontStyle = FontStyle614

Shape612.geometry = Text613

Billboard611.children.append(Shape612)

HAnimSite608.children.append(Billboard611)

HAnimSegment593.children.append(HAnimSite608)
HAnimSite615 = x3d.HAnimSite(DEF="hanim_r_neck_base")
HAnimSite615.name = "r_neck_base"
HAnimSite615.translation = [-0.0419,1.5149,-0.022]
TouchSensor616 = x3d.TouchSensor()
TouchSensor616.description = "HAnimSite 83 r_neck_base"

HAnimSite615.children.append(TouchSensor616)
Shape617 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite615.children.append(Shape617)
Billboard618 = x3d.Billboard()
Shape619 = x3d.Shape()
Text620 = x3d.Text()
Text620.string = ["83"]
FontStyle621 = x3d.FontStyle()
FontStyle621.size = 0.035

Text620.fontStyle = FontStyle621

Shape619.geometry = Text620

Billboard618.children.append(Shape619)

HAnimSite615.children.append(Billboard618)

HAnimSegment593.children.append(HAnimSite615)
HAnimSite622 = x3d.HAnimSite(DEF="hanim_suprasternale")
HAnimSite622.name = "suprasternale"
HAnimSite622.translation = [0.0084,1.4714,0.0551]
TouchSensor623 = x3d.TouchSensor()
TouchSensor623.description = "HAnimSite 12 suprasternale"

HAnimSite622.children.append(TouchSensor623)
Shape624 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite622.children.append(Shape624)
Billboard625 = x3d.Billboard()
Shape626 = x3d.Shape()
Text627 = x3d.Text()
Text627.string = ["12"]
FontStyle628 = x3d.FontStyle()
FontStyle628.size = 0.035

Text627.fontStyle = FontStyle628

Shape626.geometry = Text627

Billboard625.children.append(Shape626)

HAnimSite622.children.append(Billboard625)

HAnimSegment593.children.append(HAnimSite622)
Shape629 = x3d.Shape()
LineSet630 = x3d.LineSet()
LineSet630.vertexCount = [2]
ColorRGBA631 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet630.color = ColorRGBA631
Coordinate632 = x3d.Coordinate()
Coordinate632.point = [(0.0065, 1.4951, -0.0387),(0.082, 1.4488, -0.0353)]

LineSet630.coord = Coordinate632

Shape629.geometry = LineSet630

HAnimSegment593.children.append(Shape629)
Shape633 = x3d.Shape()
LineSet634 = x3d.LineSet()
LineSet634.vertexCount = [2]
ColorRGBA635 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet634.color = ColorRGBA635
Coordinate636 = x3d.Coordinate()
Coordinate636.point = [(0.0065, 1.4951, -0.0387),(-0.0694, 1.46, -0.033)]

LineSet634.coord = Coordinate636

Shape633.geometry = LineSet634

HAnimSegment593.children.append(Shape633)

HAnimJoint592.children.append(HAnimSegment593)
HAnimJoint637 = x3d.HAnimJoint(DEF="hanim_vc4")
HAnimJoint637.name = "vc4"
HAnimJoint637.center = [0.0066,1.5662,-0.0084]
HAnimSegment638 = x3d.HAnimSegment(DEF="hanim_c4")
HAnimSegment638.name = "c4"
Transform639 = x3d.Transform()
Transform639.translation = [0.0066,1.5662,-0.0084]
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
Coordinate645.point = [(0.0066, 1.5662, -0.0084),(0.0066, 1.5928, -0.0103)]

LineSet643.coord = Coordinate645

Shape642.geometry = LineSet643

HAnimSegment638.children.append(Shape642)

HAnimJoint637.children.append(HAnimSegment638)
HAnimJoint646 = x3d.HAnimJoint(DEF="hanim_vc2")
HAnimJoint646.name = "vc2"
HAnimJoint646.center = [0.0066,1.5928,-0.0103]
HAnimSegment647 = x3d.HAnimSegment(DEF="hanim_c2")
HAnimSegment647.name = "c2"
Transform648 = x3d.Transform()
Transform648.translation = [0.0066,1.5928,-0.0103]
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
Coordinate654.point = [(0.0066, 1.5928, -0.0103),(0.0044, 1.6209, 0.0236)]

LineSet652.coord = Coordinate654

Shape651.geometry = LineSet652

HAnimSegment647.children.append(Shape651)
HAnimSite655 = x3d.HAnimSite(DEF="hanim_adams_apple")
HAnimSite655.name = "adams_apple"
TouchSensor656 = x3d.TouchSensor()
TouchSensor656.description = "HAnimSite 11 adams_apple"

HAnimSite655.children.append(TouchSensor656)
Shape657 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite655.children.append(Shape657)
Billboard658 = x3d.Billboard()
Shape659 = x3d.Shape()
Text660 = x3d.Text()
Text660.string = ["11"]
FontStyle661 = x3d.FontStyle()
FontStyle661.size = 0.035

Text660.fontStyle = FontStyle661

Shape659.geometry = Text660

Billboard658.children.append(Shape659)

HAnimSite655.children.append(Billboard658)

HAnimSegment647.children.append(HAnimSite655)

HAnimJoint646.children.append(HAnimSegment647)
HAnimJoint662 = x3d.HAnimJoint(DEF="hanim_skullbase")
HAnimJoint662.name = "skullbase"
HAnimJoint662.center = [0.0044,1.6209,0.0236]

HAnimJoint646.children.append(HAnimJoint662)

HAnimJoint637.children.append(HAnimJoint646)

HAnimJoint592.children.append(HAnimJoint637)
HAnimJoint663 = x3d.HAnimJoint(DEF="hanim_l_sternoclavicular")
HAnimJoint663.name = "l_sternoclavicular"
HAnimJoint663.center = [0.082,1.4488,-0.0353]
HAnimSegment664 = x3d.HAnimSegment(DEF="hanim_l_clavicle")
HAnimSegment664.name = "l_clavicle"
Transform665 = x3d.Transform()
Transform665.translation = [0.082,1.4488,-0.0353]
Transform666 = x3d.Transform()
Shape667 = x3d.Shape(USE="HAnimJointShape")

Transform666.children.append(Shape667)

Transform665.children.append(Transform666)

HAnimSegment664.children.append(Transform665)
Shape668 = x3d.Shape()
LineSet669 = x3d.LineSet()
LineSet669.vertexCount = [2]
ColorRGBA670 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet669.color = ColorRGBA670
Coordinate671 = x3d.Coordinate()
Coordinate671.point = [(0.082, 1.4488, -0.0353),(0.0962, 1.4269, -0.0424)]

LineSet669.coord = Coordinate671

Shape668.geometry = LineSet669

HAnimSegment664.children.append(Shape668)
HAnimSite672 = x3d.HAnimSite(DEF="hanim_l_acromion")
HAnimSite672.name = "l_acromion"
HAnimSite672.translation = [0.2032,1.476,-0.049]
TouchSensor673 = x3d.TouchSensor()
TouchSensor673.description = "HAnimSite 15 l_acromion"

HAnimSite672.children.append(TouchSensor673)
Shape674 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite672.children.append(Shape674)
Billboard675 = x3d.Billboard()
Shape676 = x3d.Shape()
Text677 = x3d.Text()
Text677.string = ["15"]
FontStyle678 = x3d.FontStyle()
FontStyle678.size = 0.035

Text677.fontStyle = FontStyle678

Shape676.geometry = Text677

Billboard675.children.append(Shape676)

HAnimSite672.children.append(Billboard675)

HAnimSegment664.children.append(HAnimSite672)
HAnimSite679 = x3d.HAnimSite(DEF="hanim_l_axilla_distal")
HAnimSite679.name = "l_axilla_distal"
HAnimSite679.translation = [0.1706,1.4072,-0.0875]
TouchSensor680 = x3d.TouchSensor()
TouchSensor680.description = "HAnimSite 17 l_axilla_distal"

HAnimSite679.children.append(TouchSensor680)
Shape681 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite679.children.append(Shape681)
Billboard682 = x3d.Billboard()
Shape683 = x3d.Shape()
Text684 = x3d.Text()
Text684.string = ["17"]
FontStyle685 = x3d.FontStyle()
FontStyle685.size = 0.035

Text684.fontStyle = FontStyle685

Shape683.geometry = Text684

Billboard682.children.append(Shape683)

HAnimSite679.children.append(Billboard682)

HAnimSegment664.children.append(HAnimSite679)
HAnimSite686 = x3d.HAnimSite(DEF="hanim_l_axilla_posterior_folds")
HAnimSite686.name = "l_axilla_posterior_folds"
TouchSensor687 = x3d.TouchSensor()
TouchSensor687.description = "HAnimSite 18 l_axilla_posterior_folds"

HAnimSite686.children.append(TouchSensor687)
Shape688 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite686.children.append(Shape688)
Billboard689 = x3d.Billboard()
Shape690 = x3d.Shape()
Text691 = x3d.Text()
Text691.string = ["18"]
FontStyle692 = x3d.FontStyle()
FontStyle692.size = 0.035

Text691.fontStyle = FontStyle692

Shape690.geometry = Text691

Billboard689.children.append(Shape690)

HAnimSite686.children.append(Billboard689)

HAnimSegment664.children.append(HAnimSite686)
HAnimSite693 = x3d.HAnimSite(DEF="hanim_l_axilla_proximal")
HAnimSite693.name = "l_axilla_proximal"
HAnimSite693.translation = [0.1777,1.4065,-0.0075]
TouchSensor694 = x3d.TouchSensor()
TouchSensor694.description = "HAnimSite 16 l_axilla_proximal"

HAnimSite693.children.append(TouchSensor694)
Shape695 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite693.children.append(Shape695)
Billboard696 = x3d.Billboard()
Shape697 = x3d.Shape()
Text698 = x3d.Text()
Text698.string = ["16"]
FontStyle699 = x3d.FontStyle()
FontStyle699.size = 0.035

Text698.fontStyle = FontStyle699

Shape697.geometry = Text698

Billboard696.children.append(Shape697)

HAnimSite693.children.append(Billboard696)

HAnimSegment664.children.append(HAnimSite693)
HAnimSite700 = x3d.HAnimSite(DEF="hanim_l_clavicale")
HAnimSite700.name = "l_clavicale"
HAnimSite700.translation = [0.0271,1.4943,0.0394]
TouchSensor701 = x3d.TouchSensor()
TouchSensor701.description = "HAnimSite 14 l_clavicale"

HAnimSite700.children.append(TouchSensor701)
Shape702 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite700.children.append(Shape702)
Billboard703 = x3d.Billboard()
Shape704 = x3d.Shape()
Text705 = x3d.Text()
Text705.string = ["14"]
FontStyle706 = x3d.FontStyle()
FontStyle706.size = 0.035

Text705.fontStyle = FontStyle706

Shape704.geometry = Text705

Billboard703.children.append(Shape704)

HAnimSite700.children.append(Billboard703)

HAnimSegment664.children.append(HAnimSite700)

HAnimJoint663.children.append(HAnimSegment664)
HAnimJoint707 = x3d.HAnimJoint(DEF="hanim_l_acromioclavicular")
HAnimJoint707.name = "l_acromioclavicular"
HAnimJoint707.center = [0.0962,1.4269,-0.0424]
HAnimSegment708 = x3d.HAnimSegment(DEF="hanim_l_scapula")
HAnimSegment708.name = "l_scapula"
Transform709 = x3d.Transform()
Transform709.translation = [0.0962,1.4269,-0.0424]
Transform710 = x3d.Transform()
Shape711 = x3d.Shape(USE="HAnimJointShape")

Transform710.children.append(Shape711)

Transform709.children.append(Transform710)

HAnimSegment708.children.append(Transform709)
Shape712 = x3d.Shape()
LineSet713 = x3d.LineSet()
LineSet713.vertexCount = [2]
ColorRGBA714 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet713.color = ColorRGBA714
Coordinate715 = x3d.Coordinate()
Coordinate715.point = [(0.0962, 1.4269, -0.0424),(0.2029, 1.4376, -0.0387)]

LineSet713.coord = Coordinate715

Shape712.geometry = LineSet713

HAnimSegment708.children.append(Shape712)

HAnimJoint707.children.append(HAnimSegment708)
HAnimJoint716 = x3d.HAnimJoint(DEF="hanim_l_shoulder")
HAnimJoint716.name = "l_shoulder"
HAnimJoint716.center = [0.2029,1.4376,-0.0387]
HAnimSegment717 = x3d.HAnimSegment(DEF="hanim_l_upperarm")
HAnimSegment717.name = "l_upperarm"
Transform718 = x3d.Transform()
Transform718.translation = [0.2029,1.4376,-0.0387]
Transform719 = x3d.Transform()
Shape720 = x3d.Shape(USE="HAnimJointShape")

Transform719.children.append(Shape720)

Transform718.children.append(Transform719)

HAnimSegment717.children.append(Transform718)
Shape721 = x3d.Shape()
LineSet722 = x3d.LineSet()
LineSet722.vertexCount = [2]
ColorRGBA723 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet722.color = ColorRGBA723
Coordinate724 = x3d.Coordinate()
Coordinate724.point = [(0.2029, 1.4376, -0.0387),(0.2014, 1.1357, -0.0682)]

LineSet722.coord = Coordinate724

Shape721.geometry = LineSet722

HAnimSegment717.children.append(Shape721)
HAnimSite725 = x3d.HAnimSite(DEF="hanim_l_bideltoid")
HAnimSite725.name = "l_bideltoid"
TouchSensor726 = x3d.TouchSensor()
TouchSensor726.description = "HAnimSite 96 l_bideltoid"

HAnimSite725.children.append(TouchSensor726)
Shape727 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite725.children.append(Shape727)
Billboard728 = x3d.Billboard()
Shape729 = x3d.Shape()
Text730 = x3d.Text()
Text730.string = ["96"]
FontStyle731 = x3d.FontStyle()
FontStyle731.size = 0.035

Text730.fontStyle = FontStyle731

Shape729.geometry = Text730

Billboard728.children.append(Shape729)

HAnimSite725.children.append(Billboard728)

HAnimSegment717.children.append(HAnimSite725)
HAnimSite732 = x3d.HAnimSite(DEF="hanim_l_humeral_lateral_epicondyles")
HAnimSite732.name = "l_humeral_lateral_epicondyles"
HAnimSite732.translation = [0.228,1.1482,-0.11]
TouchSensor733 = x3d.TouchSensor()
TouchSensor733.description = "HAnimSite 63 l_humeral_lateral_epicondyles"

HAnimSite732.children.append(TouchSensor733)
Shape734 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite732.children.append(Shape734)
Billboard735 = x3d.Billboard()
Shape736 = x3d.Shape()
Text737 = x3d.Text()
Text737.string = ["63"]
FontStyle738 = x3d.FontStyle()
FontStyle738.size = 0.035

Text737.fontStyle = FontStyle738

Shape736.geometry = Text737

Billboard735.children.append(Shape736)

HAnimSite732.children.append(Billboard735)

HAnimSegment717.children.append(HAnimSite732)

HAnimJoint716.children.append(HAnimSegment717)
HAnimJoint739 = x3d.HAnimJoint(DEF="hanim_l_elbow")
HAnimJoint739.name = "l_elbow"
HAnimJoint739.center = [0.2014,1.1357,-0.0682]
HAnimSegment740 = x3d.HAnimSegment(DEF="hanim_l_forearm")
HAnimSegment740.name = "l_forearm"
Transform741 = x3d.Transform()
Transform741.translation = [0.2014,1.1357,-0.0682]
Transform742 = x3d.Transform()
Shape743 = x3d.Shape(USE="HAnimJointShape")

Transform742.children.append(Shape743)

Transform741.children.append(Transform742)

HAnimSegment740.children.append(Transform741)
Shape744 = x3d.Shape()
LineSet745 = x3d.LineSet()
LineSet745.vertexCount = [2]
ColorRGBA746 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet745.color = ColorRGBA746
Coordinate747 = x3d.Coordinate()
Coordinate747.point = [(0.2014, 1.1357, -0.0682),(0.1984, 0.8663, -0.0583)]

LineSet745.coord = Coordinate747

Shape744.geometry = LineSet745

HAnimSegment740.children.append(Shape744)
HAnimSite748 = x3d.HAnimSite(DEF="hanim_l_humeral_medial_epicondyles")
HAnimSite748.name = "l_humeral_medial_epicondyles"
HAnimSite748.translation = [0.1735,1.1272,-0.1113]
TouchSensor749 = x3d.TouchSensor()
TouchSensor749.description = "HAnimSite 64 l_humeral_medial_epicondyles"

HAnimSite748.children.append(TouchSensor749)
Shape750 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite748.children.append(Shape750)
Billboard751 = x3d.Billboard()
Shape752 = x3d.Shape()
Text753 = x3d.Text()
Text753.string = ["64"]
FontStyle754 = x3d.FontStyle()
FontStyle754.size = 0.035

Text753.fontStyle = FontStyle754

Shape752.geometry = Text753

Billboard751.children.append(Shape752)

HAnimSite748.children.append(Billboard751)

HAnimSegment740.children.append(HAnimSite748)
HAnimSite755 = x3d.HAnimSite(DEF="hanim_l_olecranon")
HAnimSite755.name = "l_olecranon"
HAnimSite755.translation = [-0.1962,1.1375,-0.1123]
TouchSensor756 = x3d.TouchSensor()
TouchSensor756.description = "HAnimSite 65 l_olecranon"

HAnimSite755.children.append(TouchSensor756)
Shape757 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite755.children.append(Shape757)
Billboard758 = x3d.Billboard()
Shape759 = x3d.Shape()
Text760 = x3d.Text()
Text760.string = ["65"]
FontStyle761 = x3d.FontStyle()
FontStyle761.size = 0.035

Text760.fontStyle = FontStyle761

Shape759.geometry = Text760

Billboard758.children.append(Shape759)

HAnimSite755.children.append(Billboard758)

HAnimSegment740.children.append(HAnimSite755)
HAnimSite762 = x3d.HAnimSite(DEF="hanim_l_radial_styloid")
HAnimSite762.name = "l_radial_styloid"
HAnimSite762.translation = [0.1901,0.8645,-0.0415]
TouchSensor763 = x3d.TouchSensor()
TouchSensor763.description = "HAnimSite 71 l_radial_styloid"

HAnimSite762.children.append(TouchSensor763)
Shape764 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite762.children.append(Shape764)
Billboard765 = x3d.Billboard()
Shape766 = x3d.Shape()
Text767 = x3d.Text()
Text767.string = ["71"]
FontStyle768 = x3d.FontStyle()
FontStyle768.size = 0.035

Text767.fontStyle = FontStyle768

Shape766.geometry = Text767

Billboard765.children.append(Shape766)

HAnimSite762.children.append(Billboard765)

HAnimSegment740.children.append(HAnimSite762)
HAnimSite769 = x3d.HAnimSite(DEF="hanim_l_radiale")
HAnimSite769.name = "l_radiale"
HAnimSite769.translation = [0.2182,1.1212,-0.1167]
TouchSensor770 = x3d.TouchSensor()
TouchSensor770.description = "HAnimSite 69 l_radiale"

HAnimSite769.children.append(TouchSensor770)
Shape771 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite769.children.append(Shape771)
Billboard772 = x3d.Billboard()
Shape773 = x3d.Shape()
Text774 = x3d.Text()
Text774.string = ["69"]
FontStyle775 = x3d.FontStyle()
FontStyle775.size = 0.035

Text774.fontStyle = FontStyle775

Shape773.geometry = Text774

Billboard772.children.append(Shape773)

HAnimSite769.children.append(Billboard772)

HAnimSegment740.children.append(HAnimSite769)

HAnimJoint739.children.append(HAnimSegment740)
HAnimJoint776 = x3d.HAnimJoint(DEF="hanim_l_radiocarpal")
HAnimJoint776.name = "l_radiocarpal"
HAnimJoint776.center = [0.1984,0.8663,-0.0583]
HAnimSegment777 = x3d.HAnimSegment(DEF="hanim_l_carpal")
HAnimSegment777.name = "l_carpal"
Transform778 = x3d.Transform()
Transform778.translation = [0.2,0.85,-0.05]
Transform778.rotation = [0,0,1,-3.14]
Transform778.scale = [0.2,0.2,0.2]
Transform779 = x3d.Transform()
Transform779.rotation = [0,1,0,-1.57]
Shape780 = x3d.Shape(USE="HAnimJointShape")

Transform779.children.append(Shape780)

Transform778.children.append(Transform779)

HAnimSegment777.children.append(Transform778)
Shape781 = x3d.Shape()
LineSet782 = x3d.LineSet()
LineSet782.vertexCount = [2]
ColorRGBA783 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet782.color = ColorRGBA783
Coordinate784 = x3d.Coordinate()
Coordinate784.point = [(0.1984, 0.8663, -0.0583),(0.1924, 0.8472, -0.0534)]

LineSet782.coord = Coordinate784

Shape781.geometry = LineSet782

HAnimSegment777.children.append(Shape781)
HAnimSite785 = x3d.HAnimSite(DEF="hanim_l_ulnar_styloid")
HAnimSite785.name = "l_ulnar_styloid"
HAnimSite785.translation = [-0.2142,0.8529,-0.0648]
TouchSensor786 = x3d.TouchSensor()
TouchSensor786.description = "HAnimSite 70 l_ulnar_styloid"

HAnimSite785.children.append(TouchSensor786)
Shape787 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite785.children.append(Shape787)
Billboard788 = x3d.Billboard()
Shape789 = x3d.Shape()
Text790 = x3d.Text()
Text790.string = ["70"]
FontStyle791 = x3d.FontStyle()
FontStyle791.size = 0.035

Text790.fontStyle = FontStyle791

Shape789.geometry = Text790

Billboard788.children.append(Shape789)

HAnimSite785.children.append(Billboard788)

HAnimSegment777.children.append(HAnimSite785)
Shape792 = x3d.Shape()
LineSet793 = x3d.LineSet()
LineSet793.vertexCount = [2]
ColorRGBA794 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet793.color = ColorRGBA794
Coordinate795 = x3d.Coordinate()
Coordinate795.point = [(0.1984, 0.8663, -0.0583),(0.1983, 0.8024, -0.028)]

LineSet793.coord = Coordinate795

Shape792.geometry = LineSet793

HAnimSegment777.children.append(Shape792)
Shape796 = x3d.Shape()
LineSet797 = x3d.LineSet()
LineSet797.vertexCount = [2]
ColorRGBA798 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet797.color = ColorRGBA798
Coordinate799 = x3d.Coordinate()
Coordinate799.point = [(0.1984, 0.8663, -0.0583),(0.1987, 0.8029, -0.053)]

LineSet797.coord = Coordinate799

Shape796.geometry = LineSet797

HAnimSegment777.children.append(Shape796)
Shape800 = x3d.Shape()
LineSet801 = x3d.LineSet()
LineSet801.vertexCount = [2]
ColorRGBA802 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet801.color = ColorRGBA802
Coordinate803 = x3d.Coordinate()
Coordinate803.point = [(0.1984, 0.8663, -0.0583),(0.1956, 0.8019, -0.0794)]

LineSet801.coord = Coordinate803

Shape800.geometry = LineSet801

HAnimSegment777.children.append(Shape800)
Shape804 = x3d.Shape()
LineSet805 = x3d.LineSet()
LineSet805.vertexCount = [2]
ColorRGBA806 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet805.color = ColorRGBA806
Coordinate807 = x3d.Coordinate()
Coordinate807.point = [(0.1984, 0.8663, -0.0583),(0.1925, 0.8066, -0.1036)]

LineSet805.coord = Coordinate807

Shape804.geometry = LineSet805

HAnimSegment777.children.append(Shape804)

HAnimJoint776.children.append(HAnimSegment777)
HAnimJoint808 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_1")
HAnimJoint808.name = "l_carpometacarpal_1"
HAnimJoint808.center = [0.1924,0.8472,-0.0534]
HAnimSegment809 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_1")
HAnimSegment809.name = "l_metacarpal_1"
Transform810 = x3d.Transform()
Transform810.translation = [0.1924,0.8472,-0.0534]
Transform811 = x3d.Transform()
Shape812 = x3d.Shape(USE="HAnimJointShape")

Transform811.children.append(Shape812)

Transform810.children.append(Transform811)

HAnimSegment809.children.append(Transform810)
Shape813 = x3d.Shape()
LineSet814 = x3d.LineSet()
LineSet814.vertexCount = [2]
ColorRGBA815 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet814.color = ColorRGBA815
Coordinate816 = x3d.Coordinate()
Coordinate816.point = [(0.1924, 0.8472, -0.0534),(0.1951, 0.8226, 0.0246)]

LineSet814.coord = Coordinate816

Shape813.geometry = LineSet814

HAnimSegment809.children.append(Shape813)

HAnimJoint808.children.append(HAnimSegment809)
HAnimJoint817 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_1")
HAnimJoint817.name = "l_metacarpophalangeal_1"
HAnimJoint817.center = [0.1951,0.8226,0.0246]
HAnimSegment818 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_1")
HAnimSegment818.name = "l_carpal_proximal_phalanx_1"
Transform819 = x3d.Transform()
Transform819.translation = [0.1951,0.8226,0.0246]
Transform820 = x3d.Transform()
Shape821 = x3d.Shape(USE="HAnimJointShape")

Transform820.children.append(Shape821)

Transform819.children.append(Transform820)

HAnimSegment818.children.append(Transform819)
Shape822 = x3d.Shape()
LineSet823 = x3d.LineSet()
LineSet823.vertexCount = [2]
ColorRGBA824 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet823.color = ColorRGBA824
Coordinate825 = x3d.Coordinate()
Coordinate825.point = [(0.1951, 0.8226, 0.0246),(0.1955, 0.8159, 0.0464)]

LineSet823.coord = Coordinate825

Shape822.geometry = LineSet823

HAnimSegment818.children.append(Shape822)

HAnimJoint817.children.append(HAnimSegment818)
HAnimJoint826 = x3d.HAnimJoint(DEF="hanim_l_carpal_interphalangeal_1")
HAnimJoint826.name = "l_carpal_interphalangeal_1"
HAnimJoint826.center = [0.1955,0.8159,0.0464]

HAnimJoint817.children.append(HAnimJoint826)

HAnimJoint808.children.append(HAnimJoint817)

HAnimJoint776.children.append(HAnimJoint808)
HAnimJoint827 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_2")
HAnimJoint827.name = "l_carpometacarpal_2"
HAnimJoint827.center = [0.1983,0.8024,-0.028]
HAnimSegment828 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_2")
HAnimSegment828.name = "l_metacarpal_2"
Transform829 = x3d.Transform()
Transform829.translation = [0.1983,0.8024,-0.028]
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
Coordinate835.point = [(0.1983, 0.8024, -0.028),(0.1983, 0.7815, -0.028)]

LineSet833.coord = Coordinate835

Shape832.geometry = LineSet833

HAnimSegment828.children.append(Shape832)
HAnimSite836 = x3d.HAnimSite(DEF="hanim_l_metacarpal_phalanx_2")
HAnimSite836.name = "l_metacarpal_phalanx_2"
HAnimSite836.translation = [0.2009,0.8139,-0.0237]
TouchSensor837 = x3d.TouchSensor()
TouchSensor837.description = "HAnimSite 75 l_metacarpal_phalanx_2"

HAnimSite836.children.append(TouchSensor837)
Shape838 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite836.children.append(Shape838)
Billboard839 = x3d.Billboard()
Shape840 = x3d.Shape()
Text841 = x3d.Text()
Text841.string = ["75"]
FontStyle842 = x3d.FontStyle()
FontStyle842.size = 0.035

Text841.fontStyle = FontStyle842

Shape840.geometry = Text841

Billboard839.children.append(Shape840)

HAnimSite836.children.append(Billboard839)

HAnimSegment828.children.append(HAnimSite836)

HAnimJoint827.children.append(HAnimSegment828)
HAnimJoint843 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_2")
HAnimJoint843.name = "l_metacarpophalangeal_2"
HAnimJoint843.center = [0.1983,0.7815,-0.028]
HAnimSegment844 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_2")
HAnimSegment844.name = "l_carpal_proximal_phalanx_2"
Transform845 = x3d.Transform()
Transform845.translation = [0.1983,0.7815,-0.028]
Transform846 = x3d.Transform()
Shape847 = x3d.Shape(USE="HAnimJointShape")

Transform846.children.append(Shape847)

Transform845.children.append(Transform846)

HAnimSegment844.children.append(Transform845)
Shape848 = x3d.Shape()
LineSet849 = x3d.LineSet()
LineSet849.vertexCount = [2]
ColorRGBA850 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet849.color = ColorRGBA850
Coordinate851 = x3d.Coordinate()
Coordinate851.point = [(0.1983, 0.7815, -0.028),(0.2017, 0.7363, -0.0248)]

LineSet849.coord = Coordinate851

Shape848.geometry = LineSet849

HAnimSegment844.children.append(Shape848)

HAnimJoint843.children.append(HAnimSegment844)
HAnimJoint852 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint852.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint852.center = [0.2017,0.7363,-0.0248]
HAnimSegment853 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_2")
HAnimSegment853.name = "l_carpal_middle_phalanx_2"
Transform854 = x3d.Transform()
Transform854.translation = [0.2017,0.7363,-0.0248]
Transform855 = x3d.Transform()
Shape856 = x3d.Shape(USE="HAnimJointShape")

Transform855.children.append(Shape856)

Transform854.children.append(Transform855)

HAnimSegment853.children.append(Transform854)
Shape857 = x3d.Shape()
LineSet858 = x3d.LineSet()
LineSet858.vertexCount = [2]
ColorRGBA859 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet858.color = ColorRGBA859
Coordinate860 = x3d.Coordinate()
Coordinate860.point = [(0.2017, 0.7363, -0.0248),(0.2028, 0.7139, -0.0236)]

LineSet858.coord = Coordinate860

Shape857.geometry = LineSet858

HAnimSegment853.children.append(Shape857)

HAnimJoint852.children.append(HAnimSegment853)
HAnimJoint861 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint861.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint861.center = [0.2028,0.7139,-0.0236]

HAnimJoint852.children.append(HAnimJoint861)

HAnimJoint843.children.append(HAnimJoint852)

HAnimJoint827.children.append(HAnimJoint843)

HAnimJoint776.children.append(HAnimJoint827)
HAnimJoint862 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_3")
HAnimJoint862.name = "l_carpometacarpal_3"
HAnimJoint862.center = [0.1987,0.8029,-0.053]
HAnimSegment863 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_3")
HAnimSegment863.name = "l_metacarpal_3"
Transform864 = x3d.Transform()
Transform864.translation = [0.1987,0.8029,-0.053]
Transform865 = x3d.Transform()
Shape866 = x3d.Shape(USE="HAnimJointShape")

Transform865.children.append(Shape866)

Transform864.children.append(Transform865)

HAnimSegment863.children.append(Transform864)
Shape867 = x3d.Shape()
LineSet868 = x3d.LineSet()
LineSet868.vertexCount = [2]
ColorRGBA869 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet868.color = ColorRGBA869
Coordinate870 = x3d.Coordinate()
Coordinate870.point = [(0.1987, 0.8029, -0.053),(0.1987, 0.7818, -0.053)]

LineSet868.coord = Coordinate870

Shape867.geometry = LineSet868

HAnimSegment863.children.append(Shape867)
HAnimSite871 = x3d.HAnimSite(DEF="hanim_l_metacarpal_phalanx_3")
HAnimSite871.name = "l_metacarpal_phalanx_3"
TouchSensor872 = x3d.TouchSensor()
TouchSensor872.description = "HAnimSite 76 l_metacarpal_phalanx_3"

HAnimSite871.children.append(TouchSensor872)
Shape873 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite871.children.append(Shape873)
Billboard874 = x3d.Billboard()
Shape875 = x3d.Shape()
Text876 = x3d.Text()
Text876.string = ["76"]
FontStyle877 = x3d.FontStyle()
FontStyle877.size = 0.035

Text876.fontStyle = FontStyle877

Shape875.geometry = Text876

Billboard874.children.append(Shape875)

HAnimSite871.children.append(Billboard874)

HAnimSegment863.children.append(HAnimSite871)

HAnimJoint862.children.append(HAnimSegment863)
HAnimJoint878 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_3")
HAnimJoint878.name = "l_metacarpophalangeal_3"
HAnimJoint878.center = [0.1987,0.7818,-0.053]
HAnimSegment879 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_3")
HAnimSegment879.name = "l_carpal_proximal_phalanx_3"
Transform880 = x3d.Transform()
Transform880.translation = [0.1987,0.7818,-0.053]
Transform881 = x3d.Transform()
Shape882 = x3d.Shape(USE="HAnimJointShape")

Transform881.children.append(Shape882)

Transform880.children.append(Transform881)

HAnimSegment879.children.append(Transform880)
Shape883 = x3d.Shape()
LineSet884 = x3d.LineSet()
LineSet884.vertexCount = [2]
ColorRGBA885 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet884.color = ColorRGBA885
Coordinate886 = x3d.Coordinate()
Coordinate886.point = [(0.1987, 0.7818, -0.053),(0.2013, 0.7273, -0.0503)]

LineSet884.coord = Coordinate886

Shape883.geometry = LineSet884

HAnimSegment879.children.append(Shape883)

HAnimJoint878.children.append(HAnimSegment879)
HAnimJoint887 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint887.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint887.center = [0.2013,0.7273,-0.0503]
HAnimSegment888 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_3")
HAnimSegment888.name = "l_carpal_middle_phalanx_3"
Transform889 = x3d.Transform()
Transform889.translation = [0.2013,0.7273,-0.0503]
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
Coordinate895.point = [(0.2013, 0.7273, -0.0503),(0.2026, 0.7011, -0.0494)]

LineSet893.coord = Coordinate895

Shape892.geometry = LineSet893

HAnimSegment888.children.append(Shape892)

HAnimJoint887.children.append(HAnimSegment888)
HAnimJoint896 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint896.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint896.center = [0.2026,0.7011,-0.0494]

HAnimJoint887.children.append(HAnimJoint896)

HAnimJoint878.children.append(HAnimJoint887)

HAnimJoint862.children.append(HAnimJoint878)

HAnimJoint776.children.append(HAnimJoint862)
HAnimJoint897 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_4")
HAnimJoint897.name = "l_carpometacarpal_4"
HAnimJoint897.center = [0.1956,0.8019,-0.0794]
HAnimSegment898 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_4")
HAnimSegment898.name = "l_metacarpal_4"
Transform899 = x3d.Transform()
Transform899.translation = [0.1956,0.8019,-0.0794]
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
Coordinate905.point = [(0.1956, 0.8019, -0.0794),(0.1956, 0.7815, -0.0794)]

LineSet903.coord = Coordinate905

Shape902.geometry = LineSet903

HAnimSegment898.children.append(Shape902)

HAnimJoint897.children.append(HAnimSegment898)
HAnimJoint906 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_4")
HAnimJoint906.name = "l_metacarpophalangeal_4"
HAnimJoint906.center = [0.1956,0.7815,-0.0794]
HAnimSegment907 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_4")
HAnimSegment907.name = "l_carpal_proximal_phalanx_4"
Transform908 = x3d.Transform()
Transform908.translation = [0.1956,0.7815,-0.0794]
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
Coordinate914.point = [(0.1956, 0.7815, -0.0794),(0.1973, 0.7287, -0.0777)]

LineSet912.coord = Coordinate914

Shape911.geometry = LineSet912

HAnimSegment907.children.append(Shape911)

HAnimJoint906.children.append(HAnimSegment907)
HAnimJoint915 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint915.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint915.center = [0.1973,0.7287,-0.0777]
HAnimSegment916 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_4")
HAnimSegment916.name = "l_carpal_middle_phalanx_4"
Transform917 = x3d.Transform()
Transform917.translation = [0.1973,0.7287,-0.0777]
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
Coordinate923.point = [(0.1973, 0.7287, -0.0777),(0.1983, 0.7045, -0.0767)]

LineSet921.coord = Coordinate923

Shape920.geometry = LineSet921

HAnimSegment916.children.append(Shape920)

HAnimJoint915.children.append(HAnimSegment916)
HAnimJoint924 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint924.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint924.center = [0.1983,0.7045,-0.0767]

HAnimJoint915.children.append(HAnimJoint924)

HAnimJoint906.children.append(HAnimJoint915)

HAnimJoint897.children.append(HAnimJoint906)

HAnimJoint776.children.append(HAnimJoint897)
HAnimJoint925 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_5")
HAnimJoint925.name = "l_carpometacarpal_5"
HAnimJoint925.center = [0.1925,0.8066,-0.1036]
HAnimSegment926 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_5")
HAnimSegment926.name = "l_metacarpal_5"
Transform927 = x3d.Transform()
Transform927.translation = [0.1925,0.8066,-0.1036]
Transform928 = x3d.Transform()
Shape929 = x3d.Shape(USE="HAnimJointShape")

Transform928.children.append(Shape929)

Transform927.children.append(Transform928)

HAnimSegment926.children.append(Transform927)
Shape930 = x3d.Shape()
LineSet931 = x3d.LineSet()
LineSet931.vertexCount = [2]
ColorRGBA932 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet931.color = ColorRGBA932
Coordinate933 = x3d.Coordinate()
Coordinate933.point = [(0.1925, 0.8066, -0.1036),(0.1925, 0.7866, -0.1036)]

LineSet931.coord = Coordinate933

Shape930.geometry = LineSet931

HAnimSegment926.children.append(Shape930)
HAnimSite934 = x3d.HAnimSite(DEF="hanim_l_metacarpal_phalanx_5")
HAnimSite934.name = "l_metacarpal_phalanx_5"
HAnimSite934.translation = [0.1929,0.786,-0.1122]
TouchSensor935 = x3d.TouchSensor()
TouchSensor935.description = "HAnimSite 77 l_metacarpal_phalanx_5"

HAnimSite934.children.append(TouchSensor935)
Shape936 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite934.children.append(Shape936)
Billboard937 = x3d.Billboard()
Shape938 = x3d.Shape()
Text939 = x3d.Text()
Text939.string = ["77"]
FontStyle940 = x3d.FontStyle()
FontStyle940.size = 0.035

Text939.fontStyle = FontStyle940

Shape938.geometry = Text939

Billboard937.children.append(Shape938)

HAnimSite934.children.append(Billboard937)

HAnimSegment926.children.append(HAnimSite934)

HAnimJoint925.children.append(HAnimSegment926)
HAnimJoint941 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_5")
HAnimJoint941.name = "l_metacarpophalangeal_5"
HAnimJoint941.center = [0.1925,0.7866,-0.1036]
HAnimSegment942 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_5")
HAnimSegment942.name = "l_carpal_proximal_phalanx_5"
Transform943 = x3d.Transform()
Transform943.translation = [0.1925,0.7866,-0.1036]
Transform944 = x3d.Transform()
Shape945 = x3d.Shape(USE="HAnimJointShape")

Transform944.children.append(Shape945)

Transform943.children.append(Transform944)

HAnimSegment942.children.append(Transform943)
Shape946 = x3d.Shape()
LineSet947 = x3d.LineSet()
LineSet947.vertexCount = [2]
ColorRGBA948 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet947.color = ColorRGBA948
Coordinate949 = x3d.Coordinate()
Coordinate949.point = [(0.1925, 0.7866, -0.1036),(0.1938, 0.7452, -0.1024)]

LineSet947.coord = Coordinate949

Shape946.geometry = LineSet947

HAnimSegment942.children.append(Shape946)

HAnimJoint941.children.append(HAnimSegment942)
HAnimJoint950 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint950.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint950.center = [0.1938,0.7452,-0.1024]
HAnimSegment951 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_5")
HAnimSegment951.name = "l_carpal_middle_phalanx_5"
Transform952 = x3d.Transform()
Transform952.translation = [0.1938,0.7452,-0.1024]
Transform953 = x3d.Transform()
Shape954 = x3d.Shape(USE="HAnimJointShape")

Transform953.children.append(Shape954)

Transform952.children.append(Transform953)

HAnimSegment951.children.append(Transform952)
Shape955 = x3d.Shape()
LineSet956 = x3d.LineSet()
LineSet956.vertexCount = [2]
ColorRGBA957 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet956.color = ColorRGBA957
Coordinate958 = x3d.Coordinate()
Coordinate958.point = [(0.1938, 0.7452, -0.1024),(0.1948, 0.7277, -0.1017)]

LineSet956.coord = Coordinate958

Shape955.geometry = LineSet956

HAnimSegment951.children.append(Shape955)

HAnimJoint950.children.append(HAnimSegment951)
HAnimJoint959 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint959.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint959.center = [0.1948,0.7277,-0.1017]

HAnimJoint950.children.append(HAnimJoint959)

HAnimJoint941.children.append(HAnimJoint950)

HAnimJoint925.children.append(HAnimJoint941)

HAnimJoint776.children.append(HAnimJoint925)

HAnimJoint739.children.append(HAnimJoint776)

HAnimJoint716.children.append(HAnimJoint739)

HAnimJoint707.children.append(HAnimJoint716)

HAnimJoint663.children.append(HAnimJoint707)

HAnimJoint592.children.append(HAnimJoint663)
HAnimJoint960 = x3d.HAnimJoint(DEF="hanim_r_sternoclavicular")
HAnimJoint960.name = "r_sternoclavicular"
HAnimJoint960.center = [-0.0694,1.46,-0.033]
HAnimSegment961 = x3d.HAnimSegment(DEF="hanim_r_clavicle")
HAnimSegment961.name = "r_clavicle"
Transform962 = x3d.Transform()
Transform962.translation = [-0.0694,1.46,-0.033]
Transform963 = x3d.Transform()
Shape964 = x3d.Shape(USE="HAnimJointShape")

Transform963.children.append(Shape964)

Transform962.children.append(Transform963)

HAnimSegment961.children.append(Transform962)
Shape965 = x3d.Shape()
LineSet966 = x3d.LineSet()
LineSet966.vertexCount = [2]
ColorRGBA967 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet966.color = ColorRGBA967
Coordinate968 = x3d.Coordinate()
Coordinate968.point = [(-0.0694, 1.46, -0.033),(-0.0836, 1.4281, -0.0401)]

LineSet966.coord = Coordinate968

Shape965.geometry = LineSet966

HAnimSegment961.children.append(Shape965)
HAnimSite969 = x3d.HAnimSite(DEF="hanim_r_acromion")
HAnimSite969.name = "r_acromion"
HAnimSite969.translation = [-0.1905,1.4791,-0.0431]
TouchSensor970 = x3d.TouchSensor()
TouchSensor970.description = "HAnimSite 20 r_acromion"

HAnimSite969.children.append(TouchSensor970)
Shape971 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite969.children.append(Shape971)
Billboard972 = x3d.Billboard()
Shape973 = x3d.Shape()
Text974 = x3d.Text()
Text974.string = ["20"]
FontStyle975 = x3d.FontStyle()
FontStyle975.size = 0.035

Text974.fontStyle = FontStyle975

Shape973.geometry = Text974

Billboard972.children.append(Shape973)

HAnimSite969.children.append(Billboard972)

HAnimSegment961.children.append(HAnimSite969)
HAnimSite976 = x3d.HAnimSite(DEF="hanim_r_axilla_distal")
HAnimSite976.name = "r_axilla_distal"
HAnimSite976.translation = [-0.1603,1.4098,-0.0826]
TouchSensor977 = x3d.TouchSensor()
TouchSensor977.description = "HAnimSite 22 r_axilla_distal"

HAnimSite976.children.append(TouchSensor977)
Shape978 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite976.children.append(Shape978)
Billboard979 = x3d.Billboard()
Shape980 = x3d.Shape()
Text981 = x3d.Text()
Text981.string = ["22"]
FontStyle982 = x3d.FontStyle()
FontStyle982.size = 0.035

Text981.fontStyle = FontStyle982

Shape980.geometry = Text981

Billboard979.children.append(Shape980)

HAnimSite976.children.append(Billboard979)

HAnimSegment961.children.append(HAnimSite976)
HAnimSite983 = x3d.HAnimSite(DEF="hanim_r_axilla_posterior_folds")
HAnimSite983.name = "r_axilla_posterior_folds"
TouchSensor984 = x3d.TouchSensor()
TouchSensor984.description = "HAnimSite 23 r_axilla_posterior_folds"

HAnimSite983.children.append(TouchSensor984)
Shape985 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite983.children.append(Shape985)
Billboard986 = x3d.Billboard()
Shape987 = x3d.Shape()
Text988 = x3d.Text()
Text988.string = ["23"]
FontStyle989 = x3d.FontStyle()
FontStyle989.size = 0.035

Text988.fontStyle = FontStyle989

Shape987.geometry = Text988

Billboard986.children.append(Shape987)

HAnimSite983.children.append(Billboard986)

HAnimSegment961.children.append(HAnimSite983)
HAnimSite990 = x3d.HAnimSite(DEF="hanim_r_axilla_proximal")
HAnimSite990.name = "r_axilla_proximal"
HAnimSite990.translation = [-0.1626,1.4072,-0.0031]
TouchSensor991 = x3d.TouchSensor()
TouchSensor991.description = "HAnimSite 21 r_axilla_proximal"

HAnimSite990.children.append(TouchSensor991)
Shape992 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite990.children.append(Shape992)
Billboard993 = x3d.Billboard()
Shape994 = x3d.Shape()
Text995 = x3d.Text()
Text995.string = ["21"]
FontStyle996 = x3d.FontStyle()
FontStyle996.size = 0.035

Text995.fontStyle = FontStyle996

Shape994.geometry = Text995

Billboard993.children.append(Shape994)

HAnimSite990.children.append(Billboard993)

HAnimSegment961.children.append(HAnimSite990)
HAnimSite997 = x3d.HAnimSite(DEF="hanim_r_clavicale")
HAnimSite997.name = "r_clavicale"
HAnimSite997.translation = [-0.0115,1.4943,0.04]
TouchSensor998 = x3d.TouchSensor()
TouchSensor998.description = "HAnimSite 19 r_clavicale"

HAnimSite997.children.append(TouchSensor998)
Shape999 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite997.children.append(Shape999)
Billboard1000 = x3d.Billboard()
Shape1001 = x3d.Shape()
Text1002 = x3d.Text()
Text1002.string = ["19"]
FontStyle1003 = x3d.FontStyle()
FontStyle1003.size = 0.035

Text1002.fontStyle = FontStyle1003

Shape1001.geometry = Text1002

Billboard1000.children.append(Shape1001)

HAnimSite997.children.append(Billboard1000)

HAnimSegment961.children.append(HAnimSite997)

HAnimJoint960.children.append(HAnimSegment961)
HAnimJoint1004 = x3d.HAnimJoint(DEF="hanim_r_acromioclavicular")
HAnimJoint1004.name = "r_acromioclavicular"
HAnimJoint1004.center = [-0.0836,1.4281,-0.0401]
HAnimSegment1005 = x3d.HAnimSegment(DEF="hanim_r_scapula")
HAnimSegment1005.name = "r_scapula"
Transform1006 = x3d.Transform()
Transform1006.translation = [-0.0836,1.4281,-0.0401]
Transform1007 = x3d.Transform()
Shape1008 = x3d.Shape(USE="HAnimJointShape")

Transform1007.children.append(Shape1008)

Transform1006.children.append(Transform1007)

HAnimSegment1005.children.append(Transform1006)
Shape1009 = x3d.Shape()
LineSet1010 = x3d.LineSet()
LineSet1010.vertexCount = [2]
ColorRGBA1011 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1010.color = ColorRGBA1011
Coordinate1012 = x3d.Coordinate()
Coordinate1012.point = [(-0.0836, 1.4281, -0.0401),(-0.1907, 1.4407, -0.0325)]

LineSet1010.coord = Coordinate1012

Shape1009.geometry = LineSet1010

HAnimSegment1005.children.append(Shape1009)

HAnimJoint1004.children.append(HAnimSegment1005)
HAnimJoint1013 = x3d.HAnimJoint(DEF="hanim_r_shoulder")
HAnimJoint1013.name = "r_shoulder"
HAnimJoint1013.center = [-0.1907,1.4407,-0.0325]
HAnimSegment1014 = x3d.HAnimSegment(DEF="hanim_r_upperarm")
HAnimSegment1014.name = "r_upperarm"
Transform1015 = x3d.Transform()
Transform1015.translation = [-0.1907,1.4407,-0.0325]
Transform1016 = x3d.Transform()
Shape1017 = x3d.Shape(USE="HAnimJointShape")

Transform1016.children.append(Shape1017)

Transform1015.children.append(Transform1016)

HAnimSegment1014.children.append(Transform1015)
Shape1018 = x3d.Shape()
LineSet1019 = x3d.LineSet()
LineSet1019.vertexCount = [2]
ColorRGBA1020 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1019.color = ColorRGBA1020
Coordinate1021 = x3d.Coordinate()
Coordinate1021.point = [(-0.1907, 1.4407, -0.0325),(-0.1949, 1.1388, -0.062)]

LineSet1019.coord = Coordinate1021

Shape1018.geometry = LineSet1019

HAnimSegment1014.children.append(Shape1018)
HAnimSite1022 = x3d.HAnimSite(DEF="hanim_r_bideltoid")
HAnimSite1022.name = "r_bideltoid"
TouchSensor1023 = x3d.TouchSensor()
TouchSensor1023.description = "HAnimSite 97 r_bideltoid"

HAnimSite1022.children.append(TouchSensor1023)
Shape1024 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1022.children.append(Shape1024)
Billboard1025 = x3d.Billboard()
Shape1026 = x3d.Shape()
Text1027 = x3d.Text()
Text1027.string = ["97"]
FontStyle1028 = x3d.FontStyle()
FontStyle1028.size = 0.035

Text1027.fontStyle = FontStyle1028

Shape1026.geometry = Text1027

Billboard1025.children.append(Shape1026)

HAnimSite1022.children.append(Billboard1025)

HAnimSegment1014.children.append(HAnimSite1022)
HAnimSite1029 = x3d.HAnimSite(DEF="hanim_r_humeral_lateral_epicondyles")
HAnimSite1029.name = "r_humeral_lateral_epicondyles"
HAnimSite1029.translation = [-0.2224,1.1517,-0.1033]
TouchSensor1030 = x3d.TouchSensor()
TouchSensor1030.description = "HAnimSite 66 r_humeral_lateral_epicondyles"

HAnimSite1029.children.append(TouchSensor1030)
Shape1031 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1029.children.append(Shape1031)
Billboard1032 = x3d.Billboard()
Shape1033 = x3d.Shape()
Text1034 = x3d.Text()
Text1034.string = ["66"]
FontStyle1035 = x3d.FontStyle()
FontStyle1035.size = 0.035

Text1034.fontStyle = FontStyle1035

Shape1033.geometry = Text1034

Billboard1032.children.append(Shape1033)

HAnimSite1029.children.append(Billboard1032)

HAnimSegment1014.children.append(HAnimSite1029)

HAnimJoint1013.children.append(HAnimSegment1014)
HAnimJoint1036 = x3d.HAnimJoint(DEF="hanim_r_elbow")
HAnimJoint1036.name = "r_elbow"
HAnimJoint1036.center = [-0.1949,1.1388,-0.062]
HAnimSegment1037 = x3d.HAnimSegment(DEF="hanim_r_forearm")
HAnimSegment1037.name = "r_forearm"
Transform1038 = x3d.Transform()
Transform1038.translation = [-0.1949,1.1388,-0.062]
Transform1039 = x3d.Transform()
Shape1040 = x3d.Shape(USE="HAnimJointShape")

Transform1039.children.append(Shape1040)

Transform1038.children.append(Transform1039)

HAnimSegment1037.children.append(Transform1038)
Shape1041 = x3d.Shape()
LineSet1042 = x3d.LineSet()
LineSet1042.vertexCount = [2]
ColorRGBA1043 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1042.color = ColorRGBA1043
Coordinate1044 = x3d.Coordinate()
Coordinate1044.point = [(-0.1949, 1.1388, -0.062),(-0.1959, 0.8694, -0.0521)]

LineSet1042.coord = Coordinate1044

Shape1041.geometry = LineSet1042

HAnimSegment1037.children.append(Shape1041)
HAnimSite1045 = x3d.HAnimSite(DEF="hanim_r_humeral_medial_epicondyles")
HAnimSite1045.name = "r_humeral_medial_epicondyles"
HAnimSite1045.translation = [-0.168,1.1298,-0.1062]
TouchSensor1046 = x3d.TouchSensor()
TouchSensor1046.description = "HAnimSite 67 r_humeral_medial_epicondyles"

HAnimSite1045.children.append(TouchSensor1046)
Shape1047 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1045.children.append(Shape1047)
Billboard1048 = x3d.Billboard()
Shape1049 = x3d.Shape()
Text1050 = x3d.Text()
Text1050.string = ["67"]
FontStyle1051 = x3d.FontStyle()
FontStyle1051.size = 0.035

Text1050.fontStyle = FontStyle1051

Shape1049.geometry = Text1050

Billboard1048.children.append(Shape1049)

HAnimSite1045.children.append(Billboard1048)

HAnimSegment1037.children.append(HAnimSite1045)
HAnimSite1052 = x3d.HAnimSite(DEF="hanim_r_olecranon")
HAnimSite1052.name = "r_olecranon"
HAnimSite1052.translation = [-0.1907,1.1405,-0.1065]
TouchSensor1053 = x3d.TouchSensor()
TouchSensor1053.description = "HAnimSite 68 r_olecranon"

HAnimSite1052.children.append(TouchSensor1053)
Shape1054 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1052.children.append(Shape1054)
Billboard1055 = x3d.Billboard()
Shape1056 = x3d.Shape()
Text1057 = x3d.Text()
Text1057.string = ["68"]
FontStyle1058 = x3d.FontStyle()
FontStyle1058.size = 0.035

Text1057.fontStyle = FontStyle1058

Shape1056.geometry = Text1057

Billboard1055.children.append(Shape1056)

HAnimSite1052.children.append(Billboard1055)

HAnimSegment1037.children.append(HAnimSite1052)
HAnimSite1059 = x3d.HAnimSite(DEF="hanim_r_radial_styloid")
HAnimSite1059.name = "r_radial_styloid"
HAnimSite1059.translation = [-0.1884,0.8676,-0.036]
TouchSensor1060 = x3d.TouchSensor()
TouchSensor1060.description = "HAnimSite 74 r_radial_styloid"

HAnimSite1059.children.append(TouchSensor1060)
Shape1061 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1059.children.append(Shape1061)
Billboard1062 = x3d.Billboard()
Shape1063 = x3d.Shape()
Text1064 = x3d.Text()
Text1064.string = ["74"]
FontStyle1065 = x3d.FontStyle()
FontStyle1065.size = 0.035

Text1064.fontStyle = FontStyle1065

Shape1063.geometry = Text1064

Billboard1062.children.append(Shape1063)

HAnimSite1059.children.append(Billboard1062)

HAnimSegment1037.children.append(HAnimSite1059)
HAnimSite1066 = x3d.HAnimSite(DEF="hanim_r_radiale")
HAnimSite1066.name = "r_radiale"
HAnimSite1066.translation = [-0.213,1.1305,-0.1091]
TouchSensor1067 = x3d.TouchSensor()
TouchSensor1067.description = "HAnimSite 72 r_radiale"

HAnimSite1066.children.append(TouchSensor1067)
Shape1068 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1066.children.append(Shape1068)
Billboard1069 = x3d.Billboard()
Shape1070 = x3d.Shape()
Text1071 = x3d.Text()
Text1071.string = ["72"]
FontStyle1072 = x3d.FontStyle()
FontStyle1072.size = 0.035

Text1071.fontStyle = FontStyle1072

Shape1070.geometry = Text1071

Billboard1069.children.append(Shape1070)

HAnimSite1066.children.append(Billboard1069)

HAnimSegment1037.children.append(HAnimSite1066)

HAnimJoint1036.children.append(HAnimSegment1037)
HAnimJoint1073 = x3d.HAnimJoint(DEF="hanim_r_radiocarpal")
HAnimJoint1073.name = "r_radiocarpal"
HAnimJoint1073.center = [-0.1959,0.8694,-0.0521]
HAnimSegment1074 = x3d.HAnimSegment(DEF="hanim_r_carpal")
HAnimSegment1074.name = "r_carpal"
Transform1075 = x3d.Transform()
Transform1075.translation = [-0.2,0.85,-0.05]
Transform1075.rotation = [0,0,1,-3.14]
Transform1075.scale = [0.2,0.2,0.2]
Transform1076 = x3d.Transform()
Transform1076.rotation = [0,1,0,1.57]
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
Coordinate1081.point = [(-0.1959, 0.8694, -0.0521),(-0.1899, 0.8502, -0.0473)]

LineSet1079.coord = Coordinate1081

Shape1078.geometry = LineSet1079

HAnimSegment1074.children.append(Shape1078)
HAnimSite1082 = x3d.HAnimSite(DEF="hanim_r_ulnar_styloid")
HAnimSite1082.name = "r_ulnar_styloid"
HAnimSite1082.translation = [-0.2117,0.8562,-0.0584]
TouchSensor1083 = x3d.TouchSensor()
TouchSensor1083.description = "HAnimSite 73 r_ulnar_styloid"

HAnimSite1082.children.append(TouchSensor1083)
Shape1084 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1082.children.append(Shape1084)
Billboard1085 = x3d.Billboard()
Shape1086 = x3d.Shape()
Text1087 = x3d.Text()
Text1087.string = ["73"]
FontStyle1088 = x3d.FontStyle()
FontStyle1088.size = 0.035

Text1087.fontStyle = FontStyle1088

Shape1086.geometry = Text1087

Billboard1085.children.append(Shape1086)

HAnimSite1082.children.append(Billboard1085)

HAnimSegment1074.children.append(HAnimSite1082)
Shape1089 = x3d.Shape()
LineSet1090 = x3d.LineSet()
LineSet1090.vertexCount = [2]
ColorRGBA1091 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1090.color = ColorRGBA1091
Coordinate1092 = x3d.Coordinate()
Coordinate1092.point = [(-0.1959, 0.8694, -0.0521),(-0.1961, 0.8055, -0.0218)]

LineSet1090.coord = Coordinate1092

Shape1089.geometry = LineSet1090

HAnimSegment1074.children.append(Shape1089)
Shape1093 = x3d.Shape()
LineSet1094 = x3d.LineSet()
LineSet1094.vertexCount = [2]
ColorRGBA1095 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1094.color = ColorRGBA1095
Coordinate1096 = x3d.Coordinate()
Coordinate1096.point = [(-0.1959, 0.8694, -0.0521),(-0.1972, 0.806, -0.0468)]

LineSet1094.coord = Coordinate1096

Shape1093.geometry = LineSet1094

HAnimSegment1074.children.append(Shape1093)
Shape1097 = x3d.Shape()
LineSet1098 = x3d.LineSet()
LineSet1098.vertexCount = [2]
ColorRGBA1099 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1098.color = ColorRGBA1099
Coordinate1100 = x3d.Coordinate()
Coordinate1100.point = [(-0.1959, 0.8694, -0.0521),(-0.1951, 0.8049, -0.0732)]

LineSet1098.coord = Coordinate1100

Shape1097.geometry = LineSet1098

HAnimSegment1074.children.append(Shape1097)
Shape1101 = x3d.Shape()
LineSet1102 = x3d.LineSet()
LineSet1102.vertexCount = [2]
ColorRGBA1103 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1102.color = ColorRGBA1103
Coordinate1104 = x3d.Coordinate()
Coordinate1104.point = [(-0.1959, 0.8694, -0.0521),(-0.1926, 0.8096, -0.0975)]

LineSet1102.coord = Coordinate1104

Shape1101.geometry = LineSet1102

HAnimSegment1074.children.append(Shape1101)

HAnimJoint1073.children.append(HAnimSegment1074)
HAnimJoint1105 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_1")
HAnimJoint1105.name = "r_carpometacarpal_1"
HAnimJoint1105.center = [-0.1899,0.8502,-0.0473]
HAnimSegment1106 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_1")
HAnimSegment1106.name = "r_metacarpal_1"
Transform1107 = x3d.Transform()
Transform1107.translation = [-0.1899,0.8502,-0.0473]
Transform1108 = x3d.Transform()
Shape1109 = x3d.Shape(USE="HAnimJointShape")

Transform1108.children.append(Shape1109)

Transform1107.children.append(Transform1108)

HAnimSegment1106.children.append(Transform1107)
Shape1110 = x3d.Shape()
LineSet1111 = x3d.LineSet()
LineSet1111.vertexCount = [2]
ColorRGBA1112 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1111.color = ColorRGBA1112
Coordinate1113 = x3d.Coordinate()
Coordinate1113.point = [(-0.1899, 0.8502, -0.0473),(-0.1874, 0.8256, 0.0306)]

LineSet1111.coord = Coordinate1113

Shape1110.geometry = LineSet1111

HAnimSegment1106.children.append(Shape1110)

HAnimJoint1105.children.append(HAnimSegment1106)
HAnimJoint1114 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_1")
HAnimJoint1114.name = "r_metacarpophalangeal_1"
HAnimJoint1114.center = [-0.1874,0.8256,0.0306]
HAnimSegment1115 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_1")
HAnimSegment1115.name = "r_carpal_proximal_phalanx_1"
Transform1116 = x3d.Transform()
Transform1116.translation = [-0.1874,0.8256,0.0306]
Transform1117 = x3d.Transform()
Shape1118 = x3d.Shape(USE="HAnimJointShape")

Transform1117.children.append(Shape1118)

Transform1116.children.append(Transform1117)

HAnimSegment1115.children.append(Transform1116)
Shape1119 = x3d.Shape()
LineSet1120 = x3d.LineSet()
LineSet1120.vertexCount = [2]
ColorRGBA1121 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1120.color = ColorRGBA1121
Coordinate1122 = x3d.Coordinate()
Coordinate1122.point = [(-0.1874, 0.8256, 0.0306),(-0.1864, 0.819, 0.0506)]

LineSet1120.coord = Coordinate1122

Shape1119.geometry = LineSet1120

HAnimSegment1115.children.append(Shape1119)

HAnimJoint1114.children.append(HAnimSegment1115)
HAnimJoint1123 = x3d.HAnimJoint(DEF="hanim_r_carpal_interphalangeal_1")
HAnimJoint1123.name = "r_carpal_interphalangeal_1"
HAnimJoint1123.center = [-0.1864,0.819,0.0506]

HAnimJoint1114.children.append(HAnimJoint1123)

HAnimJoint1105.children.append(HAnimJoint1114)

HAnimJoint1073.children.append(HAnimJoint1105)
HAnimJoint1124 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_2")
HAnimJoint1124.name = "r_carpometacarpal_2"
HAnimJoint1124.center = [-0.1961,0.8055,-0.0218]
HAnimSegment1125 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_2")
HAnimSegment1125.name = "r_metacarpal_2"
Transform1126 = x3d.Transform()
Transform1126.translation = [-0.1961,0.8055,-0.0218]
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
Coordinate1132.point = [(-0.1961, 0.8055, -0.0218),(-0.1961, 0.7846, -0.0218)]

LineSet1130.coord = Coordinate1132

Shape1129.geometry = LineSet1130

HAnimSegment1125.children.append(Shape1129)
HAnimSite1133 = x3d.HAnimSite(DEF="hanim_r_metacarpal_phalanx_2")
HAnimSite1133.name = "r_metacarpal_phalanx_2"
HAnimSite1133.translation = [-0.1977,0.8169,-0.0177]
TouchSensor1134 = x3d.TouchSensor()
TouchSensor1134.description = "HAnimSite 78 r_metacarpal_phalanx_2"

HAnimSite1133.children.append(TouchSensor1134)
Shape1135 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1133.children.append(Shape1135)
Billboard1136 = x3d.Billboard()
Shape1137 = x3d.Shape()
Text1138 = x3d.Text()
Text1138.string = ["78"]
FontStyle1139 = x3d.FontStyle()
FontStyle1139.size = 0.035

Text1138.fontStyle = FontStyle1139

Shape1137.geometry = Text1138

Billboard1136.children.append(Shape1137)

HAnimSite1133.children.append(Billboard1136)

HAnimSegment1125.children.append(HAnimSite1133)

HAnimJoint1124.children.append(HAnimSegment1125)
HAnimJoint1140 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_2")
HAnimJoint1140.name = "r_metacarpophalangeal_2"
HAnimJoint1140.center = [-0.1961,0.7846,-0.0218]
HAnimSegment1141 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_2")
HAnimSegment1141.name = "r_carpal_proximal_phalanx_2"
Transform1142 = x3d.Transform()
Transform1142.translation = [-0.1961,0.7846,-0.0218]
Transform1143 = x3d.Transform()
Shape1144 = x3d.Shape(USE="HAnimJointShape")

Transform1143.children.append(Shape1144)

Transform1142.children.append(Transform1143)

HAnimSegment1141.children.append(Transform1142)
Shape1145 = x3d.Shape()
LineSet1146 = x3d.LineSet()
LineSet1146.vertexCount = [2]
ColorRGBA1147 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1146.color = ColorRGBA1147
Coordinate1148 = x3d.Coordinate()
Coordinate1148.point = [(-0.1961, 0.7846, -0.0218),(-0.1954, 0.7393, -0.0185)]

LineSet1146.coord = Coordinate1148

Shape1145.geometry = LineSet1146

HAnimSegment1141.children.append(Shape1145)

HAnimJoint1140.children.append(HAnimSegment1141)
HAnimJoint1149 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint1149.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint1149.center = [-0.1954,0.7393,-0.0185]
HAnimSegment1150 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_2")
HAnimSegment1150.name = "r_carpal_middle_phalanx_2"
Transform1151 = x3d.Transform()
Transform1151.translation = [-0.1954,0.7393,-0.0185]
Transform1152 = x3d.Transform()
Shape1153 = x3d.Shape(USE="HAnimJointShape")

Transform1152.children.append(Shape1153)

Transform1151.children.append(Transform1152)

HAnimSegment1150.children.append(Transform1151)
Shape1154 = x3d.Shape()
LineSet1155 = x3d.LineSet()
LineSet1155.vertexCount = [2]
ColorRGBA1156 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1155.color = ColorRGBA1156
Coordinate1157 = x3d.Coordinate()
Coordinate1157.point = [(-0.1954, 0.7393, -0.0185),(-0.1945, 0.7169, -0.0173)]

LineSet1155.coord = Coordinate1157

Shape1154.geometry = LineSet1155

HAnimSegment1150.children.append(Shape1154)

HAnimJoint1149.children.append(HAnimSegment1150)
HAnimJoint1158 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint1158.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint1158.center = [-0.1945,0.7169,-0.0173]

HAnimJoint1149.children.append(HAnimJoint1158)

HAnimJoint1140.children.append(HAnimJoint1149)

HAnimJoint1124.children.append(HAnimJoint1140)

HAnimJoint1073.children.append(HAnimJoint1124)
HAnimJoint1159 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_3")
HAnimJoint1159.name = "r_carpometacarpal_3"
HAnimJoint1159.center = [-0.1972,0.806,-0.0468]
HAnimSegment1160 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_3")
HAnimSegment1160.name = "r_metacarpal_3"
Transform1161 = x3d.Transform()
Transform1161.translation = [-0.1972,0.806,-0.0468]
Transform1162 = x3d.Transform()
Shape1163 = x3d.Shape(USE="HAnimJointShape")

Transform1162.children.append(Shape1163)

Transform1161.children.append(Transform1162)

HAnimSegment1160.children.append(Transform1161)
Shape1164 = x3d.Shape()
LineSet1165 = x3d.LineSet()
LineSet1165.vertexCount = [2]
ColorRGBA1166 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1165.color = ColorRGBA1166
Coordinate1167 = x3d.Coordinate()
Coordinate1167.point = [(-0.1972, 0.806, -0.0468),(-0.1972, 0.7849, -0.0468)]

LineSet1165.coord = Coordinate1167

Shape1164.geometry = LineSet1165

HAnimSegment1160.children.append(Shape1164)
HAnimSite1168 = x3d.HAnimSite(DEF="hanim_r_metacarpal_phalanx_3")
HAnimSite1168.name = "r_metacarpal_phalanx_3"
TouchSensor1169 = x3d.TouchSensor()
TouchSensor1169.description = "HAnimSite 79 r_metacarpal_phalanx_3"

HAnimSite1168.children.append(TouchSensor1169)
Shape1170 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1168.children.append(Shape1170)
Billboard1171 = x3d.Billboard()
Shape1172 = x3d.Shape()
Text1173 = x3d.Text()
Text1173.string = ["79"]
FontStyle1174 = x3d.FontStyle()
FontStyle1174.size = 0.035

Text1173.fontStyle = FontStyle1174

Shape1172.geometry = Text1173

Billboard1171.children.append(Shape1172)

HAnimSite1168.children.append(Billboard1171)

HAnimSegment1160.children.append(HAnimSite1168)

HAnimJoint1159.children.append(HAnimSegment1160)
HAnimJoint1175 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_3")
HAnimJoint1175.name = "r_metacarpophalangeal_3"
HAnimJoint1175.center = [-0.1972,0.7849,-0.0468]
HAnimSegment1176 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_3")
HAnimSegment1176.name = "r_carpal_proximal_phalanx_3"
Transform1177 = x3d.Transform()
Transform1177.translation = [-0.1972,0.7849,-0.0468]
Transform1178 = x3d.Transform()
Shape1179 = x3d.Shape(USE="HAnimJointShape")

Transform1178.children.append(Shape1179)

Transform1177.children.append(Transform1178)

HAnimSegment1176.children.append(Transform1177)
Shape1180 = x3d.Shape()
LineSet1181 = x3d.LineSet()
LineSet1181.vertexCount = [2]
ColorRGBA1182 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1181.color = ColorRGBA1182
Coordinate1183 = x3d.Coordinate()
Coordinate1183.point = [(-0.1972, 0.7849, -0.0468),(-0.195, 0.7304, -0.0441)]

LineSet1181.coord = Coordinate1183

Shape1180.geometry = LineSet1181

HAnimSegment1176.children.append(Shape1180)

HAnimJoint1175.children.append(HAnimSegment1176)
HAnimJoint1184 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint1184.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint1184.center = [-0.195,0.7304,-0.0441]
HAnimSegment1185 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_3")
HAnimSegment1185.name = "r_carpal_middle_phalanx_3"
Transform1186 = x3d.Transform()
Transform1186.translation = [-0.195,0.7304,-0.0441]
Transform1187 = x3d.Transform()
Shape1188 = x3d.Shape(USE="HAnimJointShape")

Transform1187.children.append(Shape1188)

Transform1186.children.append(Transform1187)

HAnimSegment1185.children.append(Transform1186)
Shape1189 = x3d.Shape()
LineSet1190 = x3d.LineSet()
LineSet1190.vertexCount = [2]
ColorRGBA1191 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1190.color = ColorRGBA1191
Coordinate1192 = x3d.Coordinate()
Coordinate1192.point = [(-0.195, 0.7304, -0.0441),(-0.1939, 0.7042, -0.0432)]

LineSet1190.coord = Coordinate1192

Shape1189.geometry = LineSet1190

HAnimSegment1185.children.append(Shape1189)

HAnimJoint1184.children.append(HAnimSegment1185)
HAnimJoint1193 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint1193.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint1193.center = [-0.1939,0.7042,-0.0432]

HAnimJoint1184.children.append(HAnimJoint1193)

HAnimJoint1175.children.append(HAnimJoint1184)

HAnimJoint1159.children.append(HAnimJoint1175)

HAnimJoint1073.children.append(HAnimJoint1159)
HAnimJoint1194 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_4")
HAnimJoint1194.name = "r_carpometacarpal_4"
HAnimJoint1194.center = [-0.1951,0.8049,-0.0732]
HAnimSegment1195 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_4")
HAnimSegment1195.name = "r_metacarpal_4"
Transform1196 = x3d.Transform()
Transform1196.translation = [-0.1951,0.8049,-0.0732]
Transform1197 = x3d.Transform()
Shape1198 = x3d.Shape(USE="HAnimJointShape")

Transform1197.children.append(Shape1198)

Transform1196.children.append(Transform1197)

HAnimSegment1195.children.append(Transform1196)
Shape1199 = x3d.Shape()
LineSet1200 = x3d.LineSet()
LineSet1200.vertexCount = [2]
ColorRGBA1201 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1200.color = ColorRGBA1201
Coordinate1202 = x3d.Coordinate()
Coordinate1202.point = [(-0.1951, 0.8049, -0.0732),(-0.1951, 0.7845, -0.0732)]

LineSet1200.coord = Coordinate1202

Shape1199.geometry = LineSet1200

HAnimSegment1195.children.append(Shape1199)

HAnimJoint1194.children.append(HAnimSegment1195)
HAnimJoint1203 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_4")
HAnimJoint1203.name = "r_metacarpophalangeal_4"
HAnimJoint1203.center = [-0.1951,0.7845,-0.0732]
HAnimSegment1204 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_4")
HAnimSegment1204.name = "r_carpal_proximal_phalanx_4"
Transform1205 = x3d.Transform()
Transform1205.translation = [-0.1951,0.7845,-0.0732]
Transform1206 = x3d.Transform()
Shape1207 = x3d.Shape(USE="HAnimJointShape")

Transform1206.children.append(Shape1207)

Transform1205.children.append(Transform1206)

HAnimSegment1204.children.append(Transform1205)
Shape1208 = x3d.Shape()
LineSet1209 = x3d.LineSet()
LineSet1209.vertexCount = [2]
ColorRGBA1210 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1209.color = ColorRGBA1210
Coordinate1211 = x3d.Coordinate()
Coordinate1211.point = [(-0.1951, 0.7845, -0.0732),(-0.192, 0.7318, -0.0716)]

LineSet1209.coord = Coordinate1211

Shape1208.geometry = LineSet1209

HAnimSegment1204.children.append(Shape1208)

HAnimJoint1203.children.append(HAnimSegment1204)
HAnimJoint1212 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint1212.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint1212.center = [-0.192,0.7318,-0.0716]
HAnimSegment1213 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_4")
HAnimSegment1213.name = "r_carpal_middle_phalanx_4"
Transform1214 = x3d.Transform()
Transform1214.translation = [-0.192,0.7318,-0.0716]
Transform1215 = x3d.Transform()
Shape1216 = x3d.Shape(USE="HAnimJointShape")

Transform1215.children.append(Shape1216)

Transform1214.children.append(Transform1215)

HAnimSegment1213.children.append(Transform1214)
Shape1217 = x3d.Shape()
LineSet1218 = x3d.LineSet()
LineSet1218.vertexCount = [2]
ColorRGBA1219 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1218.color = ColorRGBA1219
Coordinate1220 = x3d.Coordinate()
Coordinate1220.point = [(-0.192, 0.7318, -0.0716),(-0.1908, 0.7077, -0.0706)]

LineSet1218.coord = Coordinate1220

Shape1217.geometry = LineSet1218

HAnimSegment1213.children.append(Shape1217)

HAnimJoint1212.children.append(HAnimSegment1213)
HAnimJoint1221 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint1221.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint1221.center = [-0.1908,0.7077,-0.0706]

HAnimJoint1212.children.append(HAnimJoint1221)

HAnimJoint1203.children.append(HAnimJoint1212)

HAnimJoint1194.children.append(HAnimJoint1203)

HAnimJoint1073.children.append(HAnimJoint1194)
HAnimJoint1222 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_5")
HAnimJoint1222.name = "r_carpometacarpal_5"
HAnimJoint1222.center = [-0.1926,0.8096,-0.0975]
HAnimSegment1223 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_5")
HAnimSegment1223.name = "r_metacarpal_5"
Transform1224 = x3d.Transform()
Transform1224.translation = [-0.1926,0.8096,-0.0975]
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
Coordinate1230.point = [(-0.1926, 0.8096, -0.0975),(-0.1926, 0.7896, -0.0975)]

LineSet1228.coord = Coordinate1230

Shape1227.geometry = LineSet1228

HAnimSegment1223.children.append(Shape1227)
HAnimSite1231 = x3d.HAnimSite(DEF="hanim_r_metacarpal_phalanx_5")
HAnimSite1231.name = "r_metacarpal_phalanx_5"
HAnimSite1231.translation = [-0.1929,0.789,-0.1064]
TouchSensor1232 = x3d.TouchSensor()
TouchSensor1232.description = "HAnimSite 80 r_metacarpal_phalanx_5"

HAnimSite1231.children.append(TouchSensor1232)
Shape1233 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1231.children.append(Shape1233)
Billboard1234 = x3d.Billboard()
Shape1235 = x3d.Shape()
Text1236 = x3d.Text()
Text1236.string = ["80"]
FontStyle1237 = x3d.FontStyle()
FontStyle1237.size = 0.035

Text1236.fontStyle = FontStyle1237

Shape1235.geometry = Text1236

Billboard1234.children.append(Shape1235)

HAnimSite1231.children.append(Billboard1234)

HAnimSegment1223.children.append(HAnimSite1231)

HAnimJoint1222.children.append(HAnimSegment1223)
HAnimJoint1238 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_5")
HAnimJoint1238.name = "r_metacarpophalangeal_5"
HAnimJoint1238.center = [-0.1926,0.7896,-0.0975]
HAnimSegment1239 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_5")
HAnimSegment1239.name = "r_carpal_proximal_phalanx_5"
Transform1240 = x3d.Transform()
Transform1240.translation = [-0.1926,0.7896,-0.0975]
Transform1241 = x3d.Transform()
Shape1242 = x3d.Shape(USE="HAnimJointShape")

Transform1241.children.append(Shape1242)

Transform1240.children.append(Transform1241)

HAnimSegment1239.children.append(Transform1240)
Shape1243 = x3d.Shape()
LineSet1244 = x3d.LineSet()
LineSet1244.vertexCount = [2]
ColorRGBA1245 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1244.color = ColorRGBA1245
Coordinate1246 = x3d.Coordinate()
Coordinate1246.point = [(-0.1926, 0.7896, -0.0975),(-0.1902, 0.7483, -0.0963)]

LineSet1244.coord = Coordinate1246

Shape1243.geometry = LineSet1244

HAnimSegment1239.children.append(Shape1243)

HAnimJoint1238.children.append(HAnimSegment1239)
HAnimJoint1247 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint1247.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint1247.center = [-0.1902,0.7483,-0.0963]
HAnimSegment1248 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_5")
HAnimSegment1248.name = "r_carpal_middle_phalanx_5"
Transform1249 = x3d.Transform()
Transform1249.translation = [-0.1902,0.7483,-0.0963]
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
Coordinate1255.point = [(-0.1902, 0.7483, -0.0963),(-0.1908, 0.754, -0.096)]

LineSet1253.coord = Coordinate1255

Shape1252.geometry = LineSet1253

HAnimSegment1248.children.append(Shape1252)

HAnimJoint1247.children.append(HAnimSegment1248)
HAnimJoint1256 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint1256.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint1256.center = [-0.1908,0.754,-0.096]

HAnimJoint1247.children.append(HAnimJoint1256)

HAnimJoint1238.children.append(HAnimJoint1247)

HAnimJoint1222.children.append(HAnimJoint1238)

HAnimJoint1073.children.append(HAnimJoint1222)

HAnimJoint1036.children.append(HAnimJoint1073)

HAnimJoint1013.children.append(HAnimJoint1036)

HAnimJoint1004.children.append(HAnimJoint1013)

HAnimJoint960.children.append(HAnimJoint1004)

HAnimJoint592.children.append(HAnimJoint960)

HAnimJoint555.children.append(HAnimJoint592)

HAnimJoint525.children.append(HAnimJoint555)

HAnimJoint516.children.append(HAnimJoint525)

HAnimJoint479.children.append(HAnimJoint516)

HAnimJoint449.children.append(HAnimJoint479)

HAnimJoint37.children.append(HAnimJoint449)

HAnimHumanoid36.skeleton.append(HAnimJoint37)
HAnimJoint1257 = x3d.HAnimJoint(USE="hanim_humanoid_root")

HAnimHumanoid36.joints.append(HAnimJoint1257)
HAnimJoint1258 = x3d.HAnimJoint(USE="hanim_sacroiliac")

HAnimHumanoid36.joints.append(HAnimJoint1258)
HAnimJoint1259 = x3d.HAnimJoint(USE="hanim_l_hip")

HAnimHumanoid36.joints.append(HAnimJoint1259)
HAnimJoint1260 = x3d.HAnimJoint(USE="hanim_l_knee")

HAnimHumanoid36.joints.append(HAnimJoint1260)
HAnimJoint1261 = x3d.HAnimJoint(USE="hanim_l_talocrural")

HAnimHumanoid36.joints.append(HAnimJoint1261)
HAnimJoint1262 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_2")

HAnimHumanoid36.joints.append(HAnimJoint1262)
HAnimJoint1263 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1263)
HAnimJoint1264 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1264)
HAnimJoint1265 = x3d.HAnimJoint(USE="hanim_r_hip")

HAnimHumanoid36.joints.append(HAnimJoint1265)
HAnimJoint1266 = x3d.HAnimJoint(USE="hanim_r_knee")

HAnimHumanoid36.joints.append(HAnimJoint1266)
HAnimJoint1267 = x3d.HAnimJoint(USE="hanim_r_talocrural")

HAnimHumanoid36.joints.append(HAnimJoint1267)
HAnimJoint1268 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_2")

HAnimHumanoid36.joints.append(HAnimJoint1268)
HAnimJoint1269 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1269)
HAnimJoint1270 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1270)
HAnimJoint1271 = x3d.HAnimJoint(USE="hanim_vl5")

HAnimHumanoid36.joints.append(HAnimJoint1271)
HAnimJoint1272 = x3d.HAnimJoint(USE="hanim_vl3")

HAnimHumanoid36.joints.append(HAnimJoint1272)
HAnimJoint1273 = x3d.HAnimJoint(USE="hanim_vl1")

HAnimHumanoid36.joints.append(HAnimJoint1273)
HAnimJoint1274 = x3d.HAnimJoint(USE="hanim_vt10")

HAnimHumanoid36.joints.append(HAnimJoint1274)
HAnimJoint1275 = x3d.HAnimJoint(USE="hanim_vt6")

HAnimHumanoid36.joints.append(HAnimJoint1275)
HAnimJoint1276 = x3d.HAnimJoint(USE="hanim_vt1")

HAnimHumanoid36.joints.append(HAnimJoint1276)
HAnimJoint1277 = x3d.HAnimJoint(USE="hanim_vc4")

HAnimHumanoid36.joints.append(HAnimJoint1277)
HAnimJoint1278 = x3d.HAnimJoint(USE="hanim_vc2")

HAnimHumanoid36.joints.append(HAnimJoint1278)
HAnimJoint1279 = x3d.HAnimJoint(USE="hanim_skullbase")

HAnimHumanoid36.joints.append(HAnimJoint1279)
HAnimJoint1280 = x3d.HAnimJoint(USE="hanim_l_sternoclavicular")

HAnimHumanoid36.joints.append(HAnimJoint1280)
HAnimJoint1281 = x3d.HAnimJoint(USE="hanim_l_acromioclavicular")

HAnimHumanoid36.joints.append(HAnimJoint1281)
HAnimJoint1282 = x3d.HAnimJoint(USE="hanim_l_shoulder")

HAnimHumanoid36.joints.append(HAnimJoint1282)
HAnimJoint1283 = x3d.HAnimJoint(USE="hanim_l_elbow")

HAnimHumanoid36.joints.append(HAnimJoint1283)
HAnimJoint1284 = x3d.HAnimJoint(USE="hanim_l_radiocarpal")

HAnimHumanoid36.joints.append(HAnimJoint1284)
HAnimJoint1285 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_1")

HAnimHumanoid36.joints.append(HAnimJoint1285)
HAnimJoint1286 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_1")

HAnimHumanoid36.joints.append(HAnimJoint1286)
HAnimJoint1287 = x3d.HAnimJoint(USE="hanim_l_carpal_interphalangeal_1")

HAnimHumanoid36.joints.append(HAnimJoint1287)
HAnimJoint1288 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_2")

HAnimHumanoid36.joints.append(HAnimJoint1288)
HAnimJoint1289 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1289)
HAnimJoint1290 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1290)
HAnimJoint1291 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1291)
HAnimJoint1292 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_3")

HAnimHumanoid36.joints.append(HAnimJoint1292)
HAnimJoint1293 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1293)
HAnimJoint1294 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1294)
HAnimJoint1295 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1295)
HAnimJoint1296 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_4")

HAnimHumanoid36.joints.append(HAnimJoint1296)
HAnimJoint1297 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1297)
HAnimJoint1298 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1298)
HAnimJoint1299 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1299)
HAnimJoint1300 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_5")

HAnimHumanoid36.joints.append(HAnimJoint1300)
HAnimJoint1301 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1301)
HAnimJoint1302 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1302)
HAnimJoint1303 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1303)
HAnimJoint1304 = x3d.HAnimJoint(USE="hanim_r_sternoclavicular")

HAnimHumanoid36.joints.append(HAnimJoint1304)
HAnimJoint1305 = x3d.HAnimJoint(USE="hanim_r_acromioclavicular")

HAnimHumanoid36.joints.append(HAnimJoint1305)
HAnimJoint1306 = x3d.HAnimJoint(USE="hanim_r_shoulder")

HAnimHumanoid36.joints.append(HAnimJoint1306)
HAnimJoint1307 = x3d.HAnimJoint(USE="hanim_r_elbow")

HAnimHumanoid36.joints.append(HAnimJoint1307)
HAnimJoint1308 = x3d.HAnimJoint(USE="hanim_r_radiocarpal")

HAnimHumanoid36.joints.append(HAnimJoint1308)
HAnimJoint1309 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_1")

HAnimHumanoid36.joints.append(HAnimJoint1309)
HAnimJoint1310 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_1")

HAnimHumanoid36.joints.append(HAnimJoint1310)
HAnimJoint1311 = x3d.HAnimJoint(USE="hanim_r_carpal_interphalangeal_1")

HAnimHumanoid36.joints.append(HAnimJoint1311)
HAnimJoint1312 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_2")

HAnimHumanoid36.joints.append(HAnimJoint1312)
HAnimJoint1313 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1313)
HAnimJoint1314 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1314)
HAnimJoint1315 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1315)
HAnimJoint1316 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_3")

HAnimHumanoid36.joints.append(HAnimJoint1316)
HAnimJoint1317 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1317)
HAnimJoint1318 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1318)
HAnimJoint1319 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1319)
HAnimJoint1320 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_4")

HAnimHumanoid36.joints.append(HAnimJoint1320)
HAnimJoint1321 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1321)
HAnimJoint1322 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1322)
HAnimJoint1323 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1323)
HAnimJoint1324 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_5")

HAnimHumanoid36.joints.append(HAnimJoint1324)
HAnimJoint1325 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1325)
HAnimJoint1326 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1326)
HAnimJoint1327 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1327)
Coordinate1328 = x3d.Coordinate(DEF="TheSkinCoord")
Coordinate1328.point = [(0, 1.77, 0),(0, 1.665, 0.09),(-0.033, 1.62, 0.087),(0.033, 1.62, 0.087),(0, 1.55, 0.097),(-0.077, 1.64, -0.01),(-0.0527, 1.58, 0.015),(0.077, 1.64, -0.01),(0.0527, 1.58, 0.015),(0, 1.625, -0.0925),(-0.03, 1.46, 0.035),(0, 1.44, 0.03),(0.03, 1.46, 0.035),(-0.1135, 1.318, 0.095),(0.1135, 1.318, 0.095),(0, 1.25, 0.113),(-0.087, 1.19, 0.09),(-0.0935, 1.03, 0.075),(0.087, 1.19, 0.09),(0.0935, 1.03, 0.075),(-0.1425, 1.065, 0.0033),(-0.15, 0.9, -0.01),(0.1425, 1.065, 0.0033),(0.15, 0.9, -0.01),(0, 1.53, -0.084),(0.0049, 1.1908, -0.1113),(-0.0773, 1.019, -0.12),(0.0773, 1.019, -0.12),(0.005, 1.0915, -0.1091),(-0.178, 1.4825, -0.0625),(-0.17, 1.38, 0.007),(-0.1884, 0.8676, -0.036),(-0.16, 1.38, -0.127),(-0.2, 1.1388, -0.08),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.23, 1.133, -0.055),(-0.1977, 0.8169, -0.0177),(-0.1941, 0.6772, -0.0423),(-0.2117, 0.8562, -0.0584),(-0.1929, 0.789, -0.1064),(0.175, 1.4825, -0.06),(0.17, 1.38, 0.007),(0.1901, 0.8645, -0.0415),(0.16, 1.38, -0.125),(0.2, 1.1388, -0.08),(0.165, 1.1388, -0.04),(0.244, 1.1388, -0.04),(0.23, 1.133, -0.055),(0.2009, 0.8139, -0.0237),(0.2056, 0.6743, -0.0482),(0.2142, 0.8529, -0.0648),(0.1929, 0.786, -0.1122),(-0.1, 0.4913, -0.03),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.165, 0.01, 0.12),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.09, 0.056, 0.0125),(-0.115, 0.02, 0.122),(-0.115, 0.04, -0.055),(-0.11, 0.011, 0.19),(0.0993, 0.4881, -0.0309),(0.17, 0.466, 0),(0.05, 0.4867, 0),(0.165, 0.01, 0.12),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.09, 0.056, 0.0125),(0.115, 0.02, 0.122),(0.115, 0.04, -0.055),(0.11, 0.011, 0.19),(0, 0.875, 0),(-0.0646, 1.5149, -0.038),(0.0646, 1.5149, -0.038),(0, 1.07225, 0.09),(-0.11, 1.427, -0.1375),(-0.235, 1.42, -0.0625),(0.11, 1.427, -0.1375),(0.235, 1.42, -0.0625),(0, 1.41, -0.145),(0, 0.925, 0.08),(-0.087, 1.19, -0.09),(0.087, 1.19, -0.09),(0.172, 1.32, -0.03),(-0.172, 1.32, -0.03),(0.15, 1.23, -0.015),(-0.15, 1.23, -0.015),(0.079, 0.92, -0.14),(0.1, 0.9, 0.077),(-0.079, 0.92, -0.14),(-0.1, 0.9, 0.075),(0, 0.87, 0),(0.171, 0.65, 0),(0.02, 0.65, 0),(0.1, 0.65, -0.08),(0.1, 0.65, 0.07),(-0.171, 0.65, 0),(-0.02, 0.65, 0),(-0.1, 0.65, -0.08),(-0.1, 0.65, 0.07),(0.25, 1.27, -0.04),(0.17, 1.27, -0.04),(0.2, 1.27, -0.09),(0.2, 1.27, 0.02),(0.244, 1.1388, -0.04),(0.165, 1.1388, -0.04),(0.2, 1.1388, -0.08),(0.2, 1.1388, -0.013),(0.225, 1, -0.01),(0.225, 1, -0.07),(0.185, 1, -0.01),(0.185, 1, -0.07),(0.2, 1.1388, -0.04),(0.225, 0.92, -0.04),(0.175, 0.92, -0.04),(0.2, 0.92, -0.065),(0.2, 0.92, -0.015),(0.225, 0.89, -0.04),(0.175, 0.89, -0.04),(0.2, 0.89, -0.065),(0.2, 0.89, -0.015),(0.218, 0.86, -0.04),(0.184, 0.86, -0.04),(0.2, 0.87, -0.07),(0.2, 0.87, 0),(0.21, 0.85, 0),(0.1854, 0.85, 0),(0.212, 0.84, -0.015),(0.183, 0.84, -0.015),(0.213, 0.835, -0.04),(0.19, 0.835, -0.04),(0.211, 0.835, -0.065),(0.192, 0.835, -0.065),(0.208, 0.84, -0.085),(0.19, 0.84, -0.085),(0.2, 0.84, -0.095),(0.215, 0.82, 0),(0.193, 0.815, 0.005),(0.198, 0.8, 0.012),(0.21, 0.82, 0.03),(0.19, 0.82, 0.03),(0.2, 0.835, 0.039),(0.212, 0.8, 0.05),(0.188, 0.8, 0.05),(0.2, 0.807, 0.057),(0.2, 0.793, 0.035),(0.2, 0.774, 0.076),(0.212, 0.78, 0.07),(0.188, 0.78, 0.07),(0.2, 0.785, 0.075),(0.2, 0.77, 0.062),(0.215, 0.793, -0.015),(0.187, 0.793, -0.015),(0.2, 0.793, -0.005),(0.215, 0.788, -0.04),(0.187, 0.788, -0.04),(0.215, 0.793, -0.065),(0.187, 0.793, -0.065),(0.21, 0.79, -0.085),(0.19, 0.79, -0.085),(0.2, 0.79, -0.095),(0.19, 0.77, -0.0275),(0.19, 0.77, -0.0525),(0.19, 0.78, -0.0775),(0.212, 0.745, -0.015),(0.188, 0.745, -0.02),(0.2, 0.745, -0.0255),(0.2, 0.745, -0.0045),(0.211, 0.72, -0.015),(0.189, 0.72, -0.015),(0.2, 0.72, -0.0252),(0.2, 0.72, -0.0048),(0.21, 0.695, -0.015),(0.19, 0.695, -0.015),(0.2, 0.695, -0.025),(0.2, 0.695, -0.005),(0.2, 0.685, -0.015),(0.215, 0.74, -0.04),(0.185, 0.74, -0.04),(0.2, 0.74, -0.055),(0.2, 0.74, -0.025),(0.21, 0.7142, -0.04),(0.19, 0.7142, -0.04),(0.2, 0.7142, -0.053),(0.2, 0.7142, -0.027),(0.21, 0.68, -0.04),(0.19, 0.68, -0.04),(0.2, 0.68, -0.05),(0.2, 0.68, -0.03),(0.2, 0.67, -0.04),(0.212, 0.74, -0.065),(0.188, 0.74, -0.065),(0.2, 0.74, -0.0756),(0.2, 0.74, -0.0542),(0.21, 0.7177, -0.065),(0.19, 0.7177, -0.065),(0.2, 0.7177, -0.0751),(0.2, 0.7177, -0.0549),(0.21, 0.695, -0.065),(0.19, 0.695, -0.065),(0.2, 0.695, -0.075),(0.2, 0.695, -0.055),(0.2, 0.685, -0.065),(0.211, 0.755, -0.085),(0.189, 0.755, -0.085),(0.2, 0.755, -0.0952),(0.2, 0.755, -0.0748),(0.21, 0.735, -0.085),(0.19, 0.735, -0.085),(0.2, 0.735, -0.0951),(0.2, 0.735, -0.0749),(0.21, 0.72, -0.085),(0.19, 0.72, -0.085),(0.2, 0.72, -0.095),(0.2, 0.72, -0.075),(0.2, 0.71, -0.085),(-0.23, 1.23, -0.04),(-0.16, 1.23, -0.04),(-0.2, 1.235, -0.105),(-0.2, 1.235, 0.02),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.2, 1.1388, -0.08),(-0.2, 1.1388, 0.013),(-0.225, 1, -0.01),(-0.225, 1, -0.07),(-0.185, 1, -0.01),(-0.185, 1, -0.07),(-0.2, 1.1388, -0.04),(-0.225, 0.92, -0.04),(-0.175, 0.92, -0.04),(-0.2, 0.92, -0.065),(-0.2, 0.92, -0.015),(-0.225, 0.89, -0.04),(-0.175, 0.89, -0.04),(-0.2, 0.89, -0.065),(-0.2, 0.89, -0.015),(-0.218, 0.86, -0.04),(-0.184, 0.86, -0.04),(-0.2, 0.87, -0.07),(-0.2, 0.87, 0),(-0.21, 0.85, 0),(-0.1854, 0.85, 0),(-0.212, 0.84, -0.015),(-0.183, 0.84, -0.015),(-0.213, 0.835, -0.04),(-0.19, 0.835, -0.04),(-0.211, 0.835, -0.065),(-0.192, 0.835, -0.065),(-0.208, 0.84, -0.085),(-0.19, 0.84, -0.085),(-0.2, 0.84, -0.095),(-0.215, 0.82, 0),(-0.193, 0.815, 0.005),(-0.198, 0.8, 0.012),(-0.21, 0.82, 0.03),(-0.19, 0.82, 0.03),(-0.2, 0.835, 0.039),(-0.212, 0.8, 0.05),(-0.188, 0.8, 0.05),(-0.2, 0.807, 0.057),(-0.2, 0.793, 0.035),(-0.2, 0.774, 0.076),(-0.212, 0.78, 0.07),(-0.188, 0.78, 0.07),(-0.2, 0.785, 0.075),(-0.2, 0.77, 0.062),(-0.215, 0.793, -0.015),(-0.187, 0.793, -0.015),(-0.2, 0.793, -0.005),(-0.215, 0.788, -0.04),(-0.187, 0.788, -0.04),(-0.215, 0.793, -0.065),(-0.187, 0.793, -0.065),(-0.21, 0.79, -0.085),(-0.19, 0.79, -0.085),(-0.2, 0.79, -0.095),(-0.19, 0.77, -0.0275),(-0.19, 0.77, -0.0525),(-0.19, 0.78, -0.0775),(-0.212, 0.745, -0.015),(-0.188, 0.745, -0.02),(-0.2, 0.745, -0.0255),(-0.2, 0.745, -0.0045),(-0.211, 0.72, -0.015),(-0.189, 0.72, -0.015),(-0.2, 0.72, -0.0252),(-0.2, 0.72, -0.0048),(-0.21, 0.695, -0.015),(-0.19, 0.695, -0.015),(-0.2, 0.695, -0.025),(-0.2, 0.695, -0.005),(-0.2, 0.685, -0.015),(-0.215, 0.74, -0.04),(-0.185, 0.74, -0.04),(-0.2, 0.74, -0.055),(-0.2, 0.74, -0.025),(-0.21, 0.7142, -0.04),(-0.19, 0.7142, -0.04),(-0.2, 0.7142, -0.053),(-0.2, 0.7142, -0.027),(-0.21, 0.68, -0.04),(-0.19, 0.68, -0.04),(-0.2, 0.68, -0.05),(-0.2, 0.68, -0.03),(-0.2, 0.67, -0.04),(-0.212, 0.74, -0.065),(-0.188, 0.74, -0.065),(-0.2, 0.74, -0.0756),(-0.2, 0.74, -0.0542),(-0.21, 0.7177, -0.065),(-0.19, 0.7177, -0.065),(-0.2, 0.7177, -0.0751),(-0.2, 0.7177, -0.0549),(-0.21, 0.695, -0.065),(-0.19, 0.695, -0.065),(-0.2, 0.695, -0.075),(-0.2, 0.695, -0.055),(-0.2, 0.685, -0.065),(-0.211, 0.755, -0.085),(-0.189, 0.755, -0.085),(-0.2, 0.755, -0.0952),(-0.2, 0.755, -0.0748),(-0.21, 0.735, -0.085),(-0.19, 0.735, -0.085),(-0.2, 0.735, -0.0951),(-0.2, 0.735, -0.0749),(-0.21, 0.72, -0.085),(-0.19, 0.72, -0.085),(-0.2, 0.72, -0.095),(-0.2, 0.72, -0.075),(-0.2, 0.71, -0.085),(0.115, 0.466, 0.06),(0.115, 0.466, -0.055),(0.15, 0.466, 0),(0.05, 0.466, 0),(0.17, 0.3, 0),(0.06, 0.3, 0),(0.1, 0.3, -0.05),(0.1, 0.3, 0.05),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.115, 0.069, -0.045),(0.117, 0.0975, 0.0615),(0.1375, 0.006, -0.03),(0.095, 0.006, -0.03),(0.115, 0.015, -0.045),(0.115, 0.06, 0.1),(0.115, 0, 0.07),(0.165, 0, 0.07),(0.095, 0, 0.07),(0.115, 0.04, 0.13),(0.125, 0, 0.12),(0.165, 0, 0.12),(0.087, 0, 0.122),(0.09, 0.012, 0.188),(0.11, 0.011, 0.19),(0.128, 0.011, 0.185),(0.142, 0.011, 0.178),(0.154, 0.01, 0.168),(-0.115, 0.466, 0.06),(-0.115, 0.466, -0.055),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.17, 0.3, 0),(-0.06, 0.3, 0),(-0.1, 0.3, -0.05),(-0.1, 0.3, 0.05),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.115, 0.069, -0.045),(-0.117, 0.0975, 0.0615),(-0.1375, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.115, 0.06, 0.1),(-0.115, 0, 0.07),(-0.165, 0, 0.07),(-0.095, 0, 0.07),(-0.115, 0.04, 0.13),(-0.125, 0, 0.12),(-0.165, 0, 0.12),(-0.087, 0, 0.122),(-0.09, 0.012, 0.188),(-0.11, 0.011, 0.19),(-0.128, 0.011, 0.185),(-0.142, 0.011, 0.178),(-0.154, 0.01, 0.168)]

HAnimHumanoid36.skinCoord = Coordinate1328
Shape1329 = x3d.Shape(DEF="SkinShape")
Appearance1330 = x3d.Appearance(DEF="SkinAppearance")
Material1331 = x3d.Material(DEF="SkinMaterial")
Material1331.ambientIntensity = 0.6
Material1331.diffuseColor = [1,1,1]
Material1331.shininess = 0.6
Material1331.transparency = 1

Appearance1330.material = Material1331
ImageTexture1332 = x3d.ImageTexture(DEF="zBlueSpiralBkg2")
ImageTexture1332.description = "Blue Spiral Pattern"
ImageTexture1332.url = ["../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]

Appearance1330.texture = ImageTexture1332

Shape1329.appearance = Appearance1330
IndexedFaceSet1333 = x3d.IndexedFaceSet()
IndexedFaceSet1333.creaseAngle = 3.1
IndexedFaceSet1333.coordIndex = [0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]
Color1334 = x3d.Color()
Color1334.color = [(1, 0, 0),(0, 1, 1),(0, 1, 0),(1, 1, 0),(1, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(0, 1, 1),(1, 1, 0),(1, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(1, 0, 0),(1, 0, 0),(1, 1, 0),(1, 1, 0),(1, 1, 1),(1, 0, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(1, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 1)]

IndexedFaceSet1333.color = Color1334
Coordinate1335 = x3d.Coordinate(USE="TheSkinCoord")

IndexedFaceSet1333.coord = Coordinate1335

Shape1329.geometry = IndexedFaceSet1333

HAnimHumanoid36.skin.append(Shape1329)

Scene9.children.append(HAnimHumanoid36)

X3D0.Scene = Scene9
f = open("../data/Humanoid2.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Humanoid2.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/Humanoid2.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
