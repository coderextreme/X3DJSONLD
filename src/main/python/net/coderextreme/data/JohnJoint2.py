import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("HAnim")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("JohnJoint2.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("identifier")
meta4.setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint2.x3d")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("description")
meta5.setContent("An attempt at a standard LOA-4 skeleton")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("generator")
meta6.setContent("h2.pl")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("14 Jan 2023")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("creator")
meta8.setContent("John Carlson")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("created")
meta9.setContent("9 November 2020")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("license")
meta10.setContent("../license.html")

head1.addMeta(meta10)

X3D0.setHead(head1)
Scene11 = x3d.Scene()
Transform12 = x3d.Transform()
#DEF for markerfor XYZ axes
Shape13 = x3d.Shape()
Shape13.setDEF("AxisLinesShape")
#RGB lines showing XYZ axes
IndexedLineSet14 = x3d.IndexedLineSet()
IndexedLineSet14.setColorIndex([0,1,2])
IndexedLineSet14.setColorPerVertex(False)
IndexedLineSet14.setCoordIndex([0,1,-1,0,2,-1,0,3,-1])
Coordinate15 = x3d.Coordinate()
Coordinate15.setPoint([0,0,0,0.1,0,0,0,0.1,0,0,0,0.1])

IndexedLineSet14.setCoord(Coordinate15)
Color16 = x3d.Color()
Color16.setColor([1,0,0,0,0.6,0,0,0,1])

IndexedLineSet14.setColor(Color16)

Shape13.setGeometry(IndexedLineSet14)

Transform12.addChild(Shape13)

Scene11.addChildren(Transform12)
Group17 = x3d.Group()
#DEFS for markers of skeleton joints, segments, and sites
Transform18 = x3d.Transform()
#<Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
Transform19 = x3d.Transform()
Transform19.setTranslation([0,2.1,0])
Shape20 = x3d.Shape()
Shape20.setDEF("HAnimJointShape")
Sphere21 = x3d.Sphere()
Sphere21.setRadius(0.02)

Shape20.setGeometry(Sphere21)
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.setDEF("HAnimJointMaterial")
Material23.setDiffuseColor([0,0,0.8])
Material23.setTransparency(0.3)

Appearance22.setMaterial(Material23)

Shape20.setAppearance(Appearance22)

Transform19.addChild(Shape20)

Transform18.addChildren(Transform19)
Transform24 = x3d.Transform()
Transform24.setTranslation([0,2.05,0])
Shape25 = x3d.Shape()
Shape25.setDEF("HAnimSegmentLine")
LineSet26 = x3d.LineSet()
LineSet26.setVertexCount([2])
ColorRGBA27 = x3d.ColorRGBA()
ColorRGBA27.setDEF("HAnimSegmentLineColorRGBA")
ColorRGBA27.setColor([1,1,0,1,1,1,0,0.1])

LineSet26.setColor(ColorRGBA27)
Coordinate28 = x3d.Coordinate()
Coordinate28.setPoint([-0.05,0,0,0.05,0,0])

LineSet26.setCoord(Coordinate28)

Shape25.setGeometry(LineSet26)

Transform24.addChild(Shape25)

Transform18.addChildren(Transform24)
#<Transform translation='0 2.1 0' scale='1 1 1'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>

Group17.addChildren(Transform18)

Scene11.addChildren(Group17)
NavigationInfo29 = x3d.NavigationInfo()
NavigationInfo29.setSpeed(1.5)

Scene11.addChildren(NavigationInfo29)
Viewpoint30 = x3d.Viewpoint()
Viewpoint30.setDescription("default")

Scene11.addChildren(Viewpoint30)
HAnimHumanoid31 = x3d.HAnimHumanoid()
HAnimHumanoid31.setName("HAnim")
HAnimHumanoid31.setDEF("hanim_HAnim")
HAnimHumanoid31.setInfo(["humanoidVersion=2.0"])
HAnimHumanoid31.setVersion("2.0")
HAnimJoint32 = x3d.HAnimJoint()
HAnimJoint32.setName("humanoid_root")
HAnimJoint32.setDEF("hanim_humanoid_root")
HAnimJoint32.setCenter([0,0.824,0.0277])
HAnimJoint33 = x3d.HAnimJoint()
HAnimJoint33.setName("sacroiliac")
HAnimJoint33.setDEF("hanim_sacroiliac")
HAnimJoint33.setCenter([0,0.9149,0.0016])
HAnimJoint34 = x3d.HAnimJoint()
HAnimJoint34.setName("l_hip")
HAnimJoint34.setDEF("hanim_l_hip")
HAnimJoint34.setCenter([0.0961,0.9124,-0.0001])
HAnimJoint35 = x3d.HAnimJoint()
HAnimJoint35.setName("l_knee")
HAnimJoint35.setDEF("hanim_l_knee")
HAnimJoint35.setCenter([0.104,0.4867,0.0308])
HAnimJoint36 = x3d.HAnimJoint()
HAnimJoint36.setName("l_talocrural")
HAnimJoint36.setDEF("hanim_l_talocrural")
HAnimJoint36.setCenter([0.1101,0.0656,-0.0736])
HAnimJoint37 = x3d.HAnimJoint()
HAnimJoint37.setName("l_talocalcaneonavicular")
HAnimJoint37.setDEF("hanim_l_talocalcaneonavicular")
HAnimJoint37.setCenter([0,1,0])
HAnimJoint38 = x3d.HAnimJoint()
HAnimJoint38.setName("l_cuneonavicular_1")
HAnimJoint38.setDEF("hanim_l_cuneonavicular_1")
HAnimJoint38.setCenter([0,1,0])
HAnimJoint39 = x3d.HAnimJoint()
HAnimJoint39.setName("l_tarsometatarsal_1")
HAnimJoint39.setDEF("hanim_l_tarsometatarsal_1")
HAnimJoint39.setCenter([0,1,0])
HAnimJoint40 = x3d.HAnimJoint()
HAnimJoint40.setName("l_metatarsophalangeal_1")
HAnimJoint40.setDEF("hanim_l_metatarsophalangeal_1")
HAnimJoint40.setCenter([0,1,0])
HAnimJoint41 = x3d.HAnimJoint()
HAnimJoint41.setName("l_tarsal_interphalangeal_1")
HAnimJoint41.setDEF("hanim_l_tarsal_interphalangeal_1")
HAnimJoint41.setCenter([0,1,0])

HAnimJoint40.addChildren(HAnimJoint41)

HAnimJoint39.addChildren(HAnimJoint40)

HAnimJoint38.addChildren(HAnimJoint39)

HAnimJoint37.addChildren(HAnimJoint38)
HAnimJoint42 = x3d.HAnimJoint()
HAnimJoint42.setName("l_cuneonavicular_2")
HAnimJoint42.setDEF("hanim_l_cuneonavicular_2")
HAnimJoint42.setCenter([0,1,0])
HAnimJoint43 = x3d.HAnimJoint()
HAnimJoint43.setName("l_tarsometatarsal_2")
HAnimJoint43.setDEF("hanim_l_tarsometatarsal_2")
HAnimJoint43.setCenter([0,1,0])
HAnimJoint44 = x3d.HAnimJoint()
HAnimJoint44.setName("l_metatarsophalangeal_2")
HAnimJoint44.setDEF("hanim_l_metatarsophalangeal_2")
HAnimJoint44.setCenter([0,1,0])
HAnimJoint45 = x3d.HAnimJoint()
HAnimJoint45.setName("l_tarsal_proximal_interphalangeal_2")
HAnimJoint45.setDEF("hanim_l_tarsal_proximal_interphalangeal_2")
HAnimJoint45.setCenter([0,1,0])
HAnimJoint46 = x3d.HAnimJoint()
HAnimJoint46.setName("l_tarsal_distal_interphalangeal_2")
HAnimJoint46.setDEF("hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint46.setCenter([0,1,0])

HAnimJoint45.addChildren(HAnimJoint46)

HAnimJoint44.addChildren(HAnimJoint45)

HAnimJoint43.addChildren(HAnimJoint44)

HAnimJoint42.addChildren(HAnimJoint43)

HAnimJoint37.addChildren(HAnimJoint42)
HAnimJoint47 = x3d.HAnimJoint()
HAnimJoint47.setName("l_cuneonavicular_3")
HAnimJoint47.setDEF("hanim_l_cuneonavicular_3")
HAnimJoint47.setCenter([0,1,0])
HAnimJoint48 = x3d.HAnimJoint()
HAnimJoint48.setName("l_tarsometatarsal_3")
HAnimJoint48.setDEF("hanim_l_tarsometatarsal_3")
HAnimJoint48.setCenter([0,1,0])
HAnimJoint49 = x3d.HAnimJoint()
HAnimJoint49.setName("l_metatarsophalangeal_3")
HAnimJoint49.setDEF("hanim_l_metatarsophalangeal_3")
HAnimJoint49.setCenter([0,1,0])
HAnimJoint50 = x3d.HAnimJoint()
HAnimJoint50.setName("l_tarsal_proximal_interphalangeal_3")
HAnimJoint50.setDEF("hanim_l_tarsal_proximal_interphalangeal_3")
HAnimJoint50.setCenter([0,1,0])
HAnimJoint51 = x3d.HAnimJoint()
HAnimJoint51.setName("l_tarsal_distal_interphalangeal_3")
HAnimJoint51.setDEF("hanim_l_tarsal_distal_interphalangeal_3")
HAnimJoint51.setCenter([0,1,0])

HAnimJoint50.addChildren(HAnimJoint51)

HAnimJoint49.addChildren(HAnimJoint50)

HAnimJoint48.addChildren(HAnimJoint49)

HAnimJoint47.addChildren(HAnimJoint48)

HAnimJoint37.addChildren(HAnimJoint47)

HAnimJoint36.addChildren(HAnimJoint37)
HAnimJoint52 = x3d.HAnimJoint()
HAnimJoint52.setName("l_calcaneocuboid")
HAnimJoint52.setDEF("hanim_l_calcaneocuboid")
HAnimJoint52.setCenter([0,1,0])
HAnimJoint53 = x3d.HAnimJoint()
HAnimJoint53.setName("l_transversetarsal")
HAnimJoint53.setDEF("hanim_l_transversetarsal")
HAnimJoint53.setCenter([0,1,0])
HAnimJoint54 = x3d.HAnimJoint()
HAnimJoint54.setName("l_tarsometatarsal_4")
HAnimJoint54.setDEF("hanim_l_tarsometatarsal_4")
HAnimJoint54.setCenter([0,1,0])
HAnimJoint55 = x3d.HAnimJoint()
HAnimJoint55.setName("l_metatarsophalangeal_4")
HAnimJoint55.setDEF("hanim_l_metatarsophalangeal_4")
HAnimJoint55.setCenter([0,1,0])
HAnimJoint56 = x3d.HAnimJoint()
HAnimJoint56.setName("l_tarsal_proximal_interphalangeal_4")
HAnimJoint56.setDEF("hanim_l_tarsal_proximal_interphalangeal_4")
HAnimJoint56.setCenter([0,1,0])
HAnimJoint57 = x3d.HAnimJoint()
HAnimJoint57.setName("l_tarsal_distal_interphalangeal_4")
HAnimJoint57.setDEF("hanim_l_tarsal_distal_interphalangeal_4")
HAnimJoint57.setCenter([0,1,0])

HAnimJoint56.addChildren(HAnimJoint57)

HAnimJoint55.addChildren(HAnimJoint56)

HAnimJoint54.addChildren(HAnimJoint55)

HAnimJoint53.addChildren(HAnimJoint54)
HAnimJoint58 = x3d.HAnimJoint()
HAnimJoint58.setName("l_tarsometatarsal_5")
HAnimJoint58.setDEF("hanim_l_tarsometatarsal_5")
HAnimJoint58.setCenter([0,1,0])
HAnimJoint59 = x3d.HAnimJoint()
HAnimJoint59.setName("l_metatarsophalangeal_5")
HAnimJoint59.setDEF("hanim_l_metatarsophalangeal_5")
HAnimJoint59.setCenter([0,1,0])
HAnimJoint60 = x3d.HAnimJoint()
HAnimJoint60.setName("l_tarsal_proximal_interphalangeal_5")
HAnimJoint60.setDEF("hanim_l_tarsal_proximal_interphalangeal_5")
HAnimJoint60.setCenter([0,1,0])
HAnimJoint61 = x3d.HAnimJoint()
HAnimJoint61.setName("l_tarsal_distal_interphalangeal_5")
HAnimJoint61.setDEF("hanim_l_tarsal_distal_interphalangeal_5")
HAnimJoint61.setCenter([0,1,0])

HAnimJoint60.addChildren(HAnimJoint61)

HAnimJoint59.addChildren(HAnimJoint60)

HAnimJoint58.addChildren(HAnimJoint59)

HAnimJoint53.addChildren(HAnimJoint58)

HAnimJoint52.addChildren(HAnimJoint53)

HAnimJoint36.addChildren(HAnimJoint52)

HAnimJoint35.addChildren(HAnimJoint36)

HAnimJoint34.addChildren(HAnimJoint35)

HAnimJoint33.addChildren(HAnimJoint34)
HAnimJoint62 = x3d.HAnimJoint()
HAnimJoint62.setName("r_hip")
HAnimJoint62.setDEF("hanim_r_hip")
HAnimJoint62.setCenter([-0.095,0.9171,0.0029])
HAnimJoint63 = x3d.HAnimJoint()
HAnimJoint63.setName("r_knee")
HAnimJoint63.setDEF("hanim_r_knee")
HAnimJoint63.setCenter([-0.0867,0.4913,0.0318])
HAnimJoint64 = x3d.HAnimJoint()
HAnimJoint64.setName("r_talocrural")
HAnimJoint64.setDEF("hanim_r_talocrural")
HAnimJoint64.setCenter([-0.0801,0.0712,-0.0766])
HAnimJoint65 = x3d.HAnimJoint()
HAnimJoint65.setName("r_talocalcaneonavicular")
HAnimJoint65.setDEF("hanim_r_talocalcaneonavicular")
HAnimJoint65.setCenter([0,1,0])
HAnimJoint66 = x3d.HAnimJoint()
HAnimJoint66.setName("r_cuneonavicular_1")
HAnimJoint66.setDEF("hanim_r_cuneonavicular_1")
HAnimJoint66.setCenter([0,1,0])
HAnimJoint67 = x3d.HAnimJoint()
HAnimJoint67.setName("r_tarsometatarsal_1")
HAnimJoint67.setDEF("hanim_r_tarsometatarsal_1")
HAnimJoint67.setCenter([0,1,0])
HAnimJoint68 = x3d.HAnimJoint()
HAnimJoint68.setName("r_metatarsophalangeal_1")
HAnimJoint68.setDEF("hanim_r_metatarsophalangeal_1")
HAnimJoint68.setCenter([0,1,0])
HAnimJoint69 = x3d.HAnimJoint()
HAnimJoint69.setName("r_tarsal_interphalangeal_1")
HAnimJoint69.setDEF("hanim_r_tarsal_interphalangeal_1")
HAnimJoint69.setCenter([0,1,0])

HAnimJoint68.addChildren(HAnimJoint69)

HAnimJoint67.addChildren(HAnimJoint68)

HAnimJoint66.addChildren(HAnimJoint67)

HAnimJoint65.addChildren(HAnimJoint66)
HAnimJoint70 = x3d.HAnimJoint()
HAnimJoint70.setName("r_cuneonavicular_2")
HAnimJoint70.setDEF("hanim_r_cuneonavicular_2")
HAnimJoint70.setCenter([0,1,0])
HAnimJoint71 = x3d.HAnimJoint()
HAnimJoint71.setName("r_tarsometatarsal_2")
HAnimJoint71.setDEF("hanim_r_tarsometatarsal_2")
HAnimJoint71.setCenter([0,1,0])
HAnimJoint72 = x3d.HAnimJoint()
HAnimJoint72.setName("r_metatarsophalangeal_2")
HAnimJoint72.setDEF("hanim_r_metatarsophalangeal_2")
HAnimJoint72.setCenter([0,1,0])
HAnimJoint73 = x3d.HAnimJoint()
HAnimJoint73.setName("r_tarsal_proximal_interphalangeal_2")
HAnimJoint73.setDEF("hanim_r_tarsal_proximal_interphalangeal_2")
HAnimJoint73.setCenter([0,1,0])
HAnimJoint74 = x3d.HAnimJoint()
HAnimJoint74.setName("r_tarsal_distal_interphalangeal_2")
HAnimJoint74.setDEF("hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint74.setCenter([0,1,0])

HAnimJoint73.addChildren(HAnimJoint74)

HAnimJoint72.addChildren(HAnimJoint73)

HAnimJoint71.addChildren(HAnimJoint72)

HAnimJoint70.addChildren(HAnimJoint71)

HAnimJoint65.addChildren(HAnimJoint70)
HAnimJoint75 = x3d.HAnimJoint()
HAnimJoint75.setName("r_cuneonavicular_3")
HAnimJoint75.setDEF("hanim_r_cuneonavicular_3")
HAnimJoint75.setCenter([0,1,0])
HAnimJoint76 = x3d.HAnimJoint()
HAnimJoint76.setName("r_tarsometatarsal_3")
HAnimJoint76.setDEF("hanim_r_tarsometatarsal_3")
HAnimJoint76.setCenter([0,1,0])
HAnimJoint77 = x3d.HAnimJoint()
HAnimJoint77.setName("r_metatarsophalangeal_3")
HAnimJoint77.setDEF("hanim_r_metatarsophalangeal_3")
HAnimJoint77.setCenter([0,1,0])
HAnimJoint78 = x3d.HAnimJoint()
HAnimJoint78.setName("r_tarsal_proximal_interphalangeal_3")
HAnimJoint78.setDEF("hanim_r_tarsal_proximal_interphalangeal_3")
HAnimJoint78.setCenter([0,1,0])
HAnimJoint79 = x3d.HAnimJoint()
HAnimJoint79.setName("r_tarsal_distal_interphalangeal_3")
HAnimJoint79.setDEF("hanim_r_tarsal_distal_interphalangeal_3")
HAnimJoint79.setCenter([0,1,0])

HAnimJoint78.addChildren(HAnimJoint79)

HAnimJoint77.addChildren(HAnimJoint78)

HAnimJoint76.addChildren(HAnimJoint77)

HAnimJoint75.addChildren(HAnimJoint76)

HAnimJoint65.addChildren(HAnimJoint75)

HAnimJoint64.addChildren(HAnimJoint65)
HAnimJoint80 = x3d.HAnimJoint()
HAnimJoint80.setName("r_calcaneocuboid")
HAnimJoint80.setDEF("hanim_r_calcaneocuboid")
HAnimJoint80.setCenter([0,1,0])
HAnimJoint81 = x3d.HAnimJoint()
HAnimJoint81.setName("r_transversetarsal")
HAnimJoint81.setDEF("hanim_r_transversetarsal")
HAnimJoint81.setCenter([0,1,0])
HAnimJoint82 = x3d.HAnimJoint()
HAnimJoint82.setName("r_tarsometatarsal_4")
HAnimJoint82.setDEF("hanim_r_tarsometatarsal_4")
HAnimJoint82.setCenter([0,1,0])
HAnimJoint83 = x3d.HAnimJoint()
HAnimJoint83.setName("r_metatarsophalangeal_4")
HAnimJoint83.setDEF("hanim_r_metatarsophalangeal_4")
HAnimJoint83.setCenter([0,1,0])
HAnimJoint84 = x3d.HAnimJoint()
HAnimJoint84.setName("r_tarsal_proximal_interphalangeal_4")
HAnimJoint84.setDEF("hanim_r_tarsal_proximal_interphalangeal_4")
HAnimJoint84.setCenter([0,1,0])
HAnimJoint85 = x3d.HAnimJoint()
HAnimJoint85.setName("r_tarsal_distal_interphalangeal_4")
HAnimJoint85.setDEF("hanim_r_tarsal_distal_interphalangeal_4")
HAnimJoint85.setCenter([0,1,0])

HAnimJoint84.addChildren(HAnimJoint85)

HAnimJoint83.addChildren(HAnimJoint84)

HAnimJoint82.addChildren(HAnimJoint83)

HAnimJoint81.addChildren(HAnimJoint82)
HAnimJoint86 = x3d.HAnimJoint()
HAnimJoint86.setName("r_tarsometatarsal_5")
HAnimJoint86.setDEF("hanim_r_tarsometatarsal_5")
HAnimJoint86.setCenter([0,1,0])
HAnimJoint87 = x3d.HAnimJoint()
HAnimJoint87.setName("r_metatarsophalangeal_5")
HAnimJoint87.setDEF("hanim_r_metatarsophalangeal_5")
HAnimJoint87.setCenter([0,1,0])
HAnimJoint88 = x3d.HAnimJoint()
HAnimJoint88.setName("r_tarsal_proximal_interphalangeal_5")
HAnimJoint88.setDEF("hanim_r_tarsal_proximal_interphalangeal_5")
HAnimJoint88.setCenter([0,1,0])
HAnimJoint89 = x3d.HAnimJoint()
HAnimJoint89.setName("r_tarsal_distal_interphalangeal_5")
HAnimJoint89.setDEF("hanim_r_tarsal_distal_interphalangeal_5")
HAnimJoint89.setCenter([0,1,0])

HAnimJoint88.addChildren(HAnimJoint89)

HAnimJoint87.addChildren(HAnimJoint88)

HAnimJoint86.addChildren(HAnimJoint87)

HAnimJoint81.addChildren(HAnimJoint86)

HAnimJoint80.addChildren(HAnimJoint81)

HAnimJoint64.addChildren(HAnimJoint80)

HAnimJoint63.addChildren(HAnimJoint64)

HAnimJoint62.addChildren(HAnimJoint63)

HAnimJoint33.addChildren(HAnimJoint62)

HAnimJoint32.addChildren(HAnimJoint33)
HAnimJoint90 = x3d.HAnimJoint()
HAnimJoint90.setName("vl5")
HAnimJoint90.setDEF("hanim_vl5")
HAnimJoint90.setCenter([0.0028,1.0568,-0.0776])
HAnimJoint91 = x3d.HAnimJoint()
HAnimJoint91.setName("vl4")
HAnimJoint91.setDEF("hanim_vl4")
HAnimJoint91.setCenter([0.0035,1.0925,-0.0787])
HAnimJoint92 = x3d.HAnimJoint()
HAnimJoint92.setName("vl3")
HAnimJoint92.setDEF("hanim_vl3")
HAnimJoint92.setCenter([0.0041,1.1276,-0.0796])
HAnimJoint93 = x3d.HAnimJoint()
HAnimJoint93.setName("vl2")
HAnimJoint93.setDEF("hanim_vl2")
HAnimJoint93.setCenter([0.0045,1.1546,-0.08])
HAnimJoint94 = x3d.HAnimJoint()
HAnimJoint94.setName("vl1")
HAnimJoint94.setDEF("hanim_vl1")
HAnimJoint94.setCenter([0.0048,1.1912,-0.0805])
HAnimJoint95 = x3d.HAnimJoint()
HAnimJoint95.setName("vt12")
HAnimJoint95.setDEF("hanim_vt12")
HAnimJoint95.setCenter([0.0051,1.2278,-0.0808])
HAnimJoint96 = x3d.HAnimJoint()
HAnimJoint96.setName("vt11")
HAnimJoint96.setDEF("hanim_vt11")
HAnimJoint96.setCenter([0.0053,1.2679,-0.081])
HAnimJoint97 = x3d.HAnimJoint()
HAnimJoint97.setName("vt10")
HAnimJoint97.setDEF("hanim_vt10")
HAnimJoint97.setCenter([0.0056,1.2848,-0.0822])
HAnimJoint98 = x3d.HAnimJoint()
HAnimJoint98.setName("vt9")
HAnimJoint98.setDEF("hanim_vt9")
HAnimJoint98.setCenter([0.0057,1.3126,-0.0838])
HAnimJoint99 = x3d.HAnimJoint()
HAnimJoint99.setName("vt8")
HAnimJoint99.setDEF("hanim_vt8")
HAnimJoint99.setCenter([0.0057,1.3382,-0.0845])
HAnimJoint100 = x3d.HAnimJoint()
HAnimJoint100.setName("vt7")
HAnimJoint100.setDEF("hanim_vt7")
HAnimJoint100.setCenter([0.0058,1.3625,-0.0833])
HAnimJoint101 = x3d.HAnimJoint()
HAnimJoint101.setName("vt6")
HAnimJoint101.setDEF("hanim_vt6")
HAnimJoint101.setCenter([0.0059,1.3866,-0.08])
HAnimJoint102 = x3d.HAnimJoint()
HAnimJoint102.setName("vt5")
HAnimJoint102.setDEF("hanim_vt5")
HAnimJoint102.setCenter([0.006,1.4102,-0.0745])
HAnimJoint103 = x3d.HAnimJoint()
HAnimJoint103.setName("vt4")
HAnimJoint103.setDEF("hanim_vt4")
HAnimJoint103.setCenter([0.0061,1.432,-0.0675])
HAnimJoint104 = x3d.HAnimJoint()
HAnimJoint104.setName("vt3")
HAnimJoint104.setDEF("hanim_vt3")
HAnimJoint104.setCenter([0.0062,1.4583,-0.057])
HAnimJoint105 = x3d.HAnimJoint()
HAnimJoint105.setName("vt2")
HAnimJoint105.setDEF("hanim_vt2")
HAnimJoint105.setCenter([0.0063,1.4761,-0.0484])
HAnimJoint106 = x3d.HAnimJoint()
HAnimJoint106.setName("vt1")
HAnimJoint106.setDEF("hanim_vt1")
HAnimJoint106.setCenter([0.0065,1.4951,-0.0387])
HAnimJoint107 = x3d.HAnimJoint()
HAnimJoint107.setName("vc7")
HAnimJoint107.setDEF("hanim_vc7")
HAnimJoint107.setCenter([0.0066,1.5132,-0.0301])
HAnimJoint108 = x3d.HAnimJoint()
HAnimJoint108.setName("vc6")
HAnimJoint108.setDEF("hanim_vc6")
HAnimJoint108.setCenter([0.0066,1.5357,-0.0143])
HAnimJoint109 = x3d.HAnimJoint()
HAnimJoint109.setName("vc5")
HAnimJoint109.setDEF("hanim_vc5")
HAnimJoint109.setCenter([0.0066,1.552,-0.0082])
HAnimJoint110 = x3d.HAnimJoint()
HAnimJoint110.setName("vc4")
HAnimJoint110.setDEF("hanim_vc4")
HAnimJoint110.setCenter([0.0066,1.5662,-0.0084])
HAnimJoint111 = x3d.HAnimJoint()
HAnimJoint111.setName("vc3")
HAnimJoint111.setDEF("hanim_vc3")
HAnimJoint111.setCenter([0.0066,1.58,-0.0103])
HAnimJoint112 = x3d.HAnimJoint()
HAnimJoint112.setName("vc2")
HAnimJoint112.setDEF("hanim_vc2")
HAnimJoint112.setCenter([0.0066,1.5928,-0.0103])
HAnimJoint113 = x3d.HAnimJoint()
HAnimJoint113.setName("vc1")
HAnimJoint113.setDEF("hanim_vc1")
HAnimJoint113.setCenter([0.0066,1.6144,-0.0034])
HAnimJoint114 = x3d.HAnimJoint()
HAnimJoint114.setName("skullbase")
HAnimJoint114.setDEF("hanim_skullbase")
HAnimJoint114.setCenter([0.0044,1.6209,0.0236])
HAnimJoint115 = x3d.HAnimJoint()
HAnimJoint115.setName("l_eyelid_joint")
HAnimJoint115.setDEF("hanim_l_eyelid_joint")
HAnimJoint115.setCenter([0,1,0])

HAnimJoint114.addChildren(HAnimJoint115)
HAnimJoint116 = x3d.HAnimJoint()
HAnimJoint116.setName("r_eyelid_joint")
HAnimJoint116.setDEF("hanim_r_eyelid_joint")
HAnimJoint116.setCenter([0,1,0])

HAnimJoint114.addChildren(HAnimJoint116)
HAnimJoint117 = x3d.HAnimJoint()
HAnimJoint117.setName("l_eyeball_joint")
HAnimJoint117.setDEF("hanim_l_eyeball_joint")
HAnimJoint117.setCenter([0,1,0])

HAnimJoint114.addChildren(HAnimJoint117)
HAnimJoint118 = x3d.HAnimJoint()
HAnimJoint118.setName("r_eyeball_joint")
HAnimJoint118.setDEF("hanim_r_eyeball_joint")
HAnimJoint118.setCenter([0,1,0])

HAnimJoint114.addChildren(HAnimJoint118)
HAnimJoint119 = x3d.HAnimJoint()
HAnimJoint119.setName("l_eyebrow_joint")
HAnimJoint119.setDEF("hanim_l_eyebrow_joint")
HAnimJoint119.setCenter([0,1,0])

HAnimJoint114.addChildren(HAnimJoint119)
HAnimJoint120 = x3d.HAnimJoint()
HAnimJoint120.setName("r_eyebrow_joint")
HAnimJoint120.setDEF("hanim_r_eyebrow_joint")
HAnimJoint120.setCenter([0,1,0])

HAnimJoint114.addChildren(HAnimJoint120)
HAnimJoint121 = x3d.HAnimJoint()
HAnimJoint121.setName("temporomandibular")
HAnimJoint121.setDEF("hanim_temporomandibular")
HAnimJoint121.setCenter([0,1,0])

HAnimJoint114.addChildren(HAnimJoint121)

HAnimJoint113.addChildren(HAnimJoint114)

HAnimJoint112.addChildren(HAnimJoint113)

HAnimJoint111.addChildren(HAnimJoint112)

HAnimJoint110.addChildren(HAnimJoint111)

HAnimJoint109.addChildren(HAnimJoint110)

HAnimJoint108.addChildren(HAnimJoint109)

HAnimJoint107.addChildren(HAnimJoint108)

HAnimJoint106.addChildren(HAnimJoint107)
HAnimJoint122 = x3d.HAnimJoint()
HAnimJoint122.setName("l_sternoclavicular")
HAnimJoint122.setDEF("hanim_l_sternoclavicular")
HAnimJoint122.setCenter([0.082,1.4488,-0.0353])
HAnimJoint123 = x3d.HAnimJoint()
HAnimJoint123.setName("l_acromioclavicular")
HAnimJoint123.setDEF("hanim_l_acromioclavicular")
HAnimJoint123.setCenter([0.0962,1.4269,-0.0424])
HAnimJoint124 = x3d.HAnimJoint()
HAnimJoint124.setName("l_shoulder")
HAnimJoint124.setDEF("hanim_l_shoulder")
HAnimJoint124.setCenter([0.2029,1.4376,-0.0387])
HAnimJoint125 = x3d.HAnimJoint()
HAnimJoint125.setName("l_elbow")
HAnimJoint125.setDEF("hanim_l_elbow")
HAnimJoint125.setCenter([0.2014,1.1357,-0.0682])
HAnimJoint126 = x3d.HAnimJoint()
HAnimJoint126.setName("l_radiocarpal")
HAnimJoint126.setDEF("hanim_l_radiocarpal")
HAnimJoint126.setCenter([0.1984,0.8663,-0.0583])
HAnimJoint127 = x3d.HAnimJoint()
HAnimJoint127.setName("l_midcarpal_1")
HAnimJoint127.setDEF("hanim_l_midcarpal_1")
HAnimJoint127.setCenter([0,1,0])
HAnimJoint128 = x3d.HAnimJoint()
HAnimJoint128.setName("l_carpometacarpal_1")
HAnimJoint128.setDEF("hanim_l_carpometacarpal_1")
HAnimJoint128.setCenter([0.1924,0.8472,-0.0534])
HAnimJoint129 = x3d.HAnimJoint()
HAnimJoint129.setName("l_metacarpophalangeal_1")
HAnimJoint129.setDEF("hanim_l_metacarpophalangeal_1")
HAnimJoint129.setCenter([0.1951,0.8226,0.0246])
HAnimJoint130 = x3d.HAnimJoint()
HAnimJoint130.setName("l_carpal_interphalangeal_1")
HAnimJoint130.setDEF("hanim_l_carpal_interphalangeal_1")
HAnimJoint130.setCenter([0.1955,0.8159,0.0464])

HAnimJoint129.addChildren(HAnimJoint130)

HAnimJoint128.addChildren(HAnimJoint129)

HAnimJoint127.addChildren(HAnimJoint128)

HAnimJoint126.addChildren(HAnimJoint127)
HAnimJoint131 = x3d.HAnimJoint()
HAnimJoint131.setName("l_midcarpal_2")
HAnimJoint131.setDEF("hanim_l_midcarpal_2")
HAnimJoint131.setCenter([0,1,0])
HAnimJoint132 = x3d.HAnimJoint()
HAnimJoint132.setName("l_carpometacarpal_2")
HAnimJoint132.setDEF("hanim_l_carpometacarpal_2")
HAnimJoint132.setCenter([0.1983,0.8024,-0.028])
HAnimJoint133 = x3d.HAnimJoint()
HAnimJoint133.setName("l_metacarpophalangeal_2")
HAnimJoint133.setDEF("hanim_l_metacarpophalangeal_2")
HAnimJoint133.setCenter([0.1983,0.7815,-0.028])
HAnimJoint134 = x3d.HAnimJoint()
HAnimJoint134.setName("l_carpal_proximal_interphalangeal_2")
HAnimJoint134.setDEF("hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint134.setCenter([0.2017,0.7363,-0.0248])
HAnimJoint135 = x3d.HAnimJoint()
HAnimJoint135.setName("l_carpal_distal_interphalangeal_2")
HAnimJoint135.setDEF("hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint135.setCenter([0.2028,0.7139,-0.0236])

HAnimJoint134.addChildren(HAnimJoint135)

HAnimJoint133.addChildren(HAnimJoint134)

HAnimJoint132.addChildren(HAnimJoint133)

HAnimJoint131.addChildren(HAnimJoint132)

HAnimJoint126.addChildren(HAnimJoint131)
HAnimJoint136 = x3d.HAnimJoint()
HAnimJoint136.setName("l_midcarpal_3")
HAnimJoint136.setDEF("hanim_l_midcarpal_3")
HAnimJoint136.setCenter([0,1,0])
HAnimJoint137 = x3d.HAnimJoint()
HAnimJoint137.setName("l_carpometacarpal_3")
HAnimJoint137.setDEF("hanim_l_carpometacarpal_3")
HAnimJoint137.setCenter([0.1987,0.8029,-0.053])
HAnimJoint138 = x3d.HAnimJoint()
HAnimJoint138.setName("l_metacarpophalangeal_3")
HAnimJoint138.setDEF("hanim_l_metacarpophalangeal_3")
HAnimJoint138.setCenter([0.1987,0.7818,-0.053])
HAnimJoint139 = x3d.HAnimJoint()
HAnimJoint139.setName("l_carpal_proximal_interphalangeal_3")
HAnimJoint139.setDEF("hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint139.setCenter([0.2013,0.7273,-0.0503])
HAnimJoint140 = x3d.HAnimJoint()
HAnimJoint140.setName("l_carpal_distal_interphalangeal_3")
HAnimJoint140.setDEF("hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint140.setCenter([0.2026,0.7011,-0.0494])

HAnimJoint139.addChildren(HAnimJoint140)

HAnimJoint138.addChildren(HAnimJoint139)

HAnimJoint137.addChildren(HAnimJoint138)

HAnimJoint136.addChildren(HAnimJoint137)

HAnimJoint126.addChildren(HAnimJoint136)
HAnimJoint141 = x3d.HAnimJoint()
HAnimJoint141.setName("l_midcarpal_4_5")
HAnimJoint141.setDEF("hanim_l_midcarpal_4_5")
HAnimJoint141.setCenter([0,1,0])
HAnimJoint142 = x3d.HAnimJoint()
HAnimJoint142.setName("l_carpometacarpal_4")
HAnimJoint142.setDEF("hanim_l_carpometacarpal_4")
HAnimJoint142.setCenter([0.1956,0.8019,-0.0794])
HAnimJoint143 = x3d.HAnimJoint()
HAnimJoint143.setName("l_metacarpophalangeal_4")
HAnimJoint143.setDEF("hanim_l_metacarpophalangeal_4")
HAnimJoint143.setCenter([0.1956,0.7815,-0.0794])
HAnimJoint144 = x3d.HAnimJoint()
HAnimJoint144.setName("l_carpal_proximal_interphalangeal_4")
HAnimJoint144.setDEF("hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint144.setCenter([0.1973,0.7287,-0.0777])
HAnimJoint145 = x3d.HAnimJoint()
HAnimJoint145.setName("l_carpal_distal_interphalangeal_4")
HAnimJoint145.setDEF("hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint145.setCenter([0.1983,0.7045,-0.0767])

HAnimJoint144.addChildren(HAnimJoint145)

HAnimJoint143.addChildren(HAnimJoint144)

HAnimJoint142.addChildren(HAnimJoint143)

HAnimJoint141.addChildren(HAnimJoint142)
HAnimJoint146 = x3d.HAnimJoint()
HAnimJoint146.setName("l_carpometacarpal_5")
HAnimJoint146.setDEF("hanim_l_carpometacarpal_5")
HAnimJoint146.setCenter([0.1925,0.8066,-0.1036])
HAnimJoint147 = x3d.HAnimJoint()
HAnimJoint147.setName("l_metacarpophalangeal_5")
HAnimJoint147.setDEF("hanim_l_metacarpophalangeal_5")
HAnimJoint147.setCenter([0.1925,0.7866,-0.1036])
HAnimJoint148 = x3d.HAnimJoint()
HAnimJoint148.setName("l_carpal_proximal_interphalangeal_5")
HAnimJoint148.setDEF("hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint148.setCenter([0.1938,0.7452,-0.1024])
HAnimJoint149 = x3d.HAnimJoint()
HAnimJoint149.setName("l_carpal_distal_interphalangeal_5")
HAnimJoint149.setDEF("hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint149.setCenter([0.1948,0.7277,-0.1017])

HAnimJoint148.addChildren(HAnimJoint149)

HAnimJoint147.addChildren(HAnimJoint148)

HAnimJoint146.addChildren(HAnimJoint147)

HAnimJoint141.addChildren(HAnimJoint146)

HAnimJoint126.addChildren(HAnimJoint141)

HAnimJoint125.addChildren(HAnimJoint126)

HAnimJoint124.addChildren(HAnimJoint125)

HAnimJoint123.addChildren(HAnimJoint124)

HAnimJoint122.addChildren(HAnimJoint123)

HAnimJoint106.addChildren(HAnimJoint122)
HAnimJoint150 = x3d.HAnimJoint()
HAnimJoint150.setName("r_sternoclavicular")
HAnimJoint150.setDEF("hanim_r_sternoclavicular")
HAnimJoint150.setCenter([-0.0694,1.46,-0.033])
HAnimJoint151 = x3d.HAnimJoint()
HAnimJoint151.setName("r_acromioclavicular")
HAnimJoint151.setDEF("hanim_r_acromioclavicular")
HAnimJoint151.setCenter([-0.0836,1.4281,-0.0401])
HAnimJoint152 = x3d.HAnimJoint()
HAnimJoint152.setName("r_shoulder")
HAnimJoint152.setDEF("hanim_r_shoulder")
HAnimJoint152.setCenter([-0.1907,1.4407,-0.0325])
HAnimJoint153 = x3d.HAnimJoint()
HAnimJoint153.setName("r_elbow")
HAnimJoint153.setDEF("hanim_r_elbow")
HAnimJoint153.setCenter([-0.1949,1.1388,-0.062])
HAnimJoint154 = x3d.HAnimJoint()
HAnimJoint154.setName("r_radiocarpal")
HAnimJoint154.setDEF("hanim_r_radiocarpal")
HAnimJoint154.setCenter([-0.1959,0.8694,-0.0521])
HAnimJoint155 = x3d.HAnimJoint()
HAnimJoint155.setName("r_midcarpal_1")
HAnimJoint155.setDEF("hanim_r_midcarpal_1")
HAnimJoint155.setCenter([0,1,0])
HAnimJoint156 = x3d.HAnimJoint()
HAnimJoint156.setName("r_carpometacarpal_1")
HAnimJoint156.setDEF("hanim_r_carpometacarpal_1")
HAnimJoint156.setCenter([-0.1899,0.8502,-0.0473])
HAnimJoint157 = x3d.HAnimJoint()
HAnimJoint157.setName("r_metacarpophalangeal_1")
HAnimJoint157.setDEF("hanim_r_metacarpophalangeal_1")
HAnimJoint157.setCenter([-0.1874,0.8256,0.0306])
HAnimJoint158 = x3d.HAnimJoint()
HAnimJoint158.setName("r_carpal_interphalangeal_1")
HAnimJoint158.setDEF("hanim_r_carpal_interphalangeal_1")
HAnimJoint158.setCenter([-0.1864,0.819,0.0506])

HAnimJoint157.addChildren(HAnimJoint158)

HAnimJoint156.addChildren(HAnimJoint157)

HAnimJoint155.addChildren(HAnimJoint156)

HAnimJoint154.addChildren(HAnimJoint155)
HAnimJoint159 = x3d.HAnimJoint()
HAnimJoint159.setName("r_midcarpal_2")
HAnimJoint159.setDEF("hanim_r_midcarpal_2")
HAnimJoint159.setCenter([0,1,0])
HAnimJoint160 = x3d.HAnimJoint()
HAnimJoint160.setName("r_carpometacarpal_2")
HAnimJoint160.setDEF("hanim_r_carpometacarpal_2")
HAnimJoint160.setCenter([-0.1961,0.8055,-0.0218])
HAnimJoint161 = x3d.HAnimJoint()
HAnimJoint161.setName("r_metacarpophalangeal_2")
HAnimJoint161.setDEF("hanim_r_metacarpophalangeal_2")
HAnimJoint161.setCenter([-0.1961,0.7846,-0.0218])
HAnimJoint162 = x3d.HAnimJoint()
HAnimJoint162.setName("r_carpal_proximal_interphalangeal_2")
HAnimJoint162.setDEF("hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint162.setCenter([-0.1954,0.7393,-0.0185])
HAnimJoint163 = x3d.HAnimJoint()
HAnimJoint163.setName("r_carpal_distal_interphalangeal_2")
HAnimJoint163.setDEF("hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint163.setCenter([-0.1945,0.7169,-0.0173])

HAnimJoint162.addChildren(HAnimJoint163)

HAnimJoint161.addChildren(HAnimJoint162)

HAnimJoint160.addChildren(HAnimJoint161)

HAnimJoint159.addChildren(HAnimJoint160)

HAnimJoint154.addChildren(HAnimJoint159)
HAnimJoint164 = x3d.HAnimJoint()
HAnimJoint164.setName("r_midcarpal_3")
HAnimJoint164.setDEF("hanim_r_midcarpal_3")
HAnimJoint164.setCenter([0,1,0])
HAnimJoint165 = x3d.HAnimJoint()
HAnimJoint165.setName("r_carpometacarpal_3")
HAnimJoint165.setDEF("hanim_r_carpometacarpal_3")
HAnimJoint165.setCenter([-0.1972,0.806,-0.0468])
HAnimJoint166 = x3d.HAnimJoint()
HAnimJoint166.setName("r_metacarpophalangeal_3")
HAnimJoint166.setDEF("hanim_r_metacarpophalangeal_3")
HAnimJoint166.setCenter([-0.1972,0.7849,-0.0468])
HAnimJoint167 = x3d.HAnimJoint()
HAnimJoint167.setName("r_carpal_proximal_interphalangeal_3")
HAnimJoint167.setDEF("hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint167.setCenter([-0.195,0.7304,-0.0441])
HAnimJoint168 = x3d.HAnimJoint()
HAnimJoint168.setName("r_carpal_distal_interphalangeal_3")
HAnimJoint168.setDEF("hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint168.setCenter([-0.1939,0.7042,-0.0432])

HAnimJoint167.addChildren(HAnimJoint168)

HAnimJoint166.addChildren(HAnimJoint167)

HAnimJoint165.addChildren(HAnimJoint166)

HAnimJoint164.addChildren(HAnimJoint165)

HAnimJoint154.addChildren(HAnimJoint164)
HAnimJoint169 = x3d.HAnimJoint()
HAnimJoint169.setName("r_midcarpal_4_5")
HAnimJoint169.setDEF("hanim_r_midcarpal_4_5")
HAnimJoint169.setCenter([0,1,0])
HAnimJoint170 = x3d.HAnimJoint()
HAnimJoint170.setName("r_carpometacarpal_4")
HAnimJoint170.setDEF("hanim_r_carpometacarpal_4")
HAnimJoint170.setCenter([-0.1951,0.8049,-0.0732])
HAnimJoint171 = x3d.HAnimJoint()
HAnimJoint171.setName("r_metacarpophalangeal_4")
HAnimJoint171.setDEF("hanim_r_metacarpophalangeal_4")
HAnimJoint171.setCenter([-0.1951,0.7845,-0.0732])
HAnimJoint172 = x3d.HAnimJoint()
HAnimJoint172.setName("r_carpal_proximal_interphalangeal_4")
HAnimJoint172.setDEF("hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint172.setCenter([-0.192,0.7318,-0.0716])
HAnimJoint173 = x3d.HAnimJoint()
HAnimJoint173.setName("r_carpal_distal_interphalangeal_4")
HAnimJoint173.setDEF("hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint173.setCenter([-0.1908,0.7077,-0.0706])

HAnimJoint172.addChildren(HAnimJoint173)

HAnimJoint171.addChildren(HAnimJoint172)

HAnimJoint170.addChildren(HAnimJoint171)

HAnimJoint169.addChildren(HAnimJoint170)
HAnimJoint174 = x3d.HAnimJoint()
HAnimJoint174.setName("r_carpometacarpal_5")
HAnimJoint174.setDEF("hanim_r_carpometacarpal_5")
HAnimJoint174.setCenter([-0.1926,0.8096,-0.0975])
HAnimJoint175 = x3d.HAnimJoint()
HAnimJoint175.setName("r_metacarpophalangeal_5")
HAnimJoint175.setDEF("hanim_r_metacarpophalangeal_5")
HAnimJoint175.setCenter([-0.1926,0.7896,-0.0975])
HAnimJoint176 = x3d.HAnimJoint()
HAnimJoint176.setName("r_carpal_proximal_interphalangeal_5")
HAnimJoint176.setDEF("hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint176.setCenter([-0.1902,0.7483,-0.0963])
HAnimJoint177 = x3d.HAnimJoint()
HAnimJoint177.setName("r_carpal_distal_interphalangeal_5")
HAnimJoint177.setDEF("hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint177.setCenter([-0.1908,0.754,-0.096])

HAnimJoint176.addChildren(HAnimJoint177)

HAnimJoint175.addChildren(HAnimJoint176)

HAnimJoint174.addChildren(HAnimJoint175)

HAnimJoint169.addChildren(HAnimJoint174)

HAnimJoint154.addChildren(HAnimJoint169)

HAnimJoint153.addChildren(HAnimJoint154)

HAnimJoint152.addChildren(HAnimJoint153)

HAnimJoint151.addChildren(HAnimJoint152)

HAnimJoint150.addChildren(HAnimJoint151)

HAnimJoint106.addChildren(HAnimJoint150)

HAnimJoint105.addChildren(HAnimJoint106)

HAnimJoint104.addChildren(HAnimJoint105)

HAnimJoint103.addChildren(HAnimJoint104)

HAnimJoint102.addChildren(HAnimJoint103)

HAnimJoint101.addChildren(HAnimJoint102)

HAnimJoint100.addChildren(HAnimJoint101)

HAnimJoint99.addChildren(HAnimJoint100)

HAnimJoint98.addChildren(HAnimJoint99)

HAnimJoint97.addChildren(HAnimJoint98)

HAnimJoint96.addChildren(HAnimJoint97)

HAnimJoint95.addChildren(HAnimJoint96)

HAnimJoint94.addChildren(HAnimJoint95)

HAnimJoint93.addChildren(HAnimJoint94)

HAnimJoint92.addChildren(HAnimJoint93)

HAnimJoint91.addChildren(HAnimJoint92)

HAnimJoint90.addChildren(HAnimJoint91)

HAnimJoint32.addChildren(HAnimJoint90)

HAnimHumanoid31.setSkeleton(HAnimJoint32)
HAnimJoint178 = x3d.HAnimJoint()
HAnimJoint178.setUSE("hanim_humanoid_root")

HAnimHumanoid31.addJoints(HAnimJoint178)
HAnimJoint179 = x3d.HAnimJoint()
HAnimJoint179.setUSE("hanim_sacroiliac")

HAnimHumanoid31.addJoints(HAnimJoint179)
HAnimJoint180 = x3d.HAnimJoint()
HAnimJoint180.setUSE("hanim_l_hip")

HAnimHumanoid31.addJoints(HAnimJoint180)
HAnimJoint181 = x3d.HAnimJoint()
HAnimJoint181.setUSE("hanim_l_knee")

HAnimHumanoid31.addJoints(HAnimJoint181)
HAnimJoint182 = x3d.HAnimJoint()
HAnimJoint182.setUSE("hanim_l_talocrural")

HAnimHumanoid31.addJoints(HAnimJoint182)
HAnimJoint183 = x3d.HAnimJoint()
HAnimJoint183.setUSE("hanim_l_talocalcaneonavicular")

HAnimHumanoid31.addJoints(HAnimJoint183)
HAnimJoint184 = x3d.HAnimJoint()
HAnimJoint184.setUSE("hanim_l_cuneonavicular_1")

HAnimHumanoid31.addJoints(HAnimJoint184)
HAnimJoint185 = x3d.HAnimJoint()
HAnimJoint185.setUSE("hanim_l_tarsometatarsal_1")

HAnimHumanoid31.addJoints(HAnimJoint185)
HAnimJoint186 = x3d.HAnimJoint()
HAnimJoint186.setUSE("hanim_l_metatarsophalangeal_1")

HAnimHumanoid31.addJoints(HAnimJoint186)
HAnimJoint187 = x3d.HAnimJoint()
HAnimJoint187.setUSE("hanim_l_tarsal_interphalangeal_1")

HAnimHumanoid31.addJoints(HAnimJoint187)
HAnimJoint188 = x3d.HAnimJoint()
HAnimJoint188.setUSE("hanim_l_cuneonavicular_2")

HAnimHumanoid31.addJoints(HAnimJoint188)
HAnimJoint189 = x3d.HAnimJoint()
HAnimJoint189.setUSE("hanim_l_tarsometatarsal_2")

HAnimHumanoid31.addJoints(HAnimJoint189)
HAnimJoint190 = x3d.HAnimJoint()
HAnimJoint190.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid31.addJoints(HAnimJoint190)
HAnimJoint191 = x3d.HAnimJoint()
HAnimJoint191.setUSE("hanim_l_tarsal_proximal_interphalangeal_2")

HAnimHumanoid31.addJoints(HAnimJoint191)
HAnimJoint192 = x3d.HAnimJoint()
HAnimJoint192.setUSE("hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid31.addJoints(HAnimJoint192)
HAnimJoint193 = x3d.HAnimJoint()
HAnimJoint193.setUSE("hanim_l_cuneonavicular_3")

HAnimHumanoid31.addJoints(HAnimJoint193)
HAnimJoint194 = x3d.HAnimJoint()
HAnimJoint194.setUSE("hanim_l_tarsometatarsal_3")

HAnimHumanoid31.addJoints(HAnimJoint194)
HAnimJoint195 = x3d.HAnimJoint()
HAnimJoint195.setUSE("hanim_l_metatarsophalangeal_3")

HAnimHumanoid31.addJoints(HAnimJoint195)
HAnimJoint196 = x3d.HAnimJoint()
HAnimJoint196.setUSE("hanim_l_tarsal_proximal_interphalangeal_3")

HAnimHumanoid31.addJoints(HAnimJoint196)
HAnimJoint197 = x3d.HAnimJoint()
HAnimJoint197.setUSE("hanim_l_tarsal_distal_interphalangeal_3")

HAnimHumanoid31.addJoints(HAnimJoint197)
HAnimJoint198 = x3d.HAnimJoint()
HAnimJoint198.setUSE("hanim_l_calcaneocuboid")

HAnimHumanoid31.addJoints(HAnimJoint198)
HAnimJoint199 = x3d.HAnimJoint()
HAnimJoint199.setUSE("hanim_l_transversetarsal")

HAnimHumanoid31.addJoints(HAnimJoint199)
HAnimJoint200 = x3d.HAnimJoint()
HAnimJoint200.setUSE("hanim_l_tarsometatarsal_4")

HAnimHumanoid31.addJoints(HAnimJoint200)
HAnimJoint201 = x3d.HAnimJoint()
HAnimJoint201.setUSE("hanim_l_metatarsophalangeal_4")

HAnimHumanoid31.addJoints(HAnimJoint201)
HAnimJoint202 = x3d.HAnimJoint()
HAnimJoint202.setUSE("hanim_l_tarsal_proximal_interphalangeal_4")

HAnimHumanoid31.addJoints(HAnimJoint202)
HAnimJoint203 = x3d.HAnimJoint()
HAnimJoint203.setUSE("hanim_l_tarsal_distal_interphalangeal_4")

HAnimHumanoid31.addJoints(HAnimJoint203)
HAnimJoint204 = x3d.HAnimJoint()
HAnimJoint204.setUSE("hanim_l_tarsometatarsal_5")

HAnimHumanoid31.addJoints(HAnimJoint204)
HAnimJoint205 = x3d.HAnimJoint()
HAnimJoint205.setUSE("hanim_l_metatarsophalangeal_5")

HAnimHumanoid31.addJoints(HAnimJoint205)
HAnimJoint206 = x3d.HAnimJoint()
HAnimJoint206.setUSE("hanim_l_tarsal_proximal_interphalangeal_5")

HAnimHumanoid31.addJoints(HAnimJoint206)
HAnimJoint207 = x3d.HAnimJoint()
HAnimJoint207.setUSE("hanim_l_tarsal_distal_interphalangeal_5")

HAnimHumanoid31.addJoints(HAnimJoint207)
HAnimJoint208 = x3d.HAnimJoint()
HAnimJoint208.setUSE("hanim_r_hip")

HAnimHumanoid31.addJoints(HAnimJoint208)
HAnimJoint209 = x3d.HAnimJoint()
HAnimJoint209.setUSE("hanim_r_knee")

HAnimHumanoid31.addJoints(HAnimJoint209)
HAnimJoint210 = x3d.HAnimJoint()
HAnimJoint210.setUSE("hanim_r_talocrural")

HAnimHumanoid31.addJoints(HAnimJoint210)
HAnimJoint211 = x3d.HAnimJoint()
HAnimJoint211.setUSE("hanim_r_talocalcaneonavicular")

HAnimHumanoid31.addJoints(HAnimJoint211)
HAnimJoint212 = x3d.HAnimJoint()
HAnimJoint212.setUSE("hanim_r_cuneonavicular_1")

HAnimHumanoid31.addJoints(HAnimJoint212)
HAnimJoint213 = x3d.HAnimJoint()
HAnimJoint213.setUSE("hanim_r_tarsometatarsal_1")

HAnimHumanoid31.addJoints(HAnimJoint213)
HAnimJoint214 = x3d.HAnimJoint()
HAnimJoint214.setUSE("hanim_r_metatarsophalangeal_1")

HAnimHumanoid31.addJoints(HAnimJoint214)
HAnimJoint215 = x3d.HAnimJoint()
HAnimJoint215.setUSE("hanim_r_tarsal_interphalangeal_1")

HAnimHumanoid31.addJoints(HAnimJoint215)
HAnimJoint216 = x3d.HAnimJoint()
HAnimJoint216.setUSE("hanim_r_cuneonavicular_2")

HAnimHumanoid31.addJoints(HAnimJoint216)
HAnimJoint217 = x3d.HAnimJoint()
HAnimJoint217.setUSE("hanim_r_tarsometatarsal_2")

HAnimHumanoid31.addJoints(HAnimJoint217)
HAnimJoint218 = x3d.HAnimJoint()
HAnimJoint218.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid31.addJoints(HAnimJoint218)
HAnimJoint219 = x3d.HAnimJoint()
HAnimJoint219.setUSE("hanim_r_tarsal_proximal_interphalangeal_2")

HAnimHumanoid31.addJoints(HAnimJoint219)
HAnimJoint220 = x3d.HAnimJoint()
HAnimJoint220.setUSE("hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid31.addJoints(HAnimJoint220)
HAnimJoint221 = x3d.HAnimJoint()
HAnimJoint221.setUSE("hanim_r_cuneonavicular_3")

HAnimHumanoid31.addJoints(HAnimJoint221)
HAnimJoint222 = x3d.HAnimJoint()
HAnimJoint222.setUSE("hanim_r_tarsometatarsal_3")

HAnimHumanoid31.addJoints(HAnimJoint222)
HAnimJoint223 = x3d.HAnimJoint()
HAnimJoint223.setUSE("hanim_r_metatarsophalangeal_3")

HAnimHumanoid31.addJoints(HAnimJoint223)
HAnimJoint224 = x3d.HAnimJoint()
HAnimJoint224.setUSE("hanim_r_tarsal_proximal_interphalangeal_3")

HAnimHumanoid31.addJoints(HAnimJoint224)
HAnimJoint225 = x3d.HAnimJoint()
HAnimJoint225.setUSE("hanim_r_tarsal_distal_interphalangeal_3")

HAnimHumanoid31.addJoints(HAnimJoint225)
HAnimJoint226 = x3d.HAnimJoint()
HAnimJoint226.setUSE("hanim_r_calcaneocuboid")

HAnimHumanoid31.addJoints(HAnimJoint226)
HAnimJoint227 = x3d.HAnimJoint()
HAnimJoint227.setUSE("hanim_r_transversetarsal")

HAnimHumanoid31.addJoints(HAnimJoint227)
HAnimJoint228 = x3d.HAnimJoint()
HAnimJoint228.setUSE("hanim_r_tarsometatarsal_4")

HAnimHumanoid31.addJoints(HAnimJoint228)
HAnimJoint229 = x3d.HAnimJoint()
HAnimJoint229.setUSE("hanim_r_metatarsophalangeal_4")

HAnimHumanoid31.addJoints(HAnimJoint229)
HAnimJoint230 = x3d.HAnimJoint()
HAnimJoint230.setUSE("hanim_r_tarsal_proximal_interphalangeal_4")

HAnimHumanoid31.addJoints(HAnimJoint230)
HAnimJoint231 = x3d.HAnimJoint()
HAnimJoint231.setUSE("hanim_r_tarsal_distal_interphalangeal_4")

HAnimHumanoid31.addJoints(HAnimJoint231)
HAnimJoint232 = x3d.HAnimJoint()
HAnimJoint232.setUSE("hanim_r_tarsometatarsal_5")

HAnimHumanoid31.addJoints(HAnimJoint232)
HAnimJoint233 = x3d.HAnimJoint()
HAnimJoint233.setUSE("hanim_r_metatarsophalangeal_5")

HAnimHumanoid31.addJoints(HAnimJoint233)
HAnimJoint234 = x3d.HAnimJoint()
HAnimJoint234.setUSE("hanim_r_tarsal_proximal_interphalangeal_5")

HAnimHumanoid31.addJoints(HAnimJoint234)
HAnimJoint235 = x3d.HAnimJoint()
HAnimJoint235.setUSE("hanim_r_tarsal_distal_interphalangeal_5")

HAnimHumanoid31.addJoints(HAnimJoint235)
HAnimJoint236 = x3d.HAnimJoint()
HAnimJoint236.setUSE("hanim_vl5")

HAnimHumanoid31.addJoints(HAnimJoint236)
HAnimJoint237 = x3d.HAnimJoint()
HAnimJoint237.setUSE("hanim_vl4")

HAnimHumanoid31.addJoints(HAnimJoint237)
HAnimJoint238 = x3d.HAnimJoint()
HAnimJoint238.setUSE("hanim_vl3")

HAnimHumanoid31.addJoints(HAnimJoint238)
HAnimJoint239 = x3d.HAnimJoint()
HAnimJoint239.setUSE("hanim_vl2")

HAnimHumanoid31.addJoints(HAnimJoint239)
HAnimJoint240 = x3d.HAnimJoint()
HAnimJoint240.setUSE("hanim_vl1")

HAnimHumanoid31.addJoints(HAnimJoint240)
HAnimJoint241 = x3d.HAnimJoint()
HAnimJoint241.setUSE("hanim_vt12")

HAnimHumanoid31.addJoints(HAnimJoint241)
HAnimJoint242 = x3d.HAnimJoint()
HAnimJoint242.setUSE("hanim_vt11")

HAnimHumanoid31.addJoints(HAnimJoint242)
HAnimJoint243 = x3d.HAnimJoint()
HAnimJoint243.setUSE("hanim_vt10")

HAnimHumanoid31.addJoints(HAnimJoint243)
HAnimJoint244 = x3d.HAnimJoint()
HAnimJoint244.setUSE("hanim_vt9")

HAnimHumanoid31.addJoints(HAnimJoint244)
HAnimJoint245 = x3d.HAnimJoint()
HAnimJoint245.setUSE("hanim_vt8")

HAnimHumanoid31.addJoints(HAnimJoint245)
HAnimJoint246 = x3d.HAnimJoint()
HAnimJoint246.setUSE("hanim_vt7")

HAnimHumanoid31.addJoints(HAnimJoint246)
HAnimJoint247 = x3d.HAnimJoint()
HAnimJoint247.setUSE("hanim_vt6")

HAnimHumanoid31.addJoints(HAnimJoint247)
HAnimJoint248 = x3d.HAnimJoint()
HAnimJoint248.setUSE("hanim_vt5")

HAnimHumanoid31.addJoints(HAnimJoint248)
HAnimJoint249 = x3d.HAnimJoint()
HAnimJoint249.setUSE("hanim_vt4")

HAnimHumanoid31.addJoints(HAnimJoint249)
HAnimJoint250 = x3d.HAnimJoint()
HAnimJoint250.setUSE("hanim_vt3")

HAnimHumanoid31.addJoints(HAnimJoint250)
HAnimJoint251 = x3d.HAnimJoint()
HAnimJoint251.setUSE("hanim_vt2")

HAnimHumanoid31.addJoints(HAnimJoint251)
HAnimJoint252 = x3d.HAnimJoint()
HAnimJoint252.setUSE("hanim_vt1")

HAnimHumanoid31.addJoints(HAnimJoint252)
HAnimJoint253 = x3d.HAnimJoint()
HAnimJoint253.setUSE("hanim_vc7")

HAnimHumanoid31.addJoints(HAnimJoint253)
HAnimJoint254 = x3d.HAnimJoint()
HAnimJoint254.setUSE("hanim_vc6")

HAnimHumanoid31.addJoints(HAnimJoint254)
HAnimJoint255 = x3d.HAnimJoint()
HAnimJoint255.setUSE("hanim_vc5")

HAnimHumanoid31.addJoints(HAnimJoint255)
HAnimJoint256 = x3d.HAnimJoint()
HAnimJoint256.setUSE("hanim_vc4")

HAnimHumanoid31.addJoints(HAnimJoint256)
HAnimJoint257 = x3d.HAnimJoint()
HAnimJoint257.setUSE("hanim_vc3")

HAnimHumanoid31.addJoints(HAnimJoint257)
HAnimJoint258 = x3d.HAnimJoint()
HAnimJoint258.setUSE("hanim_vc2")

HAnimHumanoid31.addJoints(HAnimJoint258)
HAnimJoint259 = x3d.HAnimJoint()
HAnimJoint259.setUSE("hanim_vc1")

HAnimHumanoid31.addJoints(HAnimJoint259)
HAnimJoint260 = x3d.HAnimJoint()
HAnimJoint260.setUSE("hanim_skullbase")

HAnimHumanoid31.addJoints(HAnimJoint260)
HAnimJoint261 = x3d.HAnimJoint()
HAnimJoint261.setUSE("hanim_l_eyelid_joint")

HAnimHumanoid31.addJoints(HAnimJoint261)
HAnimJoint262 = x3d.HAnimJoint()
HAnimJoint262.setUSE("hanim_r_eyelid_joint")

HAnimHumanoid31.addJoints(HAnimJoint262)
HAnimJoint263 = x3d.HAnimJoint()
HAnimJoint263.setUSE("hanim_l_eyeball_joint")

HAnimHumanoid31.addJoints(HAnimJoint263)
HAnimJoint264 = x3d.HAnimJoint()
HAnimJoint264.setUSE("hanim_r_eyeball_joint")

HAnimHumanoid31.addJoints(HAnimJoint264)
HAnimJoint265 = x3d.HAnimJoint()
HAnimJoint265.setUSE("hanim_l_eyebrow_joint")

HAnimHumanoid31.addJoints(HAnimJoint265)
HAnimJoint266 = x3d.HAnimJoint()
HAnimJoint266.setUSE("hanim_r_eyebrow_joint")

HAnimHumanoid31.addJoints(HAnimJoint266)
HAnimJoint267 = x3d.HAnimJoint()
HAnimJoint267.setUSE("hanim_temporomandibular")

HAnimHumanoid31.addJoints(HAnimJoint267)
HAnimJoint268 = x3d.HAnimJoint()
HAnimJoint268.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid31.addJoints(HAnimJoint268)
HAnimJoint269 = x3d.HAnimJoint()
HAnimJoint269.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid31.addJoints(HAnimJoint269)
HAnimJoint270 = x3d.HAnimJoint()
HAnimJoint270.setUSE("hanim_l_shoulder")

HAnimHumanoid31.addJoints(HAnimJoint270)
HAnimJoint271 = x3d.HAnimJoint()
HAnimJoint271.setUSE("hanim_l_elbow")

HAnimHumanoid31.addJoints(HAnimJoint271)
HAnimJoint272 = x3d.HAnimJoint()
HAnimJoint272.setUSE("hanim_l_radiocarpal")

HAnimHumanoid31.addJoints(HAnimJoint272)
HAnimJoint273 = x3d.HAnimJoint()
HAnimJoint273.setUSE("hanim_l_midcarpal_1")

HAnimHumanoid31.addJoints(HAnimJoint273)
HAnimJoint274 = x3d.HAnimJoint()
HAnimJoint274.setUSE("hanim_l_carpometacarpal_1")

HAnimHumanoid31.addJoints(HAnimJoint274)
HAnimJoint275 = x3d.HAnimJoint()
HAnimJoint275.setUSE("hanim_l_metacarpophalangeal_1")

HAnimHumanoid31.addJoints(HAnimJoint275)
HAnimJoint276 = x3d.HAnimJoint()
HAnimJoint276.setUSE("hanim_l_carpal_interphalangeal_1")

HAnimHumanoid31.addJoints(HAnimJoint276)
HAnimJoint277 = x3d.HAnimJoint()
HAnimJoint277.setUSE("hanim_l_midcarpal_2")

HAnimHumanoid31.addJoints(HAnimJoint277)
HAnimJoint278 = x3d.HAnimJoint()
HAnimJoint278.setUSE("hanim_l_carpometacarpal_2")

HAnimHumanoid31.addJoints(HAnimJoint278)
HAnimJoint279 = x3d.HAnimJoint()
HAnimJoint279.setUSE("hanim_l_metacarpophalangeal_2")

HAnimHumanoid31.addJoints(HAnimJoint279)
HAnimJoint280 = x3d.HAnimJoint()
HAnimJoint280.setUSE("hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid31.addJoints(HAnimJoint280)
HAnimJoint281 = x3d.HAnimJoint()
HAnimJoint281.setUSE("hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid31.addJoints(HAnimJoint281)
HAnimJoint282 = x3d.HAnimJoint()
HAnimJoint282.setUSE("hanim_l_midcarpal_3")

HAnimHumanoid31.addJoints(HAnimJoint282)
HAnimJoint283 = x3d.HAnimJoint()
HAnimJoint283.setUSE("hanim_l_carpometacarpal_3")

HAnimHumanoid31.addJoints(HAnimJoint283)
HAnimJoint284 = x3d.HAnimJoint()
HAnimJoint284.setUSE("hanim_l_metacarpophalangeal_3")

HAnimHumanoid31.addJoints(HAnimJoint284)
HAnimJoint285 = x3d.HAnimJoint()
HAnimJoint285.setUSE("hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid31.addJoints(HAnimJoint285)
HAnimJoint286 = x3d.HAnimJoint()
HAnimJoint286.setUSE("hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid31.addJoints(HAnimJoint286)
HAnimJoint287 = x3d.HAnimJoint()
HAnimJoint287.setUSE("hanim_l_midcarpal_4_5")

HAnimHumanoid31.addJoints(HAnimJoint287)
HAnimJoint288 = x3d.HAnimJoint()
HAnimJoint288.setUSE("hanim_l_carpometacarpal_4")

HAnimHumanoid31.addJoints(HAnimJoint288)
HAnimJoint289 = x3d.HAnimJoint()
HAnimJoint289.setUSE("hanim_l_metacarpophalangeal_4")

HAnimHumanoid31.addJoints(HAnimJoint289)
HAnimJoint290 = x3d.HAnimJoint()
HAnimJoint290.setUSE("hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid31.addJoints(HAnimJoint290)
HAnimJoint291 = x3d.HAnimJoint()
HAnimJoint291.setUSE("hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid31.addJoints(HAnimJoint291)
HAnimJoint292 = x3d.HAnimJoint()
HAnimJoint292.setUSE("hanim_l_carpometacarpal_5")

HAnimHumanoid31.addJoints(HAnimJoint292)
HAnimJoint293 = x3d.HAnimJoint()
HAnimJoint293.setUSE("hanim_l_metacarpophalangeal_5")

HAnimHumanoid31.addJoints(HAnimJoint293)
HAnimJoint294 = x3d.HAnimJoint()
HAnimJoint294.setUSE("hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid31.addJoints(HAnimJoint294)
HAnimJoint295 = x3d.HAnimJoint()
HAnimJoint295.setUSE("hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid31.addJoints(HAnimJoint295)
HAnimJoint296 = x3d.HAnimJoint()
HAnimJoint296.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid31.addJoints(HAnimJoint296)
HAnimJoint297 = x3d.HAnimJoint()
HAnimJoint297.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid31.addJoints(HAnimJoint297)
HAnimJoint298 = x3d.HAnimJoint()
HAnimJoint298.setUSE("hanim_r_shoulder")

HAnimHumanoid31.addJoints(HAnimJoint298)
HAnimJoint299 = x3d.HAnimJoint()
HAnimJoint299.setUSE("hanim_r_elbow")

HAnimHumanoid31.addJoints(HAnimJoint299)
HAnimJoint300 = x3d.HAnimJoint()
HAnimJoint300.setUSE("hanim_r_radiocarpal")

HAnimHumanoid31.addJoints(HAnimJoint300)
HAnimJoint301 = x3d.HAnimJoint()
HAnimJoint301.setUSE("hanim_r_midcarpal_1")

HAnimHumanoid31.addJoints(HAnimJoint301)
HAnimJoint302 = x3d.HAnimJoint()
HAnimJoint302.setUSE("hanim_r_carpometacarpal_1")

HAnimHumanoid31.addJoints(HAnimJoint302)
HAnimJoint303 = x3d.HAnimJoint()
HAnimJoint303.setUSE("hanim_r_metacarpophalangeal_1")

HAnimHumanoid31.addJoints(HAnimJoint303)
HAnimJoint304 = x3d.HAnimJoint()
HAnimJoint304.setUSE("hanim_r_carpal_interphalangeal_1")

HAnimHumanoid31.addJoints(HAnimJoint304)
HAnimJoint305 = x3d.HAnimJoint()
HAnimJoint305.setUSE("hanim_r_midcarpal_2")

HAnimHumanoid31.addJoints(HAnimJoint305)
HAnimJoint306 = x3d.HAnimJoint()
HAnimJoint306.setUSE("hanim_r_carpometacarpal_2")

HAnimHumanoid31.addJoints(HAnimJoint306)
HAnimJoint307 = x3d.HAnimJoint()
HAnimJoint307.setUSE("hanim_r_metacarpophalangeal_2")

HAnimHumanoid31.addJoints(HAnimJoint307)
HAnimJoint308 = x3d.HAnimJoint()
HAnimJoint308.setUSE("hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid31.addJoints(HAnimJoint308)
HAnimJoint309 = x3d.HAnimJoint()
HAnimJoint309.setUSE("hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid31.addJoints(HAnimJoint309)
HAnimJoint310 = x3d.HAnimJoint()
HAnimJoint310.setUSE("hanim_r_midcarpal_3")

HAnimHumanoid31.addJoints(HAnimJoint310)
HAnimJoint311 = x3d.HAnimJoint()
HAnimJoint311.setUSE("hanim_r_carpometacarpal_3")

HAnimHumanoid31.addJoints(HAnimJoint311)
HAnimJoint312 = x3d.HAnimJoint()
HAnimJoint312.setUSE("hanim_r_metacarpophalangeal_3")

HAnimHumanoid31.addJoints(HAnimJoint312)
HAnimJoint313 = x3d.HAnimJoint()
HAnimJoint313.setUSE("hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid31.addJoints(HAnimJoint313)
HAnimJoint314 = x3d.HAnimJoint()
HAnimJoint314.setUSE("hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid31.addJoints(HAnimJoint314)
HAnimJoint315 = x3d.HAnimJoint()
HAnimJoint315.setUSE("hanim_r_midcarpal_4_5")

HAnimHumanoid31.addJoints(HAnimJoint315)
HAnimJoint316 = x3d.HAnimJoint()
HAnimJoint316.setUSE("hanim_r_carpometacarpal_4")

HAnimHumanoid31.addJoints(HAnimJoint316)
HAnimJoint317 = x3d.HAnimJoint()
HAnimJoint317.setUSE("hanim_r_metacarpophalangeal_4")

HAnimHumanoid31.addJoints(HAnimJoint317)
HAnimJoint318 = x3d.HAnimJoint()
HAnimJoint318.setUSE("hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid31.addJoints(HAnimJoint318)
HAnimJoint319 = x3d.HAnimJoint()
HAnimJoint319.setUSE("hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid31.addJoints(HAnimJoint319)
HAnimJoint320 = x3d.HAnimJoint()
HAnimJoint320.setUSE("hanim_r_carpometacarpal_5")

HAnimHumanoid31.addJoints(HAnimJoint320)
HAnimJoint321 = x3d.HAnimJoint()
HAnimJoint321.setUSE("hanim_r_metacarpophalangeal_5")

HAnimHumanoid31.addJoints(HAnimJoint321)
HAnimJoint322 = x3d.HAnimJoint()
HAnimJoint322.setUSE("hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid31.addJoints(HAnimJoint322)
HAnimJoint323 = x3d.HAnimJoint()
HAnimJoint323.setUSE("hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid31.addJoints(HAnimJoint323)

Scene11.addChildren(HAnimHumanoid31)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/JohnJoint2.new.python.x3d")
X3D0.toFileJSON("../data/JohnJoint2.new.python.json")
