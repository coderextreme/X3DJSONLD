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
meta3.content = "Humanoid1.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "identifier"
meta4.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid1.x3d"

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
meta8.content = "Mon, 09 Feb 2026 12:24:17 GMT"

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
Coordinate208.point = [(0.1101, 0.0656, -0.0736),(0.0824, 0.0064, -0.004)]

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
HAnimJoint223 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_2")
HAnimJoint223.name = "l_metatarsophalangeal_2"
HAnimJoint223.center = [0.0824,0.0064,-0.004]

HAnimJoint200.children.append(HAnimJoint223)

HAnimJoint170.children.append(HAnimJoint200)

HAnimJoint133.children.append(HAnimJoint170)

HAnimJoint50.children.append(HAnimJoint133)
HAnimJoint224 = x3d.HAnimJoint(DEF="hanim_r_hip")
HAnimJoint224.name = "r_hip"
HAnimJoint224.center = [-0.095,0.9171,0.0029]
HAnimSegment225 = x3d.HAnimSegment(DEF="hanim_r_thigh")
HAnimSegment225.name = "r_thigh"
Transform226 = x3d.Transform()
Transform226.translation = [-0.095,0.9171,0.0029]
Transform227 = x3d.Transform()
Shape228 = x3d.Shape(USE="HAnimJointShape")

Transform227.children.append(Shape228)

Transform226.children.append(Transform227)

HAnimSegment225.children.append(Transform226)
Shape229 = x3d.Shape()
LineSet230 = x3d.LineSet()
LineSet230.vertexCount = [2]
ColorRGBA231 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet230.color = ColorRGBA231
Coordinate232 = x3d.Coordinate()
Coordinate232.point = [(-0.095, 0.9171, 0.0029),(-0.0867, 0.4913, 0.0318)]

LineSet230.coord = Coordinate232

Shape229.geometry = LineSet230

HAnimSegment225.children.append(Shape229)
HAnimSite233 = x3d.HAnimSite(DEF="hanim_r_femoral_lateral_epicondyles")
HAnimSite233.name = "r_femoral_lateral_epicondyles"
HAnimSite233.translation = [-0.1421,0.4992,0.031]
TouchSensor234 = x3d.TouchSensor()
TouchSensor234.description = "HAnimSite 44 r_femoral_lateral_epicondyles"

HAnimSite233.children.append(TouchSensor234)
Shape235 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite233.children.append(Shape235)
Billboard236 = x3d.Billboard()
Shape237 = x3d.Shape()
Text238 = x3d.Text()
Text238.string = ["44"]
FontStyle239 = x3d.FontStyle()
FontStyle239.size = 0.035

Text238.fontStyle = FontStyle239

Shape237.geometry = Text238

Billboard236.children.append(Shape237)

HAnimSite233.children.append(Billboard236)

HAnimSegment225.children.append(HAnimSite233)
HAnimSite240 = x3d.HAnimSite(DEF="hanim_r_femoral_medial_epicondyles")
HAnimSite240.name = "r_femoral_medial_epicondyles"
HAnimSite240.translation = [-0.0221,0.5014,0.0289]
TouchSensor241 = x3d.TouchSensor()
TouchSensor241.description = "HAnimSite 43 r_femoral_medial_epicondyles"

HAnimSite240.children.append(TouchSensor241)
Shape242 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite240.children.append(Shape242)
Billboard243 = x3d.Billboard()
Shape244 = x3d.Shape()
Text245 = x3d.Text()
Text245.string = ["43"]
FontStyle246 = x3d.FontStyle()
FontStyle246.size = 0.035

Text245.fontStyle = FontStyle246

Shape244.geometry = Text245

Billboard243.children.append(Shape244)

HAnimSite240.children.append(Billboard243)

HAnimSegment225.children.append(HAnimSite240)
HAnimSite247 = x3d.HAnimSite(DEF="hanim_r_knee_crease")
HAnimSite247.name = "r_knee_crease"
HAnimSite247.translation = [-0.0825,0.4932,-0.0326]
TouchSensor248 = x3d.TouchSensor()
TouchSensor248.description = "HAnimSite 91 r_knee_crease"

HAnimSite247.children.append(TouchSensor248)
Shape249 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite247.children.append(Shape249)
Billboard250 = x3d.Billboard()
Shape251 = x3d.Shape()
Text252 = x3d.Text()
Text252.string = ["91"]
FontStyle253 = x3d.FontStyle()
FontStyle253.size = 0.035

Text252.fontStyle = FontStyle253

Shape251.geometry = Text252

Billboard250.children.append(Shape251)

HAnimSite247.children.append(Billboard250)

HAnimSegment225.children.append(HAnimSite247)
HAnimSite254 = x3d.HAnimSite(DEF="hanim_r_suprapatella")
HAnimSite254.name = "r_suprapatella"
TouchSensor255 = x3d.TouchSensor()
TouchSensor255.description = "HAnimSite 45 r_suprapatella"

HAnimSite254.children.append(TouchSensor255)
Shape256 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite254.children.append(Shape256)
Billboard257 = x3d.Billboard()
Shape258 = x3d.Shape()
Text259 = x3d.Text()
Text259.string = ["45"]
FontStyle260 = x3d.FontStyle()
FontStyle260.size = 0.035

Text259.fontStyle = FontStyle260

Shape258.geometry = Text259

Billboard257.children.append(Shape258)

HAnimSite254.children.append(Billboard257)

HAnimSegment225.children.append(HAnimSite254)

HAnimJoint224.children.append(HAnimSegment225)
HAnimJoint261 = x3d.HAnimJoint(DEF="hanim_r_knee")
HAnimJoint261.name = "r_knee"
HAnimJoint261.center = [-0.0867,0.4913,0.0318]
HAnimSegment262 = x3d.HAnimSegment(DEF="hanim_r_calf")
HAnimSegment262.name = "r_calf"
Transform263 = x3d.Transform()
Transform263.translation = [-0.0867,0.4913,0.0318]
Transform264 = x3d.Transform()
Shape265 = x3d.Shape(USE="HAnimJointShape")

Transform264.children.append(Shape265)

Transform263.children.append(Transform264)

HAnimSegment262.children.append(Transform263)
Shape266 = x3d.Shape()
LineSet267 = x3d.LineSet()
LineSet267.vertexCount = [2]
ColorRGBA268 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet267.color = ColorRGBA268
Coordinate269 = x3d.Coordinate()
Coordinate269.point = [(-0.0867, 0.4913, 0.0318),(-0.0801, 0.0712, -0.0766)]

LineSet267.coord = Coordinate269

Shape266.geometry = LineSet267

HAnimSegment262.children.append(Shape266)
HAnimSite270 = x3d.HAnimSite(DEF="hanim_r_lateral_malleolus")
HAnimSite270.name = "r_lateral_malleolus"
HAnimSite270.translation = [-0.1006,0.0658,-0.1075]
TouchSensor271 = x3d.TouchSensor()
TouchSensor271.description = "HAnimSite 53 r_lateral_malleolus"

HAnimSite270.children.append(TouchSensor271)
Shape272 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite270.children.append(Shape272)
Billboard273 = x3d.Billboard()
Shape274 = x3d.Shape()
Text275 = x3d.Text()
Text275.string = ["53"]
FontStyle276 = x3d.FontStyle()
FontStyle276.size = 0.035

Text275.fontStyle = FontStyle276

Shape274.geometry = Text275

Billboard273.children.append(Shape274)

HAnimSite270.children.append(Billboard273)

HAnimSegment262.children.append(HAnimSite270)
HAnimSite277 = x3d.HAnimSite(DEF="hanim_r_medial_malleolus")
HAnimSite277.name = "r_medial_malleolus"
HAnimSite277.translation = [-0.0591,0.076,-0.0928]
TouchSensor278 = x3d.TouchSensor()
TouchSensor278.description = "HAnimSite 52 r_medial_malleolus"

HAnimSite277.children.append(TouchSensor278)
Shape279 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite277.children.append(Shape279)
Billboard280 = x3d.Billboard()
Shape281 = x3d.Shape()
Text282 = x3d.Text()
Text282.string = ["52"]
FontStyle283 = x3d.FontStyle()
FontStyle283.size = 0.035

Text282.fontStyle = FontStyle283

Shape281.geometry = Text282

Billboard280.children.append(Shape281)

HAnimSite277.children.append(Billboard280)

HAnimSegment262.children.append(HAnimSite277)
HAnimSite284 = x3d.HAnimSite(DEF="hanim_r_tibiale")
HAnimSite284.name = "r_tibiale"
TouchSensor285 = x3d.TouchSensor()
TouchSensor285.description = "HAnimSite 51 r_tibiale"

HAnimSite284.children.append(TouchSensor285)
Shape286 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite284.children.append(Shape286)
Billboard287 = x3d.Billboard()
Shape288 = x3d.Shape()
Text289 = x3d.Text()
Text289.string = ["51"]
FontStyle290 = x3d.FontStyle()
FontStyle290.size = 0.035

Text289.fontStyle = FontStyle290

Shape288.geometry = Text289

Billboard287.children.append(Shape288)

HAnimSite284.children.append(Billboard287)

HAnimSegment262.children.append(HAnimSite284)

HAnimJoint261.children.append(HAnimSegment262)
HAnimJoint291 = x3d.HAnimJoint(DEF="hanim_r_talocrural")
HAnimJoint291.name = "r_talocrural"
HAnimJoint291.center = [-0.0801,0.0712,-0.0766]
HAnimSegment292 = x3d.HAnimSegment(DEF="hanim_r_talus")
HAnimSegment292.name = "r_talus"
Transform293 = x3d.Transform()
Transform293.translation = [-0.05,0.06,-0.025]
Transform293.rotation = [1,0,0,-1.57]
Transform293.scale = [0.15,0.15,0.15]
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
Coordinate299.point = [(-0.0801, 0.0712, -0.0766),(-0.0823, 0.0064, -0.004)]

LineSet297.coord = Coordinate299

Shape296.geometry = LineSet297

HAnimSegment292.children.append(Shape296)
HAnimSite300 = x3d.HAnimSite(DEF="hanim_r_calcaneus_posterior")
HAnimSite300.name = "r_calcaneus_posterior"
HAnimSite300.translation = [-0.0692,0.0297,-0.1221]
TouchSensor301 = x3d.TouchSensor()
TouchSensor301.description = "HAnimSite 62 r_calcaneus_posterior"

HAnimSite300.children.append(TouchSensor301)
Shape302 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite300.children.append(Shape302)
Billboard303 = x3d.Billboard()
Shape304 = x3d.Shape()
Text305 = x3d.Text()
Text305.string = ["62"]
FontStyle306 = x3d.FontStyle()
FontStyle306.size = 0.035

Text305.fontStyle = FontStyle306

Shape304.geometry = Text305

Billboard303.children.append(Shape304)

HAnimSite300.children.append(Billboard303)

HAnimSegment292.children.append(HAnimSite300)
HAnimSite307 = x3d.HAnimSite(DEF="hanim_r_sphyrion")
HAnimSite307.name = "r_sphyrion"
HAnimSite307.translation = [-0.0603,0.061,-0.1002]
TouchSensor308 = x3d.TouchSensor()
TouchSensor308.description = "HAnimSite 54 r_sphyrion"

HAnimSite307.children.append(TouchSensor308)
Shape309 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite307.children.append(Shape309)
Billboard310 = x3d.Billboard()
Shape311 = x3d.Shape()
Text312 = x3d.Text()
Text312.string = ["54"]
FontStyle313 = x3d.FontStyle()
FontStyle313.size = 0.035

Text312.fontStyle = FontStyle313

Shape311.geometry = Text312

Billboard310.children.append(Shape311)

HAnimSite307.children.append(Billboard310)

HAnimSegment292.children.append(HAnimSite307)

HAnimJoint291.children.append(HAnimSegment292)
HAnimJoint314 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_2")
HAnimJoint314.name = "r_metatarsophalangeal_2"
HAnimJoint314.center = [-0.0823,0.0064,-0.004]

HAnimJoint291.children.append(HAnimJoint314)

HAnimJoint261.children.append(HAnimJoint291)

HAnimJoint224.children.append(HAnimJoint261)

HAnimJoint50.children.append(HAnimJoint224)

HAnimJoint37.children.append(HAnimJoint50)
HAnimJoint315 = x3d.HAnimJoint(DEF="hanim_vl5")
HAnimJoint315.name = "vl5"
HAnimJoint315.center = [0.0028,1.0568,-0.0776]
HAnimSegment316 = x3d.HAnimSegment(DEF="hanim_l5")
HAnimSegment316.name = "l5"
Transform317 = x3d.Transform()
Transform317.translation = [0.0028,1.0568,-0.0776]
Transform318 = x3d.Transform()
Shape319 = x3d.Shape(USE="HAnimJointShape")

Transform318.children.append(Shape319)

Transform317.children.append(Transform318)

HAnimSegment316.children.append(Transform317)
Shape320 = x3d.Shape()
LineSet321 = x3d.LineSet()
LineSet321.vertexCount = [2]
ColorRGBA322 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet321.color = ColorRGBA322
Coordinate323 = x3d.Coordinate()
Coordinate323.point = [(0.0028, 1.0568, -0.0776),(0.0044, 1.6209, 0.0236)]

LineSet321.coord = Coordinate323

Shape320.geometry = LineSet321

HAnimSegment316.children.append(Shape320)
HAnimSite324 = x3d.HAnimSite(DEF="hanim_adams_apple")
HAnimSite324.name = "adams_apple"
TouchSensor325 = x3d.TouchSensor()
TouchSensor325.description = "HAnimSite 11 adams_apple"

HAnimSite324.children.append(TouchSensor325)
Shape326 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite324.children.append(Shape326)
Billboard327 = x3d.Billboard()
Shape328 = x3d.Shape()
Text329 = x3d.Text()
Text329.string = ["11"]
FontStyle330 = x3d.FontStyle()
FontStyle330.size = 0.035

Text329.fontStyle = FontStyle330

Shape328.geometry = Text329

Billboard327.children.append(Shape328)

HAnimSite324.children.append(Billboard327)

HAnimSegment316.children.append(HAnimSite324)
HAnimSite331 = x3d.HAnimSite(DEF="hanim_cervicale")
HAnimSite331.name = "cervicale"
HAnimSite331.translation = [0.0064,1.52,-0.0815]
TouchSensor332 = x3d.TouchSensor()
TouchSensor332.description = "HAnimSite 10 cervicale"

HAnimSite331.children.append(TouchSensor332)
Shape333 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite331.children.append(Shape333)
Billboard334 = x3d.Billboard()
Shape335 = x3d.Shape()
Text336 = x3d.Text()
Text336.string = ["10"]
FontStyle337 = x3d.FontStyle()
FontStyle337.size = 0.035

Text336.fontStyle = FontStyle337

Shape335.geometry = Text336

Billboard334.children.append(Shape335)

HAnimSite331.children.append(Billboard334)

HAnimSegment316.children.append(HAnimSite331)
HAnimSite338 = x3d.HAnimSite(DEF="hanim_l_acromion")
HAnimSite338.name = "l_acromion"
HAnimSite338.translation = [0.2032,1.476,-0.049]
TouchSensor339 = x3d.TouchSensor()
TouchSensor339.description = "HAnimSite 15 l_acromion"

HAnimSite338.children.append(TouchSensor339)
Shape340 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite338.children.append(Shape340)
Billboard341 = x3d.Billboard()
Shape342 = x3d.Shape()
Text343 = x3d.Text()
Text343.string = ["15"]
FontStyle344 = x3d.FontStyle()
FontStyle344.size = 0.035

Text343.fontStyle = FontStyle344

Shape342.geometry = Text343

Billboard341.children.append(Shape342)

HAnimSite338.children.append(Billboard341)

HAnimSegment316.children.append(HAnimSite338)
HAnimSite345 = x3d.HAnimSite(DEF="hanim_l_axilla_distal")
HAnimSite345.name = "l_axilla_distal"
HAnimSite345.translation = [0.1706,1.4072,-0.0875]
TouchSensor346 = x3d.TouchSensor()
TouchSensor346.description = "HAnimSite 17 l_axilla_distal"

HAnimSite345.children.append(TouchSensor346)
Shape347 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite345.children.append(Shape347)
Billboard348 = x3d.Billboard()
Shape349 = x3d.Shape()
Text350 = x3d.Text()
Text350.string = ["17"]
FontStyle351 = x3d.FontStyle()
FontStyle351.size = 0.035

Text350.fontStyle = FontStyle351

Shape349.geometry = Text350

Billboard348.children.append(Shape349)

HAnimSite345.children.append(Billboard348)

HAnimSegment316.children.append(HAnimSite345)
HAnimSite352 = x3d.HAnimSite(DEF="hanim_l_axilla_posterior_folds")
HAnimSite352.name = "l_axilla_posterior_folds"
TouchSensor353 = x3d.TouchSensor()
TouchSensor353.description = "HAnimSite 18 l_axilla_posterior_folds"

HAnimSite352.children.append(TouchSensor353)
Shape354 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite352.children.append(Shape354)
Billboard355 = x3d.Billboard()
Shape356 = x3d.Shape()
Text357 = x3d.Text()
Text357.string = ["18"]
FontStyle358 = x3d.FontStyle()
FontStyle358.size = 0.035

Text357.fontStyle = FontStyle358

Shape356.geometry = Text357

Billboard355.children.append(Shape356)

HAnimSite352.children.append(Billboard355)

HAnimSegment316.children.append(HAnimSite352)
HAnimSite359 = x3d.HAnimSite(DEF="hanim_l_axilla_proximal")
HAnimSite359.name = "l_axilla_proximal"
HAnimSite359.translation = [0.1777,1.4065,-0.0075]
TouchSensor360 = x3d.TouchSensor()
TouchSensor360.description = "HAnimSite 16 l_axilla_proximal"

HAnimSite359.children.append(TouchSensor360)
Shape361 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite359.children.append(Shape361)
Billboard362 = x3d.Billboard()
Shape363 = x3d.Shape()
Text364 = x3d.Text()
Text364.string = ["16"]
FontStyle365 = x3d.FontStyle()
FontStyle365.size = 0.035

Text364.fontStyle = FontStyle365

Shape363.geometry = Text364

Billboard362.children.append(Shape363)

HAnimSite359.children.append(Billboard362)

HAnimSegment316.children.append(HAnimSite359)
HAnimSite366 = x3d.HAnimSite(DEF="hanim_l_chest_midsagittal_plane")
HAnimSite366.name = "l_chest_midsagittal_plane"
TouchSensor367 = x3d.TouchSensor()
TouchSensor367.description = "HAnimSite 94 l_chest_midsagittal_plane"

HAnimSite366.children.append(TouchSensor367)
Shape368 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite366.children.append(Shape368)
Billboard369 = x3d.Billboard()
Shape370 = x3d.Shape()
Text371 = x3d.Text()
Text371.string = ["94"]
FontStyle372 = x3d.FontStyle()
FontStyle372.size = 0.035

Text371.fontStyle = FontStyle372

Shape370.geometry = Text371

Billboard369.children.append(Shape370)

HAnimSite366.children.append(Billboard369)

HAnimSegment316.children.append(HAnimSite366)
HAnimSite373 = x3d.HAnimSite(DEF="hanim_l_clavicale")
HAnimSite373.name = "l_clavicale"
HAnimSite373.translation = [0.0271,1.4943,0.0394]
TouchSensor374 = x3d.TouchSensor()
TouchSensor374.description = "HAnimSite 14 l_clavicale"

HAnimSite373.children.append(TouchSensor374)
Shape375 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite373.children.append(Shape375)
Billboard376 = x3d.Billboard()
Shape377 = x3d.Shape()
Text378 = x3d.Text()
Text378.string = ["14"]
FontStyle379 = x3d.FontStyle()
FontStyle379.size = 0.035

Text378.fontStyle = FontStyle379

Shape377.geometry = Text378

Billboard376.children.append(Shape377)

HAnimSite373.children.append(Billboard376)

HAnimSegment316.children.append(HAnimSite373)
HAnimSite380 = x3d.HAnimSite(DEF="hanim_l_neck_base")
HAnimSite380.name = "l_neck_base"
HAnimSite380.translation = [0.0646,1.5141,-0.038]
TouchSensor381 = x3d.TouchSensor()
TouchSensor381.description = "HAnimSite 82 l_neck_base"

HAnimSite380.children.append(TouchSensor381)
Shape382 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite380.children.append(Shape382)
Billboard383 = x3d.Billboard()
Shape384 = x3d.Shape()
Text385 = x3d.Text()
Text385.string = ["82"]
FontStyle386 = x3d.FontStyle()
FontStyle386.size = 0.035

Text385.fontStyle = FontStyle386

Shape384.geometry = Text385

Billboard383.children.append(Shape384)

HAnimSite380.children.append(Billboard383)

HAnimSegment316.children.append(HAnimSite380)
HAnimSite387 = x3d.HAnimSite(DEF="hanim_l_rib10")
HAnimSite387.name = "l_rib10"
HAnimSite387.translation = [0.0871,1.1925,0.0992]
TouchSensor388 = x3d.TouchSensor()
TouchSensor388.description = "HAnimSite 28 l_rib10"

HAnimSite387.children.append(TouchSensor388)
Shape389 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite387.children.append(Shape389)
Billboard390 = x3d.Billboard()
Shape391 = x3d.Shape()
Text392 = x3d.Text()
Text392.string = ["28"]
FontStyle393 = x3d.FontStyle()
FontStyle393.size = 0.035

Text392.fontStyle = FontStyle393

Shape391.geometry = Text392

Billboard390.children.append(Shape391)

HAnimSite387.children.append(Billboard390)

HAnimSegment316.children.append(HAnimSite387)
HAnimSite394 = x3d.HAnimSite(DEF="hanim_l_thelion")
HAnimSite394.name = "l_thelion"
HAnimSite394.translation = [0.0918,1.3382,0.1192]
TouchSensor395 = x3d.TouchSensor()
TouchSensor395.description = "HAnimSite 29 l_thelion"

HAnimSite394.children.append(TouchSensor395)
Shape396 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite394.children.append(Shape396)
Billboard397 = x3d.Billboard()
Shape398 = x3d.Shape()
Text399 = x3d.Text()
Text399.string = ["29"]
FontStyle400 = x3d.FontStyle()
FontStyle400.size = 0.035

Text399.fontStyle = FontStyle400

Shape398.geometry = Text399

Billboard397.children.append(Shape398)

HAnimSite394.children.append(Billboard397)

HAnimSegment316.children.append(HAnimSite394)
HAnimSite401 = x3d.HAnimSite(DEF="hanim_mesosternale")
HAnimSite401.name = "mesosternale"
TouchSensor402 = x3d.TouchSensor()
TouchSensor402.description = "HAnimSite 88 mesosternale"

HAnimSite401.children.append(TouchSensor402)
Shape403 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite401.children.append(Shape403)
Billboard404 = x3d.Billboard()
Shape405 = x3d.Shape()
Text406 = x3d.Text()
Text406.string = ["88"]
FontStyle407 = x3d.FontStyle()
FontStyle407.size = 0.035

Text406.fontStyle = FontStyle407

Shape405.geometry = Text406

Billboard404.children.append(Shape405)

HAnimSite401.children.append(Billboard404)

HAnimSegment316.children.append(HAnimSite401)
HAnimSite408 = x3d.HAnimSite(DEF="hanim_navel")
HAnimSite408.name = "navel"
HAnimSite408.translation = [0.0069,1.0966,0.1017]
TouchSensor409 = x3d.TouchSensor()
TouchSensor409.description = "HAnimSite 84 navel"

HAnimSite408.children.append(TouchSensor409)
Shape410 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite408.children.append(Shape410)
Billboard411 = x3d.Billboard()
Shape412 = x3d.Shape()
Text413 = x3d.Text()
Text413.string = ["84"]
FontStyle414 = x3d.FontStyle()
FontStyle414.size = 0.035

Text413.fontStyle = FontStyle414

Shape412.geometry = Text413

Billboard411.children.append(Shape412)

HAnimSite408.children.append(Billboard411)

HAnimSegment316.children.append(HAnimSite408)
HAnimSite415 = x3d.HAnimSite(DEF="hanim_r_acromion")
HAnimSite415.name = "r_acromion"
HAnimSite415.translation = [-0.1905,1.4791,-0.0431]
TouchSensor416 = x3d.TouchSensor()
TouchSensor416.description = "HAnimSite 20 r_acromion"

HAnimSite415.children.append(TouchSensor416)
Shape417 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite415.children.append(Shape417)
Billboard418 = x3d.Billboard()
Shape419 = x3d.Shape()
Text420 = x3d.Text()
Text420.string = ["20"]
FontStyle421 = x3d.FontStyle()
FontStyle421.size = 0.035

Text420.fontStyle = FontStyle421

Shape419.geometry = Text420

Billboard418.children.append(Shape419)

HAnimSite415.children.append(Billboard418)

HAnimSegment316.children.append(HAnimSite415)
HAnimSite422 = x3d.HAnimSite(DEF="hanim_r_axilla_distal")
HAnimSite422.name = "r_axilla_distal"
HAnimSite422.translation = [-0.1603,1.4098,-0.0826]
TouchSensor423 = x3d.TouchSensor()
TouchSensor423.description = "HAnimSite 22 r_axilla_distal"

HAnimSite422.children.append(TouchSensor423)
Shape424 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite422.children.append(Shape424)
Billboard425 = x3d.Billboard()
Shape426 = x3d.Shape()
Text427 = x3d.Text()
Text427.string = ["22"]
FontStyle428 = x3d.FontStyle()
FontStyle428.size = 0.035

Text427.fontStyle = FontStyle428

Shape426.geometry = Text427

Billboard425.children.append(Shape426)

HAnimSite422.children.append(Billboard425)

HAnimSegment316.children.append(HAnimSite422)
HAnimSite429 = x3d.HAnimSite(DEF="hanim_r_axilla_posterior_folds")
HAnimSite429.name = "r_axilla_posterior_folds"
TouchSensor430 = x3d.TouchSensor()
TouchSensor430.description = "HAnimSite 23 r_axilla_posterior_folds"

HAnimSite429.children.append(TouchSensor430)
Shape431 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite429.children.append(Shape431)
Billboard432 = x3d.Billboard()
Shape433 = x3d.Shape()
Text434 = x3d.Text()
Text434.string = ["23"]
FontStyle435 = x3d.FontStyle()
FontStyle435.size = 0.035

Text434.fontStyle = FontStyle435

Shape433.geometry = Text434

Billboard432.children.append(Shape433)

HAnimSite429.children.append(Billboard432)

HAnimSegment316.children.append(HAnimSite429)
HAnimSite436 = x3d.HAnimSite(DEF="hanim_r_axilla_proximal")
HAnimSite436.name = "r_axilla_proximal"
HAnimSite436.translation = [-0.1626,1.4072,-0.0031]
TouchSensor437 = x3d.TouchSensor()
TouchSensor437.description = "HAnimSite 21 r_axilla_proximal"

HAnimSite436.children.append(TouchSensor437)
Shape438 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite436.children.append(Shape438)
Billboard439 = x3d.Billboard()
Shape440 = x3d.Shape()
Text441 = x3d.Text()
Text441.string = ["21"]
FontStyle442 = x3d.FontStyle()
FontStyle442.size = 0.035

Text441.fontStyle = FontStyle442

Shape440.geometry = Text441

Billboard439.children.append(Shape440)

HAnimSite436.children.append(Billboard439)

HAnimSegment316.children.append(HAnimSite436)
HAnimSite443 = x3d.HAnimSite(DEF="hanim_r_chest_midsagittal_plane")
HAnimSite443.name = "r_chest_midsagittal_plane"
TouchSensor444 = x3d.TouchSensor()
TouchSensor444.description = "HAnimSite 95 r_chest_midsagittal_plane"

HAnimSite443.children.append(TouchSensor444)
Shape445 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite443.children.append(Shape445)
Billboard446 = x3d.Billboard()
Shape447 = x3d.Shape()
Text448 = x3d.Text()
Text448.string = ["95"]
FontStyle449 = x3d.FontStyle()
FontStyle449.size = 0.035

Text448.fontStyle = FontStyle449

Shape447.geometry = Text448

Billboard446.children.append(Shape447)

HAnimSite443.children.append(Billboard446)

HAnimSegment316.children.append(HAnimSite443)
HAnimSite450 = x3d.HAnimSite(DEF="hanim_r_clavicale")
HAnimSite450.name = "r_clavicale"
HAnimSite450.translation = [-0.0115,1.4943,0.04]
TouchSensor451 = x3d.TouchSensor()
TouchSensor451.description = "HAnimSite 19 r_clavicale"

HAnimSite450.children.append(TouchSensor451)
Shape452 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite450.children.append(Shape452)
Billboard453 = x3d.Billboard()
Shape454 = x3d.Shape()
Text455 = x3d.Text()
Text455.string = ["19"]
FontStyle456 = x3d.FontStyle()
FontStyle456.size = 0.035

Text455.fontStyle = FontStyle456

Shape454.geometry = Text455

Billboard453.children.append(Shape454)

HAnimSite450.children.append(Billboard453)

HAnimSegment316.children.append(HAnimSite450)
HAnimSite457 = x3d.HAnimSite(DEF="hanim_r_neck_base")
HAnimSite457.name = "r_neck_base"
HAnimSite457.translation = [-0.0419,1.5149,-0.022]
TouchSensor458 = x3d.TouchSensor()
TouchSensor458.description = "HAnimSite 83 r_neck_base"

HAnimSite457.children.append(TouchSensor458)
Shape459 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite457.children.append(Shape459)
Billboard460 = x3d.Billboard()
Shape461 = x3d.Shape()
Text462 = x3d.Text()
Text462.string = ["83"]
FontStyle463 = x3d.FontStyle()
FontStyle463.size = 0.035

Text462.fontStyle = FontStyle463

Shape461.geometry = Text462

Billboard460.children.append(Shape461)

HAnimSite457.children.append(Billboard460)

HAnimSegment316.children.append(HAnimSite457)
HAnimSite464 = x3d.HAnimSite(DEF="hanim_r_rib10")
HAnimSite464.name = "r_rib10"
HAnimSite464.translation = [-0.0711,1.1941,0.1016]
TouchSensor465 = x3d.TouchSensor()
TouchSensor465.description = "HAnimSite 30 r_rib10"

HAnimSite464.children.append(TouchSensor465)
Shape466 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite464.children.append(Shape466)
Billboard467 = x3d.Billboard()
Shape468 = x3d.Shape()
Text469 = x3d.Text()
Text469.string = ["30"]
FontStyle470 = x3d.FontStyle()
FontStyle470.size = 0.035

Text469.fontStyle = FontStyle470

Shape468.geometry = Text469

Billboard467.children.append(Shape468)

HAnimSite464.children.append(Billboard467)

HAnimSegment316.children.append(HAnimSite464)
HAnimSite471 = x3d.HAnimSite(DEF="hanim_r_thelion")
HAnimSite471.name = "r_thelion"
HAnimSite471.translation = [-0.0736,1.3385,0.1217]
TouchSensor472 = x3d.TouchSensor()
TouchSensor472.description = "HAnimSite 31 r_thelion"

HAnimSite471.children.append(TouchSensor472)
Shape473 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite471.children.append(Shape473)
Billboard474 = x3d.Billboard()
Shape475 = x3d.Shape()
Text476 = x3d.Text()
Text476.string = ["31"]
FontStyle477 = x3d.FontStyle()
FontStyle477.size = 0.035

Text476.fontStyle = FontStyle477

Shape475.geometry = Text476

Billboard474.children.append(Shape475)

HAnimSite471.children.append(Billboard474)

HAnimSegment316.children.append(HAnimSite471)
HAnimSite478 = x3d.HAnimSite(DEF="hanim_rear_center_midsagittal_plane")
HAnimSite478.name = "rear_center_midsagittal_plane"
TouchSensor479 = x3d.TouchSensor()
TouchSensor479.description = "HAnimSite 92 rear_center_midsagittal_plane"

HAnimSite478.children.append(TouchSensor479)
Shape480 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite478.children.append(Shape480)
Billboard481 = x3d.Billboard()
Shape482 = x3d.Shape()
Text483 = x3d.Text()
Text483.string = ["92"]
FontStyle484 = x3d.FontStyle()
FontStyle484.size = 0.035

Text483.fontStyle = FontStyle484

Shape482.geometry = Text483

Billboard481.children.append(Shape482)

HAnimSite478.children.append(Billboard481)

HAnimSegment316.children.append(HAnimSite478)
HAnimSite485 = x3d.HAnimSite(DEF="hanim_spine_1_middle_back")
HAnimSite485.name = "spine_1_middle_back"
TouchSensor486 = x3d.TouchSensor()
TouchSensor486.description = "HAnimSite 24 spine_1_middle_back"

HAnimSite485.children.append(TouchSensor486)
Shape487 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite485.children.append(Shape487)
Billboard488 = x3d.Billboard()
Shape489 = x3d.Shape()
Text490 = x3d.Text()
Text490.string = ["24"]
FontStyle491 = x3d.FontStyle()
FontStyle491.size = 0.035

Text490.fontStyle = FontStyle491

Shape489.geometry = Text490

Billboard488.children.append(Shape489)

HAnimSite485.children.append(Billboard488)

HAnimSegment316.children.append(HAnimSite485)
HAnimSite492 = x3d.HAnimSite(DEF="hanim_spine_2_middle_back")
HAnimSite492.name = "spine_2_middle_back"
TouchSensor493 = x3d.TouchSensor()
TouchSensor493.description = "HAnimSite  spine_2_middle_back"

HAnimSite492.children.append(TouchSensor493)
Shape494 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite492.children.append(Shape494)
Billboard495 = x3d.Billboard()
Shape496 = x3d.Shape()
Text497 = x3d.Text()
Text497.string = [""]
FontStyle498 = x3d.FontStyle()
FontStyle498.size = 0.035

Text497.fontStyle = FontStyle498

Shape496.geometry = Text497

Billboard495.children.append(Shape496)

HAnimSite492.children.append(Billboard495)

HAnimSegment316.children.append(HAnimSite492)
HAnimSite499 = x3d.HAnimSite(DEF="hanim_substernale")
HAnimSite499.name = "substernale"
HAnimSite499.translation = [0.0085,1.2995,0.1147]
TouchSensor500 = x3d.TouchSensor()
TouchSensor500.description = "HAnimSite 13 substernale"

HAnimSite499.children.append(TouchSensor500)
Shape501 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite499.children.append(Shape501)
Billboard502 = x3d.Billboard()
Shape503 = x3d.Shape()
Text504 = x3d.Text()
Text504.string = ["13"]
FontStyle505 = x3d.FontStyle()
FontStyle505.size = 0.035

Text504.fontStyle = FontStyle505

Shape503.geometry = Text504

Billboard502.children.append(Shape503)

HAnimSite499.children.append(Billboard502)

HAnimSegment316.children.append(HAnimSite499)
HAnimSite506 = x3d.HAnimSite(DEF="hanim_suprasternale")
HAnimSite506.name = "suprasternale"
HAnimSite506.translation = [0.0084,1.4714,0.0551]
TouchSensor507 = x3d.TouchSensor()
TouchSensor507.description = "HAnimSite 12 suprasternale"

HAnimSite506.children.append(TouchSensor507)
Shape508 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite506.children.append(Shape508)
Billboard509 = x3d.Billboard()
Shape510 = x3d.Shape()
Text511 = x3d.Text()
Text511.string = ["12"]
FontStyle512 = x3d.FontStyle()
FontStyle512.size = 0.035

Text511.fontStyle = FontStyle512

Shape510.geometry = Text511

Billboard509.children.append(Shape510)

HAnimSite506.children.append(Billboard509)

HAnimSegment316.children.append(HAnimSite506)
HAnimSite513 = x3d.HAnimSite(DEF="hanim_waist_preferred_anterior")
HAnimSite513.name = "waist_preferred_anterior"
TouchSensor514 = x3d.TouchSensor()
TouchSensor514.description = "HAnimSite 26 waist_preferred_anterior"

HAnimSite513.children.append(TouchSensor514)
Shape515 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite513.children.append(Shape515)
Billboard516 = x3d.Billboard()
Shape517 = x3d.Shape()
Text518 = x3d.Text()
Text518.string = ["26"]
FontStyle519 = x3d.FontStyle()
FontStyle519.size = 0.035

Text518.fontStyle = FontStyle519

Shape517.geometry = Text518

Billboard516.children.append(Shape517)

HAnimSite513.children.append(Billboard516)

HAnimSegment316.children.append(HAnimSite513)
HAnimSite520 = x3d.HAnimSite(DEF="hanim_waist_preferred_posterior")
HAnimSite520.name = "waist_preferred_posterior"
HAnimSite520.translation = [0.29,1.0915,-0.1091]
TouchSensor521 = x3d.TouchSensor()
TouchSensor521.description = "HAnimSite 27 waist_preferred_posterior"

HAnimSite520.children.append(TouchSensor521)
Shape522 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite520.children.append(Shape522)
Billboard523 = x3d.Billboard()
Shape524 = x3d.Shape()
Text525 = x3d.Text()
Text525.string = ["27"]
FontStyle526 = x3d.FontStyle()
FontStyle526.size = 0.035

Text525.fontStyle = FontStyle526

Shape524.geometry = Text525

Billboard523.children.append(Shape524)

HAnimSite520.children.append(Billboard523)

HAnimSegment316.children.append(HAnimSite520)
Shape527 = x3d.Shape()
LineSet528 = x3d.LineSet()
LineSet528.vertexCount = [2]
ColorRGBA529 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet528.color = ColorRGBA529
Coordinate530 = x3d.Coordinate()
Coordinate530.point = [(0.0028, 1.0568, -0.0776),(0.2029, 1.4376, -0.0387)]

LineSet528.coord = Coordinate530

Shape527.geometry = LineSet528

HAnimSegment316.children.append(Shape527)
Shape531 = x3d.Shape()
LineSet532 = x3d.LineSet()
LineSet532.vertexCount = [2]
ColorRGBA533 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet532.color = ColorRGBA533
Coordinate534 = x3d.Coordinate()
Coordinate534.point = [(0.0028, 1.0568, -0.0776),(-0.1907, 1.4407, -0.0325)]

LineSet532.coord = Coordinate534

Shape531.geometry = LineSet532

HAnimSegment316.children.append(Shape531)

HAnimJoint315.children.append(HAnimSegment316)
HAnimJoint535 = x3d.HAnimJoint(DEF="hanim_skullbase")
HAnimJoint535.name = "skullbase"
HAnimJoint535.center = [0.0044,1.6209,0.0236]

HAnimJoint315.children.append(HAnimJoint535)
HAnimJoint536 = x3d.HAnimJoint(DEF="hanim_l_shoulder")
HAnimJoint536.name = "l_shoulder"
HAnimJoint536.center = [0.2029,1.4376,-0.0387]
HAnimSegment537 = x3d.HAnimSegment(DEF="hanim_l_upperarm")
HAnimSegment537.name = "l_upperarm"
Transform538 = x3d.Transform()
Transform538.translation = [0.2029,1.4376,-0.0387]
Transform539 = x3d.Transform()
Shape540 = x3d.Shape(USE="HAnimJointShape")

Transform539.children.append(Shape540)

Transform538.children.append(Transform539)

HAnimSegment537.children.append(Transform538)
Shape541 = x3d.Shape()
LineSet542 = x3d.LineSet()
LineSet542.vertexCount = [2]
ColorRGBA543 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet542.color = ColorRGBA543
Coordinate544 = x3d.Coordinate()
Coordinate544.point = [(0.2029, 1.4376, -0.0387),(0.2014, 1.1357, -0.0682)]

LineSet542.coord = Coordinate544

Shape541.geometry = LineSet542

HAnimSegment537.children.append(Shape541)
HAnimSite545 = x3d.HAnimSite(DEF="hanim_l_bideltoid")
HAnimSite545.name = "l_bideltoid"
TouchSensor546 = x3d.TouchSensor()
TouchSensor546.description = "HAnimSite 96 l_bideltoid"

HAnimSite545.children.append(TouchSensor546)
Shape547 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite545.children.append(Shape547)
Billboard548 = x3d.Billboard()
Shape549 = x3d.Shape()
Text550 = x3d.Text()
Text550.string = ["96"]
FontStyle551 = x3d.FontStyle()
FontStyle551.size = 0.035

Text550.fontStyle = FontStyle551

Shape549.geometry = Text550

Billboard548.children.append(Shape549)

HAnimSite545.children.append(Billboard548)

HAnimSegment537.children.append(HAnimSite545)
HAnimSite552 = x3d.HAnimSite(DEF="hanim_l_humeral_lateral_epicondyles")
HAnimSite552.name = "l_humeral_lateral_epicondyles"
HAnimSite552.translation = [0.228,1.1482,-0.11]
TouchSensor553 = x3d.TouchSensor()
TouchSensor553.description = "HAnimSite 63 l_humeral_lateral_epicondyles"

HAnimSite552.children.append(TouchSensor553)
Shape554 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite552.children.append(Shape554)
Billboard555 = x3d.Billboard()
Shape556 = x3d.Shape()
Text557 = x3d.Text()
Text557.string = ["63"]
FontStyle558 = x3d.FontStyle()
FontStyle558.size = 0.035

Text557.fontStyle = FontStyle558

Shape556.geometry = Text557

Billboard555.children.append(Shape556)

HAnimSite552.children.append(Billboard555)

HAnimSegment537.children.append(HAnimSite552)

HAnimJoint536.children.append(HAnimSegment537)
HAnimJoint559 = x3d.HAnimJoint(DEF="hanim_l_elbow")
HAnimJoint559.name = "l_elbow"
HAnimJoint559.center = [0.2014,1.1357,-0.0682]
HAnimSegment560 = x3d.HAnimSegment(DEF="hanim_l_forearm")
HAnimSegment560.name = "l_forearm"
Transform561 = x3d.Transform()
Transform561.translation = [0.2014,1.1357,-0.0682]
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
Coordinate567.point = [(0.2014, 1.1357, -0.0682),(0.1984, 0.8663, -0.0583)]

LineSet565.coord = Coordinate567

Shape564.geometry = LineSet565

HAnimSegment560.children.append(Shape564)
HAnimSite568 = x3d.HAnimSite(DEF="hanim_l_humeral_medial_epicondyles")
HAnimSite568.name = "l_humeral_medial_epicondyles"
HAnimSite568.translation = [0.1735,1.1272,-0.1113]
TouchSensor569 = x3d.TouchSensor()
TouchSensor569.description = "HAnimSite 64 l_humeral_medial_epicondyles"

HAnimSite568.children.append(TouchSensor569)
Shape570 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite568.children.append(Shape570)
Billboard571 = x3d.Billboard()
Shape572 = x3d.Shape()
Text573 = x3d.Text()
Text573.string = ["64"]
FontStyle574 = x3d.FontStyle()
FontStyle574.size = 0.035

Text573.fontStyle = FontStyle574

Shape572.geometry = Text573

Billboard571.children.append(Shape572)

HAnimSite568.children.append(Billboard571)

HAnimSegment560.children.append(HAnimSite568)
HAnimSite575 = x3d.HAnimSite(DEF="hanim_l_olecranon")
HAnimSite575.name = "l_olecranon"
HAnimSite575.translation = [-0.1962,1.1375,-0.1123]
TouchSensor576 = x3d.TouchSensor()
TouchSensor576.description = "HAnimSite 65 l_olecranon"

HAnimSite575.children.append(TouchSensor576)
Shape577 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite575.children.append(Shape577)
Billboard578 = x3d.Billboard()
Shape579 = x3d.Shape()
Text580 = x3d.Text()
Text580.string = ["65"]
FontStyle581 = x3d.FontStyle()
FontStyle581.size = 0.035

Text580.fontStyle = FontStyle581

Shape579.geometry = Text580

Billboard578.children.append(Shape579)

HAnimSite575.children.append(Billboard578)

HAnimSegment560.children.append(HAnimSite575)
HAnimSite582 = x3d.HAnimSite(DEF="hanim_l_radial_styloid")
HAnimSite582.name = "l_radial_styloid"
HAnimSite582.translation = [0.1901,0.8645,-0.0415]
TouchSensor583 = x3d.TouchSensor()
TouchSensor583.description = "HAnimSite 71 l_radial_styloid"

HAnimSite582.children.append(TouchSensor583)
Shape584 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite582.children.append(Shape584)
Billboard585 = x3d.Billboard()
Shape586 = x3d.Shape()
Text587 = x3d.Text()
Text587.string = ["71"]
FontStyle588 = x3d.FontStyle()
FontStyle588.size = 0.035

Text587.fontStyle = FontStyle588

Shape586.geometry = Text587

Billboard585.children.append(Shape586)

HAnimSite582.children.append(Billboard585)

HAnimSegment560.children.append(HAnimSite582)
HAnimSite589 = x3d.HAnimSite(DEF="hanim_l_radiale")
HAnimSite589.name = "l_radiale"
HAnimSite589.translation = [0.2182,1.1212,-0.1167]
TouchSensor590 = x3d.TouchSensor()
TouchSensor590.description = "HAnimSite 69 l_radiale"

HAnimSite589.children.append(TouchSensor590)
Shape591 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite589.children.append(Shape591)
Billboard592 = x3d.Billboard()
Shape593 = x3d.Shape()
Text594 = x3d.Text()
Text594.string = ["69"]
FontStyle595 = x3d.FontStyle()
FontStyle595.size = 0.035

Text594.fontStyle = FontStyle595

Shape593.geometry = Text594

Billboard592.children.append(Shape593)

HAnimSite589.children.append(Billboard592)

HAnimSegment560.children.append(HAnimSite589)

HAnimJoint559.children.append(HAnimSegment560)
HAnimJoint596 = x3d.HAnimJoint(DEF="hanim_l_radiocarpal")
HAnimJoint596.name = "l_radiocarpal"
HAnimJoint596.center = [0.1984,0.8663,-0.0583]

HAnimJoint559.children.append(HAnimJoint596)

HAnimJoint536.children.append(HAnimJoint559)

HAnimJoint315.children.append(HAnimJoint536)
HAnimJoint597 = x3d.HAnimJoint(DEF="hanim_r_shoulder")
HAnimJoint597.name = "r_shoulder"
HAnimJoint597.center = [-0.1907,1.4407,-0.0325]
HAnimSegment598 = x3d.HAnimSegment(DEF="hanim_r_upperarm")
HAnimSegment598.name = "r_upperarm"
Transform599 = x3d.Transform()
Transform599.translation = [-0.1907,1.4407,-0.0325]
Transform600 = x3d.Transform()
Shape601 = x3d.Shape(USE="HAnimJointShape")

Transform600.children.append(Shape601)

Transform599.children.append(Transform600)

HAnimSegment598.children.append(Transform599)
Shape602 = x3d.Shape()
LineSet603 = x3d.LineSet()
LineSet603.vertexCount = [2]
ColorRGBA604 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet603.color = ColorRGBA604
Coordinate605 = x3d.Coordinate()
Coordinate605.point = [(-0.1907, 1.4407, -0.0325),(-0.1949, 1.1388, -0.062)]

LineSet603.coord = Coordinate605

Shape602.geometry = LineSet603

HAnimSegment598.children.append(Shape602)
HAnimSite606 = x3d.HAnimSite(DEF="hanim_r_bideltoid")
HAnimSite606.name = "r_bideltoid"
TouchSensor607 = x3d.TouchSensor()
TouchSensor607.description = "HAnimSite 97 r_bideltoid"

HAnimSite606.children.append(TouchSensor607)
Shape608 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite606.children.append(Shape608)
Billboard609 = x3d.Billboard()
Shape610 = x3d.Shape()
Text611 = x3d.Text()
Text611.string = ["97"]
FontStyle612 = x3d.FontStyle()
FontStyle612.size = 0.035

Text611.fontStyle = FontStyle612

Shape610.geometry = Text611

Billboard609.children.append(Shape610)

HAnimSite606.children.append(Billboard609)

HAnimSegment598.children.append(HAnimSite606)
HAnimSite613 = x3d.HAnimSite(DEF="hanim_r_humeral_lateral_epicondyles")
HAnimSite613.name = "r_humeral_lateral_epicondyles"
HAnimSite613.translation = [-0.2224,1.1517,-0.1033]
TouchSensor614 = x3d.TouchSensor()
TouchSensor614.description = "HAnimSite 66 r_humeral_lateral_epicondyles"

HAnimSite613.children.append(TouchSensor614)
Shape615 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite613.children.append(Shape615)
Billboard616 = x3d.Billboard()
Shape617 = x3d.Shape()
Text618 = x3d.Text()
Text618.string = ["66"]
FontStyle619 = x3d.FontStyle()
FontStyle619.size = 0.035

Text618.fontStyle = FontStyle619

Shape617.geometry = Text618

Billboard616.children.append(Shape617)

HAnimSite613.children.append(Billboard616)

HAnimSegment598.children.append(HAnimSite613)

HAnimJoint597.children.append(HAnimSegment598)
HAnimJoint620 = x3d.HAnimJoint(DEF="hanim_r_elbow")
HAnimJoint620.name = "r_elbow"
HAnimJoint620.center = [-0.1949,1.1388,-0.062]
HAnimSegment621 = x3d.HAnimSegment(DEF="hanim_r_forearm")
HAnimSegment621.name = "r_forearm"
Transform622 = x3d.Transform()
Transform622.translation = [-0.1949,1.1388,-0.062]
Transform623 = x3d.Transform()
Shape624 = x3d.Shape(USE="HAnimJointShape")

Transform623.children.append(Shape624)

Transform622.children.append(Transform623)

HAnimSegment621.children.append(Transform622)
Shape625 = x3d.Shape()
LineSet626 = x3d.LineSet()
LineSet626.vertexCount = [2]
ColorRGBA627 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet626.color = ColorRGBA627
Coordinate628 = x3d.Coordinate()
Coordinate628.point = [(-0.1949, 1.1388, -0.062),(-0.1959, 0.8694, -0.0521)]

LineSet626.coord = Coordinate628

Shape625.geometry = LineSet626

HAnimSegment621.children.append(Shape625)
HAnimSite629 = x3d.HAnimSite(DEF="hanim_r_humeral_medial_epicondyles")
HAnimSite629.name = "r_humeral_medial_epicondyles"
HAnimSite629.translation = [-0.168,1.1298,-0.1062]
TouchSensor630 = x3d.TouchSensor()
TouchSensor630.description = "HAnimSite 67 r_humeral_medial_epicondyles"

HAnimSite629.children.append(TouchSensor630)
Shape631 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite629.children.append(Shape631)
Billboard632 = x3d.Billboard()
Shape633 = x3d.Shape()
Text634 = x3d.Text()
Text634.string = ["67"]
FontStyle635 = x3d.FontStyle()
FontStyle635.size = 0.035

Text634.fontStyle = FontStyle635

Shape633.geometry = Text634

Billboard632.children.append(Shape633)

HAnimSite629.children.append(Billboard632)

HAnimSegment621.children.append(HAnimSite629)
HAnimSite636 = x3d.HAnimSite(DEF="hanim_r_olecranon")
HAnimSite636.name = "r_olecranon"
HAnimSite636.translation = [-0.1907,1.1405,-0.1065]
TouchSensor637 = x3d.TouchSensor()
TouchSensor637.description = "HAnimSite 68 r_olecranon"

HAnimSite636.children.append(TouchSensor637)
Shape638 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite636.children.append(Shape638)
Billboard639 = x3d.Billboard()
Shape640 = x3d.Shape()
Text641 = x3d.Text()
Text641.string = ["68"]
FontStyle642 = x3d.FontStyle()
FontStyle642.size = 0.035

Text641.fontStyle = FontStyle642

Shape640.geometry = Text641

Billboard639.children.append(Shape640)

HAnimSite636.children.append(Billboard639)

HAnimSegment621.children.append(HAnimSite636)
HAnimSite643 = x3d.HAnimSite(DEF="hanim_r_radial_styloid")
HAnimSite643.name = "r_radial_styloid"
HAnimSite643.translation = [-0.1884,0.8676,-0.036]
TouchSensor644 = x3d.TouchSensor()
TouchSensor644.description = "HAnimSite 74 r_radial_styloid"

HAnimSite643.children.append(TouchSensor644)
Shape645 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite643.children.append(Shape645)
Billboard646 = x3d.Billboard()
Shape647 = x3d.Shape()
Text648 = x3d.Text()
Text648.string = ["74"]
FontStyle649 = x3d.FontStyle()
FontStyle649.size = 0.035

Text648.fontStyle = FontStyle649

Shape647.geometry = Text648

Billboard646.children.append(Shape647)

HAnimSite643.children.append(Billboard646)

HAnimSegment621.children.append(HAnimSite643)
HAnimSite650 = x3d.HAnimSite(DEF="hanim_r_radiale")
HAnimSite650.name = "r_radiale"
HAnimSite650.translation = [-0.213,1.1305,-0.1091]
TouchSensor651 = x3d.TouchSensor()
TouchSensor651.description = "HAnimSite 72 r_radiale"

HAnimSite650.children.append(TouchSensor651)
Shape652 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite650.children.append(Shape652)
Billboard653 = x3d.Billboard()
Shape654 = x3d.Shape()
Text655 = x3d.Text()
Text655.string = ["72"]
FontStyle656 = x3d.FontStyle()
FontStyle656.size = 0.035

Text655.fontStyle = FontStyle656

Shape654.geometry = Text655

Billboard653.children.append(Shape654)

HAnimSite650.children.append(Billboard653)

HAnimSegment621.children.append(HAnimSite650)

HAnimJoint620.children.append(HAnimSegment621)
HAnimJoint657 = x3d.HAnimJoint(DEF="hanim_r_radiocarpal")
HAnimJoint657.name = "r_radiocarpal"
HAnimJoint657.center = [-0.1959,0.8694,-0.0521]

HAnimJoint620.children.append(HAnimJoint657)

HAnimJoint597.children.append(HAnimJoint620)

HAnimJoint315.children.append(HAnimJoint597)

HAnimJoint37.children.append(HAnimJoint315)

HAnimHumanoid36.skeleton.append(HAnimJoint37)
HAnimJoint658 = x3d.HAnimJoint(USE="hanim_humanoid_root")

HAnimHumanoid36.joints.append(HAnimJoint658)
HAnimJoint659 = x3d.HAnimJoint(USE="hanim_sacroiliac")

HAnimHumanoid36.joints.append(HAnimJoint659)
HAnimJoint660 = x3d.HAnimJoint(USE="hanim_l_hip")

HAnimHumanoid36.joints.append(HAnimJoint660)
HAnimJoint661 = x3d.HAnimJoint(USE="hanim_l_knee")

HAnimHumanoid36.joints.append(HAnimJoint661)
HAnimJoint662 = x3d.HAnimJoint(USE="hanim_l_talocrural")

HAnimHumanoid36.joints.append(HAnimJoint662)
HAnimJoint663 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint663)
HAnimJoint664 = x3d.HAnimJoint(USE="hanim_r_hip")

HAnimHumanoid36.joints.append(HAnimJoint664)
HAnimJoint665 = x3d.HAnimJoint(USE="hanim_r_knee")

HAnimHumanoid36.joints.append(HAnimJoint665)
HAnimJoint666 = x3d.HAnimJoint(USE="hanim_r_talocrural")

HAnimHumanoid36.joints.append(HAnimJoint666)
HAnimJoint667 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint667)
HAnimJoint668 = x3d.HAnimJoint(USE="hanim_vl5")

HAnimHumanoid36.joints.append(HAnimJoint668)
HAnimJoint669 = x3d.HAnimJoint(USE="hanim_skullbase")

HAnimHumanoid36.joints.append(HAnimJoint669)
HAnimJoint670 = x3d.HAnimJoint(USE="hanim_l_shoulder")

HAnimHumanoid36.joints.append(HAnimJoint670)
HAnimJoint671 = x3d.HAnimJoint(USE="hanim_l_elbow")

HAnimHumanoid36.joints.append(HAnimJoint671)
HAnimJoint672 = x3d.HAnimJoint(USE="hanim_l_radiocarpal")

HAnimHumanoid36.joints.append(HAnimJoint672)
HAnimJoint673 = x3d.HAnimJoint(USE="hanim_r_shoulder")

HAnimHumanoid36.joints.append(HAnimJoint673)
HAnimJoint674 = x3d.HAnimJoint(USE="hanim_r_elbow")

HAnimHumanoid36.joints.append(HAnimJoint674)
HAnimJoint675 = x3d.HAnimJoint(USE="hanim_r_radiocarpal")

HAnimHumanoid36.joints.append(HAnimJoint675)
Coordinate676 = x3d.Coordinate(DEF="TheSkinCoord")
Coordinate676.point = [(0, 1.77, 0),(0, 1.665, 0.09),(-0.033, 1.62, 0.087),(0.033, 1.62, 0.087),(0, 1.55, 0.097),(-0.077, 1.64, -0.01),(-0.0527, 1.58, 0.015),(0.077, 1.64, -0.01),(0.0527, 1.58, 0.015),(0, 1.625, -0.0925),(-0.03, 1.46, 0.035),(0, 1.44, 0.03),(0.03, 1.46, 0.035),(-0.1135, 1.318, 0.095),(0.1135, 1.318, 0.095),(0, 1.25, 0.113),(-0.087, 1.19, 0.09),(-0.0935, 1.03, 0.075),(0.087, 1.19, 0.09),(0.0935, 1.03, 0.075),(-0.1425, 1.065, 0.0033),(-0.15, 0.9, -0.01),(0.1425, 1.065, 0.0033),(0.15, 0.9, -0.01),(0, 1.53, -0.084),(0.0049, 1.1908, -0.1113),(-0.0773, 1.019, -0.12),(0.0773, 1.019, -0.12),(0.005, 1.0915, -0.1091),(-0.178, 1.4825, -0.0625),(-0.17, 1.38, 0.007),(-0.1884, 0.8676, -0.036),(-0.16, 1.38, -0.127),(-0.2, 1.1388, -0.08),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.23, 1.133, -0.055),(-0.1977, 0.8169, -0.0177),(-0.1941, 0.6772, -0.0423),(-0.2117, 0.8562, -0.0584),(-0.1929, 0.789, -0.1064),(0.175, 1.4825, -0.06),(0.17, 1.38, 0.007),(0.1901, 0.8645, -0.0415),(0.16, 1.38, -0.125),(0.2, 1.1388, -0.08),(0.165, 1.1388, -0.04),(0.244, 1.1388, -0.04),(0.23, 1.133, -0.055),(0.2009, 0.8139, -0.0237),(0.2056, 0.6743, -0.0482),(0.2142, 0.8529, -0.0648),(0.1929, 0.786, -0.1122),(-0.1, 0.4913, -0.03),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.165, 0.01, 0.12),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.09, 0.056, 0.0125),(-0.115, 0.02, 0.122),(-0.115, 0.04, -0.055),(-0.11, 0.011, 0.19),(0.0993, 0.4881, -0.0309),(0.17, 0.466, 0),(0.05, 0.4867, 0),(0.165, 0.01, 0.12),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.09, 0.056, 0.0125),(0.115, 0.02, 0.122),(0.115, 0.04, -0.055),(0.11, 0.011, 0.19),(0, 0.875, 0),(-0.0646, 1.5149, -0.038),(0.0646, 1.5149, -0.038),(0, 1.07225, 0.09),(-0.11, 1.427, -0.1375),(-0.235, 1.42, -0.0625),(0.11, 1.427, -0.1375),(0.235, 1.42, -0.0625),(0, 1.41, -0.145),(0, 0.925, 0.08),(-0.087, 1.19, -0.09),(0.087, 1.19, -0.09),(0.172, 1.32, -0.03),(-0.172, 1.32, -0.03),(0.15, 1.23, -0.015),(-0.15, 1.23, -0.015),(0.079, 0.92, -0.14),(0.1, 0.9, 0.077),(-0.079, 0.92, -0.14),(-0.1, 0.9, 0.075),(0, 0.87, 0),(0.171, 0.65, 0),(0.02, 0.65, 0),(0.1, 0.65, -0.08),(0.1, 0.65, 0.07),(-0.171, 0.65, 0),(-0.02, 0.65, 0),(-0.1, 0.65, -0.08),(-0.1, 0.65, 0.07),(0.25, 1.27, -0.04),(0.17, 1.27, -0.04),(0.2, 1.27, -0.09),(0.2, 1.27, 0.02),(0.244, 1.1388, -0.04),(0.165, 1.1388, -0.04),(0.2, 1.1388, -0.08),(0.2, 1.1388, -0.013),(0.225, 1, -0.01),(0.225, 1, -0.07),(0.185, 1, -0.01),(0.185, 1, -0.07),(0.2, 1.1388, -0.04),(0.225, 0.92, -0.04),(0.175, 0.92, -0.04),(0.2, 0.92, -0.065),(0.2, 0.92, -0.015),(0.225, 0.89, -0.04),(0.175, 0.89, -0.04),(0.2, 0.89, -0.065),(0.2, 0.89, -0.015),(0.218, 0.86, -0.04),(0.184, 0.86, -0.04),(0.2, 0.87, -0.07),(0.2, 0.87, 0),(0.21, 0.85, 0),(0.1854, 0.85, 0),(0.212, 0.84, -0.015),(0.183, 0.84, -0.015),(0.213, 0.835, -0.04),(0.19, 0.835, -0.04),(0.211, 0.835, -0.065),(0.192, 0.835, -0.065),(0.208, 0.84, -0.085),(0.19, 0.84, -0.085),(0.2, 0.84, -0.095),(0.215, 0.82, 0),(0.193, 0.815, 0.005),(0.198, 0.8, 0.012),(0.21, 0.82, 0.03),(0.19, 0.82, 0.03),(0.2, 0.835, 0.039),(0.212, 0.8, 0.05),(0.188, 0.8, 0.05),(0.2, 0.807, 0.057),(0.2, 0.793, 0.035),(0.2, 0.774, 0.076),(0.212, 0.78, 0.07),(0.188, 0.78, 0.07),(0.2, 0.785, 0.075),(0.2, 0.77, 0.062),(0.215, 0.793, -0.015),(0.187, 0.793, -0.015),(0.2, 0.793, -0.005),(0.215, 0.788, -0.04),(0.187, 0.788, -0.04),(0.215, 0.793, -0.065),(0.187, 0.793, -0.065),(0.21, 0.79, -0.085),(0.19, 0.79, -0.085),(0.2, 0.79, -0.095),(0.19, 0.77, -0.0275),(0.19, 0.77, -0.0525),(0.19, 0.78, -0.0775),(0.212, 0.745, -0.015),(0.188, 0.745, -0.02),(0.2, 0.745, -0.0255),(0.2, 0.745, -0.0045),(0.211, 0.72, -0.015),(0.189, 0.72, -0.015),(0.2, 0.72, -0.0252),(0.2, 0.72, -0.0048),(0.21, 0.695, -0.015),(0.19, 0.695, -0.015),(0.2, 0.695, -0.025),(0.2, 0.695, -0.005),(0.2, 0.685, -0.015),(0.215, 0.74, -0.04),(0.185, 0.74, -0.04),(0.2, 0.74, -0.055),(0.2, 0.74, -0.025),(0.21, 0.7142, -0.04),(0.19, 0.7142, -0.04),(0.2, 0.7142, -0.053),(0.2, 0.7142, -0.027),(0.21, 0.68, -0.04),(0.19, 0.68, -0.04),(0.2, 0.68, -0.05),(0.2, 0.68, -0.03),(0.2, 0.67, -0.04),(0.212, 0.74, -0.065),(0.188, 0.74, -0.065),(0.2, 0.74, -0.0756),(0.2, 0.74, -0.0542),(0.21, 0.7177, -0.065),(0.19, 0.7177, -0.065),(0.2, 0.7177, -0.0751),(0.2, 0.7177, -0.0549),(0.21, 0.695, -0.065),(0.19, 0.695, -0.065),(0.2, 0.695, -0.075),(0.2, 0.695, -0.055),(0.2, 0.685, -0.065),(0.211, 0.755, -0.085),(0.189, 0.755, -0.085),(0.2, 0.755, -0.0952),(0.2, 0.755, -0.0748),(0.21, 0.735, -0.085),(0.19, 0.735, -0.085),(0.2, 0.735, -0.0951),(0.2, 0.735, -0.0749),(0.21, 0.72, -0.085),(0.19, 0.72, -0.085),(0.2, 0.72, -0.095),(0.2, 0.72, -0.075),(0.2, 0.71, -0.085),(-0.23, 1.23, -0.04),(-0.16, 1.23, -0.04),(-0.2, 1.235, -0.105),(-0.2, 1.235, 0.02),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.2, 1.1388, -0.08),(-0.2, 1.1388, 0.013),(-0.225, 1, -0.01),(-0.225, 1, -0.07),(-0.185, 1, -0.01),(-0.185, 1, -0.07),(-0.2, 1.1388, -0.04),(-0.225, 0.92, -0.04),(-0.175, 0.92, -0.04),(-0.2, 0.92, -0.065),(-0.2, 0.92, -0.015),(-0.225, 0.89, -0.04),(-0.175, 0.89, -0.04),(-0.2, 0.89, -0.065),(-0.2, 0.89, -0.015),(-0.218, 0.86, -0.04),(-0.184, 0.86, -0.04),(-0.2, 0.87, -0.07),(-0.2, 0.87, 0),(-0.21, 0.85, 0),(-0.1854, 0.85, 0),(-0.212, 0.84, -0.015),(-0.183, 0.84, -0.015),(-0.213, 0.835, -0.04),(-0.19, 0.835, -0.04),(-0.211, 0.835, -0.065),(-0.192, 0.835, -0.065),(-0.208, 0.84, -0.085),(-0.19, 0.84, -0.085),(-0.2, 0.84, -0.095),(-0.215, 0.82, 0),(-0.193, 0.815, 0.005),(-0.198, 0.8, 0.012),(-0.21, 0.82, 0.03),(-0.19, 0.82, 0.03),(-0.2, 0.835, 0.039),(-0.212, 0.8, 0.05),(-0.188, 0.8, 0.05),(-0.2, 0.807, 0.057),(-0.2, 0.793, 0.035),(-0.2, 0.774, 0.076),(-0.212, 0.78, 0.07),(-0.188, 0.78, 0.07),(-0.2, 0.785, 0.075),(-0.2, 0.77, 0.062),(-0.215, 0.793, -0.015),(-0.187, 0.793, -0.015),(-0.2, 0.793, -0.005),(-0.215, 0.788, -0.04),(-0.187, 0.788, -0.04),(-0.215, 0.793, -0.065),(-0.187, 0.793, -0.065),(-0.21, 0.79, -0.085),(-0.19, 0.79, -0.085),(-0.2, 0.79, -0.095),(-0.19, 0.77, -0.0275),(-0.19, 0.77, -0.0525),(-0.19, 0.78, -0.0775),(-0.212, 0.745, -0.015),(-0.188, 0.745, -0.02),(-0.2, 0.745, -0.0255),(-0.2, 0.745, -0.0045),(-0.211, 0.72, -0.015),(-0.189, 0.72, -0.015),(-0.2, 0.72, -0.0252),(-0.2, 0.72, -0.0048),(-0.21, 0.695, -0.015),(-0.19, 0.695, -0.015),(-0.2, 0.695, -0.025),(-0.2, 0.695, -0.005),(-0.2, 0.685, -0.015),(-0.215, 0.74, -0.04),(-0.185, 0.74, -0.04),(-0.2, 0.74, -0.055),(-0.2, 0.74, -0.025),(-0.21, 0.7142, -0.04),(-0.19, 0.7142, -0.04),(-0.2, 0.7142, -0.053),(-0.2, 0.7142, -0.027),(-0.21, 0.68, -0.04),(-0.19, 0.68, -0.04),(-0.2, 0.68, -0.05),(-0.2, 0.68, -0.03),(-0.2, 0.67, -0.04),(-0.212, 0.74, -0.065),(-0.188, 0.74, -0.065),(-0.2, 0.74, -0.0756),(-0.2, 0.74, -0.0542),(-0.21, 0.7177, -0.065),(-0.19, 0.7177, -0.065),(-0.2, 0.7177, -0.0751),(-0.2, 0.7177, -0.0549),(-0.21, 0.695, -0.065),(-0.19, 0.695, -0.065),(-0.2, 0.695, -0.075),(-0.2, 0.695, -0.055),(-0.2, 0.685, -0.065),(-0.211, 0.755, -0.085),(-0.189, 0.755, -0.085),(-0.2, 0.755, -0.0952),(-0.2, 0.755, -0.0748),(-0.21, 0.735, -0.085),(-0.19, 0.735, -0.085),(-0.2, 0.735, -0.0951),(-0.2, 0.735, -0.0749),(-0.21, 0.72, -0.085),(-0.19, 0.72, -0.085),(-0.2, 0.72, -0.095),(-0.2, 0.72, -0.075),(-0.2, 0.71, -0.085),(0.115, 0.466, 0.06),(0.115, 0.466, -0.055),(0.15, 0.466, 0),(0.05, 0.466, 0),(0.17, 0.3, 0),(0.06, 0.3, 0),(0.1, 0.3, -0.05),(0.1, 0.3, 0.05),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.115, 0.069, -0.045),(0.117, 0.0975, 0.0615),(0.1375, 0.006, -0.03),(0.095, 0.006, -0.03),(0.115, 0.015, -0.045),(0.115, 0.06, 0.1),(0.115, 0, 0.07),(0.165, 0, 0.07),(0.095, 0, 0.07),(0.115, 0.04, 0.13),(0.125, 0, 0.12),(0.165, 0, 0.12),(0.087, 0, 0.122),(0.09, 0.012, 0.188),(0.11, 0.011, 0.19),(0.128, 0.011, 0.185),(0.142, 0.011, 0.178),(0.154, 0.01, 0.168),(-0.115, 0.466, 0.06),(-0.115, 0.466, -0.055),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.17, 0.3, 0),(-0.06, 0.3, 0),(-0.1, 0.3, -0.05),(-0.1, 0.3, 0.05),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.115, 0.069, -0.045),(-0.117, 0.0975, 0.0615),(-0.1375, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.115, 0.06, 0.1),(-0.115, 0, 0.07),(-0.165, 0, 0.07),(-0.095, 0, 0.07),(-0.115, 0.04, 0.13),(-0.125, 0, 0.12),(-0.165, 0, 0.12),(-0.087, 0, 0.122),(-0.09, 0.012, 0.188),(-0.11, 0.011, 0.19),(-0.128, 0.011, 0.185),(-0.142, 0.011, 0.178),(-0.154, 0.01, 0.168)]

HAnimHumanoid36.skinCoord = Coordinate676
Shape677 = x3d.Shape(DEF="SkinShape")
Appearance678 = x3d.Appearance(DEF="SkinAppearance")
Material679 = x3d.Material(DEF="SkinMaterial")
Material679.ambientIntensity = 0.6
Material679.diffuseColor = [1,1,1]
Material679.shininess = 0.6
Material679.transparency = 1

Appearance678.material = Material679
ImageTexture680 = x3d.ImageTexture(DEF="zBlueSpiralBkg2")
ImageTexture680.description = "Blue Spiral Pattern"
ImageTexture680.url = ["../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]

Appearance678.texture = ImageTexture680

Shape677.appearance = Appearance678
IndexedFaceSet681 = x3d.IndexedFaceSet()
IndexedFaceSet681.creaseAngle = 3.1
IndexedFaceSet681.coordIndex = [0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]
Color682 = x3d.Color()
Color682.color = [(1, 0, 0),(0, 1, 1),(0, 1, 0),(1, 1, 0),(1, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(0, 1, 1),(1, 1, 0),(1, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(1, 0, 0),(1, 0, 0),(1, 1, 0),(1, 1, 0),(1, 1, 1),(1, 0, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(1, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 1)]

IndexedFaceSet681.color = Color682
Coordinate683 = x3d.Coordinate(USE="TheSkinCoord")

IndexedFaceSet681.coord = Coordinate683

Shape677.geometry = IndexedFaceSet681

HAnimHumanoid36.skin.append(Shape677)

Scene9.children.append(HAnimHumanoid36)

X3D0.Scene = Scene9
f = open("../data/Humanoid1.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Humanoid1.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/Humanoid1.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
