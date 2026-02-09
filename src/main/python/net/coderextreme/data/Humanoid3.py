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
meta3.content = "Humanoid3.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "identifier"
meta4.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid3.x3d"

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
Coordinate457.point = [(0.0028, 1.0568, -0.0776),(0.0035, 1.0925, -0.0787)]

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
HAnimJoint479 = x3d.HAnimJoint(DEF="hanim_vl4")
HAnimJoint479.name = "vl4"
HAnimJoint479.center = [0.0035,1.0925,-0.0787]
HAnimSegment480 = x3d.HAnimSegment(DEF="hanim_l4")
HAnimSegment480.name = "l4"
Transform481 = x3d.Transform()
Transform481.translation = [0.0035,1.0925,-0.0787]
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
Coordinate487.point = [(0.0035, 1.0925, -0.0787),(0.0041, 1.1276, -0.0796)]

LineSet485.coord = Coordinate487

Shape484.geometry = LineSet485

HAnimSegment480.children.append(Shape484)

HAnimJoint479.children.append(HAnimSegment480)
HAnimJoint488 = x3d.HAnimJoint(DEF="hanim_vl3")
HAnimJoint488.name = "vl3"
HAnimJoint488.center = [0.0041,1.1276,-0.0796]
HAnimSegment489 = x3d.HAnimSegment(DEF="hanim_l3")
HAnimSegment489.name = "l3"
Transform490 = x3d.Transform()
Transform490.translation = [0.0041,1.1276,-0.0796]
Transform491 = x3d.Transform()
Shape492 = x3d.Shape(USE="HAnimJointShape")

Transform491.children.append(Shape492)

Transform490.children.append(Transform491)

HAnimSegment489.children.append(Transform490)
Shape493 = x3d.Shape()
LineSet494 = x3d.LineSet()
LineSet494.vertexCount = [2]
ColorRGBA495 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet494.color = ColorRGBA495
Coordinate496 = x3d.Coordinate()
Coordinate496.point = [(0.0041, 1.1276, -0.0796),(0.0045, 1.1546, -0.08)]

LineSet494.coord = Coordinate496

Shape493.geometry = LineSet494

HAnimSegment489.children.append(Shape493)

HAnimJoint488.children.append(HAnimSegment489)
HAnimJoint497 = x3d.HAnimJoint(DEF="hanim_vl2")
HAnimJoint497.name = "vl2"
HAnimJoint497.center = [0.0045,1.1546,-0.08]
HAnimSegment498 = x3d.HAnimSegment(DEF="hanim_l2")
HAnimSegment498.name = "l2"
Transform499 = x3d.Transform()
Transform499.translation = [0.0045,1.1546,-0.08]
Transform500 = x3d.Transform()
Shape501 = x3d.Shape(USE="HAnimJointShape")

Transform500.children.append(Shape501)

Transform499.children.append(Transform500)

HAnimSegment498.children.append(Transform499)
Shape502 = x3d.Shape()
LineSet503 = x3d.LineSet()
LineSet503.vertexCount = [2]
ColorRGBA504 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet503.color = ColorRGBA504
Coordinate505 = x3d.Coordinate()
Coordinate505.point = [(0.0045, 1.1546, -0.08),(0.0048, 1.1912, -0.0805)]

LineSet503.coord = Coordinate505

Shape502.geometry = LineSet503

HAnimSegment498.children.append(Shape502)
HAnimSite506 = x3d.HAnimSite(DEF="hanim_l_rib10")
HAnimSite506.name = "l_rib10"
HAnimSite506.translation = [0.0871,1.1925,0.0992]
TouchSensor507 = x3d.TouchSensor()
TouchSensor507.description = "HAnimSite 28 l_rib10"

HAnimSite506.children.append(TouchSensor507)
Shape508 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite506.children.append(Shape508)
Billboard509 = x3d.Billboard()
Shape510 = x3d.Shape()
Text511 = x3d.Text()
Text511.string = ["28"]
FontStyle512 = x3d.FontStyle()
FontStyle512.size = 0.035

Text511.fontStyle = FontStyle512

Shape510.geometry = Text511

Billboard509.children.append(Shape510)

HAnimSite506.children.append(Billboard509)

HAnimSegment498.children.append(HAnimSite506)
HAnimSite513 = x3d.HAnimSite(DEF="hanim_r_rib10")
HAnimSite513.name = "r_rib10"
HAnimSite513.translation = [-0.0711,1.1941,0.1016]
TouchSensor514 = x3d.TouchSensor()
TouchSensor514.description = "HAnimSite 30 r_rib10"

HAnimSite513.children.append(TouchSensor514)
Shape515 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite513.children.append(Shape515)
Billboard516 = x3d.Billboard()
Shape517 = x3d.Shape()
Text518 = x3d.Text()
Text518.string = ["30"]
FontStyle519 = x3d.FontStyle()
FontStyle519.size = 0.035

Text518.fontStyle = FontStyle519

Shape517.geometry = Text518

Billboard516.children.append(Shape517)

HAnimSite513.children.append(Billboard516)

HAnimSegment498.children.append(HAnimSite513)
HAnimSite520 = x3d.HAnimSite(DEF="hanim_spine_2_middle_back")
HAnimSite520.name = "spine_2_middle_back"
TouchSensor521 = x3d.TouchSensor()
TouchSensor521.description = "HAnimSite  spine_2_middle_back"

HAnimSite520.children.append(TouchSensor521)
Shape522 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite520.children.append(Shape522)
Billboard523 = x3d.Billboard()
Shape524 = x3d.Shape()
Text525 = x3d.Text()
Text525.string = [""]
FontStyle526 = x3d.FontStyle()
FontStyle526.size = 0.035

Text525.fontStyle = FontStyle526

Shape524.geometry = Text525

Billboard523.children.append(Shape524)

HAnimSite520.children.append(Billboard523)

HAnimSegment498.children.append(HAnimSite520)

HAnimJoint497.children.append(HAnimSegment498)
HAnimJoint527 = x3d.HAnimJoint(DEF="hanim_vl1")
HAnimJoint527.name = "vl1"
HAnimJoint527.center = [0.0048,1.1912,-0.0805]
HAnimSegment528 = x3d.HAnimSegment(DEF="hanim_l1")
HAnimSegment528.name = "l1"
Transform529 = x3d.Transform()
Transform529.translation = [0.0048,1.1912,-0.0805]
Transform530 = x3d.Transform()
Shape531 = x3d.Shape(USE="HAnimJointShape")

Transform530.children.append(Shape531)

Transform529.children.append(Transform530)

HAnimSegment528.children.append(Transform529)
Shape532 = x3d.Shape()
LineSet533 = x3d.LineSet()
LineSet533.vertexCount = [2]
ColorRGBA534 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet533.color = ColorRGBA534
Coordinate535 = x3d.Coordinate()
Coordinate535.point = [(0.0048, 1.1912, -0.0805),(0.0051, 1.2278, -0.0808)]

LineSet533.coord = Coordinate535

Shape532.geometry = LineSet533

HAnimSegment528.children.append(Shape532)

HAnimJoint527.children.append(HAnimSegment528)
HAnimJoint536 = x3d.HAnimJoint(DEF="hanim_vt12")
HAnimJoint536.name = "vt12"
HAnimJoint536.center = [0.0051,1.2278,-0.0808]
HAnimSegment537 = x3d.HAnimSegment(DEF="hanim_t12")
HAnimSegment537.name = "t12"
Transform538 = x3d.Transform()
Transform538.translation = [0.0051,1.2278,-0.0808]
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
Coordinate544.point = [(0.0051, 1.2278, -0.0808),(0.0053, 1.2679, -0.081)]

LineSet542.coord = Coordinate544

Shape541.geometry = LineSet542

HAnimSegment537.children.append(Shape541)

HAnimJoint536.children.append(HAnimSegment537)
HAnimJoint545 = x3d.HAnimJoint(DEF="hanim_vt11")
HAnimJoint545.name = "vt11"
HAnimJoint545.center = [0.0053,1.2679,-0.081]
HAnimSegment546 = x3d.HAnimSegment(DEF="hanim_t11")
HAnimSegment546.name = "t11"
Transform547 = x3d.Transform()
Transform547.translation = [0.0053,1.2679,-0.081]
Transform548 = x3d.Transform()
Shape549 = x3d.Shape(USE="HAnimJointShape")

Transform548.children.append(Shape549)

Transform547.children.append(Transform548)

HAnimSegment546.children.append(Transform547)
Shape550 = x3d.Shape()
LineSet551 = x3d.LineSet()
LineSet551.vertexCount = [2]
ColorRGBA552 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet551.color = ColorRGBA552
Coordinate553 = x3d.Coordinate()
Coordinate553.point = [(0.0053, 1.2679, -0.081),(0.0056, 1.2848, -0.0822)]

LineSet551.coord = Coordinate553

Shape550.geometry = LineSet551

HAnimSegment546.children.append(Shape550)

HAnimJoint545.children.append(HAnimSegment546)
HAnimJoint554 = x3d.HAnimJoint(DEF="hanim_vt10")
HAnimJoint554.name = "vt10"
HAnimJoint554.center = [0.0056,1.2848,-0.0822]
HAnimSegment555 = x3d.HAnimSegment(DEF="hanim_t10")
HAnimSegment555.name = "t10"
Transform556 = x3d.Transform()
Transform556.translation = [0.0056,1.2848,-0.0822]
Transform557 = x3d.Transform()
Shape558 = x3d.Shape(USE="HAnimJointShape")

Transform557.children.append(Shape558)

Transform556.children.append(Transform557)

HAnimSegment555.children.append(Transform556)
Shape559 = x3d.Shape()
LineSet560 = x3d.LineSet()
LineSet560.vertexCount = [2]
ColorRGBA561 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet560.color = ColorRGBA561
Coordinate562 = x3d.Coordinate()
Coordinate562.point = [(0.0056, 1.2848, -0.0822),(0.0057, 1.3126, -0.0838)]

LineSet560.coord = Coordinate562

Shape559.geometry = LineSet560

HAnimSegment555.children.append(Shape559)
HAnimSite563 = x3d.HAnimSite(DEF="hanim_substernale")
HAnimSite563.name = "substernale"
HAnimSite563.translation = [0.0085,1.2995,0.1147]
TouchSensor564 = x3d.TouchSensor()
TouchSensor564.description = "HAnimSite 13 substernale"

HAnimSite563.children.append(TouchSensor564)
Shape565 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite563.children.append(Shape565)
Billboard566 = x3d.Billboard()
Shape567 = x3d.Shape()
Text568 = x3d.Text()
Text568.string = ["13"]
FontStyle569 = x3d.FontStyle()
FontStyle569.size = 0.035

Text568.fontStyle = FontStyle569

Shape567.geometry = Text568

Billboard566.children.append(Shape567)

HAnimSite563.children.append(Billboard566)

HAnimSegment555.children.append(HAnimSite563)

HAnimJoint554.children.append(HAnimSegment555)
HAnimJoint570 = x3d.HAnimJoint(DEF="hanim_vt9")
HAnimJoint570.name = "vt9"
HAnimJoint570.center = [0.0057,1.3126,-0.0838]
HAnimSegment571 = x3d.HAnimSegment(DEF="hanim_t9")
HAnimSegment571.name = "t9"
Transform572 = x3d.Transform()
Transform572.translation = [0.0057,1.3126,-0.0838]
Transform573 = x3d.Transform()
Shape574 = x3d.Shape(USE="HAnimJointShape")

Transform573.children.append(Shape574)

Transform572.children.append(Transform573)

HAnimSegment571.children.append(Transform572)
Shape575 = x3d.Shape()
LineSet576 = x3d.LineSet()
LineSet576.vertexCount = [2]
ColorRGBA577 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet576.color = ColorRGBA577
Coordinate578 = x3d.Coordinate()
Coordinate578.point = [(0.0057, 1.3126, -0.0838),(0.0057, 1.3382, -0.0845)]

LineSet576.coord = Coordinate578

Shape575.geometry = LineSet576

HAnimSegment571.children.append(Shape575)
HAnimSite579 = x3d.HAnimSite(DEF="hanim_l_thelion")
HAnimSite579.name = "l_thelion"
HAnimSite579.translation = [0.0918,1.3382,0.1192]
TouchSensor580 = x3d.TouchSensor()
TouchSensor580.description = "HAnimSite 29 l_thelion"

HAnimSite579.children.append(TouchSensor580)
Shape581 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite579.children.append(Shape581)
Billboard582 = x3d.Billboard()
Shape583 = x3d.Shape()
Text584 = x3d.Text()
Text584.string = ["29"]
FontStyle585 = x3d.FontStyle()
FontStyle585.size = 0.035

Text584.fontStyle = FontStyle585

Shape583.geometry = Text584

Billboard582.children.append(Shape583)

HAnimSite579.children.append(Billboard582)

HAnimSegment571.children.append(HAnimSite579)
HAnimSite586 = x3d.HAnimSite(DEF="hanim_r_thelion")
HAnimSite586.name = "r_thelion"
HAnimSite586.translation = [-0.0736,1.3385,0.1217]
TouchSensor587 = x3d.TouchSensor()
TouchSensor587.description = "HAnimSite 31 r_thelion"

HAnimSite586.children.append(TouchSensor587)
Shape588 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite586.children.append(Shape588)
Billboard589 = x3d.Billboard()
Shape590 = x3d.Shape()
Text591 = x3d.Text()
Text591.string = ["31"]
FontStyle592 = x3d.FontStyle()
FontStyle592.size = 0.035

Text591.fontStyle = FontStyle592

Shape590.geometry = Text591

Billboard589.children.append(Shape590)

HAnimSite586.children.append(Billboard589)

HAnimSegment571.children.append(HAnimSite586)

HAnimJoint570.children.append(HAnimSegment571)
HAnimJoint593 = x3d.HAnimJoint(DEF="hanim_vt8")
HAnimJoint593.name = "vt8"
HAnimJoint593.center = [0.0057,1.3382,-0.0845]
HAnimSegment594 = x3d.HAnimSegment(DEF="hanim_t8")
HAnimSegment594.name = "t8"
Transform595 = x3d.Transform()
Transform595.translation = [0.0057,1.3382,-0.0845]
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
Coordinate601.point = [(0.0057, 1.3382, -0.0845),(0.0058, 1.3625, -0.0833)]

LineSet599.coord = Coordinate601

Shape598.geometry = LineSet599

HAnimSegment594.children.append(Shape598)

HAnimJoint593.children.append(HAnimSegment594)
HAnimJoint602 = x3d.HAnimJoint(DEF="hanim_vt7")
HAnimJoint602.name = "vt7"
HAnimJoint602.center = [0.0058,1.3625,-0.0833]
HAnimSegment603 = x3d.HAnimSegment(DEF="hanim_t7")
HAnimSegment603.name = "t7"
Transform604 = x3d.Transform()
Transform604.translation = [0.0058,1.3625,-0.0833]
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
Coordinate610.point = [(0.0058, 1.3625, -0.0833),(0.0059, 1.3866, -0.08)]

LineSet608.coord = Coordinate610

Shape607.geometry = LineSet608

HAnimSegment603.children.append(Shape607)

HAnimJoint602.children.append(HAnimSegment603)
HAnimJoint611 = x3d.HAnimJoint(DEF="hanim_vt6")
HAnimJoint611.name = "vt6"
HAnimJoint611.center = [0.0059,1.3866,-0.08]
HAnimSegment612 = x3d.HAnimSegment(DEF="hanim_t6")
HAnimSegment612.name = "t6"
Transform613 = x3d.Transform()
Transform613.translation = [0.0059,1.3866,-0.08]
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
Coordinate619.point = [(0.0059, 1.3866, -0.08),(0.006, 1.4102, -0.0745)]

LineSet617.coord = Coordinate619

Shape616.geometry = LineSet617

HAnimSegment612.children.append(Shape616)
HAnimSite620 = x3d.HAnimSite(DEF="hanim_l_chest_midsagittal_plane")
HAnimSite620.name = "l_chest_midsagittal_plane"
TouchSensor621 = x3d.TouchSensor()
TouchSensor621.description = "HAnimSite 94 l_chest_midsagittal_plane"

HAnimSite620.children.append(TouchSensor621)
Shape622 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite620.children.append(Shape622)
Billboard623 = x3d.Billboard()
Shape624 = x3d.Shape()
Text625 = x3d.Text()
Text625.string = ["94"]
FontStyle626 = x3d.FontStyle()
FontStyle626.size = 0.035

Text625.fontStyle = FontStyle626

Shape624.geometry = Text625

Billboard623.children.append(Shape624)

HAnimSite620.children.append(Billboard623)

HAnimSegment612.children.append(HAnimSite620)
HAnimSite627 = x3d.HAnimSite(DEF="hanim_mesosternale")
HAnimSite627.name = "mesosternale"
TouchSensor628 = x3d.TouchSensor()
TouchSensor628.description = "HAnimSite 88 mesosternale"

HAnimSite627.children.append(TouchSensor628)
Shape629 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite627.children.append(Shape629)
Billboard630 = x3d.Billboard()
Shape631 = x3d.Shape()
Text632 = x3d.Text()
Text632.string = ["88"]
FontStyle633 = x3d.FontStyle()
FontStyle633.size = 0.035

Text632.fontStyle = FontStyle633

Shape631.geometry = Text632

Billboard630.children.append(Shape631)

HAnimSite627.children.append(Billboard630)

HAnimSegment612.children.append(HAnimSite627)
HAnimSite634 = x3d.HAnimSite(DEF="hanim_r_chest_midsagittal_plane")
HAnimSite634.name = "r_chest_midsagittal_plane"
TouchSensor635 = x3d.TouchSensor()
TouchSensor635.description = "HAnimSite 95 r_chest_midsagittal_plane"

HAnimSite634.children.append(TouchSensor635)
Shape636 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite634.children.append(Shape636)
Billboard637 = x3d.Billboard()
Shape638 = x3d.Shape()
Text639 = x3d.Text()
Text639.string = ["95"]
FontStyle640 = x3d.FontStyle()
FontStyle640.size = 0.035

Text639.fontStyle = FontStyle640

Shape638.geometry = Text639

Billboard637.children.append(Shape638)

HAnimSite634.children.append(Billboard637)

HAnimSegment612.children.append(HAnimSite634)
HAnimSite641 = x3d.HAnimSite(DEF="hanim_rear_center_midsagittal_plane")
HAnimSite641.name = "rear_center_midsagittal_plane"
TouchSensor642 = x3d.TouchSensor()
TouchSensor642.description = "HAnimSite 92 rear_center_midsagittal_plane"

HAnimSite641.children.append(TouchSensor642)
Shape643 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite641.children.append(Shape643)
Billboard644 = x3d.Billboard()
Shape645 = x3d.Shape()
Text646 = x3d.Text()
Text646.string = ["92"]
FontStyle647 = x3d.FontStyle()
FontStyle647.size = 0.035

Text646.fontStyle = FontStyle647

Shape645.geometry = Text646

Billboard644.children.append(Shape645)

HAnimSite641.children.append(Billboard644)

HAnimSegment612.children.append(HAnimSite641)

HAnimJoint611.children.append(HAnimSegment612)
HAnimJoint648 = x3d.HAnimJoint(DEF="hanim_vt5")
HAnimJoint648.name = "vt5"
HAnimJoint648.center = [0.006,1.4102,-0.0745]
HAnimSegment649 = x3d.HAnimSegment(DEF="hanim_t5")
HAnimSegment649.name = "t5"
Transform650 = x3d.Transform()
Transform650.translation = [0.006,1.4102,-0.0745]
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
Coordinate656.point = [(0.006, 1.4102, -0.0745),(0.0061, 1.432, -0.0675)]

LineSet654.coord = Coordinate656

Shape653.geometry = LineSet654

HAnimSegment649.children.append(Shape653)
HAnimSite657 = x3d.HAnimSite(DEF="hanim_spine_1_middle_back")
HAnimSite657.name = "spine_1_middle_back"
TouchSensor658 = x3d.TouchSensor()
TouchSensor658.description = "HAnimSite 24 spine_1_middle_back"

HAnimSite657.children.append(TouchSensor658)
Shape659 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite657.children.append(Shape659)
Billboard660 = x3d.Billboard()
Shape661 = x3d.Shape()
Text662 = x3d.Text()
Text662.string = ["24"]
FontStyle663 = x3d.FontStyle()
FontStyle663.size = 0.035

Text662.fontStyle = FontStyle663

Shape661.geometry = Text662

Billboard660.children.append(Shape661)

HAnimSite657.children.append(Billboard660)

HAnimSegment649.children.append(HAnimSite657)

HAnimJoint648.children.append(HAnimSegment649)
HAnimJoint664 = x3d.HAnimJoint(DEF="hanim_vt4")
HAnimJoint664.name = "vt4"
HAnimJoint664.center = [0.0061,1.432,-0.0675]
HAnimSegment665 = x3d.HAnimSegment(DEF="hanim_t4")
HAnimSegment665.name = "t4"
Transform666 = x3d.Transform()
Transform666.translation = [0.0061,1.432,-0.0675]
Transform667 = x3d.Transform()
Shape668 = x3d.Shape(USE="HAnimJointShape")

Transform667.children.append(Shape668)

Transform666.children.append(Transform667)

HAnimSegment665.children.append(Transform666)
Shape669 = x3d.Shape()
LineSet670 = x3d.LineSet()
LineSet670.vertexCount = [2]
ColorRGBA671 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet670.color = ColorRGBA671
Coordinate672 = x3d.Coordinate()
Coordinate672.point = [(0.0061, 1.432, -0.0675),(0.0062, 1.4583, -0.057)]

LineSet670.coord = Coordinate672

Shape669.geometry = LineSet670

HAnimSegment665.children.append(Shape669)

HAnimJoint664.children.append(HAnimSegment665)
HAnimJoint673 = x3d.HAnimJoint(DEF="hanim_vt3")
HAnimJoint673.name = "vt3"
HAnimJoint673.center = [0.0062,1.4583,-0.057]
HAnimSegment674 = x3d.HAnimSegment(DEF="hanim_t3")
HAnimSegment674.name = "t3"
Transform675 = x3d.Transform()
Transform675.translation = [0.0062,1.4583,-0.057]
Transform676 = x3d.Transform()
Shape677 = x3d.Shape(USE="HAnimJointShape")

Transform676.children.append(Shape677)

Transform675.children.append(Transform676)

HAnimSegment674.children.append(Transform675)
Shape678 = x3d.Shape()
LineSet679 = x3d.LineSet()
LineSet679.vertexCount = [2]
ColorRGBA680 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet679.color = ColorRGBA680
Coordinate681 = x3d.Coordinate()
Coordinate681.point = [(0.0062, 1.4583, -0.057),(0.0063, 1.4761, -0.0484)]

LineSet679.coord = Coordinate681

Shape678.geometry = LineSet679

HAnimSegment674.children.append(Shape678)

HAnimJoint673.children.append(HAnimSegment674)
HAnimJoint682 = x3d.HAnimJoint(DEF="hanim_vt2")
HAnimJoint682.name = "vt2"
HAnimJoint682.center = [0.0063,1.4761,-0.0484]
HAnimSegment683 = x3d.HAnimSegment(DEF="hanim_t2")
HAnimSegment683.name = "t2"
Transform684 = x3d.Transform()
Transform684.translation = [0.0063,1.4761,-0.0484]
Transform685 = x3d.Transform()
Shape686 = x3d.Shape(USE="HAnimJointShape")

Transform685.children.append(Shape686)

Transform684.children.append(Transform685)

HAnimSegment683.children.append(Transform684)
Shape687 = x3d.Shape()
LineSet688 = x3d.LineSet()
LineSet688.vertexCount = [2]
ColorRGBA689 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet688.color = ColorRGBA689
Coordinate690 = x3d.Coordinate()
Coordinate690.point = [(0.0063, 1.4761, -0.0484),(0.0065, 1.4951, -0.0387)]

LineSet688.coord = Coordinate690

Shape687.geometry = LineSet688

HAnimSegment683.children.append(Shape687)

HAnimJoint682.children.append(HAnimSegment683)
HAnimJoint691 = x3d.HAnimJoint(DEF="hanim_vt1")
HAnimJoint691.name = "vt1"
HAnimJoint691.center = [0.0065,1.4951,-0.0387]
HAnimSegment692 = x3d.HAnimSegment(DEF="hanim_t1")
HAnimSegment692.name = "t1"
Transform693 = x3d.Transform()
Transform693.translation = [0.0065,1.4951,-0.0387]
Transform694 = x3d.Transform()
Shape695 = x3d.Shape(USE="HAnimJointShape")

Transform694.children.append(Shape695)

Transform693.children.append(Transform694)

HAnimSegment692.children.append(Transform693)
Shape696 = x3d.Shape()
LineSet697 = x3d.LineSet()
LineSet697.vertexCount = [2]
ColorRGBA698 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet697.color = ColorRGBA698
Coordinate699 = x3d.Coordinate()
Coordinate699.point = [(0.0065, 1.4951, -0.0387),(0.0066, 1.5132, -0.0301)]

LineSet697.coord = Coordinate699

Shape696.geometry = LineSet697

HAnimSegment692.children.append(Shape696)
HAnimSite700 = x3d.HAnimSite(DEF="hanim_cervicale")
HAnimSite700.name = "cervicale"
HAnimSite700.translation = [0.0064,1.52,-0.0815]
TouchSensor701 = x3d.TouchSensor()
TouchSensor701.description = "HAnimSite 10 cervicale"

HAnimSite700.children.append(TouchSensor701)
Shape702 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite700.children.append(Shape702)
Billboard703 = x3d.Billboard()
Shape704 = x3d.Shape()
Text705 = x3d.Text()
Text705.string = ["10"]
FontStyle706 = x3d.FontStyle()
FontStyle706.size = 0.035

Text705.fontStyle = FontStyle706

Shape704.geometry = Text705

Billboard703.children.append(Shape704)

HAnimSite700.children.append(Billboard703)

HAnimSegment692.children.append(HAnimSite700)
HAnimSite707 = x3d.HAnimSite(DEF="hanim_suprasternale")
HAnimSite707.name = "suprasternale"
HAnimSite707.translation = [0.0084,1.4714,0.0551]
TouchSensor708 = x3d.TouchSensor()
TouchSensor708.description = "HAnimSite 12 suprasternale"

HAnimSite707.children.append(TouchSensor708)
Shape709 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite707.children.append(Shape709)
Billboard710 = x3d.Billboard()
Shape711 = x3d.Shape()
Text712 = x3d.Text()
Text712.string = ["12"]
FontStyle713 = x3d.FontStyle()
FontStyle713.size = 0.035

Text712.fontStyle = FontStyle713

Shape711.geometry = Text712

Billboard710.children.append(Shape711)

HAnimSite707.children.append(Billboard710)

HAnimSegment692.children.append(HAnimSite707)
Shape714 = x3d.Shape()
LineSet715 = x3d.LineSet()
LineSet715.vertexCount = [2]
ColorRGBA716 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet715.color = ColorRGBA716
Coordinate717 = x3d.Coordinate()
Coordinate717.point = [(0.0065, 1.4951, -0.0387),(0.082, 1.4488, -0.0353)]

LineSet715.coord = Coordinate717

Shape714.geometry = LineSet715

HAnimSegment692.children.append(Shape714)
Shape718 = x3d.Shape()
LineSet719 = x3d.LineSet()
LineSet719.vertexCount = [2]
ColorRGBA720 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet719.color = ColorRGBA720
Coordinate721 = x3d.Coordinate()
Coordinate721.point = [(0.0065, 1.4951, -0.0387),(-0.0694, 1.46, -0.033)]

LineSet719.coord = Coordinate721

Shape718.geometry = LineSet719

HAnimSegment692.children.append(Shape718)

HAnimJoint691.children.append(HAnimSegment692)
HAnimJoint722 = x3d.HAnimJoint(DEF="hanim_vc7")
HAnimJoint722.name = "vc7"
HAnimJoint722.center = [0.0066,1.5132,-0.0301]
HAnimSegment723 = x3d.HAnimSegment(DEF="hanim_c7")
HAnimSegment723.name = "c7"
Transform724 = x3d.Transform()
Transform724.translation = [0.0066,1.5132,-0.0301]
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
Coordinate730.point = [(0.0066, 1.5132, -0.0301),(0.0066, 1.5357, -0.0143)]

LineSet728.coord = Coordinate730

Shape727.geometry = LineSet728

HAnimSegment723.children.append(Shape727)
HAnimSite731 = x3d.HAnimSite(DEF="hanim_l_neck_base")
HAnimSite731.name = "l_neck_base"
HAnimSite731.translation = [0.0646,1.5141,-0.038]
TouchSensor732 = x3d.TouchSensor()
TouchSensor732.description = "HAnimSite 82 l_neck_base"

HAnimSite731.children.append(TouchSensor732)
Shape733 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite731.children.append(Shape733)
Billboard734 = x3d.Billboard()
Shape735 = x3d.Shape()
Text736 = x3d.Text()
Text736.string = ["82"]
FontStyle737 = x3d.FontStyle()
FontStyle737.size = 0.035

Text736.fontStyle = FontStyle737

Shape735.geometry = Text736

Billboard734.children.append(Shape735)

HAnimSite731.children.append(Billboard734)

HAnimSegment723.children.append(HAnimSite731)
HAnimSite738 = x3d.HAnimSite(DEF="hanim_r_neck_base")
HAnimSite738.name = "r_neck_base"
HAnimSite738.translation = [-0.0419,1.5149,-0.022]
TouchSensor739 = x3d.TouchSensor()
TouchSensor739.description = "HAnimSite 83 r_neck_base"

HAnimSite738.children.append(TouchSensor739)
Shape740 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite738.children.append(Shape740)
Billboard741 = x3d.Billboard()
Shape742 = x3d.Shape()
Text743 = x3d.Text()
Text743.string = ["83"]
FontStyle744 = x3d.FontStyle()
FontStyle744.size = 0.035

Text743.fontStyle = FontStyle744

Shape742.geometry = Text743

Billboard741.children.append(Shape742)

HAnimSite738.children.append(Billboard741)

HAnimSegment723.children.append(HAnimSite738)

HAnimJoint722.children.append(HAnimSegment723)
HAnimJoint745 = x3d.HAnimJoint(DEF="hanim_vc6")
HAnimJoint745.name = "vc6"
HAnimJoint745.center = [0.0066,1.5357,-0.0143]
HAnimSegment746 = x3d.HAnimSegment(DEF="hanim_c6")
HAnimSegment746.name = "c6"
Transform747 = x3d.Transform()
Transform747.translation = [0.0066,1.5357,-0.0143]
Transform748 = x3d.Transform()
Shape749 = x3d.Shape(USE="HAnimJointShape")

Transform748.children.append(Shape749)

Transform747.children.append(Transform748)

HAnimSegment746.children.append(Transform747)
Shape750 = x3d.Shape()
LineSet751 = x3d.LineSet()
LineSet751.vertexCount = [2]
ColorRGBA752 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet751.color = ColorRGBA752
Coordinate753 = x3d.Coordinate()
Coordinate753.point = [(0.0066, 1.5357, -0.0143),(0.0066, 1.552, -0.0082)]

LineSet751.coord = Coordinate753

Shape750.geometry = LineSet751

HAnimSegment746.children.append(Shape750)

HAnimJoint745.children.append(HAnimSegment746)
HAnimJoint754 = x3d.HAnimJoint(DEF="hanim_vc5")
HAnimJoint754.name = "vc5"
HAnimJoint754.center = [0.0066,1.552,-0.0082]
HAnimSegment755 = x3d.HAnimSegment(DEF="hanim_c5")
HAnimSegment755.name = "c5"
Transform756 = x3d.Transform()
Transform756.translation = [0.0066,1.552,-0.0082]
Transform757 = x3d.Transform()
Shape758 = x3d.Shape(USE="HAnimJointShape")

Transform757.children.append(Shape758)

Transform756.children.append(Transform757)

HAnimSegment755.children.append(Transform756)
Shape759 = x3d.Shape()
LineSet760 = x3d.LineSet()
LineSet760.vertexCount = [2]
ColorRGBA761 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet760.color = ColorRGBA761
Coordinate762 = x3d.Coordinate()
Coordinate762.point = [(0.0066, 1.552, -0.0082),(0.0066, 1.5662, -0.0084)]

LineSet760.coord = Coordinate762

Shape759.geometry = LineSet760

HAnimSegment755.children.append(Shape759)

HAnimJoint754.children.append(HAnimSegment755)
HAnimJoint763 = x3d.HAnimJoint(DEF="hanim_vc4")
HAnimJoint763.name = "vc4"
HAnimJoint763.center = [0.0066,1.5662,-0.0084]
HAnimSegment764 = x3d.HAnimSegment(DEF="hanim_c4")
HAnimSegment764.name = "c4"
Transform765 = x3d.Transform()
Transform765.translation = [0.0066,1.5662,-0.0084]
Transform766 = x3d.Transform()
Shape767 = x3d.Shape(USE="HAnimJointShape")

Transform766.children.append(Shape767)

Transform765.children.append(Transform766)

HAnimSegment764.children.append(Transform765)
Shape768 = x3d.Shape()
LineSet769 = x3d.LineSet()
LineSet769.vertexCount = [2]
ColorRGBA770 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet769.color = ColorRGBA770
Coordinate771 = x3d.Coordinate()
Coordinate771.point = [(0.0066, 1.5662, -0.0084),(0.0066, 1.58, -0.0103)]

LineSet769.coord = Coordinate771

Shape768.geometry = LineSet769

HAnimSegment764.children.append(Shape768)

HAnimJoint763.children.append(HAnimSegment764)
HAnimJoint772 = x3d.HAnimJoint(DEF="hanim_vc3")
HAnimJoint772.name = "vc3"
HAnimJoint772.center = [0.0066,1.58,-0.0103]
HAnimSegment773 = x3d.HAnimSegment(DEF="hanim_c3")
HAnimSegment773.name = "c3"
Transform774 = x3d.Transform()
Transform774.translation = [0.0066,1.58,-0.0103]
Transform775 = x3d.Transform()
Shape776 = x3d.Shape(USE="HAnimJointShape")

Transform775.children.append(Shape776)

Transform774.children.append(Transform775)

HAnimSegment773.children.append(Transform774)
Shape777 = x3d.Shape()
LineSet778 = x3d.LineSet()
LineSet778.vertexCount = [2]
ColorRGBA779 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet778.color = ColorRGBA779
Coordinate780 = x3d.Coordinate()
Coordinate780.point = [(0.0066, 1.58, -0.0103),(0.0066, 1.5928, -0.0103)]

LineSet778.coord = Coordinate780

Shape777.geometry = LineSet778

HAnimSegment773.children.append(Shape777)

HAnimJoint772.children.append(HAnimSegment773)
HAnimJoint781 = x3d.HAnimJoint(DEF="hanim_vc2")
HAnimJoint781.name = "vc2"
HAnimJoint781.center = [0.0066,1.5928,-0.0103]
HAnimSegment782 = x3d.HAnimSegment(DEF="hanim_c2")
HAnimSegment782.name = "c2"
Transform783 = x3d.Transform()
Transform783.translation = [0.0066,1.5928,-0.0103]
Transform784 = x3d.Transform()
Shape785 = x3d.Shape(USE="HAnimJointShape")

Transform784.children.append(Shape785)

Transform783.children.append(Transform784)

HAnimSegment782.children.append(Transform783)
Shape786 = x3d.Shape()
LineSet787 = x3d.LineSet()
LineSet787.vertexCount = [2]
ColorRGBA788 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet787.color = ColorRGBA788
Coordinate789 = x3d.Coordinate()
Coordinate789.point = [(0.0066, 1.5928, -0.0103),(0.0066, 1.6144, -0.0034)]

LineSet787.coord = Coordinate789

Shape786.geometry = LineSet787

HAnimSegment782.children.append(Shape786)
HAnimSite790 = x3d.HAnimSite(DEF="hanim_adams_apple")
HAnimSite790.name = "adams_apple"
TouchSensor791 = x3d.TouchSensor()
TouchSensor791.description = "HAnimSite 11 adams_apple"

HAnimSite790.children.append(TouchSensor791)
Shape792 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite790.children.append(Shape792)
Billboard793 = x3d.Billboard()
Shape794 = x3d.Shape()
Text795 = x3d.Text()
Text795.string = ["11"]
FontStyle796 = x3d.FontStyle()
FontStyle796.size = 0.035

Text795.fontStyle = FontStyle796

Shape794.geometry = Text795

Billboard793.children.append(Shape794)

HAnimSite790.children.append(Billboard793)

HAnimSegment782.children.append(HAnimSite790)

HAnimJoint781.children.append(HAnimSegment782)
HAnimJoint797 = x3d.HAnimJoint(DEF="hanim_vc1")
HAnimJoint797.name = "vc1"
HAnimJoint797.center = [0.0066,1.6144,-0.0034]
HAnimSegment798 = x3d.HAnimSegment(DEF="hanim_c1")
HAnimSegment798.name = "c1"
Transform799 = x3d.Transform()
Transform799.translation = [0.0066,1.6144,-0.0034]
Transform800 = x3d.Transform()
Shape801 = x3d.Shape(USE="HAnimJointShape")

Transform800.children.append(Shape801)

Transform799.children.append(Transform800)

HAnimSegment798.children.append(Transform799)
Shape802 = x3d.Shape()
LineSet803 = x3d.LineSet()
LineSet803.vertexCount = [2]
ColorRGBA804 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet803.color = ColorRGBA804
Coordinate805 = x3d.Coordinate()
Coordinate805.point = [(0.0066, 1.6144, -0.0034),(0.0044, 1.6209, 0.0236)]

LineSet803.coord = Coordinate805

Shape802.geometry = LineSet803

HAnimSegment798.children.append(Shape802)

HAnimJoint797.children.append(HAnimSegment798)
HAnimJoint806 = x3d.HAnimJoint(DEF="hanim_skullbase")
HAnimJoint806.name = "skullbase"
HAnimJoint806.center = [0.0044,1.6209,0.0236]
HAnimSegment807 = x3d.HAnimSegment(DEF="hanim_skull")
HAnimSegment807.name = "skull"
Transform808 = x3d.Transform()
Transform808.translation = [0.0044,1.6209,0.0236]
Transform809 = x3d.Transform()
Shape810 = x3d.Shape(USE="HAnimJointShape")

Transform809.children.append(Shape810)

Transform808.children.append(Transform809)

HAnimSegment807.children.append(Transform808)
Shape811 = x3d.Shape()
LineSet812 = x3d.LineSet()
LineSet812.vertexCount = [2]
ColorRGBA813 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet812.color = ColorRGBA813
Coordinate814 = x3d.Coordinate()
Coordinate814.point = [(0.0044, 1.6209, 0.0236),(0.0503, 1.4157, -0.0689)]

LineSet812.coord = Coordinate814

Shape811.geometry = LineSet812

HAnimSegment807.children.append(Shape811)
HAnimSite815 = x3d.HAnimSite(DEF="hanim_glabella")
HAnimSite815.name = "glabella"
TouchSensor816 = x3d.TouchSensor()
TouchSensor816.description = "HAnimSite 1 glabella"

HAnimSite815.children.append(TouchSensor816)
Shape817 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite815.children.append(Shape817)
Billboard818 = x3d.Billboard()
Shape819 = x3d.Shape()
Text820 = x3d.Text()
Text820.string = ["1"]
FontStyle821 = x3d.FontStyle()
FontStyle821.size = 0.035

Text820.fontStyle = FontStyle821

Shape819.geometry = Text820

Billboard818.children.append(Shape819)

HAnimSite815.children.append(Billboard818)

HAnimSegment807.children.append(HAnimSite815)
HAnimSite822 = x3d.HAnimSite(DEF="hanim_l_ectocanthus")
HAnimSite822.name = "l_ectocanthus"
TouchSensor823 = x3d.TouchSensor()
TouchSensor823.description = "HAnimSite 85 l_ectocanthus"

HAnimSite822.children.append(TouchSensor823)
Shape824 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite822.children.append(Shape824)
Billboard825 = x3d.Billboard()
Shape826 = x3d.Shape()
Text827 = x3d.Text()
Text827.string = ["85"]
FontStyle828 = x3d.FontStyle()
FontStyle828.size = 0.035

Text827.fontStyle = FontStyle828

Shape826.geometry = Text827

Billboard825.children.append(Shape826)

HAnimSite822.children.append(Billboard825)

HAnimSegment807.children.append(HAnimSite822)
HAnimSite829 = x3d.HAnimSite(DEF="hanim_l_infraorbitale")
HAnimSite829.name = "l_infraorbitale"
HAnimSite829.translation = [0.0341,1.6171,0.0752]
TouchSensor830 = x3d.TouchSensor()
TouchSensor830.description = "HAnimSite 3 l_infraorbitale"

HAnimSite829.children.append(TouchSensor830)
Shape831 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite829.children.append(Shape831)
Billboard832 = x3d.Billboard()
Shape833 = x3d.Shape()
Text834 = x3d.Text()
Text834.string = ["3"]
FontStyle835 = x3d.FontStyle()
FontStyle835.size = 0.035

Text834.fontStyle = FontStyle835

Shape833.geometry = Text834

Billboard832.children.append(Shape833)

HAnimSite829.children.append(Billboard832)

HAnimSegment807.children.append(HAnimSite829)
HAnimSite836 = x3d.HAnimSite(DEF="hanim_l_tragion")
HAnimSite836.name = "l_tragion"
HAnimSite836.translation = [0.0739,1.6348,0.0282]
TouchSensor837 = x3d.TouchSensor()
TouchSensor837.description = "HAnimSite 4 l_tragion"

HAnimSite836.children.append(TouchSensor837)
Shape838 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite836.children.append(Shape838)
Billboard839 = x3d.Billboard()
Shape840 = x3d.Shape()
Text841 = x3d.Text()
Text841.string = ["4"]
FontStyle842 = x3d.FontStyle()
FontStyle842.size = 0.035

Text841.fontStyle = FontStyle842

Shape840.geometry = Text841

Billboard839.children.append(Shape840)

HAnimSite836.children.append(Billboard839)

HAnimSegment807.children.append(HAnimSite836)
HAnimSite843 = x3d.HAnimSite(DEF="hanim_nuchale")
HAnimSite843.name = "nuchale"
HAnimSite843.translation = [0.0039,1.5972,-0.0796]
TouchSensor844 = x3d.TouchSensor()
TouchSensor844.description = "HAnimSite 81 nuchale"

HAnimSite843.children.append(TouchSensor844)
Shape845 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite843.children.append(Shape845)
Billboard846 = x3d.Billboard()
Shape847 = x3d.Shape()
Text848 = x3d.Text()
Text848.string = ["81"]
FontStyle849 = x3d.FontStyle()
FontStyle849.size = 0.035

Text848.fontStyle = FontStyle849

Shape847.geometry = Text848

Billboard846.children.append(Shape847)

HAnimSite843.children.append(Billboard846)

HAnimSegment807.children.append(HAnimSite843)
HAnimSite850 = x3d.HAnimSite(DEF="hanim_opisthocranion")
HAnimSite850.name = "opisthocranion"
TouchSensor851 = x3d.TouchSensor()
TouchSensor851.description = "HAnimSite 89 opisthocranion"

HAnimSite850.children.append(TouchSensor851)
Shape852 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite850.children.append(Shape852)
Billboard853 = x3d.Billboard()
Shape854 = x3d.Shape()
Text855 = x3d.Text()
Text855.string = ["89"]
FontStyle856 = x3d.FontStyle()
FontStyle856.size = 0.035

Text855.fontStyle = FontStyle856

Shape854.geometry = Text855

Billboard853.children.append(Shape854)

HAnimSite850.children.append(Billboard853)

HAnimSegment807.children.append(HAnimSite850)
HAnimSite857 = x3d.HAnimSite(DEF="hanim_r_ectocanthus")
HAnimSite857.name = "r_ectocanthus"
TouchSensor858 = x3d.TouchSensor()
TouchSensor858.description = "HAnimSite 86 r_ectocanthus"

HAnimSite857.children.append(TouchSensor858)
Shape859 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite857.children.append(Shape859)
Billboard860 = x3d.Billboard()
Shape861 = x3d.Shape()
Text862 = x3d.Text()
Text862.string = ["86"]
FontStyle863 = x3d.FontStyle()
FontStyle863.size = 0.035

Text862.fontStyle = FontStyle863

Shape861.geometry = Text862

Billboard860.children.append(Shape861)

HAnimSite857.children.append(Billboard860)

HAnimSegment807.children.append(HAnimSite857)
HAnimSite864 = x3d.HAnimSite(DEF="hanim_r_infraorbitale")
HAnimSite864.name = "r_infraorbitale"
HAnimSite864.translation = [-0.0237,1.6171,0.0752]
TouchSensor865 = x3d.TouchSensor()
TouchSensor865.description = "HAnimSite 6 r_infraorbitale"

HAnimSite864.children.append(TouchSensor865)
Shape866 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite864.children.append(Shape866)
Billboard867 = x3d.Billboard()
Shape868 = x3d.Shape()
Text869 = x3d.Text()
Text869.string = ["6"]
FontStyle870 = x3d.FontStyle()
FontStyle870.size = 0.035

Text869.fontStyle = FontStyle870

Shape868.geometry = Text869

Billboard867.children.append(Shape868)

HAnimSite864.children.append(Billboard867)

HAnimSegment807.children.append(HAnimSite864)
HAnimSite871 = x3d.HAnimSite(DEF="hanim_r_tragion")
HAnimSite871.name = "r_tragion"
HAnimSite871.translation = [-0.0646,1.6347,0.0302]
TouchSensor872 = x3d.TouchSensor()
TouchSensor872.description = "HAnimSite 7 r_tragion"

HAnimSite871.children.append(TouchSensor872)
Shape873 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite871.children.append(Shape873)
Billboard874 = x3d.Billboard()
Shape875 = x3d.Shape()
Text876 = x3d.Text()
Text876.string = ["7"]
FontStyle877 = x3d.FontStyle()
FontStyle877.size = 0.035

Text876.fontStyle = FontStyle877

Shape875.geometry = Text876

Billboard874.children.append(Shape875)

HAnimSite871.children.append(Billboard874)

HAnimSegment807.children.append(HAnimSite871)
HAnimSite878 = x3d.HAnimSite(DEF="hanim_sellion")
HAnimSite878.name = "sellion"
HAnimSite878.translation = [0.0058,1.6316,0.0852]
TouchSensor879 = x3d.TouchSensor()
TouchSensor879.description = "HAnimSite 2 sellion"

HAnimSite878.children.append(TouchSensor879)
Shape880 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite878.children.append(Shape880)
Billboard881 = x3d.Billboard()
Shape882 = x3d.Shape()
Text883 = x3d.Text()
Text883.string = ["2"]
FontStyle884 = x3d.FontStyle()
FontStyle884.size = 0.035

Text883.fontStyle = FontStyle884

Shape882.geometry = Text883

Billboard881.children.append(Shape882)

HAnimSite878.children.append(Billboard881)

HAnimSegment807.children.append(HAnimSite878)
HAnimSite885 = x3d.HAnimSite(DEF="hanim_skull_vertex")
HAnimSite885.name = "skull_vertex"
HAnimSite885.translation = [0.005,1.7504,0.0055]
TouchSensor886 = x3d.TouchSensor()
TouchSensor886.description = "HAnimSite 0 skull_vertex"

HAnimSite885.children.append(TouchSensor886)
Shape887 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite885.children.append(Shape887)
Billboard888 = x3d.Billboard()
Shape889 = x3d.Shape()
Text890 = x3d.Text()
Text890.string = ["0"]
FontStyle891 = x3d.FontStyle()
FontStyle891.size = 0.035

Text890.fontStyle = FontStyle891

Shape889.geometry = Text890

Billboard888.children.append(Shape889)

HAnimSite885.children.append(Billboard888)

HAnimSegment807.children.append(HAnimSite885)
Shape892 = x3d.Shape()
LineSet893 = x3d.LineSet()
LineSet893.vertexCount = [2]
ColorRGBA894 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet893.color = ColorRGBA894
Coordinate895 = x3d.Coordinate()
Coordinate895.point = [(0.0044, 1.6209, 0.0236),(-0.0507, 1.4157, -0.0689)]

LineSet893.coord = Coordinate895

Shape892.geometry = LineSet893

HAnimSegment807.children.append(Shape892)
Shape896 = x3d.Shape()
LineSet897 = x3d.LineSet()
LineSet897.vertexCount = [2]
ColorRGBA898 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet897.color = ColorRGBA898
Coordinate899 = x3d.Coordinate()
Coordinate899.point = [(0.0044, 1.6209, 0.0236),(0.0479, 1.3963, -0.0188)]

LineSet897.coord = Coordinate899

Shape896.geometry = LineSet897

HAnimSegment807.children.append(Shape896)
Shape900 = x3d.Shape()
LineSet901 = x3d.LineSet()
LineSet901.vertexCount = [2]
ColorRGBA902 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet901.color = ColorRGBA902
Coordinate903 = x3d.Coordinate()
Coordinate903.point = [(0.0044, 1.6209, 0.0236),(-0.0483, 1.3963, -0.0188)]

LineSet901.coord = Coordinate903

Shape900.geometry = LineSet901

HAnimSegment807.children.append(Shape900)
Shape904 = x3d.Shape()
LineSet905 = x3d.LineSet()
LineSet905.vertexCount = [2]
ColorRGBA906 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet905.color = ColorRGBA906
Coordinate907 = x3d.Coordinate()
Coordinate907.point = [(0.0044, 1.6209, 0.0236),(0.0216, 1.4053, 0.0051)]

LineSet905.coord = Coordinate907

Shape904.geometry = LineSet905

HAnimSegment807.children.append(Shape904)
Shape908 = x3d.Shape()
LineSet909 = x3d.LineSet()
LineSet909.vertexCount = [2]
ColorRGBA910 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet909.color = ColorRGBA910
Coordinate911 = x3d.Coordinate()
Coordinate911.point = [(0.0044, 1.6209, 0.0236),(-0.0219, 1.4053, 0.0051)]

LineSet909.coord = Coordinate911

Shape908.geometry = LineSet909

HAnimSegment807.children.append(Shape908)
Shape912 = x3d.Shape()
LineSet913 = x3d.LineSet()
LineSet913.vertexCount = [2]
ColorRGBA914 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet913.color = ColorRGBA914
Coordinate915 = x3d.Coordinate()
Coordinate915.point = [(0.0044, 1.6209, 0.0236),(-0.0002, 1.3043, -0.0865)]

LineSet913.coord = Coordinate915

Shape912.geometry = LineSet913

HAnimSegment807.children.append(Shape912)

HAnimJoint806.children.append(HAnimSegment807)
HAnimJoint916 = x3d.HAnimJoint(DEF="hanim_l_eyelid_joint")
HAnimJoint916.name = "l_eyelid_joint"
HAnimJoint916.center = [0.0503,1.4157,-0.0689]

HAnimJoint806.children.append(HAnimJoint916)
HAnimJoint917 = x3d.HAnimJoint(DEF="hanim_r_eyelid_joint")
HAnimJoint917.name = "r_eyelid_joint"
HAnimJoint917.center = [-0.0507,1.4157,-0.0689]

HAnimJoint806.children.append(HAnimJoint917)
HAnimJoint918 = x3d.HAnimJoint(DEF="hanim_l_eyeball_joint")
HAnimJoint918.name = "l_eyeball_joint"
HAnimJoint918.center = [0.0479,1.3963,-0.0188]

HAnimJoint806.children.append(HAnimJoint918)
HAnimJoint919 = x3d.HAnimJoint(DEF="hanim_r_eyeball_joint")
HAnimJoint919.name = "r_eyeball_joint"
HAnimJoint919.center = [-0.0483,1.3963,-0.0188]

HAnimJoint806.children.append(HAnimJoint919)
HAnimJoint920 = x3d.HAnimJoint(DEF="hanim_l_eyebrow_joint")
HAnimJoint920.name = "l_eyebrow_joint"
HAnimJoint920.center = [0.0216,1.4053,0.0051]

HAnimJoint806.children.append(HAnimJoint920)
HAnimJoint921 = x3d.HAnimJoint(DEF="hanim_r_eyebrow_joint")
HAnimJoint921.name = "r_eyebrow_joint"
HAnimJoint921.center = [-0.0219,1.4053,0.0051]

HAnimJoint806.children.append(HAnimJoint921)
HAnimJoint922 = x3d.HAnimJoint(DEF="hanim_temporomandibular")
HAnimJoint922.name = "temporomandibular"
HAnimJoint922.center = [-0.0002,1.3043,-0.0865]

HAnimJoint806.children.append(HAnimJoint922)

HAnimJoint797.children.append(HAnimJoint806)

HAnimJoint781.children.append(HAnimJoint797)

HAnimJoint772.children.append(HAnimJoint781)

HAnimJoint763.children.append(HAnimJoint772)

HAnimJoint754.children.append(HAnimJoint763)

HAnimJoint745.children.append(HAnimJoint754)

HAnimJoint722.children.append(HAnimJoint745)

HAnimJoint691.children.append(HAnimJoint722)
HAnimJoint923 = x3d.HAnimJoint(DEF="hanim_l_sternoclavicular")
HAnimJoint923.name = "l_sternoclavicular"
HAnimJoint923.center = [0.082,1.4488,-0.0353]
HAnimSegment924 = x3d.HAnimSegment(DEF="hanim_l_clavicle")
HAnimSegment924.name = "l_clavicle"
Transform925 = x3d.Transform()
Transform925.translation = [0.082,1.4488,-0.0353]
Transform926 = x3d.Transform()
Shape927 = x3d.Shape(USE="HAnimJointShape")

Transform926.children.append(Shape927)

Transform925.children.append(Transform926)

HAnimSegment924.children.append(Transform925)
Shape928 = x3d.Shape()
LineSet929 = x3d.LineSet()
LineSet929.vertexCount = [2]
ColorRGBA930 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet929.color = ColorRGBA930
Coordinate931 = x3d.Coordinate()
Coordinate931.point = [(0.082, 1.4488, -0.0353),(0.0962, 1.4269, -0.0424)]

LineSet929.coord = Coordinate931

Shape928.geometry = LineSet929

HAnimSegment924.children.append(Shape928)
HAnimSite932 = x3d.HAnimSite(DEF="hanim_l_acromion")
HAnimSite932.name = "l_acromion"
HAnimSite932.translation = [0.2032,1.476,-0.049]
TouchSensor933 = x3d.TouchSensor()
TouchSensor933.description = "HAnimSite 15 l_acromion"

HAnimSite932.children.append(TouchSensor933)
Shape934 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite932.children.append(Shape934)
Billboard935 = x3d.Billboard()
Shape936 = x3d.Shape()
Text937 = x3d.Text()
Text937.string = ["15"]
FontStyle938 = x3d.FontStyle()
FontStyle938.size = 0.035

Text937.fontStyle = FontStyle938

Shape936.geometry = Text937

Billboard935.children.append(Shape936)

HAnimSite932.children.append(Billboard935)

HAnimSegment924.children.append(HAnimSite932)
HAnimSite939 = x3d.HAnimSite(DEF="hanim_l_axilla_distal")
HAnimSite939.name = "l_axilla_distal"
HAnimSite939.translation = [0.1706,1.4072,-0.0875]
TouchSensor940 = x3d.TouchSensor()
TouchSensor940.description = "HAnimSite 17 l_axilla_distal"

HAnimSite939.children.append(TouchSensor940)
Shape941 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite939.children.append(Shape941)
Billboard942 = x3d.Billboard()
Shape943 = x3d.Shape()
Text944 = x3d.Text()
Text944.string = ["17"]
FontStyle945 = x3d.FontStyle()
FontStyle945.size = 0.035

Text944.fontStyle = FontStyle945

Shape943.geometry = Text944

Billboard942.children.append(Shape943)

HAnimSite939.children.append(Billboard942)

HAnimSegment924.children.append(HAnimSite939)
HAnimSite946 = x3d.HAnimSite(DEF="hanim_l_axilla_posterior_folds")
HAnimSite946.name = "l_axilla_posterior_folds"
TouchSensor947 = x3d.TouchSensor()
TouchSensor947.description = "HAnimSite 18 l_axilla_posterior_folds"

HAnimSite946.children.append(TouchSensor947)
Shape948 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite946.children.append(Shape948)
Billboard949 = x3d.Billboard()
Shape950 = x3d.Shape()
Text951 = x3d.Text()
Text951.string = ["18"]
FontStyle952 = x3d.FontStyle()
FontStyle952.size = 0.035

Text951.fontStyle = FontStyle952

Shape950.geometry = Text951

Billboard949.children.append(Shape950)

HAnimSite946.children.append(Billboard949)

HAnimSegment924.children.append(HAnimSite946)
HAnimSite953 = x3d.HAnimSite(DEF="hanim_l_axilla_proximal")
HAnimSite953.name = "l_axilla_proximal"
HAnimSite953.translation = [0.1777,1.4065,-0.0075]
TouchSensor954 = x3d.TouchSensor()
TouchSensor954.description = "HAnimSite 16 l_axilla_proximal"

HAnimSite953.children.append(TouchSensor954)
Shape955 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite953.children.append(Shape955)
Billboard956 = x3d.Billboard()
Shape957 = x3d.Shape()
Text958 = x3d.Text()
Text958.string = ["16"]
FontStyle959 = x3d.FontStyle()
FontStyle959.size = 0.035

Text958.fontStyle = FontStyle959

Shape957.geometry = Text958

Billboard956.children.append(Shape957)

HAnimSite953.children.append(Billboard956)

HAnimSegment924.children.append(HAnimSite953)
HAnimSite960 = x3d.HAnimSite(DEF="hanim_l_clavicale")
HAnimSite960.name = "l_clavicale"
HAnimSite960.translation = [0.0271,1.4943,0.0394]
TouchSensor961 = x3d.TouchSensor()
TouchSensor961.description = "HAnimSite 14 l_clavicale"

HAnimSite960.children.append(TouchSensor961)
Shape962 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite960.children.append(Shape962)
Billboard963 = x3d.Billboard()
Shape964 = x3d.Shape()
Text965 = x3d.Text()
Text965.string = ["14"]
FontStyle966 = x3d.FontStyle()
FontStyle966.size = 0.035

Text965.fontStyle = FontStyle966

Shape964.geometry = Text965

Billboard963.children.append(Shape964)

HAnimSite960.children.append(Billboard963)

HAnimSegment924.children.append(HAnimSite960)

HAnimJoint923.children.append(HAnimSegment924)
HAnimJoint967 = x3d.HAnimJoint(DEF="hanim_l_acromioclavicular")
HAnimJoint967.name = "l_acromioclavicular"
HAnimJoint967.center = [0.0962,1.4269,-0.0424]
HAnimSegment968 = x3d.HAnimSegment(DEF="hanim_l_scapula")
HAnimSegment968.name = "l_scapula"
Transform969 = x3d.Transform()
Transform969.translation = [0.0962,1.4269,-0.0424]
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
Coordinate975.point = [(0.0962, 1.4269, -0.0424),(0.2029, 1.4376, -0.0387)]

LineSet973.coord = Coordinate975

Shape972.geometry = LineSet973

HAnimSegment968.children.append(Shape972)

HAnimJoint967.children.append(HAnimSegment968)
HAnimJoint976 = x3d.HAnimJoint(DEF="hanim_l_shoulder")
HAnimJoint976.name = "l_shoulder"
HAnimJoint976.center = [0.2029,1.4376,-0.0387]
HAnimSegment977 = x3d.HAnimSegment(DEF="hanim_l_upperarm")
HAnimSegment977.name = "l_upperarm"
Transform978 = x3d.Transform()
Transform978.translation = [0.2029,1.4376,-0.0387]
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
Coordinate984.point = [(0.2029, 1.4376, -0.0387),(0.2014, 1.1357, -0.0682)]

LineSet982.coord = Coordinate984

Shape981.geometry = LineSet982

HAnimSegment977.children.append(Shape981)
HAnimSite985 = x3d.HAnimSite(DEF="hanim_l_bideltoid")
HAnimSite985.name = "l_bideltoid"
TouchSensor986 = x3d.TouchSensor()
TouchSensor986.description = "HAnimSite 96 l_bideltoid"

HAnimSite985.children.append(TouchSensor986)
Shape987 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite985.children.append(Shape987)
Billboard988 = x3d.Billboard()
Shape989 = x3d.Shape()
Text990 = x3d.Text()
Text990.string = ["96"]
FontStyle991 = x3d.FontStyle()
FontStyle991.size = 0.035

Text990.fontStyle = FontStyle991

Shape989.geometry = Text990

Billboard988.children.append(Shape989)

HAnimSite985.children.append(Billboard988)

HAnimSegment977.children.append(HAnimSite985)
HAnimSite992 = x3d.HAnimSite(DEF="hanim_l_humeral_lateral_epicondyles")
HAnimSite992.name = "l_humeral_lateral_epicondyles"
HAnimSite992.translation = [0.228,1.1482,-0.11]
TouchSensor993 = x3d.TouchSensor()
TouchSensor993.description = "HAnimSite 63 l_humeral_lateral_epicondyles"

HAnimSite992.children.append(TouchSensor993)
Shape994 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite992.children.append(Shape994)
Billboard995 = x3d.Billboard()
Shape996 = x3d.Shape()
Text997 = x3d.Text()
Text997.string = ["63"]
FontStyle998 = x3d.FontStyle()
FontStyle998.size = 0.035

Text997.fontStyle = FontStyle998

Shape996.geometry = Text997

Billboard995.children.append(Shape996)

HAnimSite992.children.append(Billboard995)

HAnimSegment977.children.append(HAnimSite992)

HAnimJoint976.children.append(HAnimSegment977)
HAnimJoint999 = x3d.HAnimJoint(DEF="hanim_l_elbow")
HAnimJoint999.name = "l_elbow"
HAnimJoint999.center = [0.2014,1.1357,-0.0682]
HAnimSegment1000 = x3d.HAnimSegment(DEF="hanim_l_forearm")
HAnimSegment1000.name = "l_forearm"
Transform1001 = x3d.Transform()
Transform1001.translation = [0.2014,1.1357,-0.0682]
Transform1002 = x3d.Transform()
Shape1003 = x3d.Shape(USE="HAnimJointShape")

Transform1002.children.append(Shape1003)

Transform1001.children.append(Transform1002)

HAnimSegment1000.children.append(Transform1001)
Shape1004 = x3d.Shape()
LineSet1005 = x3d.LineSet()
LineSet1005.vertexCount = [2]
ColorRGBA1006 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1005.color = ColorRGBA1006
Coordinate1007 = x3d.Coordinate()
Coordinate1007.point = [(0.2014, 1.1357, -0.0682),(0.1984, 0.8663, -0.0583)]

LineSet1005.coord = Coordinate1007

Shape1004.geometry = LineSet1005

HAnimSegment1000.children.append(Shape1004)
HAnimSite1008 = x3d.HAnimSite(DEF="hanim_l_humeral_medial_epicondyles")
HAnimSite1008.name = "l_humeral_medial_epicondyles"
HAnimSite1008.translation = [0.1735,1.1272,-0.1113]
TouchSensor1009 = x3d.TouchSensor()
TouchSensor1009.description = "HAnimSite 64 l_humeral_medial_epicondyles"

HAnimSite1008.children.append(TouchSensor1009)
Shape1010 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1008.children.append(Shape1010)
Billboard1011 = x3d.Billboard()
Shape1012 = x3d.Shape()
Text1013 = x3d.Text()
Text1013.string = ["64"]
FontStyle1014 = x3d.FontStyle()
FontStyle1014.size = 0.035

Text1013.fontStyle = FontStyle1014

Shape1012.geometry = Text1013

Billboard1011.children.append(Shape1012)

HAnimSite1008.children.append(Billboard1011)

HAnimSegment1000.children.append(HAnimSite1008)
HAnimSite1015 = x3d.HAnimSite(DEF="hanim_l_olecranon")
HAnimSite1015.name = "l_olecranon"
HAnimSite1015.translation = [-0.1962,1.1375,-0.1123]
TouchSensor1016 = x3d.TouchSensor()
TouchSensor1016.description = "HAnimSite 65 l_olecranon"

HAnimSite1015.children.append(TouchSensor1016)
Shape1017 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1015.children.append(Shape1017)
Billboard1018 = x3d.Billboard()
Shape1019 = x3d.Shape()
Text1020 = x3d.Text()
Text1020.string = ["65"]
FontStyle1021 = x3d.FontStyle()
FontStyle1021.size = 0.035

Text1020.fontStyle = FontStyle1021

Shape1019.geometry = Text1020

Billboard1018.children.append(Shape1019)

HAnimSite1015.children.append(Billboard1018)

HAnimSegment1000.children.append(HAnimSite1015)
HAnimSite1022 = x3d.HAnimSite(DEF="hanim_l_radial_styloid")
HAnimSite1022.name = "l_radial_styloid"
HAnimSite1022.translation = [0.1901,0.8645,-0.0415]
TouchSensor1023 = x3d.TouchSensor()
TouchSensor1023.description = "HAnimSite 71 l_radial_styloid"

HAnimSite1022.children.append(TouchSensor1023)
Shape1024 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1022.children.append(Shape1024)
Billboard1025 = x3d.Billboard()
Shape1026 = x3d.Shape()
Text1027 = x3d.Text()
Text1027.string = ["71"]
FontStyle1028 = x3d.FontStyle()
FontStyle1028.size = 0.035

Text1027.fontStyle = FontStyle1028

Shape1026.geometry = Text1027

Billboard1025.children.append(Shape1026)

HAnimSite1022.children.append(Billboard1025)

HAnimSegment1000.children.append(HAnimSite1022)
HAnimSite1029 = x3d.HAnimSite(DEF="hanim_l_radiale")
HAnimSite1029.name = "l_radiale"
HAnimSite1029.translation = [0.2182,1.1212,-0.1167]
TouchSensor1030 = x3d.TouchSensor()
TouchSensor1030.description = "HAnimSite 69 l_radiale"

HAnimSite1029.children.append(TouchSensor1030)
Shape1031 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1029.children.append(Shape1031)
Billboard1032 = x3d.Billboard()
Shape1033 = x3d.Shape()
Text1034 = x3d.Text()
Text1034.string = ["69"]
FontStyle1035 = x3d.FontStyle()
FontStyle1035.size = 0.035

Text1034.fontStyle = FontStyle1035

Shape1033.geometry = Text1034

Billboard1032.children.append(Shape1033)

HAnimSite1029.children.append(Billboard1032)

HAnimSegment1000.children.append(HAnimSite1029)

HAnimJoint999.children.append(HAnimSegment1000)
HAnimJoint1036 = x3d.HAnimJoint(DEF="hanim_l_radiocarpal")
HAnimJoint1036.name = "l_radiocarpal"
HAnimJoint1036.center = [0.1984,0.8663,-0.0583]
HAnimSegment1037 = x3d.HAnimSegment(DEF="hanim_l_carpal")
HAnimSegment1037.name = "l_carpal"
Transform1038 = x3d.Transform()
Transform1038.translation = [0.2,0.85,-0.05]
Transform1038.rotation = [0,0,1,-3.14]
Transform1038.scale = [0.2,0.2,0.2]
Transform1039 = x3d.Transform()
Transform1039.rotation = [0,1,0,-1.57]
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
Coordinate1044.point = [(0.1984, 0.8663, -0.0583),(0.1924, 0.8472, -0.0534)]

LineSet1042.coord = Coordinate1044

Shape1041.geometry = LineSet1042

HAnimSegment1037.children.append(Shape1041)
HAnimSite1045 = x3d.HAnimSite(DEF="hanim_l_ulnar_styloid")
HAnimSite1045.name = "l_ulnar_styloid"
HAnimSite1045.translation = [-0.2142,0.8529,-0.0648]
TouchSensor1046 = x3d.TouchSensor()
TouchSensor1046.description = "HAnimSite 70 l_ulnar_styloid"

HAnimSite1045.children.append(TouchSensor1046)
Shape1047 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1045.children.append(Shape1047)
Billboard1048 = x3d.Billboard()
Shape1049 = x3d.Shape()
Text1050 = x3d.Text()
Text1050.string = ["70"]
FontStyle1051 = x3d.FontStyle()
FontStyle1051.size = 0.035

Text1050.fontStyle = FontStyle1051

Shape1049.geometry = Text1050

Billboard1048.children.append(Shape1049)

HAnimSite1045.children.append(Billboard1048)

HAnimSegment1037.children.append(HAnimSite1045)
Shape1052 = x3d.Shape()
LineSet1053 = x3d.LineSet()
LineSet1053.vertexCount = [2]
ColorRGBA1054 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1053.color = ColorRGBA1054
Coordinate1055 = x3d.Coordinate()
Coordinate1055.point = [(0.1984, 0.8663, -0.0583),(0.1983, 0.8024, -0.028)]

LineSet1053.coord = Coordinate1055

Shape1052.geometry = LineSet1053

HAnimSegment1037.children.append(Shape1052)
Shape1056 = x3d.Shape()
LineSet1057 = x3d.LineSet()
LineSet1057.vertexCount = [2]
ColorRGBA1058 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1057.color = ColorRGBA1058
Coordinate1059 = x3d.Coordinate()
Coordinate1059.point = [(0.1984, 0.8663, -0.0583),(0.1987, 0.8029, -0.053)]

LineSet1057.coord = Coordinate1059

Shape1056.geometry = LineSet1057

HAnimSegment1037.children.append(Shape1056)
Shape1060 = x3d.Shape()
LineSet1061 = x3d.LineSet()
LineSet1061.vertexCount = [2]
ColorRGBA1062 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1061.color = ColorRGBA1062
Coordinate1063 = x3d.Coordinate()
Coordinate1063.point = [(0.1984, 0.8663, -0.0583),(0.1956, 0.8019, -0.0794)]

LineSet1061.coord = Coordinate1063

Shape1060.geometry = LineSet1061

HAnimSegment1037.children.append(Shape1060)
Shape1064 = x3d.Shape()
LineSet1065 = x3d.LineSet()
LineSet1065.vertexCount = [2]
ColorRGBA1066 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1065.color = ColorRGBA1066
Coordinate1067 = x3d.Coordinate()
Coordinate1067.point = [(0.1984, 0.8663, -0.0583),(0.1925, 0.8066, -0.1036)]

LineSet1065.coord = Coordinate1067

Shape1064.geometry = LineSet1065

HAnimSegment1037.children.append(Shape1064)

HAnimJoint1036.children.append(HAnimSegment1037)
HAnimJoint1068 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_1")
HAnimJoint1068.name = "l_carpometacarpal_1"
HAnimJoint1068.center = [0.1924,0.8472,-0.0534]
HAnimSegment1069 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_1")
HAnimSegment1069.name = "l_metacarpal_1"
Transform1070 = x3d.Transform()
Transform1070.translation = [0.1924,0.8472,-0.0534]
Transform1071 = x3d.Transform()
Shape1072 = x3d.Shape(USE="HAnimJointShape")

Transform1071.children.append(Shape1072)

Transform1070.children.append(Transform1071)

HAnimSegment1069.children.append(Transform1070)
Shape1073 = x3d.Shape()
LineSet1074 = x3d.LineSet()
LineSet1074.vertexCount = [2]
ColorRGBA1075 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1074.color = ColorRGBA1075
Coordinate1076 = x3d.Coordinate()
Coordinate1076.point = [(0.1924, 0.8472, -0.0534),(0.1951, 0.8226, 0.0246)]

LineSet1074.coord = Coordinate1076

Shape1073.geometry = LineSet1074

HAnimSegment1069.children.append(Shape1073)

HAnimJoint1068.children.append(HAnimSegment1069)
HAnimJoint1077 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_1")
HAnimJoint1077.name = "l_metacarpophalangeal_1"
HAnimJoint1077.center = [0.1951,0.8226,0.0246]
HAnimSegment1078 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_1")
HAnimSegment1078.name = "l_carpal_proximal_phalanx_1"
Transform1079 = x3d.Transform()
Transform1079.translation = [0.1951,0.8226,0.0246]
Transform1080 = x3d.Transform()
Shape1081 = x3d.Shape(USE="HAnimJointShape")

Transform1080.children.append(Shape1081)

Transform1079.children.append(Transform1080)

HAnimSegment1078.children.append(Transform1079)
Shape1082 = x3d.Shape()
LineSet1083 = x3d.LineSet()
LineSet1083.vertexCount = [2]
ColorRGBA1084 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1083.color = ColorRGBA1084
Coordinate1085 = x3d.Coordinate()
Coordinate1085.point = [(0.1951, 0.8226, 0.0246),(0.1955, 0.8159, 0.0464)]

LineSet1083.coord = Coordinate1085

Shape1082.geometry = LineSet1083

HAnimSegment1078.children.append(Shape1082)

HAnimJoint1077.children.append(HAnimSegment1078)
HAnimJoint1086 = x3d.HAnimJoint(DEF="hanim_l_carpal_interphalangeal_1")
HAnimJoint1086.name = "l_carpal_interphalangeal_1"
HAnimJoint1086.center = [0.1955,0.8159,0.0464]

HAnimJoint1077.children.append(HAnimJoint1086)

HAnimJoint1068.children.append(HAnimJoint1077)

HAnimJoint1036.children.append(HAnimJoint1068)
HAnimJoint1087 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_2")
HAnimJoint1087.name = "l_carpometacarpal_2"
HAnimJoint1087.center = [0.1983,0.8024,-0.028]
HAnimSegment1088 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_2")
HAnimSegment1088.name = "l_metacarpal_2"
Transform1089 = x3d.Transform()
Transform1089.translation = [0.1983,0.8024,-0.028]
Transform1090 = x3d.Transform()
Shape1091 = x3d.Shape(USE="HAnimJointShape")

Transform1090.children.append(Shape1091)

Transform1089.children.append(Transform1090)

HAnimSegment1088.children.append(Transform1089)
Shape1092 = x3d.Shape()
LineSet1093 = x3d.LineSet()
LineSet1093.vertexCount = [2]
ColorRGBA1094 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1093.color = ColorRGBA1094
Coordinate1095 = x3d.Coordinate()
Coordinate1095.point = [(0.1983, 0.8024, -0.028),(0.1983, 0.7815, -0.028)]

LineSet1093.coord = Coordinate1095

Shape1092.geometry = LineSet1093

HAnimSegment1088.children.append(Shape1092)
HAnimSite1096 = x3d.HAnimSite(DEF="hanim_l_metacarpal_phalanx_2")
HAnimSite1096.name = "l_metacarpal_phalanx_2"
HAnimSite1096.translation = [0.2009,0.8139,-0.0237]
TouchSensor1097 = x3d.TouchSensor()
TouchSensor1097.description = "HAnimSite 75 l_metacarpal_phalanx_2"

HAnimSite1096.children.append(TouchSensor1097)
Shape1098 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1096.children.append(Shape1098)
Billboard1099 = x3d.Billboard()
Shape1100 = x3d.Shape()
Text1101 = x3d.Text()
Text1101.string = ["75"]
FontStyle1102 = x3d.FontStyle()
FontStyle1102.size = 0.035

Text1101.fontStyle = FontStyle1102

Shape1100.geometry = Text1101

Billboard1099.children.append(Shape1100)

HAnimSite1096.children.append(Billboard1099)

HAnimSegment1088.children.append(HAnimSite1096)

HAnimJoint1087.children.append(HAnimSegment1088)
HAnimJoint1103 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_2")
HAnimJoint1103.name = "l_metacarpophalangeal_2"
HAnimJoint1103.center = [0.1983,0.7815,-0.028]
HAnimSegment1104 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_2")
HAnimSegment1104.name = "l_carpal_proximal_phalanx_2"
Transform1105 = x3d.Transform()
Transform1105.translation = [0.1983,0.7815,-0.028]
Transform1106 = x3d.Transform()
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
Coordinate1111.point = [(0.1983, 0.7815, -0.028),(0.2017, 0.7363, -0.0248)]

LineSet1109.coord = Coordinate1111

Shape1108.geometry = LineSet1109

HAnimSegment1104.children.append(Shape1108)

HAnimJoint1103.children.append(HAnimSegment1104)
HAnimJoint1112 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint1112.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint1112.center = [0.2017,0.7363,-0.0248]
HAnimSegment1113 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_2")
HAnimSegment1113.name = "l_carpal_middle_phalanx_2"
Transform1114 = x3d.Transform()
Transform1114.translation = [0.2017,0.7363,-0.0248]
Transform1115 = x3d.Transform()
Shape1116 = x3d.Shape(USE="HAnimJointShape")

Transform1115.children.append(Shape1116)

Transform1114.children.append(Transform1115)

HAnimSegment1113.children.append(Transform1114)
Shape1117 = x3d.Shape()
LineSet1118 = x3d.LineSet()
LineSet1118.vertexCount = [2]
ColorRGBA1119 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1118.color = ColorRGBA1119
Coordinate1120 = x3d.Coordinate()
Coordinate1120.point = [(0.2017, 0.7363, -0.0248),(0.2028, 0.7139, -0.0236)]

LineSet1118.coord = Coordinate1120

Shape1117.geometry = LineSet1118

HAnimSegment1113.children.append(Shape1117)

HAnimJoint1112.children.append(HAnimSegment1113)
HAnimJoint1121 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint1121.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint1121.center = [0.2028,0.7139,-0.0236]

HAnimJoint1112.children.append(HAnimJoint1121)

HAnimJoint1103.children.append(HAnimJoint1112)

HAnimJoint1087.children.append(HAnimJoint1103)

HAnimJoint1036.children.append(HAnimJoint1087)
HAnimJoint1122 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_3")
HAnimJoint1122.name = "l_carpometacarpal_3"
HAnimJoint1122.center = [0.1987,0.8029,-0.053]
HAnimSegment1123 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_3")
HAnimSegment1123.name = "l_metacarpal_3"
Transform1124 = x3d.Transform()
Transform1124.translation = [0.1987,0.8029,-0.053]
Transform1125 = x3d.Transform()
Shape1126 = x3d.Shape(USE="HAnimJointShape")

Transform1125.children.append(Shape1126)

Transform1124.children.append(Transform1125)

HAnimSegment1123.children.append(Transform1124)
Shape1127 = x3d.Shape()
LineSet1128 = x3d.LineSet()
LineSet1128.vertexCount = [2]
ColorRGBA1129 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1128.color = ColorRGBA1129
Coordinate1130 = x3d.Coordinate()
Coordinate1130.point = [(0.1987, 0.8029, -0.053),(0.1987, 0.7818, -0.053)]

LineSet1128.coord = Coordinate1130

Shape1127.geometry = LineSet1128

HAnimSegment1123.children.append(Shape1127)
HAnimSite1131 = x3d.HAnimSite(DEF="hanim_l_metacarpal_phalanx_3")
HAnimSite1131.name = "l_metacarpal_phalanx_3"
TouchSensor1132 = x3d.TouchSensor()
TouchSensor1132.description = "HAnimSite 76 l_metacarpal_phalanx_3"

HAnimSite1131.children.append(TouchSensor1132)
Shape1133 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1131.children.append(Shape1133)
Billboard1134 = x3d.Billboard()
Shape1135 = x3d.Shape()
Text1136 = x3d.Text()
Text1136.string = ["76"]
FontStyle1137 = x3d.FontStyle()
FontStyle1137.size = 0.035

Text1136.fontStyle = FontStyle1137

Shape1135.geometry = Text1136

Billboard1134.children.append(Shape1135)

HAnimSite1131.children.append(Billboard1134)

HAnimSegment1123.children.append(HAnimSite1131)

HAnimJoint1122.children.append(HAnimSegment1123)
HAnimJoint1138 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_3")
HAnimJoint1138.name = "l_metacarpophalangeal_3"
HAnimJoint1138.center = [0.1987,0.7818,-0.053]
HAnimSegment1139 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_3")
HAnimSegment1139.name = "l_carpal_proximal_phalanx_3"
Transform1140 = x3d.Transform()
Transform1140.translation = [0.1987,0.7818,-0.053]
Transform1141 = x3d.Transform()
Shape1142 = x3d.Shape(USE="HAnimJointShape")

Transform1141.children.append(Shape1142)

Transform1140.children.append(Transform1141)

HAnimSegment1139.children.append(Transform1140)
Shape1143 = x3d.Shape()
LineSet1144 = x3d.LineSet()
LineSet1144.vertexCount = [2]
ColorRGBA1145 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1144.color = ColorRGBA1145
Coordinate1146 = x3d.Coordinate()
Coordinate1146.point = [(0.1987, 0.7818, -0.053),(0.2013, 0.7273, -0.0503)]

LineSet1144.coord = Coordinate1146

Shape1143.geometry = LineSet1144

HAnimSegment1139.children.append(Shape1143)

HAnimJoint1138.children.append(HAnimSegment1139)
HAnimJoint1147 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint1147.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint1147.center = [0.2013,0.7273,-0.0503]
HAnimSegment1148 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_3")
HAnimSegment1148.name = "l_carpal_middle_phalanx_3"
Transform1149 = x3d.Transform()
Transform1149.translation = [0.2013,0.7273,-0.0503]
Transform1150 = x3d.Transform()
Shape1151 = x3d.Shape(USE="HAnimJointShape")

Transform1150.children.append(Shape1151)

Transform1149.children.append(Transform1150)

HAnimSegment1148.children.append(Transform1149)
Shape1152 = x3d.Shape()
LineSet1153 = x3d.LineSet()
LineSet1153.vertexCount = [2]
ColorRGBA1154 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1153.color = ColorRGBA1154
Coordinate1155 = x3d.Coordinate()
Coordinate1155.point = [(0.2013, 0.7273, -0.0503),(0.2026, 0.7011, -0.0494)]

LineSet1153.coord = Coordinate1155

Shape1152.geometry = LineSet1153

HAnimSegment1148.children.append(Shape1152)

HAnimJoint1147.children.append(HAnimSegment1148)
HAnimJoint1156 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint1156.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint1156.center = [0.2026,0.7011,-0.0494]

HAnimJoint1147.children.append(HAnimJoint1156)

HAnimJoint1138.children.append(HAnimJoint1147)

HAnimJoint1122.children.append(HAnimJoint1138)

HAnimJoint1036.children.append(HAnimJoint1122)
HAnimJoint1157 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_4")
HAnimJoint1157.name = "l_carpometacarpal_4"
HAnimJoint1157.center = [0.1956,0.8019,-0.0794]
HAnimSegment1158 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_4")
HAnimSegment1158.name = "l_metacarpal_4"
Transform1159 = x3d.Transform()
Transform1159.translation = [0.1956,0.8019,-0.0794]
Transform1160 = x3d.Transform()
Shape1161 = x3d.Shape(USE="HAnimJointShape")

Transform1160.children.append(Shape1161)

Transform1159.children.append(Transform1160)

HAnimSegment1158.children.append(Transform1159)
Shape1162 = x3d.Shape()
LineSet1163 = x3d.LineSet()
LineSet1163.vertexCount = [2]
ColorRGBA1164 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1163.color = ColorRGBA1164
Coordinate1165 = x3d.Coordinate()
Coordinate1165.point = [(0.1956, 0.8019, -0.0794),(0.1956, 0.7815, -0.0794)]

LineSet1163.coord = Coordinate1165

Shape1162.geometry = LineSet1163

HAnimSegment1158.children.append(Shape1162)

HAnimJoint1157.children.append(HAnimSegment1158)
HAnimJoint1166 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_4")
HAnimJoint1166.name = "l_metacarpophalangeal_4"
HAnimJoint1166.center = [0.1956,0.7815,-0.0794]
HAnimSegment1167 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_4")
HAnimSegment1167.name = "l_carpal_proximal_phalanx_4"
Transform1168 = x3d.Transform()
Transform1168.translation = [0.1956,0.7815,-0.0794]
Transform1169 = x3d.Transform()
Shape1170 = x3d.Shape(USE="HAnimJointShape")

Transform1169.children.append(Shape1170)

Transform1168.children.append(Transform1169)

HAnimSegment1167.children.append(Transform1168)
Shape1171 = x3d.Shape()
LineSet1172 = x3d.LineSet()
LineSet1172.vertexCount = [2]
ColorRGBA1173 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1172.color = ColorRGBA1173
Coordinate1174 = x3d.Coordinate()
Coordinate1174.point = [(0.1956, 0.7815, -0.0794),(0.1973, 0.7287, -0.0777)]

LineSet1172.coord = Coordinate1174

Shape1171.geometry = LineSet1172

HAnimSegment1167.children.append(Shape1171)

HAnimJoint1166.children.append(HAnimSegment1167)
HAnimJoint1175 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint1175.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint1175.center = [0.1973,0.7287,-0.0777]
HAnimSegment1176 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_4")
HAnimSegment1176.name = "l_carpal_middle_phalanx_4"
Transform1177 = x3d.Transform()
Transform1177.translation = [0.1973,0.7287,-0.0777]
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
Coordinate1183.point = [(0.1973, 0.7287, -0.0777),(0.1983, 0.7045, -0.0767)]

LineSet1181.coord = Coordinate1183

Shape1180.geometry = LineSet1181

HAnimSegment1176.children.append(Shape1180)

HAnimJoint1175.children.append(HAnimSegment1176)
HAnimJoint1184 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint1184.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint1184.center = [0.1983,0.7045,-0.0767]

HAnimJoint1175.children.append(HAnimJoint1184)

HAnimJoint1166.children.append(HAnimJoint1175)

HAnimJoint1157.children.append(HAnimJoint1166)

HAnimJoint1036.children.append(HAnimJoint1157)
HAnimJoint1185 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_5")
HAnimJoint1185.name = "l_carpometacarpal_5"
HAnimJoint1185.center = [0.1925,0.8066,-0.1036]
HAnimSegment1186 = x3d.HAnimSegment(DEF="hanim_l_metacarpal_5")
HAnimSegment1186.name = "l_metacarpal_5"
Transform1187 = x3d.Transform()
Transform1187.translation = [0.1925,0.8066,-0.1036]
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
Coordinate1193.point = [(0.1925, 0.8066, -0.1036),(0.1925, 0.7866, -0.1036)]

LineSet1191.coord = Coordinate1193

Shape1190.geometry = LineSet1191

HAnimSegment1186.children.append(Shape1190)
HAnimSite1194 = x3d.HAnimSite(DEF="hanim_l_metacarpal_phalanx_5")
HAnimSite1194.name = "l_metacarpal_phalanx_5"
HAnimSite1194.translation = [0.1929,0.786,-0.1122]
TouchSensor1195 = x3d.TouchSensor()
TouchSensor1195.description = "HAnimSite 77 l_metacarpal_phalanx_5"

HAnimSite1194.children.append(TouchSensor1195)
Shape1196 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1194.children.append(Shape1196)
Billboard1197 = x3d.Billboard()
Shape1198 = x3d.Shape()
Text1199 = x3d.Text()
Text1199.string = ["77"]
FontStyle1200 = x3d.FontStyle()
FontStyle1200.size = 0.035

Text1199.fontStyle = FontStyle1200

Shape1198.geometry = Text1199

Billboard1197.children.append(Shape1198)

HAnimSite1194.children.append(Billboard1197)

HAnimSegment1186.children.append(HAnimSite1194)

HAnimJoint1185.children.append(HAnimSegment1186)
HAnimJoint1201 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_5")
HAnimJoint1201.name = "l_metacarpophalangeal_5"
HAnimJoint1201.center = [0.1925,0.7866,-0.1036]
HAnimSegment1202 = x3d.HAnimSegment(DEF="hanim_l_carpal_proximal_phalanx_5")
HAnimSegment1202.name = "l_carpal_proximal_phalanx_5"
Transform1203 = x3d.Transform()
Transform1203.translation = [0.1925,0.7866,-0.1036]
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
Coordinate1209.point = [(0.1925, 0.7866, -0.1036),(0.1938, 0.7452, -0.1024)]

LineSet1207.coord = Coordinate1209

Shape1206.geometry = LineSet1207

HAnimSegment1202.children.append(Shape1206)

HAnimJoint1201.children.append(HAnimSegment1202)
HAnimJoint1210 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint1210.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint1210.center = [0.1938,0.7452,-0.1024]
HAnimSegment1211 = x3d.HAnimSegment(DEF="hanim_l_carpal_middle_phalanx_5")
HAnimSegment1211.name = "l_carpal_middle_phalanx_5"
Transform1212 = x3d.Transform()
Transform1212.translation = [0.1938,0.7452,-0.1024]
Transform1213 = x3d.Transform()
Shape1214 = x3d.Shape(USE="HAnimJointShape")

Transform1213.children.append(Shape1214)

Transform1212.children.append(Transform1213)

HAnimSegment1211.children.append(Transform1212)
Shape1215 = x3d.Shape()
LineSet1216 = x3d.LineSet()
LineSet1216.vertexCount = [2]
ColorRGBA1217 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1216.color = ColorRGBA1217
Coordinate1218 = x3d.Coordinate()
Coordinate1218.point = [(0.1938, 0.7452, -0.1024),(0.1948, 0.7277, -0.1017)]

LineSet1216.coord = Coordinate1218

Shape1215.geometry = LineSet1216

HAnimSegment1211.children.append(Shape1215)

HAnimJoint1210.children.append(HAnimSegment1211)
HAnimJoint1219 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint1219.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint1219.center = [0.1948,0.7277,-0.1017]

HAnimJoint1210.children.append(HAnimJoint1219)

HAnimJoint1201.children.append(HAnimJoint1210)

HAnimJoint1185.children.append(HAnimJoint1201)

HAnimJoint1036.children.append(HAnimJoint1185)

HAnimJoint999.children.append(HAnimJoint1036)

HAnimJoint976.children.append(HAnimJoint999)

HAnimJoint967.children.append(HAnimJoint976)

HAnimJoint923.children.append(HAnimJoint967)

HAnimJoint691.children.append(HAnimJoint923)
HAnimJoint1220 = x3d.HAnimJoint(DEF="hanim_r_sternoclavicular")
HAnimJoint1220.name = "r_sternoclavicular"
HAnimJoint1220.center = [-0.0694,1.46,-0.033]
HAnimSegment1221 = x3d.HAnimSegment(DEF="hanim_r_clavicle")
HAnimSegment1221.name = "r_clavicle"
Transform1222 = x3d.Transform()
Transform1222.translation = [-0.0694,1.46,-0.033]
Transform1223 = x3d.Transform()
Shape1224 = x3d.Shape(USE="HAnimJointShape")

Transform1223.children.append(Shape1224)

Transform1222.children.append(Transform1223)

HAnimSegment1221.children.append(Transform1222)
Shape1225 = x3d.Shape()
LineSet1226 = x3d.LineSet()
LineSet1226.vertexCount = [2]
ColorRGBA1227 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1226.color = ColorRGBA1227
Coordinate1228 = x3d.Coordinate()
Coordinate1228.point = [(-0.0694, 1.46, -0.033),(-0.0836, 1.4281, -0.0401)]

LineSet1226.coord = Coordinate1228

Shape1225.geometry = LineSet1226

HAnimSegment1221.children.append(Shape1225)
HAnimSite1229 = x3d.HAnimSite(DEF="hanim_r_acromion")
HAnimSite1229.name = "r_acromion"
HAnimSite1229.translation = [-0.1905,1.4791,-0.0431]
TouchSensor1230 = x3d.TouchSensor()
TouchSensor1230.description = "HAnimSite 20 r_acromion"

HAnimSite1229.children.append(TouchSensor1230)
Shape1231 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1229.children.append(Shape1231)
Billboard1232 = x3d.Billboard()
Shape1233 = x3d.Shape()
Text1234 = x3d.Text()
Text1234.string = ["20"]
FontStyle1235 = x3d.FontStyle()
FontStyle1235.size = 0.035

Text1234.fontStyle = FontStyle1235

Shape1233.geometry = Text1234

Billboard1232.children.append(Shape1233)

HAnimSite1229.children.append(Billboard1232)

HAnimSegment1221.children.append(HAnimSite1229)
HAnimSite1236 = x3d.HAnimSite(DEF="hanim_r_axilla_distal")
HAnimSite1236.name = "r_axilla_distal"
HAnimSite1236.translation = [-0.1603,1.4098,-0.0826]
TouchSensor1237 = x3d.TouchSensor()
TouchSensor1237.description = "HAnimSite 22 r_axilla_distal"

HAnimSite1236.children.append(TouchSensor1237)
Shape1238 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1236.children.append(Shape1238)
Billboard1239 = x3d.Billboard()
Shape1240 = x3d.Shape()
Text1241 = x3d.Text()
Text1241.string = ["22"]
FontStyle1242 = x3d.FontStyle()
FontStyle1242.size = 0.035

Text1241.fontStyle = FontStyle1242

Shape1240.geometry = Text1241

Billboard1239.children.append(Shape1240)

HAnimSite1236.children.append(Billboard1239)

HAnimSegment1221.children.append(HAnimSite1236)
HAnimSite1243 = x3d.HAnimSite(DEF="hanim_r_axilla_posterior_folds")
HAnimSite1243.name = "r_axilla_posterior_folds"
TouchSensor1244 = x3d.TouchSensor()
TouchSensor1244.description = "HAnimSite 23 r_axilla_posterior_folds"

HAnimSite1243.children.append(TouchSensor1244)
Shape1245 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1243.children.append(Shape1245)
Billboard1246 = x3d.Billboard()
Shape1247 = x3d.Shape()
Text1248 = x3d.Text()
Text1248.string = ["23"]
FontStyle1249 = x3d.FontStyle()
FontStyle1249.size = 0.035

Text1248.fontStyle = FontStyle1249

Shape1247.geometry = Text1248

Billboard1246.children.append(Shape1247)

HAnimSite1243.children.append(Billboard1246)

HAnimSegment1221.children.append(HAnimSite1243)
HAnimSite1250 = x3d.HAnimSite(DEF="hanim_r_axilla_proximal")
HAnimSite1250.name = "r_axilla_proximal"
HAnimSite1250.translation = [-0.1626,1.4072,-0.0031]
TouchSensor1251 = x3d.TouchSensor()
TouchSensor1251.description = "HAnimSite 21 r_axilla_proximal"

HAnimSite1250.children.append(TouchSensor1251)
Shape1252 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1250.children.append(Shape1252)
Billboard1253 = x3d.Billboard()
Shape1254 = x3d.Shape()
Text1255 = x3d.Text()
Text1255.string = ["21"]
FontStyle1256 = x3d.FontStyle()
FontStyle1256.size = 0.035

Text1255.fontStyle = FontStyle1256

Shape1254.geometry = Text1255

Billboard1253.children.append(Shape1254)

HAnimSite1250.children.append(Billboard1253)

HAnimSegment1221.children.append(HAnimSite1250)
HAnimSite1257 = x3d.HAnimSite(DEF="hanim_r_clavicale")
HAnimSite1257.name = "r_clavicale"
HAnimSite1257.translation = [-0.0115,1.4943,0.04]
TouchSensor1258 = x3d.TouchSensor()
TouchSensor1258.description = "HAnimSite 19 r_clavicale"

HAnimSite1257.children.append(TouchSensor1258)
Shape1259 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1257.children.append(Shape1259)
Billboard1260 = x3d.Billboard()
Shape1261 = x3d.Shape()
Text1262 = x3d.Text()
Text1262.string = ["19"]
FontStyle1263 = x3d.FontStyle()
FontStyle1263.size = 0.035

Text1262.fontStyle = FontStyle1263

Shape1261.geometry = Text1262

Billboard1260.children.append(Shape1261)

HAnimSite1257.children.append(Billboard1260)

HAnimSegment1221.children.append(HAnimSite1257)

HAnimJoint1220.children.append(HAnimSegment1221)
HAnimJoint1264 = x3d.HAnimJoint(DEF="hanim_r_acromioclavicular")
HAnimJoint1264.name = "r_acromioclavicular"
HAnimJoint1264.center = [-0.0836,1.4281,-0.0401]
HAnimSegment1265 = x3d.HAnimSegment(DEF="hanim_r_scapula")
HAnimSegment1265.name = "r_scapula"
Transform1266 = x3d.Transform()
Transform1266.translation = [-0.0836,1.4281,-0.0401]
Transform1267 = x3d.Transform()
Shape1268 = x3d.Shape(USE="HAnimJointShape")

Transform1267.children.append(Shape1268)

Transform1266.children.append(Transform1267)

HAnimSegment1265.children.append(Transform1266)
Shape1269 = x3d.Shape()
LineSet1270 = x3d.LineSet()
LineSet1270.vertexCount = [2]
ColorRGBA1271 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1270.color = ColorRGBA1271
Coordinate1272 = x3d.Coordinate()
Coordinate1272.point = [(-0.0836, 1.4281, -0.0401),(-0.1907, 1.4407, -0.0325)]

LineSet1270.coord = Coordinate1272

Shape1269.geometry = LineSet1270

HAnimSegment1265.children.append(Shape1269)

HAnimJoint1264.children.append(HAnimSegment1265)
HAnimJoint1273 = x3d.HAnimJoint(DEF="hanim_r_shoulder")
HAnimJoint1273.name = "r_shoulder"
HAnimJoint1273.center = [-0.1907,1.4407,-0.0325]
HAnimSegment1274 = x3d.HAnimSegment(DEF="hanim_r_upperarm")
HAnimSegment1274.name = "r_upperarm"
Transform1275 = x3d.Transform()
Transform1275.translation = [-0.1907,1.4407,-0.0325]
Transform1276 = x3d.Transform()
Shape1277 = x3d.Shape(USE="HAnimJointShape")

Transform1276.children.append(Shape1277)

Transform1275.children.append(Transform1276)

HAnimSegment1274.children.append(Transform1275)
Shape1278 = x3d.Shape()
LineSet1279 = x3d.LineSet()
LineSet1279.vertexCount = [2]
ColorRGBA1280 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1279.color = ColorRGBA1280
Coordinate1281 = x3d.Coordinate()
Coordinate1281.point = [(-0.1907, 1.4407, -0.0325),(-0.1949, 1.1388, -0.062)]

LineSet1279.coord = Coordinate1281

Shape1278.geometry = LineSet1279

HAnimSegment1274.children.append(Shape1278)
HAnimSite1282 = x3d.HAnimSite(DEF="hanim_r_bideltoid")
HAnimSite1282.name = "r_bideltoid"
TouchSensor1283 = x3d.TouchSensor()
TouchSensor1283.description = "HAnimSite 97 r_bideltoid"

HAnimSite1282.children.append(TouchSensor1283)
Shape1284 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1282.children.append(Shape1284)
Billboard1285 = x3d.Billboard()
Shape1286 = x3d.Shape()
Text1287 = x3d.Text()
Text1287.string = ["97"]
FontStyle1288 = x3d.FontStyle()
FontStyle1288.size = 0.035

Text1287.fontStyle = FontStyle1288

Shape1286.geometry = Text1287

Billboard1285.children.append(Shape1286)

HAnimSite1282.children.append(Billboard1285)

HAnimSegment1274.children.append(HAnimSite1282)
HAnimSite1289 = x3d.HAnimSite(DEF="hanim_r_humeral_lateral_epicondyles")
HAnimSite1289.name = "r_humeral_lateral_epicondyles"
HAnimSite1289.translation = [-0.2224,1.1517,-0.1033]
TouchSensor1290 = x3d.TouchSensor()
TouchSensor1290.description = "HAnimSite 66 r_humeral_lateral_epicondyles"

HAnimSite1289.children.append(TouchSensor1290)
Shape1291 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1289.children.append(Shape1291)
Billboard1292 = x3d.Billboard()
Shape1293 = x3d.Shape()
Text1294 = x3d.Text()
Text1294.string = ["66"]
FontStyle1295 = x3d.FontStyle()
FontStyle1295.size = 0.035

Text1294.fontStyle = FontStyle1295

Shape1293.geometry = Text1294

Billboard1292.children.append(Shape1293)

HAnimSite1289.children.append(Billboard1292)

HAnimSegment1274.children.append(HAnimSite1289)

HAnimJoint1273.children.append(HAnimSegment1274)
HAnimJoint1296 = x3d.HAnimJoint(DEF="hanim_r_elbow")
HAnimJoint1296.name = "r_elbow"
HAnimJoint1296.center = [-0.1949,1.1388,-0.062]
HAnimSegment1297 = x3d.HAnimSegment(DEF="hanim_r_forearm")
HAnimSegment1297.name = "r_forearm"
Transform1298 = x3d.Transform()
Transform1298.translation = [-0.1949,1.1388,-0.062]
Transform1299 = x3d.Transform()
Shape1300 = x3d.Shape(USE="HAnimJointShape")

Transform1299.children.append(Shape1300)

Transform1298.children.append(Transform1299)

HAnimSegment1297.children.append(Transform1298)
Shape1301 = x3d.Shape()
LineSet1302 = x3d.LineSet()
LineSet1302.vertexCount = [2]
ColorRGBA1303 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1302.color = ColorRGBA1303
Coordinate1304 = x3d.Coordinate()
Coordinate1304.point = [(-0.1949, 1.1388, -0.062),(-0.1959, 0.8694, -0.0521)]

LineSet1302.coord = Coordinate1304

Shape1301.geometry = LineSet1302

HAnimSegment1297.children.append(Shape1301)
HAnimSite1305 = x3d.HAnimSite(DEF="hanim_r_humeral_medial_epicondyles")
HAnimSite1305.name = "r_humeral_medial_epicondyles"
HAnimSite1305.translation = [-0.168,1.1298,-0.1062]
TouchSensor1306 = x3d.TouchSensor()
TouchSensor1306.description = "HAnimSite 67 r_humeral_medial_epicondyles"

HAnimSite1305.children.append(TouchSensor1306)
Shape1307 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1305.children.append(Shape1307)
Billboard1308 = x3d.Billboard()
Shape1309 = x3d.Shape()
Text1310 = x3d.Text()
Text1310.string = ["67"]
FontStyle1311 = x3d.FontStyle()
FontStyle1311.size = 0.035

Text1310.fontStyle = FontStyle1311

Shape1309.geometry = Text1310

Billboard1308.children.append(Shape1309)

HAnimSite1305.children.append(Billboard1308)

HAnimSegment1297.children.append(HAnimSite1305)
HAnimSite1312 = x3d.HAnimSite(DEF="hanim_r_olecranon")
HAnimSite1312.name = "r_olecranon"
HAnimSite1312.translation = [-0.1907,1.1405,-0.1065]
TouchSensor1313 = x3d.TouchSensor()
TouchSensor1313.description = "HAnimSite 68 r_olecranon"

HAnimSite1312.children.append(TouchSensor1313)
Shape1314 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1312.children.append(Shape1314)
Billboard1315 = x3d.Billboard()
Shape1316 = x3d.Shape()
Text1317 = x3d.Text()
Text1317.string = ["68"]
FontStyle1318 = x3d.FontStyle()
FontStyle1318.size = 0.035

Text1317.fontStyle = FontStyle1318

Shape1316.geometry = Text1317

Billboard1315.children.append(Shape1316)

HAnimSite1312.children.append(Billboard1315)

HAnimSegment1297.children.append(HAnimSite1312)
HAnimSite1319 = x3d.HAnimSite(DEF="hanim_r_radial_styloid")
HAnimSite1319.name = "r_radial_styloid"
HAnimSite1319.translation = [-0.1884,0.8676,-0.036]
TouchSensor1320 = x3d.TouchSensor()
TouchSensor1320.description = "HAnimSite 74 r_radial_styloid"

HAnimSite1319.children.append(TouchSensor1320)
Shape1321 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1319.children.append(Shape1321)
Billboard1322 = x3d.Billboard()
Shape1323 = x3d.Shape()
Text1324 = x3d.Text()
Text1324.string = ["74"]
FontStyle1325 = x3d.FontStyle()
FontStyle1325.size = 0.035

Text1324.fontStyle = FontStyle1325

Shape1323.geometry = Text1324

Billboard1322.children.append(Shape1323)

HAnimSite1319.children.append(Billboard1322)

HAnimSegment1297.children.append(HAnimSite1319)
HAnimSite1326 = x3d.HAnimSite(DEF="hanim_r_radiale")
HAnimSite1326.name = "r_radiale"
HAnimSite1326.translation = [-0.213,1.1305,-0.1091]
TouchSensor1327 = x3d.TouchSensor()
TouchSensor1327.description = "HAnimSite 72 r_radiale"

HAnimSite1326.children.append(TouchSensor1327)
Shape1328 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1326.children.append(Shape1328)
Billboard1329 = x3d.Billboard()
Shape1330 = x3d.Shape()
Text1331 = x3d.Text()
Text1331.string = ["72"]
FontStyle1332 = x3d.FontStyle()
FontStyle1332.size = 0.035

Text1331.fontStyle = FontStyle1332

Shape1330.geometry = Text1331

Billboard1329.children.append(Shape1330)

HAnimSite1326.children.append(Billboard1329)

HAnimSegment1297.children.append(HAnimSite1326)

HAnimJoint1296.children.append(HAnimSegment1297)
HAnimJoint1333 = x3d.HAnimJoint(DEF="hanim_r_radiocarpal")
HAnimJoint1333.name = "r_radiocarpal"
HAnimJoint1333.center = [-0.1959,0.8694,-0.0521]
HAnimSegment1334 = x3d.HAnimSegment(DEF="hanim_r_carpal")
HAnimSegment1334.name = "r_carpal"
Transform1335 = x3d.Transform()
Transform1335.translation = [-0.2,0.85,-0.05]
Transform1335.rotation = [0,0,1,-3.14]
Transform1335.scale = [0.2,0.2,0.2]
Transform1336 = x3d.Transform()
Transform1336.rotation = [0,1,0,1.57]
Shape1337 = x3d.Shape(USE="HAnimJointShape")

Transform1336.children.append(Shape1337)

Transform1335.children.append(Transform1336)

HAnimSegment1334.children.append(Transform1335)
Shape1338 = x3d.Shape()
LineSet1339 = x3d.LineSet()
LineSet1339.vertexCount = [2]
ColorRGBA1340 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1339.color = ColorRGBA1340
Coordinate1341 = x3d.Coordinate()
Coordinate1341.point = [(-0.1959, 0.8694, -0.0521),(-0.1899, 0.8502, -0.0473)]

LineSet1339.coord = Coordinate1341

Shape1338.geometry = LineSet1339

HAnimSegment1334.children.append(Shape1338)
HAnimSite1342 = x3d.HAnimSite(DEF="hanim_r_ulnar_styloid")
HAnimSite1342.name = "r_ulnar_styloid"
HAnimSite1342.translation = [-0.2117,0.8562,-0.0584]
TouchSensor1343 = x3d.TouchSensor()
TouchSensor1343.description = "HAnimSite 73 r_ulnar_styloid"

HAnimSite1342.children.append(TouchSensor1343)
Shape1344 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1342.children.append(Shape1344)
Billboard1345 = x3d.Billboard()
Shape1346 = x3d.Shape()
Text1347 = x3d.Text()
Text1347.string = ["73"]
FontStyle1348 = x3d.FontStyle()
FontStyle1348.size = 0.035

Text1347.fontStyle = FontStyle1348

Shape1346.geometry = Text1347

Billboard1345.children.append(Shape1346)

HAnimSite1342.children.append(Billboard1345)

HAnimSegment1334.children.append(HAnimSite1342)
Shape1349 = x3d.Shape()
LineSet1350 = x3d.LineSet()
LineSet1350.vertexCount = [2]
ColorRGBA1351 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1350.color = ColorRGBA1351
Coordinate1352 = x3d.Coordinate()
Coordinate1352.point = [(-0.1959, 0.8694, -0.0521),(-0.1961, 0.8055, -0.0218)]

LineSet1350.coord = Coordinate1352

Shape1349.geometry = LineSet1350

HAnimSegment1334.children.append(Shape1349)
Shape1353 = x3d.Shape()
LineSet1354 = x3d.LineSet()
LineSet1354.vertexCount = [2]
ColorRGBA1355 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1354.color = ColorRGBA1355
Coordinate1356 = x3d.Coordinate()
Coordinate1356.point = [(-0.1959, 0.8694, -0.0521),(-0.1972, 0.806, -0.0468)]

LineSet1354.coord = Coordinate1356

Shape1353.geometry = LineSet1354

HAnimSegment1334.children.append(Shape1353)
Shape1357 = x3d.Shape()
LineSet1358 = x3d.LineSet()
LineSet1358.vertexCount = [2]
ColorRGBA1359 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1358.color = ColorRGBA1359
Coordinate1360 = x3d.Coordinate()
Coordinate1360.point = [(-0.1959, 0.8694, -0.0521),(-0.1951, 0.8049, -0.0732)]

LineSet1358.coord = Coordinate1360

Shape1357.geometry = LineSet1358

HAnimSegment1334.children.append(Shape1357)
Shape1361 = x3d.Shape()
LineSet1362 = x3d.LineSet()
LineSet1362.vertexCount = [2]
ColorRGBA1363 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1362.color = ColorRGBA1363
Coordinate1364 = x3d.Coordinate()
Coordinate1364.point = [(-0.1959, 0.8694, -0.0521),(-0.1926, 0.8096, -0.0975)]

LineSet1362.coord = Coordinate1364

Shape1361.geometry = LineSet1362

HAnimSegment1334.children.append(Shape1361)

HAnimJoint1333.children.append(HAnimSegment1334)
HAnimJoint1365 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_1")
HAnimJoint1365.name = "r_carpometacarpal_1"
HAnimJoint1365.center = [-0.1899,0.8502,-0.0473]
HAnimSegment1366 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_1")
HAnimSegment1366.name = "r_metacarpal_1"
Transform1367 = x3d.Transform()
Transform1367.translation = [-0.1899,0.8502,-0.0473]
Transform1368 = x3d.Transform()
Shape1369 = x3d.Shape(USE="HAnimJointShape")

Transform1368.children.append(Shape1369)

Transform1367.children.append(Transform1368)

HAnimSegment1366.children.append(Transform1367)
Shape1370 = x3d.Shape()
LineSet1371 = x3d.LineSet()
LineSet1371.vertexCount = [2]
ColorRGBA1372 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1371.color = ColorRGBA1372
Coordinate1373 = x3d.Coordinate()
Coordinate1373.point = [(-0.1899, 0.8502, -0.0473),(-0.1874, 0.8256, 0.0306)]

LineSet1371.coord = Coordinate1373

Shape1370.geometry = LineSet1371

HAnimSegment1366.children.append(Shape1370)

HAnimJoint1365.children.append(HAnimSegment1366)
HAnimJoint1374 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_1")
HAnimJoint1374.name = "r_metacarpophalangeal_1"
HAnimJoint1374.center = [-0.1874,0.8256,0.0306]
HAnimSegment1375 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_1")
HAnimSegment1375.name = "r_carpal_proximal_phalanx_1"
Transform1376 = x3d.Transform()
Transform1376.translation = [-0.1874,0.8256,0.0306]
Transform1377 = x3d.Transform()
Shape1378 = x3d.Shape(USE="HAnimJointShape")

Transform1377.children.append(Shape1378)

Transform1376.children.append(Transform1377)

HAnimSegment1375.children.append(Transform1376)
Shape1379 = x3d.Shape()
LineSet1380 = x3d.LineSet()
LineSet1380.vertexCount = [2]
ColorRGBA1381 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1380.color = ColorRGBA1381
Coordinate1382 = x3d.Coordinate()
Coordinate1382.point = [(-0.1874, 0.8256, 0.0306),(-0.1864, 0.819, 0.0506)]

LineSet1380.coord = Coordinate1382

Shape1379.geometry = LineSet1380

HAnimSegment1375.children.append(Shape1379)

HAnimJoint1374.children.append(HAnimSegment1375)
HAnimJoint1383 = x3d.HAnimJoint(DEF="hanim_r_carpal_interphalangeal_1")
HAnimJoint1383.name = "r_carpal_interphalangeal_1"
HAnimJoint1383.center = [-0.1864,0.819,0.0506]

HAnimJoint1374.children.append(HAnimJoint1383)

HAnimJoint1365.children.append(HAnimJoint1374)

HAnimJoint1333.children.append(HAnimJoint1365)
HAnimJoint1384 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_2")
HAnimJoint1384.name = "r_carpometacarpal_2"
HAnimJoint1384.center = [-0.1961,0.8055,-0.0218]
HAnimSegment1385 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_2")
HAnimSegment1385.name = "r_metacarpal_2"
Transform1386 = x3d.Transform()
Transform1386.translation = [-0.1961,0.8055,-0.0218]
Transform1387 = x3d.Transform()
Shape1388 = x3d.Shape(USE="HAnimJointShape")

Transform1387.children.append(Shape1388)

Transform1386.children.append(Transform1387)

HAnimSegment1385.children.append(Transform1386)
Shape1389 = x3d.Shape()
LineSet1390 = x3d.LineSet()
LineSet1390.vertexCount = [2]
ColorRGBA1391 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1390.color = ColorRGBA1391
Coordinate1392 = x3d.Coordinate()
Coordinate1392.point = [(-0.1961, 0.8055, -0.0218),(-0.1961, 0.7846, -0.0218)]

LineSet1390.coord = Coordinate1392

Shape1389.geometry = LineSet1390

HAnimSegment1385.children.append(Shape1389)
HAnimSite1393 = x3d.HAnimSite(DEF="hanim_r_metacarpal_phalanx_2")
HAnimSite1393.name = "r_metacarpal_phalanx_2"
HAnimSite1393.translation = [-0.1977,0.8169,-0.0177]
TouchSensor1394 = x3d.TouchSensor()
TouchSensor1394.description = "HAnimSite 78 r_metacarpal_phalanx_2"

HAnimSite1393.children.append(TouchSensor1394)
Shape1395 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1393.children.append(Shape1395)
Billboard1396 = x3d.Billboard()
Shape1397 = x3d.Shape()
Text1398 = x3d.Text()
Text1398.string = ["78"]
FontStyle1399 = x3d.FontStyle()
FontStyle1399.size = 0.035

Text1398.fontStyle = FontStyle1399

Shape1397.geometry = Text1398

Billboard1396.children.append(Shape1397)

HAnimSite1393.children.append(Billboard1396)

HAnimSegment1385.children.append(HAnimSite1393)

HAnimJoint1384.children.append(HAnimSegment1385)
HAnimJoint1400 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_2")
HAnimJoint1400.name = "r_metacarpophalangeal_2"
HAnimJoint1400.center = [-0.1961,0.7846,-0.0218]
HAnimSegment1401 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_2")
HAnimSegment1401.name = "r_carpal_proximal_phalanx_2"
Transform1402 = x3d.Transform()
Transform1402.translation = [-0.1961,0.7846,-0.0218]
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
Coordinate1408.point = [(-0.1961, 0.7846, -0.0218),(-0.1954, 0.7393, -0.0185)]

LineSet1406.coord = Coordinate1408

Shape1405.geometry = LineSet1406

HAnimSegment1401.children.append(Shape1405)

HAnimJoint1400.children.append(HAnimSegment1401)
HAnimJoint1409 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint1409.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint1409.center = [-0.1954,0.7393,-0.0185]
HAnimSegment1410 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_2")
HAnimSegment1410.name = "r_carpal_middle_phalanx_2"
Transform1411 = x3d.Transform()
Transform1411.translation = [-0.1954,0.7393,-0.0185]
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
Coordinate1417.point = [(-0.1954, 0.7393, -0.0185),(-0.1945, 0.7169, -0.0173)]

LineSet1415.coord = Coordinate1417

Shape1414.geometry = LineSet1415

HAnimSegment1410.children.append(Shape1414)

HAnimJoint1409.children.append(HAnimSegment1410)
HAnimJoint1418 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint1418.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint1418.center = [-0.1945,0.7169,-0.0173]

HAnimJoint1409.children.append(HAnimJoint1418)

HAnimJoint1400.children.append(HAnimJoint1409)

HAnimJoint1384.children.append(HAnimJoint1400)

HAnimJoint1333.children.append(HAnimJoint1384)
HAnimJoint1419 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_3")
HAnimJoint1419.name = "r_carpometacarpal_3"
HAnimJoint1419.center = [-0.1972,0.806,-0.0468]
HAnimSegment1420 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_3")
HAnimSegment1420.name = "r_metacarpal_3"
Transform1421 = x3d.Transform()
Transform1421.translation = [-0.1972,0.806,-0.0468]
Transform1422 = x3d.Transform()
Shape1423 = x3d.Shape(USE="HAnimJointShape")

Transform1422.children.append(Shape1423)

Transform1421.children.append(Transform1422)

HAnimSegment1420.children.append(Transform1421)
Shape1424 = x3d.Shape()
LineSet1425 = x3d.LineSet()
LineSet1425.vertexCount = [2]
ColorRGBA1426 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1425.color = ColorRGBA1426
Coordinate1427 = x3d.Coordinate()
Coordinate1427.point = [(-0.1972, 0.806, -0.0468),(-0.1972, 0.7849, -0.0468)]

LineSet1425.coord = Coordinate1427

Shape1424.geometry = LineSet1425

HAnimSegment1420.children.append(Shape1424)
HAnimSite1428 = x3d.HAnimSite(DEF="hanim_r_metacarpal_phalanx_3")
HAnimSite1428.name = "r_metacarpal_phalanx_3"
TouchSensor1429 = x3d.TouchSensor()
TouchSensor1429.description = "HAnimSite 79 r_metacarpal_phalanx_3"

HAnimSite1428.children.append(TouchSensor1429)
Shape1430 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1428.children.append(Shape1430)
Billboard1431 = x3d.Billboard()
Shape1432 = x3d.Shape()
Text1433 = x3d.Text()
Text1433.string = ["79"]
FontStyle1434 = x3d.FontStyle()
FontStyle1434.size = 0.035

Text1433.fontStyle = FontStyle1434

Shape1432.geometry = Text1433

Billboard1431.children.append(Shape1432)

HAnimSite1428.children.append(Billboard1431)

HAnimSegment1420.children.append(HAnimSite1428)

HAnimJoint1419.children.append(HAnimSegment1420)
HAnimJoint1435 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_3")
HAnimJoint1435.name = "r_metacarpophalangeal_3"
HAnimJoint1435.center = [-0.1972,0.7849,-0.0468]
HAnimSegment1436 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_3")
HAnimSegment1436.name = "r_carpal_proximal_phalanx_3"
Transform1437 = x3d.Transform()
Transform1437.translation = [-0.1972,0.7849,-0.0468]
Transform1438 = x3d.Transform()
Shape1439 = x3d.Shape(USE="HAnimJointShape")

Transform1438.children.append(Shape1439)

Transform1437.children.append(Transform1438)

HAnimSegment1436.children.append(Transform1437)
Shape1440 = x3d.Shape()
LineSet1441 = x3d.LineSet()
LineSet1441.vertexCount = [2]
ColorRGBA1442 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1441.color = ColorRGBA1442
Coordinate1443 = x3d.Coordinate()
Coordinate1443.point = [(-0.1972, 0.7849, -0.0468),(-0.195, 0.7304, -0.0441)]

LineSet1441.coord = Coordinate1443

Shape1440.geometry = LineSet1441

HAnimSegment1436.children.append(Shape1440)

HAnimJoint1435.children.append(HAnimSegment1436)
HAnimJoint1444 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint1444.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint1444.center = [-0.195,0.7304,-0.0441]
HAnimSegment1445 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_3")
HAnimSegment1445.name = "r_carpal_middle_phalanx_3"
Transform1446 = x3d.Transform()
Transform1446.translation = [-0.195,0.7304,-0.0441]
Transform1447 = x3d.Transform()
Shape1448 = x3d.Shape(USE="HAnimJointShape")

Transform1447.children.append(Shape1448)

Transform1446.children.append(Transform1447)

HAnimSegment1445.children.append(Transform1446)
Shape1449 = x3d.Shape()
LineSet1450 = x3d.LineSet()
LineSet1450.vertexCount = [2]
ColorRGBA1451 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1450.color = ColorRGBA1451
Coordinate1452 = x3d.Coordinate()
Coordinate1452.point = [(-0.195, 0.7304, -0.0441),(-0.1939, 0.7042, -0.0432)]

LineSet1450.coord = Coordinate1452

Shape1449.geometry = LineSet1450

HAnimSegment1445.children.append(Shape1449)

HAnimJoint1444.children.append(HAnimSegment1445)
HAnimJoint1453 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint1453.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint1453.center = [-0.1939,0.7042,-0.0432]

HAnimJoint1444.children.append(HAnimJoint1453)

HAnimJoint1435.children.append(HAnimJoint1444)

HAnimJoint1419.children.append(HAnimJoint1435)

HAnimJoint1333.children.append(HAnimJoint1419)
HAnimJoint1454 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_4")
HAnimJoint1454.name = "r_carpometacarpal_4"
HAnimJoint1454.center = [-0.1951,0.8049,-0.0732]
HAnimSegment1455 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_4")
HAnimSegment1455.name = "r_metacarpal_4"
Transform1456 = x3d.Transform()
Transform1456.translation = [-0.1951,0.8049,-0.0732]
Transform1457 = x3d.Transform()
Shape1458 = x3d.Shape(USE="HAnimJointShape")

Transform1457.children.append(Shape1458)

Transform1456.children.append(Transform1457)

HAnimSegment1455.children.append(Transform1456)
Shape1459 = x3d.Shape()
LineSet1460 = x3d.LineSet()
LineSet1460.vertexCount = [2]
ColorRGBA1461 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1460.color = ColorRGBA1461
Coordinate1462 = x3d.Coordinate()
Coordinate1462.point = [(-0.1951, 0.8049, -0.0732),(-0.1951, 0.7845, -0.0732)]

LineSet1460.coord = Coordinate1462

Shape1459.geometry = LineSet1460

HAnimSegment1455.children.append(Shape1459)

HAnimJoint1454.children.append(HAnimSegment1455)
HAnimJoint1463 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_4")
HAnimJoint1463.name = "r_metacarpophalangeal_4"
HAnimJoint1463.center = [-0.1951,0.7845,-0.0732]
HAnimSegment1464 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_4")
HAnimSegment1464.name = "r_carpal_proximal_phalanx_4"
Transform1465 = x3d.Transform()
Transform1465.translation = [-0.1951,0.7845,-0.0732]
Transform1466 = x3d.Transform()
Shape1467 = x3d.Shape(USE="HAnimJointShape")

Transform1466.children.append(Shape1467)

Transform1465.children.append(Transform1466)

HAnimSegment1464.children.append(Transform1465)
Shape1468 = x3d.Shape()
LineSet1469 = x3d.LineSet()
LineSet1469.vertexCount = [2]
ColorRGBA1470 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1469.color = ColorRGBA1470
Coordinate1471 = x3d.Coordinate()
Coordinate1471.point = [(-0.1951, 0.7845, -0.0732),(-0.192, 0.7318, -0.0716)]

LineSet1469.coord = Coordinate1471

Shape1468.geometry = LineSet1469

HAnimSegment1464.children.append(Shape1468)

HAnimJoint1463.children.append(HAnimSegment1464)
HAnimJoint1472 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint1472.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint1472.center = [-0.192,0.7318,-0.0716]
HAnimSegment1473 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_4")
HAnimSegment1473.name = "r_carpal_middle_phalanx_4"
Transform1474 = x3d.Transform()
Transform1474.translation = [-0.192,0.7318,-0.0716]
Transform1475 = x3d.Transform()
Shape1476 = x3d.Shape(USE="HAnimJointShape")

Transform1475.children.append(Shape1476)

Transform1474.children.append(Transform1475)

HAnimSegment1473.children.append(Transform1474)
Shape1477 = x3d.Shape()
LineSet1478 = x3d.LineSet()
LineSet1478.vertexCount = [2]
ColorRGBA1479 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1478.color = ColorRGBA1479
Coordinate1480 = x3d.Coordinate()
Coordinate1480.point = [(-0.192, 0.7318, -0.0716),(-0.1908, 0.7077, -0.0706)]

LineSet1478.coord = Coordinate1480

Shape1477.geometry = LineSet1478

HAnimSegment1473.children.append(Shape1477)

HAnimJoint1472.children.append(HAnimSegment1473)
HAnimJoint1481 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint1481.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint1481.center = [-0.1908,0.7077,-0.0706]

HAnimJoint1472.children.append(HAnimJoint1481)

HAnimJoint1463.children.append(HAnimJoint1472)

HAnimJoint1454.children.append(HAnimJoint1463)

HAnimJoint1333.children.append(HAnimJoint1454)
HAnimJoint1482 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_5")
HAnimJoint1482.name = "r_carpometacarpal_5"
HAnimJoint1482.center = [-0.1926,0.8096,-0.0975]
HAnimSegment1483 = x3d.HAnimSegment(DEF="hanim_r_metacarpal_5")
HAnimSegment1483.name = "r_metacarpal_5"
Transform1484 = x3d.Transform()
Transform1484.translation = [-0.1926,0.8096,-0.0975]
Transform1485 = x3d.Transform()
Shape1486 = x3d.Shape(USE="HAnimJointShape")

Transform1485.children.append(Shape1486)

Transform1484.children.append(Transform1485)

HAnimSegment1483.children.append(Transform1484)
Shape1487 = x3d.Shape()
LineSet1488 = x3d.LineSet()
LineSet1488.vertexCount = [2]
ColorRGBA1489 = x3d.ColorRGBA(USE="HAnimSegmentLineColorRGBA")

LineSet1488.color = ColorRGBA1489
Coordinate1490 = x3d.Coordinate()
Coordinate1490.point = [(-0.1926, 0.8096, -0.0975),(-0.1926, 0.7896, -0.0975)]

LineSet1488.coord = Coordinate1490

Shape1487.geometry = LineSet1488

HAnimSegment1483.children.append(Shape1487)
HAnimSite1491 = x3d.HAnimSite(DEF="hanim_r_metacarpal_phalanx_5")
HAnimSite1491.name = "r_metacarpal_phalanx_5"
HAnimSite1491.translation = [-0.1929,0.789,-0.1064]
TouchSensor1492 = x3d.TouchSensor()
TouchSensor1492.description = "HAnimSite 80 r_metacarpal_phalanx_5"

HAnimSite1491.children.append(TouchSensor1492)
Shape1493 = x3d.Shape(USE="HAnimSiteShape")

HAnimSite1491.children.append(Shape1493)
Billboard1494 = x3d.Billboard()
Shape1495 = x3d.Shape()
Text1496 = x3d.Text()
Text1496.string = ["80"]
FontStyle1497 = x3d.FontStyle()
FontStyle1497.size = 0.035

Text1496.fontStyle = FontStyle1497

Shape1495.geometry = Text1496

Billboard1494.children.append(Shape1495)

HAnimSite1491.children.append(Billboard1494)

HAnimSegment1483.children.append(HAnimSite1491)

HAnimJoint1482.children.append(HAnimSegment1483)
HAnimJoint1498 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_5")
HAnimJoint1498.name = "r_metacarpophalangeal_5"
HAnimJoint1498.center = [-0.1926,0.7896,-0.0975]
HAnimSegment1499 = x3d.HAnimSegment(DEF="hanim_r_carpal_proximal_phalanx_5")
HAnimSegment1499.name = "r_carpal_proximal_phalanx_5"
Transform1500 = x3d.Transform()
Transform1500.translation = [-0.1926,0.7896,-0.0975]
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
Coordinate1506.point = [(-0.1926, 0.7896, -0.0975),(-0.1902, 0.7483, -0.0963)]

LineSet1504.coord = Coordinate1506

Shape1503.geometry = LineSet1504

HAnimSegment1499.children.append(Shape1503)

HAnimJoint1498.children.append(HAnimSegment1499)
HAnimJoint1507 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint1507.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint1507.center = [-0.1902,0.7483,-0.0963]
HAnimSegment1508 = x3d.HAnimSegment(DEF="hanim_r_carpal_middle_phalanx_5")
HAnimSegment1508.name = "r_carpal_middle_phalanx_5"
Transform1509 = x3d.Transform()
Transform1509.translation = [-0.1902,0.7483,-0.0963]
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
Coordinate1515.point = [(-0.1902, 0.7483, -0.0963),(-0.1908, 0.754, -0.096)]

LineSet1513.coord = Coordinate1515

Shape1512.geometry = LineSet1513

HAnimSegment1508.children.append(Shape1512)

HAnimJoint1507.children.append(HAnimSegment1508)
HAnimJoint1516 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint1516.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint1516.center = [-0.1908,0.754,-0.096]

HAnimJoint1507.children.append(HAnimJoint1516)

HAnimJoint1498.children.append(HAnimJoint1507)

HAnimJoint1482.children.append(HAnimJoint1498)

HAnimJoint1333.children.append(HAnimJoint1482)

HAnimJoint1296.children.append(HAnimJoint1333)

HAnimJoint1273.children.append(HAnimJoint1296)

HAnimJoint1264.children.append(HAnimJoint1273)

HAnimJoint1220.children.append(HAnimJoint1264)

HAnimJoint691.children.append(HAnimJoint1220)

HAnimJoint682.children.append(HAnimJoint691)

HAnimJoint673.children.append(HAnimJoint682)

HAnimJoint664.children.append(HAnimJoint673)

HAnimJoint648.children.append(HAnimJoint664)

HAnimJoint611.children.append(HAnimJoint648)

HAnimJoint602.children.append(HAnimJoint611)

HAnimJoint593.children.append(HAnimJoint602)

HAnimJoint570.children.append(HAnimJoint593)

HAnimJoint554.children.append(HAnimJoint570)

HAnimJoint545.children.append(HAnimJoint554)

HAnimJoint536.children.append(HAnimJoint545)

HAnimJoint527.children.append(HAnimJoint536)

HAnimJoint497.children.append(HAnimJoint527)

HAnimJoint488.children.append(HAnimJoint497)

HAnimJoint479.children.append(HAnimJoint488)

HAnimJoint449.children.append(HAnimJoint479)

HAnimJoint37.children.append(HAnimJoint449)

HAnimHumanoid36.skeleton.append(HAnimJoint37)
HAnimJoint1517 = x3d.HAnimJoint(USE="hanim_humanoid_root")

HAnimHumanoid36.joints.append(HAnimJoint1517)
HAnimJoint1518 = x3d.HAnimJoint(USE="hanim_sacroiliac")

HAnimHumanoid36.joints.append(HAnimJoint1518)
HAnimJoint1519 = x3d.HAnimJoint(USE="hanim_l_hip")

HAnimHumanoid36.joints.append(HAnimJoint1519)
HAnimJoint1520 = x3d.HAnimJoint(USE="hanim_l_knee")

HAnimHumanoid36.joints.append(HAnimJoint1520)
HAnimJoint1521 = x3d.HAnimJoint(USE="hanim_l_talocrural")

HAnimHumanoid36.joints.append(HAnimJoint1521)
HAnimJoint1522 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_2")

HAnimHumanoid36.joints.append(HAnimJoint1522)
HAnimJoint1523 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1523)
HAnimJoint1524 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1524)
HAnimJoint1525 = x3d.HAnimJoint(USE="hanim_r_hip")

HAnimHumanoid36.joints.append(HAnimJoint1525)
HAnimJoint1526 = x3d.HAnimJoint(USE="hanim_r_knee")

HAnimHumanoid36.joints.append(HAnimJoint1526)
HAnimJoint1527 = x3d.HAnimJoint(USE="hanim_r_talocrural")

HAnimHumanoid36.joints.append(HAnimJoint1527)
HAnimJoint1528 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_2")

HAnimHumanoid36.joints.append(HAnimJoint1528)
HAnimJoint1529 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1529)
HAnimJoint1530 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1530)
HAnimJoint1531 = x3d.HAnimJoint(USE="hanim_vl5")

HAnimHumanoid36.joints.append(HAnimJoint1531)
HAnimJoint1532 = x3d.HAnimJoint(USE="hanim_vl4")

HAnimHumanoid36.joints.append(HAnimJoint1532)
HAnimJoint1533 = x3d.HAnimJoint(USE="hanim_vl3")

HAnimHumanoid36.joints.append(HAnimJoint1533)
HAnimJoint1534 = x3d.HAnimJoint(USE="hanim_vl2")

HAnimHumanoid36.joints.append(HAnimJoint1534)
HAnimJoint1535 = x3d.HAnimJoint(USE="hanim_vl1")

HAnimHumanoid36.joints.append(HAnimJoint1535)
HAnimJoint1536 = x3d.HAnimJoint(USE="hanim_vt12")

HAnimHumanoid36.joints.append(HAnimJoint1536)
HAnimJoint1537 = x3d.HAnimJoint(USE="hanim_vt11")

HAnimHumanoid36.joints.append(HAnimJoint1537)
HAnimJoint1538 = x3d.HAnimJoint(USE="hanim_vt10")

HAnimHumanoid36.joints.append(HAnimJoint1538)
HAnimJoint1539 = x3d.HAnimJoint(USE="hanim_vt9")

HAnimHumanoid36.joints.append(HAnimJoint1539)
HAnimJoint1540 = x3d.HAnimJoint(USE="hanim_vt8")

HAnimHumanoid36.joints.append(HAnimJoint1540)
HAnimJoint1541 = x3d.HAnimJoint(USE="hanim_vt7")

HAnimHumanoid36.joints.append(HAnimJoint1541)
HAnimJoint1542 = x3d.HAnimJoint(USE="hanim_vt6")

HAnimHumanoid36.joints.append(HAnimJoint1542)
HAnimJoint1543 = x3d.HAnimJoint(USE="hanim_vt5")

HAnimHumanoid36.joints.append(HAnimJoint1543)
HAnimJoint1544 = x3d.HAnimJoint(USE="hanim_vt4")

HAnimHumanoid36.joints.append(HAnimJoint1544)
HAnimJoint1545 = x3d.HAnimJoint(USE="hanim_vt3")

HAnimHumanoid36.joints.append(HAnimJoint1545)
HAnimJoint1546 = x3d.HAnimJoint(USE="hanim_vt2")

HAnimHumanoid36.joints.append(HAnimJoint1546)
HAnimJoint1547 = x3d.HAnimJoint(USE="hanim_vt1")

HAnimHumanoid36.joints.append(HAnimJoint1547)
HAnimJoint1548 = x3d.HAnimJoint(USE="hanim_vc7")

HAnimHumanoid36.joints.append(HAnimJoint1548)
HAnimJoint1549 = x3d.HAnimJoint(USE="hanim_vc6")

HAnimHumanoid36.joints.append(HAnimJoint1549)
HAnimJoint1550 = x3d.HAnimJoint(USE="hanim_vc5")

HAnimHumanoid36.joints.append(HAnimJoint1550)
HAnimJoint1551 = x3d.HAnimJoint(USE="hanim_vc4")

HAnimHumanoid36.joints.append(HAnimJoint1551)
HAnimJoint1552 = x3d.HAnimJoint(USE="hanim_vc3")

HAnimHumanoid36.joints.append(HAnimJoint1552)
HAnimJoint1553 = x3d.HAnimJoint(USE="hanim_vc2")

HAnimHumanoid36.joints.append(HAnimJoint1553)
HAnimJoint1554 = x3d.HAnimJoint(USE="hanim_vc1")

HAnimHumanoid36.joints.append(HAnimJoint1554)
HAnimJoint1555 = x3d.HAnimJoint(USE="hanim_skullbase")

HAnimHumanoid36.joints.append(HAnimJoint1555)
HAnimJoint1556 = x3d.HAnimJoint(USE="hanim_l_eyelid_joint")

HAnimHumanoid36.joints.append(HAnimJoint1556)
HAnimJoint1557 = x3d.HAnimJoint(USE="hanim_r_eyelid_joint")

HAnimHumanoid36.joints.append(HAnimJoint1557)
HAnimJoint1558 = x3d.HAnimJoint(USE="hanim_l_eyeball_joint")

HAnimHumanoid36.joints.append(HAnimJoint1558)
HAnimJoint1559 = x3d.HAnimJoint(USE="hanim_r_eyeball_joint")

HAnimHumanoid36.joints.append(HAnimJoint1559)
HAnimJoint1560 = x3d.HAnimJoint(USE="hanim_l_eyebrow_joint")

HAnimHumanoid36.joints.append(HAnimJoint1560)
HAnimJoint1561 = x3d.HAnimJoint(USE="hanim_r_eyebrow_joint")

HAnimHumanoid36.joints.append(HAnimJoint1561)
HAnimJoint1562 = x3d.HAnimJoint(USE="hanim_temporomandibular")

HAnimHumanoid36.joints.append(HAnimJoint1562)
HAnimJoint1563 = x3d.HAnimJoint(USE="hanim_l_sternoclavicular")

HAnimHumanoid36.joints.append(HAnimJoint1563)
HAnimJoint1564 = x3d.HAnimJoint(USE="hanim_l_acromioclavicular")

HAnimHumanoid36.joints.append(HAnimJoint1564)
HAnimJoint1565 = x3d.HAnimJoint(USE="hanim_l_shoulder")

HAnimHumanoid36.joints.append(HAnimJoint1565)
HAnimJoint1566 = x3d.HAnimJoint(USE="hanim_l_elbow")

HAnimHumanoid36.joints.append(HAnimJoint1566)
HAnimJoint1567 = x3d.HAnimJoint(USE="hanim_l_radiocarpal")

HAnimHumanoid36.joints.append(HAnimJoint1567)
HAnimJoint1568 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_1")

HAnimHumanoid36.joints.append(HAnimJoint1568)
HAnimJoint1569 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_1")

HAnimHumanoid36.joints.append(HAnimJoint1569)
HAnimJoint1570 = x3d.HAnimJoint(USE="hanim_l_carpal_interphalangeal_1")

HAnimHumanoid36.joints.append(HAnimJoint1570)
HAnimJoint1571 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_2")

HAnimHumanoid36.joints.append(HAnimJoint1571)
HAnimJoint1572 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1572)
HAnimJoint1573 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1573)
HAnimJoint1574 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1574)
HAnimJoint1575 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_3")

HAnimHumanoid36.joints.append(HAnimJoint1575)
HAnimJoint1576 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1576)
HAnimJoint1577 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1577)
HAnimJoint1578 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1578)
HAnimJoint1579 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_4")

HAnimHumanoid36.joints.append(HAnimJoint1579)
HAnimJoint1580 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1580)
HAnimJoint1581 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1581)
HAnimJoint1582 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1582)
HAnimJoint1583 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_5")

HAnimHumanoid36.joints.append(HAnimJoint1583)
HAnimJoint1584 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1584)
HAnimJoint1585 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1585)
HAnimJoint1586 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1586)
HAnimJoint1587 = x3d.HAnimJoint(USE="hanim_r_sternoclavicular")

HAnimHumanoid36.joints.append(HAnimJoint1587)
HAnimJoint1588 = x3d.HAnimJoint(USE="hanim_r_acromioclavicular")

HAnimHumanoid36.joints.append(HAnimJoint1588)
HAnimJoint1589 = x3d.HAnimJoint(USE="hanim_r_shoulder")

HAnimHumanoid36.joints.append(HAnimJoint1589)
HAnimJoint1590 = x3d.HAnimJoint(USE="hanim_r_elbow")

HAnimHumanoid36.joints.append(HAnimJoint1590)
HAnimJoint1591 = x3d.HAnimJoint(USE="hanim_r_radiocarpal")

HAnimHumanoid36.joints.append(HAnimJoint1591)
HAnimJoint1592 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_1")

HAnimHumanoid36.joints.append(HAnimJoint1592)
HAnimJoint1593 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_1")

HAnimHumanoid36.joints.append(HAnimJoint1593)
HAnimJoint1594 = x3d.HAnimJoint(USE="hanim_r_carpal_interphalangeal_1")

HAnimHumanoid36.joints.append(HAnimJoint1594)
HAnimJoint1595 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_2")

HAnimHumanoid36.joints.append(HAnimJoint1595)
HAnimJoint1596 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1596)
HAnimJoint1597 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1597)
HAnimJoint1598 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid36.joints.append(HAnimJoint1598)
HAnimJoint1599 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_3")

HAnimHumanoid36.joints.append(HAnimJoint1599)
HAnimJoint1600 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1600)
HAnimJoint1601 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1601)
HAnimJoint1602 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid36.joints.append(HAnimJoint1602)
HAnimJoint1603 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_4")

HAnimHumanoid36.joints.append(HAnimJoint1603)
HAnimJoint1604 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1604)
HAnimJoint1605 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1605)
HAnimJoint1606 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid36.joints.append(HAnimJoint1606)
HAnimJoint1607 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_5")

HAnimHumanoid36.joints.append(HAnimJoint1607)
HAnimJoint1608 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1608)
HAnimJoint1609 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1609)
HAnimJoint1610 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid36.joints.append(HAnimJoint1610)
Coordinate1611 = x3d.Coordinate(DEF="TheSkinCoord")
Coordinate1611.point = [(0, 1.77, 0),(0, 1.665, 0.09),(-0.033, 1.62, 0.087),(0.033, 1.62, 0.087),(0, 1.55, 0.097),(-0.077, 1.64, -0.01),(-0.0527, 1.58, 0.015),(0.077, 1.64, -0.01),(0.0527, 1.58, 0.015),(0, 1.625, -0.0925),(-0.03, 1.46, 0.035),(0, 1.44, 0.03),(0.03, 1.46, 0.035),(-0.1135, 1.318, 0.095),(0.1135, 1.318, 0.095),(0, 1.25, 0.113),(-0.087, 1.19, 0.09),(-0.0935, 1.03, 0.075),(0.087, 1.19, 0.09),(0.0935, 1.03, 0.075),(-0.1425, 1.065, 0.0033),(-0.15, 0.9, -0.01),(0.1425, 1.065, 0.0033),(0.15, 0.9, -0.01),(0, 1.53, -0.084),(0.0049, 1.1908, -0.1113),(-0.0773, 1.019, -0.12),(0.0773, 1.019, -0.12),(0.005, 1.0915, -0.1091),(-0.178, 1.4825, -0.0625),(-0.17, 1.38, 0.007),(-0.1884, 0.8676, -0.036),(-0.16, 1.38, -0.127),(-0.2, 1.1388, -0.08),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.23, 1.133, -0.055),(-0.1977, 0.8169, -0.0177),(-0.1941, 0.6772, -0.0423),(-0.2117, 0.8562, -0.0584),(-0.1929, 0.789, -0.1064),(0.175, 1.4825, -0.06),(0.17, 1.38, 0.007),(0.1901, 0.8645, -0.0415),(0.16, 1.38, -0.125),(0.2, 1.1388, -0.08),(0.165, 1.1388, -0.04),(0.244, 1.1388, -0.04),(0.23, 1.133, -0.055),(0.2009, 0.8139, -0.0237),(0.2056, 0.6743, -0.0482),(0.2142, 0.8529, -0.0648),(0.1929, 0.786, -0.1122),(-0.1, 0.4913, -0.03),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.165, 0.01, 0.12),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.09, 0.056, 0.0125),(-0.115, 0.02, 0.122),(-0.115, 0.04, -0.055),(-0.11, 0.011, 0.19),(0.0993, 0.4881, -0.0309),(0.17, 0.466, 0),(0.05, 0.4867, 0),(0.165, 0.01, 0.12),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.09, 0.056, 0.0125),(0.115, 0.02, 0.122),(0.115, 0.04, -0.055),(0.11, 0.011, 0.19),(0, 0.875, 0),(-0.0646, 1.5149, -0.038),(0.0646, 1.5149, -0.038),(0, 1.07225, 0.09),(-0.11, 1.427, -0.1375),(-0.235, 1.42, -0.0625),(0.11, 1.427, -0.1375),(0.235, 1.42, -0.0625),(0, 1.41, -0.145),(0, 0.925, 0.08),(-0.087, 1.19, -0.09),(0.087, 1.19, -0.09),(0.172, 1.32, -0.03),(-0.172, 1.32, -0.03),(0.15, 1.23, -0.015),(-0.15, 1.23, -0.015),(0.079, 0.92, -0.14),(0.1, 0.9, 0.077),(-0.079, 0.92, -0.14),(-0.1, 0.9, 0.075),(0, 0.87, 0),(0.171, 0.65, 0),(0.02, 0.65, 0),(0.1, 0.65, -0.08),(0.1, 0.65, 0.07),(-0.171, 0.65, 0),(-0.02, 0.65, 0),(-0.1, 0.65, -0.08),(-0.1, 0.65, 0.07),(0.25, 1.27, -0.04),(0.17, 1.27, -0.04),(0.2, 1.27, -0.09),(0.2, 1.27, 0.02),(0.244, 1.1388, -0.04),(0.165, 1.1388, -0.04),(0.2, 1.1388, -0.08),(0.2, 1.1388, -0.013),(0.225, 1, -0.01),(0.225, 1, -0.07),(0.185, 1, -0.01),(0.185, 1, -0.07),(0.2, 1.1388, -0.04),(0.225, 0.92, -0.04),(0.175, 0.92, -0.04),(0.2, 0.92, -0.065),(0.2, 0.92, -0.015),(0.225, 0.89, -0.04),(0.175, 0.89, -0.04),(0.2, 0.89, -0.065),(0.2, 0.89, -0.015),(0.218, 0.86, -0.04),(0.184, 0.86, -0.04),(0.2, 0.87, -0.07),(0.2, 0.87, 0),(0.21, 0.85, 0),(0.1854, 0.85, 0),(0.212, 0.84, -0.015),(0.183, 0.84, -0.015),(0.213, 0.835, -0.04),(0.19, 0.835, -0.04),(0.211, 0.835, -0.065),(0.192, 0.835, -0.065),(0.208, 0.84, -0.085),(0.19, 0.84, -0.085),(0.2, 0.84, -0.095),(0.215, 0.82, 0),(0.193, 0.815, 0.005),(0.198, 0.8, 0.012),(0.21, 0.82, 0.03),(0.19, 0.82, 0.03),(0.2, 0.835, 0.039),(0.212, 0.8, 0.05),(0.188, 0.8, 0.05),(0.2, 0.807, 0.057),(0.2, 0.793, 0.035),(0.2, 0.774, 0.076),(0.212, 0.78, 0.07),(0.188, 0.78, 0.07),(0.2, 0.785, 0.075),(0.2, 0.77, 0.062),(0.215, 0.793, -0.015),(0.187, 0.793, -0.015),(0.2, 0.793, -0.005),(0.215, 0.788, -0.04),(0.187, 0.788, -0.04),(0.215, 0.793, -0.065),(0.187, 0.793, -0.065),(0.21, 0.79, -0.085),(0.19, 0.79, -0.085),(0.2, 0.79, -0.095),(0.19, 0.77, -0.0275),(0.19, 0.77, -0.0525),(0.19, 0.78, -0.0775),(0.212, 0.745, -0.015),(0.188, 0.745, -0.02),(0.2, 0.745, -0.0255),(0.2, 0.745, -0.0045),(0.211, 0.72, -0.015),(0.189, 0.72, -0.015),(0.2, 0.72, -0.0252),(0.2, 0.72, -0.0048),(0.21, 0.695, -0.015),(0.19, 0.695, -0.015),(0.2, 0.695, -0.025),(0.2, 0.695, -0.005),(0.2, 0.685, -0.015),(0.215, 0.74, -0.04),(0.185, 0.74, -0.04),(0.2, 0.74, -0.055),(0.2, 0.74, -0.025),(0.21, 0.7142, -0.04),(0.19, 0.7142, -0.04),(0.2, 0.7142, -0.053),(0.2, 0.7142, -0.027),(0.21, 0.68, -0.04),(0.19, 0.68, -0.04),(0.2, 0.68, -0.05),(0.2, 0.68, -0.03),(0.2, 0.67, -0.04),(0.212, 0.74, -0.065),(0.188, 0.74, -0.065),(0.2, 0.74, -0.0756),(0.2, 0.74, -0.0542),(0.21, 0.7177, -0.065),(0.19, 0.7177, -0.065),(0.2, 0.7177, -0.0751),(0.2, 0.7177, -0.0549),(0.21, 0.695, -0.065),(0.19, 0.695, -0.065),(0.2, 0.695, -0.075),(0.2, 0.695, -0.055),(0.2, 0.685, -0.065),(0.211, 0.755, -0.085),(0.189, 0.755, -0.085),(0.2, 0.755, -0.0952),(0.2, 0.755, -0.0748),(0.21, 0.735, -0.085),(0.19, 0.735, -0.085),(0.2, 0.735, -0.0951),(0.2, 0.735, -0.0749),(0.21, 0.72, -0.085),(0.19, 0.72, -0.085),(0.2, 0.72, -0.095),(0.2, 0.72, -0.075),(0.2, 0.71, -0.085),(-0.23, 1.23, -0.04),(-0.16, 1.23, -0.04),(-0.2, 1.235, -0.105),(-0.2, 1.235, 0.02),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.2, 1.1388, -0.08),(-0.2, 1.1388, 0.013),(-0.225, 1, -0.01),(-0.225, 1, -0.07),(-0.185, 1, -0.01),(-0.185, 1, -0.07),(-0.2, 1.1388, -0.04),(-0.225, 0.92, -0.04),(-0.175, 0.92, -0.04),(-0.2, 0.92, -0.065),(-0.2, 0.92, -0.015),(-0.225, 0.89, -0.04),(-0.175, 0.89, -0.04),(-0.2, 0.89, -0.065),(-0.2, 0.89, -0.015),(-0.218, 0.86, -0.04),(-0.184, 0.86, -0.04),(-0.2, 0.87, -0.07),(-0.2, 0.87, 0),(-0.21, 0.85, 0),(-0.1854, 0.85, 0),(-0.212, 0.84, -0.015),(-0.183, 0.84, -0.015),(-0.213, 0.835, -0.04),(-0.19, 0.835, -0.04),(-0.211, 0.835, -0.065),(-0.192, 0.835, -0.065),(-0.208, 0.84, -0.085),(-0.19, 0.84, -0.085),(-0.2, 0.84, -0.095),(-0.215, 0.82, 0),(-0.193, 0.815, 0.005),(-0.198, 0.8, 0.012),(-0.21, 0.82, 0.03),(-0.19, 0.82, 0.03),(-0.2, 0.835, 0.039),(-0.212, 0.8, 0.05),(-0.188, 0.8, 0.05),(-0.2, 0.807, 0.057),(-0.2, 0.793, 0.035),(-0.2, 0.774, 0.076),(-0.212, 0.78, 0.07),(-0.188, 0.78, 0.07),(-0.2, 0.785, 0.075),(-0.2, 0.77, 0.062),(-0.215, 0.793, -0.015),(-0.187, 0.793, -0.015),(-0.2, 0.793, -0.005),(-0.215, 0.788, -0.04),(-0.187, 0.788, -0.04),(-0.215, 0.793, -0.065),(-0.187, 0.793, -0.065),(-0.21, 0.79, -0.085),(-0.19, 0.79, -0.085),(-0.2, 0.79, -0.095),(-0.19, 0.77, -0.0275),(-0.19, 0.77, -0.0525),(-0.19, 0.78, -0.0775),(-0.212, 0.745, -0.015),(-0.188, 0.745, -0.02),(-0.2, 0.745, -0.0255),(-0.2, 0.745, -0.0045),(-0.211, 0.72, -0.015),(-0.189, 0.72, -0.015),(-0.2, 0.72, -0.0252),(-0.2, 0.72, -0.0048),(-0.21, 0.695, -0.015),(-0.19, 0.695, -0.015),(-0.2, 0.695, -0.025),(-0.2, 0.695, -0.005),(-0.2, 0.685, -0.015),(-0.215, 0.74, -0.04),(-0.185, 0.74, -0.04),(-0.2, 0.74, -0.055),(-0.2, 0.74, -0.025),(-0.21, 0.7142, -0.04),(-0.19, 0.7142, -0.04),(-0.2, 0.7142, -0.053),(-0.2, 0.7142, -0.027),(-0.21, 0.68, -0.04),(-0.19, 0.68, -0.04),(-0.2, 0.68, -0.05),(-0.2, 0.68, -0.03),(-0.2, 0.67, -0.04),(-0.212, 0.74, -0.065),(-0.188, 0.74, -0.065),(-0.2, 0.74, -0.0756),(-0.2, 0.74, -0.0542),(-0.21, 0.7177, -0.065),(-0.19, 0.7177, -0.065),(-0.2, 0.7177, -0.0751),(-0.2, 0.7177, -0.0549),(-0.21, 0.695, -0.065),(-0.19, 0.695, -0.065),(-0.2, 0.695, -0.075),(-0.2, 0.695, -0.055),(-0.2, 0.685, -0.065),(-0.211, 0.755, -0.085),(-0.189, 0.755, -0.085),(-0.2, 0.755, -0.0952),(-0.2, 0.755, -0.0748),(-0.21, 0.735, -0.085),(-0.19, 0.735, -0.085),(-0.2, 0.735, -0.0951),(-0.2, 0.735, -0.0749),(-0.21, 0.72, -0.085),(-0.19, 0.72, -0.085),(-0.2, 0.72, -0.095),(-0.2, 0.72, -0.075),(-0.2, 0.71, -0.085),(0.115, 0.466, 0.06),(0.115, 0.466, -0.055),(0.15, 0.466, 0),(0.05, 0.466, 0),(0.17, 0.3, 0),(0.06, 0.3, 0),(0.1, 0.3, -0.05),(0.1, 0.3, 0.05),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.115, 0.069, -0.045),(0.117, 0.0975, 0.0615),(0.1375, 0.006, -0.03),(0.095, 0.006, -0.03),(0.115, 0.015, -0.045),(0.115, 0.06, 0.1),(0.115, 0, 0.07),(0.165, 0, 0.07),(0.095, 0, 0.07),(0.115, 0.04, 0.13),(0.125, 0, 0.12),(0.165, 0, 0.12),(0.087, 0, 0.122),(0.09, 0.012, 0.188),(0.11, 0.011, 0.19),(0.128, 0.011, 0.185),(0.142, 0.011, 0.178),(0.154, 0.01, 0.168),(-0.115, 0.466, 0.06),(-0.115, 0.466, -0.055),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.17, 0.3, 0),(-0.06, 0.3, 0),(-0.1, 0.3, -0.05),(-0.1, 0.3, 0.05),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.115, 0.069, -0.045),(-0.117, 0.0975, 0.0615),(-0.1375, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.115, 0.06, 0.1),(-0.115, 0, 0.07),(-0.165, 0, 0.07),(-0.095, 0, 0.07),(-0.115, 0.04, 0.13),(-0.125, 0, 0.12),(-0.165, 0, 0.12),(-0.087, 0, 0.122),(-0.09, 0.012, 0.188),(-0.11, 0.011, 0.19),(-0.128, 0.011, 0.185),(-0.142, 0.011, 0.178),(-0.154, 0.01, 0.168)]

HAnimHumanoid36.skinCoord = Coordinate1611
Shape1612 = x3d.Shape(DEF="SkinShape")
Appearance1613 = x3d.Appearance(DEF="SkinAppearance")
Material1614 = x3d.Material(DEF="SkinMaterial")
Material1614.ambientIntensity = 0.6
Material1614.diffuseColor = [1,1,1]
Material1614.shininess = 0.6
Material1614.transparency = 1

Appearance1613.material = Material1614
ImageTexture1615 = x3d.ImageTexture(DEF="zBlueSpiralBkg2")
ImageTexture1615.description = "Blue Spiral Pattern"
ImageTexture1615.url = ["../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]

Appearance1613.texture = ImageTexture1615

Shape1612.appearance = Appearance1613
IndexedFaceSet1616 = x3d.IndexedFaceSet()
IndexedFaceSet1616.creaseAngle = 3.1
IndexedFaceSet1616.coordIndex = [0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]
Color1617 = x3d.Color()
Color1617.color = [(1, 0, 0),(0, 1, 1),(0, 1, 0),(1, 1, 0),(1, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(0, 1, 1),(1, 1, 0),(1, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(1, 0, 0),(1, 0, 0),(1, 1, 0),(1, 1, 0),(1, 1, 1),(1, 0, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(1, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 1)]

IndexedFaceSet1616.color = Color1617
Coordinate1618 = x3d.Coordinate(USE="TheSkinCoord")

IndexedFaceSet1616.coord = Coordinate1618

Shape1612.geometry = IndexedFaceSet1616

HAnimHumanoid36.skin.append(Shape1612)

Scene9.children.append(HAnimHumanoid36)

X3D0.Scene = Scene9
f = open("../data/Humanoid3.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Humanoid3.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/Humanoid3.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
