print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "HAnim"
component2.level = 3

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "blenderSkeleton.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "copyright"
meta4.content = "2023"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "reference"
meta5.content = "http://www.web3D.org"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "generator"
meta6.content = "Blender 4.0.1"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()

Scene7.children.append(NavigationInfo8)
Background9 = x3d.Background(DEF="WO_World")
Background9.groundColor = [(0.05087608844041824, 0.05087608844041824, 0.05087608844041824)]
Background9.skyColor = [(0.05087608844041824, 0.05087608844041824, 0.05087608844041824)]

Scene7.children.append(Background9)
Transform10 = x3d.Transform()
Shape11 = x3d.Shape(DEF="SiteShape")
Box12 = x3d.Box()
Box12.size = [0.05,0.05,0.05]

Shape11.geometry = Box12
Appearance13 = x3d.Appearance()
Material14 = x3d.Material()
Material14.diffuseColor = [0,0,1]

Appearance13.material = Material14

Shape11.appearance = Appearance13

Transform10.children.append(Shape11)

Scene7.children.append(Transform10)
Transform15 = x3d.Transform()
Shape16 = x3d.Shape(DEF="JointShape")
Sphere17 = x3d.Sphere()
Sphere17.radius = 0.06

Shape16.geometry = Sphere17
Appearance18 = x3d.Appearance(DEF="JointAppearance")
Material19 = x3d.Material()
Material19.diffuseColor = [1,0.5,0]
Material19.transparency = 0.5

Appearance18.material = Material19

Shape16.appearance = Appearance18

Transform15.children.append(Shape16)

Scene7.children.append(Transform15)
Transform20 = x3d.Transform(DEF="Light_TRANSFORM")
Transform20.rotation = [0.20594,0.33152,0.9207,1.92627]
Transform20.translation = [4.07625,1.00545,5.90386]
PointLight21 = x3d.PointLight(DEF="LA_Light")
PointLight21.location = [-8.940696716308594e-8,-3.5762786865234375e-7,4.6193599700927734e-7]
PointLight21.radius = 40

Transform20.children.append(PointLight21)

Scene7.children.append(Transform20)
Transform22 = x3d.Transform(DEF="Camera_TRANSFORM")
Transform22.rotation = [0.77344,0.33383,0.53884,1.35072]
Transform22.translation = [7.35889,-6.92579,4.95831]
Viewpoint23 = x3d.Viewpoint(DEF="CA_Camera")
Viewpoint23.fieldOfView = 0.6911112070083618
Viewpoint23.orientation = [-3.627339850709177e-8,-0.4730778932571411,-0.8810206651687622,0]
Viewpoint23.position = [-3.927080456378462e-7,-2.123415470123291e-7,2.384185791015625e-7]

Transform22.children.append(Viewpoint23)

Scene7.children.append(Transform22)
Transform24 = x3d.Transform(DEF="Armature_TRANSFORM")
HAnimHumanoid25 = x3d.HAnimHumanoid(DEF="hanim_humanoid")
HAnimHumanoid25.name = "humanoid"
HAnimHumanoid25.version = "2.0"
HAnimJoint26 = x3d.HAnimJoint(DEF="hanim_Armature")
HAnimJoint26.name = "Armature"
HAnimJoint26.ulimit = [0,0,0]
HAnimJoint26.llimit = [0,0,0]
HAnimSegment27 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_Armature")
HAnimSegment27.name = "SEGMENT_FOR_Armature"
TouchSensor28 = x3d.TouchSensor()
TouchSensor28.description = "joint Armature segment SEGMENT_FOR_Armature"

HAnimSegment27.children.append(TouchSensor28)
Transform29 = x3d.Transform()
Shape30 = x3d.Shape(USE="JointShape")

Transform29.children.append(Shape30)

HAnimSegment27.children.append(Transform29)
HAnimSite31 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_Armature_tip")
HAnimSite31.name = "SEGMENT_FOR_Armature_tip"
Transform32 = x3d.Transform()
Shape33 = x3d.Shape(USE="SiteShape")

Transform32.children.append(Shape33)

HAnimSite31.children.append(Transform32)

HAnimSegment27.children.append(HAnimSite31)

HAnimJoint26.children.append(HAnimSegment27)
HAnimJoint34 = x3d.HAnimJoint(DEF="hanim_sacrum")
HAnimJoint34.name = "sacrum"
HAnimJoint34.center = [-0.0002,-0.1178,0.8174]
HAnimJoint34.ulimit = [0,0,0]
HAnimJoint34.llimit = [0,0,0]
HAnimSegment35 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_sacrum")
HAnimSegment35.name = "SEGMENT_FOR_sacrum"
TouchSensor36 = x3d.TouchSensor()
TouchSensor36.description = "joint sacrum segment SEGMENT_FOR_sacrum"

HAnimSegment35.children.append(TouchSensor36)
Transform37 = x3d.Transform()
Transform37.translation = [-0.0002,-0.1178,0.8174]
Shape38 = x3d.Shape(USE="JointShape")

Transform37.children.append(Shape38)

HAnimSegment35.children.append(Transform37)
HAnimSite39 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_sacrum_tip")
HAnimSite39.name = "SEGMENT_FOR_sacrum_tip"
Transform40 = x3d.Transform()
Transform40.translation = [-0.0002,-0.1178,0.8174]
Shape41 = x3d.Shape(USE="SiteShape")

Transform40.children.append(Shape41)

HAnimSite39.children.append(Transform40)

HAnimSegment35.children.append(HAnimSite39)

HAnimJoint34.children.append(HAnimSegment35)
HAnimJoint42 = x3d.HAnimJoint(DEF="hanim_pelvis")
HAnimJoint42.name = "pelvis"
HAnimJoint42.center = [-0.0002,-0.1178,0.6986]
HAnimJoint42.ulimit = [0,0,0]
HAnimJoint42.llimit = [0,0,0]
HAnimSegment43 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_pelvis")
HAnimSegment43.name = "SEGMENT_FOR_pelvis"
TouchSensor44 = x3d.TouchSensor()
TouchSensor44.description = "joint pelvis segment SEGMENT_FOR_pelvis"

HAnimSegment43.children.append(TouchSensor44)
Transform45 = x3d.Transform()
Transform45.translation = [-0.0002,-0.1178,0.6986]
Shape46 = x3d.Shape(USE="JointShape")

Transform45.children.append(Shape46)

HAnimSegment43.children.append(Transform45)
HAnimSite47 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_pelvis_tip")
HAnimSite47.name = "SEGMENT_FOR_pelvis_tip"
Transform48 = x3d.Transform()
Transform48.translation = [-0.0002,-0.1178,0.6986]
Shape49 = x3d.Shape(USE="SiteShape")

Transform48.children.append(Shape49)

HAnimSite47.children.append(Transform48)

HAnimSegment43.children.append(HAnimSite47)

HAnimJoint42.children.append(HAnimSegment43)
HAnimJoint50 = x3d.HAnimJoint(DEF="hanim_l_thigh")
HAnimJoint50.name = "l_thigh"
HAnimJoint50.center = [0.0945,-0.1202,0.8181]
HAnimJoint50.ulimit = [0,0,0]
HAnimJoint50.llimit = [0,0,0]
HAnimSegment51 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_thigh")
HAnimSegment51.name = "SEGMENT_FOR_l_thigh"
TouchSensor52 = x3d.TouchSensor()
TouchSensor52.description = "joint l_thigh segment SEGMENT_FOR_l_thigh"

HAnimSegment51.children.append(TouchSensor52)
Transform53 = x3d.Transform()
Transform53.translation = [0.0945,-0.1202,0.8181]
Shape54 = x3d.Shape(USE="JointShape")

Transform53.children.append(Shape54)

HAnimSegment51.children.append(Transform53)
HAnimSite55 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_thigh_tip")
HAnimSite55.name = "SEGMENT_FOR_l_thigh_tip"
Transform56 = x3d.Transform()
Transform56.translation = [0.0945,-0.1202,0.8181]
Shape57 = x3d.Shape(USE="SiteShape")

Transform56.children.append(Shape57)

HAnimSite55.children.append(Transform56)

HAnimSegment51.children.append(HAnimSite55)

HAnimJoint50.children.append(HAnimSegment51)
HAnimJoint58 = x3d.HAnimJoint(DEF="hanim_l_calf")
HAnimJoint58.name = "l_calf"
HAnimJoint58.center = [0.0924,-0.1213,0.4003]
HAnimJoint58.ulimit = [0,0,0]
HAnimJoint58.llimit = [0,0,0]
HAnimSegment59 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_calf")
HAnimSegment59.name = "SEGMENT_FOR_l_calf"
TouchSensor60 = x3d.TouchSensor()
TouchSensor60.description = "joint l_calf segment SEGMENT_FOR_l_calf"

HAnimSegment59.children.append(TouchSensor60)
Transform61 = x3d.Transform()
Transform61.translation = [0.0924,-0.1213,0.4003]
Shape62 = x3d.Shape(USE="JointShape")

Transform61.children.append(Shape62)

HAnimSegment59.children.append(Transform61)
HAnimSite63 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_calf_tip")
HAnimSite63.name = "SEGMENT_FOR_l_calf_tip"
Transform64 = x3d.Transform()
Transform64.translation = [0.0924,-0.1213,0.4003]
Shape65 = x3d.Shape(USE="SiteShape")

Transform64.children.append(Shape65)

HAnimSite63.children.append(Transform64)

HAnimSegment59.children.append(HAnimSite63)

HAnimJoint58.children.append(HAnimSegment59)
HAnimJoint66 = x3d.HAnimJoint(DEF="hanim_l_talus")
HAnimJoint66.name = "l_talus"
HAnimJoint66.center = [0.0886,-0.1123,0.0869]
HAnimJoint66.ulimit = [0,0,0]
HAnimJoint66.llimit = [0,0,0]
HAnimSegment67 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_talus")
HAnimSegment67.name = "SEGMENT_FOR_l_talus"
TouchSensor68 = x3d.TouchSensor()
TouchSensor68.description = "joint l_talus segment SEGMENT_FOR_l_talus"

HAnimSegment67.children.append(TouchSensor68)
Transform69 = x3d.Transform()
Transform69.translation = [0.0886,-0.1123,0.0869]
Shape70 = x3d.Shape(USE="JointShape")

Transform69.children.append(Shape70)

HAnimSegment67.children.append(Transform69)
HAnimSite71 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_talus_tip")
HAnimSite71.name = "SEGMENT_FOR_l_talus_tip"
Transform72 = x3d.Transform()
Transform72.translation = [0.0886,-0.1123,0.0869]
Shape73 = x3d.Shape(USE="SiteShape")

Transform72.children.append(Shape73)

HAnimSite71.children.append(Transform72)

HAnimSegment67.children.append(HAnimSite71)

HAnimJoint66.children.append(HAnimSegment67)
HAnimJoint74 = x3d.HAnimJoint(DEF="hanim_l_navicular")
HAnimJoint74.name = "l_navicular"
HAnimJoint74.center = [0.0781,-0.097,0.0283]
HAnimJoint74.ulimit = [0,0,0]
HAnimJoint74.llimit = [0,0,0]
HAnimSegment75 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_navicular")
HAnimSegment75.name = "SEGMENT_FOR_l_navicular"
TouchSensor76 = x3d.TouchSensor()
TouchSensor76.description = "joint l_navicular segment SEGMENT_FOR_l_navicular"

HAnimSegment75.children.append(TouchSensor76)
Transform77 = x3d.Transform()
Transform77.translation = [0.0781,-0.097,0.0283]
Shape78 = x3d.Shape(USE="JointShape")

Transform77.children.append(Shape78)

HAnimSegment75.children.append(Transform77)
HAnimSite79 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_navicular_tip")
HAnimSite79.name = "SEGMENT_FOR_l_navicular_tip"
Transform80 = x3d.Transform()
Transform80.translation = [0.0781,-0.097,0.0283]
Shape81 = x3d.Shape(USE="SiteShape")

Transform80.children.append(Shape81)

HAnimSite79.children.append(Transform80)

HAnimSegment75.children.append(HAnimSite79)

HAnimJoint74.children.append(HAnimSegment75)
HAnimJoint82 = x3d.HAnimJoint(DEF="hanim_l_cuneiform_1")
HAnimJoint82.name = "l_cuneiform_1"
HAnimJoint82.center = [0.0672,-0.0835,0.0235]
HAnimJoint82.ulimit = [0,0,0]
HAnimJoint82.llimit = [0,0,0]
HAnimSegment83 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_cuneiform_1")
HAnimSegment83.name = "SEGMENT_FOR_l_cuneiform_1"
TouchSensor84 = x3d.TouchSensor()
TouchSensor84.description = "joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1"

HAnimSegment83.children.append(TouchSensor84)
Transform85 = x3d.Transform()
Transform85.translation = [0.0672,-0.0835,0.0235]
Shape86 = x3d.Shape(USE="JointShape")

Transform85.children.append(Shape86)

HAnimSegment83.children.append(Transform85)
HAnimSite87 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_cuneiform_1_tip")
HAnimSite87.name = "SEGMENT_FOR_l_cuneiform_1_tip"
Transform88 = x3d.Transform()
Transform88.translation = [0.0672,-0.0835,0.0235]
Shape89 = x3d.Shape(USE="SiteShape")

Transform88.children.append(Shape89)

HAnimSite87.children.append(Transform88)

HAnimSegment83.children.append(HAnimSite87)

HAnimJoint82.children.append(HAnimSegment83)
HAnimJoint90 = x3d.HAnimJoint(DEF="hanim_l_metatarsal_1")
HAnimJoint90.name = "l_metatarsal_1"
HAnimJoint90.center = [0.0644,-0.0577,0.0147]
HAnimJoint90.ulimit = [0,0,0]
HAnimJoint90.llimit = [0,0,0]
HAnimSegment91 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metatarsal_1")
HAnimSegment91.name = "SEGMENT_FOR_l_metatarsal_1"
TouchSensor92 = x3d.TouchSensor()
TouchSensor92.description = "joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1"

HAnimSegment91.children.append(TouchSensor92)
Transform93 = x3d.Transform()
Transform93.translation = [0.0644,-0.0577,0.0147]
Shape94 = x3d.Shape(USE="JointShape")

Transform93.children.append(Shape94)

HAnimSegment91.children.append(Transform93)
HAnimSite95 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metatarsal_1_tip")
HAnimSite95.name = "SEGMENT_FOR_l_metatarsal_1_tip"
Transform96 = x3d.Transform()
Transform96.translation = [0.0644,-0.0577,0.0147]
Shape97 = x3d.Shape(USE="SiteShape")

Transform96.children.append(Shape97)

HAnimSite95.children.append(Transform96)

HAnimSegment91.children.append(HAnimSite95)

HAnimJoint90.children.append(HAnimSegment91)
HAnimJoint98 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_phalanx_1")
HAnimJoint98.name = "l_tarsal_proximal_phalanx_1"
HAnimJoint98.center = [0.0619,-0.0083,0.0059]
HAnimJoint98.ulimit = [0,0,0]
HAnimJoint98.llimit = [0,0,0]
HAnimSegment99 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1")
HAnimSegment99.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_1"
TouchSensor100 = x3d.TouchSensor()
TouchSensor100.description = "joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1"

HAnimSegment99.children.append(TouchSensor100)
Transform101 = x3d.Transform()
Transform101.translation = [0.0619,-0.0083,0.0059]
Shape102 = x3d.Shape(USE="JointShape")

Transform101.children.append(Shape102)

HAnimSegment99.children.append(Transform101)
HAnimSite103 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip")
HAnimSite103.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip"
Transform104 = x3d.Transform()
Transform104.translation = [0.0619,-0.0083,0.0059]
Shape105 = x3d.Shape(USE="SiteShape")

Transform104.children.append(Shape105)

HAnimSite103.children.append(Transform104)

HAnimSegment99.children.append(HAnimSite103)

HAnimJoint98.children.append(HAnimSegment99)
HAnimJoint106 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_phalanx_1")
HAnimJoint106.name = "l_tarsal_distal_phalanx_1"
HAnimJoint106.ulimit = [0,0,0]
HAnimJoint106.llimit = [0,0,0]
HAnimSegment107 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1")
HAnimSegment107.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_1"
TouchSensor108 = x3d.TouchSensor()
TouchSensor108.description = "joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1"

HAnimSegment107.children.append(TouchSensor108)
Transform109 = x3d.Transform()
Shape110 = x3d.Shape(USE="JointShape")

Transform109.children.append(Shape110)

HAnimSegment107.children.append(Transform109)
HAnimSite111 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip")
HAnimSite111.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip"
Transform112 = x3d.Transform()
Shape113 = x3d.Shape(USE="SiteShape")

Transform112.children.append(Shape113)

HAnimSite111.children.append(Transform112)

HAnimSegment107.children.append(HAnimSite111)

HAnimJoint106.children.append(HAnimSegment107)

HAnimJoint98.children.append(HAnimJoint106)

HAnimJoint90.children.append(HAnimJoint98)

HAnimJoint82.children.append(HAnimJoint90)

HAnimJoint74.children.append(HAnimJoint82)
HAnimJoint114 = x3d.HAnimJoint(DEF="hanim_l_cuneiform_2")
HAnimJoint114.name = "l_cuneiform_2"
HAnimJoint114.center = [0.0812,-0.0805,0.025]
HAnimJoint114.ulimit = [0,0,0]
HAnimJoint114.llimit = [0,0,0]
HAnimSegment115 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_cuneiform_2")
HAnimSegment115.name = "SEGMENT_FOR_l_cuneiform_2"
TouchSensor116 = x3d.TouchSensor()
TouchSensor116.description = "joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2"

HAnimSegment115.children.append(TouchSensor116)
Transform117 = x3d.Transform()
Transform117.translation = [0.0812,-0.0805,0.025]
Shape118 = x3d.Shape(USE="JointShape")

Transform117.children.append(Shape118)

HAnimSegment115.children.append(Transform117)
HAnimSite119 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_cuneiform_2_tip")
HAnimSite119.name = "SEGMENT_FOR_l_cuneiform_2_tip"
Transform120 = x3d.Transform()
Transform120.translation = [0.0812,-0.0805,0.025]
Shape121 = x3d.Shape(USE="SiteShape")

Transform120.children.append(Shape121)

HAnimSite119.children.append(Transform120)

HAnimSegment115.children.append(HAnimSite119)

HAnimJoint114.children.append(HAnimSegment115)
HAnimJoint122 = x3d.HAnimJoint(DEF="hanim_l_metatarsal_2")
HAnimJoint122.name = "l_metatarsal_2"
HAnimJoint122.center = [0.08,-0.0608,0.0175]
HAnimJoint122.ulimit = [0,0,0]
HAnimJoint122.llimit = [0,0,0]
HAnimSegment123 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metatarsal_2")
HAnimSegment123.name = "SEGMENT_FOR_l_metatarsal_2"
TouchSensor124 = x3d.TouchSensor()
TouchSensor124.description = "joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2"

HAnimSegment123.children.append(TouchSensor124)
Transform125 = x3d.Transform()
Transform125.translation = [0.08,-0.0608,0.0175]
Shape126 = x3d.Shape(USE="JointShape")

Transform125.children.append(Shape126)

HAnimSegment123.children.append(Transform125)
HAnimSite127 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metatarsal_2_tip")
HAnimSite127.name = "SEGMENT_FOR_l_metatarsal_2_tip"
Transform128 = x3d.Transform()
Transform128.translation = [0.08,-0.0608,0.0175]
Shape129 = x3d.Shape(USE="SiteShape")

Transform128.children.append(Shape129)

HAnimSite127.children.append(Transform128)

HAnimSegment123.children.append(HAnimSite127)

HAnimJoint122.children.append(HAnimSegment123)
HAnimJoint130 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_phalanx_2")
HAnimJoint130.name = "l_tarsal_proximal_phalanx_2"
HAnimJoint130.center = [0.0824,-0.004,0.0064]
HAnimJoint130.ulimit = [0,0,0]
HAnimJoint130.llimit = [0,0,0]
HAnimSegment131 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2")
HAnimSegment131.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_2"
TouchSensor132 = x3d.TouchSensor()
TouchSensor132.description = "joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2"

HAnimSegment131.children.append(TouchSensor132)
Transform133 = x3d.Transform()
Transform133.translation = [0.0824,-0.004,0.0064]
Shape134 = x3d.Shape(USE="JointShape")

Transform133.children.append(Shape134)

HAnimSegment131.children.append(Transform133)
HAnimSite135 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip")
HAnimSite135.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip"
Transform136 = x3d.Transform()
Transform136.translation = [0.0824,-0.004,0.0064]
Shape137 = x3d.Shape(USE="SiteShape")

Transform136.children.append(Shape137)

HAnimSite135.children.append(Transform136)

HAnimSegment131.children.append(HAnimSite135)

HAnimJoint130.children.append(HAnimSegment131)
HAnimJoint138 = x3d.HAnimJoint(DEF="hanim_l_tarsal_middle_phalanx_2")
HAnimJoint138.name = "l_tarsal_middle_phalanx_2"
HAnimJoint138.center = [0.0841,0.0121,0.0041]
HAnimJoint138.ulimit = [0,0,0]
HAnimJoint138.llimit = [0,0,0]
HAnimSegment139 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2")
HAnimSegment139.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_2"
TouchSensor140 = x3d.TouchSensor()
TouchSensor140.description = "joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2"

HAnimSegment139.children.append(TouchSensor140)
Transform141 = x3d.Transform()
Transform141.translation = [0.0841,0.0121,0.0041]
Shape142 = x3d.Shape(USE="JointShape")

Transform141.children.append(Shape142)

HAnimSegment139.children.append(Transform141)
HAnimSite143 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip")
HAnimSite143.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip"
Transform144 = x3d.Transform()
Transform144.translation = [0.0841,0.0121,0.0041]
Shape145 = x3d.Shape(USE="SiteShape")

Transform144.children.append(Shape145)

HAnimSite143.children.append(Transform144)

HAnimSegment139.children.append(HAnimSite143)

HAnimJoint138.children.append(HAnimSegment139)
HAnimJoint146 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_phalanx_2")
HAnimJoint146.name = "l_tarsal_distal_phalanx_2"
HAnimJoint146.center = [0.0841,0.0216,0.0013]
HAnimJoint146.ulimit = [0,0,0]
HAnimJoint146.llimit = [0,0,0]
HAnimSegment147 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2")
HAnimSegment147.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_2"
TouchSensor148 = x3d.TouchSensor()
TouchSensor148.description = "joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2"

HAnimSegment147.children.append(TouchSensor148)
Transform149 = x3d.Transform()
Transform149.translation = [0.0841,0.0216,0.0013]
Shape150 = x3d.Shape(USE="JointShape")

Transform149.children.append(Shape150)

HAnimSegment147.children.append(Transform149)
HAnimSite151 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip")
HAnimSite151.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip"
Transform152 = x3d.Transform()
Transform152.translation = [0.0841,0.0216,0.0013]
Shape153 = x3d.Shape(USE="SiteShape")

Transform152.children.append(Shape153)

HAnimSite151.children.append(Transform152)

HAnimSegment147.children.append(HAnimSite151)

HAnimJoint146.children.append(HAnimSegment147)

HAnimJoint138.children.append(HAnimJoint146)

HAnimJoint130.children.append(HAnimJoint138)

HAnimJoint122.children.append(HAnimJoint130)

HAnimJoint114.children.append(HAnimJoint122)

HAnimJoint74.children.append(HAnimJoint114)
HAnimJoint154 = x3d.HAnimJoint(DEF="hanim_l_cuneiform_3")
HAnimJoint154.name = "l_cuneiform_3"
HAnimJoint154.center = [0.0928,-0.0821,0.0248]
HAnimJoint154.ulimit = [0,0,0]
HAnimJoint154.llimit = [0,0,0]
HAnimSegment155 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_cuneiform_3")
HAnimSegment155.name = "SEGMENT_FOR_l_cuneiform_3"
TouchSensor156 = x3d.TouchSensor()
TouchSensor156.description = "joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3"

HAnimSegment155.children.append(TouchSensor156)
Transform157 = x3d.Transform()
Transform157.translation = [0.0928,-0.0821,0.0248]
Shape158 = x3d.Shape(USE="JointShape")

Transform157.children.append(Shape158)

HAnimSegment155.children.append(Transform157)
HAnimSite159 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_cuneiform_3_tip")
HAnimSite159.name = "SEGMENT_FOR_l_cuneiform_3_tip"
Transform160 = x3d.Transform()
Transform160.translation = [0.0928,-0.0821,0.0248]
Shape161 = x3d.Shape(USE="SiteShape")

Transform160.children.append(Shape161)

HAnimSite159.children.append(Transform160)

HAnimSegment155.children.append(HAnimSite159)

HAnimJoint154.children.append(HAnimSegment155)
HAnimJoint162 = x3d.HAnimJoint(DEF="hanim_l_metatarsal_3")
HAnimJoint162.name = "l_metatarsal_3"
HAnimJoint162.center = [0.0944,-0.0625,0.0175]
HAnimJoint162.ulimit = [0,0,0]
HAnimJoint162.llimit = [0,0,0]
HAnimSegment163 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metatarsal_3")
HAnimSegment163.name = "SEGMENT_FOR_l_metatarsal_3"
TouchSensor164 = x3d.TouchSensor()
TouchSensor164.description = "joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3"

HAnimSegment163.children.append(TouchSensor164)
Transform165 = x3d.Transform()
Transform165.translation = [0.0944,-0.0625,0.0175]
Shape166 = x3d.Shape(USE="JointShape")

Transform165.children.append(Shape166)

HAnimSegment163.children.append(Transform165)
HAnimSite167 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metatarsal_3_tip")
HAnimSite167.name = "SEGMENT_FOR_l_metatarsal_3_tip"
Transform168 = x3d.Transform()
Transform168.translation = [0.0944,-0.0625,0.0175]
Shape169 = x3d.Shape(USE="SiteShape")

Transform168.children.append(Shape169)

HAnimSite167.children.append(Transform168)

HAnimSegment163.children.append(HAnimSite167)

HAnimJoint162.children.append(HAnimSegment163)
HAnimJoint170 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_phalanx_3")
HAnimJoint170.name = "l_tarsal_proximal_phalanx_3"
HAnimJoint170.center = [0.0963,-0.0065,0.0065]
HAnimJoint170.ulimit = [0,0,0]
HAnimJoint170.llimit = [0,0,0]
HAnimSegment171 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3")
HAnimSegment171.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_3"
TouchSensor172 = x3d.TouchSensor()
TouchSensor172.description = "joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3"

HAnimSegment171.children.append(TouchSensor172)
Transform173 = x3d.Transform()
Transform173.translation = [0.0963,-0.0065,0.0065]
Shape174 = x3d.Shape(USE="JointShape")

Transform173.children.append(Shape174)

HAnimSegment171.children.append(Transform173)
HAnimSite175 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip")
HAnimSite175.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip"
Transform176 = x3d.Transform()
Transform176.translation = [0.0963,-0.0065,0.0065]
Shape177 = x3d.Shape(USE="SiteShape")

Transform176.children.append(Shape177)

HAnimSite175.children.append(Transform176)

HAnimSegment171.children.append(HAnimSite175)

HAnimJoint170.children.append(HAnimSegment171)
HAnimJoint178 = x3d.HAnimJoint(DEF="hanim_l_tarsal_middle_phalanx_3")
HAnimJoint178.name = "l_tarsal_middle_phalanx_3"
HAnimJoint178.center = [0.0987,0.0086,0.0034]
HAnimJoint178.ulimit = [0,0,0]
HAnimJoint178.llimit = [0,0,0]
HAnimSegment179 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3")
HAnimSegment179.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_3"
TouchSensor180 = x3d.TouchSensor()
TouchSensor180.description = "joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3"

HAnimSegment179.children.append(TouchSensor180)
Transform181 = x3d.Transform()
Transform181.translation = [0.0987,0.0086,0.0034]
Shape182 = x3d.Shape(USE="JointShape")

Transform181.children.append(Shape182)

HAnimSegment179.children.append(Transform181)
HAnimSite183 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip")
HAnimSite183.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip"
Transform184 = x3d.Transform()
Transform184.translation = [0.0987,0.0086,0.0034]
Shape185 = x3d.Shape(USE="SiteShape")

Transform184.children.append(Shape185)

HAnimSite183.children.append(Transform184)

HAnimSegment179.children.append(HAnimSite183)

HAnimJoint178.children.append(HAnimSegment179)
HAnimJoint186 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_phalanx_3")
HAnimJoint186.name = "l_tarsal_distal_phalanx_3"
HAnimJoint186.center = [0.1002,0.0178,0.0013]
HAnimJoint186.ulimit = [0,0,0]
HAnimJoint186.llimit = [0,0,0]
HAnimSegment187 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3")
HAnimSegment187.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_3"
TouchSensor188 = x3d.TouchSensor()
TouchSensor188.description = "joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3"

HAnimSegment187.children.append(TouchSensor188)
Transform189 = x3d.Transform()
Transform189.translation = [0.1002,0.0178,0.0013]
Shape190 = x3d.Shape(USE="JointShape")

Transform189.children.append(Shape190)

HAnimSegment187.children.append(Transform189)
HAnimSite191 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip")
HAnimSite191.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip"
Transform192 = x3d.Transform()
Transform192.translation = [0.1002,0.0178,0.0013]
Shape193 = x3d.Shape(USE="SiteShape")

Transform192.children.append(Shape193)

HAnimSite191.children.append(Transform192)

HAnimSegment187.children.append(HAnimSite191)

HAnimJoint186.children.append(HAnimSegment187)

HAnimJoint178.children.append(HAnimJoint186)

HAnimJoint170.children.append(HAnimJoint178)

HAnimJoint162.children.append(HAnimJoint170)

HAnimJoint154.children.append(HAnimJoint162)

HAnimJoint74.children.append(HAnimJoint154)

HAnimJoint66.children.append(HAnimJoint74)
HAnimJoint194 = x3d.HAnimJoint(DEF="hanim_l_calcaneus")
HAnimJoint194.name = "l_calcaneus"
HAnimJoint194.center = [0.0889,-0.1278,0.0494]
HAnimJoint194.ulimit = [0,0,0]
HAnimJoint194.llimit = [0,0,0]
HAnimSegment195 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_calcaneus")
HAnimSegment195.name = "SEGMENT_FOR_l_calcaneus"
TouchSensor196 = x3d.TouchSensor()
TouchSensor196.description = "joint l_calcaneus segment SEGMENT_FOR_l_calcaneus"

HAnimSegment195.children.append(TouchSensor196)
Transform197 = x3d.Transform()
Transform197.translation = [0.0889,-0.1278,0.0494]
Shape198 = x3d.Shape(USE="JointShape")

Transform197.children.append(Shape198)

HAnimSegment195.children.append(Transform197)
HAnimSite199 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_calcaneus_tip")
HAnimSite199.name = "SEGMENT_FOR_l_calcaneus_tip"
Transform200 = x3d.Transform()
Transform200.translation = [0.0889,-0.1278,0.0494]
Shape201 = x3d.Shape(USE="SiteShape")

Transform200.children.append(Shape201)

HAnimSite199.children.append(Transform200)

HAnimSegment195.children.append(HAnimSite199)

HAnimJoint194.children.append(HAnimSegment195)
HAnimJoint202 = x3d.HAnimJoint(DEF="hanim_l_cuboid")
HAnimJoint202.name = "l_cuboid"
HAnimJoint202.center = [0.1105,-0.0998,0.0267]
HAnimJoint202.ulimit = [0,0,0]
HAnimJoint202.llimit = [0,0,0]
HAnimSegment203 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_cuboid")
HAnimSegment203.name = "SEGMENT_FOR_l_cuboid"
TouchSensor204 = x3d.TouchSensor()
TouchSensor204.description = "joint l_cuboid segment SEGMENT_FOR_l_cuboid"

HAnimSegment203.children.append(TouchSensor204)
Transform205 = x3d.Transform()
Transform205.translation = [0.1105,-0.0998,0.0267]
Shape206 = x3d.Shape(USE="JointShape")

Transform205.children.append(Shape206)

HAnimSegment203.children.append(Transform205)
HAnimSite207 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_cuboid_tip")
HAnimSite207.name = "SEGMENT_FOR_l_cuboid_tip"
Transform208 = x3d.Transform()
Transform208.translation = [0.1105,-0.0998,0.0267]
Shape209 = x3d.Shape(USE="SiteShape")

Transform208.children.append(Shape209)

HAnimSite207.children.append(Transform208)

HAnimSegment203.children.append(HAnimSite207)

HAnimJoint202.children.append(HAnimSegment203)
HAnimJoint210 = x3d.HAnimJoint(DEF="hanim_l_metatarsal_4")
HAnimJoint210.name = "l_metatarsal_4"
HAnimJoint210.center = [0.1063,-0.0634,0.016]
HAnimJoint210.ulimit = [0,0,0]
HAnimJoint210.llimit = [0,0,0]
HAnimSegment211 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metatarsal_4")
HAnimSegment211.name = "SEGMENT_FOR_l_metatarsal_4"
TouchSensor212 = x3d.TouchSensor()
TouchSensor212.description = "joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4"

HAnimSegment211.children.append(TouchSensor212)
Transform213 = x3d.Transform()
Transform213.translation = [0.1063,-0.0634,0.016]
Shape214 = x3d.Shape(USE="JointShape")

Transform213.children.append(Shape214)

HAnimSegment211.children.append(Transform213)
HAnimSite215 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metatarsal_4_tip")
HAnimSite215.name = "SEGMENT_FOR_l_metatarsal_4_tip"
Transform216 = x3d.Transform()
Transform216.translation = [0.1063,-0.0634,0.016]
Shape217 = x3d.Shape(USE="SiteShape")

Transform216.children.append(Shape217)

HAnimSite215.children.append(Transform216)

HAnimSegment211.children.append(HAnimSite215)

HAnimJoint210.children.append(HAnimSegment211)
HAnimJoint218 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_phalanx_4")
HAnimJoint218.name = "l_tarsal_proximal_phalanx_4"
HAnimJoint218.center = [0.1097,-0.0107,0.0058]
HAnimJoint218.ulimit = [0,0,0]
HAnimJoint218.llimit = [0,0,0]
HAnimSegment219 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4")
HAnimSegment219.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_4"
TouchSensor220 = x3d.TouchSensor()
TouchSensor220.description = "joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4"

HAnimSegment219.children.append(TouchSensor220)
Transform221 = x3d.Transform()
Transform221.translation = [0.1097,-0.0107,0.0058]
Shape222 = x3d.Shape(USE="JointShape")

Transform221.children.append(Shape222)

HAnimSegment219.children.append(Transform221)
HAnimSite223 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip")
HAnimSite223.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip"
Transform224 = x3d.Transform()
Transform224.translation = [0.1097,-0.0107,0.0058]
Shape225 = x3d.Shape(USE="SiteShape")

Transform224.children.append(Shape225)

HAnimSite223.children.append(Transform224)

HAnimSegment219.children.append(HAnimSite223)

HAnimJoint218.children.append(HAnimSegment219)
HAnimJoint226 = x3d.HAnimJoint(DEF="hanim_l_tarsal_middle_phalanx_4")
HAnimJoint226.name = "l_tarsal_middle_phalanx_4"
HAnimJoint226.center = [0.114,0.0044,0.0037]
HAnimJoint226.ulimit = [0,0,0]
HAnimJoint226.llimit = [0,0,0]
HAnimSegment227 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4")
HAnimSegment227.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_4"
TouchSensor228 = x3d.TouchSensor()
TouchSensor228.description = "joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4"

HAnimSegment227.children.append(TouchSensor228)
Transform229 = x3d.Transform()
Transform229.translation = [0.114,0.0044,0.0037]
Shape230 = x3d.Shape(USE="JointShape")

Transform229.children.append(Shape230)

HAnimSegment227.children.append(Transform229)
HAnimSite231 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip")
HAnimSite231.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip"
Transform232 = x3d.Transform()
Transform232.translation = [0.114,0.0044,0.0037]
Shape233 = x3d.Shape(USE="SiteShape")

Transform232.children.append(Shape233)

HAnimSite231.children.append(Transform232)

HAnimSegment227.children.append(HAnimSite231)

HAnimJoint226.children.append(HAnimSegment227)
HAnimJoint234 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_phalanx_4")
HAnimJoint234.name = "l_tarsal_distal_phalanx_4"
HAnimJoint234.center = [0.1155,0.0118,0.0008]
HAnimJoint234.ulimit = [0,0,0]
HAnimJoint234.llimit = [0,0,0]
HAnimSegment235 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4")
HAnimSegment235.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_4"
TouchSensor236 = x3d.TouchSensor()
TouchSensor236.description = "joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4"

HAnimSegment235.children.append(TouchSensor236)
Transform237 = x3d.Transform()
Transform237.translation = [0.1155,0.0118,0.0008]
Shape238 = x3d.Shape(USE="JointShape")

Transform237.children.append(Shape238)

HAnimSegment235.children.append(Transform237)
HAnimSite239 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip")
HAnimSite239.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip"
Transform240 = x3d.Transform()
Transform240.translation = [0.1155,0.0118,0.0008]
Shape241 = x3d.Shape(USE="SiteShape")

Transform240.children.append(Shape241)

HAnimSite239.children.append(Transform240)

HAnimSegment235.children.append(HAnimSite239)

HAnimJoint234.children.append(HAnimSegment235)

HAnimJoint226.children.append(HAnimJoint234)

HAnimJoint218.children.append(HAnimJoint226)

HAnimJoint210.children.append(HAnimJoint218)

HAnimJoint202.children.append(HAnimJoint210)
HAnimJoint242 = x3d.HAnimJoint(DEF="hanim_l_metatarsal_5")
HAnimJoint242.name = "l_metatarsal_5"
HAnimJoint242.center = [0.1206,-0.0671,0.0124]
HAnimJoint242.ulimit = [0,0,0]
HAnimJoint242.llimit = [0,0,0]
HAnimSegment243 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metatarsal_5")
HAnimSegment243.name = "SEGMENT_FOR_l_metatarsal_5"
TouchSensor244 = x3d.TouchSensor()
TouchSensor244.description = "joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5"

HAnimSegment243.children.append(TouchSensor244)
Transform245 = x3d.Transform()
Transform245.translation = [0.1206,-0.0671,0.0124]
Shape246 = x3d.Shape(USE="JointShape")

Transform245.children.append(Shape246)

HAnimSegment243.children.append(Transform245)
HAnimSite247 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metatarsal_5_tip")
HAnimSite247.name = "SEGMENT_FOR_l_metatarsal_5_tip"
Transform248 = x3d.Transform()
Transform248.translation = [0.1206,-0.0671,0.0124]
Shape249 = x3d.Shape(USE="SiteShape")

Transform248.children.append(Shape249)

HAnimSite247.children.append(Transform248)

HAnimSegment243.children.append(HAnimSite247)

HAnimJoint242.children.append(HAnimSegment243)
HAnimJoint250 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_phalanx_5")
HAnimJoint250.name = "l_tarsal_proximal_phalanx_5"
HAnimJoint250.center = [0.1239,-0.0153,0.0051]
HAnimJoint250.ulimit = [0,0,0]
HAnimJoint250.llimit = [0,0,0]
HAnimSegment251 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5")
HAnimSegment251.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_5"
TouchSensor252 = x3d.TouchSensor()
TouchSensor252.description = "joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5"

HAnimSegment251.children.append(TouchSensor252)
Transform253 = x3d.Transform()
Transform253.translation = [0.1239,-0.0153,0.0051]
Shape254 = x3d.Shape(USE="JointShape")

Transform253.children.append(Shape254)

HAnimSegment251.children.append(Transform253)
HAnimSite255 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip")
HAnimSite255.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip"
Transform256 = x3d.Transform()
Transform256.translation = [0.1239,-0.0153,0.0051]
Shape257 = x3d.Shape(USE="SiteShape")

Transform256.children.append(Shape257)

HAnimSite255.children.append(Transform256)

HAnimSegment251.children.append(HAnimSite255)

HAnimJoint250.children.append(HAnimSegment251)
HAnimJoint258 = x3d.HAnimJoint(DEF="hanim_l_tarsal_middle_phalanx_5")
HAnimJoint258.name = "l_tarsal_middle_phalanx_5"
HAnimJoint258.center = [0.1262,-0.0077,0.0023]
HAnimJoint258.ulimit = [0,0,0]
HAnimJoint258.llimit = [0,0,0]
HAnimSegment259 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5")
HAnimSegment259.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_5"
TouchSensor260 = x3d.TouchSensor()
TouchSensor260.description = "joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5"

HAnimSegment259.children.append(TouchSensor260)
Transform261 = x3d.Transform()
Transform261.translation = [0.1262,-0.0077,0.0023]
Shape262 = x3d.Shape(USE="JointShape")

Transform261.children.append(Shape262)

HAnimSegment259.children.append(Transform261)
HAnimSite263 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip")
HAnimSite263.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip"
Transform264 = x3d.Transform()
Transform264.translation = [0.1262,-0.0077,0.0023]
Shape265 = x3d.Shape(USE="SiteShape")

Transform264.children.append(Shape265)

HAnimSite263.children.append(Transform264)

HAnimSegment259.children.append(HAnimSite263)

HAnimJoint258.children.append(HAnimSegment259)
HAnimJoint266 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_phalanx_5")
HAnimJoint266.name = "l_tarsal_distal_phalanx_5"
HAnimJoint266.center = [0.1271,0,0]
HAnimJoint266.ulimit = [0,0,0]
HAnimJoint266.llimit = [0,0,0]
HAnimSegment267 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5")
HAnimSegment267.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_5"
TouchSensor268 = x3d.TouchSensor()
TouchSensor268.description = "joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5"

HAnimSegment267.children.append(TouchSensor268)
Transform269 = x3d.Transform()
Transform269.translation = [0.1271,0,0]
Shape270 = x3d.Shape(USE="JointShape")

Transform269.children.append(Shape270)

HAnimSegment267.children.append(Transform269)
HAnimSite271 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip")
HAnimSite271.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip"
Transform272 = x3d.Transform()
Transform272.translation = [0.1271,0,0]
Shape273 = x3d.Shape(USE="SiteShape")

Transform272.children.append(Shape273)

HAnimSite271.children.append(Transform272)

HAnimSegment267.children.append(HAnimSite271)

HAnimJoint266.children.append(HAnimSegment267)

HAnimJoint258.children.append(HAnimJoint266)

HAnimJoint250.children.append(HAnimJoint258)

HAnimJoint242.children.append(HAnimJoint250)

HAnimJoint202.children.append(HAnimJoint242)

HAnimJoint194.children.append(HAnimJoint202)

HAnimJoint66.children.append(HAnimJoint194)

HAnimJoint58.children.append(HAnimJoint66)

HAnimJoint50.children.append(HAnimJoint58)

HAnimJoint42.children.append(HAnimJoint50)
HAnimJoint274 = x3d.HAnimJoint(DEF="hanim_r_thigh")
HAnimJoint274.name = "r_thigh"
HAnimJoint274.center = [-0.0948,-0.1202,0.8181]
HAnimJoint274.ulimit = [0,0,0]
HAnimJoint274.llimit = [0,0,0]
HAnimSegment275 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_thigh")
HAnimSegment275.name = "SEGMENT_FOR_r_thigh"
TouchSensor276 = x3d.TouchSensor()
TouchSensor276.description = "joint r_thigh segment SEGMENT_FOR_r_thigh"

HAnimSegment275.children.append(TouchSensor276)
Transform277 = x3d.Transform()
Transform277.translation = [-0.0948,-0.1202,0.8181]
Shape278 = x3d.Shape(USE="JointShape")

Transform277.children.append(Shape278)

HAnimSegment275.children.append(Transform277)
HAnimSite279 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_thigh_tip")
HAnimSite279.name = "SEGMENT_FOR_r_thigh_tip"
Transform280 = x3d.Transform()
Transform280.translation = [-0.0948,-0.1202,0.8181]
Shape281 = x3d.Shape(USE="SiteShape")

Transform280.children.append(Shape281)

HAnimSite279.children.append(Transform280)

HAnimSegment275.children.append(HAnimSite279)

HAnimJoint274.children.append(HAnimSegment275)
HAnimJoint282 = x3d.HAnimJoint(DEF="hanim_r_calf")
HAnimJoint282.name = "r_calf"
HAnimJoint282.center = [-0.0928,-0.1213,0.4003]
HAnimJoint282.ulimit = [0,0,0]
HAnimJoint282.llimit = [0,0,0]
HAnimSegment283 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_calf")
HAnimSegment283.name = "SEGMENT_FOR_r_calf"
TouchSensor284 = x3d.TouchSensor()
TouchSensor284.description = "joint r_calf segment SEGMENT_FOR_r_calf"

HAnimSegment283.children.append(TouchSensor284)
Transform285 = x3d.Transform()
Transform285.translation = [-0.0928,-0.1213,0.4003]
Shape286 = x3d.Shape(USE="JointShape")

Transform285.children.append(Shape286)

HAnimSegment283.children.append(Transform285)
HAnimSite287 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_calf_tip")
HAnimSite287.name = "SEGMENT_FOR_r_calf_tip"
Transform288 = x3d.Transform()
Transform288.translation = [-0.0928,-0.1213,0.4003]
Shape289 = x3d.Shape(USE="SiteShape")

Transform288.children.append(Shape289)

HAnimSite287.children.append(Transform288)

HAnimSegment283.children.append(HAnimSite287)

HAnimJoint282.children.append(HAnimSegment283)
HAnimJoint290 = x3d.HAnimJoint(DEF="hanim_r_talus")
HAnimJoint290.name = "r_talus"
HAnimJoint290.center = [-0.0886,-0.1123,0.0869]
HAnimJoint290.ulimit = [0,0,0]
HAnimJoint290.llimit = [0,0,0]
HAnimSegment291 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_talus")
HAnimSegment291.name = "SEGMENT_FOR_r_talus"
TouchSensor292 = x3d.TouchSensor()
TouchSensor292.description = "joint r_talus segment SEGMENT_FOR_r_talus"

HAnimSegment291.children.append(TouchSensor292)
Transform293 = x3d.Transform()
Transform293.translation = [-0.0886,-0.1123,0.0869]
Shape294 = x3d.Shape(USE="JointShape")

Transform293.children.append(Shape294)

HAnimSegment291.children.append(Transform293)
HAnimSite295 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_talus_tip")
HAnimSite295.name = "SEGMENT_FOR_r_talus_tip"
Transform296 = x3d.Transform()
Transform296.translation = [-0.0886,-0.1123,0.0869]
Shape297 = x3d.Shape(USE="SiteShape")

Transform296.children.append(Shape297)

HAnimSite295.children.append(Transform296)

HAnimSegment291.children.append(HAnimSite295)

HAnimJoint290.children.append(HAnimSegment291)
HAnimJoint298 = x3d.HAnimJoint(DEF="hanim_r_navicular")
HAnimJoint298.name = "r_navicular"
HAnimJoint298.center = [-0.0781,-0.097,0.0283]
HAnimJoint298.ulimit = [0,0,0]
HAnimJoint298.llimit = [0,0,0]
HAnimSegment299 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_navicular")
HAnimSegment299.name = "SEGMENT_FOR_r_navicular"
TouchSensor300 = x3d.TouchSensor()
TouchSensor300.description = "joint r_navicular segment SEGMENT_FOR_r_navicular"

HAnimSegment299.children.append(TouchSensor300)
Transform301 = x3d.Transform()
Transform301.translation = [-0.0781,-0.097,0.0283]
Shape302 = x3d.Shape(USE="JointShape")

Transform301.children.append(Shape302)

HAnimSegment299.children.append(Transform301)
HAnimSite303 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_navicular_tip")
HAnimSite303.name = "SEGMENT_FOR_r_navicular_tip"
Transform304 = x3d.Transform()
Transform304.translation = [-0.0781,-0.097,0.0283]
Shape305 = x3d.Shape(USE="SiteShape")

Transform304.children.append(Shape305)

HAnimSite303.children.append(Transform304)

HAnimSegment299.children.append(HAnimSite303)

HAnimJoint298.children.append(HAnimSegment299)
HAnimJoint306 = x3d.HAnimJoint(DEF="hanim_r_cuneiform_1")
HAnimJoint306.name = "r_cuneiform_1"
HAnimJoint306.center = [-0.0672,-0.0835,0.0235]
HAnimJoint306.ulimit = [0,0,0]
HAnimJoint306.llimit = [0,0,0]
HAnimSegment307 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_cuneiform_1")
HAnimSegment307.name = "SEGMENT_FOR_r_cuneiform_1"
TouchSensor308 = x3d.TouchSensor()
TouchSensor308.description = "joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1"

HAnimSegment307.children.append(TouchSensor308)
Transform309 = x3d.Transform()
Transform309.translation = [-0.0672,-0.0835,0.0235]
Shape310 = x3d.Shape(USE="JointShape")

Transform309.children.append(Shape310)

HAnimSegment307.children.append(Transform309)
HAnimSite311 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_cuneiform_1_tip")
HAnimSite311.name = "SEGMENT_FOR_r_cuneiform_1_tip"
Transform312 = x3d.Transform()
Transform312.translation = [-0.0672,-0.0835,0.0235]
Shape313 = x3d.Shape(USE="SiteShape")

Transform312.children.append(Shape313)

HAnimSite311.children.append(Transform312)

HAnimSegment307.children.append(HAnimSite311)

HAnimJoint306.children.append(HAnimSegment307)
HAnimJoint314 = x3d.HAnimJoint(DEF="hanim_r_metatarsal_1")
HAnimJoint314.name = "r_metatarsal_1"
HAnimJoint314.center = [-0.0644,-0.0577,0.0147]
HAnimJoint314.ulimit = [0,0,0]
HAnimJoint314.llimit = [0,0,0]
HAnimSegment315 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metatarsal_1")
HAnimSegment315.name = "SEGMENT_FOR_r_metatarsal_1"
TouchSensor316 = x3d.TouchSensor()
TouchSensor316.description = "joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1"

HAnimSegment315.children.append(TouchSensor316)
Transform317 = x3d.Transform()
Transform317.translation = [-0.0644,-0.0577,0.0147]
Shape318 = x3d.Shape(USE="JointShape")

Transform317.children.append(Shape318)

HAnimSegment315.children.append(Transform317)
HAnimSite319 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metatarsal_1_tip")
HAnimSite319.name = "SEGMENT_FOR_r_metatarsal_1_tip"
Transform320 = x3d.Transform()
Transform320.translation = [-0.0644,-0.0577,0.0147]
Shape321 = x3d.Shape(USE="SiteShape")

Transform320.children.append(Shape321)

HAnimSite319.children.append(Transform320)

HAnimSegment315.children.append(HAnimSite319)

HAnimJoint314.children.append(HAnimSegment315)
HAnimJoint322 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_phalanx_1")
HAnimJoint322.name = "r_tarsal_proximal_phalanx_1"
HAnimJoint322.center = [-0.0619,-0.0083,0.0059]
HAnimJoint322.ulimit = [0,0,0]
HAnimJoint322.llimit = [0,0,0]
HAnimSegment323 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1")
HAnimSegment323.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_1"
TouchSensor324 = x3d.TouchSensor()
TouchSensor324.description = "joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1"

HAnimSegment323.children.append(TouchSensor324)
Transform325 = x3d.Transform()
Transform325.translation = [-0.0619,-0.0083,0.0059]
Shape326 = x3d.Shape(USE="JointShape")

Transform325.children.append(Shape326)

HAnimSegment323.children.append(Transform325)
HAnimSite327 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip")
HAnimSite327.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip"
Transform328 = x3d.Transform()
Transform328.translation = [-0.0619,-0.0083,0.0059]
Shape329 = x3d.Shape(USE="SiteShape")

Transform328.children.append(Shape329)

HAnimSite327.children.append(Transform328)

HAnimSegment323.children.append(HAnimSite327)

HAnimJoint322.children.append(HAnimSegment323)
HAnimJoint330 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_phalanx_1")
HAnimJoint330.name = "r_tarsal_distal_phalanx_1"
HAnimJoint330.ulimit = [0,0,0]
HAnimJoint330.llimit = [0,0,0]
HAnimSegment331 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1")
HAnimSegment331.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_1"
TouchSensor332 = x3d.TouchSensor()
TouchSensor332.description = "joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1"

HAnimSegment331.children.append(TouchSensor332)
Transform333 = x3d.Transform()
Shape334 = x3d.Shape(USE="JointShape")

Transform333.children.append(Shape334)

HAnimSegment331.children.append(Transform333)
HAnimSite335 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip")
HAnimSite335.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip"
Transform336 = x3d.Transform()
Shape337 = x3d.Shape(USE="SiteShape")

Transform336.children.append(Shape337)

HAnimSite335.children.append(Transform336)

HAnimSegment331.children.append(HAnimSite335)

HAnimJoint330.children.append(HAnimSegment331)

HAnimJoint322.children.append(HAnimJoint330)

HAnimJoint314.children.append(HAnimJoint322)

HAnimJoint306.children.append(HAnimJoint314)

HAnimJoint298.children.append(HAnimJoint306)
HAnimJoint338 = x3d.HAnimJoint(DEF="hanim_r_cuneiform_2")
HAnimJoint338.name = "r_cuneiform_2"
HAnimJoint338.center = [-0.0812,-0.0805,0.025]
HAnimJoint338.ulimit = [0,0,0]
HAnimJoint338.llimit = [0,0,0]
HAnimSegment339 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_cuneiform_2")
HAnimSegment339.name = "SEGMENT_FOR_r_cuneiform_2"
TouchSensor340 = x3d.TouchSensor()
TouchSensor340.description = "joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2"

HAnimSegment339.children.append(TouchSensor340)
Transform341 = x3d.Transform()
Transform341.translation = [-0.0812,-0.0805,0.025]
Shape342 = x3d.Shape(USE="JointShape")

Transform341.children.append(Shape342)

HAnimSegment339.children.append(Transform341)
HAnimSite343 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_cuneiform_2_tip")
HAnimSite343.name = "SEGMENT_FOR_r_cuneiform_2_tip"
Transform344 = x3d.Transform()
Transform344.translation = [-0.0812,-0.0805,0.025]
Shape345 = x3d.Shape(USE="SiteShape")

Transform344.children.append(Shape345)

HAnimSite343.children.append(Transform344)

HAnimSegment339.children.append(HAnimSite343)

HAnimJoint338.children.append(HAnimSegment339)
HAnimJoint346 = x3d.HAnimJoint(DEF="hanim_r_metatarsal_2")
HAnimJoint346.name = "r_metatarsal_2"
HAnimJoint346.center = [-0.08,-0.0608,0.0175]
HAnimJoint346.ulimit = [0,0,0]
HAnimJoint346.llimit = [0,0,0]
HAnimSegment347 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metatarsal_2")
HAnimSegment347.name = "SEGMENT_FOR_r_metatarsal_2"
TouchSensor348 = x3d.TouchSensor()
TouchSensor348.description = "joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2"

HAnimSegment347.children.append(TouchSensor348)
Transform349 = x3d.Transform()
Transform349.translation = [-0.08,-0.0608,0.0175]
Shape350 = x3d.Shape(USE="JointShape")

Transform349.children.append(Shape350)

HAnimSegment347.children.append(Transform349)
HAnimSite351 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metatarsal_2_tip")
HAnimSite351.name = "SEGMENT_FOR_r_metatarsal_2_tip"
Transform352 = x3d.Transform()
Transform352.translation = [-0.08,-0.0608,0.0175]
Shape353 = x3d.Shape(USE="SiteShape")

Transform352.children.append(Shape353)

HAnimSite351.children.append(Transform352)

HAnimSegment347.children.append(HAnimSite351)

HAnimJoint346.children.append(HAnimSegment347)
HAnimJoint354 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_phalanx_2")
HAnimJoint354.name = "r_tarsal_proximal_phalanx_2"
HAnimJoint354.center = [-0.0823,-0.004,0.0064]
HAnimJoint354.ulimit = [0,0,0]
HAnimJoint354.llimit = [0,0,0]
HAnimSegment355 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2")
HAnimSegment355.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_2"
TouchSensor356 = x3d.TouchSensor()
TouchSensor356.description = "joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2"

HAnimSegment355.children.append(TouchSensor356)
Transform357 = x3d.Transform()
Transform357.translation = [-0.0823,-0.004,0.0064]
Shape358 = x3d.Shape(USE="JointShape")

Transform357.children.append(Shape358)

HAnimSegment355.children.append(Transform357)
HAnimSite359 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip")
HAnimSite359.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip"
Transform360 = x3d.Transform()
Transform360.translation = [-0.0823,-0.004,0.0064]
Shape361 = x3d.Shape(USE="SiteShape")

Transform360.children.append(Shape361)

HAnimSite359.children.append(Transform360)

HAnimSegment355.children.append(HAnimSite359)

HAnimJoint354.children.append(HAnimSegment355)
HAnimJoint362 = x3d.HAnimJoint(DEF="hanim_r_tarsal_middle_phalanx_2")
HAnimJoint362.name = "r_tarsal_middle_phalanx_2"
HAnimJoint362.center = [-0.0841,0.0121,0.0041]
HAnimJoint362.ulimit = [0,0,0]
HAnimJoint362.llimit = [0,0,0]
HAnimSegment363 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2")
HAnimSegment363.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_2"
TouchSensor364 = x3d.TouchSensor()
TouchSensor364.description = "joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2"

HAnimSegment363.children.append(TouchSensor364)
Transform365 = x3d.Transform()
Transform365.translation = [-0.0841,0.0121,0.0041]
Shape366 = x3d.Shape(USE="JointShape")

Transform365.children.append(Shape366)

HAnimSegment363.children.append(Transform365)
HAnimSite367 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip")
HAnimSite367.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip"
Transform368 = x3d.Transform()
Transform368.translation = [-0.0841,0.0121,0.0041]
Shape369 = x3d.Shape(USE="SiteShape")

Transform368.children.append(Shape369)

HAnimSite367.children.append(Transform368)

HAnimSegment363.children.append(HAnimSite367)

HAnimJoint362.children.append(HAnimSegment363)
HAnimJoint370 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_phalanx_2")
HAnimJoint370.name = "r_tarsal_distal_phalanx_2"
HAnimJoint370.center = [-0.0841,0.0216,0.0013]
HAnimJoint370.ulimit = [0,0,0]
HAnimJoint370.llimit = [0,0,0]
HAnimSegment371 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2")
HAnimSegment371.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_2"
TouchSensor372 = x3d.TouchSensor()
TouchSensor372.description = "joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2"

HAnimSegment371.children.append(TouchSensor372)
Transform373 = x3d.Transform()
Transform373.translation = [-0.0841,0.0216,0.0013]
Shape374 = x3d.Shape(USE="JointShape")

Transform373.children.append(Shape374)

HAnimSegment371.children.append(Transform373)
HAnimSite375 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip")
HAnimSite375.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip"
Transform376 = x3d.Transform()
Transform376.translation = [-0.0841,0.0216,0.0013]
Shape377 = x3d.Shape(USE="SiteShape")

Transform376.children.append(Shape377)

HAnimSite375.children.append(Transform376)

HAnimSegment371.children.append(HAnimSite375)

HAnimJoint370.children.append(HAnimSegment371)

HAnimJoint362.children.append(HAnimJoint370)

HAnimJoint354.children.append(HAnimJoint362)

HAnimJoint346.children.append(HAnimJoint354)

HAnimJoint338.children.append(HAnimJoint346)

HAnimJoint298.children.append(HAnimJoint338)
HAnimJoint378 = x3d.HAnimJoint(DEF="hanim_r_cuneiform_3")
HAnimJoint378.name = "r_cuneiform_3"
HAnimJoint378.center = [-0.0928,-0.0821,0.0248]
HAnimJoint378.ulimit = [0,0,0]
HAnimJoint378.llimit = [0,0,0]
HAnimSegment379 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_cuneiform_3")
HAnimSegment379.name = "SEGMENT_FOR_r_cuneiform_3"
TouchSensor380 = x3d.TouchSensor()
TouchSensor380.description = "joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3"

HAnimSegment379.children.append(TouchSensor380)
Transform381 = x3d.Transform()
Transform381.translation = [-0.0928,-0.0821,0.0248]
Shape382 = x3d.Shape(USE="JointShape")

Transform381.children.append(Shape382)

HAnimSegment379.children.append(Transform381)
HAnimSite383 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_cuneiform_3_tip")
HAnimSite383.name = "SEGMENT_FOR_r_cuneiform_3_tip"
Transform384 = x3d.Transform()
Transform384.translation = [-0.0928,-0.0821,0.0248]
Shape385 = x3d.Shape(USE="SiteShape")

Transform384.children.append(Shape385)

HAnimSite383.children.append(Transform384)

HAnimSegment379.children.append(HAnimSite383)

HAnimJoint378.children.append(HAnimSegment379)
HAnimJoint386 = x3d.HAnimJoint(DEF="hanim_r_metatarsal_3")
HAnimJoint386.name = "r_metatarsal_3"
HAnimJoint386.center = [-0.0944,-0.0625,0.0175]
HAnimJoint386.ulimit = [0,0,0]
HAnimJoint386.llimit = [0,0,0]
HAnimSegment387 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metatarsal_3")
HAnimSegment387.name = "SEGMENT_FOR_r_metatarsal_3"
TouchSensor388 = x3d.TouchSensor()
TouchSensor388.description = "joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3"

HAnimSegment387.children.append(TouchSensor388)
Transform389 = x3d.Transform()
Transform389.translation = [-0.0944,-0.0625,0.0175]
Shape390 = x3d.Shape(USE="JointShape")

Transform389.children.append(Shape390)

HAnimSegment387.children.append(Transform389)
HAnimSite391 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metatarsal_3_tip")
HAnimSite391.name = "SEGMENT_FOR_r_metatarsal_3_tip"
Transform392 = x3d.Transform()
Transform392.translation = [-0.0944,-0.0625,0.0175]
Shape393 = x3d.Shape(USE="SiteShape")

Transform392.children.append(Shape393)

HAnimSite391.children.append(Transform392)

HAnimSegment387.children.append(HAnimSite391)

HAnimJoint386.children.append(HAnimSegment387)
HAnimJoint394 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_phalanx_3")
HAnimJoint394.name = "r_tarsal_proximal_phalanx_3"
HAnimJoint394.center = [-0.0963,-0.0065,0.0065]
HAnimJoint394.ulimit = [0,0,0]
HAnimJoint394.llimit = [0,0,0]
HAnimSegment395 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3")
HAnimSegment395.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_3"
TouchSensor396 = x3d.TouchSensor()
TouchSensor396.description = "joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3"

HAnimSegment395.children.append(TouchSensor396)
Transform397 = x3d.Transform()
Transform397.translation = [-0.0963,-0.0065,0.0065]
Shape398 = x3d.Shape(USE="JointShape")

Transform397.children.append(Shape398)

HAnimSegment395.children.append(Transform397)
HAnimSite399 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip")
HAnimSite399.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip"
Transform400 = x3d.Transform()
Transform400.translation = [-0.0963,-0.0065,0.0065]
Shape401 = x3d.Shape(USE="SiteShape")

Transform400.children.append(Shape401)

HAnimSite399.children.append(Transform400)

HAnimSegment395.children.append(HAnimSite399)

HAnimJoint394.children.append(HAnimSegment395)
HAnimJoint402 = x3d.HAnimJoint(DEF="hanim_r_tarsal_middle_phalanx_3")
HAnimJoint402.name = "r_tarsal_middle_phalanx_3"
HAnimJoint402.center = [-0.0987,0.0086,0.0034]
HAnimJoint402.ulimit = [0,0,0]
HAnimJoint402.llimit = [0,0,0]
HAnimSegment403 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3")
HAnimSegment403.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_3"
TouchSensor404 = x3d.TouchSensor()
TouchSensor404.description = "joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3"

HAnimSegment403.children.append(TouchSensor404)
Transform405 = x3d.Transform()
Transform405.translation = [-0.0987,0.0086,0.0034]
Shape406 = x3d.Shape(USE="JointShape")

Transform405.children.append(Shape406)

HAnimSegment403.children.append(Transform405)
HAnimSite407 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip")
HAnimSite407.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip"
Transform408 = x3d.Transform()
Transform408.translation = [-0.0987,0.0086,0.0034]
Shape409 = x3d.Shape(USE="SiteShape")

Transform408.children.append(Shape409)

HAnimSite407.children.append(Transform408)

HAnimSegment403.children.append(HAnimSite407)

HAnimJoint402.children.append(HAnimSegment403)
HAnimJoint410 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_phalanx_3")
HAnimJoint410.name = "r_tarsal_distal_phalanx_3"
HAnimJoint410.center = [-0.1002,0.0178,0.0013]
HAnimJoint410.ulimit = [0,0,0]
HAnimJoint410.llimit = [0,0,0]
HAnimSegment411 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3")
HAnimSegment411.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_3"
TouchSensor412 = x3d.TouchSensor()
TouchSensor412.description = "joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3"

HAnimSegment411.children.append(TouchSensor412)
Transform413 = x3d.Transform()
Transform413.translation = [-0.1002,0.0178,0.0013]
Shape414 = x3d.Shape(USE="JointShape")

Transform413.children.append(Shape414)

HAnimSegment411.children.append(Transform413)
HAnimSite415 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip")
HAnimSite415.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip"
Transform416 = x3d.Transform()
Transform416.translation = [-0.1002,0.0178,0.0013]
Shape417 = x3d.Shape(USE="SiteShape")

Transform416.children.append(Shape417)

HAnimSite415.children.append(Transform416)

HAnimSegment411.children.append(HAnimSite415)

HAnimJoint410.children.append(HAnimSegment411)

HAnimJoint402.children.append(HAnimJoint410)

HAnimJoint394.children.append(HAnimJoint402)

HAnimJoint386.children.append(HAnimJoint394)

HAnimJoint378.children.append(HAnimJoint386)

HAnimJoint298.children.append(HAnimJoint378)

HAnimJoint290.children.append(HAnimJoint298)
HAnimJoint418 = x3d.HAnimJoint(DEF="hanim_r_calcaneus")
HAnimJoint418.name = "r_calcaneus"
HAnimJoint418.center = [-0.0889,-0.1278,0.0494]
HAnimJoint418.ulimit = [0,0,0]
HAnimJoint418.llimit = [0,0,0]
HAnimSegment419 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_calcaneus")
HAnimSegment419.name = "SEGMENT_FOR_r_calcaneus"
TouchSensor420 = x3d.TouchSensor()
TouchSensor420.description = "joint r_calcaneus segment SEGMENT_FOR_r_calcaneus"

HAnimSegment419.children.append(TouchSensor420)
Transform421 = x3d.Transform()
Transform421.translation = [-0.0889,-0.1278,0.0494]
Shape422 = x3d.Shape(USE="JointShape")

Transform421.children.append(Shape422)

HAnimSegment419.children.append(Transform421)
HAnimSite423 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_calcaneus_tip")
HAnimSite423.name = "SEGMENT_FOR_r_calcaneus_tip"
Transform424 = x3d.Transform()
Transform424.translation = [-0.0889,-0.1278,0.0494]
Shape425 = x3d.Shape(USE="SiteShape")

Transform424.children.append(Shape425)

HAnimSite423.children.append(Transform424)

HAnimSegment419.children.append(HAnimSite423)

HAnimJoint418.children.append(HAnimSegment419)
HAnimJoint426 = x3d.HAnimJoint(DEF="hanim_r_cuboid")
HAnimJoint426.name = "r_cuboid"
HAnimJoint426.center = [-0.1105,-0.0998,0.0267]
HAnimJoint426.ulimit = [0,0,0]
HAnimJoint426.llimit = [0,0,0]
HAnimSegment427 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_cuboid")
HAnimSegment427.name = "SEGMENT_FOR_r_cuboid"
TouchSensor428 = x3d.TouchSensor()
TouchSensor428.description = "joint r_cuboid segment SEGMENT_FOR_r_cuboid"

HAnimSegment427.children.append(TouchSensor428)
Transform429 = x3d.Transform()
Transform429.translation = [-0.1105,-0.0998,0.0267]
Shape430 = x3d.Shape(USE="JointShape")

Transform429.children.append(Shape430)

HAnimSegment427.children.append(Transform429)
HAnimSite431 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_cuboid_tip")
HAnimSite431.name = "SEGMENT_FOR_r_cuboid_tip"
Transform432 = x3d.Transform()
Transform432.translation = [-0.1105,-0.0998,0.0267]
Shape433 = x3d.Shape(USE="SiteShape")

Transform432.children.append(Shape433)

HAnimSite431.children.append(Transform432)

HAnimSegment427.children.append(HAnimSite431)

HAnimJoint426.children.append(HAnimSegment427)
HAnimJoint434 = x3d.HAnimJoint(DEF="hanim_r_metatarsal_4")
HAnimJoint434.name = "r_metatarsal_4"
HAnimJoint434.center = [-0.1063,-0.0634,0.016]
HAnimJoint434.ulimit = [0,0,0]
HAnimJoint434.llimit = [0,0,0]
HAnimSegment435 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metatarsal_4")
HAnimSegment435.name = "SEGMENT_FOR_r_metatarsal_4"
TouchSensor436 = x3d.TouchSensor()
TouchSensor436.description = "joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4"

HAnimSegment435.children.append(TouchSensor436)
Transform437 = x3d.Transform()
Transform437.translation = [-0.1063,-0.0634,0.016]
Shape438 = x3d.Shape(USE="JointShape")

Transform437.children.append(Shape438)

HAnimSegment435.children.append(Transform437)
HAnimSite439 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metatarsal_4_tip")
HAnimSite439.name = "SEGMENT_FOR_r_metatarsal_4_tip"
Transform440 = x3d.Transform()
Transform440.translation = [-0.1063,-0.0634,0.016]
Shape441 = x3d.Shape(USE="SiteShape")

Transform440.children.append(Shape441)

HAnimSite439.children.append(Transform440)

HAnimSegment435.children.append(HAnimSite439)

HAnimJoint434.children.append(HAnimSegment435)
HAnimJoint442 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_phalanx_4")
HAnimJoint442.name = "r_tarsal_proximal_phalanx_4"
HAnimJoint442.center = [-0.1097,-0.0107,0.0058]
HAnimJoint442.ulimit = [0,0,0]
HAnimJoint442.llimit = [0,0,0]
HAnimSegment443 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4")
HAnimSegment443.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_4"
TouchSensor444 = x3d.TouchSensor()
TouchSensor444.description = "joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4"

HAnimSegment443.children.append(TouchSensor444)
Transform445 = x3d.Transform()
Transform445.translation = [-0.1097,-0.0107,0.0058]
Shape446 = x3d.Shape(USE="JointShape")

Transform445.children.append(Shape446)

HAnimSegment443.children.append(Transform445)
HAnimSite447 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip")
HAnimSite447.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip"
Transform448 = x3d.Transform()
Transform448.translation = [-0.1097,-0.0107,0.0058]
Shape449 = x3d.Shape(USE="SiteShape")

Transform448.children.append(Shape449)

HAnimSite447.children.append(Transform448)

HAnimSegment443.children.append(HAnimSite447)

HAnimJoint442.children.append(HAnimSegment443)
HAnimJoint450 = x3d.HAnimJoint(DEF="hanim_r_tarsal_middle_phalanx_4")
HAnimJoint450.name = "r_tarsal_middle_phalanx_4"
HAnimJoint450.center = [-0.114,0.0044,0.0037]
HAnimJoint450.ulimit = [0,0,0]
HAnimJoint450.llimit = [0,0,0]
HAnimSegment451 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4")
HAnimSegment451.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_4"
TouchSensor452 = x3d.TouchSensor()
TouchSensor452.description = "joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4"

HAnimSegment451.children.append(TouchSensor452)
Transform453 = x3d.Transform()
Transform453.translation = [-0.114,0.0044,0.0037]
Shape454 = x3d.Shape(USE="JointShape")

Transform453.children.append(Shape454)

HAnimSegment451.children.append(Transform453)
HAnimSite455 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip")
HAnimSite455.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip"
Transform456 = x3d.Transform()
Transform456.translation = [-0.114,0.0044,0.0037]
Shape457 = x3d.Shape(USE="SiteShape")

Transform456.children.append(Shape457)

HAnimSite455.children.append(Transform456)

HAnimSegment451.children.append(HAnimSite455)

HAnimJoint450.children.append(HAnimSegment451)
HAnimJoint458 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_phalanx_4")
HAnimJoint458.name = "r_tarsal_distal_phalanx_4"
HAnimJoint458.center = [-0.1155,0.0118,0.0008]
HAnimJoint458.ulimit = [0,0,0]
HAnimJoint458.llimit = [0,0,0]
HAnimSegment459 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4")
HAnimSegment459.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_4"
TouchSensor460 = x3d.TouchSensor()
TouchSensor460.description = "joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4"

HAnimSegment459.children.append(TouchSensor460)
Transform461 = x3d.Transform()
Transform461.translation = [-0.1155,0.0118,0.0008]
Shape462 = x3d.Shape(USE="JointShape")

Transform461.children.append(Shape462)

HAnimSegment459.children.append(Transform461)
HAnimSite463 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip")
HAnimSite463.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip"
Transform464 = x3d.Transform()
Transform464.translation = [-0.1155,0.0118,0.0008]
Shape465 = x3d.Shape(USE="SiteShape")

Transform464.children.append(Shape465)

HAnimSite463.children.append(Transform464)

HAnimSegment459.children.append(HAnimSite463)

HAnimJoint458.children.append(HAnimSegment459)

HAnimJoint450.children.append(HAnimJoint458)

HAnimJoint442.children.append(HAnimJoint450)

HAnimJoint434.children.append(HAnimJoint442)

HAnimJoint426.children.append(HAnimJoint434)
HAnimJoint466 = x3d.HAnimJoint(DEF="hanim_r_metatarsal_5")
HAnimJoint466.name = "r_metatarsal_5"
HAnimJoint466.center = [-0.1206,-0.0671,0.0124]
HAnimJoint466.ulimit = [0,0,0]
HAnimJoint466.llimit = [0,0,0]
HAnimSegment467 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metatarsal_5")
HAnimSegment467.name = "SEGMENT_FOR_r_metatarsal_5"
TouchSensor468 = x3d.TouchSensor()
TouchSensor468.description = "joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5"

HAnimSegment467.children.append(TouchSensor468)
Transform469 = x3d.Transform()
Transform469.translation = [-0.1206,-0.0671,0.0124]
Shape470 = x3d.Shape(USE="JointShape")

Transform469.children.append(Shape470)

HAnimSegment467.children.append(Transform469)
HAnimSite471 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metatarsal_5_tip")
HAnimSite471.name = "SEGMENT_FOR_r_metatarsal_5_tip"
Transform472 = x3d.Transform()
Transform472.translation = [-0.1206,-0.0671,0.0124]
Shape473 = x3d.Shape(USE="SiteShape")

Transform472.children.append(Shape473)

HAnimSite471.children.append(Transform472)

HAnimSegment467.children.append(HAnimSite471)

HAnimJoint466.children.append(HAnimSegment467)
HAnimJoint474 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_phalanx_5")
HAnimJoint474.name = "r_tarsal_proximal_phalanx_5"
HAnimJoint474.center = [-0.1239,-0.0153,0.0051]
HAnimJoint474.ulimit = [0,0,0]
HAnimJoint474.llimit = [0,0,0]
HAnimSegment475 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5")
HAnimSegment475.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_5"
TouchSensor476 = x3d.TouchSensor()
TouchSensor476.description = "joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5"

HAnimSegment475.children.append(TouchSensor476)
Transform477 = x3d.Transform()
Transform477.translation = [-0.1239,-0.0153,0.0051]
Shape478 = x3d.Shape(USE="JointShape")

Transform477.children.append(Shape478)

HAnimSegment475.children.append(Transform477)
HAnimSite479 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip")
HAnimSite479.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip"
Transform480 = x3d.Transform()
Transform480.translation = [-0.1239,-0.0153,0.0051]
Shape481 = x3d.Shape(USE="SiteShape")

Transform480.children.append(Shape481)

HAnimSite479.children.append(Transform480)

HAnimSegment475.children.append(HAnimSite479)

HAnimJoint474.children.append(HAnimSegment475)
HAnimJoint482 = x3d.HAnimJoint(DEF="hanim_r_tarsal_middle_phalanx_5")
HAnimJoint482.name = "r_tarsal_middle_phalanx_5"
HAnimJoint482.center = [-0.1262,-0.0077,0.0023]
HAnimJoint482.ulimit = [0,0,0]
HAnimJoint482.llimit = [0,0,0]
HAnimSegment483 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5")
HAnimSegment483.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_5"
TouchSensor484 = x3d.TouchSensor()
TouchSensor484.description = "joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5"

HAnimSegment483.children.append(TouchSensor484)
Transform485 = x3d.Transform()
Transform485.translation = [-0.1262,-0.0077,0.0023]
Shape486 = x3d.Shape(USE="JointShape")

Transform485.children.append(Shape486)

HAnimSegment483.children.append(Transform485)
HAnimSite487 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip")
HAnimSite487.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip"
Transform488 = x3d.Transform()
Transform488.translation = [-0.1262,-0.0077,0.0023]
Shape489 = x3d.Shape(USE="SiteShape")

Transform488.children.append(Shape489)

HAnimSite487.children.append(Transform488)

HAnimSegment483.children.append(HAnimSite487)

HAnimJoint482.children.append(HAnimSegment483)
HAnimJoint490 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_phalanx_5")
HAnimJoint490.name = "r_tarsal_distal_phalanx_5"
HAnimJoint490.center = [-0.1271,0,0]
HAnimJoint490.ulimit = [0,0,0]
HAnimJoint490.llimit = [0,0,0]
HAnimSegment491 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5")
HAnimSegment491.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_5"
TouchSensor492 = x3d.TouchSensor()
TouchSensor492.description = "joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5"

HAnimSegment491.children.append(TouchSensor492)
Transform493 = x3d.Transform()
Transform493.translation = [-0.1271,0,0]
Shape494 = x3d.Shape(USE="JointShape")

Transform493.children.append(Shape494)

HAnimSegment491.children.append(Transform493)
HAnimSite495 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip")
HAnimSite495.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip"
Transform496 = x3d.Transform()
Transform496.translation = [-0.1271,0,0]
Shape497 = x3d.Shape(USE="SiteShape")

Transform496.children.append(Shape497)

HAnimSite495.children.append(Transform496)

HAnimSegment491.children.append(HAnimSite495)

HAnimJoint490.children.append(HAnimSegment491)

HAnimJoint482.children.append(HAnimJoint490)

HAnimJoint474.children.append(HAnimJoint482)

HAnimJoint466.children.append(HAnimJoint474)

HAnimJoint426.children.append(HAnimJoint466)

HAnimJoint418.children.append(HAnimJoint426)

HAnimJoint290.children.append(HAnimJoint418)

HAnimJoint282.children.append(HAnimJoint290)

HAnimJoint274.children.append(HAnimJoint282)

HAnimJoint42.children.append(HAnimJoint274)

HAnimJoint34.children.append(HAnimJoint42)
HAnimJoint498 = x3d.HAnimJoint(DEF="hanim_l5")
HAnimJoint498.name = "l5"
HAnimJoint498.center = [-0.0002,-0.1156,0.9169]
HAnimJoint498.ulimit = [0,0,0]
HAnimJoint498.llimit = [0,0,0]
HAnimSegment499 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l5")
HAnimSegment499.name = "SEGMENT_FOR_l5"
TouchSensor500 = x3d.TouchSensor()
TouchSensor500.description = "joint l5 segment SEGMENT_FOR_l5"

HAnimSegment499.children.append(TouchSensor500)
Transform501 = x3d.Transform()
Transform501.translation = [-0.0002,-0.1156,0.9169]
Shape502 = x3d.Shape(USE="JointShape")

Transform501.children.append(Shape502)

HAnimSegment499.children.append(Transform501)
HAnimSite503 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l5_tip")
HAnimSite503.name = "SEGMENT_FOR_l5_tip"
Transform504 = x3d.Transform()
Transform504.translation = [-0.0002,-0.1156,0.9169]
Shape505 = x3d.Shape(USE="SiteShape")

Transform504.children.append(Shape505)

HAnimSite503.children.append(Transform504)

HAnimSegment499.children.append(HAnimSite503)

HAnimJoint498.children.append(HAnimSegment499)
HAnimJoint506 = x3d.HAnimJoint(DEF="hanim_l4")
HAnimJoint506.name = "l4"
HAnimJoint506.center = [-0.0002,-0.1156,0.9412]
HAnimJoint506.ulimit = [0,0,0]
HAnimJoint506.llimit = [0,0,0]
HAnimSegment507 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l4")
HAnimSegment507.name = "SEGMENT_FOR_l4"
TouchSensor508 = x3d.TouchSensor()
TouchSensor508.description = "joint l4 segment SEGMENT_FOR_l4"

HAnimSegment507.children.append(TouchSensor508)
Transform509 = x3d.Transform()
Transform509.translation = [-0.0002,-0.1156,0.9412]
Shape510 = x3d.Shape(USE="JointShape")

Transform509.children.append(Shape510)

HAnimSegment507.children.append(Transform509)
HAnimSite511 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l4_tip")
HAnimSite511.name = "SEGMENT_FOR_l4_tip"
Transform512 = x3d.Transform()
Transform512.translation = [-0.0002,-0.1156,0.9412]
Shape513 = x3d.Shape(USE="SiteShape")

Transform512.children.append(Shape513)

HAnimSite511.children.append(Transform512)

HAnimSegment507.children.append(HAnimSite511)

HAnimJoint506.children.append(HAnimSegment507)
HAnimJoint514 = x3d.HAnimJoint(DEF="hanim_l3")
HAnimJoint514.name = "l3"
HAnimJoint514.center = [-0.0002,-0.1156,0.9574]
HAnimJoint514.ulimit = [0,0,0]
HAnimJoint514.llimit = [0,0,0]
HAnimSegment515 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l3")
HAnimSegment515.name = "SEGMENT_FOR_l3"
TouchSensor516 = x3d.TouchSensor()
TouchSensor516.description = "joint l3 segment SEGMENT_FOR_l3"

HAnimSegment515.children.append(TouchSensor516)
Transform517 = x3d.Transform()
Transform517.translation = [-0.0002,-0.1156,0.9574]
Shape518 = x3d.Shape(USE="JointShape")

Transform517.children.append(Shape518)

HAnimSegment515.children.append(Transform517)
HAnimSite519 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l3_tip")
HAnimSite519.name = "SEGMENT_FOR_l3_tip"
Transform520 = x3d.Transform()
Transform520.translation = [-0.0002,-0.1156,0.9574]
Shape521 = x3d.Shape(USE="SiteShape")

Transform520.children.append(Shape521)

HAnimSite519.children.append(Transform520)

HAnimSegment515.children.append(HAnimSite519)

HAnimJoint514.children.append(HAnimSegment515)
HAnimJoint522 = x3d.HAnimJoint(DEF="hanim_l2")
HAnimJoint522.name = "l2"
HAnimJoint522.center = [-0.0002,-0.1156,0.9738]
HAnimJoint522.ulimit = [0,0,0]
HAnimJoint522.llimit = [0,0,0]
HAnimSegment523 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l2")
HAnimSegment523.name = "SEGMENT_FOR_l2"
TouchSensor524 = x3d.TouchSensor()
TouchSensor524.description = "joint l2 segment SEGMENT_FOR_l2"

HAnimSegment523.children.append(TouchSensor524)
Transform525 = x3d.Transform()
Transform525.translation = [-0.0002,-0.1156,0.9738]
Shape526 = x3d.Shape(USE="JointShape")

Transform525.children.append(Shape526)

HAnimSegment523.children.append(Transform525)
HAnimSite527 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l2_tip")
HAnimSite527.name = "SEGMENT_FOR_l2_tip"
Transform528 = x3d.Transform()
Transform528.translation = [-0.0002,-0.1156,0.9738]
Shape529 = x3d.Shape(USE="SiteShape")

Transform528.children.append(Shape529)

HAnimSite527.children.append(Transform528)

HAnimSegment523.children.append(HAnimSite527)

HAnimJoint522.children.append(HAnimSegment523)
HAnimJoint530 = x3d.HAnimJoint(DEF="hanim_l1")
HAnimJoint530.name = "l1"
HAnimJoint530.center = [-0.0002,-0.1156,0.9911]
HAnimJoint530.ulimit = [0,0,0]
HAnimJoint530.llimit = [0,0,0]
HAnimSegment531 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l1")
HAnimSegment531.name = "SEGMENT_FOR_l1"
TouchSensor532 = x3d.TouchSensor()
TouchSensor532.description = "joint l1 segment SEGMENT_FOR_l1"

HAnimSegment531.children.append(TouchSensor532)
Transform533 = x3d.Transform()
Transform533.translation = [-0.0002,-0.1156,0.9911]
Shape534 = x3d.Shape(USE="JointShape")

Transform533.children.append(Shape534)

HAnimSegment531.children.append(Transform533)
HAnimSite535 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l1_tip")
HAnimSite535.name = "SEGMENT_FOR_l1_tip"
Transform536 = x3d.Transform()
Transform536.translation = [-0.0002,-0.1156,0.9911]
Shape537 = x3d.Shape(USE="SiteShape")

Transform536.children.append(Shape537)

HAnimSite535.children.append(Transform536)

HAnimSegment531.children.append(HAnimSite535)

HAnimJoint530.children.append(HAnimSegment531)
HAnimJoint538 = x3d.HAnimJoint(DEF="hanim_t12")
HAnimJoint538.name = "t12"
HAnimJoint538.center = [-0.0002,-0.1156,1.0145]
HAnimJoint538.ulimit = [0,0,0]
HAnimJoint538.llimit = [0,0,0]
HAnimSegment539 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t12")
HAnimSegment539.name = "SEGMENT_FOR_t12"
TouchSensor540 = x3d.TouchSensor()
TouchSensor540.description = "joint t12 segment SEGMENT_FOR_t12"

HAnimSegment539.children.append(TouchSensor540)
Transform541 = x3d.Transform()
Transform541.translation = [-0.0002,-0.1156,1.0145]
Shape542 = x3d.Shape(USE="JointShape")

Transform541.children.append(Shape542)

HAnimSegment539.children.append(Transform541)
HAnimSite543 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t12_tip")
HAnimSite543.name = "SEGMENT_FOR_t12_tip"
Transform544 = x3d.Transform()
Transform544.translation = [-0.0002,-0.1156,1.0145]
Shape545 = x3d.Shape(USE="SiteShape")

Transform544.children.append(Shape545)

HAnimSite543.children.append(Transform544)

HAnimSegment539.children.append(HAnimSite543)

HAnimJoint538.children.append(HAnimSegment539)
HAnimJoint546 = x3d.HAnimJoint(DEF="hanim_t11")
HAnimJoint546.name = "t11"
HAnimJoint546.center = [-0.0002,-0.1156,1.0381]
HAnimJoint546.ulimit = [0,0,0]
HAnimJoint546.llimit = [0,0,0]
HAnimSegment547 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t11")
HAnimSegment547.name = "SEGMENT_FOR_t11"
TouchSensor548 = x3d.TouchSensor()
TouchSensor548.description = "joint t11 segment SEGMENT_FOR_t11"

HAnimSegment547.children.append(TouchSensor548)
Transform549 = x3d.Transform()
Transform549.translation = [-0.0002,-0.1156,1.0381]
Shape550 = x3d.Shape(USE="JointShape")

Transform549.children.append(Shape550)

HAnimSegment547.children.append(Transform549)
HAnimSite551 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t11_tip")
HAnimSite551.name = "SEGMENT_FOR_t11_tip"
Transform552 = x3d.Transform()
Transform552.translation = [-0.0002,-0.1156,1.0381]
Shape553 = x3d.Shape(USE="SiteShape")

Transform552.children.append(Shape553)

HAnimSite551.children.append(Transform552)

HAnimSegment547.children.append(HAnimSite551)

HAnimJoint546.children.append(HAnimSegment547)
HAnimJoint554 = x3d.HAnimJoint(DEF="hanim_t10")
HAnimJoint554.name = "t10"
HAnimJoint554.center = [-0.0002,-0.1157,1.0552]
HAnimJoint554.ulimit = [0,0,0]
HAnimJoint554.llimit = [0,0,0]
HAnimSegment555 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t10")
HAnimSegment555.name = "SEGMENT_FOR_t10"
TouchSensor556 = x3d.TouchSensor()
TouchSensor556.description = "joint t10 segment SEGMENT_FOR_t10"

HAnimSegment555.children.append(TouchSensor556)
Transform557 = x3d.Transform()
Transform557.translation = [-0.0002,-0.1157,1.0552]
Shape558 = x3d.Shape(USE="JointShape")

Transform557.children.append(Shape558)

HAnimSegment555.children.append(Transform557)
HAnimSite559 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t10_tip")
HAnimSite559.name = "SEGMENT_FOR_t10_tip"
Transform560 = x3d.Transform()
Transform560.translation = [-0.0002,-0.1157,1.0552]
Shape561 = x3d.Shape(USE="SiteShape")

Transform560.children.append(Shape561)

HAnimSite559.children.append(Transform560)

HAnimSegment555.children.append(HAnimSite559)

HAnimJoint554.children.append(HAnimSegment555)
HAnimJoint562 = x3d.HAnimJoint(DEF="hanim_t9")
HAnimJoint562.name = "t9"
HAnimJoint562.center = [-0.0002,-0.1156,1.0699]
HAnimJoint562.ulimit = [0,0,0]
HAnimJoint562.llimit = [0,0,0]
HAnimSegment563 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t9")
HAnimSegment563.name = "SEGMENT_FOR_t9"
TouchSensor564 = x3d.TouchSensor()
TouchSensor564.description = "joint t9 segment SEGMENT_FOR_t9"

HAnimSegment563.children.append(TouchSensor564)
Transform565 = x3d.Transform()
Transform565.translation = [-0.0002,-0.1156,1.0699]
Shape566 = x3d.Shape(USE="JointShape")

Transform565.children.append(Shape566)

HAnimSegment563.children.append(Transform565)
HAnimSite567 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t9_tip")
HAnimSite567.name = "SEGMENT_FOR_t9_tip"
Transform568 = x3d.Transform()
Transform568.translation = [-0.0002,-0.1156,1.0699]
Shape569 = x3d.Shape(USE="SiteShape")

Transform568.children.append(Shape569)

HAnimSite567.children.append(Transform568)

HAnimSegment563.children.append(HAnimSite567)

HAnimJoint562.children.append(HAnimSegment563)
HAnimJoint570 = x3d.HAnimJoint(DEF="hanim_t8")
HAnimJoint570.name = "t8"
HAnimJoint570.center = [-0.0002,-0.1156,1.0845]
HAnimJoint570.ulimit = [0,0,0]
HAnimJoint570.llimit = [0,0,0]
HAnimSegment571 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t8")
HAnimSegment571.name = "SEGMENT_FOR_t8"
TouchSensor572 = x3d.TouchSensor()
TouchSensor572.description = "joint t8 segment SEGMENT_FOR_t8"

HAnimSegment571.children.append(TouchSensor572)
Transform573 = x3d.Transform()
Transform573.translation = [-0.0002,-0.1156,1.0845]
Shape574 = x3d.Shape(USE="JointShape")

Transform573.children.append(Shape574)

HAnimSegment571.children.append(Transform573)
HAnimSite575 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t8_tip")
HAnimSite575.name = "SEGMENT_FOR_t8_tip"
Transform576 = x3d.Transform()
Transform576.translation = [-0.0002,-0.1156,1.0845]
Shape577 = x3d.Shape(USE="SiteShape")

Transform576.children.append(Shape577)

HAnimSite575.children.append(Transform576)

HAnimSegment571.children.append(HAnimSite575)

HAnimJoint570.children.append(HAnimSegment571)
HAnimJoint578 = x3d.HAnimJoint(DEF="hanim_t7")
HAnimJoint578.name = "t7"
HAnimJoint578.center = [-0.0002,-0.1156,1.1002]
HAnimJoint578.ulimit = [0,0,0]
HAnimJoint578.llimit = [0,0,0]
HAnimSegment579 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t7")
HAnimSegment579.name = "SEGMENT_FOR_t7"
TouchSensor580 = x3d.TouchSensor()
TouchSensor580.description = "joint t7 segment SEGMENT_FOR_t7"

HAnimSegment579.children.append(TouchSensor580)
Transform581 = x3d.Transform()
Transform581.translation = [-0.0002,-0.1156,1.1002]
Shape582 = x3d.Shape(USE="JointShape")

Transform581.children.append(Shape582)

HAnimSegment579.children.append(Transform581)
HAnimSite583 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t7_tip")
HAnimSite583.name = "SEGMENT_FOR_t7_tip"
Transform584 = x3d.Transform()
Transform584.translation = [-0.0002,-0.1156,1.1002]
Shape585 = x3d.Shape(USE="SiteShape")

Transform584.children.append(Shape585)

HAnimSite583.children.append(Transform584)

HAnimSegment579.children.append(HAnimSite583)

HAnimJoint578.children.append(HAnimSegment579)
HAnimJoint586 = x3d.HAnimJoint(DEF="hanim_t6")
HAnimJoint586.name = "t6"
HAnimJoint586.center = [-0.0002,-0.1156,1.1131]
HAnimJoint586.ulimit = [0,0,0]
HAnimJoint586.llimit = [0,0,0]
HAnimSegment587 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t6")
HAnimSegment587.name = "SEGMENT_FOR_t6"
TouchSensor588 = x3d.TouchSensor()
TouchSensor588.description = "joint t6 segment SEGMENT_FOR_t6"

HAnimSegment587.children.append(TouchSensor588)
Transform589 = x3d.Transform()
Transform589.translation = [-0.0002,-0.1156,1.1131]
Shape590 = x3d.Shape(USE="JointShape")

Transform589.children.append(Shape590)

HAnimSegment587.children.append(Transform589)
HAnimSite591 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t6_tip")
HAnimSite591.name = "SEGMENT_FOR_t6_tip"
Transform592 = x3d.Transform()
Transform592.translation = [-0.0002,-0.1156,1.1131]
Shape593 = x3d.Shape(USE="SiteShape")

Transform592.children.append(Shape593)

HAnimSite591.children.append(Transform592)

HAnimSegment587.children.append(HAnimSite591)

HAnimJoint586.children.append(HAnimSegment587)
HAnimJoint594 = x3d.HAnimJoint(DEF="hanim_t5")
HAnimJoint594.name = "t5"
HAnimJoint594.center = [-0.0002,-0.1156,1.1286]
HAnimJoint594.ulimit = [0,0,0]
HAnimJoint594.llimit = [0,0,0]
HAnimSegment595 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t5")
HAnimSegment595.name = "SEGMENT_FOR_t5"
TouchSensor596 = x3d.TouchSensor()
TouchSensor596.description = "joint t5 segment SEGMENT_FOR_t5"

HAnimSegment595.children.append(TouchSensor596)
Transform597 = x3d.Transform()
Transform597.translation = [-0.0002,-0.1156,1.1286]
Shape598 = x3d.Shape(USE="JointShape")

Transform597.children.append(Shape598)

HAnimSegment595.children.append(Transform597)
HAnimSite599 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t5_tip")
HAnimSite599.name = "SEGMENT_FOR_t5_tip"
Transform600 = x3d.Transform()
Transform600.translation = [-0.0002,-0.1156,1.1286]
Shape601 = x3d.Shape(USE="SiteShape")

Transform600.children.append(Shape601)

HAnimSite599.children.append(Transform600)

HAnimSegment595.children.append(HAnimSite599)

HAnimJoint594.children.append(HAnimSegment595)
HAnimJoint602 = x3d.HAnimJoint(DEF="hanim_t4")
HAnimJoint602.name = "t4"
HAnimJoint602.center = [-0.0002,-0.1156,1.1439]
HAnimJoint602.ulimit = [0,0,0]
HAnimJoint602.llimit = [0,0,0]
HAnimSegment603 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t4")
HAnimSegment603.name = "SEGMENT_FOR_t4"
TouchSensor604 = x3d.TouchSensor()
TouchSensor604.description = "joint t4 segment SEGMENT_FOR_t4"

HAnimSegment603.children.append(TouchSensor604)
Transform605 = x3d.Transform()
Transform605.translation = [-0.0002,-0.1156,1.1439]
Shape606 = x3d.Shape(USE="JointShape")

Transform605.children.append(Shape606)

HAnimSegment603.children.append(Transform605)
HAnimSite607 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t4_tip")
HAnimSite607.name = "SEGMENT_FOR_t4_tip"
Transform608 = x3d.Transform()
Transform608.translation = [-0.0002,-0.1156,1.1439]
Shape609 = x3d.Shape(USE="SiteShape")

Transform608.children.append(Shape609)

HAnimSite607.children.append(Transform608)

HAnimSegment603.children.append(HAnimSite607)

HAnimJoint602.children.append(HAnimSegment603)
HAnimJoint610 = x3d.HAnimJoint(DEF="hanim_t3")
HAnimJoint610.name = "t3"
HAnimJoint610.center = [-0.0002,-0.1156,1.1623]
HAnimJoint610.ulimit = [0,0,0]
HAnimJoint610.llimit = [0,0,0]
HAnimSegment611 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t3")
HAnimSegment611.name = "SEGMENT_FOR_t3"
TouchSensor612 = x3d.TouchSensor()
TouchSensor612.description = "joint t3 segment SEGMENT_FOR_t3"

HAnimSegment611.children.append(TouchSensor612)
Transform613 = x3d.Transform()
Transform613.translation = [-0.0002,-0.1156,1.1623]
Shape614 = x3d.Shape(USE="JointShape")

Transform613.children.append(Shape614)

HAnimSegment611.children.append(Transform613)
HAnimSite615 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t3_tip")
HAnimSite615.name = "SEGMENT_FOR_t3_tip"
Transform616 = x3d.Transform()
Transform616.translation = [-0.0002,-0.1156,1.1623]
Shape617 = x3d.Shape(USE="SiteShape")

Transform616.children.append(Shape617)

HAnimSite615.children.append(Transform616)

HAnimSegment611.children.append(HAnimSite615)

HAnimJoint610.children.append(HAnimSegment611)
HAnimJoint618 = x3d.HAnimJoint(DEF="hanim_t2")
HAnimJoint618.name = "t2"
HAnimJoint618.center = [-0.0002,-0.1157,1.1871]
HAnimJoint618.ulimit = [0,0,0]
HAnimJoint618.llimit = [0,0,0]
HAnimSegment619 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t2")
HAnimSegment619.name = "SEGMENT_FOR_t2"
TouchSensor620 = x3d.TouchSensor()
TouchSensor620.description = "joint t2 segment SEGMENT_FOR_t2"

HAnimSegment619.children.append(TouchSensor620)
Transform621 = x3d.Transform()
Transform621.translation = [-0.0002,-0.1157,1.1871]
Shape622 = x3d.Shape(USE="JointShape")

Transform621.children.append(Shape622)

HAnimSegment619.children.append(Transform621)
HAnimSite623 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t2_tip")
HAnimSite623.name = "SEGMENT_FOR_t2_tip"
Transform624 = x3d.Transform()
Transform624.translation = [-0.0002,-0.1157,1.1871]
Shape625 = x3d.Shape(USE="SiteShape")

Transform624.children.append(Shape625)

HAnimSite623.children.append(Transform624)

HAnimSegment619.children.append(HAnimSite623)

HAnimJoint618.children.append(HAnimSegment619)
HAnimJoint626 = x3d.HAnimJoint(DEF="hanim_t1")
HAnimJoint626.name = "t1"
HAnimJoint626.center = [-0.0002,-0.1156,1.2109]
HAnimJoint626.ulimit = [0,0,0]
HAnimJoint626.llimit = [0,0,0]
HAnimSegment627 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t1")
HAnimSegment627.name = "SEGMENT_FOR_t1"
TouchSensor628 = x3d.TouchSensor()
TouchSensor628.description = "joint t1 segment SEGMENT_FOR_t1"

HAnimSegment627.children.append(TouchSensor628)
Transform629 = x3d.Transform()
Transform629.translation = [-0.0002,-0.1156,1.2109]
Shape630 = x3d.Shape(USE="JointShape")

Transform629.children.append(Shape630)

HAnimSegment627.children.append(Transform629)
HAnimSite631 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t1_tip")
HAnimSite631.name = "SEGMENT_FOR_t1_tip"
Transform632 = x3d.Transform()
Transform632.translation = [-0.0002,-0.1156,1.2109]
Shape633 = x3d.Shape(USE="SiteShape")

Transform632.children.append(Shape633)

HAnimSite631.children.append(Transform632)

HAnimSegment627.children.append(HAnimSite631)

HAnimJoint626.children.append(HAnimSegment627)
HAnimJoint634 = x3d.HAnimJoint(DEF="hanim_c7")
HAnimJoint634.name = "c7"
HAnimJoint634.center = [-0.0002,-0.1169,1.2368]
HAnimJoint634.ulimit = [0,0,0]
HAnimJoint634.llimit = [0,0,0]
HAnimSegment635 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_c7")
HAnimSegment635.name = "SEGMENT_FOR_c7"
TouchSensor636 = x3d.TouchSensor()
TouchSensor636.description = "joint c7 segment SEGMENT_FOR_c7"

HAnimSegment635.children.append(TouchSensor636)
Transform637 = x3d.Transform()
Transform637.translation = [-0.0002,-0.1169,1.2368]
Shape638 = x3d.Shape(USE="JointShape")

Transform637.children.append(Shape638)

HAnimSegment635.children.append(Transform637)
HAnimSite639 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_c7_tip")
HAnimSite639.name = "SEGMENT_FOR_c7_tip"
Transform640 = x3d.Transform()
Transform640.translation = [-0.0002,-0.1169,1.2368]
Shape641 = x3d.Shape(USE="SiteShape")

Transform640.children.append(Shape641)

HAnimSite639.children.append(Transform640)

HAnimSegment635.children.append(HAnimSite639)

HAnimJoint634.children.append(HAnimSegment635)
HAnimJoint642 = x3d.HAnimJoint(DEF="hanim_c6")
HAnimJoint642.name = "c6"
HAnimJoint642.center = [-0.0002,-0.1169,1.249]
HAnimJoint642.ulimit = [0,0,0]
HAnimJoint642.llimit = [0,0,0]
HAnimSegment643 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_c6")
HAnimSegment643.name = "SEGMENT_FOR_c6"
TouchSensor644 = x3d.TouchSensor()
TouchSensor644.description = "joint c6 segment SEGMENT_FOR_c6"

HAnimSegment643.children.append(TouchSensor644)
Transform645 = x3d.Transform()
Transform645.translation = [-0.0002,-0.1169,1.249]
Shape646 = x3d.Shape(USE="JointShape")

Transform645.children.append(Shape646)

HAnimSegment643.children.append(Transform645)
HAnimSite647 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_c6_tip")
HAnimSite647.name = "SEGMENT_FOR_c6_tip"
Transform648 = x3d.Transform()
Transform648.translation = [-0.0002,-0.1169,1.249]
Shape649 = x3d.Shape(USE="SiteShape")

Transform648.children.append(Shape649)

HAnimSite647.children.append(Transform648)

HAnimSegment643.children.append(HAnimSite647)

HAnimJoint642.children.append(HAnimSegment643)
HAnimJoint650 = x3d.HAnimJoint(DEF="hanim_c5")
HAnimJoint650.name = "c5"
HAnimJoint650.center = [-0.0002,-0.1169,1.2613]
HAnimJoint650.ulimit = [0,0,0]
HAnimJoint650.llimit = [0,0,0]
HAnimSegment651 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_c5")
HAnimSegment651.name = "SEGMENT_FOR_c5"
TouchSensor652 = x3d.TouchSensor()
TouchSensor652.description = "joint c5 segment SEGMENT_FOR_c5"

HAnimSegment651.children.append(TouchSensor652)
Transform653 = x3d.Transform()
Transform653.translation = [-0.0002,-0.1169,1.2613]
Shape654 = x3d.Shape(USE="JointShape")

Transform653.children.append(Shape654)

HAnimSegment651.children.append(Transform653)
HAnimSite655 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_c5_tip")
HAnimSite655.name = "SEGMENT_FOR_c5_tip"
Transform656 = x3d.Transform()
Transform656.translation = [-0.0002,-0.1169,1.2613]
Shape657 = x3d.Shape(USE="SiteShape")

Transform656.children.append(Shape657)

HAnimSite655.children.append(Transform656)

HAnimSegment651.children.append(HAnimSite655)

HAnimJoint650.children.append(HAnimSegment651)
HAnimJoint658 = x3d.HAnimJoint(DEF="hanim_c4")
HAnimJoint658.name = "c4"
HAnimJoint658.center = [-0.0002,-0.1169,1.2737]
HAnimJoint658.ulimit = [0,0,0]
HAnimJoint658.llimit = [0,0,0]
HAnimSegment659 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_c4")
HAnimSegment659.name = "SEGMENT_FOR_c4"
TouchSensor660 = x3d.TouchSensor()
TouchSensor660.description = "joint c4 segment SEGMENT_FOR_c4"

HAnimSegment659.children.append(TouchSensor660)
Transform661 = x3d.Transform()
Transform661.translation = [-0.0002,-0.1169,1.2737]
Shape662 = x3d.Shape(USE="JointShape")

Transform661.children.append(Shape662)

HAnimSegment659.children.append(Transform661)
HAnimSite663 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_c4_tip")
HAnimSite663.name = "SEGMENT_FOR_c4_tip"
Transform664 = x3d.Transform()
Transform664.translation = [-0.0002,-0.1169,1.2737]
Shape665 = x3d.Shape(USE="SiteShape")

Transform664.children.append(Shape665)

HAnimSite663.children.append(Transform664)

HAnimSegment659.children.append(HAnimSite663)

HAnimJoint658.children.append(HAnimSegment659)
HAnimJoint666 = x3d.HAnimJoint(DEF="hanim_c3")
HAnimJoint666.name = "c3"
HAnimJoint666.center = [-0.0002,-0.1169,1.2865]
HAnimJoint666.ulimit = [0,0,0]
HAnimJoint666.llimit = [0,0,0]
HAnimSegment667 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_c3")
HAnimSegment667.name = "SEGMENT_FOR_c3"
TouchSensor668 = x3d.TouchSensor()
TouchSensor668.description = "joint c3 segment SEGMENT_FOR_c3"

HAnimSegment667.children.append(TouchSensor668)
Transform669 = x3d.Transform()
Transform669.translation = [-0.0002,-0.1169,1.2865]
Shape670 = x3d.Shape(USE="JointShape")

Transform669.children.append(Shape670)

HAnimSegment667.children.append(Transform669)
HAnimSite671 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_c3_tip")
HAnimSite671.name = "SEGMENT_FOR_c3_tip"
Transform672 = x3d.Transform()
Transform672.translation = [-0.0002,-0.1169,1.2865]
Shape673 = x3d.Shape(USE="SiteShape")

Transform672.children.append(Shape673)

HAnimSite671.children.append(Transform672)

HAnimSegment667.children.append(HAnimSite671)

HAnimJoint666.children.append(HAnimSegment667)
HAnimJoint674 = x3d.HAnimJoint(DEF="hanim_c2")
HAnimJoint674.name = "c2"
HAnimJoint674.center = [-0.0002,-0.1169,1.2982]
HAnimJoint674.ulimit = [0,0,0]
HAnimJoint674.llimit = [0,0,0]
HAnimSegment675 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_c2")
HAnimSegment675.name = "SEGMENT_FOR_c2"
TouchSensor676 = x3d.TouchSensor()
TouchSensor676.description = "joint c2 segment SEGMENT_FOR_c2"

HAnimSegment675.children.append(TouchSensor676)
Transform677 = x3d.Transform()
Transform677.translation = [-0.0002,-0.1169,1.2982]
Shape678 = x3d.Shape(USE="JointShape")

Transform677.children.append(Shape678)

HAnimSegment675.children.append(Transform677)
HAnimSite679 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_c2_tip")
HAnimSite679.name = "SEGMENT_FOR_c2_tip"
Transform680 = x3d.Transform()
Transform680.translation = [-0.0002,-0.1169,1.2982]
Shape681 = x3d.Shape(USE="SiteShape")

Transform680.children.append(Shape681)

HAnimSite679.children.append(Transform680)

HAnimSegment675.children.append(HAnimSite679)

HAnimJoint674.children.append(HAnimSegment675)
HAnimJoint682 = x3d.HAnimJoint(DEF="hanim_c1")
HAnimJoint682.name = "c1"
HAnimJoint682.center = [-0.0002,-0.1169,1.3099]
HAnimJoint682.ulimit = [0,0,0]
HAnimJoint682.llimit = [0,0,0]
HAnimSegment683 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_c1")
HAnimSegment683.name = "SEGMENT_FOR_c1"
TouchSensor684 = x3d.TouchSensor()
TouchSensor684.description = "joint c1 segment SEGMENT_FOR_c1"

HAnimSegment683.children.append(TouchSensor684)
Transform685 = x3d.Transform()
Transform685.translation = [-0.0002,-0.1169,1.3099]
Shape686 = x3d.Shape(USE="JointShape")

Transform685.children.append(Shape686)

HAnimSegment683.children.append(Transform685)
HAnimSite687 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_c1_tip")
HAnimSite687.name = "SEGMENT_FOR_c1_tip"
Transform688 = x3d.Transform()
Transform688.translation = [-0.0002,-0.1169,1.3099]
Shape689 = x3d.Shape(USE="SiteShape")

Transform688.children.append(Shape689)

HAnimSite687.children.append(Transform688)

HAnimSegment683.children.append(HAnimSite687)

HAnimJoint682.children.append(HAnimSegment683)
HAnimJoint690 = x3d.HAnimJoint(DEF="hanim_skull")
HAnimJoint690.name = "skull"
HAnimJoint690.center = [-0.0002,-0.1173,1.3041]
HAnimJoint690.ulimit = [0,0,0]
HAnimJoint690.llimit = [0,0,0]
HAnimSegment691 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_skull")
HAnimSegment691.name = "SEGMENT_FOR_skull"
TouchSensor692 = x3d.TouchSensor()
TouchSensor692.description = "joint skull segment SEGMENT_FOR_skull"

HAnimSegment691.children.append(TouchSensor692)
Transform693 = x3d.Transform()
Transform693.translation = [-0.0002,-0.1173,1.3041]
Shape694 = x3d.Shape(USE="JointShape")

Transform693.children.append(Shape694)

HAnimSegment691.children.append(Transform693)
HAnimSite695 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_skull_tip")
HAnimSite695.name = "SEGMENT_FOR_skull_tip"
Transform696 = x3d.Transform()
Transform696.translation = [-0.0002,-0.1173,1.3041]
Shape697 = x3d.Shape(USE="SiteShape")

Transform696.children.append(Shape697)

HAnimSite695.children.append(Transform696)

HAnimSegment691.children.append(HAnimSite695)

HAnimJoint690.children.append(HAnimSegment691)
HAnimJoint698 = x3d.HAnimJoint(DEF="hanim_l_eyelid")
HAnimJoint698.name = "l_eyelid"
HAnimJoint698.center = [0.0503,-0.0689,1.4157]
HAnimJoint698.ulimit = [0,0,0]
HAnimJoint698.llimit = [0,0,0]
HAnimSegment699 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_eyelid")
HAnimSegment699.name = "SEGMENT_FOR_l_eyelid"
TouchSensor700 = x3d.TouchSensor()
TouchSensor700.description = "joint l_eyelid segment SEGMENT_FOR_l_eyelid"

HAnimSegment699.children.append(TouchSensor700)
Transform701 = x3d.Transform()
Transform701.translation = [0.0503,-0.0689,1.4157]
Shape702 = x3d.Shape(USE="JointShape")

Transform701.children.append(Shape702)

HAnimSegment699.children.append(Transform701)
HAnimSite703 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_eyelid_tip")
HAnimSite703.name = "SEGMENT_FOR_l_eyelid_tip"
Transform704 = x3d.Transform()
Transform704.translation = [0.0503,-0.0689,1.4157]
Shape705 = x3d.Shape(USE="SiteShape")

Transform704.children.append(Shape705)

HAnimSite703.children.append(Transform704)

HAnimSegment699.children.append(HAnimSite703)

HAnimJoint698.children.append(HAnimSegment699)

HAnimJoint690.children.append(HAnimJoint698)
HAnimJoint706 = x3d.HAnimJoint(DEF="hanim_r_eyelid")
HAnimJoint706.name = "r_eyelid"
HAnimJoint706.center = [-0.0507,-0.0689,1.4157]
HAnimJoint706.ulimit = [0,0,0]
HAnimJoint706.llimit = [0,0,0]
HAnimSegment707 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_eyelid")
HAnimSegment707.name = "SEGMENT_FOR_r_eyelid"
TouchSensor708 = x3d.TouchSensor()
TouchSensor708.description = "joint r_eyelid segment SEGMENT_FOR_r_eyelid"

HAnimSegment707.children.append(TouchSensor708)
Transform709 = x3d.Transform()
Transform709.translation = [-0.0507,-0.0689,1.4157]
Shape710 = x3d.Shape(USE="JointShape")

Transform709.children.append(Shape710)

HAnimSegment707.children.append(Transform709)
HAnimSite711 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_eyelid_tip")
HAnimSite711.name = "SEGMENT_FOR_r_eyelid_tip"
Transform712 = x3d.Transform()
Transform712.translation = [-0.0507,-0.0689,1.4157]
Shape713 = x3d.Shape(USE="SiteShape")

Transform712.children.append(Shape713)

HAnimSite711.children.append(Transform712)

HAnimSegment707.children.append(HAnimSite711)

HAnimJoint706.children.append(HAnimSegment707)

HAnimJoint690.children.append(HAnimJoint706)
HAnimJoint714 = x3d.HAnimJoint(DEF="hanim_l_eyeball")
HAnimJoint714.name = "l_eyeball"
HAnimJoint714.center = [0.0479,-0.0188,1.3963]
HAnimJoint714.ulimit = [0,0,0]
HAnimJoint714.llimit = [0,0,0]
HAnimSegment715 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_eyeball")
HAnimSegment715.name = "SEGMENT_FOR_l_eyeball"
TouchSensor716 = x3d.TouchSensor()
TouchSensor716.description = "joint l_eyeball segment SEGMENT_FOR_l_eyeball"

HAnimSegment715.children.append(TouchSensor716)
Transform717 = x3d.Transform()
Transform717.translation = [0.0479,-0.0188,1.3963]
Shape718 = x3d.Shape(USE="JointShape")

Transform717.children.append(Shape718)

HAnimSegment715.children.append(Transform717)
HAnimSite719 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_eyeball_tip")
HAnimSite719.name = "SEGMENT_FOR_l_eyeball_tip"
Transform720 = x3d.Transform()
Transform720.translation = [0.0479,-0.0188,1.3963]
Shape721 = x3d.Shape(USE="SiteShape")

Transform720.children.append(Shape721)

HAnimSite719.children.append(Transform720)

HAnimSegment715.children.append(HAnimSite719)

HAnimJoint714.children.append(HAnimSegment715)

HAnimJoint690.children.append(HAnimJoint714)
HAnimJoint722 = x3d.HAnimJoint(DEF="hanim_r_eyeball")
HAnimJoint722.name = "r_eyeball"
HAnimJoint722.center = [-0.0483,-0.0188,1.3963]
HAnimJoint722.ulimit = [0,0,0]
HAnimJoint722.llimit = [0,0,0]
HAnimSegment723 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_eyeball")
HAnimSegment723.name = "SEGMENT_FOR_r_eyeball"
TouchSensor724 = x3d.TouchSensor()
TouchSensor724.description = "joint r_eyeball segment SEGMENT_FOR_r_eyeball"

HAnimSegment723.children.append(TouchSensor724)
Transform725 = x3d.Transform()
Transform725.translation = [-0.0483,-0.0188,1.3963]
Shape726 = x3d.Shape(USE="JointShape")

Transform725.children.append(Shape726)

HAnimSegment723.children.append(Transform725)
HAnimSite727 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_eyeball_tip")
HAnimSite727.name = "SEGMENT_FOR_r_eyeball_tip"
Transform728 = x3d.Transform()
Transform728.translation = [-0.0483,-0.0188,1.3963]
Shape729 = x3d.Shape(USE="SiteShape")

Transform728.children.append(Shape729)

HAnimSite727.children.append(Transform728)

HAnimSegment723.children.append(HAnimSite727)

HAnimJoint722.children.append(HAnimSegment723)

HAnimJoint690.children.append(HAnimJoint722)
HAnimJoint730 = x3d.HAnimJoint(DEF="hanim_l_eyebrow")
HAnimJoint730.name = "l_eyebrow"
HAnimJoint730.center = [0.0216,0.0051,1.4053]
HAnimJoint730.ulimit = [0,0,0]
HAnimJoint730.llimit = [0,0,0]
HAnimSegment731 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_eyebrow")
HAnimSegment731.name = "SEGMENT_FOR_l_eyebrow"
TouchSensor732 = x3d.TouchSensor()
TouchSensor732.description = "joint l_eyebrow segment SEGMENT_FOR_l_eyebrow"

HAnimSegment731.children.append(TouchSensor732)
Transform733 = x3d.Transform()
Transform733.translation = [0.0216,0.0051,1.4053]
Shape734 = x3d.Shape(USE="JointShape")

Transform733.children.append(Shape734)

HAnimSegment731.children.append(Transform733)
HAnimSite735 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_eyebrow_tip")
HAnimSite735.name = "SEGMENT_FOR_l_eyebrow_tip"
Transform736 = x3d.Transform()
Transform736.translation = [0.0216,0.0051,1.4053]
Shape737 = x3d.Shape(USE="SiteShape")

Transform736.children.append(Shape737)

HAnimSite735.children.append(Transform736)

HAnimSegment731.children.append(HAnimSite735)

HAnimJoint730.children.append(HAnimSegment731)

HAnimJoint690.children.append(HAnimJoint730)
HAnimJoint738 = x3d.HAnimJoint(DEF="hanim_r_eyebrow")
HAnimJoint738.name = "r_eyebrow"
HAnimJoint738.center = [-0.0219,0.0051,1.4053]
HAnimJoint738.ulimit = [0,0,0]
HAnimJoint738.llimit = [0,0,0]
HAnimSegment739 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_eyebrow")
HAnimSegment739.name = "SEGMENT_FOR_r_eyebrow"
TouchSensor740 = x3d.TouchSensor()
TouchSensor740.description = "joint r_eyebrow segment SEGMENT_FOR_r_eyebrow"

HAnimSegment739.children.append(TouchSensor740)
Transform741 = x3d.Transform()
Transform741.translation = [-0.0219,0.0051,1.4053]
Shape742 = x3d.Shape(USE="JointShape")

Transform741.children.append(Shape742)

HAnimSegment739.children.append(Transform741)
HAnimSite743 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_eyebrow_tip")
HAnimSite743.name = "SEGMENT_FOR_r_eyebrow_tip"
Transform744 = x3d.Transform()
Transform744.translation = [-0.0219,0.0051,1.4053]
Shape745 = x3d.Shape(USE="SiteShape")

Transform744.children.append(Shape745)

HAnimSite743.children.append(Transform744)

HAnimSegment739.children.append(HAnimSite743)

HAnimJoint738.children.append(HAnimSegment739)

HAnimJoint690.children.append(HAnimJoint738)
HAnimJoint746 = x3d.HAnimJoint(DEF="hanim_jaw")
HAnimJoint746.name = "jaw"
HAnimJoint746.center = [-0.0002,-0.0865,1.3043]
HAnimJoint746.ulimit = [0,0,0]
HAnimJoint746.llimit = [0,0,0]
HAnimSegment747 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_jaw")
HAnimSegment747.name = "SEGMENT_FOR_jaw"
TouchSensor748 = x3d.TouchSensor()
TouchSensor748.description = "joint jaw segment SEGMENT_FOR_jaw"

HAnimSegment747.children.append(TouchSensor748)
Transform749 = x3d.Transform()
Transform749.translation = [-0.0002,-0.0865,1.3043]
Shape750 = x3d.Shape(USE="JointShape")

Transform749.children.append(Shape750)

HAnimSegment747.children.append(Transform749)
HAnimSite751 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_jaw_tip")
HAnimSite751.name = "SEGMENT_FOR_jaw_tip"
Transform752 = x3d.Transform()
Transform752.translation = [-0.0002,-0.0865,1.3043]
Shape753 = x3d.Shape(USE="SiteShape")

Transform752.children.append(Shape753)

HAnimSite751.children.append(Transform752)

HAnimSegment747.children.append(HAnimSite751)

HAnimJoint746.children.append(HAnimSegment747)

HAnimJoint690.children.append(HAnimJoint746)

HAnimJoint682.children.append(HAnimJoint690)

HAnimJoint674.children.append(HAnimJoint682)

HAnimJoint666.children.append(HAnimJoint674)

HAnimJoint658.children.append(HAnimJoint666)

HAnimJoint650.children.append(HAnimJoint658)

HAnimJoint642.children.append(HAnimJoint650)

HAnimJoint634.children.append(HAnimJoint642)

HAnimJoint626.children.append(HAnimJoint634)
HAnimJoint754 = x3d.HAnimJoint(DEF="hanim_l_clavicle")
HAnimJoint754.name = "l_clavicle"
HAnimJoint754.center = [0.1228,-0.1148,1.1833]
HAnimJoint754.ulimit = [0,0,0]
HAnimJoint754.llimit = [0,0,0]
HAnimSegment755 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_clavicle")
HAnimSegment755.name = "SEGMENT_FOR_l_clavicle"
TouchSensor756 = x3d.TouchSensor()
TouchSensor756.description = "joint l_clavicle segment SEGMENT_FOR_l_clavicle"

HAnimSegment755.children.append(TouchSensor756)
Transform757 = x3d.Transform()
Transform757.translation = [0.1228,-0.1148,1.1833]
Shape758 = x3d.Shape(USE="JointShape")

Transform757.children.append(Shape758)

HAnimSegment755.children.append(Transform757)
HAnimSite759 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_clavicle_tip")
HAnimSite759.name = "SEGMENT_FOR_l_clavicle_tip"
Transform760 = x3d.Transform()
Transform760.translation = [0.1228,-0.1148,1.1833]
Shape761 = x3d.Shape(USE="SiteShape")

Transform760.children.append(Shape761)

HAnimSite759.children.append(Transform760)

HAnimSegment755.children.append(HAnimSite759)

HAnimJoint754.children.append(HAnimSegment755)
HAnimJoint762 = x3d.HAnimJoint(DEF="hanim_l_scapula")
HAnimJoint762.name = "l_scapula"
HAnimJoint762.center = [0.0383,-0.1157,1.2001]
HAnimJoint762.ulimit = [0,0,0]
HAnimJoint762.llimit = [0,0,0]
HAnimSegment763 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_scapula")
HAnimSegment763.name = "SEGMENT_FOR_l_scapula"
TouchSensor764 = x3d.TouchSensor()
TouchSensor764.description = "joint l_scapula segment SEGMENT_FOR_l_scapula"

HAnimSegment763.children.append(TouchSensor764)
Transform765 = x3d.Transform()
Transform765.translation = [0.0383,-0.1157,1.2001]
Shape766 = x3d.Shape(USE="JointShape")

Transform765.children.append(Shape766)

HAnimSegment763.children.append(Transform765)
HAnimSite767 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_scapula_tip")
HAnimSite767.name = "SEGMENT_FOR_l_scapula_tip"
Transform768 = x3d.Transform()
Transform768.translation = [0.0383,-0.1157,1.2001]
Shape769 = x3d.Shape(USE="SiteShape")

Transform768.children.append(Shape769)

HAnimSite767.children.append(Transform768)

HAnimSegment763.children.append(HAnimSite767)

HAnimJoint762.children.append(HAnimSegment763)
HAnimJoint770 = x3d.HAnimJoint(DEF="hanim_l_upperarm")
HAnimJoint770.name = "l_upperarm"
HAnimJoint770.center = [0.1649,-0.1051,1.17]
HAnimJoint770.ulimit = [0,0,0]
HAnimJoint770.llimit = [0,0,0]
HAnimSegment771 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_upperarm")
HAnimSegment771.name = "SEGMENT_FOR_l_upperarm"
TouchSensor772 = x3d.TouchSensor()
TouchSensor772.description = "joint l_upperarm segment SEGMENT_FOR_l_upperarm"

HAnimSegment771.children.append(TouchSensor772)
Transform773 = x3d.Transform()
Transform773.translation = [0.1649,-0.1051,1.17]
Shape774 = x3d.Shape(USE="JointShape")

Transform773.children.append(Shape774)

HAnimSegment771.children.append(Transform773)
HAnimSite775 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_upperarm_tip")
HAnimSite775.name = "SEGMENT_FOR_l_upperarm_tip"
Transform776 = x3d.Transform()
Transform776.translation = [0.1649,-0.1051,1.17]
Shape777 = x3d.Shape(USE="SiteShape")

Transform776.children.append(Shape777)

HAnimSite775.children.append(Transform776)

HAnimSegment771.children.append(HAnimSite775)

HAnimJoint770.children.append(HAnimSegment771)
HAnimJoint778 = x3d.HAnimJoint(DEF="hanim_l_forearm")
HAnimJoint778.name = "l_forearm"
HAnimJoint778.center = [0.1819,-0.1075,0.9202]
HAnimJoint778.ulimit = [0,0,0]
HAnimJoint778.llimit = [0,0,0]
HAnimSegment779 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_forearm")
HAnimSegment779.name = "SEGMENT_FOR_l_forearm"
TouchSensor780 = x3d.TouchSensor()
TouchSensor780.description = "joint l_forearm segment SEGMENT_FOR_l_forearm"

HAnimSegment779.children.append(TouchSensor780)
Transform781 = x3d.Transform()
Transform781.translation = [0.1819,-0.1075,0.9202]
Shape782 = x3d.Shape(USE="JointShape")

Transform781.children.append(Shape782)

HAnimSegment779.children.append(Transform781)
HAnimSite783 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_forearm_tip")
HAnimSite783.name = "SEGMENT_FOR_l_forearm_tip"
Transform784 = x3d.Transform()
Transform784.translation = [0.1819,-0.1075,0.9202]
Shape785 = x3d.Shape(USE="SiteShape")

Transform784.children.append(Shape785)

HAnimSite783.children.append(Transform784)

HAnimSegment779.children.append(HAnimSite783)

HAnimJoint778.children.append(HAnimSegment779)
HAnimJoint786 = x3d.HAnimJoint(DEF="hanim_l_carpal")
HAnimJoint786.name = "l_carpal"
HAnimJoint786.center = [0.1818,-0.1069,0.7157]
HAnimJoint786.ulimit = [0,0,0]
HAnimJoint786.llimit = [0,0,0]
HAnimSegment787 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal")
HAnimSegment787.name = "SEGMENT_FOR_l_carpal"
TouchSensor788 = x3d.TouchSensor()
TouchSensor788.description = "joint l_carpal segment SEGMENT_FOR_l_carpal"

HAnimSegment787.children.append(TouchSensor788)
Transform789 = x3d.Transform()
Transform789.translation = [0.1818,-0.1069,0.7157]
Shape790 = x3d.Shape(USE="JointShape")

Transform789.children.append(Shape790)

HAnimSegment787.children.append(Transform789)
HAnimSite791 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_tip")
HAnimSite791.name = "SEGMENT_FOR_l_carpal_tip"
Transform792 = x3d.Transform()
Transform792.translation = [0.1818,-0.1069,0.7157]
Shape793 = x3d.Shape(USE="SiteShape")

Transform792.children.append(Shape793)

HAnimSite791.children.append(Transform792)

HAnimSegment787.children.append(HAnimSite791)

HAnimJoint786.children.append(HAnimSegment787)
HAnimJoint794 = x3d.HAnimJoint(DEF="hanim_l_trapezium")
HAnimJoint794.name = "l_trapezium"
HAnimJoint794.center = [0.1811,-0.0826,0.6975]
HAnimJoint794.ulimit = [0,0,0]
HAnimJoint794.llimit = [0,0,0]
HAnimSegment795 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_trapezium")
HAnimSegment795.name = "SEGMENT_FOR_l_trapezium"
TouchSensor796 = x3d.TouchSensor()
TouchSensor796.description = "joint l_trapezium segment SEGMENT_FOR_l_trapezium"

HAnimSegment795.children.append(TouchSensor796)
Transform797 = x3d.Transform()
Transform797.translation = [0.1811,-0.0826,0.6975]
Shape798 = x3d.Shape(USE="JointShape")

Transform797.children.append(Shape798)

HAnimSegment795.children.append(Transform797)
HAnimSite799 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_trapezium_tip")
HAnimSite799.name = "SEGMENT_FOR_l_trapezium_tip"
Transform800 = x3d.Transform()
Transform800.translation = [0.1811,-0.0826,0.6975]
Shape801 = x3d.Shape(USE="SiteShape")

Transform800.children.append(Shape801)

HAnimSite799.children.append(Transform800)

HAnimSegment795.children.append(HAnimSite799)

HAnimJoint794.children.append(HAnimSegment795)
HAnimJoint802 = x3d.HAnimJoint(DEF="hanim_l_metacarpal_1")
HAnimJoint802.name = "l_metacarpal_1"
HAnimJoint802.center = [0.1803,-0.0759,0.684]
HAnimJoint802.ulimit = [0,0,0]
HAnimJoint802.llimit = [0,0,0]
HAnimSegment803 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metacarpal_1")
HAnimSegment803.name = "SEGMENT_FOR_l_metacarpal_1"
TouchSensor804 = x3d.TouchSensor()
TouchSensor804.description = "joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1"

HAnimSegment803.children.append(TouchSensor804)
Transform805 = x3d.Transform()
Transform805.translation = [0.1803,-0.0759,0.684]
Shape806 = x3d.Shape(USE="JointShape")

Transform805.children.append(Shape806)

HAnimSegment803.children.append(Transform805)
HAnimSite807 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metacarpal_1_tip")
HAnimSite807.name = "SEGMENT_FOR_l_metacarpal_1_tip"
Transform808 = x3d.Transform()
Transform808.translation = [0.1803,-0.0759,0.684]
Shape809 = x3d.Shape(USE="SiteShape")

Transform808.children.append(Shape809)

HAnimSite807.children.append(Transform808)

HAnimSegment803.children.append(HAnimSite807)

HAnimJoint802.children.append(HAnimSegment803)
HAnimJoint810 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_phalanx_1")
HAnimJoint810.name = "l_carpal_proximal_phalanx_1"
HAnimJoint810.center = [0.1809,-0.0661,0.6642]
HAnimJoint810.ulimit = [0,0,0]
HAnimJoint810.llimit = [0,0,0]
HAnimSegment811 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1")
HAnimSegment811.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_1"
TouchSensor812 = x3d.TouchSensor()
TouchSensor812.description = "joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1"

HAnimSegment811.children.append(TouchSensor812)
Transform813 = x3d.Transform()
Transform813.translation = [0.1809,-0.0661,0.6642]
Shape814 = x3d.Shape(USE="JointShape")

Transform813.children.append(Shape814)

HAnimSegment811.children.append(Transform813)
HAnimSite815 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip")
HAnimSite815.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip"
Transform816 = x3d.Transform()
Transform816.translation = [0.1809,-0.0661,0.6642]
Shape817 = x3d.Shape(USE="SiteShape")

Transform816.children.append(Shape817)

HAnimSite815.children.append(Transform816)

HAnimSegment811.children.append(HAnimSite815)

HAnimJoint810.children.append(HAnimSegment811)
HAnimJoint818 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_phalanx_1")
HAnimJoint818.name = "l_carpal_distal_phalanx_1"
HAnimJoint818.center = [0.1825,-0.0522,0.6455]
HAnimJoint818.ulimit = [0,0,0]
HAnimJoint818.llimit = [0,0,0]
HAnimSegment819 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1")
HAnimSegment819.name = "SEGMENT_FOR_l_carpal_distal_phalanx_1"
TouchSensor820 = x3d.TouchSensor()
TouchSensor820.description = "joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1"

HAnimSegment819.children.append(TouchSensor820)
Transform821 = x3d.Transform()
Transform821.translation = [0.1825,-0.0522,0.6455]
Shape822 = x3d.Shape(USE="JointShape")

Transform821.children.append(Shape822)

HAnimSegment819.children.append(Transform821)
HAnimSite823 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1_tip")
HAnimSite823.name = "SEGMENT_FOR_l_carpal_distal_phalanx_1_tip"
Transform824 = x3d.Transform()
Transform824.translation = [0.1825,-0.0522,0.6455]
Shape825 = x3d.Shape(USE="SiteShape")

Transform824.children.append(Shape825)

HAnimSite823.children.append(Transform824)

HAnimSegment819.children.append(HAnimSite823)

HAnimJoint818.children.append(HAnimSegment819)

HAnimJoint810.children.append(HAnimJoint818)

HAnimJoint802.children.append(HAnimJoint810)

HAnimJoint794.children.append(HAnimJoint802)

HAnimJoint786.children.append(HAnimJoint794)
HAnimJoint826 = x3d.HAnimJoint(DEF="hanim_l_trapezoid")
HAnimJoint826.name = "l_trapezoid"
HAnimJoint826.center = [0.1811,-0.0935,0.6984]
HAnimJoint826.ulimit = [0,0,0]
HAnimJoint826.llimit = [0,0,0]
HAnimSegment827 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_trapezoid")
HAnimSegment827.name = "SEGMENT_FOR_l_trapezoid"
TouchSensor828 = x3d.TouchSensor()
TouchSensor828.description = "joint l_trapezoid segment SEGMENT_FOR_l_trapezoid"

HAnimSegment827.children.append(TouchSensor828)
Transform829 = x3d.Transform()
Transform829.translation = [0.1811,-0.0935,0.6984]
Shape830 = x3d.Shape(USE="JointShape")

Transform829.children.append(Shape830)

HAnimSegment827.children.append(Transform829)
HAnimSite831 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_trapezoid_tip")
HAnimSite831.name = "SEGMENT_FOR_l_trapezoid_tip"
Transform832 = x3d.Transform()
Transform832.translation = [0.1811,-0.0935,0.6984]
Shape833 = x3d.Shape(USE="SiteShape")

Transform832.children.append(Shape833)

HAnimSite831.children.append(Transform832)

HAnimSegment827.children.append(HAnimSite831)

HAnimJoint826.children.append(HAnimSegment827)
HAnimJoint834 = x3d.HAnimJoint(DEF="hanim_l_metacarpal_2")
HAnimJoint834.name = "l_metacarpal_2"
HAnimJoint834.center = [0.1811,-0.0922,0.679]
HAnimJoint834.ulimit = [0,0,0]
HAnimJoint834.llimit = [0,0,0]
HAnimSegment835 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metacarpal_2")
HAnimSegment835.name = "SEGMENT_FOR_l_metacarpal_2"
TouchSensor836 = x3d.TouchSensor()
TouchSensor836.description = "joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2"

HAnimSegment835.children.append(TouchSensor836)
Transform837 = x3d.Transform()
Transform837.translation = [0.1811,-0.0922,0.679]
Shape838 = x3d.Shape(USE="JointShape")

Transform837.children.append(Shape838)

HAnimSegment835.children.append(Transform837)
HAnimSite839 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metacarpal_2_tip")
HAnimSite839.name = "SEGMENT_FOR_l_metacarpal_2_tip"
Transform840 = x3d.Transform()
Transform840.translation = [0.1811,-0.0922,0.679]
Shape841 = x3d.Shape(USE="SiteShape")

Transform840.children.append(Shape841)

HAnimSite839.children.append(Transform840)

HAnimSegment835.children.append(HAnimSite839)

HAnimJoint834.children.append(HAnimSegment835)
HAnimJoint842 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_phalanx_2")
HAnimJoint842.name = "l_carpal_proximal_phalanx_2"
HAnimJoint842.center = [0.1836,-0.0868,0.6286]
HAnimJoint842.ulimit = [0,0,0]
HAnimJoint842.llimit = [0,0,0]
HAnimSegment843 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2")
HAnimSegment843.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_2"
TouchSensor844 = x3d.TouchSensor()
TouchSensor844.description = "joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2"

HAnimSegment843.children.append(TouchSensor844)
Transform845 = x3d.Transform()
Transform845.translation = [0.1836,-0.0868,0.6286]
Shape846 = x3d.Shape(USE="JointShape")

Transform845.children.append(Shape846)

HAnimSegment843.children.append(Transform845)
HAnimSite847 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip")
HAnimSite847.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip"
Transform848 = x3d.Transform()
Transform848.translation = [0.1836,-0.0868,0.6286]
Shape849 = x3d.Shape(USE="SiteShape")

Transform848.children.append(Shape849)

HAnimSite847.children.append(Transform848)

HAnimSegment843.children.append(HAnimSite847)

HAnimJoint842.children.append(HAnimSegment843)
HAnimJoint850 = x3d.HAnimJoint(DEF="hanim_l_carpal_middle_phalanx_2")
HAnimJoint850.name = "l_carpal_middle_phalanx_2"
HAnimJoint850.center = [0.1815,-0.0877,0.5983]
HAnimJoint850.ulimit = [0,0,0]
HAnimJoint850.llimit = [0,0,0]
HAnimSegment851 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2")
HAnimSegment851.name = "SEGMENT_FOR_l_carpal_middle_phalanx_2"
TouchSensor852 = x3d.TouchSensor()
TouchSensor852.description = "joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2"

HAnimSegment851.children.append(TouchSensor852)
Transform853 = x3d.Transform()
Transform853.translation = [0.1815,-0.0877,0.5983]
Shape854 = x3d.Shape(USE="JointShape")

Transform853.children.append(Shape854)

HAnimSegment851.children.append(Transform853)
HAnimSite855 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2_tip")
HAnimSite855.name = "SEGMENT_FOR_l_carpal_middle_phalanx_2_tip"
Transform856 = x3d.Transform()
Transform856.translation = [0.1815,-0.0877,0.5983]
Shape857 = x3d.Shape(USE="SiteShape")

Transform856.children.append(Shape857)

HAnimSite855.children.append(Transform856)

HAnimSegment851.children.append(HAnimSite855)

HAnimJoint850.children.append(HAnimSegment851)
HAnimJoint858 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_phalanx_2")
HAnimJoint858.name = "l_carpal_distal_phalanx_2"
HAnimJoint858.center = [0.1805,-0.0885,0.5731]
HAnimJoint858.ulimit = [0,0,0]
HAnimJoint858.llimit = [0,0,0]
HAnimSegment859 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2")
HAnimSegment859.name = "SEGMENT_FOR_l_carpal_distal_phalanx_2"
TouchSensor860 = x3d.TouchSensor()
TouchSensor860.description = "joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2"

HAnimSegment859.children.append(TouchSensor860)
Transform861 = x3d.Transform()
Transform861.translation = [0.1805,-0.0885,0.5731]
Shape862 = x3d.Shape(USE="JointShape")

Transform861.children.append(Shape862)

HAnimSegment859.children.append(Transform861)
HAnimSite863 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2_tip")
HAnimSite863.name = "SEGMENT_FOR_l_carpal_distal_phalanx_2_tip"
Transform864 = x3d.Transform()
Transform864.translation = [0.1805,-0.0885,0.5731]
Shape865 = x3d.Shape(USE="SiteShape")

Transform864.children.append(Shape865)

HAnimSite863.children.append(Transform864)

HAnimSegment859.children.append(HAnimSite863)

HAnimJoint858.children.append(HAnimSegment859)

HAnimJoint850.children.append(HAnimJoint858)

HAnimJoint842.children.append(HAnimJoint850)

HAnimJoint834.children.append(HAnimJoint842)

HAnimJoint826.children.append(HAnimJoint834)

HAnimJoint786.children.append(HAnimJoint826)
HAnimJoint866 = x3d.HAnimJoint(DEF="hanim_l_capitate")
HAnimJoint866.name = "l_capitate"
HAnimJoint866.center = [0.1809,-0.1067,0.7]
HAnimJoint866.ulimit = [0,0,0]
HAnimJoint866.llimit = [0,0,0]
HAnimSegment867 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_capitate")
HAnimSegment867.name = "SEGMENT_FOR_l_capitate"
TouchSensor868 = x3d.TouchSensor()
TouchSensor868.description = "joint l_capitate segment SEGMENT_FOR_l_capitate"

HAnimSegment867.children.append(TouchSensor868)
Transform869 = x3d.Transform()
Transform869.translation = [0.1809,-0.1067,0.7]
Shape870 = x3d.Shape(USE="JointShape")

Transform869.children.append(Shape870)

HAnimSegment867.children.append(Transform869)
HAnimSite871 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_capitate_tip")
HAnimSite871.name = "SEGMENT_FOR_l_capitate_tip"
Transform872 = x3d.Transform()
Transform872.translation = [0.1809,-0.1067,0.7]
Shape873 = x3d.Shape(USE="SiteShape")

Transform872.children.append(Shape873)

HAnimSite871.children.append(Transform872)

HAnimSegment867.children.append(HAnimSite871)

HAnimJoint866.children.append(HAnimSegment867)
HAnimJoint874 = x3d.HAnimJoint(DEF="hanim_l_metacarpal_3")
HAnimJoint874.name = "l_metacarpal_3"
HAnimJoint874.center = [0.1809,-0.1081,0.6772]
HAnimJoint874.ulimit = [0,0,0]
HAnimJoint874.llimit = [0,0,0]
HAnimSegment875 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metacarpal_3")
HAnimSegment875.name = "SEGMENT_FOR_l_metacarpal_3"
TouchSensor876 = x3d.TouchSensor()
TouchSensor876.description = "joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3"

HAnimSegment875.children.append(TouchSensor876)
Transform877 = x3d.Transform()
Transform877.translation = [0.1809,-0.1081,0.6772]
Shape878 = x3d.Shape(USE="JointShape")

Transform877.children.append(Shape878)

HAnimSegment875.children.append(Transform877)
HAnimSite879 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metacarpal_3_tip")
HAnimSite879.name = "SEGMENT_FOR_l_metacarpal_3_tip"
Transform880 = x3d.Transform()
Transform880.translation = [0.1809,-0.1081,0.6772]
Shape881 = x3d.Shape(USE="SiteShape")

Transform880.children.append(Shape881)

HAnimSite879.children.append(Transform880)

HAnimSegment875.children.append(HAnimSite879)

HAnimJoint874.children.append(HAnimSegment875)
HAnimJoint882 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_phalanx_3")
HAnimJoint882.name = "l_carpal_proximal_phalanx_3"
HAnimJoint882.center = [0.1835,-0.1058,0.6264]
HAnimJoint882.ulimit = [0,0,0]
HAnimJoint882.llimit = [0,0,0]
HAnimSegment883 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3")
HAnimSegment883.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_3"
TouchSensor884 = x3d.TouchSensor()
TouchSensor884.description = "joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3"

HAnimSegment883.children.append(TouchSensor884)
Transform885 = x3d.Transform()
Transform885.translation = [0.1835,-0.1058,0.6264]
Shape886 = x3d.Shape(USE="JointShape")

Transform885.children.append(Shape886)

HAnimSegment883.children.append(Transform885)
HAnimSite887 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip")
HAnimSite887.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip"
Transform888 = x3d.Transform()
Transform888.translation = [0.1835,-0.1058,0.6264]
Shape889 = x3d.Shape(USE="SiteShape")

Transform888.children.append(Shape889)

HAnimSite887.children.append(Transform888)

HAnimSegment883.children.append(HAnimSite887)

HAnimJoint882.children.append(HAnimSegment883)
HAnimJoint890 = x3d.HAnimJoint(DEF="hanim_l_carpal_middle_phalanx_3")
HAnimJoint890.name = "l_carpal_middle_phalanx_3"
HAnimJoint890.center = [0.1815,-0.1054,0.5947]
HAnimJoint890.ulimit = [0,0,0]
HAnimJoint890.llimit = [0,0,0]
HAnimSegment891 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3")
HAnimSegment891.name = "SEGMENT_FOR_l_carpal_middle_phalanx_3"
TouchSensor892 = x3d.TouchSensor()
TouchSensor892.description = "joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3"

HAnimSegment891.children.append(TouchSensor892)
Transform893 = x3d.Transform()
Transform893.translation = [0.1815,-0.1054,0.5947]
Shape894 = x3d.Shape(USE="JointShape")

Transform893.children.append(Shape894)

HAnimSegment891.children.append(Transform893)
HAnimSite895 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3_tip")
HAnimSite895.name = "SEGMENT_FOR_l_carpal_middle_phalanx_3_tip"
Transform896 = x3d.Transform()
Transform896.translation = [0.1815,-0.1054,0.5947]
Shape897 = x3d.Shape(USE="SiteShape")

Transform896.children.append(Shape897)

HAnimSite895.children.append(Transform896)

HAnimSegment891.children.append(HAnimSite895)

HAnimJoint890.children.append(HAnimSegment891)
HAnimJoint898 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_phalanx_3")
HAnimJoint898.name = "l_carpal_distal_phalanx_3"
HAnimJoint898.center = [0.1805,-0.1056,0.5668]
HAnimJoint898.ulimit = [0,0,0]
HAnimJoint898.llimit = [0,0,0]
HAnimSegment899 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3")
HAnimSegment899.name = "SEGMENT_FOR_l_carpal_distal_phalanx_3"
TouchSensor900 = x3d.TouchSensor()
TouchSensor900.description = "joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3"

HAnimSegment899.children.append(TouchSensor900)
Transform901 = x3d.Transform()
Transform901.translation = [0.1805,-0.1056,0.5668]
Shape902 = x3d.Shape(USE="JointShape")

Transform901.children.append(Shape902)

HAnimSegment899.children.append(Transform901)
HAnimSite903 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3_tip")
HAnimSite903.name = "SEGMENT_FOR_l_carpal_distal_phalanx_3_tip"
Transform904 = x3d.Transform()
Transform904.translation = [0.1805,-0.1056,0.5668]
Shape905 = x3d.Shape(USE="SiteShape")

Transform904.children.append(Shape905)

HAnimSite903.children.append(Transform904)

HAnimSegment899.children.append(HAnimSite903)

HAnimJoint898.children.append(HAnimSegment899)

HAnimJoint890.children.append(HAnimJoint898)

HAnimJoint882.children.append(HAnimJoint890)

HAnimJoint874.children.append(HAnimJoint882)

HAnimJoint866.children.append(HAnimJoint874)

HAnimJoint786.children.append(HAnimJoint866)
HAnimJoint906 = x3d.HAnimJoint(DEF="hanim_l_hamate")
HAnimJoint906.name = "l_hamate"
HAnimJoint906.center = [0.1809,-0.1276,0.6973]
HAnimJoint906.ulimit = [0,0,0]
HAnimJoint906.llimit = [0,0,0]
HAnimSegment907 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_hamate")
HAnimSegment907.name = "SEGMENT_FOR_l_hamate"
TouchSensor908 = x3d.TouchSensor()
TouchSensor908.description = "joint l_hamate segment SEGMENT_FOR_l_hamate"

HAnimSegment907.children.append(TouchSensor908)
Transform909 = x3d.Transform()
Transform909.translation = [0.1809,-0.1276,0.6973]
Shape910 = x3d.Shape(USE="JointShape")

Transform909.children.append(Shape910)

HAnimSegment907.children.append(Transform909)
HAnimSite911 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_hamate_tip")
HAnimSite911.name = "SEGMENT_FOR_l_hamate_tip"
Transform912 = x3d.Transform()
Transform912.translation = [0.1809,-0.1276,0.6973]
Shape913 = x3d.Shape(USE="SiteShape")

Transform912.children.append(Shape913)

HAnimSite911.children.append(Transform912)

HAnimSegment907.children.append(HAnimSite911)

HAnimJoint906.children.append(HAnimSegment907)
HAnimJoint914 = x3d.HAnimJoint(DEF="hanim_l_metacarpal_4")
HAnimJoint914.name = "l_metacarpal_4"
HAnimJoint914.center = [0.1809,-0.1218,0.6777]
HAnimJoint914.ulimit = [0,0,0]
HAnimJoint914.llimit = [0,0,0]
HAnimSegment915 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metacarpal_4")
HAnimSegment915.name = "SEGMENT_FOR_l_metacarpal_4"
TouchSensor916 = x3d.TouchSensor()
TouchSensor916.description = "joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4"

HAnimSegment915.children.append(TouchSensor916)
Transform917 = x3d.Transform()
Transform917.translation = [0.1809,-0.1218,0.6777]
Shape918 = x3d.Shape(USE="JointShape")

Transform917.children.append(Shape918)

HAnimSegment915.children.append(Transform917)
HAnimSite919 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metacarpal_4_tip")
HAnimSite919.name = "SEGMENT_FOR_l_metacarpal_4_tip"
Transform920 = x3d.Transform()
Transform920.translation = [0.1809,-0.1218,0.6777]
Shape921 = x3d.Shape(USE="SiteShape")

Transform920.children.append(Shape921)

HAnimSite919.children.append(Transform920)

HAnimSegment915.children.append(HAnimSite919)

HAnimJoint914.children.append(HAnimSegment915)
HAnimJoint922 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_phalanx_4")
HAnimJoint922.name = "l_carpal_proximal_phalanx_4"
HAnimJoint922.center = [0.1835,-0.1233,0.6255]
HAnimJoint922.ulimit = [0,0,0]
HAnimJoint922.llimit = [0,0,0]
HAnimSegment923 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4")
HAnimSegment923.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_4"
TouchSensor924 = x3d.TouchSensor()
TouchSensor924.description = "joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4"

HAnimSegment923.children.append(TouchSensor924)
Transform925 = x3d.Transform()
Transform925.translation = [0.1835,-0.1233,0.6255]
Shape926 = x3d.Shape(USE="JointShape")

Transform925.children.append(Shape926)

HAnimSegment923.children.append(Transform925)
HAnimSite927 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip")
HAnimSite927.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip"
Transform928 = x3d.Transform()
Transform928.translation = [0.1835,-0.1233,0.6255]
Shape929 = x3d.Shape(USE="SiteShape")

Transform928.children.append(Shape929)

HAnimSite927.children.append(Transform928)

HAnimSegment923.children.append(HAnimSite927)

HAnimJoint922.children.append(HAnimSegment923)
HAnimJoint930 = x3d.HAnimJoint(DEF="hanim_l_carpal_middle_phalanx_4")
HAnimJoint930.name = "l_carpal_middle_phalanx_4"
HAnimJoint930.center = [0.1815,-0.1225,0.598]
HAnimJoint930.ulimit = [0,0,0]
HAnimJoint930.llimit = [0,0,0]
HAnimSegment931 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4")
HAnimSegment931.name = "SEGMENT_FOR_l_carpal_middle_phalanx_4"
TouchSensor932 = x3d.TouchSensor()
TouchSensor932.description = "joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4"

HAnimSegment931.children.append(TouchSensor932)
Transform933 = x3d.Transform()
Transform933.translation = [0.1815,-0.1225,0.598]
Shape934 = x3d.Shape(USE="JointShape")

Transform933.children.append(Shape934)

HAnimSegment931.children.append(Transform933)
HAnimSite935 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4_tip")
HAnimSite935.name = "SEGMENT_FOR_l_carpal_middle_phalanx_4_tip"
Transform936 = x3d.Transform()
Transform936.translation = [0.1815,-0.1225,0.598]
Shape937 = x3d.Shape(USE="SiteShape")

Transform936.children.append(Shape937)

HAnimSite935.children.append(Transform936)

HAnimSegment931.children.append(HAnimSite935)

HAnimJoint930.children.append(HAnimSegment931)
HAnimJoint938 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_phalanx_4")
HAnimJoint938.name = "l_carpal_distal_phalanx_4"
HAnimJoint938.center = [0.1805,-0.1217,0.5722]
HAnimJoint938.ulimit = [0,0,0]
HAnimJoint938.llimit = [0,0,0]
HAnimSegment939 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4")
HAnimSegment939.name = "SEGMENT_FOR_l_carpal_distal_phalanx_4"
TouchSensor940 = x3d.TouchSensor()
TouchSensor940.description = "joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4"

HAnimSegment939.children.append(TouchSensor940)
Transform941 = x3d.Transform()
Transform941.translation = [0.1805,-0.1217,0.5722]
Shape942 = x3d.Shape(USE="JointShape")

Transform941.children.append(Shape942)

HAnimSegment939.children.append(Transform941)
HAnimSite943 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4_tip")
HAnimSite943.name = "SEGMENT_FOR_l_carpal_distal_phalanx_4_tip"
Transform944 = x3d.Transform()
Transform944.translation = [0.1805,-0.1217,0.5722]
Shape945 = x3d.Shape(USE="SiteShape")

Transform944.children.append(Shape945)

HAnimSite943.children.append(Transform944)

HAnimSegment939.children.append(HAnimSite943)

HAnimJoint938.children.append(HAnimSegment939)

HAnimJoint930.children.append(HAnimJoint938)

HAnimJoint922.children.append(HAnimJoint930)

HAnimJoint914.children.append(HAnimJoint922)

HAnimJoint906.children.append(HAnimJoint914)
HAnimJoint946 = x3d.HAnimJoint(DEF="hanim_l_metacarpal_5")
HAnimJoint946.name = "l_metacarpal_5"
HAnimJoint946.center = [0.1815,-0.1347,0.6797]
HAnimJoint946.ulimit = [0,0,0]
HAnimJoint946.llimit = [0,0,0]
HAnimSegment947 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metacarpal_5")
HAnimSegment947.name = "SEGMENT_FOR_l_metacarpal_5"
TouchSensor948 = x3d.TouchSensor()
TouchSensor948.description = "joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5"

HAnimSegment947.children.append(TouchSensor948)
Transform949 = x3d.Transform()
Transform949.translation = [0.1815,-0.1347,0.6797]
Shape950 = x3d.Shape(USE="JointShape")

Transform949.children.append(Shape950)

HAnimSegment947.children.append(Transform949)
HAnimSite951 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metacarpal_5_tip")
HAnimSite951.name = "SEGMENT_FOR_l_metacarpal_5_tip"
Transform952 = x3d.Transform()
Transform952.translation = [0.1815,-0.1347,0.6797]
Shape953 = x3d.Shape(USE="SiteShape")

Transform952.children.append(Shape953)

HAnimSite951.children.append(Transform952)

HAnimSegment947.children.append(HAnimSite951)

HAnimJoint946.children.append(HAnimSegment947)
HAnimJoint954 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_phalanx_5")
HAnimJoint954.name = "l_carpal_proximal_phalanx_5"
HAnimJoint954.center = [0.1832,-0.1389,0.6295]
HAnimJoint954.ulimit = [0,0,0]
HAnimJoint954.llimit = [0,0,0]
HAnimSegment955 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5")
HAnimSegment955.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_5"
TouchSensor956 = x3d.TouchSensor()
TouchSensor956.description = "joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5"

HAnimSegment955.children.append(TouchSensor956)
Transform957 = x3d.Transform()
Transform957.translation = [0.1832,-0.1389,0.6295]
Shape958 = x3d.Shape(USE="JointShape")

Transform957.children.append(Shape958)

HAnimSegment955.children.append(Transform957)
HAnimSite959 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip")
HAnimSite959.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip"
Transform960 = x3d.Transform()
Transform960.translation = [0.1832,-0.1389,0.6295]
Shape961 = x3d.Shape(USE="SiteShape")

Transform960.children.append(Shape961)

HAnimSite959.children.append(Transform960)

HAnimSegment955.children.append(HAnimSite959)

HAnimJoint954.children.append(HAnimSegment955)
HAnimJoint962 = x3d.HAnimJoint(DEF="hanim_l_carpal_middle_phalanx_5")
HAnimJoint962.name = "l_carpal_middle_phalanx_5"
HAnimJoint962.center = [0.1815,-0.139,0.6124]
HAnimJoint962.ulimit = [0,0,0]
HAnimJoint962.llimit = [0,0,0]
HAnimSegment963 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5")
HAnimSegment963.name = "SEGMENT_FOR_l_carpal_middle_phalanx_5"
TouchSensor964 = x3d.TouchSensor()
TouchSensor964.description = "joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5"

HAnimSegment963.children.append(TouchSensor964)
Transform965 = x3d.Transform()
Transform965.translation = [0.1815,-0.139,0.6124]
Shape966 = x3d.Shape(USE="JointShape")

Transform965.children.append(Shape966)

HAnimSegment963.children.append(Transform965)
HAnimSite967 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5_tip")
HAnimSite967.name = "SEGMENT_FOR_l_carpal_middle_phalanx_5_tip"
Transform968 = x3d.Transform()
Transform968.translation = [0.1815,-0.139,0.6124]
Shape969 = x3d.Shape(USE="SiteShape")

Transform968.children.append(Shape969)

HAnimSite967.children.append(Transform968)

HAnimSegment963.children.append(HAnimSite967)

HAnimJoint962.children.append(HAnimSegment963)
HAnimJoint970 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_phalanx_5")
HAnimJoint970.name = "l_carpal_distal_phalanx_5"
HAnimJoint970.center = [0.1806,-0.1388,0.5938]
HAnimJoint970.ulimit = [0,0,0]
HAnimJoint970.llimit = [0,0,0]
HAnimSegment971 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5")
HAnimSegment971.name = "SEGMENT_FOR_l_carpal_distal_phalanx_5"
TouchSensor972 = x3d.TouchSensor()
TouchSensor972.description = "joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5"

HAnimSegment971.children.append(TouchSensor972)
Transform973 = x3d.Transform()
Transform973.translation = [0.1806,-0.1388,0.5938]
Shape974 = x3d.Shape(USE="JointShape")

Transform973.children.append(Shape974)

HAnimSegment971.children.append(Transform973)
HAnimSite975 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5_tip")
HAnimSite975.name = "SEGMENT_FOR_l_carpal_distal_phalanx_5_tip"
Transform976 = x3d.Transform()
Transform976.translation = [0.1806,-0.1388,0.5938]
Shape977 = x3d.Shape(USE="SiteShape")

Transform976.children.append(Shape977)

HAnimSite975.children.append(Transform976)

HAnimSegment971.children.append(HAnimSite975)

HAnimJoint970.children.append(HAnimSegment971)

HAnimJoint962.children.append(HAnimJoint970)

HAnimJoint954.children.append(HAnimJoint962)

HAnimJoint946.children.append(HAnimJoint954)

HAnimJoint906.children.append(HAnimJoint946)

HAnimJoint786.children.append(HAnimJoint906)

HAnimJoint778.children.append(HAnimJoint786)

HAnimJoint770.children.append(HAnimJoint778)

HAnimJoint762.children.append(HAnimJoint770)

HAnimJoint754.children.append(HAnimJoint762)

HAnimJoint626.children.append(HAnimJoint754)
HAnimJoint978 = x3d.HAnimJoint(DEF="hanim_r_clavicle")
HAnimJoint978.name = "r_clavicle"
HAnimJoint978.center = [-0.1231,-0.1148,1.1833]
HAnimJoint978.ulimit = [0,0,0]
HAnimJoint978.llimit = [0,0,0]
HAnimSegment979 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_clavicle")
HAnimSegment979.name = "SEGMENT_FOR_r_clavicle"
TouchSensor980 = x3d.TouchSensor()
TouchSensor980.description = "joint r_clavicle segment SEGMENT_FOR_r_clavicle"

HAnimSegment979.children.append(TouchSensor980)
Transform981 = x3d.Transform()
Transform981.translation = [-0.1231,-0.1148,1.1833]
Shape982 = x3d.Shape(USE="JointShape")

Transform981.children.append(Shape982)

HAnimSegment979.children.append(Transform981)
HAnimSite983 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_clavicle_tip")
HAnimSite983.name = "SEGMENT_FOR_r_clavicle_tip"
Transform984 = x3d.Transform()
Transform984.translation = [-0.1231,-0.1148,1.1833]
Shape985 = x3d.Shape(USE="SiteShape")

Transform984.children.append(Shape985)

HAnimSite983.children.append(Transform984)

HAnimSegment979.children.append(HAnimSite983)

HAnimJoint978.children.append(HAnimSegment979)
HAnimJoint986 = x3d.HAnimJoint(DEF="hanim_r_scapula")
HAnimJoint986.name = "r_scapula"
HAnimJoint986.center = [-0.0387,-0.1157,1.2001]
HAnimJoint986.ulimit = [0,0,0]
HAnimJoint986.llimit = [0,0,0]
HAnimSegment987 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_scapula")
HAnimSegment987.name = "SEGMENT_FOR_r_scapula"
TouchSensor988 = x3d.TouchSensor()
TouchSensor988.description = "joint r_scapula segment SEGMENT_FOR_r_scapula"

HAnimSegment987.children.append(TouchSensor988)
Transform989 = x3d.Transform()
Transform989.translation = [-0.0387,-0.1157,1.2001]
Shape990 = x3d.Shape(USE="JointShape")

Transform989.children.append(Shape990)

HAnimSegment987.children.append(Transform989)
HAnimSite991 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_scapula_tip")
HAnimSite991.name = "SEGMENT_FOR_r_scapula_tip"
Transform992 = x3d.Transform()
Transform992.translation = [-0.0387,-0.1157,1.2001]
Shape993 = x3d.Shape(USE="SiteShape")

Transform992.children.append(Shape993)

HAnimSite991.children.append(Transform992)

HAnimSegment987.children.append(HAnimSite991)

HAnimJoint986.children.append(HAnimSegment987)
HAnimJoint994 = x3d.HAnimJoint(DEF="hanim_r_upperarm")
HAnimJoint994.name = "r_upperarm"
HAnimJoint994.center = [-0.1649,-0.1051,1.17]
HAnimJoint994.ulimit = [0,0,0]
HAnimJoint994.llimit = [0,0,0]
HAnimSegment995 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_upperarm")
HAnimSegment995.name = "SEGMENT_FOR_r_upperarm"
TouchSensor996 = x3d.TouchSensor()
TouchSensor996.description = "joint r_upperarm segment SEGMENT_FOR_r_upperarm"

HAnimSegment995.children.append(TouchSensor996)
Transform997 = x3d.Transform()
Transform997.translation = [-0.1649,-0.1051,1.17]
Shape998 = x3d.Shape(USE="JointShape")

Transform997.children.append(Shape998)

HAnimSegment995.children.append(Transform997)
HAnimSite999 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_upperarm_tip")
HAnimSite999.name = "SEGMENT_FOR_r_upperarm_tip"
Transform1000 = x3d.Transform()
Transform1000.translation = [-0.1649,-0.1051,1.17]
Shape1001 = x3d.Shape(USE="SiteShape")

Transform1000.children.append(Shape1001)

HAnimSite999.children.append(Transform1000)

HAnimSegment995.children.append(HAnimSite999)

HAnimJoint994.children.append(HAnimSegment995)
HAnimJoint1002 = x3d.HAnimJoint(DEF="hanim_r_forearm")
HAnimJoint1002.name = "r_forearm"
HAnimJoint1002.center = [-0.1819,-0.1075,0.9202]
HAnimJoint1002.ulimit = [0,0,0]
HAnimJoint1002.llimit = [0,0,0]
HAnimSegment1003 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_forearm")
HAnimSegment1003.name = "SEGMENT_FOR_r_forearm"
TouchSensor1004 = x3d.TouchSensor()
TouchSensor1004.description = "joint r_forearm segment SEGMENT_FOR_r_forearm"

HAnimSegment1003.children.append(TouchSensor1004)
Transform1005 = x3d.Transform()
Transform1005.translation = [-0.1819,-0.1075,0.9202]
Shape1006 = x3d.Shape(USE="JointShape")

Transform1005.children.append(Shape1006)

HAnimSegment1003.children.append(Transform1005)
HAnimSite1007 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_forearm_tip")
HAnimSite1007.name = "SEGMENT_FOR_r_forearm_tip"
Transform1008 = x3d.Transform()
Transform1008.translation = [-0.1819,-0.1075,0.9202]
Shape1009 = x3d.Shape(USE="SiteShape")

Transform1008.children.append(Shape1009)

HAnimSite1007.children.append(Transform1008)

HAnimSegment1003.children.append(HAnimSite1007)

HAnimJoint1002.children.append(HAnimSegment1003)
HAnimJoint1010 = x3d.HAnimJoint(DEF="hanim_r_carpal")
HAnimJoint1010.name = "r_carpal"
HAnimJoint1010.center = [-0.1818,-0.1069,0.7157]
HAnimJoint1010.ulimit = [0,0,0]
HAnimJoint1010.llimit = [0,0,0]
HAnimSegment1011 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal")
HAnimSegment1011.name = "SEGMENT_FOR_r_carpal"
TouchSensor1012 = x3d.TouchSensor()
TouchSensor1012.description = "joint r_carpal segment SEGMENT_FOR_r_carpal"

HAnimSegment1011.children.append(TouchSensor1012)
Transform1013 = x3d.Transform()
Transform1013.translation = [-0.1818,-0.1069,0.7157]
Shape1014 = x3d.Shape(USE="JointShape")

Transform1013.children.append(Shape1014)

HAnimSegment1011.children.append(Transform1013)
HAnimSite1015 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_tip")
HAnimSite1015.name = "SEGMENT_FOR_r_carpal_tip"
Transform1016 = x3d.Transform()
Transform1016.translation = [-0.1818,-0.1069,0.7157]
Shape1017 = x3d.Shape(USE="SiteShape")

Transform1016.children.append(Shape1017)

HAnimSite1015.children.append(Transform1016)

HAnimSegment1011.children.append(HAnimSite1015)

HAnimJoint1010.children.append(HAnimSegment1011)
HAnimJoint1018 = x3d.HAnimJoint(DEF="hanim_r_trapezium")
HAnimJoint1018.name = "r_trapezium"
HAnimJoint1018.center = [-0.1811,-0.0826,0.6975]
HAnimJoint1018.ulimit = [0,0,0]
HAnimJoint1018.llimit = [0,0,0]
HAnimSegment1019 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_trapezium")
HAnimSegment1019.name = "SEGMENT_FOR_r_trapezium"
TouchSensor1020 = x3d.TouchSensor()
TouchSensor1020.description = "joint r_trapezium segment SEGMENT_FOR_r_trapezium"

HAnimSegment1019.children.append(TouchSensor1020)
Transform1021 = x3d.Transform()
Transform1021.translation = [-0.1811,-0.0826,0.6975]
Shape1022 = x3d.Shape(USE="JointShape")

Transform1021.children.append(Shape1022)

HAnimSegment1019.children.append(Transform1021)
HAnimSite1023 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_trapezium_tip")
HAnimSite1023.name = "SEGMENT_FOR_r_trapezium_tip"
Transform1024 = x3d.Transform()
Transform1024.translation = [-0.1811,-0.0826,0.6975]
Shape1025 = x3d.Shape(USE="SiteShape")

Transform1024.children.append(Shape1025)

HAnimSite1023.children.append(Transform1024)

HAnimSegment1019.children.append(HAnimSite1023)

HAnimJoint1018.children.append(HAnimSegment1019)
HAnimJoint1026 = x3d.HAnimJoint(DEF="hanim_r_metacarpal_1")
HAnimJoint1026.name = "r_metacarpal_1"
HAnimJoint1026.center = [-0.1803,-0.0759,0.684]
HAnimJoint1026.ulimit = [0,0,0]
HAnimJoint1026.llimit = [0,0,0]
HAnimSegment1027 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metacarpal_1")
HAnimSegment1027.name = "SEGMENT_FOR_r_metacarpal_1"
TouchSensor1028 = x3d.TouchSensor()
TouchSensor1028.description = "joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1"

HAnimSegment1027.children.append(TouchSensor1028)
Transform1029 = x3d.Transform()
Transform1029.translation = [-0.1803,-0.0759,0.684]
Shape1030 = x3d.Shape(USE="JointShape")

Transform1029.children.append(Shape1030)

HAnimSegment1027.children.append(Transform1029)
HAnimSite1031 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metacarpal_1_tip")
HAnimSite1031.name = "SEGMENT_FOR_r_metacarpal_1_tip"
Transform1032 = x3d.Transform()
Transform1032.translation = [-0.1803,-0.0759,0.684]
Shape1033 = x3d.Shape(USE="SiteShape")

Transform1032.children.append(Shape1033)

HAnimSite1031.children.append(Transform1032)

HAnimSegment1027.children.append(HAnimSite1031)

HAnimJoint1026.children.append(HAnimSegment1027)
HAnimJoint1034 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_phalanx_1")
HAnimJoint1034.name = "r_carpal_proximal_phalanx_1"
HAnimJoint1034.center = [-0.1808,-0.0661,0.6642]
HAnimJoint1034.ulimit = [0,0,0]
HAnimJoint1034.llimit = [0,0,0]
HAnimSegment1035 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1")
HAnimSegment1035.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_1"
TouchSensor1036 = x3d.TouchSensor()
TouchSensor1036.description = "joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1"

HAnimSegment1035.children.append(TouchSensor1036)
Transform1037 = x3d.Transform()
Transform1037.translation = [-0.1808,-0.0661,0.6642]
Shape1038 = x3d.Shape(USE="JointShape")

Transform1037.children.append(Shape1038)

HAnimSegment1035.children.append(Transform1037)
HAnimSite1039 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip")
HAnimSite1039.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip"
Transform1040 = x3d.Transform()
Transform1040.translation = [-0.1808,-0.0661,0.6642]
Shape1041 = x3d.Shape(USE="SiteShape")

Transform1040.children.append(Shape1041)

HAnimSite1039.children.append(Transform1040)

HAnimSegment1035.children.append(HAnimSite1039)

HAnimJoint1034.children.append(HAnimSegment1035)
HAnimJoint1042 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_phalanx_1")
HAnimJoint1042.name = "r_carpal_distal_phalanx_1"
HAnimJoint1042.center = [-0.1825,-0.0522,0.6455]
HAnimJoint1042.ulimit = [0,0,0]
HAnimJoint1042.llimit = [0,0,0]
HAnimSegment1043 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1")
HAnimSegment1043.name = "SEGMENT_FOR_r_carpal_distal_phalanx_1"
TouchSensor1044 = x3d.TouchSensor()
TouchSensor1044.description = "joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1"

HAnimSegment1043.children.append(TouchSensor1044)
Transform1045 = x3d.Transform()
Transform1045.translation = [-0.1825,-0.0522,0.6455]
Shape1046 = x3d.Shape(USE="JointShape")

Transform1045.children.append(Shape1046)

HAnimSegment1043.children.append(Transform1045)
HAnimSite1047 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1_tip")
HAnimSite1047.name = "SEGMENT_FOR_r_carpal_distal_phalanx_1_tip"
Transform1048 = x3d.Transform()
Transform1048.translation = [-0.1825,-0.0522,0.6455]
Shape1049 = x3d.Shape(USE="SiteShape")

Transform1048.children.append(Shape1049)

HAnimSite1047.children.append(Transform1048)

HAnimSegment1043.children.append(HAnimSite1047)

HAnimJoint1042.children.append(HAnimSegment1043)

HAnimJoint1034.children.append(HAnimJoint1042)

HAnimJoint1026.children.append(HAnimJoint1034)

HAnimJoint1018.children.append(HAnimJoint1026)

HAnimJoint1010.children.append(HAnimJoint1018)
HAnimJoint1050 = x3d.HAnimJoint(DEF="hanim_r_trapezoid")
HAnimJoint1050.name = "r_trapezoid"
HAnimJoint1050.center = [-0.1811,-0.0935,0.6984]
HAnimJoint1050.ulimit = [0,0,0]
HAnimJoint1050.llimit = [0,0,0]
HAnimSegment1051 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_trapezoid")
HAnimSegment1051.name = "SEGMENT_FOR_r_trapezoid"
TouchSensor1052 = x3d.TouchSensor()
TouchSensor1052.description = "joint r_trapezoid segment SEGMENT_FOR_r_trapezoid"

HAnimSegment1051.children.append(TouchSensor1052)
Transform1053 = x3d.Transform()
Transform1053.translation = [-0.1811,-0.0935,0.6984]
Shape1054 = x3d.Shape(USE="JointShape")

Transform1053.children.append(Shape1054)

HAnimSegment1051.children.append(Transform1053)
HAnimSite1055 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_trapezoid_tip")
HAnimSite1055.name = "SEGMENT_FOR_r_trapezoid_tip"
Transform1056 = x3d.Transform()
Transform1056.translation = [-0.1811,-0.0935,0.6984]
Shape1057 = x3d.Shape(USE="SiteShape")

Transform1056.children.append(Shape1057)

HAnimSite1055.children.append(Transform1056)

HAnimSegment1051.children.append(HAnimSite1055)

HAnimJoint1050.children.append(HAnimSegment1051)
HAnimJoint1058 = x3d.HAnimJoint(DEF="hanim_r_metacarpal_2")
HAnimJoint1058.name = "r_metacarpal_2"
HAnimJoint1058.center = [-0.1811,-0.0922,0.679]
HAnimJoint1058.ulimit = [0,0,0]
HAnimJoint1058.llimit = [0,0,0]
HAnimSegment1059 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metacarpal_2")
HAnimSegment1059.name = "SEGMENT_FOR_r_metacarpal_2"
TouchSensor1060 = x3d.TouchSensor()
TouchSensor1060.description = "joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2"

HAnimSegment1059.children.append(TouchSensor1060)
Transform1061 = x3d.Transform()
Transform1061.translation = [-0.1811,-0.0922,0.679]
Shape1062 = x3d.Shape(USE="JointShape")

Transform1061.children.append(Shape1062)

HAnimSegment1059.children.append(Transform1061)
HAnimSite1063 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metacarpal_2_tip")
HAnimSite1063.name = "SEGMENT_FOR_r_metacarpal_2_tip"
Transform1064 = x3d.Transform()
Transform1064.translation = [-0.1811,-0.0922,0.679]
Shape1065 = x3d.Shape(USE="SiteShape")

Transform1064.children.append(Shape1065)

HAnimSite1063.children.append(Transform1064)

HAnimSegment1059.children.append(HAnimSite1063)

HAnimJoint1058.children.append(HAnimSegment1059)
HAnimJoint1066 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_phalanx_2")
HAnimJoint1066.name = "r_carpal_proximal_phalanx_2"
HAnimJoint1066.center = [-0.1835,-0.0868,0.6286]
HAnimJoint1066.ulimit = [0,0,0]
HAnimJoint1066.llimit = [0,0,0]
HAnimSegment1067 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2")
HAnimSegment1067.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_2"
TouchSensor1068 = x3d.TouchSensor()
TouchSensor1068.description = "joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2"

HAnimSegment1067.children.append(TouchSensor1068)
Transform1069 = x3d.Transform()
Transform1069.translation = [-0.1835,-0.0868,0.6286]
Shape1070 = x3d.Shape(USE="JointShape")

Transform1069.children.append(Shape1070)

HAnimSegment1067.children.append(Transform1069)
HAnimSite1071 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip")
HAnimSite1071.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip"
Transform1072 = x3d.Transform()
Transform1072.translation = [-0.1835,-0.0868,0.6286]
Shape1073 = x3d.Shape(USE="SiteShape")

Transform1072.children.append(Shape1073)

HAnimSite1071.children.append(Transform1072)

HAnimSegment1067.children.append(HAnimSite1071)

HAnimJoint1066.children.append(HAnimSegment1067)
HAnimJoint1074 = x3d.HAnimJoint(DEF="hanim_r_carpal_middle_phalanx_2")
HAnimJoint1074.name = "r_carpal_middle_phalanx_2"
HAnimJoint1074.center = [-0.1815,-0.0877,0.5983]
HAnimJoint1074.ulimit = [0,0,0]
HAnimJoint1074.llimit = [0,0,0]
HAnimSegment1075 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2")
HAnimSegment1075.name = "SEGMENT_FOR_r_carpal_middle_phalanx_2"
TouchSensor1076 = x3d.TouchSensor()
TouchSensor1076.description = "joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2"

HAnimSegment1075.children.append(TouchSensor1076)
Transform1077 = x3d.Transform()
Transform1077.translation = [-0.1815,-0.0877,0.5983]
Shape1078 = x3d.Shape(USE="JointShape")

Transform1077.children.append(Shape1078)

HAnimSegment1075.children.append(Transform1077)
HAnimSite1079 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2_tip")
HAnimSite1079.name = "SEGMENT_FOR_r_carpal_middle_phalanx_2_tip"
Transform1080 = x3d.Transform()
Transform1080.translation = [-0.1815,-0.0877,0.5983]
Shape1081 = x3d.Shape(USE="SiteShape")

Transform1080.children.append(Shape1081)

HAnimSite1079.children.append(Transform1080)

HAnimSegment1075.children.append(HAnimSite1079)

HAnimJoint1074.children.append(HAnimSegment1075)
HAnimJoint1082 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_phalanx_2")
HAnimJoint1082.name = "r_carpal_distal_phalanx_2"
HAnimJoint1082.center = [-0.1805,-0.0885,0.5731]
HAnimJoint1082.ulimit = [0,0,0]
HAnimJoint1082.llimit = [0,0,0]
HAnimSegment1083 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2")
HAnimSegment1083.name = "SEGMENT_FOR_r_carpal_distal_phalanx_2"
TouchSensor1084 = x3d.TouchSensor()
TouchSensor1084.description = "joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2"

HAnimSegment1083.children.append(TouchSensor1084)
Transform1085 = x3d.Transform()
Transform1085.translation = [-0.1805,-0.0885,0.5731]
Shape1086 = x3d.Shape(USE="JointShape")

Transform1085.children.append(Shape1086)

HAnimSegment1083.children.append(Transform1085)
HAnimSite1087 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2_tip")
HAnimSite1087.name = "SEGMENT_FOR_r_carpal_distal_phalanx_2_tip"
Transform1088 = x3d.Transform()
Transform1088.translation = [-0.1805,-0.0885,0.5731]
Shape1089 = x3d.Shape(USE="SiteShape")

Transform1088.children.append(Shape1089)

HAnimSite1087.children.append(Transform1088)

HAnimSegment1083.children.append(HAnimSite1087)

HAnimJoint1082.children.append(HAnimSegment1083)

HAnimJoint1074.children.append(HAnimJoint1082)

HAnimJoint1066.children.append(HAnimJoint1074)

HAnimJoint1058.children.append(HAnimJoint1066)

HAnimJoint1050.children.append(HAnimJoint1058)

HAnimJoint1010.children.append(HAnimJoint1050)
HAnimJoint1090 = x3d.HAnimJoint(DEF="hanim_r_capitate")
HAnimJoint1090.name = "r_capitate"
HAnimJoint1090.center = [-0.1809,-0.1067,0.7]
HAnimJoint1090.ulimit = [0,0,0]
HAnimJoint1090.llimit = [0,0,0]
HAnimSegment1091 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_capitate")
HAnimSegment1091.name = "SEGMENT_FOR_r_capitate"
TouchSensor1092 = x3d.TouchSensor()
TouchSensor1092.description = "joint r_capitate segment SEGMENT_FOR_r_capitate"

HAnimSegment1091.children.append(TouchSensor1092)
Transform1093 = x3d.Transform()
Transform1093.translation = [-0.1809,-0.1067,0.7]
Shape1094 = x3d.Shape(USE="JointShape")

Transform1093.children.append(Shape1094)

HAnimSegment1091.children.append(Transform1093)
HAnimSite1095 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_capitate_tip")
HAnimSite1095.name = "SEGMENT_FOR_r_capitate_tip"
Transform1096 = x3d.Transform()
Transform1096.translation = [-0.1809,-0.1067,0.7]
Shape1097 = x3d.Shape(USE="SiteShape")

Transform1096.children.append(Shape1097)

HAnimSite1095.children.append(Transform1096)

HAnimSegment1091.children.append(HAnimSite1095)

HAnimJoint1090.children.append(HAnimSegment1091)
HAnimJoint1098 = x3d.HAnimJoint(DEF="hanim_r_metacarpal_3")
HAnimJoint1098.name = "r_metacarpal_3"
HAnimJoint1098.center = [-0.1809,-0.1081,0.6772]
HAnimJoint1098.ulimit = [0,0,0]
HAnimJoint1098.llimit = [0,0,0]
HAnimSegment1099 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metacarpal_3")
HAnimSegment1099.name = "SEGMENT_FOR_r_metacarpal_3"
TouchSensor1100 = x3d.TouchSensor()
TouchSensor1100.description = "joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3"

HAnimSegment1099.children.append(TouchSensor1100)
Transform1101 = x3d.Transform()
Transform1101.translation = [-0.1809,-0.1081,0.6772]
Shape1102 = x3d.Shape(USE="JointShape")

Transform1101.children.append(Shape1102)

HAnimSegment1099.children.append(Transform1101)
HAnimSite1103 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metacarpal_3_tip")
HAnimSite1103.name = "SEGMENT_FOR_r_metacarpal_3_tip"
Transform1104 = x3d.Transform()
Transform1104.translation = [-0.1809,-0.1081,0.6772]
Shape1105 = x3d.Shape(USE="SiteShape")

Transform1104.children.append(Shape1105)

HAnimSite1103.children.append(Transform1104)

HAnimSegment1099.children.append(HAnimSite1103)

HAnimJoint1098.children.append(HAnimSegment1099)
HAnimJoint1106 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_phalanx_3")
HAnimJoint1106.name = "r_carpal_proximal_phalanx_3"
HAnimJoint1106.center = [-0.1835,-0.1058,0.6264]
HAnimJoint1106.ulimit = [0,0,0]
HAnimJoint1106.llimit = [0,0,0]
HAnimSegment1107 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3")
HAnimSegment1107.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_3"
TouchSensor1108 = x3d.TouchSensor()
TouchSensor1108.description = "joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3"

HAnimSegment1107.children.append(TouchSensor1108)
Transform1109 = x3d.Transform()
Transform1109.translation = [-0.1835,-0.1058,0.6264]
Shape1110 = x3d.Shape(USE="JointShape")

Transform1109.children.append(Shape1110)

HAnimSegment1107.children.append(Transform1109)
HAnimSite1111 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip")
HAnimSite1111.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip"
Transform1112 = x3d.Transform()
Transform1112.translation = [-0.1835,-0.1058,0.6264]
Shape1113 = x3d.Shape(USE="SiteShape")

Transform1112.children.append(Shape1113)

HAnimSite1111.children.append(Transform1112)

HAnimSegment1107.children.append(HAnimSite1111)

HAnimJoint1106.children.append(HAnimSegment1107)
HAnimJoint1114 = x3d.HAnimJoint(DEF="hanim_r_carpal_middle_phalanx_3")
HAnimJoint1114.name = "r_carpal_middle_phalanx_3"
HAnimJoint1114.center = [-0.1815,-0.1054,0.5947]
HAnimJoint1114.ulimit = [0,0,0]
HAnimJoint1114.llimit = [0,0,0]
HAnimSegment1115 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3")
HAnimSegment1115.name = "SEGMENT_FOR_r_carpal_middle_phalanx_3"
TouchSensor1116 = x3d.TouchSensor()
TouchSensor1116.description = "joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3"

HAnimSegment1115.children.append(TouchSensor1116)
Transform1117 = x3d.Transform()
Transform1117.translation = [-0.1815,-0.1054,0.5947]
Shape1118 = x3d.Shape(USE="JointShape")

Transform1117.children.append(Shape1118)

HAnimSegment1115.children.append(Transform1117)
HAnimSite1119 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3_tip")
HAnimSite1119.name = "SEGMENT_FOR_r_carpal_middle_phalanx_3_tip"
Transform1120 = x3d.Transform()
Transform1120.translation = [-0.1815,-0.1054,0.5947]
Shape1121 = x3d.Shape(USE="SiteShape")

Transform1120.children.append(Shape1121)

HAnimSite1119.children.append(Transform1120)

HAnimSegment1115.children.append(HAnimSite1119)

HAnimJoint1114.children.append(HAnimSegment1115)
HAnimJoint1122 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_phalanx_3")
HAnimJoint1122.name = "r_carpal_distal_phalanx_3"
HAnimJoint1122.center = [-0.1805,-0.1056,0.5668]
HAnimJoint1122.ulimit = [0,0,0]
HAnimJoint1122.llimit = [0,0,0]
HAnimSegment1123 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3")
HAnimSegment1123.name = "SEGMENT_FOR_r_carpal_distal_phalanx_3"
TouchSensor1124 = x3d.TouchSensor()
TouchSensor1124.description = "joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3"

HAnimSegment1123.children.append(TouchSensor1124)
Transform1125 = x3d.Transform()
Transform1125.translation = [-0.1805,-0.1056,0.5668]
Shape1126 = x3d.Shape(USE="JointShape")

Transform1125.children.append(Shape1126)

HAnimSegment1123.children.append(Transform1125)
HAnimSite1127 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3_tip")
HAnimSite1127.name = "SEGMENT_FOR_r_carpal_distal_phalanx_3_tip"
Transform1128 = x3d.Transform()
Transform1128.translation = [-0.1805,-0.1056,0.5668]
Shape1129 = x3d.Shape(USE="SiteShape")

Transform1128.children.append(Shape1129)

HAnimSite1127.children.append(Transform1128)

HAnimSegment1123.children.append(HAnimSite1127)

HAnimJoint1122.children.append(HAnimSegment1123)

HAnimJoint1114.children.append(HAnimJoint1122)

HAnimJoint1106.children.append(HAnimJoint1114)

HAnimJoint1098.children.append(HAnimJoint1106)

HAnimJoint1090.children.append(HAnimJoint1098)

HAnimJoint1010.children.append(HAnimJoint1090)
HAnimJoint1130 = x3d.HAnimJoint(DEF="hanim_r_hamate")
HAnimJoint1130.name = "r_hamate"
HAnimJoint1130.center = [-0.1809,-0.1276,0.6973]
HAnimJoint1130.ulimit = [0,0,0]
HAnimJoint1130.llimit = [0,0,0]
HAnimSegment1131 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_hamate")
HAnimSegment1131.name = "SEGMENT_FOR_r_hamate"
TouchSensor1132 = x3d.TouchSensor()
TouchSensor1132.description = "joint r_hamate segment SEGMENT_FOR_r_hamate"

HAnimSegment1131.children.append(TouchSensor1132)
Transform1133 = x3d.Transform()
Transform1133.translation = [-0.1809,-0.1276,0.6973]
Shape1134 = x3d.Shape(USE="JointShape")

Transform1133.children.append(Shape1134)

HAnimSegment1131.children.append(Transform1133)
HAnimSite1135 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_hamate_tip")
HAnimSite1135.name = "SEGMENT_FOR_r_hamate_tip"
Transform1136 = x3d.Transform()
Transform1136.translation = [-0.1809,-0.1276,0.6973]
Shape1137 = x3d.Shape(USE="SiteShape")

Transform1136.children.append(Shape1137)

HAnimSite1135.children.append(Transform1136)

HAnimSegment1131.children.append(HAnimSite1135)

HAnimJoint1130.children.append(HAnimSegment1131)
HAnimJoint1138 = x3d.HAnimJoint(DEF="hanim_r_metacarpal_4")
HAnimJoint1138.name = "r_metacarpal_4"
HAnimJoint1138.center = [-0.1809,-0.1218,0.6777]
HAnimJoint1138.ulimit = [0,0,0]
HAnimJoint1138.llimit = [0,0,0]
HAnimSegment1139 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metacarpal_4")
HAnimSegment1139.name = "SEGMENT_FOR_r_metacarpal_4"
TouchSensor1140 = x3d.TouchSensor()
TouchSensor1140.description = "joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4"

HAnimSegment1139.children.append(TouchSensor1140)
Transform1141 = x3d.Transform()
Transform1141.translation = [-0.1809,-0.1218,0.6777]
Shape1142 = x3d.Shape(USE="JointShape")

Transform1141.children.append(Shape1142)

HAnimSegment1139.children.append(Transform1141)
HAnimSite1143 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metacarpal_4_tip")
HAnimSite1143.name = "SEGMENT_FOR_r_metacarpal_4_tip"
Transform1144 = x3d.Transform()
Transform1144.translation = [-0.1809,-0.1218,0.6777]
Shape1145 = x3d.Shape(USE="SiteShape")

Transform1144.children.append(Shape1145)

HAnimSite1143.children.append(Transform1144)

HAnimSegment1139.children.append(HAnimSite1143)

HAnimJoint1138.children.append(HAnimSegment1139)
HAnimJoint1146 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_phalanx_4")
HAnimJoint1146.name = "r_carpal_proximal_phalanx_4"
HAnimJoint1146.center = [-0.1835,-0.1233,0.6255]
HAnimJoint1146.ulimit = [0,0,0]
HAnimJoint1146.llimit = [0,0,0]
HAnimSegment1147 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4")
HAnimSegment1147.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_4"
TouchSensor1148 = x3d.TouchSensor()
TouchSensor1148.description = "joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4"

HAnimSegment1147.children.append(TouchSensor1148)
Transform1149 = x3d.Transform()
Transform1149.translation = [-0.1835,-0.1233,0.6255]
Shape1150 = x3d.Shape(USE="JointShape")

Transform1149.children.append(Shape1150)

HAnimSegment1147.children.append(Transform1149)
HAnimSite1151 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip")
HAnimSite1151.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip"
Transform1152 = x3d.Transform()
Transform1152.translation = [-0.1835,-0.1233,0.6255]
Shape1153 = x3d.Shape(USE="SiteShape")

Transform1152.children.append(Shape1153)

HAnimSite1151.children.append(Transform1152)

HAnimSegment1147.children.append(HAnimSite1151)

HAnimJoint1146.children.append(HAnimSegment1147)
HAnimJoint1154 = x3d.HAnimJoint(DEF="hanim_r_carpal_middle_phalanx_4")
HAnimJoint1154.name = "r_carpal_middle_phalanx_4"
HAnimJoint1154.center = [-0.1815,-0.1225,0.598]
HAnimJoint1154.ulimit = [0,0,0]
HAnimJoint1154.llimit = [0,0,0]
HAnimSegment1155 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4")
HAnimSegment1155.name = "SEGMENT_FOR_r_carpal_middle_phalanx_4"
TouchSensor1156 = x3d.TouchSensor()
TouchSensor1156.description = "joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4"

HAnimSegment1155.children.append(TouchSensor1156)
Transform1157 = x3d.Transform()
Transform1157.translation = [-0.1815,-0.1225,0.598]
Shape1158 = x3d.Shape(USE="JointShape")

Transform1157.children.append(Shape1158)

HAnimSegment1155.children.append(Transform1157)
HAnimSite1159 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4_tip")
HAnimSite1159.name = "SEGMENT_FOR_r_carpal_middle_phalanx_4_tip"
Transform1160 = x3d.Transform()
Transform1160.translation = [-0.1815,-0.1225,0.598]
Shape1161 = x3d.Shape(USE="SiteShape")

Transform1160.children.append(Shape1161)

HAnimSite1159.children.append(Transform1160)

HAnimSegment1155.children.append(HAnimSite1159)

HAnimJoint1154.children.append(HAnimSegment1155)
HAnimJoint1162 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_phalanx_4")
HAnimJoint1162.name = "r_carpal_distal_phalanx_4"
HAnimJoint1162.center = [-0.1805,-0.1217,0.5722]
HAnimJoint1162.ulimit = [0,0,0]
HAnimJoint1162.llimit = [0,0,0]
HAnimSegment1163 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4")
HAnimSegment1163.name = "SEGMENT_FOR_r_carpal_distal_phalanx_4"
TouchSensor1164 = x3d.TouchSensor()
TouchSensor1164.description = "joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4"

HAnimSegment1163.children.append(TouchSensor1164)
Transform1165 = x3d.Transform()
Transform1165.translation = [-0.1805,-0.1217,0.5722]
Shape1166 = x3d.Shape(USE="JointShape")

Transform1165.children.append(Shape1166)

HAnimSegment1163.children.append(Transform1165)
HAnimSite1167 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4_tip")
HAnimSite1167.name = "SEGMENT_FOR_r_carpal_distal_phalanx_4_tip"
Transform1168 = x3d.Transform()
Transform1168.translation = [-0.1805,-0.1217,0.5722]
Shape1169 = x3d.Shape(USE="SiteShape")

Transform1168.children.append(Shape1169)

HAnimSite1167.children.append(Transform1168)

HAnimSegment1163.children.append(HAnimSite1167)

HAnimJoint1162.children.append(HAnimSegment1163)

HAnimJoint1154.children.append(HAnimJoint1162)

HAnimJoint1146.children.append(HAnimJoint1154)

HAnimJoint1138.children.append(HAnimJoint1146)

HAnimJoint1130.children.append(HAnimJoint1138)
HAnimJoint1170 = x3d.HAnimJoint(DEF="hanim_r_metacarpal_5")
HAnimJoint1170.name = "r_metacarpal_5"
HAnimJoint1170.center = [-0.1814,-0.1347,0.6797]
HAnimJoint1170.ulimit = [0,0,0]
HAnimJoint1170.llimit = [0,0,0]
HAnimSegment1171 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metacarpal_5")
HAnimSegment1171.name = "SEGMENT_FOR_r_metacarpal_5"
TouchSensor1172 = x3d.TouchSensor()
TouchSensor1172.description = "joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5"

HAnimSegment1171.children.append(TouchSensor1172)
Transform1173 = x3d.Transform()
Transform1173.translation = [-0.1814,-0.1347,0.6797]
Shape1174 = x3d.Shape(USE="JointShape")

Transform1173.children.append(Shape1174)

HAnimSegment1171.children.append(Transform1173)
HAnimSite1175 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metacarpal_5_tip")
HAnimSite1175.name = "SEGMENT_FOR_r_metacarpal_5_tip"
Transform1176 = x3d.Transform()
Transform1176.translation = [-0.1814,-0.1347,0.6797]
Shape1177 = x3d.Shape(USE="SiteShape")

Transform1176.children.append(Shape1177)

HAnimSite1175.children.append(Transform1176)

HAnimSegment1171.children.append(HAnimSite1175)

HAnimJoint1170.children.append(HAnimSegment1171)
HAnimJoint1178 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_phalanx_5")
HAnimJoint1178.name = "r_carpal_proximal_phalanx_5"
HAnimJoint1178.center = [-0.1832,-0.1389,0.6295]
HAnimJoint1178.ulimit = [0,0,0]
HAnimJoint1178.llimit = [0,0,0]
HAnimSegment1179 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5")
HAnimSegment1179.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_5"
TouchSensor1180 = x3d.TouchSensor()
TouchSensor1180.description = "joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5"

HAnimSegment1179.children.append(TouchSensor1180)
Transform1181 = x3d.Transform()
Transform1181.translation = [-0.1832,-0.1389,0.6295]
Shape1182 = x3d.Shape(USE="JointShape")

Transform1181.children.append(Shape1182)

HAnimSegment1179.children.append(Transform1181)
HAnimSite1183 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip")
HAnimSite1183.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip"
Transform1184 = x3d.Transform()
Transform1184.translation = [-0.1832,-0.1389,0.6295]
Shape1185 = x3d.Shape(USE="SiteShape")

Transform1184.children.append(Shape1185)

HAnimSite1183.children.append(Transform1184)

HAnimSegment1179.children.append(HAnimSite1183)

HAnimJoint1178.children.append(HAnimSegment1179)
HAnimJoint1186 = x3d.HAnimJoint(DEF="hanim_r_carpal_middle_phalanx_5")
HAnimJoint1186.name = "r_carpal_middle_phalanx_5"
HAnimJoint1186.center = [-0.1815,-0.139,0.6124]
HAnimJoint1186.ulimit = [0,0,0]
HAnimJoint1186.llimit = [0,0,0]
HAnimSegment1187 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5")
HAnimSegment1187.name = "SEGMENT_FOR_r_carpal_middle_phalanx_5"
TouchSensor1188 = x3d.TouchSensor()
TouchSensor1188.description = "joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5"

HAnimSegment1187.children.append(TouchSensor1188)
Transform1189 = x3d.Transform()
Transform1189.translation = [-0.1815,-0.139,0.6124]
Shape1190 = x3d.Shape(USE="JointShape")

Transform1189.children.append(Shape1190)

HAnimSegment1187.children.append(Transform1189)
HAnimSite1191 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5_tip")
HAnimSite1191.name = "SEGMENT_FOR_r_carpal_middle_phalanx_5_tip"
Transform1192 = x3d.Transform()
Transform1192.translation = [-0.1815,-0.139,0.6124]
Shape1193 = x3d.Shape(USE="SiteShape")

Transform1192.children.append(Shape1193)

HAnimSite1191.children.append(Transform1192)

HAnimSegment1187.children.append(HAnimSite1191)

HAnimJoint1186.children.append(HAnimSegment1187)
HAnimJoint1194 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_phalanx_5")
HAnimJoint1194.name = "r_carpal_distal_phalanx_5"
HAnimJoint1194.center = [-0.1806,-0.1388,0.5938]
HAnimJoint1194.ulimit = [0,0,0]
HAnimJoint1194.llimit = [0,0,0]
HAnimSegment1195 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5")
HAnimSegment1195.name = "SEGMENT_FOR_r_carpal_distal_phalanx_5"
TouchSensor1196 = x3d.TouchSensor()
TouchSensor1196.description = "joint r_carpal_distal_phalanx_5 segment SEGMENT_FOR_r_carpal_distal_phalanx_5"

HAnimSegment1195.children.append(TouchSensor1196)
Transform1197 = x3d.Transform()
Transform1197.translation = [-0.1806,-0.1388,0.5938]
Shape1198 = x3d.Shape(USE="JointShape")

Transform1197.children.append(Shape1198)

HAnimSegment1195.children.append(Transform1197)
HAnimSite1199 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5_tip")
HAnimSite1199.name = "SEGMENT_FOR_r_carpal_distal_phalanx_5_tip"
Transform1200 = x3d.Transform()
Transform1200.translation = [-0.1806,-0.1388,0.5938]
Shape1201 = x3d.Shape(USE="SiteShape")

Transform1200.children.append(Shape1201)

HAnimSite1199.children.append(Transform1200)

HAnimSegment1195.children.append(HAnimSite1199)

HAnimJoint1194.children.append(HAnimSegment1195)

HAnimJoint1186.children.append(HAnimJoint1194)

HAnimJoint1178.children.append(HAnimJoint1186)

HAnimJoint1170.children.append(HAnimJoint1178)

HAnimJoint1130.children.append(HAnimJoint1170)

HAnimJoint1010.children.append(HAnimJoint1130)

HAnimJoint1002.children.append(HAnimJoint1010)

HAnimJoint994.children.append(HAnimJoint1002)

HAnimJoint986.children.append(HAnimJoint994)

HAnimJoint978.children.append(HAnimJoint986)

HAnimJoint626.children.append(HAnimJoint978)

HAnimJoint618.children.append(HAnimJoint626)

HAnimJoint610.children.append(HAnimJoint618)

HAnimJoint602.children.append(HAnimJoint610)

HAnimJoint594.children.append(HAnimJoint602)

HAnimJoint586.children.append(HAnimJoint594)

HAnimJoint578.children.append(HAnimJoint586)

HAnimJoint570.children.append(HAnimJoint578)

HAnimJoint562.children.append(HAnimJoint570)

HAnimJoint554.children.append(HAnimJoint562)

HAnimJoint546.children.append(HAnimJoint554)

HAnimJoint538.children.append(HAnimJoint546)

HAnimJoint530.children.append(HAnimJoint538)

HAnimJoint522.children.append(HAnimJoint530)

HAnimJoint514.children.append(HAnimJoint522)

HAnimJoint506.children.append(HAnimJoint514)

HAnimJoint498.children.append(HAnimJoint506)

HAnimJoint34.children.append(HAnimJoint498)

HAnimJoint26.children.append(HAnimJoint34)

HAnimHumanoid25.skeleton.append(HAnimJoint26)
HAnimJoint1202 = x3d.HAnimJoint(USE="hanim_sacrum")

HAnimHumanoid25.joints.append(HAnimJoint1202)
HAnimJoint1203 = x3d.HAnimJoint(USE="hanim_pelvis")

HAnimHumanoid25.joints.append(HAnimJoint1203)
HAnimJoint1204 = x3d.HAnimJoint(USE="hanim_l_thigh")

HAnimHumanoid25.joints.append(HAnimJoint1204)
HAnimJoint1205 = x3d.HAnimJoint(USE="hanim_l_calf")

HAnimHumanoid25.joints.append(HAnimJoint1205)
HAnimJoint1206 = x3d.HAnimJoint(USE="hanim_l_talus")

HAnimHumanoid25.joints.append(HAnimJoint1206)
HAnimJoint1207 = x3d.HAnimJoint(USE="hanim_l_navicular")

HAnimHumanoid25.joints.append(HAnimJoint1207)
HAnimJoint1208 = x3d.HAnimJoint(USE="hanim_l_cuneiform_1")

HAnimHumanoid25.joints.append(HAnimJoint1208)
HAnimJoint1209 = x3d.HAnimJoint(USE="hanim_l_metatarsal_1")

HAnimHumanoid25.joints.append(HAnimJoint1209)
HAnimJoint1210 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_phalanx_1")

HAnimHumanoid25.joints.append(HAnimJoint1210)
HAnimJoint1211 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_phalanx_1")

HAnimHumanoid25.joints.append(HAnimJoint1211)
HAnimJoint1212 = x3d.HAnimJoint(USE="hanim_l_cuneiform_2")

HAnimHumanoid25.joints.append(HAnimJoint1212)
HAnimJoint1213 = x3d.HAnimJoint(USE="hanim_l_metatarsal_2")

HAnimHumanoid25.joints.append(HAnimJoint1213)
HAnimJoint1214 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_phalanx_2")

HAnimHumanoid25.joints.append(HAnimJoint1214)
HAnimJoint1215 = x3d.HAnimJoint(USE="hanim_l_tarsal_middle_phalanx_2")

HAnimHumanoid25.joints.append(HAnimJoint1215)
HAnimJoint1216 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_phalanx_2")

HAnimHumanoid25.joints.append(HAnimJoint1216)
HAnimJoint1217 = x3d.HAnimJoint(USE="hanim_l_cuneiform_3")

HAnimHumanoid25.joints.append(HAnimJoint1217)
HAnimJoint1218 = x3d.HAnimJoint(USE="hanim_l_metatarsal_3")

HAnimHumanoid25.joints.append(HAnimJoint1218)
HAnimJoint1219 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_phalanx_3")

HAnimHumanoid25.joints.append(HAnimJoint1219)
HAnimJoint1220 = x3d.HAnimJoint(USE="hanim_l_tarsal_middle_phalanx_3")

HAnimHumanoid25.joints.append(HAnimJoint1220)
HAnimJoint1221 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_phalanx_3")

HAnimHumanoid25.joints.append(HAnimJoint1221)
HAnimJoint1222 = x3d.HAnimJoint(USE="hanim_l_calcaneus")

HAnimHumanoid25.joints.append(HAnimJoint1222)
HAnimJoint1223 = x3d.HAnimJoint(USE="hanim_l_cuboid")

HAnimHumanoid25.joints.append(HAnimJoint1223)
HAnimJoint1224 = x3d.HAnimJoint(USE="hanim_l_metatarsal_4")

HAnimHumanoid25.joints.append(HAnimJoint1224)
HAnimJoint1225 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_phalanx_4")

HAnimHumanoid25.joints.append(HAnimJoint1225)
HAnimJoint1226 = x3d.HAnimJoint(USE="hanim_l_tarsal_middle_phalanx_4")

HAnimHumanoid25.joints.append(HAnimJoint1226)
HAnimJoint1227 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_phalanx_4")

HAnimHumanoid25.joints.append(HAnimJoint1227)
HAnimJoint1228 = x3d.HAnimJoint(USE="hanim_l_metatarsal_5")

HAnimHumanoid25.joints.append(HAnimJoint1228)
HAnimJoint1229 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_phalanx_5")

HAnimHumanoid25.joints.append(HAnimJoint1229)
HAnimJoint1230 = x3d.HAnimJoint(USE="hanim_l_tarsal_middle_phalanx_5")

HAnimHumanoid25.joints.append(HAnimJoint1230)
HAnimJoint1231 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_phalanx_5")

HAnimHumanoid25.joints.append(HAnimJoint1231)
HAnimJoint1232 = x3d.HAnimJoint(USE="hanim_r_thigh")

HAnimHumanoid25.joints.append(HAnimJoint1232)
HAnimJoint1233 = x3d.HAnimJoint(USE="hanim_r_calf")

HAnimHumanoid25.joints.append(HAnimJoint1233)
HAnimJoint1234 = x3d.HAnimJoint(USE="hanim_r_talus")

HAnimHumanoid25.joints.append(HAnimJoint1234)
HAnimJoint1235 = x3d.HAnimJoint(USE="hanim_r_navicular")

HAnimHumanoid25.joints.append(HAnimJoint1235)
HAnimJoint1236 = x3d.HAnimJoint(USE="hanim_r_cuneiform_1")

HAnimHumanoid25.joints.append(HAnimJoint1236)
HAnimJoint1237 = x3d.HAnimJoint(USE="hanim_r_metatarsal_1")

HAnimHumanoid25.joints.append(HAnimJoint1237)
HAnimJoint1238 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_phalanx_1")

HAnimHumanoid25.joints.append(HAnimJoint1238)
HAnimJoint1239 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_phalanx_1")

HAnimHumanoid25.joints.append(HAnimJoint1239)
HAnimJoint1240 = x3d.HAnimJoint(USE="hanim_r_cuneiform_2")

HAnimHumanoid25.joints.append(HAnimJoint1240)
HAnimJoint1241 = x3d.HAnimJoint(USE="hanim_r_metatarsal_2")

HAnimHumanoid25.joints.append(HAnimJoint1241)
HAnimJoint1242 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_phalanx_2")

HAnimHumanoid25.joints.append(HAnimJoint1242)
HAnimJoint1243 = x3d.HAnimJoint(USE="hanim_r_tarsal_middle_phalanx_2")

HAnimHumanoid25.joints.append(HAnimJoint1243)
HAnimJoint1244 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_phalanx_2")

HAnimHumanoid25.joints.append(HAnimJoint1244)
HAnimJoint1245 = x3d.HAnimJoint(USE="hanim_r_cuneiform_3")

HAnimHumanoid25.joints.append(HAnimJoint1245)
HAnimJoint1246 = x3d.HAnimJoint(USE="hanim_r_metatarsal_3")

HAnimHumanoid25.joints.append(HAnimJoint1246)
HAnimJoint1247 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_phalanx_3")

HAnimHumanoid25.joints.append(HAnimJoint1247)
HAnimJoint1248 = x3d.HAnimJoint(USE="hanim_r_tarsal_middle_phalanx_3")

HAnimHumanoid25.joints.append(HAnimJoint1248)
HAnimJoint1249 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_phalanx_3")

HAnimHumanoid25.joints.append(HAnimJoint1249)
HAnimJoint1250 = x3d.HAnimJoint(USE="hanim_r_calcaneus")

HAnimHumanoid25.joints.append(HAnimJoint1250)
HAnimJoint1251 = x3d.HAnimJoint(USE="hanim_r_cuboid")

HAnimHumanoid25.joints.append(HAnimJoint1251)
HAnimJoint1252 = x3d.HAnimJoint(USE="hanim_r_metatarsal_4")

HAnimHumanoid25.joints.append(HAnimJoint1252)
HAnimJoint1253 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_phalanx_4")

HAnimHumanoid25.joints.append(HAnimJoint1253)
HAnimJoint1254 = x3d.HAnimJoint(USE="hanim_r_tarsal_middle_phalanx_4")

HAnimHumanoid25.joints.append(HAnimJoint1254)
HAnimJoint1255 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_phalanx_4")

HAnimHumanoid25.joints.append(HAnimJoint1255)
HAnimJoint1256 = x3d.HAnimJoint(USE="hanim_r_metatarsal_5")

HAnimHumanoid25.joints.append(HAnimJoint1256)
HAnimJoint1257 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_phalanx_5")

HAnimHumanoid25.joints.append(HAnimJoint1257)
HAnimJoint1258 = x3d.HAnimJoint(USE="hanim_r_tarsal_middle_phalanx_5")

HAnimHumanoid25.joints.append(HAnimJoint1258)
HAnimJoint1259 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_phalanx_5")

HAnimHumanoid25.joints.append(HAnimJoint1259)
HAnimJoint1260 = x3d.HAnimJoint(USE="hanim_l5")

HAnimHumanoid25.joints.append(HAnimJoint1260)
HAnimJoint1261 = x3d.HAnimJoint(USE="hanim_l4")

HAnimHumanoid25.joints.append(HAnimJoint1261)
HAnimJoint1262 = x3d.HAnimJoint(USE="hanim_l3")

HAnimHumanoid25.joints.append(HAnimJoint1262)
HAnimJoint1263 = x3d.HAnimJoint(USE="hanim_l2")

HAnimHumanoid25.joints.append(HAnimJoint1263)
HAnimJoint1264 = x3d.HAnimJoint(USE="hanim_l1")

HAnimHumanoid25.joints.append(HAnimJoint1264)
HAnimJoint1265 = x3d.HAnimJoint(USE="hanim_t12")

HAnimHumanoid25.joints.append(HAnimJoint1265)
HAnimJoint1266 = x3d.HAnimJoint(USE="hanim_t11")

HAnimHumanoid25.joints.append(HAnimJoint1266)
HAnimJoint1267 = x3d.HAnimJoint(USE="hanim_t10")

HAnimHumanoid25.joints.append(HAnimJoint1267)
HAnimJoint1268 = x3d.HAnimJoint(USE="hanim_t9")

HAnimHumanoid25.joints.append(HAnimJoint1268)
HAnimJoint1269 = x3d.HAnimJoint(USE="hanim_t8")

HAnimHumanoid25.joints.append(HAnimJoint1269)
HAnimJoint1270 = x3d.HAnimJoint(USE="hanim_t7")

HAnimHumanoid25.joints.append(HAnimJoint1270)
HAnimJoint1271 = x3d.HAnimJoint(USE="hanim_t6")

HAnimHumanoid25.joints.append(HAnimJoint1271)
HAnimJoint1272 = x3d.HAnimJoint(USE="hanim_t5")

HAnimHumanoid25.joints.append(HAnimJoint1272)
HAnimJoint1273 = x3d.HAnimJoint(USE="hanim_t4")

HAnimHumanoid25.joints.append(HAnimJoint1273)
HAnimJoint1274 = x3d.HAnimJoint(USE="hanim_t3")

HAnimHumanoid25.joints.append(HAnimJoint1274)
HAnimJoint1275 = x3d.HAnimJoint(USE="hanim_t2")

HAnimHumanoid25.joints.append(HAnimJoint1275)
HAnimJoint1276 = x3d.HAnimJoint(USE="hanim_t1")

HAnimHumanoid25.joints.append(HAnimJoint1276)
HAnimJoint1277 = x3d.HAnimJoint(USE="hanim_c7")

HAnimHumanoid25.joints.append(HAnimJoint1277)
HAnimJoint1278 = x3d.HAnimJoint(USE="hanim_c6")

HAnimHumanoid25.joints.append(HAnimJoint1278)
HAnimJoint1279 = x3d.HAnimJoint(USE="hanim_c5")

HAnimHumanoid25.joints.append(HAnimJoint1279)
HAnimJoint1280 = x3d.HAnimJoint(USE="hanim_c4")

HAnimHumanoid25.joints.append(HAnimJoint1280)
HAnimJoint1281 = x3d.HAnimJoint(USE="hanim_c3")

HAnimHumanoid25.joints.append(HAnimJoint1281)
HAnimJoint1282 = x3d.HAnimJoint(USE="hanim_c2")

HAnimHumanoid25.joints.append(HAnimJoint1282)
HAnimJoint1283 = x3d.HAnimJoint(USE="hanim_c1")

HAnimHumanoid25.joints.append(HAnimJoint1283)
HAnimJoint1284 = x3d.HAnimJoint(USE="hanim_skull")

HAnimHumanoid25.joints.append(HAnimJoint1284)
HAnimJoint1285 = x3d.HAnimJoint(USE="hanim_l_eyelid")

HAnimHumanoid25.joints.append(HAnimJoint1285)
HAnimJoint1286 = x3d.HAnimJoint(USE="hanim_r_eyelid")

HAnimHumanoid25.joints.append(HAnimJoint1286)
HAnimJoint1287 = x3d.HAnimJoint(USE="hanim_l_eyeball")

HAnimHumanoid25.joints.append(HAnimJoint1287)
HAnimJoint1288 = x3d.HAnimJoint(USE="hanim_r_eyeball")

HAnimHumanoid25.joints.append(HAnimJoint1288)
HAnimJoint1289 = x3d.HAnimJoint(USE="hanim_l_eyebrow")

HAnimHumanoid25.joints.append(HAnimJoint1289)
HAnimJoint1290 = x3d.HAnimJoint(USE="hanim_r_eyebrow")

HAnimHumanoid25.joints.append(HAnimJoint1290)
HAnimJoint1291 = x3d.HAnimJoint(USE="hanim_jaw")

HAnimHumanoid25.joints.append(HAnimJoint1291)
HAnimJoint1292 = x3d.HAnimJoint(USE="hanim_l_clavicle")

HAnimHumanoid25.joints.append(HAnimJoint1292)
HAnimJoint1293 = x3d.HAnimJoint(USE="hanim_l_scapula")

HAnimHumanoid25.joints.append(HAnimJoint1293)
HAnimJoint1294 = x3d.HAnimJoint(USE="hanim_l_upperarm")

HAnimHumanoid25.joints.append(HAnimJoint1294)
HAnimJoint1295 = x3d.HAnimJoint(USE="hanim_l_forearm")

HAnimHumanoid25.joints.append(HAnimJoint1295)
HAnimJoint1296 = x3d.HAnimJoint(USE="hanim_l_carpal")

HAnimHumanoid25.joints.append(HAnimJoint1296)
HAnimJoint1297 = x3d.HAnimJoint(USE="hanim_l_trapezium")

HAnimHumanoid25.joints.append(HAnimJoint1297)
HAnimJoint1298 = x3d.HAnimJoint(USE="hanim_l_metacarpal_1")

HAnimHumanoid25.joints.append(HAnimJoint1298)
HAnimJoint1299 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_phalanx_1")

HAnimHumanoid25.joints.append(HAnimJoint1299)
HAnimJoint1300 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_phalanx_1")

HAnimHumanoid25.joints.append(HAnimJoint1300)
HAnimJoint1301 = x3d.HAnimJoint(USE="hanim_l_trapezoid")

HAnimHumanoid25.joints.append(HAnimJoint1301)
HAnimJoint1302 = x3d.HAnimJoint(USE="hanim_l_metacarpal_2")

HAnimHumanoid25.joints.append(HAnimJoint1302)
HAnimJoint1303 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_phalanx_2")

HAnimHumanoid25.joints.append(HAnimJoint1303)
HAnimJoint1304 = x3d.HAnimJoint(USE="hanim_l_carpal_middle_phalanx_2")

HAnimHumanoid25.joints.append(HAnimJoint1304)
HAnimJoint1305 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_phalanx_2")

HAnimHumanoid25.joints.append(HAnimJoint1305)
HAnimJoint1306 = x3d.HAnimJoint(USE="hanim_l_capitate")

HAnimHumanoid25.joints.append(HAnimJoint1306)
HAnimJoint1307 = x3d.HAnimJoint(USE="hanim_l_metacarpal_3")

HAnimHumanoid25.joints.append(HAnimJoint1307)
HAnimJoint1308 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_phalanx_3")

HAnimHumanoid25.joints.append(HAnimJoint1308)
HAnimJoint1309 = x3d.HAnimJoint(USE="hanim_l_carpal_middle_phalanx_3")

HAnimHumanoid25.joints.append(HAnimJoint1309)
HAnimJoint1310 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_phalanx_3")

HAnimHumanoid25.joints.append(HAnimJoint1310)
HAnimJoint1311 = x3d.HAnimJoint(USE="hanim_l_hamate")

HAnimHumanoid25.joints.append(HAnimJoint1311)
HAnimJoint1312 = x3d.HAnimJoint(USE="hanim_l_metacarpal_4")

HAnimHumanoid25.joints.append(HAnimJoint1312)
HAnimJoint1313 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_phalanx_4")

HAnimHumanoid25.joints.append(HAnimJoint1313)
HAnimJoint1314 = x3d.HAnimJoint(USE="hanim_l_carpal_middle_phalanx_4")

HAnimHumanoid25.joints.append(HAnimJoint1314)
HAnimJoint1315 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_phalanx_4")

HAnimHumanoid25.joints.append(HAnimJoint1315)
HAnimJoint1316 = x3d.HAnimJoint(USE="hanim_l_metacarpal_5")

HAnimHumanoid25.joints.append(HAnimJoint1316)
HAnimJoint1317 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_phalanx_5")

HAnimHumanoid25.joints.append(HAnimJoint1317)
HAnimJoint1318 = x3d.HAnimJoint(USE="hanim_l_carpal_middle_phalanx_5")

HAnimHumanoid25.joints.append(HAnimJoint1318)
HAnimJoint1319 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_phalanx_5")

HAnimHumanoid25.joints.append(HAnimJoint1319)
HAnimJoint1320 = x3d.HAnimJoint(USE="hanim_r_clavicle")

HAnimHumanoid25.joints.append(HAnimJoint1320)
HAnimJoint1321 = x3d.HAnimJoint(USE="hanim_r_scapula")

HAnimHumanoid25.joints.append(HAnimJoint1321)
HAnimJoint1322 = x3d.HAnimJoint(USE="hanim_r_upperarm")

HAnimHumanoid25.joints.append(HAnimJoint1322)
HAnimJoint1323 = x3d.HAnimJoint(USE="hanim_r_forearm")

HAnimHumanoid25.joints.append(HAnimJoint1323)
HAnimJoint1324 = x3d.HAnimJoint(USE="hanim_r_carpal")

HAnimHumanoid25.joints.append(HAnimJoint1324)
HAnimJoint1325 = x3d.HAnimJoint(USE="hanim_r_trapezium")

HAnimHumanoid25.joints.append(HAnimJoint1325)
HAnimJoint1326 = x3d.HAnimJoint(USE="hanim_r_metacarpal_1")

HAnimHumanoid25.joints.append(HAnimJoint1326)
HAnimJoint1327 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_phalanx_1")

HAnimHumanoid25.joints.append(HAnimJoint1327)
HAnimJoint1328 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_phalanx_1")

HAnimHumanoid25.joints.append(HAnimJoint1328)
HAnimJoint1329 = x3d.HAnimJoint(USE="hanim_r_trapezoid")

HAnimHumanoid25.joints.append(HAnimJoint1329)
HAnimJoint1330 = x3d.HAnimJoint(USE="hanim_r_metacarpal_2")

HAnimHumanoid25.joints.append(HAnimJoint1330)
HAnimJoint1331 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_phalanx_2")

HAnimHumanoid25.joints.append(HAnimJoint1331)
HAnimJoint1332 = x3d.HAnimJoint(USE="hanim_r_carpal_middle_phalanx_2")

HAnimHumanoid25.joints.append(HAnimJoint1332)
HAnimJoint1333 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_phalanx_2")

HAnimHumanoid25.joints.append(HAnimJoint1333)
HAnimJoint1334 = x3d.HAnimJoint(USE="hanim_r_capitate")

HAnimHumanoid25.joints.append(HAnimJoint1334)
HAnimJoint1335 = x3d.HAnimJoint(USE="hanim_r_metacarpal_3")

HAnimHumanoid25.joints.append(HAnimJoint1335)
HAnimJoint1336 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_phalanx_3")

HAnimHumanoid25.joints.append(HAnimJoint1336)
HAnimJoint1337 = x3d.HAnimJoint(USE="hanim_r_carpal_middle_phalanx_3")

HAnimHumanoid25.joints.append(HAnimJoint1337)
HAnimJoint1338 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_phalanx_3")

HAnimHumanoid25.joints.append(HAnimJoint1338)
HAnimJoint1339 = x3d.HAnimJoint(USE="hanim_r_hamate")

HAnimHumanoid25.joints.append(HAnimJoint1339)
HAnimJoint1340 = x3d.HAnimJoint(USE="hanim_r_metacarpal_4")

HAnimHumanoid25.joints.append(HAnimJoint1340)
HAnimJoint1341 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_phalanx_4")

HAnimHumanoid25.joints.append(HAnimJoint1341)
HAnimJoint1342 = x3d.HAnimJoint(USE="hanim_r_carpal_middle_phalanx_4")

HAnimHumanoid25.joints.append(HAnimJoint1342)
HAnimJoint1343 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_phalanx_4")

HAnimHumanoid25.joints.append(HAnimJoint1343)
HAnimJoint1344 = x3d.HAnimJoint(USE="hanim_r_metacarpal_5")

HAnimHumanoid25.joints.append(HAnimJoint1344)
HAnimJoint1345 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_phalanx_5")

HAnimHumanoid25.joints.append(HAnimJoint1345)
HAnimJoint1346 = x3d.HAnimJoint(USE="hanim_r_carpal_middle_phalanx_5")

HAnimHumanoid25.joints.append(HAnimJoint1346)
HAnimJoint1347 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_phalanx_5")

HAnimHumanoid25.joints.append(HAnimJoint1347)

Transform24.children.append(HAnimHumanoid25)

Scene7.children.append(Transform24)
TimeSensor1348 = x3d.TimeSensor(DEF="Armature_Clock")
TimeSensor1348.cycleInterval = 10.416666666666666
TimeSensor1348.loop = True

Scene7.children.append(TimeSensor1348)
ProximitySensor1349 = x3d.ProximitySensor(DEF="Armature_Close")
ProximitySensor1349.size = [1000000,1000000,1000000]

Scene7.children.append(ProximitySensor1349)
ROUTE1350 = x3d.ROUTE()
ROUTE1350.fromField = "enterTime"
ROUTE1350.fromNode = "Armature_Close"
ROUTE1350.toField = "startTime"
ROUTE1350.toNode = "Armature_Clock"

Scene7.children.append(ROUTE1350)
OrientationInterpolator1351 = x3d.OrientationInterpolator(DEF="Armature_OI_sacrum")
OrientationInterpolator1351.key = [0,1]
OrientationInterpolator1351.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1351)
OrientationInterpolator1352 = x3d.OrientationInterpolator(DEF="Armature_OI_pelvis")
OrientationInterpolator1352.key = [0,1]
OrientationInterpolator1352.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1352)
OrientationInterpolator1353 = x3d.OrientationInterpolator(DEF="Armature_OI_l_thigh")
OrientationInterpolator1353.key = [0,1]
OrientationInterpolator1353.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1353)
OrientationInterpolator1354 = x3d.OrientationInterpolator(DEF="Armature_OI_l_calf")
OrientationInterpolator1354.key = [0,1]
OrientationInterpolator1354.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1354)
OrientationInterpolator1355 = x3d.OrientationInterpolator(DEF="Armature_OI_l_talus")
OrientationInterpolator1355.key = [0,1]
OrientationInterpolator1355.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1355)
OrientationInterpolator1356 = x3d.OrientationInterpolator(DEF="Armature_OI_l_navicular")
OrientationInterpolator1356.key = [0,1]
OrientationInterpolator1356.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1356)
OrientationInterpolator1357 = x3d.OrientationInterpolator(DEF="Armature_OI_l_cuneiform_1")
OrientationInterpolator1357.key = [0,1]
OrientationInterpolator1357.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1357)
OrientationInterpolator1358 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metatarsal_1")
OrientationInterpolator1358.key = [0,1]
OrientationInterpolator1358.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1358)
OrientationInterpolator1359 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_proximal_phalanx_1")
OrientationInterpolator1359.key = [0,1]
OrientationInterpolator1359.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1359)
OrientationInterpolator1360 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_distal_phalanx_1")
OrientationInterpolator1360.key = [0,1]
OrientationInterpolator1360.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1360)
OrientationInterpolator1361 = x3d.OrientationInterpolator(DEF="Armature_OI_l_cuneiform_2")
OrientationInterpolator1361.key = [0,1]
OrientationInterpolator1361.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1361)
OrientationInterpolator1362 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metatarsal_2")
OrientationInterpolator1362.key = [0,1]
OrientationInterpolator1362.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1362)
OrientationInterpolator1363 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_proximal_phalanx_2")
OrientationInterpolator1363.key = [0,1]
OrientationInterpolator1363.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1363)
OrientationInterpolator1364 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_middle_phalanx_2")
OrientationInterpolator1364.key = [0,1]
OrientationInterpolator1364.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1364)
OrientationInterpolator1365 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_distal_phalanx_2")
OrientationInterpolator1365.key = [0,1]
OrientationInterpolator1365.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1365)
OrientationInterpolator1366 = x3d.OrientationInterpolator(DEF="Armature_OI_l_cuneiform_3")
OrientationInterpolator1366.key = [0,1]
OrientationInterpolator1366.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1366)
OrientationInterpolator1367 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metatarsal_3")
OrientationInterpolator1367.key = [0,1]
OrientationInterpolator1367.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1367)
OrientationInterpolator1368 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_proximal_phalanx_3")
OrientationInterpolator1368.key = [0,1]
OrientationInterpolator1368.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1368)
OrientationInterpolator1369 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_middle_phalanx_3")
OrientationInterpolator1369.key = [0,1]
OrientationInterpolator1369.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1369)
OrientationInterpolator1370 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_distal_phalanx_3")
OrientationInterpolator1370.key = [0,1]
OrientationInterpolator1370.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1370)
OrientationInterpolator1371 = x3d.OrientationInterpolator(DEF="Armature_OI_l_calcaneus")
OrientationInterpolator1371.key = [0,1]
OrientationInterpolator1371.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1371)
OrientationInterpolator1372 = x3d.OrientationInterpolator(DEF="Armature_OI_l_cuboid")
OrientationInterpolator1372.key = [0,1]
OrientationInterpolator1372.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1372)
OrientationInterpolator1373 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metatarsal_4")
OrientationInterpolator1373.key = [0,1]
OrientationInterpolator1373.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1373)
OrientationInterpolator1374 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_proximal_phalanx_4")
OrientationInterpolator1374.key = [0,1]
OrientationInterpolator1374.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1374)
OrientationInterpolator1375 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_middle_phalanx_4")
OrientationInterpolator1375.key = [0,1]
OrientationInterpolator1375.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1375)
OrientationInterpolator1376 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_distal_phalanx_4")
OrientationInterpolator1376.key = [0,1]
OrientationInterpolator1376.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1376)
OrientationInterpolator1377 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metatarsal_5")
OrientationInterpolator1377.key = [0,1]
OrientationInterpolator1377.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1377)
OrientationInterpolator1378 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_proximal_phalanx_5")
OrientationInterpolator1378.key = [0,1]
OrientationInterpolator1378.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1378)
OrientationInterpolator1379 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_middle_phalanx_5")
OrientationInterpolator1379.key = [0,1]
OrientationInterpolator1379.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1379)
OrientationInterpolator1380 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_distal_phalanx_5")
OrientationInterpolator1380.key = [0,1]
OrientationInterpolator1380.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1380)
OrientationInterpolator1381 = x3d.OrientationInterpolator(DEF="Armature_OI_r_thigh")
OrientationInterpolator1381.key = [0,1]
OrientationInterpolator1381.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1381)
OrientationInterpolator1382 = x3d.OrientationInterpolator(DEF="Armature_OI_r_calf")
OrientationInterpolator1382.key = [0,1]
OrientationInterpolator1382.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1382)
OrientationInterpolator1383 = x3d.OrientationInterpolator(DEF="Armature_OI_r_talus")
OrientationInterpolator1383.key = [0,1]
OrientationInterpolator1383.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1383)
OrientationInterpolator1384 = x3d.OrientationInterpolator(DEF="Armature_OI_r_navicular")
OrientationInterpolator1384.key = [0,1]
OrientationInterpolator1384.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1384)
OrientationInterpolator1385 = x3d.OrientationInterpolator(DEF="Armature_OI_r_cuneiform_1")
OrientationInterpolator1385.key = [0,1]
OrientationInterpolator1385.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1385)
OrientationInterpolator1386 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metatarsal_1")
OrientationInterpolator1386.key = [0,1]
OrientationInterpolator1386.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1386)
OrientationInterpolator1387 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_proximal_phalanx_1")
OrientationInterpolator1387.key = [0,1]
OrientationInterpolator1387.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1387)
OrientationInterpolator1388 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_distal_phalanx_1")
OrientationInterpolator1388.key = [0,1]
OrientationInterpolator1388.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1388)
OrientationInterpolator1389 = x3d.OrientationInterpolator(DEF="Armature_OI_r_cuneiform_2")
OrientationInterpolator1389.key = [0,1]
OrientationInterpolator1389.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1389)
OrientationInterpolator1390 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metatarsal_2")
OrientationInterpolator1390.key = [0,1]
OrientationInterpolator1390.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1390)
OrientationInterpolator1391 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_proximal_phalanx_2")
OrientationInterpolator1391.key = [0,1]
OrientationInterpolator1391.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1391)
OrientationInterpolator1392 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_middle_phalanx_2")
OrientationInterpolator1392.key = [0,1]
OrientationInterpolator1392.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1392)
OrientationInterpolator1393 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_distal_phalanx_2")
OrientationInterpolator1393.key = [0,1]
OrientationInterpolator1393.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1393)
OrientationInterpolator1394 = x3d.OrientationInterpolator(DEF="Armature_OI_r_cuneiform_3")
OrientationInterpolator1394.key = [0,1]
OrientationInterpolator1394.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1394)
OrientationInterpolator1395 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metatarsal_3")
OrientationInterpolator1395.key = [0,1]
OrientationInterpolator1395.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1395)
OrientationInterpolator1396 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_proximal_phalanx_3")
OrientationInterpolator1396.key = [0,1]
OrientationInterpolator1396.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1396)
OrientationInterpolator1397 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_middle_phalanx_3")
OrientationInterpolator1397.key = [0,1]
OrientationInterpolator1397.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1397)
OrientationInterpolator1398 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_distal_phalanx_3")
OrientationInterpolator1398.key = [0,1]
OrientationInterpolator1398.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1398)
OrientationInterpolator1399 = x3d.OrientationInterpolator(DEF="Armature_OI_r_calcaneus")
OrientationInterpolator1399.key = [0,1]
OrientationInterpolator1399.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1399)
OrientationInterpolator1400 = x3d.OrientationInterpolator(DEF="Armature_OI_r_cuboid")
OrientationInterpolator1400.key = [0,1]
OrientationInterpolator1400.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1400)
OrientationInterpolator1401 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metatarsal_4")
OrientationInterpolator1401.key = [0,1]
OrientationInterpolator1401.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1401)
OrientationInterpolator1402 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_proximal_phalanx_4")
OrientationInterpolator1402.key = [0,1]
OrientationInterpolator1402.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1402)
OrientationInterpolator1403 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_middle_phalanx_4")
OrientationInterpolator1403.key = [0,1]
OrientationInterpolator1403.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1403)
OrientationInterpolator1404 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_distal_phalanx_4")
OrientationInterpolator1404.key = [0,1]
OrientationInterpolator1404.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1404)
OrientationInterpolator1405 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metatarsal_5")
OrientationInterpolator1405.key = [0,1]
OrientationInterpolator1405.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1405)
OrientationInterpolator1406 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_proximal_phalanx_5")
OrientationInterpolator1406.key = [0,1]
OrientationInterpolator1406.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1406)
OrientationInterpolator1407 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_middle_phalanx_5")
OrientationInterpolator1407.key = [0,1]
OrientationInterpolator1407.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1407)
OrientationInterpolator1408 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_distal_phalanx_5")
OrientationInterpolator1408.key = [0,1]
OrientationInterpolator1408.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1408)
OrientationInterpolator1409 = x3d.OrientationInterpolator(DEF="Armature_OI_l5")
OrientationInterpolator1409.key = [0,1]
OrientationInterpolator1409.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1409)
OrientationInterpolator1410 = x3d.OrientationInterpolator(DEF="Armature_OI_l4")
OrientationInterpolator1410.key = [0,1]
OrientationInterpolator1410.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1410)
OrientationInterpolator1411 = x3d.OrientationInterpolator(DEF="Armature_OI_l3")
OrientationInterpolator1411.key = [0,1]
OrientationInterpolator1411.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1411)
OrientationInterpolator1412 = x3d.OrientationInterpolator(DEF="Armature_OI_l2")
OrientationInterpolator1412.key = [0,1]
OrientationInterpolator1412.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1412)
OrientationInterpolator1413 = x3d.OrientationInterpolator(DEF="Armature_OI_l1")
OrientationInterpolator1413.key = [0,1]
OrientationInterpolator1413.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1413)
OrientationInterpolator1414 = x3d.OrientationInterpolator(DEF="Armature_OI_t12")
OrientationInterpolator1414.key = [0,1]
OrientationInterpolator1414.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1414)
OrientationInterpolator1415 = x3d.OrientationInterpolator(DEF="Armature_OI_t11")
OrientationInterpolator1415.key = [0,1]
OrientationInterpolator1415.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1415)
OrientationInterpolator1416 = x3d.OrientationInterpolator(DEF="Armature_OI_t10")
OrientationInterpolator1416.key = [0,1]
OrientationInterpolator1416.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1416)
OrientationInterpolator1417 = x3d.OrientationInterpolator(DEF="Armature_OI_t9")
OrientationInterpolator1417.key = [0,1]
OrientationInterpolator1417.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1417)
OrientationInterpolator1418 = x3d.OrientationInterpolator(DEF="Armature_OI_t8")
OrientationInterpolator1418.key = [0,1]
OrientationInterpolator1418.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1418)
OrientationInterpolator1419 = x3d.OrientationInterpolator(DEF="Armature_OI_t7")
OrientationInterpolator1419.key = [0,1]
OrientationInterpolator1419.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1419)
OrientationInterpolator1420 = x3d.OrientationInterpolator(DEF="Armature_OI_t6")
OrientationInterpolator1420.key = [0,1]
OrientationInterpolator1420.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1420)
OrientationInterpolator1421 = x3d.OrientationInterpolator(DEF="Armature_OI_t5")
OrientationInterpolator1421.key = [0,1]
OrientationInterpolator1421.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1421)
OrientationInterpolator1422 = x3d.OrientationInterpolator(DEF="Armature_OI_t4")
OrientationInterpolator1422.key = [0,1]
OrientationInterpolator1422.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1422)
OrientationInterpolator1423 = x3d.OrientationInterpolator(DEF="Armature_OI_t3")
OrientationInterpolator1423.key = [0,1]
OrientationInterpolator1423.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1423)
OrientationInterpolator1424 = x3d.OrientationInterpolator(DEF="Armature_OI_t2")
OrientationInterpolator1424.key = [0,1]
OrientationInterpolator1424.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1424)
OrientationInterpolator1425 = x3d.OrientationInterpolator(DEF="Armature_OI_t1")
OrientationInterpolator1425.key = [0,1]
OrientationInterpolator1425.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1425)
OrientationInterpolator1426 = x3d.OrientationInterpolator(DEF="Armature_OI_c7")
OrientationInterpolator1426.key = [0,1]
OrientationInterpolator1426.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1426)
OrientationInterpolator1427 = x3d.OrientationInterpolator(DEF="Armature_OI_c6")
OrientationInterpolator1427.key = [0,1]
OrientationInterpolator1427.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1427)
OrientationInterpolator1428 = x3d.OrientationInterpolator(DEF="Armature_OI_c5")
OrientationInterpolator1428.key = [0,1]
OrientationInterpolator1428.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1428)
OrientationInterpolator1429 = x3d.OrientationInterpolator(DEF="Armature_OI_c4")
OrientationInterpolator1429.key = [0,1]
OrientationInterpolator1429.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1429)
OrientationInterpolator1430 = x3d.OrientationInterpolator(DEF="Armature_OI_c3")
OrientationInterpolator1430.key = [0,1]
OrientationInterpolator1430.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1430)
OrientationInterpolator1431 = x3d.OrientationInterpolator(DEF="Armature_OI_c2")
OrientationInterpolator1431.key = [0,1]
OrientationInterpolator1431.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1431)
OrientationInterpolator1432 = x3d.OrientationInterpolator(DEF="Armature_OI_c1")
OrientationInterpolator1432.key = [0,1]
OrientationInterpolator1432.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1432)
OrientationInterpolator1433 = x3d.OrientationInterpolator(DEF="Armature_OI_skull")
OrientationInterpolator1433.key = [0,1]
OrientationInterpolator1433.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1433)
OrientationInterpolator1434 = x3d.OrientationInterpolator(DEF="Armature_OI_l_eyelid")
OrientationInterpolator1434.key = [0,1]
OrientationInterpolator1434.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1434)
OrientationInterpolator1435 = x3d.OrientationInterpolator(DEF="Armature_OI_r_eyelid")
OrientationInterpolator1435.key = [0,1]
OrientationInterpolator1435.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1435)
OrientationInterpolator1436 = x3d.OrientationInterpolator(DEF="Armature_OI_l_eyeball")
OrientationInterpolator1436.key = [0,1]
OrientationInterpolator1436.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1436)
OrientationInterpolator1437 = x3d.OrientationInterpolator(DEF="Armature_OI_r_eyeball")
OrientationInterpolator1437.key = [0,1]
OrientationInterpolator1437.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1437)
OrientationInterpolator1438 = x3d.OrientationInterpolator(DEF="Armature_OI_l_eyebrow")
OrientationInterpolator1438.key = [0,1]
OrientationInterpolator1438.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1438)
OrientationInterpolator1439 = x3d.OrientationInterpolator(DEF="Armature_OI_r_eyebrow")
OrientationInterpolator1439.key = [0,1]
OrientationInterpolator1439.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1439)
OrientationInterpolator1440 = x3d.OrientationInterpolator(DEF="Armature_OI_jaw")
OrientationInterpolator1440.key = [0,1]
OrientationInterpolator1440.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1440)
OrientationInterpolator1441 = x3d.OrientationInterpolator(DEF="Armature_OI_l_clavicle")
OrientationInterpolator1441.key = [0,1]
OrientationInterpolator1441.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1441)
OrientationInterpolator1442 = x3d.OrientationInterpolator(DEF="Armature_OI_l_scapula")
OrientationInterpolator1442.key = [0,1]
OrientationInterpolator1442.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1442)
OrientationInterpolator1443 = x3d.OrientationInterpolator(DEF="Armature_OI_l_upperarm")
OrientationInterpolator1443.key = [0,1]
OrientationInterpolator1443.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1443)
OrientationInterpolator1444 = x3d.OrientationInterpolator(DEF="Armature_OI_l_forearm")
OrientationInterpolator1444.key = [0,1]
OrientationInterpolator1444.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1444)
OrientationInterpolator1445 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal")
OrientationInterpolator1445.key = [0,1]
OrientationInterpolator1445.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1445)
OrientationInterpolator1446 = x3d.OrientationInterpolator(DEF="Armature_OI_l_trapezium")
OrientationInterpolator1446.key = [0,1]
OrientationInterpolator1446.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1446)
OrientationInterpolator1447 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metacarpal_1")
OrientationInterpolator1447.key = [0,1]
OrientationInterpolator1447.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1447)
OrientationInterpolator1448 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_proximal_phalanx_1")
OrientationInterpolator1448.key = [0,1]
OrientationInterpolator1448.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1448)
OrientationInterpolator1449 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_distal_phalanx_1")
OrientationInterpolator1449.key = [0,1]
OrientationInterpolator1449.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1449)
OrientationInterpolator1450 = x3d.OrientationInterpolator(DEF="Armature_OI_l_trapezoid")
OrientationInterpolator1450.key = [0,1]
OrientationInterpolator1450.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1450)
OrientationInterpolator1451 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metacarpal_2")
OrientationInterpolator1451.key = [0,1]
OrientationInterpolator1451.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1451)
OrientationInterpolator1452 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_proximal_phalanx_2")
OrientationInterpolator1452.key = [0,1]
OrientationInterpolator1452.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1452)
OrientationInterpolator1453 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_middle_phalanx_2")
OrientationInterpolator1453.key = [0,1]
OrientationInterpolator1453.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1453)
OrientationInterpolator1454 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_distal_phalanx_2")
OrientationInterpolator1454.key = [0,1]
OrientationInterpolator1454.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1454)
OrientationInterpolator1455 = x3d.OrientationInterpolator(DEF="Armature_OI_l_capitate")
OrientationInterpolator1455.key = [0,1]
OrientationInterpolator1455.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1455)
OrientationInterpolator1456 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metacarpal_3")
OrientationInterpolator1456.key = [0,1]
OrientationInterpolator1456.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1456)
OrientationInterpolator1457 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_proximal_phalanx_3")
OrientationInterpolator1457.key = [0,1]
OrientationInterpolator1457.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1457)
OrientationInterpolator1458 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_middle_phalanx_3")
OrientationInterpolator1458.key = [0,1]
OrientationInterpolator1458.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1458)
OrientationInterpolator1459 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_distal_phalanx_3")
OrientationInterpolator1459.key = [0,1]
OrientationInterpolator1459.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1459)
OrientationInterpolator1460 = x3d.OrientationInterpolator(DEF="Armature_OI_l_hamate")
OrientationInterpolator1460.key = [0,1]
OrientationInterpolator1460.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1460)
OrientationInterpolator1461 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metacarpal_4")
OrientationInterpolator1461.key = [0,1]
OrientationInterpolator1461.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1461)
OrientationInterpolator1462 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_proximal_phalanx_4")
OrientationInterpolator1462.key = [0,1]
OrientationInterpolator1462.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1462)
OrientationInterpolator1463 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_middle_phalanx_4")
OrientationInterpolator1463.key = [0,1]
OrientationInterpolator1463.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1463)
OrientationInterpolator1464 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_distal_phalanx_4")
OrientationInterpolator1464.key = [0,1]
OrientationInterpolator1464.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1464)
OrientationInterpolator1465 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metacarpal_5")
OrientationInterpolator1465.key = [0,1]
OrientationInterpolator1465.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1465)
OrientationInterpolator1466 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_proximal_phalanx_5")
OrientationInterpolator1466.key = [0,1]
OrientationInterpolator1466.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1466)
OrientationInterpolator1467 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_middle_phalanx_5")
OrientationInterpolator1467.key = [0,1]
OrientationInterpolator1467.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1467)
OrientationInterpolator1468 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_distal_phalanx_5")
OrientationInterpolator1468.key = [0,1]
OrientationInterpolator1468.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1468)
OrientationInterpolator1469 = x3d.OrientationInterpolator(DEF="Armature_OI_r_clavicle")
OrientationInterpolator1469.key = [0,1]
OrientationInterpolator1469.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1469)
OrientationInterpolator1470 = x3d.OrientationInterpolator(DEF="Armature_OI_r_scapula")
OrientationInterpolator1470.key = [0,1]
OrientationInterpolator1470.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1470)
OrientationInterpolator1471 = x3d.OrientationInterpolator(DEF="Armature_OI_r_upperarm")
OrientationInterpolator1471.key = [0,1]
OrientationInterpolator1471.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1471)
OrientationInterpolator1472 = x3d.OrientationInterpolator(DEF="Armature_OI_r_forearm")
OrientationInterpolator1472.key = [0,1]
OrientationInterpolator1472.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1472)
OrientationInterpolator1473 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal")
OrientationInterpolator1473.key = [0,1]
OrientationInterpolator1473.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1473)
OrientationInterpolator1474 = x3d.OrientationInterpolator(DEF="Armature_OI_r_trapezium")
OrientationInterpolator1474.key = [0,1]
OrientationInterpolator1474.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1474)
OrientationInterpolator1475 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metacarpal_1")
OrientationInterpolator1475.key = [0,1]
OrientationInterpolator1475.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1475)
OrientationInterpolator1476 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_proximal_phalanx_1")
OrientationInterpolator1476.key = [0,1]
OrientationInterpolator1476.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1476)
OrientationInterpolator1477 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_distal_phalanx_1")
OrientationInterpolator1477.key = [0,1]
OrientationInterpolator1477.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1477)
OrientationInterpolator1478 = x3d.OrientationInterpolator(DEF="Armature_OI_r_trapezoid")
OrientationInterpolator1478.key = [0,1]
OrientationInterpolator1478.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1478)
OrientationInterpolator1479 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metacarpal_2")
OrientationInterpolator1479.key = [0,1]
OrientationInterpolator1479.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1479)
OrientationInterpolator1480 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_proximal_phalanx_2")
OrientationInterpolator1480.key = [0,1]
OrientationInterpolator1480.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1480)
OrientationInterpolator1481 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_middle_phalanx_2")
OrientationInterpolator1481.key = [0,1]
OrientationInterpolator1481.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1481)
OrientationInterpolator1482 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_distal_phalanx_2")
OrientationInterpolator1482.key = [0,1]
OrientationInterpolator1482.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1482)
OrientationInterpolator1483 = x3d.OrientationInterpolator(DEF="Armature_OI_r_capitate")
OrientationInterpolator1483.key = [0,1]
OrientationInterpolator1483.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1483)
OrientationInterpolator1484 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metacarpal_3")
OrientationInterpolator1484.key = [0,1]
OrientationInterpolator1484.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1484)
OrientationInterpolator1485 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_proximal_phalanx_3")
OrientationInterpolator1485.key = [0,1]
OrientationInterpolator1485.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1485)
OrientationInterpolator1486 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_middle_phalanx_3")
OrientationInterpolator1486.key = [0,1]
OrientationInterpolator1486.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1486)
OrientationInterpolator1487 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_distal_phalanx_3")
OrientationInterpolator1487.key = [0,1]
OrientationInterpolator1487.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1487)
OrientationInterpolator1488 = x3d.OrientationInterpolator(DEF="Armature_OI_r_hamate")
OrientationInterpolator1488.key = [0,1]
OrientationInterpolator1488.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1488)
OrientationInterpolator1489 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metacarpal_4")
OrientationInterpolator1489.key = [0,1]
OrientationInterpolator1489.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1489)
OrientationInterpolator1490 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_proximal_phalanx_4")
OrientationInterpolator1490.key = [0,1]
OrientationInterpolator1490.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1490)
OrientationInterpolator1491 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_middle_phalanx_4")
OrientationInterpolator1491.key = [0,1]
OrientationInterpolator1491.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1491)
OrientationInterpolator1492 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_distal_phalanx_4")
OrientationInterpolator1492.key = [0,1]
OrientationInterpolator1492.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1492)
OrientationInterpolator1493 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metacarpal_5")
OrientationInterpolator1493.key = [0,1]
OrientationInterpolator1493.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1493)
OrientationInterpolator1494 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_proximal_phalanx_5")
OrientationInterpolator1494.key = [0,1]
OrientationInterpolator1494.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1494)
OrientationInterpolator1495 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_middle_phalanx_5")
OrientationInterpolator1495.key = [0,1]
OrientationInterpolator1495.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1495)
OrientationInterpolator1496 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_distal_phalanx_5")
OrientationInterpolator1496.key = [0,1]
OrientationInterpolator1496.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene7.children.append(OrientationInterpolator1496)
ROUTE1497 = x3d.ROUTE()
ROUTE1497.fromField = "fraction_changed"
ROUTE1497.fromNode = "Armature_Clock"
ROUTE1497.toField = "set_fraction"
ROUTE1497.toNode = "Armature_OI_sacrum"

Scene7.children.append(ROUTE1497)
ROUTE1498 = x3d.ROUTE()
ROUTE1498.fromField = "value_changed"
ROUTE1498.fromNode = "Armature_OI_sacrum"
ROUTE1498.toField = "rotation"
ROUTE1498.toNode = "hanim_sacrum"

Scene7.children.append(ROUTE1498)
ROUTE1499 = x3d.ROUTE()
ROUTE1499.fromField = "fraction_changed"
ROUTE1499.fromNode = "Armature_Clock"
ROUTE1499.toField = "set_fraction"
ROUTE1499.toNode = "Armature_OI_pelvis"

Scene7.children.append(ROUTE1499)
ROUTE1500 = x3d.ROUTE()
ROUTE1500.fromField = "value_changed"
ROUTE1500.fromNode = "Armature_OI_pelvis"
ROUTE1500.toField = "rotation"
ROUTE1500.toNode = "hanim_pelvis"

Scene7.children.append(ROUTE1500)
ROUTE1501 = x3d.ROUTE()
ROUTE1501.fromField = "fraction_changed"
ROUTE1501.fromNode = "Armature_Clock"
ROUTE1501.toField = "set_fraction"
ROUTE1501.toNode = "Armature_OI_l_thigh"

Scene7.children.append(ROUTE1501)
ROUTE1502 = x3d.ROUTE()
ROUTE1502.fromField = "value_changed"
ROUTE1502.fromNode = "Armature_OI_l_thigh"
ROUTE1502.toField = "rotation"
ROUTE1502.toNode = "hanim_l_thigh"

Scene7.children.append(ROUTE1502)
ROUTE1503 = x3d.ROUTE()
ROUTE1503.fromField = "fraction_changed"
ROUTE1503.fromNode = "Armature_Clock"
ROUTE1503.toField = "set_fraction"
ROUTE1503.toNode = "Armature_OI_l_calf"

Scene7.children.append(ROUTE1503)
ROUTE1504 = x3d.ROUTE()
ROUTE1504.fromField = "value_changed"
ROUTE1504.fromNode = "Armature_OI_l_calf"
ROUTE1504.toField = "rotation"
ROUTE1504.toNode = "hanim_l_calf"

Scene7.children.append(ROUTE1504)
ROUTE1505 = x3d.ROUTE()
ROUTE1505.fromField = "fraction_changed"
ROUTE1505.fromNode = "Armature_Clock"
ROUTE1505.toField = "set_fraction"
ROUTE1505.toNode = "Armature_OI_l_talus"

Scene7.children.append(ROUTE1505)
ROUTE1506 = x3d.ROUTE()
ROUTE1506.fromField = "value_changed"
ROUTE1506.fromNode = "Armature_OI_l_talus"
ROUTE1506.toField = "rotation"
ROUTE1506.toNode = "hanim_l_talus"

Scene7.children.append(ROUTE1506)
ROUTE1507 = x3d.ROUTE()
ROUTE1507.fromField = "fraction_changed"
ROUTE1507.fromNode = "Armature_Clock"
ROUTE1507.toField = "set_fraction"
ROUTE1507.toNode = "Armature_OI_l_navicular"

Scene7.children.append(ROUTE1507)
ROUTE1508 = x3d.ROUTE()
ROUTE1508.fromField = "value_changed"
ROUTE1508.fromNode = "Armature_OI_l_navicular"
ROUTE1508.toField = "rotation"
ROUTE1508.toNode = "hanim_l_navicular"

Scene7.children.append(ROUTE1508)
ROUTE1509 = x3d.ROUTE()
ROUTE1509.fromField = "fraction_changed"
ROUTE1509.fromNode = "Armature_Clock"
ROUTE1509.toField = "set_fraction"
ROUTE1509.toNode = "Armature_OI_l_cuneiform_1"

Scene7.children.append(ROUTE1509)
ROUTE1510 = x3d.ROUTE()
ROUTE1510.fromField = "value_changed"
ROUTE1510.fromNode = "Armature_OI_l_cuneiform_1"
ROUTE1510.toField = "rotation"
ROUTE1510.toNode = "hanim_l_cuneiform_1"

Scene7.children.append(ROUTE1510)
ROUTE1511 = x3d.ROUTE()
ROUTE1511.fromField = "fraction_changed"
ROUTE1511.fromNode = "Armature_Clock"
ROUTE1511.toField = "set_fraction"
ROUTE1511.toNode = "Armature_OI_l_metatarsal_1"

Scene7.children.append(ROUTE1511)
ROUTE1512 = x3d.ROUTE()
ROUTE1512.fromField = "value_changed"
ROUTE1512.fromNode = "Armature_OI_l_metatarsal_1"
ROUTE1512.toField = "rotation"
ROUTE1512.toNode = "hanim_l_metatarsal_1"

Scene7.children.append(ROUTE1512)
ROUTE1513 = x3d.ROUTE()
ROUTE1513.fromField = "fraction_changed"
ROUTE1513.fromNode = "Armature_Clock"
ROUTE1513.toField = "set_fraction"
ROUTE1513.toNode = "Armature_OI_l_tarsal_proximal_phalanx_1"

Scene7.children.append(ROUTE1513)
ROUTE1514 = x3d.ROUTE()
ROUTE1514.fromField = "value_changed"
ROUTE1514.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_1"
ROUTE1514.toField = "rotation"
ROUTE1514.toNode = "hanim_l_tarsal_proximal_phalanx_1"

Scene7.children.append(ROUTE1514)
ROUTE1515 = x3d.ROUTE()
ROUTE1515.fromField = "fraction_changed"
ROUTE1515.fromNode = "Armature_Clock"
ROUTE1515.toField = "set_fraction"
ROUTE1515.toNode = "Armature_OI_l_tarsal_distal_phalanx_1"

Scene7.children.append(ROUTE1515)
ROUTE1516 = x3d.ROUTE()
ROUTE1516.fromField = "value_changed"
ROUTE1516.fromNode = "Armature_OI_l_tarsal_distal_phalanx_1"
ROUTE1516.toField = "rotation"
ROUTE1516.toNode = "hanim_l_tarsal_distal_phalanx_1"

Scene7.children.append(ROUTE1516)
ROUTE1517 = x3d.ROUTE()
ROUTE1517.fromField = "fraction_changed"
ROUTE1517.fromNode = "Armature_Clock"
ROUTE1517.toField = "set_fraction"
ROUTE1517.toNode = "Armature_OI_l_cuneiform_2"

Scene7.children.append(ROUTE1517)
ROUTE1518 = x3d.ROUTE()
ROUTE1518.fromField = "value_changed"
ROUTE1518.fromNode = "Armature_OI_l_cuneiform_2"
ROUTE1518.toField = "rotation"
ROUTE1518.toNode = "hanim_l_cuneiform_2"

Scene7.children.append(ROUTE1518)
ROUTE1519 = x3d.ROUTE()
ROUTE1519.fromField = "fraction_changed"
ROUTE1519.fromNode = "Armature_Clock"
ROUTE1519.toField = "set_fraction"
ROUTE1519.toNode = "Armature_OI_l_metatarsal_2"

Scene7.children.append(ROUTE1519)
ROUTE1520 = x3d.ROUTE()
ROUTE1520.fromField = "value_changed"
ROUTE1520.fromNode = "Armature_OI_l_metatarsal_2"
ROUTE1520.toField = "rotation"
ROUTE1520.toNode = "hanim_l_metatarsal_2"

Scene7.children.append(ROUTE1520)
ROUTE1521 = x3d.ROUTE()
ROUTE1521.fromField = "fraction_changed"
ROUTE1521.fromNode = "Armature_Clock"
ROUTE1521.toField = "set_fraction"
ROUTE1521.toNode = "Armature_OI_l_tarsal_proximal_phalanx_2"

Scene7.children.append(ROUTE1521)
ROUTE1522 = x3d.ROUTE()
ROUTE1522.fromField = "value_changed"
ROUTE1522.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_2"
ROUTE1522.toField = "rotation"
ROUTE1522.toNode = "hanim_l_tarsal_proximal_phalanx_2"

Scene7.children.append(ROUTE1522)
ROUTE1523 = x3d.ROUTE()
ROUTE1523.fromField = "fraction_changed"
ROUTE1523.fromNode = "Armature_Clock"
ROUTE1523.toField = "set_fraction"
ROUTE1523.toNode = "Armature_OI_l_tarsal_middle_phalanx_2"

Scene7.children.append(ROUTE1523)
ROUTE1524 = x3d.ROUTE()
ROUTE1524.fromField = "value_changed"
ROUTE1524.fromNode = "Armature_OI_l_tarsal_middle_phalanx_2"
ROUTE1524.toField = "rotation"
ROUTE1524.toNode = "hanim_l_tarsal_middle_phalanx_2"

Scene7.children.append(ROUTE1524)
ROUTE1525 = x3d.ROUTE()
ROUTE1525.fromField = "fraction_changed"
ROUTE1525.fromNode = "Armature_Clock"
ROUTE1525.toField = "set_fraction"
ROUTE1525.toNode = "Armature_OI_l_tarsal_distal_phalanx_2"

Scene7.children.append(ROUTE1525)
ROUTE1526 = x3d.ROUTE()
ROUTE1526.fromField = "value_changed"
ROUTE1526.fromNode = "Armature_OI_l_tarsal_distal_phalanx_2"
ROUTE1526.toField = "rotation"
ROUTE1526.toNode = "hanim_l_tarsal_distal_phalanx_2"

Scene7.children.append(ROUTE1526)
ROUTE1527 = x3d.ROUTE()
ROUTE1527.fromField = "fraction_changed"
ROUTE1527.fromNode = "Armature_Clock"
ROUTE1527.toField = "set_fraction"
ROUTE1527.toNode = "Armature_OI_l_cuneiform_3"

Scene7.children.append(ROUTE1527)
ROUTE1528 = x3d.ROUTE()
ROUTE1528.fromField = "value_changed"
ROUTE1528.fromNode = "Armature_OI_l_cuneiform_3"
ROUTE1528.toField = "rotation"
ROUTE1528.toNode = "hanim_l_cuneiform_3"

Scene7.children.append(ROUTE1528)
ROUTE1529 = x3d.ROUTE()
ROUTE1529.fromField = "fraction_changed"
ROUTE1529.fromNode = "Armature_Clock"
ROUTE1529.toField = "set_fraction"
ROUTE1529.toNode = "Armature_OI_l_metatarsal_3"

Scene7.children.append(ROUTE1529)
ROUTE1530 = x3d.ROUTE()
ROUTE1530.fromField = "value_changed"
ROUTE1530.fromNode = "Armature_OI_l_metatarsal_3"
ROUTE1530.toField = "rotation"
ROUTE1530.toNode = "hanim_l_metatarsal_3"

Scene7.children.append(ROUTE1530)
ROUTE1531 = x3d.ROUTE()
ROUTE1531.fromField = "fraction_changed"
ROUTE1531.fromNode = "Armature_Clock"
ROUTE1531.toField = "set_fraction"
ROUTE1531.toNode = "Armature_OI_l_tarsal_proximal_phalanx_3"

Scene7.children.append(ROUTE1531)
ROUTE1532 = x3d.ROUTE()
ROUTE1532.fromField = "value_changed"
ROUTE1532.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_3"
ROUTE1532.toField = "rotation"
ROUTE1532.toNode = "hanim_l_tarsal_proximal_phalanx_3"

Scene7.children.append(ROUTE1532)
ROUTE1533 = x3d.ROUTE()
ROUTE1533.fromField = "fraction_changed"
ROUTE1533.fromNode = "Armature_Clock"
ROUTE1533.toField = "set_fraction"
ROUTE1533.toNode = "Armature_OI_l_tarsal_middle_phalanx_3"

Scene7.children.append(ROUTE1533)
ROUTE1534 = x3d.ROUTE()
ROUTE1534.fromField = "value_changed"
ROUTE1534.fromNode = "Armature_OI_l_tarsal_middle_phalanx_3"
ROUTE1534.toField = "rotation"
ROUTE1534.toNode = "hanim_l_tarsal_middle_phalanx_3"

Scene7.children.append(ROUTE1534)
ROUTE1535 = x3d.ROUTE()
ROUTE1535.fromField = "fraction_changed"
ROUTE1535.fromNode = "Armature_Clock"
ROUTE1535.toField = "set_fraction"
ROUTE1535.toNode = "Armature_OI_l_tarsal_distal_phalanx_3"

Scene7.children.append(ROUTE1535)
ROUTE1536 = x3d.ROUTE()
ROUTE1536.fromField = "value_changed"
ROUTE1536.fromNode = "Armature_OI_l_tarsal_distal_phalanx_3"
ROUTE1536.toField = "rotation"
ROUTE1536.toNode = "hanim_l_tarsal_distal_phalanx_3"

Scene7.children.append(ROUTE1536)
ROUTE1537 = x3d.ROUTE()
ROUTE1537.fromField = "fraction_changed"
ROUTE1537.fromNode = "Armature_Clock"
ROUTE1537.toField = "set_fraction"
ROUTE1537.toNode = "Armature_OI_l_calcaneus"

Scene7.children.append(ROUTE1537)
ROUTE1538 = x3d.ROUTE()
ROUTE1538.fromField = "value_changed"
ROUTE1538.fromNode = "Armature_OI_l_calcaneus"
ROUTE1538.toField = "rotation"
ROUTE1538.toNode = "hanim_l_calcaneus"

Scene7.children.append(ROUTE1538)
ROUTE1539 = x3d.ROUTE()
ROUTE1539.fromField = "fraction_changed"
ROUTE1539.fromNode = "Armature_Clock"
ROUTE1539.toField = "set_fraction"
ROUTE1539.toNode = "Armature_OI_l_cuboid"

Scene7.children.append(ROUTE1539)
ROUTE1540 = x3d.ROUTE()
ROUTE1540.fromField = "value_changed"
ROUTE1540.fromNode = "Armature_OI_l_cuboid"
ROUTE1540.toField = "rotation"
ROUTE1540.toNode = "hanim_l_cuboid"

Scene7.children.append(ROUTE1540)
ROUTE1541 = x3d.ROUTE()
ROUTE1541.fromField = "fraction_changed"
ROUTE1541.fromNode = "Armature_Clock"
ROUTE1541.toField = "set_fraction"
ROUTE1541.toNode = "Armature_OI_l_metatarsal_4"

Scene7.children.append(ROUTE1541)
ROUTE1542 = x3d.ROUTE()
ROUTE1542.fromField = "value_changed"
ROUTE1542.fromNode = "Armature_OI_l_metatarsal_4"
ROUTE1542.toField = "rotation"
ROUTE1542.toNode = "hanim_l_metatarsal_4"

Scene7.children.append(ROUTE1542)
ROUTE1543 = x3d.ROUTE()
ROUTE1543.fromField = "fraction_changed"
ROUTE1543.fromNode = "Armature_Clock"
ROUTE1543.toField = "set_fraction"
ROUTE1543.toNode = "Armature_OI_l_tarsal_proximal_phalanx_4"

Scene7.children.append(ROUTE1543)
ROUTE1544 = x3d.ROUTE()
ROUTE1544.fromField = "value_changed"
ROUTE1544.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_4"
ROUTE1544.toField = "rotation"
ROUTE1544.toNode = "hanim_l_tarsal_proximal_phalanx_4"

Scene7.children.append(ROUTE1544)
ROUTE1545 = x3d.ROUTE()
ROUTE1545.fromField = "fraction_changed"
ROUTE1545.fromNode = "Armature_Clock"
ROUTE1545.toField = "set_fraction"
ROUTE1545.toNode = "Armature_OI_l_tarsal_middle_phalanx_4"

Scene7.children.append(ROUTE1545)
ROUTE1546 = x3d.ROUTE()
ROUTE1546.fromField = "value_changed"
ROUTE1546.fromNode = "Armature_OI_l_tarsal_middle_phalanx_4"
ROUTE1546.toField = "rotation"
ROUTE1546.toNode = "hanim_l_tarsal_middle_phalanx_4"

Scene7.children.append(ROUTE1546)
ROUTE1547 = x3d.ROUTE()
ROUTE1547.fromField = "fraction_changed"
ROUTE1547.fromNode = "Armature_Clock"
ROUTE1547.toField = "set_fraction"
ROUTE1547.toNode = "Armature_OI_l_tarsal_distal_phalanx_4"

Scene7.children.append(ROUTE1547)
ROUTE1548 = x3d.ROUTE()
ROUTE1548.fromField = "value_changed"
ROUTE1548.fromNode = "Armature_OI_l_tarsal_distal_phalanx_4"
ROUTE1548.toField = "rotation"
ROUTE1548.toNode = "hanim_l_tarsal_distal_phalanx_4"

Scene7.children.append(ROUTE1548)
ROUTE1549 = x3d.ROUTE()
ROUTE1549.fromField = "fraction_changed"
ROUTE1549.fromNode = "Armature_Clock"
ROUTE1549.toField = "set_fraction"
ROUTE1549.toNode = "Armature_OI_l_metatarsal_5"

Scene7.children.append(ROUTE1549)
ROUTE1550 = x3d.ROUTE()
ROUTE1550.fromField = "value_changed"
ROUTE1550.fromNode = "Armature_OI_l_metatarsal_5"
ROUTE1550.toField = "rotation"
ROUTE1550.toNode = "hanim_l_metatarsal_5"

Scene7.children.append(ROUTE1550)
ROUTE1551 = x3d.ROUTE()
ROUTE1551.fromField = "fraction_changed"
ROUTE1551.fromNode = "Armature_Clock"
ROUTE1551.toField = "set_fraction"
ROUTE1551.toNode = "Armature_OI_l_tarsal_proximal_phalanx_5"

Scene7.children.append(ROUTE1551)
ROUTE1552 = x3d.ROUTE()
ROUTE1552.fromField = "value_changed"
ROUTE1552.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_5"
ROUTE1552.toField = "rotation"
ROUTE1552.toNode = "hanim_l_tarsal_proximal_phalanx_5"

Scene7.children.append(ROUTE1552)
ROUTE1553 = x3d.ROUTE()
ROUTE1553.fromField = "fraction_changed"
ROUTE1553.fromNode = "Armature_Clock"
ROUTE1553.toField = "set_fraction"
ROUTE1553.toNode = "Armature_OI_l_tarsal_middle_phalanx_5"

Scene7.children.append(ROUTE1553)
ROUTE1554 = x3d.ROUTE()
ROUTE1554.fromField = "value_changed"
ROUTE1554.fromNode = "Armature_OI_l_tarsal_middle_phalanx_5"
ROUTE1554.toField = "rotation"
ROUTE1554.toNode = "hanim_l_tarsal_middle_phalanx_5"

Scene7.children.append(ROUTE1554)
ROUTE1555 = x3d.ROUTE()
ROUTE1555.fromField = "fraction_changed"
ROUTE1555.fromNode = "Armature_Clock"
ROUTE1555.toField = "set_fraction"
ROUTE1555.toNode = "Armature_OI_l_tarsal_distal_phalanx_5"

Scene7.children.append(ROUTE1555)
ROUTE1556 = x3d.ROUTE()
ROUTE1556.fromField = "value_changed"
ROUTE1556.fromNode = "Armature_OI_l_tarsal_distal_phalanx_5"
ROUTE1556.toField = "rotation"
ROUTE1556.toNode = "hanim_l_tarsal_distal_phalanx_5"

Scene7.children.append(ROUTE1556)
ROUTE1557 = x3d.ROUTE()
ROUTE1557.fromField = "fraction_changed"
ROUTE1557.fromNode = "Armature_Clock"
ROUTE1557.toField = "set_fraction"
ROUTE1557.toNode = "Armature_OI_r_thigh"

Scene7.children.append(ROUTE1557)
ROUTE1558 = x3d.ROUTE()
ROUTE1558.fromField = "value_changed"
ROUTE1558.fromNode = "Armature_OI_r_thigh"
ROUTE1558.toField = "rotation"
ROUTE1558.toNode = "hanim_r_thigh"

Scene7.children.append(ROUTE1558)
ROUTE1559 = x3d.ROUTE()
ROUTE1559.fromField = "fraction_changed"
ROUTE1559.fromNode = "Armature_Clock"
ROUTE1559.toField = "set_fraction"
ROUTE1559.toNode = "Armature_OI_r_calf"

Scene7.children.append(ROUTE1559)
ROUTE1560 = x3d.ROUTE()
ROUTE1560.fromField = "value_changed"
ROUTE1560.fromNode = "Armature_OI_r_calf"
ROUTE1560.toField = "rotation"
ROUTE1560.toNode = "hanim_r_calf"

Scene7.children.append(ROUTE1560)
ROUTE1561 = x3d.ROUTE()
ROUTE1561.fromField = "fraction_changed"
ROUTE1561.fromNode = "Armature_Clock"
ROUTE1561.toField = "set_fraction"
ROUTE1561.toNode = "Armature_OI_r_talus"

Scene7.children.append(ROUTE1561)
ROUTE1562 = x3d.ROUTE()
ROUTE1562.fromField = "value_changed"
ROUTE1562.fromNode = "Armature_OI_r_talus"
ROUTE1562.toField = "rotation"
ROUTE1562.toNode = "hanim_r_talus"

Scene7.children.append(ROUTE1562)
ROUTE1563 = x3d.ROUTE()
ROUTE1563.fromField = "fraction_changed"
ROUTE1563.fromNode = "Armature_Clock"
ROUTE1563.toField = "set_fraction"
ROUTE1563.toNode = "Armature_OI_r_navicular"

Scene7.children.append(ROUTE1563)
ROUTE1564 = x3d.ROUTE()
ROUTE1564.fromField = "value_changed"
ROUTE1564.fromNode = "Armature_OI_r_navicular"
ROUTE1564.toField = "rotation"
ROUTE1564.toNode = "hanim_r_navicular"

Scene7.children.append(ROUTE1564)
ROUTE1565 = x3d.ROUTE()
ROUTE1565.fromField = "fraction_changed"
ROUTE1565.fromNode = "Armature_Clock"
ROUTE1565.toField = "set_fraction"
ROUTE1565.toNode = "Armature_OI_r_cuneiform_1"

Scene7.children.append(ROUTE1565)
ROUTE1566 = x3d.ROUTE()
ROUTE1566.fromField = "value_changed"
ROUTE1566.fromNode = "Armature_OI_r_cuneiform_1"
ROUTE1566.toField = "rotation"
ROUTE1566.toNode = "hanim_r_cuneiform_1"

Scene7.children.append(ROUTE1566)
ROUTE1567 = x3d.ROUTE()
ROUTE1567.fromField = "fraction_changed"
ROUTE1567.fromNode = "Armature_Clock"
ROUTE1567.toField = "set_fraction"
ROUTE1567.toNode = "Armature_OI_r_metatarsal_1"

Scene7.children.append(ROUTE1567)
ROUTE1568 = x3d.ROUTE()
ROUTE1568.fromField = "value_changed"
ROUTE1568.fromNode = "Armature_OI_r_metatarsal_1"
ROUTE1568.toField = "rotation"
ROUTE1568.toNode = "hanim_r_metatarsal_1"

Scene7.children.append(ROUTE1568)
ROUTE1569 = x3d.ROUTE()
ROUTE1569.fromField = "fraction_changed"
ROUTE1569.fromNode = "Armature_Clock"
ROUTE1569.toField = "set_fraction"
ROUTE1569.toNode = "Armature_OI_r_tarsal_proximal_phalanx_1"

Scene7.children.append(ROUTE1569)
ROUTE1570 = x3d.ROUTE()
ROUTE1570.fromField = "value_changed"
ROUTE1570.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_1"
ROUTE1570.toField = "rotation"
ROUTE1570.toNode = "hanim_r_tarsal_proximal_phalanx_1"

Scene7.children.append(ROUTE1570)
ROUTE1571 = x3d.ROUTE()
ROUTE1571.fromField = "fraction_changed"
ROUTE1571.fromNode = "Armature_Clock"
ROUTE1571.toField = "set_fraction"
ROUTE1571.toNode = "Armature_OI_r_tarsal_distal_phalanx_1"

Scene7.children.append(ROUTE1571)
ROUTE1572 = x3d.ROUTE()
ROUTE1572.fromField = "value_changed"
ROUTE1572.fromNode = "Armature_OI_r_tarsal_distal_phalanx_1"
ROUTE1572.toField = "rotation"
ROUTE1572.toNode = "hanim_r_tarsal_distal_phalanx_1"

Scene7.children.append(ROUTE1572)
ROUTE1573 = x3d.ROUTE()
ROUTE1573.fromField = "fraction_changed"
ROUTE1573.fromNode = "Armature_Clock"
ROUTE1573.toField = "set_fraction"
ROUTE1573.toNode = "Armature_OI_r_cuneiform_2"

Scene7.children.append(ROUTE1573)
ROUTE1574 = x3d.ROUTE()
ROUTE1574.fromField = "value_changed"
ROUTE1574.fromNode = "Armature_OI_r_cuneiform_2"
ROUTE1574.toField = "rotation"
ROUTE1574.toNode = "hanim_r_cuneiform_2"

Scene7.children.append(ROUTE1574)
ROUTE1575 = x3d.ROUTE()
ROUTE1575.fromField = "fraction_changed"
ROUTE1575.fromNode = "Armature_Clock"
ROUTE1575.toField = "set_fraction"
ROUTE1575.toNode = "Armature_OI_r_metatarsal_2"

Scene7.children.append(ROUTE1575)
ROUTE1576 = x3d.ROUTE()
ROUTE1576.fromField = "value_changed"
ROUTE1576.fromNode = "Armature_OI_r_metatarsal_2"
ROUTE1576.toField = "rotation"
ROUTE1576.toNode = "hanim_r_metatarsal_2"

Scene7.children.append(ROUTE1576)
ROUTE1577 = x3d.ROUTE()
ROUTE1577.fromField = "fraction_changed"
ROUTE1577.fromNode = "Armature_Clock"
ROUTE1577.toField = "set_fraction"
ROUTE1577.toNode = "Armature_OI_r_tarsal_proximal_phalanx_2"

Scene7.children.append(ROUTE1577)
ROUTE1578 = x3d.ROUTE()
ROUTE1578.fromField = "value_changed"
ROUTE1578.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_2"
ROUTE1578.toField = "rotation"
ROUTE1578.toNode = "hanim_r_tarsal_proximal_phalanx_2"

Scene7.children.append(ROUTE1578)
ROUTE1579 = x3d.ROUTE()
ROUTE1579.fromField = "fraction_changed"
ROUTE1579.fromNode = "Armature_Clock"
ROUTE1579.toField = "set_fraction"
ROUTE1579.toNode = "Armature_OI_r_tarsal_middle_phalanx_2"

Scene7.children.append(ROUTE1579)
ROUTE1580 = x3d.ROUTE()
ROUTE1580.fromField = "value_changed"
ROUTE1580.fromNode = "Armature_OI_r_tarsal_middle_phalanx_2"
ROUTE1580.toField = "rotation"
ROUTE1580.toNode = "hanim_r_tarsal_middle_phalanx_2"

Scene7.children.append(ROUTE1580)
ROUTE1581 = x3d.ROUTE()
ROUTE1581.fromField = "fraction_changed"
ROUTE1581.fromNode = "Armature_Clock"
ROUTE1581.toField = "set_fraction"
ROUTE1581.toNode = "Armature_OI_r_tarsal_distal_phalanx_2"

Scene7.children.append(ROUTE1581)
ROUTE1582 = x3d.ROUTE()
ROUTE1582.fromField = "value_changed"
ROUTE1582.fromNode = "Armature_OI_r_tarsal_distal_phalanx_2"
ROUTE1582.toField = "rotation"
ROUTE1582.toNode = "hanim_r_tarsal_distal_phalanx_2"

Scene7.children.append(ROUTE1582)
ROUTE1583 = x3d.ROUTE()
ROUTE1583.fromField = "fraction_changed"
ROUTE1583.fromNode = "Armature_Clock"
ROUTE1583.toField = "set_fraction"
ROUTE1583.toNode = "Armature_OI_r_cuneiform_3"

Scene7.children.append(ROUTE1583)
ROUTE1584 = x3d.ROUTE()
ROUTE1584.fromField = "value_changed"
ROUTE1584.fromNode = "Armature_OI_r_cuneiform_3"
ROUTE1584.toField = "rotation"
ROUTE1584.toNode = "hanim_r_cuneiform_3"

Scene7.children.append(ROUTE1584)
ROUTE1585 = x3d.ROUTE()
ROUTE1585.fromField = "fraction_changed"
ROUTE1585.fromNode = "Armature_Clock"
ROUTE1585.toField = "set_fraction"
ROUTE1585.toNode = "Armature_OI_r_metatarsal_3"

Scene7.children.append(ROUTE1585)
ROUTE1586 = x3d.ROUTE()
ROUTE1586.fromField = "value_changed"
ROUTE1586.fromNode = "Armature_OI_r_metatarsal_3"
ROUTE1586.toField = "rotation"
ROUTE1586.toNode = "hanim_r_metatarsal_3"

Scene7.children.append(ROUTE1586)
ROUTE1587 = x3d.ROUTE()
ROUTE1587.fromField = "fraction_changed"
ROUTE1587.fromNode = "Armature_Clock"
ROUTE1587.toField = "set_fraction"
ROUTE1587.toNode = "Armature_OI_r_tarsal_proximal_phalanx_3"

Scene7.children.append(ROUTE1587)
ROUTE1588 = x3d.ROUTE()
ROUTE1588.fromField = "value_changed"
ROUTE1588.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_3"
ROUTE1588.toField = "rotation"
ROUTE1588.toNode = "hanim_r_tarsal_proximal_phalanx_3"

Scene7.children.append(ROUTE1588)
ROUTE1589 = x3d.ROUTE()
ROUTE1589.fromField = "fraction_changed"
ROUTE1589.fromNode = "Armature_Clock"
ROUTE1589.toField = "set_fraction"
ROUTE1589.toNode = "Armature_OI_r_tarsal_middle_phalanx_3"

Scene7.children.append(ROUTE1589)
ROUTE1590 = x3d.ROUTE()
ROUTE1590.fromField = "value_changed"
ROUTE1590.fromNode = "Armature_OI_r_tarsal_middle_phalanx_3"
ROUTE1590.toField = "rotation"
ROUTE1590.toNode = "hanim_r_tarsal_middle_phalanx_3"

Scene7.children.append(ROUTE1590)
ROUTE1591 = x3d.ROUTE()
ROUTE1591.fromField = "fraction_changed"
ROUTE1591.fromNode = "Armature_Clock"
ROUTE1591.toField = "set_fraction"
ROUTE1591.toNode = "Armature_OI_r_tarsal_distal_phalanx_3"

Scene7.children.append(ROUTE1591)
ROUTE1592 = x3d.ROUTE()
ROUTE1592.fromField = "value_changed"
ROUTE1592.fromNode = "Armature_OI_r_tarsal_distal_phalanx_3"
ROUTE1592.toField = "rotation"
ROUTE1592.toNode = "hanim_r_tarsal_distal_phalanx_3"

Scene7.children.append(ROUTE1592)
ROUTE1593 = x3d.ROUTE()
ROUTE1593.fromField = "fraction_changed"
ROUTE1593.fromNode = "Armature_Clock"
ROUTE1593.toField = "set_fraction"
ROUTE1593.toNode = "Armature_OI_r_calcaneus"

Scene7.children.append(ROUTE1593)
ROUTE1594 = x3d.ROUTE()
ROUTE1594.fromField = "value_changed"
ROUTE1594.fromNode = "Armature_OI_r_calcaneus"
ROUTE1594.toField = "rotation"
ROUTE1594.toNode = "hanim_r_calcaneus"

Scene7.children.append(ROUTE1594)
ROUTE1595 = x3d.ROUTE()
ROUTE1595.fromField = "fraction_changed"
ROUTE1595.fromNode = "Armature_Clock"
ROUTE1595.toField = "set_fraction"
ROUTE1595.toNode = "Armature_OI_r_cuboid"

Scene7.children.append(ROUTE1595)
ROUTE1596 = x3d.ROUTE()
ROUTE1596.fromField = "value_changed"
ROUTE1596.fromNode = "Armature_OI_r_cuboid"
ROUTE1596.toField = "rotation"
ROUTE1596.toNode = "hanim_r_cuboid"

Scene7.children.append(ROUTE1596)
ROUTE1597 = x3d.ROUTE()
ROUTE1597.fromField = "fraction_changed"
ROUTE1597.fromNode = "Armature_Clock"
ROUTE1597.toField = "set_fraction"
ROUTE1597.toNode = "Armature_OI_r_metatarsal_4"

Scene7.children.append(ROUTE1597)
ROUTE1598 = x3d.ROUTE()
ROUTE1598.fromField = "value_changed"
ROUTE1598.fromNode = "Armature_OI_r_metatarsal_4"
ROUTE1598.toField = "rotation"
ROUTE1598.toNode = "hanim_r_metatarsal_4"

Scene7.children.append(ROUTE1598)
ROUTE1599 = x3d.ROUTE()
ROUTE1599.fromField = "fraction_changed"
ROUTE1599.fromNode = "Armature_Clock"
ROUTE1599.toField = "set_fraction"
ROUTE1599.toNode = "Armature_OI_r_tarsal_proximal_phalanx_4"

Scene7.children.append(ROUTE1599)
ROUTE1600 = x3d.ROUTE()
ROUTE1600.fromField = "value_changed"
ROUTE1600.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_4"
ROUTE1600.toField = "rotation"
ROUTE1600.toNode = "hanim_r_tarsal_proximal_phalanx_4"

Scene7.children.append(ROUTE1600)
ROUTE1601 = x3d.ROUTE()
ROUTE1601.fromField = "fraction_changed"
ROUTE1601.fromNode = "Armature_Clock"
ROUTE1601.toField = "set_fraction"
ROUTE1601.toNode = "Armature_OI_r_tarsal_middle_phalanx_4"

Scene7.children.append(ROUTE1601)
ROUTE1602 = x3d.ROUTE()
ROUTE1602.fromField = "value_changed"
ROUTE1602.fromNode = "Armature_OI_r_tarsal_middle_phalanx_4"
ROUTE1602.toField = "rotation"
ROUTE1602.toNode = "hanim_r_tarsal_middle_phalanx_4"

Scene7.children.append(ROUTE1602)
ROUTE1603 = x3d.ROUTE()
ROUTE1603.fromField = "fraction_changed"
ROUTE1603.fromNode = "Armature_Clock"
ROUTE1603.toField = "set_fraction"
ROUTE1603.toNode = "Armature_OI_r_tarsal_distal_phalanx_4"

Scene7.children.append(ROUTE1603)
ROUTE1604 = x3d.ROUTE()
ROUTE1604.fromField = "value_changed"
ROUTE1604.fromNode = "Armature_OI_r_tarsal_distal_phalanx_4"
ROUTE1604.toField = "rotation"
ROUTE1604.toNode = "hanim_r_tarsal_distal_phalanx_4"

Scene7.children.append(ROUTE1604)
ROUTE1605 = x3d.ROUTE()
ROUTE1605.fromField = "fraction_changed"
ROUTE1605.fromNode = "Armature_Clock"
ROUTE1605.toField = "set_fraction"
ROUTE1605.toNode = "Armature_OI_r_metatarsal_5"

Scene7.children.append(ROUTE1605)
ROUTE1606 = x3d.ROUTE()
ROUTE1606.fromField = "value_changed"
ROUTE1606.fromNode = "Armature_OI_r_metatarsal_5"
ROUTE1606.toField = "rotation"
ROUTE1606.toNode = "hanim_r_metatarsal_5"

Scene7.children.append(ROUTE1606)
ROUTE1607 = x3d.ROUTE()
ROUTE1607.fromField = "fraction_changed"
ROUTE1607.fromNode = "Armature_Clock"
ROUTE1607.toField = "set_fraction"
ROUTE1607.toNode = "Armature_OI_r_tarsal_proximal_phalanx_5"

Scene7.children.append(ROUTE1607)
ROUTE1608 = x3d.ROUTE()
ROUTE1608.fromField = "value_changed"
ROUTE1608.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_5"
ROUTE1608.toField = "rotation"
ROUTE1608.toNode = "hanim_r_tarsal_proximal_phalanx_5"

Scene7.children.append(ROUTE1608)
ROUTE1609 = x3d.ROUTE()
ROUTE1609.fromField = "fraction_changed"
ROUTE1609.fromNode = "Armature_Clock"
ROUTE1609.toField = "set_fraction"
ROUTE1609.toNode = "Armature_OI_r_tarsal_middle_phalanx_5"

Scene7.children.append(ROUTE1609)
ROUTE1610 = x3d.ROUTE()
ROUTE1610.fromField = "value_changed"
ROUTE1610.fromNode = "Armature_OI_r_tarsal_middle_phalanx_5"
ROUTE1610.toField = "rotation"
ROUTE1610.toNode = "hanim_r_tarsal_middle_phalanx_5"

Scene7.children.append(ROUTE1610)
ROUTE1611 = x3d.ROUTE()
ROUTE1611.fromField = "fraction_changed"
ROUTE1611.fromNode = "Armature_Clock"
ROUTE1611.toField = "set_fraction"
ROUTE1611.toNode = "Armature_OI_r_tarsal_distal_phalanx_5"

Scene7.children.append(ROUTE1611)
ROUTE1612 = x3d.ROUTE()
ROUTE1612.fromField = "value_changed"
ROUTE1612.fromNode = "Armature_OI_r_tarsal_distal_phalanx_5"
ROUTE1612.toField = "rotation"
ROUTE1612.toNode = "hanim_r_tarsal_distal_phalanx_5"

Scene7.children.append(ROUTE1612)
ROUTE1613 = x3d.ROUTE()
ROUTE1613.fromField = "fraction_changed"
ROUTE1613.fromNode = "Armature_Clock"
ROUTE1613.toField = "set_fraction"
ROUTE1613.toNode = "Armature_OI_l5"

Scene7.children.append(ROUTE1613)
ROUTE1614 = x3d.ROUTE()
ROUTE1614.fromField = "value_changed"
ROUTE1614.fromNode = "Armature_OI_l5"
ROUTE1614.toField = "rotation"
ROUTE1614.toNode = "hanim_l5"

Scene7.children.append(ROUTE1614)
ROUTE1615 = x3d.ROUTE()
ROUTE1615.fromField = "fraction_changed"
ROUTE1615.fromNode = "Armature_Clock"
ROUTE1615.toField = "set_fraction"
ROUTE1615.toNode = "Armature_OI_l4"

Scene7.children.append(ROUTE1615)
ROUTE1616 = x3d.ROUTE()
ROUTE1616.fromField = "value_changed"
ROUTE1616.fromNode = "Armature_OI_l4"
ROUTE1616.toField = "rotation"
ROUTE1616.toNode = "hanim_l4"

Scene7.children.append(ROUTE1616)
ROUTE1617 = x3d.ROUTE()
ROUTE1617.fromField = "fraction_changed"
ROUTE1617.fromNode = "Armature_Clock"
ROUTE1617.toField = "set_fraction"
ROUTE1617.toNode = "Armature_OI_l3"

Scene7.children.append(ROUTE1617)
ROUTE1618 = x3d.ROUTE()
ROUTE1618.fromField = "value_changed"
ROUTE1618.fromNode = "Armature_OI_l3"
ROUTE1618.toField = "rotation"
ROUTE1618.toNode = "hanim_l3"

Scene7.children.append(ROUTE1618)
ROUTE1619 = x3d.ROUTE()
ROUTE1619.fromField = "fraction_changed"
ROUTE1619.fromNode = "Armature_Clock"
ROUTE1619.toField = "set_fraction"
ROUTE1619.toNode = "Armature_OI_l2"

Scene7.children.append(ROUTE1619)
ROUTE1620 = x3d.ROUTE()
ROUTE1620.fromField = "value_changed"
ROUTE1620.fromNode = "Armature_OI_l2"
ROUTE1620.toField = "rotation"
ROUTE1620.toNode = "hanim_l2"

Scene7.children.append(ROUTE1620)
ROUTE1621 = x3d.ROUTE()
ROUTE1621.fromField = "fraction_changed"
ROUTE1621.fromNode = "Armature_Clock"
ROUTE1621.toField = "set_fraction"
ROUTE1621.toNode = "Armature_OI_l1"

Scene7.children.append(ROUTE1621)
ROUTE1622 = x3d.ROUTE()
ROUTE1622.fromField = "value_changed"
ROUTE1622.fromNode = "Armature_OI_l1"
ROUTE1622.toField = "rotation"
ROUTE1622.toNode = "hanim_l1"

Scene7.children.append(ROUTE1622)
ROUTE1623 = x3d.ROUTE()
ROUTE1623.fromField = "fraction_changed"
ROUTE1623.fromNode = "Armature_Clock"
ROUTE1623.toField = "set_fraction"
ROUTE1623.toNode = "Armature_OI_t12"

Scene7.children.append(ROUTE1623)
ROUTE1624 = x3d.ROUTE()
ROUTE1624.fromField = "value_changed"
ROUTE1624.fromNode = "Armature_OI_t12"
ROUTE1624.toField = "rotation"
ROUTE1624.toNode = "hanim_t12"

Scene7.children.append(ROUTE1624)
ROUTE1625 = x3d.ROUTE()
ROUTE1625.fromField = "fraction_changed"
ROUTE1625.fromNode = "Armature_Clock"
ROUTE1625.toField = "set_fraction"
ROUTE1625.toNode = "Armature_OI_t11"

Scene7.children.append(ROUTE1625)
ROUTE1626 = x3d.ROUTE()
ROUTE1626.fromField = "value_changed"
ROUTE1626.fromNode = "Armature_OI_t11"
ROUTE1626.toField = "rotation"
ROUTE1626.toNode = "hanim_t11"

Scene7.children.append(ROUTE1626)
ROUTE1627 = x3d.ROUTE()
ROUTE1627.fromField = "fraction_changed"
ROUTE1627.fromNode = "Armature_Clock"
ROUTE1627.toField = "set_fraction"
ROUTE1627.toNode = "Armature_OI_t10"

Scene7.children.append(ROUTE1627)
ROUTE1628 = x3d.ROUTE()
ROUTE1628.fromField = "value_changed"
ROUTE1628.fromNode = "Armature_OI_t10"
ROUTE1628.toField = "rotation"
ROUTE1628.toNode = "hanim_t10"

Scene7.children.append(ROUTE1628)
ROUTE1629 = x3d.ROUTE()
ROUTE1629.fromField = "fraction_changed"
ROUTE1629.fromNode = "Armature_Clock"
ROUTE1629.toField = "set_fraction"
ROUTE1629.toNode = "Armature_OI_t9"

Scene7.children.append(ROUTE1629)
ROUTE1630 = x3d.ROUTE()
ROUTE1630.fromField = "value_changed"
ROUTE1630.fromNode = "Armature_OI_t9"
ROUTE1630.toField = "rotation"
ROUTE1630.toNode = "hanim_t9"

Scene7.children.append(ROUTE1630)
ROUTE1631 = x3d.ROUTE()
ROUTE1631.fromField = "fraction_changed"
ROUTE1631.fromNode = "Armature_Clock"
ROUTE1631.toField = "set_fraction"
ROUTE1631.toNode = "Armature_OI_t8"

Scene7.children.append(ROUTE1631)
ROUTE1632 = x3d.ROUTE()
ROUTE1632.fromField = "value_changed"
ROUTE1632.fromNode = "Armature_OI_t8"
ROUTE1632.toField = "rotation"
ROUTE1632.toNode = "hanim_t8"

Scene7.children.append(ROUTE1632)
ROUTE1633 = x3d.ROUTE()
ROUTE1633.fromField = "fraction_changed"
ROUTE1633.fromNode = "Armature_Clock"
ROUTE1633.toField = "set_fraction"
ROUTE1633.toNode = "Armature_OI_t7"

Scene7.children.append(ROUTE1633)
ROUTE1634 = x3d.ROUTE()
ROUTE1634.fromField = "value_changed"
ROUTE1634.fromNode = "Armature_OI_t7"
ROUTE1634.toField = "rotation"
ROUTE1634.toNode = "hanim_t7"

Scene7.children.append(ROUTE1634)
ROUTE1635 = x3d.ROUTE()
ROUTE1635.fromField = "fraction_changed"
ROUTE1635.fromNode = "Armature_Clock"
ROUTE1635.toField = "set_fraction"
ROUTE1635.toNode = "Armature_OI_t6"

Scene7.children.append(ROUTE1635)
ROUTE1636 = x3d.ROUTE()
ROUTE1636.fromField = "value_changed"
ROUTE1636.fromNode = "Armature_OI_t6"
ROUTE1636.toField = "rotation"
ROUTE1636.toNode = "hanim_t6"

Scene7.children.append(ROUTE1636)
ROUTE1637 = x3d.ROUTE()
ROUTE1637.fromField = "fraction_changed"
ROUTE1637.fromNode = "Armature_Clock"
ROUTE1637.toField = "set_fraction"
ROUTE1637.toNode = "Armature_OI_t5"

Scene7.children.append(ROUTE1637)
ROUTE1638 = x3d.ROUTE()
ROUTE1638.fromField = "value_changed"
ROUTE1638.fromNode = "Armature_OI_t5"
ROUTE1638.toField = "rotation"
ROUTE1638.toNode = "hanim_t5"

Scene7.children.append(ROUTE1638)
ROUTE1639 = x3d.ROUTE()
ROUTE1639.fromField = "fraction_changed"
ROUTE1639.fromNode = "Armature_Clock"
ROUTE1639.toField = "set_fraction"
ROUTE1639.toNode = "Armature_OI_t4"

Scene7.children.append(ROUTE1639)
ROUTE1640 = x3d.ROUTE()
ROUTE1640.fromField = "value_changed"
ROUTE1640.fromNode = "Armature_OI_t4"
ROUTE1640.toField = "rotation"
ROUTE1640.toNode = "hanim_t4"

Scene7.children.append(ROUTE1640)
ROUTE1641 = x3d.ROUTE()
ROUTE1641.fromField = "fraction_changed"
ROUTE1641.fromNode = "Armature_Clock"
ROUTE1641.toField = "set_fraction"
ROUTE1641.toNode = "Armature_OI_t3"

Scene7.children.append(ROUTE1641)
ROUTE1642 = x3d.ROUTE()
ROUTE1642.fromField = "value_changed"
ROUTE1642.fromNode = "Armature_OI_t3"
ROUTE1642.toField = "rotation"
ROUTE1642.toNode = "hanim_t3"

Scene7.children.append(ROUTE1642)
ROUTE1643 = x3d.ROUTE()
ROUTE1643.fromField = "fraction_changed"
ROUTE1643.fromNode = "Armature_Clock"
ROUTE1643.toField = "set_fraction"
ROUTE1643.toNode = "Armature_OI_t2"

Scene7.children.append(ROUTE1643)
ROUTE1644 = x3d.ROUTE()
ROUTE1644.fromField = "value_changed"
ROUTE1644.fromNode = "Armature_OI_t2"
ROUTE1644.toField = "rotation"
ROUTE1644.toNode = "hanim_t2"

Scene7.children.append(ROUTE1644)
ROUTE1645 = x3d.ROUTE()
ROUTE1645.fromField = "fraction_changed"
ROUTE1645.fromNode = "Armature_Clock"
ROUTE1645.toField = "set_fraction"
ROUTE1645.toNode = "Armature_OI_t1"

Scene7.children.append(ROUTE1645)
ROUTE1646 = x3d.ROUTE()
ROUTE1646.fromField = "value_changed"
ROUTE1646.fromNode = "Armature_OI_t1"
ROUTE1646.toField = "rotation"
ROUTE1646.toNode = "hanim_t1"

Scene7.children.append(ROUTE1646)
ROUTE1647 = x3d.ROUTE()
ROUTE1647.fromField = "fraction_changed"
ROUTE1647.fromNode = "Armature_Clock"
ROUTE1647.toField = "set_fraction"
ROUTE1647.toNode = "Armature_OI_c7"

Scene7.children.append(ROUTE1647)
ROUTE1648 = x3d.ROUTE()
ROUTE1648.fromField = "value_changed"
ROUTE1648.fromNode = "Armature_OI_c7"
ROUTE1648.toField = "rotation"
ROUTE1648.toNode = "hanim_c7"

Scene7.children.append(ROUTE1648)
ROUTE1649 = x3d.ROUTE()
ROUTE1649.fromField = "fraction_changed"
ROUTE1649.fromNode = "Armature_Clock"
ROUTE1649.toField = "set_fraction"
ROUTE1649.toNode = "Armature_OI_c6"

Scene7.children.append(ROUTE1649)
ROUTE1650 = x3d.ROUTE()
ROUTE1650.fromField = "value_changed"
ROUTE1650.fromNode = "Armature_OI_c6"
ROUTE1650.toField = "rotation"
ROUTE1650.toNode = "hanim_c6"

Scene7.children.append(ROUTE1650)
ROUTE1651 = x3d.ROUTE()
ROUTE1651.fromField = "fraction_changed"
ROUTE1651.fromNode = "Armature_Clock"
ROUTE1651.toField = "set_fraction"
ROUTE1651.toNode = "Armature_OI_c5"

Scene7.children.append(ROUTE1651)
ROUTE1652 = x3d.ROUTE()
ROUTE1652.fromField = "value_changed"
ROUTE1652.fromNode = "Armature_OI_c5"
ROUTE1652.toField = "rotation"
ROUTE1652.toNode = "hanim_c5"

Scene7.children.append(ROUTE1652)
ROUTE1653 = x3d.ROUTE()
ROUTE1653.fromField = "fraction_changed"
ROUTE1653.fromNode = "Armature_Clock"
ROUTE1653.toField = "set_fraction"
ROUTE1653.toNode = "Armature_OI_c4"

Scene7.children.append(ROUTE1653)
ROUTE1654 = x3d.ROUTE()
ROUTE1654.fromField = "value_changed"
ROUTE1654.fromNode = "Armature_OI_c4"
ROUTE1654.toField = "rotation"
ROUTE1654.toNode = "hanim_c4"

Scene7.children.append(ROUTE1654)
ROUTE1655 = x3d.ROUTE()
ROUTE1655.fromField = "fraction_changed"
ROUTE1655.fromNode = "Armature_Clock"
ROUTE1655.toField = "set_fraction"
ROUTE1655.toNode = "Armature_OI_c3"

Scene7.children.append(ROUTE1655)
ROUTE1656 = x3d.ROUTE()
ROUTE1656.fromField = "value_changed"
ROUTE1656.fromNode = "Armature_OI_c3"
ROUTE1656.toField = "rotation"
ROUTE1656.toNode = "hanim_c3"

Scene7.children.append(ROUTE1656)
ROUTE1657 = x3d.ROUTE()
ROUTE1657.fromField = "fraction_changed"
ROUTE1657.fromNode = "Armature_Clock"
ROUTE1657.toField = "set_fraction"
ROUTE1657.toNode = "Armature_OI_c2"

Scene7.children.append(ROUTE1657)
ROUTE1658 = x3d.ROUTE()
ROUTE1658.fromField = "value_changed"
ROUTE1658.fromNode = "Armature_OI_c2"
ROUTE1658.toField = "rotation"
ROUTE1658.toNode = "hanim_c2"

Scene7.children.append(ROUTE1658)
ROUTE1659 = x3d.ROUTE()
ROUTE1659.fromField = "fraction_changed"
ROUTE1659.fromNode = "Armature_Clock"
ROUTE1659.toField = "set_fraction"
ROUTE1659.toNode = "Armature_OI_c1"

Scene7.children.append(ROUTE1659)
ROUTE1660 = x3d.ROUTE()
ROUTE1660.fromField = "value_changed"
ROUTE1660.fromNode = "Armature_OI_c1"
ROUTE1660.toField = "rotation"
ROUTE1660.toNode = "hanim_c1"

Scene7.children.append(ROUTE1660)
ROUTE1661 = x3d.ROUTE()
ROUTE1661.fromField = "fraction_changed"
ROUTE1661.fromNode = "Armature_Clock"
ROUTE1661.toField = "set_fraction"
ROUTE1661.toNode = "Armature_OI_skull"

Scene7.children.append(ROUTE1661)
ROUTE1662 = x3d.ROUTE()
ROUTE1662.fromField = "value_changed"
ROUTE1662.fromNode = "Armature_OI_skull"
ROUTE1662.toField = "rotation"
ROUTE1662.toNode = "hanim_skull"

Scene7.children.append(ROUTE1662)
ROUTE1663 = x3d.ROUTE()
ROUTE1663.fromField = "fraction_changed"
ROUTE1663.fromNode = "Armature_Clock"
ROUTE1663.toField = "set_fraction"
ROUTE1663.toNode = "Armature_OI_l_eyelid"

Scene7.children.append(ROUTE1663)
ROUTE1664 = x3d.ROUTE()
ROUTE1664.fromField = "value_changed"
ROUTE1664.fromNode = "Armature_OI_l_eyelid"
ROUTE1664.toField = "rotation"
ROUTE1664.toNode = "hanim_l_eyelid"

Scene7.children.append(ROUTE1664)
ROUTE1665 = x3d.ROUTE()
ROUTE1665.fromField = "fraction_changed"
ROUTE1665.fromNode = "Armature_Clock"
ROUTE1665.toField = "set_fraction"
ROUTE1665.toNode = "Armature_OI_r_eyelid"

Scene7.children.append(ROUTE1665)
ROUTE1666 = x3d.ROUTE()
ROUTE1666.fromField = "value_changed"
ROUTE1666.fromNode = "Armature_OI_r_eyelid"
ROUTE1666.toField = "rotation"
ROUTE1666.toNode = "hanim_r_eyelid"

Scene7.children.append(ROUTE1666)
ROUTE1667 = x3d.ROUTE()
ROUTE1667.fromField = "fraction_changed"
ROUTE1667.fromNode = "Armature_Clock"
ROUTE1667.toField = "set_fraction"
ROUTE1667.toNode = "Armature_OI_l_eyeball"

Scene7.children.append(ROUTE1667)
ROUTE1668 = x3d.ROUTE()
ROUTE1668.fromField = "value_changed"
ROUTE1668.fromNode = "Armature_OI_l_eyeball"
ROUTE1668.toField = "rotation"
ROUTE1668.toNode = "hanim_l_eyeball"

Scene7.children.append(ROUTE1668)
ROUTE1669 = x3d.ROUTE()
ROUTE1669.fromField = "fraction_changed"
ROUTE1669.fromNode = "Armature_Clock"
ROUTE1669.toField = "set_fraction"
ROUTE1669.toNode = "Armature_OI_r_eyeball"

Scene7.children.append(ROUTE1669)
ROUTE1670 = x3d.ROUTE()
ROUTE1670.fromField = "value_changed"
ROUTE1670.fromNode = "Armature_OI_r_eyeball"
ROUTE1670.toField = "rotation"
ROUTE1670.toNode = "hanim_r_eyeball"

Scene7.children.append(ROUTE1670)
ROUTE1671 = x3d.ROUTE()
ROUTE1671.fromField = "fraction_changed"
ROUTE1671.fromNode = "Armature_Clock"
ROUTE1671.toField = "set_fraction"
ROUTE1671.toNode = "Armature_OI_l_eyebrow"

Scene7.children.append(ROUTE1671)
ROUTE1672 = x3d.ROUTE()
ROUTE1672.fromField = "value_changed"
ROUTE1672.fromNode = "Armature_OI_l_eyebrow"
ROUTE1672.toField = "rotation"
ROUTE1672.toNode = "hanim_l_eyebrow"

Scene7.children.append(ROUTE1672)
ROUTE1673 = x3d.ROUTE()
ROUTE1673.fromField = "fraction_changed"
ROUTE1673.fromNode = "Armature_Clock"
ROUTE1673.toField = "set_fraction"
ROUTE1673.toNode = "Armature_OI_r_eyebrow"

Scene7.children.append(ROUTE1673)
ROUTE1674 = x3d.ROUTE()
ROUTE1674.fromField = "value_changed"
ROUTE1674.fromNode = "Armature_OI_r_eyebrow"
ROUTE1674.toField = "rotation"
ROUTE1674.toNode = "hanim_r_eyebrow"

Scene7.children.append(ROUTE1674)
ROUTE1675 = x3d.ROUTE()
ROUTE1675.fromField = "fraction_changed"
ROUTE1675.fromNode = "Armature_Clock"
ROUTE1675.toField = "set_fraction"
ROUTE1675.toNode = "Armature_OI_jaw"

Scene7.children.append(ROUTE1675)
ROUTE1676 = x3d.ROUTE()
ROUTE1676.fromField = "value_changed"
ROUTE1676.fromNode = "Armature_OI_jaw"
ROUTE1676.toField = "rotation"
ROUTE1676.toNode = "hanim_jaw"

Scene7.children.append(ROUTE1676)
ROUTE1677 = x3d.ROUTE()
ROUTE1677.fromField = "fraction_changed"
ROUTE1677.fromNode = "Armature_Clock"
ROUTE1677.toField = "set_fraction"
ROUTE1677.toNode = "Armature_OI_l_clavicle"

Scene7.children.append(ROUTE1677)
ROUTE1678 = x3d.ROUTE()
ROUTE1678.fromField = "value_changed"
ROUTE1678.fromNode = "Armature_OI_l_clavicle"
ROUTE1678.toField = "rotation"
ROUTE1678.toNode = "hanim_l_clavicle"

Scene7.children.append(ROUTE1678)
ROUTE1679 = x3d.ROUTE()
ROUTE1679.fromField = "fraction_changed"
ROUTE1679.fromNode = "Armature_Clock"
ROUTE1679.toField = "set_fraction"
ROUTE1679.toNode = "Armature_OI_l_scapula"

Scene7.children.append(ROUTE1679)
ROUTE1680 = x3d.ROUTE()
ROUTE1680.fromField = "value_changed"
ROUTE1680.fromNode = "Armature_OI_l_scapula"
ROUTE1680.toField = "rotation"
ROUTE1680.toNode = "hanim_l_scapula"

Scene7.children.append(ROUTE1680)
ROUTE1681 = x3d.ROUTE()
ROUTE1681.fromField = "fraction_changed"
ROUTE1681.fromNode = "Armature_Clock"
ROUTE1681.toField = "set_fraction"
ROUTE1681.toNode = "Armature_OI_l_upperarm"

Scene7.children.append(ROUTE1681)
ROUTE1682 = x3d.ROUTE()
ROUTE1682.fromField = "value_changed"
ROUTE1682.fromNode = "Armature_OI_l_upperarm"
ROUTE1682.toField = "rotation"
ROUTE1682.toNode = "hanim_l_upperarm"

Scene7.children.append(ROUTE1682)
ROUTE1683 = x3d.ROUTE()
ROUTE1683.fromField = "fraction_changed"
ROUTE1683.fromNode = "Armature_Clock"
ROUTE1683.toField = "set_fraction"
ROUTE1683.toNode = "Armature_OI_l_forearm"

Scene7.children.append(ROUTE1683)
ROUTE1684 = x3d.ROUTE()
ROUTE1684.fromField = "value_changed"
ROUTE1684.fromNode = "Armature_OI_l_forearm"
ROUTE1684.toField = "rotation"
ROUTE1684.toNode = "hanim_l_forearm"

Scene7.children.append(ROUTE1684)
ROUTE1685 = x3d.ROUTE()
ROUTE1685.fromField = "fraction_changed"
ROUTE1685.fromNode = "Armature_Clock"
ROUTE1685.toField = "set_fraction"
ROUTE1685.toNode = "Armature_OI_l_carpal"

Scene7.children.append(ROUTE1685)
ROUTE1686 = x3d.ROUTE()
ROUTE1686.fromField = "value_changed"
ROUTE1686.fromNode = "Armature_OI_l_carpal"
ROUTE1686.toField = "rotation"
ROUTE1686.toNode = "hanim_l_carpal"

Scene7.children.append(ROUTE1686)
ROUTE1687 = x3d.ROUTE()
ROUTE1687.fromField = "fraction_changed"
ROUTE1687.fromNode = "Armature_Clock"
ROUTE1687.toField = "set_fraction"
ROUTE1687.toNode = "Armature_OI_l_trapezium"

Scene7.children.append(ROUTE1687)
ROUTE1688 = x3d.ROUTE()
ROUTE1688.fromField = "value_changed"
ROUTE1688.fromNode = "Armature_OI_l_trapezium"
ROUTE1688.toField = "rotation"
ROUTE1688.toNode = "hanim_l_trapezium"

Scene7.children.append(ROUTE1688)
ROUTE1689 = x3d.ROUTE()
ROUTE1689.fromField = "fraction_changed"
ROUTE1689.fromNode = "Armature_Clock"
ROUTE1689.toField = "set_fraction"
ROUTE1689.toNode = "Armature_OI_l_metacarpal_1"

Scene7.children.append(ROUTE1689)
ROUTE1690 = x3d.ROUTE()
ROUTE1690.fromField = "value_changed"
ROUTE1690.fromNode = "Armature_OI_l_metacarpal_1"
ROUTE1690.toField = "rotation"
ROUTE1690.toNode = "hanim_l_metacarpal_1"

Scene7.children.append(ROUTE1690)
ROUTE1691 = x3d.ROUTE()
ROUTE1691.fromField = "fraction_changed"
ROUTE1691.fromNode = "Armature_Clock"
ROUTE1691.toField = "set_fraction"
ROUTE1691.toNode = "Armature_OI_l_carpal_proximal_phalanx_1"

Scene7.children.append(ROUTE1691)
ROUTE1692 = x3d.ROUTE()
ROUTE1692.fromField = "value_changed"
ROUTE1692.fromNode = "Armature_OI_l_carpal_proximal_phalanx_1"
ROUTE1692.toField = "rotation"
ROUTE1692.toNode = "hanim_l_carpal_proximal_phalanx_1"

Scene7.children.append(ROUTE1692)
ROUTE1693 = x3d.ROUTE()
ROUTE1693.fromField = "fraction_changed"
ROUTE1693.fromNode = "Armature_Clock"
ROUTE1693.toField = "set_fraction"
ROUTE1693.toNode = "Armature_OI_l_carpal_distal_phalanx_1"

Scene7.children.append(ROUTE1693)
ROUTE1694 = x3d.ROUTE()
ROUTE1694.fromField = "value_changed"
ROUTE1694.fromNode = "Armature_OI_l_carpal_distal_phalanx_1"
ROUTE1694.toField = "rotation"
ROUTE1694.toNode = "hanim_l_carpal_distal_phalanx_1"

Scene7.children.append(ROUTE1694)
ROUTE1695 = x3d.ROUTE()
ROUTE1695.fromField = "fraction_changed"
ROUTE1695.fromNode = "Armature_Clock"
ROUTE1695.toField = "set_fraction"
ROUTE1695.toNode = "Armature_OI_l_trapezoid"

Scene7.children.append(ROUTE1695)
ROUTE1696 = x3d.ROUTE()
ROUTE1696.fromField = "value_changed"
ROUTE1696.fromNode = "Armature_OI_l_trapezoid"
ROUTE1696.toField = "rotation"
ROUTE1696.toNode = "hanim_l_trapezoid"

Scene7.children.append(ROUTE1696)
ROUTE1697 = x3d.ROUTE()
ROUTE1697.fromField = "fraction_changed"
ROUTE1697.fromNode = "Armature_Clock"
ROUTE1697.toField = "set_fraction"
ROUTE1697.toNode = "Armature_OI_l_metacarpal_2"

Scene7.children.append(ROUTE1697)
ROUTE1698 = x3d.ROUTE()
ROUTE1698.fromField = "value_changed"
ROUTE1698.fromNode = "Armature_OI_l_metacarpal_2"
ROUTE1698.toField = "rotation"
ROUTE1698.toNode = "hanim_l_metacarpal_2"

Scene7.children.append(ROUTE1698)
ROUTE1699 = x3d.ROUTE()
ROUTE1699.fromField = "fraction_changed"
ROUTE1699.fromNode = "Armature_Clock"
ROUTE1699.toField = "set_fraction"
ROUTE1699.toNode = "Armature_OI_l_carpal_proximal_phalanx_2"

Scene7.children.append(ROUTE1699)
ROUTE1700 = x3d.ROUTE()
ROUTE1700.fromField = "value_changed"
ROUTE1700.fromNode = "Armature_OI_l_carpal_proximal_phalanx_2"
ROUTE1700.toField = "rotation"
ROUTE1700.toNode = "hanim_l_carpal_proximal_phalanx_2"

Scene7.children.append(ROUTE1700)
ROUTE1701 = x3d.ROUTE()
ROUTE1701.fromField = "fraction_changed"
ROUTE1701.fromNode = "Armature_Clock"
ROUTE1701.toField = "set_fraction"
ROUTE1701.toNode = "Armature_OI_l_carpal_middle_phalanx_2"

Scene7.children.append(ROUTE1701)
ROUTE1702 = x3d.ROUTE()
ROUTE1702.fromField = "value_changed"
ROUTE1702.fromNode = "Armature_OI_l_carpal_middle_phalanx_2"
ROUTE1702.toField = "rotation"
ROUTE1702.toNode = "hanim_l_carpal_middle_phalanx_2"

Scene7.children.append(ROUTE1702)
ROUTE1703 = x3d.ROUTE()
ROUTE1703.fromField = "fraction_changed"
ROUTE1703.fromNode = "Armature_Clock"
ROUTE1703.toField = "set_fraction"
ROUTE1703.toNode = "Armature_OI_l_carpal_distal_phalanx_2"

Scene7.children.append(ROUTE1703)
ROUTE1704 = x3d.ROUTE()
ROUTE1704.fromField = "value_changed"
ROUTE1704.fromNode = "Armature_OI_l_carpal_distal_phalanx_2"
ROUTE1704.toField = "rotation"
ROUTE1704.toNode = "hanim_l_carpal_distal_phalanx_2"

Scene7.children.append(ROUTE1704)
ROUTE1705 = x3d.ROUTE()
ROUTE1705.fromField = "fraction_changed"
ROUTE1705.fromNode = "Armature_Clock"
ROUTE1705.toField = "set_fraction"
ROUTE1705.toNode = "Armature_OI_l_capitate"

Scene7.children.append(ROUTE1705)
ROUTE1706 = x3d.ROUTE()
ROUTE1706.fromField = "value_changed"
ROUTE1706.fromNode = "Armature_OI_l_capitate"
ROUTE1706.toField = "rotation"
ROUTE1706.toNode = "hanim_l_capitate"

Scene7.children.append(ROUTE1706)
ROUTE1707 = x3d.ROUTE()
ROUTE1707.fromField = "fraction_changed"
ROUTE1707.fromNode = "Armature_Clock"
ROUTE1707.toField = "set_fraction"
ROUTE1707.toNode = "Armature_OI_l_metacarpal_3"

Scene7.children.append(ROUTE1707)
ROUTE1708 = x3d.ROUTE()
ROUTE1708.fromField = "value_changed"
ROUTE1708.fromNode = "Armature_OI_l_metacarpal_3"
ROUTE1708.toField = "rotation"
ROUTE1708.toNode = "hanim_l_metacarpal_3"

Scene7.children.append(ROUTE1708)
ROUTE1709 = x3d.ROUTE()
ROUTE1709.fromField = "fraction_changed"
ROUTE1709.fromNode = "Armature_Clock"
ROUTE1709.toField = "set_fraction"
ROUTE1709.toNode = "Armature_OI_l_carpal_proximal_phalanx_3"

Scene7.children.append(ROUTE1709)
ROUTE1710 = x3d.ROUTE()
ROUTE1710.fromField = "value_changed"
ROUTE1710.fromNode = "Armature_OI_l_carpal_proximal_phalanx_3"
ROUTE1710.toField = "rotation"
ROUTE1710.toNode = "hanim_l_carpal_proximal_phalanx_3"

Scene7.children.append(ROUTE1710)
ROUTE1711 = x3d.ROUTE()
ROUTE1711.fromField = "fraction_changed"
ROUTE1711.fromNode = "Armature_Clock"
ROUTE1711.toField = "set_fraction"
ROUTE1711.toNode = "Armature_OI_l_carpal_middle_phalanx_3"

Scene7.children.append(ROUTE1711)
ROUTE1712 = x3d.ROUTE()
ROUTE1712.fromField = "value_changed"
ROUTE1712.fromNode = "Armature_OI_l_carpal_middle_phalanx_3"
ROUTE1712.toField = "rotation"
ROUTE1712.toNode = "hanim_l_carpal_middle_phalanx_3"

Scene7.children.append(ROUTE1712)
ROUTE1713 = x3d.ROUTE()
ROUTE1713.fromField = "fraction_changed"
ROUTE1713.fromNode = "Armature_Clock"
ROUTE1713.toField = "set_fraction"
ROUTE1713.toNode = "Armature_OI_l_carpal_distal_phalanx_3"

Scene7.children.append(ROUTE1713)
ROUTE1714 = x3d.ROUTE()
ROUTE1714.fromField = "value_changed"
ROUTE1714.fromNode = "Armature_OI_l_carpal_distal_phalanx_3"
ROUTE1714.toField = "rotation"
ROUTE1714.toNode = "hanim_l_carpal_distal_phalanx_3"

Scene7.children.append(ROUTE1714)
ROUTE1715 = x3d.ROUTE()
ROUTE1715.fromField = "fraction_changed"
ROUTE1715.fromNode = "Armature_Clock"
ROUTE1715.toField = "set_fraction"
ROUTE1715.toNode = "Armature_OI_l_hamate"

Scene7.children.append(ROUTE1715)
ROUTE1716 = x3d.ROUTE()
ROUTE1716.fromField = "value_changed"
ROUTE1716.fromNode = "Armature_OI_l_hamate"
ROUTE1716.toField = "rotation"
ROUTE1716.toNode = "hanim_l_hamate"

Scene7.children.append(ROUTE1716)
ROUTE1717 = x3d.ROUTE()
ROUTE1717.fromField = "fraction_changed"
ROUTE1717.fromNode = "Armature_Clock"
ROUTE1717.toField = "set_fraction"
ROUTE1717.toNode = "Armature_OI_l_metacarpal_4"

Scene7.children.append(ROUTE1717)
ROUTE1718 = x3d.ROUTE()
ROUTE1718.fromField = "value_changed"
ROUTE1718.fromNode = "Armature_OI_l_metacarpal_4"
ROUTE1718.toField = "rotation"
ROUTE1718.toNode = "hanim_l_metacarpal_4"

Scene7.children.append(ROUTE1718)
ROUTE1719 = x3d.ROUTE()
ROUTE1719.fromField = "fraction_changed"
ROUTE1719.fromNode = "Armature_Clock"
ROUTE1719.toField = "set_fraction"
ROUTE1719.toNode = "Armature_OI_l_carpal_proximal_phalanx_4"

Scene7.children.append(ROUTE1719)
ROUTE1720 = x3d.ROUTE()
ROUTE1720.fromField = "value_changed"
ROUTE1720.fromNode = "Armature_OI_l_carpal_proximal_phalanx_4"
ROUTE1720.toField = "rotation"
ROUTE1720.toNode = "hanim_l_carpal_proximal_phalanx_4"

Scene7.children.append(ROUTE1720)
ROUTE1721 = x3d.ROUTE()
ROUTE1721.fromField = "fraction_changed"
ROUTE1721.fromNode = "Armature_Clock"
ROUTE1721.toField = "set_fraction"
ROUTE1721.toNode = "Armature_OI_l_carpal_middle_phalanx_4"

Scene7.children.append(ROUTE1721)
ROUTE1722 = x3d.ROUTE()
ROUTE1722.fromField = "value_changed"
ROUTE1722.fromNode = "Armature_OI_l_carpal_middle_phalanx_4"
ROUTE1722.toField = "rotation"
ROUTE1722.toNode = "hanim_l_carpal_middle_phalanx_4"

Scene7.children.append(ROUTE1722)
ROUTE1723 = x3d.ROUTE()
ROUTE1723.fromField = "fraction_changed"
ROUTE1723.fromNode = "Armature_Clock"
ROUTE1723.toField = "set_fraction"
ROUTE1723.toNode = "Armature_OI_l_carpal_distal_phalanx_4"

Scene7.children.append(ROUTE1723)
ROUTE1724 = x3d.ROUTE()
ROUTE1724.fromField = "value_changed"
ROUTE1724.fromNode = "Armature_OI_l_carpal_distal_phalanx_4"
ROUTE1724.toField = "rotation"
ROUTE1724.toNode = "hanim_l_carpal_distal_phalanx_4"

Scene7.children.append(ROUTE1724)
ROUTE1725 = x3d.ROUTE()
ROUTE1725.fromField = "fraction_changed"
ROUTE1725.fromNode = "Armature_Clock"
ROUTE1725.toField = "set_fraction"
ROUTE1725.toNode = "Armature_OI_l_metacarpal_5"

Scene7.children.append(ROUTE1725)
ROUTE1726 = x3d.ROUTE()
ROUTE1726.fromField = "value_changed"
ROUTE1726.fromNode = "Armature_OI_l_metacarpal_5"
ROUTE1726.toField = "rotation"
ROUTE1726.toNode = "hanim_l_metacarpal_5"

Scene7.children.append(ROUTE1726)
ROUTE1727 = x3d.ROUTE()
ROUTE1727.fromField = "fraction_changed"
ROUTE1727.fromNode = "Armature_Clock"
ROUTE1727.toField = "set_fraction"
ROUTE1727.toNode = "Armature_OI_l_carpal_proximal_phalanx_5"

Scene7.children.append(ROUTE1727)
ROUTE1728 = x3d.ROUTE()
ROUTE1728.fromField = "value_changed"
ROUTE1728.fromNode = "Armature_OI_l_carpal_proximal_phalanx_5"
ROUTE1728.toField = "rotation"
ROUTE1728.toNode = "hanim_l_carpal_proximal_phalanx_5"

Scene7.children.append(ROUTE1728)
ROUTE1729 = x3d.ROUTE()
ROUTE1729.fromField = "fraction_changed"
ROUTE1729.fromNode = "Armature_Clock"
ROUTE1729.toField = "set_fraction"
ROUTE1729.toNode = "Armature_OI_l_carpal_middle_phalanx_5"

Scene7.children.append(ROUTE1729)
ROUTE1730 = x3d.ROUTE()
ROUTE1730.fromField = "value_changed"
ROUTE1730.fromNode = "Armature_OI_l_carpal_middle_phalanx_5"
ROUTE1730.toField = "rotation"
ROUTE1730.toNode = "hanim_l_carpal_middle_phalanx_5"

Scene7.children.append(ROUTE1730)
ROUTE1731 = x3d.ROUTE()
ROUTE1731.fromField = "fraction_changed"
ROUTE1731.fromNode = "Armature_Clock"
ROUTE1731.toField = "set_fraction"
ROUTE1731.toNode = "Armature_OI_l_carpal_distal_phalanx_5"

Scene7.children.append(ROUTE1731)
ROUTE1732 = x3d.ROUTE()
ROUTE1732.fromField = "value_changed"
ROUTE1732.fromNode = "Armature_OI_l_carpal_distal_phalanx_5"
ROUTE1732.toField = "rotation"
ROUTE1732.toNode = "hanim_l_carpal_distal_phalanx_5"

Scene7.children.append(ROUTE1732)
ROUTE1733 = x3d.ROUTE()
ROUTE1733.fromField = "fraction_changed"
ROUTE1733.fromNode = "Armature_Clock"
ROUTE1733.toField = "set_fraction"
ROUTE1733.toNode = "Armature_OI_r_clavicle"

Scene7.children.append(ROUTE1733)
ROUTE1734 = x3d.ROUTE()
ROUTE1734.fromField = "value_changed"
ROUTE1734.fromNode = "Armature_OI_r_clavicle"
ROUTE1734.toField = "rotation"
ROUTE1734.toNode = "hanim_r_clavicle"

Scene7.children.append(ROUTE1734)
ROUTE1735 = x3d.ROUTE()
ROUTE1735.fromField = "fraction_changed"
ROUTE1735.fromNode = "Armature_Clock"
ROUTE1735.toField = "set_fraction"
ROUTE1735.toNode = "Armature_OI_r_scapula"

Scene7.children.append(ROUTE1735)
ROUTE1736 = x3d.ROUTE()
ROUTE1736.fromField = "value_changed"
ROUTE1736.fromNode = "Armature_OI_r_scapula"
ROUTE1736.toField = "rotation"
ROUTE1736.toNode = "hanim_r_scapula"

Scene7.children.append(ROUTE1736)
ROUTE1737 = x3d.ROUTE()
ROUTE1737.fromField = "fraction_changed"
ROUTE1737.fromNode = "Armature_Clock"
ROUTE1737.toField = "set_fraction"
ROUTE1737.toNode = "Armature_OI_r_upperarm"

Scene7.children.append(ROUTE1737)
ROUTE1738 = x3d.ROUTE()
ROUTE1738.fromField = "value_changed"
ROUTE1738.fromNode = "Armature_OI_r_upperarm"
ROUTE1738.toField = "rotation"
ROUTE1738.toNode = "hanim_r_upperarm"

Scene7.children.append(ROUTE1738)
ROUTE1739 = x3d.ROUTE()
ROUTE1739.fromField = "fraction_changed"
ROUTE1739.fromNode = "Armature_Clock"
ROUTE1739.toField = "set_fraction"
ROUTE1739.toNode = "Armature_OI_r_forearm"

Scene7.children.append(ROUTE1739)
ROUTE1740 = x3d.ROUTE()
ROUTE1740.fromField = "value_changed"
ROUTE1740.fromNode = "Armature_OI_r_forearm"
ROUTE1740.toField = "rotation"
ROUTE1740.toNode = "hanim_r_forearm"

Scene7.children.append(ROUTE1740)
ROUTE1741 = x3d.ROUTE()
ROUTE1741.fromField = "fraction_changed"
ROUTE1741.fromNode = "Armature_Clock"
ROUTE1741.toField = "set_fraction"
ROUTE1741.toNode = "Armature_OI_r_carpal"

Scene7.children.append(ROUTE1741)
ROUTE1742 = x3d.ROUTE()
ROUTE1742.fromField = "value_changed"
ROUTE1742.fromNode = "Armature_OI_r_carpal"
ROUTE1742.toField = "rotation"
ROUTE1742.toNode = "hanim_r_carpal"

Scene7.children.append(ROUTE1742)
ROUTE1743 = x3d.ROUTE()
ROUTE1743.fromField = "fraction_changed"
ROUTE1743.fromNode = "Armature_Clock"
ROUTE1743.toField = "set_fraction"
ROUTE1743.toNode = "Armature_OI_r_trapezium"

Scene7.children.append(ROUTE1743)
ROUTE1744 = x3d.ROUTE()
ROUTE1744.fromField = "value_changed"
ROUTE1744.fromNode = "Armature_OI_r_trapezium"
ROUTE1744.toField = "rotation"
ROUTE1744.toNode = "hanim_r_trapezium"

Scene7.children.append(ROUTE1744)
ROUTE1745 = x3d.ROUTE()
ROUTE1745.fromField = "fraction_changed"
ROUTE1745.fromNode = "Armature_Clock"
ROUTE1745.toField = "set_fraction"
ROUTE1745.toNode = "Armature_OI_r_metacarpal_1"

Scene7.children.append(ROUTE1745)
ROUTE1746 = x3d.ROUTE()
ROUTE1746.fromField = "value_changed"
ROUTE1746.fromNode = "Armature_OI_r_metacarpal_1"
ROUTE1746.toField = "rotation"
ROUTE1746.toNode = "hanim_r_metacarpal_1"

Scene7.children.append(ROUTE1746)
ROUTE1747 = x3d.ROUTE()
ROUTE1747.fromField = "fraction_changed"
ROUTE1747.fromNode = "Armature_Clock"
ROUTE1747.toField = "set_fraction"
ROUTE1747.toNode = "Armature_OI_r_carpal_proximal_phalanx_1"

Scene7.children.append(ROUTE1747)
ROUTE1748 = x3d.ROUTE()
ROUTE1748.fromField = "value_changed"
ROUTE1748.fromNode = "Armature_OI_r_carpal_proximal_phalanx_1"
ROUTE1748.toField = "rotation"
ROUTE1748.toNode = "hanim_r_carpal_proximal_phalanx_1"

Scene7.children.append(ROUTE1748)
ROUTE1749 = x3d.ROUTE()
ROUTE1749.fromField = "fraction_changed"
ROUTE1749.fromNode = "Armature_Clock"
ROUTE1749.toField = "set_fraction"
ROUTE1749.toNode = "Armature_OI_r_carpal_distal_phalanx_1"

Scene7.children.append(ROUTE1749)
ROUTE1750 = x3d.ROUTE()
ROUTE1750.fromField = "value_changed"
ROUTE1750.fromNode = "Armature_OI_r_carpal_distal_phalanx_1"
ROUTE1750.toField = "rotation"
ROUTE1750.toNode = "hanim_r_carpal_distal_phalanx_1"

Scene7.children.append(ROUTE1750)
ROUTE1751 = x3d.ROUTE()
ROUTE1751.fromField = "fraction_changed"
ROUTE1751.fromNode = "Armature_Clock"
ROUTE1751.toField = "set_fraction"
ROUTE1751.toNode = "Armature_OI_r_trapezoid"

Scene7.children.append(ROUTE1751)
ROUTE1752 = x3d.ROUTE()
ROUTE1752.fromField = "value_changed"
ROUTE1752.fromNode = "Armature_OI_r_trapezoid"
ROUTE1752.toField = "rotation"
ROUTE1752.toNode = "hanim_r_trapezoid"

Scene7.children.append(ROUTE1752)
ROUTE1753 = x3d.ROUTE()
ROUTE1753.fromField = "fraction_changed"
ROUTE1753.fromNode = "Armature_Clock"
ROUTE1753.toField = "set_fraction"
ROUTE1753.toNode = "Armature_OI_r_metacarpal_2"

Scene7.children.append(ROUTE1753)
ROUTE1754 = x3d.ROUTE()
ROUTE1754.fromField = "value_changed"
ROUTE1754.fromNode = "Armature_OI_r_metacarpal_2"
ROUTE1754.toField = "rotation"
ROUTE1754.toNode = "hanim_r_metacarpal_2"

Scene7.children.append(ROUTE1754)
ROUTE1755 = x3d.ROUTE()
ROUTE1755.fromField = "fraction_changed"
ROUTE1755.fromNode = "Armature_Clock"
ROUTE1755.toField = "set_fraction"
ROUTE1755.toNode = "Armature_OI_r_carpal_proximal_phalanx_2"

Scene7.children.append(ROUTE1755)
ROUTE1756 = x3d.ROUTE()
ROUTE1756.fromField = "value_changed"
ROUTE1756.fromNode = "Armature_OI_r_carpal_proximal_phalanx_2"
ROUTE1756.toField = "rotation"
ROUTE1756.toNode = "hanim_r_carpal_proximal_phalanx_2"

Scene7.children.append(ROUTE1756)
ROUTE1757 = x3d.ROUTE()
ROUTE1757.fromField = "fraction_changed"
ROUTE1757.fromNode = "Armature_Clock"
ROUTE1757.toField = "set_fraction"
ROUTE1757.toNode = "Armature_OI_r_carpal_middle_phalanx_2"

Scene7.children.append(ROUTE1757)
ROUTE1758 = x3d.ROUTE()
ROUTE1758.fromField = "value_changed"
ROUTE1758.fromNode = "Armature_OI_r_carpal_middle_phalanx_2"
ROUTE1758.toField = "rotation"
ROUTE1758.toNode = "hanim_r_carpal_middle_phalanx_2"

Scene7.children.append(ROUTE1758)
ROUTE1759 = x3d.ROUTE()
ROUTE1759.fromField = "fraction_changed"
ROUTE1759.fromNode = "Armature_Clock"
ROUTE1759.toField = "set_fraction"
ROUTE1759.toNode = "Armature_OI_r_carpal_distal_phalanx_2"

Scene7.children.append(ROUTE1759)
ROUTE1760 = x3d.ROUTE()
ROUTE1760.fromField = "value_changed"
ROUTE1760.fromNode = "Armature_OI_r_carpal_distal_phalanx_2"
ROUTE1760.toField = "rotation"
ROUTE1760.toNode = "hanim_r_carpal_distal_phalanx_2"

Scene7.children.append(ROUTE1760)
ROUTE1761 = x3d.ROUTE()
ROUTE1761.fromField = "fraction_changed"
ROUTE1761.fromNode = "Armature_Clock"
ROUTE1761.toField = "set_fraction"
ROUTE1761.toNode = "Armature_OI_r_capitate"

Scene7.children.append(ROUTE1761)
ROUTE1762 = x3d.ROUTE()
ROUTE1762.fromField = "value_changed"
ROUTE1762.fromNode = "Armature_OI_r_capitate"
ROUTE1762.toField = "rotation"
ROUTE1762.toNode = "hanim_r_capitate"

Scene7.children.append(ROUTE1762)
ROUTE1763 = x3d.ROUTE()
ROUTE1763.fromField = "fraction_changed"
ROUTE1763.fromNode = "Armature_Clock"
ROUTE1763.toField = "set_fraction"
ROUTE1763.toNode = "Armature_OI_r_metacarpal_3"

Scene7.children.append(ROUTE1763)
ROUTE1764 = x3d.ROUTE()
ROUTE1764.fromField = "value_changed"
ROUTE1764.fromNode = "Armature_OI_r_metacarpal_3"
ROUTE1764.toField = "rotation"
ROUTE1764.toNode = "hanim_r_metacarpal_3"

Scene7.children.append(ROUTE1764)
ROUTE1765 = x3d.ROUTE()
ROUTE1765.fromField = "fraction_changed"
ROUTE1765.fromNode = "Armature_Clock"
ROUTE1765.toField = "set_fraction"
ROUTE1765.toNode = "Armature_OI_r_carpal_proximal_phalanx_3"

Scene7.children.append(ROUTE1765)
ROUTE1766 = x3d.ROUTE()
ROUTE1766.fromField = "value_changed"
ROUTE1766.fromNode = "Armature_OI_r_carpal_proximal_phalanx_3"
ROUTE1766.toField = "rotation"
ROUTE1766.toNode = "hanim_r_carpal_proximal_phalanx_3"

Scene7.children.append(ROUTE1766)
ROUTE1767 = x3d.ROUTE()
ROUTE1767.fromField = "fraction_changed"
ROUTE1767.fromNode = "Armature_Clock"
ROUTE1767.toField = "set_fraction"
ROUTE1767.toNode = "Armature_OI_r_carpal_middle_phalanx_3"

Scene7.children.append(ROUTE1767)
ROUTE1768 = x3d.ROUTE()
ROUTE1768.fromField = "value_changed"
ROUTE1768.fromNode = "Armature_OI_r_carpal_middle_phalanx_3"
ROUTE1768.toField = "rotation"
ROUTE1768.toNode = "hanim_r_carpal_middle_phalanx_3"

Scene7.children.append(ROUTE1768)
ROUTE1769 = x3d.ROUTE()
ROUTE1769.fromField = "fraction_changed"
ROUTE1769.fromNode = "Armature_Clock"
ROUTE1769.toField = "set_fraction"
ROUTE1769.toNode = "Armature_OI_r_carpal_distal_phalanx_3"

Scene7.children.append(ROUTE1769)
ROUTE1770 = x3d.ROUTE()
ROUTE1770.fromField = "value_changed"
ROUTE1770.fromNode = "Armature_OI_r_carpal_distal_phalanx_3"
ROUTE1770.toField = "rotation"
ROUTE1770.toNode = "hanim_r_carpal_distal_phalanx_3"

Scene7.children.append(ROUTE1770)
ROUTE1771 = x3d.ROUTE()
ROUTE1771.fromField = "fraction_changed"
ROUTE1771.fromNode = "Armature_Clock"
ROUTE1771.toField = "set_fraction"
ROUTE1771.toNode = "Armature_OI_r_hamate"

Scene7.children.append(ROUTE1771)
ROUTE1772 = x3d.ROUTE()
ROUTE1772.fromField = "value_changed"
ROUTE1772.fromNode = "Armature_OI_r_hamate"
ROUTE1772.toField = "rotation"
ROUTE1772.toNode = "hanim_r_hamate"

Scene7.children.append(ROUTE1772)
ROUTE1773 = x3d.ROUTE()
ROUTE1773.fromField = "fraction_changed"
ROUTE1773.fromNode = "Armature_Clock"
ROUTE1773.toField = "set_fraction"
ROUTE1773.toNode = "Armature_OI_r_metacarpal_4"

Scene7.children.append(ROUTE1773)
ROUTE1774 = x3d.ROUTE()
ROUTE1774.fromField = "value_changed"
ROUTE1774.fromNode = "Armature_OI_r_metacarpal_4"
ROUTE1774.toField = "rotation"
ROUTE1774.toNode = "hanim_r_metacarpal_4"

Scene7.children.append(ROUTE1774)
ROUTE1775 = x3d.ROUTE()
ROUTE1775.fromField = "fraction_changed"
ROUTE1775.fromNode = "Armature_Clock"
ROUTE1775.toField = "set_fraction"
ROUTE1775.toNode = "Armature_OI_r_carpal_proximal_phalanx_4"

Scene7.children.append(ROUTE1775)
ROUTE1776 = x3d.ROUTE()
ROUTE1776.fromField = "value_changed"
ROUTE1776.fromNode = "Armature_OI_r_carpal_proximal_phalanx_4"
ROUTE1776.toField = "rotation"
ROUTE1776.toNode = "hanim_r_carpal_proximal_phalanx_4"

Scene7.children.append(ROUTE1776)
ROUTE1777 = x3d.ROUTE()
ROUTE1777.fromField = "fraction_changed"
ROUTE1777.fromNode = "Armature_Clock"
ROUTE1777.toField = "set_fraction"
ROUTE1777.toNode = "Armature_OI_r_carpal_middle_phalanx_4"

Scene7.children.append(ROUTE1777)
ROUTE1778 = x3d.ROUTE()
ROUTE1778.fromField = "value_changed"
ROUTE1778.fromNode = "Armature_OI_r_carpal_middle_phalanx_4"
ROUTE1778.toField = "rotation"
ROUTE1778.toNode = "hanim_r_carpal_middle_phalanx_4"

Scene7.children.append(ROUTE1778)
ROUTE1779 = x3d.ROUTE()
ROUTE1779.fromField = "fraction_changed"
ROUTE1779.fromNode = "Armature_Clock"
ROUTE1779.toField = "set_fraction"
ROUTE1779.toNode = "Armature_OI_r_carpal_distal_phalanx_4"

Scene7.children.append(ROUTE1779)
ROUTE1780 = x3d.ROUTE()
ROUTE1780.fromField = "value_changed"
ROUTE1780.fromNode = "Armature_OI_r_carpal_distal_phalanx_4"
ROUTE1780.toField = "rotation"
ROUTE1780.toNode = "hanim_r_carpal_distal_phalanx_4"

Scene7.children.append(ROUTE1780)
ROUTE1781 = x3d.ROUTE()
ROUTE1781.fromField = "fraction_changed"
ROUTE1781.fromNode = "Armature_Clock"
ROUTE1781.toField = "set_fraction"
ROUTE1781.toNode = "Armature_OI_r_metacarpal_5"

Scene7.children.append(ROUTE1781)
ROUTE1782 = x3d.ROUTE()
ROUTE1782.fromField = "value_changed"
ROUTE1782.fromNode = "Armature_OI_r_metacarpal_5"
ROUTE1782.toField = "rotation"
ROUTE1782.toNode = "hanim_r_metacarpal_5"

Scene7.children.append(ROUTE1782)
ROUTE1783 = x3d.ROUTE()
ROUTE1783.fromField = "fraction_changed"
ROUTE1783.fromNode = "Armature_Clock"
ROUTE1783.toField = "set_fraction"
ROUTE1783.toNode = "Armature_OI_r_carpal_proximal_phalanx_5"

Scene7.children.append(ROUTE1783)
ROUTE1784 = x3d.ROUTE()
ROUTE1784.fromField = "value_changed"
ROUTE1784.fromNode = "Armature_OI_r_carpal_proximal_phalanx_5"
ROUTE1784.toField = "rotation"
ROUTE1784.toNode = "hanim_r_carpal_proximal_phalanx_5"

Scene7.children.append(ROUTE1784)
ROUTE1785 = x3d.ROUTE()
ROUTE1785.fromField = "fraction_changed"
ROUTE1785.fromNode = "Armature_Clock"
ROUTE1785.toField = "set_fraction"
ROUTE1785.toNode = "Armature_OI_r_carpal_middle_phalanx_5"

Scene7.children.append(ROUTE1785)
ROUTE1786 = x3d.ROUTE()
ROUTE1786.fromField = "value_changed"
ROUTE1786.fromNode = "Armature_OI_r_carpal_middle_phalanx_5"
ROUTE1786.toField = "rotation"
ROUTE1786.toNode = "hanim_r_carpal_middle_phalanx_5"

Scene7.children.append(ROUTE1786)
ROUTE1787 = x3d.ROUTE()
ROUTE1787.fromField = "fraction_changed"
ROUTE1787.fromNode = "Armature_Clock"
ROUTE1787.toField = "set_fraction"
ROUTE1787.toNode = "Armature_OI_r_carpal_distal_phalanx_5"

Scene7.children.append(ROUTE1787)
ROUTE1788 = x3d.ROUTE()
ROUTE1788.fromField = "value_changed"
ROUTE1788.fromNode = "Armature_OI_r_carpal_distal_phalanx_5"
ROUTE1788.toField = "rotation"
ROUTE1788.toNode = "hanim_r_carpal_distal_phalanx_5"

Scene7.children.append(ROUTE1788)

X3D0.Scene = Scene7
f = open("../data/blenderSkeleton.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/blenderSkeleton.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/blenderSkeleton.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
