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
meta3.name = "Joe"
meta3.content = "No Reservations 20121221 20040109 x3d/hanim"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "generator"
meta4.content = "x3d-tidy V2.2.3, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "modified"
meta5.content = "Wed, 17 Sep 2025 06:43:47 GMT"

head1.children.append(meta5)

X3D0.head = head1
Scene6 = x3d.Scene()
WorldInfo7 = x3d.WorldInfo()
WorldInfo7.title = "HANIM 2 LOA3 Skeleton and Skin sites and feature points for Joe_ by Joe"

Scene6.children.append(WorldInfo7)
NavigationInfo8 = x3d.NavigationInfo()
NavigationInfo8.type = [", ","FLYANY"]
NavigationInfo8.speed = 2.5
NavigationInfo8.headlight = False

Scene6.children.append(NavigationInfo8)
Viewpoint9 = x3d.Viewpoint(DEF="Joe_InclinedView")
Viewpoint9.description = "Joe_Inclined View"
Viewpoint9.position = [1.62,1.05,3.06]
Viewpoint9.orientation = [-0.113,0.993,0.0347,0.671]

Scene6.children.append(Viewpoint9)
Viewpoint10 = x3d.Viewpoint(DEF="Joe_IFrontView")
Viewpoint10.description = "Scene_Front View"
Viewpoint10.position = [0,0.8,2.58]
Viewpoint10.centerOfRotation = [0,0.8,0]

Scene6.children.append(Viewpoint10)
Viewpoint11 = x3d.Viewpoint(DEF="Joe_ISideView")
Viewpoint11.description = "Scene_Side View"
Viewpoint11.position = [2.6,0.5,0]
Viewpoint11.orientation = [0,1,0,1.5708]
Viewpoint11.centerOfRotation = [0,0.8,0]

Scene6.children.append(Viewpoint11)
Viewpoint12 = x3d.Viewpoint(DEF="Joe_BackView")
Viewpoint12.description = "Scene_Back View"
Viewpoint12.position = [0,2.5,-3]
Viewpoint12.orientation = [0,1,0,3.14]
Viewpoint12.centerOfRotation = [0,1.5,0]

Scene6.children.append(Viewpoint12)
Viewpoint13 = x3d.Viewpoint(DEF="Joe_TopView")
Viewpoint13.description = "Scene_Top View"
Viewpoint13.position = [0,3.5,0]
Viewpoint13.orientation = [1,0,0,-1.5708]
Viewpoint13.centerOfRotation = [0,1.5,0]

Scene6.children.append(Viewpoint13)
Group14 = x3d.Group(DEF="Joe_Humanoid")
HAnimHumanoid15 = x3d.HAnimHumanoid(DEF="JoeHuman")
HAnimJoint16 = x3d.HAnimJoint(DEF="hanim_humanoid_root")
HAnimJoint16.name = "humanoid_root"
HAnimJoint16.translation = [0.15315,0.019584,-0.22976]
HAnimJoint16.rotation = [-1,0,0,0.040483]
HAnimJoint16.center = [0,0.875,0]
HAnimSite17 = x3d.HAnimSite(DEF="Joe_RootView1")
HAnimSite17.name = "RootFront"
Transform18 = x3d.Transform(DEF="hanimcordsys")
Transform18.scale = [0.175,0.175,0.175]
Inline19 = x3d.Inline()
Inline19.global_ = True
Inline19.url = ["JointCoordinateAxes.x3dv"]

Transform18.children.append(Inline19)
Viewpoint20 = x3d.Viewpoint(DEF="ballView_1")
Viewpoint20.description = "hanimcoord View"

Transform18.children.append(Viewpoint20)

HAnimSite17.children.append(Transform18)

HAnimJoint16.children.append(HAnimSite17)
HAnimJoint21 = x3d.HAnimJoint(DEF="Joe_sacroiliac")
HAnimJoint21.name = "sacroiliac"
HAnimJoint21.center = [0,0.92,0]
HAnimJoint21.skinCoordIndex = [17,19,20,21,22,23,26,27,73,82,89,91,93]
HAnimJoint21.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]
HAnimJoint22 = x3d.HAnimJoint(DEF="hanim_l_hip")
HAnimJoint22.name = "l_hip"
HAnimJoint22.rotation = [1,0,0,0.23414]
HAnimJoint22.center = [0.1,0.92,0]
HAnimJoint22.skinCoordIndex = [89,90,94,95,96,97]
HAnimJoint22.skinCoordWeight = [0.65,1,1,1,1,1]
HAnimJoint23 = x3d.HAnimJoint(DEF="hanim_l_knee")
HAnimJoint23.name = "l_knee"
HAnimJoint23.rotation = [0.2106,0,0.97757,0.22603]
HAnimJoint23.center = [0.115,0.466,0]
HAnimJoint23.skinCoordIndex = [334,335,336,337,338,339,340,341]
HAnimJoint23.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint24 = x3d.HAnimJoint(DEF="hanim_l_talocrural")
HAnimJoint24.name = "l_talocrural"
HAnimJoint24.rotation = [1,0,0,0.16032]
HAnimJoint24.center = [0.115,0.069,0]
HAnimJoint24.skinCoordIndex = [342,343,344,345]
HAnimJoint24.skinCoordWeight = [1,1,1,1]
HAnimJoint25 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_2")
HAnimJoint25.name = "l_tarsometatarsal_2"
HAnimJoint25.center = [0.115,0.031,0.03]
HAnimJoint25.skinCoordIndex = [346,347,348,71]
HAnimJoint25.skinCoordWeight = [1,1,1,1]
HAnimJoint26 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_2")
HAnimJoint26.name = "l_metatarsophalangeal_2"
HAnimJoint26.center = [0.115,0.037,0.09]
HAnimJoint26.skinCoordIndex = [349,350,351,352]
HAnimJoint26.skinCoordWeight = [1,1,1,1]
HAnimJoint27 = x3d.HAnimJoint(DEF="hanim_l_metatarsal_2")
HAnimJoint27.name = "l_metatarsal_2"
HAnimJoint27.center = [0.115,0.02,0.122]
HAnimJoint27.skinCoordIndex = [353,354,355,356,357,358,359,360,361]
HAnimJoint27.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint26.children.append(HAnimJoint27)

HAnimJoint25.children.append(HAnimJoint26)

HAnimJoint24.children.append(HAnimJoint25)

HAnimJoint23.children.append(HAnimJoint24)

HAnimJoint22.children.append(HAnimJoint23)

HAnimJoint21.children.append(HAnimJoint22)
HAnimJoint28 = x3d.HAnimJoint(DEF="hanim_r_hip")
HAnimJoint28.name = "r_hip"
HAnimJoint28.rotation = [1,0,0,0.03807]
HAnimJoint28.center = [-0.1,0.92,0]
HAnimJoint28.skinCoordIndex = [91,92,98,99,100,101,362,363]
HAnimJoint28.skinCoordWeight = [0.65,1,0.8,1,1,1,0.4,0.8]
HAnimJoint29 = x3d.HAnimJoint(DEF="hanim_r_knee")
HAnimJoint29.name = "r_knee"
HAnimJoint29.rotation = [1,0,0,0.48097]
HAnimJoint29.center = [-0.05,0.466,0]
HAnimJoint29.skinCoordIndex = [362,363,364,365,366,367,368,369,98]
HAnimJoint29.skinCoordWeight = [0.6,0.2,1,1,1,1,1,1,0.2]
HAnimJoint30 = x3d.HAnimJoint(DEF="hanim_r_talocrural")
HAnimJoint30.name = "r_talocrural"
HAnimJoint30.rotation = [1,0,0,0.48097]
HAnimJoint30.center = [-0.115,0.069,0]
HAnimJoint30.skinCoordIndex = [370,371,372,373]
HAnimJoint30.skinCoordWeight = [1,1,1,1]
HAnimJoint31 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_2")
HAnimJoint31.name = "r_tarsometatarsal_2"
HAnimJoint31.center = [-0.1,0.015,-0.01]
HAnimJoint31.skinCoordIndex = [374,375,376]
HAnimJoint31.skinCoordWeight = [1,1,1]
HAnimJoint32 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_2")
HAnimJoint32.name = "r_metatarsophalangeal_2"
HAnimJoint32.center = [-0.115,0.037,0.09]
HAnimJoint32.skinCoordIndex = [377,378,379,380]
HAnimJoint32.skinCoordWeight = [1,1,1,1]
HAnimJoint33 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint33.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint33.center = [-0.1,0.01,0.14]
HAnimJoint33.skinCoordIndex = [381,382,383,384,385,386,387,388,389]
HAnimJoint33.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint32.children.append(HAnimJoint33)

HAnimJoint31.children.append(HAnimJoint32)

HAnimJoint30.children.append(HAnimJoint31)

HAnimJoint29.children.append(HAnimJoint30)

HAnimJoint28.children.append(HAnimJoint29)

HAnimJoint21.children.append(HAnimJoint28)

HAnimJoint16.children.append(HAnimJoint21)
HAnimJoint34 = x3d.HAnimJoint(DEF="hanim_vl5")
HAnimJoint34.name = "vl5"
HAnimJoint34.center = [0,1.045,-0.095]
HAnimJoint34.skinCoordIndex = [28,76]
HAnimJoint34.skinCoordWeight = [1,1]
HAnimJoint35 = x3d.HAnimJoint(DEF="hanim_vl4")
HAnimJoint35.name = "vl4"
HAnimJoint35.center = [0,1.068,-0.085]
HAnimJoint36 = x3d.HAnimJoint(DEF="hanim_vl3")
HAnimJoint36.name = "vl3"
HAnimJoint36.center = [0,1.092,-0.0725]
HAnimJoint37 = x3d.HAnimJoint(DEF="hanim_vl2")
HAnimJoint37.name = "vl2"
HAnimJoint37.center = [0,1.12,-0.065]
HAnimJoint37.skinCoordIndex = [16,18,25,83,84,85,86,87,88]
HAnimJoint37.skinCoordWeight = [1,1,1,1,1,1,0.7,1,0.8]
HAnimJoint38 = x3d.HAnimJoint(DEF="hanim_vl1")
HAnimJoint38.name = "vl1"
HAnimJoint38.center = [0,1.1459,-0.0625]
HAnimJoint39 = x3d.HAnimJoint(DEF="hanim_vt12")
HAnimJoint39.name = "vt12"
HAnimJoint39.center = [0,1.179,-0.068]
HAnimJoint40 = x3d.HAnimJoint(DEF="hanim_vt11")
HAnimJoint40.name = "vt11"
HAnimJoint40.center = [0,1.2679,-0.081]
HAnimJoint41 = x3d.HAnimJoint(DEF="hanim_vt10")
HAnimJoint41.name = "vt10"
HAnimJoint41.center = [0,1.242,-0.09]
HAnimJoint41.skinCoordIndex = [15]
HAnimJoint41.skinCoordWeight = [1]
HAnimJoint42 = x3d.HAnimJoint(DEF="hanim_vt9")
HAnimJoint42.name = "vt9"
HAnimJoint42.center = [0,1.268,-0.1]
HAnimJoint42.skinCoordIndex = [13,14]
HAnimJoint42.skinCoordWeight = [1,1]
HAnimJoint43 = x3d.HAnimJoint(DEF="hanim_vt8")
HAnimJoint43.name = "vt8"
HAnimJoint43.center = [0,1.294,-0.11]
HAnimJoint44 = x3d.HAnimJoint(DEF="hanim_vt7")
HAnimJoint44.name = "vt7"
HAnimJoint44.center = [0,1.323,-0.1155]
HAnimJoint45 = x3d.HAnimJoint(DEF="hanim_vt6")
HAnimJoint45.name = "vt6"
HAnimJoint45.center = [0,1.352,-0.12]
HAnimJoint46 = x3d.HAnimJoint(DEF="hanim_vt5")
HAnimJoint46.name = "vt5"
HAnimJoint46.center = [0,1.381,-0.1235]
HAnimJoint47 = x3d.HAnimJoint(DEF="hanim_vt4")
HAnimJoint47.name = "vt4"
HAnimJoint47.center = [0,1.41,-0.1235]
HAnimJoint47.skinCoordIndex = [81]
HAnimJoint47.skinCoordWeight = [1]
HAnimJoint48 = x3d.HAnimJoint(DEF="hanim_vt3")
HAnimJoint48.name = "vt3"
HAnimJoint48.center = [0,1.438,-0.12]
HAnimJoint49 = x3d.HAnimJoint(DEF="hanim_vt2")
HAnimJoint49.name = "vt2"
HAnimJoint49.center = [0,1.468,-0.105]
HAnimJoint50 = x3d.HAnimJoint(DEF="hanim_vt1")
HAnimJoint50.name = "vt1"
HAnimJoint50.center = [0,1.497,-0.09]
HAnimJoint50.skinCoordIndex = [11,24]
HAnimJoint50.skinCoordWeight = [1,1]
HAnimJoint51 = x3d.HAnimJoint(DEF="hanim_vc7")
HAnimJoint51.name = "vc7"
HAnimJoint51.center = [0,1.525,-0.072]
HAnimJoint51.skinCoordIndex = [74,75]
HAnimJoint51.skinCoordWeight = [1,1]
HAnimJoint52 = x3d.HAnimJoint(DEF="hanim_vc6")
HAnimJoint52.name = "vc6"
HAnimJoint52.center = [0,1.54,-0.05]
HAnimJoint53 = x3d.HAnimJoint(DEF="hanim_vc5")
HAnimJoint53.name = "vc5"
HAnimJoint53.center = [0,1.552,-0.035]
HAnimJoint54 = x3d.HAnimJoint(DEF="hanim_vc4")
HAnimJoint54.name = "vc4"
HAnimJoint54.rotation = [0.98593,0,-0.16716,0.46046]
HAnimJoint54.center = [0,1.5675,-0.0256]
HAnimJoint55 = x3d.HAnimJoint(DEF="hanim_vc3")
HAnimJoint55.name = "vc3"
HAnimJoint55.center = [0,1.5823,-0.0185]
HAnimJoint56 = x3d.HAnimJoint(DEF="hanim_vc2")
HAnimJoint56.name = "vc2"
HAnimJoint56.center = [0,1.595,-0.0175]
HAnimJoint57 = x3d.HAnimJoint(DEF="hanim_vc1")
HAnimJoint57.name = "vc1"
HAnimJoint57.center = [0,1.61,-0.015]
HAnimJoint58 = x3d.HAnimJoint(DEF="hanim_skullbase")
HAnimJoint58.name = "skullbase"
HAnimJoint58.center = [0,1.63,-0.01]
HAnimJoint58.skinCoordIndex = [0,1,2,3,4,5,6,7,8,9]
HAnimJoint58.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1]
HAnimJoint59 = x3d.HAnimJoint(DEF="hanim_l_eyeball_joint")
HAnimJoint59.name = "l_eyeball_joint"
HAnimJoint59.center = [0.034,1.659,0.06]

HAnimJoint58.children.append(HAnimJoint59)
HAnimJoint60 = x3d.HAnimJoint(DEF="hanim_r_eyeball_joint")
HAnimJoint60.name = "r_eyeball_joint"
HAnimJoint60.center = [-0.034,1.659,0.06]

HAnimJoint58.children.append(HAnimJoint60)

HAnimJoint57.children.append(HAnimJoint58)

HAnimJoint56.children.append(HAnimJoint57)

HAnimJoint55.children.append(HAnimJoint56)

HAnimJoint54.children.append(HAnimJoint55)

HAnimJoint53.children.append(HAnimJoint54)

HAnimJoint52.children.append(HAnimJoint53)

HAnimJoint51.children.append(HAnimJoint52)
HAnimJoint61 = x3d.HAnimJoint(DEF="hanim_l_sternoclavicular")
HAnimJoint61.name = "l_sternoclavicular"
HAnimJoint61.center = [0.082,1.4488,-0.0353]
HAnimJoint61.skinCoordIndex = [12]
HAnimJoint61.skinCoordWeight = [1]
HAnimJoint62 = x3d.HAnimJoint(DEF="hanim_l_acromioclavicular")
HAnimJoint62.name = "l_acromioclavicular"
HAnimJoint62.center = [0.0962,1.4269,-0.0424]
HAnimJoint62.skinCoordIndex = [79]
HAnimJoint62.skinCoordWeight = [1]
HAnimJoint63 = x3d.HAnimJoint(DEF="hanim_l_shoulder")
HAnimJoint63.name = "l_shoulder"
HAnimJoint63.rotation = [0,0,1,1.3884]
HAnimJoint63.center = [0.2,1.44,-0.04]
HAnimJoint63.skinCoordIndex = [41,42,44,80,102,103,104,105]
HAnimJoint63.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint64 = x3d.HAnimJoint(DEF="hanim_l_elbow")
HAnimJoint64.name = "l_elbow"
HAnimJoint64.rotation = [-1,0,0,1.3339]
HAnimJoint64.center = [0.2,1.1388,-0.04]
HAnimJoint64.skinCoordIndex = [45,46,47,109,110,111,112,113,115,116,117,118]
HAnimJoint64.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
HAnimJoint65 = x3d.HAnimJoint(DEF="hanim_l_radiocarpal")
HAnimJoint65.name = "l_radiocarpal"
HAnimJoint65.rotation = [0,1,0,1.2033]
HAnimJoint65.center = [0.2,0.87,-0.04]
HAnimJoint65.skinCoordIndex = [119,120,121,122,123,124,125,126]
HAnimJoint65.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint66 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_1")
HAnimJoint66.name = "l_carpometacarpal_1"
HAnimJoint66.center = [0.1924,0.8472,-0.0534]
HAnimJoint66.skinCoordIndex = [127,128]
HAnimJoint66.skinCoordWeight = [1,1]
HAnimJoint67 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_1")
HAnimJoint67.name = "l_metacarpophalangeal_1"
HAnimJoint67.center = [0.1951,0.8226,0.0246]
HAnimJoint67.skinCoordIndex = [138,139,140,141,142,143]
HAnimJoint67.skinCoordWeight = [0.5,0.5,0.5,1,1,1]
HAnimJoint68 = x3d.HAnimJoint(DEF="hanim_l_carpal_interphalangeal_1")
HAnimJoint68.name = "l_carpal_interphalangeal_1"
HAnimJoint68.center = [0.1955,0.8159,0.0464]
HAnimJoint68.skinCoordIndex = [144,145,146,147,148,149,150,151,152]
HAnimJoint68.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint67.children.append(HAnimJoint68)

HAnimJoint66.children.append(HAnimJoint67)

HAnimJoint65.children.append(HAnimJoint66)
HAnimJoint69 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_2")
HAnimJoint69.name = "l_carpometacarpal_2"
HAnimJoint69.center = [0.1983,0.8024,-0.028]
HAnimJoint69.skinCoordIndex = [129,130]
HAnimJoint69.skinCoordWeight = [1,1]
HAnimJoint70 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_2")
HAnimJoint70.name = "l_metacarpophalangeal_2"
HAnimJoint70.center = [0.1983,0.7815,-0.028]
HAnimJoint70.skinCoordIndex = [138,139,140,153,154,155,163]
HAnimJoint70.skinCoordWeight = [0.5,0.5,0.5,1,1,1,0.5]
HAnimJoint71 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint71.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint71.center = [0.2017,0.7363,-0.0248]
HAnimJoint71.skinCoordIndex = [166,167,168,169]
HAnimJoint71.skinCoordWeight = [1,1,1,1]
HAnimJoint72 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint72.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint72.center = [0.2028,0.7139,-0.0236]
HAnimJoint72.skinCoordIndex = [170,171,172,173,174,175,176,177,178]
HAnimJoint72.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint71.children.append(HAnimJoint72)

HAnimJoint70.children.append(HAnimJoint71)

HAnimJoint69.children.append(HAnimJoint70)

HAnimJoint65.children.append(HAnimJoint69)
HAnimJoint73 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_3")
HAnimJoint73.name = "l_carpometacarpal_3"
HAnimJoint73.center = [0.1987,0.8029,-0.053]
HAnimJoint73.skinCoordIndex = [131,132]
HAnimJoint73.skinCoordWeight = [1,1]
HAnimJoint74 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_3")
HAnimJoint74.name = "l_metacarpophalangeal_3"
HAnimJoint74.center = [0.1987,0.7818,-0.053]
HAnimJoint74.skinCoordIndex = [156,157,163,164]
HAnimJoint74.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint75 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint75.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint75.center = [0.2013,0.7273,-0.0503]
HAnimJoint75.skinCoordIndex = [179,180,181,182]
HAnimJoint75.skinCoordWeight = [1,1,1,1]
HAnimJoint76 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint76.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint76.center = [0.2026,0.7011,-0.0494]
HAnimJoint76.skinCoordIndex = [183,184,185,186,187,188,189,190,191]
HAnimJoint76.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint75.children.append(HAnimJoint76)

HAnimJoint74.children.append(HAnimJoint75)

HAnimJoint73.children.append(HAnimJoint74)

HAnimJoint65.children.append(HAnimJoint73)
HAnimJoint77 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_4")
HAnimJoint77.name = "l_carpometacarpal_4"
HAnimJoint77.center = [0.1956,0.8019,-0.0794]
HAnimJoint77.skinCoordIndex = [133,134]
HAnimJoint77.skinCoordWeight = [1,1]
HAnimJoint78 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_4")
HAnimJoint78.name = "l_metacarpophalangeal_4"
HAnimJoint78.center = [0.1956,0.7815,-0.0794]
HAnimJoint78.skinCoordIndex = [158,159,164,165]
HAnimJoint78.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint79 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint79.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint79.center = [0.1973,0.7287,-0.0777]
HAnimJoint79.skinCoordIndex = [192,193,194,195]
HAnimJoint79.skinCoordWeight = [1,1,1,1]
HAnimJoint80 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint80.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint80.center = [0.1983,0.7045,-0.0767]
HAnimJoint80.skinCoordIndex = [196,197,198,199,200,201,202,203,204]
HAnimJoint80.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint79.children.append(HAnimJoint80)

HAnimJoint78.children.append(HAnimJoint79)

HAnimJoint77.children.append(HAnimJoint78)

HAnimJoint65.children.append(HAnimJoint77)
HAnimJoint81 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_5")
HAnimJoint81.name = "l_carpometacarpal_5"
HAnimJoint81.center = [0.1925,0.8066,-0.1036]
HAnimJoint81.skinCoordIndex = [135,136,137,165]
HAnimJoint81.skinCoordWeight = [1,1,1,0.5]
HAnimJoint82 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_5")
HAnimJoint82.name = "l_metacarpophalangeal_5"
HAnimJoint82.center = [0.1925,0.7866,-0.1036]
HAnimJoint82.skinCoordIndex = [160,161,162]
HAnimJoint82.skinCoordWeight = [1,1,1]
HAnimJoint83 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint83.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint83.center = [0.1938,0.7452,-0.1024]
HAnimJoint83.skinCoordIndex = [205,206,207,208]
HAnimJoint83.skinCoordWeight = [1,1,1,1]
HAnimJoint84 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint84.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint84.center = [0.1948,0.7277,-0.1017]
HAnimJoint84.skinCoordIndex = [209,210,211,212,213,214,215,216,217]
HAnimJoint84.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint83.children.append(HAnimJoint84)

HAnimJoint82.children.append(HAnimJoint83)

HAnimJoint81.children.append(HAnimJoint82)

HAnimJoint65.children.append(HAnimJoint81)

HAnimJoint64.children.append(HAnimJoint65)

HAnimJoint63.children.append(HAnimJoint64)

HAnimJoint62.children.append(HAnimJoint63)

HAnimJoint61.children.append(HAnimJoint62)

HAnimJoint51.children.append(HAnimJoint61)
HAnimJoint85 = x3d.HAnimJoint(DEF="hanim_r_sternoclavicular")
HAnimJoint85.name = "r_sternoclavicular"
HAnimJoint85.center = [-0.03,1.46,0]
HAnimJoint85.skinCoordIndex = [10]
HAnimJoint85.skinCoordWeight = [1]
HAnimJoint86 = x3d.HAnimJoint(DEF="hanim_r_acromioclavicular")
HAnimJoint86.name = "r_acromioclavicular"
HAnimJoint86.center = [-0.09,1.41,-0.11]
HAnimJoint86.skinCoordIndex = [77,29]
HAnimJoint86.skinCoordWeight = [1,0.9]
HAnimJoint87 = x3d.HAnimJoint(DEF="hanim_r_shoulder")
HAnimJoint87.name = "r_shoulder"
HAnimJoint87.rotation = [0,0,-1,1.7595]
HAnimJoint87.center = [-0.2,1.44,-0.04]
HAnimJoint87.skinCoordIndex = [29,30,32,78,218,219,220,221,86,88]
HAnimJoint87.skinCoordWeight = [0.1,1,1,1,1,1,1,1,0.3,0.2]
HAnimJoint88 = x3d.HAnimJoint(DEF="hanim_r_elbow")
HAnimJoint88.name = "r_elbow"
HAnimJoint88.rotation = [-1,0,0,1.3339]
HAnimJoint88.center = [-0.2,1.1388,-0.04]
HAnimJoint88.skinCoordIndex = [33,34,35,225,226,227,228,229,231,232,233,234]
HAnimJoint88.skinCoordWeight = [1,1,1,1,1,1,1,1,1,1,1,1]
HAnimJoint89 = x3d.HAnimJoint(DEF="hanim_r_radiocarpal")
HAnimJoint89.name = "r_radiocarpal"
HAnimJoint89.rotation = [0,1,0,0.077855]
HAnimJoint89.center = [-0.2,0.89,-0.04]
HAnimJoint89.skinCoordIndex = [235,236,237,238,239,240,241,242]
HAnimJoint89.skinCoordWeight = [1,1,1,1,1,1,1,1]
HAnimJoint90 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_1")
HAnimJoint90.name = "r_carpometacarpal_1"
HAnimJoint90.center = [-0.2,0.85,0]
HAnimJoint90.skinCoordIndex = [243,244]
HAnimJoint90.skinCoordWeight = [1,1]
HAnimJoint91 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_1")
HAnimJoint91.name = "r_metacarpophalangeal_1"
HAnimJoint91.center = [-0.2,0.82,0.03]
HAnimJoint91.skinCoordIndex = [254,255,256,257,258,259]
HAnimJoint91.skinCoordWeight = [0.5,0.5,0.5,1,1,1]
HAnimJoint92 = x3d.HAnimJoint(DEF="hanim_r_carpal_interphalangeal_1")
HAnimJoint92.name = "r_carpal_interphalangeal_1"
HAnimJoint92.center = [-0.2,0.8,0.05]
HAnimJoint92.skinCoordIndex = [260,261,262,263,264,265,266,267,268]
HAnimJoint92.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint91.children.append(HAnimJoint92)

HAnimJoint90.children.append(HAnimJoint91)

HAnimJoint89.children.append(HAnimJoint90)
HAnimJoint93 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_2")
HAnimJoint93.name = "r_carpometacarpal_2"
HAnimJoint93.center = [-0.2,0.84,-0.015]
HAnimJoint93.skinCoordIndex = [245,246]
HAnimJoint93.skinCoordWeight = [1,1]
HAnimJoint94 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_2")
HAnimJoint94.name = "r_metacarpophalangeal_2"
HAnimJoint94.center = [-0.2,0.793,-0.015]
HAnimJoint94.skinCoordIndex = [254,255,256,269,270,271,279]
HAnimJoint94.skinCoordWeight = [0.5,0.5,0.5,1,1,1,0.5]
HAnimJoint95 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint95.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint95.center = [-0.2,0.745,-0.015]
HAnimJoint95.skinCoordIndex = [282,283,284,285]
HAnimJoint95.skinCoordWeight = [1,1,1,1]
HAnimJoint96 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint96.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint96.center = [-0.2,0.72,-0.015]
HAnimJoint96.skinCoordIndex = [286,287,288,289,290,291,292,293,294]
HAnimJoint96.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint95.children.append(HAnimJoint96)

HAnimJoint94.children.append(HAnimJoint95)

HAnimJoint93.children.append(HAnimJoint94)

HAnimJoint89.children.append(HAnimJoint93)
HAnimJoint97 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_3")
HAnimJoint97.name = "r_carpometacarpal_3"
HAnimJoint97.center = [-0.2,0.835,-0.04]
HAnimJoint97.skinCoordIndex = [247,248]
HAnimJoint97.skinCoordWeight = [1,1]
HAnimJoint98 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_3")
HAnimJoint98.name = "r_metacarpophalangeal_3"
HAnimJoint98.center = [-0.2,0.788,-0.04]
HAnimJoint98.skinCoordIndex = [272,273,279,280]
HAnimJoint98.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint99 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint99.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint99.center = [-0.2,0.74,-0.04]
HAnimJoint99.skinCoordIndex = [295,296,297,298]
HAnimJoint99.skinCoordWeight = [1,1,1,1]
HAnimJoint100 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint100.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint100.center = [-0.2,0.7142,-0.04]
HAnimJoint100.skinCoordIndex = [299,300,301,302,303,304,305,306,307]
HAnimJoint100.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint99.children.append(HAnimJoint100)

HAnimJoint98.children.append(HAnimJoint99)

HAnimJoint97.children.append(HAnimJoint98)

HAnimJoint89.children.append(HAnimJoint97)
HAnimJoint101 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_4")
HAnimJoint101.name = "r_carpometacarpal_4"
HAnimJoint101.center = [-0.2,0.835,-0.065]
HAnimJoint101.skinCoordIndex = [249,250]
HAnimJoint101.skinCoordWeight = [1,1]
HAnimJoint102 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_4")
HAnimJoint102.name = "r_metacarpophalangeal_4"
HAnimJoint102.center = [-0.2,0.793,-0.065]
HAnimJoint102.skinCoordIndex = [274,275,280,281]
HAnimJoint102.skinCoordWeight = [1,1,0.5,0.5]
HAnimJoint103 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint103.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint103.center = [-0.2,0.74,-0.065]
HAnimJoint103.skinCoordIndex = [308,309,310,311]
HAnimJoint103.skinCoordWeight = [1,1,1,1]
HAnimJoint104 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint104.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint104.center = [-0.2,0.7177,-0.065]
HAnimJoint104.skinCoordIndex = [312,313,314,315,316,317,318,319,320]
HAnimJoint104.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint103.children.append(HAnimJoint104)

HAnimJoint102.children.append(HAnimJoint103)

HAnimJoint101.children.append(HAnimJoint102)

HAnimJoint89.children.append(HAnimJoint101)
HAnimJoint105 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_5")
HAnimJoint105.name = "r_carpometacarpal_5"
HAnimJoint105.center = [-0.2,0.84,-0.085]
HAnimJoint105.skinCoordIndex = [251,252,253,281]
HAnimJoint105.skinCoordWeight = [1,1,1,0.5]
HAnimJoint106 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_5")
HAnimJoint106.name = "r_metacarpophalangeal_5"
HAnimJoint106.center = [-0.2,0.79,-0.085]
HAnimJoint106.skinCoordIndex = [276,277,278]
HAnimJoint106.skinCoordWeight = [1,1,1]
HAnimJoint107 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint107.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint107.center = [-0.2,0.755,-0.085]
HAnimJoint107.skinCoordIndex = [321,322,323,324]
HAnimJoint107.skinCoordWeight = [1,1,1,1]
HAnimJoint108 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint108.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint108.center = [-0.2,0.735,-0.09]
HAnimJoint108.skinCoordIndex = [325,326,327,328,329,330,331,332,333]
HAnimJoint108.skinCoordWeight = [1,1,1,1,1,1,1,1,1]

HAnimJoint107.children.append(HAnimJoint108)

HAnimJoint106.children.append(HAnimJoint107)

HAnimJoint105.children.append(HAnimJoint106)

HAnimJoint89.children.append(HAnimJoint105)

HAnimJoint88.children.append(HAnimJoint89)

HAnimJoint87.children.append(HAnimJoint88)

HAnimJoint86.children.append(HAnimJoint87)

HAnimJoint85.children.append(HAnimJoint86)

HAnimJoint51.children.append(HAnimJoint85)

HAnimJoint50.children.append(HAnimJoint51)

HAnimJoint49.children.append(HAnimJoint50)

HAnimJoint48.children.append(HAnimJoint49)

HAnimJoint47.children.append(HAnimJoint48)

HAnimJoint46.children.append(HAnimJoint47)

HAnimJoint45.children.append(HAnimJoint46)

HAnimJoint44.children.append(HAnimJoint45)

HAnimJoint43.children.append(HAnimJoint44)

HAnimJoint42.children.append(HAnimJoint43)

HAnimJoint41.children.append(HAnimJoint42)

HAnimJoint40.children.append(HAnimJoint41)

HAnimJoint39.children.append(HAnimJoint40)

HAnimJoint38.children.append(HAnimJoint39)

HAnimJoint37.children.append(HAnimJoint38)

HAnimJoint36.children.append(HAnimJoint37)

HAnimJoint35.children.append(HAnimJoint36)

HAnimJoint34.children.append(HAnimJoint35)

HAnimJoint16.children.append(HAnimJoint34)

HAnimHumanoid15.skeleton.append(HAnimJoint16)
HAnimJoint109 = x3d.HAnimJoint(USE="hanim_humanoid_root")

HAnimHumanoid15.joints.append(HAnimJoint109)
HAnimJoint110 = x3d.HAnimJoint(USE="Joe_sacroiliac")

HAnimHumanoid15.joints.append(HAnimJoint110)
HAnimJoint111 = x3d.HAnimJoint(USE="hanim_l_hip")

HAnimHumanoid15.joints.append(HAnimJoint111)
HAnimJoint112 = x3d.HAnimJoint(USE="hanim_l_knee")

HAnimHumanoid15.joints.append(HAnimJoint112)
HAnimJoint113 = x3d.HAnimJoint(USE="hanim_l_talocrural")

HAnimHumanoid15.joints.append(HAnimJoint113)
HAnimJoint114 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_2")

HAnimHumanoid15.joints.append(HAnimJoint114)
HAnimJoint115 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_2")

HAnimHumanoid15.joints.append(HAnimJoint115)
HAnimJoint116 = x3d.HAnimJoint(USE="hanim_l_metatarsal_2")

HAnimHumanoid15.joints.append(HAnimJoint116)
HAnimJoint117 = x3d.HAnimJoint(USE="hanim_r_hip")

HAnimHumanoid15.joints.append(HAnimJoint117)
HAnimJoint118 = x3d.HAnimJoint(USE="hanim_r_knee")

HAnimHumanoid15.joints.append(HAnimJoint118)
HAnimJoint119 = x3d.HAnimJoint(USE="hanim_r_talocrural")

HAnimHumanoid15.joints.append(HAnimJoint119)
HAnimJoint120 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_2")

HAnimHumanoid15.joints.append(HAnimJoint120)
HAnimJoint121 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_2")

HAnimHumanoid15.joints.append(HAnimJoint121)
HAnimJoint122 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid15.joints.append(HAnimJoint122)
HAnimJoint123 = x3d.HAnimJoint(USE="hanim_vl5")

HAnimHumanoid15.joints.append(HAnimJoint123)
HAnimJoint124 = x3d.HAnimJoint(USE="hanim_vl4")

HAnimHumanoid15.joints.append(HAnimJoint124)
HAnimJoint125 = x3d.HAnimJoint(USE="hanim_vl3")

HAnimHumanoid15.joints.append(HAnimJoint125)
HAnimJoint126 = x3d.HAnimJoint(USE="hanim_vl2")

HAnimHumanoid15.joints.append(HAnimJoint126)
HAnimJoint127 = x3d.HAnimJoint(USE="hanim_vl1")

HAnimHumanoid15.joints.append(HAnimJoint127)
HAnimJoint128 = x3d.HAnimJoint(USE="hanim_vt12")

HAnimHumanoid15.joints.append(HAnimJoint128)
HAnimJoint129 = x3d.HAnimJoint(USE="hanim_vt11")

HAnimHumanoid15.joints.append(HAnimJoint129)
HAnimJoint130 = x3d.HAnimJoint(USE="hanim_vt10")

HAnimHumanoid15.joints.append(HAnimJoint130)
HAnimJoint131 = x3d.HAnimJoint(USE="hanim_vt9")

HAnimHumanoid15.joints.append(HAnimJoint131)
HAnimJoint132 = x3d.HAnimJoint(USE="hanim_vt8")

HAnimHumanoid15.joints.append(HAnimJoint132)
HAnimJoint133 = x3d.HAnimJoint(USE="hanim_vt7")

HAnimHumanoid15.joints.append(HAnimJoint133)
HAnimJoint134 = x3d.HAnimJoint(USE="hanim_vt6")

HAnimHumanoid15.joints.append(HAnimJoint134)
HAnimJoint135 = x3d.HAnimJoint(USE="hanim_vt5")

HAnimHumanoid15.joints.append(HAnimJoint135)
HAnimJoint136 = x3d.HAnimJoint(USE="hanim_vt4")

HAnimHumanoid15.joints.append(HAnimJoint136)
HAnimJoint137 = x3d.HAnimJoint(USE="hanim_vt3")

HAnimHumanoid15.joints.append(HAnimJoint137)
HAnimJoint138 = x3d.HAnimJoint(USE="hanim_vt2")

HAnimHumanoid15.joints.append(HAnimJoint138)
HAnimJoint139 = x3d.HAnimJoint(USE="hanim_vt1")

HAnimHumanoid15.joints.append(HAnimJoint139)
HAnimJoint140 = x3d.HAnimJoint(USE="hanim_vc7")

HAnimHumanoid15.joints.append(HAnimJoint140)
HAnimJoint141 = x3d.HAnimJoint(USE="hanim_vc6")

HAnimHumanoid15.joints.append(HAnimJoint141)
HAnimJoint142 = x3d.HAnimJoint(USE="hanim_vc5")

HAnimHumanoid15.joints.append(HAnimJoint142)
HAnimJoint143 = x3d.HAnimJoint(USE="hanim_vc4")

HAnimHumanoid15.joints.append(HAnimJoint143)
HAnimJoint144 = x3d.HAnimJoint(USE="hanim_vc3")

HAnimHumanoid15.joints.append(HAnimJoint144)
HAnimJoint145 = x3d.HAnimJoint(USE="hanim_vc2")

HAnimHumanoid15.joints.append(HAnimJoint145)
HAnimJoint146 = x3d.HAnimJoint(USE="hanim_vc1")

HAnimHumanoid15.joints.append(HAnimJoint146)
HAnimJoint147 = x3d.HAnimJoint(USE="hanim_skullbase")

HAnimHumanoid15.joints.append(HAnimJoint147)
HAnimJoint148 = x3d.HAnimJoint(USE="hanim_l_eyeball_joint")

HAnimHumanoid15.joints.append(HAnimJoint148)
HAnimJoint149 = x3d.HAnimJoint(USE="hanim_r_eyeball_joint")

HAnimHumanoid15.joints.append(HAnimJoint149)
HAnimJoint150 = x3d.HAnimJoint(USE="hanim_l_sternoclavicular")

HAnimHumanoid15.joints.append(HAnimJoint150)
HAnimJoint151 = x3d.HAnimJoint(USE="hanim_l_acromioclavicular")

HAnimHumanoid15.joints.append(HAnimJoint151)
HAnimJoint152 = x3d.HAnimJoint(USE="hanim_l_shoulder")

HAnimHumanoid15.joints.append(HAnimJoint152)
HAnimJoint153 = x3d.HAnimJoint(USE="hanim_l_elbow")

HAnimHumanoid15.joints.append(HAnimJoint153)
HAnimJoint154 = x3d.HAnimJoint(USE="hanim_l_radiocarpal")

HAnimHumanoid15.joints.append(HAnimJoint154)
HAnimJoint155 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_1")

HAnimHumanoid15.joints.append(HAnimJoint155)
HAnimJoint156 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_1")

HAnimHumanoid15.joints.append(HAnimJoint156)
HAnimJoint157 = x3d.HAnimJoint(USE="hanim_l_carpal_interphalangeal_1")

HAnimHumanoid15.joints.append(HAnimJoint157)
HAnimJoint158 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_2")

HAnimHumanoid15.joints.append(HAnimJoint158)
HAnimJoint159 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_2")

HAnimHumanoid15.joints.append(HAnimJoint159)
HAnimJoint160 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid15.joints.append(HAnimJoint160)
HAnimJoint161 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid15.joints.append(HAnimJoint161)
HAnimJoint162 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_3")

HAnimHumanoid15.joints.append(HAnimJoint162)
HAnimJoint163 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_3")

HAnimHumanoid15.joints.append(HAnimJoint163)
HAnimJoint164 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid15.joints.append(HAnimJoint164)
HAnimJoint165 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid15.joints.append(HAnimJoint165)
HAnimJoint166 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_4")

HAnimHumanoid15.joints.append(HAnimJoint166)
HAnimJoint167 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_4")

HAnimHumanoid15.joints.append(HAnimJoint167)
HAnimJoint168 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid15.joints.append(HAnimJoint168)
HAnimJoint169 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid15.joints.append(HAnimJoint169)
HAnimJoint170 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_5")

HAnimHumanoid15.joints.append(HAnimJoint170)
HAnimJoint171 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_5")

HAnimHumanoid15.joints.append(HAnimJoint171)
HAnimJoint172 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid15.joints.append(HAnimJoint172)
HAnimJoint173 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid15.joints.append(HAnimJoint173)
HAnimJoint174 = x3d.HAnimJoint(USE="hanim_r_sternoclavicular")

HAnimHumanoid15.joints.append(HAnimJoint174)
HAnimJoint175 = x3d.HAnimJoint(USE="hanim_r_acromioclavicular")

HAnimHumanoid15.joints.append(HAnimJoint175)
HAnimJoint176 = x3d.HAnimJoint(USE="hanim_r_shoulder")

HAnimHumanoid15.joints.append(HAnimJoint176)
HAnimJoint177 = x3d.HAnimJoint(USE="hanim_r_elbow")

HAnimHumanoid15.joints.append(HAnimJoint177)
HAnimJoint178 = x3d.HAnimJoint(USE="hanim_r_radiocarpal")

HAnimHumanoid15.joints.append(HAnimJoint178)
HAnimJoint179 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_1")

HAnimHumanoid15.joints.append(HAnimJoint179)
HAnimJoint180 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_1")

HAnimHumanoid15.joints.append(HAnimJoint180)
HAnimJoint181 = x3d.HAnimJoint(USE="hanim_r_carpal_interphalangeal_1")

HAnimHumanoid15.joints.append(HAnimJoint181)
HAnimJoint182 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_2")

HAnimHumanoid15.joints.append(HAnimJoint182)
HAnimJoint183 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_2")

HAnimHumanoid15.joints.append(HAnimJoint183)
HAnimJoint184 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid15.joints.append(HAnimJoint184)
HAnimJoint185 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid15.joints.append(HAnimJoint185)
HAnimJoint186 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_3")

HAnimHumanoid15.joints.append(HAnimJoint186)
HAnimJoint187 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_3")

HAnimHumanoid15.joints.append(HAnimJoint187)
HAnimJoint188 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid15.joints.append(HAnimJoint188)
HAnimJoint189 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid15.joints.append(HAnimJoint189)
HAnimJoint190 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_4")

HAnimHumanoid15.joints.append(HAnimJoint190)
HAnimJoint191 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_4")

HAnimHumanoid15.joints.append(HAnimJoint191)
HAnimJoint192 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid15.joints.append(HAnimJoint192)
HAnimJoint193 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid15.joints.append(HAnimJoint193)
HAnimJoint194 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_5")

HAnimHumanoid15.joints.append(HAnimJoint194)
HAnimJoint195 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_5")

HAnimHumanoid15.joints.append(HAnimJoint195)
HAnimJoint196 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid15.joints.append(HAnimJoint196)
HAnimJoint197 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid15.joints.append(HAnimJoint197)
Coordinate198 = x3d.Coordinate(DEF="JoeSkinCoord")
Coordinate198.point = [(0, 1.77, 0),(0, 1.665, 0.09),(-0.033, 1.62, 0.087),(0.033, 1.62, 0.087),(0, 1.55, 0.097),(-0.077, 1.64, -0.01),(-0.0527, 1.58, 0.015),(0.077, 1.64, -0.01),(0.0527, 1.58, 0.015),(0, 1.625, -0.0925),(-0.03, 1.46, 0.035),(0, 1.44, 0.03),(0.03, 1.46, 0.035),(-0.1135, 1.318, 0.095),(0.1135, 1.318, 0.095),(0, 1.25, 0.113),(-0.087, 1.19, 0.09),(-0.0935, 1.03, 0.075),(0.087, 1.19, 0.09),(0.0935, 1.03, 0.075),(-0.1425, 1.065, 0.0033),(-0.15, 0.9, -0.01),(0.1425, 1.065, 0.0033),(0.15, 0.9, -0.01),(0, 1.53, -0.084),(0.0049, 1.1908, -0.1113),(-0.0773, 1.019, -0.12),(0.0773, 1.019, -0.12),(0.005, 1.0915, -0.1091),(-0.178, 1.4825, -0.0625),(-0.17, 1.38, 0.007),(-0.1884, 0.8676, -0.036),(-0.16, 1.38, -0.127),(-0.2, 1.1388, -0.08),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.23, 1.133, -0.055),(-0.1977, 0.8169, -0.0177),(-0.1941, 0.6772, -0.0423),(-0.2117, 0.8562, -0.0584),(-0.1929, 0.789, -0.1064),(0.175, 1.4825, -0.06),(0.17, 1.38, 0.007),(0.1901, 0.8645, -0.0415),(0.16, 1.38, -0.125),(0.2, 1.1388, -0.08),(0.165, 1.1388, -0.04),(0.244, 1.1388, -0.04),(0.23, 1.133, -0.055),(0.2009, 0.8139, -0.0237),(0.2056, 0.6743, -0.0482),(0.2142, 0.8529, -0.0648),(0.1929, 0.786, -0.1122),(-0.1, 0.4913, -0.03),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.165, 0.01, 0.12),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.09, 0.056, 0.0125),(-0.115, 0.02, 0.122),(-0.115, 0.04, -0.055),(-0.11, 0.011, 0.19),(0.0993, 0.4881, -0.0309),(0.17, 0.466, 0),(0.05, 0.4867, 0),(0.165, 0.01, 0.12),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.09, 0.056, 0.0125),(0.115, 0.02, 0.122),(0.115, 0.04, -0.055),(0.11, 0.011, 0.19),(0, 0.875, 0),(-0.0646, 1.5149, -0.038),(0.0646, 1.5149, -0.038),(0, 1.0723, 0.09),(-0.11, 1.427, -0.1375),(-0.235, 1.42, -0.0625),(0.11, 1.427, -0.1375),(0.235, 1.42, -0.0625),(0, 1.41, -0.145),(0, 0.925, 0.08),(-0.087, 1.19, -0.09),(0.087, 1.19, -0.09),(0.172, 1.32, -0.03),(-0.172, 1.32, -0.03),(0.15, 1.23, -0.015),(-0.15, 1.23, -0.015),(0.079, 0.92, -0.14),(0.1, 0.9, 0.077),(-0.079, 0.92, -0.14),(-0.1, 0.9, 0.075),(0, 0.87, 0),(0.171, 0.65, 0),(0.02, 0.65, 0),(0.1, 0.65, -0.08),(0.1, 0.65, 0.07),(-0.171, 0.65, 0),(-0.02, 0.65, 0),(-0.1, 0.65, -0.08),(-0.1, 0.65, 0.07),(0.25, 1.27, -0.04),(0.17, 1.27, -0.04),(0.2, 1.27, -0.09),(0.2, 1.27, 0.02),(0.244, 1.1388, -0.04),(0.165, 1.1388, -0.04),(0.2, 1.1388, -0.08),(0.2, 1.1388, -0.013),(0.225, 1, -0.01),(0.225, 1, -0.07),(0.185, 1, -0.01),(0.185, 1, -0.07),(0.2, 1.1388, -0.04),(0.225, 0.92, -0.04),(0.175, 0.92, -0.04),(0.2, 0.92, -0.065),(0.2, 0.92, -0.015),(0.225, 0.89, -0.04),(0.175, 0.89, -0.04),(0.2, 0.89, -0.065),(0.2, 0.89, -0.015),(0.218, 0.86, -0.04),(0.184, 0.86, -0.04),(0.2, 0.87, -0.07),(0.2, 0.87, 0),(0.21, 0.85, 0),(0.1854, 0.85, 0),(0.212, 0.84, -0.015),(0.183, 0.84, -0.015),(0.213, 0.835, -0.04),(0.19, 0.835, -0.04),(0.211, 0.835, -0.065),(0.192, 0.835, -0.065),(0.208, 0.84, -0.085),(0.19, 0.84, -0.085),(0.2, 0.84, -0.095),(0.215, 0.82, 0),(0.193, 0.815, 0.005),(0.198, 0.8, 0.012),(0.21, 0.82, 0.03),(0.19, 0.82, 0.03),(0.2, 0.835, 0.039),(0.212, 0.8, 0.05),(0.188, 0.8, 0.05),(0.2, 0.807, 0.057),(0.2, 0.793, 0.035),(0.2, 0.774, 0.076),(0.212, 0.78, 0.07),(0.188, 0.78, 0.07),(0.2, 0.785, 0.075),(0.2, 0.77, 0.062),(0.215, 0.793, -0.015),(0.187, 0.793, -0.015),(0.2, 0.793, -0.005),(0.215, 0.788, -0.04),(0.187, 0.788, -0.04),(0.215, 0.793, -0.065),(0.187, 0.793, -0.065),(0.21, 0.79, -0.085),(0.19, 0.79, -0.085),(0.2, 0.79, -0.095),(0.19, 0.77, -0.0275),(0.19, 0.77, -0.0525),(0.19, 0.78, -0.0775),(0.212, 0.745, -0.015),(0.188, 0.745, -0.02),(0.2, 0.745, -0.0255),(0.2, 0.745, -0.0045),(0.211, 0.72, -0.015),(0.189, 0.72, -0.015),(0.2, 0.72, -0.0252),(0.2, 0.72, -0.0048),(0.21, 0.695, -0.015),(0.19, 0.695, -0.015),(0.2, 0.695, -0.025),(0.2, 0.695, -0.005),(0.2, 0.685, -0.015),(0.215, 0.74, -0.04),(0.185, 0.74, -0.04),(0.2, 0.74, -0.055),(0.2, 0.74, -0.025),(0.21, 0.7142, -0.04),(0.19, 0.7142, -0.04),(0.2, 0.7142, -0.053),(0.2, 0.7142, -0.027),(0.21, 0.68, -0.04),(0.19, 0.68, -0.04),(0.2, 0.68, -0.05),(0.2, 0.68, -0.03),(0.2, 0.67, -0.04),(0.212, 0.74, -0.065),(0.188, 0.74, -0.065),(0.2, 0.74, -0.0756),(0.2, 0.74, -0.0542),(0.21, 0.7177, -0.065),(0.19, 0.7177, -0.065),(0.2, 0.7177, -0.0751),(0.2, 0.7177, -0.0549),(0.21, 0.695, -0.065),(0.19, 0.695, -0.065),(0.2, 0.695, -0.075),(0.2, 0.695, -0.055),(0.2, 0.685, -0.065),(0.211, 0.755, -0.085),(0.189, 0.755, -0.085),(0.2, 0.755, -0.0952),(0.2, 0.755, -0.0748),(0.21, 0.735, -0.085),(0.19, 0.735, -0.085),(0.2, 0.735, -0.0951),(0.2, 0.735, -0.0749),(0.21, 0.72, -0.085),(0.19, 0.72, -0.085),(0.2, 0.72, -0.095),(0.2, 0.72, -0.075),(0.2, 0.71, -0.085),(-0.23, 1.23, -0.04),(-0.16, 1.23, -0.04),(-0.2, 1.235, -0.105),(-0.2, 1.255, 0.02),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.2, 1.1388, -0.08),(-0.2, 1.1388, 0.013),(-0.225, 1, -0.01),(-0.225, 1, -0.07),(-0.185, 1, -0.01),(-0.185, 1, -0.07),(-0.2, 1.1388, -0.04),(-0.225, 0.92, -0.04),(-0.175, 0.92, -0.04),(-0.2, 0.92, -0.065),(-0.2, 0.92, -0.015),(-0.225, 0.89, -0.04),(-0.175, 0.89, -0.04),(-0.2, 0.89, -0.065),(-0.2, 0.89, -0.015),(-0.218, 0.86, -0.04),(-0.184, 0.86, -0.04),(-0.2, 0.87, -0.07),(-0.2, 0.87, 0),(-0.21, 0.85, 0),(-0.1854, 0.85, 0),(-0.212, 0.84, -0.015),(-0.183, 0.84, -0.015),(-0.213, 0.835, -0.04),(-0.19, 0.835, -0.04),(-0.211, 0.835, -0.065),(-0.192, 0.835, -0.065),(-0.208, 0.84, -0.085),(-0.19, 0.84, -0.085),(-0.2, 0.84, -0.095),(-0.215, 0.82, 0),(-0.193, 0.815, 0.005),(-0.198, 0.8, 0.012),(-0.21, 0.82, 0.03),(-0.19, 0.82, 0.03),(-0.2, 0.835, 0.039),(-0.212, 0.8, 0.05),(-0.188, 0.8, 0.05),(-0.2, 0.807, 0.057),(-0.2, 0.793, 0.035),(-0.2, 0.774, 0.076),(-0.212, 0.78, 0.07),(-0.188, 0.78, 0.07),(-0.2, 0.785, 0.075),(-0.2, 0.77, 0.062),(-0.215, 0.793, -0.015),(-0.187, 0.793, -0.015),(-0.2, 0.793, -0.005),(-0.215, 0.788, -0.04),(-0.187, 0.788, -0.04),(-0.215, 0.793, -0.065),(-0.187, 0.793, -0.065),(-0.21, 0.79, -0.085),(-0.19, 0.79, -0.085),(-0.2, 0.79, -0.095),(-0.19, 0.77, -0.0275),(-0.19, 0.77, -0.0525),(-0.19, 0.78, -0.0775),(-0.212, 0.745, -0.015),(-0.188, 0.745, -0.02),(-0.2, 0.745, -0.0255),(-0.2, 0.745, -0.0045),(-0.211, 0.72, -0.015),(-0.189, 0.72, -0.015),(-0.2, 0.72, -0.0252),(-0.2, 0.72, -0.0048),(-0.21, 0.695, -0.015),(-0.19, 0.695, -0.015),(-0.2, 0.695, -0.025),(-0.2, 0.695, -0.005),(-0.2, 0.685, -0.015),(-0.215, 0.74, -0.04),(-0.185, 0.74, -0.04),(-0.2, 0.74, -0.055),(-0.2, 0.74, -0.025),(-0.21, 0.7142, -0.04),(-0.19, 0.7142, -0.04),(-0.2, 0.7142, -0.053),(-0.2, 0.7142, -0.027),(-0.21, 0.68, -0.04),(-0.19, 0.68, -0.04),(-0.2, 0.68, -0.05),(-0.2, 0.68, -0.03),(-0.2, 0.67, -0.04),(-0.212, 0.74, -0.065),(-0.188, 0.74, -0.065),(-0.2, 0.74, -0.0756),(-0.2, 0.74, -0.0542),(-0.21, 0.7177, -0.065),(-0.19, 0.7177, -0.065),(-0.2, 0.7177, -0.0751),(-0.2, 0.7177, -0.0549),(-0.21, 0.695, -0.065),(-0.19, 0.695, -0.065),(-0.2, 0.695, -0.075),(-0.2, 0.695, -0.055),(-0.2, 0.685, -0.065),(-0.211, 0.755, -0.085),(-0.189, 0.755, -0.085),(-0.2, 0.755, -0.0952),(-0.2, 0.755, -0.0748),(-0.21, 0.735, -0.085),(-0.19, 0.735, -0.085),(-0.2, 0.735, -0.0951),(-0.2, 0.735, -0.0749),(-0.21, 0.72, -0.085),(-0.19, 0.72, -0.085),(-0.2, 0.72, -0.095),(-0.2, 0.72, -0.075),(-0.2, 0.71, -0.085),(0.115, 0.466, 0.06),(0.115, 0.466, -0.055),(0.15, 0.466, 0),(0.05, 0.466, 0),(0.17, 0.3, 0),(0.06, 0.3, 0),(0.1, 0.3, -0.05),(0.1, 0.3, 0.05),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.115, 0.069, -0.045),(0.117, 0.0975, 0.0615),(0.1375, 0.006, -0.03),(0.095, 0.006, -0.03),(0.115, 0.015, -0.045),(0.115, 0.06, 0.1),(0.115, 0, 0.07),(0.165, 0, 0.07),(0.095, 0, 0.07),(0.115, 0.04, 0.13),(0.125, 0, 0.12),(0.165, 0, 0.12),(0.087, 0, 0.122),(0.09, 0.012, 0.188),(0.11, 0.011, 0.19),(0.128, 0.011, 0.185),(0.142, 0.011, 0.178),(0.154, 0.01, 0.168),(-0.115, 0.466, 0.06),(-0.115, 0.466, -0.055),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.17, 0.3, 0),(-0.06, 0.3, 0),(-0.1, 0.3, -0.05),(-0.1, 0.3, 0.05),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.115, 0.069, -0.045),(-0.117, 0.0975, 0.0615),(-0.1375, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.115, 0.06, 0.1),(-0.115, 0, 0.07),(-0.165, 0, 0.07),(-0.095, 0, 0.07),(-0.115, 0.04, 0.13),(-0.125, 0, 0.12),(-0.165, 0, 0.12),(-0.087, 0, 0.122),(-0.09, 0.012, 0.188),(-0.11, 0.011, 0.19),(-0.128, 0.011, 0.185),(-0.142, 0.011, 0.178),(-0.154, 0.01, 0.168)]

HAnimHumanoid15.skinCoord = Coordinate198
Shape199 = x3d.Shape()
Appearance200 = x3d.Appearance()
Material201 = x3d.Material()
Material201.emissiveColor = [0.13,0.55,0.13]

Appearance200.material = Material201
ImageTexture202 = x3d.ImageTexture()
ImageTexture202.url = ["bodytexture28.png"]

Appearance200.texture = ImageTexture202

Shape199.appearance = Appearance200
IndexedFaceSet203 = x3d.IndexedFaceSet()
IndexedFaceSet203.creaseAngle = 3.1
IndexedFaceSet203.colorPerVertex = False
IndexedFaceSet203.coordIndex = [0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]
Coordinate204 = x3d.Coordinate(USE="JoeSkinCoord")

IndexedFaceSet203.coord = Coordinate204

Shape199.geometry = IndexedFaceSet203

HAnimHumanoid15.skin.append(Shape199)

Group14.children.append(HAnimHumanoid15)

Scene6.children.append(Group14)
Transform205 = x3d.Transform(DEF="SBall")
Transform205.translation = [-0.074397,0.094551,-0.074397]
Transform205.rotation = [-0.70711,0,-0.70711,1.231]
Transform205.scale = [0.23,0.23,0.23]
Shape206 = x3d.Shape()
Appearance207 = x3d.Appearance()
Material208 = x3d.Material()
Material208.diffuseColor = [0,0.8353,0]
Material208.specularColor = [0,0.6849,0]
Material208.emissiveColor = [1,1,1]

Appearance207.material = Material208
ImageTexture209 = x3d.ImageTexture()
ImageTexture209.url = ["bodytexture28.png"]

Appearance207.texture = ImageTexture209

Shape206.appearance = Appearance207
IndexedFaceSet210 = x3d.IndexedFaceSet(DEF="ball")
IndexedFaceSet210.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]
Coordinate211 = x3d.Coordinate()
Coordinate211.point = [(0, 0.4675, 0),(0, 0.4049, -0.2338),(-0.1169, 0.4049, -0.2024),(-0.2024, 0.4049, -0.1169),(-0.2338, 0.4049, 0),(-0.2024, 0.4049, 0.1169),(-0.1169, 0.4049, 0.2024),(0, 0.4049, 0.2338),(0.1169, 0.4049, 0.2024),(0.2024, 0.4049, 0.1169),(0.2338, 0.4049, 0),(0.2024, 0.4049, -0.1169),(0.1169, 0.4049, -0.2024),(0, 0.2338, -0.4049),(-0.2024, 0.2338, -0.3506),(-0.3506, 0.2338, -0.2024),(-0.4049, 0.2338, 0),(-0.3506, 0.2338, 0.2024),(-0.2024, 0.2338, 0.3506),(0, 0.2338, 0.4049),(0.2024, 0.2338, 0.3506),(0.3506, 0.2338, 0.2024),(0.4049, 0.2338, 0),(0.3506, 0.2338, -0.2024),(0.2024, 0.2338, -0.3506),(0, 0, -0.4675),(-0.2338, 0, -0.4049),(-0.4049, 0, -0.2338),(-0.4675, 0, 0),(-0.4049, 0, 0.2338),(-0.2338, 0, 0.4049),(0, 0, 0.4675),(0.2338, 0, 0.4049),(0.4049, 0, 0.2338),(0.4675, 0, 0),(0.4049, 0, -0.2338),(0.2338, 0, -0.4049),(0, -0.2338, -0.4049),(-0.2024, -0.2338, -0.3506),(-0.3506, -0.2338, -0.2024),(-0.4049, -0.2338, 0),(-0.3506, -0.2338, 0.2024),(-0.2024, -0.2338, 0.3506),(0, -0.2338, 0.4049),(0.2024, -0.2338, 0.3506),(0.3506, -0.2338, 0.2024),(0.4049, -0.2338, 0),(0.3506, -0.2338, -0.2024),(0.2024, -0.2338, -0.3506),(0, -0.4049, -0.2338),(-0.1169, -0.4049, -0.2024),(-0.2024, -0.4049, -0.1169),(-0.2338, -0.4049, 0),(-0.2024, -0.4049, 0.1169),(-0.1169, -0.4049, 0.2024),(0, -0.4049, 0.2338),(0.1169, -0.4049, 0.2024),(0.2024, -0.4049, 0.1169),(0.2338, -0.4049, 0),(0.2024, -0.4049, -0.1169),(0.1169, -0.4049, -0.2024),(0, -0.4675, 0)]

IndexedFaceSet210.coord = Coordinate211

Shape206.geometry = IndexedFaceSet210

Transform205.children.append(Shape206)
Viewpoint212 = x3d.Viewpoint(DEF="ballView")
Viewpoint212.description = "ball View"

Transform205.children.append(Viewpoint212)

Scene6.children.append(Transform205)
Transform213 = x3d.Transform(DEF="scenecordsys")
Transform213.scale = [0.275,0.275,0.275]
Inline214 = x3d.Inline()
Inline214.global_ = True
Inline214.url = ["JointCoordinateAxes.x3dv"]

Transform213.children.append(Inline214)

Scene6.children.append(Transform213)
Transform215 = x3d.Transform(DEF="Circle0")
Transform215.scale = [1.175,1,1.175]
Shape216 = x3d.Shape()
Appearance217 = x3d.Appearance()
Material218 = x3d.Material()
Material218.diffuseColor = [0.9,0,0.7]
Material218.emissiveColor = [0.42496,0.48398,1]

Appearance217.material = Material218

Shape216.appearance = Appearance217
IndexedLineSet219 = x3d.IndexedLineSet(DEF="Orbit1")
IndexedLineSet219.coordIndex = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]
Coordinate220 = x3d.Coordinate()
Coordinate220.point = [(1, 0, 0),(0.995, 0, -0.105),(0.979, 0, -0.208),(0.951, 0, -0.309),(0.914, 0, -0.407),(0.866, 0, -0.5),(0.809, 0, -0.588),(0.743, 0, -0.669),(0.669, 0, -0.743),(0.588, 0, -0.809),(0.5, 0, -0.866),(0.407, 0, -0.914),(0.309, 0, -0.951),(0.208, 0, -0.978),(0.105, 0, -0.995),(0, 0, -1),(-0.105, 0, -0.99452),(-0.208, 0, -0.978),(-0.309, 0, -0.951),(-0.407, 0, -0.914),(-0.5, 0, -0.866),(-0.588, 0, -0.809),(-0.669, 0, -0.743),(-0.743, 0, -0.669),(-0.809, 0, -0.588),(-0.866, 0, -0.5),(-0.914, 0, -0.407),(-0.951, 0, -0.309),(-0.978, 0, -0.208),(-0.995, 0, -0.105),(-1, 0, 0),(-0.995, 0, 0.105),(-0.978, 0, 0.208),(-0.951, 0, 0.309),(-0.914, 0, 0.407),(-0.866, 0, 0.5),(-0.809, 0, 0.588),(-0.743, 0, 0.669),(-0.669, 0, 0.743),(-0.588, 0, 0.809),(-0.5, 0, 0.866),(-0.407, 0, 0.914),(-0.309, 0, 0.951),(-0.208, 0, 0.978),(-0.105, 0, 0.995),(0, 0, 1),(0.105, 0, 0.995),(0.208, 0, 0.978),(0.309, 0, 0.951),(0.407, 0, 0.914),(0.5, 0, 0.866),(0.588, 0, 0.809),(0.669, 0, 0.743),(0.743, 0, 0.669),(0.809, 0, 0.588),(0.866, 0, 0.5),(0.914, 0, 0.407),(0.951, 0, 0.309),(0.978, 0, 0.208),(0.995, 0, 0.104),(1, 0, 0)]

IndexedLineSet219.coord = Coordinate220

Shape216.geometry = IndexedLineSet219

Transform215.children.append(Shape216)

Scene6.children.append(Transform215)
Transform221 = x3d.Transform(DEF="Circle1")
Transform221.scale = [0.5,1,0.5]
Shape222 = x3d.Shape()
Appearance223 = x3d.Appearance()
Material224 = x3d.Material()
Material224.diffuseColor = [0.9,0,0.7]
Material224.emissiveColor = [0.42496,0.48398,1]

Appearance223.material = Material224

Shape222.appearance = Appearance223
IndexedLineSet225 = x3d.IndexedLineSet(USE="Orbit1")

Shape222.geometry = IndexedLineSet225

Transform221.children.append(Shape222)

Scene6.children.append(Transform221)
Transform226 = x3d.Transform(DEF="Circle2")
Transform226.scale = [0.25,1,0.25]
Shape227 = x3d.Shape()
Appearance228 = x3d.Appearance()
Material229 = x3d.Material()
Material229.diffuseColor = [0.9,0,0.7]
Material229.emissiveColor = [0.42496,0.48398,1]

Appearance228.material = Material229

Shape227.appearance = Appearance228
IndexedLineSet230 = x3d.IndexedLineSet(USE="Orbit1")

Shape227.geometry = IndexedLineSet230

Transform226.children.append(Shape227)

Scene6.children.append(Transform226)

X3D0.Scene = Scene6
f = open("../data/JoeHAnimKick1a_Final.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/JoeHAnimKick1a_Final.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/JoeHAnimKick1a_Final.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
