print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "HAnim"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "JohnJoint.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "identifier"
meta4.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "description"
meta5.content = "An attempt at a standard LOA-4 skeleton"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "generator"
meta6.content = "h6.pl"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "creator"
meta7.content = "John Carlson"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "created"
meta8.content = "12 January 2023"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "license"
meta9.content = "../license.html"

head1.children.append(meta9)

X3D0.head = head1
Scene10 = x3d.Scene()
Transform11 = x3d.Transform()
Transform11.children.append(x3d.Comment("""DEF for markerfor XYZ axes"""))
Shape12 = x3d.Shape(DEF="AxisLinesShape")
Shape12.children.append(x3d.Comment("""RGB lines showing XYZ axes"""))
IndexedLineSet13 = x3d.IndexedLineSet()
IndexedLineSet13.colorIndex = [0,1,2]
IndexedLineSet13.colorPerVertex = False
IndexedLineSet13.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Coordinate14 = x3d.Coordinate()
Coordinate14.point = [(0, 0, 0),(0.1, 0, 0),(0, 0.1, 0),(0, 0, 0.1)]

IndexedLineSet13.coord = Coordinate14
Color15 = x3d.Color()
Color15.color = [(1, 0, 0),(0, 0.6, 0),(0, 0, 1)]

IndexedLineSet13.color = Color15

Shape12.geometry = IndexedLineSet13

Transform11.children.append(Shape12)

Scene10.children.append(Transform11)
Group16 = x3d.Group()
Group16.children.append(x3d.Comment("""DEFS for markers of skeleton joints, segments, and sites"""))
Transform17 = x3d.Transform()
Transform17.children.append(x3d.Comment("""<Transform translation='0 2 0'>"""))
Transform17.children.append(x3d.Comment("""<Shape DEF='HAnimRootShape'>"""))
Transform17.children.append(x3d.Comment("""<Sphere radius='0.02' />"""))
Transform17.children.append(x3d.Comment("""<Appearance>"""))
Transform17.children.append(x3d.Comment("""<Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/>"""))
Transform17.children.append(x3d.Comment("""</Appearance>"""))
Transform17.children.append(x3d.Comment("""</Shape>"""))
Transform17.children.append(x3d.Comment("""</Transform>"""))
Transform18 = x3d.Transform()
Transform18.translation = [0,2.1,0]
Shape19 = x3d.Shape(DEF="HAnimJointShape")
Sphere20 = x3d.Sphere()
Sphere20.radius = 0.02

Shape19.geometry = Sphere20
Appearance21 = x3d.Appearance()
Material22 = x3d.Material(DEF="HAnimJointMaterial")
Material22.diffuseColor = [0,0,0.8]
Material22.transparency = 0.3

Appearance21.material = Material22

Shape19.appearance = Appearance21

Transform18.children.append(Shape19)

Transform17.children.append(Transform18)
Transform23 = x3d.Transform()
Transform23.translation = [0,2.05,0]
Shape24 = x3d.Shape(DEF="HAnimSegmentLine")
LineSet25 = x3d.LineSet()
LineSet25.vertexCount = [2]
ColorRGBA26 = x3d.ColorRGBA(DEF="HAnimSegmentLineColorRGBA")
ColorRGBA26.color = [(1, 1, 0, 1),(1, 1, 0, 0.1)]

LineSet25.color = ColorRGBA26
Coordinate27 = x3d.Coordinate()
Coordinate27.point = [(-0.05, 0, 0),(0.05, 0, 0)]

LineSet25.coord = Coordinate27

Shape24.geometry = LineSet25

Transform23.children.append(Shape24)

Transform17.children.append(Transform23)
Transform17.children.append(x3d.Comment("""<Transform translation='0 2.1 0'>"""))
Transform17.children.append(x3d.Comment("""<Shape DEF='HAnimSiteShape'>"""))
Transform17.children.append(x3d.Comment("""<IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'>"""))
Transform17.children.append(x3d.Comment("""<ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/>"""))
Transform17.children.append(x3d.Comment("""<Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/>"""))
Transform17.children.append(x3d.Comment("""</IndexedFaceSet>"""))
Transform17.children.append(x3d.Comment("""<Appearance>"""))
Transform17.children.append(x3d.Comment("""<Material diffuseColor='1 1 0' transparency='0.3'/>"""))
Transform17.children.append(x3d.Comment("""</Appearance>"""))
Transform17.children.append(x3d.Comment("""</Shape>"""))
Transform17.children.append(x3d.Comment("""</Transform>"""))

Group16.children.append(Transform17)

Scene10.children.append(Group16)
NavigationInfo28 = x3d.NavigationInfo()
NavigationInfo28.speed = 1.5

Scene10.children.append(NavigationInfo28)
Viewpoint29 = x3d.Viewpoint()
Viewpoint29.description = "default"

Scene10.children.append(Viewpoint29)
HAnimHumanoid30 = x3d.HAnimHumanoid(DEF="hanim_HAnim")
HAnimHumanoid30.name = "HAnim"
HAnimHumanoid30.info = ["humanoidVersion=2.0"]
HAnimHumanoid30.version = "2.0"
HAnimJoint31 = x3d.HAnimJoint(DEF="hanim_humanoid_root")
HAnimJoint31.name = "humanoid_root"
HAnimJoint31.center = [0,0.824,0.0277]
HAnimJoint32 = x3d.HAnimJoint(DEF="hanim_sacroiliac")
HAnimJoint32.name = "sacroiliac"
HAnimJoint32.center = [0,0.9149,0.0016]
HAnimJoint33 = x3d.HAnimJoint(DEF="hanim_l_hip")
HAnimJoint33.name = "l_hip"
HAnimJoint33.center = [0.0961,0.9124,-0.0001]
HAnimJoint34 = x3d.HAnimJoint(DEF="hanim_l_knee")
HAnimJoint34.name = "l_knee"
HAnimJoint34.center = [0.104,0.4867,0.0308]
HAnimJoint35 = x3d.HAnimJoint(DEF="hanim_l_talocrural")
HAnimJoint35.name = "l_talocrural"
HAnimJoint35.center = [0.1101,0.0656,-0.0736]
HAnimJoint36 = x3d.HAnimJoint(DEF="hanim_l_talocalcaneonavicular")
HAnimJoint36.name = "l_talocalcaneonavicular"
HAnimJoint36.center = [0,1,0]
HAnimJoint37 = x3d.HAnimJoint(DEF="hanim_l_cuneonavicular_1")
HAnimJoint37.name = "l_cuneonavicular_1"
HAnimJoint37.center = [0,1,0]
HAnimJoint38 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_1")
HAnimJoint38.name = "l_tarsometatarsal_1"
HAnimJoint38.center = [0,1,0]
HAnimJoint39 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_1")
HAnimJoint39.name = "l_metatarsophalangeal_1"
HAnimJoint39.center = [0,1,0]
HAnimJoint40 = x3d.HAnimJoint(DEF="hanim_l_tarsal_interphalangeal_1")
HAnimJoint40.name = "l_tarsal_interphalangeal_1"
HAnimJoint40.center = [0,1,0]

HAnimJoint39.children.append(HAnimJoint40)

HAnimJoint38.children.append(HAnimJoint39)

HAnimJoint37.children.append(HAnimJoint38)

HAnimJoint36.children.append(HAnimJoint37)
HAnimJoint41 = x3d.HAnimJoint(DEF="hanim_l_cuneonavicular_2")
HAnimJoint41.name = "l_cuneonavicular_2"
HAnimJoint41.center = [0,1,0]
HAnimJoint42 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_2")
HAnimJoint42.name = "l_tarsometatarsal_2"
HAnimJoint42.center = [0,1,0]
HAnimJoint43 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_2")
HAnimJoint43.name = "l_metatarsophalangeal_2"
HAnimJoint43.center = [0,1,0]
HAnimJoint44 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_2")
HAnimJoint44.name = "l_tarsal_proximal_interphalangeal_2"
HAnimJoint44.center = [0,1,0]
HAnimJoint45 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint45.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint45.center = [0,1,0]

HAnimJoint44.children.append(HAnimJoint45)

HAnimJoint43.children.append(HAnimJoint44)

HAnimJoint42.children.append(HAnimJoint43)

HAnimJoint41.children.append(HAnimJoint42)

HAnimJoint36.children.append(HAnimJoint41)
HAnimJoint46 = x3d.HAnimJoint(DEF="hanim_l_cuneonavicular_3")
HAnimJoint46.name = "l_cuneonavicular_3"
HAnimJoint46.center = [0,1,0]
HAnimJoint47 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_3")
HAnimJoint47.name = "l_tarsometatarsal_3"
HAnimJoint47.center = [0,1,0]
HAnimJoint48 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_3")
HAnimJoint48.name = "l_metatarsophalangeal_3"
HAnimJoint48.center = [0,1,0]
HAnimJoint49 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_3")
HAnimJoint49.name = "l_tarsal_proximal_interphalangeal_3"
HAnimJoint49.center = [0,1,0]
HAnimJoint50 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_3")
HAnimJoint50.name = "l_tarsal_distal_interphalangeal_3"
HAnimJoint50.center = [0,1,0]

HAnimJoint49.children.append(HAnimJoint50)

HAnimJoint48.children.append(HAnimJoint49)

HAnimJoint47.children.append(HAnimJoint48)

HAnimJoint46.children.append(HAnimJoint47)

HAnimJoint36.children.append(HAnimJoint46)

HAnimJoint35.children.append(HAnimJoint36)
HAnimJoint51 = x3d.HAnimJoint(DEF="hanim_l_calcaneocuboid")
HAnimJoint51.name = "l_calcaneocuboid"
HAnimJoint51.center = [0,1,0]
HAnimJoint52 = x3d.HAnimJoint(DEF="hanim_l_transversetarsal")
HAnimJoint52.name = "l_transversetarsal"
HAnimJoint52.center = [0,1,0]
HAnimJoint53 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_4")
HAnimJoint53.name = "l_tarsometatarsal_4"
HAnimJoint53.center = [0,1,0]
HAnimJoint54 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_4")
HAnimJoint54.name = "l_metatarsophalangeal_4"
HAnimJoint54.center = [0,1,0]
HAnimJoint55 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_4")
HAnimJoint55.name = "l_tarsal_proximal_interphalangeal_4"
HAnimJoint55.center = [0,1,0]
HAnimJoint56 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_4")
HAnimJoint56.name = "l_tarsal_distal_interphalangeal_4"
HAnimJoint56.center = [0,1,0]

HAnimJoint55.children.append(HAnimJoint56)

HAnimJoint54.children.append(HAnimJoint55)

HAnimJoint53.children.append(HAnimJoint54)

HAnimJoint52.children.append(HAnimJoint53)
HAnimJoint57 = x3d.HAnimJoint(DEF="hanim_l_tarsometatarsal_5")
HAnimJoint57.name = "l_tarsometatarsal_5"
HAnimJoint57.center = [0,1,0]
HAnimJoint58 = x3d.HAnimJoint(DEF="hanim_l_metatarsophalangeal_5")
HAnimJoint58.name = "l_metatarsophalangeal_5"
HAnimJoint58.center = [0,1,0]
HAnimJoint59 = x3d.HAnimJoint(DEF="hanim_l_tarsal_proximal_interphalangeal_5")
HAnimJoint59.name = "l_tarsal_proximal_interphalangeal_5"
HAnimJoint59.center = [0,1,0]
HAnimJoint60 = x3d.HAnimJoint(DEF="hanim_l_tarsal_distal_interphalangeal_5")
HAnimJoint60.name = "l_tarsal_distal_interphalangeal_5"
HAnimJoint60.center = [0,1,0]

HAnimJoint59.children.append(HAnimJoint60)

HAnimJoint58.children.append(HAnimJoint59)

HAnimJoint57.children.append(HAnimJoint58)

HAnimJoint52.children.append(HAnimJoint57)

HAnimJoint51.children.append(HAnimJoint52)

HAnimJoint35.children.append(HAnimJoint51)

HAnimJoint34.children.append(HAnimJoint35)

HAnimJoint33.children.append(HAnimJoint34)

HAnimJoint32.children.append(HAnimJoint33)
HAnimJoint61 = x3d.HAnimJoint(DEF="hanim_r_hip")
HAnimJoint61.name = "r_hip"
HAnimJoint61.center = [-0.095,0.9171,0.0029]
HAnimJoint62 = x3d.HAnimJoint(DEF="hanim_r_knee")
HAnimJoint62.name = "r_knee"
HAnimJoint62.center = [-0.0867,0.4913,0.0318]
HAnimJoint63 = x3d.HAnimJoint(DEF="hanim_r_talocrural")
HAnimJoint63.name = "r_talocrural"
HAnimJoint63.center = [-0.0801,0.0712,-0.0766]
HAnimJoint64 = x3d.HAnimJoint(DEF="hanim_r_talocalcaneonavicular")
HAnimJoint64.name = "r_talocalcaneonavicular"
HAnimJoint64.center = [0,1,0]
HAnimJoint65 = x3d.HAnimJoint(DEF="hanim_r_cuneonavicular_1")
HAnimJoint65.name = "r_cuneonavicular_1"
HAnimJoint65.center = [0,1,0]
HAnimJoint66 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_1")
HAnimJoint66.name = "r_tarsometatarsal_1"
HAnimJoint66.center = [0,1,0]
HAnimJoint67 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_1")
HAnimJoint67.name = "r_metatarsophalangeal_1"
HAnimJoint67.center = [0,1,0]
HAnimJoint68 = x3d.HAnimJoint(DEF="hanim_r_tarsal_interphalangeal_1")
HAnimJoint68.name = "r_tarsal_interphalangeal_1"
HAnimJoint68.center = [0,1,0]

HAnimJoint67.children.append(HAnimJoint68)

HAnimJoint66.children.append(HAnimJoint67)

HAnimJoint65.children.append(HAnimJoint66)

HAnimJoint64.children.append(HAnimJoint65)
HAnimJoint69 = x3d.HAnimJoint(DEF="hanim_r_cuneonavicular_2")
HAnimJoint69.name = "r_cuneonavicular_2"
HAnimJoint69.center = [0,1,0]
HAnimJoint70 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_2")
HAnimJoint70.name = "r_tarsometatarsal_2"
HAnimJoint70.center = [0,1,0]
HAnimJoint71 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_2")
HAnimJoint71.name = "r_metatarsophalangeal_2"
HAnimJoint71.center = [0,1,0]
HAnimJoint72 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_2")
HAnimJoint72.name = "r_tarsal_proximal_interphalangeal_2"
HAnimJoint72.center = [0,1,0]
HAnimJoint73 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint73.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint73.center = [0,1,0]

HAnimJoint72.children.append(HAnimJoint73)

HAnimJoint71.children.append(HAnimJoint72)

HAnimJoint70.children.append(HAnimJoint71)

HAnimJoint69.children.append(HAnimJoint70)

HAnimJoint64.children.append(HAnimJoint69)
HAnimJoint74 = x3d.HAnimJoint(DEF="hanim_r_cuneonavicular_3")
HAnimJoint74.name = "r_cuneonavicular_3"
HAnimJoint74.center = [0,1,0]
HAnimJoint75 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_3")
HAnimJoint75.name = "r_tarsometatarsal_3"
HAnimJoint75.center = [0,1,0]
HAnimJoint76 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_3")
HAnimJoint76.name = "r_metatarsophalangeal_3"
HAnimJoint76.center = [0,1,0]
HAnimJoint77 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_3")
HAnimJoint77.name = "r_tarsal_proximal_interphalangeal_3"
HAnimJoint77.center = [0,1,0]
HAnimJoint78 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_3")
HAnimJoint78.name = "r_tarsal_distal_interphalangeal_3"
HAnimJoint78.center = [0,1,0]

HAnimJoint77.children.append(HAnimJoint78)

HAnimJoint76.children.append(HAnimJoint77)

HAnimJoint75.children.append(HAnimJoint76)

HAnimJoint74.children.append(HAnimJoint75)

HAnimJoint64.children.append(HAnimJoint74)

HAnimJoint63.children.append(HAnimJoint64)
HAnimJoint79 = x3d.HAnimJoint(DEF="hanim_r_calcaneocuboid")
HAnimJoint79.name = "r_calcaneocuboid"
HAnimJoint79.center = [0,1,0]
HAnimJoint80 = x3d.HAnimJoint(DEF="hanim_r_transversetarsal")
HAnimJoint80.name = "r_transversetarsal"
HAnimJoint80.center = [0,1,0]
HAnimJoint81 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_4")
HAnimJoint81.name = "r_tarsometatarsal_4"
HAnimJoint81.center = [0,1,0]
HAnimJoint82 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_4")
HAnimJoint82.name = "r_metatarsophalangeal_4"
HAnimJoint82.center = [0,1,0]
HAnimJoint83 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_4")
HAnimJoint83.name = "r_tarsal_proximal_interphalangeal_4"
HAnimJoint83.center = [0,1,0]
HAnimJoint84 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_4")
HAnimJoint84.name = "r_tarsal_distal_interphalangeal_4"
HAnimJoint84.center = [0,1,0]

HAnimJoint83.children.append(HAnimJoint84)

HAnimJoint82.children.append(HAnimJoint83)

HAnimJoint81.children.append(HAnimJoint82)

HAnimJoint80.children.append(HAnimJoint81)
HAnimJoint85 = x3d.HAnimJoint(DEF="hanim_r_tarsometatarsal_5")
HAnimJoint85.name = "r_tarsometatarsal_5"
HAnimJoint85.center = [0,1,0]
HAnimJoint86 = x3d.HAnimJoint(DEF="hanim_r_metatarsophalangeal_5")
HAnimJoint86.name = "r_metatarsophalangeal_5"
HAnimJoint86.center = [0,1,0]
HAnimJoint87 = x3d.HAnimJoint(DEF="hanim_r_tarsal_proximal_interphalangeal_5")
HAnimJoint87.name = "r_tarsal_proximal_interphalangeal_5"
HAnimJoint87.center = [0,1,0]
HAnimJoint88 = x3d.HAnimJoint(DEF="hanim_r_tarsal_distal_interphalangeal_5")
HAnimJoint88.name = "r_tarsal_distal_interphalangeal_5"
HAnimJoint88.center = [0,1,0]

HAnimJoint87.children.append(HAnimJoint88)

HAnimJoint86.children.append(HAnimJoint87)

HAnimJoint85.children.append(HAnimJoint86)

HAnimJoint80.children.append(HAnimJoint85)

HAnimJoint79.children.append(HAnimJoint80)

HAnimJoint63.children.append(HAnimJoint79)

HAnimJoint62.children.append(HAnimJoint63)

HAnimJoint61.children.append(HAnimJoint62)

HAnimJoint32.children.append(HAnimJoint61)

HAnimJoint31.children.append(HAnimJoint32)
HAnimJoint89 = x3d.HAnimJoint(DEF="hanim_vl5")
HAnimJoint89.name = "vl5"
HAnimJoint89.center = [0.0028,1.0568,-0.0776]
HAnimJoint90 = x3d.HAnimJoint(DEF="hanim_vl4")
HAnimJoint90.name = "vl4"
HAnimJoint90.center = [0.0035,1.0925,-0.0787]
HAnimJoint91 = x3d.HAnimJoint(DEF="hanim_vl3")
HAnimJoint91.name = "vl3"
HAnimJoint91.center = [0.0041,1.1276,-0.0796]
HAnimJoint92 = x3d.HAnimJoint(DEF="hanim_vl2")
HAnimJoint92.name = "vl2"
HAnimJoint92.center = [0.0045,1.1546,-0.08]
HAnimJoint93 = x3d.HAnimJoint(DEF="hanim_vl1")
HAnimJoint93.name = "vl1"
HAnimJoint93.center = [0.0048,1.1912,-0.0805]
HAnimJoint94 = x3d.HAnimJoint(DEF="hanim_vt12")
HAnimJoint94.name = "vt12"
HAnimJoint94.center = [0.0051,1.2278,-0.0808]
HAnimJoint95 = x3d.HAnimJoint(DEF="hanim_vt11")
HAnimJoint95.name = "vt11"
HAnimJoint95.center = [0.0053,1.2679,-0.081]
HAnimJoint96 = x3d.HAnimJoint(DEF="hanim_vt10")
HAnimJoint96.name = "vt10"
HAnimJoint96.center = [0.0056,1.2848,-0.0822]
HAnimJoint97 = x3d.HAnimJoint(DEF="hanim_vt9")
HAnimJoint97.name = "vt9"
HAnimJoint97.center = [0.0057,1.3126,-0.0838]
HAnimJoint98 = x3d.HAnimJoint(DEF="hanim_vt8")
HAnimJoint98.name = "vt8"
HAnimJoint98.center = [0.0057,1.3382,-0.0845]
HAnimJoint99 = x3d.HAnimJoint(DEF="hanim_vt7")
HAnimJoint99.name = "vt7"
HAnimJoint99.center = [0.0058,1.3625,-0.0833]
HAnimJoint100 = x3d.HAnimJoint(DEF="hanim_vt6")
HAnimJoint100.name = "vt6"
HAnimJoint100.center = [0.0059,1.3866,-0.08]
HAnimJoint101 = x3d.HAnimJoint(DEF="hanim_vt5")
HAnimJoint101.name = "vt5"
HAnimJoint101.center = [0.006,1.4102,-0.0745]
HAnimJoint102 = x3d.HAnimJoint(DEF="hanim_vt4")
HAnimJoint102.name = "vt4"
HAnimJoint102.center = [0.0061,1.432,-0.0675]
HAnimJoint103 = x3d.HAnimJoint(DEF="hanim_vt3")
HAnimJoint103.name = "vt3"
HAnimJoint103.center = [0.0062,1.4583,-0.057]
HAnimJoint104 = x3d.HAnimJoint(DEF="hanim_vt2")
HAnimJoint104.name = "vt2"
HAnimJoint104.center = [0.0063,1.4761,-0.0484]
HAnimJoint105 = x3d.HAnimJoint(DEF="hanim_vt1")
HAnimJoint105.name = "vt1"
HAnimJoint105.center = [0.0065,1.4951,-0.0387]
HAnimJoint106 = x3d.HAnimJoint(DEF="hanim_vc7")
HAnimJoint106.name = "vc7"
HAnimJoint106.center = [0.0066,1.5132,-0.0301]
HAnimJoint107 = x3d.HAnimJoint(DEF="hanim_vc6")
HAnimJoint107.name = "vc6"
HAnimJoint107.center = [0.0066,1.5357,-0.0143]
HAnimJoint108 = x3d.HAnimJoint(DEF="hanim_vc5")
HAnimJoint108.name = "vc5"
HAnimJoint108.center = [0.0066,1.552,-0.0082]
HAnimJoint109 = x3d.HAnimJoint(DEF="hanim_vc4")
HAnimJoint109.name = "vc4"
HAnimJoint109.center = [0.0066,1.5662,-0.0084]
HAnimJoint110 = x3d.HAnimJoint(DEF="hanim_vc3")
HAnimJoint110.name = "vc3"
HAnimJoint110.center = [0.0066,1.58,-0.0103]
HAnimJoint111 = x3d.HAnimJoint(DEF="hanim_vc2")
HAnimJoint111.name = "vc2"
HAnimJoint111.center = [0.0066,1.5928,-0.0103]
HAnimJoint112 = x3d.HAnimJoint(DEF="hanim_vc1")
HAnimJoint112.name = "vc1"
HAnimJoint112.center = [0.0066,1.6144,-0.0034]
HAnimJoint113 = x3d.HAnimJoint(DEF="hanim_skullbase")
HAnimJoint113.name = "skullbase"
HAnimJoint113.center = [0.0044,1.6209,0.0236]
HAnimJoint114 = x3d.HAnimJoint(DEF="hanim_l_eyelid_joint")
HAnimJoint114.name = "l_eyelid_joint"
HAnimJoint114.center = [0,1,0]

HAnimJoint113.children.append(HAnimJoint114)
HAnimJoint115 = x3d.HAnimJoint(DEF="hanim_r_eyelid_joint")
HAnimJoint115.name = "r_eyelid_joint"
HAnimJoint115.center = [0,1,0]

HAnimJoint113.children.append(HAnimJoint115)
HAnimJoint116 = x3d.HAnimJoint(DEF="hanim_l_eyeball_joint")
HAnimJoint116.name = "l_eyeball_joint"
HAnimJoint116.center = [0,1,0]

HAnimJoint113.children.append(HAnimJoint116)
HAnimJoint117 = x3d.HAnimJoint(DEF="hanim_r_eyeball_joint")
HAnimJoint117.name = "r_eyeball_joint"
HAnimJoint117.center = [0,1,0]

HAnimJoint113.children.append(HAnimJoint117)
HAnimJoint118 = x3d.HAnimJoint(DEF="hanim_l_eyebrow_joint")
HAnimJoint118.name = "l_eyebrow_joint"
HAnimJoint118.center = [0,1,0]

HAnimJoint113.children.append(HAnimJoint118)
HAnimJoint119 = x3d.HAnimJoint(DEF="hanim_r_eyebrow_joint")
HAnimJoint119.name = "r_eyebrow_joint"
HAnimJoint119.center = [0,1,0]

HAnimJoint113.children.append(HAnimJoint119)
HAnimJoint120 = x3d.HAnimJoint(DEF="hanim_temporomandibular")
HAnimJoint120.name = "temporomandibular"
HAnimJoint120.center = [0,1,0]

HAnimJoint113.children.append(HAnimJoint120)

HAnimJoint112.children.append(HAnimJoint113)

HAnimJoint111.children.append(HAnimJoint112)

HAnimJoint110.children.append(HAnimJoint111)

HAnimJoint109.children.append(HAnimJoint110)

HAnimJoint108.children.append(HAnimJoint109)

HAnimJoint107.children.append(HAnimJoint108)

HAnimJoint106.children.append(HAnimJoint107)

HAnimJoint105.children.append(HAnimJoint106)
HAnimJoint121 = x3d.HAnimJoint(DEF="hanim_l_sternoclavicular")
HAnimJoint121.name = "l_sternoclavicular"
HAnimJoint121.center = [0.082,1.4488,-0.0353]
HAnimJoint122 = x3d.HAnimJoint(DEF="hanim_l_acromioclavicular")
HAnimJoint122.name = "l_acromioclavicular"
HAnimJoint122.center = [0.0962,1.4269,-0.0424]
HAnimJoint123 = x3d.HAnimJoint(DEF="hanim_l_shoulder")
HAnimJoint123.name = "l_shoulder"
HAnimJoint123.center = [0.2029,1.4376,-0.0387]
HAnimJoint124 = x3d.HAnimJoint(DEF="hanim_l_elbow")
HAnimJoint124.name = "l_elbow"
HAnimJoint124.center = [0.2014,1.1357,-0.0682]
HAnimJoint125 = x3d.HAnimJoint(DEF="hanim_l_radiocarpal")
HAnimJoint125.name = "l_radiocarpal"
HAnimJoint125.center = [0.1984,0.8663,-0.0583]
HAnimJoint126 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_1")
HAnimJoint126.name = "l_midcarpal_1"
HAnimJoint126.center = [0,1,0]
HAnimJoint127 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_1")
HAnimJoint127.name = "l_carpometacarpal_1"
HAnimJoint127.center = [0.1924,0.8472,-0.0534]
HAnimJoint128 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_1")
HAnimJoint128.name = "l_metacarpophalangeal_1"
HAnimJoint128.center = [0.1951,0.8226,0.0246]
HAnimJoint129 = x3d.HAnimJoint(DEF="hanim_l_carpal_interphalangeal_1")
HAnimJoint129.name = "l_carpal_interphalangeal_1"
HAnimJoint129.center = [0.1955,0.8159,0.0464]

HAnimJoint128.children.append(HAnimJoint129)

HAnimJoint127.children.append(HAnimJoint128)

HAnimJoint126.children.append(HAnimJoint127)

HAnimJoint125.children.append(HAnimJoint126)
HAnimJoint130 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_2")
HAnimJoint130.name = "l_midcarpal_2"
HAnimJoint130.center = [0,1,0]
HAnimJoint131 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_2")
HAnimJoint131.name = "l_carpometacarpal_2"
HAnimJoint131.center = [0.1983,0.8024,-0.028]
HAnimJoint132 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_2")
HAnimJoint132.name = "l_metacarpophalangeal_2"
HAnimJoint132.center = [0.1983,0.7815,-0.028]
HAnimJoint133 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint133.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint133.center = [0.2017,0.7363,-0.0248]
HAnimJoint134 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint134.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint134.center = [0.2028,0.7139,-0.0236]

HAnimJoint133.children.append(HAnimJoint134)

HAnimJoint132.children.append(HAnimJoint133)

HAnimJoint131.children.append(HAnimJoint132)

HAnimJoint130.children.append(HAnimJoint131)

HAnimJoint125.children.append(HAnimJoint130)
HAnimJoint135 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_3")
HAnimJoint135.name = "l_midcarpal_3"
HAnimJoint135.center = [0,1,0]
HAnimJoint136 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_3")
HAnimJoint136.name = "l_carpometacarpal_3"
HAnimJoint136.center = [0.1987,0.8029,-0.053]
HAnimJoint137 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_3")
HAnimJoint137.name = "l_metacarpophalangeal_3"
HAnimJoint137.center = [0.1987,0.7818,-0.053]
HAnimJoint138 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint138.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint138.center = [0.2013,0.7273,-0.0503]
HAnimJoint139 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint139.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint139.center = [0.2026,0.7011,-0.0494]

HAnimJoint138.children.append(HAnimJoint139)

HAnimJoint137.children.append(HAnimJoint138)

HAnimJoint136.children.append(HAnimJoint137)

HAnimJoint135.children.append(HAnimJoint136)

HAnimJoint125.children.append(HAnimJoint135)
HAnimJoint140 = x3d.HAnimJoint(DEF="hanim_l_midcarpal_4_5")
HAnimJoint140.name = "l_midcarpal_4_5"
HAnimJoint140.center = [0,1,0]
HAnimJoint141 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_4")
HAnimJoint141.name = "l_carpometacarpal_4"
HAnimJoint141.center = [0.1956,0.8019,-0.0794]
HAnimJoint142 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_4")
HAnimJoint142.name = "l_metacarpophalangeal_4"
HAnimJoint142.center = [0.1956,0.7815,-0.0794]
HAnimJoint143 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint143.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint143.center = [0.1973,0.7287,-0.0777]
HAnimJoint144 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint144.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint144.center = [0.1983,0.7045,-0.0767]

HAnimJoint143.children.append(HAnimJoint144)

HAnimJoint142.children.append(HAnimJoint143)

HAnimJoint141.children.append(HAnimJoint142)

HAnimJoint140.children.append(HAnimJoint141)
HAnimJoint145 = x3d.HAnimJoint(DEF="hanim_l_carpometacarpal_5")
HAnimJoint145.name = "l_carpometacarpal_5"
HAnimJoint145.center = [0.1925,0.8066,-0.1036]
HAnimJoint146 = x3d.HAnimJoint(DEF="hanim_l_metacarpophalangeal_5")
HAnimJoint146.name = "l_metacarpophalangeal_5"
HAnimJoint146.center = [0.1925,0.7866,-0.1036]
HAnimJoint147 = x3d.HAnimJoint(DEF="hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint147.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint147.center = [0.1938,0.7452,-0.1024]
HAnimJoint148 = x3d.HAnimJoint(DEF="hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint148.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint148.center = [0.1948,0.7277,-0.1017]

HAnimJoint147.children.append(HAnimJoint148)

HAnimJoint146.children.append(HAnimJoint147)

HAnimJoint145.children.append(HAnimJoint146)

HAnimJoint140.children.append(HAnimJoint145)

HAnimJoint125.children.append(HAnimJoint140)

HAnimJoint124.children.append(HAnimJoint125)

HAnimJoint123.children.append(HAnimJoint124)

HAnimJoint122.children.append(HAnimJoint123)

HAnimJoint121.children.append(HAnimJoint122)

HAnimJoint105.children.append(HAnimJoint121)
HAnimJoint149 = x3d.HAnimJoint(DEF="hanim_r_sternoclavicular")
HAnimJoint149.name = "r_sternoclavicular"
HAnimJoint149.center = [-0.0694,1.46,-0.033]
HAnimJoint150 = x3d.HAnimJoint(DEF="hanim_r_acromioclavicular")
HAnimJoint150.name = "r_acromioclavicular"
HAnimJoint150.center = [-0.0836,1.4281,-0.0401]
HAnimJoint151 = x3d.HAnimJoint(DEF="hanim_r_shoulder")
HAnimJoint151.name = "r_shoulder"
HAnimJoint151.center = [-0.1907,1.4407,-0.0325]
HAnimJoint152 = x3d.HAnimJoint(DEF="hanim_r_elbow")
HAnimJoint152.name = "r_elbow"
HAnimJoint152.center = [-0.1949,1.1388,-0.062]
HAnimJoint153 = x3d.HAnimJoint(DEF="hanim_r_radiocarpal")
HAnimJoint153.name = "r_radiocarpal"
HAnimJoint153.center = [-0.1959,0.8694,-0.0521]
HAnimJoint154 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_1")
HAnimJoint154.name = "r_midcarpal_1"
HAnimJoint154.center = [0,1,0]
HAnimJoint155 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_1")
HAnimJoint155.name = "r_carpometacarpal_1"
HAnimJoint155.center = [-0.1899,0.8502,-0.0473]
HAnimJoint156 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_1")
HAnimJoint156.name = "r_metacarpophalangeal_1"
HAnimJoint156.center = [-0.1874,0.8256,0.0306]
HAnimJoint157 = x3d.HAnimJoint(DEF="hanim_r_carpal_interphalangeal_1")
HAnimJoint157.name = "r_carpal_interphalangeal_1"
HAnimJoint157.center = [-0.1864,0.819,0.0506]

HAnimJoint156.children.append(HAnimJoint157)

HAnimJoint155.children.append(HAnimJoint156)

HAnimJoint154.children.append(HAnimJoint155)

HAnimJoint153.children.append(HAnimJoint154)
HAnimJoint158 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_2")
HAnimJoint158.name = "r_midcarpal_2"
HAnimJoint158.center = [0,1,0]
HAnimJoint159 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_2")
HAnimJoint159.name = "r_carpometacarpal_2"
HAnimJoint159.center = [-0.1961,0.8055,-0.0218]
HAnimJoint160 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_2")
HAnimJoint160.name = "r_metacarpophalangeal_2"
HAnimJoint160.center = [-0.1961,0.7846,-0.0218]
HAnimJoint161 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint161.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint161.center = [-0.1954,0.7393,-0.0185]
HAnimJoint162 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint162.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint162.center = [-0.1945,0.7169,-0.0173]

HAnimJoint161.children.append(HAnimJoint162)

HAnimJoint160.children.append(HAnimJoint161)

HAnimJoint159.children.append(HAnimJoint160)

HAnimJoint158.children.append(HAnimJoint159)

HAnimJoint153.children.append(HAnimJoint158)
HAnimJoint163 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_3")
HAnimJoint163.name = "r_midcarpal_3"
HAnimJoint163.center = [0,1,0]
HAnimJoint164 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_3")
HAnimJoint164.name = "r_carpometacarpal_3"
HAnimJoint164.center = [-0.1972,0.806,-0.0468]
HAnimJoint165 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_3")
HAnimJoint165.name = "r_metacarpophalangeal_3"
HAnimJoint165.center = [-0.1972,0.7849,-0.0468]
HAnimJoint166 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint166.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint166.center = [-0.195,0.7304,-0.0441]
HAnimJoint167 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint167.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint167.center = [-0.1939,0.7042,-0.0432]

HAnimJoint166.children.append(HAnimJoint167)

HAnimJoint165.children.append(HAnimJoint166)

HAnimJoint164.children.append(HAnimJoint165)

HAnimJoint163.children.append(HAnimJoint164)

HAnimJoint153.children.append(HAnimJoint163)
HAnimJoint168 = x3d.HAnimJoint(DEF="hanim_r_midcarpal_4_5")
HAnimJoint168.name = "r_midcarpal_4_5"
HAnimJoint168.center = [0,1,0]
HAnimJoint169 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_4")
HAnimJoint169.name = "r_carpometacarpal_4"
HAnimJoint169.center = [-0.1951,0.8049,-0.0732]
HAnimJoint170 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_4")
HAnimJoint170.name = "r_metacarpophalangeal_4"
HAnimJoint170.center = [-0.1951,0.7845,-0.0732]
HAnimJoint171 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint171.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint171.center = [-0.192,0.7318,-0.0716]
HAnimJoint172 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint172.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint172.center = [-0.1908,0.7077,-0.0706]

HAnimJoint171.children.append(HAnimJoint172)

HAnimJoint170.children.append(HAnimJoint171)

HAnimJoint169.children.append(HAnimJoint170)

HAnimJoint168.children.append(HAnimJoint169)
HAnimJoint173 = x3d.HAnimJoint(DEF="hanim_r_carpometacarpal_5")
HAnimJoint173.name = "r_carpometacarpal_5"
HAnimJoint173.center = [-0.1926,0.8096,-0.0975]
HAnimJoint174 = x3d.HAnimJoint(DEF="hanim_r_metacarpophalangeal_5")
HAnimJoint174.name = "r_metacarpophalangeal_5"
HAnimJoint174.center = [-0.1926,0.7896,-0.0975]
HAnimJoint175 = x3d.HAnimJoint(DEF="hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint175.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint175.center = [-0.1902,0.7483,-0.0963]
HAnimJoint176 = x3d.HAnimJoint(DEF="hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint176.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint176.center = [-0.1908,0.754,-0.096]

HAnimJoint175.children.append(HAnimJoint176)

HAnimJoint174.children.append(HAnimJoint175)

HAnimJoint173.children.append(HAnimJoint174)

HAnimJoint168.children.append(HAnimJoint173)

HAnimJoint153.children.append(HAnimJoint168)

HAnimJoint152.children.append(HAnimJoint153)

HAnimJoint151.children.append(HAnimJoint152)

HAnimJoint150.children.append(HAnimJoint151)

HAnimJoint149.children.append(HAnimJoint150)

HAnimJoint105.children.append(HAnimJoint149)

HAnimJoint104.children.append(HAnimJoint105)

HAnimJoint103.children.append(HAnimJoint104)

HAnimJoint102.children.append(HAnimJoint103)

HAnimJoint101.children.append(HAnimJoint102)

HAnimJoint100.children.append(HAnimJoint101)

HAnimJoint99.children.append(HAnimJoint100)

HAnimJoint98.children.append(HAnimJoint99)

HAnimJoint97.children.append(HAnimJoint98)

HAnimJoint96.children.append(HAnimJoint97)

HAnimJoint95.children.append(HAnimJoint96)

HAnimJoint94.children.append(HAnimJoint95)

HAnimJoint93.children.append(HAnimJoint94)

HAnimJoint92.children.append(HAnimJoint93)

HAnimJoint91.children.append(HAnimJoint92)

HAnimJoint90.children.append(HAnimJoint91)

HAnimJoint89.children.append(HAnimJoint90)

HAnimJoint31.children.append(HAnimJoint89)

HAnimHumanoid30.skeleton.append(HAnimJoint31)
HAnimJoint177 = x3d.HAnimJoint(USE="hanim_humanoid_root")

HAnimHumanoid30.joints.append(HAnimJoint177)
HAnimJoint178 = x3d.HAnimJoint(USE="hanim_sacroiliac")

HAnimHumanoid30.joints.append(HAnimJoint178)
HAnimJoint179 = x3d.HAnimJoint(USE="hanim_l_hip")

HAnimHumanoid30.joints.append(HAnimJoint179)
HAnimJoint180 = x3d.HAnimJoint(USE="hanim_l_knee")

HAnimHumanoid30.joints.append(HAnimJoint180)
HAnimJoint181 = x3d.HAnimJoint(USE="hanim_l_talocrural")

HAnimHumanoid30.joints.append(HAnimJoint181)
HAnimJoint182 = x3d.HAnimJoint(USE="hanim_l_talocalcaneonavicular")

HAnimHumanoid30.joints.append(HAnimJoint182)
HAnimJoint183 = x3d.HAnimJoint(USE="hanim_l_cuneonavicular_1")

HAnimHumanoid30.joints.append(HAnimJoint183)
HAnimJoint184 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_1")

HAnimHumanoid30.joints.append(HAnimJoint184)
HAnimJoint185 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_1")

HAnimHumanoid30.joints.append(HAnimJoint185)
HAnimJoint186 = x3d.HAnimJoint(USE="hanim_l_tarsal_interphalangeal_1")

HAnimHumanoid30.joints.append(HAnimJoint186)
HAnimJoint187 = x3d.HAnimJoint(USE="hanim_l_cuneonavicular_2")

HAnimHumanoid30.joints.append(HAnimJoint187)
HAnimJoint188 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_2")

HAnimHumanoid30.joints.append(HAnimJoint188)
HAnimJoint189 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_2")

HAnimHumanoid30.joints.append(HAnimJoint189)
HAnimJoint190 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_2")

HAnimHumanoid30.joints.append(HAnimJoint190)
HAnimJoint191 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid30.joints.append(HAnimJoint191)
HAnimJoint192 = x3d.HAnimJoint(USE="hanim_l_cuneonavicular_3")

HAnimHumanoid30.joints.append(HAnimJoint192)
HAnimJoint193 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_3")

HAnimHumanoid30.joints.append(HAnimJoint193)
HAnimJoint194 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_3")

HAnimHumanoid30.joints.append(HAnimJoint194)
HAnimJoint195 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_3")

HAnimHumanoid30.joints.append(HAnimJoint195)
HAnimJoint196 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_3")

HAnimHumanoid30.joints.append(HAnimJoint196)
HAnimJoint197 = x3d.HAnimJoint(USE="hanim_l_calcaneocuboid")

HAnimHumanoid30.joints.append(HAnimJoint197)
HAnimJoint198 = x3d.HAnimJoint(USE="hanim_l_transversetarsal")

HAnimHumanoid30.joints.append(HAnimJoint198)
HAnimJoint199 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_4")

HAnimHumanoid30.joints.append(HAnimJoint199)
HAnimJoint200 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_4")

HAnimHumanoid30.joints.append(HAnimJoint200)
HAnimJoint201 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_4")

HAnimHumanoid30.joints.append(HAnimJoint201)
HAnimJoint202 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_4")

HAnimHumanoid30.joints.append(HAnimJoint202)
HAnimJoint203 = x3d.HAnimJoint(USE="hanim_l_tarsometatarsal_5")

HAnimHumanoid30.joints.append(HAnimJoint203)
HAnimJoint204 = x3d.HAnimJoint(USE="hanim_l_metatarsophalangeal_5")

HAnimHumanoid30.joints.append(HAnimJoint204)
HAnimJoint205 = x3d.HAnimJoint(USE="hanim_l_tarsal_proximal_interphalangeal_5")

HAnimHumanoid30.joints.append(HAnimJoint205)
HAnimJoint206 = x3d.HAnimJoint(USE="hanim_l_tarsal_distal_interphalangeal_5")

HAnimHumanoid30.joints.append(HAnimJoint206)
HAnimJoint207 = x3d.HAnimJoint(USE="hanim_r_hip")

HAnimHumanoid30.joints.append(HAnimJoint207)
HAnimJoint208 = x3d.HAnimJoint(USE="hanim_r_knee")

HAnimHumanoid30.joints.append(HAnimJoint208)
HAnimJoint209 = x3d.HAnimJoint(USE="hanim_r_talocrural")

HAnimHumanoid30.joints.append(HAnimJoint209)
HAnimJoint210 = x3d.HAnimJoint(USE="hanim_r_talocalcaneonavicular")

HAnimHumanoid30.joints.append(HAnimJoint210)
HAnimJoint211 = x3d.HAnimJoint(USE="hanim_r_cuneonavicular_1")

HAnimHumanoid30.joints.append(HAnimJoint211)
HAnimJoint212 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_1")

HAnimHumanoid30.joints.append(HAnimJoint212)
HAnimJoint213 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_1")

HAnimHumanoid30.joints.append(HAnimJoint213)
HAnimJoint214 = x3d.HAnimJoint(USE="hanim_r_tarsal_interphalangeal_1")

HAnimHumanoid30.joints.append(HAnimJoint214)
HAnimJoint215 = x3d.HAnimJoint(USE="hanim_r_cuneonavicular_2")

HAnimHumanoid30.joints.append(HAnimJoint215)
HAnimJoint216 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_2")

HAnimHumanoid30.joints.append(HAnimJoint216)
HAnimJoint217 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_2")

HAnimHumanoid30.joints.append(HAnimJoint217)
HAnimJoint218 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_2")

HAnimHumanoid30.joints.append(HAnimJoint218)
HAnimJoint219 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid30.joints.append(HAnimJoint219)
HAnimJoint220 = x3d.HAnimJoint(USE="hanim_r_cuneonavicular_3")

HAnimHumanoid30.joints.append(HAnimJoint220)
HAnimJoint221 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_3")

HAnimHumanoid30.joints.append(HAnimJoint221)
HAnimJoint222 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_3")

HAnimHumanoid30.joints.append(HAnimJoint222)
HAnimJoint223 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_3")

HAnimHumanoid30.joints.append(HAnimJoint223)
HAnimJoint224 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_3")

HAnimHumanoid30.joints.append(HAnimJoint224)
HAnimJoint225 = x3d.HAnimJoint(USE="hanim_r_calcaneocuboid")

HAnimHumanoid30.joints.append(HAnimJoint225)
HAnimJoint226 = x3d.HAnimJoint(USE="hanim_r_transversetarsal")

HAnimHumanoid30.joints.append(HAnimJoint226)
HAnimJoint227 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_4")

HAnimHumanoid30.joints.append(HAnimJoint227)
HAnimJoint228 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_4")

HAnimHumanoid30.joints.append(HAnimJoint228)
HAnimJoint229 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_4")

HAnimHumanoid30.joints.append(HAnimJoint229)
HAnimJoint230 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_4")

HAnimHumanoid30.joints.append(HAnimJoint230)
HAnimJoint231 = x3d.HAnimJoint(USE="hanim_r_tarsometatarsal_5")

HAnimHumanoid30.joints.append(HAnimJoint231)
HAnimJoint232 = x3d.HAnimJoint(USE="hanim_r_metatarsophalangeal_5")

HAnimHumanoid30.joints.append(HAnimJoint232)
HAnimJoint233 = x3d.HAnimJoint(USE="hanim_r_tarsal_proximal_interphalangeal_5")

HAnimHumanoid30.joints.append(HAnimJoint233)
HAnimJoint234 = x3d.HAnimJoint(USE="hanim_r_tarsal_distal_interphalangeal_5")

HAnimHumanoid30.joints.append(HAnimJoint234)
HAnimJoint235 = x3d.HAnimJoint(USE="hanim_vl5")

HAnimHumanoid30.joints.append(HAnimJoint235)
HAnimJoint236 = x3d.HAnimJoint(USE="hanim_vl4")

HAnimHumanoid30.joints.append(HAnimJoint236)
HAnimJoint237 = x3d.HAnimJoint(USE="hanim_vl3")

HAnimHumanoid30.joints.append(HAnimJoint237)
HAnimJoint238 = x3d.HAnimJoint(USE="hanim_vl2")

HAnimHumanoid30.joints.append(HAnimJoint238)
HAnimJoint239 = x3d.HAnimJoint(USE="hanim_vl1")

HAnimHumanoid30.joints.append(HAnimJoint239)
HAnimJoint240 = x3d.HAnimJoint(USE="hanim_vt12")

HAnimHumanoid30.joints.append(HAnimJoint240)
HAnimJoint241 = x3d.HAnimJoint(USE="hanim_vt11")

HAnimHumanoid30.joints.append(HAnimJoint241)
HAnimJoint242 = x3d.HAnimJoint(USE="hanim_vt10")

HAnimHumanoid30.joints.append(HAnimJoint242)
HAnimJoint243 = x3d.HAnimJoint(USE="hanim_vt9")

HAnimHumanoid30.joints.append(HAnimJoint243)
HAnimJoint244 = x3d.HAnimJoint(USE="hanim_vt8")

HAnimHumanoid30.joints.append(HAnimJoint244)
HAnimJoint245 = x3d.HAnimJoint(USE="hanim_vt7")

HAnimHumanoid30.joints.append(HAnimJoint245)
HAnimJoint246 = x3d.HAnimJoint(USE="hanim_vt6")

HAnimHumanoid30.joints.append(HAnimJoint246)
HAnimJoint247 = x3d.HAnimJoint(USE="hanim_vt5")

HAnimHumanoid30.joints.append(HAnimJoint247)
HAnimJoint248 = x3d.HAnimJoint(USE="hanim_vt4")

HAnimHumanoid30.joints.append(HAnimJoint248)
HAnimJoint249 = x3d.HAnimJoint(USE="hanim_vt3")

HAnimHumanoid30.joints.append(HAnimJoint249)
HAnimJoint250 = x3d.HAnimJoint(USE="hanim_vt2")

HAnimHumanoid30.joints.append(HAnimJoint250)
HAnimJoint251 = x3d.HAnimJoint(USE="hanim_vt1")

HAnimHumanoid30.joints.append(HAnimJoint251)
HAnimJoint252 = x3d.HAnimJoint(USE="hanim_vc7")

HAnimHumanoid30.joints.append(HAnimJoint252)
HAnimJoint253 = x3d.HAnimJoint(USE="hanim_vc6")

HAnimHumanoid30.joints.append(HAnimJoint253)
HAnimJoint254 = x3d.HAnimJoint(USE="hanim_vc5")

HAnimHumanoid30.joints.append(HAnimJoint254)
HAnimJoint255 = x3d.HAnimJoint(USE="hanim_vc4")

HAnimHumanoid30.joints.append(HAnimJoint255)
HAnimJoint256 = x3d.HAnimJoint(USE="hanim_vc3")

HAnimHumanoid30.joints.append(HAnimJoint256)
HAnimJoint257 = x3d.HAnimJoint(USE="hanim_vc2")

HAnimHumanoid30.joints.append(HAnimJoint257)
HAnimJoint258 = x3d.HAnimJoint(USE="hanim_vc1")

HAnimHumanoid30.joints.append(HAnimJoint258)
HAnimJoint259 = x3d.HAnimJoint(USE="hanim_skullbase")

HAnimHumanoid30.joints.append(HAnimJoint259)
HAnimJoint260 = x3d.HAnimJoint(USE="hanim_l_eyelid_joint")

HAnimHumanoid30.joints.append(HAnimJoint260)
HAnimJoint261 = x3d.HAnimJoint(USE="hanim_r_eyelid_joint")

HAnimHumanoid30.joints.append(HAnimJoint261)
HAnimJoint262 = x3d.HAnimJoint(USE="hanim_l_eyeball_joint")

HAnimHumanoid30.joints.append(HAnimJoint262)
HAnimJoint263 = x3d.HAnimJoint(USE="hanim_r_eyeball_joint")

HAnimHumanoid30.joints.append(HAnimJoint263)
HAnimJoint264 = x3d.HAnimJoint(USE="hanim_l_eyebrow_joint")

HAnimHumanoid30.joints.append(HAnimJoint264)
HAnimJoint265 = x3d.HAnimJoint(USE="hanim_r_eyebrow_joint")

HAnimHumanoid30.joints.append(HAnimJoint265)
HAnimJoint266 = x3d.HAnimJoint(USE="hanim_temporomandibular")

HAnimHumanoid30.joints.append(HAnimJoint266)
HAnimJoint267 = x3d.HAnimJoint(USE="hanim_l_sternoclavicular")

HAnimHumanoid30.joints.append(HAnimJoint267)
HAnimJoint268 = x3d.HAnimJoint(USE="hanim_l_acromioclavicular")

HAnimHumanoid30.joints.append(HAnimJoint268)
HAnimJoint269 = x3d.HAnimJoint(USE="hanim_l_shoulder")

HAnimHumanoid30.joints.append(HAnimJoint269)
HAnimJoint270 = x3d.HAnimJoint(USE="hanim_l_elbow")

HAnimHumanoid30.joints.append(HAnimJoint270)
HAnimJoint271 = x3d.HAnimJoint(USE="hanim_l_radiocarpal")

HAnimHumanoid30.joints.append(HAnimJoint271)
HAnimJoint272 = x3d.HAnimJoint(USE="hanim_l_midcarpal_1")

HAnimHumanoid30.joints.append(HAnimJoint272)
HAnimJoint273 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_1")

HAnimHumanoid30.joints.append(HAnimJoint273)
HAnimJoint274 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_1")

HAnimHumanoid30.joints.append(HAnimJoint274)
HAnimJoint275 = x3d.HAnimJoint(USE="hanim_l_carpal_interphalangeal_1")

HAnimHumanoid30.joints.append(HAnimJoint275)
HAnimJoint276 = x3d.HAnimJoint(USE="hanim_l_midcarpal_2")

HAnimHumanoid30.joints.append(HAnimJoint276)
HAnimJoint277 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_2")

HAnimHumanoid30.joints.append(HAnimJoint277)
HAnimJoint278 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_2")

HAnimHumanoid30.joints.append(HAnimJoint278)
HAnimJoint279 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid30.joints.append(HAnimJoint279)
HAnimJoint280 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid30.joints.append(HAnimJoint280)
HAnimJoint281 = x3d.HAnimJoint(USE="hanim_l_midcarpal_3")

HAnimHumanoid30.joints.append(HAnimJoint281)
HAnimJoint282 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_3")

HAnimHumanoid30.joints.append(HAnimJoint282)
HAnimJoint283 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_3")

HAnimHumanoid30.joints.append(HAnimJoint283)
HAnimJoint284 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid30.joints.append(HAnimJoint284)
HAnimJoint285 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid30.joints.append(HAnimJoint285)
HAnimJoint286 = x3d.HAnimJoint(USE="hanim_l_midcarpal_4_5")

HAnimHumanoid30.joints.append(HAnimJoint286)
HAnimJoint287 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_4")

HAnimHumanoid30.joints.append(HAnimJoint287)
HAnimJoint288 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_4")

HAnimHumanoid30.joints.append(HAnimJoint288)
HAnimJoint289 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid30.joints.append(HAnimJoint289)
HAnimJoint290 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid30.joints.append(HAnimJoint290)
HAnimJoint291 = x3d.HAnimJoint(USE="hanim_l_carpometacarpal_5")

HAnimHumanoid30.joints.append(HAnimJoint291)
HAnimJoint292 = x3d.HAnimJoint(USE="hanim_l_metacarpophalangeal_5")

HAnimHumanoid30.joints.append(HAnimJoint292)
HAnimJoint293 = x3d.HAnimJoint(USE="hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid30.joints.append(HAnimJoint293)
HAnimJoint294 = x3d.HAnimJoint(USE="hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid30.joints.append(HAnimJoint294)
HAnimJoint295 = x3d.HAnimJoint(USE="hanim_r_sternoclavicular")

HAnimHumanoid30.joints.append(HAnimJoint295)
HAnimJoint296 = x3d.HAnimJoint(USE="hanim_r_acromioclavicular")

HAnimHumanoid30.joints.append(HAnimJoint296)
HAnimJoint297 = x3d.HAnimJoint(USE="hanim_r_shoulder")

HAnimHumanoid30.joints.append(HAnimJoint297)
HAnimJoint298 = x3d.HAnimJoint(USE="hanim_r_elbow")

HAnimHumanoid30.joints.append(HAnimJoint298)
HAnimJoint299 = x3d.HAnimJoint(USE="hanim_r_radiocarpal")

HAnimHumanoid30.joints.append(HAnimJoint299)
HAnimJoint300 = x3d.HAnimJoint(USE="hanim_r_midcarpal_1")

HAnimHumanoid30.joints.append(HAnimJoint300)
HAnimJoint301 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_1")

HAnimHumanoid30.joints.append(HAnimJoint301)
HAnimJoint302 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_1")

HAnimHumanoid30.joints.append(HAnimJoint302)
HAnimJoint303 = x3d.HAnimJoint(USE="hanim_r_carpal_interphalangeal_1")

HAnimHumanoid30.joints.append(HAnimJoint303)
HAnimJoint304 = x3d.HAnimJoint(USE="hanim_r_midcarpal_2")

HAnimHumanoid30.joints.append(HAnimJoint304)
HAnimJoint305 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_2")

HAnimHumanoid30.joints.append(HAnimJoint305)
HAnimJoint306 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_2")

HAnimHumanoid30.joints.append(HAnimJoint306)
HAnimJoint307 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid30.joints.append(HAnimJoint307)
HAnimJoint308 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid30.joints.append(HAnimJoint308)
HAnimJoint309 = x3d.HAnimJoint(USE="hanim_r_midcarpal_3")

HAnimHumanoid30.joints.append(HAnimJoint309)
HAnimJoint310 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_3")

HAnimHumanoid30.joints.append(HAnimJoint310)
HAnimJoint311 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_3")

HAnimHumanoid30.joints.append(HAnimJoint311)
HAnimJoint312 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid30.joints.append(HAnimJoint312)
HAnimJoint313 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid30.joints.append(HAnimJoint313)
HAnimJoint314 = x3d.HAnimJoint(USE="hanim_r_midcarpal_4_5")

HAnimHumanoid30.joints.append(HAnimJoint314)
HAnimJoint315 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_4")

HAnimHumanoid30.joints.append(HAnimJoint315)
HAnimJoint316 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_4")

HAnimHumanoid30.joints.append(HAnimJoint316)
HAnimJoint317 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid30.joints.append(HAnimJoint317)
HAnimJoint318 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid30.joints.append(HAnimJoint318)
HAnimJoint319 = x3d.HAnimJoint(USE="hanim_r_carpometacarpal_5")

HAnimHumanoid30.joints.append(HAnimJoint319)
HAnimJoint320 = x3d.HAnimJoint(USE="hanim_r_metacarpophalangeal_5")

HAnimHumanoid30.joints.append(HAnimJoint320)
HAnimJoint321 = x3d.HAnimJoint(USE="hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid30.joints.append(HAnimJoint321)
HAnimJoint322 = x3d.HAnimJoint(USE="hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid30.joints.append(HAnimJoint322)

Scene10.children.append(HAnimHumanoid30)

X3D0.Scene = Scene10
f = open("../data/JohnJoint.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/JohnJoint.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/JohnJoint.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
