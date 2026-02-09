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
meta3.content = "JoeDemo5JoeSkin5.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "joe kick into std anims"

head1.children.append(meta4)

X3D0.head = head1
Scene5 = x3d.Scene()
WorldInfo6 = x3d.WorldInfo()
WorldInfo6.title = "JoeDemo5JoeSkin.x3d, Only Skin"

Scene5.children.append(WorldInfo6)
NavigationInfo7 = x3d.NavigationInfo()
NavigationInfo7.headlight = False

Scene5.children.append(NavigationInfo7)
Background8 = x3d.Background(DEF="Background1")
Background8.skyColor = [(0.4, 0.4, 0.4)]
Background8.groundColor = [(0.5, 0.5, 0.5)]

Scene5.children.append(Background8)
DirectionalLight9 = x3d.DirectionalLight()
DirectionalLight9.global_ = True

Scene5.children.append(DirectionalLight9)
DirectionalLight10 = x3d.DirectionalLight()
DirectionalLight10.direction = [0,0.5,0]
DirectionalLight10.global_ = True
DirectionalLight10.intensity = 0.75

Scene5.children.append(DirectionalLight10)
DirectionalLight11 = x3d.DirectionalLight()
DirectionalLight11.direction = [0,0,1]
DirectionalLight11.global_ = True

Scene5.children.append(DirectionalLight11)
Group12 = x3d.Group(DEF="SceneViewpoints")
Viewpoint13 = x3d.Viewpoint()
Viewpoint13.centerOfRotation = [0,1,0]
Viewpoint13.description = "JinLOA4"
Viewpoint13.position = [0,1,3]

Group12.children.append(Viewpoint13)
Viewpoint14 = x3d.Viewpoint()
Viewpoint14.centerOfRotation = [0,0.9,0.0016]
Viewpoint14.description = "JinLOA4 Front"
Viewpoint14.position = [0,0.4,4]

Group12.children.append(Viewpoint14)
Viewpoint15 = x3d.Viewpoint()
Viewpoint15.centerOfRotation = [0,0.9,0.0016]
Viewpoint15.description = "JinLOA4 Front Close"
Viewpoint15.position = [0,0.8,2]

Group12.children.append(Viewpoint15)
Viewpoint16 = x3d.Viewpoint()
Viewpoint16.centerOfRotation = [0,0.9,0.0016]
Viewpoint16.description = "JinLOA4 Front Closer"
Viewpoint16.position = [0,1.2,1]

Group12.children.append(Viewpoint16)
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.centerOfRotation = [0,1.5,0.0016]
Viewpoint17.description = "JinLOA4 Front Face"
Viewpoint17.position = [0,1.63,1]

Group12.children.append(Viewpoint17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.centerOfRotation = [0,0.9,0.0016]
Viewpoint18.description = "JinLOA4 Right Side"
Viewpoint18.orientation = [0,1,0,1.57]
Viewpoint18.position = [2.6,0.8,0]

Group12.children.append(Viewpoint18)
Viewpoint19 = x3d.Viewpoint()
Viewpoint19.centerOfRotation = [0,0.9,0.0016]
Viewpoint19.description = "JinLOA4 Right Side Close"
Viewpoint19.orientation = [0,1,0,1.2]
Viewpoint19.position = [1,0.8,0.5]

Group12.children.append(Viewpoint19)
Viewpoint20 = x3d.Viewpoint()
Viewpoint20.centerOfRotation = [0,0.9,0.0016]
Viewpoint20.description = "JinLOA4 Left Side Close"
Viewpoint20.orientation = [0,1,0,-1.2]
Viewpoint20.position = [-1,0.8,0.5]

Group12.children.append(Viewpoint20)
Viewpoint21 = x3d.Viewpoint()
Viewpoint21.centerOfRotation = [0,0.9,0.0016]
Viewpoint21.description = "JinLOA4 Left Side"
Viewpoint21.orientation = [0,1,0,-1.57]
Viewpoint21.position = [-2.6,0.8,0]

Group12.children.append(Viewpoint21)
Viewpoint22 = x3d.Viewpoint()
Viewpoint22.centerOfRotation = [0,0.9,0.0016]
Viewpoint22.description = "JinLOA4 Top"
Viewpoint22.orientation = [1,0,0,-1.5708]
Viewpoint22.position = [0,3.5,0]

Group12.children.append(Viewpoint22)

Scene5.children.append(Group12)
Transform23 = x3d.Transform(DEF="HostCoordSys")
Transform23.scale = [0.17,0.17,0.17]
Inline24 = x3d.Inline()
Inline24.url = ["JointCoordinateAxes.x3dv"]

Transform23.children.append(Inline24)
Viewpoint25 = x3d.Viewpoint(DEF="HostCoordSysView")
Viewpoint25.description = "Host 0 0 0 View"

Transform23.children.append(Viewpoint25)

Scene5.children.append(Transform23)
Group26 = x3d.Group(DEF="Joe_Humanoid")
HAnimHumanoid27 = x3d.HAnimHumanoid(DEF="JoeHuman")
HAnimHumanoid27.version = "2.0"
HAnimJoint28 = x3d.HAnimJoint(DEF="hanim_humanoid_root")
HAnimJoint28.name = "humanoid_root"
HAnimJoint28.center = [0,0.875,0]
HAnimSite29 = x3d.HAnimSite(DEF="Joe_RootView1")
HAnimSite29.name = "RootFront"
Transform30 = x3d.Transform(DEF="HAnimCoordSys")
Transform30.scale = [0.17,0.17,0.17]
Inline31 = x3d.Inline()
Inline31.url = ["JointCoordinateAxes.x3dv"]

Transform30.children.append(Inline31)
Viewpoint32 = x3d.Viewpoint(DEF="HAnimCoordSysView")
Viewpoint32.description = "HAnim 0 0 0 View"

Transform30.children.append(Viewpoint32)

HAnimSite29.children.append(Transform30)

HAnimJoint28.children.append(HAnimSite29)
HAnimJoint33 = x3d.HAnimJoint(DEF="Joe_sacroiliac")
HAnimJoint33.name = "sacroiliac"
HAnimJoint33.center = [0,0.920000016689301,0]
HAnimJoint33.skinCoordIndex = [17,19,20,21,22,23,26,27,73,82,89,91,93]
HAnimJoint33.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,0.349999994039536,0.349999994039536,1]
HAnimJoint34 = x3d.HAnimJoint(DEF="hanim_l_hip")
HAnimJoint34.name = "l_hip"
HAnimJoint34.center = [0.100000001490116,0.920000016689301,0]
HAnimJoint34.skinCoordIndex = [89,90,94,95,96,97]
HAnimJoint34.skinCoordWeight = [0.649999976158142,1,1,1,1,1]
HAnimJoint35 = x3d.HAnimJoint(DEF="hanim_l_knee")
HAnimJoint35.name = "l_knee"
HAnimJoint35.center = [0.115000002086163,0.465999990701675,0]
HAnimJoint35.skinCoordIndex = [334,335,336,337,338,339,340,341]
HAnimJoint35.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint36 = x3d.HAnimJoint(DEF="hanim_l_talocrural")
HAnimJoint36.name = "l_talocrural"
HAnimJoint36.center = [0.115000002086163,0.0689999982714653,0]
HAnimJoint36.skinCoordIndex = [342,343,344,345]
HAnimJoint36.skinCoordWeight = [1,1,1,1]
HAnimJoint37 = x3d.HAnimJoint(DEF="Joe_l_tarsometatarsal_2")
HAnimJoint37.name = "l_tarsometatarsal_2"
HAnimJoint37.center = [0.115000002086163,0.0309999994933605,0.0299999993294477]
HAnimJoint37.skinCoordIndex = [346,347,348,71]
HAnimJoint37.skinCoordWeight = [1,1,1,1]
HAnimJoint38 = x3d.HAnimJoint(DEF="Joe_l_metatarsophalangeal_2")
HAnimJoint38.name = "l_metatarsophalangeal_2"
HAnimJoint38.center = [0.115000002086163,0.0370000004768372,0.0900000035762787]
HAnimJoint38.skinCoordIndex = [349,350,351,352]
HAnimJoint38.skinCoordWeight = [1,1,1,1]
HAnimJoint39 = x3d.HAnimJoint(DEF="Joe_l_metatarsal_2")
HAnimJoint39.name = "l_metatarsal_2"
HAnimJoint39.center = [0.115000002086163,0.0199999995529652,0.122000001370907]
HAnimJoint39.skinCoordIndex = [353,354,355,356,357,358,359,360,361]
HAnimJoint39.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint38.children.append(HAnimJoint39)

HAnimJoint37.children.append(HAnimJoint38)

HAnimJoint36.children.append(HAnimJoint37)

HAnimJoint35.children.append(HAnimJoint36)

HAnimJoint34.children.append(HAnimJoint35)

HAnimJoint33.children.append(HAnimJoint34)
HAnimJoint40 = x3d.HAnimJoint(DEF="hanim_r_hip")
HAnimJoint40.name = "r_hip"
HAnimJoint40.center = [-0.100000001490116,0.920000016689301,0]
HAnimJoint40.skinCoordIndex = [91,92,98,99,100,101,362,363]
HAnimJoint40.skinCoordWeight = [0.649999976158142,1,0.800000011920929,1,1,1,0.400000005960464,0.800000011920929]
HAnimJoint41 = x3d.HAnimJoint(DEF="hanim_r_knee")
HAnimJoint41.name = "r_knee"
HAnimJoint41.center = [-0.0500000007450581,0.465999990701675,0]
HAnimJoint41.skinCoordIndex = [362,363,364,365,366,367,368,369,98]
HAnimJoint41.skinCoordWeight = [0.600000023841858,0.200000002980232,1,1,1,1,1,1,0.200000002980232]
HAnimJoint42 = x3d.HAnimJoint(DEF="hanim_r_talocrural")
HAnimJoint42.name = "r_talocrural"
HAnimJoint42.center = [-0.115000002086163,0.0689999982714653,0]
HAnimJoint42.skinCoordIndex = [370,371,372,373]
HAnimJoint42.skinCoordWeight = [1,1,1,1]
HAnimJoint43 = x3d.HAnimJoint(DEF="Joe_r_tarsometatarsal_2")
HAnimJoint43.name = "r_tarsometatarsal_2"
HAnimJoint43.center = [-0.100000001490116,0.0149999996647239,-0.00999999977648258]
HAnimJoint43.skinCoordIndex = [374,375,376]
HAnimJoint43.skinCoordWeight = [1,1,1]
HAnimJoint44 = x3d.HAnimJoint(DEF="Joe_r_metatarsophalangeal_2")
HAnimJoint44.name = "r_metatarsophalangeal_2"
HAnimJoint44.center = [-0.115000002086163,0.0370000004768372,0.0900000035762787]
HAnimJoint44.skinCoordIndex = [377,378,379,380]
HAnimJoint44.skinCoordWeight = [1,1,1,1]
HAnimJoint45 = x3d.HAnimJoint(DEF="Joe_r_tarsal_distal_interphalangeal_2")
HAnimJoint45.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint45.center = [-0.100000001490116,0.00999999977648258,0.140000000596046]
HAnimJoint45.skinCoordIndex = [381,382,383,384,385,386,387,388,389]
HAnimJoint45.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint44.children.append(HAnimJoint45)

HAnimJoint43.children.append(HAnimJoint44)

HAnimJoint42.children.append(HAnimJoint43)

HAnimJoint41.children.append(HAnimJoint42)

HAnimJoint40.children.append(HAnimJoint41)

HAnimJoint33.children.append(HAnimJoint40)

HAnimJoint28.children.append(HAnimJoint33)
HAnimJoint46 = x3d.HAnimJoint(DEF="hanim_vl5")
HAnimJoint46.name = "vl5"
HAnimJoint46.center = [0,1.04499995708466,-0.0949999988079071]
HAnimJoint46.skinCoordIndex = [28,76]
HAnimJoint46.skinCoordWeight = [1,1]
HAnimJoint47 = x3d.HAnimJoint(DEF="hanim_vl4")
HAnimJoint47.name = "vl4"
HAnimJoint47.center = [0,1.067999958992,-0.0850000008940697]
HAnimJoint48 = x3d.HAnimJoint(DEF="hanim_vl3")
HAnimJoint48.name = "vl3"
HAnimJoint48.center = [0,1.09200000762939,-0.0724999979138374]
HAnimJoint49 = x3d.HAnimJoint(DEF="hanim_vl2")
HAnimJoint49.name = "vl2"
HAnimJoint49.center = [0,1.12000000476837,-0.0649999976158142]
HAnimJoint49.skinCoordIndex = [16,18,25,83,84,85,86,87,88]
HAnimJoint49.skinCoordWeight = [1,1,1,1,1,1,0.699999988079071,1,0.800000011920929]
HAnimJoint50 = x3d.HAnimJoint(DEF="hanim_vl1")
HAnimJoint50.name = "vl1"
HAnimJoint50.center = [0,1.14590001106262,-0.0625]
HAnimJoint51 = x3d.HAnimJoint(DEF="hanim_vt12")
HAnimJoint51.name = "vt12"
HAnimJoint51.center = [0,1.17900002002716,-0.068000003695488]
HAnimJoint52 = x3d.HAnimJoint(DEF="hanim_vt11")
HAnimJoint52.name = "vt11"
HAnimJoint52.center = [0,1.26789999008179,-0.0810000002384186]
HAnimJoint53 = x3d.HAnimJoint(DEF="hanim_vt10")
HAnimJoint53.name = "vt10"
HAnimJoint53.center = [0,1.24199998378754,-0.0900000035762787]
HAnimJoint53.skinCoordIndex = [15]
HAnimJoint53.skinCoordWeight = [1]
HAnimJoint54 = x3d.HAnimJoint(DEF="hanim_vt9")
HAnimJoint54.name = "vt9"
HAnimJoint54.center = [0,1.26800000667572,-0.100000001490116]
HAnimJoint54.skinCoordIndex = [13,14]
HAnimJoint54.skinCoordWeight = [1,1]
HAnimJoint55 = x3d.HAnimJoint(DEF="hanim_vt8")
HAnimJoint55.name = "vt8"
HAnimJoint55.center = [0,1.2940000295639,-0.109999999403954]
HAnimJoint56 = x3d.HAnimJoint(DEF="hanim_vt7")
HAnimJoint56.name = "vt7"
HAnimJoint56.center = [0,1.32299995422363,-0.115500003099442]
HAnimJoint57 = x3d.HAnimJoint(DEF="hanim_vt6")
HAnimJoint57.name = "vt6"
HAnimJoint57.center = [0,1.35199999809265,-0.119999997317791]
HAnimJoint58 = x3d.HAnimJoint(DEF="hanim_vt5")
HAnimJoint58.name = "vt5"
HAnimJoint58.center = [0,1.38100004196167,-0.123499996960163]
HAnimJoint59 = x3d.HAnimJoint(DEF="hanim_vt4")
HAnimJoint59.name = "vt4"
HAnimJoint59.center = [0,1.4099999666214,-0.123499996960163]
HAnimJoint59.skinCoordIndex = [81]
HAnimJoint59.skinCoordWeight = [1]
HAnimJoint60 = x3d.HAnimJoint(DEF="hanim_vt3")
HAnimJoint60.name = "vt3"
HAnimJoint60.center = [0,1.43799996376038,-0.119999997317791]
HAnimJoint61 = x3d.HAnimJoint(DEF="hanim_vt2")
HAnimJoint61.name = "vt2"
HAnimJoint61.center = [0,1.46800005435944,-0.104999996721745]
HAnimJoint62 = x3d.HAnimJoint(DEF="hanim_vt1")
HAnimJoint62.name = "vt1"
HAnimJoint62.center = [0,1.49699997901917,-0.0900000035762787]
HAnimJoint62.skinCoordIndex = [11,24]
HAnimJoint62.skinCoordWeight = [1,1]
HAnimJoint63 = x3d.HAnimJoint(DEF="hanim_vc7")
HAnimJoint63.name = "vc7"
HAnimJoint63.center = [0,1.52499997615814,-0.0719999969005585]
HAnimJoint63.skinCoordIndex = [74,75]
HAnimJoint63.skinCoordWeight = [1,1]
HAnimJoint64 = x3d.HAnimJoint(DEF="hanim_vc6")
HAnimJoint64.name = "vc6"
HAnimJoint64.center = [0,1.53999996185303,-0.0500000007450581]
HAnimJoint65 = x3d.HAnimJoint(DEF="hanim_vc5")
HAnimJoint65.name = "vc5"
HAnimJoint65.center = [0,1.55200004577637,-0.0350000001490116]
HAnimJoint66 = x3d.HAnimJoint(DEF="hanim_vc4")
HAnimJoint66.name = "vc4"
HAnimJoint66.center = [0,1.56749999523163,-0.0255999993532896]
HAnimJoint67 = x3d.HAnimJoint(DEF="hanim_vc3")
HAnimJoint67.name = "vc3"
HAnimJoint67.center = [0,1.58224999904633,-0.0185000002384186]
HAnimJoint68 = x3d.HAnimJoint(DEF="hanim_vc2")
HAnimJoint68.name = "vc2"
HAnimJoint68.center = [0,1.59500002861023,-0.0175000000745058]
HAnimJoint69 = x3d.HAnimJoint(DEF="hanim_vc1")
HAnimJoint69.name = "vc1"
HAnimJoint69.center = [0,1.61000001430511,-0.0149999996647239]
HAnimJoint70 = x3d.HAnimJoint(DEF="hanim_skullbase")
HAnimJoint70.name = "skullbase"
HAnimJoint70.center = [0,1.62999999523163,-0.00999999977648258]
HAnimJoint70.skinCoordIndex = [0,1,2,3,4,5,6,7,8,9]
HAnimJoint70.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1]
HAnimJoint71 = x3d.HAnimJoint(DEF="hanim_l_eyeball_joint")
HAnimJoint71.name = "l_eyeball_joint"
HAnimJoint71.center = [0.034000001847744,1.65900003910065,0.0599999986588955]

HAnimJoint70.children.append(HAnimJoint71)
HAnimJoint72 = x3d.HAnimJoint(DEF="hanim_r_eyeball_joint")
HAnimJoint72.name = "r_eyeball_joint"
HAnimJoint72.center = [-0.034000001847744,1.65900003910065,0.0599999986588955]

HAnimJoint70.children.append(HAnimJoint72)

HAnimJoint69.children.append(HAnimJoint70)

HAnimJoint68.children.append(HAnimJoint69)

HAnimJoint67.children.append(HAnimJoint68)

HAnimJoint66.children.append(HAnimJoint67)

HAnimJoint65.children.append(HAnimJoint66)

HAnimJoint64.children.append(HAnimJoint65)

HAnimJoint63.children.append(HAnimJoint64)
HAnimJoint73 = x3d.HAnimJoint(DEF="hanim_l_sternoclavicular")
HAnimJoint73.name = "l_sternoclavicular"
HAnimJoint73.center = [0.0820000022649765,1.44879996776581,-0.035300001502037]
HAnimJoint73.skinCoordIndex = [12]
HAnimJoint73.skinCoordWeight = [1]
HAnimJoint74 = x3d.HAnimJoint(DEF="hanim_l_acromioclavicular")
HAnimJoint74.name = "l_acromioclavicular"
HAnimJoint74.center = [0.0961999967694283,1.42690002918243,-0.0423999987542629]
HAnimJoint74.skinCoordIndex = [79]
HAnimJoint74.skinCoordWeight = [1]
HAnimJoint75 = x3d.HAnimJoint(DEF="hanim_l_shoulder")
HAnimJoint75.name = "l_shoulder"
HAnimJoint75.center = [0.200000002980232,1.44000005722046,-0.0399999991059303]
HAnimJoint75.skinCoordIndex = [41,42,44,80,102,103,104,105]
HAnimJoint75.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint76 = x3d.HAnimJoint(DEF="hanim_l_elbow")
HAnimJoint76.name = "l_elbow"
HAnimJoint76.center = [0.200000002980232,1.13880002498627,-0.0399999991059303]
HAnimJoint76.skinCoordIndex = [45,46,47,109,110,111,112,113,115,116,117,118]
HAnimJoint76.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
HAnimJoint77 = x3d.HAnimJoint(DEF="Joe_l_radiocarpal")
HAnimJoint77.name = "l_radiocarpal"
HAnimJoint77.center = [0.200000002980232,0.870000004768372,-0.0399999991059303]
HAnimJoint77.skinCoordIndex = [119,120,121,122,123,124,125,126]
HAnimJoint77.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint78 = x3d.HAnimJoint(DEF="Joe_l_carpometacarpal_1")
HAnimJoint78.name = "l_carpometacarpal_1"
HAnimJoint78.center = [0.192399993538857,0.847199976444244,-0.0533999986946583]
HAnimJoint78.skinCoordIndex = [127,128]
HAnimJoint78.skinCoordWeight = [1,1]
HAnimJoint79 = x3d.HAnimJoint(DEF="Joe_l_metacarpophalangeal_1")
HAnimJoint79.name = "l_metacarpophalangeal_1"
HAnimJoint79.center = [0.195099994540215,0.82260000705719,0.0245999991893768]
HAnimJoint79.skinCoordIndex = [138,139,140,141,142,143]
HAnimJoint79.skinCoordWeight = [0.5,0.5,0.5,1,1,1]
HAnimJoint80 = x3d.HAnimJoint(DEF="Joe_l_carpal_interphalangeal_1")
HAnimJoint80.name = "l_carpal_interphalangeal_1"
HAnimJoint80.center = [0.195500001311302,0.815900027751923,0.046399999409914]
HAnimJoint80.skinCoordIndex = [144,145,146,147,148,149,150,151,152]
HAnimJoint80.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint79.children.append(HAnimJoint80)

HAnimJoint78.children.append(HAnimJoint79)

HAnimJoint77.children.append(HAnimJoint78)
HAnimJoint81 = x3d.HAnimJoint(DEF="Joe_l_carpometacarpal_2")
HAnimJoint81.name = "l_carpometacarpal_2"
HAnimJoint81.center = [0.198300004005432,0.80239999294281,-0.0280000008642673]
HAnimJoint81.skinCoordIndex = [129,130]
HAnimJoint81.skinCoordWeight = [1,1]
HAnimJoint82 = x3d.HAnimJoint(DEF="Joe_l_metacarpophalangeal_2")
HAnimJoint82.name = "l_metacarpophalangeal_2"
HAnimJoint82.center = [0.198300004005432,0.781499981880188,-0.0280000008642673]
HAnimJoint82.skinCoordIndex = [138,139,140,153,154,155,163]
HAnimJoint82.skinCoordWeight = [0.5,0.5,0.5,1,1,1,0.5]
HAnimJoint83 = x3d.HAnimJoint(DEF="Joe_l_carpal_proximal_interphalangeal_2")
HAnimJoint83.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint83.center = [0.201700001955032,0.736299991607666,-0.0248000007122755]
HAnimJoint83.skinCoordIndex = [166,167,168,169]
HAnimJoint83.skinCoordWeight = [1,1,1,1]
HAnimJoint84 = x3d.HAnimJoint(DEF="Joe_l_carpal_distal_interphalangeal_2")
HAnimJoint84.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint84.center = [0.202800005674362,0.713900029659271,-0.0236000008881092]
HAnimJoint84.skinCoordIndex = [170,171,172,173,174,175,176,177,178]
HAnimJoint84.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint83.children.append(HAnimJoint84)

HAnimJoint82.children.append(HAnimJoint83)

HAnimJoint81.children.append(HAnimJoint82)

HAnimJoint77.children.append(HAnimJoint81)
HAnimJoint85 = x3d.HAnimJoint(DEF="Joe_l_carpometacarpal_3")
HAnimJoint85.name = "l_carpometacarpal_3"
HAnimJoint85.center = [0.198699995875359,0.802900016307831,-0.0529999993741512]
HAnimJoint85.skinCoordIndex = [131,132]
HAnimJoint85.skinCoordWeight = [1,1]
HAnimJoint86 = x3d.HAnimJoint(DEF="Joe_l_metacarpophalangeal_3")
HAnimJoint86.name = "l_metacarpophalangeal_3"
HAnimJoint86.center = [0.198699995875359,0.781799972057343,-0.0529999993741512]
HAnimJoint86.skinCoordIndex = [156,157,163,164]
HAnimJoint86.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint87 = x3d.HAnimJoint(DEF="Joe_l_carpal_proximal_interphalangeal_3")
HAnimJoint87.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint87.center = [0.201299995183945,0.727299988269806,-0.0502999983727932]
HAnimJoint87.skinCoordIndex = [179,180,181,182]
HAnimJoint87.skinCoordWeight = [1,1,1,1]
HAnimJoint88 = x3d.HAnimJoint(DEF="Joe_l_carpal_distal_interphalangeal_3")
HAnimJoint88.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint88.center = [0.202600002288818,0.701099991798401,-0.0494000017642975]
HAnimJoint88.skinCoordIndex = [183,184,185,186,187,188,189,190,191]
HAnimJoint88.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint87.children.append(HAnimJoint88)

HAnimJoint86.children.append(HAnimJoint87)

HAnimJoint85.children.append(HAnimJoint86)

HAnimJoint77.children.append(HAnimJoint85)
HAnimJoint89 = x3d.HAnimJoint(DEF="Joe_l_carpometacarpal_4")
HAnimJoint89.name = "l_carpometacarpal_4"
HAnimJoint89.center = [0.195600003004074,0.801900029182434,-0.0794000029563904]
HAnimJoint89.skinCoordIndex = [133,134]
HAnimJoint89.skinCoordWeight = [1,1]
HAnimJoint90 = x3d.HAnimJoint(DEF="Joe_l_metacarpophalangeal_4")
HAnimJoint90.name = "l_metacarpophalangeal_4"
HAnimJoint90.center = [0.195600003004074,0.781499981880188,-0.0794000029563904]
HAnimJoint90.skinCoordIndex = [158,159,164,165]
HAnimJoint90.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint91 = x3d.HAnimJoint(DEF="Joe_l_carpal_proximal_interphalangeal_4")
HAnimJoint91.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint91.center = [0.197300001978874,0.72869998216629,-0.0776999965310097]
HAnimJoint91.skinCoordIndex = [192,193,194,195]
HAnimJoint91.skinCoordWeight = [1,1,1,1]
HAnimJoint92 = x3d.HAnimJoint(DEF="Joe_l_carpal_distal_interphalangeal_4")
HAnimJoint92.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint92.center = [0.198300004005432,0.704500019550323,-0.0767000019550323]
HAnimJoint92.skinCoordIndex = [196,197,198,199,200,201,202,203,204]
HAnimJoint92.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint91.children.append(HAnimJoint92)

HAnimJoint90.children.append(HAnimJoint91)

HAnimJoint89.children.append(HAnimJoint90)

HAnimJoint77.children.append(HAnimJoint89)
HAnimJoint93 = x3d.HAnimJoint(DEF="Joe_l_carpometacarpal_5")
HAnimJoint93.name = "l_carpometacarpal_5"
HAnimJoint93.center = [0.192499995231628,0.806599974632263,-0.10360000282526]
HAnimJoint93.skinCoordIndex = [135,136,137,165]
HAnimJoint93.skinCoordWeight = [1,1,1,0.5]
HAnimJoint94 = x3d.HAnimJoint(DEF="Joe_l_metacarpophalangeal_5")
HAnimJoint94.name = "l_metacarpophalangeal_5"
HAnimJoint94.center = [0.192499995231628,0.78659999370575,-0.10360000282526]
HAnimJoint94.skinCoordIndex = [160,161,162]
HAnimJoint94.skinCoordWeight = [1,1,1]
HAnimJoint95 = x3d.HAnimJoint(DEF="Joe_l_carpal_proximal_interphalangeal_5")
HAnimJoint95.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint95.center = [0.193800002336502,0.745199978351593,-0.102399997413158]
HAnimJoint95.skinCoordIndex = [205,206,207,208]
HAnimJoint95.skinCoordWeight = [1,1,1,1]
HAnimJoint96 = x3d.HAnimJoint(DEF="Joe_l_carpal_distal_interphalangeal_5")
HAnimJoint96.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint96.center = [0.19480000436306,0.727699995040894,-0.101700000464916]
HAnimJoint96.skinCoordIndex = [209,210,211,212,213,214,215,216,217]
HAnimJoint96.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint95.children.append(HAnimJoint96)

HAnimJoint94.children.append(HAnimJoint95)

HAnimJoint93.children.append(HAnimJoint94)

HAnimJoint77.children.append(HAnimJoint93)

HAnimJoint76.children.append(HAnimJoint77)

HAnimJoint75.children.append(HAnimJoint76)

HAnimJoint74.children.append(HAnimJoint75)

HAnimJoint73.children.append(HAnimJoint74)

HAnimJoint63.children.append(HAnimJoint73)
HAnimJoint97 = x3d.HAnimJoint(DEF="hanim_r_sternoclavicular")
HAnimJoint97.name = "r_sternoclavicular"
HAnimJoint97.center = [-0.0299999993294477,1.46000003814697,0]
HAnimJoint97.skinCoordIndex = [10]
HAnimJoint97.skinCoordWeight = [1]
HAnimJoint98 = x3d.HAnimJoint(DEF="hanim_r_acromioclavicular")
HAnimJoint98.name = "r_acromioclavicular"
HAnimJoint98.center = [-0.0900000035762787,1.4099999666214,-0.109999999403954]
HAnimJoint98.skinCoordIndex = [77,29]
HAnimJoint98.skinCoordWeight = [1,0.899999976158142]
HAnimJoint99 = x3d.HAnimJoint(DEF="hanim_r_shoulder")
HAnimJoint99.name = "r_shoulder"
HAnimJoint99.center = [-0.200000002980232,1.44000005722046,-0.0399999991059303]
HAnimJoint99.skinCoordIndex = [29,30,32,78,218,219,220,221,86,88]
HAnimJoint99.skinCoordWeight = [0.100000001490116,1,1,1,1,1,1,1,0.300000011920929,0.200000002980232]
HAnimJoint100 = x3d.HAnimJoint(DEF="hanim_r_elbow")
HAnimJoint100.name = "r_elbow"
HAnimJoint100.center = [-0.200000002980232,1.13880002498627,-0.0399999991059303]
HAnimJoint100.skinCoordIndex = [33,34,35,225,226,227,228,229,231,232,233,234]
HAnimJoint100.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1]
HAnimJoint101 = x3d.HAnimJoint(DEF="Joe_r_radiocarpal")
HAnimJoint101.name = "r_radiocarpal"
HAnimJoint101.center = [-0.200000002980232,0.889999985694885,-0.0399999991059303]
HAnimJoint101.skinCoordIndex = [235,236,237,238,239,240,241,242]
HAnimJoint101.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint102 = x3d.HAnimJoint(DEF="Joe_r_carpometacarpal_1")
HAnimJoint102.name = "r_carpometacarpal_1"
HAnimJoint102.center = [-0.200000002980232,0.850000023841858,0]
HAnimJoint102.skinCoordIndex = [243,244]
HAnimJoint102.skinCoordWeight = [1,1]
HAnimJoint103 = x3d.HAnimJoint(DEF="Joe_r_metacarpophalangeal_1")
HAnimJoint103.name = "r_metacarpophalangeal_1"
HAnimJoint103.center = [-0.200000002980232,0.819999992847443,0.0299999993294477]
HAnimJoint103.skinCoordIndex = [254,255,256,257,258,259]
HAnimJoint103.skinCoordWeight = [0.5,0.5,0.5,1,1,1]
HAnimJoint104 = x3d.HAnimJoint(DEF="Joe_r_carpal_interphalangeal_1")
HAnimJoint104.name = "r_carpal_interphalangeal_1"
HAnimJoint104.center = [-0.200000002980232,0.800000011920929,0.0500000007450581]
HAnimJoint104.skinCoordIndex = [260,261,262,263,264,265,266,267,268]
HAnimJoint104.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint103.children.append(HAnimJoint104)

HAnimJoint102.children.append(HAnimJoint103)

HAnimJoint101.children.append(HAnimJoint102)
HAnimJoint105 = x3d.HAnimJoint(DEF="Joe_r_carpometacarpal_2")
HAnimJoint105.name = "r_carpometacarpal_2"
HAnimJoint105.center = [-0.200000002980232,0.839999973773956,-0.0149999996647239]
HAnimJoint105.skinCoordIndex = [245,246]
HAnimJoint105.skinCoordWeight = [1,1]
HAnimJoint106 = x3d.HAnimJoint(DEF="Joe_r_metacarpophalangeal_2")
HAnimJoint106.name = "r_metacarpophalangeal_2"
HAnimJoint106.center = [-0.200000002980232,0.792999982833862,-0.0149999996647239]
HAnimJoint106.skinCoordIndex = [254,255,256,269,270,271,279]
HAnimJoint106.skinCoordWeight = [0.5,0.5,0.5,1,1,1,0.5]
HAnimJoint107 = x3d.HAnimJoint(DEF="Joe_r_carpal_proximal_interphalangeal_2")
HAnimJoint107.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint107.center = [-0.200000002980232,0.745000004768372,-0.0149999996647239]
HAnimJoint107.skinCoordIndex = [282,283,284,285]
HAnimJoint107.skinCoordWeight = [1,1,1,1]
HAnimJoint108 = x3d.HAnimJoint(DEF="Joe_r_carpal_distal_interphalangeal_2")
HAnimJoint108.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint108.center = [-0.200000002980232,0.720000028610229,-0.0149999996647239]
HAnimJoint108.skinCoordIndex = [286,287,288,289,290,291,292,293,294]
HAnimJoint108.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint107.children.append(HAnimJoint108)

HAnimJoint106.children.append(HAnimJoint107)

HAnimJoint105.children.append(HAnimJoint106)

HAnimJoint101.children.append(HAnimJoint105)
HAnimJoint109 = x3d.HAnimJoint(DEF="Joe_r_carpometacarpal_3")
HAnimJoint109.name = "r_carpometacarpal_3"
HAnimJoint109.center = [-0.200000002980232,0.834999978542328,-0.0399999991059303]
HAnimJoint109.skinCoordIndex = [247,248]
HAnimJoint109.skinCoordWeight = [1,1]
HAnimJoint110 = x3d.HAnimJoint(DEF="Joe_r_metacarpophalangeal_3")
HAnimJoint110.name = "r_metacarpophalangeal_3"
HAnimJoint110.center = [-0.200000002980232,0.787999987602234,-0.0399999991059303]
HAnimJoint110.skinCoordIndex = [272,273,279,280]
HAnimJoint110.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint111 = x3d.HAnimJoint(DEF="Joe_r_carpal_proximal_interphalangeal_3")
HAnimJoint111.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint111.center = [-0.200000002980232,0.740000009536743,-0.0399999991059303]
HAnimJoint111.skinCoordIndex = [295,296,297,298]
HAnimJoint111.skinCoordWeight = [1,1,1,1]
HAnimJoint112 = x3d.HAnimJoint(DEF="Joe_r_carpal_distal_interphalangeal_3")
HAnimJoint112.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint112.center = [-0.200000002980232,0.714200019836426,-0.0399999991059303]
HAnimJoint112.skinCoordIndex = [299,300,301,302,303,304,305,306,307]
HAnimJoint112.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint111.children.append(HAnimJoint112)

HAnimJoint110.children.append(HAnimJoint111)

HAnimJoint109.children.append(HAnimJoint110)

HAnimJoint101.children.append(HAnimJoint109)
HAnimJoint113 = x3d.HAnimJoint(DEF="Joe_r_carpometacarpal_4")
HAnimJoint113.name = "r_carpometacarpal_4"
HAnimJoint113.center = [-0.200000002980232,0.834999978542328,-0.0649999976158142]
HAnimJoint113.skinCoordIndex = [249,250]
HAnimJoint113.skinCoordWeight = [1,1]
HAnimJoint114 = x3d.HAnimJoint(DEF="Joe_r_metacarpophalangeal_4")
HAnimJoint114.name = "r_metacarpophalangeal_4"
HAnimJoint114.center = [-0.200000002980232,0.792999982833862,-0.0649999976158142]
HAnimJoint114.skinCoordIndex = [274,275,280,281]
HAnimJoint114.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint115 = x3d.HAnimJoint(DEF="Joe_r_carpal_proximal_interphalangeal_4")
HAnimJoint115.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint115.center = [-0.200000002980232,0.740000009536743,-0.0649999976158142]
HAnimJoint115.skinCoordIndex = [308,309,310,311]
HAnimJoint115.skinCoordWeight = [1,1,1,1]
HAnimJoint116 = x3d.HAnimJoint(DEF="Joe_r_carpal_distal_interphalangeal_4")
HAnimJoint116.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint116.center = [-0.200000002980232,0.717700004577637,-0.0649999976158142]
HAnimJoint116.skinCoordIndex = [312,313,314,315,316,317,318,319,320]
HAnimJoint116.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint115.children.append(HAnimJoint116)

HAnimJoint114.children.append(HAnimJoint115)

HAnimJoint113.children.append(HAnimJoint114)

HAnimJoint101.children.append(HAnimJoint113)
HAnimJoint117 = x3d.HAnimJoint(DEF="Joe_r_carpometacarpal_5")
HAnimJoint117.name = "r_carpometacarpal_5"
HAnimJoint117.center = [-0.200000002980232,0.839999973773956,-0.0850000008940697]
HAnimJoint117.skinCoordIndex = [251,252,253,281]
HAnimJoint117.skinCoordWeight = [1,1,1,0.5]
HAnimJoint118 = x3d.HAnimJoint(DEF="Joe_r_metacarpophalangeal_5")
HAnimJoint118.name = "r_metacarpophalangeal_5"
HAnimJoint118.center = [-0.200000002980232,0.790000021457672,-0.0850000008940697]
HAnimJoint118.skinCoordIndex = [276,277,278]
HAnimJoint118.skinCoordWeight = [1,1,1]
HAnimJoint119 = x3d.HAnimJoint(DEF="Joe_r_carpal_proximal_interphalangeal_5")
HAnimJoint119.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint119.center = [-0.200000002980232,0.754999995231628,-0.0850000008940697]
HAnimJoint119.skinCoordIndex = [321,322,323,324]
HAnimJoint119.skinCoordWeight = [1,1,1,1]
HAnimJoint120 = x3d.HAnimJoint(DEF="Joe_r_carpal_distal_interphalangeal_5")
HAnimJoint120.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint120.center = [-0.200000002980232,0.735000014305115,-0.0900000035762787]
HAnimJoint120.skinCoordIndex = [325,326,327,328,329,330,331,332,333]
HAnimJoint120.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint119.children.append(HAnimJoint120)

HAnimJoint118.children.append(HAnimJoint119)

HAnimJoint117.children.append(HAnimJoint118)

HAnimJoint101.children.append(HAnimJoint117)

HAnimJoint100.children.append(HAnimJoint101)

HAnimJoint99.children.append(HAnimJoint100)

HAnimJoint98.children.append(HAnimJoint99)

HAnimJoint97.children.append(HAnimJoint98)

HAnimJoint63.children.append(HAnimJoint97)

HAnimJoint62.children.append(HAnimJoint63)

HAnimJoint61.children.append(HAnimJoint62)

HAnimJoint60.children.append(HAnimJoint61)

HAnimJoint59.children.append(HAnimJoint60)

HAnimJoint58.children.append(HAnimJoint59)

HAnimJoint57.children.append(HAnimJoint58)

HAnimJoint56.children.append(HAnimJoint57)

HAnimJoint55.children.append(HAnimJoint56)

HAnimJoint54.children.append(HAnimJoint55)

HAnimJoint53.children.append(HAnimJoint54)

HAnimJoint52.children.append(HAnimJoint53)

HAnimJoint51.children.append(HAnimJoint52)

HAnimJoint50.children.append(HAnimJoint51)

HAnimJoint49.children.append(HAnimJoint50)

HAnimJoint48.children.append(HAnimJoint49)

HAnimJoint47.children.append(HAnimJoint48)

HAnimJoint46.children.append(HAnimJoint47)

HAnimJoint28.children.append(HAnimJoint46)

HAnimHumanoid27.joints.append(HAnimJoint28)
HAnimJoint121 = x3d.HAnimJoint(USE="Joe_sacroiliac")

HAnimHumanoid27.joints.append(HAnimJoint121)
HAnimJoint122 = x3d.HAnimJoint(USE="hanim_l_hip")

HAnimHumanoid27.joints.append(HAnimJoint122)
HAnimJoint123 = x3d.HAnimJoint(USE="hanim_l_knee")

HAnimHumanoid27.joints.append(HAnimJoint123)
HAnimJoint124 = x3d.HAnimJoint(USE="hanim_l_talocrural")

HAnimHumanoid27.joints.append(HAnimJoint124)
HAnimJoint125 = x3d.HAnimJoint(USE="Joe_l_tarsometatarsal_2")

HAnimHumanoid27.joints.append(HAnimJoint125)
HAnimJoint126 = x3d.HAnimJoint(USE="Joe_l_metatarsophalangeal_2")

HAnimHumanoid27.joints.append(HAnimJoint126)
HAnimJoint127 = x3d.HAnimJoint(USE="Joe_l_metatarsal_2")

HAnimHumanoid27.joints.append(HAnimJoint127)
HAnimJoint128 = x3d.HAnimJoint(USE="hanim_r_hip")

HAnimHumanoid27.joints.append(HAnimJoint128)
HAnimJoint129 = x3d.HAnimJoint(USE="hanim_r_knee")

HAnimHumanoid27.joints.append(HAnimJoint129)
HAnimJoint130 = x3d.HAnimJoint(USE="hanim_r_talocrural")

HAnimHumanoid27.joints.append(HAnimJoint130)
HAnimJoint131 = x3d.HAnimJoint(USE="Joe_r_tarsometatarsal_2")

HAnimHumanoid27.joints.append(HAnimJoint131)
HAnimJoint132 = x3d.HAnimJoint(USE="Joe_r_metatarsophalangeal_2")

HAnimHumanoid27.joints.append(HAnimJoint132)
HAnimJoint133 = x3d.HAnimJoint(USE="Joe_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid27.joints.append(HAnimJoint133)
HAnimJoint134 = x3d.HAnimJoint(USE="hanim_vl5")

HAnimHumanoid27.joints.append(HAnimJoint134)
HAnimJoint135 = x3d.HAnimJoint(USE="hanim_vl4")

HAnimHumanoid27.joints.append(HAnimJoint135)
HAnimJoint136 = x3d.HAnimJoint(USE="hanim_vl3")

HAnimHumanoid27.joints.append(HAnimJoint136)
HAnimJoint137 = x3d.HAnimJoint(USE="hanim_vl2")

HAnimHumanoid27.joints.append(HAnimJoint137)
HAnimJoint138 = x3d.HAnimJoint(USE="hanim_vl1")

HAnimHumanoid27.joints.append(HAnimJoint138)
HAnimJoint139 = x3d.HAnimJoint(USE="hanim_vt12")

HAnimHumanoid27.joints.append(HAnimJoint139)
HAnimJoint140 = x3d.HAnimJoint(USE="hanim_vt11")

HAnimHumanoid27.joints.append(HAnimJoint140)
HAnimJoint141 = x3d.HAnimJoint(USE="hanim_vt10")

HAnimHumanoid27.joints.append(HAnimJoint141)
HAnimJoint142 = x3d.HAnimJoint(USE="hanim_vt9")

HAnimHumanoid27.joints.append(HAnimJoint142)
HAnimJoint143 = x3d.HAnimJoint(USE="hanim_vt8")

HAnimHumanoid27.joints.append(HAnimJoint143)
HAnimJoint144 = x3d.HAnimJoint(USE="hanim_vt7")

HAnimHumanoid27.joints.append(HAnimJoint144)
HAnimJoint145 = x3d.HAnimJoint(USE="hanim_vt6")

HAnimHumanoid27.joints.append(HAnimJoint145)
HAnimJoint146 = x3d.HAnimJoint(USE="hanim_vt5")

HAnimHumanoid27.joints.append(HAnimJoint146)
HAnimJoint147 = x3d.HAnimJoint(USE="hanim_vt4")

HAnimHumanoid27.joints.append(HAnimJoint147)
HAnimJoint148 = x3d.HAnimJoint(USE="hanim_vt3")

HAnimHumanoid27.joints.append(HAnimJoint148)
HAnimJoint149 = x3d.HAnimJoint(USE="hanim_vt2")

HAnimHumanoid27.joints.append(HAnimJoint149)
HAnimJoint150 = x3d.HAnimJoint(USE="hanim_vt1")

HAnimHumanoid27.joints.append(HAnimJoint150)
HAnimJoint151 = x3d.HAnimJoint(USE="hanim_vc7")

HAnimHumanoid27.joints.append(HAnimJoint151)
HAnimJoint152 = x3d.HAnimJoint(USE="hanim_vc6")

HAnimHumanoid27.joints.append(HAnimJoint152)
HAnimJoint153 = x3d.HAnimJoint(USE="hanim_vc5")

HAnimHumanoid27.joints.append(HAnimJoint153)
HAnimJoint154 = x3d.HAnimJoint(USE="hanim_vc4")

HAnimHumanoid27.joints.append(HAnimJoint154)
HAnimJoint155 = x3d.HAnimJoint(USE="hanim_vc3")

HAnimHumanoid27.joints.append(HAnimJoint155)
HAnimJoint156 = x3d.HAnimJoint(USE="hanim_vc2")

HAnimHumanoid27.joints.append(HAnimJoint156)
HAnimJoint157 = x3d.HAnimJoint(USE="hanim_vc1")

HAnimHumanoid27.joints.append(HAnimJoint157)
HAnimJoint158 = x3d.HAnimJoint(USE="hanim_skullbase")

HAnimHumanoid27.joints.append(HAnimJoint158)
HAnimJoint159 = x3d.HAnimJoint(USE="hanim_l_eyeball_joint")

HAnimHumanoid27.joints.append(HAnimJoint159)
HAnimJoint160 = x3d.HAnimJoint(USE="hanim_r_eyeball_joint")

HAnimHumanoid27.joints.append(HAnimJoint160)
HAnimJoint161 = x3d.HAnimJoint(USE="hanim_l_sternoclavicular")

HAnimHumanoid27.joints.append(HAnimJoint161)
HAnimJoint162 = x3d.HAnimJoint(USE="hanim_l_acromioclavicular")

HAnimHumanoid27.joints.append(HAnimJoint162)
HAnimJoint163 = x3d.HAnimJoint(USE="hanim_l_shoulder")

HAnimHumanoid27.joints.append(HAnimJoint163)
HAnimJoint164 = x3d.HAnimJoint(USE="hanim_l_elbow")

HAnimHumanoid27.joints.append(HAnimJoint164)
HAnimJoint165 = x3d.HAnimJoint(USE="Joe_l_radiocarpal")

HAnimHumanoid27.joints.append(HAnimJoint165)
HAnimJoint166 = x3d.HAnimJoint(USE="Joe_l_carpometacarpal_1")

HAnimHumanoid27.joints.append(HAnimJoint166)
HAnimJoint167 = x3d.HAnimJoint(USE="Joe_l_metacarpophalangeal_1")

HAnimHumanoid27.joints.append(HAnimJoint167)
HAnimJoint168 = x3d.HAnimJoint(USE="Joe_l_carpal_interphalangeal_1")

HAnimHumanoid27.joints.append(HAnimJoint168)
HAnimJoint169 = x3d.HAnimJoint(USE="Joe_l_carpometacarpal_2")

HAnimHumanoid27.joints.append(HAnimJoint169)
HAnimJoint170 = x3d.HAnimJoint(USE="Joe_l_metacarpophalangeal_2")

HAnimHumanoid27.joints.append(HAnimJoint170)
HAnimJoint171 = x3d.HAnimJoint(USE="Joe_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid27.joints.append(HAnimJoint171)
HAnimJoint172 = x3d.HAnimJoint(USE="Joe_l_carpal_distal_interphalangeal_2")

HAnimHumanoid27.joints.append(HAnimJoint172)
HAnimJoint173 = x3d.HAnimJoint(USE="Joe_l_carpometacarpal_3")

HAnimHumanoid27.joints.append(HAnimJoint173)
HAnimJoint174 = x3d.HAnimJoint(USE="Joe_l_metacarpophalangeal_3")

HAnimHumanoid27.joints.append(HAnimJoint174)
HAnimJoint175 = x3d.HAnimJoint(USE="Joe_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid27.joints.append(HAnimJoint175)
HAnimJoint176 = x3d.HAnimJoint(USE="Joe_l_carpal_distal_interphalangeal_3")

HAnimHumanoid27.joints.append(HAnimJoint176)
HAnimJoint177 = x3d.HAnimJoint(USE="Joe_l_carpometacarpal_4")

HAnimHumanoid27.joints.append(HAnimJoint177)
HAnimJoint178 = x3d.HAnimJoint(USE="Joe_l_metacarpophalangeal_4")

HAnimHumanoid27.joints.append(HAnimJoint178)
HAnimJoint179 = x3d.HAnimJoint(USE="Joe_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid27.joints.append(HAnimJoint179)
HAnimJoint180 = x3d.HAnimJoint(USE="Joe_l_carpal_distal_interphalangeal_4")

HAnimHumanoid27.joints.append(HAnimJoint180)
HAnimJoint181 = x3d.HAnimJoint(USE="Joe_l_carpometacarpal_5")

HAnimHumanoid27.joints.append(HAnimJoint181)
HAnimJoint182 = x3d.HAnimJoint(USE="Joe_l_metacarpophalangeal_5")

HAnimHumanoid27.joints.append(HAnimJoint182)
HAnimJoint183 = x3d.HAnimJoint(USE="Joe_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid27.joints.append(HAnimJoint183)
HAnimJoint184 = x3d.HAnimJoint(USE="Joe_l_carpal_distal_interphalangeal_5")

HAnimHumanoid27.joints.append(HAnimJoint184)
HAnimJoint185 = x3d.HAnimJoint(USE="hanim_r_sternoclavicular")

HAnimHumanoid27.joints.append(HAnimJoint185)
HAnimJoint186 = x3d.HAnimJoint(USE="hanim_r_acromioclavicular")

HAnimHumanoid27.joints.append(HAnimJoint186)
HAnimJoint187 = x3d.HAnimJoint(USE="hanim_r_shoulder")

HAnimHumanoid27.joints.append(HAnimJoint187)
HAnimJoint188 = x3d.HAnimJoint(USE="hanim_r_elbow")

HAnimHumanoid27.joints.append(HAnimJoint188)
HAnimJoint189 = x3d.HAnimJoint(USE="Joe_r_radiocarpal")

HAnimHumanoid27.joints.append(HAnimJoint189)
HAnimJoint190 = x3d.HAnimJoint(USE="Joe_r_carpometacarpal_1")

HAnimHumanoid27.joints.append(HAnimJoint190)
HAnimJoint191 = x3d.HAnimJoint(USE="Joe_r_metacarpophalangeal_1")

HAnimHumanoid27.joints.append(HAnimJoint191)
HAnimJoint192 = x3d.HAnimJoint(USE="Joe_r_carpal_interphalangeal_1")

HAnimHumanoid27.joints.append(HAnimJoint192)
HAnimJoint193 = x3d.HAnimJoint(USE="Joe_r_carpometacarpal_2")

HAnimHumanoid27.joints.append(HAnimJoint193)
HAnimJoint194 = x3d.HAnimJoint(USE="Joe_r_metacarpophalangeal_2")

HAnimHumanoid27.joints.append(HAnimJoint194)
HAnimJoint195 = x3d.HAnimJoint(USE="Joe_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid27.joints.append(HAnimJoint195)
HAnimJoint196 = x3d.HAnimJoint(USE="Joe_r_carpal_distal_interphalangeal_2")

HAnimHumanoid27.joints.append(HAnimJoint196)
HAnimJoint197 = x3d.HAnimJoint(USE="Joe_r_carpometacarpal_3")

HAnimHumanoid27.joints.append(HAnimJoint197)
HAnimJoint198 = x3d.HAnimJoint(USE="Joe_r_metacarpophalangeal_3")

HAnimHumanoid27.joints.append(HAnimJoint198)
HAnimJoint199 = x3d.HAnimJoint(USE="Joe_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid27.joints.append(HAnimJoint199)
HAnimJoint200 = x3d.HAnimJoint(USE="Joe_r_carpal_distal_interphalangeal_3")

HAnimHumanoid27.joints.append(HAnimJoint200)
HAnimJoint201 = x3d.HAnimJoint(USE="Joe_r_carpometacarpal_4")

HAnimHumanoid27.joints.append(HAnimJoint201)
HAnimJoint202 = x3d.HAnimJoint(USE="Joe_r_metacarpophalangeal_4")

HAnimHumanoid27.joints.append(HAnimJoint202)
HAnimJoint203 = x3d.HAnimJoint(USE="Joe_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid27.joints.append(HAnimJoint203)
HAnimJoint204 = x3d.HAnimJoint(USE="Joe_r_carpal_distal_interphalangeal_4")

HAnimHumanoid27.joints.append(HAnimJoint204)
HAnimJoint205 = x3d.HAnimJoint(USE="Joe_r_carpometacarpal_5")

HAnimHumanoid27.joints.append(HAnimJoint205)
HAnimJoint206 = x3d.HAnimJoint(USE="Joe_r_metacarpophalangeal_5")

HAnimHumanoid27.joints.append(HAnimJoint206)
HAnimJoint207 = x3d.HAnimJoint(USE="Joe_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid27.joints.append(HAnimJoint207)
HAnimJoint208 = x3d.HAnimJoint(USE="Joe_r_carpal_distal_interphalangeal_5")

HAnimHumanoid27.joints.append(HAnimJoint208)
HAnimJoint209 = x3d.HAnimJoint(USE="hanim_humanoid_root")

HAnimHumanoid27.joints.append(HAnimJoint209)
Shape210 = x3d.Shape()
IndexedFaceSet211 = x3d.IndexedFaceSet()
IndexedFaceSet211.coordIndex = [0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]
IndexedFaceSet211.creaseAngle = 3.09999990463257
IndexedFaceSet211.colorPerVertex = False
Coordinate212 = x3d.Coordinate(DEF="JoeSkinCoord")
Coordinate212.point = [(0, 1.76999998092651, 0),(0, 1.66499996185303, 0.0900000035762787),(-0.0329999998211861, 1.62000000476837, 0.0869999974966049),(0.0329999998211861, 1.62000000476837, 0.0869999974966049),(0, 1.54999995231628, 0.0970000028610229),(-0.0769999995827675, 1.63999998569489, -0.00999999977648258),(-0.0527000017464161, 1.58000004291534, 0.0149999996647239),(0.0769999995827675, 1.63999998569489, -0.00999999977648258),(0.0527000017464161, 1.58000004291534, 0.0149999996647239),(0, 1.625, -0.0925000011920929),(-0.0299999993294477, 1.46000003814697, 0.0350000001490116),(0, 1.44000005722046, 0.0299999993294477),(0.0299999993294477, 1.46000003814697, 0.0350000001490116),(-0.113499999046326, 1.317999958992, 0.0949999988079071),(0.113499999046326, 1.317999958992, 0.0949999988079071),(0, 1.25, 0.112999998033047),(-0.0869999974966049, 1.19000005722046, 0.0900000035762787),(-0.0935000032186508, 1.02999997138977, 0.0750000029802322),(0.0869999974966049, 1.19000005722046, 0.0900000035762787),(0.0935000032186508, 1.02999997138977, 0.0750000029802322),(-0.142499998211861, 1.06500005722046, 0.00329999998211861),(-0.150000005960464, 0.899999976158142, -0.00999999977648258),(0.142499998211861, 1.06500005722046, 0.00329999998211861),(0.150000005960464, 0.899999976158142, -0.00999999977648258),(0, 1.52999997138977, -0.0839999988675117),(0.00490000005811453, 1.19079995155334, -0.111299999058247),(-0.0772999972105026, 1.01900005340576, -0.119999997317791),(0.0772999972105026, 1.01900005340576, -0.119999997317791),(0.00499999988824129, 1.09150004386902, -0.109099999070168),(-0.178000003099442, 1.48249995708466, -0.0625),(-0.170000001788139, 1.37999999523163, 0.00700000021606684),(-0.188400000333786, 0.86760002374649, -0.0359999984502792),(-0.159999996423721, 1.37999999523163, -0.127000004053116),(-0.200000002980232, 1.13880002498627, -0.0799999982118607),(-0.244000002741814, 1.13880002498627, -0.0399999991059303),(-0.165000006556511, 1.13880002498627, -0.0399999991059303),(-0.230000004172325, 1.13300001621246, -0.0549999997019768),(-0.197699993848801, 0.816900014877319, -0.0176999997347593),(-0.194100007414818, 0.677200019359589, -0.0423000007867813),(-0.21170000731945, 0.856199979782104, -0.0584000013768673),(-0.192900002002716, 0.788999974727631, -0.10639999806881),(0.174999997019768, 1.48249995708466, -0.0599999986588955),(0.170000001788139, 1.37999999523163, 0.00700000021606684),(0.190099999308586, 0.864499986171722, -0.0414999984204769),(0.159999996423721, 1.37999999523163, -0.125),(0.200000002980232, 1.13880002498627, -0.0799999982118607),(0.165000006556511, 1.13880002498627, -0.0399999991059303),(0.244000002741814, 1.13880002498627, -0.0399999991059303),(0.230000004172325, 1.13300001621246, -0.0549999997019768),(0.200900003314018, 0.813899993896484, -0.023700000718236),(0.205599993467331, 0.674300014972687, -0.048200000077486),(0.214200004935265, 0.85290002822876, -0.064800001680851),(0.192900002002716, 0.78600001335144, -0.112199999392033),(-0.100000001490116, 0.491299986839294, -0.0299999993294477),(-0.170000001788139, 0.465999990701675, 0),(-0.0500000007450581, 0.465999990701675, 0),(-0.165000006556511, 0.00999999977648258, 0.119999997317791),(-0.150000005960464, 0.0700000002980232, 0),(-0.0850000008940697, 0.0860000029206276, 0.0125000001862645),(-0.0900000035762787, 0.0560000017285347, 0.0125000001862645),(-0.115000002086163, 0.0199999995529652, 0.122000001370907),(-0.115000002086163, 0.0399999991059303, -0.0549999997019768),(-0.109999999403954, 0.0109999999403954, 0.189999997615814),(0.0992999970912933, 0.488099992275238, -0.0308999996632338),(0.170000001788139, 0.465999990701675, 0),(0.0500000007450581, 0.486699998378754, 0),(0.165000006556511, 0.00999999977648258, 0.119999997317791),(0.150000005960464, 0.0700000002980232, 0),(0.0850000008940697, 0.0860000029206276, 0.0125000001862645),(0.0900000035762787, 0.0560000017285347, 0.0125000001862645),(0.115000002086163, 0.0199999995529652, 0.122000001370907),(0.115000002086163, 0.0399999991059303, -0.0549999997019768),(0.109999999403954, 0.0109999999403954, 0.189999997615814),(0, 0.875, 0),(-0.0645999982953072, 1.51489996910095, -0.0379999987781048),(0.0645999982953072, 1.51489996910095, -0.0379999987781048),(0, 1.07225000858307, 0.0900000035762787),(-0.109999999403954, 1.42700004577637, -0.137500002980232),(-0.234999999403954, 1.41999995708466, -0.0625),(0.109999999403954, 1.42700004577637, -0.137500002980232),(0.234999999403954, 1.41999995708466, -0.0625),(0, 1.4099999666214, -0.144999995827675),(0, 0.925000011920929, 0.0799999982118607),(-0.0869999974966049, 1.19000005722046, -0.0900000035762787),(0.0869999974966049, 1.19000005722046, -0.0900000035762787),(0.172000005841255, 1.32000005245209, -0.0299999993294477),(-0.172000005841255, 1.32000005245209, -0.0300000011920929),(0.150000005960464, 1.23000001907349, -0.0149999996647239),(-0.150000005960464, 1.23000001907349, -0.0150000005960464),(0.0790000036358833, 0.919999957084656, -0.140000000596046),(0.100000001490116, 0.899999976158142, 0.0769999995827675),(-0.0790000036358833, 0.919999957084656, -0.140000000596046),(-0.100000001490116, 0.899999976158142, 0.0750000029802322),(0, 0.870000004768372, 0),(0.171000003814697, 0.649999976158142, 0),(0.0199999995529652, 0.649999976158142, 0),(0.100000001490116, 0.649999976158142, -0.0799999982118607),(0.100000001490116, 0.649999976158142, 0.0700000002980232),(-0.171000003814697, 0.649999976158142, 0),(-0.0199999995529652, 0.649999976158142, 0),(-0.100000001490116, 0.649999976158142, -0.0799999982118607),(-0.100000001490116, 0.649999976158142, 0.0700000002980232),(0.25, 1.26999998092651, -0.0399999991059303),(0.170000001788139, 1.26999998092651, -0.0399999991059303),(0.200000002980232, 1.26999998092651, -0.0900000035762787),(0.200000002980232, 1.26999998092651, 0.0199999995529652),(0.244000002741814, 1.13880002498627, -0.0399999991059303),(0.165000006556511, 1.13880002498627, -0.0399999991059303),(0.200000002980232, 1.13880002498627, -0.0799999982118607),(0.200000002980232, 1.13880002498627, -0.0130000002682209),(0.224999994039536, 1, -0.00999999977648258),(0.224999994039536, 1, -0.0700000002980232),(0.185000002384186, 1, -0.00999999977648258),(0.185000002384186, 1, -0.0700000002980232),(0.200000002980232, 1.13880002498627, -0.0399999991059303),(0.224999994039536, 0.920000016689301, -0.0399999991059303),(0.174999997019768, 0.920000016689301, -0.0399999991059303),(0.200000002980232, 0.920000016689301, -0.0649999976158142),(0.200000002980232, 0.920000016689301, -0.0149999996647239),(0.224999994039536, 0.889999985694885, -0.0399999991059303),(0.174999997019768, 0.889999985694885, -0.0399999991059303),(0.200000002980232, 0.889999985694885, -0.0649999976158142),(0.200000002980232, 0.889999985694885, -0.0149999996647239),(0.217999994754791, 0.860000014305115, -0.0399999991059303),(0.184000000357628, 0.860000014305115, -0.0399999991059303),(0.200000002980232, 0.870000004768372, -0.0700000002980232),(0.200000002980232, 0.870000004768372, 0),(0.209999993443489, 0.850000023841858, 0),(0.185399994254112, 0.850000023841858, 0),(0.211999997496605, 0.839999973773956, -0.0149999996647239),(0.18299999833107, 0.839999973773956, -0.0149999996647239),(0.212999999523163, 0.834999978542328, -0.0399999991059303),(0.189999997615814, 0.834999978542328, -0.0399999991059303),(0.210999995470047, 0.834999978542328, -0.0649999976158142),(0.19200000166893, 0.834999978542328, -0.0649999976158142),(0.208000004291534, 0.839999973773956, -0.0850000008940697),(0.189999997615814, 0.839999973773956, -0.0850000008940697),(0.200000002980232, 0.839999973773956, -0.0949999988079071),(0.215000003576279, 0.819999992847443, 0),(0.193000003695488, 0.814999997615814, 0.00499999988824129),(0.197999998927116, 0.800000011920929, 0.0120000001043081),(0.209999993443489, 0.819999992847443, 0.0299999993294477),(0.189999997615814, 0.819999992847443, 0.0299999993294477),(0.200000002980232, 0.834999978542328, 0.0390000008046627),(0.211999997496605, 0.800000011920929, 0.0500000007450581),(0.187999993562698, 0.800000011920929, 0.0500000007450581),(0.200000002980232, 0.806999981403351, 0.0570000000298023),(0.200000002980232, 0.792999982833862, 0.0350000001490116),(0.200000002980232, 0.773999989032745, 0.0759999975562096),(0.211999997496605, 0.779999971389771, 0.0700000002980232),(0.187999993562698, 0.779999971389771, 0.0700000002980232),(0.200000002980232, 0.785000026226044, 0.0750000029802322),(0.200000002980232, 0.769999980926514, 0.061999998986721),(0.215000003576279, 0.792999982833862, -0.0149999996647239),(0.187000006437302, 0.792999982833862, -0.0149999996647239),(0.200000002980232, 0.792999982833862, -0.00499999988824129),(0.215000003576279, 0.787999987602234, -0.0399999991059303),(0.187000006437302, 0.787999987602234, -0.0399999991059303),(0.215000003576279, 0.792999982833862, -0.0649999976158142),(0.187000006437302, 0.792999982833862, -0.0649999976158142),(0.209999993443489, 0.790000021457672, -0.0850000008940697),(0.189999997615814, 0.790000021457672, -0.0850000008940697),(0.200000002980232, 0.790000021457672, -0.0949999988079071),(0.189999997615814, 0.769999980926514, -0.0274999998509884),(0.189999997615814, 0.769999980926514, -0.0524999983608723),(0.189999997615814, 0.779999971389771, -0.0775000005960464),(0.211999997496605, 0.745000004768372, -0.0149999996647239),(0.187999993562698, 0.745000004768372, -0.0199999995529652),(0.200000002980232, 0.745000004768372, -0.0254999995231628),(0.200000002980232, 0.745000004768372, -0.0044999998062849),(0.210999995470047, 0.720000028610229, -0.0149999996647239),(0.188999995589256, 0.720000028610229, -0.0149999996647239),(0.200000002980232, 0.720000028610229, -0.0252000000327826),(0.200000002980232, 0.720000028610229, -0.00480000022798777),(0.209999993443489, 0.694999992847443, -0.0149999996647239),(0.189999997615814, 0.694999992847443, -0.0149999996647239),(0.200000002980232, 0.694999992847443, -0.025000000372529),(0.200000002980232, 0.694999992847443, -0.00499999988824129),(0.200000002980232, 0.685000002384186, -0.0149999996647239),(0.215000003576279, 0.740000009536743, -0.0399999991059303),(0.185000002384186, 0.740000009536743, -0.0399999991059303),(0.200000002980232, 0.740000009536743, -0.0549999997019768),(0.200000002980232, 0.740000009536743, -0.025000000372529),(0.209999993443489, 0.714200019836426, -0.0399999991059303),(0.189999997615814, 0.714200019836426, -0.0399999991059303),(0.200000002980232, 0.714200019836426, -0.0529999993741512),(0.200000002980232, 0.714200019836426, -0.0270000007003546),(0.209999993443489, 0.680000007152557, -0.0399999991059303),(0.189999997615814, 0.680000007152557, -0.0399999991059303),(0.200000002980232, 0.680000007152557, -0.0500000007450581),(0.200000002980232, 0.680000007152557, -0.0299999993294477),(0.200000002980232, 0.670000016689301, -0.0399999991059303),(0.211999997496605, 0.740000009536743, -0.0649999976158142),(0.187999993562698, 0.740000009536743, -0.0649999976158142),(0.200000002980232, 0.740000009536743, -0.0755999982357025),(0.200000002980232, 0.740000009536743, -0.0542000010609627),(0.209999993443489, 0.717700004577637, -0.0649999976158142),(0.189999997615814, 0.717700004577637, -0.0649999976158142),(0.200000002980232, 0.717700004577637, -0.0750999972224236),(0.200000002980232, 0.717700004577637, -0.0549000017344952),(0.209999993443489, 0.694999992847443, -0.0649999976158142),(0.189999997615814, 0.694999992847443, -0.0649999976158142),(0.200000002980232, 0.694999992847443, -0.0750000029802322),(0.200000002980232, 0.694999992847443, -0.0549999997019768),(0.200000002980232, 0.685000002384186, -0.0649999976158142),(0.210999995470047, 0.754999995231628, -0.0850000008940697),(0.188999995589256, 0.754999995231628, -0.0850000008940697),(0.200000002980232, 0.754999995231628, -0.0952000021934509),(0.200000002980232, 0.754999995231628, -0.0747999995946884),(0.209999993443489, 0.735000014305115, -0.0850000008940697),(0.189999997615814, 0.735000014305115, -0.0850000008940697),(0.200000002980232, 0.735000014305115, -0.095100000500679),(0.200000002980232, 0.735000014305115, -0.0749000012874603),(0.209999993443489, 0.720000028610229, -0.0850000008940697),(0.189999997615814, 0.720000028610229, -0.0850000008940697),(0.200000002980232, 0.720000028610229, -0.0949999988079071),(0.200000002980232, 0.720000028610229, -0.0750000029802322),(0.200000002980232, 0.709999978542328, -0.0850000008940697),(-0.230000004172325, 1.23000001907349, -0.0399999991059303),(-0.159999996423721, 1.23000001907349, -0.0399999991059303),(-0.200000002980232, 1.23500001430511, -0.104999996721745),(-0.200000002980232, 1.25499999523163, 0.0199999995529652),(-0.244000002741814, 1.13880002498627, -0.0399999991059303),(-0.165000006556511, 1.13880002498627, -0.0399999991059303),(-0.200000002980232, 1.13880002498627, -0.0799999982118607),(-0.200000002980232, 1.13880002498627, 0.0130000002682209),(-0.224999994039536, 1, -0.00999999977648258),(-0.224999994039536, 1, -0.0700000002980232),(-0.185000002384186, 1, -0.00999999977648258),(-0.185000002384186, 1, -0.0700000002980232),(-0.200000002980232, 1.13880002498627, -0.0399999991059303),(-0.224999994039536, 0.920000016689301, -0.0399999991059303),(-0.174999997019768, 0.920000016689301, -0.0399999991059303),(-0.200000002980232, 0.920000016689301, -0.0649999976158142),(-0.200000002980232, 0.920000016689301, -0.0149999996647239),(-0.224999994039536, 0.889999985694885, -0.0399999991059303),(-0.174999997019768, 0.889999985694885, -0.0399999991059303),(-0.200000002980232, 0.889999985694885, -0.0649999976158142),(-0.200000002980232, 0.889999985694885, -0.0149999996647239),(-0.217999994754791, 0.860000014305115, -0.0399999991059303),(-0.184000000357628, 0.860000014305115, -0.0399999991059303),(-0.200000002980232, 0.870000004768372, -0.0700000002980232),(-0.200000002980232, 0.870000004768372, 0),(-0.209999993443489, 0.850000023841858, 0),(-0.185399994254112, 0.850000023841858, 0),(-0.211999997496605, 0.839999973773956, -0.0149999996647239),(-0.18299999833107, 0.839999973773956, -0.0149999996647239),(-0.212999999523163, 0.834999978542328, -0.0399999991059303),(-0.189999997615814, 0.834999978542328, -0.0399999991059303),(-0.210999995470047, 0.834999978542328, -0.0649999976158142),(-0.19200000166893, 0.834999978542328, -0.0649999976158142),(-0.208000004291534, 0.839999973773956, -0.0850000008940697),(-0.189999997615814, 0.839999973773956, -0.0850000008940697),(-0.200000002980232, 0.839999973773956, -0.0949999988079071),(-0.215000003576279, 0.819999992847443, 0),(-0.193000003695488, 0.814999997615814, 0.00499999988824129),(-0.197999998927116, 0.800000011920929, 0.0120000001043081),(-0.209999993443489, 0.819999992847443, 0.0299999993294477),(-0.189999997615814, 0.819999992847443, 0.0299999993294477),(-0.200000002980232, 0.834999978542328, 0.0390000008046627),(-0.211999997496605, 0.800000011920929, 0.0500000007450581),(-0.187999993562698, 0.800000011920929, 0.0500000007450581),(-0.200000002980232, 0.806999981403351, 0.0570000000298023),(-0.200000002980232, 0.792999982833862, 0.0350000001490116),(-0.200000002980232, 0.773999989032745, 0.0759999975562096),(-0.211999997496605, 0.779999971389771, 0.0700000002980232),(-0.187999993562698, 0.779999971389771, 0.0700000002980232),(-0.200000002980232, 0.785000026226044, 0.0750000029802322),(-0.200000002980232, 0.769999980926514, 0.061999998986721),(-0.215000003576279, 0.792999982833862, -0.0149999996647239),(-0.187000006437302, 0.792999982833862, -0.0149999996647239),(-0.200000002980232, 0.792999982833862, -0.00499999988824129),(-0.215000003576279, 0.787999987602234, -0.0399999991059303),(-0.187000006437302, 0.787999987602234, -0.0399999991059303),(-0.215000003576279, 0.792999982833862, -0.0649999976158142),(-0.187000006437302, 0.792999982833862, -0.0649999976158142),(-0.209999993443489, 0.790000021457672, -0.0850000008940697),(-0.189999997615814, 0.790000021457672, -0.0850000008940697),(-0.200000002980232, 0.790000021457672, -0.0949999988079071),(-0.189999997615814, 0.769999980926514, -0.0274999998509884),(-0.189999997615814, 0.769999980926514, -0.0524999983608723),(-0.189999997615814, 0.779999971389771, -0.0775000005960464),(-0.211999997496605, 0.745000004768372, -0.0149999996647239),(-0.187999993562698, 0.745000004768372, -0.0199999995529652),(-0.200000002980232, 0.745000004768372, -0.0254999995231628),(-0.200000002980232, 0.745000004768372, -0.0044999998062849),(-0.210999995470047, 0.720000028610229, -0.0149999996647239),(-0.188999995589256, 0.720000028610229, -0.0149999996647239),(-0.200000002980232, 0.720000028610229, -0.0252000000327826),(-0.200000002980232, 0.720000028610229, -0.00480000022798777),(-0.209999993443489, 0.694999992847443, -0.0149999996647239),(-0.189999997615814, 0.694999992847443, -0.0149999996647239),(-0.200000002980232, 0.694999992847443, -0.025000000372529),(-0.200000002980232, 0.694999992847443, -0.00499999988824129),(-0.200000002980232, 0.685000002384186, -0.0149999996647239),(-0.215000003576279, 0.740000009536743, -0.0399999991059303),(-0.185000002384186, 0.740000009536743, -0.0399999991059303),(-0.200000002980232, 0.740000009536743, -0.0549999997019768),(-0.200000002980232, 0.740000009536743, -0.025000000372529),(-0.209999993443489, 0.714200019836426, -0.0399999991059303),(-0.189999997615814, 0.714200019836426, -0.0399999991059303),(-0.200000002980232, 0.714200019836426, -0.0529999993741512),(-0.200000002980232, 0.714200019836426, -0.0270000007003546),(-0.209999993443489, 0.680000007152557, -0.0399999991059303),(-0.189999997615814, 0.680000007152557, -0.0399999991059303),(-0.200000002980232, 0.680000007152557, -0.0500000007450581),(-0.200000002980232, 0.680000007152557, -0.0299999993294477),(-0.200000002980232, 0.670000016689301, -0.0399999991059303),(-0.211999997496605, 0.740000009536743, -0.0649999976158142),(-0.187999993562698, 0.740000009536743, -0.0649999976158142),(-0.200000002980232, 0.740000009536743, -0.0755999982357025),(-0.200000002980232, 0.740000009536743, -0.0542000010609627),(-0.209999993443489, 0.717700004577637, -0.0649999976158142),(-0.189999997615814, 0.717700004577637, -0.0649999976158142),(-0.200000002980232, 0.717700004577637, -0.0750999972224236),(-0.200000002980232, 0.717700004577637, -0.0549000017344952),(-0.209999993443489, 0.694999992847443, -0.0649999976158142),(-0.189999997615814, 0.694999992847443, -0.0649999976158142),(-0.200000002980232, 0.694999992847443, -0.0750000029802322),(-0.200000002980232, 0.694999992847443, -0.0549999997019768),(-0.200000002980232, 0.685000002384186, -0.0649999976158142),(-0.210999995470047, 0.754999995231628, -0.0850000008940697),(-0.188999995589256, 0.754999995231628, -0.0850000008940697),(-0.200000002980232, 0.754999995231628, -0.0952000021934509),(-0.200000002980232, 0.754999995231628, -0.0747999995946884),(-0.209999993443489, 0.735000014305115, -0.0850000008940697),(-0.189999997615814, 0.735000014305115, -0.0850000008940697),(-0.200000002980232, 0.735000014305115, -0.095100000500679),(-0.200000002980232, 0.735000014305115, -0.0749000012874603),(-0.209999993443489, 0.720000028610229, -0.0850000008940697),(-0.189999997615814, 0.720000028610229, -0.0850000008940697),(-0.200000002980232, 0.720000028610229, -0.0949999988079071),(-0.200000002980232, 0.720000028610229, -0.0750000029802322),(-0.200000002980232, 0.709999978542328, -0.0850000008940697),(0.115000002086163, 0.465999990701675, 0.0599999986588955),(0.115000002086163, 0.465999990701675, -0.0549999997019768),(0.150000005960464, 0.465999990701675, 0),(0.0500000007450581, 0.465999990701675, 0),(0.170000001788139, 0.300000011920929, 0),(0.0599999986588955, 0.300000011920929, 0),(0.100000001490116, 0.300000011920929, -0.0500000007450581),(0.100000001490116, 0.300000011920929, 0.0500000007450581),(0.150000005960464, 0.0700000002980232, 0),(0.0850000008940697, 0.0860000029206276, 0.0125000001862645),(0.115000002086163, 0.0689999982714653, -0.0450000017881393),(0.116999998688698, 0.0974999964237213, 0.0615000016987324),(0.137500002980232, 0.00600000005215406, -0.0299999993294477),(0.0949999988079071, 0.00600000005215406, -0.0299999993294477),(0.115000002086163, 0.0149999996647239, -0.0450000017881393),(0.115000002086163, 0.0599999986588955, 0.100000001490116),(0.115000002086163, 0, 0.0700000002980232),(0.165000006556511, 0, 0.0700000002980232),(0.0949999988079071, 0, 0.0700000002980232),(0.115000002086163, 0.0399999991059303, 0.129999995231628),(0.125, 0, 0.119999997317791),(0.165000006556511, 0, 0.119999997317791),(0.0869999974966049, 0, 0.122000001370907),(0.0900000035762787, 0.0120000001043081, 0.187999993562698),(0.109999999403954, 0.0109999999403954, 0.189999997615814),(0.128000006079674, 0.0109999999403954, 0.185000002384186),(0.142000004649162, 0.0109999999403954, 0.178000003099442),(0.153999999165535, 0.00999999977648258, 0.167999997735024),(-0.115000009536743, 0.465999990701675, 0.0600000023841858),(-0.115000002086163, 0.465999990701675, -0.0549999997019768),(-0.170000001788139, 0.465999990701675, 0),(-0.0500000007450581, 0.465999990701675, 0),(-0.170000001788139, 0.300000011920929, 0),(-0.0599999986588955, 0.300000011920929, 0),(-0.100000001490116, 0.300000011920929, -0.0500000007450581),(-0.100000001490116, 0.300000011920929, 0.0500000007450581),(-0.150000005960464, 0.0700000002980232, 0),(-0.0850000008940697, 0.0860000029206276, 0.0125000001862645),(-0.115000002086163, 0.0689999982714653, -0.0450000017881393),(-0.116999998688698, 0.0974999964237213, 0.0615000016987324),(-0.137500002980232, 0.00600000005215406, -0.0299999993294477),(-0.0949999988079071, 0.00600000005215406, -0.0299999993294477),(-0.0949999988079071, 0.00600000005215406, -0.0299999993294477),(-0.115000002086163, 0.0599999986588955, 0.100000001490116),(-0.115000002086163, 0, 0.0700000002980232),(-0.165000006556511, 0, 0.0700000002980232),(-0.0949999988079071, 0, 0.0700000002980232),(-0.115000002086163, 0.0399999991059303, 0.129999995231628),(-0.125, 0, 0.119999997317791),(-0.165000006556511, 0, 0.119999997317791),(-0.0869999974966049, 0, 0.122000001370907),(-0.0900000035762787, 0.0120000001043081, 0.187999993562698),(-0.109999999403954, 0.0109999999403954, 0.189999997615814),(-0.128000006079674, 0.0109999999403954, 0.185000002384186),(-0.142000004649162, 0.0109999999403954, 0.178000003099442),(-0.153999999165535, 0.00999999977648258, 0.167999997735024)]

IndexedFaceSet211.coord = Coordinate212

Shape210.geometry = IndexedFaceSet211
Appearance213 = x3d.Appearance()
ImageTexture214 = x3d.ImageTexture()
ImageTexture214.url = ["bodytexture28.png"]

Appearance213.texture = ImageTexture214
Material215 = x3d.Material()
Material215.ambientIntensity = 0.699999988079071
Material215.shininess = 0.600000023841858
Material215.diffuseColor = [0.5,0,0.5]
Material215.specularColor = [1,1,1]
Material215.emissiveColor = [0.129999995231628,0.349999994039536,0.129999995231628]

Appearance213.material = Material215

Shape210.appearance = Appearance213

HAnimHumanoid27.skin.append(Shape210)
Coordinate216 = x3d.Coordinate(USE="JoeSkinCoord")

HAnimHumanoid27.skinCoord = Coordinate216

Group26.children.append(HAnimHumanoid27)

Scene5.children.append(Group26)
Transform217 = x3d.Transform(DEF="SBall")
Transform217.translation = [-0.42091,0.2089,-0.42091]
Transform217.rotation = [-0.70711,0,-0.70711,0.67654]
Transform217.scale = [0.23,0.23,0.23]
Shape218 = x3d.Shape()
Appearance219 = x3d.Appearance()
Material220 = x3d.Material()
Material220.diffuseColor = [0,0.8353,0]
Material220.specularColor = [0,0.6849,0]
Material220.emissiveColor = [1,1,1]

Appearance219.material = Material220
ImageTexture221 = x3d.ImageTexture()
ImageTexture221.url = ["bodytexture28.png"]

Appearance219.texture = ImageTexture221

Shape218.appearance = Appearance219
IndexedFaceSet222 = x3d.IndexedFaceSet(DEF="ball")
IndexedFaceSet222.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
Coordinate223 = x3d.Coordinate()
Coordinate223.point = [(0, 0.4675, 0),(0, 0.4049, -0.2338),(-0.1169, 0.4049, -0.2024),(-0.2024, 0.4049, -0.1169),(-0.2338, 0.4049, 0),(-0.2024, 0.4049, 0.1169),(-0.1169, 0.4049, 0.2024),(0, 0.4049, 0.2338),(0.1169, 0.4049, 0.2024),(0.2024, 0.4049, 0.1169),(0.2338, 0.4049, 0),(0.2024, 0.4049, -0.1169),(0.1169, 0.4049, -0.2024),(0, 0.2338, -0.4049),(-0.2024, 0.2338, -0.3506),(-0.3506, 0.2338, -0.2024),(-0.4049, 0.2338, 0),(-0.3506, 0.2338, 0.2024),(-0.2024, 0.2338, 0.3506),(0, 0.2338, 0.4049),(0.2024, 0.2338, 0.3506),(0.3506, 0.2338, 0.2024),(0.4049, 0.2338, 0),(0.3506, 0.2338, -0.2024),(0.2024, 0.2338, -0.3506),(0, 0, -0.4675),(-0.2338, 0, -0.4049),(-0.4049, 0, -0.2338),(-0.4675, 0, 0),(-0.4049, 0, 0.2338),(-0.2338, 0, 0.4049),(0, 0, 0.4675),(0.2338, 0, 0.4049),(0.4049, 0, 0.2338),(0.4675, 0, 0),(0.4049, 0, -0.2338),(0.2338, 0, -0.4049),(0, -0.2338, -0.4049),(-0.2024, -0.2338, -0.3506),(-0.3506, -0.2338, -0.2024),(-0.4049, -0.2338, 0),(-0.3506, -0.2338, 0.2024),(-0.2024, -0.2338, 0.3506),(0, -0.2338, 0.4049),(0.2024, -0.2338, 0.3506),(0.3506, -0.2338, 0.2024),(0.4049, -0.2338, 0),(0.3506, -0.2338, -0.2024),(0.2024, -0.2338, -0.3506),(0, -0.4049, -0.2338),(-0.1169, -0.4049, -0.2024),(-0.2024, -0.4049, -0.1169),(-0.2338, -0.4049, 0),(-0.2024, -0.4049, 0.1169),(-0.1169, -0.4049, 0.2024),(0, -0.4049, 0.2338),(0.1169, -0.4049, 0.2024),(0.2024, -0.4049, 0.1169),(0.2338, -0.4049, 0),(0.2024, -0.4049, -0.1169),(0.1169, -0.4049, -0.2024),(0, -0.4675, 0)]

IndexedFaceSet222.coord = Coordinate223

Shape218.geometry = IndexedFaceSet222

Transform217.children.append(Shape218)
Viewpoint224 = x3d.Viewpoint(DEF="ballView")
Viewpoint224.description = "ball View"

Transform217.children.append(Viewpoint224)

Scene5.children.append(Transform217)
Transform225 = x3d.Transform(DEF="scenecordsys")
Transform225.scale = [0.275,0.275,0.275]
Inline226 = x3d.Inline()
Inline226.global_ = True
Inline226.url = ["JointCoordinateAxes.x3dv"]

Transform225.children.append(Inline226)

Scene5.children.append(Transform225)
Transform227 = x3d.Transform(DEF="Circle0")
Transform227.scale = [1.175,1,1.175]
Shape228 = x3d.Shape()
Appearance229 = x3d.Appearance()
Material230 = x3d.Material()
Material230.diffuseColor = [0.9,0,0.7]
Material230.emissiveColor = [0.42496,0.48398,1]

Appearance229.material = Material230

Shape228.appearance = Appearance229
IndexedLineSet231 = x3d.IndexedLineSet(DEF="Orbit1")
IndexedLineSet231.coordIndex = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]
Coordinate232 = x3d.Coordinate()
Coordinate232.point = [(1, 0, 0),(0.995, 0, -0.105),(0.979, 0, -0.208),(0.951, 0, -0.309),(0.914, 0, -0.407),(0.866, 0, -0.5),(0.809, 0, -0.588),(0.743, 0, -0.669),(0.669, 0, -0.743),(0.588, 0, -0.809),(0.5, 0, -0.866),(0.407, 0, -0.914),(0.309, 0, -0.951),(0.208, 0, -0.978),(0.105, 0, -0.995),(0, 0, -1),(-0.105, 0, -0.99452),(-0.208, 0, -0.978),(-0.309, 0, -0.951),(-0.407, 0, -0.914),(-0.5, 0, -0.866),(-0.588, 0, -0.809),(-0.669, 0, -0.743),(-0.743, 0, -0.669),(-0.809, 0, -0.588),(-0.866, 0, -0.5),(-0.914, 0, -0.407),(-0.951, 0, -0.309),(-0.978, 0, -0.208),(-0.995, 0, -0.105),(-1, 0, 0),(-0.995, 0, 0.105),(-0.978, 0, 0.208),(-0.951, 0, 0.309),(-0.914, 0, 0.407),(-0.866, 0, 0.5),(-0.809, 0, 0.588),(-0.743, 0, 0.669),(-0.669, 0, 0.743),(-0.588, 0, 0.809),(-0.5, 0, 0.866),(-0.407, 0, 0.914),(-0.309, 0, 0.951),(-0.208, 0, 0.978),(-0.105, 0, 0.995),(0, 0, 1),(0.105, 0, 0.995),(0.208, 0, 0.978),(0.309, 0, 0.951),(0.407, 0, 0.914),(0.5, 0, 0.866),(0.588, 0, 0.809),(0.669, 0, 0.743),(0.743, 0, 0.669),(0.809, 0, 0.588),(0.866, 0, 0.5),(0.914, 0, 0.407),(0.951, 0, 0.309),(0.978, 0, 0.208),(0.995, 0, 0.104),(1, 0, 0)]

IndexedLineSet231.coord = Coordinate232

Shape228.geometry = IndexedLineSet231

Transform227.children.append(Shape228)

Scene5.children.append(Transform227)
Transform233 = x3d.Transform(DEF="Circle1")
Transform233.scale = [0.5,1,0.5]
Shape234 = x3d.Shape()
Appearance235 = x3d.Appearance()
Material236 = x3d.Material()
Material236.diffuseColor = [0.9,0,0.7]
Material236.emissiveColor = [0.42496,0.48398,1]

Appearance235.material = Material236

Shape234.appearance = Appearance235
IndexedLineSet237 = x3d.IndexedLineSet(USE="Orbit1")

Shape234.geometry = IndexedLineSet237

Transform233.children.append(Shape234)

Scene5.children.append(Transform233)
Transform238 = x3d.Transform(DEF="Circle2")
Transform238.scale = [0.25,1,0.25]
Shape239 = x3d.Shape()
Appearance240 = x3d.Appearance()
Material241 = x3d.Material()
Material241.diffuseColor = [0.9,0,0.7]
Material241.emissiveColor = [0.42496,0.48398,1]

Appearance240.material = Material241

Shape239.appearance = Appearance240
IndexedLineSet242 = x3d.IndexedLineSet(USE="Orbit1")

Shape239.geometry = IndexedLineSet242

Transform238.children.append(Shape239)

Scene5.children.append(Transform238)

X3D0.Scene = Scene5
f = open("../data/JoeDemo5JoeSkin5_Final.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/JoeDemo5JoeSkin5_Final.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/JoeDemo5JoeSkin5_Final.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
