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
meta3.content = "Humanoid2NoSegSite.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "identifier"
meta4.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid2NoSegSite.x3d"

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
HAnimJoint42.skinCoordIndex = [0]
HAnimJoint42.skinCoordWeight = [0]
HAnimJoint43 = x3d.HAnimJoint(DEF="hanim_sacroiliac")
HAnimJoint43.name = "sacroiliac"
HAnimJoint43.center = [0,0.9149,0.0016]
HAnimJoint43.skinCoordIndex = [0]
HAnimJoint43.skinCoordWeight = [0]
HAnimJoint44 = x3d.HAnimJoint(DEF="hanim_l_hip")
HAnimJoint44.name = "l_hip"
HAnimJoint44.center = [0.0961,0.9124,-0.0001]
HAnimJoint44.skinCoordIndex = [0]
HAnimJoint44.skinCoordWeight = [0]
HAnimJoint45 = x3d.HAnimJoint(DEF="hanim_l_knee")
HAnimJoint45.name = "l_knee"
HAnimJoint45.center = [0.104,0.4867,0.0308]
HAnimJoint45.skinCoordIndex = [0]
HAnimJoint45.skinCoordWeight = [0]
HAnimJoint46 = x3d.HAnimJoint(DEF="hanim_l_talocrural")
HAnimJoint46.name = "l_talocrural"
HAnimJoint46.center = [0.1101,0.0656,-0.0736]
HAnimJoint46.skinCoordIndex = [0]
HAnimJoint46.skinCoordWeight = [0]
HAnimJoint47 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_2")
HAnimJoint47.name = "l_tarsometatarsal_2"
HAnimJoint47.center = [0.08,0.0175,-0.0608]
HAnimJoint47.skinCoordIndex = [0]
HAnimJoint47.skinCoordWeight = [0]
HAnimJoint48 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_2")
HAnimJoint48.name = "l_metatarsophalangeal_2"
HAnimJoint48.center = [0.0824,0.0064,-0.004]
HAnimJoint48.skinCoordIndex = [0]
HAnimJoint48.skinCoordWeight = [0]
HAnimJoint49 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint49.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint49.center = [0.0841,0.0013,0.0216]
HAnimJoint49.skinCoordIndex = [0]
HAnimJoint49.skinCoordWeight = [0]

HAnimJoint48.children.append(HAnimJoint49)

HAnimJoint47.children.append(HAnimJoint48)

HAnimJoint46.children.append(HAnimJoint47)

HAnimJoint45.children.append(HAnimJoint46)

HAnimJoint44.children.append(HAnimJoint45)

HAnimJoint43.children.append(HAnimJoint44)
HAnimJoint50 = x3d.HAnimJoint(DEF="hanim_r_hip")
HAnimJoint50.name = "r_hip"
HAnimJoint50.center = [-0.095,0.9171,0.0029]
HAnimJoint50.skinCoordIndex = [0]
HAnimJoint50.skinCoordWeight = [0]
HAnimJoint51 = x3d.HAnimJoint(DEF="hanim_r_knee")
HAnimJoint51.name = "r_knee"
HAnimJoint51.center = [-0.0867,0.4913,0.0318]
HAnimJoint51.skinCoordIndex = [0]
HAnimJoint51.skinCoordWeight = [0]
HAnimJoint52 = x3d.HAnimJoint(DEF="hanim_r_talocrural")
HAnimJoint52.name = "r_talocrural"
HAnimJoint52.center = [-0.0801,0.0712,-0.0766]
HAnimJoint52.skinCoordIndex = [0]
HAnimJoint52.skinCoordWeight = [0]
HAnimJoint53 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_2")
HAnimJoint53.name = "r_tarsometatarsal_2"
HAnimJoint53.center = [-0.08,0.0175,-0.0608]
HAnimJoint53.skinCoordIndex = [0]
HAnimJoint53.skinCoordWeight = [0]
HAnimJoint54 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_2")
HAnimJoint54.name = "r_metatarsophalangeal_2"
HAnimJoint54.center = [-0.0823,0.0064,-0.004]
HAnimJoint54.skinCoordIndex = [0]
HAnimJoint54.skinCoordWeight = [0]
HAnimJoint55 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint55.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint55.center = [-0.0841,0.0013,0.0216]
HAnimJoint55.skinCoordIndex = [0]
HAnimJoint55.skinCoordWeight = [0]

HAnimJoint54.children.append(HAnimJoint55)

HAnimJoint53.children.append(HAnimJoint54)

HAnimJoint52.children.append(HAnimJoint53)

HAnimJoint51.children.append(HAnimJoint52)

HAnimJoint50.children.append(HAnimJoint51)

HAnimJoint43.children.append(HAnimJoint50)

HAnimJoint42.children.append(HAnimJoint43)
HAnimJoint56 = x3d.HAnimJoint(DEF="hanim_vl5")
HAnimJoint56.name = "vl5"
HAnimJoint56.center = [0.0028,1.0568,-0.0776]
HAnimJoint56.skinCoordIndex = [0]
HAnimJoint56.skinCoordWeight = [0]
HAnimJoint57 = x3d.HAnimJoint(DEF="hanim_vl3")
HAnimJoint57.name = "vl3"
HAnimJoint57.center = [0.0041,1.1276,-0.0796]
HAnimJoint57.skinCoordIndex = [0]
HAnimJoint57.skinCoordWeight = [0]
HAnimJoint58 = x3d.HAnimJoint(DEF="hanim_vl1")
HAnimJoint58.name = "vl1"
HAnimJoint58.center = [0.0048,1.1912,-0.0805]
HAnimJoint58.skinCoordIndex = [0]
HAnimJoint58.skinCoordWeight = [0]
HAnimJoint59 = x3d.HAnimJoint(DEF="hanim_vt10")
HAnimJoint59.name = "vt10"
HAnimJoint59.center = [0.0056,1.2848,-0.0822]
HAnimJoint59.skinCoordIndex = [0]
HAnimJoint59.skinCoordWeight = [0]
HAnimJoint60 = x3d.HAnimJoint(DEF="hanim_vt6")
HAnimJoint60.name = "vt6"
HAnimJoint60.center = [0.0059,1.3866,-0.08]
HAnimJoint60.skinCoordIndex = [0]
HAnimJoint60.skinCoordWeight = [0]
HAnimJoint61 = x3d.HAnimJoint(DEF="hanim_vt1")
HAnimJoint61.name = "vt1"
HAnimJoint61.center = [0.0065,1.4951,-0.0387]
HAnimJoint61.skinCoordIndex = [0]
HAnimJoint61.skinCoordWeight = [0]
HAnimJoint62 = x3d.HAnimJoint(DEF="hanim_vc4")
HAnimJoint62.name = "vc4"
HAnimJoint62.center = [0.0066,1.5662,-0.0084]
HAnimJoint62.skinCoordIndex = [0]
HAnimJoint62.skinCoordWeight = [0]
HAnimJoint63 = x3d.HAnimJoint(DEF="hanim_vc2")
HAnimJoint63.name = "vc2"
HAnimJoint63.center = [0.0066,1.5928,-0.0103]
HAnimJoint63.skinCoordIndex = [0]
HAnimJoint63.skinCoordWeight = [0]
HAnimJoint64 = x3d.HAnimJoint(DEF="hanim_skullbase")
HAnimJoint64.name = "skullbase"
HAnimJoint64.center = [0.0044,1.6209,0.0236]
HAnimJoint64.skinCoordIndex = [0]
HAnimJoint64.skinCoordWeight = [0]

HAnimJoint63.children.append(HAnimJoint64)

HAnimJoint62.children.append(HAnimJoint63)

HAnimJoint61.children.append(HAnimJoint62)
HAnimJoint65 = x3d.HAnimJoint(DEF="hanim_l_sternoclavicular")
HAnimJoint65.name = "l_sternoclavicular"
HAnimJoint65.center = [0.082,1.4488,-0.0353]
HAnimJoint65.skinCoordIndex = [0]
HAnimJoint65.skinCoordWeight = [0]
HAnimJoint66 = x3d.HAnimJoint(DEF="hanim_l_acromioclavicular")
HAnimJoint66.name = "l_acromioclavicular"
HAnimJoint66.center = [0.0962,1.4269,-0.0424]
HAnimJoint66.skinCoordIndex = [0]
HAnimJoint66.skinCoordWeight = [0]
HAnimJoint67 = x3d.HAnimJoint(DEF="hanim_l_shoulder")
HAnimJoint67.name = "l_shoulder"
HAnimJoint67.center = [0.2029,1.4376,-0.0387]
HAnimJoint67.skinCoordIndex = [0]
HAnimJoint67.skinCoordWeight = [0]
HAnimJoint68 = x3d.HAnimJoint(DEF="hanim_l_elbow")
HAnimJoint68.name = "l_elbow"
HAnimJoint68.center = [0.2014,1.1357,-0.0682]
HAnimJoint68.skinCoordIndex = [0]
HAnimJoint68.skinCoordWeight = [0]
HAnimJoint69 = x3d.HAnimJoint(DEF="hanim_l_radiocarpal")
HAnimJoint69.name = "l_radiocarpal"
HAnimJoint69.center = [0.1984,0.8663,-0.0583]
HAnimJoint69.skinCoordIndex = [0]
HAnimJoint69.skinCoordWeight = [0]
HAnimJoint70 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_1")
HAnimJoint70.name = "l_carpometacarpal_1"
HAnimJoint70.center = [0.1924,0.8472,-0.0534]
HAnimJoint70.skinCoordIndex = [0]
HAnimJoint70.skinCoordWeight = [0]
HAnimJoint71 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_1")
HAnimJoint71.name = "l_metacarpophalangeal_1"
HAnimJoint71.center = [0.1951,0.8226,0.0246]
HAnimJoint71.skinCoordIndex = [0]
HAnimJoint71.skinCoordWeight = [0]
HAnimJoint72 = x3d.HAnimJoint(DEF="hanim_l_carpal_interphalangeal_1")
HAnimJoint72.name = "l_carpal_interphalangeal_1"
HAnimJoint72.center = [0.1955,0.8159,0.0464]
HAnimJoint72.skinCoordIndex = [0]
HAnimJoint72.skinCoordWeight = [0]

HAnimJoint71.children.append(HAnimJoint72)

HAnimJoint70.children.append(HAnimJoint71)

HAnimJoint69.children.append(HAnimJoint70)
HAnimJoint73 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_2")
HAnimJoint73.name = "l_carpometacarpal_2"
HAnimJoint73.center = [0.1983,0.8024,-0.028]
HAnimJoint73.skinCoordIndex = [0]
HAnimJoint73.skinCoordWeight = [0]
HAnimJoint74 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_2")
HAnimJoint74.name = "l_metacarpophalangeal_2"
HAnimJoint74.center = [0.1983,0.7815,-0.028]
HAnimJoint74.skinCoordIndex = [0]
HAnimJoint74.skinCoordWeight = [0]
HAnimJoint75 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint75.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint75.center = [0.2017,0.7363,-0.0248]
HAnimJoint75.skinCoordIndex = [0]
HAnimJoint75.skinCoordWeight = [0]
HAnimJoint76 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint76.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint76.center = [0.2028,0.7139,-0.0236]
HAnimJoint76.skinCoordIndex = [0]
HAnimJoint76.skinCoordWeight = [0]

HAnimJoint75.children.append(HAnimJoint76)

HAnimJoint74.children.append(HAnimJoint75)

HAnimJoint73.children.append(HAnimJoint74)

HAnimJoint69.children.append(HAnimJoint73)
HAnimJoint77 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_3")
HAnimJoint77.name = "l_carpometacarpal_3"
HAnimJoint77.center = [0.1987,0.8029,-0.053]
HAnimJoint77.skinCoordIndex = [0]
HAnimJoint77.skinCoordWeight = [0]
HAnimJoint78 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_3")
HAnimJoint78.name = "l_metacarpophalangeal_3"
HAnimJoint78.center = [0.1987,0.7818,-0.053]
HAnimJoint78.skinCoordIndex = [0]
HAnimJoint78.skinCoordWeight = [0]
HAnimJoint79 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint79.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint79.center = [0.2013,0.7273,-0.0503]
HAnimJoint79.skinCoordIndex = [0]
HAnimJoint79.skinCoordWeight = [0]
HAnimJoint80 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint80.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint80.center = [0.2026,0.7011,-0.0494]
HAnimJoint80.skinCoordIndex = [0]
HAnimJoint80.skinCoordWeight = [0]

HAnimJoint79.children.append(HAnimJoint80)

HAnimJoint78.children.append(HAnimJoint79)

HAnimJoint77.children.append(HAnimJoint78)

HAnimJoint69.children.append(HAnimJoint77)
HAnimJoint81 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_4")
HAnimJoint81.name = "l_carpometacarpal_4"
HAnimJoint81.center = [0.1956,0.8019,-0.0794]
HAnimJoint81.skinCoordIndex = [0]
HAnimJoint81.skinCoordWeight = [0]
HAnimJoint82 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_4")
HAnimJoint82.name = "l_metacarpophalangeal_4"
HAnimJoint82.center = [0.1956,0.7815,-0.0794]
HAnimJoint82.skinCoordIndex = [0]
HAnimJoint82.skinCoordWeight = [0]
HAnimJoint83 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint83.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint83.center = [0.1973,0.7287,-0.0777]
HAnimJoint83.skinCoordIndex = [0]
HAnimJoint83.skinCoordWeight = [0]
HAnimJoint84 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint84.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint84.center = [0.1983,0.7045,-0.0767]
HAnimJoint84.skinCoordIndex = [0]
HAnimJoint84.skinCoordWeight = [0]

HAnimJoint83.children.append(HAnimJoint84)

HAnimJoint82.children.append(HAnimJoint83)

HAnimJoint81.children.append(HAnimJoint82)

HAnimJoint69.children.append(HAnimJoint81)
HAnimJoint85 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_5")
HAnimJoint85.name = "l_carpometacarpal_5"
HAnimJoint85.center = [0.1925,0.8066,-0.1036]
HAnimJoint85.skinCoordIndex = [0]
HAnimJoint85.skinCoordWeight = [0]
HAnimJoint86 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_5")
HAnimJoint86.name = "l_metacarpophalangeal_5"
HAnimJoint86.center = [0.1925,0.7866,-0.1036]
HAnimJoint86.skinCoordIndex = [0]
HAnimJoint86.skinCoordWeight = [0]
HAnimJoint87 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint87.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint87.center = [0.1938,0.7452,-0.1024]
HAnimJoint87.skinCoordIndex = [0]
HAnimJoint87.skinCoordWeight = [0]
HAnimJoint88 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint88.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint88.center = [0.1948,0.7277,-0.1017]
HAnimJoint88.skinCoordIndex = [0]
HAnimJoint88.skinCoordWeight = [0]

HAnimJoint87.children.append(HAnimJoint88)

HAnimJoint86.children.append(HAnimJoint87)

HAnimJoint85.children.append(HAnimJoint86)

HAnimJoint69.children.append(HAnimJoint85)

HAnimJoint68.children.append(HAnimJoint69)

HAnimJoint67.children.append(HAnimJoint68)

HAnimJoint66.children.append(HAnimJoint67)

HAnimJoint65.children.append(HAnimJoint66)

HAnimJoint61.children.append(HAnimJoint65)
HAnimJoint89 = x3d.HAnimJoint(DEF="hanim_r_sternoclavicular")
HAnimJoint89.name = "r_sternoclavicular"
HAnimJoint89.center = [-0.0694,1.46,-0.033]
HAnimJoint89.skinCoordIndex = [0]
HAnimJoint89.skinCoordWeight = [0]
HAnimJoint90 = x3d.HAnimJoint(DEF="hanim_r_acromioclavicular")
HAnimJoint90.name = "r_acromioclavicular"
HAnimJoint90.center = [-0.0836,1.4281,-0.0401]
HAnimJoint90.skinCoordIndex = [0]
HAnimJoint90.skinCoordWeight = [0]
HAnimJoint91 = x3d.HAnimJoint(DEF="hanim_r_shoulder")
HAnimJoint91.name = "r_shoulder"
HAnimJoint91.center = [-0.1907,1.4407,-0.0325]
HAnimJoint91.skinCoordIndex = [0]
HAnimJoint91.skinCoordWeight = [0]
HAnimJoint92 = x3d.HAnimJoint(DEF="hanim_r_elbow")
HAnimJoint92.name = "r_elbow"
HAnimJoint92.center = [-0.1949,1.1388,-0.062]
HAnimJoint92.skinCoordIndex = [0]
HAnimJoint92.skinCoordWeight = [0]
HAnimJoint93 = x3d.HAnimJoint(DEF="hanim_r_radiocarpal")
HAnimJoint93.name = "r_radiocarpal"
HAnimJoint93.center = [-0.1959,0.8694,-0.0521]
HAnimJoint93.skinCoordIndex = [0]
HAnimJoint93.skinCoordWeight = [0]
HAnimJoint94 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_1")
HAnimJoint94.name = "r_carpometacarpal_1"
HAnimJoint94.center = [-0.1899,0.8502,-0.0473]
HAnimJoint94.skinCoordIndex = [0]
HAnimJoint94.skinCoordWeight = [0]
HAnimJoint95 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_1")
HAnimJoint95.name = "r_metacarpophalangeal_1"
HAnimJoint95.center = [-0.1874,0.8256,0.0306]
HAnimJoint95.skinCoordIndex = [0]
HAnimJoint95.skinCoordWeight = [0]
HAnimJoint96 = x3d.HAnimJoint(DEF="hanim_r_carpal_interphalangeal_1")
HAnimJoint96.name = "r_carpal_interphalangeal_1"
HAnimJoint96.center = [-0.1864,0.819,0.0506]
HAnimJoint96.skinCoordIndex = [0]
HAnimJoint96.skinCoordWeight = [0]

HAnimJoint95.children.append(HAnimJoint96)

HAnimJoint94.children.append(HAnimJoint95)

HAnimJoint93.children.append(HAnimJoint94)
HAnimJoint97 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_2")
HAnimJoint97.name = "r_carpometacarpal_2"
HAnimJoint97.center = [-0.1961,0.8055,-0.0218]
HAnimJoint97.skinCoordIndex = [0]
HAnimJoint97.skinCoordWeight = [0]
HAnimJoint98 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_2")
HAnimJoint98.name = "r_metacarpophalangeal_2"
HAnimJoint98.center = [-0.1961,0.7846,-0.0218]
HAnimJoint98.skinCoordIndex = [0]
HAnimJoint98.skinCoordWeight = [0]
HAnimJoint99 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint99.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint99.center = [-0.1954,0.7393,-0.0185]
HAnimJoint99.skinCoordIndex = [0]
HAnimJoint99.skinCoordWeight = [0]
HAnimJoint100 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint100.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint100.center = [-0.1945,0.7169,-0.0173]
HAnimJoint100.skinCoordIndex = [0]
HAnimJoint100.skinCoordWeight = [0]

HAnimJoint99.children.append(HAnimJoint100)

HAnimJoint98.children.append(HAnimJoint99)

HAnimJoint97.children.append(HAnimJoint98)

HAnimJoint93.children.append(HAnimJoint97)
HAnimJoint101 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_3")
HAnimJoint101.name = "r_carpometacarpal_3"
HAnimJoint101.center = [-0.1972,0.806,-0.0468]
HAnimJoint101.skinCoordIndex = [0]
HAnimJoint101.skinCoordWeight = [0]
HAnimJoint102 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_3")
HAnimJoint102.name = "r_metacarpophalangeal_3"
HAnimJoint102.center = [-0.1972,0.7849,-0.0468]
HAnimJoint102.skinCoordIndex = [0]
HAnimJoint102.skinCoordWeight = [0]
HAnimJoint103 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint103.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint103.center = [-0.195,0.7304,-0.0441]
HAnimJoint103.skinCoordIndex = [0]
HAnimJoint103.skinCoordWeight = [0]
HAnimJoint104 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint104.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint104.center = [-0.1939,0.7042,-0.0432]
HAnimJoint104.skinCoordIndex = [0]
HAnimJoint104.skinCoordWeight = [0]

HAnimJoint103.children.append(HAnimJoint104)

HAnimJoint102.children.append(HAnimJoint103)

HAnimJoint101.children.append(HAnimJoint102)

HAnimJoint93.children.append(HAnimJoint101)
HAnimJoint105 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_4")
HAnimJoint105.name = "r_carpometacarpal_4"
HAnimJoint105.center = [-0.1951,0.8049,-0.0732]
HAnimJoint105.skinCoordIndex = [0]
HAnimJoint105.skinCoordWeight = [0]
HAnimJoint106 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_4")
HAnimJoint106.name = "r_metacarpophalangeal_4"
HAnimJoint106.center = [-0.1951,0.7845,-0.0732]
HAnimJoint106.skinCoordIndex = [0]
HAnimJoint106.skinCoordWeight = [0]
HAnimJoint107 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint107.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint107.center = [-0.192,0.7318,-0.0716]
HAnimJoint107.skinCoordIndex = [0]
HAnimJoint107.skinCoordWeight = [0]
HAnimJoint108 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint108.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint108.center = [-0.1908,0.7077,-0.0706]
HAnimJoint108.skinCoordIndex = [0]
HAnimJoint108.skinCoordWeight = [0]

HAnimJoint107.children.append(HAnimJoint108)

HAnimJoint106.children.append(HAnimJoint107)

HAnimJoint105.children.append(HAnimJoint106)

HAnimJoint93.children.append(HAnimJoint105)
HAnimJoint109 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_5")
HAnimJoint109.name = "r_carpometacarpal_5"
HAnimJoint109.center = [-0.1926,0.8096,-0.0975]
HAnimJoint109.skinCoordIndex = [0]
HAnimJoint109.skinCoordWeight = [0]
HAnimJoint110 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_5")
HAnimJoint110.name = "r_metacarpophalangeal_5"
HAnimJoint110.center = [-0.1926,0.7896,-0.0975]
HAnimJoint110.skinCoordIndex = [0]
HAnimJoint110.skinCoordWeight = [0]
HAnimJoint111 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint111.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint111.center = [-0.1902,0.7483,-0.0963]
HAnimJoint111.skinCoordIndex = [0]
HAnimJoint111.skinCoordWeight = [0]
HAnimJoint112 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint112.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint112.center = [-0.1908,0.754,-0.096]
HAnimJoint112.skinCoordIndex = [0]
HAnimJoint112.skinCoordWeight = [0]

HAnimJoint111.children.append(HAnimJoint112)

HAnimJoint110.children.append(HAnimJoint111)

HAnimJoint109.children.append(HAnimJoint110)

HAnimJoint93.children.append(HAnimJoint109)

HAnimJoint92.children.append(HAnimJoint93)

HAnimJoint91.children.append(HAnimJoint92)

HAnimJoint90.children.append(HAnimJoint91)

HAnimJoint89.children.append(HAnimJoint90)

HAnimJoint61.children.append(HAnimJoint89)

HAnimJoint60.children.append(HAnimJoint61)

HAnimJoint59.children.append(HAnimJoint60)

HAnimJoint58.children.append(HAnimJoint59)

HAnimJoint57.children.append(HAnimJoint58)

HAnimJoint56.children.append(HAnimJoint57)

HAnimJoint42.children.append(HAnimJoint56)

HAnimHumanoid41.skeleton.append(HAnimJoint42)
HAnimJoint113 = x3d.HAnimJoint(USE="hanim_humanoid_root")

HAnimHumanoid41.joints.append(HAnimJoint113)
HAnimJoint114 = x3d.HAnimJoint(USE="hanim_sacroiliac")

HAnimHumanoid41.joints.append(HAnimJoint114)
HAnimJoint115 = x3d.HAnimJoint(USE="hanim_l_hip")

HAnimHumanoid41.joints.append(HAnimJoint115)
HAnimJoint116 = x3d.HAnimJoint(USE="hanim_l_knee")

HAnimHumanoid41.joints.append(HAnimJoint116)
HAnimJoint117 = x3d.HAnimJoint(USE="hanim_l_talocrural")

HAnimHumanoid41.joints.append(HAnimJoint117)
HAnimJoint118 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_2")

HAnimHumanoid41.joints.append(HAnimJoint118)
HAnimJoint119 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint119)
HAnimJoint120 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint120)
HAnimJoint121 = x3d.HAnimJoint(USE="hanim_r_hip")

HAnimHumanoid41.joints.append(HAnimJoint121)
HAnimJoint122 = x3d.HAnimJoint(USE="hanim_r_knee")

HAnimHumanoid41.joints.append(HAnimJoint122)
HAnimJoint123 = x3d.HAnimJoint(USE="hanim_r_talocrural")

HAnimHumanoid41.joints.append(HAnimJoint123)
HAnimJoint124 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_2")

HAnimHumanoid41.joints.append(HAnimJoint124)
HAnimJoint125 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint125)
HAnimJoint126 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint126)
HAnimJoint127 = x3d.HAnimJoint(USE="hanim_vl5")

HAnimHumanoid41.joints.append(HAnimJoint127)
HAnimJoint128 = x3d.HAnimJoint(USE="hanim_vl3")

HAnimHumanoid41.joints.append(HAnimJoint128)
HAnimJoint129 = x3d.HAnimJoint(USE="hanim_vl1")

HAnimHumanoid41.joints.append(HAnimJoint129)
HAnimJoint130 = x3d.HAnimJoint(USE="hanim_vt10")

HAnimHumanoid41.joints.append(HAnimJoint130)
HAnimJoint131 = x3d.HAnimJoint(USE="hanim_vt6")

HAnimHumanoid41.joints.append(HAnimJoint131)
HAnimJoint132 = x3d.HAnimJoint(USE="hanim_vt1")

HAnimHumanoid41.joints.append(HAnimJoint132)
HAnimJoint133 = x3d.HAnimJoint(USE="hanim_vc4")

HAnimHumanoid41.joints.append(HAnimJoint133)
HAnimJoint134 = x3d.HAnimJoint(USE="hanim_vc2")

HAnimHumanoid41.joints.append(HAnimJoint134)
HAnimJoint135 = x3d.HAnimJoint(USE="hanim_skullbase")

HAnimHumanoid41.joints.append(HAnimJoint135)
HAnimJoint136 = x3d.HAnimJoint(USE="hanim_l_sternoclavicular")

HAnimHumanoid41.joints.append(HAnimJoint136)
HAnimJoint137 = x3d.HAnimJoint(USE="hanim_l_acromioclavicular")

HAnimHumanoid41.joints.append(HAnimJoint137)
HAnimJoint138 = x3d.HAnimJoint(USE="hanim_l_shoulder")

HAnimHumanoid41.joints.append(HAnimJoint138)
HAnimJoint139 = x3d.HAnimJoint(USE="hanim_l_elbow")

HAnimHumanoid41.joints.append(HAnimJoint139)
HAnimJoint140 = x3d.HAnimJoint(USE="hanim_l_radiocarpal")

HAnimHumanoid41.joints.append(HAnimJoint140)
HAnimJoint141 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_1")

HAnimHumanoid41.joints.append(HAnimJoint141)
HAnimJoint142 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint142)
HAnimJoint143 = x3d.HAnimJoint(USE="hanim_l_carpal_interphalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint143)
HAnimJoint144 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_2")

HAnimHumanoid41.joints.append(HAnimJoint144)
HAnimJoint145 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint145)
HAnimJoint146 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint146)
HAnimJoint147 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint147)
HAnimJoint148 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_3")

HAnimHumanoid41.joints.append(HAnimJoint148)
HAnimJoint149 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint149)
HAnimJoint150 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint150)
HAnimJoint151 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint151)
HAnimJoint152 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_4")

HAnimHumanoid41.joints.append(HAnimJoint152)
HAnimJoint153 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint153)
HAnimJoint154 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint154)
HAnimJoint155 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint155)
HAnimJoint156 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_5")

HAnimHumanoid41.joints.append(HAnimJoint156)
HAnimJoint157 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint157)
HAnimJoint158 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint158)
HAnimJoint159 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint159)
HAnimJoint160 = x3d.HAnimJoint(USE="hanim_r_sternoclavicular")

HAnimHumanoid41.joints.append(HAnimJoint160)
HAnimJoint161 = x3d.HAnimJoint(USE="hanim_r_acromioclavicular")

HAnimHumanoid41.joints.append(HAnimJoint161)
HAnimJoint162 = x3d.HAnimJoint(USE="hanim_r_shoulder")

HAnimHumanoid41.joints.append(HAnimJoint162)
HAnimJoint163 = x3d.HAnimJoint(USE="hanim_r_elbow")

HAnimHumanoid41.joints.append(HAnimJoint163)
HAnimJoint164 = x3d.HAnimJoint(USE="hanim_r_radiocarpal")

HAnimHumanoid41.joints.append(HAnimJoint164)
HAnimJoint165 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_1")

HAnimHumanoid41.joints.append(HAnimJoint165)
HAnimJoint166 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint166)
HAnimJoint167 = x3d.HAnimJoint(USE="hanim_r_carpal_interphalangeal_1")

HAnimHumanoid41.joints.append(HAnimJoint167)
HAnimJoint168 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_2")

HAnimHumanoid41.joints.append(HAnimJoint168)
HAnimJoint169 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint169)
HAnimJoint170 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint170)
HAnimJoint171 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid41.joints.append(HAnimJoint171)
HAnimJoint172 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_3")

HAnimHumanoid41.joints.append(HAnimJoint172)
HAnimJoint173 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint173)
HAnimJoint174 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint174)
HAnimJoint175 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid41.joints.append(HAnimJoint175)
HAnimJoint176 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_4")

HAnimHumanoid41.joints.append(HAnimJoint176)
HAnimJoint177 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint177)
HAnimJoint178 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint178)
HAnimJoint179 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid41.joints.append(HAnimJoint179)
HAnimJoint180 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_5")

HAnimHumanoid41.joints.append(HAnimJoint180)
HAnimJoint181 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint181)
HAnimJoint182 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint182)
HAnimJoint183 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid41.joints.append(HAnimJoint183)
Coordinate184 = x3d.Coordinate(DEF="TheSkinCoord")
Coordinate184.point = [(0, 1.77, 0),(0, 1.665, 0.09),(-0.033, 1.62, 0.087),(0.033, 1.62, 0.087),(0, 1.55, 0.097),(-0.077, 1.64, -0.01),(-0.0527, 1.58, 0.015),(0.077, 1.64, -0.01),(0.0527, 1.58, 0.015),(0, 1.625, -0.0925),(-0.03, 1.46, 0.035),(0, 1.44, 0.03),(0.03, 1.46, 0.035),(-0.1135, 1.318, 0.095),(0.1135, 1.318, 0.095),(0, 1.25, 0.113),(-0.087, 1.19, 0.09),(-0.0935, 1.03, 0.075),(0.087, 1.19, 0.09),(0.0935, 1.03, 0.075),(-0.1425, 1.065, 0.0033),(-0.15, 0.9, -0.01),(0.1425, 1.065, 0.0033),(0.15, 0.9, -0.01),(0, 1.53, -0.084),(0.0049, 1.1908, -0.1113),(-0.0773, 1.019, -0.12),(0.0773, 1.019, -0.12),(0.005, 1.0915, -0.1091),(-0.178, 1.4825, -0.0625),(-0.17, 1.38, 0.007),(-0.1884, 0.8676, -0.036),(-0.16, 1.38, -0.127),(-0.2, 1.1388, -0.08),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.23, 1.133, -0.055),(-0.1977, 0.8169, -0.0177),(-0.1941, 0.6772, -0.0423),(-0.2117, 0.8562, -0.0584),(-0.1929, 0.789, -0.1064),(0.175, 1.4825, -0.06),(0.17, 1.38, 0.007),(0.1901, 0.8645, -0.0415),(0.16, 1.38, -0.125),(0.2, 1.1388, -0.08),(0.165, 1.1388, -0.04),(0.244, 1.1388, -0.04),(0.23, 1.133, -0.055),(0.2009, 0.8139, -0.0237),(0.2056, 0.6743, -0.0482),(0.2142, 0.8529, -0.0648),(0.1929, 0.786, -0.1122),(-0.1, 0.4913, -0.03),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.165, 0.01, 0.12),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.09, 0.056, 0.0125),(-0.115, 0.02, 0.122),(-0.115, 0.04, -0.055),(-0.11, 0.011, 0.19),(0.0993, 0.4881, -0.0309),(0.17, 0.466, 0),(0.05, 0.4867, 0),(0.165, 0.01, 0.12),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.09, 0.056, 0.0125),(0.115, 0.02, 0.122),(0.115, 0.04, -0.055),(0.11, 0.011, 0.19),(0, 0.875, 0),(-0.0646, 1.5149, -0.038),(0.0646, 1.5149, -0.038),(0, 1.07225, 0.09),(-0.11, 1.427, -0.1375),(-0.235, 1.42, -0.0625),(0.11, 1.427, -0.1375),(0.235, 1.42, -0.0625),(0, 1.41, -0.145),(0, 0.925, 0.08),(-0.087, 1.19, -0.09),(0.087, 1.19, -0.09),(0.172, 1.32, -0.03),(-0.172, 1.32, -0.03),(0.15, 1.23, -0.015),(-0.15, 1.23, -0.015),(0.079, 0.92, -0.14),(0.1, 0.9, 0.077),(-0.079, 0.92, -0.14),(-0.1, 0.9, 0.075),(0, 0.87, 0),(0.171, 0.65, 0),(0.02, 0.65, 0),(0.1, 0.65, -0.08),(0.1, 0.65, 0.07),(-0.171, 0.65, 0),(-0.02, 0.65, 0),(-0.1, 0.65, -0.08),(-0.1, 0.65, 0.07),(0.25, 1.27, -0.04),(0.17, 1.27, -0.04),(0.2, 1.27, -0.09),(0.2, 1.27, 0.02),(0.244, 1.1388, -0.04),(0.165, 1.1388, -0.04),(0.2, 1.1388, -0.08),(0.2, 1.1388, -0.013),(0.225, 1, -0.01),(0.225, 1, -0.07),(0.185, 1, -0.01),(0.185, 1, -0.07),(0.2, 1.1388, -0.04),(0.225, 0.92, -0.04),(0.175, 0.92, -0.04),(0.2, 0.92, -0.065),(0.2, 0.92, -0.015),(0.225, 0.89, -0.04),(0.175, 0.89, -0.04),(0.2, 0.89, -0.065),(0.2, 0.89, -0.015),(0.218, 0.86, -0.04),(0.184, 0.86, -0.04),(0.2, 0.87, -0.07),(0.2, 0.87, 0),(0.21, 0.85, 0),(0.1854, 0.85, 0),(0.212, 0.84, -0.015),(0.183, 0.84, -0.015),(0.213, 0.835, -0.04),(0.19, 0.835, -0.04),(0.211, 0.835, -0.065),(0.192, 0.835, -0.065),(0.208, 0.84, -0.085),(0.19, 0.84, -0.085),(0.2, 0.84, -0.095),(0.215, 0.82, 0),(0.193, 0.815, 0.005),(0.198, 0.8, 0.012),(0.21, 0.82, 0.03),(0.19, 0.82, 0.03),(0.2, 0.835, 0.039),(0.212, 0.8, 0.05),(0.188, 0.8, 0.05),(0.2, 0.807, 0.057),(0.2, 0.793, 0.035),(0.2, 0.774, 0.076),(0.212, 0.78, 0.07),(0.188, 0.78, 0.07),(0.2, 0.785, 0.075),(0.2, 0.77, 0.062),(0.215, 0.793, -0.015),(0.187, 0.793, -0.015),(0.2, 0.793, -0.005),(0.215, 0.788, -0.04),(0.187, 0.788, -0.04),(0.215, 0.793, -0.065),(0.187, 0.793, -0.065),(0.21, 0.79, -0.085),(0.19, 0.79, -0.085),(0.2, 0.79, -0.095),(0.19, 0.77, -0.0275),(0.19, 0.77, -0.0525),(0.19, 0.78, -0.0775),(0.212, 0.745, -0.015),(0.188, 0.745, -0.02),(0.2, 0.745, -0.0255),(0.2, 0.745, -0.0045),(0.211, 0.72, -0.015),(0.189, 0.72, -0.015),(0.2, 0.72, -0.0252),(0.2, 0.72, -0.0048),(0.21, 0.695, -0.015),(0.19, 0.695, -0.015),(0.2, 0.695, -0.025),(0.2, 0.695, -0.005),(0.2, 0.685, -0.015),(0.215, 0.74, -0.04),(0.185, 0.74, -0.04),(0.2, 0.74, -0.055),(0.2, 0.74, -0.025),(0.21, 0.7142, -0.04),(0.19, 0.7142, -0.04),(0.2, 0.7142, -0.053),(0.2, 0.7142, -0.027),(0.21, 0.68, -0.04),(0.19, 0.68, -0.04),(0.2, 0.68, -0.05),(0.2, 0.68, -0.03),(0.2, 0.67, -0.04),(0.212, 0.74, -0.065),(0.188, 0.74, -0.065),(0.2, 0.74, -0.0756),(0.2, 0.74, -0.0542),(0.21, 0.7177, -0.065),(0.19, 0.7177, -0.065),(0.2, 0.7177, -0.0751),(0.2, 0.7177, -0.0549),(0.21, 0.695, -0.065),(0.19, 0.695, -0.065),(0.2, 0.695, -0.075),(0.2, 0.695, -0.055),(0.2, 0.685, -0.065),(0.211, 0.755, -0.085),(0.189, 0.755, -0.085),(0.2, 0.755, -0.0952),(0.2, 0.755, -0.0748),(0.21, 0.735, -0.085),(0.19, 0.735, -0.085),(0.2, 0.735, -0.0951),(0.2, 0.735, -0.0749),(0.21, 0.72, -0.085),(0.19, 0.72, -0.085),(0.2, 0.72, -0.095),(0.2, 0.72, -0.075),(0.2, 0.71, -0.085),(-0.23, 1.23, -0.04),(-0.16, 1.23, -0.04),(-0.2, 1.235, -0.105),(-0.2, 1.235, 0.02),(-0.244, 1.1388, -0.04),(-0.165, 1.1388, -0.04),(-0.2, 1.1388, -0.08),(-0.2, 1.1388, 0.013),(-0.225, 1, -0.01),(-0.225, 1, -0.07),(-0.185, 1, -0.01),(-0.185, 1, -0.07),(-0.2, 1.1388, -0.04),(-0.225, 0.92, -0.04),(-0.175, 0.92, -0.04),(-0.2, 0.92, -0.065),(-0.2, 0.92, -0.015),(-0.225, 0.89, -0.04),(-0.175, 0.89, -0.04),(-0.2, 0.89, -0.065),(-0.2, 0.89, -0.015),(-0.218, 0.86, -0.04),(-0.184, 0.86, -0.04),(-0.2, 0.87, -0.07),(-0.2, 0.87, 0),(-0.21, 0.85, 0),(-0.1854, 0.85, 0),(-0.212, 0.84, -0.015),(-0.183, 0.84, -0.015),(-0.213, 0.835, -0.04),(-0.19, 0.835, -0.04),(-0.211, 0.835, -0.065),(-0.192, 0.835, -0.065),(-0.208, 0.84, -0.085),(-0.19, 0.84, -0.085),(-0.2, 0.84, -0.095),(-0.215, 0.82, 0),(-0.193, 0.815, 0.005),(-0.198, 0.8, 0.012),(-0.21, 0.82, 0.03),(-0.19, 0.82, 0.03),(-0.2, 0.835, 0.039),(-0.212, 0.8, 0.05),(-0.188, 0.8, 0.05),(-0.2, 0.807, 0.057),(-0.2, 0.793, 0.035),(-0.2, 0.774, 0.076),(-0.212, 0.78, 0.07),(-0.188, 0.78, 0.07),(-0.2, 0.785, 0.075),(-0.2, 0.77, 0.062),(-0.215, 0.793, -0.015),(-0.187, 0.793, -0.015),(-0.2, 0.793, -0.005),(-0.215, 0.788, -0.04),(-0.187, 0.788, -0.04),(-0.215, 0.793, -0.065),(-0.187, 0.793, -0.065),(-0.21, 0.79, -0.085),(-0.19, 0.79, -0.085),(-0.2, 0.79, -0.095),(-0.19, 0.77, -0.0275),(-0.19, 0.77, -0.0525),(-0.19, 0.78, -0.0775),(-0.212, 0.745, -0.015),(-0.188, 0.745, -0.02),(-0.2, 0.745, -0.0255),(-0.2, 0.745, -0.0045),(-0.211, 0.72, -0.015),(-0.189, 0.72, -0.015),(-0.2, 0.72, -0.0252),(-0.2, 0.72, -0.0048),(-0.21, 0.695, -0.015),(-0.19, 0.695, -0.015),(-0.2, 0.695, -0.025),(-0.2, 0.695, -0.005),(-0.2, 0.685, -0.015),(-0.215, 0.74, -0.04),(-0.185, 0.74, -0.04),(-0.2, 0.74, -0.055),(-0.2, 0.74, -0.025),(-0.21, 0.7142, -0.04),(-0.19, 0.7142, -0.04),(-0.2, 0.7142, -0.053),(-0.2, 0.7142, -0.027),(-0.21, 0.68, -0.04),(-0.19, 0.68, -0.04),(-0.2, 0.68, -0.05),(-0.2, 0.68, -0.03),(-0.2, 0.67, -0.04),(-0.212, 0.74, -0.065),(-0.188, 0.74, -0.065),(-0.2, 0.74, -0.0756),(-0.2, 0.74, -0.0542),(-0.21, 0.7177, -0.065),(-0.19, 0.7177, -0.065),(-0.2, 0.7177, -0.0751),(-0.2, 0.7177, -0.0549),(-0.21, 0.695, -0.065),(-0.19, 0.695, -0.065),(-0.2, 0.695, -0.075),(-0.2, 0.695, -0.055),(-0.2, 0.685, -0.065),(-0.211, 0.755, -0.085),(-0.189, 0.755, -0.085),(-0.2, 0.755, -0.0952),(-0.2, 0.755, -0.0748),(-0.21, 0.735, -0.085),(-0.19, 0.735, -0.085),(-0.2, 0.735, -0.0951),(-0.2, 0.735, -0.0749),(-0.21, 0.72, -0.085),(-0.19, 0.72, -0.085),(-0.2, 0.72, -0.095),(-0.2, 0.72, -0.075),(-0.2, 0.71, -0.085),(0.115, 0.466, 0.06),(0.115, 0.466, -0.055),(0.15, 0.466, 0),(0.05, 0.466, 0),(0.17, 0.3, 0),(0.06, 0.3, 0),(0.1, 0.3, -0.05),(0.1, 0.3, 0.05),(0.15, 0.07, 0),(0.085, 0.086, 0.0125),(0.115, 0.069, -0.045),(0.117, 0.0975, 0.0615),(0.1375, 0.006, -0.03),(0.095, 0.006, -0.03),(0.115, 0.015, -0.045),(0.115, 0.06, 0.1),(0.115, 0, 0.07),(0.165, 0, 0.07),(0.095, 0, 0.07),(0.115, 0.04, 0.13),(0.125, 0, 0.12),(0.165, 0, 0.12),(0.087, 0, 0.122),(0.09, 0.012, 0.188),(0.11, 0.011, 0.19),(0.128, 0.011, 0.185),(0.142, 0.011, 0.178),(0.154, 0.01, 0.168),(-0.115, 0.466, 0.06),(-0.115, 0.466, -0.055),(-0.17, 0.466, 0),(-0.05, 0.466, 0),(-0.17, 0.3, 0),(-0.06, 0.3, 0),(-0.1, 0.3, -0.05),(-0.1, 0.3, 0.05),(-0.15, 0.07, 0),(-0.085, 0.086, 0.0125),(-0.115, 0.069, -0.045),(-0.117, 0.0975, 0.0615),(-0.1375, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.095, 0.006, -0.03),(-0.115, 0.06, 0.1),(-0.115, 0, 0.07),(-0.165, 0, 0.07),(-0.095, 0, 0.07),(-0.115, 0.04, 0.13),(-0.125, 0, 0.12),(-0.165, 0, 0.12),(-0.087, 0, 0.122),(-0.09, 0.012, 0.188),(-0.11, 0.011, 0.19),(-0.128, 0.011, 0.185),(-0.142, 0.011, 0.178),(-0.154, 0.01, 0.168)]

HAnimHumanoid41.skinCoord = Coordinate184
Shape185 = x3d.Shape(DEF="SkinShape")
Appearance186 = x3d.Appearance(DEF="SkinAppearance")
Material187 = x3d.Material(DEF="SkinMaterial")
Material187.ambientIntensity = 0.6
Material187.diffuseColor = [1,1,1]
Material187.shininess = 0.6
Material187.transparency = 0.2

Appearance186.material = Material187
ImageTexture188 = x3d.ImageTexture(DEF="zBlueSpiralBkg2")
ImageTexture188.description = "Blue Spiral Pattern"
ImageTexture188.url = ["../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]

Appearance186.texture = ImageTexture188

Shape185.appearance = Appearance186
IndexedFaceSet189 = x3d.IndexedFaceSet()
IndexedFaceSet189.creaseAngle = 3.1
IndexedFaceSet189.coordIndex = [0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]
Color190 = x3d.Color()
Color190.color = [(1, 0, 0),(0, 1, 1),(0, 1, 0),(1, 1, 0),(1, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(0, 1, 1),(1, 1, 0),(1, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(1, 0, 0),(1, 0, 0),(1, 1, 0),(1, 1, 0),(1, 1, 1),(1, 0, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 0, 1),(0, 0, 1),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 1, 0),(1, 0, 1),(1, 0, 1),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(1, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 1, 0),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(0, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 1),(1, 0, 0),(1, 0, 1),(1, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(1, 0, 0),(1, 0, 1),(0, 0, 1),(0, 1, 0),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 0),(0, 0, 1),(0, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 0, 1),(1, 1, 0),(0, 1, 0),(0, 0, 1),(1, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 0, 1),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(0, 1, 0),(1, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(0, 1, 0),(1, 0, 1),(1, 1, 1)]

IndexedFaceSet189.color = Color190
Coordinate191 = x3d.Coordinate(USE="TheSkinCoord")

IndexedFaceSet189.coord = Coordinate191

Shape185.geometry = IndexedFaceSet189

HAnimHumanoid41.skin.append(Shape185)

Scene9.children.append(HAnimHumanoid41)

X3D0.Scene = Scene9
f = open("../data/Humanoid2NoSegSite.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Humanoid2NoSegSite.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/Humanoid2NoSegSite.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
