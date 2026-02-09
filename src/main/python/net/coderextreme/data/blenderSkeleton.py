print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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

X3D0.head = head1
Scene6 = x3d.Scene()
NavigationInfo7 = x3d.NavigationInfo()

Scene6.children.append(NavigationInfo7)
Background8 = x3d.Background(DEF="WO_World")
Background8.skyColor = [(0.05087609, 0.05087609, 0.05087609)]
Background8.groundColor = [(0.05087609, 0.05087609, 0.05087609)]

Scene6.children.append(Background8)
Transform9 = x3d.Transform()
Shape10 = x3d.Shape(DEF="SiteShape")
Appearance11 = x3d.Appearance()
Material12 = x3d.Material()
Material12.diffuseColor = [0,0,1]

Appearance11.material = Material12

Shape10.appearance = Appearance11
Box13 = x3d.Box()
Box13.size = [0.05,0.05,0.05]

Shape10.geometry = Box13

Transform9.children.append(Shape10)

Scene6.children.append(Transform9)
Transform14 = x3d.Transform()
Shape15 = x3d.Shape(DEF="JointShape")
Appearance16 = x3d.Appearance(DEF="JointAppearance")
Material17 = x3d.Material()
Material17.diffuseColor = [1,0.5,0]
Material17.transparency = 0.5

Appearance16.material = Material17

Shape15.appearance = Appearance16
Sphere18 = x3d.Sphere()
Sphere18.radius = 0.06

Shape15.geometry = Sphere18

Transform14.children.append(Shape15)

Scene6.children.append(Transform14)
Transform19 = x3d.Transform(DEF="Light_TRANSFORM")
Transform19.translation = [4.07625,1.00545,5.90386]
Transform19.rotation = [0.20594,0.33152,0.9207,1.92627]
PointLight20 = x3d.PointLight(DEF="LA_Light")
PointLight20.location = [-8.940697e-8,-3.576279e-7,4.61936e-7]
PointLight20.radius = 40

Transform19.children.append(PointLight20)

Scene6.children.append(Transform19)
Transform21 = x3d.Transform(DEF="Camera_TRANSFORM")
Transform21.translation = [7.35889,-6.92579,4.95831]
Transform21.rotation = [0.77344,0.33383,0.53884,1.35072]
Viewpoint22 = x3d.Viewpoint(DEF="CA_Camera")
Viewpoint22.position = [-3.92708e-7,-2.123415e-7,2.384186e-7]
Viewpoint22.fieldOfView = 0.6911112

Transform21.children.append(Viewpoint22)

Scene6.children.append(Transform21)
Transform23 = x3d.Transform(DEF="Armature_TRANSFORM")
HAnimHumanoid24 = x3d.HAnimHumanoid(DEF="hanim_humanoid")
HAnimHumanoid24.name = "humanoid"
HAnimJoint25 = x3d.HAnimJoint(DEF="hanim_Armature")
HAnimJoint25.name = "Armature"
HAnimSegment26 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_Armature")
HAnimSegment26.name = "SEGMENT_FOR_Armature"
TouchSensor27 = x3d.TouchSensor()
TouchSensor27.description = "joint Armature segment SEGMENT_FOR_Armature"

HAnimSegment26.children.append(TouchSensor27)
Transform28 = x3d.Transform()
Shape29 = x3d.Shape(USE="JointShape")

Transform28.children.append(Shape29)

HAnimSegment26.children.append(Transform28)
HAnimSite30 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_Armature_tip")
HAnimSite30.name = "SEGMENT_FOR_Armature_tip"
Transform31 = x3d.Transform()
Shape32 = x3d.Shape(USE="SiteShape")

Transform31.children.append(Shape32)

HAnimSite30.children.append(Transform31)

HAnimSegment26.children.append(HAnimSite30)

HAnimJoint25.children.append(HAnimSegment26)
HAnimJoint33 = x3d.HAnimJoint(DEF="hanim_sacrum")
HAnimJoint33.name = "sacrum"
HAnimJoint33.center = [-0.0002,-0.1178,0.8174]
HAnimSegment34 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_sacrum")
HAnimSegment34.name = "SEGMENT_FOR_sacrum"
TouchSensor35 = x3d.TouchSensor()
TouchSensor35.description = "joint sacrum segment SEGMENT_FOR_sacrum"

HAnimSegment34.children.append(TouchSensor35)
Transform36 = x3d.Transform()
Transform36.translation = [-0.0002,-0.1178,0.8174]
Shape37 = x3d.Shape(USE="JointShape")

Transform36.children.append(Shape37)

HAnimSegment34.children.append(Transform36)
HAnimSite38 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_sacrum_tip")
HAnimSite38.name = "SEGMENT_FOR_sacrum_tip"
Transform39 = x3d.Transform()
Transform39.translation = [-0.0002,-0.1178,0.8174]
Shape40 = x3d.Shape(USE="SiteShape")

Transform39.children.append(Shape40)

HAnimSite38.children.append(Transform39)

HAnimSegment34.children.append(HAnimSite38)

HAnimJoint33.children.append(HAnimSegment34)
HAnimJoint41 = x3d.HAnimJoint(DEF="hanim_pelvis")
HAnimJoint41.name = "pelvis"
HAnimJoint41.center = [-0.0002,-0.1178,0.6986]
HAnimSegment42 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_pelvis")
HAnimSegment42.name = "SEGMENT_FOR_pelvis"
TouchSensor43 = x3d.TouchSensor()
TouchSensor43.description = "joint pelvis segment SEGMENT_FOR_pelvis"

HAnimSegment42.children.append(TouchSensor43)
Transform44 = x3d.Transform()
Transform44.translation = [-0.0002,-0.1178,0.6986]
Shape45 = x3d.Shape(USE="JointShape")

Transform44.children.append(Shape45)

HAnimSegment42.children.append(Transform44)
HAnimSite46 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_pelvis_tip")
HAnimSite46.name = "SEGMENT_FOR_pelvis_tip"
Transform47 = x3d.Transform()
Transform47.translation = [-0.0002,-0.1178,0.6986]
Shape48 = x3d.Shape(USE="SiteShape")

Transform47.children.append(Shape48)

HAnimSite46.children.append(Transform47)

HAnimSegment42.children.append(HAnimSite46)

HAnimJoint41.children.append(HAnimSegment42)
HAnimJoint49 = x3d.HAnimJoint(DEF="hanim_l_thigh")
HAnimJoint49.name = "l_thigh"
HAnimJoint49.center = [0.0945,-0.1202,0.8181]
HAnimSegment50 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_thigh")
HAnimSegment50.name = "SEGMENT_FOR_l_thigh"
TouchSensor51 = x3d.TouchSensor()
TouchSensor51.description = "joint l_thigh segment SEGMENT_FOR_l_thigh"

HAnimSegment50.children.append(TouchSensor51)
Transform52 = x3d.Transform()
Transform52.translation = [0.0945,-0.1202,0.8181]
Shape53 = x3d.Shape(USE="JointShape")

Transform52.children.append(Shape53)

HAnimSegment50.children.append(Transform52)
HAnimSite54 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_thigh_tip")
HAnimSite54.name = "SEGMENT_FOR_l_thigh_tip"
Transform55 = x3d.Transform()
Transform55.translation = [0.0945,-0.1202,0.8181]
Shape56 = x3d.Shape(USE="SiteShape")

Transform55.children.append(Shape56)

HAnimSite54.children.append(Transform55)

HAnimSegment50.children.append(HAnimSite54)

HAnimJoint49.children.append(HAnimSegment50)
HAnimJoint57 = x3d.HAnimJoint(DEF="hanim_l_calf")
HAnimJoint57.name = "l_calf"
HAnimJoint57.center = [0.0924,-0.1213,0.4003]
HAnimSegment58 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_calf")
HAnimSegment58.name = "SEGMENT_FOR_l_calf"
TouchSensor59 = x3d.TouchSensor()
TouchSensor59.description = "joint l_calf segment SEGMENT_FOR_l_calf"

HAnimSegment58.children.append(TouchSensor59)
Transform60 = x3d.Transform()
Transform60.translation = [0.0924,-0.1213,0.4003]
Shape61 = x3d.Shape(USE="JointShape")

Transform60.children.append(Shape61)

HAnimSegment58.children.append(Transform60)
HAnimSite62 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_calf_tip")
HAnimSite62.name = "SEGMENT_FOR_l_calf_tip"
Transform63 = x3d.Transform()
Transform63.translation = [0.0924,-0.1213,0.4003]
Shape64 = x3d.Shape(USE="SiteShape")

Transform63.children.append(Shape64)

HAnimSite62.children.append(Transform63)

HAnimSegment58.children.append(HAnimSite62)

HAnimJoint57.children.append(HAnimSegment58)
HAnimJoint65 = x3d.HAnimJoint(DEF="hanim_l_talus")
HAnimJoint65.name = "l_talus"
HAnimJoint65.center = [0.0886,-0.1123,0.0869]
HAnimSegment66 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_talus")
HAnimSegment66.name = "SEGMENT_FOR_l_talus"
TouchSensor67 = x3d.TouchSensor()
TouchSensor67.description = "joint l_talus segment SEGMENT_FOR_l_talus"

HAnimSegment66.children.append(TouchSensor67)
Transform68 = x3d.Transform()
Transform68.translation = [0.0886,-0.1123,0.0869]
Shape69 = x3d.Shape(USE="JointShape")

Transform68.children.append(Shape69)

HAnimSegment66.children.append(Transform68)
HAnimSite70 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_talus_tip")
HAnimSite70.name = "SEGMENT_FOR_l_talus_tip"
Transform71 = x3d.Transform()
Transform71.translation = [0.0886,-0.1123,0.0869]
Shape72 = x3d.Shape(USE="SiteShape")

Transform71.children.append(Shape72)

HAnimSite70.children.append(Transform71)

HAnimSegment66.children.append(HAnimSite70)

HAnimJoint65.children.append(HAnimSegment66)
HAnimJoint73 = x3d.HAnimJoint(DEF="hanim_l_navicular")
HAnimJoint73.name = "l_navicular"
HAnimJoint73.center = [0.0781,-0.097,0.0283]
HAnimSegment74 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_navicular")
HAnimSegment74.name = "SEGMENT_FOR_l_navicular"
TouchSensor75 = x3d.TouchSensor()
TouchSensor75.description = "joint l_navicular segment SEGMENT_FOR_l_navicular"

HAnimSegment74.children.append(TouchSensor75)
Transform76 = x3d.Transform()
Transform76.translation = [0.0781,-0.097,0.0283]
Shape77 = x3d.Shape(USE="JointShape")

Transform76.children.append(Shape77)

HAnimSegment74.children.append(Transform76)
HAnimSite78 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_navicular_tip")
HAnimSite78.name = "SEGMENT_FOR_l_navicular_tip"
Transform79 = x3d.Transform()
Transform79.translation = [0.0781,-0.097,0.0283]
Shape80 = x3d.Shape(USE="SiteShape")

Transform79.children.append(Shape80)

HAnimSite78.children.append(Transform79)

HAnimSegment74.children.append(HAnimSite78)

HAnimJoint73.children.append(HAnimSegment74)
HAnimJoint81 = x3d.HAnimJoint(DEF="hanim_l_cuneiform_1")
HAnimJoint81.name = "l_cuneiform_1"
HAnimJoint81.center = [0.0672,-0.0835,0.0235]
HAnimSegment82 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_cuneiform_1")
HAnimSegment82.name = "SEGMENT_FOR_l_cuneiform_1"
TouchSensor83 = x3d.TouchSensor()
TouchSensor83.description = "joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1"

HAnimSegment82.children.append(TouchSensor83)
Transform84 = x3d.Transform()
Transform84.translation = [0.0672,-0.0835,0.0235]
Shape85 = x3d.Shape(USE="JointShape")

Transform84.children.append(Shape85)

HAnimSegment82.children.append(Transform84)
HAnimSite86 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_cuneiform_1_tip")
HAnimSite86.name = "SEGMENT_FOR_l_cuneiform_1_tip"
Transform87 = x3d.Transform()
Transform87.translation = [0.0672,-0.0835,0.0235]
Shape88 = x3d.Shape(USE="SiteShape")

Transform87.children.append(Shape88)

HAnimSite86.children.append(Transform87)

HAnimSegment82.children.append(HAnimSite86)

HAnimJoint81.children.append(HAnimSegment82)
HAnimJoint89 = x3d.HAnimJoint(DEF="hanim_l_metatarsal_1")
HAnimJoint89.name = "l_metatarsal_1"
HAnimJoint89.center = [0.0644,-0.0577,0.0147]
HAnimSegment90 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metatarsal_1")
HAnimSegment90.name = "SEGMENT_FOR_l_metatarsal_1"
TouchSensor91 = x3d.TouchSensor()
TouchSensor91.description = "joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1"

HAnimSegment90.children.append(TouchSensor91)
Transform92 = x3d.Transform()
Transform92.translation = [0.0644,-0.0577,0.0147]
Shape93 = x3d.Shape(USE="JointShape")

Transform92.children.append(Shape93)

HAnimSegment90.children.append(Transform92)
HAnimSite94 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metatarsal_1_tip")
HAnimSite94.name = "SEGMENT_FOR_l_metatarsal_1_tip"
Transform95 = x3d.Transform()
Transform95.translation = [0.0644,-0.0577,0.0147]
Shape96 = x3d.Shape(USE="SiteShape")

Transform95.children.append(Shape96)

HAnimSite94.children.append(Transform95)

HAnimSegment90.children.append(HAnimSite94)

HAnimJoint89.children.append(HAnimSegment90)
HAnimJoint97 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_phalanx_1")
HAnimJoint97.name = "l_tarsal_proximal_phalanx_1"
HAnimJoint97.center = [0.0619,-0.0083,0.0059]
HAnimSegment98 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1")
HAnimSegment98.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_1"
TouchSensor99 = x3d.TouchSensor()
TouchSensor99.description = "joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1"

HAnimSegment98.children.append(TouchSensor99)
Transform100 = x3d.Transform()
Transform100.translation = [0.0619,-0.0083,0.0059]
Shape101 = x3d.Shape(USE="JointShape")

Transform100.children.append(Shape101)

HAnimSegment98.children.append(Transform100)
HAnimSite102 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip")
HAnimSite102.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip"
Transform103 = x3d.Transform()
Transform103.translation = [0.0619,-0.0083,0.0059]
Shape104 = x3d.Shape(USE="SiteShape")

Transform103.children.append(Shape104)

HAnimSite102.children.append(Transform103)

HAnimSegment98.children.append(HAnimSite102)

HAnimJoint97.children.append(HAnimSegment98)
HAnimJoint105 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_phalanx_1")
HAnimJoint105.name = "l_tarsal_distal_phalanx_1"
HAnimSegment106 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1")
HAnimSegment106.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_1"
TouchSensor107 = x3d.TouchSensor()
TouchSensor107.description = "joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1"

HAnimSegment106.children.append(TouchSensor107)
Transform108 = x3d.Transform()
Shape109 = x3d.Shape(USE="JointShape")

Transform108.children.append(Shape109)

HAnimSegment106.children.append(Transform108)
HAnimSite110 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip")
HAnimSite110.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip"
Transform111 = x3d.Transform()
Shape112 = x3d.Shape(USE="SiteShape")

Transform111.children.append(Shape112)

HAnimSite110.children.append(Transform111)

HAnimSegment106.children.append(HAnimSite110)

HAnimJoint105.children.append(HAnimSegment106)

HAnimJoint97.children.append(HAnimJoint105)

HAnimJoint89.children.append(HAnimJoint97)

HAnimJoint81.children.append(HAnimJoint89)

HAnimJoint73.children.append(HAnimJoint81)
HAnimJoint113 = x3d.HAnimJoint(DEF="hanim_l_cuneiform_2")
HAnimJoint113.name = "l_cuneiform_2"
HAnimJoint113.center = [0.0812,-0.0805,0.025]
HAnimSegment114 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_cuneiform_2")
HAnimSegment114.name = "SEGMENT_FOR_l_cuneiform_2"
TouchSensor115 = x3d.TouchSensor()
TouchSensor115.description = "joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2"

HAnimSegment114.children.append(TouchSensor115)
Transform116 = x3d.Transform()
Transform116.translation = [0.0812,-0.0805,0.025]
Shape117 = x3d.Shape(USE="JointShape")

Transform116.children.append(Shape117)

HAnimSegment114.children.append(Transform116)
HAnimSite118 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_cuneiform_2_tip")
HAnimSite118.name = "SEGMENT_FOR_l_cuneiform_2_tip"
Transform119 = x3d.Transform()
Transform119.translation = [0.0812,-0.0805,0.025]
Shape120 = x3d.Shape(USE="SiteShape")

Transform119.children.append(Shape120)

HAnimSite118.children.append(Transform119)

HAnimSegment114.children.append(HAnimSite118)

HAnimJoint113.children.append(HAnimSegment114)
HAnimJoint121 = x3d.HAnimJoint(DEF="hanim_l_metatarsal_2")
HAnimJoint121.name = "l_metatarsal_2"
HAnimJoint121.center = [0.08,-0.0608,0.0175]
HAnimSegment122 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metatarsal_2")
HAnimSegment122.name = "SEGMENT_FOR_l_metatarsal_2"
TouchSensor123 = x3d.TouchSensor()
TouchSensor123.description = "joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2"

HAnimSegment122.children.append(TouchSensor123)
Transform124 = x3d.Transform()
Transform124.translation = [0.08,-0.0608,0.0175]
Shape125 = x3d.Shape(USE="JointShape")

Transform124.children.append(Shape125)

HAnimSegment122.children.append(Transform124)
HAnimSite126 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metatarsal_2_tip")
HAnimSite126.name = "SEGMENT_FOR_l_metatarsal_2_tip"
Transform127 = x3d.Transform()
Transform127.translation = [0.08,-0.0608,0.0175]
Shape128 = x3d.Shape(USE="SiteShape")

Transform127.children.append(Shape128)

HAnimSite126.children.append(Transform127)

HAnimSegment122.children.append(HAnimSite126)

HAnimJoint121.children.append(HAnimSegment122)
HAnimJoint129 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_phalanx_2")
HAnimJoint129.name = "l_tarsal_proximal_phalanx_2"
HAnimJoint129.center = [0.0824,-0.004,0.0064]
HAnimSegment130 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2")
HAnimSegment130.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_2"
TouchSensor131 = x3d.TouchSensor()
TouchSensor131.description = "joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2"

HAnimSegment130.children.append(TouchSensor131)
Transform132 = x3d.Transform()
Transform132.translation = [0.0824,-0.004,0.0064]
Shape133 = x3d.Shape(USE="JointShape")

Transform132.children.append(Shape133)

HAnimSegment130.children.append(Transform132)
HAnimSite134 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip")
HAnimSite134.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip"
Transform135 = x3d.Transform()
Transform135.translation = [0.0824,-0.004,0.0064]
Shape136 = x3d.Shape(USE="SiteShape")

Transform135.children.append(Shape136)

HAnimSite134.children.append(Transform135)

HAnimSegment130.children.append(HAnimSite134)

HAnimJoint129.children.append(HAnimSegment130)
HAnimJoint137 = x3d.HAnimJoint(DEF="hanim_l_tarsal_middle_phalanx_2")
HAnimJoint137.name = "l_tarsal_middle_phalanx_2"
HAnimJoint137.center = [0.0841,0.0121,0.0041]
HAnimSegment138 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2")
HAnimSegment138.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_2"
TouchSensor139 = x3d.TouchSensor()
TouchSensor139.description = "joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2"

HAnimSegment138.children.append(TouchSensor139)
Transform140 = x3d.Transform()
Transform140.translation = [0.0841,0.0121,0.0041]
Shape141 = x3d.Shape(USE="JointShape")

Transform140.children.append(Shape141)

HAnimSegment138.children.append(Transform140)
HAnimSite142 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip")
HAnimSite142.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip"
Transform143 = x3d.Transform()
Transform143.translation = [0.0841,0.0121,0.0041]
Shape144 = x3d.Shape(USE="SiteShape")

Transform143.children.append(Shape144)

HAnimSite142.children.append(Transform143)

HAnimSegment138.children.append(HAnimSite142)

HAnimJoint137.children.append(HAnimSegment138)
HAnimJoint145 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_phalanx_2")
HAnimJoint145.name = "l_tarsal_distal_phalanx_2"
HAnimJoint145.center = [0.0841,0.0216,0.0013]
HAnimSegment146 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2")
HAnimSegment146.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_2"
TouchSensor147 = x3d.TouchSensor()
TouchSensor147.description = "joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2"

HAnimSegment146.children.append(TouchSensor147)
Transform148 = x3d.Transform()
Transform148.translation = [0.0841,0.0216,0.0013]
Shape149 = x3d.Shape(USE="JointShape")

Transform148.children.append(Shape149)

HAnimSegment146.children.append(Transform148)
HAnimSite150 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip")
HAnimSite150.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip"
Transform151 = x3d.Transform()
Transform151.translation = [0.0841,0.0216,0.0013]
Shape152 = x3d.Shape(USE="SiteShape")

Transform151.children.append(Shape152)

HAnimSite150.children.append(Transform151)

HAnimSegment146.children.append(HAnimSite150)

HAnimJoint145.children.append(HAnimSegment146)

HAnimJoint137.children.append(HAnimJoint145)

HAnimJoint129.children.append(HAnimJoint137)

HAnimJoint121.children.append(HAnimJoint129)

HAnimJoint113.children.append(HAnimJoint121)

HAnimJoint73.children.append(HAnimJoint113)
HAnimJoint153 = x3d.HAnimJoint(DEF="hanim_l_cuneiform_3")
HAnimJoint153.name = "l_cuneiform_3"
HAnimJoint153.center = [0.0928,-0.0821,0.0248]
HAnimSegment154 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_cuneiform_3")
HAnimSegment154.name = "SEGMENT_FOR_l_cuneiform_3"
TouchSensor155 = x3d.TouchSensor()
TouchSensor155.description = "joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3"

HAnimSegment154.children.append(TouchSensor155)
Transform156 = x3d.Transform()
Transform156.translation = [0.0928,-0.0821,0.0248]
Shape157 = x3d.Shape(USE="JointShape")

Transform156.children.append(Shape157)

HAnimSegment154.children.append(Transform156)
HAnimSite158 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_cuneiform_3_tip")
HAnimSite158.name = "SEGMENT_FOR_l_cuneiform_3_tip"
Transform159 = x3d.Transform()
Transform159.translation = [0.0928,-0.0821,0.0248]
Shape160 = x3d.Shape(USE="SiteShape")

Transform159.children.append(Shape160)

HAnimSite158.children.append(Transform159)

HAnimSegment154.children.append(HAnimSite158)

HAnimJoint153.children.append(HAnimSegment154)
HAnimJoint161 = x3d.HAnimJoint(DEF="hanim_l_metatarsal_3")
HAnimJoint161.name = "l_metatarsal_3"
HAnimJoint161.center = [0.0944,-0.0625,0.0175]
HAnimSegment162 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metatarsal_3")
HAnimSegment162.name = "SEGMENT_FOR_l_metatarsal_3"
TouchSensor163 = x3d.TouchSensor()
TouchSensor163.description = "joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3"

HAnimSegment162.children.append(TouchSensor163)
Transform164 = x3d.Transform()
Transform164.translation = [0.0944,-0.0625,0.0175]
Shape165 = x3d.Shape(USE="JointShape")

Transform164.children.append(Shape165)

HAnimSegment162.children.append(Transform164)
HAnimSite166 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metatarsal_3_tip")
HAnimSite166.name = "SEGMENT_FOR_l_metatarsal_3_tip"
Transform167 = x3d.Transform()
Transform167.translation = [0.0944,-0.0625,0.0175]
Shape168 = x3d.Shape(USE="SiteShape")

Transform167.children.append(Shape168)

HAnimSite166.children.append(Transform167)

HAnimSegment162.children.append(HAnimSite166)

HAnimJoint161.children.append(HAnimSegment162)
HAnimJoint169 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_phalanx_3")
HAnimJoint169.name = "l_tarsal_proximal_phalanx_3"
HAnimJoint169.center = [0.0963,-0.0065,0.0065]
HAnimSegment170 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3")
HAnimSegment170.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_3"
TouchSensor171 = x3d.TouchSensor()
TouchSensor171.description = "joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3"

HAnimSegment170.children.append(TouchSensor171)
Transform172 = x3d.Transform()
Transform172.translation = [0.0963,-0.0065,0.0065]
Shape173 = x3d.Shape(USE="JointShape")

Transform172.children.append(Shape173)

HAnimSegment170.children.append(Transform172)
HAnimSite174 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip")
HAnimSite174.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip"
Transform175 = x3d.Transform()
Transform175.translation = [0.0963,-0.0065,0.0065]
Shape176 = x3d.Shape(USE="SiteShape")

Transform175.children.append(Shape176)

HAnimSite174.children.append(Transform175)

HAnimSegment170.children.append(HAnimSite174)

HAnimJoint169.children.append(HAnimSegment170)
HAnimJoint177 = x3d.HAnimJoint(DEF="hanim_l_tarsal_middle_phalanx_3")
HAnimJoint177.name = "l_tarsal_middle_phalanx_3"
HAnimJoint177.center = [0.0987,0.0086,0.0034]
HAnimSegment178 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3")
HAnimSegment178.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_3"
TouchSensor179 = x3d.TouchSensor()
TouchSensor179.description = "joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3"

HAnimSegment178.children.append(TouchSensor179)
Transform180 = x3d.Transform()
Transform180.translation = [0.0987,0.0086,0.0034]
Shape181 = x3d.Shape(USE="JointShape")

Transform180.children.append(Shape181)

HAnimSegment178.children.append(Transform180)
HAnimSite182 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip")
HAnimSite182.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip"
Transform183 = x3d.Transform()
Transform183.translation = [0.0987,0.0086,0.0034]
Shape184 = x3d.Shape(USE="SiteShape")

Transform183.children.append(Shape184)

HAnimSite182.children.append(Transform183)

HAnimSegment178.children.append(HAnimSite182)

HAnimJoint177.children.append(HAnimSegment178)
HAnimJoint185 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_phalanx_3")
HAnimJoint185.name = "l_tarsal_distal_phalanx_3"
HAnimJoint185.center = [0.1002,0.0178,0.0013]
HAnimSegment186 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3")
HAnimSegment186.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_3"
TouchSensor187 = x3d.TouchSensor()
TouchSensor187.description = "joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3"

HAnimSegment186.children.append(TouchSensor187)
Transform188 = x3d.Transform()
Transform188.translation = [0.1002,0.0178,0.0013]
Shape189 = x3d.Shape(USE="JointShape")

Transform188.children.append(Shape189)

HAnimSegment186.children.append(Transform188)
HAnimSite190 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip")
HAnimSite190.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip"
Transform191 = x3d.Transform()
Transform191.translation = [0.1002,0.0178,0.0013]
Shape192 = x3d.Shape(USE="SiteShape")

Transform191.children.append(Shape192)

HAnimSite190.children.append(Transform191)

HAnimSegment186.children.append(HAnimSite190)

HAnimJoint185.children.append(HAnimSegment186)

HAnimJoint177.children.append(HAnimJoint185)

HAnimJoint169.children.append(HAnimJoint177)

HAnimJoint161.children.append(HAnimJoint169)

HAnimJoint153.children.append(HAnimJoint161)

HAnimJoint73.children.append(HAnimJoint153)

HAnimJoint65.children.append(HAnimJoint73)
HAnimJoint193 = x3d.HAnimJoint(DEF="hanim_l_calcaneus")
HAnimJoint193.name = "l_calcaneus"
HAnimJoint193.center = [0.0889,-0.1278,0.0494]
HAnimSegment194 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_calcaneus")
HAnimSegment194.name = "SEGMENT_FOR_l_calcaneus"
TouchSensor195 = x3d.TouchSensor()
TouchSensor195.description = "joint l_calcaneus segment SEGMENT_FOR_l_calcaneus"

HAnimSegment194.children.append(TouchSensor195)
Transform196 = x3d.Transform()
Transform196.translation = [0.0889,-0.1278,0.0494]
Shape197 = x3d.Shape(USE="JointShape")

Transform196.children.append(Shape197)

HAnimSegment194.children.append(Transform196)
HAnimSite198 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_calcaneus_tip")
HAnimSite198.name = "SEGMENT_FOR_l_calcaneus_tip"
Transform199 = x3d.Transform()
Transform199.translation = [0.0889,-0.1278,0.0494]
Shape200 = x3d.Shape(USE="SiteShape")

Transform199.children.append(Shape200)

HAnimSite198.children.append(Transform199)

HAnimSegment194.children.append(HAnimSite198)

HAnimJoint193.children.append(HAnimSegment194)
HAnimJoint201 = x3d.HAnimJoint(DEF="hanim_l_cuboid")
HAnimJoint201.name = "l_cuboid"
HAnimJoint201.center = [0.1105,-0.0998,0.0267]
HAnimSegment202 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_cuboid")
HAnimSegment202.name = "SEGMENT_FOR_l_cuboid"
TouchSensor203 = x3d.TouchSensor()
TouchSensor203.description = "joint l_cuboid segment SEGMENT_FOR_l_cuboid"

HAnimSegment202.children.append(TouchSensor203)
Transform204 = x3d.Transform()
Transform204.translation = [0.1105,-0.0998,0.0267]
Shape205 = x3d.Shape(USE="JointShape")

Transform204.children.append(Shape205)

HAnimSegment202.children.append(Transform204)
HAnimSite206 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_cuboid_tip")
HAnimSite206.name = "SEGMENT_FOR_l_cuboid_tip"
Transform207 = x3d.Transform()
Transform207.translation = [0.1105,-0.0998,0.0267]
Shape208 = x3d.Shape(USE="SiteShape")

Transform207.children.append(Shape208)

HAnimSite206.children.append(Transform207)

HAnimSegment202.children.append(HAnimSite206)

HAnimJoint201.children.append(HAnimSegment202)
HAnimJoint209 = x3d.HAnimJoint(DEF="hanim_l_metatarsal_4")
HAnimJoint209.name = "l_metatarsal_4"
HAnimJoint209.center = [0.1063,-0.0634,0.016]
HAnimSegment210 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metatarsal_4")
HAnimSegment210.name = "SEGMENT_FOR_l_metatarsal_4"
TouchSensor211 = x3d.TouchSensor()
TouchSensor211.description = "joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4"

HAnimSegment210.children.append(TouchSensor211)
Transform212 = x3d.Transform()
Transform212.translation = [0.1063,-0.0634,0.016]
Shape213 = x3d.Shape(USE="JointShape")

Transform212.children.append(Shape213)

HAnimSegment210.children.append(Transform212)
HAnimSite214 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metatarsal_4_tip")
HAnimSite214.name = "SEGMENT_FOR_l_metatarsal_4_tip"
Transform215 = x3d.Transform()
Transform215.translation = [0.1063,-0.0634,0.016]
Shape216 = x3d.Shape(USE="SiteShape")

Transform215.children.append(Shape216)

HAnimSite214.children.append(Transform215)

HAnimSegment210.children.append(HAnimSite214)

HAnimJoint209.children.append(HAnimSegment210)
HAnimJoint217 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_phalanx_4")
HAnimJoint217.name = "l_tarsal_proximal_phalanx_4"
HAnimJoint217.center = [0.1097,-0.0107,0.0058]
HAnimSegment218 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4")
HAnimSegment218.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_4"
TouchSensor219 = x3d.TouchSensor()
TouchSensor219.description = "joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4"

HAnimSegment218.children.append(TouchSensor219)
Transform220 = x3d.Transform()
Transform220.translation = [0.1097,-0.0107,0.0058]
Shape221 = x3d.Shape(USE="JointShape")

Transform220.children.append(Shape221)

HAnimSegment218.children.append(Transform220)
HAnimSite222 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip")
HAnimSite222.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip"
Transform223 = x3d.Transform()
Transform223.translation = [0.1097,-0.0107,0.0058]
Shape224 = x3d.Shape(USE="SiteShape")

Transform223.children.append(Shape224)

HAnimSite222.children.append(Transform223)

HAnimSegment218.children.append(HAnimSite222)

HAnimJoint217.children.append(HAnimSegment218)
HAnimJoint225 = x3d.HAnimJoint(DEF="hanim_l_tarsal_middle_phalanx_4")
HAnimJoint225.name = "l_tarsal_middle_phalanx_4"
HAnimJoint225.center = [0.114,0.0044,0.0037]
HAnimSegment226 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4")
HAnimSegment226.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_4"
TouchSensor227 = x3d.TouchSensor()
TouchSensor227.description = "joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4"

HAnimSegment226.children.append(TouchSensor227)
Transform228 = x3d.Transform()
Transform228.translation = [0.114,0.0044,0.0037]
Shape229 = x3d.Shape(USE="JointShape")

Transform228.children.append(Shape229)

HAnimSegment226.children.append(Transform228)
HAnimSite230 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip")
HAnimSite230.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip"
Transform231 = x3d.Transform()
Transform231.translation = [0.114,0.0044,0.0037]
Shape232 = x3d.Shape(USE="SiteShape")

Transform231.children.append(Shape232)

HAnimSite230.children.append(Transform231)

HAnimSegment226.children.append(HAnimSite230)

HAnimJoint225.children.append(HAnimSegment226)
HAnimJoint233 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_phalanx_4")
HAnimJoint233.name = "l_tarsal_distal_phalanx_4"
HAnimJoint233.center = [0.1155,0.0118,0.0008]
HAnimSegment234 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4")
HAnimSegment234.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_4"
TouchSensor235 = x3d.TouchSensor()
TouchSensor235.description = "joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4"

HAnimSegment234.children.append(TouchSensor235)
Transform236 = x3d.Transform()
Transform236.translation = [0.1155,0.0118,0.0008]
Shape237 = x3d.Shape(USE="JointShape")

Transform236.children.append(Shape237)

HAnimSegment234.children.append(Transform236)
HAnimSite238 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip")
HAnimSite238.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip"
Transform239 = x3d.Transform()
Transform239.translation = [0.1155,0.0118,0.0008]
Shape240 = x3d.Shape(USE="SiteShape")

Transform239.children.append(Shape240)

HAnimSite238.children.append(Transform239)

HAnimSegment234.children.append(HAnimSite238)

HAnimJoint233.children.append(HAnimSegment234)

HAnimJoint225.children.append(HAnimJoint233)

HAnimJoint217.children.append(HAnimJoint225)

HAnimJoint209.children.append(HAnimJoint217)

HAnimJoint201.children.append(HAnimJoint209)
HAnimJoint241 = x3d.HAnimJoint(DEF="hanim_l_metatarsal_5")
HAnimJoint241.name = "l_metatarsal_5"
HAnimJoint241.center = [0.1206,-0.0671,0.0124]
HAnimSegment242 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metatarsal_5")
HAnimSegment242.name = "SEGMENT_FOR_l_metatarsal_5"
TouchSensor243 = x3d.TouchSensor()
TouchSensor243.description = "joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5"

HAnimSegment242.children.append(TouchSensor243)
Transform244 = x3d.Transform()
Transform244.translation = [0.1206,-0.0671,0.0124]
Shape245 = x3d.Shape(USE="JointShape")

Transform244.children.append(Shape245)

HAnimSegment242.children.append(Transform244)
HAnimSite246 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metatarsal_5_tip")
HAnimSite246.name = "SEGMENT_FOR_l_metatarsal_5_tip"
Transform247 = x3d.Transform()
Transform247.translation = [0.1206,-0.0671,0.0124]
Shape248 = x3d.Shape(USE="SiteShape")

Transform247.children.append(Shape248)

HAnimSite246.children.append(Transform247)

HAnimSegment242.children.append(HAnimSite246)

HAnimJoint241.children.append(HAnimSegment242)
HAnimJoint249 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_phalanx_5")
HAnimJoint249.name = "l_tarsal_proximal_phalanx_5"
HAnimJoint249.center = [0.1239,-0.0153,0.0051]
HAnimSegment250 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5")
HAnimSegment250.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_5"
TouchSensor251 = x3d.TouchSensor()
TouchSensor251.description = "joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5"

HAnimSegment250.children.append(TouchSensor251)
Transform252 = x3d.Transform()
Transform252.translation = [0.1239,-0.0153,0.0051]
Shape253 = x3d.Shape(USE="JointShape")

Transform252.children.append(Shape253)

HAnimSegment250.children.append(Transform252)
HAnimSite254 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip")
HAnimSite254.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip"
Transform255 = x3d.Transform()
Transform255.translation = [0.1239,-0.0153,0.0051]
Shape256 = x3d.Shape(USE="SiteShape")

Transform255.children.append(Shape256)

HAnimSite254.children.append(Transform255)

HAnimSegment250.children.append(HAnimSite254)

HAnimJoint249.children.append(HAnimSegment250)
HAnimJoint257 = x3d.HAnimJoint(DEF="hanim_l_tarsal_middle_phalanx_5")
HAnimJoint257.name = "l_tarsal_middle_phalanx_5"
HAnimJoint257.center = [0.1262,-0.0077,0.0023]
HAnimSegment258 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5")
HAnimSegment258.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_5"
TouchSensor259 = x3d.TouchSensor()
TouchSensor259.description = "joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5"

HAnimSegment258.children.append(TouchSensor259)
Transform260 = x3d.Transform()
Transform260.translation = [0.1262,-0.0077,0.0023]
Shape261 = x3d.Shape(USE="JointShape")

Transform260.children.append(Shape261)

HAnimSegment258.children.append(Transform260)
HAnimSite262 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip")
HAnimSite262.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip"
Transform263 = x3d.Transform()
Transform263.translation = [0.1262,-0.0077,0.0023]
Shape264 = x3d.Shape(USE="SiteShape")

Transform263.children.append(Shape264)

HAnimSite262.children.append(Transform263)

HAnimSegment258.children.append(HAnimSite262)

HAnimJoint257.children.append(HAnimSegment258)
HAnimJoint265 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_phalanx_5")
HAnimJoint265.name = "l_tarsal_distal_phalanx_5"
HAnimJoint265.center = [0.1271,0,0]
HAnimSegment266 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5")
HAnimSegment266.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_5"
TouchSensor267 = x3d.TouchSensor()
TouchSensor267.description = "joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5"

HAnimSegment266.children.append(TouchSensor267)
Transform268 = x3d.Transform()
Transform268.translation = [0.1271,0,0]
Shape269 = x3d.Shape(USE="JointShape")

Transform268.children.append(Shape269)

HAnimSegment266.children.append(Transform268)
HAnimSite270 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip")
HAnimSite270.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip"
Transform271 = x3d.Transform()
Transform271.translation = [0.1271,0,0]
Shape272 = x3d.Shape(USE="SiteShape")

Transform271.children.append(Shape272)

HAnimSite270.children.append(Transform271)

HAnimSegment266.children.append(HAnimSite270)

HAnimJoint265.children.append(HAnimSegment266)

HAnimJoint257.children.append(HAnimJoint265)

HAnimJoint249.children.append(HAnimJoint257)

HAnimJoint241.children.append(HAnimJoint249)

HAnimJoint201.children.append(HAnimJoint241)

HAnimJoint193.children.append(HAnimJoint201)

HAnimJoint65.children.append(HAnimJoint193)

HAnimJoint57.children.append(HAnimJoint65)

HAnimJoint49.children.append(HAnimJoint57)

HAnimJoint41.children.append(HAnimJoint49)
HAnimJoint273 = x3d.HAnimJoint(DEF="hanim_r_thigh")
HAnimJoint273.name = "r_thigh"
HAnimJoint273.center = [-0.0948,-0.1202,0.8181]
HAnimSegment274 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_thigh")
HAnimSegment274.name = "SEGMENT_FOR_r_thigh"
TouchSensor275 = x3d.TouchSensor()
TouchSensor275.description = "joint r_thigh segment SEGMENT_FOR_r_thigh"

HAnimSegment274.children.append(TouchSensor275)
Transform276 = x3d.Transform()
Transform276.translation = [-0.0948,-0.1202,0.8181]
Shape277 = x3d.Shape(USE="JointShape")

Transform276.children.append(Shape277)

HAnimSegment274.children.append(Transform276)
HAnimSite278 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_thigh_tip")
HAnimSite278.name = "SEGMENT_FOR_r_thigh_tip"
Transform279 = x3d.Transform()
Transform279.translation = [-0.0948,-0.1202,0.8181]
Shape280 = x3d.Shape(USE="SiteShape")

Transform279.children.append(Shape280)

HAnimSite278.children.append(Transform279)

HAnimSegment274.children.append(HAnimSite278)

HAnimJoint273.children.append(HAnimSegment274)
HAnimJoint281 = x3d.HAnimJoint(DEF="hanim_r_calf")
HAnimJoint281.name = "r_calf"
HAnimJoint281.center = [-0.0928,-0.1213,0.4003]
HAnimSegment282 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_calf")
HAnimSegment282.name = "SEGMENT_FOR_r_calf"
TouchSensor283 = x3d.TouchSensor()
TouchSensor283.description = "joint r_calf segment SEGMENT_FOR_r_calf"

HAnimSegment282.children.append(TouchSensor283)
Transform284 = x3d.Transform()
Transform284.translation = [-0.0928,-0.1213,0.4003]
Shape285 = x3d.Shape(USE="JointShape")

Transform284.children.append(Shape285)

HAnimSegment282.children.append(Transform284)
HAnimSite286 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_calf_tip")
HAnimSite286.name = "SEGMENT_FOR_r_calf_tip"
Transform287 = x3d.Transform()
Transform287.translation = [-0.0928,-0.1213,0.4003]
Shape288 = x3d.Shape(USE="SiteShape")

Transform287.children.append(Shape288)

HAnimSite286.children.append(Transform287)

HAnimSegment282.children.append(HAnimSite286)

HAnimJoint281.children.append(HAnimSegment282)
HAnimJoint289 = x3d.HAnimJoint(DEF="hanim_r_talus")
HAnimJoint289.name = "r_talus"
HAnimJoint289.center = [-0.0886,-0.1123,0.0869]
HAnimSegment290 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_talus")
HAnimSegment290.name = "SEGMENT_FOR_r_talus"
TouchSensor291 = x3d.TouchSensor()
TouchSensor291.description = "joint r_talus segment SEGMENT_FOR_r_talus"

HAnimSegment290.children.append(TouchSensor291)
Transform292 = x3d.Transform()
Transform292.translation = [-0.0886,-0.1123,0.0869]
Shape293 = x3d.Shape(USE="JointShape")

Transform292.children.append(Shape293)

HAnimSegment290.children.append(Transform292)
HAnimSite294 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_talus_tip")
HAnimSite294.name = "SEGMENT_FOR_r_talus_tip"
Transform295 = x3d.Transform()
Transform295.translation = [-0.0886,-0.1123,0.0869]
Shape296 = x3d.Shape(USE="SiteShape")

Transform295.children.append(Shape296)

HAnimSite294.children.append(Transform295)

HAnimSegment290.children.append(HAnimSite294)

HAnimJoint289.children.append(HAnimSegment290)
HAnimJoint297 = x3d.HAnimJoint(DEF="hanim_r_navicular")
HAnimJoint297.name = "r_navicular"
HAnimJoint297.center = [-0.0781,-0.097,0.0283]
HAnimSegment298 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_navicular")
HAnimSegment298.name = "SEGMENT_FOR_r_navicular"
TouchSensor299 = x3d.TouchSensor()
TouchSensor299.description = "joint r_navicular segment SEGMENT_FOR_r_navicular"

HAnimSegment298.children.append(TouchSensor299)
Transform300 = x3d.Transform()
Transform300.translation = [-0.0781,-0.097,0.0283]
Shape301 = x3d.Shape(USE="JointShape")

Transform300.children.append(Shape301)

HAnimSegment298.children.append(Transform300)
HAnimSite302 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_navicular_tip")
HAnimSite302.name = "SEGMENT_FOR_r_navicular_tip"
Transform303 = x3d.Transform()
Transform303.translation = [-0.0781,-0.097,0.0283]
Shape304 = x3d.Shape(USE="SiteShape")

Transform303.children.append(Shape304)

HAnimSite302.children.append(Transform303)

HAnimSegment298.children.append(HAnimSite302)

HAnimJoint297.children.append(HAnimSegment298)
HAnimJoint305 = x3d.HAnimJoint(DEF="hanim_r_cuneiform_1")
HAnimJoint305.name = "r_cuneiform_1"
HAnimJoint305.center = [-0.0672,-0.0835,0.0235]
HAnimSegment306 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_cuneiform_1")
HAnimSegment306.name = "SEGMENT_FOR_r_cuneiform_1"
TouchSensor307 = x3d.TouchSensor()
TouchSensor307.description = "joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1"

HAnimSegment306.children.append(TouchSensor307)
Transform308 = x3d.Transform()
Transform308.translation = [-0.0672,-0.0835,0.0235]
Shape309 = x3d.Shape(USE="JointShape")

Transform308.children.append(Shape309)

HAnimSegment306.children.append(Transform308)
HAnimSite310 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_cuneiform_1_tip")
HAnimSite310.name = "SEGMENT_FOR_r_cuneiform_1_tip"
Transform311 = x3d.Transform()
Transform311.translation = [-0.0672,-0.0835,0.0235]
Shape312 = x3d.Shape(USE="SiteShape")

Transform311.children.append(Shape312)

HAnimSite310.children.append(Transform311)

HAnimSegment306.children.append(HAnimSite310)

HAnimJoint305.children.append(HAnimSegment306)
HAnimJoint313 = x3d.HAnimJoint(DEF="hanim_r_metatarsal_1")
HAnimJoint313.name = "r_metatarsal_1"
HAnimJoint313.center = [-0.0644,-0.0577,0.0147]
HAnimSegment314 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metatarsal_1")
HAnimSegment314.name = "SEGMENT_FOR_r_metatarsal_1"
TouchSensor315 = x3d.TouchSensor()
TouchSensor315.description = "joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1"

HAnimSegment314.children.append(TouchSensor315)
Transform316 = x3d.Transform()
Transform316.translation = [-0.0644,-0.0577,0.0147]
Shape317 = x3d.Shape(USE="JointShape")

Transform316.children.append(Shape317)

HAnimSegment314.children.append(Transform316)
HAnimSite318 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metatarsal_1_tip")
HAnimSite318.name = "SEGMENT_FOR_r_metatarsal_1_tip"
Transform319 = x3d.Transform()
Transform319.translation = [-0.0644,-0.0577,0.0147]
Shape320 = x3d.Shape(USE="SiteShape")

Transform319.children.append(Shape320)

HAnimSite318.children.append(Transform319)

HAnimSegment314.children.append(HAnimSite318)

HAnimJoint313.children.append(HAnimSegment314)
HAnimJoint321 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_phalanx_1")
HAnimJoint321.name = "r_tarsal_proximal_phalanx_1"
HAnimJoint321.center = [-0.0619,-0.0083,0.0059]
HAnimSegment322 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1")
HAnimSegment322.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_1"
TouchSensor323 = x3d.TouchSensor()
TouchSensor323.description = "joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1"

HAnimSegment322.children.append(TouchSensor323)
Transform324 = x3d.Transform()
Transform324.translation = [-0.0619,-0.0083,0.0059]
Shape325 = x3d.Shape(USE="JointShape")

Transform324.children.append(Shape325)

HAnimSegment322.children.append(Transform324)
HAnimSite326 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip")
HAnimSite326.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip"
Transform327 = x3d.Transform()
Transform327.translation = [-0.0619,-0.0083,0.0059]
Shape328 = x3d.Shape(USE="SiteShape")

Transform327.children.append(Shape328)

HAnimSite326.children.append(Transform327)

HAnimSegment322.children.append(HAnimSite326)

HAnimJoint321.children.append(HAnimSegment322)
HAnimJoint329 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_phalanx_1")
HAnimJoint329.name = "r_tarsal_distal_phalanx_1"
HAnimSegment330 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1")
HAnimSegment330.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_1"
TouchSensor331 = x3d.TouchSensor()
TouchSensor331.description = "joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1"

HAnimSegment330.children.append(TouchSensor331)
Transform332 = x3d.Transform()
Shape333 = x3d.Shape(USE="JointShape")

Transform332.children.append(Shape333)

HAnimSegment330.children.append(Transform332)
HAnimSite334 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip")
HAnimSite334.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip"
Transform335 = x3d.Transform()
Shape336 = x3d.Shape(USE="SiteShape")

Transform335.children.append(Shape336)

HAnimSite334.children.append(Transform335)

HAnimSegment330.children.append(HAnimSite334)

HAnimJoint329.children.append(HAnimSegment330)

HAnimJoint321.children.append(HAnimJoint329)

HAnimJoint313.children.append(HAnimJoint321)

HAnimJoint305.children.append(HAnimJoint313)

HAnimJoint297.children.append(HAnimJoint305)
HAnimJoint337 = x3d.HAnimJoint(DEF="hanim_r_cuneiform_2")
HAnimJoint337.name = "r_cuneiform_2"
HAnimJoint337.center = [-0.0812,-0.0805,0.025]
HAnimSegment338 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_cuneiform_2")
HAnimSegment338.name = "SEGMENT_FOR_r_cuneiform_2"
TouchSensor339 = x3d.TouchSensor()
TouchSensor339.description = "joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2"

HAnimSegment338.children.append(TouchSensor339)
Transform340 = x3d.Transform()
Transform340.translation = [-0.0812,-0.0805,0.025]
Shape341 = x3d.Shape(USE="JointShape")

Transform340.children.append(Shape341)

HAnimSegment338.children.append(Transform340)
HAnimSite342 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_cuneiform_2_tip")
HAnimSite342.name = "SEGMENT_FOR_r_cuneiform_2_tip"
Transform343 = x3d.Transform()
Transform343.translation = [-0.0812,-0.0805,0.025]
Shape344 = x3d.Shape(USE="SiteShape")

Transform343.children.append(Shape344)

HAnimSite342.children.append(Transform343)

HAnimSegment338.children.append(HAnimSite342)

HAnimJoint337.children.append(HAnimSegment338)
HAnimJoint345 = x3d.HAnimJoint(DEF="hanim_r_metatarsal_2")
HAnimJoint345.name = "r_metatarsal_2"
HAnimJoint345.center = [-0.08,-0.0608,0.0175]
HAnimSegment346 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metatarsal_2")
HAnimSegment346.name = "SEGMENT_FOR_r_metatarsal_2"
TouchSensor347 = x3d.TouchSensor()
TouchSensor347.description = "joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2"

HAnimSegment346.children.append(TouchSensor347)
Transform348 = x3d.Transform()
Transform348.translation = [-0.08,-0.0608,0.0175]
Shape349 = x3d.Shape(USE="JointShape")

Transform348.children.append(Shape349)

HAnimSegment346.children.append(Transform348)
HAnimSite350 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metatarsal_2_tip")
HAnimSite350.name = "SEGMENT_FOR_r_metatarsal_2_tip"
Transform351 = x3d.Transform()
Transform351.translation = [-0.08,-0.0608,0.0175]
Shape352 = x3d.Shape(USE="SiteShape")

Transform351.children.append(Shape352)

HAnimSite350.children.append(Transform351)

HAnimSegment346.children.append(HAnimSite350)

HAnimJoint345.children.append(HAnimSegment346)
HAnimJoint353 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_phalanx_2")
HAnimJoint353.name = "r_tarsal_proximal_phalanx_2"
HAnimJoint353.center = [-0.0823,-0.004,0.0064]
HAnimSegment354 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2")
HAnimSegment354.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_2"
TouchSensor355 = x3d.TouchSensor()
TouchSensor355.description = "joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2"

HAnimSegment354.children.append(TouchSensor355)
Transform356 = x3d.Transform()
Transform356.translation = [-0.0823,-0.004,0.0064]
Shape357 = x3d.Shape(USE="JointShape")

Transform356.children.append(Shape357)

HAnimSegment354.children.append(Transform356)
HAnimSite358 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip")
HAnimSite358.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip"
Transform359 = x3d.Transform()
Transform359.translation = [-0.0823,-0.004,0.0064]
Shape360 = x3d.Shape(USE="SiteShape")

Transform359.children.append(Shape360)

HAnimSite358.children.append(Transform359)

HAnimSegment354.children.append(HAnimSite358)

HAnimJoint353.children.append(HAnimSegment354)
HAnimJoint361 = x3d.HAnimJoint(DEF="hanim_r_tarsal_middle_phalanx_2")
HAnimJoint361.name = "r_tarsal_middle_phalanx_2"
HAnimJoint361.center = [-0.0841,0.0121,0.0041]
HAnimSegment362 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2")
HAnimSegment362.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_2"
TouchSensor363 = x3d.TouchSensor()
TouchSensor363.description = "joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2"

HAnimSegment362.children.append(TouchSensor363)
Transform364 = x3d.Transform()
Transform364.translation = [-0.0841,0.0121,0.0041]
Shape365 = x3d.Shape(USE="JointShape")

Transform364.children.append(Shape365)

HAnimSegment362.children.append(Transform364)
HAnimSite366 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip")
HAnimSite366.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip"
Transform367 = x3d.Transform()
Transform367.translation = [-0.0841,0.0121,0.0041]
Shape368 = x3d.Shape(USE="SiteShape")

Transform367.children.append(Shape368)

HAnimSite366.children.append(Transform367)

HAnimSegment362.children.append(HAnimSite366)

HAnimJoint361.children.append(HAnimSegment362)
HAnimJoint369 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_phalanx_2")
HAnimJoint369.name = "r_tarsal_distal_phalanx_2"
HAnimJoint369.center = [-0.0841,0.0216,0.0013]
HAnimSegment370 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2")
HAnimSegment370.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_2"
TouchSensor371 = x3d.TouchSensor()
TouchSensor371.description = "joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2"

HAnimSegment370.children.append(TouchSensor371)
Transform372 = x3d.Transform()
Transform372.translation = [-0.0841,0.0216,0.0013]
Shape373 = x3d.Shape(USE="JointShape")

Transform372.children.append(Shape373)

HAnimSegment370.children.append(Transform372)
HAnimSite374 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip")
HAnimSite374.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip"
Transform375 = x3d.Transform()
Transform375.translation = [-0.0841,0.0216,0.0013]
Shape376 = x3d.Shape(USE="SiteShape")

Transform375.children.append(Shape376)

HAnimSite374.children.append(Transform375)

HAnimSegment370.children.append(HAnimSite374)

HAnimJoint369.children.append(HAnimSegment370)

HAnimJoint361.children.append(HAnimJoint369)

HAnimJoint353.children.append(HAnimJoint361)

HAnimJoint345.children.append(HAnimJoint353)

HAnimJoint337.children.append(HAnimJoint345)

HAnimJoint297.children.append(HAnimJoint337)
HAnimJoint377 = x3d.HAnimJoint(DEF="hanim_r_cuneiform_3")
HAnimJoint377.name = "r_cuneiform_3"
HAnimJoint377.center = [-0.0928,-0.0821,0.0248]
HAnimSegment378 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_cuneiform_3")
HAnimSegment378.name = "SEGMENT_FOR_r_cuneiform_3"
TouchSensor379 = x3d.TouchSensor()
TouchSensor379.description = "joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3"

HAnimSegment378.children.append(TouchSensor379)
Transform380 = x3d.Transform()
Transform380.translation = [-0.0928,-0.0821,0.0248]
Shape381 = x3d.Shape(USE="JointShape")

Transform380.children.append(Shape381)

HAnimSegment378.children.append(Transform380)
HAnimSite382 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_cuneiform_3_tip")
HAnimSite382.name = "SEGMENT_FOR_r_cuneiform_3_tip"
Transform383 = x3d.Transform()
Transform383.translation = [-0.0928,-0.0821,0.0248]
Shape384 = x3d.Shape(USE="SiteShape")

Transform383.children.append(Shape384)

HAnimSite382.children.append(Transform383)

HAnimSegment378.children.append(HAnimSite382)

HAnimJoint377.children.append(HAnimSegment378)
HAnimJoint385 = x3d.HAnimJoint(DEF="hanim_r_metatarsal_3")
HAnimJoint385.name = "r_metatarsal_3"
HAnimJoint385.center = [-0.0944,-0.0625,0.0175]
HAnimSegment386 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metatarsal_3")
HAnimSegment386.name = "SEGMENT_FOR_r_metatarsal_3"
TouchSensor387 = x3d.TouchSensor()
TouchSensor387.description = "joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3"

HAnimSegment386.children.append(TouchSensor387)
Transform388 = x3d.Transform()
Transform388.translation = [-0.0944,-0.0625,0.0175]
Shape389 = x3d.Shape(USE="JointShape")

Transform388.children.append(Shape389)

HAnimSegment386.children.append(Transform388)
HAnimSite390 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metatarsal_3_tip")
HAnimSite390.name = "SEGMENT_FOR_r_metatarsal_3_tip"
Transform391 = x3d.Transform()
Transform391.translation = [-0.0944,-0.0625,0.0175]
Shape392 = x3d.Shape(USE="SiteShape")

Transform391.children.append(Shape392)

HAnimSite390.children.append(Transform391)

HAnimSegment386.children.append(HAnimSite390)

HAnimJoint385.children.append(HAnimSegment386)
HAnimJoint393 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_phalanx_3")
HAnimJoint393.name = "r_tarsal_proximal_phalanx_3"
HAnimJoint393.center = [-0.0963,-0.0065,0.0065]
HAnimSegment394 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3")
HAnimSegment394.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_3"
TouchSensor395 = x3d.TouchSensor()
TouchSensor395.description = "joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3"

HAnimSegment394.children.append(TouchSensor395)
Transform396 = x3d.Transform()
Transform396.translation = [-0.0963,-0.0065,0.0065]
Shape397 = x3d.Shape(USE="JointShape")

Transform396.children.append(Shape397)

HAnimSegment394.children.append(Transform396)
HAnimSite398 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip")
HAnimSite398.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip"
Transform399 = x3d.Transform()
Transform399.translation = [-0.0963,-0.0065,0.0065]
Shape400 = x3d.Shape(USE="SiteShape")

Transform399.children.append(Shape400)

HAnimSite398.children.append(Transform399)

HAnimSegment394.children.append(HAnimSite398)

HAnimJoint393.children.append(HAnimSegment394)
HAnimJoint401 = x3d.HAnimJoint(DEF="hanim_r_tarsal_middle_phalanx_3")
HAnimJoint401.name = "r_tarsal_middle_phalanx_3"
HAnimJoint401.center = [-0.0987,0.0086,0.0034]
HAnimSegment402 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3")
HAnimSegment402.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_3"
TouchSensor403 = x3d.TouchSensor()
TouchSensor403.description = "joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3"

HAnimSegment402.children.append(TouchSensor403)
Transform404 = x3d.Transform()
Transform404.translation = [-0.0987,0.0086,0.0034]
Shape405 = x3d.Shape(USE="JointShape")

Transform404.children.append(Shape405)

HAnimSegment402.children.append(Transform404)
HAnimSite406 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip")
HAnimSite406.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip"
Transform407 = x3d.Transform()
Transform407.translation = [-0.0987,0.0086,0.0034]
Shape408 = x3d.Shape(USE="SiteShape")

Transform407.children.append(Shape408)

HAnimSite406.children.append(Transform407)

HAnimSegment402.children.append(HAnimSite406)

HAnimJoint401.children.append(HAnimSegment402)
HAnimJoint409 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_phalanx_3")
HAnimJoint409.name = "r_tarsal_distal_phalanx_3"
HAnimJoint409.center = [-0.1002,0.0178,0.0013]
HAnimSegment410 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3")
HAnimSegment410.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_3"
TouchSensor411 = x3d.TouchSensor()
TouchSensor411.description = "joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3"

HAnimSegment410.children.append(TouchSensor411)
Transform412 = x3d.Transform()
Transform412.translation = [-0.1002,0.0178,0.0013]
Shape413 = x3d.Shape(USE="JointShape")

Transform412.children.append(Shape413)

HAnimSegment410.children.append(Transform412)
HAnimSite414 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip")
HAnimSite414.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip"
Transform415 = x3d.Transform()
Transform415.translation = [-0.1002,0.0178,0.0013]
Shape416 = x3d.Shape(USE="SiteShape")

Transform415.children.append(Shape416)

HAnimSite414.children.append(Transform415)

HAnimSegment410.children.append(HAnimSite414)

HAnimJoint409.children.append(HAnimSegment410)

HAnimJoint401.children.append(HAnimJoint409)

HAnimJoint393.children.append(HAnimJoint401)

HAnimJoint385.children.append(HAnimJoint393)

HAnimJoint377.children.append(HAnimJoint385)

HAnimJoint297.children.append(HAnimJoint377)

HAnimJoint289.children.append(HAnimJoint297)
HAnimJoint417 = x3d.HAnimJoint(DEF="hanim_r_calcaneus")
HAnimJoint417.name = "r_calcaneus"
HAnimJoint417.center = [-0.0889,-0.1278,0.0494]
HAnimSegment418 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_calcaneus")
HAnimSegment418.name = "SEGMENT_FOR_r_calcaneus"
TouchSensor419 = x3d.TouchSensor()
TouchSensor419.description = "joint r_calcaneus segment SEGMENT_FOR_r_calcaneus"

HAnimSegment418.children.append(TouchSensor419)
Transform420 = x3d.Transform()
Transform420.translation = [-0.0889,-0.1278,0.0494]
Shape421 = x3d.Shape(USE="JointShape")

Transform420.children.append(Shape421)

HAnimSegment418.children.append(Transform420)
HAnimSite422 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_calcaneus_tip")
HAnimSite422.name = "SEGMENT_FOR_r_calcaneus_tip"
Transform423 = x3d.Transform()
Transform423.translation = [-0.0889,-0.1278,0.0494]
Shape424 = x3d.Shape(USE="SiteShape")

Transform423.children.append(Shape424)

HAnimSite422.children.append(Transform423)

HAnimSegment418.children.append(HAnimSite422)

HAnimJoint417.children.append(HAnimSegment418)
HAnimJoint425 = x3d.HAnimJoint(DEF="hanim_r_cuboid")
HAnimJoint425.name = "r_cuboid"
HAnimJoint425.center = [-0.1105,-0.0998,0.0267]
HAnimSegment426 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_cuboid")
HAnimSegment426.name = "SEGMENT_FOR_r_cuboid"
TouchSensor427 = x3d.TouchSensor()
TouchSensor427.description = "joint r_cuboid segment SEGMENT_FOR_r_cuboid"

HAnimSegment426.children.append(TouchSensor427)
Transform428 = x3d.Transform()
Transform428.translation = [-0.1105,-0.0998,0.0267]
Shape429 = x3d.Shape(USE="JointShape")

Transform428.children.append(Shape429)

HAnimSegment426.children.append(Transform428)
HAnimSite430 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_cuboid_tip")
HAnimSite430.name = "SEGMENT_FOR_r_cuboid_tip"
Transform431 = x3d.Transform()
Transform431.translation = [-0.1105,-0.0998,0.0267]
Shape432 = x3d.Shape(USE="SiteShape")

Transform431.children.append(Shape432)

HAnimSite430.children.append(Transform431)

HAnimSegment426.children.append(HAnimSite430)

HAnimJoint425.children.append(HAnimSegment426)
HAnimJoint433 = x3d.HAnimJoint(DEF="hanim_r_metatarsal_4")
HAnimJoint433.name = "r_metatarsal_4"
HAnimJoint433.center = [-0.1063,-0.0634,0.016]
HAnimSegment434 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metatarsal_4")
HAnimSegment434.name = "SEGMENT_FOR_r_metatarsal_4"
TouchSensor435 = x3d.TouchSensor()
TouchSensor435.description = "joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4"

HAnimSegment434.children.append(TouchSensor435)
Transform436 = x3d.Transform()
Transform436.translation = [-0.1063,-0.0634,0.016]
Shape437 = x3d.Shape(USE="JointShape")

Transform436.children.append(Shape437)

HAnimSegment434.children.append(Transform436)
HAnimSite438 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metatarsal_4_tip")
HAnimSite438.name = "SEGMENT_FOR_r_metatarsal_4_tip"
Transform439 = x3d.Transform()
Transform439.translation = [-0.1063,-0.0634,0.016]
Shape440 = x3d.Shape(USE="SiteShape")

Transform439.children.append(Shape440)

HAnimSite438.children.append(Transform439)

HAnimSegment434.children.append(HAnimSite438)

HAnimJoint433.children.append(HAnimSegment434)
HAnimJoint441 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_phalanx_4")
HAnimJoint441.name = "r_tarsal_proximal_phalanx_4"
HAnimJoint441.center = [-0.1097,-0.0107,0.0058]
HAnimSegment442 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4")
HAnimSegment442.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_4"
TouchSensor443 = x3d.TouchSensor()
TouchSensor443.description = "joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4"

HAnimSegment442.children.append(TouchSensor443)
Transform444 = x3d.Transform()
Transform444.translation = [-0.1097,-0.0107,0.0058]
Shape445 = x3d.Shape(USE="JointShape")

Transform444.children.append(Shape445)

HAnimSegment442.children.append(Transform444)
HAnimSite446 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip")
HAnimSite446.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip"
Transform447 = x3d.Transform()
Transform447.translation = [-0.1097,-0.0107,0.0058]
Shape448 = x3d.Shape(USE="SiteShape")

Transform447.children.append(Shape448)

HAnimSite446.children.append(Transform447)

HAnimSegment442.children.append(HAnimSite446)

HAnimJoint441.children.append(HAnimSegment442)
HAnimJoint449 = x3d.HAnimJoint(DEF="hanim_r_tarsal_middle_phalanx_4")
HAnimJoint449.name = "r_tarsal_middle_phalanx_4"
HAnimJoint449.center = [-0.114,0.0044,0.0037]
HAnimSegment450 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4")
HAnimSegment450.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_4"
TouchSensor451 = x3d.TouchSensor()
TouchSensor451.description = "joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4"

HAnimSegment450.children.append(TouchSensor451)
Transform452 = x3d.Transform()
Transform452.translation = [-0.114,0.0044,0.0037]
Shape453 = x3d.Shape(USE="JointShape")

Transform452.children.append(Shape453)

HAnimSegment450.children.append(Transform452)
HAnimSite454 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip")
HAnimSite454.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip"
Transform455 = x3d.Transform()
Transform455.translation = [-0.114,0.0044,0.0037]
Shape456 = x3d.Shape(USE="SiteShape")

Transform455.children.append(Shape456)

HAnimSite454.children.append(Transform455)

HAnimSegment450.children.append(HAnimSite454)

HAnimJoint449.children.append(HAnimSegment450)
HAnimJoint457 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_phalanx_4")
HAnimJoint457.name = "r_tarsal_distal_phalanx_4"
HAnimJoint457.center = [-0.1155,0.0118,0.0008]
HAnimSegment458 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4")
HAnimSegment458.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_4"
TouchSensor459 = x3d.TouchSensor()
TouchSensor459.description = "joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4"

HAnimSegment458.children.append(TouchSensor459)
Transform460 = x3d.Transform()
Transform460.translation = [-0.1155,0.0118,0.0008]
Shape461 = x3d.Shape(USE="JointShape")

Transform460.children.append(Shape461)

HAnimSegment458.children.append(Transform460)
HAnimSite462 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip")
HAnimSite462.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip"
Transform463 = x3d.Transform()
Transform463.translation = [-0.1155,0.0118,0.0008]
Shape464 = x3d.Shape(USE="SiteShape")

Transform463.children.append(Shape464)

HAnimSite462.children.append(Transform463)

HAnimSegment458.children.append(HAnimSite462)

HAnimJoint457.children.append(HAnimSegment458)

HAnimJoint449.children.append(HAnimJoint457)

HAnimJoint441.children.append(HAnimJoint449)

HAnimJoint433.children.append(HAnimJoint441)

HAnimJoint425.children.append(HAnimJoint433)
HAnimJoint465 = x3d.HAnimJoint(DEF="hanim_r_metatarsal_5")
HAnimJoint465.name = "r_metatarsal_5"
HAnimJoint465.center = [-0.1206,-0.0671,0.0124]
HAnimSegment466 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metatarsal_5")
HAnimSegment466.name = "SEGMENT_FOR_r_metatarsal_5"
TouchSensor467 = x3d.TouchSensor()
TouchSensor467.description = "joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5"

HAnimSegment466.children.append(TouchSensor467)
Transform468 = x3d.Transform()
Transform468.translation = [-0.1206,-0.0671,0.0124]
Shape469 = x3d.Shape(USE="JointShape")

Transform468.children.append(Shape469)

HAnimSegment466.children.append(Transform468)
HAnimSite470 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metatarsal_5_tip")
HAnimSite470.name = "SEGMENT_FOR_r_metatarsal_5_tip"
Transform471 = x3d.Transform()
Transform471.translation = [-0.1206,-0.0671,0.0124]
Shape472 = x3d.Shape(USE="SiteShape")

Transform471.children.append(Shape472)

HAnimSite470.children.append(Transform471)

HAnimSegment466.children.append(HAnimSite470)

HAnimJoint465.children.append(HAnimSegment466)
HAnimJoint473 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_phalanx_5")
HAnimJoint473.name = "r_tarsal_proximal_phalanx_5"
HAnimJoint473.center = [-0.1239,-0.0153,0.0051]
HAnimSegment474 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5")
HAnimSegment474.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_5"
TouchSensor475 = x3d.TouchSensor()
TouchSensor475.description = "joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5"

HAnimSegment474.children.append(TouchSensor475)
Transform476 = x3d.Transform()
Transform476.translation = [-0.1239,-0.0153,0.0051]
Shape477 = x3d.Shape(USE="JointShape")

Transform476.children.append(Shape477)

HAnimSegment474.children.append(Transform476)
HAnimSite478 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip")
HAnimSite478.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip"
Transform479 = x3d.Transform()
Transform479.translation = [-0.1239,-0.0153,0.0051]
Shape480 = x3d.Shape(USE="SiteShape")

Transform479.children.append(Shape480)

HAnimSite478.children.append(Transform479)

HAnimSegment474.children.append(HAnimSite478)

HAnimJoint473.children.append(HAnimSegment474)
HAnimJoint481 = x3d.HAnimJoint(DEF="hanim_r_tarsal_middle_phalanx_5")
HAnimJoint481.name = "r_tarsal_middle_phalanx_5"
HAnimJoint481.center = [-0.1262,-0.0077,0.0023]
HAnimSegment482 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5")
HAnimSegment482.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_5"
TouchSensor483 = x3d.TouchSensor()
TouchSensor483.description = "joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5"

HAnimSegment482.children.append(TouchSensor483)
Transform484 = x3d.Transform()
Transform484.translation = [-0.1262,-0.0077,0.0023]
Shape485 = x3d.Shape(USE="JointShape")

Transform484.children.append(Shape485)

HAnimSegment482.children.append(Transform484)
HAnimSite486 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip")
HAnimSite486.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip"
Transform487 = x3d.Transform()
Transform487.translation = [-0.1262,-0.0077,0.0023]
Shape488 = x3d.Shape(USE="SiteShape")

Transform487.children.append(Shape488)

HAnimSite486.children.append(Transform487)

HAnimSegment482.children.append(HAnimSite486)

HAnimJoint481.children.append(HAnimSegment482)
HAnimJoint489 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_phalanx_5")
HAnimJoint489.name = "r_tarsal_distal_phalanx_5"
HAnimJoint489.center = [-0.1271,0,0]
HAnimSegment490 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5")
HAnimSegment490.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_5"
TouchSensor491 = x3d.TouchSensor()
TouchSensor491.description = "joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5"

HAnimSegment490.children.append(TouchSensor491)
Transform492 = x3d.Transform()
Transform492.translation = [-0.1271,0,0]
Shape493 = x3d.Shape(USE="JointShape")

Transform492.children.append(Shape493)

HAnimSegment490.children.append(Transform492)
HAnimSite494 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip")
HAnimSite494.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip"
Transform495 = x3d.Transform()
Transform495.translation = [-0.1271,0,0]
Shape496 = x3d.Shape(USE="SiteShape")

Transform495.children.append(Shape496)

HAnimSite494.children.append(Transform495)

HAnimSegment490.children.append(HAnimSite494)

HAnimJoint489.children.append(HAnimSegment490)

HAnimJoint481.children.append(HAnimJoint489)

HAnimJoint473.children.append(HAnimJoint481)

HAnimJoint465.children.append(HAnimJoint473)

HAnimJoint425.children.append(HAnimJoint465)

HAnimJoint417.children.append(HAnimJoint425)

HAnimJoint289.children.append(HAnimJoint417)

HAnimJoint281.children.append(HAnimJoint289)

HAnimJoint273.children.append(HAnimJoint281)

HAnimJoint41.children.append(HAnimJoint273)

HAnimJoint33.children.append(HAnimJoint41)
HAnimJoint497 = x3d.HAnimJoint(DEF="hanim_l5")
HAnimJoint497.name = "l5"
HAnimJoint497.center = [-0.0002,-0.1156,0.9169]
HAnimSegment498 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l5")
HAnimSegment498.name = "SEGMENT_FOR_l5"
TouchSensor499 = x3d.TouchSensor()
TouchSensor499.description = "joint l5 segment SEGMENT_FOR_l5"

HAnimSegment498.children.append(TouchSensor499)
Transform500 = x3d.Transform()
Transform500.translation = [-0.0002,-0.1156,0.9169]
Shape501 = x3d.Shape(USE="JointShape")

Transform500.children.append(Shape501)

HAnimSegment498.children.append(Transform500)
HAnimSite502 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l5_tip")
HAnimSite502.name = "SEGMENT_FOR_l5_tip"
Transform503 = x3d.Transform()
Transform503.translation = [-0.0002,-0.1156,0.9169]
Shape504 = x3d.Shape(USE="SiteShape")

Transform503.children.append(Shape504)

HAnimSite502.children.append(Transform503)

HAnimSegment498.children.append(HAnimSite502)

HAnimJoint497.children.append(HAnimSegment498)
HAnimJoint505 = x3d.HAnimJoint(DEF="hanim_l4")
HAnimJoint505.name = "l4"
HAnimJoint505.center = [-0.0002,-0.1156,0.9412]
HAnimSegment506 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l4")
HAnimSegment506.name = "SEGMENT_FOR_l4"
TouchSensor507 = x3d.TouchSensor()
TouchSensor507.description = "joint l4 segment SEGMENT_FOR_l4"

HAnimSegment506.children.append(TouchSensor507)
Transform508 = x3d.Transform()
Transform508.translation = [-0.0002,-0.1156,0.9412]
Shape509 = x3d.Shape(USE="JointShape")

Transform508.children.append(Shape509)

HAnimSegment506.children.append(Transform508)
HAnimSite510 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l4_tip")
HAnimSite510.name = "SEGMENT_FOR_l4_tip"
Transform511 = x3d.Transform()
Transform511.translation = [-0.0002,-0.1156,0.9412]
Shape512 = x3d.Shape(USE="SiteShape")

Transform511.children.append(Shape512)

HAnimSite510.children.append(Transform511)

HAnimSegment506.children.append(HAnimSite510)

HAnimJoint505.children.append(HAnimSegment506)
HAnimJoint513 = x3d.HAnimJoint(DEF="hanim_l3")
HAnimJoint513.name = "l3"
HAnimJoint513.center = [-0.0002,-0.1156,0.9574]
HAnimSegment514 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l3")
HAnimSegment514.name = "SEGMENT_FOR_l3"
TouchSensor515 = x3d.TouchSensor()
TouchSensor515.description = "joint l3 segment SEGMENT_FOR_l3"

HAnimSegment514.children.append(TouchSensor515)
Transform516 = x3d.Transform()
Transform516.translation = [-0.0002,-0.1156,0.9574]
Shape517 = x3d.Shape(USE="JointShape")

Transform516.children.append(Shape517)

HAnimSegment514.children.append(Transform516)
HAnimSite518 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l3_tip")
HAnimSite518.name = "SEGMENT_FOR_l3_tip"
Transform519 = x3d.Transform()
Transform519.translation = [-0.0002,-0.1156,0.9574]
Shape520 = x3d.Shape(USE="SiteShape")

Transform519.children.append(Shape520)

HAnimSite518.children.append(Transform519)

HAnimSegment514.children.append(HAnimSite518)

HAnimJoint513.children.append(HAnimSegment514)
HAnimJoint521 = x3d.HAnimJoint(DEF="hanim_l2")
HAnimJoint521.name = "l2"
HAnimJoint521.center = [-0.0002,-0.1156,0.9738]
HAnimSegment522 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l2")
HAnimSegment522.name = "SEGMENT_FOR_l2"
TouchSensor523 = x3d.TouchSensor()
TouchSensor523.description = "joint l2 segment SEGMENT_FOR_l2"

HAnimSegment522.children.append(TouchSensor523)
Transform524 = x3d.Transform()
Transform524.translation = [-0.0002,-0.1156,0.9738]
Shape525 = x3d.Shape(USE="JointShape")

Transform524.children.append(Shape525)

HAnimSegment522.children.append(Transform524)
HAnimSite526 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l2_tip")
HAnimSite526.name = "SEGMENT_FOR_l2_tip"
Transform527 = x3d.Transform()
Transform527.translation = [-0.0002,-0.1156,0.9738]
Shape528 = x3d.Shape(USE="SiteShape")

Transform527.children.append(Shape528)

HAnimSite526.children.append(Transform527)

HAnimSegment522.children.append(HAnimSite526)

HAnimJoint521.children.append(HAnimSegment522)
HAnimJoint529 = x3d.HAnimJoint(DEF="hanim_l1")
HAnimJoint529.name = "l1"
HAnimJoint529.center = [-0.0002,-0.1156,0.9911]
HAnimSegment530 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l1")
HAnimSegment530.name = "SEGMENT_FOR_l1"
TouchSensor531 = x3d.TouchSensor()
TouchSensor531.description = "joint l1 segment SEGMENT_FOR_l1"

HAnimSegment530.children.append(TouchSensor531)
Transform532 = x3d.Transform()
Transform532.translation = [-0.0002,-0.1156,0.9911]
Shape533 = x3d.Shape(USE="JointShape")

Transform532.children.append(Shape533)

HAnimSegment530.children.append(Transform532)
HAnimSite534 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l1_tip")
HAnimSite534.name = "SEGMENT_FOR_l1_tip"
Transform535 = x3d.Transform()
Transform535.translation = [-0.0002,-0.1156,0.9911]
Shape536 = x3d.Shape(USE="SiteShape")

Transform535.children.append(Shape536)

HAnimSite534.children.append(Transform535)

HAnimSegment530.children.append(HAnimSite534)

HAnimJoint529.children.append(HAnimSegment530)
HAnimJoint537 = x3d.HAnimJoint(DEF="hanim_t12")
HAnimJoint537.name = "t12"
HAnimJoint537.center = [-0.0002,-0.1156,1.0145]
HAnimSegment538 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t12")
HAnimSegment538.name = "SEGMENT_FOR_t12"
TouchSensor539 = x3d.TouchSensor()
TouchSensor539.description = "joint t12 segment SEGMENT_FOR_t12"

HAnimSegment538.children.append(TouchSensor539)
Transform540 = x3d.Transform()
Transform540.translation = [-0.0002,-0.1156,1.0145]
Shape541 = x3d.Shape(USE="JointShape")

Transform540.children.append(Shape541)

HAnimSegment538.children.append(Transform540)
HAnimSite542 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t12_tip")
HAnimSite542.name = "SEGMENT_FOR_t12_tip"
Transform543 = x3d.Transform()
Transform543.translation = [-0.0002,-0.1156,1.0145]
Shape544 = x3d.Shape(USE="SiteShape")

Transform543.children.append(Shape544)

HAnimSite542.children.append(Transform543)

HAnimSegment538.children.append(HAnimSite542)

HAnimJoint537.children.append(HAnimSegment538)
HAnimJoint545 = x3d.HAnimJoint(DEF="hanim_t11")
HAnimJoint545.name = "t11"
HAnimJoint545.center = [-0.0002,-0.1156,1.0381]
HAnimSegment546 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t11")
HAnimSegment546.name = "SEGMENT_FOR_t11"
TouchSensor547 = x3d.TouchSensor()
TouchSensor547.description = "joint t11 segment SEGMENT_FOR_t11"

HAnimSegment546.children.append(TouchSensor547)
Transform548 = x3d.Transform()
Transform548.translation = [-0.0002,-0.1156,1.0381]
Shape549 = x3d.Shape(USE="JointShape")

Transform548.children.append(Shape549)

HAnimSegment546.children.append(Transform548)
HAnimSite550 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t11_tip")
HAnimSite550.name = "SEGMENT_FOR_t11_tip"
Transform551 = x3d.Transform()
Transform551.translation = [-0.0002,-0.1156,1.0381]
Shape552 = x3d.Shape(USE="SiteShape")

Transform551.children.append(Shape552)

HAnimSite550.children.append(Transform551)

HAnimSegment546.children.append(HAnimSite550)

HAnimJoint545.children.append(HAnimSegment546)
HAnimJoint553 = x3d.HAnimJoint(DEF="hanim_t10")
HAnimJoint553.name = "t10"
HAnimJoint553.center = [-0.0002,-0.1157,1.0552]
HAnimSegment554 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t10")
HAnimSegment554.name = "SEGMENT_FOR_t10"
TouchSensor555 = x3d.TouchSensor()
TouchSensor555.description = "joint t10 segment SEGMENT_FOR_t10"

HAnimSegment554.children.append(TouchSensor555)
Transform556 = x3d.Transform()
Transform556.translation = [-0.0002,-0.1157,1.0552]
Shape557 = x3d.Shape(USE="JointShape")

Transform556.children.append(Shape557)

HAnimSegment554.children.append(Transform556)
HAnimSite558 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t10_tip")
HAnimSite558.name = "SEGMENT_FOR_t10_tip"
Transform559 = x3d.Transform()
Transform559.translation = [-0.0002,-0.1157,1.0552]
Shape560 = x3d.Shape(USE="SiteShape")

Transform559.children.append(Shape560)

HAnimSite558.children.append(Transform559)

HAnimSegment554.children.append(HAnimSite558)

HAnimJoint553.children.append(HAnimSegment554)
HAnimJoint561 = x3d.HAnimJoint(DEF="hanim_t9")
HAnimJoint561.name = "t9"
HAnimJoint561.center = [-0.0002,-0.1156,1.0699]
HAnimSegment562 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t9")
HAnimSegment562.name = "SEGMENT_FOR_t9"
TouchSensor563 = x3d.TouchSensor()
TouchSensor563.description = "joint t9 segment SEGMENT_FOR_t9"

HAnimSegment562.children.append(TouchSensor563)
Transform564 = x3d.Transform()
Transform564.translation = [-0.0002,-0.1156,1.0699]
Shape565 = x3d.Shape(USE="JointShape")

Transform564.children.append(Shape565)

HAnimSegment562.children.append(Transform564)
HAnimSite566 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t9_tip")
HAnimSite566.name = "SEGMENT_FOR_t9_tip"
Transform567 = x3d.Transform()
Transform567.translation = [-0.0002,-0.1156,1.0699]
Shape568 = x3d.Shape(USE="SiteShape")

Transform567.children.append(Shape568)

HAnimSite566.children.append(Transform567)

HAnimSegment562.children.append(HAnimSite566)

HAnimJoint561.children.append(HAnimSegment562)
HAnimJoint569 = x3d.HAnimJoint(DEF="hanim_t8")
HAnimJoint569.name = "t8"
HAnimJoint569.center = [-0.0002,-0.1156,1.0845]
HAnimSegment570 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t8")
HAnimSegment570.name = "SEGMENT_FOR_t8"
TouchSensor571 = x3d.TouchSensor()
TouchSensor571.description = "joint t8 segment SEGMENT_FOR_t8"

HAnimSegment570.children.append(TouchSensor571)
Transform572 = x3d.Transform()
Transform572.translation = [-0.0002,-0.1156,1.0845]
Shape573 = x3d.Shape(USE="JointShape")

Transform572.children.append(Shape573)

HAnimSegment570.children.append(Transform572)
HAnimSite574 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t8_tip")
HAnimSite574.name = "SEGMENT_FOR_t8_tip"
Transform575 = x3d.Transform()
Transform575.translation = [-0.0002,-0.1156,1.0845]
Shape576 = x3d.Shape(USE="SiteShape")

Transform575.children.append(Shape576)

HAnimSite574.children.append(Transform575)

HAnimSegment570.children.append(HAnimSite574)

HAnimJoint569.children.append(HAnimSegment570)
HAnimJoint577 = x3d.HAnimJoint(DEF="hanim_t7")
HAnimJoint577.name = "t7"
HAnimJoint577.center = [-0.0002,-0.1156,1.1002]
HAnimSegment578 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t7")
HAnimSegment578.name = "SEGMENT_FOR_t7"
TouchSensor579 = x3d.TouchSensor()
TouchSensor579.description = "joint t7 segment SEGMENT_FOR_t7"

HAnimSegment578.children.append(TouchSensor579)
Transform580 = x3d.Transform()
Transform580.translation = [-0.0002,-0.1156,1.1002]
Shape581 = x3d.Shape(USE="JointShape")

Transform580.children.append(Shape581)

HAnimSegment578.children.append(Transform580)
HAnimSite582 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t7_tip")
HAnimSite582.name = "SEGMENT_FOR_t7_tip"
Transform583 = x3d.Transform()
Transform583.translation = [-0.0002,-0.1156,1.1002]
Shape584 = x3d.Shape(USE="SiteShape")

Transform583.children.append(Shape584)

HAnimSite582.children.append(Transform583)

HAnimSegment578.children.append(HAnimSite582)

HAnimJoint577.children.append(HAnimSegment578)
HAnimJoint585 = x3d.HAnimJoint(DEF="hanim_t6")
HAnimJoint585.name = "t6"
HAnimJoint585.center = [-0.0002,-0.1156,1.1131]
HAnimSegment586 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t6")
HAnimSegment586.name = "SEGMENT_FOR_t6"
TouchSensor587 = x3d.TouchSensor()
TouchSensor587.description = "joint t6 segment SEGMENT_FOR_t6"

HAnimSegment586.children.append(TouchSensor587)
Transform588 = x3d.Transform()
Transform588.translation = [-0.0002,-0.1156,1.1131]
Shape589 = x3d.Shape(USE="JointShape")

Transform588.children.append(Shape589)

HAnimSegment586.children.append(Transform588)
HAnimSite590 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t6_tip")
HAnimSite590.name = "SEGMENT_FOR_t6_tip"
Transform591 = x3d.Transform()
Transform591.translation = [-0.0002,-0.1156,1.1131]
Shape592 = x3d.Shape(USE="SiteShape")

Transform591.children.append(Shape592)

HAnimSite590.children.append(Transform591)

HAnimSegment586.children.append(HAnimSite590)

HAnimJoint585.children.append(HAnimSegment586)
HAnimJoint593 = x3d.HAnimJoint(DEF="hanim_t5")
HAnimJoint593.name = "t5"
HAnimJoint593.center = [-0.0002,-0.1156,1.1286]
HAnimSegment594 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t5")
HAnimSegment594.name = "SEGMENT_FOR_t5"
TouchSensor595 = x3d.TouchSensor()
TouchSensor595.description = "joint t5 segment SEGMENT_FOR_t5"

HAnimSegment594.children.append(TouchSensor595)
Transform596 = x3d.Transform()
Transform596.translation = [-0.0002,-0.1156,1.1286]
Shape597 = x3d.Shape(USE="JointShape")

Transform596.children.append(Shape597)

HAnimSegment594.children.append(Transform596)
HAnimSite598 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t5_tip")
HAnimSite598.name = "SEGMENT_FOR_t5_tip"
Transform599 = x3d.Transform()
Transform599.translation = [-0.0002,-0.1156,1.1286]
Shape600 = x3d.Shape(USE="SiteShape")

Transform599.children.append(Shape600)

HAnimSite598.children.append(Transform599)

HAnimSegment594.children.append(HAnimSite598)

HAnimJoint593.children.append(HAnimSegment594)
HAnimJoint601 = x3d.HAnimJoint(DEF="hanim_t4")
HAnimJoint601.name = "t4"
HAnimJoint601.center = [-0.0002,-0.1156,1.1439]
HAnimSegment602 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t4")
HAnimSegment602.name = "SEGMENT_FOR_t4"
TouchSensor603 = x3d.TouchSensor()
TouchSensor603.description = "joint t4 segment SEGMENT_FOR_t4"

HAnimSegment602.children.append(TouchSensor603)
Transform604 = x3d.Transform()
Transform604.translation = [-0.0002,-0.1156,1.1439]
Shape605 = x3d.Shape(USE="JointShape")

Transform604.children.append(Shape605)

HAnimSegment602.children.append(Transform604)
HAnimSite606 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t4_tip")
HAnimSite606.name = "SEGMENT_FOR_t4_tip"
Transform607 = x3d.Transform()
Transform607.translation = [-0.0002,-0.1156,1.1439]
Shape608 = x3d.Shape(USE="SiteShape")

Transform607.children.append(Shape608)

HAnimSite606.children.append(Transform607)

HAnimSegment602.children.append(HAnimSite606)

HAnimJoint601.children.append(HAnimSegment602)
HAnimJoint609 = x3d.HAnimJoint(DEF="hanim_t3")
HAnimJoint609.name = "t3"
HAnimJoint609.center = [-0.0002,-0.1156,1.1623]
HAnimSegment610 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t3")
HAnimSegment610.name = "SEGMENT_FOR_t3"
TouchSensor611 = x3d.TouchSensor()
TouchSensor611.description = "joint t3 segment SEGMENT_FOR_t3"

HAnimSegment610.children.append(TouchSensor611)
Transform612 = x3d.Transform()
Transform612.translation = [-0.0002,-0.1156,1.1623]
Shape613 = x3d.Shape(USE="JointShape")

Transform612.children.append(Shape613)

HAnimSegment610.children.append(Transform612)
HAnimSite614 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t3_tip")
HAnimSite614.name = "SEGMENT_FOR_t3_tip"
Transform615 = x3d.Transform()
Transform615.translation = [-0.0002,-0.1156,1.1623]
Shape616 = x3d.Shape(USE="SiteShape")

Transform615.children.append(Shape616)

HAnimSite614.children.append(Transform615)

HAnimSegment610.children.append(HAnimSite614)

HAnimJoint609.children.append(HAnimSegment610)
HAnimJoint617 = x3d.HAnimJoint(DEF="hanim_t2")
HAnimJoint617.name = "t2"
HAnimJoint617.center = [-0.0002,-0.1157,1.1871]
HAnimSegment618 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t2")
HAnimSegment618.name = "SEGMENT_FOR_t2"
TouchSensor619 = x3d.TouchSensor()
TouchSensor619.description = "joint t2 segment SEGMENT_FOR_t2"

HAnimSegment618.children.append(TouchSensor619)
Transform620 = x3d.Transform()
Transform620.translation = [-0.0002,-0.1157,1.1871]
Shape621 = x3d.Shape(USE="JointShape")

Transform620.children.append(Shape621)

HAnimSegment618.children.append(Transform620)
HAnimSite622 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t2_tip")
HAnimSite622.name = "SEGMENT_FOR_t2_tip"
Transform623 = x3d.Transform()
Transform623.translation = [-0.0002,-0.1157,1.1871]
Shape624 = x3d.Shape(USE="SiteShape")

Transform623.children.append(Shape624)

HAnimSite622.children.append(Transform623)

HAnimSegment618.children.append(HAnimSite622)

HAnimJoint617.children.append(HAnimSegment618)
HAnimJoint625 = x3d.HAnimJoint(DEF="hanim_t1")
HAnimJoint625.name = "t1"
HAnimJoint625.center = [-0.0002,-0.1156,1.2109]
HAnimSegment626 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_t1")
HAnimSegment626.name = "SEGMENT_FOR_t1"
TouchSensor627 = x3d.TouchSensor()
TouchSensor627.description = "joint t1 segment SEGMENT_FOR_t1"

HAnimSegment626.children.append(TouchSensor627)
Transform628 = x3d.Transform()
Transform628.translation = [-0.0002,-0.1156,1.2109]
Shape629 = x3d.Shape(USE="JointShape")

Transform628.children.append(Shape629)

HAnimSegment626.children.append(Transform628)
HAnimSite630 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_t1_tip")
HAnimSite630.name = "SEGMENT_FOR_t1_tip"
Transform631 = x3d.Transform()
Transform631.translation = [-0.0002,-0.1156,1.2109]
Shape632 = x3d.Shape(USE="SiteShape")

Transform631.children.append(Shape632)

HAnimSite630.children.append(Transform631)

HAnimSegment626.children.append(HAnimSite630)

HAnimJoint625.children.append(HAnimSegment626)
HAnimJoint633 = x3d.HAnimJoint(DEF="hanim_c7")
HAnimJoint633.name = "c7"
HAnimJoint633.center = [-0.0002,-0.1169,1.2368]
HAnimSegment634 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_c7")
HAnimSegment634.name = "SEGMENT_FOR_c7"
TouchSensor635 = x3d.TouchSensor()
TouchSensor635.description = "joint c7 segment SEGMENT_FOR_c7"

HAnimSegment634.children.append(TouchSensor635)
Transform636 = x3d.Transform()
Transform636.translation = [-0.0002,-0.1169,1.2368]
Shape637 = x3d.Shape(USE="JointShape")

Transform636.children.append(Shape637)

HAnimSegment634.children.append(Transform636)
HAnimSite638 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_c7_tip")
HAnimSite638.name = "SEGMENT_FOR_c7_tip"
Transform639 = x3d.Transform()
Transform639.translation = [-0.0002,-0.1169,1.2368]
Shape640 = x3d.Shape(USE="SiteShape")

Transform639.children.append(Shape640)

HAnimSite638.children.append(Transform639)

HAnimSegment634.children.append(HAnimSite638)

HAnimJoint633.children.append(HAnimSegment634)
HAnimJoint641 = x3d.HAnimJoint(DEF="hanim_c6")
HAnimJoint641.name = "c6"
HAnimJoint641.center = [-0.0002,-0.1169,1.249]
HAnimSegment642 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_c6")
HAnimSegment642.name = "SEGMENT_FOR_c6"
TouchSensor643 = x3d.TouchSensor()
TouchSensor643.description = "joint c6 segment SEGMENT_FOR_c6"

HAnimSegment642.children.append(TouchSensor643)
Transform644 = x3d.Transform()
Transform644.translation = [-0.0002,-0.1169,1.249]
Shape645 = x3d.Shape(USE="JointShape")

Transform644.children.append(Shape645)

HAnimSegment642.children.append(Transform644)
HAnimSite646 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_c6_tip")
HAnimSite646.name = "SEGMENT_FOR_c6_tip"
Transform647 = x3d.Transform()
Transform647.translation = [-0.0002,-0.1169,1.249]
Shape648 = x3d.Shape(USE="SiteShape")

Transform647.children.append(Shape648)

HAnimSite646.children.append(Transform647)

HAnimSegment642.children.append(HAnimSite646)

HAnimJoint641.children.append(HAnimSegment642)
HAnimJoint649 = x3d.HAnimJoint(DEF="hanim_c5")
HAnimJoint649.name = "c5"
HAnimJoint649.center = [-0.0002,-0.1169,1.2613]
HAnimSegment650 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_c5")
HAnimSegment650.name = "SEGMENT_FOR_c5"
TouchSensor651 = x3d.TouchSensor()
TouchSensor651.description = "joint c5 segment SEGMENT_FOR_c5"

HAnimSegment650.children.append(TouchSensor651)
Transform652 = x3d.Transform()
Transform652.translation = [-0.0002,-0.1169,1.2613]
Shape653 = x3d.Shape(USE="JointShape")

Transform652.children.append(Shape653)

HAnimSegment650.children.append(Transform652)
HAnimSite654 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_c5_tip")
HAnimSite654.name = "SEGMENT_FOR_c5_tip"
Transform655 = x3d.Transform()
Transform655.translation = [-0.0002,-0.1169,1.2613]
Shape656 = x3d.Shape(USE="SiteShape")

Transform655.children.append(Shape656)

HAnimSite654.children.append(Transform655)

HAnimSegment650.children.append(HAnimSite654)

HAnimJoint649.children.append(HAnimSegment650)
HAnimJoint657 = x3d.HAnimJoint(DEF="hanim_c4")
HAnimJoint657.name = "c4"
HAnimJoint657.center = [-0.0002,-0.1169,1.2737]
HAnimSegment658 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_c4")
HAnimSegment658.name = "SEGMENT_FOR_c4"
TouchSensor659 = x3d.TouchSensor()
TouchSensor659.description = "joint c4 segment SEGMENT_FOR_c4"

HAnimSegment658.children.append(TouchSensor659)
Transform660 = x3d.Transform()
Transform660.translation = [-0.0002,-0.1169,1.2737]
Shape661 = x3d.Shape(USE="JointShape")

Transform660.children.append(Shape661)

HAnimSegment658.children.append(Transform660)
HAnimSite662 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_c4_tip")
HAnimSite662.name = "SEGMENT_FOR_c4_tip"
Transform663 = x3d.Transform()
Transform663.translation = [-0.0002,-0.1169,1.2737]
Shape664 = x3d.Shape(USE="SiteShape")

Transform663.children.append(Shape664)

HAnimSite662.children.append(Transform663)

HAnimSegment658.children.append(HAnimSite662)

HAnimJoint657.children.append(HAnimSegment658)
HAnimJoint665 = x3d.HAnimJoint(DEF="hanim_c3")
HAnimJoint665.name = "c3"
HAnimJoint665.center = [-0.0002,-0.1169,1.2865]
HAnimSegment666 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_c3")
HAnimSegment666.name = "SEGMENT_FOR_c3"
TouchSensor667 = x3d.TouchSensor()
TouchSensor667.description = "joint c3 segment SEGMENT_FOR_c3"

HAnimSegment666.children.append(TouchSensor667)
Transform668 = x3d.Transform()
Transform668.translation = [-0.0002,-0.1169,1.2865]
Shape669 = x3d.Shape(USE="JointShape")

Transform668.children.append(Shape669)

HAnimSegment666.children.append(Transform668)
HAnimSite670 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_c3_tip")
HAnimSite670.name = "SEGMENT_FOR_c3_tip"
Transform671 = x3d.Transform()
Transform671.translation = [-0.0002,-0.1169,1.2865]
Shape672 = x3d.Shape(USE="SiteShape")

Transform671.children.append(Shape672)

HAnimSite670.children.append(Transform671)

HAnimSegment666.children.append(HAnimSite670)

HAnimJoint665.children.append(HAnimSegment666)
HAnimJoint673 = x3d.HAnimJoint(DEF="hanim_c2")
HAnimJoint673.name = "c2"
HAnimJoint673.center = [-0.0002,-0.1169,1.2982]
HAnimSegment674 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_c2")
HAnimSegment674.name = "SEGMENT_FOR_c2"
TouchSensor675 = x3d.TouchSensor()
TouchSensor675.description = "joint c2 segment SEGMENT_FOR_c2"

HAnimSegment674.children.append(TouchSensor675)
Transform676 = x3d.Transform()
Transform676.translation = [-0.0002,-0.1169,1.2982]
Shape677 = x3d.Shape(USE="JointShape")

Transform676.children.append(Shape677)

HAnimSegment674.children.append(Transform676)
HAnimSite678 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_c2_tip")
HAnimSite678.name = "SEGMENT_FOR_c2_tip"
Transform679 = x3d.Transform()
Transform679.translation = [-0.0002,-0.1169,1.2982]
Shape680 = x3d.Shape(USE="SiteShape")

Transform679.children.append(Shape680)

HAnimSite678.children.append(Transform679)

HAnimSegment674.children.append(HAnimSite678)

HAnimJoint673.children.append(HAnimSegment674)
HAnimJoint681 = x3d.HAnimJoint(DEF="hanim_c1")
HAnimJoint681.name = "c1"
HAnimJoint681.center = [-0.0002,-0.1169,1.3099]
HAnimSegment682 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_c1")
HAnimSegment682.name = "SEGMENT_FOR_c1"
TouchSensor683 = x3d.TouchSensor()
TouchSensor683.description = "joint c1 segment SEGMENT_FOR_c1"

HAnimSegment682.children.append(TouchSensor683)
Transform684 = x3d.Transform()
Transform684.translation = [-0.0002,-0.1169,1.3099]
Shape685 = x3d.Shape(USE="JointShape")

Transform684.children.append(Shape685)

HAnimSegment682.children.append(Transform684)
HAnimSite686 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_c1_tip")
HAnimSite686.name = "SEGMENT_FOR_c1_tip"
Transform687 = x3d.Transform()
Transform687.translation = [-0.0002,-0.1169,1.3099]
Shape688 = x3d.Shape(USE="SiteShape")

Transform687.children.append(Shape688)

HAnimSite686.children.append(Transform687)

HAnimSegment682.children.append(HAnimSite686)

HAnimJoint681.children.append(HAnimSegment682)
HAnimJoint689 = x3d.HAnimJoint(DEF="hanim_skull")
HAnimJoint689.name = "skull"
HAnimJoint689.center = [-0.0002,-0.1173,1.3041]
HAnimSegment690 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_skull")
HAnimSegment690.name = "SEGMENT_FOR_skull"
TouchSensor691 = x3d.TouchSensor()
TouchSensor691.description = "joint skull segment SEGMENT_FOR_skull"

HAnimSegment690.children.append(TouchSensor691)
Transform692 = x3d.Transform()
Transform692.translation = [-0.0002,-0.1173,1.3041]
Shape693 = x3d.Shape(USE="JointShape")

Transform692.children.append(Shape693)

HAnimSegment690.children.append(Transform692)
HAnimSite694 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_skull_tip")
HAnimSite694.name = "SEGMENT_FOR_skull_tip"
Transform695 = x3d.Transform()
Transform695.translation = [-0.0002,-0.1173,1.3041]
Shape696 = x3d.Shape(USE="SiteShape")

Transform695.children.append(Shape696)

HAnimSite694.children.append(Transform695)

HAnimSegment690.children.append(HAnimSite694)

HAnimJoint689.children.append(HAnimSegment690)
HAnimJoint697 = x3d.HAnimJoint(DEF="hanim_l_eyelid")
HAnimJoint697.name = "l_eyelid"
HAnimJoint697.center = [0.0503,-0.0689,1.4157]
HAnimSegment698 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_eyelid")
HAnimSegment698.name = "SEGMENT_FOR_l_eyelid"
TouchSensor699 = x3d.TouchSensor()
TouchSensor699.description = "joint l_eyelid segment SEGMENT_FOR_l_eyelid"

HAnimSegment698.children.append(TouchSensor699)
Transform700 = x3d.Transform()
Transform700.translation = [0.0503,-0.0689,1.4157]
Shape701 = x3d.Shape(USE="JointShape")

Transform700.children.append(Shape701)

HAnimSegment698.children.append(Transform700)
HAnimSite702 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_eyelid_tip")
HAnimSite702.name = "SEGMENT_FOR_l_eyelid_tip"
Transform703 = x3d.Transform()
Transform703.translation = [0.0503,-0.0689,1.4157]
Shape704 = x3d.Shape(USE="SiteShape")

Transform703.children.append(Shape704)

HAnimSite702.children.append(Transform703)

HAnimSegment698.children.append(HAnimSite702)

HAnimJoint697.children.append(HAnimSegment698)

HAnimJoint689.children.append(HAnimJoint697)
HAnimJoint705 = x3d.HAnimJoint(DEF="hanim_r_eyelid")
HAnimJoint705.name = "r_eyelid"
HAnimJoint705.center = [-0.0507,-0.0689,1.4157]
HAnimSegment706 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_eyelid")
HAnimSegment706.name = "SEGMENT_FOR_r_eyelid"
TouchSensor707 = x3d.TouchSensor()
TouchSensor707.description = "joint r_eyelid segment SEGMENT_FOR_r_eyelid"

HAnimSegment706.children.append(TouchSensor707)
Transform708 = x3d.Transform()
Transform708.translation = [-0.0507,-0.0689,1.4157]
Shape709 = x3d.Shape(USE="JointShape")

Transform708.children.append(Shape709)

HAnimSegment706.children.append(Transform708)
HAnimSite710 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_eyelid_tip")
HAnimSite710.name = "SEGMENT_FOR_r_eyelid_tip"
Transform711 = x3d.Transform()
Transform711.translation = [-0.0507,-0.0689,1.4157]
Shape712 = x3d.Shape(USE="SiteShape")

Transform711.children.append(Shape712)

HAnimSite710.children.append(Transform711)

HAnimSegment706.children.append(HAnimSite710)

HAnimJoint705.children.append(HAnimSegment706)

HAnimJoint689.children.append(HAnimJoint705)
HAnimJoint713 = x3d.HAnimJoint(DEF="hanim_l_eyeball")
HAnimJoint713.name = "l_eyeball"
HAnimJoint713.center = [0.0479,-0.0188,1.3963]
HAnimSegment714 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_eyeball")
HAnimSegment714.name = "SEGMENT_FOR_l_eyeball"
TouchSensor715 = x3d.TouchSensor()
TouchSensor715.description = "joint l_eyeball segment SEGMENT_FOR_l_eyeball"

HAnimSegment714.children.append(TouchSensor715)
Transform716 = x3d.Transform()
Transform716.translation = [0.0479,-0.0188,1.3963]
Shape717 = x3d.Shape(USE="JointShape")

Transform716.children.append(Shape717)

HAnimSegment714.children.append(Transform716)
HAnimSite718 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_eyeball_tip")
HAnimSite718.name = "SEGMENT_FOR_l_eyeball_tip"
Transform719 = x3d.Transform()
Transform719.translation = [0.0479,-0.0188,1.3963]
Shape720 = x3d.Shape(USE="SiteShape")

Transform719.children.append(Shape720)

HAnimSite718.children.append(Transform719)

HAnimSegment714.children.append(HAnimSite718)

HAnimJoint713.children.append(HAnimSegment714)

HAnimJoint689.children.append(HAnimJoint713)
HAnimJoint721 = x3d.HAnimJoint(DEF="hanim_r_eyeball")
HAnimJoint721.name = "r_eyeball"
HAnimJoint721.center = [-0.0483,-0.0188,1.3963]
HAnimSegment722 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_eyeball")
HAnimSegment722.name = "SEGMENT_FOR_r_eyeball"
TouchSensor723 = x3d.TouchSensor()
TouchSensor723.description = "joint r_eyeball segment SEGMENT_FOR_r_eyeball"

HAnimSegment722.children.append(TouchSensor723)
Transform724 = x3d.Transform()
Transform724.translation = [-0.0483,-0.0188,1.3963]
Shape725 = x3d.Shape(USE="JointShape")

Transform724.children.append(Shape725)

HAnimSegment722.children.append(Transform724)
HAnimSite726 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_eyeball_tip")
HAnimSite726.name = "SEGMENT_FOR_r_eyeball_tip"
Transform727 = x3d.Transform()
Transform727.translation = [-0.0483,-0.0188,1.3963]
Shape728 = x3d.Shape(USE="SiteShape")

Transform727.children.append(Shape728)

HAnimSite726.children.append(Transform727)

HAnimSegment722.children.append(HAnimSite726)

HAnimJoint721.children.append(HAnimSegment722)

HAnimJoint689.children.append(HAnimJoint721)
HAnimJoint729 = x3d.HAnimJoint(DEF="hanim_l_eyebrow")
HAnimJoint729.name = "l_eyebrow"
HAnimJoint729.center = [0.0216,0.0051,1.4053]
HAnimSegment730 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_eyebrow")
HAnimSegment730.name = "SEGMENT_FOR_l_eyebrow"
TouchSensor731 = x3d.TouchSensor()
TouchSensor731.description = "joint l_eyebrow segment SEGMENT_FOR_l_eyebrow"

HAnimSegment730.children.append(TouchSensor731)
Transform732 = x3d.Transform()
Transform732.translation = [0.0216,0.0051,1.4053]
Shape733 = x3d.Shape(USE="JointShape")

Transform732.children.append(Shape733)

HAnimSegment730.children.append(Transform732)
HAnimSite734 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_eyebrow_tip")
HAnimSite734.name = "SEGMENT_FOR_l_eyebrow_tip"
Transform735 = x3d.Transform()
Transform735.translation = [0.0216,0.0051,1.4053]
Shape736 = x3d.Shape(USE="SiteShape")

Transform735.children.append(Shape736)

HAnimSite734.children.append(Transform735)

HAnimSegment730.children.append(HAnimSite734)

HAnimJoint729.children.append(HAnimSegment730)

HAnimJoint689.children.append(HAnimJoint729)
HAnimJoint737 = x3d.HAnimJoint(DEF="hanim_r_eyebrow")
HAnimJoint737.name = "r_eyebrow"
HAnimJoint737.center = [-0.0219,0.0051,1.4053]
HAnimSegment738 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_eyebrow")
HAnimSegment738.name = "SEGMENT_FOR_r_eyebrow"
TouchSensor739 = x3d.TouchSensor()
TouchSensor739.description = "joint r_eyebrow segment SEGMENT_FOR_r_eyebrow"

HAnimSegment738.children.append(TouchSensor739)
Transform740 = x3d.Transform()
Transform740.translation = [-0.0219,0.0051,1.4053]
Shape741 = x3d.Shape(USE="JointShape")

Transform740.children.append(Shape741)

HAnimSegment738.children.append(Transform740)
HAnimSite742 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_eyebrow_tip")
HAnimSite742.name = "SEGMENT_FOR_r_eyebrow_tip"
Transform743 = x3d.Transform()
Transform743.translation = [-0.0219,0.0051,1.4053]
Shape744 = x3d.Shape(USE="SiteShape")

Transform743.children.append(Shape744)

HAnimSite742.children.append(Transform743)

HAnimSegment738.children.append(HAnimSite742)

HAnimJoint737.children.append(HAnimSegment738)

HAnimJoint689.children.append(HAnimJoint737)
HAnimJoint745 = x3d.HAnimJoint(DEF="hanim_jaw")
HAnimJoint745.name = "jaw"
HAnimJoint745.center = [-0.0002,-0.0865,1.3043]
HAnimSegment746 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_jaw")
HAnimSegment746.name = "SEGMENT_FOR_jaw"
TouchSensor747 = x3d.TouchSensor()
TouchSensor747.description = "joint jaw segment SEGMENT_FOR_jaw"

HAnimSegment746.children.append(TouchSensor747)
Transform748 = x3d.Transform()
Transform748.translation = [-0.0002,-0.0865,1.3043]
Shape749 = x3d.Shape(USE="JointShape")

Transform748.children.append(Shape749)

HAnimSegment746.children.append(Transform748)
HAnimSite750 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_jaw_tip")
HAnimSite750.name = "SEGMENT_FOR_jaw_tip"
Transform751 = x3d.Transform()
Transform751.translation = [-0.0002,-0.0865,1.3043]
Shape752 = x3d.Shape(USE="SiteShape")

Transform751.children.append(Shape752)

HAnimSite750.children.append(Transform751)

HAnimSegment746.children.append(HAnimSite750)

HAnimJoint745.children.append(HAnimSegment746)

HAnimJoint689.children.append(HAnimJoint745)

HAnimJoint681.children.append(HAnimJoint689)

HAnimJoint673.children.append(HAnimJoint681)

HAnimJoint665.children.append(HAnimJoint673)

HAnimJoint657.children.append(HAnimJoint665)

HAnimJoint649.children.append(HAnimJoint657)

HAnimJoint641.children.append(HAnimJoint649)

HAnimJoint633.children.append(HAnimJoint641)

HAnimJoint625.children.append(HAnimJoint633)
HAnimJoint753 = x3d.HAnimJoint(DEF="hanim_l_clavicle")
HAnimJoint753.name = "l_clavicle"
HAnimJoint753.center = [0.1228,-0.1148,1.1833]
HAnimSegment754 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_clavicle")
HAnimSegment754.name = "SEGMENT_FOR_l_clavicle"
TouchSensor755 = x3d.TouchSensor()
TouchSensor755.description = "joint l_clavicle segment SEGMENT_FOR_l_clavicle"

HAnimSegment754.children.append(TouchSensor755)
Transform756 = x3d.Transform()
Transform756.translation = [0.1228,-0.1148,1.1833]
Shape757 = x3d.Shape(USE="JointShape")

Transform756.children.append(Shape757)

HAnimSegment754.children.append(Transform756)
HAnimSite758 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_clavicle_tip")
HAnimSite758.name = "SEGMENT_FOR_l_clavicle_tip"
Transform759 = x3d.Transform()
Transform759.translation = [0.1228,-0.1148,1.1833]
Shape760 = x3d.Shape(USE="SiteShape")

Transform759.children.append(Shape760)

HAnimSite758.children.append(Transform759)

HAnimSegment754.children.append(HAnimSite758)

HAnimJoint753.children.append(HAnimSegment754)
HAnimJoint761 = x3d.HAnimJoint(DEF="hanim_l_scapula")
HAnimJoint761.name = "l_scapula"
HAnimJoint761.center = [0.0383,-0.1157,1.2001]
HAnimSegment762 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_scapula")
HAnimSegment762.name = "SEGMENT_FOR_l_scapula"
TouchSensor763 = x3d.TouchSensor()
TouchSensor763.description = "joint l_scapula segment SEGMENT_FOR_l_scapula"

HAnimSegment762.children.append(TouchSensor763)
Transform764 = x3d.Transform()
Transform764.translation = [0.0383,-0.1157,1.2001]
Shape765 = x3d.Shape(USE="JointShape")

Transform764.children.append(Shape765)

HAnimSegment762.children.append(Transform764)
HAnimSite766 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_scapula_tip")
HAnimSite766.name = "SEGMENT_FOR_l_scapula_tip"
Transform767 = x3d.Transform()
Transform767.translation = [0.0383,-0.1157,1.2001]
Shape768 = x3d.Shape(USE="SiteShape")

Transform767.children.append(Shape768)

HAnimSite766.children.append(Transform767)

HAnimSegment762.children.append(HAnimSite766)

HAnimJoint761.children.append(HAnimSegment762)
HAnimJoint769 = x3d.HAnimJoint(DEF="hanim_l_upperarm")
HAnimJoint769.name = "l_upperarm"
HAnimJoint769.center = [0.1649,-0.1051,1.17]
HAnimSegment770 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_upperarm")
HAnimSegment770.name = "SEGMENT_FOR_l_upperarm"
TouchSensor771 = x3d.TouchSensor()
TouchSensor771.description = "joint l_upperarm segment SEGMENT_FOR_l_upperarm"

HAnimSegment770.children.append(TouchSensor771)
Transform772 = x3d.Transform()
Transform772.translation = [0.1649,-0.1051,1.17]
Shape773 = x3d.Shape(USE="JointShape")

Transform772.children.append(Shape773)

HAnimSegment770.children.append(Transform772)
HAnimSite774 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_upperarm_tip")
HAnimSite774.name = "SEGMENT_FOR_l_upperarm_tip"
Transform775 = x3d.Transform()
Transform775.translation = [0.1649,-0.1051,1.17]
Shape776 = x3d.Shape(USE="SiteShape")

Transform775.children.append(Shape776)

HAnimSite774.children.append(Transform775)

HAnimSegment770.children.append(HAnimSite774)

HAnimJoint769.children.append(HAnimSegment770)
HAnimJoint777 = x3d.HAnimJoint(DEF="hanim_l_forearm")
HAnimJoint777.name = "l_forearm"
HAnimJoint777.center = [0.1819,-0.1075,0.9202]
HAnimSegment778 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_forearm")
HAnimSegment778.name = "SEGMENT_FOR_l_forearm"
TouchSensor779 = x3d.TouchSensor()
TouchSensor779.description = "joint l_forearm segment SEGMENT_FOR_l_forearm"

HAnimSegment778.children.append(TouchSensor779)
Transform780 = x3d.Transform()
Transform780.translation = [0.1819,-0.1075,0.9202]
Shape781 = x3d.Shape(USE="JointShape")

Transform780.children.append(Shape781)

HAnimSegment778.children.append(Transform780)
HAnimSite782 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_forearm_tip")
HAnimSite782.name = "SEGMENT_FOR_l_forearm_tip"
Transform783 = x3d.Transform()
Transform783.translation = [0.1819,-0.1075,0.9202]
Shape784 = x3d.Shape(USE="SiteShape")

Transform783.children.append(Shape784)

HAnimSite782.children.append(Transform783)

HAnimSegment778.children.append(HAnimSite782)

HAnimJoint777.children.append(HAnimSegment778)
HAnimJoint785 = x3d.HAnimJoint(DEF="hanim_l_carpal")
HAnimJoint785.name = "l_carpal"
HAnimJoint785.center = [0.1818,-0.1069,0.7157]
HAnimSegment786 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal")
HAnimSegment786.name = "SEGMENT_FOR_l_carpal"
TouchSensor787 = x3d.TouchSensor()
TouchSensor787.description = "joint l_carpal segment SEGMENT_FOR_l_carpal"

HAnimSegment786.children.append(TouchSensor787)
Transform788 = x3d.Transform()
Transform788.translation = [0.1818,-0.1069,0.7157]
Shape789 = x3d.Shape(USE="JointShape")

Transform788.children.append(Shape789)

HAnimSegment786.children.append(Transform788)
HAnimSite790 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_tip")
HAnimSite790.name = "SEGMENT_FOR_l_carpal_tip"
Transform791 = x3d.Transform()
Transform791.translation = [0.1818,-0.1069,0.7157]
Shape792 = x3d.Shape(USE="SiteShape")

Transform791.children.append(Shape792)

HAnimSite790.children.append(Transform791)

HAnimSegment786.children.append(HAnimSite790)

HAnimJoint785.children.append(HAnimSegment786)
HAnimJoint793 = x3d.HAnimJoint(DEF="hanim_l_trapezium")
HAnimJoint793.name = "l_trapezium"
HAnimJoint793.center = [0.1811,-0.0826,0.6975]
HAnimSegment794 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_trapezium")
HAnimSegment794.name = "SEGMENT_FOR_l_trapezium"
TouchSensor795 = x3d.TouchSensor()
TouchSensor795.description = "joint l_trapezium segment SEGMENT_FOR_l_trapezium"

HAnimSegment794.children.append(TouchSensor795)
Transform796 = x3d.Transform()
Transform796.translation = [0.1811,-0.0826,0.6975]
Shape797 = x3d.Shape(USE="JointShape")

Transform796.children.append(Shape797)

HAnimSegment794.children.append(Transform796)
HAnimSite798 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_trapezium_tip")
HAnimSite798.name = "SEGMENT_FOR_l_trapezium_tip"
Transform799 = x3d.Transform()
Transform799.translation = [0.1811,-0.0826,0.6975]
Shape800 = x3d.Shape(USE="SiteShape")

Transform799.children.append(Shape800)

HAnimSite798.children.append(Transform799)

HAnimSegment794.children.append(HAnimSite798)

HAnimJoint793.children.append(HAnimSegment794)
HAnimJoint801 = x3d.HAnimJoint(DEF="hanim_l_metacarpal_1")
HAnimJoint801.name = "l_metacarpal_1"
HAnimJoint801.center = [0.1803,-0.0759,0.684]
HAnimSegment802 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metacarpal_1")
HAnimSegment802.name = "SEGMENT_FOR_l_metacarpal_1"
TouchSensor803 = x3d.TouchSensor()
TouchSensor803.description = "joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1"

HAnimSegment802.children.append(TouchSensor803)
Transform804 = x3d.Transform()
Transform804.translation = [0.1803,-0.0759,0.684]
Shape805 = x3d.Shape(USE="JointShape")

Transform804.children.append(Shape805)

HAnimSegment802.children.append(Transform804)
HAnimSite806 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metacarpal_1_tip")
HAnimSite806.name = "SEGMENT_FOR_l_metacarpal_1_tip"
Transform807 = x3d.Transform()
Transform807.translation = [0.1803,-0.0759,0.684]
Shape808 = x3d.Shape(USE="SiteShape")

Transform807.children.append(Shape808)

HAnimSite806.children.append(Transform807)

HAnimSegment802.children.append(HAnimSite806)

HAnimJoint801.children.append(HAnimSegment802)
HAnimJoint809 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_phalanx_1")
HAnimJoint809.name = "l_carpal_proximal_phalanx_1"
HAnimJoint809.center = [0.1809,-0.0661,0.6642]
HAnimSegment810 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1")
HAnimSegment810.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_1"
TouchSensor811 = x3d.TouchSensor()
TouchSensor811.description = "joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1"

HAnimSegment810.children.append(TouchSensor811)
Transform812 = x3d.Transform()
Transform812.translation = [0.1809,-0.0661,0.6642]
Shape813 = x3d.Shape(USE="JointShape")

Transform812.children.append(Shape813)

HAnimSegment810.children.append(Transform812)
HAnimSite814 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip")
HAnimSite814.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip"
Transform815 = x3d.Transform()
Transform815.translation = [0.1809,-0.0661,0.6642]
Shape816 = x3d.Shape(USE="SiteShape")

Transform815.children.append(Shape816)

HAnimSite814.children.append(Transform815)

HAnimSegment810.children.append(HAnimSite814)

HAnimJoint809.children.append(HAnimSegment810)
HAnimJoint817 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_phalanx_1")
HAnimJoint817.name = "l_carpal_distal_phalanx_1"
HAnimJoint817.center = [0.1825,-0.0522,0.6455]
HAnimSegment818 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1")
HAnimSegment818.name = "SEGMENT_FOR_l_carpal_distal_phalanx_1"
TouchSensor819 = x3d.TouchSensor()
TouchSensor819.description = "joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1"

HAnimSegment818.children.append(TouchSensor819)
Transform820 = x3d.Transform()
Transform820.translation = [0.1825,-0.0522,0.6455]
Shape821 = x3d.Shape(USE="JointShape")

Transform820.children.append(Shape821)

HAnimSegment818.children.append(Transform820)
HAnimSite822 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1_tip")
HAnimSite822.name = "SEGMENT_FOR_l_carpal_distal_phalanx_1_tip"
Transform823 = x3d.Transform()
Transform823.translation = [0.1825,-0.0522,0.6455]
Shape824 = x3d.Shape(USE="SiteShape")

Transform823.children.append(Shape824)

HAnimSite822.children.append(Transform823)

HAnimSegment818.children.append(HAnimSite822)

HAnimJoint817.children.append(HAnimSegment818)

HAnimJoint809.children.append(HAnimJoint817)

HAnimJoint801.children.append(HAnimJoint809)

HAnimJoint793.children.append(HAnimJoint801)

HAnimJoint785.children.append(HAnimJoint793)
HAnimJoint825 = x3d.HAnimJoint(DEF="hanim_l_trapezoid")
HAnimJoint825.name = "l_trapezoid"
HAnimJoint825.center = [0.1811,-0.0935,0.6984]
HAnimSegment826 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_trapezoid")
HAnimSegment826.name = "SEGMENT_FOR_l_trapezoid"
TouchSensor827 = x3d.TouchSensor()
TouchSensor827.description = "joint l_trapezoid segment SEGMENT_FOR_l_trapezoid"

HAnimSegment826.children.append(TouchSensor827)
Transform828 = x3d.Transform()
Transform828.translation = [0.1811,-0.0935,0.6984]
Shape829 = x3d.Shape(USE="JointShape")

Transform828.children.append(Shape829)

HAnimSegment826.children.append(Transform828)
HAnimSite830 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_trapezoid_tip")
HAnimSite830.name = "SEGMENT_FOR_l_trapezoid_tip"
Transform831 = x3d.Transform()
Transform831.translation = [0.1811,-0.0935,0.6984]
Shape832 = x3d.Shape(USE="SiteShape")

Transform831.children.append(Shape832)

HAnimSite830.children.append(Transform831)

HAnimSegment826.children.append(HAnimSite830)

HAnimJoint825.children.append(HAnimSegment826)
HAnimJoint833 = x3d.HAnimJoint(DEF="hanim_l_metacarpal_2")
HAnimJoint833.name = "l_metacarpal_2"
HAnimJoint833.center = [0.1811,-0.0922,0.679]
HAnimSegment834 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metacarpal_2")
HAnimSegment834.name = "SEGMENT_FOR_l_metacarpal_2"
TouchSensor835 = x3d.TouchSensor()
TouchSensor835.description = "joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2"

HAnimSegment834.children.append(TouchSensor835)
Transform836 = x3d.Transform()
Transform836.translation = [0.1811,-0.0922,0.679]
Shape837 = x3d.Shape(USE="JointShape")

Transform836.children.append(Shape837)

HAnimSegment834.children.append(Transform836)
HAnimSite838 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metacarpal_2_tip")
HAnimSite838.name = "SEGMENT_FOR_l_metacarpal_2_tip"
Transform839 = x3d.Transform()
Transform839.translation = [0.1811,-0.0922,0.679]
Shape840 = x3d.Shape(USE="SiteShape")

Transform839.children.append(Shape840)

HAnimSite838.children.append(Transform839)

HAnimSegment834.children.append(HAnimSite838)

HAnimJoint833.children.append(HAnimSegment834)
HAnimJoint841 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_phalanx_2")
HAnimJoint841.name = "l_carpal_proximal_phalanx_2"
HAnimJoint841.center = [0.1836,-0.0868,0.6286]
HAnimSegment842 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2")
HAnimSegment842.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_2"
TouchSensor843 = x3d.TouchSensor()
TouchSensor843.description = "joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2"

HAnimSegment842.children.append(TouchSensor843)
Transform844 = x3d.Transform()
Transform844.translation = [0.1836,-0.0868,0.6286]
Shape845 = x3d.Shape(USE="JointShape")

Transform844.children.append(Shape845)

HAnimSegment842.children.append(Transform844)
HAnimSite846 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip")
HAnimSite846.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip"
Transform847 = x3d.Transform()
Transform847.translation = [0.1836,-0.0868,0.6286]
Shape848 = x3d.Shape(USE="SiteShape")

Transform847.children.append(Shape848)

HAnimSite846.children.append(Transform847)

HAnimSegment842.children.append(HAnimSite846)

HAnimJoint841.children.append(HAnimSegment842)
HAnimJoint849 = x3d.HAnimJoint(DEF="hanim_l_carpal_middle_phalanx_2")
HAnimJoint849.name = "l_carpal_middle_phalanx_2"
HAnimJoint849.center = [0.1815,-0.0877,0.5983]
HAnimSegment850 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2")
HAnimSegment850.name = "SEGMENT_FOR_l_carpal_middle_phalanx_2"
TouchSensor851 = x3d.TouchSensor()
TouchSensor851.description = "joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2"

HAnimSegment850.children.append(TouchSensor851)
Transform852 = x3d.Transform()
Transform852.translation = [0.1815,-0.0877,0.5983]
Shape853 = x3d.Shape(USE="JointShape")

Transform852.children.append(Shape853)

HAnimSegment850.children.append(Transform852)
HAnimSite854 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2_tip")
HAnimSite854.name = "SEGMENT_FOR_l_carpal_middle_phalanx_2_tip"
Transform855 = x3d.Transform()
Transform855.translation = [0.1815,-0.0877,0.5983]
Shape856 = x3d.Shape(USE="SiteShape")

Transform855.children.append(Shape856)

HAnimSite854.children.append(Transform855)

HAnimSegment850.children.append(HAnimSite854)

HAnimJoint849.children.append(HAnimSegment850)
HAnimJoint857 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_phalanx_2")
HAnimJoint857.name = "l_carpal_distal_phalanx_2"
HAnimJoint857.center = [0.1805,-0.0885,0.5731]
HAnimSegment858 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2")
HAnimSegment858.name = "SEGMENT_FOR_l_carpal_distal_phalanx_2"
TouchSensor859 = x3d.TouchSensor()
TouchSensor859.description = "joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2"

HAnimSegment858.children.append(TouchSensor859)
Transform860 = x3d.Transform()
Transform860.translation = [0.1805,-0.0885,0.5731]
Shape861 = x3d.Shape(USE="JointShape")

Transform860.children.append(Shape861)

HAnimSegment858.children.append(Transform860)
HAnimSite862 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2_tip")
HAnimSite862.name = "SEGMENT_FOR_l_carpal_distal_phalanx_2_tip"
Transform863 = x3d.Transform()
Transform863.translation = [0.1805,-0.0885,0.5731]
Shape864 = x3d.Shape(USE="SiteShape")

Transform863.children.append(Shape864)

HAnimSite862.children.append(Transform863)

HAnimSegment858.children.append(HAnimSite862)

HAnimJoint857.children.append(HAnimSegment858)

HAnimJoint849.children.append(HAnimJoint857)

HAnimJoint841.children.append(HAnimJoint849)

HAnimJoint833.children.append(HAnimJoint841)

HAnimJoint825.children.append(HAnimJoint833)

HAnimJoint785.children.append(HAnimJoint825)
HAnimJoint865 = x3d.HAnimJoint(DEF="hanim_l_capitate")
HAnimJoint865.name = "l_capitate"
HAnimJoint865.center = [0.1809,-0.1067,0.7]
HAnimSegment866 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_capitate")
HAnimSegment866.name = "SEGMENT_FOR_l_capitate"
TouchSensor867 = x3d.TouchSensor()
TouchSensor867.description = "joint l_capitate segment SEGMENT_FOR_l_capitate"

HAnimSegment866.children.append(TouchSensor867)
Transform868 = x3d.Transform()
Transform868.translation = [0.1809,-0.1067,0.7]
Shape869 = x3d.Shape(USE="JointShape")

Transform868.children.append(Shape869)

HAnimSegment866.children.append(Transform868)
HAnimSite870 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_capitate_tip")
HAnimSite870.name = "SEGMENT_FOR_l_capitate_tip"
Transform871 = x3d.Transform()
Transform871.translation = [0.1809,-0.1067,0.7]
Shape872 = x3d.Shape(USE="SiteShape")

Transform871.children.append(Shape872)

HAnimSite870.children.append(Transform871)

HAnimSegment866.children.append(HAnimSite870)

HAnimJoint865.children.append(HAnimSegment866)
HAnimJoint873 = x3d.HAnimJoint(DEF="hanim_l_metacarpal_3")
HAnimJoint873.name = "l_metacarpal_3"
HAnimJoint873.center = [0.1809,-0.1081,0.6772]
HAnimSegment874 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metacarpal_3")
HAnimSegment874.name = "SEGMENT_FOR_l_metacarpal_3"
TouchSensor875 = x3d.TouchSensor()
TouchSensor875.description = "joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3"

HAnimSegment874.children.append(TouchSensor875)
Transform876 = x3d.Transform()
Transform876.translation = [0.1809,-0.1081,0.6772]
Shape877 = x3d.Shape(USE="JointShape")

Transform876.children.append(Shape877)

HAnimSegment874.children.append(Transform876)
HAnimSite878 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metacarpal_3_tip")
HAnimSite878.name = "SEGMENT_FOR_l_metacarpal_3_tip"
Transform879 = x3d.Transform()
Transform879.translation = [0.1809,-0.1081,0.6772]
Shape880 = x3d.Shape(USE="SiteShape")

Transform879.children.append(Shape880)

HAnimSite878.children.append(Transform879)

HAnimSegment874.children.append(HAnimSite878)

HAnimJoint873.children.append(HAnimSegment874)
HAnimJoint881 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_phalanx_3")
HAnimJoint881.name = "l_carpal_proximal_phalanx_3"
HAnimJoint881.center = [0.1835,-0.1058,0.6264]
HAnimSegment882 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3")
HAnimSegment882.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_3"
TouchSensor883 = x3d.TouchSensor()
TouchSensor883.description = "joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3"

HAnimSegment882.children.append(TouchSensor883)
Transform884 = x3d.Transform()
Transform884.translation = [0.1835,-0.1058,0.6264]
Shape885 = x3d.Shape(USE="JointShape")

Transform884.children.append(Shape885)

HAnimSegment882.children.append(Transform884)
HAnimSite886 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip")
HAnimSite886.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip"
Transform887 = x3d.Transform()
Transform887.translation = [0.1835,-0.1058,0.6264]
Shape888 = x3d.Shape(USE="SiteShape")

Transform887.children.append(Shape888)

HAnimSite886.children.append(Transform887)

HAnimSegment882.children.append(HAnimSite886)

HAnimJoint881.children.append(HAnimSegment882)
HAnimJoint889 = x3d.HAnimJoint(DEF="hanim_l_carpal_middle_phalanx_3")
HAnimJoint889.name = "l_carpal_middle_phalanx_3"
HAnimJoint889.center = [0.1815,-0.1054,0.5947]
HAnimSegment890 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3")
HAnimSegment890.name = "SEGMENT_FOR_l_carpal_middle_phalanx_3"
TouchSensor891 = x3d.TouchSensor()
TouchSensor891.description = "joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3"

HAnimSegment890.children.append(TouchSensor891)
Transform892 = x3d.Transform()
Transform892.translation = [0.1815,-0.1054,0.5947]
Shape893 = x3d.Shape(USE="JointShape")

Transform892.children.append(Shape893)

HAnimSegment890.children.append(Transform892)
HAnimSite894 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3_tip")
HAnimSite894.name = "SEGMENT_FOR_l_carpal_middle_phalanx_3_tip"
Transform895 = x3d.Transform()
Transform895.translation = [0.1815,-0.1054,0.5947]
Shape896 = x3d.Shape(USE="SiteShape")

Transform895.children.append(Shape896)

HAnimSite894.children.append(Transform895)

HAnimSegment890.children.append(HAnimSite894)

HAnimJoint889.children.append(HAnimSegment890)
HAnimJoint897 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_phalanx_3")
HAnimJoint897.name = "l_carpal_distal_phalanx_3"
HAnimJoint897.center = [0.1805,-0.1056,0.5668]
HAnimSegment898 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3")
HAnimSegment898.name = "SEGMENT_FOR_l_carpal_distal_phalanx_3"
TouchSensor899 = x3d.TouchSensor()
TouchSensor899.description = "joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3"

HAnimSegment898.children.append(TouchSensor899)
Transform900 = x3d.Transform()
Transform900.translation = [0.1805,-0.1056,0.5668]
Shape901 = x3d.Shape(USE="JointShape")

Transform900.children.append(Shape901)

HAnimSegment898.children.append(Transform900)
HAnimSite902 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3_tip")
HAnimSite902.name = "SEGMENT_FOR_l_carpal_distal_phalanx_3_tip"
Transform903 = x3d.Transform()
Transform903.translation = [0.1805,-0.1056,0.5668]
Shape904 = x3d.Shape(USE="SiteShape")

Transform903.children.append(Shape904)

HAnimSite902.children.append(Transform903)

HAnimSegment898.children.append(HAnimSite902)

HAnimJoint897.children.append(HAnimSegment898)

HAnimJoint889.children.append(HAnimJoint897)

HAnimJoint881.children.append(HAnimJoint889)

HAnimJoint873.children.append(HAnimJoint881)

HAnimJoint865.children.append(HAnimJoint873)

HAnimJoint785.children.append(HAnimJoint865)
HAnimJoint905 = x3d.HAnimJoint(DEF="hanim_l_hamate")
HAnimJoint905.name = "l_hamate"
HAnimJoint905.center = [0.1809,-0.1276,0.6973]
HAnimSegment906 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_hamate")
HAnimSegment906.name = "SEGMENT_FOR_l_hamate"
TouchSensor907 = x3d.TouchSensor()
TouchSensor907.description = "joint l_hamate segment SEGMENT_FOR_l_hamate"

HAnimSegment906.children.append(TouchSensor907)
Transform908 = x3d.Transform()
Transform908.translation = [0.1809,-0.1276,0.6973]
Shape909 = x3d.Shape(USE="JointShape")

Transform908.children.append(Shape909)

HAnimSegment906.children.append(Transform908)
HAnimSite910 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_hamate_tip")
HAnimSite910.name = "SEGMENT_FOR_l_hamate_tip"
Transform911 = x3d.Transform()
Transform911.translation = [0.1809,-0.1276,0.6973]
Shape912 = x3d.Shape(USE="SiteShape")

Transform911.children.append(Shape912)

HAnimSite910.children.append(Transform911)

HAnimSegment906.children.append(HAnimSite910)

HAnimJoint905.children.append(HAnimSegment906)
HAnimJoint913 = x3d.HAnimJoint(DEF="hanim_l_metacarpal_4")
HAnimJoint913.name = "l_metacarpal_4"
HAnimJoint913.center = [0.1809,-0.1218,0.6777]
HAnimSegment914 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metacarpal_4")
HAnimSegment914.name = "SEGMENT_FOR_l_metacarpal_4"
TouchSensor915 = x3d.TouchSensor()
TouchSensor915.description = "joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4"

HAnimSegment914.children.append(TouchSensor915)
Transform916 = x3d.Transform()
Transform916.translation = [0.1809,-0.1218,0.6777]
Shape917 = x3d.Shape(USE="JointShape")

Transform916.children.append(Shape917)

HAnimSegment914.children.append(Transform916)
HAnimSite918 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metacarpal_4_tip")
HAnimSite918.name = "SEGMENT_FOR_l_metacarpal_4_tip"
Transform919 = x3d.Transform()
Transform919.translation = [0.1809,-0.1218,0.6777]
Shape920 = x3d.Shape(USE="SiteShape")

Transform919.children.append(Shape920)

HAnimSite918.children.append(Transform919)

HAnimSegment914.children.append(HAnimSite918)

HAnimJoint913.children.append(HAnimSegment914)
HAnimJoint921 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_phalanx_4")
HAnimJoint921.name = "l_carpal_proximal_phalanx_4"
HAnimJoint921.center = [0.1835,-0.1233,0.6255]
HAnimSegment922 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4")
HAnimSegment922.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_4"
TouchSensor923 = x3d.TouchSensor()
TouchSensor923.description = "joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4"

HAnimSegment922.children.append(TouchSensor923)
Transform924 = x3d.Transform()
Transform924.translation = [0.1835,-0.1233,0.6255]
Shape925 = x3d.Shape(USE="JointShape")

Transform924.children.append(Shape925)

HAnimSegment922.children.append(Transform924)
HAnimSite926 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip")
HAnimSite926.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip"
Transform927 = x3d.Transform()
Transform927.translation = [0.1835,-0.1233,0.6255]
Shape928 = x3d.Shape(USE="SiteShape")

Transform927.children.append(Shape928)

HAnimSite926.children.append(Transform927)

HAnimSegment922.children.append(HAnimSite926)

HAnimJoint921.children.append(HAnimSegment922)
HAnimJoint929 = x3d.HAnimJoint(DEF="hanim_l_carpal_middle_phalanx_4")
HAnimJoint929.name = "l_carpal_middle_phalanx_4"
HAnimJoint929.center = [0.1815,-0.1225,0.598]
HAnimSegment930 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4")
HAnimSegment930.name = "SEGMENT_FOR_l_carpal_middle_phalanx_4"
TouchSensor931 = x3d.TouchSensor()
TouchSensor931.description = "joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4"

HAnimSegment930.children.append(TouchSensor931)
Transform932 = x3d.Transform()
Transform932.translation = [0.1815,-0.1225,0.598]
Shape933 = x3d.Shape(USE="JointShape")

Transform932.children.append(Shape933)

HAnimSegment930.children.append(Transform932)
HAnimSite934 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4_tip")
HAnimSite934.name = "SEGMENT_FOR_l_carpal_middle_phalanx_4_tip"
Transform935 = x3d.Transform()
Transform935.translation = [0.1815,-0.1225,0.598]
Shape936 = x3d.Shape(USE="SiteShape")

Transform935.children.append(Shape936)

HAnimSite934.children.append(Transform935)

HAnimSegment930.children.append(HAnimSite934)

HAnimJoint929.children.append(HAnimSegment930)
HAnimJoint937 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_phalanx_4")
HAnimJoint937.name = "l_carpal_distal_phalanx_4"
HAnimJoint937.center = [0.1805,-0.1217,0.5722]
HAnimSegment938 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4")
HAnimSegment938.name = "SEGMENT_FOR_l_carpal_distal_phalanx_4"
TouchSensor939 = x3d.TouchSensor()
TouchSensor939.description = "joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4"

HAnimSegment938.children.append(TouchSensor939)
Transform940 = x3d.Transform()
Transform940.translation = [0.1805,-0.1217,0.5722]
Shape941 = x3d.Shape(USE="JointShape")

Transform940.children.append(Shape941)

HAnimSegment938.children.append(Transform940)
HAnimSite942 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4_tip")
HAnimSite942.name = "SEGMENT_FOR_l_carpal_distal_phalanx_4_tip"
Transform943 = x3d.Transform()
Transform943.translation = [0.1805,-0.1217,0.5722]
Shape944 = x3d.Shape(USE="SiteShape")

Transform943.children.append(Shape944)

HAnimSite942.children.append(Transform943)

HAnimSegment938.children.append(HAnimSite942)

HAnimJoint937.children.append(HAnimSegment938)

HAnimJoint929.children.append(HAnimJoint937)

HAnimJoint921.children.append(HAnimJoint929)

HAnimJoint913.children.append(HAnimJoint921)

HAnimJoint905.children.append(HAnimJoint913)
HAnimJoint945 = x3d.HAnimJoint(DEF="hanim_l_metacarpal_5")
HAnimJoint945.name = "l_metacarpal_5"
HAnimJoint945.center = [0.1815,-0.1347,0.6797]
HAnimSegment946 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_metacarpal_5")
HAnimSegment946.name = "SEGMENT_FOR_l_metacarpal_5"
TouchSensor947 = x3d.TouchSensor()
TouchSensor947.description = "joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5"

HAnimSegment946.children.append(TouchSensor947)
Transform948 = x3d.Transform()
Transform948.translation = [0.1815,-0.1347,0.6797]
Shape949 = x3d.Shape(USE="JointShape")

Transform948.children.append(Shape949)

HAnimSegment946.children.append(Transform948)
HAnimSite950 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_metacarpal_5_tip")
HAnimSite950.name = "SEGMENT_FOR_l_metacarpal_5_tip"
Transform951 = x3d.Transform()
Transform951.translation = [0.1815,-0.1347,0.6797]
Shape952 = x3d.Shape(USE="SiteShape")

Transform951.children.append(Shape952)

HAnimSite950.children.append(Transform951)

HAnimSegment946.children.append(HAnimSite950)

HAnimJoint945.children.append(HAnimSegment946)
HAnimJoint953 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_phalanx_5")
HAnimJoint953.name = "l_carpal_proximal_phalanx_5"
HAnimJoint953.center = [0.1832,-0.1389,0.6295]
HAnimSegment954 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5")
HAnimSegment954.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_5"
TouchSensor955 = x3d.TouchSensor()
TouchSensor955.description = "joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5"

HAnimSegment954.children.append(TouchSensor955)
Transform956 = x3d.Transform()
Transform956.translation = [0.1832,-0.1389,0.6295]
Shape957 = x3d.Shape(USE="JointShape")

Transform956.children.append(Shape957)

HAnimSegment954.children.append(Transform956)
HAnimSite958 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip")
HAnimSite958.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip"
Transform959 = x3d.Transform()
Transform959.translation = [0.1832,-0.1389,0.6295]
Shape960 = x3d.Shape(USE="SiteShape")

Transform959.children.append(Shape960)

HAnimSite958.children.append(Transform959)

HAnimSegment954.children.append(HAnimSite958)

HAnimJoint953.children.append(HAnimSegment954)
HAnimJoint961 = x3d.HAnimJoint(DEF="hanim_l_carpal_middle_phalanx_5")
HAnimJoint961.name = "l_carpal_middle_phalanx_5"
HAnimJoint961.center = [0.1815,-0.139,0.6124]
HAnimSegment962 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5")
HAnimSegment962.name = "SEGMENT_FOR_l_carpal_middle_phalanx_5"
TouchSensor963 = x3d.TouchSensor()
TouchSensor963.description = "joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5"

HAnimSegment962.children.append(TouchSensor963)
Transform964 = x3d.Transform()
Transform964.translation = [0.1815,-0.139,0.6124]
Shape965 = x3d.Shape(USE="JointShape")

Transform964.children.append(Shape965)

HAnimSegment962.children.append(Transform964)
HAnimSite966 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5_tip")
HAnimSite966.name = "SEGMENT_FOR_l_carpal_middle_phalanx_5_tip"
Transform967 = x3d.Transform()
Transform967.translation = [0.1815,-0.139,0.6124]
Shape968 = x3d.Shape(USE="SiteShape")

Transform967.children.append(Shape968)

HAnimSite966.children.append(Transform967)

HAnimSegment962.children.append(HAnimSite966)

HAnimJoint961.children.append(HAnimSegment962)
HAnimJoint969 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_phalanx_5")
HAnimJoint969.name = "l_carpal_distal_phalanx_5"
HAnimJoint969.center = [0.1806,-0.1388,0.5938]
HAnimSegment970 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5")
HAnimSegment970.name = "SEGMENT_FOR_l_carpal_distal_phalanx_5"
TouchSensor971 = x3d.TouchSensor()
TouchSensor971.description = "joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5"

HAnimSegment970.children.append(TouchSensor971)
Transform972 = x3d.Transform()
Transform972.translation = [0.1806,-0.1388,0.5938]
Shape973 = x3d.Shape(USE="JointShape")

Transform972.children.append(Shape973)

HAnimSegment970.children.append(Transform972)
HAnimSite974 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5_tip")
HAnimSite974.name = "SEGMENT_FOR_l_carpal_distal_phalanx_5_tip"
Transform975 = x3d.Transform()
Transform975.translation = [0.1806,-0.1388,0.5938]
Shape976 = x3d.Shape(USE="SiteShape")

Transform975.children.append(Shape976)

HAnimSite974.children.append(Transform975)

HAnimSegment970.children.append(HAnimSite974)

HAnimJoint969.children.append(HAnimSegment970)

HAnimJoint961.children.append(HAnimJoint969)

HAnimJoint953.children.append(HAnimJoint961)

HAnimJoint945.children.append(HAnimJoint953)

HAnimJoint905.children.append(HAnimJoint945)

HAnimJoint785.children.append(HAnimJoint905)

HAnimJoint777.children.append(HAnimJoint785)

HAnimJoint769.children.append(HAnimJoint777)

HAnimJoint761.children.append(HAnimJoint769)

HAnimJoint753.children.append(HAnimJoint761)

HAnimJoint625.children.append(HAnimJoint753)
HAnimJoint977 = x3d.HAnimJoint(DEF="hanim_r_clavicle")
HAnimJoint977.name = "r_clavicle"
HAnimJoint977.center = [-0.1231,-0.1148,1.1833]
HAnimSegment978 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_clavicle")
HAnimSegment978.name = "SEGMENT_FOR_r_clavicle"
TouchSensor979 = x3d.TouchSensor()
TouchSensor979.description = "joint r_clavicle segment SEGMENT_FOR_r_clavicle"

HAnimSegment978.children.append(TouchSensor979)
Transform980 = x3d.Transform()
Transform980.translation = [-0.1231,-0.1148,1.1833]
Shape981 = x3d.Shape(USE="JointShape")

Transform980.children.append(Shape981)

HAnimSegment978.children.append(Transform980)
HAnimSite982 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_clavicle_tip")
HAnimSite982.name = "SEGMENT_FOR_r_clavicle_tip"
Transform983 = x3d.Transform()
Transform983.translation = [-0.1231,-0.1148,1.1833]
Shape984 = x3d.Shape(USE="SiteShape")

Transform983.children.append(Shape984)

HAnimSite982.children.append(Transform983)

HAnimSegment978.children.append(HAnimSite982)

HAnimJoint977.children.append(HAnimSegment978)
HAnimJoint985 = x3d.HAnimJoint(DEF="hanim_r_scapula")
HAnimJoint985.name = "r_scapula"
HAnimJoint985.center = [-0.0387,-0.1157,1.2001]
HAnimSegment986 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_scapula")
HAnimSegment986.name = "SEGMENT_FOR_r_scapula"
TouchSensor987 = x3d.TouchSensor()
TouchSensor987.description = "joint r_scapula segment SEGMENT_FOR_r_scapula"

HAnimSegment986.children.append(TouchSensor987)
Transform988 = x3d.Transform()
Transform988.translation = [-0.0387,-0.1157,1.2001]
Shape989 = x3d.Shape(USE="JointShape")

Transform988.children.append(Shape989)

HAnimSegment986.children.append(Transform988)
HAnimSite990 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_scapula_tip")
HAnimSite990.name = "SEGMENT_FOR_r_scapula_tip"
Transform991 = x3d.Transform()
Transform991.translation = [-0.0387,-0.1157,1.2001]
Shape992 = x3d.Shape(USE="SiteShape")

Transform991.children.append(Shape992)

HAnimSite990.children.append(Transform991)

HAnimSegment986.children.append(HAnimSite990)

HAnimJoint985.children.append(HAnimSegment986)
HAnimJoint993 = x3d.HAnimJoint(DEF="hanim_r_upperarm")
HAnimJoint993.name = "r_upperarm"
HAnimJoint993.center = [-0.1649,-0.1051,1.17]
HAnimSegment994 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_upperarm")
HAnimSegment994.name = "SEGMENT_FOR_r_upperarm"
TouchSensor995 = x3d.TouchSensor()
TouchSensor995.description = "joint r_upperarm segment SEGMENT_FOR_r_upperarm"

HAnimSegment994.children.append(TouchSensor995)
Transform996 = x3d.Transform()
Transform996.translation = [-0.1649,-0.1051,1.17]
Shape997 = x3d.Shape(USE="JointShape")

Transform996.children.append(Shape997)

HAnimSegment994.children.append(Transform996)
HAnimSite998 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_upperarm_tip")
HAnimSite998.name = "SEGMENT_FOR_r_upperarm_tip"
Transform999 = x3d.Transform()
Transform999.translation = [-0.1649,-0.1051,1.17]
Shape1000 = x3d.Shape(USE="SiteShape")

Transform999.children.append(Shape1000)

HAnimSite998.children.append(Transform999)

HAnimSegment994.children.append(HAnimSite998)

HAnimJoint993.children.append(HAnimSegment994)
HAnimJoint1001 = x3d.HAnimJoint(DEF="hanim_r_forearm")
HAnimJoint1001.name = "r_forearm"
HAnimJoint1001.center = [-0.1819,-0.1075,0.9202]
HAnimSegment1002 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_forearm")
HAnimSegment1002.name = "SEGMENT_FOR_r_forearm"
TouchSensor1003 = x3d.TouchSensor()
TouchSensor1003.description = "joint r_forearm segment SEGMENT_FOR_r_forearm"

HAnimSegment1002.children.append(TouchSensor1003)
Transform1004 = x3d.Transform()
Transform1004.translation = [-0.1819,-0.1075,0.9202]
Shape1005 = x3d.Shape(USE="JointShape")

Transform1004.children.append(Shape1005)

HAnimSegment1002.children.append(Transform1004)
HAnimSite1006 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_forearm_tip")
HAnimSite1006.name = "SEGMENT_FOR_r_forearm_tip"
Transform1007 = x3d.Transform()
Transform1007.translation = [-0.1819,-0.1075,0.9202]
Shape1008 = x3d.Shape(USE="SiteShape")

Transform1007.children.append(Shape1008)

HAnimSite1006.children.append(Transform1007)

HAnimSegment1002.children.append(HAnimSite1006)

HAnimJoint1001.children.append(HAnimSegment1002)
HAnimJoint1009 = x3d.HAnimJoint(DEF="hanim_r_carpal")
HAnimJoint1009.name = "r_carpal"
HAnimJoint1009.center = [-0.1818,-0.1069,0.7157]
HAnimSegment1010 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal")
HAnimSegment1010.name = "SEGMENT_FOR_r_carpal"
TouchSensor1011 = x3d.TouchSensor()
TouchSensor1011.description = "joint r_carpal segment SEGMENT_FOR_r_carpal"

HAnimSegment1010.children.append(TouchSensor1011)
Transform1012 = x3d.Transform()
Transform1012.translation = [-0.1818,-0.1069,0.7157]
Shape1013 = x3d.Shape(USE="JointShape")

Transform1012.children.append(Shape1013)

HAnimSegment1010.children.append(Transform1012)
HAnimSite1014 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_tip")
HAnimSite1014.name = "SEGMENT_FOR_r_carpal_tip"
Transform1015 = x3d.Transform()
Transform1015.translation = [-0.1818,-0.1069,0.7157]
Shape1016 = x3d.Shape(USE="SiteShape")

Transform1015.children.append(Shape1016)

HAnimSite1014.children.append(Transform1015)

HAnimSegment1010.children.append(HAnimSite1014)

HAnimJoint1009.children.append(HAnimSegment1010)
HAnimJoint1017 = x3d.HAnimJoint(DEF="hanim_r_trapezium")
HAnimJoint1017.name = "r_trapezium"
HAnimJoint1017.center = [-0.1811,-0.0826,0.6975]
HAnimSegment1018 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_trapezium")
HAnimSegment1018.name = "SEGMENT_FOR_r_trapezium"
TouchSensor1019 = x3d.TouchSensor()
TouchSensor1019.description = "joint r_trapezium segment SEGMENT_FOR_r_trapezium"

HAnimSegment1018.children.append(TouchSensor1019)
Transform1020 = x3d.Transform()
Transform1020.translation = [-0.1811,-0.0826,0.6975]
Shape1021 = x3d.Shape(USE="JointShape")

Transform1020.children.append(Shape1021)

HAnimSegment1018.children.append(Transform1020)
HAnimSite1022 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_trapezium_tip")
HAnimSite1022.name = "SEGMENT_FOR_r_trapezium_tip"
Transform1023 = x3d.Transform()
Transform1023.translation = [-0.1811,-0.0826,0.6975]
Shape1024 = x3d.Shape(USE="SiteShape")

Transform1023.children.append(Shape1024)

HAnimSite1022.children.append(Transform1023)

HAnimSegment1018.children.append(HAnimSite1022)

HAnimJoint1017.children.append(HAnimSegment1018)
HAnimJoint1025 = x3d.HAnimJoint(DEF="hanim_r_metacarpal_1")
HAnimJoint1025.name = "r_metacarpal_1"
HAnimJoint1025.center = [-0.1803,-0.0759,0.684]
HAnimSegment1026 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metacarpal_1")
HAnimSegment1026.name = "SEGMENT_FOR_r_metacarpal_1"
TouchSensor1027 = x3d.TouchSensor()
TouchSensor1027.description = "joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1"

HAnimSegment1026.children.append(TouchSensor1027)
Transform1028 = x3d.Transform()
Transform1028.translation = [-0.1803,-0.0759,0.684]
Shape1029 = x3d.Shape(USE="JointShape")

Transform1028.children.append(Shape1029)

HAnimSegment1026.children.append(Transform1028)
HAnimSite1030 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metacarpal_1_tip")
HAnimSite1030.name = "SEGMENT_FOR_r_metacarpal_1_tip"
Transform1031 = x3d.Transform()
Transform1031.translation = [-0.1803,-0.0759,0.684]
Shape1032 = x3d.Shape(USE="SiteShape")

Transform1031.children.append(Shape1032)

HAnimSite1030.children.append(Transform1031)

HAnimSegment1026.children.append(HAnimSite1030)

HAnimJoint1025.children.append(HAnimSegment1026)
HAnimJoint1033 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_phalanx_1")
HAnimJoint1033.name = "r_carpal_proximal_phalanx_1"
HAnimJoint1033.center = [-0.1808,-0.0661,0.6642]
HAnimSegment1034 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1")
HAnimSegment1034.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_1"
TouchSensor1035 = x3d.TouchSensor()
TouchSensor1035.description = "joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1"

HAnimSegment1034.children.append(TouchSensor1035)
Transform1036 = x3d.Transform()
Transform1036.translation = [-0.1808,-0.0661,0.6642]
Shape1037 = x3d.Shape(USE="JointShape")

Transform1036.children.append(Shape1037)

HAnimSegment1034.children.append(Transform1036)
HAnimSite1038 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip")
HAnimSite1038.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip"
Transform1039 = x3d.Transform()
Transform1039.translation = [-0.1808,-0.0661,0.6642]
Shape1040 = x3d.Shape(USE="SiteShape")

Transform1039.children.append(Shape1040)

HAnimSite1038.children.append(Transform1039)

HAnimSegment1034.children.append(HAnimSite1038)

HAnimJoint1033.children.append(HAnimSegment1034)
HAnimJoint1041 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_phalanx_1")
HAnimJoint1041.name = "r_carpal_distal_phalanx_1"
HAnimJoint1041.center = [-0.1825,-0.0522,0.6455]
HAnimSegment1042 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1")
HAnimSegment1042.name = "SEGMENT_FOR_r_carpal_distal_phalanx_1"
TouchSensor1043 = x3d.TouchSensor()
TouchSensor1043.description = "joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1"

HAnimSegment1042.children.append(TouchSensor1043)
Transform1044 = x3d.Transform()
Transform1044.translation = [-0.1825,-0.0522,0.6455]
Shape1045 = x3d.Shape(USE="JointShape")

Transform1044.children.append(Shape1045)

HAnimSegment1042.children.append(Transform1044)
HAnimSite1046 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1_tip")
HAnimSite1046.name = "SEGMENT_FOR_r_carpal_distal_phalanx_1_tip"
Transform1047 = x3d.Transform()
Transform1047.translation = [-0.1825,-0.0522,0.6455]
Shape1048 = x3d.Shape(USE="SiteShape")

Transform1047.children.append(Shape1048)

HAnimSite1046.children.append(Transform1047)

HAnimSegment1042.children.append(HAnimSite1046)

HAnimJoint1041.children.append(HAnimSegment1042)

HAnimJoint1033.children.append(HAnimJoint1041)

HAnimJoint1025.children.append(HAnimJoint1033)

HAnimJoint1017.children.append(HAnimJoint1025)

HAnimJoint1009.children.append(HAnimJoint1017)
HAnimJoint1049 = x3d.HAnimJoint(DEF="hanim_r_trapezoid")
HAnimJoint1049.name = "r_trapezoid"
HAnimJoint1049.center = [-0.1811,-0.0935,0.6984]
HAnimSegment1050 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_trapezoid")
HAnimSegment1050.name = "SEGMENT_FOR_r_trapezoid"
TouchSensor1051 = x3d.TouchSensor()
TouchSensor1051.description = "joint r_trapezoid segment SEGMENT_FOR_r_trapezoid"

HAnimSegment1050.children.append(TouchSensor1051)
Transform1052 = x3d.Transform()
Transform1052.translation = [-0.1811,-0.0935,0.6984]
Shape1053 = x3d.Shape(USE="JointShape")

Transform1052.children.append(Shape1053)

HAnimSegment1050.children.append(Transform1052)
HAnimSite1054 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_trapezoid_tip")
HAnimSite1054.name = "SEGMENT_FOR_r_trapezoid_tip"
Transform1055 = x3d.Transform()
Transform1055.translation = [-0.1811,-0.0935,0.6984]
Shape1056 = x3d.Shape(USE="SiteShape")

Transform1055.children.append(Shape1056)

HAnimSite1054.children.append(Transform1055)

HAnimSegment1050.children.append(HAnimSite1054)

HAnimJoint1049.children.append(HAnimSegment1050)
HAnimJoint1057 = x3d.HAnimJoint(DEF="hanim_r_metacarpal_2")
HAnimJoint1057.name = "r_metacarpal_2"
HAnimJoint1057.center = [-0.1811,-0.0922,0.679]
HAnimSegment1058 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metacarpal_2")
HAnimSegment1058.name = "SEGMENT_FOR_r_metacarpal_2"
TouchSensor1059 = x3d.TouchSensor()
TouchSensor1059.description = "joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2"

HAnimSegment1058.children.append(TouchSensor1059)
Transform1060 = x3d.Transform()
Transform1060.translation = [-0.1811,-0.0922,0.679]
Shape1061 = x3d.Shape(USE="JointShape")

Transform1060.children.append(Shape1061)

HAnimSegment1058.children.append(Transform1060)
HAnimSite1062 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metacarpal_2_tip")
HAnimSite1062.name = "SEGMENT_FOR_r_metacarpal_2_tip"
Transform1063 = x3d.Transform()
Transform1063.translation = [-0.1811,-0.0922,0.679]
Shape1064 = x3d.Shape(USE="SiteShape")

Transform1063.children.append(Shape1064)

HAnimSite1062.children.append(Transform1063)

HAnimSegment1058.children.append(HAnimSite1062)

HAnimJoint1057.children.append(HAnimSegment1058)
HAnimJoint1065 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_phalanx_2")
HAnimJoint1065.name = "r_carpal_proximal_phalanx_2"
HAnimJoint1065.center = [-0.1835,-0.0868,0.6286]
HAnimSegment1066 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2")
HAnimSegment1066.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_2"
TouchSensor1067 = x3d.TouchSensor()
TouchSensor1067.description = "joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2"

HAnimSegment1066.children.append(TouchSensor1067)
Transform1068 = x3d.Transform()
Transform1068.translation = [-0.1835,-0.0868,0.6286]
Shape1069 = x3d.Shape(USE="JointShape")

Transform1068.children.append(Shape1069)

HAnimSegment1066.children.append(Transform1068)
HAnimSite1070 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip")
HAnimSite1070.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip"
Transform1071 = x3d.Transform()
Transform1071.translation = [-0.1835,-0.0868,0.6286]
Shape1072 = x3d.Shape(USE="SiteShape")

Transform1071.children.append(Shape1072)

HAnimSite1070.children.append(Transform1071)

HAnimSegment1066.children.append(HAnimSite1070)

HAnimJoint1065.children.append(HAnimSegment1066)
HAnimJoint1073 = x3d.HAnimJoint(DEF="hanim_r_carpal_middle_phalanx_2")
HAnimJoint1073.name = "r_carpal_middle_phalanx_2"
HAnimJoint1073.center = [-0.1815,-0.0877,0.5983]
HAnimSegment1074 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2")
HAnimSegment1074.name = "SEGMENT_FOR_r_carpal_middle_phalanx_2"
TouchSensor1075 = x3d.TouchSensor()
TouchSensor1075.description = "joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2"

HAnimSegment1074.children.append(TouchSensor1075)
Transform1076 = x3d.Transform()
Transform1076.translation = [-0.1815,-0.0877,0.5983]
Shape1077 = x3d.Shape(USE="JointShape")

Transform1076.children.append(Shape1077)

HAnimSegment1074.children.append(Transform1076)
HAnimSite1078 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2_tip")
HAnimSite1078.name = "SEGMENT_FOR_r_carpal_middle_phalanx_2_tip"
Transform1079 = x3d.Transform()
Transform1079.translation = [-0.1815,-0.0877,0.5983]
Shape1080 = x3d.Shape(USE="SiteShape")

Transform1079.children.append(Shape1080)

HAnimSite1078.children.append(Transform1079)

HAnimSegment1074.children.append(HAnimSite1078)

HAnimJoint1073.children.append(HAnimSegment1074)
HAnimJoint1081 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_phalanx_2")
HAnimJoint1081.name = "r_carpal_distal_phalanx_2"
HAnimJoint1081.center = [-0.1805,-0.0885,0.5731]
HAnimSegment1082 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2")
HAnimSegment1082.name = "SEGMENT_FOR_r_carpal_distal_phalanx_2"
TouchSensor1083 = x3d.TouchSensor()
TouchSensor1083.description = "joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2"

HAnimSegment1082.children.append(TouchSensor1083)
Transform1084 = x3d.Transform()
Transform1084.translation = [-0.1805,-0.0885,0.5731]
Shape1085 = x3d.Shape(USE="JointShape")

Transform1084.children.append(Shape1085)

HAnimSegment1082.children.append(Transform1084)
HAnimSite1086 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2_tip")
HAnimSite1086.name = "SEGMENT_FOR_r_carpal_distal_phalanx_2_tip"
Transform1087 = x3d.Transform()
Transform1087.translation = [-0.1805,-0.0885,0.5731]
Shape1088 = x3d.Shape(USE="SiteShape")

Transform1087.children.append(Shape1088)

HAnimSite1086.children.append(Transform1087)

HAnimSegment1082.children.append(HAnimSite1086)

HAnimJoint1081.children.append(HAnimSegment1082)

HAnimJoint1073.children.append(HAnimJoint1081)

HAnimJoint1065.children.append(HAnimJoint1073)

HAnimJoint1057.children.append(HAnimJoint1065)

HAnimJoint1049.children.append(HAnimJoint1057)

HAnimJoint1009.children.append(HAnimJoint1049)
HAnimJoint1089 = x3d.HAnimJoint(DEF="hanim_r_capitate")
HAnimJoint1089.name = "r_capitate"
HAnimJoint1089.center = [-0.1809,-0.1067,0.7]
HAnimSegment1090 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_capitate")
HAnimSegment1090.name = "SEGMENT_FOR_r_capitate"
TouchSensor1091 = x3d.TouchSensor()
TouchSensor1091.description = "joint r_capitate segment SEGMENT_FOR_r_capitate"

HAnimSegment1090.children.append(TouchSensor1091)
Transform1092 = x3d.Transform()
Transform1092.translation = [-0.1809,-0.1067,0.7]
Shape1093 = x3d.Shape(USE="JointShape")

Transform1092.children.append(Shape1093)

HAnimSegment1090.children.append(Transform1092)
HAnimSite1094 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_capitate_tip")
HAnimSite1094.name = "SEGMENT_FOR_r_capitate_tip"
Transform1095 = x3d.Transform()
Transform1095.translation = [-0.1809,-0.1067,0.7]
Shape1096 = x3d.Shape(USE="SiteShape")

Transform1095.children.append(Shape1096)

HAnimSite1094.children.append(Transform1095)

HAnimSegment1090.children.append(HAnimSite1094)

HAnimJoint1089.children.append(HAnimSegment1090)
HAnimJoint1097 = x3d.HAnimJoint(DEF="hanim_r_metacarpal_3")
HAnimJoint1097.name = "r_metacarpal_3"
HAnimJoint1097.center = [-0.1809,-0.1081,0.6772]
HAnimSegment1098 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metacarpal_3")
HAnimSegment1098.name = "SEGMENT_FOR_r_metacarpal_3"
TouchSensor1099 = x3d.TouchSensor()
TouchSensor1099.description = "joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3"

HAnimSegment1098.children.append(TouchSensor1099)
Transform1100 = x3d.Transform()
Transform1100.translation = [-0.1809,-0.1081,0.6772]
Shape1101 = x3d.Shape(USE="JointShape")

Transform1100.children.append(Shape1101)

HAnimSegment1098.children.append(Transform1100)
HAnimSite1102 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metacarpal_3_tip")
HAnimSite1102.name = "SEGMENT_FOR_r_metacarpal_3_tip"
Transform1103 = x3d.Transform()
Transform1103.translation = [-0.1809,-0.1081,0.6772]
Shape1104 = x3d.Shape(USE="SiteShape")

Transform1103.children.append(Shape1104)

HAnimSite1102.children.append(Transform1103)

HAnimSegment1098.children.append(HAnimSite1102)

HAnimJoint1097.children.append(HAnimSegment1098)
HAnimJoint1105 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_phalanx_3")
HAnimJoint1105.name = "r_carpal_proximal_phalanx_3"
HAnimJoint1105.center = [-0.1835,-0.1058,0.6264]
HAnimSegment1106 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3")
HAnimSegment1106.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_3"
TouchSensor1107 = x3d.TouchSensor()
TouchSensor1107.description = "joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3"

HAnimSegment1106.children.append(TouchSensor1107)
Transform1108 = x3d.Transform()
Transform1108.translation = [-0.1835,-0.1058,0.6264]
Shape1109 = x3d.Shape(USE="JointShape")

Transform1108.children.append(Shape1109)

HAnimSegment1106.children.append(Transform1108)
HAnimSite1110 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip")
HAnimSite1110.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip"
Transform1111 = x3d.Transform()
Transform1111.translation = [-0.1835,-0.1058,0.6264]
Shape1112 = x3d.Shape(USE="SiteShape")

Transform1111.children.append(Shape1112)

HAnimSite1110.children.append(Transform1111)

HAnimSegment1106.children.append(HAnimSite1110)

HAnimJoint1105.children.append(HAnimSegment1106)
HAnimJoint1113 = x3d.HAnimJoint(DEF="hanim_r_carpal_middle_phalanx_3")
HAnimJoint1113.name = "r_carpal_middle_phalanx_3"
HAnimJoint1113.center = [-0.1815,-0.1054,0.5947]
HAnimSegment1114 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3")
HAnimSegment1114.name = "SEGMENT_FOR_r_carpal_middle_phalanx_3"
TouchSensor1115 = x3d.TouchSensor()
TouchSensor1115.description = "joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3"

HAnimSegment1114.children.append(TouchSensor1115)
Transform1116 = x3d.Transform()
Transform1116.translation = [-0.1815,-0.1054,0.5947]
Shape1117 = x3d.Shape(USE="JointShape")

Transform1116.children.append(Shape1117)

HAnimSegment1114.children.append(Transform1116)
HAnimSite1118 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3_tip")
HAnimSite1118.name = "SEGMENT_FOR_r_carpal_middle_phalanx_3_tip"
Transform1119 = x3d.Transform()
Transform1119.translation = [-0.1815,-0.1054,0.5947]
Shape1120 = x3d.Shape(USE="SiteShape")

Transform1119.children.append(Shape1120)

HAnimSite1118.children.append(Transform1119)

HAnimSegment1114.children.append(HAnimSite1118)

HAnimJoint1113.children.append(HAnimSegment1114)
HAnimJoint1121 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_phalanx_3")
HAnimJoint1121.name = "r_carpal_distal_phalanx_3"
HAnimJoint1121.center = [-0.1805,-0.1056,0.5668]
HAnimSegment1122 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3")
HAnimSegment1122.name = "SEGMENT_FOR_r_carpal_distal_phalanx_3"
TouchSensor1123 = x3d.TouchSensor()
TouchSensor1123.description = "joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3"

HAnimSegment1122.children.append(TouchSensor1123)
Transform1124 = x3d.Transform()
Transform1124.translation = [-0.1805,-0.1056,0.5668]
Shape1125 = x3d.Shape(USE="JointShape")

Transform1124.children.append(Shape1125)

HAnimSegment1122.children.append(Transform1124)
HAnimSite1126 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3_tip")
HAnimSite1126.name = "SEGMENT_FOR_r_carpal_distal_phalanx_3_tip"
Transform1127 = x3d.Transform()
Transform1127.translation = [-0.1805,-0.1056,0.5668]
Shape1128 = x3d.Shape(USE="SiteShape")

Transform1127.children.append(Shape1128)

HAnimSite1126.children.append(Transform1127)

HAnimSegment1122.children.append(HAnimSite1126)

HAnimJoint1121.children.append(HAnimSegment1122)

HAnimJoint1113.children.append(HAnimJoint1121)

HAnimJoint1105.children.append(HAnimJoint1113)

HAnimJoint1097.children.append(HAnimJoint1105)

HAnimJoint1089.children.append(HAnimJoint1097)

HAnimJoint1009.children.append(HAnimJoint1089)
HAnimJoint1129 = x3d.HAnimJoint(DEF="hanim_r_hamate")
HAnimJoint1129.name = "r_hamate"
HAnimJoint1129.center = [-0.1809,-0.1276,0.6973]
HAnimSegment1130 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_hamate")
HAnimSegment1130.name = "SEGMENT_FOR_r_hamate"
TouchSensor1131 = x3d.TouchSensor()
TouchSensor1131.description = "joint r_hamate segment SEGMENT_FOR_r_hamate"

HAnimSegment1130.children.append(TouchSensor1131)
Transform1132 = x3d.Transform()
Transform1132.translation = [-0.1809,-0.1276,0.6973]
Shape1133 = x3d.Shape(USE="JointShape")

Transform1132.children.append(Shape1133)

HAnimSegment1130.children.append(Transform1132)
HAnimSite1134 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_hamate_tip")
HAnimSite1134.name = "SEGMENT_FOR_r_hamate_tip"
Transform1135 = x3d.Transform()
Transform1135.translation = [-0.1809,-0.1276,0.6973]
Shape1136 = x3d.Shape(USE="SiteShape")

Transform1135.children.append(Shape1136)

HAnimSite1134.children.append(Transform1135)

HAnimSegment1130.children.append(HAnimSite1134)

HAnimJoint1129.children.append(HAnimSegment1130)
HAnimJoint1137 = x3d.HAnimJoint(DEF="hanim_r_metacarpal_4")
HAnimJoint1137.name = "r_metacarpal_4"
HAnimJoint1137.center = [-0.1809,-0.1218,0.6777]
HAnimSegment1138 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metacarpal_4")
HAnimSegment1138.name = "SEGMENT_FOR_r_metacarpal_4"
TouchSensor1139 = x3d.TouchSensor()
TouchSensor1139.description = "joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4"

HAnimSegment1138.children.append(TouchSensor1139)
Transform1140 = x3d.Transform()
Transform1140.translation = [-0.1809,-0.1218,0.6777]
Shape1141 = x3d.Shape(USE="JointShape")

Transform1140.children.append(Shape1141)

HAnimSegment1138.children.append(Transform1140)
HAnimSite1142 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metacarpal_4_tip")
HAnimSite1142.name = "SEGMENT_FOR_r_metacarpal_4_tip"
Transform1143 = x3d.Transform()
Transform1143.translation = [-0.1809,-0.1218,0.6777]
Shape1144 = x3d.Shape(USE="SiteShape")

Transform1143.children.append(Shape1144)

HAnimSite1142.children.append(Transform1143)

HAnimSegment1138.children.append(HAnimSite1142)

HAnimJoint1137.children.append(HAnimSegment1138)
HAnimJoint1145 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_phalanx_4")
HAnimJoint1145.name = "r_carpal_proximal_phalanx_4"
HAnimJoint1145.center = [-0.1835,-0.1233,0.6255]
HAnimSegment1146 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4")
HAnimSegment1146.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_4"
TouchSensor1147 = x3d.TouchSensor()
TouchSensor1147.description = "joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4"

HAnimSegment1146.children.append(TouchSensor1147)
Transform1148 = x3d.Transform()
Transform1148.translation = [-0.1835,-0.1233,0.6255]
Shape1149 = x3d.Shape(USE="JointShape")

Transform1148.children.append(Shape1149)

HAnimSegment1146.children.append(Transform1148)
HAnimSite1150 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip")
HAnimSite1150.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip"
Transform1151 = x3d.Transform()
Transform1151.translation = [-0.1835,-0.1233,0.6255]
Shape1152 = x3d.Shape(USE="SiteShape")

Transform1151.children.append(Shape1152)

HAnimSite1150.children.append(Transform1151)

HAnimSegment1146.children.append(HAnimSite1150)

HAnimJoint1145.children.append(HAnimSegment1146)
HAnimJoint1153 = x3d.HAnimJoint(DEF="hanim_r_carpal_middle_phalanx_4")
HAnimJoint1153.name = "r_carpal_middle_phalanx_4"
HAnimJoint1153.center = [-0.1815,-0.1225,0.598]
HAnimSegment1154 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4")
HAnimSegment1154.name = "SEGMENT_FOR_r_carpal_middle_phalanx_4"
TouchSensor1155 = x3d.TouchSensor()
TouchSensor1155.description = "joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4"

HAnimSegment1154.children.append(TouchSensor1155)
Transform1156 = x3d.Transform()
Transform1156.translation = [-0.1815,-0.1225,0.598]
Shape1157 = x3d.Shape(USE="JointShape")

Transform1156.children.append(Shape1157)

HAnimSegment1154.children.append(Transform1156)
HAnimSite1158 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4_tip")
HAnimSite1158.name = "SEGMENT_FOR_r_carpal_middle_phalanx_4_tip"
Transform1159 = x3d.Transform()
Transform1159.translation = [-0.1815,-0.1225,0.598]
Shape1160 = x3d.Shape(USE="SiteShape")

Transform1159.children.append(Shape1160)

HAnimSite1158.children.append(Transform1159)

HAnimSegment1154.children.append(HAnimSite1158)

HAnimJoint1153.children.append(HAnimSegment1154)
HAnimJoint1161 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_phalanx_4")
HAnimJoint1161.name = "r_carpal_distal_phalanx_4"
HAnimJoint1161.center = [-0.1805,-0.1217,0.5722]
HAnimSegment1162 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4")
HAnimSegment1162.name = "SEGMENT_FOR_r_carpal_distal_phalanx_4"
TouchSensor1163 = x3d.TouchSensor()
TouchSensor1163.description = "joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4"

HAnimSegment1162.children.append(TouchSensor1163)
Transform1164 = x3d.Transform()
Transform1164.translation = [-0.1805,-0.1217,0.5722]
Shape1165 = x3d.Shape(USE="JointShape")

Transform1164.children.append(Shape1165)

HAnimSegment1162.children.append(Transform1164)
HAnimSite1166 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4_tip")
HAnimSite1166.name = "SEGMENT_FOR_r_carpal_distal_phalanx_4_tip"
Transform1167 = x3d.Transform()
Transform1167.translation = [-0.1805,-0.1217,0.5722]
Shape1168 = x3d.Shape(USE="SiteShape")

Transform1167.children.append(Shape1168)

HAnimSite1166.children.append(Transform1167)

HAnimSegment1162.children.append(HAnimSite1166)

HAnimJoint1161.children.append(HAnimSegment1162)

HAnimJoint1153.children.append(HAnimJoint1161)

HAnimJoint1145.children.append(HAnimJoint1153)

HAnimJoint1137.children.append(HAnimJoint1145)

HAnimJoint1129.children.append(HAnimJoint1137)
HAnimJoint1169 = x3d.HAnimJoint(DEF="hanim_r_metacarpal_5")
HAnimJoint1169.name = "r_metacarpal_5"
HAnimJoint1169.center = [-0.1814,-0.1347,0.6797]
HAnimSegment1170 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_metacarpal_5")
HAnimSegment1170.name = "SEGMENT_FOR_r_metacarpal_5"
TouchSensor1171 = x3d.TouchSensor()
TouchSensor1171.description = "joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5"

HAnimSegment1170.children.append(TouchSensor1171)
Transform1172 = x3d.Transform()
Transform1172.translation = [-0.1814,-0.1347,0.6797]
Shape1173 = x3d.Shape(USE="JointShape")

Transform1172.children.append(Shape1173)

HAnimSegment1170.children.append(Transform1172)
HAnimSite1174 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_metacarpal_5_tip")
HAnimSite1174.name = "SEGMENT_FOR_r_metacarpal_5_tip"
Transform1175 = x3d.Transform()
Transform1175.translation = [-0.1814,-0.1347,0.6797]
Shape1176 = x3d.Shape(USE="SiteShape")

Transform1175.children.append(Shape1176)

HAnimSite1174.children.append(Transform1175)

HAnimSegment1170.children.append(HAnimSite1174)

HAnimJoint1169.children.append(HAnimSegment1170)
HAnimJoint1177 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_phalanx_5")
HAnimJoint1177.name = "r_carpal_proximal_phalanx_5"
HAnimJoint1177.center = [-0.1832,-0.1389,0.6295]
HAnimSegment1178 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5")
HAnimSegment1178.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_5"
TouchSensor1179 = x3d.TouchSensor()
TouchSensor1179.description = "joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5"

HAnimSegment1178.children.append(TouchSensor1179)
Transform1180 = x3d.Transform()
Transform1180.translation = [-0.1832,-0.1389,0.6295]
Shape1181 = x3d.Shape(USE="JointShape")

Transform1180.children.append(Shape1181)

HAnimSegment1178.children.append(Transform1180)
HAnimSite1182 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip")
HAnimSite1182.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip"
Transform1183 = x3d.Transform()
Transform1183.translation = [-0.1832,-0.1389,0.6295]
Shape1184 = x3d.Shape(USE="SiteShape")

Transform1183.children.append(Shape1184)

HAnimSite1182.children.append(Transform1183)

HAnimSegment1178.children.append(HAnimSite1182)

HAnimJoint1177.children.append(HAnimSegment1178)
HAnimJoint1185 = x3d.HAnimJoint(DEF="hanim_r_carpal_middle_phalanx_5")
HAnimJoint1185.name = "r_carpal_middle_phalanx_5"
HAnimJoint1185.center = [-0.1815,-0.139,0.6124]
HAnimSegment1186 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5")
HAnimSegment1186.name = "SEGMENT_FOR_r_carpal_middle_phalanx_5"
TouchSensor1187 = x3d.TouchSensor()
TouchSensor1187.description = "joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5"

HAnimSegment1186.children.append(TouchSensor1187)
Transform1188 = x3d.Transform()
Transform1188.translation = [-0.1815,-0.139,0.6124]
Shape1189 = x3d.Shape(USE="JointShape")

Transform1188.children.append(Shape1189)

HAnimSegment1186.children.append(Transform1188)
HAnimSite1190 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5_tip")
HAnimSite1190.name = "SEGMENT_FOR_r_carpal_middle_phalanx_5_tip"
Transform1191 = x3d.Transform()
Transform1191.translation = [-0.1815,-0.139,0.6124]
Shape1192 = x3d.Shape(USE="SiteShape")

Transform1191.children.append(Shape1192)

HAnimSite1190.children.append(Transform1191)

HAnimSegment1186.children.append(HAnimSite1190)

HAnimJoint1185.children.append(HAnimSegment1186)
HAnimJoint1193 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_phalanx_5")
HAnimJoint1193.name = "r_carpal_distal_phalanx_5"
HAnimJoint1193.center = [-0.1806,-0.1388,0.5938]
HAnimSegment1194 = x3d.HAnimSegment(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5")
HAnimSegment1194.name = "SEGMENT_FOR_r_carpal_distal_phalanx_5"
TouchSensor1195 = x3d.TouchSensor()
TouchSensor1195.description = "joint r_carpal_distal_phalanx_5 segment SEGMENT_FOR_r_carpal_distal_phalanx_5"

HAnimSegment1194.children.append(TouchSensor1195)
Transform1196 = x3d.Transform()
Transform1196.translation = [-0.1806,-0.1388,0.5938]
Shape1197 = x3d.Shape(USE="JointShape")

Transform1196.children.append(Shape1197)

HAnimSegment1194.children.append(Transform1196)
HAnimSite1198 = x3d.HAnimSite(DEF="hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5_tip")
HAnimSite1198.name = "SEGMENT_FOR_r_carpal_distal_phalanx_5_tip"
Transform1199 = x3d.Transform()
Transform1199.translation = [-0.1806,-0.1388,0.5938]
Shape1200 = x3d.Shape(USE="SiteShape")

Transform1199.children.append(Shape1200)

HAnimSite1198.children.append(Transform1199)

HAnimSegment1194.children.append(HAnimSite1198)

HAnimJoint1193.children.append(HAnimSegment1194)

HAnimJoint1185.children.append(HAnimJoint1193)

HAnimJoint1177.children.append(HAnimJoint1185)

HAnimJoint1169.children.append(HAnimJoint1177)

HAnimJoint1129.children.append(HAnimJoint1169)

HAnimJoint1009.children.append(HAnimJoint1129)

HAnimJoint1001.children.append(HAnimJoint1009)

HAnimJoint993.children.append(HAnimJoint1001)

HAnimJoint985.children.append(HAnimJoint993)

HAnimJoint977.children.append(HAnimJoint985)

HAnimJoint625.children.append(HAnimJoint977)

HAnimJoint617.children.append(HAnimJoint625)

HAnimJoint609.children.append(HAnimJoint617)

HAnimJoint601.children.append(HAnimJoint609)

HAnimJoint593.children.append(HAnimJoint601)

HAnimJoint585.children.append(HAnimJoint593)

HAnimJoint577.children.append(HAnimJoint585)

HAnimJoint569.children.append(HAnimJoint577)

HAnimJoint561.children.append(HAnimJoint569)

HAnimJoint553.children.append(HAnimJoint561)

HAnimJoint545.children.append(HAnimJoint553)

HAnimJoint537.children.append(HAnimJoint545)

HAnimJoint529.children.append(HAnimJoint537)

HAnimJoint521.children.append(HAnimJoint529)

HAnimJoint513.children.append(HAnimJoint521)

HAnimJoint505.children.append(HAnimJoint513)

HAnimJoint497.children.append(HAnimJoint505)

HAnimJoint33.children.append(HAnimJoint497)

HAnimJoint25.children.append(HAnimJoint33)

HAnimHumanoid24.skeleton.append(HAnimJoint25)
HAnimJoint1201 = x3d.HAnimJoint(USE="hanim_sacrum")

HAnimHumanoid24.joints.append(HAnimJoint1201)
HAnimJoint1202 = x3d.HAnimJoint(USE="hanim_pelvis")

HAnimHumanoid24.joints.append(HAnimJoint1202)
HAnimJoint1203 = x3d.HAnimJoint(USE="hanim_l_thigh")

HAnimHumanoid24.joints.append(HAnimJoint1203)
HAnimJoint1204 = x3d.HAnimJoint(USE="hanim_l_calf")

HAnimHumanoid24.joints.append(HAnimJoint1204)
HAnimJoint1205 = x3d.HAnimJoint(USE="hanim_l_talus")

HAnimHumanoid24.joints.append(HAnimJoint1205)
HAnimJoint1206 = x3d.HAnimJoint(USE="hanim_l_navicular")

HAnimHumanoid24.joints.append(HAnimJoint1206)
HAnimJoint1207 = x3d.HAnimJoint(USE="hanim_l_cuneiform_1")

HAnimHumanoid24.joints.append(HAnimJoint1207)
HAnimJoint1208 = x3d.HAnimJoint(USE="hanim_l_metatarsal_1")

HAnimHumanoid24.joints.append(HAnimJoint1208)
HAnimJoint1209 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_phalanx_1")

HAnimHumanoid24.joints.append(HAnimJoint1209)
HAnimJoint1210 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_phalanx_1")

HAnimHumanoid24.joints.append(HAnimJoint1210)
HAnimJoint1211 = x3d.HAnimJoint(USE="hanim_l_cuneiform_2")

HAnimHumanoid24.joints.append(HAnimJoint1211)
HAnimJoint1212 = x3d.HAnimJoint(USE="hanim_l_metatarsal_2")

HAnimHumanoid24.joints.append(HAnimJoint1212)
HAnimJoint1213 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_phalanx_2")

HAnimHumanoid24.joints.append(HAnimJoint1213)
HAnimJoint1214 = x3d.HAnimJoint(USE="hanim_l_tarsal_middle_phalanx_2")

HAnimHumanoid24.joints.append(HAnimJoint1214)
HAnimJoint1215 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_phalanx_2")

HAnimHumanoid24.joints.append(HAnimJoint1215)
HAnimJoint1216 = x3d.HAnimJoint(USE="hanim_l_cuneiform_3")

HAnimHumanoid24.joints.append(HAnimJoint1216)
HAnimJoint1217 = x3d.HAnimJoint(USE="hanim_l_metatarsal_3")

HAnimHumanoid24.joints.append(HAnimJoint1217)
HAnimJoint1218 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_phalanx_3")

HAnimHumanoid24.joints.append(HAnimJoint1218)
HAnimJoint1219 = x3d.HAnimJoint(USE="hanim_l_tarsal_middle_phalanx_3")

HAnimHumanoid24.joints.append(HAnimJoint1219)
HAnimJoint1220 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_phalanx_3")

HAnimHumanoid24.joints.append(HAnimJoint1220)
HAnimJoint1221 = x3d.HAnimJoint(USE="hanim_l_calcaneus")

HAnimHumanoid24.joints.append(HAnimJoint1221)
HAnimJoint1222 = x3d.HAnimJoint(USE="hanim_l_cuboid")

HAnimHumanoid24.joints.append(HAnimJoint1222)
HAnimJoint1223 = x3d.HAnimJoint(USE="hanim_l_metatarsal_4")

HAnimHumanoid24.joints.append(HAnimJoint1223)
HAnimJoint1224 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_phalanx_4")

HAnimHumanoid24.joints.append(HAnimJoint1224)
HAnimJoint1225 = x3d.HAnimJoint(USE="hanim_l_tarsal_middle_phalanx_4")

HAnimHumanoid24.joints.append(HAnimJoint1225)
HAnimJoint1226 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_phalanx_4")

HAnimHumanoid24.joints.append(HAnimJoint1226)
HAnimJoint1227 = x3d.HAnimJoint(USE="hanim_l_metatarsal_5")

HAnimHumanoid24.joints.append(HAnimJoint1227)
HAnimJoint1228 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_phalanx_5")

HAnimHumanoid24.joints.append(HAnimJoint1228)
HAnimJoint1229 = x3d.HAnimJoint(USE="hanim_l_tarsal_middle_phalanx_5")

HAnimHumanoid24.joints.append(HAnimJoint1229)
HAnimJoint1230 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_phalanx_5")

HAnimHumanoid24.joints.append(HAnimJoint1230)
HAnimJoint1231 = x3d.HAnimJoint(USE="hanim_r_thigh")

HAnimHumanoid24.joints.append(HAnimJoint1231)
HAnimJoint1232 = x3d.HAnimJoint(USE="hanim_r_calf")

HAnimHumanoid24.joints.append(HAnimJoint1232)
HAnimJoint1233 = x3d.HAnimJoint(USE="hanim_r_talus")

HAnimHumanoid24.joints.append(HAnimJoint1233)
HAnimJoint1234 = x3d.HAnimJoint(USE="hanim_r_navicular")

HAnimHumanoid24.joints.append(HAnimJoint1234)
HAnimJoint1235 = x3d.HAnimJoint(USE="hanim_r_cuneiform_1")

HAnimHumanoid24.joints.append(HAnimJoint1235)
HAnimJoint1236 = x3d.HAnimJoint(USE="hanim_r_metatarsal_1")

HAnimHumanoid24.joints.append(HAnimJoint1236)
HAnimJoint1237 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_phalanx_1")

HAnimHumanoid24.joints.append(HAnimJoint1237)
HAnimJoint1238 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_phalanx_1")

HAnimHumanoid24.joints.append(HAnimJoint1238)
HAnimJoint1239 = x3d.HAnimJoint(USE="hanim_r_cuneiform_2")

HAnimHumanoid24.joints.append(HAnimJoint1239)
HAnimJoint1240 = x3d.HAnimJoint(USE="hanim_r_metatarsal_2")

HAnimHumanoid24.joints.append(HAnimJoint1240)
HAnimJoint1241 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_phalanx_2")

HAnimHumanoid24.joints.append(HAnimJoint1241)
HAnimJoint1242 = x3d.HAnimJoint(USE="hanim_r_tarsal_middle_phalanx_2")

HAnimHumanoid24.joints.append(HAnimJoint1242)
HAnimJoint1243 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_phalanx_2")

HAnimHumanoid24.joints.append(HAnimJoint1243)
HAnimJoint1244 = x3d.HAnimJoint(USE="hanim_r_cuneiform_3")

HAnimHumanoid24.joints.append(HAnimJoint1244)
HAnimJoint1245 = x3d.HAnimJoint(USE="hanim_r_metatarsal_3")

HAnimHumanoid24.joints.append(HAnimJoint1245)
HAnimJoint1246 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_phalanx_3")

HAnimHumanoid24.joints.append(HAnimJoint1246)
HAnimJoint1247 = x3d.HAnimJoint(USE="hanim_r_tarsal_middle_phalanx_3")

HAnimHumanoid24.joints.append(HAnimJoint1247)
HAnimJoint1248 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_phalanx_3")

HAnimHumanoid24.joints.append(HAnimJoint1248)
HAnimJoint1249 = x3d.HAnimJoint(USE="hanim_r_calcaneus")

HAnimHumanoid24.joints.append(HAnimJoint1249)
HAnimJoint1250 = x3d.HAnimJoint(USE="hanim_r_cuboid")

HAnimHumanoid24.joints.append(HAnimJoint1250)
HAnimJoint1251 = x3d.HAnimJoint(USE="hanim_r_metatarsal_4")

HAnimHumanoid24.joints.append(HAnimJoint1251)
HAnimJoint1252 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_phalanx_4")

HAnimHumanoid24.joints.append(HAnimJoint1252)
HAnimJoint1253 = x3d.HAnimJoint(USE="hanim_r_tarsal_middle_phalanx_4")

HAnimHumanoid24.joints.append(HAnimJoint1253)
HAnimJoint1254 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_phalanx_4")

HAnimHumanoid24.joints.append(HAnimJoint1254)
HAnimJoint1255 = x3d.HAnimJoint(USE="hanim_r_metatarsal_5")

HAnimHumanoid24.joints.append(HAnimJoint1255)
HAnimJoint1256 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_phalanx_5")

HAnimHumanoid24.joints.append(HAnimJoint1256)
HAnimJoint1257 = x3d.HAnimJoint(USE="hanim_r_tarsal_middle_phalanx_5")

HAnimHumanoid24.joints.append(HAnimJoint1257)
HAnimJoint1258 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_phalanx_5")

HAnimHumanoid24.joints.append(HAnimJoint1258)
HAnimJoint1259 = x3d.HAnimJoint(USE="hanim_l5")

HAnimHumanoid24.joints.append(HAnimJoint1259)
HAnimJoint1260 = x3d.HAnimJoint(USE="hanim_l4")

HAnimHumanoid24.joints.append(HAnimJoint1260)
HAnimJoint1261 = x3d.HAnimJoint(USE="hanim_l3")

HAnimHumanoid24.joints.append(HAnimJoint1261)
HAnimJoint1262 = x3d.HAnimJoint(USE="hanim_l2")

HAnimHumanoid24.joints.append(HAnimJoint1262)
HAnimJoint1263 = x3d.HAnimJoint(USE="hanim_l1")

HAnimHumanoid24.joints.append(HAnimJoint1263)
HAnimJoint1264 = x3d.HAnimJoint(USE="hanim_t12")

HAnimHumanoid24.joints.append(HAnimJoint1264)
HAnimJoint1265 = x3d.HAnimJoint(USE="hanim_t11")

HAnimHumanoid24.joints.append(HAnimJoint1265)
HAnimJoint1266 = x3d.HAnimJoint(USE="hanim_t10")

HAnimHumanoid24.joints.append(HAnimJoint1266)
HAnimJoint1267 = x3d.HAnimJoint(USE="hanim_t9")

HAnimHumanoid24.joints.append(HAnimJoint1267)
HAnimJoint1268 = x3d.HAnimJoint(USE="hanim_t8")

HAnimHumanoid24.joints.append(HAnimJoint1268)
HAnimJoint1269 = x3d.HAnimJoint(USE="hanim_t7")

HAnimHumanoid24.joints.append(HAnimJoint1269)
HAnimJoint1270 = x3d.HAnimJoint(USE="hanim_t6")

HAnimHumanoid24.joints.append(HAnimJoint1270)
HAnimJoint1271 = x3d.HAnimJoint(USE="hanim_t5")

HAnimHumanoid24.joints.append(HAnimJoint1271)
HAnimJoint1272 = x3d.HAnimJoint(USE="hanim_t4")

HAnimHumanoid24.joints.append(HAnimJoint1272)
HAnimJoint1273 = x3d.HAnimJoint(USE="hanim_t3")

HAnimHumanoid24.joints.append(HAnimJoint1273)
HAnimJoint1274 = x3d.HAnimJoint(USE="hanim_t2")

HAnimHumanoid24.joints.append(HAnimJoint1274)
HAnimJoint1275 = x3d.HAnimJoint(USE="hanim_t1")

HAnimHumanoid24.joints.append(HAnimJoint1275)
HAnimJoint1276 = x3d.HAnimJoint(USE="hanim_c7")

HAnimHumanoid24.joints.append(HAnimJoint1276)
HAnimJoint1277 = x3d.HAnimJoint(USE="hanim_c6")

HAnimHumanoid24.joints.append(HAnimJoint1277)
HAnimJoint1278 = x3d.HAnimJoint(USE="hanim_c5")

HAnimHumanoid24.joints.append(HAnimJoint1278)
HAnimJoint1279 = x3d.HAnimJoint(USE="hanim_c4")

HAnimHumanoid24.joints.append(HAnimJoint1279)
HAnimJoint1280 = x3d.HAnimJoint(USE="hanim_c3")

HAnimHumanoid24.joints.append(HAnimJoint1280)
HAnimJoint1281 = x3d.HAnimJoint(USE="hanim_c2")

HAnimHumanoid24.joints.append(HAnimJoint1281)
HAnimJoint1282 = x3d.HAnimJoint(USE="hanim_c1")

HAnimHumanoid24.joints.append(HAnimJoint1282)
HAnimJoint1283 = x3d.HAnimJoint(USE="hanim_skull")

HAnimHumanoid24.joints.append(HAnimJoint1283)
HAnimJoint1284 = x3d.HAnimJoint(USE="hanim_l_eyelid")

HAnimHumanoid24.joints.append(HAnimJoint1284)
HAnimJoint1285 = x3d.HAnimJoint(USE="hanim_r_eyelid")

HAnimHumanoid24.joints.append(HAnimJoint1285)
HAnimJoint1286 = x3d.HAnimJoint(USE="hanim_l_eyeball")

HAnimHumanoid24.joints.append(HAnimJoint1286)
HAnimJoint1287 = x3d.HAnimJoint(USE="hanim_r_eyeball")

HAnimHumanoid24.joints.append(HAnimJoint1287)
HAnimJoint1288 = x3d.HAnimJoint(USE="hanim_l_eyebrow")

HAnimHumanoid24.joints.append(HAnimJoint1288)
HAnimJoint1289 = x3d.HAnimJoint(USE="hanim_r_eyebrow")

HAnimHumanoid24.joints.append(HAnimJoint1289)
HAnimJoint1290 = x3d.HAnimJoint(USE="hanim_jaw")

HAnimHumanoid24.joints.append(HAnimJoint1290)
HAnimJoint1291 = x3d.HAnimJoint(USE="hanim_l_clavicle")

HAnimHumanoid24.joints.append(HAnimJoint1291)
HAnimJoint1292 = x3d.HAnimJoint(USE="hanim_l_scapula")

HAnimHumanoid24.joints.append(HAnimJoint1292)
HAnimJoint1293 = x3d.HAnimJoint(USE="hanim_l_upperarm")

HAnimHumanoid24.joints.append(HAnimJoint1293)
HAnimJoint1294 = x3d.HAnimJoint(USE="hanim_l_forearm")

HAnimHumanoid24.joints.append(HAnimJoint1294)
HAnimJoint1295 = x3d.HAnimJoint(USE="hanim_l_carpal")

HAnimHumanoid24.joints.append(HAnimJoint1295)
HAnimJoint1296 = x3d.HAnimJoint(USE="hanim_l_trapezium")

HAnimHumanoid24.joints.append(HAnimJoint1296)
HAnimJoint1297 = x3d.HAnimJoint(USE="hanim_l_metacarpal_1")

HAnimHumanoid24.joints.append(HAnimJoint1297)
HAnimJoint1298 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_phalanx_1")

HAnimHumanoid24.joints.append(HAnimJoint1298)
HAnimJoint1299 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_phalanx_1")

HAnimHumanoid24.joints.append(HAnimJoint1299)
HAnimJoint1300 = x3d.HAnimJoint(USE="hanim_l_trapezoid")

HAnimHumanoid24.joints.append(HAnimJoint1300)
HAnimJoint1301 = x3d.HAnimJoint(USE="hanim_l_metacarpal_2")

HAnimHumanoid24.joints.append(HAnimJoint1301)
HAnimJoint1302 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_phalanx_2")

HAnimHumanoid24.joints.append(HAnimJoint1302)
HAnimJoint1303 = x3d.HAnimJoint(USE="hanim_l_carpal_middle_phalanx_2")

HAnimHumanoid24.joints.append(HAnimJoint1303)
HAnimJoint1304 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_phalanx_2")

HAnimHumanoid24.joints.append(HAnimJoint1304)
HAnimJoint1305 = x3d.HAnimJoint(USE="hanim_l_capitate")

HAnimHumanoid24.joints.append(HAnimJoint1305)
HAnimJoint1306 = x3d.HAnimJoint(USE="hanim_l_metacarpal_3")

HAnimHumanoid24.joints.append(HAnimJoint1306)
HAnimJoint1307 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_phalanx_3")

HAnimHumanoid24.joints.append(HAnimJoint1307)
HAnimJoint1308 = x3d.HAnimJoint(USE="hanim_l_carpal_middle_phalanx_3")

HAnimHumanoid24.joints.append(HAnimJoint1308)
HAnimJoint1309 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_phalanx_3")

HAnimHumanoid24.joints.append(HAnimJoint1309)
HAnimJoint1310 = x3d.HAnimJoint(USE="hanim_l_hamate")

HAnimHumanoid24.joints.append(HAnimJoint1310)
HAnimJoint1311 = x3d.HAnimJoint(USE="hanim_l_metacarpal_4")

HAnimHumanoid24.joints.append(HAnimJoint1311)
HAnimJoint1312 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_phalanx_4")

HAnimHumanoid24.joints.append(HAnimJoint1312)
HAnimJoint1313 = x3d.HAnimJoint(USE="hanim_l_carpal_middle_phalanx_4")

HAnimHumanoid24.joints.append(HAnimJoint1313)
HAnimJoint1314 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_phalanx_4")

HAnimHumanoid24.joints.append(HAnimJoint1314)
HAnimJoint1315 = x3d.HAnimJoint(USE="hanim_l_metacarpal_5")

HAnimHumanoid24.joints.append(HAnimJoint1315)
HAnimJoint1316 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_phalanx_5")

HAnimHumanoid24.joints.append(HAnimJoint1316)
HAnimJoint1317 = x3d.HAnimJoint(USE="hanim_l_carpal_middle_phalanx_5")

HAnimHumanoid24.joints.append(HAnimJoint1317)
HAnimJoint1318 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_phalanx_5")

HAnimHumanoid24.joints.append(HAnimJoint1318)
HAnimJoint1319 = x3d.HAnimJoint(USE="hanim_r_clavicle")

HAnimHumanoid24.joints.append(HAnimJoint1319)
HAnimJoint1320 = x3d.HAnimJoint(USE="hanim_r_scapula")

HAnimHumanoid24.joints.append(HAnimJoint1320)
HAnimJoint1321 = x3d.HAnimJoint(USE="hanim_r_upperarm")

HAnimHumanoid24.joints.append(HAnimJoint1321)
HAnimJoint1322 = x3d.HAnimJoint(USE="hanim_r_forearm")

HAnimHumanoid24.joints.append(HAnimJoint1322)
HAnimJoint1323 = x3d.HAnimJoint(USE="hanim_r_carpal")

HAnimHumanoid24.joints.append(HAnimJoint1323)
HAnimJoint1324 = x3d.HAnimJoint(USE="hanim_r_trapezium")

HAnimHumanoid24.joints.append(HAnimJoint1324)
HAnimJoint1325 = x3d.HAnimJoint(USE="hanim_r_metacarpal_1")

HAnimHumanoid24.joints.append(HAnimJoint1325)
HAnimJoint1326 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_phalanx_1")

HAnimHumanoid24.joints.append(HAnimJoint1326)
HAnimJoint1327 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_phalanx_1")

HAnimHumanoid24.joints.append(HAnimJoint1327)
HAnimJoint1328 = x3d.HAnimJoint(USE="hanim_r_trapezoid")

HAnimHumanoid24.joints.append(HAnimJoint1328)
HAnimJoint1329 = x3d.HAnimJoint(USE="hanim_r_metacarpal_2")

HAnimHumanoid24.joints.append(HAnimJoint1329)
HAnimJoint1330 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_phalanx_2")

HAnimHumanoid24.joints.append(HAnimJoint1330)
HAnimJoint1331 = x3d.HAnimJoint(USE="hanim_r_carpal_middle_phalanx_2")

HAnimHumanoid24.joints.append(HAnimJoint1331)
HAnimJoint1332 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_phalanx_2")

HAnimHumanoid24.joints.append(HAnimJoint1332)
HAnimJoint1333 = x3d.HAnimJoint(USE="hanim_r_capitate")

HAnimHumanoid24.joints.append(HAnimJoint1333)
HAnimJoint1334 = x3d.HAnimJoint(USE="hanim_r_metacarpal_3")

HAnimHumanoid24.joints.append(HAnimJoint1334)
HAnimJoint1335 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_phalanx_3")

HAnimHumanoid24.joints.append(HAnimJoint1335)
HAnimJoint1336 = x3d.HAnimJoint(USE="hanim_r_carpal_middle_phalanx_3")

HAnimHumanoid24.joints.append(HAnimJoint1336)
HAnimJoint1337 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_phalanx_3")

HAnimHumanoid24.joints.append(HAnimJoint1337)
HAnimJoint1338 = x3d.HAnimJoint(USE="hanim_r_hamate")

HAnimHumanoid24.joints.append(HAnimJoint1338)
HAnimJoint1339 = x3d.HAnimJoint(USE="hanim_r_metacarpal_4")

HAnimHumanoid24.joints.append(HAnimJoint1339)
HAnimJoint1340 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_phalanx_4")

HAnimHumanoid24.joints.append(HAnimJoint1340)
HAnimJoint1341 = x3d.HAnimJoint(USE="hanim_r_carpal_middle_phalanx_4")

HAnimHumanoid24.joints.append(HAnimJoint1341)
HAnimJoint1342 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_phalanx_4")

HAnimHumanoid24.joints.append(HAnimJoint1342)
HAnimJoint1343 = x3d.HAnimJoint(USE="hanim_r_metacarpal_5")

HAnimHumanoid24.joints.append(HAnimJoint1343)
HAnimJoint1344 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_phalanx_5")

HAnimHumanoid24.joints.append(HAnimJoint1344)
HAnimJoint1345 = x3d.HAnimJoint(USE="hanim_r_carpal_middle_phalanx_5")

HAnimHumanoid24.joints.append(HAnimJoint1345)
HAnimJoint1346 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_phalanx_5")

HAnimHumanoid24.joints.append(HAnimJoint1346)

Transform23.children.append(HAnimHumanoid24)

Scene6.children.append(Transform23)
TimeSensor1347 = x3d.TimeSensor(DEF="Armature_Clock")
TimeSensor1347.cycleInterval = 10.4166666666667
TimeSensor1347.loop = True

Scene6.children.append(TimeSensor1347)
ProximitySensor1348 = x3d.ProximitySensor(DEF="Armature_Close")
ProximitySensor1348.size = [1000000,1000000,1000000]

Scene6.children.append(ProximitySensor1348)
OrientationInterpolator1349 = x3d.OrientationInterpolator(DEF="Armature_OI_sacrum")
OrientationInterpolator1349.key = [0,1]
OrientationInterpolator1349.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1349)
OrientationInterpolator1350 = x3d.OrientationInterpolator(DEF="Armature_OI_pelvis")
OrientationInterpolator1350.key = [0,1]
OrientationInterpolator1350.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1350)
OrientationInterpolator1351 = x3d.OrientationInterpolator(DEF="Armature_OI_l_thigh")
OrientationInterpolator1351.key = [0,1]
OrientationInterpolator1351.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1351)
OrientationInterpolator1352 = x3d.OrientationInterpolator(DEF="Armature_OI_l_calf")
OrientationInterpolator1352.key = [0,1]
OrientationInterpolator1352.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1352)
OrientationInterpolator1353 = x3d.OrientationInterpolator(DEF="Armature_OI_l_talus")
OrientationInterpolator1353.key = [0,1]
OrientationInterpolator1353.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1353)
OrientationInterpolator1354 = x3d.OrientationInterpolator(DEF="Armature_OI_l_navicular")
OrientationInterpolator1354.key = [0,1]
OrientationInterpolator1354.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1354)
OrientationInterpolator1355 = x3d.OrientationInterpolator(DEF="Armature_OI_l_cuneiform_1")
OrientationInterpolator1355.key = [0,1]
OrientationInterpolator1355.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1355)
OrientationInterpolator1356 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metatarsal_1")
OrientationInterpolator1356.key = [0,1]
OrientationInterpolator1356.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1356)
OrientationInterpolator1357 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_proximal_phalanx_1")
OrientationInterpolator1357.key = [0,1]
OrientationInterpolator1357.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1357)
OrientationInterpolator1358 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_distal_phalanx_1")
OrientationInterpolator1358.key = [0,1]
OrientationInterpolator1358.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1358)
OrientationInterpolator1359 = x3d.OrientationInterpolator(DEF="Armature_OI_l_cuneiform_2")
OrientationInterpolator1359.key = [0,1]
OrientationInterpolator1359.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1359)
OrientationInterpolator1360 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metatarsal_2")
OrientationInterpolator1360.key = [0,1]
OrientationInterpolator1360.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1360)
OrientationInterpolator1361 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_proximal_phalanx_2")
OrientationInterpolator1361.key = [0,1]
OrientationInterpolator1361.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1361)
OrientationInterpolator1362 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_middle_phalanx_2")
OrientationInterpolator1362.key = [0,1]
OrientationInterpolator1362.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1362)
OrientationInterpolator1363 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_distal_phalanx_2")
OrientationInterpolator1363.key = [0,1]
OrientationInterpolator1363.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1363)
OrientationInterpolator1364 = x3d.OrientationInterpolator(DEF="Armature_OI_l_cuneiform_3")
OrientationInterpolator1364.key = [0,1]
OrientationInterpolator1364.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1364)
OrientationInterpolator1365 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metatarsal_3")
OrientationInterpolator1365.key = [0,1]
OrientationInterpolator1365.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1365)
OrientationInterpolator1366 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_proximal_phalanx_3")
OrientationInterpolator1366.key = [0,1]
OrientationInterpolator1366.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1366)
OrientationInterpolator1367 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_middle_phalanx_3")
OrientationInterpolator1367.key = [0,1]
OrientationInterpolator1367.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1367)
OrientationInterpolator1368 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_distal_phalanx_3")
OrientationInterpolator1368.key = [0,1]
OrientationInterpolator1368.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1368)
OrientationInterpolator1369 = x3d.OrientationInterpolator(DEF="Armature_OI_l_calcaneus")
OrientationInterpolator1369.key = [0,1]
OrientationInterpolator1369.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1369)
OrientationInterpolator1370 = x3d.OrientationInterpolator(DEF="Armature_OI_l_cuboid")
OrientationInterpolator1370.key = [0,1]
OrientationInterpolator1370.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1370)
OrientationInterpolator1371 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metatarsal_4")
OrientationInterpolator1371.key = [0,1]
OrientationInterpolator1371.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1371)
OrientationInterpolator1372 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_proximal_phalanx_4")
OrientationInterpolator1372.key = [0,1]
OrientationInterpolator1372.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1372)
OrientationInterpolator1373 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_middle_phalanx_4")
OrientationInterpolator1373.key = [0,1]
OrientationInterpolator1373.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1373)
OrientationInterpolator1374 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_distal_phalanx_4")
OrientationInterpolator1374.key = [0,1]
OrientationInterpolator1374.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1374)
OrientationInterpolator1375 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metatarsal_5")
OrientationInterpolator1375.key = [0,1]
OrientationInterpolator1375.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1375)
OrientationInterpolator1376 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_proximal_phalanx_5")
OrientationInterpolator1376.key = [0,1]
OrientationInterpolator1376.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1376)
OrientationInterpolator1377 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_middle_phalanx_5")
OrientationInterpolator1377.key = [0,1]
OrientationInterpolator1377.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1377)
OrientationInterpolator1378 = x3d.OrientationInterpolator(DEF="Armature_OI_l_tarsal_distal_phalanx_5")
OrientationInterpolator1378.key = [0,1]
OrientationInterpolator1378.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1378)
OrientationInterpolator1379 = x3d.OrientationInterpolator(DEF="Armature_OI_r_thigh")
OrientationInterpolator1379.key = [0,1]
OrientationInterpolator1379.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1379)
OrientationInterpolator1380 = x3d.OrientationInterpolator(DEF="Armature_OI_r_calf")
OrientationInterpolator1380.key = [0,1]
OrientationInterpolator1380.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1380)
OrientationInterpolator1381 = x3d.OrientationInterpolator(DEF="Armature_OI_r_talus")
OrientationInterpolator1381.key = [0,1]
OrientationInterpolator1381.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1381)
OrientationInterpolator1382 = x3d.OrientationInterpolator(DEF="Armature_OI_r_navicular")
OrientationInterpolator1382.key = [0,1]
OrientationInterpolator1382.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1382)
OrientationInterpolator1383 = x3d.OrientationInterpolator(DEF="Armature_OI_r_cuneiform_1")
OrientationInterpolator1383.key = [0,1]
OrientationInterpolator1383.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1383)
OrientationInterpolator1384 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metatarsal_1")
OrientationInterpolator1384.key = [0,1]
OrientationInterpolator1384.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1384)
OrientationInterpolator1385 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_proximal_phalanx_1")
OrientationInterpolator1385.key = [0,1]
OrientationInterpolator1385.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1385)
OrientationInterpolator1386 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_distal_phalanx_1")
OrientationInterpolator1386.key = [0,1]
OrientationInterpolator1386.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1386)
OrientationInterpolator1387 = x3d.OrientationInterpolator(DEF="Armature_OI_r_cuneiform_2")
OrientationInterpolator1387.key = [0,1]
OrientationInterpolator1387.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1387)
OrientationInterpolator1388 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metatarsal_2")
OrientationInterpolator1388.key = [0,1]
OrientationInterpolator1388.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1388)
OrientationInterpolator1389 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_proximal_phalanx_2")
OrientationInterpolator1389.key = [0,1]
OrientationInterpolator1389.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1389)
OrientationInterpolator1390 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_middle_phalanx_2")
OrientationInterpolator1390.key = [0,1]
OrientationInterpolator1390.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1390)
OrientationInterpolator1391 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_distal_phalanx_2")
OrientationInterpolator1391.key = [0,1]
OrientationInterpolator1391.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1391)
OrientationInterpolator1392 = x3d.OrientationInterpolator(DEF="Armature_OI_r_cuneiform_3")
OrientationInterpolator1392.key = [0,1]
OrientationInterpolator1392.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1392)
OrientationInterpolator1393 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metatarsal_3")
OrientationInterpolator1393.key = [0,1]
OrientationInterpolator1393.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1393)
OrientationInterpolator1394 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_proximal_phalanx_3")
OrientationInterpolator1394.key = [0,1]
OrientationInterpolator1394.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1394)
OrientationInterpolator1395 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_middle_phalanx_3")
OrientationInterpolator1395.key = [0,1]
OrientationInterpolator1395.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1395)
OrientationInterpolator1396 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_distal_phalanx_3")
OrientationInterpolator1396.key = [0,1]
OrientationInterpolator1396.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1396)
OrientationInterpolator1397 = x3d.OrientationInterpolator(DEF="Armature_OI_r_calcaneus")
OrientationInterpolator1397.key = [0,1]
OrientationInterpolator1397.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1397)
OrientationInterpolator1398 = x3d.OrientationInterpolator(DEF="Armature_OI_r_cuboid")
OrientationInterpolator1398.key = [0,1]
OrientationInterpolator1398.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1398)
OrientationInterpolator1399 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metatarsal_4")
OrientationInterpolator1399.key = [0,1]
OrientationInterpolator1399.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1399)
OrientationInterpolator1400 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_proximal_phalanx_4")
OrientationInterpolator1400.key = [0,1]
OrientationInterpolator1400.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1400)
OrientationInterpolator1401 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_middle_phalanx_4")
OrientationInterpolator1401.key = [0,1]
OrientationInterpolator1401.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1401)
OrientationInterpolator1402 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_distal_phalanx_4")
OrientationInterpolator1402.key = [0,1]
OrientationInterpolator1402.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1402)
OrientationInterpolator1403 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metatarsal_5")
OrientationInterpolator1403.key = [0,1]
OrientationInterpolator1403.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1403)
OrientationInterpolator1404 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_proximal_phalanx_5")
OrientationInterpolator1404.key = [0,1]
OrientationInterpolator1404.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1404)
OrientationInterpolator1405 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_middle_phalanx_5")
OrientationInterpolator1405.key = [0,1]
OrientationInterpolator1405.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1405)
OrientationInterpolator1406 = x3d.OrientationInterpolator(DEF="Armature_OI_r_tarsal_distal_phalanx_5")
OrientationInterpolator1406.key = [0,1]
OrientationInterpolator1406.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1406)
OrientationInterpolator1407 = x3d.OrientationInterpolator(DEF="Armature_OI_l5")
OrientationInterpolator1407.key = [0,1]
OrientationInterpolator1407.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1407)
OrientationInterpolator1408 = x3d.OrientationInterpolator(DEF="Armature_OI_l4")
OrientationInterpolator1408.key = [0,1]
OrientationInterpolator1408.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1408)
OrientationInterpolator1409 = x3d.OrientationInterpolator(DEF="Armature_OI_l3")
OrientationInterpolator1409.key = [0,1]
OrientationInterpolator1409.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1409)
OrientationInterpolator1410 = x3d.OrientationInterpolator(DEF="Armature_OI_l2")
OrientationInterpolator1410.key = [0,1]
OrientationInterpolator1410.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1410)
OrientationInterpolator1411 = x3d.OrientationInterpolator(DEF="Armature_OI_l1")
OrientationInterpolator1411.key = [0,1]
OrientationInterpolator1411.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1411)
OrientationInterpolator1412 = x3d.OrientationInterpolator(DEF="Armature_OI_t12")
OrientationInterpolator1412.key = [0,1]
OrientationInterpolator1412.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1412)
OrientationInterpolator1413 = x3d.OrientationInterpolator(DEF="Armature_OI_t11")
OrientationInterpolator1413.key = [0,1]
OrientationInterpolator1413.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1413)
OrientationInterpolator1414 = x3d.OrientationInterpolator(DEF="Armature_OI_t10")
OrientationInterpolator1414.key = [0,1]
OrientationInterpolator1414.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1414)
OrientationInterpolator1415 = x3d.OrientationInterpolator(DEF="Armature_OI_t9")
OrientationInterpolator1415.key = [0,1]
OrientationInterpolator1415.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1415)
OrientationInterpolator1416 = x3d.OrientationInterpolator(DEF="Armature_OI_t8")
OrientationInterpolator1416.key = [0,1]
OrientationInterpolator1416.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1416)
OrientationInterpolator1417 = x3d.OrientationInterpolator(DEF="Armature_OI_t7")
OrientationInterpolator1417.key = [0,1]
OrientationInterpolator1417.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1417)
OrientationInterpolator1418 = x3d.OrientationInterpolator(DEF="Armature_OI_t6")
OrientationInterpolator1418.key = [0,1]
OrientationInterpolator1418.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1418)
OrientationInterpolator1419 = x3d.OrientationInterpolator(DEF="Armature_OI_t5")
OrientationInterpolator1419.key = [0,1]
OrientationInterpolator1419.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1419)
OrientationInterpolator1420 = x3d.OrientationInterpolator(DEF="Armature_OI_t4")
OrientationInterpolator1420.key = [0,1]
OrientationInterpolator1420.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1420)
OrientationInterpolator1421 = x3d.OrientationInterpolator(DEF="Armature_OI_t3")
OrientationInterpolator1421.key = [0,1]
OrientationInterpolator1421.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1421)
OrientationInterpolator1422 = x3d.OrientationInterpolator(DEF="Armature_OI_t2")
OrientationInterpolator1422.key = [0,1]
OrientationInterpolator1422.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1422)
OrientationInterpolator1423 = x3d.OrientationInterpolator(DEF="Armature_OI_t1")
OrientationInterpolator1423.key = [0,1]
OrientationInterpolator1423.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1423)
OrientationInterpolator1424 = x3d.OrientationInterpolator(DEF="Armature_OI_c7")
OrientationInterpolator1424.key = [0,1]
OrientationInterpolator1424.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1424)
OrientationInterpolator1425 = x3d.OrientationInterpolator(DEF="Armature_OI_c6")
OrientationInterpolator1425.key = [0,1]
OrientationInterpolator1425.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1425)
OrientationInterpolator1426 = x3d.OrientationInterpolator(DEF="Armature_OI_c5")
OrientationInterpolator1426.key = [0,1]
OrientationInterpolator1426.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1426)
OrientationInterpolator1427 = x3d.OrientationInterpolator(DEF="Armature_OI_c4")
OrientationInterpolator1427.key = [0,1]
OrientationInterpolator1427.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1427)
OrientationInterpolator1428 = x3d.OrientationInterpolator(DEF="Armature_OI_c3")
OrientationInterpolator1428.key = [0,1]
OrientationInterpolator1428.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1428)
OrientationInterpolator1429 = x3d.OrientationInterpolator(DEF="Armature_OI_c2")
OrientationInterpolator1429.key = [0,1]
OrientationInterpolator1429.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1429)
OrientationInterpolator1430 = x3d.OrientationInterpolator(DEF="Armature_OI_c1")
OrientationInterpolator1430.key = [0,1]
OrientationInterpolator1430.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1430)
OrientationInterpolator1431 = x3d.OrientationInterpolator(DEF="Armature_OI_skull")
OrientationInterpolator1431.key = [0,1]
OrientationInterpolator1431.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1431)
OrientationInterpolator1432 = x3d.OrientationInterpolator(DEF="Armature_OI_l_eyelid")
OrientationInterpolator1432.key = [0,1]
OrientationInterpolator1432.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1432)
OrientationInterpolator1433 = x3d.OrientationInterpolator(DEF="Armature_OI_r_eyelid")
OrientationInterpolator1433.key = [0,1]
OrientationInterpolator1433.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1433)
OrientationInterpolator1434 = x3d.OrientationInterpolator(DEF="Armature_OI_l_eyeball")
OrientationInterpolator1434.key = [0,1]
OrientationInterpolator1434.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1434)
OrientationInterpolator1435 = x3d.OrientationInterpolator(DEF="Armature_OI_r_eyeball")
OrientationInterpolator1435.key = [0,1]
OrientationInterpolator1435.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1435)
OrientationInterpolator1436 = x3d.OrientationInterpolator(DEF="Armature_OI_l_eyebrow")
OrientationInterpolator1436.key = [0,1]
OrientationInterpolator1436.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1436)
OrientationInterpolator1437 = x3d.OrientationInterpolator(DEF="Armature_OI_r_eyebrow")
OrientationInterpolator1437.key = [0,1]
OrientationInterpolator1437.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1437)
OrientationInterpolator1438 = x3d.OrientationInterpolator(DEF="Armature_OI_jaw")
OrientationInterpolator1438.key = [0,1]
OrientationInterpolator1438.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1438)
OrientationInterpolator1439 = x3d.OrientationInterpolator(DEF="Armature_OI_l_clavicle")
OrientationInterpolator1439.key = [0,1]
OrientationInterpolator1439.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1439)
OrientationInterpolator1440 = x3d.OrientationInterpolator(DEF="Armature_OI_l_scapula")
OrientationInterpolator1440.key = [0,1]
OrientationInterpolator1440.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1440)
OrientationInterpolator1441 = x3d.OrientationInterpolator(DEF="Armature_OI_l_upperarm")
OrientationInterpolator1441.key = [0,1]
OrientationInterpolator1441.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1441)
OrientationInterpolator1442 = x3d.OrientationInterpolator(DEF="Armature_OI_l_forearm")
OrientationInterpolator1442.key = [0,1]
OrientationInterpolator1442.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1442)
OrientationInterpolator1443 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal")
OrientationInterpolator1443.key = [0,1]
OrientationInterpolator1443.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1443)
OrientationInterpolator1444 = x3d.OrientationInterpolator(DEF="Armature_OI_l_trapezium")
OrientationInterpolator1444.key = [0,1]
OrientationInterpolator1444.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1444)
OrientationInterpolator1445 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metacarpal_1")
OrientationInterpolator1445.key = [0,1]
OrientationInterpolator1445.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1445)
OrientationInterpolator1446 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_proximal_phalanx_1")
OrientationInterpolator1446.key = [0,1]
OrientationInterpolator1446.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1446)
OrientationInterpolator1447 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_distal_phalanx_1")
OrientationInterpolator1447.key = [0,1]
OrientationInterpolator1447.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1447)
OrientationInterpolator1448 = x3d.OrientationInterpolator(DEF="Armature_OI_l_trapezoid")
OrientationInterpolator1448.key = [0,1]
OrientationInterpolator1448.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1448)
OrientationInterpolator1449 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metacarpal_2")
OrientationInterpolator1449.key = [0,1]
OrientationInterpolator1449.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1449)
OrientationInterpolator1450 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_proximal_phalanx_2")
OrientationInterpolator1450.key = [0,1]
OrientationInterpolator1450.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1450)
OrientationInterpolator1451 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_middle_phalanx_2")
OrientationInterpolator1451.key = [0,1]
OrientationInterpolator1451.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1451)
OrientationInterpolator1452 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_distal_phalanx_2")
OrientationInterpolator1452.key = [0,1]
OrientationInterpolator1452.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1452)
OrientationInterpolator1453 = x3d.OrientationInterpolator(DEF="Armature_OI_l_capitate")
OrientationInterpolator1453.key = [0,1]
OrientationInterpolator1453.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1453)
OrientationInterpolator1454 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metacarpal_3")
OrientationInterpolator1454.key = [0,1]
OrientationInterpolator1454.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1454)
OrientationInterpolator1455 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_proximal_phalanx_3")
OrientationInterpolator1455.key = [0,1]
OrientationInterpolator1455.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1455)
OrientationInterpolator1456 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_middle_phalanx_3")
OrientationInterpolator1456.key = [0,1]
OrientationInterpolator1456.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1456)
OrientationInterpolator1457 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_distal_phalanx_3")
OrientationInterpolator1457.key = [0,1]
OrientationInterpolator1457.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1457)
OrientationInterpolator1458 = x3d.OrientationInterpolator(DEF="Armature_OI_l_hamate")
OrientationInterpolator1458.key = [0,1]
OrientationInterpolator1458.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1458)
OrientationInterpolator1459 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metacarpal_4")
OrientationInterpolator1459.key = [0,1]
OrientationInterpolator1459.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1459)
OrientationInterpolator1460 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_proximal_phalanx_4")
OrientationInterpolator1460.key = [0,1]
OrientationInterpolator1460.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1460)
OrientationInterpolator1461 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_middle_phalanx_4")
OrientationInterpolator1461.key = [0,1]
OrientationInterpolator1461.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1461)
OrientationInterpolator1462 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_distal_phalanx_4")
OrientationInterpolator1462.key = [0,1]
OrientationInterpolator1462.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1462)
OrientationInterpolator1463 = x3d.OrientationInterpolator(DEF="Armature_OI_l_metacarpal_5")
OrientationInterpolator1463.key = [0,1]
OrientationInterpolator1463.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1463)
OrientationInterpolator1464 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_proximal_phalanx_5")
OrientationInterpolator1464.key = [0,1]
OrientationInterpolator1464.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1464)
OrientationInterpolator1465 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_middle_phalanx_5")
OrientationInterpolator1465.key = [0,1]
OrientationInterpolator1465.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1465)
OrientationInterpolator1466 = x3d.OrientationInterpolator(DEF="Armature_OI_l_carpal_distal_phalanx_5")
OrientationInterpolator1466.key = [0,1]
OrientationInterpolator1466.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1466)
OrientationInterpolator1467 = x3d.OrientationInterpolator(DEF="Armature_OI_r_clavicle")
OrientationInterpolator1467.key = [0,1]
OrientationInterpolator1467.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1467)
OrientationInterpolator1468 = x3d.OrientationInterpolator(DEF="Armature_OI_r_scapula")
OrientationInterpolator1468.key = [0,1]
OrientationInterpolator1468.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1468)
OrientationInterpolator1469 = x3d.OrientationInterpolator(DEF="Armature_OI_r_upperarm")
OrientationInterpolator1469.key = [0,1]
OrientationInterpolator1469.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1469)
OrientationInterpolator1470 = x3d.OrientationInterpolator(DEF="Armature_OI_r_forearm")
OrientationInterpolator1470.key = [0,1]
OrientationInterpolator1470.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1470)
OrientationInterpolator1471 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal")
OrientationInterpolator1471.key = [0,1]
OrientationInterpolator1471.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1471)
OrientationInterpolator1472 = x3d.OrientationInterpolator(DEF="Armature_OI_r_trapezium")
OrientationInterpolator1472.key = [0,1]
OrientationInterpolator1472.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1472)
OrientationInterpolator1473 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metacarpal_1")
OrientationInterpolator1473.key = [0,1]
OrientationInterpolator1473.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1473)
OrientationInterpolator1474 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_proximal_phalanx_1")
OrientationInterpolator1474.key = [0,1]
OrientationInterpolator1474.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1474)
OrientationInterpolator1475 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_distal_phalanx_1")
OrientationInterpolator1475.key = [0,1]
OrientationInterpolator1475.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1475)
OrientationInterpolator1476 = x3d.OrientationInterpolator(DEF="Armature_OI_r_trapezoid")
OrientationInterpolator1476.key = [0,1]
OrientationInterpolator1476.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1476)
OrientationInterpolator1477 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metacarpal_2")
OrientationInterpolator1477.key = [0,1]
OrientationInterpolator1477.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1477)
OrientationInterpolator1478 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_proximal_phalanx_2")
OrientationInterpolator1478.key = [0,1]
OrientationInterpolator1478.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1478)
OrientationInterpolator1479 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_middle_phalanx_2")
OrientationInterpolator1479.key = [0,1]
OrientationInterpolator1479.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1479)
OrientationInterpolator1480 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_distal_phalanx_2")
OrientationInterpolator1480.key = [0,1]
OrientationInterpolator1480.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1480)
OrientationInterpolator1481 = x3d.OrientationInterpolator(DEF="Armature_OI_r_capitate")
OrientationInterpolator1481.key = [0,1]
OrientationInterpolator1481.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1481)
OrientationInterpolator1482 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metacarpal_3")
OrientationInterpolator1482.key = [0,1]
OrientationInterpolator1482.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1482)
OrientationInterpolator1483 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_proximal_phalanx_3")
OrientationInterpolator1483.key = [0,1]
OrientationInterpolator1483.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1483)
OrientationInterpolator1484 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_middle_phalanx_3")
OrientationInterpolator1484.key = [0,1]
OrientationInterpolator1484.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1484)
OrientationInterpolator1485 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_distal_phalanx_3")
OrientationInterpolator1485.key = [0,1]
OrientationInterpolator1485.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1485)
OrientationInterpolator1486 = x3d.OrientationInterpolator(DEF="Armature_OI_r_hamate")
OrientationInterpolator1486.key = [0,1]
OrientationInterpolator1486.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1486)
OrientationInterpolator1487 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metacarpal_4")
OrientationInterpolator1487.key = [0,1]
OrientationInterpolator1487.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1487)
OrientationInterpolator1488 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_proximal_phalanx_4")
OrientationInterpolator1488.key = [0,1]
OrientationInterpolator1488.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1488)
OrientationInterpolator1489 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_middle_phalanx_4")
OrientationInterpolator1489.key = [0,1]
OrientationInterpolator1489.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1489)
OrientationInterpolator1490 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_distal_phalanx_4")
OrientationInterpolator1490.key = [0,1]
OrientationInterpolator1490.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1490)
OrientationInterpolator1491 = x3d.OrientationInterpolator(DEF="Armature_OI_r_metacarpal_5")
OrientationInterpolator1491.key = [0,1]
OrientationInterpolator1491.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1491)
OrientationInterpolator1492 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_proximal_phalanx_5")
OrientationInterpolator1492.key = [0,1]
OrientationInterpolator1492.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1492)
OrientationInterpolator1493 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_middle_phalanx_5")
OrientationInterpolator1493.key = [0,1]
OrientationInterpolator1493.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1493)
OrientationInterpolator1494 = x3d.OrientationInterpolator(DEF="Armature_OI_r_carpal_distal_phalanx_5")
OrientationInterpolator1494.key = [0,1]
OrientationInterpolator1494.keyValue = [(0, 0, 0, 0),(0, 0, 0, 0)]

Scene6.children.append(OrientationInterpolator1494)
ROUTE1495 = x3d.ROUTE()
ROUTE1495.fromNode = "Armature_Close"
ROUTE1495.fromField = "enterTime"
ROUTE1495.toNode = "Armature_Clock"
ROUTE1495.toField = "set_startTime"

Scene6.children.append(ROUTE1495)
ROUTE1496 = x3d.ROUTE()
ROUTE1496.fromNode = "Armature_Clock"
ROUTE1496.fromField = "fraction_changed"
ROUTE1496.toNode = "Armature_OI_sacrum"
ROUTE1496.toField = "set_fraction"

Scene6.children.append(ROUTE1496)
ROUTE1497 = x3d.ROUTE()
ROUTE1497.fromNode = "Armature_OI_sacrum"
ROUTE1497.fromField = "value_changed"
ROUTE1497.toNode = "hanim_sacrum"
ROUTE1497.toField = "set_rotation"

Scene6.children.append(ROUTE1497)
ROUTE1498 = x3d.ROUTE()
ROUTE1498.fromNode = "Armature_Clock"
ROUTE1498.fromField = "fraction_changed"
ROUTE1498.toNode = "Armature_OI_pelvis"
ROUTE1498.toField = "set_fraction"

Scene6.children.append(ROUTE1498)
ROUTE1499 = x3d.ROUTE()
ROUTE1499.fromNode = "Armature_OI_pelvis"
ROUTE1499.fromField = "value_changed"
ROUTE1499.toNode = "hanim_pelvis"
ROUTE1499.toField = "set_rotation"

Scene6.children.append(ROUTE1499)
ROUTE1500 = x3d.ROUTE()
ROUTE1500.fromNode = "Armature_Clock"
ROUTE1500.fromField = "fraction_changed"
ROUTE1500.toNode = "Armature_OI_l_thigh"
ROUTE1500.toField = "set_fraction"

Scene6.children.append(ROUTE1500)
ROUTE1501 = x3d.ROUTE()
ROUTE1501.fromNode = "Armature_OI_l_thigh"
ROUTE1501.fromField = "value_changed"
ROUTE1501.toNode = "hanim_l_thigh"
ROUTE1501.toField = "set_rotation"

Scene6.children.append(ROUTE1501)
ROUTE1502 = x3d.ROUTE()
ROUTE1502.fromNode = "Armature_Clock"
ROUTE1502.fromField = "fraction_changed"
ROUTE1502.toNode = "Armature_OI_l_calf"
ROUTE1502.toField = "set_fraction"

Scene6.children.append(ROUTE1502)
ROUTE1503 = x3d.ROUTE()
ROUTE1503.fromNode = "Armature_OI_l_calf"
ROUTE1503.fromField = "value_changed"
ROUTE1503.toNode = "hanim_l_calf"
ROUTE1503.toField = "set_rotation"

Scene6.children.append(ROUTE1503)
ROUTE1504 = x3d.ROUTE()
ROUTE1504.fromNode = "Armature_Clock"
ROUTE1504.fromField = "fraction_changed"
ROUTE1504.toNode = "Armature_OI_l_talus"
ROUTE1504.toField = "set_fraction"

Scene6.children.append(ROUTE1504)
ROUTE1505 = x3d.ROUTE()
ROUTE1505.fromNode = "Armature_OI_l_talus"
ROUTE1505.fromField = "value_changed"
ROUTE1505.toNode = "hanim_l_talus"
ROUTE1505.toField = "set_rotation"

Scene6.children.append(ROUTE1505)
ROUTE1506 = x3d.ROUTE()
ROUTE1506.fromNode = "Armature_Clock"
ROUTE1506.fromField = "fraction_changed"
ROUTE1506.toNode = "Armature_OI_l_navicular"
ROUTE1506.toField = "set_fraction"

Scene6.children.append(ROUTE1506)
ROUTE1507 = x3d.ROUTE()
ROUTE1507.fromNode = "Armature_OI_l_navicular"
ROUTE1507.fromField = "value_changed"
ROUTE1507.toNode = "hanim_l_navicular"
ROUTE1507.toField = "set_rotation"

Scene6.children.append(ROUTE1507)
ROUTE1508 = x3d.ROUTE()
ROUTE1508.fromNode = "Armature_Clock"
ROUTE1508.fromField = "fraction_changed"
ROUTE1508.toNode = "Armature_OI_l_cuneiform_1"
ROUTE1508.toField = "set_fraction"

Scene6.children.append(ROUTE1508)
ROUTE1509 = x3d.ROUTE()
ROUTE1509.fromNode = "Armature_OI_l_cuneiform_1"
ROUTE1509.fromField = "value_changed"
ROUTE1509.toNode = "hanim_l_cuneiform_1"
ROUTE1509.toField = "set_rotation"

Scene6.children.append(ROUTE1509)
ROUTE1510 = x3d.ROUTE()
ROUTE1510.fromNode = "Armature_Clock"
ROUTE1510.fromField = "fraction_changed"
ROUTE1510.toNode = "Armature_OI_l_metatarsal_1"
ROUTE1510.toField = "set_fraction"

Scene6.children.append(ROUTE1510)
ROUTE1511 = x3d.ROUTE()
ROUTE1511.fromNode = "Armature_OI_l_metatarsal_1"
ROUTE1511.fromField = "value_changed"
ROUTE1511.toNode = "hanim_l_metatarsal_1"
ROUTE1511.toField = "set_rotation"

Scene6.children.append(ROUTE1511)
ROUTE1512 = x3d.ROUTE()
ROUTE1512.fromNode = "Armature_Clock"
ROUTE1512.fromField = "fraction_changed"
ROUTE1512.toNode = "Armature_OI_l_tarsal_proximal_phalanx_1"
ROUTE1512.toField = "set_fraction"

Scene6.children.append(ROUTE1512)
ROUTE1513 = x3d.ROUTE()
ROUTE1513.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_1"
ROUTE1513.fromField = "value_changed"
ROUTE1513.toNode = "hanim_l_tarsal_proximal_phalanx_1"
ROUTE1513.toField = "set_rotation"

Scene6.children.append(ROUTE1513)
ROUTE1514 = x3d.ROUTE()
ROUTE1514.fromNode = "Armature_Clock"
ROUTE1514.fromField = "fraction_changed"
ROUTE1514.toNode = "Armature_OI_l_tarsal_distal_phalanx_1"
ROUTE1514.toField = "set_fraction"

Scene6.children.append(ROUTE1514)
ROUTE1515 = x3d.ROUTE()
ROUTE1515.fromNode = "Armature_OI_l_tarsal_distal_phalanx_1"
ROUTE1515.fromField = "value_changed"
ROUTE1515.toNode = "hanim_l_tarsal_distal_phalanx_1"
ROUTE1515.toField = "set_rotation"

Scene6.children.append(ROUTE1515)
ROUTE1516 = x3d.ROUTE()
ROUTE1516.fromNode = "Armature_Clock"
ROUTE1516.fromField = "fraction_changed"
ROUTE1516.toNode = "Armature_OI_l_cuneiform_2"
ROUTE1516.toField = "set_fraction"

Scene6.children.append(ROUTE1516)
ROUTE1517 = x3d.ROUTE()
ROUTE1517.fromNode = "Armature_OI_l_cuneiform_2"
ROUTE1517.fromField = "value_changed"
ROUTE1517.toNode = "hanim_l_cuneiform_2"
ROUTE1517.toField = "set_rotation"

Scene6.children.append(ROUTE1517)
ROUTE1518 = x3d.ROUTE()
ROUTE1518.fromNode = "Armature_Clock"
ROUTE1518.fromField = "fraction_changed"
ROUTE1518.toNode = "Armature_OI_l_metatarsal_2"
ROUTE1518.toField = "set_fraction"

Scene6.children.append(ROUTE1518)
ROUTE1519 = x3d.ROUTE()
ROUTE1519.fromNode = "Armature_OI_l_metatarsal_2"
ROUTE1519.fromField = "value_changed"
ROUTE1519.toNode = "hanim_l_metatarsal_2"
ROUTE1519.toField = "set_rotation"

Scene6.children.append(ROUTE1519)
ROUTE1520 = x3d.ROUTE()
ROUTE1520.fromNode = "Armature_Clock"
ROUTE1520.fromField = "fraction_changed"
ROUTE1520.toNode = "Armature_OI_l_tarsal_proximal_phalanx_2"
ROUTE1520.toField = "set_fraction"

Scene6.children.append(ROUTE1520)
ROUTE1521 = x3d.ROUTE()
ROUTE1521.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_2"
ROUTE1521.fromField = "value_changed"
ROUTE1521.toNode = "hanim_l_tarsal_proximal_phalanx_2"
ROUTE1521.toField = "set_rotation"

Scene6.children.append(ROUTE1521)
ROUTE1522 = x3d.ROUTE()
ROUTE1522.fromNode = "Armature_Clock"
ROUTE1522.fromField = "fraction_changed"
ROUTE1522.toNode = "Armature_OI_l_tarsal_middle_phalanx_2"
ROUTE1522.toField = "set_fraction"

Scene6.children.append(ROUTE1522)
ROUTE1523 = x3d.ROUTE()
ROUTE1523.fromNode = "Armature_OI_l_tarsal_middle_phalanx_2"
ROUTE1523.fromField = "value_changed"
ROUTE1523.toNode = "hanim_l_tarsal_middle_phalanx_2"
ROUTE1523.toField = "set_rotation"

Scene6.children.append(ROUTE1523)
ROUTE1524 = x3d.ROUTE()
ROUTE1524.fromNode = "Armature_Clock"
ROUTE1524.fromField = "fraction_changed"
ROUTE1524.toNode = "Armature_OI_l_tarsal_distal_phalanx_2"
ROUTE1524.toField = "set_fraction"

Scene6.children.append(ROUTE1524)
ROUTE1525 = x3d.ROUTE()
ROUTE1525.fromNode = "Armature_OI_l_tarsal_distal_phalanx_2"
ROUTE1525.fromField = "value_changed"
ROUTE1525.toNode = "hanim_l_tarsal_distal_phalanx_2"
ROUTE1525.toField = "set_rotation"

Scene6.children.append(ROUTE1525)
ROUTE1526 = x3d.ROUTE()
ROUTE1526.fromNode = "Armature_Clock"
ROUTE1526.fromField = "fraction_changed"
ROUTE1526.toNode = "Armature_OI_l_cuneiform_3"
ROUTE1526.toField = "set_fraction"

Scene6.children.append(ROUTE1526)
ROUTE1527 = x3d.ROUTE()
ROUTE1527.fromNode = "Armature_OI_l_cuneiform_3"
ROUTE1527.fromField = "value_changed"
ROUTE1527.toNode = "hanim_l_cuneiform_3"
ROUTE1527.toField = "set_rotation"

Scene6.children.append(ROUTE1527)
ROUTE1528 = x3d.ROUTE()
ROUTE1528.fromNode = "Armature_Clock"
ROUTE1528.fromField = "fraction_changed"
ROUTE1528.toNode = "Armature_OI_l_metatarsal_3"
ROUTE1528.toField = "set_fraction"

Scene6.children.append(ROUTE1528)
ROUTE1529 = x3d.ROUTE()
ROUTE1529.fromNode = "Armature_OI_l_metatarsal_3"
ROUTE1529.fromField = "value_changed"
ROUTE1529.toNode = "hanim_l_metatarsal_3"
ROUTE1529.toField = "set_rotation"

Scene6.children.append(ROUTE1529)
ROUTE1530 = x3d.ROUTE()
ROUTE1530.fromNode = "Armature_Clock"
ROUTE1530.fromField = "fraction_changed"
ROUTE1530.toNode = "Armature_OI_l_tarsal_proximal_phalanx_3"
ROUTE1530.toField = "set_fraction"

Scene6.children.append(ROUTE1530)
ROUTE1531 = x3d.ROUTE()
ROUTE1531.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_3"
ROUTE1531.fromField = "value_changed"
ROUTE1531.toNode = "hanim_l_tarsal_proximal_phalanx_3"
ROUTE1531.toField = "set_rotation"

Scene6.children.append(ROUTE1531)
ROUTE1532 = x3d.ROUTE()
ROUTE1532.fromNode = "Armature_Clock"
ROUTE1532.fromField = "fraction_changed"
ROUTE1532.toNode = "Armature_OI_l_tarsal_middle_phalanx_3"
ROUTE1532.toField = "set_fraction"

Scene6.children.append(ROUTE1532)
ROUTE1533 = x3d.ROUTE()
ROUTE1533.fromNode = "Armature_OI_l_tarsal_middle_phalanx_3"
ROUTE1533.fromField = "value_changed"
ROUTE1533.toNode = "hanim_l_tarsal_middle_phalanx_3"
ROUTE1533.toField = "set_rotation"

Scene6.children.append(ROUTE1533)
ROUTE1534 = x3d.ROUTE()
ROUTE1534.fromNode = "Armature_Clock"
ROUTE1534.fromField = "fraction_changed"
ROUTE1534.toNode = "Armature_OI_l_tarsal_distal_phalanx_3"
ROUTE1534.toField = "set_fraction"

Scene6.children.append(ROUTE1534)
ROUTE1535 = x3d.ROUTE()
ROUTE1535.fromNode = "Armature_OI_l_tarsal_distal_phalanx_3"
ROUTE1535.fromField = "value_changed"
ROUTE1535.toNode = "hanim_l_tarsal_distal_phalanx_3"
ROUTE1535.toField = "set_rotation"

Scene6.children.append(ROUTE1535)
ROUTE1536 = x3d.ROUTE()
ROUTE1536.fromNode = "Armature_Clock"
ROUTE1536.fromField = "fraction_changed"
ROUTE1536.toNode = "Armature_OI_l_calcaneus"
ROUTE1536.toField = "set_fraction"

Scene6.children.append(ROUTE1536)
ROUTE1537 = x3d.ROUTE()
ROUTE1537.fromNode = "Armature_OI_l_calcaneus"
ROUTE1537.fromField = "value_changed"
ROUTE1537.toNode = "hanim_l_calcaneus"
ROUTE1537.toField = "set_rotation"

Scene6.children.append(ROUTE1537)
ROUTE1538 = x3d.ROUTE()
ROUTE1538.fromNode = "Armature_Clock"
ROUTE1538.fromField = "fraction_changed"
ROUTE1538.toNode = "Armature_OI_l_cuboid"
ROUTE1538.toField = "set_fraction"

Scene6.children.append(ROUTE1538)
ROUTE1539 = x3d.ROUTE()
ROUTE1539.fromNode = "Armature_OI_l_cuboid"
ROUTE1539.fromField = "value_changed"
ROUTE1539.toNode = "hanim_l_cuboid"
ROUTE1539.toField = "set_rotation"

Scene6.children.append(ROUTE1539)
ROUTE1540 = x3d.ROUTE()
ROUTE1540.fromNode = "Armature_Clock"
ROUTE1540.fromField = "fraction_changed"
ROUTE1540.toNode = "Armature_OI_l_metatarsal_4"
ROUTE1540.toField = "set_fraction"

Scene6.children.append(ROUTE1540)
ROUTE1541 = x3d.ROUTE()
ROUTE1541.fromNode = "Armature_OI_l_metatarsal_4"
ROUTE1541.fromField = "value_changed"
ROUTE1541.toNode = "hanim_l_metatarsal_4"
ROUTE1541.toField = "set_rotation"

Scene6.children.append(ROUTE1541)
ROUTE1542 = x3d.ROUTE()
ROUTE1542.fromNode = "Armature_Clock"
ROUTE1542.fromField = "fraction_changed"
ROUTE1542.toNode = "Armature_OI_l_tarsal_proximal_phalanx_4"
ROUTE1542.toField = "set_fraction"

Scene6.children.append(ROUTE1542)
ROUTE1543 = x3d.ROUTE()
ROUTE1543.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_4"
ROUTE1543.fromField = "value_changed"
ROUTE1543.toNode = "hanim_l_tarsal_proximal_phalanx_4"
ROUTE1543.toField = "set_rotation"

Scene6.children.append(ROUTE1543)
ROUTE1544 = x3d.ROUTE()
ROUTE1544.fromNode = "Armature_Clock"
ROUTE1544.fromField = "fraction_changed"
ROUTE1544.toNode = "Armature_OI_l_tarsal_middle_phalanx_4"
ROUTE1544.toField = "set_fraction"

Scene6.children.append(ROUTE1544)
ROUTE1545 = x3d.ROUTE()
ROUTE1545.fromNode = "Armature_OI_l_tarsal_middle_phalanx_4"
ROUTE1545.fromField = "value_changed"
ROUTE1545.toNode = "hanim_l_tarsal_middle_phalanx_4"
ROUTE1545.toField = "set_rotation"

Scene6.children.append(ROUTE1545)
ROUTE1546 = x3d.ROUTE()
ROUTE1546.fromNode = "Armature_Clock"
ROUTE1546.fromField = "fraction_changed"
ROUTE1546.toNode = "Armature_OI_l_tarsal_distal_phalanx_4"
ROUTE1546.toField = "set_fraction"

Scene6.children.append(ROUTE1546)
ROUTE1547 = x3d.ROUTE()
ROUTE1547.fromNode = "Armature_OI_l_tarsal_distal_phalanx_4"
ROUTE1547.fromField = "value_changed"
ROUTE1547.toNode = "hanim_l_tarsal_distal_phalanx_4"
ROUTE1547.toField = "set_rotation"

Scene6.children.append(ROUTE1547)
ROUTE1548 = x3d.ROUTE()
ROUTE1548.fromNode = "Armature_Clock"
ROUTE1548.fromField = "fraction_changed"
ROUTE1548.toNode = "Armature_OI_l_metatarsal_5"
ROUTE1548.toField = "set_fraction"

Scene6.children.append(ROUTE1548)
ROUTE1549 = x3d.ROUTE()
ROUTE1549.fromNode = "Armature_OI_l_metatarsal_5"
ROUTE1549.fromField = "value_changed"
ROUTE1549.toNode = "hanim_l_metatarsal_5"
ROUTE1549.toField = "set_rotation"

Scene6.children.append(ROUTE1549)
ROUTE1550 = x3d.ROUTE()
ROUTE1550.fromNode = "Armature_Clock"
ROUTE1550.fromField = "fraction_changed"
ROUTE1550.toNode = "Armature_OI_l_tarsal_proximal_phalanx_5"
ROUTE1550.toField = "set_fraction"

Scene6.children.append(ROUTE1550)
ROUTE1551 = x3d.ROUTE()
ROUTE1551.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_5"
ROUTE1551.fromField = "value_changed"
ROUTE1551.toNode = "hanim_l_tarsal_proximal_phalanx_5"
ROUTE1551.toField = "set_rotation"

Scene6.children.append(ROUTE1551)
ROUTE1552 = x3d.ROUTE()
ROUTE1552.fromNode = "Armature_Clock"
ROUTE1552.fromField = "fraction_changed"
ROUTE1552.toNode = "Armature_OI_l_tarsal_middle_phalanx_5"
ROUTE1552.toField = "set_fraction"

Scene6.children.append(ROUTE1552)
ROUTE1553 = x3d.ROUTE()
ROUTE1553.fromNode = "Armature_OI_l_tarsal_middle_phalanx_5"
ROUTE1553.fromField = "value_changed"
ROUTE1553.toNode = "hanim_l_tarsal_middle_phalanx_5"
ROUTE1553.toField = "set_rotation"

Scene6.children.append(ROUTE1553)
ROUTE1554 = x3d.ROUTE()
ROUTE1554.fromNode = "Armature_Clock"
ROUTE1554.fromField = "fraction_changed"
ROUTE1554.toNode = "Armature_OI_l_tarsal_distal_phalanx_5"
ROUTE1554.toField = "set_fraction"

Scene6.children.append(ROUTE1554)
ROUTE1555 = x3d.ROUTE()
ROUTE1555.fromNode = "Armature_OI_l_tarsal_distal_phalanx_5"
ROUTE1555.fromField = "value_changed"
ROUTE1555.toNode = "hanim_l_tarsal_distal_phalanx_5"
ROUTE1555.toField = "set_rotation"

Scene6.children.append(ROUTE1555)
ROUTE1556 = x3d.ROUTE()
ROUTE1556.fromNode = "Armature_Clock"
ROUTE1556.fromField = "fraction_changed"
ROUTE1556.toNode = "Armature_OI_r_thigh"
ROUTE1556.toField = "set_fraction"

Scene6.children.append(ROUTE1556)
ROUTE1557 = x3d.ROUTE()
ROUTE1557.fromNode = "Armature_OI_r_thigh"
ROUTE1557.fromField = "value_changed"
ROUTE1557.toNode = "hanim_r_thigh"
ROUTE1557.toField = "set_rotation"

Scene6.children.append(ROUTE1557)
ROUTE1558 = x3d.ROUTE()
ROUTE1558.fromNode = "Armature_Clock"
ROUTE1558.fromField = "fraction_changed"
ROUTE1558.toNode = "Armature_OI_r_calf"
ROUTE1558.toField = "set_fraction"

Scene6.children.append(ROUTE1558)
ROUTE1559 = x3d.ROUTE()
ROUTE1559.fromNode = "Armature_OI_r_calf"
ROUTE1559.fromField = "value_changed"
ROUTE1559.toNode = "hanim_r_calf"
ROUTE1559.toField = "set_rotation"

Scene6.children.append(ROUTE1559)
ROUTE1560 = x3d.ROUTE()
ROUTE1560.fromNode = "Armature_Clock"
ROUTE1560.fromField = "fraction_changed"
ROUTE1560.toNode = "Armature_OI_r_talus"
ROUTE1560.toField = "set_fraction"

Scene6.children.append(ROUTE1560)
ROUTE1561 = x3d.ROUTE()
ROUTE1561.fromNode = "Armature_OI_r_talus"
ROUTE1561.fromField = "value_changed"
ROUTE1561.toNode = "hanim_r_talus"
ROUTE1561.toField = "set_rotation"

Scene6.children.append(ROUTE1561)
ROUTE1562 = x3d.ROUTE()
ROUTE1562.fromNode = "Armature_Clock"
ROUTE1562.fromField = "fraction_changed"
ROUTE1562.toNode = "Armature_OI_r_navicular"
ROUTE1562.toField = "set_fraction"

Scene6.children.append(ROUTE1562)
ROUTE1563 = x3d.ROUTE()
ROUTE1563.fromNode = "Armature_OI_r_navicular"
ROUTE1563.fromField = "value_changed"
ROUTE1563.toNode = "hanim_r_navicular"
ROUTE1563.toField = "set_rotation"

Scene6.children.append(ROUTE1563)
ROUTE1564 = x3d.ROUTE()
ROUTE1564.fromNode = "Armature_Clock"
ROUTE1564.fromField = "fraction_changed"
ROUTE1564.toNode = "Armature_OI_r_cuneiform_1"
ROUTE1564.toField = "set_fraction"

Scene6.children.append(ROUTE1564)
ROUTE1565 = x3d.ROUTE()
ROUTE1565.fromNode = "Armature_OI_r_cuneiform_1"
ROUTE1565.fromField = "value_changed"
ROUTE1565.toNode = "hanim_r_cuneiform_1"
ROUTE1565.toField = "set_rotation"

Scene6.children.append(ROUTE1565)
ROUTE1566 = x3d.ROUTE()
ROUTE1566.fromNode = "Armature_Clock"
ROUTE1566.fromField = "fraction_changed"
ROUTE1566.toNode = "Armature_OI_r_metatarsal_1"
ROUTE1566.toField = "set_fraction"

Scene6.children.append(ROUTE1566)
ROUTE1567 = x3d.ROUTE()
ROUTE1567.fromNode = "Armature_OI_r_metatarsal_1"
ROUTE1567.fromField = "value_changed"
ROUTE1567.toNode = "hanim_r_metatarsal_1"
ROUTE1567.toField = "set_rotation"

Scene6.children.append(ROUTE1567)
ROUTE1568 = x3d.ROUTE()
ROUTE1568.fromNode = "Armature_Clock"
ROUTE1568.fromField = "fraction_changed"
ROUTE1568.toNode = "Armature_OI_r_tarsal_proximal_phalanx_1"
ROUTE1568.toField = "set_fraction"

Scene6.children.append(ROUTE1568)
ROUTE1569 = x3d.ROUTE()
ROUTE1569.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_1"
ROUTE1569.fromField = "value_changed"
ROUTE1569.toNode = "hanim_r_tarsal_proximal_phalanx_1"
ROUTE1569.toField = "set_rotation"

Scene6.children.append(ROUTE1569)
ROUTE1570 = x3d.ROUTE()
ROUTE1570.fromNode = "Armature_Clock"
ROUTE1570.fromField = "fraction_changed"
ROUTE1570.toNode = "Armature_OI_r_tarsal_distal_phalanx_1"
ROUTE1570.toField = "set_fraction"

Scene6.children.append(ROUTE1570)
ROUTE1571 = x3d.ROUTE()
ROUTE1571.fromNode = "Armature_OI_r_tarsal_distal_phalanx_1"
ROUTE1571.fromField = "value_changed"
ROUTE1571.toNode = "hanim_r_tarsal_distal_phalanx_1"
ROUTE1571.toField = "set_rotation"

Scene6.children.append(ROUTE1571)
ROUTE1572 = x3d.ROUTE()
ROUTE1572.fromNode = "Armature_Clock"
ROUTE1572.fromField = "fraction_changed"
ROUTE1572.toNode = "Armature_OI_r_cuneiform_2"
ROUTE1572.toField = "set_fraction"

Scene6.children.append(ROUTE1572)
ROUTE1573 = x3d.ROUTE()
ROUTE1573.fromNode = "Armature_OI_r_cuneiform_2"
ROUTE1573.fromField = "value_changed"
ROUTE1573.toNode = "hanim_r_cuneiform_2"
ROUTE1573.toField = "set_rotation"

Scene6.children.append(ROUTE1573)
ROUTE1574 = x3d.ROUTE()
ROUTE1574.fromNode = "Armature_Clock"
ROUTE1574.fromField = "fraction_changed"
ROUTE1574.toNode = "Armature_OI_r_metatarsal_2"
ROUTE1574.toField = "set_fraction"

Scene6.children.append(ROUTE1574)
ROUTE1575 = x3d.ROUTE()
ROUTE1575.fromNode = "Armature_OI_r_metatarsal_2"
ROUTE1575.fromField = "value_changed"
ROUTE1575.toNode = "hanim_r_metatarsal_2"
ROUTE1575.toField = "set_rotation"

Scene6.children.append(ROUTE1575)
ROUTE1576 = x3d.ROUTE()
ROUTE1576.fromNode = "Armature_Clock"
ROUTE1576.fromField = "fraction_changed"
ROUTE1576.toNode = "Armature_OI_r_tarsal_proximal_phalanx_2"
ROUTE1576.toField = "set_fraction"

Scene6.children.append(ROUTE1576)
ROUTE1577 = x3d.ROUTE()
ROUTE1577.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_2"
ROUTE1577.fromField = "value_changed"
ROUTE1577.toNode = "hanim_r_tarsal_proximal_phalanx_2"
ROUTE1577.toField = "set_rotation"

Scene6.children.append(ROUTE1577)
ROUTE1578 = x3d.ROUTE()
ROUTE1578.fromNode = "Armature_Clock"
ROUTE1578.fromField = "fraction_changed"
ROUTE1578.toNode = "Armature_OI_r_tarsal_middle_phalanx_2"
ROUTE1578.toField = "set_fraction"

Scene6.children.append(ROUTE1578)
ROUTE1579 = x3d.ROUTE()
ROUTE1579.fromNode = "Armature_OI_r_tarsal_middle_phalanx_2"
ROUTE1579.fromField = "value_changed"
ROUTE1579.toNode = "hanim_r_tarsal_middle_phalanx_2"
ROUTE1579.toField = "set_rotation"

Scene6.children.append(ROUTE1579)
ROUTE1580 = x3d.ROUTE()
ROUTE1580.fromNode = "Armature_Clock"
ROUTE1580.fromField = "fraction_changed"
ROUTE1580.toNode = "Armature_OI_r_tarsal_distal_phalanx_2"
ROUTE1580.toField = "set_fraction"

Scene6.children.append(ROUTE1580)
ROUTE1581 = x3d.ROUTE()
ROUTE1581.fromNode = "Armature_OI_r_tarsal_distal_phalanx_2"
ROUTE1581.fromField = "value_changed"
ROUTE1581.toNode = "hanim_r_tarsal_distal_phalanx_2"
ROUTE1581.toField = "set_rotation"

Scene6.children.append(ROUTE1581)
ROUTE1582 = x3d.ROUTE()
ROUTE1582.fromNode = "Armature_Clock"
ROUTE1582.fromField = "fraction_changed"
ROUTE1582.toNode = "Armature_OI_r_cuneiform_3"
ROUTE1582.toField = "set_fraction"

Scene6.children.append(ROUTE1582)
ROUTE1583 = x3d.ROUTE()
ROUTE1583.fromNode = "Armature_OI_r_cuneiform_3"
ROUTE1583.fromField = "value_changed"
ROUTE1583.toNode = "hanim_r_cuneiform_3"
ROUTE1583.toField = "set_rotation"

Scene6.children.append(ROUTE1583)
ROUTE1584 = x3d.ROUTE()
ROUTE1584.fromNode = "Armature_Clock"
ROUTE1584.fromField = "fraction_changed"
ROUTE1584.toNode = "Armature_OI_r_metatarsal_3"
ROUTE1584.toField = "set_fraction"

Scene6.children.append(ROUTE1584)
ROUTE1585 = x3d.ROUTE()
ROUTE1585.fromNode = "Armature_OI_r_metatarsal_3"
ROUTE1585.fromField = "value_changed"
ROUTE1585.toNode = "hanim_r_metatarsal_3"
ROUTE1585.toField = "set_rotation"

Scene6.children.append(ROUTE1585)
ROUTE1586 = x3d.ROUTE()
ROUTE1586.fromNode = "Armature_Clock"
ROUTE1586.fromField = "fraction_changed"
ROUTE1586.toNode = "Armature_OI_r_tarsal_proximal_phalanx_3"
ROUTE1586.toField = "set_fraction"

Scene6.children.append(ROUTE1586)
ROUTE1587 = x3d.ROUTE()
ROUTE1587.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_3"
ROUTE1587.fromField = "value_changed"
ROUTE1587.toNode = "hanim_r_tarsal_proximal_phalanx_3"
ROUTE1587.toField = "set_rotation"

Scene6.children.append(ROUTE1587)
ROUTE1588 = x3d.ROUTE()
ROUTE1588.fromNode = "Armature_Clock"
ROUTE1588.fromField = "fraction_changed"
ROUTE1588.toNode = "Armature_OI_r_tarsal_middle_phalanx_3"
ROUTE1588.toField = "set_fraction"

Scene6.children.append(ROUTE1588)
ROUTE1589 = x3d.ROUTE()
ROUTE1589.fromNode = "Armature_OI_r_tarsal_middle_phalanx_3"
ROUTE1589.fromField = "value_changed"
ROUTE1589.toNode = "hanim_r_tarsal_middle_phalanx_3"
ROUTE1589.toField = "set_rotation"

Scene6.children.append(ROUTE1589)
ROUTE1590 = x3d.ROUTE()
ROUTE1590.fromNode = "Armature_Clock"
ROUTE1590.fromField = "fraction_changed"
ROUTE1590.toNode = "Armature_OI_r_tarsal_distal_phalanx_3"
ROUTE1590.toField = "set_fraction"

Scene6.children.append(ROUTE1590)
ROUTE1591 = x3d.ROUTE()
ROUTE1591.fromNode = "Armature_OI_r_tarsal_distal_phalanx_3"
ROUTE1591.fromField = "value_changed"
ROUTE1591.toNode = "hanim_r_tarsal_distal_phalanx_3"
ROUTE1591.toField = "set_rotation"

Scene6.children.append(ROUTE1591)
ROUTE1592 = x3d.ROUTE()
ROUTE1592.fromNode = "Armature_Clock"
ROUTE1592.fromField = "fraction_changed"
ROUTE1592.toNode = "Armature_OI_r_calcaneus"
ROUTE1592.toField = "set_fraction"

Scene6.children.append(ROUTE1592)
ROUTE1593 = x3d.ROUTE()
ROUTE1593.fromNode = "Armature_OI_r_calcaneus"
ROUTE1593.fromField = "value_changed"
ROUTE1593.toNode = "hanim_r_calcaneus"
ROUTE1593.toField = "set_rotation"

Scene6.children.append(ROUTE1593)
ROUTE1594 = x3d.ROUTE()
ROUTE1594.fromNode = "Armature_Clock"
ROUTE1594.fromField = "fraction_changed"
ROUTE1594.toNode = "Armature_OI_r_cuboid"
ROUTE1594.toField = "set_fraction"

Scene6.children.append(ROUTE1594)
ROUTE1595 = x3d.ROUTE()
ROUTE1595.fromNode = "Armature_OI_r_cuboid"
ROUTE1595.fromField = "value_changed"
ROUTE1595.toNode = "hanim_r_cuboid"
ROUTE1595.toField = "set_rotation"

Scene6.children.append(ROUTE1595)
ROUTE1596 = x3d.ROUTE()
ROUTE1596.fromNode = "Armature_Clock"
ROUTE1596.fromField = "fraction_changed"
ROUTE1596.toNode = "Armature_OI_r_metatarsal_4"
ROUTE1596.toField = "set_fraction"

Scene6.children.append(ROUTE1596)
ROUTE1597 = x3d.ROUTE()
ROUTE1597.fromNode = "Armature_OI_r_metatarsal_4"
ROUTE1597.fromField = "value_changed"
ROUTE1597.toNode = "hanim_r_metatarsal_4"
ROUTE1597.toField = "set_rotation"

Scene6.children.append(ROUTE1597)
ROUTE1598 = x3d.ROUTE()
ROUTE1598.fromNode = "Armature_Clock"
ROUTE1598.fromField = "fraction_changed"
ROUTE1598.toNode = "Armature_OI_r_tarsal_proximal_phalanx_4"
ROUTE1598.toField = "set_fraction"

Scene6.children.append(ROUTE1598)
ROUTE1599 = x3d.ROUTE()
ROUTE1599.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_4"
ROUTE1599.fromField = "value_changed"
ROUTE1599.toNode = "hanim_r_tarsal_proximal_phalanx_4"
ROUTE1599.toField = "set_rotation"

Scene6.children.append(ROUTE1599)
ROUTE1600 = x3d.ROUTE()
ROUTE1600.fromNode = "Armature_Clock"
ROUTE1600.fromField = "fraction_changed"
ROUTE1600.toNode = "Armature_OI_r_tarsal_middle_phalanx_4"
ROUTE1600.toField = "set_fraction"

Scene6.children.append(ROUTE1600)
ROUTE1601 = x3d.ROUTE()
ROUTE1601.fromNode = "Armature_OI_r_tarsal_middle_phalanx_4"
ROUTE1601.fromField = "value_changed"
ROUTE1601.toNode = "hanim_r_tarsal_middle_phalanx_4"
ROUTE1601.toField = "set_rotation"

Scene6.children.append(ROUTE1601)
ROUTE1602 = x3d.ROUTE()
ROUTE1602.fromNode = "Armature_Clock"
ROUTE1602.fromField = "fraction_changed"
ROUTE1602.toNode = "Armature_OI_r_tarsal_distal_phalanx_4"
ROUTE1602.toField = "set_fraction"

Scene6.children.append(ROUTE1602)
ROUTE1603 = x3d.ROUTE()
ROUTE1603.fromNode = "Armature_OI_r_tarsal_distal_phalanx_4"
ROUTE1603.fromField = "value_changed"
ROUTE1603.toNode = "hanim_r_tarsal_distal_phalanx_4"
ROUTE1603.toField = "set_rotation"

Scene6.children.append(ROUTE1603)
ROUTE1604 = x3d.ROUTE()
ROUTE1604.fromNode = "Armature_Clock"
ROUTE1604.fromField = "fraction_changed"
ROUTE1604.toNode = "Armature_OI_r_metatarsal_5"
ROUTE1604.toField = "set_fraction"

Scene6.children.append(ROUTE1604)
ROUTE1605 = x3d.ROUTE()
ROUTE1605.fromNode = "Armature_OI_r_metatarsal_5"
ROUTE1605.fromField = "value_changed"
ROUTE1605.toNode = "hanim_r_metatarsal_5"
ROUTE1605.toField = "set_rotation"

Scene6.children.append(ROUTE1605)
ROUTE1606 = x3d.ROUTE()
ROUTE1606.fromNode = "Armature_Clock"
ROUTE1606.fromField = "fraction_changed"
ROUTE1606.toNode = "Armature_OI_r_tarsal_proximal_phalanx_5"
ROUTE1606.toField = "set_fraction"

Scene6.children.append(ROUTE1606)
ROUTE1607 = x3d.ROUTE()
ROUTE1607.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_5"
ROUTE1607.fromField = "value_changed"
ROUTE1607.toNode = "hanim_r_tarsal_proximal_phalanx_5"
ROUTE1607.toField = "set_rotation"

Scene6.children.append(ROUTE1607)
ROUTE1608 = x3d.ROUTE()
ROUTE1608.fromNode = "Armature_Clock"
ROUTE1608.fromField = "fraction_changed"
ROUTE1608.toNode = "Armature_OI_r_tarsal_middle_phalanx_5"
ROUTE1608.toField = "set_fraction"

Scene6.children.append(ROUTE1608)
ROUTE1609 = x3d.ROUTE()
ROUTE1609.fromNode = "Armature_OI_r_tarsal_middle_phalanx_5"
ROUTE1609.fromField = "value_changed"
ROUTE1609.toNode = "hanim_r_tarsal_middle_phalanx_5"
ROUTE1609.toField = "set_rotation"

Scene6.children.append(ROUTE1609)
ROUTE1610 = x3d.ROUTE()
ROUTE1610.fromNode = "Armature_Clock"
ROUTE1610.fromField = "fraction_changed"
ROUTE1610.toNode = "Armature_OI_r_tarsal_distal_phalanx_5"
ROUTE1610.toField = "set_fraction"

Scene6.children.append(ROUTE1610)
ROUTE1611 = x3d.ROUTE()
ROUTE1611.fromNode = "Armature_OI_r_tarsal_distal_phalanx_5"
ROUTE1611.fromField = "value_changed"
ROUTE1611.toNode = "hanim_r_tarsal_distal_phalanx_5"
ROUTE1611.toField = "set_rotation"

Scene6.children.append(ROUTE1611)
ROUTE1612 = x3d.ROUTE()
ROUTE1612.fromNode = "Armature_Clock"
ROUTE1612.fromField = "fraction_changed"
ROUTE1612.toNode = "Armature_OI_l5"
ROUTE1612.toField = "set_fraction"

Scene6.children.append(ROUTE1612)
ROUTE1613 = x3d.ROUTE()
ROUTE1613.fromNode = "Armature_OI_l5"
ROUTE1613.fromField = "value_changed"
ROUTE1613.toNode = "hanim_l5"
ROUTE1613.toField = "set_rotation"

Scene6.children.append(ROUTE1613)
ROUTE1614 = x3d.ROUTE()
ROUTE1614.fromNode = "Armature_Clock"
ROUTE1614.fromField = "fraction_changed"
ROUTE1614.toNode = "Armature_OI_l4"
ROUTE1614.toField = "set_fraction"

Scene6.children.append(ROUTE1614)
ROUTE1615 = x3d.ROUTE()
ROUTE1615.fromNode = "Armature_OI_l4"
ROUTE1615.fromField = "value_changed"
ROUTE1615.toNode = "hanim_l4"
ROUTE1615.toField = "set_rotation"

Scene6.children.append(ROUTE1615)
ROUTE1616 = x3d.ROUTE()
ROUTE1616.fromNode = "Armature_Clock"
ROUTE1616.fromField = "fraction_changed"
ROUTE1616.toNode = "Armature_OI_l3"
ROUTE1616.toField = "set_fraction"

Scene6.children.append(ROUTE1616)
ROUTE1617 = x3d.ROUTE()
ROUTE1617.fromNode = "Armature_OI_l3"
ROUTE1617.fromField = "value_changed"
ROUTE1617.toNode = "hanim_l3"
ROUTE1617.toField = "set_rotation"

Scene6.children.append(ROUTE1617)
ROUTE1618 = x3d.ROUTE()
ROUTE1618.fromNode = "Armature_Clock"
ROUTE1618.fromField = "fraction_changed"
ROUTE1618.toNode = "Armature_OI_l2"
ROUTE1618.toField = "set_fraction"

Scene6.children.append(ROUTE1618)
ROUTE1619 = x3d.ROUTE()
ROUTE1619.fromNode = "Armature_OI_l2"
ROUTE1619.fromField = "value_changed"
ROUTE1619.toNode = "hanim_l2"
ROUTE1619.toField = "set_rotation"

Scene6.children.append(ROUTE1619)
ROUTE1620 = x3d.ROUTE()
ROUTE1620.fromNode = "Armature_Clock"
ROUTE1620.fromField = "fraction_changed"
ROUTE1620.toNode = "Armature_OI_l1"
ROUTE1620.toField = "set_fraction"

Scene6.children.append(ROUTE1620)
ROUTE1621 = x3d.ROUTE()
ROUTE1621.fromNode = "Armature_OI_l1"
ROUTE1621.fromField = "value_changed"
ROUTE1621.toNode = "hanim_l1"
ROUTE1621.toField = "set_rotation"

Scene6.children.append(ROUTE1621)
ROUTE1622 = x3d.ROUTE()
ROUTE1622.fromNode = "Armature_Clock"
ROUTE1622.fromField = "fraction_changed"
ROUTE1622.toNode = "Armature_OI_t12"
ROUTE1622.toField = "set_fraction"

Scene6.children.append(ROUTE1622)
ROUTE1623 = x3d.ROUTE()
ROUTE1623.fromNode = "Armature_OI_t12"
ROUTE1623.fromField = "value_changed"
ROUTE1623.toNode = "hanim_t12"
ROUTE1623.toField = "set_rotation"

Scene6.children.append(ROUTE1623)
ROUTE1624 = x3d.ROUTE()
ROUTE1624.fromNode = "Armature_Clock"
ROUTE1624.fromField = "fraction_changed"
ROUTE1624.toNode = "Armature_OI_t11"
ROUTE1624.toField = "set_fraction"

Scene6.children.append(ROUTE1624)
ROUTE1625 = x3d.ROUTE()
ROUTE1625.fromNode = "Armature_OI_t11"
ROUTE1625.fromField = "value_changed"
ROUTE1625.toNode = "hanim_t11"
ROUTE1625.toField = "set_rotation"

Scene6.children.append(ROUTE1625)
ROUTE1626 = x3d.ROUTE()
ROUTE1626.fromNode = "Armature_Clock"
ROUTE1626.fromField = "fraction_changed"
ROUTE1626.toNode = "Armature_OI_t10"
ROUTE1626.toField = "set_fraction"

Scene6.children.append(ROUTE1626)
ROUTE1627 = x3d.ROUTE()
ROUTE1627.fromNode = "Armature_OI_t10"
ROUTE1627.fromField = "value_changed"
ROUTE1627.toNode = "hanim_t10"
ROUTE1627.toField = "set_rotation"

Scene6.children.append(ROUTE1627)
ROUTE1628 = x3d.ROUTE()
ROUTE1628.fromNode = "Armature_Clock"
ROUTE1628.fromField = "fraction_changed"
ROUTE1628.toNode = "Armature_OI_t9"
ROUTE1628.toField = "set_fraction"

Scene6.children.append(ROUTE1628)
ROUTE1629 = x3d.ROUTE()
ROUTE1629.fromNode = "Armature_OI_t9"
ROUTE1629.fromField = "value_changed"
ROUTE1629.toNode = "hanim_t9"
ROUTE1629.toField = "set_rotation"

Scene6.children.append(ROUTE1629)
ROUTE1630 = x3d.ROUTE()
ROUTE1630.fromNode = "Armature_Clock"
ROUTE1630.fromField = "fraction_changed"
ROUTE1630.toNode = "Armature_OI_t8"
ROUTE1630.toField = "set_fraction"

Scene6.children.append(ROUTE1630)
ROUTE1631 = x3d.ROUTE()
ROUTE1631.fromNode = "Armature_OI_t8"
ROUTE1631.fromField = "value_changed"
ROUTE1631.toNode = "hanim_t8"
ROUTE1631.toField = "set_rotation"

Scene6.children.append(ROUTE1631)
ROUTE1632 = x3d.ROUTE()
ROUTE1632.fromNode = "Armature_Clock"
ROUTE1632.fromField = "fraction_changed"
ROUTE1632.toNode = "Armature_OI_t7"
ROUTE1632.toField = "set_fraction"

Scene6.children.append(ROUTE1632)
ROUTE1633 = x3d.ROUTE()
ROUTE1633.fromNode = "Armature_OI_t7"
ROUTE1633.fromField = "value_changed"
ROUTE1633.toNode = "hanim_t7"
ROUTE1633.toField = "set_rotation"

Scene6.children.append(ROUTE1633)
ROUTE1634 = x3d.ROUTE()
ROUTE1634.fromNode = "Armature_Clock"
ROUTE1634.fromField = "fraction_changed"
ROUTE1634.toNode = "Armature_OI_t6"
ROUTE1634.toField = "set_fraction"

Scene6.children.append(ROUTE1634)
ROUTE1635 = x3d.ROUTE()
ROUTE1635.fromNode = "Armature_OI_t6"
ROUTE1635.fromField = "value_changed"
ROUTE1635.toNode = "hanim_t6"
ROUTE1635.toField = "set_rotation"

Scene6.children.append(ROUTE1635)
ROUTE1636 = x3d.ROUTE()
ROUTE1636.fromNode = "Armature_Clock"
ROUTE1636.fromField = "fraction_changed"
ROUTE1636.toNode = "Armature_OI_t5"
ROUTE1636.toField = "set_fraction"

Scene6.children.append(ROUTE1636)
ROUTE1637 = x3d.ROUTE()
ROUTE1637.fromNode = "Armature_OI_t5"
ROUTE1637.fromField = "value_changed"
ROUTE1637.toNode = "hanim_t5"
ROUTE1637.toField = "set_rotation"

Scene6.children.append(ROUTE1637)
ROUTE1638 = x3d.ROUTE()
ROUTE1638.fromNode = "Armature_Clock"
ROUTE1638.fromField = "fraction_changed"
ROUTE1638.toNode = "Armature_OI_t4"
ROUTE1638.toField = "set_fraction"

Scene6.children.append(ROUTE1638)
ROUTE1639 = x3d.ROUTE()
ROUTE1639.fromNode = "Armature_OI_t4"
ROUTE1639.fromField = "value_changed"
ROUTE1639.toNode = "hanim_t4"
ROUTE1639.toField = "set_rotation"

Scene6.children.append(ROUTE1639)
ROUTE1640 = x3d.ROUTE()
ROUTE1640.fromNode = "Armature_Clock"
ROUTE1640.fromField = "fraction_changed"
ROUTE1640.toNode = "Armature_OI_t3"
ROUTE1640.toField = "set_fraction"

Scene6.children.append(ROUTE1640)
ROUTE1641 = x3d.ROUTE()
ROUTE1641.fromNode = "Armature_OI_t3"
ROUTE1641.fromField = "value_changed"
ROUTE1641.toNode = "hanim_t3"
ROUTE1641.toField = "set_rotation"

Scene6.children.append(ROUTE1641)
ROUTE1642 = x3d.ROUTE()
ROUTE1642.fromNode = "Armature_Clock"
ROUTE1642.fromField = "fraction_changed"
ROUTE1642.toNode = "Armature_OI_t2"
ROUTE1642.toField = "set_fraction"

Scene6.children.append(ROUTE1642)
ROUTE1643 = x3d.ROUTE()
ROUTE1643.fromNode = "Armature_OI_t2"
ROUTE1643.fromField = "value_changed"
ROUTE1643.toNode = "hanim_t2"
ROUTE1643.toField = "set_rotation"

Scene6.children.append(ROUTE1643)
ROUTE1644 = x3d.ROUTE()
ROUTE1644.fromNode = "Armature_Clock"
ROUTE1644.fromField = "fraction_changed"
ROUTE1644.toNode = "Armature_OI_t1"
ROUTE1644.toField = "set_fraction"

Scene6.children.append(ROUTE1644)
ROUTE1645 = x3d.ROUTE()
ROUTE1645.fromNode = "Armature_OI_t1"
ROUTE1645.fromField = "value_changed"
ROUTE1645.toNode = "hanim_t1"
ROUTE1645.toField = "set_rotation"

Scene6.children.append(ROUTE1645)
ROUTE1646 = x3d.ROUTE()
ROUTE1646.fromNode = "Armature_Clock"
ROUTE1646.fromField = "fraction_changed"
ROUTE1646.toNode = "Armature_OI_c7"
ROUTE1646.toField = "set_fraction"

Scene6.children.append(ROUTE1646)
ROUTE1647 = x3d.ROUTE()
ROUTE1647.fromNode = "Armature_OI_c7"
ROUTE1647.fromField = "value_changed"
ROUTE1647.toNode = "hanim_c7"
ROUTE1647.toField = "set_rotation"

Scene6.children.append(ROUTE1647)
ROUTE1648 = x3d.ROUTE()
ROUTE1648.fromNode = "Armature_Clock"
ROUTE1648.fromField = "fraction_changed"
ROUTE1648.toNode = "Armature_OI_c6"
ROUTE1648.toField = "set_fraction"

Scene6.children.append(ROUTE1648)
ROUTE1649 = x3d.ROUTE()
ROUTE1649.fromNode = "Armature_OI_c6"
ROUTE1649.fromField = "value_changed"
ROUTE1649.toNode = "hanim_c6"
ROUTE1649.toField = "set_rotation"

Scene6.children.append(ROUTE1649)
ROUTE1650 = x3d.ROUTE()
ROUTE1650.fromNode = "Armature_Clock"
ROUTE1650.fromField = "fraction_changed"
ROUTE1650.toNode = "Armature_OI_c5"
ROUTE1650.toField = "set_fraction"

Scene6.children.append(ROUTE1650)
ROUTE1651 = x3d.ROUTE()
ROUTE1651.fromNode = "Armature_OI_c5"
ROUTE1651.fromField = "value_changed"
ROUTE1651.toNode = "hanim_c5"
ROUTE1651.toField = "set_rotation"

Scene6.children.append(ROUTE1651)
ROUTE1652 = x3d.ROUTE()
ROUTE1652.fromNode = "Armature_Clock"
ROUTE1652.fromField = "fraction_changed"
ROUTE1652.toNode = "Armature_OI_c4"
ROUTE1652.toField = "set_fraction"

Scene6.children.append(ROUTE1652)
ROUTE1653 = x3d.ROUTE()
ROUTE1653.fromNode = "Armature_OI_c4"
ROUTE1653.fromField = "value_changed"
ROUTE1653.toNode = "hanim_c4"
ROUTE1653.toField = "set_rotation"

Scene6.children.append(ROUTE1653)
ROUTE1654 = x3d.ROUTE()
ROUTE1654.fromNode = "Armature_Clock"
ROUTE1654.fromField = "fraction_changed"
ROUTE1654.toNode = "Armature_OI_c3"
ROUTE1654.toField = "set_fraction"

Scene6.children.append(ROUTE1654)
ROUTE1655 = x3d.ROUTE()
ROUTE1655.fromNode = "Armature_OI_c3"
ROUTE1655.fromField = "value_changed"
ROUTE1655.toNode = "hanim_c3"
ROUTE1655.toField = "set_rotation"

Scene6.children.append(ROUTE1655)
ROUTE1656 = x3d.ROUTE()
ROUTE1656.fromNode = "Armature_Clock"
ROUTE1656.fromField = "fraction_changed"
ROUTE1656.toNode = "Armature_OI_c2"
ROUTE1656.toField = "set_fraction"

Scene6.children.append(ROUTE1656)
ROUTE1657 = x3d.ROUTE()
ROUTE1657.fromNode = "Armature_OI_c2"
ROUTE1657.fromField = "value_changed"
ROUTE1657.toNode = "hanim_c2"
ROUTE1657.toField = "set_rotation"

Scene6.children.append(ROUTE1657)
ROUTE1658 = x3d.ROUTE()
ROUTE1658.fromNode = "Armature_Clock"
ROUTE1658.fromField = "fraction_changed"
ROUTE1658.toNode = "Armature_OI_c1"
ROUTE1658.toField = "set_fraction"

Scene6.children.append(ROUTE1658)
ROUTE1659 = x3d.ROUTE()
ROUTE1659.fromNode = "Armature_OI_c1"
ROUTE1659.fromField = "value_changed"
ROUTE1659.toNode = "hanim_c1"
ROUTE1659.toField = "set_rotation"

Scene6.children.append(ROUTE1659)
ROUTE1660 = x3d.ROUTE()
ROUTE1660.fromNode = "Armature_Clock"
ROUTE1660.fromField = "fraction_changed"
ROUTE1660.toNode = "Armature_OI_skull"
ROUTE1660.toField = "set_fraction"

Scene6.children.append(ROUTE1660)
ROUTE1661 = x3d.ROUTE()
ROUTE1661.fromNode = "Armature_OI_skull"
ROUTE1661.fromField = "value_changed"
ROUTE1661.toNode = "hanim_skull"
ROUTE1661.toField = "set_rotation"

Scene6.children.append(ROUTE1661)
ROUTE1662 = x3d.ROUTE()
ROUTE1662.fromNode = "Armature_Clock"
ROUTE1662.fromField = "fraction_changed"
ROUTE1662.toNode = "Armature_OI_l_eyelid"
ROUTE1662.toField = "set_fraction"

Scene6.children.append(ROUTE1662)
ROUTE1663 = x3d.ROUTE()
ROUTE1663.fromNode = "Armature_OI_l_eyelid"
ROUTE1663.fromField = "value_changed"
ROUTE1663.toNode = "hanim_l_eyelid"
ROUTE1663.toField = "set_rotation"

Scene6.children.append(ROUTE1663)
ROUTE1664 = x3d.ROUTE()
ROUTE1664.fromNode = "Armature_Clock"
ROUTE1664.fromField = "fraction_changed"
ROUTE1664.toNode = "Armature_OI_r_eyelid"
ROUTE1664.toField = "set_fraction"

Scene6.children.append(ROUTE1664)
ROUTE1665 = x3d.ROUTE()
ROUTE1665.fromNode = "Armature_OI_r_eyelid"
ROUTE1665.fromField = "value_changed"
ROUTE1665.toNode = "hanim_r_eyelid"
ROUTE1665.toField = "set_rotation"

Scene6.children.append(ROUTE1665)
ROUTE1666 = x3d.ROUTE()
ROUTE1666.fromNode = "Armature_Clock"
ROUTE1666.fromField = "fraction_changed"
ROUTE1666.toNode = "Armature_OI_l_eyeball"
ROUTE1666.toField = "set_fraction"

Scene6.children.append(ROUTE1666)
ROUTE1667 = x3d.ROUTE()
ROUTE1667.fromNode = "Armature_OI_l_eyeball"
ROUTE1667.fromField = "value_changed"
ROUTE1667.toNode = "hanim_l_eyeball"
ROUTE1667.toField = "set_rotation"

Scene6.children.append(ROUTE1667)
ROUTE1668 = x3d.ROUTE()
ROUTE1668.fromNode = "Armature_Clock"
ROUTE1668.fromField = "fraction_changed"
ROUTE1668.toNode = "Armature_OI_r_eyeball"
ROUTE1668.toField = "set_fraction"

Scene6.children.append(ROUTE1668)
ROUTE1669 = x3d.ROUTE()
ROUTE1669.fromNode = "Armature_OI_r_eyeball"
ROUTE1669.fromField = "value_changed"
ROUTE1669.toNode = "hanim_r_eyeball"
ROUTE1669.toField = "set_rotation"

Scene6.children.append(ROUTE1669)
ROUTE1670 = x3d.ROUTE()
ROUTE1670.fromNode = "Armature_Clock"
ROUTE1670.fromField = "fraction_changed"
ROUTE1670.toNode = "Armature_OI_l_eyebrow"
ROUTE1670.toField = "set_fraction"

Scene6.children.append(ROUTE1670)
ROUTE1671 = x3d.ROUTE()
ROUTE1671.fromNode = "Armature_OI_l_eyebrow"
ROUTE1671.fromField = "value_changed"
ROUTE1671.toNode = "hanim_l_eyebrow"
ROUTE1671.toField = "set_rotation"

Scene6.children.append(ROUTE1671)
ROUTE1672 = x3d.ROUTE()
ROUTE1672.fromNode = "Armature_Clock"
ROUTE1672.fromField = "fraction_changed"
ROUTE1672.toNode = "Armature_OI_r_eyebrow"
ROUTE1672.toField = "set_fraction"

Scene6.children.append(ROUTE1672)
ROUTE1673 = x3d.ROUTE()
ROUTE1673.fromNode = "Armature_OI_r_eyebrow"
ROUTE1673.fromField = "value_changed"
ROUTE1673.toNode = "hanim_r_eyebrow"
ROUTE1673.toField = "set_rotation"

Scene6.children.append(ROUTE1673)
ROUTE1674 = x3d.ROUTE()
ROUTE1674.fromNode = "Armature_Clock"
ROUTE1674.fromField = "fraction_changed"
ROUTE1674.toNode = "Armature_OI_jaw"
ROUTE1674.toField = "set_fraction"

Scene6.children.append(ROUTE1674)
ROUTE1675 = x3d.ROUTE()
ROUTE1675.fromNode = "Armature_OI_jaw"
ROUTE1675.fromField = "value_changed"
ROUTE1675.toNode = "hanim_jaw"
ROUTE1675.toField = "set_rotation"

Scene6.children.append(ROUTE1675)
ROUTE1676 = x3d.ROUTE()
ROUTE1676.fromNode = "Armature_Clock"
ROUTE1676.fromField = "fraction_changed"
ROUTE1676.toNode = "Armature_OI_l_clavicle"
ROUTE1676.toField = "set_fraction"

Scene6.children.append(ROUTE1676)
ROUTE1677 = x3d.ROUTE()
ROUTE1677.fromNode = "Armature_OI_l_clavicle"
ROUTE1677.fromField = "value_changed"
ROUTE1677.toNode = "hanim_l_clavicle"
ROUTE1677.toField = "set_rotation"

Scene6.children.append(ROUTE1677)
ROUTE1678 = x3d.ROUTE()
ROUTE1678.fromNode = "Armature_Clock"
ROUTE1678.fromField = "fraction_changed"
ROUTE1678.toNode = "Armature_OI_l_scapula"
ROUTE1678.toField = "set_fraction"

Scene6.children.append(ROUTE1678)
ROUTE1679 = x3d.ROUTE()
ROUTE1679.fromNode = "Armature_OI_l_scapula"
ROUTE1679.fromField = "value_changed"
ROUTE1679.toNode = "hanim_l_scapula"
ROUTE1679.toField = "set_rotation"

Scene6.children.append(ROUTE1679)
ROUTE1680 = x3d.ROUTE()
ROUTE1680.fromNode = "Armature_Clock"
ROUTE1680.fromField = "fraction_changed"
ROUTE1680.toNode = "Armature_OI_l_upperarm"
ROUTE1680.toField = "set_fraction"

Scene6.children.append(ROUTE1680)
ROUTE1681 = x3d.ROUTE()
ROUTE1681.fromNode = "Armature_OI_l_upperarm"
ROUTE1681.fromField = "value_changed"
ROUTE1681.toNode = "hanim_l_upperarm"
ROUTE1681.toField = "set_rotation"

Scene6.children.append(ROUTE1681)
ROUTE1682 = x3d.ROUTE()
ROUTE1682.fromNode = "Armature_Clock"
ROUTE1682.fromField = "fraction_changed"
ROUTE1682.toNode = "Armature_OI_l_forearm"
ROUTE1682.toField = "set_fraction"

Scene6.children.append(ROUTE1682)
ROUTE1683 = x3d.ROUTE()
ROUTE1683.fromNode = "Armature_OI_l_forearm"
ROUTE1683.fromField = "value_changed"
ROUTE1683.toNode = "hanim_l_forearm"
ROUTE1683.toField = "set_rotation"

Scene6.children.append(ROUTE1683)
ROUTE1684 = x3d.ROUTE()
ROUTE1684.fromNode = "Armature_Clock"
ROUTE1684.fromField = "fraction_changed"
ROUTE1684.toNode = "Armature_OI_l_carpal"
ROUTE1684.toField = "set_fraction"

Scene6.children.append(ROUTE1684)
ROUTE1685 = x3d.ROUTE()
ROUTE1685.fromNode = "Armature_OI_l_carpal"
ROUTE1685.fromField = "value_changed"
ROUTE1685.toNode = "hanim_l_carpal"
ROUTE1685.toField = "set_rotation"

Scene6.children.append(ROUTE1685)
ROUTE1686 = x3d.ROUTE()
ROUTE1686.fromNode = "Armature_Clock"
ROUTE1686.fromField = "fraction_changed"
ROUTE1686.toNode = "Armature_OI_l_trapezium"
ROUTE1686.toField = "set_fraction"

Scene6.children.append(ROUTE1686)
ROUTE1687 = x3d.ROUTE()
ROUTE1687.fromNode = "Armature_OI_l_trapezium"
ROUTE1687.fromField = "value_changed"
ROUTE1687.toNode = "hanim_l_trapezium"
ROUTE1687.toField = "set_rotation"

Scene6.children.append(ROUTE1687)
ROUTE1688 = x3d.ROUTE()
ROUTE1688.fromNode = "Armature_Clock"
ROUTE1688.fromField = "fraction_changed"
ROUTE1688.toNode = "Armature_OI_l_metacarpal_1"
ROUTE1688.toField = "set_fraction"

Scene6.children.append(ROUTE1688)
ROUTE1689 = x3d.ROUTE()
ROUTE1689.fromNode = "Armature_OI_l_metacarpal_1"
ROUTE1689.fromField = "value_changed"
ROUTE1689.toNode = "hanim_l_metacarpal_1"
ROUTE1689.toField = "set_rotation"

Scene6.children.append(ROUTE1689)
ROUTE1690 = x3d.ROUTE()
ROUTE1690.fromNode = "Armature_Clock"
ROUTE1690.fromField = "fraction_changed"
ROUTE1690.toNode = "Armature_OI_l_carpal_proximal_phalanx_1"
ROUTE1690.toField = "set_fraction"

Scene6.children.append(ROUTE1690)
ROUTE1691 = x3d.ROUTE()
ROUTE1691.fromNode = "Armature_OI_l_carpal_proximal_phalanx_1"
ROUTE1691.fromField = "value_changed"
ROUTE1691.toNode = "hanim_l_carpal_proximal_phalanx_1"
ROUTE1691.toField = "set_rotation"

Scene6.children.append(ROUTE1691)
ROUTE1692 = x3d.ROUTE()
ROUTE1692.fromNode = "Armature_Clock"
ROUTE1692.fromField = "fraction_changed"
ROUTE1692.toNode = "Armature_OI_l_carpal_distal_phalanx_1"
ROUTE1692.toField = "set_fraction"

Scene6.children.append(ROUTE1692)
ROUTE1693 = x3d.ROUTE()
ROUTE1693.fromNode = "Armature_OI_l_carpal_distal_phalanx_1"
ROUTE1693.fromField = "value_changed"
ROUTE1693.toNode = "hanim_l_carpal_distal_phalanx_1"
ROUTE1693.toField = "set_rotation"

Scene6.children.append(ROUTE1693)
ROUTE1694 = x3d.ROUTE()
ROUTE1694.fromNode = "Armature_Clock"
ROUTE1694.fromField = "fraction_changed"
ROUTE1694.toNode = "Armature_OI_l_trapezoid"
ROUTE1694.toField = "set_fraction"

Scene6.children.append(ROUTE1694)
ROUTE1695 = x3d.ROUTE()
ROUTE1695.fromNode = "Armature_OI_l_trapezoid"
ROUTE1695.fromField = "value_changed"
ROUTE1695.toNode = "hanim_l_trapezoid"
ROUTE1695.toField = "set_rotation"

Scene6.children.append(ROUTE1695)
ROUTE1696 = x3d.ROUTE()
ROUTE1696.fromNode = "Armature_Clock"
ROUTE1696.fromField = "fraction_changed"
ROUTE1696.toNode = "Armature_OI_l_metacarpal_2"
ROUTE1696.toField = "set_fraction"

Scene6.children.append(ROUTE1696)
ROUTE1697 = x3d.ROUTE()
ROUTE1697.fromNode = "Armature_OI_l_metacarpal_2"
ROUTE1697.fromField = "value_changed"
ROUTE1697.toNode = "hanim_l_metacarpal_2"
ROUTE1697.toField = "set_rotation"

Scene6.children.append(ROUTE1697)
ROUTE1698 = x3d.ROUTE()
ROUTE1698.fromNode = "Armature_Clock"
ROUTE1698.fromField = "fraction_changed"
ROUTE1698.toNode = "Armature_OI_l_carpal_proximal_phalanx_2"
ROUTE1698.toField = "set_fraction"

Scene6.children.append(ROUTE1698)
ROUTE1699 = x3d.ROUTE()
ROUTE1699.fromNode = "Armature_OI_l_carpal_proximal_phalanx_2"
ROUTE1699.fromField = "value_changed"
ROUTE1699.toNode = "hanim_l_carpal_proximal_phalanx_2"
ROUTE1699.toField = "set_rotation"

Scene6.children.append(ROUTE1699)
ROUTE1700 = x3d.ROUTE()
ROUTE1700.fromNode = "Armature_Clock"
ROUTE1700.fromField = "fraction_changed"
ROUTE1700.toNode = "Armature_OI_l_carpal_middle_phalanx_2"
ROUTE1700.toField = "set_fraction"

Scene6.children.append(ROUTE1700)
ROUTE1701 = x3d.ROUTE()
ROUTE1701.fromNode = "Armature_OI_l_carpal_middle_phalanx_2"
ROUTE1701.fromField = "value_changed"
ROUTE1701.toNode = "hanim_l_carpal_middle_phalanx_2"
ROUTE1701.toField = "set_rotation"

Scene6.children.append(ROUTE1701)
ROUTE1702 = x3d.ROUTE()
ROUTE1702.fromNode = "Armature_Clock"
ROUTE1702.fromField = "fraction_changed"
ROUTE1702.toNode = "Armature_OI_l_carpal_distal_phalanx_2"
ROUTE1702.toField = "set_fraction"

Scene6.children.append(ROUTE1702)
ROUTE1703 = x3d.ROUTE()
ROUTE1703.fromNode = "Armature_OI_l_carpal_distal_phalanx_2"
ROUTE1703.fromField = "value_changed"
ROUTE1703.toNode = "hanim_l_carpal_distal_phalanx_2"
ROUTE1703.toField = "set_rotation"

Scene6.children.append(ROUTE1703)
ROUTE1704 = x3d.ROUTE()
ROUTE1704.fromNode = "Armature_Clock"
ROUTE1704.fromField = "fraction_changed"
ROUTE1704.toNode = "Armature_OI_l_capitate"
ROUTE1704.toField = "set_fraction"

Scene6.children.append(ROUTE1704)
ROUTE1705 = x3d.ROUTE()
ROUTE1705.fromNode = "Armature_OI_l_capitate"
ROUTE1705.fromField = "value_changed"
ROUTE1705.toNode = "hanim_l_capitate"
ROUTE1705.toField = "set_rotation"

Scene6.children.append(ROUTE1705)
ROUTE1706 = x3d.ROUTE()
ROUTE1706.fromNode = "Armature_Clock"
ROUTE1706.fromField = "fraction_changed"
ROUTE1706.toNode = "Armature_OI_l_metacarpal_3"
ROUTE1706.toField = "set_fraction"

Scene6.children.append(ROUTE1706)
ROUTE1707 = x3d.ROUTE()
ROUTE1707.fromNode = "Armature_OI_l_metacarpal_3"
ROUTE1707.fromField = "value_changed"
ROUTE1707.toNode = "hanim_l_metacarpal_3"
ROUTE1707.toField = "set_rotation"

Scene6.children.append(ROUTE1707)
ROUTE1708 = x3d.ROUTE()
ROUTE1708.fromNode = "Armature_Clock"
ROUTE1708.fromField = "fraction_changed"
ROUTE1708.toNode = "Armature_OI_l_carpal_proximal_phalanx_3"
ROUTE1708.toField = "set_fraction"

Scene6.children.append(ROUTE1708)
ROUTE1709 = x3d.ROUTE()
ROUTE1709.fromNode = "Armature_OI_l_carpal_proximal_phalanx_3"
ROUTE1709.fromField = "value_changed"
ROUTE1709.toNode = "hanim_l_carpal_proximal_phalanx_3"
ROUTE1709.toField = "set_rotation"

Scene6.children.append(ROUTE1709)
ROUTE1710 = x3d.ROUTE()
ROUTE1710.fromNode = "Armature_Clock"
ROUTE1710.fromField = "fraction_changed"
ROUTE1710.toNode = "Armature_OI_l_carpal_middle_phalanx_3"
ROUTE1710.toField = "set_fraction"

Scene6.children.append(ROUTE1710)
ROUTE1711 = x3d.ROUTE()
ROUTE1711.fromNode = "Armature_OI_l_carpal_middle_phalanx_3"
ROUTE1711.fromField = "value_changed"
ROUTE1711.toNode = "hanim_l_carpal_middle_phalanx_3"
ROUTE1711.toField = "set_rotation"

Scene6.children.append(ROUTE1711)
ROUTE1712 = x3d.ROUTE()
ROUTE1712.fromNode = "Armature_Clock"
ROUTE1712.fromField = "fraction_changed"
ROUTE1712.toNode = "Armature_OI_l_carpal_distal_phalanx_3"
ROUTE1712.toField = "set_fraction"

Scene6.children.append(ROUTE1712)
ROUTE1713 = x3d.ROUTE()
ROUTE1713.fromNode = "Armature_OI_l_carpal_distal_phalanx_3"
ROUTE1713.fromField = "value_changed"
ROUTE1713.toNode = "hanim_l_carpal_distal_phalanx_3"
ROUTE1713.toField = "set_rotation"

Scene6.children.append(ROUTE1713)
ROUTE1714 = x3d.ROUTE()
ROUTE1714.fromNode = "Armature_Clock"
ROUTE1714.fromField = "fraction_changed"
ROUTE1714.toNode = "Armature_OI_l_hamate"
ROUTE1714.toField = "set_fraction"

Scene6.children.append(ROUTE1714)
ROUTE1715 = x3d.ROUTE()
ROUTE1715.fromNode = "Armature_OI_l_hamate"
ROUTE1715.fromField = "value_changed"
ROUTE1715.toNode = "hanim_l_hamate"
ROUTE1715.toField = "set_rotation"

Scene6.children.append(ROUTE1715)
ROUTE1716 = x3d.ROUTE()
ROUTE1716.fromNode = "Armature_Clock"
ROUTE1716.fromField = "fraction_changed"
ROUTE1716.toNode = "Armature_OI_l_metacarpal_4"
ROUTE1716.toField = "set_fraction"

Scene6.children.append(ROUTE1716)
ROUTE1717 = x3d.ROUTE()
ROUTE1717.fromNode = "Armature_OI_l_metacarpal_4"
ROUTE1717.fromField = "value_changed"
ROUTE1717.toNode = "hanim_l_metacarpal_4"
ROUTE1717.toField = "set_rotation"

Scene6.children.append(ROUTE1717)
ROUTE1718 = x3d.ROUTE()
ROUTE1718.fromNode = "Armature_Clock"
ROUTE1718.fromField = "fraction_changed"
ROUTE1718.toNode = "Armature_OI_l_carpal_proximal_phalanx_4"
ROUTE1718.toField = "set_fraction"

Scene6.children.append(ROUTE1718)
ROUTE1719 = x3d.ROUTE()
ROUTE1719.fromNode = "Armature_OI_l_carpal_proximal_phalanx_4"
ROUTE1719.fromField = "value_changed"
ROUTE1719.toNode = "hanim_l_carpal_proximal_phalanx_4"
ROUTE1719.toField = "set_rotation"

Scene6.children.append(ROUTE1719)
ROUTE1720 = x3d.ROUTE()
ROUTE1720.fromNode = "Armature_Clock"
ROUTE1720.fromField = "fraction_changed"
ROUTE1720.toNode = "Armature_OI_l_carpal_middle_phalanx_4"
ROUTE1720.toField = "set_fraction"

Scene6.children.append(ROUTE1720)
ROUTE1721 = x3d.ROUTE()
ROUTE1721.fromNode = "Armature_OI_l_carpal_middle_phalanx_4"
ROUTE1721.fromField = "value_changed"
ROUTE1721.toNode = "hanim_l_carpal_middle_phalanx_4"
ROUTE1721.toField = "set_rotation"

Scene6.children.append(ROUTE1721)
ROUTE1722 = x3d.ROUTE()
ROUTE1722.fromNode = "Armature_Clock"
ROUTE1722.fromField = "fraction_changed"
ROUTE1722.toNode = "Armature_OI_l_carpal_distal_phalanx_4"
ROUTE1722.toField = "set_fraction"

Scene6.children.append(ROUTE1722)
ROUTE1723 = x3d.ROUTE()
ROUTE1723.fromNode = "Armature_OI_l_carpal_distal_phalanx_4"
ROUTE1723.fromField = "value_changed"
ROUTE1723.toNode = "hanim_l_carpal_distal_phalanx_4"
ROUTE1723.toField = "set_rotation"

Scene6.children.append(ROUTE1723)
ROUTE1724 = x3d.ROUTE()
ROUTE1724.fromNode = "Armature_Clock"
ROUTE1724.fromField = "fraction_changed"
ROUTE1724.toNode = "Armature_OI_l_metacarpal_5"
ROUTE1724.toField = "set_fraction"

Scene6.children.append(ROUTE1724)
ROUTE1725 = x3d.ROUTE()
ROUTE1725.fromNode = "Armature_OI_l_metacarpal_5"
ROUTE1725.fromField = "value_changed"
ROUTE1725.toNode = "hanim_l_metacarpal_5"
ROUTE1725.toField = "set_rotation"

Scene6.children.append(ROUTE1725)
ROUTE1726 = x3d.ROUTE()
ROUTE1726.fromNode = "Armature_Clock"
ROUTE1726.fromField = "fraction_changed"
ROUTE1726.toNode = "Armature_OI_l_carpal_proximal_phalanx_5"
ROUTE1726.toField = "set_fraction"

Scene6.children.append(ROUTE1726)
ROUTE1727 = x3d.ROUTE()
ROUTE1727.fromNode = "Armature_OI_l_carpal_proximal_phalanx_5"
ROUTE1727.fromField = "value_changed"
ROUTE1727.toNode = "hanim_l_carpal_proximal_phalanx_5"
ROUTE1727.toField = "set_rotation"

Scene6.children.append(ROUTE1727)
ROUTE1728 = x3d.ROUTE()
ROUTE1728.fromNode = "Armature_Clock"
ROUTE1728.fromField = "fraction_changed"
ROUTE1728.toNode = "Armature_OI_l_carpal_middle_phalanx_5"
ROUTE1728.toField = "set_fraction"

Scene6.children.append(ROUTE1728)
ROUTE1729 = x3d.ROUTE()
ROUTE1729.fromNode = "Armature_OI_l_carpal_middle_phalanx_5"
ROUTE1729.fromField = "value_changed"
ROUTE1729.toNode = "hanim_l_carpal_middle_phalanx_5"
ROUTE1729.toField = "set_rotation"

Scene6.children.append(ROUTE1729)
ROUTE1730 = x3d.ROUTE()
ROUTE1730.fromNode = "Armature_Clock"
ROUTE1730.fromField = "fraction_changed"
ROUTE1730.toNode = "Armature_OI_l_carpal_distal_phalanx_5"
ROUTE1730.toField = "set_fraction"

Scene6.children.append(ROUTE1730)
ROUTE1731 = x3d.ROUTE()
ROUTE1731.fromNode = "Armature_OI_l_carpal_distal_phalanx_5"
ROUTE1731.fromField = "value_changed"
ROUTE1731.toNode = "hanim_l_carpal_distal_phalanx_5"
ROUTE1731.toField = "set_rotation"

Scene6.children.append(ROUTE1731)
ROUTE1732 = x3d.ROUTE()
ROUTE1732.fromNode = "Armature_Clock"
ROUTE1732.fromField = "fraction_changed"
ROUTE1732.toNode = "Armature_OI_r_clavicle"
ROUTE1732.toField = "set_fraction"

Scene6.children.append(ROUTE1732)
ROUTE1733 = x3d.ROUTE()
ROUTE1733.fromNode = "Armature_OI_r_clavicle"
ROUTE1733.fromField = "value_changed"
ROUTE1733.toNode = "hanim_r_clavicle"
ROUTE1733.toField = "set_rotation"

Scene6.children.append(ROUTE1733)
ROUTE1734 = x3d.ROUTE()
ROUTE1734.fromNode = "Armature_Clock"
ROUTE1734.fromField = "fraction_changed"
ROUTE1734.toNode = "Armature_OI_r_scapula"
ROUTE1734.toField = "set_fraction"

Scene6.children.append(ROUTE1734)
ROUTE1735 = x3d.ROUTE()
ROUTE1735.fromNode = "Armature_OI_r_scapula"
ROUTE1735.fromField = "value_changed"
ROUTE1735.toNode = "hanim_r_scapula"
ROUTE1735.toField = "set_rotation"

Scene6.children.append(ROUTE1735)
ROUTE1736 = x3d.ROUTE()
ROUTE1736.fromNode = "Armature_Clock"
ROUTE1736.fromField = "fraction_changed"
ROUTE1736.toNode = "Armature_OI_r_upperarm"
ROUTE1736.toField = "set_fraction"

Scene6.children.append(ROUTE1736)
ROUTE1737 = x3d.ROUTE()
ROUTE1737.fromNode = "Armature_OI_r_upperarm"
ROUTE1737.fromField = "value_changed"
ROUTE1737.toNode = "hanim_r_upperarm"
ROUTE1737.toField = "set_rotation"

Scene6.children.append(ROUTE1737)
ROUTE1738 = x3d.ROUTE()
ROUTE1738.fromNode = "Armature_Clock"
ROUTE1738.fromField = "fraction_changed"
ROUTE1738.toNode = "Armature_OI_r_forearm"
ROUTE1738.toField = "set_fraction"

Scene6.children.append(ROUTE1738)
ROUTE1739 = x3d.ROUTE()
ROUTE1739.fromNode = "Armature_OI_r_forearm"
ROUTE1739.fromField = "value_changed"
ROUTE1739.toNode = "hanim_r_forearm"
ROUTE1739.toField = "set_rotation"

Scene6.children.append(ROUTE1739)
ROUTE1740 = x3d.ROUTE()
ROUTE1740.fromNode = "Armature_Clock"
ROUTE1740.fromField = "fraction_changed"
ROUTE1740.toNode = "Armature_OI_r_carpal"
ROUTE1740.toField = "set_fraction"

Scene6.children.append(ROUTE1740)
ROUTE1741 = x3d.ROUTE()
ROUTE1741.fromNode = "Armature_OI_r_carpal"
ROUTE1741.fromField = "value_changed"
ROUTE1741.toNode = "hanim_r_carpal"
ROUTE1741.toField = "set_rotation"

Scene6.children.append(ROUTE1741)
ROUTE1742 = x3d.ROUTE()
ROUTE1742.fromNode = "Armature_Clock"
ROUTE1742.fromField = "fraction_changed"
ROUTE1742.toNode = "Armature_OI_r_trapezium"
ROUTE1742.toField = "set_fraction"

Scene6.children.append(ROUTE1742)
ROUTE1743 = x3d.ROUTE()
ROUTE1743.fromNode = "Armature_OI_r_trapezium"
ROUTE1743.fromField = "value_changed"
ROUTE1743.toNode = "hanim_r_trapezium"
ROUTE1743.toField = "set_rotation"

Scene6.children.append(ROUTE1743)
ROUTE1744 = x3d.ROUTE()
ROUTE1744.fromNode = "Armature_Clock"
ROUTE1744.fromField = "fraction_changed"
ROUTE1744.toNode = "Armature_OI_r_metacarpal_1"
ROUTE1744.toField = "set_fraction"

Scene6.children.append(ROUTE1744)
ROUTE1745 = x3d.ROUTE()
ROUTE1745.fromNode = "Armature_OI_r_metacarpal_1"
ROUTE1745.fromField = "value_changed"
ROUTE1745.toNode = "hanim_r_metacarpal_1"
ROUTE1745.toField = "set_rotation"

Scene6.children.append(ROUTE1745)
ROUTE1746 = x3d.ROUTE()
ROUTE1746.fromNode = "Armature_Clock"
ROUTE1746.fromField = "fraction_changed"
ROUTE1746.toNode = "Armature_OI_r_carpal_proximal_phalanx_1"
ROUTE1746.toField = "set_fraction"

Scene6.children.append(ROUTE1746)
ROUTE1747 = x3d.ROUTE()
ROUTE1747.fromNode = "Armature_OI_r_carpal_proximal_phalanx_1"
ROUTE1747.fromField = "value_changed"
ROUTE1747.toNode = "hanim_r_carpal_proximal_phalanx_1"
ROUTE1747.toField = "set_rotation"

Scene6.children.append(ROUTE1747)
ROUTE1748 = x3d.ROUTE()
ROUTE1748.fromNode = "Armature_Clock"
ROUTE1748.fromField = "fraction_changed"
ROUTE1748.toNode = "Armature_OI_r_carpal_distal_phalanx_1"
ROUTE1748.toField = "set_fraction"

Scene6.children.append(ROUTE1748)
ROUTE1749 = x3d.ROUTE()
ROUTE1749.fromNode = "Armature_OI_r_carpal_distal_phalanx_1"
ROUTE1749.fromField = "value_changed"
ROUTE1749.toNode = "hanim_r_carpal_distal_phalanx_1"
ROUTE1749.toField = "set_rotation"

Scene6.children.append(ROUTE1749)
ROUTE1750 = x3d.ROUTE()
ROUTE1750.fromNode = "Armature_Clock"
ROUTE1750.fromField = "fraction_changed"
ROUTE1750.toNode = "Armature_OI_r_trapezoid"
ROUTE1750.toField = "set_fraction"

Scene6.children.append(ROUTE1750)
ROUTE1751 = x3d.ROUTE()
ROUTE1751.fromNode = "Armature_OI_r_trapezoid"
ROUTE1751.fromField = "value_changed"
ROUTE1751.toNode = "hanim_r_trapezoid"
ROUTE1751.toField = "set_rotation"

Scene6.children.append(ROUTE1751)
ROUTE1752 = x3d.ROUTE()
ROUTE1752.fromNode = "Armature_Clock"
ROUTE1752.fromField = "fraction_changed"
ROUTE1752.toNode = "Armature_OI_r_metacarpal_2"
ROUTE1752.toField = "set_fraction"

Scene6.children.append(ROUTE1752)
ROUTE1753 = x3d.ROUTE()
ROUTE1753.fromNode = "Armature_OI_r_metacarpal_2"
ROUTE1753.fromField = "value_changed"
ROUTE1753.toNode = "hanim_r_metacarpal_2"
ROUTE1753.toField = "set_rotation"

Scene6.children.append(ROUTE1753)
ROUTE1754 = x3d.ROUTE()
ROUTE1754.fromNode = "Armature_Clock"
ROUTE1754.fromField = "fraction_changed"
ROUTE1754.toNode = "Armature_OI_r_carpal_proximal_phalanx_2"
ROUTE1754.toField = "set_fraction"

Scene6.children.append(ROUTE1754)
ROUTE1755 = x3d.ROUTE()
ROUTE1755.fromNode = "Armature_OI_r_carpal_proximal_phalanx_2"
ROUTE1755.fromField = "value_changed"
ROUTE1755.toNode = "hanim_r_carpal_proximal_phalanx_2"
ROUTE1755.toField = "set_rotation"

Scene6.children.append(ROUTE1755)
ROUTE1756 = x3d.ROUTE()
ROUTE1756.fromNode = "Armature_Clock"
ROUTE1756.fromField = "fraction_changed"
ROUTE1756.toNode = "Armature_OI_r_carpal_middle_phalanx_2"
ROUTE1756.toField = "set_fraction"

Scene6.children.append(ROUTE1756)
ROUTE1757 = x3d.ROUTE()
ROUTE1757.fromNode = "Armature_OI_r_carpal_middle_phalanx_2"
ROUTE1757.fromField = "value_changed"
ROUTE1757.toNode = "hanim_r_carpal_middle_phalanx_2"
ROUTE1757.toField = "set_rotation"

Scene6.children.append(ROUTE1757)
ROUTE1758 = x3d.ROUTE()
ROUTE1758.fromNode = "Armature_Clock"
ROUTE1758.fromField = "fraction_changed"
ROUTE1758.toNode = "Armature_OI_r_carpal_distal_phalanx_2"
ROUTE1758.toField = "set_fraction"

Scene6.children.append(ROUTE1758)
ROUTE1759 = x3d.ROUTE()
ROUTE1759.fromNode = "Armature_OI_r_carpal_distal_phalanx_2"
ROUTE1759.fromField = "value_changed"
ROUTE1759.toNode = "hanim_r_carpal_distal_phalanx_2"
ROUTE1759.toField = "set_rotation"

Scene6.children.append(ROUTE1759)
ROUTE1760 = x3d.ROUTE()
ROUTE1760.fromNode = "Armature_Clock"
ROUTE1760.fromField = "fraction_changed"
ROUTE1760.toNode = "Armature_OI_r_capitate"
ROUTE1760.toField = "set_fraction"

Scene6.children.append(ROUTE1760)
ROUTE1761 = x3d.ROUTE()
ROUTE1761.fromNode = "Armature_OI_r_capitate"
ROUTE1761.fromField = "value_changed"
ROUTE1761.toNode = "hanim_r_capitate"
ROUTE1761.toField = "set_rotation"

Scene6.children.append(ROUTE1761)
ROUTE1762 = x3d.ROUTE()
ROUTE1762.fromNode = "Armature_Clock"
ROUTE1762.fromField = "fraction_changed"
ROUTE1762.toNode = "Armature_OI_r_metacarpal_3"
ROUTE1762.toField = "set_fraction"

Scene6.children.append(ROUTE1762)
ROUTE1763 = x3d.ROUTE()
ROUTE1763.fromNode = "Armature_OI_r_metacarpal_3"
ROUTE1763.fromField = "value_changed"
ROUTE1763.toNode = "hanim_r_metacarpal_3"
ROUTE1763.toField = "set_rotation"

Scene6.children.append(ROUTE1763)
ROUTE1764 = x3d.ROUTE()
ROUTE1764.fromNode = "Armature_Clock"
ROUTE1764.fromField = "fraction_changed"
ROUTE1764.toNode = "Armature_OI_r_carpal_proximal_phalanx_3"
ROUTE1764.toField = "set_fraction"

Scene6.children.append(ROUTE1764)
ROUTE1765 = x3d.ROUTE()
ROUTE1765.fromNode = "Armature_OI_r_carpal_proximal_phalanx_3"
ROUTE1765.fromField = "value_changed"
ROUTE1765.toNode = "hanim_r_carpal_proximal_phalanx_3"
ROUTE1765.toField = "set_rotation"

Scene6.children.append(ROUTE1765)
ROUTE1766 = x3d.ROUTE()
ROUTE1766.fromNode = "Armature_Clock"
ROUTE1766.fromField = "fraction_changed"
ROUTE1766.toNode = "Armature_OI_r_carpal_middle_phalanx_3"
ROUTE1766.toField = "set_fraction"

Scene6.children.append(ROUTE1766)
ROUTE1767 = x3d.ROUTE()
ROUTE1767.fromNode = "Armature_OI_r_carpal_middle_phalanx_3"
ROUTE1767.fromField = "value_changed"
ROUTE1767.toNode = "hanim_r_carpal_middle_phalanx_3"
ROUTE1767.toField = "set_rotation"

Scene6.children.append(ROUTE1767)
ROUTE1768 = x3d.ROUTE()
ROUTE1768.fromNode = "Armature_Clock"
ROUTE1768.fromField = "fraction_changed"
ROUTE1768.toNode = "Armature_OI_r_carpal_distal_phalanx_3"
ROUTE1768.toField = "set_fraction"

Scene6.children.append(ROUTE1768)
ROUTE1769 = x3d.ROUTE()
ROUTE1769.fromNode = "Armature_OI_r_carpal_distal_phalanx_3"
ROUTE1769.fromField = "value_changed"
ROUTE1769.toNode = "hanim_r_carpal_distal_phalanx_3"
ROUTE1769.toField = "set_rotation"

Scene6.children.append(ROUTE1769)
ROUTE1770 = x3d.ROUTE()
ROUTE1770.fromNode = "Armature_Clock"
ROUTE1770.fromField = "fraction_changed"
ROUTE1770.toNode = "Armature_OI_r_hamate"
ROUTE1770.toField = "set_fraction"

Scene6.children.append(ROUTE1770)
ROUTE1771 = x3d.ROUTE()
ROUTE1771.fromNode = "Armature_OI_r_hamate"
ROUTE1771.fromField = "value_changed"
ROUTE1771.toNode = "hanim_r_hamate"
ROUTE1771.toField = "set_rotation"

Scene6.children.append(ROUTE1771)
ROUTE1772 = x3d.ROUTE()
ROUTE1772.fromNode = "Armature_Clock"
ROUTE1772.fromField = "fraction_changed"
ROUTE1772.toNode = "Armature_OI_r_metacarpal_4"
ROUTE1772.toField = "set_fraction"

Scene6.children.append(ROUTE1772)
ROUTE1773 = x3d.ROUTE()
ROUTE1773.fromNode = "Armature_OI_r_metacarpal_4"
ROUTE1773.fromField = "value_changed"
ROUTE1773.toNode = "hanim_r_metacarpal_4"
ROUTE1773.toField = "set_rotation"

Scene6.children.append(ROUTE1773)
ROUTE1774 = x3d.ROUTE()
ROUTE1774.fromNode = "Armature_Clock"
ROUTE1774.fromField = "fraction_changed"
ROUTE1774.toNode = "Armature_OI_r_carpal_proximal_phalanx_4"
ROUTE1774.toField = "set_fraction"

Scene6.children.append(ROUTE1774)
ROUTE1775 = x3d.ROUTE()
ROUTE1775.fromNode = "Armature_OI_r_carpal_proximal_phalanx_4"
ROUTE1775.fromField = "value_changed"
ROUTE1775.toNode = "hanim_r_carpal_proximal_phalanx_4"
ROUTE1775.toField = "set_rotation"

Scene6.children.append(ROUTE1775)
ROUTE1776 = x3d.ROUTE()
ROUTE1776.fromNode = "Armature_Clock"
ROUTE1776.fromField = "fraction_changed"
ROUTE1776.toNode = "Armature_OI_r_carpal_middle_phalanx_4"
ROUTE1776.toField = "set_fraction"

Scene6.children.append(ROUTE1776)
ROUTE1777 = x3d.ROUTE()
ROUTE1777.fromNode = "Armature_OI_r_carpal_middle_phalanx_4"
ROUTE1777.fromField = "value_changed"
ROUTE1777.toNode = "hanim_r_carpal_middle_phalanx_4"
ROUTE1777.toField = "set_rotation"

Scene6.children.append(ROUTE1777)
ROUTE1778 = x3d.ROUTE()
ROUTE1778.fromNode = "Armature_Clock"
ROUTE1778.fromField = "fraction_changed"
ROUTE1778.toNode = "Armature_OI_r_carpal_distal_phalanx_4"
ROUTE1778.toField = "set_fraction"

Scene6.children.append(ROUTE1778)
ROUTE1779 = x3d.ROUTE()
ROUTE1779.fromNode = "Armature_OI_r_carpal_distal_phalanx_4"
ROUTE1779.fromField = "value_changed"
ROUTE1779.toNode = "hanim_r_carpal_distal_phalanx_4"
ROUTE1779.toField = "set_rotation"

Scene6.children.append(ROUTE1779)
ROUTE1780 = x3d.ROUTE()
ROUTE1780.fromNode = "Armature_Clock"
ROUTE1780.fromField = "fraction_changed"
ROUTE1780.toNode = "Armature_OI_r_metacarpal_5"
ROUTE1780.toField = "set_fraction"

Scene6.children.append(ROUTE1780)
ROUTE1781 = x3d.ROUTE()
ROUTE1781.fromNode = "Armature_OI_r_metacarpal_5"
ROUTE1781.fromField = "value_changed"
ROUTE1781.toNode = "hanim_r_metacarpal_5"
ROUTE1781.toField = "set_rotation"

Scene6.children.append(ROUTE1781)
ROUTE1782 = x3d.ROUTE()
ROUTE1782.fromNode = "Armature_Clock"
ROUTE1782.fromField = "fraction_changed"
ROUTE1782.toNode = "Armature_OI_r_carpal_proximal_phalanx_5"
ROUTE1782.toField = "set_fraction"

Scene6.children.append(ROUTE1782)
ROUTE1783 = x3d.ROUTE()
ROUTE1783.fromNode = "Armature_OI_r_carpal_proximal_phalanx_5"
ROUTE1783.fromField = "value_changed"
ROUTE1783.toNode = "hanim_r_carpal_proximal_phalanx_5"
ROUTE1783.toField = "set_rotation"

Scene6.children.append(ROUTE1783)
ROUTE1784 = x3d.ROUTE()
ROUTE1784.fromNode = "Armature_Clock"
ROUTE1784.fromField = "fraction_changed"
ROUTE1784.toNode = "Armature_OI_r_carpal_middle_phalanx_5"
ROUTE1784.toField = "set_fraction"

Scene6.children.append(ROUTE1784)
ROUTE1785 = x3d.ROUTE()
ROUTE1785.fromNode = "Armature_OI_r_carpal_middle_phalanx_5"
ROUTE1785.fromField = "value_changed"
ROUTE1785.toNode = "hanim_r_carpal_middle_phalanx_5"
ROUTE1785.toField = "set_rotation"

Scene6.children.append(ROUTE1785)
ROUTE1786 = x3d.ROUTE()
ROUTE1786.fromNode = "Armature_Clock"
ROUTE1786.fromField = "fraction_changed"
ROUTE1786.toNode = "Armature_OI_r_carpal_distal_phalanx_5"
ROUTE1786.toField = "set_fraction"

Scene6.children.append(ROUTE1786)
ROUTE1787 = x3d.ROUTE()
ROUTE1787.fromNode = "Armature_OI_r_carpal_distal_phalanx_5"
ROUTE1787.fromField = "value_changed"
ROUTE1787.toNode = "hanim_r_carpal_distal_phalanx_5"
ROUTE1787.toField = "set_rotation"

Scene6.children.append(ROUTE1787)

X3D0.Scene = Scene6
f = open("../data/blenderSkeleton.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/blenderSkeleton.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/blenderSkeleton.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
