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
meta3.setContent("JinScaledV2L1LOA4MinimumSkeleton20f.x3d")

head1.addMeta(meta3)

X3D0.setHead(head1)
Scene4 = x3d.Scene()
#https://www.web3d.org/documents/specifications/19774/V2.0/index.html
#0 0 0 at floor between feet, default I pose (relaxed attention) model gaze toward +Z, +x to model left, +y up, right-hand rule.
WorldInfo5 = x3d.WorldInfo()
WorldInfo5.setTitle("20f Jin v2 loa4 Level 1, Joints, Segments, Sites")

Scene4.addChildren(WorldInfo5)
Transform6 = x3d.Transform()
Transform6.setDEF("ContainerScene000")
Shape7 = x3d.Shape()
Shape7.setDEF("AxisLinesShape")
#Red +X, Green +Y, Blue +Z
IndexedLineSet8 = x3d.IndexedLineSet()
IndexedLineSet8.setColorIndex([0,1,2])
IndexedLineSet8.setColorPerVertex(False)
IndexedLineSet8.setCoordIndex([0,1,-1,0,2,-1,0,3,-1])
Color9 = x3d.Color()
Color9.setColor(x3d.doubleToFloat([1,0,0,0,0.6,0,0,0,1]))

IndexedLineSet8.setColor(Color9)
Coordinate10 = x3d.Coordinate()
Coordinate10.setPoint(x3d.doubleToFloat([0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]))

IndexedLineSet8.setCoord(Coordinate10)

Shape7.setGeometry(IndexedLineSet8)

Transform6.addChild(Shape7)

Scene4.addChildren(Transform6)
HAnimHumanoid11 = x3d.HAnimHumanoid()
HAnimHumanoid11.setName("JinLOA4S")
HAnimHumanoid11.setDEF("hanim_JinLOA4S")
HAnimHumanoid11.setLoa(4)
HAnimHumanoid11.setVersion("2.0")
HAnimJoint12 = x3d.HAnimJoint()
HAnimJoint12.setName("humanoid_root")
HAnimJoint12.setDEF("hanim_humanoid_root")
HAnimJoint12.setCenter(x3d.doubleToFloat([0,0.77,0]))
HAnimJoint12.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint12.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint12.setContainerFieldOverride("skeleton")
HAnimSegment13 = x3d.HAnimSegment()
HAnimSegment13.setName("sacrum")
HAnimSegment13.setDEF("hanim_sacrum")
Transform14 = x3d.Transform()
Transform14.setDEF("Humanoid000")
Shape15 = x3d.Shape()
Shape15.setUSE("AxisLinesShape")

Transform14.addChild(Shape15)

HAnimSegment13.addChildren(Transform14)

HAnimJoint12.addChildren(HAnimSegment13)
HAnimJoint16 = x3d.HAnimJoint()
HAnimJoint16.setName("sacroiliac")
HAnimJoint16.setDEF("hanim_sacroiliac")
HAnimJoint16.setCenter(x3d.doubleToFloat([0,0.826,0.02]))
HAnimJoint16.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint16.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment17 = x3d.HAnimSegment()
HAnimSegment17.setName("pelvis")
HAnimSegment17.setDEF("hanim_pelvis")
HAnimSite18 = x3d.HAnimSite()
HAnimSite18.setName("l_iliocristale")
HAnimSite18.setDEF("hanim_l_iliocristale_pt")
HAnimSite18.setTranslation(x3d.doubleToFloat([0.13,0.92,0.0035]))
TouchSensor19 = x3d.TouchSensor()
TouchSensor19.setDescription("HAnimSite 33 hanim_l_iliocristale_pt")

HAnimSite18.addChildren(TouchSensor19)
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance21.setMaterial(Material22)

Shape20.setAppearance(Appearance21)
IndexedFaceSet23 = x3d.IndexedFaceSet()
IndexedFaceSet23.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet23.setCreaseAngle(0.5)
IndexedFaceSet23.setSolid(False)
ColorRGBA24 = x3d.ColorRGBA()
ColorRGBA24.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet23.setColor(ColorRGBA24)
Coordinate25 = x3d.Coordinate()
Coordinate25.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet23.setCoord(Coordinate25)

Shape20.setGeometry(IndexedFaceSet23)

HAnimSite18.addChildren(Shape20)
Billboard26 = x3d.Billboard()
Billboard26.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape27 = x3d.Shape()
Text28 = x3d.Text()
Text28.setString(["33"])
FontStyle29 = x3d.FontStyle()
FontStyle29.setSize(0.035)

Text28.setFontStyle(FontStyle29)

Shape27.setGeometry(Text28)

Billboard26.addChildren(Shape27)

HAnimSite18.addChildren(Billboard26)

HAnimSegment17.addChildren(HAnimSite18)
HAnimSite30 = x3d.HAnimSite()
HAnimSite30.setName("r_iliocristale")
HAnimSite30.setDEF("hanim_r_iliocristale_pt")
HAnimSite30.setTranslation(x3d.doubleToFloat([-0.13,0.92,0.0035]))
TouchSensor31 = x3d.TouchSensor()
TouchSensor31.setDescription("HAnimSite 36 hanim_r_iliocristale_pt")

HAnimSite30.addChildren(TouchSensor31)
Shape32 = x3d.Shape()
Appearance33 = x3d.Appearance()
Material34 = x3d.Material()
Material34.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance33.setMaterial(Material34)

Shape32.setAppearance(Appearance33)
IndexedFaceSet35 = x3d.IndexedFaceSet()
IndexedFaceSet35.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet35.setCreaseAngle(0.5)
IndexedFaceSet35.setSolid(False)
ColorRGBA36 = x3d.ColorRGBA()
ColorRGBA36.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet35.setColor(ColorRGBA36)
Coordinate37 = x3d.Coordinate()
Coordinate37.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet35.setCoord(Coordinate37)

Shape32.setGeometry(IndexedFaceSet35)

HAnimSite30.addChildren(Shape32)
Billboard38 = x3d.Billboard()
Billboard38.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape39 = x3d.Shape()
Text40 = x3d.Text()
Text40.setString(["36"])
FontStyle41 = x3d.FontStyle()
FontStyle41.setSize(0.035)

Text40.setFontStyle(FontStyle41)

Shape39.setGeometry(Text40)

Billboard38.addChildren(Shape39)

HAnimSite30.addChildren(Billboard38)

HAnimSegment17.addChildren(HAnimSite30)
HAnimSite42 = x3d.HAnimSite()
HAnimSite42.setName("l_trochanterion")
HAnimSite42.setDEF("hanim_l_trochanterion_pt")
HAnimSite42.setTranslation(x3d.doubleToFloat([0.14,0.8,0.0035]))
TouchSensor43 = x3d.TouchSensor()
TouchSensor43.setDescription("HAnimSite 42 hanim_l_trochanterion_pt")

HAnimSite42.addChildren(TouchSensor43)
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Material46 = x3d.Material()
Material46.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance45.setMaterial(Material46)

Shape44.setAppearance(Appearance45)
IndexedFaceSet47 = x3d.IndexedFaceSet()
IndexedFaceSet47.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet47.setCreaseAngle(0.5)
IndexedFaceSet47.setSolid(False)
ColorRGBA48 = x3d.ColorRGBA()
ColorRGBA48.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet47.setColor(ColorRGBA48)
Coordinate49 = x3d.Coordinate()
Coordinate49.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet47.setCoord(Coordinate49)

Shape44.setGeometry(IndexedFaceSet47)

HAnimSite42.addChildren(Shape44)
Billboard50 = x3d.Billboard()
Billboard50.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape51 = x3d.Shape()
Text52 = x3d.Text()
Text52.setString(["42"])
FontStyle53 = x3d.FontStyle()
FontStyle53.setSize(0.035)

Text52.setFontStyle(FontStyle53)

Shape51.setGeometry(Text52)

Billboard50.addChildren(Shape51)

HAnimSite42.addChildren(Billboard50)

HAnimSegment17.addChildren(HAnimSite42)
HAnimSite54 = x3d.HAnimSite()
HAnimSite54.setName("r_trochanterion")
HAnimSite54.setDEF("hanim_r_trochanterion_pt")
HAnimSite54.setTranslation(x3d.doubleToFloat([-0.14,0.8,0.0035]))
TouchSensor55 = x3d.TouchSensor()
TouchSensor55.setDescription("HAnimSite 46 hanim_r_trochanterion_pt")

HAnimSite54.addChildren(TouchSensor55)
Shape56 = x3d.Shape()
Appearance57 = x3d.Appearance()
Material58 = x3d.Material()
Material58.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance57.setMaterial(Material58)

Shape56.setAppearance(Appearance57)
IndexedFaceSet59 = x3d.IndexedFaceSet()
IndexedFaceSet59.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet59.setCreaseAngle(0.5)
IndexedFaceSet59.setSolid(False)
ColorRGBA60 = x3d.ColorRGBA()
ColorRGBA60.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet59.setColor(ColorRGBA60)
Coordinate61 = x3d.Coordinate()
Coordinate61.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet59.setCoord(Coordinate61)

Shape56.setGeometry(IndexedFaceSet59)

HAnimSite54.addChildren(Shape56)
Billboard62 = x3d.Billboard()
Billboard62.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape63 = x3d.Shape()
Text64 = x3d.Text()
Text64.setString(["46"])
FontStyle65 = x3d.FontStyle()
FontStyle65.setSize(0.035)

Text64.setFontStyle(FontStyle65)

Shape63.setGeometry(Text64)

Billboard62.addChildren(Shape63)

HAnimSite54.addChildren(Billboard62)

HAnimSegment17.addChildren(HAnimSite54)
HAnimSite66 = x3d.HAnimSite()
HAnimSite66.setName("l_asis")
HAnimSite66.setDEF("hanim_l_asis_pt")
HAnimSite66.setTranslation(x3d.doubleToFloat([0.1,0.86,0.0035]))
TouchSensor67 = x3d.TouchSensor()
TouchSensor67.setDescription("HAnimSite 32 hanim_l_asis_pt")

HAnimSite66.addChildren(TouchSensor67)
Shape68 = x3d.Shape()
Appearance69 = x3d.Appearance()
Material70 = x3d.Material()
Material70.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance69.setMaterial(Material70)

Shape68.setAppearance(Appearance69)
IndexedFaceSet71 = x3d.IndexedFaceSet()
IndexedFaceSet71.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet71.setCreaseAngle(0.5)
IndexedFaceSet71.setSolid(False)
ColorRGBA72 = x3d.ColorRGBA()
ColorRGBA72.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet71.setColor(ColorRGBA72)
Coordinate73 = x3d.Coordinate()
Coordinate73.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet71.setCoord(Coordinate73)

Shape68.setGeometry(IndexedFaceSet71)

HAnimSite66.addChildren(Shape68)
Billboard74 = x3d.Billboard()
Billboard74.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape75 = x3d.Shape()
Text76 = x3d.Text()
Text76.setString(["32"])
FontStyle77 = x3d.FontStyle()
FontStyle77.setSize(0.035)

Text76.setFontStyle(FontStyle77)

Shape75.setGeometry(Text76)

Billboard74.addChildren(Shape75)

HAnimSite66.addChildren(Billboard74)

HAnimSegment17.addChildren(HAnimSite66)
HAnimSite78 = x3d.HAnimSite()
HAnimSite78.setName("r_asis")
HAnimSite78.setDEF("hanim_r_asis_pt")
HAnimSite78.setTranslation(x3d.doubleToFloat([-0.1,0.86,0.0035]))
TouchSensor79 = x3d.TouchSensor()
TouchSensor79.setDescription("HAnimSite 35 hanim_r_asis_pt")

HAnimSite78.addChildren(TouchSensor79)
Shape80 = x3d.Shape()
Appearance81 = x3d.Appearance()
Material82 = x3d.Material()
Material82.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance81.setMaterial(Material82)

Shape80.setAppearance(Appearance81)
IndexedFaceSet83 = x3d.IndexedFaceSet()
IndexedFaceSet83.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet83.setCreaseAngle(0.5)
IndexedFaceSet83.setSolid(False)
ColorRGBA84 = x3d.ColorRGBA()
ColorRGBA84.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet83.setColor(ColorRGBA84)
Coordinate85 = x3d.Coordinate()
Coordinate85.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet83.setCoord(Coordinate85)

Shape80.setGeometry(IndexedFaceSet83)

HAnimSite78.addChildren(Shape80)
Billboard86 = x3d.Billboard()
Billboard86.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape87 = x3d.Shape()
Text88 = x3d.Text()
Text88.setString(["35"])
FontStyle89 = x3d.FontStyle()
FontStyle89.setSize(0.035)

Text88.setFontStyle(FontStyle89)

Shape87.setGeometry(Text88)

Billboard86.addChildren(Shape87)

HAnimSite78.addChildren(Billboard86)

HAnimSegment17.addChildren(HAnimSite78)
HAnimSite90 = x3d.HAnimSite()
HAnimSite90.setName("l_psis")
HAnimSite90.setDEF("hanim_l_psis_pt")
HAnimSite90.setTranslation(x3d.doubleToFloat([0.05,0.84,-0.11]))
TouchSensor91 = x3d.TouchSensor()
TouchSensor91.setDescription("HAnimSite 34 hanim_l_psis_pt")

HAnimSite90.addChildren(TouchSensor91)
Shape92 = x3d.Shape()
Appearance93 = x3d.Appearance()
Material94 = x3d.Material()
Material94.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance93.setMaterial(Material94)

Shape92.setAppearance(Appearance93)
IndexedFaceSet95 = x3d.IndexedFaceSet()
IndexedFaceSet95.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet95.setCreaseAngle(0.5)
IndexedFaceSet95.setSolid(False)
ColorRGBA96 = x3d.ColorRGBA()
ColorRGBA96.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet95.setColor(ColorRGBA96)
Coordinate97 = x3d.Coordinate()
Coordinate97.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet95.setCoord(Coordinate97)

Shape92.setGeometry(IndexedFaceSet95)

HAnimSite90.addChildren(Shape92)
Billboard98 = x3d.Billboard()
Billboard98.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape99 = x3d.Shape()
Text100 = x3d.Text()
Text100.setString(["34"])
FontStyle101 = x3d.FontStyle()
FontStyle101.setSize(0.035)

Text100.setFontStyle(FontStyle101)

Shape99.setGeometry(Text100)

Billboard98.addChildren(Shape99)

HAnimSite90.addChildren(Billboard98)

HAnimSegment17.addChildren(HAnimSite90)
HAnimSite102 = x3d.HAnimSite()
HAnimSite102.setName("r_psis")
HAnimSite102.setDEF("hanim_r_psis_pt")
HAnimSite102.setTranslation(x3d.doubleToFloat([-0.05,0.84,-0.11]))
TouchSensor103 = x3d.TouchSensor()
TouchSensor103.setDescription("HAnimSite 37 hanim_r_psis_pt")

HAnimSite102.addChildren(TouchSensor103)
Shape104 = x3d.Shape()
Appearance105 = x3d.Appearance()
Material106 = x3d.Material()
Material106.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance105.setMaterial(Material106)

Shape104.setAppearance(Appearance105)
IndexedFaceSet107 = x3d.IndexedFaceSet()
IndexedFaceSet107.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet107.setCreaseAngle(0.5)
IndexedFaceSet107.setSolid(False)
ColorRGBA108 = x3d.ColorRGBA()
ColorRGBA108.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet107.setColor(ColorRGBA108)
Coordinate109 = x3d.Coordinate()
Coordinate109.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet107.setCoord(Coordinate109)

Shape104.setGeometry(IndexedFaceSet107)

HAnimSite102.addChildren(Shape104)
Billboard110 = x3d.Billboard()
Billboard110.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape111 = x3d.Shape()
Text112 = x3d.Text()
Text112.setString(["37"])
FontStyle113 = x3d.FontStyle()
FontStyle113.setSize(0.035)

Text112.setFontStyle(FontStyle113)

Shape111.setGeometry(Text112)

Billboard110.addChildren(Shape111)

HAnimSite102.addChildren(Billboard110)

HAnimSegment17.addChildren(HAnimSite102)
HAnimSite114 = x3d.HAnimSite()
HAnimSite114.setName("crotch")
HAnimSite114.setDEF("hanim_crotch_pt")
HAnimSite114.setTranslation(x3d.doubleToFloat([0,0.703,0]))
TouchSensor115 = x3d.TouchSensor()
TouchSensor115.setDescription("HAnimSite 38 hanim_crotch_pt")

HAnimSite114.addChildren(TouchSensor115)
Shape116 = x3d.Shape()
Appearance117 = x3d.Appearance()
Material118 = x3d.Material()
Material118.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance117.setMaterial(Material118)

Shape116.setAppearance(Appearance117)
IndexedFaceSet119 = x3d.IndexedFaceSet()
IndexedFaceSet119.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet119.setCreaseAngle(0.5)
IndexedFaceSet119.setSolid(False)
ColorRGBA120 = x3d.ColorRGBA()
ColorRGBA120.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet119.setColor(ColorRGBA120)
Coordinate121 = x3d.Coordinate()
Coordinate121.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet119.setCoord(Coordinate121)

Shape116.setGeometry(IndexedFaceSet119)

HAnimSite114.addChildren(Shape116)
Billboard122 = x3d.Billboard()
Billboard122.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape123 = x3d.Shape()
Text124 = x3d.Text()
Text124.setString(["38"])
FontStyle125 = x3d.FontStyle()
FontStyle125.setSize(0.035)

Text124.setFontStyle(FontStyle125)

Shape123.setGeometry(Text124)

Billboard122.addChildren(Shape123)

HAnimSite114.addChildren(Billboard122)

HAnimSegment17.addChildren(HAnimSite114)
HAnimSite126 = x3d.HAnimSite()
HAnimSite126.setName("buttocks_standing_wall_contact_point")
HAnimSite126.setDEF("hanim_buttocks_standing_wall_contact_point_pt")
HAnimSite126.setTranslation(x3d.doubleToFloat([0,0.8,-0.15]))
TouchSensor127 = x3d.TouchSensor()
TouchSensor127.setDescription("HAnimSite 93 hanim_buttocks_standing_wall_contact_point_pt")

HAnimSite126.addChildren(TouchSensor127)
Shape128 = x3d.Shape()
Appearance129 = x3d.Appearance()
Material130 = x3d.Material()
Material130.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance129.setMaterial(Material130)

Shape128.setAppearance(Appearance129)
IndexedFaceSet131 = x3d.IndexedFaceSet()
IndexedFaceSet131.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet131.setCreaseAngle(0.5)
IndexedFaceSet131.setSolid(False)
ColorRGBA132 = x3d.ColorRGBA()
ColorRGBA132.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet131.setColor(ColorRGBA132)
Coordinate133 = x3d.Coordinate()
Coordinate133.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet131.setCoord(Coordinate133)

Shape128.setGeometry(IndexedFaceSet131)

HAnimSite126.addChildren(Shape128)
Billboard134 = x3d.Billboard()
Billboard134.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape135 = x3d.Shape()
Text136 = x3d.Text()
Text136.setString(["93"])
FontStyle137 = x3d.FontStyle()
FontStyle137.setSize(0.035)

Text136.setFontStyle(FontStyle137)

Shape135.setGeometry(Text136)

Billboard134.addChildren(Shape135)

HAnimSite126.addChildren(Billboard134)

HAnimSegment17.addChildren(HAnimSite126)
Shape138 = x3d.Shape()
LineSet139 = x3d.LineSet()
LineSet139.setVertexCount([2])
ColorRGBA140 = x3d.ColorRGBA()
ColorRGBA140.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet139.setColor(ColorRGBA140)
Coordinate141 = x3d.Coordinate()
Coordinate141.setPoint(x3d.doubleToFloat([0,0.826,0.02,0,0.77,0]))

LineSet139.setCoord(Coordinate141)

Shape138.setGeometry(LineSet139)

HAnimSegment17.addChildren(Shape138)

HAnimJoint16.addChildren(HAnimSegment17)
HAnimJoint142 = x3d.HAnimJoint()
HAnimJoint142.setName("l_hip")
HAnimJoint142.setDEF("hanim_l_hip")
HAnimJoint142.setCenter(x3d.doubleToFloat([0.095,0.8266,-0.0183]))
HAnimJoint142.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint142.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment143 = x3d.HAnimSegment()
HAnimSegment143.setName("l_thigh")
HAnimSegment143.setDEF("hanim_l_thigh")
HAnimSite144 = x3d.HAnimSite()
HAnimSite144.setName("l_knee_crease")
HAnimSite144.setDEF("hanim_l_knee_crease_pt")
HAnimSite144.setTranslation(x3d.doubleToFloat([0.09,0.41,-0.056]))
TouchSensor145 = x3d.TouchSensor()
TouchSensor145.setDescription("HAnimSite 90 hanim_l_knee_crease_pt")

HAnimSite144.addChildren(TouchSensor145)
Shape146 = x3d.Shape()
Appearance147 = x3d.Appearance()
Material148 = x3d.Material()
Material148.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance147.setMaterial(Material148)

Shape146.setAppearance(Appearance147)
IndexedFaceSet149 = x3d.IndexedFaceSet()
IndexedFaceSet149.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet149.setCreaseAngle(0.5)
IndexedFaceSet149.setSolid(False)
ColorRGBA150 = x3d.ColorRGBA()
ColorRGBA150.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet149.setColor(ColorRGBA150)
Coordinate151 = x3d.Coordinate()
Coordinate151.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet149.setCoord(Coordinate151)

Shape146.setGeometry(IndexedFaceSet149)

HAnimSite144.addChildren(Shape146)
Billboard152 = x3d.Billboard()
Billboard152.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape153 = x3d.Shape()
Text154 = x3d.Text()
Text154.setString(["90"])
FontStyle155 = x3d.FontStyle()
FontStyle155.setSize(0.035)

Text154.setFontStyle(FontStyle155)

Shape153.setGeometry(Text154)

Billboard152.addChildren(Shape153)

HAnimSite144.addChildren(Billboard152)

HAnimSegment143.addChildren(HAnimSite144)
HAnimSite156 = x3d.HAnimSite()
HAnimSite156.setName("l_femoral_medial_epicondyle")
HAnimSite156.setDEF("hanim_l_femoral_medial_epicondyle_pt")
HAnimSite156.setTranslation(x3d.doubleToFloat([0.039,0.41,-0.01]))
TouchSensor157 = x3d.TouchSensor()
TouchSensor157.setDescription("HAnimSite 40 hanim_l_femoral_medial_epicondyle_pt")

HAnimSite156.addChildren(TouchSensor157)
Shape158 = x3d.Shape()
Appearance159 = x3d.Appearance()
Material160 = x3d.Material()
Material160.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance159.setMaterial(Material160)

Shape158.setAppearance(Appearance159)
IndexedFaceSet161 = x3d.IndexedFaceSet()
IndexedFaceSet161.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet161.setCreaseAngle(0.5)
IndexedFaceSet161.setSolid(False)
ColorRGBA162 = x3d.ColorRGBA()
ColorRGBA162.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet161.setColor(ColorRGBA162)
Coordinate163 = x3d.Coordinate()
Coordinate163.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet161.setCoord(Coordinate163)

Shape158.setGeometry(IndexedFaceSet161)

HAnimSite156.addChildren(Shape158)
Billboard164 = x3d.Billboard()
Billboard164.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape165 = x3d.Shape()
Text166 = x3d.Text()
Text166.setString(["40"])
FontStyle167 = x3d.FontStyle()
FontStyle167.setSize(0.035)

Text166.setFontStyle(FontStyle167)

Shape165.setGeometry(Text166)

Billboard164.addChildren(Shape165)

HAnimSite156.addChildren(Billboard164)

HAnimSegment143.addChildren(HAnimSite156)
HAnimSite168 = x3d.HAnimSite()
HAnimSite168.setName("l_femoral_lateral_epicondyle")
HAnimSite168.setDEF("hanim_l_femoral_lateral_epicondyle_pt")
HAnimSite168.setTranslation(x3d.doubleToFloat([0.127,0.41,-0.01]))
TouchSensor169 = x3d.TouchSensor()
TouchSensor169.setDescription("HAnimSite 39 hanim_l_femoral_lateral_epicondyle_pt")

HAnimSite168.addChildren(TouchSensor169)
Shape170 = x3d.Shape()
Appearance171 = x3d.Appearance()
Material172 = x3d.Material()
Material172.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance171.setMaterial(Material172)

Shape170.setAppearance(Appearance171)
IndexedFaceSet173 = x3d.IndexedFaceSet()
IndexedFaceSet173.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet173.setCreaseAngle(0.5)
IndexedFaceSet173.setSolid(False)
ColorRGBA174 = x3d.ColorRGBA()
ColorRGBA174.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet173.setColor(ColorRGBA174)
Coordinate175 = x3d.Coordinate()
Coordinate175.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet173.setCoord(Coordinate175)

Shape170.setGeometry(IndexedFaceSet173)

HAnimSite168.addChildren(Shape170)
Billboard176 = x3d.Billboard()
Billboard176.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape177 = x3d.Shape()
Text178 = x3d.Text()
Text178.setString(["39"])
FontStyle179 = x3d.FontStyle()
FontStyle179.setSize(0.035)

Text178.setFontStyle(FontStyle179)

Shape177.setGeometry(Text178)

Billboard176.addChildren(Shape177)

HAnimSite168.addChildren(Billboard176)

HAnimSegment143.addChildren(HAnimSite168)
HAnimSite180 = x3d.HAnimSite()
HAnimSite180.setName("l_suprapatella")
HAnimSite180.setDEF("hanim_l_suprapatella_pt")
HAnimSite180.setTranslation(x3d.doubleToFloat([0.085,0.41,0.042]))
TouchSensor181 = x3d.TouchSensor()
TouchSensor181.setDescription("HAnimSite 41 hanim_l_suprapatella_pt")

HAnimSite180.addChildren(TouchSensor181)
Shape182 = x3d.Shape()
Appearance183 = x3d.Appearance()
Material184 = x3d.Material()
Material184.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance183.setMaterial(Material184)

Shape182.setAppearance(Appearance183)
IndexedFaceSet185 = x3d.IndexedFaceSet()
IndexedFaceSet185.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet185.setCreaseAngle(0.5)
IndexedFaceSet185.setSolid(False)
ColorRGBA186 = x3d.ColorRGBA()
ColorRGBA186.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet185.setColor(ColorRGBA186)
Coordinate187 = x3d.Coordinate()
Coordinate187.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet185.setCoord(Coordinate187)

Shape182.setGeometry(IndexedFaceSet185)

HAnimSite180.addChildren(Shape182)
Billboard188 = x3d.Billboard()
Billboard188.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape189 = x3d.Shape()
Text190 = x3d.Text()
Text190.setString(["41"])
FontStyle191 = x3d.FontStyle()
FontStyle191.setSize(0.035)

Text190.setFontStyle(FontStyle191)

Shape189.setGeometry(Text190)

Billboard188.addChildren(Shape189)

HAnimSite180.addChildren(Billboard188)

HAnimSegment143.addChildren(HAnimSite180)
Shape192 = x3d.Shape()
LineSet193 = x3d.LineSet()
LineSet193.setVertexCount([2])
ColorRGBA194 = x3d.ColorRGBA()
ColorRGBA194.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet193.setColor(ColorRGBA194)
Coordinate195 = x3d.Coordinate()
Coordinate195.setPoint(x3d.doubleToFloat([0.095,0.8266,-0.0183,0,0.826,0.02]))

LineSet193.setCoord(Coordinate195)

Shape192.setGeometry(LineSet193)

HAnimSegment143.addChildren(Shape192)

HAnimJoint142.addChildren(HAnimSegment143)
HAnimJoint196 = x3d.HAnimJoint()
HAnimJoint196.setName("l_knee")
HAnimJoint196.setDEF("hanim_l_knee")
HAnimJoint196.setCenter(x3d.doubleToFloat([0.0926,0.4088,-0.01944]))
HAnimJoint196.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint196.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment197 = x3d.HAnimSegment()
HAnimSegment197.setName("l_calf")
HAnimSegment197.setDEF("hanim_l_calf")
HAnimSite198 = x3d.HAnimSite()
HAnimSite198.setName("l_tibiale")
HAnimSite198.setDEF("hanim_l_tibiale_pt")
HAnimSite198.setTranslation(x3d.doubleToFloat([0.09,0.31,0.038]))
TouchSensor199 = x3d.TouchSensor()
TouchSensor199.setDescription("HAnimSite 47 hanim_l_tibiale_pt")

HAnimSite198.addChildren(TouchSensor199)
Shape200 = x3d.Shape()
Appearance201 = x3d.Appearance()
Material202 = x3d.Material()
Material202.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance201.setMaterial(Material202)

Shape200.setAppearance(Appearance201)
IndexedFaceSet203 = x3d.IndexedFaceSet()
IndexedFaceSet203.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet203.setCreaseAngle(0.5)
IndexedFaceSet203.setSolid(False)
ColorRGBA204 = x3d.ColorRGBA()
ColorRGBA204.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet203.setColor(ColorRGBA204)
Coordinate205 = x3d.Coordinate()
Coordinate205.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet203.setCoord(Coordinate205)

Shape200.setGeometry(IndexedFaceSet203)

HAnimSite198.addChildren(Shape200)
Billboard206 = x3d.Billboard()
Billboard206.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape207 = x3d.Shape()
Text208 = x3d.Text()
Text208.setString(["47"])
FontStyle209 = x3d.FontStyle()
FontStyle209.setSize(0.035)

Text208.setFontStyle(FontStyle209)

Shape207.setGeometry(Text208)

Billboard206.addChildren(Shape207)

HAnimSite198.addChildren(Billboard206)

HAnimSegment197.addChildren(HAnimSite198)
HAnimSite210 = x3d.HAnimSite()
HAnimSite210.setName("l_medial_malleolus")
HAnimSite210.setDEF("hanim_l_medial_malleolus_pt")
HAnimSite210.setTranslation(x3d.doubleToFloat([0.061,0.095,-0.02]))
TouchSensor211 = x3d.TouchSensor()
TouchSensor211.setDescription("HAnimSite 48 hanim_l_medial_malleolus_pt")

HAnimSite210.addChildren(TouchSensor211)
Shape212 = x3d.Shape()
Appearance213 = x3d.Appearance()
Material214 = x3d.Material()
Material214.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance213.setMaterial(Material214)

Shape212.setAppearance(Appearance213)
IndexedFaceSet215 = x3d.IndexedFaceSet()
IndexedFaceSet215.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet215.setCreaseAngle(0.5)
IndexedFaceSet215.setSolid(False)
ColorRGBA216 = x3d.ColorRGBA()
ColorRGBA216.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet215.setColor(ColorRGBA216)
Coordinate217 = x3d.Coordinate()
Coordinate217.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet215.setCoord(Coordinate217)

Shape212.setGeometry(IndexedFaceSet215)

HAnimSite210.addChildren(Shape212)
Billboard218 = x3d.Billboard()
Billboard218.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape219 = x3d.Shape()
Text220 = x3d.Text()
Text220.setString(["48"])
FontStyle221 = x3d.FontStyle()
FontStyle221.setSize(0.035)

Text220.setFontStyle(FontStyle221)

Shape219.setGeometry(Text220)

Billboard218.addChildren(Shape219)

HAnimSite210.addChildren(Billboard218)

HAnimSegment197.addChildren(HAnimSite210)
HAnimSite222 = x3d.HAnimSite()
HAnimSite222.setName("l_lateral_malleolus")
HAnimSite222.setDEF("hanim_l_lateral_malleolus_pt")
HAnimSite222.setTranslation(x3d.doubleToFloat([0.12,0.095,-0.02]))
TouchSensor223 = x3d.TouchSensor()
TouchSensor223.setDescription("HAnimSite 49 hanim_l_lateral_malleolus_pt")

HAnimSite222.addChildren(TouchSensor223)
Shape224 = x3d.Shape()
Appearance225 = x3d.Appearance()
Material226 = x3d.Material()
Material226.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance225.setMaterial(Material226)

Shape224.setAppearance(Appearance225)
IndexedFaceSet227 = x3d.IndexedFaceSet()
IndexedFaceSet227.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet227.setCreaseAngle(0.5)
IndexedFaceSet227.setSolid(False)
ColorRGBA228 = x3d.ColorRGBA()
ColorRGBA228.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet227.setColor(ColorRGBA228)
Coordinate229 = x3d.Coordinate()
Coordinate229.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet227.setCoord(Coordinate229)

Shape224.setGeometry(IndexedFaceSet227)

HAnimSite222.addChildren(Shape224)
Billboard230 = x3d.Billboard()
Billboard230.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape231 = x3d.Shape()
Text232 = x3d.Text()
Text232.setString(["49"])
FontStyle233 = x3d.FontStyle()
FontStyle233.setSize(0.035)

Text232.setFontStyle(FontStyle233)

Shape231.setGeometry(Text232)

Billboard230.addChildren(Shape231)

HAnimSite222.addChildren(Billboard230)

HAnimSegment197.addChildren(HAnimSite222)
Shape234 = x3d.Shape()
LineSet235 = x3d.LineSet()
LineSet235.setVertexCount([2])
ColorRGBA236 = x3d.ColorRGBA()
ColorRGBA236.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet235.setColor(ColorRGBA236)
Coordinate237 = x3d.Coordinate()
Coordinate237.setPoint(x3d.doubleToFloat([0.0926,0.4088,-0.01944,0.095,0.8266,-0.0183]))

LineSet235.setCoord(Coordinate237)

Shape234.setGeometry(LineSet235)

HAnimSegment197.addChildren(Shape234)

HAnimJoint196.addChildren(HAnimSegment197)
HAnimJoint238 = x3d.HAnimJoint()
HAnimJoint238.setName("l_talocrural")
HAnimJoint238.setDEF("hanim_l_talocrural")
HAnimJoint238.setCenter(x3d.doubleToFloat([0.0888,0.09545,-0.01045]))
HAnimJoint238.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint238.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment239 = x3d.HAnimSegment()
HAnimSegment239.setName("l_talus")
HAnimSegment239.setDEF("hanim_l_talus")
HAnimSite240 = x3d.HAnimSite()
HAnimSite240.setName("l_sphyrion")
HAnimSite240.setDEF("hanim_l_sphyrion_pt")
HAnimSite240.setTranslation(x3d.doubleToFloat([0.054,0.065,-0.02]))
TouchSensor241 = x3d.TouchSensor()
TouchSensor241.setDescription("HAnimSite 50 hanim_l_sphyrion_pt")

HAnimSite240.addChildren(TouchSensor241)
Shape242 = x3d.Shape()
Appearance243 = x3d.Appearance()
Material244 = x3d.Material()
Material244.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance243.setMaterial(Material244)

Shape242.setAppearance(Appearance243)
IndexedFaceSet245 = x3d.IndexedFaceSet()
IndexedFaceSet245.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet245.setCreaseAngle(0.5)
IndexedFaceSet245.setSolid(False)
ColorRGBA246 = x3d.ColorRGBA()
ColorRGBA246.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet245.setColor(ColorRGBA246)
Coordinate247 = x3d.Coordinate()
Coordinate247.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet245.setCoord(Coordinate247)

Shape242.setGeometry(IndexedFaceSet245)

HAnimSite240.addChildren(Shape242)
Billboard248 = x3d.Billboard()
Billboard248.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape249 = x3d.Shape()
Text250 = x3d.Text()
Text250.setString(["50"])
FontStyle251 = x3d.FontStyle()
FontStyle251.setSize(0.035)

Text250.setFontStyle(FontStyle251)

Shape249.setGeometry(Text250)

Billboard248.addChildren(Shape249)

HAnimSite240.addChildren(Billboard248)

HAnimSegment239.addChildren(HAnimSite240)
HAnimSite252 = x3d.HAnimSite()
HAnimSite252.setName("l_calcaneus_posterior")
HAnimSite252.setDEF("hanim_l_calcaneus_posterior_pt")
HAnimSite252.setTranslation(x3d.doubleToFloat([0.09,0.03,-0.06]))
TouchSensor253 = x3d.TouchSensor()
TouchSensor253.setDescription("HAnimSite 58 hanim_l_calcaneus_posterior_pt")

HAnimSite252.addChildren(TouchSensor253)
Shape254 = x3d.Shape()
Appearance255 = x3d.Appearance()
Material256 = x3d.Material()
Material256.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance255.setMaterial(Material256)

Shape254.setAppearance(Appearance255)
IndexedFaceSet257 = x3d.IndexedFaceSet()
IndexedFaceSet257.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet257.setCreaseAngle(0.5)
IndexedFaceSet257.setSolid(False)
ColorRGBA258 = x3d.ColorRGBA()
ColorRGBA258.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet257.setColor(ColorRGBA258)
Coordinate259 = x3d.Coordinate()
Coordinate259.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet257.setCoord(Coordinate259)

Shape254.setGeometry(IndexedFaceSet257)

HAnimSite252.addChildren(Shape254)
Billboard260 = x3d.Billboard()
Billboard260.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape261 = x3d.Shape()
Text262 = x3d.Text()
Text262.setString(["58"])
FontStyle263 = x3d.FontStyle()
FontStyle263.setSize(0.035)

Text262.setFontStyle(FontStyle263)

Shape261.setGeometry(Text262)

Billboard260.addChildren(Shape261)

HAnimSite252.addChildren(Billboard260)

HAnimSegment239.addChildren(HAnimSite252)
Shape264 = x3d.Shape()
LineSet265 = x3d.LineSet()
LineSet265.setVertexCount([2])
ColorRGBA266 = x3d.ColorRGBA()
ColorRGBA266.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet265.setColor(ColorRGBA266)
Coordinate267 = x3d.Coordinate()
Coordinate267.setPoint(x3d.doubleToFloat([0.0888,0.09545,-0.01045,0.0926,0.4088,-0.01944]))

LineSet265.setCoord(Coordinate267)

Shape264.setGeometry(LineSet265)

HAnimSegment239.addChildren(Shape264)

HAnimJoint238.addChildren(HAnimSegment239)
HAnimJoint268 = x3d.HAnimJoint()
HAnimJoint268.setName("l_talocalcaneonavicular")
HAnimJoint268.setDEF("hanim_l_talocalcaneonavicular")
HAnimJoint268.setCenter(x3d.doubleToFloat([0.0783,0.0369,0.0049]))
HAnimJoint268.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint268.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment269 = x3d.HAnimSegment()
HAnimSegment269.setName("l_navicular")
HAnimSegment269.setDEF("hanim_l_navicular")
Shape270 = x3d.Shape()
LineSet271 = x3d.LineSet()
LineSet271.setVertexCount([2])
ColorRGBA272 = x3d.ColorRGBA()
ColorRGBA272.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet271.setColor(ColorRGBA272)
Coordinate273 = x3d.Coordinate()
Coordinate273.setPoint(x3d.doubleToFloat([0.0783,0.0369,0.0049,0.0888,0.09545,-0.01045]))

LineSet271.setCoord(Coordinate273)

Shape270.setGeometry(LineSet271)

HAnimSegment269.addChildren(Shape270)

HAnimJoint268.addChildren(HAnimSegment269)
HAnimJoint274 = x3d.HAnimJoint()
HAnimJoint274.setName("l_cuneonavicular_1")
HAnimJoint274.setDEF("hanim_l_cuneonavicular_1")
HAnimJoint274.setCenter(x3d.doubleToFloat([0.0674,0.0321,0.0184]))
HAnimJoint274.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint274.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment275 = x3d.HAnimSegment()
HAnimSegment275.setName("l_cuneiform_1")
HAnimSegment275.setDEF("hanim_l_cuneiform_1")
Shape276 = x3d.Shape()
LineSet277 = x3d.LineSet()
LineSet277.setVertexCount([2])
ColorRGBA278 = x3d.ColorRGBA()
ColorRGBA278.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet277.setColor(ColorRGBA278)
Coordinate279 = x3d.Coordinate()
Coordinate279.setPoint(x3d.doubleToFloat([0.0674,0.0321,0.0184,0.0783,0.0369,0.0049]))

LineSet277.setCoord(Coordinate279)

Shape276.setGeometry(LineSet277)

HAnimSegment275.addChildren(Shape276)

HAnimJoint274.addChildren(HAnimSegment275)
HAnimJoint280 = x3d.HAnimJoint()
HAnimJoint280.setName("l_tarsometatarsal_1")
HAnimJoint280.setDEF("hanim_l_tarsometatarsal_1")
HAnimJoint280.setCenter(x3d.doubleToFloat([0.0646,0.02324,0.0442]))
HAnimJoint280.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint280.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment281 = x3d.HAnimSegment()
HAnimSegment281.setName("l_metatarsal_1")
HAnimSegment281.setDEF("hanim_l_metatarsal_1")
Shape282 = x3d.Shape()
LineSet283 = x3d.LineSet()
LineSet283.setVertexCount([2])
ColorRGBA284 = x3d.ColorRGBA()
ColorRGBA284.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet283.setColor(ColorRGBA284)
Coordinate285 = x3d.Coordinate()
Coordinate285.setPoint(x3d.doubleToFloat([0.0646,0.02324,0.0442,0.0674,0.0321,0.0184]))

LineSet283.setCoord(Coordinate285)

Shape282.setGeometry(LineSet283)

HAnimSegment281.addChildren(Shape282)

HAnimJoint280.addChildren(HAnimSegment281)
HAnimJoint286 = x3d.HAnimJoint()
HAnimJoint286.setName("l_metatarsophalangeal_1")
HAnimJoint286.setDEF("hanim_l_metatarsophalangeal_1")
HAnimJoint286.setCenter(x3d.doubleToFloat([0.0621,0.01442,0.0936]))
HAnimJoint286.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint286.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment287 = x3d.HAnimSegment()
HAnimSegment287.setName("l_tarsal_proximal_phalanx_1")
HAnimSegment287.setDEF("hanim_l_tarsal_proximal_phalanx_1")
HAnimSite288 = x3d.HAnimSite()
HAnimSite288.setName("l_metatarsal_phalanx_1")
HAnimSite288.setDEF("hanim_l_metatarsal_phalanx_1_pt")
HAnimSite288.setTranslation(x3d.doubleToFloat([0.062,0.012,0.1]))
TouchSensor289 = x3d.TouchSensor()
TouchSensor289.setDescription("HAnimSite 55 hanim_l_metatarsal_phalanx_1_pt")

HAnimSite288.addChildren(TouchSensor289)
Shape290 = x3d.Shape()
Appearance291 = x3d.Appearance()
Material292 = x3d.Material()
Material292.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance291.setMaterial(Material292)

Shape290.setAppearance(Appearance291)
IndexedFaceSet293 = x3d.IndexedFaceSet()
IndexedFaceSet293.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet293.setCreaseAngle(0.5)
IndexedFaceSet293.setSolid(False)
ColorRGBA294 = x3d.ColorRGBA()
ColorRGBA294.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet293.setColor(ColorRGBA294)
Coordinate295 = x3d.Coordinate()
Coordinate295.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet293.setCoord(Coordinate295)

Shape290.setGeometry(IndexedFaceSet293)

HAnimSite288.addChildren(Shape290)
Billboard296 = x3d.Billboard()
Billboard296.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape297 = x3d.Shape()
Text298 = x3d.Text()
Text298.setString(["55"])
FontStyle299 = x3d.FontStyle()
FontStyle299.setSize(0.035)

Text298.setFontStyle(FontStyle299)

Shape297.setGeometry(Text298)

Billboard296.addChildren(Shape297)

HAnimSite288.addChildren(Billboard296)

HAnimSegment287.addChildren(HAnimSite288)
Shape300 = x3d.Shape()
LineSet301 = x3d.LineSet()
LineSet301.setVertexCount([2])
ColorRGBA302 = x3d.ColorRGBA()
ColorRGBA302.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet301.setColor(ColorRGBA302)
Coordinate303 = x3d.Coordinate()
Coordinate303.setPoint(x3d.doubleToFloat([0.0621,0.01442,0.0936,0.0646,0.02324,0.0442]))

LineSet301.setCoord(Coordinate303)

Shape300.setGeometry(LineSet301)

HAnimSegment287.addChildren(Shape300)

HAnimJoint286.addChildren(HAnimSegment287)
HAnimJoint304 = x3d.HAnimJoint()
HAnimJoint304.setName("l_tarsal_interphalangeal_1")
HAnimJoint304.setDEF("hanim_l_tarsal_interphalangeal_1")
HAnimJoint304.setCenter(x3d.doubleToFloat([0.062,0.012,0.115]))
HAnimJoint304.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint304.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment305 = x3d.HAnimSegment()
HAnimSegment305.setName("l_tarsal_distal_phalanx_1")
HAnimSegment305.setDEF("hanim_l_tarsal_distal_phalanx_1")
HAnimSite306 = x3d.HAnimSite()
HAnimSite306.setName("l_tarsal_distal_phalanx_1")
HAnimSite306.setDEF("hanim_l_tarsal_distal_phalanx_1_tip")
HAnimSite306.setTranslation(x3d.doubleToFloat([0.062,0.012,0.134]))
TouchSensor307 = x3d.TouchSensor()
TouchSensor307.setDescription("HAnimSite 111 hanim_l_tarsal_distal_phalanx_1_tip")

HAnimSite306.addChildren(TouchSensor307)
Shape308 = x3d.Shape()
Appearance309 = x3d.Appearance()
Material310 = x3d.Material()
Material310.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance309.setMaterial(Material310)

Shape308.setAppearance(Appearance309)
IndexedFaceSet311 = x3d.IndexedFaceSet()
IndexedFaceSet311.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet311.setCreaseAngle(0.5)
IndexedFaceSet311.setSolid(False)
ColorRGBA312 = x3d.ColorRGBA()
ColorRGBA312.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet311.setColor(ColorRGBA312)
Coordinate313 = x3d.Coordinate()
Coordinate313.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet311.setCoord(Coordinate313)

Shape308.setGeometry(IndexedFaceSet311)

HAnimSite306.addChildren(Shape308)
Billboard314 = x3d.Billboard()
Billboard314.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape315 = x3d.Shape()
Text316 = x3d.Text()
Text316.setString(["111"])
FontStyle317 = x3d.FontStyle()
FontStyle317.setSize(0.035)

Text316.setFontStyle(FontStyle317)

Shape315.setGeometry(Text316)

Billboard314.addChildren(Shape315)

HAnimSite306.addChildren(Billboard314)

HAnimSegment305.addChildren(HAnimSite306)
Shape318 = x3d.Shape()
LineSet319 = x3d.LineSet()
LineSet319.setVertexCount([2])
ColorRGBA320 = x3d.ColorRGBA()
ColorRGBA320.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet319.setColor(ColorRGBA320)
Coordinate321 = x3d.Coordinate()
Coordinate321.setPoint(x3d.doubleToFloat([0.062,0.012,0.115,0.0621,0.01442,0.0936]))

LineSet319.setCoord(Coordinate321)

Shape318.setGeometry(LineSet319)

HAnimSegment305.addChildren(Shape318)

HAnimJoint304.addChildren(HAnimSegment305)

HAnimJoint286.addChildren(HAnimJoint304)

HAnimJoint280.addChildren(HAnimJoint286)

HAnimJoint274.addChildren(HAnimJoint280)

HAnimJoint268.addChildren(HAnimJoint274)
HAnimJoint322 = x3d.HAnimJoint()
HAnimJoint322.setName("l_cuneonavicular_2")
HAnimJoint322.setDEF("hanim_l_cuneonavicular_2")
HAnimJoint322.setCenter(x3d.doubleToFloat([0.0814,0.0335,0.02143]))
HAnimJoint322.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint322.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment323 = x3d.HAnimSegment()
HAnimSegment323.setName("l_cuneiform_2")
HAnimSegment323.setDEF("hanim_l_cuneiform_2")
Shape324 = x3d.Shape()
LineSet325 = x3d.LineSet()
LineSet325.setVertexCount([2])
ColorRGBA326 = x3d.ColorRGBA()
ColorRGBA326.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet325.setColor(ColorRGBA326)
Coordinate327 = x3d.Coordinate()
Coordinate327.setPoint(x3d.doubleToFloat([0.0814,0.0335,0.02143,0.0783,0.0369,0.0049]))

LineSet325.setCoord(Coordinate327)

Shape324.setGeometry(LineSet325)

HAnimSegment323.addChildren(Shape324)

HAnimJoint322.addChildren(HAnimSegment323)
HAnimJoint328 = x3d.HAnimJoint()
HAnimJoint328.setName("l_tarsometatarsal_2")
HAnimJoint328.setDEF("hanim_l_tarsometatarsal_2")
HAnimJoint328.setCenter(x3d.doubleToFloat([0.0802,0.0261,0.0411]))
HAnimJoint328.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint328.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment329 = x3d.HAnimSegment()
HAnimSegment329.setName("l_metatarsal_2")
HAnimSegment329.setDEF("hanim_l_metatarsal_2")
Shape330 = x3d.Shape()
LineSet331 = x3d.LineSet()
LineSet331.setVertexCount([2])
ColorRGBA332 = x3d.ColorRGBA()
ColorRGBA332.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet331.setColor(ColorRGBA332)
Coordinate333 = x3d.Coordinate()
Coordinate333.setPoint(x3d.doubleToFloat([0.0802,0.0261,0.0411,0.0814,0.0335,0.02143]))

LineSet331.setCoord(Coordinate333)

Shape330.setGeometry(LineSet331)

HAnimSegment329.addChildren(Shape330)

HAnimJoint328.addChildren(HAnimSegment329)
HAnimJoint334 = x3d.HAnimJoint()
HAnimJoint334.setName("l_metatarsophalangeal_2")
HAnimJoint334.setDEF("hanim_l_metatarsophalangeal_2")
HAnimJoint334.setCenter(x3d.doubleToFloat([0.0825,0.01497,0.09783]))
HAnimJoint334.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint334.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment335 = x3d.HAnimSegment()
HAnimSegment335.setName("l_tarsal_proximal_phalanx_2")
HAnimSegment335.setDEF("hanim_l_tarsal_proximal_phalanx_2")
Shape336 = x3d.Shape()
LineSet337 = x3d.LineSet()
LineSet337.setVertexCount([2])
ColorRGBA338 = x3d.ColorRGBA()
ColorRGBA338.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet337.setColor(ColorRGBA338)
Coordinate339 = x3d.Coordinate()
Coordinate339.setPoint(x3d.doubleToFloat([0.0825,0.01497,0.09783,0.0802,0.0261,0.0411]))

LineSet337.setCoord(Coordinate339)

Shape336.setGeometry(LineSet337)

HAnimSegment335.addChildren(Shape336)

HAnimJoint334.addChildren(HAnimSegment335)
HAnimJoint340 = x3d.HAnimJoint()
HAnimJoint340.setName("l_tarsal_proximal_interphalangeal_2")
HAnimJoint340.setDEF("hanim_l_tarsal_proximal_interphalangeal_2")
HAnimJoint340.setCenter(x3d.doubleToFloat([0.0843,0.01265,0.114]))
HAnimJoint340.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint340.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment341 = x3d.HAnimSegment()
HAnimSegment341.setName("l_tarsal_middle_phalanx_2")
HAnimSegment341.setDEF("hanim_l_tarsal_middle_phalanx_2")
Shape342 = x3d.Shape()
LineSet343 = x3d.LineSet()
LineSet343.setVertexCount([2])
ColorRGBA344 = x3d.ColorRGBA()
ColorRGBA344.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet343.setColor(ColorRGBA344)
Coordinate345 = x3d.Coordinate()
Coordinate345.setPoint(x3d.doubleToFloat([0.0843,0.01265,0.114,0.0825,0.01497,0.09783]))

LineSet343.setCoord(Coordinate345)

Shape342.setGeometry(LineSet343)

HAnimSegment341.addChildren(Shape342)

HAnimJoint340.addChildren(HAnimSegment341)
HAnimJoint346 = x3d.HAnimJoint()
HAnimJoint346.setName("l_tarsal_distal_interphalangeal_2")
HAnimJoint346.setDEF("hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint346.setCenter(x3d.doubleToFloat([0.0843,0.00982,0.123435]))
HAnimJoint346.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint346.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment347 = x3d.HAnimSegment()
HAnimSegment347.setName("l_tarsal_distal_phalanx_2")
HAnimSegment347.setDEF("hanim_l_tarsal_distal_phalanx_2")
HAnimSite348 = x3d.HAnimSite()
HAnimSite348.setName("l_tarsal_distal_phalanx_2")
HAnimSite348.setDEF("hanim_l_tarsal_distal_phalanx_2_tip")
HAnimSite348.setTranslation(x3d.doubleToFloat([0.08,0.016,0.14]))
TouchSensor349 = x3d.TouchSensor()
TouchSensor349.setDescription("HAnimSite 112 hanim_l_tarsal_distal_phalanx_2_tip")

HAnimSite348.addChildren(TouchSensor349)
Shape350 = x3d.Shape()
Appearance351 = x3d.Appearance()
Material352 = x3d.Material()
Material352.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance351.setMaterial(Material352)

Shape350.setAppearance(Appearance351)
IndexedFaceSet353 = x3d.IndexedFaceSet()
IndexedFaceSet353.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet353.setCreaseAngle(0.5)
IndexedFaceSet353.setSolid(False)
ColorRGBA354 = x3d.ColorRGBA()
ColorRGBA354.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet353.setColor(ColorRGBA354)
Coordinate355 = x3d.Coordinate()
Coordinate355.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet353.setCoord(Coordinate355)

Shape350.setGeometry(IndexedFaceSet353)

HAnimSite348.addChildren(Shape350)
Billboard356 = x3d.Billboard()
Billboard356.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape357 = x3d.Shape()
Text358 = x3d.Text()
Text358.setString(["112"])
FontStyle359 = x3d.FontStyle()
FontStyle359.setSize(0.035)

Text358.setFontStyle(FontStyle359)

Shape357.setGeometry(Text358)

Billboard356.addChildren(Shape357)

HAnimSite348.addChildren(Billboard356)

HAnimSegment347.addChildren(HAnimSite348)
Shape360 = x3d.Shape()
LineSet361 = x3d.LineSet()
LineSet361.setVertexCount([2])
ColorRGBA362 = x3d.ColorRGBA()
ColorRGBA362.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet361.setColor(ColorRGBA362)
Coordinate363 = x3d.Coordinate()
Coordinate363.setPoint(x3d.doubleToFloat([0.0843,0.00982,0.123435,0.0843,0.01265,0.114]))

LineSet361.setCoord(Coordinate363)

Shape360.setGeometry(LineSet361)

HAnimSegment347.addChildren(Shape360)

HAnimJoint346.addChildren(HAnimSegment347)

HAnimJoint340.addChildren(HAnimJoint346)

HAnimJoint334.addChildren(HAnimJoint340)

HAnimJoint328.addChildren(HAnimJoint334)

HAnimJoint322.addChildren(HAnimJoint328)

HAnimJoint268.addChildren(HAnimJoint322)
HAnimJoint364 = x3d.HAnimJoint()
HAnimJoint364.setName("l_cuneonavicular_3")
HAnimJoint364.setDEF("hanim_l_cuneonavicular_3")
HAnimJoint364.setCenter(x3d.doubleToFloat([0.09297,0.0334,0.01982]))
HAnimJoint364.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint364.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment365 = x3d.HAnimSegment()
HAnimSegment365.setName("l_cuneiform_3")
HAnimSegment365.setDEF("hanim_l_cuneiform_3")
Shape366 = x3d.Shape()
LineSet367 = x3d.LineSet()
LineSet367.setVertexCount([2])
ColorRGBA368 = x3d.ColorRGBA()
ColorRGBA368.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet367.setColor(ColorRGBA368)
Coordinate369 = x3d.Coordinate()
Coordinate369.setPoint(x3d.doubleToFloat([0.09297,0.0334,0.01982,0.0783,0.0369,0.0049]))

LineSet367.setCoord(Coordinate369)

Shape366.setGeometry(LineSet367)

HAnimSegment365.addChildren(Shape366)

HAnimJoint364.addChildren(HAnimSegment365)
HAnimJoint370 = x3d.HAnimJoint()
HAnimJoint370.setName("l_tarsometatarsal_3")
HAnimJoint370.setDEF("hanim_l_tarsometatarsal_3")
HAnimJoint370.setCenter(x3d.doubleToFloat([0.09459,0.0261,0.0394]))
HAnimJoint370.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint370.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment371 = x3d.HAnimSegment()
HAnimSegment371.setName("l_metatarsal_3")
HAnimSegment371.setDEF("hanim_l_metatarsal_3")
Shape372 = x3d.Shape()
LineSet373 = x3d.LineSet()
LineSet373.setVertexCount([2])
ColorRGBA374 = x3d.ColorRGBA()
ColorRGBA374.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet373.setColor(ColorRGBA374)
Coordinate375 = x3d.Coordinate()
Coordinate375.setPoint(x3d.doubleToFloat([0.09459,0.0261,0.0394,0.09297,0.0334,0.01982]))

LineSet373.setCoord(Coordinate375)

Shape372.setGeometry(LineSet373)

HAnimSegment371.addChildren(Shape372)

HAnimJoint370.addChildren(HAnimSegment371)
HAnimJoint376 = x3d.HAnimJoint()
HAnimJoint376.setName("l_metatarsophalangeal_3")
HAnimJoint376.setDEF("hanim_l_metatarsophalangeal_3")
HAnimJoint376.setCenter(x3d.doubleToFloat([0.0965,0.01505,0.0954]))
HAnimJoint376.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint376.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment377 = x3d.HAnimSegment()
HAnimSegment377.setName("l_tarsal_proximal_phalanx_3")
HAnimSegment377.setDEF("hanim_l_tarsal_proximal_phalanx_3")
Shape378 = x3d.Shape()
LineSet379 = x3d.LineSet()
LineSet379.setVertexCount([2])
ColorRGBA380 = x3d.ColorRGBA()
ColorRGBA380.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet379.setColor(ColorRGBA380)
Coordinate381 = x3d.Coordinate()
Coordinate381.setPoint(x3d.doubleToFloat([0.0965,0.01505,0.0954,0.09459,0.0261,0.0394]))

LineSet379.setCoord(Coordinate381)

Shape378.setGeometry(LineSet379)

HAnimSegment377.addChildren(Shape378)

HAnimJoint376.addChildren(HAnimSegment377)
HAnimJoint382 = x3d.HAnimJoint()
HAnimJoint382.setName("l_tarsal_proximal_interphalangeal_3")
HAnimJoint382.setDEF("hanim_l_tarsal_proximal_interphalangeal_3")
HAnimJoint382.setCenter(x3d.doubleToFloat([0.09886,0.01192,0.11047]))
HAnimJoint382.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint382.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment383 = x3d.HAnimSegment()
HAnimSegment383.setName("l_tarsal_middle_phalanx_3")
HAnimSegment383.setDEF("hanim_l_tarsal_middle_phalanx_3")
Shape384 = x3d.Shape()
LineSet385 = x3d.LineSet()
LineSet385.setVertexCount([2])
ColorRGBA386 = x3d.ColorRGBA()
ColorRGBA386.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet385.setColor(ColorRGBA386)
Coordinate387 = x3d.Coordinate()
Coordinate387.setPoint(x3d.doubleToFloat([0.09886,0.01192,0.11047,0.0965,0.01505,0.0954]))

LineSet385.setCoord(Coordinate387)

Shape384.setGeometry(LineSet385)

HAnimSegment383.addChildren(Shape384)

HAnimJoint382.addChildren(HAnimSegment383)
HAnimJoint388 = x3d.HAnimJoint()
HAnimJoint388.setName("l_tarsal_distal_interphalangeal_3")
HAnimJoint388.setDEF("hanim_l_tarsal_distal_interphalangeal_3")
HAnimJoint388.setCenter(x3d.doubleToFloat([0.1004,0.00983,0.1197]))
HAnimJoint388.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint388.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment389 = x3d.HAnimSegment()
HAnimSegment389.setName("l_tarsal_distal_phalanx_3")
HAnimSegment389.setDEF("hanim_l_tarsal_distal_phalanx_3")
HAnimSite390 = x3d.HAnimSite()
HAnimSite390.setName("l_tarsal_distal_phalanx_3")
HAnimSite390.setDEF("hanim_l_tarsal_distal_phalanx_3_tip")
HAnimSite390.setTranslation(x3d.doubleToFloat([0.1,0.016,0.14]))
TouchSensor391 = x3d.TouchSensor()
TouchSensor391.setDescription("HAnimSite 113 hanim_l_tarsal_distal_phalanx_3_tip")

HAnimSite390.addChildren(TouchSensor391)
Shape392 = x3d.Shape()
Appearance393 = x3d.Appearance()
Material394 = x3d.Material()
Material394.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance393.setMaterial(Material394)

Shape392.setAppearance(Appearance393)
IndexedFaceSet395 = x3d.IndexedFaceSet()
IndexedFaceSet395.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet395.setCreaseAngle(0.5)
IndexedFaceSet395.setSolid(False)
ColorRGBA396 = x3d.ColorRGBA()
ColorRGBA396.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet395.setColor(ColorRGBA396)
Coordinate397 = x3d.Coordinate()
Coordinate397.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet395.setCoord(Coordinate397)

Shape392.setGeometry(IndexedFaceSet395)

HAnimSite390.addChildren(Shape392)
Billboard398 = x3d.Billboard()
Billboard398.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape399 = x3d.Shape()
Text400 = x3d.Text()
Text400.setString(["113"])
FontStyle401 = x3d.FontStyle()
FontStyle401.setSize(0.035)

Text400.setFontStyle(FontStyle401)

Shape399.setGeometry(Text400)

Billboard398.addChildren(Shape399)

HAnimSite390.addChildren(Billboard398)

HAnimSegment389.addChildren(HAnimSite390)
Shape402 = x3d.Shape()
LineSet403 = x3d.LineSet()
LineSet403.setVertexCount([2])
ColorRGBA404 = x3d.ColorRGBA()
ColorRGBA404.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet403.setColor(ColorRGBA404)
Coordinate405 = x3d.Coordinate()
Coordinate405.setPoint(x3d.doubleToFloat([0.1004,0.00983,0.1197,0.09886,0.01192,0.11047]))

LineSet403.setCoord(Coordinate405)

Shape402.setGeometry(LineSet403)

HAnimSegment389.addChildren(Shape402)

HAnimJoint388.addChildren(HAnimSegment389)

HAnimJoint382.addChildren(HAnimJoint388)

HAnimJoint376.addChildren(HAnimJoint382)

HAnimJoint370.addChildren(HAnimJoint376)

HAnimJoint364.addChildren(HAnimJoint370)

HAnimJoint268.addChildren(HAnimJoint364)

HAnimJoint238.addChildren(HAnimJoint268)
HAnimJoint406 = x3d.HAnimJoint()
HAnimJoint406.setName("l_calcaneocuboid")
HAnimJoint406.setDEF("hanim_l_calcaneocuboid")
HAnimJoint406.setCenter(x3d.doubleToFloat([0.0891,0.05798,-0.0259]))
HAnimJoint406.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint406.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment407 = x3d.HAnimSegment()
HAnimSegment407.setName("l_calcaneus")
HAnimSegment407.setDEF("hanim_l_calcaneus")
Shape408 = x3d.Shape()
LineSet409 = x3d.LineSet()
LineSet409.setVertexCount([2])
ColorRGBA410 = x3d.ColorRGBA()
ColorRGBA410.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet409.setColor(ColorRGBA410)
Coordinate411 = x3d.Coordinate()
Coordinate411.setPoint(x3d.doubleToFloat([0.0891,0.05798,-0.0259,0.0888,0.09545,-0.01045]))

LineSet409.setCoord(Coordinate411)

Shape408.setGeometry(LineSet409)

HAnimSegment407.addChildren(Shape408)

HAnimJoint406.addChildren(HAnimSegment407)
HAnimJoint412 = x3d.HAnimJoint()
HAnimJoint412.setName("l_transversetarsal")
HAnimJoint412.setDEF("hanim_l_transversetarsal")
HAnimJoint412.setCenter(x3d.doubleToFloat([0.11063,0.03528,0.0021]))
HAnimJoint412.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint412.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment413 = x3d.HAnimSegment()
HAnimSegment413.setName("l_cuboid")
HAnimSegment413.setDEF("hanim_l_cuboid")
Shape414 = x3d.Shape()
LineSet415 = x3d.LineSet()
LineSet415.setVertexCount([2])
ColorRGBA416 = x3d.ColorRGBA()
ColorRGBA416.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet415.setColor(ColorRGBA416)
Coordinate417 = x3d.Coordinate()
Coordinate417.setPoint(x3d.doubleToFloat([0.11063,0.03528,0.0021,0.0891,0.05798,-0.0259]))

LineSet415.setCoord(Coordinate417)

Shape414.setGeometry(LineSet415)

HAnimSegment413.addChildren(Shape414)

HAnimJoint412.addChildren(HAnimSegment413)
HAnimJoint418 = x3d.HAnimJoint()
HAnimJoint418.setName("l_tarsometatarsal_4")
HAnimJoint418.setDEF("hanim_l_tarsometatarsal_4")
HAnimJoint418.setCenter(x3d.doubleToFloat([0.10649,0.02454,0.03843]))
HAnimJoint418.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint418.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment419 = x3d.HAnimSegment()
HAnimSegment419.setName("l_metatarsal_4")
HAnimSegment419.setDEF("hanim_l_metatarsal_4")
Shape420 = x3d.Shape()
LineSet421 = x3d.LineSet()
LineSet421.setVertexCount([2])
ColorRGBA422 = x3d.ColorRGBA()
ColorRGBA422.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet421.setColor(ColorRGBA422)
Coordinate423 = x3d.Coordinate()
Coordinate423.setPoint(x3d.doubleToFloat([0.10649,0.02454,0.03843,0.11063,0.03528,0.0021]))

LineSet421.setCoord(Coordinate423)

Shape420.setGeometry(LineSet421)

HAnimSegment419.addChildren(Shape420)

HAnimJoint418.addChildren(HAnimSegment419)
HAnimJoint424 = x3d.HAnimJoint()
HAnimJoint424.setName("l_metatarsophalangeal_4")
HAnimJoint424.setDEF("hanim_l_metatarsophalangeal_4")
HAnimJoint424.setCenter(x3d.doubleToFloat([0.109867,0.01435,0.09117]))
HAnimJoint424.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint424.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment425 = x3d.HAnimSegment()
HAnimSegment425.setName("l_tarsal_proximal_phalanx_4")
HAnimSegment425.setDEF("hanim_l_tarsal_proximal_phalanx_4")
Shape426 = x3d.Shape()
LineSet427 = x3d.LineSet()
LineSet427.setVertexCount([2])
ColorRGBA428 = x3d.ColorRGBA()
ColorRGBA428.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet427.setColor(ColorRGBA428)
Coordinate429 = x3d.Coordinate()
Coordinate429.setPoint(x3d.doubleToFloat([0.109867,0.01435,0.09117,0.10649,0.02454,0.03843]))

LineSet427.setCoord(Coordinate429)

Shape426.setGeometry(LineSet427)

HAnimSegment425.addChildren(Shape426)

HAnimJoint424.addChildren(HAnimSegment425)
HAnimJoint430 = x3d.HAnimJoint()
HAnimJoint430.setName("l_tarsal_proximal_interphalangeal_4")
HAnimJoint430.setDEF("hanim_l_tarsal_proximal_interphalangeal_4")
HAnimJoint430.setCenter(x3d.doubleToFloat([0.11416,0.01224,0.10631]))
HAnimJoint430.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint430.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment431 = x3d.HAnimSegment()
HAnimSegment431.setName("l_tarsal_middle_phalanx_4")
HAnimSegment431.setDEF("hanim_l_tarsal_middle_phalanx_4")
Shape432 = x3d.Shape()
LineSet433 = x3d.LineSet()
LineSet433.setVertexCount([2])
ColorRGBA434 = x3d.ColorRGBA()
ColorRGBA434.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet433.setColor(ColorRGBA434)
Coordinate435 = x3d.Coordinate()
Coordinate435.setPoint(x3d.doubleToFloat([0.11416,0.01224,0.10631,0.109867,0.01435,0.09117]))

LineSet433.setCoord(Coordinate435)

Shape432.setGeometry(LineSet433)

HAnimSegment431.addChildren(Shape432)

HAnimJoint430.addChildren(HAnimSegment431)
HAnimJoint436 = x3d.HAnimJoint()
HAnimJoint436.setName("l_tarsal_distal_interphalangeal_4")
HAnimJoint436.setDEF("hanim_l_tarsal_distal_interphalangeal_4")
HAnimJoint436.setCenter(x3d.doubleToFloat([0.11567,0.00936,0.11369]))
HAnimJoint436.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint436.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment437 = x3d.HAnimSegment()
HAnimSegment437.setName("l_tarsal_distal_phalanx_4")
HAnimSegment437.setDEF("hanim_l_tarsal_distal_phalanx_4")
HAnimSite438 = x3d.HAnimSite()
HAnimSite438.setName("l_tarsal_distal_phalanx_4")
HAnimSite438.setDEF("hanim_l_tarsal_distal_phalanx_4_tip")
HAnimSite438.setTranslation(x3d.doubleToFloat([0.115,0.016,0.13]))
TouchSensor439 = x3d.TouchSensor()
TouchSensor439.setDescription("HAnimSite 114 hanim_l_tarsal_distal_phalanx_4_tip")

HAnimSite438.addChildren(TouchSensor439)
Shape440 = x3d.Shape()
Appearance441 = x3d.Appearance()
Material442 = x3d.Material()
Material442.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance441.setMaterial(Material442)

Shape440.setAppearance(Appearance441)
IndexedFaceSet443 = x3d.IndexedFaceSet()
IndexedFaceSet443.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet443.setCreaseAngle(0.5)
IndexedFaceSet443.setSolid(False)
ColorRGBA444 = x3d.ColorRGBA()
ColorRGBA444.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet443.setColor(ColorRGBA444)
Coordinate445 = x3d.Coordinate()
Coordinate445.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet443.setCoord(Coordinate445)

Shape440.setGeometry(IndexedFaceSet443)

HAnimSite438.addChildren(Shape440)
Billboard446 = x3d.Billboard()
Billboard446.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape447 = x3d.Shape()
Text448 = x3d.Text()
Text448.setString(["114"])
FontStyle449 = x3d.FontStyle()
FontStyle449.setSize(0.035)

Text448.setFontStyle(FontStyle449)

Shape447.setGeometry(Text448)

Billboard446.addChildren(Shape447)

HAnimSite438.addChildren(Billboard446)

HAnimSegment437.addChildren(HAnimSite438)
Shape450 = x3d.Shape()
LineSet451 = x3d.LineSet()
LineSet451.setVertexCount([2])
ColorRGBA452 = x3d.ColorRGBA()
ColorRGBA452.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet451.setColor(ColorRGBA452)
Coordinate453 = x3d.Coordinate()
Coordinate453.setPoint(x3d.doubleToFloat([0.11567,0.00936,0.11369,0.11416,0.01224,0.10631]))

LineSet451.setCoord(Coordinate453)

Shape450.setGeometry(LineSet451)

HAnimSegment437.addChildren(Shape450)

HAnimJoint436.addChildren(HAnimSegment437)

HAnimJoint430.addChildren(HAnimJoint436)

HAnimJoint424.addChildren(HAnimJoint430)

HAnimJoint418.addChildren(HAnimJoint424)

HAnimJoint412.addChildren(HAnimJoint418)
HAnimJoint454 = x3d.HAnimJoint()
HAnimJoint454.setName("l_tarsometatarsal_5")
HAnimJoint454.setDEF("hanim_l_tarsometatarsal_5")
HAnimJoint454.setCenter(x3d.doubleToFloat([0.1208,0.02094,0.03474]))
HAnimJoint454.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint454.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment455 = x3d.HAnimSegment()
HAnimSegment455.setName("l_metatarsal_5")
HAnimSegment455.setDEF("hanim_l_metatarsal_5")
Shape456 = x3d.Shape()
LineSet457 = x3d.LineSet()
LineSet457.setVertexCount([2])
ColorRGBA458 = x3d.ColorRGBA()
ColorRGBA458.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet457.setColor(ColorRGBA458)
Coordinate459 = x3d.Coordinate()
Coordinate459.setPoint(x3d.doubleToFloat([0.1208,0.02094,0.03474,0.11063,0.03528,0.0021]))

LineSet457.setCoord(Coordinate459)

Shape456.setGeometry(LineSet457)

HAnimSegment455.addChildren(Shape456)

HAnimJoint454.addChildren(HAnimSegment455)
HAnimJoint460 = x3d.HAnimJoint()
HAnimJoint460.setName("l_metatarsophalangeal_5")
HAnimJoint460.setDEF("hanim_l_metatarsophalangeal_5")
HAnimJoint460.setCenter(x3d.doubleToFloat([0.124065,0.01367,0.08656]))
HAnimJoint460.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint460.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment461 = x3d.HAnimSegment()
HAnimSegment461.setName("l_tarsal_proximal_phalanx_5")
HAnimSegment461.setDEF("hanim_l_tarsal_proximal_phalanx_5")
Shape462 = x3d.Shape()
LineSet463 = x3d.LineSet()
LineSet463.setVertexCount([2])
ColorRGBA464 = x3d.ColorRGBA()
ColorRGBA464.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet463.setColor(ColorRGBA464)
Coordinate465 = x3d.Coordinate()
Coordinate465.setPoint(x3d.doubleToFloat([0.124065,0.01367,0.08656,0.1208,0.02094,0.03474]))

LineSet463.setCoord(Coordinate465)

Shape462.setGeometry(LineSet463)

HAnimSegment461.addChildren(Shape462)

HAnimJoint460.addChildren(HAnimSegment461)
HAnimJoint466 = x3d.HAnimJoint()
HAnimJoint466.setName("l_tarsal_proximal_interphalangeal_5")
HAnimJoint466.setDEF("hanim_l_tarsal_proximal_interphalangeal_5")
HAnimJoint466.setCenter(x3d.doubleToFloat([0.12638,0.01086,0.09414]))
HAnimJoint466.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint466.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment467 = x3d.HAnimSegment()
HAnimSegment467.setName("l_tarsal_middle_phalanx_5")
HAnimSegment467.setDEF("hanim_l_tarsal_middle_phalanx_5")
HAnimSite468 = x3d.HAnimSite()
HAnimSite468.setName("l_metatarsal_phalanx_5")
HAnimSite468.setDEF("hanim_l_metatarsal_phalanx_5_pt")
HAnimSite468.setTranslation(x3d.doubleToFloat([0.12,0.02,0.04]))
TouchSensor469 = x3d.TouchSensor()
TouchSensor469.setDescription("HAnimSite 56 hanim_l_metatarsal_phalanx_5_pt")

HAnimSite468.addChildren(TouchSensor469)
Shape470 = x3d.Shape()
Appearance471 = x3d.Appearance()
Material472 = x3d.Material()
Material472.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance471.setMaterial(Material472)

Shape470.setAppearance(Appearance471)
IndexedFaceSet473 = x3d.IndexedFaceSet()
IndexedFaceSet473.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet473.setCreaseAngle(0.5)
IndexedFaceSet473.setSolid(False)
ColorRGBA474 = x3d.ColorRGBA()
ColorRGBA474.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet473.setColor(ColorRGBA474)
Coordinate475 = x3d.Coordinate()
Coordinate475.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet473.setCoord(Coordinate475)

Shape470.setGeometry(IndexedFaceSet473)

HAnimSite468.addChildren(Shape470)
Billboard476 = x3d.Billboard()
Billboard476.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape477 = x3d.Shape()
Text478 = x3d.Text()
Text478.setString(["56"])
FontStyle479 = x3d.FontStyle()
FontStyle479.setSize(0.035)

Text478.setFontStyle(FontStyle479)

Shape477.setGeometry(Text478)

Billboard476.addChildren(Shape477)

HAnimSite468.addChildren(Billboard476)

HAnimSegment467.addChildren(HAnimSite468)
Shape480 = x3d.Shape()
LineSet481 = x3d.LineSet()
LineSet481.setVertexCount([2])
ColorRGBA482 = x3d.ColorRGBA()
ColorRGBA482.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet481.setColor(ColorRGBA482)
Coordinate483 = x3d.Coordinate()
Coordinate483.setPoint(x3d.doubleToFloat([0.12638,0.01086,0.09414,0.124065,0.01367,0.08656]))

LineSet481.setCoord(Coordinate483)

Shape480.setGeometry(LineSet481)

HAnimSegment467.addChildren(Shape480)

HAnimJoint466.addChildren(HAnimSegment467)
HAnimJoint484 = x3d.HAnimJoint()
HAnimJoint484.setName("l_tarsal_distal_interphalangeal_5")
HAnimJoint484.setDEF("hanim_l_tarsal_distal_interphalangeal_5")
HAnimJoint484.setCenter(x3d.doubleToFloat([0.12728,0.00856,0.10188]))
HAnimJoint484.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint484.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment485 = x3d.HAnimSegment()
HAnimSegment485.setName("l_tarsal_distal_phalanx_5")
HAnimSegment485.setDEF("hanim_l_tarsal_distal_phalanx_5")
HAnimSite486 = x3d.HAnimSite()
HAnimSite486.setName("l_tarsal_distal_phalanx_5")
HAnimSite486.setDEF("hanim_l_tarsal_distal_phalanx_5_tip")
HAnimSite486.setTranslation(x3d.doubleToFloat([0.125,0.016,0.115]))
TouchSensor487 = x3d.TouchSensor()
TouchSensor487.setDescription("HAnimSite 115 hanim_l_tarsal_distal_phalanx_5_tip")

HAnimSite486.addChildren(TouchSensor487)
Shape488 = x3d.Shape()
Appearance489 = x3d.Appearance()
Material490 = x3d.Material()
Material490.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance489.setMaterial(Material490)

Shape488.setAppearance(Appearance489)
IndexedFaceSet491 = x3d.IndexedFaceSet()
IndexedFaceSet491.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet491.setCreaseAngle(0.5)
IndexedFaceSet491.setSolid(False)
ColorRGBA492 = x3d.ColorRGBA()
ColorRGBA492.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet491.setColor(ColorRGBA492)
Coordinate493 = x3d.Coordinate()
Coordinate493.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet491.setCoord(Coordinate493)

Shape488.setGeometry(IndexedFaceSet491)

HAnimSite486.addChildren(Shape488)
Billboard494 = x3d.Billboard()
Billboard494.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape495 = x3d.Shape()
Text496 = x3d.Text()
Text496.setString(["115"])
FontStyle497 = x3d.FontStyle()
FontStyle497.setSize(0.035)

Text496.setFontStyle(FontStyle497)

Shape495.setGeometry(Text496)

Billboard494.addChildren(Shape495)

HAnimSite486.addChildren(Billboard494)

HAnimSegment485.addChildren(HAnimSite486)
Shape498 = x3d.Shape()
LineSet499 = x3d.LineSet()
LineSet499.setVertexCount([2])
ColorRGBA500 = x3d.ColorRGBA()
ColorRGBA500.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet499.setColor(ColorRGBA500)
Coordinate501 = x3d.Coordinate()
Coordinate501.setPoint(x3d.doubleToFloat([0.12728,0.00856,0.10188,0.12638,0.01086,0.09414]))

LineSet499.setCoord(Coordinate501)

Shape498.setGeometry(LineSet499)

HAnimSegment485.addChildren(Shape498)

HAnimJoint484.addChildren(HAnimSegment485)

HAnimJoint466.addChildren(HAnimJoint484)

HAnimJoint460.addChildren(HAnimJoint466)

HAnimJoint454.addChildren(HAnimJoint460)

HAnimJoint412.addChildren(HAnimJoint454)

HAnimJoint406.addChildren(HAnimJoint412)

HAnimJoint238.addChildren(HAnimJoint406)

HAnimJoint196.addChildren(HAnimJoint238)

HAnimJoint142.addChildren(HAnimJoint196)

HAnimJoint16.addChildren(HAnimJoint142)
HAnimJoint502 = x3d.HAnimJoint()
HAnimJoint502.setName("r_hip")
HAnimJoint502.setDEF("hanim_r_hip")
HAnimJoint502.setCenter(x3d.doubleToFloat([-0.09466,0.82665,-0.01835]))
HAnimJoint502.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint502.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment503 = x3d.HAnimSegment()
HAnimSegment503.setName("r_thigh")
HAnimSegment503.setDEF("hanim_r_thigh")
HAnimSite504 = x3d.HAnimSite()
HAnimSite504.setName("r_knee_crease")
HAnimSite504.setDEF("hanim_r_knee_crease_pt")
HAnimSite504.setTranslation(x3d.doubleToFloat([-0.09,0.41,-0.056]))
TouchSensor505 = x3d.TouchSensor()
TouchSensor505.setDescription("HAnimSite 91 hanim_r_knee_crease_pt")

HAnimSite504.addChildren(TouchSensor505)
Shape506 = x3d.Shape()
Appearance507 = x3d.Appearance()
Material508 = x3d.Material()
Material508.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance507.setMaterial(Material508)

Shape506.setAppearance(Appearance507)
IndexedFaceSet509 = x3d.IndexedFaceSet()
IndexedFaceSet509.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet509.setCreaseAngle(0.5)
IndexedFaceSet509.setSolid(False)
ColorRGBA510 = x3d.ColorRGBA()
ColorRGBA510.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet509.setColor(ColorRGBA510)
Coordinate511 = x3d.Coordinate()
Coordinate511.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet509.setCoord(Coordinate511)

Shape506.setGeometry(IndexedFaceSet509)

HAnimSite504.addChildren(Shape506)
Billboard512 = x3d.Billboard()
Billboard512.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape513 = x3d.Shape()
Text514 = x3d.Text()
Text514.setString(["91"])
FontStyle515 = x3d.FontStyle()
FontStyle515.setSize(0.035)

Text514.setFontStyle(FontStyle515)

Shape513.setGeometry(Text514)

Billboard512.addChildren(Shape513)

HAnimSite504.addChildren(Billboard512)

HAnimSegment503.addChildren(HAnimSite504)
HAnimSite516 = x3d.HAnimSite()
HAnimSite516.setName("r_femoral_medial_epicondyle")
HAnimSite516.setDEF("hanim_r_femoral_medial_epicondyle_pt")
HAnimSite516.setTranslation(x3d.doubleToFloat([-0.039,0.41,-0.01]))
TouchSensor517 = x3d.TouchSensor()
TouchSensor517.setDescription("HAnimSite 44 hanim_r_femoral_medial_epicondyle_pt")

HAnimSite516.addChildren(TouchSensor517)
Shape518 = x3d.Shape()
Appearance519 = x3d.Appearance()
Material520 = x3d.Material()
Material520.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance519.setMaterial(Material520)

Shape518.setAppearance(Appearance519)
IndexedFaceSet521 = x3d.IndexedFaceSet()
IndexedFaceSet521.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet521.setCreaseAngle(0.5)
IndexedFaceSet521.setSolid(False)
ColorRGBA522 = x3d.ColorRGBA()
ColorRGBA522.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet521.setColor(ColorRGBA522)
Coordinate523 = x3d.Coordinate()
Coordinate523.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet521.setCoord(Coordinate523)

Shape518.setGeometry(IndexedFaceSet521)

HAnimSite516.addChildren(Shape518)
Billboard524 = x3d.Billboard()
Billboard524.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape525 = x3d.Shape()
Text526 = x3d.Text()
Text526.setString(["44"])
FontStyle527 = x3d.FontStyle()
FontStyle527.setSize(0.035)

Text526.setFontStyle(FontStyle527)

Shape525.setGeometry(Text526)

Billboard524.addChildren(Shape525)

HAnimSite516.addChildren(Billboard524)

HAnimSegment503.addChildren(HAnimSite516)
HAnimSite528 = x3d.HAnimSite()
HAnimSite528.setName("r_femoral_lateral_epicondyle")
HAnimSite528.setDEF("hanim_r_femoral_lateral_epicondyle_pt")
HAnimSite528.setTranslation(x3d.doubleToFloat([-0.127,0.41,-0.01]))
TouchSensor529 = x3d.TouchSensor()
TouchSensor529.setDescription("HAnimSite 43 hanim_r_femoral_lateral_epicondyle_pt")

HAnimSite528.addChildren(TouchSensor529)
Shape530 = x3d.Shape()
Appearance531 = x3d.Appearance()
Material532 = x3d.Material()
Material532.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance531.setMaterial(Material532)

Shape530.setAppearance(Appearance531)
IndexedFaceSet533 = x3d.IndexedFaceSet()
IndexedFaceSet533.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet533.setCreaseAngle(0.5)
IndexedFaceSet533.setSolid(False)
ColorRGBA534 = x3d.ColorRGBA()
ColorRGBA534.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet533.setColor(ColorRGBA534)
Coordinate535 = x3d.Coordinate()
Coordinate535.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet533.setCoord(Coordinate535)

Shape530.setGeometry(IndexedFaceSet533)

HAnimSite528.addChildren(Shape530)
Billboard536 = x3d.Billboard()
Billboard536.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape537 = x3d.Shape()
Text538 = x3d.Text()
Text538.setString(["43"])
FontStyle539 = x3d.FontStyle()
FontStyle539.setSize(0.035)

Text538.setFontStyle(FontStyle539)

Shape537.setGeometry(Text538)

Billboard536.addChildren(Shape537)

HAnimSite528.addChildren(Billboard536)

HAnimSegment503.addChildren(HAnimSite528)
HAnimSite540 = x3d.HAnimSite()
HAnimSite540.setName("r_suprapatella")
HAnimSite540.setDEF("hanim_r_suprapatella_pt")
HAnimSite540.setTranslation(x3d.doubleToFloat([-0.085,0.41,0.042]))
TouchSensor541 = x3d.TouchSensor()
TouchSensor541.setDescription("HAnimSite 45 hanim_r_suprapatella_pt")

HAnimSite540.addChildren(TouchSensor541)
Shape542 = x3d.Shape()
Appearance543 = x3d.Appearance()
Material544 = x3d.Material()
Material544.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance543.setMaterial(Material544)

Shape542.setAppearance(Appearance543)
IndexedFaceSet545 = x3d.IndexedFaceSet()
IndexedFaceSet545.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet545.setCreaseAngle(0.5)
IndexedFaceSet545.setSolid(False)
ColorRGBA546 = x3d.ColorRGBA()
ColorRGBA546.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet545.setColor(ColorRGBA546)
Coordinate547 = x3d.Coordinate()
Coordinate547.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet545.setCoord(Coordinate547)

Shape542.setGeometry(IndexedFaceSet545)

HAnimSite540.addChildren(Shape542)
Billboard548 = x3d.Billboard()
Billboard548.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape549 = x3d.Shape()
Text550 = x3d.Text()
Text550.setString(["45"])
FontStyle551 = x3d.FontStyle()
FontStyle551.setSize(0.035)

Text550.setFontStyle(FontStyle551)

Shape549.setGeometry(Text550)

Billboard548.addChildren(Shape549)

HAnimSite540.addChildren(Billboard548)

HAnimSegment503.addChildren(HAnimSite540)
Shape552 = x3d.Shape()
LineSet553 = x3d.LineSet()
LineSet553.setVertexCount([2])
ColorRGBA554 = x3d.ColorRGBA()
ColorRGBA554.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet553.setColor(ColorRGBA554)
Coordinate555 = x3d.Coordinate()
Coordinate555.setPoint(x3d.doubleToFloat([-0.09466,0.82665,-0.01835,0,0.826,0.02]))

LineSet553.setCoord(Coordinate555)

Shape552.setGeometry(LineSet553)

HAnimSegment503.addChildren(Shape552)

HAnimJoint502.addChildren(HAnimSegment503)
HAnimJoint556 = x3d.HAnimJoint()
HAnimJoint556.setName("r_knee")
HAnimJoint556.setDEF("hanim_r_knee")
HAnimJoint556.setCenter(x3d.doubleToFloat([-0.0926,0.408825,-0.01944]))
HAnimJoint556.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint556.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment557 = x3d.HAnimSegment()
HAnimSegment557.setName("r_calf")
HAnimSegment557.setDEF("hanim_r_calf")
HAnimSite558 = x3d.HAnimSite()
HAnimSite558.setName("r_tibiale")
HAnimSite558.setDEF("hanim_r_tibiale_pt")
HAnimSite558.setTranslation(x3d.doubleToFloat([-0.09,0.31,0.038]))
TouchSensor559 = x3d.TouchSensor()
TouchSensor559.setDescription("HAnimSite 51 hanim_r_tibiale_pt")

HAnimSite558.addChildren(TouchSensor559)
Shape560 = x3d.Shape()
Appearance561 = x3d.Appearance()
Material562 = x3d.Material()
Material562.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance561.setMaterial(Material562)

Shape560.setAppearance(Appearance561)
IndexedFaceSet563 = x3d.IndexedFaceSet()
IndexedFaceSet563.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet563.setCreaseAngle(0.5)
IndexedFaceSet563.setSolid(False)
ColorRGBA564 = x3d.ColorRGBA()
ColorRGBA564.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet563.setColor(ColorRGBA564)
Coordinate565 = x3d.Coordinate()
Coordinate565.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet563.setCoord(Coordinate565)

Shape560.setGeometry(IndexedFaceSet563)

HAnimSite558.addChildren(Shape560)
Billboard566 = x3d.Billboard()
Billboard566.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape567 = x3d.Shape()
Text568 = x3d.Text()
Text568.setString(["51"])
FontStyle569 = x3d.FontStyle()
FontStyle569.setSize(0.035)

Text568.setFontStyle(FontStyle569)

Shape567.setGeometry(Text568)

Billboard566.addChildren(Shape567)

HAnimSite558.addChildren(Billboard566)

HAnimSegment557.addChildren(HAnimSite558)
HAnimSite570 = x3d.HAnimSite()
HAnimSite570.setName("r_medial_malleolus")
HAnimSite570.setDEF("hanim_r_medial_malleolus_pt")
HAnimSite570.setTranslation(x3d.doubleToFloat([-0.061,0.095,-0.02]))
TouchSensor571 = x3d.TouchSensor()
TouchSensor571.setDescription("HAnimSite 52 hanim_r_medial_malleolus_pt")

HAnimSite570.addChildren(TouchSensor571)
Shape572 = x3d.Shape()
Appearance573 = x3d.Appearance()
Material574 = x3d.Material()
Material574.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance573.setMaterial(Material574)

Shape572.setAppearance(Appearance573)
IndexedFaceSet575 = x3d.IndexedFaceSet()
IndexedFaceSet575.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet575.setCreaseAngle(0.5)
IndexedFaceSet575.setSolid(False)
ColorRGBA576 = x3d.ColorRGBA()
ColorRGBA576.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet575.setColor(ColorRGBA576)
Coordinate577 = x3d.Coordinate()
Coordinate577.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet575.setCoord(Coordinate577)

Shape572.setGeometry(IndexedFaceSet575)

HAnimSite570.addChildren(Shape572)
Billboard578 = x3d.Billboard()
Billboard578.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape579 = x3d.Shape()
Text580 = x3d.Text()
Text580.setString(["52"])
FontStyle581 = x3d.FontStyle()
FontStyle581.setSize(0.035)

Text580.setFontStyle(FontStyle581)

Shape579.setGeometry(Text580)

Billboard578.addChildren(Shape579)

HAnimSite570.addChildren(Billboard578)

HAnimSegment557.addChildren(HAnimSite570)
HAnimSite582 = x3d.HAnimSite()
HAnimSite582.setName("r_lateral_malleolus")
HAnimSite582.setDEF("hanim_r_lateral_malleolus_pt")
HAnimSite582.setTranslation(x3d.doubleToFloat([-0.12,0.095,-0.02]))
TouchSensor583 = x3d.TouchSensor()
TouchSensor583.setDescription("HAnimSite 53 hanim_r_lateral_malleolus_pt")

HAnimSite582.addChildren(TouchSensor583)
Shape584 = x3d.Shape()
Appearance585 = x3d.Appearance()
Material586 = x3d.Material()
Material586.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance585.setMaterial(Material586)

Shape584.setAppearance(Appearance585)
IndexedFaceSet587 = x3d.IndexedFaceSet()
IndexedFaceSet587.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet587.setCreaseAngle(0.5)
IndexedFaceSet587.setSolid(False)
ColorRGBA588 = x3d.ColorRGBA()
ColorRGBA588.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet587.setColor(ColorRGBA588)
Coordinate589 = x3d.Coordinate()
Coordinate589.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet587.setCoord(Coordinate589)

Shape584.setGeometry(IndexedFaceSet587)

HAnimSite582.addChildren(Shape584)
Billboard590 = x3d.Billboard()
Billboard590.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape591 = x3d.Shape()
Text592 = x3d.Text()
Text592.setString(["53"])
FontStyle593 = x3d.FontStyle()
FontStyle593.setSize(0.035)

Text592.setFontStyle(FontStyle593)

Shape591.setGeometry(Text592)

Billboard590.addChildren(Shape591)

HAnimSite582.addChildren(Billboard590)

HAnimSegment557.addChildren(HAnimSite582)
Shape594 = x3d.Shape()
LineSet595 = x3d.LineSet()
LineSet595.setVertexCount([2])
ColorRGBA596 = x3d.ColorRGBA()
ColorRGBA596.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet595.setColor(ColorRGBA596)
Coordinate597 = x3d.Coordinate()
Coordinate597.setPoint(x3d.doubleToFloat([-0.0926,0.408825,-0.01944,-0.09466,0.82665,-0.01835]))

LineSet595.setCoord(Coordinate597)

Shape594.setGeometry(LineSet595)

HAnimSegment557.addChildren(Shape594)

HAnimJoint556.addChildren(HAnimSegment557)
HAnimJoint598 = x3d.HAnimJoint()
HAnimJoint598.setName("r_talocrural")
HAnimJoint598.setDEF("hanim_r_talocrural")
HAnimJoint598.setCenter(x3d.doubleToFloat([-0.08845,0.09544,-0.01045]))
HAnimJoint598.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint598.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment599 = x3d.HAnimSegment()
HAnimSegment599.setName("r_talus")
HAnimSegment599.setDEF("hanim_r_talus")
HAnimSite600 = x3d.HAnimSite()
HAnimSite600.setName("r_sphyrion")
HAnimSite600.setDEF("hanim_r_sphyrion_pt")
HAnimSite600.setTranslation(x3d.doubleToFloat([-0.054,0.065,-0.02]))
TouchSensor601 = x3d.TouchSensor()
TouchSensor601.setDescription("HAnimSite 54 hanim_r_sphyrion_pt")

HAnimSite600.addChildren(TouchSensor601)
Shape602 = x3d.Shape()
Appearance603 = x3d.Appearance()
Material604 = x3d.Material()
Material604.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance603.setMaterial(Material604)

Shape602.setAppearance(Appearance603)
IndexedFaceSet605 = x3d.IndexedFaceSet()
IndexedFaceSet605.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet605.setCreaseAngle(0.5)
IndexedFaceSet605.setSolid(False)
ColorRGBA606 = x3d.ColorRGBA()
ColorRGBA606.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet605.setColor(ColorRGBA606)
Coordinate607 = x3d.Coordinate()
Coordinate607.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet605.setCoord(Coordinate607)

Shape602.setGeometry(IndexedFaceSet605)

HAnimSite600.addChildren(Shape602)
Billboard608 = x3d.Billboard()
Billboard608.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape609 = x3d.Shape()
Text610 = x3d.Text()
Text610.setString(["54"])
FontStyle611 = x3d.FontStyle()
FontStyle611.setSize(0.035)

Text610.setFontStyle(FontStyle611)

Shape609.setGeometry(Text610)

Billboard608.addChildren(Shape609)

HAnimSite600.addChildren(Billboard608)

HAnimSegment599.addChildren(HAnimSite600)
HAnimSite612 = x3d.HAnimSite()
HAnimSite612.setName("r_calcaneus_posterior")
HAnimSite612.setDEF("hanim_r_calcaneus_posterior_pt")
HAnimSite612.setTranslation(x3d.doubleToFloat([-0.09,0.03,-0.06]))
TouchSensor613 = x3d.TouchSensor()
TouchSensor613.setDescription("HAnimSite 62 hanim_r_calcaneus_posterior_pt")

HAnimSite612.addChildren(TouchSensor613)
Shape614 = x3d.Shape()
Appearance615 = x3d.Appearance()
Material616 = x3d.Material()
Material616.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance615.setMaterial(Material616)

Shape614.setAppearance(Appearance615)
IndexedFaceSet617 = x3d.IndexedFaceSet()
IndexedFaceSet617.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet617.setCreaseAngle(0.5)
IndexedFaceSet617.setSolid(False)
ColorRGBA618 = x3d.ColorRGBA()
ColorRGBA618.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet617.setColor(ColorRGBA618)
Coordinate619 = x3d.Coordinate()
Coordinate619.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet617.setCoord(Coordinate619)

Shape614.setGeometry(IndexedFaceSet617)

HAnimSite612.addChildren(Shape614)
Billboard620 = x3d.Billboard()
Billboard620.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape621 = x3d.Shape()
Text622 = x3d.Text()
Text622.setString(["62"])
FontStyle623 = x3d.FontStyle()
FontStyle623.setSize(0.035)

Text622.setFontStyle(FontStyle623)

Shape621.setGeometry(Text622)

Billboard620.addChildren(Shape621)

HAnimSite612.addChildren(Billboard620)

HAnimSegment599.addChildren(HAnimSite612)
Shape624 = x3d.Shape()
LineSet625 = x3d.LineSet()
LineSet625.setVertexCount([2])
ColorRGBA626 = x3d.ColorRGBA()
ColorRGBA626.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet625.setColor(ColorRGBA626)
Coordinate627 = x3d.Coordinate()
Coordinate627.setPoint(x3d.doubleToFloat([-0.08845,0.09544,-0.01045,-0.0926,0.408825,-0.01944]))

LineSet625.setCoord(Coordinate627)

Shape624.setGeometry(LineSet625)

HAnimSegment599.addChildren(Shape624)

HAnimJoint598.addChildren(HAnimSegment599)
HAnimJoint628 = x3d.HAnimJoint()
HAnimJoint628.setName("r_talocalcaneonavicular")
HAnimJoint628.setDEF("hanim_r_talocalcaneonavicular")
HAnimJoint628.setCenter(x3d.doubleToFloat([-0.07794,0.0369,0.00486]))
HAnimJoint628.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint628.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment629 = x3d.HAnimSegment()
HAnimSegment629.setName("r_navicular")
HAnimSegment629.setDEF("hanim_r_navicular")
Shape630 = x3d.Shape()
LineSet631 = x3d.LineSet()
LineSet631.setVertexCount([2])
ColorRGBA632 = x3d.ColorRGBA()
ColorRGBA632.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet631.setColor(ColorRGBA632)
Coordinate633 = x3d.Coordinate()
Coordinate633.setPoint(x3d.doubleToFloat([-0.07794,0.0369,0.00486,-0.08845,0.09544,-0.01045]))

LineSet631.setCoord(Coordinate633)

Shape630.setGeometry(LineSet631)

HAnimSegment629.addChildren(Shape630)

HAnimJoint628.addChildren(HAnimSegment629)
HAnimJoint634 = x3d.HAnimJoint()
HAnimJoint634.setName("r_cuneonavicular_1")
HAnimJoint634.setDEF("hanim_r_cuneonavicular_1")
HAnimJoint634.setCenter(x3d.doubleToFloat([-0.06698,0.032107,0.01839]))
HAnimJoint634.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint634.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment635 = x3d.HAnimSegment()
HAnimSegment635.setName("r_cuneiform_1")
HAnimSegment635.setDEF("hanim_r_cuneiform_1")
Shape636 = x3d.Shape()
LineSet637 = x3d.LineSet()
LineSet637.setVertexCount([2])
ColorRGBA638 = x3d.ColorRGBA()
ColorRGBA638.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet637.setColor(ColorRGBA638)
Coordinate639 = x3d.Coordinate()
Coordinate639.setPoint(x3d.doubleToFloat([-0.06698,0.032107,0.01839,-0.07794,0.0369,0.00486]))

LineSet637.setCoord(Coordinate639)

Shape636.setGeometry(LineSet637)

HAnimSegment635.addChildren(Shape636)

HAnimJoint634.addChildren(HAnimSegment635)
HAnimJoint640 = x3d.HAnimJoint()
HAnimJoint640.setName("r_tarsometatarsal_1")
HAnimJoint640.setDEF("hanim_r_tarsometatarsal_1")
HAnimJoint640.setCenter(x3d.doubleToFloat([-0.064,0.02324,0.04419]))
HAnimJoint640.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint640.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment641 = x3d.HAnimSegment()
HAnimSegment641.setName("r_metatarsal_1")
HAnimSegment641.setDEF("hanim_r_metatarsal_1")
Shape642 = x3d.Shape()
LineSet643 = x3d.LineSet()
LineSet643.setVertexCount([2])
ColorRGBA644 = x3d.ColorRGBA()
ColorRGBA644.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet643.setColor(ColorRGBA644)
Coordinate645 = x3d.Coordinate()
Coordinate645.setPoint(x3d.doubleToFloat([-0.064,0.02324,0.04419,-0.06698,0.032107,0.01839]))

LineSet643.setCoord(Coordinate645)

Shape642.setGeometry(LineSet643)

HAnimSegment641.addChildren(Shape642)

HAnimJoint640.addChildren(HAnimSegment641)
HAnimJoint646 = x3d.HAnimJoint()
HAnimJoint646.setName("r_metatarsophalangeal_1")
HAnimJoint646.setDEF("hanim_r_metatarsophalangeal_1")
HAnimJoint646.setCenter(x3d.doubleToFloat([-0.06176,0.014425,0.09362]))
HAnimJoint646.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint646.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment647 = x3d.HAnimSegment()
HAnimSegment647.setName("r_tarsal_proximal_phalanx_1")
HAnimSegment647.setDEF("hanim_r_tarsal_proximal_phalanx_1")
HAnimSite648 = x3d.HAnimSite()
HAnimSite648.setName("r_metatarsal_phalanx_1")
HAnimSite648.setDEF("hanim_r_metatarsal_phalanx_1_pt")
HAnimSite648.setTranslation(x3d.doubleToFloat([-0.062,0.012,0.1]))
TouchSensor649 = x3d.TouchSensor()
TouchSensor649.setDescription("HAnimSite 59 hanim_r_metatarsal_phalanx_1_pt")

HAnimSite648.addChildren(TouchSensor649)
Shape650 = x3d.Shape()
Appearance651 = x3d.Appearance()
Material652 = x3d.Material()
Material652.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance651.setMaterial(Material652)

Shape650.setAppearance(Appearance651)
IndexedFaceSet653 = x3d.IndexedFaceSet()
IndexedFaceSet653.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet653.setCreaseAngle(0.5)
IndexedFaceSet653.setSolid(False)
ColorRGBA654 = x3d.ColorRGBA()
ColorRGBA654.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet653.setColor(ColorRGBA654)
Coordinate655 = x3d.Coordinate()
Coordinate655.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet653.setCoord(Coordinate655)

Shape650.setGeometry(IndexedFaceSet653)

HAnimSite648.addChildren(Shape650)
Billboard656 = x3d.Billboard()
Billboard656.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape657 = x3d.Shape()
Text658 = x3d.Text()
Text658.setString(["59"])
FontStyle659 = x3d.FontStyle()
FontStyle659.setSize(0.035)

Text658.setFontStyle(FontStyle659)

Shape657.setGeometry(Text658)

Billboard656.addChildren(Shape657)

HAnimSite648.addChildren(Billboard656)

HAnimSegment647.addChildren(HAnimSite648)
Shape660 = x3d.Shape()
LineSet661 = x3d.LineSet()
LineSet661.setVertexCount([2])
ColorRGBA662 = x3d.ColorRGBA()
ColorRGBA662.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet661.setColor(ColorRGBA662)
Coordinate663 = x3d.Coordinate()
Coordinate663.setPoint(x3d.doubleToFloat([-0.06176,0.014425,0.09362,-0.064,0.02324,0.04419]))

LineSet661.setCoord(Coordinate663)

Shape660.setGeometry(LineSet661)

HAnimSegment647.addChildren(Shape660)

HAnimJoint646.addChildren(HAnimSegment647)
HAnimJoint664 = x3d.HAnimJoint()
HAnimJoint664.setName("r_tarsal_interphalangeal_1")
HAnimJoint664.setDEF("hanim_r_tarsal_interphalangeal_1")
HAnimJoint664.setCenter(x3d.doubleToFloat([-0.06174,0.0121,0.1153]))
HAnimJoint664.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint664.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment665 = x3d.HAnimSegment()
HAnimSegment665.setName("r_tarsal_distal_phalanx_1")
HAnimSegment665.setDEF("hanim_r_tarsal_distal_phalanx_1")
HAnimSite666 = x3d.HAnimSite()
HAnimSite666.setName("r_tarsal_distal_phalanx_1")
HAnimSite666.setDEF("hanim_r_tarsal_distal_phalanx_1_tip")
HAnimSite666.setTranslation(x3d.doubleToFloat([-0.06,0.012,0.14]))
TouchSensor667 = x3d.TouchSensor()
TouchSensor667.setDescription("HAnimSite 116 hanim_r_tarsal_distal_phalanx_1_tip")

HAnimSite666.addChildren(TouchSensor667)
Shape668 = x3d.Shape()
Appearance669 = x3d.Appearance()
Material670 = x3d.Material()
Material670.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance669.setMaterial(Material670)

Shape668.setAppearance(Appearance669)
IndexedFaceSet671 = x3d.IndexedFaceSet()
IndexedFaceSet671.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet671.setCreaseAngle(0.5)
IndexedFaceSet671.setSolid(False)
ColorRGBA672 = x3d.ColorRGBA()
ColorRGBA672.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet671.setColor(ColorRGBA672)
Coordinate673 = x3d.Coordinate()
Coordinate673.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet671.setCoord(Coordinate673)

Shape668.setGeometry(IndexedFaceSet671)

HAnimSite666.addChildren(Shape668)
Billboard674 = x3d.Billboard()
Billboard674.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape675 = x3d.Shape()
Text676 = x3d.Text()
Text676.setString(["116"])
FontStyle677 = x3d.FontStyle()
FontStyle677.setSize(0.035)

Text676.setFontStyle(FontStyle677)

Shape675.setGeometry(Text676)

Billboard674.addChildren(Shape675)

HAnimSite666.addChildren(Billboard674)

HAnimSegment665.addChildren(HAnimSite666)
Shape678 = x3d.Shape()
LineSet679 = x3d.LineSet()
LineSet679.setVertexCount([2])
ColorRGBA680 = x3d.ColorRGBA()
ColorRGBA680.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet679.setColor(ColorRGBA680)
Coordinate681 = x3d.Coordinate()
Coordinate681.setPoint(x3d.doubleToFloat([-0.06174,0.0121,0.1153,-0.06176,0.014425,0.09362]))

LineSet679.setCoord(Coordinate681)

Shape678.setGeometry(LineSet679)

HAnimSegment665.addChildren(Shape678)

HAnimJoint664.addChildren(HAnimSegment665)

HAnimJoint646.addChildren(HAnimJoint664)

HAnimJoint640.addChildren(HAnimJoint646)

HAnimJoint634.addChildren(HAnimJoint640)

HAnimJoint628.addChildren(HAnimJoint634)
HAnimJoint682 = x3d.HAnimJoint()
HAnimJoint682.setName("r_cuneonavicular_2")
HAnimJoint682.setDEF("hanim_r_cuneonavicular_2")
HAnimJoint682.setCenter(x3d.doubleToFloat([-0.081,0.0335,0.02142]))
HAnimJoint682.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint682.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment683 = x3d.HAnimSegment()
HAnimSegment683.setName("r_cuneiform_2")
HAnimSegment683.setDEF("hanim_r_cuneiform_2")
Shape684 = x3d.Shape()
LineSet685 = x3d.LineSet()
LineSet685.setVertexCount([2])
ColorRGBA686 = x3d.ColorRGBA()
ColorRGBA686.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet685.setColor(ColorRGBA686)
Coordinate687 = x3d.Coordinate()
Coordinate687.setPoint(x3d.doubleToFloat([-0.081,0.0335,0.02142,-0.07794,0.0369,0.00486]))

LineSet685.setCoord(Coordinate687)

Shape684.setGeometry(LineSet685)

HAnimSegment683.addChildren(Shape684)

HAnimJoint682.addChildren(HAnimSegment683)
HAnimJoint688 = x3d.HAnimJoint()
HAnimJoint688.setName("r_tarsometatarsal_2")
HAnimJoint688.setDEF("hanim_r_tarsometatarsal_2")
HAnimJoint688.setCenter(x3d.doubleToFloat([-0.07983,0.0261,0.04106]))
HAnimJoint688.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint688.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment689 = x3d.HAnimSegment()
HAnimSegment689.setName("r_metatarsal_2")
HAnimSegment689.setDEF("hanim_r_metatarsal_2")
Shape690 = x3d.Shape()
LineSet691 = x3d.LineSet()
LineSet691.setVertexCount([2])
ColorRGBA692 = x3d.ColorRGBA()
ColorRGBA692.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet691.setColor(ColorRGBA692)
Coordinate693 = x3d.Coordinate()
Coordinate693.setPoint(x3d.doubleToFloat([-0.07983,0.0261,0.04106,-0.081,0.0335,0.02142]))

LineSet691.setCoord(Coordinate693)

Shape690.setGeometry(LineSet691)

HAnimSegment689.addChildren(Shape690)

HAnimJoint688.addChildren(HAnimSegment689)
HAnimJoint694 = x3d.HAnimJoint()
HAnimJoint694.setName("r_metatarsophalangeal_2")
HAnimJoint694.setDEF("hanim_r_metatarsophalangeal_2")
HAnimJoint694.setCenter(x3d.doubleToFloat([-0.0821,0.01497,0.09783]))
HAnimJoint694.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint694.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment695 = x3d.HAnimSegment()
HAnimSegment695.setName("r_tarsal_proximal_phalanx_2")
HAnimSegment695.setDEF("hanim_r_tarsal_proximal_phalanx_2")
Shape696 = x3d.Shape()
LineSet697 = x3d.LineSet()
LineSet697.setVertexCount([2])
ColorRGBA698 = x3d.ColorRGBA()
ColorRGBA698.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet697.setColor(ColorRGBA698)
Coordinate699 = x3d.Coordinate()
Coordinate699.setPoint(x3d.doubleToFloat([-0.0821,0.01497,0.09783,-0.07983,0.0261,0.04106]))

LineSet697.setCoord(Coordinate699)

Shape696.setGeometry(LineSet697)

HAnimSegment695.addChildren(Shape696)

HAnimJoint694.addChildren(HAnimSegment695)
HAnimJoint700 = x3d.HAnimJoint()
HAnimJoint700.setName("r_tarsal_proximal_interphalangeal_2")
HAnimJoint700.setDEF("hanim_r_tarsal_proximal_interphalangeal_2")
HAnimJoint700.setCenter(x3d.doubleToFloat([-0.0839,0.012647,0.114]))
HAnimJoint700.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint700.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment701 = x3d.HAnimSegment()
HAnimSegment701.setName("r_tarsal_middle_phalanx_2")
HAnimSegment701.setDEF("hanim_r_tarsal_middle_phalanx_2")
Shape702 = x3d.Shape()
LineSet703 = x3d.LineSet()
LineSet703.setVertexCount([2])
ColorRGBA704 = x3d.ColorRGBA()
ColorRGBA704.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet703.setColor(ColorRGBA704)
Coordinate705 = x3d.Coordinate()
Coordinate705.setPoint(x3d.doubleToFloat([-0.0839,0.012647,0.114,-0.0821,0.01497,0.09783]))

LineSet703.setCoord(Coordinate705)

Shape702.setGeometry(LineSet703)

HAnimSegment701.addChildren(Shape702)

HAnimJoint700.addChildren(HAnimSegment701)
HAnimJoint706 = x3d.HAnimJoint()
HAnimJoint706.setName("r_tarsal_distal_interphalangeal_2")
HAnimJoint706.setDEF("hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint706.setCenter(x3d.doubleToFloat([-0.0839,0.009825,0.123435]))
HAnimJoint706.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint706.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment707 = x3d.HAnimSegment()
HAnimSegment707.setName("r_tarsal_distal_phalanx_2")
HAnimSegment707.setDEF("hanim_r_tarsal_distal_phalanx_2")
HAnimSite708 = x3d.HAnimSite()
HAnimSite708.setName("r_tarsal_distal_phalanx_2")
HAnimSite708.setDEF("hanim_r_tarsal_distal_phalanx_2_tip")
HAnimSite708.setTranslation(x3d.doubleToFloat([-0.08,0.016,0.14]))
TouchSensor709 = x3d.TouchSensor()
TouchSensor709.setDescription("HAnimSite 117 hanim_r_tarsal_distal_phalanx_2_tip")

HAnimSite708.addChildren(TouchSensor709)
Shape710 = x3d.Shape()
Appearance711 = x3d.Appearance()
Material712 = x3d.Material()
Material712.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance711.setMaterial(Material712)

Shape710.setAppearance(Appearance711)
IndexedFaceSet713 = x3d.IndexedFaceSet()
IndexedFaceSet713.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet713.setCreaseAngle(0.5)
IndexedFaceSet713.setSolid(False)
ColorRGBA714 = x3d.ColorRGBA()
ColorRGBA714.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet713.setColor(ColorRGBA714)
Coordinate715 = x3d.Coordinate()
Coordinate715.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet713.setCoord(Coordinate715)

Shape710.setGeometry(IndexedFaceSet713)

HAnimSite708.addChildren(Shape710)
Billboard716 = x3d.Billboard()
Billboard716.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape717 = x3d.Shape()
Text718 = x3d.Text()
Text718.setString(["117"])
FontStyle719 = x3d.FontStyle()
FontStyle719.setSize(0.035)

Text718.setFontStyle(FontStyle719)

Shape717.setGeometry(Text718)

Billboard716.addChildren(Shape717)

HAnimSite708.addChildren(Billboard716)

HAnimSegment707.addChildren(HAnimSite708)
Shape720 = x3d.Shape()
LineSet721 = x3d.LineSet()
LineSet721.setVertexCount([2])
ColorRGBA722 = x3d.ColorRGBA()
ColorRGBA722.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet721.setColor(ColorRGBA722)
Coordinate723 = x3d.Coordinate()
Coordinate723.setPoint(x3d.doubleToFloat([-0.0839,0.009825,0.123435,-0.0839,0.012647,0.114]))

LineSet721.setCoord(Coordinate723)

Shape720.setGeometry(LineSet721)

HAnimSegment707.addChildren(Shape720)

HAnimJoint706.addChildren(HAnimSegment707)

HAnimJoint700.addChildren(HAnimJoint706)

HAnimJoint694.addChildren(HAnimJoint700)

HAnimJoint688.addChildren(HAnimJoint694)

HAnimJoint682.addChildren(HAnimJoint688)

HAnimJoint628.addChildren(HAnimJoint682)
HAnimJoint724 = x3d.HAnimJoint()
HAnimJoint724.setName("r_cuneonavicular_3")
HAnimJoint724.setDEF("hanim_r_cuneonavicular_3")
HAnimJoint724.setCenter(x3d.doubleToFloat([-0.09261,0.03339,0.01982]))
HAnimJoint724.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint724.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment725 = x3d.HAnimSegment()
HAnimSegment725.setName("r_cuneiform_3")
HAnimSegment725.setDEF("hanim_r_cuneiform_3")
Shape726 = x3d.Shape()
LineSet727 = x3d.LineSet()
LineSet727.setVertexCount([2])
ColorRGBA728 = x3d.ColorRGBA()
ColorRGBA728.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet727.setColor(ColorRGBA728)
Coordinate729 = x3d.Coordinate()
Coordinate729.setPoint(x3d.doubleToFloat([-0.09261,0.03339,0.01982,-0.07794,0.0369,0.00486]))

LineSet727.setCoord(Coordinate729)

Shape726.setGeometry(LineSet727)

HAnimSegment725.addChildren(Shape726)

HAnimJoint724.addChildren(HAnimSegment725)
HAnimJoint730 = x3d.HAnimJoint()
HAnimJoint730.setName("r_tarsometatarsal_3")
HAnimJoint730.setDEF("hanim_r_tarsometatarsal_3")
HAnimJoint730.setCenter(x3d.doubleToFloat([-0.09423,0.0261,0.0394]))
HAnimJoint730.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint730.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment731 = x3d.HAnimSegment()
HAnimSegment731.setName("r_metatarsal_3")
HAnimSegment731.setDEF("hanim_r_metatarsal_3")
Shape732 = x3d.Shape()
LineSet733 = x3d.LineSet()
LineSet733.setVertexCount([2])
ColorRGBA734 = x3d.ColorRGBA()
ColorRGBA734.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet733.setColor(ColorRGBA734)
Coordinate735 = x3d.Coordinate()
Coordinate735.setPoint(x3d.doubleToFloat([-0.09423,0.0261,0.0394,-0.09261,0.03339,0.01982]))

LineSet733.setCoord(Coordinate735)

Shape732.setGeometry(LineSet733)

HAnimSegment731.addChildren(Shape732)

HAnimJoint730.addChildren(HAnimSegment731)
HAnimJoint736 = x3d.HAnimJoint()
HAnimJoint736.setName("r_metatarsophalangeal_3")
HAnimJoint736.setDEF("hanim_r_metatarsophalangeal_3")
HAnimJoint736.setCenter(x3d.doubleToFloat([-0.0961,0.01505,0.09542]))
HAnimJoint736.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint736.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment737 = x3d.HAnimSegment()
HAnimSegment737.setName("r_tarsal_proximal_phalanx_3")
HAnimSegment737.setDEF("hanim_r_tarsal_proximal_phalanx_3")
Shape738 = x3d.Shape()
LineSet739 = x3d.LineSet()
LineSet739.setVertexCount([2])
ColorRGBA740 = x3d.ColorRGBA()
ColorRGBA740.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet739.setColor(ColorRGBA740)
Coordinate741 = x3d.Coordinate()
Coordinate741.setPoint(x3d.doubleToFloat([-0.0961,0.01505,0.09542,-0.09423,0.0261,0.0394]))

LineSet739.setCoord(Coordinate741)

Shape738.setGeometry(LineSet739)

HAnimSegment737.addChildren(Shape738)

HAnimJoint736.addChildren(HAnimSegment737)
HAnimJoint742 = x3d.HAnimJoint()
HAnimJoint742.setName("r_tarsal_proximal_interphalangeal_3")
HAnimJoint742.setDEF("hanim_r_tarsal_proximal_interphalangeal_3")
HAnimJoint742.setCenter(x3d.doubleToFloat([-0.0985,0.01192,0.11047]))
HAnimJoint742.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint742.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment743 = x3d.HAnimSegment()
HAnimSegment743.setName("r_tarsal_middle_phalanx_3")
HAnimSegment743.setDEF("hanim_r_tarsal_middle_phalanx_3")
Shape744 = x3d.Shape()
LineSet745 = x3d.LineSet()
LineSet745.setVertexCount([2])
ColorRGBA746 = x3d.ColorRGBA()
ColorRGBA746.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet745.setColor(ColorRGBA746)
Coordinate747 = x3d.Coordinate()
Coordinate747.setPoint(x3d.doubleToFloat([-0.0985,0.01192,0.11047,-0.0961,0.01505,0.09542]))

LineSet745.setCoord(Coordinate747)

Shape744.setGeometry(LineSet745)

HAnimSegment743.addChildren(Shape744)

HAnimJoint742.addChildren(HAnimSegment743)
HAnimJoint748 = x3d.HAnimJoint()
HAnimJoint748.setName("r_tarsal_distal_interphalangeal_3")
HAnimJoint748.setDEF("hanim_r_tarsal_distal_interphalangeal_3")
HAnimJoint748.setCenter(x3d.doubleToFloat([-0.100035,0.00982,0.1197]))
HAnimJoint748.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint748.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment749 = x3d.HAnimSegment()
HAnimSegment749.setName("r_tarsal_distal_phalanx_3")
HAnimSegment749.setDEF("hanim_r_tarsal_distal_phalanx_3")
HAnimSite750 = x3d.HAnimSite()
HAnimSite750.setName("r_tarsal_distal_phalanx_3")
HAnimSite750.setDEF("hanim_r_tarsal_distal_phalanx_3_tip")
HAnimSite750.setTranslation(x3d.doubleToFloat([-0.1,0.016,0.14]))
TouchSensor751 = x3d.TouchSensor()
TouchSensor751.setDescription("HAnimSite 118 hanim_r_tarsal_distal_phalanx_3_tip")

HAnimSite750.addChildren(TouchSensor751)
Shape752 = x3d.Shape()
Appearance753 = x3d.Appearance()
Material754 = x3d.Material()
Material754.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance753.setMaterial(Material754)

Shape752.setAppearance(Appearance753)
IndexedFaceSet755 = x3d.IndexedFaceSet()
IndexedFaceSet755.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet755.setCreaseAngle(0.5)
IndexedFaceSet755.setSolid(False)
ColorRGBA756 = x3d.ColorRGBA()
ColorRGBA756.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet755.setColor(ColorRGBA756)
Coordinate757 = x3d.Coordinate()
Coordinate757.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet755.setCoord(Coordinate757)

Shape752.setGeometry(IndexedFaceSet755)

HAnimSite750.addChildren(Shape752)
Billboard758 = x3d.Billboard()
Billboard758.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape759 = x3d.Shape()
Text760 = x3d.Text()
Text760.setString(["118"])
FontStyle761 = x3d.FontStyle()
FontStyle761.setSize(0.035)

Text760.setFontStyle(FontStyle761)

Shape759.setGeometry(Text760)

Billboard758.addChildren(Shape759)

HAnimSite750.addChildren(Billboard758)

HAnimSegment749.addChildren(HAnimSite750)
Shape762 = x3d.Shape()
LineSet763 = x3d.LineSet()
LineSet763.setVertexCount([2])
ColorRGBA764 = x3d.ColorRGBA()
ColorRGBA764.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet763.setColor(ColorRGBA764)
Coordinate765 = x3d.Coordinate()
Coordinate765.setPoint(x3d.doubleToFloat([-0.100035,0.00982,0.1197,-0.0985,0.01192,0.11047]))

LineSet763.setCoord(Coordinate765)

Shape762.setGeometry(LineSet763)

HAnimSegment749.addChildren(Shape762)

HAnimJoint748.addChildren(HAnimSegment749)

HAnimJoint742.addChildren(HAnimJoint748)

HAnimJoint736.addChildren(HAnimJoint742)

HAnimJoint730.addChildren(HAnimJoint736)

HAnimJoint724.addChildren(HAnimJoint730)

HAnimJoint628.addChildren(HAnimJoint724)

HAnimJoint598.addChildren(HAnimJoint628)
HAnimJoint766 = x3d.HAnimJoint()
HAnimJoint766.setName("r_calcaneocuboid")
HAnimJoint766.setDEF("hanim_r_calcaneocuboid")
HAnimJoint766.setCenter(x3d.doubleToFloat([-0.088717,0.05798,-0.025965]))
HAnimJoint766.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint766.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment767 = x3d.HAnimSegment()
HAnimSegment767.setName("r_calcaneus")
HAnimSegment767.setDEF("hanim_r_calcaneus")
Shape768 = x3d.Shape()
LineSet769 = x3d.LineSet()
LineSet769.setVertexCount([2])
ColorRGBA770 = x3d.ColorRGBA()
ColorRGBA770.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet769.setColor(ColorRGBA770)
Coordinate771 = x3d.Coordinate()
Coordinate771.setPoint(x3d.doubleToFloat([-0.088717,0.05798,-0.025965,-0.08845,0.09544,-0.01045]))

LineSet769.setCoord(Coordinate771)

Shape768.setGeometry(LineSet769)

HAnimSegment767.addChildren(Shape768)

HAnimJoint766.addChildren(HAnimSegment767)
HAnimJoint772 = x3d.HAnimJoint()
HAnimJoint772.setName("r_transversetarsal")
HAnimJoint772.setDEF("hanim_r_transversetarsal")
HAnimJoint772.setCenter(x3d.doubleToFloat([-0.11027,0.03528,0.0021]))
HAnimJoint772.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint772.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment773 = x3d.HAnimSegment()
HAnimSegment773.setName("r_cuboid")
HAnimSegment773.setDEF("hanim_r_cuboid")
Shape774 = x3d.Shape()
LineSet775 = x3d.LineSet()
LineSet775.setVertexCount([2])
ColorRGBA776 = x3d.ColorRGBA()
ColorRGBA776.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet775.setColor(ColorRGBA776)
Coordinate777 = x3d.Coordinate()
Coordinate777.setPoint(x3d.doubleToFloat([-0.11027,0.03528,0.0021,-0.088717,0.05798,-0.025965]))

LineSet775.setCoord(Coordinate777)

Shape774.setGeometry(LineSet775)

HAnimSegment773.addChildren(Shape774)

HAnimJoint772.addChildren(HAnimSegment773)
HAnimJoint778 = x3d.HAnimJoint()
HAnimJoint778.setName("r_tarsometatarsal_4")
HAnimJoint778.setDEF("hanim_r_tarsometatarsal_4")
HAnimJoint778.setCenter(x3d.doubleToFloat([-0.10613,0.02454,0.03843]))
HAnimJoint778.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint778.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment779 = x3d.HAnimSegment()
HAnimSegment779.setName("r_metatarsal_4")
HAnimSegment779.setDEF("hanim_r_metatarsal_4")
Shape780 = x3d.Shape()
LineSet781 = x3d.LineSet()
LineSet781.setVertexCount([2])
ColorRGBA782 = x3d.ColorRGBA()
ColorRGBA782.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet781.setColor(ColorRGBA782)
Coordinate783 = x3d.Coordinate()
Coordinate783.setPoint(x3d.doubleToFloat([-0.10613,0.02454,0.03843,-0.11027,0.03528,0.0021]))

LineSet781.setCoord(Coordinate783)

Shape780.setGeometry(LineSet781)

HAnimSegment779.addChildren(Shape780)

HAnimJoint778.addChildren(HAnimSegment779)
HAnimJoint784 = x3d.HAnimJoint()
HAnimJoint784.setName("r_metatarsophalangeal_4")
HAnimJoint784.setDEF("hanim_r_metatarsophalangeal_4")
HAnimJoint784.setCenter(x3d.doubleToFloat([-0.1095,0.01435,0.09117]))
HAnimJoint784.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint784.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment785 = x3d.HAnimSegment()
HAnimSegment785.setName("r_tarsal_proximal_phalanx_4")
HAnimSegment785.setDEF("hanim_r_tarsal_proximal_phalanx_4")
Shape786 = x3d.Shape()
LineSet787 = x3d.LineSet()
LineSet787.setVertexCount([2])
ColorRGBA788 = x3d.ColorRGBA()
ColorRGBA788.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet787.setColor(ColorRGBA788)
Coordinate789 = x3d.Coordinate()
Coordinate789.setPoint(x3d.doubleToFloat([-0.1095,0.01435,0.09117,-0.10613,0.02454,0.03843]))

LineSet787.setCoord(Coordinate789)

Shape786.setGeometry(LineSet787)

HAnimSegment785.addChildren(Shape786)

HAnimJoint784.addChildren(HAnimSegment785)
HAnimJoint790 = x3d.HAnimJoint()
HAnimJoint790.setName("r_tarsal_proximal_interphalangeal_4")
HAnimJoint790.setDEF("hanim_r_tarsal_proximal_interphalangeal_4")
HAnimJoint790.setCenter(x3d.doubleToFloat([-0.11378,0.01224,0.1063]))
HAnimJoint790.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint790.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment791 = x3d.HAnimSegment()
HAnimSegment791.setName("r_tarsal_middle_phalanx_4")
HAnimSegment791.setDEF("hanim_r_tarsal_middle_phalanx_4")
Shape792 = x3d.Shape()
LineSet793 = x3d.LineSet()
LineSet793.setVertexCount([2])
ColorRGBA794 = x3d.ColorRGBA()
ColorRGBA794.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet793.setColor(ColorRGBA794)
Coordinate795 = x3d.Coordinate()
Coordinate795.setPoint(x3d.doubleToFloat([-0.11378,0.01224,0.1063,-0.1095,0.01435,0.09117]))

LineSet793.setCoord(Coordinate795)

Shape792.setGeometry(LineSet793)

HAnimSegment791.addChildren(Shape792)

HAnimJoint790.addChildren(HAnimSegment791)
HAnimJoint796 = x3d.HAnimJoint()
HAnimJoint796.setName("r_tarsal_distal_interphalangeal_4")
HAnimJoint796.setDEF("hanim_r_tarsal_distal_interphalangeal_4")
HAnimJoint796.setCenter(x3d.doubleToFloat([-0.1153,0.00937,0.11369]))
HAnimJoint796.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint796.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment797 = x3d.HAnimSegment()
HAnimSegment797.setName("r_tarsal_distal_phalanx_4")
HAnimSegment797.setDEF("hanim_r_tarsal_distal_phalanx_4")
HAnimSite798 = x3d.HAnimSite()
HAnimSite798.setName("r_tarsal_distal_phalanx_4")
HAnimSite798.setDEF("hanim_r_tarsal_distal_phalanx_4_tip")
HAnimSite798.setTranslation(x3d.doubleToFloat([-0.115,0.016,0.13]))
TouchSensor799 = x3d.TouchSensor()
TouchSensor799.setDescription("HAnimSite 119 hanim_r_tarsal_distal_phalanx_4_tip")

HAnimSite798.addChildren(TouchSensor799)
Shape800 = x3d.Shape()
Appearance801 = x3d.Appearance()
Material802 = x3d.Material()
Material802.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance801.setMaterial(Material802)

Shape800.setAppearance(Appearance801)
IndexedFaceSet803 = x3d.IndexedFaceSet()
IndexedFaceSet803.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet803.setCreaseAngle(0.5)
IndexedFaceSet803.setSolid(False)
ColorRGBA804 = x3d.ColorRGBA()
ColorRGBA804.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet803.setColor(ColorRGBA804)
Coordinate805 = x3d.Coordinate()
Coordinate805.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet803.setCoord(Coordinate805)

Shape800.setGeometry(IndexedFaceSet803)

HAnimSite798.addChildren(Shape800)
Billboard806 = x3d.Billboard()
Billboard806.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape807 = x3d.Shape()
Text808 = x3d.Text()
Text808.setString(["119"])
FontStyle809 = x3d.FontStyle()
FontStyle809.setSize(0.035)

Text808.setFontStyle(FontStyle809)

Shape807.setGeometry(Text808)

Billboard806.addChildren(Shape807)

HAnimSite798.addChildren(Billboard806)

HAnimSegment797.addChildren(HAnimSite798)
Shape810 = x3d.Shape()
LineSet811 = x3d.LineSet()
LineSet811.setVertexCount([2])
ColorRGBA812 = x3d.ColorRGBA()
ColorRGBA812.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet811.setColor(ColorRGBA812)
Coordinate813 = x3d.Coordinate()
Coordinate813.setPoint(x3d.doubleToFloat([-0.1153,0.00937,0.11369,-0.11378,0.01224,0.1063]))

LineSet811.setCoord(Coordinate813)

Shape810.setGeometry(LineSet811)

HAnimSegment797.addChildren(Shape810)

HAnimJoint796.addChildren(HAnimSegment797)

HAnimJoint790.addChildren(HAnimJoint796)

HAnimJoint784.addChildren(HAnimJoint790)

HAnimJoint778.addChildren(HAnimJoint784)

HAnimJoint772.addChildren(HAnimJoint778)
HAnimJoint814 = x3d.HAnimJoint()
HAnimJoint814.setName("r_tarsometatarsal_5")
HAnimJoint814.setDEF("hanim_r_tarsometatarsal_5")
HAnimJoint814.setCenter(x3d.doubleToFloat([-0.12044,0.020945,0.03474]))
HAnimJoint814.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint814.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment815 = x3d.HAnimSegment()
HAnimSegment815.setName("r_metatarsal_5")
HAnimSegment815.setDEF("hanim_r_metatarsal_5")
Shape816 = x3d.Shape()
LineSet817 = x3d.LineSet()
LineSet817.setVertexCount([2])
ColorRGBA818 = x3d.ColorRGBA()
ColorRGBA818.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet817.setColor(ColorRGBA818)
Coordinate819 = x3d.Coordinate()
Coordinate819.setPoint(x3d.doubleToFloat([-0.12044,0.020945,0.03474,-0.11027,0.03528,0.0021]))

LineSet817.setCoord(Coordinate819)

Shape816.setGeometry(LineSet817)

HAnimSegment815.addChildren(Shape816)

HAnimJoint814.addChildren(HAnimSegment815)
HAnimJoint820 = x3d.HAnimJoint()
HAnimJoint820.setName("r_metatarsophalangeal_5")
HAnimJoint820.setDEF("hanim_r_metatarsophalangeal_5")
HAnimJoint820.setCenter(x3d.doubleToFloat([-0.12368,0.01367,0.08656]))
HAnimJoint820.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint820.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment821 = x3d.HAnimSegment()
HAnimSegment821.setName("r_tarsal_proximal_phalanx_5")
HAnimSegment821.setDEF("hanim_r_tarsal_proximal_phalanx_5")
Shape822 = x3d.Shape()
LineSet823 = x3d.LineSet()
LineSet823.setVertexCount([2])
ColorRGBA824 = x3d.ColorRGBA()
ColorRGBA824.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet823.setColor(ColorRGBA824)
Coordinate825 = x3d.Coordinate()
Coordinate825.setPoint(x3d.doubleToFloat([-0.12368,0.01367,0.08656,-0.12044,0.020945,0.03474]))

LineSet823.setCoord(Coordinate825)

Shape822.setGeometry(LineSet823)

HAnimSegment821.addChildren(Shape822)

HAnimJoint820.addChildren(HAnimSegment821)
HAnimJoint826 = x3d.HAnimJoint()
HAnimJoint826.setName("r_tarsal_proximal_interphalangeal_5")
HAnimJoint826.setDEF("hanim_r_tarsal_proximal_interphalangeal_5")
HAnimJoint826.setCenter(x3d.doubleToFloat([-0.126,0.01086,0.09414]))
HAnimJoint826.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint826.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment827 = x3d.HAnimSegment()
HAnimSegment827.setName("r_tarsal_middle_phalanx_5")
HAnimSegment827.setDEF("hanim_r_tarsal_middle_phalanx_5")
HAnimSite828 = x3d.HAnimSite()
HAnimSite828.setName("r_metatarsal_phalanx_5")
HAnimSite828.setDEF("hanim_r_metatarsal_phalanx_5_pt")
HAnimSite828.setTranslation(x3d.doubleToFloat([-0.12,0.02,0.04]))
TouchSensor829 = x3d.TouchSensor()
TouchSensor829.setDescription("HAnimSite 60 hanim_r_metatarsal_phalanx_5_pt")

HAnimSite828.addChildren(TouchSensor829)
Shape830 = x3d.Shape()
Appearance831 = x3d.Appearance()
Material832 = x3d.Material()
Material832.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance831.setMaterial(Material832)

Shape830.setAppearance(Appearance831)
IndexedFaceSet833 = x3d.IndexedFaceSet()
IndexedFaceSet833.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet833.setCreaseAngle(0.5)
IndexedFaceSet833.setSolid(False)
ColorRGBA834 = x3d.ColorRGBA()
ColorRGBA834.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet833.setColor(ColorRGBA834)
Coordinate835 = x3d.Coordinate()
Coordinate835.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet833.setCoord(Coordinate835)

Shape830.setGeometry(IndexedFaceSet833)

HAnimSite828.addChildren(Shape830)
Billboard836 = x3d.Billboard()
Billboard836.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape837 = x3d.Shape()
Text838 = x3d.Text()
Text838.setString(["60"])
FontStyle839 = x3d.FontStyle()
FontStyle839.setSize(0.035)

Text838.setFontStyle(FontStyle839)

Shape837.setGeometry(Text838)

Billboard836.addChildren(Shape837)

HAnimSite828.addChildren(Billboard836)

HAnimSegment827.addChildren(HAnimSite828)
Shape840 = x3d.Shape()
LineSet841 = x3d.LineSet()
LineSet841.setVertexCount([2])
ColorRGBA842 = x3d.ColorRGBA()
ColorRGBA842.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet841.setColor(ColorRGBA842)
Coordinate843 = x3d.Coordinate()
Coordinate843.setPoint(x3d.doubleToFloat([-0.126,0.01086,0.09414,-0.12368,0.01367,0.08656]))

LineSet841.setCoord(Coordinate843)

Shape840.setGeometry(LineSet841)

HAnimSegment827.addChildren(Shape840)

HAnimJoint826.addChildren(HAnimSegment827)
HAnimJoint844 = x3d.HAnimJoint()
HAnimJoint844.setName("r_tarsal_distal_interphalangeal_5")
HAnimJoint844.setDEF("hanim_r_tarsal_distal_interphalangeal_5")
HAnimJoint844.setCenter(x3d.doubleToFloat([-0.1269,0.00856,0.10188]))
HAnimJoint844.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint844.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment845 = x3d.HAnimSegment()
HAnimSegment845.setName("r_tarsal_distal_phalanx_5")
HAnimSegment845.setDEF("hanim_r_tarsal_distal_phalanx_5")
HAnimSite846 = x3d.HAnimSite()
HAnimSite846.setName("r_tarsal_distal_phalanx_5")
HAnimSite846.setDEF("hanim_r_tarsal_distal_phalanx_5_tip")
HAnimSite846.setTranslation(x3d.doubleToFloat([-0.125,0.016,0.115]))
TouchSensor847 = x3d.TouchSensor()
TouchSensor847.setDescription("HAnimSite 120 hanim_r_tarsal_distal_phalanx_5_tip")

HAnimSite846.addChildren(TouchSensor847)
Shape848 = x3d.Shape()
Appearance849 = x3d.Appearance()
Material850 = x3d.Material()
Material850.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance849.setMaterial(Material850)

Shape848.setAppearance(Appearance849)
IndexedFaceSet851 = x3d.IndexedFaceSet()
IndexedFaceSet851.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet851.setCreaseAngle(0.5)
IndexedFaceSet851.setSolid(False)
ColorRGBA852 = x3d.ColorRGBA()
ColorRGBA852.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet851.setColor(ColorRGBA852)
Coordinate853 = x3d.Coordinate()
Coordinate853.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet851.setCoord(Coordinate853)

Shape848.setGeometry(IndexedFaceSet851)

HAnimSite846.addChildren(Shape848)
Billboard854 = x3d.Billboard()
Billboard854.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape855 = x3d.Shape()
Text856 = x3d.Text()
Text856.setString(["120"])
FontStyle857 = x3d.FontStyle()
FontStyle857.setSize(0.035)

Text856.setFontStyle(FontStyle857)

Shape855.setGeometry(Text856)

Billboard854.addChildren(Shape855)

HAnimSite846.addChildren(Billboard854)

HAnimSegment845.addChildren(HAnimSite846)
Shape858 = x3d.Shape()
LineSet859 = x3d.LineSet()
LineSet859.setVertexCount([2])
ColorRGBA860 = x3d.ColorRGBA()
ColorRGBA860.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet859.setColor(ColorRGBA860)
Coordinate861 = x3d.Coordinate()
Coordinate861.setPoint(x3d.doubleToFloat([-0.1269,0.00856,0.10188,-0.126,0.01086,0.09414]))

LineSet859.setCoord(Coordinate861)

Shape858.setGeometry(LineSet859)

HAnimSegment845.addChildren(Shape858)

HAnimJoint844.addChildren(HAnimSegment845)

HAnimJoint826.addChildren(HAnimJoint844)

HAnimJoint820.addChildren(HAnimJoint826)

HAnimJoint814.addChildren(HAnimJoint820)

HAnimJoint772.addChildren(HAnimJoint814)

HAnimJoint766.addChildren(HAnimJoint772)

HAnimJoint598.addChildren(HAnimJoint766)

HAnimJoint556.addChildren(HAnimJoint598)

HAnimJoint502.addChildren(HAnimJoint556)

HAnimJoint16.addChildren(HAnimJoint502)

HAnimJoint12.addChildren(HAnimJoint16)
HAnimJoint862 = x3d.HAnimJoint()
HAnimJoint862.setName("vl5")
HAnimJoint862.setDEF("hanim_vl5")
HAnimJoint862.setCenter(x3d.doubleToFloat([0,0.9254,-0.01376]))
HAnimJoint862.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint862.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment863 = x3d.HAnimSegment()
HAnimSegment863.setName("l5")
HAnimSegment863.setDEF("hanim_l5")
HAnimSite864 = x3d.HAnimSite()
HAnimSite864.setName("spine_1_middle_back")
HAnimSite864.setDEF("hanim_spine_1_middle_back_pt")
HAnimSite864.setTranslation(x3d.doubleToFloat([0,1,-0.1]))
TouchSensor865 = x3d.TouchSensor()
TouchSensor865.setDescription("HAnimSite 24 hanim_spine_1_middle_back_pt")

HAnimSite864.addChildren(TouchSensor865)
Shape866 = x3d.Shape()
Appearance867 = x3d.Appearance()
Material868 = x3d.Material()
Material868.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance867.setMaterial(Material868)

Shape866.setAppearance(Appearance867)
IndexedFaceSet869 = x3d.IndexedFaceSet()
IndexedFaceSet869.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet869.setCreaseAngle(0.5)
IndexedFaceSet869.setSolid(False)
ColorRGBA870 = x3d.ColorRGBA()
ColorRGBA870.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet869.setColor(ColorRGBA870)
Coordinate871 = x3d.Coordinate()
Coordinate871.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet869.setCoord(Coordinate871)

Shape866.setGeometry(IndexedFaceSet869)

HAnimSite864.addChildren(Shape866)
Billboard872 = x3d.Billboard()
Billboard872.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape873 = x3d.Shape()
Text874 = x3d.Text()
Text874.setString(["24"])
FontStyle875 = x3d.FontStyle()
FontStyle875.setSize(0.035)

Text874.setFontStyle(FontStyle875)

Shape873.setGeometry(Text874)

Billboard872.addChildren(Shape873)

HAnimSite864.addChildren(Billboard872)

HAnimSegment863.addChildren(HAnimSite864)
HAnimSite876 = x3d.HAnimSite()
HAnimSite876.setName("spine_2_lower_back")
HAnimSite876.setDEF("hanim_spine_2_lower_back_pt")
HAnimSite876.setTranslation(x3d.doubleToFloat([0,0.95,-0.1]))
TouchSensor877 = x3d.TouchSensor()
TouchSensor877.setDescription("HAnimSite 25 hanim_spine_2_lower_back_pt")

HAnimSite876.addChildren(TouchSensor877)
Shape878 = x3d.Shape()
Appearance879 = x3d.Appearance()
Material880 = x3d.Material()
Material880.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance879.setMaterial(Material880)

Shape878.setAppearance(Appearance879)
IndexedFaceSet881 = x3d.IndexedFaceSet()
IndexedFaceSet881.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet881.setCreaseAngle(0.5)
IndexedFaceSet881.setSolid(False)
ColorRGBA882 = x3d.ColorRGBA()
ColorRGBA882.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet881.setColor(ColorRGBA882)
Coordinate883 = x3d.Coordinate()
Coordinate883.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet881.setCoord(Coordinate883)

Shape878.setGeometry(IndexedFaceSet881)

HAnimSite876.addChildren(Shape878)
Billboard884 = x3d.Billboard()
Billboard884.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape885 = x3d.Shape()
Text886 = x3d.Text()
Text886.setString(["25"])
FontStyle887 = x3d.FontStyle()
FontStyle887.setSize(0.035)

Text886.setFontStyle(FontStyle887)

Shape885.setGeometry(Text886)

Billboard884.addChildren(Shape885)

HAnimSite876.addChildren(Billboard884)

HAnimSegment863.addChildren(HAnimSite876)
HAnimSite888 = x3d.HAnimSite()
HAnimSite888.setName("waist_preferred_anterior")
HAnimSite888.setDEF("hanim_waist_preferred_anterior_pt")
HAnimSite888.setTranslation(x3d.doubleToFloat([0,0.9,0.1]))
TouchSensor889 = x3d.TouchSensor()
TouchSensor889.setDescription("HAnimSite 26 hanim_waist_preferred_anterior_pt")

HAnimSite888.addChildren(TouchSensor889)
Shape890 = x3d.Shape()
Appearance891 = x3d.Appearance()
Material892 = x3d.Material()
Material892.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance891.setMaterial(Material892)

Shape890.setAppearance(Appearance891)
IndexedFaceSet893 = x3d.IndexedFaceSet()
IndexedFaceSet893.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet893.setCreaseAngle(0.5)
IndexedFaceSet893.setSolid(False)
ColorRGBA894 = x3d.ColorRGBA()
ColorRGBA894.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet893.setColor(ColorRGBA894)
Coordinate895 = x3d.Coordinate()
Coordinate895.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet893.setCoord(Coordinate895)

Shape890.setGeometry(IndexedFaceSet893)

HAnimSite888.addChildren(Shape890)
Billboard896 = x3d.Billboard()
Billboard896.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape897 = x3d.Shape()
Text898 = x3d.Text()
Text898.setString(["26"])
FontStyle899 = x3d.FontStyle()
FontStyle899.setSize(0.035)

Text898.setFontStyle(FontStyle899)

Shape897.setGeometry(Text898)

Billboard896.addChildren(Shape897)

HAnimSite888.addChildren(Billboard896)

HAnimSegment863.addChildren(HAnimSite888)
HAnimSite900 = x3d.HAnimSite()
HAnimSite900.setName("waist_preferred_posterior")
HAnimSite900.setDEF("hanim_waist_preferred_posterior_pt")
HAnimSite900.setTranslation(x3d.doubleToFloat([0,0.9,-0.1]))
TouchSensor901 = x3d.TouchSensor()
TouchSensor901.setDescription("HAnimSite 27 hanim_waist_preferred_posterior_pt")

HAnimSite900.addChildren(TouchSensor901)
Shape902 = x3d.Shape()
Appearance903 = x3d.Appearance()
Material904 = x3d.Material()
Material904.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance903.setMaterial(Material904)

Shape902.setAppearance(Appearance903)
IndexedFaceSet905 = x3d.IndexedFaceSet()
IndexedFaceSet905.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet905.setCreaseAngle(0.5)
IndexedFaceSet905.setSolid(False)
ColorRGBA906 = x3d.ColorRGBA()
ColorRGBA906.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet905.setColor(ColorRGBA906)
Coordinate907 = x3d.Coordinate()
Coordinate907.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet905.setCoord(Coordinate907)

Shape902.setGeometry(IndexedFaceSet905)

HAnimSite900.addChildren(Shape902)
Billboard908 = x3d.Billboard()
Billboard908.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape909 = x3d.Shape()
Text910 = x3d.Text()
Text910.setString(["27"])
FontStyle911 = x3d.FontStyle()
FontStyle911.setSize(0.035)

Text910.setFontStyle(FontStyle911)

Shape909.setGeometry(Text910)

Billboard908.addChildren(Shape909)

HAnimSite900.addChildren(Billboard908)

HAnimSegment863.addChildren(HAnimSite900)
HAnimSite912 = x3d.HAnimSite()
HAnimSite912.setName("navel")
HAnimSite912.setDEF("hanim_navel_pt")
HAnimSite912.setTranslation(x3d.doubleToFloat([0,0.9,-0.1]))
TouchSensor913 = x3d.TouchSensor()
TouchSensor913.setDescription("HAnimSite 84 hanim_navel_pt")

HAnimSite912.addChildren(TouchSensor913)
Shape914 = x3d.Shape()
Appearance915 = x3d.Appearance()
Material916 = x3d.Material()
Material916.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance915.setMaterial(Material916)

Shape914.setAppearance(Appearance915)
IndexedFaceSet917 = x3d.IndexedFaceSet()
IndexedFaceSet917.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet917.setCreaseAngle(0.5)
IndexedFaceSet917.setSolid(False)
ColorRGBA918 = x3d.ColorRGBA()
ColorRGBA918.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet917.setColor(ColorRGBA918)
Coordinate919 = x3d.Coordinate()
Coordinate919.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet917.setCoord(Coordinate919)

Shape914.setGeometry(IndexedFaceSet917)

HAnimSite912.addChildren(Shape914)
Billboard920 = x3d.Billboard()
Billboard920.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape921 = x3d.Shape()
Text922 = x3d.Text()
Text922.setString(["84"])
FontStyle923 = x3d.FontStyle()
FontStyle923.setSize(0.035)

Text922.setFontStyle(FontStyle923)

Shape921.setGeometry(Text922)

Billboard920.addChildren(Shape921)

HAnimSite912.addChildren(Billboard920)

HAnimSegment863.addChildren(HAnimSite912)
Shape924 = x3d.Shape()
LineSet925 = x3d.LineSet()
LineSet925.setVertexCount([2])
ColorRGBA926 = x3d.ColorRGBA()
ColorRGBA926.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet925.setColor(ColorRGBA926)
Coordinate927 = x3d.Coordinate()
Coordinate927.setPoint(x3d.doubleToFloat([0,0.9254,-0.01376,0,0.77,0]))

LineSet925.setCoord(Coordinate927)

Shape924.setGeometry(LineSet925)

HAnimSegment863.addChildren(Shape924)

HAnimJoint862.addChildren(HAnimSegment863)
HAnimJoint928 = x3d.HAnimJoint()
HAnimJoint928.setName("vl4")
HAnimJoint928.setDEF("hanim_vl4")
HAnimJoint928.setCenter(x3d.doubleToFloat([0,0.9497,-0.01376]))
HAnimJoint928.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint928.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment929 = x3d.HAnimSegment()
HAnimSegment929.setName("l4")
HAnimSegment929.setDEF("hanim_l4")
Shape930 = x3d.Shape()
LineSet931 = x3d.LineSet()
LineSet931.setVertexCount([2])
ColorRGBA932 = x3d.ColorRGBA()
ColorRGBA932.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet931.setColor(ColorRGBA932)
Coordinate933 = x3d.Coordinate()
Coordinate933.setPoint(x3d.doubleToFloat([0,0.9497,-0.01376,0,0.9254,-0.01376]))

LineSet931.setCoord(Coordinate933)

Shape930.setGeometry(LineSet931)

HAnimSegment929.addChildren(Shape930)

HAnimJoint928.addChildren(HAnimSegment929)
HAnimJoint934 = x3d.HAnimJoint()
HAnimJoint934.setName("vl3")
HAnimJoint934.setDEF("hanim_vl3")
HAnimJoint934.setCenter(x3d.doubleToFloat([0,0.9659,-0.01376]))
HAnimJoint934.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint934.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment935 = x3d.HAnimSegment()
HAnimSegment935.setName("l3")
HAnimSegment935.setDEF("hanim_l3")
Shape936 = x3d.Shape()
LineSet937 = x3d.LineSet()
LineSet937.setVertexCount([2])
ColorRGBA938 = x3d.ColorRGBA()
ColorRGBA938.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet937.setColor(ColorRGBA938)
Coordinate939 = x3d.Coordinate()
Coordinate939.setPoint(x3d.doubleToFloat([0,0.9659,-0.01376,0,0.9497,-0.01376]))

LineSet937.setCoord(Coordinate939)

Shape936.setGeometry(LineSet937)

HAnimSegment935.addChildren(Shape936)

HAnimJoint934.addChildren(HAnimSegment935)
HAnimJoint940 = x3d.HAnimJoint()
HAnimJoint940.setName("vl2")
HAnimJoint940.setDEF("hanim_vl2")
HAnimJoint940.setCenter(x3d.doubleToFloat([0,0.98235,-0.01376]))
HAnimJoint940.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint940.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment941 = x3d.HAnimSegment()
HAnimSegment941.setName("l2")
HAnimSegment941.setDEF("hanim_l2")
HAnimSite942 = x3d.HAnimSite()
HAnimSite942.setName("l_rib10")
HAnimSite942.setDEF("hanim_l_rib10_pt")
HAnimSite942.setTranslation(x3d.doubleToFloat([0.09,1,0.04]))
TouchSensor943 = x3d.TouchSensor()
TouchSensor943.setDescription("HAnimSite 28 hanim_l_rib10_pt")

HAnimSite942.addChildren(TouchSensor943)
Shape944 = x3d.Shape()
Appearance945 = x3d.Appearance()
Material946 = x3d.Material()
Material946.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance945.setMaterial(Material946)

Shape944.setAppearance(Appearance945)
IndexedFaceSet947 = x3d.IndexedFaceSet()
IndexedFaceSet947.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet947.setCreaseAngle(0.5)
IndexedFaceSet947.setSolid(False)
ColorRGBA948 = x3d.ColorRGBA()
ColorRGBA948.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet947.setColor(ColorRGBA948)
Coordinate949 = x3d.Coordinate()
Coordinate949.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet947.setCoord(Coordinate949)

Shape944.setGeometry(IndexedFaceSet947)

HAnimSite942.addChildren(Shape944)
Billboard950 = x3d.Billboard()
Billboard950.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape951 = x3d.Shape()
Text952 = x3d.Text()
Text952.setString(["28"])
FontStyle953 = x3d.FontStyle()
FontStyle953.setSize(0.035)

Text952.setFontStyle(FontStyle953)

Shape951.setGeometry(Text952)

Billboard950.addChildren(Shape951)

HAnimSite942.addChildren(Billboard950)

HAnimSegment941.addChildren(HAnimSite942)
HAnimSite954 = x3d.HAnimSite()
HAnimSite954.setName("r_rib10")
HAnimSite954.setDEF("hanim_r_rib10_pt")
HAnimSite954.setTranslation(x3d.doubleToFloat([-0.09,1,0.04]))
TouchSensor955 = x3d.TouchSensor()
TouchSensor955.setDescription("HAnimSite 30 hanim_r_rib10_pt")

HAnimSite954.addChildren(TouchSensor955)
Shape956 = x3d.Shape()
Appearance957 = x3d.Appearance()
Material958 = x3d.Material()
Material958.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance957.setMaterial(Material958)

Shape956.setAppearance(Appearance957)
IndexedFaceSet959 = x3d.IndexedFaceSet()
IndexedFaceSet959.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet959.setCreaseAngle(0.5)
IndexedFaceSet959.setSolid(False)
ColorRGBA960 = x3d.ColorRGBA()
ColorRGBA960.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet959.setColor(ColorRGBA960)
Coordinate961 = x3d.Coordinate()
Coordinate961.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet959.setCoord(Coordinate961)

Shape956.setGeometry(IndexedFaceSet959)

HAnimSite954.addChildren(Shape956)
Billboard962 = x3d.Billboard()
Billboard962.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape963 = x3d.Shape()
Text964 = x3d.Text()
Text964.setString(["30"])
FontStyle965 = x3d.FontStyle()
FontStyle965.setSize(0.035)

Text964.setFontStyle(FontStyle965)

Shape963.setGeometry(Text964)

Billboard962.addChildren(Shape963)

HAnimSite954.addChildren(Billboard962)

HAnimSegment941.addChildren(HAnimSite954)
Shape966 = x3d.Shape()
LineSet967 = x3d.LineSet()
LineSet967.setVertexCount([2])
ColorRGBA968 = x3d.ColorRGBA()
ColorRGBA968.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet967.setColor(ColorRGBA968)
Coordinate969 = x3d.Coordinate()
Coordinate969.setPoint(x3d.doubleToFloat([0,0.98235,-0.01376,0,0.9659,-0.01376]))

LineSet967.setCoord(Coordinate969)

Shape966.setGeometry(LineSet967)

HAnimSegment941.addChildren(Shape966)

HAnimJoint940.addChildren(HAnimSegment941)
HAnimJoint970 = x3d.HAnimJoint()
HAnimJoint970.setName("vl1")
HAnimJoint970.setDEF("hanim_vl1")
HAnimJoint970.setCenter(x3d.doubleToFloat([0,0.99967,-0.01376]))
HAnimJoint970.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint970.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment971 = x3d.HAnimSegment()
HAnimSegment971.setName("l1")
HAnimSegment971.setDEF("hanim_l1")
Shape972 = x3d.Shape()
LineSet973 = x3d.LineSet()
LineSet973.setVertexCount([2])
ColorRGBA974 = x3d.ColorRGBA()
ColorRGBA974.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet973.setColor(ColorRGBA974)
Coordinate975 = x3d.Coordinate()
Coordinate975.setPoint(x3d.doubleToFloat([0,0.99967,-0.01376,0,0.98235,-0.01376]))

LineSet973.setCoord(Coordinate975)

Shape972.setGeometry(LineSet973)

HAnimSegment971.addChildren(Shape972)

HAnimJoint970.addChildren(HAnimSegment971)
HAnimJoint976 = x3d.HAnimJoint()
HAnimJoint976.setName("vt12")
HAnimJoint976.setDEF("hanim_vt12")
HAnimJoint976.setCenter(x3d.doubleToFloat([0,1.0231,-0.01376]))
HAnimJoint976.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint976.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment977 = x3d.HAnimSegment()
HAnimSegment977.setName("t12")
HAnimSegment977.setDEF("hanim_t12")
Shape978 = x3d.Shape()
LineSet979 = x3d.LineSet()
LineSet979.setVertexCount([2])
ColorRGBA980 = x3d.ColorRGBA()
ColorRGBA980.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet979.setColor(ColorRGBA980)
Coordinate981 = x3d.Coordinate()
Coordinate981.setPoint(x3d.doubleToFloat([0,1.0231,-0.01376,0,0.99967,-0.01376]))

LineSet979.setCoord(Coordinate981)

Shape978.setGeometry(LineSet979)

HAnimSegment977.addChildren(Shape978)

HAnimJoint976.addChildren(HAnimSegment977)
HAnimJoint982 = x3d.HAnimJoint()
HAnimJoint982.setName("vt11")
HAnimJoint982.setDEF("hanim_vt11")
HAnimJoint982.setCenter(x3d.doubleToFloat([0,1.0467,-0.01376]))
HAnimJoint982.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint982.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment983 = x3d.HAnimSegment()
HAnimSegment983.setName("t11")
HAnimSegment983.setDEF("hanim_t11")
Shape984 = x3d.Shape()
LineSet985 = x3d.LineSet()
LineSet985.setVertexCount([2])
ColorRGBA986 = x3d.ColorRGBA()
ColorRGBA986.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet985.setColor(ColorRGBA986)
Coordinate987 = x3d.Coordinate()
Coordinate987.setPoint(x3d.doubleToFloat([0,1.0467,-0.01376,0,1.0231,-0.01376]))

LineSet985.setCoord(Coordinate987)

Shape984.setGeometry(LineSet985)

HAnimSegment983.addChildren(Shape984)

HAnimJoint982.addChildren(HAnimSegment983)
HAnimJoint988 = x3d.HAnimJoint()
HAnimJoint988.setName("vt10")
HAnimJoint988.setDEF("hanim_vt10")
HAnimJoint988.setCenter(x3d.doubleToFloat([0,1.0638,-0.01378]))
HAnimJoint988.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint988.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment989 = x3d.HAnimSegment()
HAnimSegment989.setName("t10")
HAnimSegment989.setDEF("hanim_t10")
HAnimSite990 = x3d.HAnimSite()
HAnimSite990.setName("substernale")
HAnimSite990.setDEF("hanim_substernale_pt")
HAnimSite990.setTranslation(x3d.doubleToFloat([0,1.08,0.076]))
TouchSensor991 = x3d.TouchSensor()
TouchSensor991.setDescription("HAnimSite 13 hanim_substernale_pt")

HAnimSite990.addChildren(TouchSensor991)
Shape992 = x3d.Shape()
Appearance993 = x3d.Appearance()
Material994 = x3d.Material()
Material994.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance993.setMaterial(Material994)

Shape992.setAppearance(Appearance993)
IndexedFaceSet995 = x3d.IndexedFaceSet()
IndexedFaceSet995.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet995.setCreaseAngle(0.5)
IndexedFaceSet995.setSolid(False)
ColorRGBA996 = x3d.ColorRGBA()
ColorRGBA996.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet995.setColor(ColorRGBA996)
Coordinate997 = x3d.Coordinate()
Coordinate997.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet995.setCoord(Coordinate997)

Shape992.setGeometry(IndexedFaceSet995)

HAnimSite990.addChildren(Shape992)
Billboard998 = x3d.Billboard()
Billboard998.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape999 = x3d.Shape()
Text1000 = x3d.Text()
Text1000.setString(["13"])
FontStyle1001 = x3d.FontStyle()
FontStyle1001.setSize(0.035)

Text1000.setFontStyle(FontStyle1001)

Shape999.setGeometry(Text1000)

Billboard998.addChildren(Shape999)

HAnimSite990.addChildren(Billboard998)

HAnimSegment989.addChildren(HAnimSite990)
HAnimSite1002 = x3d.HAnimSite()
HAnimSite1002.setName("mesosternale")
HAnimSite1002.setDEF("hanim_mesosternale_pt")
HAnimSite1002.setTranslation(x3d.doubleToFloat([0,1.15,0.076]))
TouchSensor1003 = x3d.TouchSensor()
TouchSensor1003.setDescription("HAnimSite 88 hanim_mesosternale_pt")

HAnimSite1002.addChildren(TouchSensor1003)
Shape1004 = x3d.Shape()
Appearance1005 = x3d.Appearance()
Material1006 = x3d.Material()
Material1006.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1005.setMaterial(Material1006)

Shape1004.setAppearance(Appearance1005)
IndexedFaceSet1007 = x3d.IndexedFaceSet()
IndexedFaceSet1007.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1007.setCreaseAngle(0.5)
IndexedFaceSet1007.setSolid(False)
ColorRGBA1008 = x3d.ColorRGBA()
ColorRGBA1008.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1007.setColor(ColorRGBA1008)
Coordinate1009 = x3d.Coordinate()
Coordinate1009.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1007.setCoord(Coordinate1009)

Shape1004.setGeometry(IndexedFaceSet1007)

HAnimSite1002.addChildren(Shape1004)
Billboard1010 = x3d.Billboard()
Billboard1010.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1011 = x3d.Shape()
Text1012 = x3d.Text()
Text1012.setString(["88"])
FontStyle1013 = x3d.FontStyle()
FontStyle1013.setSize(0.035)

Text1012.setFontStyle(FontStyle1013)

Shape1011.setGeometry(Text1012)

Billboard1010.addChildren(Shape1011)

HAnimSite1002.addChildren(Billboard1010)

HAnimSegment989.addChildren(HAnimSite1002)
Shape1014 = x3d.Shape()
LineSet1015 = x3d.LineSet()
LineSet1015.setVertexCount([2])
ColorRGBA1016 = x3d.ColorRGBA()
ColorRGBA1016.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1015.setColor(ColorRGBA1016)
Coordinate1017 = x3d.Coordinate()
Coordinate1017.setPoint(x3d.doubleToFloat([0,1.0638,-0.01378,0,1.0467,-0.01376]))

LineSet1015.setCoord(Coordinate1017)

Shape1014.setGeometry(LineSet1015)

HAnimSegment989.addChildren(Shape1014)

HAnimJoint988.addChildren(HAnimSegment989)
HAnimJoint1018 = x3d.HAnimJoint()
HAnimJoint1018.setName("vt9")
HAnimJoint1018.setDEF("hanim_vt9")
HAnimJoint1018.setCenter(x3d.doubleToFloat([0,1.0784,-0.01376]))
HAnimJoint1018.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1018.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1019 = x3d.HAnimSegment()
HAnimSegment1019.setName("t9")
HAnimSegment1019.setDEF("hanim_t9")
HAnimSite1020 = x3d.HAnimSite()
HAnimSite1020.setName("l_thelion")
HAnimSite1020.setDEF("hanim_l_thelion_pt")
HAnimSite1020.setTranslation(x3d.doubleToFloat([0.07,1.12,0.09]))
TouchSensor1021 = x3d.TouchSensor()
TouchSensor1021.setDescription("HAnimSite 29 hanim_l_thelion_pt")

HAnimSite1020.addChildren(TouchSensor1021)
Shape1022 = x3d.Shape()
Appearance1023 = x3d.Appearance()
Material1024 = x3d.Material()
Material1024.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1023.setMaterial(Material1024)

Shape1022.setAppearance(Appearance1023)
IndexedFaceSet1025 = x3d.IndexedFaceSet()
IndexedFaceSet1025.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1025.setCreaseAngle(0.5)
IndexedFaceSet1025.setSolid(False)
ColorRGBA1026 = x3d.ColorRGBA()
ColorRGBA1026.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1025.setColor(ColorRGBA1026)
Coordinate1027 = x3d.Coordinate()
Coordinate1027.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1025.setCoord(Coordinate1027)

Shape1022.setGeometry(IndexedFaceSet1025)

HAnimSite1020.addChildren(Shape1022)
Billboard1028 = x3d.Billboard()
Billboard1028.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1029 = x3d.Shape()
Text1030 = x3d.Text()
Text1030.setString(["29"])
FontStyle1031 = x3d.FontStyle()
FontStyle1031.setSize(0.035)

Text1030.setFontStyle(FontStyle1031)

Shape1029.setGeometry(Text1030)

Billboard1028.addChildren(Shape1029)

HAnimSite1020.addChildren(Billboard1028)

HAnimSegment1019.addChildren(HAnimSite1020)
HAnimSite1032 = x3d.HAnimSite()
HAnimSite1032.setName("r_thelion")
HAnimSite1032.setDEF("hanim_r_thelion_pt")
HAnimSite1032.setTranslation(x3d.doubleToFloat([-0.07,1.12,0.09]))
TouchSensor1033 = x3d.TouchSensor()
TouchSensor1033.setDescription("HAnimSite 31 hanim_r_thelion_pt")

HAnimSite1032.addChildren(TouchSensor1033)
Shape1034 = x3d.Shape()
Appearance1035 = x3d.Appearance()
Material1036 = x3d.Material()
Material1036.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1035.setMaterial(Material1036)

Shape1034.setAppearance(Appearance1035)
IndexedFaceSet1037 = x3d.IndexedFaceSet()
IndexedFaceSet1037.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1037.setCreaseAngle(0.5)
IndexedFaceSet1037.setSolid(False)
ColorRGBA1038 = x3d.ColorRGBA()
ColorRGBA1038.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1037.setColor(ColorRGBA1038)
Coordinate1039 = x3d.Coordinate()
Coordinate1039.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1037.setCoord(Coordinate1039)

Shape1034.setGeometry(IndexedFaceSet1037)

HAnimSite1032.addChildren(Shape1034)
Billboard1040 = x3d.Billboard()
Billboard1040.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1041 = x3d.Shape()
Text1042 = x3d.Text()
Text1042.setString(["31"])
FontStyle1043 = x3d.FontStyle()
FontStyle1043.setSize(0.035)

Text1042.setFontStyle(FontStyle1043)

Shape1041.setGeometry(Text1042)

Billboard1040.addChildren(Shape1041)

HAnimSite1032.addChildren(Billboard1040)

HAnimSegment1019.addChildren(HAnimSite1032)
HAnimSite1044 = x3d.HAnimSite()
HAnimSite1044.setName("rear_center_midsagittal_plane")
HAnimSite1044.setDEF("hanim_rear_center_midsagittal_plane_pt")
HAnimSite1044.setTranslation(x3d.doubleToFloat([0,1.1,-0.1]))
TouchSensor1045 = x3d.TouchSensor()
TouchSensor1045.setDescription("HAnimSite 92 hanim_rear_center_midsagittal_plane_pt")

HAnimSite1044.addChildren(TouchSensor1045)
Shape1046 = x3d.Shape()
Appearance1047 = x3d.Appearance()
Material1048 = x3d.Material()
Material1048.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1047.setMaterial(Material1048)

Shape1046.setAppearance(Appearance1047)
IndexedFaceSet1049 = x3d.IndexedFaceSet()
IndexedFaceSet1049.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1049.setCreaseAngle(0.5)
IndexedFaceSet1049.setSolid(False)
ColorRGBA1050 = x3d.ColorRGBA()
ColorRGBA1050.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1049.setColor(ColorRGBA1050)
Coordinate1051 = x3d.Coordinate()
Coordinate1051.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1049.setCoord(Coordinate1051)

Shape1046.setGeometry(IndexedFaceSet1049)

HAnimSite1044.addChildren(Shape1046)
Billboard1052 = x3d.Billboard()
Billboard1052.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1053 = x3d.Shape()
Text1054 = x3d.Text()
Text1054.setString(["92"])
FontStyle1055 = x3d.FontStyle()
FontStyle1055.setSize(0.035)

Text1054.setFontStyle(FontStyle1055)

Shape1053.setGeometry(Text1054)

Billboard1052.addChildren(Shape1053)

HAnimSite1044.addChildren(Billboard1052)

HAnimSegment1019.addChildren(HAnimSite1044)
HAnimSite1056 = x3d.HAnimSite()
HAnimSite1056.setName("l_chest_midsagittal_plane")
HAnimSite1056.setDEF("hanim_l_chest_midsagittal_plane_pt")
HAnimSite1056.setTranslation(x3d.doubleToFloat([0.13,1.12,0]))
TouchSensor1057 = x3d.TouchSensor()
TouchSensor1057.setDescription("HAnimSite 94 hanim_l_chest_midsagittal_plane_pt")

HAnimSite1056.addChildren(TouchSensor1057)
Shape1058 = x3d.Shape()
Appearance1059 = x3d.Appearance()
Material1060 = x3d.Material()
Material1060.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1059.setMaterial(Material1060)

Shape1058.setAppearance(Appearance1059)
IndexedFaceSet1061 = x3d.IndexedFaceSet()
IndexedFaceSet1061.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1061.setCreaseAngle(0.5)
IndexedFaceSet1061.setSolid(False)
ColorRGBA1062 = x3d.ColorRGBA()
ColorRGBA1062.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1061.setColor(ColorRGBA1062)
Coordinate1063 = x3d.Coordinate()
Coordinate1063.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1061.setCoord(Coordinate1063)

Shape1058.setGeometry(IndexedFaceSet1061)

HAnimSite1056.addChildren(Shape1058)
Billboard1064 = x3d.Billboard()
Billboard1064.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1065 = x3d.Shape()
Text1066 = x3d.Text()
Text1066.setString(["94"])
FontStyle1067 = x3d.FontStyle()
FontStyle1067.setSize(0.035)

Text1066.setFontStyle(FontStyle1067)

Shape1065.setGeometry(Text1066)

Billboard1064.addChildren(Shape1065)

HAnimSite1056.addChildren(Billboard1064)

HAnimSegment1019.addChildren(HAnimSite1056)
HAnimSite1068 = x3d.HAnimSite()
HAnimSite1068.setName("r_chest_midsagittal_plane")
HAnimSite1068.setDEF("hanim_r_chest_midsagittal_plane_pt")
HAnimSite1068.setTranslation(x3d.doubleToFloat([-0.13,1.12,0]))
TouchSensor1069 = x3d.TouchSensor()
TouchSensor1069.setDescription("HAnimSite 95 hanim_r_chest_midsagittal_plane_pt")

HAnimSite1068.addChildren(TouchSensor1069)
Shape1070 = x3d.Shape()
Appearance1071 = x3d.Appearance()
Material1072 = x3d.Material()
Material1072.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1071.setMaterial(Material1072)

Shape1070.setAppearance(Appearance1071)
IndexedFaceSet1073 = x3d.IndexedFaceSet()
IndexedFaceSet1073.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1073.setCreaseAngle(0.5)
IndexedFaceSet1073.setSolid(False)
ColorRGBA1074 = x3d.ColorRGBA()
ColorRGBA1074.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1073.setColor(ColorRGBA1074)
Coordinate1075 = x3d.Coordinate()
Coordinate1075.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1073.setCoord(Coordinate1075)

Shape1070.setGeometry(IndexedFaceSet1073)

HAnimSite1068.addChildren(Shape1070)
Billboard1076 = x3d.Billboard()
Billboard1076.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1077 = x3d.Shape()
Text1078 = x3d.Text()
Text1078.setString(["95"])
FontStyle1079 = x3d.FontStyle()
FontStyle1079.setSize(0.035)

Text1078.setFontStyle(FontStyle1079)

Shape1077.setGeometry(Text1078)

Billboard1076.addChildren(Shape1077)

HAnimSite1068.addChildren(Billboard1076)

HAnimSegment1019.addChildren(HAnimSite1068)
Shape1080 = x3d.Shape()
LineSet1081 = x3d.LineSet()
LineSet1081.setVertexCount([2])
ColorRGBA1082 = x3d.ColorRGBA()
ColorRGBA1082.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1081.setColor(ColorRGBA1082)
Coordinate1083 = x3d.Coordinate()
Coordinate1083.setPoint(x3d.doubleToFloat([0,1.0784,-0.01376,0,1.0638,-0.01378]))

LineSet1081.setCoord(Coordinate1083)

Shape1080.setGeometry(LineSet1081)

HAnimSegment1019.addChildren(Shape1080)

HAnimJoint1018.addChildren(HAnimSegment1019)
HAnimJoint1084 = x3d.HAnimJoint()
HAnimJoint1084.setName("vt8")
HAnimJoint1084.setDEF("hanim_vt8")
HAnimJoint1084.setCenter(x3d.doubleToFloat([0,1.093,-0.01376]))
HAnimJoint1084.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1084.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1085 = x3d.HAnimSegment()
HAnimSegment1085.setName("t8")
HAnimSegment1085.setDEF("hanim_t8")
Shape1086 = x3d.Shape()
LineSet1087 = x3d.LineSet()
LineSet1087.setVertexCount([2])
ColorRGBA1088 = x3d.ColorRGBA()
ColorRGBA1088.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1087.setColor(ColorRGBA1088)
Coordinate1089 = x3d.Coordinate()
Coordinate1089.setPoint(x3d.doubleToFloat([0,1.093,-0.01376,0,1.0784,-0.01376]))

LineSet1087.setCoord(Coordinate1089)

Shape1086.setGeometry(LineSet1087)

HAnimSegment1085.addChildren(Shape1086)

HAnimJoint1084.addChildren(HAnimSegment1085)
HAnimJoint1090 = x3d.HAnimJoint()
HAnimJoint1090.setName("vt7")
HAnimJoint1090.setDEF("hanim_vt7")
HAnimJoint1090.setCenter(x3d.doubleToFloat([0,1.1088,-0.01376]))
HAnimJoint1090.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1090.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1091 = x3d.HAnimSegment()
HAnimSegment1091.setName("t7")
HAnimSegment1091.setDEF("hanim_t7")
Shape1092 = x3d.Shape()
LineSet1093 = x3d.LineSet()
LineSet1093.setVertexCount([2])
ColorRGBA1094 = x3d.ColorRGBA()
ColorRGBA1094.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1093.setColor(ColorRGBA1094)
Coordinate1095 = x3d.Coordinate()
Coordinate1095.setPoint(x3d.doubleToFloat([0,1.1088,-0.01376,0,1.093,-0.01376]))

LineSet1093.setCoord(Coordinate1095)

Shape1092.setGeometry(LineSet1093)

HAnimSegment1091.addChildren(Shape1092)

HAnimJoint1090.addChildren(HAnimSegment1091)
HAnimJoint1096 = x3d.HAnimJoint()
HAnimJoint1096.setName("vt6")
HAnimJoint1096.setDEF("hanim_vt6")
HAnimJoint1096.setCenter(x3d.doubleToFloat([0,1.1216,-0.01376]))
HAnimJoint1096.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1096.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1097 = x3d.HAnimSegment()
HAnimSegment1097.setName("t6")
HAnimSegment1097.setDEF("hanim_t6")
Shape1098 = x3d.Shape()
LineSet1099 = x3d.LineSet()
LineSet1099.setVertexCount([2])
ColorRGBA1100 = x3d.ColorRGBA()
ColorRGBA1100.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1099.setColor(ColorRGBA1100)
Coordinate1101 = x3d.Coordinate()
Coordinate1101.setPoint(x3d.doubleToFloat([0,1.1216,-0.01376,0,1.1088,-0.01376]))

LineSet1099.setCoord(Coordinate1101)

Shape1098.setGeometry(LineSet1099)

HAnimSegment1097.addChildren(Shape1098)

HAnimJoint1096.addChildren(HAnimSegment1097)
HAnimJoint1102 = x3d.HAnimJoint()
HAnimJoint1102.setName("vt5")
HAnimJoint1102.setDEF("hanim_vt5")
HAnimJoint1102.setCenter(x3d.doubleToFloat([0,1.137,-0.01376]))
HAnimJoint1102.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1102.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1103 = x3d.HAnimSegment()
HAnimSegment1103.setName("t5")
HAnimSegment1103.setDEF("hanim_t5")
Shape1104 = x3d.Shape()
LineSet1105 = x3d.LineSet()
LineSet1105.setVertexCount([2])
ColorRGBA1106 = x3d.ColorRGBA()
ColorRGBA1106.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1105.setColor(ColorRGBA1106)
Coordinate1107 = x3d.Coordinate()
Coordinate1107.setPoint(x3d.doubleToFloat([0,1.137,-0.01376,0,1.1216,-0.01376]))

LineSet1105.setCoord(Coordinate1107)

Shape1104.setGeometry(LineSet1105)

HAnimSegment1103.addChildren(Shape1104)

HAnimJoint1102.addChildren(HAnimSegment1103)
HAnimJoint1108 = x3d.HAnimJoint()
HAnimJoint1108.setName("vt4")
HAnimJoint1108.setDEF("hanim_vt4")
HAnimJoint1108.setCenter(x3d.doubleToFloat([0,1.1524,-0.01376]))
HAnimJoint1108.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1108.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1109 = x3d.HAnimSegment()
HAnimSegment1109.setName("t4")
HAnimSegment1109.setDEF("hanim_t4")
Shape1110 = x3d.Shape()
LineSet1111 = x3d.LineSet()
LineSet1111.setVertexCount([2])
ColorRGBA1112 = x3d.ColorRGBA()
ColorRGBA1112.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1111.setColor(ColorRGBA1112)
Coordinate1113 = x3d.Coordinate()
Coordinate1113.setPoint(x3d.doubleToFloat([0,1.1524,-0.01376,0,1.137,-0.01376]))

LineSet1111.setCoord(Coordinate1113)

Shape1110.setGeometry(LineSet1111)

HAnimSegment1109.addChildren(Shape1110)

HAnimJoint1108.addChildren(HAnimSegment1109)
HAnimJoint1114 = x3d.HAnimJoint()
HAnimJoint1114.setName("vt3")
HAnimJoint1114.setDEF("hanim_vt3")
HAnimJoint1114.setCenter(x3d.doubleToFloat([0,1.1709,-0.01376]))
HAnimJoint1114.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1114.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1115 = x3d.HAnimSegment()
HAnimSegment1115.setName("t3")
HAnimSegment1115.setDEF("hanim_t3")
Shape1116 = x3d.Shape()
LineSet1117 = x3d.LineSet()
LineSet1117.setVertexCount([2])
ColorRGBA1118 = x3d.ColorRGBA()
ColorRGBA1118.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1117.setColor(ColorRGBA1118)
Coordinate1119 = x3d.Coordinate()
Coordinate1119.setPoint(x3d.doubleToFloat([0,1.1709,-0.01376,0,1.1524,-0.01376]))

LineSet1117.setCoord(Coordinate1119)

Shape1116.setGeometry(LineSet1117)

HAnimSegment1115.addChildren(Shape1116)

HAnimJoint1114.addChildren(HAnimSegment1115)
HAnimJoint1120 = x3d.HAnimJoint()
HAnimJoint1120.setName("vt2")
HAnimJoint1120.setDEF("hanim_vt2")
HAnimJoint1120.setCenter(x3d.doubleToFloat([0,1.1956,-0.01378]))
HAnimJoint1120.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1120.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1121 = x3d.HAnimSegment()
HAnimSegment1121.setName("t2")
HAnimSegment1121.setDEF("hanim_t2")
Shape1122 = x3d.Shape()
LineSet1123 = x3d.LineSet()
LineSet1123.setVertexCount([2])
ColorRGBA1124 = x3d.ColorRGBA()
ColorRGBA1124.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1123.setColor(ColorRGBA1124)
Coordinate1125 = x3d.Coordinate()
Coordinate1125.setPoint(x3d.doubleToFloat([0,1.1956,-0.01378,0,1.1709,-0.01376]))

LineSet1123.setCoord(Coordinate1125)

Shape1122.setGeometry(LineSet1123)

HAnimSegment1121.addChildren(Shape1122)

HAnimJoint1120.addChildren(HAnimSegment1121)
HAnimJoint1126 = x3d.HAnimJoint()
HAnimJoint1126.setName("vt1")
HAnimJoint1126.setDEF("hanim_vt1")
HAnimJoint1126.setCenter(x3d.doubleToFloat([0,1.22,-0.0138]))
HAnimJoint1126.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1126.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1127 = x3d.HAnimSegment()
HAnimSegment1127.setName("t1")
HAnimSegment1127.setDEF("hanim_t1")
HAnimSite1128 = x3d.HAnimSite()
HAnimSite1128.setName("suprasternale")
HAnimSite1128.setDEF("hanim_suprasternale_pt")
HAnimSite1128.setTranslation(x3d.doubleToFloat([0,1.22,0.08]))
TouchSensor1129 = x3d.TouchSensor()
TouchSensor1129.setDescription("HAnimSite 12 hanim_suprasternale_pt")

HAnimSite1128.addChildren(TouchSensor1129)
Shape1130 = x3d.Shape()
Appearance1131 = x3d.Appearance()
Material1132 = x3d.Material()
Material1132.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1131.setMaterial(Material1132)

Shape1130.setAppearance(Appearance1131)
IndexedFaceSet1133 = x3d.IndexedFaceSet()
IndexedFaceSet1133.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1133.setCreaseAngle(0.5)
IndexedFaceSet1133.setSolid(False)
ColorRGBA1134 = x3d.ColorRGBA()
ColorRGBA1134.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1133.setColor(ColorRGBA1134)
Coordinate1135 = x3d.Coordinate()
Coordinate1135.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1133.setCoord(Coordinate1135)

Shape1130.setGeometry(IndexedFaceSet1133)

HAnimSite1128.addChildren(Shape1130)
Billboard1136 = x3d.Billboard()
Billboard1136.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1137 = x3d.Shape()
Text1138 = x3d.Text()
Text1138.setString(["12"])
FontStyle1139 = x3d.FontStyle()
FontStyle1139.setSize(0.035)

Text1138.setFontStyle(FontStyle1139)

Shape1137.setGeometry(Text1138)

Billboard1136.addChildren(Shape1137)

HAnimSite1128.addChildren(Billboard1136)

HAnimSegment1127.addChildren(HAnimSite1128)
HAnimSite1140 = x3d.HAnimSite()
HAnimSite1140.setName("cervicale")
HAnimSite1140.setDEF("hanim_cervicale_pt")
HAnimSite1140.setTranslation(x3d.doubleToFloat([0,1.22,-0.08]))
TouchSensor1141 = x3d.TouchSensor()
TouchSensor1141.setDescription("HAnimSite 10 hanim_cervicale_pt")

HAnimSite1140.addChildren(TouchSensor1141)
Shape1142 = x3d.Shape()
Appearance1143 = x3d.Appearance()
Material1144 = x3d.Material()
Material1144.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1143.setMaterial(Material1144)

Shape1142.setAppearance(Appearance1143)
IndexedFaceSet1145 = x3d.IndexedFaceSet()
IndexedFaceSet1145.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1145.setCreaseAngle(0.5)
IndexedFaceSet1145.setSolid(False)
ColorRGBA1146 = x3d.ColorRGBA()
ColorRGBA1146.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1145.setColor(ColorRGBA1146)
Coordinate1147 = x3d.Coordinate()
Coordinate1147.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1145.setCoord(Coordinate1147)

Shape1142.setGeometry(IndexedFaceSet1145)

HAnimSite1140.addChildren(Shape1142)
Billboard1148 = x3d.Billboard()
Billboard1148.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1149 = x3d.Shape()
Text1150 = x3d.Text()
Text1150.setString(["10"])
FontStyle1151 = x3d.FontStyle()
FontStyle1151.setSize(0.035)

Text1150.setFontStyle(FontStyle1151)

Shape1149.setGeometry(Text1150)

Billboard1148.addChildren(Shape1149)

HAnimSite1140.addChildren(Billboard1148)

HAnimSegment1127.addChildren(HAnimSite1140)
Shape1152 = x3d.Shape()
LineSet1153 = x3d.LineSet()
LineSet1153.setVertexCount([2])
ColorRGBA1154 = x3d.ColorRGBA()
ColorRGBA1154.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1153.setColor(ColorRGBA1154)
Coordinate1155 = x3d.Coordinate()
Coordinate1155.setPoint(x3d.doubleToFloat([0,1.22,-0.0138,0,1.1956,-0.01378]))

LineSet1153.setCoord(Coordinate1155)

Shape1152.setGeometry(LineSet1153)

HAnimSegment1127.addChildren(Shape1152)

HAnimJoint1126.addChildren(HAnimSegment1127)
HAnimJoint1156 = x3d.HAnimJoint()
HAnimJoint1156.setName("vc7")
HAnimJoint1156.setDEF("hanim_vc7")
HAnimJoint1156.setCenter(x3d.doubleToFloat([0,1.2453,-0.01506]))
HAnimJoint1156.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1156.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1157 = x3d.HAnimSegment()
HAnimSegment1157.setName("c7")
HAnimSegment1157.setDEF("hanim_c7")
HAnimSite1158 = x3d.HAnimSite()
HAnimSite1158.setName("l_neck_base")
HAnimSite1158.setDEF("hanim_l_neck_base_pt")
HAnimSite1158.setTranslation(x3d.doubleToFloat([0.06,1.26,0]))
TouchSensor1159 = x3d.TouchSensor()
TouchSensor1159.setDescription("HAnimSite 82 hanim_l_neck_base_pt")

HAnimSite1158.addChildren(TouchSensor1159)
Shape1160 = x3d.Shape()
Appearance1161 = x3d.Appearance()
Material1162 = x3d.Material()
Material1162.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1161.setMaterial(Material1162)

Shape1160.setAppearance(Appearance1161)
IndexedFaceSet1163 = x3d.IndexedFaceSet()
IndexedFaceSet1163.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1163.setCreaseAngle(0.5)
IndexedFaceSet1163.setSolid(False)
ColorRGBA1164 = x3d.ColorRGBA()
ColorRGBA1164.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1163.setColor(ColorRGBA1164)
Coordinate1165 = x3d.Coordinate()
Coordinate1165.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1163.setCoord(Coordinate1165)

Shape1160.setGeometry(IndexedFaceSet1163)

HAnimSite1158.addChildren(Shape1160)
Billboard1166 = x3d.Billboard()
Billboard1166.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1167 = x3d.Shape()
Text1168 = x3d.Text()
Text1168.setString(["82"])
FontStyle1169 = x3d.FontStyle()
FontStyle1169.setSize(0.035)

Text1168.setFontStyle(FontStyle1169)

Shape1167.setGeometry(Text1168)

Billboard1166.addChildren(Shape1167)

HAnimSite1158.addChildren(Billboard1166)

HAnimSegment1157.addChildren(HAnimSite1158)
HAnimSite1170 = x3d.HAnimSite()
HAnimSite1170.setName("r_neck_base")
HAnimSite1170.setDEF("hanim_r_neck_base_pt")
HAnimSite1170.setTranslation(x3d.doubleToFloat([-0.06,1.26,0]))
TouchSensor1171 = x3d.TouchSensor()
TouchSensor1171.setDescription("HAnimSite 83 hanim_r_neck_base_pt")

HAnimSite1170.addChildren(TouchSensor1171)
Shape1172 = x3d.Shape()
Appearance1173 = x3d.Appearance()
Material1174 = x3d.Material()
Material1174.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1173.setMaterial(Material1174)

Shape1172.setAppearance(Appearance1173)
IndexedFaceSet1175 = x3d.IndexedFaceSet()
IndexedFaceSet1175.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1175.setCreaseAngle(0.5)
IndexedFaceSet1175.setSolid(False)
ColorRGBA1176 = x3d.ColorRGBA()
ColorRGBA1176.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1175.setColor(ColorRGBA1176)
Coordinate1177 = x3d.Coordinate()
Coordinate1177.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1175.setCoord(Coordinate1177)

Shape1172.setGeometry(IndexedFaceSet1175)

HAnimSite1170.addChildren(Shape1172)
Billboard1178 = x3d.Billboard()
Billboard1178.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1179 = x3d.Shape()
Text1180 = x3d.Text()
Text1180.setString(["83"])
FontStyle1181 = x3d.FontStyle()
FontStyle1181.setSize(0.035)

Text1180.setFontStyle(FontStyle1181)

Shape1179.setGeometry(Text1180)

Billboard1178.addChildren(Shape1179)

HAnimSite1170.addChildren(Billboard1178)

HAnimSegment1157.addChildren(HAnimSite1170)
Shape1182 = x3d.Shape()
LineSet1183 = x3d.LineSet()
LineSet1183.setVertexCount([2])
ColorRGBA1184 = x3d.ColorRGBA()
ColorRGBA1184.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1183.setColor(ColorRGBA1184)
Coordinate1185 = x3d.Coordinate()
Coordinate1185.setPoint(x3d.doubleToFloat([0,1.2453,-0.01506,0,1.22,-0.0138]))

LineSet1183.setCoord(Coordinate1185)

Shape1182.setGeometry(LineSet1183)

HAnimSegment1157.addChildren(Shape1182)

HAnimJoint1156.addChildren(HAnimSegment1157)
HAnimJoint1186 = x3d.HAnimJoint()
HAnimJoint1186.setName("vc6")
HAnimJoint1186.setDEF("hanim_vc6")
HAnimJoint1186.setCenter(x3d.doubleToFloat([0,1.2575,-0.01506]))
HAnimJoint1186.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1186.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1187 = x3d.HAnimSegment()
HAnimSegment1187.setName("c6")
HAnimSegment1187.setDEF("hanim_c6")
Shape1188 = x3d.Shape()
LineSet1189 = x3d.LineSet()
LineSet1189.setVertexCount([2])
ColorRGBA1190 = x3d.ColorRGBA()
ColorRGBA1190.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1189.setColor(ColorRGBA1190)
Coordinate1191 = x3d.Coordinate()
Coordinate1191.setPoint(x3d.doubleToFloat([0,1.2575,-0.01506,0,1.2453,-0.01506]))

LineSet1189.setCoord(Coordinate1191)

Shape1188.setGeometry(LineSet1189)

HAnimSegment1187.addChildren(Shape1188)

HAnimJoint1186.addChildren(HAnimSegment1187)
HAnimJoint1192 = x3d.HAnimJoint()
HAnimJoint1192.setName("vc5")
HAnimJoint1192.setDEF("hanim_vc5")
HAnimJoint1192.setCenter(x3d.doubleToFloat([0,1.2699,-0.01506]))
HAnimJoint1192.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1192.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1193 = x3d.HAnimSegment()
HAnimSegment1193.setName("c5")
HAnimSegment1193.setDEF("hanim_c5")
Shape1194 = x3d.Shape()
LineSet1195 = x3d.LineSet()
LineSet1195.setVertexCount([2])
ColorRGBA1196 = x3d.ColorRGBA()
ColorRGBA1196.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1195.setColor(ColorRGBA1196)
Coordinate1197 = x3d.Coordinate()
Coordinate1197.setPoint(x3d.doubleToFloat([0,1.2699,-0.01506,0,1.2575,-0.01506]))

LineSet1195.setCoord(Coordinate1197)

Shape1194.setGeometry(LineSet1195)

HAnimSegment1193.addChildren(Shape1194)

HAnimJoint1192.addChildren(HAnimSegment1193)
HAnimJoint1198 = x3d.HAnimJoint()
HAnimJoint1198.setName("vc4")
HAnimJoint1198.setDEF("hanim_vc4")
HAnimJoint1198.setCenter(x3d.doubleToFloat([0,1.28227,-0.01506]))
HAnimJoint1198.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1198.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1199 = x3d.HAnimSegment()
HAnimSegment1199.setName("c4")
HAnimSegment1199.setDEF("hanim_c4")
Shape1200 = x3d.Shape()
LineSet1201 = x3d.LineSet()
LineSet1201.setVertexCount([2])
ColorRGBA1202 = x3d.ColorRGBA()
ColorRGBA1202.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1201.setColor(ColorRGBA1202)
Coordinate1203 = x3d.Coordinate()
Coordinate1203.setPoint(x3d.doubleToFloat([0,1.28227,-0.01506,0,1.2699,-0.01506]))

LineSet1201.setCoord(Coordinate1203)

Shape1200.setGeometry(LineSet1201)

HAnimSegment1199.addChildren(Shape1200)

HAnimJoint1198.addChildren(HAnimSegment1199)
HAnimJoint1204 = x3d.HAnimJoint()
HAnimJoint1204.setName("vc3")
HAnimJoint1204.setDEF("hanim_vc3")
HAnimJoint1204.setCenter(x3d.doubleToFloat([0,1.2951,-0.01506]))
HAnimJoint1204.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1204.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1205 = x3d.HAnimSegment()
HAnimSegment1205.setName("c3")
HAnimSegment1205.setDEF("hanim_c3")
Shape1206 = x3d.Shape()
LineSet1207 = x3d.LineSet()
LineSet1207.setVertexCount([2])
ColorRGBA1208 = x3d.ColorRGBA()
ColorRGBA1208.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1207.setColor(ColorRGBA1208)
Coordinate1209 = x3d.Coordinate()
Coordinate1209.setPoint(x3d.doubleToFloat([0,1.2951,-0.01506,0,1.28227,-0.01506]))

LineSet1207.setCoord(Coordinate1209)

Shape1206.setGeometry(LineSet1207)

HAnimSegment1205.addChildren(Shape1206)

HAnimJoint1204.addChildren(HAnimSegment1205)
HAnimJoint1210 = x3d.HAnimJoint()
HAnimJoint1210.setName("vc2")
HAnimJoint1210.setDEF("hanim_vc2")
HAnimJoint1210.setCenter(x3d.doubleToFloat([0,1.307,-0.015]))
HAnimJoint1210.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1210.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1211 = x3d.HAnimSegment()
HAnimSegment1211.setName("c2")
HAnimSegment1211.setDEF("hanim_c2")
HAnimSite1212 = x3d.HAnimSite()
HAnimSite1212.setName("adams_apple")
HAnimSite1212.setDEF("hanim_adams_apple_pt")
HAnimSite1212.setTranslation(x3d.doubleToFloat([0,1.29,0.04]))
TouchSensor1213 = x3d.TouchSensor()
TouchSensor1213.setDescription("HAnimSite 11 hanim_adams_apple_pt")

HAnimSite1212.addChildren(TouchSensor1213)
Shape1214 = x3d.Shape()
Appearance1215 = x3d.Appearance()
Material1216 = x3d.Material()
Material1216.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1215.setMaterial(Material1216)

Shape1214.setAppearance(Appearance1215)
IndexedFaceSet1217 = x3d.IndexedFaceSet()
IndexedFaceSet1217.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1217.setCreaseAngle(0.5)
IndexedFaceSet1217.setSolid(False)
ColorRGBA1218 = x3d.ColorRGBA()
ColorRGBA1218.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1217.setColor(ColorRGBA1218)
Coordinate1219 = x3d.Coordinate()
Coordinate1219.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1217.setCoord(Coordinate1219)

Shape1214.setGeometry(IndexedFaceSet1217)

HAnimSite1212.addChildren(Shape1214)
Billboard1220 = x3d.Billboard()
Billboard1220.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1221 = x3d.Shape()
Text1222 = x3d.Text()
Text1222.setString(["11"])
FontStyle1223 = x3d.FontStyle()
FontStyle1223.setSize(0.035)

Text1222.setFontStyle(FontStyle1223)

Shape1221.setGeometry(Text1222)

Billboard1220.addChildren(Shape1221)

HAnimSite1212.addChildren(Billboard1220)

HAnimSegment1211.addChildren(HAnimSite1212)
Shape1224 = x3d.Shape()
LineSet1225 = x3d.LineSet()
LineSet1225.setVertexCount([2])
ColorRGBA1226 = x3d.ColorRGBA()
ColorRGBA1226.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1225.setColor(ColorRGBA1226)
Coordinate1227 = x3d.Coordinate()
Coordinate1227.setPoint(x3d.doubleToFloat([0,1.307,-0.015,0,1.2951,-0.01506]))

LineSet1225.setCoord(Coordinate1227)

Shape1224.setGeometry(LineSet1225)

HAnimSegment1211.addChildren(Shape1224)

HAnimJoint1210.addChildren(HAnimSegment1211)
HAnimJoint1228 = x3d.HAnimJoint()
HAnimJoint1228.setName("vc1")
HAnimJoint1228.setDEF("hanim_vc1")
HAnimJoint1228.setCenter(x3d.doubleToFloat([0,1.3185,-0.0151]))
HAnimJoint1228.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1228.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1229 = x3d.HAnimSegment()
HAnimSegment1229.setName("c1")
HAnimSegment1229.setDEF("hanim_c1")
Shape1230 = x3d.Shape()
LineSet1231 = x3d.LineSet()
LineSet1231.setVertexCount([2])
ColorRGBA1232 = x3d.ColorRGBA()
ColorRGBA1232.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1231.setColor(ColorRGBA1232)
Coordinate1233 = x3d.Coordinate()
Coordinate1233.setPoint(x3d.doubleToFloat([0,1.3185,-0.0151,0,1.307,-0.015]))

LineSet1231.setCoord(Coordinate1233)

Shape1230.setGeometry(LineSet1231)

HAnimSegment1229.addChildren(Shape1230)

HAnimJoint1228.addChildren(HAnimSegment1229)
HAnimJoint1234 = x3d.HAnimJoint()
HAnimJoint1234.setName("skullbase")
HAnimJoint1234.setDEF("hanim_skullbase")
HAnimJoint1234.setCenter(x3d.doubleToFloat([0,1.3126,-0.0154]))
HAnimJoint1234.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1234.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1235 = x3d.HAnimSegment()
HAnimSegment1235.setName("skull")
HAnimSegment1235.setDEF("hanim_skull")
HAnimSite1236 = x3d.HAnimSite()
HAnimSite1236.setName("skull_vertex")
HAnimSite1236.setDEF("hanim_skull_vertex_pt")
HAnimSite1236.setTranslation(x3d.doubleToFloat([0,1.612,-0.03]))
TouchSensor1237 = x3d.TouchSensor()
TouchSensor1237.setDescription("HAnimSite 0 hanim_skull_vertex_pt")

HAnimSite1236.addChildren(TouchSensor1237)
Shape1238 = x3d.Shape()
Appearance1239 = x3d.Appearance()
Material1240 = x3d.Material()
Material1240.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1239.setMaterial(Material1240)

Shape1238.setAppearance(Appearance1239)
IndexedFaceSet1241 = x3d.IndexedFaceSet()
IndexedFaceSet1241.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1241.setCreaseAngle(0.5)
IndexedFaceSet1241.setSolid(False)
ColorRGBA1242 = x3d.ColorRGBA()
ColorRGBA1242.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1241.setColor(ColorRGBA1242)
Coordinate1243 = x3d.Coordinate()
Coordinate1243.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1241.setCoord(Coordinate1243)

Shape1238.setGeometry(IndexedFaceSet1241)

HAnimSite1236.addChildren(Shape1238)
Billboard1244 = x3d.Billboard()
Billboard1244.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1245 = x3d.Shape()
Text1246 = x3d.Text()
Text1246.setString(["0"])
FontStyle1247 = x3d.FontStyle()
FontStyle1247.setSize(0.035)

Text1246.setFontStyle(FontStyle1247)

Shape1245.setGeometry(Text1246)

Billboard1244.addChildren(Shape1245)

HAnimSite1236.addChildren(Billboard1244)

HAnimSegment1235.addChildren(HAnimSite1236)
HAnimSite1248 = x3d.HAnimSite()
HAnimSite1248.setName("glabella")
HAnimSite1248.setDEF("hanim_glabella_pt")
HAnimSite1248.setTranslation(x3d.doubleToFloat([0,1.454,0.128]))
TouchSensor1249 = x3d.TouchSensor()
TouchSensor1249.setDescription("HAnimSite 1 hanim_glabella_pt")

HAnimSite1248.addChildren(TouchSensor1249)
Shape1250 = x3d.Shape()
Appearance1251 = x3d.Appearance()
Material1252 = x3d.Material()
Material1252.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1251.setMaterial(Material1252)

Shape1250.setAppearance(Appearance1251)
IndexedFaceSet1253 = x3d.IndexedFaceSet()
IndexedFaceSet1253.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1253.setCreaseAngle(0.5)
IndexedFaceSet1253.setSolid(False)
ColorRGBA1254 = x3d.ColorRGBA()
ColorRGBA1254.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1253.setColor(ColorRGBA1254)
Coordinate1255 = x3d.Coordinate()
Coordinate1255.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1253.setCoord(Coordinate1255)

Shape1250.setGeometry(IndexedFaceSet1253)

HAnimSite1248.addChildren(Shape1250)
Billboard1256 = x3d.Billboard()
Billboard1256.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1257 = x3d.Shape()
Text1258 = x3d.Text()
Text1258.setString(["1"])
FontStyle1259 = x3d.FontStyle()
FontStyle1259.setSize(0.035)

Text1258.setFontStyle(FontStyle1259)

Shape1257.setGeometry(Text1258)

Billboard1256.addChildren(Shape1257)

HAnimSite1248.addChildren(Billboard1256)

HAnimSegment1235.addChildren(HAnimSite1248)
HAnimSite1260 = x3d.HAnimSite()
HAnimSite1260.setName("sellion")
HAnimSite1260.setDEF("hanim_sellion_pt")
HAnimSite1260.setTranslation(x3d.doubleToFloat([0,1.4,0.12]))
TouchSensor1261 = x3d.TouchSensor()
TouchSensor1261.setDescription("HAnimSite 2 hanim_sellion_pt")

HAnimSite1260.addChildren(TouchSensor1261)
Shape1262 = x3d.Shape()
Appearance1263 = x3d.Appearance()
Material1264 = x3d.Material()
Material1264.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1263.setMaterial(Material1264)

Shape1262.setAppearance(Appearance1263)
IndexedFaceSet1265 = x3d.IndexedFaceSet()
IndexedFaceSet1265.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1265.setCreaseAngle(0.5)
IndexedFaceSet1265.setSolid(False)
ColorRGBA1266 = x3d.ColorRGBA()
ColorRGBA1266.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1265.setColor(ColorRGBA1266)
Coordinate1267 = x3d.Coordinate()
Coordinate1267.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1265.setCoord(Coordinate1267)

Shape1262.setGeometry(IndexedFaceSet1265)

HAnimSite1260.addChildren(Shape1262)
Billboard1268 = x3d.Billboard()
Billboard1268.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1269 = x3d.Shape()
Text1270 = x3d.Text()
Text1270.setString(["2"])
FontStyle1271 = x3d.FontStyle()
FontStyle1271.setSize(0.035)

Text1270.setFontStyle(FontStyle1271)

Shape1269.setGeometry(Text1270)

Billboard1268.addChildren(Shape1269)

HAnimSite1260.addChildren(Billboard1268)

HAnimSegment1235.addChildren(HAnimSite1260)
HAnimSite1272 = x3d.HAnimSite()
HAnimSite1272.setName("l_infraorbitale")
HAnimSite1272.setDEF("hanim_l_infraorbitale_pt")
HAnimSite1272.setTranslation(x3d.doubleToFloat([0.039,1.38,0.09]))
TouchSensor1273 = x3d.TouchSensor()
TouchSensor1273.setDescription("HAnimSite 3 hanim_l_infraorbitale_pt")

HAnimSite1272.addChildren(TouchSensor1273)
Shape1274 = x3d.Shape()
Appearance1275 = x3d.Appearance()
Material1276 = x3d.Material()
Material1276.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1275.setMaterial(Material1276)

Shape1274.setAppearance(Appearance1275)
IndexedFaceSet1277 = x3d.IndexedFaceSet()
IndexedFaceSet1277.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1277.setCreaseAngle(0.5)
IndexedFaceSet1277.setSolid(False)
ColorRGBA1278 = x3d.ColorRGBA()
ColorRGBA1278.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1277.setColor(ColorRGBA1278)
Coordinate1279 = x3d.Coordinate()
Coordinate1279.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1277.setCoord(Coordinate1279)

Shape1274.setGeometry(IndexedFaceSet1277)

HAnimSite1272.addChildren(Shape1274)
Billboard1280 = x3d.Billboard()
Billboard1280.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1281 = x3d.Shape()
Text1282 = x3d.Text()
Text1282.setString(["3"])
FontStyle1283 = x3d.FontStyle()
FontStyle1283.setSize(0.035)

Text1282.setFontStyle(FontStyle1283)

Shape1281.setGeometry(Text1282)

Billboard1280.addChildren(Shape1281)

HAnimSite1272.addChildren(Billboard1280)

HAnimSegment1235.addChildren(HAnimSite1272)
HAnimSite1284 = x3d.HAnimSite()
HAnimSite1284.setName("l_tragion")
HAnimSite1284.setDEF("hanim_l_tragion_pt")
HAnimSite1284.setTranslation(x3d.doubleToFloat([0.1,1.38,0.0282]))
TouchSensor1285 = x3d.TouchSensor()
TouchSensor1285.setDescription("HAnimSite 4 hanim_l_tragion_pt")

HAnimSite1284.addChildren(TouchSensor1285)
Shape1286 = x3d.Shape()
Appearance1287 = x3d.Appearance()
Material1288 = x3d.Material()
Material1288.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1287.setMaterial(Material1288)

Shape1286.setAppearance(Appearance1287)
IndexedFaceSet1289 = x3d.IndexedFaceSet()
IndexedFaceSet1289.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1289.setCreaseAngle(0.5)
IndexedFaceSet1289.setSolid(False)
ColorRGBA1290 = x3d.ColorRGBA()
ColorRGBA1290.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1289.setColor(ColorRGBA1290)
Coordinate1291 = x3d.Coordinate()
Coordinate1291.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1289.setCoord(Coordinate1291)

Shape1286.setGeometry(IndexedFaceSet1289)

HAnimSite1284.addChildren(Shape1286)
Billboard1292 = x3d.Billboard()
Billboard1292.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1293 = x3d.Shape()
Text1294 = x3d.Text()
Text1294.setString(["4"])
FontStyle1295 = x3d.FontStyle()
FontStyle1295.setSize(0.035)

Text1294.setFontStyle(FontStyle1295)

Shape1293.setGeometry(Text1294)

Billboard1292.addChildren(Shape1293)

HAnimSite1284.addChildren(Billboard1292)

HAnimSegment1235.addChildren(HAnimSite1284)
HAnimSite1296 = x3d.HAnimSite()
HAnimSite1296.setName("r_infraorbitale")
HAnimSite1296.setDEF("hanim_r_infraorbitale_pt")
HAnimSite1296.setTranslation(x3d.doubleToFloat([-0.039,1.38,0.09]))
TouchSensor1297 = x3d.TouchSensor()
TouchSensor1297.setDescription("HAnimSite 6 hanim_r_infraorbitale_pt")

HAnimSite1296.addChildren(TouchSensor1297)
Shape1298 = x3d.Shape()
Appearance1299 = x3d.Appearance()
Material1300 = x3d.Material()
Material1300.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1299.setMaterial(Material1300)

Shape1298.setAppearance(Appearance1299)
IndexedFaceSet1301 = x3d.IndexedFaceSet()
IndexedFaceSet1301.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1301.setCreaseAngle(0.5)
IndexedFaceSet1301.setSolid(False)
ColorRGBA1302 = x3d.ColorRGBA()
ColorRGBA1302.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1301.setColor(ColorRGBA1302)
Coordinate1303 = x3d.Coordinate()
Coordinate1303.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1301.setCoord(Coordinate1303)

Shape1298.setGeometry(IndexedFaceSet1301)

HAnimSite1296.addChildren(Shape1298)
Billboard1304 = x3d.Billboard()
Billboard1304.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1305 = x3d.Shape()
Text1306 = x3d.Text()
Text1306.setString(["6"])
FontStyle1307 = x3d.FontStyle()
FontStyle1307.setSize(0.035)

Text1306.setFontStyle(FontStyle1307)

Shape1305.setGeometry(Text1306)

Billboard1304.addChildren(Shape1305)

HAnimSite1296.addChildren(Billboard1304)

HAnimSegment1235.addChildren(HAnimSite1296)
HAnimSite1308 = x3d.HAnimSite()
HAnimSite1308.setName("r_tragion")
HAnimSite1308.setDEF("hanim_r_tragion_pt")
HAnimSite1308.setTranslation(x3d.doubleToFloat([-0.1,1.38,0.0282]))
TouchSensor1309 = x3d.TouchSensor()
TouchSensor1309.setDescription("HAnimSite 7 hanim_r_tragion_pt")

HAnimSite1308.addChildren(TouchSensor1309)
Shape1310 = x3d.Shape()
Appearance1311 = x3d.Appearance()
Material1312 = x3d.Material()
Material1312.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1311.setMaterial(Material1312)

Shape1310.setAppearance(Appearance1311)
IndexedFaceSet1313 = x3d.IndexedFaceSet()
IndexedFaceSet1313.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1313.setCreaseAngle(0.5)
IndexedFaceSet1313.setSolid(False)
ColorRGBA1314 = x3d.ColorRGBA()
ColorRGBA1314.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1313.setColor(ColorRGBA1314)
Coordinate1315 = x3d.Coordinate()
Coordinate1315.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1313.setCoord(Coordinate1315)

Shape1310.setGeometry(IndexedFaceSet1313)

HAnimSite1308.addChildren(Shape1310)
Billboard1316 = x3d.Billboard()
Billboard1316.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1317 = x3d.Shape()
Text1318 = x3d.Text()
Text1318.setString(["7"])
FontStyle1319 = x3d.FontStyle()
FontStyle1319.setSize(0.035)

Text1318.setFontStyle(FontStyle1319)

Shape1317.setGeometry(Text1318)

Billboard1316.addChildren(Shape1317)

HAnimSite1308.addChildren(Billboard1316)

HAnimSegment1235.addChildren(HAnimSite1308)
HAnimSite1320 = x3d.HAnimSite()
HAnimSite1320.setName("nuchale")
HAnimSite1320.setDEF("hanim_nuchale_pt")
HAnimSite1320.setTranslation(x3d.doubleToFloat([0.0039,1.35,-0.16]))
TouchSensor1321 = x3d.TouchSensor()
TouchSensor1321.setDescription("HAnimSite 81 hanim_nuchale_pt")

HAnimSite1320.addChildren(TouchSensor1321)
Shape1322 = x3d.Shape()
Appearance1323 = x3d.Appearance()
Material1324 = x3d.Material()
Material1324.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1323.setMaterial(Material1324)

Shape1322.setAppearance(Appearance1323)
IndexedFaceSet1325 = x3d.IndexedFaceSet()
IndexedFaceSet1325.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1325.setCreaseAngle(0.5)
IndexedFaceSet1325.setSolid(False)
ColorRGBA1326 = x3d.ColorRGBA()
ColorRGBA1326.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1325.setColor(ColorRGBA1326)
Coordinate1327 = x3d.Coordinate()
Coordinate1327.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1325.setCoord(Coordinate1327)

Shape1322.setGeometry(IndexedFaceSet1325)

HAnimSite1320.addChildren(Shape1322)
Billboard1328 = x3d.Billboard()
Billboard1328.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1329 = x3d.Shape()
Text1330 = x3d.Text()
Text1330.setString(["81"])
FontStyle1331 = x3d.FontStyle()
FontStyle1331.setSize(0.035)

Text1330.setFontStyle(FontStyle1331)

Shape1329.setGeometry(Text1330)

Billboard1328.addChildren(Shape1329)

HAnimSite1320.addChildren(Billboard1328)

HAnimSegment1235.addChildren(HAnimSite1320)
HAnimSite1332 = x3d.HAnimSite()
HAnimSite1332.setName("opisthocranion")
HAnimSite1332.setDEF("hanim_opisthocranion_pt")
HAnimSite1332.setTranslation(x3d.doubleToFloat([0.0039,1.4588,-0.18]))
TouchSensor1333 = x3d.TouchSensor()
TouchSensor1333.setDescription("HAnimSite 89 hanim_opisthocranion_pt")

HAnimSite1332.addChildren(TouchSensor1333)
Shape1334 = x3d.Shape()
Appearance1335 = x3d.Appearance()
Material1336 = x3d.Material()
Material1336.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1335.setMaterial(Material1336)

Shape1334.setAppearance(Appearance1335)
IndexedFaceSet1337 = x3d.IndexedFaceSet()
IndexedFaceSet1337.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1337.setCreaseAngle(0.5)
IndexedFaceSet1337.setSolid(False)
ColorRGBA1338 = x3d.ColorRGBA()
ColorRGBA1338.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1337.setColor(ColorRGBA1338)
Coordinate1339 = x3d.Coordinate()
Coordinate1339.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1337.setCoord(Coordinate1339)

Shape1334.setGeometry(IndexedFaceSet1337)

HAnimSite1332.addChildren(Shape1334)
Billboard1340 = x3d.Billboard()
Billboard1340.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1341 = x3d.Shape()
Text1342 = x3d.Text()
Text1342.setString(["89"])
FontStyle1343 = x3d.FontStyle()
FontStyle1343.setSize(0.035)

Text1342.setFontStyle(FontStyle1343)

Shape1341.setGeometry(Text1342)

Billboard1340.addChildren(Shape1341)

HAnimSite1332.addChildren(Billboard1340)

HAnimSegment1235.addChildren(HAnimSite1332)
HAnimSite1344 = x3d.HAnimSite()
HAnimSite1344.setName("l_ectocanthus")
HAnimSite1344.setDEF("hanim_l_ectocanthus_pt")
HAnimSite1344.setTranslation(x3d.doubleToFloat([0.086,1.399,0.074]))
TouchSensor1345 = x3d.TouchSensor()
TouchSensor1345.setDescription("HAnimSite 85 hanim_l_ectocanthus_pt")

HAnimSite1344.addChildren(TouchSensor1345)
Shape1346 = x3d.Shape()
Appearance1347 = x3d.Appearance()
Material1348 = x3d.Material()
Material1348.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1347.setMaterial(Material1348)

Shape1346.setAppearance(Appearance1347)
IndexedFaceSet1349 = x3d.IndexedFaceSet()
IndexedFaceSet1349.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1349.setCreaseAngle(0.5)
IndexedFaceSet1349.setSolid(False)
ColorRGBA1350 = x3d.ColorRGBA()
ColorRGBA1350.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1349.setColor(ColorRGBA1350)
Coordinate1351 = x3d.Coordinate()
Coordinate1351.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1349.setCoord(Coordinate1351)

Shape1346.setGeometry(IndexedFaceSet1349)

HAnimSite1344.addChildren(Shape1346)
Billboard1352 = x3d.Billboard()
Billboard1352.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1353 = x3d.Shape()
Text1354 = x3d.Text()
Text1354.setString(["85"])
FontStyle1355 = x3d.FontStyle()
FontStyle1355.setSize(0.035)

Text1354.setFontStyle(FontStyle1355)

Shape1353.setGeometry(Text1354)

Billboard1352.addChildren(Shape1353)

HAnimSite1344.addChildren(Billboard1352)

HAnimSegment1235.addChildren(HAnimSite1344)
HAnimSite1356 = x3d.HAnimSite()
HAnimSite1356.setName("r_ectocanthus")
HAnimSite1356.setDEF("hanim_r_ectocanthus_pt")
HAnimSite1356.setTranslation(x3d.doubleToFloat([-0.086,1.399,0.074]))
TouchSensor1357 = x3d.TouchSensor()
TouchSensor1357.setDescription("HAnimSite 86 hanim_r_ectocanthus_pt")

HAnimSite1356.addChildren(TouchSensor1357)
Shape1358 = x3d.Shape()
Appearance1359 = x3d.Appearance()
Material1360 = x3d.Material()
Material1360.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1359.setMaterial(Material1360)

Shape1358.setAppearance(Appearance1359)
IndexedFaceSet1361 = x3d.IndexedFaceSet()
IndexedFaceSet1361.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1361.setCreaseAngle(0.5)
IndexedFaceSet1361.setSolid(False)
ColorRGBA1362 = x3d.ColorRGBA()
ColorRGBA1362.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1361.setColor(ColorRGBA1362)
Coordinate1363 = x3d.Coordinate()
Coordinate1363.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1361.setCoord(Coordinate1363)

Shape1358.setGeometry(IndexedFaceSet1361)

HAnimSite1356.addChildren(Shape1358)
Billboard1364 = x3d.Billboard()
Billboard1364.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1365 = x3d.Shape()
Text1366 = x3d.Text()
Text1366.setString(["86"])
FontStyle1367 = x3d.FontStyle()
FontStyle1367.setSize(0.035)

Text1366.setFontStyle(FontStyle1367)

Shape1365.setGeometry(Text1366)

Billboard1364.addChildren(Shape1365)

HAnimSite1356.addChildren(Billboard1364)

HAnimSegment1235.addChildren(HAnimSite1356)
Shape1368 = x3d.Shape()
LineSet1369 = x3d.LineSet()
LineSet1369.setVertexCount([2])
ColorRGBA1370 = x3d.ColorRGBA()
ColorRGBA1370.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1369.setColor(ColorRGBA1370)
Coordinate1371 = x3d.Coordinate()
Coordinate1371.setPoint(x3d.doubleToFloat([0,1.3126,-0.0154,0,1.3185,-0.0151]))

LineSet1369.setCoord(Coordinate1371)

Shape1368.setGeometry(LineSet1369)

HAnimSegment1235.addChildren(Shape1368)

HAnimJoint1234.addChildren(HAnimSegment1235)
HAnimJoint1372 = x3d.HAnimJoint()
HAnimJoint1372.setName("l_eyelid_joint")
HAnimJoint1372.setDEF("hanim_l_eyelid_joint")
HAnimJoint1372.setCenter(x3d.doubleToFloat([0.0505,1.42425,0.03294]))
HAnimJoint1372.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1372.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1373 = x3d.HAnimSegment()
HAnimSegment1373.setName("l_eyelid")
HAnimSegment1373.setDEF("hanim_l_eyelid")
HAnimSite1374 = x3d.HAnimSite()
HAnimSite1374.setName("l_eyelid_tip")
HAnimSite1374.setDEF("hanim_l_eyelid_tip")
HAnimSite1374.setTranslation(x3d.doubleToFloat([0,2.64,0]))
TouchSensor1375 = x3d.TouchSensor()
TouchSensor1375.setDescription("HAnimSite l_eyelid_tip hanim_l_eyelid_tip")

HAnimSite1374.addChildren(TouchSensor1375)
Shape1376 = x3d.Shape()
Appearance1377 = x3d.Appearance()
Material1378 = x3d.Material()
Material1378.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1377.setMaterial(Material1378)

Shape1376.setAppearance(Appearance1377)
IndexedFaceSet1379 = x3d.IndexedFaceSet()
IndexedFaceSet1379.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1379.setCreaseAngle(0.5)
IndexedFaceSet1379.setSolid(False)
ColorRGBA1380 = x3d.ColorRGBA()
ColorRGBA1380.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1379.setColor(ColorRGBA1380)
Coordinate1381 = x3d.Coordinate()
Coordinate1381.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1379.setCoord(Coordinate1381)

Shape1376.setGeometry(IndexedFaceSet1379)

HAnimSite1374.addChildren(Shape1376)
Billboard1382 = x3d.Billboard()
Billboard1382.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1383 = x3d.Shape()
Text1384 = x3d.Text()
Text1384.setString(["l_eyelid_tip"])
FontStyle1385 = x3d.FontStyle()
FontStyle1385.setSize(0.035)

Text1384.setFontStyle(FontStyle1385)

Shape1383.setGeometry(Text1384)

Billboard1382.addChildren(Shape1383)

HAnimSite1374.addChildren(Billboard1382)

HAnimSegment1373.addChildren(HAnimSite1374)
Shape1386 = x3d.Shape()
LineSet1387 = x3d.LineSet()
LineSet1387.setVertexCount([2])
ColorRGBA1388 = x3d.ColorRGBA()
ColorRGBA1388.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1387.setColor(ColorRGBA1388)
Coordinate1389 = x3d.Coordinate()
Coordinate1389.setPoint(x3d.doubleToFloat([0.0505,1.42425,0.03294,0,1.3126,-0.0154]))

LineSet1387.setCoord(Coordinate1389)

Shape1386.setGeometry(LineSet1387)

HAnimSegment1373.addChildren(Shape1386)

HAnimJoint1372.addChildren(HAnimSegment1373)

HAnimJoint1234.addChildren(HAnimJoint1372)
HAnimJoint1390 = x3d.HAnimJoint()
HAnimJoint1390.setName("r_eyelid_joint")
HAnimJoint1390.setDEF("hanim_r_eyelid_joint")
HAnimJoint1390.setCenter(x3d.doubleToFloat([-0.0505,1.42425,0.03294]))
HAnimJoint1390.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1390.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1391 = x3d.HAnimSegment()
HAnimSegment1391.setName("r_eyelid")
HAnimSegment1391.setDEF("hanim_r_eyelid")
HAnimSite1392 = x3d.HAnimSite()
HAnimSite1392.setName("r_eyelid_tip")
HAnimSite1392.setDEF("hanim_r_eyelid_tip")
HAnimSite1392.setTranslation(x3d.doubleToFloat([0,2.68,0]))
TouchSensor1393 = x3d.TouchSensor()
TouchSensor1393.setDescription("HAnimSite r_eyelid_tip hanim_r_eyelid_tip")

HAnimSite1392.addChildren(TouchSensor1393)
Shape1394 = x3d.Shape()
Appearance1395 = x3d.Appearance()
Material1396 = x3d.Material()
Material1396.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1395.setMaterial(Material1396)

Shape1394.setAppearance(Appearance1395)
IndexedFaceSet1397 = x3d.IndexedFaceSet()
IndexedFaceSet1397.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1397.setCreaseAngle(0.5)
IndexedFaceSet1397.setSolid(False)
ColorRGBA1398 = x3d.ColorRGBA()
ColorRGBA1398.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1397.setColor(ColorRGBA1398)
Coordinate1399 = x3d.Coordinate()
Coordinate1399.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1397.setCoord(Coordinate1399)

Shape1394.setGeometry(IndexedFaceSet1397)

HAnimSite1392.addChildren(Shape1394)
Billboard1400 = x3d.Billboard()
Billboard1400.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1401 = x3d.Shape()
Text1402 = x3d.Text()
Text1402.setString(["r_eyelid_tip"])
FontStyle1403 = x3d.FontStyle()
FontStyle1403.setSize(0.035)

Text1402.setFontStyle(FontStyle1403)

Shape1401.setGeometry(Text1402)

Billboard1400.addChildren(Shape1401)

HAnimSite1392.addChildren(Billboard1400)

HAnimSegment1391.addChildren(HAnimSite1392)
Shape1404 = x3d.Shape()
LineSet1405 = x3d.LineSet()
LineSet1405.setVertexCount([2])
ColorRGBA1406 = x3d.ColorRGBA()
ColorRGBA1406.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1405.setColor(ColorRGBA1406)
Coordinate1407 = x3d.Coordinate()
Coordinate1407.setPoint(x3d.doubleToFloat([-0.0505,1.42425,0.03294,0,1.3126,-0.0154]))

LineSet1405.setCoord(Coordinate1407)

Shape1404.setGeometry(LineSet1405)

HAnimSegment1391.addChildren(Shape1404)

HAnimJoint1390.addChildren(HAnimSegment1391)

HAnimJoint1234.addChildren(HAnimJoint1390)
HAnimJoint1408 = x3d.HAnimJoint()
HAnimJoint1408.setName("l_eyeball_joint")
HAnimJoint1408.setDEF("hanim_l_eyeball_joint")
HAnimJoint1408.setCenter(x3d.doubleToFloat([0.048127,1.4049,0.08305]))
HAnimJoint1408.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1408.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1409 = x3d.HAnimSegment()
HAnimSegment1409.setName("l_eyeball")
HAnimSegment1409.setDEF("hanim_l_eyeball")
HAnimSite1410 = x3d.HAnimSite()
HAnimSite1410.setName("l_eyeball_tip")
HAnimSite1410.setDEF("hanim_l_eyeball_tip")
HAnimSite1410.setTranslation(x3d.doubleToFloat([0,2.72,0]))
TouchSensor1411 = x3d.TouchSensor()
TouchSensor1411.setDescription("HAnimSite l_eyeball_tip hanim_l_eyeball_tip")

HAnimSite1410.addChildren(TouchSensor1411)
Shape1412 = x3d.Shape()
Appearance1413 = x3d.Appearance()
Material1414 = x3d.Material()
Material1414.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1413.setMaterial(Material1414)

Shape1412.setAppearance(Appearance1413)
IndexedFaceSet1415 = x3d.IndexedFaceSet()
IndexedFaceSet1415.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1415.setCreaseAngle(0.5)
IndexedFaceSet1415.setSolid(False)
ColorRGBA1416 = x3d.ColorRGBA()
ColorRGBA1416.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1415.setColor(ColorRGBA1416)
Coordinate1417 = x3d.Coordinate()
Coordinate1417.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1415.setCoord(Coordinate1417)

Shape1412.setGeometry(IndexedFaceSet1415)

HAnimSite1410.addChildren(Shape1412)
Billboard1418 = x3d.Billboard()
Billboard1418.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1419 = x3d.Shape()
Text1420 = x3d.Text()
Text1420.setString(["l_eyeball_tip"])
FontStyle1421 = x3d.FontStyle()
FontStyle1421.setSize(0.035)

Text1420.setFontStyle(FontStyle1421)

Shape1419.setGeometry(Text1420)

Billboard1418.addChildren(Shape1419)

HAnimSite1410.addChildren(Billboard1418)

HAnimSegment1409.addChildren(HAnimSite1410)
Shape1422 = x3d.Shape()
LineSet1423 = x3d.LineSet()
LineSet1423.setVertexCount([2])
ColorRGBA1424 = x3d.ColorRGBA()
ColorRGBA1424.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1423.setColor(ColorRGBA1424)
Coordinate1425 = x3d.Coordinate()
Coordinate1425.setPoint(x3d.doubleToFloat([0.048127,1.4049,0.08305,0,1.3126,-0.0154]))

LineSet1423.setCoord(Coordinate1425)

Shape1422.setGeometry(LineSet1423)

HAnimSegment1409.addChildren(Shape1422)

HAnimJoint1408.addChildren(HAnimSegment1409)

HAnimJoint1234.addChildren(HAnimJoint1408)
HAnimJoint1426 = x3d.HAnimJoint()
HAnimJoint1426.setName("r_eyeball_joint")
HAnimJoint1426.setDEF("hanim_r_eyeball_joint")
HAnimJoint1426.setCenter(x3d.doubleToFloat([-0.04813,1.4049,0.08305]))
HAnimJoint1426.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1426.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1427 = x3d.HAnimSegment()
HAnimSegment1427.setName("r_eyeball")
HAnimSegment1427.setDEF("hanim_r_eyeball")
HAnimSite1428 = x3d.HAnimSite()
HAnimSite1428.setName("r_eyeball_tip")
HAnimSite1428.setDEF("hanim_r_eyeball_tip")
HAnimSite1428.setTranslation(x3d.doubleToFloat([0,2.76,0]))
TouchSensor1429 = x3d.TouchSensor()
TouchSensor1429.setDescription("HAnimSite r_eyeball_tip hanim_r_eyeball_tip")

HAnimSite1428.addChildren(TouchSensor1429)
Shape1430 = x3d.Shape()
Appearance1431 = x3d.Appearance()
Material1432 = x3d.Material()
Material1432.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1431.setMaterial(Material1432)

Shape1430.setAppearance(Appearance1431)
IndexedFaceSet1433 = x3d.IndexedFaceSet()
IndexedFaceSet1433.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1433.setCreaseAngle(0.5)
IndexedFaceSet1433.setSolid(False)
ColorRGBA1434 = x3d.ColorRGBA()
ColorRGBA1434.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1433.setColor(ColorRGBA1434)
Coordinate1435 = x3d.Coordinate()
Coordinate1435.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1433.setCoord(Coordinate1435)

Shape1430.setGeometry(IndexedFaceSet1433)

HAnimSite1428.addChildren(Shape1430)
Billboard1436 = x3d.Billboard()
Billboard1436.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1437 = x3d.Shape()
Text1438 = x3d.Text()
Text1438.setString(["r_eyeball_tip"])
FontStyle1439 = x3d.FontStyle()
FontStyle1439.setSize(0.035)

Text1438.setFontStyle(FontStyle1439)

Shape1437.setGeometry(Text1438)

Billboard1436.addChildren(Shape1437)

HAnimSite1428.addChildren(Billboard1436)

HAnimSegment1427.addChildren(HAnimSite1428)
Shape1440 = x3d.Shape()
LineSet1441 = x3d.LineSet()
LineSet1441.setVertexCount([2])
ColorRGBA1442 = x3d.ColorRGBA()
ColorRGBA1442.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1441.setColor(ColorRGBA1442)
Coordinate1443 = x3d.Coordinate()
Coordinate1443.setPoint(x3d.doubleToFloat([-0.04813,1.4049,0.08305,0,1.3126,-0.0154]))

LineSet1441.setCoord(Coordinate1443)

Shape1440.setGeometry(LineSet1441)

HAnimSegment1427.addChildren(Shape1440)

HAnimJoint1426.addChildren(HAnimSegment1427)

HAnimJoint1234.addChildren(HAnimJoint1426)
HAnimJoint1444 = x3d.HAnimJoint()
HAnimJoint1444.setName("l_eyebrow_joint")
HAnimJoint1444.setDEF("hanim_l_eyebrow_joint")
HAnimJoint1444.setCenter(x3d.doubleToFloat([0.02175,1.4139,0.1069]))
HAnimJoint1444.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1444.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1445 = x3d.HAnimSegment()
HAnimSegment1445.setName("l_eyebrow")
HAnimSegment1445.setDEF("hanim_l_eyebrow")
HAnimSite1446 = x3d.HAnimSite()
HAnimSite1446.setName("l_eyebrow_tip")
HAnimSite1446.setDEF("hanim_l_eyebrow_tip")
HAnimSite1446.setTranslation(x3d.doubleToFloat([0,2.8,0]))
TouchSensor1447 = x3d.TouchSensor()
TouchSensor1447.setDescription("HAnimSite l_eyebrow_tip hanim_l_eyebrow_tip")

HAnimSite1446.addChildren(TouchSensor1447)
Shape1448 = x3d.Shape()
Appearance1449 = x3d.Appearance()
Material1450 = x3d.Material()
Material1450.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1449.setMaterial(Material1450)

Shape1448.setAppearance(Appearance1449)
IndexedFaceSet1451 = x3d.IndexedFaceSet()
IndexedFaceSet1451.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1451.setCreaseAngle(0.5)
IndexedFaceSet1451.setSolid(False)
ColorRGBA1452 = x3d.ColorRGBA()
ColorRGBA1452.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1451.setColor(ColorRGBA1452)
Coordinate1453 = x3d.Coordinate()
Coordinate1453.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1451.setCoord(Coordinate1453)

Shape1448.setGeometry(IndexedFaceSet1451)

HAnimSite1446.addChildren(Shape1448)
Billboard1454 = x3d.Billboard()
Billboard1454.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1455 = x3d.Shape()
Text1456 = x3d.Text()
Text1456.setString(["l_eyebrow_tip"])
FontStyle1457 = x3d.FontStyle()
FontStyle1457.setSize(0.035)

Text1456.setFontStyle(FontStyle1457)

Shape1455.setGeometry(Text1456)

Billboard1454.addChildren(Shape1455)

HAnimSite1446.addChildren(Billboard1454)

HAnimSegment1445.addChildren(HAnimSite1446)
Shape1458 = x3d.Shape()
LineSet1459 = x3d.LineSet()
LineSet1459.setVertexCount([2])
ColorRGBA1460 = x3d.ColorRGBA()
ColorRGBA1460.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1459.setColor(ColorRGBA1460)
Coordinate1461 = x3d.Coordinate()
Coordinate1461.setPoint(x3d.doubleToFloat([0.02175,1.4139,0.1069,0,1.3126,-0.0154]))

LineSet1459.setCoord(Coordinate1461)

Shape1458.setGeometry(LineSet1459)

HAnimSegment1445.addChildren(Shape1458)

HAnimJoint1444.addChildren(HAnimSegment1445)

HAnimJoint1234.addChildren(HAnimJoint1444)
HAnimJoint1462 = x3d.HAnimJoint()
HAnimJoint1462.setName("r_eyebrow_joint")
HAnimJoint1462.setDEF("hanim_r_eyebrow_joint")
HAnimJoint1462.setCenter(x3d.doubleToFloat([-0.02175,1.4139,0.10694]))
HAnimJoint1462.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1462.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1463 = x3d.HAnimSegment()
HAnimSegment1463.setName("r_eyebrow")
HAnimSegment1463.setDEF("hanim_r_eyebrow")
HAnimSite1464 = x3d.HAnimSite()
HAnimSite1464.setName("r_eyebrow_tip")
HAnimSite1464.setDEF("hanim_r_eyebrow_tip")
HAnimSite1464.setTranslation(x3d.doubleToFloat([0,2.84,0]))
TouchSensor1465 = x3d.TouchSensor()
TouchSensor1465.setDescription("HAnimSite r_eyebrow_tip hanim_r_eyebrow_tip")

HAnimSite1464.addChildren(TouchSensor1465)
Shape1466 = x3d.Shape()
Appearance1467 = x3d.Appearance()
Material1468 = x3d.Material()
Material1468.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1467.setMaterial(Material1468)

Shape1466.setAppearance(Appearance1467)
IndexedFaceSet1469 = x3d.IndexedFaceSet()
IndexedFaceSet1469.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1469.setCreaseAngle(0.5)
IndexedFaceSet1469.setSolid(False)
ColorRGBA1470 = x3d.ColorRGBA()
ColorRGBA1470.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1469.setColor(ColorRGBA1470)
Coordinate1471 = x3d.Coordinate()
Coordinate1471.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1469.setCoord(Coordinate1471)

Shape1466.setGeometry(IndexedFaceSet1469)

HAnimSite1464.addChildren(Shape1466)
Billboard1472 = x3d.Billboard()
Billboard1472.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1473 = x3d.Shape()
Text1474 = x3d.Text()
Text1474.setString(["r_eyebrow_tip"])
FontStyle1475 = x3d.FontStyle()
FontStyle1475.setSize(0.035)

Text1474.setFontStyle(FontStyle1475)

Shape1473.setGeometry(Text1474)

Billboard1472.addChildren(Shape1473)

HAnimSite1464.addChildren(Billboard1472)

HAnimSegment1463.addChildren(HAnimSite1464)
Shape1476 = x3d.Shape()
LineSet1477 = x3d.LineSet()
LineSet1477.setVertexCount([2])
ColorRGBA1478 = x3d.ColorRGBA()
ColorRGBA1478.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1477.setColor(ColorRGBA1478)
Coordinate1479 = x3d.Coordinate()
Coordinate1479.setPoint(x3d.doubleToFloat([-0.02175,1.4139,0.10694,0,1.3126,-0.0154]))

LineSet1477.setCoord(Coordinate1479)

Shape1476.setGeometry(LineSet1477)

HAnimSegment1463.addChildren(Shape1476)

HAnimJoint1462.addChildren(HAnimSegment1463)

HAnimJoint1234.addChildren(HAnimJoint1462)
HAnimJoint1480 = x3d.HAnimJoint()
HAnimJoint1480.setName("temporomandibular")
HAnimJoint1480.setDEF("hanim_temporomandibular")
HAnimJoint1480.setCenter(x3d.doubleToFloat([0,1.3128,0.01538]))
HAnimJoint1480.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1480.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1481 = x3d.HAnimSegment()
HAnimSegment1481.setName("jaw")
HAnimSegment1481.setDEF("hanim_jaw")
HAnimSite1482 = x3d.HAnimSite()
HAnimSite1482.setName("l_gonion")
HAnimSite1482.setDEF("hanim_l_gonion_pt")
HAnimSite1482.setTranslation(x3d.doubleToFloat([0.068,1.346,0.033]))
TouchSensor1483 = x3d.TouchSensor()
TouchSensor1483.setDescription("HAnimSite 5 hanim_l_gonion_pt")

HAnimSite1482.addChildren(TouchSensor1483)
Shape1484 = x3d.Shape()
Appearance1485 = x3d.Appearance()
Material1486 = x3d.Material()
Material1486.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1485.setMaterial(Material1486)

Shape1484.setAppearance(Appearance1485)
IndexedFaceSet1487 = x3d.IndexedFaceSet()
IndexedFaceSet1487.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1487.setCreaseAngle(0.5)
IndexedFaceSet1487.setSolid(False)
ColorRGBA1488 = x3d.ColorRGBA()
ColorRGBA1488.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1487.setColor(ColorRGBA1488)
Coordinate1489 = x3d.Coordinate()
Coordinate1489.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1487.setCoord(Coordinate1489)

Shape1484.setGeometry(IndexedFaceSet1487)

HAnimSite1482.addChildren(Shape1484)
Billboard1490 = x3d.Billboard()
Billboard1490.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1491 = x3d.Shape()
Text1492 = x3d.Text()
Text1492.setString(["5"])
FontStyle1493 = x3d.FontStyle()
FontStyle1493.setSize(0.035)

Text1492.setFontStyle(FontStyle1493)

Shape1491.setGeometry(Text1492)

Billboard1490.addChildren(Shape1491)

HAnimSite1482.addChildren(Billboard1490)

HAnimSegment1481.addChildren(HAnimSite1482)
HAnimSite1494 = x3d.HAnimSite()
HAnimSite1494.setName("r_gonion")
HAnimSite1494.setDEF("hanim_r_gonion_pt")
HAnimSite1494.setTranslation(x3d.doubleToFloat([-0.068,1.346,0.033]))
TouchSensor1495 = x3d.TouchSensor()
TouchSensor1495.setDescription("HAnimSite 8 hanim_r_gonion_pt")

HAnimSite1494.addChildren(TouchSensor1495)
Shape1496 = x3d.Shape()
Appearance1497 = x3d.Appearance()
Material1498 = x3d.Material()
Material1498.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1497.setMaterial(Material1498)

Shape1496.setAppearance(Appearance1497)
IndexedFaceSet1499 = x3d.IndexedFaceSet()
IndexedFaceSet1499.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1499.setCreaseAngle(0.5)
IndexedFaceSet1499.setSolid(False)
ColorRGBA1500 = x3d.ColorRGBA()
ColorRGBA1500.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1499.setColor(ColorRGBA1500)
Coordinate1501 = x3d.Coordinate()
Coordinate1501.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1499.setCoord(Coordinate1501)

Shape1496.setGeometry(IndexedFaceSet1499)

HAnimSite1494.addChildren(Shape1496)
Billboard1502 = x3d.Billboard()
Billboard1502.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1503 = x3d.Shape()
Text1504 = x3d.Text()
Text1504.setString(["8"])
FontStyle1505 = x3d.FontStyle()
FontStyle1505.setSize(0.035)

Text1504.setFontStyle(FontStyle1505)

Shape1503.setGeometry(Text1504)

Billboard1502.addChildren(Shape1503)

HAnimSite1494.addChildren(Billboard1502)

HAnimSegment1481.addChildren(HAnimSite1494)
HAnimSite1506 = x3d.HAnimSite()
HAnimSite1506.setName("supramenton")
HAnimSite1506.setDEF("hanim_supramenton_pt")
HAnimSite1506.setTranslation(x3d.doubleToFloat([0,1.32,0.086]))
TouchSensor1507 = x3d.TouchSensor()
TouchSensor1507.setDescription("HAnimSite 9 hanim_supramenton_pt")

HAnimSite1506.addChildren(TouchSensor1507)
Shape1508 = x3d.Shape()
Appearance1509 = x3d.Appearance()
Material1510 = x3d.Material()
Material1510.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1509.setMaterial(Material1510)

Shape1508.setAppearance(Appearance1509)
IndexedFaceSet1511 = x3d.IndexedFaceSet()
IndexedFaceSet1511.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1511.setCreaseAngle(0.5)
IndexedFaceSet1511.setSolid(False)
ColorRGBA1512 = x3d.ColorRGBA()
ColorRGBA1512.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1511.setColor(ColorRGBA1512)
Coordinate1513 = x3d.Coordinate()
Coordinate1513.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1511.setCoord(Coordinate1513)

Shape1508.setGeometry(IndexedFaceSet1511)

HAnimSite1506.addChildren(Shape1508)
Billboard1514 = x3d.Billboard()
Billboard1514.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1515 = x3d.Shape()
Text1516 = x3d.Text()
Text1516.setString(["9"])
FontStyle1517 = x3d.FontStyle()
FontStyle1517.setSize(0.035)

Text1516.setFontStyle(FontStyle1517)

Shape1515.setGeometry(Text1516)

Billboard1514.addChildren(Shape1515)

HAnimSite1506.addChildren(Billboard1514)

HAnimSegment1481.addChildren(HAnimSite1506)
HAnimSite1518 = x3d.HAnimSite()
HAnimSite1518.setName("menton")
HAnimSite1518.setDEF("hanim_menton_pt")
HAnimSite1518.setTranslation(x3d.doubleToFloat([0,1.3,0.08]))
TouchSensor1519 = x3d.TouchSensor()
TouchSensor1519.setDescription("HAnimSite 87 hanim_menton_pt")

HAnimSite1518.addChildren(TouchSensor1519)
Shape1520 = x3d.Shape()
Appearance1521 = x3d.Appearance()
Material1522 = x3d.Material()
Material1522.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1521.setMaterial(Material1522)

Shape1520.setAppearance(Appearance1521)
IndexedFaceSet1523 = x3d.IndexedFaceSet()
IndexedFaceSet1523.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1523.setCreaseAngle(0.5)
IndexedFaceSet1523.setSolid(False)
ColorRGBA1524 = x3d.ColorRGBA()
ColorRGBA1524.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1523.setColor(ColorRGBA1524)
Coordinate1525 = x3d.Coordinate()
Coordinate1525.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1523.setCoord(Coordinate1525)

Shape1520.setGeometry(IndexedFaceSet1523)

HAnimSite1518.addChildren(Shape1520)
Billboard1526 = x3d.Billboard()
Billboard1526.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1527 = x3d.Shape()
Text1528 = x3d.Text()
Text1528.setString(["87"])
FontStyle1529 = x3d.FontStyle()
FontStyle1529.setSize(0.035)

Text1528.setFontStyle(FontStyle1529)

Shape1527.setGeometry(Text1528)

Billboard1526.addChildren(Shape1527)

HAnimSite1518.addChildren(Billboard1526)

HAnimSegment1481.addChildren(HAnimSite1518)
Shape1530 = x3d.Shape()
LineSet1531 = x3d.LineSet()
LineSet1531.setVertexCount([2])
ColorRGBA1532 = x3d.ColorRGBA()
ColorRGBA1532.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1531.setColor(ColorRGBA1532)
Coordinate1533 = x3d.Coordinate()
Coordinate1533.setPoint(x3d.doubleToFloat([0,1.3128,0.01538,0,1.3126,-0.0154]))

LineSet1531.setCoord(Coordinate1533)

Shape1530.setGeometry(LineSet1531)

HAnimSegment1481.addChildren(Shape1530)

HAnimJoint1480.addChildren(HAnimSegment1481)

HAnimJoint1234.addChildren(HAnimJoint1480)

HAnimJoint1228.addChildren(HAnimJoint1234)

HAnimJoint1210.addChildren(HAnimJoint1228)

HAnimJoint1204.addChildren(HAnimJoint1210)

HAnimJoint1198.addChildren(HAnimJoint1204)

HAnimJoint1192.addChildren(HAnimJoint1198)

HAnimJoint1186.addChildren(HAnimJoint1192)

HAnimJoint1156.addChildren(HAnimJoint1186)

HAnimJoint1126.addChildren(HAnimJoint1156)
HAnimJoint1534 = x3d.HAnimJoint()
HAnimJoint1534.setName("l_sternoclavicular")
HAnimJoint1534.setDEF("hanim_l_sternoclavicular")
HAnimJoint1534.setCenter(x3d.doubleToFloat([0.03847,1.2087,-0.01378]))
HAnimJoint1534.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1534.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1535 = x3d.HAnimSegment()
HAnimSegment1535.setName("l_clavicle")
HAnimSegment1535.setDEF("hanim_l_clavicle")
HAnimSite1536 = x3d.HAnimSite()
HAnimSite1536.setName("l_clavicale")
HAnimSite1536.setDEF("hanim_l_clavicale_pt")
HAnimSite1536.setTranslation(x3d.doubleToFloat([0.03,1.2,0.04]))
TouchSensor1537 = x3d.TouchSensor()
TouchSensor1537.setDescription("HAnimSite l_clavicale hanim_l_clavicale_pt")

HAnimSite1536.addChildren(TouchSensor1537)
Shape1538 = x3d.Shape()
Appearance1539 = x3d.Appearance()
Material1540 = x3d.Material()
Material1540.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1539.setMaterial(Material1540)

Shape1538.setAppearance(Appearance1539)
IndexedFaceSet1541 = x3d.IndexedFaceSet()
IndexedFaceSet1541.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1541.setCreaseAngle(0.5)
IndexedFaceSet1541.setSolid(False)
ColorRGBA1542 = x3d.ColorRGBA()
ColorRGBA1542.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1541.setColor(ColorRGBA1542)
Coordinate1543 = x3d.Coordinate()
Coordinate1543.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1541.setCoord(Coordinate1543)

Shape1538.setGeometry(IndexedFaceSet1541)

HAnimSite1536.addChildren(Shape1538)
Billboard1544 = x3d.Billboard()
Billboard1544.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1545 = x3d.Shape()
Text1546 = x3d.Text()
Text1546.setString(["l_clavicale"])
FontStyle1547 = x3d.FontStyle()
FontStyle1547.setSize(0.035)

Text1546.setFontStyle(FontStyle1547)

Shape1545.setGeometry(Text1546)

Billboard1544.addChildren(Shape1545)

HAnimSite1536.addChildren(Billboard1544)

HAnimSegment1535.addChildren(HAnimSite1536)
Shape1548 = x3d.Shape()
LineSet1549 = x3d.LineSet()
LineSet1549.setVertexCount([2])
ColorRGBA1550 = x3d.ColorRGBA()
ColorRGBA1550.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1549.setColor(ColorRGBA1550)
Coordinate1551 = x3d.Coordinate()
Coordinate1551.setPoint(x3d.doubleToFloat([0.03847,1.2087,-0.01378,0,1.22,-0.0138]))

LineSet1549.setCoord(Coordinate1551)

Shape1548.setGeometry(LineSet1549)

HAnimSegment1535.addChildren(Shape1548)

HAnimJoint1534.addChildren(HAnimSegment1535)
HAnimJoint1552 = x3d.HAnimJoint()
HAnimJoint1552.setName("l_acromioclavicular")
HAnimJoint1552.setDEF("hanim_l_acromioclavicular")
HAnimJoint1552.setCenter(x3d.doubleToFloat([0.12294,1.191825,-0.0129]))
HAnimJoint1552.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1552.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1553 = x3d.HAnimSegment()
HAnimSegment1553.setName("l_scapula")
HAnimSegment1553.setDEF("hanim_l_scapula")
HAnimSite1554 = x3d.HAnimSite()
HAnimSite1554.setName("l_acromion")
HAnimSite1554.setDEF("hanim_l_acromion_pt")
HAnimSite1554.setTranslation(x3d.doubleToFloat([0.15,1.222,-0.02]))
TouchSensor1555 = x3d.TouchSensor()
TouchSensor1555.setDescription("HAnimSite 15 hanim_l_acromion_pt")

HAnimSite1554.addChildren(TouchSensor1555)
Shape1556 = x3d.Shape()
Appearance1557 = x3d.Appearance()
Material1558 = x3d.Material()
Material1558.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1557.setMaterial(Material1558)

Shape1556.setAppearance(Appearance1557)
IndexedFaceSet1559 = x3d.IndexedFaceSet()
IndexedFaceSet1559.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1559.setCreaseAngle(0.5)
IndexedFaceSet1559.setSolid(False)
ColorRGBA1560 = x3d.ColorRGBA()
ColorRGBA1560.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1559.setColor(ColorRGBA1560)
Coordinate1561 = x3d.Coordinate()
Coordinate1561.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1559.setCoord(Coordinate1561)

Shape1556.setGeometry(IndexedFaceSet1559)

HAnimSite1554.addChildren(Shape1556)
Billboard1562 = x3d.Billboard()
Billboard1562.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1563 = x3d.Shape()
Text1564 = x3d.Text()
Text1564.setString(["15"])
FontStyle1565 = x3d.FontStyle()
FontStyle1565.setSize(0.035)

Text1564.setFontStyle(FontStyle1565)

Shape1563.setGeometry(Text1564)

Billboard1562.addChildren(Shape1563)

HAnimSite1554.addChildren(Billboard1562)

HAnimSegment1553.addChildren(HAnimSite1554)
HAnimSite1566 = x3d.HAnimSite()
HAnimSite1566.setName("l_axilla_proximal")
HAnimSite1566.setDEF("hanim_l_axilla_proximal_pt")
HAnimSite1566.setTranslation(x3d.doubleToFloat([0.15,1.16,0.04]))
TouchSensor1567 = x3d.TouchSensor()
TouchSensor1567.setDescription("HAnimSite 16 hanim_l_axilla_proximal_pt")

HAnimSite1566.addChildren(TouchSensor1567)
Shape1568 = x3d.Shape()
Appearance1569 = x3d.Appearance()
Material1570 = x3d.Material()
Material1570.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1569.setMaterial(Material1570)

Shape1568.setAppearance(Appearance1569)
IndexedFaceSet1571 = x3d.IndexedFaceSet()
IndexedFaceSet1571.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1571.setCreaseAngle(0.5)
IndexedFaceSet1571.setSolid(False)
ColorRGBA1572 = x3d.ColorRGBA()
ColorRGBA1572.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1571.setColor(ColorRGBA1572)
Coordinate1573 = x3d.Coordinate()
Coordinate1573.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1571.setCoord(Coordinate1573)

Shape1568.setGeometry(IndexedFaceSet1571)

HAnimSite1566.addChildren(Shape1568)
Billboard1574 = x3d.Billboard()
Billboard1574.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1575 = x3d.Shape()
Text1576 = x3d.Text()
Text1576.setString(["16"])
FontStyle1577 = x3d.FontStyle()
FontStyle1577.setSize(0.035)

Text1576.setFontStyle(FontStyle1577)

Shape1575.setGeometry(Text1576)

Billboard1574.addChildren(Shape1575)

HAnimSite1566.addChildren(Billboard1574)

HAnimSegment1553.addChildren(HAnimSite1566)
HAnimSite1578 = x3d.HAnimSite()
HAnimSite1578.setName("l_axilla_distal")
HAnimSite1578.setDEF("hanim_l_axilla_distal_pt")
HAnimSite1578.setTranslation(x3d.doubleToFloat([0.17,1.14,0]))
TouchSensor1579 = x3d.TouchSensor()
TouchSensor1579.setDescription("HAnimSite 17 hanim_l_axilla_distal_pt")

HAnimSite1578.addChildren(TouchSensor1579)
Shape1580 = x3d.Shape()
Appearance1581 = x3d.Appearance()
Material1582 = x3d.Material()
Material1582.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1581.setMaterial(Material1582)

Shape1580.setAppearance(Appearance1581)
IndexedFaceSet1583 = x3d.IndexedFaceSet()
IndexedFaceSet1583.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1583.setCreaseAngle(0.5)
IndexedFaceSet1583.setSolid(False)
ColorRGBA1584 = x3d.ColorRGBA()
ColorRGBA1584.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1583.setColor(ColorRGBA1584)
Coordinate1585 = x3d.Coordinate()
Coordinate1585.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1583.setCoord(Coordinate1585)

Shape1580.setGeometry(IndexedFaceSet1583)

HAnimSite1578.addChildren(Shape1580)
Billboard1586 = x3d.Billboard()
Billboard1586.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1587 = x3d.Shape()
Text1588 = x3d.Text()
Text1588.setString(["17"])
FontStyle1589 = x3d.FontStyle()
FontStyle1589.setSize(0.035)

Text1588.setFontStyle(FontStyle1589)

Shape1587.setGeometry(Text1588)

Billboard1586.addChildren(Shape1587)

HAnimSite1578.addChildren(Billboard1586)

HAnimSegment1553.addChildren(HAnimSite1578)
HAnimSite1590 = x3d.HAnimSite()
HAnimSite1590.setName("l_axilla_posterior_folds")
HAnimSite1590.setDEF("hanim_l_axilla_posterior_folds_pt")
HAnimSite1590.setTranslation(x3d.doubleToFloat([0.15,1.145,-0.04]))
TouchSensor1591 = x3d.TouchSensor()
TouchSensor1591.setDescription("HAnimSite 18 hanim_l_axilla_posterior_folds_pt")

HAnimSite1590.addChildren(TouchSensor1591)
Shape1592 = x3d.Shape()
Appearance1593 = x3d.Appearance()
Material1594 = x3d.Material()
Material1594.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1593.setMaterial(Material1594)

Shape1592.setAppearance(Appearance1593)
IndexedFaceSet1595 = x3d.IndexedFaceSet()
IndexedFaceSet1595.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1595.setCreaseAngle(0.5)
IndexedFaceSet1595.setSolid(False)
ColorRGBA1596 = x3d.ColorRGBA()
ColorRGBA1596.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1595.setColor(ColorRGBA1596)
Coordinate1597 = x3d.Coordinate()
Coordinate1597.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1595.setCoord(Coordinate1597)

Shape1592.setGeometry(IndexedFaceSet1595)

HAnimSite1590.addChildren(Shape1592)
Billboard1598 = x3d.Billboard()
Billboard1598.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1599 = x3d.Shape()
Text1600 = x3d.Text()
Text1600.setString(["18"])
FontStyle1601 = x3d.FontStyle()
FontStyle1601.setSize(0.035)

Text1600.setFontStyle(FontStyle1601)

Shape1599.setGeometry(Text1600)

Billboard1598.addChildren(Shape1599)

HAnimSite1590.addChildren(Billboard1598)

HAnimSegment1553.addChildren(HAnimSite1590)
Shape1602 = x3d.Shape()
LineSet1603 = x3d.LineSet()
LineSet1603.setVertexCount([2])
ColorRGBA1604 = x3d.ColorRGBA()
ColorRGBA1604.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1603.setColor(ColorRGBA1604)
Coordinate1605 = x3d.Coordinate()
Coordinate1605.setPoint(x3d.doubleToFloat([0.12294,1.191825,-0.0129,0.03847,1.2087,-0.01378]))

LineSet1603.setCoord(Coordinate1605)

Shape1602.setGeometry(LineSet1603)

HAnimSegment1553.addChildren(Shape1602)

HAnimJoint1552.addChildren(HAnimSegment1553)
HAnimJoint1606 = x3d.HAnimJoint()
HAnimJoint1606.setName("l_shoulder")
HAnimJoint1606.setDEF("hanim_l_shoulder")
HAnimJoint1606.setCenter(x3d.doubleToFloat([0.16506,1.17855,-0.00327]))
HAnimJoint1606.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1606.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1607 = x3d.HAnimSegment()
HAnimSegment1607.setName("l_upperarm")
HAnimSegment1607.setDEF("hanim_l_upperarm")
HAnimSite1608 = x3d.HAnimSite()
HAnimSite1608.setName("l_humeral_lateral_epicondyle")
HAnimSite1608.setDEF("hanim_l_humeral_lateral_epicondyle_pt")
HAnimSite1608.setTranslation(x3d.doubleToFloat([0.2,0.95,-0.03]))
TouchSensor1609 = x3d.TouchSensor()
TouchSensor1609.setDescription("HAnimSite 63 hanim_l_humeral_lateral_epicondyle_pt")

HAnimSite1608.addChildren(TouchSensor1609)
Shape1610 = x3d.Shape()
Appearance1611 = x3d.Appearance()
Material1612 = x3d.Material()
Material1612.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1611.setMaterial(Material1612)

Shape1610.setAppearance(Appearance1611)
IndexedFaceSet1613 = x3d.IndexedFaceSet()
IndexedFaceSet1613.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1613.setCreaseAngle(0.5)
IndexedFaceSet1613.setSolid(False)
ColorRGBA1614 = x3d.ColorRGBA()
ColorRGBA1614.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1613.setColor(ColorRGBA1614)
Coordinate1615 = x3d.Coordinate()
Coordinate1615.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1613.setCoord(Coordinate1615)

Shape1610.setGeometry(IndexedFaceSet1613)

HAnimSite1608.addChildren(Shape1610)
Billboard1616 = x3d.Billboard()
Billboard1616.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1617 = x3d.Shape()
Text1618 = x3d.Text()
Text1618.setString(["63"])
FontStyle1619 = x3d.FontStyle()
FontStyle1619.setSize(0.035)

Text1618.setFontStyle(FontStyle1619)

Shape1617.setGeometry(Text1618)

Billboard1616.addChildren(Shape1617)

HAnimSite1608.addChildren(Billboard1616)

HAnimSegment1607.addChildren(HAnimSite1608)
HAnimSite1620 = x3d.HAnimSite()
HAnimSite1620.setName("l_humeral_medial_epicondyle")
HAnimSite1620.setDEF("hanim_l_humeral_medial_epicondyle_pt")
HAnimSite1620.setTranslation(x3d.doubleToFloat([0.18,0.93,-0.03]))
TouchSensor1621 = x3d.TouchSensor()
TouchSensor1621.setDescription("HAnimSite 64 hanim_l_humeral_medial_epicondyle_pt")

HAnimSite1620.addChildren(TouchSensor1621)
Shape1622 = x3d.Shape()
Appearance1623 = x3d.Appearance()
Material1624 = x3d.Material()
Material1624.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1623.setMaterial(Material1624)

Shape1622.setAppearance(Appearance1623)
IndexedFaceSet1625 = x3d.IndexedFaceSet()
IndexedFaceSet1625.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1625.setCreaseAngle(0.5)
IndexedFaceSet1625.setSolid(False)
ColorRGBA1626 = x3d.ColorRGBA()
ColorRGBA1626.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1625.setColor(ColorRGBA1626)
Coordinate1627 = x3d.Coordinate()
Coordinate1627.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1625.setCoord(Coordinate1627)

Shape1622.setGeometry(IndexedFaceSet1625)

HAnimSite1620.addChildren(Shape1622)
Billboard1628 = x3d.Billboard()
Billboard1628.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1629 = x3d.Shape()
Text1630 = x3d.Text()
Text1630.setString(["64"])
FontStyle1631 = x3d.FontStyle()
FontStyle1631.setSize(0.035)

Text1630.setFontStyle(FontStyle1631)

Shape1629.setGeometry(Text1630)

Billboard1628.addChildren(Shape1629)

HAnimSite1620.addChildren(Billboard1628)

HAnimSegment1607.addChildren(HAnimSite1620)
HAnimSite1632 = x3d.HAnimSite()
HAnimSite1632.setName("l_radiale")
HAnimSite1632.setDEF("hanim_l_radiale_pt")
HAnimSite1632.setTranslation(x3d.doubleToFloat([0.2,0.91,-0.03]))
TouchSensor1633 = x3d.TouchSensor()
TouchSensor1633.setDescription("HAnimSite 69 hanim_l_radiale_pt")

HAnimSite1632.addChildren(TouchSensor1633)
Shape1634 = x3d.Shape()
Appearance1635 = x3d.Appearance()
Material1636 = x3d.Material()
Material1636.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1635.setMaterial(Material1636)

Shape1634.setAppearance(Appearance1635)
IndexedFaceSet1637 = x3d.IndexedFaceSet()
IndexedFaceSet1637.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1637.setCreaseAngle(0.5)
IndexedFaceSet1637.setSolid(False)
ColorRGBA1638 = x3d.ColorRGBA()
ColorRGBA1638.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1637.setColor(ColorRGBA1638)
Coordinate1639 = x3d.Coordinate()
Coordinate1639.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1637.setCoord(Coordinate1639)

Shape1634.setGeometry(IndexedFaceSet1637)

HAnimSite1632.addChildren(Shape1634)
Billboard1640 = x3d.Billboard()
Billboard1640.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1641 = x3d.Shape()
Text1642 = x3d.Text()
Text1642.setString(["69"])
FontStyle1643 = x3d.FontStyle()
FontStyle1643.setSize(0.035)

Text1642.setFontStyle(FontStyle1643)

Shape1641.setGeometry(Text1642)

Billboard1640.addChildren(Shape1641)

HAnimSite1632.addChildren(Billboard1640)

HAnimSegment1607.addChildren(HAnimSite1632)
HAnimSite1644 = x3d.HAnimSite()
HAnimSite1644.setName("l_bideltoid")
HAnimSite1644.setDEF("hanim_l_bideltoid_pt")
HAnimSite1644.setTranslation(x3d.doubleToFloat([0.225,1.185,0]))
TouchSensor1645 = x3d.TouchSensor()
TouchSensor1645.setDescription("HAnimSite 96 hanim_l_bideltoid_pt")

HAnimSite1644.addChildren(TouchSensor1645)
Shape1646 = x3d.Shape()
Appearance1647 = x3d.Appearance()
Material1648 = x3d.Material()
Material1648.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1647.setMaterial(Material1648)

Shape1646.setAppearance(Appearance1647)
IndexedFaceSet1649 = x3d.IndexedFaceSet()
IndexedFaceSet1649.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1649.setCreaseAngle(0.5)
IndexedFaceSet1649.setSolid(False)
ColorRGBA1650 = x3d.ColorRGBA()
ColorRGBA1650.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1649.setColor(ColorRGBA1650)
Coordinate1651 = x3d.Coordinate()
Coordinate1651.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1649.setCoord(Coordinate1651)

Shape1646.setGeometry(IndexedFaceSet1649)

HAnimSite1644.addChildren(Shape1646)
Billboard1652 = x3d.Billboard()
Billboard1652.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1653 = x3d.Shape()
Text1654 = x3d.Text()
Text1654.setString(["96"])
FontStyle1655 = x3d.FontStyle()
FontStyle1655.setSize(0.035)

Text1654.setFontStyle(FontStyle1655)

Shape1653.setGeometry(Text1654)

Billboard1652.addChildren(Shape1653)

HAnimSite1644.addChildren(Billboard1652)

HAnimSegment1607.addChildren(HAnimSite1644)
Shape1656 = x3d.Shape()
LineSet1657 = x3d.LineSet()
LineSet1657.setVertexCount([2])
ColorRGBA1658 = x3d.ColorRGBA()
ColorRGBA1658.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1657.setColor(ColorRGBA1658)
Coordinate1659 = x3d.Coordinate()
Coordinate1659.setPoint(x3d.doubleToFloat([0.16506,1.17855,-0.00327,0.12294,1.191825,-0.0129]))

LineSet1657.setCoord(Coordinate1659)

Shape1656.setGeometry(LineSet1657)

HAnimSegment1607.addChildren(Shape1656)

HAnimJoint1606.addChildren(HAnimSegment1607)
HAnimJoint1660 = x3d.HAnimJoint()
HAnimJoint1660.setName("l_elbow")
HAnimJoint1660.setDEF("hanim_l_elbow")
HAnimJoint1660.setCenter(x3d.doubleToFloat([0.18209,0.9288,-0.00563]))
HAnimJoint1660.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1660.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1661 = x3d.HAnimSegment()
HAnimSegment1661.setName("l_forearm")
HAnimSegment1661.setDEF("hanim_l_forearm")
HAnimSite1662 = x3d.HAnimSite()
HAnimSite1662.setName("l_radial_styloid")
HAnimSite1662.setDEF("hanim_l_radial_styloid_pt")
HAnimSite1662.setTranslation(x3d.doubleToFloat([0.18,0.725,0.025]))
TouchSensor1663 = x3d.TouchSensor()
TouchSensor1663.setDescription("HAnimSite 71 hanim_l_radial_styloid_pt")

HAnimSite1662.addChildren(TouchSensor1663)
Shape1664 = x3d.Shape()
Appearance1665 = x3d.Appearance()
Material1666 = x3d.Material()
Material1666.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1665.setMaterial(Material1666)

Shape1664.setAppearance(Appearance1665)
IndexedFaceSet1667 = x3d.IndexedFaceSet()
IndexedFaceSet1667.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1667.setCreaseAngle(0.5)
IndexedFaceSet1667.setSolid(False)
ColorRGBA1668 = x3d.ColorRGBA()
ColorRGBA1668.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1667.setColor(ColorRGBA1668)
Coordinate1669 = x3d.Coordinate()
Coordinate1669.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1667.setCoord(Coordinate1669)

Shape1664.setGeometry(IndexedFaceSet1667)

HAnimSite1662.addChildren(Shape1664)
Billboard1670 = x3d.Billboard()
Billboard1670.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1671 = x3d.Shape()
Text1672 = x3d.Text()
Text1672.setString(["71"])
FontStyle1673 = x3d.FontStyle()
FontStyle1673.setSize(0.035)

Text1672.setFontStyle(FontStyle1673)

Shape1671.setGeometry(Text1672)

Billboard1670.addChildren(Shape1671)

HAnimSite1662.addChildren(Billboard1670)

HAnimSegment1661.addChildren(HAnimSite1662)
HAnimSite1674 = x3d.HAnimSite()
HAnimSite1674.setName("l_olecranon")
HAnimSite1674.setDEF("hanim_l_olecranon_pt")
HAnimSite1674.setTranslation(x3d.doubleToFloat([0.2,0.92,-0.03]))
TouchSensor1675 = x3d.TouchSensor()
TouchSensor1675.setDescription("HAnimSite 65 hanim_l_olecranon_pt")

HAnimSite1674.addChildren(TouchSensor1675)
Shape1676 = x3d.Shape()
Appearance1677 = x3d.Appearance()
Material1678 = x3d.Material()
Material1678.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1677.setMaterial(Material1678)

Shape1676.setAppearance(Appearance1677)
IndexedFaceSet1679 = x3d.IndexedFaceSet()
IndexedFaceSet1679.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1679.setCreaseAngle(0.5)
IndexedFaceSet1679.setSolid(False)
ColorRGBA1680 = x3d.ColorRGBA()
ColorRGBA1680.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1679.setColor(ColorRGBA1680)
Coordinate1681 = x3d.Coordinate()
Coordinate1681.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1679.setCoord(Coordinate1681)

Shape1676.setGeometry(IndexedFaceSet1679)

HAnimSite1674.addChildren(Shape1676)
Billboard1682 = x3d.Billboard()
Billboard1682.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1683 = x3d.Shape()
Text1684 = x3d.Text()
Text1684.setString(["65"])
FontStyle1685 = x3d.FontStyle()
FontStyle1685.setSize(0.035)

Text1684.setFontStyle(FontStyle1685)

Shape1683.setGeometry(Text1684)

Billboard1682.addChildren(Shape1683)

HAnimSite1674.addChildren(Billboard1682)

HAnimSegment1661.addChildren(HAnimSite1674)
Shape1686 = x3d.Shape()
LineSet1687 = x3d.LineSet()
LineSet1687.setVertexCount([2])
ColorRGBA1688 = x3d.ColorRGBA()
ColorRGBA1688.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1687.setColor(ColorRGBA1688)
Coordinate1689 = x3d.Coordinate()
Coordinate1689.setPoint(x3d.doubleToFloat([0.18209,0.9288,-0.00563,0.16506,1.17855,-0.00327]))

LineSet1687.setCoord(Coordinate1689)

Shape1686.setGeometry(LineSet1687)

HAnimSegment1661.addChildren(Shape1686)

HAnimJoint1660.addChildren(HAnimSegment1661)
HAnimJoint1690 = x3d.HAnimJoint()
HAnimJoint1690.setName("l_radiocarpal")
HAnimJoint1690.setDEF("hanim_l_radiocarpal")
HAnimJoint1690.setCenter(x3d.doubleToFloat([0.1819,0.72427,-0.005]))
HAnimJoint1690.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1690.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1691 = x3d.HAnimSegment()
HAnimSegment1691.setName("l_carpal")
HAnimSegment1691.setDEF("hanim_l_carpal")
HAnimSite1692 = x3d.HAnimSite()
HAnimSite1692.setName("l_ulnar_styloid")
HAnimSite1692.setDEF("hanim_l_ulnar_styloid_pt")
HAnimSite1692.setTranslation(x3d.doubleToFloat([0.2,0.725,0]))
TouchSensor1693 = x3d.TouchSensor()
TouchSensor1693.setDescription("HAnimSite 70 hanim_l_ulnar_styloid_pt")

HAnimSite1692.addChildren(TouchSensor1693)
Shape1694 = x3d.Shape()
Appearance1695 = x3d.Appearance()
Material1696 = x3d.Material()
Material1696.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1695.setMaterial(Material1696)

Shape1694.setAppearance(Appearance1695)
IndexedFaceSet1697 = x3d.IndexedFaceSet()
IndexedFaceSet1697.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1697.setCreaseAngle(0.5)
IndexedFaceSet1697.setSolid(False)
ColorRGBA1698 = x3d.ColorRGBA()
ColorRGBA1698.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1697.setColor(ColorRGBA1698)
Coordinate1699 = x3d.Coordinate()
Coordinate1699.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1697.setCoord(Coordinate1699)

Shape1694.setGeometry(IndexedFaceSet1697)

HAnimSite1692.addChildren(Shape1694)
Billboard1700 = x3d.Billboard()
Billboard1700.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1701 = x3d.Shape()
Text1702 = x3d.Text()
Text1702.setString(["70"])
FontStyle1703 = x3d.FontStyle()
FontStyle1703.setSize(0.035)

Text1702.setFontStyle(FontStyle1703)

Shape1701.setGeometry(Text1702)

Billboard1700.addChildren(Shape1701)

HAnimSite1692.addChildren(Billboard1700)

HAnimSegment1691.addChildren(HAnimSite1692)
Shape1704 = x3d.Shape()
LineSet1705 = x3d.LineSet()
LineSet1705.setVertexCount([2])
ColorRGBA1706 = x3d.ColorRGBA()
ColorRGBA1706.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1705.setColor(ColorRGBA1706)
Coordinate1707 = x3d.Coordinate()
Coordinate1707.setPoint(x3d.doubleToFloat([0.1819,0.72427,-0.005,0.18209,0.9288,-0.00563]))

LineSet1705.setCoord(Coordinate1707)

Shape1704.setGeometry(LineSet1705)

HAnimSegment1691.addChildren(Shape1704)

HAnimJoint1690.addChildren(HAnimSegment1691)
HAnimJoint1708 = x3d.HAnimJoint()
HAnimJoint1708.setName("l_midcarpal_1")
HAnimJoint1708.setDEF("hanim_l_midcarpal_1")
HAnimJoint1708.setCenter(x3d.doubleToFloat([0.1813,0.706,0.0193]))
HAnimJoint1708.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1708.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1709 = x3d.HAnimSegment()
HAnimSegment1709.setName("l_trapezium")
HAnimSegment1709.setDEF("hanim_l_trapezium")
Shape1710 = x3d.Shape()
LineSet1711 = x3d.LineSet()
LineSet1711.setVertexCount([2])
ColorRGBA1712 = x3d.ColorRGBA()
ColorRGBA1712.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1711.setColor(ColorRGBA1712)
Coordinate1713 = x3d.Coordinate()
Coordinate1713.setPoint(x3d.doubleToFloat([0.1813,0.706,0.0193,0.1819,0.72427,-0.005]))

LineSet1711.setCoord(Coordinate1713)

Shape1710.setGeometry(LineSet1711)

HAnimSegment1709.addChildren(Shape1710)

HAnimJoint1708.addChildren(HAnimSegment1709)
HAnimJoint1714 = x3d.HAnimJoint()
HAnimJoint1714.setName("l_carpometacarpal_1")
HAnimJoint1714.setDEF("hanim_l_carpometacarpal_1")
HAnimJoint1714.setCenter(x3d.doubleToFloat([0.1805,0.69255,0.026]))
HAnimJoint1714.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1714.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1715 = x3d.HAnimSegment()
HAnimSegment1715.setName("l_metacarpal_1")
HAnimSegment1715.setDEF("hanim_l_metacarpal_1")
HAnimSite1716 = x3d.HAnimSite()
HAnimSite1716.setName("l_metacarpal_phalanx_2")
HAnimSite1716.setDEF("hanim_l_metacarpal_phalanx_2_pt")
HAnimSite1716.setTranslation(x3d.doubleToFloat([0.2,0.665,0.012]))
TouchSensor1717 = x3d.TouchSensor()
TouchSensor1717.setDescription("HAnimSite 75 hanim_l_metacarpal_phalanx_2_pt")

HAnimSite1716.addChildren(TouchSensor1717)
Shape1718 = x3d.Shape()
Appearance1719 = x3d.Appearance()
Material1720 = x3d.Material()
Material1720.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1719.setMaterial(Material1720)

Shape1718.setAppearance(Appearance1719)
IndexedFaceSet1721 = x3d.IndexedFaceSet()
IndexedFaceSet1721.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1721.setCreaseAngle(0.5)
IndexedFaceSet1721.setSolid(False)
ColorRGBA1722 = x3d.ColorRGBA()
ColorRGBA1722.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1721.setColor(ColorRGBA1722)
Coordinate1723 = x3d.Coordinate()
Coordinate1723.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1721.setCoord(Coordinate1723)

Shape1718.setGeometry(IndexedFaceSet1721)

HAnimSite1716.addChildren(Shape1718)
Billboard1724 = x3d.Billboard()
Billboard1724.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1725 = x3d.Shape()
Text1726 = x3d.Text()
Text1726.setString(["75"])
FontStyle1727 = x3d.FontStyle()
FontStyle1727.setSize(0.035)

Text1726.setFontStyle(FontStyle1727)

Shape1725.setGeometry(Text1726)

Billboard1724.addChildren(Shape1725)

HAnimSite1716.addChildren(Billboard1724)

HAnimSegment1715.addChildren(HAnimSite1716)
Shape1728 = x3d.Shape()
LineSet1729 = x3d.LineSet()
LineSet1729.setVertexCount([2])
ColorRGBA1730 = x3d.ColorRGBA()
ColorRGBA1730.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1729.setColor(ColorRGBA1730)
Coordinate1731 = x3d.Coordinate()
Coordinate1731.setPoint(x3d.doubleToFloat([0.1805,0.69255,0.026,0.1813,0.706,0.0193]))

LineSet1729.setCoord(Coordinate1731)

Shape1728.setGeometry(LineSet1729)

HAnimSegment1715.addChildren(Shape1728)

HAnimJoint1714.addChildren(HAnimSegment1715)
HAnimJoint1732 = x3d.HAnimJoint()
HAnimJoint1732.setName("l_metacarpophalangeal_1")
HAnimJoint1732.setDEF("hanim_l_metacarpophalangeal_1")
HAnimJoint1732.setCenter(x3d.doubleToFloat([0.181,0.6727,0.03577]))
HAnimJoint1732.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1732.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1733 = x3d.HAnimSegment()
HAnimSegment1733.setName("l_carpal_proximal_phalanx_1")
HAnimSegment1733.setDEF("hanim_l_carpal_proximal_phalanx_1")
Shape1734 = x3d.Shape()
LineSet1735 = x3d.LineSet()
LineSet1735.setVertexCount([2])
ColorRGBA1736 = x3d.ColorRGBA()
ColorRGBA1736.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1735.setColor(ColorRGBA1736)
Coordinate1737 = x3d.Coordinate()
Coordinate1737.setPoint(x3d.doubleToFloat([0.181,0.6727,0.03577,0.1805,0.69255,0.026]))

LineSet1735.setCoord(Coordinate1737)

Shape1734.setGeometry(LineSet1735)

HAnimSegment1733.addChildren(Shape1734)

HAnimJoint1732.addChildren(HAnimSegment1733)
HAnimJoint1738 = x3d.HAnimJoint()
HAnimJoint1738.setName("l_carpal_interphalangeal_1")
HAnimJoint1738.setDEF("hanim_l_carpal_interphalangeal_1")
HAnimJoint1738.setCenter(x3d.doubleToFloat([0.1826,0.654,0.04966]))
HAnimJoint1738.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1738.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1739 = x3d.HAnimSegment()
HAnimSegment1739.setName("l_carpal_distal_phalanx_1")
HAnimSegment1739.setDEF("hanim_l_carpal_distal_phalanx_1")
HAnimSite1740 = x3d.HAnimSite()
HAnimSite1740.setName("l_carpal_distal_phalanx_1")
HAnimSite1740.setDEF("hanim_l_carpal_distal_phalanx_1_tip")
HAnimSite1740.setTranslation(x3d.doubleToFloat([0.18,0.64,0.06]))
TouchSensor1741 = x3d.TouchSensor()
TouchSensor1741.setDescription("HAnimSite 101 hanim_l_carpal_distal_phalanx_1_tip")

HAnimSite1740.addChildren(TouchSensor1741)
Shape1742 = x3d.Shape()
Appearance1743 = x3d.Appearance()
Material1744 = x3d.Material()
Material1744.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1743.setMaterial(Material1744)

Shape1742.setAppearance(Appearance1743)
IndexedFaceSet1745 = x3d.IndexedFaceSet()
IndexedFaceSet1745.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1745.setCreaseAngle(0.5)
IndexedFaceSet1745.setSolid(False)
ColorRGBA1746 = x3d.ColorRGBA()
ColorRGBA1746.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1745.setColor(ColorRGBA1746)
Coordinate1747 = x3d.Coordinate()
Coordinate1747.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1745.setCoord(Coordinate1747)

Shape1742.setGeometry(IndexedFaceSet1745)

HAnimSite1740.addChildren(Shape1742)
Billboard1748 = x3d.Billboard()
Billboard1748.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1749 = x3d.Shape()
Text1750 = x3d.Text()
Text1750.setString(["101"])
FontStyle1751 = x3d.FontStyle()
FontStyle1751.setSize(0.035)

Text1750.setFontStyle(FontStyle1751)

Shape1749.setGeometry(Text1750)

Billboard1748.addChildren(Shape1749)

HAnimSite1740.addChildren(Billboard1748)

HAnimSegment1739.addChildren(HAnimSite1740)
Shape1752 = x3d.Shape()
LineSet1753 = x3d.LineSet()
LineSet1753.setVertexCount([2])
ColorRGBA1754 = x3d.ColorRGBA()
ColorRGBA1754.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1753.setColor(ColorRGBA1754)
Coordinate1755 = x3d.Coordinate()
Coordinate1755.setPoint(x3d.doubleToFloat([0.1826,0.654,0.04966,0.181,0.6727,0.03577]))

LineSet1753.setCoord(Coordinate1755)

Shape1752.setGeometry(LineSet1753)

HAnimSegment1739.addChildren(Shape1752)

HAnimJoint1738.addChildren(HAnimSegment1739)

HAnimJoint1732.addChildren(HAnimJoint1738)

HAnimJoint1714.addChildren(HAnimJoint1732)

HAnimJoint1708.addChildren(HAnimJoint1714)

HAnimJoint1690.addChildren(HAnimJoint1708)
HAnimJoint1756 = x3d.HAnimJoint()
HAnimJoint1756.setName("l_midcarpal_2")
HAnimJoint1756.setDEF("hanim_l_midcarpal_2")
HAnimJoint1756.setCenter(x3d.doubleToFloat([0.18128,0.70695,0.00842]))
HAnimJoint1756.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1756.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1757 = x3d.HAnimSegment()
HAnimSegment1757.setName("l_trapezoid")
HAnimSegment1757.setDEF("hanim_l_trapezoid")
Shape1758 = x3d.Shape()
LineSet1759 = x3d.LineSet()
LineSet1759.setVertexCount([2])
ColorRGBA1760 = x3d.ColorRGBA()
ColorRGBA1760.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1759.setColor(ColorRGBA1760)
Coordinate1761 = x3d.Coordinate()
Coordinate1761.setPoint(x3d.doubleToFloat([0.18128,0.70695,0.00842,0.1819,0.72427,-0.005]))

LineSet1759.setCoord(Coordinate1761)

Shape1758.setGeometry(LineSet1759)

HAnimSegment1757.addChildren(Shape1758)

HAnimJoint1756.addChildren(HAnimSegment1757)
HAnimJoint1762 = x3d.HAnimJoint()
HAnimJoint1762.setName("l_carpometacarpal_2")
HAnimJoint1762.setDEF("hanim_l_carpometacarpal_2")
HAnimJoint1762.setCenter(x3d.doubleToFloat([0.18128,0.6876,0.0098]))
HAnimJoint1762.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1762.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1763 = x3d.HAnimSegment()
HAnimSegment1763.setName("l_metacarpal_2")
HAnimSegment1763.setDEF("hanim_l_metacarpal_2")
Shape1764 = x3d.Shape()
LineSet1765 = x3d.LineSet()
LineSet1765.setVertexCount([2])
ColorRGBA1766 = x3d.ColorRGBA()
ColorRGBA1766.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1765.setColor(ColorRGBA1766)
Coordinate1767 = x3d.Coordinate()
Coordinate1767.setPoint(x3d.doubleToFloat([0.18128,0.6876,0.0098,0.18128,0.70695,0.00842]))

LineSet1765.setCoord(Coordinate1767)

Shape1764.setGeometry(LineSet1765)

HAnimSegment1763.addChildren(Shape1764)

HAnimJoint1762.addChildren(HAnimSegment1763)
HAnimJoint1768 = x3d.HAnimJoint()
HAnimJoint1768.setName("l_metacarpophalangeal_2")
HAnimJoint1768.setDEF("hanim_l_metacarpophalangeal_2")
HAnimJoint1768.setCenter(x3d.doubleToFloat([0.1837,0.6372,0.01507]))
HAnimJoint1768.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1768.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1769 = x3d.HAnimSegment()
HAnimSegment1769.setName("l_carpal_proximal_phalanx_2")
HAnimSegment1769.setDEF("hanim_l_carpal_proximal_phalanx_2")
Shape1770 = x3d.Shape()
LineSet1771 = x3d.LineSet()
LineSet1771.setVertexCount([2])
ColorRGBA1772 = x3d.ColorRGBA()
ColorRGBA1772.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1771.setColor(ColorRGBA1772)
Coordinate1773 = x3d.Coordinate()
Coordinate1773.setPoint(x3d.doubleToFloat([0.1837,0.6372,0.01507,0.18128,0.6876,0.0098]))

LineSet1771.setCoord(Coordinate1773)

Shape1770.setGeometry(LineSet1771)

HAnimSegment1769.addChildren(Shape1770)

HAnimJoint1768.addChildren(HAnimSegment1769)
HAnimJoint1774 = x3d.HAnimJoint()
HAnimJoint1774.setName("l_carpal_proximal_interphalangeal_2")
HAnimJoint1774.setDEF("hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint1774.setCenter(x3d.doubleToFloat([0.18171,0.6068,0.01418]))
HAnimJoint1774.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1774.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1775 = x3d.HAnimSegment()
HAnimSegment1775.setName("l_carpal_middle_phalanx_2")
HAnimSegment1775.setDEF("hanim_l_carpal_middle_phalanx_2")
Shape1776 = x3d.Shape()
LineSet1777 = x3d.LineSet()
LineSet1777.setVertexCount([2])
ColorRGBA1778 = x3d.ColorRGBA()
ColorRGBA1778.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1777.setColor(ColorRGBA1778)
Coordinate1779 = x3d.Coordinate()
Coordinate1779.setPoint(x3d.doubleToFloat([0.18171,0.6068,0.01418,0.1837,0.6372,0.01507]))

LineSet1777.setCoord(Coordinate1779)

Shape1776.setGeometry(LineSet1777)

HAnimSegment1775.addChildren(Shape1776)

HAnimJoint1774.addChildren(HAnimSegment1775)
HAnimJoint1780 = x3d.HAnimJoint()
HAnimJoint1780.setName("l_carpal_distal_interphalangeal_2")
HAnimJoint1780.setDEF("hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint1780.setCenter(x3d.doubleToFloat([0.18067,0.5816,0.01338]))
HAnimJoint1780.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1780.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1781 = x3d.HAnimSegment()
HAnimSegment1781.setName("l_carpal_distal_phalanx_2")
HAnimSegment1781.setDEF("hanim_l_carpal_distal_phalanx_2")
HAnimSite1782 = x3d.HAnimSite()
HAnimSite1782.setName("l_dactylion")
HAnimSite1782.setDEF("hanim_l_dactylion_pt")
HAnimSite1782.setTranslation(x3d.doubleToFloat([0.17,0.558,0.017]))
TouchSensor1783 = x3d.TouchSensor()
TouchSensor1783.setDescription("HAnimSite 57 hanim_l_dactylion_pt")

HAnimSite1782.addChildren(TouchSensor1783)
Shape1784 = x3d.Shape()
Appearance1785 = x3d.Appearance()
Material1786 = x3d.Material()
Material1786.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1785.setMaterial(Material1786)

Shape1784.setAppearance(Appearance1785)
IndexedFaceSet1787 = x3d.IndexedFaceSet()
IndexedFaceSet1787.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1787.setCreaseAngle(0.5)
IndexedFaceSet1787.setSolid(False)
ColorRGBA1788 = x3d.ColorRGBA()
ColorRGBA1788.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1787.setColor(ColorRGBA1788)
Coordinate1789 = x3d.Coordinate()
Coordinate1789.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1787.setCoord(Coordinate1789)

Shape1784.setGeometry(IndexedFaceSet1787)

HAnimSite1782.addChildren(Shape1784)
Billboard1790 = x3d.Billboard()
Billboard1790.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1791 = x3d.Shape()
Text1792 = x3d.Text()
Text1792.setString(["57"])
FontStyle1793 = x3d.FontStyle()
FontStyle1793.setSize(0.035)

Text1792.setFontStyle(FontStyle1793)

Shape1791.setGeometry(Text1792)

Billboard1790.addChildren(Shape1791)

HAnimSite1782.addChildren(Billboard1790)

HAnimSegment1781.addChildren(HAnimSite1782)
HAnimSite1794 = x3d.HAnimSite()
HAnimSite1794.setName("l_carpal_distal_phalanx_2")
HAnimSite1794.setDEF("hanim_l_carpal_distal_phalanx_2_tip")
HAnimSite1794.setTranslation(x3d.doubleToFloat([0.172,0.558,0.017]))
TouchSensor1795 = x3d.TouchSensor()
TouchSensor1795.setDescription("HAnimSite 102 hanim_l_carpal_distal_phalanx_2_tip")

HAnimSite1794.addChildren(TouchSensor1795)
Shape1796 = x3d.Shape()
Appearance1797 = x3d.Appearance()
Material1798 = x3d.Material()
Material1798.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1797.setMaterial(Material1798)

Shape1796.setAppearance(Appearance1797)
IndexedFaceSet1799 = x3d.IndexedFaceSet()
IndexedFaceSet1799.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1799.setCreaseAngle(0.5)
IndexedFaceSet1799.setSolid(False)
ColorRGBA1800 = x3d.ColorRGBA()
ColorRGBA1800.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1799.setColor(ColorRGBA1800)
Coordinate1801 = x3d.Coordinate()
Coordinate1801.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1799.setCoord(Coordinate1801)

Shape1796.setGeometry(IndexedFaceSet1799)

HAnimSite1794.addChildren(Shape1796)
Billboard1802 = x3d.Billboard()
Billboard1802.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1803 = x3d.Shape()
Text1804 = x3d.Text()
Text1804.setString(["102"])
FontStyle1805 = x3d.FontStyle()
FontStyle1805.setSize(0.035)

Text1804.setFontStyle(FontStyle1805)

Shape1803.setGeometry(Text1804)

Billboard1802.addChildren(Shape1803)

HAnimSite1794.addChildren(Billboard1802)

HAnimSegment1781.addChildren(HAnimSite1794)
Shape1806 = x3d.Shape()
LineSet1807 = x3d.LineSet()
LineSet1807.setVertexCount([2])
ColorRGBA1808 = x3d.ColorRGBA()
ColorRGBA1808.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1807.setColor(ColorRGBA1808)
Coordinate1809 = x3d.Coordinate()
Coordinate1809.setPoint(x3d.doubleToFloat([0.18067,0.5816,0.01338,0.18171,0.6068,0.01418]))

LineSet1807.setCoord(Coordinate1809)

Shape1806.setGeometry(LineSet1807)

HAnimSegment1781.addChildren(Shape1806)

HAnimJoint1780.addChildren(HAnimSegment1781)

HAnimJoint1774.addChildren(HAnimJoint1780)

HAnimJoint1768.addChildren(HAnimJoint1774)

HAnimJoint1762.addChildren(HAnimJoint1768)

HAnimJoint1756.addChildren(HAnimJoint1762)

HAnimJoint1690.addChildren(HAnimJoint1756)
HAnimJoint1810 = x3d.HAnimJoint()
HAnimJoint1810.setName("l_midcarpal_3")
HAnimJoint1810.setDEF("hanim_l_midcarpal_3")
HAnimJoint1810.setCenter(x3d.doubleToFloat([0.18108,0.708525,-0.0048]))
HAnimJoint1810.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1810.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1811 = x3d.HAnimSegment()
HAnimSegment1811.setName("l_capitate")
HAnimSegment1811.setDEF("hanim_l_capitate")
Shape1812 = x3d.Shape()
LineSet1813 = x3d.LineSet()
LineSet1813.setVertexCount([2])
ColorRGBA1814 = x3d.ColorRGBA()
ColorRGBA1814.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1813.setColor(ColorRGBA1814)
Coordinate1815 = x3d.Coordinate()
Coordinate1815.setPoint(x3d.doubleToFloat([0.18108,0.708525,-0.0048,0.1819,0.72427,-0.005]))

LineSet1813.setCoord(Coordinate1815)

Shape1812.setGeometry(LineSet1813)

HAnimSegment1811.addChildren(Shape1812)

HAnimJoint1810.addChildren(HAnimSegment1811)
HAnimJoint1816 = x3d.HAnimJoint()
HAnimJoint1816.setName("l_carpometacarpal_3")
HAnimJoint1816.setDEF("hanim_l_carpometacarpal_3")
HAnimJoint1816.setCenter(x3d.doubleToFloat([0.18108,0.6858,-0.00625]))
HAnimJoint1816.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1816.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1817 = x3d.HAnimSegment()
HAnimSegment1817.setName("l_metacarpal_3")
HAnimSegment1817.setDEF("hanim_l_metacarpal_3")
HAnimSite1818 = x3d.HAnimSite()
HAnimSite1818.setName("l_metacarpal_phalanx_3")
HAnimSite1818.setDEF("hanim_l_metacarpal_phalanx_3_pt")
HAnimSite1818.setTranslation(x3d.doubleToFloat([0.2,0.665,-0.039]))
TouchSensor1819 = x3d.TouchSensor()
TouchSensor1819.setDescription("HAnimSite 76 hanim_l_metacarpal_phalanx_3_pt")

HAnimSite1818.addChildren(TouchSensor1819)
Shape1820 = x3d.Shape()
Appearance1821 = x3d.Appearance()
Material1822 = x3d.Material()
Material1822.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1821.setMaterial(Material1822)

Shape1820.setAppearance(Appearance1821)
IndexedFaceSet1823 = x3d.IndexedFaceSet()
IndexedFaceSet1823.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1823.setCreaseAngle(0.5)
IndexedFaceSet1823.setSolid(False)
ColorRGBA1824 = x3d.ColorRGBA()
ColorRGBA1824.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1823.setColor(ColorRGBA1824)
Coordinate1825 = x3d.Coordinate()
Coordinate1825.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1823.setCoord(Coordinate1825)

Shape1820.setGeometry(IndexedFaceSet1823)

HAnimSite1818.addChildren(Shape1820)
Billboard1826 = x3d.Billboard()
Billboard1826.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1827 = x3d.Shape()
Text1828 = x3d.Text()
Text1828.setString(["76"])
FontStyle1829 = x3d.FontStyle()
FontStyle1829.setSize(0.035)

Text1828.setFontStyle(FontStyle1829)

Shape1827.setGeometry(Text1828)

Billboard1826.addChildren(Shape1827)

HAnimSite1818.addChildren(Billboard1826)

HAnimSegment1817.addChildren(HAnimSite1818)
Shape1830 = x3d.Shape()
LineSet1831 = x3d.LineSet()
LineSet1831.setVertexCount([2])
ColorRGBA1832 = x3d.ColorRGBA()
ColorRGBA1832.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1831.setColor(ColorRGBA1832)
Coordinate1833 = x3d.Coordinate()
Coordinate1833.setPoint(x3d.doubleToFloat([0.18108,0.6858,-0.00625,0.18108,0.708525,-0.0048]))

LineSet1831.setCoord(Coordinate1833)

Shape1830.setGeometry(LineSet1831)

HAnimSegment1817.addChildren(Shape1830)

HAnimJoint1816.addChildren(HAnimSegment1817)
HAnimJoint1834 = x3d.HAnimJoint()
HAnimJoint1834.setName("l_metacarpophalangeal_3")
HAnimJoint1834.setDEF("hanim_l_metacarpophalangeal_3")
HAnimJoint1834.setCenter(x3d.doubleToFloat([0.18369,0.6349,-0.0039]))
HAnimJoint1834.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1834.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1835 = x3d.HAnimSegment()
HAnimSegment1835.setName("l_carpal_proximal_phalanx_3")
HAnimSegment1835.setDEF("hanim_l_carpal_proximal_phalanx_3")
Shape1836 = x3d.Shape()
LineSet1837 = x3d.LineSet()
LineSet1837.setVertexCount([2])
ColorRGBA1838 = x3d.ColorRGBA()
ColorRGBA1838.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1837.setColor(ColorRGBA1838)
Coordinate1839 = x3d.Coordinate()
Coordinate1839.setPoint(x3d.doubleToFloat([0.18369,0.6349,-0.0039,0.18108,0.6858,-0.00625]))

LineSet1837.setCoord(Coordinate1839)

Shape1836.setGeometry(LineSet1837)

HAnimSegment1835.addChildren(Shape1836)

HAnimJoint1834.addChildren(HAnimSegment1835)
HAnimJoint1840 = x3d.HAnimJoint()
HAnimJoint1840.setName("l_carpal_proximal_interphalangeal_3")
HAnimJoint1840.setDEF("hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint1840.setCenter(x3d.doubleToFloat([0.18171,0.6032,-0.0035]))
HAnimJoint1840.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1840.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1841 = x3d.HAnimSegment()
HAnimSegment1841.setName("l_carpal_middle_phalanx_3")
HAnimSegment1841.setDEF("hanim_l_carpal_middle_phalanx_3")
Shape1842 = x3d.Shape()
LineSet1843 = x3d.LineSet()
LineSet1843.setVertexCount([2])
ColorRGBA1844 = x3d.ColorRGBA()
ColorRGBA1844.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1843.setColor(ColorRGBA1844)
Coordinate1845 = x3d.Coordinate()
Coordinate1845.setPoint(x3d.doubleToFloat([0.18171,0.6032,-0.0035,0.18369,0.6349,-0.0039]))

LineSet1843.setCoord(Coordinate1845)

Shape1842.setGeometry(LineSet1843)

HAnimSegment1841.addChildren(Shape1842)

HAnimJoint1840.addChildren(HAnimSegment1841)
HAnimJoint1846 = x3d.HAnimJoint()
HAnimJoint1846.setName("l_carpal_distal_interphalangeal_3")
HAnimJoint1846.setDEF("hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint1846.setCenter(x3d.doubleToFloat([0.1807,0.5753,-0.0037]))
HAnimJoint1846.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1846.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1847 = x3d.HAnimSegment()
HAnimSegment1847.setName("l_carpal_distal_phalanx_3")
HAnimSegment1847.setDEF("hanim_l_carpal_distal_phalanx_3")
HAnimSite1848 = x3d.HAnimSite()
HAnimSite1848.setName("l_carpal_distal_phalanx_3")
HAnimSite1848.setDEF("hanim_l_carpal_distal_phalanx_3_tip")
HAnimSite1848.setTranslation(x3d.doubleToFloat([0.172,0.555,-0.006]))
TouchSensor1849 = x3d.TouchSensor()
TouchSensor1849.setDescription("HAnimSite 103 hanim_l_carpal_distal_phalanx_3_tip")

HAnimSite1848.addChildren(TouchSensor1849)
Shape1850 = x3d.Shape()
Appearance1851 = x3d.Appearance()
Material1852 = x3d.Material()
Material1852.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1851.setMaterial(Material1852)

Shape1850.setAppearance(Appearance1851)
IndexedFaceSet1853 = x3d.IndexedFaceSet()
IndexedFaceSet1853.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1853.setCreaseAngle(0.5)
IndexedFaceSet1853.setSolid(False)
ColorRGBA1854 = x3d.ColorRGBA()
ColorRGBA1854.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1853.setColor(ColorRGBA1854)
Coordinate1855 = x3d.Coordinate()
Coordinate1855.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1853.setCoord(Coordinate1855)

Shape1850.setGeometry(IndexedFaceSet1853)

HAnimSite1848.addChildren(Shape1850)
Billboard1856 = x3d.Billboard()
Billboard1856.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1857 = x3d.Shape()
Text1858 = x3d.Text()
Text1858.setString(["103"])
FontStyle1859 = x3d.FontStyle()
FontStyle1859.setSize(0.035)

Text1858.setFontStyle(FontStyle1859)

Shape1857.setGeometry(Text1858)

Billboard1856.addChildren(Shape1857)

HAnimSite1848.addChildren(Billboard1856)

HAnimSegment1847.addChildren(HAnimSite1848)
Shape1860 = x3d.Shape()
LineSet1861 = x3d.LineSet()
LineSet1861.setVertexCount([2])
ColorRGBA1862 = x3d.ColorRGBA()
ColorRGBA1862.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1861.setColor(ColorRGBA1862)
Coordinate1863 = x3d.Coordinate()
Coordinate1863.setPoint(x3d.doubleToFloat([0.1807,0.5753,-0.0037,0.18171,0.6032,-0.0035]))

LineSet1861.setCoord(Coordinate1863)

Shape1860.setGeometry(LineSet1861)

HAnimSegment1847.addChildren(Shape1860)

HAnimJoint1846.addChildren(HAnimSegment1847)

HAnimJoint1840.addChildren(HAnimJoint1846)

HAnimJoint1834.addChildren(HAnimJoint1840)

HAnimJoint1816.addChildren(HAnimJoint1834)

HAnimJoint1810.addChildren(HAnimJoint1816)

HAnimJoint1690.addChildren(HAnimJoint1810)
HAnimJoint1864 = x3d.HAnimJoint()
HAnimJoint1864.setName("l_midcarpal_4_5")
HAnimJoint1864.setDEF("hanim_l_midcarpal_4_5")
HAnimJoint1864.setCenter(x3d.doubleToFloat([0.18108,0.70582,-0.02574]))
HAnimJoint1864.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1864.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1865 = x3d.HAnimSegment()
HAnimSegment1865.setName("l_hamate")
HAnimSegment1865.setDEF("hanim_l_hamate")
Shape1866 = x3d.Shape()
LineSet1867 = x3d.LineSet()
LineSet1867.setVertexCount([2])
ColorRGBA1868 = x3d.ColorRGBA()
ColorRGBA1868.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1867.setColor(ColorRGBA1868)
Coordinate1869 = x3d.Coordinate()
Coordinate1869.setPoint(x3d.doubleToFloat([0.18108,0.70582,-0.02574,0.1819,0.72427,-0.005]))

LineSet1867.setCoord(Coordinate1869)

Shape1866.setGeometry(LineSet1867)

HAnimSegment1865.addChildren(Shape1866)

HAnimJoint1864.addChildren(HAnimSegment1865)
HAnimJoint1870 = x3d.HAnimJoint()
HAnimJoint1870.setName("l_carpometacarpal_4")
HAnimJoint1870.setDEF("hanim_l_carpometacarpal_4")
HAnimJoint1870.setCenter(x3d.doubleToFloat([0.1811,0.68625,-0.0199]))
HAnimJoint1870.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1870.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1871 = x3d.HAnimSegment()
HAnimSegment1871.setName("l_metacarpal_4")
HAnimSegment1871.setDEF("hanim_l_metacarpal_4")
Shape1872 = x3d.Shape()
LineSet1873 = x3d.LineSet()
LineSet1873.setVertexCount([2])
ColorRGBA1874 = x3d.ColorRGBA()
ColorRGBA1874.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1873.setColor(ColorRGBA1874)
Coordinate1875 = x3d.Coordinate()
Coordinate1875.setPoint(x3d.doubleToFloat([0.1811,0.68625,-0.0199,0.18108,0.70582,-0.02574]))

LineSet1873.setCoord(Coordinate1875)

Shape1872.setGeometry(LineSet1873)

HAnimSegment1871.addChildren(Shape1872)

HAnimJoint1870.addChildren(HAnimSegment1871)
HAnimJoint1876 = x3d.HAnimJoint()
HAnimJoint1876.setName("l_metacarpophalangeal_4")
HAnimJoint1876.setDEF("hanim_l_metacarpophalangeal_4")
HAnimJoint1876.setCenter(x3d.doubleToFloat([0.18369,0.63405,-0.02144]))
HAnimJoint1876.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1876.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1877 = x3d.HAnimSegment()
HAnimSegment1877.setName("l_carpal_proximal_phalanx_4")
HAnimSegment1877.setDEF("hanim_l_carpal_proximal_phalanx_4")
Shape1878 = x3d.Shape()
LineSet1879 = x3d.LineSet()
LineSet1879.setVertexCount([2])
ColorRGBA1880 = x3d.ColorRGBA()
ColorRGBA1880.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1879.setColor(ColorRGBA1880)
Coordinate1881 = x3d.Coordinate()
Coordinate1881.setPoint(x3d.doubleToFloat([0.18369,0.63405,-0.02144,0.1811,0.68625,-0.0199]))

LineSet1879.setCoord(Coordinate1881)

Shape1878.setGeometry(LineSet1879)

HAnimSegment1877.addChildren(Shape1878)

HAnimJoint1876.addChildren(HAnimSegment1877)
HAnimJoint1882 = x3d.HAnimJoint()
HAnimJoint1882.setName("l_carpal_proximal_interphalangeal_4")
HAnimJoint1882.setDEF("hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint1882.setCenter(x3d.doubleToFloat([0.1817,0.6066,-0.02064]))
HAnimJoint1882.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1882.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1883 = x3d.HAnimSegment()
HAnimSegment1883.setName("l_carpal_middle_phalanx_4")
HAnimSegment1883.setDEF("hanim_l_carpal_middle_phalanx_4")
Shape1884 = x3d.Shape()
LineSet1885 = x3d.LineSet()
LineSet1885.setVertexCount([2])
ColorRGBA1886 = x3d.ColorRGBA()
ColorRGBA1886.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1885.setColor(ColorRGBA1886)
Coordinate1887 = x3d.Coordinate()
Coordinate1887.setPoint(x3d.doubleToFloat([0.1817,0.6066,-0.02064,0.18369,0.63405,-0.02144]))

LineSet1885.setCoord(Coordinate1887)

Shape1884.setGeometry(LineSet1885)

HAnimSegment1883.addChildren(Shape1884)

HAnimJoint1882.addChildren(HAnimSegment1883)
HAnimJoint1888 = x3d.HAnimJoint()
HAnimJoint1888.setName("l_carpal_distal_interphalangeal_4")
HAnimJoint1888.setDEF("hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint1888.setCenter(x3d.doubleToFloat([0.18067,0.580725,-0.01977]))
HAnimJoint1888.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1888.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1889 = x3d.HAnimSegment()
HAnimSegment1889.setName("l_carpal_distal_phalanx_4")
HAnimSegment1889.setDEF("hanim_l_carpal_distal_phalanx_4")
HAnimSite1890 = x3d.HAnimSite()
HAnimSite1890.setName("l_carpal_distal_phalanx_4")
HAnimSite1890.setDEF("hanim_l_carpal_distal_phalanx_4_tip")
HAnimSite1890.setTranslation(x3d.doubleToFloat([0.172,0.559,-0.024]))
TouchSensor1891 = x3d.TouchSensor()
TouchSensor1891.setDescription("HAnimSite 104 hanim_l_carpal_distal_phalanx_4_tip")

HAnimSite1890.addChildren(TouchSensor1891)
Shape1892 = x3d.Shape()
Appearance1893 = x3d.Appearance()
Material1894 = x3d.Material()
Material1894.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1893.setMaterial(Material1894)

Shape1892.setAppearance(Appearance1893)
IndexedFaceSet1895 = x3d.IndexedFaceSet()
IndexedFaceSet1895.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1895.setCreaseAngle(0.5)
IndexedFaceSet1895.setSolid(False)
ColorRGBA1896 = x3d.ColorRGBA()
ColorRGBA1896.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1895.setColor(ColorRGBA1896)
Coordinate1897 = x3d.Coordinate()
Coordinate1897.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1895.setCoord(Coordinate1897)

Shape1892.setGeometry(IndexedFaceSet1895)

HAnimSite1890.addChildren(Shape1892)
Billboard1898 = x3d.Billboard()
Billboard1898.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1899 = x3d.Shape()
Text1900 = x3d.Text()
Text1900.setString(["104"])
FontStyle1901 = x3d.FontStyle()
FontStyle1901.setSize(0.035)

Text1900.setFontStyle(FontStyle1901)

Shape1899.setGeometry(Text1900)

Billboard1898.addChildren(Shape1899)

HAnimSite1890.addChildren(Billboard1898)

HAnimSegment1889.addChildren(HAnimSite1890)
Shape1902 = x3d.Shape()
LineSet1903 = x3d.LineSet()
LineSet1903.setVertexCount([2])
ColorRGBA1904 = x3d.ColorRGBA()
ColorRGBA1904.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1903.setColor(ColorRGBA1904)
Coordinate1905 = x3d.Coordinate()
Coordinate1905.setPoint(x3d.doubleToFloat([0.18067,0.580725,-0.01977,0.1817,0.6066,-0.02064]))

LineSet1903.setCoord(Coordinate1905)

Shape1902.setGeometry(LineSet1903)

HAnimSegment1889.addChildren(Shape1902)

HAnimJoint1888.addChildren(HAnimSegment1889)

HAnimJoint1882.addChildren(HAnimJoint1888)

HAnimJoint1876.addChildren(HAnimJoint1882)

HAnimJoint1870.addChildren(HAnimJoint1876)

HAnimJoint1864.addChildren(HAnimJoint1870)

HAnimJoint1690.addChildren(HAnimJoint1864)
HAnimJoint1906 = x3d.HAnimJoint()
HAnimJoint1906.setName("l_carpometacarpal_5")
HAnimJoint1906.setDEF("hanim_l_carpometacarpal_5")
HAnimJoint1906.setCenter(x3d.doubleToFloat([0.18164,0.68827,-0.03278]))
HAnimJoint1906.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1906.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1907 = x3d.HAnimSegment()
HAnimSegment1907.setName("l_metacarpal_5")
HAnimSegment1907.setDEF("hanim_l_metacarpal_5")
HAnimSite1908 = x3d.HAnimSite()
HAnimSite1908.setName("l_metacarpal_phalanx_5")
HAnimSite1908.setDEF("hanim_l_metacarpal_phalanx_5_pt")
HAnimSite1908.setTranslation(x3d.doubleToFloat([0.2,0.665,-0.036]))
TouchSensor1909 = x3d.TouchSensor()
TouchSensor1909.setDescription("HAnimSite 77 hanim_l_metacarpal_phalanx_5_pt")

HAnimSite1908.addChildren(TouchSensor1909)
Shape1910 = x3d.Shape()
Appearance1911 = x3d.Appearance()
Material1912 = x3d.Material()
Material1912.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1911.setMaterial(Material1912)

Shape1910.setAppearance(Appearance1911)
IndexedFaceSet1913 = x3d.IndexedFaceSet()
IndexedFaceSet1913.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1913.setCreaseAngle(0.5)
IndexedFaceSet1913.setSolid(False)
ColorRGBA1914 = x3d.ColorRGBA()
ColorRGBA1914.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1913.setColor(ColorRGBA1914)
Coordinate1915 = x3d.Coordinate()
Coordinate1915.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1913.setCoord(Coordinate1915)

Shape1910.setGeometry(IndexedFaceSet1913)

HAnimSite1908.addChildren(Shape1910)
Billboard1916 = x3d.Billboard()
Billboard1916.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1917 = x3d.Shape()
Text1918 = x3d.Text()
Text1918.setString(["77"])
FontStyle1919 = x3d.FontStyle()
FontStyle1919.setSize(0.035)

Text1918.setFontStyle(FontStyle1919)

Shape1917.setGeometry(Text1918)

Billboard1916.addChildren(Shape1917)

HAnimSite1908.addChildren(Billboard1916)

HAnimSegment1907.addChildren(HAnimSite1908)
Shape1920 = x3d.Shape()
LineSet1921 = x3d.LineSet()
LineSet1921.setVertexCount([2])
ColorRGBA1922 = x3d.ColorRGBA()
ColorRGBA1922.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1921.setColor(ColorRGBA1922)
Coordinate1923 = x3d.Coordinate()
Coordinate1923.setPoint(x3d.doubleToFloat([0.18164,0.68827,-0.03278,0.1819,0.72427,-0.005]))

LineSet1921.setCoord(Coordinate1923)

Shape1920.setGeometry(LineSet1921)

HAnimSegment1907.addChildren(Shape1920)

HAnimJoint1906.addChildren(HAnimSegment1907)
HAnimJoint1924 = x3d.HAnimJoint()
HAnimJoint1924.setName("l_metacarpophalangeal_5")
HAnimJoint1924.setDEF("hanim_l_metacarpophalangeal_5")
HAnimJoint1924.setCenter(x3d.doubleToFloat([0.1833,0.6381,-0.037]))
HAnimJoint1924.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1924.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1925 = x3d.HAnimSegment()
HAnimSegment1925.setName("l_carpal_proximal_phalanx_5")
HAnimSegment1925.setDEF("hanim_l_carpal_proximal_phalanx_5")
Shape1926 = x3d.Shape()
LineSet1927 = x3d.LineSet()
LineSet1927.setVertexCount([2])
ColorRGBA1928 = x3d.ColorRGBA()
ColorRGBA1928.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1927.setColor(ColorRGBA1928)
Coordinate1929 = x3d.Coordinate()
Coordinate1929.setPoint(x3d.doubleToFloat([0.1833,0.6381,-0.037,0.18164,0.68827,-0.03278]))

LineSet1927.setCoord(Coordinate1929)

Shape1926.setGeometry(LineSet1927)

HAnimSegment1925.addChildren(Shape1926)

HAnimJoint1924.addChildren(HAnimSegment1925)
HAnimJoint1930 = x3d.HAnimJoint()
HAnimJoint1930.setName("l_carpal_proximal_interphalangeal_5")
HAnimJoint1930.setDEF("hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint1930.setCenter(x3d.doubleToFloat([0.18166,0.621,-0.03715]))
HAnimJoint1930.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1930.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1931 = x3d.HAnimSegment()
HAnimSegment1931.setName("l_carpal_middle_phalanx_5")
HAnimSegment1931.setDEF("hanim_l_carpal_middle_phalanx_5")
Shape1932 = x3d.Shape()
LineSet1933 = x3d.LineSet()
LineSet1933.setVertexCount([2])
ColorRGBA1934 = x3d.ColorRGBA()
ColorRGBA1934.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1933.setColor(ColorRGBA1934)
Coordinate1935 = x3d.Coordinate()
Coordinate1935.setPoint(x3d.doubleToFloat([0.18166,0.621,-0.03715,0.1833,0.6381,-0.037]))

LineSet1933.setCoord(Coordinate1935)

Shape1932.setGeometry(LineSet1933)

HAnimSegment1931.addChildren(Shape1932)

HAnimJoint1930.addChildren(HAnimSegment1931)
HAnimJoint1936 = x3d.HAnimJoint()
HAnimJoint1936.setName("l_carpal_distal_interphalangeal_5")
HAnimJoint1936.setDEF("hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint1936.setCenter(x3d.doubleToFloat([0.1808,0.6023,-0.0369]))
HAnimJoint1936.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1936.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1937 = x3d.HAnimSegment()
HAnimSegment1937.setName("l_carpal_distal_phalanx_5")
HAnimSegment1937.setDEF("hanim_l_carpal_distal_phalanx_5")
HAnimSite1938 = x3d.HAnimSite()
HAnimSite1938.setName("l_carpal_distal_phalanx_5")
HAnimSite1938.setDEF("hanim_l_carpal_distal_phalanx_5_tip")
HAnimSite1938.setTranslation(x3d.doubleToFloat([0.172,0.58,-0.039]))
TouchSensor1939 = x3d.TouchSensor()
TouchSensor1939.setDescription("HAnimSite 105 hanim_l_carpal_distal_phalanx_5_tip")

HAnimSite1938.addChildren(TouchSensor1939)
Shape1940 = x3d.Shape()
Appearance1941 = x3d.Appearance()
Material1942 = x3d.Material()
Material1942.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1941.setMaterial(Material1942)

Shape1940.setAppearance(Appearance1941)
IndexedFaceSet1943 = x3d.IndexedFaceSet()
IndexedFaceSet1943.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1943.setCreaseAngle(0.5)
IndexedFaceSet1943.setSolid(False)
ColorRGBA1944 = x3d.ColorRGBA()
ColorRGBA1944.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1943.setColor(ColorRGBA1944)
Coordinate1945 = x3d.Coordinate()
Coordinate1945.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1943.setCoord(Coordinate1945)

Shape1940.setGeometry(IndexedFaceSet1943)

HAnimSite1938.addChildren(Shape1940)
Billboard1946 = x3d.Billboard()
Billboard1946.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1947 = x3d.Shape()
Text1948 = x3d.Text()
Text1948.setString(["105"])
FontStyle1949 = x3d.FontStyle()
FontStyle1949.setSize(0.035)

Text1948.setFontStyle(FontStyle1949)

Shape1947.setGeometry(Text1948)

Billboard1946.addChildren(Shape1947)

HAnimSite1938.addChildren(Billboard1946)

HAnimSegment1937.addChildren(HAnimSite1938)
Shape1950 = x3d.Shape()
LineSet1951 = x3d.LineSet()
LineSet1951.setVertexCount([2])
ColorRGBA1952 = x3d.ColorRGBA()
ColorRGBA1952.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1951.setColor(ColorRGBA1952)
Coordinate1953 = x3d.Coordinate()
Coordinate1953.setPoint(x3d.doubleToFloat([0.1808,0.6023,-0.0369,0.18166,0.621,-0.03715]))

LineSet1951.setCoord(Coordinate1953)

Shape1950.setGeometry(LineSet1951)

HAnimSegment1937.addChildren(Shape1950)

HAnimJoint1936.addChildren(HAnimSegment1937)

HAnimJoint1930.addChildren(HAnimJoint1936)

HAnimJoint1924.addChildren(HAnimJoint1930)

HAnimJoint1906.addChildren(HAnimJoint1924)

HAnimJoint1690.addChildren(HAnimJoint1906)

HAnimJoint1660.addChildren(HAnimJoint1690)

HAnimJoint1606.addChildren(HAnimJoint1660)

HAnimJoint1552.addChildren(HAnimJoint1606)

HAnimJoint1534.addChildren(HAnimJoint1552)

HAnimJoint1126.addChildren(HAnimJoint1534)
HAnimJoint1954 = x3d.HAnimJoint()
HAnimJoint1954.setName("r_sternoclavicular")
HAnimJoint1954.setDEF("hanim_r_sternoclavicular")
HAnimJoint1954.setCenter(x3d.doubleToFloat([-0.03847,1.2087,-0.0138]))
HAnimJoint1954.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1954.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1955 = x3d.HAnimSegment()
HAnimSegment1955.setName("r_clavicle")
HAnimSegment1955.setDEF("hanim_r_clavicle")
HAnimSite1956 = x3d.HAnimSite()
HAnimSite1956.setName("r_clavicale")
HAnimSite1956.setDEF("hanim_r_clavicale_pt")
HAnimSite1956.setTranslation(x3d.doubleToFloat([-0.03,1.2,0.04]))
TouchSensor1957 = x3d.TouchSensor()
TouchSensor1957.setDescription("HAnimSite r_clavicale hanim_r_clavicale_pt")

HAnimSite1956.addChildren(TouchSensor1957)
Shape1958 = x3d.Shape()
Appearance1959 = x3d.Appearance()
Material1960 = x3d.Material()
Material1960.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1959.setMaterial(Material1960)

Shape1958.setAppearance(Appearance1959)
IndexedFaceSet1961 = x3d.IndexedFaceSet()
IndexedFaceSet1961.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1961.setCreaseAngle(0.5)
IndexedFaceSet1961.setSolid(False)
ColorRGBA1962 = x3d.ColorRGBA()
ColorRGBA1962.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1961.setColor(ColorRGBA1962)
Coordinate1963 = x3d.Coordinate()
Coordinate1963.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1961.setCoord(Coordinate1963)

Shape1958.setGeometry(IndexedFaceSet1961)

HAnimSite1956.addChildren(Shape1958)
Billboard1964 = x3d.Billboard()
Billboard1964.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1965 = x3d.Shape()
Text1966 = x3d.Text()
Text1966.setString(["r_clavicale"])
FontStyle1967 = x3d.FontStyle()
FontStyle1967.setSize(0.035)

Text1966.setFontStyle(FontStyle1967)

Shape1965.setGeometry(Text1966)

Billboard1964.addChildren(Shape1965)

HAnimSite1956.addChildren(Billboard1964)

HAnimSegment1955.addChildren(HAnimSite1956)
Shape1968 = x3d.Shape()
LineSet1969 = x3d.LineSet()
LineSet1969.setVertexCount([2])
ColorRGBA1970 = x3d.ColorRGBA()
ColorRGBA1970.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet1969.setColor(ColorRGBA1970)
Coordinate1971 = x3d.Coordinate()
Coordinate1971.setPoint(x3d.doubleToFloat([-0.03847,1.2087,-0.0138,0,1.22,-0.0138]))

LineSet1969.setCoord(Coordinate1971)

Shape1968.setGeometry(LineSet1969)

HAnimSegment1955.addChildren(Shape1968)

HAnimJoint1954.addChildren(HAnimSegment1955)
HAnimJoint1972 = x3d.HAnimJoint()
HAnimJoint1972.setName("r_acromioclavicular")
HAnimJoint1972.setDEF("hanim_r_acromioclavicular")
HAnimJoint1972.setCenter(x3d.doubleToFloat([-0.1229,1.19182,-0.0129]))
HAnimJoint1972.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1972.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1973 = x3d.HAnimSegment()
HAnimSegment1973.setName("r_scapula")
HAnimSegment1973.setDEF("hanim_r_scapula")
HAnimSite1974 = x3d.HAnimSite()
HAnimSite1974.setName("r_acromion")
HAnimSite1974.setDEF("hanim_r_acromion_pt")
HAnimSite1974.setTranslation(x3d.doubleToFloat([-0.15,1.222,-0.02]))
TouchSensor1975 = x3d.TouchSensor()
TouchSensor1975.setDescription("HAnimSite 20 hanim_r_acromion_pt")

HAnimSite1974.addChildren(TouchSensor1975)
Shape1976 = x3d.Shape()
Appearance1977 = x3d.Appearance()
Material1978 = x3d.Material()
Material1978.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1977.setMaterial(Material1978)

Shape1976.setAppearance(Appearance1977)
IndexedFaceSet1979 = x3d.IndexedFaceSet()
IndexedFaceSet1979.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1979.setCreaseAngle(0.5)
IndexedFaceSet1979.setSolid(False)
ColorRGBA1980 = x3d.ColorRGBA()
ColorRGBA1980.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1979.setColor(ColorRGBA1980)
Coordinate1981 = x3d.Coordinate()
Coordinate1981.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1979.setCoord(Coordinate1981)

Shape1976.setGeometry(IndexedFaceSet1979)

HAnimSite1974.addChildren(Shape1976)
Billboard1982 = x3d.Billboard()
Billboard1982.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1983 = x3d.Shape()
Text1984 = x3d.Text()
Text1984.setString(["20"])
FontStyle1985 = x3d.FontStyle()
FontStyle1985.setSize(0.035)

Text1984.setFontStyle(FontStyle1985)

Shape1983.setGeometry(Text1984)

Billboard1982.addChildren(Shape1983)

HAnimSite1974.addChildren(Billboard1982)

HAnimSegment1973.addChildren(HAnimSite1974)
HAnimSite1986 = x3d.HAnimSite()
HAnimSite1986.setName("r_axilla_proximal")
HAnimSite1986.setDEF("hanim_r_axilla_proximal_pt")
HAnimSite1986.setTranslation(x3d.doubleToFloat([-0.15,1.16,0.04]))
TouchSensor1987 = x3d.TouchSensor()
TouchSensor1987.setDescription("HAnimSite 21 hanim_r_axilla_proximal_pt")

HAnimSite1986.addChildren(TouchSensor1987)
Shape1988 = x3d.Shape()
Appearance1989 = x3d.Appearance()
Material1990 = x3d.Material()
Material1990.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance1989.setMaterial(Material1990)

Shape1988.setAppearance(Appearance1989)
IndexedFaceSet1991 = x3d.IndexedFaceSet()
IndexedFaceSet1991.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet1991.setCreaseAngle(0.5)
IndexedFaceSet1991.setSolid(False)
ColorRGBA1992 = x3d.ColorRGBA()
ColorRGBA1992.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet1991.setColor(ColorRGBA1992)
Coordinate1993 = x3d.Coordinate()
Coordinate1993.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet1991.setCoord(Coordinate1993)

Shape1988.setGeometry(IndexedFaceSet1991)

HAnimSite1986.addChildren(Shape1988)
Billboard1994 = x3d.Billboard()
Billboard1994.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape1995 = x3d.Shape()
Text1996 = x3d.Text()
Text1996.setString(["21"])
FontStyle1997 = x3d.FontStyle()
FontStyle1997.setSize(0.035)

Text1996.setFontStyle(FontStyle1997)

Shape1995.setGeometry(Text1996)

Billboard1994.addChildren(Shape1995)

HAnimSite1986.addChildren(Billboard1994)

HAnimSegment1973.addChildren(HAnimSite1986)
HAnimSite1998 = x3d.HAnimSite()
HAnimSite1998.setName("r_axilla_distal")
HAnimSite1998.setDEF("hanim_r_axilla_distal_pt")
HAnimSite1998.setTranslation(x3d.doubleToFloat([-0.17,1.14,0]))
TouchSensor1999 = x3d.TouchSensor()
TouchSensor1999.setDescription("HAnimSite 22 hanim_r_axilla_distal_pt")

HAnimSite1998.addChildren(TouchSensor1999)
Shape2000 = x3d.Shape()
Appearance2001 = x3d.Appearance()
Material2002 = x3d.Material()
Material2002.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance2001.setMaterial(Material2002)

Shape2000.setAppearance(Appearance2001)
IndexedFaceSet2003 = x3d.IndexedFaceSet()
IndexedFaceSet2003.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet2003.setCreaseAngle(0.5)
IndexedFaceSet2003.setSolid(False)
ColorRGBA2004 = x3d.ColorRGBA()
ColorRGBA2004.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet2003.setColor(ColorRGBA2004)
Coordinate2005 = x3d.Coordinate()
Coordinate2005.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet2003.setCoord(Coordinate2005)

Shape2000.setGeometry(IndexedFaceSet2003)

HAnimSite1998.addChildren(Shape2000)
Billboard2006 = x3d.Billboard()
Billboard2006.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape2007 = x3d.Shape()
Text2008 = x3d.Text()
Text2008.setString(["22"])
FontStyle2009 = x3d.FontStyle()
FontStyle2009.setSize(0.035)

Text2008.setFontStyle(FontStyle2009)

Shape2007.setGeometry(Text2008)

Billboard2006.addChildren(Shape2007)

HAnimSite1998.addChildren(Billboard2006)

HAnimSegment1973.addChildren(HAnimSite1998)
HAnimSite2010 = x3d.HAnimSite()
HAnimSite2010.setName("r_axilla_posterior_folds")
HAnimSite2010.setDEF("hanim_r_axilla_posterior_folds_pt")
HAnimSite2010.setTranslation(x3d.doubleToFloat([-0.15,1.145,-0.04]))
TouchSensor2011 = x3d.TouchSensor()
TouchSensor2011.setDescription("HAnimSite 23 hanim_r_axilla_posterior_folds_pt")

HAnimSite2010.addChildren(TouchSensor2011)
Shape2012 = x3d.Shape()
Appearance2013 = x3d.Appearance()
Material2014 = x3d.Material()
Material2014.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance2013.setMaterial(Material2014)

Shape2012.setAppearance(Appearance2013)
IndexedFaceSet2015 = x3d.IndexedFaceSet()
IndexedFaceSet2015.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet2015.setCreaseAngle(0.5)
IndexedFaceSet2015.setSolid(False)
ColorRGBA2016 = x3d.ColorRGBA()
ColorRGBA2016.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet2015.setColor(ColorRGBA2016)
Coordinate2017 = x3d.Coordinate()
Coordinate2017.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet2015.setCoord(Coordinate2017)

Shape2012.setGeometry(IndexedFaceSet2015)

HAnimSite2010.addChildren(Shape2012)
Billboard2018 = x3d.Billboard()
Billboard2018.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape2019 = x3d.Shape()
Text2020 = x3d.Text()
Text2020.setString(["23"])
FontStyle2021 = x3d.FontStyle()
FontStyle2021.setSize(0.035)

Text2020.setFontStyle(FontStyle2021)

Shape2019.setGeometry(Text2020)

Billboard2018.addChildren(Shape2019)

HAnimSite2010.addChildren(Billboard2018)

HAnimSegment1973.addChildren(HAnimSite2010)
Shape2022 = x3d.Shape()
LineSet2023 = x3d.LineSet()
LineSet2023.setVertexCount([2])
ColorRGBA2024 = x3d.ColorRGBA()
ColorRGBA2024.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2023.setColor(ColorRGBA2024)
Coordinate2025 = x3d.Coordinate()
Coordinate2025.setPoint(x3d.doubleToFloat([-0.1229,1.19182,-0.0129,-0.03847,1.2087,-0.0138]))

LineSet2023.setCoord(Coordinate2025)

Shape2022.setGeometry(LineSet2023)

HAnimSegment1973.addChildren(Shape2022)

HAnimJoint1972.addChildren(HAnimSegment1973)
HAnimJoint2026 = x3d.HAnimJoint()
HAnimJoint2026.setName("r_shoulder")
HAnimJoint2026.setDEF("hanim_r_shoulder")
HAnimJoint2026.setCenter(x3d.doubleToFloat([-0.1647,1.17855,-0.00327]))
HAnimJoint2026.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2026.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2027 = x3d.HAnimSegment()
HAnimSegment2027.setName("r_upperarm")
HAnimSegment2027.setDEF("hanim_r_upperarm")
HAnimSite2028 = x3d.HAnimSite()
HAnimSite2028.setName("r_humeral_lateral_epicondyle")
HAnimSite2028.setDEF("hanim_r_humeral_lateral_epicondyle_pt")
HAnimSite2028.setTranslation(x3d.doubleToFloat([-0.2,0.95,-0.03]))
TouchSensor2029 = x3d.TouchSensor()
TouchSensor2029.setDescription("HAnimSite 66 hanim_r_humeral_lateral_epicondyle_pt")

HAnimSite2028.addChildren(TouchSensor2029)
Shape2030 = x3d.Shape()
Appearance2031 = x3d.Appearance()
Material2032 = x3d.Material()
Material2032.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance2031.setMaterial(Material2032)

Shape2030.setAppearance(Appearance2031)
IndexedFaceSet2033 = x3d.IndexedFaceSet()
IndexedFaceSet2033.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet2033.setCreaseAngle(0.5)
IndexedFaceSet2033.setSolid(False)
ColorRGBA2034 = x3d.ColorRGBA()
ColorRGBA2034.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet2033.setColor(ColorRGBA2034)
Coordinate2035 = x3d.Coordinate()
Coordinate2035.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet2033.setCoord(Coordinate2035)

Shape2030.setGeometry(IndexedFaceSet2033)

HAnimSite2028.addChildren(Shape2030)
Billboard2036 = x3d.Billboard()
Billboard2036.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape2037 = x3d.Shape()
Text2038 = x3d.Text()
Text2038.setString(["66"])
FontStyle2039 = x3d.FontStyle()
FontStyle2039.setSize(0.035)

Text2038.setFontStyle(FontStyle2039)

Shape2037.setGeometry(Text2038)

Billboard2036.addChildren(Shape2037)

HAnimSite2028.addChildren(Billboard2036)

HAnimSegment2027.addChildren(HAnimSite2028)
HAnimSite2040 = x3d.HAnimSite()
HAnimSite2040.setName("r_humeral_medial_epicondyle")
HAnimSite2040.setDEF("hanim_r_humeral_medial_epicondyle_pt")
HAnimSite2040.setTranslation(x3d.doubleToFloat([-0.18,0.93,-0.03]))
TouchSensor2041 = x3d.TouchSensor()
TouchSensor2041.setDescription("HAnimSite 67 hanim_r_humeral_medial_epicondyle_pt")

HAnimSite2040.addChildren(TouchSensor2041)
Shape2042 = x3d.Shape()
Appearance2043 = x3d.Appearance()
Material2044 = x3d.Material()
Material2044.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance2043.setMaterial(Material2044)

Shape2042.setAppearance(Appearance2043)
IndexedFaceSet2045 = x3d.IndexedFaceSet()
IndexedFaceSet2045.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet2045.setCreaseAngle(0.5)
IndexedFaceSet2045.setSolid(False)
ColorRGBA2046 = x3d.ColorRGBA()
ColorRGBA2046.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet2045.setColor(ColorRGBA2046)
Coordinate2047 = x3d.Coordinate()
Coordinate2047.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet2045.setCoord(Coordinate2047)

Shape2042.setGeometry(IndexedFaceSet2045)

HAnimSite2040.addChildren(Shape2042)
Billboard2048 = x3d.Billboard()
Billboard2048.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape2049 = x3d.Shape()
Text2050 = x3d.Text()
Text2050.setString(["67"])
FontStyle2051 = x3d.FontStyle()
FontStyle2051.setSize(0.035)

Text2050.setFontStyle(FontStyle2051)

Shape2049.setGeometry(Text2050)

Billboard2048.addChildren(Shape2049)

HAnimSite2040.addChildren(Billboard2048)

HAnimSegment2027.addChildren(HAnimSite2040)
HAnimSite2052 = x3d.HAnimSite()
HAnimSite2052.setName("r_radiale")
HAnimSite2052.setDEF("hanim_r_radiale_pt")
HAnimSite2052.setTranslation(x3d.doubleToFloat([-0.2,0.91,-0.03]))
TouchSensor2053 = x3d.TouchSensor()
TouchSensor2053.setDescription("HAnimSite 72 hanim_r_radiale_pt")

HAnimSite2052.addChildren(TouchSensor2053)
Shape2054 = x3d.Shape()
Appearance2055 = x3d.Appearance()
Material2056 = x3d.Material()
Material2056.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance2055.setMaterial(Material2056)

Shape2054.setAppearance(Appearance2055)
IndexedFaceSet2057 = x3d.IndexedFaceSet()
IndexedFaceSet2057.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet2057.setCreaseAngle(0.5)
IndexedFaceSet2057.setSolid(False)
ColorRGBA2058 = x3d.ColorRGBA()
ColorRGBA2058.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet2057.setColor(ColorRGBA2058)
Coordinate2059 = x3d.Coordinate()
Coordinate2059.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet2057.setCoord(Coordinate2059)

Shape2054.setGeometry(IndexedFaceSet2057)

HAnimSite2052.addChildren(Shape2054)
Billboard2060 = x3d.Billboard()
Billboard2060.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape2061 = x3d.Shape()
Text2062 = x3d.Text()
Text2062.setString(["72"])
FontStyle2063 = x3d.FontStyle()
FontStyle2063.setSize(0.035)

Text2062.setFontStyle(FontStyle2063)

Shape2061.setGeometry(Text2062)

Billboard2060.addChildren(Shape2061)

HAnimSite2052.addChildren(Billboard2060)

HAnimSegment2027.addChildren(HAnimSite2052)
HAnimSite2064 = x3d.HAnimSite()
HAnimSite2064.setName("r_bideltoid")
HAnimSite2064.setDEF("hanim_r_bideltoid_pt")
HAnimSite2064.setTranslation(x3d.doubleToFloat([-0.225,1.185,0]))
TouchSensor2065 = x3d.TouchSensor()
TouchSensor2065.setDescription("HAnimSite 97 hanim_r_bideltoid_pt")

HAnimSite2064.addChildren(TouchSensor2065)
Shape2066 = x3d.Shape()
Appearance2067 = x3d.Appearance()
Material2068 = x3d.Material()
Material2068.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance2067.setMaterial(Material2068)

Shape2066.setAppearance(Appearance2067)
IndexedFaceSet2069 = x3d.IndexedFaceSet()
IndexedFaceSet2069.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet2069.setCreaseAngle(0.5)
IndexedFaceSet2069.setSolid(False)
ColorRGBA2070 = x3d.ColorRGBA()
ColorRGBA2070.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet2069.setColor(ColorRGBA2070)
Coordinate2071 = x3d.Coordinate()
Coordinate2071.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet2069.setCoord(Coordinate2071)

Shape2066.setGeometry(IndexedFaceSet2069)

HAnimSite2064.addChildren(Shape2066)
Billboard2072 = x3d.Billboard()
Billboard2072.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape2073 = x3d.Shape()
Text2074 = x3d.Text()
Text2074.setString(["97"])
FontStyle2075 = x3d.FontStyle()
FontStyle2075.setSize(0.035)

Text2074.setFontStyle(FontStyle2075)

Shape2073.setGeometry(Text2074)

Billboard2072.addChildren(Shape2073)

HAnimSite2064.addChildren(Billboard2072)

HAnimSegment2027.addChildren(HAnimSite2064)
Shape2076 = x3d.Shape()
LineSet2077 = x3d.LineSet()
LineSet2077.setVertexCount([2])
ColorRGBA2078 = x3d.ColorRGBA()
ColorRGBA2078.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2077.setColor(ColorRGBA2078)
Coordinate2079 = x3d.Coordinate()
Coordinate2079.setPoint(x3d.doubleToFloat([-0.1647,1.17855,-0.00327,-0.1229,1.19182,-0.0129]))

LineSet2077.setCoord(Coordinate2079)

Shape2076.setGeometry(LineSet2077)

HAnimSegment2027.addChildren(Shape2076)

HAnimJoint2026.addChildren(HAnimSegment2027)
HAnimJoint2080 = x3d.HAnimJoint()
HAnimJoint2080.setName("r_elbow")
HAnimJoint2080.setDEF("hanim_r_elbow")
HAnimJoint2080.setCenter(x3d.doubleToFloat([-0.1817,0.9288,-0.00564]))
HAnimJoint2080.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2080.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2081 = x3d.HAnimSegment()
HAnimSegment2081.setName("r_forearm")
HAnimSegment2081.setDEF("hanim_r_forearm")
HAnimSite2082 = x3d.HAnimSite()
HAnimSite2082.setName("r_radial_styloid")
HAnimSite2082.setDEF("hanim_r_radial_styloid_pt")
HAnimSite2082.setTranslation(x3d.doubleToFloat([-0.18,0.725,0.025]))
TouchSensor2083 = x3d.TouchSensor()
TouchSensor2083.setDescription("HAnimSite 74 hanim_r_radial_styloid_pt")

HAnimSite2082.addChildren(TouchSensor2083)
Shape2084 = x3d.Shape()
Appearance2085 = x3d.Appearance()
Material2086 = x3d.Material()
Material2086.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance2085.setMaterial(Material2086)

Shape2084.setAppearance(Appearance2085)
IndexedFaceSet2087 = x3d.IndexedFaceSet()
IndexedFaceSet2087.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet2087.setCreaseAngle(0.5)
IndexedFaceSet2087.setSolid(False)
ColorRGBA2088 = x3d.ColorRGBA()
ColorRGBA2088.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet2087.setColor(ColorRGBA2088)
Coordinate2089 = x3d.Coordinate()
Coordinate2089.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet2087.setCoord(Coordinate2089)

Shape2084.setGeometry(IndexedFaceSet2087)

HAnimSite2082.addChildren(Shape2084)
Billboard2090 = x3d.Billboard()
Billboard2090.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape2091 = x3d.Shape()
Text2092 = x3d.Text()
Text2092.setString(["74"])
FontStyle2093 = x3d.FontStyle()
FontStyle2093.setSize(0.035)

Text2092.setFontStyle(FontStyle2093)

Shape2091.setGeometry(Text2092)

Billboard2090.addChildren(Shape2091)

HAnimSite2082.addChildren(Billboard2090)

HAnimSegment2081.addChildren(HAnimSite2082)
HAnimSite2094 = x3d.HAnimSite()
HAnimSite2094.setName("r_olecranon")
HAnimSite2094.setDEF("hanim_r_olecranon_pt")
HAnimSite2094.setTranslation(x3d.doubleToFloat([-0.2,0.92,-0.03]))
TouchSensor2095 = x3d.TouchSensor()
TouchSensor2095.setDescription("HAnimSite 68 hanim_r_olecranon_pt")

HAnimSite2094.addChildren(TouchSensor2095)
Shape2096 = x3d.Shape()
Appearance2097 = x3d.Appearance()
Material2098 = x3d.Material()
Material2098.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance2097.setMaterial(Material2098)

Shape2096.setAppearance(Appearance2097)
IndexedFaceSet2099 = x3d.IndexedFaceSet()
IndexedFaceSet2099.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet2099.setCreaseAngle(0.5)
IndexedFaceSet2099.setSolid(False)
ColorRGBA2100 = x3d.ColorRGBA()
ColorRGBA2100.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet2099.setColor(ColorRGBA2100)
Coordinate2101 = x3d.Coordinate()
Coordinate2101.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet2099.setCoord(Coordinate2101)

Shape2096.setGeometry(IndexedFaceSet2099)

HAnimSite2094.addChildren(Shape2096)
Billboard2102 = x3d.Billboard()
Billboard2102.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape2103 = x3d.Shape()
Text2104 = x3d.Text()
Text2104.setString(["68"])
FontStyle2105 = x3d.FontStyle()
FontStyle2105.setSize(0.035)

Text2104.setFontStyle(FontStyle2105)

Shape2103.setGeometry(Text2104)

Billboard2102.addChildren(Shape2103)

HAnimSite2094.addChildren(Billboard2102)

HAnimSegment2081.addChildren(HAnimSite2094)
Shape2106 = x3d.Shape()
LineSet2107 = x3d.LineSet()
LineSet2107.setVertexCount([2])
ColorRGBA2108 = x3d.ColorRGBA()
ColorRGBA2108.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2107.setColor(ColorRGBA2108)
Coordinate2109 = x3d.Coordinate()
Coordinate2109.setPoint(x3d.doubleToFloat([-0.1817,0.9288,-0.00564,-0.1647,1.17855,-0.00327]))

LineSet2107.setCoord(Coordinate2109)

Shape2106.setGeometry(LineSet2107)

HAnimSegment2081.addChildren(Shape2106)

HAnimJoint2080.addChildren(HAnimSegment2081)
HAnimJoint2110 = x3d.HAnimJoint()
HAnimJoint2110.setName("r_radiocarpal")
HAnimJoint2110.setDEF("hanim_r_radiocarpal")
HAnimJoint2110.setCenter(x3d.doubleToFloat([-0.1816,0.7242,-0.005]))
HAnimJoint2110.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2110.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2111 = x3d.HAnimSegment()
HAnimSegment2111.setName("r_carpal")
HAnimSegment2111.setDEF("hanim_r_carpal")
HAnimSite2112 = x3d.HAnimSite()
HAnimSite2112.setName("r_ulnar_styloid")
HAnimSite2112.setDEF("hanim_r_ulnar_styloid_pt")
HAnimSite2112.setTranslation(x3d.doubleToFloat([-0.2,0.725,0]))
TouchSensor2113 = x3d.TouchSensor()
TouchSensor2113.setDescription("HAnimSite 73 hanim_r_ulnar_styloid_pt")

HAnimSite2112.addChildren(TouchSensor2113)
Shape2114 = x3d.Shape()
Appearance2115 = x3d.Appearance()
Material2116 = x3d.Material()
Material2116.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance2115.setMaterial(Material2116)

Shape2114.setAppearance(Appearance2115)
IndexedFaceSet2117 = x3d.IndexedFaceSet()
IndexedFaceSet2117.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet2117.setCreaseAngle(0.5)
IndexedFaceSet2117.setSolid(False)
ColorRGBA2118 = x3d.ColorRGBA()
ColorRGBA2118.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet2117.setColor(ColorRGBA2118)
Coordinate2119 = x3d.Coordinate()
Coordinate2119.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet2117.setCoord(Coordinate2119)

Shape2114.setGeometry(IndexedFaceSet2117)

HAnimSite2112.addChildren(Shape2114)
Billboard2120 = x3d.Billboard()
Billboard2120.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape2121 = x3d.Shape()
Text2122 = x3d.Text()
Text2122.setString(["73"])
FontStyle2123 = x3d.FontStyle()
FontStyle2123.setSize(0.035)

Text2122.setFontStyle(FontStyle2123)

Shape2121.setGeometry(Text2122)

Billboard2120.addChildren(Shape2121)

HAnimSite2112.addChildren(Billboard2120)

HAnimSegment2111.addChildren(HAnimSite2112)
Shape2124 = x3d.Shape()
LineSet2125 = x3d.LineSet()
LineSet2125.setVertexCount([2])
ColorRGBA2126 = x3d.ColorRGBA()
ColorRGBA2126.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2125.setColor(ColorRGBA2126)
Coordinate2127 = x3d.Coordinate()
Coordinate2127.setPoint(x3d.doubleToFloat([-0.1816,0.7242,-0.005,-0.1817,0.9288,-0.00564]))

LineSet2125.setCoord(Coordinate2127)

Shape2124.setGeometry(LineSet2125)

HAnimSegment2111.addChildren(Shape2124)

HAnimJoint2110.addChildren(HAnimSegment2111)
HAnimJoint2128 = x3d.HAnimJoint()
HAnimJoint2128.setName("r_midcarpal_1")
HAnimJoint2128.setDEF("hanim_r_midcarpal_1")
HAnimJoint2128.setCenter(x3d.doubleToFloat([-0.18097,0.70605,0.0193]))
HAnimJoint2128.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2128.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2129 = x3d.HAnimSegment()
HAnimSegment2129.setName("r_trapezium")
HAnimSegment2129.setDEF("hanim_r_trapezium")
Shape2130 = x3d.Shape()
LineSet2131 = x3d.LineSet()
LineSet2131.setVertexCount([2])
ColorRGBA2132 = x3d.ColorRGBA()
ColorRGBA2132.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2131.setColor(ColorRGBA2132)
Coordinate2133 = x3d.Coordinate()
Coordinate2133.setPoint(x3d.doubleToFloat([-0.18097,0.70605,0.0193,-0.1816,0.7242,-0.005]))

LineSet2131.setCoord(Coordinate2133)

Shape2130.setGeometry(LineSet2131)

HAnimSegment2129.addChildren(Shape2130)

HAnimJoint2128.addChildren(HAnimSegment2129)
HAnimJoint2134 = x3d.HAnimJoint()
HAnimJoint2134.setName("r_carpometacarpal_1")
HAnimJoint2134.setDEF("hanim_r_carpometacarpal_1")
HAnimJoint2134.setCenter(x3d.doubleToFloat([-0.18,0.69255,0.02598]))
HAnimJoint2134.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2134.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2135 = x3d.HAnimSegment()
HAnimSegment2135.setName("r_metacarpal_1")
HAnimSegment2135.setDEF("hanim_r_metacarpal_1")
HAnimSite2136 = x3d.HAnimSite()
HAnimSite2136.setName("r_metacarpal_phalanx_2")
HAnimSite2136.setDEF("hanim_r_metacarpal_phalanx_2_pt")
HAnimSite2136.setTranslation(x3d.doubleToFloat([-0.2,0.665,0.012]))
TouchSensor2137 = x3d.TouchSensor()
TouchSensor2137.setDescription("HAnimSite 78 hanim_r_metacarpal_phalanx_2_pt")

HAnimSite2136.addChildren(TouchSensor2137)
Shape2138 = x3d.Shape()
Appearance2139 = x3d.Appearance()
Material2140 = x3d.Material()
Material2140.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance2139.setMaterial(Material2140)

Shape2138.setAppearance(Appearance2139)
IndexedFaceSet2141 = x3d.IndexedFaceSet()
IndexedFaceSet2141.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet2141.setCreaseAngle(0.5)
IndexedFaceSet2141.setSolid(False)
ColorRGBA2142 = x3d.ColorRGBA()
ColorRGBA2142.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet2141.setColor(ColorRGBA2142)
Coordinate2143 = x3d.Coordinate()
Coordinate2143.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet2141.setCoord(Coordinate2143)

Shape2138.setGeometry(IndexedFaceSet2141)

HAnimSite2136.addChildren(Shape2138)
Billboard2144 = x3d.Billboard()
Billboard2144.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape2145 = x3d.Shape()
Text2146 = x3d.Text()
Text2146.setString(["78"])
FontStyle2147 = x3d.FontStyle()
FontStyle2147.setSize(0.035)

Text2146.setFontStyle(FontStyle2147)

Shape2145.setGeometry(Text2146)

Billboard2144.addChildren(Shape2145)

HAnimSite2136.addChildren(Billboard2144)

HAnimSegment2135.addChildren(HAnimSite2136)
Shape2148 = x3d.Shape()
LineSet2149 = x3d.LineSet()
LineSet2149.setVertexCount([2])
ColorRGBA2150 = x3d.ColorRGBA()
ColorRGBA2150.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2149.setColor(ColorRGBA2150)
Coordinate2151 = x3d.Coordinate()
Coordinate2151.setPoint(x3d.doubleToFloat([-0.18,0.69255,0.02598,-0.18097,0.70605,0.0193]))

LineSet2149.setCoord(Coordinate2151)

Shape2148.setGeometry(LineSet2149)

HAnimSegment2135.addChildren(Shape2148)

HAnimJoint2134.addChildren(HAnimSegment2135)
HAnimJoint2152 = x3d.HAnimJoint()
HAnimJoint2152.setName("r_metacarpophalangeal_1")
HAnimJoint2152.setDEF("hanim_r_metacarpophalangeal_1")
HAnimJoint2152.setCenter(x3d.doubleToFloat([-0.18065,0.67275,0.03577]))
HAnimJoint2152.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2152.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2153 = x3d.HAnimSegment()
HAnimSegment2153.setName("r_carpal_proximal_phalanx_1")
HAnimSegment2153.setDEF("hanim_r_carpal_proximal_phalanx_1")
Shape2154 = x3d.Shape()
LineSet2155 = x3d.LineSet()
LineSet2155.setVertexCount([2])
ColorRGBA2156 = x3d.ColorRGBA()
ColorRGBA2156.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2155.setColor(ColorRGBA2156)
Coordinate2157 = x3d.Coordinate()
Coordinate2157.setPoint(x3d.doubleToFloat([-0.18065,0.67275,0.03577,-0.18,0.69255,0.02598]))

LineSet2155.setCoord(Coordinate2157)

Shape2154.setGeometry(LineSet2155)

HAnimSegment2153.addChildren(Shape2154)

HAnimJoint2152.addChildren(HAnimSegment2153)
HAnimJoint2158 = x3d.HAnimJoint()
HAnimJoint2158.setName("r_carpal_interphalangeal_1")
HAnimJoint2158.setDEF("hanim_r_carpal_interphalangeal_1")
HAnimJoint2158.setCenter(x3d.doubleToFloat([-0.18227,0.654,0.0496]))
HAnimJoint2158.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2158.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2159 = x3d.HAnimSegment()
HAnimSegment2159.setName("r_carpal_distal_phalanx_1")
HAnimSegment2159.setDEF("hanim_r_carpal_distal_phalanx_1")
HAnimSite2160 = x3d.HAnimSite()
HAnimSite2160.setName("r_carpal_distal_phalanx_1")
HAnimSite2160.setDEF("hanim_r_carpal_distal_phalanx_1_tip")
HAnimSite2160.setTranslation(x3d.doubleToFloat([-0.18,0.64,0.06]))
TouchSensor2161 = x3d.TouchSensor()
TouchSensor2161.setDescription("HAnimSite 106 hanim_r_carpal_distal_phalanx_1_tip")

HAnimSite2160.addChildren(TouchSensor2161)
Shape2162 = x3d.Shape()
Appearance2163 = x3d.Appearance()
Material2164 = x3d.Material()
Material2164.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance2163.setMaterial(Material2164)

Shape2162.setAppearance(Appearance2163)
IndexedFaceSet2165 = x3d.IndexedFaceSet()
IndexedFaceSet2165.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet2165.setCreaseAngle(0.5)
IndexedFaceSet2165.setSolid(False)
ColorRGBA2166 = x3d.ColorRGBA()
ColorRGBA2166.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet2165.setColor(ColorRGBA2166)
Coordinate2167 = x3d.Coordinate()
Coordinate2167.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet2165.setCoord(Coordinate2167)

Shape2162.setGeometry(IndexedFaceSet2165)

HAnimSite2160.addChildren(Shape2162)
Billboard2168 = x3d.Billboard()
Billboard2168.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape2169 = x3d.Shape()
Text2170 = x3d.Text()
Text2170.setString(["106"])
FontStyle2171 = x3d.FontStyle()
FontStyle2171.setSize(0.035)

Text2170.setFontStyle(FontStyle2171)

Shape2169.setGeometry(Text2170)

Billboard2168.addChildren(Shape2169)

HAnimSite2160.addChildren(Billboard2168)

HAnimSegment2159.addChildren(HAnimSite2160)
Shape2172 = x3d.Shape()
LineSet2173 = x3d.LineSet()
LineSet2173.setVertexCount([2])
ColorRGBA2174 = x3d.ColorRGBA()
ColorRGBA2174.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2173.setColor(ColorRGBA2174)
Coordinate2175 = x3d.Coordinate()
Coordinate2175.setPoint(x3d.doubleToFloat([-0.18227,0.654,0.0496,-0.18065,0.67275,0.03577]))

LineSet2173.setCoord(Coordinate2175)

Shape2172.setGeometry(LineSet2173)

HAnimSegment2159.addChildren(Shape2172)

HAnimJoint2158.addChildren(HAnimSegment2159)

HAnimJoint2152.addChildren(HAnimJoint2158)

HAnimJoint2134.addChildren(HAnimJoint2152)

HAnimJoint2128.addChildren(HAnimJoint2134)

HAnimJoint2110.addChildren(HAnimJoint2128)
HAnimJoint2176 = x3d.HAnimJoint()
HAnimJoint2176.setName("r_midcarpal_2")
HAnimJoint2176.setDEF("hanim_r_midcarpal_2")
HAnimJoint2176.setCenter(x3d.doubleToFloat([-0.18097,0.70695,0.0084]))
HAnimJoint2176.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2176.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2177 = x3d.HAnimSegment()
HAnimSegment2177.setName("r_trapezoid")
HAnimSegment2177.setDEF("hanim_r_trapezoid")
Shape2178 = x3d.Shape()
LineSet2179 = x3d.LineSet()
LineSet2179.setVertexCount([2])
ColorRGBA2180 = x3d.ColorRGBA()
ColorRGBA2180.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2179.setColor(ColorRGBA2180)
Coordinate2181 = x3d.Coordinate()
Coordinate2181.setPoint(x3d.doubleToFloat([-0.18097,0.70695,0.0084,-0.1816,0.7242,-0.005]))

LineSet2179.setCoord(Coordinate2181)

Shape2178.setGeometry(LineSet2179)

HAnimSegment2177.addChildren(Shape2178)

HAnimJoint2176.addChildren(HAnimSegment2177)
HAnimJoint2182 = x3d.HAnimJoint()
HAnimJoint2182.setName("r_carpometacarpal_2")
HAnimJoint2182.setDEF("hanim_r_carpometacarpal_2")
HAnimJoint2182.setCenter(x3d.doubleToFloat([-0.1809,0.6876,0.0097]))
HAnimJoint2182.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2182.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2183 = x3d.HAnimSegment()
HAnimSegment2183.setName("r_metacarpal_2")
HAnimSegment2183.setDEF("hanim_r_metacarpal_2")
Shape2184 = x3d.Shape()
LineSet2185 = x3d.LineSet()
LineSet2185.setVertexCount([2])
ColorRGBA2186 = x3d.ColorRGBA()
ColorRGBA2186.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2185.setColor(ColorRGBA2186)
Coordinate2187 = x3d.Coordinate()
Coordinate2187.setPoint(x3d.doubleToFloat([-0.1809,0.6876,0.0097,-0.18097,0.70695,0.0084]))

LineSet2185.setCoord(Coordinate2187)

Shape2184.setGeometry(LineSet2185)

HAnimSegment2183.addChildren(Shape2184)

HAnimJoint2182.addChildren(HAnimSegment2183)
HAnimJoint2188 = x3d.HAnimJoint()
HAnimJoint2188.setName("r_metacarpophalangeal_2")
HAnimJoint2188.setDEF("hanim_r_metacarpophalangeal_2")
HAnimJoint2188.setCenter(x3d.doubleToFloat([-0.18335,0.6372,0.01507]))
HAnimJoint2188.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2188.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2189 = x3d.HAnimSegment()
HAnimSegment2189.setName("r_carpal_proximal_phalanx_2")
HAnimSegment2189.setDEF("hanim_r_carpal_proximal_phalanx_2")
Shape2190 = x3d.Shape()
LineSet2191 = x3d.LineSet()
LineSet2191.setVertexCount([2])
ColorRGBA2192 = x3d.ColorRGBA()
ColorRGBA2192.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2191.setColor(ColorRGBA2192)
Coordinate2193 = x3d.Coordinate()
Coordinate2193.setPoint(x3d.doubleToFloat([-0.18335,0.6372,0.01507,-0.1809,0.6876,0.0097]))

LineSet2191.setCoord(Coordinate2193)

Shape2190.setGeometry(LineSet2191)

HAnimSegment2189.addChildren(Shape2190)

HAnimJoint2188.addChildren(HAnimSegment2189)
HAnimJoint2194 = x3d.HAnimJoint()
HAnimJoint2194.setName("r_carpal_proximal_interphalangeal_2")
HAnimJoint2194.setDEF("hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint2194.setCenter(x3d.doubleToFloat([-0.1813,0.6068,0.01418]))
HAnimJoint2194.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2194.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2195 = x3d.HAnimSegment()
HAnimSegment2195.setName("r_carpal_middle_phalanx_2")
HAnimSegment2195.setDEF("hanim_r_carpal_middle_phalanx_2")
Shape2196 = x3d.Shape()
LineSet2197 = x3d.LineSet()
LineSet2197.setVertexCount([2])
ColorRGBA2198 = x3d.ColorRGBA()
ColorRGBA2198.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2197.setColor(ColorRGBA2198)
Coordinate2199 = x3d.Coordinate()
Coordinate2199.setPoint(x3d.doubleToFloat([-0.1813,0.6068,0.01418,-0.18335,0.6372,0.01507]))

LineSet2197.setCoord(Coordinate2199)

Shape2196.setGeometry(LineSet2197)

HAnimSegment2195.addChildren(Shape2196)

HAnimJoint2194.addChildren(HAnimSegment2195)
HAnimJoint2200 = x3d.HAnimJoint()
HAnimJoint2200.setName("r_carpal_distal_interphalangeal_2")
HAnimJoint2200.setDEF("hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint2200.setCenter(x3d.doubleToFloat([-0.1803,0.5816,0.01338]))
HAnimJoint2200.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2200.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2201 = x3d.HAnimSegment()
HAnimSegment2201.setName("r_carpal_distal_phalanx_2")
HAnimSegment2201.setDEF("hanim_r_carpal_distal_phalanx_2")
HAnimSite2202 = x3d.HAnimSite()
HAnimSite2202.setName("r_dactylion")
HAnimSite2202.setDEF("hanim_r_dactylion_pt")
HAnimSite2202.setTranslation(x3d.doubleToFloat([-0.17,0.558,0.017]))
TouchSensor2203 = x3d.TouchSensor()
TouchSensor2203.setDescription("HAnimSite 61 hanim_r_dactylion_pt")

HAnimSite2202.addChildren(TouchSensor2203)
Shape2204 = x3d.Shape()
Appearance2205 = x3d.Appearance()
Material2206 = x3d.Material()
Material2206.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance2205.setMaterial(Material2206)

Shape2204.setAppearance(Appearance2205)
IndexedFaceSet2207 = x3d.IndexedFaceSet()
IndexedFaceSet2207.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet2207.setCreaseAngle(0.5)
IndexedFaceSet2207.setSolid(False)
ColorRGBA2208 = x3d.ColorRGBA()
ColorRGBA2208.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet2207.setColor(ColorRGBA2208)
Coordinate2209 = x3d.Coordinate()
Coordinate2209.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet2207.setCoord(Coordinate2209)

Shape2204.setGeometry(IndexedFaceSet2207)

HAnimSite2202.addChildren(Shape2204)
Billboard2210 = x3d.Billboard()
Billboard2210.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape2211 = x3d.Shape()
Text2212 = x3d.Text()
Text2212.setString(["61"])
FontStyle2213 = x3d.FontStyle()
FontStyle2213.setSize(0.035)

Text2212.setFontStyle(FontStyle2213)

Shape2211.setGeometry(Text2212)

Billboard2210.addChildren(Shape2211)

HAnimSite2202.addChildren(Billboard2210)

HAnimSegment2201.addChildren(HAnimSite2202)
HAnimSite2214 = x3d.HAnimSite()
HAnimSite2214.setName("r_carpal_distal_phalanx_2")
HAnimSite2214.setDEF("hanim_r_carpal_distal_phalanx_2_tip")
HAnimSite2214.setTranslation(x3d.doubleToFloat([-0.172,0.558,0.017]))
TouchSensor2215 = x3d.TouchSensor()
TouchSensor2215.setDescription("HAnimSite 107 hanim_r_carpal_distal_phalanx_2_tip")

HAnimSite2214.addChildren(TouchSensor2215)
Shape2216 = x3d.Shape()
Appearance2217 = x3d.Appearance()
Material2218 = x3d.Material()
Material2218.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance2217.setMaterial(Material2218)

Shape2216.setAppearance(Appearance2217)
IndexedFaceSet2219 = x3d.IndexedFaceSet()
IndexedFaceSet2219.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet2219.setCreaseAngle(0.5)
IndexedFaceSet2219.setSolid(False)
ColorRGBA2220 = x3d.ColorRGBA()
ColorRGBA2220.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet2219.setColor(ColorRGBA2220)
Coordinate2221 = x3d.Coordinate()
Coordinate2221.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet2219.setCoord(Coordinate2221)

Shape2216.setGeometry(IndexedFaceSet2219)

HAnimSite2214.addChildren(Shape2216)
Billboard2222 = x3d.Billboard()
Billboard2222.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape2223 = x3d.Shape()
Text2224 = x3d.Text()
Text2224.setString(["107"])
FontStyle2225 = x3d.FontStyle()
FontStyle2225.setSize(0.035)

Text2224.setFontStyle(FontStyle2225)

Shape2223.setGeometry(Text2224)

Billboard2222.addChildren(Shape2223)

HAnimSite2214.addChildren(Billboard2222)

HAnimSegment2201.addChildren(HAnimSite2214)
Shape2226 = x3d.Shape()
LineSet2227 = x3d.LineSet()
LineSet2227.setVertexCount([2])
ColorRGBA2228 = x3d.ColorRGBA()
ColorRGBA2228.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2227.setColor(ColorRGBA2228)
Coordinate2229 = x3d.Coordinate()
Coordinate2229.setPoint(x3d.doubleToFloat([-0.1803,0.5816,0.01338,-0.1813,0.6068,0.01418]))

LineSet2227.setCoord(Coordinate2229)

Shape2226.setGeometry(LineSet2227)

HAnimSegment2201.addChildren(Shape2226)

HAnimJoint2200.addChildren(HAnimSegment2201)

HAnimJoint2194.addChildren(HAnimJoint2200)

HAnimJoint2188.addChildren(HAnimJoint2194)

HAnimJoint2182.addChildren(HAnimJoint2188)

HAnimJoint2176.addChildren(HAnimJoint2182)

HAnimJoint2110.addChildren(HAnimJoint2176)
HAnimJoint2230 = x3d.HAnimJoint()
HAnimJoint2230.setName("r_midcarpal_3")
HAnimJoint2230.setDEF("hanim_r_midcarpal_3")
HAnimJoint2230.setCenter(x3d.doubleToFloat([-0.18072,0.708525,-0.004797]))
HAnimJoint2230.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2230.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2231 = x3d.HAnimSegment()
HAnimSegment2231.setName("r_capitate")
HAnimSegment2231.setDEF("hanim_r_capitate")
Shape2232 = x3d.Shape()
LineSet2233 = x3d.LineSet()
LineSet2233.setVertexCount([2])
ColorRGBA2234 = x3d.ColorRGBA()
ColorRGBA2234.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2233.setColor(ColorRGBA2234)
Coordinate2235 = x3d.Coordinate()
Coordinate2235.setPoint(x3d.doubleToFloat([-0.18072,0.708525,-0.004797,-0.1816,0.7242,-0.005]))

LineSet2233.setCoord(Coordinate2235)

Shape2232.setGeometry(LineSet2233)

HAnimSegment2231.addChildren(Shape2232)

HAnimJoint2230.addChildren(HAnimSegment2231)
HAnimJoint2236 = x3d.HAnimJoint()
HAnimJoint2236.setName("r_carpometacarpal_3")
HAnimJoint2236.setDEF("hanim_r_carpometacarpal_3")
HAnimJoint2236.setCenter(x3d.doubleToFloat([-0.18072,0.6858,-0.00625]))
HAnimJoint2236.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2236.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2237 = x3d.HAnimSegment()
HAnimSegment2237.setName("r_metacarpal_3")
HAnimSegment2237.setDEF("hanim_r_metacarpal_3")
HAnimSite2238 = x3d.HAnimSite()
HAnimSite2238.setName("r_metacarpal_phalanx_3")
HAnimSite2238.setDEF("hanim_r_metacarpal_phalanx_3_pt")
HAnimSite2238.setTranslation(x3d.doubleToFloat([-0.2,0.665,0.016]))
TouchSensor2239 = x3d.TouchSensor()
TouchSensor2239.setDescription("HAnimSite 79 hanim_r_metacarpal_phalanx_3_pt")

HAnimSite2238.addChildren(TouchSensor2239)
Shape2240 = x3d.Shape()
Appearance2241 = x3d.Appearance()
Material2242 = x3d.Material()
Material2242.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance2241.setMaterial(Material2242)

Shape2240.setAppearance(Appearance2241)
IndexedFaceSet2243 = x3d.IndexedFaceSet()
IndexedFaceSet2243.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet2243.setCreaseAngle(0.5)
IndexedFaceSet2243.setSolid(False)
ColorRGBA2244 = x3d.ColorRGBA()
ColorRGBA2244.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet2243.setColor(ColorRGBA2244)
Coordinate2245 = x3d.Coordinate()
Coordinate2245.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet2243.setCoord(Coordinate2245)

Shape2240.setGeometry(IndexedFaceSet2243)

HAnimSite2238.addChildren(Shape2240)
Billboard2246 = x3d.Billboard()
Billboard2246.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape2247 = x3d.Shape()
Text2248 = x3d.Text()
Text2248.setString(["79"])
FontStyle2249 = x3d.FontStyle()
FontStyle2249.setSize(0.035)

Text2248.setFontStyle(FontStyle2249)

Shape2247.setGeometry(Text2248)

Billboard2246.addChildren(Shape2247)

HAnimSite2238.addChildren(Billboard2246)

HAnimSegment2237.addChildren(HAnimSite2238)
Shape2250 = x3d.Shape()
LineSet2251 = x3d.LineSet()
LineSet2251.setVertexCount([2])
ColorRGBA2252 = x3d.ColorRGBA()
ColorRGBA2252.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2251.setColor(ColorRGBA2252)
Coordinate2253 = x3d.Coordinate()
Coordinate2253.setPoint(x3d.doubleToFloat([-0.18072,0.6858,-0.00625,-0.18072,0.708525,-0.004797]))

LineSet2251.setCoord(Coordinate2253)

Shape2250.setGeometry(LineSet2251)

HAnimSegment2237.addChildren(Shape2250)

HAnimJoint2236.addChildren(HAnimSegment2237)
HAnimJoint2254 = x3d.HAnimJoint()
HAnimJoint2254.setName("r_metacarpophalangeal_3")
HAnimJoint2254.setDEF("hanim_r_metacarpophalangeal_3")
HAnimJoint2254.setCenter(x3d.doubleToFloat([-0.1833,0.63495,-0.0039]))
HAnimJoint2254.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2254.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2255 = x3d.HAnimSegment()
HAnimSegment2255.setName("r_carpal_proximal_phalanx_3")
HAnimSegment2255.setDEF("hanim_r_carpal_proximal_phalanx_3")
Shape2256 = x3d.Shape()
LineSet2257 = x3d.LineSet()
LineSet2257.setVertexCount([2])
ColorRGBA2258 = x3d.ColorRGBA()
ColorRGBA2258.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2257.setColor(ColorRGBA2258)
Coordinate2259 = x3d.Coordinate()
Coordinate2259.setPoint(x3d.doubleToFloat([-0.1833,0.63495,-0.0039,-0.18072,0.6858,-0.00625]))

LineSet2257.setCoord(Coordinate2259)

Shape2256.setGeometry(LineSet2257)

HAnimSegment2255.addChildren(Shape2256)

HAnimJoint2254.addChildren(HAnimSegment2255)
HAnimJoint2260 = x3d.HAnimJoint()
HAnimJoint2260.setName("r_carpal_proximal_interphalangeal_3")
HAnimJoint2260.setDEF("hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint2260.setCenter(x3d.doubleToFloat([-0.1813,0.6032,-0.0035]))
HAnimJoint2260.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2260.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2261 = x3d.HAnimSegment()
HAnimSegment2261.setName("r_carpal_middle_phalanx_3")
HAnimSegment2261.setDEF("hanim_r_carpal_middle_phalanx_3")
Shape2262 = x3d.Shape()
LineSet2263 = x3d.LineSet()
LineSet2263.setVertexCount([2])
ColorRGBA2264 = x3d.ColorRGBA()
ColorRGBA2264.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2263.setColor(ColorRGBA2264)
Coordinate2265 = x3d.Coordinate()
Coordinate2265.setPoint(x3d.doubleToFloat([-0.1813,0.6032,-0.0035,-0.1833,0.63495,-0.0039]))

LineSet2263.setCoord(Coordinate2265)

Shape2262.setGeometry(LineSet2263)

HAnimSegment2261.addChildren(Shape2262)

HAnimJoint2260.addChildren(HAnimSegment2261)
HAnimJoint2266 = x3d.HAnimJoint()
HAnimJoint2266.setName("r_carpal_distal_interphalangeal_3")
HAnimJoint2266.setDEF("hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint2266.setCenter(x3d.doubleToFloat([-0.18029,0.5753,-0.00375]))
HAnimJoint2266.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2266.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2267 = x3d.HAnimSegment()
HAnimSegment2267.setName("r_carpal_distal_phalanx_3")
HAnimSegment2267.setDEF("hanim_r_carpal_distal_phalanx_3")
HAnimSite2268 = x3d.HAnimSite()
HAnimSite2268.setName("r_carpal_distal_phalanx_3")
HAnimSite2268.setDEF("hanim_r_carpal_distal_phalanx_3_tip")
HAnimSite2268.setTranslation(x3d.doubleToFloat([-0.17,0.555,-0.006]))
TouchSensor2269 = x3d.TouchSensor()
TouchSensor2269.setDescription("HAnimSite 108 hanim_r_carpal_distal_phalanx_3_tip")

HAnimSite2268.addChildren(TouchSensor2269)
Shape2270 = x3d.Shape()
Appearance2271 = x3d.Appearance()
Material2272 = x3d.Material()
Material2272.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance2271.setMaterial(Material2272)

Shape2270.setAppearance(Appearance2271)
IndexedFaceSet2273 = x3d.IndexedFaceSet()
IndexedFaceSet2273.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet2273.setCreaseAngle(0.5)
IndexedFaceSet2273.setSolid(False)
ColorRGBA2274 = x3d.ColorRGBA()
ColorRGBA2274.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet2273.setColor(ColorRGBA2274)
Coordinate2275 = x3d.Coordinate()
Coordinate2275.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet2273.setCoord(Coordinate2275)

Shape2270.setGeometry(IndexedFaceSet2273)

HAnimSite2268.addChildren(Shape2270)
Billboard2276 = x3d.Billboard()
Billboard2276.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape2277 = x3d.Shape()
Text2278 = x3d.Text()
Text2278.setString(["108"])
FontStyle2279 = x3d.FontStyle()
FontStyle2279.setSize(0.035)

Text2278.setFontStyle(FontStyle2279)

Shape2277.setGeometry(Text2278)

Billboard2276.addChildren(Shape2277)

HAnimSite2268.addChildren(Billboard2276)

HAnimSegment2267.addChildren(HAnimSite2268)
Shape2280 = x3d.Shape()
LineSet2281 = x3d.LineSet()
LineSet2281.setVertexCount([2])
ColorRGBA2282 = x3d.ColorRGBA()
ColorRGBA2282.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2281.setColor(ColorRGBA2282)
Coordinate2283 = x3d.Coordinate()
Coordinate2283.setPoint(x3d.doubleToFloat([-0.18029,0.5753,-0.00375,-0.1813,0.6032,-0.0035]))

LineSet2281.setCoord(Coordinate2283)

Shape2280.setGeometry(LineSet2281)

HAnimSegment2267.addChildren(Shape2280)

HAnimJoint2266.addChildren(HAnimSegment2267)

HAnimJoint2260.addChildren(HAnimJoint2266)

HAnimJoint2254.addChildren(HAnimJoint2260)

HAnimJoint2236.addChildren(HAnimJoint2254)

HAnimJoint2230.addChildren(HAnimJoint2236)

HAnimJoint2110.addChildren(HAnimJoint2230)
HAnimJoint2284 = x3d.HAnimJoint()
HAnimJoint2284.setName("r_midcarpal_4_5")
HAnimJoint2284.setDEF("hanim_r_midcarpal_4_5")
HAnimJoint2284.setCenter(x3d.doubleToFloat([-0.18072,0.70583,-0.02574]))
HAnimJoint2284.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2284.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2285 = x3d.HAnimSegment()
HAnimSegment2285.setName("r_hamate")
HAnimSegment2285.setDEF("hanim_r_hamate")
Shape2286 = x3d.Shape()
LineSet2287 = x3d.LineSet()
LineSet2287.setVertexCount([2])
ColorRGBA2288 = x3d.ColorRGBA()
ColorRGBA2288.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2287.setColor(ColorRGBA2288)
Coordinate2289 = x3d.Coordinate()
Coordinate2289.setPoint(x3d.doubleToFloat([-0.18072,0.70583,-0.02574,-0.1816,0.7242,-0.005]))

LineSet2287.setCoord(Coordinate2289)

Shape2286.setGeometry(LineSet2287)

HAnimSegment2285.addChildren(Shape2286)

HAnimJoint2284.addChildren(HAnimSegment2285)
HAnimJoint2290 = x3d.HAnimJoint()
HAnimJoint2290.setName("r_carpometacarpal_4")
HAnimJoint2290.setDEF("hanim_r_carpometacarpal_4")
HAnimJoint2290.setCenter(x3d.doubleToFloat([-0.18072,0.68625,-0.01992]))
HAnimJoint2290.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2290.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2291 = x3d.HAnimSegment()
HAnimSegment2291.setName("r_metacarpal_4")
HAnimSegment2291.setDEF("hanim_r_metacarpal_4")
Shape2292 = x3d.Shape()
LineSet2293 = x3d.LineSet()
LineSet2293.setVertexCount([2])
ColorRGBA2294 = x3d.ColorRGBA()
ColorRGBA2294.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2293.setColor(ColorRGBA2294)
Coordinate2295 = x3d.Coordinate()
Coordinate2295.setPoint(x3d.doubleToFloat([-0.18072,0.68625,-0.01992,-0.18072,0.70583,-0.02574]))

LineSet2293.setCoord(Coordinate2295)

Shape2292.setGeometry(LineSet2293)

HAnimSegment2291.addChildren(Shape2292)

HAnimJoint2290.addChildren(HAnimSegment2291)
HAnimJoint2296 = x3d.HAnimJoint()
HAnimJoint2296.setName("r_metacarpophalangeal_4")
HAnimJoint2296.setDEF("hanim_r_metacarpophalangeal_4")
HAnimJoint2296.setCenter(x3d.doubleToFloat([-0.1833,0.63405,-0.02144]))
HAnimJoint2296.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2296.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2297 = x3d.HAnimSegment()
HAnimSegment2297.setName("r_carpal_proximal_phalanx_4")
HAnimSegment2297.setDEF("hanim_r_carpal_proximal_phalanx_4")
Shape2298 = x3d.Shape()
LineSet2299 = x3d.LineSet()
LineSet2299.setVertexCount([2])
ColorRGBA2300 = x3d.ColorRGBA()
ColorRGBA2300.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2299.setColor(ColorRGBA2300)
Coordinate2301 = x3d.Coordinate()
Coordinate2301.setPoint(x3d.doubleToFloat([-0.1833,0.63405,-0.02144,-0.18072,0.68625,-0.01992]))

LineSet2299.setCoord(Coordinate2301)

Shape2298.setGeometry(LineSet2299)

HAnimSegment2297.addChildren(Shape2298)

HAnimJoint2296.addChildren(HAnimSegment2297)
HAnimJoint2302 = x3d.HAnimJoint()
HAnimJoint2302.setName("r_carpal_proximal_interphalangeal_4")
HAnimJoint2302.setDEF("hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint2302.setCenter(x3d.doubleToFloat([-0.1813,0.6066,-0.02064]))
HAnimJoint2302.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2302.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2303 = x3d.HAnimSegment()
HAnimSegment2303.setName("r_carpal_middle_phalanx_4")
HAnimSegment2303.setDEF("hanim_r_carpal_middle_phalanx_4")
Shape2304 = x3d.Shape()
LineSet2305 = x3d.LineSet()
LineSet2305.setVertexCount([2])
ColorRGBA2306 = x3d.ColorRGBA()
ColorRGBA2306.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2305.setColor(ColorRGBA2306)
Coordinate2307 = x3d.Coordinate()
Coordinate2307.setPoint(x3d.doubleToFloat([-0.1813,0.6066,-0.02064,-0.1833,0.63405,-0.02144]))

LineSet2305.setCoord(Coordinate2307)

Shape2304.setGeometry(LineSet2305)

HAnimSegment2303.addChildren(Shape2304)

HAnimJoint2302.addChildren(HAnimSegment2303)
HAnimJoint2308 = x3d.HAnimJoint()
HAnimJoint2308.setName("r_carpal_distal_interphalangeal_4")
HAnimJoint2308.setDEF("hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint2308.setCenter(x3d.doubleToFloat([-0.18029,0.5807,-0.01978]))
HAnimJoint2308.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2308.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2309 = x3d.HAnimSegment()
HAnimSegment2309.setName("r_carpal_distal_phalanx_4")
HAnimSegment2309.setDEF("hanim_r_carpal_distal_phalanx_4")
HAnimSite2310 = x3d.HAnimSite()
HAnimSite2310.setName("r_carpal_distal_phalanx_4")
HAnimSite2310.setDEF("hanim_r_carpal_distal_phalanx_4_tip")
HAnimSite2310.setTranslation(x3d.doubleToFloat([-0.172,0.559,-0.024]))
TouchSensor2311 = x3d.TouchSensor()
TouchSensor2311.setDescription("HAnimSite 109 hanim_r_carpal_distal_phalanx_4_tip")

HAnimSite2310.addChildren(TouchSensor2311)
Shape2312 = x3d.Shape()
Appearance2313 = x3d.Appearance()
Material2314 = x3d.Material()
Material2314.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance2313.setMaterial(Material2314)

Shape2312.setAppearance(Appearance2313)
IndexedFaceSet2315 = x3d.IndexedFaceSet()
IndexedFaceSet2315.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet2315.setCreaseAngle(0.5)
IndexedFaceSet2315.setSolid(False)
ColorRGBA2316 = x3d.ColorRGBA()
ColorRGBA2316.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet2315.setColor(ColorRGBA2316)
Coordinate2317 = x3d.Coordinate()
Coordinate2317.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet2315.setCoord(Coordinate2317)

Shape2312.setGeometry(IndexedFaceSet2315)

HAnimSite2310.addChildren(Shape2312)
Billboard2318 = x3d.Billboard()
Billboard2318.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape2319 = x3d.Shape()
Text2320 = x3d.Text()
Text2320.setString(["109"])
FontStyle2321 = x3d.FontStyle()
FontStyle2321.setSize(0.035)

Text2320.setFontStyle(FontStyle2321)

Shape2319.setGeometry(Text2320)

Billboard2318.addChildren(Shape2319)

HAnimSite2310.addChildren(Billboard2318)

HAnimSegment2309.addChildren(HAnimSite2310)
Shape2322 = x3d.Shape()
LineSet2323 = x3d.LineSet()
LineSet2323.setVertexCount([2])
ColorRGBA2324 = x3d.ColorRGBA()
ColorRGBA2324.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2323.setColor(ColorRGBA2324)
Coordinate2325 = x3d.Coordinate()
Coordinate2325.setPoint(x3d.doubleToFloat([-0.18029,0.5807,-0.01978,-0.1813,0.6066,-0.02064]))

LineSet2323.setCoord(Coordinate2325)

Shape2322.setGeometry(LineSet2323)

HAnimSegment2309.addChildren(Shape2322)

HAnimJoint2308.addChildren(HAnimSegment2309)

HAnimJoint2302.addChildren(HAnimJoint2308)

HAnimJoint2296.addChildren(HAnimJoint2302)

HAnimJoint2290.addChildren(HAnimJoint2296)

HAnimJoint2284.addChildren(HAnimJoint2290)

HAnimJoint2110.addChildren(HAnimJoint2284)
HAnimJoint2326 = x3d.HAnimJoint()
HAnimJoint2326.setName("r_carpometacarpal_5")
HAnimJoint2326.setDEF("hanim_r_carpometacarpal_5")
HAnimJoint2326.setCenter(x3d.doubleToFloat([-0.18126,0.68827,-0.03278]))
HAnimJoint2326.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2326.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2327 = x3d.HAnimSegment()
HAnimSegment2327.setName("r_metacarpal_5")
HAnimSegment2327.setDEF("hanim_r_metacarpal_5")
HAnimSite2328 = x3d.HAnimSite()
HAnimSite2328.setName("r_metacarpal_phalanx_5")
HAnimSite2328.setDEF("hanim_r_metacarpal_phalanx_5_pt")
HAnimSite2328.setTranslation(x3d.doubleToFloat([-0.2,0.665,-0.036]))
TouchSensor2329 = x3d.TouchSensor()
TouchSensor2329.setDescription("HAnimSite 80 hanim_r_metacarpal_phalanx_5_pt")

HAnimSite2328.addChildren(TouchSensor2329)
Shape2330 = x3d.Shape()
Appearance2331 = x3d.Appearance()
Material2332 = x3d.Material()
Material2332.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance2331.setMaterial(Material2332)

Shape2330.setAppearance(Appearance2331)
IndexedFaceSet2333 = x3d.IndexedFaceSet()
IndexedFaceSet2333.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet2333.setCreaseAngle(0.5)
IndexedFaceSet2333.setSolid(False)
ColorRGBA2334 = x3d.ColorRGBA()
ColorRGBA2334.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet2333.setColor(ColorRGBA2334)
Coordinate2335 = x3d.Coordinate()
Coordinate2335.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet2333.setCoord(Coordinate2335)

Shape2330.setGeometry(IndexedFaceSet2333)

HAnimSite2328.addChildren(Shape2330)
Billboard2336 = x3d.Billboard()
Billboard2336.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape2337 = x3d.Shape()
Text2338 = x3d.Text()
Text2338.setString(["80"])
FontStyle2339 = x3d.FontStyle()
FontStyle2339.setSize(0.035)

Text2338.setFontStyle(FontStyle2339)

Shape2337.setGeometry(Text2338)

Billboard2336.addChildren(Shape2337)

HAnimSite2328.addChildren(Billboard2336)

HAnimSegment2327.addChildren(HAnimSite2328)
Shape2340 = x3d.Shape()
LineSet2341 = x3d.LineSet()
LineSet2341.setVertexCount([2])
ColorRGBA2342 = x3d.ColorRGBA()
ColorRGBA2342.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2341.setColor(ColorRGBA2342)
Coordinate2343 = x3d.Coordinate()
Coordinate2343.setPoint(x3d.doubleToFloat([-0.18126,0.68827,-0.03278,-0.1816,0.7242,-0.005]))

LineSet2341.setCoord(Coordinate2343)

Shape2340.setGeometry(LineSet2341)

HAnimSegment2327.addChildren(Shape2340)

HAnimJoint2326.addChildren(HAnimSegment2327)
HAnimJoint2344 = x3d.HAnimJoint()
HAnimJoint2344.setName("r_metacarpophalangeal_5")
HAnimJoint2344.setDEF("hanim_r_metacarpophalangeal_5")
HAnimJoint2344.setCenter(x3d.doubleToFloat([-0.18297,0.6381,-0.0371]))
HAnimJoint2344.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2344.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2345 = x3d.HAnimSegment()
HAnimSegment2345.setName("r_carpal_proximal_phalanx_5")
HAnimSegment2345.setDEF("hanim_r_carpal_proximal_phalanx_5")
Shape2346 = x3d.Shape()
LineSet2347 = x3d.LineSet()
LineSet2347.setVertexCount([2])
ColorRGBA2348 = x3d.ColorRGBA()
ColorRGBA2348.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2347.setColor(ColorRGBA2348)
Coordinate2349 = x3d.Coordinate()
Coordinate2349.setPoint(x3d.doubleToFloat([-0.18297,0.6381,-0.0371,-0.18126,0.68827,-0.03278]))

LineSet2347.setCoord(Coordinate2349)

Shape2346.setGeometry(LineSet2347)

HAnimSegment2345.addChildren(Shape2346)

HAnimJoint2344.addChildren(HAnimSegment2345)
HAnimJoint2350 = x3d.HAnimJoint()
HAnimJoint2350.setName("r_carpal_proximal_interphalangeal_5")
HAnimJoint2350.setDEF("hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint2350.setCenter(x3d.doubleToFloat([-0.1813,0.621,-0.03715]))
HAnimJoint2350.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2350.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2351 = x3d.HAnimSegment()
HAnimSegment2351.setName("r_carpal_middle_phalanx_5")
HAnimSegment2351.setDEF("hanim_r_carpal_middle_phalanx_5")
Shape2352 = x3d.Shape()
LineSet2353 = x3d.LineSet()
LineSet2353.setVertexCount([2])
ColorRGBA2354 = x3d.ColorRGBA()
ColorRGBA2354.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2353.setColor(ColorRGBA2354)
Coordinate2355 = x3d.Coordinate()
Coordinate2355.setPoint(x3d.doubleToFloat([-0.1813,0.621,-0.03715,-0.18297,0.6381,-0.0371]))

LineSet2353.setCoord(Coordinate2355)

Shape2352.setGeometry(LineSet2353)

HAnimSegment2351.addChildren(Shape2352)

HAnimJoint2350.addChildren(HAnimSegment2351)
HAnimJoint2356 = x3d.HAnimJoint()
HAnimJoint2356.setName("r_carpal_distal_interphalangeal_5")
HAnimJoint2356.setDEF("hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint2356.setCenter(x3d.doubleToFloat([-0.18045,0.602325,-0.03697]))
HAnimJoint2356.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint2356.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment2357 = x3d.HAnimSegment()
HAnimSegment2357.setName("r_carpal_distal_phalanx_5")
HAnimSegment2357.setDEF("hanim_r_carpal_distal_phalanx_5")
HAnimSite2358 = x3d.HAnimSite()
HAnimSite2358.setName("r_carpal_distal_phalanx_5")
HAnimSite2358.setDEF("hanim_r_carpal_distal_phalanx_5_tip")
HAnimSite2358.setTranslation(x3d.doubleToFloat([-0.172,0.58,-0.039]))
TouchSensor2359 = x3d.TouchSensor()
TouchSensor2359.setDescription("HAnimSite 110 hanim_r_carpal_distal_phalanx_5_tip")

HAnimSite2358.addChildren(TouchSensor2359)
Shape2360 = x3d.Shape()
Appearance2361 = x3d.Appearance()
Material2362 = x3d.Material()
Material2362.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance2361.setMaterial(Material2362)

Shape2360.setAppearance(Appearance2361)
IndexedFaceSet2363 = x3d.IndexedFaceSet()
IndexedFaceSet2363.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet2363.setCreaseAngle(0.5)
IndexedFaceSet2363.setSolid(False)
ColorRGBA2364 = x3d.ColorRGBA()
ColorRGBA2364.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet2363.setColor(ColorRGBA2364)
Coordinate2365 = x3d.Coordinate()
Coordinate2365.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet2363.setCoord(Coordinate2365)

Shape2360.setGeometry(IndexedFaceSet2363)

HAnimSite2358.addChildren(Shape2360)
Billboard2366 = x3d.Billboard()
Billboard2366.setAxisOfRotation(x3d.doubleToFloat([0,0,0]))
Shape2367 = x3d.Shape()
Text2368 = x3d.Text()
Text2368.setString(["110"])
FontStyle2369 = x3d.FontStyle()
FontStyle2369.setSize(0.035)

Text2368.setFontStyle(FontStyle2369)

Shape2367.setGeometry(Text2368)

Billboard2366.addChildren(Shape2367)

HAnimSite2358.addChildren(Billboard2366)

HAnimSegment2357.addChildren(HAnimSite2358)
Shape2370 = x3d.Shape()
LineSet2371 = x3d.LineSet()
LineSet2371.setVertexCount([2])
ColorRGBA2372 = x3d.ColorRGBA()
ColorRGBA2372.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,1]))

LineSet2371.setColor(ColorRGBA2372)
Coordinate2373 = x3d.Coordinate()
Coordinate2373.setPoint(x3d.doubleToFloat([-0.18045,0.602325,-0.03697,-0.1813,0.621,-0.03715]))

LineSet2371.setCoord(Coordinate2373)

Shape2370.setGeometry(LineSet2371)

HAnimSegment2357.addChildren(Shape2370)

HAnimJoint2356.addChildren(HAnimSegment2357)

HAnimJoint2350.addChildren(HAnimJoint2356)

HAnimJoint2344.addChildren(HAnimJoint2350)

HAnimJoint2326.addChildren(HAnimJoint2344)

HAnimJoint2110.addChildren(HAnimJoint2326)

HAnimJoint2080.addChildren(HAnimJoint2110)

HAnimJoint2026.addChildren(HAnimJoint2080)

HAnimJoint1972.addChildren(HAnimJoint2026)

HAnimJoint1954.addChildren(HAnimJoint1972)

HAnimJoint1126.addChildren(HAnimJoint1954)

HAnimJoint1120.addChildren(HAnimJoint1126)

HAnimJoint1114.addChildren(HAnimJoint1120)

HAnimJoint1108.addChildren(HAnimJoint1114)

HAnimJoint1102.addChildren(HAnimJoint1108)

HAnimJoint1096.addChildren(HAnimJoint1102)

HAnimJoint1090.addChildren(HAnimJoint1096)

HAnimJoint1084.addChildren(HAnimJoint1090)

HAnimJoint1018.addChildren(HAnimJoint1084)

HAnimJoint988.addChildren(HAnimJoint1018)

HAnimJoint982.addChildren(HAnimJoint988)

HAnimJoint976.addChildren(HAnimJoint982)

HAnimJoint970.addChildren(HAnimJoint976)

HAnimJoint940.addChildren(HAnimJoint970)

HAnimJoint934.addChildren(HAnimJoint940)

HAnimJoint928.addChildren(HAnimJoint934)

HAnimJoint862.addChildren(HAnimJoint928)

HAnimJoint12.addChildren(HAnimJoint862)

HAnimHumanoid11.addSkeleton(HAnimJoint12)

Scene4.addChildren(HAnimHumanoid11)
NavigationInfo2374 = x3d.NavigationInfo()
NavigationInfo2374.setHeadlight(False)

Scene4.addChildren(NavigationInfo2374)
Background2375 = x3d.Background()
Background2375.setDEF("Background1")
Background2375.setGroundColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Background2375.setSkyColor(x3d.doubleToFloat([0.4,0.4,0.4]))

Scene4.addChildren(Background2375)
DirectionalLight2376 = x3d.DirectionalLight()
DirectionalLight2376.setGlobal(True)

Scene4.addChildren(DirectionalLight2376)
Viewpoint2377 = x3d.Viewpoint()
Viewpoint2377.setCenterOfRotation(x3d.doubleToFloat([0,1,0]))
Viewpoint2377.setDescription("JinLOA4")
Viewpoint2377.setPosition(x3d.doubleToFloat([0,1,3]))

Scene4.addChildren(Viewpoint2377)
Transform2378 = x3d.Transform()
Transform2378.setDEF("Landmark000")
#Another Parent Scene 0 0 0 landmark
Shape2379 = x3d.Shape()
Shape2379.setDEF("HAnim000Landmark")
Appearance2380 = x3d.Appearance()
Material2381 = x3d.Material()
Material2381.setDiffuseColor(x3d.doubleToFloat([0,1,0]))
Material2381.setEmissiveColor(x3d.doubleToFloat([0,1,0]))

Appearance2380.setMaterial(Material2381)

Shape2379.setAppearance(Appearance2380)
Sphere2382 = x3d.Sphere()
Sphere2382.setRadius(0.01)

Shape2379.setGeometry(Sphere2382)

Transform2378.addChild(Shape2379)

Scene4.addChildren(Transform2378)

X3D0.setScene(Scene4)
X3D0.toFileX3D("../data/Jin20fSegmented.new.python.x3d")
X3D0.toFileJSON("../data/Jin20fSegmented.new.python.json")
